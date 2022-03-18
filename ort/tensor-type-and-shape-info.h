#ifndef GOONNX_ORT_TENSOR_TYPE_AND_SHAPE_INFO
#define GOONNX_ORT_TENSOR_TYPE_AND_SHAPE_INFO

#include <core/session/onnxruntime_c_api.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OrtGetTensorElementTypeResponse {
  ONNXTensorElementDataType dataType;
  OrtStatus *status;
} OrtGetTensorElementTypeResponse;

typedef struct OrtGetDimensionsCountResponse {
  size_t numDims;
  OrtStatus *status;
} OrtGetDimensionsCountResponse;

typedef struct OrtGetDimensionsResponse {
  int64_t *dims;
  OrtStatus *status;
} OrtGetDimensionsResponse;

typedef struct OrtGetSymbolicDimensionsResponse {
  const char *dimParams;
  OrtStatus *status;
} OrtGetSymbolicDimensionsResponse;

OrtGetTensorElementTypeResponse getTensorElementType(
    OrtApi *api, OrtTensorTypeAndShapeInfo *typeInfo);
OrtGetDimensionsCountResponse getDimensionsCount(
    OrtApi *api, OrtTensorTypeAndShapeInfo *typeInfo);
OrtGetDimensionsResponse getDimensions(OrtApi *api,
                                       OrtTensorTypeAndShapeInfo *typeInfo,
                                       size_t numDims);
OrtGetSymbolicDimensionsResponse getSymbolicDimensions(
    OrtApi *api, OrtTensorTypeAndShapeInfo *typeInfo, size_t numDims);

#ifdef __cplusplus
}
#endif

#endif