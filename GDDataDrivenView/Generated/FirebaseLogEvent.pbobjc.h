// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: firebase_log_event.proto

// This CPP symbol can be defined to use imports that match up to the framework
// imports needed when using CocoaPods.
#if !defined(GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS)
 #define GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS 0
#endif

#if GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS
 #import <Protobuf/GPBProtocolBuffers.h>
#else
 #import "GPBProtocolBuffers.h"
#endif

#if GOOGLE_PROTOBUF_OBJC_VERSION < 30002
#error This file was generated by a newer version of protoc which is incompatible with your Protocol Buffer library sources.
#endif
#if 30002 < GOOGLE_PROTOBUF_OBJC_MIN_SUPPORTED_VERSION
#error This file was generated by an older version of protoc which is incompatible with your Protocol Buffer library sources.
#endif

// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

CF_EXTERN_C_BEGIN

NS_ASSUME_NONNULL_BEGIN

#pragma mark - Enum FIRLogEvents

typedef GPB_ENUM(FIRLogEvents) {
  /**
   * Value used if any message's field encounters a value that is not defined
   * by this enum. The message will also have C functions to get/set the rawValue
   * of the field.
   **/
  FIRLogEvents_GPBUnrecognizedEnumeratorValue = kGPBUnrecognizedEnumeratorValue,
  FIRLogEvents_LogEventNameUnset = 0,

  /** when a user has selected content in an app. */
  FIRLogEvents_SelectContent = 1,

  /** when a user has shared content in an app. */
  FIRLogEvents_Share = 2,

  /** when a user has spent virtual currency (coins, gems, tokens, etc.) in the app. */
  FIRLogEvents_SpendVirtualCurrency = 3,

  /** when a user has signed up. Allows you to see which methods of sign-up (e.g., Google account, email address, etc.) are most popular. */
  FIRLogEvents_SignUp = 4,

  /** when a user searches in the app. */
  FIRLogEvents_Search = 5,

  /** when a user is presented with an offer. */
  FIRLogEvents_PresentOffer = 6,

  /** when a user joins a group. Allows you to track the popularity of various clans or user groups. */
  FIRLogEvents_JoinGroup = 7,

  /** 无参数 when a user begins a tutorial. */
  FIRLogEvents_TutorialBegin = 8,

  /** 无参数 When a user completes a tutorial. */
  FIRLogEvents_TutorialComplete = 9,

  /** 无参数 when a user adds billing information */
  FIRLogEvents_AddPaymentInfo = 10,

  /** when a user sees one specific item/offering */
  FIRLogEvents_ViewItem = 11,

  /** when a user sees a list of items/offerings */
  FIRLogEvents_ViewItemList = 12,

  /** when a user sees search results */
  FIRLogEvents_ViewSearchResults = 13,

  /** when a user completes a purchase */
  FIRLogEvents_EcommercePurchase = 14,

  /** when a refund is issued */
  FIRLogEvents_PurchaseRefund = 15,

  /** when a user adds items to cart */
  FIRLogEvents_AddToCart = 16,

  /** when a user begins checkout */
  FIRLogEvents_BeginCheckout = 17,

  /** when a user adds an item to wishlist */
  FIRLogEvents_AddToWishlist = 18,
  FIRLogEvents_GenerateLead = 19,

  /** when a player levels-up in the game. */
  FIRLogEvents_LevelUp = 20,

  /** when a player posts his or her score. */
  FIRLogEvents_PostScore = 21,

  /** when a player unlocks an achievement. */
  FIRLogEvents_UnlockAchievement = 22,
};

GPBEnumDescriptor *FIRLogEvents_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL FIRLogEvents_IsValidValue(int32_t value);

#pragma mark - FIRFirebaseLogEventRoot

/**
 * Exposes the extension registry for this file.
 *
 * The base class provides:
 * @code
 *   + (GPBExtensionRegistry *)extensionRegistry;
 * @endcode
 * which is a @c GPBExtensionRegistry that includes all the extensions defined by
 * this file and all files that it depends on.
 **/
@interface FIRFirebaseLogEventRoot : GPBRootObject
@end

#pragma mark - FIRSelectContentEvent

typedef GPB_ENUM(FIRSelectContentEvent_FieldNumber) {
  FIRSelectContentEvent_FieldNumber_ContentType = 1,
  FIRSelectContentEvent_FieldNumber_ItemId = 2,
};

@interface FIRSelectContentEvent : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *contentType;

@property(nonatomic, readwrite, copy, null_resettable) NSString *itemId;

@end

#pragma mark - FIRShareEvent

typedef GPB_ENUM(FIRShareEvent_FieldNumber) {
  FIRShareEvent_FieldNumber_ContentType = 1,
  FIRShareEvent_FieldNumber_ItemId = 2,
};

@interface FIRShareEvent : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *contentType;

@property(nonatomic, readwrite, copy, null_resettable) NSString *itemId;

@end

#pragma mark - FIRSpendVirtualCurrencyEvent

typedef GPB_ENUM(FIRSpendVirtualCurrencyEvent_FieldNumber) {
  FIRSpendVirtualCurrencyEvent_FieldNumber_ItemName = 1,
  FIRSpendVirtualCurrencyEvent_FieldNumber_VirtualCurrencyName = 2,
  FIRSpendVirtualCurrencyEvent_FieldNumber_Value = 3,
};

@interface FIRSpendVirtualCurrencyEvent : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *itemName;

@property(nonatomic, readwrite, copy, null_resettable) NSString *virtualCurrencyName;

@property(nonatomic, readwrite) int32_t value;

@end

#pragma mark - FIRSignUpEvent

typedef GPB_ENUM(FIRSignUpEvent_FieldNumber) {
  FIRSignUpEvent_FieldNumber_Method = 1,
};

@interface FIRSignUpEvent : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *method;

@end

#pragma mark - FIRSearchEvent

typedef GPB_ENUM(FIRSearchEvent_FieldNumber) {
  FIRSearchEvent_FieldNumber_SearchTerm = 1,
  FIRSearchEvent_FieldNumber_StartDate = 2,
  FIRSearchEvent_FieldNumber_EndDate = 3,
  FIRSearchEvent_FieldNumber_Origin = 4,
  FIRSearchEvent_FieldNumber_Destination = 5,
};

@interface FIRSearchEvent : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *searchTerm;

@property(nonatomic, readwrite, copy, null_resettable) NSString *startDate;

@property(nonatomic, readwrite, copy, null_resettable) NSString *endDate;

@property(nonatomic, readwrite, copy, null_resettable) NSString *origin;

@property(nonatomic, readwrite, copy, null_resettable) NSString *destination;

@end

#pragma mark - FIRPresentOfferEvent

typedef GPB_ENUM(FIRPresentOfferEvent_FieldNumber) {
  FIRPresentOfferEvent_FieldNumber_ItemId = 1,
  FIRPresentOfferEvent_FieldNumber_ItemName = 2,
  FIRPresentOfferEvent_FieldNumber_ItemCategory = 3,
};

@interface FIRPresentOfferEvent : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *itemId;

@property(nonatomic, readwrite, copy, null_resettable) NSString *itemName;

@property(nonatomic, readwrite, copy, null_resettable) NSString *itemCategory;

@end

#pragma mark - FIRJoinGroupEvent

typedef GPB_ENUM(FIRJoinGroupEvent_FieldNumber) {
  FIRJoinGroupEvent_FieldNumber_GroupId = 1,
};

@interface FIRJoinGroupEvent : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *groupId;

@end

#pragma mark - FIRViewItemEvent

typedef GPB_ENUM(FIRViewItemEvent_FieldNumber) {
  FIRViewItemEvent_FieldNumber_ItemId = 1,
  FIRViewItemEvent_FieldNumber_ItemLocationId = 2,
  FIRViewItemEvent_FieldNumber_ContentType = 3,
  FIRViewItemEvent_FieldNumber_ItemName = 4,
  FIRViewItemEvent_FieldNumber_ItemCategory = 5,
  FIRViewItemEvent_FieldNumber_Currency = 6,
  FIRViewItemEvent_FieldNumber_Value = 7,
  FIRViewItemEvent_FieldNumber_SearchTerm = 8,
  FIRViewItemEvent_FieldNumber_StartDate = 9,
  FIRViewItemEvent_FieldNumber_EndDate = 10,
};

@interface FIRViewItemEvent : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *itemId;

@property(nonatomic, readwrite, copy, null_resettable) NSString *itemLocationId;

@property(nonatomic, readwrite, copy, null_resettable) NSString *contentType;

@property(nonatomic, readwrite, copy, null_resettable) NSString *itemName;

@property(nonatomic, readwrite, copy, null_resettable) NSString *itemCategory;

@property(nonatomic, readwrite, copy, null_resettable) NSString *currency;

@property(nonatomic, readwrite, copy, null_resettable) NSString *value;

@property(nonatomic, readwrite, copy, null_resettable) NSString *searchTerm;

@property(nonatomic, readwrite, copy, null_resettable) NSString *startDate;

@property(nonatomic, readwrite, copy, null_resettable) NSString *endDate;

@end

#pragma mark - FIRViewItemListEvent

typedef GPB_ENUM(FIRViewItemListEvent_FieldNumber) {
  FIRViewItemListEvent_FieldNumber_ItemCategory = 1,
  FIRViewItemListEvent_FieldNumber_StartDate = 2,
  FIRViewItemListEvent_FieldNumber_EndDate = 3,
};

@interface FIRViewItemListEvent : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *itemCategory;

@property(nonatomic, readwrite, copy, null_resettable) NSString *startDate;

@property(nonatomic, readwrite, copy, null_resettable) NSString *endDate;

@end

#pragma mark - FIRViewSearchResultsEvent

typedef GPB_ENUM(FIRViewSearchResultsEvent_FieldNumber) {
  FIRViewSearchResultsEvent_FieldNumber_SearchTerm = 1,
};

@interface FIRViewSearchResultsEvent : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *searchTerm;

@end

#pragma mark - FIREcommercePurchaseEvent

typedef GPB_ENUM(FIREcommercePurchaseEvent_FieldNumber) {
  FIREcommercePurchaseEvent_FieldNumber_Coupon = 1,
  FIREcommercePurchaseEvent_FieldNumber_Currency = 2,
  FIREcommercePurchaseEvent_FieldNumber_Value = 3,
  FIREcommercePurchaseEvent_FieldNumber_Tax = 4,
  FIREcommercePurchaseEvent_FieldNumber_Shipping = 5,
  FIREcommercePurchaseEvent_FieldNumber_TransactionId = 6,
  FIREcommercePurchaseEvent_FieldNumber_Quantity = 7,
  FIREcommercePurchaseEvent_FieldNumber_Location = 8,
  FIREcommercePurchaseEvent_FieldNumber_StartDate = 9,
  FIREcommercePurchaseEvent_FieldNumber_EndDate = 10,
  FIREcommercePurchaseEvent_FieldNumber_Origin = 11,
  FIREcommercePurchaseEvent_FieldNumber_Destination = 12,
};

@interface FIREcommercePurchaseEvent : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *coupon;

@property(nonatomic, readwrite, copy, null_resettable) NSString *currency;

@property(nonatomic, readwrite) int32_t value;

@property(nonatomic, readwrite, copy, null_resettable) NSString *tax;

@property(nonatomic, readwrite, copy, null_resettable) NSString *shipping;

@property(nonatomic, readwrite, copy, null_resettable) NSString *transactionId;

@property(nonatomic, readwrite) int32_t quantity;

@property(nonatomic, readwrite, copy, null_resettable) NSString *location;

@property(nonatomic, readwrite, copy, null_resettable) NSString *startDate;

@property(nonatomic, readwrite, copy, null_resettable) NSString *endDate;

@property(nonatomic, readwrite, copy, null_resettable) NSString *origin;

@property(nonatomic, readwrite, copy, null_resettable) NSString *destination;

@end

#pragma mark - FIRPurchaseRefundEvent

typedef GPB_ENUM(FIRPurchaseRefundEvent_FieldNumber) {
  FIRPurchaseRefundEvent_FieldNumber_Quantity = 1,
  FIRPurchaseRefundEvent_FieldNumber_Value = 2,
  FIRPurchaseRefundEvent_FieldNumber_Currency = 3,
  FIRPurchaseRefundEvent_FieldNumber_TransactionId = 4,
};

@interface FIRPurchaseRefundEvent : GPBMessage

@property(nonatomic, readwrite) int32_t quantity;

@property(nonatomic, readwrite) int32_t value;

@property(nonatomic, readwrite, copy, null_resettable) NSString *currency;

@property(nonatomic, readwrite, copy, null_resettable) NSString *transactionId;

@end

#pragma mark - FIRAddToCartEvent

typedef GPB_ENUM(FIRAddToCartEvent_FieldNumber) {
  FIRAddToCartEvent_FieldNumber_Quantity = 1,
  FIRAddToCartEvent_FieldNumber_ItemCategory = 2,
  FIRAddToCartEvent_FieldNumber_ItemName = 3,
  FIRAddToCartEvent_FieldNumber_ItemId = 4,
  FIRAddToCartEvent_FieldNumber_ItemLocationId = 5,
  FIRAddToCartEvent_FieldNumber_Value = 6,
  FIRAddToCartEvent_FieldNumber_Price = 7,
  FIRAddToCartEvent_FieldNumber_Currency = 8,
};

@interface FIRAddToCartEvent : GPBMessage

@property(nonatomic, readwrite) int32_t quantity;

@property(nonatomic, readwrite, copy, null_resettable) NSString *itemCategory;

@property(nonatomic, readwrite, copy, null_resettable) NSString *itemName;

@property(nonatomic, readwrite, copy, null_resettable) NSString *itemId;

@property(nonatomic, readwrite, copy, null_resettable) NSString *itemLocationId;

@property(nonatomic, readwrite) int32_t value;

@property(nonatomic, readwrite) int32_t price;

@property(nonatomic, readwrite, copy, null_resettable) NSString *currency;

@end

#pragma mark - FIRBeginCheckoutEvent

typedef GPB_ENUM(FIRBeginCheckoutEvent_FieldNumber) {
  FIRBeginCheckoutEvent_FieldNumber_Coupon = 1,
  FIRBeginCheckoutEvent_FieldNumber_Currency = 2,
  FIRBeginCheckoutEvent_FieldNumber_Value = 3,
};

@interface FIRBeginCheckoutEvent : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *coupon;

@property(nonatomic, readwrite, copy, null_resettable) NSString *currency;

@property(nonatomic, readwrite) int32_t value;

@end

#pragma mark - FIRAddToWishlistEvent

typedef GPB_ENUM(FIRAddToWishlistEvent_FieldNumber) {
  FIRAddToWishlistEvent_FieldNumber_Quantity = 1,
  FIRAddToWishlistEvent_FieldNumber_ItemCategory = 2,
  FIRAddToWishlistEvent_FieldNumber_ItemName = 3,
  FIRAddToWishlistEvent_FieldNumber_ItemId = 4,
  FIRAddToWishlistEvent_FieldNumber_ItemLocationId = 5,
  FIRAddToWishlistEvent_FieldNumber_Value = 6,
  FIRAddToWishlistEvent_FieldNumber_Price = 7,
  FIRAddToWishlistEvent_FieldNumber_Currency = 8,
};

@interface FIRAddToWishlistEvent : GPBMessage

@property(nonatomic, readwrite) int32_t quantity;

@property(nonatomic, readwrite, copy, null_resettable) NSString *itemCategory;

@property(nonatomic, readwrite, copy, null_resettable) NSString *itemName;

@property(nonatomic, readwrite, copy, null_resettable) NSString *itemId;

@property(nonatomic, readwrite, copy, null_resettable) NSString *itemLocationId;

@property(nonatomic, readwrite) int32_t value;

@property(nonatomic, readwrite) int32_t price;

@property(nonatomic, readwrite, copy, null_resettable) NSString *currency;

@end

#pragma mark - FIRGenerateLeadEvent

typedef GPB_ENUM(FIRGenerateLeadEvent_FieldNumber) {
  FIRGenerateLeadEvent_FieldNumber_Value = 1,
  FIRGenerateLeadEvent_FieldNumber_Currency = 2,
};

@interface FIRGenerateLeadEvent : GPBMessage

@property(nonatomic, readwrite) int32_t value;

@property(nonatomic, readwrite, copy, null_resettable) NSString *currency;

@end

#pragma mark - FIRLevelUpEvent

typedef GPB_ENUM(FIRLevelUpEvent_FieldNumber) {
  FIRLevelUpEvent_FieldNumber_Character = 1,
  FIRLevelUpEvent_FieldNumber_Level = 2,
};

@interface FIRLevelUpEvent : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *character;

@property(nonatomic, readwrite) int32_t level;

@end

#pragma mark - FIRPostScoreEvent

typedef GPB_ENUM(FIRPostScoreEvent_FieldNumber) {
  FIRPostScoreEvent_FieldNumber_Character = 1,
  FIRPostScoreEvent_FieldNumber_Level = 2,
  FIRPostScoreEvent_FieldNumber_Score = 3,
};

@interface FIRPostScoreEvent : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *character;

@property(nonatomic, readwrite) int32_t level;

@property(nonatomic, readwrite) int32_t score;

@end

#pragma mark - FIRUnlockAchievementEvent

typedef GPB_ENUM(FIRUnlockAchievementEvent_FieldNumber) {
  FIRUnlockAchievementEvent_FieldNumber_AchievementId = 1,
};

@interface FIRUnlockAchievementEvent : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *achievementId;

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)