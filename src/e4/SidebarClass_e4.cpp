// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Sidebar_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/VectorClass_ptr_ConvertClass_e4.hpp"

// 0x4C9C50
void SidebarClass::draw()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  return this->q05C; /*0x4c9c53*/
}
}

// 0x4CA170
void SidebarClass::draw2()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  return this->q068; /*0x4ca173*/
}
}

// 0x6A5090
void SidebarClass::InitPositions()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  if ( *((_DWORD *)g_ScenarioClass_Instance + 3374) ) /*0x6a5095*/
  {
    DataGlobal_B0B4E0 = g_DSurface_SidebarBounds + 7; /*0x6a50f4*/
    DataGlobal_B0B4EC = g_DSurface_SidebarBounds + 39; /*0x6a50fc*/
    DataGlobal_B0B4E4 = 52; /*0x6a5104*/
    DataGlobal_B0B4F0 = 32; /*0x6a510e*/
    g_SidebarBounds = g_DSurface_SidebarBounds + 69; /*0x6a5118*/
    DataGlobal_B0B4FC = 64; /*0x6a511d*/
  }
  else
  {
    DataGlobal_B0B4E4 = 64; /*0x6a50a5*/
    DataGlobal_B0B4F0 = 29; /*0x6a50af*/
    DataGlobal_B0B4FC = 63; /*0x6a50b9*/
    DataGlobal_B0B4E0 = g_DSurface_SidebarBounds + 8; /*0x6a50c6*/
    DataGlobal_B0B4EC = g_DSurface_SidebarBounds + 39; /*0x6a50ce*/
    g_SidebarBounds = g_DSurface_SidebarBounds + 69; /*0x6a50d6*/
  }
  return g_DSurface_SidebarBounds + 69; /*0x6a50db*/
}
}

// 0x6A5130
void SidebarClass::CalcBounds(char a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int v1; // ebx
  int v2; // eax
  _DWORD *v3; // eax
  int v4; // ecx
  int v5; // esi
  int v6; // esi
  int v7; // ecx
  int result; // eax
  _BYTE v9[16]; // [esp+8h] [ebp-10h] BYREF

  if ( a1 ) /*0x6a513b*/
  {
    v3 = (_DWORD *)SidebarClass::calcSidebarRect(v9); /*0x6a5199*/
    v4 = v3[1]; /*0x6a51a2*/
    v5 = v3[3]; /*0x6a51a8*/
    v1 = v3[2] + *v3; /*0x6a51ab*/
    DataGlobal_886F98 = 168; /*0x6a51bb*/
    DSurface_SidebarBounds = v1; /*0x6a51c0*/
    g_DSurface_SidebarBounds = 158; /*0x6a51c6*/
    v2 = v5 + 32 + v4 - 158; /*0x6a51d0*/
    g_DSurface_ViewBounds = v2; /*0x6a51d7*/
  }
  else if ( DataGlobal_A8EB7C ) /*0x6a5144*/
  {
    g_DSurface_SidebarBounds = 158; /*0x6a515b*/
    v1 = g_Map_VisibleRectOffset + DSurface_ViewBounds; /*0x6a5165*/
    DataGlobal_886F98 = 168; /*0x6a5173*/
    DSurface_SidebarBounds = g_Map_VisibleRectOffset + DSurface_ViewBounds; /*0x6a5181*/
    v2 = g_DSurface_WindowOffset + 32 + g_Map_VisibleRect - 158; /*0x6a5187*/
    g_DSurface_ViewBounds = v2; /*0x6a518e*/
  }
  else
  {
    v2 = g_DSurface_ViewBounds; /*0x6a51de*/
    v1 = DSurface_SidebarBounds; /*0x6a51e3*/
  }
  v6 = *((_DWORD *)g_ScenarioClass_Instance + 3374); /*0x6a51ef*/
  DataGlobal_B0B500 = 50; /*0x6a51f5*/
  v7 = 26; /*0x6a5205*/
  if ( *((_DWORD *)g_ScenarioClass_Instance + 3374) ) /*0x6a51ff*/
    v7 = 18; /*0x6a520e*/
  result = 50 * ((v2 - g_SidebarBounds - v7 + g_DSurface_SidebarBounds - 7) / 50); /*0x6a523f*/
  DataGlobal_B0B504 = result; /*0x6a5243*/
  if ( v6 ) /*0x6a5248*/
  {
    if ( v6 == 1 ) /*0x6a5263*/
    {
      DataGlobal_B0B50C = g_SidebarBounds + result + 7; /*0x6a5269*/
    }
    else
    {
      result += g_SidebarBounds + 7; /*0x6a5271*/
      DataGlobal_B0B50C = result; /*0x6a5275*/
    }
    DataGlobal_B0B510 = 45; /*0x6a527a*/
  }
  else
  {
    DataGlobal_B0B510 = 46; /*0x6a524e*/
    DataGlobal_B0B50C = g_SidebarBounds + result + 7; /*0x6a5258*/
  }
  DataGlobal_B0B514 = 50; /*0x6a5287*/
  DataGlobal_B0B4F4 = v1 + 22; /*0x6a5293*/
  if ( v6 ) /*0x6a529a*/
  {
    if ( v6 != 1 ) /*0x6a52c1*/
      result = v1 + 33; /*0x6a52e6*/
    DataGlobal_B0B508 = v1 + 39; /*0x6a52cd*/
    DataGlobal_B0B4DC = v1 + 33; /*0x6a52d3*/
    DataGlobal_B0B4E8 = v1 + 20; /*0x6a52d9*/
  }
  else
  {
    DataGlobal_B0B508 = v1 + 39; /*0x6a52a6*/
    DataGlobal_B0B4DC = v1 + 20; /*0x6a52ac*/
    DataGlobal_B0B4E8 = v1 + 26; /*0x6a52b2*/
    return v1 + 26; /*0x6a529f*/
  }
  return result; /*0x6a52a5*/
}
}

// 0x6A5840
void * SidebarClass::LoadAssets()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  void *SHP; // eax
  void *result; // eax
  char Buffer[256]; // [esp+10h] [ebp-700h] BYREF

  PowerClass::checkBlackout(); /*0x6a5849*/
  _BYTE v12[768]; // [esp+110h] [ebp-600h] BYREF
  qmemcpy(v12, (const void *)UI_Load_72F4A0(), sizeof(v12)); /*0x6a5863*/
  if ( g_SidebarConfig ) /*0x6a586d*/
  {
    (**(void (__thiscall ***)(int, int))g_SidebarConfig)(g_SidebarConfig, 1); /*0x6a5873*/
    g_SidebarConfig = 0; /*0x6a5875*/
  }
  _DWORD * v0 = __2_YAPAXI_Z(0x188u); /*0x6a5880*/
  if ( v0 ) /*0x6a588a*/
    g_SidebarConfig = (int)ConvertClass::Construct(v0, (int)v12, (int)v12, g_DSurface_Primary, 1, 0); /*0x6a58ad*/
  else
    g_SidebarConfig = 0; /*0x6a58b4*/
  DataGlobal_B0B484 = LoadFileSHP(DataGlobal_83FA58, (bool *)&DataGlobal_B0B48F); /*0x6a58d4*/
  char v10 = 0; /*0x6a58d9*/
  SHP = LoadFileSHP(DataGlobal_83FA4C, (bool *)&v10); /*0x6a58dd*/
  ShapeButton::SetShape((int)DataGlobal_B07DF8, (int)SHP, 0, 0); /*0x6a58e8*/
  ButtonClass::SetState(DataGlobal_B07DF8, v10); /*0x6a58f7*/
  DataGlobal_B07E48 = g_SidebarConfig; /*0x6a590c*/
  void * v2 = LoadFileSHP(DataGlobal_83FA40, (bool *)&v10); /*0x6a5911*/
  ShapeButton::SetShape((int)DataGlobal_B0B3A0, (int)v2, 0, 0); /*0x6a591c*/
  ButtonClass::SetState(DataGlobal_B0B3A0, v10); /*0x6a592b*/
  int v3 = 0; /*0x6a5936*/
  DataGlobal_B0B3F0 = g_SidebarConfig; /*0x6a5938*/
  int * v4 = (int *)&DataGlobal_B07C48; /*0x6a593e*/
  do /*0x6a598c*/
  {
    sprintf(Buffer, DataGlobal_83FA34, v3); /*0x6a594e*/
    void * v5 = LoadFileSHP(Buffer, (bool *)&v10); /*0x6a5960*/
    ShapeButton::SetShape((int)v4, (int)v5, 0, 0); /*0x6a5968*/
    ButtonClass::SetState(v4, v10); /*0x6a5974*/
    ++v3; /*0x6a597f*/
    v4[20] = g_SidebarConfig; /*0x6a5980*/
    v4 += 24; /*0x6a5983*/
  }
  while ( (int)v4 < (int)&DataGlobal_B07DC8 ); /*0x6a598c*/
  void * v6 = LoadFileSHP(DataGlobal_83FA28, (bool *)&v10); /*0x6a5999*/
  ShapeButton::SetShape((int)DataGlobal_B0B328, (int)v6, 0, 0); /*0x6a59a4*/
  ButtonClass::SetState(DataGlobal_B0B328, v10); /*0x6a59b3*/
  DataGlobal_B0B378 = g_SidebarConfig; /*0x6a59bf*/
  void * v7 = LoadFileSHP(DataGlobal_83FA1C, (bool *)&v10); /*0x6a59cf*/
  ShapeButton::SetShape((int)g_SidebarFlag, (int)v7, 0, 0); /*0x6a59da*/
  ButtonClass::SetState(g_SidebarFlag, v10); /*0x6a59e9*/
  DataGlobal_B0B458 = g_SidebarConfig; /*0x6a59fd*/
  DataGlobal_B0B468 = LoadFileSHP(DataGlobal_83FA10, (bool *)&DataGlobal_B0B488); /*0x6a5a11*/
  DataGlobal_B0B46C = LoadFileSHP(DataGlobal_83FA04, (bool *)&DataGlobal_B0B489); /*0x6a5a25*/
  DataGlobal_B0B470 = LoadFileSHP(DataGlobal_83F9F8, (bool *)&DataGlobal_B0B48A); /*0x6a5a39*/
  DataGlobal_B0B474 = LoadFileSHP(DataGlobal_83F9EC, (bool *)&DataGlobal_B0B48B); /*0x6a5a43*/
  _BYTE v13[768]; // [esp+410h] [ebp-300h] BYREF
  qmemcpy(v13, (const void *)UI_Load_72F4E0(), sizeof(v13)); /*0x6a5a5b*/
  if ( DataGlobal_87F6D0 ) /*0x6a5a65*/
  {
    (**(void (__thiscall ***)(int, int))DataGlobal_87F6D0)(DataGlobal_87F6D0, 1); /*0x6a5a6b*/
    DataGlobal_87F6D0 = 0; /*0x6a5a6d*/
  }
  _DWORD * v8 = __2_YAPAXI_Z(0x188u); /*0x6a5a78*/
  if ( v8 ) /*0x6a5a82*/
    DataGlobal_87F6D0 = (int)ConvertClass::Construct(v8, (int)v13, (int)v13, g_DSurface_Primary, 1, 0); /*0x6a5aa5*/
  else
    DataGlobal_87F6D0 = 0; /*0x6a5aac*/
  DataGlobal_B0B490 = LoadFileSHP(DataGlobal_83F9E0, (bool *)&DataGlobal_B0B4CC); /*0x6a5acb*/
  DataGlobal_B0B494 = LoadFileSHP(DataGlobal_83F9D4, (bool *)&DataGlobal_B0B4CD); /*0x6a5adf*/
  DataGlobal_B0B498 = LoadFileSHP(DataGlobal_83F9C8, (bool *)&DataGlobal_B0B4CE); /*0x6a5af3*/
  DataGlobal_B0B49C = LoadFileSHP(DataGlobal_83F9BC, (bool *)&DataGlobal_B0B4CF); /*0x6a5b07*/
  DataGlobal_B0B4A0 = LoadFileSHP(DataGlobal_83F9B0, (bool *)&DataGlobal_B0B4D0); /*0x6a5b1b*/
  DataGlobal_B0B4A4 = LoadFileSHP(DataGlobal_83F9A4, (bool *)&DataGlobal_B0B4D1); /*0x6a5b2f*/
  DataGlobal_B0B4A8 = LoadFileSHP(DataGlobal_83F998, (bool *)&DataGlobal_B0B4D2); /*0x6a5b43*/
  DataGlobal_B0B4AC = LoadFileSHP(DataGlobal_83F98C, (bool *)&DataGlobal_B0B4D3); /*0x6a5b57*/
  DataGlobal_B0B4B0 = LoadFileSHP(DataGlobal_83F980, (bool *)&DataGlobal_B0B4D4); /*0x6a5b6b*/
  DataGlobal_B0B4B4 = LoadFileSHP(DataGlobal_83F974, (bool *)&DataGlobal_B0B4D5); /*0x6a5b7f*/
  DataGlobal_B0B4B8 = LoadFileSHP(DataGlobal_83F968, (bool *)&DataGlobal_B0B4D6); /*0x6a5b93*/
  DataGlobal_B0B4BC = LoadFileSHP(DataGlobal_83F95C, (bool *)&DataGlobal_B0B4D7); /*0x6a5ba7*/
  DataGlobal_B0B4C0 = LoadFileSHP(DataGlobal_83F950, (bool *)&DataGlobal_B0B4D8); /*0x6a5bbb*/
  DataGlobal_B0B4C4 = LoadFileSHP(DataGlobal_83F944, (bool *)&DataGlobal_B0B4D9); /*0x6a5bcf*/
  result = LoadFileSHP(DataGlobal_83F938, (bool *)&DataGlobal_B0B4DA); /*0x6a5bd4*/
  DataGlobal_B0B4C8 = result; /*0x6a5bdb*/
  return result; /*0x6a5bd9*/
}
}

// 0x6A6C30
void SidebarClass::Redraw(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int i; // edi
  char v10; // dl
  _BYTE *v11; // eax
  char v12; // al
  unsigned int v14; // [esp-34h] [ebp-64h]
  unsigned int v15; // [esp-34h] [ebp-64h]
  unsigned int v16; // [esp-34h] [ebp-64h]
  unsigned __int8 v17; // [esp+Ch] [ebp-24h]
  int v19; // [esp+14h] [ebp-1Ch]
  int v20; // [esp+18h] [ebp-18h] BYREF
  int v21; // [esp+1Ch] [ebp-14h]
  int v22[4]; // [esp+20h] [ebp-10h] BYREF
  char v23; // [esp+34h] [ebp+4h]
  int v2 = (int)this; /*0x6a6c3b*/
  DataGlobal_8809F4 = DataGlobal_B07DC8; /*0x6a6c49*/
  DataGlobal_8809F8 = DataGlobal_B07DCC; /*0x6a6c53*/
  DataGlobal_8809FC = DataGlobal_B07DD0; /*0x6a6c5f*/
  v19 = g_DSurface_Hidden_2; /*0x6a6c65*/
  DataGlobal_880A00 = DataGlobal_B07DD4; /*0x6a6c6f*/
  g_DSurface_Hidden_2 = DSurface_Sidebar; /*0x6a6c74*/
  v17 = 0; /*0x6a6c82*/
  int v3 = (*(int (__thiscall **)(int))(*(_DWORD *)DSurface_Sidebar + 128))(DSurface_Sidebar); /*0x6a6c92*/
  v22[2] = (*(int (__thiscall **)(int))(*(_DWORD *)DSurface_Sidebar + 124))(DSurface_Sidebar); /*0x6a6c99*/
  v22[0] = 0; /*0x6a6ca3*/
  v22[1] = 0; /*0x6a6ca7*/
  v22[3] = v3; /*0x6a6cab*/
  if ( a2 || *(_BYTE *)(v2 + 21414) || (v23 = 0, *(_BYTE *)(v2 + 21415)) ) /*0x6a6cb9*/
    v23 = 1; /*0x6a6cc7*/
  if ( *(_BYTE *)(v2 + 21413) && v23 && !ArmageddonMode ) /*0x6a6ce8*/
  {
    if ( *(_BYTE *)(v2 + 21415) ) /*0x6a6cee*/
    {
      v21 = g_DSurface_SidebarBounds; /*0x6a6d1f*/
      v17 = 1; /*0x6a6d39*/
      v20 = 0; /*0x6a6d3e*/
      DrawToSurfaceSHP( /*0x6a6d42*/
        DSurface_Sidebar,
        g_SidebarConfig,
        (int)DataGlobal_B0B468,
        0,
        &v20,
        v22,
        1024,
        0,
        0,
        0,
        1000,
        0,
        0,
        0,
        0,
        0);
      int v4 = g_SidebarBounds; /*0x6a6d47*/
      void * v5 = DataGlobal_B0B46C; /*0x6a6d4d*/
      for ( i = 0; ; ++i ) /*0x6a6d53*/
      {
        int v7 = 26; /*0x6a6d63*/
        if ( *((_DWORD *)g_ScenarioClass_Instance + 3374) ) /*0x6a6d5b*/
          v7 = 18; /*0x6a6d6a*/
        if ( i >= (g_DSurface_ViewBounds - g_SidebarBounds - v7 + g_DSurface_SidebarBounds - 7) / 50 ) /*0x6a6d9c*/
          break; /*0x6a6d9c*/
        v20 = 0; /*0x6a6dcc*/
        v21 = v4; /*0x6a6dd0*/
        DrawToSurfaceSHP(DSurface_Sidebar, g_SidebarConfig, (int)v5, 0, &v20, v22, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x6a6dd4*/
        v5 = DataGlobal_B0B46C; /*0x6a6dd9*/
        v4 += *((__int16 *)DataGlobal_B0B46C + 2); /*0x6a6de3*/
      }
      v20 = 0; /*0x6a6e1c*/
      v21 = v4; /*0x6a6e20*/
      DrawToSurfaceSHP( /*0x6a6e24*/
        DSurface_Sidebar,
        g_SidebarConfig,
        (int)DataGlobal_B0B470,
        0,
        &v20,
        v22,
        1024,
        0,
        0,
        0,
        1000,
        0,
        0,
        0,
        0,
        0);
      v21 = v4 + *((__int16 *)DataGlobal_B0B470 + 2); /*0x6a6e48*/
      v20 = 0; /*0x6a6e6b*/
      DrawToSurfaceSHP( /*0x6a6e6f*/
        DSurface_Sidebar,
        g_SidebarConfig,
        (int)DataGlobal_B0B474,
        0,
        &v20,
        v22,
        1024,
        0,
        0,
        0,
        1000,
        0,
        0,
        0,
        0,
        0);
      v2 = (int)this; /*0x6a6e74*/
    }
    ShapeButton::Draw((int)DataGlobal_B07DF8, v17); /*0x6a6e88*/
    ShapeButton::Draw((int)DataGlobal_B0B3A0, v17); /*0x6a6e93*/
    int * v8 = (int *)&DataGlobal_B07C48; /*0x6a6e98*/
    do /*0x6a6eaf*/
    {
      ShapeButton::Draw((int)v8, 1); /*0x6a6ea1*/
      v8 += 24; /*0x6a6ea6*/
    }
    while ( (int)v8 < (int)&DataGlobal_B07DC8 ); /*0x6a6eaf*/
    ShapeButton::Draw((int)DataGlobal_B0B328, v17); /*0x6a6eb7*/
    ShapeButton::Draw((int)g_SidebarFlag, v17); /*0x6a6ec2*/
    if ( *(_DWORD *)(v2 + 21400) ) /*0x6a6ec7*/
    {
      v21 = g_SidebarBounds; /*0x6a6eef*/
      v14 = *(_DWORD *)(v2 + 21396); /*0x6a6f0a*/
      v20 = 0; /*0x6a6f18*/
      DrawToSurfaceSHP( /*0x6a6f1c*/
        DSurface_Sidebar,
        g_SidebarConfig,
        (int)DataGlobal_B0B478,
        v14,
        &v20,
        v22,
        1024,
        0,
        0,
        0,
        1000,
        0,
        0,
        0,
        0,
        0);
      v21 = g_SidebarBounds; /*0x6a6f3a*/
      v15 = *(_DWORD *)(v2 + 21396); /*0x6a6f55*/
      v20 = 0; /*0x6a6f63*/
      DrawToSurfaceSHP( /*0x6a6f67*/
        DSurface_Sidebar,
        g_SidebarConfig,
        (int)DataGlobal_B0B47C,
        v15,
        &v20,
        v22,
        1024,
        0,
        0,
        0,
        1000,
        0,
        0,
        0,
        0,
        0);
      v21 = g_SidebarBounds; /*0x6a6f85*/
      v16 = *(_DWORD *)(v2 + 21396); /*0x6a6fa0*/
      v20 = 0; /*0x6a6fae*/
      DrawToSurfaceSHP( /*0x6a6fb2*/
        DSurface_Sidebar,
        g_SidebarConfig,
        (int)DataGlobal_B0B480,
        v16,
        &v20,
        v22,
        1024,
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
    g_TooltipActive = 1; /*0x6a6fb7*/
  }
  Sidebar::UpdateProductionDisplay(v2 + 3988 * *(_DWORD *)(v2 + 21404) + 5444, v2, *(_BYTE *)(v2 + 21415)); /*0x6a6fdf*/
  char v9 = v23 || v17; /*0x6a6ff4*/
  Sidebar::Render(v2, v9); /*0x6a6ffc*/
  if ( DataGlobal_B07E4C ) /*0x6a7007*/
  {
    v10 = 1; /*0x6a7009*/
    DataGlobal_B07E4C = 0; /*0x6a700b*/
    g_TooltipActive = 1; /*0x6a7011*/
  }
  else
  {
    v10 = g_TooltipActive; /*0x6a7019*/
  }
  if ( DataGlobal_B0B3F4 ) /*0x6a7025*/
  {
    v10 = 1; /*0x6a7027*/
    DataGlobal_B0B3F4 = 0; /*0x6a7029*/
    g_TooltipActive = 1; /*0x6a702f*/
  }
  v11 = &DataGlobal_B07C9C; /*0x6a7035*/
  do /*0x6a704a*/
  {
    if ( *v11 ) /*0x6a703a*/
    {
      v10 = 1; /*0x6a703e*/
      *v11 = 0; /*0x6a7040*/
    }
    v11 += 96; /*0x6a7042*/
  }
  while ( (int)v11 < (int)&DataGlobal_B07E1C ); /*0x6a704a*/
  g_TooltipActive = v10; /*0x6a7051*/
  if ( DataGlobal_B0B37C ) /*0x6a7059*/
  {
    v10 = 1; /*0x6a705b*/
    DataGlobal_B0B37C = 0; /*0x6a705d*/
    g_TooltipActive = 1; /*0x6a7063*/
  }
  if ( DataGlobal_B0B45C ) /*0x6a706f*/
  {
    v10 = 1; /*0x6a7071*/
    DataGlobal_B0B45C = 0; /*0x6a7073*/
    g_TooltipActive = 1; /*0x6a7079*/
  }
  if ( g_TacticalRender ) /*0x6a7087*/
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)g_TacticalRender + 12))(g_TacticalRender, 1); /*0x6a708d*/
    v10 = g_TooltipActive; /*0x6a7090*/
  }
  v12 = v10 || *(_BYTE *)(v2 + 21415); /*0x6a70a6*/
  Sidebar::FlushSidebarTooltip(v12); /*0x6a70ae*/
  *(_BYTE *)(v2 + 21414) = 0; /*0x6a70b7*/
  *(_BYTE *)(v2 + 21415) = 0; /*0x6a70bd*/
  g_DSurface_Hidden_2 = v19; /*0x6a70c5*/
  return v19; /*0x6a70c3*/
}
}

// 0x6A7590
void SidebarClass::SwitchTab(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax

  result = this->q539C; /*0x6a7598*/
  if ( a2 != result ) /*0x6a75a0*/
  {
    GadgetClass::Hide((_BYTE *)&DataGlobal_B07C48 + 96 * result); /*0x6a75b4*/
    int v4 = 0; /*0x6a75c6*/
    int v5 = this + 3988 * this->q539C + 5444; /*0x6a75ce*/
    *(_BYTE *)(this + 3988 * this->q539C + 5472) = 0; /*0x6a75d5*/
    do /*0x6a7600*/
    {
      Tactical::SelectObject(&DataGlobal_87F7E8, 56 * (v4 + 60 * *(_DWORD *)(v5 + 56)) + 11566720); /*0x6a75f7*/
      ++v4; /*0x6a75fc*/
    }
    while ( v4 < 60 ); /*0x6a7600*/
    this->q539C = a2; /*0x6a7605*/
    GadgetClass::Show((_BYTE *)&DataGlobal_B07C48 + 96 * a2); /*0x6a7614*/
    int v6 = this + 3988 * this->q539C + 5444; /*0x6a762c*/
    *(_BYTE *)(this + 3988 * this->q539C + 5472) = 1; /*0x6a7633*/
    int v7 = 26; /*0x6a7645*/
    if ( *((_DWORD *)g_ScenarioClass_Instance + 3374) ) /*0x6a763d*/
      v7 = 18; /*0x6a764c*/
    int v8 = 0; /*0x6a765f*/
    int v9 = 2 * ((g_DSurface_ViewBounds - g_SidebarBounds - v7 + g_DSurface_SidebarBounds - 7) / 50); /*0x6a767f*/
    if ( v9 > 0 ) /*0x6a7683*/
    {
      do /*0x6a76c8*/
      {
        Hash::Reset((_DWORD *)(56 * (v8 + 60 * *(_DWORD *)(v6 + 56)) + 11566720)); /*0x6a769d*/
        Hash::InsertOrdered(&DataGlobal_87F7E8, 56 * (v8 + 60 * *(_DWORD *)(v6 + 56)) + 11566720); /*0x6a76c0*/
        ++v8; /*0x6a76c5*/
      }
      while ( v8 < v9 ); /*0x6a76c8*/
    }
    g_CameoRenderFlag = 1; /*0x6a76cc*/
    result = Tactical::UpdateUIVisibility((_DWORD *)this); /*0x6a76d3*/
    this->q53A7 = 1; /*0x6a76d9*/
  }
  return result; /*0x6a76e1*/
}
}

// 0x6ABD30
void SidebarClass::LoadResources()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int i; // edi
  char result; // al
  int j; // esi
  wchar_t *v30; // [esp+2Ch] [ebp-8h]
  PowerClass::getDrain(); /*0x6abd39*/
  SidebarClass::CalcBounds(0); /*0x6abd42*/
  if ( !DataGlobal_B0B468 ) /*0x6abd4e*/
  {
    DataGlobal_B0B468 = (void *)SearchMIXFile(DataGlobal_83FBBC, 0); /*0x6abd63*/
    DataGlobal_B0B46C = (void *)SearchMIXFile(DataGlobal_83FBAC, 0); /*0x6abd74*/
    DataGlobal_B0B470 = (void *)SearchMIXFile(DataGlobal_83FB9C, 0); /*0x6abd7e*/
  }
  Rect_Point::Set(&DataGlobal_B07E58, DSurface_SidebarBounds + 16, g_Map_VisibleRect); /*0x6abd98*/
  VectorClass_ptr_ConvertClass::MarkDirty(&DataGlobal_B07E58); /*0x6abda2*/
  int v0 = DataGlobal_B04A28 + DataGlobal_B04A20; /*0x6abdb2*/
  int v21 = DataGlobal_B04A28 + DataGlobal_B04A20; /*0x6abdbc*/
  if ( DataGlobal_A8EB7C ) /*0x6abdbd*/
    Rect_Point::Set(&DataGlobal_B07E58, DSurface_ViewBounds + g_Map_VisibleRectOffset, v21); /*0x6abdce*/
  else
    Rect_Point::Set(&DataGlobal_B07E58, 0, v21); /*0x6abdd7*/
  int v22 = (*(int (__thiscall **)(int))(*(_DWORD *)DSurface_Sidebar + 128))(DSurface_Sidebar) - v0; /*0x6abdf2*/
  int v1 = (*(int (__thiscall **)(int))(*(_DWORD *)DSurface_Sidebar + 124))(DSurface_Sidebar); /*0x6abdf5*/
  ObjectClass::SetPositionXY(&DataGlobal_B07E58, v1, v22); /*0x6abdfe*/
  Rect_Point::Set(DataGlobal_B0B3A0, DataGlobal_B0B4DC, DataGlobal_B0B4E0); /*0x6abe15*/
  VectorClass_ptr_ConvertClass::MarkDirty(DataGlobal_B0B3A0); /*0x6abe1f*/
  DataGlobal_B0B3E4 = -DSurface_SidebarBounds; /*0x6abe37*/
  Rect_Point::Set(DataGlobal_B07DF8, DataGlobal_B0B3AC + DataGlobal_B0B4E4, DataGlobal_B0B3B0); /*0x6abe4c*/
  VectorClass_ptr_ConvertClass::MarkDirty(DataGlobal_B07DF8); /*0x6abe56*/
  int * v2 = (int *)&DataGlobal_B07C48; /*0x6abe60*/
  DataGlobal_B07E3C = -DSurface_SidebarBounds; /*0x6abe67*/
  int v3 = 0; /*0x6abe6c*/
  do /*0x6abea8*/
  {
    Rect_Point::Set(v2, DataGlobal_B0B4E8 + v3 * DataGlobal_B0B4F0, DataGlobal_B0B4EC); /*0x6abe88*/
    VectorClass_ptr_ConvertClass::MarkDirty(v2); /*0x6abe8f*/
    v2 += 24; /*0x6abe99*/
    *(v2 - 7) = -DSurface_SidebarBounds; /*0x6abe9e*/
    ++v3; /*0x6abea1*/
  }
  while ( (int)v2 < (int)&DataGlobal_B07DC8 ); /*0x6abea8*/
  Rect_Point::Set(DataGlobal_B0B328, DataGlobal_B0B508, DataGlobal_B0B50C); /*0x6abebd*/
  VectorClass_ptr_ConvertClass::MarkDirty(DataGlobal_B0B328); /*0x6abec7*/
  DataGlobal_B0B36C = -DSurface_SidebarBounds; /*0x6abedf*/
  Rect_Point::Set(g_SidebarFlag, DataGlobal_B0B508 + DataGlobal_B0B510, DataGlobal_B0B50C); /*0x6abef2*/
  VectorClass_ptr_ConvertClass::MarkDirty(g_SidebarFlag); /*0x6abefc*/
  DataGlobal_B0B44C = -DSurface_SidebarBounds; /*0x6abf0f*/
  int v4 = 26; /*0x6abf1d*/
  if ( *((_DWORD *)g_ScenarioClass_Instance + 3374) ) /*0x6abf15*/
    v4 = 18; /*0x6abf24*/
  int * v5 = (int *)&DataGlobal_B07E80; /*0x6abf44*/
  int * v23 = (int *)&DataGlobal_B07E80; /*0x6abf4d*/
  int v6 = (g_DSurface_ViewBounds - v4 - g_SidebarBounds + g_DSurface_SidebarBounds - 7) / 50; /*0x6abf5d*/
  int v24 = 2 * v6; /*0x6abf62*/
  do /*0x6abfc2*/
  {
    int v7 = 0; /*0x6abf66*/
    if ( v6 > 0 ) /*0x6abf6a*/
    {
      do /*0x6abfac*/
      {
        for ( i = 0; i < 2; ++i ) /*0x6abf6c*/
        {
          (*(void (__thiscall **)(int *, int, int))(*v5 + 100))( /*0x6abf96*/
            v5,
            DataGlobal_B0B4F4 + i * DataGlobal_B0B4FC,
            v7 * DataGlobal_B0B500 + g_SidebarBounds + 1);
          (*(void (__thiscall **)(int *))(*v5 + 72))(v5); /*0x6abf9d*/
          v5 += 14; /*0x6abfa1*/
        }
        ++v7; /*0x6abfa9*/
      }
      while ( v7 < v6 ); /*0x6abfac*/
      v5 = v23; /*0x6abfae*/
    }
    v5 += 840; /*0x6abfb2*/
    v23 = v5; /*0x6abfbe*/
  }
  while ( (int)v5 < (int)&DataGlobal_B0B300 ); /*0x6abfc2*/
  result = g_TacticalRender; /*0x6abfc4*/
  if ( g_TacticalRender ) /*0x6abfcd*/
  {
  int v29; // [esp+28h] [ebp-Ch]
  int v28; // [esp+24h] [ebp-10h]
  int v27; // [esp+20h] [ebp-14h]
  int v26; // [esp+1Ch] [ebp-18h]
  int v25; // [esp+18h] [ebp-1Ch] BYREF
    char v31 = 0; /*0x6abfd3*/
    int v10 = 203; /*0x6abfd7*/
    int * v11 = (int *)&DataGlobal_B07C58; /*0x6abfdc*/
    do /*0x6ac02d*/
    {
      int v12 = *v11; /*0x6abfe4*/
      int v13 = v11[1]; /*0x6abfe6*/
      v26 = *(v11 - 1); /*0x6abfe9*/
      int v14 = v11[2]; /*0x6abfed*/
      v27 = v12; /*0x6abff0*/
      v25 = v10; /*0x6abffb*/
      v30 = 0; /*0x6abfff*/
      v28 = v13; /*0x6ac003*/
      v29 = v14; /*0x6ac007*/
      HashTable::Remove((int *)g_TacticalRender, v10); /*0x6ac00b*/
      CommandClass::AddAction(g_TacticalRender, (int)&v25); /*0x6ac01b*/
      ++v10; /*0x6ac020*/
      v11 += 24; /*0x6ac021*/
    }
    while ( v10 - 203 < 4 ); /*0x6ac02d*/
    for ( j = 0; j < 60; ++j ) /*0x6ac02f*/
      HashTable::Remove((int *)g_TacticalRender, j + 1000); /*0x6ac03e*/
    int v16 = 0; /*0x6ac04d*/
    if ( v24 > 0 ) /*0x6ac051*/
    {
      int * v17 = (int *)&DataGlobal_B07E90; /*0x6ac053*/
      do /*0x6ac0a5*/
      {
        int v18 = *(v17 - 1); /*0x6ac05c*/
        v27 = *v17; /*0x6ac065*/
        v25 = v16 + 1000; /*0x6ac069*/
        int v19 = v17[1]; /*0x6ac06d*/
        v26 = v18; /*0x6ac070*/
        int v20 = v17[2]; /*0x6ac074*/
        v28 = v19; /*0x6ac07b*/
        v30 = 0; /*0x6ac086*/
        v29 = v20; /*0x6ac08e*/
        v31 = 1; /*0x6ac092*/
        CommandClass::AddAction(g_TacticalRender, (int)&v25); /*0x6ac096*/
        ++v16; /*0x6ac09f*/
        v17 += 14; /*0x6ac0a0*/
      }
      while ( v16 < v24 ); /*0x6ac0a5*/
    }
    v26 = DataGlobal_B07E04; /*0x6ac0ba*/
    v29 = DataGlobal_B07E10; /*0x6ac0c6*/
    v31 = 0; /*0x6ac0d0*/
    v25 = 102; /*0x6ac0d5*/
    v30 = aTxtSellMode; /*0x6ac0dd*/
    v27 = DataGlobal_B07E08; /*0x6ac0e5*/
    v28 = DataGlobal_B07E0C; /*0x6ac0e9*/
    HashTable::Remove((int *)g_TacticalRender, 102); /*0x6ac0ed*/
    CommandClass::AddAction(g_TacticalRender, (int)&v25); /*0x6ac0fd*/
    v26 = DataGlobal_B0B3AC; /*0x6ac113*/
    v27 = DataGlobal_B0B3B0; /*0x6ac11c*/
    v25 = 101; /*0x6ac128*/
    v30 = aTxtRepairMode; /*0x6ac130*/
    v28 = DataGlobal_B0B3B4; /*0x6ac138*/
    v29 = DataGlobal_B0B3B8; /*0x6ac13c*/
    HashTable::Remove((int *)g_TacticalRender, 101); /*0x6ac140*/
    CommandClass::AddAction(g_TacticalRender, (int)&v25); /*0x6ac150*/
    v26 = DataGlobal_B0B414; /*0x6ac166*/
    v28 = DataGlobal_B0B41C; /*0x6ac170*/
    v25 = 200; /*0x6ac17f*/
    v30 = 0; /*0x6ac187*/
    v27 = DataGlobal_B0B418; /*0x6ac18b*/
    v29 = DataGlobal_B0B420; /*0x6ac18f*/
    HashTable::Remove((int *)g_TacticalRender, 200); /*0x6ac193*/
    CommandClass::AddAction(g_TacticalRender, (int)&v25); /*0x6ac1a3*/
    v26 = DataGlobal_B0B334; /*0x6ac1b9*/
    v29 = DataGlobal_B0B340; /*0x6ac1c8*/
    v25 = 201; /*0x6ac1d2*/
    v30 = 0; /*0x6ac1da*/
    v27 = DataGlobal_B0B338; /*0x6ac1de*/
    v28 = DataGlobal_B0B33C; /*0x6ac1e2*/
    HashTable::Remove((int *)g_TacticalRender, 201); /*0x6ac1e6*/
    return CommandClass::AddAction(g_TacticalRender, (int)&v25); /*0x6ac1f6*/
  }
  return result; /*0x6ac1fb*/
}
}

// 0x40D270
namespace gamemd {
void SidebarClass::initButtons2()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// attributes: thunk
{
  return SidebarClass::InitButtons(this);
}
}
}
// 0x653010
void SidebarClass::CreateScrollButtons()
{
{
    DisplayClass::ddtor();
    if ( !g_ArmageddonMode )
  {
    DataGlobal_B0499C = 242;
    DataGlobal_B049C4 = 1;
    DataGlobal_B049C8 = g_SidebarConfig;
    DataGlobal_B049A5 = 0;
    DataGlobal_B049A8 = 0;
    DataGlobal_B04998 = 5;
    Rect_Point::Set(DataGlobal_B04978, DataGlobal_B04A00, DataGlobal_B04A04);
    ShapeButton::SetShape((int)DataGlobal_B04978, (int)DataGlobal_B048E0, 0, 0);
    VectorClass_ptr_ConvertClass::MarkDirty(DataGlobal_B04978);
    DataGlobal_B04960 = g_SidebarConfig;
    DataGlobal_B04934 = 243;
    DataGlobal_B0495C = 1;
    DataGlobal_B0493D = 0;
    DataGlobal_B04940 = 0;
    DataGlobal_B04930 = 5;
    Rect_Point::Set(DataGlobal_B04910, DataGlobal_B048C8, DataGlobal_B048CC);
    ShapeButton::SetShape((int)DataGlobal_B04910, (int)DataGlobal_B048AC, 0, 0);
    VectorClass_ptr_ConvertClass::MarkDirty(DataGlobal_B04910);
  }
}
}

// 0x6AB990
int SidebarClass::select()
{
{
    int v2;
    int result;
    SidebarClass::updateStripVisibility((int *)g_TacticalRender);
    SidebarClass::initializeStrip((int *)g_TacticalRender, 0);
    v2 = this->SidebarClass_field_0x2C;
    this->MovementZones = 1;
    *(char *)(v2 + 60) = 1;
    result = MapClass::MarkForRedraw(&DataGlobal_87F7E8, 0);
    g_CameoRenderFlag = 1;
    g_TooltipActive = 1;
    return result;
}
}

// 0x6AB9E0
int SidebarClass::deselect()
{
{
    int v2;
    int result;
    SidebarClass::updateStripPosition((int *)g_TacticalRender);
    v2 = this->SidebarClass_field_0x2C;
    this->MovementZones = 0;
    *(char *)(v2 + 60) = 1;
    result = MapClass::MarkForRedraw(&DataGlobal_87F7E8, 0);
    g_CameoRenderFlag = 1;
    g_TooltipActive = 1;
    return result;
}
}
