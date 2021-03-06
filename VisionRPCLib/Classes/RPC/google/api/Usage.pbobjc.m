// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/api/usage.proto

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

#import <stdatomic.h>

#import "Usage.pbobjc.h"
// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#pragma mark - Objective C Class declarations
// Forward declarations of Objective C classes that we can use as
// static values in struct initializers.
// We don't use [Foo class] because it is not a static value.
GPBObjCClassDeclaration(UsageRule);

#pragma mark - UsageRoot

@implementation UsageRoot

// No extensions in the file and no imports, so no need to generate
// +extensionRegistry.

@end

#pragma mark - UsageRoot_FileDescriptor

static GPBFileDescriptor *UsageRoot_FileDescriptor(void) {
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

#pragma mark - Usage

@implementation Usage

@dynamic serviceAccess;
@dynamic requirementsArray, requirementsArray_Count;
@dynamic dependsOnServicesArray, dependsOnServicesArray_Count;
@dynamic activationHooksArray, activationHooksArray_Count;
@dynamic deactivationHooksArray, deactivationHooksArray_Count;
@dynamic rulesArray, rulesArray_Count;

typedef struct Usage__storage_ {
  uint32_t _has_storage_[1];
  Usage_ServiceAccess serviceAccess;
  NSMutableArray *requirementsArray;
  NSMutableArray *dependsOnServicesArray;
  NSMutableArray *activationHooksArray;
  NSMutableArray *deactivationHooksArray;
  NSMutableArray *rulesArray;
} Usage__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "requirementsArray",
        .dataTypeSpecific.clazz = Nil,
        .number = Usage_FieldNumber_RequirementsArray,
        .hasIndex = GPBNoHasBit,
        .offset = (uint32_t)offsetof(Usage__storage_, requirementsArray),
        .flags = GPBFieldRepeated,
        .dataType = GPBDataTypeString,
      },
      {
        .name = "dependsOnServicesArray",
        .dataTypeSpecific.clazz = Nil,
        .number = Usage_FieldNumber_DependsOnServicesArray,
        .hasIndex = GPBNoHasBit,
        .offset = (uint32_t)offsetof(Usage__storage_, dependsOnServicesArray),
        .flags = GPBFieldRepeated,
        .dataType = GPBDataTypeString,
      },
      {
        .name = "activationHooksArray",
        .dataTypeSpecific.clazz = Nil,
        .number = Usage_FieldNumber_ActivationHooksArray,
        .hasIndex = GPBNoHasBit,
        .offset = (uint32_t)offsetof(Usage__storage_, activationHooksArray),
        .flags = GPBFieldRepeated,
        .dataType = GPBDataTypeString,
      },
      {
        .name = "serviceAccess",
        .dataTypeSpecific.enumDescFunc = Usage_ServiceAccess_EnumDescriptor,
        .number = Usage_FieldNumber_ServiceAccess,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(Usage__storage_, serviceAccess),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldHasEnumDescriptor | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeEnum,
      },
      {
        .name = "deactivationHooksArray",
        .dataTypeSpecific.clazz = Nil,
        .number = Usage_FieldNumber_DeactivationHooksArray,
        .hasIndex = GPBNoHasBit,
        .offset = (uint32_t)offsetof(Usage__storage_, deactivationHooksArray),
        .flags = GPBFieldRepeated,
        .dataType = GPBDataTypeString,
      },
      {
        .name = "rulesArray",
        .dataTypeSpecific.clazz = GPBObjCClass(UsageRule),
        .number = Usage_FieldNumber_RulesArray,
        .hasIndex = GPBNoHasBit,
        .offset = (uint32_t)offsetof(Usage__storage_, rulesArray),
        .flags = GPBFieldRepeated,
        .dataType = GPBDataTypeMessage,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[Usage class]
                                     rootClass:[UsageRoot class]
                                          file:UsageRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(Usage__storage_)
                                         flags:(GPBDescriptorInitializationFlags)(GPBDescriptorInitializationFlag_UsesClassRefs | GPBDescriptorInitializationFlag_Proto3OptionalKnown)];
    #if defined(DEBUG) && DEBUG
      NSAssert(descriptor == nil, @"Startup recursed!");
    #endif  // DEBUG
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

int32_t Usage_ServiceAccess_RawValue(Usage *message) {
  GPBDescriptor *descriptor = [Usage descriptor];
  GPBFieldDescriptor *field = [descriptor fieldWithNumber:Usage_FieldNumber_ServiceAccess];
  return GPBGetMessageRawEnumField(message, field);
}

void SetUsage_ServiceAccess_RawValue(Usage *message, int32_t value) {
  GPBDescriptor *descriptor = [Usage descriptor];
  GPBFieldDescriptor *field = [descriptor fieldWithNumber:Usage_FieldNumber_ServiceAccess];
  GPBSetMessageRawEnumField(message, field, value);
}

#pragma mark - Enum Usage_ServiceAccess

GPBEnumDescriptor *Usage_ServiceAccess_EnumDescriptor(void) {
  static _Atomic(GPBEnumDescriptor*) descriptor = nil;
  if (!descriptor) {
    static const char *valueNames =
        "Restricted\000Public\000OrgRestricted\000OrgPubli"
        "c\000";
    static const int32_t values[] = {
        Usage_ServiceAccess_Restricted,
        Usage_ServiceAccess_Public,
        Usage_ServiceAccess_OrgRestricted,
        Usage_ServiceAccess_OrgPublic,
    };
    GPBEnumDescriptor *worker =
        [GPBEnumDescriptor allocDescriptorForName:GPBNSStringifySymbol(Usage_ServiceAccess)
                                       valueNames:valueNames
                                           values:values
                                            count:(uint32_t)(sizeof(values) / sizeof(int32_t))
                                     enumVerifier:Usage_ServiceAccess_IsValidValue];
    GPBEnumDescriptor *expected = nil;
    if (!atomic_compare_exchange_strong(&descriptor, &expected, worker)) {
      [worker release];
    }
  }
  return descriptor;
}

BOOL Usage_ServiceAccess_IsValidValue(int32_t value__) {
  switch (value__) {
    case Usage_ServiceAccess_Restricted:
    case Usage_ServiceAccess_Public:
    case Usage_ServiceAccess_OrgRestricted:
    case Usage_ServiceAccess_OrgPublic:
      return YES;
    default:
      return NO;
  }
}

#pragma mark - UsageRule

@implementation UsageRule

@dynamic selector;
@dynamic allowUnregisteredCalls;

typedef struct UsageRule__storage_ {
  uint32_t _has_storage_[1];
  NSString *selector;
} UsageRule__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "selector",
        .dataTypeSpecific.clazz = Nil,
        .number = UsageRule_FieldNumber_Selector,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(UsageRule__storage_, selector),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeString,
      },
      {
        .name = "allowUnregisteredCalls",
        .dataTypeSpecific.clazz = Nil,
        .number = UsageRule_FieldNumber_AllowUnregisteredCalls,
        .hasIndex = 1,
        .offset = 2,  // Stored in _has_storage_ to save space.
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeBool,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[UsageRule class]
                                     rootClass:[UsageRoot class]
                                          file:UsageRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(UsageRule__storage_)
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
