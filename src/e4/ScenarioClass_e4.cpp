// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/classes/BufferIOFileClass_e4.hpp"
#include "e4/classes/CCFileClass_e4.hpp"
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
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/DynamicVectorClass_UHashObject_HashString__ptr_SchemeNode_e4.hpp"
#include "e4/classes/E4Recv_65C6D0_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/Multiplayer_e4.hpp"
#include "e4/classes/TriggerActionQueue_e4.hpp"
#include "e4/classes/TypeList_flat_e4.hpp"
#include "e4/classes/Random_e4.hpp"
#include "e4/classes/GameOption_e4.hpp"
#include "e4/classes/Theme_e4.hpp"
#include "e4/classes/CCINIClass_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"

// 0x58BB30
namespace gamemd {
ScenarioClass * * ScenarioClass::CopyStartPositions(void *a1)
{

  void *result; // eax
  unsigned int v2;
  int v3; // edi
  int v4; // eax
  char *v5; // esi
  int v6; // ecx
  void *v7; // edx
  void *v8; // esi

  result = (void *)(dword_A8B230);
  if ( dword_A8B230 ) /*0x58bb38*/
  {
    ((unsigned int *)(dword_A8B230))[122].abstractFlags = (gamemd::AbstractClass *)(g_MissionQueueFrame.localVariables[162]);
    v2 = dword_A8B230; /*0x58bb4b*/
    v3 = 0; /*0x58bb52*/
    if ( ((unsigned int *)(dword_A8B230))[122].abstractFlags > 0 ) /*0x58bb5c*/
    {
      v4 = 4416; /*0x58bb60*/
      v5 = &g_MissionQueueFrame.waypoints[1470]; /*0x58bb6a*/
      v6 = 4544; /*0x58bb71*/
      while ( 1 ) /*0x58bb8b*/
      {
        if ( v4 < 4416 || v3 >= g_MissionQueueFrame.localVariables[162] ) /*0x58bb93*/
        {
          v7 = 0; /*0x58bb9e*/
          v8 = 0; /*0x58bba0*/
        }
        else
        {
          v7 = *(void **)&v5[v4]; /*0x58bb95*/
          v8 = *(void **)&v5[v4 + 4]; /*0x58bb98*/
        }
        *(void **)((char *)&v2->vtable1 + v4) = v7; /*0x58bba2*/
        ++v3; /*0x58bbab*/
        v6 += 4; /*0x58bbac*/
        *(void **)((char *)&dword_A8B230->vtable1 + v4) = v8; /*0x58bbaf*/
        v4 += 8; /*0x58bbbd*/
        *(unsigned int *)((char *)dword_A8B230 + v6 - 4) = *(unsigned int *)&g_MissionQueueFrame.waypoints[v6 + 1302]; /*0x58bbc0*/
        v2 = dword_A8B230; /*0x58bbc4*/
        if ( v3 >= ((unsigned int *)(dword_A8B230))[122].abstractFlags ) /*0x58bbd0*/
          break; /*0x58bbd0*/
        v5 = &g_MissionQueueFrame.waypoints[1470]; /*0x58bb82*/
      }
    }
    ((unsigned int *)(v2))[122].vtable1 = (void *)g_MissionQueueFrame.briefing[355]; /*0x58bbda*/
    ((unsigned int *)(dword_A8B230))[122].vtable2 = (void *)g_MissionQueueFrame.briefing[354]; /*0x58bbed*/
    ((unsigned int *)(dword_A8B230))[122].vtable3 = (void *)g_MissionQueueFrame.localVariables[131]; /*0x58bbfe*/
    result = (void *)g_MissionQueueFrame.localVariables[147]; /*0x58bc0a*/
    ((unsigned int *)(dword_A8B230))[122].uniqueId = g_MissionQueueFrame.localVariables[147]; /*0x58bc0f*/
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
        v6 = ((Timer *)0)->GetTicks() - *(unsigned int *)((unsigned int)(a1)+ 16);
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
    *(unsigned int *)((unsigned int)(a1)+ 16) = ((Timer *)0)->GetTicks();
  *(unsigned int *)(v5 + 20) = v30; /*0x5cc378*/
  v9 = *(unsigned int *)(v5 + 64); /*0x5cc37b*/
  *(unsigned int *)(v5 + 24) = v8; /*0x5cc381*/
  if ( v9 >= 4 ) /*0x5cc384*/
    return 0; /*0x5cc538*/
  FoundationSize = Building::GetFoundationSize((unsigned int *)(&v29), *(unsigned int *)(v5 + 40)); /*0x5cc398*/
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
  v17 = (int *)(*(int (**))(v16 + 120))(aP0); /*0x5cc45a*/
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

  return (*(int (**))(*(unsigned int *)this->__pad_0 + 108))(this);

}
// 0x5D6BE0
namespace gamemd {
int ScenarioClass::AssignStartPositions(char a1)
{

  int i; // edi
  HouseClass *v2; // ecx
  int startingAllies; // esi
  Multiplayer v5[4]; // [esp+4h] [ebp-18h] BYREF
  void *Block; // [esp+8h] [ebp-14h]
  char v7; // [esp+11h] [ebp-Bh]

  ((Multiplayer *)(v5))->FindStartPositions(); /*0x5d6bec*/
  for ( i = 0; i < ((char *)&stru_A80220); ++i ) /*0x5d6bfa*/
  {
    v2 = (HouseClass *)*((unsigned int *)((char *)&stru_A80220) + i); /*0x5d6c02*/
    if ( !*(unsigned char *)(v2->relatedTagsCapacity + 422) ) /*0x5d6c08*/
    {
      startingAllies = v2->startingAllies; /*0x5d6c12*/
      if ( startingAllies != -2 ) /*0x5d6c1b*/
      {
        ((HouseClass *)(v2))->SetMapSeed(*((unsigned int *)Block + startingAllies)); /*0x5d6c25*/
        *(&((unsigned int *)(dword_A8B230))[124].uniqueId + startingAllies) = i; /*0x5d6c2f*/
      }
    }
  }
  *(unsigned int *)v5 = (unsigned int)(&vt_VectorClass); /*0x5d6c45*/
  if ( Block && v7 ) /*0x5d6c58*/
    __3_YAXPAX_Z(Block); /*0x5d6c5b*/
  return 1; /*0x5d6c4f*/

}
}
// 0x6832C0
namespace gamemd {
TimerStruct * * ScenarioClass::Constructor(void *a1, void *a2, void *a3)
{

  int v2; // eax
  int v3; // ecx
  int v4; // eax
  int v5; // edx
  char *waypoints; // eax
  int v7; // ecx
  int v8; // esi
  char *v9; // edi
  int v10; // esi
  unsigned char *v11; // edi

  SeedInitRNG((ObjectClass *)&this->random[1], 0); /*0x6832cf*/
  this->elapsedTimer[1] = ((gamemd::Timer *)this)->GetTicks(); /*0x6832e5*/
  this->pauseTimer[0] = 0; /*0x6832eb*/
  this->pauseTimer[1] = ((gamemd::Timer *)this)->GetTicks(); /*0x6832f6*/
  *(unsigned int *)this->__pad_628 = 0; /*0x6832fc*/
  v2 = *(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x683302*/
  this->missionTimer[2] = 0; /*0x683307*/
  this->missionTimer[0] = v2; /*0x68330d*/
  LOBYTE((&this->missionTimer_text)[0]) = 0; /*0x683313*/
  v3 = *(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x683319*/
  this->shroudRegrowTimer[2] = 0; /*0x68331f*/
  this->shroudRegrowTimer[0] = v3; /*0x683325*/
  this->fogTimer[0] = *(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x683331*/
  this->fogTimer[2] = 0; /*0x683337*/
  v4 = *(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x68333d*/
  this->iceTimer[2] = 0; /*0x683342*/
  this->iceTimer[0] = v4; /*0x683348*/
  this->ScenarioClass_field_timer_123c[0] = *(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x683354*/
  this->ScenarioClass_field_timer_123c[2] = 0; /*0x68335a*/
  v5 = *(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x683360*/
  this->ambientTimer[2] = 0; /*0x683366*/
  this->ambientTimer[0] = v5; /*0x68336c*/
  this->ScenarioClass_field_timer_34C0[0] = *(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x683381*/
  this->ScenarioClass_field_timer_34C0[2] = 0; /*0x683387*/
  TypeList::TechnoTypeConstructor((TypeList *)this->allowableUnits, 0, 0); /*0x68338d*/
  this->dropshipUnitCounts = 0; /*0x683397*/
  this->dropshipCountsCount = (unsigned int)((gamemd::TechnoTypeClass *)(10)); /*0x68339a*/
  this->allowableUnits[0] = (gamemd::TechnoTypeClass *)((int)&vt_TypeList); /*0x68339d*/
  ((VectorClass *)((VectorClass *)&this->ambientCurrent))->Construct(0, 0); /*0x6833ad*/
  this->ground = 10; /*0x6833b2*/
  this->blue = 0; /*0x6833b5*/
  this->ambientCurrent = (int)&vt_TypeList; /*0x6833b8*/
  ((VectorClass *)((VectorClass *)&this->ionAmbient))->Construct(0, 0); /*0x6833c8*/
  this->ionLevel = 10; /*0x6833cf*/
  this->ionGround = 0; /*0x6833d2*/
  this->ionAmbient = (int)&vt_TypeList; /*0x6833d5*/
  ScenarioClass::InitTimer(this); /*0x6833db*/
  this->__pad_3566[50] = 0; /*0x6833e2*/
  this->isRandom = 0; /*0x6833e8*/
  ScenarioClass::ResetIntroFlags(this); /*0x6833ee*/
  this->techLevel = 1; /*0x6833f3*/
  this->campaignIndex = -1; /*0x6833fd*/
  LOBYTE((&this->nextScenario)[1]) = 0; /*0x683407*/
  LOBYTE((&this->altNextScenario)[1]) = 0; /*0x68340a*/
  waypoints = this->waypoints; /*0x683410*/
  v7 = 702; /*0x683416*/
  do /*0x683427*/
  {
    *(unsigned int *)waypoints = dword_B05458; /*0x683421*/
    waypoints += 4; /*0x683423*/
    --v7; /*0x683426*/
  }
  while ( v7 ); /*0x683427*/
  wcscpy((wchar_t *)this->name,(const wchar_t *)(&g_TypeClass_DefaultString)); /*0x683435*/
  wcscpy((wchar_t *)this->uiNameLoaded,(const wchar_t *)(&g_TypeClass_DefaultString)); /*0x683446*/
  strcpy((char *)this->fileName,(const char *)(&g_INI_DefaultBuffer)); /*0x683475*/
  strcpy((char *)this->briefingCsf,(const char *)(&g_INI_DefaultBuffer)); /*0x68349d*/
  strcpy((char *)(this->uiName),(const char *)(&g_INI_DefaultBuffer)); /*0x6834bf*/
  wcscpy((wchar_t *)this->briefing,(const wchar_t *)(&g_TypeClass_DefaultString)); /*0x6834cf*/
  v8 = 0; /*0x6834d7*/
  v9 = &this->globalVariables[40]; /*0x6834d9*/
  do /*0x683502*/
  {
    *(v9 - 40) = 0; /*0x6834e2*/
    if ( (unsigned int)v8 < 0x32 && *v9 ) /*0x6834e7*/
    {
      *v9 = 0; /*0x6834eb*/
      this->variablesChanged = 1; /*0x6834ef*/
      ((HouseClass *)((HouseClass *)v8))->UpdateAllTypes(); /*0x6834f6*/
    }
    ++v8; /*0x6834fb*/
    v9 += 41; /*0x6834fc*/
  }
  while ( v8 < 50 ); /*0x683502*/
  v10 = 0; /*0x683504*/
  v11 = (unsigned char *)((char *)&this->localVariables[9] + 2); /*0x683506*/
  do /*0x68352f*/
  {
    *(v11 - 40) = 0; /*0x68350f*/
    if ( (unsigned int)v10 < 0x64 && *v11 ) /*0x683514*/
    {
      *v11 = 0; /*0x683518*/
      this->variablesChanged = 1; /*0x68351c*/
      ((TriggerActionQueue*)(TriggerActionQueue *)v10)->ProcessAll(); /*0x683523*/
    }
    ++v10; /*0x683528*/
    v11 += 41; /*0x683529*/
  }
  while ( v10 < 100 ); /*0x68352f*/
  *(int *)((char *)&this->localVariables[1024] + 2) = 0; /*0x683534*/
  *(int *)((char *)this->view1 + 2) = 0; /*0x68353c*/
  *(int *)((char *)this->view2 + 2) = 0; /*0x683543*/
  *(int *)((char *)this->view3 + 2) = 0; /*0x683549*/
  return (int)this->nextScenario; /*0x683533*/

}
}
// 0x683AB0
namespace gamemd {
int ScenarioClass::LoadScenarioAndStart(char *Source, char a2, double a3, int aP1)
{

  char *v4; // ebp
  int uniqueId; // eax
  int Field; // ecx
  GameOption *v7; // esi
  int v8; // eax
  int v9; // edi
  int Bool; // esi
  int v11; // eax
  int referenceCount; // eax
  unsigned int *p_vtable2; // esi
  LoadScreen *v15; // [esp+0h] [ebp-FCh]
  int v16; // [esp+4h] [ebp-F8h]
  int *v17; // [esp+8h] [ebp-F4h]
  CCINIClass v19; // [esp+1Ch] [ebp-E0h] BYREF
  CCFileClass v20; // [esp+74h] [ebp-88h] BYREF
  int v21[3]; // [esp+CCh] [ebp-30h] BYREF
  int v22; // [esp+D8h] [ebp-24h]
  CHAR v23[28]; // [esp+E0h] [ebp-1Ch] BYREF

  v4 = (char *)(Source); /*0x683ab8*/
  if ( (!Source || !strlen((const char *)(Source))) && a4 != -1 ) /*0x683ade*/
  {
    if ( *((unsigned int *)((char *)&stru_A8EB00 + 377)) == 1 ) /*0x683ae7*/
      v4 = &stru_A83D50.__pad_C8[48]; /*0x683ae9*/
    else
      v4 = (char *)(*((unsigned int *)dword_A83CFC + a4) + 156); /*0x683af8*/
  }
  (&dword_A8B230)[375].uniqueId = a4; /*0x683b0a*/
  Debug::Log(); /*0x683b10*/
  Debug::Log(); /*0x683b21*/
  strcpy((char *)&(&dword_A8B230)[130].abstractFlags, v4); /*0x683b47*/
  _strupr((char *)&(&dword_A8B230)[130].abstractFlags); /*0x683b5d*/
  SetSoundWarning(-1); /*0x683b68*/
  if ( !*(unsigned int *)&dword_A8B238 ) /*0x683b73*/
  {
    uniqueId = (&dword_A8B230)[375].uniqueId; /*0x683b7b*/
    if ( uniqueId == -1 ) /*0x683b84*/
      goto LABEL_14; /*0x683b84*/
    Field = *(unsigned int *)(*((unsigned int *)dword_A83CFC + uniqueId) + 152); /*0x683b8f*/
    goto LABEL_13; /*0x683b95*/
  }
  if ( *(unsigned int *)&stru_A8B250.__pad_0[4] != -1 ) /*0x683b9f*/
  {
    v7 = *(GameOption **)(dword_A8B8CC + 4 * *(unsigned int *)&stru_A8B250.__pad_0[4]); /*0x683ba7*/
    v8 = ((Game *)((Game *)0x3C))->CheckForGameCD(); /*0x683baf*/
    if ( !(uint8_t)ScenarioClass::CheckExists((ScenarioClass *)v7, v8) ) /*0x683bb7*/
    {
      Field = ((GameOption *)(v7))->GetField(); /*0x683bc7*/
LABEL_13:
      SetSoundWarning(Field); /*0x683bc9*/
    }
  }
LABEL_14:
  v9 = ++dword_A8DAB4; /*0x683bce*/
  if ( !(uint8_t)vt_CD(dword_81C1D0) ) /*0x683bf6*/
  {
LABEL_21:
    if ( *(unsigned int *)&dword_A8B238 == 4 ) /*0x683d3c*/
      ChatMessageWOL(0,(wchar_t *)(&g_TypeClass_DefaultString)); /*0x683d45*/
    return 0; /*0x683d56*/
  }
  --dword_A8DAB4; /*0x683c03*/
  (*(void (**)(void *))(*(unsigned int *)stru_887598.lineTrailer + 12))(stru_887598.lineTrailer); /*0x683c11*/
  *((unsigned int *)((char *)&v19 + 0)) = 0; /*0x683c18*/
  *((unsigned int *)((char *)&v19 + 1)) = 0; /*0x683c1c*/
  GenericList::Constructor((GenericList *)(unsigned int *)((char *)&v19 + 2)); /*0x683c20*/
  *((unsigned int *)((char *)&v19 + 2)) = (int)&vt_List; /*0x683c29*/
  memset((unsigned int *)((char *)&v19 + 8), 0, 13); /*0x683c32*/
  memset(((char *)&v19), 0, 9); /*0x683c42*/
  *(unsigned int *)v19.INIClass = (unsigned int)(&CCINIClass_Vtable); /*0x683c4e*/
  CCFileClass::Construct(&v20, v4); /*0x683c56*/
  if ( ((CCINIClass *)(&v19))->Load((int)&v20, 1, 0) ) /*0x683c67*/
  {
    Bool = INIClass::GetBool( /*0x683c85*/
             (INIClass *)&v19,
             (uint8_t *)((char *)&stru_82BA00),
             (uint8_t *)g_INI_Key_Intro,
             -1);
    if ( Bool != -1 /*0x683ca5*/
      || (Bool = INIClass::GetBool(
                   (INIClass *)&v19,
                   (uint8_t *)((char *)&stru_82BA00),
                   (uint8_t *)g_INI_Key_Brief,
                   -1),
          Bool != -1) )
    {
      ((Theme *)((Theme *)&unk_A83D10))->Stop(0); /*0x683cad*/
      Movie::PlayWrapper(Bool, (int)v4, v9, 1, 1, 1); /*0x683cbd*/
    }
  }
  *(unsigned int *)v20.CDFileClass = (unsigned int)(&vt_CCFileClass); /*0x683cc9*/
  v22 = 0; /*0x683cd1*/
  ((Vector *)((int)v21))->Clear(); /*0x683cd8*/
  *(unsigned int *)v20.CDFileClass = (unsigned int)(&off_7E1668); /*0x683ce1*/
  ((BufferIOFileClass *)((BufferIOFileClass *)&v20))->Dtor(); /*0x683ce9*/
  ((HashTable *)((INIClass *)&v19))->DestroyHashTableINIClass(); /*0x683cf2*/
  Debug::Log(); /*0x683cfd*/
  v11 = ((StringList *)((StringList *)&unk_A83D10))->Find(((char *)&stru_82BA00)); /*0x683d0f*/
  ((ThemeClass *)((ThemeClass *)&unk_A83D10))->Play(v11); /*0x683d1a*/
  if ( !Scenario::LoadWithProgress(v4, a3) ) /*0x683d21*/
  {
    (*(void (**)(void *))(*(unsigned int *)stru_887598.lineTrailer + 16))(stru_887598.lineTrailer); /*0x683d32*/
    goto LABEL_21; /*0x683d32*/
  }
  referenceCount = (&dword_A8B230)[143].referenceCount; /*0x683d5e*/
  if ( referenceCount != -1 ) /*0x683d67*/
    wsprintfA(v23, "%s.VQA", *(const char **)(g_MissionQueueFrame.localVariables[580] + 4 * referenceCount)); /*0x683d80*/
  if ( (&dword_A8B230)[375].abstractFlags > 0 ) /*0x683d95*/
    LoadScreen::RenderLoop(v15); /*0x683d97*/
  if ( a2 ) /*0x683da0*/
    Movie::PlayWrapper((int)(&dword_A8B230)[144].vtable1, (int)v4, v9, 1, 1, 1); /*0x683db6*/
  if ( *(unsigned int *)&DSurface_ViewBounds.__pad_8[16] != stru_A8EB00.ObjectTypeClass[33] /*0x683dd6*/
    || *(unsigned int *)&DSurface_ViewBounds.__pad_8[20] != stru_A8EB00.ObjectTypeClass[34] )
  {
    Debug::Log(); /*0x683ddf*/
    ChangeVideoMode(stru_A8EB00.ObjectTypeClass[33], stru_A8EB00.ObjectTypeClass[34]); /*0x683df3*/
  }
  LoadingScreen::FreeResources3(); /*0x683df8*/
  AudioOptionsClass::ApplySettings((AudioOptionsClass *)&stru_A8EB00.ObjectTypeClass[24]); /*0x683e02*/
  (*((void (**)(ObjectClass *, unsigned int))g_DSurface_Hidden->vtable1 + 6))(g_DSurface_Hidden, 0); /*0x683e10*/
  Frame::Present((int)g_DSurface_Hidden, 0, (int)v4, v9, 0, (int)v15, v16, v17); /*0x683e1c*/
  if ( (&dword_A8B230)[43].vtable2 == (void *)-1 ) /*0x683e35*/
  {
    p_vtable2 = &(&dword_A8B230)[43].vtable2; /*0x683e26*/
    *p_vtable2 = TimerGetTicks(); /*0x683e3f*/
  }
  if ( (&dword_A8B230)[202].vtable2 == (void *)-1 ) /*0x683e50*/
    ((Theme *)((Theme *)&unk_A83D10))->Stop(1); /*0x683e66*/
  else
    Theme::QueueSong((int)&unk_A83D10, (int)(&dword_A8B230)[202].vtable2); /*0x683e58*/
  DisableIME(); /*0x683e6b*/
  *((unsigned int *)((char *)&stru_A8EB00 + 376)) = 1; /*0x683e75*/
  byte_A8E378 = 1; /*0x683e7f*/
  if ( *(unsigned int *)&dword_A8B238 == 4 ) /*0x683e86*/
    ChatMessageWOL(0,(wchar_t *)(&g_TypeClass_DefaultString)); /*0x683e8f*/
  return 1; /*0x683d4a*/

}
}
// 0x683EB0
namespace gamemd {
int ScenarioClass::CleanupTemporary()
{

  AsyncIO *v1; // ecx
  void **p_vtable2; // esi
  int Ticks; // eax
  char *v4; // ecx
  int v5; // eax

  sub_406F00(); /*0x683eb1*/
  dword_83D834 = sub_4072B0(g_MixerState); /*0x683ecc*/
  EndBufferMixer((gamemd::VolumeStruct *)((int *)g_MixerState), 0x4000); /*0x683ed1*/
  if ( !*(unsigned int *)&dword_A8B238 || *(unsigned int *)&dword_A8B238 == 5 ) /*0x683ee2*/
  {
    if ( (&dword_A8B230)[43].vtable2 != (void *)-1 ) /*0x683eff*/
      TimerGetTicks(); /*0x683f04*/
    Debug::Log(); /*0x683f13*/
    v1 = (AsyncIO *)dword_A8B230; /*0x683f18*/
    p_vtable2 = &(&dword_A8B230)[43].vtable2; /*0x683f27*/
    if ( (&dword_A8B230)[43].vtable2 != (void *)-1 ) /*0x683f31*/
    {
      Ticks = TimerGetTicks(); /*0x683f36*/
      v4 = (char *)p_vtable2[2]; /*0x683f3d*/
      v5 = Ticks - (unsigned int)*p_vtable2; /*0x683f40*/
      *p_vtable2 = (void *)-1; /*0x683f42*/
      v1 = (AsyncIO *)&v4[v5]; /*0x683f48*/
      p_vtable2[2] = v1; /*0x683f4a*/
    }
  }
  LOBYTE(v1) = 1; /*0x683f4d*/
  ((AsyncIO *)(v1))->Read(); /*0x683f4f*/
  if ( *(unsigned int *)&stru_88732C.__pad_1C[32] ) /*0x683f5d*/
    ((Tooltip *)(*(Tooltip **)&stru_88732C.__pad_1C[32]))->Enable(0); /*0x683f61*/
  ((Mouse *)((ScrollClass *)&stru_87F5F0.__pad_58[416]))->ReleaseCapture(); /*0x683f6b*/
  ((Mouse *)((int)&stru_87F5F0.__pad_58[416]))->SetCursor(0, 0); /*0x683f79*/
  (*(void (**)(void *))(*(unsigned int *)stru_887598.lineTrailer + 12))(stru_887598.lineTrailer); /*0x683f86*/
  MapClass::MarkForRedraw((GScreenClass *)&stru_87F5F0.__pad_58[416], 2); /*0x683f90*/
  TacticalMap::Redraw((GScreenClass *)&stru_87F5F0.__pad_58[416]); /*0x683f9a*/
  return (*(int (**)(void *, ScenarioClass *))(*(unsigned int *)stru_887598.lineTrailer + 16))(
           stru_887598.lineTrailer,
           this);

}
}
// 0x684180
namespace gamemd {
unsigned char * ScenarioClass::ProcessIntroTimer()
{

  unsigned char *result; // eax

  result = (&dword_A8B230)[43].NeedsSaveOrLink; /*0x684186*/
  if ( result ) /*0x68418e*/
  {
    (&dword_A8B230)[43].NeedsSaveOrLink = result - 1; /*0x684195*/
    result = (unsigned char *)(dword_A8B230); /*0x68419b*/
    if ( !(&dword_A8B230)[43].NeedsSaveOrLink ) /*0x6841a0*/
    {
      if ( !byte_B054CC ) /*0x6841b6*/
      {
        if ( BYTE2((&dword_A8B230)[381].vtable3) == 1 ) /*0x6841bf*/
        {
          while ( (*(int (**)(void *))(*(unsigned int *)stru_887598.lineTrailer + 40))(stru_887598.lineTrailer) ) /*0x6841c9*/
            (*(void (**)(void *))(*(unsigned int *)stru_887598.lineTrailer + 16))(stru_887598.lineTrailer); /*0x6841d8*/
          result = dword_A8B230; /*0x6841ea*/
        }
        result[13730] = 0; /*0x6841ef*/
        *((unsigned int *)((char *)&stru_A8EB00 + 440)) = 0; /*0x6841fc*/
        Timer::PumpMessages(*(Timer **)&stru_87F5F0.__pad_58[296]); /*0x684203*/
        result = dword_A8B230; /*0x684208*/
        dword_B07784 = 0; /*0x68420d*/
      }
      if ( *((unsigned int *)result + 389) == -1 ) /*0x684227*/
        *((unsigned int *)result + 389) = TimerGetTicks(); /*0x684231*/
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
    *(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 416) = 0; /*0x686765*/
    *((unsigned int *)((char *)&v5 + 0)) = 0; /*0x68676b*/
    *((unsigned int *)((char *)&v5 + 1)) = 0; /*0x68676f*/
    GenericList::Constructor((GenericList *)(unsigned int *)((char *)&v5 + 2)); /*0x686773*/
    *((unsigned int *)((char *)&v5 + 2)) = (int)&List_INIClass_INISection___vftable; /*0x68677c*/
    Node::Init((Node *)&(unsigned int *)((char *)&v5 + 8)); /*0x686784*/
    ((unsigned int *)&v5)[0] = 0; /*0x68678d*/
    v5.ownsFile = 0; /*0x686792*/
    *(unsigned int *)v5.INIClass = &CCINIClass_Vtable; /*0x686797*/
    CCFileClass::Construct(&v6, Source); /*0x68679f*/
    Debug::Log(); /*0x6867aa*/
    if ( ((CCINIClass *)(&v5))->Load((int)&v6, 1, 0) ) /*0x6867be*/
    {
      strcpy((char *)&dword_A8B230[130].abstractFlags, Source); /*0x686836*/
      Map = ScenarioClass::LoadMap(0, (bool *)v5.INIClass, a2); /*0x686851*/
      *(unsigned int *)v6.CDFileClass = (void*)&CCFileClass_vftable; /*0x686853*/
      v8 = 0; /*0x68685b*/
      ((Vector *)((int)v7))->Clear(); /*0x686862*/
      *(unsigned int *)v6.CDFileClass = &off_7E1668; /*0x68686b*/
      ((BufferIOFileClass *)((BufferIOFileClass *)&v6))->Dtor(); /*0x686873*/
      ((HashTable *)((INIClass *)&v5))->DestroyHashTableINIClass(); /*0x68687c*/
      return Map; /*0x686881*/
    }
    else
    {
      Debug::Log(); /*0x6867cc*/
      *(unsigned int *)v6.CDFileClass = (void*)&CCFileClass_vftable; /*0x6867db*/
      v8 = 0; /*0x6867e3*/
      ((Vector *)((int)v7))->Clear(); /*0x6867ea*/
      *(unsigned int *)v6.CDFileClass = &off_7E1668; /*0x6867f3*/
      ((BufferIOFileClass *)((BufferIOFileClass *)&v6))->Dtor(); /*0x6867fb*/
      ((HashTable *)((INIClass *)&v5))->DestroyHashTableINIClass(); /*0x686804*/
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
  ++*(unsigned int *)&(&g_NetworkPlayerBuffer)[4464];
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
      v7 = *(ObjectClass **)&(&g_NetworkPlayerBuffer)[4900];
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
        ((FileClass *)(aP1))->SetFileName((IUnknown *)&Filename);
        if ( ((CCFileClass *)(aP1))->Open(0) )
        {
          ((CCINIClass *)(var158))->Load(aP1, 0, 0);
          RulesClass::Addition(*(RulesClass **)&DataGlobal_87F8E4[30972]);
        }
        CCFileClass::Reset(aP1);
      }
      ((FileClass *)(aP1))->SetFileName((IUnknown *)&stru_830620[37124]);
      if ( ((CCFileClass *)(aP1))->Open(0) )
      {
        ((CCINIClass *)(var158))->Load(aP1, 0, 0);
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
      ((RulesClass *)(*(RulesClass **)&DataGlobal_87F8E4[30972]))->LoadCountries();
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
    ((Multiplayer *)(&g_GameMode_Current))->ShowProgress(3);
    if ( !v51 )
      break;
    v51 = 0;
    *(unsigned int *)aP1[0].__pad_0 = &vt_CCFileClass;
    v69 = 0;
    ((Vector *)((int)v65))->Clear();
    *(unsigned int *)aP1[0].__pad_0 = &off_7E1668;
    ((BufferIOFileClass *)(aP1))->Dtor();
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
  ((Multiplayer *)(&g_GameMode_Current))->ShowProgress(30);
  ((SidebarClass *)(*(RulesClass **)&DataGlobal_87F8E4[30972]))->ReadButtonList();
  ((Multiplayer *)(&g_GameMode_Current))->ShowProgress(31);
  ResetRules(*(RulesClass **)&DataGlobal_87F8E4[30972]);
  ((Multiplayer *)(&g_GameMode_Current))->ShowProgress(35);
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
  ((Multiplayer *)(&g_GameMode_Current))->ShowProgress(45);
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
      ((Vector *)((int)v65))->Clear();
      *(unsigned int *)aP1[0].__pad_0 = &off_7E1668;
      ((BufferIOFileClass *)(aP1))->Dtor();
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
  ((Multiplayer *)(&g_GameMode_Current))->ShowProgress(50);
  if ( !ScenarioClass::ReadMapINI((int)g_ScenarioClass_Instance, a3, (int)a2) )
    goto LABEL_124;
  ((Multiplayer *)(&g_GameMode_Current))->ShowProgress(58);
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
  ((Multiplayer *)(&g_GameMode_Current))->ShowProgress(60);
  ScenarioClass::LoadMapData((int *)&DataGlobal_87F7E8, a2);
  Event::Dispatch();
  ScenarioClass::LoadWaypoints(a2->__pad_0);
  BulletTypeClass::ReadTrailerAnim();
  MapClass::MarkForRedraw(&DataGlobal_87F7E8, 2);
  ((Multiplayer *)(&g_GameMode_Current))->ShowProgress(70);
  Event::Dispatch();
  ReadOverlayINI(a2);
  Event::Dispatch();
  ((LayerClass *)(&DataGlobal_87F7E8))->CellIteratorReset();
  for ( m = ((LayerClass *)(&DataGlobal_87F7E8))->CellIteratorNext(); m; m = ((LayerClass *)(&DataGlobal_87F7E8))->CellIteratorNext() )
    ((House *)(m))->AnnounceUpgrade((IUnknown *)0xFFFFFFFF);
  ResetBuildingState();
  CCINIClass::LoadTypeFromINI(a2->__pad_0);
  Event::Dispatch();
  InitializeVeinholeSystem(1);
  BuildingClass::ClearOccupancyData();
  BuildingClass::ClearFactoryData();
  ((Multiplayer *)(&g_GameMode_Current))->ShowProgress(72);
  RadarClass::RecreateSurface((int)&DataGlobal_87F7E8, v42);
  PlaceScenarioUnits(a2->__pad_0, (int)v38);
  Event::Dispatch();
  ((Multiplayer *)(&g_GameMode_Current))->ShowProgress(74);
  PlaceAircraftFromINI(a2->__pad_0, (int)a2);
  Event::Dispatch();
  PlaceScenarioInfantry(a2->__pad_0);
  Event::Dispatch();
  ((Multiplayer *)(&g_GameMode_Current))->ShowProgress(76);
  byte_829AE4 = 0;
  Scenario::ReadTeams(a2);
  Event::Dispatch();
  ((Multiplayer *)(&g_GameMode_Current))->ShowProgress(78);
  byte_829AE4 = 1;
  Event::Dispatch();
  UnitClass::ReadINI(a2->__pad_0);
  Event::Dispatch();
  if ( g_GameMode_Current == (CellStruct *)5 )
  {
    if ( g_NetworkPlayerBuffer[5973] )
    {
      CCFileClass::Reset(aP1);
      ((FileClass *)(aP1))->SetFileName((IUnknown *)&stru_830620[54640]);
      if ( ((CCFileClass *)(aP1))->Open(0) == 1 )
      {
        ((CCINIClass *)(var158))->Load(aP1, 0, 0);
        RulesClass::Addition(*(RulesClass **)&DataGlobal_87F8E4[30972]);
      }
    }
  }
  ((Multiplayer *)(&g_GameMode_Current))->ShowProgress(82);
  Event::Dispatch();
  DataGlobal_87F8E4.field_38 = MapClass::PostProcessReveal(&DataGlobal_87F7E8, 0);
  ((Multiplayer *)(&g_GameMode_Current))->ShowProgress(86);
  Event::Dispatch();
  CCFileClass::Create(dword_89C3B0);
  ((Multiplayer *)(&g_GameMode_Current))->ShowProgress(90);
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
  ((Multiplayer *)(&g_GameMode_Current))->ShowProgress(96);
  Event::Dispatch();
  ProcessExpiredPointers();
  if ( g_GameMode_Current )
    g_ScenarioClass_Instance->nextScenario[0] = *(unsigned int *)&g_NetworkPlayerBuffer[4900];
  int v49 = *(unsigned int *)&g_NetworkPlayerBuffer[4464];
  *(unsigned int *)&g_NetworkPlayerBuffer[4464] = 0;
  int v50 = v49 - 1;
  ProcessDataBuildingClass();
  *(unsigned int *)&g_NetworkPlayerBuffer[4464] = v50;
  ((Multiplayer *)(&g_GameMode_Current))->ShowProgress(98);
  Event::Dispatch();
  (*(void (**)(char *))(*(unsigned int *)&DataGlobal_87F8E4[4392] + 12))(&DataGlobal_87F8E4[4392]);
  if ( (g_ScenarioClass_Instance->nextScenario[0] & 0x1000) != 0 )
    SmallFunc_5866C0(&DataGlobal_87F7E8);
  Map_Load_660B00();
  ((FogOfWar *)((int **)&DataGlobal_87F7E8))->Render();
  *(unsigned int *)aP1[0].__pad_0 = &vt_CCFileClass;
  v69 = 0;
  ((Vector *)((int)v65))->Clear();
  *(unsigned int *)aP1[0].__pad_0 = &off_7E1668;
  ((BufferIOFileClass *)(aP1))->Dtor();
  HashTable_flat::DestroyHashTableINIClass((void **)var158);
  return 1;
}
} // namespace gamemd

// 0x689E90
namespace gamemd {
int ScenarioClass::ReadMapINI(CCINIClass * aP1)
{

  _VectorClass_PAVTechnoTypeClass *v4; // eax
  int *v5; // ebx
  int *Point2D_Overwrite; // eax
  int v7; // ecx
  int v8; // eax
  int BuildingTypeByName; // eax
  int v13; // eax
  _VectorClass_PAVTechnoTypeClass *TechnoTypeList; // eax
  int m_8; // eax
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  int v19; // edx
  void *v20; // eax
  _VectorClass_PAVTechnoTypeClass *v21; // ebx
  _VectorClass_PAVTechnoTypeClass *v22; // ecx
  int v23; // eax
  _VectorClass_PAVTechnoTypeClass *v24; // ecx
  int v25; // eax
  _VectorClass_PAVTechnoTypeClass *v26; // ecx
  int v27; // edx
  int v28; // eax
  _VectorClass_PAVTechnoTypeClass *IntList; // eax
  int v30; // eax
  int v31; // eax
  int v32; // ecx
  int v33; // eax
  int v34; // edx
  void *v35; // eax
  char Bool_Overwrite; // al
  char v37; // al
  char v38; // cl
  char v39; // al
  int Int_Overwrite; // eax
  int v41; // ... [36518 chars total]
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

  *(unsigned int *)Block->__pad_0 = &vt_MSAnim; /*0x5ceb69*/
  if ( (a2 & 1) != 0 ) /*0x5ceb6f*/
    __3_YAXPAX_Z(Block); /*0x5ceb72*/
  return Block->__pad_0; /*0x5ceb7c*/

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

  int result; // eax

  LOBYTE(result) = 1; /*0x5d6310*/
  return result; /*0x5d6312*/

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
char ScenarioClass::createStartingForces(void *a1)
{

  return 1; /*0x5d6342*/

}
} // namespace gamemd

// 0x5D6790
namespace gamemd {
char ScenarioClass::ClearFlag()
{

  void *vtable0; // ecx

  vtable0 = dword_A8B230->vtable1; /*0x5d6795*/
  BYTE1(vtable0) = ((uint16_t)dword_A8B230->vtable1 >> 8) & 0xFB; /*0x5d6797*/
  dword_A8B230->vtable1 = vtable0; /*0x5d679a*/
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
    __3_YAXPAX_Z(v2); /*0x5d80c6*/
    *((unsigned int *)this + 1) = 0; /*0x5d80ce*/
  }
  *((unsigned char *)this + 13) = 0; /*0x5d80d1*/
  *((unsigned int *)this + 2) = 0; /*0x5d80d4*/

}
} // namespace gamemd

// 0x6B8AE0
namespace gamemd {
unsigned int ScenarioClass::ResetIntroFlags(void *a1)
{

  unsigned int result; // eax

  result = this->nextScenario[0] & 0xFFF80000 | 0x8088; /*0x6b8ae7*/
  this->nextScenario[0] = result; /*0x6b8aec*/
  return result; /*0x6b8aee*/

}
} // namespace gamemd
