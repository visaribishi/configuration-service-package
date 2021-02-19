#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class ConfigurationServiceAppConfig, ConfigurationServiceKotlinException, ConfigurationServiceTheme, ConfigurationServiceFeature, ConfigurationServiceWeb, ConfigurationServiceKotlinThrowable, ConfigurationServiceKotlinArray<T>, ConfigurationServiceKotlinx_serialization_coreSerializersModule, ConfigurationServiceKotlinx_serialization_coreSerialKind, ConfigurationServiceKotlinNothing, ConfigurationServiceKotlinx_serialization_coreUpdateMode, ConfigurationServiceKotlinEnum<E>;

@protocol ConfigurationServiceConfigServiceInterface, ConfigurationServiceKotlinx_serialization_coreKSerializer, ConfigurationServiceKotlinx_serialization_coreEncoder, ConfigurationServiceKotlinx_serialization_coreSerialDescriptor, ConfigurationServiceKotlinx_serialization_coreSerializationStrategy, ConfigurationServiceKotlinx_serialization_coreDecoder, ConfigurationServiceKotlinx_serialization_coreDeserializationStrategy, ConfigurationServiceKotlinIterator, ConfigurationServiceKotlinx_serialization_coreCompositeEncoder, ConfigurationServiceKotlinAnnotation, ConfigurationServiceKotlinx_serialization_coreCompositeDecoder, ConfigurationServiceKotlinx_serialization_coreSerializersModuleCollector, ConfigurationServiceKotlinKClass, ConfigurationServiceKotlinComparable, ConfigurationServiceKotlinKDeclarationContainer, ConfigurationServiceKotlinKAnnotatedElement, ConfigurationServiceKotlinKClassifier;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

__attribute__((swift_name("KotlinBase")))
@interface ConfigurationServiceBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface ConfigurationServiceBase (ConfigurationServiceBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface ConfigurationServiceMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface ConfigurationServiceMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorConfigurationServiceKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface ConfigurationServiceNumber : NSNumber
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
@interface ConfigurationServiceByte : ConfigurationServiceNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface ConfigurationServiceUByte : ConfigurationServiceNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface ConfigurationServiceShort : ConfigurationServiceNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface ConfigurationServiceUShort : ConfigurationServiceNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface ConfigurationServiceInt : ConfigurationServiceNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface ConfigurationServiceUInt : ConfigurationServiceNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface ConfigurationServiceLong : ConfigurationServiceNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface ConfigurationServiceULong : ConfigurationServiceNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface ConfigurationServiceFloat : ConfigurationServiceNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface ConfigurationServiceDouble : ConfigurationServiceNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface ConfigurationServiceBoolean : ConfigurationServiceNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((swift_name("ConfigServiceInterface")))
@protocol ConfigurationServiceConfigServiceInterface
@required
- (void)getAppConfigConfigJson:(NSString *)configJson success:(void (^)(ConfigurationServiceAppConfig *))success failure:(void (^)(ConfigurationServiceKotlinException *))failure __attribute__((swift_name("getAppConfig(configJson:success:failure:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConfigService")))
@interface ConfigurationServiceConfigService : ConfigurationServiceBase <ConfigurationServiceConfigServiceInterface>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)configService __attribute__((swift_name("init()")));
- (void)getAppConfigConfigJson:(NSString *)configJson success:(void (^)(ConfigurationServiceAppConfig *))success failure:(void (^)(ConfigurationServiceKotlinException *))failure __attribute__((swift_name("getAppConfig(configJson:success:failure:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppConfig")))
@interface ConfigurationServiceAppConfig : ConfigurationServiceBase
- (instancetype)initWithTheme:(ConfigurationServiceTheme *)theme features:(NSArray<ConfigurationServiceFeature *> *)features __attribute__((swift_name("init(theme:features:)"))) __attribute__((objc_designated_initializer));
- (ConfigurationServiceTheme *)component1 __attribute__((swift_name("component1()")));
- (NSArray<ConfigurationServiceFeature *> *)component2 __attribute__((swift_name("component2()")));
- (ConfigurationServiceAppConfig *)doCopyTheme:(ConfigurationServiceTheme *)theme features:(NSArray<ConfigurationServiceFeature *> *)features __attribute__((swift_name("doCopy(theme:features:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<ConfigurationServiceFeature *> *features __attribute__((swift_name("features")));
@property (readonly) ConfigurationServiceTheme *theme __attribute__((swift_name("theme")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppConfig.Companion")))
@interface ConfigurationServiceAppConfigCompanion : ConfigurationServiceBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<ConfigurationServiceKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Feature")))
@interface ConfigurationServiceFeature : ConfigurationServiceBase
- (instancetype)initWithId:(NSString *)id icon:(NSString *)icon title:(NSString *)title type:(NSString *)type web:(ConfigurationServiceWeb * _Nullable)web __attribute__((swift_name("init(id:icon:title:type:web:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (ConfigurationServiceWeb * _Nullable)component5 __attribute__((swift_name("component5()")));
- (ConfigurationServiceFeature *)doCopyId:(NSString *)id icon:(NSString *)icon title:(NSString *)title type:(NSString *)type web:(ConfigurationServiceWeb * _Nullable)web __attribute__((swift_name("doCopy(id:icon:title:type:web:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *icon __attribute__((swift_name("icon")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@property (readonly) ConfigurationServiceWeb * _Nullable web __attribute__((swift_name("web")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Feature.Companion")))
@interface ConfigurationServiceFeatureCompanion : ConfigurationServiceBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<ConfigurationServiceKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Theme")))
@interface ConfigurationServiceTheme : ConfigurationServiceBase
- (instancetype)initWithThemeColor:(NSString *)themeColor backgroundColor:(NSString *)backgroundColor textColor:(NSString *)textColor __attribute__((swift_name("init(themeColor:backgroundColor:textColor:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (ConfigurationServiceTheme *)doCopyThemeColor:(NSString *)themeColor backgroundColor:(NSString *)backgroundColor textColor:(NSString *)textColor __attribute__((swift_name("doCopy(themeColor:backgroundColor:textColor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *backgroundColor __attribute__((swift_name("backgroundColor")));
@property (readonly) NSString *textColor __attribute__((swift_name("textColor")));
@property (readonly) NSString *themeColor __attribute__((swift_name("themeColor")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Theme.Companion")))
@interface ConfigurationServiceThemeCompanion : ConfigurationServiceBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<ConfigurationServiceKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Web")))
@interface ConfigurationServiceWeb : ConfigurationServiceBase
- (instancetype)initWithUrl:(NSString *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (ConfigurationServiceWeb *)doCopyUrl:(NSString *)url __attribute__((swift_name("doCopy(url:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Web.Companion")))
@interface ConfigurationServiceWebCompanion : ConfigurationServiceBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<ConfigurationServiceKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface ConfigurationServiceKotlinThrowable : ConfigurationServiceBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(ConfigurationServiceKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(ConfigurationServiceKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (ConfigurationServiceKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) ConfigurationServiceKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end;

__attribute__((swift_name("KotlinException")))
@interface ConfigurationServiceKotlinException : ConfigurationServiceKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(ConfigurationServiceKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(ConfigurationServiceKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol ConfigurationServiceKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<ConfigurationServiceKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<ConfigurationServiceKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol ConfigurationServiceKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<ConfigurationServiceKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (id _Nullable)patchDecoder:(id<ConfigurationServiceKotlinx_serialization_coreDecoder>)decoder old:(id _Nullable)old __attribute__((swift_name("patch(decoder:old:)"))) __attribute__((unavailable("Patch function is deprecated for removal since this functionality is no longer supported by serializer.Some formats may provide implementation-specific patching in their Decoders.")));
@property (readonly) id<ConfigurationServiceKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol ConfigurationServiceKotlinx_serialization_coreKSerializer <ConfigurationServiceKotlinx_serialization_coreSerializationStrategy, ConfigurationServiceKotlinx_serialization_coreDeserializationStrategy>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface ConfigurationServiceKotlinArray<T> : ConfigurationServiceBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(ConfigurationServiceInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<ConfigurationServiceKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol ConfigurationServiceKotlinx_serialization_coreEncoder
@required
- (id<ConfigurationServiceKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<ConfigurationServiceKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<ConfigurationServiceKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<ConfigurationServiceKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize typeSerializers:(ConfigurationServiceKotlinArray<id<ConfigurationServiceKotlinx_serialization_coreKSerializer>> *)typeSerializers __attribute__((swift_name("beginCollection(descriptor:collectionSize:typeSerializers:)"))) __attribute__((unavailable("Parameter typeSerializers is deprecated for removal. Please migrate to beginCollection method with two arguments.")));
- (id<ConfigurationServiceKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<ConfigurationServiceKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (id<ConfigurationServiceKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<ConfigurationServiceKotlinx_serialization_coreSerialDescriptor>)descriptor typeSerializers:(ConfigurationServiceKotlinArray<id<ConfigurationServiceKotlinx_serialization_coreKSerializer>> *)typeSerializers __attribute__((swift_name("beginStructure(descriptor:typeSerializers:)"))) __attribute__((unavailable("Parameter typeSerializers is deprecated for removal. Please migrate to beginStructure method with one argument.")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<ConfigurationServiceKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<ConfigurationServiceKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<ConfigurationServiceKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) ConfigurationServiceKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol ConfigurationServiceKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<ConfigurationServiceKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<ConfigurationServiceKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<ConfigurationServiceKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) ConfigurationServiceKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol ConfigurationServiceKotlinx_serialization_coreDecoder
@required
- (id<ConfigurationServiceKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<ConfigurationServiceKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (id<ConfigurationServiceKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<ConfigurationServiceKotlinx_serialization_coreSerialDescriptor>)descriptor typeParams:(ConfigurationServiceKotlinArray<id<ConfigurationServiceKotlinx_serialization_coreKSerializer>> *)typeParams __attribute__((swift_name("beginStructure(descriptor:typeParams:)"))) __attribute__((unavailable("Parameter typeSerializers is deprecated for removal. Please migrate to beginStructure method with one argument.")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<ConfigurationServiceKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (ConfigurationServiceKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<ConfigurationServiceKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<ConfigurationServiceKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
- (id _Nullable)updateNullableSerializableValueDeserializer:(id<ConfigurationServiceKotlinx_serialization_coreDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateNullableSerializableValue(deserializer:old:)"))) __attribute__((unavailable("Update* methods are deprecated for removal. Update behaviour is now considered an implementation detail of the format.Updating elements that are outside of structure is an unsupported operation.")));
- (id _Nullable)updateSerializableValueDeserializer:(id<ConfigurationServiceKotlinx_serialization_coreDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateSerializableValue(deserializer:old:)"))) __attribute__((unavailable("Update* methods are deprecated for removal. Update behaviour is now considered an implementation detail of the format.Updating elements that are outside of structure is an unsupported operation.")));
@property (readonly) ConfigurationServiceKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@property (readonly) ConfigurationServiceKotlinx_serialization_coreUpdateMode *updateMode __attribute__((swift_name("updateMode"))) __attribute__((unavailable("Update mode in Decoder is deprecated for removal. Update behaviour is now considered an implementation detail of the format that should not concern serializer.")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol ConfigurationServiceKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol ConfigurationServiceKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<ConfigurationServiceKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<ConfigurationServiceKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<ConfigurationServiceKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<ConfigurationServiceKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<ConfigurationServiceKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (void)encodeIntElementDescriptor:(id<ConfigurationServiceKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<ConfigurationServiceKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));
- (void)encodeNonSerializableElementDescriptor:(id<ConfigurationServiceKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(id)value __attribute__((swift_name("encodeNonSerializableElement(descriptor:index:value:)"))) __attribute__((unavailable("This method is deprecated for removal. Please remove it from your implementation and delegate to default method instead")));
- (void)encodeNullableSerializableElementDescriptor:(id<ConfigurationServiceKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<ConfigurationServiceKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<ConfigurationServiceKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<ConfigurationServiceKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<ConfigurationServiceKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<ConfigurationServiceKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<ConfigurationServiceKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<ConfigurationServiceKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) ConfigurationServiceKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface ConfigurationServiceKotlinx_serialization_coreSerializersModule : ConfigurationServiceBase
- (void)dumpToCollector:(id<ConfigurationServiceKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<ConfigurationServiceKotlinx_serialization_coreKSerializer> _Nullable)getContextualKclass:(id<ConfigurationServiceKotlinKClass>)kclass __attribute__((swift_name("getContextual(kclass:)")));
- (id<ConfigurationServiceKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<ConfigurationServiceKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<ConfigurationServiceKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<ConfigurationServiceKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol ConfigurationServiceKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface ConfigurationServiceKotlinx_serialization_coreSerialKind : ConfigurationServiceBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol ConfigurationServiceKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<ConfigurationServiceKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<ConfigurationServiceKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<ConfigurationServiceKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<ConfigurationServiceKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<ConfigurationServiceKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<ConfigurationServiceKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<ConfigurationServiceKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<ConfigurationServiceKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<ConfigurationServiceKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<ConfigurationServiceKotlinx_serialization_coreSerialDescriptor>)descriptor i:(int32_t)i deserializer:(id<ConfigurationServiceKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableElement(descriptor:i:deserializer:)"))) __attribute__((unavailable("Please migrate to decodeElement method which accepts old value.Feel free to ignore it if your format does not support updates.")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<ConfigurationServiceKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<ConfigurationServiceKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<ConfigurationServiceKotlinx_serialization_coreSerialDescriptor>)descriptor i:(int32_t)i deserializer:(id<ConfigurationServiceKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableElement(descriptor:i:deserializer:)"))) __attribute__((unavailable("Please migrate to decodeElement method which accepts old value.Feel free to ignore it if your format does not support updates.")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<ConfigurationServiceKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<ConfigurationServiceKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<ConfigurationServiceKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<ConfigurationServiceKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<ConfigurationServiceKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (id _Nullable)updateNullableSerializableElementDescriptor:(id<ConfigurationServiceKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<ConfigurationServiceKotlinx_serialization_coreDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateNullableSerializableElement(descriptor:index:deserializer:old:)"))) __attribute__((unavailable("Update* methods are deprecated for removal. Update behaviour is now considered an implementation detail of the format.Pass the old value to decodeSerializable*, so formats that support update could use it.")));
- (id _Nullable)updateSerializableElementDescriptor:(id<ConfigurationServiceKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<ConfigurationServiceKotlinx_serialization_coreDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateSerializableElement(descriptor:index:deserializer:old:)"))) __attribute__((unavailable("Update* methods are deprecated for removal. Update behaviour is now considered an implementation detail of the format.Pass the old value to decodeSerializable*, so formats that support update could use it.")));
@property (readonly) ConfigurationServiceKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@property (readonly) ConfigurationServiceKotlinx_serialization_coreUpdateMode *updateMode __attribute__((swift_name("updateMode"))) __attribute__((unavailable("Update mode in Decoder is deprecated for removal. Update behaviour is now considered an implementation detail of the format that should not concern serializer.")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface ConfigurationServiceKotlinNothing : ConfigurationServiceBase
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol ConfigurationServiceKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface ConfigurationServiceKotlinEnum<E> : ConfigurationServiceBase <ConfigurationServiceKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_coreUpdateMode")))
@interface ConfigurationServiceKotlinx_serialization_coreUpdateMode : ConfigurationServiceKotlinEnum<ConfigurationServiceKotlinx_serialization_coreUpdateMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) ConfigurationServiceKotlinx_serialization_coreUpdateMode *banned __attribute__((swift_name("banned")));
@property (class, readonly) ConfigurationServiceKotlinx_serialization_coreUpdateMode *overwrite __attribute__((swift_name("overwrite")));
@property (class, readonly) ConfigurationServiceKotlinx_serialization_coreUpdateMode *update __attribute__((swift_name("update")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol ConfigurationServiceKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<ConfigurationServiceKotlinKClass>)kClass serializer:(id<ConfigurationServiceKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<ConfigurationServiceKotlinKClass>)baseClass actualClass:(id<ConfigurationServiceKotlinKClass>)actualClass actualSerializer:(id<ConfigurationServiceKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<ConfigurationServiceKotlinKClass>)baseClass defaultSerializerProvider:(id<ConfigurationServiceKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultSerializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultSerializerProvider:)")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol ConfigurationServiceKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol ConfigurationServiceKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol ConfigurationServiceKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol ConfigurationServiceKotlinKClass <ConfigurationServiceKotlinKDeclarationContainer, ConfigurationServiceKotlinKAnnotatedElement, ConfigurationServiceKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
