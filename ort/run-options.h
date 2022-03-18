#ifndef GOONNX_RUN_OPTIONS
#define GOONNX_RUN_OPTIONS

#include <core/session/onnxruntime_c_api.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OrtCreateRunOptionsParameters {
  const char *tag;
  int logVerbosityLevel;
  int logSeverityLevel;
  int terminate;
} OrtCreateRunOptionsParameters;

typedef struct OrtCreateRunOptionsResponse {
  OrtRunOptions *runOptions;
  OrtStatus *status;
} OrtCreateRunOptionsResponse;

OrtCreateRunOptionsResponse createRunOptions(
    OrtApi *api, OrtCreateRunOptionsParameters *params);
OrtCreateRunOptionsResponse releaseRunOptionsAndRespondErrorStatus(
    OrtApi *api, OrtRunOptions *runOptions, OrtStatus *status);
OrtCreateRunOptionsResponse respondRunOptionsErrorStatus(OrtStatus *status);

#ifdef __cplusplus
}
#endif

#endif