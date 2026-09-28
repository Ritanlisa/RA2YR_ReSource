// GENERATED template-collision flat carrier (mechanical).
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct VectorClass_flat {
// --- flat members (BEGIN) ---
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
// --- flat members (END) ---
VectorClass_flat * QueryInterface(unsigned int * Block, char a2);
VectorClass_flat * vt00(unsigned int * Block, char a2);
char AddRef(int v4);
char Append(VectorClass_flat * aP1);
char AppendCopy(DynamicVector * aP1);
char EraseAt(IUnknown * aP1);
char InsertAt(IUnknown * aP1, int a3);
char PushBack(VectorClass_flat * aP1);
char PushBack2(unsigned int * a2);
char PushBackCopy(AbstractClass * aP1);
char Release(int a2, char * a3);
char RemoveAt(int a2);
char Resize(int a2, unsigned int * a3);
char ResizeEx(int a2, unsigned int * a3);
char Shrink();
char vt02(int a2, unsigned int * a3);
int * ScalarDtor(char a2);
int Check(Pipe * aP1, int aP2);
int Clear(int v4, int a3);
int GetAt(int a2);
int GetAtChecked(IUnknown * aP1);
int GetAt_Copy(int a2);
int GetCount();
int GetSize(unsigned int * a2);
int LoadStream(TechnoTypeClass * aP1);
int RemoveElement();
int RemoveItem(ObjectClass * aP1);
int RemoveObjectById();
int SaveLoad(TechnoTypeClass * aP1);
int vt04(unsigned int * a2);
unsigned int * BuildingConstructor(int a2, int a3);
unsigned int * BuildingTypeConstructor(TechnoTypeClass * aP1, TechnoTypeClass * aP2);
unsigned int * CellConstructor(IUnknown * aP1, IUnknown * aP2);
unsigned int * Construct(int a2, int a3);
unsigned int * ConstructHSV(int a2, int a3);
unsigned int * ConstructSubzone(int a2, int a3);
unsigned int * ConstructorWithVtable(TechnoTypeClass * aP1, TechnoTypeClass * aP2);
unsigned int * Copy(VectorClass_flat * aP1);
unsigned int * CopyAssign(VectorClass_flat * aP1);
unsigned int * CopyBuilding(VectorClass_flat * aP1);
unsigned int * CopyConstructor(InfantryTypeClass * aP1);
unsigned int * CopyDefault(VectorClass_flat * aP1);
unsigned int * CopyParticle(DynamicVector * aP1);
unsigned int * CopySmudge(CCINIClass * aP1);
unsigned int * PointConstructor(MapClass * aP1, MapClass * aP2);
unsigned int * WstringConstructor(int a2, unsigned int * a3);
unsigned int GetCapacity(int a2);
unsigned int GetIndex(int a2);
unsigned int vt05(int a2);
void Cleanup();
void Cleanup2();
void Cleanup3();
void Cleanup4();
void Cleanup5();
void CleanupSubzone();
void CleanupTyped();
void ClearAndFree();
void ClearAndFree2();
void ClearAndFree3();
void ClearAndFree4();
void Destroy();
void Destructor();
void Dtor();
void ddtor();
};

} // namespace gamemd
