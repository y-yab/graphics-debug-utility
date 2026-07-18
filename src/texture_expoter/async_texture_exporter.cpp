#include "pch.h"
#include "async_texture_exporter.h"

using namespace yab;

struct AsyncTextureExporter::Impl {
  Impl() {
  }

  ~Impl() {
  }
};

AsyncTextureExporter::AsyncTextureExporter() : impl_(std::make_unique<Impl>()) {
}

AsyncTextureExporter::~AsyncTextureExporter() = default;

void AsyncTextureExporter::EnqueueExportTask() {
}
