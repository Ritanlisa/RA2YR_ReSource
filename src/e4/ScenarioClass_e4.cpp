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
// (v3 export truncated pseudocode — commented out; live version via get_context)
// char __usercall ScenarioClass::LoadMap@<al>(char a1@<dl>, CCINIClass *a2@<ecx>, double a3@<st0>)
// {
//   CCINIClass *v3; // ebp
//   int v4; // ecx
//   ObjectClass *v5; // eax
//   int v6; // ecx
//   ObjectClass *v7; // eax
//   char Bool_Overwrite; // al
//   int Section; // eax
//   int v10; // eax
//   wchar_t *StringCSF; // eax
//   int v12; // eax
//   wchar_t *v13; // eax
//   wchar_t *v14; // eax
//   int v15; // eax
//   int v16; // eax
//   int v17; // eax
//   int v18; // eax
//   int v19; // eax
//   int v20; // eax
//   int v21; // eax
//   int v22; // eax
//   int v23; // eax
//   int i; // eax
//   ScenarioClass *v25; // ecx
//   int v26; // eax
//   int j; // esi
//   unsigned int *v28; // eax
//   unsigned int *v29; // eax
//   _DWORD *Instance; // eax
//   int v31; // eax
//   int v32; // eax
//   char *v33; // ebp
//   INIClass *v35; // ebx
//   CCINIClass *k; // esi
//   INIClass *v37; // edi
//   int eax102; // eax
//   ScenarioClass *v38; // ebp
//   int v39; // ecx
//   int campaignIndex; // eax
//   int v41; // eax
//   int v42; // ebx
//   int v43; // eax
//   int v44; // eax
//   Object... [31860 chars total]
// end truncated pseudocode
}
} // namespace gamemd

// 0x689E90
namespace gamemd {
char ScenarioClass::ReadMapINI(CCINIClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// (v3 export truncated pseudocode — commented out; live version via get_context)
// char __thiscall ScenarioClass::ReadMapINI(int this, CCINIClass *aP1)
// {
//   void ***v4; // eax
//   RandomStruct *v5; // ebx
//   int *v6; // eax
//   int v7; // ecx
//   int v8; // eax
//   int BuildingTypeByName; // eax
//   INIClass *v10; // eax
//   double Double_Overwrite; // st7
//   int v12; // eax
//   void ***TechnoTypeList; // eax
//   void **v14; // eax
//   int v15; // eax
//   int v16; // ecx
//   int eax16; // eax
//   void **v18; // edx
//   CCINIClass *v17; // eax
//   void ***v20; // ebx
//   void ***v21; // ecx
//   void **v22; // eax
//   void ***v23; // ecx
//   int v24; // eax
//   void ***v25; // ecx
//   int v26; // edx
//   int v27; // eax
//   void ***IntList; // eax
//   void **v29; // eax
//   int v30; // eax
//   int v31; // ecx
//   int eax35; // eax
//   void **v33; // edx
//   CCINIClass *v32; // eax
//   char Bool_Overwrite; // al
//   char v36; // al
//   char v37; // cl
//   char v38; // al
//   int Int_Overwrite; // eax
//   int v40; // ecx
//   int v41; // ecx
//   int v42; // eax
//   int v43; // eax
//   int v44; // edx
//   int v45; // ecx
//   int v46; // eax
//   int v47; //... [36604 chars total]
// end truncated pseudocode
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
// 0x5c0ed0
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
// 0x5ca7f0
    char ScenarioClass::ClearFlag_0()
{
    return ScenarioClass::ClearFlag();
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
