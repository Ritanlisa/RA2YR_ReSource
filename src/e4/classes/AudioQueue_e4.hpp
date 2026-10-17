// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct AnimClass;  // fix_fwd_type_supply
struct AudioQueue {
    AudioQueue* __pad_0;  // 0x0
    unsigned int q004;  // 0x4
    unsigned int q008;  // 0x8
    unsigned int u32_C;  // 0xC
    char __pad_10[4];  // 0x10
    unsigned int AudioQueue_field_0x14;  // 0x14
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    unsigned int * CreateNode();  // 0x402AF0
    int  FindBestChannel(int a1, int a2);  // 0x4035F0
    int FindByData();  // 0x752680
    int Update(void *a1 = 0, void *a2 = 0, void *a3 = 0, void *a4 = 0);  // 0x771620
    int Cleanup(void *a1_1, void *a2 = 0);  // 0x7B1D10
    unsigned char * AllocBuffer(char aP1);  // 0x7B20E0
    int ReadBuffer(void * a2, int a3, void * a4, unsigned int * v9, unsigned short * a6);  // 0x7B22E0
    AnimClass * * WriteBuffer(WinsockInterfaceClass * aP1, unsigned int arg4, const void * a3, unsigned int a5, WinsockInterfaceClass * aP5, char a7, short a8);  // 0x7B23B0
    static int PreallocateChannels(unsigned int * a1, int a2);
    int * IteratorNext();  // 0x4035D0
    int  DeactivateAllMatching(int a1, int a2);  // 0x403770
    int GetNext();  // 0x4073C0
    int GetNextAlt();  // 0x4073E0
    int  IsEmpty(int a1, int a2);  // 0x407B40
    static int  IsNotEmpty(int a1, int a2);  // 0x407B50
    int HaltVoices(Voice *a1);
    static int * IncrementPriority();  // 0x408200
    static int ReleaseBuffers();  // 0x408270
    static int DrainAll();  // 0x750FA0
    int StopAllVoices(void *a1 = 0, void *a2 = 0);
};
} // namespace gamemd
