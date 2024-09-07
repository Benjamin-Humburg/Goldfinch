#pragma once

#ifdef FINCH_PLATFORM_WINDOWS
	#ifdef FINCH_BUILD_DLL
		#define FINCH_API __declspec(dllexport)
	#else
		#define FINCH_API __declspec(dllimport)
	#endif
#else
	#error Finch only supports Windows at the moment.
#endif