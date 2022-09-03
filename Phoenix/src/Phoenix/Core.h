#pragma once

#ifdef PH_PLATFORM_WINDOWS
	#ifdef PH_BUILD_DLL
		#define PHEONIX_API __declspec(dllexport)
	#else
		#define PHEONIX_API __declspec(dllimport)
	#endif
#else
	#error Phoenix is only Supporting Windows at this Time
#endif

