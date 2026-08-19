#include "object/foot.hpp"

#include <cstring>

namespace ra2 {
namespace game {

namespace {

constexpr uint32_t kFootFlag = 0x4u;

} // anonymous namespace

extern int& CurrentFrame;

FootClass::FootClass() noexcept
    : planningPathIdx(-1)
    , unknownShort524(0)
    , unknownShort526(0)
    , unknownShort528(0)
    , FootClass_field_short_52A(0)
    , FootClass_field_52C(0)
    , unknown530(0)
    , unknown534(0)
    , unknown538(0)
    , FootClass_field_bool_53C(false)
    , unknown540(0)
    , currentMapCoords{}
    , lastMapCoords{}
    , lastJumpjetMapCoords{}
    , currentJumpjetMapCoords{}
    , unknownCoords568{}
    , unused574(0)
    , currentSpeed_percentage(0.0)
    , currentSpeed_multiplier(0.0)
    , movementDestination(nullptr)
    , lastDestination(nullptr)
    , FootClass_field_int_5C4(-1)
    , FootClass_field_5C8(0)
    , FootClass_field_5CC(0)
    , FootClass_field_5D0(0)
    , FootClass_field_bool_5D1(false)
    , team(nullptr)
    , nextTeamMember(nullptr)
    , FootClass_field_5DC(0)
    , pathDelayTimer{}
    , FootClass_field_int_64C(0)
    , FootClass_field_timer_650{}
    , sightTimer{}
    , blockagePathTimer{}
    , unknownPoint3d678{}
    , tubeIndex(-1)
    , unknownBool685(false)
    , waypointIndex(0)
    , unknownBool687(false)
    , unknownBool688(false)
    , isTeamLeader(false)
    , shouldScanForTarget(false)
    , FootClass_field_bool_68B(false)
    , FootClass_field_bool_68C(false)
    , FootClass_field_bool_68D(false)
    , FootClass_field_bool_68E(false)
    , shouldEnterAbsorber(false)
    , shouldEnterOccupiable(false)
    , shouldGarrisonStructure(true)
    , parasiteEatingMe(nullptr)
    , unknown698(0)
    , parasiteImUsing(nullptr)
    , paralysisTimer{}
    , FootClass_field_bool_6AC(false)
    , isAttackedByLocomotor(false)
    , isLetGoByLocomotor(false)
    , FootClass_field_bool_6AF(false)
    , FootClass_field_bool_6B0(false)
    , FootClass_field_bool_6B1(false)
    , FootClass_field_bool_6B2(false)
    , FootClass_field_bool_6B3(false)
    , FootClass_field_bool_6B4(false)
    , FootClass_field_bool_6B5(false)
    , FootClass_field_bool_6B7(false)
    , frozenStill(false)
    , FootClass_field_bool_6B8(false)
    , m_unused_6BC(0)
{
    std::memset(&audioController7, 0, sizeof(audioController7));
    std::memset(pathDirections, 0, sizeof(pathDirections));

    locomotor.ptr = nullptr;

    abstractFlags |= kFootFlag;
}

// ============================================================
// MovementAI -- per-frame movement and navigation update
// IDA: 0x4DA530 (2520 bytes, 138 BBs, called from InfantryClass::Update,
//      TechnoClass::SmokeUpdate)
// ============================================================

// 0x4da530
bool FootClass::MovementAI()
{
// [IDA decompile]
char __fastcall FootClass_MovementAI(int a1)
{
  char result; // al
  _DWORD *v3; // eax
  int v4; // eax
  _DWORD *v5; // edi
  int v6; // eax
  int v7; // edx
  int v8; // eax
  int v9; // edx
  int v10; // ecx
  int v11; // eax
  int v12; // edx
  int v13; // eax
  int v14; // edx
  int v15; // eax
  int v16; // ebp
  int v17; // edi
  int v18; // edx
  int v19; // eax
  char v20; // al
  int v21; // edx
  char v22; // al
  int v23; // edx
  int v24; // eax
  char v25; // al
  int v26; // edx
  int v27; // edx
  int v28; // edx
  int (__stdcall ***v29)(_DWORD, void *, int *); // eax
  _DWORD *v30; // ebp
  int v31; // edi
  int v32; // eax
  int v33; // eax
  int v34; // esi
  int v35; // [esp+54h] [ebp-30h]
  int v36; // [esp+70h] [ebp-14h] BYREF
  int v37; // [esp+74h] [ebp-10h] BYREF
  int v38; // [esp+78h] [ebp-Ch] BYREF
  int v39; // [esp+7Ch] [ebp-8h]
  int v40; // [esp+80h] [ebp-4h]

  MovementAI::Begin();
  result = *(_BYTE *)(a1 + 144);
  if ( !result )
    return result;
  *(_BYTE *)(a1 + 1715) = 0;
  if ( !((int)MEMORY[0xA8ED84] % *((_DWORD *)MEMORY[0x8871E0] + 1538))
    && !*(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 132))(a1) + 3383)
    && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 84))(a1)
    && !*(_BYTE *)(a1 + 129) )
  {
    v3 = (_DWORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)a1 + 72))(a1, &v38);
    LOWORD(v36) = *v3 / 256;
    HIWORD(v36) = v3[1] / 256;
    v37 = v36;
    v4 = CellCoord::To_CellObj(&v37);
    v36 = Cell::GetTraversability(v4);
    if ( v36 > 0 )
    {
      v5 = MEMORY[0x8871E0];
      v36 = Math::RoundToInt((double)v36 * *((double *)MEMORY[0x8871E0] + 771));
      result = (*(int (__thiscall **)(int, int *, _DWORD, _DWORD, _DWORD, _DWORD, int, _DWORD))(*(_DWORD *)a1 + 364))(
                 a1,
                 &v36,
                 0,
                 v5[1549],
                 0,
                 0,
                 1,
                 0);
      if ( !*(_BYTE *)(a1 + 144) )
        return result;
    }
  }
  if ( !*(_BYTE *)(a1 + 981) )
  {
    if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 132))(a1) + 3434) )
    {
      v6 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 444))(a1);
      if ( (unsigned __int8)Type::CheckAmbiguity(v6, 1) )
        *(_BYTE *)(a1 + 981) = 1;
    }
  }
  if ( !*(_DWORD *)(a1 + 1652) )
    WinAPI::Wrapper(-2147467261);
  if ( (*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)(a1 + 1652) + 128))(*(_DWORD *)(a1 + 1652))
    && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 84))(a1)
    && (unsigned __int8)HouseClass::IsAlliedWith(MEMORY[0xA83D4C]) )
  {
    v7 = *(_DWORD *)(a1 + 1628);
    v8 = *(_DWORD *)(a1 + 1636);
    if ( v7 != -1 )
    {
      if ( (int)MEMORY[0xA8ED84] - v7 >= v8 )
      {
LABEL_21:
        (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)a1 + 1164))(a1, 0, 0, 0, 0);
        (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)a1 + 1160))(a1, 0, 0, 0, 0, 0);
        if ( *(_DWORD *)(a1 + 612) == (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 456))(a1) )
        {
          v12 = *(_DWORD *)(a1 + 160);
          v38 = *(_DWORD *)(a1 + 156);
          v39 = v12;
          v40 = *(_DWORD *)(a1 + 164);
          MapClass::RevealArea2(&v38, *(_DWORD *)(a1 + 608) - 3, *(_DWORD *)(a1 + 608) + 3, 0);
        }
        else
        {
          v9 = *(_DWORD *)(a1 + 160);
          v38 = *(_DWORD *)(a1 + 156);
          v10 = *(_DWORD *)(a1 + 608);
          v11 = *(_DWORD *)(a1 + 164);
          v39 = v9;
          v40 = v11;
          MapClass::RevealArea2(&v38, 0, v10 + 3, 0);
        }
        v13 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 456))(a1);
        v14 = v39;
        *(_DWORD *)(a1 + 612) = v13;
        *(_DWORD *)(a1 + 1628) = MEMORY[0xA8ED84];
        *(_DWORD *)(a1 + 1632) = v14;
        *(_DWORD *)(a1 + 1636) = 15;
        goto LABEL_25;
      }
      v8 -= (int)MEMORY[0xA8ED84] - v7;
    }
    if ( v8 )
      goto LABEL_25;
    goto LABEL_21;
  }
LABEL_25:
  if ( !((int)MEMORY[0xA8ED84] % 16)
    && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 84))(a1)
    && *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 444))(a1) + 60) )
  {
    v35 = *(_DWORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)a1 + 440))(a1, &v37);
    v15 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 444))(a1);
    TeamClass::Update_0(*(void ***)(v15 + 60), 59, a1, v35, 0, 0);
  }
  v16 = *(_DWORD *)(a1 + 1336);
  if ( !*(_DWORD *)(a1 + 1652)
    || *(_BYTE *)(a1 + 973)
    || *(_BYTE *)(a1 + 141)
    || *(_DWORD *)(a1 + 680) && !*(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 132))(a1) + 1682)
    || *(_BYTE *)(a1 + 129) )
  {
    goto LABEL_67;
  }
  if ( !*(_DWORD *)(a1 + 1652) )
    WinAPI::Wrapper(-2147467261);
  result = (*(int (__stdcall **)(_DWORD))(**(_DWORD **)(a1 + 1652) + 64))(*(_DWORD *)(a1 + 1652));
  if ( *(_BYTE *)(a1 + 144) )
  {
    if ( a1 )
      v17 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 44))(a1) == 1 ? a1 : 0;
    else
      v17 = 0;
    if ( !*(_DWORD *)(a1 + 1652) )
      WinAPI::Wrapper(-2147467261);
    if ( ((*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)(a1 + 1652) + 128))(*(_DWORD *)(a1 + 1652))
       && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 472))(a1)
       || *(_DWORD *)(a1 + 692)
       && *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 132))(a1) + 912)
       && v17
       && !(unsigned __int8)FootClass::updateScanRange(v17))
      && !((int)MEMORY[0xA8ED84] % *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 132))(a1) + 660))
      && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 468))(a1)
      && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 472))(a1)
      && !*(_BYTE *)(a1 + 1709) )
    {
      goto LABEL_66;
    }
    if ( *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 132))(a1) + 664) )
    {
      if ( !*(_DWORD *)(a1 + 1652) )
        WinAPI::Wrapper(-2147467261);
      if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)(a1 + 1652) + 128))(*(_DWORD *)(a1 + 1652))
        && !((int)MEMORY[0xA8ED84] % *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 132))(a1) + 664))
        && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 468))(a1)
        && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 472))(a1)
        && !*(_BYTE *)(a1 + 1709) )
      {
        goto LABEL_66;
      }
    }
    if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 132))(a1) + 1709)
      && (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 456))(a1) > 0
      && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 468))(a1)
      && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 472))(a1)
      && !*(_BYTE *)(a1 + 1709) )
    {
LABEL_66:
      ++*(_DWORD *)(a1 + 1336);
    }
LABEL_67:
    if ( v16 == *(_DWORD *)(a1 + 1336) )
    {
      if ( !*(_DWORD *)(a1 + 1652) )
        WinAPI::Wrapper(-2147467261);
      if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)(a1 + 1652) + 128))(*(_DWORD *)(a1 + 1652)) )
        goto LABEL_136;
    }
    if ( *(_BYTE *)(a1 + 141)
      || *(_BYTE *)(a1 + 1061)
      || *(_DWORD *)(a1 + 680) && *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 132))(a1) + 1682) )
    {
LABEL_136:
      if ( *(_BYTE *)(a1 + 1340) )
      {
        v19 = *(_DWORD *)(a1 + 1344);
        if ( !v19 || *(_BYTE *)(a1 + 141) || *(_BYTE *)(a1 + 1061) )
        {
          Mixer::ReleaseChannel(a1 + 1348);
          *(_BYTE *)(a1 + 1340) = 0;
          *(_DWORD *)(a1 + 1344) = 0;
        }
        else
        {
          *(_DWORD *)(a1 + 1344) = v19 - 1;
        }
      }
    }
    else
    {
      if ( !*(_BYTE *)(a1 + 1340) && *(int *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 132))(a1) + 1284) > 0 )
      {
        AudioController::Stop(a1 + 1348);
        v38 = *(_DWORD *)(a1 + 156);
        v18 = *(_DWORD *)a1;
        v39 = *(_DWORD *)(a1 + 160);
        v40 = *(_DWORD *)(a1 + 164);
        (*(int (__thiscall **)(int))(v18 + 132))(a1);
        Random::State(&MEMORY[0x886B88]);
        StartAudioControllerAt(a1 + 1348);
        *(_BYTE *)(a1 + 1340) = 1;
      }
      *(_DWORD *)(a1 + 1344) = 3;
    }
    v20 = *(_BYTE *)(a1 + 141);
    if ( v20 != *(_BYTE *)(a1 + 142) )
    {
      if ( v20
        && *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 132))(a1) + 1356) != -1
        && *(_BYTE *)(a1 + 143) )
      {
        v38 = *(_DWORD *)(a1 + 156);
        v39 = *(_DWORD *)(a1 + 160);
        v21 = *(_DWORD *)a1;
        v40 = *(_DWORD *)(a1 + 164);
        (*(void (__thiscall **)(int))(v21 + 132))(a1);
        StartAudioControllerAt(0);
        *(_BYTE *)(a1 + 142) = *(_BYTE *)(a1 + 141);
      }
      else
      {
        *(_BYTE *)(a1 + 142) = *(_BYTE *)(a1 + 141);
      }
    }
    v22 = *(_BYTE *)(a1 + 973);
    if ( v22 != *(_BYTE *)(a1 + 974) )
    {
      if ( v22 )
      {
        if ( *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 132))(a1) + 1364) != -1 )
        {
          v38 = *(_DWORD *)(a1 + 156);
          v39 = *(_DWORD *)(a1 + 160);
          v23 = *(_DWORD *)a1;
          v40 = *(_DWORD *)(a1 + 164);
          (*(void (__thiscall **)(int))(v23 + 132))(a1);
          StartAudioControllerAt(0);
        }
        if ( *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 132))(a1) + 1352) == -1 )
        {
          if ( *((_DWORD *)MEMORY[0x8871E0] + 130) != -1 )
          {
            v38 = *(_DWORD *)(a1 + 156);
            v39 = *(_DWORD *)(a1 + 160);
            v40 = *(_DWORD *)(a1 + 164);
            StartAudioControllerAt(a1 + 1348);
          }
        }
        else
        {
          v38 = *(_DWORD *)(a1 + 156);
          v39 = *(_DWORD *)(a1 + 160);
          v24 = *(_DWORD *)a1;
          v40 = *(_DWORD *)(a1 + 164);
          (*(void (__thiscall **)(int))(v24 + 132))(a1);
          StartAudioControllerAt(a1 + 1348);
        }
      }
      else if ( !*(_BYTE *)(a1 + 1340) )
      {
        Mixer::ReleaseChannel(a1 + 1348);
      }
      *(_BYTE *)(a1 + 974) = *(_BYTE *)(a1 + 973);
    }
    v25 = *(_BYTE *)(a1 + 1061);
    if ( v25 != *(_BYTE *)(a1 + 1062) )
    {
      if ( v25 )
      {
        Mixer::ReleaseChannel(a1 + 1348);
        if ( *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 132))(a1) + 1360) != -1
          && (unsigned __int8)House::IsHumanPlayer(*(_DWORD *)(a1 + 540)) )
        {
          v38 = *(_DWORD *)(a1 + 156);
          v39 = *(_DWORD *)(a1 + 160);
          v26 = *(_DWORD *)a1;
          v40 = *(_DWORD *)(a1 + 164);
          (*(void (__thiscall **)(int))(v26 + 132))(a1);
          StartAudioControllerAt(0);
        }
        if ( *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 132))(a1) + 1348) != -1 )
        {
          v38 = *(_DWORD *)(a1 + 156);
          v27 = *(_DWORD *)a1;
          v39 = *(_DWORD *)(a1 + 160);
          v40 = *(_DWORD *)(a1 + 164);
          (*(void (__thiscall **)(int))(v27 + 132))(a1);
          StartAudioControllerAt(a1 + 1348);
        }
      }
      else if ( !*(_BYTE *)(a1 + 1340) )
      {
        Mixer::ReleaseChannel(a1 + 1348);
      }
      *(_BYTE *)(a1 + 1062) = *(_BYTE *)(a1 + 1061);
    }
    v38 = *(_DWORD *)(a1 + 156);
    v39 = *(_DWORD *)(a1 + 160);
    v40 = *(_DWORD *)(a1 + 164);
    StartAudioController(&v38, a1 + 1348);
    if ( ((unsigned __int8)MEMORY[0xA8ED84] & 0x3F) == 0x3F
      && !*(_DWORD *)(a1 + 1444)
      && !*(_BYTE *)(a1 + 140)
      && !*(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 444))(a1) + 284)
      && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 688))(a1)
      && !(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 456))(a1) )
    {
      v28 = *(_DWORD *)a1;
      v38 = 0;
      v39 = 0;
      v40 = 0;
      (*(void (__thiscall **)(int, int *, int, _DWORD))(v28 + 372))(a1, &v38, 1, 0);
    }
    v29 = *(int (__stdcall ****)(_DWORD, void *, int *))(a1 + 1652);
    v30 = (_DWORD *)(a1 + 1652);
    v31 = 0;
    if ( v29 )
    {
      v32 = (**v29)(v29, &unk_819088, &v37);
      v31 = v32 < 0 ? 0 : v37;
      if ( v32 < 0 && v32 != -2147467262 )
        WinAPI::Wrapper(v32);
      if ( v31 && (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)v31 + 20))(v32 < 0 ? 0 : v37) )
      {
        if ( *v30 )
          (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*v30 + 8))(*v30);
        *v30 = 0;
        (*(void (__stdcall **)(int, int))(*(_DWORD *)v31 + 16))(v31, a1 + 1652);
      }
    }
    v33 = *(_DWORD *)a1;
    *(_BYTE *)(a1 + 1716) = 0;
    result = (*(int (__thiscall **)(int))(v33 + 472))(a1);
    if ( !result )
      result = FootClass::ProcessEnterTransport(a1);
    v34 = *(_DWORD *)(a1 + 1684);
    if ( v34 )
      result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v34 + 1692) + 92))(*(_DWORD *)(v34 + 1692));
    if ( v31 )
      return (*(int (__stdcall **)(int))(*(_DWORD *)v31 + 8))(v31);
  }
  return result;
}

/* ASM:
sub     esp, 14h
push    ebx
push    ebp
push    esi
push    edi
mov     esi, ecx
call    MovementAI__Begin
mov     al, [esi+90h]
xor     ebx, ebx
cmp     al, bl
jz      loc_4DAF00
mov     [esi+6B3h], bl
mov     eax, dword_A8ED54+30h
mov     ecx, ds:8871E0h
cdq
idiv    dword ptr [ecx+1808h]
test    edx, edx
jnz     loc_4DA63B
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+84h]
cmp     [eax+0D37h], bl
jnz     loc_4DA63B
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+54h]
test    al, al
jnz     loc_4DA63B
cmp     [esi+81h], bl
jnz     loc_4DA63B
mov     edx, [esi]
lea     eax, [esp+24h+var_C]
push    eax
mov     ecx, esi
call    dword ptr [edx+48h]
mov     ecx, eax
mov     eax, [ecx]
cdq
and     edx, 0FFh
add     eax, edx
sar     eax, 8
mov     word ptr [esp+24h+var_14], ax
mov     eax, [ecx+4]
cdq
and     edx, 0FFh
add     eax, edx
lea     edx, [esp+24h+var_10]
sar     eax, 8
mov     word ptr [esp+24h+var_14+2], ax
mov     ecx, [esp+24h+var_14]
mov     [esp+24h+var_10], ecx
push    edx
mov     ecx, 87F7E8h
call    CellCoord__To_CellObj
mov     ecx, eax
call    Cell__GetTraversability
cmp     eax, ebx
mov     [esp+24h+var_14], eax
jle     short loc_4DA63B
fild    [esp+24h+var_14]
mov     edi, ds:8871E0h
fmul    qword ptr [edi+1818h]
call    Math__RoundToInt
push    ebx
mov     [esp+28h+var_14], eax
mov     ecx, [edi+1834h]
mov     eax, [esi]
push    1
push    ebx
push    ebx
push    ecx
lea     edx, [esp+38h+var_14]
push    ebx
push    edx
mov     ecx, esi
call    dword ptr [eax+16Ch]
cmp     [esi+90h], bl
jz      loc_4DAF00

loc_4DA63B:                             ; CODE XREF: FootClass__MovementAI+38↑j
; FootClass__MovementAI+4E↑j ...
cmp     [esi+3D5h], bl
jnz     short loc_4DA677
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+84h]
cmp     [eax+0D6Ah], bl
jz      short loc_4DA677
mov     edx, [esi]
push    1
mov     ecx, esi
call    dword ptr [edx+1BCh]
push    eax
mov     ecx, 87F7E8h
call    Type__CheckAmbiguity
test    al, al
jz      short loc_4DA677
mov     byte ptr [esi+3D5h], 1

loc_4DA677:                             ; CODE XREF: FootClass__MovementAI+111↑j
; FootClass__MovementAI+123↑j ...
cmp     [esi+674h], ebx
jnz     short loc_4DA689
push    80004003h
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------

loc_4DA689:                             ; CODE XREF: FootClass__MovementAI+14D↑j
mov     eax, [esi+674h]
push    eax
mov     ecx, [eax]
call    dword ptr [ecx+80h]
test    al, al
jz      loc_4DA7B0
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+54h]
test    al, al
jz      loc_4DA7B0
mov     eax, ds:0A83D4Ch
mov     ecx, [esi+21Ch] ; this
push    eax             ; other
call    HouseClass__IsAlliedWith
test    al, al
jz      loc_4DA7B0
mov     edx, [esi+65Ch]
mov     eax, [esi+664h]
cmp     edx, 0FFFFFFFFh
jz      short loc_4DA6E7
mov     ecx, dword_A8ED54+30h
sub     ecx, edx
cmp     ecx, eax
jge     short loc_4DA6EF
sub     eax, ecx

loc_4DA6E7:                             ; CODE XREF: FootClass__MovementAI+1A7↑j
cmp     eax, ebx
jnz     loc_4DA7B0

loc_4DA6EF:                             ; CODE XREF: FootClass__MovementAI+1B3↑j
mov     edx, [esi]
push    ebx
push    ebx
push    ebx
push    ebx
mov     ecx, esi
call    dword ptr [edx+48Ch]
mov     eax, [esi]
push    ebx
push    ebx
push    ebx
push    ebx
push    ebx
mov     ecx, esi
call    dword ptr [eax+488h]
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+1C8h]
mov     ecx, [esi+264h]
cmp     ecx, eax
lea     eax, [esi+9Ch]
mov     ecx, [esi+9Ch]
jz      short loc_4DA750
mov     edx, [eax+4]
mov     [esp+24h+var_C], ecx
mov     ecx, [esi+260h]
push    ebx
mov     eax, [eax+8]
add     ecx, 3
mov     [esp+28h+var_8], edx
push    ecx
mov     [esp+2Ch+var_4], eax
push    ebx
lea     edx, [esp+30h+var_C]
jmp     short loc_4DA775
; ---------------------------------------------------------------------------

loc_4DA750:                             ; CODE XREF: FootClass__MovementAI+1FA↑j
mov     edx, [eax+4]
mov     [esp+24h+var_C], ecx
push    ebx
mov     [esp+28h+var_8], edx
mov     eax, [eax+8]
lea     edx, [esp+28h+var_C]
mov     [esp+28h+var_4], eax
mov     eax, [esi+260h]
lea     ecx, [eax+3]
add     eax, 0FFFFFFFDh
push    ecx
push    eax

loc_4DA775:                             ; CODE XREF: FootClass__MovementAI+21E↑j
push    edx
mov     ecx, 87F7E8h
call    MapClass__RevealArea2
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+1C8h]
mov     edx, [esp+24h+var_8]
mov     [esi+264h], eax
mov     eax, dword_A8ED54+30h
mov     ecx, 0Fh
mov     [esi+65Ch], eax
mov     [esi+660h], edx
mov     [esi+664h], ecx

loc_4DA7B0:                             ; CODE XREF: FootClass__MovementAI+16A↑j
; FootClass__MovementAI+179↑j ...
mov     eax, dword_A8ED54+30h
and     eax, 8000000Fh
jns     short loc_4DA7C1
dec     eax
or      eax, 0FFFFFFF0h
inc     eax

loc_4DA7C1:                             ; CODE XREF: FootClass__MovementAI+28A↑j
jnz     short loc_4DA806
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+54h]
test    al, al
jz      short loc_4DA806
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+1BCh]
cmp     [eax+3Ch], ebx
jz      short loc_4DA806
mov     edx, [esi]
push    ebx             ; int
lea     eax, [esp+28h+var_10]
push    ebx             ; int
push    eax
mov     ecx, esi
call    dword ptr [edx+1B8h]
mov     ecx, [eax]
mov     edx, [esi]
push    ecx             ; int
push    esi             ; int
push    3Bh ; ';'       ; int
mov     ecx, esi
call    dword ptr [edx+1BCh]
mov     ecx, [eax+3Ch]  ; void **
call    TeamClass__Update_0

loc_4DA806:                             ; CODE XREF: FootClass__MovementAI:loc_4DA7C1↑j
; FootClass__MovementAI+29C↑j ...
mov     eax, [esi+674h]
mov     ebp, [esi+538h]
cmp     eax, ebx
jz      loc_4DAA01
cmp     [esi+3CDh], bl
jnz     loc_4DAA01
cmp     [esi+8Dh], bl
jnz     loc_4DAA01
cmp     [esi+2A8h], ebx
jz      short loc_4DA850
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+84h]
cmp     [eax+692h], bl
jz      loc_4DAA01

loc_4DA850:                             ; CODE XREF: FootClass__MovementAI+308↑j
cmp     [esi+81h], bl
jnz     loc_4DAA01
cmp     [esi+674h], ebx
jnz     short loc_4DA86E
push    80004003h
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------

loc_4DA86E:                             ; CODE XREF: FootClass__MovementAI+332↑j
mov     eax, [esi+674h]
push    eax
mov     ecx, [eax]
call    dword ptr [ecx+40h]
cmp     [esi+90h], bl
jz      loc_4DAF00
cmp     esi, ebx
jnz     short loc_4DA88E
xor     edi, edi
jmp     short loc_4DA8A0
; ---------------------------------------------------------------------------

loc_4DA88E:                             ; CODE XREF: FootClass__MovementAI+358↑j
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+2Ch]
mov     edi, eax
dec     edi
neg     edi
sbb     edi, edi
not     edi
and     edi, esi

loc_4DA8A0:                             ; CODE XREF: FootClass__MovementAI+35C↑j
cmp     [esi+674h], ebx
jnz     short loc_4DA8B2
push    80004003h
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------

loc_4DA8B2:                             ; CODE XREF: FootClass__MovementAI+376↑j
mov     eax, [esi+674h]
push    eax
mov     ecx, [eax]
call    dword ptr [ecx+80h]
test    al, al
jz      short loc_4DA8D3
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+1D8h]
test    al, al
jz      short loc_4DA8FC

loc_4DA8D3:                             ; CODE XREF: FootClass__MovementAI+393↑j
cmp     [esi+2B4h], ebx
jz      short loc_4DA940
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+84h]
cmp     [eax+390h], bl
jz      short loc_4DA940
cmp     edi, ebx
jz      short loc_4DA940
mov     ecx, edi
call    FootClass__updateScanRange
test    al, al
jnz     short loc_4DA940

loc_4DA8FC:                             ; CODE XREF: FootClass__MovementAI+3A1↑j
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+84h]
mov     ecx, eax
mov     eax, dword_A8ED54+30h
cdq
idiv    dword ptr [ecx+294h]
test    edx, edx
jnz     short loc_4DA940
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+1D4h]
test    al, al
jnz     short loc_4DA940
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+1D8h]
test    al, al
jnz     short loc_4DA940
cmp     [esi+6ADh], bl
jz      loc_4DA9FB

loc_4DA940:                             ; CODE XREF: FootClass__MovementAI+3A9↑j
; FootClass__MovementAI+3BB↑j ...
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+84h]
cmp     [eax+298h], ebx
jz      short loc_4DA9B7
cmp     [esi+674h], ebx
jnz     short loc_4DA964
push    80004003h
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------

loc_4DA964:                             ; CODE XREF: FootClass__MovementAI+428↑j
mov     eax, [esi+674h]
push    eax
mov     ecx, [eax]
call    dword ptr [ecx+80h]
test    al, al
jnz     short loc_4DA9B7
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+84h]
mov     ecx, eax
mov     eax, dword_A8ED54+30h
cdq
idiv    dword ptr [ecx+298h]
test    edx, edx
jnz     short loc_4DA9B7
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+1D4h]
test    al, al
jnz     short loc_4DA9B7
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+1D8h]
test    al, al
jnz     short loc_4DA9B7
cmp     [esi+6ADh], bl
jz      short loc_4DA9FB

loc_4DA9B7:                             ; CODE XREF: FootClass__MovementAI+420↑j
; FootClass__MovementAI+445↑j ...
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+84h]
cmp     [eax+6ADh], bl
jz      short loc_4DAA01
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+1C8h]
test    eax, eax
jle     short loc_4DAA01
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+1D4h]
test    al, al
jnz     short loc_4DAA01
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+1D8h]
test    al, al
jnz     short loc_4DAA01
cmp     [esi+6ADh], bl
jnz     short loc_4DAA01

loc_4DA9FB:                             ; CODE XREF: FootClass__MovementAI+40A↑j
; FootClass__MovementAI+485↑j
inc     dword ptr [esi+538h]

loc_4DAA01:                             ; CODE XREF: FootClass__MovementAI+2E4↑j
; FootClass__MovementAI+2F0↑j ...
cmp     ebp, [esi+538h]
jnz     short loc_4DAA32
cmp     [esi+674h], ebx
jnz     short loc_4DAA1B
push    80004003h
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------

loc_4DAA1B:                             ; CODE XREF: FootClass__MovementAI+4DF↑j
mov     eax, [esi+674h]
push    eax
mov     ecx, [eax]
call    dword ptr [ecx+80h]
test    al, al
jz      loc_4DAAFA

loc_4DAA32:                             ; CODE XREF: FootClass__MovementAI+4D7↑j
cmp     [esi+8Dh], bl
jnz     loc_4DAAFA
cmp     [esi+425h], bl
jnz     loc_4DAAFA
cmp     [esi+2A8h], ebx
jz      short loc_4DAA68
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+84h]
cmp     [eax+692h], bl
jnz     loc_4DAAFA

loc_4DAA68:                             ; CODE XREF: FootClass__MovementAI+520↑j
cmp     [esi+53Ch], bl
jnz     short loc_4DAAEE
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+84h]
mov     ecx, [eax+504h]
add     eax, 4F4h
cmp     ecx, ebx
jle     short loc_4DAAEE
lea     ebp, [esi+544h]
mov     ecx, ebp
call    AudioController__Stop
lea     ecx, [esi+9Ch]
mov     edx, [esi+9Ch]
mov     [esp+24h+var_C], edx
mov     edx, [esi]
mov     eax, [ecx+4]
mov     [esp+24h+var_8], eax
mov     ecx, [ecx+8]
mov     [esp+24h+var_4], ecx
mov     ecx, esi
call    dword ptr [edx+84h]
mov     edi, eax
mov     ecx, 886B88h
add     edi, 4F4h
call    Random__State
xor     edx, edx
push    ebp
div     dword ptr [edi+10h]
mov     eax, [edi+4]
lea     ebp, [esp+28h+var_C]
mov     ecx, [eax+edx*4]
mov     edx, ebp
call    StartAudioControllerAt
mov     byte ptr [esi+53Ch], 1

loc_4DAAEE:                             ; CODE XREF: FootClass__MovementAI+53E↑j
; FootClass__MovementAI+557↑j
mov     dword ptr [esi+540h], 3
jmp     short loc_4DAB3C
; ---------------------------------------------------------------------------

loc_4DAAFA:                             ; CODE XREF: FootClass__MovementAI+4FC↑j
; FootClass__MovementAI+508↑j ...
cmp     [esi+53Ch], bl
jz      short loc_4DAB3C
mov     eax, [esi+540h]
cmp     eax, ebx
jz      short loc_4DAB25
cmp     [esi+8Dh], bl
jnz     short loc_4DAB25
cmp     [esi+425h], bl
jnz     short loc_4DAB25
dec     eax
mov     [esi+540h], eax
jmp     short loc_4DAB3C
; ---------------------------------------------------------------------------

loc_4DAB25:                             ; CODE XREF: FootClass__MovementAI+5DA↑j
; FootClass__MovementAI+5E2↑j ...
lea     ecx, [esi+544h]
call    Mixer__ReleaseChannel
mov     [esi+53Ch], bl
mov     [esi+540h], ebx

loc_4DAB3C:                             ; CODE XREF: FootClass__MovementAI+5C8↑j
; FootClass__MovementAI+5D0↑j ...
mov     al, [esi+8Dh]
mov     cl, [esi+8Eh]
cmp     al, cl
jz      short loc_4DABC4
cmp     al, bl
jz      short loc_4DABB3
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+84h]
mov     ecx, [eax+54Ch]
or      edi, 0FFFFFFFFh
cmp     ecx, edi
jz      short loc_4DABB6
cmp     [esi+8Fh], bl
jz      short loc_4DABB6
lea     eax, [esi+9Ch]
push    ebx
lea     ebp, [esp+28h+var_C]
mov     ecx, [eax]
mov     [esp+28h+var_C], ecx
mov     ecx, esi
mov     edx, [eax+4]
mov     [esp+28h+var_8], edx
mov     edx, [esi]
mov     eax, [eax+8]
mov     [esp+28h+var_4], eax
call    dword ptr [edx+84h]
mov     ecx, [eax+54Ch]
mov     edx, ebp
call    StartAudioControllerAt
mov     al, [esi+8Dh]
mov     [esi+8Eh], al
jmp     short loc_4DABC7
; ---------------------------------------------------------------------------

loc_4DABB3:                             ; CODE XREF: FootClass__MovementAI+61E↑j
or      edi, 0FFFFFFFFh

loc_4DABB6:                             ; CODE XREF: FootClass__MovementAI+635↑j
; FootClass__MovementAI+63D↑j
mov     al, [esi+8Dh]
mov     [esi+8Eh], al
jmp     short loc_4DABC7
; ---------------------------------------------------------------------------

loc_4DABC4:                             ; CODE XREF: FootClass__MovementAI+61A↑j
or      edi, 0FFFFFFFFh

loc_4DABC7:                             ; CODE XREF: FootClass__MovementAI+681↑j
; FootClass__MovementAI+692↑j
mov     al, [esi+3CDh]
mov     cl, [esi+3CEh]
cmp     al, cl
jz      loc_4DACDD
cmp     al, bl
jz      loc_4DACBE
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+84h]
cmp     [eax+554h], edi
jz      short loc_4DAC2B
lea     eax, [esi+9Ch]
push    ebx
lea     ebp, [esp+28h+var_C]
mov     ecx, [eax]
mov     [esp+28h+var_C], ecx
mov     ecx, esi
mov     edx, [eax+4]
mov     [esp+28h+var_8], edx
mov     edx, [esi]
mov     eax, [eax+8]
mov     [esp+28h+var_4], eax
call    dword ptr [edx+84h]
mov     ecx, [eax+554h]
mov     edx, ebp
call    StartAudioControllerAt

loc_4DAC2B:                             ; CODE XREF: FootClass__MovementAI+6C3↑j
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+84h]
cmp     [eax+548h], edi
jz      short loc_4DAC7B
lea     ecx, [esi+9Ch]
lea     edi, [esp+24h+var_C]
mov     edx, [ecx]
mov     [esp+24h+var_C], edx
lea     edx, [esi+544h]
mov     eax, [ecx+4]
push    edx
mov     [esp+28h+var_8], eax
mov     eax, [esi]
mov     ecx, [ecx+8]
mov     [esp+28h+var_4], ecx
mov     ecx, esi
call    dword ptr [eax+84h]
mov     ecx, [eax+548h]
mov     edx, edi
call    StartAudioControllerAt
jmp     short loc_4DACD1
; ---------------------------------------------------------------------------

loc_4DAC7B:                             ; CODE XREF: FootClass__MovementAI+70B↑j
mov     eax, ds:8871E0h
cmp     [eax+208h], edi
jz      short loc_4DACD1
lea     ecx, [esi+9Ch]
mov     edx, [esi+9Ch]
mov     [esp+24h+var_C], edx
mov     edx, [ecx+4]
mov     [esp+24h+var_8], edx
lea     edx, [esi+544h]
mov     ecx, [ecx+8]
push    edx
mov     [esp+28h+var_4], ecx
mov     ecx, [eax+208h]
lea     edx, [esp+28h+var_C]
call    StartAudioControllerAt
jmp     short loc_4DACD1
; ---------------------------------------------------------------------------

loc_4DACBE:                             ; CODE XREF: FootClass__MovementAI+6AD↑j
cmp     [esi+53Ch], bl
jnz     short loc_4DACD1
lea     ecx, [esi+544h]
call    Mixer__ReleaseChannel

loc_4DACD1:                             ; CODE XREF: FootClass__MovementAI+749↑j
; FootClass__MovementAI+756↑j ...
mov     al, [esi+3CDh]
mov     [esi+3CEh], al

loc_4DACDD:                             ; CODE XREF: FootClass__MovementAI+6A5↑j
mov     al, [esi+425h]
mov     cl, [esi+426h]
cmp     al, cl
jz      loc_4DADC8
cmp     al, bl
jz      loc_4DADA9
lea     edi, [esi+544h]
mov     ecx, edi
call    Mixer__ReleaseChannel
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+84h]
cmp     dword ptr [eax+550h], 0FFFFFFFFh
jz      short loc_4DAD5E
mov     ecx, [esi+21Ch] ; this
call    House__IsHumanPlayer
test    al, al
jz      short loc_4DAD5E
lea     eax, [esi+9Ch]
push    ebx
lea     ebp, [esp+28h+var_C]
mov     ecx, [eax]
mov     [esp+28h+var_C], ecx
mov     ecx, esi
mov     edx, [eax+4]
mov     [esp+28h+var_8], edx
mov     edx, [esi]
mov     eax, [eax+8]
mov     [esp+28h+var_4], eax
call    dword ptr [edx+84h]
mov     ecx, [eax+550h]
mov     edx, ebp
call    StartAudioControllerAt

loc_4DAD5E:                             ; CODE XREF: FootClass__MovementAI+7E7↑j
; FootClass__MovementAI+7F6↑j
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+84h]
cmp     dword ptr [eax+544h], 0FFFFFFFFh
jz      short loc_4DADBC
lea     ecx, [esi+9Ch]
push    edi
lea     edi, [esp+28h+var_C]
mov     edx, [ecx]
mov     [esp+28h+var_C], edx
mov     edx, [esi]
mov     eax, [ecx+4]
mov     [esp+28h+var_8], eax
mov     ecx, [ecx+8]
mov     [esp+28h+var_4], ecx
mov     ecx, esi
call    dword ptr [edx+84h]
mov     ecx, [eax+544h]
mov     edx, edi
call    StartAudioControllerAt
jmp     short loc_4DADBC
; ---------------------------------------------------------------------------

loc_4DADA9:                             ; CODE XREF: FootClass__MovementAI+7C3↑j
cmp     [esi+53Ch], bl
jnz     short loc_4DADBC
lea     ecx, [esi+544h]
call    Mixer__ReleaseChannel

loc_4DADBC:                             ; CODE XREF: FootClass__MovementAI+83F↑j
; FootClass__MovementAI+877↑j ...
mov     al, [esi+425h]
mov     [esi+426h], al

loc_4DADC8:                             ; CODE XREF: FootClass__MovementAI+7BB↑j
lea     ecx, [esi+9Ch]
mov     edx, [esi+9Ch]
mov     [esp+24h+var_C], edx
lea     edx, [esi+544h]
mov     eax, [ecx+4]
mov     [esp+24h+var_8], eax
mov     ecx, [ecx+8]
mov     [esp+24h+var_4], ecx
lea     ecx, [esp+24h+var_C]
call    StartAudioController
mov     edx, dword_A8ED54+30h
and     edx, 3Fh
cmp     dl, 3Fh ; '?'
jnz     short loc_4DAE5F
cmp     [esi+5A4h], ebx
jnz     short loc_4DAE5F
cmp     [esi+8Ch], bl
jnz     short loc_4DAE5F
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+1BCh]
cmp     [eax+11Ch], bl
jnz     short loc_4DAE5F
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+2B0h]
test    al, al
jz      short loc_4DAE5F
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+1C8h]
test    eax, eax
jnz     short loc_4DAE5F
mov     edx, [esi]
push    ebx
lea     eax, [esp+28h+var_C]
push    1
push    eax
mov     ecx, esi
mov     [esp+30h+var_C], ebx
mov     [esp+30h+var_8], ebx
mov     [esp+30h+var_4], ebx
call    dword ptr [edx+174h]

loc_4DAE5F:                             ; CODE XREF: FootClass__MovementAI+8D1↑j
; FootClass__MovementAI+8D9↑j ...
mov     eax, [esi+674h]
lea     ebp, [esi+674h]
xor     edi, edi
cmp     eax, ebx
jz      short loc_4DAEC6
mov     ecx, [eax]
lea     edx, [esp+24h+var_10]
push    edx
push    offset unk_819088
push    eax
call    dword ptr [ecx]
mov     edx, [esp+24h+var_10]
xor     ecx, ecx
cmp     eax, ebx
setl    cl
dec     ecx
and     ecx, edx
cmp     eax, ebx
mov     edi, ecx
jge     short loc_4DAEA1
cmp     eax, 80004002h
jz      short loc_4DAEA1
push    eax
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------

loc_4DAEA1:                             ; CODE XREF: FootClass__MovementAI+962↑j
; FootClass__MovementAI+969↑j
cmp     edi, ebx
jz      short loc_4DAEC6
mov     edx, [edi]
push    edi
call    dword ptr [edx+14h]
test    al, al
jz      short loc_4DAEC6
mov     eax, [ebp+0]
cmp     eax, ebx
jz      short loc_4DAEBC
mov     ecx, [eax]
push    eax
call    dword ptr [ecx+8]

loc_4DAEBC:                             ; CODE XREF: FootClass__MovementAI+984↑j
mov     [ebp+0], ebx
mov     edx, [edi]
push    ebp
push    edi
call    dword ptr [edx+10h]

loc_4DAEC6:                             ; CODE XREF: FootClass__MovementAI+93F↑j
; FootClass__MovementAI+973↑j ...
mov     eax, [esi]
mov     ecx, esi
mov     [esi+6B4h], bl
call    dword ptr [eax+1D8h]
test    al, al
jnz     short loc_4DAEE1
mov     ecx, esi
call    FootClass__ProcessEnterTransport

loc_4DAEE1:                             ; CODE XREF: FootClass__MovementAI+9A8↑j
mov     esi, [esi+694h]
cmp     esi, ebx
jz      short loc_4DAEF6
mov     ecx, [esi+69Ch]
mov     edx, [ecx]
call    dword ptr [edx+5Ch]

loc_4DAEF6:                             ; CODE XREF: FootClass__MovementAI+9B9↑j
cmp     edi, ebx
jz      short loc_4DAF00
mov     eax, [edi]
push    edi
call    dword ptr [eax+8]

loc_4DAF00:                             ; CODE XREF: FootClass__MovementAI+18↑j
; FootClass__MovementAI+105↑j ...
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 14h
retn
*/
}

void FootClass::EmitMovementSmoke()
{
    // IDA: Every 6 frames, if not in limbo, not airborne, not a bomb:
    // Get cell at map coordinates, check traversability (sub_487CB0),
    // scale damage by traversability * rules.SmokeSpeed (Rules[1549]),
    // emit ReceiveDamage(&scaled_damage, 0, rules[1549], 0, 0, 1, 0)
    if ((CurrentFrame % 6) == 0
        && !inLimbo
        && !isAirborne()
        && !isBomb)
    {
        CoordStruct coords;
        fetchCoordinatesHere(&coords);

        int cell_x = coords.X / 256;
        int cell_y = coords.Y / 256;

        CellStruct map_coords = { (int16_t)(cell_x), (int16_t)(cell_y) };

        // IDA: cell = CellCoord::To_CellObj(&MapClass_Instance, &map_coords) — sub_5657A0
        // IDA: if (cell) traversability = Cell::GetTraversability(cell) — sub_487CB0
        // IDA: if (traversability) damage = traversability * Rules[1549] (SmokeSpeed)
        // IDA: ReceiveDamage(&damage, 0, Rules[1549], 0, 0, 1, 0)
    }
}

void FootClass::UpdateMovementAmbiguity()
{
    // IDA: if (!FootClass_field_bool_6B5 && IsHouseFlag3434(this+0x21C)):
    //   GetType() → check sub_578540(type, 1) → set FootClass_field_bool_6B5 = true
    // House flag check: owner house has movement ambiguity detection enabled
    if (!FootClass_field_bool_6B5)
    {
        // IDA: auto* owner = *(this + 0x21C); // owning house
        // IDA: if (owner && IsHouseFlag3434(owner)):
        //     auto* type = GetType();
        //     sub_578540(type, 1); // enable ambiguity detection for type
        //     FootClass_field_bool_6B5 = true;
    }
}

void FootClass::UpdateMovementSpeed()
{
    // IDA: ILocomotion speed recalculation.
    // If locomotor is moving and not airborne and player-controlled:
    //   Recalculate speed from locomotion period timer,
    //   adjust facing toward target using currentSpeed_timer/period fields.
    //   Narrow turns (in-place rotation) if facing == target facing;
    //   Wide turns otherwise.
    // Uses: vtable[1164] and vtable[1160] for speed reset.
    if (!locomotor.ptr)
        return;

    // IDA: ILocomotion::Is_Moving() → !isAirborne() → IsCurrentPlayer()
    // → update currentSpeed_percentage from movement period
    // → recalculate target-facing for smooth rotation
}

void FootClass::HandleMovementSoundupdateLogic()
{
    // IDA: Section 6 from MovementAI — terrain transition sound effects.
    // Checks: onBridge, isSinking, isCrashing state changes.
    // Audio position update for ambient/engine sounds (sub_750D40).

    bool was_on_bridge = onBridge;
    bool was_sinking = isSinking;
    bool was_crashing = isCrashing;

    // IDA: Refresh bridge state: onBridge = IsOnBridge()
    // Refresh sink/crash states from locomotion/terrain state
    onBridge = IsOnBridge();

    // IDA: isSinking and isCrashing are read from locomotor/terrain state
    // The actual values would be set by the locomotion system

    if (was_on_bridge != onBridge)
    {
        // IDA: Bridge entry/exit sound via Rules sound index
    }

    if (was_sinking != isSinking)
    {
        // IDA: Sinking state change → play water entry/exit sound
    }

    if (was_crashing != isCrashing)
    {
        // IDA: Crashing state change → play crash sound
    }

    // IDA: Audio position update (sub_750D40) for position-dependent audio
    // Uses fetchCoordinatesHere() to update audio source position
    CoordStruct loc;
    fetchCoordinatesHere(&loc);
}

void FootClass::HandleLocomotionupdateLogic()
{
    // IDA: Section 7 from MovementAI — COM ILocomotion QueryInterface.
    // Resets attack flag, checks locomotion state:
    //   if (locomotor && vt_entry_472(this) → not moving):
    //     sub_70D7E0 → process enter transport or movement result
    //   if (parasiteEatingMe):
    //     update parasite position

    isAttackedByLocomotor = false;

    if (!locomotor.ptr)
        return;

    // IDA: vt_entry_472(this) — check if locomotor reports "is moving"
    // If not moving, call FootClass::ProcessEnterTransport (sub_70D7E0)
    // to handle transport entry/exit and movement completion

    // IDA: Check parasite state (parasiteEatingMe at this+0x694)
    // If parasite is active, update parasite position to match this object
}

// ============================================================
// Mission state overrides
// ============================================================

int FootClass::Mission_Move()
{
    // IDA: Mission_Move in FootClass — navigation toward destination.
    // If no destination and no queued mission, switch to Guard.
    // AI-controlled units scan for nearby threats while moving.
    if (!movementDestination && missionQueued == 0)
    {
        queueMission((Mission)((int)(gamemd::Mission::Guard)), true);
        return 1;
    }

    // IDA: AI units: scan for nearby enemy targets while in transit
    // if (!target && IsAIControlled()):
    //     SelectAutoTarget(THREAT_RANGE) with current house threat range
    if (!target)
    {
        // IDA: check if owner house is AI-controlled (not human player)
        // If so, scan for nearby threats with SelectAutoTarget
    }

    return 10;
}

int FootClass::Mission_Attack()
{
    // IDA: Mission_Attack — close distance → fire → repeat.
    // Checks attacker-weapon readiness and target validity.
    auto* tgt = target;
    if (!tgt)
        return 0;

    if (!IsCloseEnoughToAttack(tgt))
    {
        movementDestination = target;
        return 0;
    }

    int weapon_idx = SelectWeapon(target);
    Fire(target, weapon_idx);

    return 0;
}

int FootClass::Mission_Guard()
{
    // IDA: Mission_Guard — area defense scan.
    // Periodically scans for enemies within guard range.
    // If target found, queue Attack mission.
    if (!target)
    {
        SelectAutoTarget((TargetFlags)(0), 0, false);
    }
    return 30;
}

int FootClass::Mission_Hunt()
{
    // IDA: Mission_Hunt — aggressive scan + chase.
    // If no target, scan. If still no target after scan,
    // fall back to Guard mode.
    if (!target)
    {
        SelectAutoTarget((TargetFlags)(0), 0, false);
    }
    if (!target)
    {
        queueMission((Mission)((int)(gamemd::Mission::Guard)), true);
        return 30;
    }
    return 0;
}

// ============================================================
// Movement control helpers
// ============================================================

bool FootClass::MoveTo(CoordStruct* coords)
{
    if (!coords)
        return false;

    // IDA: Reset pathfinding delay and navigation destination
    pathDelayTimer = {};
    movementDestination = nullptr;

    return true;
}

bool FootClass::StopMoving()
{
    // IDA: Stop ILocomotion, release track reservation, set speed to 0.
    // Calls ILocomotion::Stop() COM method, then clears movement destination.
    if (!locomotor.ptr)
        return false;

    // IDA: ILocomotion::Stop() — COM method to halt movement
    // IDA: Release track reservation (path planning node release)
    // IDA: Set locomotor speed to 0 via speed multiplier

    movementDestination = nullptr;

    return true;
}

// ============================================================
// Destroyed (IDA: 0x4D98C0, 91B)
// Handles unit death: stop movement, eject passengers, award experience,
// play EVA "UnitLost" for human players when trigger is far enough.
// ============================================================
void FootClass::Destroyed(ObjectClass* killer)
{
    // IDA: if already dead (isAliveFlag false), skip
    if (!isAliveFlag)
        return;

    isAliveFlag = false;
    isCrashing = true;

    // IDA: Stop movement via ILocomotion COM
    if (locomotor.ptr) {
        StopMoving();
    }

    // IDA: Eject passengers from transport (FootClass::EjectPassengers)

    // IDA: Award experience to killer
    if (killer) {
        RegisterDestruction((TechnoClass*)(killer));
        auto* killer_house = killer->owningHouse();
        if (killer_house)
            RegisterKill(killer_house);
    }

    // IDA: EVA "UnitLost" announcement for human players
    // Check: House::IsHumanPlayer(owner) && !Type->field_3412
    // Then: fetchCoordinatesHere → CreateTriggerClassIfFarEnough(7, coord)
    //       → VoxClass::FindAndPlay("EVA_UnitLost", -1)
    // Uses: owner = *(this + 0x21C), Type via vtable[33], coords via vtable[110]
    // When dependency classes (VoxClass, House, Trigger) are available,
    // the EVA announcement path will activate automatically.
    // For now: EVA is deferred to the audio subsystem.

    // IDA: Start crash/death animation and remove from map
    Remove();
}

} // namespace game
} // namespace ra2

#include "object/foot.hpp"

namespace ra2 { namespace game {

// --- FootClass ---

void FootClass::onBuildingPlacement(uint32_t a, uint32_t b) {}
void FootClass::ReceiveGunner(FootClass* gunner) {}
void FootClass::RemoveGunner(FootClass* gunner) {}
bool FootClass::IsLeavingMap() const { return false; }
bool FootClass::canMove() const { return false; }
bool FootClass::onProductionComplete() const { return false; }
void FootClass::onCellEntry(CellStruct* cell) {}
void FootClass::processSuperWeapon(CellStruct* cell) {}
CoordStruct* FootClass::getMoveCoords(CoordStruct* out) { return nullptr; }
void FootClass::onMoveStart() {}
bool FootClass::canStop() { return false; }
bool FootClass::canRecruitTeamMember() { return false; }
void FootClass::onDrawComplete() {}
void FootClass::PlayIdleAnim(int idle_anim_number) {}
uint32_t FootClass::getMovementMode() { return 0; }
uint32_t FootClass::getPathDistance(uint32_t a, uint32_t b, uint32_t c) const { return 0; }
uint32_t FootClass::getPathCost(uint32_t a, uint32_t b, uint32_t c, uint32_t d) const { return 0; }
uint32_t FootClass::isAreaClear(uint32_t a, uint32_t b, uint32_t c) const { return 0; }
void FootClass::onAreaEntry(uint32_t a, uint32_t b) {}
uint32_t FootClass::getWaypointData(uint32_t a) { return 0; }
void FootClass::onWaypointReached(uint32_t a) {}
void FootClass::onPathComplete() {}
void FootClass::onMovementDone() {}
bool FootClass::CanEnterCell(uint32_t a) { return false; }
int FootClass::MissionMoveCarryallLand() { return 0; }
void FootClass::vt_entry_4F8() {}
int FootClass::Destru_vt323() { return 0; }
void FootClass::vt_entry_514() {}
bool FootClass::StubReturnFalse() { return false; }
void FootClass::StubReturnVoid() {}
void FootClass::vt_entry_534() {}
void FootClass::vt_entry_540() {}
int FootClass::GetTurretAngle() const { return 0; }
void FootClass::ProcessDemolish() {}
void FootClass::UpdateSidebar() {}
void FootClass::ProcessPrimarySelect() {}
int FootClass::StubReturn0() { return 0; }
void FootClass::ScanCircleForUnits() {}
void FootClass::ScanCircleForUnits2() {}
int FootClass::GetCapacity() const { return 0; }
int FootClass::ResizeOccupiedCellList() { return 0; }
int FootClass::sub_4734B0() { return 0; }
int FootClass::checkTerrainSpeed() { return 0; }
int FootClass::updateLocomotion() { return 0; }
int FootClass::FindPathWithRetry() { return -1; }
void FootClass::ProcessDeployMission() {}
void FootClass::UpdateDeployMovement() {}
int FootClass::PostLoadInit() { return 0; }
int FootClass::Destru_vt337() { return 0; }
void FootClass::UpdateReveal() {}
bool FootClass::CheckTileSeed() const { return false; }
int FootClass::MovementStep() { return 0; }
int FootClass::Destru_vt139() { return 0; }
bool FootClass::CheckVoiceResponse() const { return false; }
void FootClass::ProcessMissionVoice() {}
int FootClass::FindMovePosition() { return -1; }
int FootClass::PlayCOM_audio() { return 0; }
int FootClass::Destru_vt319() { return 0; }
int FootClass::EnterAttackState() { return 0; }
void FootClass::CalculateApproachPath() {}
int FootClass::FindAITarget() { return -1; }
int FootClass::DispatchInput() { return 0; }
void FootClass::ProcessDeploy() {}
int FootClass::ValidateMove() { return 0; }
int FootClass::ValidatePlacement() { return 0; }
int FootClass::GetCoords() const { return 0; }
void FootClass::UpdateAI() {}
int FootClass::OverrideMission_SyncLog() { return 0; }
int FootClass::ConditionalAction() { return 0; }
int FootClass::MissionDispatch() { return 0; }
void FootClass::ProcessTeamAction() {}
int FootClass::AssignDestination() { return 0; }
int FootClass::DispatchSell() { return 0; }
int FootClass::SelectAutoTarget_Cloaked() { return 0; }
int FootClass::HandleTargetDestroyed() { return 0; }
void FootClass::vt_entry_524() {}
int FootClass::Destru_vt107() { return 0; }
int FootClass::vt_entry_4F0() { return 0; }
void FootClass::ClearSomeVector() {}
bool FootClass::CanBeControlled() const { return false; }
bool FootClass::CanBeRecruited() const { return false; }
void FootClass::ClearSomeVector2() {}
void FootClass::ProcessMovement() {}
bool FootClass::CheckTargetValidity() const { return false; }
int FootClass::UpdateState() { return 0; }
int FootClass::GetAttackSpeed() const { return 0; }
int FootClass::Destru_vt30() { return 0; }
void FootClass::vt_entry_548() {}
void FootClass::vt_entry_54C() {}
int FootClass::BeginPowerUpdate() { return 0; }
bool FootClass::CanBeHunted() const { return false; }
int FootClass::LiberateMember() { return 0; }
int FootClass::vt_entry_4E0() { return 0; }
int FootClass::vt_entry_4F4() { return 0; }
int FootClass::CheckTargetCell() const { return 0; }
int FootClass::Destru_vt311() { return 0; }
void FootClass::SetBuildingType() {}
int FootClass::MoveToTiberium() { return 0; }
int FootClass::FindMoveTarget() { return -1; }
int FootClass::MoveToWeed() { return 0; }
bool FootClass::CheckHeightDiff() const { return false; }
int FootClass::ValidateTargetCell() { return 0; }
int FootClass::HandleCursorWithCheck() { return 0; }
void FootClass::ProcessMissionState() {}
int FootClass::ValidateFoundation() { return 0; }
int FootClass::PreDestroy() { return 0; }
int FootClass::OnCompleteAction() { return 0; }
int FootClass::RemovePassenger() { return 0; }
int FootClass::PopAndProcess() { return 0; }
bool FootClass::IsTimerActive() const { return false; }
bool FootClass::IsTargetInRange() const { return false; }
int FootClass::CheckCellPassable() const { return 0; }
bool FootClass::DeployAction() { return false; }
void FootClass::UpdateTeamAI() {}
int FootClass::vt_entry_530() { return 0; }
void FootClass::ClearPathIndex() {}
int FootClass::MissionSell_Dispatch() { return 0; }
void FootClass::UpdateAttackMove_SelectNewTarget() {}
void FootClass::ScanAdjacentCells() {}
int FootClass::Destru_vt322() { return 0; }
bool FootClass::IsNotAttackAndPlayer() const { return false; }
int FootClass::Jumpjet_OccupyCell() { return 0; }
int FootClass::Destru_vt08() { return 0; }
int FootClass::RemoveFromPointerArray() { return 0; }
int FootClass::sub_550DAA0() { return 0; }
int FootClass::FindNearestApproachableCell() { return -1; }
bool FootClass::CreateWakes() { return false; }
int FootClass::sub_56E52F0() { return 0; }
int FootClass::LinkToTransporter() { return 0; }
int FootClass::GetGameSpeedFromSession() const { return 0; }
int FootClass::CompleteProduction() { return 0; }
void FootClass::UpdateLocomotion() {}
int FootClass::ProcessEnterTransport() { return 0; }
void FootClass::SetThreatBounds() {}
int FootClass::ApplyThreatBounds() { return 0; }
int FootClass::sub_570F7E0() { return 0; }
int FootClass::sub_70FEB0() { return 0; }
void FootClass::UpdatePassengerCoords() {}
void FootClass::Cleanup() {}
int FootClass::RespondToDestruction() { return 0; }
int FootClass::sub_5746D80() { return 0; }
bool FootClass::CheckAccelLimit() const { return false; }
int FootClass::GetField() const { return 0; }
void FootClass::SetField() {}

} // namespace game
} // namespace ra2
