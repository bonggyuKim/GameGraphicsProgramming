
#pragma once

#ifndef  UNICODE
#define UNICODE
#endif // ! UNICODE

#include <windows.h>
#include <wrl.h>

#include <d3d11_4.h>
#include <d3dcompiler.h>
#include <directxcolors.h>

#include <memory>

#include "Resource.h"

constexpr LPCWSTR PSZ_COURSE_TITLE = L"Game Graphics Programming";

using namespace DirectX;
using namespace Microsoft::WRL;