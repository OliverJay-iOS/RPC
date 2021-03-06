// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/api/http.proto

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

#import "HTTP.pbobjc.h"
// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#pragma clang diagnostic ignored "-Wdirect-ivar-access"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#pragma mark - Objective C Class declarations
// Forward declarations of Objective C classes that we can use as
// static values in struct initializers.
// We don't use [Foo class] because it is not a static value.
GPBObjCClassDeclaration(CustomHttpPattern);
GPBObjCClassDeclaration(HttpRule);

#pragma mark - HTTPRoot

@implementation HTTPRoot

// No extensions in the file and no imports, so no need to generate
// +extensionRegistry.

@end

#pragma mark - HTTPRoot_FileDescriptor

static GPBFileDescriptor *HTTPRoot_FileDescriptor(void) {
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

#pragma mark - Http

@implementation Http

@dynamic rulesArray, rulesArray_Count;

typedef struct Http__storage_ {
  uint32_t _has_storage_[1];
  NSMutableArray *rulesArray;
} Http__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "rulesArray",
        .dataTypeSpecific.clazz = GPBObjCClass(HttpRule),
        .number = Http_FieldNumber_RulesArray,
        .hasIndex = GPBNoHasBit,
        .offset = (uint32_t)offsetof(Http__storage_, rulesArray),
        .flags = GPBFieldRepeated,
        .dataType = GPBDataTypeMessage,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[Http class]
                                     rootClass:[HTTPRoot class]
                                          file:HTTPRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(Http__storage_)
                                         flags:(GPBDescriptorInitializationFlags)(GPBDescriptorInitializationFlag_UsesClassRefs | GPBDescriptorInitializationFlag_Proto3OptionalKnown)];
    #if defined(DEBUG) && DEBUG
      NSAssert(descriptor == nil, @"Startup recursed!");
    #endif  // DEBUG
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - HttpRule

@implementation HttpRule

@dynamic patternOneOfCase;
@dynamic selector;
@dynamic get;
@dynamic put;
@dynamic post;
@dynamic delete_p;
@dynamic patch;
@dynamic custom;
@dynamic body;
@dynamic additionalBindingsArray, additionalBindingsArray_Count;

typedef struct HttpRule__storage_ {
  uint32_t _has_storage_[2];
  NSString *selector;
  NSString *get;
  NSString *put;
  NSString *post;
  NSString *delete_p;
  NSString *patch;
  NSString *body;
  CustomHttpPattern *custom;
  NSMutableArray *additionalBindingsArray;
} HttpRule__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "selector",
        .dataTypeSpecific.clazz = Nil,
        .number = HttpRule_FieldNumber_Selector,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(HttpRule__storage_, selector),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeString,
      },
      {
        .name = "get",
        .dataTypeSpecific.clazz = Nil,
        .number = HttpRule_FieldNumber_Get,
        .hasIndex = -1,
        .offset = (uint32_t)offsetof(HttpRule__storage_, get),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeString,
      },
      {
        .name = "put",
        .dataTypeSpecific.clazz = Nil,
        .number = HttpRule_FieldNumber_Put,
        .hasIndex = -1,
        .offset = (uint32_t)offsetof(HttpRule__storage_, put),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeString,
      },
      {
        .name = "post",
        .dataTypeSpecific.clazz = Nil,
        .number = HttpRule_FieldNumber_Post,
        .hasIndex = -1,
        .offset = (uint32_t)offsetof(HttpRule__storage_, post),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeString,
      },
      {
        .name = "delete_p",
        .dataTypeSpecific.clazz = Nil,
        .number = HttpRule_FieldNumber_Delete_p,
        .hasIndex = -1,
        .offset = (uint32_t)offsetof(HttpRule__storage_, delete_p),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeString,
      },
      {
        .name = "patch",
        .dataTypeSpecific.clazz = Nil,
        .number = HttpRule_FieldNumber_Patch,
        .hasIndex = -1,
        .offset = (uint32_t)offsetof(HttpRule__storage_, patch),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeString,
      },
      {
        .name = "body",
        .dataTypeSpecific.clazz = Nil,
        .number = HttpRule_FieldNumber_Body,
        .hasIndex = 1,
        .offset = (uint32_t)offsetof(HttpRule__storage_, body),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeString,
      },
      {
        .name = "custom",
        .dataTypeSpecific.clazz = GPBObjCClass(CustomHttpPattern),
        .number = HttpRule_FieldNumber_Custom,
        .hasIndex = -1,
        .offset = (uint32_t)offsetof(HttpRule__storage_, custom),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeMessage,
      },
      {
        .name = "additionalBindingsArray",
        .dataTypeSpecific.clazz = GPBObjCClass(HttpRule),
        .number = HttpRule_FieldNumber_AdditionalBindingsArray,
        .hasIndex = GPBNoHasBit,
        .offset = (uint32_t)offsetof(HttpRule__storage_, additionalBindingsArray),
        .flags = GPBFieldRepeated,
        .dataType = GPBDataTypeMessage,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[HttpRule class]
                                     rootClass:[HTTPRoot class]
                                          file:HTTPRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(HttpRule__storage_)
                                         flags:(GPBDescriptorInitializationFlags)(GPBDescriptorInitializationFlag_UsesClassRefs | GPBDescriptorInitializationFlag_Proto3OptionalKnown)];
    static const char *oneofs[] = {
      "pattern",
    };
    [localDescriptor setupOneofs:oneofs
                           count:(uint32_t)(sizeof(oneofs) / sizeof(char*))
                   firstHasIndex:-1];
    #if defined(DEBUG) && DEBUG
      NSAssert(descriptor == nil, @"Startup recursed!");
    #endif  // DEBUG
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

void HttpRule_ClearPatternOneOfCase(HttpRule *message) {
  GPBDescriptor *descriptor = [HttpRule descriptor];
  GPBOneofDescriptor *oneof = [descriptor.oneofs objectAtIndex:0];
  GPBClearOneof(message, oneof);
}
#pragma mark - CustomHttpPattern

@implementation CustomHttpPattern

@dynamic kind;
@dynamic path;

typedef struct CustomHttpPattern__storage_ {
  uint32_t _has_storage_[1];
  NSString *kind;
  NSString *path;
} CustomHttpPattern__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "kind",
        .dataTypeSpecific.clazz = Nil,
        .number = CustomHttpPattern_FieldNumber_Kind,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(CustomHttpPattern__storage_, kind),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeString,
      },
      {
        .name = "path",
        .dataTypeSpecific.clazz = Nil,
        .number = CustomHttpPattern_FieldNumber_Path,
        .hasIndex = 1,
        .offset = (uint32_t)offsetof(CustomHttpPattern__storage_, path),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeString,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[CustomHttpPattern class]
                                     rootClass:[HTTPRoot class]
                                          file:HTTPRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(CustomHttpPattern__storage_)
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
