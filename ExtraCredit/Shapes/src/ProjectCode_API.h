#pragma once

#ifdef _WIN32

#ifdef PROJECTCODEDLL_EXPORTS
#define PROJECTCODE_API __declspec(dllexport)


#else
#define PROJECTCODE_API __declspec(dllimport)
#endif


#else
#define PROJECTCODE_API 
#endif

//#ifdef _WIN32
//	#if defined(Shapes_Exports_DLL)
//		#define Shapes_API __declspec(dllexport)
//
//	#elif defined(Shapes_Import_DLL) 
//		#define Shapes_API __declspec(dllimport)
//	#else
//		#define Shapes_API
//	#endif
//
//#endif