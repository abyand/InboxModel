#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class Inbox:modelCategoryInbox, Inbox:modelGiftCardDetail, Inbox:modelGiftCardPayload, Inbox:modelInboxStatus, Inbox:modelInbox, Inbox:modelInboxDeeplink, Inbox:modelInboxGiftCard, Inbox:modelInboxInfo, Inbox:modelInboxPromo, Inbox:modelInboxReminder, Inbox:modelKotlinEnumCompanion, Inbox:modelKotlinEnum<E>, Inbox:modelInboxStatusCompanion, Inbox:modelKotlinArray<T>, Inbox:modelInboxWebView, Inbox:modelLanguage, Inbox:modelLanguageBahasa, Inbox:modelLanguageENglish, Inbox:modelPayloadInboxPromo, Inbox:modelRequestCategoryInboxStatus, Inbox:modelRequestCategoryInboxStatusSuccessLocal, Inbox:modelRequestCategoryInboxStatusSuccessRemote, Inbox:modelRequestInboxCollectionStatus, Inbox:modelRequestInboxCollectionStatusSuccessLocal, Inbox:modelRequestInboxCollectionStatusSuccessRemote;

@protocol Inbox:modelKotlinComparable, Inbox:modelKotlinIterator;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface Inbox:modelBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface Inbox:modelBase (Inbox:modelBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface Inbox:modelMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface Inbox:modelMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorInbox:modelKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface Inbox:modelNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinByte")))
@interface Inbox:modelByte : Inbox:modelNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface Inbox:modelUByte : Inbox:modelNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface Inbox:modelShort : Inbox:modelNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface Inbox:modelUShort : Inbox:modelNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface Inbox:modelInt : Inbox:modelNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface Inbox:modelUInt : Inbox:modelNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface Inbox:modelLong : Inbox:modelNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface Inbox:modelULong : Inbox:modelNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface Inbox:modelFloat : Inbox:modelNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface Inbox:modelDouble : Inbox:modelNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface Inbox:modelBoolean : Inbox:modelNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CategoryInbox")))
@interface Inbox:modelCategoryInbox : Inbox:modelBase
- (instancetype)initWithIdCategory:(int32_t)idCategory categoryName:(NSString *)categoryName countUnread:(int32_t)countUnread __attribute__((swift_name("init(idCategory:categoryName:countUnread:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (Inbox:modelCategoryInbox *)doCopyIdCategory:(int32_t)idCategory categoryName:(NSString *)categoryName countUnread:(int32_t)countUnread __attribute__((swift_name("doCopy(idCategory:categoryName:countUnread:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *categoryName __attribute__((swift_name("categoryName")));
@property int32_t countUnread __attribute__((swift_name("countUnread")));
@property (readonly) int32_t idCategory __attribute__((swift_name("idCategory")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GiftCardDetail")))
@interface Inbox:modelGiftCardDetail : Inbox:modelBase
- (instancetype)initWithImageCard:(NSString *)imageCard imageEnvelope:(NSString *)imageEnvelope title:(NSString *)title amount:(NSString *)amount header:(NSString *)header messageBody:(NSString *)messageBody footer:(NSString *)footer senderName:(NSString *)senderName info:(NSString *)info __attribute__((swift_name("init(imageCard:imageEnvelope:title:amount:header:messageBody:footer:senderName:info:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (NSString *)component8 __attribute__((swift_name("component8()")));
- (NSString *)component9 __attribute__((swift_name("component9()")));
- (Inbox:modelGiftCardDetail *)doCopyImageCard:(NSString *)imageCard imageEnvelope:(NSString *)imageEnvelope title:(NSString *)title amount:(NSString *)amount header:(NSString *)header messageBody:(NSString *)messageBody footer:(NSString *)footer senderName:(NSString *)senderName info:(NSString *)info __attribute__((swift_name("doCopy(imageCard:imageEnvelope:title:amount:header:messageBody:footer:senderName:info:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *amount __attribute__((swift_name("amount")));
@property (readonly) NSString *footer __attribute__((swift_name("footer")));
@property (readonly) NSString *header __attribute__((swift_name("header")));
@property (readonly) NSString *imageCard __attribute__((swift_name("imageCard")));
@property (readonly) NSString *imageEnvelope __attribute__((swift_name("imageEnvelope")));
@property (readonly) NSString *info __attribute__((swift_name("info")));
@property (readonly) NSString *messageBody __attribute__((swift_name("messageBody")));
@property (readonly) NSString *senderName __attribute__((swift_name("senderName")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GiftCardPayload")))
@interface Inbox:modelGiftCardPayload : Inbox:modelBase
- (instancetype)initWithImageCard:(NSString *)imageCard imageEnvelope:(NSString *)imageEnvelope title:(NSString *)title amountBonbal:(NSString *)amountBonbal header:(NSString *)header content:(NSString *)content footer:(NSString *)footer sender:(NSString *)sender info:(NSString *)info __attribute__((swift_name("init(imageCard:imageEnvelope:title:amountBonbal:header:content:footer:sender:info:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (NSString *)component8 __attribute__((swift_name("component8()")));
- (NSString *)component9 __attribute__((swift_name("component9()")));
- (Inbox:modelGiftCardPayload *)doCopyImageCard:(NSString *)imageCard imageEnvelope:(NSString *)imageEnvelope title:(NSString *)title amountBonbal:(NSString *)amountBonbal header:(NSString *)header content:(NSString *)content footer:(NSString *)footer sender:(NSString *)sender info:(NSString *)info __attribute__((swift_name("doCopy(imageCard:imageEnvelope:title:amountBonbal:header:content:footer:sender:info:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (Inbox:modelGiftCardDetail *)toGiftCardDetail __attribute__((swift_name("toGiftCardDetail()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *amountBonbal __attribute__((swift_name("amountBonbal")));
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) NSString *footer __attribute__((swift_name("footer")));
@property (readonly) NSString *header __attribute__((swift_name("header")));
@property (readonly) NSString *imageCard __attribute__((swift_name("imageCard")));
@property (readonly) NSString *imageEnvelope __attribute__((swift_name("imageEnvelope")));
@property (readonly) NSString *info __attribute__((swift_name("info")));
@property (readonly) NSString *sender __attribute__((swift_name("sender")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Greeting")))
@interface Inbox:modelGreeting : Inbox:modelBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)greeting __attribute__((swift_name("greeting()")));
@end;

__attribute__((swift_name("Inbox")))
@interface Inbox:modelInbox : Inbox:modelBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) int64_t datetime __attribute__((swift_name("datetime")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *imageUrl __attribute__((swift_name("imageUrl")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) Inbox:modelInboxStatus *status __attribute__((swift_name("status")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Inbox.Deeplink")))
@interface Inbox:modelInboxDeeplink : Inbox:modelInbox
- (instancetype)initWithId:(NSString *)id title:(NSString *)title message:(NSString *)message content:(NSString *)content status:(Inbox:modelInboxStatus *)status datetime:(int64_t)datetime imageUrl:(NSString *)imageUrl url:(NSString *)url __attribute__((swift_name("init(id:title:message:content:status:datetime:imageUrl:url:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (Inbox:modelInboxStatus *)component5 __attribute__((swift_name("component5()")));
- (int64_t)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (NSString *)component8 __attribute__((swift_name("component8()")));
- (Inbox:modelInboxDeeplink *)doCopyId:(NSString *)id title:(NSString *)title message:(NSString *)message content:(NSString *)content status:(Inbox:modelInboxStatus *)status datetime:(int64_t)datetime imageUrl:(NSString *)imageUrl url:(NSString *)url __attribute__((swift_name("doCopy(id:title:message:content:status:datetime:imageUrl:url:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) int64_t datetime __attribute__((swift_name("datetime")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *imageUrl __attribute__((swift_name("imageUrl")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) Inbox:modelInboxStatus *status __attribute__((swift_name("status")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Inbox.GiftCard")))
@interface Inbox:modelInboxGiftCard : Inbox:modelInbox
- (instancetype)initWithId:(NSString *)id title:(NSString *)title message:(NSString *)message content:(NSString *)content status:(Inbox:modelInboxStatus *)status datetime:(int64_t)datetime imageUrl:(NSString *)imageUrl payload:(NSString *)payload __attribute__((swift_name("init(id:title:message:content:status:datetime:imageUrl:payload:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (Inbox:modelInboxStatus *)component5 __attribute__((swift_name("component5()")));
- (int64_t)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (NSString *)component8 __attribute__((swift_name("component8()")));
- (Inbox:modelInboxGiftCard *)doCopyId:(NSString *)id title:(NSString *)title message:(NSString *)message content:(NSString *)content status:(Inbox:modelInboxStatus *)status datetime:(int64_t)datetime imageUrl:(NSString *)imageUrl payload:(NSString *)payload __attribute__((swift_name("doCopy(id:title:message:content:status:datetime:imageUrl:payload:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) int64_t datetime __attribute__((swift_name("datetime")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *imageUrl __attribute__((swift_name("imageUrl")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) NSString *payload __attribute__((swift_name("payload")));
@property (readonly) Inbox:modelInboxStatus *status __attribute__((swift_name("status")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Inbox.Info")))
@interface Inbox:modelInboxInfo : Inbox:modelInbox
- (instancetype)initWithId:(NSString *)id title:(NSString *)title message:(NSString *)message content:(NSString *)content status:(Inbox:modelInboxStatus *)status datetime:(int64_t)datetime imageUrl:(NSString *)imageUrl __attribute__((swift_name("init(id:title:message:content:status:datetime:imageUrl:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (Inbox:modelInboxStatus *)component5 __attribute__((swift_name("component5()")));
- (int64_t)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (Inbox:modelInboxInfo *)doCopyId:(NSString *)id title:(NSString *)title message:(NSString *)message content:(NSString *)content status:(Inbox:modelInboxStatus *)status datetime:(int64_t)datetime imageUrl:(NSString *)imageUrl __attribute__((swift_name("doCopy(id:title:message:content:status:datetime:imageUrl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) int64_t datetime __attribute__((swift_name("datetime")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *imageUrl __attribute__((swift_name("imageUrl")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) Inbox:modelInboxStatus *status __attribute__((swift_name("status")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Inbox.Promo")))
@interface Inbox:modelInboxPromo : Inbox:modelInbox
- (instancetype)initWithId:(NSString *)id title:(NSString *)title message:(NSString *)message content:(NSString *)content status:(Inbox:modelInboxStatus *)status datetime:(int64_t)datetime imageUrl:(NSString *)imageUrl payload:(NSString *)payload __attribute__((swift_name("init(id:title:message:content:status:datetime:imageUrl:payload:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (Inbox:modelInboxStatus *)component5 __attribute__((swift_name("component5()")));
- (int64_t)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (NSString *)component8 __attribute__((swift_name("component8()")));
- (Inbox:modelInboxPromo *)doCopyId:(NSString *)id title:(NSString *)title message:(NSString *)message content:(NSString *)content status:(Inbox:modelInboxStatus *)status datetime:(int64_t)datetime imageUrl:(NSString *)imageUrl payload:(NSString *)payload __attribute__((swift_name("doCopy(id:title:message:content:status:datetime:imageUrl:payload:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) int64_t datetime __attribute__((swift_name("datetime")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *imageUrl __attribute__((swift_name("imageUrl")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) NSString *payload __attribute__((swift_name("payload")));
@property (readonly) Inbox:modelInboxStatus *status __attribute__((swift_name("status")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Inbox.Reminder")))
@interface Inbox:modelInboxReminder : Inbox:modelInbox
- (instancetype)initWithId:(NSString *)id title:(NSString *)title message:(NSString *)message content:(NSString *)content status:(Inbox:modelInboxStatus *)status datetime:(int64_t)datetime imageUrl:(NSString *)imageUrl payload:(NSString *)payload __attribute__((swift_name("init(id:title:message:content:status:datetime:imageUrl:payload:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (Inbox:modelInboxStatus *)component5 __attribute__((swift_name("component5()")));
- (int64_t)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (NSString *)component8 __attribute__((swift_name("component8()")));
- (Inbox:modelInboxReminder *)doCopyId:(NSString *)id title:(NSString *)title message:(NSString *)message content:(NSString *)content status:(Inbox:modelInboxStatus *)status datetime:(int64_t)datetime imageUrl:(NSString *)imageUrl payload:(NSString *)payload __attribute__((swift_name("doCopy(id:title:message:content:status:datetime:imageUrl:payload:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) int64_t datetime __attribute__((swift_name("datetime")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *imageUrl __attribute__((swift_name("imageUrl")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) NSString *payload __attribute__((swift_name("payload")));
@property (readonly) Inbox:modelInboxStatus *status __attribute__((swift_name("status")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol Inbox:modelKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface Inbox:modelKotlinEnum<E> : Inbox:modelBase <Inbox:modelKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Inbox:modelKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Inbox.Status")))
@interface Inbox:modelInboxStatus : Inbox:modelKotlinEnum<Inbox:modelInboxStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) Inbox:modelInboxStatusCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) Inbox:modelInboxStatus *unread __attribute__((swift_name("unread")));
@property (class, readonly) Inbox:modelInboxStatus *read __attribute__((swift_name("read")));
+ (Inbox:modelKotlinArray<Inbox:modelInboxStatus *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Inbox.StatusCompanion")))
@interface Inbox:modelInboxStatusCompanion : Inbox:modelBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Inbox:modelInboxStatusCompanion *shared __attribute__((swift_name("shared")));
- (Inbox:modelInboxStatus *)getParam:(NSString * _Nullable)param __attribute__((swift_name("get(param:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Inbox.WebView")))
@interface Inbox:modelInboxWebView : Inbox:modelInbox
- (instancetype)initWithId:(NSString *)id title:(NSString *)title message:(NSString *)message content:(NSString *)content status:(Inbox:modelInboxStatus *)status datetime:(int64_t)datetime imageUrl:(NSString *)imageUrl url:(NSString *)url __attribute__((swift_name("init(id:title:message:content:status:datetime:imageUrl:url:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (Inbox:modelInboxStatus *)component5 __attribute__((swift_name("component5()")));
- (int64_t)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (NSString *)component8 __attribute__((swift_name("component8()")));
- (Inbox:modelInboxWebView *)doCopyId:(NSString *)id title:(NSString *)title message:(NSString *)message content:(NSString *)content status:(Inbox:modelInboxStatus *)status datetime:(int64_t)datetime imageUrl:(NSString *)imageUrl url:(NSString *)url __attribute__((swift_name("doCopy(id:title:message:content:status:datetime:imageUrl:url:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) int64_t datetime __attribute__((swift_name("datetime")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *imageUrl __attribute__((swift_name("imageUrl")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) Inbox:modelInboxStatus *status __attribute__((swift_name("status")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@end;

__attribute__((swift_name("Language")))
@interface Inbox:modelLanguage : Inbox:modelBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Language.Bahasa")))
@interface Inbox:modelLanguageBahasa : Inbox:modelLanguage
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)bahasa __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Inbox:modelLanguageBahasa *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Language.ENglish")))
@interface Inbox:modelLanguageENglish : Inbox:modelLanguage
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)eNglish __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Inbox:modelLanguageENglish *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PayloadInboxPromo")))
@interface Inbox:modelPayloadInboxPromo : Inbox:modelBase
- (instancetype)initWithId:(NSString *)id name:(NSString *)name __attribute__((swift_name("init(id:name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (Inbox:modelPayloadInboxPromo *)doCopyId:(NSString *)id name:(NSString *)name __attribute__((swift_name("doCopy(id:name:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform")))
@interface Inbox:modelPlatform : Inbox:modelBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSString *platform __attribute__((swift_name("platform")));
@end;

__attribute__((swift_name("RequestCategoryInboxStatus")))
@interface Inbox:modelRequestCategoryInboxStatus : Inbox:modelBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSArray<Inbox:modelCategoryInbox *> *data __attribute__((swift_name("data")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RequestCategoryInboxStatus.SuccessLocal")))
@interface Inbox:modelRequestCategoryInboxStatusSuccessLocal : Inbox:modelRequestCategoryInboxStatus
- (instancetype)initWithData:(NSArray<Inbox:modelCategoryInbox *> *)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (NSArray<Inbox:modelCategoryInbox *> *)component1 __attribute__((swift_name("component1()")));
- (Inbox:modelRequestCategoryInboxStatusSuccessLocal *)doCopyData:(NSArray<Inbox:modelCategoryInbox *> *)data __attribute__((swift_name("doCopy(data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<Inbox:modelCategoryInbox *> *data __attribute__((swift_name("data")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RequestCategoryInboxStatus.SuccessRemote")))
@interface Inbox:modelRequestCategoryInboxStatusSuccessRemote : Inbox:modelRequestCategoryInboxStatus
- (instancetype)initWithData:(NSArray<Inbox:modelCategoryInbox *> *)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (NSArray<Inbox:modelCategoryInbox *> *)component1 __attribute__((swift_name("component1()")));
- (Inbox:modelRequestCategoryInboxStatusSuccessRemote *)doCopyData:(NSArray<Inbox:modelCategoryInbox *> *)data __attribute__((swift_name("doCopy(data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<Inbox:modelCategoryInbox *> *data __attribute__((swift_name("data")));
@end;

__attribute__((swift_name("RequestInboxCollectionStatus")))
@interface Inbox:modelRequestInboxCollectionStatus : Inbox:modelBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RequestInboxCollectionStatus.SuccessLocal")))
@interface Inbox:modelRequestInboxCollectionStatusSuccessLocal : Inbox:modelRequestInboxCollectionStatus
- (instancetype)initWithTotal_page:(int32_t)total_page data:(NSArray<Inbox:modelInbox *> *)data __attribute__((swift_name("init(total_page:data:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSArray<Inbox:modelInbox *> *)component2 __attribute__((swift_name("component2()")));
- (Inbox:modelRequestInboxCollectionStatusSuccessLocal *)doCopyTotal_page:(int32_t)total_page data:(NSArray<Inbox:modelInbox *> *)data __attribute__((swift_name("doCopy(total_page:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<Inbox:modelInbox *> *data __attribute__((swift_name("data")));
@property (readonly) int32_t total_page __attribute__((swift_name("total_page")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RequestInboxCollectionStatus.SuccessRemote")))
@interface Inbox:modelRequestInboxCollectionStatusSuccessRemote : Inbox:modelRequestInboxCollectionStatus
- (instancetype)initWithTotal_page:(int32_t)total_page page:(int32_t)page data:(NSArray<Inbox:modelInbox *> *)data __attribute__((swift_name("init(total_page:page:data:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (NSArray<Inbox:modelInbox *> *)component3 __attribute__((swift_name("component3()")));
- (Inbox:modelRequestInboxCollectionStatusSuccessRemote *)doCopyTotal_page:(int32_t)total_page page:(int32_t)page data:(NSArray<Inbox:modelInbox *> *)data __attribute__((swift_name("doCopy(total_page:page:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<Inbox:modelInbox *> *data __attribute__((swift_name("data")));
@property (readonly) int32_t page __attribute__((swift_name("page")));
@property (readonly) int32_t total_page __attribute__((swift_name("total_page")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface Inbox:modelKotlinEnumCompanion : Inbox:modelBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Inbox:modelKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface Inbox:modelKotlinArray<T> : Inbox:modelBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(Inbox:modelInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<Inbox:modelKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol Inbox:modelKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
