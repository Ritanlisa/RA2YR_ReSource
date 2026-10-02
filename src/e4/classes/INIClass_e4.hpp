// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VoxelStruct;  // fix_fwd_type_supply
struct ObjectClass;  // fix_fwd_type_supply

struct INIClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    unsigned char __tail_0[2];  // 0x0
    char headNode[12];  // 0x4
    void* q008;  // 0x8
    void* q00C;  // 0xC
    unsigned int q00D;  // 0xD
    char sectionHead[12];  // 0x10
    unsigned int q014;  // 0x14
    unsigned int q018;  // 0x18
    char sectionCount[4];  // 0x1C
    unsigned int u32_20;  // 0x20
    unsigned int q024;  // 0x24
    VoxelStruct * q028;  // 0x28
    char INIClass_field_2C[4];  // 0x2C
    char unknown30[4];  // 0x30
    bool needsSave_flag;  // 0x34
    unsigned char q035;  // 0x35
    void *q38;  // 0x38
    unsigned int INIClass_field_3C;  // 0x3C
    unsigned int Capacity;
    unsigned int IsAllocated;
    unsigned int IsInitialized;
    unsigned int Items;
    unsigned int *__pad_0;
    unsigned int *__pad_20;
    unsigned int q0146;
    unsigned int sectionHead0;
    unsigned int vtable0;
    unsigned int ReadDifficultyModifiers;
    unsigned int unknown38;
    unsigned int INISection;
    unsigned int Debug;
    unsigned int Event;
    unsigned int SetString;
// --- flat members (END) ---
    int ReadCoord(double *a1@<ecx>, double a2@<st0>, unsigned __int8 *a3, unsigned __int8 *a4, int a5, int a1, int a2, int aP2, int aP1, int aP3);
    ObjectClass * * BinarySearchSection(INIClass * aP1, void *a2);
    VoxelStruct * * GetKeyCount(INIClass * aP1, void *a2);
    char GetInt(char ** a2, char ** a3, unsigned int * a4);
    int GetBool(uint8_t *aP1, uint8_t *a2, int a4);
    int GetStringByIndex(CCINIClass * aP1, CCINIClass * aP2, void *a3);
    int ReadInt(String *a2, String *a3, int a4);
    int WOLobby_Play(const char *a1, const char *a2, int a3);
    int sub_44FE60();
    INIClass();
    static unsigned int GetString(unsigned __int8 *a2, unsigned __int8 *a3, char *Source, char *Destination, int Count);
    void SetGameOptionsPing();
    static double ClearSection(...);  // C2597 interim stub
    static double GetBase64Data(...);  // C2597 interim stub
    static double GetPipIdx(...);  // C2597 interim stub
    static double GetStringEx(...);  // C2597 interim stub
    static double LoadFile(...);  // C2597 interim stub
    static double ReadBase64Data(...);  // C2597 interim stub
    static double ReadBool_Overwrite(...);  // C2597 interim stub
    static double ReadDouble_Overwrite(...);  // C2597 interim stub
    static double ReadRGBColorList(...);  // C2597 interim stub
    static double ResetSection(...);  // C2597 interim stub
    static double SetBool(...);  // C2597 interim stub
    static double SetRect(...);  // C2597 interim stub
    static double WriteDigest(...);  // C2597 interim stub
    static double GetCoord(...);  // C2597 interim stub
    static double ReadPoint3D_Overwrite(...);  // C2597 interim stub
    static double SetHouseName(...);  // C2597 interim stub
    static double GetCoord2(...);  // C2597 interim stub
    static double SetIntFormat(...);  // C2597 interim stub
    static double ReadTokenizedPair(...);  // C2597 interim stub
    static double SaveToPipe(...);  // C2597 interim stub
    static double WriteToString(...);  // C2597 interim stub
    char ** GetStringByIndexEx(char **a2, char **a3, int a4);  // 0x526d90
    static int SetInt(...);  // 0x5275c0
    int ReadString(char **aP1, char **aP2, char **aP3, int a5);  // 0x528c00
    static int ReadInt_Overwrite(...);  // 0x5276d0
    unsigned int * GetCoordPair(unsigned int *a2, char *Source, char **a4, unsigned int *a5);  // 0x529a30
};

} // namespace gamemd
