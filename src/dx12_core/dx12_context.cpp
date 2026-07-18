#include "pch.h"
#include "dx12_context.h"

using namespace yab;

struct DX12Context::Impl {
  Impl() {
  }

  ~Impl() {
  }
};

DX12Context::DX12Context() : impl_(std::make_unique<Impl>()) {
}

DX12Context::~DX12Context() = default;
