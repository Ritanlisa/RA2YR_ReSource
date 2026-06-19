#pragma once

#include <cstdint>
#include <windows.h>
#include "core/enums.hpp"
#include "core/math.hpp"

namespace gamemd
{

class ObjectClass;
class HouseClass;
class TechnoClass;
class FootClass;
class DSurface;
struct SHPStruct;

// ============================================================================
// Warhead — warhead damage logic (5 methods)
// IDA: GetWarheadSound, sub_452820, ApplyDamage
// ============================================================================
class Warhead
{
public:
    // IDA 0x452820
    static int32_t GetWarheadSound(int32_t type);  // 0x41d7e0
    // IDA 0x452820 area
    static void sub_452820();
    // IDA 0x452820 area
    static void ApplyDamage(ObjectClass* target, int32_t damage, HouseClass* owner);  // 0x4690b0
    // IDA 0x452820 area
    static bool IsLocomotor();
    // IDA 0x452820 area
    static float GetVerses(int32_t armor);

    static int32_t  s_WarheadType;  // 0x00
};

// ============================================================================
// DamageArea — area damage system (3 methods)
// IDA: ApplyScatter, sub_4D0180, sub_565660
// ============================================================================
class DamageArea
{
public:
    // IDA 0x4D0180
    static void ApplyScatter(const CoordStruct& center, int32_t damage, int32_t radius, HouseClass* owner);  // 0x4cd600
    // IDA 0x4D0180 area
    static void sub_4D0180();
    // IDA 0x565660
    static void sub_565660();

    int32_t     DamageArea_field_00;       // 0x00
};

// ============================================================================
// UnholyAlliance — unholy alliance game mode (5 methods)
// IDA: Read, Write, Seek
// ============================================================================
class UnholyAlliance
{
public:
    // IDA 0x48B2A0 area
    void Read();  // 0x5cb3f0
    // IDA 0x48B2A0 area
    void Write();  // 0x5cb400
    // IDA 0x48B2A0 area
    void Seek();  // 0x5cb430
    // IDA 0x48B2A0 area
    bool IsEnabled() const;
    // IDA 0x48B2A0 area
    void SetEnabled(bool enabled);

    bool        m_Enabled;      // 0x00
    uint8_t     _pad_01[3];     // 0x01
    int32_t     UnholyAlliance_field_04;       // 0x04
};

// ============================================================================
// Weapon — weapon management (1 method)
// IDA: DestroyTerrain
// ============================================================================
class Weapon
{
public:
    // IDA 0x48B2A0 area
    static void DestroyTerrain(const CellStruct& cell);  // 0x70c690

    int32_t     Weapon_field_00;       // 0x00
};

// ============================================================================
// Turret — turret/barrel management (2 methods)
// IDA: GetTransform, LoadVoxelTurretAndBarrel
// ============================================================================
class Turret
{
public:
    // IDA 0x48B2A0 area
    static void GetTransform(float* matrix, int32_t facing);  // 0x55a730
    // IDA 0x48B2A0 area
    static void LoadVoxelTurretAndBarrel(TechnoClass* tech);  // 0x5f8ce0

    int32_t     Turret_field_00;       // 0x00
};

// ============================================================================
// DropPod — drop pod system (1 method)
// IDA: ProcessLanding
// ============================================================================
class DropPod
{
public:
    // IDA 0x48B2A0 area
    static void ProcessLanding();  // 0x4ce840

    static int32_t  s_DropState;    // 0x00
};

// ============================================================================
// Carryall — carryall logic (1 method)
// IDA: MissionStateMachine
// ============================================================================
class Carryall
{
public:
    // IDA 0x48B2A0 area
    static void MissionStateMachine(FootClass* carryall);  // 0x416d50

    int32_t     Carryall_field_00;       // 0x00
};

// ============================================================================
// Locomotor — locomotor utilities (1 method)
// IDA: GetSpeed
// ============================================================================
class Locomotor
{
public:
    // IDA 0x48B2A0 area
    static int32_t GetSpeed(TechnoClass* tech);  // 0x426630

    int32_t     Locomotor_field_00;       // 0x00
};

// ============================================================================
// Explosion — explosion utilities (1 method)
// IDA: RemoveItem
// ============================================================================
class Explosion
{
public:
    // IDA 0x48B2A0 area
    static void RemoveItem(int32_t index);  // 0x53dda0

    int32_t     Explosion_field_00;       // 0x00
};

// ============================================================================
// BINK — BINK video utilities (1 method)
// IDA: Background_Setup
// ============================================================================
class BINK
{
public:
    // IDA 0x48B2A0 area
    static void Background_Setup(DSurface* surface);  // 0x52b9b0

    int32_t     BINK_field_00;       // 0x00
};

// ============================================================================
// CSF — CSF string table utilities (1 method)
// IDA: GetTeamString
// ============================================================================
class CSF
{
public:
    // IDA 0x48B2A0 area
    static const wchar_t* GetTeamString(int32_t index);  // 0x536210

    int32_t     CSF_field_00;       // 0x00
};

// ============================================================================
// AI — AI manager (1 method)
// IDA: CreateMCV
// ============================================================================
class AI
{
public:
    // IDA 0x48B2A0 area
    static void CreateMCV(HouseClass* house);  // 0x5d7030

    int32_t     AI_field_00;       // 0x00
};

// ============================================================================
// Isometric — isometric projection (1 method)
// IDA: InitTables 0x48B2A0 area
// ============================================================================
class Isometric
{
public:
    // IDA 0x48B2A0 area
    static void InitTables();  // 0x47b3a0

    static int32_t  s_IsoX[512];    // 0x00
    static int32_t  s_IsoY[512];    // 0x800
};

// ============================================================================
// Shroud — shroud/fog system (1 method)
// IDA: ProcessCellVisibility
// ============================================================================
class Shroud
{
public:
    // IDA 0x48B2A0 area
    static void ProcessCellVisibility();  // 0x654490

    static uint8_t* s_ShroudMap;    // 0x00
};

// ============================================================================
// GUIDUtil — GUID comparison utility (1 method, IDA: GUID)
// IDA: Compare
// NOTE: Renamed from GUID to avoid collision with Windows ::GUID
// ============================================================================
class GUIDUtil
{
public:
    // IDA 0x48B2A0 area
    static bool Compare(const ::GUID& a, const ::GUID& b);

    int32_t     GUIDUtil_field_00;       // 0x00
};

// ============================================================================
// CoordUtil — coordinate utilities (1 method, IDA: CoordStruct)
// IDA: Set2
// NOTE: Renamed from CoordStruct to avoid collision with core/math.hpp CoordStruct
// ============================================================================
class CoordUtil
{
public:
    // IDA 0x48B2A0 area
    void Set2(int32_t x, int32_t y, int32_t z);

    int32_t     X;              // 0x00
    int32_t     Y;              // 0x04
    int32_t     Z;              // 0x08
};

// ============================================================================
// TriggerActionQueue — trigger action queue (1 method)
// IDA: ProcessAll
// ============================================================================
class TriggerActionQueue
{
public:
    // IDA 0x48B2A0 area
    static void ProcessAll();  // 0x6e5820

    static int32_t  s_Count;        // 0x00
};

// ============================================================================
// AnimSystem — animation system (1 method)
// IDA: Init
// ============================================================================
class AnimSystem
{
public:
    // IDA 0x48B2A0 area
    static void Init();  // 0x75a790

    static int32_t  s_AnimationCount;   // 0x00
};

// ============================================================================
// TClassFactory_MechLocomotionClass — COM class factory (4 methods)
// IDA: AddRef, GetClassName, ddtor
// ============================================================================
class TClassFactory_MechLocomotionClass : public IClassFactory
{
public:
    TClassFactory_MechLocomotionClass() = default;
    virtual ~TClassFactory_MechLocomotionClass() = default;

    // IClassFactory
    virtual HRESULT __stdcall CreateInstance(IUnknown* pUnkOuter, const GUID& riid, void** ppv) override;
    virtual HRESULT __stdcall LockServer(bool fLock) override;
    // IUnknown
    virtual HRESULT __stdcall QueryInterface(const GUID& riid, void** ppv) override;
    virtual ULONG __stdcall AddRef() override;  // 0x6c4d40
    virtual ULONG __stdcall Release() override;

    int32_t     m_RefCount;     // 0x04
};

// ============================================================================
// BuildingLoadQueue — building load queue (4 methods)
// IDA: GetNext, Find, FindObject
// ============================================================================
class BuildingLoadQueue
{
public:
    BuildingLoadQueue() = default;

    // IDA 0x48B2A0 area
    void* GetNext();  // 0x6e6e20
    // IDA 0x48B2A0 area
    void* Find(int32_t index);  // 0x6e6f20
    // IDA 0x48B2A0 area
    void* FindObject(ObjectClass* obj);  // 0x6e6ff0
    // IDA 0x48B2A0 area
    void Add(ObjectClass* obj);

    void*       m_Queue;        // 0x00
    int32_t     m_Count;        // 0x04
    int32_t     m_Capacity;     // 0x08
};

// ============================================================================
// Matrix3x4 — 3x4 transformation matrix (3 methods)
// IDA: Identity 0x5AE860, Translate, TransformCell
// ============================================================================
class Matrix3x4
{
public:
    // IDA 0x5AE860
    static void Identity(float* m);  // 0x5ae860
    // IDA 0x5AE860 area
    static void Translate(float* m, float x, float y, float z);  // 0x5ae980
    // IDA 0x5AE860 area
    static CellStruct TransformCell(const float* m, const CellStruct& cell);  // 0x6d2360

    float       m_Data[12];     // 0x00 (3 rows × 4 columns)
};

// ============================================================================
// InputManager_ProcessEvents — input event processing (5 methods)
// IDA: AddRef, Release, StubReturnFalse
// ============================================================================
class InputManager_ProcessEvents
{
public:
    InputManager_ProcessEvents() = default;

    // IDA 0x48B2A0 area
    int32_t AddRef();  // 0x40d230
    int32_t Release();  // 0x40d240
    bool StubReturnFalse();  // 0x4aebd0
    void Process();
    void Clear();

    int32_t     m_RefCount;     // 0x00
    int32_t     InputManager_ProcessEvents_field_04;       // 0x04
    int32_t     InputManager_ProcessEvents_field_08;       // 0x08
};


// === Batch-generated MISSING class stubs ===

// 16 methods in IDA
class AITriggerTypeClass
{
public:
    virtual ~AITriggerTypeClass() = default;

    virtual void GetClassIdentifier() {} // 0x41e500
    virtual void LoadTypeData() {} // 0x41e540
    virtual void SaveToINI() {} // 0x41e5c0
    virtual void ProcessPower() {} // 0x41e5e0
    virtual void EnemyHouseOwns() {} // 0x41eaf0
    // +11 more virtual methods

    uint8_t AITriggerTypeClass_field_0x04[4];
    uint8_t AITriggerTypeClass_field_0x08[4];
    uint8_t AITriggerTypeClass_field_0x0C[4];
    uint8_t AITriggerTypeClass_field_0x10[4];
    uint8_t AITriggerTypeClass_field_0x14[4];
    uint8_t AITriggerTypeClass_field_0x18[4];
    uint8_t AITriggerTypeClass_field_0x1C[4];
    uint8_t AITriggerTypeClass_field_0x20[4];
    uint8_t AITriggerTypeClass_field_0x24[4];
    uint8_t AITriggerTypeClass_field_0x28[4];
    uint8_t AITriggerTypeClass_field_0x2C[4];
    uint8_t AITriggerTypeClass_field_0x30[4];
    uint8_t AITriggerTypeClass_field_0x34[4];
    uint8_t AITriggerTypeClass_field_0x38[4];
    uint8_t AITriggerTypeClass_field_0x3C[4];
};
// 7 methods in IDA
class AnimFile
{
public:
    virtual ~AnimFile() = default;

    virtual void AddRef() {} // 0x426750
    virtual void Release() {} // 0x426790
    virtual void Load() {} // 0x426a50
    virtual void ddtor() {} // 0x426a90
    virtual void Check() {} // 0x426dd0
    // +2 more virtual methods

    uint8_t AnimFile_field_0x04[4];
    uint8_t AnimFile_field_0x08[4];
    uint8_t AnimFile_field_0x0C[4];
    uint8_t AnimFile_field_0x10[4];
    uint8_t AnimFile_field_0x14[4];
    uint8_t AnimFile_field_0x18[4];
};
// 1 methods in IDA
class AnimSequence
{
public:
    virtual ~AnimSequence() = default;

    virtual void Parse() {} // 0x523d00

};
// 1 methods in IDA
class AnimTypeList
{
public:
    virtual ~AnimTypeList() = default;

    virtual void Constructor() {} // 0x67a470

};
// 1 methods in IDA
class AnimTypeVector
{
public:
    virtual ~AnimTypeVector() = default;

    virtual void Constructor() {} // 0x525680

};
// 3 methods in IDA
class CSFClass
{
public:
    virtual ~CSFClass() = default;

    virtual void CopyString() {} // 0x595710
    virtual void sub_6977C0() {} // 0x6977c0
    virtual void LoadFile() {} // 0x7346a0

    uint8_t CSFClass_field_0x04[4];
    uint8_t CSFClass_field_0x08[4];
};
// 1 methods in IDA
class CaptureManager
{
public:
    virtual ~CaptureManager() = default;

    virtual void FreeAll() {} // 0x472140

};
// 1 methods in IDA
class ChronoScreen
{
public:
    virtual ~ChronoScreen() = default;

    virtual void IsActive() {} // 0x53bad0

};
// 8 methods in IDA
class CoopCampaignVector
{
public:
    virtual ~CoopCampaignVector() = default;

    virtual void Seek() {} // 0x5c5120
    virtual void AddRef() {} // 0x5c55f0
    virtual void Release() {} // 0x5c5630
    virtual void ddtor() {} // 0x5c56e0
    virtual void Read() {} // 0x5c5710
    // +3 more virtual methods

    uint8_t CoopCampaignVector_field_0x04[4];
    uint8_t CoopCampaignVector_field_0x08[4];
    uint8_t CoopCampaignVector_field_0x0C[4];
    uint8_t CoopCampaignVector_field_0x10[4];
    uint8_t CoopCampaignVector_field_0x14[4];
    uint8_t CoopCampaignVector_field_0x18[4];
    uint8_t CoopCampaignVector_field_0x1C[4];
};
// 2 methods in IDA
class Coord2D
{
public:
    virtual ~Coord2D() = default;

    virtual void Add() {} // 0x437f10
    virtual void Sub() {} // 0x487f20

    uint8_t Coord2D_field_0x04[4];
};
// 3 methods in IDA
class Coord3D
{
public:
    virtual ~Coord3D() = default;

    virtual void Set() {} // 0x437090
    virtual void Equals() {} // 0x459f60
    virtual void Add() {} // 0x6ce240

    uint8_t Coord3D_field_0x04[4];
    uint8_t Coord3D_field_0x08[4];
};
// 1 methods in IDA
class CoordBounds
{
public:
    virtual ~CoordBounds() = default;

    virtual void Constructor() {} // 0x403870

};
// 1 methods in IDA
class CoordList
{
public:
    virtual ~CoordList() = default;

    virtual void GetBounds() {} // 0x4a94f0

};
// 1 methods in IDA
class CoordinateTables
{
public:
    virtual ~CoordinateTables() = default;

    virtual void Init() {} // 0x561910

};
// 1 methods in IDA
class DamageAnimClass
{
public:
    virtual ~DamageAnimClass() = default;

    virtual void Constructor() {} // 0x7493b0

};
// 8 methods in IDA
class EMPulseClass
{
public:
    virtual ~EMPulseClass() = default;

    virtual void sub_54C58C0() {} // 0x4c58c0
    virtual void Stat() {} // 0x4c59a0
    virtual void ddtor() {} // 0x4c59f0
    virtual void Write() {} // 0x4c5a30
    virtual void Seek() {} // 0x4c5a80
    // +3 more virtual methods

    uint8_t EMPulseClass_field_0x04[4];
    uint8_t EMPulseClass_field_0x08[4];
    uint8_t EMPulseClass_field_0x0C[4];
    uint8_t EMPulseClass_field_0x10[4];
    uint8_t EMPulseClass_field_0x14[4];
    uint8_t EMPulseClass_field_0x18[4];
    uint8_t EMPulseClass_field_0x1C[4];
};
// 1 methods in IDA
class ExplosionClass
{
public:
    virtual ~ExplosionClass() = default;

    virtual void ProcessFrame() {} // 0x53cbe0

};
// 4 methods in IDA
class FileExtension
{
public:
    virtual ~FileExtension() = default;

    virtual void MapHandler() {} // 0x6263d0
    virtual void Constructor() {} // 0x628240
    virtual void sub_628D10() {} // 0x628d10
    virtual void Check() {} // 0x628dd0

    uint8_t FileExtension_field_0x04[4];
    uint8_t FileExtension_field_0x08[4];
    uint8_t FileExtension_field_0x0C[4];
};
// 4 methods in IDA
class FileFind
{
public:
    virtual ~FileFind() = default;

    virtual void Next() {} // 0x47b0c0
    virtual void CloseHandle() {} // 0x47b130
    virtual void Close() {} // 0x5bbed0
    virtual void sub_5BBEE0() {} // 0x5bbee0

    uint8_t FileFind_field_0x04[4];
    uint8_t FileFind_field_0x08[4];
    uint8_t FileFind_field_0x0C[4];
};
// 4 methods in IDA
class FilePipe
{
public:
    virtual ~FilePipe() = default;

    virtual void QueryInterface() {} // 0x477790
    virtual void Destructor() {} // 0x7ba420
    virtual void Release() {} // 0x7ba450
    virtual void Read() {} // 0x7ba480

    uint8_t FilePipe_field_0x04[4];
    uint8_t FilePipe_field_0x08[4];
    uint8_t FilePipe_field_0x0C[4];
};
// 2 methods in IDA
class FileStraw
{
public:
    virtual ~FileStraw() = default;

    virtual void Open() {} // 0x525a10
    virtual void Destructor() {} // 0x7ba590

    uint8_t FileStraw_field_0x04[4];
};
// 2 methods in IDA
class FileStraw_Destru
{
public:
    virtual ~FileStraw_Destru() = default;

    virtual void QueryInterface() {} // 0x477770
    virtual void Release() {} // 0x7ba530

    uint8_t FileStraw_Destru_field_0x04[4];
};
// 1 methods in IDA
class FileTree
{
public:
    virtual ~FileTree() = default;

    virtual void CleanupAll() {} // 0x730100

};
// 1 methods in IDA
class FileTreeNode
{
public:
    virtual ~FileTreeNode() = default;

    virtual void Destroy() {} // 0x69e500

};
// 8 methods in IDA
class InfantryTypeVector
{
public:
    virtual ~InfantryTypeVector() = default;

    virtual void QueryInterface() {} // 0x512ae0
    virtual void Release() {} // 0x512c80
    virtual void AddType() {} // 0x512d60
    virtual void Remove() {} // 0x512da0
    virtual void Construct() {} // 0x512dc0
    // +3 more virtual methods

    uint8_t InfantryTypeVector_field_0x04[4];
    uint8_t InfantryTypeVector_field_0x08[4];
    uint8_t InfantryTypeVector_field_0x0C[4];
    uint8_t InfantryTypeVector_field_0x10[4];
    uint8_t InfantryTypeVector_field_0x14[4];
    uint8_t InfantryTypeVector_field_0x18[4];
    uint8_t InfantryTypeVector_field_0x1C[4];
};
// 2 methods in IDA
class IsoCoord
{
public:
    virtual ~IsoCoord() = default;

    virtual void ToPixel() {} // 0x6d1eb0
    virtual void ToScreenOffset() {} // 0x6d62e0

    uint8_t IsoCoord_field_0x04[4];
};
// 4 methods in IDA
class IsoTile
{
public:
    virtual ~IsoTile() = default;

    virtual void Decode16Bit() {} // 0x748750
    virtual void Decode8BitV2() {} // 0x748c30
    virtual void Decode16BitV2() {} // 0x7c39c0
    virtual void Decode8Bit() {} // 0x7c3eb0

    uint8_t IsoTile_field_0x04[4];
    uint8_t IsoTile_field_0x08[4];
    uint8_t IsoTile_field_0x0C[4];
};
// 1 methods in IDA
class IsometricTileClass
{
public:
    virtual ~IsometricTileClass() = default;

    virtual void IsometricTileClass() {} // 0x543780

};
// 20 methods in IDA
class IsometricTileTypeClass
{
public:
    virtual ~IsometricTileTypeClass() = default;

    virtual void CleanupMembers() {} // 0x544a70
    virtual void LoadTileFileData() {} // 0x544cb0
    virtual void GetTerrainType() {} // 0x549aa0
    virtual void GetHeight() {} // 0x549ae0
    virtual void vt_entry_6C() {} // 0x549b50
    // +15 more virtual methods

    uint8_t IsometricTileTypeClass_field_0x04[4];
    uint8_t IsometricTileTypeClass_field_0x08[4];
    uint8_t IsometricTileTypeClass_field_0x0C[4];
    uint8_t IsometricTileTypeClass_field_0x10[4];
    uint8_t IsometricTileTypeClass_field_0x14[4];
    uint8_t IsometricTileTypeClass_field_0x18[4];
    uint8_t IsometricTileTypeClass_field_0x1C[4];
    uint8_t IsometricTileTypeClass_field_0x20[4];
    uint8_t IsometricTileTypeClass_field_0x24[4];
    uint8_t IsometricTileTypeClass_field_0x28[4];
    uint8_t IsometricTileTypeClass_field_0x2C[4];
    uint8_t IsometricTileTypeClass_field_0x30[4];
    uint8_t IsometricTileTypeClass_field_0x34[4];
    uint8_t IsometricTileTypeClass_field_0x38[4];
    uint8_t IsometricTileTypeClass_field_0x3C[4];
    uint8_t IsometricTileTypeClass_field_0x40[4];
    uint8_t IsometricTileTypeClass_field_0x44[4];
    uint8_t IsometricTileTypeClass_field_0x48[4];
    uint8_t IsometricTileTypeClass_field_0x4C[4];
};
// 1 methods in IDA
class Lightning
{
public:
    virtual ~Lightning() = default;

    virtual void Draw() {} // 0x4c1f20

};
// 1 methods in IDA
class MapCoords
{
public:
    virtual ~MapCoords() = default;

    virtual void Init() {} // 0x6b5240

};
// 1 methods in IDA
class MapData
{
public:
    virtual ~MapData() = default;

    virtual void InitHeights() {} // 0x45b1c0

};
// 7 methods in IDA
class MapFile
{
public:
    virtual ~MapFile() = default;

    virtual void LoadDescription() {} // 0x69a3b0
    virtual void ddtor() {} // 0x69c500
    virtual void Write() {} // 0x69c560
    virtual void Release() {} // 0x69cbc0
    virtual void Read() {} // 0x69cd00
    // +2 more virtual methods

    uint8_t MapFile_field_0x04[4];
    uint8_t MapFile_field_0x08[4];
    uint8_t MapFile_field_0x0C[4];
    uint8_t MapFile_field_0x10[4];
    uint8_t MapFile_field_0x14[4];
    uint8_t MapFile_field_0x18[4];
};
// 2 methods in IDA
class MapPreview
{
public:
    virtual ~MapPreview() = default;

    virtual void Check() {} // 0x5d63e0
    virtual void Upload() {} // 0x5e7eb0

    uint8_t MapPreview_field_0x04[4];
};
// 1 methods in IDA
class MapResourceClass
{
public:
    virtual ~MapResourceClass() = default;

    virtual void Constructor() {} // 0x595740

};
// 9 methods in IDA
class MapSeed
{
public:
    virtual ~MapSeed() = default;

    virtual void CheckTileMatch() {} // 0x56d100
    virtual void IsInitialized() {} // 0x58b7d0
    virtual void PlaceCityBlock() {} // 0x5910f0
    virtual void PlaceCityBuildings() {} // 0x591d80
    virtual void PlaceCityBlock2() {} // 0x593550
    // +4 more virtual methods

    uint8_t MapSeed_field_0x04[4];
    uint8_t MapSeed_field_0x08[4];
    uint8_t MapSeed_field_0x0C[4];
    uint8_t MapSeed_field_0x10[4];
    uint8_t MapSeed_field_0x14[4];
    uint8_t MapSeed_field_0x18[4];
    uint8_t MapSeed_field_0x1C[4];
    uint8_t MapSeed_field_0x20[4];
};
// 12 methods in IDA
class MapSeedClass
{
public:
    virtual ~MapSeedClass() = default;

    virtual void Constructor() {} // 0x595680
    virtual void Release() {} // 0x597760
    virtual void AddRef() {} // 0x597a30
    virtual void ddtor() {} // 0x597d50
    virtual void Generate() {} // 0x597f80
    // +7 more virtual methods

    uint8_t MapSeedClass_field_0x04[4];
    uint8_t MapSeedClass_field_0x08[4];
    uint8_t MapSeedClass_field_0x0C[4];
    uint8_t MapSeedClass_field_0x10[4];
    uint8_t MapSeedClass_field_0x14[4];
    uint8_t MapSeedClass_field_0x18[4];
    uint8_t MapSeedClass_field_0x1C[4];
    uint8_t MapSeedClass_field_0x20[4];
    uint8_t MapSeedClass_field_0x24[4];
    uint8_t MapSeedClass_field_0x28[4];
    uint8_t MapSeedClass_field_0x2C[4];
};
// 3 methods in IDA
class MapSizeGameOption_WorldDominationTour
{
public:
    virtual ~MapSizeGameOption_WorldDominationTour() = default;

    virtual void Read() {} // 0x767740
    virtual void ddtor() {} // 0x767800
    virtual void QueryInterface() {} // 0x7678c0

    uint8_t MapSizeGameOption_WorldDominationTour_field_0x04[4];
    uint8_t MapSizeGameOption_WorldDominationTour_field_0x08[4];
};
// 1 methods in IDA
class Map_WorldDominationTour
{
public:
    virtual ~Map_WorldDominationTour() = default;

    virtual void QueryInterface() {} // 0x769c00

};
// 2 methods in IDA
class Matrix
{
public:
    virtual ~Matrix() = default;

    virtual void Copy12Float() {} // 0x5ae5e0
    virtual void Scale() {} // 0x5bd730

    uint8_t Matrix_field_0x04[4];
};
// 1 methods in IDA
class Matrix2D
{
public:
    virtual ~Matrix2D() = default;

    virtual void Rotate() {} // 0x5af1a0

};
// 5 methods in IDA
class Matrix3x3
{
public:
    virtual ~Matrix3x3() = default;

    virtual void Multiply() {} // 0x5ae8f0
    virtual void ApplyCol0() {} // 0x5ae9b0
    virtual void ApplyCol1() {} // 0x5ae9e0
    virtual void RotateX() {} // 0x5aef60
    virtual void TransformPoint() {} // 0x5af4d0

    uint8_t Matrix3x3_field_0x04[4];
    uint8_t Matrix3x3_field_0x08[4];
    uint8_t Matrix3x3_field_0x0C[4];
    uint8_t Matrix3x3_field_0x10[4];
};
// 2 methods in IDA
class PlacementList
{
public:
    virtual ~PlacementList() = default;

    virtual void FindByID() {} // 0x47c4d0
    virtual void FindByType() {} // 0x47ebf0

    uint8_t PlacementList_field_0x04[4];
};
// 2 methods in IDA
class PlanningNodeClass
{
public:
    virtual ~PlanningNodeClass() = default;

    virtual void CleanupAll() {} // 0x6370b0
    virtual void sub_63EBD0() {} // 0x63ebd0

    uint8_t PlanningNodeClass_field_0x04[4];
};
// 13 methods in IDA
class RadarHashVector
{
public:
    virtual ~RadarHashVector() = default;

    virtual void Clear() {} // 0x658890
    virtual void GetCount() {} // 0x6588c0
    virtual void Seek() {} // 0x6588e0
    virtual void AddRef() {} // 0x658910
    virtual void Release() {} // 0x658970
    // +8 more virtual methods

    uint8_t RadarHashVector_field_0x04[4];
    uint8_t RadarHashVector_field_0x08[4];
    uint8_t RadarHashVector_field_0x0C[4];
    uint8_t RadarHashVector_field_0x10[4];
    uint8_t RadarHashVector_field_0x14[4];
    uint8_t RadarHashVector_field_0x18[4];
    uint8_t RadarHashVector_field_0x1C[4];
    uint8_t RadarHashVector_field_0x20[4];
    uint8_t RadarHashVector_field_0x24[4];
    uint8_t RadarHashVector_field_0x28[4];
    uint8_t RadarHashVector_field_0x2C[4];
    uint8_t RadarHashVector_field_0x30[4];
};
// 8 methods in IDA
class ScoreAnimClass
{
public:
    virtual ~ScoreAnimClass() = default;

    virtual void sub_690C00() {} // 0x690c00
    virtual void AnimateText() {} // 0x690d60
    virtual void AddRef() {} // 0x690f70
    virtual void Release() {} // 0x690fc0
    virtual void Constructor_ScoreAnimClass() {} // 0x690fe0
    // +3 more virtual methods

    uint8_t ScoreAnimClass_field_0x04[4];
    uint8_t ScoreAnimClass_field_0x08[4];
    uint8_t ScoreAnimClass_field_0x0C[4];
    uint8_t ScoreAnimClass_field_0x10[4];
    uint8_t ScoreAnimClass_field_0x14[4];
    uint8_t ScoreAnimClass_field_0x18[4];
    uint8_t ScoreAnimClass_field_0x1C[4];
};
// 1 methods in IDA
class ScoreBoard
{
public:
    virtual ~ScoreBoard() = default;

    virtual void Render() {} // 0x542620

};
// 1 methods in IDA
class ScoreClass
{
public:
    virtual ~ScoreClass() = default;

    virtual void SetState() {} // 0x5cd3c0

};
// 4 methods in IDA
class ScoreFontClass
{
public:
    virtual ~ScoreFontClass() = default;

    virtual void Release() {} // 0x6907a0
    virtual void AddRef() {} // 0x6907e0
    virtual void QueryInterface() {} // 0x691040
    virtual void Constructor_ScoreFontClass() {} // 0x691100

    uint8_t ScoreFontClass_field_0x04[4];
    uint8_t ScoreFontClass_field_0x08[4];
    uint8_t ScoreFontClass_field_0x0C[4];
};
// 10 methods in IDA
class ScoreScreen
{
public:
    virtual ~ScoreScreen() = default;

    virtual void Display() {} // 0x68cd20
    virtual void Check() {} // 0x68ec00
    virtual void sub_68EF20() {} // 0x68ef20
    virtual void DisplayTimeText() {} // 0x68f9b0
    virtual void LoadAudio() {} // 0x690640
    // +5 more virtual methods

    uint8_t ScoreScreen_field_0x04[4];
    uint8_t ScoreScreen_field_0x08[4];
    uint8_t ScoreScreen_field_0x0C[4];
    uint8_t ScoreScreen_field_0x10[4];
    uint8_t ScoreScreen_field_0x14[4];
    uint8_t ScoreScreen_field_0x18[4];
    uint8_t ScoreScreen_field_0x1C[4];
    uint8_t ScoreScreen_field_0x20[4];
    uint8_t ScoreScreen_field_0x24[4];
};
// 1 methods in IDA
class ScoreScreenClass
{
public:
    virtual ~ScoreScreenClass() = default;

    virtual void ProcessFrame() {} // 0x691970

};
// 2 methods in IDA
class ScoreText
{
public:
    virtual ~ScoreText() = default;

    virtual void ShowAlt() {} // 0x76ea20
    virtual void Show() {} // 0x76eaf0

    uint8_t ScoreText_field_0x04[4];
};
// 2 methods in IDA
class ShroudClass
{
public:
    virtual ~ShroudClass() = default;

    virtual void UpdateVisibility() {} // 0x567230
    virtual void Reset() {} // 0x577ab0

    uint8_t ShroudClass_field_0x04[4];
};
// 1 methods in IDA
class SpawnControlVector
{
public:
    virtual ~SpawnControlVector() = default;

    virtual void Constructor() {} // 0x6b8880

};
// 1 methods in IDA
class SuperClassVector
{
public:
    virtual ~SuperClassVector() = default;

    virtual void Construct() {} // 0x510500

};
// 5 methods in IDA
class SuperWeaponClass
{
public:
    virtual ~SuperWeaponClass() = default;

    virtual void LoadFromSaveStream() {} // 0x539890
    virtual void ProcessCharged() {} // 0x6c5640
    virtual void UpdateAll() {} // 0x6da740
    virtual void CreateChemLauncher() {} // 0x6e38f0
    virtual void FindByName() {} // 0x773030

    uint8_t SuperWeaponClass_field_0x04[4];
    uint8_t SuperWeaponClass_field_0x08[4];
    uint8_t SuperWeaponClass_field_0x0C[4];
    uint8_t SuperWeaponClass_field_0x10[4];
};
// 4 methods in IDA
class TClassFactory_AnimClass
{
public:
    virtual ~TClassFactory_AnimClass() = default;

    virtual void AddRef() {} // 0x6c39c0
    virtual void GetClassName() {} // 0x6c39e0
    virtual void ddtor() {} // 0x6c3a10
    virtual void GetSize() {} // 0x6c3a90

    uint8_t TClassFactory_AnimClass_field_0x04[4];
    uint8_t TClassFactory_AnimClass_field_0x08[4];
    uint8_t TClassFactory_AnimClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_BulletClass
{
public:
    virtual ~TClassFactory_BulletClass() = default;

    virtual void AddRef() {} // 0x6c5040
    virtual void GetClassName() {} // 0x6c5060
    virtual void ddtor() {} // 0x6c5090
    virtual void GetSize() {} // 0x6c5110

    uint8_t TClassFactory_BulletClass_field_0x04[4];
    uint8_t TClassFactory_BulletClass_field_0x08[4];
    uint8_t TClassFactory_BulletClass_field_0x0C[4];
};
// 8 methods in IDA
class TClassFactory_CampaignClass
{
public:
    virtual ~TClassFactory_CampaignClass() = default;

    virtual void sub_6C00C0() {} // 0x6c00c0
    virtual void Release() {} // 0x6c00e0
    virtual void sub_6C0110() {} // 0x6c0110
    virtual void sub_6C0190() {} // 0x6c0190
    virtual void AddRef() {} // 0x6c0240
    // +3 more virtual methods

    uint8_t TClassFactory_CampaignClass_field_0x04[4];
    uint8_t TClassFactory_CampaignClass_field_0x08[4];
    uint8_t TClassFactory_CampaignClass_field_0x0C[4];
    uint8_t TClassFactory_CampaignClass_field_0x10[4];
    uint8_t TClassFactory_CampaignClass_field_0x14[4];
    uint8_t TClassFactory_CampaignClass_field_0x18[4];
    uint8_t TClassFactory_CampaignClass_field_0x1C[4];
};
// 4 methods in IDA
class TClassFactory_CellClass
{
public:
    virtual ~TClassFactory_CellClass() = default;

    virtual void AddRef() {} // 0x6bf940
    virtual void GetClassName() {} // 0x6bf960
    virtual void ddtor() {} // 0x6bf990
    virtual void GetSize() {} // 0x6bfa10

    uint8_t TClassFactory_CellClass_field_0x04[4];
    uint8_t TClassFactory_CellClass_field_0x08[4];
    uint8_t TClassFactory_CellClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_EMPulseClass
{
public:
    virtual ~TClassFactory_EMPulseClass() = default;

    virtual void AddRef() {} // 0x6bfac0
    virtual void GetClassName() {} // 0x6bfae0
    virtual void ddtor() {} // 0x6bfb10
    virtual void GetSize() {} // 0x6bfb90

    uint8_t TClassFactory_EMPulseClass_field_0x04[4];
    uint8_t TClassFactory_EMPulseClass_field_0x08[4];
    uint8_t TClassFactory_EMPulseClass_field_0x0C[4];
};
// 1 methods in IDA
class TeamTypeVector
{
public:
    virtual ~TeamTypeVector() = default;

    virtual void CopyConstruct() {} // 0x50e830

};


// === Batch-generated MISSING class stubs ===

// 8 methods in IDA
class AbstractClassVector
{
public:
    virtual ~AbstractClassVector() = default;

    virtual void Seek() {} // 0x4e01e0
    virtual void QueryInterface() {} // 0x4e02d0
    virtual void AddRef() {} // 0x4e0320
    virtual void Release() {} // 0x4e0360
    virtual void ddtor() {} // 0x4e0410
    // +3 more virtual methods

    uint8_t AbstractClassVector_field_0x04[4];
    uint8_t AbstractClassVector_field_0x08[4];
    uint8_t AbstractClassVector_field_0x0C[4];
    uint8_t AbstractClassVector_field_0x10[4];
    uint8_t AbstractClassVector_field_0x14[4];
    uint8_t AbstractClassVector_field_0x18[4];
    uint8_t AbstractClassVector_field_0x1C[4];
};
// 1 methods in IDA
class ActionQueue
{
public:
    virtual ~ActionQueue() = default;

    virtual void PushEntry() {} // 0x53cb10

};
// 1 methods in IDA
class Actions
{
public:
    virtual ~Actions() = default;

    virtual void Reset() {} // 0x5bddc0

};
// 1 methods in IDA
class AircraftTrackerClass
{
public:
    virtual ~AircraftTrackerClass() = default;

    virtual void FillCurrentVector() {} // 0x412b40

};
// 1 methods in IDA
class AircraftTypeVector
{
public:
    virtual ~AircraftTypeVector() = default;

    virtual void Constructor() {} // 0x513990

};
// 10 methods in IDA
class AlphaShapeClass
{
public:
    virtual ~AlphaShapeClass() = default;

    virtual void CTOR() {} // 0x420960
    virtual void Constructor() {} // 0x420af0
    virtual void SD_vt03() {} // 0x420d40
    virtual void SD_vt11() {} // 0x420d80
    virtual void SD_vt12() {} // 0x420d90
    // +5 more virtual methods

    uint8_t AlphaShapeClass_field_0x04[4];
    uint8_t AlphaShapeClass_field_0x08[4];
    uint8_t AlphaShapeClass_field_0x0C[4];
    uint8_t AlphaShapeClass_field_0x10[4];
    uint8_t AlphaShapeClass_field_0x14[4];
    uint8_t AlphaShapeClass_field_0x18[4];
    uint8_t AlphaShapeClass_field_0x1C[4];
    uint8_t AlphaShapeClass_field_0x20[4];
    uint8_t AlphaShapeClass_field_0x24[4];
};
// 1 methods in IDA
class AngerVector
{
public:
    virtual ~AngerVector() = default;

    virtual void Construct() {} // 0x5106e0

};
// 1 methods in IDA
class AppState
{
public:
    virtual ~AppState() = default;

    virtual void CallMethod() {} // 0x5f3320

};
// 1 methods in IDA
class ArcTan
{
public:
    virtual ~ArcTan() = default;

    virtual void Update() {} // 0x7492b0

};
// 2 methods in IDA
class ArmorType
{
public:
    virtual ~ArmorType() = default;

    virtual void FindIndex() {} // 0x4753f0
    virtual void LookupByName() {} // 0x772a50

    uint8_t ArmorType_field_0x04[4];
};
// 6 methods in IDA
class ArtConfig
{
public:
    virtual ~ArtConfig() = default;

    virtual void loadConfig() {} // 0x5cc760
    virtual void ReadLayout() {} // 0x7681e0
    virtual void ParseLayoutEntry() {} // 0x768f50
    virtual void saveConfig() {} // 0x7691e0
    virtual void resetConfig() {} // 0x76fb90
    // +1 more virtual methods

    uint8_t ArtConfig_field_0x04[4];
    uint8_t ArtConfig_field_0x08[4];
    uint8_t ArtConfig_field_0x0C[4];
    uint8_t ArtConfig_field_0x10[4];
    uint8_t ArtConfig_field_0x14[4];
};
// 1 methods in IDA
class AssetClass
{
public:
    virtual ~AssetClass() = default;

    virtual void ReleaseAndReload() {} // 0x534e50

};
// 1 methods in IDA
class BTree
{
public:
    virtual ~BTree() = default;

    virtual void DeleteSubtree() {} // 0x69e100

};
// 5 methods in IDA
class BaseNodeClass_Vector
{
public:
    virtual ~BaseNodeClass_Vector() = default;

    virtual void Release() {} // 0x42f9c0
    virtual void ddtor() {} // 0x42fab0
    virtual void Read() {} // 0x42fae0
    virtual void Write() {} // 0x42fb30
    virtual void QueryInterface() {} // 0x42fb50

    uint8_t BaseNodeClass_Vector_field_0x04[4];
    uint8_t BaseNodeClass_Vector_field_0x08[4];
    uint8_t BaseNodeClass_Vector_field_0x0C[4];
    uint8_t BaseNodeClass_Vector_field_0x10[4];
};
// 4 methods in IDA
class BigInt
{
public:
    virtual ~BigInt() = default;

    virtual void ArrayArithmetic() {} // 0x5c6fe0
    virtual void DecryptBlock() {} // 0x632740
    virtual void RSAOperation() {} // 0x632870
    virtual void Compare() {} // 0x632bc0

    uint8_t BigInt_field_0x04[4];
    uint8_t BigInt_field_0x08[4];
    uint8_t BigInt_field_0x0C[4];
};
// 5 methods in IDA
class BinkMovieClass
{
public:
    virtual ~BinkMovieClass() = default;

    virtual void SetPosition() {} // 0x433180
    virtual void RenderFrameToSurface() {} // 0x4333f0
    virtual void AllocateRenderSurface() {} // 0x4335e0
    virtual void ReleaseRenderSurface() {} // 0x4336c0
    virtual void OpenFile() {} // 0x433770

    uint8_t BinkMovieClass_field_0x04[4];
    uint8_t BinkMovieClass_field_0x08[4];
    uint8_t BinkMovieClass_field_0x0C[4];
    uint8_t BinkMovieClass_field_0x10[4];
};
// 5 methods in IDA
class BlowPipe
{
public:
    virtual ~BlowPipe() = default;

    virtual void Draw() {} // 0x438000
    virtual void DrawAlt() {} // 0x438030
    virtual void AddRef() {} // 0x438060
    virtual void Read() {} // 0x4380a0
    virtual void QueryInterface() {} // 0x632f90

    uint8_t BlowPipe_field_0x04[4];
    uint8_t BlowPipe_field_0x08[4];
    uint8_t BlowPipe_field_0x0C[4];
    uint8_t BlowPipe_field_0x10[4];
};
// 3 methods in IDA
class BlowStraw
{
public:
    virtual ~BlowStraw() = default;

    virtual void Release() {} // 0x438210
    virtual void QueryInterface() {} // 0x5b45c0
    virtual void Constructor_MixFileClass() {} // 0x5b4630

    uint8_t BlowStraw_field_0x04[4];
    uint8_t BlowStraw_field_0x08[4];
};
// 1 methods in IDA
class BoolVector
{
public:
    virtual ~BoolVector() = default;

    virtual void Construct() {} // 0x510920

};
// 1 methods in IDA
class BridgeClass
{
public:
    virtual ~BridgeClass() = default;

    virtual void GetCellData() {} // 0x42e820

};
// 1 methods in IDA
class BuildLocation
{
public:
    virtual ~BuildLocation() = default;

    virtual void InitCandidate() {} // 0x50e450

};
// 1 methods in IDA
class BuildLocationVector
{
public:
    virtual ~BuildLocationVector() = default;

    virtual void Grow() {} // 0x510860

};
// 1 methods in IDA
class C07EFB9C
{
public:
    virtual ~C07EFB9C() = default;

    virtual void ddtor() {} // 0x6301a0

};
// 1 methods in IDA
class C07F0188
{
public:
    virtual ~C07F0188() = default;

    virtual void ddtor() {} // 0x645620

};
// 5 methods in IDA
class C07F5C70
{
public:
    virtual ~C07F5C70() = default;

    virtual void Write() {} // 0x744600
    virtual void StubReturn2280() {} // 0x746dd0
    virtual void ddtor() {} // 0x746de0
    virtual void StubReturn1() {} // 0x746e20
    virtual void Seek() {} // 0x746e80

    uint8_t C07F5C70_field_0x04[4];
    uint8_t C07F5C70_field_0x08[4];
    uint8_t C07F5C70_field_0x0C[4];
    uint8_t C07F5C70_field_0x10[4];
};
// 6 methods in IDA
class CCToolTip
{
public:
    virtual ~CCToolTip() = default;

    virtual void CalculatePopupPosition() {} // 0x478ba0
    virtual void Release() {} // 0x478db0
    virtual void Draw1() {} // 0x478e10
    virtual void Draw2() {} // 0x478e30
    virtual void Show() {} // 0x479050
    // +1 more virtual methods

    uint8_t CCToolTip_field_0x04[4];
    uint8_t CCToolTip_field_0x08[4];
    uint8_t CCToolTip_field_0x0C[4];
    uint8_t CCToolTip_field_0x10[4];
    uint8_t CCToolTip_field_0x14[4];
};
// 13 methods in IDA
class CChatEventSink
{
public:
    virtual ~CChatEventSink() = default;

    virtual void HandleServerList() {} // 0x7a41c0
    virtual void HandleChatEvent() {} // 0x7a5890
    virtual void HandleChannelJoin() {} // 0x7a7110
    virtual void HandleLobbyPlayerUpdate() {} // 0x7a8260
    virtual void HandleUserSearch() {} // 0x7a9970
    // +8 more virtual methods

    uint8_t CChatEventSink_field_0x04[4];
    uint8_t CChatEventSink_field_0x08[4];
    uint8_t CChatEventSink_field_0x0C[4];
    uint8_t CChatEventSink_field_0x10[4];
    uint8_t CChatEventSink_field_0x14[4];
    uint8_t CChatEventSink_field_0x18[4];
    uint8_t CChatEventSink_field_0x1C[4];
    uint8_t CChatEventSink_field_0x20[4];
    uint8_t CChatEventSink_field_0x24[4];
    uint8_t CChatEventSink_field_0x28[4];
    uint8_t CChatEventSink_field_0x2C[4];
    uint8_t CChatEventSink_field_0x30[4];
};
// 2 methods in IDA
class CDROM
{
public:
    virtual ~CDROM() = default;

    virtual void DeviceIoControl() {} // 0x47a3f0
    virtual void LockVolume() {} // 0x47a6f0

    uint8_t CDROM_field_0x04[4];
};
// 1 methods in IDA
class CarryoverClass
{
public:
    virtual ~CarryoverClass() = default;

    virtual void QueryInterface() {} // 0x473920

};
// 1 methods in IDA
class CellClassVector
{
public:
    virtual ~CellClassVector() = default;

    virtual void Destruct() {} // 0x5ad570

};
// 1 methods in IDA
class CellCoord
{
public:
    virtual ~CellCoord() = default;

    virtual void To_CellObj() {} // 0x5657a0

};
// 1 methods in IDA
class CellLand
{
public:
    virtual ~CellLand() = default;

    virtual void IsBuildable() {} // 0x4863d0

};
// 1 methods in IDA
class CellSystem
{
public:
    virtual ~CellSystem() = default;

    virtual void UpdateVisibility() {} // 0x578100

};
// 1 methods in IDA
class Char
{
public:
    virtual ~Char() = default;

    virtual void Swap() {} // 0x433c90

};
// 2 methods in IDA
class Chat
{
public:
    virtual ~Chat() = default;

    virtual void ProcessMessages() {} // 0x55e420
    virtual void sub_55D4390() {} // 0x5d4390

    uint8_t Chat_field_0x04[4];
};
// 1 methods in IDA
class ChatDialog
{
public:
    virtual ~ChatDialog() = default;

    virtual void DlgProc() {} // 0x79db50

};
// 1 methods in IDA
class ChatEvent
{
public:
    virtual ~ChatEvent() = default;

    virtual void ProcessStrings() {} // 0x6b9740

};
// 1 methods in IDA
class ClassFactory_CStream
{
public:
    virtual ~ClassFactory_CStream() = default;

    virtual void Construct() {} // 0x6bee40

};
// 1 methods in IDA
class ClassFactory_Wave
{
public:
    virtual ~ClassFactory_Wave() = default;

    virtual void Construct() {} // 0x6befc0

};
// 1 methods in IDA
class Cliff
{
public:
    virtual ~Cliff() = default;

    virtual void ProcessTransitions() {} // 0x579010

};
// 16 methods in IDA
class ComStreamClass
{
public:
    virtual ~ComStreamClass() = default;

    virtual void initStream() {} // 0x76b080
    virtual void closeStream() {} // 0x76b090
    virtual void SetSize() {} // 0x7a2fe0
    virtual void Read() {} // 0x7a30d0
    virtual void Commit() {} // 0x7a3b30
    // +11 more virtual methods

    uint8_t ComStreamClass_field_0x04[4];
    uint8_t ComStreamClass_field_0x08[4];
    uint8_t ComStreamClass_field_0x0C[4];
    uint8_t ComStreamClass_field_0x10[4];
    uint8_t ComStreamClass_field_0x14[4];
    uint8_t ComStreamClass_field_0x18[4];
    uint8_t ComStreamClass_field_0x1C[4];
    uint8_t ComStreamClass_field_0x20[4];
    uint8_t ComStreamClass_field_0x24[4];
    uint8_t ComStreamClass_field_0x28[4];
    uint8_t ComStreamClass_field_0x2C[4];
    uint8_t ComStreamClass_field_0x30[4];
    uint8_t ComStreamClass_field_0x34[4];
    uint8_t ComStreamClass_field_0x38[4];
    uint8_t ComStreamClass_field_0x3C[4];
};
// 1 methods in IDA
class Compression
{
public:
    virtual ~Compression() = default;

    virtual void Read() {} // 0x55c350

};
// 2 methods in IDA
class Conditions
{
public:
    virtual ~Conditions() = default;

    virtual void CheckResult() {} // 0x653810
    virtual void CheckResult3() {} // 0x653830

    uint8_t Conditions_field_0x04[4];
};
// 1 methods in IDA
class Conflict_WorldDominationTour
{
public:
    virtual ~Conflict_WorldDominationTour() = default;

    virtual void QueryInterface() {} // 0x7667a0

};
// 9 methods in IDA
class ConnectionPointClass
{
public:
    virtual ~ConnectionPointClass() = default;

    virtual void QueryInterface() {} // 0x4a04b0
    virtual void AddRef() {} // 0x4a0520
    virtual void Release() {} // 0x4a0540
    virtual void ddtor() {} // 0x4a05d0
    virtual void Advise() {} // 0x4a0610
    // +4 more virtual methods

    uint8_t ConnectionPointClass_field_0x04[4];
    uint8_t ConnectionPointClass_field_0x08[4];
    uint8_t ConnectionPointClass_field_0x0C[4];
    uint8_t ConnectionPointClass_field_0x10[4];
    uint8_t ConnectionPointClass_field_0x14[4];
    uint8_t ConnectionPointClass_field_0x18[4];
    uint8_t ConnectionPointClass_field_0x1C[4];
    uint8_t ConnectionPointClass_field_0x20[4];
};
// 1 methods in IDA
class ConnectionPointVector
{
public:
    virtual ~ConnectionPointVector() = default;

    virtual void Construct() {} // 0x5105f0

};
// 3 methods in IDA
class CrateClass
{
public:
    virtual ~CrateClass() = default;

    virtual void ProcessPickup() {} // 0x481a00
    virtual void Update() {} // 0x56bbe0
    virtual void FindPlacement() {} // 0x56bd40

    uint8_t CrateClass_field_0x04[4];
    uint8_t CrateClass_field_0x08[4];
};
// 1 methods in IDA
class CreatureClass
{
public:
    virtual ~CreatureClass() = default;

    virtual void GetManager() {} // 0x72dae0

};
// 1 methods in IDA
class Crypto
{
public:
    virtual ~Crypto() = default;

    virtual void DecodeByte() {} // 0x632aa0

};
// 2 methods in IDA
class DListNode
{
public:
    virtual ~DListNode() = default;

    virtual void Init() {} // 0x4072c0
    virtual void InitEmpty() {} // 0x4072d0

    uint8_t DListNode_field_0x04[4];
};
// 4 methods in IDA
class Dial8Class
{
public:
    virtual ~Dial8Class() = default;

    virtual void Constructor() {} // 0x4a53b0
    virtual void SetValue() {} // 0x4a5660
    virtual void GetValue() {} // 0x4a57b0
    virtual void QueryInterface() {} // 0x4a59a0

    uint8_t Dial8Class_field_0x04[4];
    uint8_t Dial8Class_field_0x08[4];
    uint8_t Dial8Class_field_0x0C[4];
};
// 11 methods in IDA
class DiskLaserClass
{
public:
    virtual ~DiskLaserClass() = default;

    virtual void Fire() {} // 0x4a71a0
    virtual void Update() {} // 0x4a7340
    virtual void PointerGotInvalid() {} // 0x4a7900
    virtual void DiskLaserClass() {} // 0x4a7a30
    virtual void Stat() {} // 0x4a7b80
    // +6 more virtual methods

    uint8_t DiskLaserClass_field_0x04[4];
    uint8_t DiskLaserClass_field_0x08[4];
    uint8_t DiskLaserClass_field_0x0C[4];
    uint8_t DiskLaserClass_field_0x10[4];
    uint8_t DiskLaserClass_field_0x14[4];
    uint8_t DiskLaserClass_field_0x18[4];
    uint8_t DiskLaserClass_field_0x1C[4];
    uint8_t DiskLaserClass_field_0x20[4];
    uint8_t DiskLaserClass_field_0x24[4];
    uint8_t DiskLaserClass_field_0x28[4];
};
// 1 methods in IDA
class DiskSpace
{
public:
    virtual ~DiskSpace() = default;

    virtual void CheckAvailable() {} // 0x48dd50

};
// 1 methods in IDA
class DistributionVector_BuildingType
{
public:
    virtual ~DistributionVector_BuildingType() = default;

    virtual void Construct() {} // 0x510970

};
// 5 methods in IDA
class DynamicArray
{
public:
    virtual ~DynamicArray() = default;

    virtual void AddFromList() {} // 0x4129c0
    virtual void Resize() {} // 0x6249a0
    virtual void ShrinkCapacity() {} // 0x625440
    virtual void Remove() {} // 0x7acd60
    virtual void Grow() {} // 0x7ad9d0

    uint8_t DynamicArray_field_0x04[4];
    uint8_t DynamicArray_field_0x08[4];
    uint8_t DynamicArray_field_0x0C[4];
    uint8_t DynamicArray_field_0x10[4];
};
// 1 methods in IDA
class DynamicClass
{
public:
    virtual ~DynamicClass() = default;

    virtual void Insert() {} // 0x7aca00

};
// 1 methods in IDA
class DynamicStringArray
{
public:
    virtual ~DynamicStringArray() = default;

    virtual void Get() {} // 0x7ace30

};
// 1 methods in IDA
class DynamicVectorArray
{
public:
    virtual ~DynamicVectorArray() = default;

    virtual void Constructor() {} // 0x628070

};
// 1 methods in IDA
class ErrorCode
{
public:
    virtual ~ErrorCode() = default;

    virtual void Map() {} // 0x46f5e0

};
// 1 methods in IDA
class Exception
{
public:
    virtual ~Exception() = default;

    virtual void Destructor() {} // 0x7d2f41

};
// 1 methods in IDA
class ExceptionHandler
{
public:
    virtual ~ExceptionHandler() = default;

    virtual void GenerateReport() {} // 0x4c85e0

};
// 1 methods in IDA
class Field
{
public:
    virtual ~Field() = default;

    virtual void Int_Set() {} // 0x434110

};
// 1 methods in IDA
class FractalNoise
{
public:
    virtual ~FractalNoise() = default;

    virtual void Release() {} // 0x420270

};
// 7 methods in IDA
class Function
{
public:
    virtual ~Function() = default;

    virtual void 41C430() {} // 0x41c430
    virtual void 424CA0() {} // 0x424ca0
    virtual void 46B260() {} // 0x46b260
    virtual void 4B4D60() {} // 0x4b4d60
    virtual void 6342D0() {} // 0x6342d0
    // +2 more virtual methods

    uint8_t Function_field_0x04[4];
    uint8_t Function_field_0x08[4];
    uint8_t Function_field_0x0C[4];
    uint8_t Function_field_0x10[4];
    uint8_t Function_field_0x14[4];
    uint8_t Function_field_0x18[4];
};
// 1 methods in IDA
class GDlg
{
public:
    virtual ~GDlg() = default;

    virtual void LoadLetterStrings() {} // 0x4e5ac0

};
// 8 methods in IDA
class GaugeClass
{
public:
    virtual ~GaugeClass() = default;

    virtual void SetValue() {} // 0x4e2580
    virtual void GetValue() {} // 0x4e25a0
    virtual void GetRange() {} // 0x4e25d0
    virtual void SetColor() {} // 0x4e2650
    virtual void SetRange() {} // 0x4e29a0
    // +3 more virtual methods

    uint8_t GaugeClass_field_0x04[4];
    uint8_t GaugeClass_field_0x08[4];
    uint8_t GaugeClass_field_0x0C[4];
    uint8_t GaugeClass_field_0x10[4];
    uint8_t GaugeClass_field_0x14[4];
    uint8_t GaugeClass_field_0x18[4];
    uint8_t GaugeClass_field_0x1C[4];
};
// 3 methods in IDA
class GenericVector
{
public:
    virtual ~GenericVector() = default;

    virtual void StubReturnFalse() {} // 0x40cc10
    virtual void Resize() {} // 0x40ce50
    virtual void Resize2() {} // 0x50ea90

    uint8_t GenericVector_field_0x04[4];
    uint8_t GenericVector_field_0x08[4];
};
// 1 methods in IDA
class GetCurrentProcessId
{
public:
    virtual ~GetCurrentProcessId() = default;

    virtual void 0() {} // 0x7dcf22

};
// 1 methods in IDA
class GetCurrentThread
{
public:
    virtual ~GetCurrentThread() = default;

    virtual void 0() {} // 0x7dcee0

};
// 1 methods in IDA
class GetCurrentThreadId
{
public:
    virtual ~GetCurrentThreadId() = default;

    virtual void 0() {} // 0x7d1512

};
// 1 methods in IDA
class GlobalArray
{
public:
    virtual ~GlobalArray() = default;

    virtual void FindString() {} // 0x422b20

};
// 2 methods in IDA
class GlobalInit
{
public:
    virtual ~GlobalInit() = default;

    virtual void RegisterSingleton() {} // 0x5f7640
    virtual void SingletonGetter() {} // 0x71de40

    uint8_t GlobalInit_field_0x04[4];
};
// 1 methods in IDA
class GroupLabel
{
public:
    virtual ~GroupLabel() = default;

    virtual void WndProc() {} // 0x61e700

};
// 2 methods in IDA
class HVAAnimation
{
public:
    virtual ~HVAAnimation() = default;

    virtual void LoadFromFile() {} // 0x759540
    virtual void ParseFrames() {} // 0x759670

    uint8_t HVAAnimation_field_0x04[4];
};
// 1 methods in IDA
class Heap
{
public:
    virtual ~Heap() = default;

    virtual void SiftDown() {} // 0x5ad870

};
// 1 methods in IDA
class HexCoord
{
public:
    virtual ~HexCoord() = default;

    virtual void Convert() {} // 0x5654a0

};
// 1 methods in IDA
class History_WorldDominationTour
{
public:
    virtual ~History_WorldDominationTour() = default;

    virtual void QueryInterface() {} // 0x767c10

};
// 1 methods in IDA
class IDXContainer
{
public:
    virtual ~IDXContainer() = default;

    virtual void LoadSample() {} // 0x4016f0

};
// 1 methods in IDA
class INISectionList
{
public:
    virtual ~INISectionList() = default;

    virtual void Constructor() {} // 0x49e8e0

};
// 6 methods in IDA
class ImageList
{
public:
    virtual ~ImageList() = default;

    virtual void DragEnter() {} // 0x7c89f2
    virtual void BeginDrag() {} // 0x7c89f8
    virtual void Destroy() {} // 0x7c89fe
    virtual void EndDrag() {} // 0x7c8a04
    virtual void DragMove() {} // 0x7c8a0a
    // +1 more virtual methods

    uint8_t ImageList_field_0x04[4];
    uint8_t ImageList_field_0x08[4];
    uint8_t ImageList_field_0x0C[4];
    uint8_t ImageList_field_0x10[4];
    uint8_t ImageList_field_0x14[4];
};
// 2 methods in IDA
class Int4
{
public:
    virtual ~Int4() = default;

    virtual void Set() {} // 0x645c30
    virtual void Set2() {} // 0x645c50

    uint8_t Int4_field_0x04[4];
};
// 1 methods in IDA
class Int64
{
public:
    virtual ~Int64() = default;

    virtual void Equal() {} // 0x517310

};
// 2 methods in IDA
class IntDynamicVector
{
public:
    virtual ~IntDynamicVector() = default;

    virtual void QueryInterface() {} // 0x477b10
    virtual void Construct() {} // 0x717bd0

    uint8_t IntDynamicVector_field_0x04[4];
};
// 2 methods in IDA
class IntVector
{
public:
    virtual ~IntVector() = default;

    virtual void Copy() {} // 0x477b60
    virtual void Destructor() {} // 0x49f9d0

    uint8_t IntVector_field_0x04[4];
};
// 2 methods in IDA
class IsRandMap
{
public:
    virtual ~IsRandMap() = default;

    virtual void Sed() {} // 0x69adf0
    virtual void Sed2() {} // 0x69ae70

    uint8_t IsRandMap_field_0x04[4];
};
// 1 methods in IDA
class KeyValuePair
{
public:
    virtual ~KeyValuePair() = default;

    virtual void Init() {} // 0x52aec0

};
// 1 methods in IDA
class KeywordClass
{
public:
    virtual ~KeywordClass() = default;

    virtual void FindOrCreate() {} // 0x41cef0

};
// 1 methods in IDA
class KeywordType
{
public:
    virtual ~KeywordType() = default;

    virtual void FindOrCreate2() {} // 0x524cb0

};
// 3 methods in IDA
class LCW
{
public:
    virtual ~LCW() = default;

    virtual void Compress() {} // 0x5520a0
    virtual void DecompressReader() {} // 0x552490
    virtual void Decompress() {} // 0x55c7c0

    uint8_t LCW_field_0x04[4];
    uint8_t LCW_field_0x08[4];
};
// 2 methods in IDA
class LCWPipe
{
public:
    virtual ~LCWPipe() = default;

    virtual void Constructor() {} // 0x551ff0
    virtual void Destructor() {} // 0x552060

    uint8_t LCWPipe_field_0x04[4];
};
// 2 methods in IDA
class LCWPipe_Destru
{
public:
    virtual ~LCWPipe_Destru() = default;

    virtual void AddRef() {} // 0x5522d0
    virtual void QueryInterface() {} // 0x552390

    uint8_t LCWPipe_Destru_field_0x04[4];
};
// 2 methods in IDA
class LCWStraw
{
public:
    virtual ~LCWStraw() = default;

    virtual void Constructor() {} // 0x5523e0
    virtual void Destructor() {} // 0x552450

    uint8_t LCWStraw_field_0x04[4];
};
// 1 methods in IDA
class LCWStraw_Destru
{
public:
    virtual ~LCWStraw_Destru() = default;

    virtual void QueryInterface() {} // 0x5525f0

};
// 2 methods in IDA
class LZOPipe
{
public:
    virtual ~LZOPipe() = default;

    virtual void Constructor() {} // 0x55c2b0
    virtual void Destructor() {} // 0x55c310

    uint8_t LZOPipe_field_0x04[4];
};
// 2 methods in IDA
class LZOPipe_Destru
{
public:
    virtual ~LZOPipe_Destru() = default;

    virtual void AddRef() {} // 0x55c5e0
    virtual void QueryInterface() {} // 0x55c6d0

    uint8_t LZOPipe_Destru_field_0x04[4];
};
// 2 methods in IDA
class LZOStraw
{
public:
    virtual ~LZOStraw() = default;

    virtual void Constructor() {} // 0x55c720
    virtual void Destructor() {} // 0x55c780

    uint8_t LZOStraw_field_0x04[4];
};
// 1 methods in IDA
class LZOStraw_Destru
{
public:
    virtual ~LZOStraw_Destru() = default;

    virtual void QueryInterface() {} // 0x55c990

};
// 9 methods in IDA
class Lobby
{
public:
    virtual ~Lobby() = default;

    virtual void UpdateReadyIcons() {} // 0x46fa20
    virtual void SetupAllFactionSlots() {} // 0x46fac0
    virtual void EnableStartButton() {} // 0x46fb50
    virtual void FillPlayerFactions() {} // 0x4e4820
    virtual void InvalidateFactionCombos() {} // 0x4e5310
    // +4 more virtual methods

    uint8_t Lobby_field_0x04[4];
    uint8_t Lobby_field_0x08[4];
    uint8_t Lobby_field_0x0C[4];
    uint8_t Lobby_field_0x10[4];
    uint8_t Lobby_field_0x14[4];
    uint8_t Lobby_field_0x18[4];
    uint8_t Lobby_field_0x1C[4];
    uint8_t Lobby_field_0x20[4];
};
// 1 methods in IDA
class MIXClass
{
public:
    virtual ~MIXClass() = default;

    virtual void CopyHeader() {} // 0x4a8d50

};
// 4 methods in IDA
class MPCombatTeam
{
public:
    virtual ~MPCombatTeam() = default;

    virtual void Constructor() {} // 0x5c9470
    virtual void MPTeam() {} // 0x5cae10
    virtual void Constructor2() {} // 0x5caeb0
    virtual void AddToList() {} // 0x5d8d10

    uint8_t MPCombatTeam_field_0x04[4];
    uint8_t MPCombatTeam_field_0x08[4];
    uint8_t MPCombatTeam_field_0x0C[4];
};
// 1 methods in IDA
class MPScore
{
public:
    virtual ~MPScore() = default;

    virtual void DlgProc() {} // 0x5c9b10

};
// 3 methods in IDA
class MSAnim
{
public:
    virtual ~MSAnim() = default;

    virtual void GetField() {} // 0x5cb840
    virtual void SetField() {} // 0x5cb860
    virtual void Reset() {} // 0x5cc6a0

    uint8_t MSAnim_field_0x04[4];
    uint8_t MSAnim_field_0x08[4];
};
// 5 methods in IDA
class MSBinkAnim
{
public:
    virtual ~MSBinkAnim() = default;

    virtual void Pause() {} // 0x5cc850
    virtual void Stop() {} // 0x5cc880
    virtual void Load() {} // 0x5cc8a0
    virtual void Play() {} // 0x5cc970
    virtual void QueryInterface() {} // 0x5cec70

    uint8_t MSBinkAnim_field_0x04[4];
    uint8_t MSBinkAnim_field_0x08[4];
    uint8_t MSBinkAnim_field_0x0C[4];
    uint8_t MSBinkAnim_field_0x10[4];
};
// 6 methods in IDA
class MSBitPrintAnim
{
public:
    virtual ~MSBitPrintAnim() = default;

    virtual void Construct() {} // 0x5cd330
    virtual void Update() {} // 0x5cd3d0
    virtual void Stub() {} // 0x5cd400
    virtual void SetText() {} // 0x5cd410
    virtual void Draw() {} // 0x5cd4d0
    // +1 more virtual methods

    uint8_t MSBitPrintAnim_field_0x04[4];
    uint8_t MSBitPrintAnim_field_0x08[4];
    uint8_t MSBitPrintAnim_field_0x0C[4];
    uint8_t MSBitPrintAnim_field_0x10[4];
    uint8_t MSBitPrintAnim_field_0x14[4];
};
// 2 methods in IDA
class MSChoiceClass
{
public:
    virtual ~MSChoiceClass() = default;

    virtual void LoadFromINI() {} // 0x5cf8e0
    virtual void DeleteAndZero() {} // 0x5d0290

    uint8_t MSChoiceClass_field_0x04[4];
};
// 5 methods in IDA
class MSEngine_Destru
{
public:
    virtual ~MSEngine_Destru() = default;

    virtual void CheckStringNotEmpty() {} // 0x5ae4c0
    virtual void StubReturnFalse() {} // 0x5ae590
    virtual void DestroyComposite() {} // 0x5ae5a0
    virtual void Release() {} // 0x5d26f0
    virtual void QueryInterface() {} // 0x5d2700

    uint8_t MSEngine_Destru_field_0x04[4];
    uint8_t MSEngine_Destru_field_0x08[4];
    uint8_t MSEngine_Destru_field_0x0C[4];
    uint8_t MSEngine_Destru_field_0x10[4];
};
// 6 methods in IDA
class MSFont
{
public:
    virtual ~MSFont() = default;

    virtual void Constructor_MSFont() {} // 0x5d2e30
    virtual void Release() {} // 0x5d3170
    virtual void AddRef() {} // 0x5d31d0
    virtual void Create() {} // 0x5d3250
    virtual void ddtor() {} // 0x5d3330
    // +1 more virtual methods

    uint8_t MSFont_field_0x04[4];
    uint8_t MSFont_field_0x08[4];
    uint8_t MSFont_field_0x0C[4];
    uint8_t MSFont_field_0x10[4];
    uint8_t MSFont_field_0x14[4];
};
// 7 methods in IDA
class MSOverlayAnim
{
public:
    virtual ~MSOverlayAnim() = default;

    virtual void Load() {} // 0x5cb880
    virtual void Draw() {} // 0x5cbb80
    virtual void Update() {} // 0x5cbcb0
    virtual void Init() {} // 0x5cc250
    virtual void AddRef() {} // 0x5ceac0
    // +2 more virtual methods

    uint8_t MSOverlayAnim_field_0x04[4];
    uint8_t MSOverlayAnim_field_0x08[4];
    uint8_t MSOverlayAnim_field_0x0C[4];
    uint8_t MSOverlayAnim_field_0x10[4];
    uint8_t MSOverlayAnim_field_0x14[4];
    uint8_t MSOverlayAnim_field_0x18[4];
};
// 7 methods in IDA
class MSPCXAnim
{
public:
    virtual ~MSPCXAnim() = default;

    virtual void Construct() {} // 0x5ce640
    virtual void Load() {} // 0x5ce7d0
    virtual void Draw() {} // 0x5ce8c0
    virtual void SetPalette() {} // 0x5cea40
    virtual void GetFrame() {} // 0x5cea80
    // +2 more virtual methods

    uint8_t MSPCXAnim_field_0x04[4];
    uint8_t MSPCXAnim_field_0x08[4];
    uint8_t MSPCXAnim_field_0x0C[4];
    uint8_t MSPCXAnim_field_0x10[4];
    uint8_t MSPCXAnim_field_0x14[4];
    uint8_t MSPCXAnim_field_0x18[4];
};
// 6 methods in IDA
class MSPrintAnim
{
public:
    virtual ~MSPrintAnim() = default;

    virtual void SetText() {} // 0x5cdc50
    virtual void Draw() {} // 0x5cdee0
    virtual void Update() {} // 0x5ce2b0
    virtual void Clear() {} // 0x5ce300
    virtual void QueryInterface() {} // 0x5ced40
    // +1 more virtual methods

    uint8_t MSPrintAnim_field_0x04[4];
    uint8_t MSPrintAnim_field_0x08[4];
    uint8_t MSPrintAnim_field_0x0C[4];
    uint8_t MSPrintAnim_field_0x10[4];
    uint8_t MSPrintAnim_field_0x14[4];
};
// 1 methods in IDA
class MSSfxClass
{
public:
    virtual ~MSSfxClass() = default;

    virtual void FindByName() {} // 0x76ebe0

};
// 2 methods in IDA
class MSShapeAnim
{
public:
    virtual ~MSShapeAnim() = default;

    virtual void Constructor() {} // 0x5cb6d0
    virtual void Destruct() {} // 0x5cebd0

    uint8_t MSShapeAnim_field_0x04[4];
};
// 8 methods in IDA
class MSVQAnim
{
public:
    virtual ~MSVQAnim() = default;

    virtual void Construct() {} // 0x5cca20
    virtual void ConstructMSVQAnimHidden() {} // 0x5ccc30
    virtual void Load() {} // 0x5cce90
    virtual void Play() {} // 0x5cd0e0
    virtual void Stop() {} // 0x5cd240
    // +3 more virtual methods

    uint8_t MSVQAnim_field_0x04[4];
    uint8_t MSVQAnim_field_0x08[4];
    uint8_t MSVQAnim_field_0x0C[4];
    uint8_t MSVQAnim_field_0x10[4];
    uint8_t MSVQAnim_field_0x14[4];
    uint8_t MSVQAnim_field_0x18[4];
    uint8_t MSVQAnim_field_0x1C[4];
};
// 2 methods in IDA
class Megawealth
{
public:
    virtual ~Megawealth() = default;

    virtual void ProcessTick() {} // 0x5c9430
    virtual void QueryInterface() {} // 0x5c9440

    uint8_t Megawealth_field_0x04[4];
};
// 1 methods in IDA
class Miles
{
public:
    virtual ~Miles() = default;

    virtual void DriverGet() {} // 0x753c70

};
// 2 methods in IDA
class MiniMap
{
public:
    virtual ~MiniMap() = default;

    virtual void Render() {} // 0x641140
    virtual void SavePreviewToINI() {} // 0x6418b0

    uint8_t MiniMap_field_0x04[4];
};
// 6 methods in IDA
class MovieClass
{
public:
    virtual ~MovieClass() = default;

    virtual void ReadConfig() {} // 0x5c23b0
    virtual void Create() {} // 0x5c3ec0
    virtual void RenderLoop() {} // 0x759940
    virtual void GetWidth() {} // 0x759f70
    virtual void GetHeight() {} // 0x759f80
    // +1 more virtual methods

    uint8_t MovieClass_field_0x04[4];
    uint8_t MovieClass_field_0x08[4];
    uint8_t MovieClass_field_0x0C[4];
    uint8_t MovieClass_field_0x10[4];
    uint8_t MovieClass_field_0x14[4];
};
// 1 methods in IDA
class MovieContext
{
public:
    virtual ~MovieContext() = default;

    virtual void Cleanup() {} // 0x5bff00

};
// 1 methods in IDA
class MultiMissionVector
{
public:
    virtual ~MultiMissionVector() = default;

    virtual void Constructor() {} // 0x5ef0b0

};
// 1 methods in IDA
class Multiplay
{
public:
    virtual ~Multiplay() = default;

    virtual void LogToSYNC_NOMPDEBUG() {} // 0x64dea0

};
// 2 methods in IDA
class NetMessage
{
public:
    virtual ~NetMessage() = default;

    virtual void Pack4() {} // 0x4cb700
    virtual void Pack() {} // 0x4cb830

    uint8_t NetMessage_field_0x04[4];
};
// 6 methods in IDA
class NeuronClass
{
public:
    virtual ~NeuronClass() = default;

    virtual void NeuronClass() {} // 0x43a350
    virtual void Fire() {} // 0x43a540
    virtual void Update() {} // 0x43a5b0
    virtual void StubReturn60() {} // 0x43a9a0
    virtual void StubReturn56() {} // 0x43a9b0
    // +1 more virtual methods

    uint8_t NeuronClass_field_0x04[4];
    uint8_t NeuronClass_field_0x08[4];
    uint8_t NeuronClass_field_0x0C[4];
    uint8_t NeuronClass_field_0x10[4];
    uint8_t NeuronClass_field_0x14[4];
};
// 1 methods in IDA
class NullGuard
{
public:
    virtual ~NullGuard() = default;

    virtual void Call() {} // 0x4f3b10

};
// 2 methods in IDA
class ObjectManager
{
public:
    virtual ~ObjectManager() = default;

    virtual void InitMessageList() {} // 0x5d3a40
    virtual void CleanupArrays() {} // 0x697840

    uint8_t ObjectManager_field_0x04[4];
};
// 2 methods in IDA
class ObjectPlacement
{
public:
    virtual ~ObjectPlacement() = default;

    virtual void CalcPosition() {} // 0x481180
    virtual void CalcPosition_Wrapper() {} // 0x4aca10

    uint8_t ObjectPlacement_field_0x04[4];
};
// 1 methods in IDA
class ObjectPtr
{
public:
    virtual ~ObjectPtr() = default;

    virtual void RegisterForTracking() {} // 0x6cf240

};
// 6 methods in IDA
class ObjectVector
{
public:
    virtual ~ObjectVector() = default;

    virtual void Release() {} // 0x40cd10
    virtual void ddtor() {} // 0x40cdc0
    virtual void Add() {} // 0x40cdf0
    virtual void Remove() {} // 0x40ce30
    virtual void QueryInterface() {} // 0x40cf30
    // +1 more virtual methods

    uint8_t ObjectVector_field_0x04[4];
    uint8_t ObjectVector_field_0x08[4];
    uint8_t ObjectVector_field_0x0C[4];
    uint8_t ObjectVector_field_0x10[4];
    uint8_t ObjectVector_field_0x14[4];
};
// 1 methods in IDA
class ObserverClass
{
public:
    virtual ~ObserverClass() = default;

    virtual void FindStartingCell() {} // 0x5d6890

};
// 1 methods in IDA
class OleUninitialize
{
public:
    virtual ~OleUninitialize() = default;

    virtual void 0() {} // 0x7c891a

};
// 1 methods in IDA
class OptionQueue
{
public:
    virtual ~OptionQueue() = default;

    virtual void PushEntry() {} // 0x4f1aa0

};
// 1 methods in IDA
class OreManagerClass
{
public:
    virtual ~OreManagerClass() = default;

    virtual void AssignMinerToRefinery() {} // 0x71af20

};
// 1 methods in IDA
class OwnerDrawControl
{
public:
    virtual ~OwnerDrawControl() = default;

    virtual void InitVtable() {} // 0x624130

};
// 3 methods in IDA
class PKStrawClass
{
public:
    virtual ~PKStrawClass() = default;

    virtual void Initialize() {} // 0x633050
    virtual void RelayBlowfishKey() {} // 0x6330c0
    virtual void SetSource() {} // 0x633110

    uint8_t PKStrawClass_field_0x04[4];
    uint8_t PKStrawClass_field_0x08[4];
};
// 2 methods in IDA
class PacketQueue
{
public:
    virtual ~PacketQueue() = default;

    virtual void ExtractEntry() {} // 0x48b570
    virtual void ReleaseEntry() {} // 0x48b890

    uint8_t PacketQueue_field_0x04[4];
};
// 2 methods in IDA
class Performance
{
public:
    virtual ~Performance() = default;

    virtual void Profile() {} // 0x5355d0
    virtual void MeasureTicks() {} // 0x5cafc0

    uint8_t Performance_field_0x04[4];
};
// 1 methods in IDA
class PhoneEditor
{
public:
    virtual ~PhoneEditor() = default;

    virtual void PopulateList() {} // 0x631060

};
// 1 methods in IDA
class PingPongBuffer
{
public:
    virtual ~PingPongBuffer() = default;

    virtual void GetWriteOffset() {} // 0x55af60

};
// 4 methods in IDA
class Pipe
{
public:
    virtual ~Pipe() = default;

    virtual void QueryInterface() {} // 0x4aec80
    virtual void Dtor() {} // 0x631c80
    virtual void SetDelegate() {} // 0x631cc0
    virtual void GetField() {} // 0x7b7d80

    uint8_t Pipe_field_0x04[4];
    uint8_t Pipe_field_0x08[4];
    uint8_t Pipe_field_0x0C[4];
};
// 1 methods in IDA
class PlanManager
{
public:
    virtual ~PlanManager() = default;

    virtual void Notify() {} // 0x63a230

};
// 2 methods in IDA
class PowerBar
{
public:
    virtual ~PowerBar() = default;

    virtual void CalcFill() {} // 0x63f850
    virtual void ComputeFill() {} // 0x63f960

    uint8_t PowerBar_field_0x04[4];
};
// 2 methods in IDA
class PreviewClass
{
public:
    virtual ~PreviewClass() = default;

    virtual void ReadPreview() {} // 0x641ee0
    virtual void RenderMapPreview() {} // 0x689d30

    uint8_t PreviewClass_field_0x04[4];
};
// 1 methods in IDA
class PriQueue
{
public:
    virtual ~PriQueue() = default;

    virtual void GetItemPtr() {} // 0x5d4400

};
// 1 methods in IDA
class PrintTimerOnTactical
{
public:
    virtual ~PrintTimerOnTactical() = default;

    virtual void Start() {} // 0x6d4b50

};
// 2 methods in IDA
class PriorityQueue
{
public:
    virtual ~PriorityQueue() = default;

    virtual void Pop() {} // 0x5ac960
    virtual void Add() {} // 0x5d1c20

    uint8_t PriorityQueue_field_0x04[4];
};
// 1 methods in IDA
class ProductionClass
{
public:
    virtual ~ProductionClass() = default;

    virtual void StartTimer() {} // 0x4c9ea0

};
// 1 methods in IDA
class ProductionQueue
{
public:
    virtual ~ProductionQueue() = default;

    virtual void CompleteOrCancel() {} // 0x4ca1a0

};
// 1 methods in IDA
class ProjectileTrail
{
public:
    virtual ~ProjectileTrail() = default;

    virtual void ComputeRenderData() {} // 0x659ac0

};
// 2 methods in IDA
class Property
{
public:
    virtual ~Property() = default;

    virtual void Set() {} // 0x433c70
    virtual void GetField11() {} // 0x726910

    uint8_t Property_field_0x04[4];
};
// 1 methods in IDA
class PushCommandClass
{
public:
    virtual ~PushCommandClass() = default;

    virtual void Execute() {} // 0x6d09c0

};
// 1 methods in IDA
class RateScaler
{
public:
    virtual ~RateScaler() = default;

    virtual void Init() {} // 0x4a51f0

};
// 1 methods in IDA
class ReinforcementClass
{
public:
    virtual ~ReinforcementClass() = default;

    virtual void CreateObject() {} // 0x4737f0

};
// 2 methods in IDA
class ResultNode
{
public:
    virtual ~ResultNode() = default;

    virtual void Init() {} // 0x4cb890
    virtual void CleanupList() {} // 0x625ab0

    uint8_t ResultNode_field_0x04[4];
};
// 1 methods in IDA
class SHPClass
{
public:
    virtual ~SHPClass() = default;

    virtual void Load() {} // 0x642c20

};
// 2 methods in IDA
class SafeDelete
{
public:
    virtual ~SafeDelete() = default;

    virtual void Conditional() {} // 0x5c0eb0
    virtual void Ptr() {} // 0x7b7040

    uint8_t SafeDelete_field_0x04[4];
};
// 1 methods in IDA
class Scalar
{
public:
    virtual ~Scalar() = default;

    virtual void Dtor() {} // 0x5ac340

};
// 1 methods in IDA
class ScalarDtor
{
public:
    virtual ~ScalarDtor() = default;

    virtual void DeleteAndZero() {} // 0x7ad310

};
// 1 methods in IDA
class ScoutVector
{
public:
    virtual ~ScoutVector() = default;

    virtual void Construct() {} // 0x510780

};
// 1 methods in IDA
class ScriptActionQueue
{
public:
    virtual ~ScriptActionQueue() = default;

    virtual void PushNext() {} // 0x660b80

};
// 1 methods in IDA
class ScriptActionVector
{
public:
    virtual ~ScriptActionVector() = default;

    virtual void PushBack() {} // 0x63eb80

};
// 1 methods in IDA
class ScriptQueue
{
public:
    virtual ~ScriptQueue() = default;

    virtual void PushEntry() {} // 0x6378b0

};
// 1 methods in IDA
class SerialPort
{
public:
    virtual ~SerialPort() = default;

    virtual void Close() {} // 0x774950

};
// 2 methods in IDA
class ShapeButton
{
public:
    virtual ~ShapeButton() = default;

    virtual void SetShape() {} // 0x69de00
    virtual void Draw() {} // 0x69deb0

    uint8_t ShapeButton_field_0x04[4];
};
// 3 methods in IDA
class ShapeButtonClass
{
public:
    virtual ~ShapeButtonClass() = default;

    virtual void Init() {} // 0x69dcf0
    virtual void Constructor() {} // 0x69dd30
    virtual void Destructor() {} // 0x69ddc0

    uint8_t ShapeButtonClass_field_0x04[4];
    uint8_t ShapeButtonClass_field_0x08[4];
};
// 1 methods in IDA
class ShapeButtonClass_Destru
{
public:
    virtual ~ShapeButtonClass_Destru() = default;

    virtual void QueryInterface() {} // 0x4b57f0

};
// 1 methods in IDA
class Sides
{
public:
    virtual ~Sides() = default;

    virtual void MixFileYuriFiles3() {} // 0x72fbc0

};
// 1 methods in IDA
class SimpleDialogControl
{
public:
    virtual ~SimpleDialogControl() = default;

    virtual void Constructor() {} // 0x624110

};
// 1 methods in IDA
class SlaveControlVector
{
public:
    virtual ~SlaveControlVector() = default;

    virtual void Constructor() {} // 0x6b1ab0

};
// 1 methods in IDA
class SmudgeTypeList
{
public:
    virtual ~SmudgeTypeList() = default;

    virtual void Copy() {} // 0x67c280

};
// 6 methods in IDA
class SmudgeTypeVector
{
public:
    virtual ~SmudgeTypeVector() = default;

    virtual void Release() {} // 0x67aeb0
    virtual void AddSmudge() {} // 0x67af90
    virtual void Remove() {} // 0x67afd0
    virtual void Construct() {} // 0x67aff0
    virtual void Add() {} // 0x67b100
    // +1 more virtual methods

    uint8_t SmudgeTypeVector_field_0x04[4];
    uint8_t SmudgeTypeVector_field_0x08[4];
    uint8_t SmudgeTypeVector_field_0x0C[4];
    uint8_t SmudgeTypeVector_field_0x10[4];
    uint8_t SmudgeTypeVector_field_0x14[4];
};
// 9 methods in IDA
class SortedArray
{
public:
    virtual ~SortedArray() = default;

    virtual void GetIndex() {} // 0x42d570
    virtual void Find() {} // 0x52b170
    virtual void BinarySearch2() {} // 0x52b210
    virtual void FindValue() {} // 0x52b430
    virtual void CheckCache() {} // 0x52b600
    // +4 more virtual methods

    uint8_t SortedArray_field_0x04[4];
    uint8_t SortedArray_field_0x08[4];
    uint8_t SortedArray_field_0x0C[4];
    uint8_t SortedArray_field_0x10[4];
    uint8_t SortedArray_field_0x14[4];
    uint8_t SortedArray_field_0x18[4];
    uint8_t SortedArray_field_0x1C[4];
    uint8_t SortedArray_field_0x20[4];
};
// 1 methods in IDA
class SortedStateVector
{
public:
    virtual ~SortedStateVector() = default;

    virtual void BinarySearch() {} // 0x7107e0

};
// 1 methods in IDA
class SortedVector
{
public:
    virtual ~SortedVector() = default;

    virtual void BinarySearch() {} // 0x55f6e0

};
// 2 methods in IDA
class SquadClass
{
public:
    virtual ~SquadClass() = default;

    virtual void SelectAllMembers() {} // 0x7314c0
    virtual void ProcessMove() {} // 0x731840

    uint8_t SquadClass_field_0x04[4];
};
// 1 methods in IDA
class StartCombo
{
public:
    virtual ~StartCombo() = default;

    virtual void IDToIndex() {} // 0x4e4230

};
// 1 methods in IDA
class StartingTechnoVector
{
public:
    virtual ~StartingTechnoVector() = default;

    virtual void Construct() {} // 0x510690

};
// 1 methods in IDA
class State_WorldDominationTour
{
public:
    virtual ~State_WorldDominationTour() = default;

    virtual void QueryInterface() {} // 0x76f6c0

};
// 6 methods in IDA
class StaticButtonClass
{
public:
    virtual ~StaticButtonClass() = default;

    virtual void ReleaseBuffer() {} // 0x43ae10
    virtual void SetText() {} // 0x6c6640
    virtual void Draw() {} // 0x6c6680
    virtual void HitTest() {} // 0x6c6740
    virtual void OnClick() {} // 0x6c67f0
    // +1 more virtual methods

    uint8_t StaticButtonClass_field_0x04[4];
    uint8_t StaticButtonClass_field_0x08[4];
    uint8_t StaticButtonClass_field_0x0C[4];
    uint8_t StaticButtonClass_field_0x10[4];
    uint8_t StaticButtonClass_field_0x14[4];
};
// 1 methods in IDA
class StaticString
{
public:
    virtual ~StaticString() = default;

    virtual void Factory() {} // 0x7af2a0

};
// 2 methods in IDA
class Straw
{
public:
    virtual ~Straw() = default;

    virtual void QueryInterface() {} // 0x4aec10
    virtual void Dtor() {} // 0x6c9850

    uint8_t Straw_field_0x04[4];
};
// 3 methods in IDA
class Subzone
{
public:
    virtual ~Subzone() = default;

    virtual void BuildGraph() {} // 0x581f90
    virtual void Constructor() {} // 0x589100
    virtual void sub_58A500() {} // 0x58a500

    uint8_t Subzone_field_0x04[4];
    uint8_t Subzone_field_0x08[4];
};
// 3 methods in IDA
class SubzoneConnectionVector
{
public:
    virtual ~SubzoneConnectionVector() = default;

    virtual void Destruct() {} // 0x40b070
    virtual void ClearAndFree() {} // 0x588d60
    virtual void FindByCoord() {} // 0x589c10

    uint8_t SubzoneConnectionVector_field_0x04[4];
    uint8_t SubzoneConnectionVector_field_0x08[4];
};
// 1 methods in IDA
class SubzoneHashVector
{
public:
    virtual ~SubzoneHashVector() = default;

    virtual void Construct() {} // 0x58b070

};
// 1 methods in IDA
class SubzoneTrackingVector
{
public:
    virtual ~SubzoneTrackingVector() = default;

    virtual void Destruct() {} // 0x58a5b0

};
// 2 methods in IDA
class SwizzleManager
{
public:
    virtual ~SwizzleManager() = default;

    virtual void SaveLoad() {} // 0x55aac0
    virtual void ConvertWrapper() {} // 0x6cf230

    uint8_t SwizzleManager_field_0x04[4];
};
// 10 methods in IDA
class SwizzleManagerClass
{
public:
    virtual ~SwizzleManagerClass() = default;

    virtual void Register() {} // 0x6cf0f0
    virtual void Here_I_Am() {} // 0x6cf2c0
    virtual void ConvertNodes() {} // 0x6cf350
    virtual void Clear() {} // 0x6cf410
    virtual void Process() {} // 0x6cf430
    // +5 more virtual methods

    uint8_t SwizzleManagerClass_field_0x04[4];
    uint8_t SwizzleManagerClass_field_0x08[4];
    uint8_t SwizzleManagerClass_field_0x0C[4];
    uint8_t SwizzleManagerClass_field_0x10[4];
    uint8_t SwizzleManagerClass_field_0x14[4];
    uint8_t SwizzleManagerClass_field_0x18[4];
    uint8_t SwizzleManagerClass_field_0x1C[4];
    uint8_t SwizzleManagerClass_field_0x20[4];
    uint8_t SwizzleManagerClass_field_0x24[4];
};
// 2 methods in IDA
class SymbolTable
{
public:
    virtual ~SymbolTable() = default;

    virtual void Rebuild() {} // 0x6234b0
    virtual void Insert() {} // 0x624530

    uint8_t SymbolTable_field_0x04[4];
};
// 1 methods in IDA
class TAction
{
public:
    virtual ~TAction() = default;

    virtual void CenterOnStartCoords() {} // 0x7315a0

};
// 4 methods in IDA
class TClassFactory_AITriggerTypeClass
{
public:
    virtual ~TClassFactory_AITriggerTypeClass() = default;

    virtual void AddRef() {} // 0x6c5c40
    virtual void GetClassName() {} // 0x6c5c60
    virtual void GetClassIdentifier() {} // 0x6c5c90
    virtual void GetSize() {} // 0x6c5d10

    uint8_t TClassFactory_AITriggerTypeClass_field_0x04[4];
    uint8_t TClassFactory_AITriggerTypeClass_field_0x08[4];
    uint8_t TClassFactory_AITriggerTypeClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_AircraftClass
{
public:
    virtual ~TClassFactory_AircraftClass() = default;

    virtual void AddRef() {} // 0x6c36c0
    virtual void GetClassName() {} // 0x6c36e0
    virtual void ddtor() {} // 0x6c3710
    virtual void GetSize() {} // 0x6c3790

    uint8_t TClassFactory_AircraftClass_field_0x04[4];
    uint8_t TClassFactory_AircraftClass_field_0x08[4];
    uint8_t TClassFactory_AircraftClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_AircraftTypeClass
{
public:
    virtual ~TClassFactory_AircraftTypeClass() = default;

    virtual void AddRef() {} // 0x6c2ac0
    virtual void GetClassName() {} // 0x6c2ae0
    virtual void GetClassIdentifier() {} // 0x6c2b10
    virtual void GetSize() {} // 0x6c2b90

    uint8_t TClassFactory_AircraftTypeClass_field_0x04[4];
    uint8_t TClassFactory_AircraftTypeClass_field_0x08[4];
    uint8_t TClassFactory_AircraftTypeClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_AirstrikeClass
{
public:
    virtual ~TClassFactory_AirstrikeClass() = default;

    virtual void AddRef() {} // 0x6c0840
    virtual void GetClassName() {} // 0x6c0860
    virtual void ddtor() {} // 0x6c0890
    virtual void GetSize() {} // 0x6c0910

    uint8_t TClassFactory_AirstrikeClass_field_0x04[4];
    uint8_t TClassFactory_AirstrikeClass_field_0x08[4];
    uint8_t TClassFactory_AirstrikeClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_AlphaShapeClass
{
public:
    virtual ~TClassFactory_AlphaShapeClass() = default;

    virtual void AddRef() {} // 0x6c60c0
    virtual void GetClassName() {} // 0x6c60e0
    virtual void ddtor() {} // 0x6c6110
    virtual void GetSize() {} // 0x6c6190

    uint8_t TClassFactory_AlphaShapeClass_field_0x04[4];
    uint8_t TClassFactory_AlphaShapeClass_field_0x08[4];
    uint8_t TClassFactory_AlphaShapeClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_AnimTypeClass
{
public:
    virtual ~TClassFactory_AnimTypeClass() = default;

    virtual void AddRef() {} // 0x6c3b40
    virtual void GetClassName() {} // 0x6c3b60
    virtual void GetClassIdentifier() {} // 0x6c3b90
    virtual void GetSize() {} // 0x6c3c10

    uint8_t TClassFactory_AnimTypeClass_field_0x04[4];
    uint8_t TClassFactory_AnimTypeClass_field_0x08[4];
    uint8_t TClassFactory_AnimTypeClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_BombClass
{
public:
    virtual ~TClassFactory_BombClass() = default;

    virtual void AddRef() {} // 0x6c1140
    virtual void GetClassName() {} // 0x6c1160
    virtual void ddtor() {} // 0x6c1190
    virtual void GetSize() {} // 0x6c1210

    uint8_t TClassFactory_BombClass_field_0x04[4];
    uint8_t TClassFactory_BombClass_field_0x08[4];
    uint8_t TClassFactory_BombClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_BuildingClass
{
public:
    virtual ~TClassFactory_BuildingClass() = default;

    virtual void AddRef() {} // 0x6c3540
    virtual void GetClassName() {} // 0x6c3560
    virtual void ddtor() {} // 0x6c3590
    virtual void GetSize() {} // 0x6c3610

    uint8_t TClassFactory_BuildingClass_field_0x04[4];
    uint8_t TClassFactory_BuildingClass_field_0x08[4];
    uint8_t TClassFactory_BuildingClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_BuildingLightClass
{
public:
    virtual ~TClassFactory_BuildingLightClass() = default;

    virtual void AddRef() {} // 0x6c03c0
    virtual void GetClassName() {} // 0x6c03e0
    virtual void ddtor() {} // 0x6c0410
    virtual void GetSize() {} // 0x6c0490

    uint8_t TClassFactory_BuildingLightClass_field_0x04[4];
    uint8_t TClassFactory_BuildingLightClass_field_0x08[4];
    uint8_t TClassFactory_BuildingLightClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_BuildingTypeClass
{
public:
    virtual ~TClassFactory_BuildingTypeClass() = default;

    virtual void AddRef() {} // 0x6c2940
    virtual void GetClassName() {} // 0x6c2960
    virtual void GetClassIdentifier() {} // 0x6c2990
    virtual void GetSize() {} // 0x6c2a10

    uint8_t TClassFactory_BuildingTypeClass_field_0x04[4];
    uint8_t TClassFactory_BuildingTypeClass_field_0x08[4];
    uint8_t TClassFactory_BuildingTypeClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_BulletTypeClass
{
public:
    virtual ~TClassFactory_BulletTypeClass() = default;

    virtual void AddRef() {} // 0x6c2dc0
    virtual void GetClassName() {} // 0x6c2de0
    virtual void GetClassIdentifier() {} // 0x6c2e10
    virtual void GetSize() {} // 0x6c2e90

    uint8_t TClassFactory_BulletTypeClass_field_0x04[4];
    uint8_t TClassFactory_BulletTypeClass_field_0x08[4];
    uint8_t TClassFactory_BulletTypeClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_CaptureManagerClass
{
public:
    virtual ~TClassFactory_CaptureManagerClass() = default;

    virtual void AddRef() {} // 0x6c0cc0
    virtual void GetClassName() {} // 0x6c0ce0
    virtual void ddtor() {} // 0x6c0d10
    virtual void GetSize() {} // 0x6c0d90

    uint8_t TClassFactory_CaptureManagerClass_field_0x04[4];
    uint8_t TClassFactory_CaptureManagerClass_field_0x08[4];
    uint8_t TClassFactory_CaptureManagerClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_DiskLaserClass
{
public:
    virtual ~TClassFactory_DiskLaserClass() = default;

    virtual void AddRef() {} // 0x6c0e40
    virtual void GetClassName() {} // 0x6c0e60
    virtual void ddtor() {} // 0x6c0e90
    virtual void GetSize() {} // 0x6c0f10

    uint8_t TClassFactory_DiskLaserClass_field_0x04[4];
    uint8_t TClassFactory_DiskLaserClass_field_0x08[4];
    uint8_t TClassFactory_DiskLaserClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_DriveLocomotionClass
{
public:
    virtual ~TClassFactory_DriveLocomotionClass() = default;

    virtual void AddRef() {} // 0x6c3fc0
    virtual void GetClassName() {} // 0x6c3fe0
    virtual void ddtor() {} // 0x6c4010
    virtual void GetSize() {} // 0x6c4090

    uint8_t TClassFactory_DriveLocomotionClass_field_0x04[4];
    uint8_t TClassFactory_DriveLocomotionClass_field_0x08[4];
    uint8_t TClassFactory_DriveLocomotionClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_DropPodLocomotionClass
{
public:
    virtual ~TClassFactory_DropPodLocomotionClass() = default;

    virtual void AddRef() {} // 0x6c48c0
    virtual void GetClassName() {} // 0x6c48e0
    virtual void ddtor() {} // 0x6c4910
    virtual void GetSize() {} // 0x6c4990

    uint8_t TClassFactory_DropPodLocomotionClass_field_0x04[4];
    uint8_t TClassFactory_DropPodLocomotionClass_field_0x08[4];
    uint8_t TClassFactory_DropPodLocomotionClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_FactoryClass
{
public:
    virtual ~TClassFactory_FactoryClass() = default;

    virtual void AddRef() {} // 0x6c51c0
    virtual void GetClassName() {} // 0x6c51e0
    virtual void ddtor() {} // 0x6c5210
    virtual void GetSize() {} // 0x6c5290

    uint8_t TClassFactory_FactoryClass_field_0x04[4];
    uint8_t TClassFactory_FactoryClass_field_0x08[4];
    uint8_t TClassFactory_FactoryClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_FlyLocomotionClass
{
public:
    virtual ~TClassFactory_FlyLocomotionClass() = default;

    virtual void AddRef() {} // 0x6c4a40
    virtual void GetClassName() {} // 0x6c4a60
    virtual void ddtor() {} // 0x6c4a90
    virtual void GetSize() {} // 0x6c4b10

    uint8_t TClassFactory_FlyLocomotionClass_field_0x04[4];
    uint8_t TClassFactory_FlyLocomotionClass_field_0x08[4];
    uint8_t TClassFactory_FlyLocomotionClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_FoggedObjectClass
{
public:
    virtual ~TClassFactory_FoggedObjectClass() = default;

    virtual void AddRef() {} // 0x6c5f40
    virtual void GetClassName() {} // 0x6c5f60
    virtual void ddtor() {} // 0x6c5f90
    virtual void GetSize() {} // 0x6c6010

    uint8_t TClassFactory_FoggedObjectClass_field_0x04[4];
    uint8_t TClassFactory_FoggedObjectClass_field_0x08[4];
    uint8_t TClassFactory_FoggedObjectClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_HouseClass
{
public:
    virtual ~TClassFactory_HouseClass() = default;

    virtual void AddRef() {} // 0x6c3e40
    virtual void GetClassName() {} // 0x6c3e60
    virtual void ddtor() {} // 0x6c3e90
    virtual void GetSize() {} // 0x6c3f10

    uint8_t TClassFactory_HouseClass_field_0x04[4];
    uint8_t TClassFactory_HouseClass_field_0x08[4];
    uint8_t TClassFactory_HouseClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_HouseTypeClass
{
public:
    virtual ~TClassFactory_HouseTypeClass() = default;

    virtual void AddRef() {} // 0x6c3cc0
    virtual void GetClassName() {} // 0x6c3ce0
    virtual void GetClassIdentifier() {} // 0x6c3d10
    virtual void GetSize() {} // 0x6c3d90

    uint8_t TClassFactory_HouseTypeClass_field_0x04[4];
    uint8_t TClassFactory_HouseTypeClass_field_0x08[4];
    uint8_t TClassFactory_HouseTypeClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_HoverLocomotionClass
{
public:
    virtual ~TClassFactory_HoverLocomotionClass() = default;

    virtual void AddRef() {} // 0x6c42c0
    virtual void GetClassName() {} // 0x6c42e0
    virtual void ddtor() {} // 0x6c4310
    virtual void GetSize() {} // 0x6c4390

    uint8_t TClassFactory_HoverLocomotionClass_field_0x04[4];
    uint8_t TClassFactory_HoverLocomotionClass_field_0x08[4];
    uint8_t TClassFactory_HoverLocomotionClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_InfantryClass
{
public:
    virtual ~TClassFactory_InfantryClass() = default;

    virtual void AddRef() {} // 0x6c3840
    virtual void GetClassName() {} // 0x6c3860
    virtual void ddtor() {} // 0x6c3890
    virtual void GetSize() {} // 0x6c3910

    uint8_t TClassFactory_InfantryClass_field_0x04[4];
    uint8_t TClassFactory_InfantryClass_field_0x08[4];
    uint8_t TClassFactory_InfantryClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_InfantryTypeClass
{
public:
    virtual ~TClassFactory_InfantryTypeClass() = default;

    virtual void AddRef() {} // 0x6c2c40
    virtual void GetClassName() {} // 0x6c2c60
    virtual void GetClassIdentifier() {} // 0x6c2c90
    virtual void GetSize() {} // 0x6c2d10

    uint8_t TClassFactory_InfantryTypeClass_field_0x04[4];
    uint8_t TClassFactory_InfantryTypeClass_field_0x08[4];
    uint8_t TClassFactory_InfantryTypeClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_IsometricTileTypeClass
{
public:
    virtual ~TClassFactory_IsometricTileTypeClass() = default;

    virtual void AddRef() {} // 0x6c2f40
    virtual void GetClassName() {} // 0x6c2f60
    virtual void GetClassIdentifier() {} // 0x6c2f90
    virtual void GetSize() {} // 0x6c3010

    uint8_t TClassFactory_IsometricTileTypeClass_field_0x04[4];
    uint8_t TClassFactory_IsometricTileTypeClass_field_0x08[4];
    uint8_t TClassFactory_IsometricTileTypeClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_JumpjetLocomotionClass
{
public:
    virtual ~TClassFactory_JumpjetLocomotionClass() = default;

    virtual void AddRef() {} // 0x6c4140
    virtual void GetClassName() {} // 0x6c4160
    virtual void ddtor() {} // 0x6c4190
    virtual void GetSize() {} // 0x6c4210

    uint8_t TClassFactory_JumpjetLocomotionClass_field_0x04[4];
    uint8_t TClassFactory_JumpjetLocomotionClass_field_0x08[4];
    uint8_t TClassFactory_JumpjetLocomotionClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_LightSourceClass
{
public:
    virtual ~TClassFactory_LightSourceClass() = default;

    virtual void AddRef() {} // 0x6bfc40
    virtual void GetClassName() {} // 0x6bfc60
    virtual void ddtor() {} // 0x6bfc90
    virtual void GetSize() {} // 0x6bfd10

    uint8_t TClassFactory_LightSourceClass_field_0x04[4];
    uint8_t TClassFactory_LightSourceClass_field_0x08[4];
    uint8_t TClassFactory_LightSourceClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_NeuronClass
{
public:
    virtual ~TClassFactory_NeuronClass() = default;

    virtual void AddRef() {} // 0x6c5dc0
    virtual void GetClassName() {} // 0x6c5de0
    virtual void ddtor() {} // 0x6c5e10
    virtual void GetSize() {} // 0x6c5e90

    uint8_t TClassFactory_NeuronClass_field_0x04[4];
    uint8_t TClassFactory_NeuronClass_field_0x08[4];
    uint8_t TClassFactory_NeuronClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_OverlayTypeClass
{
public:
    virtual ~TClassFactory_OverlayTypeClass() = default;

    virtual void AddRef() {} // 0x6c30c0
    virtual void GetClassName() {} // 0x6c30e0
    virtual void GetClassIdentifier() {} // 0x6c3110
    virtual void GetSize() {} // 0x6c3190

    uint8_t TClassFactory_OverlayTypeClass_field_0x04[4];
    uint8_t TClassFactory_OverlayTypeClass_field_0x08[4];
    uint8_t TClassFactory_OverlayTypeClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_ParasiteClass
{
public:
    virtual ~TClassFactory_ParasiteClass() = default;

    virtual void AddRef() {} // 0x6c0fc0
    virtual void GetClassName() {} // 0x6c0fe0
    virtual void ddtor() {} // 0x6c1010
    virtual void GetSize() {} // 0x6c1090

    uint8_t TClassFactory_ParasiteClass_field_0x04[4];
    uint8_t TClassFactory_ParasiteClass_field_0x08[4];
    uint8_t TClassFactory_ParasiteClass_field_0x0C[4];
};
// 3 methods in IDA
class TClassFactory_ParticleClass
{
public:
    virtual ~TClassFactory_ParticleClass() = default;

    virtual void GetClassName() {} // 0x6c5660
    virtual void ddtor() {} // 0x6c5690
    virtual void GetSize() {} // 0x6c5710

    uint8_t TClassFactory_ParticleClass_field_0x04[4];
    uint8_t TClassFactory_ParticleClass_field_0x08[4];
};
// 4 methods in IDA
class TClassFactory_ParticleSystemClass
{
public:
    virtual ~TClassFactory_ParticleSystemClass() = default;

    virtual void AddRef() {} // 0x6c5940
    virtual void GetClassName() {} // 0x6c5960
    virtual void ddtor() {} // 0x6c5990
    virtual void GetSize() {} // 0x6c5a10

    uint8_t TClassFactory_ParticleSystemClass_field_0x04[4];
    uint8_t TClassFactory_ParticleSystemClass_field_0x08[4];
    uint8_t TClassFactory_ParticleSystemClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_ParticleSystemTypeClass
{
public:
    virtual ~TClassFactory_ParticleSystemTypeClass() = default;

    virtual void AddRef() {} // 0x6c5ac0
    virtual void GetClassName() {} // 0x6c5ae0
    virtual void GetClassIdentifier() {} // 0x6c5b10
    virtual void GetSize() {} // 0x6c5b90

    uint8_t TClassFactory_ParticleSystemTypeClass_field_0x04[4];
    uint8_t TClassFactory_ParticleSystemTypeClass_field_0x08[4];
    uint8_t TClassFactory_ParticleSystemTypeClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_ParticleTypeClass
{
public:
    virtual ~TClassFactory_ParticleTypeClass() = default;

    virtual void AddRef() {} // 0x6c57c0
    virtual void GetClassName() {} // 0x6c57e0
    virtual void GetClassIdentifier() {} // 0x6c5810
    virtual void GetSize() {} // 0x6c5890

    uint8_t TClassFactory_ParticleTypeClass_field_0x04[4];
    uint8_t TClassFactory_ParticleTypeClass_field_0x08[4];
    uint8_t TClassFactory_ParticleTypeClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_RadSiteClass
{
public:
    virtual ~TClassFactory_RadSiteClass() = default;

    virtual void AddRef() {} // 0x6c12c0
    virtual void GetClassName() {} // 0x6c12e0
    virtual void ddtor() {} // 0x6c1310
    virtual void GetSize() {} // 0x6c1390

    uint8_t TClassFactory_RadSiteClass_field_0x04[4];
    uint8_t TClassFactory_RadSiteClass_field_0x08[4];
    uint8_t TClassFactory_RadSiteClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_RocketLocomotionClass
{
public:
    virtual ~TClassFactory_RocketLocomotionClass() = default;

    virtual void AddRef() {} // 0x6c4440
    virtual void GetClassName() {} // 0x6c4460
    virtual void ddtor() {} // 0x6c4490
    virtual void GetSize() {} // 0x6c4510

    uint8_t TClassFactory_RocketLocomotionClass_field_0x04[4];
    uint8_t TClassFactory_RocketLocomotionClass_field_0x08[4];
    uint8_t TClassFactory_RocketLocomotionClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_ScriptClass
{
public:
    virtual ~TClassFactory_ScriptClass() = default;

    virtual void AddRef() {} // 0x6c1d40
    virtual void GetClassName() {} // 0x6c1d60
    virtual void ddtor() {} // 0x6c1d90
    virtual void GetSize() {} // 0x6c1e10

    uint8_t TClassFactory_ScriptClass_field_0x04[4];
    uint8_t TClassFactory_ScriptClass_field_0x08[4];
    uint8_t TClassFactory_ScriptClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_ScriptTypeClass
{
public:
    virtual ~TClassFactory_ScriptTypeClass() = default;

    virtual void AddRef() {} // 0x6c1ec0
    virtual void GetClassName() {} // 0x6c1ee0
    virtual void GetClassIdentifier() {} // 0x6c1f10
    virtual void GetSize() {} // 0x6c1f90

    uint8_t TClassFactory_ScriptTypeClass_field_0x04[4];
    uint8_t TClassFactory_ScriptTypeClass_field_0x08[4];
    uint8_t TClassFactory_ScriptTypeClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_ShipLocomotionClass
{
public:
    virtual ~TClassFactory_ShipLocomotionClass() = default;

    virtual void AddRef() {} // 0x6c4ec0
    virtual void GetClassName() {} // 0x6c4ee0
    virtual void ddtor() {} // 0x6c4f10
    virtual void GetSize() {} // 0x6c4f90

    uint8_t TClassFactory_ShipLocomotionClass_field_0x04[4];
    uint8_t TClassFactory_ShipLocomotionClass_field_0x08[4];
    uint8_t TClassFactory_ShipLocomotionClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_SideClass
{
public:
    virtual ~TClassFactory_SideClass() = default;

    virtual void AddRef() {} // 0x6bfdc0
    virtual void GetClassName() {} // 0x6bfde0
    virtual void ddtor() {} // 0x6bfe10
    virtual void GetSize() {} // 0x6bfe90

    uint8_t TClassFactory_SideClass_field_0x04[4];
    uint8_t TClassFactory_SideClass_field_0x08[4];
    uint8_t TClassFactory_SideClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_SlaveManagerClass
{
public:
    virtual ~TClassFactory_SlaveManagerClass() = default;

    virtual void AddRef() {} // 0x6c0b40
    virtual void GetClassName() {} // 0x6c0b60
    virtual void ddtor() {} // 0x6c0b90
    virtual void GetSize() {} // 0x6c0c10

    uint8_t TClassFactory_SlaveManagerClass_field_0x04[4];
    uint8_t TClassFactory_SlaveManagerClass_field_0x08[4];
    uint8_t TClassFactory_SlaveManagerClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_SmudgeTypeClass
{
public:
    virtual ~TClassFactory_SmudgeTypeClass() = default;

    virtual void AddRef() {} // 0x6c3240
    virtual void GetClassName() {} // 0x6c3260
    virtual void GetClassIdentifier() {} // 0x6c3290
    virtual void GetSize() {} // 0x6c3310

    uint8_t TClassFactory_SmudgeTypeClass_field_0x04[4];
    uint8_t TClassFactory_SmudgeTypeClass_field_0x08[4];
    uint8_t TClassFactory_SmudgeTypeClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_SpawnManagerClass
{
public:
    virtual ~TClassFactory_SpawnManagerClass() = default;

    virtual void AddRef() {} // 0x6c09c0
    virtual void GetClassName() {} // 0x6c09e0
    virtual void ddtor() {} // 0x6c0a10
    virtual void GetSize() {} // 0x6c0a90

    uint8_t TClassFactory_SpawnManagerClass_field_0x04[4];
    uint8_t TClassFactory_SpawnManagerClass_field_0x08[4];
    uint8_t TClassFactory_SpawnManagerClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_TActionClass
{
public:
    virtual ~TClassFactory_TActionClass() = default;

    virtual void AddRef() {} // 0x6c18c0
    virtual void GetClassName() {} // 0x6c18e0
    virtual void ddtor() {} // 0x6c1910
    virtual void GetSize() {} // 0x6c1990

    uint8_t TClassFactory_TActionClass_field_0x04[4];
    uint8_t TClassFactory_TActionClass_field_0x08[4];
    uint8_t TClassFactory_TActionClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_TEventClass
{
public:
    virtual ~TClassFactory_TEventClass() = default;

    virtual void AddRef() {} // 0x6c1440
    virtual void GetClassName() {} // 0x6c1460
    virtual void ddtor() {} // 0x6c1490
    virtual void GetSize() {} // 0x6c1510

    uint8_t TClassFactory_TEventClass_field_0x04[4];
    uint8_t TClassFactory_TEventClass_field_0x08[4];
    uint8_t TClassFactory_TEventClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_TagClass
{
public:
    virtual ~TClassFactory_TagClass() = default;

    virtual void AddRef() {} // 0x6c2040
    virtual void GetClassName() {} // 0x6c2060
    virtual void ddtor() {} // 0x6c2090
    virtual void GetSize() {} // 0x6c2110

    uint8_t TClassFactory_TagClass_field_0x04[4];
    uint8_t TClassFactory_TagClass_field_0x08[4];
    uint8_t TClassFactory_TagClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_TagTypeClass
{
public:
    virtual ~TClassFactory_TagTypeClass() = default;

    virtual void AddRef() {} // 0x6c21c0
    virtual void GetClassName() {} // 0x6c21e0
    virtual void GetClassIdentifier() {} // 0x6c2210
    virtual void GetSize() {} // 0x6c2290

    uint8_t TClassFactory_TagTypeClass_field_0x04[4];
    uint8_t TClassFactory_TagTypeClass_field_0x08[4];
    uint8_t TClassFactory_TagTypeClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_TaskForceClass
{
public:
    virtual ~TClassFactory_TaskForceClass() = default;

    virtual void AddRef() {} // 0x6c2640
    virtual void GetClassName() {} // 0x6c2660
    virtual void ddtor() {} // 0x6c2690
    virtual void GetSize() {} // 0x6c2710

    uint8_t TClassFactory_TaskForceClass_field_0x04[4];
    uint8_t TClassFactory_TaskForceClass_field_0x08[4];
    uint8_t TClassFactory_TaskForceClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_TeamClass
{
public:
    virtual ~TClassFactory_TeamClass() = default;

    virtual void AddRef() {} // 0x6c2340
    virtual void GetClassName() {} // 0x6c2360
    virtual void ddtor() {} // 0x6c2390
    virtual void GetSize() {} // 0x6c2410

    uint8_t TClassFactory_TeamClass_field_0x04[4];
    uint8_t TClassFactory_TeamClass_field_0x08[4];
    uint8_t TClassFactory_TeamClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_TeamTypeClass
{
public:
    virtual ~TClassFactory_TeamTypeClass() = default;

    virtual void AddRef() {} // 0x6c24c0
    virtual void GetClassName() {} // 0x6c24e0
    virtual void GetClassIdentifier() {} // 0x6c2510
    virtual void GetSize() {} // 0x6c2590

    uint8_t TClassFactory_TeamTypeClass_field_0x04[4];
    uint8_t TClassFactory_TeamTypeClass_field_0x08[4];
    uint8_t TClassFactory_TeamTypeClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_TeleportLocomotionClass
{
public:
    virtual ~TClassFactory_TeleportLocomotionClass() = default;

    virtual void AddRef() {} // 0x6c4bc0
    virtual void GetClassName() {} // 0x6c4be0
    virtual void ddtor() {} // 0x6c4c10
    virtual void GetSize() {} // 0x6c4c90

    uint8_t TClassFactory_TeleportLocomotionClass_field_0x04[4];
    uint8_t TClassFactory_TeleportLocomotionClass_field_0x08[4];
    uint8_t TClassFactory_TeleportLocomotionClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_TemporalClass
{
public:
    virtual ~TClassFactory_TemporalClass() = default;

    virtual void AddRef() {} // 0x6c06c0
    virtual void GetClassName() {} // 0x6c06e0
    virtual void ddtor() {} // 0x6c0710
    virtual void GetSize() {} // 0x6c0790

    uint8_t TClassFactory_TemporalClass_field_0x04[4];
    uint8_t TClassFactory_TemporalClass_field_0x08[4];
    uint8_t TClassFactory_TemporalClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_TiberiumClass
{
public:
    virtual ~TClassFactory_TiberiumClass() = default;

    virtual void AddRef() {} // 0x6bff40
    virtual void GetClassName() {} // 0x6bff60
    virtual void ddtor() {} // 0x6bff90
    virtual void GetSize() {} // 0x6c0010

    uint8_t TClassFactory_TiberiumClass_field_0x04[4];
    uint8_t TClassFactory_TiberiumClass_field_0x08[4];
    uint8_t TClassFactory_TiberiumClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_TriggerClass
{
public:
    virtual ~TClassFactory_TriggerClass() = default;

    virtual void AddRef() {} // 0x6c1a40
    virtual void GetClassName() {} // 0x6c1a60
    virtual void ddtor() {} // 0x6c1a90
    virtual void GetSize() {} // 0x6c1b10

    uint8_t TClassFactory_TriggerClass_field_0x04[4];
    uint8_t TClassFactory_TriggerClass_field_0x08[4];
    uint8_t TClassFactory_TriggerClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_TriggerTypeClass
{
public:
    virtual ~TClassFactory_TriggerTypeClass() = default;

    virtual void AddRef() {} // 0x6c1bc0
    virtual void GetClassName() {} // 0x6c1be0
    virtual void GetClassIdentifier() {} // 0x6c1c10
    virtual void GetSize() {} // 0x6c1c90

    uint8_t TClassFactory_TriggerTypeClass_field_0x04[4];
    uint8_t TClassFactory_TriggerTypeClass_field_0x08[4];
    uint8_t TClassFactory_TriggerTypeClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_TunnelLocomotionClass
{
public:
    virtual ~TClassFactory_TunnelLocomotionClass() = default;

    virtual void AddRef() {} // 0x6c45c0
    virtual void GetClassName() {} // 0x6c45e0
    virtual void ddtor() {} // 0x6c4610
    virtual void GetSize() {} // 0x6c4690

    uint8_t TClassFactory_TunnelLocomotionClass_field_0x04[4];
    uint8_t TClassFactory_TunnelLocomotionClass_field_0x08[4];
    uint8_t TClassFactory_TunnelLocomotionClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_UnitClass
{
public:
    virtual ~TClassFactory_UnitClass() = default;

    virtual void AddRef() {} // 0x6c33c0
    virtual void GetClassName() {} // 0x6c33e0
    virtual void ddtor() {} // 0x6c3410
    virtual void GetSize() {} // 0x6c3490

    uint8_t TClassFactory_UnitClass_field_0x04[4];
    uint8_t TClassFactory_UnitClass_field_0x08[4];
    uint8_t TClassFactory_UnitClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_UnitTypeClass
{
public:
    virtual ~TClassFactory_UnitTypeClass() = default;

    virtual void AddRef() {} // 0x6c27c0
    virtual void GetClassName() {} // 0x6c27e0
    virtual void GetClassIdentifier() {} // 0x6c2810
    virtual void GetSize() {} // 0x6c2890

    uint8_t TClassFactory_UnitTypeClass_field_0x04[4];
    uint8_t TClassFactory_UnitTypeClass_field_0x08[4];
    uint8_t TClassFactory_UnitTypeClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_VoxelAnimClass
{
public:
    virtual ~TClassFactory_VoxelAnimClass() = default;

    virtual void AddRef() {} // 0x6c1740
    virtual void GetClassName() {} // 0x6c1760
    virtual void ddtor() {} // 0x6c1790
    virtual void GetSize() {} // 0x6c1810

    uint8_t TClassFactory_VoxelAnimClass_field_0x04[4];
    uint8_t TClassFactory_VoxelAnimClass_field_0x08[4];
    uint8_t TClassFactory_VoxelAnimClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_VoxelAnimTypeClass
{
public:
    virtual ~TClassFactory_VoxelAnimTypeClass() = default;

    virtual void AddRef() {} // 0x6c15c0
    virtual void GetClassName() {} // 0x6c15e0
    virtual void GetClassIdentifier() {} // 0x6c1610
    virtual void GetSize() {} // 0x6c1690

    uint8_t TClassFactory_VoxelAnimTypeClass_field_0x04[4];
    uint8_t TClassFactory_VoxelAnimTypeClass_field_0x08[4];
    uint8_t TClassFactory_VoxelAnimTypeClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_WalkLocomotionClass
{
public:
    virtual ~TClassFactory_WalkLocomotionClass() = default;

    virtual void AddRef() {} // 0x6c4740
    virtual void GetClassName() {} // 0x6c4760
    virtual void ddtor() {} // 0x6c4790
    virtual void GetSize() {} // 0x6c4810

    uint8_t TClassFactory_WalkLocomotionClass_field_0x04[4];
    uint8_t TClassFactory_WalkLocomotionClass_field_0x08[4];
    uint8_t TClassFactory_WalkLocomotionClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_WarheadTypeClass
{
public:
    virtual ~TClassFactory_WarheadTypeClass() = default;

    virtual void AddRef() {} // 0x6c5340
    virtual void GetClassName() {} // 0x6c5360
    virtual void GetClassIdentifier() {} // 0x6c5390
    virtual void GetSize() {} // 0x6c5410

    uint8_t TClassFactory_WarheadTypeClass_field_0x04[4];
    uint8_t TClassFactory_WarheadTypeClass_field_0x08[4];
    uint8_t TClassFactory_WarheadTypeClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_WaypointPathClass
{
public:
    virtual ~TClassFactory_WaypointPathClass() = default;

    virtual void AddRef() {} // 0x6c0540
    virtual void GetClassName() {} // 0x6c0560
    virtual void ddtor() {} // 0x6c0590
    virtual void GetSize() {} // 0x6c0610

    uint8_t TClassFactory_WaypointPathClass_field_0x04[4];
    uint8_t TClassFactory_WaypointPathClass_field_0x08[4];
    uint8_t TClassFactory_WaypointPathClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_WeaponTypeClass
{
public:
    virtual ~TClassFactory_WeaponTypeClass() = default;

    virtual void AddRef() {} // 0x6c54c0
    virtual void GetClassName() {} // 0x6c54e0
    virtual void GetClassIdentifier() {} // 0x6c5510
    virtual void GetSize() {} // 0x6c5590

    uint8_t TClassFactory_WeaponTypeClass_field_0x04[4];
    uint8_t TClassFactory_WeaponTypeClass_field_0x08[4];
    uint8_t TClassFactory_WeaponTypeClass_field_0x0C[4];
};
// 1 methods in IDA
class TagClassVector
{
public:
    virtual ~TagClassVector() = default;

    virtual void Construct() {} // 0x510640

};
// 1 methods in IDA
class Targeting
{
public:
    virtual ~Targeting() = default;

    virtual void Readd() {} // 0x4a9720

};
// 1 methods in IDA
class TaskManager
{
public:
    virtual ~TaskManager() = default;

    virtual void Update() {} // 0x6b7100

};
// 2 methods in IDA
class TechnoTypeVector
{
public:
    virtual ~TechnoTypeVector() = default;

    virtual void Constructor() {} // 0x4cabf0
    virtual void Construct() {} // 0x68c200

    uint8_t TechnoTypeVector_field_0x04[4];
};
// 1 methods in IDA
class TeknoClass
{
public:
    virtual ~TeknoClass() = default;

    virtual void GetType() {} // 0x6e4de0

};
// 1 methods in IDA
class TerrainTypeVector
{
public:
    virtual ~TerrainTypeVector() = default;

    virtual void Construct() {} // 0x67b370

};
// 1 methods in IDA
class Territory_WorldDominationTour
{
public:
    virtual ~Territory_WorldDominationTour() = default;

    virtual void QueryInterface() {} // 0x770020

};
// 1 methods in IDA
class TheatreClass
{
public:
    virtual ~TheatreClass() = default;

    virtual void InitView() {} // 0x545000

};
// 1 methods in IDA
class TileData
{
public:
    virtual ~TileData() = default;

    virtual void Constructor() {} // 0x58bdc0

};
// 1 methods in IDA
class TileNode
{
public:
    virtual ~TileNode() = default;

    virtual void Cleanup() {} // 0x58c070

};
// 4 methods in IDA
class TileSystem
{
public:
    virtual ~TileSystem() = default;

    virtual void LookupMapTile() {} // 0x58d0a0
    virtual void BuildNodes() {} // 0x58d620
    virtual void AnalyzeTileConnectivity() {} // 0x58e5d0
    virtual void Constructor() {} // 0x5ad740

    uint8_t TileSystem_field_0x04[4];
    uint8_t TileSystem_field_0x08[4];
    uint8_t TileSystem_field_0x0C[4];
};
// 1 methods in IDA
class TileVector
{
public:
    virtual ~TileVector() = default;

    virtual void PushBack() {} // 0x589c50

};
// 2 methods in IDA
class ToggleClass
{
public:
    virtual ~ToggleClass() = default;

    virtual void QueryInterface() {} // 0x4b5810
    virtual void Construct() {} // 0x723e60

    uint8_t ToggleClass_field_0x04[4];
};
// 1 methods in IDA
class ToggleRepairModeCommandClass
{
public:
    virtual ~ToggleRepairModeCommandClass() = default;

    virtual void Execute() {} // 0x536fa0

};
// 1 methods in IDA
class Triple
{
public:
    virtual ~Triple() = default;

    virtual void Set() {} // 0x43a0b0

};
// 1 methods in IDA
class UnitTypeList
{
public:
    virtual ~UnitTypeList() = default;

    virtual void Constructor() {} // 0x67a740

};
// 7 methods in IDA
class UnitTypeVector
{
public:
    virtual ~UnitTypeVector() = default;

    virtual void QueryInterface() {} // 0x512b30
    virtual void Release() {} // 0x513050
    virtual void Add() {} // 0x513130
    virtual void Remove() {} // 0x513170
    virtual void Construct() {} // 0x513190
    // +2 more virtual methods

    uint8_t UnitTypeVector_field_0x04[4];
    uint8_t UnitTypeVector_field_0x08[4];
    uint8_t UnitTypeVector_field_0x0C[4];
    uint8_t UnitTypeVector_field_0x10[4];
    uint8_t UnitTypeVector_field_0x14[4];
    uint8_t UnitTypeVector_field_0x18[4];
};
// 1 methods in IDA
class VQAClass
{
public:
    virtual ~VQAClass() = default;

    virtual void AdvanceFrame() {} // 0x759c30

};
// 2 methods in IDA
class VeinholeClass
{
public:
    virtual ~VeinholeClass() = default;

    virtual void SelectGrowthPosition() {} // 0x74dc00
    virtual void GetState() {} // 0x74fff0

    uint8_t VeinholeClass_field_0x04[4];
};
// 11 methods in IDA
class VeinholeMonsterClass
{
public:
    virtual ~VeinholeMonsterClass() = default;

    virtual void Construct() {} // 0x74c420
    virtual void Constructor() {} // 0x74c5b0
    virtual void UpdateGrowth() {} // 0x74ce50
    virtual void ProcessExpansion() {} // 0x74d5d0
    virtual void PlaceGrowth() {} // 0x74e930
    // +6 more virtual methods

    uint8_t VeinholeMonsterClass_field_0x04[4];
    uint8_t VeinholeMonsterClass_field_0x08[4];
    uint8_t VeinholeMonsterClass_field_0x0C[4];
    uint8_t VeinholeMonsterClass_field_0x10[4];
    uint8_t VeinholeMonsterClass_field_0x14[4];
    uint8_t VeinholeMonsterClass_field_0x18[4];
    uint8_t VeinholeMonsterClass_field_0x1C[4];
    uint8_t VeinholeMonsterClass_field_0x20[4];
    uint8_t VeinholeMonsterClass_field_0x24[4];
    uint8_t VeinholeMonsterClass_field_0x28[4];
};
// 1 methods in IDA
class VersionInfo
{
public:
    virtual ~VersionInfo() = default;

    virtual void Read() {} // 0x74f760

};
// 2 methods in IDA
class Viewport
{
public:
    virtual ~Viewport() = default;

    virtual void ProcessScroll() {} // 0x692b60
    virtual void Clear() {} // 0x753e00

    uint8_t Viewport_field_0x04[4];
};
// 9 methods in IDA
class VtableStub
{
public:
    virtual ~VtableStub() = default;

    virtual void Push_407510() {} // 0x407510
    virtual void 425270() {} // 0x425270
    virtual void 477740() {} // 0x477740
    virtual void 5175D0() {} // 0x5175d0
    virtual void 55CBF0() {} // 0x55cbf0
    // +4 more virtual methods

    uint8_t VtableStub_field_0x04[4];
    uint8_t VtableStub_field_0x08[4];
    uint8_t VtableStub_field_0x0C[4];
    uint8_t VtableStub_field_0x10[4];
    uint8_t VtableStub_field_0x14[4];
    uint8_t VtableStub_field_0x18[4];
    uint8_t VtableStub_field_0x1C[4];
    uint8_t VtableStub_field_0x20[4];
};
// 2 methods in IDA
class WDTClass
{
public:
    virtual ~WDTClass() = default;

    virtual void GetCellType() {} // 0x76f600
    virtual void CountCellType() {} // 0x76f670

    uint8_t WDTClass_field_0x04[4];
};
// 4 methods in IDA
class WDTGame
{
public:
    virtual ~WDTGame() = default;

    virtual void ToggleTeamMode() {} // 0x7693f0
    virtual void ProcessTerritorySelection() {} // 0x76d180
    virtual void ReviewHistory() {} // 0x76e4f0
    virtual void Constructor() {} // 0x76f030

    uint8_t WDTGame_field_0x04[4];
    uint8_t WDTGame_field_0x08[4];
    uint8_t WDTGame_field_0x0C[4];
};
// 2 methods in IDA
class WDTObject
{
public:
    virtual ~WDTObject() = default;

    virtual void GetSize() {} // 0x76bfa0
    virtual void GetAndClearFlag() {} // 0x76ff30

    uint8_t WDTObject_field_0x04[4];
};
// 2 methods in IDA
class WDTState
{
public:
    virtual ~WDTState() = default;

    virtual void Constructor_WDTState() {} // 0x76afc0
    virtual void QueryInterface() {} // 0x76b6f0

    uint8_t WDTState_field_0x04[4];
};
// 2 methods in IDA
class WDTSurface
{
public:
    virtual ~WDTSurface() = default;

    virtual void ToggleState() {} // 0x7693a0
    virtual void PointInRect() {} // 0x769440

    uint8_t WDTSurface_field_0x04[4];
};
// 2 methods in IDA
class WString
{
public:
    virtual ~WString() = default;

    virtual void Append() {} // 0x7b6970
    virtual void TrimRight() {} // 0x7b6f40

    uint8_t WString_field_0x04[4];
};
// 1 methods in IDA
class WaypointPath
{
public:
    virtual ~WaypointPath() = default;

    virtual void Constructor() {} // 0x5a9a70

};
// 1 methods in IDA
class WideChar
{
public:
    virtual ~WideChar() = default;

    virtual void ToLong() {} // 0x7cbb76

};
// 1 methods in IDA
class WinAPI
{
public:
    virtual ~WinAPI() = default;

    virtual void Wrapper() {} // 0x7dc720

};
// 15 methods in IDA
class WinModemClass
{
public:
    virtual ~WinModemClass() = default;

    virtual void Construct() {} // 0x774120
    virtual void AddRef() {} // 0x774410
    virtual void Release() {} // 0x7748a0
    virtual void GetClassIdentifier() {} // 0x7748b0
    virtual void Init() {} // 0x774900
    // +10 more virtual methods

    uint8_t WinModemClass_field_0x04[4];
    uint8_t WinModemClass_field_0x08[4];
    uint8_t WinModemClass_field_0x0C[4];
    uint8_t WinModemClass_field_0x10[4];
    uint8_t WinModemClass_field_0x14[4];
    uint8_t WinModemClass_field_0x18[4];
    uint8_t WinModemClass_field_0x1C[4];
    uint8_t WinModemClass_field_0x20[4];
    uint8_t WinModemClass_field_0x24[4];
    uint8_t WinModemClass_field_0x28[4];
    uint8_t WinModemClass_field_0x2C[4];
    uint8_t WinModemClass_field_0x30[4];
    uint8_t WinModemClass_field_0x34[4];
    uint8_t WinModemClass_field_0x38[4];
};
// 1 methods in IDA
class WonlineStringDialogControl
{
public:
    virtual ~WonlineStringDialogControl() = default;

    virtual void QueryInterface() {} // 0x7ac5d0

};
// 1 methods in IDA
class WordVector
{
public:
    virtual ~WordVector() = default;

    virtual void Constructor() {} // 0x42dd60

};
// 1 methods in IDA
class World
{
public:
    virtual ~World() = default;

    virtual void ToScreen() {} // 0x6d2070

};
// 1 methods in IDA
class WorldDomination
{
public:
    virtual ~WorldDomination() = default;

    virtual void SetupTerritoryNodes() {} // 0x7680c0

};
// 1 methods in IDA
class WorldDominationTour
{
public:
    virtual ~WorldDominationTour() = default;

    virtual void Territory::Constructor() {} // 0x76f970

};
// 1 methods in IDA
class ZBuffer
{
public:
    virtual ~ZBuffer() = default;

    virtual void RenderSprite() {} // 0x53d580

};
// 1 methods in IDA
class ZoneConnectionVector
{
public:
    virtual ~ZoneConnectionVector() = default;

    virtual void Destruct() {} // 0x58a3d0

};

} // namespace gamemd