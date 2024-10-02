#pragma once

#ifdef GOLDFINCH_PLATFORM_WINDOWS
	#ifdef GOLDFINCH_BUILD_DLL
		#define GOLDFINCH_API __declspec(dllexport)
	#else
		#define GOLDFINCH_API __declspec(dllimport)
	#endif
#else
	#error Goldfinch only supports Windows at the moment.
#endif