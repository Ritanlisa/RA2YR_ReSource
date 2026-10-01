// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct CComObject_CChatEventSink___ATL {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    unsigned int u32_4;  // 0x4
    void* q008;  // 0x8
    unsigned int Debug;
    unsigned int Dialog;
    unsigned int Timer;
// --- flat members (END) ---
    int DispatchConnectionPairs(void *a1 = 0);  // 0x7937B0
    int  DispatchStub_32(int a1, int a2, int a3, int a4);  // 0x7A4EC0
    int  GetTypeInfo(int a1, int a2, void * a3);  // 0x7A5290
    int  FireEvent(int a1, int a2, unsigned char * a3);  // 0x7A5690
    Coord * * DispatchStub_23(int a1, int a2, int a3, int a4, wchar_t * a5);  // 0x7A7B60
    int  DispatchStub_22(int a1, int a2, int a3, int a4, char * Source);  // 0x7A7EA0
    int  DispatchStub_16(int a1, int a2, int a3, void * a4, char * String1);  // 0x7A8DA0
    int  DispatchStub_40(int a1, int a2, int a3, void * a4, void * String);  // 0x7A8ED0
    int  DispatchStub_41(int a1, int a2, void * a3, void * String);  // 0x7A9110
    int  DispatchStub_28(int a1, int a2, void * a3, void * a4);  // 0x7A9200
    int  DispatchStub_44(int a1, int a2, int a3, void * String);  // 0x7A9550
    int  DispatchStub_27(int a1, int a2);  // 0x7A9800
    int  DispatchStub_30(int a1, int a2, void * a3, int a4, int a5);  // 0x7AB440
    int  DispatchStub_24(int a1, int a2, int a3, int a4, int a5);  // 0x7AB670
    int  DispatchStub_33(int a1, int a2, int a3);  // 0x7AB8E0
    int  DispatchStub_35(int a1, int a2, char * a3);  // 0x7ABAF0
    int  DispatchStub_34(int a1, int a2, float a3);  // 0x7ABD40
    int  DispatchStub_36(int a1, int a2, int a3);  // 0x7ABFA0
    int  DispatchStub_37(int a1, int a2, int a3);  // 0x7AC220
    LONG Release(void *a1 = 0);  // 0x7AC6B0
    int QueryInterface();  // 0x7AC700
    int  Check(void * aP1, void *a1 = 0, void *a2 = 0);  // 0x7AE5B0
    int  DispatchStub_20(int a1, int a2, void * a3);  // 0x7A5220
    int  GetTypeInfoCount(int a1, int a2, int a3);  // 0x7A5240
    int  GetIDsOfNames(int a1, int a2, char * Source);  // 0x7A55F0
    int  Disconnect(int a1, int a2, int a3, void * a4);  // 0x7A70E0
    int  DispatchStub_18(int a1, int a2, int a3);  // 0x7AA6A0
    int  Unadvise(int a1, int a2, void * a3, void * a4);  // 0x7AAFB0
    int  DispatchStub_42(int a1, int a2, void * a3, void * String);  // 0x7AB0A0
    int  EnumDependents(int a1, int a2, int a3, void * a4, void * a5);  // 0x7AB170
    int  DispatchStub_43(int a1, int a2, int a3, void * a4, void * String);  // 0x7AB260
    int  DispatchStub_29(int a1, int a2, int Time);  // 0x7AB350
    int  DispatchStub_31(int a1, int a2, unsigned char * a3, int a4);  // 0x7AB3C0
    LONG AddRef(void *a1 = 0);  // 0x7AC690
    int  DispatchStub_38(int a1, int a2, int a3);  // 0x7AC4A0
    int  DispatchStub_39(int a1, int a2, int a3);  // 0x7AC4B0
    int  DispatchStub_45(int a1, int a2, int a3);  // 0x7AC4C0
    int  DispatchStub_46(int a1, int a2, int a3);  // 0x7AC4D0
    int  DispatchStub_47(int a1, int a2, int a3);  // 0x7AC4E0
    int  COMStub_Return0(int a1, int a2, int a3, int a4);  // 0x7AB330
    int  StubReturnFalse(int a1, int a2, int a3);  // 0x7AB340
};
} // namespace gamemd
