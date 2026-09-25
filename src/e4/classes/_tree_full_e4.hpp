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
struct INISectionList;
struct InputManager_ProcessEvents;
struct Int4;
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
struct Matrix3D;
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
struct SafeDelete;
struct SaveLoadDialog;
struct ScoreText;
struct ScreenSaver;
struct ScriptQueue;
struct SerialPort;
struct SettingsClass;
struct ShapeButton;
struct ShapeButtonClass;
struct ShroudClass;
struct SimpleDialogControl;
struct SlaveControlVector;
struct SpawnControlVector;
struct SquadClass;
struct StartCombo;
struct StaticString;
struct Straw;
struct StringList;
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
    unsigned char q004;  // 0x4
    unsigned int u32_C;  // 0xC
    unsigned int u32_10;  // 0x10
};

struct AircraftTrackerClass {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned int u32_20;  // 0x20
    unsigned char q024;  // 0x24
    unsigned int u32_30;  // 0x30
};

struct AircraftTypeVector {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned int u32_C;  // 0xC
    unsigned int u32_D;  // 0xD
};

struct AllocCallback {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q1B4;  // 0x1B4
    unsigned char q1B8;  // 0x1B8
    unsigned char q1BC;  // 0x1BC
    unsigned char q1C0;  // 0x1C0
    unsigned char q1C4;  // 0x1C4
    unsigned char q440;  // 0x440
    unsigned char q444;  // 0x444
    unsigned char q448;  // 0x448
    unsigned char q1078;  // 0x1078
    unsigned char q107C;  // 0x107C
    unsigned char q1080;  // 0x1080
    unsigned char q1088;  // 0x1088
    unsigned char q108C;  // 0x108C
    unsigned char q20E0;  // 0x20E0
};

struct AnimTypeVector {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned int u32_C;  // 0xC
    unsigned int u32_D;  // 0xD
};

struct AssetClass {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    void* q00C;  // 0xC
    unsigned char q010;  // 0x10
    unsigned char q014;  // 0x14
    void* q018;  // 0x18
    unsigned char q01C;  // 0x1C
    unsigned char q020;  // 0x20
    void* q024;  // 0x24
};

struct AudioChannel {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned char q018;  // 0x18
    unsigned char q024;  // 0x24
    unsigned int q029;  // 0x29
    unsigned char q02D;  // 0x2D
    unsigned char q035;  // 0x35
};

struct AudioConfig {
    void* vfptr;
    unsigned char q000;  // 0x0
};

struct AudioFile {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned int q029;  // 0x29
    unsigned char q02D;  // 0x2D
    void* q0D4;  // 0xD4
    unsigned char q0D8;  // 0xD8
    unsigned char q0EC;  // 0xEC
    unsigned char q0F0;  // 0xF0
    unsigned char q110;  // 0x110
    unsigned char q114;  // 0x114
    unsigned char q1AC;  // 0x1AC
    unsigned char q1B0;  // 0x1B0
    unsigned char q35C;  // 0x35C
    unsigned char q360;  // 0x360
    unsigned char q374;  // 0x374
    unsigned char q378;  // 0x378
    void* q530;  // 0x530
    unsigned char q534;  // 0x534
    unsigned char q538;  // 0x538
    unsigned char q554;  // 0x554
    unsigned char q558;  // 0x558
    unsigned char q68C;  // 0x68C
    unsigned char q690;  // 0x690
    unsigned char q860;  // 0x860
    unsigned char q864;  // 0x864
    unsigned char qA34;  // 0xA34
    unsigned char qA38;  // 0xA38
    void* q1328;  // 0x1328
};

struct AudioFileClass {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    void* q090;  // 0x90
    unsigned char q094;  // 0x94
    void* q0BC;  // 0xBC
    unsigned char q0C0;  // 0xC0
    unsigned char q0C4;  // 0xC4
    unsigned char q0C8;  // 0xC8
    unsigned char q0CC;  // 0xCC
    void* q144;  // 0x144
    unsigned char q148;  // 0x148
    unsigned char q14C;  // 0x14C
    unsigned char q170;  // 0x170
    unsigned char q174;  // 0x174
    unsigned char q178;  // 0x178
    unsigned char q17C;  // 0x17C
    void* q188;  // 0x188
    unsigned char q18C;  // 0x18C
    unsigned char q190;  // 0x190
    unsigned char q194;  // 0x194
    void* q324;  // 0x324
    unsigned char q328;  // 0x328
    unsigned char q32C;  // 0x32C
    unsigned char q350;  // 0x350
    unsigned char q354;  // 0x354
    unsigned char q358;  // 0x358
    unsigned char q368;  // 0x368
    unsigned char q36C;  // 0x36C
    unsigned char q380;  // 0x380
    unsigned char q384;  // 0x384
    unsigned char q39C;  // 0x39C
    unsigned char q3A0;  // 0x3A0
    unsigned char q534;  // 0x534
    unsigned char q538;  // 0x538
    void* q804;  // 0x804
    unsigned char q808;  // 0x808
    unsigned char q80C;  // 0x80C
    unsigned char q830;  // 0x830
    unsigned char q834;  // 0x834
    unsigned char q848;  // 0x848
    unsigned char q84C;  // 0x84C
    unsigned char q860;  // 0x860
    unsigned char q864;  // 0x864
    unsigned char q8A8;  // 0x8A8
    unsigned char q8AC;  // 0x8AC
    void* q914;  // 0x914
};

struct AudioFrame {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
};

struct AudioIndex {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    void* q018;  // 0x18
    void* q01C;  // 0x1C
    void* q020;  // 0x20
    void* q024;  // 0x24
    void* q028;  // 0x28
    unsigned char q02C;  // 0x2C
    unsigned char q030;  // 0x30
    unsigned char q034;  // 0x34
    void* q040;  // 0x40
    unsigned char q044;  // 0x44
    unsigned char q048;  // 0x48
    unsigned char q04C;  // 0x4C
    void* q050;  // 0x50
    void* q054;  // 0x54
    unsigned char q058;  // 0x58
    unsigned char q05C;  // 0x5C
    void* q064;  // 0x64
    unsigned char q068;  // 0x68
    unsigned char q06C;  // 0x6C
    unsigned char q074;  // 0x74
    unsigned char q078;  // 0x78
    void* q080;  // 0x80
};

struct AudioList {
    void* vfptr;
    unsigned char q000;  // 0x0
    void* q004;  // 0x4
};

struct AudioNode {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    void* q014;  // 0x14
    unsigned char q018;  // 0x18
    unsigned char q01C;  // 0x1C
    void* q020;  // 0x20
    unsigned char q024;  // 0x24
    unsigned char q028;  // 0x28
    unsigned char q02C;  // 0x2C
    unsigned char q030;  // 0x30
    unsigned char q034;  // 0x34
    unsigned char q044;  // 0x44
    unsigned char q048;  // 0x48
    void* q050;  // 0x50
};

struct AudioPool {
    void* vfptr;
    unsigned char q000;  // 0x0
};

struct AudioSample {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned char q010;  // 0x10
    void* q014;  // 0x14
    unsigned char q018;  // 0x18
    unsigned char q01C;  // 0x1C
    void* q020;  // 0x20
    unsigned char q024;  // 0x24
    unsigned int q025;  // 0x25
    unsigned int q026;  // 0x26
    unsigned int q027;  // 0x27
    void* q028;  // 0x28
    unsigned int q029;  // 0x29
    BufferIOFileClass* q02A;  // 0x2A
    void* q02C;  // 0x2C
    bool q02D;  // 0x2D
    unsigned char q02E;  // 0x2E
    unsigned int q02F;  // 0x2F
    unsigned char q033;  // 0x33
    unsigned char q034;  // 0x34
    unsigned char q035;  // 0x35
    unsigned int q038;  // 0x38
    unsigned char q03C;  // 0x3C
    void* q040;  // 0x40
    void* q044;  // 0x44
    unsigned char q048;  // 0x48
    void* q050;  // 0x50
    unsigned char q054;  // 0x54
    unsigned char q058;  // 0x58
    unsigned char q059;  // 0x59
    unsigned int q05A;  // 0x5A
    void* q064;  // 0x64
    void* q068;  // 0x68
    unsigned char q06C;  // 0x6C
    unsigned char q070;  // 0x70
    unsigned char q074;  // 0x74
    unsigned char q088;  // 0x88
    unsigned char q08C;  // 0x8C
    unsigned int q090;  // 0x90
    unsigned char q094;  // 0x94
    void* q100;  // 0x100
    void* q104;  // 0x104
    unsigned char q108;  // 0x108
    unsigned char q118;  // 0x118
    unsigned char q11C;  // 0x11C
    unsigned int q144;  // 0x144
    unsigned char q148;  // 0x148
    unsigned char q154;  // 0x154
    unsigned char q158;  // 0x158
    unsigned char q1D8;  // 0x1D8
    unsigned char q1DC;  // 0x1DC
    unsigned char q280;  // 0x280
    unsigned char q284;  // 0x284
    unsigned char q298;  // 0x298
    unsigned char q29C;  // 0x29C
    unsigned char q2A4;  // 0x2A4
    unsigned char q2A8;  // 0x2A8
    unsigned char q310;  // 0x310
    unsigned char q314;  // 0x314
    unsigned int q324;  // 0x324
};

struct AudioSource {
    void* vfptr;
    unsigned char q000;  // 0x0
    void* q004;  // 0x4
    void* q008;  // 0x8
};

struct AudioTimer {
    void* vfptr;
    unsigned char q000;  // 0x0
};

struct BTree {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned int u32_10;  // 0x10
};

struct BaseNodeClass {
    void* vfptr;
    char buildingTypeIndex[4];  // 0x0
    char mapCoords[4];  // 0x4
    bool placed;  // 0x8
    char attempts[4];  // 0xC
    unsigned int q00D;  // 0xD
    unsigned int q018;  // 0x18
    unsigned char q01C;  // 0x1C
    unsigned int q024;  // 0x24
};

struct BigInt {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned char q010;  // 0x10
    unsigned char q014;  // 0x14
    unsigned char q018;  // 0x18
    unsigned char q01C;  // 0x1C
    unsigned char q020;  // 0x20
    unsigned char q024;  // 0x24
    unsigned char q028;  // 0x28
    unsigned char q02C;  // 0x2C
    unsigned char q034;  // 0x34
    unsigned char q038;  // 0x38
    unsigned int u32_200;  // 0x200
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
    unsigned char q00C;  // 0xC
    unsigned char q018;  // 0x18
    unsigned char q024;  // 0x24
    void* q060;  // 0x60
    unsigned char q064;  // 0x64
    unsigned char q06C;  // 0x6C
    unsigned char q070;  // 0x70
    unsigned char q078;  // 0x78
    unsigned char q07C;  // 0x7C
    unsigned char q108;  // 0x108
    unsigned char q10C;  // 0x10C
    void* q150;  // 0x150
    unsigned char q154;  // 0x154
    unsigned char q158;  // 0x158
    unsigned char q1BC;  // 0x1BC
    unsigned char q1C0;  // 0x1C0
    unsigned char q258;  // 0x258
    unsigned char q25C;  // 0x25C
    unsigned char q288;  // 0x288
    unsigned char q28C;  // 0x28C
    unsigned char q324;  // 0x324
};

struct BuildingLightQueue {
    void* vfptr;
    unsigned char q000;  // 0x0
};

struct BuildingLoadQueue {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned char q010;  // 0x10
    unsigned char q014;  // 0x14
    unsigned char q018;  // 0x18
    unsigned char q01C;  // 0x1C
    unsigned char q020;  // 0x20
    unsigned char q024;  // 0x24
    unsigned char q028;  // 0x28
    unsigned char q02C;  // 0x2C
    unsigned char q034;  // 0x34
};

struct ButtonClass {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    void* q05C;  // 0x5C
    unsigned char q060;  // 0x60
    unsigned char q064;  // 0x64
    unsigned char q068;  // 0x68
    unsigned char q06C;  // 0x6C
    unsigned char q0C8;  // 0xC8
    unsigned char q0CC;  // 0xCC
    unsigned char q0D0;  // 0xD0
    unsigned char q100;  // 0x100
    unsigned char q104;  // 0x104
    unsigned char q150;  // 0x150
    unsigned char q154;  // 0x154
    unsigned char q200;  // 0x200
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
    unsigned char q024;  // 0x24
    unsigned char q028;  // 0x28
    unsigned char q02C;  // 0x2C
    unsigned char q030;  // 0x30
    unsigned char q034;  // 0x34
    unsigned char q038;  // 0x38
    unsigned char q03C;  // 0x3C
    unsigned char q040;  // 0x40
    unsigned char q044;  // 0x44
    unsigned char q048;  // 0x48
    unsigned char q04C;  // 0x4C
    unsigned char q050;  // 0x50
    unsigned char q054;  // 0x54
    unsigned char q058;  // 0x58
    unsigned char q060;  // 0x60
    unsigned char q064;  // 0x64
    unsigned char q068;  // 0x68
    unsigned char q06C;  // 0x6C
    unsigned char q074;  // 0x74
    unsigned char q078;  // 0x78
    unsigned char q080;  // 0x80
    unsigned char q084;  // 0x84
    unsigned char q088;  // 0x88
    unsigned char q100;  // 0x100
    unsigned char q104;  // 0x104
    unsigned char q108;  // 0x108
    unsigned char q128;  // 0x128
    unsigned char q12C;  // 0x12C
    unsigned char q130;  // 0x130
    unsigned char q134;  // 0x134
    unsigned char q138;  // 0x138
    void* q34B8;  // 0x34B8
    unsigned char q34BC;  // 0x34BC
    unsigned char q13500;  // 0x13500
    void* q78998;  // 0x78998
    unsigned char q79104;  // 0x79104
    void* q89E000;  // 0x89E000
    unsigned char q89E004;  // 0x89E004
    unsigned char q8AE044;  // 0x8AE044
    unsigned char q8AE048;  // 0x8AE048
    unsigned char q913C48;  // 0x913C48
    unsigned char q913C4C;  // 0x913C4C
    unsigned char q9101380;  // 0x9101380
    unsigned char q9101384;  // 0x9101384
    unsigned char q11C39C80;  // 0x11C39C80
    unsigned char q11C39C84;  // 0x11C39C84
    unsigned char q1512DF54C;  // 0x1512DF54C
    unsigned char q1512DF550;  // 0x1512DF550
    unsigned char q15A7CFC44;  // 0x15A7CFC44
    unsigned char q15A7CFC48;  // 0x15A7CFC48
    unsigned char q294161074;  // 0x294161074
    unsigned char q294161078;  // 0x294161078
    unsigned char q3D3AEBF04;  // 0x3D3AEBF04
    unsigned char q3D3AEBF08;  // 0x3D3AEBF08
    void* q5656099138;  // 0x5656099138
};

struct CaptureManager {
    void* vfptr;
    unsigned int u32_34;  // 0x34
    unsigned int q040;  // 0x40
    unsigned int q064;  // 0x64
    unsigned int q100;  // 0x100
    unsigned int q130;  // 0x130
};

struct Char {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned int u32_104;  // 0x104
};

struct ChatEvent {
    void* vfptr;
    unsigned char q000;  // 0x0
    void* q004;  // 0x4
    void* q008;  // 0x8
    void* q00C;  // 0xC
    unsigned char q010;  // 0x10
    unsigned char q014;  // 0x14
    void* q018;  // 0x18
    unsigned char q01C;  // 0x1C
    unsigned char q020;  // 0x20
    void* q024;  // 0x24
};

struct Checksum {
    void* vfptr;
    unsigned char q000;  // 0x0
};

struct Checksummer {
    void* vfptr;
    unsigned int crcValue;  // 0x0
    unsigned int bytePos;  // 0x4
    unsigned int state;  // 0x8
    unsigned char buffer;  // 0xC
    unsigned char q010;  // 0x10
    unsigned char q014;  // 0x14
    unsigned char q018;  // 0x18
    unsigned char q01C;  // 0x1C
    unsigned char q020;  // 0x20
    unsigned char q024;  // 0x24
    unsigned char q028;  // 0x28
    unsigned char q02C;  // 0x2C
    unsigned char q034;  // 0x34
};

struct Cliff {
    void* vfptr;
    unsigned char q000;  // 0x0
};

struct Conditions {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
};

struct Conflict {
    void* vfptr;
    unsigned char q000;  // 0x0
    Territory* Attacker;  // 0x4
    Territory* Defender;  // 0x8
    int Outcome;  // 0xC
    unsigned int referenceCount;  // 0x10
    unsigned int q014;  // 0x14
    unsigned int q018;  // 0x18
    unsigned char q01C;  // 0x1C
    unsigned int q020;  // 0x20
    unsigned int q024;  // 0x24
    unsigned char q028;  // 0x28
    unsigned char q02C;  // 0x2C
    unsigned char q030;  // 0x30
    unsigned int q034;  // 0x34
    unsigned char q038;  // 0x38
    unsigned char q040;  // 0x40
    unsigned char q044;  // 0x44
    unsigned char q048;  // 0x48
    unsigned char q04C;  // 0x4C
    unsigned int q050;  // 0x50
    unsigned int q054;  // 0x54
    unsigned char q058;  // 0x58
    unsigned char q05C;  // 0x5C
    unsigned char q064;  // 0x64
    unsigned char q068;  // 0x68
    unsigned char q06C;  // 0x6C
    unsigned char q074;  // 0x74
    unsigned char q078;  // 0x78
    unsigned int q080;  // 0x80
};

struct Coord2D {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
};

struct Coord3D {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
};

struct CoordList {
    void* vfptr;
    unsigned char q000;  // 0x0
};

struct CountryCombo {
    void* vfptr;
    unsigned char q000;  // 0x0
};

struct CrateClass {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned char q018;  // 0x18
    unsigned char q024;  // 0x24
    void* q074;  // 0x74
    unsigned char q078;  // 0x78
    unsigned char q120;  // 0x120
    void* q158;  // 0x158
    unsigned char q15C;  // 0x15C
    void* q160;  // 0x160
    unsigned char q164;  // 0x164
    void* q21C;  // 0x21C
    unsigned char q220;  // 0x220
    void* q278;  // 0x278
    unsigned char q288;  // 0x288
    void* q344;  // 0x344
    unsigned char q348;  // 0x348
    void* q540;  // 0x540
    unsigned char q544;  // 0x544
    unsigned char q648;  // 0x648
    unsigned char q840;  // 0x840
    void* q850;  // 0x850
    unsigned char q854;  // 0x854
    void* q8E8;  // 0x8E8
    unsigned char q8EC;  // 0x8EC
    void* qB40;  // 0xB40
    unsigned char qB44;  // 0xB44
    void* qDF8;  // 0xDF8
    unsigned char qDFC;  // 0xDFC
    void* qF84;  // 0xF84
    unsigned char qF88;  // 0xF88
    void* qFA8;  // 0xFA8
    unsigned char qFAC;  // 0xFAC
    void* q1344;  // 0x1344
    unsigned char q1348;  // 0x1348
    void* q2128;  // 0x2128
    void* q2280;  // 0x2280
    unsigned char q2284;  // 0x2284
    void* q2880;  // 0x2880
    unsigned char q2884;  // 0x2884
    unsigned char q3580;  // 0x3580
    unsigned char q3584;  // 0x3584
    unsigned char q3708;  // 0x3708
    unsigned char q370C;  // 0x370C
    unsigned char q3710;  // 0x3710
    unsigned char q3714;  // 0x3714
    void* q4008;  // 0x4008
    unsigned char q400C;  // 0x400C
    unsigned char q4010;  // 0x4010
    unsigned char q4014;  // 0x4014
    unsigned char q6524;  // 0x6524
    unsigned char q6528;  // 0x6528
    unsigned char q652C;  // 0x652C
    void* q10368;  // 0x10368
    unsigned char q1036C;  // 0x1036C
    unsigned char q10370;  // 0x10370
    unsigned char q10374;  // 0x10374
    unsigned char q13690;  // 0x13690
    unsigned char q13694;  // 0x13694
    unsigned char q14088;  // 0x14088
    unsigned char q1408C;  // 0x1408C
    unsigned char q142F8;  // 0x142F8
    unsigned char q142FC;  // 0x142FC
    unsigned char q14710;  // 0x14710
    unsigned char q14714;  // 0x14714
    unsigned char q14730;  // 0x14730
    unsigned char q14734;  // 0x14734
    unsigned char q14738;  // 0x14738
    unsigned char q14DB4;  // 0x14DB4
    unsigned char q14DB8;  // 0x14DB8
    unsigned char q14DBC;  // 0x14DBC
    unsigned char q1639C;  // 0x1639C
    unsigned char q163A0;  // 0x163A0
    unsigned char q163A4;  // 0x163A4
    unsigned char q16400;  // 0x16400
    unsigned char q16404;  // 0x16404
    unsigned char q18914;  // 0x18914
    unsigned char q18918;  // 0x18918
    unsigned char q27BA0;  // 0x27BA0
    unsigned char q27BA4;  // 0x27BA4
    unsigned char q34870;  // 0x34870
    unsigned char q34874;  // 0x34874
    unsigned char q34AC4;  // 0x34AC4
    unsigned char q34AC8;  // 0x34AC8
    unsigned char q3CD44;  // 0x3CD44
    unsigned char q3CD48;  // 0x3CD48
    void* q66408;  // 0x66408
    unsigned char q6640C;  // 0x6640C
    unsigned char q66410;  // 0x66410
    unsigned char q66418;  // 0x66418
    unsigned char q6641C;  // 0x6641C
    unsigned char q666CC;  // 0x666CC
    unsigned char q666D0;  // 0x666D0
    unsigned char q67110;  // 0x67110
    unsigned char q67114;  // 0x67114
    unsigned char q69FEC;  // 0x69FEC
    unsigned char q69FF0;  // 0x69FF0
    unsigned char q79290;  // 0x79290
    unsigned char q79294;  // 0x79294
    unsigned char q7935C;  // 0x7935C
    unsigned char q79360;  // 0x79360
    void* q79494;  // 0x79494
    unsigned char q79498;  // 0x79498
    unsigned char q7949C;  // 0x7949C
    unsigned char q79504;  // 0x79504
    unsigned char q79508;  // 0x79508
    unsigned char q79510;  // 0x79510
    unsigned char q79514;  // 0x79514
    unsigned char q79698;  // 0x79698
    unsigned char q7969C;  // 0x7969C
    unsigned char q7A16C;  // 0x7A16C
    unsigned char q7A170;  // 0x7A170
    unsigned char q822C0;  // 0x822C0
    unsigned char q822C4;  // 0x822C4
    unsigned char q82674;  // 0x82674
    unsigned char q82678;  // 0x82678
    unsigned char q82A88;  // 0x82A88
    unsigned char q82A8C;  // 0x82A8C
    void* q83718;  // 0x83718
    unsigned char q8371C;  // 0x8371C
    unsigned char q83720;  // 0x83720
    unsigned char q83728;  // 0x83728
    unsigned char q8372C;  // 0x8372C
    unsigned char q83748;  // 0x83748
    unsigned char q8374C;  // 0x8374C
    unsigned char q83760;  // 0x83760
    unsigned char q83764;  // 0x83764
    unsigned char q83778;  // 0x83778
    unsigned char q8377C;  // 0x8377C
    unsigned char q85428;  // 0x85428
    unsigned char q8542C;  // 0x8542C
    unsigned char q91030;  // 0x91030
    unsigned char q91034;  // 0x91034
    unsigned char q9109C;  // 0x9109C
    unsigned char q910A0;  // 0x910A0
    unsigned char q91138;  // 0x91138
};

struct DListNode {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    void* q008;  // 0x8
};

struct DeleteAndZero {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
};

struct DiskSpace {
    void* vfptr;
    unsigned char q000;  // 0x0
};

struct DynamicArray {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned char q010;  // 0x10
    unsigned char q014;  // 0x14
    unsigned char q018;  // 0x18
    unsigned char q01C;  // 0x1C
    unsigned char q020;  // 0x20
    unsigned char q024;  // 0x24
    unsigned char q028;  // 0x28
    unsigned char q02C;  // 0x2C
    unsigned char q034;  // 0x34
    unsigned char q038;  // 0x38
    unsigned char q040;  // 0x40
    unsigned char q044;  // 0x44
    unsigned char q04C;  // 0x4C
    unsigned char q050;  // 0x50
    unsigned char q054;  // 0x54
    unsigned char q058;  // 0x58
    unsigned int u32_2588;  // 0x2588
};

struct DynamicVectorArray {
    void* vfptr;
    unsigned char q000;  // 0x0
};

struct FacingClass {
    void* vfptr;
    unsigned int DesiredFacing;  // 0x0
    unsigned int StartFacing;  // 0x4
    char RotationTimer[12];  // 0x8
    void* q010;  // 0x10
    unsigned int ROT;  // 0x14
    unsigned char q018;  // 0x18
    unsigned int q020;  // 0x20
    unsigned char q024;  // 0x24
    unsigned char q02C;  // 0x2C
    unsigned char q030;  // 0x30
    void* q034;  // 0x34
    unsigned char q038;  // 0x38
    unsigned char q03C;  // 0x3C
    unsigned char q044;  // 0x44
    unsigned char q048;  // 0x48
    unsigned char q04C;  // 0x4C
    unsigned int q050;  // 0x50
    unsigned char q054;  // 0x54
    unsigned char q05C;  // 0x5C
    unsigned char q060;  // 0x60
    unsigned char q068;  // 0x68
    unsigned char q06C;  // 0x6C
    unsigned char q074;  // 0x74
    unsigned char q078;  // 0x78
    unsigned int q080;  // 0x80
};

struct Field {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    void* q020;  // 0x20
    unsigned char q024;  // 0x24
    unsigned char q028;  // 0x28
    unsigned char q02C;  // 0x2C
    unsigned char q030;  // 0x30
    unsigned char q040;  // 0x40
    unsigned char q044;  // 0x44
    unsigned char q048;  // 0x48
    void* q050;  // 0x50
    unsigned char q054;  // 0x54
    unsigned char q058;  // 0x58
    unsigned char q068;  // 0x68
    unsigned char q06C;  // 0x6C
    unsigned char q074;  // 0x74
    unsigned char q078;  // 0x78
    void* q080;  // 0x80
};

struct FileExtension {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned char u8_D;  // 0xD
    unsigned char q010;  // 0x10
    unsigned char q014;  // 0x14
    unsigned char q018;  // 0x18
    unsigned char q01C;  // 0x1C
    unsigned char q020;  // 0x20
    unsigned char q024;  // 0x24
    unsigned char q028;  // 0x28
    unsigned char q02C;  // 0x2C
    unsigned char q034;  // 0x34
};

struct FileFind {
    void* vfptr;
    CampaignClass* q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    CampaignClass* q010;  // 0x10
    CampaignClass* q014;  // 0x14
    CampaignClass* q018;  // 0x18
    unsigned char q01C;  // 0x1C
    CampaignClass* q020;  // 0x20
    CampaignClass* q024;  // 0x24
    unsigned char q028;  // 0x28
    unsigned char q02C;  // 0x2C
    unsigned char q030;  // 0x30
    CampaignClass* q034;  // 0x34
    unsigned char q038;  // 0x38
    unsigned char q040;  // 0x40
    unsigned char q044;  // 0x44
    unsigned char q048;  // 0x48
    CampaignClass* q050;  // 0x50
    CampaignClass* q054;  // 0x54
};

struct FileStraw {
    void* vfptr;
    void* vtable1;  // 0x0
    unsigned char q004;  // 0x4
    void* q008;  // 0x8
    void* q00C;  // 0xC
    unsigned char q010;  // 0x10
    BlowStraw* q014;  // 0x14
    void* q018;  // 0x18
    unsigned char q01C;  // 0x1C
    BlowStraw* q020;  // 0x20
    void* q024;  // 0x24
    unsigned char q028;  // 0x28
    unsigned char q02C;  // 0x2C
    unsigned char q030;  // 0x30
    unsigned char q034;  // 0x34
    unsigned char q038;  // 0x38
    unsigned char q03C;  // 0x3C
    unsigned char q044;  // 0x44
    unsigned char q048;  // 0x48
    BlowStraw* q050;  // 0x50
};

struct FileTree {
    void* vfptr;
    unsigned char q000;  // 0x0
};

struct FileTreeNode {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned int u32_C;  // 0xC
    unsigned int u32_10;  // 0x10
    unsigned char q014;  // 0x14
    unsigned int u32_18;  // 0x18
    unsigned int u32_1C;  // 0x1C
};

struct Flag {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    void* q018;  // 0x18
    unsigned char q01C;  // 0x1C
    void* q024;  // 0x24
    unsigned char q028;  // 0x28
    unsigned char q02C;  // 0x2C
    unsigned char q030;  // 0x30
    unsigned char q034;  // 0x34
    unsigned char q040;  // 0x40
    unsigned char q044;  // 0x44
    unsigned char q048;  // 0x48
    unsigned char q04C;  // 0x4C
    void* q054;  // 0x54
};

struct Float4 {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    void* q008;  // 0x8
    void* q00C;  // 0xC
    unsigned char q010;  // 0x10
    unsigned char q014;  // 0x14
    void* q018;  // 0x18
    unsigned char q01C;  // 0x1C
    unsigned char q020;  // 0x20
    void* q024;  // 0x24
};

struct FontClass {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned int u32_10;  // 0x10
    unsigned char q014;  // 0x14
    void* q018;  // 0x18
    unsigned char q01C;  // 0x1C
    unsigned char q020;  // 0x20
    void* q024;  // 0x24
    unsigned char q028;  // 0x28
    unsigned int q034;  // 0x34
    unsigned char q040;  // 0x40
    unsigned char q050;  // 0x50
    void* q054;  // 0x54
    unsigned char q064;  // 0x64
    unsigned char q080;  // 0x80
    unsigned char q304;  // 0x304
    unsigned int q308;  // 0x308
    unsigned int q30A;  // 0x30A
    unsigned int q30C;  // 0x30C
    unsigned int q310;  // 0x310
    unsigned int q314;  // 0x314
    unsigned int q318;  // 0x318
    unsigned int q31C;  // 0x31C
    unsigned int q320;  // 0x320
    unsigned int q324;  // 0x324
    unsigned int q328;  // 0x328
    unsigned int q32C;  // 0x32C
    unsigned int q330;  // 0x330
    unsigned int q334;  // 0x334
    unsigned int q338;  // 0x338
    unsigned char q33C;  // 0x33C
    unsigned char q340;  // 0x340
    unsigned char q344;  // 0x344
    unsigned char q34C;  // 0x34C
    unsigned char q350;  // 0x350
    unsigned int q778;  // 0x778
    unsigned char q77C;  // 0x77C
    unsigned int q780;  // 0x780
    unsigned int q784;  // 0x784
    unsigned int q788;  // 0x788
    unsigned char q78C;  // 0x78C
    unsigned char q790;  // 0x790
    unsigned char q794;  // 0x794
    unsigned int q800;  // 0x800
    unsigned int q804;  // 0x804
    unsigned int q808;  // 0x808
    unsigned char q80C;  // 0x80C
    unsigned char q810;  // 0x810
    unsigned char q814;  // 0x814
    unsigned int q820;  // 0x820
    unsigned int q824;  // 0x824
    unsigned char q828;  // 0x828
    unsigned char q82C;  // 0x82C
    unsigned char qC64;  // 0xC64
    unsigned char qC68;  // 0xC68
    unsigned int q1910;  // 0x1910
    unsigned char q1914;  // 0x1914
    unsigned int q1920;  // 0x1920
    unsigned int q1924;  // 0x1924
    unsigned int q1928;  // 0x1928
    unsigned char q192C;  // 0x192C
    unsigned char q1930;  // 0x1930
    unsigned char q1934;  // 0x1934
    unsigned int q1938;  // 0x1938
    unsigned char q193C;  // 0x193C
    unsigned char q1940;  // 0x1940
    unsigned char q1944;  // 0x1944
    unsigned char q19AC;  // 0x19AC
    unsigned char q19B0;  // 0x19B0
    unsigned char q19B4;  // 0x19B4
    unsigned int q2048;  // 0x2048
    unsigned char q204C;  // 0x204C
    unsigned char q2050;  // 0x2050
    unsigned char q2054;  // 0x2054
    unsigned char q2060;  // 0x2060
    unsigned char q2064;  // 0x2064
    unsigned char q2068;  // 0x2068
    unsigned int q2070;  // 0x2070
    unsigned char q2074;  // 0x2074
    unsigned char q2078;  // 0x2078
    unsigned int q2080;  // 0x2080
    unsigned int q2084;  // 0x2084
    unsigned char q2088;  // 0x2088
    unsigned char q208C;  // 0x208C
    unsigned char q6410;  // 0x6410
    unsigned char q6414;  // 0x6414
    unsigned int q6418;  // 0x6418
    unsigned char q641C;  // 0x641C
    unsigned char q6420;  // 0x6420
    unsigned char q642C;  // 0x642C
    unsigned char q6430;  // 0x6430
    unsigned int q6440;  // 0x6440
    unsigned char q6444;  // 0x6444
    unsigned char q6448;  // 0x6448
    unsigned char q6450;  // 0x6450
    unsigned char q6454;  // 0x6454
    unsigned char q6460;  // 0x6460
    unsigned char q6464;  // 0x6464
    unsigned char q6470;  // 0x6470
    unsigned char q6474;  // 0x6474
    unsigned int q8264;  // 0x8264
    unsigned char q8268;  // 0x8268
    unsigned char q826C;  // 0x826C
    unsigned int q8274;  // 0x8274
    unsigned int q8278;  // 0x8278
    unsigned char q827C;  // 0x827C
    unsigned char q8280;  // 0x8280
    unsigned char q8288;  // 0x8288
    unsigned char q828C;  // 0x828C
    unsigned int q8294;  // 0x8294
    unsigned char q8298;  // 0x8298
    unsigned char q829C;  // 0x829C
    unsigned int q8304;  // 0x8304
    unsigned char q8308;  // 0x8308
    unsigned char q830C;  // 0x830C
    unsigned char q8314;  // 0x8314
    unsigned char q8318;  // 0x8318
    unsigned int q8320;  // 0x8320
    unsigned int q8324;  // 0x8324
};

struct FontRenderer {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
};

struct FractalNoise {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned int q8001;  // 0x8001
};

struct FrameSnapshot {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    bool q00A;  // 0xA
    bool q010;  // 0x10
    unsigned char q014;  // 0x14
    unsigned char q018;  // 0x18
    unsigned char q020;  // 0x20
};

struct GameOptions {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned char q010;  // 0x10
    unsigned char q018;  // 0x18
    unsigned char q024;  // 0x24
    void* q030;  // 0x30
    unsigned char q034;  // 0x34
    unsigned char q038;  // 0x38
    void* q048;  // 0x48
    unsigned char q04C;  // 0x4C
    unsigned char q050;  // 0x50
    unsigned char q054;  // 0x54
    unsigned char q058;  // 0x58
    unsigned char q06C;  // 0x6C
    unsigned char q070;  // 0x70
    unsigned char q084;  // 0x84
    unsigned char q088;  // 0x88
    void* q114;  // 0x114
};

struct GameResult {
    void* vfptr;
    unsigned char q000;  // 0x0
};

struct GameScreen {
    void* vfptr;
    CampaignClass* q000;  // 0x0
    unsigned char q004;  // 0x4
    void* q008;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned char q018;  // 0x18
    unsigned char q024;  // 0x24
    void* q064;  // 0x64
    unsigned char q068;  // 0x68
    unsigned char q0D1;  // 0xD1
    void* q0F0;  // 0xF0
    unsigned char q0F4;  // 0xF4
    void* q100;  // 0x100
    unsigned char q104;  // 0x104
    void* q204;  // 0x204
    unsigned char q208;  // 0x208
    unsigned char q228;  // 0x228
    unsigned char q22C;  // 0x22C
    unsigned char q230;  // 0x230
    unsigned char q234;  // 0x234
    void* q240;  // 0x240
    unsigned char q244;  // 0x244
    unsigned char q248;  // 0x248
    unsigned char q260;  // 0x260
    unsigned char q264;  // 0x264
    unsigned char q354;  // 0x354
    unsigned char q358;  // 0x358
    unsigned char q35C;  // 0x35C
    unsigned char q360;  // 0x360
    unsigned char q540;  // 0x540
    unsigned char q544;  // 0x544
    unsigned char q548;  // 0x548
    unsigned char q580;  // 0x580
    unsigned char q584;  // 0x584
    void* q598;  // 0x598
    unsigned char q59C;  // 0x59C
    unsigned char q608;  // 0x608
    unsigned char q60C;  // 0x60C
    unsigned char q690;  // 0x690
    unsigned char q694;  // 0x694
    unsigned char q698;  // 0x698
    unsigned char qA14;  // 0xA14
    unsigned char qA18;  // 0xA18
    unsigned char qA1C;  // 0xA1C
    unsigned char q1344;  // 0x1344
    unsigned char q1348;  // 0x1348
    void* q1398;  // 0x1398
    unsigned char q139C;  // 0x139C
    unsigned char q13A0;  // 0x13A0
    unsigned char q1408;  // 0x1408
    unsigned char q140C;  // 0x140C
    unsigned char q1518;  // 0x1518
    unsigned char q151C;  // 0x151C
    unsigned char q1680;  // 0x1680
    unsigned char q1684;  // 0x1684
    unsigned char q2130;  // 0x2130
    unsigned char q2134;  // 0x2134
    unsigned char q2580;  // 0x2580
};

struct GameState {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    bool q062;  // 0x62
    bool q063;  // 0x63
    unsigned char q067;  // 0x67
    bool q098;  // 0x98
    unsigned int q0C3;  // 0xC3
    unsigned char q0C7;  // 0xC7
    unsigned char q0F6;  // 0xF6
    void* q0F7;  // 0xF7
    void* q0F8;  // 0xF8
    unsigned int q0F9;  // 0xF9
    void* q0FA;  // 0xFA
    unsigned char q0FB;  // 0xFB
    unsigned char q0FC;  // 0xFC
    unsigned char q100;  // 0x100
    unsigned char q104;  // 0x104
    unsigned char q1C8;  // 0x1C8
    unsigned char q1CC;  // 0x1CC
    unsigned char q1D0;  // 0x1D0
    unsigned char q1D4;  // 0x1D4
    void* q248;  // 0x248
    unsigned char q24C;  // 0x24C
    void* q250;  // 0x250
    unsigned char q254;  // 0x254
    bool q338;  // 0x338
    unsigned char q33C;  // 0x33C
    unsigned char q438;  // 0x438
    unsigned char q43C;  // 0x43C
    unsigned char q440;  // 0x440
    unsigned char q460;  // 0x460
    unsigned char q464;  // 0x464
    unsigned char q4D4;  // 0x4D4
    unsigned char q4D8;  // 0x4D8
    void* q584;  // 0x584
    unsigned char q588;  // 0x588
    unsigned char q58C;  // 0x58C
    unsigned char q590;  // 0x590
    unsigned char q594;  // 0x594
    unsigned char q598;  // 0x598
    unsigned char q59C;  // 0x59C
    unsigned char q1080;  // 0x1080
    unsigned char q1084;  // 0x1084
    unsigned char q1110;  // 0x1110
    unsigned char q1114;  // 0x1114
    unsigned char q12E4;  // 0x12E4
    unsigned char q12E8;  // 0x12E8
    unsigned char q1410;  // 0x1410
    unsigned char q1414;  // 0x1414
    unsigned char q1420;  // 0x1420
    unsigned char q1424;  // 0x1424
    unsigned char q1428;  // 0x1428
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
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned int q00C;  // 0xC
    unsigned int u32_10;  // 0x10
    unsigned char q014;  // 0x14
    unsigned char q018;  // 0x18
    unsigned char q01C;  // 0x1C
    unsigned char q020;  // 0x20
    unsigned char q024;  // 0x24
    unsigned char q028;  // 0x28
    unsigned char q02C;  // 0x2C
    unsigned char q030;  // 0x30
    unsigned int q034;  // 0x34
    unsigned char q038;  // 0x38
    unsigned char q044;  // 0x44
    unsigned char q048;  // 0x48
    unsigned char q050;  // 0x50
};

struct Hash {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
};

struct HashMap {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned char q010;  // 0x10
    unsigned char q014;  // 0x14
    unsigned char q018;  // 0x18
    unsigned char q01C;  // 0x1C
    unsigned char q020;  // 0x20
    unsigned char q024;  // 0x24
    unsigned char q028;  // 0x28
    unsigned char q02C;  // 0x2C
    unsigned char q034;  // 0x34
};

struct HashTree {
    void* vfptr;
    unsigned char q000;  // 0x0
    void* q004;  // 0x4
    void* q008;  // 0x8
    void* q00C;  // 0xC
    unsigned char q010;  // 0x10
    unsigned char q014;  // 0x14
    void* q018;  // 0x18
    unsigned char q01C;  // 0x1C
    unsigned char q020;  // 0x20
    void* q024;  // 0x24
};

struct HashVector_UInt {
    void* vfptr;
    unsigned char q000;  // 0x0
};

struct Heap {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    void* q008;  // 0x8
};

struct IDXContainer {
    void* vfptr;
    unsigned char q000;  // 0x0
};

struct INISectionList {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned int u32_C;  // 0xC
    unsigned int u32_10;  // 0x10
    unsigned int u32_14;  // 0x14
    unsigned int u32_18;  // 0x18
};

struct InputManager_ProcessEvents {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned char q010;  // 0x10
    unsigned char q014;  // 0x14
    unsigned char q018;  // 0x18
    unsigned char q01C;  // 0x1C
    unsigned char q020;  // 0x20
    unsigned char q024;  // 0x24
    unsigned char q028;  // 0x28
    unsigned char q02C;  // 0x2C
    unsigned char q034;  // 0x34
    unsigned char q038;  // 0x38
    unsigned char q040;  // 0x40
    unsigned char q044;  // 0x44
    unsigned char q04C;  // 0x4C
    unsigned char q050;  // 0x50
    unsigned char q054;  // 0x54
};

struct Int4 {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    void* q008;  // 0x8
    void* q00C;  // 0xC
    unsigned char q010;  // 0x10
    unsigned char q014;  // 0x14
    void* q018;  // 0x18
    unsigned char q01C;  // 0x1C
    unsigned char q020;  // 0x20
    void* q024;  // 0x24
};

struct IntVector {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
};

struct IsRandMap {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned int q06A;  // 0x6A
    unsigned int q06D;  // 0x6D
    unsigned char q071;  // 0x71
    unsigned int q610;  // 0x610
    unsigned int qA13;  // 0xA13
};

struct KeyValuePair {
    void* vfptr;
    unsigned char q000;  // 0x0
};

struct KeywordClass {
    void* vfptr;
    unsigned char q000;  // 0x0
};

struct KeywordType {
    void* vfptr;
    unsigned char q000;  // 0x0
};

struct Lightning {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q013;  // 0x13
    void* q018;  // 0x18
    unsigned int u32_1C;  // 0x1C
    unsigned char q020;  // 0x20
    void* q024;  // 0x24
    unsigned char q028;  // 0x28
    unsigned char q030;  // 0x30
    unsigned char q034;  // 0x34
    unsigned char q03C;  // 0x3C
    unsigned char q040;  // 0x40
    unsigned char q048;  // 0x48
    unsigned char q04C;  // 0x4C
    void* q054;  // 0x54
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
    unsigned int u32_20;  // 0x20
    unsigned int q024;  // 0x24
    unsigned int q028;  // 0x28
    unsigned int q02C;  // 0x2C
    unsigned int q02D;  // 0x2D
    unsigned int q030;  // 0x30
    unsigned char q031;  // 0x31
    unsigned int q034;  // 0x34
    CampaignClass* q038;  // 0x38
    unsigned char q03C;  // 0x3C
    unsigned int q040;  // 0x40
    unsigned char q044;  // 0x44
    unsigned int q048;  // 0x48
    bool q04A;  // 0x4A
    unsigned int q04C;  // 0x4C
    unsigned char q050;  // 0x50
    unsigned char q054;  // 0x54
    ControlClass* q058;  // 0x58
    void* q05B;  // 0x5B
    unsigned char q05C;  // 0x5C
    unsigned char q05F;  // 0x5F
    unsigned char q060;  // 0x60
    unsigned int q064;  // 0x64
    unsigned char q068;  // 0x68
    void* q06C;  // 0x6C
    unsigned int u32_70;  // 0x70
    bool q074;  // 0x74
    unsigned char q078;  // 0x78
    unsigned char q080;  // 0x80
    unsigned char q084;  // 0x84
    ControlClass* q088;  // 0x88
    unsigned char q08C;  // 0x8C
    unsigned char q094;  // 0x94
    unsigned char q098;  // 0x98
    void* q0B0;  // 0xB0
    unsigned char q0B4;  // 0xB4
    ControlClass* q0B8;  // 0xB8
    unsigned char q0BC;  // 0xBC
    void* q0C8;  // 0xC8
    unsigned char q0CC;  // 0xCC
    void* q0DC;  // 0xDC
    unsigned char q0E0;  // 0xE0
    unsigned int q100;  // 0x100
    unsigned char q104;  // 0x104
    void* q108;  // 0x108
    unsigned int q114;  // 0x114
    GaugeClass* q118;  // 0x118
    unsigned char q11C;  // 0x11C
    unsigned char q128;  // 0x128
    unsigned int q12C;  // 0x12C
    unsigned char q130;  // 0x130
    unsigned char q134;  // 0x134
    unsigned char q138;  // 0x138
    unsigned char q13C;  // 0x13C
    unsigned char q140;  // 0x140
    unsigned int q144;  // 0x144
    unsigned char q148;  // 0x148
    unsigned char q14C;  // 0x14C
    unsigned char q150;  // 0x150
    unsigned char q154;  // 0x154
    unsigned char q164;  // 0x164
    unsigned char q168;  // 0x168
    unsigned int q170;  // 0x170
    unsigned char q174;  // 0x174
    unsigned char q180;  // 0x180
    ControlClass* q184;  // 0x184
    unsigned char q188;  // 0x188
    void* q200;  // 0x200
    unsigned char q204;  // 0x204
    void* q220;  // 0x220
    unsigned char q224;  // 0x224
    unsigned char q260;  // 0x260
    void* q264;  // 0x264
    unsigned int q274;  // 0x274
    bool q278;  // 0x278
    GaugeClass* q280;  // 0x280
    unsigned char q284;  // 0x284
    unsigned char q290;  // 0x290
    unsigned int q300;  // 0x300
    unsigned char q304;  // 0x304
    unsigned char q308;  // 0x308
    ControlClass* q310;  // 0x310
    unsigned char q314;  // 0x314
    void* q31C;  // 0x31C
    unsigned char q320;  // 0x320
    unsigned int q324;  // 0x324
    unsigned char q328;  // 0x328
    unsigned char q32C;  // 0x32C
    unsigned char q344;  // 0x344
    unsigned char q348;  // 0x348
    unsigned char q354;  // 0x354
    unsigned char q358;  // 0x358
    unsigned int q364;  // 0x364
    unsigned char q368;  // 0x368
    unsigned char q36C;  // 0x36C
    unsigned char q370;  // 0x370
    void* q374;  // 0x374
    unsigned char q378;  // 0x378
    unsigned char q384;  // 0x384
    ControlClass* q388;  // 0x388
    unsigned char q38C;  // 0x38C
    void* q544;  // 0x544
    unsigned char q548;  // 0x548
    unsigned char q54C;  // 0x54C
    unsigned char q550;  // 0x550
    unsigned int q628;  // 0x628
    unsigned char q62C;  // 0x62C
    unsigned char q630;  // 0x630
    unsigned char q634;  // 0x634
    GaugeClass* q640;  // 0x640
    unsigned char q644;  // 0x644
    unsigned char q648;  // 0x648
    unsigned char q654;  // 0x654
    unsigned char q658;  // 0x658
    unsigned char q65C;  // 0x65C
    unsigned int q768;  // 0x768
    unsigned char q76C;  // 0x76C
    unsigned char q770;  // 0x770
    unsigned char q774;  // 0x774
    unsigned char q800;  // 0x800
    unsigned int q804;  // 0x804
    unsigned char q808;  // 0x808
    unsigned char q80C;  // 0x80C
    unsigned char q818;  // 0x818
    unsigned char q81C;  // 0x81C
    unsigned char q844;  // 0x844
    unsigned char q848;  // 0x848
    unsigned char q854;  // 0x854
    unsigned char q858;  // 0x858
    unsigned int q868;  // 0x868
    unsigned char q86C;  // 0x86C
    unsigned char q870;  // 0x870
    unsigned char q874;  // 0x874
    unsigned char q880;  // 0x880
    void* q884;  // 0x884
    unsigned char q888;  // 0x888
    unsigned char q900;  // 0x900
    ControlClass* q904;  // 0x904
    unsigned char q908;  // 0x908
    unsigned char q914;  // 0x914
    unsigned char q918;  // 0x918
    unsigned char qC40;  // 0xC40
    unsigned char qC44;  // 0xC44
    unsigned char qC48;  // 0xC48
    unsigned char qC4C;  // 0xC4C
    unsigned char q1124;  // 0x1124
    unsigned char q1128;  // 0x1128
    unsigned char q112C;  // 0x112C
    unsigned char q1130;  // 0x1130
    unsigned char q1134;  // 0x1134
    void* q1298;  // 0x1298
    unsigned char q129C;  // 0x129C
    void* q1348;  // 0x1348
    unsigned char q134C;  // 0x134C
    unsigned char q1580;  // 0x1580
    unsigned char q1584;  // 0x1584
    unsigned char q1594;  // 0x1594
    unsigned char q1598;  // 0x1598
    GaugeClass* q1600;  // 0x1600
    unsigned char q1604;  // 0x1604
    unsigned char q1608;  // 0x1608
    unsigned char q1614;  // 0x1614
    unsigned char q1618;  // 0x1618
    unsigned char q1620;  // 0x1620
    unsigned char q1624;  // 0x1624
    unsigned char q1850;  // 0x1850
    unsigned char q1854;  // 0x1854
    unsigned char q1900;  // 0x1900
    unsigned char q1904;  // 0x1904
    unsigned char q1970;  // 0x1970
    unsigned char q1974;  // 0x1974
    unsigned char q2048;  // 0x2048
    unsigned char q204C;  // 0x204C
    unsigned char q2134;  // 0x2134
    unsigned char q2138;  // 0x2138
    unsigned char q2178;  // 0x2178
    unsigned char q217C;  // 0x217C
    unsigned char q2530;  // 0x2530
    unsigned char q2534;  // 0x2534
    unsigned char q2538;  // 0x2538
    unsigned char q3140;  // 0x3140
    unsigned char q3144;  // 0x3144
    unsigned char q361C;  // 0x361C
    unsigned char q3620;  // 0x3620
    unsigned char q4388;  // 0x4388
    unsigned char q438C;  // 0x438C
    unsigned char q4870;  // 0x4870
    unsigned char q4874;  // 0x4874
    unsigned char q5410;  // 0x5410
    unsigned char q5414;  // 0x5414
    unsigned int q5545;  // 0x5545
    unsigned int q6214;  // 0x6214
    unsigned char q6218;  // 0x6218
    unsigned char q621C;  // 0x621C
    unsigned char q6224;  // 0x6224
    unsigned char q6228;  // 0x6228
    unsigned char q6470;  // 0x6470
    unsigned char q6474;  // 0x6474
    unsigned char q8264;  // 0x8264
    unsigned char q8268;  // 0x8268
    unsigned char q8470;  // 0x8470
    unsigned char q8474;  // 0x8474
    unsigned int q8530;  // 0x8530
    unsigned char q8534;  // 0x8534
    unsigned char q8538;  // 0x8538
    unsigned char q8758;  // 0x8758
    unsigned char q875C;  // 0x875C
    unsigned char q9520;  // 0x9520
    unsigned char q9524;  // 0x9524
    unsigned char q12598;  // 0x12598
    unsigned char q1259C;  // 0x1259C
    unsigned char q12A78;  // 0x12A78
    unsigned char q12A7C;  // 0x12A7C
    unsigned char q145B8;  // 0x145B8
    unsigned char q145BC;  // 0x145BC
    unsigned char q17288;  // 0x17288
    unsigned char q1728C;  // 0x1728C
    unsigned char q17298;  // 0x17298
    unsigned char q1729C;  // 0x1729C
    unsigned int q25108;  // 0x25108
    unsigned char q2510C;  // 0x2510C
    unsigned char q25124;  // 0x25124
    unsigned char q25128;  // 0x25128
    unsigned char q34648;  // 0x34648
    unsigned char q3464C;  // 0x3464C
    unsigned char q43178;  // 0x43178
};

struct Locomotor {
    void* vfptr;
    char Locomotor_field_00[4];  // 0x0
    unsigned char q004;  // 0x4
    void* q008;  // 0x8
};

struct MPCombatTeam {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned char q010;  // 0x10
    unsigned char q014;  // 0x14
    unsigned char q018;  // 0x18
    unsigned char q01C;  // 0x1C
    unsigned char q020;  // 0x20
    unsigned char q024;  // 0x24
    unsigned char q028;  // 0x28
    unsigned char q02C;  // 0x2C
    unsigned char q034;  // 0x34
};

struct MSChoiceClass {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
};

struct MapResourceClass {
    void* vfptr;
    IUnknown* q000;  // 0x0
    MapResourceClass* q004;  // 0x4
    INIClass* q008;  // 0x8
    unsigned char q00C;  // 0xC
    MapClass* q014;  // 0x14
    unsigned char q015;  // 0x15
    unsigned int q016;  // 0x16
    unsigned char q018;  // 0x18
    char q019[4];  // 0x19
    unsigned int q01A;  // 0x1A
    unsigned char q01E;  // 0x1E
    MapClass* q020;  // 0x20
    unsigned char q024;  // 0x24
    ObjectClass* q028;  // 0x28
    CampaignClass* q02C;  // 0x2C
    unsigned char q030;  // 0x30
    unsigned int q034;  // 0x34
    RandomMap* q038;  // 0x38
    unsigned char q03C;  // 0x3C
    ObjectClass* q040;  // 0x40
    TechnoTypeClass* q044;  // 0x44
    unsigned char q048;  // 0x48
    TechnoTypeClass* q04C;  // 0x4C
    unsigned char q050;  // 0x50
    unsigned char q054;  // 0x54
    unsigned char q058;  // 0x58
    IUnknown* q05C;  // 0x5C
    TechnoTypeClass* q060;  // 0x60
    unsigned char q061;  // 0x61
    ObjectClass* q064;  // 0x64
    unsigned char q065;  // 0x65
    unsigned int q066;  // 0x66
    char q067[4];  // 0x67
    TechnoTypeClass* q068;  // 0x68
    unsigned char q06B;  // 0x6B
    TechnoTypeClass* q06C;  // 0x6C
    char q06D[4];  // 0x6D
    unsigned int q06E;  // 0x6E
    char q06F[4];  // 0x6F
    TechnoTypeClass* q070;  // 0x70
    AnimClass* q074;  // 0x74
    unsigned int q075;  // 0x75
    CampaignScore* q078;  // 0x78
    bool q07B;  // 0x7B
    unsigned int q07D;  // 0x7D
    unsigned char q080;  // 0x80
    unsigned int q083;  // 0x83
    unsigned char q084;  // 0x84
    unsigned char q088;  // 0x88
    unsigned int q089;  // 0x89
    unsigned int q08A;  // 0x8A
    unsigned int q08B;  // 0x8B
    unsigned char q08F;  // 0x8F
    unsigned char q090;  // 0x90
    unsigned int q091;  // 0x91
    char q098[4];  // 0x98
    unsigned int q099;  // 0x99
    unsigned char q09D;  // 0x9D
    unsigned int q09E;  // 0x9E
    unsigned int q09F;  // 0x9F
    unsigned char q0A3;  // 0xA3
    unsigned int q0A5;  // 0xA5
    unsigned int q0A6;  // 0xA6
    unsigned int q0A7;  // 0xA7
    unsigned char q0AB;  // 0xAB
    char q0AC[4];  // 0xAC
    unsigned int q0AD;  // 0xAD
    bool q0AE;  // 0xAE
    unsigned int q0AF;  // 0xAF
    unsigned char q0B3;  // 0xB3
    unsigned int q0BF;  // 0xBF
    bool q0C1;  // 0xC1
    unsigned int q0C3;  // 0xC3
    unsigned char q0C7;  // 0xC7
    ObjectClass* q100;  // 0x100
    TechnoTypeClass* q104;  // 0x104
    TechnoTypeClass* q108;  // 0x108
    unsigned int q110;  // 0x110
    unsigned char q114;  // 0x114
    TechnoTypeClass* q118;  // 0x118
    CampaignScore* q120;  // 0x120
    unsigned char q128;  // 0x128
    RandomMap* q134;  // 0x134
    unsigned int q138;  // 0x138
    unsigned char q144;  // 0x144
    TechnoTypeClass* q150;  // 0x150
    unsigned int q158;  // 0x158
    bool q174;  // 0x174
    void* q188;  // 0x188
    unsigned char q18C;  // 0x18C
    void* q1A4;  // 0x1A4
    unsigned char q1A8;  // 0x1A8
    void* q1C0;  // 0x1C0
    unsigned char q1C4;  // 0x1C4
    void* q1DC;  // 0x1DC
    unsigned char q1E0;  // 0x1E0
    unsigned int q1F0;  // 0x1F0
    unsigned char q1F4;  // 0x1F4
    void* q1F8;  // 0x1F8
    unsigned char q1FC;  // 0x1FC
    void* q214;  // 0x214
    unsigned char q218;  // 0x218
    void* q230;  // 0x230
    unsigned char q234;  // 0x234
    void* q24C;  // 0x24C
    unsigned char q250;  // 0x250
    unsigned int q258;  // 0x258
    TechnoTypeClass* q260;  // 0x260
    TechnoTypeClass* q264;  // 0x264
    void* q268;  // 0x268
    unsigned char q26C;  // 0x26C
    TechnoTypeClass* q274;  // 0x274
    AnimClass* q278;  // 0x278
    TechnoTypeClass* q280;  // 0x280
    void* q284;  // 0x284
    unsigned char q288;  // 0x288
    unsigned char q28C;  // 0x28C
    unsigned char q290;  // 0x290
    unsigned char q294;  // 0x294
    void* q2A0;  // 0x2A0
    unsigned char q2A4;  // 0x2A4
    void* q2C4;  // 0x2C4
    unsigned char q2C8;  // 0x2C8
    void* q2E0;  // 0x2E0
    unsigned char q2E4;  // 0x2E4
    unsigned int u32_2F0;  // 0x2F0
    unsigned int u32_2F4;  // 0x2F4
    RandomMap* q308;  // 0x308
    unsigned char q30C;  // 0x30C
    unsigned char q310;  // 0x310
    unsigned char q314;  // 0x314
    unsigned char q324;  // 0x324
    unsigned char q328;  // 0x328
    unsigned char q32C;  // 0x32C
    unsigned char q330;  // 0x330
    unsigned char q334;  // 0x334
    char q338[4];  // 0x338
    unsigned char q33C;  // 0x33C
    unsigned int q344;  // 0x344
    unsigned char q348;  // 0x348
    unsigned int q358;  // 0x358
    unsigned char q35C;  // 0x35C
    char q370[4];  // 0x370
    unsigned char q374;  // 0x374
    void* q420;  // 0x420
    unsigned char q424;  // 0x424
    unsigned char q428;  // 0x428
    unsigned char q43C;  // 0x43C
    unsigned char q440;  // 0x440
    void* q448;  // 0x448
    unsigned char q44C;  // 0x44C
    unsigned char q450;  // 0x450
    unsigned char q480;  // 0x480
    unsigned char q484;  // 0x484
    unsigned char q490;  // 0x490
    unsigned char q494;  // 0x494
    unsigned char q500;  // 0x500
    void* q504;  // 0x504
    unsigned char q508;  // 0x508
    unsigned char q50C;  // 0x50C
    unsigned char q520;  // 0x520
    unsigned char q524;  // 0x524
    unsigned char q528;  // 0x528
    unsigned char q52C;  // 0x52C
    void* q560;  // 0x560
    unsigned char q564;  // 0x564
    unsigned char q568;  // 0x568
    unsigned char q57C;  // 0x57C
    unsigned char q580;  // 0x580
    unsigned char q584;  // 0x584
    void* q588;  // 0x588
    unsigned char q58C;  // 0x58C
    unsigned char q590;  // 0x590
    unsigned char q594;  // 0x594
    unsigned int q600;  // 0x600
    unsigned char q604;  // 0x604
    unsigned char q620;  // 0x620
    unsigned char q624;  // 0x624
    TechnoTypeClass* q628;  // 0x628
    unsigned char q62C;  // 0x62C
    unsigned char q638;  // 0x638
    unsigned char q63C;  // 0x63C
    unsigned char q640;  // 0x640
    void* q644;  // 0x644
    unsigned char q648;  // 0x648
    unsigned char q64C;  // 0x64C
    unsigned char q660;  // 0x660
    unsigned char q664;  // 0x664
    unsigned char q66C;  // 0x66C
    unsigned char q670;  // 0x670
    void* q708;  // 0x708
    unsigned char q70C;  // 0x70C
    unsigned char q710;  // 0x710
    unsigned char q714;  // 0x714
    unsigned char q740;  // 0x740
    unsigned char q744;  // 0x744
    unsigned char q764;  // 0x764
    unsigned char q768;  // 0x768
    unsigned char q76C;  // 0x76C
    unsigned char q770;  // 0x770
    unsigned char q780;  // 0x780
    unsigned char q784;  // 0x784
    unsigned char q788;  // 0x788
    unsigned char q804;  // 0x804
    unsigned char q808;  // 0x808
    unsigned char q80C;  // 0x80C
    unsigned char q810;  // 0x810
    char q824[4];  // 0x824
    unsigned char q828;  // 0x828
    unsigned char q874;  // 0x874
    unsigned char q878;  // 0x878
    char q880[4];  // 0x880
    unsigned char q884;  // 0x884
    unsigned char q8A8;  // 0x8A8
    unsigned char q8AC;  // 0x8AC
    void* q914;  // 0x914
    unsigned char q918;  // 0x918
    unsigned char q91C;  // 0x91C
    unsigned char q930;  // 0x930
    unsigned char q934;  // 0x934
    unsigned char q938;  // 0x938
    unsigned char q9B4;  // 0x9B4
    unsigned char q9B8;  // 0x9B8
    unsigned char q9BC;  // 0x9BC
    unsigned char q1060;  // 0x1060
    unsigned char q1064;  // 0x1064
    unsigned char q1078;  // 0x1078
    unsigned char q107C;  // 0x107C
    unsigned char q1084;  // 0x1084
    unsigned char q1088;  // 0x1088
    unsigned char q1090;  // 0x1090
    unsigned char q1094;  // 0x1094
    unsigned char q10F4;  // 0x10F4
    unsigned char q10F8;  // 0x10F8
    unsigned char q1100;  // 0x1100
    unsigned char q1104;  // 0x1104
    unsigned char q1130;  // 0x1130
    unsigned char q1134;  // 0x1134
    unsigned char q113C;  // 0x113C
    unsigned char q1140;  // 0x1140
    unsigned char q1144;  // 0x1144
    unsigned char q114C;  // 0x114C
    unsigned char q1150;  // 0x1150
    unsigned char q1154;  // 0x1154
    unsigned char q1168;  // 0x1168
    unsigned char q116C;  // 0x116C
    unsigned int q1174;  // 0x1174
    unsigned char q1178;  // 0x1178
    unsigned char q117C;  // 0x117C
    unsigned char q125C;  // 0x125C
    unsigned char q1260;  // 0x1260
    unsigned char q1280;  // 0x1280
    void* q1284;  // 0x1284
    unsigned char q1288;  // 0x1288
    unsigned char q128C;  // 0x128C
    unsigned char q12A0;  // 0x12A0
    unsigned char q12A4;  // 0x12A4
    unsigned char q12A8;  // 0x12A8
    unsigned char q1324;  // 0x1324
    unsigned char q1328;  // 0x1328
    unsigned char q132C;  // 0x132C
    void* q1330;  // 0x1330
    unsigned char q1334;  // 0x1334
    unsigned char q1338;  // 0x1338
    unsigned char q134C;  // 0x134C
    unsigned char q1350;  // 0x1350
    unsigned char q1354;  // 0x1354
    unsigned char q1358;  // 0x1358
    unsigned char q135C;  // 0x135C
    unsigned char q1380;  // 0x1380
    unsigned char q1384;  // 0x1384
    unsigned char q1398;  // 0x1398
    unsigned char q139C;  // 0x139C
    unsigned char q13A0;  // 0x13A0
    unsigned char q1404;  // 0x1404
    unsigned char q1408;  // 0x1408
    unsigned char q140C;  // 0x140C
    unsigned char q1410;  // 0x1410
    unsigned char q1414;  // 0x1414
    unsigned char q1418;  // 0x1418
    unsigned char q1420;  // 0x1420
    unsigned char q1424;  // 0x1424
    unsigned char q1428;  // 0x1428
    unsigned char q1450;  // 0x1450
    unsigned char q1454;  // 0x1454
    unsigned char q14BC;  // 0x14BC
    unsigned char q14C0;  // 0x14C0
    unsigned char q14C4;  // 0x14C4
    void* q1558;  // 0x1558
    unsigned char q155C;  // 0x155C
    unsigned char q1560;  // 0x1560
    unsigned char q1564;  // 0x1564
    unsigned char q1568;  // 0x1568
    unsigned char q156C;  // 0x156C
    unsigned char q1580;  // 0x1580
    unsigned char q1584;  // 0x1584
    unsigned char q1588;  // 0x1588
    void* q1604;  // 0x1604
    unsigned char q1608;  // 0x1608
    unsigned char q160C;  // 0x160C
    unsigned char q1618;  // 0x1618
    unsigned char q161C;  // 0x161C
    unsigned char q1620;  // 0x1620
    unsigned char q1624;  // 0x1624
    unsigned char q162C;  // 0x162C
    unsigned char q1630;  // 0x1630
    unsigned char q1638;  // 0x1638
    unsigned char q163C;  // 0x163C
    unsigned char q1644;  // 0x1644
    unsigned char q1648;  // 0x1648
    unsigned char q164C;  // 0x164C
    void* q1650;  // 0x1650
    unsigned char q1654;  // 0x1654
    unsigned char q1658;  // 0x1658
    unsigned char q1674;  // 0x1674
    unsigned char q1678;  // 0x1678
    unsigned char q167C;  // 0x167C
    unsigned char q16F8;  // 0x16F8
    unsigned char q16FC;  // 0x16FC
    unsigned char q1700;  // 0x1700
    void* q1800;  // 0x1800
    unsigned char q1804;  // 0x1804
    unsigned char q1808;  // 0x1808
    unsigned char q180C;  // 0x180C
    unsigned char q1810;  // 0x1810
    unsigned char q1814;  // 0x1814
    unsigned char q1828;  // 0x1828
    unsigned char q182C;  // 0x182C
    unsigned char q1830;  // 0x1830
    unsigned char q1834;  // 0x1834
    unsigned char q1838;  // 0x1838
    unsigned char q1840;  // 0x1840
    unsigned char q1844;  // 0x1844
    unsigned char q1848;  // 0x1848
    unsigned char q1850;  // 0x1850
    unsigned char q1854;  // 0x1854
    unsigned char q18A4;  // 0x18A4
    unsigned char q18A8;  // 0x18A8
    unsigned char q18AC;  // 0x18AC
    RandomMap* q1910;  // 0x1910
    unsigned char q1914;  // 0x1914
    unsigned char q1918;  // 0x1918
    unsigned char q1920;  // 0x1920
    unsigned char q1924;  // 0x1924
    unsigned char q2054;  // 0x2054
    unsigned char q2058;  // 0x2058
    void* q2324;  // 0x2324
    unsigned char q2328;  // 0x2328
    unsigned char q232C;  // 0x232C
    unsigned char q2340;  // 0x2340
    unsigned char q2344;  // 0x2344
    unsigned char q2364;  // 0x2364
    unsigned char q2368;  // 0x2368
    unsigned char q2370;  // 0x2370
    unsigned char q2374;  // 0x2374
    unsigned char q2484;  // 0x2484
    unsigned char q2488;  // 0x2488
    unsigned char q418C;  // 0x418C
    unsigned char q4190;  // 0x4190
    unsigned char q4228;  // 0x4228
    unsigned char q422C;  // 0x422C
    unsigned char q4234;  // 0x4234
    unsigned char q4238;  // 0x4238
    unsigned char q4240;  // 0x4240
    unsigned char q4244;  // 0x4244
    unsigned char q4250;  // 0x4250
    unsigned char q4254;  // 0x4254
    unsigned char q4358;  // 0x4358
    unsigned char q435C;  // 0x435C
    unsigned char q4370;  // 0x4370
    unsigned char q4374;  // 0x4374
    unsigned char q4394;  // 0x4394
    unsigned char q4398;  // 0x4398
    unsigned char q4400;  // 0x4400
    unsigned char q4404;  // 0x4404
    unsigned char q440C;  // 0x440C
    unsigned char q4410;  // 0x4410
    void* q4418;  // 0x4418
    unsigned char q441C;  // 0x441C
    unsigned char q4420;  // 0x4420
    unsigned char q4428;  // 0x4428
    unsigned char q442C;  // 0x442C
    unsigned char q4434;  // 0x4434
    unsigned char q4438;  // 0x4438
    unsigned char q4444;  // 0x4444
    unsigned char q4448;  // 0x4448
    unsigned char q4450;  // 0x4450
    unsigned char q4454;  // 0x4454
    unsigned char q445C;  // 0x445C
    unsigned char q4460;  // 0x4460
    unsigned int q4468;  // 0x4468
    unsigned char q446C;  // 0x446C
    unsigned char q4470;  // 0x4470
    unsigned char q44D8;  // 0x44D8
    unsigned char q44DC;  // 0x44DC
    unsigned char q4574;  // 0x4574
    unsigned char q4578;  // 0x4578
    void* q4740;  // 0x4740
    unsigned char q4744;  // 0x4744
    unsigned char q4748;  // 0x4748
    unsigned char q475C;  // 0x475C
    unsigned char q4760;  // 0x4760
    unsigned char q4768;  // 0x4768
    unsigned char q476C;  // 0x476C
    unsigned char q4894;  // 0x4894
    unsigned char q4898;  // 0x4898
    unsigned char q4900;  // 0x4900
    unsigned char q4904;  // 0x4904
    unsigned char q490C;  // 0x490C
    unsigned char q4910;  // 0x4910
    unsigned char q4940;  // 0x4940
    unsigned char q4944;  // 0x4944
    unsigned char q494C;  // 0x494C
    unsigned char q4950;  // 0x4950
    unsigned char q4964;  // 0x4964
    unsigned char q4968;  // 0x4968
    unsigned char q4970;  // 0x4970
    unsigned char q4974;  // 0x4974
    unsigned char q497C;  // 0x497C
    unsigned char q4980;  // 0x4980
    unsigned char q498C;  // 0x498C
    unsigned char q4990;  // 0x4990
    unsigned char q5124;  // 0x5124
    unsigned char q5128;  // 0x5128
    unsigned char q5130;  // 0x5130
    unsigned char q5134;  // 0x5134
    unsigned char q513C;  // 0x513C
    unsigned char q5140;  // 0x5140
    unsigned char q514C;  // 0x514C
    unsigned char q5150;  // 0x5150
    unsigned char q5158;  // 0x5158
    unsigned char q515C;  // 0x515C
    unsigned char q5170;  // 0x5170
    unsigned char q5174;  // 0x5174
    unsigned char q5194;  // 0x5194
    unsigned char q5198;  // 0x5198
    unsigned char q5200;  // 0x5200
    unsigned char q5204;  // 0x5204
    unsigned char q526C;  // 0x526C
    unsigned char q5270;  // 0x5270
    unsigned char q5308;  // 0x5308
    unsigned char q530C;  // 0x530C
    unsigned char q53A4;  // 0x53A4
    unsigned char q53A8;  // 0x53A8
    void* q5464;  // 0x5464
    unsigned char q5468;  // 0x5468
    unsigned char q546C;  // 0x546C
    unsigned char q5474;  // 0x5474
    unsigned char q5478;  // 0x5478
    unsigned char q5480;  // 0x5480
    unsigned char q5484;  // 0x5484
    unsigned char q5498;  // 0x5498
    unsigned char q549C;  // 0x549C
    unsigned char q5504;  // 0x5504
    unsigned char q5508;  // 0x5508
    unsigned char q5534;  // 0x5534
    unsigned char q5538;  // 0x5538
    unsigned char q5640;  // 0x5640
    unsigned char q5644;  // 0x5644
    unsigned char q5658;  // 0x5658
    unsigned char q565C;  // 0x565C
    unsigned char q5664;  // 0x5664
    unsigned char q5668;  // 0x5668
    unsigned char q5694;  // 0x5694
    unsigned char q5698;  // 0x5698
    unsigned char q5700;  // 0x5700
    unsigned char q5704;  // 0x5704
    unsigned char q570C;  // 0x570C
    unsigned char q5710;  // 0x5710
    unsigned char q5748;  // 0x5748
    unsigned char q574C;  // 0x574C
    unsigned char q57D8;  // 0x57D8
    unsigned char q57DC;  // 0x57DC
    unsigned char q5880;  // 0x5880
    unsigned char q5884;  // 0x5884
    unsigned char q5988;  // 0x5988
    unsigned char q598C;  // 0x598C
    void* q6144;  // 0x6144
    unsigned char q6148;  // 0x6148
    unsigned char q614C;  // 0x614C
    unsigned char q6154;  // 0x6154
    unsigned char q6158;  // 0x6158
    unsigned char q6160;  // 0x6160
    unsigned char q6164;  // 0x6164
    unsigned char q6178;  // 0x6178
    unsigned char q617C;  // 0x617C
    unsigned char q6184;  // 0x6184
    unsigned char q6188;  // 0x6188
    unsigned char q6190;  // 0x6190
    unsigned char q6194;  // 0x6194
    unsigned char q6208;  // 0x6208
    unsigned char q620C;  // 0x620C
    void* q6214;  // 0x6214
    unsigned char q6218;  // 0x6218
    unsigned char q621C;  // 0x621C
    unsigned char q6224;  // 0x6224
    unsigned char q6228;  // 0x6228
    unsigned char q6230;  // 0x6230
    unsigned char q6234;  // 0x6234
    unsigned char q6254;  // 0x6254
    unsigned char q6258;  // 0x6258
    unsigned char q6290;  // 0x6290
    unsigned char q6294;  // 0x6294
    unsigned char q6308;  // 0x6308
    unsigned char q630C;  // 0x630C
    unsigned char q6374;  // 0x6374
};

struct Matrix {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    void* q008;  // 0x8
    bool q00A;  // 0xA
    bool q00B;  // 0xB
    void* q00C;  // 0xC
    bool q010;  // 0x10
    unsigned char q014;  // 0x14
    void* q018;  // 0x18
    unsigned char q01C;  // 0x1C
    unsigned char q020;  // 0x20
    void* q024;  // 0x24
};

struct Matrix2D {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned int u32_10;  // 0x10
    unsigned int u32_14;  // 0x14
    unsigned char q018;  // 0x18
    unsigned int u32_24;  // 0x24
};

struct Matrix3D {
    void* vfptr;
    unsigned int q004;  // 0x4
    unsigned int q008;  // 0x8
    unsigned int q00C;  // 0xC
    unsigned int q010;  // 0x10
    unsigned int q014;  // 0x14
    unsigned int q018;  // 0x18
    void * q01C;  // 0x1C
    void * q020;  // 0x20
    unsigned int q024;  // 0x24
    unsigned int q028;  // 0x28
    unsigned int q02C;  // 0x2C
    unsigned int q034;  // 0x34
    unsigned int q040;  // 0x40
    unsigned int q044;  // 0x44
    void * q050;  // 0x50
    unsigned int q054;  // 0x54
    unsigned int q064;  // 0x64
    unsigned int q068;  // 0x68
    void * q080;  // 0x80
    unsigned int q084;  // 0x84
    unsigned int q100;  // 0x100
    unsigned int q104;  // 0x104
    void * q128;  // 0x128
    unsigned int q130;  // 0x130
    unsigned int q260;  // 0x260
    unsigned int q304;  // 0x304
    unsigned int q598;  // 0x598
    unsigned int q608;  // 0x608
    unsigned int q774;  // 0x774
    unsigned int q1544;  // 0x1544
    void * q1634;  // 0x1634
    unsigned int q1908;  // 0x1908
    unsigned int q5170;  // 0x5170
    unsigned int q5444;  // 0x5444
    void * q5684;  // 0x5684
    unsigned int q6408;  // 0x6408
    unsigned int q20848;  // 0x20848
    void * q22148;  // 0x22148
    unsigned int q25608;  // 0x25608
    unsigned int q153094;  // 0x153094
    unsigned int q1257874;  // 0x1257874
    unsigned int q1271138;  // 0x1271138
    void * q1283474;  // 0x1283474
    unsigned int q1388694;  // 0x1388694
    unsigned int q19232884;  // 0x19232884
    unsigned int q19337528;  // 0x19337528
    void * q19412084;  // 0x19412084
    unsigned int q20481684;  // 0x20481684
    unsigned int q422802728;  // 0x422802728
    void * q423698564;  // 0x423698564
    unsigned int q541595268;  // 0x541595268
    unsigned int q17758693160;  // 0x17758693160
    unsigned int q22571209320;  // 0x22571209320
    unsigned int q1612096024928;  // 0x1612096024928
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
    unsigned char q014;  // 0x14
    unsigned char q018;  // 0x18
    unsigned char q01C;  // 0x1C
    unsigned char q020;  // 0x20
    unsigned char q024;  // 0x24
    unsigned char q028;  // 0x28
    unsigned char q02C;  // 0x2C
    bool q034;  // 0x34
    unsigned char q038;  // 0x38
    unsigned char q040;  // 0x40
    unsigned char q044;  // 0x44
    unsigned char q04C;  // 0x4C
    unsigned char q050;  // 0x50
    unsigned char q054;  // 0x54
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
    unsigned int q034;  // 0x34
    unsigned int q038;  // 0x38
    unsigned char q03C;  // 0x3C
    unsigned int q040;  // 0x40
    unsigned int q044;  // 0x44
    bool q048;  // 0x48
    unsigned char q04C;  // 0x4C
    unsigned int q050;  // 0x50
    unsigned char q054;  // 0x54
    unsigned char q058;  // 0x58
    unsigned char q060;  // 0x60
    unsigned int q064;  // 0x64
    unsigned int q068;  // 0x68
    unsigned char q06C;  // 0x6C
    unsigned char q070;  // 0x70
    unsigned char q074;  // 0x74
    unsigned int q080;  // 0x80
    unsigned char q084;  // 0x84
    unsigned char q088;  // 0x88
    unsigned char q090;  // 0x90
    unsigned char q094;  // 0x94
    unsigned int q100;  // 0x100
    unsigned int q104;  // 0x104
    unsigned char q108;  // 0x108
    unsigned char q10C;  // 0x10C
    bool q114;  // 0x114
    unsigned char q118;  // 0x118
    unsigned char q11C;  // 0x11C
    unsigned int q128;  // 0x128
    unsigned char q12C;  // 0x12C
    unsigned int q130;  // 0x130
    unsigned int q134;  // 0x134
    unsigned char q138;  // 0x138
    unsigned char q144;  // 0x144
    unsigned char q148;  // 0x148
    unsigned char q150;  // 0x150
    unsigned char q154;  // 0x154
    unsigned int q16C;  // 0x16C
    unsigned char q170;  // 0x170
    unsigned int q260;  // 0x260
    unsigned char q264;  // 0x264
    unsigned char q280;  // 0x280
    unsigned char q290;  // 0x290
    unsigned int q2B0;  // 0x2B0
    unsigned int q2B4;  // 0x2B4
    unsigned int q2B8;  // 0x2B8
    unsigned int q2BC;  // 0x2BC
    unsigned int q2C0;  // 0x2C0
    unsigned int q2C4;  // 0x2C4
    unsigned char q2C8;  // 0x2C8
    unsigned char q2CC;  // 0x2CC
    unsigned char q2D0;  // 0x2D0
    unsigned char q2D4;  // 0x2D4
    unsigned char q2D8;  // 0x2D8
    unsigned int q364;  // 0x364
    unsigned char q368;  // 0x368
    unsigned char q36C;  // 0x36C
    unsigned char q4A8;  // 0x4A8
    unsigned char q4AC;  // 0x4AC
    unsigned char q4B0;  // 0x4B0
    unsigned char q4B4;  // 0x4B4
    unsigned int q688;  // 0x688
    unsigned char q68C;  // 0x68C
    unsigned char q690;  // 0x690
    unsigned char q694;  // 0x694
    unsigned int q700;  // 0x700
    unsigned int q704;  // 0x704
    unsigned int q708;  // 0x708
    unsigned char q70C;  // 0x70C
    unsigned char q710;  // 0x710
    unsigned char q714;  // 0x714
    unsigned char q720;  // 0x720
    unsigned char q724;  // 0x724
    unsigned int q868;  // 0x868
    unsigned char q86C;  // 0x86C
    unsigned int u32_1480;  // 0x1480
    unsigned char q1484;  // 0x1484
    unsigned char q1488;  // 0x1488
    unsigned char q1680;  // 0x1680
    unsigned char q1684;  // 0x1684
    unsigned char q1690;  // 0x1690
    unsigned char q1694;  // 0x1694
    unsigned int q1800;  // 0x1800
    unsigned char q1804;  // 0x1804
    unsigned char q1808;  // 0x1808
    unsigned char q180C;  // 0x180C
    unsigned char q1810;  // 0x1810
    unsigned char q1814;  // 0x1814
    unsigned char q1818;  // 0x1818
    unsigned char q29C8;  // 0x29C8
    unsigned char q29CC;  // 0x29CC
    unsigned char q29D0;  // 0x29D0
    unsigned char q4498;  // 0x4498
    unsigned char q449C;  // 0x449C
    unsigned char q4678;  // 0x4678
    unsigned char q467C;  // 0x467C
    unsigned int q5248;  // 0x5248
    unsigned char q524C;  // 0x524C
    unsigned char q5250;  // 0x5250
    unsigned char q5254;  // 0x5254
    unsigned char q5750;  // 0x5750
    unsigned char q5754;  // 0x5754
    unsigned int q6034;  // 0x6034
    unsigned int q6038;  // 0x6038
    unsigned char q603C;  // 0x603C
    unsigned int q6144;  // 0x6144
    unsigned char q6148;  // 0x6148
    unsigned char q614C;  // 0x614C
    unsigned char q6160;  // 0x6160
    unsigned char q6164;  // 0x6164
    unsigned char q9CC4;  // 0x9CC4
    unsigned char q9CC8;  // 0x9CC8
    unsigned char q9CCC;  // 0x9CCC
    unsigned int q21064;  // 0x21064
    unsigned char q21068;  // 0x21068
    unsigned char q2106C;  // 0x2106C
    unsigned char q21074;  // 0x21074
    unsigned char q21078;  // 0x21078
    unsigned char q24E38;  // 0x24E38
    unsigned char q24E3C;  // 0x24E3C
    unsigned char q24E40;  // 0x24E40
    unsigned char q25414;  // 0x25414
    unsigned char q25418;  // 0x25418
    unsigned char q4E8D4;  // 0x4E8D4
    unsigned char q4E8D8;  // 0x4E8D8
    unsigned int q135268;  // 0x135268
    unsigned char q13526C;  // 0x13526C
    unsigned char q135270;  // 0x135270
    unsigned char q135278;  // 0x135278
    unsigned char q13527C;  // 0x13527C
    unsigned char q135284;  // 0x135284
    unsigned char q135288;  // 0x135288
    unsigned char q139048;  // 0x139048
    unsigned char q13904C;  // 0x13904C
    unsigned char q162AE4;  // 0x162AE4
    unsigned char q162AE8;  // 0x162AE8
    unsigned char q23B3B4;  // 0x23B3B4
    unsigned char q23B3B8;  // 0x23B3B8
    unsigned char q321748;  // 0x321748
    unsigned char q32174C;  // 0x32174C
    unsigned char q4080DC;  // 0x4080DC
    unsigned char q4080E0;  // 0x4080E0
    unsigned int q1266280;  // 0x1266280
};

struct Miles {
    void* vfptr;
    unsigned char q000;  // 0x0
};

struct ModemGame {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned char q010;  // 0x10
    unsigned char q014;  // 0x14
    unsigned char q018;  // 0x18
    wchar_t* q020;  // 0x20
    unsigned char q024;  // 0x24
    unsigned char q028;  // 0x28
    unsigned char q02C;  // 0x2C
    unsigned char q030;  // 0x30
    unsigned char q034;  // 0x34
    unsigned char q038;  // 0x38
    unsigned char q044;  // 0x44
    unsigned char q048;  // 0x48
    unsigned char q04C;  // 0x4C
    wchar_t* q050;  // 0x50
    unsigned char q054;  // 0x54
    unsigned char q058;  // 0x58
    unsigned char q068;  // 0x68
    unsigned char q06C;  // 0x6C
    wchar_t* q080;  // 0x80
    unsigned char q084;  // 0x84
    unsigned char q088;  // 0x88
    void* q6AC;  // 0x6AC
    unsigned char q6B0;  // 0x6B0
    unsigned char q6DC;  // 0x6DC
    unsigned char q6E0;  // 0x6E0
    unsigned char q70C;  // 0x70C
    unsigned char q710;  // 0x710
    void* q1708;  // 0x1708
    unsigned char q170C;  // 0x170C
    unsigned char q1710;  // 0x1710
    unsigned char q1714;  // 0x1714
    unsigned char q2770;  // 0x2770
    unsigned char q2774;  // 0x2774
    unsigned char q5900;  // 0x5900
    unsigned char q5904;  // 0x5904
    unsigned char q6970;  // 0x6970
    unsigned char q6974;  // 0x6974
    unsigned char q131BC;  // 0x131BC
    unsigned char q131C0;  // 0x131C0
    void* q22678;  // 0x22678
};

struct MovieContext {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned int u32_45;  // 0x45
    unsigned int u32_48;  // 0x48
};

struct Multiplay {
    void* vfptr;
    unsigned char q000;  // 0x0
    void* q004;  // 0x4
    void* q008;  // 0x8
};

struct MultiplayerConfig {
    void* vfptr;
    unsigned char q000;  // 0x0
};

struct NetMessage {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
};

struct NetworkEventQueueClass {
    void* vfptr;
    unsigned char q000;  // 0x0
};

struct NetworkID {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
};

struct NetworkSettings {
    void* vfptr;
    unsigned char q000;  // 0x0
};

struct ObjectPlacement {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    void* q008;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned char q018;  // 0x18
    unsigned char q024;  // 0x24
    unsigned int u32_49;  // 0x49
    unsigned int u32_4A;  // 0x4A
    unsigned int u32_124;  // 0x124
    unsigned int u32_128;  // 0x128
};

struct ObjectPtr {
    void* vfptr;
    unsigned char q000;  // 0x0
};

struct OptionQueue {
    void* vfptr;
    unsigned char q000;  // 0x0
};

struct OwnerDrawControl {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned int u32_10;  // 0x10
    unsigned char q014;  // 0x14
    unsigned char q018;  // 0x18
    unsigned char q01C;  // 0x1C
    unsigned char q020;  // 0x20
    unsigned char q024;  // 0x24
    unsigned char q028;  // 0x28
    unsigned char q02C;  // 0x2C
    unsigned char q030;  // 0x30
    unsigned int q034;  // 0x34
    unsigned char q038;  // 0x38
    unsigned char q044;  // 0x44
    unsigned char q048;  // 0x48
    unsigned char q050;  // 0x50
};

struct PacketQueue {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    bool q00A;  // 0xA
    unsigned char q00C;  // 0xC
    bool q00D;  // 0xD
    bool q00E;  // 0xE
    bool q010;  // 0x10
    bool q014;  // 0x14
    unsigned char q018;  // 0x18
    unsigned char q01C;  // 0x1C
    bool q020;  // 0x20
    unsigned char q024;  // 0x24
    unsigned char q028;  // 0x28
    unsigned char q02C;  // 0x2C
};

struct PaletteManager {
    void* vfptr;
    unsigned char q000;  // 0x0
};

struct Performance {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    void* q008;  // 0x8
    void* q00C;  // 0xC
    unsigned char q010;  // 0x10
    void* q018;  // 0x18
    unsigned char q01C;  // 0x1C
    void* q024;  // 0x24
    unsigned char q028;  // 0x28
    unsigned char q034;  // 0x34
};

struct PhoneEditor {
    void* vfptr;
    unsigned char q000;  // 0x0
};

struct PingPongBuffer {
    void* vfptr;
    unsigned char q000;  // 0x0
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
    bool q010;  // 0x10
    bool q014;  // 0x14
    unsigned char q018;  // 0x18
    unsigned char q01C;  // 0x1C
    bool q020;  // 0x20
    unsigned char q024;  // 0x24
    unsigned char q028;  // 0x28
    unsigned char q02C;  // 0x2C
    unsigned char q030;  // 0x30
    bool q034;  // 0x34
    unsigned char q038;  // 0x38
    unsigned char q044;  // 0x44
    unsigned char q048;  // 0x48
    bool q050;  // 0x50
};

struct PreviewClass {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned int u32_112C;  // 0x112C
    unsigned int u32_1130;  // 0x1130
    unsigned int u32_1134;  // 0x1134
    unsigned int u32_1138;  // 0x1138
    unsigned int u32_113C;  // 0x113C
    unsigned char q1140;  // 0x1140
    unsigned int u32_11E4;  // 0x11E4
};

struct PriorityQueue {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    void* q008;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned char q018;  // 0x18
    void* q020;  // 0x20
    unsigned char q024;  // 0x24
    void* q028;  // 0x28
    unsigned char q02C;  // 0x2C
    unsigned char q030;  // 0x30
    unsigned char q034;  // 0x34
    void* q040;  // 0x40
    unsigned char q044;  // 0x44
    unsigned char q048;  // 0x48
    unsigned char q04C;  // 0x4C
    void* q050;  // 0x50
    unsigned char q054;  // 0x54
    unsigned char q058;  // 0x58
    unsigned char q05C;  // 0x5C
    void* q064;  // 0x64
    unsigned char q068;  // 0x68
    unsigned char q06C;  // 0x6C
    unsigned char q074;  // 0x74
    unsigned char q078;  // 0x78
    void* q080;  // 0x80
    unsigned char q084;  // 0x84
    unsigned char q088;  // 0x88
    unsigned char q08C;  // 0x8C
    unsigned char q094;  // 0x94
    unsigned char q098;  // 0x98
    void* q100;  // 0x100
};

struct ProductionClass {
    void* vfptr;
    unsigned char q000;  // 0x0
    void* q004;  // 0x4
    void* q008;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned int u32_24;  // 0x24
    unsigned char q028;  // 0x28
    unsigned int u32_34;  // 0x34
    unsigned int u32_38;  // 0x38
    unsigned char q03C;  // 0x3C
    unsigned int u32_60;  // 0x60
    unsigned char q064;  // 0x64
    unsigned int u32_68;  // 0x68
    unsigned int u32_6C;  // 0x6C
    unsigned int u32_70;  // 0x70
    unsigned int u32_71;  // 0x71
};

struct ProgressAnim {
    void* vfptr;
    unsigned char q000;  // 0x0
};

struct Property {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    void* q024;  // 0x24
    unsigned char q028;  // 0x28
    void* q02C;  // 0x2C
    unsigned char q030;  // 0x30
    unsigned char q034;  // 0x34
    unsigned char q038;  // 0x38
    unsigned char q040;  // 0x40
    void* q044;  // 0x44
    unsigned char q048;  // 0x48
    unsigned char q04C;  // 0x4C
    void* q054;  // 0x54
    unsigned char q058;  // 0x58
    unsigned char q05C;  // 0x5C
    unsigned char q064;  // 0x64
    void* q068;  // 0x68
    unsigned char q06C;  // 0x6C
    unsigned char q070;  // 0x70
    unsigned char q078;  // 0x78
    unsigned char q07C;  // 0x7C
    void* q084;  // 0x84
    unsigned char q088;  // 0x88
    unsigned char q08C;  // 0x8C
    unsigned char q094;  // 0x94
    unsigned char q098;  // 0x98
    unsigned char q100;  // 0x100
    void* q104;  // 0x104
};

struct PtrVector {
    void* vfptr;
    unsigned char q000;  // 0x0
};

struct PushCommandClass {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    void* q00C;  // 0xC
    void* q010;  // 0x10
    void* q014;  // 0x14
    void* q018;  // 0x18
    unsigned char q01C;  // 0x1C
    void* q020;  // 0x20
    void* q024;  // 0x24
    unsigned char q028;  // 0x28
    unsigned char q02C;  // 0x2C
    unsigned char q030;  // 0x30
    void* q034;  // 0x34
    unsigned char q038;  // 0x38
    unsigned char q040;  // 0x40
    unsigned char q044;  // 0x44
    unsigned char q048;  // 0x48
    unsigned char q04C;  // 0x4C
    void* q050;  // 0x50
    void* q054;  // 0x54
    unsigned char q058;  // 0x58
    unsigned char q05C;  // 0x5C
    unsigned char q064;  // 0x64
    unsigned char q068;  // 0x68
    unsigned char q06C;  // 0x6C
    unsigned char q070;  // 0x70
    unsigned char q078;  // 0x78
    unsigned char q07C;  // 0x7C
    void* q084;  // 0x84
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
    unsigned char q010;  // 0x10
    unsigned char q014;  // 0x14
    unsigned char q018;  // 0x18
    unsigned char q01C;  // 0x1C
    unsigned char q020;  // 0x20
    unsigned char q024;  // 0x24
    unsigned char q028;  // 0x28
    unsigned char q02C;  // 0x2C
    unsigned char q034;  // 0x34
};

struct Rect_Point {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    void* q00C;  // 0xC
    void* q010;  // 0x10
    unsigned char q014;  // 0x14
    void* q018;  // 0x18
    unsigned char q01C;  // 0x1C
    unsigned char q020;  // 0x20
    void* q024;  // 0x24
    unsigned char q028;  // 0x28
    unsigned char q02C;  // 0x2C
    void* q034;  // 0x34
};

struct ResultNode {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
};

struct SHPClass {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned int u32_54;  // 0x54
    unsigned int u32_58;  // 0x58
    unsigned int u32_5C;  // 0x5C
    unsigned char q060;  // 0x60
    unsigned int u32_74;  // 0x74
};

struct SafeDelete {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
};

struct SaveLoadDialog {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
};

struct ScoreText {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned int u32_45C;  // 0x45C
    unsigned char q460;  // 0x460
    unsigned int u32_47C;  // 0x47C
    unsigned int u32_480;  // 0x480
};

struct ScreenSaver {
    void* vfptr;
};

struct ScriptQueue {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned int u32_70;  // 0x70
};

struct SerialPort {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned int u32_5C;  // 0x5C
};

struct SettingsClass {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    void* q03C;  // 0x3C
    void* q040;  // 0x40
    void* q044;  // 0x44
    void* q048;  // 0x48
    void* q04C;  // 0x4C
    void* q050;  // 0x50
    void* q054;  // 0x54
    void* q058;  // 0x58
    void* q05C;  // 0x5C
    void* q060;  // 0x60
    void* q064;  // 0x64
    void* q068;  // 0x68
    void* q06C;  // 0x6C
    void* q070;  // 0x70
    void* q074;  // 0x74
    unsigned char q078;  // 0x78
    void* q080;  // 0x80
    void* q084;  // 0x84
    void* q088;  // 0x88
    unsigned char q08C;  // 0x8C
    unsigned char q090;  // 0x90
    unsigned char q094;  // 0x94
    void* q100;  // 0x100
    void* q104;  // 0x104
    void* q108;  // 0x108
    unsigned char q10C;  // 0x10C
    unsigned char q110;  // 0x110
    void* q114;  // 0x114
    void* q118;  // 0x118
    unsigned char q11C;  // 0x11C
    unsigned char q120;  // 0x120
    unsigned char q124;  // 0x124
    void* q128;  // 0x128
    unsigned char q12C;  // 0x12C
    unsigned char q130;  // 0x130
    unsigned char q134;  // 0x134
    unsigned char q140;  // 0x140
    unsigned char q144;  // 0x144
    unsigned char q148;  // 0x148
    void* q150;  // 0x150
    unsigned char q154;  // 0x154
    unsigned char q158;  // 0x158
    void* q260;  // 0x260
    void* q264;  // 0x264
    unsigned char q268;  // 0x268
    unsigned char q26C;  // 0x26C
    void* q274;  // 0x274
    void* q278;  // 0x278
    unsigned char q27C;  // 0x27C
    void* q280;  // 0x280
    unsigned char q284;  // 0x284
    unsigned char q288;  // 0x288
    unsigned char q290;  // 0x290
    unsigned char q294;  // 0x294
    unsigned char q300;  // 0x300
    unsigned char q304;  // 0x304
    void* q310;  // 0x310
    unsigned char q314;  // 0x314
    unsigned char q318;  // 0x318
    unsigned char q320;  // 0x320
    unsigned char q324;  // 0x324
    unsigned char q330;  // 0x330
    unsigned char q334;  // 0x334
    unsigned char q340;  // 0x340
    unsigned char q344;  // 0x344
    void* q598;  // 0x598
    unsigned char q59C;  // 0x59C
    unsigned char q5A0;  // 0x5A0
    void* q608;  // 0x608
    unsigned char q60C;  // 0x60C
    unsigned char q610;  // 0x610
    unsigned char q61C;  // 0x61C
    unsigned char q620;  // 0x620
    void* q628;  // 0x628
    unsigned char q62C;  // 0x62C
};

struct ShapeButton {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned int u32_14;  // 0x14
    unsigned int u32_18;  // 0x18
    unsigned char q01C;  // 0x1C
    unsigned int u32_1E;  // 0x1E
    unsigned int u32_34;  // 0x34
    unsigned char q038;  // 0x38
    unsigned int u32_40;  // 0x40
    unsigned int u32_44;  // 0x44
    unsigned int u32_48;  // 0x48
    unsigned int u32_4C;  // 0x4C
    unsigned int u32_50;  // 0x50
    unsigned int u32_54;  // 0x54
    unsigned int u32_55;  // 0x55
    unsigned int u32_58;  // 0x58
    unsigned int u32_5C;  // 0x5C
};

struct ShapeButtonClass {
    void* vfptr;
    void* vtable1;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    int Width;  // 0xC
    int Height;  // 0x10
    char Visible;  // 0x14
    char Enabled;  // 0x15
    int q018;  // 0x18
    unsigned char q01C;  // 0x1C
    bool q01D;  // 0x1D
    unsigned int q01E;  // 0x1E
    char q020;  // 0x20
    int ID;  // 0x24
    unsigned char q028;  // 0x28
    unsigned int q02C;  // 0x2C
    unsigned int q02D;  // 0x2D
    unsigned int q030;  // 0x30
    unsigned char q034;  // 0x34
    ControlClass* q038;  // 0x38
    ControlClass* q03C;  // 0x3C
    unsigned char q040;  // 0x40
    ControlClass* q044;  // 0x44
    ControlClass* q048;  // 0x48
    unsigned char q04C;  // 0x4C
    ConvertClass* q050;  // 0x50
    unsigned char q054;  // 0x54
    unsigned int q055;  // 0x55
    CampaignClass* q058;  // 0x58
    unsigned char q05C;  // 0x5C
    ControlClass* q060;  // 0x60
    unsigned char q064;  // 0x64
    ControlClass* q068;  // 0x68
    void* q06C;  // 0x6C
    unsigned char q074;  // 0x74
    unsigned char q078;  // 0x78
    ConvertClass* q080;  // 0x80
    unsigned char q084;  // 0x84
    CampaignClass* q088;  // 0x88
    unsigned char q08C;  // 0x8C
    unsigned char q094;  // 0x94
    unsigned char q098;  // 0x98
    void* q0B0;  // 0xB0
    unsigned char q0B4;  // 0xB4
    unsigned int q0B8;  // 0xB8
    unsigned char q0BC;  // 0xBC
    void* q0C8;  // 0xC8
    unsigned char q0CC;  // 0xCC
    void* q0DC;  // 0xDC
    unsigned char q0E0;  // 0xE0
    unsigned char q100;  // 0x100
    ControlClass* q104;  // 0x104
    void* q108;  // 0x108
    ControlClass* q114;  // 0x114
    unsigned char q118;  // 0x118
    unsigned char q11C;  // 0x11C
    ConvertClass* q128;  // 0x128
    unsigned int q12C;  // 0x12C
    unsigned char q130;  // 0x130
    unsigned char q134;  // 0x134
    unsigned char q138;  // 0x138
    unsigned char q13C;  // 0x13C
    unsigned char q140;  // 0x140
    unsigned int q144;  // 0x144
    unsigned char q148;  // 0x148
    unsigned char q14C;  // 0x14C
    ControlClass* q150;  // 0x150
    unsigned char q154;  // 0x154
    unsigned char q164;  // 0x164
    unsigned char q168;  // 0x168
    unsigned int q170;  // 0x170
    unsigned char q174;  // 0x174
    unsigned char q180;  // 0x180
    unsigned int q184;  // 0x184
    unsigned char q188;  // 0x188
    void* q200;  // 0x200
    unsigned char q204;  // 0x204
    void* q220;  // 0x220
    unsigned char q224;  // 0x224
    ControlClass* q260;  // 0x260
    void* q264;  // 0x264
    unsigned int q274;  // 0x274
    unsigned char q280;  // 0x280
    unsigned char q284;  // 0x284
    unsigned char q290;  // 0x290
    unsigned int q300;  // 0x300
    unsigned char q304;  // 0x304
    unsigned char q308;  // 0x308
    CampaignClass* q310;  // 0x310
    unsigned char q314;  // 0x314
    unsigned int q324;  // 0x324
    unsigned char q328;  // 0x328
    unsigned char q354;  // 0x354
    unsigned int q364;  // 0x364
    unsigned int q368;  // 0x368
    void* q374;  // 0x374
    unsigned char q384;  // 0x384
    unsigned int q388;  // 0x388
    void* q544;  // 0x544
    unsigned char q548;  // 0x548
    unsigned int q628;  // 0x628
    unsigned char q640;  // 0x640
    unsigned char q644;  // 0x644
    unsigned int q768;  // 0x768
    unsigned int q804;  // 0x804
    unsigned char q808;  // 0x808
    unsigned char q818;  // 0x818
    unsigned char q854;  // 0x854
    unsigned int q868;  // 0x868
    void* q884;  // 0x884
    unsigned char q900;  // 0x900
    unsigned int q904;  // 0x904
    unsigned char q914;  // 0x914
    void* q1298;  // 0x1298
    void* q1348;  // 0x1348
    unsigned char q1600;  // 0x1600
    unsigned char q1604;  // 0x1604
    unsigned char q2178;  // 0x2178
    unsigned int q5545;  // 0x5545
    unsigned int q6214;  // 0x6214
    unsigned char q6218;  // 0x6218
    unsigned char q621C;  // 0x621C
    unsigned int q8530;  // 0x8530
    unsigned char q8534;  // 0x8534
    unsigned char q8538;  // 0x8538
    unsigned int q25108;  // 0x25108
};

struct ShroudClass {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    void* q008;  // 0x8
    void* q00C;  // 0xC
    unsigned char q010;  // 0x10
    void* q018;  // 0x18
    void* q024;  // 0x24
    unsigned char q034;  // 0x34
    unsigned int q03D;  // 0x3D
    unsigned char q041;  // 0x41
    bool q043;  // 0x43
    unsigned int q044;  // 0x44
    unsigned char q045;  // 0x45
    void* q046;  // 0x46
    unsigned char q04A;  // 0x4A
    unsigned char q04F;  // 0x4F
    unsigned char q053;  // 0x53
    unsigned int q068;  // 0x68
    void* q070;  // 0x70
    unsigned char q074;  // 0x74
    unsigned int q104;  // 0x104
    unsigned int q260;  // 0x260
    unsigned char q264;  // 0x264
    void* q274;  // 0x274
    unsigned char q278;  // 0x278
};

struct SimpleDialogControl {
    void* vfptr;
    unsigned char q000;  // 0x0
};

struct SlaveControlVector {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned int u32_C;  // 0xC
    unsigned int u32_D;  // 0xD
};

struct SpawnControlVector {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned int u32_C;  // 0xC
    unsigned int u32_D;  // 0xD
};

struct SquadClass {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    void* q030;  // 0x30
    unsigned char q034;  // 0x34
    unsigned char q038;  // 0x38
    unsigned char q03C;  // 0x3C
    unsigned char q040;  // 0x40
    void* q048;  // 0x48
    unsigned char q04C;  // 0x4C
    unsigned char q050;  // 0x50
    unsigned char q054;  // 0x54
    unsigned char q07C;  // 0x7C
    unsigned char q080;  // 0x80
    void* q114;  // 0x114
};

struct StartCombo {
    void* vfptr;
    unsigned char q000;  // 0x0
};

struct StaticString {
    void* vfptr;
    unsigned char q000;  // 0x0
};

struct Straw {
    void* vfptr;
    void* vtable1;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    void* q00C;  // 0xC
    unsigned char q010;  // 0x10
    BlowStraw* q014;  // 0x14
    void* q018;  // 0x18
    unsigned char q01C;  // 0x1C
    BlowStraw* q020;  // 0x20
    void* q024;  // 0x24
    unsigned char q028;  // 0x28
    unsigned char q02C;  // 0x2C
    unsigned char q030;  // 0x30
    unsigned char q034;  // 0x34
    unsigned char q038;  // 0x38
    unsigned char q03C;  // 0x3C
    unsigned char q044;  // 0x44
    unsigned char q048;  // 0x48
    BlowStraw* q050;  // 0x50
};

struct StringList {
    void* vfptr;
    unsigned char q000;  // 0x0
};

struct StringTable {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
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
    unsigned char q01C;  // 0x1C
    unsigned char q020;  // 0x20
    unsigned char q024;  // 0x24
    unsigned char q028;  // 0x28
    unsigned char q02C;  // 0x2C
    unsigned char q030;  // 0x30
    unsigned char q034;  // 0x34
    unsigned char q038;  // 0x38
    unsigned char q044;  // 0x44
    unsigned char q048;  // 0x48
    unsigned char q04C;  // 0x4C
    unsigned char q050;  // 0x50
    unsigned char q054;  // 0x54
    unsigned char q058;  // 0x58
    unsigned char q068;  // 0x68
    unsigned char q06C;  // 0x6C
    unsigned char q074;  // 0x74
    unsigned char q078;  // 0x78
    unsigned char q080;  // 0x80
    unsigned char q084;  // 0x84
};

struct StructTable {
    void* vfptr;
    unsigned char q000;  // 0x0
};

struct SubzoneConnectionVector {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    void* q010;  // 0x10
    unsigned char q014;  // 0x14
    unsigned char q018;  // 0x18
    unsigned char q01C;  // 0x1C
    unsigned char q020;  // 0x20
    unsigned char q024;  // 0x24
    unsigned char q028;  // 0x28
    unsigned char q02C;  // 0x2C
    void* q034;  // 0x34
};

struct SubzoneHashVector {
    void* vfptr;
    unsigned char q000;  // 0x0
    void* q004;  // 0x4
};

struct SwizzleManager {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
};

struct SyncDelayClass {
    void* vfptr;
    unsigned char q000;  // 0x0
};

struct TabCameoListClass {
    void* vfptr;
    unsigned char q000;  // 0x0
};

struct Targeting {
    void* vfptr;
    unsigned char q000;  // 0x0
};

struct TaskManager {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned int u32_24;  // 0x24
    unsigned char q028;  // 0x28
    unsigned int u32_30;  // 0x30
    unsigned char q034;  // 0x34
    unsigned int u32_3C;  // 0x3C
    unsigned char q040;  // 0x40
    unsigned int u32_68;  // 0x68
};

struct TechnoTypeVector {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned int u32_14;  // 0x14
};

struct Text {
    void* vfptr;
    char Text_field_00[4];  // 0x0
    void* q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    void* q014;  // 0x14
    void* q018;  // 0x18
    void* q01C;  // 0x1C
    unsigned char q020;  // 0x20
    void* q024;  // 0x24
    void* q028;  // 0x28
    unsigned char q02C;  // 0x2C
    unsigned char q030;  // 0x30
    unsigned char q034;  // 0x34
    void* q040;  // 0x40
    unsigned char q044;  // 0x44
    unsigned char q048;  // 0x48
    unsigned char q04C;  // 0x4C
    unsigned char q050;  // 0x50
    void* q054;  // 0x54
    unsigned char q058;  // 0x58
    void* q064;  // 0x64
    unsigned char q068;  // 0x68
    unsigned char q06C;  // 0x6C
    unsigned char q080;  // 0x80
    unsigned char q084;  // 0x84
    unsigned int q9C5;  // 0x9C5
};

struct TextGroup {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    void* q030;  // 0x30
    void* q034;  // 0x34
    void* q038;  // 0x38
    void* q03C;  // 0x3C
    unsigned char q040;  // 0x40
    unsigned char q044;  // 0x44
    void* q048;  // 0x48
    unsigned char q04C;  // 0x4C
    unsigned char q050;  // 0x50
    unsigned char q054;  // 0x54
    void* q060;  // 0x60
    unsigned char q064;  // 0x64
    unsigned char q068;  // 0x68
    unsigned char q06C;  // 0x6C
    unsigned char q070;  // 0x70
    unsigned char q074;  // 0x74
    unsigned char q07C;  // 0x7C
    unsigned char q080;  // 0x80
    unsigned char q084;  // 0x84
    unsigned char q090;  // 0x90
    unsigned char q094;  // 0x94
    unsigned char q100;  // 0x100
    unsigned char q104;  // 0x104
    unsigned char q108;  // 0x108
    unsigned char q10C;  // 0x10C
    void* q114;  // 0x114
    unsigned char q118;  // 0x118
    unsigned char q11C;  // 0x11C
    unsigned char q124;  // 0x124
    unsigned char q128;  // 0x128
    void* q130;  // 0x130
    void* q134;  // 0x134
    unsigned char q138;  // 0x138
    unsigned char q13C;  // 0x13C
    unsigned char q144;  // 0x144
    unsigned char q148;  // 0x148
    void* q150;  // 0x150
};

struct TileData {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned int u16_2;  // 0x2
    unsigned char q004;  // 0x4
    unsigned int u32_C;  // 0xC
    unsigned int u32_10;  // 0x10
    unsigned int u32_14;  // 0x14
    unsigned int u32_18;  // 0x18
    unsigned int u32_1C;  // 0x1C
    unsigned char q020;  // 0x20
    unsigned int u32_2C;  // 0x2C
    unsigned int u32_30;  // 0x30
    unsigned int u32_34;  // 0x34
    unsigned int u32_38;  // 0x38
    unsigned int u32_3C;  // 0x3C
    unsigned char q040;  // 0x40
    unsigned int u32_45;  // 0x45
    unsigned int u32_46;  // 0x46
    unsigned int u32_47;  // 0x47
    unsigned int u32_49;  // 0x49
    unsigned int u32_4A;  // 0x4A
    unsigned int u32_4B;  // 0x4B
};

struct TileNode {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned int u32_28;  // 0x28
    unsigned int u32_2C;  // 0x2C
    unsigned int u32_30;  // 0x30
    unsigned char q034;  // 0x34
    unsigned int u32_35;  // 0x35
};

struct TileSystem {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned char u8_D;  // 0xD
    void* q010;  // 0x10
    unsigned char q014;  // 0x14
    unsigned char q018;  // 0x18
    unsigned char q01C;  // 0x1C
    unsigned char q020;  // 0x20
    unsigned char q024;  // 0x24
    unsigned char q028;  // 0x28
    unsigned char q02C;  // 0x2C
    void* q034;  // 0x34
};

struct Timeout {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    void* q008;  // 0x8
};

struct TimerPool {
    void* vfptr;
    unsigned char q000;  // 0x0
};

struct ToggleClass {
    void* vfptr;
    void* vtable1;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    int Width;  // 0xC
    int Height;  // 0x10
    char Visible;  // 0x14
    char Enabled;  // 0x15
    int q018;  // 0x18
    unsigned char q01C;  // 0x1C
    bool q01D;  // 0x1D
    unsigned int q01E;  // 0x1E
    char q020;  // 0x20
    int ID;  // 0x24
    unsigned char q028;  // 0x28
    unsigned int q02C;  // 0x2C
    unsigned int q02D;  // 0x2D
    unsigned int q030;  // 0x30
    unsigned char q034;  // 0x34
    unsigned char q038;  // 0x38
    unsigned char q040;  // 0x40
    unsigned int q044;  // 0x44
    unsigned int q048;  // 0x48
    unsigned char q04C;  // 0x4C
    unsigned int q050;  // 0x50
    unsigned char q054;  // 0x54
    unsigned int q058;  // 0x58
    unsigned char q05C;  // 0x5C
    unsigned char q060;  // 0x60
    unsigned char q064;  // 0x64
    unsigned int q068;  // 0x68
    void* q06C;  // 0x6C
    unsigned char q074;  // 0x74
    unsigned char q078;  // 0x78
    unsigned int q080;  // 0x80
    unsigned char q084;  // 0x84
    unsigned int q088;  // 0x88
    unsigned char q08C;  // 0x8C
    unsigned char q094;  // 0x94
    unsigned char q098;  // 0x98
    void* q0B0;  // 0xB0
    unsigned char q0B4;  // 0xB4
    unsigned int q0B8;  // 0xB8
    unsigned char q0BC;  // 0xBC
    void* q0C8;  // 0xC8
    unsigned char q0CC;  // 0xCC
    void* q0DC;  // 0xDC
    unsigned char q0E0;  // 0xE0
    unsigned char q100;  // 0x100
    unsigned int q104;  // 0x104
    void* q108;  // 0x108
    unsigned int q114;  // 0x114
    unsigned char q118;  // 0x118
    unsigned char q11C;  // 0x11C
    unsigned int q128;  // 0x128
    unsigned int q12C;  // 0x12C
    unsigned char q130;  // 0x130
    unsigned char q134;  // 0x134
    unsigned char q138;  // 0x138
    unsigned char q13C;  // 0x13C
    unsigned char q140;  // 0x140
    unsigned int q144;  // 0x144
    unsigned char q148;  // 0x148
    unsigned char q14C;  // 0x14C
    unsigned char q150;  // 0x150
    unsigned char q164;  // 0x164
    unsigned char q168;  // 0x168
    unsigned int q170;  // 0x170
    unsigned char q174;  // 0x174
    unsigned char q180;  // 0x180
    unsigned int q184;  // 0x184
    unsigned char q188;  // 0x188
    void* q200;  // 0x200
    unsigned char q204;  // 0x204
    void* q220;  // 0x220
    unsigned char q224;  // 0x224
    void* q264;  // 0x264
    unsigned int q274;  // 0x274
    unsigned char q280;  // 0x280
    unsigned char q284;  // 0x284
    unsigned char q290;  // 0x290
    unsigned int q300;  // 0x300
    unsigned char q304;  // 0x304
    unsigned char q308;  // 0x308
    unsigned int q310;  // 0x310
    unsigned char q314;  // 0x314
    unsigned int q324;  // 0x324
    unsigned char q328;  // 0x328
    unsigned char q354;  // 0x354
    unsigned int q364;  // 0x364
    unsigned int q368;  // 0x368
    void* q374;  // 0x374
    unsigned char q384;  // 0x384
    unsigned int q388;  // 0x388
    void* q544;  // 0x544
    unsigned char q548;  // 0x548
    unsigned int q628;  // 0x628
    unsigned char q640;  // 0x640
    unsigned char q644;  // 0x644
    unsigned int q768;  // 0x768
    unsigned int q804;  // 0x804
    unsigned char q808;  // 0x808
    unsigned char q818;  // 0x818
    unsigned char q854;  // 0x854
    unsigned int q868;  // 0x868
    void* q884;  // 0x884
    unsigned char q900;  // 0x900
    unsigned int q904;  // 0x904
    unsigned char q914;  // 0x914
    void* q1298;  // 0x1298
    void* q1348;  // 0x1348
    unsigned char q1600;  // 0x1600
    unsigned char q1604;  // 0x1604
    unsigned char q2178;  // 0x2178
    unsigned int q5545;  // 0x5545
    unsigned int q6214;  // 0x6214
    unsigned char q6218;  // 0x6218
    unsigned char q621C;  // 0x621C
    unsigned int q8530;  // 0x8530
    unsigned char q8534;  // 0x8534
    unsigned char q8538;  // 0x8538
    unsigned int q25108;  // 0x25108
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
    unsigned char q038;  // 0x38
    unsigned char q040;  // 0x40
    unsigned char q044;  // 0x44
    unsigned char q048;  // 0x48
    unsigned char q04C;  // 0x4C
    unsigned char q050;  // 0x50
    unsigned char q054;  // 0x54
    unsigned char q058;  // 0x58
    unsigned char q064;  // 0x64
    unsigned char q068;  // 0x68
    unsigned char q06C;  // 0x6C
    unsigned char q070;  // 0x70
    unsigned char q074;  // 0x74
    unsigned char q080;  // 0x80
    unsigned char q084;  // 0x84
    unsigned char q088;  // 0x88
    unsigned char q094;  // 0x94
    unsigned char q098;  // 0x98
    unsigned char q100;  // 0x100
    unsigned char q104;  // 0x104
    unsigned char q108;  // 0x108
    unsigned char q10C;  // 0x10C
    unsigned char q114;  // 0x114
    unsigned char q118;  // 0x118
    unsigned char q11C;  // 0x11C
    unsigned char q120;  // 0x120
    unsigned char q124;  // 0x124
    unsigned char q128;  // 0x128
    unsigned char q12C;  // 0x12C
    unsigned char q130;  // 0x130
    unsigned char q134;  // 0x134
    unsigned char q13C;  // 0x13C
    unsigned char q140;  // 0x140
    unsigned char q148;  // 0x148
    unsigned char q14C;  // 0x14C
    unsigned char q154;  // 0x154
    unsigned char q158;  // 0x158
    unsigned char q260;  // 0x260
    unsigned char q264;  // 0x264
    unsigned char q268;  // 0x268
    unsigned char q270;  // 0x270
    unsigned char q274;  // 0x274
    unsigned char q280;  // 0x280
    unsigned char q284;  // 0x284
    unsigned char q288;  // 0x288
    unsigned char q290;  // 0x290
    unsigned char q294;  // 0x294
    unsigned char q300;  // 0x300
    unsigned char q304;  // 0x304
};

struct Tooltip {
    void* vfptr;
    unsigned char q000;  // 0x0
};

struct Tree {
    void* vfptr;
    unsigned char q000;  // 0x0
};

struct Triple {
    void* vfptr;
    unsigned char q000;  // 0x0
};

struct TypeClass {
    void* vfptr;
    unsigned char q000;  // 0x0
};

struct VQAClass {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned int u32_200;  // 0x200
    unsigned char q204;  // 0x204
    unsigned int u32_504;  // 0x504
    unsigned int u32_508;  // 0x508
    unsigned char q50C;  // 0x50C
    unsigned int u32_510;  // 0x510
    unsigned char q514;  // 0x514
    unsigned int u32_548;  // 0x548
    unsigned char q54C;  // 0x54C
    unsigned int u32_1450;  // 0x1450
    unsigned char q1454;  // 0x1454
    unsigned int u32_14A0;  // 0x14A0
    unsigned char q14A4;  // 0x14A4
    unsigned int u32_1540;  // 0x1540
    unsigned int u32_1544;  // 0x1544
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
};

struct Vector4 {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    void* q010;  // 0x10
    unsigned char q014;  // 0x14
    unsigned char q018;  // 0x18
    unsigned char q020;  // 0x20
    unsigned char q024;  // 0x24
    unsigned char q02C;  // 0x2C
    unsigned char q030;  // 0x30
    void* q034;  // 0x34
};

struct VectorClassUInt {
    void* vfptr;
    unsigned char q000;  // 0x0
};

struct Viewport {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned int u32_5548;  // 0x5548
    unsigned char q554C;  // 0x554C
    unsigned int u32_15568;  // 0x15568
};

struct VoxelAnimTypeVector {
    void* vfptr;
    unsigned char q000;  // 0x0
};

struct VoxelPalette {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
};

struct VoxelSection {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    void* q010;  // 0x10
    void* q014;  // 0x14
    unsigned char q018;  // 0x18
    void* q020;  // 0x20
    unsigned char q024;  // 0x24
    unsigned char q02C;  // 0x2C
    unsigned char q030;  // 0x30
    void* q034;  // 0x34
    unsigned char q038;  // 0x38
    unsigned char q03C;  // 0x3C
    unsigned char q044;  // 0x44
    unsigned char q048;  // 0x48
    void* q050;  // 0x50
};

struct WDTClass {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    void* q00C;  // 0xC
    void* q010;  // 0x10
    unsigned char q014;  // 0x14
    void* q018;  // 0x18
    void* q020;  // 0x20
    void* q024;  // 0x24
    unsigned char q028;  // 0x28
    unsigned char q02C;  // 0x2C
    unsigned char q030;  // 0x30
    void* q034;  // 0x34
    unsigned char q038;  // 0x38
    unsigned char q03C;  // 0x3C
    unsigned char q044;  // 0x44
    unsigned char q048;  // 0x48
    unsigned char q04C;  // 0x4C
    void* q050;  // 0x50
    unsigned char q054;  // 0x54
    unsigned char q058;  // 0x58
    unsigned char q068;  // 0x68
    unsigned char q06C;  // 0x6C
    unsigned char q074;  // 0x74
    unsigned char q078;  // 0x78
    void* q080;  // 0x80
};

struct WDTObject {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    void* q00C;  // 0xC
    unsigned char q010;  // 0x10
    void* q018;  // 0x18
    void* q024;  // 0x24
    void* q02C;  // 0x2C
    unsigned char q030;  // 0x30
    unsigned char q034;  // 0x34
    unsigned char q038;  // 0x38
    void* q044;  // 0x44
    unsigned char q048;  // 0x48
    unsigned char q04C;  // 0x4C
    unsigned char q050;  // 0x50
    unsigned char q054;  // 0x54
    void* q068;  // 0x68
    unsigned char q06C;  // 0x6C
    unsigned char q070;  // 0x70
    unsigned char q080;  // 0x80
    unsigned char q084;  // 0x84
    unsigned char q098;  // 0x98
    unsigned char q09C;  // 0x9C
    void* q104;  // 0x104
};

struct WTFMode {
    void* vfptr;
    unsigned int u32_18;  // 0x18
    unsigned int q024;  // 0x24
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
};

struct WinAPI {
    void* vfptr;
    unsigned char q000;  // 0x0
};

struct WordVector {
    void* vfptr;
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned int u32_C;  // 0xC
    unsigned int u32_D;  // 0xD
};


} // namespace gamemd
