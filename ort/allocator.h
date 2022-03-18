#ifndef GOONNX_ORT_ALLOCATOR
#define GOONNX_ORT_ALLOCATOR
#include <core/session/onnxruntime_c_api.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct GetAllocatorResponse {
  OrtAllocator *allocator;
  OrtStatus *status;
} GetAllocatorResponse;

GetAllocatorResponse getAllocatorWithDefaultOptions(OrtApi *api);

#ifdef __cplusplus
}
#endif

#endif