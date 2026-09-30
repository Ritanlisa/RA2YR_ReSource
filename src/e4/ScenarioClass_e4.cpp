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
#include "e4/classes/ScenarioClass_e4.hpp"
#include "e4/classes/LayerClass_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/RulesClass_e4.hpp"
#include "e4/classes/SaveGame_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/ScoreAnimClass_e4.hpp"
#include "e4/classes/ScoreScreen_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/ScreenCaptureCommandClass_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/SessionClass_e4.hpp"
#include "e4/classes/TeamClass_e4.hpp"
#include "e4/classes/Trigger_e4.hpp"

// 0x58BB30
namespace gamemd {
ScenarioClass * * ScenarioClass::CopyStartPositions()
{

  void *result; // eax
  unsigned int v1;
  int v2; // edi
  int * v3;
  int *v4; // esi
  int v5; // ecx
  int v6; // edx
  int v7; // esi

  result = g_abs_A8B230; /*0x58bb31*/
  if ( g_abs_A8B230 ) /*0x58bb38*/
  {
    *((unsigned int *)g_abs_A8B230 + 1103) = dword_ABED0C; /*0x58bb45*/
    v1 = g_abs_A8B230; /*0x58bb4b*/
    v2 = 0; /*0x58bb52*/
    if ( *((int *)g_abs_A8B230 + 1103) > 0 ) /*0x58bb5c*/
    {
      v3 = (int *)(1104);
      v4 = (int *)(&dword_ABE328 - 1104);
      v5 = 1136; /*0x58bb71*/
      while ( 1 ) /*0x58bb8b*/
      {
        if ( v3 < (int *)(1104) || v2 >= dword_ABED0C ) /*0x58bb93*/
        {
          v6 = 0; /*0x58bb9e*/
          v7 = 0; /*0x58bba0*/
        }
        else
        {
          v6 = v4[v3]; /*0x58bb95*/
          v7 = v4[v3 + 1]; /*0x58bb98*/
        }
        v1[v3] = (unsigned int)((int *)(v6));
        ++v2; /*0x58bbab*/
        ++v5; /*0x58bbac*/
        *(unsigned int *)((char *)(unsigned int)(g_abs_A8B230)+ (unsigned int)(v3)* 4 + 4) = v7; /*0x58bbaf*/
        v3 += 2; /*0x58bbbd*/
        *(unsigned int *)((char *)g_abs_A8B230 + v5 * 4 - 4) = dword_ABE304[v5 - 1137]; /*0x58bbc0*/
        v1 = g_abs_A8B230; /*0x58bbc4*/
        if ( v2 >= *((unsigned int *)g_abs_A8B230 + 1103) ) /*0x58bbd0*/
          break; /*0x58bbd0*/
        v4 = &dword_ABE328 - 1104; /*0x58bb82*/
      }
    }
    v1[1099] = dword_ABDFD4; /*0x58bbda*/
    *((unsigned int *)g_abs_A8B230 + 1100) = dword_ABDFD0; /*0x58bbed*/
    *((unsigned int *)g_abs_A8B230 + 1101) = dword_ABEC90; /*0x58bbfe*/
    result = (void *)dword_ABECD0; /*0x58bc0a*/
    *((unsigned int *)g_abs_A8B230 + 1102) = dword_ABECD0; /*0x58bc0f*/
  }
  return (gamemd::ScenarioClass **)(result);

}
}
// 0x5CC330
namespace gamemd {
CampaignClass * * ScenarioClass_AnimateConstructionStage(ScenarioClass *aP0, void * a1, void * a2, void * a3, void * a4)
{
  int v4; // ecx
  int v5; // esi
  int v6; // edi
  int v7; // eax
  int v8; // edi
  unsigned int v9; // eax
  unsigned int *FoundationSize; // eax
  unsigned int *v11; // ebx
  unsigned int *v12; // ecx
  int v13; // ecx
  unsigned int v14; // edx
  int v15; // ecx
  int v16; // edx
  int *v17; // eax
  void * v18;
  int v19; // eax
  int i; // ebp
  int v21; // ecx
  unsigned int v22; // eax
  int v23; // eax
  int *v24; // eax
  unsigned int *v26; // eax
  int v27; // [esp-Ch] [ebp-54h]
  int v28; // [esp-8h] [ebp-50h]
  int v29; // [esp+28h] [ebp-20h] BYREF
  int v30; // [esp+2Ch] [ebp-1Ch]
  int v31; // [esp+30h] [ebp-18h]
  int v32; // [esp+38h] [ebp-10h] BYREF
  char v33[12]; // [esp+3Ch] [ebp-Ch] BYREF

  v5 = v4; /*0x5cc334*/
  if ( *(unsigned char *)(v4 + 12) != 1 ) /*0x5cc33b*/
    goto LABEL_19; /*0x5cc33b*/
  v6 = *(unsigned int *)(v4 + 24); /*0x5cc344*/
  if ( *(unsigned int *)(v4 + 16) != -1 ) /*0x5cc34a*/
  {
        v6 = this->Timer::GetTicks() - *(unsigned int *)((unsigned int)(a1)+ 16);
    if ( v7 >= v6 ) /*0x5cc359*/
      goto LABEL_6; /*0x5cc359*/
    v6 -= v7; /*0x5cc35b*/
  }
  if ( v6 ) /*0x5cc35f*/
  {
  LABEL_19:
    v26 = (unsigned int *)a3; /*0x5cc526*/
    *(unsigned int *)a3 = 0; /*0x5cc52c*/
    v26[1] = 0; /*0x5cc52e*/
    v26[2] = 0; /*0x5cc531*/
    v26[3] = 0; /*0x5cc534*/
    return 0; /*0x5cc534*/
  }
  LABEL_6:
  v8 = *(unsigned int *)(v5 + 36); /*0x5cc365*/
    *(unsigned int *)((unsigned int)(a1)+ 16) = this->Timer::GetTicks();
  *(unsigned int *)(v5 + 20) = v30; /*0x5cc378*/
  v9 = *(unsigned int *)(v5 + 64); /*0x5cc37b*/
  *(unsigned int *)(v5 + 24) = v8; /*0x5cc381*/
  if ( v9 >= 4 ) /*0x5cc384*/
    return 0; /*0x5cc538*/
  FoundationSize = Building::GetFoundationSize(&v29, *(unsigned int *)(v5 + 40)); /*0x5cc398*/
  v11 = (unsigned int *)a3; /*0x5cc39d*/
  v12 = (unsigned int *)a3; /*0x5cc3a3*/
  *(unsigned int *)a3 = *FoundationSize; /*0x5cc3a5*/
  v12[1] = FoundationSize[1]; /*0x5cc3aa*/
  v12[2] = FoundationSize[2]; /*0x5cc3b0*/
  v12[3] = FoundationSize[3]; /*0x5cc3b6*/
  v13 = v11[1]; /*0x5cc3c0*/
  *v11 += *(unsigned int *)(v5 + 4); /*0x5cc3c3*/
  v11[1] = *(unsigned int *)(v5 + 8) + v13; /*0x5cc3ca*/
  if ( (*(unsigned int *)(v5 + 56) & 0x200) != 0 ) /*0x5cc3d3*/
  {
    *v11 += *(int16_t *)(*(unsigned int *)(v5 + 28) + 2) / -2; /*0x5cc3e7*/
    v11[1] += *(int16_t *)(*(unsigned int *)(v5 + 28) + 4) / -2; /*0x5cc3fc*/
  }
  (*(void (**)(MSOverlayAnim *, unsigned int *, DSurface *, unsigned int *, unsigned int, int, int))(*(unsigned int *)aP0->__pad_0 /*0x5cc413*/
                                                                                            + 8))(
    aP0,
    v11,
    DSurface_Alternate,
    v11,
    0,
    1,
    a2);
  v14 = *(unsigned int *)(v5 + 64); /*0x5cc41c*/
  if ( v14 >= 3 ) /*0x5cc41e*/
    v14 = 3; /*0x5cc420*/
  v15 = *(unsigned int *)(v5 + 56) | ((unsigned int *)(dword_830078))[v14]; /*0x5cc443*/
  v16 = *(unsigned int *)aP0->__pad_0; /*0x5cc445*/
  v30 = *(unsigned int *)(v5 + 4); /*0x5cc447*/
  v27 = v15; /*0x5cc452*/
  v31 = *(unsigned int *)(v5 + 8); /*0x5cc456*/
  v17 = (int *)(*(int (**)(MSOverlayAnim *))(v16 + 120))(aP0); /*0x5cc45a*/
  DrawToSurfaceSHP( /*0x5cc470*/
    (int)aP0,
    *(unsigned int *)(v5 + 32),
    *(unsigned int *)(v5 + 28),
    *(unsigned int *)(v5 + 40),
    &v29,
    v17,
    (int)v33,
    v27,
    0,
    0,
    0,
    1000,
    0,
    0,
    0,
    0);
  v18 = (void *)((int)((void *)(*(unsigned int *)(v5 + 68))));
  if ( v18 ) /*0x5cc47a*/
  {
    a3 = (void *)(v5);
    a3 = (void *)((*(int (**)(int, int *))(*(unsigned int *)v18 + 16))(v18, &a3));
    v19 = *(unsigned int *)(v5 + 68); /*0x5cc48e*/
    for ( i = 0; i < *(unsigned int *)(v19 + 16); ++i ) /*0x5cc498*/
    {
      if ( i != (int)(a3) ) /*0x5cc49e*/
      {
        v21 = *(unsigned int *)(*(unsigned int *)(v19 + 4) + 4 * i); /*0x5cc4a5*/
        (*(void (**)(int, MSOverlayAnim *, unsigned int *))(*(unsigned int *)v21 + 20))(v21, aP0, v11); /*0x5cc4aa*/
      }
      v19 = *(unsigned int *)(v5 + 68); /*0x5cc4ad*/
    }
  }
  v22 = *(unsigned int *)(v5 + 64) + 1; /*0x5cc4bc*/
  *(unsigned int *)(v5 + 64) = v22; /*0x5cc4be*/
  if ( v22 >= 4 ) /*0x5cc4c4*/
  {
    v23 = *(unsigned int *)(v5 + 56); /*0x5cc4cf*/
    v29 = *(unsigned int *)(v5 + 4); /*0x5cc4db*/
    IDA_BYTE1(v23) |= 4u; /*0x5cc4e3*/
    v28 = v23; /*0x5cc4e7*/
    v30 = *(unsigned int *)(v5 + 8); /*0x5cc4e8*/
    v24 = (int *)(*(int (**)(MSOverlayAnim *, int *))(*(unsigned int *)aP0->__pad_0 + 120))(aP0, &v32); /*0x5cc4f5*/
    DrawToSurfaceSHP( /*0x5cc50f*/
      (int)DSurface_Alternate,
      *(unsigned int *)(v5 + 32),
      *(unsigned int *)(v5 + 28),
      *(unsigned int *)(v5 + 40),
      &v29,
      v24,
      v28,
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
  return (gamemd::CampaignClass **)(*(unsigned char *)(v5 + 72) == 0);
}
}
// 0x5D6430
namespace gamemd {
void ScenarioClass_dispatchEvents()
{
// 0x65c7e0
  return Random::Range((Random *)&((unsigned int *)(dword_A8B230))[14].NeedsSaveOrLink, 0, 9); /*0x69b684*/
}
}
// 0x5D6440
namespace gamemd {
int ScenarioClass::MissionStubReturnZero3()
{

  return (*(int (**)(void *))(*(unsigned int *)this + 108))(this);

}
// 0x5D6BE0
namespace gamemd {
int ScenarioClass::AssignStartPositions(char a1)
{

  int i; // edi
  unsigned int *v2; // ecx
  int v3; // esi
  void **v5; // [esp+4h] [ebp-18h] BYREF
  void *Block; // [esp+8h] [ebp-14h]
  char v7; // [esp+11h] [ebp-Bh]

  Multiplayer::FindStartPositions(&v5); /*0x5d6bec*/
  for ( i = 0; i < HouseClass_Count; ++i ) /*0x5d6bfa*/
  {
    v2 = (unsigned int *)*((unsigned int *)HouseClass_Array + i); /*0x5d6c02*/
    if ( !*(unsigned char *)(v2[13] + 422) ) /*0x5d6c08*/
    {
      v3 = v2[22550]; /*0x5d6c12*/
      if ( v3 != -2 ) /*0x5d6c1b*/
      {
        HouseClass::SetMapSeed(v2, *((unsigned int *)Block + v3)); /*0x5d6c25*/
        *((unsigned int *)g_abs_A8B230 + v3 + 1120) = i; /*0x5d6c2f*/
      }
    }
  }
  v5 = (void **)(&vt_VectorClass_Cell);
  if ( Block && v7 ) /*0x5d6c58*/
    RA2_OPDEL(Block); /*0x5d6c5b*/
  return 1; /*0x5d6c4f*/

}
}
// 0x6832C0
namespace gamemd {
TimerStruct * * ScenarioClass::Constructor()
{

  unsigned int v2;
  unsigned int v3;
  unsigned int v4;
  unsigned int v5;
  unsigned int *v6; // eax
  int v7; // ecx
  int v8; // esi
  unsigned char *v9; // edi
  int v10; // esi
  unsigned char *v11; // edi

  SeedInitRNG((unsigned int *)((char *)this + 536), 0); /*0x6832cf*/
  *((unsigned int *)this + 389) = this->Timer::GetTicks(); /*0x6832e5*/
  *((unsigned int *)this + 391) = 0; /*0x6832eb*/
  *((unsigned int *)this + 392) = this->Timer::GetTicks(); /*0x6832f6*/
  *((unsigned int *)this + 394) = 0; /*0x6832fc*/
  v2 = g_abs_A8ED84; /*0x683302*/
  *((unsigned int *)this + 1148) = 0; /*0x683307*/
  *((unsigned int *)this + 1146) = v2; /*0x68330d*/
  *((unsigned char *)this + 4600) = 0; /*0x683313*/
  v3 = g_abs_A8ED84; /*0x683319*/
  *((unsigned int *)this + 1160) = 0; /*0x68331f*/
  *((unsigned int *)this + 1158) = v3; /*0x683325*/
  *((unsigned int *)this + 1161) = g_abs_A8ED84; /*0x683331*/
  *((unsigned int *)this + 1163) = 0; /*0x683337*/
  v4 = g_abs_A8ED84; /*0x68333d*/
  *((unsigned int *)this + 1166) = 0; /*0x683342*/
  *((unsigned int *)this + 1164) = v4; /*0x683348*/
  *((unsigned int *)this + 1167) = g_abs_A8ED84; /*0x683354*/
  *((unsigned int *)this + 1169) = 0; /*0x68335a*/
  v5 = g_abs_A8ED84; /*0x683360*/
  *((unsigned int *)this + 1172) = 0; /*0x683366*/
  *((unsigned int *)this + 1170) = v5; /*0x68336c*/
  *((unsigned int *)this + 3376) = g_abs_A8ED84; /*0x683381*/
  *((unsigned int *)this + 3378) = 0; /*0x683387*/
  TypeList::TechnoTypeConstructor((unsigned int *)((char *)this + 13524), 0, 0); /*0x68338d*/
  *((unsigned int *)this + 3385) = 0; /*0x683397*/
  *((unsigned int *)this + 3386) = 10; /*0x68339a*/
  *((unsigned int *)this + 3381) = &vt_TypeList_TechnoTypeClass; /*0x68339d*/
  VectorClass::Construct((unsigned int *)((char *)this + 13552), 0, 0); /*0x6833ad*/
  *((unsigned int *)this + 3393) = 10; /*0x6833b2*/
  *((unsigned int *)this + 3392) = 0; /*0x6833b5*/
  *((unsigned int *)this + 3388) = &vt_TypeList_int; /*0x6833b8*/
  VectorClass::Construct((unsigned int *)((char *)this + 13580), 0, 0); /*0x6833c8*/
  *((unsigned int *)this + 3400) = 10; /*0x6833cf*/
  *((unsigned int *)this + 3399) = 0; /*0x6833d2*/
  *((unsigned int *)this + 3395) = &vt_TypeList_int; /*0x6833d5*/
  ScenarioClass::InitTimer(this); /*0x6833db*/
  *((unsigned char *)this + 13720) = 0; /*0x6833e2*/
  *((unsigned char *)this + 13501) = 0; /*0x6833e8*/
  ScenarioClass::ResetIntroFlags(this); /*0x6833ee*/
  *((unsigned int *)this + 1173) = 1; /*0x6833f3*/
  *((unsigned int *)this + 3379) = -1; /*0x6833fd*/
  *((unsigned char *)this + 4) = 0; /*0x683407*/
  *((unsigned char *)this + 264) = 0; /*0x68340a*/
  v6 = (unsigned int *)((char *)this + 1586); /*0x683410*/
  v7 = 702; /*0x683416*/
  do /*0x683427*/
  {
    *v6++ = dword_B05458; /*0x683421*/
    --v7; /*0x683426*/
  }
  while ( v7 ); /*0x683427*/
  wcscpy((wchar_t *)((char *)this + 4960), &g_abs_887734); /*0x683435*/
  wcscpy((wchar_t *)((char *)this + 5082), &g_abs_887734); /*0x683446*/
  strcpy((char *)((char *)this + 4700), &g_abs_889F64); /*0x683475*/
  strcpy((char *)((char *)this + 7248), &g_abs_889F64); /*0x68349d*/
  strcpy((char *)((char *)this + 5050), &g_abs_889F64); /*0x6834bf*/
  wcscpy((wchar_t *)((char *)this + 5200), &g_abs_887734); /*0x6834cf*/
  v8 = 0; /*0x6834d7*/
  v9 = (unsigned char *)((char *)this + 7344); /*0x6834d9*/
  do /*0x683502*/
  {
    *(v9 - 40) = 0; /*0x6834e2*/
    if ( (unsigned int)v8 < 0x32 && *v9 ) /*0x6834e7*/
    {
      *v9 = 0; /*0x6834eb*/
      *((unsigned char *)this + 13482) = 1; /*0x6834ef*/
      HouseClass::UpdateAllTypes((void *)v8); /*0x6834f6*/
    }
    ++v8; /*0x6834fb*/
    v9 += 41; /*0x6834fc*/
  }
  while ( v8 < 50 ); /*0x683502*/
  v10 = 0; /*0x683504*/
  v11 = (unsigned char *)((char *)this + 9394); /*0x683506*/
  do /*0x68352f*/
  {
    *(v11 - 40) = 0; /*0x68350f*/
    if ( (unsigned int)v10 < 0x64 && *v11 ) /*0x683514*/
    {
      *v11 = 0; /*0x683518*/
      *((unsigned char *)this + 13482) = 1; /*0x68351c*/
      TriggerActionQueue::ProcessAll(v10); /*0x683523*/
    }
    ++v10; /*0x683528*/
    v11 += 41; /*0x683529*/
  }
  while ( v10 < 100 ); /*0x68352f*/
  *(unsigned int *)((char *)this + 13454) = 0; /*0x683534*/
  *(unsigned int *)((char *)this + 13458) = 0; /*0x68353c*/
  *(unsigned int *)((char *)this + 13462) = 0; /*0x683543*/
  *(unsigned int *)((char *)this + 13466) = 0; /*0x683549*/
  return this; /*0x683533*/

}
}
// 0x683AB0
namespace gamemd {
int ScenarioClass::LoadScenarioAndStart(AnimClass * Source, char a2, int a3)
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
  unsigned int v17[10]; // [esp+28h] [ebp-D4h] BYREF
  char v18; // [esp+50h] [ebp-ACh]
  int v19; // [esp+54h] [ebp-A8h]
  int v20; // [esp+58h] [ebp-A4h]
  char v21; // [esp+5Ch] [ebp-A0h]
  unsigned int v22[22]; // [esp+74h] [ebp-88h] BYREF
  unsigned char v23[12]; // [esp+CCh] [ebp-30h] BYREF
  int v24; // [esp+D8h] [ebp-24h]
  CHAR v25[28]; // [esp+E0h] [ebp-1Ch] BYREF

  v3 = Source; /*0x683ab8*/
  if ( (!Source || !strlen(Source->field_0)) && a3 != -1 ) /*0x683ade*/
  {
    if ( g_abs_A8EA70 == 1 ) /*0x683ae7*/
      v3 = (AnimClass *)&g_abs_A83E48; /*0x683ae9*/
    else
      v3 = (AnimClass *)(*((unsigned int *)g_CampaignTypeArray + a3) + 156); /*0x683af8*/
  }
  *((unsigned int *)g_abs_A8B230 + 3379) = a3; /*0x683b0a*/
  Debug::Log(); /*0x683b10*/
  Debug::Log(); /*0x683b21*/
  strcpy((char *)g_abs_A8B230 + 4700, v3->field_0); /*0x683b47*/
  _strupr((char *)g_abs_A8B230 + 4700); /*0x683b5d*/
  SetSoundWarning(-1); /*0x683b68*/
  if ( !g_abs_A8B238[0] ) /*0x683b73*/
  {
    v4 = *((unsigned int *)g_abs_A8B230 + 3379); /*0x683b7b*/
    if ( v4 == -1 ) /*0x683b84*/
      goto LABEL_14; /*0x683b84*/
    Field = *(unsigned int *)(*((unsigned int *)g_CampaignTypeArray + v4) + 152); /*0x683b8f*/
    goto LABEL_13; /*0x683b95*/
  }
  if ( g_abs_A8B254 != -1 ) /*0x683b9f*/
  {
    v6 = *(int **)(g_abs_A8B8CC + 4 * g_abs_A8B254); /*0x683ba7*/
    v7 = Game::CheckForGameCD((void *)0x3C); /*0x683baf*/
    if ( !ScenarioClass::CheckExists(v6, v7) ) /*0x683bb7*/
    {
      Field = GameOption::GetField((unsigned int **)v6); /*0x683bc7*/
LABEL_13:
      SetSoundWarning(Field); /*0x683bc9*/
    }
  }
LABEL_14:
  v8 = ++g_abs_A8DAB4; /*0x683bce*/
  if ( !(uint8_t)vt_CD(dword_81C1D0) ) /*0x683bf6*/
  {
LABEL_21:
    if ( g_abs_A8B238[0] == 4 ) /*0x683d3c*/
      ChatMessageWOL(0, &g_abs_887734); /*0x683d45*/
    return 0; /*0x683d56*/
  }
  --g_abs_A8DAB4; /*0x683c03*/
  (*(void (**)(int))(*(unsigned int *)g_abs_887640 + 12))(g_abs_887640); /*0x683c11*/
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
                      (uint8_t ***)v16,
                      (uint8_t *)g_abs_82BF9C,
                      (uint8_t *)g_INI_Key_Intro,
                      -1);
    if ( Bool != (Movie *)-1 /*0x683ca5*/
      || (Bool = (Movie *)INIClass::GetBool(
                            (uint8_t ***)v16,
                            (uint8_t *)g_abs_82BF9C,
                            (uint8_t *)g_abs_83D8A8,
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
    (*(void (**)(int))(*(unsigned int *)g_abs_887640 + 16))(g_abs_887640); /*0x683d32*/
    goto LABEL_21; /*0x683d32*/
  }
  v12 = *((unsigned int *)g_abs_A8B230 + 1294); /*0x683d5e*/
  if ( v12 != -1 ) /*0x683d67*/
    wsprintfA(v25, g_abs_83D888, *((const char **)g_abs_ABF394 + v12)); /*0x683d80*/
  if ( *((int *)g_abs_A8B230 + 3380) > 0 ) /*0x683d95*/
    LoadScreen::RenderLoop(); /*0x683d97*/
  if ( a2 ) /*0x683da0*/
    Movie::PlayWrapper(*((unsigned int *)g_abs_A8B230 + 1297), (int)v3, v8, 1, 1, 1); /*0x683db6*/
  if ( g_abs_886FB8 != *(unsigned int *)&g_abs_A8EA70 /*0x683dd6*/
    || g_abs_886FBC != *(unsigned int *)&g_abs_A8EA70 )
  {
    Debug::Log(); /*0x683ddf*/
    ChangeVideoMode(*(unsigned int *)&g_abs_A8EA70, *(unsigned int *)&g_abs_A8EA70); /*0x683df3*/
  }
  LoadingScreen::FreeResources3(); /*0x683df8*/
  AudioOptionsClass::ApplySettings((int)&g_abs_A8EA70); /*0x683e02*/
  (*(void (**)(IUnknown *, unsigned int))(g_abs_88730C->field_0 + 24))(g_abs_88730C, 0); /*0x683e10*/
  IDA_LOBYTE(v13) = 1; /*0x683e19*/
  Frame::Present(v13, 0); /*0x683e1c*/
  if ( *((unsigned int *)g_abs_A8B230 + 389) == -1 ) /*0x683e35*/
  {
    v14 = (DWORD *)((char *)g_abs_A8B230 + 1556); /*0x683e26*/
    *v14 = Timer::GetTicks(); /*0x683e3f*/
  }
  if ( *((unsigned int *)g_abs_A8B230 + 1820) == -1 ) /*0x683e50*/
    Theme::Stop(&g_BuildingTypeClass_Count, 1); /*0x683e66*/
  else
    Theme::QueueSong((int)&g_BuildingTypeClass_Count, *((unsigned int *)g_abs_A8B230 + 1820)); /*0x683e58*/
  DisableIME(); /*0x683e6b*/
  g_abs_A8EA70 = 1; /*0x683e75*/
  g_abs_A8E378 = 1; /*0x683e7f*/
  if ( g_abs_A8B238[0] == 4 ) /*0x683e86*/
    ChatMessageWOL(0, &g_abs_887734); /*0x683e8f*/
  return 1; /*0x683d4a*/

}
}
// 0x683EB0
namespace gamemd {
int ScenarioClass::CleanupTemporary()
{

  void *v0; // ecx
  unsigned int *v1; // esi
  DWORD Ticks; // eax
  int v3; // ecx
  DWORD v4; // eax

  sub_406F00(); /*0x683eb1*/
  g_abs_83D834 = sub_4072B0((unsigned int *)g_abs_87E758); /*0x683ecc*/
  EndBufferMixer((int *)g_abs_87E758, 0x4000); /*0x683ed1*/
  if ( !g_abs_A8B238[0] || g_abs_A8B238[0] == 5 ) /*0x683ee2*/
  {
    if ( *((unsigned int *)g_abs_A8B230 + 389) != -1 ) /*0x683eff*/
      Timer::GetTicks(); /*0x683f04*/
    Debug::Log(); /*0x683f13*/
    v0 = g_abs_A8B230; /*0x683f18*/
    v1 = (char *)g_abs_A8B230 + 1556; /*0x683f27*/
    if ( *((unsigned int *)g_abs_A8B230 + 389) != -1 ) /*0x683f31*/
    {
      Ticks = Timer::GetTicks(); /*0x683f36*/
      v3 = v1[2]; /*0x683f3d*/
      v4 = Ticks - *v1; /*0x683f40*/
      *v1 = -1; /*0x683f42*/
      v0 = (void *)(v4 + v3); /*0x683f48*/
      v1[2] = v0; /*0x683f4a*/
    }
  }
  IDA_LOBYTE(v0) = 1; /*0x683f4d*/
  AsyncIO::Read(v0); /*0x683f4f*/
  if ( g_abs_887368 ) /*0x683f5d*/
    Tooltip::Enable((void *)g_abs_887368, 0); /*0x683f61*/
  Mouse::ReleaseCapture(&g_abs_87F7E8); /*0x683f6b*/
  Mouse::SetCursor((int)&g_abs_87F7E8, 0, 0); /*0x683f79*/
  (*(void (**)(int))(*(unsigned int *)g_abs_887640 + 12))(g_abs_887640); /*0x683f86*/
  MapClass::MarkForRedraw(&g_abs_87F7E8, 2); /*0x683f90*/
  TacticalMap::Redraw(&g_abs_87F7E8); /*0x683f9a*/
  return (*(int (**)(int))(*(unsigned int *)g_abs_887640 + 16))(g_abs_887640);

}
}
// 0x684180
namespace gamemd {
unsigned char * ScenarioClass::ProcessIntroTimer()
{

  unsigned char *result; // eax

  result = (unsigned char *)*((unsigned int *)g_abs_A8B230 + 395); /*0x684186*/
  if ( result ) /*0x68418e*/
  {
    *((unsigned int *)g_abs_A8B230 + 395) = result - 1; /*0x684195*/
    result = g_abs_A8B230; /*0x68419b*/
    if ( !*((unsigned int *)g_abs_A8B230 + 395) ) /*0x6841a0*/
    {
      if ( !g_abs_B054CC ) /*0x6841b6*/
      {
        if ( *((unsigned char *)g_abs_A8B230 + 13730) == 1 ) /*0x6841bf*/
        {
          while ( (*(int (**)(int))(*(unsigned int *)g_abs_887640 + 40))(g_abs_887640) ) /*0x6841c9*/
            (*(void (**)(int))(*(unsigned int *)g_abs_887640 + 16))(g_abs_887640); /*0x6841d8*/
          result = g_abs_A8B230; /*0x6841ea*/
        }
        result[13730] = 0; /*0x6841ef*/
        g_abs_A8ED9C = 0; /*0x6841fc*/
        Timer::PumpMessages((HWND *)g_abs_87F770); /*0x684203*/
        result = g_abs_A8B230; /*0x684208*/
        g_abs_B07784 = 0; /*0x68420d*/
      }
      if ( *((unsigned int *)result + 389) == -1 ) /*0x684227*/
        *((unsigned int *)result + 389) = Timer::GetTicks(); /*0x684231*/
      return (unsigned char *)sub_406F40(); /*0x684233*/
    }
  }
  return result; /*0x684239*/

}
}
// 0x686730
namespace gamemd {
void ScenarioClass_Construct()
{
  char result; // al
  char Map; // bl
  CCINIClass v5; // [esp+10h] [ebp-C4h] BYREF
  CCFileClass v6; // [esp+68h] [ebp-6Ch] BYREF
  int v7[3]; // [esp+C0h] [ebp-14h] BYREF
  int v8; // [esp+CCh] [ebp-8h]

  result = (void*)&CD_vftable(dword_81C1D0); /*0x68674c*/
  if ( result ) /*0x686754*/
  {
    *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) = 0; /*0x686765*/
    *((unsigned int *)((char *)&v5 + 0)) = 0; /*0x68676b*/
    *((unsigned int *)((char *)&v5 + 1)) = 0; /*0x68676f*/
    GenericList::Constructor((GenericList *)&(unsigned int *)((char *)&v5 + 2)); /*0x686773*/
    *((unsigned int *)((char *)&v5 + 2)) = (int)&List_INIClass_INISection___vftable; /*0x68677c*/
    Node::Init((Node *)&(unsigned int *)((char *)&v5 + 8)); /*0x686784*/
    v5.? = 0; /*0x68678d*/
    v5.ownsFile = 0; /*0x686792*/
    *(unsigned int *)v5.INIClass = &CCINIClass_Vtable; /*0x686797*/
    CCFileClass::Construct(&v6, Source); /*0x68679f*/
    Debug::Log(); /*0x6867aa*/
    if ( CCINIClass::Load(&v5, (int)&v6, 1, 0) ) /*0x6867be*/
    {
      strcpy((char *)&dword_A8B230[130].abstractFlags, Source); /*0x686836*/
      Map = ScenarioClass::LoadMap(0, (bool *)v5.INIClass, a2); /*0x686851*/
      *(unsigned int *)v6.CDFileClass = (void*)&CCFileClass_vftable; /*0x686853*/
      v8 = 0; /*0x68685b*/
      Vector::Clear((int)v7); /*0x686862*/
      *(unsigned int *)v6.CDFileClass = &off_7E1668; /*0x68686b*/
      BufferIOFileClass::Dtor((BufferIOFileClass *)&v6); /*0x686873*/
      HashTable::DestroyHashTableINIClass((INIClass *)&v5); /*0x68687c*/
      return Map; /*0x686881*/
    }
    else
    {
      Debug::Log(); /*0x6867cc*/
      *(unsigned int *)v6.CDFileClass = (void*)&CCFileClass_vftable; /*0x6867db*/
      v8 = 0; /*0x6867e3*/
      Vector::Clear((int)v7); /*0x6867ea*/
      *(unsigned int *)v6.CDFileClass = &off_7E1668; /*0x6867f3*/
      BufferIOFileClass::Dtor((BufferIOFileClass *)&v6); /*0x6867fb*/
      HashTable::DestroyHashTableINIClass((INIClass *)&v5); /*0x686804*/
      return 0; /*0x686809*/
    }
  }
  return result; /*0x686756*/
}
}
// 0x686B20
namespace gamemd {
ScenarioClass * * ScenarioClass_LoadMap()
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
  unsigned int *Instance; // eax
  INIClass *v35; // ebx
  CCINIClass *k; // esi
  INIClass *v37; // edi
  int eax102; // eax
  ScenarioClass *v38; // ebp
  int campaignIndex; // eax
  ObjectClass *v47; // eax
  int m; // eax
  CCINIClass *v56; // [esp+14h] [ebp-160h]
  uint8_t **var158[3]; // [esp+1Ch] [ebp-158h] BYREF
  void **v57; // [esp+28h] [ebp-14Ch] BYREF
  MultiplayerGameMode aP1[3]; // [esp+84h] [ebp-F0h] BYREF
  unsigned int v65[3]; // [esp+DCh] [ebp-98h] BYREF
  ObjectClass *v69; // [esp+E8h] [ebp-8Ch]
  INIClass Filename; // [esp+100h] [ebp-74h] BYREF
  unsigned char var34[16]; // [esp+140h] [ebp-34h] BYREF
  wchar_t Buffer[18]; // [esp+150h] [ebp-24h] BYREF

  bool v51 = g_GameMode_Current == 0;
  v3 = a2;
  ++*(unsigned int *)&g_NetworkPlayerBuffer[4464];
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
      IDA_BYTE1(v6) = IDA_BYTE1(g_ScenarioClass_Instance->nextScenario[0]) & 0xEF;
      g_ScenarioClass_Instance->nextScenario[0] = v6 | (((uint8_t)FOW & 1) << 12);
      v7 = *(ObjectClass **)&g_NetworkPlayerBuffer[4900];
      IDA_BYTE1(v7) = g_NetworkPlayerBuffer[4901] & 0xEF;
      *(unsigned int *)&g_NetworkPlayerBuffer[4900] = (unsigned int)v7 | (((uint8_t)FOW & 1) << 12);
    }
    else
    {
      g_ScenarioClass_Instance->difficulty2 = *(unsigned int *)&g_NetworkPlayerBuffer[5416];
      g_ScenarioClass_Instance->elapsedTimer[0] = 2 - *(unsigned int *)&g_NetworkPlayerBuffer[5416];
      int v4 = g_ScenarioClass_Instance->nextScenario[0];
      IDA_BYTE1(v4) = IDA_BYTE1(g_ScenarioClass_Instance->nextScenario[0]) & 0xEF;
      g_ScenarioClass_Instance->nextScenario[0] = v4;
      v5 = *(ObjectClass **)&g_NetworkPlayerBuffer[4900];
      IDA_BYTE1(v5) = g_NetworkPlayerBuffer[4901] & 0xEF;
      *(unsigned int *)&g_NetworkPlayerBuffer[4900] = v5;
    }
    *(unsigned int *)&g_ScenarioClass_Instance->__pad_3566[54] = INIClass::ReadInt_Overwrite(
                                                     (int)v3,
                                                     (uint8_t *)&g_INI_Key_Lighting.sectionHead[1],
                                                     (CCINIClass *)&stru_830620[54856],
                                                     (INIClass *)0x2710);
    Bool_Overwrite = INIClass::ReadBool_Overwrite(
                       (int)v3,
                       (uint8_t *)&g_INI_Key_Lighting.sectionHead[1],
                       (CCINIClass *)&stru_830620[54844],
                       0);
    var158[1] = 0;
    char v53 = Bool_Overwrite;
    var158[2] = 0;
    GenericList::Constructor(&v57);
    v57 = &vt_List_INIClass_INISection;
  unsigned int v58[6]; // [esp+44h] [ebp-130h] BYREF
    Node_flat::Init(v58);
    v58[5] = 0;
    char v59 = 0;
    var158[0] = (uint8_t **)&CCINIClass_Vtable;
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
        *(unsigned short *)g_ScenarioClass_Instance->name = 0;
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
            (uint8_t *)g_ScenarioClass_Instance->fileName,
            (CCINIClass *)&g_INI_Key_UIName.headNode[1],
            (wchar_t *)&DataGlobal_87F8E4[32336],
            (CCINIClass *)g_ScenarioClass_Instance->name,
            0x2Du);
        IDA_LOWORD(g_ScenarioClass_Instance->briefing[0]) = 0;
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
            (uint8_t *)&stru_830620[37112],
            (INIClass *)&DataGlobal_87F8E4[42624],
            (INIClass *)g_ScenarioClass_Instance->briefingCsf,
            32);
          if ( strlen((const char *)g_ScenarioClass_Instance->briefingCsf) )
          {
            StringCSF = GetStringCSF((wchar_t *)g_ScenarioClass_Instance->briefingCsf, 0, &stru_830620[53784], 3167);
            wcsncpy((wchar_t *)g_ScenarioClass_Instance->briefing, StringCSF, 0x400u);
            IDA_HIWORD(g_ScenarioClass_Instance->briefing[511]) = 0;
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
            (uint8_t *)&g_INI_Key_UIName,
            (INIClass *)&DataGlobal_87F8E4[42624],
            (INIClass *)g_ScenarioClass_Instance->uiName,
            32);
          if ( strlen(g_ScenarioClass_Instance->uiName) )
          {
            v13 = GetStringCSF((wchar_t *)g_ScenarioClass_Instance->uiName, 0, &stru_830620[53784], 3179);
            wcsncpy((wchar_t *)g_ScenarioClass_Instance->name, v13, 0x2Du);
            *(unsigned short *)&g_ScenarioClass_Instance->name[88] = 0;
            sprintf((char *const)Buffer, &stru_830620[54828], g_ScenarioClass_Instance->uiName);
            v14 = GetStringCSF(Buffer, 0, &stru_830620[53784], 3183);
            wcsncpy((wchar_t *)g_ScenarioClass_Instance->uiNameLoaded, v14, 0x2Du);
            if ( !wcsncmp(
                    (const wchar_t *)g_ScenarioClass_Instance->uiNameLoaded,
                    (const wchar_t *)&stru_830620[54808],
                    8u) )
              wcsncpy((wchar_t *)g_ScenarioClass_Instance->uiNameLoaded, (const wchar_t *)g_ScenarioClass_Instance->name, 0x2Du);
            *(unsigned short *)&g_ScenarioClass_Instance->uiNameLoaded[88] = 0;
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
            (uint8_t *)&stru_830620[54792],
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
            (uint8_t *)&stru_830620[54776],
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
                                               (uint8_t *)g_ScenarioClass_Instance->fileName,
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
                                               (uint8_t *)g_ScenarioClass_Instance->fileName,
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
                                               (uint8_t *)g_ScenarioClass_Instance->fileName,
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
                                               (uint8_t *)g_ScenarioClass_Instance->fileName,
                                               (CCINIClass *)&stru_830620[54712],
                                               (INIClass *)g_ScenarioClass_Instance->ls800BriefLocY);
        IDA_LOBYTE(g_ScenarioClass_Instance->ls640BkgdName[0]) = 0;
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
            (uint8_t *)&stru_830620[54696],
            (INIClass *)&DataGlobal_87F8E4[42624],
            (INIClass *)g_ScenarioClass_Instance->ls640BkgdName,
            64);
        IDA_LOBYTE(g_ScenarioClass_Instance->ls800BkgdName[0]) = 0;
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
            (uint8_t *)&stru_830620[54680],
            (INIClass *)&DataGlobal_87F8E4[42624],
            (INIClass *)g_ScenarioClass_Instance->ls800BkgdName,
            64);
        IDA_LOBYTE(g_ScenarioClass_Instance->ls800BkgdPal[0]) = 0;
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
            (uint8_t *)&stru_830620[54664],
            (INIClass *)&DataGlobal_87F8E4[42624],
            (INIClass *)g_ScenarioClass_Instance->ls800BkgdPal,
            64);
      }
    }
    for ( i = 1120; i < 1136; g_ScenarioClass_Instance->nextScenario[i - 1] = -1 )
      ++i;
    if ( g_GameMode_Current )
    {
      ScenarioClass::ReadWaypoints((int16_t *)g_ScenarioClass_Instance, v3);
      v25 = g_ScenarioClass_Instance;
      if ( g_ScenarioClass_Instance->isRandom )
      {
        int v26 = 0;
        while ( 1 )
        {
          *(unsigned int *)&v25->waypoints[v26 * 4] = v25->houseHomeCells[v26];
          if ( ++v26 >= 8 )
            break;
          v25 = g_ScenarioClass_Instance;
        }
      }
      RulesClass::LoadCountries(*(RulesClass **)&DataGlobal_87F8E4[30972]);
      RulesClass::LoadFromINI(*(RulesClass **)&DataGlobal_87F8E4[30972]);
      for ( j = 0; j < g_SuperWeaponTypeArray; ++j )
        (*(void (**)(unsigned int, unsigned int))(**((unsigned int **)g_SuperWeaponTypeCount + j) + 100))(
          *((unsigned int *)g_SuperWeaponTypeCount + j),
          *(unsigned int *)&DataGlobal_87F8E4[30564]);
      AssignSessionHouses();
      v3 = a2;
  unsigned int v67[4]; // [esp+F0h] [ebp-84h] BYREF
      v67[0] = 1;
      v67[1] = 1;
      v67[2] = 50;
      v67[3] = 50;
  unsigned int *v28; // eax
      v28 = INIClass::ParseValue(
              (int)a2,
              (CCINIClass *)var34,
              (INIClass *)&g_INI_Key_CellTags.headNode[2],
              (uint8_t *)g_INI_Key_Size,
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
              (uint8_t *)g_INI_Key_LocalSize,
              &DataGlobal_87F8E4);
      v60 = *v29;
      v61 = v29[1];
      v62 = v29[2];
      v63 = v29[3];
      Shroud::ProcessCellVisibility(&DataGlobal_87F7E8, (MouseClass *)&v60);
      (*(void (**)(SkirmishDialog *, char))(*(unsigned int *)g_GameStateFlags->__pad_0 + 128))(
        g_GameStateFlags,
        v53);
      if ( g_GameOptionsFlags == 2 )
        HouseClass::FindStartPositions();
      else
        (*(void (**)(SkirmishDialog *, char))(*(unsigned int *)g_GameStateFlags->__pad_0 + 132))(
          g_GameStateFlags,
          v53);
    }
    Instance = LoadProgressMgr::GetInstance();
    LoadingScreen::Render(Instance);
    Multiplayer::ShowProgress(&g_GameMode_Current, 3);
    if ( !v51 )
      break;
    v51 = 0;
    *(unsigned int *)aP1[0].__pad_0 = &vt_CCFileClass;
    v69 = 0;
    Vector::Clear((int)v65);
    *(unsigned int *)aP1[0].__pad_0 = &off_7E1668;
    BufferIOFileClass::Dtor(aP1);
    HashTable_flat::DestroyHashTableINIClass((void **)var158);
  }
  SwizzleManager::ConvertWrapper((int)&g_OverlayTypeConfig[18712]);
  if ( *(unsigned int *)&DataGlobal_87F8E4[31296] )
    (*(void (**)(unsigned int, int))(**(unsigned int **)&DataGlobal_87F8E4[31296] + 32))(
      *(unsigned int *)&DataGlobal_87F8E4[31296],
      1);
  int v31 = operator new(0xE18u);
  if ( v31 )
    int v32 = TacticalMap::Construct(v31);
  else
    v32 = 0;
  *(unsigned int *)&DataGlobal_87F8E4[31296] = v32;
  TacticalClass::SetViewportPosition(v32, (IUnknown *)&DataGlobal_87F8E4[30396]);
  g_ScenarioClass_Instance->theater = ScenarioClass::ReadAndParseString(
                                (uint8_t ***)v3,
                                (INIClass *)&g_INI_Key_CellTags.headNode[2],
                                (uint8_t *)&unk_818658,
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
      (uint8_t ***)v33,
      (INIClass *)&stru_830620[53764],
      (uint8_t *)v37,
      0,
      (INIClass *)((char *)&v56[83] + 40 * eax102 + eax102),
      40);
  }
  Event::Dispatch();
  RulesClass::Addition(*(RulesClass **)&DataGlobal_87F8E4[30972]);
  Multiplayer::ShowProgress(&g_GameMode_Current, 45);
  v38 = g_ScenarioClass_Instance;
  int v39 = 0;
  *(unsigned int *)&g_NetworkPlayerBuffer[4460] = 0;
  if ( g_GameMode_Current )
  {
    int v41 = *(unsigned int *)(**(unsigned int **)&g_NetworkPlayerBuffer[1084] + 75);
    if ( v41 == -3 )
      v41 = 0;
    v39 = *(unsigned int *)(*((unsigned int *)g_SuperWeaponTypeCount + v41) + 188);
  }
  else
  {
    campaignIndex = g_ScenarioClass_Instance->campaignIndex;
    if ( campaignIndex != -1 )
      v39 = *(unsigned int *)(*(unsigned int *)&g_CampaignTypeArray->__pad_0[4 * campaignIndex] + 152);
  }
  int v42 = v39;
  if ( g_GameMode_Current )
  {
    g_ScenarioClass_Instance->playerSideIndex = v39;
    if ( !MixFile::LoadSide(v39) )
    {
LABEL_124:
      *(unsigned int *)aP1[0].__pad_0 = &vt_CCFileClass;
      --*(unsigned int *)&g_NetworkPlayerBuffer[4464];
      v69 = 0;
      Vector::Clear((int)v65);
      *(unsigned int *)aP1[0].__pad_0 = &off_7E1668;
      BufferIOFileClass::Dtor(aP1);
      HashTable_flat::DestroyHashTableINIClass((void **)var158);
      return 0;
    }
  }
  else
  {
    HouseClass::LoadTypeList(a2->__pad_0);
    INIClass::GetString(
      (uint8_t ***)a2,
      (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
      (uint8_t *)&g_INI_Key_Lighting.sectionCount,
      (INIClass *)&stru_830620[54652],
      &Filename,
      32);
    int v43 = HouseClass::FindByName(Filename[0]);
    if ( v43 == -1 || v43 > (int)HouseClass_Count )
      v42 = 0;
    else
      v42 = *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&HouseClass_Array->__pad_0[4 * v43] + 52) + 188);
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
      (*(void (**)(SkirmishDialog *))(*(unsigned int *)g_GameStateFlags->__pad_0 + 124))(g_GameStateFlags);
  }
  else
  {
    INIClass::GetString(
      (uint8_t ***)a2,
      (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
      (uint8_t *)&g_INI_Key_Lighting.sectionCount,
      (INIClass *)&stru_830620[54652],
      (INIClass *)Filename[32],
      32);
    int v44 = HouseClass::FindByName(Filename[32]);
    if ( v44 == -1 || v44 > (int)HouseClass_Count )
      v42 = 0;
    else
      v42 = *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&HouseClass_Array->__pad_0[4 * v44] + 52) + 188);
    if ( !MixFile::LoadSide(v42) )
      goto LABEL_124;
    g_ScenarioClass_Instance->playerSideIndex = v42;
  }
  if ( g_GameMode_Current && !(unsigned char)BridgeDestruction )
  {
    v47 = *(ObjectClass **)&g_NetworkPlayerBuffer[4900];
    IDA_BYTE1(v47) = g_NetworkPlayerBuffer[4901] & 0x7F;
    *(unsigned int *)&g_NetworkPlayerBuffer[4900] = v47;
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
    IDA_LOBYTE(v48) = INIClass::ReadBool_Overwrite(
                    (int)a2,
                    (uint8_t *)&g_INI_Key_Lighting.sectionHead[1],
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
    g_ScenarioClass_Instance->nextScenario[0] = *(unsigned int *)&g_NetworkPlayerBuffer[4900];
  int v49 = *(unsigned int *)&g_NetworkPlayerBuffer[4464];
  *(unsigned int *)&g_NetworkPlayerBuffer[4464] = 0;
  int v50 = v49 - 1;
  ProcessDataBuildingClass();
  *(unsigned int *)&g_NetworkPlayerBuffer[4464] = v50;
  Multiplayer::ShowProgress(&g_GameMode_Current, 98);
  Event::Dispatch();
  (*(void (**)(char *))(*(unsigned int *)&DataGlobal_87F8E4[4392] + 12))(&DataGlobal_87F8E4[4392]);
  if ( (g_ScenarioClass_Instance->nextScenario[0] & 0x1000) != 0 )
    SmallFunc_5866C0(&DataGlobal_87F7E8);
  Map_Load_660B00();
  FogOfWar::Render((int **)&DataGlobal_87F7E8);
  *(unsigned int *)aP1[0].__pad_0 = &vt_CCFileClass;
  v69 = 0;
  Vector::Clear((int)v65);
  *(unsigned int *)aP1[0].__pad_0 = &off_7E1668;
  BufferIOFileClass::Dtor(aP1);
  HashTable_flat::DestroyHashTableINIClass((void **)var158);
  return 1;
}
} // namespace gamemd

// 0x689E90
namespace gamemd {
int ScenarioClass::ReadMapINI(CCINIClass * aP1)
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
  unsigned int *var58; // [esp+0h] [ebp-58h]
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
  *((unsigned int *)this + 1099) = INIClass::ReadInt_Overwrite(
                               (int)aP1,
                               (uint8_t *)&stru_830620.__pad_579C[32940],
                               (CCINIClass *)&stru_830620.__pad_579C[32948],
                               *(INIClass **)((char *)this + 4396));
  *((unsigned int *)this + 1100) = INIClass::ReadInt_Overwrite(
                               (int)aP1,
                               (uint8_t *)&stru_830620.__pad_579C[32940],
                               (CCINIClass *)&stru_830620.__pad_579C[32932],
                               *(INIClass **)((char *)this + 4400));
  *((unsigned int *)this + 1101) = INIClass::ReadInt_Overwrite(
                               (int)aP1,
                               (uint8_t *)&stru_830620.__pad_579C[32940],
                               (CCINIClass *)&stru_82BBD0.sectionHead[1],
                               *(INIClass **)((char *)this + 4404));
  *((unsigned int *)this + 1102) = INIClass::ReadInt_Overwrite(
                               (int)aP1,
                               (uint8_t *)&stru_830620.__pad_579C[32940],
                               &g_INI_Key_Height,
                               *(INIClass **)((char *)this + 4408));
  *((unsigned int *)this + 1103) = INIClass::ReadInt_Overwrite(
                               (int)aP1,
                               (uint8_t *)&stru_830620.__pad_579C[32940],
                               (CCINIClass *)&stru_830620.__pad_579C[32908],
                               *(INIClass **)((char *)this + 4412));
  *((unsigned int *)this + 1145) = INIClass::ReadInt_Overwrite(
                               (int)aP1,
                               (uint8_t *)&stru_830620.__pad_579C[32940],
                               (CCINIClass *)&stru_830620.__pad_579C[32884],
                               *(INIClass **)((char *)this + 4580));
  v4 = 0;
  if ( *((int *)this + 1103) > 0 )
  {
    v5 = (RandomStruct *)((char *)this + 4416);
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
    while ( (int)v122 < *((unsigned int *)this + 1103) );
  }
  INIClass::GetString(
    (uint8_t ***)aP1,
    (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
    (uint8_t *)&stru_830620.__pad_579C[33760],
    (INIClass *)((char *)this + 4),
    (INIClass *)((char *)this + 4),
    260);
  INIClass::GetString(
    (uint8_t ***)aP1,
    (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
    (uint8_t *)&stru_830620.__pad_579C[33744],
    (INIClass *)((char *)this + 264),
    (INIClass *)((char *)this + 264),
    260);
  *((unsigned int *)this + 1293) = INIClass::GetBool(
                               (uint8_t ***)aP1,
                               (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
                               (uint8_t *)&g_INI_Key_Intro,
                               *((unsigned int *)this + 1293));
  *((unsigned int *)this + 1294) = INIClass::GetBool(
                               (uint8_t ***)aP1,
                               (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
                               (uint8_t *)&stru_830620.__pad_579C[31468],
                               *((unsigned int *)this + 1294));
  *((unsigned int *)this + 1295) = INIClass::GetBool(
                               (uint8_t ***)aP1,
                               (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
                               (uint8_t *)&stru_830620.__pad_579C[33740],
                               *((unsigned int *)this + 1295));
  *((unsigned int *)this + 1296) = INIClass::GetBool(
                               (uint8_t ***)aP1,
                               (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
                               (uint8_t *)&stru_830620.__pad_579C[33732],
                               *((unsigned int *)this + 1296));
  *((unsigned int *)this + 1297) = INIClass::GetBool(
                               (uint8_t ***)aP1,
                               (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
                               (uint8_t *)&stru_817244.INIClass_field_2C,
                               *((unsigned int *)this + 1297));
  *((unsigned int *)this + 1298) = INIClass::GetBool(
                               (uint8_t ***)aP1,
                               (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
                               (uint8_t *)&stru_830620.__pad_579C[33720],
                               *((unsigned int *)this + 1298));
  *((unsigned int *)this + 1299) = INIClass::GetBool(
                               (uint8_t ***)aP1,
                               (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
                               (uint8_t *)&stru_830620.__pad_579C[33704],
                               *((unsigned int *)this + 1299));
  *((unsigned char *)this + 13500) = INIClass::ReadBool_Overwrite(
                               (int)aP1,
                               (uint8_t *)&g_INI_Key_Lighting.sectionHead[1],
                               (CCINIClass *)&stru_830620.__pad_579C[33688],
                               *((unsigned char *)this + 13500));
  *((unsigned char *)this + 13485) = INIClass::ReadBool_Overwrite(
                               (int)aP1,
                               (uint8_t *)&g_INI_Key_Lighting.sectionHead[1],
                               (CCINIClass *)&stru_830620.__pad_579C[33672],
                               *((unsigned char *)this + 13485));
  *((unsigned char *)this + 13484) = INIClass::ReadBool_Overwrite(
                               (int)aP1,
                               (uint8_t *)&g_INI_Key_Lighting.sectionHead[1],
                               (CCINIClass *)&stru_830620.__pad_579C[33660],
                               *((unsigned char *)this + 13484));
  BuildingTypeByName = Scenario::FindBuildingTypeByName(
                         (uint8_t ***)aP1,
                         (uint8_t *)&g_INI_Key_Lighting.sectionHead[1],
                         (uint8_t *)g_INI_Key_Theme,
                         *(CCINIClass **)((char *)this + 7280));
  aP3[1] = 0;
  aP3[0] = (INIClass *)&stru_830620.__pad_579C[33644];
  v117 = (INIClass *)&g_INI_Key_Lighting.sectionHead[1];
  *((unsigned int *)this + 1820) = BuildingTypeByName;
  *(unsigned int *)&g_abs_A8D63C = INIClass::ReadInt_Overwrite(
                                                   (int)aP1,
                                                   (uint8_t *)v117,
                                                   (CCINIClass *)aP3[0],
                                                   aP3[1]);
  v10 = *(INIClass **)((char *)this + 7288);
  aP3[1] = *(INIClass **)((char *)this + 7292);
  Double_Overwrite = INIClass::ReadDouble_Overwrite(
                       (int)aP1,
                       (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
                       (uint8_t *)&stru_830620.__pad_579C[33628],
                       v10);
  *(double *)((char *)this + 7288) = Double_Overwrite;
  if ( Double_Overwrite >= 1.0 )
    Double_Overwrite = 1.0;
  *(double *)((char *)this + 7288) = Double_Overwrite;
  *((unsigned int *)this + 1824) = INIClass::ReadInt_Overwrite(
                               (int)aP1,
                               (uint8_t *)&g_INI_Key_Lighting.sectionHead[1],
                               (CCINIClass *)&stru_830620.__pad_579C[33612],
                               *(INIClass **)((char *)this + 7296));
  *((unsigned char *)this + 13486) = INIClass::ReadBool_Overwrite(
                               (int)aP1,
                               (uint8_t *)&g_INI_Key_Lighting.sectionHead[1],
                               (CCINIClass *)&stru_830620.__pad_579C[33600],
                               *((unsigned char *)this + 13486));
  *((unsigned char *)this + 13487) = INIClass::ReadBool_Overwrite(
                               (int)aP1,
                               (uint8_t *)&g_INI_Key_Lighting.sectionHead[1],
                               (CCINIClass *)&stru_830620.__pad_579C[33588],
                               *((unsigned char *)this + 13487));
  *((unsigned char *)this + 13488) = INIClass::ReadBool_Overwrite(
                               (int)aP1,
                               (uint8_t *)&g_INI_Key_Lighting.sectionHead[1],
                               (CCINIClass *)&stru_830620.__pad_579C[33572],
                               *((unsigned char *)this + 13488));
  *((unsigned char *)this + 13489) = INIClass::ReadBool_Overwrite(
                               (int)aP1,
                               (uint8_t *)&g_INI_Key_Lighting.sectionHead[1],
                               (CCINIClass *)&stru_830620.__pad_579C[33560],
                               *((unsigned char *)this + 13489));
  *((unsigned char *)this + 13477) = INIClass::ReadBool_Overwrite(
                               (int)aP1,
                               (uint8_t *)&g_INI_Key_Lighting.sectionHead[1],
                               (CCINIClass *)&stru_830620.__pad_579C[33548],
                               *((unsigned char *)this + 13477));
  *((unsigned char *)this + 13490) = INIClass::ReadBool_Overwrite(
                               (int)aP1,
                               (uint8_t *)&g_INI_Key_Lighting.sectionHead[1],
                               (CCINIClass *)&stru_830620.__pad_579C[33536],
                               *((unsigned char *)this + 13490));
  *((unsigned char *)this + 13492) = INIClass::ReadBool_Overwrite(
                               (int)aP1,
                               (uint8_t *)&g_INI_Key_Lighting.sectionHead[1],
                               (CCINIClass *)&stru_830620.__pad_579C[33512],
                               *((unsigned char *)this + 13492));
  *((unsigned int *)this + 1825) = INIClass::ReadInt_Overwrite(
                               (int)aP1,
                               (uint8_t *)&g_INI_Key_Lighting.sectionHead[1],
                               (CCINIClass *)&stru_830620.__pad_579C[33504],
                               *(INIClass **)((char *)this + 7300));
  *((unsigned int *)this + 3380) = INIClass::ReadInt_Overwrite(
                                (int)aP1,
                                (uint8_t *)&g_INI_Key_Lighting.sectionHead[1],
                                (CCINIClass *)&stru_830620.__pad_579C[33484],
                                *(INIClass **)((char *)this + 13520));
  var58 = 0;
  v115 = 0;
  IDA_LOWORD(v119) = 1;
  v116 = &vt_VectorClass_TechnoTypeClass;
  if ( &v116 != (void ***)((char *)this + 13524) )
  {
    TypeList_TechnoType::ddtor((int)&v116);
    v115 = *(RandomStruct **)((char *)this + 13532);
    if ( v115 )
    {
      var58 = (unsigned int *)RA2_OPNEW(4 * (unsigned int)v115);
      if ( var58 )
      {
        v12 = 0;
        for ( IDA_BYTE1(v119) = 1; v12 < (int)v115; ++v12 )
          var58[v12] = *(unsigned int *)(*((unsigned int *)this + 3382) + 4 * v12);
      }
    }
    else
    {
      var58 = 0;
      IDA_BYTE1(v119) = 0;
    }
  }
  TechnoTypeList = (void ***)INIClass::ReadTechnoTypeList(
                               (uint8_t ***)aP1,
                               (CCINIClass *)Destination,
                               (uint8_t *)&g_INI_Key_Lighting.sectionHead[1],
                               (uint8_t *)&stru_830620.__pad_579C[33468],
                               &vt_TypeList_TechnoTypeClass,
                               var58,
                               (int)v115,
                               v119,
                               *((unsigned int *)this + 3385),
                               *((unsigned int *)this + 3386),
                               (int)aP3[1]->__pad_0);
  v122 = TechnoTypeList;
  if ( (void ***)((char *)this + 13524) != TechnoTypeList )
  {
    (*(void (**)(int))(*((unsigned int *)this + 3381) + 12))((char *)this + 13524);
    v14 = v122[2];
    *((unsigned int *)this + 3383) = v14;
    if ( v14 )
    {
      v15 = RA2_OPNEW(4 * (unsigned int)v14);
      *((unsigned int *)this + 3382) = v15;
      if ( v15 )
      {
        v16 = *((unsigned int *)this + 3383);
        eax16 = 0;
        *((unsigned char *)this + 13537) = 1;
        if ( v16 > 0 )
        {
          do
          {
            ++eax16;
            *(unsigned int *)(*((unsigned int *)this + 3382) + 4 * eax16 - 4) = v122[1][eax16 - 1];
          }
          while ( eax16 < *((unsigned int *)this + 3383) );
        }
      }
    }
    else
    {
      *((unsigned int *)this + 3382) = 0;
      *((unsigned char *)this + 13537) = 0;
    }
    TechnoTypeList = v122;
  }
  *((unsigned int *)this + 3385) = TechnoTypeList[4];
  *((unsigned int *)this + 3386) = TechnoTypeList[5];
  v18 = TechnoTypeList[6];
  v17 = (CCINIClass *)Block;
  *((unsigned int *)this + 3387) = v18;
  *(unsigned int *)Destination = &vt_VectorClass_TechnoTypeClass;
  if ( v17 && v127 )
    RA2_OPDEL(v17);
  v20 = (void ***)((char *)this + 13552);
  v21 = &v116;
  v122 = &v116;
  var58 = 0;
  v115 = 0;
  IDA_LOWORD(v119) = 1;
  v116 = &vt_VectorClass_int;
  if ( &v116 != (void ***)((char *)this + 13552) )
  {
    VectorClass::Destroy((int)&v116);
    v22 = *(void ***)((char *)this + 13560);
    v23 = v122;
    v122[2] = v22;
    if ( v22 )
    {
      v24 = RA2_OPNEW(4 * (unsigned int)v22);
      v25 = v122;
      v122[1] = (void **)v24;
      if ( v24 )
      {
        v26 = (int)v25[2];
        v27 = 0;
        *((unsigned char *)v25 + 13) = 1;
        if ( v26 > 0 )
        {
          do
          {
            v122[1][v27] = *(void **)(*((unsigned int *)this + 3389) + 4 * v27);
            ++v27;
          }
          while ( v27 < (int)v122[2] );
        }
      }
    }
    else
    {
      v23[1] = 0;
      *((unsigned char *)v23 + 13) = 0;
    }
    v21 = v122;
  }
  v21[4] = *(void ***)((char *)this + 13568);
  v21[5] = *(void ***)((char *)this + 13572);
  *v21 = &vt_TypeList_int;
  IntList = (void ***)INIClass::ReadIntList(
                        (uint8_t ***)aP1,
                        (int)Destination,
                        (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
                        (uint8_t *)&stru_830620.__pad_579C[33444],
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
    ((void (*)(int))(*v20)[3])((char *)this + 13552);
    v29 = v122[2];
    *((unsigned int *)this + 3390) = v29;
    if ( v29 )
    {
      v30 = RA2_OPNEW(4 * (unsigned int)v29);
      *((unsigned int *)this + 3389) = v30;
      if ( v30 )
      {
        v31 = *((unsigned int *)this + 3390);
        eax35 = 0;
        *((unsigned char *)this + 13565) = 1;
        if ( v31 > 0 )
        {
          do
          {
            ++eax35;
            *(unsigned int *)(*((unsigned int *)this + 3389) + 4 * eax35 - 4) = v122[1][eax35 - 1];
          }
          while ( eax35 < *((unsigned int *)this + 3390) );
        }
      }
    }
    else
    {
      *((unsigned int *)this + 3389) = 0;
      *((unsigned char *)this + 13565) = 0;
    }
    IntList = v122;
  }
  *((unsigned int *)this + 3392) = IntList[4];
  *((unsigned int *)this + 3393) = IntList[5];
  v33 = IntList[6];
  v32 = (CCINIClass *)Block;
  *((unsigned int *)this + 3394) = v33;
  *(unsigned int *)Destination = &vt_VectorClass_int;
  if ( v32 && v127 )
    RA2_OPDEL(v32);
  *((unsigned char *)this + 13478) = INIClass::ReadBool_Overwrite(
                               (int)aP1,
                               (uint8_t *)&g_INI_Key_Lighting.sectionHead[1],
                               (CCINIClass *)&stru_830620.__pad_579C[33420],
                               *((unsigned char *)this + 13478));
  Bool_Overwrite = INIClass::ReadBool_Overwrite(
                     (int)aP1,
                     (uint8_t *)&g_INI_Key_Lighting.sectionHead[1],
                     (CCINIClass *)&stru_830620.__pad_579C[33400],
                     *((unsigned char *)this + 13479));
  IDA_LOBYTE(aP3[1]) = *((unsigned char *)this + 13480);
  aP3[0] = (INIClass *)&stru_830620.__pad_579C[33380];
  v117 = (INIClass *)&g_INI_Key_Lighting.sectionHead[1];
  *((unsigned char *)this + 13479) = Bool_Overwrite;
  *((unsigned char *)this + 13480) = INIClass::ReadBool_Overwrite(
                               (int)aP1,
                               (uint8_t *)v117,
                               (CCINIClass *)aP3[0],
                               (char)aP3[1]);
  v36 = INIClass::ReadBool_Overwrite(
          (int)aP1,
          (uint8_t *)&g_INI_Key_Lighting.sectionHead[1],
          (CCINIClass *)&stru_830620.__pad_579C[33352],
          *((unsigned char *)this + 13491));
  v37 = *((unsigned char *)this + 13476);
  *((unsigned char *)this + 13491) = v36;
  v38 = INIClass::ReadBool_Overwrite(
          (int)aP1,
          (uint8_t *)&g_INI_Key_Lighting.sectionHead[1],
          (CCINIClass *)&stru_830620.__pad_579C[33340],
          v37);
  aP3[1] = *(INIClass **)((char *)this + 524);
  aP3[0] = (INIClass *)&stru_830620.__pad_579C[33328];
  v117 = (INIClass *)&g_INI_Key_Lighting.sectionHead[1];
  *((unsigned char *)this + 13476) = v38;
  *((unsigned int *)this + 131) = INIClass::ReadInt_Overwrite((int)aP1, (uint8_t *)v117, (CCINIClass *)aP3[0], aP3[1]);
  Int_Overwrite = INIClass::ReadInt_Overwrite(
                    (int)aP1,
                    (uint8_t *)&g_INI_Key_Lighting.sectionHead[1],
                    (CCINIClass *)&stru_830620.__pad_579C[33316],
                    *(INIClass **)((char *)this + 528));
  IDA_LOBYTE(aP3[1]) = 0;
  aP3[0] = (INIClass *)&stru_830620.__pad_579C[33308];
  v117 = (INIClass *)&g_INI_Key_Lighting.sectionHead[1];
  *((unsigned int *)this + 132) = Int_Overwrite;
  INIClass::ReadBool_Overwrite((int)aP1, (uint8_t *)v117, (CCINIClass *)aP3[0], (char)aP3[1]);
  v40 = *((unsigned int *)this + 3385) - *((unsigned int *)this + 3392);
  v122 = 0;
  if ( v40 > 0 )
  {
    do
    {
      v41 = *((unsigned int *)this + 3390);
      if ( *((unsigned int *)this + 3392) < v41
        || (*((unsigned char *)this + 13565) || !v41)
        && (v42 = *((unsigned int *)this + 3393), v42 > 0)
        && ((uint8_t (*)(int, int, unsigned int))(*v20)[2])((char *)this + 13552, v41 + v42, 0) )
      {
        v43 = *((unsigned int *)this + 3392);
        v44 = *((unsigned int *)this + 3389);
        *((unsigned int *)this + 3392) = v43 + 1;
        *(unsigned int *)(v44 + 4 * v43) = -1;
      }
      v45 = *((unsigned int *)this + 3385) - *((unsigned int *)this + 3392);
      v122 = (void ***)((char *)v122 + 1);
    }
    while ( (int)v122 < v45 );
  }
  v46 = *((unsigned int *)this + 3392);
  v122 = 0;
  if ( v46 > 0 )
  {
    do
    {
      v47 = *((unsigned int *)this + 3397);
      if ( *((unsigned int *)this + 3399) < v47
        || (*((unsigned char *)this + 13593) || !v47)
        && (v48 = *((unsigned int *)this + 3400), v48 > 0)
        && (*(uint8_t (**)(int, int, unsigned int))(*((unsigned int *)this + 3395) + 8))(
             (char *)this + 13580,
             v47 + v48,
             0) )
      {
        v49 = *((unsigned int *)this + 3399);
        v50 = *((unsigned int *)this + 3396);
        *((unsigned int *)this + 3399) = v49 + 1;
        *(unsigned int *)(v50 + 4 * v49) = 0;
      }
      v51 = *((unsigned int *)this + 3392);
      v122 = (void ***)((char *)v122 + 1);
    }
    while ( (int)v122 < v51 );
  }
  ScenarioClass::ReadLocalVariables((char *)this, aP1);
  Event::Dispatch();
  TimeString = INIClass::ReadTimeString(
                 (int)aP1,
                 (uint8_t *)&stru_830620.__pad_579C[33288],
                 (uint8_t *)&stru_830620.__pad_579C[33296],
                 *(CCINIClass **)((char *)this + 13732));
  v53 = *(CCINIClass **)((char *)this + 13736);
  *((unsigned int *)this + 3433) = TimeString;
  v54 = INIClass::ReadTimeString(
          (int)aP1,
          (uint8_t *)&stru_830620.__pad_579C[33288],
          (uint8_t *)&stru_830620.__pad_579C[33272],
          v53);
  aP3[1] = *(INIClass **)((char *)this + 13740);
  aP3[0] = (INIClass *)&stru_830620.__pad_579C[33260];
  v117 = (INIClass *)&stru_830620.__pad_579C[33288];
  *((unsigned int *)this + 3434) = v54;
  *((unsigned int *)this + 3435) = INIClass::ReadTimeString(
                                (int)aP1,
                                (uint8_t *)v117,
                                (uint8_t *)aP3[0],
                                (CCINIClass *)aP3[1]);
  INIClass::GetString(
    (uint8_t ***)aP1,
    (INIClass *)&stru_830620.__pad_579C[33288],
    (uint8_t *)&stru_830620.__pad_579C[33224],
    (INIClass *)&stru_830620.__pad_579C[33240],
    (INIClass *)((char *)this + 13744),
    31);
  INIClass::GetString(
    (uint8_t ***)aP1,
    (INIClass *)&stru_830620.__pad_579C[33288],
    (uint8_t *)&stru_830620.__pad_579C[33184],
    (INIClass *)&stru_830620.__pad_579C[33200],
    (INIClass *)((char *)this + 13775),
    31);
  INIClass::GetString(
    (uint8_t ***)aP1,
    (INIClass *)&stru_830620.__pad_579C[33288],
    (uint8_t *)&stru_830620.__pad_579C[33148],
    (INIClass *)&stru_830620.__pad_579C[33164],
    (INIClass *)((char *)this + 13806),
    31);
  INIClass::GetString(
    (uint8_t ***)aP1,
    (INIClass *)&stru_830620.__pad_579C[33288],
    (uint8_t *)&stru_830620.__pad_579C[33108],
    (INIClass *)&stru_830620.__pad_579C[33124],
    (INIClass *)((char *)this + 13837),
    31);
  *(double *)aP3 = (double)*((int *)this + 3402) * 0.01;
  v55 = INIClass::ReadDouble_Overwrite(
          (int)aP1,
          (INIClass *)&g_INI_Key_Lighting,
          (uint8_t *)&g_INI_Key_Lighting.headNode[2],
          aP3[0]);
  v56 = Math::RoundToInt(v55 * 100.0 + 0.01);
  v57 = (double)*((int *)this + 3405);
  *((unsigned int *)this + 3402) = v56;
  *((unsigned int *)this + 3403) = v56;
  *((unsigned int *)this + 3404) = v56;
  *(double *)aP3 = v57 * 0.01;
  v58 = INIClass::ReadDouble_Overwrite(
          (int)aP1,
          (INIClass *)&g_INI_Key_Lighting,
          (uint8_t *)g_abs_820538,
          aP3[0]);
  v59 = Math::RoundToInt(v58 * 100.0 + 0.01);
  v60 = (double)*((int *)this + 3406);
  *((unsigned int *)this + 3405) = v59;
  *(double *)aP3 = v60 * 0.01;
  v61 = INIClass::ReadDouble_Overwrite(
          (int)aP1,
          (INIClass *)&g_INI_Key_Lighting,
          (uint8_t *)g_abs_82053C,
          aP3[0]);
  v62 = Math::RoundToInt(v61 * 100.0 + 0.01);
  v63 = (double)*((int *)this + 3407);
  *((unsigned int *)this + 3406) = v62;
  *(double *)aP3 = v63 * 0.01;
  v64 = INIClass::ReadDouble_Overwrite(
          (int)aP1,
          (INIClass *)&g_INI_Key_Lighting,
          (uint8_t *)g_INI_Key_Blue,
          aP3[0]);
  v65 = Math::RoundToInt(v64 * 100.0 + 0.01);
  v66 = (double)*((int *)this + 3408);
  *((unsigned int *)this + 3407) = v65;
  *(double *)aP3 = v66 * 0.001;
  v67 = INIClass::ReadDouble_Overwrite(
          (int)aP1,
          (INIClass *)&g_INI_Key_Lighting,
          (uint8_t *)g_INI_Key_Ground,
          aP3[0]);
  v68 = Math::RoundToInt(v67 * 1000.0 + 0.01);
  v69 = (double)*((int *)this + 3409);
  *((unsigned int *)this + 3408) = v68;
  *(double *)aP3 = v69 * 0.001;
  v70 = INIClass::ReadDouble_Overwrite((int)aP1, (INIClass *)&g_INI_Key_Lighting, (uint8_t *)&aLevel, aP3[0]);
  v71 = Math::RoundToInt(v70 * 1000.0 + 0.01);
  v72 = (double)*((int *)this + 3410);
  *((unsigned int *)this + 3409) = v71;
  *(double *)aP3 = v72 * 0.01;
  v73 = INIClass::ReadDouble_Overwrite(
          (int)aP1,
          (INIClass *)&g_INI_Key_Lighting,
          (uint8_t *)g_INI_Key_IonAmbient,
          aP3[0]);
  v74 = Math::RoundToInt(v73 * 100.0 + 0.01);
  v75 = (double)*((int *)this + 3411);
  *((unsigned int *)this + 3410) = v74;
  *(double *)aP3 = v75 * 0.01;
  v76 = INIClass::ReadDouble_Overwrite(
          (int)aP1,
          (INIClass *)&g_INI_Key_Lighting,
          (uint8_t *)g_INI_Key_IonRed,
          aP3[0]);
  v77 = Math::RoundToInt(v76 * 100.0 + 0.01);
  v78 = (double)*((int *)this + 3412);
  *((unsigned int *)this + 3411) = v77;
  *(double *)aP3 = v78 * 0.01;
  v79 = INIClass::ReadDouble_Overwrite(
          (int)aP1,
          (INIClass *)&g_INI_Key_Lighting,
          (uint8_t *)g_INI_Key_IonGreen,
          aP3[0]);
  v80 = Math::RoundToInt(v79 * 100.0 + 0.01);
  v81 = (double)*((int *)this + 3413);
  *((unsigned int *)this + 3412) = v80;
  *(double *)aP3 = v81 * 0.01;
  v82 = INIClass::ReadDouble_Overwrite(
          (int)aP1,
          (INIClass *)&g_INI_Key_Lighting,
          (uint8_t *)g_INI_Key_IonBlue,
          aP3[0]);
  v83 = Math::RoundToInt(v82 * 100.0 + 0.01);
  v84 = (double)*((int *)this + 3414);
  *((unsigned int *)this + 3413) = v83;
  *(double *)aP3 = v84 * 0.001;
  v85 = INIClass::ReadDouble_Overwrite(
          (int)aP1,
          (INIClass *)&g_INI_Key_Lighting,
          (uint8_t *)g_INI_Key_IonGround,
          aP3[0]);
  v86 = Math::RoundToInt(v85 * 1000.0 + 0.01);
  v87 = (double)*((int *)this + 3415);
  *((unsigned int *)this + 3414) = v86;
  *(double *)aP3 = v87 * 0.001;
  v88 = INIClass::ReadDouble_Overwrite(
          (int)aP1,
          (INIClass *)&g_INI_Key_Lighting,
          (uint8_t *)g_INI_Key_IonLevel,
          aP3[0]);
  v89 = Math::RoundToInt(v88 * 1000.0 + 0.01);
  v90 = (double)*((int *)this + 3422);
  *((unsigned int *)this + 3415) = v89;
  *(double *)aP3 = v90;
  v91 = INIClass::ReadDouble_Overwrite(
          (int)aP1,
          (INIClass *)&g_INI_Key_Lighting,
          (uint8_t *)&stru_830620.__pad_579C[33084],
          (INIClass *)IDA_LODWORD(v90));
  v92 = Math::RoundToInt(v91);
  v93 = (double)*((int *)this + 3423);
  *((unsigned int *)this + 3422) = v92;
  *(double *)aP3 = v93 * 0.01;
  v94 = INIClass::ReadDouble_Overwrite(
          (int)aP1,
          (INIClass *)&g_INI_Key_Lighting,
          (uint8_t *)&stru_830620.__pad_579C[33064],
          aP3[0]);
  v95 = Math::RoundToInt(v94 * 100.0 + 0.01);
  v96 = (double)*((int *)this + 3424);
  *((unsigned int *)this + 3423) = v95;
  *(double *)aP3 = v96 * 0.01;
  v97 = INIClass::ReadDouble_Overwrite(
          (int)aP1,
          (INIClass *)&g_INI_Key_Lighting,
          (uint8_t *)&stru_830620.__pad_579C[33048],
          aP3[0]);
  v98 = Math::RoundToInt(v97 * 100.0 + 0.01);
  v99 = (double)*((int *)this + 3425);
  *((unsigned int *)this + 3424) = v98;
  *(double *)aP3 = v99 * 0.01;
  v100 = INIClass::ReadDouble_Overwrite(
           (int)aP1,
           (INIClass *)&g_INI_Key_Lighting,
           (uint8_t *)&stru_830620.__pad_579C[33032],
           aP3[0]);
  v101 = Math::RoundToInt(v100 * 100.0 + 0.01);
  v102 = (double)*((int *)this + 3426);
  *((unsigned int *)this + 3425) = v101;
  *(double *)aP3 = v102 * 0.01;
  v103 = INIClass::ReadDouble_Overwrite(
           (int)aP1,
           (INIClass *)&g_INI_Key_Lighting,
           (uint8_t *)&stru_830620.__pad_579C[33016],
           aP3[0]);
  v104 = Math::RoundToInt(v103 * 100.0 + 0.01);
  v105 = (double)*((int *)this + 3427);
  *((unsigned int *)this + 3426) = v104;
  *(double *)aP3 = v105 * 0.001;
  v106 = INIClass::ReadDouble_Overwrite(
           (int)aP1,
           (INIClass *)&g_INI_Key_Lighting,
           (uint8_t *)&stru_830620.__pad_579C[33000],
           aP3[0]);
  v107 = Math::RoundToInt(v106 * 1000.0 + 0.01);
  v108 = (double)*((int *)this + 3428);
  *((unsigned int *)this + 3427) = v107;
  *(double *)aP3 = v108 * 0.001;
  v109 = INIClass::ReadDouble_Overwrite(
           (int)aP1,
           (INIClass *)&g_INI_Key_Lighting,
           (uint8_t *)&stru_830620.__pad_579C[32984],
           aP3[0]);
  v110 = Math::RoundToInt(v109 * 1000.0 + 0.01);
  v111 = (double)*((int *)this + 3429);
  *((unsigned int *)this + 3428) = v110;
  *(double *)aP3 = v111 * 0.001;
  v112 = INIClass::ReadDouble_Overwrite(
           (int)aP1,
           (INIClass *)&g_INI_Key_Lighting,
           (uint8_t *)&stru_830620.__pad_579C[32956],
           aP3[0]);
  v113 = Math::RoundToInt(v112 * 1000.0 + 0.01);
  aP3[1] = (INIClass *)55;
  *((unsigned int *)this + 3429) = v113;
  Multiplayer::ShowProgress(&g_abs_A8B238, (int)aP3[1]->__pad_0);
  Event::Dispatch();
  if ( g_abs_A8B238 )
  {
    AssignSessionHouses();
  }
  else
  {
    INIClass::GetString(
      (uint8_t ***)aP1,
      (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
      (uint8_t *)&g_INI_Key_Lighting.sectionCount,
      (INIClass *)&g_abs_87F8E4,
      (INIClass *)Destination,
      20);
    v114 = HouseClass::FindByName(Destination);
    if ( v114 == -1 )
      v114 = 0;
    HouseClass_Player = *(IUnknown **)&HouseClass_Array->__pad_0[4 * v114];
    *((unsigned int *)this + 1821) = *(unsigned int *)(HouseClass_Player->field_34 + 184);
  }
  aP3[1] = (INIClass *)58;
  HouseClass_Player->__pad_1D8[20] = 1;
  HouseClass_Player->__pad_1D8[21] = 1;
  *(unsigned int *)&HouseClass_Player->__pad_566C[136] = 0;
  Multiplayer::ShowProgress(&g_abs_A8B238, (int)aP3[1]->__pad_0);
  Event::Dispatch();
  if ( g_abs_A8D63C )
    TheatreClass::InitView();
  Multiplayer::ShowProgress(&g_abs_A8B238, 60);
  Event::Dispatch();
  return 1;

}
} // namespace gamemd

// 0x5C0E20
namespace gamemd {
char ScenarioClass::initUnits()
{

  return 1; /*0x5c0e22*/

}
} // namespace gamemd

// 0x5C0E30
namespace gamemd {
char ScenarioClass::StubReturnFalse()
{

  return 0; /*0x5c0e32*/

}
} // namespace gamemd

// 0x5C0E40
namespace gamemd {
char ScenarioClass::StubReturnFalse2()
{

  return 0; /*0x5c0e42*/

}
} // namespace gamemd

// 0x5C0E50
namespace gamemd {
char ScenarioClass::StubReturnFalse3(int a1)
{

  return 1; /*0x5c0e52*/

}
} // namespace gamemd

// 0x5C0E60
namespace gamemd {
void ScenarioClass::StubReturnTrue()
{

  ; /*0x5c0e60*/

}
} // namespace gamemd

// 0x5C0E70
namespace gamemd {
void ScenarioClass::StubReturnTrue2()
{

  ; /*0x5c0e70*/

}
} // namespace gamemd

// 0x5C0E80
namespace gamemd {
void ScenarioClass::StubReturnFalse4(int a1)
{

  ; /*0x5c0e80*/

}
} // namespace gamemd

// 0x5C0ED0
namespace gamemd {
char ScenarioClass::StubReturnFalse5(int a1, int a2, int a3)
{

  return 1; /*0x5c0ed2*/

}
} // namespace gamemd

// 0x5C0EE0
namespace gamemd {
char ScenarioClass::initTriggers()
{

  return 1; /*0x5c0ee2*/

}
} // namespace gamemd

// 0x5C0EF0
namespace gamemd {
void ScenarioClass::StubReturnFalse6(int a1, int a2)
{

  ; /*0x5c0ef0*/

}
} // namespace gamemd

// 0x5C0F00
namespace gamemd {
void ScenarioClass::StubReturnFalse7(int a1)
{

  ; /*0x5c0f00*/

}
} // namespace gamemd

// 0x5C0F10
namespace gamemd {
void ScenarioClass::StubReturnTrue3()
{

  ; /*0x5c0f10*/

}
} // namespace gamemd

// 0x5C0F20
namespace gamemd {
void ScenarioClass::StubReturnTrue4()
{

  ; /*0x5c0f20*/

}
} // namespace gamemd

// 0x5C0F30
namespace gamemd {
int ScenarioClass::initTeams()
{

  return -1; /*0x5c0f33*/

}
} // namespace gamemd

// 0x5C0F40
namespace gamemd {
void ScenarioClass::StubReturnTrue5()
{

  ; /*0x5c0f40*/

}
} // namespace gamemd

// 0x5C0F50
namespace gamemd {
void ScenarioClass::StubReturnFalse8(int a1)
{

  ; /*0x5c0f50*/

}
} // namespace gamemd

// 0x5C0F60
namespace gamemd {
void ScenarioClass::StubReturnFalse9(int a1)
{

  ; /*0x5c0f60*/

}
} // namespace gamemd

// 0x5C0F70
namespace gamemd {
char ScenarioClass::StubReturnFalse10()
{

  return 0; /*0x5c0f72*/

}
} // namespace gamemd

// 0x5C0F80
namespace gamemd {
void ScenarioClass::StubReturnTrue6()
{

  ; /*0x5c0f80*/

}
} // namespace gamemd

// 0x5C0F90
namespace gamemd {
void ScenarioClass::StubReturnTrue7()
{

  ; /*0x5c0f90*/

}
} // namespace gamemd

// 0x5C0FC0
namespace gamemd {
int ScenarioClass::StubReturnFalse11()
{

  return 0; /*0x5c0fc2*/

}
} // namespace gamemd

// 0x5C0FD0
namespace gamemd {
char ScenarioClass::initWaypoints()
{

  return 1; /*0x5c0fd2*/

}
} // namespace gamemd

// 0x5C5E30
namespace gamemd {
char ScenarioClass::processTriggerEvents()
{

  return 1; /*0x5c5e32*/

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
MSAnim * ScenarioClass::checkWinningConditions(unsigned int * Block, char a2)
{

  *Block = &vt_MSAnim; /*0x5ceb69*/
  if ( (Block & 1) != 0 ) /*0x5ceb6f*/
    RA2_OPDEL(Block); /*0x5ceb72*/
  return (MSAnim *)Block; /*0x5ceb7c*/

}
} // namespace gamemd

// 0x5D5DB0
namespace gamemd {
int ScenarioClass::MissionStubReturnZero()
{

  return -2; /*0x5d5db5*/

}
} // namespace gamemd

// 0x5D6310
namespace gamemd {
char ScenarioClass::MissionStubReturnZero2(MPCooperative * aP0)
{

  return 1; /*0x5d6312*/

}
} // namespace gamemd

// 0x5D6320
namespace gamemd {
char ScenarioClass::saveGame()
{

  return 1; /*0x5d6322*/

}
} // namespace gamemd

// 0x5D6330
namespace gamemd {
char ScenarioClass::loadGame()
{

  return 1; /*0x5d6332*/

}
} // namespace gamemd

// 0x5D6340
namespace gamemd {
char ScenarioClass::createStartingForces()
{

  return 1; /*0x5d6342*/

}
} // namespace gamemd

// 0x5D6790
namespace gamemd {
char ScenarioClass::ClearFlag()
{

  int v0; // ecx

  v0 = *(unsigned int *)g_abs_A8B230; /*0x5d6795*/
  IDA_BYTE1(v0) = IDA_BYTE1(*(unsigned int *)g_abs_A8B230) & 0xFB; /*0x5d6797*/
  *(unsigned int *)g_abs_A8B230 = v0; /*0x5d679a*/
  return 1; /*0x5d679e*/

}
} // namespace gamemd

// 0x5D67A0
namespace gamemd {
char ScenarioClass::MissionStubReturnZero4(int a1)
{

  return 1; /*0x5d67a2*/

}
} // namespace gamemd

// 0x5D7570
namespace gamemd {
char ScenarioClass::processAI()
{

  return 1; /*0x5d7572*/

}
} // namespace gamemd

// 0x5D80B0
namespace gamemd {
void ScenarioClass::sub_5D80B0()
{

  void *v2; // eax

  v2 = *(void **)((char *)this + 4); /*0x5d80b6*/
  *((unsigned int *)this + 4) = 0; /*0x5d80b9*/
  if ( v2 && *((unsigned char *)this + 13) ) /*0x5d80c0*/
  {
    RA2_OPDEL(v2); /*0x5d80c6*/
    *((unsigned int *)this + 1) = 0; /*0x5d80ce*/
  }
  *((unsigned char *)this + 13) = 0; /*0x5d80d1*/
  *((unsigned int *)this + 2) = 0; /*0x5d80d4*/

}
} // namespace gamemd

// 0x6B8AE0
namespace gamemd {
unsigned int ScenarioClass::ResetIntroFlags()
{

  unsigned int result; // eax

  result = *this & 0xFFF80000 | 0x8088; /*0x6b8ae7*/
  *this = result; /*0x6b8aec*/
  return result; /*0x6b8aee*/

}
} // namespace gamemd
