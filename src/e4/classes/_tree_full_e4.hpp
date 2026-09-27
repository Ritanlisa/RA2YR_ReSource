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
struct ArmorType;
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
struct GameOptions;
struct GameResult;
struct GameScreen;
struct GameState;
struct Gap2Recv_402F60;
struct Gap2Recv_4048B0;
struct GenericList;
struct Hash;
struct HashMap;
struct HashTree;
struct HashVector_UInt;
struct Heap;
struct IDXContainer;
struct ILocomotion;
struct INISectionList;
struct InputManager_ProcessEvents;
struct Int4;
struct IntDynamicVector;
struct IntVector;
struct IsRandMap;
struct KeyValuePair;
struct KeywordClass;
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
struct NetMessage;
struct NetworkEventQueueClass;
struct NetworkID;
struct NetworkSettings;
struct ObjectPlacement;
struct ObjectPtr;
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
struct SaveLoad;
struct SaveLoadDialog;
struct ScreenSaver;
struct ScriptQueue;
struct SerialPort;
struct SettingsClass;
struct ShapeButton;
struct ShapeButtonClass;
struct ShroudClass;
struct SlaveControlVector;
struct SpawnControlVector;
struct SquadClass;
struct State;
struct StaticString;
struct Straw;
struct StringTable;
struct StringVector;
struct StructTable;
struct SubzoneConnectionVector;
struct SubzoneHashVector;
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
struct VoxelPalette;
struct VoxelSection;
struct WDTClass;
struct WDTObject;
struct WTFMode;
struct WinAPI;
struct WordVector;

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
    static double Constructor(...);  // C2039/C3861 interim stub
};

struct ArmorType {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    static double FindIndex(...);  // C2039/C3861 interim stub
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
    static double Release(...);  // C2039/C3861 interim stub
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
    static double TestBit(...);  // C2039/C3861 interim stub
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
    static double GetNext(...);  // C2039/C3861 interim stub
    static double FindBuilding(...);  // C2039/C3861 interim stub
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
    static double __pad_0(...);  // C2039/C3861 interim stub
    static double __pad_08C(...);  // C2039/C3861 interim stub
};

struct CaptureManager {
    void* vfptr;
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
    static double ProcessPickup(...);  // C2039/C3861 interim stub
};

struct DListNode {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    static double InitEmpty(...);  // C2039/C3861 interim stub
};

struct DeleteAndZero {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    static double Alt(...);  // C2039/C3861 interim stub
    static double Alt2(...);  // C2039/C3861 interim stub
    static double OrFree(...);  // C2039/C3861 interim stub
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
    static double Constructor(...);  // C2039/C3861 interim stub
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
    static double Constructor(...);  // C2039/C3861 interim stub
    static double MapHandler(...);  // C2039/C3861 interim stub
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
    static double Destructor(...);  // C2039/C3861 interim stub
    static double Open(...);  // C2039/C3861 interim stub
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
    static double IsNot2(...);  // C2039/C3861 interim stub
    static double IsZero(...);  // C2039/C3861 interim stub
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
    static double Init(...);  // C2039/C3861 interim stub
    static double InitMax(...);  // C2039/C3861 interim stub
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
    AbstractClass * q8264;  // 0x8264
    CampaignClass * q8450;  // 0x8450
    unsigned int q17540;  // 0x17540
    unsigned int q17928;  // 0x17928
    unsigned int q18818;  // 0x18818
    char q18820;  // 0x18820
    unsigned int q20848;  // 0x20848
    unsigned int q21600;  // 0x21600
    CampaignClass * q21650;  // 0x21650
    AbstractClass * q22080;  // 0x22080
    unsigned int q22120;  // 0x22120
    unsigned int q22148;  // 0x22148
    unsigned int q25654;  // 0x25654
    AbstractClass * q33380;  // 0x33380
    unsigned int q33398;  // 0x33398
    unsigned int q33570;  // 0x33570
    unsigned int q33894;  // 0x33894
    unsigned int q91958;  // 0x91958
    char q100384;  // 0x100384
    int q133010;  // 0x133010
    unsigned int q136704;  // 0x136704
    CampaignClass * q136784;  // 0x136784
    unsigned int q137078;  // 0x137078
    unsigned int q152118;  // 0x152118
    unsigned int q153094;  // 0x153094
    LineTrail * q153174;  // 0x153174
    unsigned int q210288;  // 0x210288
    CampaignClass * q211058;  // 0x211058
    unsigned int q226598;  // 0x226598
    unsigned int q1253958;  // 0x1253958
    int q1257488;  // 0x1257488
    unsigned int q1257874;  // 0x1257874
    unsigned int q1271138;  // 0x1271138
    CampaignClass * q1271684;  // 0x1271684
    CampaignClass * q1282918;  // 0x1282918
    unsigned int q1283410;  // 0x1283410
    unsigned int q1283474;  // 0x1283474
    unsigned int q1384728;  // 0x1384728
    unsigned int q1388914;  // 0x1388914
    AbstractClass * q2135954;  // 0x2135954
    unsigned int q2166930;  // 0x2166930
    unsigned int q19216728;  // 0x19216728
    int q19231880;  // 0x19231880
    unsigned int q19232884;  // 0x19232884
    unsigned int q19337528;  // 0x19337528
    CampaignClass * q19338884;  // 0x19338884
    unsigned int q19347830;  // 0x19347830
    AbstractClass * q19409250;  // 0x19409250
    unsigned int q19411984;  // 0x19411984
    unsigned int q19412084;  // 0x19412084
    unsigned int q20465448;  // 0x20465448
    unsigned int q20482324;  // 0x20482324
    AbstractClass * q34822484;  // 0x34822484
    unsigned int q35009334;  // 0x35009334
    unsigned int q35996210;  // 0x35996210
    unsigned int q92635238;  // 0x92635238
    unsigned int q386364230;  // 0x386364230
    unsigned int q422802728;  // 0x422802728
    unsigned int q422806914;  // 0x422806914
    CampaignClass * q422807684;  // 0x422807684
    unsigned int q422869040;  // 0x422869040
    AbstractClass * q423662160;  // 0x423662160
    unsigned int q423698564;  // 0x423698564
    unsigned int q541480008;  // 0x541480008
    unsigned int q541598500;  // 0x541598500
    AbstractClass * q880944260;  // 0x880944260
    CampaignClass * q889334114;  // 0x889334114
    unsigned int q899244560;  // 0x899244560
    unsigned int q2455982648;  // 0x2455982648
    unsigned int q4364247650;  // 0x4364247650
    unsigned int q4365243654;  // 0x4365243654
    unsigned int q15136604720;  // 0x15136604720
    char q15136604770;  // 0x15136604770
    unsigned int q17758693160;  // 0x17758693160
    unsigned int q17758713478;  // 0x17758713478
    unsigned int q17759113280;  // 0x17759113280
    AbstractClass * q17773764960;  // 0x17773764960
    unsigned int q22570074120;  // 0x22570074120
    unsigned int q22571209318;  // 0x22571209318
    LineTrail * q22571222274;  // 0x22571222274
    unsigned int q36516995330;  // 0x36516995330
    unsigned int q36661584198;  // 0x36661584198
    unsigned int q156054857288;  // 0x156054857288
    unsigned int q1448316258080;  // 0x1448316258080
    char q1448316258160;  // 0x1448316258160
    unsigned int q1611578549058;  // 0x1611578549058
    int q1611703603238;  // 0x1611703603238
    unsigned int q1612096024928;  // 0x1612096024928
    unsigned int q1612096536630;  // 0x1612096536630
    unsigned int q1612096550008;  // 0x1612096550008
    unsigned int q1612107035264;  // 0x1612107035264
    CampaignClass * q1612549859458;  // 0x1612549859458
    unsigned int q1612552106354;  // 0x1612552106354
    unsigned int q2359816569120;  // 0x2359816569120
    unsigned int q2359835005720;  // 0x2359835005720
    unsigned int q2359835107954;  // 0x2359835107954
    AbstractClass * q3732705346358;  // 0x3732705346358
    unsigned int q3732705727280;  // 0x3732705727280
    CampaignClass * q3738254661974;  // 0x3738254661974
    unsigned int q3750194484338;  // 0x3750194484338
    unsigned int q23503479075464;  // 0x23503479075464
    unsigned int q356804779671680;  // 0x356804779671680
    char q356804779671904;  // 0x356804779671904
    unsigned int q388219817726040;  // 0x388219817726040
    unsigned int q388267560290600;  // 0x388267560290600
    unsigned int q388267565606448;  // 0x388267565606448
    unsigned int q388267565711368;  // 0x388267565711368
    unsigned int q388269456183908;  // 0x388269456183908
    unsigned int q621877793937184;  // 0x621877793937184
    LineTrail * q621877794994518;  // 0x621877794994518
    unsigned int q971036362437248;  // 0x971036362437248
    unsigned int q971428040484870;  // 0x971428040484870
    CampaignClass * q971428529052020;  // 0x971428529052020
    unsigned int q973074573312824;  // 0x973074573312824
    unsigned int q9939810483917924;  // 0x9939810483917924
    int q254491193000887958;  // 0x254491193000887958
    unsigned int q254495664600278088;  // 0x254495664600278088
    CampaignClass * q254495664601371494;  // 0x254495664601371494
    unsigned int q254495797487876360;  // 0x254495797487876360
    AbstractClass * q254497871881323270;  // 0x254497871881323270
    unsigned int q254497877295003970;  // 0x254497877295003970
    unsigned int q254497877309523350;  // 0x254497877309523350
    unsigned int q441783164189885490;  // 0x441783164189885490
    unsigned int q441783186122949910;  // 0x441783186122949910
    unsigned int q680895963529816100;  // 0x680895963529816100
    unsigned int q28987213957842482274;  // 0x28987213957842482274
    char q664452195371059458838;  // 0x664452195371059458838
    unsigned int q687470033808347431734;  // 0x687470033808347431734
    int q687470288687413623128;  // 0x687470288687413623128
    CampaignClass * q687471499344216528020;  // 0x687471499344216528020
    CampaignClass * q687472098382617781378;  // 0x687472098382617781378
    AbstractClass * ptr_120;  // 0x687472098382632333936
    unsigned int q1256072819367807046800;  // 0x1256072819367807046800
    unsigned int q1256072821702053660754;  // 0x1256072821702053660754
    AbstractClass * q1918688943235778218370;  // 0x1918688943235778218370
    unsigned int q1918720364301116346690;  // 0x1918720364301116346690
    unsigned int q80354708348500678551830;  // 0x80354708348500678551830
    unsigned int q7727066811216743666898434;  // 0x7727066811216743666898434
    unsigned int q7892384126200935667144500;  // 0x7892384126200935667144500
    unsigned int q2479905610309400749000693808;  // 0x2479905610309400749000693808
    unsigned int q7764961091878984669135918598;  // 0x7764961091878984669135918598
    unsigned int q7764961092133969250445526098;  // 0x7764961092133969250445526098
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
    unsigned int q8520;  // 0x8520
    unsigned int q25608;  // 0x25608
    unsigned int q34080;  // 0x34080
    unsigned int q153094;  // 0x153094
    unsigned int q213120;  // 0x213120
    unsigned int q1388694;  // 0x1388694
    unsigned int q2175264;  // 0x2175264
    unsigned int q20481684;  // 0x20481684
    unsigned int q541595268;  // 0x541595268
    unsigned int q889727058;  // 0x889727058
    unsigned int q22571209320;  // 0x22571209320
    unsigned int q36665716824;  // 0x36665716824
    unsigned int q3738323478564;  // 0x3738323478564
    unsigned int q971431999931748;  // 0x971431999931748
    unsigned int q680398795939452744;  // 0x680398795939452744
};

struct GenericList {
    void* vfptr;
    void* vtable1;  // 0x0
    static double Constructor(...);  // C2039/C3861 interim stub
};

struct Hash {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    static double ComputeHashSHA1(...);  // C2039/C3861 interim stub
    static double InsertOrdered(...);  // C2039/C3861 interim stub
    static double Reset(...);  // C2039/C3861 interim stub
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

struct HashVector_UInt {
    void* vfptr;
    unsigned char q000;  // 0x0
    static double Construct(...);  // C2039/C3861 interim stub
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

struct ILocomotion {
    void* vfptr;
    unsigned char q000;  // 0x0
    static double q008(...);  // C2039/C3861 interim stub
};

struct INISectionList {
    void* vfptr;
    unsigned char q000;  // 0x0
    static double Constructor(...);  // C2039/C3861 interim stub
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
    static double Set(...);  // C2039/C3861 interim stub
};

struct IntDynamicVector {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    static double Construct(...);  // C2039/C3861 interim stub
};

struct IntVector {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    static double Copy(...);  // C2039/C3861 interim stub
};

struct IsRandMap {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    static double Sed(...);  // C2039/C3861 interim stub
    static double Sed2(...);  // C2039/C3861 interim stub
};

struct KeyValuePair {
    void* vfptr;
    unsigned char q000;  // 0x0
    static double Init(...);  // C2039/C3861 interim stub
};

struct KeywordClass {
    void* vfptr;
    unsigned char q000;  // 0x0
    static double FindOrCreate(...);  // C2039/C3861 interim stub
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
    static double Construct(...);  // C2039/C3861 interim stub
    static double Destruct(...);  // C2039/C3861 interim stub
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
    static double Constructor(...);  // C2039/C3861 interim stub
    static double Constructor2(...);  // C2039/C3861 interim stub
    static double MPTeam(...);  // C2039/C3861 interim stub
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
    static double RotateX(...);  // C2039/C3861 interim stub
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
    static double Cleanup(...);  // C2039/C3861 interim stub
};

struct Multiplay {
    void* vfptr;
    unsigned char q000;  // 0x0
    static double LogToSYNC_NOMPDEBUG(...);  // C2039/C3861 interim stub
};

struct MultiplayerConfig {
    void* vfptr;
    unsigned char q000;  // 0x0
    static double Cleanup(...);  // C2039/C3861 interim stub
};

struct NetMessage {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    static double Pack4(...);  // C2039/C3861 interim stub
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
    static double DlgProc(...);  // C2039/C3861 interim stub
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

struct OptionQueue {
    void* vfptr;
    unsigned char q000;  // 0x0
    static double PushEntry(...);  // C2039/C3861 interim stub
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
    static double Dtor(...);  // C2039/C3861 interim stub
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
    static double Add(...);  // C2039/C3861 interim stub
};

struct ProductionClass {
    void* vfptr;
    unsigned char q000;  // 0x0
    static double StartTimer(...);  // C2039/C3861 interim stub
};

struct ProgressAnim {
    void* vfptr;
    unsigned char q000;  // 0x0
    static double Init(...);  // C2039/C3861 interim stub
};

struct Property {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    static double GetField11(...);  // C2039/C3861 interim stub
    static double Set(...);  // C2039/C3861 interim stub
};

struct PtrVector {
    void* vfptr;
    unsigned char q000;  // 0x0
    static double Destroy(...);  // C2039/C3861 interim stub
};

struct PushCommandClass {
    void* vfptr;
    unsigned char q000;  // 0x0
    static double Execute(...);  // C2039/C3861 interim stub
};

struct Queue {
    void* vfptr;
    static double GetNext(...);  // C2039/C3861 interim stub
};

struct Random {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    static double Gaussian(...);  // C2039/C3861 interim stub
    static double Range(...);  // C2039/C3861 interim stub
    static double State(...);  // C2039/C3861 interim stub
};

struct Rect_Point {
    void* vfptr;
    unsigned char q000;  // 0x0
    static double Set(...);  // C2039/C3861 interim stub
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
    static double Load(...);  // C2039/C3861 interim stub
};

struct SaveLoad {
    void* vfptr;
    unsigned char q000;  // 0x0
};

struct SaveLoadDialog {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    static double DlgProc(...);  // C2039/C3861 interim stub
};

struct ScreenSaver {
    void* vfptr;
    static double Process(...);  // C2039/C3861 interim stub
};

struct ScriptQueue {
    void* vfptr;
    unsigned char q000;  // 0x0
    static double PushEntry(...);  // C2039/C3861 interim stub
};

struct SerialPort {
    void* vfptr;
    unsigned char q000;  // 0x0
    static double Close(...);  // C2039/C3861 interim stub
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
    static double Draw(...);  // C2039/C3861 interim stub
    static double SetShape(...);  // C2039/C3861 interim stub
};

struct ShapeButtonClass {
    void* vfptr;
    void* vtable1;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    static double Constructor(...);  // C2039/C3861 interim stub
};

struct ShroudClass {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    static double UpdateVisibility(...);  // C2039/C3861 interim stub
};

struct SlaveControlVector {
    void* vfptr;
    unsigned char q000;  // 0x0
    static double Constructor(...);  // C2039/C3861 interim stub
};

struct SpawnControlVector {
    void* vfptr;
    unsigned char q000;  // 0x0
    static double Constructor(...);  // C2039/C3861 interim stub
};

struct SquadClass {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    static double ProcessMove(...);  // C2039/C3861 interim stub
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
    static double Dtor(...);  // C2039/C3861 interim stub
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
    static double Construct(...);  // C2039/C3861 interim stub
};

struct StructTable {
    void* vfptr;
    unsigned char q000;  // 0x0
    static double Append(...);  // C2039/C3861 interim stub
};

struct SubzoneConnectionVector {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    static double Destruct(...);  // C2039/C3861 interim stub
};

struct SubzoneHashVector {
    void* vfptr;
    unsigned char q000;  // 0x0
    static double Construct(...);  // C2039/C3861 interim stub
};

struct SwizzleManager {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    static double SaveLoad(...);  // C2039/C3861 interim stub
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
    static double Update(...);  // C2039/C3861 interim stub
};

struct TechnoTypeVector {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    static double Constructor(...);  // C2039/C3861 interim stub
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
    static double InitView(...);  // C2039/C3861 interim stub
};

struct TileData {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned int u16_2;  // 0x2
    static double Constructor(...);  // C2039/C3861 interim stub
};

struct TileNode {
    void* vfptr;
    unsigned char q000;  // 0x0
    static double Cleanup(...);  // C2039/C3861 interim stub
};

struct TileSystem {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned char u8_D;  // 0xD
    static double Constructor(...);  // C2039/C3861 interim stub
};

struct Timeout {
    void* vfptr;
    unsigned char q000;  // 0x0
    static double GetRemaining(...);  // C2039/C3861 interim stub
};

struct TimerPool {
    void* vfptr;
    unsigned char q000;  // 0x0
    static double AllocSlot(...);  // C2039/C3861 interim stub
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
    static double Destructor(...);  // C2039/C3861 interim stub
};

struct Triple {
    void* vfptr;
    unsigned char q000;  // 0x0
    static double Set(...);  // C2039/C3861 interim stub
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
    static double NormalizeNonZero(...);  // C2039/C3861 interim stub
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
    static double Constructor(...);  // C2039/C3861 interim stub
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
    static double Constructor(...);  // C2039/C3861 interim stub
};

struct VoxelPalette {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    static double Init(...);  // C2039/C3861 interim stub
    static double Reset(...);  // C2039/C3861 interim stub
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
    void* q12504;  // 0x12504
    unsigned int q21104;  // 0x21104
    void* q479250;  // 0x479250
    static double Shutdown(...);  // C2039/C3861 interim stub
};

struct WinAPI {
    void* vfptr;
    unsigned char q000;  // 0x0
    static double Wrapper(...);  // C2039/C3861 interim stub
};

struct WordVector {
    void* vfptr;
    unsigned char q000;  // 0x0
    static double Constructor(...);  // C2039/C3861 interim stub
};


} // namespace gamemd
