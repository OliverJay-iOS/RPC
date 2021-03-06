// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/api/system_parameter.proto

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

#import "SystemParameter.pbobjc.h"
// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#pragma mark - Objective C Class declarations
// Forward declarations of Objective C classes that we can use as
// static values in struct initializers.
// We don't use [Foo class] because it is not a static value.
GPBObjCClassDeclaration(SystemParameter);
GPBObjCClassDeclaration(SystemParameterRule);

#pragma mark - SystemParameterRoot

@implementation SystemParameterRoot

// No extensions in the file and no imports, so no need to generate
// +extensionRegistry.

@end

#pragma mark - SystemParameterRoot_FileDescriptor

static GPBFileDescriptor *SystemParameterRoot_FileDescriptor(void) {
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

#pragma mark - SystemParameters

@implementation SystemParameters

@dynamic rulesArray, rulesArray_Count;

typedef struct SystemParameters__storage_ {
  uint32_t _has_storage_[1];
  NSMutableArray *rulesArray;
} SystemParameters__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "rulesArray",
        .dataTypeSpecific.clazz = GPBObjCClass(SystemParameterRule),
        .number = SystemParameters_FieldNumber_RulesArray,
        .hasIndex = GPBNoHasBit,
        .offset = (uint32_t)offsetof(SystemParameters__storage_, rulesArray),
        .flags = GPBFieldRepeated,
        .dataType = GPBDataTypeMessage,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[SystemParameters class]
                                     rootClass:[SystemParameterRoot class]
                                          file:SystemParameterRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(SystemParameters__storage_)
                                         flags:(GPBDescriptorInitializationFlags)(GPBDescriptorInitializationFlag_UsesClassRefs | GPBDescriptorInitializationFlag_Proto3OptionalKnown)];
    #if defined(DEBUG) && DEBUG
      NSAssert(descriptor == nil, @"Startup recursed!");
    #endif  // DEBUG
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - SystemParameterRule

@implementation SystemParameterRule

@dynamic selector;
@dynamic parametersArray, parametersArray_Count;

typedef struct SystemParameterRule__storage_ {
  uint32_t _has_storage_[1];
  NSString *selector;
  NSMutableArray *parametersArray;
} SystemParameterRule__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "selector",
        .dataTypeSpecific.clazz = Nil,
        .number = SystemParameterRule_FieldNumber_Selector,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(SystemParameterRule__storage_, selector),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeString,
      },
      {
        .name = "parametersArray",
        .dataTypeSpecific.clazz = GPBObjCClass(SystemParameter),
        .number = SystemParameterRule_FieldNumber_ParametersArray,
        .hasIndex = GPBNoHasBit,
        .offset = (uint32_t)offsetof(SystemParameterRule__storage_, parametersArray),
        .flags = GPBFieldRepeated,
        .dataType = GPBDataTypeMessage,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[SystemParameterRule class]
                                     rootClass:[SystemParameterRoot class]
                                          file:SystemParameterRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(SystemParameterRule__storage_)
                                         flags:(GPBDescriptorInitializationFlags)(GPBDescriptorInitializationFlag_UsesClassRefs | GPBDescriptorInitializationFlag_Proto3OptionalKnown)];
    #if defined(DEBUG) && DEBUG
      NSAssert(descriptor == nil, @"Startup recursed!");
    #endif  // DEBUG
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - SystemParameter

@implementation SystemParameter

@dynamic name;
@dynamic HTTPHeader;
@dynamic URLQueryParameter;

typedef struct SystemParameter__storage_ {
  uint32_t _has_storage_[1];
  NSString *name;
  NSString *HTTPHeader;
  NSString *URLQueryParameter;
} SystemParameter__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "name",
        .dataTypeSpecific.clazz = Nil,
        .number = SystemParameter_FieldNumber_Name,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(SystemParameter__storage_, name),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeString,
      },
      {
        .name = "HTTPHeader",
        .dataTypeSpecific.clazz = Nil,
        .number = SystemParameter_FieldNumber_HTTPHeader,
        .hasIndex = 1,
        .offset = (uint32_t)offsetof(SystemParameter__storage_, HTTPHeader),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldTextFormatNameCustom | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeString,
      },
      {
        .name = "URLQueryParameter",
        .dataTypeSpecific.clazz = Nil,
        .number = SystemParameter_FieldNumber_URLQueryParameter,
        .hasIndex = 2,
        .offset = (uint32_t)offsetof(SystemParameter__storage_, URLQueryParameter),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldTextFormatNameCustom | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeString,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[SystemParameter class]
                                     rootClass:[SystemParameterRoot class]
                                          file:SystemParameterRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(SystemParameter__storage_)
                                         flags:(GPBDescriptorInitializationFlags)(GPBDescriptorInitializationFlag_UsesClassRefs | GPBDescriptorInitializationFlag_Proto3OptionalKnown)];
#if !GPBOBJC_SKIP_MESSAGE_TEXTFORMAT_EXTRAS
    static const char *extraTextFormatInfo =
        "\002\002!!!!\246\000\003!!!\245\251\000";
    [localDescriptor setupExtraTextInfo:extraTextFormatInfo];
#endif  // !GPBOBJC_SKIP_MESSAGE_TEXTFORMAT_EXTRAS
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
