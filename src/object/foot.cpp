#include "object/foot.hpp"

#include <cstring>
#include "e4/e4_globals.hpp"

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
Coord * * FootClass::MovementAI()
{
  char result; // al
  unsigned int *v3; // eax
  int v4; // eax
  unsigned int *v5; // edi
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
  int (__stdcall ***v29)(unsigned int, void *, int *); // eax
  unsigned int *v30; // ebp
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

  MovementAI::Begin(); /*0x4da539*/
  result = *(unsigned char *)(a1 + 144); /*0x4da53e*/
  if ( !result ) /*0x4da548*/
    return result; /*0x4da548*/
  *(unsigned char *)(a1 + 1715) = 0; /*0x4da54e*/
  if ( !((int)g_CurrentFrame % *((unsigned int *)g_RulesClass_Instance + 1538)) /*0x4da593*/
    && !*(unsigned char *)((*(int (__thiscall **)(int))(*(unsigned int *)a1 + 132))(a1) + 3383)
    && !(*(uint8_t (__thiscall **)(int))(*(unsigned int *)a1 + 84))(a1)
    && !*(unsigned char *)(a1 + 129) )
  {
    v3 = (unsigned int *)(*(int (__thiscall **)(int, int *))(*(unsigned int *)a1 + 72))(a1, &v38); /*0x4da5a8*/
    IDA_LOWORD(v36) = *v3 / 256; /*0x4da5bb*/
    IDA_HIWORD(v36) = v3[1] / 256; /*0x4da5d3*/
    v37 = v36; /*0x4da5dc*/
    v4 = CellCoord::To_CellObj(&v37); /*0x4da5e6*/
    v36 = Cell::GetTraversability(v4); /*0x4da5f4*/
    if ( v36 > 0 ) /*0x4da5f8*/
    {
      v5 = g_RulesClass_Instance; /*0x4da5fe*/
      v36 = Math::RoundToInt((double)v36 * *((double *)g_RulesClass_Instance + 771)); /*0x4da610*/
      result = (*(int (__thiscall **)(int, int *, unsigned int, unsigned int, unsigned int, unsigned int, int, unsigned int))(*(unsigned int *)a1 + 364))( /*0x4da629*/
                 a1,
                 &v36,
                 0,
                 v5[1549],
                 0,
                 0,
                 1,
                 0);
      if ( !*(unsigned char *)(a1 + 144) ) /*0x4da62f*/
        return result; /*0x4da635*/
    }
  }
  if ( !*(unsigned char *)(a1 + 981) ) /*0x4da63b*/
  {
    if ( *(unsigned char *)((*(int (__thiscall **)(int))(*(unsigned int *)a1 + 132))(a1) + 3434) ) /*0x4da64d*/
    {
      v6 = (*(int (__thiscall **)(int))(*(unsigned int *)a1 + 444))(a1); /*0x4da65b*/
      if ( (uint8_t)Type::CheckAmbiguity(v6, 1) ) /*0x4da667*/
        *(unsigned char *)(a1 + 981) = 1; /*0x4da670*/
    }
  }
  if ( !*(unsigned int *)(a1 + 1652) ) /*0x4da677*/
    WinAPI::Wrapper(-2147467261); /*0x4da684*/
  if ( (*(uint8_t (__stdcall **)(unsigned int))(**(unsigned int **)(a1 + 1652) + 128))(*(unsigned int *)(a1 + 1652)) /*0x4da6bb*/
    && (*(uint8_t (__thiscall **)(int))(*(unsigned int *)a1 + 84))(a1)
    && (uint8_t)HouseClass::IsAlliedWith(HouseClass_Player) )
  {
    v7 = *(unsigned int *)(a1 + 1628); /*0x4da6c8*/
    v8 = *(unsigned int *)(a1 + 1636); /*0x4da6ce*/
    if ( v7 != -1 ) /*0x4da6d7*/
    {
      if ( (int)g_CurrentFrame - v7 >= v8 ) /*0x4da6e3*/
      {
  LABEL_21:
        (*(void (__thiscall **)(int, unsigned int, unsigned int, unsigned int, unsigned int))(*(unsigned int *)a1 + 1164))(a1, 0, 0, 0, 0); /*0x4da6ef*/
        (*(void (__thiscall **)(int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int))(*(unsigned int *)a1 + 1160))(a1, 0, 0, 0, 0, 0); /*0x4da706*/
        if ( *(unsigned int *)(a1 + 612) == (*(int (__thiscall **)(int))(*(unsigned int *)a1 + 456))(a1) ) /*0x4da72a*/
        {
          v12 = *(unsigned int *)(a1 + 160); /*0x4da750*/
          v38 = *(unsigned int *)(a1 + 156); /*0x4da753*/
          v39 = v12; /*0x4da758*/
          v40 = *(unsigned int *)(a1 + 164); /*0x4da763*/
          MapClass::RevealArea2(&v38, *(unsigned int *)(a1 + 608) - 3, *(unsigned int *)(a1 + 608) + 3, 0); /*0x4da77b*/
        }
        else
        {
          v9 = *(unsigned int *)(a1 + 160); /*0x4da72c*/
          v38 = *(unsigned int *)(a1 + 156); /*0x4da72f*/
          v10 = *(unsigned int *)(a1 + 608); /*0x4da733*/
          v11 = *(unsigned int *)(a1 + 164); /*0x4da73a*/
          v39 = v9; /*0x4da740*/
          v40 = v11; /*0x4da745*/
          MapClass::RevealArea2(&v38, 0, v10 + 3, 0); /*0x4da74e*/
        }
        v13 = (*(int (__thiscall **)(int))(*(unsigned int *)a1 + 456))(a1); /*0x4da784*/
        v14 = v39; /*0x4da78a*/
        *(unsigned int *)(a1 + 612) = v13; /*0x4da78e*/
        *(unsigned int *)(a1 + 1628) = g_CurrentFrame; /*0x4da79e*/
        *(unsigned int *)(a1 + 1632) = v14; /*0x4da7a4*/
        *(unsigned int *)(a1 + 1636) = 15; /*0x4da7aa*/
        goto LABEL_25; /*0x4da7aa*/
      }
      v8 -= (int)g_CurrentFrame - v7; /*0x4da6e5*/
    }
    if ( v8 ) /*0x4da6e9*/
      goto LABEL_25; /*0x4da6e9*/
    goto LABEL_21; /*0x4da6e9*/
  }
  LABEL_25:
  if ( !((int)g_CurrentFrame % 16) /*0x4da7d8*/
    && (*(uint8_t (__thiscall **)(int))(*(unsigned int *)a1 + 84))(a1)
    && *(unsigned int *)((*(int (__thiscall **)(int))(*(unsigned int *)a1 + 444))(a1) + 60) )
  {
    v35 = *(unsigned int *)(*(int (__thiscall **)(int, int *))(*(unsigned int *)a1 + 440))(a1, &v37); /*0x4da7f2*/
    v15 = (*(int (__thiscall **)(int))(*(unsigned int *)a1 + 444))(a1); /*0x4da7f8*/
    TeamClass::Update_0(*(void ***)(v15 + 60), 59, a1, v35, 0, 0); /*0x4da801*/
  }
  v16 = *(unsigned int *)(a1 + 1336); /*0x4da80c*/
  if ( !*(unsigned int *)(a1 + 1652) /*0x4da850*/
    || *(unsigned char *)(a1 + 973)
    || *(unsigned char *)(a1 + 141)
    || *(unsigned int *)(a1 + 680) && !*(unsigned char *)((*(int (__thiscall **)(int))(*(unsigned int *)a1 + 132))(a1) + 1682)
    || *(unsigned char *)(a1 + 129) )
  {
    goto LABEL_67; /*0x4da856*/
  }
  if ( !*(unsigned int *)(a1 + 1652) ) /*0x4da85c*/
    WinAPI::Wrapper(-2147467261); /*0x4da869*/
  result = (*(int (__stdcall **)(unsigned int))(**(unsigned int **)(a1 + 1652) + 64))(*(unsigned int *)(a1 + 1652)); /*0x4da877*/
  if ( *(unsigned char *)(a1 + 144) )
  {
    if ( a1 )
      v17 = (*(int (__thiscall **)(int))(*(unsigned int *)a1 + 44))(a1) == 1 ? a1 : 0;
    else
      v17 = 0; /*0x4da88a*/
    if ( !*(unsigned int *)(a1 + 1652) ) /*0x4da8a0*/
      WinAPI::Wrapper(-2147467261); /*0x4da8ad*/
    if ( ((*(uint8_t (__stdcall **)(unsigned int))(**(unsigned int **)(a1 + 1652) + 128))(*(unsigned int *)(a1 + 1652)) /*0x4da934*/
       && !(*(uint8_t (__thiscall **)(int))(*(unsigned int *)a1 + 472))(a1)
       || *(unsigned int *)(a1 + 692)
       && *(unsigned char *)((*(int (__thiscall **)(int))(*(unsigned int *)a1 + 132))(a1) + 912)
       && v17
       && !(uint8_t)FootClass::updateScanRange(v17))
      && !((int)g_CurrentFrame % *(unsigned int *)((*(int (__thiscall **)(int))(*(unsigned int *)a1 + 132))(a1) + 660))
      && !(*(uint8_t (__thiscall **)(int))(*(unsigned int *)a1 + 468))(a1)
      && !(*(uint8_t (__thiscall **)(int))(*(unsigned int *)a1 + 472))(a1)
      && !*(unsigned char *)(a1 + 1709) )
    {
      goto LABEL_66; /*0x4da934*/
    }
    if ( *(unsigned int *)((*(int (__thiscall **)(int))(*(unsigned int *)a1 + 132))(a1) + 664) ) /*0x4da94a*/
    {
      if ( !*(unsigned int *)(a1 + 1652) ) /*0x4da952*/
        WinAPI::Wrapper(-2147467261); /*0x4da95f*/
      if ( !(*(uint8_t (__stdcall **)(unsigned int))(**(unsigned int **)(a1 + 1652) + 128))(*(unsigned int *)(a1 + 1652)) /*0x4da9af*/
        && !((int)g_CurrentFrame % *(unsigned int *)((*(int (__thiscall **)(int))(*(unsigned int *)a1 + 132))(a1) + 664))
        && !(*(uint8_t (__thiscall **)(int))(*(unsigned int *)a1 + 468))(a1)
        && !(*(uint8_t (__thiscall **)(int))(*(unsigned int *)a1 + 472))(a1)
        && !*(unsigned char *)(a1 + 1709) )
      {
        goto LABEL_66; /*0x4da9af*/
      }
    }
    if ( *(unsigned char *)((*(int (__thiscall **)(int))(*(unsigned int *)a1 + 132))(a1) + 1709) /*0x4da9f3*/
      && (*(int (__thiscall **)(int))(*(unsigned int *)a1 + 456))(a1) > 0
      && !(*(uint8_t (__thiscall **)(int))(*(unsigned int *)a1 + 468))(a1)
      && !(*(uint8_t (__thiscall **)(int))(*(unsigned int *)a1 + 472))(a1)
      && !*(unsigned char *)(a1 + 1709) )
    {
  LABEL_66:
      ++*(unsigned int *)(a1 + 1336); /*0x4da9fb*/
    }
  LABEL_67:
    if ( v16 == *(unsigned int *)(a1 + 1336) ) /*0x4daa07*/
    {
      if ( !*(unsigned int *)(a1 + 1652) ) /*0x4daa09*/
        WinAPI::Wrapper(-2147467261); /*0x4daa16*/
      if ( !(*(uint8_t (__stdcall **)(unsigned int))(**(unsigned int **)(a1 + 1652) + 128))(*(unsigned int *)(a1 + 1652)) ) /*0x4daa24*/
        goto LABEL_136; /*0x4daa24*/
    }
    if ( *(unsigned char *)(a1 + 141) /*0x4daa5c*/
      || *(unsigned char *)(a1 + 1061)
      || *(unsigned int *)(a1 + 680) && *(unsigned char *)((*(int (__thiscall **)(int))(*(unsigned int *)a1 + 132))(a1) + 1682) )
    {
  LABEL_136:
      if ( *(unsigned char *)(a1 + 1340) ) /*0x4daafa*/
      {
        v19 = *(unsigned int *)(a1 + 1344); /*0x4dab02*/
        if ( !v19 || *(unsigned char *)(a1 + 141) || *(unsigned char *)(a1 + 1061) ) /*0x4dab14*/
        {
          Mixer::ReleaseChannel(a1 + 1348); /*0x4dab2b*/
          *(unsigned char *)(a1 + 1340) = 0; /*0x4dab30*/
          *(unsigned int *)(a1 + 1344) = 0; /*0x4dab36*/
        }
        else
        {
          *(unsigned int *)(a1 + 1344) = v19 - 1; /*0x4dab1d*/
        }
      }
    }
    else
    {
      if ( !*(unsigned char *)(a1 + 1340) && *(int *)((*(int (__thiscall **)(int))(*(unsigned int *)a1 + 132))(a1) + 1284) > 0 ) /*0x4daa87*/
      {
        AudioController::Stop(a1 + 1348); /*0x4daa91*/
        v38 = *(unsigned int *)(a1 + 156); /*0x4daaa2*/
        v18 = *(unsigned int *)a1; /*0x4daaa6*/
        v39 = *(unsigned int *)(a1 + 160); /*0x4daaab*/
        v40 = *(unsigned int *)(a1 + 164); /*0x4daab2*/
        (*(int (__thiscall **)(int))(v18 + 132))(a1); /*0x4daab8*/
        Random::State(&Randomizer_Global); /*0x4daacb*/
        StartAudioControllerAt(a1 + 1348); /*0x4daae2*/
        *(unsigned char *)(a1 + 1340) = 1; /*0x4daae7*/
      }
      *(unsigned int *)(a1 + 1344) = 3; /*0x4daaee*/
    }
    v20 = *(unsigned char *)(a1 + 141); /*0x4dab3c*/
    if ( v20 != *(unsigned char *)(a1 + 142) ) /*0x4dab4a*/
    {
      if ( v20 /*0x4dab67*/
        && *(unsigned int *)((*(int (__thiscall **)(int))(*(unsigned int *)a1 + 132))(a1) + 1356) != -1
        && *(unsigned char *)(a1 + 143) )
      {
        v38 = *(unsigned int *)(a1 + 156); /*0x4dab7c*/
        v39 = *(unsigned int *)(a1 + 160); /*0x4dab85*/
        v21 = *(unsigned int *)a1; /*0x4dab89*/
        v40 = *(unsigned int *)(a1 + 164); /*0x4dab8e*/
        (*(void (__thiscall **)(int))(v21 + 132))(a1); /*0x4dab92*/
        StartAudioControllerAt(0); /*0x4daba0*/
        *(unsigned char *)(a1 + 142) = *(unsigned char *)(a1 + 141); /*0x4dabab*/
      }
      else
      {
        *(unsigned char *)(a1 + 142) = *(unsigned char *)(a1 + 141); /*0x4dabbc*/
      }
    }
    v22 = *(unsigned char *)(a1 + 973); /*0x4dabc7*/
    if ( v22 != *(unsigned char *)(a1 + 974) ) /*0x4dabd5*/
    {
      if ( v22 ) /*0x4dabdd*/
      {
        if ( *(unsigned int *)((*(int (__thiscall **)(int))(*(unsigned int *)a1 + 132))(a1) + 1364) != -1 ) /*0x4dabf3*/
        {
          v38 = *(unsigned int *)(a1 + 156); /*0x4dac02*/
          v39 = *(unsigned int *)(a1 + 160); /*0x4dac0b*/
          v23 = *(unsigned int *)a1; /*0x4dac0f*/
          v40 = *(unsigned int *)(a1 + 164); /*0x4dac14*/
          (*(void (__thiscall **)(int))(v23 + 132))(a1); /*0x4dac18*/
          StartAudioControllerAt(0); /*0x4dac26*/
        }
        if ( *(unsigned int *)((*(int (__thiscall **)(int))(*(unsigned int *)a1 + 132))(a1) + 1352) == -1 ) /*0x4dac3b*/
        {
          if ( *((unsigned int *)g_RulesClass_Instance + 130) != -1 ) /*0x4dac86*/
          {
            v38 = *(unsigned int *)(a1 + 156); /*0x4dac94*/
            v39 = *(unsigned int *)(a1 + 160); /*0x4dac9b*/
            v40 = *(unsigned int *)(a1 + 164); /*0x4daca9*/
            StartAudioControllerAt(a1 + 1348); /*0x4dacb7*/
          }
        }
        else
        {
          v38 = *(unsigned int *)(a1 + 156); /*0x4dac49*/
          v39 = *(unsigned int *)(a1 + 160); /*0x4dac57*/
          v24 = *(unsigned int *)a1; /*0x4dac5b*/
          v40 = *(unsigned int *)(a1 + 164); /*0x4dac60*/
          (*(void (__thiscall **)(int))(v24 + 132))(a1); /*0x4dac66*/
          StartAudioControllerAt(a1 + 1348); /*0x4dac74*/
        }
      }
      else if ( !*(unsigned char *)(a1 + 1340) ) /*0x4dacbe*/
      {
        Mixer::ReleaseChannel(a1 + 1348); /*0x4daccc*/
      }
      *(unsigned char *)(a1 + 974) = *(unsigned char *)(a1 + 973); /*0x4dacd7*/
    }
    v25 = *(unsigned char *)(a1 + 1061); /*0x4dacdd*/
    if ( v25 != *(unsigned char *)(a1 + 1062) ) /*0x4daceb*/
    {
      if ( v25 ) /*0x4dacf3*/
      {
        Mixer::ReleaseChannel(a1 + 1348); /*0x4dad01*/
        if ( *(unsigned int *)((*(int (__thiscall **)(int))(*(unsigned int *)a1 + 132))(a1) + 1360) != -1 /*0x4dad1f*/
          && (uint8_t)House::IsHumanPlayer(*(unsigned int *)(a1 + 540)) )
        {
          v38 = *(unsigned int *)(a1 + 156); /*0x4dad35*/
          v39 = *(unsigned int *)(a1 + 160); /*0x4dad3e*/
          v26 = *(unsigned int *)a1; /*0x4dad42*/
          v40 = *(unsigned int *)(a1 + 164); /*0x4dad47*/
          (*(void (__thiscall **)(int))(v26 + 132))(a1); /*0x4dad4b*/
          StartAudioControllerAt(0); /*0x4dad59*/
        }
        if ( *(unsigned int *)((*(int (__thiscall **)(int))(*(unsigned int *)a1 + 132))(a1) + 1348) != -1 ) /*0x4dad6f*/
        {
          v38 = *(unsigned int *)(a1 + 156); /*0x4dad7e*/
          v27 = *(unsigned int *)a1; /*0x4dad82*/
          v39 = *(unsigned int *)(a1 + 160); /*0x4dad87*/
          v40 = *(unsigned int *)(a1 + 164); /*0x4dad8e*/
          (*(void (__thiscall **)(int))(v27 + 132))(a1); /*0x4dad94*/
          StartAudioControllerAt(a1 + 1348); /*0x4dada2*/
        }
      }
      else if ( !*(unsigned char *)(a1 + 1340) ) /*0x4dada9*/
      {
        Mixer::ReleaseChannel(a1 + 1348); /*0x4dadb7*/
      }
      *(unsigned char *)(a1 + 1062) = *(unsigned char *)(a1 + 1061); /*0x4dadc2*/
    }
    v38 = *(unsigned int *)(a1 + 156); /*0x4dadd4*/
    v39 = *(unsigned int *)(a1 + 160); /*0x4dade1*/
    v40 = *(unsigned int *)(a1 + 164); /*0x4dade8*/
    StartAudioController(&v38, a1 + 1348); /*0x4dadf0*/
    if ( ((uint8_t)g_CurrentFrame & 0x3F) == 0x3F /*0x4dae37*/
      && !*(unsigned int *)(a1 + 1444)
      && !*(unsigned char *)(a1 + 140)
      && !*(unsigned char *)((*(int (__thiscall **)(int))(*(unsigned int *)a1 + 444))(a1) + 284)
      && (*(uint8_t (__thiscall **)(int))(*(unsigned int *)a1 + 688))(a1)
      && !(*(int (__thiscall **)(int))(*(unsigned int *)a1 + 456))(a1) )
    {
      v28 = *(unsigned int *)a1; /*0x4dae41*/
      v38 = 0; /*0x4dae4d*/
      v39 = 0; /*0x4dae51*/
      v40 = 0; /*0x4dae55*/
      (*(void (__thiscall **)(int, int *, int, unsigned int))(v28 + 372))(a1, &v38, 1, 0); /*0x4dae59*/
    }
    v29 = *(int (__stdcall ****)(unsigned int, void *, int *))(a1 + 1652); /*0x4dae5f*/
    v30 = (unsigned int *)(a1 + 1652); /*0x4dae65*/
    v31 = 0; /*0x4dae6b*/
    if ( v29 )
    {
      v32 = (**v29)(v29, &unk_819088, &v37); /*0x4dae7e*/
      v31 = v32 < 0 ? 0 : v37;
      if ( v32 < 0 && v32 != -2147467262 ) /*0x4dae99*/
        WinAPI::Wrapper(v32); /*0x4dae9c*/
      if ( v31 && (*(uint8_t (__stdcall **)(int))(*(unsigned int *)v31 + 20))(v32 < 0 ? 0 : v37) )
      {
        if ( *v30 ) /*0x4daeaf*/
          (*(void (__stdcall **)(unsigned int))(*(unsigned int *)*v30 + 8))(*v30); /*0x4daeb9*/
        *v30 = 0; /*0x4daebc*/
        (*(void (__stdcall **)(int, int))(*(unsigned int *)v31 + 16))(v31, a1 + 1652); /*0x4daec3*/
      }
    }
    v33 = *(unsigned int *)a1; /*0x4daec6*/
    *(unsigned char *)(a1 + 1716) = 0; /*0x4daeca*/
    result = (*(int (__thiscall **)(int))(v33 + 472))(a1); /*0x4daed0*/
    if ( !result ) /*0x4daed8*/
      result = FootClass::ProcessEnterTransport(a1); /*0x4daedc*/
    v34 = *(unsigned int *)(a1 + 1684); /*0x4daee1*/
    if ( v34 ) /*0x4daee9*/
      result = (*(int (__thiscall **)(unsigned int))(**(unsigned int **)(v34 + 1692) + 92))(*(unsigned int *)(v34 + 1692)); /*0x4daef3*/
    if ( v31 ) /*0x4daef8*/
      return (*(int (__stdcall **)(int))(*(unsigned int *)v31 + 8))(v31); /*0x4daefd*/
  }
  return result; /*0x4daf00*/
}
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
}
// 0x709290
bool FootClass::CanEnterCell(uint32_t a) { return false; }
}
}
