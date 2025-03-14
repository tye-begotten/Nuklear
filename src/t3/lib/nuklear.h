#pragma once

#include "t3_common.h"
#include "t3/core/mem.h"


#ifdef NK_IMPLEMENTATION
#undef NK_IMPLEMENTATION
#endif
#define NK_INCLUDE_STANDARD_VARARGS
#define NK_INCLUDE_STANDARD_BOOL
#define NK_INCLUDE_DEFAULT_FONT
#define NK_INCLUDE_COMMAND_USERDATA



// ### Dependencies
// Function    | Description
// ------------|---------------------------------------------------------------
// NK_ASSERT   | If you don't define this, nuklear will use <assert.h> with assert().
// NK_MEMSET   | You can define this to 'memset' or your own memset implementation replacement. If not nuklear will use its own version.
// NK_MEMCPY   | You can define this to 'memcpy' or your own memcpy implementation replacement. If not nuklear will use its own version.
// NK_INV_SQRT | You can define this to your own inverse sqrt implementation replacement. If not nuklear will use its own slow and not highly accurate version.
// NK_SIN      | You can define this to 'sinf' or your own sine implementation replacement. If not nuklear will use its own approximation implementation.
// NK_COS      | You can define this to 'cosf' or your own cosine implementation replacement. If not nuklear will use its own approximation implementation.
// NK_STRTOD   | You can define this to `strtod` or your own string to double conversion implementation replacement. If not defined nuklear will use its own imprecise and possibly unsafe version (does not handle nan or infinity!).
// NK_DTOA     | You can define this to `dtoa` or your own double to string conversion implementation replacement. If not defined nuklear will use its own imprecise and possibly unsafe version (does not handle nan or infinity!).
// NK_VSNPRINTF| If you define `NK_INCLUDE_STANDARD_VARARGS` as well as `NK_INCLUDE_STANDARD_IO` and want to be safe define this to `vsnprintf` on compilers supporting later versions of C or C++. By default nuklear will check for your stdlib version in C as well as compiler version in C++. if `vsnprintf` is available it will define it to `vsnprintf` directly. If not defined and if you have older versions of C or C++ it will be defined to `vsprintf` which is unsafe.


#define NK_MEMSET(_dst, _b, _size) mem->set(_dst, _b, _size)
#define NK_MEMCPY(_dst, _src, _size) mem->cpy(_dst, _src, _size)
#define NK_INV_SQRT(_n) inv_sqrt(_n)
#define NK_SIN(_n) sin(_n)
#define NK_COS(_n) cos(_n)
#define NK_VSNPRINTF(_dst, _size, _fmt, ...) vsnprintf(_dst, _size, _fmt, __VA_ARGS__)
#define NK_STRTOD(_str, _endptr) strtod(_str, _endptr)
#define NK_FLOAT_PRECISION 0.00000000000001


#include "t3/lib/impl/__nuklear.h"
