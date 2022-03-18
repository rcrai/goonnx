#ifndef GOONNX_ORT_API
#define GOONNX_ORT_API
#include <core/session/onnxruntime_c_api.h>

const OrtApi* getApi();
const char* parseStatus(OrtApi* api, OrtStatus* status);

#endif