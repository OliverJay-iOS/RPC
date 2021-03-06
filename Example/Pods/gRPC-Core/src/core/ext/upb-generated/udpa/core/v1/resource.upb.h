/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     udpa/core/v1/resource.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef UDPA_CORE_V1_RESOURCE_PROTO_UPB_H_
#define UDPA_CORE_V1_RESOURCE_PROTO_UPB_H_

#if COCOAPODS==1
  #include  "third_party/upb/upb/msg.h"
#else
  #include  "upb/msg.h"
#endif
#if COCOAPODS==1
  #include  "third_party/upb/upb/decode.h"
#else
  #include  "upb/decode.h"
#endif
#if COCOAPODS==1
  #include  "third_party/upb/upb/decode_fast.h"
#else
  #include  "upb/decode_fast.h"
#endif
#if COCOAPODS==1
  #include  "third_party/upb/upb/encode.h"
#else
  #include  "upb/encode.h"
#endif

#if COCOAPODS==1
  #include  "third_party/upb/upb/port_def.inc"
#else
  #include  "upb/port_def.inc"
#endif

#ifdef __cplusplus
extern "C" {
#endif

struct udpa_core_v1_Resource;
typedef struct udpa_core_v1_Resource udpa_core_v1_Resource;
extern const upb_msglayout udpa_core_v1_Resource_msginit;
struct google_protobuf_Any;
struct udpa_core_v1_ResourceName;
extern const upb_msglayout google_protobuf_Any_msginit;
extern const upb_msglayout udpa_core_v1_ResourceName_msginit;


/* udpa.core.v1.Resource */

UPB_INLINE udpa_core_v1_Resource *udpa_core_v1_Resource_new(upb_arena *arena) {
  return (udpa_core_v1_Resource *)_upb_msg_new(&udpa_core_v1_Resource_msginit, arena);
}
UPB_INLINE udpa_core_v1_Resource *udpa_core_v1_Resource_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  udpa_core_v1_Resource *ret = udpa_core_v1_Resource_new(arena);
  return (ret && upb_decode(buf, size, ret, &udpa_core_v1_Resource_msginit, arena)) ? ret : NULL;
}
UPB_INLINE udpa_core_v1_Resource *udpa_core_v1_Resource_parse_ex(const char *buf, size_t size,
                           upb_arena *arena, int options) {
  udpa_core_v1_Resource *ret = udpa_core_v1_Resource_new(arena);
  return (ret && _upb_decode(buf, size, ret, &udpa_core_v1_Resource_msginit, arena, options))
      ? ret : NULL;
}
UPB_INLINE char *udpa_core_v1_Resource_serialize(const udpa_core_v1_Resource *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &udpa_core_v1_Resource_msginit, arena, len);
}

UPB_INLINE bool udpa_core_v1_Resource_has_name(const udpa_core_v1_Resource *msg) { return _upb_hasbit(msg, 1); }
UPB_INLINE const struct udpa_core_v1_ResourceName* udpa_core_v1_Resource_name(const udpa_core_v1_Resource *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(12, 24), const struct udpa_core_v1_ResourceName*); }
UPB_INLINE upb_strview udpa_core_v1_Resource_version(const udpa_core_v1_Resource *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(4, 8), upb_strview); }
UPB_INLINE bool udpa_core_v1_Resource_has_resource(const udpa_core_v1_Resource *msg) { return _upb_hasbit(msg, 2); }
UPB_INLINE const struct google_protobuf_Any* udpa_core_v1_Resource_resource(const udpa_core_v1_Resource *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(16, 32), const struct google_protobuf_Any*); }

UPB_INLINE void udpa_core_v1_Resource_set_name(udpa_core_v1_Resource *msg, struct udpa_core_v1_ResourceName* value) {
  _upb_sethas(msg, 1);
  *UPB_PTR_AT(msg, UPB_SIZE(12, 24), struct udpa_core_v1_ResourceName*) = value;
}
UPB_INLINE struct udpa_core_v1_ResourceName* udpa_core_v1_Resource_mutable_name(udpa_core_v1_Resource *msg, upb_arena *arena) {
  struct udpa_core_v1_ResourceName* sub = (struct udpa_core_v1_ResourceName*)udpa_core_v1_Resource_name(msg);
  if (sub == NULL) {
    sub = (struct udpa_core_v1_ResourceName*)_upb_msg_new(&udpa_core_v1_ResourceName_msginit, arena);
    if (!sub) return NULL;
    udpa_core_v1_Resource_set_name(msg, sub);
  }
  return sub;
}
UPB_INLINE void udpa_core_v1_Resource_set_version(udpa_core_v1_Resource *msg, upb_strview value) {
  *UPB_PTR_AT(msg, UPB_SIZE(4, 8), upb_strview) = value;
}
UPB_INLINE void udpa_core_v1_Resource_set_resource(udpa_core_v1_Resource *msg, struct google_protobuf_Any* value) {
  _upb_sethas(msg, 2);
  *UPB_PTR_AT(msg, UPB_SIZE(16, 32), struct google_protobuf_Any*) = value;
}
UPB_INLINE struct google_protobuf_Any* udpa_core_v1_Resource_mutable_resource(udpa_core_v1_Resource *msg, upb_arena *arena) {
  struct google_protobuf_Any* sub = (struct google_protobuf_Any*)udpa_core_v1_Resource_resource(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_Any*)_upb_msg_new(&google_protobuf_Any_msginit, arena);
    if (!sub) return NULL;
    udpa_core_v1_Resource_set_resource(msg, sub);
  }
  return sub;
}

#ifdef __cplusplus
}  /* extern "C" */
#endif

#if COCOAPODS==1
  #include  "third_party/upb/upb/port_undef.inc"
#else
  #include  "upb/port_undef.inc"
#endif

#endif  /* UDPA_CORE_V1_RESOURCE_PROTO_UPB_H_ */
