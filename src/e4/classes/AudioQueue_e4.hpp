// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct AudioQueue {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    unsigned int q004;  // 0x4
    unsigned int u32_C;  // 0xC
    unsigned int u32_10;  // 0x10
    unsigned int u32_14;  // 0x14
    unsigned int AudioQueue_field_0x14;
    unsigned int __pad_0;
    void* ptr_24;
    unsigned int q3D0;
    unsigned int q3F054;
    unsigned int q3F058;
    unsigned int q3F060;
    unsigned int q3F064;
    unsigned int u32_180;
    unsigned int u32_1804;
    unsigned int u32_2A0;
    unsigned int u32_30;
    unsigned int u32_3AC;
    unsigned int u32_3B4;
    unsigned int u32_3BC;
    unsigned int u32_3C;
    unsigned int u32_3C4;
    unsigned int u32_48;
    unsigned int u32_A80;
    unsigned int u32_C6;
    unsigned char u8_3B8;
    unsigned int q0042;
    unsigned int q020;
    unsigned int q0204;
    unsigned int q034;
    unsigned int q040;
    unsigned int q080;
    unsigned int q3F05C;
    unsigned int u32_146;
    unsigned int u32_18;
    unsigned int u32_28;
    unsigned int u32_38;
    unsigned int u32_3F06C;
    unsigned int u32_3F070;
    unsigned int u32_4C;
    unsigned int u32_E0;
    unsigned char u8_2D;
    unsigned char u8_45;
// --- flat members (END) ---
    unsigned int * CreateNode();  // 0x402AF0
    int FindBestChannel(int a1,  int a2);    // 0x4035F0
    int * FindByData();  // 0x752680
    void Update();  // 0x771620
    void Cleanup();  // 0x7B1D10
    unsigned char * AllocBuffer(WinsockInterfaceClass * aP1);  // 0x7B20E0
    int ReadBuffer(void * a2,  int a3,  void * a4,  unsigned int * a5,  unsigned short * a6);    // 0x7B22E0
    short WriteBuffer(WinsockInterfaceClass * aP1,  unsigned int arg4,  const void * a3,  unsigned int a5,  WinsockInterfaceClass * aP5,  char a7,  short a8);    // 0x7B23B0
    int PreallocateChannels(unsigned int * a1,  int a2);    // 0x403530
    int * IteratorNext();  // 0x4035D0
    int DeactivateAllMatching(int a1,  int a2);    // 0x403770
    int GetNext();  // 0x4073C0
    int GetNextAlt();  // 0x4073E0
    int IsEmpty(int a1,  int a2);    // 0x407B40
    int IsNotEmpty(int a1,  int a2);    // 0x407B50
    int HaltVoices();  // 0x4081A0
    int * IncrementPriority();  // 0x408200
    int ReleaseBuffers();  // 0x408270
    int DrainAll();  // 0x750FA0
    int StopAllVoices(__thiscall *__fastcall AudioQueue::StopAllVoices(int a1, int a2))( int);  // def-aligned
};
} // namespace gamemd
