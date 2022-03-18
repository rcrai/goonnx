#ifndef GOONNX_ORT_API
#define GOONNX_ORT_API
#include <core/session/onnxruntime_c_api.h>

#ifdef __cplusplus
extern "C" {
#endif

const OrtApi* getApi();
const char* parseStatus(OrtApi* api, OrtStatus* status);

#ifdef __cplusplus
}
#endif

#endif
