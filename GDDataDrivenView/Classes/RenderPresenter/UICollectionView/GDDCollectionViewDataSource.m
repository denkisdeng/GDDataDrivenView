//
// Created by Larry Tin on 7/31/16.
//

#import "GDDCollectionViewDataSource.h"
#import "GDDRender.h"
#import "GDDCollectionViewLayout.h"
#import "GDDRenderModel.h"

@interface GDDCollectionViewDataSource ()
@property(nonatomic, weak) GDDCollectionViewLayout *layout;
@end

@implementation GDDCollectionViewDataSource {
}
- (instancetype)initWithCollectionView:(UICollectionView *)collectionView withLayout:(GDDCollectionViewLayout *)layout withOwner:(id)owner {
  self = [super initWithView:collectionView withOwner:owner];
  if (self) {
    _layout = layout;
  }
  return self;
}

#pragma mark UICollectionViewDataSource

- (NSInteger)numberOfSectionsInCollectionView:(UICollectionView *)collectionView {
  return [super numberOfSections];
}

- (NSInteger)collectionView:(UICollectionView *)collectionView numberOfItemsInSection:(NSInteger)section {
  return [super numberOfItemsInSection:section];
}

- (UICollectionViewCell *)collectionView:(UICollectionView *)collectionView cellForItemAtIndexPath:(NSIndexPath *)indexPath {
  GDDRenderModel *model = [super modelForIndexPath:indexPath];
  UICollectionViewCell *cell = [collectionView dequeueReusableCellWithReuseIdentifier:model.renderType forIndexPath:indexPath];
  // Configure the cell for this indexPath
  [super reloadModel:model forRender:cell];

  return cell;
}

@end