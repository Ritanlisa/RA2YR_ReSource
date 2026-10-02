// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Coord;  // fix_fwd_type_supply
struct AbstractClass;  // fix_fwd_type_supply
struct CampaignScore;  // fix_fwd_type_supply
struct ObjectClass;  // fix_fwd_type_supply
struct CComObject_CChatEventSink___ATL {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    unsigned int u32_4;  // 0x4
    void* q008;  // 0x8
    unsigned int Debug;
    unsigned int Dialog;
    unsigned int Timer;
// --- flat members (END) ---
    int DispatchConnectionPairs(void *a1_1);  // 0x7937B0
    Coord * * DispatchStub_32(int a1, int a2, int a3, int a4);  // 0x7A4EC0
    Coord * * GetTypeInfo(int a2, const char *a3, int a1018, int a1, int a4, int a5);
    AbstractClass * * FireEvent(int a1, int a2, unsigned char * a3);  // 0x7A5690
    Coord * * DispatchStub_23(int a1, int a2, int a3, int a4, wchar_t * a5);  // 0x7A7B60
    Coord * * DispatchStub_22(int a1, int a2, int a3, int a4, char * Source);  // 0x7A7EA0
    int DispatchStub_16(int a1, int a2, int a3, const char * a4, char * String1);  // 0x7A8DA0
    AbstractClass * * DispatchStub_40(int a1, int a2, int a3, const char * a4, wchar_t * String);  // 0x7A8ED0
    AbstractClass * * DispatchStub_41(int a1, int a2, const char * a3, wchar_t * String);  // 0x7A9110
    CampaignScore * * DispatchStub_28(int a1, int a2, const char * a3, const char * a4);  // 0x7A9200
    AbstractClass * * DispatchStub_44(int a1, int a2, int a3, wchar_t * String);  // 0x7A9550
    ObjectClass * * DispatchStub_27(int a1, int a2);  // 0x7A9800
    Coord * * DispatchStub_30(int a1, int a2, void * a3, int a4, int a5);  // 0x7AB440
    int DispatchStub_24(int a1, int a2, int a3, int a4, int a5);  // 0x7AB670
    int DispatchStub_33(int a1, int a2, int a3);  // 0x7AB8E0
    AbstractClass * * DispatchStub_35(int a1, int a2, char * a3);  // 0x7ABAF0
    AbstractClass * * DispatchStub_34(int a1, int a2, float a3);  // 0x7ABD40
    AbstractClass * * DispatchStub_36(int a1, int a2, int a3);  // 0x7ABFA0
    ObjectClass * * DispatchStub_37(int a1, int a2, int a3);  // 0x7AC220
    int Release(void *a1_1);  // 0x7AC6B0
    int QueryInterface();  // 0x7AC700
    int Check(TechnoTypeClass * aP1, void *a2_1, void *a3_1);  // 0x7AE5B0
    int DispatchStub_20(int a1, int a2, const char * a3);  // 0x7A5220
    int GetTypeInfoCount(int a1, int a2, int a3);  // 0x7A5240
    int GetIDsOfNames(int a1, int a2, char * Source);  // 0x7A55F0
    int Disconnect(int a1, int a2, int a3, const char * a4);  // 0x7A70E0
    int DispatchStub_18(int a1, int a2, int a3);  // 0x7AA6A0
    int Unadvise(int a1, int a2, const char * a3, const char * a4);  // 0x7AAFB0
    int DispatchStub_42(int a1, int a2, const char * a3, wchar_t * String);  // 0x7AB0A0
    int EnumDependents(int a1, int a2, int a3, const char * a4, const char * a5);  // 0x7AB170
    int DispatchStub_43(int a1, int a2, int a3, const char * a4, wchar_t * String);  // 0x7AB260
    int DispatchStub_29(int a1, int a2, __time32_t Time);  // 0x7AB350
    int DispatchStub_31(int a1, int a2, unsigned char * a3, int a4);  // 0x7AB3C0
    LONG AddRef(void *a1_1);  // 0x7AC690
    int DispatchStub_38(int a1, int a2, int a3);  // 0x7AC4A0
    int DispatchStub_39(int a1, int a2, int a3);  // 0x7AC4B0
    int DispatchStub_45(int a1, int a2, int a3);  // 0x7AC4C0
    int DispatchStub_46(int a1, int a2, int a3);  // 0x7AC4D0
    int DispatchStub_47(int a1, int a2, int a3);  // 0x7AC4E0
    int COMStub_Return0(int a1, int a2, int a3, int a4);  // 0x7AB330
    int StubReturnFalse(int a1, int a2, int a3);  // 0x7AB340
};
} // namespace gamemd
