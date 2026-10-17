// GENERATED full flat definitions for tree-owned classes
// (gen_tree_full_e4.py) — namespace-isolated C2027 fix,
// zero tree dependencies. Bodies access these via e4 TUs only.
#pragma once
// G57a1: e4-universe marker battery -- gap2 twins in core/utility_ext.hpp
// (math.hpp type aliases CellStruct/Point2D/CoordStruct, the ra2::game::
// ObjectClass using-bridge, and the HashTable/ComPtr/Random/Compare/Flag/
// Buffer/StringVector/VectorCursor_uint_DynamicVectorClass_uint class
// twins) are suppressed; the e4 flat carriers in src/e4/classes/ are the
// single truth in e4 TUs. gap2 TUs never include this header (verified),
// so their utility_ext.hpp view is unchanged.
#ifndef GAMEMD_E4_UNIVERSE
#define GAMEMD_E4_UNIVERSE 1
#endif

// G57c1: battery extension -- utility_ext twins that collide with e4 flat carriers / TU-local defs (C2011 family)
#ifndef GAMEMD_E4_AllocCallback
#define GAMEMD_E4_AllocCallback 1
#endif
#ifndef GAMEMD_E4_COM
#define GAMEMD_E4_COM 1
#endif
#ifndef GAMEMD_E4_COMClass
#define GAMEMD_E4_COMClass 1
#endif
#ifndef GAMEMD_E4_COMObject
#define GAMEMD_E4_COMObject 1
#endif
#ifndef GAMEMD_E4_Config
#define GAMEMD_E4_Config 1
#endif
#ifndef GAMEMD_E4_Delegate
#define GAMEMD_E4_Delegate 1
#endif
#ifndef GAMEMD_E4_EnumConnectionPointsClass
#define GAMEMD_E4_EnumConnectionPointsClass 1
#endif
#ifndef GAMEMD_E4_EnumConnectionsClass
#define GAMEMD_E4_EnumConnectionsClass 1
#endif
#ifndef GAMEMD_E4_EventQueue
#define GAMEMD_E4_EventQueue 1
#endif
#ifndef GAMEMD_E4_Event_Dispatch
#define GAMEMD_E4_Event_Dispatch 1
#endif
#ifndef GAMEMD_E4_Float
#define GAMEMD_E4_Float 1
#endif
#ifndef GAMEMD_E4_Float4
#define GAMEMD_E4_Float4 1
#endif
#ifndef GAMEMD_E4_GraphicMenuAnimItem
#define GAMEMD_E4_GraphicMenuAnimItem 1
#endif
#ifndef GAMEMD_E4_GraphicMenuItem
#define GAMEMD_E4_GraphicMenuItem 1
#endif
#ifndef GAMEMD_E4_Hash
#define GAMEMD_E4_Hash 1
#endif
#ifndef GAMEMD_E4_Helper
#define GAMEMD_E4_Helper 1
#endif
#ifndef GAMEMD_E4_LoadGame
#define GAMEMD_E4_LoadGame 1
#endif
#ifndef GAMEMD_E4_Main
#define GAMEMD_E4_Main 1
#endif
#ifndef GAMEMD_E4_MoveFeedback
#define GAMEMD_E4_MoveFeedback 1
#endif
#ifndef GAMEMD_E4_Player
#define GAMEMD_E4_Player 1
#endif
#ifndef GAMEMD_E4_PlayerClass
#define GAMEMD_E4_PlayerClass 1
#endif
#ifndef GAMEMD_E4_Process
#define GAMEMD_E4_Process 1
#endif
#ifndef GAMEMD_E4_PtrVector
#define GAMEMD_E4_PtrVector 1
#endif
#ifndef GAMEMD_E4_Queue
#define GAMEMD_E4_Queue 1
#endif
#ifndef GAMEMD_E4_Rect
#define GAMEMD_E4_Rect 1
#endif
#ifndef GAMEMD_E4_Rect_Point
#define GAMEMD_E4_Rect_Point 1
#endif
#ifndef GAMEMD_E4_RefCount
#define GAMEMD_E4_RefCount 1
#endif
#ifndef GAMEMD_E4_Return
#define GAMEMD_E4_Return 1
#endif
#ifndef GAMEMD_E4_SHA1
#define GAMEMD_E4_SHA1 1
#endif
#ifndef GAMEMD_E4_Selection
#define GAMEMD_E4_Selection 1
#endif
#ifndef GAMEMD_E4_Settings
#define GAMEMD_E4_Settings 1
#endif
#ifndef GAMEMD_E4_StringList
#define GAMEMD_E4_StringList 1
#endif
#ifndef GAMEMD_E4_Struct
#define GAMEMD_E4_Struct 1
#endif
#ifndef GAMEMD_E4_Time
#define GAMEMD_E4_Time 1
#endif
#ifndef GAMEMD_E4_Type
#define GAMEMD_E4_Type 1
#endif
#ifndef GAMEMD_E4_Value
#define GAMEMD_E4_Value 1
#endif
#ifndef GAMEMD_E4_Vector2
#define GAMEMD_E4_Vector2 1
#endif
#ifndef GAMEMD_E4_Vector3
#define GAMEMD_E4_Vector3 1
#endif
#ifndef GAMEMD_E4_VectorCursor
#define GAMEMD_E4_VectorCursor 1
#endif
#ifndef GAMEMD_E4_WinMain
#define GAMEMD_E4_WinMain 1
#endif
#ifndef GAMEMD_E4_unknown
#define GAMEMD_E4_unknown 1
#endif

#ifndef GAMEMD_E4_HashTable
#define GAMEMD_E4_HashTable 1
#endif
#ifndef GAMEMD_E4_VectorCursor_uint_DynamicVectorClass_uint
#define GAMEMD_E4_VectorCursor_uint_DynamicVectorClass_uint 1
#endif
#ifndef GAMEMD_E4_Buffer
#define GAMEMD_E4_Buffer 1
#endif
#ifndef GAMEMD_E4_ComPtr
#define GAMEMD_E4_ComPtr 1
#endif
#ifndef GAMEMD_E4_Random
#define GAMEMD_E4_Random 1
#endif
#ifndef GAMEMD_E4_Compare
#define GAMEMD_E4_Compare 1
#endif
#ifndef GAMEMD_E4_Flag
#define GAMEMD_E4_Flag 1
#endif
#ifndef GAMEMD_E4_StringVector
#define GAMEMD_E4_StringVector 1
#endif
#ifndef GAMEMD_E4_AnimTypeList
#define GAMEMD_E4_AnimTypeList 1
#endif
#ifndef GAMEMD_E4_VoxelAnimTypeVector
#define GAMEMD_E4_VoxelAnimTypeVector 1
#endif

#include "e4/classes/_fwd_e4.hpp"
#include "core/utility_ext.hpp"  // G42.55 tree truth
#include "e4/classes/LinkedList_flat_e4.hpp"  // G57c8 promoted (corpus static-form LinkedList:: vocab)
#include "e4/classes/AllocCallback_e4.hpp"  // G57c1 promoted flat carrier (utility_ext twin suppressed in e4 TUs)
#include "e4/classes/Buffer_e4.hpp"  // G57c1 promoted flat carrier (utility_ext twin suppressed in e4 TUs)
#include "e4/classes/COM_e4.hpp"  // G57c1 promoted flat carrier (utility_ext twin suppressed in e4 TUs)
#include "e4/classes/COMClass_e4.hpp"  // G57c1 promoted flat carrier (utility_ext twin suppressed in e4 TUs)
#include "e4/classes/COMObject_e4.hpp"  // G57c1 promoted flat carrier (utility_ext twin suppressed in e4 TUs)
#include "e4/classes/ComPtr_e4.hpp"  // G57c1 promoted flat carrier (utility_ext twin suppressed in e4 TUs)
#include "e4/classes/Compare_e4.hpp"  // G57c1 promoted flat carrier (utility_ext twin suppressed in e4 TUs)
#include "e4/classes/Config_e4.hpp"  // G57c1 promoted flat carrier (utility_ext twin suppressed in e4 TUs)
#include "e4/classes/Delegate_e4.hpp"  // G57c1 promoted flat carrier (utility_ext twin suppressed in e4 TUs)
#include "e4/classes/EnumConnectionPointsClass_e4.hpp"  // G57c1 promoted flat carrier (utility_ext twin suppressed in e4 TUs)
#include "e4/classes/EnumConnectionsClass_e4.hpp"  // G57c1 promoted flat carrier (utility_ext twin suppressed in e4 TUs)
#include "e4/classes/EventQueue_e4.hpp"  // G57c1 promoted flat carrier (utility_ext twin suppressed in e4 TUs)
#include "e4/classes/Event_Dispatch_e4.hpp"  // G57c1 promoted flat carrier (utility_ext twin suppressed in e4 TUs)
#include "e4/classes/Flag_e4.hpp"  // G57c1 promoted flat carrier (utility_ext twin suppressed in e4 TUs)
#include "e4/classes/Float_e4.hpp"  // G57c1 promoted flat carrier (utility_ext twin suppressed in e4 TUs)
#include "e4/classes/Float4_e4.hpp"  // G57c1 promoted flat carrier (utility_ext twin suppressed in e4 TUs)
#include "e4/classes/GraphicMenuAnimItem_e4.hpp"  // G57c1 promoted flat carrier (utility_ext twin suppressed in e4 TUs)
#include "e4/classes/GraphicMenuItem_e4.hpp"  // G57c1 promoted flat carrier (utility_ext twin suppressed in e4 TUs)
#include "e4/classes/Hash_e4.hpp"  // G57c1 promoted flat carrier (utility_ext twin suppressed in e4 TUs)
#include "e4/classes/Helper_e4.hpp"  // G57c1 promoted flat carrier (utility_ext twin suppressed in e4 TUs)
#include "e4/classes/LoadGame_e4.hpp"  // G57c1 promoted flat carrier (utility_ext twin suppressed in e4 TUs)
#include "e4/classes/Main_e4.hpp"  // G57c1 promoted flat carrier (utility_ext twin suppressed in e4 TUs)
#include "e4/classes/MoveFeedback_e4.hpp"  // G57c1 promoted flat carrier (utility_ext twin suppressed in e4 TUs)
#include "e4/classes/Player_e4.hpp"  // G57c1 promoted flat carrier (utility_ext twin suppressed in e4 TUs)
#include "e4/classes/PlayerClass_e4.hpp"  // G57c1 promoted flat carrier (utility_ext twin suppressed in e4 TUs)
#include "e4/classes/Process_e4.hpp"  // G57c1 promoted flat carrier (utility_ext twin suppressed in e4 TUs)
#include "e4/classes/PtrVector_e4.hpp"  // G57c1 promoted flat carrier (utility_ext twin suppressed in e4 TUs)
#include "e4/classes/Queue_e4.hpp"  // G57c1 promoted flat carrier (utility_ext twin suppressed in e4 TUs)
#include "e4/classes/Random_e4.hpp"  // G57c1 promoted flat carrier (utility_ext twin suppressed in e4 TUs)
#include "e4/classes/Rect_e4.hpp"  // G57c1 promoted flat carrier (utility_ext twin suppressed in e4 TUs)
#include "e4/classes/Rect_Point_e4.hpp"  // G57c1 promoted flat carrier (utility_ext twin suppressed in e4 TUs)
#include "e4/classes/RefCount_e4.hpp"  // G57c1 promoted flat carrier (utility_ext twin suppressed in e4 TUs)
#include "e4/classes/Return_e4.hpp"  // G57c1 promoted flat carrier (utility_ext twin suppressed in e4 TUs)
#include "e4/classes/SHA1_e4.hpp"  // G57c1 promoted flat carrier (utility_ext twin suppressed in e4 TUs)
#include "e4/classes/Selection_e4.hpp"  // G57c1 promoted flat carrier (utility_ext twin suppressed in e4 TUs)
#include "e4/classes/Settings_e4.hpp"  // G57c1 promoted flat carrier (utility_ext twin suppressed in e4 TUs)
#include "e4/classes/StringVector_e4.hpp"  // G57c1 promoted flat carrier (utility_ext twin suppressed in e4 TUs)
#include "e4/classes/Struct_e4.hpp"  // G57c1 promoted flat carrier (utility_ext twin suppressed in e4 TUs)
#include "e4/classes/Time_e4.hpp"  // G57c1 promoted flat carrier (utility_ext twin suppressed in e4 TUs)
#include "e4/classes/Type_e4.hpp"  // G57c1 promoted flat carrier (utility_ext twin suppressed in e4 TUs)
#include "e4/classes/Value_e4.hpp"  // G57c1 promoted flat carrier (utility_ext twin suppressed in e4 TUs)
#include "e4/classes/Vector2_e4.hpp"  // G57c1 promoted flat carrier (utility_ext twin suppressed in e4 TUs)
#include "e4/classes/Vector3_e4.hpp"  // G57c1 promoted flat carrier (utility_ext twin suppressed in e4 TUs)
#include "e4/classes/VectorCursor_e4.hpp"  // G57c1 promoted flat carrier (utility_ext twin suppressed in e4 TUs)
// G57c1: VectorCursor_uint_DynamicVectorClass_uint promotion EXCLUDED -- this
// header defines that flat class itself (line ~989); a promoted carrier
// twin would C2011 against it.
#include "e4/classes/WinMain_e4.hpp"  // G57c1 promoted flat carrier (utility_ext twin suppressed in e4 TUs)
#include "e4/classes/unknown_e4.hpp"  // G57c1 promoted flat carrier (utility_ext twin suppressed in e4 TUs)

// X10: e4 flat authority markers (suppress tree twins in object/object.hpp)
#ifndef GAMEMD_E4_OWNS_ObjectClass
#define GAMEMD_E4_OWNS_ObjectClass 1
#endif
#ifndef GAMEMD_E4_OWNS_AudioController
#define GAMEMD_E4_OWNS_AudioController 1
#endif
namespace gamemd {

struct AudioChannel;
struct CampaignScore;
struct DialogControl_OwnerDraw;
#if !defined(GAMEMD_TREE_UNIVERSE) && !defined(GAMEMD_E4_VECTOR_TREE_TRUTH)
struct DynamicVectorClass;
#endif
struct FractalNoise;
struct Gap2Recv_402F60;
#ifndef GAMEMD_TREE_UNIVERSE
struct HashTable;
#endif
struct KeywordType;
struct Locomotor;
struct MSAnim;
struct MSShapeAnim;
struct ReferenceCounted;
struct ShapeButtonClass;
struct State;
#if !defined(GAMEMD_TREE_UNIVERSE) && !defined(GAMEMD_E4_VECTOR_TREE_TRUTH)
struct VectorClass;
#endif
struct VectorCursor_uint_DynamicVectorClass_uint;
struct WorldDominationTour;
struct _;

#ifndef GAMEMD_G2_AudioChannel_DEF  // G42.57w14 twin-guard (shared; first-include wins)
#define GAMEMD_G2_AudioChannel_DEF 1
struct AudioChannel {
    void* vfptr;
    unsigned char *q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    int DeactivatePlay();  // 0x402600
    unsigned char *__pad_0;  // 0x0
    unsigned char DynamicVector_field_0x1;  // 0x1 (offset-truth supply)
    void * ptr_10;  // 0x10 (offset-truth supply)
    void * ptr_18;  // 0x18 (offset-truth supply)
    void * ptr_8;  // 0x8 (offset-truth supply)
    unsigned int q00C;  // 0xC (offset-truth supply)
    unsigned int q010;  // 0x10 (offset-truth supply)
    unsigned int q014;  // 0x14 (offset-truth supply)
    unsigned int u32_14;  // 0x14 (offset-truth supply)
    unsigned int u32_4;  // 0x4 (offset-truth supply)
    unsigned int u32_C;  // 0xC (offset-truth supply)
    unsigned char __pad_000;  // 0x0 [X30:canon]
};
#endif  // GAMEMD_G2_AudioChannel_DEF

struct CampaignScore {
    static int LoadCampaignScoreAssetsGame(void *aP1);

    void* vfptr;
    unsigned int u32_A2;  // 0xA2
    unsigned int q08B;  // 0x8B
    unsigned int q08A;  // 0x8A
    void* onBridge;  // 0x0 (no offset truth)
    unsigned char __pad_9[4];  // 0x9
    void* isFallingDown;  // 0x0 (no offset truth)
    unsigned char *__pad_0;  // 0x0
    void* inOpenToppedTransport;  // 0x0 (no offset truth)
    void* wasFallingDown;  // 0x0 (no offset truth)
    int __pad_004;  // 0x4 [X30:type_map]
    unsigned int AbstractClass_1;  // [X30:default]
    CampaignScore* CampaignScore_1;  // 0x1 [X30:member_lookup]
    unsigned int q092;  // 0x92 [X30:default]
    unsigned char q096;  // 0x96 [X30:member_lookup]
    unsigned int q0A3;  // 0xA3 [X30:default]
    unsigned int q_B0;  // [X30:default]
    unsigned int u32_7E;  // 0x7E [X30:default]
    unsigned int u32_9E;  // 0x9E [X30:default]
    unsigned int u32_B0;  // 0xB0 [X30:default]


    void * vtable2;  // 0x8 [X55 W3 supply (render vocab)]
    void * vtable4;  // 0x10 [X55 W3 supply (render vocab)]
};

struct DialogControl_OwnerDraw {
    void* vfptr;
    unsigned int m_0;  // 0x0
    unsigned char __pad_000;  // 0x0 [X30:canon]
    ObjectClass* ObjectClass_C;  // 0xC [X30:member_lookup]
};

#if !defined(GAMEMD_TREE_UNIVERSE) && !defined(GAMEMD_E4_VECTOR_TREE_TRUTH)
struct DynamicVectorClass {
    void* vtable1;  // 0x0 (no offset truth)
    void* vfptr;
    void* Items;  // 0x4
    int Capacity;  // 0x8
    bool IsInitialized;  // 0xC
    bool IsAllocated;  // 0xD
    int Count;  // 0x10
    int CapacityIncrement;  // 0x14
    unsigned int *  Construct(int a2, int a3);  // 0x477db0
    static int Destroy_Alt(void *aP0);  // A_c2039 R5 static-form sync
    unsigned int *  Copy(unsigned int * a2);  // 0x4779e0
    unsigned int *  AnimTypeConstructor(int a2, int a3);  // 0x525250
    static int Destroy(void *aP1);

    unsigned int tail_E;  // 0xE [X30:canon]
};
#endif

#ifndef GAMEMD_TREE_UNIVERSE  // G42.35a: tree TU real class supplied elsewhere
struct FractalNoise {
    void* vfptr;
    static void Dtor(void *aP0);  // G42.32 R5-style static sync
    unsigned int tail_0;  // 0x0 [X30:canon]
};
#endif  // GAMEMD_TREE_UNIVERSE (FractalNoise)

struct Gap2Recv_402F60 {
    void* vfptr;
    unsigned int u32_28;  // 0x28
    unsigned int q040;  // 0x40
    unsigned int u32_5C;  // 0x5C
    unsigned int u32_60;  // 0x60
    unsigned int q064;  // 0x64
    unsigned int u32_68;  // 0x68
    unsigned int u32_6C;  // 0x6C
    unsigned int u32_70;  // 0x70
    unsigned int u32_74;  // 0x74
    unsigned int u32_78;  // 0x78
    unsigned int u32_7C;  // 0x7C
    unsigned int u32_80;  // 0x80
    unsigned int u32_88;  // 0x88
    char u32_E8;  // 0xE8
    int u32_F8;  // 0xF8
    unsigned int q100;  // 0x100
    unsigned int q104;  // 0x104
    unsigned int q108;  // 0x108
    CampaignClass * ptr_110;  // 0x110
    CampaignClass * ptr_118;  // 0x118
unsigned int q120;  // 0x120 [X35-L7 kind=unsigned int]
    unsigned int q124;  // 0x124
    unsigned int q128;  // 0x128
    unsigned int u32_12C;  // 0x12C
    unsigned int u64_130;  // 0x130
    LineTrail * ptr_138;  // 0x138
    AbstractClass * ptr_140;  // 0x140
    unsigned int q150;  // 0x150
    CampaignClass * ptr_158;  // 0x158
    unsigned int u32_15C;  // 0x15C
    int q248;  // 0x248
    unsigned int q260;  // 0x260
    unsigned int q264;  // 0x264
    unsigned int q274;  // 0x274
    unsigned int q278;  // 0x278
    CampaignClass * q280;  // 0x280
    AbstractClass * q288;  // 0x288
    unsigned int q300;  // 0x300
    unsigned int q304;  // 0x304
    unsigned int q310;  // 0x310
    AbstractClass * q320;  // 0x320
    CampaignClass * q344;  // 0x344
    unsigned int q348;  // 0x348
    unsigned int M992;  // 0x3E0
    unsigned int M1040;  // 0x410
    unsigned int M1184;  // 0x4A0
    unsigned int M1200;  // 0x4B0
    unsigned int M1376;  // 0x560
    unsigned int M1392;  // 0x570
    int q584;  // 0x584
    unsigned int q598;  // 0x598
    unsigned int q608;  // 0x608
    unsigned int q628;  // 0x628
    CampaignClass * q640;  // 0x640
    AbstractClass * q648;  // 0x648
    unsigned int q658;  // 0x658
    unsigned int q768;  // 0x768
    unsigned int q784;  // 0x784
    AbstractClass * q800;  // 0x800
    unsigned int q840;  // 0x840
    unsigned int q1040;  // 0x1040
    unsigned int q1184;  // 0x1184
    unsigned int q1200;  // 0x1200
    char q1378;  // 0x1378
    unsigned int q1544;  // 0x1544
    unsigned int q1554;  // 0x1554
    CampaignClass * q1574;  // 0x1574
    CampaignClass * q1600;  // 0x1600
    AbstractClass * q1608;  // 0x1608
    unsigned int q1624;  // 0x1624
    unsigned int q1634;  // 0x1634
    unsigned int q1924;  // 0x1924
    AbstractClass * q2048;  // 0x2048
    unsigned int q2054;  // 0x2054
    unsigned int q2450;  // 0x2450
    unsigned int q4160;  // 0x4160
    unsigned int q4484;  // 0x4484
    unsigned int q4608;  // 0x4608
    char q4984;  // 0x4984
    unsigned int q5010;  // 0x5010
    int q5138;  // 0x5138
    unsigned int q5170;  // 0x5170
    unsigned int q5444;  // 0x5444
    unsigned int q5460;  // 0x5460
    unsigned int q5494;  // 0x5494
    unsigned int q5510;  // 0x5510
    AbstractClass * q5640;  // 0x5640
    unsigned int q5668;  // 0x5668
    unsigned int q5684;  // 0x5684
    unsigned int q6294;  // 0x6294
    LineTrail * q6438;  // 0x6438
};

#ifndef GAMEMD_TREE_UNIVERSE  // G42.35a: tree TU real class supplied elsewhere
struct HashTable {
    void* vfptr;
    unsigned char HashTable_field_0x04;  // 0x4
    unsigned int u32_8;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned int HashTable_field_0x0C;  // G42.33 b2 alias (flat-carrier vocab)
    unsigned int HashTable_field_0x18;  // G42.33 b2 alias (flat-carrier vocab)
    unsigned int HashMap_field_0x04;  // G42.33 b4 alias (flat-carrier vocab)
    unsigned int HashMap_field_0x08;  // G42.33 b4 alias (flat-carrier vocab)
    unsigned int HashTable_field_0x38;  // G42.33 b4 alias
    unsigned int HashTable_field_0x3C;  // G42.33 b4 alias
    unsigned int HashTable_field_0x40;  // G42.33 b4 alias
    unsigned int HashTable_field_0x44;  // G42.33 b4 alias
    unsigned int HashTable_field_0x48;  // G42.33 b4 alias
    unsigned int HashTable_field_0x4C;  // G42.33 b4 alias
    unsigned int HashTable_field_0x50;  // G42.33 b4 alias
    unsigned int u32_10;  // 0x10
    unsigned char q014;  // 0x14
    unsigned char q018;  // 0x18
    static int Shrink2(void *aP0);  // A_c2039 R5 static-form sync
    static int Shrink(void *aP0);
    static int LookupString(void *aP0, const char **a2, unsigned int *a3);  // G42.33 b2 static-form sync
    static int ComputeIndex_2(int *aP1, int aP2);
    static int Grow2(void *aP0);  // A_c2039 R5 static-form sync
    // G57a1: CleanupAndResize/RebuildEx/FindString vocab fields moved to
    // static-method form below -- corpus calls them static-style.
    unsigned char q01C;  // 0x1C
    unsigned char q020;  // 0x20
    unsigned char q024;  // 0x24
    unsigned char q028;  // 0x28
    void* TimeRemaining;  // 0x0 (no offset truth)
    void* GetSpeed;  // 0x0 (no offset truth)
    unsigned char q02C;  // 0x2C
    unsigned char q030;  // 0x30
    unsigned char q034;  // 0x34
    unsigned int u32_38;  // 0x38
    unsigned int u32_3C;  // 0x3C
    void* vftable;  // 0x0 (no offset truth)
    void* Reset;  // 0x0 (no offset truth)
    unsigned char q044;  // 0x44
    unsigned char q048;  // 0x48
    void* Constructor;  // 0x0 (no offset truth)
    unsigned char q04C;  // 0x4C
    void* FindOrCreate2;  // 0x0 (no offset truth)
    static int ComputeHash(void *aP0, int a2);  // A_c2039 R5 static-form sync
    static int Rebuild(void *aP0);
    unsigned char q050;  // 0x50
    int LookupAndMark();  // 0x608440
    static int Get(void *aP0, IUnknown * aP1, IUnknown * aP2);  // A_c2039 R5 static-form sync
    int  BinarySearchAlt(int * a2);  // 0x52b4f0
    int  BinarySearch(int * a2);  // 0x52b390
    char * DestroyHashTableINIClass();  // 0x5256f0
    static int FindChunk(void *aP0, char * Str1, void * a2, CCINIClass * aP3);  // A_c2039 R5 static-form sync
    static int Remove(void *aP0, int a2);  // A_c2039 R5 static-form sync
    static int Find(void *aP0, const char * a1, ConvertClass * aP2);  // A_c2039 R5 static-form sync
    static int Lookup(void *aP0, const char **aP1, unsigned int *aP2);
    static int Grow(void *aP0);
    static int Rebuild2(void *aP0);
    static int Clear(int aP0);
    static int RemoveHashTableEntry(void *aP0, int aP2);
    static int FindWOLHashTableEntry(void *aP0, const char **aP1, unsigned int *aP2);
    static int CleanupAndResize(void *aP0);
    static int RebuildEx(void *aP0);
    static int FindString(void *aP0, const char *aP1, unsigned int *aP2);
    unsigned char *__pad_0;  // 0x0
    AbstractClass* __pad_000;  // 0x0 [X30:type_map]
unsigned int HashTable_field_0x10;  // 0x10 [X35-L7 kind=unsigned int]


    int HashTable_field_0x30;  // 0x30 [X55 W3 supply (render vocab)]
};
#endif  // GAMEMD_TREE_UNIVERSE (HashTable)

#ifndef GAMEMD_TREE_UNIVERSE  // G42.35a: tree TU real class supplied elsewhere
struct KeywordType {
    void* vfptr;
    void* FindOrCreate2_ph;  // 0x0 (no offset truth)  // w18j3: filler renamed (no offset truth; canon KeywordType::FindOrCreate2 is a method)
    static unsigned int FindOrCreate2(char *Source);  // x4:ida@0x524cb0
    unsigned int tail_0;  // 0x0 [X30:canon]
};
#endif  // GAMEMD_TREE_UNIVERSE (KeywordType)

struct Locomotor {
    void* vfptr;
int Locomotor_field_00;  // 0x0 [X35-L7 kind=int]
    static int GetSpeed(void *aP1);
};

#ifndef GAMEMD_TREE_UNIVERSE  // G42.35a: tree TU real class supplied elsewhere
struct MSAnim {
    static int Reset(void *aP1, int a2);

    void* vfptr;
    void* vtable1;  // 0x0
    int  GetField(unsigned int a2);  // 0x5cb840
    int  SetField(unsigned int a2);  // 0x5cb860
    int __pad_004;  // 0x4 [X30:type_map]
};
#endif  // GAMEMD_TREE_UNIVERSE (MSAnim)

#ifndef GAMEMD_TREE_UNIVERSE  // G42.35a: tree TU real class supplied elsewhere
struct MSShapeAnim {
    void* vfptr;
    unsigned int u32_7;  // 0x7
    static void * Constructor(void *aP1, void *a2, int a3, int a4, int a5, int a6, char a7, int a8);
    int EnableOnce(char aP1);
    MSShapeAnim * * initTrigger(char **aP1, int aP2, int a4, int a5, int a6, int a7, int aP7);
    void ProcessMapEvents(int *a1, int * a2, int a3, int a4, char a5, char a6);
    unsigned int * processTrigger(int a2, int a3);
    unsigned int * checkCondition(int aP1, int aP2);
    int executeActions(int a2);
    ObjectClass* q_10;  // +0x10 flat supply (CSP-fed) [X30:type_map]
    int __pad_004;  // 0x4 [X30:type_map]
};
#endif  // GAMEMD_TREE_UNIVERSE (MSShapeAnim)

#ifndef GAMEMD_TREE_UNIVERSE
struct ObjectClass {
    static int CleanupAudioAndRefs(void *aP1);
    static int CheckFlagD0(void *aP1, int a2);
    static int CalcDrawRect(void *aP1);
    static int GetTypeVt41(void *aP1);

    static int DetectCloaked(void *a1);
    char Release();
    int nullsub_40();
    void nullsub_231();
    void j_Exception_Destructor();  // 0x7CA9AF G42.33 b9 member-form sync
    void j_Exception_Destructor_2();  // 0x7CAA00 G42.33 b9 member-form sync
    void j_Exception_Destructor_3();  // G42.33 b9 member-form sync
    ObjectClass * sub_7CA993(void * Block, char a2);
    ObjectClass * sub_7CA9E4(void * Block, char a2);
    ObjectClass * sub_7CAC13(void * Block, char a2);
    int GetMember01();
    void* vfptr;
    void* vtable1;  // 0x0
    unsigned char __pad_0[29];  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    ObjectClass* uniqueId;  // 0x10 [X30:type_map]
    unsigned int q011;  // 0x11
    bool IsAllocated;  // 0x13
    void* abstractFlags;  // 0x14
    ObjectClass* nextArrayIndex;  // 0x18 [X30:type_map]
    ObjectClass* referenceCount;  // 0x1C [X30:type_map]
    bool q01D;  // 0x1D
    unsigned int q01E;  // 0x1E
    void* NeedsSaveOrLink;  // 0x20
    unsigned int objectTypeFlags;  // 0x24
    unsigned int q027;  // 0x27
    unsigned int owningHouseIndex;  // 0x28
    BufferIOFileClass* q02A;  // 0x2A
    bool q02B;  // 0x2B
    int fallRate;  // 0x2C
    unsigned int u32_2D;  // 0x2D
    unsigned int u32_2E;  // 0x2E
    unsigned int u32_2F;  // 0x2F
    ObjectClass* nextObject;  // 0x30
    unsigned char q031;  // 0x31
    unsigned char needsSave;  // 0x32
    unsigned int pad21;  // 0x33
    TagClass* attachedTag;  // 0x34
    unsigned int u32_35;  // 0x35
    unsigned int occupant;  // 0x36
    BombClass* attachedBomb;  // 0x38
    unsigned int u32_39;  // 0x39
    unsigned char q03A;  // 0x3A
    unsigned int q03B;  // 0x3B
    char ambientSoundController[20];  // 0x3C
    AudioController* q03D;  // 0x3D
    unsigned int u32_41;  // 0x41
    unsigned char u8_45;  // 0x45
    unsigned int u32_46;  // 0x46
    unsigned int u32_47;  // 0x47
    unsigned int u32_49;  // 0x49
    bool q04A;  // 0x4A
    unsigned char q04F;  // 0x4F
    char customSound_controller[20];  // 0x50
    void* q054;  // 0x54
    void* q058;  // 0x58
    unsigned int q05A;  // 0x5A
    IPXGlobalConnClass* q05C;  // 0x5C
    ObjectClass* q060;  // 0x60
    unsigned int u32_61;  // 0x61
    unsigned int u32_62;  // 0x62
    unsigned int u32_63;  // 0x63
    int customSound;  // 0x64
    bool bombVisible;  // 0x68
    unsigned char alignmentPadding69;  // 0x69
    unsigned int q06A;  // 0x6A
    int health;  // 0x6C
    AbstractClass* q06F;  // 0x6F
    int estimatedHealth;  // 0x70
    bool isOnMap;  // 0x74
    unsigned char alignmentPadding75;  // 0x75
    unsigned int u32_77;  // 0x77
    Int4* spawnStatus;  // 0x78 [X30:type_map]
    unsigned int u32_7B;  // 0x7B
    unsigned int visibilityFlags;  // 0x7C
    unsigned int u32_7F;  // 0x7F
    bool needsRedraw;  // 0x80
    bool inLimbo;  // 0x81
    bool inOpenToppedTransport;  // 0x82
    bool isSelected;  // 0x83
    bool hasParachute;  // 0x84
    unsigned char alignmentPadding85;  // 0x85
    AnimClass* parachute;  // 0x88
    unsigned int q08A;  // 0x8A
    unsigned int q08B;  // 0x8B
    bool onBridge;  // 0x8C
    bool isFallingDown;  // 0x8D
    bool wasFallingDown;  // 0x8E
    bool isBomb;  // 0x8F
    bool isAliveFlag;  // 0x90
    unsigned char alignmentPadding91;  // 0x91
    unsigned int lastLayer;  // 0x94
    bool isInLogic;  // 0x98
    void* unknown_libname_27;  // 0x0 (no offset truth)
    static int sub_770E70(void *aP0, ObjectClass * aP1, ObjectClass * aP2, ObjectClass, void * aP3);  // A_c2039 R5 static-form sync
    static int sub_550080(void *aP0, ObjectClass ** Block);  // A_c2039 R5 static-form sync
    char sub_47A2D0(DWORD BytesReturned);  // A_c2039 R5 static-form sync
    char sub_47A1B0(DWORD BytesReturned);  // A_c2039 R5 static-form sync
    void* Constructor;  // 0x0 (no offset truth)
    void sub_47A080(DWORD a2);  // A_c2039 R5 static-form sync
    static int SaveToStream_Common(void *aP0, IPersistStream * a0, FootClass * aP1, struct IPersistStreamVtbl * a2);  // A_c2039 R5 static-form sync
    static int ProductionCompletionCallback(void *aP0, void * aP1);  // A_c2039 R5 static-form sync
    static int LoadFromStream_Common(void *aP0, FootClass * aP1, LPSTREAM pStm);  // A_c2039 R5 static-form sync
    void* IsCliffWall_ph;  // 0x0 (no offset truth)  // w18j3: filler renamed (no offset truth; canon ObjectClass::IsCliffWall is a method)
    static unsigned int IsCliffWall(ObjectClass *p_this);  // x4:ida@0x4ca130
    void* IsBelowScreen_ph;  // 0x0 (no offset truth)  // w18j3: filler renamed (no offset truth; canon ObjectClass::IsBelowScreen is a method)
    static unsigned int IsBelowScreen(IUnknown *p_this);  // x4:ida@0x5f6b60
    static int HasLinkedObject(int aP0);  // A_c2039 R5 static-form sync
    int DrawPowerBarForPlayers(void *aP0, HWND hDlg);  // A_c2039 R5 static-form sync
    static int CreateUnitOnCompletion(void *aP0, void * aP1);  // A_c2039 R5 static-form sync
    bool isVisible;  // 0x99
    unsigned char alignmentPadding99;  // 0x9A
    char location[12];  // 0x9C
    void* q0A0;  // 0xA0
    unsigned char q0A1;  // 0xA1
    unsigned int u32_A2;  // 0xA2
    unsigned char q0A3;  // 0xA3
    void* q0A4;  // 0xA4
    unsigned int u32_A5;  // 0xA5
    unsigned int u32_A6;  // 0xA6
    LineTrail* lineTrailer;  // 0xA8
    unsigned char q0A9;  // 0xA9
    unsigned char q0AA;  // 0xAA
    unsigned int q0AB;  // 0xAB
    int GetLandHeight();  // 0x5f5f00
    int  SetTriggerTarget(int a2);  // 0x485250
    int updateStateFlags();  // 0x4e02c0
    int processDeath();  // 0x74cd60
    char  SpawnInfantry(int a2, int16_t * a3, int16_t * a4, void ** a5);  // 0x4d7d50
    int processPointerInvalid();  // 0x483610
    int  SetAnim(int a2);  // 0x5f6060
    int GetSizeMax();  // 0x4103e0
    int processDamage();  // 0x6a5000
    void* vtable0;  // 0x0 (no offset truth)
    void* AbstractClass;  // 0x0 (no offset truth)
    void* ResizeEx;  // 0x0 (no offset truth)
    bool IsInitialized;  // 0x12
    int HouseClass__vt_02_(void *aP0, int a2, unsigned int * a3);  // A_c2039 R5 static-form sync
    void* ClearAndFree3;  // 0x0 (no offset truth)
    int  SetPositionXY(int a2, int a3);  // 0x4e1a40
    unsigned int *  Init(int a2);  // 0x5f3b50
    int IsHeightAboveThreshold();  // 0x5f6b90
    int  DistanceTo(int a2);  // 0x5f6360
    int *  CalcTargetFacing(int * a2, int a3);  // 0x5f3db0
    unsigned int * ctor();  // 0x5f3900
    unsigned char ShapeButtonClass_field_0x04;  // 0x4
    int  StepCleanup(void * a2);  // 0x5f3e50
    int ClearFlags2();  // 0x401170
    void* vt_GameOption;  // 0x0 (no offset truth)
    void* vt_FlagGameOption;  // 0x0 (no offset truth)
    void* vt_Campaign;  // 0x0 (no offset truth)
    void* vftable;  // 0x0 (no offset truth)
    void* GameOption;  // 0x0 (no offset truth)
    void* Conflict;  // 0x0 (no offset truth)
    void* CampaignProperties;  // 0x0 (no offset truth)
    int PreDraw();  // 0x6d0f00
    int Cleanup();  // 0x402220
    int FreeResources();  // 0x5f1960
    int Dtor();  // 0x5f3b80
    int Undeploy();  // 0x5f4d30
    char  SetReference(int a2);  // 0x5f5b50
    unsigned char ShapeButtonClass_field_0x08;  // 0x8
    void sub_550080(ObjectClass ** Block);
    int DrawPowerBarForPlayers(HWND hDlg);
    void unknown_libname_73();
    gamemd::AbstractClass * * sub_7BC580(ObjectClass * aP1, double a3);
    char _do_always_noconv_codecvt_base_std__MBE_NXZ_7();
    void nullsub_7();
    char _do_always_noconv_codecvt_base_std__MBE_NXZ_3();
    void sub_770E70(ObjectClass * aP1, ObjectClass * aP2, ObjectClass, void * aP3);
    int CheckCellFlags(int a1, int a2, int * a3, unsigned char * a4, unsigned int * a5);
    static int LoadFromStream_Common(FootClass * aP0, LPSTREAM pStm);
    int SaveToStream_Common(IPersistStream * a0, FootClass * aP1, struct IPersistStreamVtbl * a2);
    void* * FindPlacementCell(FootClass * aP0, int aP1, IUnknown ** a2, int a4, int a5, char a6);
    void ObjectClass_IsHeightAboveThreshold_0();
    gamemd::AbstractClass * * BuildTransform(unsigned int * a1, float * a2, unsigned int * a3);
    void ObjectClass_GetTypeVt40_0();
    void ObjectClass_GetTypeVt41_0();
    void * checkLimbo();
    int DropAsBomb_Track();
    int GetBoundsRect();
    gamemd::AbstractClass * * Deploy();
    void sub_401580(void ** Block);
    void sub_401B00(int * Block);
    void sub_401FB0();
    int sub_401FC0();
    void sub_402020();
    void sub_402430();
    void * sub_402440(int a1, int a2);
    char _do_always_noconv_codecvt_base_std__MBE_NXZ_20();
    void nullsub_5();
    int nullsub_28();
    void nullsub_29();
    void nullsub_86();
    int nullsub_84();
    gamemd::AbstractClass * * sub_764A20();
    int sub_632A70(int a2, int a3, ObjectClass * aP3);
    void nullsub_51();
    void sub_403810(int (*)(void));
    void sub_4038E0(int64_t a2);
    int sub_405490();
    int sub_407160();
    unsigned int * sub_408460(size_t Size);
    void ** sub_40B010(void ** Block, char a2);
    int nullsub_57();
    ObjectClass * sub_40E4A0(void ** Block, char a2);
    gamemd::AbstractClass * * Destroy2();
    char sub_776670(LPARAM lParam);
    LONG sub_777F90(HWND hWnd);
    bool sub_77D350(ObjectClass * String1);
    bool sub_77D3A0(ObjectClass * String1);
    char _do_always_noconv_codecvt_base_std__MBE_NXZ_18();
    void unknown_libname_35();
    void nullsub_143();
    void nullsub_69();
    char _do_always_noconv_codecvt_base_std__MBE_NXZ_23();
    int UpdateProductionDisplay();
    int GetBoundingSize();
    int resetObjectState(SidebarClass * aP1);
    ConvertClass * * CleanupSidebarResources();
    unsigned char ToggleSidebarDisplay(unsigned int * a0, TabClass * aP1, int a3, int _20, SidebarClass * a4, char a6);
    void* FindPlacementPosition(int a2, int a3, int a4, int a5);
    void ObjectClass_GetTypeVt40_2();
    void ObjectClass_GetTypeVt41_2();
    int GetMember06();
    int GetCoordsThunk2();
    int COMStub_108();
    char GetStateFlag();
    int GetMember09();
    int InputThunkA();
    int InputThunkB();
    int GetWidth();
    int updateMissionState(int a2);
    unsigned int * ComputeScreenYOffset(BuildingTypeClass * aP0, unsigned int * a1);
    char SetDeployState(ObjectClass * aP0, char a2);
    int GetZAboveGround();
    int GetCell();
    int IsAboveScreenMargin();
    int CreateInstance();
    int checkHealth();
    unsigned int * updateAnimation(char a2);
    int FindOwner(unsigned int * a0, AnimClass * aP1);
    int setTarget(int a2);
    unsigned int * clearTarget(char a2);
    unsigned int * loc_7A2E70(HWND hWnd, unsigned int a2, int a3, unsigned int a4);
    char _do_always_noconv_codecvt_base_std__MBE_NXZ_5();
    int DumpAudioDeviceDebug(void (__thiscall *a2)(char *), int a1);

    int CreateInstanceCOM(LPVOID * ppv, IID * rclsid, ILocomotion * aP2, DWORD dwClsContext);  // G42.39 supply

    int COMStub_48DEB0();  // G42.39 supply

    char* BuildResultPacket(char * Destination, char * Source, IUnknown * aP2);  // G42.39 supply

    char* TerrainInitMap(char * Destination, RandomStruct * aP1, IUnknown * aP2);  // G42.39 supply
    void j_DeleteAndZero();
    void nullsub_126();
    void unknown_libname_74();
    unsigned int q_20;  // +0x20 flat supply (CSP-fed)
    unsigned int q_B0;  // +0xB0 flat supply (CSP-fed)
    unsigned int q_120;  // +0x120 flat supply (CSP-fed)
    unsigned int q_170;  // +0x170 flat supply (CSP-fed)
    unsigned int q_180;  // +0x180 flat supply (CSP-fed)
    unsigned int q_1C0;  // +0x1C0 flat supply (CSP-fed)
    unsigned int q_1D0;  // +0x1D0 flat supply (CSP-fed)
    void* q_1F0;  // +0x1F0 flat supply (CSP-fed) [X30:type_map]
    unsigned int q_200;  // +0x200 flat supply (CSP-fed)
    void* q_2B0;  // +0x2B0 flat supply (CSP-fed) [X30:type_map]
    unsigned int q_5B0;  // +0x5B0 flat supply (CSP-fed)
    unsigned int q_610;  // +0x610 flat supply (CSP-fed)
    unsigned int q_F20;  // +0xF20 flat supply (CSP-fed)
    unsigned int q_1200;  // +0x1200 flat supply (CSP-fed)
    int  sub_4F2280(int a2, int a3);  // 0x4F2280
    int  sub_4F26E0(int a2);  // 0x4F26E0
    int  sub_4F2770(int a2);  // 0x4F2770
    int  sub_5CE0C0(int a2, unsigned int * a3);  // 0x5CE0C0
    int  sub_632D60(int a2);  // 0x632D60
    void sub_633B20();  // 0x633B20
    int sub_633B30();  // 0x633B30
    int sub_633B40();  // 0x633B40
    int sub_633B70();  // 0x633B70
    int sub_633B80();  // 0x633B80
    int sub_634700();  // 0x634700
    int  sub_6347A0(int a2);  // 0x6347A0
    int sub_635210();  // 0x635210
    int sub_69B690();  // 0x69B690
    char sub_726780();  // 0x726780
    char  sub_728540(int a2);  // 0x728540
    char sub_736C10();  // 0x736C10
    int sub_77D3F0();  // 0x77D3F0
    // --- W16G3 supply (BEGIN) ---
    char __pad_524[340];  // 0x524 vocab (elem [336] @0x5f41bd) (W16G3 raw-usage vocab)
unsigned int field_520;  // 0x520 [X35-L7 kind=unsigned int]
    char isBerserk[4];  // @0x4d7d58 elem[0] (W16G3 raw-usage vocab)
    unsigned int rockerLinkedUnit;  // @0x4d7d65 (W16G3 raw-usage vocab)
    // --- W16G3 supply (END) ---


    unsigned char AudioController_1A0[4];  /* AudioController */  // X10 supply (member_lookup)
    unsigned char AudioController_1B4[4];  /* AudioController */  // X10 supply (member_lookup)
    void* q140;  // X10 supply (member_lookup)
#if !defined(GAMEMD_TREE_UNIVERSE) && !defined(GAMEMD_E4_VECTOR_TREE_TRUTH)
    VectorClass* q16C;  // X10 supply (member_lookup)
#else
    void* q16C;  // X10 supply (member_lookup)  // X27: template-carrier
#endif  // X27: template-carrier universe fallback
    IUnknown* q1E4;  // X10 supply (member_lookup)
    IUnknown* q28C;  // X10 supply (member_lookup)
    unsigned char q3DB;  // X10 supply (member_lookup)
    unsigned short u16_80E;  // X10 supply (member_lookup)
    unsigned int u32_100;  // X10 supply (member_lookup)
    unsigned int u32_13C;  // X10 supply (member_lookup)
    unsigned int u32_158;  // X10 supply (member_lookup)
    unsigned int u32_1BC;  // X10 supply (member_lookup)
    unsigned int u32_20000;  // X10 supply (member_lookup)
    unsigned int u32_20004;  // X10 supply (member_lookup)
    unsigned int u32_2840;  // X10 supply (member_lookup)
    unsigned int u32_284C;  // X10 supply (member_lookup)
    int u32_294;  // X10 supply (member_lookup)
    unsigned int u32_2D4;  // X10 supply (member_types)
    unsigned int u32_5D4;  // X10 supply (member_lookup)
    unsigned int u32_674;  // X10 supply (member_lookup)
    unsigned int u32_D;  // X10 supply (member_lookup)
    unsigned int u32_E10;  // X10 supply (member_lookup)
    unsigned int u32_E18;  // X10 supply (member_lookup)
    unsigned char u8_28A;  // X10 supply (member_lookup)

    unsigned int u32_BC;  // X10 supply (member_lookup)
    unsigned int AbstractClass_1;  // [X30:default]
    unsigned int AmbientDamage;  // [X30:default]
    unsigned int AreaFire;  // [X30:default]
    unsigned int AssaultAnim;  // [X30:default]
    unsigned int AttachedParticleSystem;  // [X30:default]
    unsigned int Bright;  // [X30:default]
    unsigned int Burst;  // [X30:default]
    unsigned int CellRangefinding;  // [X30:default]
    unsigned int Charges;  // [X30:default]
    unsigned int Coord_9C;  // [X30:default]
    unsigned int DecloakToFire;  // [X30:default]
    unsigned int DisguiseFakeBlinkTime;  // [X30:default]
    unsigned int DisguiseFireOnly;  // [X30:default]
    unsigned int DistributedWeaponFire;  // [X30:default]
    unsigned int DownReport;  // [X30:default]
    unsigned int DrainWeapon;  // [X30:default]
    unsigned int DrawBoltAsLaser;  // [X30:default]
    unsigned int FireInTransport;  // [X30:default]
    unsigned int FireOnce;  // [X30:default]
    unsigned int FireWhileMoving;  // [X30:default]
    unsigned int HouseClass_6C;  // [X30:default]
    unsigned int InfiniteMindControl;  // [X30:default]
    unsigned int IonSensitive;  // [X30:default]
    unsigned int IsAlternateColor;  // [X30:default]
    unsigned int IsBigLaser;  // [X30:default]
    unsigned int IsElectricBolt;  // [X30:default]
    unsigned int IsHouseColor;  // [X30:default]
    unsigned int IsLaser;  // [X30:default]
    unsigned int IsLine;  // [X30:default]
    unsigned int IsMagBeam;  // [X30:default]
    unsigned int IsRadBeam;  // [X30:default]
    unsigned int IsRadEruption;  // [X30:default]
    unsigned int IsRailgun;  // [X30:default]
    unsigned int IsSonic;  // [X30:default]
    unsigned int LaserDuration;  // [X30:default]
    unsigned int LaserInnerColor;  // [X30:default]
    unsigned int LaserOuterColor;  // [X30:default]
    unsigned int LaserOuterSpread;  // [X30:default]
    unsigned int LimboLaunch;  // [X30:default]
    unsigned int Lobber;  // [X30:default]
    unsigned int MigAttackCursor;  // [X30:default]
    unsigned int MinimumRange;  // [X30:default]
    unsigned int NeverUse;  // [X30:default]
    unsigned int OccupantAnim;  // [X30:default]
    unsigned int OmniFire;  // [X30:default]
    unsigned int OpenToppedAnim;  // [X30:default]
    unsigned int ROF;  // [X30:default]
    unsigned int RadLevel;  // [X30:default]
    unsigned int Range;  // [X30:default]
    unsigned int Report;  // [X30:default]
    unsigned int RevealOnFire;  // [X30:default]
    unsigned int SabotageCursor;  // [X30:default]
    unsigned int Spawner;  // [X30:default]
    unsigned int Speed;  // [X30:default]
    unsigned int Suicide;  // [X30:default]
    unsigned int Supress;  // [X30:default]
    unsigned int TerrainFire;  // [X30:default]
    unsigned int TurboBoost;  // [X30:default]
    unsigned int UseFireParticles;  // [X30:default]
    unsigned int UseSparkParticles;  // [X30:default]
    int __pad_00C;  // 0xC [X30:type_map]
    bool __pad_014;  // 0x14 [X30:type_map]
    unsigned int __pad_14D;  // 0x14D [X30:default]
    unsigned int a2;  // [X30:default]
    ObjectClass* ptr_10;  // 0x10 [X30:type_map]
    ObjectClass* ptr_18;  // 0x18 [X30:type_map]
    String* ptr_8;  // 0x8 [X30:type_map]
    void* q000;  // 0x0 [X30:type_map]
    void* q004;  // 0x4 [X30:type_map]
unsigned int q100;  // 0x100 [X35-L7 kind=unsigned int]
unsigned int q104;  // 0x104 [X35-L7 kind=unsigned int]
unsigned int q118;  // 0x118 [X35-L7 kind=unsigned int]
    int q120;  // 0x120 [X30:type_map]
unsigned int q124;  // 0x124 [X35-L7 kind=unsigned int]
unsigned int q128;  // 0x128 [X35-L7 kind=unsigned int]
    int q12C;  // 0x12C [X30:type_map]
unsigned int q130;  // 0x130 [X35-L7 kind=unsigned int]
unsigned int q134;  // 0x134 [X35-L7 kind=unsigned int]
    int q138;  // 0x138 [X30:type_map]
    int q13C;  // 0x13C [X30:type_map]
    unsigned int q146;  // 0x146 [X30:member_lookup]
unsigned int q148;  // 0x148 [X35-L7 kind=unsigned int]
    int q150;  // 0x150 [X30:type_map]
    unsigned int q151;  // 0x151 [X30:member_lookup]
    bool q152;  // 0x152 [X30:member_lookup]
    bool q153;  // 0x153 [X30:member_lookup]
unsigned int q154;  // 0x154 [X35-L7 kind=unsigned int]
    void* q156;  // 0x156 [X30:member_lookup]
unsigned int q158;  // 0x158 [X35-L7 kind=unsigned int]
    int q15C;  // 0x15C [X30:type_map]
    unsigned char q16D;  // 0x16D [X30:member_lookup]
    int q170;  // 0x170 [X30:type_map]
    int q174;  // 0x174 [X30:type_map]
    bool q175;  // 0x175 [X30:member_lookup]
    unsigned int q176;  // 0x176 [X30:default]
    unsigned char q1E0;  // 0x1E0 [X30:member_lookup]
    unsigned int q45C;  // 0x45C [X30:default]
unsigned int u32_144;  // 0x144 [X35-L7 kind=unsigned int]
    int u32_14C;  // 0x14C [X30:type_map]
    int u32_178;  // 0x178 [X30:type_map]
    int u32_17C;  // 0x17C [X30:type_map]
    int u32_180;  // 0x180 [X30:type_map]
    int u32_184;  // 0x184 [X30:type_map]
unsigned int u32_188;  // 0x188 [X35-L7 kind=unsigned int]
    int u32_1C4;  // 0x1C4 [X30:type_map]
    int u32_1C8;  // 0x1C8 [X30:type_map]
    int u32_98;  // 0x98 [X30:type_map]
    int u32_A4;  // 0xA4 [X30:type_map]
    int u32_F8;  // 0xF8 [X30:type_map]
    int u32_FC;  // 0xFC [X30:type_map]
    unsigned char u8_145;  // 0x145 [X30:member_lookup]
    unsigned int u8_147;  // 0x147 [X30:default]
    unsigned int u8_149;  // 0x149 [X30:default]
    unsigned int u8_14A;  // 0x14A [X30:default]
    unsigned int u8_14B;  // 0x14B [X30:default]
    unsigned int u8_14E;  // 0x14E [X30:default]
    unsigned int u8_14F;  // 0x14F [X30:default]
    unsigned int u8_155;  // 0x155 [X30:default]
    unsigned int u8_157;  // 0x157 [X30:default]
    unsigned int u8_159;  // 0x159 [X30:default]
    unsigned int u8_15A;  // 0x15A [X30:default]
    unsigned int u8_15B;  // 0x15B [X30:default]
    unsigned int u8_16E;  // 0x16E [X30:default]
    unsigned int u8_177;  // 0x177 [X30:member_lookup]
    unsigned char u8_179;  // 0x179 [X30:member_lookup]
    unsigned int u8_17A;  // 0x17A [X30:default]
    bool u8_17B;  // 0x17B [X30:member_lookup]
    unsigned int vfptr1;  // [X30:default]
    unsigned int vfptr2;  // [X30:default]
    unsigned int vfptr3;  // [X30:default]
};
#endif // GAMEMD_TREE_UNIVERSE

#ifndef GAMEMD_TREE_UNIVERSE  // G42.35a: tree TU real class supplied elsewhere
// G42.55 absorbed: single truth is ReferenceCounted

#endif  // GAMEMD_TREE_UNIVERSE (ReferenceCounted)

#ifndef GAMEMD_TREE_UNIVERSE  // G42.35a: tree TU real class supplied elsewhere
struct ShapeButtonClass {
    void* vfptr;
    static int Destructor(void *aP1);
    unsigned int ShapeButtonClass_field_0x04;  // 0x4
    unsigned int ShapeButtonClass_field_0x08;  // 0x8
    void* Constructor_ph;  // 0x0 (no offset truth)  // w18j3: filler renamed (no offset truth; canon ShapeButtonClass::Constructor is a method)
    static unsigned int Constructor(int p0, int p1, int p2, int p3, int p4, int p5, char p6);  // x4:signals@0x69dd30
    unsigned char __pad_004;  // 0x4 [X30:canon]
    char __pad_0[4];  // 0x0 [X30:member_lookup]
    char vtable1[4];  // 0x0 [X30:member_lookup]
};
#endif  // GAMEMD_TREE_UNIVERSE (ShapeButtonClass)

struct State {
    void* vfptr;
    int Players;  // 0x4
    static int SetIfChanged(void *aP1, int a2);
    int AIPlayers;  // 0x8
    int GameSpeed;  // 0xC
    int StartingCredits;  // 0x10
    bool SuperWeapons;  // 0x14
    bool BuildOffAlly;  // 0x15
    bool FogOfWar;  // 0x16
    void* ConstructorWithVtable;  // 0x0 (no offset truth)
    void* CleanupTyped;  // 0x0 (no offset truth)
    bool MCVRedeploys;  // 0x17
    bool AlliesAllowed;  // 0x18
    bool ShortGame;  // 0x19
    bool Crates;  // 0x1A
    bool MultiEngineer;  // 0x1B
    bool Bridies;  // 0x1C
    int ScenIndex;  // 0x20
    int MapIndex;  // 0x24
    void* vtable1;  // 0x0
    void* Cleanup3;  // 0x0 (no offset truth)
    int LastSave;  // 0x28
    void* vt_Anim;  // 0x0 (no offset truth)
    unsigned char __pad_000;  // 0x0 [X30:canon]
    unsigned char __pad_01D;  // 0x1D [X30:canon]
    unsigned char __pad_02C;  // 0x2C [X30:canon]
};

#if !defined(GAMEMD_TREE_UNIVERSE) && !defined(GAMEMD_E4_VECTOR_TREE_TRUTH)
struct VectorClass {
    static void Cleanup3(int a1);  // [w14e3] raw 0x5EED00 void __thiscall VectorClass_Cleanup3
    static void * CopyConstructor(void *aP1, void *a2);
    static char PushBack(void *aP1, void *a2);

    static unsigned int *  ConstructorWithVtable(int a2, int a3);  // 0x45AD80

    void* ClearAndFree2_ph;  // 0x0 (no offset truth)  // w18j3: filler renamed (no offset truth; canon VectorClass::ClearAndFree2 is a method)
    static unsigned int ClearAndFree2(int p_this);  // x4:ida@0x4a10a0
    void* vfptr;
    unsigned int tail_E;  // 0xE
    int Shrink();  // 0x7ae730
    unsigned int *  CopyBuilding(unsigned int * a2);  // 0x67b180
    int  Append(unsigned int * a2);  // 0x63e540
    unsigned int *  WstringConstructor(int a2, unsigned int * a3);  // 0x69d7c0
    unsigned int *  BuildingTypeConstructor(int a2, int a3);  // 0x5105a0
    int  RemoveItem(int a2);  // 0x55bae0
    int Cleanup2();  // 0x63e140
    unsigned int *  ConstructHSV(int a2, int a3);  // 0x628df0
    int  RemoveAt(int a2);  // 0x6ce2d0
    int  EraseAt(int a2);  // 0x63e900
    unsigned int *  CopyDefault(unsigned int * a2);  // 0x525060
    int Destroy();  // 0x477d20
    bool IsAllocated;  // 0x13
    int GetCount();  // 0x49fb60
    unsigned int *  CellConstructor(int a2, int a3);  // 0x42fcb0
    void* vtable0;  // 0x0 (no offset truth)
    unsigned int *  BuildingConstructor(int a2, int a3);  // 0x510550
    AbstractClass * * HouseClass__vt_02_(int a2, unsigned int * a3);
    // --- W16G3 supply (BEGIN) ---
    static int CleanupTyped(int aP1);
    static int ClearAndFree3(int aP1);
    static int ClearAndFree4(int aP1);
    static int ResizeEx(void *aP1, int a2, int a3);
    static int Cleanup(void *aP1);
    // --- W16G3 supply (END) ---


    void* q010;  // X10 supply (member_lookup)
    unsigned int u32_14;  // X10 supply (member_lookup)
    void* Items;  // 0x4 [X30:type_map]
    AbstractClass* Capacity;  // 0x8 [X30:type_map]
    int IsInitialized;  // 0xC [X30:type_map]
unsigned int VectorClass_18;  // 0x18 [X35-L7 kind=unsigned int]
};
#endif

#ifndef GAMEMD_TREE_UNIVERSE  // G42.35a: tree TU real class supplied elsewhere

#endif  // GAMEMD_TREE_UNIVERSE (VectorCursor_uint_DynamicVectorClass_uint)

#ifndef GAMEMD_TREE_UNIVERSE  // G42.35a: tree TU real class supplied elsewhere
struct WorldDominationTour {
    void* vfptr;
    void* vt_GameOption;  // 0x0 (no offset truth)
    void* vt_FlagGameOption;  // 0x0 (no offset truth)
    void* CampaignProperties;  // 0x0 (no offset truth)
    void* Conflict;  // 0x0 (no offset truth)
    void* GameOption;  // 0x0 (no offset truth)
    unsigned int tail_0;  // 0x0 [X30:canon]
};
#endif  // GAMEMD_TREE_UNIVERSE (WorldDominationTour)

#ifndef GAMEMD_E4_OWNS_UNDERSCORE  // G42.36: struct _ dedup pair (first include wins)
#define GAMEMD_TREE_OWNS_UNDERSCORE 1
struct _ {
    void* vfptr;
    unsigned int u32_C;  // 0xC
    unsigned char q084;  // 0x84
    unsigned char q774;  // 0x774
    unsigned char q1908;  // 0x1908
    unsigned char q6408;  // 0x6408
    // G42.38d: receiver `gamemd::_` member supplies (defs in VectorClass_e4.cpp T9 stubs)
    unsigned int * CellConstructor(int a2, int a3);
    unsigned int * Copy(unsigned int *a2);
    unsigned int * Construct(int a2, int a3);
    int Destroy();
    unsigned int * BuildingConstructor(int a2, int a3);
    unsigned int * BuildingTypeConstructor(int a2, int a3);
    unsigned int * CopyDefault(unsigned int *a2);
    int RemoveItem(int a2);
    unsigned int * ConstructHSV(int a2, int a3);
    int Cleanup2();
    int Append(unsigned int *a2);
    int EraseAt(int a2);
    unsigned int * CopyBuilding(unsigned int *a2);
    unsigned int * WstringConstructor(int a2, unsigned int *a3);
    int RemoveAt(int a2);
    int Shrink();
    void* Items;  // 0x4 [X30:canon]
    int Capacity;  // 0x8 [X30:canon]
    bool IsAllocated;  // 0xD [X30:canon]
};
#endif  // GAMEMD_E4_OWNS_UNDERSCORE



struct _BlitPlainXlatZReadWrite_G;  // supplied (R_fix): ?$Blit*@G mangled-template family, fnptr cast annotation carrier
struct _BlitPlainXlatZRead_G;  // supplied (R_fix): ?$Blit*@G mangled-template family, fnptr cast annotation carrier
struct _BlitPlainXlat_G;  // supplied (R_fix): ?$Blit*@G mangled-template family, fnptr cast annotation carrier
struct _BlitTransDarkenZReadWrite_G;  // supplied (R_fix): ?$Blit*@G mangled-template family, fnptr cast annotation carrier
struct _BlitTransDarkenZRead_G;  // supplied (R_fix): ?$Blit*@G mangled-template family, fnptr cast annotation carrier
struct _BlitTransDarken_G;  // supplied (R_fix): ?$Blit*@G mangled-template family, fnptr cast annotation carrier
struct _BlitTransLucent25ZReadWarp_G;  // supplied (R_fix): ?$Blit*@G mangled-template family, fnptr cast annotation carrier
struct _BlitTransLucent25ZReadWrite_G;  // supplied (R_fix): ?$Blit*@G mangled-template family, fnptr cast annotation carrier
struct _BlitTransLucent25ZRead_G;  // supplied (R_fix): ?$Blit*@G mangled-template family, fnptr cast annotation carrier
struct _BlitTransLucent25_G;  // supplied (R_fix): ?$Blit*@G mangled-template family, fnptr cast annotation carrier
struct _BlitTransLucent50ZReadWarp_G;  // supplied (R_fix): ?$Blit*@G mangled-template family, fnptr cast annotation carrier
struct _BlitTransLucent50ZReadWrite_G;  // supplied (R_fix): ?$Blit*@G mangled-template family, fnptr cast annotation carrier
struct _BlitTransLucent50ZRead_G;  // supplied (R_fix): ?$Blit*@G mangled-template family, fnptr cast annotation carrier
struct _BlitTransLucent50_G;  // supplied (R_fix): ?$Blit*@G mangled-template family, fnptr cast annotation carrier
struct _BlitTransLucent75ZReadWarp_G;  // supplied (R_fix): ?$Blit*@G mangled-template family, fnptr cast annotation carrier
struct _BlitTransLucent75ZReadWrite_G;  // supplied (R_fix): ?$Blit*@G mangled-template family, fnptr cast annotation carrier
struct _BlitTransLucent75ZRead_G;  // supplied (R_fix): ?$Blit*@G mangled-template family, fnptr cast annotation carrier
struct _BlitTransLucent75_G;  // supplied (R_fix): ?$Blit*@G mangled-template family, fnptr cast annotation carrier
struct _BlitTransXlatAlphaZRead_G;  // supplied (R_fix): ?$Blit*@G mangled-template family, fnptr cast annotation carrier
struct _BlitTransXlatAlpha_G;  // supplied (R_fix): ?$Blit*@G mangled-template family, fnptr cast annotation carrier
struct _BlitTransXlatWriteAlpha_G;  // supplied (R_fix): ?$Blit*@G mangled-template family, fnptr cast annotation carrier
struct _BlitTransXlatZReadWrite_G;  // supplied (R_fix): ?$Blit*@G mangled-template family, fnptr cast annotation carrier
struct _BlitTransXlatZRead_G;  // supplied (R_fix): ?$Blit*@G mangled-template family, fnptr cast annotation carrier
struct _BlitTransXlat_G;  // supplied (R_fix): ?$Blit*@G mangled-template family, fnptr cast annotation carrier
struct _BlitTransZRemapXlatZReadWrite_G;  // supplied (R_fix): ?$Blit*@G mangled-template family, fnptr cast annotation carrier
struct _BlitTransZRemapXlatZRead_G;  // supplied (R_fix): ?$Blit*@G mangled-template family, fnptr cast annotation carrier
struct _BlitTransZRemapXlat_G;  // supplied (R_fix): ?$Blit*@G mangled-template family, fnptr cast annotation carrier
struct _BlitTrans_G;  // supplied (R_fix): ?$Blit*@G mangled-template family, fnptr cast annotation carrier
struct _BlitTranslucent50NonzeroAlpha_G;  // supplied (R_fix): ?$Blit*@G mangled-template family, fnptr cast annotation carrier
struct _BlitTranslucent50ZeroAlpha_G;  // supplied (R_fix): ?$Blit*@G mangled-template family, fnptr cast annotation carrier
struct _BlitTranslucentWriteAlpha_G;  // supplied (R_fix): ?$Blit*@G mangled-template family, fnptr cast annotation carrier
struct _DynamicVectorClass_G;  // supplied (R_fix): ?$Blit*@G mangled-template family, fnptr cast annotation carrier
struct _RLEBlitTransDarkenZReadWrite_G;  // supplied (R_fix): ?$Blit*@G mangled-template family, fnptr cast annotation carrier
struct _RLEBlitTransDarkenZRead_G;  // supplied (R_fix): ?$Blit*@G mangled-template family, fnptr cast annotation carrier
struct _RLEBlitTransDarken_G;  // supplied (R_fix): ?$Blit*@G mangled-template family, fnptr cast annotation carrier
struct _RLEBlitTransLucent25ZReadWarp_G;  // supplied (R_fix): ?$Blit*@G mangled-template family, fnptr cast annotation carrier
struct _RLEBlitTransLucent25ZReadWrite_G;  // supplied (R_fix): ?$Blit*@G mangled-template family, fnptr cast annotation carrier
struct _RLEBlitTransLucent25ZRead_G;  // supplied (R_fix): ?$Blit*@G mangled-template family, fnptr cast annotation carrier
struct _RLEBlitTransLucent25_G;  // supplied (R_fix): ?$Blit*@G mangled-template family, fnptr cast annotation carrier
struct _RLEBlitTransLucent50ZReadWarp_G;  // supplied (R_fix): ?$Blit*@G mangled-template family, fnptr cast annotation carrier
struct _RLEBlitTransLucent50ZRead_G;  // supplied (R_fix): ?$Blit*@G mangled-template family, fnptr cast annotation carrier
struct _RLEBlitTransLucent50_G;  // supplied (R_fix): ?$Blit*@G mangled-template family, fnptr cast annotation carrier
struct _RLEBlitTransLucent75ZReadWarp_G;  // supplied (R_fix): ?$Blit*@G mangled-template family, fnptr cast annotation carrier
struct _RLEBlitTransLucent75ZRead_G;  // supplied (R_fix): ?$Blit*@G mangled-template family, fnptr cast annotation carrier
struct _RLEBlitTransLucent75_G;  // supplied (R_fix): ?$Blit*@G mangled-template family, fnptr cast annotation carrier
struct _RLEBlitTransXlatZReadWrite_G;  // supplied (R_fix): ?$Blit*@G mangled-template family, fnptr cast annotation carrier
struct _RLEBlitTransXlatZRead_G;  // supplied (R_fix): ?$Blit*@G mangled-template family, fnptr cast annotation carrier
struct _RLEBlitTransXlat_G;  // supplied (R_fix): ?$Blit*@G mangled-template family, fnptr cast annotation carrier
struct _RLEBlitTransZRemapXlatAlpha_G;  // supplied (R_fix): ?$Blit*@G mangled-template family, fnptr cast annotation carrier
struct _RLEBlitTransZRemapXlatZReadWrite_G;  // supplied (R_fix): ?$Blit*@G mangled-template family, fnptr cast annotation carrier
struct _RLEBlitTransZRemapXlatZRead_G;  // supplied (R_fix): ?$Blit*@G mangled-template family, fnptr cast annotation carrier
struct _RLEBlitTransZRemapXlat_G;  // supplied (R_fix): ?$Blit*@G mangled-template family, fnptr cast annotation carrier
struct _VectorClass_G;  // supplied (R_fix): ?$Blit*@G mangled-template family, fnptr cast annotation carrier
// ==== G57e1 carrier supply (B4 _tree_full paradigm; truth csp_canon/classes.hpp:115171/405479) ====
// AnimTypeList  size=4  (TiberiumClass_e4.cpp C2027 carrier)
struct AnimTypeList {
    unsigned char q000[4];  // 0x0
    unsigned int tail_0;  // 0x0 [X30:canon]
};
// VoxelAnimTypeVector  size=4  (TechnoTypeClass_e4.cpp C2027 carrier)
struct VoxelAnimTypeVector {
    unsigned int tail_0;  // 0x0 [X30:canon]
};
} // namespace gamemd
