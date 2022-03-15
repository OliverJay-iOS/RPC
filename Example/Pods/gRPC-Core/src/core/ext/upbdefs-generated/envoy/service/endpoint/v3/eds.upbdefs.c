/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/service/endpoint/v3/eds.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#if COCOAPODS==1
  #include  "third_party/upb/upb/def.h"
#else
  #include  "upb/def.h"
#endif
#if COCOAPODS==1
  #include  "src/core/ext/upbdefs-generated/envoy/service/endpoint/v3/eds.upbdefs.h"
#else
  #include  "envoy/service/endpoint/v3/eds.upbdefs.h"
#endif

extern upb_def_init envoy_service_discovery_v3_discovery_proto_upbdefinit;
extern upb_def_init google_api_annotations_proto_upbdefinit;
extern upb_def_init google_protobuf_duration_proto_upbdefinit;
extern upb_def_init google_protobuf_wrappers_proto_upbdefinit;
extern upb_def_init envoy_annotations_resource_proto_upbdefinit;
extern upb_def_init udpa_annotations_status_proto_upbdefinit;
extern upb_def_init udpa_annotations_versioning_proto_upbdefinit;
extern upb_def_init validate_validate_proto_upbdefinit;
extern const upb_msglayout envoy_service_endpoint_v3_EdsDummy_msginit;

static const upb_msglayout *layouts[1] = {
  &envoy_service_endpoint_v3_EdsDummy_msginit,
};

static const char descriptor[927] = {'\n', '#', 'e', 'n', 'v', 'o', 'y', '/', 's', 'e', 'r', 'v', 'i', 'c', 'e', '/', 'e', 'n', 'd', 'p', 'o', 'i', 'n', 't', '/', 
'v', '3', '/', 'e', 'd', 's', '.', 'p', 'r', 'o', 't', 'o', '\022', '\031', 'e', 'n', 'v', 'o', 'y', '.', 's', 'e', 'r', 'v', 'i', 
'c', 'e', '.', 'e', 'n', 'd', 'p', 'o', 'i', 'n', 't', '.', 'v', '3', '\032', '*', 'e', 'n', 'v', 'o', 'y', '/', 's', 'e', 'r', 
'v', 'i', 'c', 'e', '/', 'd', 'i', 's', 'c', 'o', 'v', 'e', 'r', 'y', '/', 'v', '3', '/', 'd', 'i', 's', 'c', 'o', 'v', 'e', 
'r', 'y', '.', 'p', 'r', 'o', 't', 'o', '\032', '\034', 'g', 'o', 'o', 'g', 'l', 'e', '/', 'a', 'p', 'i', '/', 'a', 'n', 'n', 'o', 
't', 'a', 't', 'i', 'o', 'n', 's', '.', 'p', 'r', 'o', 't', 'o', '\032', '\036', 'g', 'o', 'o', 'g', 'l', 'e', '/', 'p', 'r', 'o', 
't', 'o', 'b', 'u', 'f', '/', 'd', 'u', 'r', 'a', 't', 'i', 'o', 'n', '.', 'p', 'r', 'o', 't', 'o', '\032', '\036', 'g', 'o', 'o', 
'g', 'l', 'e', '/', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', '/', 'w', 'r', 'a', 'p', 'p', 'e', 'r', 's', '.', 'p', 'r', 'o', 
't', 'o', '\032', ' ', 'e', 'n', 'v', 'o', 'y', '/', 'a', 'n', 'n', 'o', 't', 'a', 't', 'i', 'o', 'n', 's', '/', 'r', 'e', 's', 
'o', 'u', 'r', 'c', 'e', '.', 'p', 'r', 'o', 't', 'o', '\032', '\035', 'u', 'd', 'p', 'a', '/', 'a', 'n', 'n', 'o', 't', 'a', 't', 
'i', 'o', 'n', 's', '/', 's', 't', 'a', 't', 'u', 's', '.', 'p', 'r', 'o', 't', 'o', '\032', '!', 'u', 'd', 'p', 'a', '/', 'a', 
'n', 'n', 'o', 't', 'a', 't', 'i', 'o', 'n', 's', '/', 'v', 'e', 'r', 's', 'i', 'o', 'n', 'i', 'n', 'g', '.', 'p', 'r', 'o', 
't', 'o', '\032', '\027', 'v', 'a', 'l', 'i', 'd', 'a', 't', 'e', '/', 'v', 'a', 'l', 'i', 'd', 'a', 't', 'e', '.', 'p', 'r', 'o', 
't', 'o', '\"', '(', '\n', '\010', 'E', 'd', 's', 'D', 'u', 'm', 'm', 'y', ':', '\034', '\232', '\305', '\210', '\036', '\027', '\n', '\025', 'e', 'n', 
'v', 'o', 'y', '.', 'a', 'p', 'i', '.', 'v', '2', '.', 'E', 'd', 's', 'D', 'u', 'm', 'm', 'y', '2', '\341', '\003', '\n', '\030', 'E', 
'n', 'd', 'p', 'o', 'i', 'n', 't', 'D', 'i', 's', 'c', 'o', 'v', 'e', 'r', 'y', 'S', 'e', 'r', 'v', 'i', 'c', 'e', '\022', 't', 
'\n', '\017', 'S', 't', 'r', 'e', 'a', 'm', 'E', 'n', 'd', 'p', 'o', 'i', 'n', 't', 's', '\022', ',', '.', 'e', 'n', 'v', 'o', 'y', 
'.', 's', 'e', 'r', 'v', 'i', 'c', 'e', '.', 'd', 'i', 's', 'c', 'o', 'v', 'e', 'r', 'y', '.', 'v', '3', '.', 'D', 'i', 's', 
'c', 'o', 'v', 'e', 'r', 'y', 'R', 'e', 'q', 'u', 'e', 's', 't', '\032', '-', '.', 'e', 'n', 'v', 'o', 'y', '.', 's', 'e', 'r', 
'v', 'i', 'c', 'e', '.', 'd', 'i', 's', 'c', 'o', 'v', 'e', 'r', 'y', '.', 'v', '3', '.', 'D', 'i', 's', 'c', 'o', 'v', 'e', 
'r', 'y', 'R', 'e', 's', 'p', 'o', 'n', 's', 'e', '\"', '\000', '(', '\001', '0', '\001', '\022', '}', '\n', '\016', 'D', 'e', 'l', 't', 'a', 
'E', 'n', 'd', 'p', 'o', 'i', 'n', 't', 's', '\022', '1', '.', 'e', 'n', 'v', 'o', 'y', '.', 's', 'e', 'r', 'v', 'i', 'c', 'e', 
'.', 'd', 'i', 's', 'c', 'o', 'v', 'e', 'r', 'y', '.', 'v', '3', '.', 'D', 'e', 'l', 't', 'a', 'D', 'i', 's', 'c', 'o', 'v', 
'e', 'r', 'y', 'R', 'e', 'q', 'u', 'e', 's', 't', '\032', '2', '.', 'e', 'n', 'v', 'o', 'y', '.', 's', 'e', 'r', 'v', 'i', 'c', 
'e', '.', 'd', 'i', 's', 'c', 'o', 'v', 'e', 'r', 'y', '.', 'v', '3', '.', 'D', 'e', 'l', 't', 'a', 'D', 'i', 's', 'c', 'o', 
'v', 'e', 'r', 'y', 'R', 'e', 's', 'p', 'o', 'n', 's', 'e', '\"', '\000', '(', '\001', '0', '\001', '\022', '\227', '\001', '\n', '\016', 'F', 'e', 
't', 'c', 'h', 'E', 'n', 'd', 'p', 'o', 'i', 'n', 't', 's', '\022', ',', '.', 'e', 'n', 'v', 'o', 'y', '.', 's', 'e', 'r', 'v', 
'i', 'c', 'e', '.', 'd', 'i', 's', 'c', 'o', 'v', 'e', 'r', 'y', '.', 'v', '3', '.', 'D', 'i', 's', 'c', 'o', 'v', 'e', 'r', 
'y', 'R', 'e', 'q', 'u', 'e', 's', 't', '\032', '-', '.', 'e', 'n', 'v', 'o', 'y', '.', 's', 'e', 'r', 'v', 'i', 'c', 'e', '.', 
'd', 'i', 's', 'c', 'o', 'v', 'e', 'r', 'y', '.', 'v', '3', '.', 'D', 'i', 's', 'c', 'o', 'v', 'e', 'r', 'y', 'R', 'e', 's', 
'p', 'o', 'n', 's', 'e', '\"', '(', '\202', '\323', '\344', '\223', '\002', '\031', '\"', '\027', '/', 'v', '3', '/', 'd', 'i', 's', 'c', 'o', 'v', 
'e', 'r', 'y', ':', 'e', 'n', 'd', 'p', 'o', 'i', 'n', 't', 's', '\202', '\323', '\344', '\223', '\002', '\003', ':', '\001', '*', '\032', '6', '\212', 
'\244', '\226', '\363', '\007', '0', '\n', '.', 'e', 'n', 'v', 'o', 'y', '.', 'c', 'o', 'n', 'f', 'i', 'g', '.', 'e', 'n', 'd', 'p', 'o', 
'i', 'n', 't', '.', 'v', '3', '.', 'C', 'l', 'u', 's', 't', 'e', 'r', 'L', 'o', 'a', 'd', 'A', 's', 's', 'i', 'g', 'n', 'm', 
'e', 'n', 't', 'B', '@', '\n', '\'', 'i', 'o', '.', 'e', 'n', 'v', 'o', 'y', 'p', 'r', 'o', 'x', 'y', '.', 'e', 'n', 'v', 'o', 
'y', '.', 's', 'e', 'r', 'v', 'i', 'c', 'e', '.', 'e', 'n', 'd', 'p', 'o', 'i', 'n', 't', '.', 'v', '3', 'B', '\010', 'E', 'd', 
's', 'P', 'r', 'o', 't', 'o', 'P', '\001', '\210', '\001', '\001', '\272', '\200', '\310', '\321', '\006', '\002', '\020', '\002', 'b', '\006', 'p', 'r', 'o', 't', 
'o', '3', 
};

static upb_def_init *deps[9] = {
  &envoy_service_discovery_v3_discovery_proto_upbdefinit,
  &google_api_annotations_proto_upbdefinit,
  &google_protobuf_duration_proto_upbdefinit,
  &google_protobuf_wrappers_proto_upbdefinit,
  &envoy_annotations_resource_proto_upbdefinit,
  &udpa_annotations_status_proto_upbdefinit,
  &udpa_annotations_versioning_proto_upbdefinit,
  &validate_validate_proto_upbdefinit,
  NULL
};

upb_def_init envoy_service_endpoint_v3_eds_proto_upbdefinit = {
  deps,
  layouts,
  "envoy/service/endpoint/v3/eds.proto",
  UPB_STRVIEW_INIT(descriptor, 927)
};
