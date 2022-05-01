#include <fmt/format.h>

#include "hello.h"

void hello()
{
   fmt::print("Hello World!\n");
   fmt::print("Build info:");

#ifdef NDEBUG
   fmt::print("   release mode!\n");
#else
   fmt::print("   debug mode!\n");
#endif

   fmt::print("Architecture:");

// ARCHITECTURES
#ifdef _M_X64
   fmt::print("   _M_X64 defined\n");
#endif

#ifdef _M_IX86
   fmt::print("   _M_IX86 defined\n");
#endif

#if __i386__
   fmt::print("   __i386__ defined\n");
#endif

#if __x86_64__
   fmt::print("   __x86_64__ defined\n");
#endif

// Libstdc++
#if defined _GLIBCXX_USE_CXX11_ABI
   fmt::print("Using _GLIBCXX_USE_CXX11_ABI: {}\n", bool{_GLIBCXX_USE_CXX11_ABI});
#endif

// Language
#if __cplusplus
   fmt::print("__cplusplus version: {}\n", __cplusplus);
#endif

// COMPILER VERSIONS
   fmt::print("Compiler info:");
#if _MSC_VER
   fmt::print("   _MSC_VER {}\n", _MSC_VER);
#endif

#if _MSVC_LANG
   fmt::print("   _MSVC_LANG {}\n", _MSVC_LANG);
#endif


#if __INTEL_COMPILER
   fmt::print("   __INTEL_COMPILER", __INTEL_COMPILER);
#endif

#if defined(__GNUC__) && defined(__GNUC_MINOR__)
   fmt::print("   __GNUC__/__GNUC_MINOR__: {}.{}\n", __GNUC__, __GNUC_MINOR__);
#endif

#if defined(__clang_major__) && defined(__clang_minor__)
   fmt::print("   __clang_major__/__clang_minor__ {}.{}\n", __clang_major__, __clang_minor__);
#endif

#if __apple_build_version__
   fmt::print("  __apple_build_version__ {}\n", __apple_build_version__);
#endif

// SUBSYSTEMS
   fmt::print("Platform:");
#if __MSYS__
   fmt::print("   __MSYS__ {}\n", __MSYS__);
#endif

#if __MINGW32__
   fmt::print("   __MINGW32__ {}\n", __MINGW32__);
#endif

#if __MINGW64__
   fmt::print("   __MINGW64__ {}\n", __MINGW64__);
#endif

#if __CYGWIN__
   fmt::print("   __CYGWIN__ {}\n", __CYGWIN__);
#endif

#if __linux__
   fmt::print("   __linux__ {}\n", __linux__);
#endif
}
