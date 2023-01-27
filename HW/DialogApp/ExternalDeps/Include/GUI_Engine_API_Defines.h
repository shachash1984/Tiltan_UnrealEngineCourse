#pragma once
#ifdef GUI_ENGINE_EXPORT
	#define GUI_ENGINE_API __declspec(dllexport)
#else
	#define GUI_ENGINE_API __declspec(dllimport)
#endif
