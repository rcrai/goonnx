#ifndef GOONNX_ORT_ALLOCATOR
#define GOONNX_ORT_ALLOCATOR
#include <core/session/onnxruntime_c_api.h>

typedef struct GetAllocatorResponse {
	OrtAllocator *allocator;
	OrtStatus *status;
} GetAllocatorResponse;

GetAllocatorResponse getAllocatorWithDefaultOptions(OrtApi *api);

#endif