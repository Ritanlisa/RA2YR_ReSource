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

// 0x660840
int LoadGame::LoadTriggerEvents()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int v12; // [esp+20h] [ebp-8h] BYREF
  int v13; // [esp+24h] [ebp-4h] BYREF
  int v1 = g_TriggerEventState; /*0x660840*/
  int v2 = g_TriggerEventState - 1; /*0x66084d*/
  if ( g_TriggerEventState - 1 >= 0 ) /*0x660856*/
  {
    _DWORD * v4 = g_TriggerPool; /*0x660858*/
    do /*0x6608cb*/
    {
      void * v5 = (void *)v4[v2]; /*0x66085e*/
      if ( v5 ) /*0x660863*/
      {
        v12 = v4[v2]; /*0x660875*/
        int v6 = (*(int (__thiscall **)(int *, int *))(dword_B04DA8 + 16))(&dword_B04DA8, &v12); /*0x660879*/
        if ( v6 != -1 ) /*0x66087f*/
          LoadGame::RemoveItem(&dword_B04DA8, v6); /*0x660887*/
        __3_YAXPAX_Z(v5); /*0x66088d*/
        v4 = g_TriggerPool; /*0x660892*/
        v1 = g_TriggerEventState; /*0x660898*/
      }
      if ( v2 < v1 ) /*0x6608a3*/
      {
        --v1; /*0x6608a5*/
        int v7 = v2; /*0x6608a6*/
        for ( g_TriggerEventState = v1; v7 < g_TriggerEventState; ++v7 ) /*0x6608b0*/
        {
          v4[v7] = v4[v7 + 1]; /*0x6608b6*/
          v1 = g_TriggerEventState; /*0x6608b9*/
          v4 = g_TriggerPool; /*0x6608bf*/
        }
      }
      --v2; /*0x6608ca*/
    }
    while ( v2 >= 0 ); /*0x6608cb*/
  }
  if ( (*(int (__stdcall **)(void *, int *, int, _DWORD))(this->q00C)(this, &v13, 4, 0) < 0 ) /*0x6608dd*/
    return 0; /*0x6608e8*/
  int v9 = 0; /*0x6608ed*/
  if ( v13 > 0 ) /*0x6608f1*/
  {
    while ( 1 ) /*0x6608f5*/
    {
  _DWORD *v11; // eax
      _DWORD * v10 = __2_YAPAXI_Z(0x40u); /*0x6608f5*/
      if ( v10 ) /*0x6608ff*/
      {
        v12 = 0; /*0x660901*/
        v11 = Team_Load_65FB80(v10, -1, 0); /*0x660914*/
      }
      else
      {
        v11 = 0; /*0x66091b*/
      }
      if ( (*(int (__stdcall **)(void *, _DWORD *, int, _DWORD))(this->q00C)(this, v11, 64, 0) < 0 ) /*0x660929*/
        break; /*0x660929*/
      if ( ++v9 >= v13 ) /*0x660932*/
        return (*(int (__stdcall **)(void *, __int16 *, int, _DWORD))(this->q00C)(this, &word_B04D78, 4, 0) >= 0; /*0x660932*/
    }
    return 0; /*0x660929*/
  }
  return (*(int (__stdcall **)(void *, __int16 *, int, _DWORD))(this->q00C)(this, &word_B04D78, 4, 0) >= 0; /*0x6608df*/
}
}

// 0x660F10
int LoadGame::RemoveItem(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  AbstractClass *v2 = this->q010; /*0x660f10*/
  int v3 = a2; /*0x660f13*/
  if ( a2 >= v2 ) /*0x660f19*/
    return 0; /*0x660f3c*/
  int v4 = v2 - 1; /*0x660f1b*/
  this->q010 = v4; /*0x660f1e*/
  if ( a2 < v4 ) /*0x660f21*/
  {
    do /*0x660f34*/
    {
      ++v3; /*0x660f27*/
      *(_DWORD *)(this->q004 + 4 * v3 - 4) = *(_DWORD *)(this->q004 + 4 * v3); /*0x660f2b*/
    }
    while ( v3 < this->q010 ); /*0x660f34*/
  }
  return 1; /*0x660f39*/
}
}

// 0x67E730
int LoadGame::Start()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  char result; // al
  int *Viewport; // edx
  LPVOID ppvObj; // [esp+334h] [ebp-48h] BYREF
  LPVOID v66; // [esp+338h] [ebp-44h] BYREF
  ResetScenario();
  ScenarioClass::SaveLoad_Prefix_0((int)g_ScenarioClass_Instance, (int)this);
  g_GameActive = *((_BYTE *)g_ScenarioClass_Instance + 13730);
  result = MixFile::LoadSide(*((_DWORD *)g_ScenarioClass_Instance + 3374));
  if ( result )
  {
  int v69[4]; // [esp+35Ch] [ebp-20h] BYREF
    Viewport = Display::GetViewport(v69);
  _DWORD v67[4]; // [esp+33Ch] [ebp-40h] BYREF
    v67[0] = 0;
    int v4 = *Viewport;
    v67[1] = 0;
  int v70[4]; // [esp+36Ch] [ebp-10h] BYREF
    v70[0] = v4;
  _DWORD v68[4]; // [esp+34Ch] [ebp-30h] BYREF
    v68[0] = 0;
    int v5 = Viewport[1];
    v68[1] = 0;
    v70[1] = v5;
    int v6 = Viewport[2];
    v67[2] = 168;
    v70[2] = v6;
    int v7 = Viewport[3];
    v68[2] = v6;
    v70[3] = v7;
    v69[2] = v6;
    v67[3] = g_CreditsScreenConfig;
    v68[3] = g_CreditsScreenConfig;
    v69[3] = g_CreditsScreenConfig;
    v69[0] = 0;
    v69[1] = 0;
    AllocateSurfaceScreenSurfaces((int)&DSurface_WindowBounds, (int)v69, (int)v68, (int)v67, 0);
    TacticalClass::SetViewDimensions(v70);
    LoadGame::LoadBlock68(&DataGlobal_8A38E0, (int)this);
    LoadTheaterClassMIX(*((_DWORD *)g_ScenarioClass_Instance + 1174));
    RulesClass::SaveLoad_Prefix_0(&g_RulesClass_Instance->DetailMinFrameRateNormal, (int)this);
  int v64; // [esp+330h] [ebp-4Ch] BYREF
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))(this, &v64, 4, 0) < 0 )
      return 0;
    int v8 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(this, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v8 >= v64 )
          goto LABEL_6;
      }
      return 0;
    }
LABEL_6:
    MouseClass::LoadGameAssets(&DataGlobal_87F7E8.field_0, this);
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))(this, &v64, 4, 0) < 0 )
      return 0;
    int v9 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(this, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v9 >= v64 )
          goto LABEL_10;
      }
      return 0;
    }
LABEL_10:
    if ( Game::SerializeGameSaveState(this) < 0 )
      return 0;
    MapClass::BuildSubzones(&DataGlobal_87F7E8);
    LayerClass::Load(&g_GameConfigManager, this);
    if ( g_TacticalClass_Instance )
    {
      (*(void (__thiscall **)(LPPERSISTSTREAM, int))(*(_DWORD *)g_TacticalClass_Instance + 32))(g_TacticalClass_Instance, 1);
      g_TacticalClass_Instance = 0;
    }
    if ( OleLoadFromStream(this, &IID_IUnknown, &v66) < 0 )
      return 0;
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))(this, &v64, 4, 0) < 0 )
      return 0;
    int v10 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(this, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v10 >= v64 )
          goto LABEL_20;
      }
      return 0;
    }
LABEL_20:
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))(this, &v64, 4, 0) < 0 )
      return 0;
    int v11 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(this, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v11 >= v64 )
          goto LABEL_24;
      }
      return 0;
    }
LABEL_24:
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))(this, &v64, 4, 0) < 0 )
      return 0;
    int v12 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(this, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v12 >= v64 )
          goto LABEL_28;
      }
      return 0;
    }
LABEL_28:
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))(this, &v64, 4, 0) < 0 )
      return 0;
    int v13 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(this, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v13 >= v64 )
          goto LABEL_32;
      }
      return 0;
    }
LABEL_32:
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))(this, &v64, 4, 0) < 0 )
      return 0;
    int v14 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(this, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v14 >= v64 )
          goto LABEL_36;
      }
      return 0;
    }
LABEL_36:
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))(this, &v64, 4, 0) < 0 )
      return 0;
    int v15 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(this, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v15 >= v64 )
          goto LABEL_40;
      }
      return 0;
    }
LABEL_40:
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))(this, &v64, 4, 0) < 0 )
      return 0;
    int v16 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(this, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v16 >= v64 )
          goto LABEL_44;
      }
      return 0;
    }
LABEL_44:
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))(this, &v64, 4, 0) < 0 )
      return 0;
    int v17 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(this, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v17 >= v64 )
          goto LABEL_48;
      }
      return 0;
    }
LABEL_48:
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))(this, &v64, 4, 0) < 0 )
      return 0;
    int v18 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(this, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v18 >= v64 )
          goto LABEL_52;
      }
      return 0;
    }
LABEL_52:
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))(this, &v64, 4, 0) < 0 )
      return 0;
    int v19 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(this, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v19 >= v64 )
          goto LABEL_56;
      }
      return 0;
    }
LABEL_56:
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))(this, &v64, 4, 0) < 0 )
      return 0;
    int v20 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(this, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v20 >= v64 )
          goto LABEL_60;
      }
      return 0;
    }
LABEL_60:
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))(this, &v64, 4, 0) < 0 )
      return 0;
    int v21 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(this, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v21 >= v64 )
          goto LABEL_64;
      }
      return 0;
    }
LABEL_64:
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))(this, &v64, 4, 0) < 0 )
      return 0;
    int v22 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(this, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v22 >= v64 )
          goto LABEL_68;
      }
      return 0;
    }
LABEL_68:
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))(this, &v64, 4, 0) < 0 )
      return 0;
    int v23 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(this, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v23 >= v64 )
          goto LABEL_72;
      }
      return 0;
    }
LABEL_72:
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))(this, &v64, 4, 0) < 0 )
      return 0;
    int v24 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(this, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v24 >= v64 )
          goto LABEL_76;
      }
      return 0;
    }
LABEL_76:
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))(this, &v64, 4, 0) < 0 )
      return 0;
    int v25 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(this, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v25 >= v64 )
          goto LABEL_80;
      }
      return 0;
    }
LABEL_80:
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))(this, &v64, 4, 0) < 0 )
      return 0;
    int v26 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(this, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v26 >= v64 )
          goto LABEL_84;
      }
      return 0;
    }
LABEL_84:
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))(this, &v64, 4, 0) < 0 )
      return 0;
    int v27 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(this, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v27 >= v64 )
          goto LABEL_88;
      }
      return 0;
    }
LABEL_88:
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))(this, &v64, 4, 0) < 0 )
      return 0;
    int v28 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(this, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v28 >= v64 )
          goto LABEL_92;
      }
      return 0;
    }
LABEL_92:
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))(this, &v64, 4, 0) < 0 )
      return 0;
    int v29 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(this, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v29 >= v64 )
          goto LABEL_96;
      }
      return 0;
    }
LABEL_96:
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))(this, &v64, 4, 0) < 0 )
      return 0;
    int v30 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(this, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v30 >= v64 )
          goto LABEL_100;
      }
      return 0;
    }
LABEL_100:
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))(this, &v64, 4, 0) < 0 )
      return 0;
    int v31 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(this, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v31 >= v64 )
          goto LABEL_104;
      }
      return 0;
    }
LABEL_104:
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))(this, &v64, 4, 0) < 0 )
      return 0;
    int v32 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(this, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v32 >= v64 )
          goto LABEL_108;
      }
      return 0;
    }
LABEL_108:
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))(this, &v64, 4, 0) < 0 )
      return 0;
    int v33 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(this, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v33 >= v64 )
          goto LABEL_112;
      }
      return 0;
    }
LABEL_112:
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))(this, &v64, 4, 0) < 0 )
      return 0;
    int v34 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(this, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v34 >= v64 )
          goto LABEL_116;
      }
      return 0;
    }
LABEL_116:
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))(this, &v64, 4, 0) < 0 )
      return 0;
    int v35 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(this, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v35 >= v64 )
          goto LABEL_120;
      }
      return 0;
    }
LABEL_120:
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))(this, &v64, 4, 0) < 0 )
      return 0;
    int v36 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(this, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v36 >= v64 )
          goto LABEL_124;
      }
      return 0;
    }
LABEL_124:
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))(this, &v64, 4, 0) < 0 )
      return 0;
    int v37 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(this, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v37 >= v64 )
          goto LABEL_128;
      }
      return 0;
    }
LABEL_128:
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))(this, &v64, 4, 0) < 0 )
      return 0;
    int v38 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(this, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v38 >= v64 )
          goto LABEL_132;
      }
      return 0;
    }
LABEL_132:
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))(this, &v64, 4, 0) < 0 )
      return 0;
    int v39 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(this, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v39 >= v64 )
          goto LABEL_136;
      }
      return 0;
    }
LABEL_136:
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))(this, &v64, 4, 0) < 0 )
      return 0;
    int v40 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(this, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v40 >= v64 )
          goto LABEL_140;
      }
      return 0;
    }
LABEL_140:
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))(this, &v64, 4, 0) < 0 )
      return 0;
    int v41 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(this, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v41 >= v64 )
          goto LABEL_144;
      }
      return 0;
    }
LABEL_144:
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))(this, &v64, 4, 0) < 0 )
      return 0;
    int v42 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(this, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v42 >= v64 )
          goto LABEL_148;
      }
      return 0;
    }
LABEL_148:
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))(this, &v64, 4, 0) < 0 )
      return 0;
    int v43 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(this, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v43 >= v64 )
          goto LABEL_152;
      }
      return 0;
    }
LABEL_152:
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))(this, &v64, 4, 0) < 0 )
      return 0;
    int v44 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(this, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v44 >= v64 )
          goto LABEL_156;
      }
      return 0;
    }
LABEL_156:
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))(this, &v64, 4, 0) < 0 )
      return 0;
    int v45 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(this, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v45 >= v64 )
          goto LABEL_160;
      }
      return 0;
    }
LABEL_160:
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))(this, &v64, 4, 0) < 0 )
      return 0;
    int v46 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(this, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v46 >= v64 )
          goto LABEL_164;
      }
      return 0;
    }
LABEL_164:
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))(this, &v64, 4, 0) < 0 )
      return 0;
    int v47 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(this, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v47 >= v64 )
          goto LABEL_168;
      }
      return 0;
    }
LABEL_168:
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))(this, &v64, 4, 0) < 0 )
      return 0;
    int v48 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(this, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v48 >= v64 )
          goto LABEL_172;
      }
      return 0;
    }
LABEL_172:
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))(this, &v64, 4, 0) < 0 )
      return 0;
    int v49 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(this, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v49 >= v64 )
          goto LABEL_176;
      }
      return 0;
    }
LABEL_176:
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))(this, &v64, 4, 0) < 0 )
      return 0;
    int v50 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(this, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v50 >= v64 )
          goto LABEL_180;
      }
      return 0;
    }
LABEL_180:
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))(this, &v64, 4, 0) < 0 )
      return 0;
    int v51 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(this, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v51 >= v64 )
          goto LABEL_184;
      }
      return 0;
    }
LABEL_184:
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))(this, &v64, 4, 0) < 0 )
      return 0;
    int v52 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(this, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v52 >= v64 )
          goto LABEL_188;
      }
      return 0;
    }
LABEL_188:
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))(this, &v64, 4, 0) < 0 )
      return 0;
    int v53 = 0;
    if ( v64 > 0 )
    {
      while ( OleLoadFromStream(this, &IID_IUnknown, &ppvObj) >= 0 )
      {
        if ( ++v53 >= v64 )
          goto LABEL_192;
      }
      return 0;
    }
LABEL_192:
    DataGlobal_A83D60 = 0;
    VectorClass_ptr_SuperClass::Remove((int)&SuperClass_ShowTimers);
    int v54 = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))(this, &v64, 4, 0);
    if ( v54 < 0 )
      return 0;
    if ( v64 > 0 )
    {
  int v57; // eax
      int v55 = 0;
      while ( 1 )
      {
        v54 = (*(int (__stdcall **)(LPSTREAM, LPVOID *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))(
                this,
                &ppvObj,
                4,
                0);
        if ( v54 < 0 )
          break;
        if ( DataGlobal_A83D60 < DataGlobal_A83D58
          || (DataGlobal_A83D5D || !DataGlobal_A83D58)
          && DataGlobal_A83D64 > 0
          && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(SuperClass_ShowTimers + 8))(
               &SuperClass_ShowTimers,
               DataGlobal_A83D64 + DataGlobal_A83D58,
               0) )
        {
          int v56 = DataGlobal_A83D60++;
          *((_DWORD *)DataGlobal_A83D54 + v56) = ppvObj;
        }
        v57 = v64;
        if ( ++v55 >= v64 )
          goto LABEL_205;
      }
      v57 = v64;
LABEL_205:
      int v58 = 0;
      if ( v57 > 0 )
      {
        do
          ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)DataGlobal_A83D54 + v58++);
        while ( v58 < v64 );
      }
    }
    if ( v54 < 0 )
      return 0;
    unk_8B41F0 = 0;
    VectorClass_Building::Set((int)&dword_8B41E0);
    int v59 = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))(this, &v64, 4, 0);
    if ( v59 < 0 )
      return 0;
    if ( v64 > 0 )
    {
  int v62; // eax
      int v60 = 0;
      while ( 1 )
      {
        v59 = (*(int (__stdcall **)(LPSTREAM, LPVOID *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))(
                this,
                &ppvObj,
                4,
                0);
        if ( v59 < 0 )
          break;
        if ( unk_8B41F0 < unk_8B41E8
          || (unk_8B41ED || !unk_8B41E8)
          && unk_8B41F4 > 0
          && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_8B41E0 + 8))(
               &dword_8B41E0,
               unk_8B41F4 + unk_8B41E8,
               0) )
        {
          int v61 = unk_8B41F0++;
          *((_DWORD *)unk_8B41E4 + v61) = ppvObj;
        }
        v62 = v64;
        if ( ++v60 >= v64 )
          goto LABEL_222;
      }
      v62 = v64;
LABEL_222:
      int v63 = 0;
      if ( v62 > 0 )
      {
        do
          ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)unk_8B41E4 + v63++);
        while ( v63 < v64 );
      }
    }
    if ( v59 < 0 )
      return 0;
    if ( Stream::ReadOLEObjects(this) < 0 )
      return 0;
    if ( Stream::ReadOLEObjects(this) < 0 )
      return 0;
    if ( Stream::ReadOLEObjects(this) < 0 )
      return 0;
    if ( Stream::ReadOLEObjects(this) < 0 )
      return 0;
    if ( Stream::ReadOLEObjects(this) < 0 )
      return 0;
    result = LoadVeinholeMonsters((int *)this->__pad_0);
    if ( result )
    {
      result = LoadGame::LoadTriggerEvents(this);
      if ( result )
      {
        if ( Stream::ReadOLEObjects(this) < 0 )
          return 0;
        if ( Stream::ReadOLEObjects(this) < 0 )
          return 0;
        if ( Stream::ReadOLEObjects(this) < 0 )
          return 0;
        if ( Stream::ReadOLEObjects(this) < 0 )
          return 0;
        if ( Stream::ReadOLEObjects(this) < 0 )
          return 0;
        if ( Stream::ReadOLEObjects(this) < 0 )
          return 0;
        if ( Stream::ReadOLEObjects(this) < 0 )
          return 0;
        LoadGame::ClearAllSlots(g_CellClassManager);
        if ( LoadGame::LoadIteratedData((char *)g_CellClassManager, (int)this) < 0 )
          return 0;
        LoadGame::CleanupArray(&g_MissionQueueFrame);
        if ( LoadGame::LoadPointArray(&g_MissionQueueFrame, (int)this) < 0 )
          return 0;
        Stream::FlushAndReset(&DataGlobal_87F5D8);
        if ( LoadGame::DeserializePointerArrays(&DataGlobal_87F5D8, (int)this) < 0 )
          return 0;
        if ( Stream::ReadOLEObjects(this) < 0 )
          return 0;
        if ( Stream::ReadOLEObjects(this) < 0 )
          return 0;
        if ( g_GameMode_Current[0] == 5 )
        {
          Debug::Log();
          if ( !LoadGame::LoadBlock300(g_ScenarioFlags, (int)this) )
          {
            Debug::Log();
            return 0;
          }
        }
        if ( LoadGame::RestoreAudioState(this) < 0 )
          return 0;
        if ( LoadGame::LoadMagicAndAudio(this) < 0 )
          return 0;
        if ( LoadGame_Start((int)this) < 0 )
          return 0;
        MapClass::MarkForRedraw(&DataGlobal_87F7E8, 2);
        if ( !g_GameMode_Current[0] )
          DataGlobal_ABCE08 = 1;
        return 1;
      }
    }
  }
  return result;
}
}

// 0x69B5B0
int LoadGame::LoadBlock300(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  bool result; // al

  int v2 = a2; /*0x69b5b1*/
  result = 0; /*0x69b5f3*/
  if ( a2 ) /*0x69b5ba*/
  {
    if ( (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &a2, 4, 0) >= 0 && a2 == 300 ) /*0x69b5d7*/
    {
      int v4 = (*(int (__stdcall **)(int, _DWORD *, int, _DWORD))(*(_DWORD *)v2 + 12))(v2, this, 300, 0); /*0x69b5e4*/
      this->q004 = -1; /*0x69b5e9*/
      if ( v4 >= 0 ) /*0x69b5f0*/
        return 1; /*0x69b5ba*/
    }
  }
  return result; /*0x69b5f2*/
}
}

// 0x751710
int LoadGame::RestoreAudioState()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int *Next; // esi
  int NextAlt; // ebx
  int result; // eax

  LoadGame *v1 = this; /*0x751717*/
  Next = (int *)AudioQueue::GetNext(DataGlobal_B1D320); /*0x751727*/
  if ( Next ) /*0x75172b*/
  {
    do /*0x751763*/
    {
      NextAlt = AudioQueue::GetNextAlt(Next); /*0x751737*/
      AudioController::Stop(Next + 3); /*0x751739*/
      LinkedList::Init((_DWORD **)Next); /*0x751740*/
      PushFrontLinkedListAlt(DataGlobal_B1D3A4, (int)Next); /*0x75174d*/
      Next = (int *)NextAlt; /*0x751758*/
      --DataGlobal_B1D3A8; /*0x75175d*/
    }
    while ( NextAlt ); /*0x751763*/
  }
  AudioMixer::Shutdown(); /*0x751765*/
  int v14; // [esp+28h] [ebp-28h] BYREF
  result = v1->vt_slot_12(&v14, 4, 0); /*0x751776*/
  if ( result >= 0 ) /*0x75177b*/
  {
    int v13 = 0; /*0x751785*/
    if ( v14 > 0 ) /*0x75178f*/
    {
      while ( 1 ) /*0x7517a1*/
      {
  _DWORD v18[4]; // [esp+40h] [ebp-10h] BYREF
        result = v1->vt_slot_12(v18, 16, 0); /*0x7517a1*/
        int v16 = result; /*0x7517a6*/
        if ( result < 0 ) /*0x7517aa*/
          break; /*0x7517aa*/
        if ( v18[0] != -1 && v18[0] < g_VocPlayState && v18[0] >= 0 ) /*0x7517cb*/
        {
          int v5 = **((_DWORD **)g_VocAudioConfig + v18[0]); /*0x7517da*/
          if ( v5 ) /*0x7517de*/
          {
            if ( AudioMixer::SetVolume(v5) ) /*0x7517e4*/
            {
              int v6 = v18[1]; /*0x7517f9*/
              int v7 = v18[2]; /*0x7517fd*/
              int v17 = v18[3]; /*0x751803*/
              int v15 = v18[0]; /*0x751807*/
              if ( v18[0] >= 0 ) /*0x75180b*/
              {
                int * v8 = LinkedList::Next((int **)DataGlobal_B1D3A4); /*0x751813*/
                int * v9 = v8; /*0x751818*/
                if ( v8 ) /*0x75181c*/
                {
                  AudioController::Init(v8 + 3); /*0x751823*/
                  DListNode::InitEmpty(v9); /*0x75182a*/
                  v9[12] = 0; /*0x751831*/
                  v9[11] = 0; /*0x75183a*/
                  v9[8] = v6; /*0x75183d*/
                  int v10 = v17; /*0x75183f*/
                  v9[9] = v7; /*0x751843*/
                  v9[10] = v10; /*0x751846*/
                  StartAudioControllerAt(v15, (int)(v9 + 8), (int)(v9 + 3)); /*0x75184d*/
                  InsertAfterDListNode((int)DataGlobal_B1D320, v9); /*0x751859*/
                  int v11 = ++DataGlobal_B1D3A8; /*0x751869*/
                  if ( DataGlobal_B1D3A8 > DataGlobal_B1D3AC ) /*0x751871*/
                    DataGlobal_B1D3AC = v11; /*0x751873*/
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
}

// 0x7533F0
int LoadGame::LoadMagicAndAudio()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax

  if ( DataGlobal_B1D4C4 ) /*0x7533fd*/
  {
    *(_DWORD *)(DataGlobal_B1D4C4 + 80) = 2; /*0x7533ff*/
    DataGlobal_B1D4C4 = 0; /*0x753406*/
  }
  if ( g_InfantryDrawState ) /*0x753418*/
    Audio::Release(g_InfantryDrawState); /*0x75341a*/
  ThemeClass::ClearQueues(); /*0x75341f*/
  int v3; // [esp+30h] [ebp-10h] BYREF
  result = (*(int (__stdcall **)(void *, int *, int, _DWORD))(this->q00C)(this, &v3, 4, 0); /*0x753430*/
  if ( result >= 0 && v3 == 1450145875 ) /*0x753443*/
  {
    result = (*(int (__stdcall **)(void *, int *, int, _DWORD))(this->q00C)(this, &v3, 4, 0); /*0x753455*/
    if ( result >= 0 ) /*0x75345a*/
    {
      while ( v3 != 1450145861 ) /*0x753466*/
      {
        if ( v3 != 1450145865 ) /*0x75346e*/
          return -2147467259; /*0x7534cb*/
  _DWORD v4[3]; // [esp+34h] [ebp-Ch] BYREF
        result = (*(int (__stdcall **)(void *, _DWORD *, int, _DWORD))(this->q00C)(this, v4, 12, 0); /*0x75347c*/
        if ( result >= 0 ) /*0x753481*/
        {
          if ( g_InfantryDrawState && v4[0] >= 0 && v4[0] < g_InfantrySelectState ) /*0x75349a*/
            Audio_Load(*((_DWORD *)g_InfantryRenderPool + v4[0]), v4[1], v4[2]); /*0x7534ae*/
          result = (*(int (__stdcall **)(void *, int *, int, _DWORD))(this->q00C)(this, &v3, 4, 0); /*0x7534bf*/
          if ( result >= 0 ) /*0x7534c4*/
            continue; /*0x7534c4*/
        }
        return result; /*0x7534c4*/
      }
    }
  }
  return result; /*0x7534c6*/
}
}

// 0x54E7B0
int LoadGame::LoadPointArray(int a2)
{
{
    int v3;
    int *v4;
    int v5;
    int *v6;
    int v7;
    int v8;
    int v9;
    int v11;
    int *v12;
    int v13;
    v12 = this;
    v3 = (*(int (__stdcall **)(int, int *, int, int))(*(int *)(a2) + 12))(a2, &v11, 4, 0);
    if ( v3 >= 0 )
  {
    v13 = 0;
    while ( v13 < v11 )
    {
    v4 = (int *)__2_YAPAXI_Z(8u);
    v3 = (*(int (__stdcall **)(int, int *, int, int))(*(int *)(a2) + 12))(a2, v4, 8, 0);
    if ( v3 < 0 )
    break;
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v4);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v4 + 1);
    v5 = v12[5];
    v6 = v12 + 3;
    if ( v12[7] >= v5 )
      {
    if ( !*((char *)(v12) + 25) && v5 )
    continue;
    v7 = v12[8];
    if ( v7 <= 0 || !(*(unsigned char (__thiscall **)(int *, int, int))(*v6 + 8))(v12 + 3, v5 + v7, 0) )
    continue;
      }
    v8 = v6[4];
    v9 = v6[1];
    v6[4] = v8 + 1;
    *(int *)(v9 + 4 * v8) = v4;
    ++v13;
    }
  }
    return v3;
}
}

// 0x721040
namespace gamemd {
int sub_721040(int a1)
{
{
    int v1;
    int v2;
    int v3;
    int v5;
    v1 = a1;
    v2 = (*(int (__stdcall **)(int, int *, int, int))(*(int *)(a1) + 12))(a1, &a1, 4, 0);
    if ( v2 >= 0 )
  {
    v2 = (*(int (__stdcall **)(int, int *, int, int))(*(int *)(v1) + 12))(v1, &v5, 4, 0);
    if ( v2 >= 0 )
    {
    if ( DataGlobal_A8EBA5 )
      {
    ThemeClass::Play(&g_BuildingTypeClass_Count, a1);
    v3 = v5;
    if ( g_ThemeMIXLoaded )
        {
    if ( Audio::IsSoundEnabled() )
          {
    if ( !DataGlobal_A8ED64 )
            {
    DataGlobal_A83D18 = v3;
    if ( v3 != -1 && v3 != -2 && v3 != DataGlobal_A83D14 )
              {
    Debug::Log();
    if ( DataGlobal_A83D3C )
                {
    if ( DataGlobal_A83D21 && !AudioSample::IsBuffering(DataGlobal_A83D3C) )
    Audio::Release((int *)DataGlobal_A83D3C);
    if ( Audio::IsSoundPlaying((int *)DataGlobal_A83D3C) != 0 )
                  {
    if ( DataGlobal_A83D3C )
    ThemeClass::RequestBuffer((int *)DataGlobal_A83D3C);
    DataGlobal_A83D21 = 1;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
    return v2;
}
}
} // namespace gamemd
