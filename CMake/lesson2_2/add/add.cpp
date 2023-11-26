#include "export.h"
// __declspec(dllexport) int add(int a, int b)

CMAKE_STUDY_API int add(int a, int b)
{
    return a + b;
}