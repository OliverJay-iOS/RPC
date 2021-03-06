// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: core/Discover.proto

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

#import "Discover.pbobjc.h"
// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#pragma mark - Objective C Class declarations
// Forward declarations of Objective C classes that we can use as
// static values in struct initializers.
// We don't use [Foo class] because it is not a static value.
GPBObjCClassDeclaration(Endpoint);

#pragma mark - DiscoverRoot

@implementation DiscoverRoot

// No extensions in the file and no imports, so no need to generate
// +extensionRegistry.

@end

#pragma mark - DiscoverRoot_FileDescriptor

static GPBFileDescriptor *DiscoverRoot_FileDescriptor(void) {
  // This is called by +initialize so there is no need to worry
  // about thread safety of the singleton.
  static GPBFileDescriptor *descriptor = NULL;
  if (!descriptor) {
    GPB_DEBUG_CHECK_RUNTIME_VERSIONS();
    descriptor = [[GPBFileDescriptor alloc] initWithPackage:@"protocol"
                                                     syntax:GPBFileSyntaxProto3];
  }
  return descriptor;
}

#pragma mark - Endpoint

@implementation Endpoint

@dynamic address;
@dynamic port;
@dynamic nodeId;

typedef struct Endpoint__storage_ {
  uint32_t _has_storage_[1];
  int32_t port;
  NSData *address;
  NSData *nodeId;
} Endpoint__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "address",
        .dataTypeSpecific.clazz = Nil,
        .number = Endpoint_FieldNumber_Address,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(Endpoint__storage_, address),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeBytes,
      },
      {
        .name = "port",
        .dataTypeSpecific.clazz = Nil,
        .number = Endpoint_FieldNumber_Port,
        .hasIndex = 1,
        .offset = (uint32_t)offsetof(Endpoint__storage_, port),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeInt32,
      },
      {
        .name = "nodeId",
        .dataTypeSpecific.clazz = Nil,
        .number = Endpoint_FieldNumber_NodeId,
        .hasIndex = 2,
        .offset = (uint32_t)offsetof(Endpoint__storage_, nodeId),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldTextFormatNameCustom | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeBytes,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[Endpoint class]
                                     rootClass:[DiscoverRoot class]
                                          file:DiscoverRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(Endpoint__storage_)
                                         flags:(GPBDescriptorInitializationFlags)(GPBDescriptorInitializationFlag_UsesClassRefs | GPBDescriptorInitializationFlag_Proto3OptionalKnown)];
#if !GPBOBJC_SKIP_MESSAGE_TEXTFORMAT_EXTRAS
    static const char *extraTextFormatInfo =
        "\001\003\006\000";
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

#pragma mark - PingMessage

@implementation PingMessage

@dynamic hasFrom, from;
@dynamic hasTo, to;
@dynamic version;
@dynamic timestamp;

typedef struct PingMessage__storage_ {
  uint32_t _has_storage_[1];
  int32_t version;
  Endpoint *from;
  Endpoint *to;
  int64_t timestamp;
} PingMessage__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "from",
        .dataTypeSpecific.clazz = GPBObjCClass(Endpoint),
        .number = PingMessage_FieldNumber_From,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(PingMessage__storage_, from),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeMessage,
      },
      {
        .name = "to",
        .dataTypeSpecific.clazz = GPBObjCClass(Endpoint),
        .number = PingMessage_FieldNumber_To,
        .hasIndex = 1,
        .offset = (uint32_t)offsetof(PingMessage__storage_, to),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeMessage,
      },
      {
        .name = "version",
        .dataTypeSpecific.clazz = Nil,
        .number = PingMessage_FieldNumber_Version,
        .hasIndex = 2,
        .offset = (uint32_t)offsetof(PingMessage__storage_, version),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeInt32,
      },
      {
        .name = "timestamp",
        .dataTypeSpecific.clazz = Nil,
        .number = PingMessage_FieldNumber_Timestamp,
        .hasIndex = 3,
        .offset = (uint32_t)offsetof(PingMessage__storage_, timestamp),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeInt64,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[PingMessage class]
                                     rootClass:[DiscoverRoot class]
                                          file:DiscoverRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(PingMessage__storage_)
                                         flags:(GPBDescriptorInitializationFlags)(GPBDescriptorInitializationFlag_UsesClassRefs | GPBDescriptorInitializationFlag_Proto3OptionalKnown)];
    #if defined(DEBUG) && DEBUG
      NSAssert(descriptor == nil, @"Startup recursed!");
    #endif  // DEBUG
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - PongMessage

@implementation PongMessage

@dynamic hasFrom, from;
@dynamic echo;
@dynamic timestamp;

typedef struct PongMessage__storage_ {
  uint32_t _has_storage_[1];
  int32_t echo;
  Endpoint *from;
  int64_t timestamp;
} PongMessage__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "from",
        .dataTypeSpecific.clazz = GPBObjCClass(Endpoint),
        .number = PongMessage_FieldNumber_From,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(PongMessage__storage_, from),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeMessage,
      },
      {
        .name = "echo",
        .dataTypeSpecific.clazz = Nil,
        .number = PongMessage_FieldNumber_Echo,
        .hasIndex = 1,
        .offset = (uint32_t)offsetof(PongMessage__storage_, echo),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeInt32,
      },
      {
        .name = "timestamp",
        .dataTypeSpecific.clazz = Nil,
        .number = PongMessage_FieldNumber_Timestamp,
        .hasIndex = 2,
        .offset = (uint32_t)offsetof(PongMessage__storage_, timestamp),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeInt64,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[PongMessage class]
                                     rootClass:[DiscoverRoot class]
                                          file:DiscoverRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(PongMessage__storage_)
                                         flags:(GPBDescriptorInitializationFlags)(GPBDescriptorInitializationFlag_UsesClassRefs | GPBDescriptorInitializationFlag_Proto3OptionalKnown)];
    #if defined(DEBUG) && DEBUG
      NSAssert(descriptor == nil, @"Startup recursed!");
    #endif  // DEBUG
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - FindNeighbours

@implementation FindNeighbours

@dynamic hasFrom, from;
@dynamic targetId;
@dynamic timestamp;

typedef struct FindNeighbours__storage_ {
  uint32_t _has_storage_[1];
  Endpoint *from;
  NSData *targetId;
  int64_t timestamp;
} FindNeighbours__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "from",
        .dataTypeSpecific.clazz = GPBObjCClass(Endpoint),
        .number = FindNeighbours_FieldNumber_From,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(FindNeighbours__storage_, from),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeMessage,
      },
      {
        .name = "targetId",
        .dataTypeSpecific.clazz = Nil,
        .number = FindNeighbours_FieldNumber_TargetId,
        .hasIndex = 1,
        .offset = (uint32_t)offsetof(FindNeighbours__storage_, targetId),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldTextFormatNameCustom | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeBytes,
      },
      {
        .name = "timestamp",
        .dataTypeSpecific.clazz = Nil,
        .number = FindNeighbours_FieldNumber_Timestamp,
        .hasIndex = 2,
        .offset = (uint32_t)offsetof(FindNeighbours__storage_, timestamp),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeInt64,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[FindNeighbours class]
                                     rootClass:[DiscoverRoot class]
                                          file:DiscoverRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(FindNeighbours__storage_)
                                         flags:(GPBDescriptorInitializationFlags)(GPBDescriptorInitializationFlag_UsesClassRefs | GPBDescriptorInitializationFlag_Proto3OptionalKnown)];
#if !GPBOBJC_SKIP_MESSAGE_TEXTFORMAT_EXTRAS
    static const char *extraTextFormatInfo =
        "\001\002\010\000";
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

#pragma mark - Neighbours

@implementation Neighbours

@dynamic hasFrom, from;
@dynamic neighboursArray, neighboursArray_Count;
@dynamic timestamp;

typedef struct Neighbours__storage_ {
  uint32_t _has_storage_[1];
  Endpoint *from;
  NSMutableArray *neighboursArray;
  int64_t timestamp;
} Neighbours__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "from",
        .dataTypeSpecific.clazz = GPBObjCClass(Endpoint),
        .number = Neighbours_FieldNumber_From,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(Neighbours__storage_, from),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeMessage,
      },
      {
        .name = "neighboursArray",
        .dataTypeSpecific.clazz = GPBObjCClass(Endpoint),
        .number = Neighbours_FieldNumber_NeighboursArray,
        .hasIndex = GPBNoHasBit,
        .offset = (uint32_t)offsetof(Neighbours__storage_, neighboursArray),
        .flags = GPBFieldRepeated,
        .dataType = GPBDataTypeMessage,
      },
      {
        .name = "timestamp",
        .dataTypeSpecific.clazz = Nil,
        .number = Neighbours_FieldNumber_Timestamp,
        .hasIndex = 1,
        .offset = (uint32_t)offsetof(Neighbours__storage_, timestamp),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeInt64,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[Neighbours class]
                                     rootClass:[DiscoverRoot class]
                                          file:DiscoverRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(Neighbours__storage_)
                                         flags:(GPBDescriptorInitializationFlags)(GPBDescriptorInitializationFlag_UsesClassRefs | GPBDescriptorInitializationFlag_Proto3OptionalKnown)];
    #if defined(DEBUG) && DEBUG
      NSAssert(descriptor == nil, @"Startup recursed!");
    #endif  // DEBUG
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - BackupMessage

@implementation BackupMessage

@dynamic flag;
@dynamic priority;

typedef struct BackupMessage__storage_ {
  uint32_t _has_storage_[1];
  int32_t priority;
} BackupMessage__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "flag",
        .dataTypeSpecific.clazz = Nil,
        .number = BackupMessage_FieldNumber_Flag,
        .hasIndex = 0,
        .offset = 1,  // Stored in _has_storage_ to save space.
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeBool,
      },
      {
        .name = "priority",
        .dataTypeSpecific.clazz = Nil,
        .number = BackupMessage_FieldNumber_Priority,
        .hasIndex = 2,
        .offset = (uint32_t)offsetof(BackupMessage__storage_, priority),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldClearHasIvarOnZero),
        .dataType = GPBDataTypeInt32,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[BackupMessage class]
                                     rootClass:[DiscoverRoot class]
                                          file:DiscoverRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(BackupMessage__storage_)
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
