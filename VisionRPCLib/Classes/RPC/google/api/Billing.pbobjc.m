// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/api/billing.proto

// This CPP symbol can be defined to use imports that match up to the framework
// imports needed when using CocoaPods.
#if !defined(GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS)
 #define GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS 0
#endif

#if GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS
 #import <Protobuf/GPBProtocolBuffers_RuntimeSupport.h>
#else
 #import "GPBProtocolBuffers_RuntimeSupport.h"
#endif

#import "Billing.pbobjc.h"
#import "Annotations.pbobjc.h"
#import "Metric.pbobjc.h"
// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#pragma mark - Objective C Class declarations
// Forward declarations of Objective C classes that we can use as
// static values in struct initializers.
// We don't use [Foo class] because it is not a static value.
GPBObjCClassDeclaration(BillingStatusRule);

#pragma mark - BillingRoot

@implementation BillingRoot

+ (GPBExtensionRegistry*)extensionRegistry {
  // This is called by +initialize so there is no need to worry
  // about thread safety and initialization of registry.
  static GPBExtensionRegistry* registry = nil;
  if (!registry) {
    GPB_DEBUG_CHECK_RUNTIME_VERSIONS();
    registry = [[GPBExtensionRegistry alloc] init];
    // Merge in the imports (direct or indirect) that defined extensions.
    [registry addExtensions:[AnnotationsRoot extensionRegistry]];
  }
  return registry;
}

@end

#pragma mark - BillingRoot_FileDescriptor

static GPBFileDescriptor *BillingRoot_FileDescriptor(void) {
  // This is called by +initialize so there is no need to worry
  // about thread safety of the singleton.
  static GPBFileDescriptor *descriptor = NULL;
  if (!descriptor) {
    GPB_DEBUG_CHECK_RUNTIME_VERSIONS();
    descriptor = [[GPBFileDescriptor alloc] initWithPackage:@"google.api"
                                                     syntax:GPBFileSyntaxProto3];
  }
  return descriptor;
}

#pragma mark - Billing

@implementation Billing

@dynamic metricsArray, metricsArray_Count;
@dynamic rulesArray, rulesArray_Count;

typedef struct Billing__storage_ {
  uint32_t _has_storage_[1];
  NSMutableArray *metricsArray;
  NSMutableArray *rulesArray;
} Billing__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "metricsArray",
        .dataTypeSpecific.clazz = Nil,
        .number = Billing_FieldNumber_MetricsArray,
        .hasIndex = GPBNoHasBit,
        .offset = (uint32_t)offsetof(Billing__storage_, metricsArray),
        .flags = GPBFieldRepeated,
        .dataType = GPBDataTypeString,
      },
      {
        .name = "rulesArray",
        .dataTypeSpecific.clazz = GPBObjCClass(BillingStatusRule),
        .number = Billing_FieldNumber_RulesArray,
        .hasIndex = GPBNoHasBit,
        .offset = (uint32_t)offsetof(Billing__storage_, rulesArray),
        .flags = GPBFieldRepeated,
        .dataType = GPBDataTypeMessage,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[Billing class]
                                     rootClass:[BillingRoot class]
                                          file:BillingRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(Billing__storage_)
                                         flags:(GPBDescriptorInitializationFlags)(GPBDescriptorInitializationFlag_UsesClassRefs | GPBDescriptorInitializationFlag_Proto3OptionalKnown)];
    #if defined(DEBUG) && DEBUG
      NSAssert(descriptor == nil, @"Startup recursed!");
    #endif  // DEBUG
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - BillingStatusRule

@implementation BillingStatusRule

@dynamic selector;
@dynamic allowedStatusesArray, allowedStatusesArray_Count;

typedef struct BillingStatusRule__storage_ {
  uint32_t _has_storage_[1];
  NSString *selector;
  NSMutableArray *allowedStatusesArray;
} BillingStatusRule__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "selector",
        .dataTypeSpecific.clazz = Nil,
        .number = BillingStatusRule_FieldNumber_Selector,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(BillingStatusRule__storage_, selector),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeString,
      },
      {
        .name = "allowedStatusesArray",
        .dataTypeSpecific.clazz = Nil,
        .number = BillingStatusRule_FieldNumber_AllowedStatusesArray,
        .hasIndex = GPBNoHasBit,
        .offset = (uint32_t)offsetof(BillingStatusRule__storage_, allowedStatusesArray),
        .flags = GPBFieldRepeated,
        .dataType = GPBDataTypeString,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[BillingStatusRule class]
                                     rootClass:[BillingRoot class]
                                          file:BillingRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(BillingStatusRule__storage_)
                                         flags:(GPBDescriptorInitializationFlags)(GPBDescriptorInitializationFlag_UsesClassRefs | GPBDescriptorInitializationFlag_Proto3OptionalKnown)];
    #if defined(DEBUG) && DEBUG
      NSAssert(descriptor == nil, @"Startup recursed!");
    #endif  // DEBUG
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end


#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
