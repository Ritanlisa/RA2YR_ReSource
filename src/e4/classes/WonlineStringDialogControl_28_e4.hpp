// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct WonlineStringDialogControl_28 {
    unsigned int Dialog;
    void* vfptr;  // minimal E2 declaration
    int  QueryInterface(unsigned int * a2, char ** a3);  // 0x7AD690
    int ddtor(int a1);  // 0x7AD440
    int  Read(int lParam, void *a1 = 0, void *a2 = 0);  // 0x7AD460
    int  Write(void * Format, unsigned int Formata, int a4, int a5);  // 0x7AD480
    int  Draw(int a2, void *a1 = 0, void *a3 = 0, void *a4 = 0, void *a5 = 0, void *a6 = 0, void *a7 = 0, void *a8 = 0);  // 0x7AD580
    LONG AddRef(int a1);  // 0x7AD620
    LONG Release(char * Block);  // 0x7AD640
    int StubReturnFalse(int a1);  // 0x7AD610
};
} // namespace gamemd
