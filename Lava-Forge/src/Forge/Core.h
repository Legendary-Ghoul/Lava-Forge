#pragma once

#ifdef FG_PLATFORM_WINDOWS
	#ifdef FG_BUILD_DLL
		#define FORGE_API __declspec(dllexport)
	#else
		#define FORGE_API __declspec(dllimport)
	#endif
#else
	#error Forge is window only! (for now)
#endif