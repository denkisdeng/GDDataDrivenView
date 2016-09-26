//
//  Created by Larry Tin on 07/09/2016.
//

#import "GDDViewController.h"
#import "GDDTableViewLayout.h"
#import "NSObject+GDChannel.h"
#import "GDCBusProvider.h"

@interface GDDViewController ()
@property(nonatomic) GDDTableViewLayout *layout;
@end

@implementation GDDViewController {
}

- (void)viewDidLoad {
  self.topic = [GDCBusProvider.clientId stringByAppendingPathComponent:@"abcView"];
  [self.bus subscribe:[GDCBusProvider.clientId stringByAppendingPathComponent:@"#"] handler:^(id <GDCMessage> message) {

  }];
  __weak GDDViewController *weakSelf = self;
  NSString *layoutTopic = [self.topic stringByAppendingPathComponent:@"layouts/xyzTable"];
  self.layout = [[GDDTableViewLayout alloc] initWithTableView:self.tableView withTopic:layoutTopic withOwner:self];
//  self.layout.infiniteScrollingHandler = ^(NSArray<GDDRenderModel *> *models, void (^loadComplete)(BOOL)) {
//      dispatch_after(dispatch_time(DISPATCH_TIME_NOW, .1 * NSEC_PER_SEC), dispatch_get_main_queue(), ^(void) {
//          [weakSelf appendToLastRow:models.lastObject];
//          // 当没有了下一页数据时, 调用loadComplete(NO)
//          // loadComplete(NO);
//      });
//  };

  [self requestJsonModels:^(NSArray<NSDictionary *> *array) {
      NSArray *models = [GDDViewController createModelsFromJsonArray:array];
      [NSObject.bus publishLocal:[weakSelf.layout topicForSection:0] payload:models];
  }];

  [super viewDidLoad];
}

- (void)appendToLastRow:(GDDRenderModel *)model {
  GDCOptions *opt = [[GDCOptions alloc] init];
  opt.patch = YES;
  GDDRenderModel *copy = [[GDDRenderModel alloc] initWithData:model.data withId:nil withNibNameOrRenderClass:model.renderType];
  [NSObject.bus publishLocal:[self.layout topicForSection:0] payload:@[copy] options:opt];
}

- (void)requestJsonModels:(void (^)(NSArray<NSDictionary *> *))callback {
  // Simulate an async request
  dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), ^{
      // Data from `test_data.json`
      NSString *dataFilePath = [[NSBundle mainBundle] pathForResource:@"test_data" ofType:@"json"];
      NSData *data = [NSData dataWithContentsOfFile:dataFilePath];
      NSArray *json = [NSJSONSerialization JSONObjectWithData:data options:NSJSONReadingMutableContainers error:nil];
      // Callback
      dispatch_async(dispatch_get_main_queue(), ^{
          !callback ?: callback(json);
      });
  });
}

+ (NSArray<GDDRenderModel *> *)createModelsFromJsonArray:(NSArray *)array {
  NSMutableArray<GDDRenderModel *> *models = [NSMutableArray array];
  for (NSDictionary *json in array) {
    GDDRenderModel *model = [[GDDRenderModel alloc] initWithData:json[@"data"] withId:json[@"mid"] withNibNameOrRenderClass:json[@"renderType"]];
    [models addObject:model];
  }
  return models;
}
@end
