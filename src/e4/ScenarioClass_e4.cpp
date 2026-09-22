// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Building_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Event_e4.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/GameMode_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/MixFile_e4.hpp"
#include "e4/classes/Mouse_e4.hpp"
#include "e4/classes/Movie_e4.hpp"
#include "e4/classes/Scenario_e4.hpp"
#include "e4/classes/TaskForceClass_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/TypeList_TechnoType_e4.hpp"
#include "e4/classes/Vector_e4.hpp"

// 0x58BB30
namespace gamemd {
void * ScenarioClass::CopyStartPositions()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  void *result; // eax

  result = g_ScenarioClass_Instance; /*0x58bb31*/
  if ( g_ScenarioClass_Instance ) /*0x58bb38*/
  {
    *((_DWORD *)g_ScenarioClass_Instance + 1103) = dword_ABED0C; /*0x58bb45*/
    _DWORD * v1 = g_ScenarioClass_Instance; /*0x58bb4b*/
    int v2 = 0; /*0x58bb52*/
    if ( *((int *)g_ScenarioClass_Instance + 1103) > 0 ) /*0x58bb5c*/
    {
      int v3 = 1104; /*0x58bb60*/
      int * v4 = &dword_ABE328 - 1104; /*0x58bb6a*/
      int v5 = 1136; /*0x58bb71*/
      while ( 1 ) /*0x58bb8b*/
      {
  int v7; // esi
  int v6; // edx
        if ( v3 < 1104 || v2 >= dword_ABED0C ) /*0x58bb93*/
        {
          v6 = 0; /*0x58bb9e*/
          v7 = 0; /*0x58bba0*/
        }
        else
        {
          v6 = v4[v3]; /*0x58bb95*/
          v7 = v4[v3 + 1]; /*0x58bb98*/
        }
        v1[v3] = v6; /*0x58bba2*/
        ++v2; /*0x58bbab*/
        ++v5; /*0x58bbac*/
        *(_DWORD *)((char *)g_ScenarioClass_Instance + v3 * 4 + 4) = v7; /*0x58bbaf*/
        v3 += 2; /*0x58bbbd*/
        *(_DWORD *)((char *)g_ScenarioClass_Instance + v5 * 4 - 4) = dword_ABE304[v5 - 1137]; /*0x58bbc0*/
        v1 = g_ScenarioClass_Instance; /*0x58bbc4*/
        if ( v2 >= *((_DWORD *)g_ScenarioClass_Instance + 1103) ) /*0x58bbd0*/
          break; /*0x58bbd0*/
        v4 = &dword_ABE328 - 1104; /*0x58bb82*/
      }
    }
    v1[1099] = dword_ABDFD4; /*0x58bbda*/
    *((_DWORD *)g_ScenarioClass_Instance + 1100) = dword_ABDFD0; /*0x58bbed*/
    *((_DWORD *)g_ScenarioClass_Instance + 1101) = dword_ABEC90; /*0x58bbfe*/
    result = (void *)dword_ABECD0; /*0x58bc0a*/
    *((_DWORD *)g_ScenarioClass_Instance + 1102) = dword_ABECD0; /*0x58bc0f*/
  }
  return result; /*0x58bc16*/
}
}
} // namespace gamemd

// 0x5CC330
namespace gamemd {
void ScenarioClass_AnimateConstructionStage()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  _DWORD *FoundationSize; // eax
  int i; // ebp

  if ( *(_BYTE *)(a1 + 12) != 1 ) /*0x5cc33b*/
    goto LABEL_19; /*0x5cc33b*/
  signed int v5 = *(_DWORD *)(a1 + 24); /*0x5cc344*/
  if ( *(_DWORD *)(a1 + 16) != -1 ) /*0x5cc34a*/
  {
    signed int v6 = Timer::GetTicks() - *(_DWORD *)(a1 + 16); /*0x5cc354*/
    if ( v6 >= v5 ) /*0x5cc359*/
      goto LABEL_6; /*0x5cc359*/
    v5 -= v6; /*0x5cc35b*/
  }
  if ( v5 ) /*0x5cc35f*/
  {
LABEL_19:
    _DWORD * v25 = a4; /*0x5cc526*/
    *a4 = 0; /*0x5cc52c*/
    v25[1] = 0; /*0x5cc52e*/
    v25[2] = 0; /*0x5cc531*/
    v25[3] = 0; /*0x5cc534*/
    return 0; /*0x5cc534*/
  }
LABEL_6:
  int v7 = *(_DWORD *)(a1 + 36); /*0x5cc365*/
  *(_DWORD *)(a1 + 16) = Timer::GetTicks(); /*0x5cc371*/
  int v29; // [esp+2Ch] [ebp-1Ch]
  *(_DWORD *)(a1 + 20) = v29; /*0x5cc378*/
  unsigned int v8 = *(_DWORD *)(a1 + 64); /*0x5cc37b*/
  *(_DWORD *)(a1 + 24) = v7; /*0x5cc381*/
  if ( v8 >= 4 ) /*0x5cc384*/
    return 0; /*0x5cc538*/
  int v28; // [esp+28h] [ebp-20h] BYREF
  FoundationSize = Building::GetFoundationSize(&v28, *(_DWORD *)(a1 + 40)); /*0x5cc398*/
  _DWORD * v10 = a4; /*0x5cc39d*/
  _DWORD * v11 = a4; /*0x5cc3a3*/
  *a4 = *FoundationSize; /*0x5cc3a5*/
  v11[1] = FoundationSize[1]; /*0x5cc3aa*/
  v11[2] = FoundationSize[2]; /*0x5cc3b0*/
  v11[3] = FoundationSize[3]; /*0x5cc3b6*/
  int v12 = v10[1]; /*0x5cc3c0*/
  *v10 += *(_DWORD *)(a1 + 4); /*0x5cc3c3*/
  v10[1] = *(_DWORD *)(a1 + 8) + v12; /*0x5cc3ca*/
  if ( (*(_DWORD *)(a1 + 56) & 0x200) != 0 ) /*0x5cc3d3*/
  {
    *v10 += *(__int16 *)(*(_DWORD *)(a1 + 28) + 2) / -2; /*0x5cc3e7*/
    v10[1] += *(__int16 *)(*(_DWORD *)(a1 + 28) + 4) / -2; /*0x5cc3fc*/
  }
  (*(void (__thiscall **)(int, _DWORD *, int, _DWORD *, _DWORD, int, int))(*(_DWORD *)a3 + 8))( /*0x5cc413*/
    a3,
    v10,
    DSurface_Alternate,
    v10,
    0,
    1,
    a2);
  unsigned int v13 = *(_DWORD *)(a1 + 64); /*0x5cc41c*/
  if ( v13 >= 3 ) /*0x5cc41e*/
    v13 = 3; /*0x5cc420*/
  int v14 = *(_DWORD *)(a1 + 56) | dword_830078[v13]; /*0x5cc443*/
  int v15 = *(_DWORD *)a3; /*0x5cc445*/
  v29 = *(_DWORD *)(a1 + 4); /*0x5cc447*/
  int v26 = v14; /*0x5cc452*/
  int v30 = *(_DWORD *)(a1 + 8); /*0x5cc456*/
  int * v16 = (int *)(*(int (__thiscall **)(int))(v15 + 120))(a3); /*0x5cc45a*/
  DrawToSurfaceSHP( /*0x5cc470*/
    a3,
    *(_DWORD *)(a1 + 32),
    *(_DWORD *)(a1 + 28),
    *(_DWORD *)(a1 + 40),
    &v28,
    v16,
  char v32[12]; // [esp+3Ch] [ebp-Ch] BYREF
    (int)v32,
    v26,
    0,
    0,
    0,
    1000,
    0,
    0,
    0,
    0);
  int v17 = *(_DWORD *)(a1 + 68); /*0x5cc475*/
  if ( v17 ) /*0x5cc47a*/
  {
    a4 = (_DWORD *)a1; /*0x5cc47c*/
    a4 = (_DWORD *)(*(int (__thiscall **)(int, _DWORD **))(*(_DWORD *)v17 + 16))(v17, &a4); /*0x5cc48a*/
    int v18 = *(_DWORD *)(a1 + 68); /*0x5cc48e*/
    for ( i = 0; i < *(_DWORD *)(v18 + 16); ++i ) /*0x5cc498*/
    {
      if ( (_DWORD *)i != a4 ) /*0x5cc49e*/
      {
        int v20 = *(_DWORD *)(*(_DWORD *)(v18 + 4) + 4 * i); /*0x5cc4a5*/
        (*(void (__thiscall **)(int, int, _DWORD *))(*(_DWORD *)v20 + 20))(v20, a3, v10); /*0x5cc4aa*/
      }
      v18 = *(_DWORD *)(a1 + 68); /*0x5cc4ad*/
    }
  }
  unsigned int v21 = *(_DWORD *)(a1 + 64) + 1; /*0x5cc4bc*/
  *(_DWORD *)(a1 + 64) = v21; /*0x5cc4be*/
  if ( v21 >= 4 ) /*0x5cc4c4*/
  {
    int v22 = *(_DWORD *)(a1 + 56); /*0x5cc4cf*/
    v28 = *(_DWORD *)(a1 + 4); /*0x5cc4db*/
    BYTE1(v22) |= 4u; /*0x5cc4e3*/
    int v27 = v22; /*0x5cc4e7*/
    v29 = *(_DWORD *)(a1 + 8); /*0x5cc4e8*/
  int v31; // [esp+38h] [ebp-10h] BYREF
    int * v23 = (int *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)a3 + 120))(a3, &v31); /*0x5cc4f5*/
    DrawToSurfaceSHP( /*0x5cc50f*/
      DSurface_Alternate,
      *(_DWORD *)(a1 + 32),
      *(_DWORD *)(a1 + 28),
      *(_DWORD *)(a1 + 40),
      &v28,
      v23,
      v27,
      0,
      0,
      0,
      1000,
      0,
      0,
      0,
      0,
      0);
  }
  return *(_BYTE *)(a1 + 72) == 0; /*0x5cc51b*/
}
}
} // namespace gamemd

// 0x5D6430
namespace gamemd {
void ScenarioClass_dispatchEvents()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// Microsoft VisualC 2-14/net runtime
{
  return Random::Range((_DWORD *)g_ScenarioClass_Instance + 134, 0, 9); /*0x69b684*/
}
}
} // namespace gamemd

// 0x5D6440
namespace gamemd {
int ScenarioClass::MissionStubReturnZero3()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  return (*(int (__thiscall **)(void *))(*(_DWORD *)this + 108))(this);
}
}
} // namespace gamemd

// 0x5D6BE0
namespace gamemd {
int ScenarioClass::AssignStartPositions(char a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int i; // edi
  void **v5; // [esp+4h] [ebp-18h] BYREF
  void *Block; // [esp+8h] [ebp-14h]

  Multiplayer::FindStartPositions(&v5); /*0x5d6bec*/
  for ( i = 0; i < HouseClass_Count; ++i ) /*0x5d6bfa*/
  {
    _DWORD * v2 = (_DWORD *)*((_DWORD *)HouseClass_Array + i); /*0x5d6c02*/
    if ( !*(_BYTE *)(v2[13] + 422) ) /*0x5d6c08*/
    {
      int v3 = v2[22550]; /*0x5d6c12*/
      if ( v3 != -2 ) /*0x5d6c1b*/
      {
        HouseClass::SetMapSeed(v2, *((_DWORD *)Block + v3)); /*0x5d6c25*/
        *((_DWORD *)g_ScenarioClass_Instance + v3 + 1120) = i; /*0x5d6c2f*/
      }
    }
  }
  v5 = &vt_VectorClass_Cell; /*0x5d6c45*/
  char v7; // [esp+11h] [ebp-Bh]
  if ( Block && v7 ) /*0x5d6c58*/
    __3_YAXPAX_Z(Block); /*0x5d6c5b*/
  return 1; /*0x5d6c4f*/
}
}
} // namespace gamemd

// 0x6832C0
namespace gamemd {
int ScenarioClass::Constructor()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  wchar_t *v2; // eax
  wchar_t *v3; // ecx
  wchar_t *v4; // eax
  wchar_t *v5; // edx
  SeedInitRNG((_DWORD *)(this + 536), 0); /*0x6832cf*/
  this->q614 = Timer::GetTicks(); /*0x6832e5*/
  this->pauseTimer = 0; /*0x6832eb*/
  this->q620 = Timer::GetTicks(); /*0x6832f6*/
  this->q628 = 0; /*0x6832fc*/
  v2 = g_CurrentFrame; /*0x683302*/
  this->q11F0 = 0; /*0x683307*/
  this->missionTimer = v2; /*0x68330d*/
  this->missionTimer_text = 0; /*0x683313*/
  v3 = g_CurrentFrame; /*0x683319*/
  this->q1220 = 0; /*0x68331f*/
  this->shroudRegrowTimer = v3; /*0x683325*/
  this->fogTimer = g_CurrentFrame; /*0x683331*/
  this->q122C = 0; /*0x683337*/
  v4 = g_CurrentFrame; /*0x68333d*/
  this->q1238 = 0; /*0x683342*/
  this->iceTimer = v4; /*0x683348*/
  this->ScenarioClass_field_timer_123c = g_CurrentFrame; /*0x683354*/
  this->q1244 = 0; /*0x68335a*/
  v5 = g_CurrentFrame; /*0x683360*/
  this->q1250 = 0; /*0x683366*/
  this->ambientTimer = v5; /*0x68336c*/
  this->ScenarioClass_field_timer_34C0 = g_CurrentFrame; /*0x683381*/
  this->q34C8 = 0; /*0x683387*/
  TypeList::TechnoTypeConstructor((_DWORD *)(this + 13524), 0, 0); /*0x68338d*/
  this->dropshipUnitCounts = 0; /*0x683397*/
  this->dropshipCountsCount = 10; /*0x68339a*/
  this->allowableUnits = &vt_TypeList_TechnoTypeClass; /*0x68339d*/
  VectorClass::Construct((_DWORD *)(this + 13552), 0, 0); /*0x6833ad*/
  this->ground = 10; /*0x6833b2*/
  this->blue = 0; /*0x6833b5*/
  this->ambientCurrent = &vt_TypeList_int; /*0x6833b8*/
  VectorClass::Construct((_DWORD *)(this + 13580), 0, 0); /*0x6833c8*/
  this->ionLevel = 10; /*0x6833cf*/
  this->ionGround = 0; /*0x6833d2*/
  this->ionAmbient = &vt_TypeList_int; /*0x6833d5*/
  ScenarioClass::InitTimer(this); /*0x6833db*/
  this->q3598 = 0; /*0x6833e2*/
  this->isRandom = 0; /*0x6833e8*/
  ScenarioClass::ResetIntroFlags(this); /*0x6833ee*/
  this->techLevel = 1; /*0x6833f3*/
  this->campaignIndex = -1; /*0x6833fd*/
  this->Items = 0; /*0x683407*/
  this->q108 = 0; /*0x68340a*/
  _DWORD * v6 = (_DWORD *)(this + 1586); /*0x683410*/
  int v7 = 702; /*0x683416*/
  do /*0x683427*/
  {
    *v6++ = dword_B05458; /*0x683421*/
    --v7; /*0x683426*/
  }
  while ( v7 ); /*0x683427*/
  wcscpy((wchar_t *)(this + 4960), &g_TypeClass_DefaultString); /*0x683435*/
  wcscpy((wchar_t *)(this + 5082), &g_TypeClass_DefaultString); /*0x683446*/
  strcpy((char *)(this + 4700), &g_INI_DefaultBuffer); /*0x683475*/
  strcpy((char *)(this + 7248), &g_INI_DefaultBuffer); /*0x68349d*/
  strcpy((char *)(this + 5050), &g_INI_DefaultBuffer); /*0x6834bf*/
  wcscpy((wchar_t *)(this + 5200), &g_TypeClass_DefaultString); /*0x6834cf*/
  int v8 = 0; /*0x6834d7*/
  _BYTE * v9 = (_BYTE *)(this + 7344); /*0x6834d9*/
  do /*0x683502*/
  {
    *(v9 - 40) = 0; /*0x6834e2*/
    if ( (unsigned int)v8 < 0x32 && *v9 ) /*0x6834e7*/
    {
      *v9 = 0; /*0x6834eb*/
      this->variablesChanged = 1; /*0x6834ef*/
      HouseClass::UpdateAllTypes((void *)v8); /*0x6834f6*/
    }
    ++v8; /*0x6834fb*/
    v9 += 41; /*0x6834fc*/
  }
  while ( v8 < 50 ); /*0x683502*/
  int v10 = 0; /*0x683504*/
  _BYTE * v11 = (_BYTE *)(this + 9394); /*0x683506*/
  do /*0x68352f*/
  {
    *(v11 - 40) = 0; /*0x68350f*/
    if ( (unsigned int)v10 < 0x64 && *v11 ) /*0x683514*/
    {
      *v11 = 0; /*0x683518*/
      this->variablesChanged = 1; /*0x68351c*/
      TriggerActionQueue::ProcessAll(v10); /*0x683523*/
    }
    ++v10; /*0x683528*/
    v11 += 41; /*0x683529*/
  }
  while ( v10 < 100 ); /*0x68352f*/
  *(_DWORD *)(this + 13454) = 0; /*0x683534*/
  *(_DWORD *)(this + 13458) = 0; /*0x68353c*/
  *(_DWORD *)(this + 13462) = 0; /*0x683543*/
  *(_DWORD *)(this + 13466) = 0; /*0x683549*/
  return this; /*0x683533*/
}
}
} // namespace gamemd

// 0x683AB0
namespace gamemd {
int ScenarioClass::LoadScenarioAndStart(AnimClass * Source, char a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  AnimClass *v3; // ebp
  int Field; // ecx
  Movie *Bool; // esi
  Frame *v13; // ecx
  DWORD *v14; // esi
  CHAR v25[28]; // [esp+E0h] [ebp-1Ch] BYREF

  v3 = Source; /*0x683ab8*/
  if ( (!Source || !strlen(Source->field_0)) && a3 != -1 ) /*0x683ade*/
  {
    if ( g_EventManager[749] == 1 ) /*0x683ae7*/
      v3 = (AnimClass *)&DataGlobal_A83E48; /*0x683ae9*/
    AnimClass *v3 = (AnimClass *)(*((_DWORD *)g_CampaignTypeArray + a3) + 156); /*0x683af8*/
  }
  *((_DWORD *)g_ScenarioClass_Instance + 3379) = a3; /*0x683b0a*/
  Debug::Log(); /*0x683b10*/
  Debug::Log(); /*0x683b21*/
  strcpy((char *)g_ScenarioClass_Instance + 4700, v3->field_0); /*0x683b47*/
  _strupr((char *)g_ScenarioClass_Instance + 4700); /*0x683b5d*/
  SetSoundWarning(-1); /*0x683b68*/
  if ( !g_GameMode_Current[0] ) /*0x683b73*/
  {
    int v4 = *((_DWORD *)g_ScenarioClass_Instance + 3379); /*0x683b7b*/
    if ( v4 == -1 ) /*0x683b84*/
      goto LABEL_14; /*0x683b84*/
    Field = *(_DWORD *)(*((_DWORD *)g_CampaignTypeArray + v4) + 152); /*0x683b8f*/
    goto LABEL_13; /*0x683b95*/
  }
  if ( g_GameRulesOptions != -1 ) /*0x683b9f*/
  {
    int * v6 = *(int **)(g_MultiplayerGameState + 4 * g_GameRulesOptions); /*0x683ba7*/
    int v7 = Game::CheckForGameCD((void *)0x3C); /*0x683baf*/
    if ( !ScenarioClass::CheckExists(v6, v7) ) /*0x683bb7*/
    {
      Field = GameOption::GetField((_DWORD **)v6); /*0x683bc7*/
LABEL_13:
      SetSoundWarning(Field); /*0x683bc9*/
    }
  }
LABEL_14:
  int v8 = ++g_GameFlags_Campaign; /*0x683bce*/
  if ( !(unsigned __int8)CD::`vftable'(dword_81C1D0) ) /*0x683bf6*/
  {
LABEL_21:
    if ( g_GameMode_Current[0] == 4 ) /*0x683d3c*/
      ChatMessageWOL(0, &g_TypeClass_DefaultString); /*0x683d45*/
    return 0; /*0x683d56*/
  }
  --g_GameFlags_Campaign; /*0x683c03*/
  (*(void (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 12))(g_WWMouseClass_Instance); /*0x683c11*/
  void *v16[3]; // [esp+1Ch] [ebp-E0h] BYREF
  v16[1] = 0; /*0x683c18*/
  v16[2] = 0; /*0x683c1c*/
  _DWORD v17[10]; // [esp+28h] [ebp-D4h] BYREF
  GenericList::Constructor(v17); /*0x683c20*/
  v17[0] = &vt_List_INIClass_INISection; /*0x683c29*/
  memset(&v17[7], 0, 12); /*0x683c32*/
  char v18 = 0; /*0x683c3e*/
  int v19 = 0; /*0x683c42*/
  int v20 = 0; /*0x683c46*/
  char v21 = 0; /*0x683c4a*/
  v16[0] = &CCINIClass_Vtable; /*0x683c4e*/
  _DWORD v22[22]; // [esp+74h] [ebp-88h] BYREF
  CCFileClass::Construct(v22, v3->field_0); /*0x683c56*/
  if ( CCINIClass::Load(v16, (int)v22, 1, 0) ) /*0x683c67*/
  {
    Bool = (Movie *)INIClass::GetBool( /*0x683c85*/
                      (unsigned __int8 ***)v16,
                      (unsigned __int8 *)g_INI_Key_Basic,
                      (unsigned __int8 *)g_INI_Key_Intro,
                      -1);
    if ( Bool != (Movie *)-1 /*0x683ca5*/
      || (Bool = (Movie *)INIClass::GetBool(
                            (unsigned __int8 ***)v16,
                            (unsigned __int8 *)g_INI_Key_Basic,
                            (unsigned __int8 *)g_INI_Key_Brief,
                            -1),
          Bool != (Movie *)-1) )
    {
      Theme::Stop(&g_BuildingTypeClass_Count, 0); /*0x683cad*/
      Movie::PlayWrapper((int)Bool, (int)v3, v8, 1, 1, 1); /*0x683cbd*/
    }
  }
  v22[0] = &vt_CCFileClass; /*0x683cc9*/
  int v24 = 0; /*0x683cd1*/
  _BYTE v23[12]; // [esp+CCh] [ebp-30h] BYREF
  Vector::Clear((int)v23); /*0x683cd8*/
  v22[0] = &off_7E1668; /*0x683ce1*/
  BufferIOFileClass::Dtor(v22); /*0x683ce9*/
  HashTable::DestroyHashTableINIClass(v16); /*0x683cf2*/
  Debug::Log(); /*0x683cfd*/
  int v10 = StringList::Find(&g_BuildingTypeClass_Count, aLoading); /*0x683d0f*/
  ThemeClass::Play(&g_BuildingTypeClass_Count, v10); /*0x683d1a*/
  if ( !Scenario::LoadWithProgress(v3) ) /*0x683d21*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 16))(g_WWMouseClass_Instance); /*0x683d32*/
    goto LABEL_21; /*0x683d32*/
  }
  int v12 = *((_DWORD *)g_ScenarioClass_Instance + 1294); /*0x683d5e*/
  if ( v12 != -1 ) /*0x683d67*/
    wsprintfA(v25, DataGlobal_83D888, *((const char **)DataGlobal_ABF394 + v12)); /*0x683d80*/
  if ( *((int *)g_ScenarioClass_Instance + 3380) > 0 ) /*0x683d95*/
    LoadScreen::RenderLoop(); /*0x683d97*/
  if ( a2 ) /*0x683da0*/
    Movie::PlayWrapper(*((_DWORD *)g_ScenarioClass_Instance + 1297), (int)v3, v8, 1, 1, 1); /*0x683db6*/
  if ( g_CreditsScreenBounds != *(_DWORD *)&g_EventManager.field_D0[68] /*0x683dd6*/
    || g_CreditsScreenConfig != *(_DWORD *)&g_EventManager.field_D0[72] )
  {
    Debug::Log(); /*0x683ddf*/
    ChangeVideoMode(*(unsigned int *)&g_EventManager.field_D0[68], *(unsigned int *)&g_EventManager.field_D0[72]); /*0x683df3*/
  }
  LoadingScreen::FreeResources3(); /*0x683df8*/
  AudioOptionsClass::ApplySettings((int)&g_EventManager.field_D0[32]); /*0x683e02*/
  (*(void (__thiscall **)(IUnknown *, _DWORD))(g_DSurface_Hidden->field_0 + 24))(g_DSurface_Hidden, 0); /*0x683e10*/
  LOBYTE(v13) = 1; /*0x683e19*/
  Frame::Present(v13, 0); /*0x683e1c*/
  if ( *((_DWORD *)g_ScenarioClass_Instance + 389) == -1 ) /*0x683e35*/
  {
    v14 = (DWORD *)((char *)g_ScenarioClass_Instance + 1556); /*0x683e26*/
    *v14 = Timer::GetTicks(); /*0x683e3f*/
  }
  if ( *((_DWORD *)g_ScenarioClass_Instance + 1820) == -1 ) /*0x683e50*/
    Theme::Stop(&g_BuildingTypeClass_Count, 1); /*0x683e66*/
  else
    Theme::QueueSong((int)&g_BuildingTypeClass_Count, *((_DWORD *)g_ScenarioClass_Instance + 1820)); /*0x683e58*/
  DisableIME(); /*0x683e6b*/
  g_EventManager[748] = 1; /*0x683e75*/
  DataGlobal_A8E378 = 1; /*0x683e7f*/
  if ( g_GameMode_Current[0] == 4 ) /*0x683e86*/
    ChatMessageWOL(0, &g_TypeClass_DefaultString); /*0x683e8f*/
  return 1; /*0x683d4a*/
}
}
} // namespace gamemd

// 0x683EB0
namespace gamemd {
int ScenarioClass::CleanupTemporary()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  void *v0; // ecx
  _DWORD *v1; // esi
  DWORD Ticks; // eax
  int v3; // ecx
  DWORD v4; // eax
  sub_406F00(); /*0x683eb1*/
  DataGlobal_83D834 = sub_4072B0((_DWORD *)g_MixerState); /*0x683ecc*/
  EndBufferMixer((int *)g_MixerState, 0x4000); /*0x683ed1*/
  if ( !g_GameMode_Current[0] || g_GameMode_Current[0] == 5 ) /*0x683ee2*/
  {
    if ( *((_DWORD *)g_ScenarioClass_Instance + 389) != -1 ) /*0x683eff*/
      Timer::GetTicks(); /*0x683f04*/
    Debug::Log(); /*0x683f13*/
    v0 = g_ScenarioClass_Instance; /*0x683f18*/
    v1 = (char *)g_ScenarioClass_Instance + 1556; /*0x683f27*/
    if ( *((_DWORD *)g_ScenarioClass_Instance + 389) != -1 ) /*0x683f31*/
    {
      Ticks = Timer::GetTicks(); /*0x683f36*/
      v3 = v1[2]; /*0x683f3d*/
      v4 = Ticks - *v1; /*0x683f40*/
      *v1 = -1; /*0x683f42*/
      v0 = (void *)(v4 + v3); /*0x683f48*/
      v1[2] = v0; /*0x683f4a*/
    }
  }
  LOBYTE(v0) = 1; /*0x683f4d*/
  AsyncIO::Read(v0); /*0x683f4f*/
  if ( g_TacticalRender ) /*0x683f5d*/
    Tooltip::Enable((void *)g_TacticalRender, 0); /*0x683f61*/
  Mouse::ReleaseCapture(&DataGlobal_87F7E8); /*0x683f6b*/
  Mouse::SetCursor((int)&DataGlobal_87F7E8, 0, 0); /*0x683f79*/
  (*(void (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 12))(g_WWMouseClass_Instance); /*0x683f86*/
  MapClass::MarkForRedraw(&DataGlobal_87F7E8, 2); /*0x683f90*/
  TacticalMap::Redraw(&DataGlobal_87F7E8); /*0x683f9a*/
  return (*(int (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 16))(g_WWMouseClass_Instance);
}
}
} // namespace gamemd

// 0x684180
namespace gamemd {
unsigned char * ScenarioClass::ProcessIntroTimer()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  _BYTE *result; // eax

  result = (_BYTE *)*((_DWORD *)g_ScenarioClass_Instance + 395); /*0x684186*/
  if ( result ) /*0x68418e*/
  {
    *((_DWORD *)g_ScenarioClass_Instance + 395) = result - 1; /*0x684195*/
    result = g_ScenarioClass_Instance; /*0x68419b*/
    if ( !*((_DWORD *)g_ScenarioClass_Instance + 395) ) /*0x6841a0*/
    {
      if ( !DataGlobal_B054CC ) /*0x6841b6*/
      {
        if ( *((_BYTE *)g_ScenarioClass_Instance + 13730) == 1 ) /*0x6841bf*/
        {
          while ( (*(int (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 40))(g_WWMouseClass_Instance) ) /*0x6841c9*/
            (*(void (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 16))(g_WWMouseClass_Instance); /*0x6841d8*/
          result = g_ScenarioClass_Instance; /*0x6841ea*/
        }
        result[13730] = 0; /*0x6841ef*/
        g_GameActive = 0; /*0x6841fc*/
        Timer::PumpMessages((HWND *)g_BinkMoviePlayer); /*0x684203*/
        result = g_ScenarioClass_Instance; /*0x684208*/
        DataGlobal_B07784 = 0; /*0x68420d*/
      }
      if ( *((_DWORD *)result + 389) == -1 ) /*0x684227*/
        *((_DWORD *)result + 389) = Timer::GetTicks(); /*0x684231*/
      return (_BYTE *)sub_406F40(); /*0x684233*/
    }
  }
  return result; /*0x684239*/
}
}
} // namespace gamemd

// 0x686730
namespace gamemd {
void ScenarioClass_Construct()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  char result; // al
  void **v6; // [esp+1Ch] [ebp-B8h] BYREF

  result = CD::`vftable'(dword_81C1D0); /*0x68674c*/
  if ( result ) /*0x686754*/
  {
  int v11; // [esp+CCh] [ebp-8h]
  _BYTE v10[12]; // [esp+C0h] [ebp-14h] BYREF
    g_CurrentFrame = 0; /*0x686765*/
  void *v5[3]; // [esp+10h] [ebp-C4h] BYREF
    v5[1] = 0; /*0x68676b*/
    v5[2] = 0; /*0x68676f*/
    GenericList::Constructor(&v6); /*0x686773*/
    v6 = &vt_List_INIClass_INISection; /*0x68677c*/
  _DWORD v7[6]; // [esp+38h] [ebp-9Ch] BYREF
    Node::Init(v7); /*0x686784*/
    v7[5] = 0; /*0x68678d*/
    char v8 = 0; /*0x686792*/
    v5[0] = &CCINIClass_Vtable; /*0x686797*/
  _DWORD v9[22]; // [esp+68h] [ebp-6Ch] BYREF
    CCFileClass::Construct(v9, Source); /*0x68679f*/
    Debug::Log(); /*0x6867aa*/
    if ( CCINIClass::Load(v5, (int)v9, 1, 0) ) /*0x6867be*/
    {
      strcpy((char *)g_ScenarioClass_Instance + 4700, Source); /*0x686836*/
      char v4 = ScenarioClass::LoadMap(0, (int)v5, a2); /*0x686851*/
      v9[0] = &vt_CCFileClass; /*0x686853*/
      v11 = 0; /*0x68685b*/
      Vector::Clear((int)v10); /*0x686862*/
      v9[0] = &off_7E1668; /*0x68686b*/
      BufferIOFileClass::Dtor(v9); /*0x686873*/
      HashTable::DestroyHashTableINIClass(v5); /*0x68687c*/
      return v4; /*0x686881*/
    }
    else
    {
      Debug::Log(); /*0x6867cc*/
      v9[0] = &vt_CCFileClass; /*0x6867db*/
      v11 = 0; /*0x6867e3*/
      Vector::Clear((int)v10); /*0x6867ea*/
      v9[0] = &off_7E1668; /*0x6867f3*/
      BufferIOFileClass::Dtor(v9); /*0x6867fb*/
      HashTable::DestroyHashTableINIClass(v5); /*0x686804*/
      return 0; /*0x686809*/
    }
  }
  return result; /*0x686756*/
}
}
} // namespace gamemd

// 0x686B20
namespace gamemd {
void ScenarioClass_LoadMap()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  CCINIClass *v3; // ebp
  ObjectClass *v5; // eax
  ObjectClass *v7; // eax
  char Bool_Overwrite; // al
  int Section; // eax
  wchar_t *StringCSF; // eax
  wchar_t *v13; // eax
  wchar_t *v14; // eax
  int i; // eax
  ScenarioClass *v25; // ecx
  int j; // esi
  _DWORD *Instance; // eax
  INIClass *v35; // ebx
  CCINIClass *k; // esi
  INIClass *v37; // edi
  int eax102; // eax
  ScenarioClass *v38; // ebp
  int campaignIndex; // eax
  ObjectClass *v47; // eax
  int m; // eax
  CCINIClass *v56; // [esp+14h] [ebp-160h]
  unsigned __int8 **var158[3]; // [esp+1Ch] [ebp-158h] BYREF
  void **v57; // [esp+28h] [ebp-14Ch] BYREF
  MultiplayerGameMode aP1[3]; // [esp+84h] [ebp-F0h] BYREF
  _DWORD v65[3]; // [esp+DCh] [ebp-98h] BYREF
  ObjectClass *v69; // [esp+E8h] [ebp-8Ch]
  _DWORD v67[4]; // [esp+F0h] [ebp-84h] BYREF
  INIClass Filename; // [esp+100h] [ebp-74h] BYREF
  _BYTE var34[16]; // [esp+140h] [ebp-34h] BYREF
  wchar_t Buffer[18]; // [esp+150h] [ebp-24h] BYREF

  bool v51 = g_GameMode_Current == 0;
  v3 = a2;
  ++*(_DWORD *)&g_NetworkPlayerBuffer[4464];
  Debug::Log();
  while ( 1 )
  {
    if ( !v51 )
      ResetScenario();
    if ( g_GameMode_Current )
    {
      g_ScenarioClass_Instance->difficulty2 = (int)DataGlobal_A8B278;
      g_ScenarioClass_Instance->elapsedTimer[0] = 2 - g_ScenarioClass_Instance->difficulty2;
      int v6 = g_ScenarioClass_Instance->nextScenario[0];
      BYTE1(v6) = BYTE1(g_ScenarioClass_Instance->nextScenario[0]) & 0xEF;
      g_ScenarioClass_Instance->nextScenario[0] = v6 | (((unsigned __int8)FOW & 1) << 12);
      v7 = *(ObjectClass **)&g_NetworkPlayerBuffer[4900];
      BYTE1(v7) = g_NetworkPlayerBuffer[4901] & 0xEF;
      *(_DWORD *)&g_NetworkPlayerBuffer[4900] = (unsigned int)v7 | (((unsigned __int8)FOW & 1) << 12);
    }
    else
    {
      g_ScenarioClass_Instance->difficulty2 = *(_DWORD *)&g_NetworkPlayerBuffer[5416];
      g_ScenarioClass_Instance->elapsedTimer[0] = 2 - *(_DWORD *)&g_NetworkPlayerBuffer[5416];
      int v4 = g_ScenarioClass_Instance->nextScenario[0];
      BYTE1(v4) = BYTE1(g_ScenarioClass_Instance->nextScenario[0]) & 0xEF;
      g_ScenarioClass_Instance->nextScenario[0] = v4;
      v5 = *(ObjectClass **)&g_NetworkPlayerBuffer[4900];
      BYTE1(v5) = g_NetworkPlayerBuffer[4901] & 0xEF;
      *(_DWORD *)&g_NetworkPlayerBuffer[4900] = v5;
    }
    *(_DWORD *)&g_ScenarioClass_Instance->__pad_3566[54] = INIClass::ReadInt_Overwrite(
                                                     (int)v3,
                                                     (unsigned __int8 *)&g_INI_Key_Lighting.sectionHead[1],
                                                     (CCINIClass *)&stru_830620[54856],
                                                     (INIClass *)0x2710);
    Bool_Overwrite = INIClass::ReadBool_Overwrite(
                       (int)v3,
                       (unsigned __int8 *)&g_INI_Key_Lighting.sectionHead[1],
                       (CCINIClass *)&stru_830620[54844],
                       0);
    var158[1] = 0;
    char v53 = Bool_Overwrite;
    var158[2] = 0;
    GenericList::Constructor(&v57);
    v57 = &vt_List_INIClass_INISection;
  _DWORD v58[6]; // [esp+44h] [ebp-130h] BYREF
    Node::Init(v58);
    v58[5] = 0;
    char v59 = 0;
    var158[0] = (unsigned __int8 **)&CCINIClass_Vtable;
    CCFileClass::Construct3((int)aP1);
    if ( !g_GameMode_Current )
    {
      if ( !v51 )
      {
        _splitpath((const char *)g_ScenarioClass_Instance->fileName, 0, 0, Filename[0], 0);
        strcat(Filename[0], &stru_830620[54836]);
        FileClass::SetFileName(aP1, (IUnknown *)&Filename);
        if ( CCFileClass::Open(aP1, 0) )
        {
          CCINIClass::Load(var158, aP1, 0, 0);
          RulesClass::Addition(*(RulesClass **)&DataGlobal_87F8E4[30972]);
        }
        CCFileClass::Reset(aP1);
      }
      FileClass::SetFileName(aP1, (IUnknown *)&stru_830620[37124]);
      if ( CCFileClass::Open(aP1, 0) )
      {
        CCINIClass::Load(var158, aP1, 0, 0);
        *(_WORD *)g_ScenarioClass_Instance->name = 0;
        if ( &g_INI_Key_UIName == (INIClass *)-8 )
          Section = INIClass::BinarySearchSection((int)var158, (INIClass *)g_ScenarioClass_Instance->fileName);
        else
          Section = HashTableSection::FindSection(
                      (int)var158,
                      (CCINIClass *)g_ScenarioClass_Instance->fileName,
                      (CCINIClass *)&g_INI_Key_UIName.headNode[1]);
        if ( Section )
          INIClass::ParseValue_Wide(
            (char **)var158,
            (unsigned __int8 *)g_ScenarioClass_Instance->fileName,
            (CCINIClass *)&g_INI_Key_UIName.headNode[1],
            (wchar_t *)&DataGlobal_87F8E4[32336],
            (CCINIClass *)g_ScenarioClass_Instance->name,
            0x2Du);
        LOWORD(g_ScenarioClass_Instance->briefing[0]) = 0;
        if ( &stru_830620 == (IUnknown *)-37112 )
          int v10 = INIClass::BinarySearchSection((int)var158, (INIClass *)g_ScenarioClass_Instance->fileName);
        else
          v10 = HashTableSection::FindSection(
                  (int)var158,
                  (CCINIClass *)g_ScenarioClass_Instance->fileName,
                  (CCINIClass *)&stru_830620[37112]);
        if ( v10 )
        {
          INIClass::GetString(
            var158,
            (INIClass *)g_ScenarioClass_Instance->fileName,
            (unsigned __int8 *)&stru_830620[37112],
            (INIClass *)&DataGlobal_87F8E4[42624],
            (INIClass *)g_ScenarioClass_Instance->briefingCsf,
            32);
          if ( strlen((const char *)g_ScenarioClass_Instance->briefingCsf) )
          {
            StringCSF = GetStringCSF((wchar_t *)g_ScenarioClass_Instance->briefingCsf, 0, &stru_830620[53784], 3167);
            wcsncpy((wchar_t *)g_ScenarioClass_Instance->briefing, StringCSF, 0x400u);
            HIWORD(g_ScenarioClass_Instance->briefing[511]) = 0;
          }
        }
        g_ScenarioClass_Instance->uiName[0] = 0;
        if ( &g_INI_Key_UIName )
  int v12; // eax
          v12 = HashTableSection::FindSection(
                  (int)var158,
                  (CCINIClass *)g_ScenarioClass_Instance->fileName,
                  (CCINIClass *)&g_INI_Key_UIName);
        else
          v12 = INIClass::BinarySearchSection((int)var158, (INIClass *)g_ScenarioClass_Instance->fileName);
        if ( v12 )
        {
          INIClass::GetString(
            var158,
            (INIClass *)g_ScenarioClass_Instance->fileName,
            (unsigned __int8 *)&g_INI_Key_UIName,
            (INIClass *)&DataGlobal_87F8E4[42624],
            (INIClass *)g_ScenarioClass_Instance->uiName,
            32);
          if ( strlen(g_ScenarioClass_Instance->uiName) )
          {
            v13 = GetStringCSF((wchar_t *)g_ScenarioClass_Instance->uiName, 0, &stru_830620[53784], 3179);
            wcsncpy((wchar_t *)g_ScenarioClass_Instance->name, v13, 0x2Du);
            *(_WORD *)&g_ScenarioClass_Instance->name[88] = 0;
            sprintf((char *const)Buffer, &stru_830620[54828], g_ScenarioClass_Instance->uiName);
            v14 = GetStringCSF(Buffer, 0, &stru_830620[53784], 3183);
            wcsncpy((wchar_t *)g_ScenarioClass_Instance->uiNameLoaded, v14, 0x2Du);
            if ( !wcsncmp(
                    (const wchar_t *)g_ScenarioClass_Instance->uiNameLoaded,
                    (const wchar_t *)&stru_830620[54808],
                    8u) )
              wcsncpy((wchar_t *)g_ScenarioClass_Instance->uiNameLoaded, (const wchar_t *)g_ScenarioClass_Instance->name, 0x2Du);
            *(_WORD *)&g_ScenarioClass_Instance->uiNameLoaded[88] = 0;
          }
        }
        g_ScenarioClass_Instance->lsLoadMessage[0] = 0;
        if ( &stru_830620 == (IUnknown *)-54792 )
          int v15 = INIClass::BinarySearchSection((int)var158, (INIClass *)g_ScenarioClass_Instance->fileName);
        else
          v15 = HashTableSection::FindSection(
                  (int)var158,
                  (CCINIClass *)g_ScenarioClass_Instance->fileName,
                  (CCINIClass *)&stru_830620[54792]);
        if ( v15 )
          INIClass::GetString(
            var158,
            (INIClass *)g_ScenarioClass_Instance->fileName,
            (unsigned __int8 *)&stru_830620[54792],
            (INIClass *)&DataGlobal_87F8E4[42624],
            (INIClass *)g_ScenarioClass_Instance->lsLoadMessage,
            31);
        g_ScenarioClass_Instance->lsBrief[0] = 0;
        if ( &stru_830620 == (IUnknown *)-54776 )
          int v16 = INIClass::BinarySearchSection((int)var158, (INIClass *)g_ScenarioClass_Instance->fileName);
        else
          v16 = HashTableSection::FindSection(
                  (int)var158,
                  (CCINIClass *)g_ScenarioClass_Instance->fileName,
                  (CCINIClass *)&stru_830620[54776]);
        if ( v16 )
          INIClass::GetString(
            var158,
            (INIClass *)g_ScenarioClass_Instance->fileName,
            (unsigned __int8 *)&stru_830620[54776],
            (INIClass *)&DataGlobal_87F8E4[42624],
            (INIClass *)g_ScenarioClass_Instance->lsBrief,
            31);
        if ( &stru_830620 == (IUnknown *)-54760 )
          int v17 = INIClass::BinarySearchSection((int)var158, (INIClass *)g_ScenarioClass_Instance->fileName);
        else
          v17 = HashTableSection::FindSection(
                  (int)var158,
                  (CCINIClass *)g_ScenarioClass_Instance->fileName,
                  (CCINIClass *)&stru_830620[54760]);
        if ( v17 )
          g_ScenarioClass_Instance->ls640BriefLocX = INIClass::ReadInt_Overwrite(
                                               (int)var158,
                                               (unsigned __int8 *)g_ScenarioClass_Instance->fileName,
                                               (CCINIClass *)&stru_830620[54760],
                                               (INIClass *)g_ScenarioClass_Instance->ls640BriefLocX);
        if ( &stru_830620 == (IUnknown *)-54744 )
          int v18 = INIClass::BinarySearchSection((int)var158, (INIClass *)g_ScenarioClass_Instance->fileName);
        else
          v18 = HashTableSection::FindSection(
                  (int)var158,
                  (CCINIClass *)g_ScenarioClass_Instance->fileName,
                  (CCINIClass *)&stru_830620[54744]);
        if ( v18 )
          g_ScenarioClass_Instance->ls640BriefLocY = INIClass::ReadInt_Overwrite(
                                               (int)var158,
                                               (unsigned __int8 *)g_ScenarioClass_Instance->fileName,
                                               (CCINIClass *)&stru_830620[54744],
                                               (INIClass *)g_ScenarioClass_Instance->ls640BriefLocY);
        if ( &stru_830620 == (IUnknown *)-54728 )
          int v19 = INIClass::BinarySearchSection((int)var158, (INIClass *)g_ScenarioClass_Instance->fileName);
        else
          v19 = HashTableSection::FindSection(
                  (int)var158,
                  (CCINIClass *)g_ScenarioClass_Instance->fileName,
                  (CCINIClass *)&stru_830620[54728]);
        if ( v19 )
          g_ScenarioClass_Instance->ls800BriefLocX = INIClass::ReadInt_Overwrite(
                                               (int)var158,
                                               (unsigned __int8 *)g_ScenarioClass_Instance->fileName,
                                               (CCINIClass *)&stru_830620[54728],
                                               (INIClass *)g_ScenarioClass_Instance->ls800BriefLocX);
        if ( &stru_830620 == (IUnknown *)-54712 )
          int v20 = INIClass::BinarySearchSection((int)var158, (INIClass *)g_ScenarioClass_Instance->fileName);
        else
          v20 = HashTableSection::FindSection(
                  (int)var158,
                  (CCINIClass *)g_ScenarioClass_Instance->fileName,
                  (CCINIClass *)&stru_830620[54712]);
        if ( v20 )
          g_ScenarioClass_Instance->ls800BriefLocY = INIClass::ReadInt_Overwrite(
                                               (int)var158,
                                               (unsigned __int8 *)g_ScenarioClass_Instance->fileName,
                                               (CCINIClass *)&stru_830620[54712],
                                               (INIClass *)g_ScenarioClass_Instance->ls800BriefLocY);
        LOBYTE(g_ScenarioClass_Instance->ls640BkgdName[0]) = 0;
        if ( &stru_830620 == (IUnknown *)-54696 )
          int v21 = INIClass::BinarySearchSection((int)var158, (INIClass *)g_ScenarioClass_Instance->fileName);
        else
          v21 = HashTableSection::FindSection(
                  (int)var158,
                  (CCINIClass *)g_ScenarioClass_Instance->fileName,
                  (CCINIClass *)&stru_830620[54696]);
        if ( v21 )
          INIClass::GetString(
            var158,
            (INIClass *)g_ScenarioClass_Instance->fileName,
            (unsigned __int8 *)&stru_830620[54696],
            (INIClass *)&DataGlobal_87F8E4[42624],
            (INIClass *)g_ScenarioClass_Instance->ls640BkgdName,
            64);
        LOBYTE(g_ScenarioClass_Instance->ls800BkgdName[0]) = 0;
        if ( &stru_830620 == (IUnknown *)-54680 )
          int v22 = INIClass::BinarySearchSection((int)var158, (INIClass *)g_ScenarioClass_Instance->fileName);
        else
          v22 = HashTableSection::FindSection(
                  (int)var158,
                  (CCINIClass *)g_ScenarioClass_Instance->fileName,
                  (CCINIClass *)&stru_830620[54680]);
        if ( v22 )
          INIClass::GetString(
            var158,
            (INIClass *)g_ScenarioClass_Instance->fileName,
            (unsigned __int8 *)&stru_830620[54680],
            (INIClass *)&DataGlobal_87F8E4[42624],
            (INIClass *)g_ScenarioClass_Instance->ls800BkgdName,
            64);
        LOBYTE(g_ScenarioClass_Instance->ls800BkgdPal[0]) = 0;
        if ( &stru_830620 == (IUnknown *)-54664 )
          int v23 = INIClass::BinarySearchSection((int)var158, (INIClass *)g_ScenarioClass_Instance->fileName);
        else
          v23 = HashTableSection::FindSection(
                  (int)var158,
                  (CCINIClass *)g_ScenarioClass_Instance->fileName,
                  (CCINIClass *)&stru_830620[54664]);
        if ( v23 )
          INIClass::GetString(
            var158,
            (INIClass *)g_ScenarioClass_Instance->fileName,
            (unsigned __int8 *)&stru_830620[54664],
            (INIClass *)&DataGlobal_87F8E4[42624],
            (INIClass *)g_ScenarioClass_Instance->ls800BkgdPal,
            64);
      }
    }
    for ( i = 1120; i < 1136; g_ScenarioClass_Instance->nextScenario[i - 1] = -1 )
      ++i;
    if ( g_GameMode_Current )
    {
      ScenarioClass::ReadWaypoints((__int16 *)g_ScenarioClass_Instance, v3);
      v25 = g_ScenarioClass_Instance;
      if ( g_ScenarioClass_Instance->isRandom )
      {
        int v26 = 0;
        while ( 1 )
        {
          *(_DWORD *)&v25->waypoints[v26 * 4] = v25->houseHomeCells[v26];
          if ( ++v26 >= 8 )
            break;
          v25 = g_ScenarioClass_Instance;
        }
      }
      RulesClass::LoadCountries(*(RulesClass **)&DataGlobal_87F8E4[30972]);
      RulesClass::LoadFromINI(*(RulesClass **)&DataGlobal_87F8E4[30972]);
      for ( j = 0; j < g_SuperWeaponTypeArray; ++j )
        (*(void (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)g_SuperWeaponTypeCount + j) + 100))(
          *((_DWORD *)g_SuperWeaponTypeCount + j),
          *(_DWORD *)&DataGlobal_87F8E4[30564]);
      AssignSessionHouses();
      v3 = a2;
      v67[0] = 1;
      v67[1] = 1;
      v67[2] = 50;
      v67[3] = 50;
  unsigned int *v28; // eax
      v28 = INIClass::ParseValue(
              (int)a2,
              (CCINIClass *)var34,
              (INIClass *)&g_INI_Key_CellTags.headNode[2],
              (unsigned __int8 *)g_INI_Key_Size,
              (MouseClass *)v67);
      unsigned int v60 = *v28;
      unsigned int v61 = v28[1];
      unsigned int v62 = v28[2];
      unsigned int v63 = v28[3];
      CellClass::DrawWrapper((int *)&DataGlobal_87F7E8, (Tactical *)&v60, 1, 0, 1);
      if ( !g_ScenarioClass_Instance->isRandom )
        PreviewClass::RenderMapPreview(g_ScenarioClass_Instance->nextScenario, a2);
  unsigned int *v29; // eax
      v29 = INIClass::ParseValue(
              (int)a2,
              (CCINIClass *)Filename[32],
              (INIClass *)&g_INI_Key_CellTags.headNode[2],
              (unsigned __int8 *)g_INI_Key_LocalSize,
              &DataGlobal_87F8E4);
      v60 = *v29;
      v61 = v29[1];
      v62 = v29[2];
      v63 = v29[3];
      Shroud::ProcessCellVisibility(&DataGlobal_87F7E8, (MouseClass *)&v60);
      (*(void (__thiscall **)(SkirmishDialog *, char))(*(_DWORD *)g_GameStateFlags->__pad_0 + 128))(
        g_GameStateFlags,
        v53);
      if ( g_GameOptionsFlags == 2 )
        HouseClass::FindStartPositions();
      else
        (*(void (__thiscall **)(SkirmishDialog *, char))(*(_DWORD *)g_GameStateFlags->__pad_0 + 132))(
          g_GameStateFlags,
          v53);
    }
    Instance = LoadProgressMgr::GetInstance();
    LoadingScreen::Render(Instance);
    Multiplayer::ShowProgress(&g_GameMode_Current, 3);
    if ( !v51 )
      break;
    v51 = 0;
    *(_DWORD *)aP1[0].__pad_0 = &vt_CCFileClass;
    v69 = 0;
    Vector::Clear((int)v65);
    *(_DWORD *)aP1[0].__pad_0 = &off_7E1668;
    BufferIOFileClass::Dtor(aP1);
    HashTable::DestroyHashTableINIClass((void **)var158);
  }
  SwizzleManager::ConvertWrapper((int)&g_OverlayTypeConfig[18712]);
  if ( *(_DWORD *)&DataGlobal_87F8E4[31296] )
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)&DataGlobal_87F8E4[31296] + 32))(
      *(_DWORD *)&DataGlobal_87F8E4[31296],
      1);
  int v31 = __2_YAPAXI_Z(0xE18u);
  if ( v31 )
    int v32 = TacticalMap::Construct(v31);
  else
    v32 = 0;
  *(_DWORD *)&DataGlobal_87F8E4[31296] = v32;
  TacticalClass::SetViewportPosition(v32, (IUnknown *)&DataGlobal_87F8E4[30396]);
  g_ScenarioClass_Instance->theater = ScenarioClass::ReadAndParseString(
                                (unsigned __int8 ***)v3,
                                (INIClass *)&g_INI_Key_CellTags.headNode[2],
                                (unsigned __int8 *)&unk_818658,
                                0);
  LoadTheaterClassMIX(g_ScenarioClass_Instance->theater);
  Multiplayer::ShowProgress(&g_GameMode_Current, 30);
  SidebarClass::ReadButtonList(*(RulesClass **)&DataGlobal_87F8E4[30972]);
  Multiplayer::ShowProgress(&g_GameMode_Current, 31);
  ResetRules(*(RulesClass **)&DataGlobal_87F8E4[30972]);
  Multiplayer::ShowProgress(&g_GameMode_Current, 35);
  Event::Dispatch();
  char * v33 = *(char **)&DataGlobal_87F8E4[30564];
  v56 = (CCINIClass *)g_ScenarioClass_Instance;
  if ( INIClass::GetKeyCount(*(char **)&DataGlobal_87F8E4[30564], (INIClass *)&stru_830620[53764]) >= 50 )
    v35 = (INIClass *)50;
  INIClass *v35 = (INIClass *)INIClass::GetKeyCount(v33, (INIClass *)&stru_830620[53764]);
  for ( k = 0; (int)k < (int)v35; k = (CCINIClass *)((char *)k + 1) )
  {
    v37 = (INIClass *)INIClass::GetStringByIndex(v33, (CCINIClass *)&stru_830620[53764], k);
    eax102 = atoi(v37->__pad_0);
    INIClass::GetString(
      (unsigned __int8 ***)v33,
      (INIClass *)&stru_830620[53764],
      (unsigned __int8 *)v37,
      0,
      (INIClass *)((char *)&v56[83] + 40 * eax102 + eax102),
      40);
  }
  Event::Dispatch();
  RulesClass::Addition(*(RulesClass **)&DataGlobal_87F8E4[30972]);
  Multiplayer::ShowProgress(&g_GameMode_Current, 45);
  v38 = g_ScenarioClass_Instance;
  int v39 = 0;
  *(_DWORD *)&g_NetworkPlayerBuffer[4460] = 0;
  if ( g_GameMode_Current )
  {
    int v41 = *(_DWORD *)(**(_DWORD **)&g_NetworkPlayerBuffer[1084] + 75);
    if ( v41 == -3 )
      v41 = 0;
    v39 = *(_DWORD *)(*((_DWORD *)g_SuperWeaponTypeCount + v41) + 188);
  }
  else
  {
    campaignIndex = g_ScenarioClass_Instance->campaignIndex;
    if ( campaignIndex != -1 )
      v39 = *(_DWORD *)(*(_DWORD *)&g_CampaignTypeArray->__pad_0[4 * campaignIndex] + 152);
  }
  int v42 = v39;
  if ( g_GameMode_Current )
  {
    g_ScenarioClass_Instance->playerSideIndex = v39;
    if ( !MixFile::LoadSide(v39) )
    {
LABEL_124:
      *(_DWORD *)aP1[0].__pad_0 = &vt_CCFileClass;
      --*(_DWORD *)&g_NetworkPlayerBuffer[4464];
      v69 = 0;
      Vector::Clear((int)v65);
      *(_DWORD *)aP1[0].__pad_0 = &off_7E1668;
      BufferIOFileClass::Dtor(aP1);
      HashTable::DestroyHashTableINIClass((void **)var158);
      return 0;
    }
  }
  else
  {
    HouseClass::LoadTypeList(a2->__pad_0);
    INIClass::GetString(
      (unsigned __int8 ***)a2,
      (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
      (unsigned __int8 *)&g_INI_Key_Lighting.sectionCount,
      (INIClass *)&stru_830620[54652],
      &Filename,
      32);
    int v43 = HouseClass::FindByName(Filename[0]);
    if ( v43 == -1 || v43 > (int)HouseClass_Count )
      v42 = 0;
    else
      v42 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Array->__pad_0[4 * v43] + 52) + 188);
    g_ScenarioClass_Instance->playerSideIndex = v42;
    if ( !MixFile::LoadSide(v42) )
      goto LABEL_124;
  }
  Multiplayer::ShowProgress(&g_GameMode_Current, 50);
  if ( !ScenarioClass::ReadMapINI((int)g_ScenarioClass_Instance, a3, (int)a2) )
    goto LABEL_124;
  Multiplayer::ShowProgress(&g_GameMode_Current, 58);
  if ( g_GameMode_Current )
  {
    g_ScenarioClass_Instance->playerSideIndex = v42;
    if ( g_GameStateFlags )
      (*(void (__thiscall **)(SkirmishDialog *))(*(_DWORD *)g_GameStateFlags->__pad_0 + 124))(g_GameStateFlags);
  }
  else
  {
    INIClass::GetString(
      (unsigned __int8 ***)a2,
      (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
      (unsigned __int8 *)&g_INI_Key_Lighting.sectionCount,
      (INIClass *)&stru_830620[54652],
      (INIClass *)Filename[32],
      32);
    int v44 = HouseClass::FindByName(Filename[32]);
    if ( v44 == -1 || v44 > (int)HouseClass_Count )
      v42 = 0;
    else
      v42 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Array->__pad_0[4 * v44] + 52) + 188);
    if ( !MixFile::LoadSide(v42) )
      goto LABEL_124;
    g_ScenarioClass_Instance->playerSideIndex = v42;
  }
  if ( g_GameMode_Current && !(_BYTE)BridgeDestruction )
  {
    v47 = *(ObjectClass **)&g_NetworkPlayerBuffer[4900];
    BYTE1(v47) = g_NetworkPlayerBuffer[4901] & 0x7F;
    *(_DWORD *)&g_NetworkPlayerBuffer[4900] = v47;
  }
  nullsub_37();
  Event::Dispatch();
  SmallFunc_6F19B0(&DataGlobal_87F8E4[30788], 1);
  SmallFunc_6F19B0(a2->__pad_0, 0);
  ScoreScreenClass::ProcessFrame(&DataGlobal_87F8E4[30788], 1);
  ScoreScreenClass::ProcessFrame(a2->__pad_0, 0);
  TaskForceClass::LoadFromINI(&DataGlobal_87F8E4[30788], 1);
  TaskForceClass::LoadFromINI(a2->__pad_0, 0);
  TriggerClass::Process(a2->__pad_0);
  CCINIClass::ProcessSection(a2->__pad_0);
  CCINIClass::ReadTypeList(&DataGlobal_87F8E4[30788], (CCINIClass *)1);
  CCINIClass::ReadTypeList(a2->__pad_0, 0);
  Helper_6F2040();
  Multiplayer::ShowProgress(&g_GameMode_Current, 60);
  ScenarioClass::LoadMapData((int *)&DataGlobal_87F7E8, a2);
  Event::Dispatch();
  ScenarioClass::LoadWaypoints(a2->__pad_0);
  BulletTypeClass::ReadTrailerAnim();
  MapClass::MarkForRedraw(&DataGlobal_87F7E8, 2);
  Multiplayer::ShowProgress(&g_GameMode_Current, 70);
  Event::Dispatch();
  ReadOverlayINI(a2);
  Event::Dispatch();
  LayerClass::CellIteratorReset(&DataGlobal_87F7E8);
  for ( m = LayerClass::CellIteratorNext(&DataGlobal_87F7E8); m; m = LayerClass::CellIteratorNext(&DataGlobal_87F7E8) )
    House::AnnounceUpgrade(m, (IUnknown *)0xFFFFFFFF);
  ResetBuildingState();
  CCINIClass::LoadTypeFromINI(a2->__pad_0);
  Event::Dispatch();
  InitializeVeinholeSystem(1);
  BuildingClass::ClearOccupancyData();
  BuildingClass::ClearFactoryData();
  Multiplayer::ShowProgress(&g_GameMode_Current, 72);
  RadarClass::RecreateSurface((int)&DataGlobal_87F7E8, v42);
  PlaceScenarioUnits(a2->__pad_0, (int)v38);
  Event::Dispatch();
  Multiplayer::ShowProgress(&g_GameMode_Current, 74);
  PlaceAircraftFromINI(a2->__pad_0, (int)a2);
  Event::Dispatch();
  PlaceScenarioInfantry(a2->__pad_0);
  Event::Dispatch();
  Multiplayer::ShowProgress(&g_GameMode_Current, 76);
  byte_829AE4 = 0;
  Scenario::ReadTeams(a2);
  Event::Dispatch();
  Multiplayer::ShowProgress(&g_GameMode_Current, 78);
  byte_829AE4 = 1;
  Event::Dispatch();
  UnitClass::ReadINI(a2->__pad_0);
  Event::Dispatch();
  if ( g_GameMode_Current == (CellStruct *)5 )
  {
    if ( g_NetworkPlayerBuffer[5973] )
    {
      CCFileClass::Reset(aP1);
      FileClass::SetFileName(aP1, (IUnknown *)&stru_830620[54640]);
      if ( CCFileClass::Open(aP1, 0) == 1 )
      {
        CCINIClass::Load(var158, aP1, 0, 0);
        RulesClass::Addition(*(RulesClass **)&DataGlobal_87F8E4[30972]);
      }
    }
  }
  Multiplayer::ShowProgress(&g_GameMode_Current, 82);
  Event::Dispatch();
  DataGlobal_87F8E4.field_38 = MapClass::PostProcessReveal(&DataGlobal_87F7E8, 0);
  Multiplayer::ShowProgress(&g_GameMode_Current, 86);
  Event::Dispatch();
  CCFileClass::Create(dword_89C3B0);
  Multiplayer::ShowProgress(&g_GameMode_Current, 90);
  Event::Dispatch();
  if ( g_GameMode_Current && !a1 )
  {
  void *v48; // ecx
    LOBYTE(v48) = INIClass::ReadBool_Overwrite(
                    (int)a2,
                    (unsigned __int8 *)&g_INI_Key_Lighting.sectionHead[1],
                    (CCINIClass *)&stru_830620[54844],
                    0);
    ScenarioClass::SetupAlliances(v48);
  }
  Event::Dispatch();
  SwizzleManager::ConvertWrapper((int)&g_OverlayTypeConfig[18712]);
  Multiplayer::ShowProgress(&g_GameMode_Current, 96);
  Event::Dispatch();
  ProcessExpiredPointers();
  if ( g_GameMode_Current )
    g_ScenarioClass_Instance->nextScenario[0] = *(_DWORD *)&g_NetworkPlayerBuffer[4900];
  int v49 = *(_DWORD *)&g_NetworkPlayerBuffer[4464];
  *(_DWORD *)&g_NetworkPlayerBuffer[4464] = 0;
  int v50 = v49 - 1;
  ProcessDataBuildingClass();
  *(_DWORD *)&g_NetworkPlayerBuffer[4464] = v50;
  Multiplayer::ShowProgress(&g_GameMode_Current, 98);
  Event::Dispatch();
  (*(void (__thiscall **)(char *))(*(_DWORD *)&DataGlobal_87F8E4[4392] + 12))(&DataGlobal_87F8E4[4392]);
  if ( (g_ScenarioClass_Instance->nextScenario[0] & 0x1000) != 0 )
    SmallFunc_5866C0(&DataGlobal_87F7E8);
  Map_Load_660B00();
  FogOfWar::Render((int **)&DataGlobal_87F7E8);
  *(_DWORD *)aP1[0].__pad_0 = &vt_CCFileClass;
  v69 = 0;
  Vector::Clear((int)v65);
  *(_DWORD *)aP1[0].__pad_0 = &off_7E1668;
  BufferIOFileClass::Dtor(aP1);
  HashTable::DestroyHashTableINIClass((void **)var158);
  return 1;
}
}
} // namespace gamemd

// 0x689E90
namespace gamemd {
int ScenarioClass::ReadMapINI(CCINIClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  void ***v4; // eax
  RandomStruct *v5; // ebx
  int BuildingTypeByName; // eax
  INIClass *v10; // eax
  double Double_Overwrite; // st7
  void ***TechnoTypeList; // eax
  void **v14; // eax
  int eax16; // eax
  void **v18; // edx
  CCINIClass *v17; // eax
  void ***v20; // ebx
  void ***v21; // ecx
  void **v22; // eax
  void ***v23; // ecx
  void ***v25; // ecx
  void ***IntList; // eax
  void **v29; // eax
  int eax35; // eax
  void **v33; // edx
  CCINIClass *v32; // eax
  char Bool_Overwrite; // al
  int Int_Overwrite; // eax
  int TimeString; // eax
  CCINIClass *v53; // ecx
  void **v116; // [esp-4h] [ebp-5Ch] BYREF
  _DWORD *var58; // [esp+0h] [ebp-58h]
  RandomStruct *v115; // [esp+4h] [ebp-54h]
  INIClass *v117; // [esp+Ch] [ebp-4Ch]
  INIClass *aP3[2]; // [esp+10h] [ebp-48h]
  void ***v122; // [esp+24h] [ebp-34h]
  RandomStruct v123; // [esp+28h] [ebp-30h] BYREF
  char Buffer[12]; // [esp+30h] [ebp-28h] BYREF
  char Destination[4]; // [esp+3Ch] [ebp-1Ch] BYREF
  void *Block; // [esp+40h] [ebp-18h]

  INIClass::ResetSection(aP1);
  GameMode::ReadFlagsFromINI((int *)this, aP1);
  this->startX = INIClass::ReadInt_Overwrite(
                               (int)aP1,
                               (unsigned __int8 *)&stru_830620[55368],
                               (CCINIClass *)&stru_830620[55376],
                               this->startX);
  this->startY = INIClass::ReadInt_Overwrite(
                               (int)aP1,
                               (unsigned __int8 *)&stru_830620[55368],
                               (CCINIClass *)&stru_830620[55360],
                               this->startY);
  this->width = INIClass::ReadInt_Overwrite(
                               (int)aP1,
                               (unsigned __int8 *)&stru_830620[55368],
                               (CCINIClass *)&stru_82BBD0.sectionHead[1],
                               this->width);
  this->height = INIClass::ReadInt_Overwrite(
                               (int)aP1,
                               (unsigned __int8 *)&stru_830620[55368],
                               &g_INI_Key_Height,
                               this->height);
  this->numberStartingPoints = INIClass::ReadInt_Overwrite(
                               (int)aP1,
                               (unsigned __int8 *)&stru_830620[55368],
                               (CCINIClass *)&stru_830620[55336],
                               this->numberStartingPoints);
  this->numCoopHumanStartSpots = INIClass::ReadInt_Overwrite(
                               (int)aP1,
                               (unsigned __int8 *)&stru_830620[55368],
                               (CCINIClass *)&stru_830620[55312],
                               this->numCoopHumanStartSpots);
  v4 = 0;
  if ( this->numberStartingPoints > 0 )
  {
    v5 = (RandomStruct *)(this + 4416);
    do
    {
      v122 = (void ***)((char *)v4 + 1);
      sprintf(Buffer, &stru_830620[55300], (char *)v4 + 1);
  int *v6; // eax
      v6 = INIClass::ReadPoint2D_Overwrite(
             aP1,
             &v123,
             (INIClass *)&stru_830620[55368],
             (CCINIClass *)Buffer,
             v5);
      int v7 = *v6;
      int v8 = v6[1];
      v5->Min = v7;
      v5->Max = v8;
      v4 = v122;
      ++v5;
    }
    while ( (int)v122 < this->numberStartingPoints );
  }
  INIClass::GetString(
    (unsigned __int8 ***)aP1,
    (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
    (unsigned __int8 *)&stru_830620[56188],
    (INIClass *)(this + 4),
    (INIClass *)(this + 4),
    260);
  INIClass::GetString(
    (unsigned __int8 ***)aP1,
    (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
    (unsigned __int8 *)&stru_830620[56172],
    (INIClass *)(this + 264),
    (INIClass *)(this + 264),
    260);
  this->intro = INIClass::GetBool(
                               (unsigned __int8 ***)aP1,
                               (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
                               (unsigned __int8 *)&g_INI_Key_Intro,
                               this->intro);
  this->brief = INIClass::GetBool(
                               (unsigned __int8 ***)aP1,
                               (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
                               (unsigned __int8 *)&stru_830620[53896],
                               this->brief);
  this->win = INIClass::GetBool(
                               (unsigned __int8 ***)aP1,
                               (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
                               (unsigned __int8 *)&stru_830620[56168],
                               this->win);
  this->lose = INIClass::GetBool(
                               (unsigned __int8 ***)aP1,
                               (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
                               (unsigned __int8 *)&stru_830620[56160],
                               this->lose);
  this->action = INIClass::GetBool(
                               (unsigned __int8 ***)aP1,
                               (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
                               (unsigned __int8 *)&stru_817244.INIClass_field_2C,
                               this->action);
  this->postScore = INIClass::GetBool(
                               (unsigned __int8 ***)aP1,
                               (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
                               (unsigned __int8 *)&stru_830620[56148],
                               this->postScore);
  this->preMapSelect = INIClass::GetBool(
                               (unsigned __int8 ***)aP1,
                               (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
                               (unsigned __int8 *)&stru_830620[56132],
                               this->preMapSelect);
  this->multiplayerOnly = INIClass::ReadBool_Overwrite(
                               (int)aP1,
                               (unsigned __int8 *)&g_INI_Key_Lighting.sectionHead[1],
                               (CCINIClass *)&stru_830620[56116],
                               this->multiplayerOnly);
  this->timerInherit = INIClass::ReadBool_Overwrite(
                               (int)aP1,
                               (unsigned __int8 *)&g_INI_Key_Lighting.sectionHead[1],
                               (CCINIClass *)&stru_830620[56100],
                               this->timerInherit);
  this->endOfGame = INIClass::ReadBool_Overwrite(
                               (int)aP1,
                               (unsigned __int8 *)&g_INI_Key_Lighting.sectionHead[1],
                               (CCINIClass *)&stru_830620[56088],
                               this->endOfGame);
  BuildingTypeByName = Scenario::FindBuildingTypeByName(
                         (unsigned __int8 ***)aP1,
                         (unsigned __int8 *)&g_INI_Key_Lighting.sectionHead[1],
                         (unsigned __int8 *)g_INI_Key_Theme,
                         this->themeIndex);
  aP3[1] = 0;
  aP3[0] = (INIClass *)&stru_830620[56072];
  v117 = (INIClass *)&g_INI_Key_Lighting.sectionHead[1];
  this->themeIndex = BuildingTypeByName;
  *(_DWORD *)&g_NetworkPlayerBuffer[5952] = INIClass::ReadInt_Overwrite(
                                                   (int)aP1,
                                                   (unsigned __int8 *)v117,
                                                   (CCINIClass *)aP3[0],
                                                   aP3[1]);
  v10 = this->carryOverMoney;
  aP3[1] = this->q1C7C;
  Double_Overwrite = INIClass::ReadDouble_Overwrite(
                       (int)aP1,
                       (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
                       (unsigned __int8 *)&stru_830620[56056],
                       v10);
  this->carryOverMoney = Double_Overwrite;
  if ( Double_Overwrite >= 1.0 )
    Double_Overwrite = 1.0;
  this->carryOverMoney = Double_Overwrite;
  this->carryOverCap = INIClass::ReadInt_Overwrite(
                               (int)aP1,
                               (unsigned __int8 *)&g_INI_Key_Lighting.sectionHead[1],
                               (CCINIClass *)&stru_830620[56040],
                               this->carryOverCap);
  this->skipScore = INIClass::ReadBool_Overwrite(
                               (int)aP1,
                               (unsigned __int8 *)&g_INI_Key_Lighting.sectionHead[1],
                               (CCINIClass *)&stru_830620[56028],
                               this->skipScore);
  this->oneTimeOnly = INIClass::ReadBool_Overwrite(
                               (int)aP1,
                               (unsigned __int8 *)&g_INI_Key_Lighting.sectionHead[1],
                               (CCINIClass *)&stru_830620[56016],
                               this->oneTimeOnly);
  this->skipMapSelect = INIClass::ReadBool_Overwrite(
                               (int)aP1,
                               (unsigned __int8 *)&g_INI_Key_Lighting.sectionHead[1],
                               (CCINIClass *)&stru_830620[56000],
                               this->skipMapSelect);
  this->truckCrate = INIClass::ReadBool_Overwrite(
                               (int)aP1,
                               (unsigned __int8 *)&g_INI_Key_Lighting.sectionHead[1],
                               (CCINIClass *)&stru_830620[55988],
                               this->truckCrate);
  this->trainCrate = INIClass::ReadBool_Overwrite(
                               (int)aP1,
                               (unsigned __int8 *)&g_INI_Key_Lighting.sectionHead[1],
                               (CCINIClass *)&stru_830620[55976],
                               this->trainCrate);
  this->fillSilos = INIClass::ReadBool_Overwrite(
                               (int)aP1,
                               (unsigned __int8 *)&g_INI_Key_Lighting.sectionHead[1],
                               (CCINIClass *)&stru_830620[55964],
                               this->fillSilos);
  this->ignoreGlobalAiTriggers = INIClass::ReadBool_Overwrite(
                               (int)aP1,
                               (unsigned __int8 *)&g_INI_Key_Lighting.sectionHead[1],
                               (CCINIClass *)&stru_830620[55940],
                               this->ignoreGlobalAiTriggers);
  this->percent = INIClass::ReadInt_Overwrite(
                               (int)aP1,
                               (unsigned __int8 *)&g_INI_Key_Lighting.sectionHead[1],
                               (CCINIClass *)&stru_830620[55932],
                               this->percent);
  this->startingDropships = INIClass::ReadInt_Overwrite(
                                (int)aP1,
                                (unsigned __int8 *)&g_INI_Key_Lighting.sectionHead[1],
                                (CCINIClass *)&stru_830620[55912],
                                this->startingDropships);
  var58 = 0;
  v115 = 0;
  int v119; // [esp+8h] [ebp-50h]
  LOWORD(v119) = 1;
  v116 = &vt_VectorClass_TechnoTypeClass;
  if ( &v116 != (void ***)(this + 13524) )
  {
    TypeList_TechnoType::ddtor((int)&v116);
    v115 = this->allowableUnitMaximums;
    if ( v115 )
    {
      var58 = (_DWORD *)__2_YAPAXI_Z(4 * (_DWORD)v115);
      if ( var58 )
      {
        int v12 = 0;
        for ( BYTE1(v119) = 1; v12 < (int)v115; ++v12 )
          var58[v12] = *(_DWORD *)(this->allowableUnitsCount + 4 * v12);
      }
    }
    else
    {
      var58 = 0;
      BYTE1(v119) = 0;
    }
  }
  TechnoTypeList = (void ***)INIClass::ReadTechnoTypeList(
                               (unsigned __int8 ***)aP1,
                               (CCINIClass *)Destination,
                               (unsigned __int8 *)&g_INI_Key_Lighting.sectionHead[1],
                               (unsigned __int8 *)&stru_830620[55896],
                               &vt_TypeList_TechnoTypeClass,
                               var58,
                               (int)v115,
                               v119,
                               this->dropshipUnitCounts,
                               this->dropshipCountsCount,
                               (int)aP3[1]->__pad_0);
  v122 = TechnoTypeList;
  if ( (void ***)(this + 13524) != TechnoTypeList )
  {
    (*(void (__thiscall **)(int))(this->allowableUnits + 12))(this + 13524);
    v14 = v122[2];
    this->allowableUnitMaximums = v14;
    if ( v14 )
    {
      int v15 = __2_YAPAXI_Z(4 * (_DWORD)v14);
      this->allowableUnitsCount = v15;
      if ( v15 )
      {
        int v16 = this->allowableUnitMaximums;
        eax16 = 0;
        *(_BYTE *)(this + 13537) = 1;
        if ( v16 > 0 )
        {
          do
          {
            ++eax16;
            *(_DWORD *)(this->allowableUnitsCount + 4 * eax16 - 4) = v122[1][eax16 - 1];
          }
          while ( eax16 < this->allowableUnitMaximums );
        }
      }
    }
    else
    {
      this->allowableUnitsCount = 0;
      *(_BYTE *)(this + 13537) = 0;
    }
    TechnoTypeList = v122;
  }
  this->dropshipUnitCounts = TechnoTypeList[4];
  this->dropshipCountsCount = TechnoTypeList[5];
  v18 = TechnoTypeList[6];
  v17 = (CCINIClass *)Block;
  this->ambientOriginal = v18;
  *(_DWORD *)Destination = &vt_VectorClass_TechnoTypeClass;
  char v127; // [esp+49h] [ebp-Fh]
  if ( v17 && v127 )
    __3_YAXPAX_Z(v17);
  v20 = (void ***)(this + 13552);
  v21 = &v116;
  v122 = &v116;
  var58 = 0;
  v115 = 0;
  LOWORD(v119) = 1;
  v116 = &vt_VectorClass_int;
  if ( &v116 != (void ***)(this + 13552) )
  {
    VectorClass::Destroy((int)&v116);
    v22 = this->red;
    v23 = v122;
    v122[2] = v22;
    if ( v22 )
    {
      int v24 = __2_YAPAXI_Z(4 * (_DWORD)v22);
      v25 = v122;
      v122[1] = (void **)v24;
      if ( v24 )
      {
        int v26 = (int)v25[2];
        int v27 = 0;
        *((_BYTE *)v25 + 13) = 1;
        if ( v26 > 0 )
        {
          do
          {
            v122[1][v27] = *(void **)(this->ambientTarget + 4 * v27);
            ++v27;
          }
          while ( v27 < (int)v122[2] );
        }
      }
    }
    else
    {
      v23[1] = 0;
      *((_BYTE *)v23 + 13) = 0;
    }
    v21 = v122;
  }
  v21[4] = this->blue;
  v21[5] = this->ground;
  *v21 = &vt_TypeList_int;
  IntList = (void ***)INIClass::ReadIntList(
                        (unsigned __int8 ***)aP1,
                        (int)Destination,
                        (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
                        (unsigned __int8 *)&stru_830620[55872],
                        v116,
                        var58,
                        (int)v115,
                        v119,
                        (int)v117,
                        (int)aP3[0]->__pad_0,
                        (int)aP3[1]->__pad_0);
  v122 = IntList;
  if ( v20 != IntList )
  {
    ((void (__thiscall *)(int))(*v20)[3])(this + 13552);
    v29 = v122[2];
    this->red = v29;
    if ( v29 )
    {
      int v30 = __2_YAPAXI_Z(4 * (_DWORD)v29);
      this->ambientTarget = v30;
      if ( v30 )
      {
        int v31 = this->red;
        eax35 = 0;
        *(_BYTE *)(this + 13565) = 1;
        if ( v31 > 0 )
        {
          do
          {
            ++eax35;
            *(_DWORD *)(this->ambientTarget + 4 * eax35 - 4) = v122[1][eax35 - 1];
          }
          while ( eax35 < this->red );
        }
      }
    }
    else
    {
      this->ambientTarget = 0;
      *(_BYTE *)(this + 13565) = 0;
    }
    IntList = v122;
  }
  this->blue = IntList[4];
  this->ground = IntList[5];
  v33 = IntList[6];
  v32 = (CCINIClass *)Block;
  this->level = v33;
  *(_DWORD *)Destination = &vt_VectorClass_int;
  if ( v32 && v127 )
    __3_YAXPAX_Z(v32);
  this->storedTiberium_growth_enabled = INIClass::ReadBool_Overwrite(
                               (int)aP1,
                               (unsigned __int8 *)&g_INI_Key_Lighting.sectionHead[1],
                               (CCINIClass *)&stru_830620[55848],
                               this->storedTiberium_growth_enabled);
  Bool_Overwrite = INIClass::ReadBool_Overwrite(
                     (int)aP1,
                     (unsigned __int8 *)&g_INI_Key_Lighting.sectionHead[1],
                     (CCINIClass *)&stru_830620[55828],
                     this->veinGrowthEnabled);
  LOBYTE(aP3[1]) = this->iceGrowthEnabled;
  aP3[0] = (INIClass *)&stru_830620[55808];
  v117 = (INIClass *)&g_INI_Key_Lighting.sectionHead[1];
  this->veinGrowthEnabled = Bool_Overwrite;
  this->iceGrowthEnabled = INIClass::ReadBool_Overwrite(
                               (int)aP1,
                               (unsigned __int8 *)v117,
                               (CCINIClass *)aP3[0],
                               (char)aP3[1]);
  char v36; // al
  v36 = INIClass::ReadBool_Overwrite(
          (int)aP1,
          (unsigned __int8 *)&g_INI_Key_Lighting.sectionHead[1],
          (CCINIClass *)&stru_830620[55780],
          this->storedTiberium_death_to_visceroid);
  bool v37 = this->freeRadar;
  this->storedTiberium_death_to_visceroid = v36;
  char v38; // al
  v38 = INIClass::ReadBool_Overwrite(
          (int)aP1,
          (unsigned __int8 *)&g_INI_Key_Lighting.sectionHead[1],
          (CCINIClass *)&stru_830620[55768],
          v37);
  aP3[1] = this->altHomeCell;
  aP3[0] = (INIClass *)&stru_830620[55756];
  v117 = (INIClass *)&g_INI_Key_Lighting.sectionHead[1];
  this->freeRadar = v38;
  this->altHomeCell = INIClass::ReadInt_Overwrite((int)aP1, (unsigned __int8 *)v117, (CCINIClass *)aP3[0], aP3[1]);
  Int_Overwrite = INIClass::ReadInt_Overwrite(
                    (int)aP1,
                    (unsigned __int8 *)&g_INI_Key_Lighting.sectionHead[1],
                    (CCINIClass *)&stru_830620[55744],
                    this->uniqueId);
  LOBYTE(aP3[1]) = 0;
  aP3[0] = (INIClass *)&stru_830620[55736];
  v117 = (INIClass *)&g_INI_Key_Lighting.sectionHead[1];
  this->uniqueId = Int_Overwrite;
  INIClass::ReadBool_Overwrite((int)aP1, (unsigned __int8 *)v117, (CCINIClass *)aP3[0], (char)aP3[1]);
  int v40 = this->dropshipUnitCounts - this->blue;
  v122 = 0;
  if ( v40 > 0 )
  {
  int v45; // ecx
    do
    {
      int v41 = this->red;
      if ( this->blue < v41
        || (*(_BYTE *)(this + 13565) || !v41)
  int v42; // eax
        && (v42 = this->ground, v42 > 0)
        && ((unsigned __int8 (__thiscall *)(int, int, _DWORD))(*v20)[2])(this + 13552, v41 + v42, 0) )
      {
        int v43 = this->blue;
        int v44 = this->ambientTarget;
        this->blue = v43 + 1;
        *(_DWORD *)(v44 + 4 * v43) = -1;
      }
      v45 = this->dropshipUnitCounts - this->blue;
      v122 = (void ***)((char *)v122 + 1);
    }
    while ( (int)v122 < v45 );
  }
  int v46 = this->blue;
  v122 = 0;
  if ( v46 > 0 )
  {
  int v51; // ecx
    do
    {
      int v47 = this->ionGreen;
      if ( this->ionGround < v47
        || (*(_BYTE *)(this + 13593) || !v47)
  int v48; // eax
        && (v48 = this->ionLevel, v48 > 0)
        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(this->ionAmbient + 8))(
             this + 13580,
             v47 + v48,
             0) )
      {
        int v49 = this->ionGround;
        int v50 = this->ionRed;
        this->ionGround = v49 + 1;
        *(_DWORD *)(v50 + 4 * v49) = 0;
      }
      v51 = this->blue;
      v122 = (void ***)((char *)v122 + 1);
    }
    while ( (int)v122 < v51 );
  }
  ScenarioClass::ReadLocalVariables((char *)this, aP1);
  Event::Dispatch();
  TimeString = INIClass::ReadTimeString(
                 (int)aP1,
                 (unsigned __int8 *)&stru_830620[55716],
                 (unsigned __int8 *)&stru_830620[55724],
                 this->parTimeEasy);
  v53 = this->parTimeMedium;
  this->parTimeEasy = TimeString;
  int v54; // eax
  v54 = INIClass::ReadTimeString(
          (int)aP1,
          (unsigned __int8 *)&stru_830620[55716],
          (unsigned __int8 *)&stru_830620[55700],
          v53);
  aP3[1] = this->parTimeDifficult;
  aP3[0] = (INIClass *)&stru_830620[55688];
  v117 = (INIClass *)&stru_830620[55716];
  this->parTimeMedium = v54;
  this->parTimeDifficult = INIClass::ReadTimeString(
                                (int)aP1,
                                (unsigned __int8 *)v117,
                                (unsigned __int8 *)aP3[0],
                                (CCINIClass *)aP3[1]);
  INIClass::GetString(
    (unsigned __int8 ***)aP1,
    (INIClass *)&stru_830620[55716],
    (unsigned __int8 *)&stru_830620[55652],
    (INIClass *)&stru_830620[55668],
    (INIClass *)(this + 13744),
    31);
  INIClass::GetString(
    (unsigned __int8 ***)aP1,
    (INIClass *)&stru_830620[55716],
    (unsigned __int8 *)&stru_830620[55612],
    (INIClass *)&stru_830620[55628],
    (INIClass *)(this + 13775),
    31);
  INIClass::GetString(
    (unsigned __int8 ***)aP1,
    (INIClass *)&stru_830620[55716],
    (unsigned __int8 *)&stru_830620[55576],
    (INIClass *)&stru_830620[55592],
    (INIClass *)(this + 13806),
    31);
  INIClass::GetString(
    (unsigned __int8 ***)aP1,
    (INIClass *)&stru_830620[55716],
    (unsigned __int8 *)&stru_830620[55536],
    (INIClass *)&stru_830620[55552],
    (INIClass *)(this + 13837),
    31);
  *(double *)aP3 = (double)this->nukeRed * 0.01;
  double v55; // st7
  v55 = INIClass::ReadDouble_Overwrite(
          (int)aP1,
          (INIClass *)&g_INI_Key_Lighting,
          (unsigned __int8 *)&g_INI_Key_Lighting.headNode[2],
          aP3[0]);
  int v56 = Math::RoundToInt(v55 * 100.0 + 0.01);
  double v57 = (double)this->nukeGround;
  this->nukeRed = v56;
  this->nukeGreen = v56;
  this->nukeBlue = v56;
  *(double *)aP3 = v57 * 0.01;
  double v58; // st7
  v58 = INIClass::ReadDouble_Overwrite(
          (int)aP1,
          (INIClass *)&g_INI_Key_Lighting,
          (unsigned __int8 *)DataGlobal_820538,
          aP3[0]);
  int v59 = Math::RoundToInt(v58 * 100.0 + 0.01);
  double v60 = (double)this->nukeLevel;
  this->nukeGround = v59;
  *(double *)aP3 = v60 * 0.01;
  double v61; // st7
  v61 = INIClass::ReadDouble_Overwrite(
          (int)aP1,
          (INIClass *)&g_INI_Key_Lighting,
          (unsigned __int8 *)g_INI_Key_Green,
          aP3[0]);
  int v62 = Math::RoundToInt(v61 * 100.0 + 0.01);
  double v63 = (double)this->nukeAmbientChangeRate;
  this->nukeLevel = v62;
  *(double *)aP3 = v63 * 0.01;
  double v64; // st7
  v64 = INIClass::ReadDouble_Overwrite(
          (int)aP1,
          (INIClass *)&g_INI_Key_Lighting,
          (unsigned __int8 *)g_INI_Key_Blue,
          aP3[0]);
  int v65 = Math::RoundToInt(v64 * 100.0 + 0.01);
  double v66 = (double)this->dominatorAmbient;
  this->nukeAmbientChangeRate = v65;
  *(double *)aP3 = v66 * 0.001;
  double v67; // st7
  v67 = INIClass::ReadDouble_Overwrite(
          (int)aP1,
          (INIClass *)&g_INI_Key_Lighting,
          (unsigned __int8 *)g_INI_Key_Ground,
          aP3[0]);
  int v68 = Math::RoundToInt(v67 * 1000.0 + 0.01);
  double v69 = (double)this->dominatorRed;
  this->dominatorAmbient = v68;
  *(double *)aP3 = v69 * 0.001;
  double v70 = INIClass::ReadDouble_Overwrite((int)aP1, (INIClass *)&g_INI_Key_Lighting, (unsigned __int8 *)&aLevel, aP3[0]);
  int v71 = Math::RoundToInt(v70 * 1000.0 + 0.01);
  double v72 = (double)this->dominatorGreen;
  this->dominatorRed = v71;
  *(double *)aP3 = v72 * 0.01;
  double v73; // st7
  v73 = INIClass::ReadDouble_Overwrite(
          (int)aP1,
          (INIClass *)&g_INI_Key_Lighting,
          (unsigned __int8 *)g_INI_Key_IonAmbient,
          aP3[0]);
  int v74 = Math::RoundToInt(v73 * 100.0 + 0.01);
  double v75 = (double)this->dominatorBlue;
  this->dominatorGreen = v74;
  *(double *)aP3 = v75 * 0.01;
  double v76; // st7
  v76 = INIClass::ReadDouble_Overwrite(
          (int)aP1,
          (INIClass *)&g_INI_Key_Lighting,
          (unsigned __int8 *)g_INI_Key_IonRed,
          aP3[0]);
  int v77 = Math::RoundToInt(v76 * 100.0 + 0.01);
  double v78 = (double)this->dominatorGround;
  this->dominatorBlue = v77;
  *(double *)aP3 = v78 * 0.01;
  double v79; // st7
  v79 = INIClass::ReadDouble_Overwrite(
          (int)aP1,
          (INIClass *)&g_INI_Key_Lighting,
          (unsigned __int8 *)g_INI_Key_IonGreen,
          aP3[0]);
  int v80 = Math::RoundToInt(v79 * 100.0 + 0.01);
  double v81 = (double)this->dominatorLevel;
  this->dominatorGround = v80;
  *(double *)aP3 = v81 * 0.01;
  double v82; // st7
  v82 = INIClass::ReadDouble_Overwrite(
          (int)aP1,
          (INIClass *)&g_INI_Key_Lighting,
          (unsigned __int8 *)g_INI_Key_IonBlue,
          aP3[0]);
  int v83 = Math::RoundToInt(v82 * 100.0 + 0.01);
  double v84 = (double)this->dominatorAmbientChangeRate;
  this->dominatorLevel = v83;
  *(double *)aP3 = v84 * 0.001;
  double v85; // st7
  v85 = INIClass::ReadDouble_Overwrite(
          (int)aP1,
          (INIClass *)&g_INI_Key_Lighting,
          (unsigned __int8 *)g_INI_Key_IonGround,
          aP3[0]);
  int v86 = Math::RoundToInt(v85 * 1000.0 + 0.01);
  double v87 = (double)this->unknown3598;
  this->dominatorAmbientChangeRate = v86;
  *(double *)aP3 = v87 * 0.001;
  double v88; // st7
  v88 = INIClass::ReadDouble_Overwrite(
          (int)aP1,
          (INIClass *)&g_INI_Key_Lighting,
          (unsigned __int8 *)g_INI_Key_IonLevel,
          aP3[0]);
  int v89 = Math::RoundToInt(v88 * 1000.0 + 0.01);
  double v90 = (double)this->q3578;
  this->unknown3598 = v89;
  *(double *)aP3 = v90;
  double v91; // st7
  v91 = INIClass::ReadDouble_Overwrite(
          (int)aP1,
          (INIClass *)&g_INI_Key_Lighting,
          (unsigned __int8 *)&stru_830620[55512],
          (INIClass *)LODWORD(v90));
  int v92 = Math::RoundToInt(v91);
  double v93 = (double)this->q357C;
  this->q3578 = v92;
  *(double *)aP3 = v93 * 0.01;
  double v94; // st7
  v94 = INIClass::ReadDouble_Overwrite(
          (int)aP1,
          (INIClass *)&g_INI_Key_Lighting,
          (unsigned __int8 *)&stru_830620[55492],
          aP3[0]);
  int v95 = Math::RoundToInt(v94 * 100.0 + 0.01);
  double v96 = (double)this->q3580;
  this->q357C = v95;
  *(double *)aP3 = v96 * 0.01;
  double v97; // st7
  v97 = INIClass::ReadDouble_Overwrite(
          (int)aP1,
          (INIClass *)&g_INI_Key_Lighting,
          (unsigned __int8 *)&stru_830620[55476],
          aP3[0]);
  int v98 = Math::RoundToInt(v97 * 100.0 + 0.01);
  double v99 = (double)this->q3584;
  this->q3580 = v98;
  *(double *)aP3 = v99 * 0.01;
  double v100; // st7
  v100 = INIClass::ReadDouble_Overwrite(
           (int)aP1,
           (INIClass *)&g_INI_Key_Lighting,
           (unsigned __int8 *)&stru_830620[55460],
           aP3[0]);
  int v101 = Math::RoundToInt(v100 * 100.0 + 0.01);
  double v102 = (double)this->q3588;
  this->q3584 = v101;
  *(double *)aP3 = v102 * 0.01;
  double v103; // st7
  v103 = INIClass::ReadDouble_Overwrite(
           (int)aP1,
           (INIClass *)&g_INI_Key_Lighting,
           (unsigned __int8 *)&stru_830620[55444],
           aP3[0]);
  int v104 = Math::RoundToInt(v103 * 100.0 + 0.01);
  double v105 = (double)this->q358C;
  this->q3588 = v104;
  *(double *)aP3 = v105 * 0.001;
  double v106; // st7
  v106 = INIClass::ReadDouble_Overwrite(
           (int)aP1,
           (INIClass *)&g_INI_Key_Lighting,
           (unsigned __int8 *)&stru_830620[55428],
           aP3[0]);
  int v107 = Math::RoundToInt(v106 * 1000.0 + 0.01);
  double v108 = (double)this->q3590;
  this->q358C = v107;
  *(double *)aP3 = v108 * 0.001;
  double v109; // st7
  v109 = INIClass::ReadDouble_Overwrite(
           (int)aP1,
           (INIClass *)&g_INI_Key_Lighting,
           (unsigned __int8 *)&stru_830620[55412],
           aP3[0]);
  int v110 = Math::RoundToInt(v109 * 1000.0 + 0.01);
  double v111 = (double)this->q3594;
  this->q3590 = v110;
  *(double *)aP3 = v111 * 0.001;
  double v112; // st7
  v112 = INIClass::ReadDouble_Overwrite(
           (int)aP1,
           (INIClass *)&g_INI_Key_Lighting,
           (unsigned __int8 *)&stru_830620[55384],
           aP3[0]);
  int v113 = Math::RoundToInt(v112 * 1000.0 + 0.01);
  aP3[1] = (INIClass *)55;
  this->q3594 = v113;
  Multiplayer::ShowProgress(&g_GameMode_Current, (int)aP3[1]->__pad_0);
  Event::Dispatch();
  if ( g_GameMode_Current )
  {
    AssignSessionHouses();
  }
  else
  {
    INIClass::GetString(
      (unsigned __int8 ***)aP1,
      (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
      (unsigned __int8 *)&g_INI_Key_Lighting.sectionCount,
      (INIClass *)&DataGlobal_87F8E4[42624],
      (INIClass *)Destination,
      20);
    int v114 = HouseClass::FindByName(Destination);
    if ( v114 == -1 )
      v114 = 0;
    HouseClass_Player = *(IUnknown **)&HouseClass_Array->__pad_0[4 * v114];
    this->humanPlayerHouseTypeIndex = *(_DWORD *)(HouseClass_Player->field_34 + 184);
  }
  aP3[1] = (INIClass *)58;
  HouseClass_Player->__pad_1D8[20] = 1;
  HouseClass_Player->__pad_1D8[21] = 1;
  *(_DWORD *)&HouseClass_Player->__pad_566C[136] = 0;
  Multiplayer::ShowProgress(&g_GameMode_Current, (int)aP3[1]->__pad_0);
  Event::Dispatch();
  if ( g_NetworkPlayerBuffer[5935] )
    TheatreClass::InitView();
  Multiplayer::ShowProgress(&g_GameMode_Current, 60);
  Event::Dispatch();
  return 1;
}
}
} // namespace gamemd

// 0x5C0E20
namespace gamemd {
char ScenarioClass::initUnits()
{
return 1;
}
} // namespace gamemd

// 0x5C0E30
namespace gamemd {
char ScenarioClass::StubReturnFalse()
{
return 0;
}
} // namespace gamemd

// 0x5C0E40
namespace gamemd {
char ScenarioClass::StubReturnFalse2()
{
return 0;
}
} // namespace gamemd

// 0x5C0E50
namespace gamemd {
char ScenarioClass::StubReturnFalse3(int a1)
{
return 1;
}
} // namespace gamemd

// 0x5C0E60
namespace gamemd {
void ScenarioClass::StubReturnTrue()
{
  ;
}
} // namespace gamemd

// 0x5C0E70
namespace gamemd {
void ScenarioClass::StubReturnTrue2()
{
  ;
}
} // namespace gamemd

// 0x5C0E80
namespace gamemd {
void ScenarioClass::StubReturnFalse4(int a1)
{
  ;
}
} // namespace gamemd

// 0x5C0ED0
namespace gamemd {
char ScenarioClass::StubReturnFalse5(int a1, int a2, int a3)
{
return 1;
}
} // namespace gamemd

// 0x5C0EE0
namespace gamemd {
char ScenarioClass::initTriggers()
{
return 1;
}
} // namespace gamemd

// 0x5C0EF0
namespace gamemd {
void ScenarioClass::StubReturnFalse6(int a1, int a2)
{
  ;
}
} // namespace gamemd

// 0x5C0F00
namespace gamemd {
void ScenarioClass::StubReturnFalse7(int a1)
{
  ;
}
} // namespace gamemd

// 0x5C0F10
namespace gamemd {
void ScenarioClass::StubReturnTrue3()
{
  ;
}
} // namespace gamemd

// 0x5C0F20
namespace gamemd {
void ScenarioClass::StubReturnTrue4()
{
  ;
}
} // namespace gamemd

// 0x5C0F30
namespace gamemd {
int ScenarioClass::initTeams()
{
return -1;
}
} // namespace gamemd

// 0x5C0F40
namespace gamemd {
void ScenarioClass::StubReturnTrue5()
{
  ;
}
} // namespace gamemd

// 0x5C0F50
namespace gamemd {
void ScenarioClass::StubReturnFalse8(int a1)
{
  ;
}
} // namespace gamemd

// 0x5C0F60
namespace gamemd {
void ScenarioClass::StubReturnFalse9(int a1)
{
  ;
}
} // namespace gamemd

// 0x5C0F70
namespace gamemd {
char ScenarioClass::StubReturnFalse10()
{
return 0;
}
} // namespace gamemd

// 0x5C0F80
namespace gamemd {
void ScenarioClass::StubReturnTrue6()
{
  ;
}
} // namespace gamemd

// 0x5C0F90
namespace gamemd {
void ScenarioClass::StubReturnTrue7()
{
  ;
}
} // namespace gamemd

// 0x5C0FC0
namespace gamemd {
int ScenarioClass::StubReturnFalse11()
{
return 0;
}
} // namespace gamemd

// 0x5C0FD0
namespace gamemd {
char ScenarioClass::initWaypoints()
{
return 1;
}
} // namespace gamemd

// 0x5C5E30
namespace gamemd {
char ScenarioClass::processTriggerEvents()
{
return 1;
}
} // namespace gamemd

// 0x5CA7F0
namespace gamemd {
int ScenarioClass_ClearFlag_0()
{
  return ScenarioClass::ClearFlag();
}
}
// 0x5CEB60
namespace gamemd {
MSAnim * ScenarioClass::checkWinningConditions(char a2)
{
{
    *(void**)this = &vt_MSAnim;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (MSAnim *)this;
}
}
} // namespace gamemd

// 0x5D5DB0
namespace gamemd {
int ScenarioClass::MissionStubReturnZero()
{
return -2;
}
} // namespace gamemd

// 0x5D6310
namespace gamemd {
char ScenarioClass::MissionStubReturnZero2(MPCooperative * aP0)
{
return 1;
}
} // namespace gamemd

// 0x5D6320
namespace gamemd {
char ScenarioClass::saveGame()
{
return 1;
}
} // namespace gamemd

// 0x5D6330
namespace gamemd {
char ScenarioClass::loadGame()
{
return 1;
}
} // namespace gamemd

// 0x5D6340
namespace gamemd {
char ScenarioClass::createStartingForces()
{
return 1;
}
} // namespace gamemd

// 0x5D6790
namespace gamemd {
char ScenarioClass::ClearFlag()
{
{
    int v0;
    v0 = *(int *)g_ScenarioClass_Instance;
    BYTE1(v0) = BYTE1(*(int *)g_ScenarioClass_Instance) & 0xFB;
    *(int *)g_ScenarioClass_Instance = v0;
    return 1;
}
}
} // namespace gamemd

// 0x5D67A0
namespace gamemd {
char ScenarioClass::MissionStubReturnZero4(int a1)
{
return 1;
}
} // namespace gamemd

// 0x5D7570
namespace gamemd {
char ScenarioClass::processAI()
{
return 1;
}
} // namespace gamemd

// 0x5D80B0
namespace gamemd {
void ScenarioClass::sub_5D80B0()
{
{
    void *v2;
    v2 = *(void **)(this + 4);
    this->Count = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = 0;
  }
    this->IsAllocated = 0;
    this->Capacity = 0;
}
}
} // namespace gamemd

// 0x6B8AE0
namespace gamemd {
unsigned int ScenarioClass::ResetIntroFlags()
{
{
    unsigned int result;
    result = *(void**)this & 0xFFF80000 | 0x8088;
    *(void**)this = result;
    return result;
}
}
} // namespace gamemd
