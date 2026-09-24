// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Sidebar_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/VectorClass_ptr_ConvertClass_e4.hpp"

// 0x4C9C50
int SidebarClass::draw()
{
  return *(this + 92); /*0x4c9c53*/
}
// 0x4CA170
int SidebarClass::draw2()
{
  return *(this + 26); /*0x4ca173*/
}
// 0x6A5090
int SidebarClass::InitPositions()
{
  if ( *((_DWORD *)g_ScenarioClass_Instance + 3374) ) /*0x6a5095*/
  {
    dword_B0B4E0 = g_DSurface_SidebarBounds + 7; /*0x6a50f4*/
    dword_B0B4EC = g_DSurface_SidebarBounds + 39; /*0x6a50fc*/
    dword_B0B4E4 = 52; /*0x6a5104*/
    dword_B0B4F0 = 32; /*0x6a510e*/
    g_SidebarBounds = g_DSurface_SidebarBounds + 69; /*0x6a5118*/
    dword_B0B4FC = 64; /*0x6a511d*/
  }
  else
  {
    dword_B0B4E4 = 64; /*0x6a50a5*/
    dword_B0B4F0 = 29; /*0x6a50af*/
    dword_B0B4FC = 63; /*0x6a50b9*/
    dword_B0B4E0 = g_DSurface_SidebarBounds + 8; /*0x6a50c6*/
    dword_B0B4EC = g_DSurface_SidebarBounds + 39; /*0x6a50ce*/
    g_SidebarBounds = g_DSurface_SidebarBounds + 69; /*0x6a50d6*/
  }
  return g_DSurface_SidebarBounds + 69; /*0x6a50db*/
}
// 0x6A5130
int SidebarClass::CalcBounds(char a1)
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
    dword_886F98 = 168; /*0x6a51bb*/
    DSurface_SidebarBounds = v1; /*0x6a51c0*/
    g_DSurface_SidebarBounds = 158; /*0x6a51c6*/
    v2 = v5 + 32 + v4 - 158; /*0x6a51d0*/
    g_DSurface_ViewBounds = v2; /*0x6a51d7*/
  }
  else if ( byte_A8EB7C ) /*0x6a5144*/
  {
    g_DSurface_SidebarBounds = 158; /*0x6a515b*/
    v1 = g_Map_VisibleRectOffset + DSurface_ViewBounds; /*0x6a5165*/
    dword_886F98 = 168; /*0x6a5173*/
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
  dword_B0B500 = 50; /*0x6a51f5*/
  v7 = 26; /*0x6a5205*/
  if ( *((_DWORD *)g_ScenarioClass_Instance + 3374) ) /*0x6a51ff*/
    v7 = 18; /*0x6a520e*/
  result = 50 * ((v2 - g_SidebarBounds - v7 + g_DSurface_SidebarBounds - 7) / 50); /*0x6a523f*/
  dword_B0B504 = result; /*0x6a5243*/
  if ( v6 ) /*0x6a5248*/
  {
    if ( v6 == 1 ) /*0x6a5263*/
    {
      dword_B0B50C = g_SidebarBounds + result + 7; /*0x6a5269*/
    }
    else
    {
      result += g_SidebarBounds + 7; /*0x6a5271*/
      dword_B0B50C = result; /*0x6a5275*/
    }
    dword_B0B510 = 45; /*0x6a527a*/
  }
  else
  {
    dword_B0B510 = 46; /*0x6a524e*/
    dword_B0B50C = g_SidebarBounds + result + 7; /*0x6a5258*/
  }
  dword_B0B514 = 50; /*0x6a5287*/
  dword_B0B4F4 = v1 + 22; /*0x6a5293*/
  if ( v6 ) /*0x6a529a*/
  {
    if ( v6 != 1 ) /*0x6a52c1*/
      result = v1 + 33; /*0x6a52e6*/
    dword_B0B508 = v1 + 39; /*0x6a52cd*/
    dword_B0B4DC = v1 + 33; /*0x6a52d3*/
    dword_B0B4E8 = v1 + 20; /*0x6a52d9*/
  }
  else
  {
    dword_B0B508 = v1 + 39; /*0x6a52a6*/
    dword_B0B4DC = v1 + 20; /*0x6a52ac*/
    dword_B0B4E8 = v1 + 26; /*0x6a52b2*/
    return v1 + 26; /*0x6a529f*/
  }
  return result; /*0x6a52a5*/
}
// 0x6A5840
void * SidebarClass::LoadAssets()
{
  _DWORD *v0; // eax
  void *SHP; // eax
  void *v2; // eax
  int v3; // edi
  int *v4; // esi
  void *v5; // eax
  void *v6; // eax
  void *v7; // eax
  _DWORD *v8; // eax
  void *result; // eax
  char v10; // [esp+Ch] [ebp-704h] BYREF
  char Buffer[256]; // [esp+10h] [ebp-700h] BYREF
  _BYTE v12[768]; // [esp+110h] [ebp-600h] BYREF
  _BYTE v13[768]; // [esp+410h] [ebp-300h] BYREF

  PowerClass::checkBlackout(); /*0x6a5849*/
  qmemcpy(v12, (const void *)UI_Load_72F4A0(), sizeof(v12)); /*0x6a5863*/
  if ( g_SidebarConfig ) /*0x6a586d*/
  {
    (**(void (__thiscall ***)(int, int))g_SidebarConfig)(g_SidebarConfig, 1); /*0x6a5873*/
    g_SidebarConfig = 0; /*0x6a5875*/
  }
  v0 = __2_YAPAXI_Z(0x188u); /*0x6a5880*/
  if ( v0 ) /*0x6a588a*/
    g_SidebarConfig = (int)ConvertClass::Construct(v0, (int)v12, (int)v12, g_DSurface_Primary, 1, 0); /*0x6a58ad*/
  else
    g_SidebarConfig = 0; /*0x6a58b4*/
  dword_B0B484 = LoadFileSHP(aGclock2Shp, (bool *)&byte_B0B48F); /*0x6a58d4*/
  v10 = 0; /*0x6a58d9*/
  SHP = LoadFileSHP(aSellShp, (bool *)&v10); /*0x6a58dd*/
  ShapeButton::SetShape((int)dword_B07DF8, (int)SHP, 0, 0); /*0x6a58e8*/
  ButtonClass::SetState(dword_B07DF8, v10); /*0x6a58f7*/
  dword_B07E48 = g_SidebarConfig; /*0x6a590c*/
  v2 = LoadFileSHP(aRepairShp, (bool *)&v10); /*0x6a5911*/
  ShapeButton::SetShape((int)dword_B0B3A0, (int)v2, 0, 0); /*0x6a591c*/
  ButtonClass::SetState(dword_B0B3A0, v10); /*0x6a592b*/
  v3 = 0; /*0x6a5936*/
  dword_B0B3F0 = g_SidebarConfig; /*0x6a5938*/
  v4 = (int *)&unk_B07C48; /*0x6a593e*/
  do /*0x6a598c*/
  {
    sprintf(Buffer, "TAB%02d.SHP", v3); /*0x6a594e*/
    v5 = LoadFileSHP(Buffer, (bool *)&v10); /*0x6a5960*/
    ShapeButton::SetShape((int)v4, (int)v5, 0, 0); /*0x6a5968*/
    ButtonClass::SetState(v4, v10); /*0x6a5974*/
    ++v3; /*0x6a597f*/
    v4[20] = g_SidebarConfig; /*0x6a5980*/
    v4 += 24; /*0x6a5983*/
  }
  while ( (int)v4 < (int)&dword_B07DC8 ); /*0x6a598c*/
  v6 = LoadFileSHP(aRDnShp, (bool *)&v10); /*0x6a5999*/
  ShapeButton::SetShape((int)byte_B0B328, (int)v6, 0, 0); /*0x6a59a4*/
  ButtonClass::SetState(byte_B0B328, v10); /*0x6a59b3*/
  dword_B0B378 = g_SidebarConfig; /*0x6a59bf*/
  v7 = LoadFileSHP(aRUpShp, (bool *)&v10); /*0x6a59cf*/
  ShapeButton::SetShape((int)g_SidebarFlag, (int)v7, 0, 0); /*0x6a59da*/
  ButtonClass::SetState(g_SidebarFlag, v10); /*0x6a59e9*/
  dword_B0B458 = g_SidebarConfig; /*0x6a59fd*/
  dword_B0B468 = LoadFileSHP(aSide1Shp, (bool *)&byte_B0B488); /*0x6a5a11*/
  dword_B0B46C = LoadFileSHP(aSide2Shp, (bool *)&byte_B0B489); /*0x6a5a25*/
  dword_B0B470 = LoadFileSHP(aSide3Shp, (bool *)&byte_B0B48A); /*0x6a5a39*/
  dword_B0B474 = LoadFileSHP(aAddonShp, (bool *)&byte_B0B48B); /*0x6a5a43*/
  qmemcpy(v13, (const void *)UI_Load_72F4E0(), sizeof(v13)); /*0x6a5a5b*/
  if ( dword_87F6D0 ) /*0x6a5a65*/
  {
    (**(void (__thiscall ***)(int, int))dword_87F6D0)(dword_87F6D0, 1); /*0x6a5a6b*/
    dword_87F6D0 = 0; /*0x6a5a6d*/
  }
  v8 = __2_YAPAXI_Z(0x188u); /*0x6a5a78*/
  if ( v8 ) /*0x6a5a82*/
    dword_87F6D0 = (int)ConvertClass::Construct(v8, (int)v13, (int)v13, g_DSurface_Primary, 1, 0); /*0x6a5aa5*/
  else
    dword_87F6D0 = 0; /*0x6a5aac*/
  dword_B0B490 = LoadFileSHP(aObsalliShp, (bool *)&byte_B0B4CC); /*0x6a5acb*/
  dword_B0B494 = LoadFileSHP(aObssoviShp, (bool *)&byte_B0B4CD); /*0x6a5adf*/
  dword_B0B498 = LoadFileSHP(aObsyuriShp, (bool *)&byte_B0B4CE); /*0x6a5af3*/
  dword_B0B49C = LoadFileSHP(aRaniShp, (bool *)&byte_B0B4CF); /*0x6a5b07*/
  dword_B0B4A0 = LoadFileSHP(aObsiShp, (bool *)&byte_B0B4D0); /*0x6a5b1b*/
  dword_B0B4A4 = LoadFileSHP(aUsaiShp, (bool *)&byte_B0B4D1); /*0x6a5b2f*/
  dword_B0B4A8 = LoadFileSHP(aJapiShp, (bool *)&byte_B0B4D2); /*0x6a5b43*/
  dword_B0B4AC = LoadFileSHP(aFraiShp, (bool *)&byte_B0B4D3); /*0x6a5b57*/
  dword_B0B4B0 = LoadFileSHP(aGeriShp, (bool *)&byte_B0B4D4); /*0x6a5b6b*/
  dword_B0B4B4 = LoadFileSHP(aGbriShp, (bool *)&byte_B0B4D5); /*0x6a5b7f*/
  dword_B0B4B8 = LoadFileSHP(aDjbiShp, (bool *)&byte_B0B4D6); /*0x6a5b93*/
  dword_B0B4BC = LoadFileSHP(aArbiShp, (bool *)&byte_B0B4D7); /*0x6a5ba7*/
  dword_B0B4C0 = LoadFileSHP(aLatiShp, (bool *)&byte_B0B4D8); /*0x6a5bbb*/
  dword_B0B4C4 = LoadFileSHP(aRusiShp, (bool *)&byte_B0B4D9); /*0x6a5bcf*/
  result = LoadFileSHP(aYriiShp, (bool *)&byte_B0B4DA); /*0x6a5bd4*/
  dword_B0B4C8 = result; /*0x6a5bdb*/
  return result; /*0x6a5bd9*/
}
// 0x6A6C30
int SidebarClass::Redraw(char a2)
{
  int v2; // edi
  int v3; // esi
  int v4; // esi
  void *v5; // ebp
  int i; // edi
  int v7; // eax
  int *v8; // esi
  char v9; // al
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

  v2 = (int)this; /*0x6a6c3b*/
  dword_8809F4 = dword_B07DC8; /*0x6a6c49*/
  dword_8809F8 = dword_B07DCC; /*0x6a6c53*/
  dword_8809FC = dword_B07DD0; /*0x6a6c5f*/
  v19 = g_DSurface_Hidden_2; /*0x6a6c65*/
  dword_880A00 = dword_B07DD4; /*0x6a6c6f*/
  g_DSurface_Hidden_2 = DSurface_Sidebar; /*0x6a6c74*/
  v17 = 0; /*0x6a6c82*/
  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)DSurface_Sidebar + 128))(DSurface_Sidebar); /*0x6a6c92*/
  v22[2] = (*(int (__thiscall **)(int))(*(_DWORD *)DSurface_Sidebar + 124))(DSurface_Sidebar); /*0x6a6c99*/
  v22[0] = 0; /*0x6a6ca3*/
  v22[1] = 0; /*0x6a6ca7*/
  v22[3] = v3; /*0x6a6cab*/
  if ( a2 || *(_BYTE *)(v2 + 21414) || (v23 = 0, *(_BYTE *)(v2 + 21415)) ) /*0x6a6cb9*/
    v23 = 1; /*0x6a6cc7*/
  if ( *(_BYTE *)(v2 + 21413) && v23 && !g_ArmageddonMode ) /*0x6a6ce8*/
  {
    if ( *(_BYTE *)(v2 + 21415) ) /*0x6a6cee*/
    {
      v21 = g_DSurface_SidebarBounds; /*0x6a6d1f*/
      v17 = 1; /*0x6a6d39*/
      v20 = 0; /*0x6a6d3e*/
      DrawToSurfaceSHP( /*0x6a6d42*/
        DSurface_Sidebar,
        g_SidebarConfig,
        (int)dword_B0B468,
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
      v4 = g_SidebarBounds; /*0x6a6d47*/
      v5 = dword_B0B46C; /*0x6a6d4d*/
      for ( i = 0; ; ++i ) /*0x6a6d53*/
      {
        v7 = 26; /*0x6a6d63*/
        if ( *((_DWORD *)g_ScenarioClass_Instance + 3374) ) /*0x6a6d5b*/
          v7 = 18; /*0x6a6d6a*/
        if ( i >= (g_DSurface_ViewBounds - g_SidebarBounds - v7 + g_DSurface_SidebarBounds - 7) / 50 ) /*0x6a6d9c*/
          break; /*0x6a6d9c*/
        v20 = 0; /*0x6a6dcc*/
        v21 = v4; /*0x6a6dd0*/
        DrawToSurfaceSHP(DSurface_Sidebar, g_SidebarConfig, (int)v5, 0, &v20, v22, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x6a6dd4*/
        v5 = dword_B0B46C; /*0x6a6dd9*/
        v4 += *((__int16 *)dword_B0B46C + 2); /*0x6a6de3*/
      }
      v20 = 0; /*0x6a6e1c*/
      v21 = v4; /*0x6a6e20*/
      DrawToSurfaceSHP( /*0x6a6e24*/
        DSurface_Sidebar,
        g_SidebarConfig,
        (int)dword_B0B470,
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
      v21 = v4 + *((__int16 *)dword_B0B470 + 2); /*0x6a6e48*/
      v20 = 0; /*0x6a6e6b*/
      DrawToSurfaceSHP( /*0x6a6e6f*/
        DSurface_Sidebar,
        g_SidebarConfig,
        (int)dword_B0B474,
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
    ShapeButton::Draw((int)dword_B07DF8, v17); /*0x6a6e88*/
    ShapeButton::Draw((int)dword_B0B3A0, v17); /*0x6a6e93*/
    v8 = (int *)&unk_B07C48; /*0x6a6e98*/
    do /*0x6a6eaf*/
    {
      ShapeButton::Draw((int)v8, 1); /*0x6a6ea1*/
      v8 += 24; /*0x6a6ea6*/
    }
    while ( (int)v8 < (int)&dword_B07DC8 ); /*0x6a6eaf*/
    ShapeButton::Draw((int)byte_B0B328, v17); /*0x6a6eb7*/
    ShapeButton::Draw((int)g_SidebarFlag, v17); /*0x6a6ec2*/
    if ( *(_DWORD *)(v2 + 21400) ) /*0x6a6ec7*/
    {
      v21 = g_SidebarBounds; /*0x6a6eef*/
      v14 = *(_DWORD *)(v2 + 21396); /*0x6a6f0a*/
      v20 = 0; /*0x6a6f18*/
      DrawToSurfaceSHP( /*0x6a6f1c*/
        DSurface_Sidebar,
        g_SidebarConfig,
        (int)dword_B0B478,
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
        (int)dword_B0B47C,
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
        (int)dword_B0B480,
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
  v9 = v23 || v17; /*0x6a6ff4*/
  Sidebar::Render(v2, v9); /*0x6a6ffc*/
  if ( byte_B07E4C ) /*0x6a7007*/
  {
    v10 = 1; /*0x6a7009*/
    byte_B07E4C = 0; /*0x6a700b*/
    g_TooltipActive = 1; /*0x6a7011*/
  }
  else
  {
    v10 = g_TooltipActive; /*0x6a7019*/
  }
  if ( byte_B0B3F4 ) /*0x6a7025*/
  {
    v10 = 1; /*0x6a7027*/
    byte_B0B3F4 = 0; /*0x6a7029*/
    g_TooltipActive = 1; /*0x6a702f*/
  }
  v11 = &unk_B07C9C; /*0x6a7035*/
  do /*0x6a704a*/
  {
    if ( *v11 ) /*0x6a703a*/
    {
      v10 = 1; /*0x6a703e*/
      *v11 = 0; /*0x6a7040*/
    }
    v11 += 96; /*0x6a7042*/
  }
  while ( (int)v11 < (int)&dword_B07E1C ); /*0x6a704a*/
  g_TooltipActive = v10; /*0x6a7051*/
  if ( byte_B0B37C ) /*0x6a7059*/
  {
    v10 = 1; /*0x6a705b*/
    byte_B0B37C = 0; /*0x6a705d*/
    g_TooltipActive = 1; /*0x6a7063*/
  }
  if ( byte_B0B45C ) /*0x6a706f*/
  {
    v10 = 1; /*0x6a7071*/
    byte_B0B45C = 0; /*0x6a7073*/
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
// 0x6A7590
int SidebarClass::SwitchTab(int a2)
{
  int result; // eax
  int v4; // esi
  int v5; // edi
  int v6; // edi
  int v7; // eax
  int v8; // esi
  int v9; // ebx

  result = *(_DWORD *)(this + 21404); /*0x6a7598*/
  if ( a2 != result ) /*0x6a75a0*/
  {
    GadgetClass::Hide((_BYTE *)&unk_B07C48 + 96 * result); /*0x6a75b4*/
    v4 = 0; /*0x6a75c6*/
    v5 = this + 3988 * *(_DWORD *)(this + 21404) + 5444; /*0x6a75ce*/
    *(_BYTE *)(this + 3988 * *(_DWORD *)(this + 21404) + 5472) = 0; /*0x6a75d5*/
    do /*0x6a7600*/
    {
      Tactical::SelectObject(&MapClass_Instance, 56 * (v4 + 60 * *(_DWORD *)(v5 + 56)) + 11566720); /*0x6a75f7*/
      ++v4; /*0x6a75fc*/
    }
    while ( v4 < 60 ); /*0x6a7600*/
    *(_DWORD *)(this + 21404) = a2; /*0x6a7605*/
    GadgetClass::Show((_BYTE *)&unk_B07C48 + 96 * a2); /*0x6a7614*/
    v6 = this + 3988 * *(_DWORD *)(this + 21404) + 5444; /*0x6a762c*/
    *(_BYTE *)(this + 3988 * *(_DWORD *)(this + 21404) + 5472) = 1; /*0x6a7633*/
    v7 = 26; /*0x6a7645*/
    if ( *((_DWORD *)g_ScenarioClass_Instance + 3374) ) /*0x6a763d*/
      v7 = 18; /*0x6a764c*/
    v8 = 0; /*0x6a765f*/
    v9 = 2 * ((g_DSurface_ViewBounds - g_SidebarBounds - v7 + g_DSurface_SidebarBounds - 7) / 50); /*0x6a767f*/
    if ( v9 > 0 ) /*0x6a7683*/
    {
      do /*0x6a76c8*/
      {
        Hash::Reset((_DWORD *)(56 * (v8 + 60 * *(_DWORD *)(v6 + 56)) + 11566720)); /*0x6a769d*/
        Hash::InsertOrdered(&MapClass_Instance, 56 * (v8 + 60 * *(_DWORD *)(v6 + 56)) + 11566720); /*0x6a76c0*/
        ++v8; /*0x6a76c5*/
      }
      while ( v8 < v9 ); /*0x6a76c8*/
    }
    g_CameoRenderFlag = 1; /*0x6a76cc*/
    result = Tactical::UpdateUIVisibility((_DWORD *)this); /*0x6a76d3*/
    *(_BYTE *)(this + 21415) = 1; /*0x6a76d9*/
  }
  return result; /*0x6a76e1*/
}
// 0x6ABD30
GadgetClass * * SidebarClass::LoadResources()
{
  int v0; // esi
  int v1; // eax
  int *v2; // esi
  int v3; // edi
  int v4; // eax
  int *v5; // esi
  int v6; // ebx
  int v7; // ebp
  int i; // edi
  char result; // al
  int v10; // edi
  int *v11; // esi
  int v12; // ecx
  int v13; // edx
  int v14; // eax
  int j; // esi
  int v16; // edi
  int *v17; // esi
  int v18; // edx
  int v19; // ecx
  int v20; // edx
  int v21; // [esp-4h] [ebp-38h]
  int v22; // [esp-4h] [ebp-38h]
  int *v23; // [esp+10h] [ebp-24h]
  int v24; // [esp+14h] [ebp-20h]
  int v25; // [esp+18h] [ebp-1Ch] BYREF
  int v26; // [esp+1Ch] [ebp-18h]
  int v27; // [esp+20h] [ebp-14h]
  int v28; // [esp+24h] [ebp-10h]
  int v29; // [esp+28h] [ebp-Ch]
  wchar_t *v30; // [esp+2Ch] [ebp-8h]
  char v31; // [esp+30h] [ebp-4h]

  PowerClass::getDrain(); /*0x6abd39*/
  SidebarClass::CalcBounds(0); /*0x6abd42*/
  if ( !dword_B0B468 ) /*0x6abd4e*/
  {
    dword_B0B468 = (void *)SearchMIXFile(aSidegdi1Shp, 0); /*0x6abd63*/
    dword_B0B46C = (void *)SearchMIXFile(aSidegdi2Shp, 0); /*0x6abd74*/
    dword_B0B470 = (void *)SearchMIXFile(aSidegdi3Shp, 0); /*0x6abd7e*/
  }
  Rect_Point::Set(&dword_B07E58, DSurface_SidebarBounds + 16, g_Map_VisibleRect); /*0x6abd98*/
  VectorClass_ptr_ConvertClass::MarkDirty(&dword_B07E58); /*0x6abda2*/
  v0 = dword_B04A28 + dword_B04A20; /*0x6abdb2*/
  v21 = dword_B04A28 + dword_B04A20; /*0x6abdbc*/
  if ( byte_A8EB7C ) /*0x6abdbd*/
    Rect_Point::Set(&dword_B07E58, DSurface_ViewBounds + g_Map_VisibleRectOffset, v21); /*0x6abdce*/
  else
    Rect_Point::Set(&dword_B07E58, 0, v21); /*0x6abdd7*/
  v22 = (*(int (__thiscall **)(int))(*(_DWORD *)DSurface_Sidebar + 128))(DSurface_Sidebar) - v0; /*0x6abdf2*/
  v1 = (*(int (__thiscall **)(int))(*(_DWORD *)DSurface_Sidebar + 124))(DSurface_Sidebar); /*0x6abdf5*/
  ObjectClass::SetPositionXY(&dword_B07E58, v1, v22); /*0x6abdfe*/
  Rect_Point::Set(dword_B0B3A0, dword_B0B4DC, dword_B0B4E0); /*0x6abe15*/
  VectorClass_ptr_ConvertClass::MarkDirty(dword_B0B3A0); /*0x6abe1f*/
  dword_B0B3E4 = -DSurface_SidebarBounds; /*0x6abe37*/
  Rect_Point::Set(dword_B07DF8, dword_B0B3AC + dword_B0B4E4, dword_B0B3B0); /*0x6abe4c*/
  VectorClass_ptr_ConvertClass::MarkDirty(dword_B07DF8); /*0x6abe56*/
  v2 = (int *)&unk_B07C48; /*0x6abe60*/
  dword_B07E3C = -DSurface_SidebarBounds; /*0x6abe67*/
  v3 = 0; /*0x6abe6c*/
  do /*0x6abea8*/
  {
    Rect_Point::Set(v2, dword_B0B4E8 + v3 * dword_B0B4F0, dword_B0B4EC); /*0x6abe88*/
    VectorClass_ptr_ConvertClass::MarkDirty(v2); /*0x6abe8f*/
    v2 += 24; /*0x6abe99*/
    *(v2 - 7) = -DSurface_SidebarBounds; /*0x6abe9e*/
    ++v3; /*0x6abea1*/
  }
  while ( (int)v2 < (int)&dword_B07DC8 ); /*0x6abea8*/
  Rect_Point::Set(byte_B0B328, dword_B0B508, dword_B0B50C); /*0x6abebd*/
  VectorClass_ptr_ConvertClass::MarkDirty(byte_B0B328); /*0x6abec7*/
  dword_B0B36C = -DSurface_SidebarBounds; /*0x6abedf*/
  Rect_Point::Set(g_SidebarFlag, dword_B0B508 + dword_B0B510, dword_B0B50C); /*0x6abef2*/
  VectorClass_ptr_ConvertClass::MarkDirty(g_SidebarFlag); /*0x6abefc*/
  dword_B0B44C = -DSurface_SidebarBounds; /*0x6abf0f*/
  v4 = 26; /*0x6abf1d*/
  if ( *((_DWORD *)g_ScenarioClass_Instance + 3374) ) /*0x6abf15*/
    v4 = 18; /*0x6abf24*/
  v5 = (int *)&unk_B07E80; /*0x6abf44*/
  v23 = (int *)&unk_B07E80; /*0x6abf4d*/
  v6 = (g_DSurface_ViewBounds - v4 - g_SidebarBounds + g_DSurface_SidebarBounds - 7) / 50; /*0x6abf5d*/
  v24 = 2 * v6; /*0x6abf62*/
  do /*0x6abfc2*/
  {
    v7 = 0; /*0x6abf66*/
    if ( v6 > 0 ) /*0x6abf6a*/
    {
      do /*0x6abfac*/
      {
        for ( i = 0; i < 2; ++i ) /*0x6abf6c*/
        {
          (*(void (__thiscall **)(int *, int, int))(*v5 + 100))( /*0x6abf96*/
            v5,
            dword_B0B4F4 + i * dword_B0B4FC,
            v7 * dword_B0B500 + g_SidebarBounds + 1);
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
  while ( (int)v5 < (int)&dword_B0B300 ); /*0x6abfc2*/
  result = g_TacticalRender; /*0x6abfc4*/
  if ( g_TacticalRender ) /*0x6abfcd*/
  {
    v31 = 0; /*0x6abfd3*/
    v10 = 203; /*0x6abfd7*/
    v11 = (int *)&unk_B07C58; /*0x6abfdc*/
    do /*0x6ac02d*/
    {
      v12 = *v11; /*0x6abfe4*/
      v13 = v11[1]; /*0x6abfe6*/
      v26 = *(v11 - 1); /*0x6abfe9*/
      v14 = v11[2]; /*0x6abfed*/
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
    v16 = 0; /*0x6ac04d*/
    if ( v24 > 0 ) /*0x6ac051*/
    {
      v17 = (int *)&unk_B07E90; /*0x6ac053*/
      do /*0x6ac0a5*/
      {
        v18 = *(v17 - 1); /*0x6ac05c*/
        v27 = *v17; /*0x6ac065*/
        v25 = v16 + 1000; /*0x6ac069*/
        v19 = v17[1]; /*0x6ac06d*/
        v26 = v18; /*0x6ac070*/
        v20 = v17[2]; /*0x6ac074*/
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
    v26 = dword_B07E04; /*0x6ac0ba*/
    v29 = dword_B07E10; /*0x6ac0c6*/
    v31 = 0; /*0x6ac0d0*/
    v25 = 102; /*0x6ac0d5*/
    v30 = aTxtSellMode; /*0x6ac0dd*/
    v27 = dword_B07E08; /*0x6ac0e5*/
    v28 = dword_B07E0C; /*0x6ac0e9*/
    HashTable::Remove((int *)g_TacticalRender, 102); /*0x6ac0ed*/
    CommandClass::AddAction(g_TacticalRender, (int)&v25); /*0x6ac0fd*/
    v26 = dword_B0B3AC; /*0x6ac113*/
    v27 = dword_B0B3B0; /*0x6ac11c*/
    v25 = 101; /*0x6ac128*/
    v30 = aTxtRepairMode; /*0x6ac130*/
    v28 = dword_B0B3B4; /*0x6ac138*/
    v29 = dword_B0B3B8; /*0x6ac13c*/
    HashTable::Remove((int *)g_TacticalRender, 101); /*0x6ac140*/
    CommandClass::AddAction(g_TacticalRender, (int)&v25); /*0x6ac150*/
    v26 = dword_B0B414; /*0x6ac166*/
    v28 = dword_B0B41C; /*0x6ac170*/
    v25 = 200; /*0x6ac17f*/
    v30 = 0; /*0x6ac187*/
    v27 = dword_B0B418; /*0x6ac18b*/
    v29 = dword_B0B420; /*0x6ac18f*/
    HashTable::Remove((int *)g_TacticalRender, 200); /*0x6ac193*/
    CommandClass::AddAction(g_TacticalRender, (int)&v25); /*0x6ac1a3*/
    v26 = dword_B0B334; /*0x6ac1b9*/
    v29 = dword_B0B340; /*0x6ac1c8*/
    v25 = 201; /*0x6ac1d2*/
    v30 = 0; /*0x6ac1da*/
    v27 = dword_B0B338; /*0x6ac1de*/
    v28 = dword_B0B33C; /*0x6ac1e2*/
    HashTable::Remove((int *)g_TacticalRender, 201); /*0x6ac1e6*/
    return CommandClass::AddAction(g_TacticalRender, (int)&v25); /*0x6ac1f6*/
  }
  return result; /*0x6ac1fb*/
}
// 0x40D270
namespace gamemd {
int SidebarClass::initButtons2()
{
  return SidebarClass::InitButtons(this);
}
}
// 0x653010
void SidebarClass::CreateScrollButtons()
{
  DisplayClass::ddtor(); /*0x653011*/
  if ( !g_ArmageddonMode ) /*0x65301f*/
  {
    dword_B0499C = 242; /*0x65303d*/
    byte_B049C4 = 1; /*0x653047*/
    dword_B049C8 = g_SidebarConfig; /*0x65304e*/
    byte_B049A5 = 0; /*0x653053*/
    dword_B049A8 = 0; /*0x653059*/
    dword_B04998 = 5; /*0x65305f*/
    Rect_Point::Set(dword_B04978, dword_B04A00, dword_B04A04); /*0x653069*/
    ShapeButton::SetShape((int)dword_B04978, (int)dword_B048E0, 0, 0); /*0x65307b*/
    VectorClass_ptr_ConvertClass::MarkDirty(dword_B04978); /*0x653085*/
    dword_B04960 = g_SidebarConfig; /*0x65309b*/
    dword_B04934 = 243; /*0x6530a8*/
    byte_B0495C = 1; /*0x6530b2*/
    byte_B0493D = 0; /*0x6530b9*/
    dword_B04940 = 0; /*0x6530bf*/
    dword_B04930 = 5; /*0x6530c5*/
    Rect_Point::Set(dword_B04910, dword_B048C8, dword_B048CC); /*0x6530cf*/
    ShapeButton::SetShape((int)dword_B04910, (int)dword_B048AC, 0, 0); /*0x6530e2*/
    VectorClass_ptr_ConvertClass::MarkDirty(dword_B04910); /*0x6530ec*/
  }
}
// 0x6AB990
int SidebarClass::select()
{
  int v2; // eax
  int result; // eax

  SidebarClass::updateStripVisibility((_DWORD *)g_TacticalRender); /*0x6ab99a*/
  SidebarClass::initializeStrip((_DWORD *)g_TacticalRender, 0); /*0x6ab9a7*/
  v2 = *(_DWORD *)(this + 44); /*0x6ab9ac*/
  *(_BYTE *)(this + 52) = 1; /*0x6ab9b1*/
  *(_BYTE *)(v2 + 60) = 1; /*0x6ab9bb*/
  result = MapClass::MarkForRedraw(&MapClass_Instance, 0); /*0x6ab9be*/
  g_CameoRenderFlag = 1; /*0x6ab9c3*/
  g_TooltipActive = 1; /*0x6ab9c9*/
  return result; /*0x6ab9cf*/
}
// 0x6AB9E0
int SidebarClass::deselect()
{
  int v2; // eax
  int result; // eax

  SidebarClass::updateStripPosition((_DWORD *)g_TacticalRender); /*0x6ab9e9*/
  v2 = *(_DWORD *)(this + 44); /*0x6ab9ee*/
  *(_BYTE *)(this + 52) = 0; /*0x6ab9f1*/
  *(_BYTE *)(v2 + 60) = 1; /*0x6ab9fc*/
  result = MapClass::MarkForRedraw(&MapClass_Instance, 0); /*0x6aba00*/
  g_CameoRenderFlag = 1; /*0x6aba05*/
  g_TooltipActive = 1; /*0x6aba0c*/
  return result; /*0x6aba13*/
}