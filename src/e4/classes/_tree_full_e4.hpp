// GENERATED full flat definitions for tree-owned classes
// (gen_tree_full_e4.py) — namespace-isolated C2027 fix,
// zero tree dependencies. Bodies access these via e4 TUs only.
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct ActionQueue;
struct AircraftTrackerClass;
struct AircraftTypeVector;
struct AllocCallback;
struct AnimTypeVector;
struct AssetClass;
struct AudioChannel;
struct AudioConfig;
struct AudioFile;
struct AudioFileClass;
struct AudioFrame;
struct AudioIndex;
struct AudioList;
struct AudioNode;
struct AudioPool;
struct AudioSample;
struct AudioSource;
struct AudioTimer;
struct BTree;
struct BaseNodeClass;
struct BigInt;
struct BitArray;
struct BufferIO;
struct BuildingLightQueue;
struct BuildingLoadQueue;
struct ButtonClass;
struct CampaignScore;
struct CaptureManager;
struct Char;
struct ChatEvent;
struct Checksum;
struct Checksummer;
struct Cliff;
struct Conditions;
struct Conflict;
struct Conflict_WorldDominationTour;
struct ControlClass;
struct Coord2D;
struct Coord3D;
struct CoordList;
struct CountryCombo;
struct CrateClass;
struct DListNode;
struct DeleteAndZero;
struct DiskSpace;
struct DynamicArray;
struct DynamicVectorArray;
struct FacingClass;
struct Field;
struct FileExtension;
struct FileFind;
struct FileStraw;
struct FileTree;
struct FileTreeNode;
struct Flag;
struct Float4;
struct FontClass;
struct FontRenderer;
struct FractalNoise;
struct FrameSnapshot;
struct Function;
struct GScreenClass;
struct GameOptions;
struct GameResult;
struct GameScreen;
struct GameState;
struct Gap2Recv_402F60;
struct Gap2Recv_4048B0;
struct GenericList;
struct GetCurrentProcessId;
struct GetCurrentThread;
struct GetCurrentThreadId;
struct Hash;
struct HashMap;
struct HashTree;
struct Heap;
struct IDXContainer;
struct INISectionList;
struct InputManager_ProcessEvents;
struct Int4;
struct IntVector;
struct IsRandMap;
struct KeywordType;
struct Lightning;
struct ListClass;
struct Locomotor;
struct MPCombatTeam;
struct MSChoiceClass;
struct MapResourceClass;
struct Matrix;
struct Matrix2D;
struct Matrix3x3;
struct MessageListClass;
struct Miles;
struct ModemGame;
struct MovieContext;
struct Multiplay;
struct MultiplayerConfig;
struct NetworkEventQueueClass;
struct NetworkID;
struct NetworkSettings;
struct ObjectPlacement;
struct ObjectPtr;
struct OleUninitialize;
struct OptionQueue;
struct OwnerDrawControl;
struct PacketQueue;
struct PaletteManager;
struct Performance;
struct PhoneEditor;
struct PingPongBuffer;
struct Pipe;
struct PreviewClass;
struct PriorityQueue;
struct ProductionClass;
struct ProgressAnim;
struct Property;
struct PtrVector;
struct PushCommandClass;
struct Queue;
struct Random;
struct Rect_Point;
struct ResultNode;
struct SHPClass;
struct SaveLoadDialog;
struct ScreenSaver;
struct SerialPort;
struct SettingsClass;
struct ShapeButton;
struct ShapeButtonClass;
struct ShroudClass;
struct SkirmishMapGen;
struct SlaveControlVector;
struct SpawnControlVector;
struct SquadClass;
struct StartCombo;
struct State;
struct StaticString;
struct Straw;
struct StringTable;
struct StringVector;
struct StructTable;
struct Stub;
struct SwizzleManager;
struct SyncDelayClass;
struct TabCameoListClass;
struct Targeting;
struct TaskManager;
struct TechnoTypeVector;
struct Text;
struct TextGroup;
struct TheatreClass;
struct TileData;
struct TileNode;
struct TileSystem;
struct Timeout;
struct TimerPool;
struct ToggleClass;
struct ToolTipClass;
struct Tooltip;
struct Tree;
struct Triple;
struct TypeClass;
struct VQAClass;
struct Vector2;
struct Vector3;
struct Vector4;
struct VectorClassUInt;
struct Viewport;
struct VoxelAnimTypeVector;
struct VoxelSection;
struct WDTClass;
struct WDTObject;
struct WTFMode;
struct WinAPI;
struct _com_error;
struct rc_ptr_base;

struct ActionQueue {
    void* vfptr;
    unsigned char q000;  // 0x0
    static double PushEntry(...);  // C2039/C3861 interim stub
};

struct AircraftTrackerClass {
    void* vfptr;
    unsigned char q000;  // 0x0
    static double FillCurrentVector(...);  // C2039/C3861 interim stub
};

struct AircraftTypeVector {
    void* vfptr;
    unsigned char q000;  // 0x0
    static double Constructor(...);  // C2039/C3861 interim stub
};

struct AllocCallback {
    void* vfptr;
    unsigned char q000;  // 0x0
    static double Dispatch(...);  // C2039/C3861 interim stub
};

struct AnimTypeVector {
    void* vfptr;
    unsigned char q000;  // 0x0
    static int Constructor(...);  // def-aligned C2039/C3861
};

struct AssetClass {
    void* vfptr;
    unsigned char q000;  // 0x0
    static double ReleaseAndReload(...);  // C2039/C3861 interim stub
};

struct AudioChannel {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    static double DeactivatePlay(...);  // C2039/C3861 interim stub
    static double IsActive(...);  // C2039/C3861 interim stub
};

struct AudioConfig {
    void* vfptr;
    unsigned char q000;  // 0x0
    static double InitDefault(...);  // C2039/C3861 interim stub
};

struct AudioFile {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    static double GetCallback(...);  // C2039/C3861 interim stub
};

struct AudioFileClass {
    void* vfptr;
    unsigned char q000;  // 0x0
    static double Release(...);  // C2039/C3861 interim stub
};

struct AudioFrame {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    static double CounterInc(...);  // C2039/C3861 interim stub
};

struct AudioIndex {
    void* vfptr;
    unsigned char q000;  // 0x0
    static double GetSampleInformation(...);  // C2039/C3861 interim stub
};

struct AudioList {
    void* vfptr;
    unsigned char q000;  // 0x0
    static double GetNextEntry(...);  // C2039/C3861 interim stub
};

struct AudioNode {
    void* vfptr;
    unsigned char q000;  // 0x0
    static int Release(...);  // def-aligned C2039/C3861
};

struct AudioPool {
    void* vfptr;
    unsigned char q000;  // 0x0
    static double ProcessQueue(...);  // C2039/C3861 interim stub
};

struct AudioSample {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned char q010;  // 0x10
    static double Destructor(...);  // C2039/C3861 interim stub
    static double InitLinkedList(...);  // C2039/C3861 interim stub
    static double IsBuffering(...);  // C2039/C3861 interim stub
};

struct AudioSource {
    void* vfptr;
    unsigned char q000;  // 0x0
    static double Get(...);  // C2039/C3861 interim stub
};

struct AudioTimer {
    void* vfptr;
    unsigned char q000;  // 0x0
    static double DecrementAll(...);  // C2039/C3861 interim stub
};

struct BTree {
    void* vfptr;
    unsigned char q000;  // 0x0
    static double DeleteSubtree(...);  // C2039/C3861 interim stub
};

struct BaseNodeClass {
    void* vfptr;
    char buildingTypeIndex[4];  // 0x0
    char mapCoords[4];  // 0x4
    bool placed;  // 0x8
    char attempts[4];  // 0xC
    unsigned int q00D;  // 0xD
    static double Vector_Constructor(...);  // C2039/C3861 interim stub
};

struct BigInt {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    static double DecryptBlock(...);  // C2039/C3861 interim stub
    static double RSAOperation(...);  // C2039/C3861 interim stub
};

struct BitArray {
    void* vfptr;
    unsigned char q000;  // 0x0
};

struct BufferIO {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    static double Cleanup(...);  // C2039/C3861 interim stub
    static double Flush(...);  // C2039/C3861 interim stub
};

struct BuildingLightQueue {
    void* vfptr;
    unsigned char q000;  // 0x0
    static double RemoveEntry(...);  // C2039/C3861 interim stub
};

struct BuildingLoadQueue {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    static int Find(...);  // def-aligned C2039/C3861
    static int FindBuilding(...);  // def-aligned C2039/C3861
    static double GetNext(...);  // C2039/C3861 interim stub
};

struct ButtonClass {
    void* vfptr;
    unsigned char q000;  // 0x0
    static double SetState(...);  // C2039/C3861 interim stub
};

struct CampaignScore {
    void* vfptr;
    void* vtable1;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned char q010;  // 0x10
    unsigned char q014;  // 0x14
    unsigned char q018;  // 0x18
    unsigned char q01C;  // 0x1C
    unsigned char q020;  // 0x20
    static int inOpenToppedTransport(...);  // def-aligned C2039/C3861
    static int isFallingDown(...);  // def-aligned C2039/C3861
    static int onBridge(...);  // def-aligned C2039/C3861
    static int q08A(...);  // def-aligned C2039/C3861
    static int q08B(...);  // def-aligned C2039/C3861
    static int wasFallingDown(...);  // def-aligned C2039/C3861
};

struct CaptureManager {
    void* vfptr;
    unsigned int u32_28;  // 0x28
    unsigned int u32_34;  // 0x34
    unsigned int q040;  // 0x40
    unsigned int q064;  // 0x64
    unsigned int q100;  // 0x100
    unsigned int q130;  // 0x130
    static double FreeAll(...);  // C2039/C3861 interim stub
};

struct Char {
    void* vfptr;
    unsigned char q000;  // 0x0
    static double Swap(...);  // C2039/C3861 interim stub
};

struct ChatEvent {
    void* vfptr;
    unsigned char q000;  // 0x0
    static double ProcessStrings(...);  // C2039/C3861 interim stub
};

struct Checksum {
    void* vfptr;
    unsigned char q000;  // 0x0
    static double AddString(...);  // C2039/C3861 interim stub
};

struct Checksummer {
    void* vfptr;
    unsigned int crcValue;  // 0x0
    unsigned int bytePos;  // 0x4
    unsigned int state;  // 0x8
    unsigned char buffer;  // 0xC
    static double Add_Buffer(...);  // C2039/C3861 interim stub
    static double Add_double(...);  // C2039/C3861 interim stub
    static double Add_float(...);  // C2039/C3861 interim stub
};

struct Cliff {
    void* vfptr;
    unsigned char q000;  // 0x0
    static double ProcessTransitions(...);  // C2039/C3861 interim stub
};

struct Conditions {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    static double CheckResult(...);  // C2039/C3861 interim stub
    static double CheckResult3(...);  // C2039/C3861 interim stub
};

struct Conflict {
    void* vfptr;
    unsigned char q000;  // 0x0
    Territory* Attacker;  // 0x4
    Territory* Defender;  // 0x8
    int Outcome;  // 0xC
    unsigned int referenceCount;  // 0x10
    unsigned int q014;  // 0x14
    static double GetOwnerHouse(...);  // C2039/C3861 interim stub
};

struct Conflict_WorldDominationTour {
    void* vfptr;
    unsigned char q000;  // 0x0
};

struct ControlClass {
    void* vfptr;
    void* vtable1;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    static int CtorFromData(...);  // def-aligned C2039/C3861
};

struct Coord2D {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    static double Add(...);  // C2039/C3861 interim stub
    static double Sub(...);  // C2039/C3861 interim stub
};

struct Coord3D {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    static double Coord3D_field_0x08(...);  // C2039/C3861 interim stub
    static double Set(...);  // C2039/C3861 interim stub
};

struct CoordList {
    void* vfptr;
    unsigned char q000;  // 0x0
    static double GetBounds(...);  // C2039/C3861 interim stub
};

struct CountryCombo {
    void* vfptr;
    unsigned char q000;  // 0x0
    static double IDToIndex(...);  // C2039/C3861 interim stub
};

struct CrateClass {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    static double CrateClass_field_0x08(...);  // C2039/C3861 interim stub
    static double ProcessPickup(...);  // C2039/C3861 interim stub
};

struct DListNode {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    static double DListNode_field_0x04(...);  // C2039/C3861 interim stub
    static double Init(...);  // C2039/C3861 interim stub
    static double InitEmpty(...);  // C2039/C3861 interim stub
    static double __pad_0(...);  // C2039/C3861 interim stub
};

struct DeleteAndZero {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    static int Alt(...);  // def-aligned C2039/C3861
    static int Alt2(...);  // def-aligned C2039/C3861
    static int DeleteAndZero_field_0x04(...);  // def-aligned C2039/C3861
    static int DeleteAndZero_field_0x08(...);  // def-aligned C2039/C3861
    static int OrFree(...);  // def-aligned C2039/C3861
    static int occupant(...);  // def-aligned C2039/C3861
};

struct DiskSpace {
    void* vfptr;
    unsigned char q000;  // 0x0
    static double CheckAvailable(...);  // C2039/C3861 interim stub
};

struct DynamicArray {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned char q010;  // 0x10
    static double Remove(...);  // C2039/C3861 interim stub
    static double Resize(...);  // C2039/C3861 interim stub
};

struct DynamicVectorArray {
    void* vfptr;
    unsigned char q000;  // 0x0
    static int Constructor(...);  // def-aligned C2039/C3861
};

struct FacingClass {
    void* vfptr;
    unsigned int DesiredFacing;  // 0x0
    unsigned int StartFacing;  // 0x4
    char RotationTimer[12];  // 0x8
    void* q010;  // 0x10
    unsigned int ROT;  // 0x14
    static double Set_SyncLog(...);  // C2039/C3861 interim stub
    static double Update(...);  // C2039/C3861 interim stub
};

struct Field {
    void* vfptr;
    unsigned char q000;  // 0x0
    static double Int_Set(...);  // C2039/C3861 interim stub
};

struct FileExtension {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned char u8_D;  // 0xD
    static int Constructor(...);  // def-aligned C2039/C3861
    static int MapHandler(...);  // def-aligned C2039/C3861
};

struct FileFind {
    void* vfptr;
    CampaignClass* q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    static double Close(...);  // C2039/C3861 interim stub
    static double CloseHandle(...);  // C2039/C3861 interim stub
    static double Next(...);  // C2039/C3861 interim stub
};

struct FileStraw {
    void* vfptr;
    void* vtable1;  // 0x0
    unsigned char q004;  // 0x4
    static int Destructor(...);  // def-aligned C2039/C3861
    static int Open(...);  // def-aligned C2039/C3861
};

struct FileTree {
    void* vfptr;
    unsigned char q000;  // 0x0
    static double CleanupAll(...);  // C2039/C3861 interim stub
};

struct FileTreeNode {
    void* vfptr;
    unsigned char q000;  // 0x0
    static double Destroy(...);  // C2039/C3861 interim stub
};

struct Flag {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    static int Flag_field_0x04(...);  // def-aligned C2039/C3861
    static int Flag_field_0x08(...);  // def-aligned C2039/C3861
    static int IsNot2(...);  // def-aligned C2039/C3861
    static int IsZero(...);  // def-aligned C2039/C3861
    static int __pad_0(...);  // def-aligned C2039/C3861
};

struct Float4 {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    static double Copy(...);  // C2039/C3861 interim stub
};

struct FontClass {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned int u32_10;  // 0x10
    unsigned char q014;  // 0x14
    static double InitMetrics(...);  // C2039/C3861 interim stub
    static double RenderGlyph(...);  // C2039/C3861 interim stub
};

struct FontRenderer {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    static double DrawTextA(...);  // C2039/C3861 interim stub
    static double InitContext(...);  // C2039/C3861 interim stub
};

struct FractalNoise {
    void* vfptr;
    unsigned char q000;  // 0x0
    static double Dtor(...);  // C2039/C3861 interim stub
};

struct FrameSnapshot {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    static double InitMax(...);  // C2039/C3861 interim stub
};

struct Function {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned char q010;  // 0x10
    unsigned char q014;  // 0x14
    unsigned char q018;  // 0x18
    static int Method_424CA0(...);  // def-aligned C2039/C3861
};

struct GScreenClass {
    void* vfptr;
    void* vtable1;  // 0x0
    unsigned int q004;  // 0x4
    unsigned int q008;  // 0x8
    unsigned int q00C;  // 0xC
    AbstractTypeClass* q010;  // 0x10
    unsigned int q018;  // 0x18
    unsigned int q01A;  // 0x1A
    bool q01D;  // 0x1D
    unsigned char q020;  // 0x20
    TechnoClass * q024;  // 0x24
    unsigned int q028;  // 0x28
    bool q02B;  // 0x2B
    ObjectClass * ptr_30;  // 0x30
    unsigned char q031;  // 0x31
    unsigned int q033;  // 0x33
    unsigned char q034;  // 0x34
    TechnoClass * ptr_24;  // 0x36
    unsigned int q038;  // 0x38
    unsigned char q03A;  // 0x3A
    unsigned int q03B;  // 0x3B
    unsigned int q03D;  // 0x3D
    bool q042;  // 0x42
    unsigned int q044;  // 0x44
    ObjectClass * q048;  // 0x48
    bool q04A;  // 0x4A
    AbstractClass* q04C;  // 0x4C
    unsigned char q04F;  // 0x4F
    unsigned char q050;  // 0x50
    Coord* q054;  // 0x54
    unsigned char q058;  // 0x58
    unsigned int q060;  // 0x60
    IUnknown* q064;  // 0x64
    unsigned int q068;  // 0x68
    IUnknown* q06C;  // 0x6C
    IUnknown* q070;  // 0x70
    bool q074;  // 0x74
    unsigned char q078;  // 0x78
    unsigned int q080;  // 0x80
    Coord* q084;  // 0x84
    AnimClass* q088;  // 0x88
    void* q08C;  // 0x8C
    unsigned char q090;  // 0x90
    Coord* q09C;  // 0x9C
    IUnknown* q0A4;  // 0xA4
    unsigned char q0A9;  // 0xA9
    unsigned char q0AA;  // 0xAA
    unsigned int q0AB;  // 0xAB
    unsigned char q0B9;  // 0xB9
    unsigned int q0C3;  // 0xC3
    AnimClass* q0D4;  // 0xD4
    ObjectClass* q0E4;  // 0xE4
    void* q0F7;  // 0xF7
    OverlayTypeClass* q0F8;  // 0xF8
    unsigned int q0F9;  // 0xF9
    unsigned char q0FB;  // 0xFB
    ObjectClass* q0FC;  // 0xFC
    IUnknown* q100;  // 0x100
    unsigned int q104;  // 0x104
    IUnknown* q108;  // 0x108
    ObjectClass * q114;  // 0x114
    AbstractClass* q118;  // 0x118
    unsigned char q120;  // 0x120
    unsigned int q124;  // 0x124
    AnimClass* q130;  // 0x130
    unsigned char q134;  // 0x134
    unsigned char q138;  // 0x138
    void* q140;  // 0x140
    unsigned char q144;  // 0x144
    unsigned int q148;  // 0x148
    HouseClass* q150;  // 0x150
    AbstractClass* q158;  // 0x158
    Coord* q15C;  // 0x15C
    AbstractClass* q160;  // 0x160
    IUnknown* q164;  // 0x164
    unsigned int q168;  // 0x168
    bool q16B;  // 0x16B
    void* q16C;  // 0x16C
    unsigned char q16D;  // 0x16D
    unsigned int q16F;  // 0x16F
    unsigned char q170;  // 0x170
    unsigned char q174;  // 0x174
    char q180;  // 0x180
    IUnknown* q184;  // 0x184
    unsigned int q188;  // 0x188
    bool q1A1;  // 0x1A1
    unsigned int q1A2;  // 0x1A2
    unsigned int q1A5;  // 0x1A5
    unsigned int q1A7;  // 0x1A7
    unsigned int q1B1;  // 0x1B1
    AbstractTypeClass* q1D4;  // 0x1D4
    AbstractTypeClass* q1E0;  // 0x1E0
    unsigned int q200;  // 0x200
    int q202;  // 0x202
    AbstractClass* q21C;  // 0x21C
    ObjectClass* q228;  // 0x228
    unsigned int q240;  // 0x240
    unsigned int q244;  // 0x244
    OverlayTypeClass* q248;  // 0x248
    bool q258;  // 0x258
    unsigned int q260;  // 0x260
    IUnknown* q264;  // 0x264
    IUnknown* q274;  // 0x274
    bool q278;  // 0x278
    AbstractClass* q280;  // 0x280
    unsigned char q284;  // 0x284
    unsigned char q288;  // 0x288
    IUnknown* q2A4;  // 0x2A4
    unsigned char q2A8;  // 0x2A8
    AbstractClass* q2B4;  // 0x2B4
    unsigned int q300;  // 0x300
    AnimClass* q304;  // 0x304
    unsigned char q308;  // 0x308
    AnimClass* q310;  // 0x310
    void* q320;  // 0x320
    unsigned char q324;  // 0x324
    unsigned int q328;  // 0x328
    unsigned char q338;  // 0x338
    AbstractClass* q344;  // 0x344
    Coord* q348;  // 0x348
    unsigned int q360;  // 0x360
    void* q364;  // 0x364
    unsigned char q368;  // 0x368
    unsigned int q370;  // 0x370
    unsigned int q374;  // 0x374
    unsigned int q380;  // 0x380
    char q384;  // 0x384
    ParticleSystemClass* q388;  // 0x388
    char q3BC[4];  // 0x3BC
    unsigned char q3C0;  // 0x3C0
    unsigned char q3D7;  // 0x3D7
    unsigned int q404;  // 0x404
    unsigned int q418;  // 0x418
    HouseClass* q42C;  // 0x42C
    unsigned int q440;  // 0x440
    unsigned int q444;  // 0x444
    unsigned int q448;  // 0x448
    unsigned int q464;  // 0x464
    AbstractTypeClass* q468;  // 0x468
    AbstractTypeClass* q480;  // 0x480
    unsigned int q487;  // 0x487
    char q488[4];  // 0x488
    unsigned char q48C;  // 0x48C
    unsigned int q48F;  // 0x48F
    unsigned int q496;  // 0x496
    unsigned int q49D;  // 0x49D
    BuildingTypeClass* q508;  // 0x508
    int q514;  // 0x514
    unsigned char q518;  // 0x518
    BuildingTypeClass* q520;  // 0x520
    unsigned int q52B;  // 0x52B
    void* q52C;  // 0x52C
    unsigned int q52D;  // 0x52D
    AnimClass* q530;  // 0x530
    AbstractClass* q540;  // 0x540
    unsigned int q580;  // 0x580
    OverlayTypeClass* q584;  // 0x584
    unsigned int q588;  // 0x588
    ObjectClass* q594;  // 0x594
    IUnknown* q598;  // 0x598
    bool q600;  // 0x600
    unsigned char q604;  // 0x604
    unsigned int q608;  // 0x608
    unsigned char q60C;  // 0x60C
    unsigned char q610;  // 0x610
    unsigned int q620;  // 0x620
    unsigned char q624;  // 0x624
    IUnknown* q628;  // 0x628
    unsigned char q62C;  // 0x62C
    ObjectClass * q630;  // 0x630
    AbstractClass* q640;  // 0x640
    unsigned char q644;  // 0x644
    unsigned char q648;  // 0x648
    unsigned char q64C;  // 0x64C
    unsigned char q650;  // 0x650
    unsigned int q658;  // 0x658
    unsigned char q65C;  // 0x65C
    unsigned char q660;  // 0x660
    unsigned char q680;  // 0x680
    AudioController* q68C;  // 0x68C
    unsigned int q704;  // 0x704
    TechnoClass* q718;  // 0x718
    unsigned int q728;  // 0x728
    unsigned int q760;  // 0x760
    unsigned int q768;  // 0x768
    Coord* q774;  // 0x774
    AnimClass* q784;  // 0x784
    unsigned char q794;  // 0x794
    unsigned char q798;  // 0x798
    void* q800;  // 0x800
    unsigned char q804;  // 0x804
    unsigned int q808;  // 0x808
    unsigned char q824;  // 0x824
    unsigned int q828;  // 0x828
    unsigned char q82C;  // 0x82C
    unsigned char q830;  // 0x830
    Coord* q834;  // 0x834
    Coord* q840;  // 0x840
    unsigned char q844;  // 0x844
    unsigned char q848;  // 0x848
    AbstractClass* q850;  // 0x850
    IUnknown* q854;  // 0x854
    unsigned char q858;  // 0x858
    unsigned char q85C;  // 0x85C
    unsigned int q864;  // 0x864
    void* q868;  // 0x868
    unsigned int q880;  // 0x880
    unsigned int q884;  // 0x884
    char q900;  // 0x900
    ParticleSystemClass* q904;  // 0x904
    unsigned char q908;  // 0x908
    unsigned char q90C;  // 0x90C
    unsigned int q914;  // 0x914
    unsigned int q928;  // 0x928
    unsigned char q92C;  // 0x92C
    unsigned char q930;  // 0x930
    unsigned char q960;  // 0x960
    unsigned int q968;  // 0x968
    unsigned int q984;  // 0x984
    unsigned int q9C7;  // 0x9C7
    unsigned char q9C8;  // 0x9C8
    unsigned char q9CC;  // 0x9CC
    Coord* qBB8;  // 0xBB8
    Coord* qBBC;  // 0xBBC
    DynamicVector* qDF8;  // 0xDF8
    unsigned int q1028;  // 0x1028
    unsigned int q1048;  // 0x1048
    unsigned int q1058;  // 0x1058
    unsigned int q1064;  // 0x1064
    HouseClass* q1068;  // 0x1068
    unsigned int q1078;  // 0x1078
    unsigned int q1088;  // 0x1088
    unsigned int q1110;  // 0x1110
    unsigned int q1124;  // 0x1124
    AbstractTypeClass* q1128;  // 0x1128
    char q1160[4];  // 0x1160
    unsigned char q1164;  // 0x1164
    unsigned int q1174;  // 0x1174
    unsigned char q1178;  // 0x1178
    BuildingTypeClass* q1288;  // 0x1288
    unsigned int q1298;  // 0x1298
    int q1300;  // 0x1300
    unsigned char q1304;  // 0x1304
    void* q1324;  // 0x1324
    AnimClass* q1328;  // 0x1328
    unsigned int q1330;  // 0x1330
    AbstractClass* q1344;  // 0x1344
    unsigned int q1398;  // 0x1398
    unsigned int q1400;  // 0x1400
    unsigned int q1404;  // 0x1404
    unsigned int q1408;  // 0x1408
    ObjectClass* q1428;  // 0x1428
    unsigned int q1430;  // 0x1430
    unsigned int q1444;  // 0x1444
    int q1464;  // 0x1464
    unsigned int q14EB;  // 0x14EB
    IUnknown* q14EC;  // 0x14EC
    unsigned int q14ED;  // 0x14ED
    unsigned int q14EE;  // 0x14EE
    unsigned int q14EF;  // 0x14EF
    unsigned int q14F3;  // 0x14F3
    int q1524;  // 0x1524
    unsigned int q1525;  // 0x1525
    unsigned char q1540;  // 0x1540
    unsigned int q1544;  // 0x1544
    unsigned char q1548;  // 0x1548
    IUnknown* q1554;  // 0x1554
    unsigned int q1558;  // 0x1558
    unsigned int q1568;  // 0x1568
    unsigned char q1580;  // 0x1580
    ObjectClass * q1584;  // 0x1584
    char q1588[4];  // 0x1588
    unsigned int q158B;  // 0x158B
    unsigned int q1590;  // 0x1590
    unsigned int q15E2;  // 0x15E2
    AbstractClass* q1600;  // 0x1600
    unsigned char q1604;  // 0x1604
    unsigned char q1608;  // 0x1608
    unsigned char q1618;  // 0x1618
    unsigned int q1624;  // 0x1624
    unsigned char q1628;  // 0x1628
    unsigned int q1634;  // 0x1634
    unsigned char q1638;  // 0x1638
    IUnknown* q1654;  // 0x1654
    unsigned char q1658;  // 0x1658
    unsigned int q1660;  // 0x1660
    unsigned char q1664;  // 0x1664
    char q1668;  // 0x1668
    unsigned char q1718;  // 0x1718
    unsigned char q1720;  // 0x1720
    unsigned int q1728;  // 0x1728
    unsigned char q1794;  // 0x1794
    unsigned int q1878;  // 0x1878
    unsigned int q1888;  // 0x1888
    Coord* q1908;  // 0x1908
    unsigned char q1910;  // 0x1910
    AnimClass* q1924;  // 0x1924
    unsigned char q1940;  // 0x1940
    void* q2048;  // 0x2048
    unsigned int q2088;  // 0x2088
    unsigned int q2098;  // 0x2098
    Coord* q2100;  // 0x2100
    AbstractClass* q2128;  // 0x2128
    unsigned int q2148;  // 0x2148
    unsigned char q2178;  // 0x2178
    unsigned int q2180;  // 0x2180
    unsigned int q2198;  // 0x2198
    char q2304;  // 0x2304
    ParticleSystemClass* q2308;  // 0x2308
    unsigned int q2324;  // 0x2324
    unsigned int q2344;  // 0x2344
    unsigned char q2348;  // 0x2348
    char q2390[4];  // 0x2390
    unsigned char q2394;  // 0x2394
    unsigned char q2400;  // 0x2400
    unsigned int q2408;  // 0x2408
    unsigned char q2504;  // 0x2504
    unsigned char q2508;  // 0x2508
    Coord* q3000;  // 0x3000
    Coord* q3004;  // 0x3004
    unsigned char q3278;  // 0x3278
    unsigned int q3428;  // 0x3428
    unsigned int q3444;  // 0x3444
    unsigned int q3448;  // 0x3448
    unsigned int q3668;  // 0x3668
    unsigned int q4168;  // 0x4168
    unsigned int q4184;  // 0x4184
    HouseClass* q4200;  // 0x4200
    unsigned int q4368;  // 0x4368
    unsigned int q4388;  // 0x4388
    AbstractTypeClass* q4434;  // 0x4434
    char q4438;  // 0x4438
    char q4448[4];  // 0x4448
    unsigned int q4468;  // 0x4468
    BuildingTypeClass* q4744;  // 0x4744
    unsigned int q4760;  // 0x4760
    int q4864;  // 0x4864
    unsigned char q4868;  // 0x4868
    void* q4900;  // 0x4900
    AnimClass* q4904;  // 0x4904
    unsigned int q4918;  // 0x4918
    unsigned int q5120;  // 0x5120
    unsigned int q5124;  // 0x5124
    unsigned int q5128;  // 0x5128
    OverlayTypeClass* q5138;  // 0x5138
    unsigned char q5158;  // 0x5158
    ObjectClass* q5160;  // 0x5160
    unsigned int q5168;  // 0x5168
    IUnknown* q5170;  // 0x5170
    unsigned int q5188;  // 0x5188
    int q5220;  // 0x5220
    unsigned int q5270;  // 0x5270
    unsigned int q5358;  // 0x5358
    unsigned char q53D0;  // 0x53D0
    unsigned int q53D1;  // 0x53D1
    unsigned int q53D2;  // 0x53D2
    unsigned int q53D3;  // 0x53D3
    unsigned int q53D4;  // 0x53D4
    unsigned int q53D8;  // 0x53D8
    unsigned char q53DC;  // 0x53DC
    unsigned char q53E0;  // 0x53E0
    unsigned char q53E4;  // 0x53E4
    unsigned char q53E8;  // 0x53E8
    unsigned char q53EC;  // 0x53EC
    unsigned char q53F0;  // 0x53F0
    unsigned char q53F4;  // 0x53F4
    unsigned char q53F8;  // 0x53F8
    bool q5430;  // 0x5430
    unsigned char q5434;  // 0x5434
    unsigned char q5438;  // 0x5438
    unsigned int q5444;  // 0x5444
    unsigned char q5448;  // 0x5448
    unsigned char q544C;  // 0x544C
    IUnknown* q5460;  // 0x5460
    unsigned char q5464;  // 0x5464
    unsigned char q5468;  // 0x5468
    unsigned int q5480;  // 0x5480
    unsigned char q5484;  // 0x5484
    unsigned char q5488;  // 0x5488
    IUnknown* q5494;  // 0x5494
    unsigned char q5498;  // 0x5498
    unsigned char q549C;  // 0x549C
    unsigned char q54A0;  // 0x54A0
    unsigned char q54A4;  // 0x54A4
    unsigned char q54A8;  // 0x54A8
    ObjectClass * q5508;  // 0x5508
    unsigned char q550C;  // 0x550C
    bool q5510;  // 0x5510
    unsigned char q5514;  // 0x5514
    unsigned char q5518;  // 0x5518
    unsigned int q5520;  // 0x5520
    unsigned char q5524;  // 0x5524
    DynamicVector* q5550;  // 0x5550
    unsigned char q5554;  // 0x5554
    unsigned char q5558;  // 0x5558
    unsigned char q556C;  // 0x556C
    unsigned char q5570;  // 0x5570
    unsigned char q5574;  // 0x5574
    unsigned char q5578;  // 0x5578
    unsigned char q557C;  // 0x557C
    unsigned char q5580;  // 0x5580
    unsigned char q5584;  // 0x5584
    unsigned char q5588;  // 0x5588
    unsigned char q5604;  // 0x5604
    unsigned char q560C;  // 0x560C
    unsigned char q5610;  // 0x5610
    unsigned char q5618;  // 0x5618
    unsigned char q561C;  // 0x561C
    unsigned char q5638;  // 0x5638
    unsigned char q563C;  // 0x563C
    unsigned char q5640;  // 0x5640
    unsigned char q5644;  // 0x5644
    AbstractTypeClass* q5660;  // 0x5660
    AbstractTypeClass* q5664;  // 0x5664
    AbstractTypeClass* q5668;  // 0x5668
    unsigned char q566C;  // 0x566C
    unsigned char q5670;  // 0x5670
    unsigned int q5684;  // 0x5684
    unsigned char q5688;  // 0x5688
    unsigned char q568C;  // 0x568C
    unsigned int q5728;  // 0x5728
    unsigned char q572C;  // 0x572C
    AudioController* q5750;  // 0x5750
    unsigned char q5754;  // 0x5754
    unsigned char q5758;  // 0x5758
    IUnknown* q5774;  // 0x5774
    unsigned char q5778;  // 0x5778
    unsigned char q577C;  // 0x577C
    void * ptr_5788;  // 0x5788
    unsigned char q578C;  // 0x578C
    unsigned char q5790;  // 0x5790
    IUnknown* q5798;  // 0x5798
    unsigned char q579C;  // 0x579C
    unsigned char q57A0;  // 0x57A0
    int q5884;  // 0x5884
    unsigned char q5888;  // 0x5888
    unsigned char q588C;  // 0x588C
    unsigned char q5920;  // 0x5920
    unsigned char q5924;  // 0x5924
    unsigned int q5928;  // 0x5928
    unsigned char q592C;  // 0x592C
    unsigned char q5930;  // 0x5930
    unsigned int q5938;  // 0x5938
    unsigned char q593C;  // 0x593C
    unsigned int q6038;  // 0x6038
    unsigned char q603C;  // 0x603C
    unsigned int q6194;  // 0x6194
    unsigned char q6198;  // 0x6198
    unsigned char q619C;  // 0x619C
    unsigned int q6264;  // 0x6264
    unsigned char q6268;  // 0x6268
    unsigned int q6280;  // 0x6280
    unsigned char q6284;  // 0x6284
    unsigned int q6294;  // 0x6294
    unsigned char q6298;  // 0x6298
    Coord* q6408;  // 0x6408
    unsigned char q640C;  // 0x640C
    unsigned char q6410;  // 0x6410
    unsigned char q6438;  // 0x6438
    static int parent_gap(...);  // def-aligned C2039/C3861
};

struct GameOptions {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    static double SaveLoad(...);  // C2039/C3861 interim stub
};

struct GameResult {
    void* vfptr;
    unsigned char q000;  // 0x0
    static double CalcScore(...);  // C2039/C3861 interim stub
};

struct GameScreen {
    void* vfptr;
    CampaignClass* q000;  // 0x0
    static double DlgProc(...);  // C2039/C3861 interim stub
};

struct GameState {
    void* vfptr;
    unsigned char q000;  // 0x0
    static double Reset(...);  // C2039/C3861 interim stub
};

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
    AbstractClass * q120;  // 0x120
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

struct Gap2Recv_4048B0 {
    void* vfptr;
    unsigned int u32_4;  // 0x4
    unsigned int M6;  // 0x6
    unsigned int u32_10;  // 0x10
    unsigned int M24;  // 0x18
    unsigned int q024;  // 0x24
    unsigned int q034;  // 0x34
    unsigned int M36;  // 0x36
    unsigned int q054;  // 0x54
    unsigned int q084;  // 0x84
    unsigned int M168;  // 0xA8
    unsigned int q130;  // 0x130
    unsigned int q168;  // 0x168
    unsigned int q304;  // 0x304
    unsigned int q360;  // 0x360
    unsigned int q774;  // 0x774
    unsigned int q864;  // 0x864
    unsigned int q1908;  // 0x1908
    unsigned int q2148;  // 0x2148
    unsigned int q6408;  // 0x6408
};

struct GenericList {
    void* vfptr;
    void* vtable1;  // 0x0
    static int Constructor(...);  // def-aligned C2039/C3861
};

struct GetCurrentProcessId {
    void* vfptr;
    unsigned char q000;  // 0x0
};

struct GetCurrentThread {
    void* vfptr;
    unsigned char q000;  // 0x0
};

struct GetCurrentThreadId {
    void* vfptr;
    unsigned char q000;  // 0x0
};

struct Hash {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    static int ComputeHashSHA1(...);  // def-aligned C2039/C3861
    static int InsertOrdered(...);  // def-aligned C2039/C3861
    static int Reset(...);  // def-aligned C2039/C3861
};

struct HashMap {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    static double Shrink(...);  // C2039/C3861 interim stub
    static double Shrink2(...);  // C2039/C3861 interim stub
};

struct HashTree {
    void* vfptr;
    unsigned char q000;  // 0x0
    static double MarkEntry(...);  // C2039/C3861 interim stub
};

struct Heap {
    void* vfptr;
    unsigned char q000;  // 0x0
    static double SiftDown(...);  // C2039/C3861 interim stub
};

struct IDXContainer {
    void* vfptr;
    unsigned char q000;  // 0x0
    static double LoadSample(...);  // C2039/C3861 interim stub
};

struct INISectionList {
    void* vfptr;
    unsigned char q000;  // 0x0
    static int Constructor(...);  // def-aligned C2039/C3861
};

struct InputManager_ProcessEvents {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned char q010;  // 0x10
    static double Vtable(...);  // C2039/C3861 interim stub
};

struct Int4 {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    static int Set(...);  // def-aligned C2039/C3861
    static int __pad_0(...);  // def-aligned C2039/C3861
};

struct IntVector {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    static int Copy(...);  // def-aligned C2039/C3861
};

struct IsRandMap {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    static double Sed(...);  // C2039/C3861 interim stub
    static double Sed2(...);  // C2039/C3861 interim stub
};

struct KeywordType {
    void* vfptr;
    unsigned char q000;  // 0x0
    static double FindOrCreate2(...);  // C2039/C3861 interim stub
};

struct Lightning {
    void* vfptr;
    unsigned char q000;  // 0x0
    static double Draw(...);  // C2039/C3861 interim stub
};

struct ListClass {
    void* vfptr;
    void* vtable1;  // 0x0
    unsigned char q004;  // 0x4
    unsigned int u32_8;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned int u32_D;  // 0xD
    unsigned int u32_10;  // 0x10
    unsigned char q014;  // 0x14
    char Enabled;  // 0x15
    unsigned int u32_18;  // 0x18
    unsigned int q019;  // 0x19
    unsigned int q01A;  // 0x1A
    bool q01B;  // 0x1B
    unsigned int u32_1C;  // 0x1C
    bool q01D;  // 0x1D
    unsigned int q01E;  // 0x1E
    static int Destruct(...);  // def-aligned C2039/C3861
    static int ListClass_field_0x0C(...);  // def-aligned C2039/C3861
    static int ListClass_field_0x10(...);  // def-aligned C2039/C3861
    static int __pad_0(...);  // def-aligned C2039/C3861
};

struct Locomotor {
    void* vfptr;
    char Locomotor_field_00[4];  // 0x0
    static double GetSpeed(...);  // C2039/C3861 interim stub
};

struct MPCombatTeam {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    static int Constructor(...);  // def-aligned C2039/C3861
    static int Constructor2(...);  // def-aligned C2039/C3861
    static int MPTeam(...);  // def-aligned C2039/C3861
};

struct MSChoiceClass {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    static double LoadFromINI(...);  // C2039/C3861 interim stub
};

struct MapResourceClass {
    void* vfptr;
    IUnknown* q000;  // 0x0
    static double __tail_0(...);  // C2039/C3861 interim stub
};

struct Matrix {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    static double Copy12Float(...);  // C2039/C3861 interim stub
    static double Scale(...);  // C2039/C3861 interim stub
};

struct Matrix2D {
    void* vfptr;
    unsigned char q000;  // 0x0
    static double Rotate(...);  // C2039/C3861 interim stub
};

struct Matrix3x3 {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    bool q00A;  // 0xA
    bool q00B;  // 0xB
    unsigned char q00C;  // 0xC
    unsigned char q010;  // 0x10
    static double Multiply(...);  // C2039/C3861 interim stub
    static double TransformPoint(...);  // C2039/C3861 interim stub
};

struct MessageListClass {
    void* vfptr;
    char MessageCount[4];  // 0x0
    char MaxMessageCount[4];  // 0x4
    char ScrollOffset[4];  // 0x8
    char TextColorIndex[4];  // 0xC
    char DisplayDuration[4];  // 0x10
    char MessageTimer[12];  // 0x14
    unsigned int q018;  // 0x18
    unsigned int q019;  // 0x19
    unsigned int q01A;  // 0x1A
    unsigned int q01C;  // 0x1C
    char MessageRect[16];  // 0x20
    unsigned int q024;  // 0x24
    unsigned int q028;  // 0x28
    unsigned int q02C;  // 0x2C
    bool IsScrolling;  // 0x30
    unsigned char padding_after_scroll;  // 0x31
    static double AddMessage(...);  // C2039/C3861 interim stub
    static double clearMessages(...);  // C2039/C3861 interim stub
};

struct Miles {
    void* vfptr;
    unsigned char q000;  // 0x0
    static double DriverGet(...);  // C2039/C3861 interim stub
};

struct ModemGame {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned char q010;  // 0x10
    static double AdvanceTauntCommand(...);  // C2039/C3861 interim stub
};

struct MovieContext {
    void* vfptr;
    unsigned char q000;  // 0x0
    static int Cleanup(...);  // def-aligned C2039/C3861
    static int __tail_0(...);  // def-aligned C2039/C3861
};

struct Multiplay {
    void* vfptr;
    unsigned char q000;  // 0x0
    static double LogToSYNC_NOMPDEBUG(...);  // C2039/C3861 interim stub
};

struct MultiplayerConfig {
    void* vfptr;
    unsigned char q000;  // 0x0
    static int Cleanup(...);  // def-aligned C2039/C3861
};

struct NetworkEventQueueClass {
    void* vfptr;
    unsigned char q000;  // 0x0
    static double WaitForResponse(...);  // C2039/C3861 interim stub
};

struct NetworkID {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    static double Assign(...);  // C2039/C3861 interim stub
    static double Compare(...);  // C2039/C3861 interim stub
};

struct NetworkSettings {
    void* vfptr;
    unsigned char q000;  // 0x0
    static int DlgProc(...);  // def-aligned C2039/C3861
};

struct ObjectPlacement {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    static double CalcPosition(...);  // C2039/C3861 interim stub
};

struct ObjectPtr {
    void* vfptr;
    unsigned char q000;  // 0x0
    static double RegisterForTracking(...);  // C2039/C3861 interim stub
};

struct OleUninitialize {
    void* vfptr;
    unsigned char q000;  // 0x0
};

struct OptionQueue {
    void* vfptr;
    unsigned char q000;  // 0x0
    static int PushEntry(...);  // def-aligned C2039/C3861
};

struct OwnerDrawControl {
    void* vfptr;
    unsigned char q000;  // 0x0
    static double InitVtable(...);  // C2039/C3861 interim stub
};

struct PacketQueue {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    static double ExtractEntry(...);  // C2039/C3861 interim stub
    static double ReleaseEntry(...);  // C2039/C3861 interim stub
};

struct PaletteManager {
    void* vfptr;
    unsigned char q000;  // 0x0
    static double Load(...);  // C2039/C3861 interim stub
};

struct Performance {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    static double Profile(...);  // C2039/C3861 interim stub
};

struct PhoneEditor {
    void* vfptr;
    unsigned char q000;  // 0x0
    static double PopulateList(...);  // C2039/C3861 interim stub
};

struct PingPongBuffer {
    void* vfptr;
    unsigned char q000;  // 0x0
    static double GetWriteOffset(...);  // C2039/C3861 interim stub
};

struct Pipe {
    void* vfptr;
    void* vtable1;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    bool q00A;  // 0xA
    bool q00B;  // 0xB
    unsigned char q00C;  // 0xC
    bool q00D;  // 0xD
    bool q00E;  // 0xE
    static int Dtor(...);  // def-aligned C2039/C3861
    static int Pipe_field_0x04(...);  // def-aligned C2039/C3861
    static int Pipe_field_0x08(...);  // def-aligned C2039/C3861
    static int Pipe_field_0x0C(...);  // def-aligned C2039/C3861
    static int __pad_0(...);  // def-aligned C2039/C3861
};

struct PreviewClass {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    static double ReadPreview(...);  // C2039/C3861 interim stub
};

struct PriorityQueue {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    static int Add(...);  // def-aligned C2039/C3861
};

struct ProductionClass {
    void* vfptr;
    unsigned char q000;  // 0x0
    static double StartTimer(...);  // C2039/C3861 interim stub
};

struct ProgressAnim {
    void* vfptr;
    unsigned char q000;  // 0x0
    static int Init(...);  // def-aligned C2039/C3861
};

struct Property {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    static int GetField11(...);  // def-aligned C2039/C3861
    static int Set(...);  // def-aligned C2039/C3861
};

struct PtrVector {
    void* vfptr;
    unsigned char q000;  // 0x0
    static int Destroy(...);  // def-aligned C2039/C3861
};

struct PushCommandClass {
    void* vfptr;
    unsigned char q000;  // 0x0
    static double Execute(...);  // C2039/C3861 interim stub
};

struct Queue {
    void* vfptr;
};

struct Random {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    static int Gaussian(...);  // def-aligned C2039/C3861
    static int Range(...);  // def-aligned C2039/C3861
    static int State(...);  // def-aligned C2039/C3861
};

struct Rect_Point {
    void* vfptr;
    unsigned char q000;  // 0x0
    static int Set(...);  // def-aligned C2039/C3861
};

struct ResultNode {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    static double CleanupList(...);  // C2039/C3861 interim stub
};

struct SHPClass {
    void* vfptr;
    unsigned char q000;  // 0x0
    static int Load(...);  // def-aligned C2039/C3861
};

struct SaveLoadDialog {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    static int DlgProc(...);  // def-aligned C2039/C3861
};

struct ScreenSaver {
    void* vfptr;
    static double Process(...);  // C2039/C3861 interim stub
};

struct SerialPort {
    void* vfptr;
    unsigned char q000;  // 0x0
    static int Close(...);  // def-aligned C2039/C3861
};

struct SettingsClass {
    void* vfptr;
    unsigned char q000;  // 0x0
    static double ClampValues(...);  // C2039/C3861 interim stub
};

struct ShapeButton {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    static int SetShape(...);  // def-aligned C2039/C3861
};

struct ShapeButtonClass {
    void* vfptr;
    void* vtable1;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    static double ShapeButtonClass_field_0x08(...);  // C2039/C3861 interim stub
};

struct ShroudClass {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    static double UpdateVisibility(...);  // C2039/C3861 interim stub
};

struct SkirmishMapGen {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    static int LookupDialogHash(...);  // def-aligned C2039/C3861
};

struct SlaveControlVector {
    void* vfptr;
    unsigned char q000;  // 0x0
    static int Constructor(...);  // def-aligned C2039/C3861
};

struct SpawnControlVector {
    void* vfptr;
    unsigned char q000;  // 0x0
    static int Constructor(...);  // def-aligned C2039/C3861
};

struct SquadClass {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    static double ProcessMove(...);  // C2039/C3861 interim stub
};

struct StartCombo {
    void* vfptr;
    unsigned char q000;  // 0x0
};

struct State {
    void* vfptr;
    unsigned char q000;  // 0x0
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
    unsigned char q01D;  // 0x1D
    int ScenIndex;  // 0x20
    int MapIndex;  // 0x24
    int LastSave;  // 0x28
    unsigned char q02C;  // 0x2C
    unsigned int q034;  // 0x34
};

struct StaticString {
    void* vfptr;
    unsigned char q000;  // 0x0
    static double Factory(...);  // C2039/C3861 interim stub
};

struct Straw {
    void* vfptr;
    void* vtable1;  // 0x0
    unsigned char q004;  // 0x4
    static int Dtor(...);  // def-aligned C2039/C3861
};

struct StringTable {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    static double Find(...);  // C2039/C3861 interim stub
};

struct StringVector {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    bool IsAllocated;  // 0xD
    unsigned char q010;  // 0x10
    unsigned char q014;  // 0x14
    unsigned char q018;  // 0x18
    static int Construct(...);  // def-aligned C2039/C3861
    static int StringVector_field_0x10(...);  // def-aligned C2039/C3861
    static int StringVector_field_0x14(...);  // def-aligned C2039/C3861
    static int __pad_0(...);  // def-aligned C2039/C3861
};

struct StructTable {
    void* vfptr;
    unsigned char q000;  // 0x0
    static double Append(...);  // C2039/C3861 interim stub
};

struct Stub {
    void* vfptr;
    char Stub_field_00[4];  // 0x0
};

struct SwizzleManager {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    static int SaveLoad(...);  // def-aligned C2039/C3861
};

struct SyncDelayClass {
    void* vfptr;
    unsigned char q000;  // 0x0
    static double ProcessNetworkSync(...);  // C2039/C3861 interim stub
};

struct TabCameoListClass {
    void* vfptr;
    unsigned char q000;  // 0x0
    static double AddCameo_ReplaceItAll(...);  // C2039/C3861 interim stub
};

struct Targeting {
    void* vfptr;
    unsigned char q000;  // 0x0
    static double Readd(...);  // C2039/C3861 interim stub
};

struct TaskManager {
    void* vfptr;
    unsigned char q000;  // 0x0
    static int Update(...);  // def-aligned C2039/C3861
};

struct TechnoTypeVector {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
};

struct Text {
    void* vfptr;
    char Text_field_00[4];  // 0x0
    static double DrawRepeated(...);  // C2039/C3861 interim stub
    static double Layout(...);  // C2039/C3861 interim stub
    static double MeasureWidth(...);  // C2039/C3861 interim stub
};

struct TextGroup {
    void* vfptr;
    unsigned char q000;  // 0x0
    static double SetRect(...);  // C2039/C3861 interim stub
};

struct TheatreClass {
    void* vfptr;
    unsigned char q000;  // 0x0
    static int InitView(...);  // def-aligned C2039/C3861
};

struct TileData {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned int u16_2;  // 0x2
    static int Constructor(...);  // def-aligned C2039/C3861
};

struct TileNode {
    void* vfptr;
    unsigned char q000;  // 0x0
    static int Cleanup(...);  // def-aligned C2039/C3861
};

struct TileSystem {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned char u8_D;  // 0xD
};

struct Timeout {
    void* vfptr;
    unsigned char q000;  // 0x0
    static int GetRemaining(...);  // def-aligned C2039/C3861
};

struct TimerPool {
    void* vfptr;
    unsigned char q000;  // 0x0
};

struct ToggleClass {
    void* vfptr;
    void* vtable1;  // 0x0
    unsigned char q004;  // 0x4
    static double RTTI(...);  // C2039/C3861 interim stub
};

struct ToolTipClass {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    bool IsAllocated;  // 0xD
    unsigned char q010;  // 0x10
    bool IsInitialized;  // 0x12
    unsigned char q014;  // 0x14
    int Count;  // 0x16
    unsigned char q018;  // 0x18
    unsigned char q01C;  // 0x1C
    unsigned char q020;  // 0x20
    unsigned char q024;  // 0x24
    unsigned char q028;  // 0x28
    unsigned char q02C;  // 0x2C
    unsigned char q030;  // 0x30
    unsigned char q034;  // 0x34
    static double initString(...);  // C2039/C3861 interim stub
    static double updateString(...);  // C2039/C3861 interim stub
};

struct Tooltip {
    void* vfptr;
    unsigned char q000;  // 0x0
    static double Enable(...);  // C2039/C3861 interim stub
};

struct Tree {
    void* vfptr;
    unsigned char q000;  // 0x0
    static int Destructor(...);  // def-aligned C2039/C3861
};

struct Triple {
    void* vfptr;
    unsigned char q000;  // 0x0
    static int Set(...);  // def-aligned C2039/C3861
    static int __tail_0(...);  // def-aligned C2039/C3861
};

struct TypeClass {
    void* vfptr;
    unsigned char q000;  // 0x0
    static double FindByName(...);  // C2039/C3861 interim stub
};

struct VQAClass {
    void* vfptr;
    unsigned char q000;  // 0x0
    static double AdvanceFrame(...);  // C2039/C3861 interim stub
};

struct Vector2 {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
};

struct Vector3 {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    static double AddAssign(...);  // C2039/C3861 interim stub
    static double Magnitude(...);  // C2039/C3861 interim stub
    static double Subtract(...);  // C2039/C3861 interim stub
};

struct Vector4 {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    static double EraseAt_Copy(...);  // C2039/C3861 interim stub
};

struct VectorClassUInt {
    void* vfptr;
    unsigned char q000;  // 0x0
    static int Constructor(...);  // def-aligned C2039/C3861
};

struct Viewport {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    static double Clear(...);  // C2039/C3861 interim stub
};

struct VoxelAnimTypeVector {
    void* vfptr;
    unsigned char q000;  // 0x0
    static int Constructor(...);  // def-aligned C2039/C3861
};

struct VoxelSection {
    void* vfptr;
    unsigned char q000;  // 0x0
    static double GetInfo(...);  // C2039/C3861 interim stub
};

struct WDTClass {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    static double GetCellType(...);  // C2039/C3861 interim stub
};

struct WDTObject {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    static double GetSize(...);  // C2039/C3861 interim stub
};

struct WTFMode {
    void* vfptr;
    unsigned int u32_18;  // 0x18
    unsigned int q024;  // 0x24
    unsigned int u32_30;  // 0x30
    unsigned int u32_3C;  // 0x3C
    unsigned char u8_3D;  // 0x3D
    IUnknown* q040;  // 0x40
    AudioController* q050;  // 0x50
    unsigned int q054;  // 0x54
    AudioController* q05C;  // 0x5C
    IUnknown* q064;  // 0x64
    AudioController* q080;  // 0x80
    void* q0E4;  // 0xE4
    void* q0E8;  // 0xE8
    IUnknown* q100;  // 0x100
    AudioController* q128;  // 0x128
    void* q228;  // 0x228
    unsigned int u32_5D8;  // 0x5D8
    void* q1378;  // 0x1378
    void* q30D8;  // 0x30D8
    unsigned int q5270;  // 0x5270
    static double Shutdown(...);  // C2039/C3861 interim stub
};

struct WinAPI {
    void* vfptr;
    unsigned char q000;  // 0x0
    static int Wrapper(...);  // def-aligned C2039/C3861
};

struct _com_error {
    void* vfptr;
    void* vtable1;  // 0x0
};

struct rc_ptr_base {
    void* vfptr;
    unsigned int u32_4;  // 0x4
    unsigned int u16_C;  // 0xC
    unsigned char u8_E;  // 0xE
    unsigned char u8_F;  // 0xF
    AbstractClass * ptr_10;  // 0x10
    unsigned char u8_12;  // 0x12
    AbstractClass * ptr_13;  // 0x13
    unsigned char u8_14;  // 0x14
    unsigned int u32_18;  // 0x18
    unsigned char u8_1C;  // 0x1C
    unsigned char u8_1E;  // 0x1E
    unsigned char u8_1F;  // 0x1F
    unsigned char u8_20;  // 0x20
    unsigned char u8_22;  // 0x22
    AbstractClass * ptr_23;  // 0x23
    unsigned char u8_24;  // 0x24
    unsigned char u8_26;  // 0x26
    AbstractClass * ptr_27;  // 0x27
    unsigned char u8_28;  // 0x28
    unsigned char u8_2A;  // 0x2A
    unsigned char u8_2B;  // 0x2B
    unsigned char u8_2C;  // 0x2C
    unsigned char u8_2D;  // 0x2D
    unsigned char u8_2E;  // 0x2E
    unsigned char u8_2F;  // 0x2F
    AbstractClass * q030;  // 0x30
    unsigned char u8_32;  // 0x32
    AbstractClass * ptr_21;  // 0x33
    AbstractClass * q034;  // 0x34
    AbstractClass * ptr_25;  // 0x37
    unsigned int q038;  // 0x38
    unsigned char q040;  // 0x40
    AbstractClass * ptr_29;  // 0x41
    unsigned char q044;  // 0x44
    AbstractClass * ptr_30;  // 0x48
    AbstractClass * ptr_31;  // 0x49
    unsigned char q050;  // 0x50
    AbstractClass * ptr_33;  // 0x51
    AbstractClass * ptr_34;  // 0x52
    AbstractClass * ptr_35;  // 0x53
    unsigned int q060;  // 0x60
    unsigned char q064;  // 0x64
    unsigned char q068;  // 0x68
    unsigned char q070;  // 0x70
    unsigned char q080;  // 0x80
    unsigned char q084;  // 0x84
    unsigned char q100;  // 0x100
    unsigned char q104;  // 0x104
    AbstractClass * q114;  // 0x114
    unsigned char q128;  // 0x128
    AbstractClass * q130;  // 0x130
    unsigned int q134;  // 0x134
    unsigned int q150;  // 0x150
    unsigned int u32_214;  // 0x214
    unsigned char q258;  // 0x258
    unsigned char q260;  // 0x260
    unsigned char q274;  // 0x274
    AbstractClass * q304;  // 0x304
    unsigned int q308;  // 0x308
};


} // namespace gamemd
