// GENERATED template-collision flat carrier (mechanical).
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
class GetItemIndex_1;  // G42.36 fwd supply
class Destroy_1;  // G42.36 fwd supply
class GetItemIndex_0;  // G42.36 fwd supply
class Destroy_0;  // G42.36 fwd supply
class FindItemIndex_0;  // G42.36 fwd supply
class Constructor_VectorClass_tagCONNECTDATA_;  // G42.36 fwd supply
class Resize;  // G42.36 fwd supply
class Constructor_VectorClass_CaptureManagerClass___;  // G42.36 fwd supply
class Constructor_VectorClass_Reestablish___;  // G42.36 fwd supply
class Constructor_VectorClass_FoggedObjectClass___;  // G42.36 fwd supply
class Constructor_VectorClass_AirstrikeClass___;  // G42.36 fwd supply
class Constructor_VectorClass_WeaponTypeClass___;  // G42.36 fwd supply
class Constructor_VectorClass_WarheadTypeClass___;  // G42.36 fwd supply
class LoadTypeData;  // G42.36 fwd supply
class Constructor_VectorClass_VoxelAnimClass___;  // G42.36 fwd supply
class FindValue;  // G42.36 fwd supply
class GetAt;  // G42.36 fwd supply
class GetPtrOffset;  // G42.36 fwd supply
class TryFreeAndClear;  // G42.36 fwd supply
class LogicClass;  // G42.36 fwd supply
class Constructor_VectorClass_ObjectClass___;  // G42.36 fwd supply
class GetItem;  // G42.36 fwd supply
class Constructor_VectorClass_IsometricTileClass___;  // G42.36 fwd supply
class GetItemIndex;  // G42.36 fwd supply
class Constructor_VectorClass_LightConvertClass___;  // G42.36 fwd supply
class FindItemIndex;  // G42.36 fwd supply
class Remove;  // G42.36 fwd supply
class Add;  // G42.36 fwd supply
class Get;  // G42.36 fwd supply
class Clear;  // G42.36 fwd supply
class SetCapacity_6;  // G42.36 fwd supply
class SetCapacity_5;  // G42.36 fwd supply
class SetCapacity_4;  // G42.36 fwd supply
class SetCapacity_3;  // G42.36 fwd supply
class SetCapacity_2;  // G42.36 fwd supply
class SetCapacity_1;  // G42.36 fwd supply
class SetCapacity_0;  // G42.36 fwd supply
class SetCapacity;  // G42.36 fwd supply
class EnumConnectionPointsClass;  // G42.36 fwd supply
class Constructor;  // G42.36 fwd supply

struct VectorClass_flat {
// --- flat members (BEGIN) ---
    void * vtable1;  // 0x0
    unsigned int u32_4;  // 0x4
    unsigned int u32_8;  // 0x8
    unsigned int u32_C;  // 0xC
    unsigned int u32_D;  // 0xD
    unsigned int u32_10;  // 0x10
    unsigned int u32_24;  // 0x24
    unsigned int u32_28;  // 0x28
    unsigned int u32_2C;  // 0x2C
    unsigned int u32_38;  // 0x38
    unsigned int u32_E4;  // 0xE4
    unsigned int u32_E8;  // 0xE8
    unsigned int u32_2580;  // 0x2580
    unsigned int u32_2590;  // 0x2590
    unsigned int MissionClass;
    unsigned int __pad_518C;
    unsigned int baseNodeCapacity;
    unsigned int baseNodeCount;
    unsigned int baseNodes;
    unsigned int cells24;
    unsigned int cells24Capacity;
    unsigned int cells24Count;
    unsigned int cells38Capacity;
    unsigned int cells38Count;
    unsigned int center;
    unsigned int owner;
    unsigned int percentBuilt;
    unsigned int radioLinks;
    unsigned int unknown54;
    unsigned int v6;
    unsigned int vtable0;
    unsigned int IsInitialized;
    unsigned int Items;
// --- flat members (END) ---
VectorClass_flat *  QueryInterface(unsigned int * Block, char a2);
VectorClass_flat *  vt00(unsigned int * Block, char a2);
char AddRef(int a2);
char Append(VectorClass_flat * aP1, void *a2);
char AppendCopy(DynamicVector * aP1);
char EraseAt(IUnknown * aP1);
char InsertAt(IUnknown * aP1, int a3);
char PushBack(VectorClass_flat * aP1);
char PushBack2(unsigned int * a2);
char PushBackCopy(AbstractClass * aP1);
char Release(int a2, char * a3);
char RemoveAt(int a2, void *a2_2);
char ResizeEx(int a2, unsigned int * a3);
char Shrink();
char vt02(int a2, unsigned int * a3);
int * ScalarDtor(char a2);
int Check(Pipe * aP1, int aP2, void *a3);
int GetAtChecked(IUnknown * aP1);
int GetAt_Copy(int a2);
int GetCount();
int  GetSize(unsigned int * a2);
int  LoadStream(TechnoTypeClass * aP1);
int RemoveElement();
int RemoveItem(ObjectClass * aP1, void *a2);
int SaveLoad(TechnoTypeClass * aP1);
int  vt04(unsigned int * a2);
unsigned int * BuildingConstructor(int a2, int a3);
unsigned int * BuildingTypeConstructor(TechnoTypeClass * aP1, TechnoTypeClass * aP2);
unsigned int * CellConstructor(IUnknown * aP1, IUnknown * aP2);
unsigned int * Construct(int a2, int a3, void *a3_2, void *a4, void *a5, void *a6);
unsigned int * ConstructSubzone(int a2, int a3);
unsigned int * ConstructorWithVtable(TechnoTypeClass * aP1, TechnoTypeClass * aP2);
unsigned int * Copy(VectorClass_flat * aP1, void *a2);
unsigned int *  CopyBuilding(VectorClass * aP1);
unsigned int *  CopyDefault(VectorClass * aP1);
unsigned int * CopySmudge(CCINIClass * aP1);
unsigned int * PointConstructor(MapClass * aP1, MapClass * aP2);
unsigned int * WstringConstructor(int a2, unsigned int * a3);
unsigned int GetCapacity(int a2);
unsigned int GetIndex(int a2);
unsigned int vt05(int a2);
int Cleanup(void *a1);
void Cleanup3();
void Cleanup4();
void Cleanup5();
void CleanupSubzone();
void CleanupTyped();
void ClearAndFree();
void ClearAndFree2();
void ClearAndFree3();
void ClearAndFree4();
int Destroy(void *a1);
// fused-garbage: void Desvoidvoid Destroy();
    AbstractClass * * Release(int a2, unsigned int * a3);
    int RemoveObjectById();
    unsigned int * Constructor(EnumConnectionPointsClass * aP1, void *a2_1, void *a3_1);
    int SetCapacity(int a1, int a2);
    int SetCapacity_0(int a1, int a2);
    int SetCapacity_1(int a1, int a2);
    int SetCapacity_2(int a1, int a2);
    unsigned int * SetCapacity_3(int a1, unsigned int * a2);
    unsigned int * SetCapacity_4(int a1, unsigned int * a2);
    int SetCapacity_5(int a1);
    AbstractClass * * SetCapacity_6(int a2, unsigned int * a3);
    int Clear(int a2, int a3);
    int Get(int a2, void *a2_2);
    char Add(int a2, void *a2_2, void *a3_1);
    void Remove(void *a1_1);
    int FindItemIndex(unsigned int * a2);
    DynamicVector * Constructor_VectorClass_LightConvertClass___(unsigned int * Block, char a2);
    unsigned int GetItemIndex(int a2);
    DynamicVector * Constructor_VectorClass_IsometricTileClass___(unsigned int * Block, char a2);
    int GetItem();
    LogicClass * Constructor_VectorClass_ObjectClass___(unsigned int * Block, char a2);
    void TryFreeAndClear();
    unsigned int GetPtrOffset(int a2);
    int GetAt(int a2);
    int FindValue(unsigned int * a2);
    DynamicVector * Constructor_VectorClass_VoxelAnimClass___(unsigned int * Block, char a2);
    unsigned int LoadTypeData(int a2);
    DynamicVector * Constructor_VectorClass_WarheadTypeClass___(unsigned int * Block, char a2);
    DynamicVector * Constructor_VectorClass_WeaponTypeClass___(unsigned int * Block, char a2);
    DynamicVector * Constructor_VectorClass_AirstrikeClass___(unsigned int * Block, char a2);
    unsigned int * loc_421B10(unsigned int * Block, char a2);
    DynamicVector * Constructor_VectorClass_FoggedObjectClass___(unsigned int * Block, char a2);
    DynamicVector * Constructor_VectorClass_Reestablish___(unsigned int * Block, char a2);
    unsigned int * loc_46B910(unsigned int * Block, char a2);
    DynamicVector * Constructor_VectorClass_CaptureManagerClass___(unsigned int * Block, char a2);
    char Resize(int a2, unsigned int * a3);
    DynamicVector * Constructor_VectorClass_tagCONNECTDATA_(unsigned int * Block, char a2);
    int FindItemIndex_0(unsigned int * a2);
    unsigned int * loc_4BA1B0(unsigned int * Block, char a2);
    void Destroy_0();
    unsigned int GetItemIndex_0(int a2);
    void Destroy_1();
    unsigned int GetItemIndex_1(int a2);
};  // fix_truncated_headers: restored closer
}  // fix_truncated_headers: restored closer // namespace gamemd
