#pragma once
#include "core/cellcoord.hpp"  // G42.36: CellCoord single authority

#include <cstdint>
#include <windows.h>
#include <unknwn.h>   // IUnknown
#include <objidl.h>   // IClassFactory
#include "core/enums.hpp"
#include "core/math.hpp"

namespace ra2 { namespace game { class AbstractClass; } }  // G42.35: sig-sync 参数前置 (e4 头同源别名)
namespace gamemd
{
using ::ra2::game::AbstractClass;  // G42.35: gamemd 侧别名 (与 e4 头 using 同实体, 幂等)
// G42 fix_fwd_type_supply: forward declarations for def-param types pulled in
// by the sig-sync wave (kinds matched to existing tree declarations).
class CCINIClass;
class ControlClass;
struct MouseClass;
class INIClass;
class BombClass;
// (class VectorClass; removed G42.35: tree carrier is template in core/vector.hpp, non-template fwd = C2989)
struct TechnoTypeClass;
class SwizzleManagerClass;
class Straw;
class MapClass;
struct DynamicVector;
struct AnimClass;
class rc_ptr_base;
class TeamTypeClass;
struct Tactical;
class SliderClass;
class Selection_WorldDominationTour;
class RandomStruct;
class PowerClass;
class Pipe;
struct ObjectTypeClass;
struct MSShapeAnim;
class MPCooperative;
struct InfantryClass;
class HashTable;
class DropListClass;
class DialogControl_OwnerDraw;
struct Color;
struct CampaignScore;
class BinkMovie;
class MultiplayerGameMode;  // G42 fix_fwd_type_supply (AddToList param)
class PriorityQueue;  // G42.35 ui-session 补: C2061 unblock (0x7681E0 sig-sync 参数, 定义在 3459)
template <typename T> class VectorClass;  // G42.35: 模板前置 (core/vector.hpp 载体; sig-sync 参数用)

} // namespace gamemd (bridge re-own, G42.29h)
namespace ra2 { namespace game { class ObjectClass; } }
namespace gamemd {
#ifndef GAMEMD_USING_ObjectClass
#define GAMEMD_USING_ObjectClass
using ::ra2::game::ObjectClass;
#endif
class HouseClass;
} // namespace gamemd (bridge re-own, G42.29h)
namespace ra2 { namespace game { class TechnoClass; } }
namespace gamemd {
#ifndef GAMEMD_USING_TechnoClass
#define GAMEMD_USING_TechnoClass
using ::ra2::game::TechnoClass;
#endif
} // namespace gamemd (bridge re-own, G42.29h)
namespace ra2 { namespace game { class FootClass; } }
namespace gamemd {
#ifndef GAMEMD_USING_FootClass
#define GAMEMD_USING_FootClass
using ::ra2::game::FootClass;
#endif
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
     void ApplyDamage(ObjectClass* target, int32_t damage, HouseClass* owner);  // 0x4690B0
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

// Locomotor class removed 2026-09-07: fabricated stub class (duplicate of the
// one formerly in movement_ext.hpp). Its single method 0x426630 is
// CDTimerClass::TimeRemaining — see locomotion.hpp.

// ============================================================================
// Explosion — explosion utilities (1 method)
// IDA: RemoveItem
// ============================================================================
class Explosion
{
public:
    // IDA 0x48B2A0 area
     char RemoveItem(int32_t index);  // 0x53DDA0

    int32_t     Explosion_field_00;       // 0x00
};

// ============================================================================
// BINK — BINK video utilities (1 method)
// IDA: Background_Setup
// ============================================================================
// CSP: BINK matched via T1
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
     void InitTables();  // 0x47B3A0

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
     void ProcessCellVisibility();  // 0x654490

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
     bool Compare(const ::GUID& a, const ::GUID& b);

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
// CSP: TriggerActionQueue matched via T1
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
     int Init();  // 0x75A790

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
    virtual ~TClassFactory_MechLocomotionClass();  // 0x6C4D90

    // IClassFactory
    // wrapper: delegates to TClassFactory_MechLocomotionClass::ddtor at 0x6C4D90
    virtual HRESULT __stdcall CreateInstance(IUnknown* pUnkOuter, const GUID& riid, void** ppv) override;
    virtual HRESULT __stdcall LockServer(BOOL fLock) override;  // 0x767010
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
// CSP: Matrix3x4 matched via T1
class Matrix3x4
{
public:
    // IDA 0x5AE860
     void Identity(float* m);  // 0x5AE860
    // IDA 0x5AE860 area
     int Translate(float* m, float x, float y, float z);  // 0x5AE980
    // IDA 0x5AE860 area
     CellStruct TransformCell(const float* m, const CellStruct& cell);  // 0x6D2360

    float       m_Data[12];     // 0x00 (3 rows × 4 columns)
};

// ============================================================================
// InputManager_ProcessEvents — input event processing (5 methods)
// IDA: AddRef, Release, StubReturnFalse
// ============================================================================
#ifndef GAMEMD_E4_InputManager_ProcessEvents  // G42.33 b3: e4 flat carrier wins in opt-in TUs
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
#endif  // GAMEMD_E4_InputManager_ProcessEvents


// === Batch-generated MISSING class stubs ===

// 16 methods in IDA
class AITriggerTypeClass
{
public:
    virtual ~AITriggerTypeClass() = default;  // 0x41FFF0

virtual int GetClassIdentifier(unsigned int *a2);  // 0x41E500 (G42 sig-sync: IDA int(__stdcall)(DWORD*), cpp def truth)
    virtual int LoadTypeData(int a2); // 0x41E540 (G42 sig-sync: IDA 1-arg; def quarantined to stub in misc_ext.cpp)
    virtual int SaveToINI(int *a2, int a3); // 0x41E5C0 (G42 sig-sync: IDA 2-arg)
    virtual int ProcessPower(int *a2);
    virtual bool EnemyHouseOwns(int a2, _DWORD *a3);
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
    unsigned int q098;  // 0x98
    unsigned int q09C;  // 0x9C
    unsigned int q0A0;  // 0xA0
    unsigned int q0A8;  // 0xA8
    unsigned int q0AC;  // 0xAC
    unsigned int q0B8;  // 0xB8
    unsigned int q0BC;  // 0xBC
    unsigned int q0C0;  // 0xC0
    unsigned int q0C4;  // 0xC4
    unsigned int q0C8;  // 0xC8
    unsigned int q0CC;  // 0xCC
    unsigned int q0D0;  // 0xD0
    unsigned int q0E4;  // 0xE4
    unsigned int q0E8;  // 0xE8
    unsigned char u8_D1;  // 0xD1
    unsigned char u8_D2;  // 0xD2
    unsigned char u8_D3;  // 0xD3
    unsigned char u8_D4;  // 0xD4
    unsigned int q0144;  // 0x144
    unsigned int q0147;  // 0x147
    unsigned int q0148;  // 0x148
};
// 7 methods in IDA
// CSP: AnimFile matched via T1
#ifndef GAMEMD_ANIMFILE_DECLARED  // G42 first-wins (AnimFile_e4.hpp twin -- misc TUs take tree def)
#define GAMEMD_ANIMFILE_DECLARED
class AnimFile
{
public:
    virtual ~AnimFile() = default;  // 0x426A90
    char AddRef(void * a1, void * a2); // 0x426750 (G42 sig-sync: def)
    virtual void Release(); // 0x426790
    virtual int Load(); // 0x426A50 (G42 sig-sync: IDA int(this))
    virtual int ddtor(int a2); // 0x426A90 (G42 sig-sync: IDA int(this,int))
    virtual int Check(int a2); // 0x426DD0 (G42 sig-sync: IDA int(this,int))
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
#endif  // GAMEMD_ANIMFILE_DECLARED
// 1 methods in IDA
class AnimSequence
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~AnimSequence() = default;

    virtual void Parse(); // 0x523D00

};
// 1 methods in IDA
// CSP: AnimTypeList matched via T1
class AnimTypeList
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~AnimTypeList() = default;

    virtual int Constructor(); // 0x67A470

};
// 1 methods in IDA
class AnimTypeVector
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~AnimTypeVector() = default;

    virtual int Constructor(int a2, int a3); // 0x525680 (G42 sig-sync: IDA (this,int,int); def quarantined in misc_ext.cpp)

};
// 3 methods in IDA
class CSFClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~CSFClass() = default;

    virtual void CopyString(); // 0x595710
    virtual void LoadMissingStrings(); // 0x6977C0
    virtual void LoadFile(); // 0x7346A0

    uint8_t CSFClass_field_0x04[4];
    uint8_t CSFClass_field_0x08[4];
};
// 1 methods in IDA
#ifndef GAMEMD_CAPTUREMANAGER_DECLARED  // G42.34: first-wins (game_systems.hpp twin)
#define GAMEMD_CAPTUREMANAGER_DECLARED
class CaptureManager
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~CaptureManager() = default;

    virtual void FreeAll(); // 0x472140

};
#endif
// 1 methods in IDA
class ChronoScreen
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ChronoScreen() = default;

    virtual int IsActive(); // 0x53BAD0 (G42 sig-sync: IDA int(this))

};
// 8 methods in IDA
class CoopCampaignVector
{
public:
    virtual ~CoopCampaignVector() = default;  // 0x5C56E0

    virtual int Seek(int a2); // 0x5C5120 (G42 sig-sync: IDA int(this,int); def quarantined)
    virtual char AddRef(int a2); // 0x5C55F0 (G42 sig-sync: IDA char(this,int); def quarantined)
    virtual char Release(int a2, unsigned int *a3); // 0x5C5630 (G42 sig-sync: IDA char(this,int,DWORD*); def quarantined)
    virtual void ddtor(); // 0x5C56E0
    virtual int Read(unsigned int *a2); // 0x5C5710 (G42 sig-sync: IDA int(this,DWORD*); def quarantined)
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
// CSP: Coord2D matched via T1
class Coord2D
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~Coord2D() = default;
    unsigned int* Add(unsigned int *a2, unsigned int *a3); // 0x437F10 (G42 sig-sync: def)
    int* Sub(int *a2, unsigned int *a3); // 0x487F20 (G42 sig-sync: def)

    uint32_t Coord2D_field_0x04; // G42: scalar per IDA til + Coord2D_e4.hpp (array form broke Add/Sub arithmetic)
};
// 3 methods in IDA
// CSP: Coord3D matched via T1
class Coord3D
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~Coord3D() = default;
    unsigned int* Set(int a2, int a3, int a4); // 0x437090 (G42 sig-sync: def)
    virtual int Equals(unsigned int *a2); // 0x459F60 (G42 sig-sync: IDA int(this,_DWORD*))
    unsigned int* Add(unsigned int *a2, unsigned int *a3); // 0x6CE240 (G42 sig-sync: def)

    uint32_t Coord3D_field_0x04; // G42: scalar per IDA til (array form broke Add/Equals arithmetic)
    uint32_t Coord3D_field_0x08; // G42: scalar per IDA til
};
// 1 methods in IDA
// CSP: CoordBounds matched via T1
class CoordBounds
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~CoordBounds() = default;
    long long Constructor(int a2, int a3); // 0x403870 (G42 sig-sync: def)

};
// 1 methods in IDA
// CSP: CoordList matched via T1
class CoordList
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~CoordList() = default;
    int16_t* GetBounds(int16_t *a1, int16_t *a2); // 0x4A94F0 (G42 sig-sync: def)

};
// 1 methods in IDA
class CoordinateTables
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~CoordinateTables() = default;

    virtual int Init(); // 0x561910

};
// 1 methods in IDA
// CSP: DamageAnimClass matched via T1
class DamageAnimClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~DamageAnimClass() = default;
    void* Constructor(int a2, int *a3, int a4); // 0x7493B0 (G42 sig-sync: def)

};
// 8 methods in IDA
class EMPulseClass
{
public:
    virtual ~EMPulseClass() = default;  // 0x4C59F0

    virtual int IterateCellsInRadius(); // 0x4C58C0 (G42 sig-sync: IDA int(this); def quarantined)
    int Stat(unsigned int * a2); // 0x4C59A0 (G42 sig-sync: def)
    virtual int ddtor(unsigned int *a2); // 0x4C59F0 (G42 sig-sync: IDA int(this,_DWORD*))
    virtual int Write(int a2); // 0x4C5A30 (G42 sig-sync: IDA int(this,int); def quarantined)
    virtual int Seek(int *a2, int a3); // 0x4C5A80 (G42 sig-sync: IDA int(this,int*,int); def quarantined)
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
// CSP: ExplosionClass matched via T1
class ExplosionClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ExplosionClass() = default;

    virtual void ProcessFrame(); // 0x53CBE0

};
// 4 methods in IDA
// CSP: FileExtension matched via T1
class FileExtension
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~FileExtension() = default;

    virtual int MapHandler(); // 0x6263D0 (G42 sig-sync: IDA int(this); def quarantined)
    unsigned int* Constructor(int a2, int a3); // 0x628240 (G42 sig-sync: def)
    virtual char CheckExtensionMatch(int a2); // 0x628D10 (G42 sig-sync: IDA char(this,int); def quarantined)
    int Check(const char * a2, unsigned int * a3); // 0x628DD0 (G42 sig-sync: def)

    uint8_t FileExtension_field_0x04[4];
    uint8_t FileExtension_field_0x08[4];
    uint8_t FileExtension_field_0x0C[4];
};
// 4 methods in IDA
// CSP: FileFind matched via T1
class FileFind
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~FileFind() = default;

    virtual int Next(); // 0x47B0C0 (G42 sig-sync: IDA int(this), this=filename buffer)
    virtual int CloseHandle(); // 0x47B130 (G42 sig-sync: def)
    virtual void Close(); // 0x5BBED0
    virtual void ReleaseAllHandles(); // 0x5BBEE0

    uint32_t FileFind_field_0x04; // G42: scalar per IDA til (array form broke ReleaseAllHandles)
    uint32_t FileFind_field_0x08; // G42: scalar per IDA til
    uint32_t FileFind_field_0x0C; // G42: scalar per IDA til
    uint32_t q004;   // 0x10 (G42 add: ReleaseAllHandles walks it)
    uint32_t u32_14; // 0x14 (G42 add)
    uint32_t u32_18; // 0x18 (G42 add)
};
// 4 methods in IDA
class FilePipe
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~FilePipe() = default;
    void* QueryInterface(char a2); // 0x477790 (G42 sig-sync: def)
    virtual int Destructor(); // 0x7BA420 (G42 sig-sync: IDA int(this); def quarantined)
    virtual int Release(); // 0x7BA450 (G42 sig-sync: IDA int(this); def quarantined)
    virtual int Read(int a2, int a3); // 0x7BA480 (G42 sig-sync: IDA int(this,int,int); def quarantined)

    uint8_t FilePipe_field_0x04[4];
    uint8_t FilePipe_field_0x08[4];
    uint8_t FilePipe_field_0x0C[4];
};
// 2 methods in IDA
// CSP: FileStraw matched via T1
class FileStraw
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~FileStraw() = default;

    virtual int Open(int a2, char a3); // 0x525A10 (G42 sig-sync: IDA int(this,int,char); def quarantined)
    virtual int Destructor(); // 0x7BA590 (G42 sig-sync: IDA int(this); def quarantined)

    uint8_t FileStraw_field_0x04[4];
};
// 2 methods in IDA
class FileStraw_Destru
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~FileStraw_Destru() = default;
    void* QueryInterface(char a2); // 0x477770 (G42 sig-sync: def)
    virtual int Release(int a2, int a3); // 0x7BA530 (G42 sig-sync; def quarantined)

    uint8_t FileStraw_Destru_field_0x04[4];
};
// 1 methods in IDA
class FileTree
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~FileTree() = default;

    virtual void CleanupAll(); // 0x730100

};
// 1 methods in IDA
// CSP: FileTreeNode matched via T1
class FileTreeNode
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~FileTreeNode() = default;

    virtual int Destroy(); // 0x69E500

};
// 8 methods in IDA
class InfantryTypeVector
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~InfantryTypeVector() = default;

    virtual void QueryInterface(unsigned int * Block, char a2);  // 0x512AE0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void Release(int a2, unsigned int * a3);  // 0x512C80 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void AddType(unsigned int * a2);  // 0x512D60 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void Remove(int a2);  // 0x512DA0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void Construct(int a2, int a3);  // 0x512DC0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
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
// CSP: IsoCoord matched via T1
class IsoCoord
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~IsoCoord() = default;

    virtual void ToPixel(int a2, Tactical * aP2);  // 0x6D1EB0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void ToScreenOffset(AbstractClass * aP0, AbstractClass * aP1, AbstractClass * aP2, AbstractClass * aP3);  // 0x6D62E0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

    uint8_t IsoCoord_field_0x04[4];
};
// 4 methods in IDA
class IsoTile
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~IsoTile() = default;

    virtual void Decode16Bit(int a1, uint16_t * a2, int * a3, int a4, int a5, int a6);  // 0x748750 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void Decode8BitV2(int a1, uint8_t * a2, int * a3, unsigned int a4, int a5, int a6);  // 0x748C30 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void Decode16BitV2(int a1, uint16_t * a2, int * a3, int a4, int a5, int a6);  // 0x7C39C0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void Decode8Bit(int a1, uint8_t * a2, int * a3, unsigned int a4, int a5, int a6);  // 0x7C3EB0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

    uint8_t IsoTile_field_0x04[4];
    uint8_t IsoTile_field_0x08[4];
    uint8_t IsoTile_field_0x0C[4];
};
// 1 methods in IDA
// CSP: IsometricTileClass matched via T1
class IsometricTileClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~IsometricTileClass() = default;

    IsometricTileClass(); // 0x543780 (constructor)

};
// 20 methods in IDA
// CSP: IsometricTileTypeClass matched via T1
class IsometricTileTypeClass
{
public:
    virtual ~IsometricTileTypeClass() = default;  // 0x54A170

    virtual void CleanupMembers(); // 0x544A70
    virtual void LoadTileFileData(); // 0x544CB0
    virtual void GetTerrainType(unsigned short * a2, int a3);  // 0x549AA0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void GetHeight(int a2);  // 0x549AE0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void vt_entry_6C(unsigned int * a0, IsometricTileTypeClass * aP1);  // 0x549B50 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
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

    virtual void Draw(int a2, int a3, int a4, int a5, int a6, int a7, int a8);  // 0x4C1F20 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

};
// 1 methods in IDA
class MapCoords
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~MapCoords() = default;

    virtual int Init(); // 0x6B5240

};
// 1 methods in IDA
class MapData
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~MapData() = default;

    virtual void InitHeights(); // 0x45B1C0

};
// 7 methods in IDA
class MapFile
{
public:
    virtual ~MapFile() = default;  // 0x69C500

    virtual void LoadDescription(wchar_t * String_v, uint8_t *** a2, INIClass * aP1);  // 0x69A3B0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void ddtor(); // 0x69C500
    virtual void Write(int a2);  // 0x69C560 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void Release(int a2, unsigned int * a3);  // 0x69CBC0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void Read(const char ** a2);  // 0x69CD00 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
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

    virtual void Check(int a2);  // 0x5D63E0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void Upload(); // 0x5E7EB0

    uint8_t MapPreview_field_0x04[4];
};
// 1 methods in IDA
class MapResourceClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~MapResourceClass() = default;

    virtual int Constructor(); // 0x595740

};
// 9 methods in IDA
class MapSeed
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~MapSeed() = default;

    virtual void CheckTileMatch(int16_t *aP1, int16_t *aP2, int aP3, char aP4, char aP5, char aP6);  // 0x56D100 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual int IsInitialized(); // 0x58B7D0 (G42 sig-sync: returns dword_ABED0C)
    virtual void PlaceCityBlock(int16_t * a2, int16_t * a3, void * a4);  // 0x5910F0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void PlaceCityBuildings(int16_t * a2, int16_t * a3, void * a4);  // 0x591D80 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void PlaceCityBlock2(int16_t * a2, int16_t * a3, ObjectClass * aP2);  // 0x593550 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
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
// CSP: MapSeedClass matched via T1
class MapSeedClass
{
public:
    virtual ~MapSeedClass() = default;  // 0x597D50

    virtual int Constructor(); // 0x595680
    virtual void Release(char * a2, wchar_t * Source);  // 0x597760 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual char AddRef(char * Source);  // 0x597A30 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual bool ddtor(char* lpFileName);  // 0x597D50 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    void * Generate(); // 0x597F80 (G42 sig-sync: def)
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

    virtual void Read(); // 0x767740
    virtual int ddtor();  // G42 sig-sync: table lookup return // 0x767800
    virtual void QueryInterface(char a2);  // 0x7678C0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

    uint8_t MapSizeGameOption_WorldDominationTour_field_0x04[4];
    uint8_t MapSizeGameOption_WorldDominationTour_field_0x08[4];
};
// 1 methods in IDA
class Map_WorldDominationTour
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~Map_WorldDominationTour() = default;

    virtual void QueryInterface(char a2);  // 0x769C00 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

};
// 2 methods in IDA
class Matrix
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~Matrix() = default;

    virtual void Copy12Float(int a2);  // 0x5AE5E0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void Scale(float a2);  // 0x5BD730 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

    uint8_t Matrix_field_0x04[4];
};
// 1 methods in IDA
class Matrix2D
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~Matrix2D() = default;

    virtual void Rotate(float aP1);  // 0x5AF1A0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

};
// 5 methods in IDA
// CSP: Matrix3x3 matched via T1
class Matrix3x3
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~Matrix3x3() = default;

    virtual void Multiply(float *a2);  // 0x5AE8F0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void ApplyCol0(AbstractClass * aP1);  // 0x5AE9B0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void ApplyCol1(AbstractClass * aP1);  // 0x5AE9E0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void RotateX(float aP1);  // 0x5AEF60 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void TransformPoint(float *aP1, float *a2);  // 0x5AF4D0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

    uint8_t Matrix3x3_field_0x04[4];
    uint8_t Matrix3x3_field_0x08[4];
    uint8_t Matrix3x3_field_0x0C[4];
    uint8_t Matrix3x3_field_0x10[4];
};
// 2 methods in IDA
// CSP: PlacementList matched via T1
class PlacementList
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~PlacementList() = default;

    virtual void FindByID(int a2, TechnoClass * aP2);  // 0x47C4D0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void FindByType(char a2);  // 0x47EBF0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

    uint8_t PlacementList_field_0x04[4];
};
// 2 methods in IDA
class PlanningNodeClass
{
public:
    virtual ~PlanningNodeClass() = default; // 0x6370B0

    virtual void CleanupAll(); // 0x6370B0
    virtual void RemoveFromArray(DynamicVector * aP1);  // 0x63EBD0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

    uint8_t PlanningNodeClass_field_0x04[4];
};
// 13 methods in IDA
// CSP: RadarHashVector matched via T1
class RadarHashVector
{
public:
    virtual ~RadarHashVector();  // 0x658A70

    virtual void Clear(); // 0x658890
    virtual void GetCount(int a2);  // 0x6588C0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void Seek(unsigned int * a2, int a3);  // 0x6588E0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual char AddRef(int a2);  // 0x658910 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void Release(int a2, char * a3);  // 0x658970 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
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

    virtual void AdvanceFrame(int a2);  // 0x690C00 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void AnimateText(); // 0x690D60
    virtual int AddRef(); // 0x690F70 (G42 sig-sync: body returns timer result)
    virtual void Release(); // 0x690FC0
    virtual void Constructor_ScoreAnimClass(unsigned int * Block, char a2);  // 0x690FE0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    // +3 more virtual methods

    uint8_t ScoreAnimClass_field_0x04[4];
    uint8_t ScoreAnimClass_field_0x08[4];
    uint32_t ScoreAnimClass_field_0x0C; // G42: scalar per IDA til (AddRef timer math)
    uint8_t ScoreAnimClass_field_0x10[4];
    uint32_t ScoreAnimClass_field_0x14; // G42: scalar per IDA til (AddRef timer math)
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

    virtual void Render(); // 0x542620

};
// 1 methods in IDA
// CSP: ScoreClass matched via T1
class ScoreClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ScoreClass() = default;

    virtual void SetState(char a2);  // 0x5CD3C0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

};
// 4 methods in IDA
class ScoreFontClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ScoreFontClass() = default;

    virtual void Release(int16_t * a2);  // 0x6907A0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual char AddRef(int16_t szSrc);  // 0x6907E0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void QueryInterface(unsigned int * Block, char a2);  // 0x691040 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void Constructor_ScoreFontClass(unsigned int * Block, char a2);  // 0x691100 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

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

    virtual void Display(); // 0x68CD20
    virtual void Check(char a2);  // 0x68EC00 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual int AccumulateScoreStats(); // 0x68EF20
    virtual void DisplayTimeText(unsigned int a2);  // 0x68F9B0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void LoadAudio(); // 0x690640
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
    char RemoveItem(int a1, int a2, int a3, int a4, int a5);  // 0x7712c0 -- ScoreScreen::RemoveItem
    // === SYMBOL-ANCHOR (END) ===
};
// 1 methods in IDA
class ScoreScreenClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ScoreScreenClass() = default;

    virtual void ProcessFrame(char * a1, int a2);  // 0x691970 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

};
// 2 methods in IDA
// CSP: ScoreText matched via T1
class ScoreText
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ScoreText() = default;

    virtual void ShowAlt(const wchar_t **aP1, int a3);  // 0x76EA20 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void Show(ObjectClass * aP1);  // 0x76EAF0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

    uint8_t ScoreText_field_0x04[4];
};
// 2 methods in IDA
// CSP: ShroudClass matched via T1
class ShroudClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ShroudClass() = default;

    virtual void UpdateVisibility(int *aP1);  // 0x567230 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void Reset(IUnknown * aP1);  // 0x577AB0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

    uint8_t ShroudClass_field_0x04[4];
};
// 1 methods in IDA
// CSP: SpawnControlVector matched via T1
class SpawnControlVector
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~SpawnControlVector() = default;

    virtual void Constructor(int a2, int a3);  // 0x6B8880 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

};
// 1 methods in IDA
class SuperClassVector
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~SuperClassVector() = default;

    virtual void Construct(int a2, int a3);  // 0x510500 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

};
// 5 methods in IDA
// CSP: SuperWeaponClass matched via T1
class SuperWeaponClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~SuperWeaponClass() = default;

    virtual int LoadFromSaveStream(); // 0x539890
    virtual int ProcessCharged(); // 0x6C5640
    virtual int UpdateAll(); // 0x6DA740
    virtual void CreateChemLauncher(int a2, int a3, int a4, IUnknown * aP4);  // 0x6E38F0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual int FindByName(); // 0x773030

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

    virtual int AddRef(); // 0x6C39C0
    virtual int GetClassName(); // 0x6C39E0
    virtual int ddtor(); // 0x6C3A10
    virtual int GetSize(); // 0x6C3A90

    uint8_t TClassFactory_AnimClass_field_0x04[4];
    uint8_t TClassFactory_AnimClass_field_0x08[4];
    uint8_t TClassFactory_AnimClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_BulletClass
{
public:
    virtual ~TClassFactory_BulletClass() = default;  // 0x6C5090

    virtual int AddRef(); // 0x6C5040
    virtual int GetClassName(); // 0x6C5060
    virtual int ddtor(); // 0x6C5090
    virtual int GetSize(); // 0x6C5110

    uint8_t TClassFactory_BulletClass_field_0x04[4];
    uint8_t TClassFactory_BulletClass_field_0x08[4];
    uint8_t TClassFactory_BulletClass_field_0x0C[4];
};
// 8 methods in IDA
class TClassFactory_CampaignClass
{
public:
    virtual ~TClassFactory_CampaignClass();  // 0x6C0290

    virtual int AddRefCOM(); // 0x6C00C0
    virtual int Release(); // 0x6C00E0
    virtual void CreateInstanceCOM(); // 0x6C0110
    virtual int AdjustRefCOM(); // 0x6C0190
    virtual int AddRef(); // 0x6C0240
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

    virtual int AddRef(); // 0x6BF940
    virtual int GetClassName(); // 0x6BF960
    virtual int ddtor(); // 0x6BF990
    virtual int GetSize(); // 0x6BFA10

    uint8_t TClassFactory_CellClass_field_0x04[4];
    uint8_t TClassFactory_CellClass_field_0x08[4];
    uint8_t TClassFactory_CellClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_EMPulseClass
{
public:
    virtual ~TClassFactory_EMPulseClass() = default;  // 0x6BFB10

    virtual int AddRef(); // 0x6BFAC0
    virtual int GetClassName(); // 0x6BFAE0
    virtual int ddtor(); // 0x6BFB10
    int GetSize(); // 0x6BFB90 (G42 sig-sync: def)

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

    virtual void CopyConstruct(unsigned int * a2);  // 0x50E830 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

};


// === Batch-generated MISSING class stubs ===

// 8 methods in IDA
// CSP: AbstractClassVector matched via T1
class AbstractClassVector
{
public:
    virtual ~AbstractClassVector() = default;  // 0x4E0410

    virtual void Seek(int a2);  // 0x4E01E0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void QueryInterface(unsigned int * Block, char a2);  // 0x4E02D0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual char AddRef(int a2);  // 0x4E0320 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void Release(int a2, unsigned int * a3);  // 0x4E0360 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void ddtor(); // 0x4E0410
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
// CSP: ActionQueue matched via T1
class ActionQueue
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ActionQueue() = default;

    virtual void PushEntry(int a2, int a3, int a4);  // 0x53CB10 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

};
// 1 methods in IDA
class Actions
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~Actions() = default;

    virtual void Reset(int * a1, MouseClass * aP2);  // 0x5BDDC0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

};
// 1 methods in IDA
// CSP: AircraftTrackerClass matched via T1
class AircraftTrackerClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~AircraftTrackerClass() = default;
    void FillCurrentVector(void * aP1, int a3); // 0x412B40 (G42 sig-sync: def)

};
// 1 methods in IDA
class AircraftTypeVector
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~AircraftTypeVector() = default;

    virtual void Constructor(int a2, int a3);  // 0x513990 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

};
// 10 methods in IDA
// CSP: AlphaShapeClass matched via T1
class AlphaShapeClass
{
public:
    virtual ~AlphaShapeClass() = default;  // 0x421730

    virtual void CTOR(ObjectClass * aP1, int a3, AbstractClass * aP3);  // 0x420960 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual int Constructor(); // 0x420AF0
    virtual void SD_vt03(int a1, unsigned int * a2);  // 0x420D40 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual int SD_vt11();  // G42 sig-sync // 0x420D80
    virtual int SD_vt12();  // G42 sig-sync // 0x420D90
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

    virtual void Construct(int a2, unsigned int * a3);  // 0x5106E0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

};
// 1 methods in IDA
class AppState
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~AppState() = default;

    virtual void CallMethod(int a1);  // 0x5F3320 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

};
// 1 methods in IDA
class ArcTan
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ArcTan() = default;

    virtual void Update(); // 0x7492B0

};
// 2 methods in IDA
class ArmorType
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ArmorType() = default;

    virtual void FindIndex(CCINIClass * aP1, uint8_t * a2, Armor);  // 0x4753F0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual int LookupByName();  // G42 sig-sync: returns index // 0x772A50

    uint8_t ArmorType_field_0x04[4];
};
// 6 methods in IDA
// CSP: ArtConfig matched via T1
class ArtConfig
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~ArtConfig() = default;

    virtual void loadConfig(char **aP1, int aP2, int aP3, int *aP4, char aP5);  // 0x5CC760 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void ReadLayout(INIClass * a2, PriorityQueue * a3, int a4);  // 0x7681E0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void ParseLayoutEntry(unsigned int * a1, ObjectClass * aP2, char ** a3, int a5);  // 0x768F50 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void saveConfig(ObjectClass * aP1);  // 0x7691E0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void resetConfig(unsigned int * a1, int a3, Selection_WorldDominationTour * aP3);  // 0x76FB90 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
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

    virtual int ReleaseAndReload(); // 0x534E50

};
// 1 methods in IDA
// CSP: BTree matched via T1
class BTree
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~BTree() = default;

    virtual void DeleteSubtree(); // 0x69E100

};
// 5 methods in IDA
class BaseNodeClass_Vector
{
public:
    virtual ~BaseNodeClass_Vector() = default;  // 0x42FAB0

    virtual void Release(int a2, char * a3);  // 0x42F9C0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void ddtor(); // 0x42FAB0
    virtual void Read(int a2);  // 0x42FAE0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void Write(int a2);  // 0x42FB30 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void QueryInterface(unsigned int * Block, char a2);  // 0x42FB50 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

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

    virtual void ArrayArithmetic(int * a1, char * a2, unsigned int * a3, int a4);  // 0x5C6FE0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void DecryptBlock(Pipe * aP1, Pipe * aP2, Pipe * aP3);  // 0x632740 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void RSAOperation(AbstractClass * Src, int a3, char * a4);  // 0x632870 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void Compare(int a2);  // 0x632BC0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

    uint8_t BigInt_field_0x04[4];
    uint8_t BigInt_field_0x08[4];
    uint8_t BigInt_field_0x0C[4];
};
// 5 methods in IDA
// CSP: BinkMovieClass matched via T1
class BinkMovieClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~BinkMovieClass() = default;

    virtual void SetPosition(DSurface * aP1, int a3, int a4);  // 0x433180 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void RenderFrameToSurface(); // 0x4333F0  [BinkMovie::RenderFrameToSurface non-virtual variant at 0x433040, anchor removed]
    virtual void AllocateRenderSurface(unsigned char * a1, unsigned char * a2, int a3);  // 0x4335E0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void ReleaseRenderSurface(uint8_t * a1, unsigned char * a2, int a3);  // 0x4336C0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void OpenFile(uint8_t * a1, unsigned char * a2, unsigned int a3);  // 0x433770 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

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

    virtual void Draw(int a2, int a3, int a4);  // 0x438000 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void DrawAlt(int a2, int a3, int a4);  // 0x438030 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void AddRef(); // 0x438060
    virtual void Read(BombClass * aP1, signed int Size);  // 0x4380A0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void QueryInterface(int * Block, char a2);  // 0x632F90 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

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

    virtual void Get(Straw * aP1, signed int Size);  // 0x438210 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void QueryInterface(int * Block, char a2);  // 0x5B45C0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void Constructor_MixFileClass(void * Block, char a2);  // 0x5B4630 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

    uint8_t BlowStraw_field_0x04[4];
    uint8_t BlowStraw_field_0x08[4];
};
// 1 methods in IDA
class BoolVector
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~BoolVector() = default;

    virtual void Construct(MapClass * aP1, MapClass * aP2);  // 0x510920 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

};
// 1 methods in IDA
// CSP: BridgeClass matched via T1
class BridgeClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~BridgeClass() = default;

    virtual void GetCellData(int a2);  // 0x42E820 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

};
// 1 methods in IDA
// CSP: BuildLocation matched via T1
class BuildLocation
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~BuildLocation() = default;

    virtual void InitCandidate(int a2, IUnknown * aP2);  // 0x50E450 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

};
// 1 methods in IDA
class BuildLocationVector
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~BuildLocationVector() = default;

    virtual void Grow(int a2);  // 0x510860 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

};
// 1 methods in IDA
class C07EFB9C
{
public:
    virtual ~C07EFB9C() = default;  // 0x6301A0

    virtual int ddtor(int a1, unsigned int *a2);  // 0x6301A0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

};
// 1 methods in IDA
class C07F0188
{
public:
    virtual ~C07F0188() = default;  // 0x645620

    virtual int ddtor(int a1, unsigned int *a2);  // 0x645620 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

};
// 5 methods in IDA
class C07F5C70
{
public:
    virtual ~C07F5C70() = default;  // 0x746DE0

    virtual void Write(IPersistStream * a0, LPPERSISTSTREAM pPStm, FootClass * aP2);  // 0x744600 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual int StubReturn2280(); // 0x746DD0
    virtual int ddtor(int a1, unsigned int *a2);  // 0x746DE0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual int StubReturn1(); // 0x746E20
    virtual void Seek(void ** Block, char a2);  // 0x746E80 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

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

    virtual void CalculatePopupPosition(unsigned int * a2);  // 0x478BA0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void Release(unsigned int * a2);  // 0x478DB0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void Draw1(char a2);  // 0x478E10 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void Draw2(); // 0x478E30
    virtual void Show(int a1);  // 0x479050 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
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
// CSP: CChatEventSink matched via T1
class CChatEventSink
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~CChatEventSink() = default;

    virtual void HandleServerList(int a1, int a2, int a3);  // 0x7A41C0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void HandleChatEvent(int a1, AnimClass * a2, uint8_t * a3, char * a4);  // 0x7A5890 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void HandleChannelJoin(int a1, int a2, int a3, const char * a4);  // 0x7A7110 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void HandleLobbyPlayerUpdate(int a1, int a2, int a3, int a4);  // 0x7A8260 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void HandleUserSearch(int a2, void * a3);  // 0x7A9970 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
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
// CSP: CDROM matched via T1
class CDROM
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~CDROM() = default;

    void DeviceIoControl(HANDLE hDevice, int a2);  // 0x47A3F0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void LockVolume(ObjectClass * aP0, AnimClass * aP1, uint8_t a3, DWORD BytesReturned, int16_t a5);  // 0x47A6F0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

    uint8_t CDROM_field_0x04[4];
};
// 1 methods in IDA
class CarryoverClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~CarryoverClass() = default;

    virtual void QueryInterface(unsigned int * Block, char a2);  // 0x473920 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

};
// 1 methods in IDA
class CellClassVector
{
public:
    virtual ~CellClassVector() = default;  // 0x5AD570

    virtual void Destruct(unsigned int * Block, char a2);  // 0x5AD570 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

};
// G42.36: CellCoord moved to core/cellcoord.hpp (top include)
// 1 methods in IDA
// CSP: CellLand matched via T1
class CellLand
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~CellLand() = default;

    virtual void IsBuildable(); // 0x4863D0

};
// 1 methods in IDA
class CellSystem
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~CellSystem() = default;

    virtual void UpdateVisibility(); // 0x578100

};
// 1 methods in IDA
class Char
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~Char() = default;

    virtual void Swap(char aP1);  // 0x433C90 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

};
// 2 methods in IDA
class Chat
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~Chat() = default;

    virtual void ProcessMessages(); // 0x55E420
    virtual void RefreshMessagePositions(); // 0x5D4390

    uint8_t Chat_field_0x04[4];
};
// 1 methods in IDA
class ChatDialog
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ChatDialog() = default;

    virtual void DlgProc(HWND hWnd, UINT, WPARAM, HWND a4);  // 0x79DB50 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

};
// 1 methods in IDA
class ChatEvent
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ChatEvent() = default;

    virtual void ProcessStrings(char *a2, int a3, int a4, int a5);  // 0x6B9740 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

};
// 1 methods in IDA
// CSP: ClassFactory_CStream matched via T1
class ClassFactory_CStream
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ClassFactory_CStream() = default;
    _DWORD * Construct(); // 0x6BEE40 (G42 sig-sync: def)

};
// 1 methods in IDA
// CSP: ClassFactory_Wave matched via T1
class ClassFactory_Wave
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ClassFactory_Wave() = default;
    _DWORD * Construct(); // 0x6BEFC0 (G42 sig-sync: def)

};
// 1 methods in IDA
// CSP: Cliff matched via T1
class Cliff
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~Cliff() = default;

    virtual void ProcessTransitions(MapClass * aP0, BombClass * aP1);  // 0x579010 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

};
// 16 methods in IDA
// CSP: ComStreamClass matched via T1
class ComStreamClass
{
public:
    virtual ~ComStreamClass() = default;  // 0x7A40F0

    virtual void initStream(); // 0x76B080
    virtual unsigned char * closeStream();
    virtual void SetSize(); // 0x7A2FE0
    virtual int Read(); // 0x7A30D0
    virtual void Commit(); // 0x7A3B30
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
// CSP: Compression matched via T1
class Compression
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~Compression() = default;

    virtual void Read(AbstractClass * aP1, IUnknown * aP2);  // 0x55C350 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

};
// 2 methods in IDA
class Conditions
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~Conditions() = default;

    virtual void CheckResult(int a1, IUnknown * aP1);  // 0x653810 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void CheckResult3(MouseClass * aP0, IUnknown * aP1, char aP3);  // 0x653830 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

    uint8_t Conditions_field_0x04[4];
};
// 1 methods in IDA
class Conflict_WorldDominationTour
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~Conflict_WorldDominationTour() = default;

    virtual void QueryInterface(char a2);  // 0x7667A0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

};
// 9 methods in IDA
// CSP: ConnectionPointClass matched via T1
class ConnectionPointClass
{
public:
    virtual ~ConnectionPointClass() = default;  // 0x4A05D0

    virtual void QueryInterface(int a1, const void * a2, unsigned int * a3);  // 0x4A04B0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual char AddRef(int a1);  // 0x4A0520 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void Release(volatile LONG * Block);  // 0x4A0540 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual int ddtor(unsigned int *a1, unsigned int *a2);  // 0x4A05D0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void Advise(int a1, int a2);  // 0x4A0610 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
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

    virtual void Construct(int a2, int a3);  // 0x5105F0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

};
// 3 methods in IDA
// CSP: CrateClass matched via T1
class CrateClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~CrateClass() = default;

    virtual void ProcessPickup(int aP1);  // 0x481A00 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void Update(); // 0x56BBE0
    virtual void FindPlacement(); // 0x56BD40

    uint8_t CrateClass_field_0x04[4];
    uint8_t CrateClass_field_0x08[4];
};
// 1 methods in IDA
class CreatureClass
{
public:
    virtual ~CreatureClass() = default;
    static unsigned int * GetManager(); // 0x72DAE0 (G42 sig-sync: def; static-form -- ui/supplied site 0x60CF6F calls it without an instance)

};
// 1 methods in IDA
class Crypto
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~Crypto() = default;

    virtual void DecodeByte(unsigned int * a2);  // 0x632AA0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

};
// 2 methods in IDA
// CSP: DListNode matched via T1
class DListNode
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~DListNode() = default;

    virtual int Init(); // 0x4072C0
    virtual void InitEmpty(); // 0x4072D0

    uint8_t DListNode_field_0x04[4];
};
// 4 methods in IDA
class Dial8Class
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~Dial8Class() = default;

    virtual void Constructor(ControlClass * aP1, ControlClass * aP2, ControlClass * aP3, ControlClass * aP4, ControlClass * aP5, int a7);  // 0x4A53B0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void SetValue(unsigned int a2, ControlClass * aP2, int a4);  // 0x4A5660 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual int GetValue(); // 0x4A57B0
    virtual void QueryInterface(unsigned int * Block, char a2);  // 0x4A59A0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

    uint8_t Dial8Class_field_0x04[4];
    uint8_t Dial8Class_field_0x08[4];
    uint8_t Dial8Class_field_0x0C[4];
};
// 11 methods in IDA
// CSP: DiskLaserClass matched via T1
class DiskLaserClass
{
public:
    virtual ~DiskLaserClass() = default;  // 0x4A7C30

    virtual void Fire(int a2, InfantryClass * aP2, DiskLaserClass * aP3, DiskLaserClass * aP4);  // 0x4A71A0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void Update(); // 0x4A7340
    void PointerGotInvalid(AbstractClass * aP1);  // G42 sig-sync: def
    DiskLaserClass(); // 0x4A7A30 (constructor)
    virtual void Stat(AbstractClass * aP1);  // 0x4A7B80 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
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

    virtual int CheckAvailable(); // 0x48DD50

};
// 1 methods in IDA
class DistributionVector_BuildingType
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~DistributionVector_BuildingType() = default;

    virtual void Construct(int a2, unsigned int * a3);  // 0x510970 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

};
// 5 methods in IDA
class DynamicArray
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~DynamicArray() = default;

    virtual void AddFromList(int a2);  // 0x4129C0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void Resize(int *a1, unsigned int *aP2);  // 0x6249A0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual int ShrinkCapacity(); // 0x625440
    virtual void Remove(int a2);  // 0x7ACD60 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual int Grow(); // 0x7AD9D0

    uint8_t DynamicArray_field_0x04[4];
    uint8_t DynamicArray_field_0x08[4];
    uint8_t DynamicArray_field_0x0C[4];
    uint8_t DynamicArray_field_0x10[4];
};
// 1 methods in IDA
// CSP: DynamicClass matched via T1
class DynamicClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~DynamicClass() = default;

    virtual void Insert(HashTable * aP1, IUnknown * aP2);  // 0x7ACA00 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

};
// 1 methods in IDA
class DynamicStringArray
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~DynamicStringArray() = default;

    virtual void Get(ObjectClass * aP1, int a3);  // 0x7ACE30 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

};
// 1 methods in IDA
// CSP: DynamicVectorArray matched via T1
class DynamicVectorArray
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~DynamicVectorArray() = default;

    virtual void Constructor(int a2, int a3, int a4);  // 0x628070 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

};
// 1 methods in IDA
// CSP: ErrorCode matched via T1
class ErrorCode
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ErrorCode() = default;

    virtual int Map(); // 0x46F5E0
    static int Map(void *aP0);  // 0x46F5E0 G42.33 b3 static-form sync (cache 返回 int 作控件 ID)

};
// 1 methods in IDA
class Exception
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~Exception() = default;

    virtual void Destructor(); // 0x7D2F41

};
// 1 methods in IDA
class ExceptionHandler
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ExceptionHandler() = default;

    virtual int GenerateReport(); // 0x4C85E0

};
// 1 methods in IDA
class Field
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~Field() = default;

    virtual void Int_Set(int aP1);  // 0x434110 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

};
// 1 methods in IDA
// CSP: FractalNoise matched via T1
class FractalNoise
{
public:
    virtual ~FractalNoise() = default;

    virtual void Release(CCINIClass * aP0);  // 0x420270 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    static void Dtor(void *aP0);  // G42.35 R5-style static sync (cache-verbatim Blit-dtor bodies 0x49A2xx/0x49AAxx call FractalNoise::Dtor; def in e4/e4_static_stubs.cpp, decl mirror of _tree_full_e4.hpp)

};
// 7 methods in IDA
class Function
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~Function() = default;

    virtual void Method_41C430(); // 0x41C430
    virtual void Method_424CA0(int a2);  // 0x424CA0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void Method_46B260(int a2);  // 0x46B260 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual int Method_4B4D60(); // 0x4B4D60
    virtual void Method_6342D0(int a2);  // 0x6342D0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
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

    virtual wchar_t * LoadLetterStrings(); // 0x4E5AC0

};
// 8 methods in IDA
// CSP: GaugeClass matched via T1
class GaugeClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~GaugeClass() = default;

    virtual int SetValue(int a2); // 0x4E2580 (G42.35 def truth)
    static int SetValue(void *aP0, int aP1);  // 0x4E2580 G42.35 static-form sync (ui/supplied site 0x6B1D48)
    virtual void GetValue(SliderClass * aP1);  // 0x4E25A0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void GetRange(int a2);  // 0x4E25D0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void SetColor(int a2);  // 0x4E2650 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void SetRange(); // 0x4E29A0
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

    virtual void StubReturnFalse(); // 0x40CC10
    virtual void Resize(int a2, unsigned int * a3);  // 0x40CE50 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void Resize2(int a2, unsigned int * a3);  // 0x50EA90 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

    uint8_t GenericVector_field_0x04[4];
    uint8_t GenericVector_field_0x08[4];
};
// 1 methods in IDA
// CSP: GlobalArray matched via T1
class GlobalArray
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~GlobalArray() = default;

    virtual int FindString(); // 0x422B20

};
// 2 methods in IDA
class GlobalInit
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~GlobalInit() = default;

    virtual void RegisterSingleton(int a1);  // 0x5F7640 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void SingletonGetter(int a2);  // 0x71DE40 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

    uint8_t GlobalInit_field_0x04[4];
};
// 1 methods in IDA
class GroupLabel
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~GroupLabel() = default;

    virtual void WndProc(); // 0x61E700

};
// 2 methods in IDA
class HVAAnimation
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~HVAAnimation() = default;

    virtual void LoadFromFile(int a2);  // 0x759540 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void ParseFrames(int a2, void * a3, unsigned int a4);  // 0x759670 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

    uint8_t HVAAnimation_field_0x04[4];
};
// 1 methods in IDA
class Heap
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~Heap() = default;

    virtual void SiftDown(int a2);  // 0x5AD870 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

};
// 1 methods in IDA
class HexCoord
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~HexCoord() = default;

    virtual void Convert(IUnknown * aP1, IUnknown * aP2);  // 0x5654A0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

};
// 1 methods in IDA
class History_WorldDominationTour
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~History_WorldDominationTour() = default;

    virtual void QueryInterface(char a2);  // 0x767C10 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

};
// 1 methods in IDA
class IDXContainer
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~IDXContainer() = default;

    virtual void LoadSample(int a1, int a2);  // 0x4016F0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

};
// 1 methods in IDA
class INISectionList
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~INISectionList() = default;

    virtual int Constructor(); // 0x49E8E0

};
// 6 methods in IDA
class ImageList
{
public:
    virtual ~ImageList() = default; // 0x7C89FE

    virtual void DragEnter(HWND hwndLock, int x, int y);  // 0x7C89F2 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void BeginDrag(HIMAGELIST himlTrack, int iTrack, int dxHotspot, int dyHotspot);  // 0x7C89F8 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void Destroy(HIMAGELIST himl);  // 0x7C89FE (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void EndDrag(); // 0x7C8A04
    virtual void DragMove(int x, int y);  // 0x7C8A0A (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    // +1 more virtual methods

    uint8_t ImageList_field_0x04[4];
    uint8_t ImageList_field_0x08[4];
    uint8_t ImageList_field_0x0C[4];
    uint8_t ImageList_field_0x10[4];
    uint8_t ImageList_field_0x14[4];
};
// 2 methods in IDA
// CSP: Int4 matched via T1
class Int4
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~Int4() = default;

    virtual void Set(int aP1, int aP2, int aP3, int a5);  // 0x645C30 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

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

    virtual void Equal(IUnknown * aP1);  // 0x517310 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

};
// 2 methods in IDA
class IntDynamicVector
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~IntDynamicVector() = default;

    virtual void QueryInterface(unsigned int * Block, char a2);  // 0x477B10 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void Construct(ObjectTypeClass * aP1);  // 0x717BD0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

    uint8_t IntDynamicVector_field_0x04[4];
};
// 2 methods in IDA
// CSP: IntVector matched via T1
class IntVector
{
public:
    virtual ~IntVector() = default; // 0x49F9D0
    void Copy(void * aP1); // 0x477B60 (G42 sig-sync: def; VectorClass->void*)
    virtual void Destructor(); // 0x49F9D0

    uint8_t IntVector_field_0x04[4];
};
// 2 methods in IDA
// CSP: IsRandMap matched via T1
class IsRandMap
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~IsRandMap() = default;

    virtual void Sed(); // 0x69ADF0
    virtual int Sed2(); // 0x69AE70

    uint8_t IsRandMap_field_0x04[4];
};
// 1 methods in IDA
class KeyValuePair
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~KeyValuePair() = default;

    virtual void Init(INIClass * aP1);  // 0x52AEC0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

};
// 1 methods in IDA
// CSP: KeywordClass matched via T1
class KeywordClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~KeywordClass() = default;

    virtual void FindOrCreate(ObjectClass * Source);  // 0x41CEF0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

};
// 1 methods in IDA
// CSP: KeywordType matched via T1
class KeywordType
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~KeywordType() = default;

    virtual void FindOrCreate2(ObjectClass * Source);  // 0x524CB0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

};
// 3 methods in IDA
class LCW
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~LCW() = default;

    virtual void Compress(BombClass * aP1, signed int Size);  // 0x5520A0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void DecompressReader(BombClass * aP1, signed int Size);  // 0x552490 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void Decompress(CCINIClass * aP1, signed int Size);  // 0x55C7C0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

    uint8_t LCW_field_0x04[4];
    uint8_t LCW_field_0x08[4];
};
// 2 methods in IDA
class LCWPipe
{
public:
    virtual ~LCWPipe() = default;  // 0x552060

    virtual void Constructor(int a2, int a3);  // 0x551FF0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void Destructor(); // 0x552060

    uint8_t LCWPipe_field_0x04[4];
};
// 2 methods in IDA
class LCWPipe_Destru
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~LCWPipe_Destru() = default;

    virtual void AddRef(); // 0x5522D0
    virtual void QueryInterface(int * Block, char a2);  // 0x552390 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

    uint8_t LCWPipe_Destru_field_0x04[4];
};
// 2 methods in IDA
class LCWStraw
{
public:
    virtual ~LCWStraw() = default; // 0x552450

    virtual void Constructor(int a2, int a3);  // 0x5523E0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void Destructor(); // 0x552450

    uint8_t LCWStraw_field_0x04[4];
};
// 1 methods in IDA
class LCWStraw_Destru
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~LCWStraw_Destru() = default;

    virtual void QueryInterface(int * Block, char a2);  // 0x5525F0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

};
// 2 methods in IDA
class LZOPipe
{
public:
    virtual ~LZOPipe() = default; // 0x55C310

    virtual void Constructor(int a2, TechnoTypeClass * aP2);  // 0x55C2B0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void Destructor(); // 0x55C310

    uint8_t LZOPipe_field_0x04[4];
};
// 2 methods in IDA
class LZOPipe_Destru
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~LZOPipe_Destru() = default;

    virtual void AddRef(); // 0x55C5E0
    virtual void QueryInterface(int * Block, char a2);  // 0x55C6D0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

    uint8_t LZOPipe_Destru_field_0x04[4];
};
// 2 methods in IDA
class LZOStraw
{
public:
    virtual ~LZOStraw() = default; // 0x55C780

    virtual void Constructor(int a2, int a3);  // 0x55C720 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void Destructor(); // 0x55C780

    uint8_t LZOStraw_field_0x04[4];
};
// 1 methods in IDA
class LZOStraw_Destru
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~LZOStraw_Destru() = default;

    virtual void QueryInterface(int * Block, char a2);  // 0x55C990 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

};
// 9 methods in IDA
#ifndef GAMEMD_E4_Lobby  // G42.33 b3: e4 flat carrier wins in opt-in TUs
class Lobby
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~Lobby() = default;

    virtual void UpdateReadyIcons(HWND hDlg);  // 0x46FA20 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void SetupAllFactionSlots(); // 0x46FAC0
    virtual void EnableStartButton(HWND hDlg);  // 0x46FB50 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void FillPlayerFactions(HWND hDlg);  // 0x4E4820 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void InvalidateFactionCombos(HWND hDlg);  // 0x4E5310 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
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
#endif  // GAMEMD_E4_Lobby
// 1 methods in IDA
class MIXClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~MIXClass() = default;
    int CopyHeader(IUnknown * aP1); // 0x4A8D50 (G42 sig-sync: def)
    int CopyHeader(const void * aP1);  // G42.34k: const void* overload (core/supplied call site)

};
// 4 methods in IDA
// CSP: MPCombatTeam matched via T1
class MPCombatTeam
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~MPCombatTeam() = default;
    wchar_t ** Constructor(); // 0x5C9470 (G42 sig-sync: def)
    static wchar_t ** Constructor(void *aP0);  // 0x5C9470 G42.35 static-form sync (ui/supplied site 0x5D66A8)
    virtual void MPTeam(); // 0x5CAE10
    virtual void Constructor2(); // 0x5CAEB0
    LRESULT AddToList(MultiplayerGameMode * aP1); // 0x5D8D10 (G42 sig-sync: def)
    LRESULT AddToList(HWND aP1);  // G42.34k: HWND overload (core/supplied call sites; dialog list form)

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

    virtual void DlgProc(); // 0x5C9B10

};
// 3 methods in IDA
class MSAnim
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~MSAnim() = default;

    void GetField(unsigned int a2);  // 0x5CB840 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void SetField(unsigned int a2);  // 0x5CB860 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void Reset(int a2);  // 0x5CC6A0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

    uint8_t MSAnim_field_0x04[4];
    uint8_t MSAnim_field_0x08[4];
};
// 5 methods in IDA
class MSBinkAnim
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~MSBinkAnim() = default;

    virtual void Pause(unsigned int * a2);  // 0x5CC850 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual int Stop(); // 0x5CC880
    virtual int Load(int a2, unsigned int * a3);  // 0x5CC8A0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void Play(int a2, int a3);  // 0x5CC970 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void QueryInterface(BinkMovie ** Block, char a2);  // 0x5CEC70 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

    uint8_t MSBinkAnim_field_0x04[4];
    uint8_t MSBinkAnim_field_0x08[4];
    uint8_t MSBinkAnim_field_0x0C[4];
    uint8_t MSBinkAnim_field_0x10[4];
};
// 6 methods in IDA
// CSP: MSBitPrintAnim matched via T1
class MSBitPrintAnim
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~MSBitPrintAnim() = default;

    virtual void Construct(const wchar_t ** a1, MSAnim * aP2, MPCooperative * aP3);  // 0x5CD330 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void Update(unsigned int * a2);  // 0x5CD3D0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void Stub(); // 0x5CD400
    virtual void SetText(int a2, unsigned int * a3);  // 0x5CD410 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void Draw(int a2, int * a3);  // 0x5CD4D0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
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
// CSP: MSChoiceClass matched via T1
class MSChoiceClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~MSChoiceClass() = default;

    virtual void LoadFromINI(unsigned int *arg0, const char **aP2);  // 0x5CF8E0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void DeleteAndZero(ObjectClass * aP1);  // 0x5D0290 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

    uint8_t MSChoiceClass_field_0x04[4];
};
// 5 methods in IDA
class MSEngine_Destru
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~MSEngine_Destru() = default;

    virtual void CheckStringNotEmpty(); // 0x5AE4C0
    virtual void StubReturnFalse(int a1);  // 0x5AE590 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void DestroyComposite(char a2);  // 0x5AE5A0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void Release(); // 0x5D26F0
    virtual void QueryInterface(unsigned int * Block, char a2);  // 0x5D2700 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

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

    virtual void Constructor_MSFont(); // 0x5D2E30
    virtual void Release(int16_t * a2);  // 0x5D3170 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual char AddRef(uint8_t szSrc);  // 0x5D31D0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    void Create(int * a2, uint8_t szSrc, int a4, int a5, int a6, int a7);  // 0x5D3250 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual short ddtor(int a2, unsigned short *a3, int a4, int a5, int a6);  // 0x5D3330 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
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
// CSP: MSOverlayAnim matched via T1
class MSOverlayAnim
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~MSOverlayAnim() = default;

    virtual int Load(int a2, int * a3);  // 0x5CB880 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void Draw(int a2, int * a3);  // 0x5CBB80 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void Update(int * a2);  // 0x5CBCB0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void Init(ObjectClass * aP1, int a3, int a4, int a5, int a6, MSShapeAnim * aP6, char a8, int a9, char a10);  // 0x5CC250 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual char AddRef(char a2);  // 0x5CEAC0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
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
// CSP: MSPCXAnim matched via T1
class MSPCXAnim
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~MSPCXAnim() = default;

    virtual void Construct(ObjectClass * aP1, MSAnim * aP2, unsigned int * a3, char a5);  // 0x5CE640 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual int Load(unsigned int * a2, unsigned int * a3);  // 0x5CE7D0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void Draw(int * a2, int * a3);  // 0x5CE8C0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    void SetPalette(int a2);  // G42 sig-sync: def
    virtual void GetFrame(unsigned int * a2);  // 0x5CEA80 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    // +2 more virtual methods

    uint8_t MSPCXAnim_field_0x04[4];
    uint8_t MSPCXAnim_field_0x08[4];
    uint8_t MSPCXAnim_field_0x0C[4];
    uint8_t MSPCXAnim_field_0x10[4];
    uint8_t MSPCXAnim_field_0x14[4];
    uint8_t MSPCXAnim_field_0x18[4];
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    void* QueryInterface(int a1);  // 0x5ced70 -- MSPCXAnim::QueryInterface
    // === SYMBOL-ANCHOR (END) ===
};
// 6 methods in IDA
// CSP: MSPrintAnim matched via T1
class MSPrintAnim
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~MSPrintAnim() = default;

    virtual void SetText(int a2, unsigned int * a3);  // 0x5CDC50 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void Draw(int a2, int * a3);  // 0x5CDEE0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void Update(unsigned int * a2);  // 0x5CE2B0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void Clear(); // 0x5CE300
    virtual void QueryInterface(void ** Block, char a2);  // 0x5CED40 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
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

    virtual void FindByName(ObjectClass * aP1);  // 0x76EBE0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

};
// 2 methods in IDA
// CSP: MSShapeAnim matched via T1
class MSShapeAnim
{
public:
    virtual ~MSShapeAnim() = default;  // 0x5CEBD0

    virtual void Constructor(MSShapeAnim * aP1, MSShapeAnim * aP2, int a4, MSShapeAnim * aP4, int a6, MSShapeAnim * aP6, MSShapeAnim * aP7);  // 0x5CB6D0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void Destruct(unsigned int * Block, char a2);  // 0x5CEBD0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

    uint8_t MSShapeAnim_field_0x04[4];
};
// 8 methods in IDA
// CSP: MSVQAnim matched via T1
class MSVQAnim
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~MSVQAnim() = default;

    virtual void Construct(char ** a2, int a3, int a4, unsigned int * a5, char a6);  // 0x5CCA20 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void ConstructMSVQAnimHidden(char **aP1, int *aP2, int aP3, char aP3a);  // 0x5CCC30 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    static unsigned int * ConstructMSVQAnimHidden(void *aP0, char **aP1, int *aP2, int aP3, char aP4);  // 0x5CCC30 G42.33 b3 static-form sync
    virtual int Load(int a2, unsigned int * a3);  // 0x5CCE90 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void Play(int a2, int * a3);  // 0x5CD0E0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void Stop(int a2);  // 0x5CD240 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
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

    virtual void ProcessTick(); // 0x5C9430
    virtual void QueryInterface(unsigned int * Block, char a2);  // 0x5C9440 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

    uint8_t Megawealth_field_0x04[4];
};
// 1 methods in IDA
// CSP: Miles matched via T1
class Miles
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~Miles() = default;

    virtual unsigned int * DriverGet(); // 0x753C70

};
// 2 methods in IDA
class MiniMap
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~MiniMap() = default;

    virtual void Render(); // 0x641140
    virtual void SavePreviewToINI(char * a2);  // 0x6418B0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

    uint8_t MiniMap_field_0x04[4];
};
// 6 methods in IDA
class MovieClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~MovieClass() = default;

    virtual void ReadConfig(HWND aP1, int nIDDlgItem);  // 0x5C23B0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    HWND Create(); // 0x5C3EC0
    virtual void RenderLoop(int a2, char a3);  // 0x759940 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void GetWidth(); // 0x759F70
    virtual void GetHeight(); // 0x759F80
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

    virtual void Cleanup(); // 0x5BFF00

};
// 1 methods in IDA
class MultiMissionVector
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~MultiMissionVector() = default;

    virtual void Constructor(int a2, int a3);  // 0x5EF0B0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

};
// 1 methods in IDA
class Multiplay
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~Multiplay() = default;

    virtual void LogToSYNC_NOMPDEBUG(); // 0x64DEA0

};
// 2 methods in IDA
// CSP: NetMessage matched via T1
class NetMessage
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~NetMessage() = default;

    virtual void Pack4(char * Destination, RandomStruct * aP1, int a3);  // 0x4CB700 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void Pack(char * Destination, char * Source, IUnknown * aP2, IUnknown * aP3);  // 0x4CB830 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

    uint8_t NetMessage_field_0x04[4];
};
// 6 methods in IDA
// CSP: NeuronClass matched via T1
class NeuronClass
{
public:
    virtual ~NeuronClass() = default; // 0x43A350

    NeuronClass(); // 0x43A350 (constructor)
    virtual void Fire(AbstractClass * aP0, int aP1);  // 0x43A540 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void Update(TechnoTypeClass * aP0, int * a1, int aP2);  // 0x43A5B0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual int StubReturn60(); // 0x43A9A0
    virtual int StubReturn56(); // 0x43A9B0
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

    virtual void Call(ObjectClass * aP1);  // 0x4F3B10 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    static int Call(void *aP0, int aP1);  // 0x4F3B10 G42.33 b3 static-form sync (cache: NullGuard::Call(obj,int))

};
// 2 methods in IDA
class ObjectManager
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ObjectManager() = default;

    virtual int InitMessageList(); // 0x5D3A40
    virtual void CleanupArrays(); // 0x697840

    uint8_t ObjectManager_field_0x04[4];
};
// 2 methods in IDA
// CSP: ObjectPlacement matched via T1
class ObjectPlacement
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ObjectPlacement() = default;

    virtual void CalcPosition(int * a1, IUnknown * aP2, char a4, char a5, char a6);  // 0x481180 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void CalcPosition_Wrapper(MouseClass * aP0, IUnknown * aP1, char a3);  // 0x4ACA10 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

    uint8_t ObjectPlacement_field_0x04[4];
};
// 1 methods in IDA
class ObjectPtr
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ObjectPtr() = default;

    virtual void RegisterForTracking(SwizzleManagerClass * aP0, MouseClass * aP1);  // 0x6CF240 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

};
// 6 methods in IDA
// CSP: ObjectVector matched via T1
class ObjectVector
{
public:
    virtual ~ObjectVector() = default;  // 0x40CDC0

    virtual void Release(int a2, unsigned int * a3);  // 0x40CD10 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void ddtor(); // 0x40CDC0
    virtual void Add(unsigned int * a2);  // 0x40CDF0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void Remove(int a2);  // 0x40CE30 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void QueryInterface(unsigned int * Block, char a2);  // 0x40CF30 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
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

    virtual void FindStartingCell(unsigned int * a1, int a2, int a3, int a4);  // 0x5D6890 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

};
// 1 methods in IDA
class OptionQueue
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~OptionQueue() = default;

    virtual void PushEntry(IUnknown * aP1);  // 0x4F1AA0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

};
// 1 methods in IDA
class OreManagerClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~OreManagerClass() = default;

    virtual void AssignMinerToRefinery(unsigned int * a2);  // 0x71AF20 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

};
// 1 methods in IDA
// CSP: OwnerDrawControl matched via T1
class OwnerDrawControl
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~OwnerDrawControl() = default;

    virtual void InitVtable(); // 0x624130

};
// 3 methods in IDA
class PKStrawClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~PKStrawClass() = default;

    virtual void Initialize(int a2, Straw * aP2);  // 0x633050 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void RelayBlowfishKey(int a2);  // 0x6330C0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void SetSource(int a2);  // 0x633110 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

    uint8_t PKStrawClass_field_0x04[4];
    uint8_t PKStrawClass_field_0x08[4];

    int processFrame;  // G42.39 data supply

    int updateUI;  // G42.39 data supply

    int loadScenarioFiles;  // G42.39 data supply

    int FrameLoop;  // G42.39 data supply

    int FindOpenSlot;  // G42.39 data supply

    int GetRelatedObject;  // G42.39 data supply

    int WriteEncryptedStream;  // G42.39 data supply

    int ReadEncryptedStream;  // G42.39 data supply

    int initPlayerData;  // G42.39 data supply

    int Shutdown;  // G42.39 data supply

    int ReadVersionFile;  // G42.39 data supply

    int ReadVersionFile2;  // G42.39 data supply

    int ReadVersionString;  // G42.39 data supply

    int processNetworkPacket;  // G42.39 data supply

    int initDisplay;  // G42.39 data supply

    int InitDifficultyButtons;  // G42.39 data supply

    int GetDifficultyString;  // G42.39 data supply

    int saveGameState;  // G42.39 data supply

    int loadGameState;  // G42.39 data supply

    int validateGameFile;  // G42.39 data supply

    int parseGameOptions;  // G42.39 data supply

    int applyGameSettings;  // G42.39 data supply

    int FindPlayerName;  // G42.39 data supply
};
// 2 methods in IDA
// CSP: PacketQueue matched via T1
class PacketQueue
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~PacketQueue() = default;

    virtual void ExtractEntry(void * a2, unsigned int * a3, int a4, void * a5, unsigned int * a6, unsigned short * a7);  // 0x48B570 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void ReleaseEntry(void *a1, unsigned int *a2, int aP3, void *a4, unsigned int *a5);  // 0x48B890 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

    uint8_t PacketQueue_field_0x04[4];
};
// 2 methods in IDA
class Performance
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~Performance() = default;

    virtual int Profile(); // 0x5355D0
    virtual int MeasureTicks(); // 0x5CAFC0

    uint8_t Performance_field_0x04[4];
};
// 1 methods in IDA
// CSP: PhoneEditor matched via T1
class PhoneEditor
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~PhoneEditor() = default;

    virtual void PopulateList(); // 0x631060

};
// 1 methods in IDA
class PingPongBuffer
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~PingPongBuffer() = default;

    virtual int GetWriteOffset(); // 0x55AF60

};
// 4 methods in IDA
class Pipe
{
public:
    virtual ~Pipe() = default;  // 0x631C80

    virtual void QueryInterface(int * Block, char a2);  // 0x4AEC80 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void Dtor(); // 0x631C80
    virtual void SetDelegate(int a2);  // 0x631CC0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    bool GetField(); // 0x7B7D80

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

    virtual void Notify(); // 0x63A230

};
// 2 methods in IDA
// CSP: PowerBar matched via T1
class PowerBar
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~PowerBar() = default;

    virtual int CalcFill(); // 0x63F850
    virtual void ComputeFill(PowerClass * aP0, ObjectClass * aP1, ObjectClass * aP2);  // 0x63F960 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

    uint8_t PowerBar_field_0x04[4];
};
// 2 methods in IDA
// CSP: PreviewClass matched via T1
class PreviewClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~PreviewClass() = default;

    virtual void ReadPreview(char *Source);  // 0x641EE0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void RenderMapPreview(CCINIClass * aP1);  // 0x689D30 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

    uint8_t PreviewClass_field_0x04[4];
};
// 1 methods in IDA
class PriQueue
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~PriQueue() = default;

    virtual void GetItemPtr(); // 0x5D4400

};
// 1 methods in IDA
// CSP: PrintTimerOnTactical matched via T1
class PrintTimerOnTactical
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~PrintTimerOnTactical() = default;

    virtual void Start(int ecx0, int a2, int a3, wchar_t * Format, unsigned int * a5, bool * a6);  // 0x6D4B50 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

};
// 2 methods in IDA
class PriorityQueue
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~PriorityQueue() = default;
    int Pop(); // 0x5AC960 (G42 sig-sync: def)
    virtual void Add(int aP1);  // 0x5D1C20 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

    uint8_t PriorityQueue_field_0x04[4];
};
// 1 methods in IDA
// CSP: ProductionClass matched via T1
class ProductionClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ProductionClass() = default;

    virtual void StartTimer(char a2);  // 0x4C9EA0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

};
// 1 methods in IDA
class ProductionQueue
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ProductionQueue() = default;

    virtual void CompleteOrCancel(); // 0x4CA1A0

};
// 1 methods in IDA
// CSP: ProjectileTrail matched via T1
class ProjectileTrail
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ProjectileTrail() = default;

    virtual void ComputeRenderData(); // 0x659AC0

};
// 2 methods in IDA
class Property
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~Property() = default;

    virtual void Set(int16_t aP1);  // 0x433C70 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void GetField11(); // 0x726910

    uint8_t Property_field_0x04[4];
};
// 1 methods in IDA
// CSP: PushCommandClass matched via T1
class PushCommandClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~PushCommandClass() = default;

    virtual void Execute(unsigned int * a1, int a2);  // 0x6D09C0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

};
// 1 methods in IDA
// CSP: RateScaler matched via T1
class RateScaler
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~RateScaler() = default;

    virtual void Init(double a2);  // 0x4A51F0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

};
// 1 methods in IDA
class ReinforcementClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ReinforcementClass() = default;

    virtual void CreateObject(); // 0x4737F0

};
// 2 methods in IDA
// CSP: ResultNode matched via T1
class ResultNode
{
public:
    virtual ~ResultNode() = default; // 0x625AB0

    virtual int Init(); // 0x4CB890
    virtual void CleanupList(); // 0x625AB0

    uint8_t ResultNode_field_0x04[4];
};
// 1 methods in IDA
class SHPClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~SHPClass() = default;

    virtual int Load(char *Source, char *aP2, int aP3);  // 0x642C20 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

};
// 2 methods in IDA
class SafeDelete
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~SafeDelete() = default;

    virtual void Conditional(int a1, int a2, void * Block, int a4, int16_t a5, int a6, int a7);  // 0x5C0EB0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual int Ptr(); // 0x7B7040

    uint8_t SafeDelete_field_0x04[4];
};
// 1 methods in IDA
class Scalar
{
public:
    virtual ~Scalar() = default;

    virtual void Dtor(void ** Block, char a2);  // 0x5ac340 (G42 sig-sync: def stubbed pending retranslation)

    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    void* Dtor(int a1);  // 0x5ac340 -- Scalar::Dtor
    // === SYMBOL-ANCHOR (END) ===
};
// 1 methods in IDA
// CSP: ScalarDtor matched via T1
class ScalarDtor
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ScalarDtor() = default;

    virtual void DeleteAndZero(void ** Block, char a2);  // 0x7AD310 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

};
// 1 methods in IDA
class ScoutVector
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ScoutVector() = default;

    virtual void Construct(int a2, int a3);  // 0x510780 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

};
// 1 methods in IDA
class ScriptActionQueue
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ScriptActionQueue() = default;

    virtual int PushNext(); // 0x660B80

};
// 1 methods in IDA
class ScriptActionVector
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ScriptActionVector() = default;

    virtual void PushBack(DynamicVector * aP1);  // 0x63EB80 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

};
// 1 methods in IDA
class ScriptQueue
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ScriptQueue() = default;

    virtual void PushEntry(); // 0x6378B0

};
// 1 methods in IDA
class SerialPort
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~SerialPort() = default;

    virtual void Close(); // 0x774950

};
// 2 methods in IDA
// CSP: ShapeButton matched via T1
class ShapeButton
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ShapeButton() = default;

    virtual void SetShape(int a2, int a3, int a4);  // 0x69DE00 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void Draw(int a2);  // 0x69DEB0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

    uint8_t ShapeButton_field_0x04[4];
};
// 3 methods in IDA
// CSP: ShapeButtonClass matched via T1
class ShapeButtonClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ShapeButtonClass() = default;

    virtual int Init(); // 0x69DCF0
    virtual void Constructor(ControlClass * aP1, ShapeButtonClass * aP2, ShapeButtonClass * aP3, ControlClass * aP4, int a6, int a7, char a8);  // 0x69DD30 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    static unsigned char * Constructor(void *aP0, int aP1, int aP2, int aP3, int aP4, int aP5, int aP6, char aP7);  // 0x69DD30 G42.35 static-form sync (ui/supplied sites 0x557292/0x5572AF)
    virtual void Destructor(); // 0x69DDC0
    static int Destructor(void *aP0);  // 0x69DDC0 G42.35 static-form sync (ui/supplied sites 0x557663/0x55766B)

    uint8_t ShapeButtonClass_field_0x04[4];
    uint8_t ShapeButtonClass_field_0x08[4];
};
// 1 methods in IDA
class ShapeButtonClass_Destru
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ShapeButtonClass_Destru() = default;

    virtual void QueryInterface(void * Block, char a2);  // 0x4B57F0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

};
// 1 methods in IDA
class Sides
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~Sides() = default;

    virtual int MixFileYuriFiles3(); // 0x72FBC0

};
// 1 methods in IDA
class SimpleDialogControl
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~SimpleDialogControl() = default;

    virtual int Constructor(); // 0x624110

};
// 1 methods in IDA
// CSP: SlaveControlVector matched via T1
class SlaveControlVector
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~SlaveControlVector() = default;

    virtual void Constructor(int a2, int a3);  // 0x6B1AB0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

};
// 1 methods in IDA
class SmudgeTypeList
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~SmudgeTypeList() = default;

    virtual void Copy(CCINIClass * aP1);  // 0x67C280 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

};
// 6 methods in IDA
class SmudgeTypeVector
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~SmudgeTypeVector() = default;

    virtual void Release(int a2, unsigned int * a3);  // 0x67AEB0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void AddSmudge(unsigned int * a2);  // 0x67AF90 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void Remove(int a2);  // 0x67AFD0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void Construct(int a2, int a3);  // 0x67AFF0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void Add(CCINIClass * aP1);  // 0x67B100 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
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

    virtual void GetIndex(int a2);  // 0x42D570 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void Find(CCINIClass * aP1);  // 0x52B170 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void BinarySearch2(Color * aP1);  // 0x52B210 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void FindValue(INIClass * aP1);  // 0x52B430 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void CheckCache(unsigned int * a2);  // 0x52B600 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
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
    int BinarySearch(int *a2);  // 0x52b620 -- SortedArray::BinarySearch G42.35 C6 体签名
    int Append(int a1, int a2);  // 0x5387d0 -- SortedArray::Append
    int RemoveByKey(int a1);  // 0x5388a0 -- SortedArray::RemoveByKey
    int FindPair(int a1);  // 0x538980 -- SortedArray::FindPair
    // === SYMBOL-ANCHOR (END) ===
};
// 1 methods in IDA
// CSP: SortedStateVector matched via T1
class SortedStateVector
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~SortedStateVector() = default;

    virtual void BinarySearch(IUnknown * aP1);  // 0x7107E0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

};
// 1 methods in IDA
class SortedVector
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~SortedVector() = default;

    virtual void BinarySearch(int * a2);  // 0x55F6E0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

};
// 2 methods in IDA
// CSP: SquadClass matched via T1
class SquadClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~SquadClass() = default;

    virtual int SelectAllMembers(); // 0x7314C0
    virtual void ProcessMove(); // 0x731840

    uint8_t SquadClass_field_0x04[4];
};
// 1 methods in IDA
class StartCombo
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~StartCombo() = default;

    virtual int IDToIndex(); // 0x4E4230

};
// 1 methods in IDA
class StartingTechnoVector
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~StartingTechnoVector() = default;

    virtual void Construct(int a2, int a3);  // 0x510690 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

};
// 1 methods in IDA
class State_WorldDominationTour
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~State_WorldDominationTour() = default;

    virtual void QueryInterface(char a2);  // 0x76F6C0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

};
// 6 methods in IDA
class StaticButtonClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~StaticButtonClass() = default;

    virtual void ReleaseBuffer(unsigned int * a2);  // 0x43AE10 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void SetText(ControlClass * aP1);  // 0x6C6640 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void Draw(DropListClass * aP1, char a3);  // 0x6C6680 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void HitTest(); // 0x6C6740
    virtual void OnClick(size_t a2);  // 0x6C67F0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
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

    virtual int Factory(); // 0x7AF2A0

};
// 2 methods in IDA
#ifndef GAMEMD_E4_Straw  // G42.34: per-class opt-in -- e4 flat Straw_e4.hpp wins
class Straw
{
public:
    virtual ~Straw() = default;  // 0x6C9850

    virtual void QueryInterface(int * Block, char a2);  // 0x4AEC10 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void Dtor(); // 0x6C9850

    uint8_t Straw_field_0x04[4];
};
#endif // GAMEMD_E4_Straw
// 3 methods in IDA
class Subzone
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~Subzone() = default;

    virtual void BuildGraph(IUnknown * aP2);  // 0x581F90 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void Constructor(int a2, int a3);  // 0x589100 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void CopyDataFrom(int a2);  // 0x58A500 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

    uint8_t Subzone_field_0x04[4];
    uint8_t Subzone_field_0x08[4];
};
// 3 methods in IDA
class SubzoneConnectionVector
{
public:
    virtual ~SubzoneConnectionVector() = default;  // 0x40B070

    virtual void Destruct(unsigned int * Block, char a2);  // 0x40B070 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void ClearAndFree(); // 0x588D60
    virtual void FindByCoord(int a2);  // 0x589C10 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

    uint8_t SubzoneConnectionVector_field_0x04[4];
    uint8_t SubzoneConnectionVector_field_0x08[4];
};
// 1 methods in IDA
// CSP: SubzoneHashVector matched via T1
class SubzoneHashVector
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~SubzoneHashVector() = default;

    virtual void Construct(int a2, int a3);  // 0x58B070 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

};
// 1 methods in IDA
class SubzoneTrackingVector
{
public:
    virtual ~SubzoneTrackingVector() = default;  // 0x58A5B0

    virtual void Destruct(unsigned int * Block, char a2);  // 0x58A5B0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

};
// 2 methods in IDA
class SwizzleManager
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~SwizzleManager() = default;

    virtual void SaveLoad(int * a1, int * a2);  // 0x55AAC0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void ConvertWrapper(SwizzleManagerClass * aP0);  // 0x6CF230 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

    uint8_t SwizzleManager_field_0x04[4];
};
// 10 methods in IDA
// CSP: SwizzleManagerClass matched via T1
class SwizzleManagerClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~SwizzleManagerClass() = default;

    virtual void Register(); // 0x6CF0F0
    virtual void Here_I_Am(SwizzleManagerClass * aP0, AbstractClass * aP1, AbstractClass * aP2);  // 0x6CF2C0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void ConvertNodes(); // 0x6CF350
    virtual void Clear(int a1, unsigned int * a2);  // 0x6CF410 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void Process(SwizzleManagerClass * aP0, const void * a1, unsigned int * a2);  // 0x6CF430 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
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
// CSP: SymbolTable matched via T1
class SymbolTable
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~SymbolTable() = default;

    virtual void Rebuild(int ** a2);  // 0x6234B0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void Insert(unsigned int * a2, int *** Block);  // 0x624530 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

    uint8_t SymbolTable_field_0x04[4];
};
// 1 methods in IDA
class TAction
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~TAction() = default;

    virtual void CenterOnStartCoords(); // 0x7315A0

};
// 4 methods in IDA
class TClassFactory_AITriggerTypeClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~TClassFactory_AITriggerTypeClass() = default;

    virtual int AddRef(); // 0x6C5C40
    virtual int GetClassName(); // 0x6C5C60
    virtual int GetClassIdentifier(); // 0x6C5C90
    virtual int GetSize(); // 0x6C5D10

    uint8_t TClassFactory_AITriggerTypeClass_field_0x04[4];
    uint8_t TClassFactory_AITriggerTypeClass_field_0x08[4];
    uint8_t TClassFactory_AITriggerTypeClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_AircraftClass
{
public:
    virtual ~TClassFactory_AircraftClass() = default;  // 0x6C3710

    virtual int AddRef(); // 0x6C36C0
    virtual int GetClassName(); // 0x6C36E0
    virtual int ddtor(); // 0x6C3710
    virtual int GetSize(); // 0x6C3790

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

    virtual int AddRef(); // 0x6C2AC0
    virtual int GetClassName(); // 0x6C2AE0
    virtual int GetClassIdentifier(); // 0x6C2B10
    virtual int GetSize(); // 0x6C2B90

    uint8_t TClassFactory_AircraftTypeClass_field_0x04[4];
    uint8_t TClassFactory_AircraftTypeClass_field_0x08[4];
    uint8_t TClassFactory_AircraftTypeClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_AirstrikeClass
{
public:
    virtual ~TClassFactory_AirstrikeClass() = default;  // 0x6C0890

    virtual int AddRef(); // 0x6C0840
    virtual int GetClassName(); // 0x6C0860
    virtual void ddtor(); // 0x6C0890
    virtual int GetSize(); // 0x6C0910

    uint8_t TClassFactory_AirstrikeClass_field_0x04[4];
    uint8_t TClassFactory_AirstrikeClass_field_0x08[4];
    uint8_t TClassFactory_AirstrikeClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_AlphaShapeClass
{
public:
    virtual ~TClassFactory_AlphaShapeClass() = default;  // 0x6C6110

    virtual int AddRef(); // 0x6C60C0
    virtual int GetClassName(); // 0x6C60E0
    virtual int ddtor(); // 0x6C6110
    virtual int GetSize(); // 0x6C6190

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

    virtual int AddRef(); // 0x6C3B40
    virtual int GetClassName(); // 0x6C3B60
    virtual int GetClassIdentifier(); // 0x6C3B90
    virtual int GetSize(); // 0x6C3C10

    uint8_t TClassFactory_AnimTypeClass_field_0x04[4];
    uint8_t TClassFactory_AnimTypeClass_field_0x08[4];
    uint8_t TClassFactory_AnimTypeClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_BombClass
{
public:
    virtual ~TClassFactory_BombClass() = default;  // 0x6C1190

    virtual int AddRef(); // 0x6C1140
    virtual int GetClassName(); // 0x6C1160
    virtual int ddtor(); // 0x6C1190
    virtual int GetSize(); // 0x6C1210

    uint8_t TClassFactory_BombClass_field_0x04[4];
    uint8_t TClassFactory_BombClass_field_0x08[4];
    uint8_t TClassFactory_BombClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_BuildingClass
{
public:
    virtual ~TClassFactory_BuildingClass() = default;  // 0x6C3590

    virtual int AddRef(); // 0x6C3540
    virtual int GetClassName(); // 0x6C3560
    virtual int ddtor(); // 0x6C3590
    virtual int GetSize(); // 0x6C3610

    uint8_t TClassFactory_BuildingClass_field_0x04[4];
    uint8_t TClassFactory_BuildingClass_field_0x08[4];
    uint8_t TClassFactory_BuildingClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_BuildingLightClass
{
public:
    virtual ~TClassFactory_BuildingLightClass() = default;  // 0x6C0410

    virtual int AddRef(); // 0x6C03C0
    virtual int GetClassName(); // 0x6C03E0
    virtual int ddtor(); // 0x6C0410
    virtual int GetSize(); // 0x6C0490

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

    virtual int AddRef(); // 0x6C2940
    virtual int GetClassName(); // 0x6C2960
    virtual int GetClassIdentifier(); // 0x6C2990
    virtual int GetSize(); // 0x6C2A10

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

    virtual int AddRef(); // 0x6C2DC0
    virtual int GetClassName(); // 0x6C2DE0
    virtual int GetClassIdentifier(); // 0x6C2E10
    virtual int GetSize(); // 0x6C2E90

    uint8_t TClassFactory_BulletTypeClass_field_0x04[4];
    uint8_t TClassFactory_BulletTypeClass_field_0x08[4];
    uint8_t TClassFactory_BulletTypeClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_CaptureManagerClass
{
public:
    virtual ~TClassFactory_CaptureManagerClass() = default;  // 0x6C0D10

    virtual int AddRef(); // 0x6C0CC0
    virtual int GetClassName(); // 0x6C0CE0
    virtual int ddtor(); // 0x6C0D10
    virtual int GetSize(); // 0x6C0D90

    uint8_t TClassFactory_CaptureManagerClass_field_0x04[4];
    uint8_t TClassFactory_CaptureManagerClass_field_0x08[4];
    uint8_t TClassFactory_CaptureManagerClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_DiskLaserClass
{
public:
    virtual ~TClassFactory_DiskLaserClass() = default;  // 0x6C0E90

    virtual int AddRef(); // 0x6C0E40
    virtual int GetClassName(); // 0x6C0E60
    virtual int ddtor(); // 0x6C0E90
    virtual int GetSize(); // 0x6C0F10

    uint8_t TClassFactory_DiskLaserClass_field_0x04[4];
    uint8_t TClassFactory_DiskLaserClass_field_0x08[4];
    uint8_t TClassFactory_DiskLaserClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_DriveLocomotionClass
{
public:
    virtual ~TClassFactory_DriveLocomotionClass() = default;  // 0x6C4010

    virtual int AddRef(); // 0x6C3FC0
    virtual int GetClassName(); // 0x6C3FE0
    virtual int ddtor(); // 0x6C4010
    virtual int GetSize(); // 0x6C4090

    uint8_t TClassFactory_DriveLocomotionClass_field_0x04[4];
    uint8_t TClassFactory_DriveLocomotionClass_field_0x08[4];
    uint8_t TClassFactory_DriveLocomotionClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_DropPodLocomotionClass
{
public:
    virtual ~TClassFactory_DropPodLocomotionClass() = default;  // 0x6C4910

    virtual int AddRef(); // 0x6C48C0
    virtual int GetClassName(); // 0x6C48E0
    virtual int ddtor(); // 0x6C4910
    virtual int GetSize(); // 0x6C4990

    uint8_t TClassFactory_DropPodLocomotionClass_field_0x04[4];
    uint8_t TClassFactory_DropPodLocomotionClass_field_0x08[4];
    uint8_t TClassFactory_DropPodLocomotionClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_FactoryClass
{
public:
    virtual ~TClassFactory_FactoryClass() = default;  // 0x6C5210

    virtual int AddRef(); // 0x6C51C0
    virtual int GetClassName(); // 0x6C51E0
    virtual int ddtor(); // 0x6C5210
    virtual int GetSize(); // 0x6C5290

    uint8_t TClassFactory_FactoryClass_field_0x04[4];
    uint8_t TClassFactory_FactoryClass_field_0x08[4];
    uint8_t TClassFactory_FactoryClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_FlyLocomotionClass
{
public:
    virtual ~TClassFactory_FlyLocomotionClass() = default;  // 0x6C4A90

    virtual int AddRef(); // 0x6C4A40
    virtual int GetClassName(); // 0x6C4A60
    virtual int ddtor(); // 0x6C4A90
    virtual int GetSize(); // 0x6C4B10

    uint8_t TClassFactory_FlyLocomotionClass_field_0x04[4];
    uint8_t TClassFactory_FlyLocomotionClass_field_0x08[4];
    uint8_t TClassFactory_FlyLocomotionClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_FoggedObjectClass
{
public:
    virtual ~TClassFactory_FoggedObjectClass() = default;  // 0x6C5F90

    virtual int AddRef(); // 0x6C5F40
    virtual int GetClassName(); // 0x6C5F60
    virtual int ddtor(); // 0x6C5F90
    virtual int GetSize(); // 0x6C6010

    uint8_t TClassFactory_FoggedObjectClass_field_0x04[4];
    uint8_t TClassFactory_FoggedObjectClass_field_0x08[4];
    uint8_t TClassFactory_FoggedObjectClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_HouseClass
{
public:
    virtual ~TClassFactory_HouseClass() = default;  // 0x6C3E90

    virtual int AddRef(); // 0x6C3E40
    virtual int GetClassName(); // 0x6C3E60
    virtual int ddtor(); // 0x6C3E90
    virtual int GetSize(); // 0x6C3F10

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

    virtual int AddRef(); // 0x6C3CC0
    virtual int GetClassName(); // 0x6C3CE0
    virtual int GetClassIdentifier(); // 0x6C3D10
    virtual int GetSize(); // 0x6C3D90

    uint8_t TClassFactory_HouseTypeClass_field_0x04[4];
    uint8_t TClassFactory_HouseTypeClass_field_0x08[4];
    uint8_t TClassFactory_HouseTypeClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_HoverLocomotionClass
{
public:
    virtual ~TClassFactory_HoverLocomotionClass() = default;  // 0x6C4310

    virtual int AddRef(); // 0x6C42C0
    virtual int GetClassName(); // 0x6C42E0
    virtual int ddtor(); // 0x6C4310
    virtual int GetSize(); // 0x6C4390

    uint8_t TClassFactory_HoverLocomotionClass_field_0x04[4];
    uint8_t TClassFactory_HoverLocomotionClass_field_0x08[4];
    uint8_t TClassFactory_HoverLocomotionClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_InfantryClass
{
public:
    virtual ~TClassFactory_InfantryClass() = default;  // 0x6C3890

    virtual int AddRef(); // 0x6C3840
    virtual int GetClassName(); // 0x6C3860
    virtual int ddtor(); // 0x6C3890
    virtual int GetSize(); // 0x6C3910

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

    virtual int AddRef(); // 0x6C2C40
    virtual int GetClassName(); // 0x6C2C60
    virtual int GetClassIdentifier(); // 0x6C2C90
    virtual int GetSize(); // 0x6C2D10

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

    virtual int AddRef(); // 0x6C2F40
    virtual int GetClassName(); // 0x6C2F60
    virtual int GetClassIdentifier(); // 0x6C2F90
    virtual int GetSize(); // 0x6C3010

    uint8_t TClassFactory_IsometricTileTypeClass_field_0x04[4];
    uint8_t TClassFactory_IsometricTileTypeClass_field_0x08[4];
    uint8_t TClassFactory_IsometricTileTypeClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_JumpjetLocomotionClass
{
public:
    virtual ~TClassFactory_JumpjetLocomotionClass() = default;  // 0x6C4190

    virtual int AddRef(); // 0x6C4140
    virtual int GetClassName(); // 0x6C4160
    virtual int ddtor(); // 0x6C4190
    virtual int GetSize(); // 0x6C4210

    uint8_t TClassFactory_JumpjetLocomotionClass_field_0x04[4];
    uint8_t TClassFactory_JumpjetLocomotionClass_field_0x08[4];
    uint8_t TClassFactory_JumpjetLocomotionClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_LightSourceClass
{
public:
    virtual ~TClassFactory_LightSourceClass() = default;  // 0x6BFC90

    virtual int AddRef(); // 0x6BFC40
    virtual int GetClassName(); // 0x6BFC60
    virtual int ddtor(); // 0x6BFC90
    virtual int GetSize(); // 0x6BFD10

    uint8_t TClassFactory_LightSourceClass_field_0x04[4];
    uint8_t TClassFactory_LightSourceClass_field_0x08[4];
    uint8_t TClassFactory_LightSourceClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_NeuronClass
{
public:
    virtual ~TClassFactory_NeuronClass() = default;  // 0x6C5E10

    virtual int AddRef(); // 0x6C5DC0
    virtual int GetClassName(); // 0x6C5DE0
    virtual int ddtor(); // 0x6C5E10
    virtual int GetSize(); // 0x6C5E90

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

    virtual int AddRef(); // 0x6C30C0
    virtual int GetClassName(); // 0x6C30E0
    virtual int GetClassIdentifier(); // 0x6C3110
    virtual int GetSize(); // 0x6C3190

    uint8_t TClassFactory_OverlayTypeClass_field_0x04[4];
    uint8_t TClassFactory_OverlayTypeClass_field_0x08[4];
    uint8_t TClassFactory_OverlayTypeClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_ParasiteClass
{
public:
    virtual ~TClassFactory_ParasiteClass() = default;  // 0x6C1010

    virtual int AddRef(); // 0x6C0FC0
    virtual int GetClassName(); // 0x6C0FE0
    virtual int ddtor(); // 0x6C1010
    virtual int GetSize(); // 0x6C1090

    uint8_t TClassFactory_ParasiteClass_field_0x04[4];
    uint8_t TClassFactory_ParasiteClass_field_0x08[4];
    uint8_t TClassFactory_ParasiteClass_field_0x0C[4];
};
// 3 methods in IDA
class TClassFactory_ParticleClass
{
public:
    virtual ~TClassFactory_ParticleClass() = default;  // 0x6C5690

    virtual int GetClassName(); // 0x6C5660
    virtual int ddtor(); // 0x6C5690
    virtual int GetSize(); // 0x6C5710

    uint8_t TClassFactory_ParticleClass_field_0x04[4];
    uint8_t TClassFactory_ParticleClass_field_0x08[4];
};
// 4 methods in IDA
class TClassFactory_ParticleSystemClass
{
public:
    virtual ~TClassFactory_ParticleSystemClass() = default;  // 0x6C5990

    virtual int AddRef(); // 0x6C5940
    virtual int GetClassName(); // 0x6C5960
    virtual int ddtor(); // 0x6C5990
    virtual int GetSize(); // 0x6C5A10

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

    virtual int AddRef(); // 0x6C5AC0
    virtual int GetClassName(); // 0x6C5AE0
    virtual int GetClassIdentifier(); // 0x6C5B10
    virtual int GetSize(); // 0x6C5B90

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

    virtual int AddRef(); // 0x6C57C0
    virtual int GetClassName(); // 0x6C57E0
    virtual int GetClassIdentifier(); // 0x6C5810
    virtual int GetSize(); // 0x6C5890

    uint8_t TClassFactory_ParticleTypeClass_field_0x04[4];
    uint8_t TClassFactory_ParticleTypeClass_field_0x08[4];
    uint8_t TClassFactory_ParticleTypeClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_RadSiteClass
{
public:
    virtual ~TClassFactory_RadSiteClass() = default;  // 0x6C1310

    virtual int AddRef(); // 0x6C12C0
    virtual int GetClassName(); // 0x6C12E0
    virtual int ddtor(); // 0x6C1310
    virtual int GetSize(); // 0x6C1390

    uint8_t TClassFactory_RadSiteClass_field_0x04[4];
    uint8_t TClassFactory_RadSiteClass_field_0x08[4];
    uint8_t TClassFactory_RadSiteClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_RocketLocomotionClass
{
public:
    virtual ~TClassFactory_RocketLocomotionClass() = default;  // 0x6C4490

    virtual int AddRef(); // 0x6C4440
    virtual int GetClassName(); // 0x6C4460
    virtual int ddtor(); // 0x6C4490
    virtual int GetSize(); // 0x6C4510

    uint8_t TClassFactory_RocketLocomotionClass_field_0x04[4];
    uint8_t TClassFactory_RocketLocomotionClass_field_0x08[4];
    uint8_t TClassFactory_RocketLocomotionClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_ScriptClass
{
public:
    virtual ~TClassFactory_ScriptClass() = default;  // 0x6C1D90

    virtual int AddRef(); // 0x6C1D40
    virtual int GetClassName(); // 0x6C1D60
    virtual void ddtor(); // 0x6C1D90
    virtual int GetSize(); // 0x6C1E10

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

    virtual int AddRef(); // 0x6C1EC0
    virtual int GetClassName(); // 0x6C1EE0
    virtual int GetClassIdentifier(); // 0x6C1F10
    virtual int GetSize(); // 0x6C1F90

    uint8_t TClassFactory_ScriptTypeClass_field_0x04[4];
    uint8_t TClassFactory_ScriptTypeClass_field_0x08[4];
    uint8_t TClassFactory_ScriptTypeClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_ShipLocomotionClass
{
public:
    virtual ~TClassFactory_ShipLocomotionClass() = default;  // 0x6C4F10

    virtual int AddRef(); // 0x6C4EC0
    virtual int GetClassName(); // 0x6C4EE0
    virtual int ddtor(); // 0x6C4F10
    virtual int GetSize(); // 0x6C4F90

    uint8_t TClassFactory_ShipLocomotionClass_field_0x04[4];
    uint8_t TClassFactory_ShipLocomotionClass_field_0x08[4];
    uint8_t TClassFactory_ShipLocomotionClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_SideClass
{
public:
    virtual ~TClassFactory_SideClass() = default;  // 0x6BFE10

    virtual int AddRef(); // 0x6BFDC0
    virtual int GetClassName(); // 0x6BFDE0
    virtual int ddtor(); // 0x6BFE10
    virtual int GetSize(); // 0x6BFE90

    uint8_t TClassFactory_SideClass_field_0x04[4];
    uint8_t TClassFactory_SideClass_field_0x08[4];
    uint8_t TClassFactory_SideClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_SlaveManagerClass
{
public:
    virtual ~TClassFactory_SlaveManagerClass() = default;  // 0x6C0B90

    virtual int AddRef(); // 0x6C0B40
    virtual int GetClassName(); // 0x6C0B60
    virtual int ddtor(); // 0x6C0B90
    virtual int GetSize(); // 0x6C0C10

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

    virtual int AddRef(); // 0x6C3240
    virtual int GetClassName(); // 0x6C3260
    virtual int GetClassIdentifier(); // 0x6C3290
    virtual int GetSize(); // 0x6C3310

    uint8_t TClassFactory_SmudgeTypeClass_field_0x04[4];
    uint8_t TClassFactory_SmudgeTypeClass_field_0x08[4];
    uint8_t TClassFactory_SmudgeTypeClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_SpawnManagerClass
{
public:
    virtual ~TClassFactory_SpawnManagerClass() = default;  // 0x6C0A10

    virtual int AddRef(); // 0x6C09C0
    virtual int GetClassName(); // 0x6C09E0
    virtual int ddtor(); // 0x6C0A10
    virtual int GetSize(); // 0x6C0A90

    uint8_t TClassFactory_SpawnManagerClass_field_0x04[4];
    uint8_t TClassFactory_SpawnManagerClass_field_0x08[4];
    uint8_t TClassFactory_SpawnManagerClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_TActionClass
{
public:
    virtual ~TClassFactory_TActionClass() = default;  // 0x6C1910

    virtual int AddRef(); // 0x6C18C0
    virtual int GetClassName(); // 0x6C18E0
    virtual int ddtor(); // 0x6C1910
    virtual int GetSize(); // 0x6C1990

    uint8_t TClassFactory_TActionClass_field_0x04[4];
    uint8_t TClassFactory_TActionClass_field_0x08[4];
    uint8_t TClassFactory_TActionClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_TEventClass
{
public:
    virtual ~TClassFactory_TEventClass() = default;  // 0x6C1490

    virtual int AddRef(); // 0x6C1440
    virtual int GetClassName(); // 0x6C1460
    virtual int ddtor(); // 0x6C1490
    virtual int GetSize(); // 0x6C1510

    uint8_t TClassFactory_TEventClass_field_0x04[4];
    uint8_t TClassFactory_TEventClass_field_0x08[4];
    uint8_t TClassFactory_TEventClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_TagClass
{
public:
    virtual ~TClassFactory_TagClass() = default;  // 0x6C2090

    virtual int AddRef(); // 0x6C2040
    virtual int GetClassName(); // 0x6C2060
    virtual int ddtor(); // 0x6C2090
    virtual int GetSize(); // 0x6C2110

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

    virtual int AddRef(); // 0x6C21C0
    virtual int GetClassName(); // 0x6C21E0
    virtual int GetClassIdentifier(); // 0x6C2210
    virtual int GetSize(); // 0x6C2290

    uint8_t TClassFactory_TagTypeClass_field_0x04[4];
    uint8_t TClassFactory_TagTypeClass_field_0x08[4];
    uint8_t TClassFactory_TagTypeClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_TaskForceClass
{
public:
    virtual ~TClassFactory_TaskForceClass() = default;  // 0x6C2690

    virtual int AddRef(); // 0x6C2640
    virtual int GetClassName(); // 0x6C2660
    virtual int ddtor(); // 0x6C2690
    virtual int GetSize(); // 0x6C2710

    uint8_t TClassFactory_TaskForceClass_field_0x04[4];
    uint8_t TClassFactory_TaskForceClass_field_0x08[4];
    uint8_t TClassFactory_TaskForceClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_TeamClass
{
public:
    virtual ~TClassFactory_TeamClass() = default;  // 0x6C2390

    virtual int AddRef(); // 0x6C2340
    virtual int GetClassName(); // 0x6C2360
    virtual int ddtor(); // 0x6C2390
    virtual int GetSize(); // 0x6C2410

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

    virtual int AddRef(); // 0x6C24C0
    virtual int GetClassName(); // 0x6C24E0
    virtual int GetClassIdentifier(); // 0x6C2510
    virtual int GetSize(); // 0x6C2590

    uint8_t TClassFactory_TeamTypeClass_field_0x04[4];
    uint8_t TClassFactory_TeamTypeClass_field_0x08[4];
    uint8_t TClassFactory_TeamTypeClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_TeleportLocomotionClass
{
public:
    virtual ~TClassFactory_TeleportLocomotionClass() = default;  // 0x6C4C10

    virtual int AddRef(); // 0x6C4BC0
    virtual int GetClassName(); // 0x6C4BE0
    virtual int ddtor(); // 0x6C4C10
    virtual int GetSize(); // 0x6C4C90

    uint8_t TClassFactory_TeleportLocomotionClass_field_0x04[4];
    uint8_t TClassFactory_TeleportLocomotionClass_field_0x08[4];
    uint8_t TClassFactory_TeleportLocomotionClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_TemporalClass
{
public:
    virtual ~TClassFactory_TemporalClass() = default;  // 0x6C0710

    virtual int AddRef(); // 0x6C06C0
    virtual int GetClassName(); // 0x6C06E0
    virtual int ddtor(); // 0x6C0710
    virtual int GetSize(); // 0x6C0790

    uint8_t TClassFactory_TemporalClass_field_0x04[4];
    uint8_t TClassFactory_TemporalClass_field_0x08[4];
    uint8_t TClassFactory_TemporalClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_TiberiumClass
{
public:
    virtual ~TClassFactory_TiberiumClass() = default;  // 0x6BFF90

    virtual int AddRef(); // 0x6BFF40
    virtual int GetClassName(); // 0x6BFF60
    virtual int ddtor(); // 0x6BFF90
    virtual int GetSize(); // 0x6C0010

    uint8_t TClassFactory_TiberiumClass_field_0x04[4];
    uint8_t TClassFactory_TiberiumClass_field_0x08[4];
    uint8_t TClassFactory_TiberiumClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_TriggerClass
{
public:
    virtual ~TClassFactory_TriggerClass() = default;  // 0x6C1A90

    virtual int AddRef(); // 0x6C1A40
    virtual int GetClassName(); // 0x6C1A60
    virtual int ddtor(); // 0x6C1A90
    virtual int GetSize(); // 0x6C1B10

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

    virtual int AddRef(); // 0x6C1BC0
    virtual int GetClassName(); // 0x6C1BE0
    virtual int GetClassIdentifier(); // 0x6C1C10
    virtual int GetSize(); // 0x6C1C90

    uint8_t TClassFactory_TriggerTypeClass_field_0x04[4];
    uint8_t TClassFactory_TriggerTypeClass_field_0x08[4];
    uint8_t TClassFactory_TriggerTypeClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_TunnelLocomotionClass
{
public:
    virtual ~TClassFactory_TunnelLocomotionClass() = default;  // 0x6C4610

    virtual int AddRef(); // 0x6C45C0
    virtual int GetClassName(); // 0x6C45E0
    virtual int ddtor(); // 0x6C4610
    virtual int GetSize(); // 0x6C4690

    uint8_t TClassFactory_TunnelLocomotionClass_field_0x04[4];
    uint8_t TClassFactory_TunnelLocomotionClass_field_0x08[4];
    uint8_t TClassFactory_TunnelLocomotionClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_UnitClass
{
public:
    virtual ~TClassFactory_UnitClass() = default;  // 0x6C3410

    virtual int AddRef(); // 0x6C33C0
    virtual int GetClassName(); // 0x6C33E0
    virtual int ddtor(); // 0x6C3410
    virtual int GetSize(); // 0x6C3490

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

    virtual int AddRef(); // 0x6C27C0
    virtual int GetClassName(); // 0x6C27E0
    virtual int GetClassIdentifier(); // 0x6C2810
    virtual int GetSize(); // 0x6C2890

    uint8_t TClassFactory_UnitTypeClass_field_0x04[4];
    uint8_t TClassFactory_UnitTypeClass_field_0x08[4];
    uint8_t TClassFactory_UnitTypeClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_VoxelAnimClass
{
public:
    virtual ~TClassFactory_VoxelAnimClass() = default;  // 0x6C1790

    virtual int AddRef(); // 0x6C1740
    virtual int GetClassName(); // 0x6C1760
    virtual int ddtor(); // 0x6C1790
    virtual int GetSize(); // 0x6C1810

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

    virtual int AddRef(); // 0x6C15C0
    virtual int GetClassName(); // 0x6C15E0
    virtual int GetClassIdentifier(); // 0x6C1610
    virtual int GetSize(); // 0x6C1690

    uint8_t TClassFactory_VoxelAnimTypeClass_field_0x04[4];
    uint8_t TClassFactory_VoxelAnimTypeClass_field_0x08[4];
    uint8_t TClassFactory_VoxelAnimTypeClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_WalkLocomotionClass
{
public:
    virtual ~TClassFactory_WalkLocomotionClass() = default;  // 0x6C4790

    virtual int AddRef(); // 0x6C4740
    virtual int GetClassName(); // 0x6C4760
    virtual int ddtor(); // 0x6C4790
    virtual int GetSize(); // 0x6C4810

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

    virtual int AddRef(); // 0x6C5340
    virtual int GetClassName(); // 0x6C5360
    virtual int GetClassIdentifier(); // 0x6C5390
    virtual int GetSize(); // 0x6C5410

    uint8_t TClassFactory_WarheadTypeClass_field_0x04[4];
    uint8_t TClassFactory_WarheadTypeClass_field_0x08[4];
    uint8_t TClassFactory_WarheadTypeClass_field_0x0C[4];
};
// 4 methods in IDA
class TClassFactory_WaypointPathClass
{
public:
    virtual ~TClassFactory_WaypointPathClass() = default;  // 0x6C0590

    virtual int AddRef(); // 0x6C0540
    virtual int GetClassName(); // 0x6C0560
    virtual int ddtor(); // 0x6C0590
    virtual int GetSize(); // 0x6C0610

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

    virtual int AddRef(); // 0x6C54C0
    virtual int GetClassName(); // 0x6C54E0
    virtual int GetClassIdentifier(); // 0x6C5510
    virtual int GetSize(); // 0x6C5590

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

    virtual void Construct(int a2, int a3);  // 0x510640 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

};
// 1 methods in IDA
class Targeting
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~Targeting() = default;

    virtual void Readd(IUnknown * aP0);  // 0x4A9720 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

};
// 1 methods in IDA
class TaskManager
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~TaskManager() = default;

    virtual void Update(); // 0x6B7100

};
// 2 methods in IDA
// CSP: TechnoTypeVector matched via T1
class TechnoTypeVector
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~TechnoTypeVector() = default;

    virtual void Constructor(int a2, int a3);  // 0x4CABF0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void Construct(int a2, int a3);  // 0x68C200 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

    uint8_t TechnoTypeVector_field_0x04[4];
};
// 1 methods in IDA
class TeknoClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~TeknoClass() = default;

    virtual void GetType(TeamTypeClass * aP1);  // 0x6E4DE0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

};
// 1 methods in IDA
class TerrainTypeVector
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~TerrainTypeVector() = default;

    virtual void Construct(int a2, int a3);  // 0x67B370 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

};
// 1 methods in IDA
class Territory_WorldDominationTour
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~Territory_WorldDominationTour() = default;

    virtual void QueryInterface(char a2);  // 0x770020 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

};
// 1 methods in IDA
class TheatreClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~TheatreClass() = default;

    virtual int InitView(); // 0x545000

};
// 1 methods in IDA
// CSP: TileData matched via T1
class TileData
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~TileData() = default;

    virtual int Constructor(); // 0x58BDC0

};
// 1 methods in IDA
// CSP: TileNode matched via T1
class TileNode
{
public:
    virtual ~TileNode() = default; // 0x58C070

    virtual void Cleanup(); // 0x58C070

};
// 4 methods in IDA
// CSP: TileSystem matched via T1
class TileSystem
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~TileSystem() = default;

    virtual int LookupMapTile(); // 0x58D0A0
    virtual void BuildNodes(); // 0x58D620
    virtual void AnalyzeTileConnectivity(); // 0x58E5D0
    virtual void Constructor(ObjectClass * aP1, ObjectClass * aP2);  // 0x5AD740 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

    uint8_t TileSystem_field_0x04[4];
    uint8_t TileSystem_field_0x08[4];
    uint8_t TileSystem_field_0x0C[4];
};
// 1 methods in IDA
// CSP: TileVector matched via T1
class TileVector
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~TileVector() = default;

    virtual void PushBack(MouseClass * aP1);  // 0x589C50 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

};
// 2 methods in IDA
// CSP: ToggleClass matched via T1
class ToggleClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ToggleClass() = default;

    virtual void QueryInterface(unsigned int * Block, char a2);  // 0x4B5810 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void Construct(ControlClass * aP1, ControlClass * aP2, ControlClass * aP3, ControlClass * aP4, ControlClass * aP5);  // 0x723E60 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

    uint8_t ToggleClass_field_0x04[4];
};
// 1 methods in IDA
class ToggleRepairModeCommandClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~ToggleRepairModeCommandClass() = default;

    virtual void Execute(int a1);  // 0x536FA0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

};
// 1 methods in IDA
// CSP: Triple matched via T1
class Triple
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~Triple() = default;

    virtual void Set(IUnknown * aP1, IUnknown * aP2, IUnknown * aP3);  // 0x43A0B0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

};
// 1 methods in IDA
class UnitTypeList
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~UnitTypeList() = default;

    virtual int Constructor(); // 0x67A740

};
// 7 methods in IDA
class UnitTypeVector
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~UnitTypeVector() = default;

    virtual void QueryInterface(unsigned int * Block, char a2);  // 0x512B30 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void Release(int a2, unsigned int * a3);  // 0x513050 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void Add(unsigned int * a2);  // 0x513130 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void Remove(int a2);  // 0x513170 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void Construct(int a2, int a3);  // 0x513190 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
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
// CSP: VQAClass matched via T1
class VQAClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~VQAClass() = default;

    virtual void AdvanceFrame(unsigned char * a2);  // 0x759C30 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

};
// 2 methods in IDA
class VeinholeClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~VeinholeClass() = default;

    virtual void SelectGrowthPosition(); // 0x74DC00
    virtual int GetState(); // 0x74FFF0

    uint8_t VeinholeClass_field_0x04[4];
};
// 11 methods in IDA
// CSP: VeinholeMonsterClass matched via T1
class VeinholeMonsterClass
{
public:
    virtual ~VeinholeMonsterClass() = default;  // 0x74F2D0

    virtual void Construct(AbstractClass * aP1);  // 0x74C420 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void Constructor(IUnknown * aP1);  // 0x74C5B0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void UpdateGrowth(); // 0x74CE50
    virtual void ProcessExpansion(int a2, int a3, int a4, int a5, int a6, int a7, int a8);  // 0x74D5D0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void PlaceGrowth(); // 0x74E930
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

    virtual void Read(); // 0x74F760

};
// 2 methods in IDA
// CSP: Viewport matched via T1
class Viewport
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~Viewport() = default;

    virtual void ProcessScroll(unsigned int * a2);  // 0x692B60 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual int Clear(); // 0x753E00

    uint8_t Viewport_field_0x04[4];
};
// 9 methods in IDA
// CSP: VtableStub matched via T1
class VtableStub
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~VtableStub() = default;

    virtual void Push_407510(void * Block);  // 0x407510 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void Method_425270(); // 0x425270
    virtual int Method_477740(); // 0x477740
    virtual void Method_5175D0(); // 0x5175D0
    virtual int Method_55CBF0(); // 0x55CBF0
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
// CSP: WDTClass matched via T1
class WDTClass
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~WDTClass() = default;

    virtual void GetCellType(unsigned int a2);  // 0x76F600 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void CountCellType(int a2);  // 0x76F670 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

    uint8_t WDTClass_field_0x04[4];
};
// 4 methods in IDA
// CSP: WDTGame matched via T1
class WDTGame
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~WDTGame() = default;

    virtual void ToggleTeamMode(ObjectClass * aP1, ObjectClass * aP2);  // 0x7693F0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void ProcessTerritorySelection(unsigned int * a1, ObjectClass * aP2);  // 0x76D180 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void ReviewHistory(); // 0x76E4F0
    virtual void Constructor(ObjectClass * aP1);  // 0x76F030 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

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

    virtual void GetSize(); // 0x76BFA0
    virtual void GetAndClearFlag(); // 0x76FF30

    uint8_t WDTObject_field_0x04[4];
};
// 2 methods in IDA
class WDTState
{
public:
    virtual ~WDTState() = default; // 0x76AFC0

    virtual void Constructor_WDTState(); // 0x76AFC0
    virtual void QueryInterface(void * Block, char a2);  // 0x76B6F0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

    uint8_t WDTState_field_0x04[4];
};
// 2 methods in IDA
class WDTSurface
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~WDTSurface() = default;

    virtual void ToggleState(ObjectClass * aP1, ObjectClass * aP2);  // 0x7693A0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void PointInRect(unsigned int * a2);  // 0x769440 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

    uint8_t WDTSurface_field_0x04[4];
};
// 2 methods in IDA
class WString
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~WString() = default;

    virtual void Append(CampaignScore * aP1);  // 0x7B6970 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void TrimRight(const wchar_t ** a2);  // 0x7B6F40 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

    uint8_t WString_field_0x04[4];
};
// 1 methods in IDA
class WaypointPath
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~WaypointPath() = default;

    virtual void Constructor(rc_ptr_base * aP1, rc_ptr_base * aP2);  // 0x5A9A70 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

};
// 1 methods in IDA
class WideChar
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~WideChar() = default;

    virtual void ToLong(BlowStraw * aP0, int a2, int a3);  // 0x7CBB76 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

};
// 1 methods in IDA
class WinAPI
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~WinAPI() = default;

    // G42.33: binary truth 0x7DC720 -- __fastcall Wrapper(int); e4 corpus
    // (addr4*_e4.cpp) has 350+ uniform 1-arg call sites; 0-arg callers: none.
    static int Wrapper(int a2); // 0x7DC720 (G42 sig-sync: def; static-form restored -- e4 corpus addr4*_e4.cpp has 350+ instance-less call sites)

};
// 15 methods in IDA
// CSP: WinModemClass matched via T1
class WinModemClass
{
public:
    virtual ~WinModemClass() = default;  // 0x7754A0
    _DWORD * Construct(); // 0x774120 (G42 sig-sync: def)
    virtual char AddRef(const char * a2, DWORD a3, BYTE a4, BYTE a5, char a6);  // 0x774410 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void Release(int a2);  // 0x7748A0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void GetClassIdentifier(DWORD a1);  // 0x7748B0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
    virtual void Init(char a2);  // 0x774900 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)
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
    int WriteSerial(LPCVOID lpBuffer, DWORD nNumberOfBytesToWrite);  // 0x774c70 -- WinModemClass::WriteSerial
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

    virtual void QueryInterface(DialogControl_OwnerDraw * Block, char a2);  // 0x7AC5D0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

};
// 1 methods in IDA
class WordVector
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~WordVector() = default;

    virtual void Constructor(int a2, int a3);  // 0x42DD60 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

};
// 1 methods in IDA
class World
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~World() = default;

    virtual void ToScreen(AbstractClass * aP1, AbstractClass * aP2);  // 0x6D2070 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

};
// 1 methods in IDA
class WorldDomination
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~WorldDomination() = default;

    virtual void SetupTerritoryNodes(); // 0x7680C0

};
// 1 methods in IDA
class WorldDominationTour
{
public:
    // design: defaulted virtual destructor, no binary equivalent
    virtual ~WorldDominationTour() = default;

    WorldDominationTour();

};
// 1 methods in IDA
// CSP: ZBuffer matched via T1
class ZBuffer
{
public:
    // design: default destructor (compiler-generated), no callgraph reference
    virtual ~ZBuffer() = default;

    virtual void RenderSprite(); // 0x53D580

};
// 1 methods in IDA
class ZoneConnectionVector
{
public:
    virtual ~ZoneConnectionVector() = default;  // 0x58A3D0

    virtual void Destruct(unsigned int * Block, char a2);  // 0x58A3D0 (G42 sig-sync: def stubbed pending retranslation; IDA truth in ida_cache)

};

} // namespace gamemd
