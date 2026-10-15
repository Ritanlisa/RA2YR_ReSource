// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/GadgetClass_e4.hpp"
#include "e4/classes/Hash_e4.hpp"
#include "e4/classes/Sidebar_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/VectorClass_ptr_ConvertClass_e4.hpp"
#include "e4/classes/SidebarClass_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/PowerClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/SuperWeaponTypeClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Skirmish_e4.hpp"
#include "e4/classes/TeamTypeClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/Draw_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/CreateTeamCommand_e4.hpp"
#include "e4/classes/FactoryClass_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/MultiplayerGameMode_e4.hpp"
#include "e4/classes/SideClass_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/Array_e4.hpp"
#include "e4/classes/WeaponTypeClass_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/E4Recv_728A00_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/LayerClass_e4.hpp"
#include "e4/classes/LocomotionClass_e4.hpp"
#include "e4/classes/SlaveManagerClass_e4.hpp"
#include "e4/classes/SmudgeTypeClass_e4.hpp"
#include "e4/classes/MissionClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/FileClass_e4.hpp"
#include "e4/classes/Stream_e4.hpp"
#include "e4/classes/ButtonClass_e4.hpp"
#include "e4/classes/ShapeButton_e4.hpp"
#include "e4/classes/CommandClass_e4.hpp"
#include "e4/classes/DisplayClass_e4.hpp"
#include "e4/classes/LinkClass_e4.hpp"
#include "e4/classes/Rect_Point_e4.hpp"
#include "e4/classes/ControlClass_e4.hpp"
#include "classes/FogOfWar_e4.hpp"  // G42.57w9 method-carrier supply
#include "e4/classes/MapClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/AudioStream_e4.hpp"

// 0x4C9C50
namespace gamemd {  // G42.18 ns repair
int SidebarClass::draw()
{

  return (char)this->q05C; /*0x4c9c53*/

}
} // namespace gamemd
// 0x4CA170
namespace gamemd {
int SidebarClass::draw2()
{

  return this->somecount_4C; /*0x4ca173*/

}
} // namespace gamemd
// 0x6A5090
namespace gamemd {
int SidebarClass::InitPositions()
{
  if ( ((unsigned int *)(dword_A8B230))[374].NeedsSaveOrLink ) /*0x6a5095*/
  {
    dword_B0B4E0 = g_DSurface_SidebarBounds + 7; /*0x6a50f4*/
    dword_B0B4EC = g_DSurface_SidebarBounds + 39; /*0x6a50fc*/
    dword_B0B4E4 = 52; /*0x6a5104*/
    dword_B0B4F0 = 32; /*0x6a510e*/
    g_SidebarBounds = g_DSurface_SidebarBounds + 69; /*0x6a5118*/
    dword_B0B4FC = 64; /*0x6a511d*/
    return g_DSurface_SidebarBounds + 69; /*0x6a5101*/
  }
  else
  {
    dword_B0B4E4 = 64; /*0x6a50a5*/
    dword_B0B4F0 = 29; /*0x6a50af*/
    dword_B0B4FC = 63; /*0x6a50b9*/
    dword_B0B4E0 = g_DSurface_SidebarBounds + 8; /*0x6a50c6*/
    dword_B0B4EC = g_DSurface_SidebarBounds + 39; /*0x6a50ce*/
    g_SidebarBounds = g_DSurface_SidebarBounds + 69; /*0x6a50d6*/
    return g_DSurface_SidebarBounds + 69; /*0x6a50d3*/
  }
}
} // namespace gamemd
// 0x6A5130
namespace gamemd {
int SidebarClass::CalcBounds(char a1)
{
  int v1; // ebx
  int v2; // eax
  unsigned int *v3; // eax
  int v4; // ecx
  int v5; // esi
  int v6; // esi
  int v7; // ecx
  int result; // eax
  unsigned char v9[16]; // [esp+8h] [ebp-10h] BYREF

  if ( a1 ) /*0x6a513b*/
  {
    v3 = (unsigned int *)SidebarClass::calcSidebarRect(v9); /*0x6a5199*/
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
    v1 = dword_886FA8 + DSurface_ViewBounds; /*0x6a5165*/
    dword_886F98 = 168; /*0x6a5173*/
    DSurface_SidebarBounds = dword_886FA8 + DSurface_ViewBounds; /*0x6a5181*/
    v2 = dword_886FAC + 32 + dword_886FA4 - 158; /*0x6a5187*/
    g_DSurface_ViewBounds = v2; /*0x6a518e*/
  }
  else
  {
    v2 = g_DSurface_ViewBounds; /*0x6a51de*/
    v1 = DSurface_SidebarBounds; /*0x6a51e3*/
  }
  v6 = dword_A8B230->playerSideIndex; /*0x6a51ef*/
  dword_B0B500 = 50; /*0x6a51f5*/
  v7 = 26; /*0x6a5205*/
  if ( dword_A8B230->playerSideIndex ) /*0x6a51ff*/
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
} // namespace gamemd
// 0x6A5840
namespace gamemd {
void * SidebarClass::LoadAssets()
{
  PowerClass *v1; // ecx
  ConvertClass *v2; // eax
  void *FileSHP; // eax
  void *v4; // eax
  int v5; // edi
  ShapeButtonClass *v6; // esi
  void *v7; // eax
  void *v8; // eax
  void *v9; // eax
  ConvertClass *v10; // eax
  void *result; // eax
  char v12; // [esp+Ch] [ebp-704h] BYREF
  char Buffer[256]; // [esp+10h] [ebp-700h] BYREF
  int v14[192]; // [esp+110h] [ebp-600h] BYREF
  int v15[192]; // [esp+410h] [ebp-300h] BYREF

  PowerClass::checkBlackout(v1); /*0x6a5849*/
  memcpy(v14, UI_Load_72F4A0(), sizeof(v14)); /*0x6a5863*/
  if ( *(unsigned int *)&g_SidebarConfig ) /*0x6a586d*/
  {
    (***(void (****)(unsigned int, int))&g_SidebarConfig)(*(unsigned int *)&g_SidebarConfig, 1); /*0x6a5873*/
    *(unsigned int *)&g_SidebarConfig = 0; /*0x6a5875*/
  }
  v2 = (ConvertClass *)operator new(0x188u); /*0x6a5880*/
  if ( v2 ) /*0x6a588a*/
        *(unsigned int *)&g_SidebarConfig = ((int)(/*0x6a58ad*/ v2))->Construct((int)v14, (int)v14, (int)g_DSurface_Primary, 1, 0);
  else
    *(unsigned int *)&g_SidebarConfig = 0; /*0x6a58b4*/
  dword_B0B484 = (unsigned int)(LoadFileSHP((char *)(aGclock2Shp), (bool *)&byte_B0B48F)); /*0x6a58d4*/
  v12 = 0; /*0x6a58d9*/
  FileSHP = LoadFileSHP((char *)(aSellShp), (bool *)&v12); /*0x6a58dd*/
  ((int)(&stru_B07DF8))->SetShape((int)FileSHP, 0, 0); /*0x6a58e8*/
  ButtonClass::SetState((char)((ButtonClass *)&stru_B07DF8), v12); /*0x6a58f7*/
  dword_B07E48 = *(unsigned int *)&g_SidebarConfig; /*0x6a590c*/
  v4 = LoadFileSHP((char *)(aRepairShp), (bool *)&v12); /*0x6a5911*/
  ((int)(&stru_B0B3A0))->SetShape((int)v4, 0, 0); /*0x6a591c*/
  ButtonClass::SetState((char)((ButtonClass *)&stru_B0B3A0), v12); /*0x6a592b*/
  v5 = 0; /*0x6a5936*/
  dword_B0B3F0 = *(unsigned int *)&g_SidebarConfig; /*0x6a5938*/
  v6 = (gamemd::ShapeButtonClass *)(&stru_B07C48); /*0x6a593e*/
  do /*0x6a598c*/
  {
    sprintf(Buffer, "TAB%02d.SHP", v5); /*0x6a594e*/
    v7 = LoadFileSHP(Buffer, (bool *)&v12); /*0x6a5960*/
    ((int)(v6))->SetShape((int)v7, 0, 0); /*0x6a5968*/
    ButtonClass::SetState((char)((ButtonClass *)v6), v12); /*0x6a5974*/
    ++v5; /*0x6a597f*/
    v6[6].ShapeButtonClass_field_0x08 = *(unsigned int *)&g_SidebarConfig; /*0x6a5980*/
    v6 += 8; /*0x6a5983*/
  }
  while ( (int)v6 < (int)&dword_B07DC8 ); /*0x6a598c*/
  v8 = LoadFileSHP((char *)(aRDnShp), (bool *)&v12); /*0x6a5999*/
  ((int)(&stru_B0B328))->SetShape((int)v8, 0, 0); /*0x6a59a4*/
  ButtonClass::SetState((char)((ButtonClass *)&stru_B0B328), v12); /*0x6a59b3*/
  dword_B0B378 = *(unsigned int *)&g_SidebarConfig; /*0x6a59bf*/
  v9 = LoadFileSHP((char *)(aRUpShp), (bool *)&v12); /*0x6a59cf*/
  ((int)(&g_SidebarFlag))->SetShape((int)v9, 0, 0); /*0x6a59da*/
  ButtonClass::SetState((char)((ButtonClass *)&g_SidebarFlag), v12); /*0x6a59e9*/
  dword_B0B458 = *(unsigned int *)&g_SidebarConfig; /*0x6a59fd*/
  dword_B0B468 = (unsigned int)(LoadFileSHP((char *)(aSide1Shp), (bool *)&byte_B0B488)); /*0x6a5a11*/
  dword_B0B46C = (unsigned int)(LoadFileSHP((char *)(aSide2Shp), (bool *)&byte_B0B489)); /*0x6a5a25*/
  dword_B0B470 = (unsigned int)(LoadFileSHP((char *)(aSide3Shp), (bool *)&byte_B0B48A)); /*0x6a5a39*/
  dword_B0B474 = (unsigned int)(LoadFileSHP((char *)(aAddonShp), (bool *)&byte_B0B48B)); /*0x6a5a43*/
  memcpy(v15, UI_Load_72F4E0(), sizeof(v15)); /*0x6a5a5b*/
  if ( *(unsigned int *)&DataGlobal_87F6D0 ) /*0x6a5a65*/
  {
    (***(void (****)(unsigned int, int))&DataGlobal_87F6D0)(*(unsigned int *)&DataGlobal_87F6D0, 1); /*0x6a5a6b*/
    *(unsigned int *)&DataGlobal_87F6D0 = 0; /*0x6a5a6d*/
  }
  v10 = (ConvertClass *)operator new(0x188u); /*0x6a5a78*/
  if ( v10 ) /*0x6a5a82*/
        *(unsigned int *)&DataGlobal_87F6D0 = ((int)(/*0x6a5aa5*/ v10))->Construct((int)v15, (int)v15, (int)g_DSurface_Primary, 1, 0);
  else
    *(unsigned int *)&DataGlobal_87F6D0 = 0; /*0x6a5aac*/
  dword_B0B490 = (unsigned int)(LoadFileSHP((char *)(aObsalliShp), (bool *)&byte_B0B4CC)); /*0x6a5acb*/
  dword_B0B494 = (unsigned int)(LoadFileSHP((char *)(aObssoviShp), (bool *)&byte_B0B4CD)); /*0x6a5adf*/
  dword_B0B498 = (unsigned int)(LoadFileSHP((char *)(aObsyuriShp), (bool *)&byte_B0B4CE)); /*0x6a5af3*/
  dword_B0B49C = (unsigned int)(LoadFileSHP((char *)(aRaniShp), (bool *)&byte_B0B4CF)); /*0x6a5b07*/
  dword_B0B4A0 = (unsigned int)(LoadFileSHP((char *)(aObsiShp), (bool *)&byte_B0B4D0)); /*0x6a5b1b*/
  dword_B0B4A4 = (unsigned int)(LoadFileSHP((char *)(aUsaiShp), (bool *)&byte_B0B4D1)); /*0x6a5b2f*/
  dword_B0B4A8 = (unsigned int)(LoadFileSHP((char *)(aJapiShp), (bool *)&byte_B0B4D2)); /*0x6a5b43*/
  dword_B0B4AC = (unsigned int)(LoadFileSHP((char *)(aFraiShp), (bool *)&byte_B0B4D3)); /*0x6a5b57*/
  dword_B0B4B0 = (unsigned int)(LoadFileSHP((char *)(aGeriShp), (bool *)&byte_B0B4D4)); /*0x6a5b6b*/
  dword_B0B4B4 = (unsigned int)(LoadFileSHP((char *)(aGbriShp), (bool *)&byte_B0B4D5)); /*0x6a5b7f*/
  dword_B0B4B8 = (unsigned int)(LoadFileSHP((char *)(aDjbiShp), (bool *)&byte_B0B4D6)); /*0x6a5b93*/
  dword_B0B4BC = (unsigned int)(LoadFileSHP((char *)(aArbiShp), (bool *)&byte_B0B4D7)); /*0x6a5ba7*/
  dword_B0B4C0 = (unsigned int)(LoadFileSHP((char *)(aLatiShp), (bool *)&byte_B0B4D8)); /*0x6a5bbb*/
  dword_B0B4C4 = (unsigned int)(LoadFileSHP((char *)(aRusiShp), (bool *)&byte_B0B4D9)); /*0x6a5bcf*/
  result = LoadFileSHP((char *)(aYriiShp), (bool *)&byte_B0B4DA); /*0x6a5bd4*/
  dword_B0B4C8 = (unsigned int)(result); /*0x6a5bdb*/
  return result; /*0x6a5bd9*/
}
} // namespace gamemd
// 0x6A6C30
namespace gamemd {
int SidebarClass::Redraw(char a2)
{

  SidebarClass *v2; // edi
  int v3; // esi
  int v4; // esi
  void *v5; // ebp
  int i; // edi
  int v7; // eax
  ShapeButtonClass *v8; // esi
  char v9; // al
  char v10; // dl
  unsigned char *v11; // eax
  char v12; // al
  unsigned int v14; // [esp-34h] [ebp-64h]
  unsigned int v15; // [esp-34h] [ebp-64h]
  unsigned int v16; // [esp-34h] [ebp-64h]
  unsigned __int8 v17; // [esp+Ch] [ebp-24h]
  AudioStream *v19; // [esp+14h] [ebp-1Ch]
  int v20; // [esp+18h] [ebp-18h] BYREF
  int v21; // [esp+1Ch] [ebp-14h]
  int v22[4]; // [esp+20h] [ebp-10h] BYREF
  char v23; // [esp+34h] [ebp+4h]

  v2 = this; /*0x6a6c3b*/
  *(unsigned int *)&DataGlobal_8809F4 = dword_B07DC8; /*0x6a6c49*/
  *(unsigned int *)&DataGlobal_8809F8 = dword_B07DCC; /*0x6a6c53*/
  *(unsigned int *)&DataGlobal_8809FC = dword_B07DD0; /*0x6a6c5f*/
  v19 = (gamemd::AudioStream *)(g_DSurface_Hidden_2); /*0x6a6c65*/
  *(unsigned int *)&DataGlobal_880A00 = dword_B07DD4; /*0x6a6c6f*/
  g_DSurface_Hidden_2 = (int)((AudioStream *)DSurface_Sidebar); /*0x6a6c74*/
  v17 = 0; /*0x6a6c82*/
  v3 = (*((int (**)(DSurface *))DSurface_Sidebar + 32))(DSurface_Sidebar); /*0x6a6c92*/
  v22[2] = (*((int (**)(DSurface *))DSurface_Sidebar + 31))(DSurface_Sidebar); /*0x6a6c99*/
  v22[0] = 0; /*0x6a6ca3*/
  v22[1] = 0; /*0x6a6ca7*/
  v22[3] = v3; /*0x6a6cab*/
  if ( a2 || v2[3].__pad_CD2[1788] || (v23 = 0, v2[3].__pad_CD2[1789]) ) /*0x6a6cb9*/
    v23 = 1; /*0x6a6cc7*/
  if ( v2[3].__pad_CD2[1787] && v23 && !DataGlobal_A8EB00[619] ) /*0x6a6ce8*/
  {
    if ( v2[3].__pad_CD2[1789] ) /*0x6a6cee*/
    {
      v21 = g_DSurface_SidebarBounds; /*0x6a6d1f*/
      v17 = 1; /*0x6a6d39*/
      v20 = 0; /*0x6a6d3e*/
      DrawToSurfaceSHP( /*0x6a6d42*/
        (int)DSurface_Sidebar,
        *(int *)&g_SidebarConfig,
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
      v5 = (void *)(dword_B0B46C); /*0x6a6d4d*/
      for ( i = 0; ; ++i ) /*0x6a6d53*/
      {
        v7 = 26; /*0x6a6d63*/
        if ( dword_A8B230[374].NeedsSaveOrLink ) /*0x6a6d5b*/
          v7 = 18; /*0x6a6d6a*/
        if ( i >= (g_DSurface_ViewBounds - g_SidebarBounds - v7 + g_DSurface_SidebarBounds - 7) / 50 ) /*0x6a6d9c*/
          break; /*0x6a6d9c*/
        v20 = 0; /*0x6a6dcc*/
        v21 = v4; /*0x6a6dd0*/
        DrawToSurfaceSHP( /*0x6a6dd4*/
          (int)DSurface_Sidebar,
          *(int *)&g_SidebarConfig,
          (int)v5,
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
        v5 = (void *)(dword_B0B46C); /*0x6a6dd9*/
        v4 += *((__int16 *)dword_B0B46C + 2); /*0x6a6de3*/
      }
      v20 = 0; /*0x6a6e1c*/
      v21 = v4; /*0x6a6e20*/
      DrawToSurfaceSHP( /*0x6a6e24*/
        (int)DSurface_Sidebar,
        *(int *)&g_SidebarConfig,
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
        (int)DSurface_Sidebar,
        *(int *)&g_SidebarConfig,
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
      v2 = this; /*0x6a6e74*/
    }
    ShapeButton::Draw((int)(&stru_B07DF8), v17); /*0x6a6e88*/
    ShapeButton::Draw(&stru_B0B3A0, v17); /*0x6a6e93*/
    v8 = (gamemd::ShapeButtonClass *)(&stru_B07C48); /*0x6a6e98*/
    do /*0x6a6eaf*/
    {
      ShapeButton::Draw((int)(v8), 1); /*0x6a6ea1*/
      v8 += 8; /*0x6a6ea6*/
    }
    while ( (int)v8 < (int)&dword_B07DC8 ); /*0x6a6eaf*/
    ShapeButton::Draw((int)(&stru_B0B328), v17); /*0x6a6eb7*/
    ShapeButton::Draw(&g_SidebarFlag, v17); /*0x6a6ec2*/
    if ( *(unsigned int *)&v2[3].__pad_CD2[1774] ) /*0x6a6ec7*/
    {
      v21 = g_SidebarBounds; /*0x6a6eef*/
      v14 = *(unsigned int *)&v2[3].__pad_CD2[1770]; /*0x6a6f0a*/
      v20 = 0; /*0x6a6f18*/
      DrawToSurfaceSHP( /*0x6a6f1c*/
        (int)DSurface_Sidebar,
        *(int *)&g_SidebarConfig,
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
      v15 = *(unsigned int *)&v2[3].__pad_CD2[1770]; /*0x6a6f55*/
      v20 = 0; /*0x6a6f63*/
      DrawToSurfaceSHP( /*0x6a6f67*/
        (int)DSurface_Sidebar,
        *(int *)&g_SidebarConfig,
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
      v16 = *(unsigned int *)&v2[3].__pad_CD2[1770]; /*0x6a6fa0*/
      v20 = 0; /*0x6a6fae*/
      DrawToSurfaceSHP( /*0x6a6fb2*/
        (int)DSurface_Sidebar,
        *(int *)&g_SidebarConfig,
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
  Sidebar::UpdateProductionDisplay( /*0x6a6fdf*/
    (int)&v2->__pad_CD2[3988 * *(unsigned int *)&v2[3].__pad_CD2[1778] + 2162],
    (wchar_t)v2,
    v2[3].__pad_CD2[1789]);
  v9 = v23 || v17; /*0x6a6ff4*/
  Sidebar::Render((char)((PowerClass *)v2), v9); /*0x6a6ffc*/
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
  if ( *(unsigned int *)&g_TacticalRender ) /*0x6a7087*/
  {
    (*(void (**)(unsigned int, int))(**(unsigned int **)&g_TacticalRender + 12))( /*0x6a708d*/
      *(unsigned int *)&g_TacticalRender,
      1);
    v10 = g_TooltipActive; /*0x6a7090*/
  }
  v12 = v10 || v2[3].__pad_CD2[1789]; /*0x6a70a6*/
  Sidebar::FlushSidebarTooltip((char)((Sidebar *)v2), v12); /*0x6a70ae*/
  v2[3].__pad_CD2[1788] = 0; /*0x6a70b7*/
  v2[3].__pad_CD2[1789] = 0; /*0x6a70bd*/
  g_DSurface_Hidden_2 = (int)(v19); /*0x6a70c5*/
  return (int)v19->__pad_000; /*0x6a70c3*/

}
} // namespace gamemd
// 0x6A7590
namespace gamemd {
int SidebarClass::SwitchTab(int a2)
{
  int result; // eax
  int v4; // esi
  int v5; // edi
  int v6; // edi
  int v7; // eax
  int v8; // esi
  int v9; // ebx

  result = this->u32_539C; /*0x6a7598*/
  if ( a2 != result ) /*0x6a75a0*/
  {
    GadgetClass::Hide((GadgetClass *)(&stru_B07C48 + 8 * result)); /*0x6a75b4*/
    v4 = 0; /*0x6a75c6*/
    v5 = &this->u32_F94 * this->u32_539C + 5444; /*0x6a75ce*/
    *&this->u32_F94 * this->u32_539C + 5472) = 0; /*0x6a75d5*/
    do /*0x6a7600*/
    {
      Tactical::SelectObject( /*0x6a75f7*/
        (GScreenClass *)&DataGlobal_87F7E8,
        56 * (v4 + 60 * this->u32_FCC) + 11566720);
      ++v4; /*0x6a75fc*/
    }
    while ( v4 < 60 ); /*0x6a7600*/
    this->u32_539C = a2; /*0x6a7605*/
    ((GadgetClass *)((GadgetClass *)(&stru_B07C48 + 8 * a2)))->Show(); /*0x6a7614*/
    v6 = &this->u32_F94 * this->u32_539C + 5444; /*0x6a762c*/
    *&this->u32_F94 * this->u32_539C + 5472) = 1; /*0x6a7633*/
    v7 = 26; /*0x6a7645*/
    if ( dword_A8B230[374].NeedsSaveOrLink ) /*0x6a763d*/
      v7 = 18; /*0x6a764c*/
    v8 = 0; /*0x6a765f*/
    v9 = 2 * ((g_DSurface_ViewBounds - g_SidebarBounds - v7 + g_DSurface_SidebarBounds - 7) / 50); /*0x6a767f*/
    if ( v9 > 0 ) /*0x6a7683*/
    {
      do /*0x6a76c8*/
      {
        ((LinkClass *)(56 * (v8 + 60 * this->u32_FCC) + 11566720))->Reset(); /*0x6a769d*/
        (/*0x6a76c0*/ (GScreenClass *)&DataGlobal_87F7E8)->InsertOrdered(56 * (v8 + 60 * this->u32_FCC) + 11566720);
        ++v8; /*0x6a76c5*/
      }
      while ( v8 < v9 ); /*0x6a76c8*/
    }
    g_CameoRenderFlag = 1; /*0x6a76cc*/
    result = ((Tactical *)this)->UpdateUIVisibility(); /*0x6a76d3*/
    this->u32_53A7 = 1; /*0x6a76d9*/
  }
  return result; /*0x6a76e1*/
}
} // namespace gamemd
// 0x6ABD30
namespace gamemd {
GadgetClass * SidebarClass::LoadResources(void *a1, void * aSidegdi1Shp, void * aSidegdi2Shp, void * aSidegdi3Shp)
{
  PowerClass *v1; // ecx
  int v2; // esi
  int v3; // eax
  GadgetClass *v4; // esi
  int v5; // edi
  int v6; // eax
  LinkClass *v7; // esi
  int v8; // ebx
  int v9; // ebp
  int i; // edi
  char result; // al
  int v12; // edi
  int *v13; // esi
  int v14; // ecx
  int v15; // edx
  int v16; // eax
  int j; // esi
  int v18; // edi
  int *v19; // esi
  int v20; // edx
  int v21; // ecx
  int v22; // edx
  int v23; // [esp-4h] [ebp-38h]
  int v24; // [esp-4h] [ebp-38h]
  LinkClass *v25; // [esp+10h] [ebp-24h]
  int v26; // [esp+14h] [ebp-20h]
  int v27; // [esp+18h] [ebp-1Ch] BYREF
  int v28; // [esp+1Ch] [ebp-18h]
  int v29; // [esp+20h] [ebp-14h]
  int v30; // [esp+24h] [ebp-10h]
  int v31; // [esp+28h] [ebp-Ch]
  wchar_t *v32; // [esp+2Ch] [ebp-8h]
  char v33; // [esp+30h] [ebp-4h]

  PowerClass::getDrain(v1); /*0x6abd39*/
  SidebarClass::CalcBounds(0); /*0x6abd42*/
  if ( !dword_B0B468 ) /*0x6abd4e*/
  {
    dword_B0B468 = (unsigned int)(SearchMIXFile((char *)(aSidegdi1Shp), 0)); /*0x6abd63*/
    dword_B0B46C = (unsigned int)(SearchMIXFile(aSidegdi2Shp, 0)); /*0x6abd74*/
    dword_B0B470 = (unsigned int)(SearchMIXFile(aSidegdi3Shp, 0)); /*0x6abd7e*/
  }
  Rect_Point::Set((int)(&stru_B07E58), DSurface_SidebarBounds + 16, (int)DSurface_ViewBounds.field_4); /*0x6abd98*/
  (&stru_B07E58)->MarkDirty(); /*0x6abda2*/
  v2 = stru_B04A10.ID + stru_B04A10.Height; /*0x6abdb2*/
  v23 = stru_B04A10.ID + stru_B04A10.Height; /*0x6abdbc*/
  if ( (*((unsigned char *)&(stru_A8EB00.vfptr[31]))) ) /*0x6abdbd*/
    Rect_Point::Set((int)(&stru_B07E58), DSurface_ViewBounds.field_0 + *(unsigned int *)g_Map_VisibleRectOffset, v23); /*0x6abdce*/
  else
    Rect_Point::Set(&stru_B07E58, 0, v23); /*0x6abdd7*/
  v24 = (*((int (**)(DSurface *))DSurface_Sidebar + 32))(DSurface_Sidebar) - v2; /*0x6abdf2*/
  v3 = (*((int (**)(DSurface *))DSurface_Sidebar + 31))(DSurface_Sidebar); /*0x6abdf5*/
  (&stru_B07E58)->SetPositionXY(v3, v24); /*0x6abdfe*/
  Rect_Point::Set((int)((GadgetClass *)&stru_B0B3A0), dword_B0B4DC, dword_B0B4E0); /*0x6abe15*/
  ((GadgetClass *)&stru_B0B3A0)->MarkDirty(); /*0x6abe1f*/
  dword_B0B3E4 = -DSurface_SidebarBounds; /*0x6abe37*/
  Rect_Point::Set((GadgetClass *)&stru_B07DF8, dword_B0B3AC + dword_B0B4E4, dword_B0B3B0); /*0x6abe4c*/
  ((GadgetClass *)&stru_B07DF8)->MarkDirty(); /*0x6abe56*/
  v4 = (GadgetClass *)&stru_B07C48; /*0x6abe60*/
  dword_B07E3C = -DSurface_SidebarBounds; /*0x6abe67*/
  v5 = 0; /*0x6abe6c*/
  do /*0x6abea8*/
  {
    Rect_Point::Set((int)(v4), dword_B0B4E8 + v5 * dword_B0B4F0, dword_B0B4EC); /*0x6abe88*/
    ((VectorClass_ptr_ConvertClass*)v4)->MarkDirty(); /*0x6abe8f*/
    v4 = &v4->q060; /*0x6abe99*/
    *(unsigned int *)v4[-1].__pad_0 = -DSurface_SidebarBounds; /*0x6abe9e*/
    ++v5; /*0x6abea1*/
  }
  while ( (int)v4 < (int)&dword_B07DC8 ); /*0x6abea8*/
  Rect_Point::Set((int)((GadgetClass *)&stru_B0B328), dword_B0B508, dword_B0B50C); /*0x6abebd*/
  ((VectorClass_ptr_ConvertClass*)(GadgetClass *)&stru_B0B328)->MarkDirty(); /*0x6abec7*/
  dword_B0B36C = -DSurface_SidebarBounds; /*0x6abedf*/
  Rect_Point::Set((GadgetClass *)&g_SidebarFlag, dword_B0B508 + dword_B0B510, dword_B0B50C); /*0x6abef2*/
  ((GadgetClass *)&g_SidebarFlag)->MarkDirty(); /*0x6abefc*/
  dword_B0B44C = -DSurface_SidebarBounds; /*0x6abf0f*/
  v6 = 26; /*0x6abf1d*/
  if ( dword_A8B230[374].NeedsSaveOrLink ) /*0x6abf15*/
    v6 = 18; /*0x6abf24*/
  v7 = (gamemd::LinkClass *)(&stru_B07E80); /*0x6abf44*/
  v25 = (gamemd::LinkClass *)(&stru_B07E80); /*0x6abf4d*/
  v8 = (g_DSurface_ViewBounds - v6 - g_SidebarBounds + g_DSurface_SidebarBounds - 7) / 50; /*0x6abf5d*/
  v26 = 2 * v8; /*0x6abf62*/
  do /*0x6abfc2*/
  {
    v9 = 0; /*0x6abf66*/
    if ( v8 > 0 ) /*0x6abf6a*/
    {
      do /*0x6abfac*/
      {
        for ( i = 0; i < 2; ++i ) /*0x6abf6c*/
        {
          (*(void (**)(LinkClass *, int, int))(*(unsigned int *)v7->vtable1 + 100))( /*0x6abf96*/
            v7,
            dword_B0B4F4 + i * dword_B0B4FC,
            v9 * dword_B0B500 + g_SidebarBounds + 1);
          (*(void (**)(LinkClass *))(*(unsigned int *)v7->vtable1 + 72))(v7); /*0x6abf9d*/
          v7 = &v7->__pad_038; /*0x6abfa1*/
        }
        ++v9; /*0x6abfa9*/
      }
      while ( v9 < v8 ); /*0x6abfac*/
      v7 = v25; /*0x6abfae*/
    }
    v7 += 210; /*0x6abfb2*/
    v25 = v7; /*0x6abfbe*/
  }
  while ( (int)v7 < (int)&dword_B0B300 ); /*0x6abfc2*/
  result = g_TacticalRender; /*0x6abfc4*/
  if ( *(unsigned int *)&g_TacticalRender ) /*0x6abfcd*/
  {
    v33 = 0; /*0x6abfd3*/
    v12 = 203; /*0x6abfd7*/
    v13 = (int *)&unk_B07C58; /*0x6abfdc*/
    do /*0x6ac02d*/
    {
      v14 = *v13; /*0x6abfe4*/
      v15 = v13[1]; /*0x6abfe6*/
      v28 = *(v13 - 1); /*0x6abfe9*/
      v16 = v13[2]; /*0x6abfed*/
      v29 = v14; /*0x6abff0*/
      v27 = v12; /*0x6abffb*/
      v32 = 0; /*0x6abfff*/
      v30 = v15; /*0x6ac003*/
      v31 = v16; /*0x6ac007*/
      HashTable::Remove(*(HashTable **)&g_TacticalRender, v12); /*0x6ac00b*/
      CommandClass::AddAction(*(int **)&g_TacticalRender, (int)&v27); /*0x6ac01b*/
      ++v12; /*0x6ac020*/
      v13 += 24; /*0x6ac021*/
    }
    while ( v12 - 203 < 4 ); /*0x6ac02d*/
    for ( j = 0; j < 60; ++j ) /*0x6ac02f*/
      HashTable::Remove(*(HashTable **)&g_TacticalRender, j + 1000); /*0x6ac03e*/
    v18 = 0; /*0x6ac04d*/
    if ( v26 > 0 ) /*0x6ac051*/
    {
      v19 = (int *)&unk_B07E90; /*0x6ac053*/
      do /*0x6ac0a5*/
      {
        v20 = *(v19 - 1); /*0x6ac05c*/
        v29 = *v19; /*0x6ac065*/
        v27 = v18 + 1000; /*0x6ac069*/
        v21 = v19[1]; /*0x6ac06d*/
        v28 = v20; /*0x6ac070*/
        v22 = v19[2]; /*0x6ac074*/
        v30 = v21; /*0x6ac07b*/
        v32 = 0; /*0x6ac086*/
        v31 = v22; /*0x6ac08e*/
        v33 = 1; /*0x6ac092*/
        CommandClass::AddAction(*(int **)&g_TacticalRender, (int)&v27); /*0x6ac096*/
        ++v18; /*0x6ac09f*/
        v19 += 14; /*0x6ac0a0*/
      }
      while ( v18 < v26 ); /*0x6ac0a5*/
    }
    v28 = dword_B07E04; /*0x6ac0ba*/
    v31 = dword_B07E10; /*0x6ac0c6*/
    v33 = 0; /*0x6ac0d0*/
    v27 = 102; /*0x6ac0d5*/
    v32 = aTxtSellMode; /*0x6ac0dd*/
    v29 = dword_B07E08; /*0x6ac0e5*/
    v30 = dword_B07E0C; /*0x6ac0e9*/
    HashTable::Remove(*(HashTable **)&g_TacticalRender, 102); /*0x6ac0ed*/
    CommandClass::AddAction(*(int **)&g_TacticalRender, (int)&v27); /*0x6ac0fd*/
    v28 = dword_B0B3AC; /*0x6ac113*/
    v29 = dword_B0B3B0; /*0x6ac11c*/
    v27 = 101; /*0x6ac128*/
    v32 = aTxtRepairMode; /*0x6ac130*/
    v30 = dword_B0B3B4; /*0x6ac138*/
    v31 = dword_B0B3B8; /*0x6ac13c*/
    HashTable::Remove(*(HashTable **)&g_TacticalRender, 101); /*0x6ac140*/
    CommandClass::AddAction(*(int **)&g_TacticalRender, (int)&v27); /*0x6ac150*/
    v28 = dword_B0B414; /*0x6ac166*/
    v30 = dword_B0B41C; /*0x6ac170*/
    v27 = 200; /*0x6ac17f*/
    v32 = 0; /*0x6ac187*/
    v29 = dword_B0B418; /*0x6ac18b*/
    v31 = dword_B0B420; /*0x6ac18f*/
    HashTable::Remove(*(HashTable **)&g_TacticalRender, 200); /*0x6ac193*/
    CommandClass::AddAction(*(int **)&g_TacticalRender, (int)&v27); /*0x6ac1a3*/
    v28 = dword_B0B334; /*0x6ac1b9*/
    v31 = dword_B0B340; /*0x6ac1c8*/
    v27 = 201; /*0x6ac1d2*/
    v32 = 0; /*0x6ac1da*/
    v29 = dword_B0B338; /*0x6ac1de*/
    v30 = dword_B0B33C; /*0x6ac1e2*/
    HashTable::Remove(*(HashTable **)&g_TacticalRender, 201); /*0x6ac1e6*/
    return CommandClass::AddAction(*(int **)&g_TacticalRender, (int)&v27); /*0x6ac1f6*/
  }
  return result; /*0x6ac1fb*/
}
} // namespace gamemd
// 0x40D270
namespace gamemd {
int SidebarClass::initButtons2()
{
  return SidebarClass::InitButtons();
}
}
// 0x653010
namespace gamemd {  // G42.18c ns repair
void SidebarClass::CreateScrollButtons()
{
  DisplayClass *v1; // ecx

  (v1)->ddtor(); /*0x653011*/
  if ( !((unsigned int *)&stru_A8EB00)[391] ) /*0x65301f*/
  {
    dword_B0499C = 242; /*0x65303d*/
    byte_B049C4 = 1; /*0x653047*/
    dword_B049C8 = *(unsigned int *)&g_SidebarConfig; /*0x65304e*/
    byte_B049A5 = 0; /*0x653053*/
    dword_B049A8 = 0; /*0x653059*/
    dword_B04998 = 5; /*0x65305f*/
    Rect_Point::Set(&stru_B04978, dword_B04A00, dword_B04A04); /*0x653069*/
    ShapeButton::SetShape((ShapeButtonClass *)&stru_B04978, (int)dword_B048E0, 0, 0); /*0x65307b*/
    (&stru_B04978)->MarkDirty(); /*0x653085*/
    dword_B04960 = *(unsigned int *)&g_SidebarConfig; /*0x65309b*/
    dword_B04934 = 243; /*0x6530a8*/
    byte_B0495C = 1; /*0x6530b2*/
    byte_B0493D = 0; /*0x6530b9*/
    dword_B04940 = 0; /*0x6530bf*/
    dword_B04930 = 5; /*0x6530c5*/
    Rect_Point::Set(&stru_B04910, dword_B048C8, dword_B048CC); /*0x6530cf*/
    ShapeButton::SetShape((ShapeButtonClass *)&stru_B04910, (int)dword_B048AC, 0, 0); /*0x6530e2*/
    (&stru_B04910)->MarkDirty(); /*0x6530ec*/
  }
}
}  // G42.18c ns repair
// 0x6AB990
namespace gamemd {  // G42.18c ns repair
int SidebarClass::select()
{

  int v2; // eax
  int result; // eax

  SidebarClass::updateStripVisibility(*(SidebarClass **)&g_TacticalRender); /*0x6ab99a*/
  SidebarClass::initializeStrip(*(SidebarClass **)&g_TacticalRender, 0); /*0x6ab9a7*/
  v2 = *&this->u32_2C; /*0x6ab9ac*/
  LOBYTE(this->field_34) = 1; /*0x6ab9b1*/
  *(unsigned char *)(v2 + 60) = 1; /*0x6ab9bb*/
  result = MapClass::MarkForRedraw((GScreenClass *)&DataGlobal_87F7E8, 0); /*0x6ab9be*/
  g_CameoRenderFlag = 1; /*0x6ab9c3*/
  g_TooltipActive = 1; /*0x6ab9c9*/
  return result; /*0x6ab9cf*/

}
}
// 0x6AB9E0
int SidebarClass::deselect()
{

  int v2; // eax
  int result; // eax

  SidebarClass::updateStripPosition(*(SidebarClass **)&g_TacticalRender); /*0x6ab9e9*/
  v2 = *&this->u32_2C; /*0x6ab9ee*/
  LOBYTE(this->field_34) = 0; /*0x6ab9f1*/
  *(unsigned char *)(v2 + 60) = 1; /*0x6ab9fc*/
  result = MapClass::MarkForRedraw((GScreenClass *)&DataGlobal_87F7E8, 0); /*0x6aba00*/
  g_CameoRenderFlag = 1; /*0x6aba05*/
  g_TooltipActive = 1; /*0x6aba0c*/
  return result; /*0x6aba13*/

}