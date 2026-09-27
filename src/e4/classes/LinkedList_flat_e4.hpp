// GENERATED template-collision flat carrier (mechanical).
#pragma once

namespace gamemd {

struct LinkedList_flat {
    unsigned int m_Prev;
    unsigned int u32_28;
    unsigned int u32_18;
    unsigned int u32_34;
    unsigned int vt_slot_28;
    unsigned int u32_4;
    unsigned int u32_8;
    unsigned int Tail2;
    unsigned int q00C6;
    unsigned int vt_slot_24;
    unsigned int vt_slot_36;
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned int Tail;  // 0x4
    LinkClass * ptr_8;  // 0x8
    unsigned char q00C;  // 0xC
    void* ptr_14;  // 0x14
    unsigned char q018;  // 0x18
    unsigned int u32_1C;  // 0x1C
    void* q020;  // 0x20
    void* q028;  // 0x28
    unsigned char q02C;  // 0x2C
    void* q034;  // 0x34
    unsigned char q038;  // 0x38
    unsigned char q03C;  // 0x3C
    void* q040;  // 0x40
    unsigned char q044;  // 0x44
    unsigned char __pad_048;  // 0x48
    unsigned char q04C;  // 0x4C
    unsigned char q050;  // 0x50
    unsigned char __pad_054;  // 0x54
    unsigned char q060;  // 0x60
    void* q064;  // 0x64
    unsigned char q068;  // 0x68
    unsigned char __pad_06C;  // 0x6C
    unsigned char q070;  // 0x70
    unsigned char q074;  // 0x74
    unsigned char __pad_078;  // 0x78
    unsigned char q07C;  // 0x7C
    unsigned char q080;  // 0x80
    unsigned char __pad_084;  // 0x84
    unsigned char q094;  // 0x94
    unsigned char __pad_098;  // 0x98
    void* q100;  // 0x100
    unsigned char q104;  // 0x104
    unsigned char __pad_108;  // 0x108
    unsigned char q10C;  // 0x10C
    unsigned char __pad_110;  // 0x110
    unsigned char q118;  // 0x118
    unsigned char __pad_11C;  // 0x11C
    unsigned char q124;  // 0x124
    unsigned char __pad_128;  // 0x128
    void* q130;  // 0x130
AbstractClass * * LoadScenarioMixFiles(INIClass * aP0, int aP2, int a3, int a4, void * a1, void * a2);
LinkClass * * Append(int a2);
LinkClass * * InsertAfter(int a2);
int * Next();
int Contains(IUnknown * aP1);
int Init();
int Pop();
int Prepend(int a2);aP1);
int RemoveNode();
unsigned int * Attach(int a2);
unsigned int * FindNext();
unsigned int * FindPrev();
void * MoveNode(void * a2);
void RelinkNode(int a2);
void Remove(unsigned int * a2);
};

} // namespace gamemd
