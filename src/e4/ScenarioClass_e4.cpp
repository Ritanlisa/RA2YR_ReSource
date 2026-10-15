// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/BufferIOFileClass_e4.hpp"
#include "e4/classes/CCFileClass_e4.hpp"
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
#include "e4/classes/AsyncIO_e4.hpp"
#include "e4/classes/Frame_e4.hpp"
#include "e4/classes/GenericList_e4.hpp"
#include "e4/classes/LoadScreen_e4.hpp"
#include "e4/classes/LoadingScreen_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/TacticalMap_e4.hpp"
#include "e4/classes/ThemeClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/_w14_nocarrier_e4.hpp"
#include "e4/classes/Node_flat_e4.hpp"  // G42.36 C2027 supply
#include "e4/minimal_carriers.hpp"  // G42.42q minimal carriers
#include "e4/classes/TypeList_e4.hpp"  // G57w10 D supply (bare TypeList carrier)
#include "e4/classes/PreviewClass_e4.hpp"  // w18j2 C3861 PreviewClass:: supply
#include "e4/classes/ScrollClass_e4.hpp"
#include "e4/classes/Tooltip_e4.hpp"
// [w18j2] C3861 supply (raw-evidenced)
namespace gamemd { int ReadWaypoints(int p0); }  // x4:signals@0x68bdc0
namespace gamemd { int LoadFromINI(uint8_t*** p0); }  // x4:signals@0x410a60
namespace gamemd { int ParseValue(unsigned int* p0, uint8_t* p1, uint8_t* p2, unsigned int* p3); }  // x4:signals@0x527cc0
namespace gamemd { int RenderMapPreview(int p_this); }  // x4:ida@0x565090
// [w16g4] C3861 supply (raw call-form evidence)
namespace gamemd { int sub_4072B0(int p0); }  // x4:signals@0x4072b0
// [w14e3] fn vocab supply (g57b5-W5 variadic convention); evidence: raw_decomp entries
namespace gamemd {
    int SeedInitRNG(int p0);  // x4:signals@0x65c6d0
} // namespace gamemd

// 0x58BB30
namespace gamemd {  // G42.18 ns repair
ScenarioClass * * ScenarioClass::CopyStartPositions(void *a1)
{

  void *result; // eax
  AbstractClass *v2; // ebx
  int v3; // edi
  int v4; // eax
  char *v5; // esi
  int v6; // ecx
  void *v7; // edx
  void *v8; // esi

  result = (void *)(dword_A8B230); /*0x58bb31*/
  if ( dword_A8B230 ) /*0x58bb38*/
  {
    dword_A8B230[122].abstractFlags = g_MissionQueueFrame.localVariables[162]; /*0x58bb45*/
    v2 = (gamemd::AbstractClass *)(dword_A8B230); /*0x58bb4b*/
    v3 = 0; /*0x58bb52*/
    if ( dword_A8B230[122].abstractFlags > 0 ) /*0x58bb5c*/
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
        *(void **)v2->numberStartingPoints + v4) = v7; /*0x58bba2*/
        ++v3; /*0x58bbab*/
        v6 += 4; /*0x58bbac*/
        *(void **)dword_A8B230[122].abstractFlags + v4) = v8; /*0x58bbaf*/
        v4 += 8; /*0x58bbbd*/
        *(unsigned int *)((char *)dword_A8B230 + v6 - 4) = *(unsigned int *)&g_MissionQueueFrame.waypoints[v6 + 1302]; /*0x58bbc0*/
        v2 = (gamemd::AbstractClass *)(dword_A8B230); /*0x58bbc4*/
        if ( v3 >= dword_A8B230[122].abstractFlags ) /*0x58bbd0*/
          break; /*0x58bbd0*/
        v5 = &g_MissionQueueFrame.waypoints[1470]; /*0x58bb82*/
      }
    }
    v2[122].vtable1 = (void *)g_MissionQueueFrame.briefing[355]; /*0x58bbda*/
    dword_A8B230[122].vtable2 = (void *)g_MissionQueueFrame.briefing[354]; /*0x58bbed*/
    dword_A8B230[122].vtable3 = (void *)g_MissionQueueFrame.localVariables[131]; /*0x58bbfe*/
    result = (void *)g_MissionQueueFrame.localVariables[147]; /*0x58bc0a*/
    dword_A8B230[122].uniqueId = g_MissionQueueFrame.localVariables[147]; /*0x58bc0f*/
  }
  return (gamemd::ScenarioClass **)(result); /*0x58bc16*/

}
}  // G42.18 ns repair
// 0x5CC330
namespace gamemd {
CampaignClass * * ScenarioClass_AnimateConstructionStage(ScenarioClass *aP0, ScenarioClass *aP0, void * a1, void * a2, void * a3, void * a4)
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
  int v18; // ecx
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
    v7 = TimerGetTicks() - *(unsigned int *)(v4 + 16); /*0x5cc354*/
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
  v8 = v5->q024; /*0x5cc365*/
  v5->INIClass_10 = TimerGetTicks(); /*0x5cc371*/
  v5->q014 = v30; /*0x5cc378*/
  v9 = v5->u32_40; /*0x5cc37b*/
  v5->q018 = v8; /*0x5cc381*/
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
  *v11 += v5->__pad_004; /*0x5cc3c3*/
  v11[1] = v5->q008 + v13; /*0x5cc3ca*/
  if ( (v5->u32_38 & 0x200) != 0 ) /*0x5cc3d3*/
  {
    *v11 += *(int16_t *)(v5->u32_1C + 2) / -2; /*0x5cc3e7*/
    v11[1] += *(int16_t *)(v5->u32_1C + 4) / -2; /*0x5cc3fc*/
  }
    (*(void (**)(MSOverlayAnim *, unsigned int *, DSurface *, unsigned int *, unsigned int, int, int))(*(unsigned int *)aP0->nextScenario
                                                                                            + 8))(
    aP0,
    v11,
    DSurface_Alternate,
    v11,
    0,
    1,
    a2);
  v14 = v5->u32_40; /*0x5cc41c*/
  if ( v14 >= 3 ) /*0x5cc41e*/
    v14 = 3; /*0x5cc420*/
  v15 = v5->u32_38 | dword_830078[v14]; /*0x5cc443*/
    v16 = *(unsigned int *)aP0->nextScenario;
  v30 = *(unsigned int *)(v5 + 4); /*0x5cc447*/
  v27 = v15; /*0x5cc452*/
  v31 = v5->q008; /*0x5cc456*/
  v17 = (int *)(*(int (**)(MSOverlayAnim *))(v16 + 120))(aP0); /*0x5cc45a*/
  DrawToSurfaceSHP( /*0x5cc470*/
    (int)aP0,
    v5->u32_20,
    v5->u32_1C,
    v5->u32_28,
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
  v18 = *&v5->q044; /*0x5cc475*/
  if ( v18 ) /*0x5cc47a*/
  {
    a3 = (void *)(v5); /*0x5cc47c*/
    a3 = (void *)((*(int (**)(int, int *))(*(unsigned int *)v18 + 16))(v18, &a3)); /*0x5cc48a*/
    v19 = v5->q044; /*0x5cc48e*/
    for ( i = 0; i < *(unsigned int *)(v19 + 16); ++i ) /*0x5cc498*/
    {
      if ( i != a3 ) /*0x5cc49e*/
      {
        v21 = *(unsigned int *)(*(unsigned int *)(v19 + 4) + 4 * i); /*0x5cc4a5*/
        (*(void (**)(int, MSOverlayAnim *, unsigned int *))(*(unsigned int *)v21 + 20))(v21, aP0, v11); /*0x5cc4aa*/
      }
      v19 = v5->q044; /*0x5cc4ad*/
    }
  }
  v22 = v5->u32_40 + 1; /*0x5cc4bc*/
  v5->u32_40 = v22; /*0x5cc4be*/
  if ( v22 >= 4 ) /*0x5cc4c4*/
  {
    v23 = v5->u32_38; /*0x5cc4cf*/
    v29 = *&v5->__pad_004; /*0x5cc4db*/
    (((unsigned char *)&(v23))[1]) |= 4u; /*0x5cc4e3*/
    v28 = v23; /*0x5cc4e7*/
    v30 = v5->q008; /*0x5cc4e8*/
        v24 = (int *)(*(int (**)(MSOverlayAnim *, int *))(*(unsigned int *)aP0->nextScenario + 120))(aP0, &v32);
    DrawToSurfaceSHP( /*0x5cc50f*/
      (int)DSurface_Alternate,
      v5->u32_20,
      v5->u32_1C,
      v5->u32_28,
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
  return *&v5->q048 == 0; /*0x5cc51b*/
}
}
// 0x5D6430
namespace gamemd {
int ScenarioClass_dispatchEvents()
{
  return Random::Range((Random *)&((unsigned int *)(dword_A8B230))[14].NeedsSaveOrLink, 0, 9); /*0x69b684*/
}
}
// 0x5D6440
namespace gamemd {
int ScenarioClass::MissionStubReturnZero3()
{
  return ();
}
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

  (v5)->FindStartPositions(); /*0x5d6bec*/
  for ( i = 0; i < stru_A80220.nextArrayIndex; ++i ) /*0x5d6bfa*/
  {
    v2 = (HouseClass *)*((unsigned int *)stru_A80220.vfptr3 + i); /*0x5d6c02*/
    if ( !*(unsigned char *)(v2->relatedTagsCapacity + 422) ) /*0x5d6c08*/
    {
      startingAllies = v2->startingAllies; /*0x5d6c12*/
      if ( startingAllies != -2 ) /*0x5d6c1b*/
      {
        HouseClass::SetMapSeed(v2, *((unsigned int *)Block + startingAllies)); /*0x5d6c25*/
        *(&((unsigned int *)(dword_A8B230))[124].uniqueId + startingAllies) = i; /*0x5d6c2f*/
      }
    }
  }
  *(unsigned int *)v5 = (unsigned int)(&vt_VectorClass); /*0x5d6c45*/
  if ( Block && v7 ) /*0x5d6c58*/
    operator delete((void *)(Block)); /*0x5d6c5b*/
  return 1; /*0x5d6c4f*/
}
// 0x6832C0
namespace gamemd {
// 0x6832C0 static site-form Constructor supply (W20L4 T2; forwards to member ctor below per raw fn_68.c:3392)
namespace gamemd {
int ScenarioClass::Constructor(void *aP1) { return ((ScenarioClass *)aP1)->Constructor(); }
}
}
}
// 0x683AB0
namespace gamemd {
int ScenarioClass::LoadScenarioAndStart(char *Source, char a2, double a3, int aP1, void * a4)
{
  char *v4; // ebp
  int uniqueId; // eax
  int Field; // ecx
  GameOption *v7; // esi
  int v8; // eax
  int v9; // edi
  uint8_t * Bool;
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

  v4 = Source; /*0x683ab8*/
  if ( (!Source || !strlen(Source)) && a4 != (void *)(-1) ) /*0x683ade*/
  {
    if ( ((unsigned int *)&stru_A8EB00)[377] == 1 ) /*0x683ae7*/
      v4 = (char *)(&DataGlobal_A83E48); /*0x683ae9*/
    else
      v4 = (char *)(*((unsigned int *)(unsigned int)(dword_A83CFC)+ a4) + 156); /*0x683af8*/
  }
  ((unsigned int *)(dword_A8B230))[375].uniqueId = a4; /*0x683b0a*/
  Debug::Log(); /*0x683b10*/
  Debug::Log(); /*0x683b21*/
  strcpy((char *)&((unsigned int *)(dword_A8B230))[130].abstractFlags, v4); /*0x683b47*/
  _strupr((char *)&((unsigned int *)(dword_A8B230))[130].abstractFlags); /*0x683b5d*/
  SetSoundWarning(-1); /*0x683b68*/
  if ( !*(unsigned int *)&dword_A8B238 ) /*0x683b73*/
  {
    uniqueId = ((unsigned int *)(dword_A8B230))[375].uniqueId; /*0x683b7b*/
    if ( uniqueId == -1 ) /*0x683b84*/
      goto LABEL_14; /*0x683b84*/
    Field = *(unsigned int *)(*((unsigned int *)dword_A83CFC + uniqueId) + 152); /*0x683b8f*/
    goto LABEL_13; /*0x683b95*/
  }
  if ( *(unsigned int *)&g_GameRulesOptions != -1 ) /*0x683b9f*/
  {
    v7 = *(GameOption **)(dword_A8B8CC + 4 * *(unsigned int *)&g_GameRulesOptions); /*0x683ba7*/
    v8 = Game::CheckForGameCD((Game *)0x3C); /*0x683baf*/
    if ( !(uint8_t)ScenarioClass::CheckExists((ScenarioClass *)v7, v8) ) /*0x683bb7*/
    {
      Field = (v7)->GetField(); /*0x683bc7*/
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
  v19.headNode[0] = 0; /*0x683c18*/
  v19.headNode[1] = 0; /*0x683c1c*/
  ((GenericList *)((GenericList *)&v19.headNode[2]))->Constructor(); /*0x683c20*/
  v19.headNode[2] = (int)&vt_List; /*0x683c29*/
  memset(&v19.needsSave_flag, 0, 13); /*0x683c32*/
  memset(&v19.unknown38, 0, 9); /*0x683c42*/
  /* X11: vtable install elided (implicit via CCINIClass virtuals 0x683c4e) */
  CCFileClass::Construct(&v20, v4); /*0x683c56*/
  if ( CCINIClass::Load(&v19, (int)&v20, 1, 0) ) /*0x683c67*/
  {
        Bool = INIClass::GetBool((uint8_t *)(/*0x683c85*/              (INIClass *)&v19),              (uint8_t *)&stru_82BA00.LeaveGrinderSound,              (uint8_t *)g_INI_Key_Intro,              -1);
    if ( Bool != -1 /*0x683ca5*/
            || (Bool = INIClass::GetBool((uint8_t *)((INIClass *)&v19),                    (uint8_t *)&stru_82BA00.LeaveGrinderSound,                    (uint8_t *)g_INI_Key_Brief,                    -1),
          Bool != -1) )
    {
      Theme::Stop((Theme *)&unk_A83D10, 0); /*0x683cad*/
      Movie::PlayWrapper(Bool, (int)v4, v9, 1, 1, 1); /*0x683cbd*/
    }
  }
  /* X11: vtable install elided (implicit via CCFileClass virtuals 0x683cc9) */
  v22 = 0; /*0x683cd1*/
  Vector::Clear((int)v21); /*0x683cd8*/
  /* X11: vtable install elided (implicit via off_7E1668 virtuals 0x683ce1) */
  ((BufferIOFileClass *)((BufferIOFileClass *)&v20))->Dtor(); /*0x683ce9*/
  ((INIClass *)&v19)->DestroyHashTableINIClass(); /*0x683cf2*/
  Debug::Log(); /*0x683cfd*/
  v11 = StringList::Find((StringList *)&unk_A83D10, &stru_82BA00.DamSmkOffScrnRel); /*0x683d0f*/
  ThemeClass::Play((ThemeClass *)&unk_A83D10, v11); /*0x683d1a*/
  if ( !Scenario::LoadWithProgress(v4, a3) ) /*0x683d21*/
  {
    (*(void (**)(void *))(*(unsigned int *)stru_887598.lineTrailer + 16))(stru_887598.lineTrailer); /*0x683d32*/
    goto LABEL_21; /*0x683d32*/
  }
  referenceCount = dword_A8B230[143].referenceCount; /*0x683d5e*/
  if ( referenceCount != -1 ) /*0x683d67*/
    wsprintfA(v23, "%s.VQA", *(const char **)(g_MissionQueueFrame.localVariables[580] + 4 * referenceCount)); /*0x683d80*/
  if ( dword_A8B230[375].abstractFlags > 0 ) /*0x683d95*/
    LoadScreen::RenderLoop(v15); /*0x683d97*/
  if ( a2 ) /*0x683da0*/
    Movie::PlayWrapper((int)dword_A8B230[144].vfptr1, (int)v4, v9, 1, 1, 1); /*0x683db6*/
  if ( *(unsigned int *)&g_CreditsScreenBounds != stru_A8EB00.vfptr[33] /*0x683dd6*/
    || *(unsigned int *)&((unsigned int *)(g_Map_VisibleRectOffset))[20] != stru_A8EB00.vfptr[34] )
  {
    Debug::Log(); /*0x683ddf*/
    ChangeVideoMode((&stru_A8EB00.vfptr)[33], (&stru_A8EB00.vfptr)[34]); /*0x683df3*/
  }
  LoadingScreen::FreeResources3(); /*0x683df8*/
  ((AudioOptionsClass *)&stru_A8EB00.vfptr[24])->ApplySettings(); /*0x683e02*/
  (*((void (**)(ObjectClass *, unsigned int))g_DSurface_Hidden->vfptr + 6))(g_DSurface_Hidden, 0); /*0x683e10*/
  Frame::Present((void *)((int)g_DSurface_Hidden), 0, (int)v4, v9, 0, (int)v15, v16, v17); /*0x683e1c*/
  if ( dword_A8B230[43].vfptr2 == (void *)-1 ) /*0x683e35*/
  {
    p_vtable2 = &(&dword_A8B230)[43].vfptr2; /*0x683e26*/
    *p_vtable2 = TimerGetTicks(); /*0x683e3f*/
  }
  if ( dword_A8B230[202].vfptr2 == (void *)-1 ) /*0x683e50*/
    Theme::Stop((Theme *)&unk_A83D10, 1); /*0x683e66*/
  else
    ((int)&unk_A83D10)->QueueSong((int)dword_A8B230[202].vfptr2); /*0x683e58*/
  DisableIME(); /*0x683e6b*/
  ((unsigned int *)&stru_A8EB00)[376] = 1; /*0x683e75*/
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
    if ( dword_A8B230[43].vfptr2 != (void *)-1 ) /*0x683eff*/
      TimerGetTicks(); /*0x683f04*/
    Debug::Log(); /*0x683f13*/
    v1 = (AsyncIO *)dword_A8B230; /*0x683f18*/
    p_vtable2 = &dword_A8B230[43].vfptr2; /*0x683f27*/
    if ( dword_A8B230[43].vfptr2 != (void *)-1 ) /*0x683f31*/
    {
      Ticks = TimerGetTicks(); /*0x683f36*/
      v4 = (char *)((unsigned int *)(p_vtable2))[2]; /*0x683f3d*/
      v5 = Ticks - (unsigned int)*p_vtable2; /*0x683f40*/
      *p_vtable2 = (void *)-1; /*0x683f42*/
      v1 = (AsyncIO *)&v4[v5]; /*0x683f48*/
      p_vtable2[2] = v1; /*0x683f4a*/
    }
  }
  (*((unsigned char *)&(v1))) = 1; /*0x683f4d*/
  (v1)->Read(); /*0x683f4f*/
  if ( *(unsigned int *)&g_TacticalRender ) /*0x683f5d*/
    Tooltip::Enable(*(Tooltip **)&g_TacticalRender, 0); /*0x683f61*/
  ((ScrollClass *)&DataGlobal_87F7E8)->ReleaseCapture(); /*0x683f6b*/
  ((int)&DataGlobal_87F7E8)->SetCursor(0, 0); /*0x683f79*/
  (*(void (**)(void *))(*(unsigned int *)stru_887598.lineTrailer + 12))(stru_887598.lineTrailer); /*0x683f86*/
  MapClass::MarkForRedraw((GScreenClass *)&DataGlobal_87F7E8, 2); /*0x683f90*/
  ((TacticalMap *)((GScreenClass *)&DataGlobal_87F7E8))->Redraw(); /*0x683f9a*/
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

  result = dword_A8B230[43].NeedsSaveOrLink; /*0x684186*/
  if ( result ) /*0x68418e*/
  {
    dword_A8B230[43].NeedsSaveOrLink = result - 1; /*0x684195*/
    result = (unsigned char *)(dword_A8B230); /*0x68419b*/
    if ( !dword_A8B230[43].NeedsSaveOrLink ) /*0x6841a0*/
    {
      if ( !byte_B054CC ) /*0x6841b6*/
      {
        if ( BYTE2(dword_A8B230[381].vtable3) == 1 ) /*0x6841bf*/
        {
          while ( (*(int (**)(void *))(*(unsigned int *)stru_887598.lineTrailer + 40))(stru_887598.lineTrailer) ) /*0x6841c9*/
            (*(void (**)(void *))(*(unsigned int *)stru_887598.lineTrailer + 16))(stru_887598.lineTrailer); /*0x6841d8*/
          result = (unsigned char *)(dword_A8B230); /*0x6841ea*/
        }
        result->ScenarioClass_field_35A2 = 0; /*0x6841ef*/
        DataGlobal_A8EB00[668] = 0; /*0x6841fc*/
        (*(Timer **)&g_BinkMoviePlayer)->PumpMessages(); /*0x684203*/
        result = (unsigned char *)(dword_A8B230); /*0x684208*/
        dword_B07784 = 0; /*0x68420d*/
      }
      if ( result->u32_614 == -1 ) /*0x684227*/
        *(&result->u32_614) = Timer::GetTicks(); /*0x684231*/
      return (unsigned char *)sub_406F40(); /*0x684233*/
    }
  }
  return result; /*0x684239*/

}
}
// 0x686730
namespace gamemd {
int ScenarioClass_Construct(void * a2)
{
  char result; // al
  char Map; // bl
  CCINIClass v5; // [esp+10h] [ebp-C4h] BYREF
  CCFileClass v6; // [esp+68h] [ebp-6Ch] BYREF
  int v7[3]; // [esp+C0h] [ebp-14h] BYREF
  int v8; // [esp+CCh] [ebp-8h]

  result = vt_CD(dword_81C1D0); /*0x68674c*/
  if ( result ) /*0x686754*/
  {
    *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] = 0; /*0x686765*/
    v5.headNode[0] = 0; /*0x68676b*/
    v5.headNode[1] = 0; /*0x68676f*/
    ((GenericList *)&v5.headNode[2])->Constructor(); /*0x686773*/
    v5.headNode[2] = (int)&vt_List; /*0x68677c*/
    Node::Init((Node *)&v5.needsSave_flag); /*0x686784*/
    v5.INIClass_field_3C = 0; /*0x68678d*/
    v5.ownsFile = 0; /*0x686792*/
    /* X11: vtable install elided (implicit via CCINIClass virtuals 0x686797) */
    CCFileClass::Construct(&v6, Source); /*0x68679f*/
    Debug::Log(); /*0x6867aa*/
    if ( CCINIClass::Load(&v5, (int)&v6, 1, 0) ) /*0x6867be*/
    {
      strcpy((char *)&dword_A8B230[130].abstractFlags, Source); /*0x686836*/
      Map = ScenarioClass::LoadMap(0, (bool *)v5.vtable1, a2); /*0x686851*/
      /* X11: vtable install elided (implicit via CCFileClass virtuals 0x686853) */
      v8 = 0; /*0x68685b*/
      Vector::Clear((int)v7); /*0x686862*/
      /* X11: vtable install elided (implicit via off_7E1668 virtuals 0x68686b) */
      ((BufferIOFileClass *)((BufferIOFileClass *)&v6))->Dtor(); /*0x686873*/
      ((INIClass *)&v5)->DestroyHashTableINIClass(); /*0x68687c*/
      return Map; /*0x686881*/
    }
    else
    {
      Debug::Log(); /*0x6867cc*/
      /* X11: vtable install elided (implicit via CCFileClass virtuals 0x6867db) */
      v8 = 0; /*0x6867e3*/
      Vector::Clear((int)v7); /*0x6867ea*/
      /* X11: vtable install elided (implicit via off_7E1668 virtuals 0x6867f3) */
      ((BufferIOFileClass *)((BufferIOFileClass *)&v6))->Dtor(); /*0x6867fb*/
      ((INIClass *)&v5)->DestroyHashTableINIClass(); /*0x686804*/
      return 0; /*0x686809*/
    }
  }
  return result; /*0x686756*/
}
}
// 0x686B20
namespace gamemd {
ScenarioClass * * ScenarioClass_LoadMap(void * a2)
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
  wchar_t *v20;
  unsigned int v19;
  int v18;
  unsigned int v16;
  int v15;
  unsigned int v10;
  wchar_t *v21;

  bool v51 = g_GameMode_Current == 0;
  v3 = (CCINIClass *)(a2);
  ++*(unsigned int *)&(&g_NetworkPlayerBuffer)[4464];
  Debug::Log("Clearing old scenario\n") /*G57c1: IDA 0x686b55 push offset aClearingOldSce*/;
  while ( 1 )
  {
    if ( !v51 )
      ResetScenario();
    if ( g_GameMode_Current )
    {
      g_ScenarioClass_Instance->difficulty2 = (int)DataGlobal_A8B278;
      g_ScenarioClass_Instance->elapsedTimer[0] = 2 - g_ScenarioClass_Instance->difficulty2;
      int v6 = g_ScenarioClass_Instance->nextScenario[0];
      (((v6) >> 8) & 0xFF) = (((unsigned char *)&(g_ScenarioClass_Instance->nextScenario[0]))[1]) & 0xEF;
      g_ScenarioClass_Instance->nextScenario[0] = v6 | (((uint8_t)FOW & 1) << 12);
      v7 = *(ObjectClass **)&(&g_NetworkPlayerBuffer)[4900];
      (((v7) >> 8) & 0xFF) = (&g_NetworkPlayerBuffer)[4901] & 0xEF;
      *(unsigned int *)&(&g_NetworkPlayerBuffer)[4900 ]= (unsigned int)v7 | (((uint8_t)FOW & 1) << 12);
    }
    else
    {
      g_ScenarioClass_Instance->difficulty2 = *(unsigned int *)&(&g_NetworkPlayerBuffer)[5416];
      g_ScenarioClass_Instance->elapsedTimer)[0] = 2 - *(unsigned int *)&(&g_NetworkPlayerBuffer)[5416];
      int v4 = g_ScenarioClass_Instance->nextScenario[0];
      (((v4) >> 8) & 0xFF) = (((unsigned char *)&(g_ScenarioClass_Instance->nextScenario[0]))[1]) & 0xEF;
      g_ScenarioClass_Instance->nextScenario[0] = v4;
      v5 = *(ObjectClass **)&(&g_NetworkPlayerBuffer)[4900];
      (((v5) >> 8) & 0xFF) = (&g_NetworkPlayerBuffer)[4901] & 0xEF;
      *(unsigned int *)&(&g_NetworkPlayerBuffer)[4900 ]= (unsigned int)v5;
    }
    *&g_ScenarioClass_Instance->InitTime = INIClass::ReadInt_Overwrite(
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
    ((GenericList *)(&v57))->Constructor();
    v57 = (unsigned int)&vt_List_INIClass_INISection;
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
        strcat( Filename[0], (const char *)(&stru_830620[54836]));
        ((::gamemd::FileClass*)(aP1))->SetFileName((IUnknown *)&Filename);
        if ( ((CCFileClass *)(aP1))->Open(0) )
        {
          ((CCINIClass *)(var158))->Load( (int)(aP1), 0, 0);
          RulesClass::Addition(*(RulesClass **)&DataGlobal_87F8E4[30972]);
        }
        CCFileClass::Reset(aP1);
      }
      ((::gamemd::FileClass*)(aP1))->SetFileName((IUnknown *)&stru_830620[37124]);
      if ( ((CCFileClass *)(aP1))->Open(0) )
      {
        ((CCINIClass *)(var158))->Load( (int)(aP1), 0, 0);
        *(unsigned short *)g_ScenarioClass_Instance->name = 0;
        if ( &g_INI_Key_UIName == (int *)-8 )
          Section = (int)(INIClass::BinarySearchSection( (INIClass *)((int)var158), (INIClass *)g_ScenarioClass_Instance->fileName));
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
        (*((unsigned short *)&(g_ScenarioClass_Instance->briefing[0]))) = 0;
        if ( (void *)&stru_830620 == (IUnknown *)-37112 )
          int v10 = INIClass::BinarySearchSection( (INIClass *)((int)var158), (INIClass *)g_ScenarioClass_Instance->fileName);
        else
          v10 = HashTableSection::FindSection(
                  (int)var158(uint8_t *)(),
                  (CCINIClass *)g_ScenarioClass_Instance->fileName,
                  (CCINIClass *)&stru_830620[37112]);
        if ( v10 )
        {
          ((INIClass*)var158)->GetString((INIClass *)g_ScenarioClass_Instance->fileName, (uint8_t *)&stru_830620[37112], (INIClass *)&DataGlobal_87F8E4[42624], (INIClass *)g_ScenarioClass_Instance->briefingCsf, 32);
          if ( strlen((const char *)g_ScenarioClass_Instance->briefingCsf) )
          {
            StringCSF = GetStringCSF( (wchar_t *)g_ScenarioClass_Instance->briefingCsf, 0, (const char *)(&stru_830620[53784]), 3167);
            wcsncpy( (wchar_t *)g_ScenarioClass_Instance->briefing, (const wchar_t *)(StringCSF), 0x400u);
            (*(((unsigned short *)&(g_ScenarioClass_Instance->briefing[511])) + 1)) = 0;
          }
        }
        g_ScenarioClass_Instance->uiName[0] = 0;
  int v12; // eax
        if ( &g_INI_Key_UIName )
          v12 = HashTableSection::FindSection(
                  (int)var158(uint8_t *)(),
                  (CCINIClass *)g_ScenarioClass_Instance->fileName,
                  (CCINIClass *)&g_INI_Key_UIName);
        else
          v12 = (int)(INIClass::BinarySearchSection( (INIClass *)((int)var158), (INIClass *)g_ScenarioClass_Instance->fileName));
        if ( v12 )
        {
          ((INIClass*)var158)->GetString((INIClass *)g_ScenarioClass_Instance->fileName, (uint8_t *)&g_INI_Key_UIName, (INIClass *)&DataGlobal_87F8E4[42624], (INIClass *)g_ScenarioClass_Instance->uiName, 32);
          if ( strlen(g_ScenarioClass_Instance->uiName) )
          {
            v13 = GetStringCSF( (wchar_t *)g_ScenarioClass_Instance->uiName, 0, (const char *)(&stru_830620[53784]), 3179);
            wcsncpy( (wchar_t *)g_ScenarioClass_Instance->name, (const wchar_t *)(v13), 0x2Du);
            *&g_ScenarioClass_Instance->u16_3250 = 0;
            sprintf((char *const)Buffer,(const char *const)(&stru_830620[54828]), g_ScenarioClass_Instance->uiName);
            v14 = GetStringCSF( (wchar_t *)(Buffer), 0, (const char *)(&stru_830620[53784]), 3183);
            wcsncpy( (wchar_t *)g_ScenarioClass_Instance->uiNameLoaded, (const wchar_t *)(v14), 0x2Du);
            if ( !wcsncmp(
                    (const wchar_t *)g_ScenarioClass_Instance->uiNameLoaded,
                    (const wchar_t *)&stru_830620[54808],
                    8u) )
              wcsncpy((wchar_t *)g_ScenarioClass_Instance->uiNameLoaded, (const wchar_t *)g_ScenarioClass_Instance->name, 0x2Du);
            *&g_ScenarioClass_Instance->u16_32CA = 0;
          }
        }
        g_ScenarioClass_Instance->lsLoadMessage[0] = 0;
        if ( (void *)&stru_830620 == (IUnknown *)-54792 )
          int v15 = INIClass::BinarySearchSection( (INIClass *)((int)var158), (INIClass *)g_ScenarioClass_Instance->fileName);
        else
          v15 = HashTableSection::FindSection(
                  (int)var158(uint8_t *)(),
                  (CCINIClass *)g_ScenarioClass_Instance->fileName,
                  (CCINIClass *)&stru_830620[54792]);
        if ( v15 )
          ((INIClass*)var158)->GetString((INIClass *)g_ScenarioClass_Instance->fileName, (uint8_t *)&stru_830620[54792], (INIClass *)&DataGlobal_87F8E4[42624], (INIClass *)g_ScenarioClass_Instance->lsLoadMessage, 31);
        g_ScenarioClass_Instance->lsBrief[0] = 0;
        if ( (void *)&stru_830620 == (IUnknown *)-54776 )
          int v16 = INIClass::BinarySearchSection( (INIClass *)((int)var158), (INIClass *)g_ScenarioClass_Instance->fileName);
        else
          v16 = HashTableSection::FindSection(
                  (int)var158(uint8_t *)(),
                  (CCINIClass *)g_ScenarioClass_Instance->fileName,
                  (CCINIClass *)&stru_830620[54776]);
        if ( v16 )
          ((INIClass*)var158)->GetString((INIClass *)g_ScenarioClass_Instance->fileName, (uint8_t *)&stru_830620[54776], (INIClass *)&DataGlobal_87F8E4[42624], (INIClass *)g_ScenarioClass_Instance->lsBrief, 31);
        if ( (void *)&stru_830620 == (IUnknown *)-54760 )
          int v17 = INIClass::BinarySearchSection( (INIClass *)((int)var158), (INIClass *)g_ScenarioClass_Instance->fileName);
        else
          v17 = HashTableSection::FindSection(
                  (int)var158(uint8_t *)(),
                  (CCINIClass *)g_ScenarioClass_Instance->fileName,
                  (CCINIClass *)&stru_830620[54760]);
        if ( v17 )
          g_ScenarioClass_Instance->ls640BriefLocX = INIClass::ReadInt_Overwrite(
                                               (int)var158,
                                               (uint8_t *)g_ScenarioClass_Instance->fileName,
                                               (CCINIClass *)&stru_830620[54760],
                                               (INIClass *)g_ScenarioClass_Instance->ls640BriefLocX);
        if ( (void *)&stru_830620 == (IUnknown *)-54744 )
          int v18 = INIClass::BinarySearchSection( (INIClass *)((int)var158), (INIClass *)g_ScenarioClass_Instance->fileName);
        else
          v18 = HashTableSection::FindSection((uint8_t *)((int)var158),(uint8_t *)((CCINIClass *)g_ScenarioClass_Instance->fileName),
                  (CCINIClass *)&stru_830620[54744]);
        if ( v18 )
          g_ScenarioClass_Instance->ls640BriefLocY = INIClass::ReadInt_Overwrite(
                                               (int)var158,
                                               (uint8_t *)g_ScenarioClass_Instance->fileName,
                                               (CCINIClass *)&stru_830620[54744],
                                               (INIClass *)g_ScenarioClass_Instance->ls640BriefLocY);
        if ( (void *)&stru_830620 == (IUnknown *)-54728 )
          int v19 = INIClass::BinarySearchSection( (INIClass *)((int)var158), (INIClass *)g_ScenarioClass_Instance->fileName);
        else
          v19 = HashTableSection::FindSection((uint8_t *)((int)var158),(uint8_t *)((CCINIClass *)g_ScenarioClass_Instance->fileName),
                  (CCINIClass *)&stru_830620[54728]);
        if ( v19 )
          g_ScenarioClass_Instance->ls800BriefLocX = INIClass::ReadInt_Overwrite(
                                               (int)var158,
                                               (uint8_t *)g_ScenarioClass_Instance->fileName,
                                               (CCINIClass *)&stru_830620[54728],
                                               (INIClass *)g_ScenarioClass_Instance->ls800BriefLocX);
        if ( (void *)&stru_830620 == (IUnknown *)-54712 )
          int v20 = INIClass::BinarySearchSection( (INIClass *)((int)var158), (INIClass *)g_ScenarioClass_Instance->fileName);
        else
          v20 = HashTableSection::FindSection((uint8_t *)((int)var158),
                  (uint8_t *)g_ScenarioClass_Instance->fileName,
                  (CCINIClass *)&stru_830620[54712]);
        if ( v20 )
          g_ScenarioClass_Instance->ls800BriefLocY = INIClass::ReadInt_Overwrite(
                                               (int)var158,
                                               (uint8_t *)g_ScenarioClass_Instance->fileName,
                                               (CCINIClass *)&stru_830620[54712],
                                               (INIClass *)g_ScenarioClass_Instance->ls800BriefLocY);
        (*((unsigned char *)&(g_ScenarioClass_Instance->ls640BkgdName[0]))) = 0;
        if ( (void *)&stru_830620 == (IUnknown *)-54696 )
          int v21 = INIClass::BinarySearchSection( (INIClass *)((int)var158), (INIClass *)g_ScenarioClass_Instance->fileName);
        else
          v21 = HashTableSection::FindSection(
                  (uint8_t *)var158,
                  (uint8_t *)g_ScenarioClass_Instance->fileName,
                  (CCINIClass *)&stru_830620[54696]);
        if ( v21 )
          ((INIClass*)var158)->GetString((INIClass *)g_ScenarioClass_Instance->fileName, (uint8_t *)&stru_830620[54696], (INIClass *)&DataGlobal_87F8E4[42624], (INIClass *)g_ScenarioClass_Instance->ls640BkgdName, 64);
        (*((unsigned char *)&(g_ScenarioClass_Instance->ls800BkgdName[0]))) = 0;
        if ( (void *)&stru_830620 == (IUnknown *)-54680 )
          int v22 = INIClass::BinarySearchSection( (INIClass *)((int)var158), (INIClass *)g_ScenarioClass_Instance->fileName);
        else
          v22 = HashTableSection::FindSection(
                  (uint8_t *)var158,
                  (uint8_t *)g_ScenarioClass_Instance->fileName,
                  (CCINIClass *)&stru_830620[54680]);
        if ( v22 )
          ((INIClass*)var158)->GetString((INIClass *)g_ScenarioClass_Instance->fileName, (uint8_t *)&stru_830620[54680], (INIClass *)&DataGlobal_87F8E4[42624], (INIClass *)g_ScenarioClass_Instance->ls800BkgdName, 64);
        (*((unsigned char *)&(g_ScenarioClass_Instance->ls800BkgdPal[0]))) = 0;
        if ( (void *)&stru_830620 == (IUnknown *)-54664 )
          int v23 = INIClass::BinarySearchSection( (INIClass *)((int)var158), (INIClass *)g_ScenarioClass_Instance->fileName);
        else
          v23 = HashTableSection::FindSection(
                  (uint8_t *)var158,
                  (uint8_t *)g_ScenarioClass_Instance->fileName,
                  (CCINIClass *)&stru_830620[54664]);
        if ( v23 )
          ((INIClass*)var158)->GetString((INIClass *)g_ScenarioClass_Instance->fileName, (uint8_t *)&stru_830620[54664], (INIClass *)&DataGlobal_87F8E4[42624], (INIClass *)g_ScenarioClass_Instance->ls800BkgdPal, 64);
      }
    }
    for ( i = 1120; i < 1136; g_ScenarioClass_Instance->nextScenario[i - 1] = -1 )
      ++i;
    if ( g_GameMode_Current )
    {
      ScenarioClass::ReadWaypoints((int16_t *)g_ScenarioClass_Instance, v3);
      v25 = (ScenarioClass *)(g_ScenarioClass_Instance);
      if ( g_ScenarioClass_Instance->isRandom )
      {
        int v26 = 0;
        while ( 1 )
        {
          *&v25->waypoints = v25->houseHomeCells[v26];
          if ( ++v26 >= 8 )
            break;
          v25 = (ScenarioClass *)(g_ScenarioClass_Instance);
        }
      }
      ((RulesClass *)(*(RulesClass **)&DataGlobal_87F8E4[30972]))->LoadCountries();
      RulesClass::LoadFromINI(*(RulesClass **)&DataGlobal_87F8E4[30972]);
      for ( j = 0; j < g_SuperWeaponTypeArray; ++j )
        (*(void (**)(unsigned int, unsigned int))(**((unsigned int **)g_SuperWeaponTypeCount + j) + 100))(
          *((unsigned int *)g_SuperWeaponTypeCount + j),
          *(unsigned int *)&DataGlobal_87F8E4[30564]);
      AssignSessionHouses();
      v3 = (CCINIClass *)(a2);
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
      ((CellClass *)(int *)&DataGlobal_87F7E8)->DrawWrapper( (unsigned int *)((Tactical *)&v60), 1, 0, 1);
      if ( !g_ScenarioClass_Instance->isRandom )
        PreviewClass::RenderMapPreview(g_ScenarioClass_Instance->nextScenario, a2);
  unsigned int *v29; // eax
      v29 = INIClass::ParseValue(
              (int)a2,
              Filename->q080,
              (INIClass *)&g_INI_Key_CellTags.headNode[2],
              (uint8_t *)g_INI_Key_LocalSize,
              &DataGlobal_87F8E4);
      v60 = *v29;
      v61 = v29[1];
      v62 = v29[2];
      v63 = v29[3];
      ((Shroud *)&DataGlobal_87F7E8)->ProcessCellVisibility( (MouseClass *)&v60);
(*(void (**)(SkirmishDialog *, char))(*(unsigned int *)g_GameStateFlags + 128))( (SkirmishDialog *)(g_GameStateFlags), v53);


      if ( g_GameOptionsFlags == 2 )
        HouseClass::FindStartPositions();
      else
(*(void (**)(SkirmishDialog *, char))(*(unsigned int *)g_GameStateFlags + 132))( (SkirmishDialog *)(g_GameStateFlags), v53);


    }
    Instance = LoadProgressMgr::GetInstance();
    LoadingScreen::Render(Instance);
    ((Multiplayer *)(&g_GameMode_Current))->ShowProgress(3);
    if ( !v51 )
      break;
    v51 = 0;
    *aP1->vtable1.q000 = (unsigned int)&vt_CCFileClass;
    v69 = (ObjectClass *)(0);
    ((Vector *)((int)v65))->Clear((int)((Vector *)((int)v65)));
    *aP1->vtable1.q000 = (unsigned int)&off_7E1668;
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
  if ( INIClass::GetKeyCount( (INIClass *)(*(char **)&DataGlobal_87F8E4[30564]), (INIClass *)&stru_830620[53764]) >= 50 )
    v35 = (INIClass *)50;
  INIClass *v35 = (INIClass *)INIClass::GetKeyCount( (INIClass *)(v33),  (INIClass *)&stru_830620[53764]);
  for ( k = 0; (int)k < (int)v35; k = &k->u32_1 )
  {
    v37 = (INIClass *)INIClass::GetStringByIndex( (CCINIClass *)(v33), (CCINIClass *)&stru_830620[53764], (void *)(k));
    eax102 = atoi(v37->vtable1);
    ((INIClass*)((uint8_t ***)v33))->GetString((INIClass *)&stru_830620[53764], (uint8_t *)v37, 0, (INIClass *)((char *)&v56[83] + 40 * eax102 + eax102), 40);
  }
  Event::Dispatch();
  RulesClass::Addition(*(RulesClass **)&DataGlobal_87F8E4[30972]);
  ((Multiplayer *)(&g_GameMode_Current))->ShowProgress(45);
  v38 = (ScenarioClass *)(g_ScenarioClass_Instance);
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
      v39 = *(unsigned int *)(*(unsigned int *)&g_CampaignTypeArray->q000[4 * campaignIndex] + 152);
  }
  int v42 = v39;
  if ( g_GameMode_Current )
  {
    g_ScenarioClass_Instance->playerSideIndex = v39;
    if ( !MixFile::LoadSide( (void *)(v39)) )
    {
LABEL_124:
      *aP1->vtable1.q000 = (unsigned int)&vt_CCFileClass;
      --*(unsigned int *)&g_NetworkPlayerBuffer[4464];
      v69 = (ObjectClass *)(0);
      ((Vector *)((int)v65))->Clear((int)((Vector *)((int)v65)));
      *aP1->vtable1.q000 = (unsigned int)&off_7E1668;
      ((BufferIOFileClass *)(aP1))->Dtor();
      HashTable_flat::DestroyHashTableINIClass((void **)var158);
      return 0;
    }
  }
  else
  {
    HouseClass::LoadTypeList(a2->q000);
    ((INIClass*)((uint8_t ***)a2))->GetString((INIClass *)&g_INI_Key_Lighting.sectionHead[1], (uint8_t *)&g_INI_Key_Lighting.sectionCount, (INIClass *)&stru_830620[54652], &Filename, 32);
    int v43 = HouseClass::FindByName(Filename[0]);
    if ( v43 == -1 || v43 > (int)HouseClass_Count )
      v42 = 0;
    else
      v42 = *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&HouseClass_Array->q000[4 * v43] + 52) + 188);
    g_ScenarioClass_Instance->playerSideIndex = v42;
    if ( !MixFile::LoadSide( (void *)(v42)) )
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
      (*(void (**)(SkirmishDialog *))(*(unsigned int *)g_GameStateFlags + 124))( (SkirmishDialog *)(g_GameStateFlags));
  }
  else
  {
    ((INIClass*)((uint8_t ***)a2))->GetString((INIClass *)&g_INI_Key_Lighting.sectionHead[1], (uint8_t *)&g_INI_Key_Lighting.sectionCount, (INIClass *)&stru_830620[54652], Filename->q080, 32);
    int v44 = HouseClass::FindByName(Filename[32]);
    if ( v44 == -1 || v44 > (int)HouseClass_Count )
      v42 = 0;
    else
      v42 = *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&HouseClass_Array->q000[4 * v44] + 52) + 188);
    if ( !MixFile::LoadSide( (void *)(v42)) )
      goto LABEL_124;
    g_ScenarioClass_Instance->playerSideIndex = v42;
  }
  if ( g_GameMode_Current && !(unsigned char)BridgeDestruction )
  {
    v47 = *(ObjectClass **)&g_NetworkPlayerBuffer[4900];
    (((v47) >> 8) & 0xFF) = g_NetworkPlayerBuffer[4901] & 0x7F;
    *(unsigned int *)&g_NetworkPlayerBuffer[4900] = (unsigned int)v47;
  }
  nullsub_37();
  Event::Dispatch();
  SmallFunc_6F19B0(&DataGlobal_87F8E4[30788], 1);
  SmallFunc_6F19B0(a2->q000, 0);
  ScoreScreenClass::ProcessFrame(&DataGlobal_87F8E4[30788], 1);
  ScoreScreenClass::ProcessFrame(a2->q000, 0);
  TaskForceClass::LoadFromINI( (char *)(&DataGlobal_87F8E4[30788]), 1);
  TaskForceClass::LoadFromINI(a2->q000, 0);
  TriggerClass::Process(a2->q000);
  CCINIClass::ProcessSection(a2->q000);
  CCINIClass::ReadTypeList( (char *)(&DataGlobal_87F8E4[30788]), (CCINIClass *)1);
  CCINIClass::ReadTypeList(a2->q000, 0);
  Helper_6F2040();
  ((Multiplayer *)(&g_GameMode_Current))->ShowProgress(60);
  ScenarioClass::LoadMapData((int *)&DataGlobal_87F7E8, a2);
  Event::Dispatch();
  ScenarioClass::LoadWaypoints(a2->q000);
  BulletTypeClass::ReadTrailerAnim();
  ((MapClass *)((int)(&DataGlobal_87F7E8)))->MarkForRedraw((int)((MapClass *)((int)(&DataGlobal_87F7E8))), 2);
  ((Multiplayer *)(&g_GameMode_Current))->ShowProgress(70);
  Event::Dispatch();
  ReadOverlayINI(a2);
  Event::Dispatch();
  ((LayerClass *)(&DataGlobal_87F7E8))->CellIteratorReset();
  for ( m = ((LayerClass *)(&DataGlobal_87F7E8))->CellIteratorNext(); m; m = ((LayerClass *)(&DataGlobal_87F7E8))->CellIteratorNext() )
    ((House *)(m))->AnnounceUpgrade( (int)((IUnknown *)-1));
  ResetBuildingState();
  CCINIClass::LoadTypeFromINI(a2->q000);
  Event::Dispatch();
  InitializeVeinholeSystem(1);
  BuildingClass::ClearOccupancyData();
  BuildingClass::ClearFactoryData();
  ((Multiplayer *)(&g_GameMode_Current))->ShowProgress(72);
  RadarClass::RecreateSurface((int)&DataGlobal_87F7E8, v42);
  PlaceScenarioUnits(a2->q000, (int)v38);
  Event::Dispatch();
  ((Multiplayer *)(&g_GameMode_Current))->ShowProgress(74);
  PlaceAircraftFromINI(a2->q000, (int)a2);
  Event::Dispatch();
  PlaceScenarioInfantry(a2->q000);
  Event::Dispatch();
  ((Multiplayer *)(&g_GameMode_Current))->ShowProgress(76);
  byte_829AE4 = 0;
  ((Scenario *)a2)->ReadTeams();
  Event::Dispatch();
  ((Multiplayer *)(&g_GameMode_Current))->ShowProgress(78);
  byte_829AE4 = 1;
  Event::Dispatch();
  UnitClass::ReadINI(a2->q000);
  Event::Dispatch();
  if ( g_GameMode_Current == 5 )
  {
    if ( g_NetworkPlayerBuffer[5973] )
    {
      CCFileClass::Reset(aP1);
      ((::gamemd::FileClass*)(aP1))->SetFileName((IUnknown *)&stru_830620[54640]);
      if ( ((CCFileClass *)(aP1))->Open(0) == 1 )
      {
        ((CCINIClass *)(var158))->Load( (int)(aP1), 0, 0);
        RulesClass::Addition(*(RulesClass **)&DataGlobal_87F8E4[30972]);
      }
    }
  }
  ((Multiplayer *)(&g_GameMode_Current))->ShowProgress(82);
  Event::Dispatch();
  DataGlobal_87F8E4.q038 = ((MapClass *)&DataGlobal_87F7E8)->PostProcessReveal( 0);
  ((Multiplayer *)(&g_GameMode_Current))->ShowProgress(86);
  Event::Dispatch();
  CCFileClass::Create(dword_89C3B0);
  ((Multiplayer *)(&g_GameMode_Current))->ShowProgress(90);
  Event::Dispatch();
  if ( g_GameMode_Current && !a1 )
  {
  void *v48; // ecx
    (*((unsigned char *)&(v48))) = INIClass::ReadBool_Overwrite(
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
  (*(void (**)(char *))(*(unsigned int *)&DataGlobal_87F8E4[4392] + 12))( (char *)(&DataGlobal_87F8E4[4392]));
  if ( (g_ScenarioClass_Instance->nextScenario[0] & 0x1000) != 0 )
    SmallFunc_5866C0(&DataGlobal_87F7E8);
  Map_Load_660B00();
  ((FogOfWar *)((int **)&DataGlobal_87F7E8))->Render();
  *aP1->vtable1.q000 = (unsigned int)&vt_CCFileClass;
  v69 = (ObjectClass *)(0);
  ((Vector *)((int)v65))->Clear((int)((Vector *)((int)v65)));
  *aP1->vtable1.q000 = (unsigned int)&off_7E1668;
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
  _VectorClass_PAVTechnoTypeClass *v24; // ecx
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
  GameMode::ReadFlagsFromINI(aP1);
  this->startX = INIClass::ReadInt_Overwrite(
                               (int)aP1,
                               (uint8_t *)&g_INI_Key_Header,
                               (CCINIClass *)&g_INI_Key_StartX,
                               *(INIClass **)this->u8_6DC6));
  this->startY = INIClass::ReadInt_Overwrite(
                               (int)aP1,
                               (uint8_t *)&g_INI_Key_Header,
                               (CCINIClass *)&g_INI_Key_StartY,
                               *(INIClass **)this->u8_6E00));
  this->width = INIClass::ReadInt_Overwrite(
                               (int)aP1,
                               (uint8_t *)&g_INI_Key_Header,
                               (CCINIClass *)&stru_82BBD0.sectionHead[1],
                               *(INIClass **)this->u8_6E04));
  this->height = INIClass::ReadInt_Overwrite(
                               (int)aP1,
                               (uint8_t *)&g_INI_Key_Header,
                               &g_INI_Key_Height,
                               *(INIClass **)this->u8_6E08));
  this->numberStartingPoints = INIClass::ReadInt_Overwrite(
                               (int)aP1,
                               (uint8_t *)&g_INI_Key_Header,
                               (CCINIClass *)&g_INI_Key_NumberStartingPoints,
                               *(INIClass **)this->u8_6E42));
  this->numCoopHumanStartSpots = INIClass::ReadInt_Overwrite(
                               (int)aP1,
                               (uint8_t *)&g_INI_Key_Header,
                               (CCINIClass *)&g_INI_Key_NumCoopHumanStartSpots,
                               *(INIClass **)this->q7280));
  v4 = 0;
  if ( this->numberStartingPoints > 0 )
  {
    v5 = (RandomStruct *)this->u8_6E46);
    do
    {
      v122 = (void ***)((char *)v4 + 1);
      sprintf(Buffer, &g_Str_Trace_Waypoint_d, (char *)v4 + 1);
      v6 = INIClass::ReadPoint2D_Overwrite(
             aP1,
             &v123,
             (INIClass *)&g_INI_Key_Header,
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
    (uint8_t ***)aP1,
    (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
    (uint8_t *)&stru_830620.q579C[33760],
    &this->Items,
    &this->Items,
    260);
  INIClass::GetString(
    (uint8_t ***)aP1,
    (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
    (uint8_t *)&stru_830620.q579C[33744],
    (INIClass *)this->u8_684),
    (INIClass *)this->u8_684),
    260);
  this->intro = INIClass::GetBool(
                               (uint8_t ***)aP1,
                               (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
                               (uint8_t *)&g_INI_Key_Intro,
                               this->intro);
  this->brief = INIClass::GetBool(
                               (uint8_t ***)aP1,
                               (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
                               (uint8_t *)&g_INI_Key_Brief,
                               this->brief);
  this->win = INIClass::GetBool(
                               (uint8_t ***)aP1,
                               (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
                               (uint8_t *)&DataGlobal_83E188,
                               this->win);
  this->lose = INIClass::GetBool(
                               (uint8_t ***)aP1,
                               (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
                               (uint8_t *)&g_INI_Key_Lose,
                               this->lose);
  this->action = INIClass::GetBool(
                               (uint8_t ***)aP1,
                               (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
                               (uint8_t *)&stru_817244.INIClass_field_2C,
                               this->action);
  this->postScore = INIClass::GetBool(
                               (uint8_t ***)aP1,
                               (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
                               (uint8_t *)&stru_830620.q579C[33720],
                               this->postScore);
  this->preMapSelect = INIClass::GetBool(
                               (uint8_t ***)aP1,
                               (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
                               (uint8_t *)&stru_830620.q579C[33704],
                               this->preMapSelect);
  this->multiplayerOnly = INIClass::ReadBool_Overwrite(
                               (int)aP1,
                               (uint8_t *)&g_INI_Key_Lighting.sectionHead[1],
                               (CCINIClass *)&stru_830620.q579C[33688],
                               this->multiplayerOnly);
  this->timerInherit = INIClass::ReadBool_Overwrite(
                               (int)aP1,
                               (uint8_t *)&g_INI_Key_Lighting.sectionHead[1],
                               (CCINIClass *)&stru_830620.q579C[33672],
                               this->timerInherit);
  this->endOfGame = INIClass::ReadBool_Overwrite(
                               (int)aP1,
                               (uint8_t *)&g_INI_Key_Lighting.sectionHead[1],
                               (CCINIClass *)&stru_830620.q579C[33660],
                               this->endOfGame);
  BuildingTypeByName = Scenario::FindBuildingTypeByName(
                         (uint8_t ***)aP1,
                         (uint8_t *)&g_INI_Key_Lighting.sectionHead[1],
                         (uint8_t *)g_INI_Key_Theme,
                         *(CCINIClass **)this->u8_B600));
  aP3[1] = 0;
  aP3[0] = (INIClass *)&stru_830620.q579C[33644];
  v117 = (INIClass *)&g_INI_Key_Lighting.sectionHead[1];
  this->themeIndex = BuildingTypeByName;
  *(unsigned int *)&g_abs_A8D63C = INIClass::ReadInt_Overwrite(
                                                   (int)aP1,
                                                   (uint8_t *)v117,
                                                   aP3->q000,
                                                   aP3[1]);
  v10 = *(INIClass **)this->u8_B608);
  aP3[1] = *(INIClass **)this->u8_B642);
  Double_Overwrite = INIClass::ReadDouble_Overwrite(
                       (int)aP1,
                       (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
                       (uint8_t *)&stru_830620.q579C[33628],
                       v10);
  *(double *)this->u8_B608) = Double_Overwrite;
  if ( Double_Overwrite >= 1.0 )
    Double_Overwrite = 1.0;
  *(double *)this->u8_B608) = Double_Overwrite;
  this->carryOverCap = INIClass::ReadInt_Overwrite(
                               (int)aP1,
                               (uint8_t *)&g_INI_Key_Lighting.sectionHead[1],
                               (CCINIClass *)&stru_830620.q579C[33612],
                               *(INIClass **)this->u8_B646));
  this->skipScore = INIClass::ReadBool_Overwrite(
                               (int)aP1,
                               (uint8_t *)&g_INI_Key_Lighting.sectionHead[1],
                               (CCINIClass *)&stru_830620.q579C[33600],
                               this->skipScore);
  this->oneTimeOnly = INIClass::ReadBool_Overwrite(
                               (int)aP1,
                               (uint8_t *)&g_INI_Key_Lighting.sectionHead[1],
                               (CCINIClass *)&stru_830620.q579C[33588],
                               this->oneTimeOnly);
  this->skipMapSelect = INIClass::ReadBool_Overwrite(
                               (int)aP1,
                               (uint8_t *)&g_INI_Key_Lighting.sectionHead[1],
                               (CCINIClass *)&stru_830620.q579C[33572],
                               this->skipMapSelect);
  this->truckCrate = INIClass::ReadBool_Overwrite(
                               (int)aP1,
                               (uint8_t *)&g_INI_Key_Lighting.sectionHead[1],
                               (CCINIClass *)&stru_830620.q579C[33560],
                               this->truckCrate);
  this->trainCrate = INIClass::ReadBool_Overwrite(
                               (int)aP1,
                               (uint8_t *)&g_INI_Key_Lighting.sectionHead[1],
                               (CCINIClass *)&stru_830620.q579C[33548],
                               this->trainCrate);
  this->fillSilos = INIClass::ReadBool_Overwrite(
                               (int)aP1,
                               (uint8_t *)&g_INI_Key_Lighting.sectionHead[1],
                               (CCINIClass *)&stru_830620.q579C[33536],
                               this->fillSilos);
  this->ignoreGlobalAiTriggers = INIClass::ReadBool_Overwrite(
                               (int)aP1,
                               (uint8_t *)&g_INI_Key_Lighting.sectionHead[1],
                               (CCINIClass *)&stru_830620.q579C[33512],
                               this->ignoreGlobalAiTriggers);
  this->percent = INIClass::ReadInt_Overwrite(
                               (int)aP1,
                               (uint8_t *)&g_INI_Key_Lighting.sectionHead[1],
                               (CCINIClass *)&stru_830620.q579C[33504],
                               *(INIClass **)this->u8_B680));
  this->startingDropships = INIClass::ReadInt_Overwrite(
                                (int)aP1,
                                (uint8_t *)&g_INI_Key_Lighting.sectionHead[1],
                                (CCINIClass *)&stru_830620.q579C[33484],
                                *(INIClass **)this->u8_15200));
  var58 = 0;
  v115 = 0;
  (*((unsigned short *)&(v119))) = 1;
  v116 = &vt_VectorClass_TechnoTypeClass;
  if ( &v116 != (void ***)this->u8_15204) )
  {
    TypeList_TechnoType::ddtor((int)&v116);
    v115 = *(RandomStruct **)this->u8_15242);
    if ( v115 )
    {
      var58 = (unsigned int *)operator new(4 * (unsigned int)v115);
      if ( var58 )
      {
        v12 = 0;
        for ( (((v119) >> 8) & 0xFF) = 1; v12 < (int)v115; ++v12 )
          var58[v12] = *(unsigned int *)(this->allowableUnitsCount + 4 * v12);
      }
    }
    else
    {
      var58 = 0;
      (((v119) >> 8) & 0xFF) = 0;
    }
  }
  TechnoTypeList = (void ***)INIClass::ReadTechnoTypeList(
                               (uint8_t ***)aP1,
                               (CCINIClass *)Destination,
                               (uint8_t *)&g_INI_Key_Lighting.sectionHead[1],
                               (uint8_t *)&stru_830620.q579C[33468],
                               &vt_TypeList_TechnoTypeClass,
                               var58,
                               (int)v115,
                               v119,
                               this->dropshipUnitCounts,
                               this->dropshipCountsCount,
                               (int)aP3[1]->q000);
  v122 = TechnoTypeList;
  if ( (void ***)this->u8_15204) != TechnoTypeList )
  {
    (*(void (**)(int))&this->allowableUnits->vtable4)this->u8_15204);
    v14 = v122[2];
    this->allowableUnitMaximums = v14;
    if ( v14 )
    {
      v15 = operator new(4 * (unsigned int)v14);
      this->allowableUnitsCount = v15;
      if ( v15 )
      {
        v16 = *&this->allowableUnitMaximums;
        eax16 = 0;
        this->u32_34E1 = 1;
        if ( v16 > 0 )
        {
          do
          {
            ++eax16;
            *(unsigned int *)(this->allowableUnitsCount + 4 * eax16 - 4) = v122[1][eax16 - 1];
          }
          while ( eax16 < this->allowableUnitMaximums );
        }
      }
    }
    else
    {
      this->allowableUnitsCount = 0;
      this->u32_34E1 = 0;
    }
    TechnoTypeList = v122;
  }
  this->dropshipUnitCounts = TechnoTypeList[4];
  this->dropshipCountsCount = TechnoTypeList[5];
  v18 = TechnoTypeList[6];
  v17 = (CCINIClass *)Block;
  this->ambientOriginal = v18;
  *(unsigned int *)Destination = &vt_VectorClass_TechnoTypeClass;
  if ( v17 && v127 )
    RA2_OPDEL(v17);
  v20 = (void ***)this->u8_152C2);
  v21 = &v116;
  v122 = &v116;
  var58 = 0;
  v115 = 0;
  (*((unsigned short *)&(v119))) = 1;
  v116 = &vt_VectorClass_int;
  if ( &v116 != (void ***)this->u8_152C2) )
  {
    VectorClass::Destroy((int)&v116);
    v22 = *(void ***)this->u8_15300);
    v122 = v122;
    v122[2] = v22;
    if ( v22 )
    {
      v24 = operator new(4 * (unsigned int)v22);
      v122 = v122;
      v122[1] = (void **)v24;
      if ( v24 )
      {
        v26 = (int)v122[2];
        v27 = 0;
        *((unsigned char *)v122 + 13) = 1;
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
      v122[1] = 0;
      *((unsigned char *)v122 + 13) = 0;
    }
    v21 = v122;
  }
  v21[4] = *(void ***)this->u8_15308);
  v21[5] = *(void ***)this->u8_15342);
  *v21 = &vt_TypeList_int;
  IntList = (void ***)INIClass::ReadIntList(
                        (uint8_t ***)aP1,
                        (int)Destination,
                        (INIClass *)&g_INI_Key_Lighting.sectionHead[1],
                        (uint8_t *)&stru_830620.q579C[33444],
                        v116,
                        var58,
                        (int)v115,
                        v119,
                        (int)v117,
                        (int)aP3[0]->q000,
                        (int)aP3[1]->q000);
  v122 = IntList;
  if ( v20 != IntList )
  {
    ((void (*)(int))(*v20)[3])this->u8_152C2);
    v29 = v122[2];
    this->red = v29;
    if ( v29 )
    {
      v30 = operator new(4 * (unsigned int)v29);
      this->ambientTarget = v30;
      if ( v30 )
      {
        v31 = this->red;
        eax35 = 0;
        this->u32_34FD = 1;
        if ( v31 > 0 )
        {
          do
          {
            ++eax35;
            *(unsigned int *)(this->ambientTarget + 4 * eax35 - 4) = v122[1][eax35 - 1];
          }
          while ( eax35 < this->red );
        }
      }
    }
    else
    {
      this->ambientTarget = 0;
      this->u32_34FD = 0;
    }
    IntList = v122;
  }
  this->blue = IntList[4];
  this->ground = IntList[5];
  v33 = IntList[6];
  v32 = (CCINIClass *)Block;
  this->level = v33;
  *(unsigned int *)Destination = &vt_VectorClass_int;
  if ( v32 && v127 )
    RA2_OPDEL(v32);
  this->storedTiberium_growth_enabled = INIClass::ReadBool_Overwrite(
                               (int)aP1,
                               (uint8_t *)&g_INI_Key_Lighting.sectionHead[1],
                               (CCINIClass *)&stru_830620.q579C[33420],
                               this->storedTiberium_growth_enabled);
  Bool_Overwrite = INIClass::ReadBool_Overwrite(
                     (int)aP1,
                     (uint8_t *)&g_INI_Key_Lighting.sectionHead[1],
                     (CCINIClass *)&stru_830620.q579C[33400],
                     this->veinGrowthEnabled);
  (aP3[1]) = ((aP3[1]) & ~0xFF) | ((unsigned int)(this->iceGrowthEnabled) & 0xFF);
  aP3[0] = (INIClass *)&stru_830620.q579C[33380];
  v117 = (INIClass *)&g_INI_Key_Lighting.sectionHead[1];
  this->veinGrowthEnabled = Bool_Overwrite;
  this->iceGrowthEnabled = INIClass::ReadBool_Overwrite(
                               (int)aP1,
                               (uint8_t *)v117,
                               aP3->q000,
                               (char)aP3[1]);
  v36 = INIClass::ReadBool_Overwrite(
          (int)aP1,
          (uint8_t *)&g_INI_Key_Lighting.sectionHead[1],
          (CCINIClass *)&stru_830620.q579C[33352],
          this->storedTiberium_death_to_visceroid);
  v37 = this->freeRadar;
  this->storedTiberium_death_to_visceroid = v36;
  v38 = INIClass::ReadBool_Overwrite(
          (int)aP1,
          (uint8_t *)&g_INI_Key_Lighting.sectionHead[1],
          (CCINIClass *)&stru_830620.q579C[33340],
          v37);
  aP3[1] = *(INIClass **)this->u8_D04);
  aP3[0] = (INIClass *)&stru_830620.q579C[33328];
  v117 = (INIClass *)&g_INI_Key_Lighting.sectionHead[1];
  this->freeRadar = v38;
  this->altHomeCell = INIClass::ReadInt_Overwrite((int)aP1, (uint8_t *)v117, aP3->q000, aP3[1]);
  Int_Overwrite = INIClass::ReadInt_Overwrite(
                    (int)aP1,
                    (uint8_t *)&g_INI_Key_Lighting.sectionHead[1],
                    (CCINIClass *)&stru_830620.q579C[33316],
                    *(INIClass **)this->u8_D08));
  (aP3[1]) = ((aP3[1]) & ~0xFF) | ((unsigned int)(0) & 0xFF);
  aP3[0] = (INIClass *)&stru_830620.q579C[33308];
  v117 = (INIClass *)&g_INI_Key_Lighting.sectionHead[1];
  this->uniqueId = Int_Overwrite;
  INIClass::ReadBool_Overwrite((int)aP1, (uint8_t *)v117, aP3->q000, (char)aP3[1]);
  v40 = this->dropshipUnitCounts - this->blue;
  v122 = 0;
  if ( v40 > 0 )
  {
    do
    {
      v41 = this->red;
      if ( this->blue < v41
        || (this->u32_34FD || !v41)
        && (v42 = this->ground, v42 > 0)
        && ((uint8_t (*)(int, int, unsigned int))(*v20)[2])this->ambientCurrent, v41 + v42, 0) )
      {
        v43 = this->blue;
        v44 = this->ambientTarget;
        this->blue = v43 + 1;
        *(unsigned int *)(v44 + 4 * v43) = -1;
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
        || (this->u32_3519 || !v47)
        && (v48 = this->ionLevel, v48 > 0)
        && (*(uint8_t (**)(int, int, unsigned int))&this->ionAmbient->Capacity)this->ionAmbient,
             v47 + v48,
             0) )
      {
        v49 = this->ionGround;
        v50 = this->ionRed;
        this->ionGround = v49 + 1;
        *(unsigned int *)(v50 + 4 * v49) = 0;
      }
      v51 = this->blue;
      v122 = (void ***)((char *)v122 + 1);
    }
    while ( (int)v122 < v51 );
  }
  ScenarioClass::ReadLocalVariables(aP1);
  Event::Dispatch();
  TimeString = INIClass::ReadTimeString(
                 (int)aP1,
                 (uint8_t *)&g_INI_Key_Ranking,
                 (uint8_t *)&stru_830620.q579C[33296],
                 *(CCINIClass **)this->u8_15742));
  v53 = *(CCINIClass **)this->u8_15746);
  this->parTimeEasy = TimeString;
  v54 = INIClass::ReadTimeString(
          (int)aP1,
          (uint8_t *)&g_INI_Key_Ranking,
          (uint8_t *)&stru_830620.q579C[33272],
          v53);
  aP3[1] = *(INIClass **)this->u8_15780);
  aP3[0] = (INIClass *)&stru_830620.q579C[33260];
  v117 = (INIClass *)&g_INI_Key_Ranking;
  this->parTimeMedium = v54;
  this->parTimeDifficult = INIClass::ReadTimeString(
                                (int)aP1,
                                (uint8_t *)v117,
                                aP3->q000,
                                aP3->u32_4);
  INIClass::GetString(
    (uint8_t ***)aP1,
    (INIClass *)&g_INI_Key_Ranking,
    (uint8_t *)&stru_830620.q579C[33224],
    (INIClass *)&stru_830620.q579C[33240],
    (INIClass *)this->u8_15784),
    31);
  INIClass::GetString(
    (uint8_t ***)aP1,
    (INIClass *)&g_INI_Key_Ranking,
    (uint8_t *)&stru_830620.q579C[33184],
    (INIClass *)&stru_830620.q579C[33200],
    (INIClass *)this->u8_15845),
    31);
  INIClass::GetString(
    (uint8_t ***)aP1,
    (INIClass *)&g_INI_Key_Ranking,
    (uint8_t *)&stru_830620.q579C[33148],
    (INIClass *)&stru_830620.q579C[33164],
    (INIClass *)this->u8_15906),
    31);
  INIClass::GetString(
    (uint8_t ***)aP1,
    (INIClass *)&g_INI_Key_Ranking,
    (uint8_t *)&stru_830620.q579C[33108],
    (INIClass *)&stru_830620.q579C[33124],
    (INIClass *)this->u8_159C7),
    31);
  *(double *)aP3 = (double)this->nukeRed * 0.01;
  v55 = INIClass::ReadDouble_Overwrite(
          (int)aP1,
          (INIClass *)&g_INI_Key_Lighting,
          (uint8_t *)&g_INI_Key_Lighting.headNode[2],
          aP3[0]);
  v56 = Math::RoundToInt(v55 * 100.0 + 0.01);
  v57 = (double)this->nukeGround;
  this->nukeRed = v56;
  this->nukeGreen = v56;
  this->nukeBlue = v56;
  *(double *)aP3 = v57 * 0.01;
  v58 = INIClass::ReadDouble_Overwrite(
          (int)aP1,
          (INIClass *)&g_INI_Key_Lighting,
          (uint8_t *)g_abs_820538,
          aP3[0]);
  v59 = Math::RoundToInt(v58 * 100.0 + 0.01);
  v60 = (double)this->nukeLevel;
  this->nukeGround = v59;
  *(double *)aP3 = v60 * 0.01;
  v61 = INIClass::ReadDouble_Overwrite(
          (int)aP1,
          (INIClass *)&g_INI_Key_Lighting,
          (uint8_t *)g_abs_82053C,
          aP3[0]);
  v62 = Math::RoundToInt(v61 * 100.0 + 0.01);
  v63 = (double)this->nukeAmbientChangeRate;
  this->nukeLevel = v62;
  *(double *)aP3 = v63 * 0.01;
  v64 = INIClass::ReadDouble_Overwrite(
          (int)aP1,
          (INIClass *)&g_INI_Key_Lighting,
          (uint8_t *)g_INI_Key_Blue,
          aP3[0]);
  v65 = Math::RoundToInt(v64 * 100.0 + 0.01);
  v66 = (double)this->dominatorAmbient;
  this->nukeAmbientChangeRate = v65;
  *(double *)aP3 = v66 * 0.001;
  v67 = INIClass::ReadDouble_Overwrite(
          (int)aP1,
          (INIClass *)&g_INI_Key_Lighting,
          (uint8_t *)g_INI_Key_Ground,
          aP3[0]);
  v68 = Math::RoundToInt(v67 * 1000.0 + 0.01);
  v69 = (double)this->dominatorRed;
  this->dominatorAmbient = v68;
  *(double *)aP3 = v69 * 0.001;
  v70 = INIClass::ReadDouble_Overwrite((int)aP1, (INIClass *)&g_INI_Key_Lighting, (uint8_t *)&aLevel, aP3[0]);
  v71 = Math::RoundToInt(v70 * 1000.0 + 0.01);
  v72 = (double)this->dominatorGreen;
  this->dominatorRed = v71;
  *(double *)aP3 = v72 * 0.01;
  v73 = INIClass::ReadDouble_Overwrite(
          (int)aP1,
          (INIClass *)&g_INI_Key_Lighting,
          (uint8_t *)g_INI_Key_IonAmbient,
          aP3[0]);
  v74 = Math::RoundToInt(v73 * 100.0 + 0.01);
  v75 = (double)this->dominatorBlue;
  this->dominatorGreen = v74;
  *(double *)aP3 = v75 * 0.01;
  v76 = INIClass::ReadDouble_Overwrite(
          (int)aP1,
          (INIClass *)&g_INI_Key_Lighting,
          (uint8_t *)g_INI_Key_IonRed,
          aP3[0]);
  v77 = Math::RoundToInt(v76 * 100.0 + 0.01);
  v78 = (double)this->dominatorGround;
  this->dominatorBlue = v77;
  *(double *)aP3 = v78 * 0.01;
  v79 = INIClass::ReadDouble_Overwrite(
          (int)aP1,
          (INIClass *)&g_INI_Key_Lighting,
          (uint8_t *)g_INI_Key_IonGreen,
          aP3[0]);
  v80 = Math::RoundToInt(v79 * 100.0 + 0.01);
  v81 = (double)this->dominatorLevel;
  this->dominatorGround = v80;
  *(double *)aP3 = v81 * 0.01;
  v82 = INIClass::ReadDouble_Overwrite(
          (int)aP1,
          (INIClass *)&g_INI_Key_Lighting,
          (uint8_t *)g_INI_Key_IonBlue,
          aP3[0]);
  v83 = Math::RoundToInt(v82 * 100.0 + 0.01);
  v84 = (double)this->dominatorAmbientChangeRate;
  this->dominatorLevel = v83;
  *(double *)aP3 = v84 * 0.001;
  v85 = INIClass::ReadDouble_Overwrite(
          (int)aP1,
          (INIClass *)&g_INI_Key_Lighting,
          (uint8_t *)g_INI_Key_IonGround,
          aP3[0]);
  v86 = Math::RoundToInt(v85 * 1000.0 + 0.01);
  v87 = (double)this->unknown3598;
  this->dominatorAmbientChangeRate = v86;
  *(double *)aP3 = v87 * 0.001;
  v88 = INIClass::ReadDouble_Overwrite(
          (int)aP1,
          (INIClass *)&g_INI_Key_Lighting,
          (uint8_t *)g_INI_Key_IonLevel,
          aP3[0]);
  v89 = Math::RoundToInt(v88 * 1000.0 + 0.01);
  v90 = (double)this->q3578;
  this->unknown3598 = v89;
  *(double *)aP3 = v90;
  v91 = INIClass::ReadDouble_Overwrite(
          (int)aP1,
          (INIClass *)&g_INI_Key_Lighting,
          (uint8_t *)&stru_830620.q579C[33084],
          (INIClass *)(*((unsigned int *)&(v90))));
  v92 = Math::RoundToInt(v91);
  v93 = (double)this->u32_357C;
  *&this->q3578 = v92;
  *(double *)aP3 = v93 * 0.01;
  v94 = INIClass::ReadDouble_Overwrite(
          (int)aP1,
          (INIClass *)&g_INI_Key_Lighting,
          (uint8_t *)&stru_830620.q579C[33064],
          aP3[0]);
  v95 = Math::RoundToInt(v94 * 100.0 + 0.01);
  v96 = (double)this->u32_3580;
  *&this->u32_357C = v95;
  *(double *)aP3 = v96 * 0.01;
  v97 = INIClass::ReadDouble_Overwrite(
          (int)aP1,
          (INIClass *)&g_INI_Key_Lighting,
          (uint8_t *)&stru_830620.q579C[33048],
          aP3[0]);
  v98 = Math::RoundToInt(v97 * 100.0 + 0.01);
  v99 = (double)this->u32_3584;
  *&this->u32_3580 = v98;
  *(double *)aP3 = v99 * 0.01;
  v100 = INIClass::ReadDouble_Overwrite(
           (int)aP1,
           (INIClass *)&g_INI_Key_Lighting,
           (uint8_t *)&stru_830620.q579C[33032],
           aP3[0]);
  v101 = Math::RoundToInt(v100 * 100.0 + 0.01);
  v102 = (double)this->u32_3588;
  *&this->u32_3584 = v101;
  *(double *)aP3 = v102 * 0.01;
  v103 = INIClass::ReadDouble_Overwrite(
           (int)aP1,
           (INIClass *)&g_INI_Key_Lighting,
           (uint8_t *)&stru_830620.q579C[33016],
           aP3[0]);
  v104 = Math::RoundToInt(v103 * 100.0 + 0.01);
  v105 = (double)this->u32_358C;
  *&this->u32_3588 = v104;
  *(double *)aP3 = v105 * 0.001;
  v106 = INIClass::ReadDouble_Overwrite(
           (int)aP1,
           (INIClass *)&g_INI_Key_Lighting,
           (uint8_t *)&stru_830620.q579C[33000],
           aP3[0]);
  v107 = Math::RoundToInt(v106 * 1000.0 + 0.01);
  v108 = (double)this->u32_3590;
  *&this->u32_358C = v107;
  *(double *)aP3 = v108 * 0.001;
  v109 = INIClass::ReadDouble_Overwrite(
           (int)aP1,
           (INIClass *)&g_INI_Key_Lighting,
           (uint8_t *)&stru_830620.q579C[32984],
           aP3[0]);
  v110 = Math::RoundToInt(v109 * 1000.0 + 0.01);
  v111 = (double)this->u32_3594;
  *&this->u32_3590 = v110;
  *(double *)aP3 = v111 * 0.001;
  v112 = INIClass::ReadDouble_Overwrite(
           (int)aP1,
           (INIClass *)&g_INI_Key_Lighting,
           (uint8_t *)&stru_830620.q579C[32956],
           aP3[0]);
  v113 = Math::RoundToInt(v112 * 1000.0 + 0.01);
  aP3[1] = (INIClass *)55;
  *&this->u32_3594 = v113;
  Multiplayer::ShowProgress(&g_abs_A8B238, (int)aP3[1]->q000);
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
    HouseClass_Player = *(IUnknown **)&HouseClass_Array->q000[4 * v114];
    this->humanPlayerHouseTypeIndex = *(unsigned int *)(HouseClass_Player->relatedTagsCapacity + 184);
  }
  aP3[1] = (INIClass *)58;
  HouseClass_Player->currentPlayer = 1;
  HouseClass_Player->PlayerControl = 1;
  *&HouseClass_Player->u32_56F4 = 0;
  Multiplayer::ShowProgress(&g_abs_A8B238, (int)aP3[1]->q000);
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
  *(unsigned int *)Block->tail_0 = &vt_MSAnim; /*0x5ceb69*/
  if ( (a2 & 1) != 0 ) /*0x5ceb6f*/
    operator delete((void *)(Block)); /*0x5ceb72*/
  return Block->tail_0; /*0x5ceb7c*/
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

  (*((unsigned char *)&(result))) = 1; /*0x5d6310*/
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

  vtable0 = dword_A8B230[0].vfptr; /*0x5d6795*/
  (((unsigned char *)&(vtable0))[1]) = ((uint16_t)dword_A8B230[0].vfptr >> 8) & 0xFB; /*0x5d6797*/
  dword_A8B230[0].vfptr = vtable0; /*0x5d679a*/
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

  v2 = this->Items; /*0x5d80b6*/
  this->Items = 0; /*0x5d80b9*/
  if ( v2 && this->IsAllocated ) /*0x5d80c0*/
  {
    operator delete((void *)(v2)); /*0x5d80c6*/
    this->Items = 0; /*0x5d80ce*/
  }
  this->IsAllocated = 0; /*0x5d80d1*/
  this->Capacity = 0; /*0x5d80d4*/
}
} // namespace gamemd

// 0x6B8AE0
namespace gamemd {
unsigned int ScenarioClass::ResetIntroFlags(void *a1)
{
  unsigned int result; // eax

  result = a1->nextScenario[0] & 0xFFF80000 | 0x8088; /*0x6b8ae7*/
  a1->nextScenario[0] = result; /*0x6b8aec*/
  return result; /*0x6b8aee*/
}
} // namespace gamemd
