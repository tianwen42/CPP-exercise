#pragma once

#ifdef EXPORT
#define CMAKE_STUDY_API _declspec(dllexport)
#else
#define CMAKE_STUDY_API _declspec(dllimport)
#endif