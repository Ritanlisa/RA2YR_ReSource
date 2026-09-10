// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct AudioQueue {
    void* vfptr;  // minimal E2 declaration
    unsigned int * CreateNode();  // 0x402AF0
    int PreallocateChannels(unsigned int * a1, int a2);  // 0x403530
    int * IteratorNext();  // 0x4035D0
    int FindBestChannel(int a1, int a2);  // 0x4035F0
    int StopAllVoices(__thiscall *__fastcall AudioQueue::StopAllVoices(int a1, int a2))( int);  // 0x403730
    int DeactivateAllMatching(int a1, int a2);  // 0x403770
    int GetNext();  // 0x4073C0
    int GetNextAlt();  // 0x4073E0
    int IsEmpty(int a1, int a2);  // 0x407B40
    int IsNotEmpty(int a1, int a2);  // 0x407B50
    int HaltVoices();  // 0x4081A0
    int * IncrementPriority();  // 0x408200
    int ReleaseBuffers();  // 0x408270
    int DrainAll();  // 0x750FA0
    int * FindByData();  // 0x752680
    void Update();  // 0x771620
    void Cleanup();  // 0x7B1D10
    unsigned char * AllocBuffer(WinsockInterfaceClass * aP1);  // 0x7B20E0
    int ReadBuffer(void * a2, int a3, void * a4, unsigned int * a5, unsigned short * a6);  // 0x7B22E0
};
} // namespace gamemd
