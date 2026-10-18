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
#include "e4/classes/FileClass_e4.hpp"
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

  void *v7; // edx
  void *v8; // esi

  void *result; // eax
  result = (void *)(dword_A8B230); /*0x58bb31*/
  if ( dword_A8B230 ) /*0x58bb38*/
  {
    dword_A8B230[122].abstractFlags = g_MissionQueueFrame.localVariables[162]; /*0x58bb45*/
    AbstractClass *v2; // ebx
    v2 = (gamemd::AbstractClass *)(dword_A8B230); /*0x58bb4b*/
    int v3 = 0; // edi /*0x58bb52*/
    if ( dword_A8B230[122].abstractFlags > 0 ) /*0x58bb5c*/
    {
      int v4 = 4416; // eax /*0x58bb60*/
      char *v5; // esi
      v5 = &g_MissionQueueFrame.waypoints[1470]; /*0x58bb6a*/
      int v6 = 4544; // ecx /*0x58bb71*/
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
    v2[122].vfptr = (void *)g_MissionQueueFrame.briefing[355]; /*0x58bbda*/
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
  unsigned int *v19; // eax
  signed int i; // ebp
  int v21; // ecx
  unsigned int v22; // eax
  unsigned __int8 *v23; // eax
  int *v24; // eax
  unsigned int *v26; // eax
  int v27; // [esp-Ch] [ebp-54h]
  unsigned __int8 *v28; // [esp-8h] [ebp-50h]
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
    v7 = Timer::GetTicks() - *(unsigned int *)(v4 + 16); /*0x5cc354*/
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
  v5->INIClass_10 = Timer::GetTicks(); /*0x5cc371*/
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
  if ( (*(unsigned int *)(v5 + 56) & 0x200) != 0 ) /*0x5cc3d3*/
  {
    *v11 += *(__int16 *)(v5->u32_1C + 2) / -2; /*0x5cc3e7*/
    v11[1] += *(__int16 *)(v5->u32_1C + 4) / -2; /*0x5cc3fc*/
  }
  (*(void (**)(MSOverlayAnim *, unsigned int *, DSurface *, unsigned int *, unsigned int, int, int))(*(unsigned int *)this->__pad_0 /*0x5cc413*/
                                                                                            + 8))(
    this,
    v11,
    DSurface_Alternate,
    v11,
    0,
    1,
    a2);
  v14 = v5->u32_40; /*0x5cc41c*/
  if ( v14 >= 3 ) /*0x5cc41e*/
    v14 = 3; /*0x5cc420*/
  v15 = *(unsigned int *)(v5 + 56) | dword_830078[v14]; /*0x5cc443*/
  v16 = *(unsigned int *)this->__pad_0; /*0x5cc445*/
  v30 = *(unsigned int *)(v5 + 4); /*0x5cc447*/
  v27 = v15; /*0x5cc452*/
  v31 = v5->q008; /*0x5cc456*/
  v17 = (int *)(*(int (**)(MSOverlayAnim *))(v16 + 120))(this); /*0x5cc45a*/
  DrawToSurfaceSHP( /*0x5cc470*/
    (int)this,
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
  v18 = v5->q044; /*0x5cc475*/
  if ( v18 ) /*0x5cc47a*/
  {
    a3 = v5; /*0x5cc47c*/
    a3 = (*(int (**)(int, int *))(*(unsigned int *)v18 + 16))(v18, &a3); /*0x5cc48a*/
    v19 = v5->q044; /*0x5cc48e*/
    for ( i = 0; i < (int)v19[4]; ++i ) /*0x5cc498*/
    {
      if ( i != a3 ) /*0x5cc49e*/
      {
        v21 = *(unsigned int *)(v19[1] + 4 * i); /*0x5cc4a5*/
        (*(void (**)(int, MSOverlayAnim *, unsigned int *))(*(unsigned int *)v21 + 20))(v21, this, v11); /*0x5cc4aa*/
      }
      v19 = v5->q044; /*0x5cc4ad*/
    }
  }
  v22 = v5->u32_40 + 1; /*0x5cc4bc*/
  v5->u32_40 = v22; /*0x5cc4be*/
  if ( v22 >= 4 ) /*0x5cc4c4*/
  {
    v23 = *(unsigned __int8 **)(v5 + 56); /*0x5cc4cf*/
    v29 = *(unsigned int *)(v5 + 4); /*0x5cc4db*/
    BYTE1(v23) |= 4u; /*0x5cc4e3*/
    v28 = v23; /*0x5cc4e7*/
    v30 = v5->q008; /*0x5cc4e8*/
    v24 = (int *)(*(int (**)(MSOverlayAnim *, int *))(*(unsigned int *)this->__pad_0 + 120))(this, &v32); /*0x5cc4f5*/
    DrawToSurfaceSHP( /*0x5cc50f*/
      (int)DSurface_Alternate,
      v5->u32_20,
      v5->u32_1C,
      v5->u32_28,
      &v29,
      v24,
      (int)v28,
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
  return v5->q048 == 0; /*0x5cc51b*/

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
  Multiplayer v5[4]; // [esp+4h] [ebp-18h] BYREF
  void *Block; // [esp+8h] [ebp-14h]

  (v5)->FindStartPositions(); /*0x5d6bec*/
  int i; // edi
  for ( i = 0; i < stru_A80220.nextArrayIndex; ++i ) /*0x5d6bfa*/
  {
    HouseClass *v2; // ecx
    v2 = (HouseClass *)*((unsigned int *)stru_A80220.vfptr3 + i); /*0x5d6c02*/
    if ( !*(unsigned char *)(v2->relatedTagsCapacity + 422) ) /*0x5d6c08*/
    {
      int startingAllies; // esi
      startingAllies = v2->startingAllies; /*0x5d6c12*/
      if ( startingAllies != -2 ) /*0x5d6c1b*/
      {
        (v2)->SetMapSeed(*((unsigned int *)Block + startingAllies)); /*0x5d6c25*/
        *(&((unsigned int *)(dword_A8B230))[124].uniqueId + startingAllies) = i; /*0x5d6c2f*/
      }
    }
  }
  /* X11: vtable install elided (X67 star-deref, RHS vt_VectorClass) */  /*0x5d6c45*/
  char v7; // [esp+11h] [ebp-Bh]
  if ( Block && v7 ) /*0x5d6c58*/
    operator delete((Block)); /*0x5d6c5b*/
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
  int Bool; // esi
  int v11; // eax
  int referenceCount; // eax
  int *p_vfptr2; // esi
  LoadScreen *v15; // [esp+0h] [ebp-FCh]
  int v16; // [esp+4h] [ebp-F8h]
  int *v17; // [esp+8h] [ebp-F4h]
  CCINIClass v19; // [esp+1Ch] [ebp-E0h] BYREF
  CCFileClass v20; // [esp+74h] [ebp-88h] BYREF
  int v21[3]; // [esp+CCh] [ebp-30h] BYREF
  int v22; // [esp+D8h] [ebp-24h]
  CHAR v23[28]; // [esp+E0h] [ebp-1Ch] BYREF

  v4 = Source; /*0x683ab8*/
  if ( (!Source || !strlen(Source)) && a4 != -1 ) /*0x683ade*/
  {
    if ( stru_A8E960.random[489] == 1 ) /*0x683ae7*/
      v4 = (char *)&unk_A83E48; /*0x683ae9*/
    else
      v4 = (char *)(*(unsigned int *)(*(int *)((char *)&stru_A83CD9.NeedsSaveOrLink + 3) + 4 * a4) + 156); /*0x683af8*/
  }
  dword_A8B230[375].uniqueId = a4; /*0x683b0a*/
  Debug::Log(); /*0x683b10*/
  Debug::Log(); /*0x683b21*/
  strcpy((char *)&dword_A8B230[130].abstractFlags, v4); /*0x683b47*/
  _strupr((char *)&dword_A8B230[130].abstractFlags); /*0x683b5d*/
  SetSoundWarning(-1); /*0x683b68*/
  if ( !*(unsigned int *)&dword_A8B238 ) /*0x683b73*/
  {
    uniqueId = dword_A8B230[375].uniqueId; /*0x683b7b*/
    if ( uniqueId == -1 ) /*0x683b84*/
      goto LABEL_14; /*0x683b84*/
    Field = *(unsigned int *)(*(unsigned int *)(*(int *)((char *)&stru_A83CD9.NeedsSaveOrLink + 3) + 4 * uniqueId) + 152); /*0x683b8f*/
    goto LABEL_13; /*0x683b95*/
  }
  if ( *(unsigned int *)&stru_A8B250.__pad_0[4] != -1 ) /*0x683b9f*/
  {
    v7 = *(GameOption **)(dword_A8B8CC + 4 * *(unsigned int *)&stru_A8B250.__pad_0[4]); /*0x683ba7*/
    v8 = Game::CheckForGameCD((Game *)0x3C); /*0x683baf*/
    if ( !(unsigned __int8)ScenarioClass::CheckExists((ScenarioClass *)v7, v8) ) /*0x683bb7*/
    {
      Field = GameOption::GetField(v7); /*0x683bc7*/
LABEL_13:
      SetSoundWarning(Field); /*0x683bc9*/
    }
  }
LABEL_14:
  v9 = ++*(unsigned int *)&stru_A8D804.__pad_3D[627]; /*0x683bce*/
  if ( !(unsigned __int8)vt_CD(dword_81C1D0) ) /*0x683bf6*/
  {
LABEL_21:
    if ( *(unsigned int *)&dword_A8B238 == 4 ) /*0x683d3c*/
      ChatMessageWOL(0, &g_TypeClass_DefaultString); /*0x683d45*/
    return 0; /*0x683d56*/
  }
  --*(unsigned int *)&stru_A8D804.__pad_3D[627]; /*0x683c03*/
  (*(void (**)(MouseClass *))(dword_887640->HandleClick_ph + 12))(dword_887640); /*0x683c11*/
  v19.headNode[0] = 0; /*0x683c18*/
  v19.headNode[1] = 0; /*0x683c1c*/
  GenericList::Constructor((GenericList *)&v19.headNode[2]); /*0x683c20*/
  /* X11: vtable install elided (X67 recv-slot, RHS vt_List_INIClass_INISection) */  /*0x683c29*/
  memset(&v19.needsSave_flag, 0, 13); /*0x683c32*/
  memset(&v19.unknown38, 0, 9); /*0x683c42*/
  /* X11: vtable install elided (X67 star-deref, RHS CCINIClass_Vtable) */  /*0x683c4e*/
  CCFileClass::Construct(&v20, v4); /*0x683c56*/
  if ( CCINIClass::Load(&v19, (int)&v20, 1, 0) ) /*0x683c67*/
  {
    Bool = INIClass::GetBool((INIClass *)&v19, aBasic, (unsigned __int8 *)g_INI_Key_Intro, -1); /*0x683c85*/
    if ( Bool != -1 /*0x683ca5*/
      || (Bool = INIClass::GetBool((INIClass *)&v19, aBasic, (unsigned __int8 *)g_INI_Key_Brief, -1), Bool != -1) )
    {
      Theme::Stop((Theme *)&stru_A83CD9.attachedTag + 3, 0); /*0x683cad*/
      Movie::PlayWrapper(Bool, (int)v4, v9, 1, 1, 1); /*0x683cbd*/
    }
  }
  /* X11: vtable install elided (X67 star-deref, RHS vt_CCFileClass) */  /*0x683cc9*/
  v22 = 0; /*0x683cd1*/
  Vector::Clear((int)v21); /*0x683cd8*/
  *(unsigned int *)v20.__tail_0 = &off_7E1668; /*0x683ce1*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v20); /*0x683ce9*/
  HashTable::DestroyHashTableINIClass((INIClass *)&v19); /*0x683cf2*/
  Debug::Log(); /*0x683cfd*/
  v11 = StringList::Find((StringList *)((char *)&stru_A83CD9.attachedTag + 3), aLoading); /*0x683d0f*/
  ThemeClass::Play((ThemeClass *)((char *)&stru_A83CD9.attachedTag + 3), v11); /*0x683d1a*/
  if ( !Scenario::LoadWithProgress(v4, a3) ) /*0x683d21*/
  {
    (*(void (**)(MouseClass *))(dword_887640->HandleClick_ph + 16))(dword_887640); /*0x683d32*/
    goto LABEL_21; /*0x683d32*/
  }
  referenceCount = dword_A8B230[143].referenceCount; /*0x683d5e*/
  if ( referenceCount != -1 ) /*0x683d67*/
    wsprintfA(v23, "%s.VQA", *((const char **)dword_ABF394 + referenceCount)); /*0x683d80*/
  if ( dword_A8B230[375].abstractFlags > 0 ) /*0x683d95*/
    LoadScreen::RenderLoop(v15); /*0x683d97*/
  if ( a2 ) /*0x683da0*/
    Movie::PlayWrapper(dword_A8B230[144].vfptr1, (int)v4, v9, 1, 1, 1); /*0x683db6*/
  if ( qword_886FB8 != *(unsigned long long *)&stru_A8E960.random[16] ) /*0x683dce*/
  {
    Debug::Log(); /*0x683ddf*/
    ChangeVideoMode(*(unsigned int *)&stru_A8E960.random[16], *(unsigned int *)&stru_A8E960.random[20]); /*0x683df3*/
  }
  LoadingScreen::FreeResources3(); /*0x683df8*/
  AudioOptionsClass::ApplySettings((AudioOptionsClass *)&stru_A8E960.altNextScenario[252]); /*0x683e02*/
  (*(void (**)(ObjectClass *, unsigned int))(g_DSurface_Hidden->vfptr + 24))(g_DSurface_Hidden, 0); /*0x683e10*/
  Frame::Present((int)g_DSurface_Hidden, 0, (int)v4, v9, 0, (int)v15, v16, v17); /*0x683e1c*/
  if ( dword_A8B230[43].vfptr2 == -1 ) /*0x683e35*/
  {
    p_vfptr2 = &dword_A8B230[43].vfptr2; /*0x683e26*/
    *p_vfptr2 = Timer::GetTicks(); /*0x683e3f*/
  }
  if ( dword_A8B230[202].vfptr2 == -1 ) /*0x683e50*/
    Theme::Stop((Theme *)&stru_A83CD9.attachedTag + 3, 1); /*0x683e66*/
  else
    Theme::QueueSong((int)&stru_A83CD9.attachedTag + 3, dword_A8B230[202].vfptr2); /*0x683e58*/
  DisableIME(); /*0x683e6b*/
  stru_A8E960.random[488] = 1; /*0x683e75*/
  byte_A8E378 = 1; /*0x683e7f*/
  if ( *(unsigned int *)&dword_A8B238 == 4 ) /*0x683e86*/
    ChatMessageWOL(0, &g_TypeClass_DefaultString); /*0x683e8f*/
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
  EndBufferMixer((int *)g_MixerState, 0x4000); /*0x683ed1*/
  if ( !*(unsigned int *)&dword_A8B238 || *(unsigned int *)&dword_A8B238 == 5 ) /*0x683ee2*/
  {
    if ( dword_A8B230[43].vfptr2 != (void *)-1 ) /*0x683eff*/
      Timer::GetTicks(); /*0x683f04*/
    Debug::Log(); /*0x683f13*/
    v1 = (AsyncIO *)dword_A8B230; /*0x683f18*/
    p_vtable2 = &dword_A8B230[43].vfptr2; /*0x683f27*/
    if ( dword_A8B230[43].vfptr2 != (void *)-1 ) /*0x683f31*/
    {
      Ticks = Timer::GetTicks(); /*0x683f36*/
      v4 = (char *)p_vtable2[2]; /*0x683f3d*/
      v5 = Ticks - (unsigned int)*p_vtable2; /*0x683f40*/
      *p_vtable2 = (void *)-1; /*0x683f42*/
      v1 = (AsyncIO *)&v4[v5]; /*0x683f48*/
      p_vtable2[2] = v1; /*0x683f4a*/
    }
  }
  LOBYTE(v1) = 1; /*0x683f4d*/
  AsyncIO::Read(v1); /*0x683f4f*/
  if ( *(unsigned int *)&g_TacticalRender ) /*0x683f5d*/
    Tooltip::Enable(*(Tooltip **)&g_TacticalRender, 0); /*0x683f61*/
  Mouse::ReleaseCapture((ScrollClass *)&DataGlobal_87F7E8); /*0x683f6b*/
  Mouse::SetCursor((int)&DataGlobal_87F7E8, 0, 0); /*0x683f79*/
  (*(void (**)(void *))(*(unsigned int *)stru_887598.lineTrailer + 12))(stru_887598.lineTrailer); /*0x683f86*/
  MapClass::MarkForRedraw((GScreenClass *)&DataGlobal_87F7E8, 2); /*0x683f90*/
  TacticalMap::Redraw((GScreenClass *)&DataGlobal_87F7E8); /*0x683f9a*/
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
  int *p_abstractFlags; // edx
  char *v5; // edi
  unsigned int v6; // kr04_4
  char *v7; // edi
  char *v8; // esi
  unsigned int v9; // ecx
  char Map; // bl
  CCINIClass v11; // [esp+10h] [ebp-C4h] BYREF
  CCFileClass v12; // [esp+68h] [ebp-6Ch] BYREF
  int v13[3]; // [esp+C0h] [ebp-14h] BYREF
  int v14; // [esp+CCh] [ebp-8h]

  result = vt_CD(dword_81C1D0); /*0x68674c*/
  if ( result ) /*0x686754*/
  {
    *(unsigned int *)&stru_A8E960.random[528] = 0; /*0x686765*/
    v11.headNode[0] = 0; /*0x68676b*/
    v11.headNode[1] = 0; /*0x68676f*/
    GenericList::Constructor((GenericList *)&v11.headNode[2]); /*0x686773*/
    /* X11: vtable install elided (X67 recv-slot, RHS vt_List_INIClass_INISection) */  /*0x68677c*/
    Node::Init((MixFileClass *)&v11.needsSave_flag); /*0x686784*/
    v11.INIClass_field_3C = 0; /*0x68678d*/
    v11.ownsFile[0] = 0; /*0x686792*/
    /* X11: vtable install elided (X67 star-deref, RHS CCINIClass_Vtable) */  /*0x686797*/
    CCFileClass::Construct(&v12, Source); /*0x68679f*/
    Debug::Log(); /*0x6867aa*/
    if ( CCINIClass::Load(&v11, (int)&v12, 1, 0) ) /*0x6867be*/
    {
      p_abstractFlags = &dword_A8B230[130].abstractFlags; /*0x68681f*/
      v6 = strlen(Source) + 1; /*0x686825*/
      v5 = &Source[v6]; /*0x686825*/
      qmemcpy(&dword_A8B230[130].abstractFlags, &v5[-v6], 4 * (v6 >> 2)); /*0x686836*/
      v8 = &v5[4 * (v6 >> 2) - v6]; /*0x686836*/
      v7 = (char *)&p_abstractFlags[v6 >> 2]; /*0x686836*/
      v9 = v6 & 3; /*0x68683c*/
      qmemcpy(v7, v8, v9); /*0x68683f*/
      Map = ScenarioClass::LoadMap(0, (INIClass *)&v11, a2, (ObjectClass *)&v7[v9]); /*0x686851*/
      /* X11: vtable install elided (X67 star-deref, RHS vt_CCFileClass) */  /*0x686853*/
      v14 = 0; /*0x68685b*/
      Vector::Clear((int)v13); /*0x686862*/
      *(unsigned int *)v12.__tail_0 = &off_7E1668; /*0x68686b*/
      BufferIOFileClass::Dtor((BufferIOFileClass *)&v12); /*0x686873*/
      HashTable::DestroyHashTableINIClass((INIClass *)&v11); /*0x68687c*/
      return Map; /*0x686881*/
    }
    else
    {
      Debug::Log(); /*0x6867cc*/
      /* X11: vtable install elided (X67 star-deref, RHS vt_CCFileClass) */  /*0x6867db*/
      v14 = 0; /*0x6867e3*/
      Vector::Clear((int)v13); /*0x6867ea*/
      *(unsigned int *)v12.__tail_0 = &off_7E1668; /*0x6867f3*/
      BufferIOFileClass::Dtor((BufferIOFileClass *)&v12); /*0x6867fb*/
      HashTable::DestroyHashTableINIClass((INIClass *)&v11); /*0x686804*/
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
      (((v6) >> 8) & 0xFF) = (g_ScenarioClass_Instance->u32_1) & 0xEF;
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
      (((v4) >> 8) & 0xFF) = (g_ScenarioClass_Instance->u32_1) & 0xEF;
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
        (g_ScenarioClass_Instance->Name) = 0;
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
            StringCSF = GetStringCSF( (char *)g_ScenarioClass_Instance->briefingCsf, 0, (const char *)(&stru_830620[53784]), 3167);
            wcsncpy( (wchar_t *)g_ScenarioClass_Instance->briefing, (const wchar_t *)(StringCSF), 0x400u);
            (*(g_ScenarioClass_Instance->Name + 1)) = 0;
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
            v13 = GetStringCSF( (char *)g_ScenarioClass_Instance->uiName, 0, (const char *)(&stru_830620[53784]), 3179);
            wcsncpy( (wchar_t *)g_ScenarioClass_Instance->name, (const wchar_t *)(v13), 0x2Du);
            *&g_ScenarioClass_Instance->u16_3250 = 0;
            sprintf((char *const)Buffer,(const char *const)(&stru_830620[54828]), g_ScenarioClass_Instance->uiName);
            v14 = GetStringCSF( (char *)(Buffer), 0, (const char *)(&stru_830620[53784]), 3183);
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
        (g_ScenarioClass_Instance->ls640BkgdName) = 0;
        if ( (void *)&stru_830620 == (IUnknown *)-54696 )
          int v21 = INIClass::BinarySearchSection( (INIClass *)((int)var158), (INIClass *)g_ScenarioClass_Instance->fileName);
        else
          v21 = HashTableSection::FindSection(
                  (uint8_t *)var158,
                  (uint8_t *)g_ScenarioClass_Instance->fileName,
                  (CCINIClass *)&stru_830620[54696]);
        if ( v21 )
          ((INIClass*)var158)->GetString((INIClass *)g_ScenarioClass_Instance->fileName, (uint8_t *)&stru_830620[54696], (INIClass *)&DataGlobal_87F8E4[42624], (INIClass *)g_ScenarioClass_Instance->ls640BkgdName, 64);
        (g_ScenarioClass_Instance->ls800BkgdName) = 0;
        if ( (void *)&stru_830620 == (IUnknown *)-54680 )
          int v22 = INIClass::BinarySearchSection( (INIClass *)((int)var158), (INIClass *)g_ScenarioClass_Instance->fileName);
        else
          v22 = HashTableSection::FindSection(
                  (uint8_t *)var158,
                  (uint8_t *)g_ScenarioClass_Instance->fileName,
                  (CCINIClass *)&stru_830620[54680]);
        if ( v22 )
          ((INIClass*)var158)->GetString((INIClass *)g_ScenarioClass_Instance->fileName, (uint8_t *)&stru_830620[54680], (INIClass *)&DataGlobal_87F8E4[42624], (INIClass *)g_ScenarioClass_Instance->ls800BkgdName, 64);
        (g_ScenarioClass_Instance->ls800BkgdPal) = 0;
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
    /* X11: vtable install elided (X67 star-deref, RHS vt_CCFileClass) */
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
      /* X11: vtable install elided (X67 star-deref, RHS vt_CCFileClass) */
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
  /* X11: vtable install elided (X67 star-deref, RHS vt_CCFileClass) */
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
  int v41; // ecx
  int v42; // ecx
  int v43; // eax
  int v44; // eax
  int v45; // edx
  int v46; // ecx
  int v47; // eax
  int v48; // ecx
  int v49; // eax
  int v50; // eax
  int v51; // edx
  int v52; // ecx
  int TimeString; // eax
  int v54; // ecx
  int v55; // eax
  int v56; // eax
  int v57; // eax
  int v58; // eax
  int v59; // eax
  int v60; // eax
  int v61; // eax
  int v62; // eax
  int v63; // eax
  int v64; // eax
  int v65; // eax
  int v66; // eax
  int v67; // eax
  int v68; // eax
  int v69; // eax
  int v70; // eax
  int v71; // eax
  int v72; // eax
  int v73; // eax
  int v74; // eax
  int v75; // eax
  int v76; // eax
  _VectorClass_PAVTechnoTypeClass v78; // [esp-4h] [ebp-5Ch] BYREF
  double v79; // [esp+10h] [ebp-48h]
  ObjectClass *v80; // [esp+18h] [ebp-40h]
  _VectorClass_PAVTechnoTypeClass *m_1; // [esp+24h] [ebp-34h]
  char v82[8]; // [esp+28h] [ebp-30h] BYREF
  char Buffer[12]; // [esp+30h] [ebp-28h] BYREF
  char Destination[4]; // [esp+3Ch] [ebp-1Ch] BYREF
  void *Block; // [esp+40h] [ebp-18h]
  char v86; // [esp+49h] [ebp-Fh]

  _ESI = a1; /*0x689e9f*/
  INIClass::ResetSection((INIClass *)a3); /*0x689ea3*/
  GameMode::ReadFlagsFromINI((GameMode *)_ESI, a3); /*0x689eab*/
  _ESI->startX = INIClass::ReadInt_Overwrite( /*0x689ec8*/
                               (bool *)a3,
                               g_INI_Key_Header,
                               (unsigned __int8 *)g_INI_Key_StartX,
                               _ESI->startX);
  _ESI->startY = INIClass::ReadInt_Overwrite( /*0x689ee6*/
                               (bool *)a3,
                               g_INI_Key_Header,
                               (unsigned __int8 *)g_INI_Key_StartY,
                               _ESI->startY);
  _ESI->width = INIClass::ReadInt_Overwrite( /*0x689f04*/
                               (bool *)a3,
                               g_INI_Key_Header,
                               (unsigned __int8 *)aWidth,
                               _ESI->width);
  _ESI->height = INIClass::ReadInt_Overwrite( /*0x689f22*/
                               (bool *)a3,
                               g_INI_Key_Header,
                               (unsigned __int8 *)g_INI_Key_Height,
                               _ESI->height);
  _ESI->numberStartingPoints = INIClass::ReadInt_Overwrite( /*0x689f40*/
                               (bool *)a3,
                               g_INI_Key_Header,
                               (unsigned __int8 *)g_INI_Key_NumberStartingPoints,
                               _ESI->numberStartingPoints);
  _ESI->numCoopHumanStartSpots = INIClass::ReadInt_Overwrite( /*0x689f5e*/
                               (bool *)a3,
                               g_INI_Key_Header,
                               (unsigned __int8 *)g_INI_Key_NumCoopHumanStartSpots,
                               _ESI->numCoopHumanStartSpots);
  v4 = 0; /*0x689f6a*/
  if ( _ESI->numberStartingPoints > 0 ) /*0x689f6e*/
  {
    v5 = &_ESI->startingPoints; /*0x689f70*/
    do /*0x689fbe*/
    {
      m_1 = (_VectorClass_PAVTechnoTypeClass *)v4->m_1; /*0x689f77*/
      sprintf(Buffer, "Waypoint%d", v4->m_1); /*0x689f86*/
      Point2D_Overwrite = INIClass::ReadPoint2D_Overwrite((INIClass *)a3, (int *)v82, g_INI_Key_Header, (int)Buffer, v5); /*0x689fa0*/
      v7 = *Point2D_Overwrite; /*0x689fa5*/
      v8 = Point2D_Overwrite[1]; /*0x689fa7*/
      *v5 = v7; /*0x689faa*/
      v5[1] = v8; /*0x689fac*/
      v4 = m_1; /*0x689faf*/
      v5 += 2; /*0x689fb9*/
    }
    while ( (int)m_1 < _ESI->numberStartingPoints ); /*0x689fbe*/
  }
  INIClass::GetString( /*0x689fd6*/
    (INIClass *)a3,
    aBasic,
    (unsigned __int8 *)aNextscenario,
    &_ESI->Items,
    &_ESI->Items,
    260);
  INIClass::GetString( /*0x689ff4*/
    (INIClass *)a3,
    aBasic,
    (unsigned __int8 *)aAltnextscenari,
    &_ESI->q108,
    &_ESI->q108,
    260);
  _ESI->AltNextScenario = INIClass::GetBool( /*0x68a011*/
                               (INIClass *)a3,
                               aBasic,
                               (unsigned __int8 *)g_INI_Key_Intro,
                               _ESI->AltNextScenario);
  _ESI->Brief = INIClass::GetBool( /*0x68a02f*/
                               (INIClass *)a3,
                               aBasic,
                               (unsigned __int8 *)g_INI_Key_Brief,
                               _ESI->Brief);
  _ESI->win = INIClass::GetBool( /*0x68a04d*/
                               (INIClass *)a3,
                               aBasic,
                               (unsigned __int8 *)off_83E188,
                               _ESI->win);
  _ESI->Lose = INIClass::GetBool( /*0x68a06b*/
                               (INIClass *)a3,
                               aBasic,
                               (unsigned __int8 *)g_INI_Key_Lose,
                               _ESI->Lose);
  _ESI->Action = INIClass::GetBool( /*0x68a089*/
                               (INIClass *)a3,
                               aBasic,
                               (unsigned __int8 *)g_INI_Key_Action,
                               _ESI->Action);
  _ESI->PostScore = INIClass::GetBool( /*0x68a0a7*/
                               (INIClass *)a3,
                               aBasic,
                               (unsigned __int8 *)aPostscore,
                               _ESI->PostScore);
  _ESI->PreMapSelect = INIClass::GetBool( /*0x68a0c5*/
                               (INIClass *)a3,
                               aBasic,
                               (unsigned __int8 *)aPremapselect,
                               _ESI->PreMapSelect);
  _ESI->multiplayerOnly = INIClass::ReadBool_Overwrite( /*0x68a0e3*/
                               (int *)a3,
                               aBasic,
                               (unsigned __int8 *)aMultiplayeronl,
                               _ESI->multiplayerOnly);
  _ESI->timerInherit = INIClass::ReadBool_Overwrite( /*0x68a101*/
                               (int *)a3,
                               aBasic,
                               (unsigned __int8 *)aTimerinherit,
                               _ESI->timerInherit);
  _ESI->endOfGame = INIClass::ReadBool_Overwrite( /*0x68a11f*/
                               (int *)a3,
                               aBasic,
                               (unsigned __int8 *)aEndofgame,
                               _ESI->endOfGame);
  BuildingTypeByName = Scenario::FindBuildingTypeByName( /*0x68a138*/
                         (Scenario *)a3,
                         aBasic,
                         (unsigned __int8 *)g_INI_Key_Theme,
                         _ESI->themeIndex);
  HIDWORD(v79) = 0; /*0x68a13d*/
  LODWORD(v79) = aNewiniformat; /*0x68a13f*/
  *(unsigned int *)v78.__tail_10 = aBasic; /*0x68a144*/
  _ESI->themeIndex = BuildingTypeByName; /*0x68a14b*/
  *(unsigned int *)&stru_A8E960.random[520] = INIClass::ReadInt_Overwrite( /*0x68a156*/
                                          (bool *)a3,
                                          *(unsigned __int8 **)v78.__tail_10,
                                          (unsigned __int8 *)LODWORD(v79),
                                          SHIDWORD(v79));
  INIClass::ReadDouble_Overwrite((double *)a3, aBasic, (unsigned __int8 *)aCarryovermoney, _ESI->carryOverMoney); /*0x68a175*/
  __asm { fst qword ptr [esi+1C78h] } /*0x68a17a*/
  _ESI->carryOverMoney = _RT1; /*0x68a17a*/
  __asm /*0x68a180*/
  {
    fld st
    fcomp ds:dbl_7E1718
    fnstsw ax
  }
  if ( (_AX & 0x100) == 0 ) /*0x68a18d*/
  {
    __asm /*0x68a191*/
    {
      fstp st
      fld ds:dbl_7E1718
    }
  }
  __asm { fstp qword ptr [esi+1C78h] } /*0x68a199*/
  _ESI->carryOverMoney = _RT1; /*0x68a199*/
  _ESI->CarryOverCap = INIClass::ReadInt_Overwrite( /*0x68a1b7*/
                               (bool *)a3,
                               aBasic,
                               (unsigned __int8 *)aCarryovercap,
                               _ESI->CarryOverCap);
  _ESI->skipScore = INIClass::ReadBool_Overwrite( /*0x68a1d5*/
                               (int *)a3,
                               aBasic,
                               (unsigned __int8 *)aSkipscore,
                               _ESI->skipScore);
  _ESI->oneTimeOnly = INIClass::ReadBool_Overwrite( /*0x68a1f3*/
                               (int *)a3,
                               aBasic,
                               (unsigned __int8 *)aOnetimeonly,
                               _ESI->oneTimeOnly);
  _ESI->skipMapSelect = INIClass::ReadBool_Overwrite( /*0x68a211*/
                               (int *)a3,
                               aBasic,
                               (unsigned __int8 *)aSkipmapselect,
                               _ESI->skipMapSelect);
  _ESI->truckCrate = INIClass::ReadBool_Overwrite( /*0x68a22f*/
                               (int *)a3,
                               aBasic,
                               (unsigned __int8 *)aTruckcrate,
                               _ESI->truckCrate);
  _ESI->trainCrate = INIClass::ReadBool_Overwrite( /*0x68a24d*/
                               (int *)a3,
                               aBasic,
                               (unsigned __int8 *)aTraincrate,
                               _ESI->trainCrate);
  _ESI->fillSilos = INIClass::ReadBool_Overwrite( /*0x68a26b*/
                               (int *)a3,
                               aBasic,
                               (unsigned __int8 *)aFillsilos,
                               _ESI->fillSilos);
  _ESI->ignoreGlobalAiTriggers = INIClass::ReadBool_Overwrite( /*0x68a289*/
                               (int *)a3,
                               aBasic,
                               (unsigned __int8 *)aIgnoreglobalai,
                               _ESI->ignoreGlobalAiTriggers);
  _ESI->Percent = INIClass::ReadInt_Overwrite( /*0x68a2a7*/
                               (bool *)a3,
                               aBasic,
                               (unsigned __int8 *)aPercent,
                               _ESI->Percent);
  _ESI->StartingDropships = INIClass::ReadInt_Overwrite( /*0x68a2c8*/
                                (bool *)a3,
                                aBasic,
                                (unsigned __int8 *)aStartingdropsh,
                                _ESI->StartingDropships);
  *(unsigned int *)&v78.m_1[3] = 0; /*0x68a2da*/
  v78.m_8 = 0; /*0x68a2dd*/
  LOWORD(v78.m_C) = 1; /*0x68a2e0*/
  /* X11: vtable install elided (X67 star-deref, RHS vt_VectorClass_TechnoTypeClass) */  /*0x68a2e7*/
  if ( &v78 != (_VectorClass_PAVTechnoTypeClass *)(_ESI + 13524) ) /*0x68a2ed*/
  {
    TypeList_TechnoType::ddtor(&v78); /*0x68a2f1*/
    v78.m_8 = _ESI->allowableUnitMaximums; /*0x68a2ff*/
    if ( v78.m_8 ) /*0x68a302*/
    {
      *(unsigned int *)&v78.m_1[3] = __2_YAPAXI_Z(4 * v78.m_8); /*0x68a314*/
      if ( *(unsigned int *)&v78.m_1[3] ) /*0x68a319*/
      {
        v13 = 0; /*0x68a31e*/
        for ( BYTE1(v78.m_C) = 1; v13 < v78.m_8; ++v13 ) /*0x68a326*/
          *(unsigned int *)(*(unsigned int *)&v78.m_1[3] + 4 * v13) = *(unsigned int *)(_ESI->allowableUnitsCount + 4 * v13); /*0x68a334*/
      }
    }
    else
    {
      *(unsigned int *)&v78.m_1[3] = 0; /*0x68a341*/
      BYTE1(v78.m_C) = 0; /*0x68a348*/
    }
  }
  TechnoTypeList = (_VectorClass_PAVTechnoTypeClass *)INIClass::ReadTechnoTypeList( /*0x68a375*/
                                                        (INIClass *)a3,
                                                        (int)Destination,
                                                        aBasic,
                                                        (unsigned __int8 *)aAllowableunits,
                                                        &vt_TypeList_TechnoTypeClass,
                                                        *(void **)&v78.m_1[3],
                                                        v78.m_8,
                                                        v78.m_C,
                                                        _ESI->dropshipUnitCounts,
                                                        _ESI->dropshipCountsCount,
                                                        SHIDWORD(v79));
  m_1 = TechnoTypeList; /*0x68a380*/
  if ( &_ESI->allowableUnits != TechnoTypeList ) /*0x68a386*/
  {
    (*(void (**)(int))(*(unsigned int *)(_ESI + 13524) + 12))(_ESI + 13524); /*0x68a38c*/
    m_8 = m_1->m_8; /*0x68a393*/
    *(unsigned int *)(_ESI + 13532) = m_8; /*0x68a398*/
    if ( m_8 ) /*0x68a39b*/
    {
      v16 = __2_YAPAXI_Z(4 * m_8); /*0x68a3a5*/
      *(unsigned int *)(_ESI + 13528) = v16; /*0x68a3ad*/
      if ( v16 ) /*0x68a3b2*/
      {
        v17 = *(unsigned int *)(_ESI + 13532); /*0x68a3b4*/
        v18 = 0; /*0x68a3b7*/
        *(unsigned char *)(_ESI + 13537) = 1; /*0x68a3bb*/
        if ( v17 > 0 ) /*0x68a3bf*/
        {
          do /*0x68a3d9*/
          {
            ++v18; /*0x68a3c5*/
            *(unsigned int *)(*(unsigned int *)(_ESI + 13528) + 4 * v18 - 4) = *(unsigned int *)(*&m_1->u32_4 + 4 * v18 - 4); /*0x68a3d0*/
          }
          while ( v18 < *(unsigned int *)(_ESI + 13532) ); /*0x68a3d9*/
        }
      }
    }
    else
    {
      *(unsigned int *)(_ESI + 13528) = 0; /*0x68a3dd*/
      *(unsigned char *)(_ESI + 13537) = 0; /*0x68a3e4*/
    }
    TechnoTypeList = m_1; /*0x68a3e8*/
  }
  *(unsigned int *)(_ESI + 13540) = *(unsigned int *)TechnoTypeList->__tail_10; /*0x68a3ef*/
  *(unsigned int *)(_ESI + 13544) = *TechnoTypeList->u32_4.__pad_0; /*0x68a3f5*/
  v19 = *(unsigned int *)&TechnoTypeList[1].m_1[3]; /*0x68a3f8*/
  v20 = Block; /*0x68a3fb*/
  *(unsigned int *)(_ESI + 13548) = v19; /*0x68a3ff*/
  /* X11: vtable install elided (X67 star-deref, RHS vt_VectorClass_TechnoTypeClass) */  /*0x68a404*/
  if ( v20 && v86 ) /*0x68a414*/
    __3_YAXPAX_Z(v20); /*0x68a417*/
  v21 = &_ESI->ambientCurrent; /*0x68a422*/
  v22 = &v78; /*0x68a428*/
  m_1 = &v78; /*0x68a42e*/
  *(unsigned int *)&v78.m_1[3] = 0; /*0x68a432*/
  v78.m_8 = 0; /*0x68a435*/
  LOWORD(v78.m_C) = 1; /*0x68a438*/
  /* X11: vtable install elided (X67 star-deref, RHS vt_VectorClass_int) */  /*0x68a43f*/
  if ( &v78 != (_VectorClass_PAVTechnoTypeClass *)(_ESI + 13552) ) /*0x68a445*/
  {
    VectorClass::Destroy((int)&v78); /*0x68a447*/
    v23 = *(unsigned int *)(_ESI + 13560); /*0x68a44d*/
    v24 = m_1; /*0x68a450*/
    m_1->m_8 = v23; /*0x68a456*/
    if ( v23 ) /*0x68a459*/
    {
      v25 = __2_YAPAXI_Z(4 * v23); /*0x68a45f*/
      v26 = m_1; /*0x68a464*/
      *&m_1->u32_4 = v25; /*0x68a46d*/
      if ( v25 ) /*0x68a470*/
      {
        v27 = v26->m_8; /*0x68a472*/
        v28 = 0; /*0x68a475*/
        BYTE1(v26->m_C) = 1; /*0x68a479*/
        if ( v27 > 0 ) /*0x68a47d*/
        {
          do /*0x68a497*/
          {
            *(unsigned int *)(*&m_1->u32_4 + 4 * v28) = *(unsigned int *)(*(unsigned int *)(_ESI + 13556) + 4 * v28); /*0x68a48c*/
            ++v28; /*0x68a493*/
          }
          while ( v28 < m_1->m_8 ); /*0x68a497*/
        }
      }
    }
    else
    {
      *&v24->u32_4 = 0; /*0x68a49b*/
      BYTE1(v24->m_C) = 0; /*0x68a4a2*/
    }
    v22 = m_1; /*0x68a4a6*/
  }
  *(unsigned int *)v22->__tail_10 = *(unsigned int *)(_ESI + 13568); /*0x68a4b2*/
  *v22->u32_4.__pad_0 = *(unsigned int *)(_ESI + 13572); /*0x68a4b8*/
  /* X11: vtable install elided (X67 star-deref, RHS vt_TypeList_int) */  /*0x68a4bb*/
  IntList = (_VectorClass_PAVTechnoTypeClass *)INIClass::ReadIntList( /*0x68a4cd*/
                                                 (INIClass *)a3,
                                                 (int)Destination,
                                                 aBasic,
                                                 (unsigned __int8 *)aAllowableunitm,
                                                 *(void ***)v78.__pad_0,
                                                 *(void **)&v78.m_1[3],
                                                 v78.m_8,
                                                 v78.m_C,
                                                 *(int *)v78.__tail_10,
                                                 SLODWORD(v79),
                                                 SHIDWORD(v79));
  m_1 = IntList; /*0x68a4d4*/
  if ( v21 != IntList ) /*0x68a4d8*/
  {
    (*(void (**)(int))(*(unsigned int *)v21->__pad_0 + 12))(_ESI + 13552); /*0x68a4de*/
    v30 = m_1->m_8; /*0x68a4e5*/
    *(unsigned int *)(_ESI + 13560) = v30; /*0x68a4ea*/
    if ( v30 ) /*0x68a4ed*/
    {
      v31 = __2_YAPAXI_Z(4 * v30); /*0x68a4f7*/
      *(unsigned int *)(_ESI + 13556) = v31; /*0x68a4ff*/
      if ( v31 ) /*0x68a504*/
      {
        v32 = *(unsigned int *)(_ESI + 13560); /*0x68a506*/
        v33 = 0; /*0x68a509*/
        *(unsigned char *)(_ESI + 13565) = 1; /*0x68a50d*/
        if ( v32 > 0 ) /*0x68a511*/
        {
          do /*0x68a52b*/
          {
            ++v33; /*0x68a517*/
            *(unsigned int *)(*(unsigned int *)(_ESI + 13556) + 4 * v33 - 4) = *(unsigned int *)(*&m_1->u32_4 + 4 * v33 - 4); /*0x68a522*/
          }
          while ( v33 < *(unsigned int *)(_ESI + 13560) ); /*0x68a52b*/
        }
      }
    }
    else
    {
      *(unsigned int *)(_ESI + 13556) = 0; /*0x68a52f*/
      *(unsigned char *)(_ESI + 13565) = 0; /*0x68a536*/
    }
    IntList = m_1; /*0x68a53a*/
  }
  *(unsigned int *)(_ESI + 13568) = *(unsigned int *)IntList->__tail_10; /*0x68a541*/
  *(unsigned int *)(_ESI + 13572) = *IntList->u32_4.__pad_0; /*0x68a547*/
  v34 = *(unsigned int *)&IntList[1].m_1[3]; /*0x68a54a*/
  v35 = Block; /*0x68a54d*/
  *(unsigned int *)(_ESI + 13576) = v34; /*0x68a551*/
  /* X11: vtable install elided (X67 star-deref, RHS vt_VectorClass_int) */  /*0x68a556*/
  if ( v35 && v86 ) /*0x68a566*/
    __3_YAXPAX_Z(v35); /*0x68a569*/
  *(unsigned char *)(_ESI + 13478) = INIClass::ReadBool_Overwrite( /*0x68a589*/
                               (int *)a3,
                               aBasic,
                               (unsigned __int8 *)aTiberiumgrowth,
                               _ESI->storedTiberium_growth_enabled);
  Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x68a5a2*/
                     (int *)a3,
                     aBasic,
                     (unsigned __int8 *)aVeingrowthenab,
                     _ESI->veinGrowthEnabled);
  BYTE4(v79) = *(unsigned char *)(_ESI + 13480); /*0x68a5af*/
  LODWORD(v79) = aIcegrowthenabl; /*0x68a5b0*/
  *(unsigned int *)v78.__tail_10 = aBasic; /*0x68a5b5*/
  *(unsigned char *)(_ESI + 13479) = Bool_Overwrite; /*0x68a5ba*/
  *(unsigned char *)(_ESI + 13480) = INIClass::ReadBool_Overwrite( /*0x68a5c5*/
                               (int *)a3,
                               *(unsigned __int8 **)v78.__tail_10,
                               (unsigned __int8 *)LODWORD(v79),
                               SBYTE4(v79));
  v37 = INIClass::ReadBool_Overwrite((int *)a3, aBasic, (unsigned __int8 *)aTiberiumdeatht, *(unsigned char *)(_ESI + 13491)); /*0x68a5de*/
  v38 = *(unsigned char *)(_ESI + 13476); /*0x68a5e3*/
  *(unsigned char *)(_ESI + 13491) = v37; /*0x68a5e9*/
  v39 = INIClass::ReadBool_Overwrite((int *)a3, aBasic, (unsigned __int8 *)aFreeradar, v38); /*0x68a5fc*/
  HIDWORD(v79) = *(unsigned int *)(_ESI + 524); /*0x68a609*/
  LODWORD(v79) = aHomecell; /*0x68a60a*/
  *(unsigned int *)v78.__tail_10 = aBasic; /*0x68a60f*/
  *(unsigned char *)(_ESI + 13476) = v39; /*0x68a614*/
  *(unsigned int *)(_ESI + 524) = INIClass::ReadInt_Overwrite( /*0x68a61f*/
                              (bool *)a3,
                              *(unsigned __int8 **)v78.__tail_10,
                              (unsigned __int8 *)LODWORD(v79),
                              SHIDWORD(v79));
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x68a638*/
                    (bool *)a3,
                    aBasic,
                    (unsigned __int8 *)aAlthomecell,
                    _ESI->uniqueId);
  BYTE4(v79) = 0; /*0x68a63d*/
  LODWORD(v79) = aCivevac; /*0x68a63f*/
  *(unsigned int *)v78.__tail_10 = aBasic; /*0x68a644*/
  *(unsigned int *)(_ESI + 528) = Int_Overwrite; /*0x68a64b*/
  INIClass::ReadBool_Overwrite( /*0x68a651*/
    (int *)a3,
    *(unsigned __int8 **)v78.__tail_10,
    (unsigned __int8 *)LODWORD(v79),
    SBYTE4(v79));
  v41 = *(unsigned int *)(_ESI + 13540) - *(unsigned int *)(_ESI + 13568); /*0x68a662*/
  m_1 = 0; /*0x68a664*/
  if ( v41 > 0 ) /*0x68a66e*/
  {
    do /*0x68a6c8*/
    {
      v42 = *(unsigned int *)(_ESI + 13560); /*0x68a670*/
      if ( *(unsigned int *)(_ESI + 13568) < v42 /*0x68a695*/
        || (*(unsigned char *)(_ESI + 13565) || !v42)
        && (v43 = _ESI->ground, v43 > 0)
        && (*(unsigned __int8 (**)(int, int, unsigned int))(*(unsigned int *)v21->__pad_0 + 8))(
             _ESI + 13552,
             v42 + v43,
             0) )
      {
        v44 = *(unsigned int *)(_ESI + 13568); /*0x68a69c*/
        v45 = *(unsigned int *)(_ESI + 13556); /*0x68a69f*/
        *(unsigned int *)(_ESI + 13568) = v44 + 1; /*0x68a6a5*/
        *(unsigned int *)(v45 + 4 * v44) = -1; /*0x68a6a8*/
      }
      v46 = *(unsigned int *)(_ESI + 13540) - *(unsigned int *)(_ESI + 13568); /*0x68a6c0*/
      m_1 = (_VectorClass_PAVTechnoTypeClass *)((char *)m_1 + 1); /*0x68a6c2*/
    }
    while ( (int)m_1 < v46 ); /*0x68a6c8*/
  }
  v47 = *(unsigned int *)(_ESI + 13568); /*0x68a6ca*/
  m_1 = 0; /*0x68a6d0*/
  if ( v47 > 0 ) /*0x68a6da*/
  {
    do /*0x68a732*/
    {
      v48 = *(unsigned int *)(_ESI + 13588); /*0x68a6e2*/
      if ( *(unsigned int *)(_ESI + 13596) < v48 /*0x68a707*/
        || (*(unsigned char *)(_ESI + 13593) || !v48)
        && (v49 = _ESI->ionLevel, v49 > 0)
        && (*(unsigned __int8 (**)(int, int, unsigned int))(_ESI->ionAmbient + 8))(
             _ESI + 13580,
             v48 + v49,
             0) )
      {
        v50 = *(unsigned int *)(_ESI + 13596); /*0x68a70e*/
        v51 = *(unsigned int *)(_ESI + 13584); /*0x68a711*/
        *(unsigned int *)(_ESI + 13596) = v50 + 1; /*0x68a717*/
        *(unsigned int *)(v51 + 4 * v50) = 0; /*0x68a71a*/
      }
      v52 = *(unsigned int *)(_ESI + 13568); /*0x68a725*/
      m_1 = (_VectorClass_PAVTechnoTypeClass *)((char *)m_1 + 1); /*0x68a72e*/
    }
    while ( (int)m_1 < v52 ); /*0x68a732*/
  }
  ScenarioClass::ReadLocalVariables((char *)_ESI, (char *)a3); /*0x68a737*/
  Event::Dispatch(); /*0x68a73c*/
  TimeString = INIClass::ReadTimeString( /*0x68a754*/
                 (int)a3,
                 g_INI_Key_Ranking,
                 (unsigned __int8 *)aPartimeeasy,
                 _ESI->parTimeEasy);
  v54 = *(unsigned int *)(_ESI + 13736); /*0x68a759*/
  *(unsigned int *)(_ESI + 13732) = TimeString; /*0x68a75f*/
  v55 = INIClass::ReadTimeString((int)a3, g_INI_Key_Ranking, (unsigned __int8 *)aPartimemedium, v54); /*0x68a772*/
  HIDWORD(v79) = *(unsigned int *)(_ESI + 13740); /*0x68a77f*/
  LODWORD(v79) = aPartimehard; /*0x68a780*/
  *(unsigned int *)v78.__tail_10 = g_INI_Key_Ranking; /*0x68a785*/
  *(unsigned int *)(_ESI + 13736) = v55; /*0x68a78a*/
  *(unsigned int *)(_ESI + 13740) = INIClass::ReadTimeString( /*0x68a795*/
                                (int)a3,
                                *(unsigned __int8 **)v78.__tail_10,
                                (unsigned __int8 *)LODWORD(v79),
                                SHIDWORD(v79));
  INIClass::GetString( /*0x68a7b5*/
    (INIClass *)a3,
    g_INI_Key_Ranking,
    (unsigned __int8 *)aUnderpartitle,
    aGuiNounderpart,
    &_ESI->underParTitle,
    31);
  INIClass::GetString( /*0x68a7d4*/
    (INIClass *)a3,
    g_INI_Key_Ranking,
    (unsigned __int8 *)aUnderparmessag,
    aGuiNounderparm,
    &_ESI->underParMessage,
    31);
  INIClass::GetString( /*0x68a7f3*/
    (INIClass *)a3,
    g_INI_Key_Ranking,
    (unsigned __int8 *)aOverpartitle,
    aGuiNooverparti,
    &_ESI->overParTitle,
    31);
  INIClass::GetString( /*0x68a812*/
    (INIClass *)a3,
    g_INI_Key_Ranking,
    (unsigned __int8 *)aOverparmessage,
    aGuiNooverparme,
    &_ESI->overParMessage,
    31);
  __asm { fild dword ptr [esi+3528h] } /*0x68a817*/
  __asm
  {
    fmul ds:dbl_7E3808
    fstp [esp+48h+var_48]; double
  }
  INIClass::ReadDouble_Overwrite((double *)a3, aLighting, (unsigned __int8 *)aAmbient, v79); /*0x68a835*/
  __asm /*0x68a83a*/
  {
    fmul ds:dbl_7E2AC0
    fadd ds:dbl_7E3808
  }
  LOWORD(v56) = Math::RoundToInt(a2); /*0x68a846*/
  __asm { fild dword ptr [esi+3534h] } /*0x68a84b*/
  *(unsigned int *)(_ESI + 13608) = v56; /*0x68a856*/
  *(unsigned int *)(_ESI + 13612) = v56; /*0x68a85c*/
  __asm { fmul ds:dbl_7E3808 } /*0x68a862*/
  *(unsigned int *)(_ESI + 13616) = v56; /*0x68a868*/
  __asm { fstp [esp+48h+var_48]; double } /*0x68a86e*/
  INIClass::ReadDouble_Overwrite((double *)a3, aLighting, (unsigned __int8 *)aRed_0, v79); /*0x68a87b*/
  __asm /*0x68a880*/
  {
    fmul ds:dbl_7E2AC0
    fadd ds:dbl_7E3808
  }
  LOWORD(v57) = Math::RoundToInt(a2); /*0x68a88c*/
  __asm { fild dword ptr [esi+3538h] } /*0x68a891*/
  *(unsigned int *)(_ESI + 13620) = v57; /*0x68a89c*/
  __asm /*0x68a8a2*/
  {
    fmul ds:dbl_7E3808
    fstp [esp+48h+var_48]; double
  }
  INIClass::ReadDouble_Overwrite((double *)a3, aLighting, (unsigned __int8 *)aGreen, v79); /*0x68a8b5*/
  __asm /*0x68a8ba*/
  {
    fmul ds:dbl_7E2AC0
    fadd ds:dbl_7E3808
  }
  LOWORD(v58) = Math::RoundToInt(a2); /*0x68a8c6*/
  __asm { fild dword ptr [esi+353Ch] } /*0x68a8cb*/
  *(unsigned int *)(_ESI + 13624) = v58; /*0x68a8d6*/
  __asm /*0x68a8dc*/
  {
    fmul ds:dbl_7E3808
    fstp [esp+48h+var_48]; double
  }
  INIClass::ReadDouble_Overwrite((double *)a3, aLighting, (unsigned __int8 *)g_INI_Key_Blue, v79); /*0x68a8ef*/
  __asm /*0x68a8f4*/
  {
    fmul ds:dbl_7E2AC0
    fadd ds:dbl_7E3808
  }
  LOWORD(v59) = Math::RoundToInt(a2); /*0x68a900*/
  __asm { fild dword ptr [esi+3540h] } /*0x68a905*/
  *(unsigned int *)(_ESI + 13628) = v59; /*0x68a910*/
  __asm /*0x68a916*/
  {
    fmul ds:flt_7F0E78
    fstp [esp+48h+var_48]; double
  }
  INIClass::ReadDouble_Overwrite((double *)a3, aLighting, (unsigned __int8 *)g_INI_Key_Ground, v79); /*0x68a929*/
  __asm /*0x68a92e*/
  {
    fmul ds:dbl_7E4658
    fadd ds:dbl_7E3808
  }
  LOWORD(v60) = Math::RoundToInt(a2); /*0x68a93a*/
  __asm { fild dword ptr [esi+3544h] } /*0x68a93f*/
  *(unsigned int *)(_ESI + 13632) = v60; /*0x68a94a*/
  __asm /*0x68a950*/
  {
    fmul ds:flt_7F0E78
    fstp [esp+48h+var_48]; double
  }
  INIClass::ReadDouble_Overwrite((double *)a3, aLighting, (unsigned __int8 *)aLevel, v79); /*0x68a963*/
  __asm /*0x68a968*/
  {
    fmul ds:dbl_7E4658
    fadd ds:dbl_7E3808
  }
  LOWORD(v61) = Math::RoundToInt(a2); /*0x68a974*/
  __asm { fild dword ptr [esi+3548h] } /*0x68a979*/
  *(unsigned int *)(_ESI + 13636) = v61; /*0x68a984*/
  __asm /*0x68a98a*/
  {
    fmul ds:dbl_7E3808
    fstp [esp+48h+var_48]; double
  }
  INIClass::ReadDouble_Overwrite((double *)a3, aLighting, (unsigned __int8 *)aIonambient, v79); /*0x68a99d*/
  __asm /*0x68a9a2*/
  {
    fmul ds:dbl_7E2AC0
    fadd ds:dbl_7E3808
  }
  LOWORD(v62) = Math::RoundToInt(a2); /*0x68a9ae*/
  __asm { fild dword ptr [esi+354Ch] } /*0x68a9b3*/
  *(unsigned int *)(_ESI + 13640) = v62; /*0x68a9be*/
  __asm /*0x68a9c4*/
  {
    fmul ds:dbl_7E3808
    fstp [esp+48h+var_48]; double
  }
  INIClass::ReadDouble_Overwrite((double *)a3, aLighting, (unsigned __int8 *)aIonred, v79); /*0x68a9d7*/
  __asm /*0x68a9dc*/
  {
    fmul ds:dbl_7E2AC0
    fadd ds:dbl_7E3808
  }
  LOWORD(v63) = Math::RoundToInt(a2); /*0x68a9e8*/
  __asm { fild dword ptr [esi+3550h] } /*0x68a9ed*/
  *(unsigned int *)(_ESI + 13644) = v63; /*0x68a9f6*/
  __asm /*0x68a9fe*/
  {
    fmul ds:dbl_7E3808
    fstp [esp+48h+var_48]; double
  }
  INIClass::ReadDouble_Overwrite((double *)a3, aLighting, (unsigned __int8 *)aIongreen, v79); /*0x68aa11*/
  __asm /*0x68aa16*/
  {
    fmul ds:dbl_7E2AC0
    fadd ds:dbl_7E3808
  }
  LOWORD(v64) = Math::RoundToInt(a2); /*0x68aa22*/
  __asm { fild dword ptr [esi+3554h] } /*0x68aa27*/
  *(unsigned int *)(_ESI + 13648) = v64; /*0x68aa32*/
  __asm /*0x68aa38*/
  {
    fmul ds:dbl_7E3808
    fstp [esp+48h+var_48]; double
  }
  INIClass::ReadDouble_Overwrite((double *)a3, aLighting, (unsigned __int8 *)aIonblue, v79); /*0x68aa4b*/
  __asm /*0x68aa50*/
  {
    fmul ds:dbl_7E2AC0
    fadd ds:dbl_7E3808
  }
  LOWORD(v65) = Math::RoundToInt(a2); /*0x68aa5c*/
  __asm { fild dword ptr [esi+3558h] } /*0x68aa61*/
  *(unsigned int *)(_ESI + 13652) = v65; /*0x68aa6c*/
  __asm /*0x68aa72*/
  {
    fmul ds:flt_7F0E78
    fstp [esp+48h+var_48]; double
  }
  INIClass::ReadDouble_Overwrite((double *)a3, aLighting, (unsigned __int8 *)aIonground, v79); /*0x68aa85*/
  __asm /*0x68aa8a*/
  {
    fmul ds:dbl_7E4658
    fadd ds:dbl_7E3808
  }
  LOWORD(v66) = Math::RoundToInt(a2); /*0x68aa96*/
  __asm { fild dword ptr [esi+355Ch] } /*0x68aa9b*/
  *(unsigned int *)(_ESI + 13656) = v66; /*0x68aaa6*/
  __asm /*0x68aaac*/
  {
    fmul ds:flt_7F0E78
    fstp [esp+48h+var_48]; double
  }
  INIClass::ReadDouble_Overwrite((double *)a3, aLighting, (unsigned __int8 *)aIonlevel, v79); /*0x68aabf*/
  __asm /*0x68aac4*/
  {
    fmul ds:dbl_7E4658
    fadd ds:dbl_7E3808
  }
  LOWORD(v67) = Math::RoundToInt(a2); /*0x68aad0*/
  __asm { fild dword ptr [esi+3578h] } /*0x68aad5*/
  *(unsigned int *)(_ESI + 13660) = v67; /*0x68aae0*/
  __asm { fstp [esp+48h+var_48]; double } /*0x68aae6*/
  INIClass::ReadDouble_Overwrite((double *)a3, aLighting, aNukeambientcha, v79); /*0x68aaf3*/
  LOWORD(v68) = Math::RoundToInt(a2); /*0x68aaf8*/
  __asm { fild dword ptr [esi+357Ch] } /*0x68aafd*/
  *(unsigned int *)(_ESI + 13688) = v68; /*0x68ab08*/
  __asm /*0x68ab0e*/
  {
    fmul ds:dbl_7E3808
    fstp [esp+48h+var_48]; double
  }
  INIClass::ReadDouble_Overwrite((double *)a3, aLighting, (unsigned __int8 *)aDominatorambie, v79); /*0x68ab21*/
  __asm /*0x68ab26*/
  {
    fmul ds:dbl_7E2AC0
    fadd ds:dbl_7E3808
  }
  LOWORD(v69) = Math::RoundToInt(a2); /*0x68ab32*/
  __asm { fild dword ptr [esi+3580h] } /*0x68ab37*/
  *(unsigned int *)(_ESI + 13692) = v69; /*0x68ab42*/
  __asm /*0x68ab48*/
  {
    fmul ds:dbl_7E3808
    fstp [esp+48h+var_48]; double
  }
  INIClass::ReadDouble_Overwrite((double *)a3, aLighting, (unsigned __int8 *)aDominatorred, v79); /*0x68ab5b*/
  __asm /*0x68ab60*/
  {
    fmul ds:dbl_7E2AC0
    fadd ds:dbl_7E3808
  }
  LOWORD(v70) = Math::RoundToInt(a2); /*0x68ab6c*/
  __asm { fild dword ptr [esi+3584h] } /*0x68ab71*/
  *(unsigned int *)(_ESI + 13696) = v70; /*0x68ab7a*/
  __asm /*0x68ab82*/
  {
    fmul ds:dbl_7E3808
    fstp [esp+48h+var_48]; double
  }
  INIClass::ReadDouble_Overwrite((double *)a3, aLighting, (unsigned __int8 *)aDominatorgreen, v79); /*0x68ab95*/
  __asm /*0x68ab9a*/
  {
    fmul ds:dbl_7E2AC0
    fadd ds:dbl_7E3808
  }
  LOWORD(v71) = Math::RoundToInt(a2); /*0x68aba6*/
  __asm { fild dword ptr [esi+3588h] } /*0x68abab*/
  *(unsigned int *)(_ESI + 13700) = v71; /*0x68abb6*/
  __asm /*0x68abbc*/
  {
    fmul ds:dbl_7E3808
    fstp [esp+48h+var_48]; double
  }
  INIClass::ReadDouble_Overwrite((double *)a3, aLighting, (unsigned __int8 *)aDominatorblue, v79); /*0x68abcf*/
  __asm /*0x68abd4*/
  {
    fmul ds:dbl_7E2AC0
    fadd ds:dbl_7E3808
  }
  LOWORD(v72) = Math::RoundToInt(a2); /*0x68abe0*/
  __asm { fild dword ptr [esi+358Ch] } /*0x68abe5*/
  *(unsigned int *)(_ESI + 13704) = v72; /*0x68abf0*/
  __asm /*0x68abf6*/
  {
    fmul ds:flt_7F0E78
    fstp [esp+48h+var_48]; double
  }
  INIClass::ReadDouble_Overwrite((double *)a3, aLighting, (unsigned __int8 *)aDominatorgroun, v79); /*0x68ac09*/
  __asm /*0x68ac0e*/
  {
    fmul ds:dbl_7E4658
    fadd ds:dbl_7E3808
  }
  LOWORD(v73) = Math::RoundToInt(a2); /*0x68ac1a*/
  __asm { fild dword ptr [esi+3590h] } /*0x68ac1f*/
  *(unsigned int *)(_ESI + 13708) = v73; /*0x68ac2a*/
  __asm /*0x68ac30*/
  {
    fmul ds:flt_7F0E78
    fstp [esp+48h+var_48]; double
  }
  INIClass::ReadDouble_Overwrite((double *)a3, aLighting, (unsigned __int8 *)aDominatorlevel, v79); /*0x68ac43*/
  __asm /*0x68ac48*/
  {
    fmul ds:dbl_7E4658
    fadd ds:dbl_7E3808
  }
  LOWORD(v74) = Math::RoundToInt(a2); /*0x68ac54*/
  __asm { fild dword ptr [esi+3594h] } /*0x68ac59*/
  *(unsigned int *)(_ESI + 13712) = v74; /*0x68ac64*/
  __asm /*0x68ac6a*/
  {
    fmul ds:flt_7F0E78
    fstp [esp+48h+var_48]; double
  }
  INIClass::ReadDouble_Overwrite((double *)a3, aLighting, (unsigned __int8 *)aDominatorambie_0, v79); /*0x68ac7d*/
  __asm /*0x68ac82*/
  {
    fmul ds:dbl_7E4658
    fadd ds:dbl_7E3808
  }
  LOWORD(v75) = Math::RoundToInt(a2); /*0x68ac8e*/
  HIDWORD(v79) = 55; /*0x68ac93*/
  *(unsigned int *)(_ESI + 13716) = v75; /*0x68ac9a*/
  Multiplayer::ShowProgress((Multiplayer *)&dword_A8B238, SHIDWORD(v79)); /*0x68aca0*/
  Event::Dispatch(); /*0x68aca5*/
  if ( *(unsigned int *)&dword_A8B238 ) /*0x68acb1*/
  {
    AssignSessionHouses(v80); /*0x68acff*/
  }
  else
  {
    INIClass::GetString((INIClass *)a3, aBasic, (unsigned __int8 *)aPlayer, &g_INI_DefaultBuffer, Destination, 20); /*0x68accb*/
    v76 = HouseClass::FindByName(Destination); /*0x68acd4*/
    if ( v76 == -1 ) /*0x68acdc*/
      v76 = 0; /*0x68acde*/
    *(int *)((char *)&stru_A83CD9.estimatedHealth + 3) = *(&dword_A8022C->vfptr + v76); /*0x68ace9*/
    *(unsigned int *)(_ESI + 7284) = *(unsigned int *)(*(unsigned int *)(*(int *)((char *)&stru_A83CD9.estimatedHealth + 3) + 52) + 184); /*0x68acf7*/
  }
  HIDWORD(v79) = 58; /*0x68ad0a*/
  *(unsigned char *)(*(int *)((char *)&stru_A83CD9.estimatedHealth + 3) + 492) = 1; /*0x68ad0c*/
  *(unsigned char *)(*(int *)((char *)&stru_A83CD9.estimatedHealth + 3) + 493) = 1; /*0x68ad18*/
  *(unsigned int *)(*(int *)((char *)&stru_A83CD9.estimatedHealth + 3) + 22260) = 0; /*0x68ad25*/
  Multiplayer::ShowProgress((Multiplayer *)&dword_A8B238, SHIDWORD(v79)); /*0x68ad34*/
  Event::Dispatch(); /*0x68ad39*/
  if ( stru_A8E960.random[503] ) /*0x68ad45*/
    TheatreClass::InitView(); /*0x68ad47*/
  Multiplayer::ShowProgress((Multiplayer *)&dword_A8B238, 60); /*0x68ad53*/
  Event::Dispatch(); /*0x68ad58*/
  return 1; /*0x68ad5d*/

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
  /* X11: vtable install elided (X67 star-deref, RHS vt_MSAnim) */  /*0x5ceb69*/
  if ( (a2 & 1) != 0 ) /*0x5ceb6f*/
    operator delete((Block)); /*0x5ceb72*/
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

  void *v2 = this->Items; // eax /*0x5d80b6*/
  this->Items = 0; /*0x5d80b9*/
  if ( v2 && this->IsAllocated ) /*0x5d80c0*/
  {
    operator delete((v2)); /*0x5d80c6*/
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
