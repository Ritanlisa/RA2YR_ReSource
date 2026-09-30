// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/AudioQueue_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Display_e4.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/MixFile_e4.hpp"
#include "e4/classes/VectorClass_Building_e4.hpp"
#include "e4/classes/VectorClass_ptr_SuperClass_e4.hpp"
#include "e4/classes/LoadGame_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/RulesClass_e4.hpp"
#include "e4/classes/ScenarioClass_e4.hpp"
#include "e4/classes/TacticalClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/LoadOptions_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/CCFileClass_e4.hpp"
#include "e4/classes/MSEngine_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/LinkClass_e4.hpp"
#include "e4/classes/LinkedList_flat_e4.hpp"
#include "e4/classes/WideString_e4.hpp"

// 0x660840
namespace gamemd {
int LoadGame::LoadTriggerEvents()
{

  unsigned int v1;
  int v2; // edi
  unsigned int v4;
  void *v5; // esi
  unsigned int * v6;
  int v7; // eax
  int v9; // esi
  unsigned int *v10; // eax
  unsigned int *v11; // eax
  unsigned int * v12;
  int v13; // [esp+24h] [ebp-4h] BYREF

  v1 = (unsigned int *)(g_TriggerEventState);
  v2 = g_TriggerEventState - 1; /*0x66084d*/
  if ( g_TriggerEventState - 1 >= 0 ) /*0x660856*/
  {
    v4 = (unsigned int *)(g_TriggerPool);
    do /*0x6608cb*/
    {
      v5 = (void *)((unsigned int *)(v4))[v2]; /*0x66085e*/
      if ( v5 ) /*0x660863*/
      {
        v12 = (int)((unsigned int *)(((unsigned int *)(v4))[v2]));
        v6 = (int)((unsigned int *)((*(int (**)(int *, int *))(dword_B04DA8 + 16))(&dword_B04DA8, &v12)));
        if ( v6 != (unsigned int *)(-1) ) /*0x66087f*/
          LoadGame::RemoveItem(&dword_B04DA8, v6); /*0x660887*/
        RA2_OPDEL(v5); /*0x66088d*/
        v4 = g_TriggerPool; /*0x660892*/
        v1 = g_TriggerEventState; /*0x660898*/
      }
      if ( v2 < (int)(v1) ) /*0x6608a3*/
      {
        --v1; /*0x6608a5*/
        v7 = v2; /*0x6608a6*/
        for ( g_TriggerEventState = v1; v7 < g_TriggerEventState; ++v7 ) /*0x6608b0*/
        {
          ((unsigned int *)(v4))[v7] = (unsigned int *)(v4[v7 + 1]);
          v1 = (int)((unsigned int *)(g_TriggerEventState));
          v4 = (unsigned int *)(g_TriggerPool);
        }
      }
      --v2; /*0x6608ca*/
    }
    while ( v2 >= 0 ); /*0x6608cb*/
  }
  bool LoadGame::LoadTriggerEvents(LoadGame *this)
    return 0; /*0x6608e8*/
  v9 = 0; /*0x6608ed*/
  if ( v13 > 0 ) /*0x6608f1*/
  {
    while ( 1 ) /*0x6608f5*/
    {
      v10 = (unsigned int *)(RA2_OPNEW(0x40u));
      if ( v10 ) /*0x6608ff*/
      {
        v12 = 0; /*0x660901*/
        v11 = Team_Load_65FB80(v10, -1, 0); /*0x660914*/
      }
      else
      {
        v11 = 0; /*0x66091b*/
      }
      ( this, _65FB80, 64, 0)
        break; /*0x660929*/
      if ( ++v9 >= v13 ) /*0x660932*/
        bool LoadGame::LoadTriggerEvents(LoadGame *this)
    }
    return 0; /*0x660929*/
  }
  ( this, &word_B04D78, 4, 0)

}
} // namespace gamemd
// 0x660F10
namespace gamemd {
void LoadGame::RemoveItem( int a2)
{

  int v2; // edx
  int v3; // eax
  int v4; // edx

  v2 = (int)(*(this + 4));
  v3 = a2; /*0x660f13*/
  if ( a2 >= v2 ) /*0x660f19*/
    return 0; /*0x660f3c*/
  v4 = v2 - 1; /*0x660f1b*/
  *(this + 4) = v4; /*0x660f1e*/
  if ( a2 < v4 ) /*0x660f21*/
  {
    do /*0x660f34*/
    {
      ++v3; /*0x660f27*/
      *(unsigned int *)(*(this + 1) + 4 * v3 - 4) = *(unsigned int *)(*(this + 1) + 4 * v3); /*0x660f2b*/
    }
    while ( v3 < *(this + 4) ); /*0x660f34*/
  }
  return 1; /*0x660f39*/

}
} // namespace gamemd
// 0x67E730
namespace gamemd {
void LoadGame::Start(LPSTREAM pStm)
{

  char result; // al
  int *Viewport; // edx
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // edx
  int v8; // ebp
  int v9; // ebp
  int v10; // ebp
  int v11; // ebp
  int v12; // ebp
  int v13; // ebp
  int v14; // ebp
  int v15; // ebp
  int v16; // ebp
  int v17; // ebp
  int v18; // ebp
  int v19; // ebp
  int v20; // ebp
  int v21; // ebp
  int v22; // ebp
  int v23; // ebp
  int v24; // ebp
  int v25; // ebp
  int v26; // ebp
  int v27; // ebp
  int v28; // ebp
  int v29; // ebp
  int v30; // ebp
  int v31; // ebp
  int v32; // ebp
  int v33; // ebp
  int v34; // ebp
  int v35; // ebp
  int v36; // ebp
  int v37; // ebp
  int v38; // ebp
  int v39; // ebp
  int v40; // ebp
  int v41; // ebp
  int v42; // ebp
  int v43; // ebp
  int v44; // ebp
  int v45; // ebp
  int v46; // ebp
  int v47; // ebp
  int v48; // ebp
  int v49; // ebp
  int v50; // ebp
  int v51; // ebp
  int v52; // ebp
  int v53; // ebp
  int v54; // ebp
  int v55; // edi
  int v56; // eax
  int v57; // eax
  int v58; // edi
  int v59; // ebp
  int v60; // edi
  int v61; // eax
  int v62; // eax
  int v63; // edi
  int v64; // [esp+330h] [ebp-4Ch] BYREF
  LPVOID ppvObj; // [esp+334h] [ebp-48h] BYREF
  LPVOID v66; // [esp+338h] [ebp-44h] BYREF
  unsigned int v67[4]; // [esp+33Ch] [ebp-40h] BYREF
  unsigned int v68[4]; // [esp+34Ch] [ebp-30h] BYREF
  int v69[4]; // [esp+35Ch] [ebp-20h] BYREF
  int v70[4]; // [esp+36Ch] [ebp-10h] BYREF

  ResetScenario();
  ScenarioClass::SaveLoad_Prefix_0((int)g_abs_A8B230, (int)pStm);
  g_abs_A8ED9C = *((unsigned char *)g_abs_A8B230 + 13730);
  result = MixFile::LoadSide(*((unsigned int *)g_abs_A8B230 + 3374));
  if ( result )
  {
    Viewport = Display::GetViewport(v69);
    v67[0] = 0;
    v4 = *Viewport;
    v67[1] = 0;
    v70[0] = v4;
    v68[0] = 0;
    v5 = Viewport[1];
    v68[1] = 0;
    v70[1] = v5;
    v6 = Viewport[2];
    v67[2] = 168;
    v70[2] = v6;
    v7 = Viewport[3];
    v68[2] = v6;
    v70[3] = v7;
    v69[2] = v6;
    v67[3] = (unsigned int)(g_abs_886FBC);
    v68[3] = (unsigned int)(g_abs_886FBC);
    v69[3] = (int)(g_abs_886FBC);
    v69[0] = 0;
    v69[1] = 0;
    AllocateSurfaceScreenSurfaces((int)&g_abs_886FB0, (int)v69, (int)v68, (int)v67, 0);
    TacticalClass::SetViewDimensions(v70);
    LoadGame::LoadBlock68(&g_abs_8A38E0, (int)pStm);
    LoadTheaterClassMIX(*((unsigned int *)g_abs_A8B230 + 1174));
    RulesClass::SaveLoad_Prefix_0(&g_abs_8871E0->DetailMinFrameRateNormal, (int)pStm);
    if ( (*(int (**)(LPSTREAM, int *, int, unsigned int))(*(unsigned int *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v8 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v8 >= v64 )
          goto LABEL_6;
      }
      return 0;
    }
LABEL_6:
    MouseClass::LoadGameAssets(&g_abs_87F7E8, pStm);
    if ( (*(int (**)(LPSTREAM, int *, int, unsigned int))(*(unsigned int *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v9 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v9 >= v64 )
          goto LABEL_10;
      }
      return 0;
    }
LABEL_10:
    if ( Game::SerializeGameSaveState(pStm) < 0 )
      return 0;
    MapClass::BuildSubzones(&g_abs_87F7E8);
    LayerClass::Load(&g_abs_87F778, pStm);
    if ( g_abs_887324 )
    {
      (*(void (**)(LPPERSISTSTREAM, int))(*(unsigned int *)g_abs_887324 + 32))(g_abs_887324, 1);
      g_abs_887324 = 0;
    }
    if ( OleLoadFromStream(pStm, &IID_IUnknown, &v66) < 0 )
      return 0;
    if ( (*(int (**)(LPSTREAM, int *, int, unsigned int))(*(unsigned int *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v10 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v10 >= v64 )
          goto LABEL_20;
      }
      return 0;
    }
LABEL_20:
    if ( (*(int (**)(LPSTREAM, int *, int, unsigned int))(*(unsigned int *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v11 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v11 >= v64 )
          goto LABEL_24;
      }
      return 0;
    }
LABEL_24:
    if ( (*(int (**)(LPSTREAM, int *, int, unsigned int))(*(unsigned int *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v12 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v12 >= v64 )
          goto LABEL_28;
      }
      return 0;
    }
LABEL_28:
    if ( (*(int (**)(LPSTREAM, int *, int, unsigned int))(*(unsigned int *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v13 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v13 >= v64 )
          goto LABEL_32;
      }
      return 0;
    }
LABEL_32:
    if ( (*(int (**)(LPSTREAM, int *, int, unsigned int))(*(unsigned int *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v14 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v14 >= v64 )
          goto LABEL_36;
      }
      return 0;
    }
LABEL_36:
    if ( (*(int (**)(LPSTREAM, int *, int, unsigned int))(*(unsigned int *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v15 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v15 >= v64 )
          goto LABEL_40;
      }
      return 0;
    }
LABEL_40:
    if ( (*(int (**)(LPSTREAM, int *, int, unsigned int))(*(unsigned int *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v16 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v16 >= v64 )
          goto LABEL_44;
      }
      return 0;
    }
LABEL_44:
    if ( (*(int (**)(LPSTREAM, int *, int, unsigned int))(*(unsigned int *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v17 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v17 >= v64 )
          goto LABEL_48;
      }
      return 0;
    }
LABEL_48:
    if ( (*(int (**)(LPSTREAM, int *, int, unsigned int))(*(unsigned int *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v18 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v18 >= v64 )
          goto LABEL_52;
      }
      return 0;
    }
LABEL_52:
    if ( (*(int (**)(LPSTREAM, int *, int, unsigned int))(*(unsigned int *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v19 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v19 >= v64 )
          goto LABEL_56;
      }
      return 0;
    }
LABEL_56:
    if ( (*(int (**)(LPSTREAM, int *, int, unsigned int))(*(unsigned int *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v20 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v20 >= v64 )
          goto LABEL_60;
      }
      return 0;
    }
LABEL_60:
    if ( (*(int (**)(LPSTREAM, int *, int, unsigned int))(*(unsigned int *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v21 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v21 >= v64 )
          goto LABEL_64;
      }
      return 0;
    }
LABEL_64:
    if ( (*(int (**)(LPSTREAM, int *, int, unsigned int))(*(unsigned int *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v22 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v22 >= v64 )
          goto LABEL_68;
      }
      return 0;
    }
LABEL_68:
    if ( (*(int (**)(LPSTREAM, int *, int, unsigned int))(*(unsigned int *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v23 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v23 >= v64 )
          goto LABEL_72;
      }
      return 0;
    }
LABEL_72:
    if ( (*(int (**)(LPSTREAM, int *, int, unsigned int))(*(unsigned int *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v24 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v24 >= v64 )
          goto LABEL_76;
      }
      return 0;
    }
LABEL_76:
    if ( (*(int (**)(LPSTREAM, int *, int, unsigned int))(*(unsigned int *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v25 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v25 >= v64 )
          goto LABEL_80;
      }
      return 0;
    }
LABEL_80:
    if ( (*(int (**)(LPSTREAM, int *, int, unsigned int))(*(unsigned int *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v26 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v26 >= v64 )
          goto LABEL_84;
      }
      return 0;
    }
LABEL_84:
    if ( (*(int (**)(LPSTREAM, int *, int, unsigned int))(*(unsigned int *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v27 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v27 >= v64 )
          goto LABEL_88;
      }
      return 0;
    }
LABEL_88:
    if ( (*(int (**)(LPSTREAM, int *, int, unsigned int))(*(unsigned int *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v28 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v28 >= v64 )
          goto LABEL_92;
      }
      return 0;
    }
LABEL_92:
    if ( (*(int (**)(LPSTREAM, int *, int, unsigned int))(*(unsigned int *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v29 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v29 >= v64 )
          goto LABEL_96;
      }
      return 0;
    }
LABEL_96:
    if ( (*(int (**)(LPSTREAM, int *, int, unsigned int))(*(unsigned int *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v30 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v30 >= v64 )
          goto LABEL_100;
      }
      return 0;
    }
LABEL_100:
    if ( (*(int (**)(LPSTREAM, int *, int, unsigned int))(*(unsigned int *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v31 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v31 >= v64 )
          goto LABEL_104;
      }
      return 0;
    }
LABEL_104:
    if ( (*(int (**)(LPSTREAM, int *, int, unsigned int))(*(unsigned int *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v32 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v32 >= v64 )
          goto LABEL_108;
      }
      return 0;
    }
LABEL_108:
    if ( (*(int (**)(LPSTREAM, int *, int, unsigned int))(*(unsigned int *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v33 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v33 >= v64 )
          goto LABEL_112;
      }
      return 0;
    }
LABEL_112:
    if ( (*(int (**)(LPSTREAM, int *, int, unsigned int))(*(unsigned int *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v34 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v34 >= v64 )
          goto LABEL_116;
      }
      return 0;
    }
LABEL_116:
    if ( (*(int (**)(LPSTREAM, int *, int, unsigned int))(*(unsigned int *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v35 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v35 >= v64 )
          goto LABEL_120;
      }
      return 0;
    }
LABEL_120:
    if ( (*(int (**)(LPSTREAM, int *, int, unsigned int))(*(unsigned int *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v36 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v36 >= v64 )
          goto LABEL_124;
      }
      return 0;
    }
LABEL_124:
    if ( (*(int (**)(LPSTREAM, int *, int, unsigned int))(*(unsigned int *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v37 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v37 >= v64 )
          goto LABEL_128;
      }
      return 0;
    }
LABEL_128:
    if ( (*(int (**)(LPSTREAM, int *, int, unsigned int))(*(unsigned int *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v38 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v38 >= v64 )
          goto LABEL_132;
      }
      return 0;
    }
LABEL_132:
    if ( (*(int (**)(LPSTREAM, int *, int, unsigned int))(*(unsigned int *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v39 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v39 >= v64 )
          goto LABEL_136;
      }
      return 0;
    }
LABEL_136:
    if ( (*(int (**)(LPSTREAM, int *, int, unsigned int))(*(unsigned int *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v40 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v40 >= v64 )
          goto LABEL_140;
      }
      return 0;
    }
LABEL_140:
    if ( (*(int (**)(LPSTREAM, int *, int, unsigned int))(*(unsigned int *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v41 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v41 >= v64 )
          goto LABEL_144;
      }
      return 0;
    }
LABEL_144:
    if ( (*(int (**)(LPSTREAM, int *, int, unsigned int))(*(unsigned int *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v42 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v42 >= v64 )
          goto LABEL_148;
      }
      return 0;
    }
LABEL_148:
    if ( (*(int (**)(LPSTREAM, int *, int, unsigned int))(*(unsigned int *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v43 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v43 >= v64 )
          goto LABEL_152;
      }
      return 0;
    }
LABEL_152:
    if ( (*(int (**)(LPSTREAM, int *, int, unsigned int))(*(unsigned int *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v44 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v44 >= v64 )
          goto LABEL_156;
      }
      return 0;
    }
LABEL_156:
    if ( (*(int (**)(LPSTREAM, int *, int, unsigned int))(*(unsigned int *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v45 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v45 >= v64 )
          goto LABEL_160;
      }
      return 0;
    }
LABEL_160:
    if ( (*(int (**)(LPSTREAM, int *, int, unsigned int))(*(unsigned int *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v46 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v46 >= v64 )
          goto LABEL_164;
      }
      return 0;
    }
LABEL_164:
    if ( (*(int (**)(LPSTREAM, int *, int, unsigned int))(*(unsigned int *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v47 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v47 >= v64 )
          goto LABEL_168;
      }
      return 0;
    }
LABEL_168:
    if ( (*(int (**)(LPSTREAM, int *, int, unsigned int))(*(unsigned int *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v48 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v48 >= v64 )
          goto LABEL_172;
      }
      return 0;
    }
LABEL_172:
    if ( (*(int (**)(LPSTREAM, int *, int, unsigned int))(*(unsigned int *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v49 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v49 >= v64 )
          goto LABEL_176;
      }
      return 0;
    }
LABEL_176:
    if ( (*(int (**)(LPSTREAM, int *, int, unsigned int))(*(unsigned int *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v50 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v50 >= v64 )
          goto LABEL_180;
      }
      return 0;
    }
LABEL_180:
    if ( (*(int (**)(LPSTREAM, int *, int, unsigned int))(*(unsigned int *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v51 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v51 >= v64 )
          goto LABEL_184;
      }
      return 0;
    }
LABEL_184:
    if ( (*(int (**)(LPSTREAM, int *, int, unsigned int))(*(unsigned int *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v52 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v52 >= v64 )
          goto LABEL_188;
      }
      return 0;
    }
LABEL_188:
    if ( (*(int (**)(LPSTREAM, int *, int, unsigned int))(*(unsigned int *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0) < 0 )
      return 0;
    v53 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(pStm, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v53 >= v64 )
          goto LABEL_192;
      }
      return 0;
    }
LABEL_192:
    g_abs_A83D60 = 0;
    VectorClass_ptr_SuperClass::Remove((int)&g_abs_A83D50);
    v54 = (*(int (**)(LPSTREAM, int *, int, unsigned int))(*(unsigned int *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0);
    if ( v54 < 0 )
      return 0;
    if ( v64 > 0 )
    {
      v55 = 0;
      while ( 1 )
      {
        v54 = (*(int (**)(LPSTREAM, LPVOID *, int, unsigned int))(*(unsigned int *)pStm->__pad_0 + 12))(
                pStm,
                &ppvObj,
                4,
                0);
        if ( v54 < 0 )
          break;
        if ( g_abs_A83D60 < g_abs_A83D58
          || (g_abs_A83D5D || !g_abs_A83D58)
          && g_abs_A83D64 > 0
          && (*(uint8_t (**)(int *, int, unsigned int))(g_abs_A83D50 + 8))(
               &g_abs_A83D50,
               g_abs_A83D64 + g_abs_A83D58,
               0) )
        {
          v56 = g_abs_A83D60++;
          *((unsigned int *)g_abs_A83D54 + v56) = ppvObj;
        }
        v57 = v64;
        if ( ++v55 >= v64 )
          goto LABEL_205;
      }
      v57 = v64;
LABEL_205:
      v58 = 0;
      if ( v57 > 0 )
      {
        do
          ObjectPtr::RegisterForTracking((int)&g_abs_B0C110, (int *)g_abs_A83D54 + v58++);
        while ( v58 < v64 );
      }
    }
    if ( v54 < 0 )
      return 0;
    unk_8B41F0 = 0;
    VectorClass_Building::Set((int)&dword_8B41E0);
    v59 = (*(int (**)(LPSTREAM, int *, int, unsigned int))(*(unsigned int *)pStm->__pad_0 + 12))(pStm, &v64, 4, 0);
    if ( v59 < 0 )
      return 0;
    if ( v64 > 0 )
    {
      v60 = 0;
      while ( 1 )
      {
        v59 = (*(int (**)(LPSTREAM, LPVOID *, int, unsigned int))(*(unsigned int *)pStm->__pad_0 + 12))(
                pStm,
                &ppvObj,
                4,
                0);
        if ( v59 < 0 )
          break;
        if ( unk_8B41F0 < unk_8B41E8
          || (unk_8B41ED || !unk_8B41E8)
          && unk_8B41F4 > 0
          && (*(uint8_t (**)(int *, int, unsigned int))(dword_8B41E0 + 8))(
               &dword_8B41E0,
               unk_8B41F4 + unk_8B41E8,
               0) )
        {
          v61 = unk_8B41F0++;
          *((unsigned int *)unk_8B41E4 + v61) = ppvObj;
        }
        v62 = v64;
        if ( ++v60 >= v64 )
          goto LABEL_222;
      }
      v62 = v64;
LABEL_222:
      v63 = 0;
      if ( v62 > 0 )
      {
        do
          ObjectPtr::RegisterForTracking((int)&g_abs_B0C110, (int *)unk_8B41E4 + v63++);
        while ( v63 < v64 );
      }
    }
    if ( v59 < 0 )
      return 0;
    if ( Stream::ReadOLEObjects(pStm) < 0 )
      return 0;
    if ( Stream::ReadOLEObjects(pStm) < 0 )
      return 0;
    if ( Stream::ReadOLEObjects(pStm) < 0 )
      return 0;
    if ( Stream::ReadOLEObjects(pStm) < 0 )
      return 0;
    if ( Stream::ReadOLEObjects(pStm) < 0 )
      return 0;
    result = LoadVeinholeMonsters((int *)pStm->__pad_0);
    if ( result )
    {
      result = LoadGame::LoadTriggerEvents(pStm);
      if ( result )
      {
        if ( Stream::ReadOLEObjects(pStm) < 0 )
          return 0;
        if ( Stream::ReadOLEObjects(pStm) < 0 )
          return 0;
        if ( Stream::ReadOLEObjects(pStm) < 0 )
          return 0;
        if ( Stream::ReadOLEObjects(pStm) < 0 )
          return 0;
        if ( Stream::ReadOLEObjects(pStm) < 0 )
          return 0;
        if ( Stream::ReadOLEObjects(pStm) < 0 )
          return 0;
        if ( Stream::ReadOLEObjects(pStm) < 0 )
          return 0;
        LoadGame::ClearAllSlots(g_abs_887888);
        if ( LoadGame::LoadIteratedData((char *)g_abs_887888, (int)pStm) < 0 )
          return 0;
        LoadGame::CleanupArray(&g_MissionQueueFrame);
        if ( LoadGame::LoadPointArray(&g_MissionQueueFrame, (int)pStm) < 0 )
          return 0;
        Stream::FlushAndReset(&g_abs_87F5D8);
        if ( LoadGame::DeserializePointerArrays(&g_abs_87F5D8, (int)pStm) < 0 )
          return 0;
        if ( Stream::ReadOLEObjects(pStm) < 0 )
          return 0;
        if ( Stream::ReadOLEObjects(pStm) < 0 )
          return 0;
        if ( g_abs_A8B238[0] == 5 )
        {
          Debug::Log();
          if ( !LoadGame::LoadBlock300(g_abs_A8B250, (int)pStm) )
          {
            Debug::Log();
            return 0;
          }
        }
        if ( LoadGame::RestoreAudioState(pStm) < 0 )
          return 0;
        if ( LoadGame::LoadMagicAndAudio(pStm) < 0 )
          return 0;
        if ( LoadGame_Start((int)pStm) < 0 )
          return 0;
        MapClass::MarkForRedraw(&g_abs_87F7E8, 2);
        if ( !g_abs_A8B238[0] )
          g_abs_ABCE08 = 1;
        return 1;
      }
    }
  }
  return result;

}
} // namespace gamemd

// 0x69B5B0
namespace gamemd {
int LoadGame::LoadBlock300(int a2)
{

  int v2; // esi
  int v4; // eax
  bool result; // al

  v2 = a2; /*0x69b5b1*/
  result = 0; /*0x69b5f3*/
  if ( a2 ) /*0x69b5ba*/
  {
    if ( (*(int (**)(int, int *, int, unsigned int))(*(unsigned int *)a2 + 12))(a2, &a2, 4, 0) >= 0 && a2 == 300 ) /*0x69b5d7*/
    {
      v4 = (*(int (**)(int, unsigned int *, int, unsigned int))(*(unsigned int *)v2 + 12))(v2, this, 300, 0); /*0x69b5e4*/
      *((unsigned int *)this + 1) = -1; /*0x69b5e9*/
      if ( v4 >= 0 ) /*0x69b5f0*/
        return 1; /*0x69b5ba*/
    }
  }
  return result; /*0x69b5f2*/

}
} // namespace gamemd
// 0x751710
namespace gamemd {
int LoadGame::RestoreAudioState()
{

  void *v1; // edi
  int *Next; // esi
  int NextAlt; // ebx
  int result; // eax
  int v5; // ecx
  int v6; // ebx
  int v7; // ebp
  int *v8; // eax
  int *v9; // esi
  int v10; // ebx
  int v11; // eax
  int v13; // [esp+24h] [ebp-2Ch]
  int v14; // [esp+28h] [ebp-28h] BYREF
  int v15; // [esp+2Ch] [ebp-24h]
  int v16; // [esp+30h] [ebp-20h]
  int v17; // [esp+3Ch] [ebp-14h]
  unsigned int v18[4]; // [esp+40h] [ebp-10h] BYREF

  v1 = this; /*0x751717*/
  Next = (int *)AudioQueue::GetNext(g_abs_B1D320); /*0x751727*/
  if ( Next ) /*0x75172b*/
  {
    do /*0x751763*/
    {
      NextAlt = AudioQueue::GetNextAlt(Next); /*0x751737*/
      AudioController::Stop(Next + 3); /*0x751739*/
      LinkedList::Init((unsigned int **)Next); /*0x751740*/
      PushFrontLinkedListAlt(g_abs_B1D3A4, (int)Next); /*0x75174d*/
      Next = (int *)NextAlt; /*0x751758*/
      --g_abs_B1D3A8; /*0x75175d*/
    }
    while ( NextAlt ); /*0x751763*/
  }
  AudioMixer::Shutdown(); /*0x751765*/
  result = (*(int (**)(void *, int *, int, unsigned int))(*(unsigned int *)v1 + 12))(v1, &v14, 4, 0); /*0x751776*/
  if ( result >= 0 ) /*0x75177b*/
  {
    v13 = 0; /*0x751785*/
    if ( v14 > 0 ) /*0x75178f*/
    {
      while ( 1 ) /*0x7517a1*/
      {
        result = (*(int (**)(void *, unsigned int *, int, unsigned int))(*(unsigned int *)v1 + 12))(v1, v18, 16, 0); /*0x7517a1*/
        v16 = result; /*0x7517a6*/
        if ( result < 0 ) /*0x7517aa*/
          break; /*0x7517aa*/
        if ( v18[0] != -1 && v18[0] < g_abs_B1D388 && v18[0] >= 0 ) /*0x7517cb*/
        {
          v5 = **((unsigned int **)g_abs_B1D37C + v18[0]); /*0x7517da*/
          if ( v5 ) /*0x7517de*/
          {
            if ( AudioMixer::SetVolume(v5) ) /*0x7517e4*/
            {
              v6 = v18[1]; /*0x7517f9*/
              v7 = v18[2]; /*0x7517fd*/
              v17 = v18[3]; /*0x751803*/
              v15 = v18[0]; /*0x751807*/
              if ( v18[0] >= 0 ) /*0x75180b*/
              {
                v8 = LinkedList::Next((int **)g_abs_B1D3A4); /*0x751813*/
                v9 = v8; /*0x751818*/
                if ( v8 ) /*0x75181c*/
                {
                  AudioController::Init(v8 + 3); /*0x751823*/
                  DListNode::InitEmpty(v9); /*0x75182a*/
                  v9[12] = 0; /*0x751831*/
                  v9[11] = 0; /*0x75183a*/
                  v9[8] = v6; /*0x75183d*/
                  v10 = v17; /*0x75183f*/
                  v9[9] = v7; /*0x751843*/
                  v9[10] = v10; /*0x751846*/
                  StartAudioControllerAt(v15, (int)(v9 + 8), (int)(v9 + 3)); /*0x75184d*/
                  InsertAfterDListNode((int)g_abs_B1D320, v9); /*0x751859*/
                  v11 = ++g_abs_B1D3A8; /*0x751869*/
                  if ( g_abs_B1D3A8 > g_abs_B1D3AC ) /*0x751871*/
                    g_abs_B1D3AC = v11; /*0x751873*/
                  v1 = this; /*0x751878*/
                }
              }
            }
          }
        }
        if ( ++v13 >= v14 ) /*0x75188b*/
          return v16; /*0x751891*/
      }
    }
  }
  return result; /*0x751895*/

}
} // namespace gamemd
// 0x7533F0
namespace gamemd {
int LoadGame::LoadMagicAndAudio()
{

  int result; // eax
  int v3; // [esp+30h] [ebp-10h] BYREF
  unsigned int v4[3]; // [esp+34h] [ebp-Ch] BYREF

  if ( g_abs_B1D4C4 ) /*0x7533fd*/
  {
    *(unsigned int *)(g_abs_B1D4C4 + 80) = 2; /*0x7533ff*/
    g_abs_B1D4C4 = 0; /*0x753406*/
  }
  if ( g_abs_B1D4CC ) /*0x753418*/
    Audio::Release(g_abs_B1D4CC); /*0x75341a*/
  ThemeClass::ClearQueues(); /*0x75341f*/
  int LoadGame::LoadMagicAndAudio(LoadGame *this)
  if ( result >= 0 && v3 == 1450145875 ) /*0x753443*/
  {
    int LoadGame::LoadMagicAndAudio(LoadGame *this)
    if ( result >= 0 ) /*0x75345a*/
    {
      while ( v3 != 1450145861 ) /*0x753466*/
      {
        if ( v3 != 1450145865 ) /*0x75346e*/
          return -2147467259; /*0x7534cb*/
        ( this, v4, 12, 0)
        if ( result >= 0 ) /*0x753481*/
        {
          if ( g_abs_B1D4CC && v4[0] >= 0 && v4[0] < g_abs_B1D4B0 ) /*0x75349a*/
            Audio_Load(*((unsigned int *)g_abs_B1D4A4 + v4[0]), v4[1], v4[2]); /*0x7534ae*/
          ( this, &v3, 4, 0)
          if ( result >= 0 ) /*0x7534c4*/
            continue; /*0x7534c4*/
        }
        return result; /*0x7534c4*/
      }
    }
  }
  return result; /*0x7534c6*/

}
} // namespace gamemd
// 0x54E7B0
namespace gamemd {
int LoadGame::LoadPointArray(int a2)
{

  int v3; // ebx
  int *v4; // edi
  int v5; // eax
  unsigned int *v6; // esi
  int v7; // ecx
  int v8; // eax
  int v9; // edx
  int v11; // [esp+28h] [ebp-8h] BYREF
  unsigned int *v12; // [esp+2Ch] [ebp-4h]
  int v13; // [esp+34h] [ebp+4h]

  v12 = this; /*0x54e7ba*/
  v3 = (*(int (**)(int, int *, int, unsigned int))(*(unsigned int *)a2 + 12))(a2, &v11, 4, 0); /*0x54e7cf*/
  if ( v3 >= 0 ) /*0x54e7d3*/
  {
    v13 = 0; /*0x54e7dd*/
    while ( v13 < v11 ) /*0x54e7e7*/
    {
      v4 = (int *)RA2_OPNEW(8u); /*0x54e7fa*/
      v3 = (*(int (**)(int, int *, int, unsigned int))(*(unsigned int *)a2 + 12))(a2, v4, 8, 0); /*0x54e805*/
      if ( v3 < 0 ) /*0x54e809*/
        break; /*0x54e809*/
      ObjectPtr::RegisterForTracking((int)&g_abs_B0C110, v4); /*0x54e811*/
      ObjectPtr::RegisterForTracking((int)&g_abs_B0C110, v4 + 1); /*0x54e81f*/
      v5 = v12[5]; /*0x54e828*/
      v6 = v12 + 3; /*0x54e82b*/
      if ( v12[7] >= v5 ) /*0x54e833*/
      {
        if ( !*((unsigned char *)v12 + 25) && v5 ) /*0x54e83e*/
          continue; /*0x54e83e*/
        v7 = v12[8]; /*0x54e840*/
        if ( v7 <= 0 || !(*(uint8_t (**)(unsigned int *, int, unsigned int))(*v6 + 8))(v12 + 3, v5 + v7, 0) ) /*0x54e850*/
          continue; /*0x54e850*/
      }
      v8 = v6[4]; /*0x54e857*/
      v9 = v6[1]; /*0x54e85a*/
      v6[4] = v8 + 1; /*0x54e860*/
      *(unsigned int *)(v9 + 4 * v8) = v4; /*0x54e863*/
      ++v13; /*0x54e871*/
    }
  }
  return v3; /*0x54e87b*/

}
} // namespace gamemd
// 0x721040
namespace gamemd {
int sub_721040(int a1)
{
  int v1; // esi
  int v2; // edi
  int v3; // esi
  int v5; // [esp+20h] [ebp-4h] BYREF

  v1 = a1; /*0x721042*/
  v2 = (*(int (__stdcall **)(int, int *, int, unsigned int))(*(unsigned int *)a1 + 12))(a1, &a1, 4, 0); /*0x721056*/
  if ( v2 >= 0 ) /*0x72105a*/
  {
    v2 = (*(int (__stdcall **)(int, int *, int, unsigned int))(*(unsigned int *)v1 + 12))(v1, &v5, 4, 0); /*0x72106f*/
    if ( v2 >= 0 ) /*0x721073*/
    {
      if ( byte_A8EBA5 ) /*0x721080*/
      {
        ThemeClass::Play(&unk_A83D10, a1); /*0x721090*/
        v3 = v5; /*0x72109a*/
        if ( byte_A8EC74 ) /*0x7210a0*/
        {
          if ( Audio::IsSoundEnabled() ) /*0x7210a6*/
          {
            if ( !byte_A8ED64 ) /*0x7210ba*/
            {
              dword_A83D18 = v3; /*0x7210bf*/
              if ( v3 != -1 && v3 != -2 && v3 != dword_A83D14 ) /*0x7210d2*/
              {
                Debug::Log(); /*0x7210da*/
                if ( dword_A83D3C ) /*0x7210ea*/
                {
                  if ( byte_A83D21 && !AudioSample::IsBuffering(dword_A83D3C) ) /*0x7210f5*/
                    Audio::Release((unsigned int *)dword_A83D3C); /*0x721104*/
                  if ( Audio::IsSoundPlaying((unsigned int *)dword_A83D3C) != 0 ) /*0x721116*/
                  {
                    if ( dword_A83D3C ) /*0x721125*/
                      ThemeClass::RequestBuffer((unsigned int *)dword_A83D3C); /*0x721127*/
                    byte_A83D21 = 1; /*0x72112c*/
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return v2; /*0x721135*/
}
} // namespace gamemd
