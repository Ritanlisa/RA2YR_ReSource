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
VectorClass_flat * QueryInterface(unsigned int * Block, char a2);
VectorClass_flat * vt00(unsigned int * Block, char a2);
char AddRef(int a2);
char Append(void * aP1);
char AppendCopy(void * aP1);
char EraseAt(void * aP1);
char InsertAt(void * aP1, int a3);
char PushBack(void * aP1);
char PushBack2(unsigned int * a2);
char PushBackCopy(void * aP1);
char Release(int a2, char * a3);
char RemoveAt(int a2);nt a2, unsigned int * a3);
char ResizeEx(int a2, unsigned int * a3);
char Shrink();
char vt02(int a2, unsigned int * a3);
int * ScalarDtor(char a2);
int Check(void * aP1, int aP2);int GetAt(int a2);
int GetAtChecked(void * aP1);
int GetAt_Copy(int a2);
int GetCount();
int GetSize(unsigned int * a2);
int LoadStream(void * aP1);
int RemoveElement();
int RemoveItem(void * aP1);ectById();
int SaveLoad(void * aP1);
int vt04(unsigned int * a2);
unsigned int * BuildingConstructor(int a2, int a3);
unsigned int * BuildingTypeConstructor(void * aP1, void * aP2);
unsigned int * CellConstructor(void * aP1, void * aP2);
unsigned int * Construct(int a2, int a3);t * ConstructHSV(int a2, int a3);
unsigned int * ConstructSubzone(int a2, int a3);
unsigned int * ConstructorWithVtable(void * aP1, void * aP2);
unsigned int * Copy(void * aP1);t * CopyAssign(void * aP1);
unsigned int * CopyBuilding(void * aP1);unsigned int * CopyBuilding(void * aP1);aP1);
unsigned int * CopyDefault(void * aP1);icle(void * aP1);
unsigned int * CopySmudge(void * aP1);
unsigned int * PointConstructor(void * aP1, void * aP2);
unsigned int * WstringConstructor(int a2, unsigned int * a3);
unsigned int GetCapacity(int a2);
unsigned int GetIndex(int a2);
unsigned int vt05(int a2);
void Cleanup();p2();
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
void Desvoidvoid Destroy(); Dtor(void *a1 = 0);oid Destrvoid Destroy();void Destructor();stroy();mespavoid Dtor();