// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct AirstrikeClass {
    int u32_0;  // 0x0
    void * ptr_4;  // 0x4
    void * ptr_8;  // 0x8
    void * ptr_C;  // 0xC
    unsigned int uniqueId;  // 0x10
    int abstractFlags;  // 0x14
    unsigned int nextArrayIndex;  // 0x18
    int referenceCount;  // 0x1C
    unsigned int NeedsSaveOrLink;  // 0x20
    unsigned short AirstrikeClass_field_24;  // 0x24
    unsigned short ptr_26;  // 0x26
    int AirstrikeClass_field_28;  // 0x28
    unsigned char __pad_02C;  // 0x2C
    char __pad_2D[3];  // 0x2D
    void * EliteAirstrikeTeamTypeIndex;  // 0x30
    unsigned int u32_34;  // 0x34
    char __pad_38[4];  // 0x38
    unsigned char AirstrikeClass_field_3C;  // 0x3C
    unsigned char AirstrikeClass_field_3D;  // 0x3D
    char pad_3E[2];  // 0x3E
    unsigned char __pad_040;  // 0x40
    char __pad_41[3];  // 0x41
    int AirstrikeClass_field_44;  // 0x44
    int AirstrikeClass_field_48;  // 0x48
    TechnoClass * owner;  // 0x4C
    unsigned int AirstrikeClass_field_50;  // 0x50
    int AirstrikeClass_field_54;  // 0x54
    int AirstrikeClass_field_58;  // 0x58
    int AirstrikeClass_field_5C;  // 0x5C
    virtual int QueryInterface();  // X75: slot 0 (0x410260) = QueryInterface
    virtual int COMStub_AddRef();  // X75: slot 1 (0x410300) = COMStub_AddRef
    virtual int COMStub_Release();  // X75: slot 2 (0x410310) = COMStub_Release
    virtual int ddtor(int, int*);  // X75: slot 3 (0x41d7a0) = ddtor
    virtual int IsClean();  // X75: slot 4 (0x410450) = IsClean
    virtual int Write(int*, int);  // X75: slot 5 (0x41d6f0) = Write
    virtual int Seek(int*, int*, int);  // X75: slot 6 (0x41d780) = Seek
    virtual int GetSizeMax();  // X75: slot 7 (0x4103e0) = GetSizeMax
    virtual unsigned int * CopyTo(char);  // X75: slot 8 (0x41dd50) = CopyTo
    virtual int StubReturnFalse();  // X75: slot 9 (0x410470) = StubReturnFalse
    virtual int COMStub_Return0_10();  // X75: slot 10 (0x410480) = COMStub_Return0_10
    virtual int StubReturn71();  // X75: slot 11 (0x41dd40) = StubReturn71
    virtual int StubReturn96();  // X75: slot 12 (0x41dd30) = StubReturn96
    virtual int Stat(int);  // X75: slot 13 (0x41d6e0) = Stat
    virtual int computeDistanceSquared();  // X75: slot 14 (0x410490) = computeDistanceSquared
    virtual int COMStub_Return0_15();  // X75: slot 15 (0x4104a0) = COMStub_Return0_15
    virtual int COMStub_Return0_16();  // X75: slot 16 (0x4104b0) = COMStub_Return0_16
    virtual int computeDistance();  // X75: slot 17 (0x410440) = computeDistance
    virtual int GetInvalidCoord();  // X75: slot 18 (0x4104c0) = GetInvalidCoord
    virtual int GetCoordsEx();  // X75: slot 19 (0x4104f0) = GetCoordsEx
    virtual int COMStub_Return0_20();  // X75: slot 20 (0x410520) = COMStub_Return0_20
    virtual int COMStub_Return0_21();  // X75: slot 21 (0x410530) = COMStub_Return0_21
    virtual int GetCoords();  // X75: slot 22 (0x410540) = GetCoords
    virtual void StubReturnFalse_S23();  // X75: slot 23 (0x41dc50) = StubReturnFalse_S23
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    AbstractClass * * UpdateAll();
    char StartMission(int * a2);
    AirstrikeClass(int a2);
    int ReassignTarget(int a2, void *a2_2);
    int RemoveAircraft(AudioController * aP1);
    int Seek(TechnoTypeClass * aP0, int * a1, int aP2);
    int SpawnAircraft(int * a2, void *a2_2);
    int Stat(AbstractClass * aP1);
    int Write(AirstrikeClass * aP0, int aP1);
    int ddtor(int a1, unsigned int * a2);
    void * CopyTo(char a2, int aP1, int aP0, int a1, int aP2);
};

} // namespace gamemd
