// G42.32 P: tree-universe marker -- e4 tree-owned decls suppressed
#define GAMEMD_TREE_UNIVERSE 1
#include "structure/infantry.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/MapSeed_e4.hpp"
#include "e4/classes/Random_e4.hpp"
#include "type/infantry_type.hpp"  // InfantryTypeClass full definition (Type->Engineer access)

#include <cstring>
#include <cmath>
#include "e4/e4_globals_decls.hpp"
#include "core/stream_ext.hpp"
#include "misc/movement_ext.hpp"
#include "system/layer.hpp"

namespace gamemd {

namespace {

constexpr uint32_t kInfantryFlag = (uint32_t)(AbstractFlags::Foot)
                                  | (uint32_t)(AbstractFlags::Object)
                                  | (uint32_t)(AbstractFlags::Techno);

} // anonymous namespace

// IDA: 0x517A50 -- InfantryClass::Construct (617B)
InfantryClass::InfantryClass() noexcept
    : Type(nullptr)
    , SequenceAnim((Sequence)(-1))
    , InfantryClass_field_timer_6C8{}
    , PanicDurationLeft(0)
    , PermanentBerzerk(false)
    , Technician(false)
    , InfantryClass_field_bool_6DA(false)
    , Crawling(false)
    , InfantryClass_field_bool_6DC(false)
    , InfantryClass_field_bool_6DD(false)
    // InfantryClass_field_6E0(0) -- G42.38: absent from hpp
    , ShouldDeploy(false)
    // InfantryClass_field_int_6E8(2) -- G42.38: absent from hpp
    , unused_6EC(0)
{
    abstractFlags = kInfantryFlag;
}

// ============================================================
// Mission stubs
// ============================================================
int InfantryClass::Mission_Enter()
{
    return 10;
}

int InfantryClass::Mission_ParaDropApproach()
{
    hasParachute = true;
    return 5;
}

int InfantryClass::Mission_ParaDropOverfly()
{
    return 5;
}

// ============================================================
// Phase 3: Deploy/Undeploy
// ============================================================

// IDA: 0x4D5350 (ProcessDeploy, 614B)
void InfantryClass::ProcessDeploy()
{
    // Infantry-specific deploy logic
    // Check if can deploy, set mission, deploy animations
}

// IDA: 0x51D6F0 (ProcessDeployAction, 1013B) — validates weapon, checks mission, sets loco
// 0x51d6f0
int InfantryClass::ProcessDeployAction(int deploy_type, bool a3, bool a4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0051D6F0.json)
}
// 0x5200b0
int InfantryClass::ProcessIdleDeploy()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005200B0.json)
}
// 0x521b60
bool InfantryClass::CanInitiateDeploy()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00521B60.json)
}
// 0x5221d0
bool InfantryClass::CanDeployAtCell()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005221D0.json)
}
// 0x521eb0
bool InfantryClass::CheckDeployPath()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00521EB0.json)
}
// 0x522fe0
int InfantryClass::CreateDeployLocomotor()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00522FE0.json)
}
// 0x522c00
bool InfantryClass::StartBombDeploy()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00522C00.json)
}
// 0x5228d0
bool InfantryClass::IsBombDeployMission()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005228D0.json)
}
// 0x514310
int InfantryClass::DeployAnimation()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00514310.json)
}
// 0x521d80
int InfantryClass::ComputeDeploySpeedFactor()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00521D80.json)
}
// 0x5218e0
int InfantryClass::GetDeployWeaponIndex(int weapon_index)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005218E0.json)
}
// 0x522600
int InfantryClass::FireAtTargetPos()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00522600.json)
}
/* ASM:
push    ecx
mov     eax, [ecx+6C0h]
mov     edx, [eax+0A0h]
mov     eax, [ecx]
mov     [esp+4+var_4], edx
mov     edx, [esp+4+arg_4]
push    edx
mov     edx, ds:8871E0h
push    0
push    1
mov     edx, [edx+0FA8h]
push    0
push    edx
lea     edx, [esp+18h+var_4]
push    0
push    edx
call    dword ptr [eax+16Ch]
pop     ecx
retn    0Ch
*/

// 0x51df60
int InfantryClass::FireWeaponWithCleanup(int a2, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0051DF60.json)
}
/* ASM:
mov     eax, [esp+arg_4]
push    esi
mov     esi, ecx
push    edi
mov     ecx, [esp+8+arg_0]
push    eax             ; int
push    ecx             ; int
mov     ecx, esi        ; this
mov     byte ptr [esi+68Dh], 0
call    TechnoClass__FireWeapon
mov     edi, eax
test    edi, edi
jz      short loc_51DFDC
mov     al, [esi+81h]
test    al, al
jnz     short loc_51DFDC
mov     edx, [esi+6C0h]
mov     al, [edx+0EBFh]
test    al, al
jz      short loc_51DFDC
mov     eax, [esi+2FCh]
test    eax, eax
jnz     short loc_51DFDC
mov     eax, [esi]
mov     ecx, esi
mov     dword ptr [esi+6D4h], 12Ch
call    dword ptr [eax+184h]
cmp     eax, 1
jz      short loc_51DFCE
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+184h]
cmp     eax, 0Fh
jnz     short loc_51DFDC

loc_51DFCE:                             ; CODE XREF: InfantryClass__FireWeaponWithCleanup+5D↑j
mov     eax, [esi]
push    0
push    5
mov     ecx, esi
call    dword ptr [eax+1E8h]

loc_51DFDC:                             ; CODE XREF: InfantryClass__FireWeaponWithCleanup+20↑j
; InfantryClass__FireWeaponWithCleanup+2A↑j ...
mov     eax, edi
pop     edi
pop     esi
retn    8
*/

// 0x51c8b0
int InfantryClass::GetFireError(int* target, int weapon_idx, int a4, int a5)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0051C8B0.json)
}
// 0x5227f0
bool InfantryClass::CanAttackTarget(HouseClass* other)
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005227F0.json)
}
/* ASM:
other           = dword ptr  4

sub     esp, 14h
push    ebx
push    esi
mov     esi, ecx
push    edi
mov     eax, [esi]
call    dword ptr [eax+0C4h]
test    al, al
jz      loc_52289E
mov     edx, [esi]
lea     eax, [esp+20h+var_C]
push    eax
mov     ecx, esi
call    dword ptr [edx+48h]
mov     ecx, eax
mov     eax, [ecx]
cdq
and     edx, 0FFh
add     eax, edx
sar     eax, 8
mov     word ptr [esp+20h+var_14], ax
mov     eax, [ecx+4]
cdq
and     edx, 0FFh
add     eax, edx
lea     edx, [esp+20h+var_10]
sar     eax, 8
mov     word ptr [esp+20h+var_14+2], ax
mov     ecx, [esp+20h+var_14]
mov     [esp+20h+var_10], ecx
push    edx
mov     ecx, 87F7E8h
call    CellCoord__To_CellObj
mov     edi, [esp+20h+other]
mov     ecx, [esi+21Ch] ; this
push    edi             ; other
mov     ebx, eax
call    HouseClass__IsAlliedWith
test    al, al
jnz     short loc_52289E
mov     eax, [edi+30h]
mov     ecx, ebx
push    eax
call    HouseClass__HasType
test    al, al
jnz     short loc_52289E
mov     esi, [esi+51Ch]
cmp     esi, edi
jz      short loc_522893
test    esi, esi
jz      short loc_522893
push    esi             ; other
mov     ecx, edi        ; this
call    HouseClass__IsAlliedWith
test    al, al
jz      short loc_52289E

loc_522893:                             ; CODE XREF: InfantryClass__CanAttackTarget+91↑j
; InfantryClass__CanAttackTarget+95↑j
pop     edi
pop     esi
mov     al, 1
pop     ebx
add     esp, 14h
retn    4
; ---------------------------------------------------------------------------

loc_52289E:                             ; CODE XREF: InfantryClass__CanAttackTarget+12↑j
; InfantryClass__CanAttackTarget+78↑j ...
pop     edi
pop     esi
xor     al, al
pop     ebx
add     esp, 14h
retn    4
*/

// 0x51daf0
void InfantryClass::PlayIdleAnim(int idle_anim_number)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0051DAF0.json)
}
// 0x51cdb0
int InfantryClass::ProcessIdleAction()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0051CDB0.json)
}
// 0x5239d0
int InfantryTypeClass::Ddtor()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005239D0.json)
}
// 0x521320
int InfantryClass::GetIdleTimer()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00521320.json)
}
// ============================================================
// Phase 3: Crawling / Movement
// ============================================================

// 0x5216d0
bool InfantryClass::CanMoveFreely()
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005216D0.json)
}
/* ASM:
push    esi
mov     esi, ecx
call    TechnoClass__IsTimerExpired
test    al, al
jnz     short loc_5216DE
pop     esi
retn
; ---------------------------------------------------------------------------

loc_5216DE:                             ; CODE XREF: InfantryClass__CanMoveFreely+A↑j
mov     eax, [esi+674h]
test    eax, eax
jnz     short loc_5216F2
push    80004003h
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------

loc_5216F2:                             ; CODE XREF: InfantryClass__CanMoveFreely+16↑j
mov     eax, [esi+674h]
push    eax
mov     ecx, [eax]
call    dword ptr [ecx+10h]
test    al, al
jz      short loc_521706
xor     al, al
pop     esi
retn
; ---------------------------------------------------------------------------

loc_521706:                             ; CODE XREF: InfantryClass__CanMoveFreely+30↑j
mov     al, [esi+6DBh]
test    al, al
jz      short loc_521714
xor     al, al
pop     esi
retn
; ---------------------------------------------------------------------------

loc_521714:                             ; CODE XREF: InfantryClass__CanMoveFreely+3E↑j
mov     al, [esi+68Dh]
test    al, al
jz      short loc_521722
xor     al, al
pop     esi
retn
; ---------------------------------------------------------------------------

loc_521722:                             ; CODE XREF: InfantryClass__CanMoveFreely+4C↑j
mov     eax, [esi+6C4h]
cmp     eax, 1Bh
jz      short loc_52173C
cmp     eax, 1Ch
jz      short loc_52173C
cmp     eax, 1Dh
jz      short loc_52173C
cmp     eax, 1Eh
jnz     short loc_521740

loc_52173C:                             ; CODE XREF: InfantryClass__CanMoveFreely+5B↑j
; InfantryClass__CanMoveFreely+60↑j ...
xor     al, al
pop     esi
retn
; ---------------------------------------------------------------------------

loc_521740:                             ; CODE XREF: InfantryClass__CanMoveFreely+6A↑j
cmp     eax, 1
jz      short loc_521752
test    eax, eax
jz      short loc_521752
cmp     eax, 10h
jz      short loc_521752
xor     al, al
pop     esi
retn
; ---------------------------------------------------------------------------

loc_521752:                             ; CODE XREF: InfantryClass__CanMoveFreely+73↑j
; InfantryClass__CanMoveFreely+77↑j ...
mov     al, 1
pop     esi
retn
*/

// 0x484d60
bool InfantryClass::CanMoveThroughCell()
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00484D60.json)
}
// 0x51dff0
int InfantryClass::MoveToCell(int* a2, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0051DFF0.json)
}
// 0x51df10
int InfantryClass::CancelMovement()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0051DF10.json)
}
/* ASM:
push    esi
mov     esi, ecx
mov     eax, [esi+674h]
test    eax, eax
jnz     short loc_51DF27
push    80004003h
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------

loc_51DF27:                             ; CODE XREF: InfantryClass__CancelMovement+B↑j
mov     eax, [esi+674h]
push    eax
mov     ecx, [eax]
call    dword ptr [ecx+0ACh]
mov     ecx, esi
mov     dword ptr [esi+6E8h], 2
mov     byte ptr [esi+6DBh], 0
mov     dword ptr [esi+6C4h], 0
call    TechnoClass__CleanupDirection
pop     esi
retn
*/

// 0x51b350
int InfantryClass::CalcMoveTarget()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0051B350.json)
}
// 0x51d0d0
int InfantryClass::FindMoveTarget()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0051D0D0.json)
}
// 0x418e20
int InfantryClass::FindNearbyCell()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00418E20.json)
}
// 0x51f330
int InfantryClass::FindPathToBuilding()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0051F330.json)
}
/* ASM:
sub     esp, 0Ch
push    esi
mov     esi, ecx
push    edi
push    0
mov     eax, [esi]
call    dword ptr [eax+2E4h]
mov     ecx, [esi+2B4h]
test    ecx, ecx
jz      short loc_51F35B
mov     edx, [esi]
push    eax
push    ecx
mov     ecx, esi
call    dword ptr [edx+3A8h]
test    al, al
jnz     short loc_51F3D2

loc_51F35B:                             ; CODE XREF: InfantryClass__FindPathToBuilding+19↑j
lea     eax, [esi+9Ch]
push    0
mov     ecx, [eax]
mov     [esp+18h+var_C], ecx
mov     ecx, esi
mov     edx, [eax+4]
mov     [esp+18h+var_8], edx
mov     edx, [esi]
mov     eax, [eax+8]
mov     [esp+18h+var_4], eax
lea     eax, [esp+18h+var_C]
push    eax
push    1
call    dword ptr [edx+3C4h]
mov     edi, eax
mov     eax, [esi+2B4h]
test    eax, eax
jnz     short loc_51F398
test    edi, edi
jz      short loc_51F3A7

loc_51F398:                             ; CODE XREF: InfantryClass__FindPathToBuilding+62↑j
mov     edx, [esi]
push    edi
mov     ecx, esi
call    dword ptr [edx+3C8h]
test    edi, edi
jnz     short loc_51F3D2

loc_51F3A7:                             ; CODE XREF: InfantryClass__FindPathToBuilding+66↑j
cmp     dword ptr [esi+0ACh], 5
jz      short loc_51F3D2
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+84h]
mov     cl, [eax+0D94h]
test    cl, cl
jnz     short loc_51F3D2
mov     edx, [esi]
push    1
push    0
mov     ecx, esi
call    dword ptr [edx+484h]

loc_51F3D2:                             ; CODE XREF: InfantryClass__FindPathToBuilding+29↑j
; InfantryClass__FindPathToBuilding+75↑j ...
pop     edi
pop     esi
add     esp, 0Ch
retn
*/

// 0x51f3e0
int InfantryClass::EnterBuilding()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0051F3E0.json)
}
// 0x51F540
int InfantryClass::ProcessEnterOrRepair()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0051F540.json)
}
// 0x522bc0
bool InfantryClass::CanEnterBuilding()
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00522BC0.json)
}
// 0x522bc0
// 0x51f640
int InfantryClass::FindIdleAITarget()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0051F640.json)
}
// 0x51f640
// ============================================================
// Phase 3: C4 / Bomb
// ============================================================

// 0x51f6e0
int InfantryClass::ProcessIvanBomb()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0051F6E0.json)
}
// 0x51f660
int InfantryClass::ProcessIvanBombResult()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0051F660.json)
}
// 0x521dd0
int InfantryClass::CheckAndApplyBomb()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00521DD0.json)
}
// ============================================================
// Phase 3: Per-Frame & AI
// ============================================================

// 0x521c90
int InfantryClass::PowerDrainUpdate(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00521C90.json)
}
// 0x51aa10
int InfantryClass::HandleTargetDestroyed()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0051AA10.json)
}
// 0x51f250
int InfantryClass::ProcessUpdate()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0051F250.json)
}
// 0x51f190
int InfantryClass::ValidateTargetAndMove(AbstractClass* target, int flags)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0051F190.json)
}
/* ASM:
push    ebp
mov     ebp, [esp+4+arg_8]
push    esi
mov     esi, ecx
push    edi
mov     edi, [esp+0Ch+arg_4]
mov     eax, [esi]
push    ebp
push    edi
call    dword ptr [eax+74h]
lea     ecx, [eax-1]    ; switch 57 cases
cmp     ecx, 38h
ja      short def_51F1B4 ; jumptable 0051F1B4 default case, cases 1-8,10-26,30-56
xor     edx, edx
mov     dl, ds:byte_51F20C[ecx]
jmp     ds:jpt_51F1B4[edx*4] ; switch jump
; ---------------------------------------------------------------------------

loc_51F1BB:                             ; CODE XREF: InfantryClass__ValidateTargetAndMove+24↑j
; DATA XREF: .text:jpt_51F1B4↓o
mov     eax, 9          ; jumptable 0051F1B4 cases 9,28,29
jmp     short def_51F1B4 ; jumptable 0051F1B4 default case, cases 1-8,10-26,30-56
; ---------------------------------------------------------------------------

loc_51F1C2:                             ; CODE XREF: InfantryClass__ValidateTargetAndMove+24↑j
; DATA XREF: .text:jpt_51F1B4↓o
mov     eax, 5          ; jumptable 0051F1B4 cases 27,57

def_51F1B4:                             ; CODE XREF: InfantryClass__ValidateTargetAndMove+1A↑j
; InfantryClass__ValidateTargetAndMove+24↑j ...
cmp     edi, esi        ; jumptable 0051F1B4 default case, cases 1-8,10-26,30-56
jnz     short loc_51F1D8
cmp     eax, 5
jnz     short loc_51F1D8
pop     edi
pop     esi
xor     al, al
pop     ebp
retn    0Ch
; ---------------------------------------------------------------------------

loc_51F1D8:                             ; CODE XREF: InfantryClass__ValidateTargetAndMove+39↑j
; InfantryClass__ValidateTargetAndMove+3E↑j
mov     cl, [esi+298h]
test    cl, cl
jz      short loc_51F1EA
pop     edi
pop     esi
xor     al, al
pop     ebp
retn    0Ch
; ---------------------------------------------------------------------------

loc_51F1EA:                             ; CODE XREF: InfantryClass__ValidateTargetAndMove+50↑j
push    ebp
push    edi
push    eax
mov     ecx, esi
call    FootClass__ValidateMove
pop     edi
pop     esi
pop     ebp
retn    0Ch
*/

// 0x728280
int InfantryClass::SetMission()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00728280.json)
}
// 0x728e30
int InfantryClass::IdleStateMachine()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00728E30.json)
}
// 0x7291f0
int InfantryClass::ProcessTunnelMovement()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007291F0.json)
}
// 0x736579
int InfantryClass::UpdateBehavior()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00736579.json)
}
// 0x51dbd0
int InfantryClass::CalcFacingToTarget()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0051DBD0.json)
}
// 0x51bf90
int InfantryClass::EvaluateTarget()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0051BF90.json)
}
// 0x51e140
int InfantryClass::SelectAutoTarget(unsigned int flags, int64_t a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0051E140.json)
}
// 0x51b1f0
int InfantryClass::AssignTarget_SyncLog(int syncFlag)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0051B1F0.json)
}
// 0x51aa40
int InfantryClass::AssignDestination_SyncLog(AbstractClass* dest, int sync_flag)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0051AA40.json)
}
// 0x51cba0
int InfantryClass::ValidatePlacement()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0051CBA0.json)
}
// 0x484ae0
int InfantryClass::ValidateAttackPosition()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00484AE0.json)
}
// ============================================================
// Phase 3: Stream & Save
// ============================================================

// 0x521960
int InfantryClass::LoadFromStream()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00521960.json)
}
// 0x521b00
int InfantryClass::SaveLoad_Prefix()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x521b00)
}
// 0x523350
int InfantryClass::ScalarDtor()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00523350.json)
}
// ============================================================
// Phase 3: Cursor & UI
// ============================================================

// 0x51f800
int InfantryClass::HandleCursorOverCell()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0051F800.json)
}
// 0x51e3b0
int InfantryClass::GetActionOnObject_EMP(AbstractClass* object, int flags)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x51e3b0)
}

} // G42.37 split: global-scope class def
// 0x4dded0
int ra2::game::FootClass::GetActionOnObject()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004DDED0.json)
}
namespace gamemd { // G42.37 reopen
// 0x51FAF0
InfantryTypeClass* InfantryClass::GetTypePtr()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x51FAF0)
}
// 0x51f2c0
int InfantryClass::GetTooltipName()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0051F2C0.json)
}
// 0x521d30
int InfantryClass::GetTransformMatrix()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00521D30.json)
}
// 0x523250
int InfantryClass::ComputeTransform()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00523250.json)
}
// 0x701140
int InfantryClass::CheckHealthDiff()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00701140.json)
}
// ============================================================
// Phase 3: Marking & Passability
// ============================================================

// 0x5217c0
int InfantryClass::MarkCellPassability(int* a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005217C0.json)
}
// 0x521850
int InfantryClass::ClearCellPassability()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00521850.json)
}
// ============================================================
// Phase 3: Capture & Misc
// ============================================================

// 0x522700
int InfantryClass::CaptureAttackerInfo()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00522700.json)
}
// 0x522780
int InfantryClass::InitProductionLimits()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00522780.json)
}
// 0x522640
int InfantryClass::GetProductionLimit()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00522640.json)
}
// 0x5226c0
int InfantryClass::GetProductionHouse()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005226C0.json)
}
// 0x521b20
int InfantryClass::ResetMissionIfDone()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00521B20.json)
}
// 0x521b40
int InfantryClass::ProcessMission16()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00521B40.json)
}
// 0x521c60
int InfantryClass::SetMissionOnCondition()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00521C60.json)
}
// 0x521c10
int InfantryClass::InitVoiceResponseTimer()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00521C10.json)
}
// 0x521c40
int InfantryClass::ResetReloadIfNeeded()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00521C40.json)
}
// 0x5220f0
void InfantryClass::SetPermanentBerzerk()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5220f0)
}
/* ASM:
mov     byte ptr [ecx+6D8h], 1
retn
*/

// 0x523340
int InfantryClass::StubReturn15()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x523340)
}
// 0x5232f0
int InfantryClass::StubReturn1776()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5232f0)
}
// 0x70e1e0
int InfantryClass::ProcessIdle()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0070E1E0.json)
}
// 0x703230
int InfantryClass::RegisterKill()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00703230.json)
}
// 0x70d7a0
int InfantryClass::ReleaseInfiltrators()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0070D7A0.json)
}
// 0x522e70
int InfantryClass::ProcessTiberiumHarvest()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00522E70.json)
}
// 0x519630
int InfantryClass::RepairBridge()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x519630)
}

// 0x522340
void InfantryClass::CalculateApproachPath(char a2)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00522340.json)
}
// 0x5224d0
bool InfantryClass::IsBridgeRepairEnabled()
{
    return false; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5224d0)
}
// 0x522d50
int InfantryClass::SlaveGiveMoney_RecordBalanceBefore()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00522D50.json)
}
// 0x772ac0
void InfantryClass::startPanic()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00772AC0.json)
}
int InfantryClass::CheckHealthDiff_0()
{
    // IDA: 0x7447A0 — check health diff (stub)
    return 0;
}

// ============================================================
// Phase 3: Drawing
// ============================================================

// 0x518f90
void InfantryClass::Draw(Point2D* screen_pos, RectangleStruct* bounds) const
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00518F90.json)
}
void InfantryClass::DrawShadow(Point2D* screen_pos, RectangleStruct* bounds) const
{
    (void)screen_pos;
    (void)bounds;
}

} // namespace gamemd

#include "structure/infantry.hpp"

namespace gamemd {

// --- InfantryClass ---

// 0x523300
HRESULT __stdcall InfantryClass::GetClassID(CLSID* pClassID) { return E_NOTIMPL; }
} // namespace gamemd (G42.38 EOF close)
