/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/config/listener/v3/listener_components.proto
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
  #include  "src/core/ext/upb-generated/envoy/config/listener/v3/listener_components.upb.h"
#else
  #include  "envoy/config/listener/v3/listener_components.upb.h"
#endif
#if COCOAPODS==1
  #include  "src/core/ext/upb-generated/envoy/config/core/v3/address.upb.h"
#else
  #include  "envoy/config/core/v3/address.upb.h"
#endif
#if COCOAPODS==1
  #include  "src/core/ext/upb-generated/envoy/config/core/v3/base.upb.h"
#else
  #include  "envoy/config/core/v3/base.upb.h"
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

static const upb_msglayout *const envoy_config_listener_v3_Filter_submsgs[1] = {
  &google_protobuf_Any_msginit,
};

static const upb_msglayout_field envoy_config_listener_v3_Filter__fields[2] = {
  {1, UPB_SIZE(0, 0), 0, 0, 9, 1},
  {4, UPB_SIZE(8, 16), UPB_SIZE(-13, -25), 0, 11, 1},
};

const upb_msglayout envoy_config_listener_v3_Filter_msginit = {
  &envoy_config_listener_v3_Filter_submsgs[0],
  &envoy_config_listener_v3_Filter__fields[0],
  UPB_SIZE(16, 32), 2, false, 255,
};

static const upb_msglayout *const envoy_config_listener_v3_FilterChainMatch_submsgs[2] = {
  &envoy_config_core_v3_CidrRange_msginit,
  &google_protobuf_UInt32Value_msginit,
};

static const upb_msglayout_field envoy_config_listener_v3_FilterChainMatch__fields[10] = {
  {3, UPB_SIZE(32, 56), 0, 0, 11, 3},
  {4, UPB_SIZE(8, 8), 0, 0, 9, 1},
  {5, UPB_SIZE(24, 40), 1, 1, 11, 1},
  {6, UPB_SIZE(36, 64), 0, 0, 11, 3},
  {7, UPB_SIZE(40, 72), 0, 0, 13, _UPB_LABEL_PACKED},
  {8, UPB_SIZE(28, 48), 2, 1, 11, 1},
  {9, UPB_SIZE(16, 24), 0, 0, 9, 1},
  {10, UPB_SIZE(44, 80), 0, 0, 9, 3},
  {11, UPB_SIZE(48, 88), 0, 0, 9, 3},
  {12, UPB_SIZE(4, 4), 0, 0, 14, 1},
};

const upb_msglayout envoy_config_listener_v3_FilterChainMatch_msginit = {
  &envoy_config_listener_v3_FilterChainMatch_submsgs[0],
  &envoy_config_listener_v3_FilterChainMatch__fields[0],
  UPB_SIZE(56, 96), 10, false, 255,
};

static const upb_msglayout *const envoy_config_listener_v3_FilterChain_submsgs[6] = {
  &envoy_config_core_v3_Metadata_msginit,
  &envoy_config_core_v3_TransportSocket_msginit,
  &envoy_config_listener_v3_Filter_msginit,
  &envoy_config_listener_v3_FilterChain_OnDemandConfiguration_msginit,
  &envoy_config_listener_v3_FilterChainMatch_msginit,
  &google_protobuf_BoolValue_msginit,
};

static const upb_msglayout_field envoy_config_listener_v3_FilterChain__fields[7] = {
  {1, UPB_SIZE(12, 24), 1, 4, 11, 1},
  {3, UPB_SIZE(32, 64), 0, 2, 11, 3},
  {4, UPB_SIZE(16, 32), 2, 5, 11, 1},
  {5, UPB_SIZE(20, 40), 3, 0, 11, 1},
  {6, UPB_SIZE(24, 48), 4, 1, 11, 1},
  {7, UPB_SIZE(4, 8), 0, 0, 9, 1},
  {8, UPB_SIZE(28, 56), 5, 3, 11, 1},
};

const upb_msglayout envoy_config_listener_v3_FilterChain_msginit = {
  &envoy_config_listener_v3_FilterChain_submsgs[0],
  &envoy_config_listener_v3_FilterChain__fields[0],
  UPB_SIZE(40, 80), 7, false, 255,
};

static const upb_msglayout *const envoy_config_listener_v3_FilterChain_OnDemandConfiguration_submsgs[1] = {
  &google_protobuf_Duration_msginit,
};

static const upb_msglayout_field envoy_config_listener_v3_FilterChain_OnDemandConfiguration__fields[1] = {
  {1, UPB_SIZE(4, 8), 1, 0, 11, 1},
};

const upb_msglayout envoy_config_listener_v3_FilterChain_OnDemandConfiguration_msginit = {
  &envoy_config_listener_v3_FilterChain_OnDemandConfiguration_submsgs[0],
  &envoy_config_listener_v3_FilterChain_OnDemandConfiguration__fields[0],
  UPB_SIZE(8, 16), 1, false, 255,
};

static const upb_msglayout *const envoy_config_listener_v3_ListenerFilterChainMatchPredicate_submsgs[3] = {
  &envoy_config_listener_v3_ListenerFilterChainMatchPredicate_msginit,
  &envoy_config_listener_v3_ListenerFilterChainMatchPredicate_MatchSet_msginit,
  &envoy_type_v3_Int32Range_msginit,
};

static const upb_msglayout_field envoy_config_listener_v3_ListenerFilterChainMatchPredicate__fields[5] = {
  {1, UPB_SIZE(0, 0), UPB_SIZE(-5, -9), 1, 11, 1},
  {2, UPB_SIZE(0, 0), UPB_SIZE(-5, -9), 1, 11, 1},
  {3, UPB_SIZE(0, 0), UPB_SIZE(-5, -9), 0, 11, 1},
  {4, UPB_SIZE(0, 0), UPB_SIZE(-5, -9), 0, 8, 1},
  {5, UPB_SIZE(0, 0), UPB_SIZE(-5, -9), 2, 11, 1},
};

const upb_msglayout envoy_config_listener_v3_ListenerFilterChainMatchPredicate_msginit = {
  &envoy_config_listener_v3_ListenerFilterChainMatchPredicate_submsgs[0],
  &envoy_config_listener_v3_ListenerFilterChainMatchPredicate__fields[0],
  UPB_SIZE(8, 16), 5, false, 255,
};

static const upb_msglayout *const envoy_config_listener_v3_ListenerFilterChainMatchPredicate_MatchSet_submsgs[1] = {
  &envoy_config_listener_v3_ListenerFilterChainMatchPredicate_msginit,
};

static const upb_msglayout_field envoy_config_listener_v3_ListenerFilterChainMatchPredicate_MatchSet__fields[1] = {
  {1, UPB_SIZE(0, 0), 0, 0, 11, 3},
};

const upb_msglayout envoy_config_listener_v3_ListenerFilterChainMatchPredicate_MatchSet_msginit = {
  &envoy_config_listener_v3_ListenerFilterChainMatchPredicate_MatchSet_submsgs[0],
  &envoy_config_listener_v3_ListenerFilterChainMatchPredicate_MatchSet__fields[0],
  UPB_SIZE(8, 8), 1, false, 255,
};

static const upb_msglayout *const envoy_config_listener_v3_ListenerFilter_submsgs[2] = {
  &envoy_config_listener_v3_ListenerFilterChainMatchPredicate_msginit,
  &google_protobuf_Any_msginit,
};

static const upb_msglayout_field envoy_config_listener_v3_ListenerFilter__fields[3] = {
  {1, UPB_SIZE(4, 8), 0, 0, 9, 1},
  {3, UPB_SIZE(16, 32), UPB_SIZE(-21, -41), 1, 11, 1},
  {4, UPB_SIZE(12, 24), 1, 0, 11, 1},
};

const upb_msglayout envoy_config_listener_v3_ListenerFilter_msginit = {
  &envoy_config_listener_v3_ListenerFilter_submsgs[0],
  &envoy_config_listener_v3_ListenerFilter__fields[0],
  UPB_SIZE(24, 48), 3, false, 255,
};

#if COCOAPODS==1
  #include  "third_party/upb/upb/port_undef.inc"
#else
  #include  "upb/port_undef.inc"
#endif

