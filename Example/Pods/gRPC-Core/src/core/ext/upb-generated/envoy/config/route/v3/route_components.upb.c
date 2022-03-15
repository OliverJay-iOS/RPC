/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/config/route/v3/route_components.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#if COCOAPODS==1
  #include  "third_party/upb/upb/msg.h"
#else
  #include  "upb/msg.h"
#endif
#if COCOAPODS==1
  #include  "src/core/ext/upb-generated/envoy/config/route/v3/route_components.upb.h"
#else
  #include  "envoy/config/route/v3/route_components.upb.h"
#endif
#if COCOAPODS==1
  #include  "src/core/ext/upb-generated/envoy/config/core/v3/base.upb.h"
#else
  #include  "envoy/config/core/v3/base.upb.h"
#endif
#if COCOAPODS==1
  #include  "src/core/ext/upb-generated/envoy/config/core/v3/extension.upb.h"
#else
  #include  "envoy/config/core/v3/extension.upb.h"
#endif
#if COCOAPODS==1
  #include  "src/core/ext/upb-generated/envoy/config/core/v3/proxy_protocol.upb.h"
#else
  #include  "envoy/config/core/v3/proxy_protocol.upb.h"
#endif
#if COCOAPODS==1
  #include  "src/core/ext/upb-generated/envoy/type/matcher/v3/regex.upb.h"
#else
  #include  "envoy/type/matcher/v3/regex.upb.h"
#endif
#if COCOAPODS==1
  #include  "src/core/ext/upb-generated/envoy/type/matcher/v3/string.upb.h"
#else
  #include  "envoy/type/matcher/v3/string.upb.h"
#endif
#if COCOAPODS==1
  #include  "src/core/ext/upb-generated/envoy/type/metadata/v3/metadata.upb.h"
#else
  #include  "envoy/type/metadata/v3/metadata.upb.h"
#endif
#if COCOAPODS==1
  #include  "src/core/ext/upb-generated/envoy/type/tracing/v3/custom_tag.upb.h"
#else
  #include  "envoy/type/tracing/v3/custom_tag.upb.h"
#endif
#if COCOAPODS==1
  #include  "src/core/ext/upb-generated/envoy/type/v3/percent.upb.h"
#else
  #include  "envoy/type/v3/percent.upb.h"
#endif
#if COCOAPODS==1
  #include  "src/core/ext/upb-generated/envoy/type/v3/range.upb.h"
#else
  #include  "envoy/type/v3/range.upb.h"
#endif
#if COCOAPODS==1
  #include  "src/core/ext/upb-generated/google/protobuf/any.upb.h"
#else
  #include  "google/protobuf/any.upb.h"
#endif
#if COCOAPODS==1
  #include  "src/core/ext/upb-generated/google/protobuf/duration.upb.h"
#else
  #include  "google/protobuf/duration.upb.h"
#endif
#if COCOAPODS==1
  #include  "src/core/ext/upb-generated/google/protobuf/struct.upb.h"
#else
  #include  "google/protobuf/struct.upb.h"
#endif
#if COCOAPODS==1
  #include  "src/core/ext/upb-generated/google/protobuf/wrappers.upb.h"
#else
  #include  "google/protobuf/wrappers.upb.h"
#endif
#if COCOAPODS==1
  #include  "src/core/ext/upb-generated/envoy/annotations/deprecation.upb.h"
#else
  #include  "envoy/annotations/deprecation.upb.h"
#endif
#if COCOAPODS==1
  #include  "src/core/ext/upb-generated/udpa/annotations/migrate.upb.h"
#else
  #include  "udpa/annotations/migrate.upb.h"
#endif
#if COCOAPODS==1
  #include  "src/core/ext/upb-generated/udpa/annotations/status.upb.h"
#else
  #include  "udpa/annotations/status.upb.h"
#endif
#if COCOAPODS==1
  #include  "src/core/ext/upb-generated/udpa/annotations/versioning.upb.h"
#else
  #include  "udpa/annotations/versioning.upb.h"
#endif
#if COCOAPODS==1
  #include  "src/core/ext/upb-generated/validate/validate.upb.h"
#else
  #include  "validate/validate.upb.h"
#endif

#if COCOAPODS==1
  #include  "third_party/upb/upb/port_def.inc"
#else
  #include  "upb/port_def.inc"
#endif

static const upb_msglayout *const envoy_config_route_v3_VirtualHost_submsgs[10] = {
  &envoy_config_core_v3_HeaderValueOption_msginit,
  &envoy_config_route_v3_CorsPolicy_msginit,
  &envoy_config_route_v3_HedgePolicy_msginit,
  &envoy_config_route_v3_RateLimit_msginit,
  &envoy_config_route_v3_RetryPolicy_msginit,
  &envoy_config_route_v3_Route_msginit,
  &envoy_config_route_v3_VirtualCluster_msginit,
  &envoy_config_route_v3_VirtualHost_TypedPerFilterConfigEntry_msginit,
  &google_protobuf_Any_msginit,
  &google_protobuf_UInt32Value_msginit,
};

static const upb_msglayout_field envoy_config_route_v3_VirtualHost__fields[18] = {
  {1, UPB_SIZE(12, 16), 0, 0, 9, 1},
  {2, UPB_SIZE(40, 72), 0, 0, 9, 3},
  {3, UPB_SIZE(44, 80), 0, 5, 11, 3},
  {4, UPB_SIZE(4, 4), 0, 0, 14, 1},
  {5, UPB_SIZE(48, 88), 0, 6, 11, 3},
  {6, UPB_SIZE(52, 96), 0, 3, 11, 3},
  {7, UPB_SIZE(56, 104), 0, 0, 11, 3},
  {8, UPB_SIZE(20, 32), 1, 1, 11, 1},
  {10, UPB_SIZE(60, 112), 0, 0, 11, 3},
  {11, UPB_SIZE(64, 120), 0, 0, 9, 3},
  {13, UPB_SIZE(68, 128), 0, 0, 9, 3},
  {14, UPB_SIZE(8, 8), 0, 0, 8, 1},
  {15, UPB_SIZE(72, 136), 0, 7, 11, _UPB_LABEL_MAP},
  {16, UPB_SIZE(24, 40), 2, 4, 11, 1},
  {17, UPB_SIZE(28, 48), 3, 2, 11, 1},
  {18, UPB_SIZE(32, 56), 4, 9, 11, 1},
  {19, UPB_SIZE(9, 9), 0, 0, 8, 1},
  {20, UPB_SIZE(36, 64), 5, 8, 11, 1},
};

const upb_msglayout envoy_config_route_v3_VirtualHost_msginit = {
  &envoy_config_route_v3_VirtualHost_submsgs[0],
  &envoy_config_route_v3_VirtualHost__fields[0],
  UPB_SIZE(80, 144), 18, false, 255,
};

static const upb_msglayout *const envoy_config_route_v3_VirtualHost_TypedPerFilterConfigEntry_submsgs[1] = {
  &google_protobuf_Any_msginit,
};

static const upb_msglayout_field envoy_config_route_v3_VirtualHost_TypedPerFilterConfigEntry__fields[2] = {
  {1, UPB_SIZE(0, 0), 0, 0, 9, 1},
  {2, UPB_SIZE(8, 16), 0, 0, 11, 1},
};

const upb_msglayout envoy_config_route_v3_VirtualHost_TypedPerFilterConfigEntry_msginit = {
  &envoy_config_route_v3_VirtualHost_TypedPerFilterConfigEntry_submsgs[0],
  &envoy_config_route_v3_VirtualHost_TypedPerFilterConfigEntry__fields[0],
  UPB_SIZE(16, 32), 2, false, 255,
};

static const upb_msglayout *const envoy_config_route_v3_FilterAction_submsgs[1] = {
  &google_protobuf_Any_msginit,
};

static const upb_msglayout_field envoy_config_route_v3_FilterAction__fields[1] = {
  {1, UPB_SIZE(4, 8), 1, 0, 11, 1},
};

const upb_msglayout envoy_config_route_v3_FilterAction_msginit = {
  &envoy_config_route_v3_FilterAction_submsgs[0],
  &envoy_config_route_v3_FilterAction__fields[0],
  UPB_SIZE(8, 16), 1, false, 255,
};

static const upb_msglayout *const envoy_config_route_v3_Route_submsgs[11] = {
  &envoy_config_core_v3_HeaderValueOption_msginit,
  &envoy_config_core_v3_Metadata_msginit,
  &envoy_config_route_v3_Decorator_msginit,
  &envoy_config_route_v3_DirectResponseAction_msginit,
  &envoy_config_route_v3_FilterAction_msginit,
  &envoy_config_route_v3_RedirectAction_msginit,
  &envoy_config_route_v3_Route_TypedPerFilterConfigEntry_msginit,
  &envoy_config_route_v3_RouteAction_msginit,
  &envoy_config_route_v3_RouteMatch_msginit,
  &envoy_config_route_v3_Tracing_msginit,
  &google_protobuf_UInt32Value_msginit,
};

static const upb_msglayout_field envoy_config_route_v3_Route__fields[15] = {
  {1, UPB_SIZE(12, 24), 1, 8, 11, 1},
  {2, UPB_SIZE(52, 104), UPB_SIZE(-57, -113), 7, 11, 1},
  {3, UPB_SIZE(52, 104), UPB_SIZE(-57, -113), 5, 11, 1},
  {4, UPB_SIZE(16, 32), 2, 1, 11, 1},
  {5, UPB_SIZE(20, 40), 3, 2, 11, 1},
  {7, UPB_SIZE(52, 104), UPB_SIZE(-57, -113), 3, 11, 1},
  {9, UPB_SIZE(32, 64), 0, 0, 11, 3},
  {10, UPB_SIZE(36, 72), 0, 0, 11, 3},
  {11, UPB_SIZE(40, 80), 0, 0, 9, 3},
  {12, UPB_SIZE(44, 88), 0, 0, 9, 3},
  {13, UPB_SIZE(48, 96), 0, 6, 11, _UPB_LABEL_MAP},
  {14, UPB_SIZE(4, 8), 0, 0, 9, 1},
  {15, UPB_SIZE(24, 48), 4, 9, 11, 1},
  {16, UPB_SIZE(28, 56), 5, 10, 11, 1},
  {17, UPB_SIZE(52, 104), UPB_SIZE(-57, -113), 4, 11, 1},
};

const upb_msglayout envoy_config_route_v3_Route_msginit = {
  &envoy_config_route_v3_Route_submsgs[0],
  &envoy_config_route_v3_Route__fields[0],
  UPB_SIZE(64, 128), 15, false, 255,
};

static const upb_msglayout *const envoy_config_route_v3_Route_TypedPerFilterConfigEntry_submsgs[1] = {
  &google_protobuf_Any_msginit,
};

static const upb_msglayout_field envoy_config_route_v3_Route_TypedPerFilterConfigEntry__fields[2] = {
  {1, UPB_SIZE(0, 0), 0, 0, 9, 1},
  {2, UPB_SIZE(8, 16), 0, 0, 11, 1},
};

const upb_msglayout envoy_config_route_v3_Route_TypedPerFilterConfigEntry_msginit = {
  &envoy_config_route_v3_Route_TypedPerFilterConfigEntry_submsgs[0],
  &envoy_config_route_v3_Route_TypedPerFilterConfigEntry__fields[0],
  UPB_SIZE(16, 32), 2, false, 255,
};

static const upb_msglayout *const envoy_config_route_v3_WeightedCluster_submsgs[2] = {
  &envoy_config_route_v3_WeightedCluster_ClusterWeight_msginit,
  &google_protobuf_UInt32Value_msginit,
};

static const upb_msglayout_field envoy_config_route_v3_WeightedCluster__fields[3] = {
  {1, UPB_SIZE(16, 32), 0, 0, 11, 3},
  {2, UPB_SIZE(4, 8), 0, 0, 9, 1},
  {3, UPB_SIZE(12, 24), 1, 1, 11, 1},
};

const upb_msglayout envoy_config_route_v3_WeightedCluster_msginit = {
  &envoy_config_route_v3_WeightedCluster_submsgs[0],
  &envoy_config_route_v3_WeightedCluster__fields[0],
  UPB_SIZE(24, 48), 3, false, 255,
};

static const upb_msglayout *const envoy_config_route_v3_WeightedCluster_ClusterWeight_submsgs[4] = {
  &envoy_config_core_v3_HeaderValueOption_msginit,
  &envoy_config_core_v3_Metadata_msginit,
  &envoy_config_route_v3_WeightedCluster_ClusterWeight_TypedPerFilterConfigEntry_msginit,
  &google_protobuf_UInt32Value_msginit,
};

static const upb_msglayout_field envoy_config_route_v3_WeightedCluster_ClusterWeight__fields[8] = {
  {1, UPB_SIZE(4, 8), 0, 0, 9, 1},
  {2, UPB_SIZE(12, 24), 1, 3, 11, 1},
  {3, UPB_SIZE(16, 32), 2, 1, 11, 1},
  {4, UPB_SIZE(20, 40), 0, 0, 11, 3},
  {5, UPB_SIZE(24, 48), 0, 0, 11, 3},
  {6, UPB_SIZE(28, 56), 0, 0, 9, 3},
  {9, UPB_SIZE(32, 64), 0, 0, 9, 3},
  {10, UPB_SIZE(36, 72), 0, 2, 11, _UPB_LABEL_MAP},
};

const upb_msglayout envoy_config_route_v3_WeightedCluster_ClusterWeight_msginit = {
  &envoy_config_route_v3_WeightedCluster_ClusterWeight_submsgs[0],
  &envoy_config_route_v3_WeightedCluster_ClusterWeight__fields[0],
  UPB_SIZE(40, 80), 8, false, 255,
};

static const upb_msglayout *const envoy_config_route_v3_WeightedCluster_ClusterWeight_TypedPerFilterConfigEntry_submsgs[1] = {
  &google_protobuf_Any_msginit,
};

static const upb_msglayout_field envoy_config_route_v3_WeightedCluster_ClusterWeight_TypedPerFilterConfigEntry__fields[2] = {
  {1, UPB_SIZE(0, 0), 0, 0, 9, 1},
  {2, UPB_SIZE(8, 16), 0, 0, 11, 1},
};

const upb_msglayout envoy_config_route_v3_WeightedCluster_ClusterWeight_TypedPerFilterConfigEntry_msginit = {
  &envoy_config_route_v3_WeightedCluster_ClusterWeight_TypedPerFilterConfigEntry_submsgs[0],
  &envoy_config_route_v3_WeightedCluster_ClusterWeight_TypedPerFilterConfigEntry__fields[0],
  UPB_SIZE(16, 32), 2, false, 255,
};

static const upb_msglayout *const envoy_config_route_v3_RouteMatch_submsgs[8] = {
  &envoy_config_core_v3_RuntimeFractionalPercent_msginit,
  &envoy_config_route_v3_HeaderMatcher_msginit,
  &envoy_config_route_v3_QueryParameterMatcher_msginit,
  &envoy_config_route_v3_RouteMatch_ConnectMatcher_msginit,
  &envoy_config_route_v3_RouteMatch_GrpcRouteMatchOptions_msginit,
  &envoy_config_route_v3_RouteMatch_TlsContextMatchOptions_msginit,
  &envoy_type_matcher_v3_RegexMatcher_msginit,
  &google_protobuf_BoolValue_msginit,
};

static const upb_msglayout_field envoy_config_route_v3_RouteMatch__fields[10] = {
  {1, UPB_SIZE(28, 56), UPB_SIZE(-37, -73), 0, 9, 1},
  {2, UPB_SIZE(28, 56), UPB_SIZE(-37, -73), 0, 9, 1},
  {4, UPB_SIZE(4, 8), 1, 7, 11, 1},
  {6, UPB_SIZE(20, 40), 0, 1, 11, 3},
  {7, UPB_SIZE(24, 48), 0, 2, 11, 3},
  {8, UPB_SIZE(8, 16), 2, 4, 11, 1},
  {9, UPB_SIZE(12, 24), 3, 0, 11, 1},
  {10, UPB_SIZE(28, 56), UPB_SIZE(-37, -73), 6, 11, 1},
  {11, UPB_SIZE(16, 32), 4, 5, 11, 1},
  {12, UPB_SIZE(28, 56), UPB_SIZE(-37, -73), 3, 11, 1},
};

const upb_msglayout envoy_config_route_v3_RouteMatch_msginit = {
  &envoy_config_route_v3_RouteMatch_submsgs[0],
  &envoy_config_route_v3_RouteMatch__fields[0],
  UPB_SIZE(40, 80), 10, false, 255,
};

const upb_msglayout envoy_config_route_v3_RouteMatch_GrpcRouteMatchOptions_msginit = {
  NULL,
  NULL,
  UPB_SIZE(0, 0), 0, false, 255,
};

static const upb_msglayout *const envoy_config_route_v3_RouteMatch_TlsContextMatchOptions_submsgs[1] = {
  &google_protobuf_BoolValue_msginit,
};

static const upb_msglayout_field envoy_config_route_v3_RouteMatch_TlsContextMatchOptions__fields[2] = {
  {1, UPB_SIZE(4, 8), 1, 0, 11, 1},
  {2, UPB_SIZE(8, 16), 2, 0, 11, 1},
};

const upb_msglayout envoy_config_route_v3_RouteMatch_TlsContextMatchOptions_msginit = {
  &envoy_config_route_v3_RouteMatch_TlsContextMatchOptions_submsgs[0],
  &envoy_config_route_v3_RouteMatch_TlsContextMatchOptions__fields[0],
  UPB_SIZE(16, 24), 2, false, 255,
};

const upb_msglayout envoy_config_route_v3_RouteMatch_ConnectMatcher_msginit = {
  NULL,
  NULL,
  UPB_SIZE(0, 0), 0, false, 255,
};

static const upb_msglayout *const envoy_config_route_v3_CorsPolicy_submsgs[3] = {
  &envoy_config_core_v3_RuntimeFractionalPercent_msginit,
  &envoy_type_matcher_v3_StringMatcher_msginit,
  &google_protobuf_BoolValue_msginit,
};

static const upb_msglayout_field envoy_config_route_v3_CorsPolicy__fields[8] = {
  {2, UPB_SIZE(4, 8), 0, 0, 9, 1},
  {3, UPB_SIZE(12, 24), 0, 0, 9, 1},
  {4, UPB_SIZE(20, 40), 0, 0, 9, 1},
  {5, UPB_SIZE(28, 56), 0, 0, 9, 1},
  {6, UPB_SIZE(36, 72), 1, 2, 11, 1},
  {9, UPB_SIZE(48, 96), UPB_SIZE(-53, -105), 0, 11, 1},
  {10, UPB_SIZE(40, 80), 2, 0, 11, 1},
  {11, UPB_SIZE(44, 88), 0, 1, 11, 3},
};

const upb_msglayout envoy_config_route_v3_CorsPolicy_msginit = {
  &envoy_config_route_v3_CorsPolicy_submsgs[0],
  &envoy_config_route_v3_CorsPolicy__fields[0],
  UPB_SIZE(56, 112), 8, false, 255,
};

static const upb_msglayout *const envoy_config_route_v3_RouteAction_submsgs[16] = {
  &envoy_config_core_v3_Metadata_msginit,
  &envoy_config_route_v3_CorsPolicy_msginit,
  &envoy_config_route_v3_HedgePolicy_msginit,
  &envoy_config_route_v3_InternalRedirectPolicy_msginit,
  &envoy_config_route_v3_RateLimit_msginit,
  &envoy_config_route_v3_RetryPolicy_msginit,
  &envoy_config_route_v3_RouteAction_HashPolicy_msginit,
  &envoy_config_route_v3_RouteAction_MaxStreamDuration_msginit,
  &envoy_config_route_v3_RouteAction_RequestMirrorPolicy_msginit,
  &envoy_config_route_v3_RouteAction_UpgradeConfig_msginit,
  &envoy_config_route_v3_WeightedCluster_msginit,
  &envoy_type_matcher_v3_RegexMatchAndSubstitute_msginit,
  &google_protobuf_Any_msginit,
  &google_protobuf_BoolValue_msginit,
  &google_protobuf_Duration_msginit,
  &google_protobuf_UInt32Value_msginit,
};

static const upb_msglayout_field envoy_config_route_v3_RouteAction__fields[29] = {
  {1, UPB_SIZE(96, 176), UPB_SIZE(-105, -193), 0, 9, 1},
  {2, UPB_SIZE(96, 176), UPB_SIZE(-105, -193), 0, 9, 1},
  {3, UPB_SIZE(96, 176), UPB_SIZE(-105, -193), 10, 11, 1},
  {4, UPB_SIZE(24, 32), 1, 0, 11, 1},
  {5, UPB_SIZE(16, 16), 0, 0, 9, 1},
  {6, UPB_SIZE(108, 200), UPB_SIZE(-117, -217), 0, 9, 1},
  {7, UPB_SIZE(108, 200), UPB_SIZE(-117, -217), 13, 11, 1},
  {8, UPB_SIZE(28, 40), 2, 14, 11, 1},
  {9, UPB_SIZE(32, 48), 3, 5, 11, 1},
  {11, UPB_SIZE(4, 4), 0, 0, 14, 1},
  {13, UPB_SIZE(80, 144), 0, 4, 11, 3},
  {14, UPB_SIZE(36, 56), 4, 13, 11, 1},
  {15, UPB_SIZE(84, 152), 0, 6, 11, 3},
  {17, UPB_SIZE(40, 64), 5, 1, 11, 1},
  {20, UPB_SIZE(8, 8), 0, 0, 14, 1},
  {23, UPB_SIZE(44, 72), 6, 14, 11, 1},
  {24, UPB_SIZE(48, 80), 7, 14, 11, 1},
  {25, UPB_SIZE(88, 160), 0, 9, 11, 3},
  {26, UPB_SIZE(12, 12), 0, 0, 14, 1},
  {27, UPB_SIZE(52, 88), 8, 2, 11, 1},
  {28, UPB_SIZE(56, 96), 9, 14, 11, 1},
  {29, UPB_SIZE(108, 200), UPB_SIZE(-117, -217), 0, 9, 1},
  {30, UPB_SIZE(92, 168), 0, 8, 11, 3},
  {31, UPB_SIZE(60, 104), 10, 15, 11, 1},
  {32, UPB_SIZE(64, 112), 11, 11, 11, 1},
  {33, UPB_SIZE(68, 120), 12, 12, 11, 1},
  {34, UPB_SIZE(72, 128), 13, 3, 11, 1},
  {35, UPB_SIZE(108, 200), UPB_SIZE(-117, -217), 11, 11, 1},
  {36, UPB_SIZE(76, 136), 14, 7, 11, 1},
};

const upb_msglayout envoy_config_route_v3_RouteAction_msginit = {
  &envoy_config_route_v3_RouteAction_submsgs[0],
  &envoy_config_route_v3_RouteAction__fields[0],
  UPB_SIZE(120, 224), 29, false, 255,
};

static const upb_msglayout *const envoy_config_route_v3_RouteAction_RequestMirrorPolicy_submsgs[2] = {
  &envoy_config_core_v3_RuntimeFractionalPercent_msginit,
  &google_protobuf_BoolValue_msginit,
};

static const upb_msglayout_field envoy_config_route_v3_RouteAction_RequestMirrorPolicy__fields[3] = {
  {1, UPB_SIZE(4, 8), 0, 0, 9, 1},
  {3, UPB_SIZE(12, 24), 1, 0, 11, 1},
  {4, UPB_SIZE(16, 32), 2, 1, 11, 1},
};

const upb_msglayout envoy_config_route_v3_RouteAction_RequestMirrorPolicy_msginit = {
  &envoy_config_route_v3_RouteAction_RequestMirrorPolicy_submsgs[0],
  &envoy_config_route_v3_RouteAction_RequestMirrorPolicy__fields[0],
  UPB_SIZE(24, 48), 3, false, 255,
};

static const upb_msglayout *const envoy_config_route_v3_RouteAction_HashPolicy_submsgs[5] = {
  &envoy_config_route_v3_RouteAction_HashPolicy_ConnectionProperties_msginit,
  &envoy_config_route_v3_RouteAction_HashPolicy_Cookie_msginit,
  &envoy_config_route_v3_RouteAction_HashPolicy_FilterState_msginit,
  &envoy_config_route_v3_RouteAction_HashPolicy_Header_msginit,
  &envoy_config_route_v3_RouteAction_HashPolicy_QueryParameter_msginit,
};

static const upb_msglayout_field envoy_config_route_v3_RouteAction_HashPolicy__fields[6] = {
  {1, UPB_SIZE(4, 8), UPB_SIZE(-9, -17), 3, 11, 1},
  {2, UPB_SIZE(4, 8), UPB_SIZE(-9, -17), 1, 11, 1},
  {3, UPB_SIZE(4, 8), UPB_SIZE(-9, -17), 0, 11, 1},
  {4, UPB_SIZE(0, 0), 0, 0, 8, 1},
  {5, UPB_SIZE(4, 8), UPB_SIZE(-9, -17), 4, 11, 1},
  {6, UPB_SIZE(4, 8), UPB_SIZE(-9, -17), 2, 11, 1},
};

const upb_msglayout envoy_config_route_v3_RouteAction_HashPolicy_msginit = {
  &envoy_config_route_v3_RouteAction_HashPolicy_submsgs[0],
  &envoy_config_route_v3_RouteAction_HashPolicy__fields[0],
  UPB_SIZE(16, 24), 6, false, 255,
};

static const upb_msglayout *const envoy_config_route_v3_RouteAction_HashPolicy_Header_submsgs[1] = {
  &envoy_type_matcher_v3_RegexMatchAndSubstitute_msginit,
};

static const upb_msglayout_field envoy_config_route_v3_RouteAction_HashPolicy_Header__fields[2] = {
  {1, UPB_SIZE(4, 8), 0, 0, 9, 1},
  {2, UPB_SIZE(12, 24), 1, 0, 11, 1},
};

const upb_msglayout envoy_config_route_v3_RouteAction_HashPolicy_Header_msginit = {
  &envoy_config_route_v3_RouteAction_HashPolicy_Header_submsgs[0],
  &envoy_config_route_v3_RouteAction_HashPolicy_Header__fields[0],
  UPB_SIZE(16, 32), 2, false, 255,
};

static const upb_msglayout *const envoy_config_route_v3_RouteAction_HashPolicy_Cookie_submsgs[1] = {
  &google_protobuf_Duration_msginit,
};

static const upb_msglayout_field envoy_config_route_v3_RouteAction_HashPolicy_Cookie__fields[3] = {
  {1, UPB_SIZE(4, 8), 0, 0, 9, 1},
  {2, UPB_SIZE(20, 40), 1, 0, 11, 1},
  {3, UPB_SIZE(12, 24), 0, 0, 9, 1},
};

const upb_msglayout envoy_config_route_v3_RouteAction_HashPolicy_Cookie_msginit = {
  &envoy_config_route_v3_RouteAction_HashPolicy_Cookie_submsgs[0],
  &envoy_config_route_v3_RouteAction_HashPolicy_Cookie__fields[0],
  UPB_SIZE(24, 48), 3, false, 255,
};

static const upb_msglayout_field envoy_config_route_v3_RouteAction_HashPolicy_ConnectionProperties__fields[1] = {
  {1, UPB_SIZE(0, 0), 0, 0, 8, 1},
};

const upb_msglayout envoy_config_route_v3_RouteAction_HashPolicy_ConnectionProperties_msginit = {
  NULL,
  &envoy_config_route_v3_RouteAction_HashPolicy_ConnectionProperties__fields[0],
  UPB_SIZE(8, 8), 1, false, 255,
};

static const upb_msglayout_field envoy_config_route_v3_RouteAction_HashPolicy_QueryParameter__fields[1] = {
  {1, UPB_SIZE(0, 0), 0, 0, 9, 1},
};

const upb_msglayout envoy_config_route_v3_RouteAction_HashPolicy_QueryParameter_msginit = {
  NULL,
  &envoy_config_route_v3_RouteAction_HashPolicy_QueryParameter__fields[0],
  UPB_SIZE(8, 16), 1, false, 255,
};

static const upb_msglayout_field envoy_config_route_v3_RouteAction_HashPolicy_FilterState__fields[1] = {
  {1, UPB_SIZE(0, 0), 0, 0, 9, 1},
};

const upb_msglayout envoy_config_route_v3_RouteAction_HashPolicy_FilterState_msginit = {
  NULL,
  &envoy_config_route_v3_RouteAction_HashPolicy_FilterState__fields[0],
  UPB_SIZE(8, 16), 1, false, 255,
};

static const upb_msglayout *const envoy_config_route_v3_RouteAction_UpgradeConfig_submsgs[2] = {
  &envoy_config_route_v3_RouteAction_UpgradeConfig_ConnectConfig_msginit,
  &google_protobuf_BoolValue_msginit,
};

static const upb_msglayout_field envoy_config_route_v3_RouteAction_UpgradeConfig__fields[3] = {
  {1, UPB_SIZE(4, 8), 0, 0, 9, 1},
  {2, UPB_SIZE(12, 24), 1, 1, 11, 1},
  {3, UPB_SIZE(16, 32), 2, 0, 11, 1},
};

const upb_msglayout envoy_config_route_v3_RouteAction_UpgradeConfig_msginit = {
  &envoy_config_route_v3_RouteAction_UpgradeConfig_submsgs[0],
  &envoy_config_route_v3_RouteAction_UpgradeConfig__fields[0],
  UPB_SIZE(24, 48), 3, false, 255,
};

static const upb_msglayout *const envoy_config_route_v3_RouteAction_UpgradeConfig_ConnectConfig_submsgs[1] = {
  &envoy_config_core_v3_ProxyProtocolConfig_msginit,
};

static const upb_msglayout_field envoy_config_route_v3_RouteAction_UpgradeConfig_ConnectConfig__fields[1] = {
  {1, UPB_SIZE(4, 8), 1, 0, 11, 1},
};

const upb_msglayout envoy_config_route_v3_RouteAction_UpgradeConfig_ConnectConfig_msginit = {
  &envoy_config_route_v3_RouteAction_UpgradeConfig_ConnectConfig_submsgs[0],
  &envoy_config_route_v3_RouteAction_UpgradeConfig_ConnectConfig__fields[0],
  UPB_SIZE(8, 16), 1, false, 255,
};

static const upb_msglayout *const envoy_config_route_v3_RouteAction_MaxStreamDuration_submsgs[1] = {
  &google_protobuf_Duration_msginit,
};

static const upb_msglayout_field envoy_config_route_v3_RouteAction_MaxStreamDuration__fields[3] = {
  {1, UPB_SIZE(4, 8), 1, 0, 11, 1},
  {2, UPB_SIZE(8, 16), 2, 0, 11, 1},
  {3, UPB_SIZE(12, 24), 3, 0, 11, 1},
};

const upb_msglayout envoy_config_route_v3_RouteAction_MaxStreamDuration_msginit = {
  &envoy_config_route_v3_RouteAction_MaxStreamDuration_submsgs[0],
  &envoy_config_route_v3_RouteAction_MaxStreamDuration__fields[0],
  UPB_SIZE(16, 32), 3, false, 255,
};

static const upb_msglayout *const envoy_config_route_v3_RetryPolicy_submsgs[7] = {
  &envoy_config_route_v3_HeaderMatcher_msginit,
  &envoy_config_route_v3_RetryPolicy_RateLimitedRetryBackOff_msginit,
  &envoy_config_route_v3_RetryPolicy_RetryBackOff_msginit,
  &envoy_config_route_v3_RetryPolicy_RetryHostPredicate_msginit,
  &envoy_config_route_v3_RetryPolicy_RetryPriority_msginit,
  &google_protobuf_Duration_msginit,
  &google_protobuf_UInt32Value_msginit,
};

static const upb_msglayout_field envoy_config_route_v3_RetryPolicy__fields[11] = {
  {1, UPB_SIZE(16, 16), 0, 0, 9, 1},
  {2, UPB_SIZE(24, 32), 1, 6, 11, 1},
  {3, UPB_SIZE(28, 40), 2, 5, 11, 1},
  {4, UPB_SIZE(32, 48), 3, 4, 11, 1},
  {5, UPB_SIZE(44, 72), 0, 3, 11, 3},
  {6, UPB_SIZE(8, 8), 0, 0, 3, 1},
  {7, UPB_SIZE(48, 80), 0, 0, 13, _UPB_LABEL_PACKED},
  {8, UPB_SIZE(36, 56), 4, 2, 11, 1},
  {9, UPB_SIZE(52, 88), 0, 0, 11, 3},
  {10, UPB_SIZE(56, 96), 0, 0, 11, 3},
  {11, UPB_SIZE(40, 64), 5, 1, 11, 1},
};

const upb_msglayout envoy_config_route_v3_RetryPolicy_msginit = {
  &envoy_config_route_v3_RetryPolicy_submsgs[0],
  &envoy_config_route_v3_RetryPolicy__fields[0],
  UPB_SIZE(64, 112), 11, false, 255,
};

static const upb_msglayout *const envoy_config_route_v3_RetryPolicy_RetryPriority_submsgs[1] = {
  &google_protobuf_Any_msginit,
};

static const upb_msglayout_field envoy_config_route_v3_RetryPolicy_RetryPriority__fields[2] = {
  {1, UPB_SIZE(0, 0), 0, 0, 9, 1},
  {3, UPB_SIZE(8, 16), UPB_SIZE(-13, -25), 0, 11, 1},
};

const upb_msglayout envoy_config_route_v3_RetryPolicy_RetryPriority_msginit = {
  &envoy_config_route_v3_RetryPolicy_RetryPriority_submsgs[0],
  &envoy_config_route_v3_RetryPolicy_RetryPriority__fields[0],
  UPB_SIZE(16, 32), 2, false, 255,
};

static const upb_msglayout *const envoy_config_route_v3_RetryPolicy_RetryHostPredicate_submsgs[1] = {
  &google_protobuf_Any_msginit,
};

static const upb_msglayout_field envoy_config_route_v3_RetryPolicy_RetryHostPredicate__fields[2] = {
  {1, UPB_SIZE(0, 0), 0, 0, 9, 1},
  {3, UPB_SIZE(8, 16), UPB_SIZE(-13, -25), 0, 11, 1},
};

const upb_msglayout envoy_config_route_v3_RetryPolicy_RetryHostPredicate_msginit = {
  &envoy_config_route_v3_RetryPolicy_RetryHostPredicate_submsgs[0],
  &envoy_config_route_v3_RetryPolicy_RetryHostPredicate__fields[0],
  UPB_SIZE(16, 32), 2, false, 255,
};

static const upb_msglayout *const envoy_config_route_v3_RetryPolicy_RetryBackOff_submsgs[1] = {
  &google_protobuf_Duration_msginit,
};

static const upb_msglayout_field envoy_config_route_v3_RetryPolicy_RetryBackOff__fields[2] = {
  {1, UPB_SIZE(4, 8), 1, 0, 11, 1},
  {2, UPB_SIZE(8, 16), 2, 0, 11, 1},
};

const upb_msglayout envoy_config_route_v3_RetryPolicy_RetryBackOff_msginit = {
  &envoy_config_route_v3_RetryPolicy_RetryBackOff_submsgs[0],
  &envoy_config_route_v3_RetryPolicy_RetryBackOff__fields[0],
  UPB_SIZE(16, 24), 2, false, 255,
};

static const upb_msglayout_field envoy_config_route_v3_RetryPolicy_ResetHeader__fields[2] = {
  {1, UPB_SIZE(4, 8), 0, 0, 9, 1},
  {2, UPB_SIZE(0, 0), 0, 0, 14, 1},
};

const upb_msglayout envoy_config_route_v3_RetryPolicy_ResetHeader_msginit = {
  NULL,
  &envoy_config_route_v3_RetryPolicy_ResetHeader__fields[0],
  UPB_SIZE(16, 32), 2, false, 255,
};

static const upb_msglayout *const envoy_config_route_v3_RetryPolicy_RateLimitedRetryBackOff_submsgs[2] = {
  &envoy_config_route_v3_RetryPolicy_ResetHeader_msginit,
  &google_protobuf_Duration_msginit,
};

static const upb_msglayout_field envoy_config_route_v3_RetryPolicy_RateLimitedRetryBackOff__fields[2] = {
  {1, UPB_SIZE(8, 16), 0, 0, 11, 3},
  {2, UPB_SIZE(4, 8), 1, 1, 11, 1},
};

const upb_msglayout envoy_config_route_v3_RetryPolicy_RateLimitedRetryBackOff_msginit = {
  &envoy_config_route_v3_RetryPolicy_RateLimitedRetryBackOff_submsgs[0],
  &envoy_config_route_v3_RetryPolicy_RateLimitedRetryBackOff__fields[0],
  UPB_SIZE(16, 24), 2, false, 255,
};

static const upb_msglayout *const envoy_config_route_v3_HedgePolicy_submsgs[2] = {
  &envoy_type_v3_FractionalPercent_msginit,
  &google_protobuf_UInt32Value_msginit,
};

static const upb_msglayout_field envoy_config_route_v3_HedgePolicy__fields[3] = {
  {1, UPB_SIZE(4, 8), 1, 1, 11, 1},
  {2, UPB_SIZE(8, 16), 2, 0, 11, 1},
  {3, UPB_SIZE(1, 1), 0, 0, 8, 1},
};

const upb_msglayout envoy_config_route_v3_HedgePolicy_msginit = {
  &envoy_config_route_v3_HedgePolicy_submsgs[0],
  &envoy_config_route_v3_HedgePolicy__fields[0],
  UPB_SIZE(16, 24), 3, false, 255,
};

static const upb_msglayout_field envoy_config_route_v3_RedirectAction__fields[8] = {
  {1, UPB_SIZE(12, 16), 0, 0, 9, 1},
  {2, UPB_SIZE(20, 32), UPB_SIZE(-29, -49), 0, 9, 1},
  {3, UPB_SIZE(0, 0), 0, 0, 14, 1},
  {4, UPB_SIZE(32, 56), UPB_SIZE(-41, -73), 0, 8, 1},
  {5, UPB_SIZE(20, 32), UPB_SIZE(-29, -49), 0, 9, 1},
  {6, UPB_SIZE(8, 8), 0, 0, 8, 1},
  {7, UPB_SIZE(32, 56), UPB_SIZE(-41, -73), 0, 9, 1},
  {8, UPB_SIZE(4, 4), 0, 0, 13, 1},
};

const upb_msglayout envoy_config_route_v3_RedirectAction_msginit = {
  NULL,
  &envoy_config_route_v3_RedirectAction__fields[0],
  UPB_SIZE(48, 80), 8, false, 255,
};

static const upb_msglayout *const envoy_config_route_v3_DirectResponseAction_submsgs[1] = {
  &envoy_config_core_v3_DataSource_msginit,
};

static const upb_msglayout_field envoy_config_route_v3_DirectResponseAction__fields[2] = {
  {1, UPB_SIZE(4, 4), 0, 0, 13, 1},
  {2, UPB_SIZE(8, 8), 1, 0, 11, 1},
};

const upb_msglayout envoy_config_route_v3_DirectResponseAction_msginit = {
  &envoy_config_route_v3_DirectResponseAction_submsgs[0],
  &envoy_config_route_v3_DirectResponseAction__fields[0],
  UPB_SIZE(16, 16), 2, false, 255,
};

static const upb_msglayout *const envoy_config_route_v3_Decorator_submsgs[1] = {
  &google_protobuf_BoolValue_msginit,
};

static const upb_msglayout_field envoy_config_route_v3_Decorator__fields[2] = {
  {1, UPB_SIZE(4, 8), 0, 0, 9, 1},
  {2, UPB_SIZE(12, 24), 1, 0, 11, 1},
};

const upb_msglayout envoy_config_route_v3_Decorator_msginit = {
  &envoy_config_route_v3_Decorator_submsgs[0],
  &envoy_config_route_v3_Decorator__fields[0],
  UPB_SIZE(16, 32), 2, false, 255,
};

static const upb_msglayout *const envoy_config_route_v3_Tracing_submsgs[2] = {
  &envoy_type_tracing_v3_CustomTag_msginit,
  &envoy_type_v3_FractionalPercent_msginit,
};

static const upb_msglayout_field envoy_config_route_v3_Tracing__fields[4] = {
  {1, UPB_SIZE(4, 8), 1, 1, 11, 1},
  {2, UPB_SIZE(8, 16), 2, 1, 11, 1},
  {3, UPB_SIZE(12, 24), 3, 1, 11, 1},
  {4, UPB_SIZE(16, 32), 0, 0, 11, 3},
};

const upb_msglayout envoy_config_route_v3_Tracing_msginit = {
  &envoy_config_route_v3_Tracing_submsgs[0],
  &envoy_config_route_v3_Tracing__fields[0],
  UPB_SIZE(24, 40), 4, false, 255,
};

static const upb_msglayout *const envoy_config_route_v3_VirtualCluster_submsgs[1] = {
  &envoy_config_route_v3_HeaderMatcher_msginit,
};

static const upb_msglayout_field envoy_config_route_v3_VirtualCluster__fields[2] = {
  {2, UPB_SIZE(0, 0), 0, 0, 9, 1},
  {4, UPB_SIZE(8, 16), 0, 0, 11, 3},
};

const upb_msglayout envoy_config_route_v3_VirtualCluster_msginit = {
  &envoy_config_route_v3_VirtualCluster_submsgs[0],
  &envoy_config_route_v3_VirtualCluster__fields[0],
  UPB_SIZE(16, 32), 2, false, 255,
};

static const upb_msglayout *const envoy_config_route_v3_RateLimit_submsgs[3] = {
  &envoy_config_route_v3_RateLimit_Action_msginit,
  &envoy_config_route_v3_RateLimit_Override_msginit,
  &google_protobuf_UInt32Value_msginit,
};

static const upb_msglayout_field envoy_config_route_v3_RateLimit__fields[4] = {
  {1, UPB_SIZE(12, 24), 1, 2, 11, 1},
  {2, UPB_SIZE(4, 8), 0, 0, 9, 1},
  {3, UPB_SIZE(20, 40), 0, 0, 11, 3},
  {4, UPB_SIZE(16, 32), 2, 1, 11, 1},
};

const upb_msglayout envoy_config_route_v3_RateLimit_msginit = {
  &envoy_config_route_v3_RateLimit_submsgs[0],
  &envoy_config_route_v3_RateLimit__fields[0],
  UPB_SIZE(24, 48), 4, false, 255,
};

static const upb_msglayout *const envoy_config_route_v3_RateLimit_Action_submsgs[7] = {
  &envoy_config_route_v3_RateLimit_Action_DestinationCluster_msginit,
  &envoy_config_route_v3_RateLimit_Action_DynamicMetaData_msginit,
  &envoy_config_route_v3_RateLimit_Action_GenericKey_msginit,
  &envoy_config_route_v3_RateLimit_Action_HeaderValueMatch_msginit,
  &envoy_config_route_v3_RateLimit_Action_RemoteAddress_msginit,
  &envoy_config_route_v3_RateLimit_Action_RequestHeaders_msginit,
  &envoy_config_route_v3_RateLimit_Action_SourceCluster_msginit,
};

static const upb_msglayout_field envoy_config_route_v3_RateLimit_Action__fields[7] = {
  {1, UPB_SIZE(0, 0), UPB_SIZE(-5, -9), 6, 11, 1},
  {2, UPB_SIZE(0, 0), UPB_SIZE(-5, -9), 0, 11, 1},
  {3, UPB_SIZE(0, 0), UPB_SIZE(-5, -9), 5, 11, 1},
  {4, UPB_SIZE(0, 0), UPB_SIZE(-5, -9), 4, 11, 1},
  {5, UPB_SIZE(0, 0), UPB_SIZE(-5, -9), 2, 11, 1},
  {6, UPB_SIZE(0, 0), UPB_SIZE(-5, -9), 3, 11, 1},
  {7, UPB_SIZE(0, 0), UPB_SIZE(-5, -9), 1, 11, 1},
};

const upb_msglayout envoy_config_route_v3_RateLimit_Action_msginit = {
  &envoy_config_route_v3_RateLimit_Action_submsgs[0],
  &envoy_config_route_v3_RateLimit_Action__fields[0],
  UPB_SIZE(8, 16), 7, false, 255,
};

const upb_msglayout envoy_config_route_v3_RateLimit_Action_SourceCluster_msginit = {
  NULL,
  NULL,
  UPB_SIZE(0, 0), 0, false, 255,
};

const upb_msglayout envoy_config_route_v3_RateLimit_Action_DestinationCluster_msginit = {
  NULL,
  NULL,
  UPB_SIZE(0, 0), 0, false, 255,
};

static const upb_msglayout_field envoy_config_route_v3_RateLimit_Action_RequestHeaders__fields[3] = {
  {1, UPB_SIZE(4, 8), 0, 0, 9, 1},
  {2, UPB_SIZE(12, 24), 0, 0, 9, 1},
  {3, UPB_SIZE(0, 0), 0, 0, 8, 1},
};

const upb_msglayout envoy_config_route_v3_RateLimit_Action_RequestHeaders_msginit = {
  NULL,
  &envoy_config_route_v3_RateLimit_Action_RequestHeaders__fields[0],
  UPB_SIZE(24, 48), 3, false, 255,
};

const upb_msglayout envoy_config_route_v3_RateLimit_Action_RemoteAddress_msginit = {
  NULL,
  NULL,
  UPB_SIZE(0, 0), 0, false, 255,
};

static const upb_msglayout_field envoy_config_route_v3_RateLimit_Action_GenericKey__fields[2] = {
  {1, UPB_SIZE(0, 0), 0, 0, 9, 1},
  {2, UPB_SIZE(8, 16), 0, 0, 9, 1},
};

const upb_msglayout envoy_config_route_v3_RateLimit_Action_GenericKey_msginit = {
  NULL,
  &envoy_config_route_v3_RateLimit_Action_GenericKey__fields[0],
  UPB_SIZE(16, 32), 2, false, 255,
};

static const upb_msglayout *const envoy_config_route_v3_RateLimit_Action_HeaderValueMatch_submsgs[2] = {
  &envoy_config_route_v3_HeaderMatcher_msginit,
  &google_protobuf_BoolValue_msginit,
};

static const upb_msglayout_field envoy_config_route_v3_RateLimit_Action_HeaderValueMatch__fields[3] = {
  {1, UPB_SIZE(4, 8), 0, 0, 9, 1},
  {2, UPB_SIZE(12, 24), 1, 1, 11, 1},
  {3, UPB_SIZE(16, 32), 0, 0, 11, 3},
};

const upb_msglayout envoy_config_route_v3_RateLimit_Action_HeaderValueMatch_msginit = {
  &envoy_config_route_v3_RateLimit_Action_HeaderValueMatch_submsgs[0],
  &envoy_config_route_v3_RateLimit_Action_HeaderValueMatch__fields[0],
  UPB_SIZE(24, 48), 3, false, 255,
};

static const upb_msglayout *const envoy_config_route_v3_RateLimit_Action_DynamicMetaData_submsgs[1] = {
  &envoy_type_metadata_v3_MetadataKey_msginit,
};

static const upb_msglayout_field envoy_config_route_v3_RateLimit_Action_DynamicMetaData__fields[3] = {
  {1, UPB_SIZE(4, 8), 0, 0, 9, 1},
  {2, UPB_SIZE(20, 40), 1, 0, 11, 1},
  {3, UPB_SIZE(12, 24), 0, 0, 9, 1},
};

const upb_msglayout envoy_config_route_v3_RateLimit_Action_DynamicMetaData_msginit = {
  &envoy_config_route_v3_RateLimit_Action_DynamicMetaData_submsgs[0],
  &envoy_config_route_v3_RateLimit_Action_DynamicMetaData__fields[0],
  UPB_SIZE(24, 48), 3, false, 255,
};

static const upb_msglayout *const envoy_config_route_v3_RateLimit_Override_submsgs[1] = {
  &envoy_config_route_v3_RateLimit_Override_DynamicMetadata_msginit,
};

static const upb_msglayout_field envoy_config_route_v3_RateLimit_Override__fields[1] = {
  {1, UPB_SIZE(0, 0), UPB_SIZE(-5, -9), 0, 11, 1},
};

const upb_msglayout envoy_config_route_v3_RateLimit_Override_msginit = {
  &envoy_config_route_v3_RateLimit_Override_submsgs[0],
  &envoy_config_route_v3_RateLimit_Override__fields[0],
  UPB_SIZE(8, 16), 1, false, 255,
};

static const upb_msglayout *const envoy_config_route_v3_RateLimit_Override_DynamicMetadata_submsgs[1] = {
  &envoy_type_metadata_v3_MetadataKey_msginit,
};

static const upb_msglayout_field envoy_config_route_v3_RateLimit_Override_DynamicMetadata__fields[1] = {
  {1, UPB_SIZE(4, 8), 1, 0, 11, 1},
};

const upb_msglayout envoy_config_route_v3_RateLimit_Override_DynamicMetadata_msginit = {
  &envoy_config_route_v3_RateLimit_Override_DynamicMetadata_submsgs[0],
  &envoy_config_route_v3_RateLimit_Override_DynamicMetadata__fields[0],
  UPB_SIZE(8, 16), 1, false, 255,
};

static const upb_msglayout *const envoy_config_route_v3_HeaderMatcher_submsgs[2] = {
  &envoy_type_matcher_v3_RegexMatcher_msginit,
  &envoy_type_v3_Int64Range_msginit,
};

static const upb_msglayout_field envoy_config_route_v3_HeaderMatcher__fields[9] = {
  {1, UPB_SIZE(4, 8), 0, 0, 9, 1},
  {4, UPB_SIZE(12, 24), UPB_SIZE(-21, -41), 0, 9, 1},
  {6, UPB_SIZE(12, 24), UPB_SIZE(-21, -41), 1, 11, 1},
  {7, UPB_SIZE(12, 24), UPB_SIZE(-21, -41), 0, 8, 1},
  {8, UPB_SIZE(0, 0), 0, 0, 8, 1},
  {9, UPB_SIZE(12, 24), UPB_SIZE(-21, -41), 0, 9, 1},
  {10, UPB_SIZE(12, 24), UPB_SIZE(-21, -41), 0, 9, 1},
  {11, UPB_SIZE(12, 24), UPB_SIZE(-21, -41), 0, 11, 1},
  {12, UPB_SIZE(12, 24), UPB_SIZE(-21, -41), 0, 9, 1},
};

const upb_msglayout envoy_config_route_v3_HeaderMatcher_msginit = {
  &envoy_config_route_v3_HeaderMatcher_submsgs[0],
  &envoy_config_route_v3_HeaderMatcher__fields[0],
  UPB_SIZE(24, 48), 9, false, 255,
};

static const upb_msglayout *const envoy_config_route_v3_QueryParameterMatcher_submsgs[1] = {
  &envoy_type_matcher_v3_StringMatcher_msginit,
};

static const upb_msglayout_field envoy_config_route_v3_QueryParameterMatcher__fields[3] = {
  {1, UPB_SIZE(0, 0), 0, 0, 9, 1},
  {5, UPB_SIZE(8, 16), UPB_SIZE(-13, -25), 0, 11, 1},
  {6, UPB_SIZE(8, 16), UPB_SIZE(-13, -25), 0, 8, 1},
};

const upb_msglayout envoy_config_route_v3_QueryParameterMatcher_msginit = {
  &envoy_config_route_v3_QueryParameterMatcher_submsgs[0],
  &envoy_config_route_v3_QueryParameterMatcher__fields[0],
  UPB_SIZE(16, 32), 3, false, 255,
};

static const upb_msglayout *const envoy_config_route_v3_InternalRedirectPolicy_submsgs[2] = {
  &envoy_config_core_v3_TypedExtensionConfig_msginit,
  &google_protobuf_UInt32Value_msginit,
};

static const upb_msglayout_field envoy_config_route_v3_InternalRedirectPolicy__fields[4] = {
  {1, UPB_SIZE(4, 8), 1, 1, 11, 1},
  {2, UPB_SIZE(8, 16), 0, 0, 13, _UPB_LABEL_PACKED},
  {3, UPB_SIZE(12, 24), 0, 0, 11, 3},
  {4, UPB_SIZE(1, 1), 0, 0, 8, 1},
};

const upb_msglayout envoy_config_route_v3_InternalRedirectPolicy_msginit = {
  &envoy_config_route_v3_InternalRedirectPolicy_submsgs[0],
  &envoy_config_route_v3_InternalRedirectPolicy__fields[0],
  UPB_SIZE(16, 32), 4, false, 255,
};

#if COCOAPODS==1
  #include  "third_party/upb/upb/port_undef.inc"
#else
  #include  "upb/port_undef.inc"
#endif

