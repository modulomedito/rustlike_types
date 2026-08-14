//==============================================================================
/// @file       rltype.h
/// @author     modulomedito (chcchc1995@outlook.com)
/// @brief      Define rust-like data types for C language
/// @copyright  Copyright (C) 2026. MIT License.
/// @details    This is a header for defining types like rust. C99 compatible.
///
/// See https://github.com/modulomedito/rustlike_types
//==============================================================================
//==============================================================================
// GUARD START
//==============================================================================
#ifndef RLTYPE_H
#define RLTYPE_H
#ifdef __cplusplus
extern "C"
{
#endif

//==============================================================================
// INCLUDE
//==============================================================================
#include <inttypes.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

//==============================================================================
// PUBLIC TYPEDEF
//==============================================================================
// Common used
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;
typedef int8_t i8;
typedef int16_t i16;
typedef int32_t i32;
typedef int64_t i64;
typedef float f32;
typedef double f64;
// Not recommended
typedef uintptr_t uptr;
typedef intptr_t iptr;
typedef ptrdiff_t isize;
typedef size_t usize;
typedef char ichar;
typedef unsigned char uchar;

//==============================================================================
// PUBLIC DEFINE
//==============================================================================
#define RLTYPE_MAJOR_VERSION (0U)
#define RLTYPE_MINOR_VERSION (4U)
#define RLTYPE_PATCH_VERSION (0U)

#ifndef RLTYPE_STATIC_ASSERT
#define RLTYPE_STATIC_ASSERT(name, cond)                                       \
    typedef char name##_failed_at_line_##__LINE__[(cond) ? 1 : -1]
#endif

//==============================================================================
// PUBLIC ENUM
//==============================================================================

//==============================================================================
// PUBLIC STRUCT
//==============================================================================

//==============================================================================
// PUBLIC UNION
//==============================================================================

//==============================================================================
// PUBLIC VARIABLE DECLARATION
//==============================================================================

//==============================================================================
// PUBLIC FUNCTION DECLARATION
//==============================================================================

//==============================================================================
// PUBLIC INLINE FUNCTION DEFINITION
//==============================================================================
static inline void rltype_assert(bool cond)
{
#if defined(__linux__) || defined(__APPLE__) || defined(_WIN32) // Host
    assert(cond);
#elif defined(__HIGHTEC__) // HighTec (GCC-based, TriCore/Aurix)
#define util_std_assert(cond)
    if ((cond) == false)
    {
        __builtin_trap();
    }
#elif defined(__TASKING__) // TASKING
    if ((cond) == false)
    {
        __debug();
    }
#elif defined(__TI_COMPILER_VERSION__) // TI C2000
    if ((cond) == false)
    {
        asm(" ESTOP0");
    }
#elif defined(__GNUC__) // Generic GCC (ARM, RISC-V, etc.)
    if ((cond) == false)
    {
        __builtin_trap();
    }
#else // Unknown platform: infinite loop
    if ((cond) == false)
    {
        for (;;)
        {
        }
    }
#endif
}

static inline void rltype_panic(void)
{
#if defined(__linux__) || defined(__APPLE__) || defined(_WIN32) // Host
    assert(0);
#elif defined(__HIGHTEC__) // HighTec (GCC-based, TriCore/Aurix)
    __builtin_trap();
#elif defined(__TASKING__) // TASKING
    __debug();
#elif defined(__TI_COMPILER_VERSION__) // TI C2000
    asm(" ESTOP0");
#elif defined(__GNUC__) // Generic GCC (ARM, RISC-V, etc.)
    __builtin_trap();
#else // Unknown platform: infinite loop
    for (;;)
    {
    }
#endif
}

//==============================================================================
// GUARD END
//==============================================================================
#ifdef __cplusplus
}
#endif
#endif // #ifndef RLTYPE_H
