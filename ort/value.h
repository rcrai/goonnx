#ifndef GOONNX_ORT_VALUE
#define GOONNX_ORT_VALUE

#include <core/session/onnxruntime_c_api.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OrtCreateTensorWithDataAsOrtValueResponse {
  OrtValue *value;
  OrtStatus *status;
} OrtCreateTensorWithDataAsOrtValueResponse;

typedef struct OrtIsTensorResponse {
  int isTensor;
  OrtStatus *status;
} OrtIsTensorResponse;

typedef struct OrtGetTensorMutableFloatDataResponse {
  float *out;
  OrtStatus *status;
} OrtGetTensorMutableFloatDataResponse;

OrtCreateTensorWithDataAsOrtValueResponse createTensorWithDataAsOrtValue(
    OrtApi *api, OrtMemoryInfo *memoryInfo, void *data, size_t dataLen,
    int64_t *shape, size_t shapeLen, ONNXTensorElementDataType type);

OrtIsTensorResponse isTensor(OrtApi *api, OrtValue *value);

OrtGetTensorMutableFloatDataResponse getTensorMutableFloatData(OrtApi *api,
                                                               OrtValue *value);

#ifdef __cplusplus
}
#endif

#endif