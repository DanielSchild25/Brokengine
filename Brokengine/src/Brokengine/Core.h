#pragma once

#ifdef BE_PLATFORM_WINDOWS
	#ifdef BE_BUILD_DLL
		#define Brokengine_API __declspec(dllexport)
	#else
		#define Brokengine_API __declspec(dllimport)
	#endif
#else
	#error Brokengine only supports Windows!
#endif