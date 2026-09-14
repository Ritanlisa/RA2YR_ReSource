// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x660840
bool LoadGame::LoadTriggerEvents()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __thiscall sub_660840(void *this)
{
  int v1; // edx
  int v2; // edi
  _DWORD *v4; // ecx
  void *v5; // esi
  int v6; // eax
  int v7; // eax
  int v9; // esi
  _DWORD *v10; // eax
  _DWORD *v11; // eax
  int v12; // [esp+20h] [ebp-8h] BYREF
  int v13; // [esp+24h] [ebp-4h] BYREF

  v1 = g_TriggerEventState; /*0x660840*/
  v2 = g_TriggerEventState - 1; /*0x66084d*/
  if ( g_TriggerEventState - 1 >= 0 ) /*0x660856*/
  {
    v4 = g_TriggerPool; /*0x660858*/
    do /*0x6608cb*/
    {
      v5 = (void *)v4[v2]; /*0x66085e*/
      if ( v5 ) /*0x660863*/
      {
        v12 = v4[v2]; /*0x660875*/
        v6 = (*(int (__thiscall **)(int *, int *))(dword_B04DA8 + 16))(&dword_B04DA8, &v12); /*0x660879*/
        if ( v6 != -1 ) /*0x66087f*/
          LoadGame::RemoveItem(&dword_B04DA8, v6); /*0x660887*/
        __3_YAXPAX_Z(v5); /*0x66088d*/
        v4 = g_TriggerPool; /*0x660892*/
        v1 = g_TriggerEventState; /*0x660898*/
      }
      if ( v2 < v1 ) /*0x6608a3*/
      {
        --v1; /*0x6608a5*/
        v7 = v2; /*0x6608a6*/
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
  if ( (*(int (__stdcall **)(void *, int *, int, _DWORD))(*(_DWORD *)this + 12))(this, &v13, 4, 0) < 0 ) /*0x6608dd*/
    return 0; /*0x6608e8*/
  v9 = 0; /*0x6608ed*/
  if ( v13 > 0 ) /*0x6608f1*/
  {
    while ( 1 ) /*0x6608f5*/
    {
      v10 = __2_YAPAXI_Z(0x40u); /*0x6608f5*/
      if ( v10 ) /*0x6608ff*/
      {
        v12 = 0; /*0x660901*/
        v11 = Team_Load_65FB80(v10, -1, 0); /*0x660914*/
      }
      else
      {
        v11 = 0; /*0x66091b*/
      }
      if ( (*(int (__stdcall **)(void *, _DWORD *, int, _DWORD))(*(_DWORD *)this + 12))(this, v11, 64, 0) < 0 ) /*0x660929*/
        break; /*0x660929*/
      if ( ++v9 >= v13 ) /*0x660932*/
        return (*(int (__stdcall **)(void *, __int16 *, int, _DWORD))(*(_DWORD *)this + 12))(this, &word_B04D78, 4, 0) >= 0; /*0x660932*/
    }
    return 0; /*0x660929*/
  }
  return (*(int (__stdcall **)(void *, __int16 *, int, _DWORD))(*(_DWORD *)this + 12))(this, &word_B04D78, 4, 0) >= 0; /*0x6608df*/
}
}

// 0x660F10
char LoadGame::RemoveItem(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_660F10(_DWORD *this, int a2)
{
  int v2; // edx
  int v3; // eax
  int v4; // edx

  v2 = *(this + 4); /*0x660f10*/
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
      *(_DWORD *)(*(this + 1) + 4 * v3 - 4) = *(_DWORD *)(*(this + 1) + 4 * v3); /*0x660f2b*/
    }
    while ( v3 < *(this + 4) ); /*0x660f34*/
  }
  return 1; /*0x660f39*/
}
}

// 0x67E730
char LoadGame::Start()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall LoadGame::Start(LPSTREAM this)
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
  _DWORD v67[4]; // [esp+33Ch] [ebp-40h] BYREF
  _DWORD v68[4]; // [esp+34Ch] [ebp-30h] BYREF
  int v69[4]; // [esp+35Ch] [ebp-20h] BYREF
  int v70[4]; // [esp+36Ch] [ebp-10h] BYREF

  ResetScenario();
  ScenarioClass::SaveLoad_Prefix_0((int)MEMORY[0xA8B230], (int)this);
  MEMORY[0xA8ED9C] = *((_BYTE *)MEMORY[0xA8B230] + 13730);
  result = MixFile::LoadSide(*((_DWORD *)MEMORY[0xA8B230] + 3374));
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
    v67[3] = MEMORY[0x886FBC];
    v68[3] = MEMORY[0x886FBC];
    v69[3] = MEMORY[0x886FBC];
    v69[0] = 0;
    v69[1] = 0;
    AllocateSurfaceScreenSurfaces((int)&MEMORY[0x886FB0], (int)v69, (int)v68, (int)v67, 0);
    TacticalClass::SetViewDimensions(v70);
    LoadGame::LoadBlock68(&MEMORY[0x8A38E0], (int)this);
    LoadTheaterClassMIX(*((_DWORD *)MEMORY[0xA8B230] + 1174));
    RulesClass::SaveLoad_Prefix_0(&MEMORY[0x8871E0]->DetailMinFrameRateNormal, (int)this);
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))(this, &v64, 4, 0) < 0 )
      return 0;
    v8 = 0;
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
    MouseClass::LoadGameAssets(&MEMORY[0x87F7E8].field_0, this);
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))(this, &v64, 4, 0) < 0 )
      return 0;
    v9 = 0;
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
    MapClass::BuildSubzones(&MEMORY[0x87F7E8]);
    LayerClass::Load(&MEMORY[0x87F778], this);
    if ( MEMORY[0x887324] )
    {
      (*(void (__thiscall **)(LPPERSISTSTREAM, int))(*(_DWORD *)MEMORY[0x887324] + 32))(MEMORY[0x887324], 1);
      MEMORY[0x887324] = 0;
    }
    if ( OleLoadFromStream(this, &IID_IUnknown, &v66) < 0 )
      return 0;
    if ( (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))(this, &v64, 4, 0) < 0 )
      return 0;
    v10 = 0;
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
    v11 = 0;
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
    v12 = 0;
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
    v13 = 0;
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
    v14 = 0;
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
    v15 = 0;
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
    v16 = 0;
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
    v17 = 0;
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
    v18 = 0;
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
    v19 = 0;
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
    v20 = 0;
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
    v21 = 0;
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
    v22 = 0;
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
    v23 = 0;
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
    v24 = 0;
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
    v25 = 0;
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
    v26 = 0;
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
    v27 = 0;
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
    v28 = 0;
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
    v29 = 0;
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
    v30 = 0;
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
    v31 = 0;
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
    v32 = 0;
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
    v33 = 0;
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
    v34 = 0;
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
    v35 = 0;
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
    v36 = 0;
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
    v37 = 0;
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
    v38 = 0;
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
    v39 = 0;
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
    v40 = 0;
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
    v41 = 0;
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
    v42 = 0;
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
    v43 = 0;
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
    v44 = 0;
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
    v45 = 0;
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
    v46 = 0;
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
    v47 = 0;
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
    v48 = 0;
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
    v49 = 0;
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
    v50 = 0;
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
    v51 = 0;
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
    v52 = 0;
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
    v53 = 0;
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
    MEMORY[0xA83D60] = 0;
    VectorClass_ptr_SuperClass::Remove((int)&MEMORY[0xA83D50]);
    v54 = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))(this, &v64, 4, 0);
    if ( v54 < 0 )
      return 0;
    if ( v64 > 0 )
    {
      v55 = 0;
      while ( 1 )
      {
        v54 = (*(int (__stdcall **)(LPSTREAM, LPVOID *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))(
                this,
                &ppvObj,
                4,
                0);
        if ( v54 < 0 )
          break;
        if ( MEMORY[0xA83D60] < MEMORY[0xA83D58]
          || (MEMORY[0xA83D5D] || !MEMORY[0xA83D58])
          && MEMORY[0xA83D64] > 0
          && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0xA83D50] + 8))(
               &MEMORY[0xA83D50],
               MEMORY[0xA83D64] + MEMORY[0xA83D58],
               0) )
        {
          v56 = MEMORY[0xA83D60]++;
          *((_DWORD *)MEMORY[0xA83D54] + v56) = ppvObj;
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
          ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)MEMORY[0xA83D54] + v58++);
        while ( v58 < v64 );
      }
    }
    if ( v54 < 0 )
      return 0;
    unk_8B41F0 = 0;
    VectorClass_Building::Set((int)&dword_8B41E0);
    v59 = (*(int (__stdcall **)(LPSTREAM, int *, int, _DWORD))(*(_DWORD *)this->__pad_0 + 12))(this, &v64, 4, 0);
    if ( v59 < 0 )
      return 0;
    if ( v64 > 0 )
    {
      v60 = 0;
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
          v61 = unk_8B41F0++;
          *((_DWORD *)unk_8B41E4 + v61) = ppvObj;
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
          ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], (int *)unk_8B41E4 + v63++);
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
        LoadGame::ClearAllSlots(MEMORY[0x887888]);
        if ( LoadGame::LoadIteratedData((char *)MEMORY[0x887888], (int)this) < 0 )
          return 0;
        LoadGame::CleanupArray(&g_MissionQueueFrame);
        if ( LoadGame::LoadPointArray(&g_MissionQueueFrame, (int)this) < 0 )
          return 0;
        Stream::FlushAndReset(&MEMORY[0x87F5D8]);
        if ( LoadGame::DeserializePointerArrays(&MEMORY[0x87F5D8], (int)this) < 0 )
          return 0;
        if ( Stream::ReadOLEObjects(this) < 0 )
          return 0;
        if ( Stream::ReadOLEObjects(this) < 0 )
          return 0;
        if ( MEMORY[0xA8B238][0] == 5 )
        {
          Debug::Log();
          if ( !LoadGame::LoadBlock300(MEMORY[0xA8B250], (int)this) )
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
        MapClass::MarkForRedraw(&MEMORY[0x87F7E8], 2);
        if ( !MEMORY[0xA8B238][0] )
          MEMORY[0xABCE08] = 1;
        return 1;
      }
    }
  }
  return result;
}
}

// 0x69B5B0
bool LoadGame::LoadBlock300(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __thiscall sub_69B5B0(_DWORD *this, int a2)
{
  int v2; // esi
  int v4; // eax
  bool result; // al

  v2 = a2; /*0x69b5b1*/
  result = 0; /*0x69b5f3*/
  if ( a2 ) /*0x69b5ba*/
  {
    if ( (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &a2, 4, 0) >= 0 && a2 == 300 ) /*0x69b5d7*/
    {
      v4 = (*(int (__stdcall **)(int, _DWORD *, int, _DWORD))(*(_DWORD *)v2 + 12))(v2, this, 300, 0); /*0x69b5e4*/
      *(this + 1) = -1; /*0x69b5e9*/
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
int __thiscall sub_751710(void *this)
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
  _DWORD v18[4]; // [esp+40h] [ebp-10h] BYREF

  v1 = this; /*0x751717*/
  Next = (int *)AudioQueue::GetNext(MEMORY[0xB1D320]); /*0x751727*/
  if ( Next ) /*0x75172b*/
  {
    do /*0x751763*/
    {
      NextAlt = AudioQueue::GetNextAlt(Next); /*0x751737*/
      AudioController::Stop(Next + 3); /*0x751739*/
      LinkedList::Init((_DWORD **)Next); /*0x751740*/
      PushFrontLinkedListAlt(MEMORY[0xB1D3A4], (int)Next); /*0x75174d*/
      Next = (int *)NextAlt; /*0x751758*/
      --MEMORY[0xB1D3A8]; /*0x75175d*/
    }
    while ( NextAlt ); /*0x751763*/
  }
  AudioMixer::Shutdown(); /*0x751765*/
  result = (*(int (__stdcall **)(void *, int *, int, _DWORD))(*(_DWORD *)v1 + 12))(v1, &v14, 4, 0); /*0x751776*/
  if ( result >= 0 ) /*0x75177b*/
  {
    v13 = 0; /*0x751785*/
    if ( v14 > 0 ) /*0x75178f*/
    {
      while ( 1 ) /*0x7517a1*/
      {
        result = (*(int (__stdcall **)(void *, _DWORD *, int, _DWORD))(*(_DWORD *)v1 + 12))(v1, v18, 16, 0); /*0x7517a1*/
        v16 = result; /*0x7517a6*/
        if ( result < 0 ) /*0x7517aa*/
          break; /*0x7517aa*/
        if ( v18[0] != -1 && v18[0] < MEMORY[0xB1D388] && v18[0] >= 0 ) /*0x7517cb*/
        {
          v5 = **((_DWORD **)MEMORY[0xB1D37C] + v18[0]); /*0x7517da*/
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
                v8 = LinkedList::Next((int **)MEMORY[0xB1D3A4]); /*0x751813*/
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
                  InsertAfterDListNode((int)MEMORY[0xB1D320], v9); /*0x751859*/
                  v11 = ++MEMORY[0xB1D3A8]; /*0x751869*/
                  if ( MEMORY[0xB1D3A8] > MEMORY[0xB1D3AC] ) /*0x751871*/
                    MEMORY[0xB1D3AC] = v11; /*0x751873*/
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
int __thiscall sub_7533F0(void *this)
{
  int result; // eax
  int v3; // [esp+30h] [ebp-10h] BYREF
  _DWORD v4[3]; // [esp+34h] [ebp-Ch] BYREF

  if ( MEMORY[0xB1D4C4] ) /*0x7533fd*/
  {
    *(_DWORD *)(MEMORY[0xB1D4C4] + 80) = 2; /*0x7533ff*/
    MEMORY[0xB1D4C4] = 0; /*0x753406*/
  }
  if ( MEMORY[0xB1D4CC] ) /*0x753418*/
    Audio::Release(MEMORY[0xB1D4CC]); /*0x75341a*/
  ThemeClass::ClearQueues(); /*0x75341f*/
  result = (*(int (__stdcall **)(void *, int *, int, _DWORD))(*(_DWORD *)this + 12))(this, &v3, 4, 0); /*0x753430*/
  if ( result >= 0 && v3 == 1450145875 ) /*0x753443*/
  {
    result = (*(int (__stdcall **)(void *, int *, int, _DWORD))(*(_DWORD *)this + 12))(this, &v3, 4, 0); /*0x753455*/
    if ( result >= 0 ) /*0x75345a*/
    {
      while ( v3 != 1450145861 ) /*0x753466*/
      {
        if ( v3 != 1450145865 ) /*0x75346e*/
          return -2147467259; /*0x7534cb*/
        result = (*(int (__stdcall **)(void *, _DWORD *, int, _DWORD))(*(_DWORD *)this + 12))(this, v4, 12, 0); /*0x75347c*/
        if ( result >= 0 ) /*0x753481*/
        {
          if ( MEMORY[0xB1D4CC] && v4[0] >= 0 && v4[0] < MEMORY[0xB1D4B0] ) /*0x75349a*/
            Audio_Load(*((_DWORD *)MEMORY[0xB1D4A4] + v4[0]), v4[1], v4[2]); /*0x7534ae*/
          result = (*(int (__stdcall **)(void *, int *, int, _DWORD))(*(_DWORD *)this + 12))(this, &v3, 4, 0); /*0x7534bf*/
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
