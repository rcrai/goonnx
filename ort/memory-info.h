#ifndef GOONNX_ORT_MEMORY_INFO
#define GOONNX_ORT_MEMORY_INFO

#include <core/session/onnxruntime_c_api.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OrtCreateCpuMemoryInfoResponse {
  OrtMemoryInfo *memoryInfo;
  OrtStatus *status;
} OrtCreateCpuMemoryInfoResponse;

OrtCreateCpuMemoryInfoResponse createCpuMemoryInfo(
    OrtApi *api, OrtAllocatorType allocatorType, OrtMemType memType);
void releaseMemoryInfo(OrtApi *api, OrtMemoryInfo *memoryInfo);

#ifdef __cplusplus
}
#endif

#endif