#include "scriptactionqueue.hpp"

// 0x00660B80
int  ScriptActionQueue::PushNext(int *this)
{
    int result; // eax
    dword_B04D88 = (dword_B04D88 + 1) % 8;
    result = dword_B04D88;
    dword_B04D48[dword_B04D88] = *this;
    dword_B04DD8 = result;
    return result;
}

