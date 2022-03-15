// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/logging/type/http_request.proto

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

#import "HTTPRequest.pbobjc.h"
#import "Annotations.pbobjc.h"
// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

#pragma mark - HTTPRequestRoot

@implementation HTTPRequestRoot

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

#pragma mark - HTTPRequestRoot_FileDescriptor

static GPBFileDescriptor *HTTPRequestRoot_FileDescriptor(void) {
  // This is called by +initialize so there is no need to worry
  // about thread safety of the singleton.
  static GPBFileDescriptor *descriptor = NULL;
  if (!descriptor) {
    GPB_DEBUG_CHECK_RUNTIME_VERSIONS();
    descriptor = [[GPBFileDescriptor alloc] initWithPackage:@"google.logging.type"
                                                     syntax:GPBFileSyntaxProto3];
  }
  return descriptor;
}

#pragma mark - HttpRequest

@implementation HttpRequest

@dynamic requestMethod;
@dynamic requestURL;
@dynamic requestSize;
@dynamic status;
@dynamic responseSize;
@dynamic userAgent;
@dynamic remoteIp;
@dynamic serverIp;
@dynamic referer;
@dynamic cacheLookup;
@dynamic cacheHit;
@dynamic cacheValidatedWithOriginServer;
@dynamic cacheFillBytes;

typedef struct HttpRequest__storage_ {
  uint32_t _has_storage_[1];
  int32_t status;
  NSString *requestMethod;
  NSString *requestURL;
  NSString *userAgent;
  NSString *remoteIp;
  NSString *referer;
  NSString *serverIp;
  int64_t requestSize;
  int64_t responseSize;
  int64_t cacheFillBytes;
} HttpRequest__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "requestMethod",
        .dataTypeSpecific.clazz = Nil,
        .number = HttpRequest_FieldNumber_RequestMethod,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(HttpRequest__storage_, requestMethod),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeString,
      },
      {
        .name = "requestURL",
        .dataTypeSpecific.clazz = Nil,
        .number = HttpRequest_FieldNumber_RequestURL,
        .hasIndex = 1,
        .offset = (uint32_t)offsetof(HttpRequest__storage_, requestURL),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldTextFormatNameCustom | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeString,
      },
      {
        .name = "requestSize",
        .dataTypeSpecific.clazz = Nil,
        .number = HttpRequest_FieldNumber_RequestSize,
        .hasIndex = 2,
        .offset = (uint32_t)offsetof(HttpRequest__storage_, requestSize),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeInt64,
      },
      {
        .name = "status",
        .dataTypeSpecific.clazz = Nil,
        .number = HttpRequest_FieldNumber_Status,
        .hasIndex = 3,
        .offset = (uint32_t)offsetof(HttpRequest__storage_, status),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeInt32,
      },
      {
        .name = "responseSize",
        .dataTypeSpecific.clazz = Nil,
        .number = HttpRequest_FieldNumber_ResponseSize,
        .hasIndex = 4,
        .offset = (uint32_t)offsetof(HttpRequest__storage_, responseSize),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeInt64,
      },
      {
        .name = "userAgent",
        .dataTypeSpecific.clazz = Nil,
        .number = HttpRequest_FieldNumber_UserAgent,
        .hasIndex = 5,
        .offset = (uint32_t)offsetof(HttpRequest__storage_, userAgent),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeString,
      },
      {
        .name = "remoteIp",
        .dataTypeSpecific.clazz = Nil,
        .number = HttpRequest_FieldNumber_RemoteIp,
        .hasIndex = 6,
        .offset = (uint32_t)offsetof(HttpRequest__storage_, remoteIp),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeString,
      },
      {
        .name = "referer",
        .dataTypeSpecific.clazz = Nil,
        .number = HttpRequest_FieldNumber_Referer,
        .hasIndex = 8,
        .offset = (uint32_t)offsetof(HttpRequest__storage_, referer),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeString,
      },
      {
        .name = "cacheHit",
        .dataTypeSpecific.clazz = Nil,
        .number = HttpRequest_FieldNumber_CacheHit,
        .hasIndex = 11,
        .offset = 12,  // Stored in _has_storage_ to save space.
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeBool,
      },
      {
        .name = "cacheValidatedWithOriginServer",
        .dataTypeSpecific.clazz = Nil,
        .number = HttpRequest_FieldNumber_CacheValidatedWithOriginServer,
        .hasIndex = 13,
        .offset = 14,  // Stored in _has_storage_ to save space.
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeBool,
      },
      {
        .name = "cacheLookup",
        .dataTypeSpecific.clazz = Nil,
        .number = HttpRequest_FieldNumber_CacheLookup,
        .hasIndex = 9,
        .offset = 10,  // Stored in _has_storage_ to save space.
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeBool,
      },
      {
        .name = "cacheFillBytes",
        .dataTypeSpecific.clazz = Nil,
        .number = HttpRequest_FieldNumber_CacheFillBytes,
        .hasIndex = 15,
        .offset = (uint32_t)offsetof(HttpRequest__storage_, cacheFillBytes),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeInt64,
      },
      {
        .name = "serverIp",
        .dataTypeSpecific.clazz = Nil,
        .number = HttpRequest_FieldNumber_ServerIp,
        .hasIndex = 7,
        .offset = (uint32_t)offsetof(HttpRequest__storage_, serverIp),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeString,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[HttpRequest class]
                                     rootClass:[HTTPRequestRoot class]
                                          file:HTTPRequestRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(HttpRequest__storage_)
                                         flags:(GPBDescriptorInitializationFlags)(GPBDescriptorInitializationFlag_UsesClassRefs | GPBDescriptorInitializationFlag_Proto3OptionalKnown)];
#if !GPBOBJC_SKIP_MESSAGE_TEXTFORMAT_EXTRAS
    static const char *extraTextFormatInfo =
        "\001\002\007\241!!\000";
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