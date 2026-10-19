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
    unsigned char * __pad_0;  // 0x0
    unsigned int q004;  // 0x4
    unsigned int q008;  // 0x8
    int DeactivatePlay();  // 0x402600
};
#endif  // GAMEMD_G2_AudioChannel_DEF

struct CampaignScore {
    unsigned char * __pad_0;  // 0x0
    int __pad_004;  // 0x4
    void * ptr_4;  // 0x8
    int CampaignScore_field_0x0C;  // 0xC
    void * ptr_C;  // 0x10
    int CampaignScore_field_0x14;  // 0x14
    int CampaignScore_field_0x18;  // 0x18
    int CampaignScore_field_0x1C;  // 0x1C
    int CampaignScore_field_0x20;  // 0x20
    static int LoadCampaignScoreAssetsGame(void *aP1);
};

struct DialogControl_OwnerDraw {
    unsigned char __pad_000;  // 0x0
};

#if !defined(GAMEMD_TREE_UNIVERSE) && !defined(GAMEMD_E4_VECTOR_TREE_TRUTH)
struct DynamicVectorClass {
    void* ptr_0;  // 0x0
    void* Items;  // 0x4
    int Capacity;  // 0x8
    bool IsInitialized;  // 0xC
    bool IsAllocated;  // 0xD
    unsigned short tail_E;  // 0xE
    int Count;  // 0x10
    int CapacityIncrement;  // 0x14
    unsigned int *  Construct(int a2, int a3);  // 0x477db0
    static int Destroy_Alt(void *aP0);  // A_c2039 R5 static-form sync
    unsigned int *  Copy(unsigned int * a2);  // 0x4779e0
    unsigned int *  AnimTypeConstructor(int a2, int a3);  // 0x525250
    static int Destroy(void *aP1);
};
#endif

#ifndef GAMEMD_TREE_UNIVERSE  // G42.35a: tree TU real class supplied elsewhere
struct FractalNoise {
    unsigned int tail_0;  // 0x0
    static void Dtor(void *aP0);  // G42.32 R5-style static sync
};
#endif  // GAMEMD_TREE_UNIVERSE (FractalNoise)

struct Gap2Recv_402F60 {
    void* ptr_0;
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
    unsigned char * __pad_0;  // 0x0
    int HashTable_field_0x04;  // 0x4
    unsigned int u32_8;  // 0x8
    unsigned int HashTable_field_0x0C;  // 0xC
    unsigned int HashTable_field_0x10;  // 0x10
    unsigned int q014;  // 0x14
    unsigned int HashTable_field_0x18;  // 0x18
    unsigned int q01C;  // 0x1C
    unsigned int q020;  // 0x20
    unsigned int q024;  // 0x24
    unsigned int q028;  // 0x28
    unsigned int q02C;  // 0x2C
    int HashTable_field_0x30;  // 0x30
    unsigned int q034;  // 0x34
    unsigned int HashTable_field_0x38;  // 0x38
    unsigned int HashTable_field_0x3C;  // 0x3C
    unsigned int HashTable_field_0x40;  // 0x40
    unsigned int HashTable_field_0x44;  // 0x44
    unsigned int HashTable_field_0x48;  // 0x48
    unsigned int HashTable_field_0x4C;  // 0x4C
    unsigned int HashTable_field_0x50;  // 0x50
    static int Shrink2(void *aP0);  // A_c2039 R5 static-form sync
    static int Shrink(void *aP0);
    static int LookupString(void *aP0, const char **a2, unsigned int *a3);  // G42.33 b2 static-form sync
    static int ComputeIndex_2(int *aP1, int aP2);
    static int Grow2(void *aP0);  // A_c2039 R5 static-form sync
    // G57a1: CleanupAndResize/RebuildEx/FindString vocab fields moved to
    // static-method form below -- corpus calls them static-style.
    static int ComputeHash(void *aP0, int a2);  // A_c2039 R5 static-form sync
    static int Rebuild(void *aP0);
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
};
#endif  // GAMEMD_TREE_UNIVERSE (HashTable)

#ifndef GAMEMD_TREE_UNIVERSE  // G42.35a: tree TU real class supplied elsewhere
struct KeywordType {
    unsigned int tail_0;  // 0x0
    static unsigned int FindOrCreate2(char *Source);  // x4:ida@0x524cb0
};
#endif  // GAMEMD_TREE_UNIVERSE (KeywordType)

struct Locomotor {
    int Locomotor_field_00;  // 0x0
    static int GetSpeed(void *aP1);
};

#ifndef GAMEMD_TREE_UNIVERSE  // G42.35a: tree TU real class supplied elsewhere
struct MSAnim {
    void* ptr_0;  // 0x0
    int __pad_004;  // 0x4
    int MSAnim_field_0x08;  // 0x8
    static int Reset(void *aP1, int a2);
    int  GetField(unsigned int a2);  // 0x5cb840
    int  SetField(unsigned int a2);  // 0x5cb860
};
#endif  // GAMEMD_TREE_UNIVERSE (MSAnim)

#ifndef GAMEMD_TREE_UNIVERSE  // G42.35a: tree TU real class supplied elsewhere
struct MSShapeAnim {
    char __pad_0[4];  // 0x0
    int __pad_004;  // 0x4
    static void * Constructor(void *aP1, void *a2, int a3, int a4, int a5, int a6, char a7, int a8);
    int EnableOnce(char aP1);
    MSShapeAnim * * initTrigger(char **aP1, int aP2, int a4, int a5, int a6, int a7, int aP7);
    void ProcessMapEvents(int *a1, int * a2, int a3, int a4, char a5, char a6);
    unsigned int * processTrigger(int a2, int a3);
    unsigned int * checkCondition(int aP1, int aP2);
    int executeActions(int a2);
};
#endif  // GAMEMD_TREE_UNIVERSE (MSShapeAnim)

#ifndef GAMEMD_TREE_UNIVERSE
struct ObjectClass {
    void* ptr_0;  // 0x0
    unsigned int ptr_4;  // 0x4
    unsigned int ptr_8;  // 0x8
    unsigned int ptr_C;  // 0xC
    ObjectClass* uniqueId;  // 0x10
    void* abstractFlags;  // 0x14
    ObjectClass* nextArrayIndex;  // 0x18
    ObjectClass* referenceCount;  // 0x1C
    void* NeedsSaveOrLink;  // 0x20
    unsigned int occupant;  // 0x24
    unsigned int owningHouseIndex;  // 0x28
    int fallRate;  // 0x2C
    ObjectClass* nextObject;  // 0x30
    TagClass* attachedTag;  // 0x34
    BombClass* attachedBomb;  // 0x38
    char ambientSoundController[20];  // 0x3C
    char customSound_controller[20];  // 0x50
    int customSound;  // 0x64
    bool bombVisible;  // 0x68
    char alignmentPadding69[3];  // 0x69
    int health;  // 0x6C
    int estimatedHealth;  // 0x70
    bool isOnMap;  // 0x74
    char alignmentPadding75[3];  // 0x75
    Int4* spawnStatus;  // 0x78
    unsigned int visibilityFlags;  // 0x7C
    bool needsRedraw;  // 0x80
    bool inLimbo;  // 0x81
    bool inOpenToppedTransport;  // 0x82
    bool isSelected;  // 0x83
    bool hasParachute;  // 0x84
    char alignmentPadding85[3];  // 0x85
    AnimClass* parachute;  // 0x88
    bool onBridge;  // 0x8C
    bool isFallingDown;  // 0x8D
    bool wasFallingDown;  // 0x8E
    bool isBomb;  // 0x8F
    bool isAliveFlag;  // 0x90
    char alignmentPadding91[3];  // 0x91
    unsigned int lastLayer;  // 0x94
    bool isInLogic;  // 0x98
    bool isVisible;  // 0x99
    char alignmentPadding99[2];  // 0x9A
    char location[12];  // 0x9C
    LineTrail* lineTrailer;  // 0xA8
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
    static int sub_770E70(void *aP0, ObjectClass * aP1, ObjectClass * aP2, ObjectClass, void * aP3);  // A_c2039 R5 static-form sync
    static int sub_550080(void *aP0, ObjectClass ** Block);  // A_c2039 R5 static-form sync
    char sub_47A2D0(DWORD BytesReturned);  // A_c2039 R5 static-form sync
    char sub_47A1B0(DWORD BytesReturned);  // A_c2039 R5 static-form sync
    void sub_47A080(DWORD a2);  // A_c2039 R5 static-form sync
    static int SaveToStream_Common(void *aP0, IPersistStream * a0, FootClass * aP1, struct IPersistStreamVtbl * a2);  // A_c2039 R5 static-form sync
    static int ProductionCompletionCallback(void *aP0, void * aP1);  // A_c2039 R5 static-form sync
    static int LoadFromStream_Common(void *aP0, FootClass * aP1, LPSTREAM pStm);  // A_c2039 R5 static-form sync
    static unsigned int IsCliffWall(ObjectClass *p_this);  // x4:ida@0x4ca130
    static unsigned int IsBelowScreen(IUnknown *p_this);  // x4:ida@0x5f6b60
    static int HasLinkedObject(int aP0);  // A_c2039 R5 static-form sync
    int DrawPowerBarForPlayers(void *aP0, HWND hDlg);  // A_c2039 R5 static-form sync
    static int CreateUnitOnCompletion(void *aP0, void * aP1);  // A_c2039 R5 static-form sync
    int GetLandHeight();  // 0x5f5f00
    int  SetTriggerTarget(int a2);  // 0x485250
    int updateStateFlags();  // 0x4e02c0
    int processDeath();  // 0x74cd60
    char  SpawnInfantry(int a2, int16_t * a3, int16_t * a4, void ** a5);  // 0x4d7d50
    int processPointerInvalid();  // 0x483610
    int  SetAnim(int a2);  // 0x5f6060
    int GetSizeMax();  // 0x4103e0
    int processDamage();  // 0x6a5000
    int HouseClass__vt_02_(void *aP0, int a2, unsigned int * a3);  // A_c2039 R5 static-form sync
    int  SetPositionXY(int a2, int a3);  // 0x4e1a40
    unsigned int *  Init(int a2);  // 0x5f3b50
    int IsHeightAboveThreshold();  // 0x5f6b90
    int  DistanceTo(int a2);  // 0x5f6360
    int *  CalcTargetFacing(int * a2, int a3);  // 0x5f3db0
    unsigned int * ctor();  // 0x5f3900
    int  StepCleanup(void * a2);  // 0x5f3e50
    int ClearFlags2();  // 0x401170
    int PreDraw();  // 0x6d0f00
    int Cleanup();  // 0x402220
    int FreeResources();  // 0x5f1960
    int Dtor();  // 0x5f3b80
    int Undeploy();  // 0x5f4d30
    char  SetReference(int a2);  // 0x5f5b50
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
    // --- W16G3 supply (END) ---
#if !defined(GAMEMD_TREE_UNIVERSE) && !defined(GAMEMD_E4_VECTOR_TREE_TRUTH)
#else
#endif  // X27: template-carrier universe fallback
};
#endif // GAMEMD_TREE_UNIVERSE

#ifndef GAMEMD_TREE_UNIVERSE  // G42.35a: tree TU real class supplied elsewhere
// G42.55 absorbed: single truth is ReferenceCounted

#endif  // GAMEMD_TREE_UNIVERSE (ReferenceCounted)

#ifndef GAMEMD_TREE_UNIVERSE  // G42.35a: tree TU real class supplied elsewhere
struct ShapeButtonClass {
    char __pad_0[4];  // 0x0
    unsigned int ShapeButtonClass_field_0x04;  // 0x4
    unsigned int ShapeButtonClass_field_0x08;  // 0x8
    static int Destructor(void *aP1);
    static unsigned int Constructor(int p0, int p1, int p2, int p3, int p4, int p5, char p6);  // x4:signals@0x69dd30
};
#endif  // GAMEMD_TREE_UNIVERSE (ShapeButtonClass)

struct State {
#pragma pack(push, 1)  // X60: binary-packed layout
    void* CleanupTyped;  // 0x0
    int Players;  // 0x4
    int AIPlayers;  // 0x8
    int GameSpeed;  // 0xC
    int StartingCredits;  // 0x10
    bool SuperWeapons;  // 0x14
    bool BuildOffAlly;  // 0x15
    bool FogOfWar;  // 0x16
    bool MCVRedeploys;  // 0x17
    bool AlliesAllowed;  // 0x18
    bool ShortGame;  // 0x19
    bool Crates;  // 0x1A
    bool MultiEngineer;  // 0x1B
    bool Bridies;  // 0x1C
    char __pad_01D[3];  // 0x1D
    int ScenIndex;  // 0x20
    int MapIndex;  // 0x24
    int LastSave;  // 0x28
    unsigned long long __pad_02C;  // 0x2C
    int align_34;  // 0x34
    static int SetIfChanged(void *aP1, int a2);
#pragma pack(pop)
};

#if !defined(GAMEMD_TREE_UNIVERSE) && !defined(GAMEMD_E4_VECTOR_TREE_TRUTH)
struct VectorClass {
    void* ptr_0;  // 0x0
    void* Items;  // 0x4
    AbstractClass* Capacity;  // 0x8
    char IsInitialized[1];  // 0xC
    char IsAllocated[1];  // 0xD
    unsigned short tail_E;  // 0xE
    static void Cleanup3(int a1);  // [w14e3] raw 0x5EED00 void __thiscall VectorClass_Cleanup3
    static void * CopyConstructor(void *aP1, void *a2);
    static char PushBack(void *aP1, void *a2);
    static unsigned int *  ConstructorWithVtable(int a2, int a3);  // 0x45AD80
    static unsigned int ClearAndFree2(int p_this);  // x4:ida@0x4a10a0
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
    int GetCount();  // 0x49fb60
    unsigned int *  CellConstructor(int a2, int a3);  // 0x42fcb0
    unsigned int *  BuildingConstructor(int a2, int a3);  // 0x510550
    AbstractClass * * HouseClass__vt_02_(int a2, unsigned int * a3);
    // --- W16G3 supply (BEGIN) ---
    static int CleanupTyped(int aP1);
    static int ClearAndFree3(int aP1);
    static int ClearAndFree4(int aP1);
    static int ResizeEx(void *aP1, int a2, int a3);
    static int Cleanup(void *aP1);
    // --- W16G3 supply (END) ---
};
#endif

#ifndef GAMEMD_TREE_UNIVERSE  // G42.35a: tree TU real class supplied elsewhere

#endif  // GAMEMD_TREE_UNIVERSE (VectorCursor_uint_DynamicVectorClass_uint)

#ifndef GAMEMD_TREE_UNIVERSE  // G42.35a: tree TU real class supplied elsewhere
struct WorldDominationTour {
    unsigned int tail_0;  // 0x0
};
#endif  // GAMEMD_TREE_UNIVERSE (WorldDominationTour)

#ifndef GAMEMD_E4_OWNS_UNDERSCORE  // G42.36: struct _ dedup pair (first include wins)
#define GAMEMD_TREE_OWNS_UNDERSCORE 1
struct _ {
    void* ptr_0;
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
    unsigned int tail_0;  // 0x0
};
// VoxelAnimTypeVector  size=4  (TechnoTypeClass_e4.cpp C2027 carrier)
struct VoxelAnimTypeVector {
    unsigned int tail_0;  // 0x0
};
} // namespace gamemd
