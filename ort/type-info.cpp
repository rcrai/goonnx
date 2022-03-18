#include "type-info.h"

#include <core/session/onnxruntime_c_api.h>

void releaseTypeInfo(OrtApi *api, OrtTypeInfo *typeInfo) {
  api->ReleaseTypeInfo(typeInfo);
}

OrtCastTypeInfoToTensorInfoResponse castTypeInfoToTensorInfo(
    OrtApi *api, OrtTypeInfo *typeInfo) {
  const OrtTensorTypeAndShapeInfo *tensorInfo;
  OrtStatus *status;

  status = api->CastTypeInfoToTensorInfo(typeInfo, &tensorInfo);

  OrtCastTypeInfoToTensorInfoResponse response;
  response.tensorInfo = tensorInfo;
  response.status = status;

  return response;
}