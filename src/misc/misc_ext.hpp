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
    static int32_t GetWarheadSound(int32_t type);
    // IDA 0x452820 area
    static void sub_452820();
    // IDA 0x452820 area
    static void ApplyDamage(ObjectClass* target, int32_t damage, HouseClass* owner);
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
    static void ApplyScatter(const CoordStruct& center, int32_t damage, int32_t radius, HouseClass* owner);
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
    void Read();
    // IDA 0x48B2A0 area
    void Write();
    // IDA 0x48B2A0 area
    void Seek();
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
    static void DestroyTerrain(const CellStruct& cell);

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
    static void GetTransform(float* matrix, int32_t facing);
    // IDA 0x48B2A0 area
    static void LoadVoxelTurretAndBarrel(TechnoClass* tech);

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
    static void ProcessLanding();

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
    static void MissionStateMachine(FootClass* carryall);

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
    static int32_t GetSpeed(TechnoClass* tech);

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
    static void RemoveItem(int32_t index);

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
    static void Background_Setup(DSurface* surface);

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
    static const wchar_t* GetTeamString(int32_t index);

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
    static void CreateMCV(HouseClass* house);

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
    static void InitTables();

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
    static void ProcessCellVisibility();

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
    static void ProcessAll();

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
    static void Init();

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
    virtual ULONG __stdcall AddRef() override;
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
    void* GetNext();
    // IDA 0x48B2A0 area
    void* Find(int32_t index);
    // IDA 0x48B2A0 area
    void* FindObject(ObjectClass* obj);
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
    static void Identity(float* m);
    // IDA 0x5AE860 area
    static void Translate(float* m, float x, float y, float z);
    // IDA 0x5AE860 area
    static CellStruct TransformCell(const float* m, const CellStruct& cell);

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
    int32_t AddRef();
    int32_t Release();
    bool StubReturnFalse();
    void Process();
    void Clear();

    int32_t     m_RefCount;     // 0x00
    int32_t     InputManager_ProcessEvents_field_04;       // 0x04
    int32_t     InputManager_ProcessEvents_field_08;       // 0x08
};

} // namespace gamemd
