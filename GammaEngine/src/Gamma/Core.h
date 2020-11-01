#pragma once

#ifdef GM_PLATFORM_WINDOWS
	#ifdef GM_BUILD_DLL
		#define GAMMA_API __declspec(dllexport)
	#else
		#define GAMMA_API __declspec(dllimport)
	#endif
#else
	#error Gamma only supports Windows!
#endif

