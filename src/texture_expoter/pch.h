#pragma once

#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <Windows.h>

#include <directx/d3d12.h>
#include <directx/d3dx12.h>

#include <dxgi1_6.h>
#include <dxgi.h>

#include <winrt/Windows.Foundation.Collections.h>
#include <winrt/Windows.Devices.Display.Core.h>
#include <winrt/Windows.Graphics.DirectX.h>

namespace winrt {
  using namespace winrt::Windows::Foundation;
  using namespace winrt::Windows::Devices::Display;
  using namespace winrt::Windows::Devices::Display::Core;
  using namespace winrt::Windows::Graphics;
  using namespace winrt::Windows::Graphics::DirectX;
  using namespace winrt::Windows::Foundation::Collections;
}
