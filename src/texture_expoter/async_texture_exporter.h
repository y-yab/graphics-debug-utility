#pragma once

#include <memory>

namespace yab {

class AsyncTextureExporter {
public:
  AsyncTextureExporter();
  ~AsyncTextureExporter();

  void EnqueueExportTask();

private:
  struct Impl;
  std::unique_ptr<Impl> impl_;
};

}
