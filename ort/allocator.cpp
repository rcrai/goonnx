#include "allocator.h"

#include <core/session/onnxruntime_c_api.h>

GetAllocatorResponse getAllocatorWithDefaultOptions(OrtApi *api) {
  OrtAllocator *allocator;
  OrtStatus *status;

  status = api->GetAllocatorWithDefaultOptions(&allocator);

  GetAllocatorResponse response;
  response.allocator = allocator;
  response.status = status;

  return response;
}