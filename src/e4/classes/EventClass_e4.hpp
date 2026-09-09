// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct EventClass {
    void* vfptr;  // minimal E2 declaration
    void initEvent();  // 0x40B6A0
    char processEvent(int a2, unsigned int * a3);  // 0x40B740
    char validateEvent(int a2, unsigned int * a3);  // 0x40B880
    char dispatchEvent(int a2, unsigned int * a3);  // 0x40B9A0
    char checkCondition(int a2, unsigned int * a3);  // 0x40BAE0
    DynamicVector * executeAction(unsigned int * Block, char a2);  // 0x40BC10
    unsigned int * resetEvent(BuildingClass * aP1, BuildingClass * aP2);  // 0x40BD00
    void finalizeEvent();  // 0x40BE10
    VectorClass * queueEvent(unsigned int * Block, char a2);  // 0x40C110
    unsigned int dequeueEvent(int a2);  // 0x40C260
    char clearEvents(int a2, unsigned int * a3);  // 0x40C410
    void getEventCount();  // 0x40C590
    int serializeEvent();  // 0x48B390
    int SetData(int a2, int a3, int a4, int a5, int a6);  // 0x48BAD0
    char * Add(AbstractClass * aP1, unsigned signed char a3, int a4, char a5);  // 0x4C65E0
    char * AddEvent(int a2, unsigned signed char a3);  // 0x4C66C0
    char * Add2(AnimClass * aP1, unsigned signed char a3, IUnknown * aP3);  // 0x4C6720
    char * Init(IUnknown * aP1, char a3, int a4, int a5, int arg10, unsigned short * a6);  // 0x4C6AE0
    void ProcessEvent();  // 0x4C6CB0
    SHORT GetKeyStateSafe(unsigned signed char nVirtKey);  // 0x53EC70
    int deserializeEvent(int a2, IUnknown * aP2);  // 0x542280
    char Enqueue(unsigned short a2, char a3);  // 0x54F200
    int CheckFlag();  // 0x5F19C0
    int validateEventType();  // 0x664440
    int GetState(int a1);  // 0x5F3440
};
} // namespace gamemd
