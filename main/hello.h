#ifndef HELLO_H_INCLUDED
#define HELLO_H_INCLUDED

#ifdef _WIN32
  #define hello_EXPORT __declspec(dllexport)
#else
  #define hello_EXPORT
#endif

hello_EXPORT void hello();

#endif // HELLO_H_INCLUDED
