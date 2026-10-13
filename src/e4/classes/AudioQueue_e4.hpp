// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct AnimClass;  // fix_fwd_type_supply
struct AudioQueue {
// --- flat members (BEGIN) ---

// --- flat members (END) ---
    void* Socket;  // 0x0 (no offset truth)
    unsigned int * CreateNode();  // 0x402AF0
    int  FindBestChannel(int a1, int a2);  // 0x4035F0
    int FindByData();  // 0x752680
    int Update(void *a1 = 0, void *a2 = 0, void *a3 = 0, void *a4 = 0);  // 0x771620
    int Cleanup(void *a1_1, void *a1 = 0);  // 0x7B1D10
    unsigned char *  AllocBuffer(char a2);  // 0x7B20E0
    int  ReadBuffer(void * a2, int a3, void * a4, unsigned int * a5, unsigned short * a6);  // 0x7B22E0
    AnimClass * *  WriteBuffer(void * a2, unsigned int a3, void * a4, unsigned int a5, char a6, char a7, int16_t a8);  // 0x7B23B0
    static int PreallocateChannels(unsigned int * a1, int a2);
    int * IteratorNext();  // 0x4035D0
    int  DeactivateAllMatching(int a1, int a2);  // 0x403770
    int GetNext();  // 0x4073C0
    int GetNextAlt();  // 0x4073E0
    int  IsEmpty(int a1, int a2);  // 0x407B40
    int  IsNotEmpty(int a1, int a2);  // 0x407B50
    int HaltVoices(Voice *a1);
    static int * IncrementPriority();  // 0x408200
    static int ReleaseBuffers();  // 0x408270
    static int DrainAll();  // 0x750FA0
    int StopAllVoices(void *a1 = 0, void *a2 = 0);
    unsigned int u32_3F054;  // @0x7b2118 (W16G3 raw-usage vocab)
    unsigned int u32_3F058;  // @0x7b21b9 (W16G3 raw-usage vocab)
    unsigned int u32_3F060;  // @0x7b20fd (W16G3 raw-usage vocab)
    unsigned int u32_3F064;  // @0x7b219e (W16G3 raw-usage vocab)

    unsigned char __pad_294;  // X10 supply (member_lookup)
    unsigned int q008;  // X10 supply (member_lookup)
    int u32_14;  // X10 supply (member_lookup)
    unsigned int u32_18;  // X10 supply (member_lookup)
    unsigned int u32_20;  // X10 supply (member_lookup)
    unsigned int u32_24;  // X10 supply (member_lookup)
    unsigned int u32_28;  // X10 supply (member_lookup)
    unsigned int u32_2D;  // X10 supply (member_lookup)
    unsigned int u32_30;  // X10 supply (member_lookup)
    unsigned int u32_34;  // X10 supply (member_lookup)
    unsigned int u32_38;  // X10 supply (member_lookup)
    unsigned int u32_3AC;  // X10 supply (member_lookup)
    unsigned int u32_3B4;  // X10 supply (member_lookup)
    unsigned int u32_3B8;  // X10 supply (member_lookup)
    unsigned int u32_3BC;  // X10 supply (member_lookup)
    unsigned int u32_3C;  // X10 supply (member_lookup)
    unsigned int u32_3C4;  // X10 supply (member_lookup)
    unsigned int u32_3D0;  // X10 supply (member_lookup)
    unsigned int u32_3F05C;  // X10 supply (member_lookup)
    unsigned int u32_3F06C;  // X10 supply (member_lookup)
    unsigned int u32_3F070;  // X10 supply (member_lookup)
    unsigned int u32_40;  // X10 supply (member_lookup)
    unsigned int u32_45;  // X10 supply (member_lookup)
    unsigned int u32_48;  // X10 supply (member_lookup)
    unsigned int u32_4C;  // X10 supply (member_lookup)
    unsigned int u32_C;  // X10 supply (member_lookup)
};
} // namespace gamemd
