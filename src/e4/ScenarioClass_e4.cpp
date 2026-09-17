// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x58BB30
namespace gamemd {
void * ScenarioClass::CopyStartPositions()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void *ScenarioClass_CopyStartPositions()
{
  void *result; // eax
  _DWORD *v1; // ebx
  int v2; // edi
  int v3; // eax
  int *v4; // esi
  int v5; // ecx
  int v6; // edx
  int v7; // esi

  result = MEMORY[0xA8B230]; /*0x58bb31*/
  if ( MEMORY[0xA8B230] ) /*0x58bb38*/
  {
    *((_DWORD *)MEMORY[0xA8B230] + 1103) = dword_ABED0C; /*0x58bb45*/
    v1 = MEMORY[0xA8B230]; /*0x58bb4b*/
    v2 = 0; /*0x58bb52*/
    if ( *((int *)MEMORY[0xA8B230] + 1103) > 0 ) /*0x58bb5c*/
    {
      v3 = 1104; /*0x58bb60*/
      v4 = &dword_ABE328 - 1104; /*0x58bb6a*/
      v5 = 1136; /*0x58bb71*/
      while ( 1 ) /*0x58bb8b*/
      {
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
        *(_DWORD *)((char *)MEMORY[0xA8B230] + v3 * 4 + 4) = v7; /*0x58bbaf*/
        v3 += 2; /*0x58bbbd*/
        *(_DWORD *)((char *)MEMORY[0xA8B230] + v5 * 4 - 4) = dword_ABE304[v5 - 1137]; /*0x58bbc0*/
        v1 = MEMORY[0xA8B230]; /*0x58bbc4*/
        if ( v2 >= *((_DWORD *)MEMORY[0xA8B230] + 1103) ) /*0x58bbd0*/
          break; /*0x58bbd0*/
        v4 = &dword_ABE328 - 1104; /*0x58bb82*/
      }
    }
    v1[1099] = dword_ABDFD4; /*0x58bbda*/
    *((_DWORD *)MEMORY[0xA8B230] + 1100) = dword_ABDFD0; /*0x58bbed*/
    *((_DWORD *)MEMORY[0xA8B230] + 1101) = dword_ABEC90; /*0x58bbfe*/
    result = (void *)dword_ABECD0; /*0x58bc0a*/
    *((_DWORD *)MEMORY[0xA8B230] + 1102) = dword_ABECD0; /*0x58bc0f*/
  }
  return result; /*0x58bc16*/
}
}
} // namespace gamemd

// 0x5CC330
namespace gamemd {
int ScenarioClass_AnimateConstructionStage()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __userpurge ScenarioClass::sub_5CC330@<al>(int a1@<ecx>, int a2@<ebp>, int a3, _DWORD *a4)
{
  signed int v5; // edi
  signed int v6; // eax
  int v7; // edi
  unsigned int v8; // eax
  _DWORD *FoundationSize; // eax
  _DWORD *v10; // ebx
  _DWORD *v11; // ecx
  int v12; // ecx
  unsigned int v13; // edx
  int v14; // ecx
  int v15; // edx
  int *v16; // eax
  int v17; // ecx
  int v18; // eax
  int i; // ebp
  int v20; // ecx
  unsigned int v21; // eax
  int v22; // eax
  int *v23; // eax
  _DWORD *v25; // eax
  int v26; // [esp-Ch] [ebp-54h]
  int v27; // [esp-8h] [ebp-50h]
  int v28; // [esp+28h] [ebp-20h] BYREF
  int v29; // [esp+2Ch] [ebp-1Ch]
  int v30; // [esp+30h] [ebp-18h]
  int v31; // [esp+38h] [ebp-10h] BYREF
  char v32[12]; // [esp+3Ch] [ebp-Ch] BYREF

  if ( *(_BYTE *)(a1 + 12) != 1 ) /*0x5cc33b*/
    goto LABEL_19; /*0x5cc33b*/
  v5 = *(_DWORD *)(a1 + 24); /*0x5cc344*/
  if ( *(_DWORD *)(a1 + 16) != -1 ) /*0x5cc34a*/
  {
    v6 = Timer::GetTicks() - *(_DWORD *)(a1 + 16); /*0x5cc354*/
    if ( v6 >= v5 ) /*0x5cc359*/
      goto LABEL_6; /*0x5cc359*/
    v5 -= v6; /*0x5cc35b*/
  }
  if ( v5 ) /*0x5cc35f*/
  {
LABEL_19:
    v25 = a4; /*0x5cc526*/
    *a4 = 0; /*0x5cc52c*/
    v25[1] = 0; /*0x5cc52e*/
    v25[2] = 0; /*0x5cc531*/
    v25[3] = 0; /*0x5cc534*/
    return 0; /*0x5cc534*/
  }
LABEL_6:
  v7 = *(_DWORD *)(a1 + 36); /*0x5cc365*/
  *(_DWORD *)(a1 + 16) = Timer::GetTicks(); /*0x5cc371*/
  *(_DWORD *)(a1 + 20) = v29; /*0x5cc378*/
  v8 = *(_DWORD *)(a1 + 64); /*0x5cc37b*/
  *(_DWORD *)(a1 + 24) = v7; /*0x5cc381*/
  if ( v8 >= 4 ) /*0x5cc384*/
    return 0; /*0x5cc538*/
  FoundationSize = Building::GetFoundationSize(&v28, *(_DWORD *)(a1 + 40)); /*0x5cc398*/
  v10 = a4; /*0x5cc39d*/
  v11 = a4; /*0x5cc3a3*/
  *a4 = *FoundationSize; /*0x5cc3a5*/
  v11[1] = FoundationSize[1]; /*0x5cc3aa*/
  v11[2] = FoundationSize[2]; /*0x5cc3b0*/
  v11[3] = FoundationSize[3]; /*0x5cc3b6*/
  v12 = v10[1]; /*0x5cc3c0*/
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
    MEMORY[0x887310],
    v10,
    0,
    1,
    a2);
  v13 = *(_DWORD *)(a1 + 64); /*0x5cc41c*/
  if ( v13 >= 3 ) /*0x5cc41e*/
    v13 = 3; /*0x5cc420*/
  v14 = *(_DWORD *)(a1 + 56) | dword_830078[v13]; /*0x5cc443*/
  v15 = *(_DWORD *)a3; /*0x5cc445*/
  v29 = *(_DWORD *)(a1 + 4); /*0x5cc447*/
  v26 = v14; /*0x5cc452*/
  v30 = *(_DWORD *)(a1 + 8); /*0x5cc456*/
  v16 = (int *)(*(int (__thiscall **)(int))(v15 + 120))(a3); /*0x5cc45a*/
  DrawToSurfaceSHP( /*0x5cc470*/
    a3,
    *(_DWORD *)(a1 + 32),
    *(_DWORD *)(a1 + 28),
    *(_DWORD *)(a1 + 40),
    &v28,
    v16,
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
  v17 = *(_DWORD *)(a1 + 68); /*0x5cc475*/
  if ( v17 ) /*0x5cc47a*/
  {
    a4 = (_DWORD *)a1; /*0x5cc47c*/
    a4 = (_DWORD *)(*(int (__thiscall **)(int, _DWORD **))(*(_DWORD *)v17 + 16))(v17, &a4); /*0x5cc48a*/
    v18 = *(_DWORD *)(a1 + 68); /*0x5cc48e*/
    for ( i = 0; i < *(_DWORD *)(v18 + 16); ++i ) /*0x5cc498*/
    {
      if ( (_DWORD *)i != a4 ) /*0x5cc49e*/
      {
        v20 = *(_DWORD *)(*(_DWORD *)(v18 + 4) + 4 * i); /*0x5cc4a5*/
        (*(void (__thiscall **)(int, int, _DWORD *))(*(_DWORD *)v20 + 20))(v20, a3, v10); /*0x5cc4aa*/
      }
      v18 = *(_DWORD *)(a1 + 68); /*0x5cc4ad*/
    }
  }
  v21 = *(_DWORD *)(a1 + 64) + 1; /*0x5cc4bc*/
  *(_DWORD *)(a1 + 64) = v21; /*0x5cc4be*/
  if ( v21 >= 4 ) /*0x5cc4c4*/
  {
    v22 = *(_DWORD *)(a1 + 56); /*0x5cc4cf*/
    v28 = *(_DWORD *)(a1 + 4); /*0x5cc4db*/
    BYTE1(v22) |= 4u; /*0x5cc4e3*/
    v27 = v22; /*0x5cc4e7*/
    v29 = *(_DWORD *)(a1 + 8); /*0x5cc4e8*/
    v23 = (int *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)a3 + 120))(a3, &v31); /*0x5cc4f5*/
    DrawToSurfaceSHP( /*0x5cc50f*/
      MEMORY[0x887310],
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
int ScenarioClass_dispatchEvents()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// Microsoft VisualC 2-14/net runtime
int ScenarioClass::dispatchEvents()
{
  return Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 9); /*0x69b684*/
}
}
} // namespace gamemd

// 0x5D6440
namespace gamemd {
int ScenarioClass::MissionStubReturnZero3()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall ScenarioClass::_vt28(void *this)
{
  return (*(int (__thiscall **)(void *))(*(_DWORD *)this + 108))(this);
}
}
} // namespace gamemd

// 0x5D6BE0
namespace gamemd {
char ScenarioClass::AssignStartPositions(char a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __stdcall ScenarioClass_AssignStartPositions(char a1)
{
  int i; // edi
  _DWORD *v2; // ecx
  int v3; // esi
  void **v5; // [esp+4h] [ebp-18h] BYREF
  void *Block; // [esp+8h] [ebp-14h]
  char v7; // [esp+11h] [ebp-Bh]

  Multiplayer::FindStartPositions(&v5); /*0x5d6bec*/
  for ( i = 0; i < HouseClass_Count; ++i ) /*0x5d6bfa*/
  {
    v2 = (_DWORD *)*((_DWORD *)HouseClass_Array + i); /*0x5d6c02*/
    if ( !*(_BYTE *)(v2[13] + 422) ) /*0x5d6c08*/
    {
      v3 = v2[22550]; /*0x5d6c12*/
      if ( v3 != -2 ) /*0x5d6c1b*/
      {
        HouseClass::SetMapSeed(v2, *((_DWORD *)Block + v3)); /*0x5d6c25*/
        *((_DWORD *)MEMORY[0xA8B230] + v3 + 1120) = i; /*0x5d6c2f*/
      }
    }
  }
  v5 = &vt_VectorClass_Cell; /*0x5d6c45*/
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
int __thiscall ScenarioClass::Constructor(int this)
{
  wchar_t *v2; // eax
  wchar_t *v3; // ecx
  wchar_t *v4; // eax
  wchar_t *v5; // edx
  _DWORD *v6; // eax
  int v7; // ecx
  int v8; // esi
  _BYTE *v9; // edi
  int v10; // esi
  _BYTE *v11; // edi

  SeedInitRNG((_DWORD *)(this + 536), 0); /*0x6832cf*/
  *(_DWORD *)(this + 1556) = Timer::GetTicks(); /*0x6832e5*/
  this->pauseTimer = 0; /*0x6832eb*/
  *(_DWORD *)(this + 1568) = Timer::GetTicks(); /*0x6832f6*/
  *(_DWORD *)(this + 1576) = 0; /*0x6832fc*/
  v2 = MEMORY[0xA8ED84]; /*0x683302*/
  *(_DWORD *)(this + 4592) = 0; /*0x683307*/
  this->missionTimer = v2; /*0x68330d*/
  *(_BYTE *)(this + 4600) = 0; /*0x683313*/
  v3 = MEMORY[0xA8ED84]; /*0x683319*/
  *(_DWORD *)(this + 4640) = 0; /*0x68331f*/
  this->shroudRegrowTimer = v3; /*0x683325*/
  this->fogTimer = MEMORY[0xA8ED84]; /*0x683331*/
  *(_DWORD *)(this + 4652) = 0; /*0x683337*/
  v4 = MEMORY[0xA8ED84]; /*0x68333d*/
  *(_DWORD *)(this + 4664) = 0; /*0x683342*/
  this->iceTimer = v4; /*0x683348*/
  this->ScenarioClass_field_timer_123c = MEMORY[0xA8ED84]; /*0x683354*/
  *(_DWORD *)(this + 4676) = 0; /*0x68335a*/
  v5 = MEMORY[0xA8ED84]; /*0x683360*/
  *(_DWORD *)(this + 4688) = 0; /*0x683366*/
  this->ambientTimer = v5; /*0x68336c*/
  this->ScenarioClass_field_timer_34C0 = MEMORY[0xA8ED84]; /*0x683381*/
  *(_DWORD *)(this + 13512) = 0; /*0x683387*/
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
  *(_BYTE *)(this + 13720) = 0; /*0x6833e2*/
  this->isRandom = 0; /*0x6833e8*/
  ScenarioClass::ResetIntroFlags(this); /*0x6833ee*/
  this->techLevel = 1; /*0x6833f3*/
  this->campaignIndex = -1; /*0x6833fd*/
  *(_BYTE *)(this + 4) = 0; /*0x683407*/
  *(_BYTE *)(this + 264) = 0; /*0x68340a*/
  v6 = (_DWORD *)(this + 1586); /*0x683410*/
  v7 = 702; /*0x683416*/
  do /*0x683427*/
  {
    *v6++ = dword_B05458; /*0x683421*/
    --v7; /*0x683426*/
  }
  while ( v7 ); /*0x683427*/
  wcscpy((wchar_t *)(this + 4960), &MEMORY[0x887734]); /*0x683435*/
  wcscpy((wchar_t *)(this + 5082), &MEMORY[0x887734]); /*0x683446*/
  strcpy((char *)(this + 4700), &MEMORY[0x889F64]); /*0x683475*/
  strcpy((char *)(this + 7248), &MEMORY[0x889F64]); /*0x68349d*/
  strcpy((char *)(this + 5050), &MEMORY[0x889F64]); /*0x6834bf*/
  wcscpy((wchar_t *)(this + 5200), &MEMORY[0x887734]); /*0x6834cf*/
  v8 = 0; /*0x6834d7*/
  v9 = (_BYTE *)(this + 7344); /*0x6834d9*/
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
  v10 = 0; /*0x683504*/
  v11 = (_BYTE *)(this + 9394); /*0x683506*/
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
char ScenarioClass::LoadScenarioAndStart(AnimClass * Source, char a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall ScenarioClass::LoadScenarioAndStart(AnimClass *Source, char a2, int a3)
{
  AnimClass *v3; // ebp
  int v4; // eax
  int Field; // ecx
  int *v6; // esi
  int v7; // eax
  int v8; // edi
  Movie *Bool; // esi
  int v10; // eax
  int v12; // eax
  Frame *v13; // ecx
  DWORD *v14; // esi
  void *v16[3]; // [esp+1Ch] [ebp-E0h] BYREF
  _DWORD v17[10]; // [esp+28h] [ebp-D4h] BYREF
  char v18; // [esp+50h] [ebp-ACh]
  int v19; // [esp+54h] [ebp-A8h]
  int v20; // [esp+58h] [ebp-A4h]
  char v21; // [esp+5Ch] [ebp-A0h]
  _DWORD v22[22]; // [esp+74h] [ebp-88h] BYREF
  _BYTE v23[12]; // [esp+CCh] [ebp-30h] BYREF
  int v24; // [esp+D8h] [ebp-24h]
  CHAR v25[28]; // [esp+E0h] [ebp-1Ch] BYREF

  v3 = Source; /*0x683ab8*/
  if ( (!Source || !strlen(Source->field_0)) && a3 != -1 ) /*0x683ade*/
  {
    if ( MEMORY[0xA8EA70].__pad_2EC[1] == 1 ) /*0x683ae7*/
      v3 = (AnimClass *)&MEMORY[0xA83E48]; /*0x683ae9*/
    else
      v3 = (AnimClass *)(*((_DWORD *)g_CampaignTypeArray + a3) + 156); /*0x683af8*/
  }
  *((_DWORD *)MEMORY[0xA8B230] + 3379) = a3; /*0x683b0a*/
  Debug::Log(); /*0x683b10*/
  Debug::Log(); /*0x683b21*/
  strcpy((char *)MEMORY[0xA8B230] + 4700, v3->field_0); /*0x683b47*/
  _strupr((char *)MEMORY[0xA8B230] + 4700); /*0x683b5d*/
  SetSoundWarning(-1); /*0x683b68*/
  if ( !MEMORY[0xA8B238][0] ) /*0x683b73*/
  {
    v4 = *((_DWORD *)MEMORY[0xA8B230] + 3379); /*0x683b7b*/
    if ( v4 == -1 ) /*0x683b84*/
      goto LABEL_14; /*0x683b84*/
    Field = *(_DWORD *)(*((_DWORD *)g_CampaignTypeArray + v4) + 152); /*0x683b8f*/
    goto LABEL_13; /*0x683b95*/
  }
  if ( MEMORY[0xA8B254] != -1 ) /*0x683b9f*/
  {
    v6 = *(int **)(MEMORY[0xA8B8CC] + 4 * MEMORY[0xA8B254]); /*0x683ba7*/
    v7 = Game::CheckForGameCD((void *)0x3C); /*0x683baf*/
    if ( !ScenarioClass::CheckExists(v6, v7) ) /*0x683bb7*/
    {
      Field = GameOption::GetField((_DWORD **)v6); /*0x683bc7*/
LABEL_13:
      SetSoundWarning(Field); /*0x683bc9*/
    }
  }
LABEL_14:
  v8 = ++MEMORY[0xA8DAB4]; /*0x683bce*/
  if ( !(unsigned __int8)CD::`vftable'(dword_81C1D0) ) /*0x683bf6*/
  {
LABEL_21:
    if ( MEMORY[0xA8B238][0] == 4 ) /*0x683d3c*/
      ChatMessageWOL(0, &MEMORY[0x887734]); /*0x683d45*/
    return 0; /*0x683d56*/
  }
  --MEMORY[0xA8DAB4]; /*0x683c03*/
  (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 12))(MEMORY[0x887640]); /*0x683c11*/
  v16[1] = 0; /*0x683c18*/
  v16[2] = 0; /*0x683c1c*/
  GenericList::Constructor(v17); /*0x683c20*/
  v17[0] = &vt_List_INIClass_INISection; /*0x683c29*/
  memset(&v17[7], 0, 12); /*0x683c32*/
  v18 = 0; /*0x683c3e*/
  v19 = 0; /*0x683c42*/
  v20 = 0; /*0x683c46*/
  v21 = 0; /*0x683c4a*/
  v16[0] = &CCINIClass_Vtable; /*0x683c4e*/
  CCFileClass::Construct(v22, v3->field_0); /*0x683c56*/
  if ( CCINIClass::Load(v16, (int)v22, 1, 0) ) /*0x683c67*/
  {
    Bool = (Movie *)INIClass::GetBool( /*0x683c85*/
                      (unsigned __int8 ***)v16,
                      (unsigned __int8 *)MEMORY[0x82BF9C],
                      (unsigned __int8 *)g_INI_Key_Intro,
                      -1);
    if ( Bool != (Movie *)-1 /*0x683ca5*/
      || (Bool = (Movie *)INIClass::GetBool(
                            (unsigned __int8 ***)v16,
                            (unsigned __int8 *)MEMORY[0x82BF9C],
                            (unsigned __int8 *)MEMORY[0x83D8A8],
                            -1),
          Bool != (Movie *)-1) )
    {
      Theme::Stop(&g_BuildingTypeClass_Count, 0); /*0x683cad*/
      Movie::PlayWrapper((int)Bool, (int)v3, v8, 1, 1, 1); /*0x683cbd*/
    }
  }
  v22[0] = &vt_CCFileClass; /*0x683cc9*/
  v24 = 0; /*0x683cd1*/
  Vector::Clear((int)v23); /*0x683cd8*/
  v22[0] = &off_7E1668; /*0x683ce1*/
  BufferIOFileClass::Dtor(v22); /*0x683ce9*/
  HashTable::DestroyHashTableINIClass(v16); /*0x683cf2*/
  Debug::Log(); /*0x683cfd*/
  v10 = StringList::Find(&g_BuildingTypeClass_Count, aLoading); /*0x683d0f*/
  ThemeClass::Play(&g_BuildingTypeClass_Count, v10); /*0x683d1a*/
  if ( !Scenario::LoadWithProgress(v3) ) /*0x683d21*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 16))(MEMORY[0x887640]); /*0x683d32*/
    goto LABEL_21; /*0x683d32*/
  }
  v12 = *((_DWORD *)MEMORY[0xA8B230] + 1294); /*0x683d5e*/
  if ( v12 != -1 ) /*0x683d67*/
    wsprintfA(v25, MEMORY[0x83D888], *((const char **)MEMORY[0xABF394] + v12)); /*0x683d80*/
  if ( *((int *)MEMORY[0xA8B230] + 3380) > 0 ) /*0x683d95*/
    LoadScreen::RenderLoop(); /*0x683d97*/
  if ( a2 ) /*0x683da0*/
    Movie::PlayWrapper(*((_DWORD *)MEMORY[0xA8B230] + 1297), (int)v3, v8, 1, 1, 1); /*0x683db6*/
  if ( MEMORY[0x886FB8] != *(_DWORD *)&MEMORY[0xA8EA70].field_D0[68] /*0x683dd6*/
    || MEMORY[0x886FBC] != *(_DWORD *)&MEMORY[0xA8EA70].field_D0[72] )
  {
    Debug::Log(); /*0x683ddf*/
    ChangeVideoMode(*(unsigned int *)&MEMORY[0xA8EA70].field_D0[68], *(unsigned int *)&MEMORY[0xA8EA70].field_D0[72]); /*0x683df3*/
  }
  LoadingScreen::FreeResources3(); /*0x683df8*/
  AudioOptionsClass::ApplySettings((int)&MEMORY[0xA8EA70].field_D0[32]); /*0x683e02*/
  (*(void (__thiscall **)(IUnknown *, _DWORD))(MEMORY[0x88730C]->field_0 + 24))(MEMORY[0x88730C], 0); /*0x683e10*/
  LOBYTE(v13) = 1; /*0x683e19*/
  Frame::Present(v13, 0); /*0x683e1c*/
  if ( *((_DWORD *)MEMORY[0xA8B230] + 389) == -1 ) /*0x683e35*/
  {
    v14 = (DWORD *)((char *)MEMORY[0xA8B230] + 1556); /*0x683e26*/
    *v14 = Timer::GetTicks(); /*0x683e3f*/
  }
  if ( *((_DWORD *)MEMORY[0xA8B230] + 1820) == -1 ) /*0x683e50*/
    Theme::Stop(&g_BuildingTypeClass_Count, 1); /*0x683e66*/
  else
    Theme::QueueSong((int)&g_BuildingTypeClass_Count, *((_DWORD *)MEMORY[0xA8B230] + 1820)); /*0x683e58*/
  DisableIME(); /*0x683e6b*/
  MEMORY[0xA8EA70].__pad_2EC[0] = 1; /*0x683e75*/
  MEMORY[0xA8E378] = 1; /*0x683e7f*/
  if ( MEMORY[0xA8B238][0] == 4 ) /*0x683e86*/
    ChatMessageWOL(0, &MEMORY[0x887734]); /*0x683e8f*/
  return 1; /*0x683d4a*/
}
}
} // namespace gamemd

// 0x683EB0
namespace gamemd {
int ScenarioClass::CleanupTemporary()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_683EB0()
{
  void *v0; // ecx
  _DWORD *v1; // esi
  DWORD Ticks; // eax
  int v3; // ecx
  DWORD v4; // eax

  sub_406F00(); /*0x683eb1*/
  MEMORY[0x83D834] = sub_4072B0((_DWORD *)MEMORY[0x87E758]); /*0x683ecc*/
  EndBufferMixer((int *)MEMORY[0x87E758], 0x4000); /*0x683ed1*/
  if ( !MEMORY[0xA8B238][0] || MEMORY[0xA8B238][0] == 5 ) /*0x683ee2*/
  {
    if ( *((_DWORD *)MEMORY[0xA8B230] + 389) != -1 ) /*0x683eff*/
      Timer::GetTicks(); /*0x683f04*/
    Debug::Log(); /*0x683f13*/
    v0 = MEMORY[0xA8B230]; /*0x683f18*/
    v1 = (char *)MEMORY[0xA8B230] + 1556; /*0x683f27*/
    if ( *((_DWORD *)MEMORY[0xA8B230] + 389) != -1 ) /*0x683f31*/
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
  if ( MEMORY[0x887368] ) /*0x683f5d*/
    Tooltip::Enable((void *)MEMORY[0x887368], 0); /*0x683f61*/
  Mouse::ReleaseCapture(&MEMORY[0x87F7E8]); /*0x683f6b*/
  Mouse::SetCursor((int)&MEMORY[0x87F7E8], 0, 0); /*0x683f79*/
  (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 12))(MEMORY[0x887640]); /*0x683f86*/
  MapClass::MarkForRedraw(&MEMORY[0x87F7E8], 2); /*0x683f90*/
  TacticalMap::Redraw(&MEMORY[0x87F7E8]); /*0x683f9a*/
  return (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 16))(MEMORY[0x887640]);
}
}
} // namespace gamemd

// 0x684180
namespace gamemd {
unsigned char * ScenarioClass::ProcessIntroTimer()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_BYTE *ScenarioClass_ProcessIntroTimer()
{
  _BYTE *result; // eax

  result = (_BYTE *)*((_DWORD *)MEMORY[0xA8B230] + 395); /*0x684186*/
  if ( result ) /*0x68418e*/
  {
    *((_DWORD *)MEMORY[0xA8B230] + 395) = result - 1; /*0x684195*/
    result = MEMORY[0xA8B230]; /*0x68419b*/
    if ( !*((_DWORD *)MEMORY[0xA8B230] + 395) ) /*0x6841a0*/
    {
      if ( !MEMORY[0xB054CC] ) /*0x6841b6*/
      {
        if ( *((_BYTE *)MEMORY[0xA8B230] + 13730) == 1 ) /*0x6841bf*/
        {
          while ( (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 40))(MEMORY[0x887640]) ) /*0x6841c9*/
            (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 16))(MEMORY[0x887640]); /*0x6841d8*/
          result = MEMORY[0xA8B230]; /*0x6841ea*/
        }
        result[13730] = 0; /*0x6841ef*/
        MEMORY[0xA8ED9C] = 0; /*0x6841fc*/
        Timer::PumpMessages((HWND *)MEMORY[0x87F770]); /*0x684203*/
        result = MEMORY[0xA8B230]; /*0x684208*/
        MEMORY[0xB07784] = 0; /*0x68420d*/
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
int ScenarioClass_Construct()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __usercall sub_686730@<al>(char *Source@<ecx>, double a2@<st0>)
{
  char result; // al
  char v4; // bl
  void *v5[3]; // [esp+10h] [ebp-C4h] BYREF
  void **v6; // [esp+1Ch] [ebp-B8h] BYREF
  _DWORD v7[6]; // [esp+38h] [ebp-9Ch] BYREF
  char v8; // [esp+50h] [ebp-84h]
  _DWORD v9[22]; // [esp+68h] [ebp-6Ch] BYREF
  _BYTE v10[12]; // [esp+C0h] [ebp-14h] BYREF
  int v11; // [esp+CCh] [ebp-8h]

  result = CD::`vftable'(dword_81C1D0); /*0x68674c*/
  if ( result ) /*0x686754*/
  {
    MEMORY[0xA8ED84] = 0; /*0x686765*/
    v5[1] = 0; /*0x68676b*/
    v5[2] = 0; /*0x68676f*/
    GenericList::Constructor(&v6); /*0x686773*/
    v6 = &vt_List_INIClass_INISection; /*0x68677c*/
    Node::Init(v7); /*0x686784*/
    v7[5] = 0; /*0x68678d*/
    v8 = 0; /*0x686792*/
    v5[0] = &CCINIClass_Vtable; /*0x686797*/
    CCFileClass::Construct(v9, Source); /*0x68679f*/
    Debug::Log(); /*0x6867aa*/
    if ( CCINIClass::Load(v5, (int)v9, 1, 0) ) /*0x6867be*/
    {
      strcpy((char *)MEMORY[0xA8B230] + 4700, Source); /*0x686836*/
      v4 = ScenarioClass::LoadMap(0, (int)v5, a2); /*0x686851*/
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
int ScenarioClass_LoadMap()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __usercall ScenarioClass::LoadMap@<al>(char a1@<dl>, CCINIClass *a2@<ecx>, double a3@<st0>)
{
  CCINIClass *v3; // ebp
  int v4; // ecx
  ObjectClass *v5; // eax
  int v6; // ecx
  ObjectClass *v7; // eax
  char Bool_Overwrite; // al
  int Section; // eax
  int v10; // eax
  wchar_t *StringCSF; // eax
  int v12; // eax
  wchar_t *v13; // eax
  wchar_t *v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int i; // eax
  ScenarioClass *v25; // ecx
  int v26; // eax
  int j; // esi
  unsigned int *v28; // eax
  unsigned int *v29; // eax
  _DWORD *Instance; // eax
  int v31; // eax
  int v32; // eax
  char *v33; // ebp
  INIClass *v35; // ebx
  CCINIClass *k; // esi
  INIClass *v37; // edi
  int eax102; // eax
  ScenarioClass *v38; // ebp
  int v39; // ecx
  int campaignIndex; // eax
  int v41; // eax
  int v42; // ebx
  int v43; // eax
  int v44; // eax
  ObjectClass *v47; // eax
  int m; // eax
  void *v48; // ecx
  int v49; // edx
  int v50; // edi
  bool v51; // [esp+12h] [ebp-162h]
  char v53; // [esp+14h] [ebp-160h]
  CCINIClass *v56; // [esp+14h] [ebp-160h]
  unsigned __int8 **var158[3]; // [esp+1Ch] [ebp-158h] BYREF
  void **v57; // [esp+28h] [ebp-14Ch] BYREF
  _DWORD v58[6]; // [esp+44h] [ebp-130h] BYREF
  char v59; // [esp+5Ch] [ebp-118h]
  unsigned int v60; // [esp+74h] [ebp-100h] BYREF
  unsigned int v61; // [esp+78h] [ebp-FCh]
  unsigned int v62; // [esp+7Ch] [ebp-F8h]
  unsigned int v63; // [esp+80h] [ebp-F4h]
  MultiplayerGameMode aP1[3]; // [esp+84h] [ebp-F0h] BYREF
  _DWORD v65[3]; // [esp+DCh] [ebp-98h] BYREF
  ObjectClass *v69; // [esp+E8h] [ebp-8Ch]
  _DWORD v67[4]; // [esp+F0h] [ebp-84h] BYREF
  INIClass Filename; // [esp+100h] [ebp-74h] BYREF
  _BYTE var34[16]; // [esp+140h] [ebp-34h] BYREF
  wchar_t Buffer[18]; // [esp+150h] [ebp-24h] BYREF

  v51 = MEMORY[0xA8B238] == 0;
  v3 = a2;
  ++*(_DWORD *)&MEMORY[0xA8D63C].__pad_1140[48];
  Debug::Log();
  while ( 1 )
  {
    if ( !v51 )
      ResetScenario();
    if ( MEMORY[0xA8B238] )
    {
      MEMORY[0xA8B230]->difficulty2 = (int)MEMORY[0xA8B278];
      MEMORY[0xA8B230]->elapsedTimer[0] = 2 - MEMORY[0xA8B230]->difficulty2;
      v6 = MEMORY[0xA8B230]->nextScenario[0];
      BYTE1(v6) = BYTE1(MEMORY[0xA8B230]->nextScenario[0]) & 0xEF;
      MEMORY[0xA8B230]->nextScenario[0] = v6 | (((unsigned __int8)MEMORY[0xA8B31F] & 1) << 12);
      v7 = *(ObjectClass **)&MEMORY[0xA8D63C].__pad_1258[204];
      BYTE1(v7) = MEMORY[0xA8D63C].__pad_1258[205] & 0xEF;
      *(_DWORD *)&MEMORY[0xA8D63C].__pad_1258[204] = (unsigned int)v7 | (((unsigned __int8)MEMORY[0xA8B31F] & 1) << 12);
    }
    else
    {
      MEMORY[0xA8B230]->difficulty2 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[120];
      MEMORY[0xA8B230]->elapsedTimer[0] = 2 - *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[120];
      v4 = MEMORY[0xA8B230]->nextScenario[0];
      BYTE1(v4) = BYTE1(MEMORY[0xA8B230]->nextScenario[0]) & 0xEF;
      MEMORY[0xA8B230]->nextScenario[0] = v4;
      v5 = *(ObjectClass **)&MEMORY[0xA8D63C].__pad_1258[204];
      BYTE1(v5) = MEMORY[0xA8D63C].__pad_1258[205] & 0xEF;
      *(_DWORD *)&MEMORY[0xA8D63C].__pad_1258[204] = v5;
    }
    *(_DWORD *)&MEMORY[0xA8B230]->__pad_3566[54] = INIClass::ReadInt_Overwrite(
                                                     (int)v3,
                                                     (unsigned __int8 *)&g_INI_Key_Lighting.sectionHead[1],
                                                     (CCINIClass *)&stru_830620.__pad_579C[32428],
                                                     (INIClass *)0x2710);
    Bool_Overwrite = INIClass::ReadBool_Overwrite(
                       (int)v3,
                       (unsigned __int8 *)&g_INI_Key_Lighting.sectionHead[1],
                       (CCINIClass *)&stru_830620.__pad_579C[32416],
                       0);
    var158[1] = 0;
    v53 = Bool_Overwrite;
    var158[2] = 0;
    GenericList::Constructor(&v57);
    v57 = &vt_List_INIClass_INISection;
    Node::Init(v58);
    v58[5] = 0;
    v59 = 0;
    var158[0] = (unsigned __int8 **)&CCINIClass_Vtable;
    CCFileClass::Construct3((int)aP1);
    if ( !MEMORY[0xA8B238] )
    {
      if ( !v51 )
      {
        _splitpath((const char *)MEMORY[0xA8B230]->fileName, 0, 0, Filename.__pad_0, 0);
        strcat(Filename.__pad_0, &stru_830620.__pad_579C[32408]);
        FileClass::SetFileName(aP1, (IUnknown *)&Filename);
        if ( CCFileClass::Open(aP1, 0) )
        {
          CCINIClass::Load(var158, aP1, 0, 0);
          RulesClass::Addition(*(RulesClass **)&MEMORY[0x87F8E4].__pad_5568[9108]);
        }
        CCFileClass::Reset(aP1);
      }
      FileClass::SetFileName(aP1, (IUnknown *)&stru_830620.__pad_579C[14696]);
      if ( CCFileClass::Open(aP1, 0) )
      {
        CCINIClass::Load(var158, aP1, 0, 0);
        *(_WORD *)MEMORY[0xA8B230]->name = 0;
        if ( &MEMORY[0x81784C] == (INIClass *)-8 )
          Section = INIClass::BinarySearchSection((int)var158, (INIClass *)MEMORY[0xA8B230]->fileName);
        else
          Section = HashTableSection::FindSection(
                      (int)var158,
                      (CCINIClass *)MEMORY[0xA8B230]->fileName,
                      (CCINIClass *)&MEMORY[0x81784C].headNode[1]);
        if ( Section )
          INIClass::ParseValue_Wide(
            (char **)var158,
            (unsigned __int8 *)MEMORY[0xA8B230]->fileName,
            (CCINIClass *)&MEMORY[0x81784C].headNode[1],
            (wchar_t *)&MEMORY[0x87F8E4].__pad_5568[10472],
            (CCINIClass *)MEMORY[0xA8B230]->name,
            0x2Du);
        LOWORD(MEMORY[0xA8B230]->briefing[0]) = 0;
        if ( &stru_830620 == (IUnknown *)-37112 )
          v10 = INIClass::BinarySearchSection((int)var158, (INIClass *)MEMORY[0xA8B230]->fileName);
        else
          v10 = HashTableSection::FindSection(
                  (int)var158,
                  (CCINIClass *)MEMORY[0xA8B230]->fileName,
                  (CCINIClass *)&stru_830620.__pad_579C[14684]);
        if ( v10 )
        {
          INIClass::GetString(
            var158,
            (INIClass *)MEMORY[0xA8B230]->fileName,
            (unsigned __int8 *)&stru_830620.__pad_579C[14684],
            (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
            (INIClass *)MEMORY[0xA8B230]->briefingCsf,
            32);
          if ( strlen((const char *)MEMORY[0xA8B230]->briefingCsf) )
          {
            StringCSF = GetStringCSF((wchar_t *)MEMORY[0xA8B230]->briefingCsf, 0, &stru_830620.__pad_579C[31356], 3167);
            wcsncpy((wchar_t *)MEMORY[0xA8B230]->briefing, StringCSF, 0x400u);
            HIWORD(MEMORY[0xA8B230]->briefing[511]) = 0;
          }
        }
        MEMORY[0xA8B230]->uiName[0] = 0;
        if ( &MEMORY[0x81784C] )
          v12 = HashTableSection::FindSection(
                  (int)var158,
                  (CCINIClass *)MEMORY[0xA8B230]->fileName,
                  (CCINIClass *)&MEMORY[0x81784C]);
        else
          v12 = INIClass::BinarySearchSection((int)var158, (INIClass *)MEMORY[0xA8B230]->fileName);
        if ( v12 )
        {
          INIClass::GetString(
            var158,
            (INIClass *)MEMORY[0xA8B230]->fileName,
            (unsigned __int8 *)&MEMORY[0x81784C],
            (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
            (INIClass *)MEMORY[0xA8B230]->uiName,
            32);
          if ( strlen(MEMORY[0xA8B230]->uiName) )
          {
            v13 = GetStringCSF((wchar_t *)MEMORY[0xA8B230]->uiName, 0, &stru_830620.__pad_579C[31356], 3179);
            wcsncpy((wchar_t *)MEMORY[0xA8B230]->name, v13, 0x2Du);
            *(_WORD *)&MEMORY[0xA8B230]->name[88] = 0;
            sprintf((char *const)Buffer, &stru_830620.__pad_579C[32400], MEMORY[0xA8B230]->uiName);
            v14 = GetStringCSF(Buffer, 0, &stru_830620.__pad_579C[31356], 3183);
            wcsncpy((wchar_t *)MEMORY[0xA8B230]->uiNameLoaded, v14, 0x2Du);
            if ( !wcsncmp(
                    (const wchar_t *)MEMORY[0xA8B230]->uiNameLoaded,
                    (const wchar_t *)&stru_830620.__pad_579C[32380],
                    8u) )
              wcsncpy((wchar_t *)MEMORY[0xA8B230]->uiNameLoaded, (const wchar_t *)MEMORY[0xA8B230]->name, 0x2Du);
            *(_WORD *)&MEMORY[0xA8B230]->uiNameLoaded[88] = 0;
          }
        }
        MEMORY[0xA8B230]->lsLoadMessage[0] = 0;
        if ( &stru_830620 == (IUnknown *)-54792 )
          v15 = INIClass::BinarySearchSection((int)var158, (INIClass *)MEMORY[0xA8B230]->fileName);
        else
          v15 = HashTableSection::FindSection(
                  (int)var158,
                  (CCINIClass *)MEMORY[0xA8B230]->fileName,
                  (CCINIClass *)&stru_830620.__pad_579C[32364]);
        if ( v15 )
          INIClass::GetString(
            var158,
            (INIClass *)MEMORY[0xA8B230]->fileName,
            (unsigned __int8 *)&stru_830620.__pad_579C[32364],
            (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
            (INIClass *)MEMORY[0xA8B230]->lsLoadMessage,
            31);
        MEMORY[0xA8B230]->lsBrief[0] = 0;
        if ( &stru_830620 == (IUnknown *)-54776 )
          v16 = INIClass::BinarySearchSection((int)var158, (INIClass *)MEMORY[0xA8B230]->fileName);
        else
          v16 = HashTableSection::FindSection(
                  (int)var158,
                  (CCINIClass *)MEMORY[0xA8B230]->fileName,
                  (CCINIClass *)&stru_830620.__pad_579C[32348]);
        if ( v16 )
          INIClass::GetString(
            var158,
            (INIClass *)MEMORY[0xA8B230]->fileName,
            (unsigned __int8 *)&stru_830620.__pad_579C[32348],
            (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
            (INIClass *)MEMORY[0xA8B230]->lsBrief,
            31);
        if ( &stru_830620 == (IUnknown *)-54760 )
          v17 = INIClass::BinarySearchSection((int)var158, (INIClass *)MEMORY[0xA8B230]->fileName);
        else
          v17 = HashTableSection::FindSection(
                  (int)var158,
                  (CCINIClass *)MEMORY[0xA8B230]->fileName,
                  (CCINIClass *)&stru_830620.__pad_579C[32332]);
        if ( v17 )
          MEMORY[0xA8B230]->ls640BriefLocX = INIClass::ReadInt_Overwrite(
                                               (int)var158,
                                               (unsigned __int8 *)MEMORY[0xA8B230]->fileName,
                                               (CCINIClass *)&stru_830620.__pad_579C[32332],
                                               (INIClass *)MEMORY[0xA8B230]->ls640BriefLocX);
        if ( &stru_830620 == (IUnknown *)-54744 )
          v18 = INIClass::BinarySearchSection((int)var158, (INIClass *)MEMORY[0xA8B230]->fileName);
        else
          v18 = HashTableSection::FindSection(
                  (int)var158,
                  (CCINIClass *)MEMORY[0xA8B230]->fileName,
                  (CCINIClass *)&stru_830620.__pad_579C[32316]);
        if ( v18 )
          MEMORY[0xA8B230]->ls640BriefLocY = INIClass::ReadInt_Overwrite(
                                               (int)var158,
                                               (unsigned __int8 *)MEMORY[0xA8B230]->fileName,
                                               (CCINIClass *)&stru_830620.__pad_579C[32316],
                                               (INIClass *)MEMORY[0xA8B230]->ls640BriefLocY);
        if ( &stru_830620 == (IUnknown *)-54728 )
          v19 = INIClass::BinarySearchSection((int)var158, (INIClass *)MEMORY[0xA8B230]->fileName);
        else
          v19 = HashTableSection::FindSection(
                  (int)var158,
                  (CCINIClass *)MEMORY[0xA8B230]->fileName,
                  (CCINIClass *)&stru_830620.__pad_579C[32300]);
        if ( v19 )
          MEMORY[0xA8B230]->ls800BriefLocX = INIClass::ReadInt_Overwrite(
                                               (int)var158,
                                               (unsigned __int8 *)MEMORY[0xA8B230]->fileName,
                                               (CCINIClass *)&stru_830620.__pad_579C[32300],
                                               (INIClass *)MEMORY[0xA8B230]->ls800BriefLocX);
        if ( &stru_830620 == (IUnknown *)-54712 )
          v20 = INIClass::BinarySearchSection((int)var158, (INIClass *)MEMORY[0xA8B230]->fileName);
        else
          v20 = HashTableSection::FindSection(
                  (int)var158,
                  (CCINIClass *)MEMORY[0xA8B230]->fileName,
                  (CCINIClass *)&stru_830620.__pad_579C[32284]);
        if ( v20 )
          MEMORY[0xA8B230]->ls800BriefLocY = INIClass::ReadInt_Overwrite(
                                               (int)var158,
                                               (unsigned __int8 *)MEMORY[0xA8B230]->fileName,
                                               (CCINIClass *)&stru_830620.__pad_579C[32284],
                                               (INIClass *)MEMORY[0xA8B230]->ls800BriefLocY);
        LOBYTE(MEMORY[0xA8B230]->ls640BkgdName[0]) = 0;
        if ( &stru_830620 == (IUnknown *)-54696 )
          v21 = INIClass::BinarySearchSection((int)var158, (INIClass *)MEMORY[0xA8B230]->fileName);
        else
          v21 = HashTableSection::FindSection(
                  (int)var158,
                  (CCINIClass *)MEMORY[0xA8B230]->fileName,
                  (CCINIClass *)&stru_830620.__pad_579C[32268]);
        if ( v21 )
          INIClass::GetString(
            var158,
            (INIClass *)MEMORY[0xA8B230]->fileName,
            (unsigned __int8 *)&stru_830620.__pad_579C[32268],
            (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
            (INIClass *)MEMORY[0xA8B230]->ls640BkgdName,
            64);
        LOBYTE(MEMORY[0xA8B230]->ls800BkgdName[0]) = 0;
        if ( &stru_830620 == (IUnknown *)-54680 )
          v22 = INIClass::BinarySearchSection((int)var158, (INIClass *)MEMORY[0xA8B230]->fileName);
        else
          v22 = HashTableSection::FindSection(
                  (int)var158,
                  (CCINIClass *)MEMORY[0xA8B230]->fileName,
                  (CCINIClass *)&stru_830620.__pad_579C[32252]);
        if ( v22 )
          INIClass::GetString(
            var158,
            (INIClass *)MEMORY[0xA8B230]->fileName,
            (unsigned __int8 *)&stru_830620.__pad_579C[32252],
            (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
            (INIClass *)MEMORY[0xA8B230]->ls800BkgdName,
            64);
        LOBYTE(MEMORY[0xA8B230]->ls800BkgdPal[0]) = 0;
        if ( &stru_830620 == (IUnknown *)-54664 )
          v23 = INIClass::BinarySearchSection((int)var158, (INIClass *)MEMORY[0xA8B230]->fileName);
        else
          v23 = HashTableSection::FindSection(
                  (int)var158,
                  (CCINIClass *)MEMORY[0xA8B230]->fileName,
                  (CCINIClass *)&stru_830620.__pad_579C[32236]);
        if ( v23 )
          INIClass::GetString(
            var158,
            (INIClass *)MEMORY[0xA8B230]->fileName,
            (unsigned __int8 *)&stru_830620.__pad_579C[32236],
            (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
            (INIClass *)MEMORY[0xA8B230]->ls800BkgdPal,
            64);
      }
    }
    for ( i = 1120; i < 1136; MEMORY[0xA8B230]->nextScenario[i - 1] = -1 )
      ++i;
    if ( MEMORY[0xA8B238] )
    {
      ScenarioClass::ReadWaypoints((__int16 *)MEMORY[0xA8B230], v3);
      v25 = MEMORY[0xA8B230];
      if ( MEMORY[0xA8B230]->isRandom )
      {
        v26 = 0;
        while ( 1 )
        {
          *(_DWORD *)&v25->waypoints[v26 * 4] = v25->houseHomeCells[v26];
          if ( ++v26 >= 8 )
            break;
          v25 = MEMORY[0xA8B230];
        }
      }
      RulesClass::LoadCountries(*(RulesClass **)&MEMORY[0x87F8E4].__pad_5568[9108]);
      RulesClass::LoadFromINI(*(RulesClass **)&MEMORY[0x87F8E4].__pad_5568[9108]);
      for ( j = 0; j < g_SuperWeaponTypeArray; ++j )
        (*(void (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)g_SuperWeaponTypeCount + j) + 100))(
          *((_DWORD *)g_SuperWeaponTypeCount + j),
          *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8700]);
      AssignSessionHouses();
      v3 = a2;
      v67[0] = 1;
      v67[1] = 1;
      v67[2] = 50;
      v67[3] = 50;
      v28 = INIClass::ParseValue(
              (int)a2,
              (CCINIClass *)var34,
              (INIClass *)&MEMORY[0x81FFE4].headNode[2],
              (unsigned __int8 *)g_INI_Key_Size,
              (MouseClass *)v67);
      v60 = *v28;
      v61 = v28[1];
      v62 = v28[2];
      v63 = v28[3];
      CellClass::DrawWrapper((int *)&MEMORY[0x87F7E8], (Tactical *)&v60, 1, 0, 1);
      if ( !MEMORY[0xA8B230]->isRandom )
        PreviewClass::RenderMapPreview(MEMORY[0xA8B230]->nextScenario, a2);
      v29 = INIClass::ParseValue(
              (int)a2,
              (CCINIClass *)Filename.__pad_20,
              (INIClass *)&MEMORY[0x81FFE4].headNode[2],
              (unsigned __int8 *)g_INI_Key_LocalSize,
              &MEMORY[0x87F8E4]);
      v60 = *v29;
      v61 = v29[1];
      v62 = v29[2];
      v63 = v29[3];
      Shroud::ProcessCellVisibility(&MEMORY[0x87F7E8], (MouseClass *)&v60);
      (*(void (__thiscall **)(SkirmishDialog *, char))(*(_DWORD *)MEMORY[0xA8B23C]->__pad_0 + 128))(
        MEMORY[0xA8B23C],
        v53);
      if ( MEMORY[0xA8B244] == 2 )
        HouseClass::FindStartPositions();
      else
        (*(void (__thiscall **)(SkirmishDialog *, char))(*(_DWORD *)MEMORY[0xA8B23C]->__pad_0 + 132))(
          MEMORY[0xA8B23C],
          v53);
    }
    Instance = LoadProgressMgr::GetInstance();
    LoadingScreen::Render(Instance);
    Multiplayer::ShowProgress(&MEMORY[0xA8B238], 3);
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
  SwizzleManager::ConvertWrapper((int)&MEMORY[0xB077F8].__pad_14B0[13416]);
  if ( *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9432] )
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9432] + 32))(
      *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9432],
      1);
  v31 = __2_YAPAXI_Z(0xE18u);
  if ( v31 )
    v32 = TacticalMap::Construct(v31);
  else
    v32 = 0;
  *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9432] = v32;
  TacticalClass::SetViewportPosition(v32, (IUnknown *)&MEMORY[0x87F8E4].__pad_5568[8532]);
  MEMORY[0xA8B230]->theater = ScenarioClass::ReadAndParseString(
                                (unsigned __int8 ***)v3,
                                (INIClass *)&MEMORY[0x81FFE4].headNode[2],
                                (unsigned __int8 *)&unk_818658,
                                0);
  LoadTheaterClassMIX(MEMORY[0xA8B230]->theater);
  Multiplayer::ShowProgress(&MEMORY[0xA8B238], 30);
  SidebarClass::ReadButtonList(*(RulesClass **)&MEMORY[0x87F8E4].__pad_5568[9108]);
  Multiplayer::ShowProgress(&MEMORY[0xA8B238], 31);
  ResetRules(*(RulesClass **)&MEMORY[0x87F8E4].__pad_5568[9108]);
  Multiplayer::ShowProgress(&MEMORY[0xA8B238], 35);
  Event::Dispatch();
  v33 = *(char **)&MEMORY[0x87F8E4].__pad_5568[8700];
  v56 = (CCINIClass *)MEMORY[0xA8B230];
  if ( INIClass::GetKeyCount(*(char **)&MEMORY[0x87F8E4].__pad_5568[8700], (INIClass *)&stru_830620.__pad_579C[31336]) >= 50 )
    v35 = (INIClass *)50;
  else
    v35 = (INIClass *)INIClass::GetKeyCount(v33, (INIClass *)&stru_830620.__pad_579C[31336]);
  for ( k = 0; (int)k < (int)v35; k = (CCINIClass *)((char *)k + 1) )
  {
    v37 = (INIClass *)INIClass::GetStringByIndex(v33, (CCINIClass *)&stru_830620.__pad_579C[31336], k);
    eax102 = atoi(v37->__pad_0);
    INIClass::GetString(
      (unsigned __int8 ***)v33,
      (INIClass *)&stru_830620.__pad_579C[31336],
      (unsigned __int8 *)v37,
      0,
      (INIClass *)((char *)&v56[83] + 40 * eax102 + eax102),
      40);
  }
  Event::Dispatch();
  RulesClass::Addition(*(RulesClass **)&MEMORY[0x87F8E4].__pad_5568[9108]);
  Multiplayer::ShowProgress(&MEMORY[0xA8B238], 45);
  v38 = MEMORY[0xA8B230];
  v39 = 0;
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_1140[44] = 0;
  if ( MEMORY[0xA8B238] )
  {
    v41 = *(_DWORD *)(**(_DWORD **)&MEMORY[0xA8D63C].__pad_430[12] + 75);
    if ( v41 == -3 )
      v41 = 0;
    v39 = *(_DWORD *)(*((_DWORD *)g_SuperWeaponTypeCount + v41) + 188);
  }
  else
  {
    campaignIndex = MEMORY[0xA8B230]->campaignIndex;
    if ( campaignIndex != -1 )
      v39 = *(_DWORD *)(*(_DWORD *)&g_CampaignTypeArray->__pad_0[4 * campaignIndex] + 152);
  }
  v42 = v39;
  if ( MEMORY[0xA8B238] )
  {
    MEMORY[0xA8B230]->playerSideIndex = v39;
    if ( !MixFile::LoadSide(v39) )
    {
LABEL_124:
      *(_DWORD *)aP1[0].__pad_0 = &vt_CCFileClass;
      --*(_DWORD *)&MEMORY[0xA8D63C].__pad_1140[48];
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
      (INIClass *)&stru_830620.__pad_579C[32224],
      &Filename,
      32);
    v43 = HouseClass::FindByName(Filename.__pad_0);
    if ( v43 == -1 || v43 > (int)HouseClass_Count )
      v42 = 0;
    else
      v42 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Array->__pad_0[4 * v43] + 52) + 188);
    MEMORY[0xA8B230]->playerSideIndex = v42;
    if ( !MixFile::LoadSide(v42) )
      goto LABEL_124;
  }
  Multiplayer::ShowProgress(&MEMORY[0xA8B238], 50);
  if ( !ScenarioClass::ReadMapINI((int)MEMORY[0xA8B230], a3, (int)a2) )
    goto LABEL_124;
  Multiplayer::ShowProgress(&MEMORY[0xA8B238], 58);
  if ( MEMORY[0xA8B238] )
  {
    MEMORY[0xA8B230]->playerSideIndex = v42;
    if ( MEMORY[0xA8B23C] )
      (*(void (__thiscall **)(SkirmishDialog *))(*(_DWORD *)MEMORY[0xA8B23C]->__pad_0 + 124))(MEMORY[0xA8B23C]);
  }
  else
  {
    INIClass::GetString(
      (unsigned __int8 ***)a2,
      (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
      (unsigned __int8 *)&g_INI_Key_Lighting.sectionCount,
      (INIClass *)&stru_830620.__pad_579C[32224],
      (INIClass *)Filename.__pad_20,
      32);
    v44 = HouseClass::FindByName(Filename.__pad_20);
    if ( v44 == -1 || v44 > (int)HouseClass_Count )
      v42 = 0;
    else
      v42 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Array->__pad_0[4 * v44] + 52) + 188);
    if ( !MixFile::LoadSide(v42) )
      goto LABEL_124;
    MEMORY[0xA8B230]->playerSideIndex = v42;
  }
  if ( MEMORY[0xA8B238] && !(_BYTE)MEMORY[0xA8B260] )
  {
    v47 = *(ObjectClass **)&MEMORY[0xA8D63C].__pad_1258[204];
    BYTE1(v47) = MEMORY[0xA8D63C].__pad_1258[205] & 0x7F;
    *(_DWORD *)&MEMORY[0xA8D63C].__pad_1258[204] = v47;
  }
  nullsub_37();
  Event::Dispatch();
  SmallFunc_6F19B0(&MEMORY[0x87F8E4].__pad_5568[8924], 1);
  SmallFunc_6F19B0(a2->__pad_0, 0);
  ScoreScreenClass::ProcessFrame(&MEMORY[0x87F8E4].__pad_5568[8924], 1);
  ScoreScreenClass::ProcessFrame(a2->__pad_0, 0);
  TaskForceClass::LoadFromINI(&MEMORY[0x87F8E4].__pad_5568[8924], 1);
  TaskForceClass::LoadFromINI(a2->__pad_0, 0);
  TriggerClass::Process(a2->__pad_0);
  CCINIClass::ProcessSection(a2->__pad_0);
  CCINIClass::ReadTypeList(&MEMORY[0x87F8E4].__pad_5568[8924], (CCINIClass *)1);
  CCINIClass::ReadTypeList(a2->__pad_0, 0);
  Helper_6F2040();
  Multiplayer::ShowProgress(&MEMORY[0xA8B238], 60);
  ScenarioClass::LoadMapData((int *)&MEMORY[0x87F7E8], a2);
  Event::Dispatch();
  ScenarioClass::LoadWaypoints(a2->__pad_0);
  BulletTypeClass::ReadTrailerAnim();
  MapClass::MarkForRedraw(&MEMORY[0x87F7E8], 2);
  Multiplayer::ShowProgress(&MEMORY[0xA8B238], 70);
  Event::Dispatch();
  ReadOverlayINI(a2);
  Event::Dispatch();
  LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]);
  for ( m = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); m; m = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]) )
    House::AnnounceUpgrade(m, (IUnknown *)0xFFFFFFFF);
  ResetBuildingState();
  CCINIClass::LoadTypeFromINI(a2->__pad_0);
  Event::Dispatch();
  InitializeVeinholeSystem(1);
  BuildingClass::ClearOccupancyData();
  BuildingClass::ClearFactoryData();
  Multiplayer::ShowProgress(&MEMORY[0xA8B238], 72);
  RadarClass::RecreateSurface((int)&MEMORY[0x87F7E8], v42);
  PlaceScenarioUnits(a2->__pad_0, (int)v38);
  Event::Dispatch();
  Multiplayer::ShowProgress(&MEMORY[0xA8B238], 74);
  PlaceAircraftFromINI(a2->__pad_0, (int)a2);
  Event::Dispatch();
  PlaceScenarioInfantry(a2->__pad_0);
  Event::Dispatch();
  Multiplayer::ShowProgress(&MEMORY[0xA8B238], 76);
  byte_829AE4 = 0;
  Scenario::ReadTeams(a2);
  Event::Dispatch();
  Multiplayer::ShowProgress(&MEMORY[0xA8B238], 78);
  byte_829AE4 = 1;
  Event::Dispatch();
  UnitClass::ReadINI(a2->__pad_0);
  Event::Dispatch();
  if ( MEMORY[0xA8B238] == (CellStruct *)5 )
  {
    if ( MEMORY[0xA8D63C].__pad_14B0[677] )
    {
      CCFileClass::Reset(aP1);
      FileClass::SetFileName(aP1, (IUnknown *)&stru_830620.__pad_579C[32212]);
      if ( CCFileClass::Open(aP1, 0) == 1 )
      {
        CCINIClass::Load(var158, aP1, 0, 0);
        RulesClass::Addition(*(RulesClass **)&MEMORY[0x87F8E4].__pad_5568[9108]);
      }
    }
  }
  Multiplayer::ShowProgress(&MEMORY[0xA8B238], 82);
  Event::Dispatch();
  MEMORY[0x87F8E4].field_38 = MapClass::PostProcessReveal(&MEMORY[0x87F7E8], 0);
  Multiplayer::ShowProgress(&MEMORY[0xA8B238], 86);
  Event::Dispatch();
  CCFileClass::Create(dword_89C3B0);
  Multiplayer::ShowProgress(&MEMORY[0xA8B238], 90);
  Event::Dispatch();
  if ( MEMORY[0xA8B238] && !a1 )
  {
    LOBYTE(v48) = INIClass::ReadBool_Overwrite(
                    (int)a2,
                    (unsigned __int8 *)&g_INI_Key_Lighting.sectionHead[1],
                    (CCINIClass *)&stru_830620.__pad_579C[32416],
                    0);
    ScenarioClass::SetupAlliances(v48);
  }
  Event::Dispatch();
  SwizzleManager::ConvertWrapper((int)&MEMORY[0xB077F8].__pad_14B0[13416]);
  Multiplayer::ShowProgress(&MEMORY[0xA8B238], 96);
  Event::Dispatch();
  ProcessExpiredPointers();
  if ( MEMORY[0xA8B238] )
    MEMORY[0xA8B230]->nextScenario[0] = *(_DWORD *)&MEMORY[0xA8D63C].__pad_1258[204];
  v49 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_1140[48];
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_1140[48] = 0;
  v50 = v49 - 1;
  ProcessDataBuildingClass();
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_1140[48] = v50;
  Multiplayer::ShowProgress(&MEMORY[0xA8B238], 98);
  Event::Dispatch();
  (*(void (__thiscall **)(char *))(*(_DWORD *)&MEMORY[0x87F8E4].__pad_1D4[3924] + 12))(&MEMORY[0x87F8E4].__pad_1D4[3924]);
  if ( (MEMORY[0xA8B230]->nextScenario[0] & 0x1000) != 0 )
    SmallFunc_5866C0(&MEMORY[0x87F7E8]);
  Map_Load_660B00();
  FogOfWar::Render((int **)&MEMORY[0x87F7E8]);
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
char ScenarioClass::ReadMapINI(CCINIClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall ScenarioClass::ReadMapINI(int this, CCINIClass *aP1)
{
  void ***v4; // eax
  RandomStruct *v5; // ebx
  int *v6; // eax
  int v7; // ecx
  int v8; // eax
  int BuildingTypeByName; // eax
  INIClass *v10; // eax
  double Double_Overwrite; // st7
  int v12; // eax
  void ***TechnoTypeList; // eax
  void **v14; // eax
  int v15; // eax
  int v16; // ecx
  int eax16; // eax
  void **v18; // edx
  CCINIClass *v17; // eax
  void ***v20; // ebx
  void ***v21; // ecx
  void **v22; // eax
  void ***v23; // ecx
  int v24; // eax
  void ***v25; // ecx
  int v26; // edx
  int v27; // eax
  void ***IntList; // eax
  void **v29; // eax
  int v30; // eax
  int v31; // ecx
  int eax35; // eax
  void **v33; // edx
  CCINIClass *v32; // eax
  char Bool_Overwrite; // al
  char v36; // al
  char v37; // cl
  char v38; // al
  int Int_Overwrite; // eax
  int v40; // ecx
  int v41; // ecx
  int v42; // eax
  int v43; // eax
  int v44; // edx
  int v45; // ecx
  int v46; // eax
  int v47; // ecx
  int v48; // eax
  int v49; // eax
  int v50; // edx
  int v51; // ecx
  int TimeString; // eax
  CCINIClass *v53; // ecx
  int v54; // eax
  double v55; // st7
  int v56; // eax
  double v57; // st7
  double v58; // st7
  int v59; // eax
  double v60; // st7
  double v61; // st7
  int v62; // eax
  double v63; // st7
  double v64; // st7
  int v65; // eax
  double v66; // st7
  double v67; // st7
  int v68; // eax
  double v69; // st7
  double v70; // st7
  int v71; // eax
  double v72; // st7
  double v73; // st7
  int v74; // eax
  double v75; // st7
  double v76; // st7
  int v77; // eax
  double v78; // st7
  double v79; // st7
  int v80; // eax
  double v81; // st7
  double v82; // st7
  int v83; // eax
  double v84; // st7
  double v85; // st7
  int v86; // eax
  double v87; // st7
  double v88; // st7
  int v89; // eax
  double v90; // st7
  double v91; // st7
  int v92; // eax
  double v93; // st7
  double v94; // st7
  int v95; // eax
  double v96; // st7
  double v97; // st7
  int v98; // eax
  double v99; // st7
  double v100; // st7
  int v101; // eax
  double v102; // st7
  double v103; // st7
  int v104; // eax
  double v105; // st7
  double v106; // st7
  int v107; // eax
  double v108; // st7
  double v109; // st7
  int v110; // eax
  double v111; // st7
  double v112; // st7
  int v113; // eax
  int v114; // eax
  void **v116; // [esp-4h] [ebp-5Ch] BYREF
  _DWORD *var58; // [esp+0h] [ebp-58h]
  RandomStruct *v115; // [esp+4h] [ebp-54h]
  int v119; // [esp+8h] [ebp-50h]
  INIClass *v117; // [esp+Ch] [ebp-4Ch]
  INIClass *aP3[2]; // [esp+10h] [ebp-48h]
  void ***v122; // [esp+24h] [ebp-34h]
  RandomStruct v123; // [esp+28h] [ebp-30h] BYREF
  char Buffer[12]; // [esp+30h] [ebp-28h] BYREF
  char Destination[4]; // [esp+3Ch] [ebp-1Ch] BYREF
  void *Block; // [esp+40h] [ebp-18h]
  char v127; // [esp+49h] [ebp-Fh]

  INIClass::ResetSection(aP1);
  GameMode::ReadFlagsFromINI((int *)this, aP1);
  this->startX = INIClass::ReadInt_Overwrite(
                               (int)aP1,
                               (unsigned __int8 *)&stru_830620.__pad_579C[32940],
                               (CCINIClass *)&stru_830620.__pad_579C[32948],
                               *(INIClass **)(this + 4396));
  this->startY = INIClass::ReadInt_Overwrite(
                               (int)aP1,
                               (unsigned __int8 *)&stru_830620.__pad_579C[32940],
                               (CCINIClass *)&stru_830620.__pad_579C[32932],
                               *(INIClass **)(this + 4400));
  this->width = INIClass::ReadInt_Overwrite(
                               (int)aP1,
                               (unsigned __int8 *)&stru_830620.__pad_579C[32940],
                               (CCINIClass *)&stru_82BBD0.sectionHead[1],
                               *(INIClass **)(this + 4404));
  this->height = INIClass::ReadInt_Overwrite(
                               (int)aP1,
                               (unsigned __int8 *)&stru_830620.__pad_579C[32940],
                               &g_INI_Key_Height,
                               *(INIClass **)(this + 4408));
  this->numberStartingPoints = INIClass::ReadInt_Overwrite(
                               (int)aP1,
                               (unsigned __int8 *)&stru_830620.__pad_579C[32940],
                               (CCINIClass *)&stru_830620.__pad_579C[32908],
                               *(INIClass **)(this + 4412));
  this->numCoopHumanStartSpots = INIClass::ReadInt_Overwrite(
                               (int)aP1,
                               (unsigned __int8 *)&stru_830620.__pad_579C[32940],
                               (CCINIClass *)&stru_830620.__pad_579C[32884],
                               *(INIClass **)(this + 4580));
  v4 = 0;
  if ( *(int *)(this + 4412) > 0 )
  {
    v5 = (RandomStruct *)(this + 4416);
    do
    {
      v122 = (void ***)((char *)v4 + 1);
      sprintf(Buffer, &stru_830620.__pad_579C[32872], (char *)v4 + 1);
      v6 = INIClass::ReadPoint2D_Overwrite(
             aP1,
             &v123,
             (INIClass *)&stru_830620.__pad_579C[32940],
             (CCINIClass *)Buffer,
             v5);
      v7 = *v6;
      v8 = v6[1];
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
    (unsigned __int8 *)&stru_830620.__pad_579C[33760],
    (INIClass *)(this + 4),
    (INIClass *)(this + 4),
    260);
  INIClass::GetString(
    (unsigned __int8 ***)aP1,
    (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
    (unsigned __int8 *)&stru_830620.__pad_579C[33744],
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
                               (unsigned __int8 *)&stru_830620.__pad_579C[31468],
                               this->brief);
  this->win = INIClass::GetBool(
                               (unsigned __int8 ***)aP1,
                               (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
                               (unsigned __int8 *)&stru_830620.__pad_579C[33740],
                               this->win);
  this->lose = INIClass::GetBool(
                               (unsigned __int8 ***)aP1,
                               (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
                               (unsigned __int8 *)&stru_830620.__pad_579C[33732],
                               this->lose);
  this->action = INIClass::GetBool(
                               (unsigned __int8 ***)aP1,
                               (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
                               (unsigned __int8 *)&stru_817244.INIClass_field_2C,
                               this->action);
  this->postScore = INIClass::GetBool(
                               (unsigned __int8 ***)aP1,
                               (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
                               (unsigned __int8 *)&stru_830620.__pad_579C[33720],
                               this->postScore);
  this->preMapSelect = INIClass::GetBool(
                               (unsigned __int8 ***)aP1,
                               (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
                               (unsigned __int8 *)&stru_830620.__pad_579C[33704],
                               this->preMapSelect);
  this->multiplayerOnly = INIClass::ReadBool_Overwrite(
                               (int)aP1,
                               (unsigned __int8 *)&g_INI_Key_Lighting.sectionHead[1],
                               (CCINIClass *)&stru_830620.__pad_579C[33688],
                               this->multiplayerOnly);
  this->timerInherit = INIClass::ReadBool_Overwrite(
                               (int)aP1,
                               (unsigned __int8 *)&g_INI_Key_Lighting.sectionHead[1],
                               (CCINIClass *)&stru_830620.__pad_579C[33672],
                               this->timerInherit);
  this->endOfGame = INIClass::ReadBool_Overwrite(
                               (int)aP1,
                               (unsigned __int8 *)&g_INI_Key_Lighting.sectionHead[1],
                               (CCINIClass *)&stru_830620.__pad_579C[33660],
                               this->endOfGame);
  BuildingTypeByName = Scenario::FindBuildingTypeByName(
                         (unsigned __int8 ***)aP1,
                         (unsigned __int8 *)&g_INI_Key_Lighting.sectionHead[1],
                         (unsigned __int8 *)g_INI_Key_Theme,
                         *(CCINIClass **)(this + 7280));
  aP3[1] = 0;
  aP3[0] = (INIClass *)&stru_830620.__pad_579C[33644];
  v117 = (INIClass *)&g_INI_Key_Lighting.sectionHead[1];
  this->themeIndex = BuildingTypeByName;
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[656] = INIClass::ReadInt_Overwrite(
                                                   (int)aP1,
                                                   (unsigned __int8 *)v117,
                                                   (CCINIClass *)aP3[0],
                                                   aP3[1]);
  v10 = *(INIClass **)(this + 7288);
  aP3[1] = *(INIClass **)(this + 7292);
  Double_Overwrite = INIClass::ReadDouble_Overwrite(
                       (int)aP1,
                       (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
                       (unsigned __int8 *)&stru_830620.__pad_579C[33628],
                       v10);
  *(double *)(this + 7288) = Double_Overwrite;
  if ( Double_Overwrite >= 1.0 )
    Double_Overwrite = 1.0;
  *(double *)(this + 7288) = Double_Overwrite;
  this->carryOverCap = INIClass::ReadInt_Overwrite(
                               (int)aP1,
                               (unsigned __int8 *)&g_INI_Key_Lighting.sectionHead[1],
                               (CCINIClass *)&stru_830620.__pad_579C[33612],
                               *(INIClass **)(this + 7296));
  this->skipScore = INIClass::ReadBool_Overwrite(
                               (int)aP1,
                               (unsigned __int8 *)&g_INI_Key_Lighting.sectionHead[1],
                               (CCINIClass *)&stru_830620.__pad_579C[33600],
                               this->skipScore);
  this->oneTimeOnly = INIClass::ReadBool_Overwrite(
                               (int)aP1,
                               (unsigned __int8 *)&g_INI_Key_Lighting.sectionHead[1],
                               (CCINIClass *)&stru_830620.__pad_579C[33588],
                               this->oneTimeOnly);
  this->skipMapSelect = INIClass::ReadBool_Overwrite(
                               (int)aP1,
                               (unsigned __int8 *)&g_INI_Key_Lighting.sectionHead[1],
                               (CCINIClass *)&stru_830620.__pad_579C[33572],
                               this->skipMapSelect);
  this->truckCrate = INIClass::ReadBool_Overwrite(
                               (int)aP1,
                               (unsigned __int8 *)&g_INI_Key_Lighting.sectionHead[1],
                               (CCINIClass *)&stru_830620.__pad_579C[33560],
                               this->truckCrate);
  this->trainCrate = INIClass::ReadBool_Overwrite(
                               (int)aP1,
                               (unsigned __int8 *)&g_INI_Key_Lighting.sectionHead[1],
                               (CCINIClass *)&stru_830620.__pad_579C[33548],
                               this->trainCrate);
  this->fillSilos = INIClass::ReadBool_Overwrite(
                               (int)aP1,
                               (unsigned __int8 *)&g_INI_Key_Lighting.sectionHead[1],
                               (CCINIClass *)&stru_830620.__pad_579C[33536],
                               this->fillSilos);
  this->ignoreGlobalAiTriggers = INIClass::ReadBool_Overwrite(
                               (int)aP1,
                               (unsigned __int8 *)&g_INI_Key_Lighting.sectionHead[1],
                               (CCINIClass *)&stru_830620.__pad_579C[33512],
                               this->ignoreGlobalAiTriggers);
  this->percent = INIClass::ReadInt_Overwrite(
                               (int)aP1,
                               (unsigned __int8 *)&g_INI_Key_Lighting.sectionHead[1],
                               (CCINIClass *)&stru_830620.__pad_579C[33504],
                               *(INIClass **)(this + 7300));
  this->startingDropships = INIClass::ReadInt_Overwrite(
                                (int)aP1,
                                (unsigned __int8 *)&g_INI_Key_Lighting.sectionHead[1],
                                (CCINIClass *)&stru_830620.__pad_579C[33484],
                                *(INIClass **)(this + 13520));
  var58 = 0;
  v115 = 0;
  LOWORD(v119) = 1;
  v116 = &vt_VectorClass_TechnoTypeClass;
  if ( &v116 != (void ***)(this + 13524) )
  {
    TypeList_TechnoType::ddtor((int)&v116);
    v115 = *(RandomStruct **)(this + 13532);
    if ( v115 )
    {
      var58 = (_DWORD *)__2_YAPAXI_Z(4 * (_DWORD)v115);
      if ( var58 )
      {
        v12 = 0;
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
                               (unsigned __int8 *)&stru_830620.__pad_579C[33468],
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
      v15 = __2_YAPAXI_Z(4 * (_DWORD)v14);
      this->allowableUnitsCount = v15;
      if ( v15 )
      {
        v16 = this->allowableUnitMaximums;
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
    v22 = *(void ***)(this + 13560);
    v23 = v122;
    v122[2] = v22;
    if ( v22 )
    {
      v24 = __2_YAPAXI_Z(4 * (_DWORD)v22);
      v25 = v122;
      v122[1] = (void **)v24;
      if ( v24 )
      {
        v26 = (int)v25[2];
        v27 = 0;
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
  v21[4] = *(void ***)(this + 13568);
  v21[5] = *(void ***)(this + 13572);
  *v21 = &vt_TypeList_int;
  IntList = (void ***)INIClass::ReadIntList(
                        (unsigned __int8 ***)aP1,
                        (int)Destination,
                        (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
                        (unsigned __int8 *)&stru_830620.__pad_579C[33444],
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
      v30 = __2_YAPAXI_Z(4 * (_DWORD)v29);
      this->ambientTarget = v30;
      if ( v30 )
      {
        v31 = this->red;
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
                               (CCINIClass *)&stru_830620.__pad_579C[33420],
                               this->storedTiberium_growth_enabled);
  Bool_Overwrite = INIClass::ReadBool_Overwrite(
                     (int)aP1,
                     (unsigned __int8 *)&g_INI_Key_Lighting.sectionHead[1],
                     (CCINIClass *)&stru_830620.__pad_579C[33400],
                     this->veinGrowthEnabled);
  LOBYTE(aP3[1]) = this->iceGrowthEnabled;
  aP3[0] = (INIClass *)&stru_830620.__pad_579C[33380];
  v117 = (INIClass *)&g_INI_Key_Lighting.sectionHead[1];
  this->veinGrowthEnabled = Bool_Overwrite;
  this->iceGrowthEnabled = INIClass::ReadBool_Overwrite(
                               (int)aP1,
                               (unsigned __int8 *)v117,
                               (CCINIClass *)aP3[0],
                               (char)aP3[1]);
  v36 = INIClass::ReadBool_Overwrite(
          (int)aP1,
          (unsigned __int8 *)&g_INI_Key_Lighting.sectionHead[1],
          (CCINIClass *)&stru_830620.__pad_579C[33352],
          this->storedTiberium_death_to_visceroid);
  v37 = this->freeRadar;
  this->storedTiberium_death_to_visceroid = v36;
  v38 = INIClass::ReadBool_Overwrite(
          (int)aP1,
          (unsigned __int8 *)&g_INI_Key_Lighting.sectionHead[1],
          (CCINIClass *)&stru_830620.__pad_579C[33340],
          v37);
  aP3[1] = *(INIClass **)(this + 524);
  aP3[0] = (INIClass *)&stru_830620.__pad_579C[33328];
  v117 = (INIClass *)&g_INI_Key_Lighting.sectionHead[1];
  this->freeRadar = v38;
  this->altHomeCell = INIClass::ReadInt_Overwrite((int)aP1, (unsigned __int8 *)v117, (CCINIClass *)aP3[0], aP3[1]);
  Int_Overwrite = INIClass::ReadInt_Overwrite(
                    (int)aP1,
                    (unsigned __int8 *)&g_INI_Key_Lighting.sectionHead[1],
                    (CCINIClass *)&stru_830620.__pad_579C[33316],
                    *(INIClass **)(this + 528));
  LOBYTE(aP3[1]) = 0;
  aP3[0] = (INIClass *)&stru_830620.__pad_579C[33308];
  v117 = (INIClass *)&g_INI_Key_Lighting.sectionHead[1];
  this->uniqueId = Int_Overwrite;
  INIClass::ReadBool_Overwrite((int)aP1, (unsigned __int8 *)v117, (CCINIClass *)aP3[0], (char)aP3[1]);
  v40 = this->dropshipUnitCounts - this->blue;
  v122 = 0;
  if ( v40 > 0 )
  {
    do
    {
      v41 = this->red;
      if ( this->blue < v41
        || (*(_BYTE *)(this + 13565) || !v41)
        && (v42 = this->ground, v42 > 0)
        && ((unsigned __int8 (__thiscall *)(int, int, _DWORD))(*v20)[2])(this + 13552, v41 + v42, 0) )
      {
        v43 = this->blue;
        v44 = this->ambientTarget;
        this->blue = v43 + 1;
        *(_DWORD *)(v44 + 4 * v43) = -1;
      }
      v45 = this->dropshipUnitCounts - this->blue;
      v122 = (void ***)((char *)v122 + 1);
    }
    while ( (int)v122 < v45 );
  }
  v46 = this->blue;
  v122 = 0;
  if ( v46 > 0 )
  {
    do
    {
      v47 = this->ionGreen;
      if ( this->ionGround < v47
        || (*(_BYTE *)(this + 13593) || !v47)
        && (v48 = this->ionLevel, v48 > 0)
        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(this->ionAmbient + 8))(
             this + 13580,
             v47 + v48,
             0) )
      {
        v49 = this->ionGround;
        v50 = this->ionRed;
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
                 (unsigned __int8 *)&stru_830620.__pad_579C[33288],
                 (unsigned __int8 *)&stru_830620.__pad_579C[33296],
                 *(CCINIClass **)(this + 13732));
  v53 = *(CCINIClass **)(this + 13736);
  this->parTimeEasy = TimeString;
  v54 = INIClass::ReadTimeString(
          (int)aP1,
          (unsigned __int8 *)&stru_830620.__pad_579C[33288],
          (unsigned __int8 *)&stru_830620.__pad_579C[33272],
          v53);
  aP3[1] = *(INIClass **)(this + 13740);
  aP3[0] = (INIClass *)&stru_830620.__pad_579C[33260];
  v117 = (INIClass *)&stru_830620.__pad_579C[33288];
  this->parTimeMedium = v54;
  this->parTimeDifficult = INIClass::ReadTimeString(
                                (int)aP1,
                                (unsigned __int8 *)v117,
                                (unsigned __int8 *)aP3[0],
                                (CCINIClass *)aP3[1]);
  INIClass::GetString(
    (unsigned __int8 ***)aP1,
    (INIClass *)&stru_830620.__pad_579C[33288],
    (unsigned __int8 *)&stru_830620.__pad_579C[33224],
    (INIClass *)&stru_830620.__pad_579C[33240],
    (INIClass *)(this + 13744),
    31);
  INIClass::GetString(
    (unsigned __int8 ***)aP1,
    (INIClass *)&stru_830620.__pad_579C[33288],
    (unsigned __int8 *)&stru_830620.__pad_579C[33184],
    (INIClass *)&stru_830620.__pad_579C[33200],
    (INIClass *)(this + 13775),
    31);
  INIClass::GetString(
    (unsigned __int8 ***)aP1,
    (INIClass *)&stru_830620.__pad_579C[33288],
    (unsigned __int8 *)&stru_830620.__pad_579C[33148],
    (INIClass *)&stru_830620.__pad_579C[33164],
    (INIClass *)(this + 13806),
    31);
  INIClass::GetString(
    (unsigned __int8 ***)aP1,
    (INIClass *)&stru_830620.__pad_579C[33288],
    (unsigned __int8 *)&stru_830620.__pad_579C[33108],
    (INIClass *)&stru_830620.__pad_579C[33124],
    (INIClass *)(this + 13837),
    31);
  *(double *)aP3 = (double)*(int *)(this + 13608) * 0.01;
  v55 = INIClass::ReadDouble_Overwrite(
          (int)aP1,
          (INIClass *)&g_INI_Key_Lighting,
          (unsigned __int8 *)&g_INI_Key_Lighting.headNode[2],
          aP3[0]);
  v56 = Math::RoundToInt(v55 * 100.0 + 0.01);
  v57 = (double)*(int *)(this + 13620);
  this->nukeRed = v56;
  this->nukeGreen = v56;
  this->nukeBlue = v56;
  *(double *)aP3 = v57 * 0.01;
  v58 = INIClass::ReadDouble_Overwrite(
          (int)aP1,
          (INIClass *)&g_INI_Key_Lighting,
          (unsigned __int8 *)MEMORY[0x820538],
          aP3[0]);
  v59 = Math::RoundToInt(v58 * 100.0 + 0.01);
  v60 = (double)*(int *)(this + 13624);
  this->nukeGround = v59;
  *(double *)aP3 = v60 * 0.01;
  v61 = INIClass::ReadDouble_Overwrite(
          (int)aP1,
          (INIClass *)&g_INI_Key_Lighting,
          (unsigned __int8 *)MEMORY[0x82053C],
          aP3[0]);
  v62 = Math::RoundToInt(v61 * 100.0 + 0.01);
  v63 = (double)*(int *)(this + 13628);
  this->nukeLevel = v62;
  *(double *)aP3 = v63 * 0.01;
  v64 = INIClass::ReadDouble_Overwrite(
          (int)aP1,
          (INIClass *)&g_INI_Key_Lighting,
          (unsigned __int8 *)g_INI_Key_Blue,
          aP3[0]);
  v65 = Math::RoundToInt(v64 * 100.0 + 0.01);
  v66 = (double)*(int *)(this + 13632);
  this->nukeAmbientChangeRate = v65;
  *(double *)aP3 = v66 * 0.001;
  v67 = INIClass::ReadDouble_Overwrite(
          (int)aP1,
          (INIClass *)&g_INI_Key_Lighting,
          (unsigned __int8 *)g_INI_Key_Ground,
          aP3[0]);
  v68 = Math::RoundToInt(v67 * 1000.0 + 0.01);
  v69 = (double)*(int *)(this + 13636);
  this->dominatorAmbient = v68;
  *(double *)aP3 = v69 * 0.001;
  v70 = INIClass::ReadDouble_Overwrite((int)aP1, (INIClass *)&g_INI_Key_Lighting, (unsigned __int8 *)&aLevel, aP3[0]);
  v71 = Math::RoundToInt(v70 * 1000.0 + 0.01);
  v72 = (double)*(int *)(this + 13640);
  this->dominatorRed = v71;
  *(double *)aP3 = v72 * 0.01;
  v73 = INIClass::ReadDouble_Overwrite(
          (int)aP1,
          (INIClass *)&g_INI_Key_Lighting,
          (unsigned __int8 *)g_INI_Key_IonAmbient,
          aP3[0]);
  v74 = Math::RoundToInt(v73 * 100.0 + 0.01);
  v75 = (double)*(int *)(this + 13644);
  this->dominatorGreen = v74;
  *(double *)aP3 = v75 * 0.01;
  v76 = INIClass::ReadDouble_Overwrite(
          (int)aP1,
          (INIClass *)&g_INI_Key_Lighting,
          (unsigned __int8 *)g_INI_Key_IonRed,
          aP3[0]);
  v77 = Math::RoundToInt(v76 * 100.0 + 0.01);
  v78 = (double)*(int *)(this + 13648);
  this->dominatorBlue = v77;
  *(double *)aP3 = v78 * 0.01;
  v79 = INIClass::ReadDouble_Overwrite(
          (int)aP1,
          (INIClass *)&g_INI_Key_Lighting,
          (unsigned __int8 *)g_INI_Key_IonGreen,
          aP3[0]);
  v80 = Math::RoundToInt(v79 * 100.0 + 0.01);
  v81 = (double)*(int *)(this + 13652);
  this->dominatorGround = v80;
  *(double *)aP3 = v81 * 0.01;
  v82 = INIClass::ReadDouble_Overwrite(
          (int)aP1,
          (INIClass *)&g_INI_Key_Lighting,
          (unsigned __int8 *)g_INI_Key_IonBlue,
          aP3[0]);
  v83 = Math::RoundToInt(v82 * 100.0 + 0.01);
  v84 = (double)*(int *)(this + 13656);
  this->dominatorLevel = v83;
  *(double *)aP3 = v84 * 0.001;
  v85 = INIClass::ReadDouble_Overwrite(
          (int)aP1,
          (INIClass *)&g_INI_Key_Lighting,
          (unsigned __int8 *)g_INI_Key_IonGround,
          aP3[0]);
  v86 = Math::RoundToInt(v85 * 1000.0 + 0.01);
  v87 = (double)*(int *)(this + 13660);
  this->dominatorAmbientChangeRate = v86;
  *(double *)aP3 = v87 * 0.001;
  v88 = INIClass::ReadDouble_Overwrite(
          (int)aP1,
          (INIClass *)&g_INI_Key_Lighting,
          (unsigned __int8 *)g_INI_Key_IonLevel,
          aP3[0]);
  v89 = Math::RoundToInt(v88 * 1000.0 + 0.01);
  v90 = (double)*(int *)(this + 13688);
  this->unknown3598 = v89;
  *(double *)aP3 = v90;
  v91 = INIClass::ReadDouble_Overwrite(
          (int)aP1,
          (INIClass *)&g_INI_Key_Lighting,
          (unsigned __int8 *)&stru_830620.__pad_579C[33084],
          (INIClass *)LODWORD(v90));
  v92 = Math::RoundToInt(v91);
  v93 = (double)*(int *)(this + 13692);
  *(_DWORD *)(this + 13688) = v92;
  *(double *)aP3 = v93 * 0.01;
  v94 = INIClass::ReadDouble_Overwrite(
          (int)aP1,
          (INIClass *)&g_INI_Key_Lighting,
          (unsigned __int8 *)&stru_830620.__pad_579C[33064],
          aP3[0]);
  v95 = Math::RoundToInt(v94 * 100.0 + 0.01);
  v96 = (double)*(int *)(this + 13696);
  *(_DWORD *)(this + 13692) = v95;
  *(double *)aP3 = v96 * 0.01;
  v97 = INIClass::ReadDouble_Overwrite(
          (int)aP1,
          (INIClass *)&g_INI_Key_Lighting,
          (unsigned __int8 *)&stru_830620.__pad_579C[33048],
          aP3[0]);
  v98 = Math::RoundToInt(v97 * 100.0 + 0.01);
  v99 = (double)*(int *)(this + 13700);
  *(_DWORD *)(this + 13696) = v98;
  *(double *)aP3 = v99 * 0.01;
  v100 = INIClass::ReadDouble_Overwrite(
           (int)aP1,
           (INIClass *)&g_INI_Key_Lighting,
           (unsigned __int8 *)&stru_830620.__pad_579C[33032],
           aP3[0]);
  v101 = Math::RoundToInt(v100 * 100.0 + 0.01);
  v102 = (double)*(int *)(this + 13704);
  *(_DWORD *)(this + 13700) = v101;
  *(double *)aP3 = v102 * 0.01;
  v103 = INIClass::ReadDouble_Overwrite(
           (int)aP1,
           (INIClass *)&g_INI_Key_Lighting,
           (unsigned __int8 *)&stru_830620.__pad_579C[33016],
           aP3[0]);
  v104 = Math::RoundToInt(v103 * 100.0 + 0.01);
  v105 = (double)*(int *)(this + 13708);
  *(_DWORD *)(this + 13704) = v104;
  *(double *)aP3 = v105 * 0.001;
  v106 = INIClass::ReadDouble_Overwrite(
           (int)aP1,
           (INIClass *)&g_INI_Key_Lighting,
           (unsigned __int8 *)&stru_830620.__pad_579C[33000],
           aP3[0]);
  v107 = Math::RoundToInt(v106 * 1000.0 + 0.01);
  v108 = (double)*(int *)(this + 13712);
  *(_DWORD *)(this + 13708) = v107;
  *(double *)aP3 = v108 * 0.001;
  v109 = INIClass::ReadDouble_Overwrite(
           (int)aP1,
           (INIClass *)&g_INI_Key_Lighting,
           (unsigned __int8 *)&stru_830620.__pad_579C[32984],
           aP3[0]);
  v110 = Math::RoundToInt(v109 * 1000.0 + 0.01);
  v111 = (double)*(int *)(this + 13716);
  *(_DWORD *)(this + 13712) = v110;
  *(double *)aP3 = v111 * 0.001;
  v112 = INIClass::ReadDouble_Overwrite(
           (int)aP1,
           (INIClass *)&g_INI_Key_Lighting,
           (unsigned __int8 *)&stru_830620.__pad_579C[32956],
           aP3[0]);
  v113 = Math::RoundToInt(v112 * 1000.0 + 0.01);
  aP3[1] = (INIClass *)55;
  *(_DWORD *)(this + 13716) = v113;
  Multiplayer::ShowProgress(&MEMORY[0xA8B238], (int)aP3[1]->__pad_0);
  Event::Dispatch();
  if ( MEMORY[0xA8B238] )
  {
    AssignSessionHouses();
  }
  else
  {
    INIClass::GetString(
      (unsigned __int8 ***)aP1,
      (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
      (unsigned __int8 *)&g_INI_Key_Lighting.sectionCount,
      (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
      (INIClass *)Destination,
      20);
    v114 = HouseClass::FindByName(Destination);
    if ( v114 == -1 )
      v114 = 0;
    HouseClass_Player = *(IUnknown **)&HouseClass_Array->__pad_0[4 * v114];
    this->humanPlayerHouseTypeIndex = *(_DWORD *)(HouseClass_Player->field_34 + 184);
  }
  aP3[1] = (INIClass *)58;
  HouseClass_Player->__pad_1D8[20] = 1;
  HouseClass_Player->__pad_1D8[21] = 1;
  *(_DWORD *)&HouseClass_Player->__pad_566C[136] = 0;
  Multiplayer::ShowProgress(&MEMORY[0xA8B238], (int)aP3[1]->__pad_0);
  Event::Dispatch();
  if ( MEMORY[0xA8D63C].__pad_14B0[639] )
    TheatreClass::InitView();
  Multiplayer::ShowProgress(&MEMORY[0xA8B238], 60);
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
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
char ScenarioClass::ClearFlag_0()
{
  return ScenarioClass::ClearFlag();
}
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
