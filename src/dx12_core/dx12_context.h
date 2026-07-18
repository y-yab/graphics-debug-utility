#pragma once

#include <memory>

namespace yab {

class DX12Context {
public:
  DX12Context();
  ~DX12Context();

private:
  struct Impl;
  std::unique_ptr<Impl> impl_;
};

}
