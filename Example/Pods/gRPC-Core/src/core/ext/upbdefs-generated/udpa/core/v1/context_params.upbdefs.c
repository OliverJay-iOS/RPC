/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     udpa/core/v1/context_params.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#if COCOAPODS==1
  #include  "third_party/upb/upb/def.h"
#else
  #include  "upb/def.h"
#endif
#if COCOAPODS==1
  #include  "src/core/ext/upbdefs-generated/udpa/core/v1/context_params.upbdefs.h"
#else
  #include  "udpa/core/v1/context_params.upbdefs.h"
#endif

extern upb_def_init udpa_annotations_status_proto_upbdefinit;
extern const upb_msglayout udpa_core_v1_ContextParams_msginit;
extern const upb_msglayout udpa_core_v1_ContextParams_ParamsEntry_msginit;

static const upb_msglayout *layouts[2] = {
  &udpa_core_v1_ContextParams_msginit,
  &udpa_core_v1_ContextParams_ParamsEntry_msginit,
};

static const char descriptor[292] = {'\n', '!', 'u', 'd', 'p', 'a', '/', 'c', 'o', 'r', 'e', '/', 'v', '1', '/', 'c', 'o', 'n', 't', 'e', 'x', 't', '_', 'p', 'a', 
'r', 'a', 'm', 's', '.', 'p', 'r', 'o', 't', 'o', '\022', '\014', 'u', 'd', 'p', 'a', '.', 'c', 'o', 'r', 'e', '.', 'v', '1', '\032', 
'\035', 'u', 'd', 'p', 'a', '/', 'a', 'n', 'n', 'o', 't', 'a', 't', 'i', 'o', 'n', 's', '/', 's', 't', 'a', 't', 'u', 's', '.', 
'p', 'r', 'o', 't', 'o', '\"', '\213', '\001', '\n', '\r', 'C', 'o', 'n', 't', 'e', 'x', 't', 'P', 'a', 'r', 'a', 'm', 's', '\022', '?', 
'\n', '\006', 'p', 'a', 'r', 'a', 'm', 's', '\030', '\001', ' ', '\003', '(', '\013', '2', '\'', '.', 'u', 'd', 'p', 'a', '.', 'c', 'o', 'r', 
'e', '.', 'v', '1', '.', 'C', 'o', 'n', 't', 'e', 'x', 't', 'P', 'a', 'r', 'a', 'm', 's', '.', 'P', 'a', 'r', 'a', 'm', 's', 
'E', 'n', 't', 'r', 'y', 'R', '\006', 'p', 'a', 'r', 'a', 'm', 's', '\032', '9', '\n', '\013', 'P', 'a', 'r', 'a', 'm', 's', 'E', 'n', 
't', 'r', 'y', '\022', '\020', '\n', '\003', 'k', 'e', 'y', '\030', '\001', ' ', '\001', '(', '\t', 'R', '\003', 'k', 'e', 'y', '\022', '\024', '\n', '\005', 
'v', 'a', 'l', 'u', 'e', '\030', '\002', ' ', '\001', '(', '\t', 'R', '\005', 'v', 'a', 'l', 'u', 'e', ':', '\002', '8', '\001', 'B', '<', '\n', 
'\034', 'c', 'o', 'm', '.', 'g', 'i', 't', 'h', 'u', 'b', '.', 'u', 'd', 'p', 'a', '.', 'u', 'd', 'p', 'a', '.', 'c', 'o', 'r', 
'e', '.', 'v', '1', 'B', '\022', 'C', 'o', 'n', 't', 'e', 'x', 't', 'P', 'a', 'r', 'a', 'm', 's', 'P', 'r', 'o', 't', 'o', 'P', 
'\001', '\272', '\200', '\310', '\321', '\006', '\002', '\010', '\001', 'b', '\006', 'p', 'r', 'o', 't', 'o', '3', 
};

static upb_def_init *deps[2] = {
  &udpa_annotations_status_proto_upbdefinit,
  NULL
};

upb_def_init udpa_core_v1_context_params_proto_upbdefinit = {
  deps,
  layouts,
  "udpa/core/v1/context_params.proto",
  UPB_STRVIEW_INIT(descriptor, 292)
};
