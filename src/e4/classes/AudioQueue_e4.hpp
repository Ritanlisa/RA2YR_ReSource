// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct AnimClass;  // fix_fwd_type_supply
struct AudioQueue {
    unsigned char q000;  // 0x0
    char __pad_1[3];  // 0x1
    unsigned int q004;  // 0x4
    unsigned char q008;  // 0x8
    char __pad_9[3];  // 0x9
    unsigned char u32_C;  // 0xC
    char __pad_D[3];  // 0xD
    char __pad_10[4];  // 0x10
    int u32_14;  // 0x14
    unsigned int u32_18;  // 0x18
    char __pad_1C[4];  // 0x1C
    unsigned int u32_20;  // 0x20
    unsigned int u32_24;  // 0x24
    unsigned int u32_28;  // 0x28
    char __pad_2C[1];  // 0x2C
    char u32_2D[3];  // 0x2D
    unsigned int u32_30;  // 0x30
    char u32_34[4];  // 0x34
    unsigned int u32_38;  // 0x38
    unsigned int u32_3C;  // 0x3C
    unsigned int u32_40;  // 0x40
    char __pad_44[1];  // 0x44
    char u32_45[3];  // 0x45
    unsigned int u32_48;  // 0x48
    unsigned int u32_4C;  // 0x4C
    char __pad_50[48];  // 0x50
    unsigned int q080;  // 0x80
    char __pad_84[116];  // 0x84
    unsigned int AudioQueue_F8;  // 0xF8
    char __pad_FC[408];  // 0xFC
    unsigned int u32_294;  // 0x294
    char __pad_298[276];  // 0x298
    unsigned int u32_3AC;  // 0x3AC
    char __pad_3B0[4];  // 0x3B0
    unsigned int u32_3B4;  // 0x3B4
    unsigned char u32_3B8;  // 0x3B8
    char __pad_3B9[3];  // 0x3B9
    unsigned int u32_3BC;  // 0x3BC
    char __pad_3C0[4];  // 0x3C0
    unsigned int u32_3C4;  // 0x3C4
    char __pad_3C8[8];  // 0x3C8
    unsigned int u32_3D0;  // 0x3D0
    char __pad_3D4[257152];  // 0x3D4
    unsigned int u32_3F054;  // 0x3F054
    unsigned int u32_3F058;  // 0x3F058
    unsigned int u32_3F05C;  // 0x3F05C
    unsigned int u32_3F060;  // 0x3F060
    unsigned int u32_3F064;  // 0x3F064
    char __pad_3F068[4];  // 0x3F068
    unsigned int u32_3F06C;  // 0x3F06C
    unsigned int u32_3F070;  // 0x3F070
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
