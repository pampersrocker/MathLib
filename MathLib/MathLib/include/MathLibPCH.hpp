#pragma once

/**
Precompiled header for the MathLib

*/
#define MATHLIB_DLL_IIMPORT	__declspec( dllimport )
#define MATHLIB_DLL_EXPORT	__declspec( dllexport )

#ifdef BUILD_MATHLIB_API
#define MATHLIB_API MATHLIB_DLL_EXPORT
#else
#define MATHLIB_API MATHLIB_DLL_IIMPORT
#endif // BUILD_MATHLIB_API