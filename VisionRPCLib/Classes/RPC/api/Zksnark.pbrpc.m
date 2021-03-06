// Code generated by gRPC proto compiler.  DO NOT EDIT!
// source: api/zksnark.proto

#if !defined(GPB_GRPC_PROTOCOL_ONLY) || !GPB_GRPC_PROTOCOL_ONLY
#import "Zksnark.pbrpc.h"
#import "Zksnark.pbobjc.h"
#import <ProtoRPC/ProtoRPCLegacy.h>
#import <RxLibrary/GRXWriter+Immediate.h>

#import "Vision.pbobjc.h"

@implementation VisionZksnark

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wobjc-designated-initializers"

// Designated initializer
- (instancetype)initWithHost:(NSString *)host callOptions:(GRPCCallOptions *_Nullable)callOptions {
  return [super initWithHost:host
                 packageName:@"protocol"
                 serviceName:@"VisionZksnark"
                 callOptions:callOptions];
}

- (instancetype)initWithHost:(NSString *)host {
  return [super initWithHost:host
                 packageName:@"protocol"
                 serviceName:@"VisionZksnark"];
}

#pragma clang diagnostic pop

// Override superclass initializer to disallow different package and service names.
- (instancetype)initWithHost:(NSString *)host
                 packageName:(NSString *)packageName
                 serviceName:(NSString *)serviceName {
  return [self initWithHost:host];
}

- (instancetype)initWithHost:(NSString *)host
                 packageName:(NSString *)packageName
                 serviceName:(NSString *)serviceName
                 callOptions:(GRPCCallOptions *)callOptions {
  return [self initWithHost:host callOptions:callOptions];
}

#pragma mark - Class Methods

+ (instancetype)serviceWithHost:(NSString *)host {
  return [[self alloc] initWithHost:host];
}

+ (instancetype)serviceWithHost:(NSString *)host callOptions:(GRPCCallOptions *_Nullable)callOptions {
  return [[self alloc] initWithHost:host callOptions:callOptions];
}

#pragma mark - Method Implementations

#pragma mark CheckZksnarkProof(ZksnarkRequest) returns (ZksnarkResponse)

- (void)checkZksnarkProofWithRequest:(ZksnarkRequest *)request handler:(void(^)(ZksnarkResponse *_Nullable response, NSError *_Nullable error))handler{
  [[self RPCToCheckZksnarkProofWithRequest:request handler:handler] start];
}
// Returns a not-yet-started RPC object.
- (GRPCProtoCall *)RPCToCheckZksnarkProofWithRequest:(ZksnarkRequest *)request handler:(void(^)(ZksnarkResponse *_Nullable response, NSError *_Nullable error))handler{
  return [self RPCToMethod:@"CheckZksnarkProof"
            requestsWriter:[GRXWriter writerWithValue:request]
             responseClass:[ZksnarkResponse class]
        responsesWriteable:[GRXWriteable writeableWithSingleHandler:handler]];
}
- (GRPCUnaryProtoCall *)checkZksnarkProofWithMessage:(ZksnarkRequest *)message responseHandler:(id<GRPCProtoResponseHandler>)handler callOptions:(GRPCCallOptions *_Nullable)callOptions {
  return [self RPCToMethod:@"CheckZksnarkProof"
                   message:message
           responseHandler:handler
               callOptions:callOptions
             responseClass:[ZksnarkResponse class]];
}

@end
#endif
