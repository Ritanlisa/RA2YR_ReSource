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
    static int32_t GetWarheadSound(int32_t type);  // 0x41D7E0
    // IDA 0x452820 area
    // design: static function, no direct binary match in IDA
    static void sub_452820();
    // IDA 0x452820 area
    static void ApplyDamage(ObjectClass* target, int32_t damage, HouseClass* owner);  // 0x4690B0
    // IDA 0x452820 area
    // design: static function, no direct binary match in IDA
    static bool IsLocomotor();
    // IDA 0x452820 area
    // design: static function, no direct binary match in IDA
    static float GetVerses(int32_t armor);

    static int32_t  s_WarheadType;  // 0x00
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    int ApplyPostDamageEffects();  // 0x46a310 -- Warhead::ApplyPostDamageEffects
    // === SYMBOL-ANCHOR (END) ===
};

// ============================================================================
// DamageArea — area damage system (3 methods)
// IDA: ApplyScatter, sub_4D0180, sub_565660
// ============================================================================
class DamageArea
{
public:
    // IDA 0x4D0180
    static void ApplyScatter(const CoordStruct& center, int32_t damage, int32_t radius, HouseClass* owner);  // 0x4CD600
    // IDA 0x4D0180 area
    // design: static function, no direct binary match in IDA
    static void sub_4D0180();
    // IDA 0x565660
    // wrapper: delegates to DamageArea::CalcScatterOffset at 0x565660
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
    void Read();  // 0x5CB3F0
    // IDA 0x48B2A0 area
    void Write();  // 0x5CB400
    // IDA 0x48B2A0 area
    void Seek();  // 0x5CB430
    // IDA 0x48B2A0 area
    // design: no binary equivalent found in IDA
    bool IsEnabled() const;
    // IDA 0x48B2A0 area
    // design: no binary equivalent found in IDA
    void SetEnabled(bool enabled);

    bool        m_Enabled;      // 0x00
    uint8_t     _pad_01[3];     // 0x01
    int32_t     UnholyAlliance_field_04;       // 0x04
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    void* QueryInterface(int a1);  // 0x5cb540 -- UnholyAlliance::QueryInterface
    // === SYMBOL-ANCHOR (END) ===
    public:  // funcs-move
    // === FUNCS-MOVE (BEGIN) ===
    int GetResult();  // 0x5cb440
    // === FUNCS-MOVE (END) ===
};

// ============================================================================
// Weapon — weapon management (1 method)
// IDA: DestroyTerrain
// ============================================================================
class Weapon
{
public:
    // IDA 0x48B2A0 area
    static void DestroyTerrain(const CellStruct& cell);  // 0x70C690

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
    static void GetTransform(float* matrix, int32_t facing);  // 0x55A730
    // IDA 0x48B2A0 area
    static void LoadVoxelTurretAndBarrel(TechnoClass* tech);  // 0x5F8CE0

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
    static void ProcessLanding();  // 0x4CE840

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
    static void MissionStateMachine(FootClass* carryall);  // 0x416D50

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
    static void RemoveItem(int32_t index);  // 0x53DDA0

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
    static void Background_Setup(DSurface* surface);  // 0x52B9B0

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
    static void CreateMCV(HouseClass* house);  // 0x5D7030

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
    static void InitTables();  // 0x47B3A0

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
    static void ProcessAll();  // 0x6E5820

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
    static void Init();  // 0x75A790

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
    virtual ~TClassFactory_MechLocomotionClass() = default;  // 0x6C4D90

    // IClassFactory
    // wrapper: delegates to TClassFactory_MechLocomotionClass::ddtor at 0x6C4D90
    virtual HRESULT __stdcall CreateInstance(IUnknown* pUnkOuter, const GUID& riid, void** ppv) override;
    virtual HRESULT __stdcall LockServer(bool fLock) override;  // 0x767010
    // IUnknown
    virtual HRESULT __stdcall QueryInterface(const GUID& riid, void** ppv) override;  // 0x55A9B0
    virtual ULONG __stdcall AddRef() override;  // 0x6C4D40
    // wrapper: delegates to TClassFactory_MechLocomotionClass::AddRef at 0x6C4D40
    virtual ULONG __stdcall Release() override;

    int32_t     m_RefCount;     // 0x04
    public:  // funcs-move
    // === FUNCS-MOVE (BEGIN) ===
    int GetSize(int a1, int a2);  // 0x6c4e10
    // === FUNCS-MOVE (END) ===
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
    void* GetNext();  // 0x6E6E20
    // IDA 0x48B2A0 area
    void* Find(int32_t index);  // 0x6E6F20
    // IDA 0x48B2A0 area
    void* FindObject(ObjectClass* obj);  // 0x6E6FF0
    // IDA 0x48B2A0 area
    // design: no binary equivalent found in IDA
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
    static void Identity(float* m);  // 0x5AE860
    // IDA 0x5AE860 area
    static void Translate(float* m, float x, float y, float z);  // 0x5AE980
    // IDA 0x5AE860 area
    static CellStruct TransformCell(const float* m, const CellStruct& cell);  // 0x6D2360

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
    int32_t AddRef();  // 0x40D230
    int32_t Release();  // 0x40D240
    bool StubReturnFalse();  // 0x4AEBD0
    // wrapper: delegates to InputManager_ProcessEvents::StubReturnFalse at 0x4AEBD0
    void Process();
    // wrapper: delegates to InputManager_ProcessEvents::StubReturnFalse at 0x4AEBD0
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
    virtual ~AITriggerTypeClass() = default;  // 0x41FFF0

    virtual void GetClassIdentifier() {} // 0x41E500
    virtual void LoadTypeData() {} // 0x41E540
    virtual void SaveToINI() {} // 0x41E5C0
    virtual void ProcessPower() {} // 0x41E5E0
    virtual void EnemyHouseOwns() {} // 0x41EAF0
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
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    bool CivilianHouseOwns(int a1, int a2);  // 0x41ec90 -- AITriggerTypeClass::CivilianHouseOwns
    bool OwnerHouseOwns(int a1, int a2);  // 0x41ee90 -- AITriggerTypeClass::OwnerHouseOwns
    bool HouseCredits(int a1, int a2);  // 0x41f230 -- AITriggerTypeClass::HouseCredits
    int LoadFromINI(int a1);  // 0x41f580 -- AITriggerTypeClass::LoadFromINI
    int RegisterSuccess();  // 0x41fd60 -- AITriggerTypeClass::RegisterSuccess
    int RegisterFailure();  // 0x41fe20 -- AITriggerTypeClass::RegisterFailure
    // === SYMBOL-ANCHOR (END) ===
    public:  // funcs-move
    // === FUNCS-MOVE (BEGIN) ===
    bool IronCurtainCharged(int a1, int a2);  // 0x41f0d0
    bool ChronoSphereCharged(int a1, int a2);  // 0x41f180
    // === FUNCS-MOVE (END) ===
};
// 7 methods in IDA
class AnimFile
{
public:
    virtual ~AnimFile() = default;  // 0x426A90

    virtual void AddRef() {} // 0x426750
    virtual void Release() {} // 0x426790
    virtual void Load() {} // 0x426A50
    virtual void ddtor() {} // 0x426A90
    virtual void Check() {} // 0x426DD0
    // +2 more virtual methods

    uint8_t AnimFile_field_0x04[4];
    uint8_t AnimFile_field_0x08[4];
    uint8_t AnimFile_field_0x0C[4];
    uint8_t AnimFile_field_0x10[4];
    uint8_t AnimFile_field_0x14[4];
    uint8_t AnimFile_field_0x18[4];
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    void* QueryInterface(int a1);  // 0x4272a0 -- AnimFile::QueryInterface
    // === SYMBOL-ANCHOR (END) ===
};
// 1 methods in IDA
class AnimSequence
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~AnimSequence() = default;

    virtual void Parse() {} // 0x523D00

};
// 1 methods in IDA
class AnimTypeList
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~AnimTypeList() = default;

    virtual void Constructor() {} // 0x67A470

};
// 1 methods in IDA
class AnimTypeVector
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~AnimTypeVector() = default;

    virtual void Constructor() {} // 0x525680

};
// 3 methods in IDA
class CSFClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~CSFClass() = default;

    virtual void CopyString() {} // 0x595710
    virtual void sub_6977C0() {} // 0x6977C0
    virtual void LoadFile() {} // 0x7346A0

    uint8_t CSFClass_field_0x04[4];
    uint8_t CSFClass_field_0x08[4];
};
// 1 methods in IDA
class CaptureManager
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~CaptureManager() = default;

    virtual void FreeAll() {} // 0x472140

};
// 1 methods in IDA
class ChronoScreen
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ChronoScreen() = default;

    virtual void IsActive() {} // 0x53BAD0

};
// 8 methods in IDA
class CoopCampaignVector
{
public:
    virtual ~CoopCampaignVector() = default;  // 0x5C56E0

    virtual void Seek() {} // 0x5C5120
    virtual void AddRef() {} // 0x5C55F0
    virtual void Release() {} // 0x5C5630
    virtual void ddtor() {} // 0x5C56E0
    virtual void Read() {} // 0x5C5710
    // +3 more virtual methods

    uint8_t CoopCampaignVector_field_0x04[4];
    uint8_t CoopCampaignVector_field_0x08[4];
    uint8_t CoopCampaignVector_field_0x0C[4];
    uint8_t CoopCampaignVector_field_0x10[4];
    uint8_t CoopCampaignVector_field_0x14[4];
    uint8_t CoopCampaignVector_field_0x18[4];
    uint8_t CoopCampaignVector_field_0x1C[4];
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    int Write(int a1);  // 0x5c5750 -- CoopCampaignVector::Write
    void* QueryInterface(int a1);  // 0x5c5940 -- CoopCampaignVector::QueryInterface
    // === SYMBOL-ANCHOR (END) ===
};
// 2 methods in IDA
class Coord2D
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~Coord2D() = default;

    virtual void Add() {} // 0x437F10
    virtual void Sub() {} // 0x487F20

    uint8_t Coord2D_field_0x04[4];
};
// 3 methods in IDA
class Coord3D
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~Coord3D() = default;

    virtual void Set() {} // 0x437090
    virtual void Equals() {} // 0x459F60
    virtual void Add() {} // 0x6CE240

    uint8_t Coord3D_field_0x04[4];
    uint8_t Coord3D_field_0x08[4];
};
// 1 methods in IDA
class CoordBounds
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~CoordBounds() = default;

    virtual void Constructor() {} // 0x403870

};
// 1 methods in IDA
class CoordList
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~CoordList() = default;

    virtual void GetBounds() {} // 0x4A94F0

};
// 1 methods in IDA
class CoordinateTables
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~CoordinateTables() = default;

    virtual void Init() {} // 0x561910

};
// 1 methods in IDA
class DamageAnimClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~DamageAnimClass() = default;

    virtual void Constructor() {} // 0x7493B0

};
// 8 methods in IDA
class EMPulseClass
{
public:
    virtual ~EMPulseClass() = default;  // 0x4C59F0

    virtual void sub_54C58C0() {} // 0x4C58C0
    virtual void Stat() {} // 0x4C59A0
    virtual void ddtor() {} // 0x4C59F0
    virtual void Write() {} // 0x4C5A30
    virtual void Seek() {} // 0x4C5A80
    // +3 more virtual methods

    uint8_t EMPulseClass_field_0x04[4];
    uint8_t EMPulseClass_field_0x08[4];
    uint8_t EMPulseClass_field_0x0C[4];
    uint8_t EMPulseClass_field_0x10[4];
    uint8_t EMPulseClass_field_0x14[4];
    uint8_t EMPulseClass_field_0x18[4];
    uint8_t EMPulseClass_field_0x1C[4];
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    void* CopyTo(int a1);  // 0x4c5ac0 -- EMPulseClass::CopyTo
    // === SYMBOL-ANCHOR (END) ===
};
// 1 methods in IDA
class ExplosionClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ExplosionClass() = default;

    virtual void ProcessFrame() {} // 0x53CBE0

};
// 4 methods in IDA
class FileExtension
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~FileExtension() = default;

    virtual void MapHandler() {} // 0x6263D0
    virtual void Constructor() {} // 0x628240
    virtual void sub_628D10() {} // 0x628D10
    virtual void Check() {} // 0x628DD0

    uint8_t FileExtension_field_0x04[4];
    uint8_t FileExtension_field_0x08[4];
    uint8_t FileExtension_field_0x0C[4];
};
// 4 methods in IDA
class FileFind
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~FileFind() = default;

    virtual void Next() {} // 0x47B0C0
    virtual void CloseHandle() {} // 0x47B130
    virtual void Close() {} // 0x5BBED0
    virtual void sub_5BBEE0() {} // 0x5BBEE0

    uint8_t FileFind_field_0x04[4];
    uint8_t FileFind_field_0x08[4];
    uint8_t FileFind_field_0x0C[4];
};
// 4 methods in IDA
class FilePipe
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~FilePipe() = default;

    virtual void QueryInterface() {} // 0x477790
    virtual void Destructor() {} // 0x7BA420
    virtual void Release() {} // 0x7BA450
    virtual void Read() {} // 0x7BA480

    uint8_t FilePipe_field_0x04[4];
    uint8_t FilePipe_field_0x08[4];
    uint8_t FilePipe_field_0x0C[4];
};
// 2 methods in IDA
class FileStraw
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~FileStraw() = default;

    virtual void Open() {} // 0x525A10
    virtual void Destructor() {} // 0x7BA590

    uint8_t FileStraw_field_0x04[4];
};
// 2 methods in IDA
class FileStraw_Destru
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~FileStraw_Destru() = default;

    virtual void QueryInterface() {} // 0x477770
    virtual void Release() {} // 0x7BA530

    uint8_t FileStraw_Destru_field_0x04[4];
};
// 1 methods in IDA
class FileTree
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~FileTree() = default;

    virtual void CleanupAll() {} // 0x730100

};
// 1 methods in IDA
class FileTreeNode
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~FileTreeNode() = default;

    virtual void Destroy() {} // 0x69E500

};
// 8 methods in IDA
class InfantryTypeVector
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~InfantryTypeVector() = default;

    virtual void QueryInterface() {} // 0x512AE0
    virtual void Release() {} // 0x512C80
    virtual void AddType() {} // 0x512D60
    virtual void Remove() {} // 0x512DA0
    virtual void Construct() {} // 0x512DC0
    // +3 more virtual methods

    uint8_t InfantryTypeVector_field_0x04[4];
    uint8_t InfantryTypeVector_field_0x08[4];
    uint8_t InfantryTypeVector_field_0x0C[4];
    uint8_t InfantryTypeVector_field_0x10[4];
    uint8_t InfantryTypeVector_field_0x14[4];
    uint8_t InfantryTypeVector_field_0x18[4];
    uint8_t InfantryTypeVector_field_0x1C[4];
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    int Add(int a1);  // 0x512f20 -- InfantryTypeVector::Add
    void* Construct2(int a1, int a2);  // 0x5138f0 -- InfantryTypeVector::Construct2
    void* ConstructFromData(int a1, int a2);  // 0x5d89a0 -- InfantryTypeVector::ConstructFromData
    // === SYMBOL-ANCHOR (END) ===
};
// 2 methods in IDA
class IsoCoord
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~IsoCoord() = default;

    virtual void ToPixel() {} // 0x6D1EB0
    virtual void ToScreenOffset() {} // 0x6D62E0

    uint8_t IsoCoord_field_0x04[4];
};
// 4 methods in IDA
class IsoTile
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~IsoTile() = default;

    virtual void Decode16Bit() {} // 0x748750
    virtual void Decode8BitV2() {} // 0x748C30
    virtual void Decode16BitV2() {} // 0x7C39C0
    virtual void Decode8Bit() {} // 0x7C3EB0

    uint8_t IsoTile_field_0x04[4];
    uint8_t IsoTile_field_0x08[4];
    uint8_t IsoTile_field_0x0C[4];
};
// 1 methods in IDA
class IsometricTileClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~IsometricTileClass() = default;

    virtual void IsometricTileClass() {} // 0x543780

};
// 20 methods in IDA
class IsometricTileTypeClass
{
public:
    virtual ~IsometricTileTypeClass() = default;  // 0x54A170

    virtual void CleanupMembers() {} // 0x544A70
    virtual void LoadTileFileData() {} // 0x544CB0
    virtual void GetTerrainType() {} // 0x549AA0
    virtual void GetHeight() {} // 0x549AE0
    virtual void vt_entry_6C() {} // 0x549B50
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
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    int ProcessPower(int a1);  // 0x549b70 -- IsometricTileTypeClass::ProcessPower
    int GetTileIndex(int a1, int a2);  // 0x549dd0 -- IsometricTileTypeClass::GetTileIndex
    int GetAuxField();  // 0x54a160 -- IsometricTileTypeClass::GetAuxField
    void ClearBuffer();  // 0x54a190 -- IsometricTileTypeClass::ClearBuffer
    int PointerToIndex(int a1);  // 0x54a1c0 -- IsometricTileTypeClass::PointerToIndex
    int SetCapacity(int a1, int a2);  // 0x54a3d0 -- IsometricTileTypeClass::SetCapacity
    int FindItem(int a1);  // 0x54a480 -- IsometricTileTypeClass::FindItem
    // === SYMBOL-ANCHOR (END) ===
    public:  // funcs-move
    // === FUNCS-MOVE (BEGIN) ===
    int LoadTypeData(int a1, int a2);  // 0x549c80
    int SaveToINI(int a1, int a2, int a3);  // 0x549d70
    int GetClassIdentifier(int a1, int a2);  // 0x549d90
    // === FUNCS-MOVE (END) ===
};
// 1 methods in IDA
class Lightning
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~Lightning() = default;

    virtual void Draw() {} // 0x4C1F20

};
// 1 methods in IDA
class MapCoords
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~MapCoords() = default;

    virtual void Init() {} // 0x6B5240

};
// 1 methods in IDA
class MapData
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~MapData() = default;

    virtual void InitHeights() {} // 0x45B1C0

};
// 7 methods in IDA
class MapFile
{
public:
    virtual ~MapFile() = default;  // 0x69C500

    virtual void LoadDescription() {} // 0x69A3B0
    virtual void ddtor() {} // 0x69C500
    virtual void Write() {} // 0x69C560
    virtual void Release() {} // 0x69CBC0
    virtual void Read() {} // 0x69CD00
    // +2 more virtual methods

    uint8_t MapFile_field_0x04[4];
    uint8_t MapFile_field_0x08[4];
    uint8_t MapFile_field_0x0C[4];
    uint8_t MapFile_field_0x10[4];
    uint8_t MapFile_field_0x14[4];
    uint8_t MapFile_field_0x18[4];
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    void* QueryInterface(int a1);  // 0x69d520 -- MapFile::QueryInterface
    // === SYMBOL-ANCHOR (END) ===
};
// 2 methods in IDA
class MapPreview
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~MapPreview() = default;

    virtual void Check() {} // 0x5D63E0
    virtual void Upload() {} // 0x5E7EB0

    uint8_t MapPreview_field_0x04[4];
};
// 1 methods in IDA
class MapResourceClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~MapResourceClass() = default;

    virtual void Constructor() {} // 0x595740

};
// 9 methods in IDA
class MapSeed
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~MapSeed() = default;

    virtual void CheckTileMatch() {} // 0x56D100
    virtual void IsInitialized() {} // 0x58B7D0
    virtual void PlaceCityBlock() {} // 0x5910F0
    virtual void PlaceCityBuildings() {} // 0x591D80
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
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    int ValidateName(int a1);  // 0x597730 -- MapSeed::ValidateName
    bool IsCellInBounds();  // 0x5ac230 -- MapSeed::IsCellInBounds
    int CheckName();  // 0x79c520 -- MapSeed::CheckName
    void InsertName();  // 0x79c650 -- MapSeed::InsertName
    // === SYMBOL-ANCHOR (END) ===
};
// 12 methods in IDA
class MapSeedClass
{
public:
    virtual ~MapSeedClass() = default;  // 0x597D50

    virtual void Constructor() {} // 0x595680
    virtual void Release() {} // 0x597760
    virtual void AddRef() {} // 0x597A30
    virtual void ddtor() {} // 0x597D50
    virtual void Generate() {} // 0x597F80
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
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    int PlaceBuildingClusters(int a1);  // 0x5a5b50 -- MapSeedClass::PlaceBuildingClusters
    int ValidateRectBounds();  // 0x5a76e0 -- MapSeedClass::ValidateRectBounds
    void* QueryInterface(int a1);  // 0x5ac270 -- MapSeedClass::QueryInterface
    int GenerateSeed(int a1);  // 0x5acb80 -- MapSeedClass::GenerateSeed
    // === SYMBOL-ANCHOR (END) ===
    public:  // funcs-move
    // === FUNCS-MOVE (BEGIN) ===
    void* GetCell();  // 0x597fa0
    void* SetCell();  // 0x597fc0
    void* Validate();  // 0x597fe0
    // === FUNCS-MOVE (END) ===
};
// 3 methods in IDA
class MapSizeGameOption_WorldDominationTour
{
public:
    virtual ~MapSizeGameOption_WorldDominationTour() = default;  // 0x767800

    virtual void Read() {} // 0x767740
    virtual void ddtor() {} // 0x767800
    virtual void QueryInterface() {} // 0x7678C0

    uint8_t MapSizeGameOption_WorldDominationTour_field_0x04[4];
    uint8_t MapSizeGameOption_WorldDominationTour_field_0x08[4];
};
// 1 methods in IDA
class Map_WorldDominationTour
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~Map_WorldDominationTour() = default;

    virtual void QueryInterface() {} // 0x769C00

};
// 2 methods in IDA
class Matrix
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~Matrix() = default;

    virtual void Copy12Float() {} // 0x5AE5E0
    virtual void Scale() {} // 0x5BD730

    uint8_t Matrix_field_0x04[4];
};
// 1 methods in IDA
class Matrix2D
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~Matrix2D() = default;

    virtual void Rotate() {} // 0x5AF1A0

};
// 5 methods in IDA
class Matrix3x3
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~Matrix3x3() = default;

    virtual void Multiply() {} // 0x5AE8F0
    virtual void ApplyCol0() {} // 0x5AE9B0
    virtual void ApplyCol1() {} // 0x5AE9E0
    virtual void RotateX() {} // 0x5AEF60
    virtual void TransformPoint() {} // 0x5AF4D0

    uint8_t Matrix3x3_field_0x04[4];
    uint8_t Matrix3x3_field_0x08[4];
    uint8_t Matrix3x3_field_0x0C[4];
    uint8_t Matrix3x3_field_0x10[4];
};
// 2 methods in IDA
class PlacementList
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~PlacementList() = default;

    virtual void FindByID() {} // 0x47C4D0
    virtual void FindByType() {} // 0x47EBF0

    uint8_t PlacementList_field_0x04[4];
};
// 2 methods in IDA
class PlanningNodeClass
{
public:
    virtual ~PlanningNodeClass() = default; // 0x6370B0

    virtual void CleanupAll() {} // 0x6370B0
    virtual void sub_63EBD0() {} // 0x63EBD0

    uint8_t PlanningNodeClass_field_0x04[4];
};
// 13 methods in IDA
class RadarHashVector
{
public:
    virtual ~RadarHashVector() = default;  // 0x658A70

    virtual void Clear() {} // 0x658890
    virtual void GetCount() {} // 0x6588C0
    virtual void Seek() {} // 0x6588E0
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
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    int Read(int a1);  // 0x658aa0 -- RadarHashVector::Read
    int Write(int a1);  // 0x658af0 -- RadarHashVector::Write
    int ComputeHashIndex(int a1, int a2);  // 0x658b10 -- RadarHashVector::ComputeHashIndex
    int FindItemIndex(int a1);  // 0x658c20 -- RadarHashVector::FindItemIndex
    void* QueryInterface(int a1);  // 0x658d10 -- RadarHashVector::QueryInterface
    // === SYMBOL-ANCHOR (END) ===
};
// 8 methods in IDA
class ScoreAnimClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ScoreAnimClass() = default;

    virtual void sub_690C00() {} // 0x690C00
    virtual void AnimateText() {} // 0x690D60
    virtual void AddRef() {} // 0x690F70
    virtual void Release() {} // 0x690FC0
    virtual void Constructor_ScoreAnimClass() {} // 0x690FE0
    // +3 more virtual methods

    uint8_t ScoreAnimClass_field_0x04[4];
    uint8_t ScoreAnimClass_field_0x08[4];
    uint8_t ScoreAnimClass_field_0x0C[4];
    uint8_t ScoreAnimClass_field_0x10[4];
    uint8_t ScoreAnimClass_field_0x14[4];
    uint8_t ScoreAnimClass_field_0x18[4];
    uint8_t ScoreAnimClass_field_0x1C[4];
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    void* Constructor_ScoreFontClass(int a1);  // 0x6910a0 -- ScoreAnimClass::Constructor_ScoreFontClass
    // === SYMBOL-ANCHOR (END) ===
};
// 1 methods in IDA
class ScoreBoard
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ScoreBoard() = default;

    virtual void Render() {} // 0x542620

};
// 1 methods in IDA
class ScoreClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ScoreClass() = default;

    virtual void SetState() {} // 0x5CD3C0

};
// 4 methods in IDA
class ScoreFontClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ScoreFontClass() = default;

    virtual void Release() {} // 0x6907A0
    virtual void AddRef() {} // 0x6907E0
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
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ScoreScreen() = default;

    virtual void Display() {} // 0x68CD20
    virtual void Check() {} // 0x68EC00
    virtual void sub_68EF20() {} // 0x68EF20
    virtual void DisplayTimeText() {} // 0x68F9B0
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
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    void* LoadScoreFont(int a1);  // 0x690a10 -- ScoreScreen::LoadScoreFont
    void* LoadCountryFlags(int a1);  // 0x690ae0 -- ScoreScreen::LoadCountryFlags
    void RemoveItem(int a1, int a2, int a3, int a4, int a5);  // 0x7712c0 -- ScoreScreen::RemoveItem
    // === SYMBOL-ANCHOR (END) ===
};
// 1 methods in IDA
class ScoreScreenClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ScoreScreenClass() = default;

    virtual void ProcessFrame() {} // 0x691970

};
// 2 methods in IDA
class ScoreText
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ScoreText() = default;

    virtual void ShowAlt() {} // 0x76EA20
    virtual void Show() {} // 0x76EAF0

    uint8_t ScoreText_field_0x04[4];
};
// 2 methods in IDA
class ShroudClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ShroudClass() = default;

    virtual void UpdateVisibility() {} // 0x567230
    virtual void Reset() {} // 0x577AB0

    uint8_t ShroudClass_field_0x04[4];
};
// 1 methods in IDA
class SpawnControlVector
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~SpawnControlVector() = default;

    virtual void Constructor() {} // 0x6B8880

};
// 1 methods in IDA
class SuperClassVector
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~SuperClassVector() = default;

    virtual void Construct() {} // 0x510500

};
// 5 methods in IDA
class SuperWeaponClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~SuperWeaponClass() = default;

    virtual void LoadFromSaveStream() {} // 0x539890
    virtual void ProcessCharged() {} // 0x6C5640
    virtual void UpdateAll() {} // 0x6DA740
    virtual void CreateChemLauncher() {} // 0x6E38F0
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
    virtual ~TClassFactory_AnimClass() = default;  // 0x6C3A10

    virtual void AddRef() {} // 0x6C39C0
    virtual void GetClassName() {} // 0x6C39E0
    virtual void ddtor() {} // 0x6C3A10
    virtual void GetSize() {} // 0x6C3A90

    uint8_t TClassFactory_AnimClass_field_0x04[4];
    uint8_t TClassFactory_AnimClass_field_0x08[4];
    uint8_t TClassFactory_AnimClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_BulletClass
{
public:
    virtual ~TClassFactory_BulletClass() = default;  // 0x6C5090

    virtual void AddRef() {} // 0x6C5040
    virtual void GetClassName() {} // 0x6C5060
    virtual void ddtor() {} // 0x6C5090
    virtual void GetSize() {} // 0x6C5110

    uint8_t TClassFactory_BulletClass_field_0x04[4];
    uint8_t TClassFactory_BulletClass_field_0x08[4];
    uint8_t TClassFactory_BulletClass_field_0x0C[4];
};
// 8 methods in IDA
class TClassFactory_CampaignClass
{
public:
    virtual ~TClassFactory_CampaignClass() = default;  // 0x6C0290

    virtual void sub_6C00C0() {} // 0x6C00C0
    virtual void Release() {} // 0x6C00E0
    virtual void sub_6C0110() {} // 0x6C0110
    virtual void sub_6C0190() {} // 0x6C0190
    virtual void AddRef() {} // 0x6C0240
    // +3 more virtual methods

    uint8_t TClassFactory_CampaignClass_field_0x04[4];
    uint8_t TClassFactory_CampaignClass_field_0x08[4];
    uint8_t TClassFactory_CampaignClass_field_0x0C[4];
    uint8_t TClassFactory_CampaignClass_field_0x10[4];
    uint8_t TClassFactory_CampaignClass_field_0x14[4];
    uint8_t TClassFactory_CampaignClass_field_0x18[4];
    uint8_t TClassFactory_CampaignClass_field_0x1C[4];
    public:  // funcs-move
    // === FUNCS-MOVE (BEGIN) ===
    int GetSize(int a1, int a2);  // 0x6c0310
    // === FUNCS-MOVE (END) ===
};
// 4 methods in IDA
class TClassFactory_CellClass
{
public:
    virtual ~TClassFactory_CellClass() = default;  // 0x6BF990

    virtual void AddRef() {} // 0x6BF940
    virtual void GetClassName() {} // 0x6BF960
    virtual void ddtor() {} // 0x6BF990
    virtual void GetSize() {} // 0x6BFA10

    uint8_t TClassFactory_CellClass_field_0x04[4];
    uint8_t TClassFactory_CellClass_field_0x08[4];
    uint8_t TClassFactory_CellClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_EMPulseClass
{
public:
    virtual ~TClassFactory_EMPulseClass() = default;  // 0x6BFB10

    virtual void AddRef() {} // 0x6BFAC0
    virtual void GetClassName() {} // 0x6BFAE0
    virtual void ddtor() {} // 0x6BFB10
    virtual void GetSize() {} // 0x6BFB90

    uint8_t TClassFactory_EMPulseClass_field_0x04[4];
    uint8_t TClassFactory_EMPulseClass_field_0x08[4];
    uint8_t TClassFactory_EMPulseClass_field_0x0C[4];
};
// 1 methods in IDA
class TeamTypeVector
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~TeamTypeVector() = default;

    virtual void CopyConstruct() {} // 0x50E830

};


// === Batch-generated MISSING class stubs ===

// 8 methods in IDA
class AbstractClassVector
{
public:
    virtual ~AbstractClassVector() = default;  // 0x4E0410

    virtual void Seek() {} // 0x4E01E0
    virtual void QueryInterface() {} // 0x4E02D0
    virtual void AddRef() {} // 0x4E0320
    virtual void Release() {} // 0x4E0360
    virtual void ddtor() {} // 0x4E0410
    // +3 more virtual methods

    uint8_t AbstractClassVector_field_0x04[4];
    uint8_t AbstractClassVector_field_0x08[4];
    uint8_t AbstractClassVector_field_0x0C[4];
    uint8_t AbstractClassVector_field_0x10[4];
    uint8_t AbstractClassVector_field_0x14[4];
    uint8_t AbstractClassVector_field_0x18[4];
    uint8_t AbstractClassVector_field_0x1C[4];
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    int Read(int a1);  // 0x4e0440 -- AbstractClassVector::Read
    int Write(int a1);  // 0x4e0480 -- AbstractClassVector::Write
    // === SYMBOL-ANCHOR (END) ===
};
// 1 methods in IDA
class ActionQueue
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ActionQueue() = default;

    virtual void PushEntry() {} // 0x53CB10

};
// 1 methods in IDA
class Actions
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~Actions() = default;

    virtual void Reset() {} // 0x5BDDC0

};
// 1 methods in IDA
class AircraftTrackerClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~AircraftTrackerClass() = default;

    virtual void FillCurrentVector() {} // 0x412B40

};
// 1 methods in IDA
class AircraftTypeVector
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~AircraftTypeVector() = default;

    virtual void Constructor() {} // 0x513990

};
// 10 methods in IDA
class AlphaShapeClass
{
public:
    virtual ~AlphaShapeClass() = default;  // 0x421730

    virtual void CTOR() {} // 0x420960
    virtual void Constructor() {} // 0x420AF0
    virtual void SD_vt03() {} // 0x420D40
    virtual void SD_vt11() {} // 0x420D80
    virtual void SD_vt12() {} // 0x420D90
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
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~AngerVector() = default;

    virtual void Construct() {} // 0x5106E0

};
// 1 methods in IDA
class AppState
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~AppState() = default;

    virtual void CallMethod() {} // 0x5F3320

};
// 1 methods in IDA
class ArcTan
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ArcTan() = default;

    virtual void Update() {} // 0x7492B0

};
// 2 methods in IDA
class ArmorType
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ArmorType() = default;

    virtual void FindIndex() {} // 0x4753F0
    virtual void LookupByName() {} // 0x772A50

    uint8_t ArmorType_field_0x04[4];
};
// 6 methods in IDA
class ArtConfig
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~ArtConfig() = default;

    virtual void loadConfig() {} // 0x5CC760
    virtual void ReadLayout() {} // 0x7681E0
    virtual void ParseLayoutEntry() {} // 0x768F50
    virtual void saveConfig() {} // 0x7691E0
    virtual void resetConfig() {} // 0x76FB90
    // +1 more virtual methods

    uint8_t ArtConfig_field_0x04[4];
    uint8_t ArtConfig_field_0x08[4];
    uint8_t ArtConfig_field_0x0C[4];
    uint8_t ArtConfig_field_0x10[4];
    uint8_t ArtConfig_field_0x14[4];
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    int validateConfig(int a1, int a2, int a3);  // 0x76fc50 -- ArtConfig::validateConfig
    // === SYMBOL-ANCHOR (END) ===
};
// 1 methods in IDA
class AssetClass
{
public:
    virtual ~AssetClass() = default; // 0x534E50

    virtual void ReleaseAndReload() {} // 0x534E50

};
// 1 methods in IDA
class BTree
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~BTree() = default;

    virtual void DeleteSubtree() {} // 0x69E100

};
// 5 methods in IDA
class BaseNodeClass_Vector
{
public:
    virtual ~BaseNodeClass_Vector() = default;  // 0x42FAB0

    virtual void Release() {} // 0x42F9C0
    virtual void ddtor() {} // 0x42FAB0
    virtual void Read() {} // 0x42FAE0
    virtual void Write() {} // 0x42FB30
    virtual void QueryInterface() {} // 0x42FB50

    uint8_t BaseNodeClass_Vector_field_0x04[4];
    uint8_t BaseNodeClass_Vector_field_0x08[4];
    uint8_t BaseNodeClass_Vector_field_0x0C[4];
    uint8_t BaseNodeClass_Vector_field_0x10[4];
};
// 4 methods in IDA
class BigInt
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~BigInt() = default;

    virtual void ArrayArithmetic() {} // 0x5C6FE0
    virtual void DecryptBlock() {} // 0x632740
    virtual void RSAOperation() {} // 0x632870
    virtual void Compare() {} // 0x632BC0

    uint8_t BigInt_field_0x04[4];
    uint8_t BigInt_field_0x08[4];
    uint8_t BigInt_field_0x0C[4];
};
// 5 methods in IDA
class BinkMovieClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~BinkMovieClass() = default;

    virtual void SetPosition() {} // 0x433180
    virtual void RenderFrameToSurface() {} // 0x4333F0  [BinkMovie::RenderFrameToSurface non-virtual variant at 0x433040, anchor removed]
    virtual void AllocateRenderSurface() {} // 0x4335E0
    virtual void ReleaseRenderSurface() {} // 0x4336C0
    virtual void OpenFile() {} // 0x433770

    uint8_t BinkMovieClass_field_0x04[4];
    uint8_t BinkMovieClass_field_0x08[4];
    uint8_t BinkMovieClass_field_0x0C[4];
    uint8_t BinkMovieClass_field_0x10[4];
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    void* Close(int a1);  // 0x432690 -- BinkMovie::Close
    void* Open(int a1, int a2);  // 0x4326c0 -- BinkMovie::Open
    int Stop();  // 0x432700 -- BinkMovie::Stop
    int InitFromFile(int a1);  // 0x432750 -- BinkMovie::InitFromFile
    int Pause(int a1);  // 0x432c30 -- BinkMovie::Pause
    int IsAtEnd();  // 0x432c50 -- BinkMovie::IsAtEnd
    int Play();  // 0x432c70 -- BinkMovie::Play
    bool RenderLoop(int a1, int a2, int a3);  // 0x432e40 -- BinkMovie::RenderLoop
    int RenderSingleFrame(int a1, int a2, int a3, int a4);  // 0x4331f0 -- BinkMovie::RenderSingleFrame
    void* BlitToTarget(int a1);  // 0x433270 -- BinkMovie::BlitToTarget
    int AdjustSurfaceFormat(int a1);  // 0x433330 -- BinkMovie::AdjustSurfaceFormat
    void Cleanup();  // 0x5c01f0 -- BinkMovie::Cleanup
    void* CreateSurfaceTracker();  // 0x6c99d0 -- BinkMovie::CreateSurfaceTracker
    int FreeSurfaceTracker();  // 0x6c9ae0 -- BinkMovie::FreeSurfaceTracker
    int InitKeyframeTracking(int a1);  // 0x6c9b40 -- BinkMovie::InitKeyframeTracking
    int CheckKeyframeTransition(int a1);  // 0x6c9c60 -- BinkMovie::CheckKeyframeTransition
    void ProcessKeyframe(int a1);  // 0x6c9d40 -- BinkMovie::ProcessKeyframe
    void* VtableDispatch(int a1);  // 0x6c9ec0 -- BinkMovie::VtableDispatch
    // === SYMBOL-ANCHOR (END) ===
};
// 5 methods in IDA
class BlowPipe
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~BlowPipe() = default;

    virtual void Draw() {} // 0x438000
    virtual void DrawAlt() {} // 0x438030
    virtual void AddRef() {} // 0x438060
    virtual void Read() {} // 0x4380A0
    virtual void QueryInterface() {} // 0x632F90

    uint8_t BlowPipe_field_0x04[4];
    uint8_t BlowPipe_field_0x08[4];
    uint8_t BlowPipe_field_0x0C[4];
    uint8_t BlowPipe_field_0x10[4];
};
// 3 methods in IDA
class BlowStraw
{
public:
    virtual ~BlowStraw() = default; // 0x438210

    virtual void Release() {} // 0x438210
    virtual void QueryInterface() {} // 0x5B45C0
    virtual void Constructor_MixFileClass() {} // 0x5B4630

    uint8_t BlowStraw_field_0x04[4];
    uint8_t BlowStraw_field_0x08[4];
};
// 1 methods in IDA
class BoolVector
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~BoolVector() = default;

    virtual void Construct() {} // 0x510920

};
// 1 methods in IDA
class BridgeClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~BridgeClass() = default;

    virtual void GetCellData() {} // 0x42E820

};
// 1 methods in IDA
class BuildLocation
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~BuildLocation() = default;

    virtual void InitCandidate() {} // 0x50E450

};
// 1 methods in IDA
class BuildLocationVector
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~BuildLocationVector() = default;

    virtual void Grow() {} // 0x510860

};
// 1 methods in IDA
class C07EFB9C
{
public:
    virtual ~C07EFB9C() = default;  // 0x6301A0

    virtual void ddtor() {} // 0x6301A0

};
// 1 methods in IDA
class C07F0188
{
public:
    virtual ~C07F0188() = default;  // 0x645620

    virtual void ddtor() {} // 0x645620

};
// 5 methods in IDA
class C07F5C70
{
public:
    virtual ~C07F5C70() = default;  // 0x746DE0

    virtual void Write() {} // 0x744600
    virtual void StubReturn2280() {} // 0x746DD0
    virtual void ddtor() {} // 0x746DE0
    virtual void StubReturn1() {} // 0x746E20
    virtual void Seek() {} // 0x746E80

    uint8_t C07F5C70_field_0x04[4];
    uint8_t C07F5C70_field_0x08[4];
    uint8_t C07F5C70_field_0x0C[4];
    uint8_t C07F5C70_field_0x10[4];
};
// 6 methods in IDA
class CCToolTip
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~CCToolTip() = default;

    virtual void CalculatePopupPosition() {} // 0x478BA0
    virtual void Release() {} // 0x478DB0
    virtual void Draw1() {} // 0x478E10
    virtual void Draw2() {} // 0x478E30
    virtual void Show() {} // 0x479050
    // +1 more virtual methods

    uint8_t CCToolTip_field_0x04[4];
    uint8_t CCToolTip_field_0x08[4];
    uint8_t CCToolTip_field_0x0C[4];
    uint8_t CCToolTip_field_0x10[4];
    uint8_t CCToolTip_field_0x14[4];
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    void* QueryInterface(int a1);  // 0x7784a0 -- CCToolTip::QueryInterface
    // === SYMBOL-ANCHOR (END) ===
};
// 13 methods in IDA
class CChatEventSink
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~CChatEventSink() = default;

    virtual void HandleServerList() {} // 0x7A41C0
    virtual void HandleChatEvent() {} // 0x7A5890
    virtual void HandleChannelJoin() {} // 0x7A7110
    virtual void HandleLobbyPlayerUpdate() {} // 0x7A8260
    virtual void HandleUserSearch() {} // 0x7A9970
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
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    int GrowBuffer();  // 0x7ad930 -- CChatEventSink::GrowBuffer
    int ComputeBucketMask(int a1);  // 0x7aecb0 -- CChatEventSink::ComputeBucketMask
    int ProcessChatEvent();  // 0x7aed40 -- CChatEventSink::ProcessChatEvent
    int EnsureCapacity(int a1);  // 0x7aedd0 -- CChatEventSink::EnsureCapacity
    int Check(int a1, int a2);  // 0x7aee90 -- CChatEventSink::Check
    int EncodeString(int a1);  // 0x7b5e30 -- CChatEventSink::EncodeString
    // === SYMBOL-ANCHOR (END) ===
    public:  // funcs-move
    // === FUNCS-MOVE (BEGIN) ===
    int HandleChatChannelList(int a1, int a2, int a3);  // 0x7aa870
    // === FUNCS-MOVE (END) ===
};
// 2 methods in IDA
class CDROM
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~CDROM() = default;

    virtual void DeviceIoControl() {} // 0x47A3F0
    virtual void LockVolume() {} // 0x47A6F0

    uint8_t CDROM_field_0x04[4];
};
// 1 methods in IDA
class CarryoverClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~CarryoverClass() = default;

    virtual void QueryInterface() {} // 0x473920

};
// 1 methods in IDA
class CellClassVector
{
public:
    virtual ~CellClassVector() = default;  // 0x5AD570

    virtual void Destruct() {} // 0x5AD570

};
// 1 methods in IDA
class CellCoord
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~CellCoord() = default;

    virtual void To_CellObj() {} // 0x5657A0

};
// 1 methods in IDA
class CellLand
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~CellLand() = default;

    virtual void IsBuildable() {} // 0x4863D0

};
// 1 methods in IDA
class CellSystem
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~CellSystem() = default;

    virtual void UpdateVisibility() {} // 0x578100

};
// 1 methods in IDA
class Char
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~Char() = default;

    virtual void Swap() {} // 0x433C90

};
// 2 methods in IDA
class Chat
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~Chat() = default;

    virtual void ProcessMessages() {} // 0x55E420
    virtual void sub_55D4390() {} // 0x5D4390

    uint8_t Chat_field_0x04[4];
};
// 1 methods in IDA
class ChatDialog
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ChatDialog() = default;

    virtual void DlgProc() {} // 0x79DB50

};
// 1 methods in IDA
class ChatEvent
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ChatEvent() = default;

    virtual void ProcessStrings() {} // 0x6B9740

};
// 1 methods in IDA
class ClassFactory_CStream
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ClassFactory_CStream() = default;

    virtual void Construct() {} // 0x6BEE40

};
// 1 methods in IDA
class ClassFactory_Wave
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ClassFactory_Wave() = default;

    virtual void Construct() {} // 0x6BEFC0

};
// 1 methods in IDA
class Cliff
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~Cliff() = default;

    virtual void ProcessTransitions() {} // 0x579010

};
// 16 methods in IDA
class ComStreamClass
{
public:
    virtual ~ComStreamClass() = default;  // 0x7A40F0

    virtual void initStream() {} // 0x76B080
    virtual void closeStream() {}
    virtual void SetSize() {} // 0x7A2FE0
    virtual void Read() {} // 0x7A30D0
    virtual void Commit() {} // 0x7A3B30
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
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    void readData();  // 0x7ae0e0 -- ComStreamClass::readData
    void* writeData(int a1);  // 0x7aed20 -- ComStreamClass::writeData
    void flushStream();  // 0x7aef50 -- ComStreamClass::flushStream
    void* seekToPosition();  // 0x7b0220 -- ComStreamClass::seekToPosition
    void* getStreamSize();  // 0x7b02a0 -- ComStreamClass::getStreamSize
    // === SYMBOL-ANCHOR (END) ===
    public:  // funcs-move
    // === FUNCS-MOVE (BEGIN) ===
    int Write(int a1, int a2, int a3, int a4, int a5);  // 0x7a3d90
    int Seek(int a1, int a2, int a3, int a4);  // 0x7a4070
    int AddRef();  // 0x7ac800
    int Release();  // 0x7ac820
    int QueryInterface(int a1, int a2, int a3);  // 0x7ac870
    // === FUNCS-MOVE (END) ===
};
// 1 methods in IDA
class Compression
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~Compression() = default;

    virtual void Read() {} // 0x55C350

};
// 2 methods in IDA
class Conditions
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~Conditions() = default;

    virtual void CheckResult() {} // 0x653810
    virtual void CheckResult3() {} // 0x653830

    uint8_t Conditions_field_0x04[4];
};
// 1 methods in IDA
class Conflict_WorldDominationTour
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~Conflict_WorldDominationTour() = default;

    virtual void QueryInterface() {} // 0x7667A0

};
// 9 methods in IDA
class ConnectionPointClass
{
public:
    virtual ~ConnectionPointClass() = default;  // 0x4A05D0

    virtual void QueryInterface() {} // 0x4A04B0
    virtual void AddRef() {} // 0x4A0520
    virtual void Release() {} // 0x4A0540
    virtual void ddtor() {} // 0x4A05D0
    virtual void Advise() {} // 0x4A0610
    // +4 more virtual methods

    uint8_t ConnectionPointClass_field_0x04[4];
    uint8_t ConnectionPointClass_field_0x08[4];
    uint8_t ConnectionPointClass_field_0x0C[4];
    uint8_t ConnectionPointClass_field_0x10[4];
    uint8_t ConnectionPointClass_field_0x14[4];
    uint8_t ConnectionPointClass_field_0x18[4];
    uint8_t ConnectionPointClass_field_0x1C[4];
    uint8_t ConnectionPointClass_field_0x20[4];
    public:  // funcs-move
    // === FUNCS-MOVE (BEGIN) ===
    int Unadvise(int a1, int a2, int a3);  // 0x4a0630
    int EnumConnections(int a1, int a2);  // 0x4a0700
    // === FUNCS-MOVE (END) ===
};
// 1 methods in IDA
class ConnectionPointVector
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ConnectionPointVector() = default;

    virtual void Construct() {} // 0x5105F0

};
// 3 methods in IDA
class CrateClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~CrateClass() = default;

    virtual void ProcessPickup() {} // 0x481A00
    virtual void Update() {} // 0x56BBE0
    virtual void FindPlacement() {} // 0x56BD40

    uint8_t CrateClass_field_0x04[4];
    uint8_t CrateClass_field_0x08[4];
};
// 1 methods in IDA
class CreatureClass
{
public:
    virtual ~CreatureClass() = default;

    virtual void GetManager() {} // 0x72DAE0

};
// 1 methods in IDA
class Crypto
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~Crypto() = default;

    virtual void DecodeByte() {} // 0x632AA0

};
// 2 methods in IDA
class DListNode
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~DListNode() = default;

    virtual void Init() {} // 0x4072C0
    virtual void InitEmpty() {} // 0x4072D0

    uint8_t DListNode_field_0x04[4];
};
// 4 methods in IDA
class Dial8Class
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~Dial8Class() = default;

    virtual void Constructor() {} // 0x4A53B0
    virtual void SetValue() {} // 0x4A5660
    virtual void GetValue() {} // 0x4A57B0
    virtual void QueryInterface() {} // 0x4A59A0

    uint8_t Dial8Class_field_0x04[4];
    uint8_t Dial8Class_field_0x08[4];
    uint8_t Dial8Class_field_0x0C[4];
};
// 11 methods in IDA
class DiskLaserClass
{
public:
    virtual ~DiskLaserClass() = default;  // 0x4A7C30

    virtual void Fire() {} // 0x4A71A0
    virtual void Update() {} // 0x4A7340
    virtual void PointerGotInvalid() {}
    virtual void DiskLaserClass() {} // 0x4A7A30
    virtual void Stat() {} // 0x4A7B80
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
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    void PointerGotInvalid(int a1);  // 0x4a7900 -- DiskLaserClass::PointerGotInvalid
    void* CopyTo(int a1);  // 0x4a7c90 -- DiskLaserClass::CopyTo
    // === SYMBOL-ANCHOR (END) ===
    public:  // funcs-move
    // === FUNCS-MOVE (BEGIN) ===
    int Write(int a1, int a2);  // 0x4a7b90
    int Seek(int a1, int a2, int a3);  // 0x4a7c10
    // === FUNCS-MOVE (END) ===
};
// 1 methods in IDA
class DiskSpace
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~DiskSpace() = default;

    virtual void CheckAvailable() {} // 0x48DD50

};
// 1 methods in IDA
class DistributionVector_BuildingType
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~DistributionVector_BuildingType() = default;

    virtual void Construct() {} // 0x510970

};
// 5 methods in IDA
class DynamicArray
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~DynamicArray() = default;

    virtual void AddFromList() {} // 0x4129C0
    virtual void Resize() {} // 0x6249A0
    virtual void ShrinkCapacity() {} // 0x625440
    virtual void Remove() {} // 0x7ACD60
    virtual void Grow() {} // 0x7AD9D0

    uint8_t DynamicArray_field_0x04[4];
    uint8_t DynamicArray_field_0x08[4];
    uint8_t DynamicArray_field_0x0C[4];
    uint8_t DynamicArray_field_0x10[4];
};
// 1 methods in IDA
class DynamicClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~DynamicClass() = default;

    virtual void Insert() {} // 0x7ACA00

};
// 1 methods in IDA
class DynamicStringArray
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~DynamicStringArray() = default;

    virtual void Get() {} // 0x7ACE30

};
// 1 methods in IDA
class DynamicVectorArray
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~DynamicVectorArray() = default;

    virtual void Constructor() {} // 0x628070

};
// 1 methods in IDA
class ErrorCode
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ErrorCode() = default;

    virtual void Map() {} // 0x46F5E0

};
// 1 methods in IDA
class Exception
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~Exception() = default;

    virtual void Destructor() {} // 0x7D2F41

};
// 1 methods in IDA
class ExceptionHandler
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ExceptionHandler() = default;

    virtual void GenerateReport() {} // 0x4C85E0

};
// 1 methods in IDA
class Field
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~Field() = default;

    virtual void Int_Set() {} // 0x434110

};
// 1 methods in IDA
class FractalNoise
{
public:
    virtual ~FractalNoise() = default; // 0x420270

    virtual void Release() {} // 0x420270

};
// 7 methods in IDA
class Function
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~Function() = default;

    virtual void 41C430() {} // 0x41C430
    virtual void 424CA0() {} // 0x424CA0
    virtual void 46B260() {} // 0x46B260
    virtual void 4B4D60() {} // 0x4B4D60
    virtual void 6342D0() {} // 0x6342D0
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
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~GDlg() = default;

    virtual void LoadLetterStrings() {} // 0x4E5AC0

};
// 8 methods in IDA
class GaugeClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~GaugeClass() = default;

    virtual void SetValue() {} // 0x4E2580
    virtual void GetValue() {} // 0x4E25A0
    virtual void GetRange() {} // 0x4E25D0
    virtual void SetColor() {} // 0x4E2650
    virtual void SetRange() {} // 0x4E29A0
    // +3 more virtual methods

    uint8_t GaugeClass_field_0x04[4];
    uint8_t GaugeClass_field_0x08[4];
    uint8_t GaugeClass_field_0x0C[4];
    uint8_t GaugeClass_field_0x10[4];
    uint8_t GaugeClass_field_0x14[4];
    uint8_t GaugeClass_field_0x18[4];
    uint8_t GaugeClass_field_0x1C[4];
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    void* QueryInterface(int a1);  // 0x4e30d0 -- GaugeClass::QueryInterface
    // === SYMBOL-ANCHOR (END) ===
};
// 3 methods in IDA
class GenericVector
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~GenericVector() = default;

    virtual void StubReturnFalse() {} // 0x40CC10
    virtual void Resize() {} // 0x40CE50
    virtual void Resize2() {} // 0x50EA90

    uint8_t GenericVector_field_0x04[4];
    uint8_t GenericVector_field_0x08[4];
};
// 1 methods in IDA
class GetCurrentProcessId
{
public:
    virtual ~GetCurrentProcessId() = default;

    virtual void 0() {} // 0x7DCF22

};
// 1 methods in IDA
class GetCurrentThread
{
public:
    virtual ~GetCurrentThread() = default;

    virtual void 0() {} // 0x7DCEE0

};
// 1 methods in IDA
class GetCurrentThreadId
{
public:
    virtual ~GetCurrentThreadId() = default;

    virtual void 0() {} // 0x7D1512

};
// 1 methods in IDA
class GlobalArray
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~GlobalArray() = default;

    virtual void FindString() {} // 0x422B20

};
// 2 methods in IDA
class GlobalInit
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~GlobalInit() = default;

    virtual void RegisterSingleton() {} // 0x5F7640
    virtual void SingletonGetter() {} // 0x71DE40

    uint8_t GlobalInit_field_0x04[4];
};
// 1 methods in IDA
class GroupLabel
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~GroupLabel() = default;

    virtual void WndProc() {} // 0x61E700

};
// 2 methods in IDA
class HVAAnimation
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~HVAAnimation() = default;

    virtual void LoadFromFile() {} // 0x759540
    virtual void ParseFrames() {} // 0x759670

    uint8_t HVAAnimation_field_0x04[4];
};
// 1 methods in IDA
class Heap
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~Heap() = default;

    virtual void SiftDown() {} // 0x5AD870

};
// 1 methods in IDA
class HexCoord
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~HexCoord() = default;

    virtual void Convert() {} // 0x5654A0

};
// 1 methods in IDA
class History_WorldDominationTour
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~History_WorldDominationTour() = default;

    virtual void QueryInterface() {} // 0x767C10

};
// 1 methods in IDA
class IDXContainer
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~IDXContainer() = default;

    virtual void LoadSample() {} // 0x4016F0

};
// 1 methods in IDA
class INISectionList
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~INISectionList() = default;

    virtual void Constructor() {} // 0x49E8E0

};
// 6 methods in IDA
class ImageList
{
public:
    virtual ~ImageList() = default; // 0x7C89FE

    virtual void DragEnter() {} // 0x7C89F2
    virtual void BeginDrag() {} // 0x7C89F8
    virtual void Destroy() {} // 0x7C89FE
    virtual void EndDrag() {} // 0x7C8A04
    virtual void DragMove() {} // 0x7C8A0A
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
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~Int4() = default;

    virtual void Set() {} // 0x645C30
    virtual void Set2() {}

    uint8_t Int4_field_0x04[4];
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    int Set2(int a1, int a2, int a3, int a4);  // 0x645c50 -- Int4::Set2
    // === SYMBOL-ANCHOR (END) ===
};
// 1 methods in IDA
class Int64
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~Int64() = default;

    virtual void Equal() {} // 0x517310

};
// 2 methods in IDA
class IntDynamicVector
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~IntDynamicVector() = default;

    virtual void QueryInterface() {} // 0x477B10
    virtual void Construct() {} // 0x717BD0

    uint8_t IntDynamicVector_field_0x04[4];
};
// 2 methods in IDA
class IntVector
{
public:
    virtual ~IntVector() = default; // 0x49F9D0

    virtual void Copy() {} // 0x477B60
    virtual void Destructor() {} // 0x49F9D0

    uint8_t IntVector_field_0x04[4];
};
// 2 methods in IDA
class IsRandMap
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~IsRandMap() = default;

    virtual void Sed() {} // 0x69ADF0
    virtual void Sed2() {} // 0x69AE70

    uint8_t IsRandMap_field_0x04[4];
};
// 1 methods in IDA
class KeyValuePair
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~KeyValuePair() = default;

    virtual void Init() {} // 0x52AEC0

};
// 1 methods in IDA
class KeywordClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~KeywordClass() = default;

    virtual void FindOrCreate() {} // 0x41CEF0

};
// 1 methods in IDA
class KeywordType
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~KeywordType() = default;

    virtual void FindOrCreate2() {} // 0x524CB0

};
// 3 methods in IDA
class LCW
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~LCW() = default;

    virtual void Compress() {} // 0x5520A0
    virtual void DecompressReader() {} // 0x552490
    virtual void Decompress() {} // 0x55C7C0

    uint8_t LCW_field_0x04[4];
    uint8_t LCW_field_0x08[4];
};
// 2 methods in IDA
class LCWPipe
{
public:
    virtual ~LCWPipe() = default; // 0x552060

    virtual void Constructor() {} // 0x551FF0
    virtual void Destructor() {} // 0x552060

    uint8_t LCWPipe_field_0x04[4];
};
// 2 methods in IDA
class LCWPipe_Destru
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~LCWPipe_Destru() = default;

    virtual void AddRef() {} // 0x5522D0
    virtual void QueryInterface() {} // 0x552390

    uint8_t LCWPipe_Destru_field_0x04[4];
};
// 2 methods in IDA
class LCWStraw
{
public:
    virtual ~LCWStraw() = default; // 0x552450

    virtual void Constructor() {} // 0x5523E0
    virtual void Destructor() {} // 0x552450

    uint8_t LCWStraw_field_0x04[4];
};
// 1 methods in IDA
class LCWStraw_Destru
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~LCWStraw_Destru() = default;

    virtual void QueryInterface() {} // 0x5525F0

};
// 2 methods in IDA
class LZOPipe
{
public:
    virtual ~LZOPipe() = default; // 0x55C310

    virtual void Constructor() {} // 0x55C2B0
    virtual void Destructor() {} // 0x55C310

    uint8_t LZOPipe_field_0x04[4];
};
// 2 methods in IDA
class LZOPipe_Destru
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~LZOPipe_Destru() = default;

    virtual void AddRef() {} // 0x55C5E0
    virtual void QueryInterface() {} // 0x55C6D0

    uint8_t LZOPipe_Destru_field_0x04[4];
};
// 2 methods in IDA
class LZOStraw
{
public:
    virtual ~LZOStraw() = default; // 0x55C780

    virtual void Constructor() {} // 0x55C720
    virtual void Destructor() {} // 0x55C780

    uint8_t LZOStraw_field_0x04[4];
};
// 1 methods in IDA
class LZOStraw_Destru
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~LZOStraw_Destru() = default;

    virtual void QueryInterface() {} // 0x55C990

};
// 9 methods in IDA
class Lobby
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~Lobby() = default;

    virtual void UpdateReadyIcons() {} // 0x46FA20
    virtual void SetupAllFactionSlots() {} // 0x46FAC0
    virtual void EnableStartButton() {} // 0x46FB50
    virtual void FillPlayerFactions() {} // 0x4E4820
    virtual void InvalidateFactionCombos() {} // 0x4E5310
    // +4 more virtual methods

    uint8_t Lobby_field_0x04[4];
    uint8_t Lobby_field_0x08[4];
    uint8_t Lobby_field_0x0C[4];
    uint8_t Lobby_field_0x10[4];
    uint8_t Lobby_field_0x14[4];
    uint8_t Lobby_field_0x18[4];
    uint8_t Lobby_field_0x1C[4];
    uint8_t Lobby_field_0x20[4];
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    int InvalidatePlayerSlots();  // 0x4e5d60 -- Lobby::InvalidatePlayerSlots
    void UpdatePlayerLabels();  // 0x5eb060 -- Lobby::UpdatePlayerLabels
    void SetupPlayerWidgets();  // 0x5eba00 -- Lobby::SetupPlayerWidgets
    // === SYMBOL-ANCHOR (END) ===
    public:  // funcs-move
    // === FUNCS-MOVE (BEGIN) ===
    int BuildPlayerList();  // 0x77db90
    // === FUNCS-MOVE (END) ===
};
// 1 methods in IDA
class MIXClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~MIXClass() = default;

    virtual void CopyHeader() {} // 0x4A8D50

};
// 4 methods in IDA
class MPCombatTeam
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~MPCombatTeam() = default;

    virtual void Constructor() {} // 0x5C9470
    virtual void MPTeam() {} // 0x5CAE10
    virtual void Constructor2() {} // 0x5CAEB0
    virtual void AddToList() {} // 0x5D8D10

    uint8_t MPCombatTeam_field_0x04[4];
    uint8_t MPCombatTeam_field_0x08[4];
    uint8_t MPCombatTeam_field_0x0C[4];
};
// 1 methods in IDA
class MPScore
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~MPScore() = default;

    virtual void DlgProc() {} // 0x5C9B10

};
// 3 methods in IDA
class MSAnim
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~MSAnim() = default;

    virtual void GetField() {} // 0x5CB840
    virtual void SetField() {} // 0x5CB860
    virtual void Reset() {} // 0x5CC6A0

    uint8_t MSAnim_field_0x04[4];
    uint8_t MSAnim_field_0x08[4];
};
// 5 methods in IDA
class MSBinkAnim
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~MSBinkAnim() = default;

    virtual void Pause() {} // 0x5CC850
    virtual void Stop() {} // 0x5CC880
    virtual void Load() {} // 0x5CC8A0
    virtual void Play() {} // 0x5CC970
    virtual void QueryInterface() {} // 0x5CEC70

    uint8_t MSBinkAnim_field_0x04[4];
    uint8_t MSBinkAnim_field_0x08[4];
    uint8_t MSBinkAnim_field_0x0C[4];
    uint8_t MSBinkAnim_field_0x10[4];
};
// 6 methods in IDA
class MSBitPrintAnim
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~MSBitPrintAnim() = default;

    virtual void Construct() {} // 0x5CD330
    virtual void Update() {} // 0x5CD3D0
    virtual void Stub() {} // 0x5CD400
    virtual void SetText() {} // 0x5CD410
    virtual void Draw() {} // 0x5CD4D0
    // +1 more virtual methods

    uint8_t MSBitPrintAnim_field_0x04[4];
    uint8_t MSBitPrintAnim_field_0x08[4];
    uint8_t MSBitPrintAnim_field_0x0C[4];
    uint8_t MSBitPrintAnim_field_0x10[4];
    uint8_t MSBitPrintAnim_field_0x14[4];
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    void* QueryInterface(int a1);  // 0x5ced10 -- MSBitPrintAnim::QueryInterface
    // === SYMBOL-ANCHOR (END) ===
};
// 2 methods in IDA
class MSChoiceClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~MSChoiceClass() = default;

    virtual void LoadFromINI() {} // 0x5CF8E0
    virtual void DeleteAndZero() {} // 0x5D0290

    uint8_t MSChoiceClass_field_0x04[4];
};
// 5 methods in IDA
class MSEngine_Destru
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~MSEngine_Destru() = default;

    virtual void CheckStringNotEmpty() {} // 0x5AE4C0
    virtual void StubReturnFalse() {} // 0x5AE590
    virtual void DestroyComposite() {} // 0x5AE5A0
    virtual void Release() {} // 0x5D26F0
    virtual void QueryInterface() {} // 0x5D2700

    uint8_t MSEngine_Destru_field_0x04[4];
    uint8_t MSEngine_Destru_field_0x08[4];
    uint8_t MSEngine_Destru_field_0x0C[4];
    uint8_t MSEngine_Destru_field_0x10[4];
};
// 6 methods in IDA
class MSFont
{
public:
    virtual ~MSFont() = default;  // 0x5D3330

    virtual void Constructor_MSFont() {} // 0x5D2E30
    virtual void Release() {} // 0x5D3170
    virtual void AddRef() {} // 0x5D31D0
    virtual void Create() {} // 0x5D3250
    virtual void ddtor() {} // 0x5D3330
    // +1 more virtual methods

    uint8_t MSFont_field_0x04[4];
    uint8_t MSFont_field_0x08[4];
    uint8_t MSFont_field_0x0C[4];
    uint8_t MSFont_field_0x10[4];
    uint8_t MSFont_field_0x14[4];
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    void* QueryInterface(int a1);  // 0x5d3450 -- MSFont::QueryInterface
    // === SYMBOL-ANCHOR (END) ===
};
// 7 methods in IDA
class MSOverlayAnim
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~MSOverlayAnim() = default;

    virtual void Load() {} // 0x5CB880
    virtual void Draw() {} // 0x5CBB80
    virtual void Update() {} // 0x5CBCB0
    virtual void Init() {} // 0x5CC250
    virtual void AddRef() {} // 0x5CEAC0
    // +2 more virtual methods

    uint8_t MSOverlayAnim_field_0x04[4];
    uint8_t MSOverlayAnim_field_0x08[4];
    uint8_t MSOverlayAnim_field_0x0C[4];
    uint8_t MSOverlayAnim_field_0x10[4];
    uint8_t MSOverlayAnim_field_0x14[4];
    uint8_t MSOverlayAnim_field_0x18[4];
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    void* QueryInterface(int a1);  // 0x5ceb80 -- MSOverlayAnim::QueryInterface
    // === SYMBOL-ANCHOR (END) ===
};
// 7 methods in IDA
class MSPCXAnim
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~MSPCXAnim() = default;

    virtual void Construct() {} // 0x5CE640
    virtual void Load() {} // 0x5CE7D0
    virtual void Draw() {} // 0x5CE8C0
    virtual void SetPalette() {}
    virtual void GetFrame() {} // 0x5CEA80
    // +2 more virtual methods

    uint8_t MSPCXAnim_field_0x04[4];
    uint8_t MSPCXAnim_field_0x08[4];
    uint8_t MSPCXAnim_field_0x0C[4];
    uint8_t MSPCXAnim_field_0x10[4];
    uint8_t MSPCXAnim_field_0x14[4];
    uint8_t MSPCXAnim_field_0x18[4];
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    void SetPalette(int a1);  // 0x5cea40 -- MSPCXAnim::SetPalette
    void* QueryInterface(int a1);  // 0x5ced70 -- MSPCXAnim::QueryInterface
    // === SYMBOL-ANCHOR (END) ===
};
// 6 methods in IDA
class MSPrintAnim
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~MSPrintAnim() = default;

    virtual void SetText() {} // 0x5CDC50
    virtual void Draw() {} // 0x5CDEE0
    virtual void Update() {} // 0x5CE2B0
    virtual void Clear() {} // 0x5CE300
    virtual void QueryInterface() {} // 0x5CED40
    // +1 more virtual methods

    uint8_t MSPrintAnim_field_0x04[4];
    uint8_t MSPrintAnim_field_0x08[4];
    uint8_t MSPrintAnim_field_0x0C[4];
    uint8_t MSPrintAnim_field_0x10[4];
    uint8_t MSPrintAnim_field_0x14[4];
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    int GetCharAt();  // 0x7b7110 -- MSPrintAnim::GetCharAt
    // === SYMBOL-ANCHOR (END) ===
};
// 1 methods in IDA
class MSSfxClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~MSSfxClass() = default;

    virtual void FindByName() {} // 0x76EBE0

};
// 2 methods in IDA
class MSShapeAnim
{
public:
    virtual ~MSShapeAnim() = default;  // 0x5CEBD0

    virtual void Constructor() {} // 0x5CB6D0
    virtual void Destruct() {} // 0x5CEBD0

    uint8_t MSShapeAnim_field_0x04[4];
};
// 8 methods in IDA
class MSVQAnim
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~MSVQAnim() = default;

    virtual void Construct() {} // 0x5CCA20
    virtual void ConstructMSVQAnimHidden() {} // 0x5CCC30
    virtual void Load() {} // 0x5CCE90
    virtual void Play() {} // 0x5CD0E0
    virtual void Stop() {} // 0x5CD240
    // +3 more virtual methods

    uint8_t MSVQAnim_field_0x04[4];
    uint8_t MSVQAnim_field_0x08[4];
    uint8_t MSVQAnim_field_0x0C[4];
    uint8_t MSVQAnim_field_0x10[4];
    uint8_t MSVQAnim_field_0x14[4];
    uint8_t MSVQAnim_field_0x18[4];
    uint8_t MSVQAnim_field_0x1C[4];
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    void* GetFrameRect(int a1);  // 0x5cd290 -- MSVQAnim::GetFrameRect
    void* QueryInterface(int a1);  // 0x5cecb0 -- MSVQAnim::QueryInterface
    // === SYMBOL-ANCHOR (END) ===
};
// 2 methods in IDA
class Megawealth
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~Megawealth() = default;

    virtual void ProcessTick() {} // 0x5C9430
    virtual void QueryInterface() {} // 0x5C9440

    uint8_t Megawealth_field_0x04[4];
};
// 1 methods in IDA
class Miles
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~Miles() = default;

    virtual void DriverGet() {} // 0x753C70

};
// 2 methods in IDA
class MiniMap
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~MiniMap() = default;

    virtual void Render() {} // 0x641140
    virtual void SavePreviewToINI() {} // 0x6418B0

    uint8_t MiniMap_field_0x04[4];
};
// 6 methods in IDA
class MovieClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~MovieClass() = default;

    virtual void ReadConfig() {} // 0x5C23B0
    virtual void Create() {} // 0x5C3EC0
    virtual void RenderLoop() {} // 0x759940
    virtual void GetWidth() {} // 0x759F70
    virtual void GetHeight() {} // 0x759F80
    // +1 more virtual methods

    uint8_t MovieClass_field_0x04[4];
    uint8_t MovieClass_field_0x08[4];
    uint8_t MovieClass_field_0x0C[4];
    uint8_t MovieClass_field_0x10[4];
    uint8_t MovieClass_field_0x14[4];
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    int ComputeTime();  // 0x7c3990 -- MovieClass::ComputeTime
    int GetSectionID(int a1);  // 0x49bc80 -- Movie::GetSectionID
    int GetState(int a1);  // 0x49bcc0 -- Movie::GetState
    int SetupScreen(int a1);  // 0x49caf0 -- Movie::SetupScreen
    int GetSection(int a1, int a2);  // 0x49e3b0 -- Movie::GetSection
    int Update();  // 0x7209d0 -- Movie::Update
    int SelectNextBuildableType(int a1);  // 0x720a80 -- Movie::SelectNextBuildableType
    // === SYMBOL-ANCHOR (END) ===
};
// 1 methods in IDA
class MovieContext
{
public:
    virtual ~MovieContext() = default; // 0x5BFF00

    virtual void Cleanup() {} // 0x5BFF00

};
// 1 methods in IDA
class MultiMissionVector
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~MultiMissionVector() = default;

    virtual void Constructor() {} // 0x5EF0B0

};
// 1 methods in IDA
class Multiplay
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~Multiplay() = default;

    virtual void LogToSYNC_NOMPDEBUG() {} // 0x64DEA0

};
// 2 methods in IDA
class NetMessage
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~NetMessage() = default;

    virtual void Pack4() {} // 0x4CB700
    virtual void Pack() {} // 0x4CB830

    uint8_t NetMessage_field_0x04[4];
};
// 6 methods in IDA
class NeuronClass
{
public:
    virtual ~NeuronClass() = default; // 0x43A350

    virtual void NeuronClass() {} // 0x43A350
    virtual void Fire() {} // 0x43A540
    virtual void Update() {} // 0x43A5B0
    virtual void StubReturn60() {} // 0x43A9A0
    virtual void StubReturn56() {} // 0x43A9B0
    // +1 more virtual methods

    uint8_t NeuronClass_field_0x04[4];
    uint8_t NeuronClass_field_0x08[4];
    uint8_t NeuronClass_field_0x0C[4];
    uint8_t NeuronClass_field_0x10[4];
    uint8_t NeuronClass_field_0x14[4];
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    void* Reset(int a1);  // 0x43a9c0 -- NeuronClass::Reset
    // === SYMBOL-ANCHOR (END) ===
};
// 1 methods in IDA
class NullGuard
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~NullGuard() = default;

    virtual void Call() {} // 0x4F3B10

};
// 2 methods in IDA
class ObjectManager
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ObjectManager() = default;

    virtual void InitMessageList() {} // 0x5D3A40
    virtual void CleanupArrays() {} // 0x697840

    uint8_t ObjectManager_field_0x04[4];
};
// 2 methods in IDA
class ObjectPlacement
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ObjectPlacement() = default;

    virtual void CalcPosition() {} // 0x481180
    virtual void CalcPosition_Wrapper() {} // 0x4ACA10

    uint8_t ObjectPlacement_field_0x04[4];
};
// 1 methods in IDA
class ObjectPtr
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ObjectPtr() = default;

    virtual void RegisterForTracking() {} // 0x6CF240

};
// 6 methods in IDA
class ObjectVector
{
public:
    virtual ~ObjectVector() = default;  // 0x40CDC0

    virtual void Release() {} // 0x40CD10
    virtual void ddtor() {} // 0x40CDC0
    virtual void Add() {} // 0x40CDF0
    virtual void Remove() {} // 0x40CE30
    virtual void QueryInterface() {} // 0x40CF30
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
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ObserverClass() = default;

    virtual void FindStartingCell() {} // 0x5D6890

};
// 1 methods in IDA
class OleUninitialize
{
public:
    virtual ~OleUninitialize() = default;

    virtual void 0() {} // 0x7C891A

};
// 1 methods in IDA
class OptionQueue
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~OptionQueue() = default;

    virtual void PushEntry() {} // 0x4F1AA0

};
// 1 methods in IDA
class OreManagerClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~OreManagerClass() = default;

    virtual void AssignMinerToRefinery() {} // 0x71AF20

};
// 1 methods in IDA
class OwnerDrawControl
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~OwnerDrawControl() = default;

    virtual void InitVtable() {} // 0x624130

};
// 3 methods in IDA
class PKStrawClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~PKStrawClass() = default;

    virtual void Initialize() {} // 0x633050
    virtual void RelayBlowfishKey() {} // 0x6330C0
    virtual void SetSource() {} // 0x633110

    uint8_t PKStrawClass_field_0x04[4];
    uint8_t PKStrawClass_field_0x08[4];
};
// 2 methods in IDA
class PacketQueue
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~PacketQueue() = default;

    virtual void ExtractEntry() {} // 0x48B570
    virtual void ReleaseEntry() {} // 0x48B890

    uint8_t PacketQueue_field_0x04[4];
};
// 2 methods in IDA
class Performance
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~Performance() = default;

    virtual void Profile() {} // 0x5355D0
    virtual void MeasureTicks() {} // 0x5CAFC0

    uint8_t Performance_field_0x04[4];
};
// 1 methods in IDA
class PhoneEditor
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~PhoneEditor() = default;

    virtual void PopulateList() {} // 0x631060

};
// 1 methods in IDA
class PingPongBuffer
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~PingPongBuffer() = default;

    virtual void GetWriteOffset() {} // 0x55AF60

};
// 4 methods in IDA
class Pipe
{
public:
    virtual ~Pipe() = default;  // 0x631C80

    virtual void QueryInterface() {} // 0x4AEC80
    virtual void Dtor() {} // 0x631C80
    virtual void SetDelegate() {} // 0x631CC0
    virtual void GetField() {} // 0x7B7D80

    uint8_t Pipe_field_0x04[4];
    uint8_t Pipe_field_0x08[4];
    uint8_t Pipe_field_0x0C[4];
};
// 1 methods in IDA
class PlanManager
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~PlanManager() = default;

    virtual void Notify() {} // 0x63A230

};
// 2 methods in IDA
class PowerBar
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~PowerBar() = default;

    virtual void CalcFill() {} // 0x63F850
    virtual void ComputeFill() {} // 0x63F960

    uint8_t PowerBar_field_0x04[4];
};
// 2 methods in IDA
class PreviewClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~PreviewClass() = default;

    virtual void ReadPreview() {} // 0x641EE0
    virtual void RenderMapPreview() {} // 0x689D30

    uint8_t PreviewClass_field_0x04[4];
};
// 1 methods in IDA
class PriQueue
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~PriQueue() = default;

    virtual void GetItemPtr() {} // 0x5D4400

};
// 1 methods in IDA
class PrintTimerOnTactical
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~PrintTimerOnTactical() = default;

    virtual void Start() {} // 0x6D4B50

};
// 2 methods in IDA
class PriorityQueue
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~PriorityQueue() = default;

    virtual void Pop() {} // 0x5AC960
    virtual void Add() {} // 0x5D1C20

    uint8_t PriorityQueue_field_0x04[4];
};
// 1 methods in IDA
class ProductionClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ProductionClass() = default;

    virtual void StartTimer() {} // 0x4C9EA0

};
// 1 methods in IDA
class ProductionQueue
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ProductionQueue() = default;

    virtual void CompleteOrCancel() {} // 0x4CA1A0

};
// 1 methods in IDA
class ProjectileTrail
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ProjectileTrail() = default;

    virtual void ComputeRenderData() {} // 0x659AC0

};
// 2 methods in IDA
class Property
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~Property() = default;

    virtual void Set() {} // 0x433C70
    virtual void GetField11() {} // 0x726910

    uint8_t Property_field_0x04[4];
};
// 1 methods in IDA
class PushCommandClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~PushCommandClass() = default;

    virtual void Execute() {} // 0x6D09C0

};
// 1 methods in IDA
class RateScaler
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~RateScaler() = default;

    virtual void Init() {} // 0x4A51F0

};
// 1 methods in IDA
class ReinforcementClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ReinforcementClass() = default;

    virtual void CreateObject() {} // 0x4737F0

};
// 2 methods in IDA
class ResultNode
{
public:
    virtual ~ResultNode() = default; // 0x625AB0

    virtual void Init() {} // 0x4CB890
    virtual void CleanupList() {} // 0x625AB0

    uint8_t ResultNode_field_0x04[4];
};
// 1 methods in IDA
class SHPClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~SHPClass() = default;

    virtual void Load() {} // 0x642C20

};
// 2 methods in IDA
class SafeDelete
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~SafeDelete() = default;

    virtual void Conditional() {} // 0x5C0EB0
    virtual void Ptr() {} // 0x7B7040

    uint8_t SafeDelete_field_0x04[4];
};
// 1 methods in IDA
class Scalar
{
public:
    virtual ~Scalar() = default;

    virtual void Dtor() {}

    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    void* Dtor(int a1);  // 0x5ac340 -- Scalar::Dtor
    // === SYMBOL-ANCHOR (END) ===
};
// 1 methods in IDA
class ScalarDtor
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ScalarDtor() = default;

    virtual void DeleteAndZero() {} // 0x7AD310

};
// 1 methods in IDA
class ScoutVector
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ScoutVector() = default;

    virtual void Construct() {} // 0x510780

};
// 1 methods in IDA
class ScriptActionQueue
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ScriptActionQueue() = default;

    virtual void PushNext() {} // 0x660B80

};
// 1 methods in IDA
class ScriptActionVector
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ScriptActionVector() = default;

    virtual void PushBack() {} // 0x63EB80

};
// 1 methods in IDA
class ScriptQueue
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ScriptQueue() = default;

    virtual void PushEntry() {} // 0x6378B0

};
// 1 methods in IDA
class SerialPort
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~SerialPort() = default;

    virtual void Close() {} // 0x774950

};
// 2 methods in IDA
class ShapeButton
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ShapeButton() = default;

    virtual void SetShape() {} // 0x69DE00
    virtual void Draw() {} // 0x69DEB0

    uint8_t ShapeButton_field_0x04[4];
};
// 3 methods in IDA
class ShapeButtonClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ShapeButtonClass() = default;

    virtual void Init() {} // 0x69DCF0
    virtual void Constructor() {} // 0x69DD30
    virtual void Destructor() {} // 0x69DDC0

    uint8_t ShapeButtonClass_field_0x04[4];
    uint8_t ShapeButtonClass_field_0x08[4];
};
// 1 methods in IDA
class ShapeButtonClass_Destru
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ShapeButtonClass_Destru() = default;

    virtual void QueryInterface() {} // 0x4B57F0

};
// 1 methods in IDA
class Sides
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~Sides() = default;

    virtual void MixFileYuriFiles3() {} // 0x72FBC0

};
// 1 methods in IDA
class SimpleDialogControl
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~SimpleDialogControl() = default;

    virtual void Constructor() {} // 0x624110

};
// 1 methods in IDA
class SlaveControlVector
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~SlaveControlVector() = default;

    virtual void Constructor() {} // 0x6B1AB0

};
// 1 methods in IDA
class SmudgeTypeList
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~SmudgeTypeList() = default;

    virtual void Copy() {} // 0x67C280

};
// 6 methods in IDA
class SmudgeTypeVector
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~SmudgeTypeVector() = default;

    virtual void Release() {} // 0x67AEB0
    virtual void AddSmudge() {} // 0x67AF90
    virtual void Remove() {} // 0x67AFD0
    virtual void Construct() {} // 0x67AFF0
    virtual void Add() {} // 0x67B100
    // +1 more virtual methods

    uint8_t SmudgeTypeVector_field_0x04[4];
    uint8_t SmudgeTypeVector_field_0x08[4];
    uint8_t SmudgeTypeVector_field_0x0C[4];
    uint8_t SmudgeTypeVector_field_0x10[4];
    uint8_t SmudgeTypeVector_field_0x14[4];
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    void* QueryInterface(int a1);  // 0x67c0b0 -- SmudgeTypeVector::QueryInterface
    // === SYMBOL-ANCHOR (END) ===
};
// 9 methods in IDA
class SortedArray
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~SortedArray() = default;

    virtual void GetIndex() {} // 0x42D570
    virtual void Find() {} // 0x52B170
    virtual void BinarySearch2() {} // 0x52B210
    virtual void FindValue() {} // 0x52B430
    virtual void CheckCache() {} // 0x52B600
    // +4 more virtual methods

    uint8_t SortedArray_field_0x04[4];
    uint8_t SortedArray_field_0x08[4];
    uint8_t SortedArray_field_0x0C[4];
    uint8_t SortedArray_field_0x10[4];
    uint8_t SortedArray_field_0x14[4];
    uint8_t SortedArray_field_0x18[4];
    uint8_t SortedArray_field_0x1C[4];
    uint8_t SortedArray_field_0x20[4];
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    int BinarySearch();  // 0x52b620 -- SortedArray::BinarySearch
    int Append(int a1, int a2);  // 0x5387d0 -- SortedArray::Append
    int RemoveByKey(int a1);  // 0x5388a0 -- SortedArray::RemoveByKey
    int FindPair(int a1);  // 0x538980 -- SortedArray::FindPair
    // === SYMBOL-ANCHOR (END) ===
};
// 1 methods in IDA
class SortedStateVector
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~SortedStateVector() = default;

    virtual void BinarySearch() {} // 0x7107E0

};
// 1 methods in IDA
class SortedVector
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~SortedVector() = default;

    virtual void BinarySearch() {} // 0x55F6E0

};
// 2 methods in IDA
class SquadClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~SquadClass() = default;

    virtual void SelectAllMembers() {} // 0x7314C0
    virtual void ProcessMove() {} // 0x731840

    uint8_t SquadClass_field_0x04[4];
};
// 1 methods in IDA
class StartCombo
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~StartCombo() = default;

    virtual void IDToIndex() {} // 0x4E4230

};
// 1 methods in IDA
class StartingTechnoVector
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~StartingTechnoVector() = default;

    virtual void Construct() {} // 0x510690

};
// 1 methods in IDA
class State_WorldDominationTour
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~State_WorldDominationTour() = default;

    virtual void QueryInterface() {} // 0x76F6C0

};
// 6 methods in IDA
class StaticButtonClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~StaticButtonClass() = default;

    virtual void ReleaseBuffer() {} // 0x43AE10
    virtual void SetText() {} // 0x6C6640
    virtual void Draw() {} // 0x6C6680
    virtual void HitTest() {} // 0x6C6740
    virtual void OnClick() {} // 0x6C67F0
    // +1 more virtual methods

    uint8_t StaticButtonClass_field_0x04[4];
    uint8_t StaticButtonClass_field_0x08[4];
    uint8_t StaticButtonClass_field_0x0C[4];
    uint8_t StaticButtonClass_field_0x10[4];
    uint8_t StaticButtonClass_field_0x14[4];
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    void* QueryInterface(int a1);  // 0x6c6880 -- StaticButtonClass::QueryInterface
    // === SYMBOL-ANCHOR (END) ===
};
// 1 methods in IDA
class StaticString
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~StaticString() = default;

    virtual void Factory() {} // 0x7AF2A0

};
// 2 methods in IDA
class Straw
{
public:
    virtual ~Straw() = default;  // 0x6C9850

    virtual void QueryInterface() {} // 0x4AEC10
    virtual void Dtor() {} // 0x6C9850

    uint8_t Straw_field_0x04[4];
};
// 3 methods in IDA
class Subzone
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~Subzone() = default;

    virtual void BuildGraph() {} // 0x581F90
    virtual void Constructor() {} // 0x589100
    virtual void sub_58A500() {} // 0x58A500

    uint8_t Subzone_field_0x04[4];
    uint8_t Subzone_field_0x08[4];
};
// 3 methods in IDA
class SubzoneConnectionVector
{
public:
    virtual ~SubzoneConnectionVector() = default;  // 0x40B070

    virtual void Destruct() {} // 0x40B070
    virtual void ClearAndFree() {} // 0x588D60
    virtual void FindByCoord() {} // 0x589C10

    uint8_t SubzoneConnectionVector_field_0x04[4];
    uint8_t SubzoneConnectionVector_field_0x08[4];
};
// 1 methods in IDA
class SubzoneHashVector
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~SubzoneHashVector() = default;

    virtual void Construct() {} // 0x58B070

};
// 1 methods in IDA
class SubzoneTrackingVector
{
public:
    virtual ~SubzoneTrackingVector() = default;  // 0x58A5B0

    virtual void Destruct() {} // 0x58A5B0

};
// 2 methods in IDA
class SwizzleManager
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~SwizzleManager() = default;

    virtual void SaveLoad() {} // 0x55AAC0
    virtual void ConvertWrapper() {} // 0x6CF230

    uint8_t SwizzleManager_field_0x04[4];
};
// 10 methods in IDA
class SwizzleManagerClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~SwizzleManagerClass() = default;

    virtual void Register() {} // 0x6CF0F0
    virtual void Here_I_Am() {} // 0x6CF2C0
    virtual void ConvertNodes() {} // 0x6CF350
    virtual void Clear() {} // 0x6CF410
    virtual void Process() {} // 0x6CF430
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
    public:  // funcs-move
    // === FUNCS-MOVE (BEGIN) ===
    int Add(int a1, int a2, int a3);  // 0x6cf490
    int AddRef(int a1);  // 0x6cf4b0
    int Release(int a1);  // 0x6cf4c0
    int Lookup(int a1, int a2, int a3, int a4);  // 0x6cf4e0
    int Remove(int a1, int a2, int a3);  // 0x6cf4d0
    // === FUNCS-MOVE (END) ===
};
// 2 methods in IDA
class SymbolTable
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~SymbolTable() = default;

    virtual void Rebuild() {} // 0x6234B0
    virtual void Insert() {} // 0x624530

    uint8_t SymbolTable_field_0x04[4];
};
// 1 methods in IDA
class TAction
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~TAction() = default;

    virtual void CenterOnStartCoords() {} // 0x7315A0

};
// 4 methods in IDA
class TClassFactory_AITriggerTypeClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~TClassFactory_AITriggerTypeClass() = default;

    virtual void AddRef() {} // 0x6C5C40
    virtual void GetClassName() {} // 0x6C5C60
    virtual void GetClassIdentifier() {} // 0x6C5C90
    virtual void GetSize() {} // 0x6C5D10

    uint8_t TClassFactory_AITriggerTypeClass_field_0x04[4];
    uint8_t TClassFactory_AITriggerTypeClass_field_0x08[4];
    uint8_t TClassFactory_AITriggerTypeClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_AircraftClass
{
public:
    virtual ~TClassFactory_AircraftClass() = default;  // 0x6C3710

    virtual void AddRef() {} // 0x6C36C0
    virtual void GetClassName() {} // 0x6C36E0
    virtual void ddtor() {} // 0x6C3710
    virtual void GetSize() {} // 0x6C3790

    uint8_t TClassFactory_AircraftClass_field_0x04[4];
    uint8_t TClassFactory_AircraftClass_field_0x08[4];
    uint8_t TClassFactory_AircraftClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_AircraftTypeClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~TClassFactory_AircraftTypeClass() = default;

    virtual void AddRef() {} // 0x6C2AC0
    virtual void GetClassName() {} // 0x6C2AE0
    virtual void GetClassIdentifier() {} // 0x6C2B10
    virtual void GetSize() {} // 0x6C2B90

    uint8_t TClassFactory_AircraftTypeClass_field_0x04[4];
    uint8_t TClassFactory_AircraftTypeClass_field_0x08[4];
    uint8_t TClassFactory_AircraftTypeClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_AirstrikeClass
{
public:
    virtual ~TClassFactory_AirstrikeClass() = default;  // 0x6C0890

    virtual void AddRef() {} // 0x6C0840
    virtual void GetClassName() {} // 0x6C0860
    virtual void ddtor() {} // 0x6C0890
    virtual void GetSize() {} // 0x6C0910

    uint8_t TClassFactory_AirstrikeClass_field_0x04[4];
    uint8_t TClassFactory_AirstrikeClass_field_0x08[4];
    uint8_t TClassFactory_AirstrikeClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_AlphaShapeClass
{
public:
    virtual ~TClassFactory_AlphaShapeClass() = default;  // 0x6C6110

    virtual void AddRef() {} // 0x6C60C0
    virtual void GetClassName() {} // 0x6C60E0
    virtual void ddtor() {} // 0x6C6110
    virtual void GetSize() {} // 0x6C6190

    uint8_t TClassFactory_AlphaShapeClass_field_0x04[4];
    uint8_t TClassFactory_AlphaShapeClass_field_0x08[4];
    uint8_t TClassFactory_AlphaShapeClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_AnimTypeClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~TClassFactory_AnimTypeClass() = default;

    virtual void AddRef() {} // 0x6C3B40
    virtual void GetClassName() {} // 0x6C3B60
    virtual void GetClassIdentifier() {} // 0x6C3B90
    virtual void GetSize() {} // 0x6C3C10

    uint8_t TClassFactory_AnimTypeClass_field_0x04[4];
    uint8_t TClassFactory_AnimTypeClass_field_0x08[4];
    uint8_t TClassFactory_AnimTypeClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_BombClass
{
public:
    virtual ~TClassFactory_BombClass() = default;  // 0x6C1190

    virtual void AddRef() {} // 0x6C1140
    virtual void GetClassName() {} // 0x6C1160
    virtual void ddtor() {} // 0x6C1190
    virtual void GetSize() {} // 0x6C1210

    uint8_t TClassFactory_BombClass_field_0x04[4];
    uint8_t TClassFactory_BombClass_field_0x08[4];
    uint8_t TClassFactory_BombClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_BuildingClass
{
public:
    virtual ~TClassFactory_BuildingClass() = default;  // 0x6C3590

    virtual void AddRef() {} // 0x6C3540
    virtual void GetClassName() {} // 0x6C3560
    virtual void ddtor() {} // 0x6C3590
    virtual void GetSize() {} // 0x6C3610

    uint8_t TClassFactory_BuildingClass_field_0x04[4];
    uint8_t TClassFactory_BuildingClass_field_0x08[4];
    uint8_t TClassFactory_BuildingClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_BuildingLightClass
{
public:
    virtual ~TClassFactory_BuildingLightClass() = default;  // 0x6C0410

    virtual void AddRef() {} // 0x6C03C0
    virtual void GetClassName() {} // 0x6C03E0
    virtual void ddtor() {} // 0x6C0410
    virtual void GetSize() {} // 0x6C0490

    uint8_t TClassFactory_BuildingLightClass_field_0x04[4];
    uint8_t TClassFactory_BuildingLightClass_field_0x08[4];
    uint8_t TClassFactory_BuildingLightClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_BuildingTypeClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~TClassFactory_BuildingTypeClass() = default;

    virtual void AddRef() {} // 0x6C2940
    virtual void GetClassName() {} // 0x6C2960
    virtual void GetClassIdentifier() {} // 0x6C2990
    virtual void GetSize() {} // 0x6C2A10

    uint8_t TClassFactory_BuildingTypeClass_field_0x04[4];
    uint8_t TClassFactory_BuildingTypeClass_field_0x08[4];
    uint8_t TClassFactory_BuildingTypeClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_BulletTypeClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~TClassFactory_BulletTypeClass() = default;

    virtual void AddRef() {} // 0x6C2DC0
    virtual void GetClassName() {} // 0x6C2DE0
    virtual void GetClassIdentifier() {} // 0x6C2E10
    virtual void GetSize() {} // 0x6C2E90

    uint8_t TClassFactory_BulletTypeClass_field_0x04[4];
    uint8_t TClassFactory_BulletTypeClass_field_0x08[4];
    uint8_t TClassFactory_BulletTypeClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_CaptureManagerClass
{
public:
    virtual ~TClassFactory_CaptureManagerClass() = default;  // 0x6C0D10

    virtual void AddRef() {} // 0x6C0CC0
    virtual void GetClassName() {} // 0x6C0CE0
    virtual void ddtor() {} // 0x6C0D10
    virtual void GetSize() {} // 0x6C0D90

    uint8_t TClassFactory_CaptureManagerClass_field_0x04[4];
    uint8_t TClassFactory_CaptureManagerClass_field_0x08[4];
    uint8_t TClassFactory_CaptureManagerClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_DiskLaserClass
{
public:
    virtual ~TClassFactory_DiskLaserClass() = default;  // 0x6C0E90

    virtual void AddRef() {} // 0x6C0E40
    virtual void GetClassName() {} // 0x6C0E60
    virtual void ddtor() {} // 0x6C0E90
    virtual void GetSize() {} // 0x6C0F10

    uint8_t TClassFactory_DiskLaserClass_field_0x04[4];
    uint8_t TClassFactory_DiskLaserClass_field_0x08[4];
    uint8_t TClassFactory_DiskLaserClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_DriveLocomotionClass
{
public:
    virtual ~TClassFactory_DriveLocomotionClass() = default;  // 0x6C4010

    virtual void AddRef() {} // 0x6C3FC0
    virtual void GetClassName() {} // 0x6C3FE0
    virtual void ddtor() {} // 0x6C4010
    virtual void GetSize() {} // 0x6C4090

    uint8_t TClassFactory_DriveLocomotionClass_field_0x04[4];
    uint8_t TClassFactory_DriveLocomotionClass_field_0x08[4];
    uint8_t TClassFactory_DriveLocomotionClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_DropPodLocomotionClass
{
public:
    virtual ~TClassFactory_DropPodLocomotionClass() = default;  // 0x6C4910

    virtual void AddRef() {} // 0x6C48C0
    virtual void GetClassName() {} // 0x6C48E0
    virtual void ddtor() {} // 0x6C4910
    virtual void GetSize() {} // 0x6C4990

    uint8_t TClassFactory_DropPodLocomotionClass_field_0x04[4];
    uint8_t TClassFactory_DropPodLocomotionClass_field_0x08[4];
    uint8_t TClassFactory_DropPodLocomotionClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_FactoryClass
{
public:
    virtual ~TClassFactory_FactoryClass() = default;  // 0x6C5210

    virtual void AddRef() {} // 0x6C51C0
    virtual void GetClassName() {} // 0x6C51E0
    virtual void ddtor() {} // 0x6C5210
    virtual void GetSize() {} // 0x6C5290

    uint8_t TClassFactory_FactoryClass_field_0x04[4];
    uint8_t TClassFactory_FactoryClass_field_0x08[4];
    uint8_t TClassFactory_FactoryClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_FlyLocomotionClass
{
public:
    virtual ~TClassFactory_FlyLocomotionClass() = default;  // 0x6C4A90

    virtual void AddRef() {} // 0x6C4A40
    virtual void GetClassName() {} // 0x6C4A60
    virtual void ddtor() {} // 0x6C4A90
    virtual void GetSize() {} // 0x6C4B10

    uint8_t TClassFactory_FlyLocomotionClass_field_0x04[4];
    uint8_t TClassFactory_FlyLocomotionClass_field_0x08[4];
    uint8_t TClassFactory_FlyLocomotionClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_FoggedObjectClass
{
public:
    virtual ~TClassFactory_FoggedObjectClass() = default;  // 0x6C5F90

    virtual void AddRef() {} // 0x6C5F40
    virtual void GetClassName() {} // 0x6C5F60
    virtual void ddtor() {} // 0x6C5F90
    virtual void GetSize() {} // 0x6C6010

    uint8_t TClassFactory_FoggedObjectClass_field_0x04[4];
    uint8_t TClassFactory_FoggedObjectClass_field_0x08[4];
    uint8_t TClassFactory_FoggedObjectClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_HouseClass
{
public:
    virtual ~TClassFactory_HouseClass() = default;  // 0x6C3E90

    virtual void AddRef() {} // 0x6C3E40
    virtual void GetClassName() {} // 0x6C3E60
    virtual void ddtor() {} // 0x6C3E90
    virtual void GetSize() {} // 0x6C3F10

    uint8_t TClassFactory_HouseClass_field_0x04[4];
    uint8_t TClassFactory_HouseClass_field_0x08[4];
    uint8_t TClassFactory_HouseClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_HouseTypeClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~TClassFactory_HouseTypeClass() = default;

    virtual void AddRef() {} // 0x6C3CC0
    virtual void GetClassName() {} // 0x6C3CE0
    virtual void GetClassIdentifier() {} // 0x6C3D10
    virtual void GetSize() {} // 0x6C3D90

    uint8_t TClassFactory_HouseTypeClass_field_0x04[4];
    uint8_t TClassFactory_HouseTypeClass_field_0x08[4];
    uint8_t TClassFactory_HouseTypeClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_HoverLocomotionClass
{
public:
    virtual ~TClassFactory_HoverLocomotionClass() = default;  // 0x6C4310

    virtual void AddRef() {} // 0x6C42C0
    virtual void GetClassName() {} // 0x6C42E0
    virtual void ddtor() {} // 0x6C4310
    virtual void GetSize() {} // 0x6C4390

    uint8_t TClassFactory_HoverLocomotionClass_field_0x04[4];
    uint8_t TClassFactory_HoverLocomotionClass_field_0x08[4];
    uint8_t TClassFactory_HoverLocomotionClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_InfantryClass
{
public:
    virtual ~TClassFactory_InfantryClass() = default;  // 0x6C3890

    virtual void AddRef() {} // 0x6C3840
    virtual void GetClassName() {} // 0x6C3860
    virtual void ddtor() {} // 0x6C3890
    virtual void GetSize() {} // 0x6C3910

    uint8_t TClassFactory_InfantryClass_field_0x04[4];
    uint8_t TClassFactory_InfantryClass_field_0x08[4];
    uint8_t TClassFactory_InfantryClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_InfantryTypeClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~TClassFactory_InfantryTypeClass() = default;

    virtual void AddRef() {} // 0x6C2C40
    virtual void GetClassName() {} // 0x6C2C60
    virtual void GetClassIdentifier() {} // 0x6C2C90
    virtual void GetSize() {} // 0x6C2D10

    uint8_t TClassFactory_InfantryTypeClass_field_0x04[4];
    uint8_t TClassFactory_InfantryTypeClass_field_0x08[4];
    uint8_t TClassFactory_InfantryTypeClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_IsometricTileTypeClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~TClassFactory_IsometricTileTypeClass() = default;

    virtual void AddRef() {} // 0x6C2F40
    virtual void GetClassName() {} // 0x6C2F60
    virtual void GetClassIdentifier() {} // 0x6C2F90
    virtual void GetSize() {} // 0x6C3010

    uint8_t TClassFactory_IsometricTileTypeClass_field_0x04[4];
    uint8_t TClassFactory_IsometricTileTypeClass_field_0x08[4];
    uint8_t TClassFactory_IsometricTileTypeClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_JumpjetLocomotionClass
{
public:
    virtual ~TClassFactory_JumpjetLocomotionClass() = default;  // 0x6C4190

    virtual void AddRef() {} // 0x6C4140
    virtual void GetClassName() {} // 0x6C4160
    virtual void ddtor() {} // 0x6C4190
    virtual void GetSize() {} // 0x6C4210

    uint8_t TClassFactory_JumpjetLocomotionClass_field_0x04[4];
    uint8_t TClassFactory_JumpjetLocomotionClass_field_0x08[4];
    uint8_t TClassFactory_JumpjetLocomotionClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_LightSourceClass
{
public:
    virtual ~TClassFactory_LightSourceClass() = default;  // 0x6BFC90

    virtual void AddRef() {} // 0x6BFC40
    virtual void GetClassName() {} // 0x6BFC60
    virtual void ddtor() {} // 0x6BFC90
    virtual void GetSize() {} // 0x6BFD10

    uint8_t TClassFactory_LightSourceClass_field_0x04[4];
    uint8_t TClassFactory_LightSourceClass_field_0x08[4];
    uint8_t TClassFactory_LightSourceClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_NeuronClass
{
public:
    virtual ~TClassFactory_NeuronClass() = default;  // 0x6C5E10

    virtual void AddRef() {} // 0x6C5DC0
    virtual void GetClassName() {} // 0x6C5DE0
    virtual void ddtor() {} // 0x6C5E10
    virtual void GetSize() {} // 0x6C5E90

    uint8_t TClassFactory_NeuronClass_field_0x04[4];
    uint8_t TClassFactory_NeuronClass_field_0x08[4];
    uint8_t TClassFactory_NeuronClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_OverlayTypeClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~TClassFactory_OverlayTypeClass() = default;

    virtual void AddRef() {} // 0x6C30C0
    virtual void GetClassName() {} // 0x6C30E0
    virtual void GetClassIdentifier() {} // 0x6C3110
    virtual void GetSize() {} // 0x6C3190

    uint8_t TClassFactory_OverlayTypeClass_field_0x04[4];
    uint8_t TClassFactory_OverlayTypeClass_field_0x08[4];
    uint8_t TClassFactory_OverlayTypeClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_ParasiteClass
{
public:
    virtual ~TClassFactory_ParasiteClass() = default;  // 0x6C1010

    virtual void AddRef() {} // 0x6C0FC0
    virtual void GetClassName() {} // 0x6C0FE0
    virtual void ddtor() {} // 0x6C1010
    virtual void GetSize() {} // 0x6C1090

    uint8_t TClassFactory_ParasiteClass_field_0x04[4];
    uint8_t TClassFactory_ParasiteClass_field_0x08[4];
    uint8_t TClassFactory_ParasiteClass_field_0x0C[4];
};
// 3 methods in IDA
class TClassFactory_ParticleClass
{
public:
    virtual ~TClassFactory_ParticleClass() = default;  // 0x6C5690

    virtual void GetClassName() {} // 0x6C5660
    virtual void ddtor() {} // 0x6C5690
    virtual void GetSize() {} // 0x6C5710

    uint8_t TClassFactory_ParticleClass_field_0x04[4];
    uint8_t TClassFactory_ParticleClass_field_0x08[4];
};
// 4 methods in IDA
class TClassFactory_ParticleSystemClass
{
public:
    virtual ~TClassFactory_ParticleSystemClass() = default;  // 0x6C5990

    virtual void AddRef() {} // 0x6C5940
    virtual void GetClassName() {} // 0x6C5960
    virtual void ddtor() {} // 0x6C5990
    virtual void GetSize() {} // 0x6C5A10

    uint8_t TClassFactory_ParticleSystemClass_field_0x04[4];
    uint8_t TClassFactory_ParticleSystemClass_field_0x08[4];
    uint8_t TClassFactory_ParticleSystemClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_ParticleSystemTypeClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~TClassFactory_ParticleSystemTypeClass() = default;

    virtual void AddRef() {} // 0x6C5AC0
    virtual void GetClassName() {} // 0x6C5AE0
    virtual void GetClassIdentifier() {} // 0x6C5B10
    virtual void GetSize() {} // 0x6C5B90

    uint8_t TClassFactory_ParticleSystemTypeClass_field_0x04[4];
    uint8_t TClassFactory_ParticleSystemTypeClass_field_0x08[4];
    uint8_t TClassFactory_ParticleSystemTypeClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_ParticleTypeClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~TClassFactory_ParticleTypeClass() = default;

    virtual void AddRef() {} // 0x6C57C0
    virtual void GetClassName() {} // 0x6C57E0
    virtual void GetClassIdentifier() {} // 0x6C5810
    virtual void GetSize() {} // 0x6C5890

    uint8_t TClassFactory_ParticleTypeClass_field_0x04[4];
    uint8_t TClassFactory_ParticleTypeClass_field_0x08[4];
    uint8_t TClassFactory_ParticleTypeClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_RadSiteClass
{
public:
    virtual ~TClassFactory_RadSiteClass() = default;  // 0x6C1310

    virtual void AddRef() {} // 0x6C12C0
    virtual void GetClassName() {} // 0x6C12E0
    virtual void ddtor() {} // 0x6C1310
    virtual void GetSize() {} // 0x6C1390

    uint8_t TClassFactory_RadSiteClass_field_0x04[4];
    uint8_t TClassFactory_RadSiteClass_field_0x08[4];
    uint8_t TClassFactory_RadSiteClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_RocketLocomotionClass
{
public:
    virtual ~TClassFactory_RocketLocomotionClass() = default;  // 0x6C4490

    virtual void AddRef() {} // 0x6C4440
    virtual void GetClassName() {} // 0x6C4460
    virtual void ddtor() {} // 0x6C4490
    virtual void GetSize() {} // 0x6C4510

    uint8_t TClassFactory_RocketLocomotionClass_field_0x04[4];
    uint8_t TClassFactory_RocketLocomotionClass_field_0x08[4];
    uint8_t TClassFactory_RocketLocomotionClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_ScriptClass
{
public:
    virtual ~TClassFactory_ScriptClass() = default;  // 0x6C1D90

    virtual void AddRef() {} // 0x6C1D40
    virtual void GetClassName() {} // 0x6C1D60
    virtual void ddtor() {} // 0x6C1D90
    virtual void GetSize() {} // 0x6C1E10

    uint8_t TClassFactory_ScriptClass_field_0x04[4];
    uint8_t TClassFactory_ScriptClass_field_0x08[4];
    uint8_t TClassFactory_ScriptClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_ScriptTypeClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~TClassFactory_ScriptTypeClass() = default;

    virtual void AddRef() {} // 0x6C1EC0
    virtual void GetClassName() {} // 0x6C1EE0
    virtual void GetClassIdentifier() {} // 0x6C1F10
    virtual void GetSize() {} // 0x6C1F90

    uint8_t TClassFactory_ScriptTypeClass_field_0x04[4];
    uint8_t TClassFactory_ScriptTypeClass_field_0x08[4];
    uint8_t TClassFactory_ScriptTypeClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_ShipLocomotionClass
{
public:
    virtual ~TClassFactory_ShipLocomotionClass() = default;  // 0x6C4F10

    virtual void AddRef() {} // 0x6C4EC0
    virtual void GetClassName() {} // 0x6C4EE0
    virtual void ddtor() {} // 0x6C4F10
    virtual void GetSize() {} // 0x6C4F90

    uint8_t TClassFactory_ShipLocomotionClass_field_0x04[4];
    uint8_t TClassFactory_ShipLocomotionClass_field_0x08[4];
    uint8_t TClassFactory_ShipLocomotionClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_SideClass
{
public:
    virtual ~TClassFactory_SideClass() = default;  // 0x6BFE10

    virtual void AddRef() {} // 0x6BFDC0
    virtual void GetClassName() {} // 0x6BFDE0
    virtual void ddtor() {} // 0x6BFE10
    virtual void GetSize() {} // 0x6BFE90

    uint8_t TClassFactory_SideClass_field_0x04[4];
    uint8_t TClassFactory_SideClass_field_0x08[4];
    uint8_t TClassFactory_SideClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_SlaveManagerClass
{
public:
    virtual ~TClassFactory_SlaveManagerClass() = default;  // 0x6C0B90

    virtual void AddRef() {} // 0x6C0B40
    virtual void GetClassName() {} // 0x6C0B60
    virtual void ddtor() {} // 0x6C0B90
    virtual void GetSize() {} // 0x6C0C10

    uint8_t TClassFactory_SlaveManagerClass_field_0x04[4];
    uint8_t TClassFactory_SlaveManagerClass_field_0x08[4];
    uint8_t TClassFactory_SlaveManagerClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_SmudgeTypeClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~TClassFactory_SmudgeTypeClass() = default;

    virtual void AddRef() {} // 0x6C3240
    virtual void GetClassName() {} // 0x6C3260
    virtual void GetClassIdentifier() {} // 0x6C3290
    virtual void GetSize() {} // 0x6C3310

    uint8_t TClassFactory_SmudgeTypeClass_field_0x04[4];
    uint8_t TClassFactory_SmudgeTypeClass_field_0x08[4];
    uint8_t TClassFactory_SmudgeTypeClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_SpawnManagerClass
{
public:
    virtual ~TClassFactory_SpawnManagerClass() = default;  // 0x6C0A10

    virtual void AddRef() {} // 0x6C09C0
    virtual void GetClassName() {} // 0x6C09E0
    virtual void ddtor() {} // 0x6C0A10
    virtual void GetSize() {} // 0x6C0A90

    uint8_t TClassFactory_SpawnManagerClass_field_0x04[4];
    uint8_t TClassFactory_SpawnManagerClass_field_0x08[4];
    uint8_t TClassFactory_SpawnManagerClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_TActionClass
{
public:
    virtual ~TClassFactory_TActionClass() = default;  // 0x6C1910

    virtual void AddRef() {} // 0x6C18C0
    virtual void GetClassName() {} // 0x6C18E0
    virtual void ddtor() {} // 0x6C1910
    virtual void GetSize() {} // 0x6C1990

    uint8_t TClassFactory_TActionClass_field_0x04[4];
    uint8_t TClassFactory_TActionClass_field_0x08[4];
    uint8_t TClassFactory_TActionClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_TEventClass
{
public:
    virtual ~TClassFactory_TEventClass() = default;  // 0x6C1490

    virtual void AddRef() {} // 0x6C1440
    virtual void GetClassName() {} // 0x6C1460
    virtual void ddtor() {} // 0x6C1490
    virtual void GetSize() {} // 0x6C1510

    uint8_t TClassFactory_TEventClass_field_0x04[4];
    uint8_t TClassFactory_TEventClass_field_0x08[4];
    uint8_t TClassFactory_TEventClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_TagClass
{
public:
    virtual ~TClassFactory_TagClass() = default;  // 0x6C2090

    virtual void AddRef() {} // 0x6C2040
    virtual void GetClassName() {} // 0x6C2060
    virtual void ddtor() {} // 0x6C2090
    virtual void GetSize() {} // 0x6C2110

    uint8_t TClassFactory_TagClass_field_0x04[4];
    uint8_t TClassFactory_TagClass_field_0x08[4];
    uint8_t TClassFactory_TagClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_TagTypeClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~TClassFactory_TagTypeClass() = default;

    virtual void AddRef() {} // 0x6C21C0
    virtual void GetClassName() {} // 0x6C21E0
    virtual void GetClassIdentifier() {} // 0x6C2210
    virtual void GetSize() {} // 0x6C2290

    uint8_t TClassFactory_TagTypeClass_field_0x04[4];
    uint8_t TClassFactory_TagTypeClass_field_0x08[4];
    uint8_t TClassFactory_TagTypeClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_TaskForceClass
{
public:
    virtual ~TClassFactory_TaskForceClass() = default;  // 0x6C2690

    virtual void AddRef() {} // 0x6C2640
    virtual void GetClassName() {} // 0x6C2660
    virtual void ddtor() {} // 0x6C2690
    virtual void GetSize() {} // 0x6C2710

    uint8_t TClassFactory_TaskForceClass_field_0x04[4];
    uint8_t TClassFactory_TaskForceClass_field_0x08[4];
    uint8_t TClassFactory_TaskForceClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_TeamClass
{
public:
    virtual ~TClassFactory_TeamClass() = default;  // 0x6C2390

    virtual void AddRef() {} // 0x6C2340
    virtual void GetClassName() {} // 0x6C2360
    virtual void ddtor() {} // 0x6C2390
    virtual void GetSize() {} // 0x6C2410

    uint8_t TClassFactory_TeamClass_field_0x04[4];
    uint8_t TClassFactory_TeamClass_field_0x08[4];
    uint8_t TClassFactory_TeamClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_TeamTypeClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~TClassFactory_TeamTypeClass() = default;

    virtual void AddRef() {} // 0x6C24C0
    virtual void GetClassName() {} // 0x6C24E0
    virtual void GetClassIdentifier() {} // 0x6C2510
    virtual void GetSize() {} // 0x6C2590

    uint8_t TClassFactory_TeamTypeClass_field_0x04[4];
    uint8_t TClassFactory_TeamTypeClass_field_0x08[4];
    uint8_t TClassFactory_TeamTypeClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_TeleportLocomotionClass
{
public:
    virtual ~TClassFactory_TeleportLocomotionClass() = default;  // 0x6C4C10

    virtual void AddRef() {} // 0x6C4BC0
    virtual void GetClassName() {} // 0x6C4BE0
    virtual void ddtor() {} // 0x6C4C10
    virtual void GetSize() {} // 0x6C4C90

    uint8_t TClassFactory_TeleportLocomotionClass_field_0x04[4];
    uint8_t TClassFactory_TeleportLocomotionClass_field_0x08[4];
    uint8_t TClassFactory_TeleportLocomotionClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_TemporalClass
{
public:
    virtual ~TClassFactory_TemporalClass() = default;  // 0x6C0710

    virtual void AddRef() {} // 0x6C06C0
    virtual void GetClassName() {} // 0x6C06E0
    virtual void ddtor() {} // 0x6C0710
    virtual void GetSize() {} // 0x6C0790

    uint8_t TClassFactory_TemporalClass_field_0x04[4];
    uint8_t TClassFactory_TemporalClass_field_0x08[4];
    uint8_t TClassFactory_TemporalClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_TiberiumClass
{
public:
    virtual ~TClassFactory_TiberiumClass() = default;  // 0x6BFF90

    virtual void AddRef() {} // 0x6BFF40
    virtual void GetClassName() {} // 0x6BFF60
    virtual void ddtor() {} // 0x6BFF90
    virtual void GetSize() {} // 0x6C0010

    uint8_t TClassFactory_TiberiumClass_field_0x04[4];
    uint8_t TClassFactory_TiberiumClass_field_0x08[4];
    uint8_t TClassFactory_TiberiumClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_TriggerClass
{
public:
    virtual ~TClassFactory_TriggerClass() = default;  // 0x6C1A90

    virtual void AddRef() {} // 0x6C1A40
    virtual void GetClassName() {} // 0x6C1A60
    virtual void ddtor() {} // 0x6C1A90
    virtual void GetSize() {} // 0x6C1B10

    uint8_t TClassFactory_TriggerClass_field_0x04[4];
    uint8_t TClassFactory_TriggerClass_field_0x08[4];
    uint8_t TClassFactory_TriggerClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_TriggerTypeClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~TClassFactory_TriggerTypeClass() = default;

    virtual void AddRef() {} // 0x6C1BC0
    virtual void GetClassName() {} // 0x6C1BE0
    virtual void GetClassIdentifier() {} // 0x6C1C10
    virtual void GetSize() {} // 0x6C1C90

    uint8_t TClassFactory_TriggerTypeClass_field_0x04[4];
    uint8_t TClassFactory_TriggerTypeClass_field_0x08[4];
    uint8_t TClassFactory_TriggerTypeClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_TunnelLocomotionClass
{
public:
    virtual ~TClassFactory_TunnelLocomotionClass() = default;  // 0x6C4610

    virtual void AddRef() {} // 0x6C45C0
    virtual void GetClassName() {} // 0x6C45E0
    virtual void ddtor() {} // 0x6C4610
    virtual void GetSize() {} // 0x6C4690

    uint8_t TClassFactory_TunnelLocomotionClass_field_0x04[4];
    uint8_t TClassFactory_TunnelLocomotionClass_field_0x08[4];
    uint8_t TClassFactory_TunnelLocomotionClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_UnitClass
{
public:
    virtual ~TClassFactory_UnitClass() = default;  // 0x6C3410

    virtual void AddRef() {} // 0x6C33C0
    virtual void GetClassName() {} // 0x6C33E0
    virtual void ddtor() {} // 0x6C3410
    virtual void GetSize() {} // 0x6C3490

    uint8_t TClassFactory_UnitClass_field_0x04[4];
    uint8_t TClassFactory_UnitClass_field_0x08[4];
    uint8_t TClassFactory_UnitClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_UnitTypeClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~TClassFactory_UnitTypeClass() = default;

    virtual void AddRef() {} // 0x6C27C0
    virtual void GetClassName() {} // 0x6C27E0
    virtual void GetClassIdentifier() {} // 0x6C2810
    virtual void GetSize() {} // 0x6C2890

    uint8_t TClassFactory_UnitTypeClass_field_0x04[4];
    uint8_t TClassFactory_UnitTypeClass_field_0x08[4];
    uint8_t TClassFactory_UnitTypeClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_VoxelAnimClass
{
public:
    virtual ~TClassFactory_VoxelAnimClass() = default;  // 0x6C1790

    virtual void AddRef() {} // 0x6C1740
    virtual void GetClassName() {} // 0x6C1760
    virtual void ddtor() {} // 0x6C1790
    virtual void GetSize() {} // 0x6C1810

    uint8_t TClassFactory_VoxelAnimClass_field_0x04[4];
    uint8_t TClassFactory_VoxelAnimClass_field_0x08[4];
    uint8_t TClassFactory_VoxelAnimClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_VoxelAnimTypeClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~TClassFactory_VoxelAnimTypeClass() = default;

    virtual void AddRef() {} // 0x6C15C0
    virtual void GetClassName() {} // 0x6C15E0
    virtual void GetClassIdentifier() {} // 0x6C1610
    virtual void GetSize() {} // 0x6C1690

    uint8_t TClassFactory_VoxelAnimTypeClass_field_0x04[4];
    uint8_t TClassFactory_VoxelAnimTypeClass_field_0x08[4];
    uint8_t TClassFactory_VoxelAnimTypeClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_WalkLocomotionClass
{
public:
    virtual ~TClassFactory_WalkLocomotionClass() = default;  // 0x6C4790

    virtual void AddRef() {} // 0x6C4740
    virtual void GetClassName() {} // 0x6C4760
    virtual void ddtor() {} // 0x6C4790
    virtual void GetSize() {} // 0x6C4810

    uint8_t TClassFactory_WalkLocomotionClass_field_0x04[4];
    uint8_t TClassFactory_WalkLocomotionClass_field_0x08[4];
    uint8_t TClassFactory_WalkLocomotionClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_WarheadTypeClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~TClassFactory_WarheadTypeClass() = default;

    virtual void AddRef() {} // 0x6C5340
    virtual void GetClassName() {} // 0x6C5360
    virtual void GetClassIdentifier() {} // 0x6C5390
    virtual void GetSize() {} // 0x6C5410

    uint8_t TClassFactory_WarheadTypeClass_field_0x04[4];
    uint8_t TClassFactory_WarheadTypeClass_field_0x08[4];
    uint8_t TClassFactory_WarheadTypeClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_WaypointPathClass
{
public:
    virtual ~TClassFactory_WaypointPathClass() = default;  // 0x6C0590

    virtual void AddRef() {} // 0x6C0540
    virtual void GetClassName() {} // 0x6C0560
    virtual void ddtor() {} // 0x6C0590
    virtual void GetSize() {} // 0x6C0610

    uint8_t TClassFactory_WaypointPathClass_field_0x04[4];
    uint8_t TClassFactory_WaypointPathClass_field_0x08[4];
    uint8_t TClassFactory_WaypointPathClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_WeaponTypeClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~TClassFactory_WeaponTypeClass() = default;

    virtual void AddRef() {} // 0x6C54C0
    virtual void GetClassName() {} // 0x6C54E0
    virtual void GetClassIdentifier() {} // 0x6C5510
    virtual void GetSize() {} // 0x6C5590

    uint8_t TClassFactory_WeaponTypeClass_field_0x04[4];
    uint8_t TClassFactory_WeaponTypeClass_field_0x08[4];
    uint8_t TClassFactory_WeaponTypeClass_field_0x0C[4];
};
// 1 methods in IDA
class TagClassVector
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~TagClassVector() = default;

    virtual void Construct() {} // 0x510640

};
// 1 methods in IDA
class Targeting
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~Targeting() = default;

    virtual void Readd() {} // 0x4A9720

};
// 1 methods in IDA
class TaskManager
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~TaskManager() = default;

    virtual void Update() {} // 0x6B7100

};
// 2 methods in IDA
class TechnoTypeVector
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~TechnoTypeVector() = default;

    virtual void Constructor() {} // 0x4CABF0
    virtual void Construct() {} // 0x68C200

    uint8_t TechnoTypeVector_field_0x04[4];
};
// 1 methods in IDA
class TeknoClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~TeknoClass() = default;

    virtual void GetType() {} // 0x6E4DE0

};
// 1 methods in IDA
class TerrainTypeVector
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~TerrainTypeVector() = default;

    virtual void Construct() {} // 0x67B370

};
// 1 methods in IDA
class Territory_WorldDominationTour
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~Territory_WorldDominationTour() = default;

    virtual void QueryInterface() {} // 0x770020

};
// 1 methods in IDA
class TheatreClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~TheatreClass() = default;

    virtual void InitView() {} // 0x545000

};
// 1 methods in IDA
class TileData
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~TileData() = default;

    virtual void Constructor() {} // 0x58BDC0

};
// 1 methods in IDA
class TileNode
{
public:
    virtual ~TileNode() = default; // 0x58C070

    virtual void Cleanup() {} // 0x58C070

};
// 4 methods in IDA
class TileSystem
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~TileSystem() = default;

    virtual void LookupMapTile() {} // 0x58D0A0
    virtual void BuildNodes() {} // 0x58D620
    virtual void AnalyzeTileConnectivity() {} // 0x58E5D0
    virtual void Constructor() {} // 0x5AD740

    uint8_t TileSystem_field_0x04[4];
    uint8_t TileSystem_field_0x08[4];
    uint8_t TileSystem_field_0x0C[4];
};
// 1 methods in IDA
class TileVector
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~TileVector() = default;

    virtual void PushBack() {} // 0x589C50

};
// 2 methods in IDA
class ToggleClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ToggleClass() = default;

    virtual void QueryInterface() {} // 0x4B5810
    virtual void Construct() {} // 0x723E60

    uint8_t ToggleClass_field_0x04[4];
};
// 1 methods in IDA
class ToggleRepairModeCommandClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ToggleRepairModeCommandClass() = default;

    virtual void Execute() {} // 0x536FA0

};
// 1 methods in IDA
class Triple
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~Triple() = default;

    virtual void Set() {} // 0x43A0B0

};
// 1 methods in IDA
class UnitTypeList
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~UnitTypeList() = default;

    virtual void Constructor() {} // 0x67A740

};
// 7 methods in IDA
class UnitTypeVector
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~UnitTypeVector() = default;

    virtual void QueryInterface() {} // 0x512B30
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
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    void* ConstructUnitTypeVectorClass(int a1, int a2);  // 0x513940 -- UnitTypeVector::ConstructUnitTypeVectorClass
    void* Construct2(int a1, int a2);  // 0x5d8950 -- UnitTypeVector::Construct2
    // === SYMBOL-ANCHOR (END) ===
};
// 1 methods in IDA
class VQAClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~VQAClass() = default;

    virtual void AdvanceFrame() {} // 0x759C30

};
// 2 methods in IDA
class VeinholeClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~VeinholeClass() = default;

    virtual void SelectGrowthPosition() {} // 0x74DC00
    virtual void GetState() {} // 0x74FFF0

    uint8_t VeinholeClass_field_0x04[4];
};
// 11 methods in IDA
class VeinholeMonsterClass
{
public:
    virtual ~VeinholeMonsterClass() = default;  // 0x74F2D0

    virtual void Construct() {} // 0x74C420
    virtual void Constructor() {} // 0x74C5B0
    virtual void UpdateGrowth() {} // 0x74CE50
    virtual void ProcessExpansion() {} // 0x74D5D0
    virtual void PlaceGrowth() {} // 0x74E930
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
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    void* SpreadTiberium(int a1);  // 0x74f340 -- VeinholeMonsterClass::SpreadTiberium
    // === SYMBOL-ANCHOR (END) ===
    public:  // funcs-move
    // === FUNCS-MOVE (BEGIN) ===
    int Update(int a1, int a2, int a3);  // 0x74eee0
    int CheckStatus();  // 0x74ef00
    // === FUNCS-MOVE (END) ===
};
// 1 methods in IDA
class VersionInfo
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~VersionInfo() = default;

    virtual void Read() {} // 0x74F760

};
// 2 methods in IDA
class Viewport
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~Viewport() = default;

    virtual void ProcessScroll() {} // 0x692B60
    virtual void Clear() {} // 0x753E00

    uint8_t Viewport_field_0x04[4];
};
// 9 methods in IDA
class VtableStub
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~VtableStub() = default;

    virtual void Push_407510() {} // 0x407510
    virtual void 425270() {} // 0x425270
    virtual void 477740() {} // 0x477740
    virtual void 5175D0() {} // 0x5175D0
    virtual void 55CBF0() {} // 0x55CBF0
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
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~WDTClass() = default;

    virtual void GetCellType() {} // 0x76F600
    virtual void CountCellType() {} // 0x76F670

    uint8_t WDTClass_field_0x04[4];
};
// 4 methods in IDA
class WDTGame
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~WDTGame() = default;

    virtual void ToggleTeamMode() {} // 0x7693F0
    virtual void ProcessTerritorySelection() {} // 0x76D180
    virtual void ReviewHistory() {} // 0x76E4F0
    virtual void Constructor() {} // 0x76F030

    uint8_t WDTGame_field_0x04[4];
    uint8_t WDTGame_field_0x08[4];
    uint8_t WDTGame_field_0x0C[4];
};
// 2 methods in IDA
class WDTObject
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~WDTObject() = default;

    virtual void GetSize() {} // 0x76BFA0
    virtual void GetAndClearFlag() {} // 0x76FF30

    uint8_t WDTObject_field_0x04[4];
};
// 2 methods in IDA
class WDTState
{
public:
    virtual ~WDTState() = default; // 0x76AFC0

    virtual void Constructor_WDTState() {} // 0x76AFC0
    virtual void QueryInterface() {} // 0x76B6F0

    uint8_t WDTState_field_0x04[4];
};
// 2 methods in IDA
class WDTSurface
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~WDTSurface() = default;

    virtual void ToggleState() {} // 0x7693A0
    virtual void PointInRect() {} // 0x769440

    uint8_t WDTSurface_field_0x04[4];
};
// 2 methods in IDA
class WString
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~WString() = default;

    virtual void Append() {} // 0x7B6970
    virtual void TrimRight() {} // 0x7B6F40

    uint8_t WString_field_0x04[4];
};
// 1 methods in IDA
class WaypointPath
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~WaypointPath() = default;

    virtual void Constructor() {} // 0x5A9A70

};
// 1 methods in IDA
class WideChar
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~WideChar() = default;

    virtual void ToLong() {} // 0x7CBB76

};
// 1 methods in IDA
class WinAPI
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~WinAPI() = default;

    virtual void Wrapper() {} // 0x7DC720

};
// 15 methods in IDA
class WinModemClass
{
public:
    virtual ~WinModemClass() = default;  // 0x7754A0

    virtual void Construct() {} // 0x774120
    virtual void AddRef() {} // 0x774410
    virtual void Release() {} // 0x7748A0
    virtual void GetClassIdentifier() {} // 0x7748B0
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
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    bool ReadSerial();  // 0x774980 -- WinModemClass::ReadSerial
    int ReadBytes(int a1, int a2);  // 0x774b30 -- WinModemClass::ReadBytes
    int WriteSerial();  // 0x774c70 -- WinModemClass::WriteSerial
    int LoadTypeData(int a1, int a2, int a3, int a4);  // 0x774cd0 -- WinModemClass::LoadTypeData
    int SaveToINI();  // 0x774f50 -- WinModemClass::SaveToINI
    int Dial(int a1, int a2, int a3, int a4, int a5, int a6, int a7);  // 0x775110 -- WinModemClass::Dial
    int HangUp(int a1);  // 0x7754b0 -- WinModemClass::HangUp
    int LogCommErrors(int a1, int a2, int a3, int a4);  // 0x7754d0 -- WinModemClass::LogCommErrors
    void* QueryInterface(int a1);  // 0x775610 -- WinModemClass::QueryInterface
    // === SYMBOL-ANCHOR (END) ===
};
// 1 methods in IDA
class WonlineStringDialogControl
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~WonlineStringDialogControl() = default;

    virtual void QueryInterface() {} // 0x7AC5D0

};
// 1 methods in IDA
class WordVector
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~WordVector() = default;

    virtual void Constructor() {} // 0x42DD60

};
// 1 methods in IDA
class World
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~World() = default;

    virtual void ToScreen() {} // 0x6D2070

};
// 1 methods in IDA
class WorldDomination
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~WorldDomination() = default;

    virtual void SetupTerritoryNodes() {} // 0x7680C0

};
// 1 methods in IDA
class WorldDominationTour
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~WorldDominationTour() = default;

    virtual void Territory::Constructor() {} // 0x76F970

};
// 1 methods in IDA
class ZBuffer
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~ZBuffer() = default;

    virtual void RenderSprite() {} // 0x53D580

};
// 1 methods in IDA
class ZoneConnectionVector
{
public:
    virtual ~ZoneConnectionVector() = default;  // 0x58A3D0

    virtual void Destruct() {} // 0x58A3D0

};

} // namespace gamemd
