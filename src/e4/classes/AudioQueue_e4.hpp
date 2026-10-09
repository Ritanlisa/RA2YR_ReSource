// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct AnimClass;  // fix_fwd_type_supply
struct AudioQueue {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    unsigned int q004;  // 0x4
    unsigned int q008;  // 0x8
    unsigned int u32_C;  // 0xC
    unsigned int u32_10;  // 0x10
    unsigned int u32_14;  // 0x14
// --- flat members (END) ---
    void* Socket;  // 0x0 (no offset truth)
    unsigned int * CreateNode();  // 0x402AF0
    int FindBestChannel(int a1, int a2);  // 0x4035F0
    int FindByData();  // 0x752680
    int Update();  // 0x771620
    int Cleanup(void *a1_1);  // 0x7B1D10
    unsigned char * AllocBuffer(char aP1);  // 0x7B20E0
    int ReadBuffer(void * a2, int a3, void * a4, unsigned int * a5, unsigned short * a6);  // 0x7B22E0
    AnimClass * * WriteBuffer(WinsockInterfaceClass * aP1, unsigned int arg4, const void * a3, unsigned int a5, WinsockInterfaceClass * aP5, char a7, short a8);  // 0x7B23B0
    static int PreallocateChannels(unsigned int * a1, int a2);  // 0x403530 [w16g2] static (def body this=0)
    int * IteratorNext();  // 0x4035D0
    int DeactivateAllMatching(int a1, int a2);  // 0x403770
    int GetNext();  // 0x4073C0
    int GetNextAlt();  // 0x4073E0
    int IsEmpty(int a1, int a2);  // 0x407B40
    int IsNotEmpty(int a1, int a2);  // 0x407B50
    int HaltVoices(Voice *a1);
    static int * IncrementPriority();  // 0x408200
    static int ReleaseBuffers();  // 0x408270
    static int DrainAll();  // 0x750FA0
    int StopAllVoices();
    unsigned int u32_3F054;  // @0x7b2118 (W16G3 raw-usage vocab)
    unsigned int u32_3F058;  // @0x7b21b9 (W16G3 raw-usage vocab)
    unsigned int u32_3F060;  // @0x7b20fd (W16G3 raw-usage vocab)
    unsigned int u32_3F064;  // @0x7b219e (W16G3 raw-usage vocab)
};
} // namespace gamemd
