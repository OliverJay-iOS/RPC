/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     udpa/core/v1/resource.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#if COCOAPODS==1
  #include  "third_party/upb/upb/def.h"
#else
  #include  "upb/def.h"
#endif
#if COCOAPODS==1
  #include  "src/core/ext/upbdefs-generated/udpa/core/v1/resource.upbdefs.h"
#else
  #include  "udpa/core/v1/resource.upbdefs.h"
#endif

extern upb_def_init google_protobuf_any_proto_upbdefinit;
extern upb_def_init udpa_annotations_status_proto_upbdefinit;
extern upb_def_init udpa_core_v1_resource_name_proto_upbdefinit;
extern const upb_msglayout udpa_core_v1_Resource_msginit;

static const upb_msglayout *layouts[1] = {
  &udpa_core_v1_Resource_msginit,
};

static const char descriptor[337] = {'\n', '\033', 'u', 'd', 'p', 'a', '/', 'c', 'o', 'r', 'e', '/', 'v', '1', '/', 'r', 'e', 's', 'o', 'u', 'r', 'c', 'e', '.', 'p', 
'r', 'o', 't', 'o', '\022', '\014', 'u', 'd', 'p', 'a', '.', 'c', 'o', 'r', 'e', '.', 'v', '1', '\032', '\031', 'g', 'o', 'o', 'g', 'l', 
'e', '/', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', '/', 'a', 'n', 'y', '.', 'p', 'r', 'o', 't', 'o', '\032', '\035', 'u', 'd', 'p', 
'a', '/', 'a', 'n', 'n', 'o', 't', 'a', 't', 'i', 'o', 'n', 's', '/', 's', 't', 'a', 't', 'u', 's', '.', 'p', 'r', 'o', 't', 
'o', '\032', ' ', 'u', 'd', 'p', 'a', '/', 'c', 'o', 'r', 'e', '/', 'v', '1', '/', 'r', 'e', 's', 'o', 'u', 'r', 'c', 'e', '_', 
'n', 'a', 'm', 'e', '.', 'p', 'r', 'o', 't', 'o', '\"', '\206', '\001', '\n', '\010', 'R', 'e', 's', 'o', 'u', 'r', 'c', 'e', '\022', '.', 
'\n', '\004', 'n', 'a', 'm', 'e', '\030', '\001', ' ', '\001', '(', '\013', '2', '\032', '.', 'u', 'd', 'p', 'a', '.', 'c', 'o', 'r', 'e', '.', 
'v', '1', '.', 'R', 'e', 's', 'o', 'u', 'r', 'c', 'e', 'N', 'a', 'm', 'e', 'R', '\004', 'n', 'a', 'm', 'e', '\022', '\030', '\n', '\007', 
'v', 'e', 'r', 's', 'i', 'o', 'n', '\030', '\002', ' ', '\001', '(', '\t', 'R', '\007', 'v', 'e', 'r', 's', 'i', 'o', 'n', '\022', '0', '\n', 
'\010', 'r', 'e', 's', 'o', 'u', 'r', 'c', 'e', '\030', '\003', ' ', '\001', '(', '\013', '2', '\024', '.', 'g', 'o', 'o', 'g', 'l', 'e', '.', 
'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', '.', 'A', 'n', 'y', 'R', '\010', 'r', 'e', 's', 'o', 'u', 'r', 'c', 'e', 'B', '7', '\n', 
'\034', 'c', 'o', 'm', '.', 'g', 'i', 't', 'h', 'u', 'b', '.', 'u', 'd', 'p', 'a', '.', 'u', 'd', 'p', 'a', '.', 'c', 'o', 'r', 
'e', '.', 'v', '1', 'B', '\r', 'R', 'e', 's', 'o', 'u', 'r', 'c', 'e', 'P', 'r', 'o', 't', 'o', 'P', '\001', '\272', '\200', '\310', '\321', 
'\006', '\002', '\010', '\001', 'b', '\006', 'p', 'r', 'o', 't', 'o', '3', 
};

static upb_def_init *deps[4] = {
  &google_protobuf_any_proto_upbdefinit,
  &udpa_annotations_status_proto_upbdefinit,
  &udpa_core_v1_resource_name_proto_upbdefinit,
  NULL
};

upb_def_init udpa_core_v1_resource_proto_upbdefinit = {
  deps,
  layouts,
  "udpa/core/v1/resource.proto",
  UPB_STRVIEW_INIT(descriptor, 337)
};
