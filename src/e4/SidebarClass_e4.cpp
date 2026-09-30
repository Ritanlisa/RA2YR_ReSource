// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
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

// 0x4C9C50
namespace gamemd {
int SidebarClass::draw()
{

  return *((unsigned char *)this + 92); /*0x4c9c53*/

}
} // namespace gamemd
// 0x4CA170
namespace gamemd {
int SidebarClass::draw2()
{

  return *((unsigned int *)this + 26); /*0x4ca173*/

}
} // namespace gamemd
// 0x6A5090
namespace gamemd {
int SidebarClass::InitPositions()
{

  if ( *((unsigned int *)MEMORY[0xA8B230] + 3374) ) /*0x6a5095*/
  {
    MEMORY[0xB0B4E0] = MEMORY[0x886F94] + 7; /*0x6a50f4*/
    MEMORY[0xB0B4EC] = MEMORY[0x886F94] + 39; /*0x6a50fc*/
    MEMORY[0xB0B4E4] = 52; /*0x6a5104*/
    MEMORY[0xB0B4F0] = 32; /*0x6a510e*/
    MEMORY[0xB0B4F8] = MEMORY[0x886F94] + 69; /*0x6a5118*/
    MEMORY[0xB0B4FC] = 64; /*0x6a511d*/
  }
  else
  {
    MEMORY[0xB0B4E4] = 64; /*0x6a50a5*/
    MEMORY[0xB0B4F0] = 29; /*0x6a50af*/
    MEMORY[0xB0B4FC] = 63; /*0x6a50b9*/
    MEMORY[0xB0B4E0] = MEMORY[0x886F94] + 8; /*0x6a50c6*/
    MEMORY[0xB0B4EC] = MEMORY[0x886F94] + 39; /*0x6a50ce*/
    MEMORY[0xB0B4F8] = MEMORY[0x886F94] + 69; /*0x6a50d6*/
  }
  return MEMORY[0x886F94] + 69; /*0x6a50db*/

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
    MEMORY[0x886F98] = 168; /*0x6a51bb*/
    MEMORY[0x886F90] = v1; /*0x6a51c0*/
    MEMORY[0x886F94] = 158; /*0x6a51c6*/
    v2 = v5 + 32 + v4 - 158; /*0x6a51d0*/
    MEMORY[0x886F9C] = v2; /*0x6a51d7*/
  }
  else if ( MEMORY[0xA8EB7C] ) /*0x6a5144*/
  {
    MEMORY[0x886F94] = 158; /*0x6a515b*/
    v1 = MEMORY[0x886FA8] + MEMORY[0x886FA0]; /*0x6a5165*/
    MEMORY[0x886F98] = 168; /*0x6a5173*/
    MEMORY[0x886F90] = MEMORY[0x886FA8] + MEMORY[0x886FA0]; /*0x6a5181*/
    v2 = MEMORY[0x886FAC] + 32 + MEMORY[0x886FA4] - 158; /*0x6a5187*/
    MEMORY[0x886F9C] = v2; /*0x6a518e*/
  }
  else
  {
    v2 = MEMORY[0x886F9C]; /*0x6a51de*/
    v1 = MEMORY[0x886F90]; /*0x6a51e3*/
  }
  v6 = *((unsigned int *)MEMORY[0xA8B230] + 3374); /*0x6a51ef*/
  MEMORY[0xB0B500] = 50; /*0x6a51f5*/
  v7 = 26; /*0x6a5205*/
  if ( *((unsigned int *)MEMORY[0xA8B230] + 3374) ) /*0x6a51ff*/
    v7 = 18; /*0x6a520e*/
  result = 50 * ((v2 - MEMORY[0xB0B4F8] - v7 + MEMORY[0x886F94] - 7) / 50); /*0x6a523f*/
  MEMORY[0xB0B504] = result; /*0x6a5243*/
  if ( v6 ) /*0x6a5248*/
  {
    if ( v6 == 1 ) /*0x6a5263*/
    {
      MEMORY[0xB0B50C] = MEMORY[0xB0B4F8] + result + 7; /*0x6a5269*/
    }
    else
    {
      result += MEMORY[0xB0B4F8] + 7; /*0x6a5271*/
      MEMORY[0xB0B50C] = result; /*0x6a5275*/
    }
    MEMORY[0xB0B510] = 45; /*0x6a527a*/
  }
  else
  {
    MEMORY[0xB0B510] = 46; /*0x6a524e*/
    MEMORY[0xB0B50C] = MEMORY[0xB0B4F8] + result + 7; /*0x6a5258*/
  }
  MEMORY[0xB0B514] = 50; /*0x6a5287*/
  MEMORY[0xB0B4F4] = v1 + 22; /*0x6a5293*/
  if ( v6 ) /*0x6a529a*/
  {
    if ( v6 != 1 ) /*0x6a52c1*/
      result = v1 + 33; /*0x6a52e6*/
    MEMORY[0xB0B508] = v1 + 39; /*0x6a52cd*/
    MEMORY[0xB0B4DC] = v1 + 33; /*0x6a52d3*/
    MEMORY[0xB0B4E8] = v1 + 20; /*0x6a52d9*/
  }
  else
  {
    MEMORY[0xB0B508] = v1 + 39; /*0x6a52a6*/
    MEMORY[0xB0B4DC] = v1 + 20; /*0x6a52ac*/
    MEMORY[0xB0B4E8] = v1 + 26; /*0x6a52b2*/
    return v1 + 26; /*0x6a529f*/
  }
  return result; /*0x6a52a5*/

}
} // namespace gamemd
// 0x6A5840
namespace gamemd {
void * SidebarClass::LoadAssets()
{

  unsigned int *v0; // eax
  void *SHP; // eax
  void *v2; // eax
  int v3; // edi
  int *v4; // esi
  void *v5; // eax
  void *v6; // eax
  void *v7; // eax
  unsigned int *v8; // eax
  void *result; // eax
  char v10; // [esp+Ch] [ebp-704h] BYREF
  char Buffer[256]; // [esp+10h] [ebp-700h] BYREF
  unsigned char v12[768]; // [esp+110h] [ebp-600h] BYREF
  unsigned char v13[768]; // [esp+410h] [ebp-300h] BYREF

  PowerClass::checkBlackout(); /*0x6a5849*/
  qmemcpy(v12, (const void *)UI_Load_72F4A0(), sizeof(v12)); /*0x6a5863*/
  if ( MEMORY[0x87F6CC] ) /*0x6a586d*/
  {
    (**(void (***)(int, int))MEMORY[0x87F6CC])(MEMORY[0x87F6CC], 1); /*0x6a5873*/
    MEMORY[0x87F6CC] = 0; /*0x6a5875*/
  }
  v0 = __2_YAPAXI_Z(0x188u); /*0x6a5880*/
  if ( v0 ) /*0x6a588a*/
    MEMORY[0x87F6CC] = (int)ConvertClass::Construct(v0, (int)v12, (int)v12, MEMORY[0x887308], 1, 0); /*0x6a58ad*/
  else
    MEMORY[0x87F6CC] = 0; /*0x6a58b4*/
  MEMORY[0xB0B484] = LoadFileSHP(MEMORY[0x83FA58], (bool *)&MEMORY[0xB0B48F]); /*0x6a58d4*/
  v10 = 0; /*0x6a58d9*/
  SHP = LoadFileSHP(MEMORY[0x83FA4C], (bool *)&v10); /*0x6a58dd*/
  ShapeButton::SetShape((int)MEMORY[0xB07DF8], (int)SHP, 0, 0); /*0x6a58e8*/
  ButtonClass::SetState(MEMORY[0xB07DF8], v10); /*0x6a58f7*/
  MEMORY[0xB07E48] = MEMORY[0x87F6CC]; /*0x6a590c*/
  v2 = LoadFileSHP(MEMORY[0x83FA40], (bool *)&v10); /*0x6a5911*/
  ShapeButton::SetShape((int)MEMORY[0xB0B3A0], (int)v2, 0, 0); /*0x6a591c*/
  ButtonClass::SetState(MEMORY[0xB0B3A0], v10); /*0x6a592b*/
  v3 = 0; /*0x6a5936*/
  MEMORY[0xB0B3F0] = MEMORY[0x87F6CC]; /*0x6a5938*/
  v4 = (int *)&MEMORY[0xB07C48]; /*0x6a593e*/
  do /*0x6a598c*/
  {
    sprintf(Buffer, MEMORY[0x83FA34], v3); /*0x6a594e*/
    v5 = LoadFileSHP(Buffer, (bool *)&v10); /*0x6a5960*/
    ShapeButton::SetShape((int)v4, (int)v5, 0, 0); /*0x6a5968*/
    ButtonClass::SetState(v4, v10); /*0x6a5974*/
    ++v3; /*0x6a597f*/
    v4[20] = MEMORY[0x87F6CC]; /*0x6a5980*/
    v4 += 24; /*0x6a5983*/
  }
  while ( (int)v4 < (int)&MEMORY[0xB07DC8] ); /*0x6a598c*/
  v6 = LoadFileSHP(MEMORY[0x83FA28], (bool *)&v10); /*0x6a5999*/
  ShapeButton::SetShape((int)MEMORY[0xB0B328], (int)v6, 0, 0); /*0x6a59a4*/
  ButtonClass::SetState(MEMORY[0xB0B328], v10); /*0x6a59b3*/
  MEMORY[0xB0B378] = MEMORY[0x87F6CC]; /*0x6a59bf*/
  v7 = LoadFileSHP(MEMORY[0x83FA1C], (bool *)&v10); /*0x6a59cf*/
  ShapeButton::SetShape((int)MEMORY[0xB0B408], (int)v7, 0, 0); /*0x6a59da*/
  ButtonClass::SetState(MEMORY[0xB0B408], v10); /*0x6a59e9*/
  MEMORY[0xB0B458] = MEMORY[0x87F6CC]; /*0x6a59fd*/
  MEMORY[0xB0B468] = LoadFileSHP(MEMORY[0x83FA10], (bool *)&MEMORY[0xB0B488]); /*0x6a5a11*/
  MEMORY[0xB0B46C] = LoadFileSHP(MEMORY[0x83FA04], (bool *)&MEMORY[0xB0B489]); /*0x6a5a25*/
  MEMORY[0xB0B470] = LoadFileSHP(MEMORY[0x83F9F8], (bool *)&MEMORY[0xB0B48A]); /*0x6a5a39*/
  MEMORY[0xB0B474] = LoadFileSHP(MEMORY[0x83F9EC], (bool *)&MEMORY[0xB0B48B]); /*0x6a5a43*/
  qmemcpy(v13, (const void *)UI_Load_72F4E0(), sizeof(v13)); /*0x6a5a5b*/
  if ( MEMORY[0x87F6D0] ) /*0x6a5a65*/
  {
    (**(void (***)(int, int))MEMORY[0x87F6D0])(MEMORY[0x87F6D0], 1); /*0x6a5a6b*/
    MEMORY[0x87F6D0] = 0; /*0x6a5a6d*/
  }
  v8 = __2_YAPAXI_Z(0x188u); /*0x6a5a78*/
  if ( v8 ) /*0x6a5a82*/
    MEMORY[0x87F6D0] = (int)ConvertClass::Construct(v8, (int)v13, (int)v13, MEMORY[0x887308], 1, 0); /*0x6a5aa5*/
  else
    MEMORY[0x87F6D0] = 0; /*0x6a5aac*/
  MEMORY[0xB0B490] = LoadFileSHP(MEMORY[0x83F9E0], (bool *)&MEMORY[0xB0B4CC]); /*0x6a5acb*/
  MEMORY[0xB0B494] = LoadFileSHP(MEMORY[0x83F9D4], (bool *)&MEMORY[0xB0B4CD]); /*0x6a5adf*/
  MEMORY[0xB0B498] = LoadFileSHP(MEMORY[0x83F9C8], (bool *)&MEMORY[0xB0B4CE]); /*0x6a5af3*/
  MEMORY[0xB0B49C] = LoadFileSHP(MEMORY[0x83F9BC], (bool *)&MEMORY[0xB0B4CF]); /*0x6a5b07*/
  MEMORY[0xB0B4A0] = LoadFileSHP(MEMORY[0x83F9B0], (bool *)&MEMORY[0xB0B4D0]); /*0x6a5b1b*/
  MEMORY[0xB0B4A4] = LoadFileSHP(MEMORY[0x83F9A4], (bool *)&MEMORY[0xB0B4D1]); /*0x6a5b2f*/
  MEMORY[0xB0B4A8] = LoadFileSHP(MEMORY[0x83F998], (bool *)&MEMORY[0xB0B4D2]); /*0x6a5b43*/
  MEMORY[0xB0B4AC] = LoadFileSHP(MEMORY[0x83F98C], (bool *)&MEMORY[0xB0B4D3]); /*0x6a5b57*/
  MEMORY[0xB0B4B0] = LoadFileSHP(MEMORY[0x83F980], (bool *)&MEMORY[0xB0B4D4]); /*0x6a5b6b*/
  MEMORY[0xB0B4B4] = LoadFileSHP(MEMORY[0x83F974], (bool *)&MEMORY[0xB0B4D5]); /*0x6a5b7f*/
  MEMORY[0xB0B4B8] = LoadFileSHP(MEMORY[0x83F968], (bool *)&MEMORY[0xB0B4D6]); /*0x6a5b93*/
  MEMORY[0xB0B4BC] = LoadFileSHP(MEMORY[0x83F95C], (bool *)&MEMORY[0xB0B4D7]); /*0x6a5ba7*/
  MEMORY[0xB0B4C0] = LoadFileSHP(MEMORY[0x83F950], (bool *)&MEMORY[0xB0B4D8]); /*0x6a5bbb*/
  MEMORY[0xB0B4C4] = LoadFileSHP(MEMORY[0x83F944], (bool *)&MEMORY[0xB0B4D9]); /*0x6a5bcf*/
  result = LoadFileSHP(MEMORY[0x83F938], (bool *)&MEMORY[0xB0B4DA]); /*0x6a5bd4*/
  MEMORY[0xB0B4C8] = result; /*0x6a5bdb*/
  return result; /*0x6a5bd9*/

}
} // namespace gamemd
// 0x6A6C30
namespace gamemd {
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
  unsigned char *v11; // eax
  char v12; // al
  unsigned int v14; // [esp-34h] [ebp-64h]
  unsigned int v15; // [esp-34h] [ebp-64h]
  unsigned int v16; // [esp-34h] [ebp-64h]
  uint8_t v17; // [esp+Ch] [ebp-24h]
  int v19; // [esp+14h] [ebp-1Ch]
  int v20; // [esp+18h] [ebp-18h] BYREF
  int v21; // [esp+1Ch] [ebp-14h]
  int v22[4]; // [esp+20h] [ebp-10h] BYREF
  char v23; // [esp+34h] [ebp+4h]

  v2 = (int)this; /*0x6a6c3b*/
  g_abs_8809F4 = g_abs_B07DC8; /*0x6a6c49*/
  g_abs_8809F8 = g_abs_B07DCC; /*0x6a6c53*/
  g_abs_8809FC = g_abs_B07DD0; /*0x6a6c5f*/
  v19 = g_abs_887314; /*0x6a6c65*/
  g_abs_880A00 = g_abs_B07DD4; /*0x6a6c6f*/
  g_abs_887314 = g_abs_887300; /*0x6a6c74*/
  v17 = 0; /*0x6a6c82*/
  v3 = (*(int (**)(int))(*(unsigned int *)g_abs_887300 + 128))(g_abs_887300); /*0x6a6c92*/
  v22[2] = (*(int (**)(int))(*(unsigned int *)g_abs_887300 + 124))(g_abs_887300); /*0x6a6c99*/
  v22[0] = 0; /*0x6a6ca3*/
  v22[1] = 0; /*0x6a6ca7*/
  v22[3] = v3; /*0x6a6cab*/
  if ( a2 || *(unsigned char *)(v2 + 21414) || (v23 = 0, *(unsigned char *)(v2 + 21415)) ) /*0x6a6cb9*/
    v23 = 1; /*0x6a6cc7*/
  if ( *(unsigned char *)(v2 + 21413) && v23 && !g_abs_A8ED6B ) /*0x6a6ce8*/
  {
    if ( *(unsigned char *)(v2 + 21415) ) /*0x6a6cee*/
    {
      v21 = g_abs_886F94; /*0x6a6d1f*/
      v17 = 1; /*0x6a6d39*/
      v20 = 0; /*0x6a6d3e*/
      DrawToSurfaceSHP( /*0x6a6d42*/
        g_abs_887300,
        g_abs_87F6CC,
        (int)g_abs_B0B468,
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
      v4 = g_abs_B0B4F8; /*0x6a6d47*/
      v5 = g_abs_B0B46C; /*0x6a6d4d*/
      for ( i = 0; ; ++i ) /*0x6a6d53*/
      {
        v7 = 26; /*0x6a6d63*/
        if ( *((unsigned int *)g_abs_A8B230 + 3374) ) /*0x6a6d5b*/
          v7 = 18; /*0x6a6d6a*/
        if ( i >= (g_abs_886F9C - g_abs_B0B4F8 - v7 + g_abs_886F94 - 7) / 50 ) /*0x6a6d9c*/
          break; /*0x6a6d9c*/
        v20 = 0; /*0x6a6dcc*/
        v21 = v4; /*0x6a6dd0*/
        DrawToSurfaceSHP(g_abs_887300, g_abs_87F6CC, (int)v5, 0, &v20, v22, 1024, 0, 0, 0, 1000, 0, 0, 0, 0, 0); /*0x6a6dd4*/
        v5 = g_abs_B0B46C; /*0x6a6dd9*/
        v4 += *((int16_t *)g_abs_B0B46C + 2); /*0x6a6de3*/
      }
      v20 = 0; /*0x6a6e1c*/
      v21 = v4; /*0x6a6e20*/
      DrawToSurfaceSHP( /*0x6a6e24*/
        g_abs_887300,
        g_abs_87F6CC,
        (int)g_abs_B0B470,
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
      v21 = v4 + *((int16_t *)g_abs_B0B470 + 2); /*0x6a6e48*/
      v20 = 0; /*0x6a6e6b*/
      DrawToSurfaceSHP( /*0x6a6e6f*/
        g_abs_887300,
        g_abs_87F6CC,
        (int)g_abs_B0B474,
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
    ShapeButton::Draw((int)g_abs_B07DF8, v17); /*0x6a6e88*/
    ShapeButton::Draw((int)g_abs_B0B3A0, v17); /*0x6a6e93*/
    v8 = (int *)&g_abs_B07C48; /*0x6a6e98*/
    do /*0x6a6eaf*/
    {
      ShapeButton::Draw((int)v8, 1); /*0x6a6ea1*/
      v8 += 24; /*0x6a6ea6*/
    }
    while ( (int)v8 < (int)&g_abs_B07DC8 ); /*0x6a6eaf*/
    ShapeButton::Draw((int)g_abs_B0B328, v17); /*0x6a6eb7*/
    ShapeButton::Draw((int)g_abs_B0B408, v17); /*0x6a6ec2*/
    if ( *(unsigned int *)(v2 + 21400) ) /*0x6a6ec7*/
    {
      v21 = g_abs_B0B4F8; /*0x6a6eef*/
      v14 = *(unsigned int *)(v2 + 21396); /*0x6a6f0a*/
      v20 = 0; /*0x6a6f18*/
      DrawToSurfaceSHP( /*0x6a6f1c*/
        g_abs_887300,
        g_abs_87F6CC,
        (int)g_abs_B0B478,
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
      v21 = g_abs_B0B4F8; /*0x6a6f3a*/
      v15 = *(unsigned int *)(v2 + 21396); /*0x6a6f55*/
      v20 = 0; /*0x6a6f63*/
      DrawToSurfaceSHP( /*0x6a6f67*/
        g_abs_887300,
        g_abs_87F6CC,
        (int)g_abs_B0B47C,
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
      v21 = g_abs_B0B4F8; /*0x6a6f85*/
      v16 = *(unsigned int *)(v2 + 21396); /*0x6a6fa0*/
      v20 = 0; /*0x6a6fae*/
      DrawToSurfaceSHP( /*0x6a6fb2*/
        g_abs_887300,
        g_abs_87F6CC,
        (int)g_abs_B0B480,
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
    g_abs_B0B518 = 1; /*0x6a6fb7*/
  }
  Sidebar::UpdateProductionDisplay(v2 + 3988 * *(unsigned int *)(v2 + 21404) + 5444, v2, *(unsigned char *)(v2 + 21415)); /*0x6a6fdf*/
  v9 = v23 || v17; /*0x6a6ff4*/
  Sidebar::Render(v2, v9); /*0x6a6ffc*/
  if ( g_abs_B07E4C ) /*0x6a7007*/
  {
    v10 = 1; /*0x6a7009*/
    g_abs_B07E4C = 0; /*0x6a700b*/
    g_abs_B0B518 = 1; /*0x6a7011*/
  }
  else
  {
    v10 = g_abs_B0B518; /*0x6a7019*/
  }
  if ( g_abs_B0B3F4 ) /*0x6a7025*/
  {
    v10 = 1; /*0x6a7027*/
    g_abs_B0B3F4 = 0; /*0x6a7029*/
    g_abs_B0B518 = 1; /*0x6a702f*/
  }
  v11 = &g_abs_B07C9C; /*0x6a7035*/
  do /*0x6a704a*/
  {
    if ( *v11 ) /*0x6a703a*/
    {
      v10 = 1; /*0x6a703e*/
      *v11 = 0; /*0x6a7040*/
    }
    v11 += 96; /*0x6a7042*/
  }
  while ( (int)v11 < (int)&g_abs_B07E1C ); /*0x6a704a*/
  g_abs_B0B518 = v10; /*0x6a7051*/
  if ( g_abs_B0B37C ) /*0x6a7059*/
  {
    v10 = 1; /*0x6a705b*/
    g_abs_B0B37C = 0; /*0x6a705d*/
    g_abs_B0B518 = 1; /*0x6a7063*/
  }
  if ( g_abs_B0B45C ) /*0x6a706f*/
  {
    v10 = 1; /*0x6a7071*/
    g_abs_B0B45C = 0; /*0x6a7073*/
    g_abs_B0B518 = 1; /*0x6a7079*/
  }
  if ( g_abs_887368 ) /*0x6a7087*/
  {
    (*(void (**)(int, int))(*(unsigned int *)g_abs_887368 + 12))(g_abs_887368, 1); /*0x6a708d*/
    v10 = g_abs_B0B518; /*0x6a7090*/
  }
  v12 = v10 || *(unsigned char *)(v2 + 21415); /*0x6a70a6*/
  Sidebar::FlushSidebarTooltip(v12); /*0x6a70ae*/
  *(unsigned char *)(v2 + 21414) = 0; /*0x6a70b7*/
  *(unsigned char *)(v2 + 21415) = 0; /*0x6a70bd*/
  g_abs_887314 = v19; /*0x6a70c5*/
  return v19; /*0x6a70c3*/

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

  result = *((unsigned int *)this + 5351); /*0x6a7598*/
  if ( a2 != result ) /*0x6a75a0*/
  {
    GadgetClass::Hide((unsigned char *)&g_abs_B07C48 + 96 * result); /*0x6a75b4*/
    v4 = 0; /*0x6a75c6*/
    v5 = (char *)this + 3988 * *((unsigned int *)this + 5351) + 5444; /*0x6a75ce*/
    *(unsigned char *)((char *)this + 3988 * *((unsigned int *)this + 5351) + 5472) = 0; /*0x6a75d5*/
    do /*0x6a7600*/
    {
      Tactical::SelectObject(&g_abs_87F7E8, 56 * (v4 + 60 * *(unsigned int *)(v5 + 56)) + 11566720); /*0x6a75f7*/
      ++v4; /*0x6a75fc*/
    }
    while ( v4 < 60 ); /*0x6a7600*/
    *((unsigned int *)this + 5351) = a2; /*0x6a7605*/
    GadgetClass::Show((unsigned char *)&g_abs_B07C48 + 96 * a2); /*0x6a7614*/
    v6 = (char *)this + 3988 * *((unsigned int *)this + 5351) + 5444; /*0x6a762c*/
    *(unsigned char *)((char *)this + 3988 * *((unsigned int *)this + 5351) + 5472) = 1; /*0x6a7633*/
    v7 = 26; /*0x6a7645*/
    if ( *((unsigned int *)g_abs_A8B230 + 3374) ) /*0x6a763d*/
      v7 = 18; /*0x6a764c*/
    v8 = 0; /*0x6a765f*/
    v9 = 2 * ((g_abs_886F9C - g_abs_B0B4F8 - v7 + g_abs_886F94 - 7) / 50); /*0x6a767f*/
    if ( v9 > 0 ) /*0x6a7683*/
    {
      do /*0x6a76c8*/
      {
        Hash::Reset((unsigned int *)(56 * (v8 + 60 * *(unsigned int *)(v6 + 56)) + 11566720)); /*0x6a769d*/
        Hash::InsertOrdered(&g_abs_87F7E8, 56 * (v8 + 60 * *(unsigned int *)(v6 + 56)) + 11566720); /*0x6a76c0*/
        ++v8; /*0x6a76c5*/
      }
      while ( v8 < v9 ); /*0x6a76c8*/
    }
    g_abs_884B8F = 1; /*0x6a76cc*/
    result = Tactical::UpdateUIVisibility((unsigned int *)this); /*0x6a76d3*/
    *((unsigned char *)this + 21415) = 1; /*0x6a76d9*/
  }
  return result; /*0x6a76e1*/

}
} // namespace gamemd
// 0x6ABD30
namespace gamemd {
GadgetClass * SidebarClass::LoadResources()
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
  if ( !g_abs_B0B468 ) /*0x6abd4e*/
  {
    g_abs_B0B468 = (void *)SearchMIXFile(g_abs_83FBBC, 0); /*0x6abd63*/
    g_abs_B0B46C = (void *)SearchMIXFile(g_abs_83FBAC, 0); /*0x6abd74*/
    g_abs_B0B470 = (void *)SearchMIXFile(g_abs_83FB9C, 0); /*0x6abd7e*/
  }
  Rect_Point::Set(&g_abs_B07E58, g_abs_886F90 + 16, g_abs_886FA4); /*0x6abd98*/
  VectorClass_ptr_ConvertClass::MarkDirty(&g_abs_B07E58); /*0x6abda2*/
  v0 = g_abs_B04A28 + g_abs_B04A20; /*0x6abdb2*/
  v21 = g_abs_B04A28 + g_abs_B04A20; /*0x6abdbc*/
  if ( g_abs_A8EB7C ) /*0x6abdbd*/
    Rect_Point::Set(&g_abs_B07E58, g_abs_886FA0 + g_abs_886FA8, v21); /*0x6abdce*/
  else
    Rect_Point::Set(&g_abs_B07E58, 0, v21); /*0x6abdd7*/
  v22 = (*(int (**)(int))(*(unsigned int *)g_abs_887300 + 128))(g_abs_887300) - v0; /*0x6abdf2*/
  v1 = (*(int (**)(int))(*(unsigned int *)g_abs_887300 + 124))(g_abs_887300); /*0x6abdf5*/
  ObjectClass::SetPositionXY(&g_abs_B07E58, v1, v22); /*0x6abdfe*/
  Rect_Point::Set(g_abs_B0B3A0, g_abs_B0B4DC, g_abs_B0B4E0); /*0x6abe15*/
  VectorClass_ptr_ConvertClass::MarkDirty(g_abs_B0B3A0); /*0x6abe1f*/
  g_abs_B0B3E4 = -g_abs_886F90; /*0x6abe37*/
  Rect_Point::Set(g_abs_B07DF8, g_abs_B0B3AC + g_abs_B0B4E4, g_abs_B0B3B0); /*0x6abe4c*/
  VectorClass_ptr_ConvertClass::MarkDirty(g_abs_B07DF8); /*0x6abe56*/
  v2 = (int *)&g_abs_B07C48; /*0x6abe60*/
  g_abs_B07E3C = -g_abs_886F90; /*0x6abe67*/
  v3 = 0; /*0x6abe6c*/
  do /*0x6abea8*/
  {
    Rect_Point::Set(v2, g_abs_B0B4E8 + v3 * g_abs_B0B4F0, g_abs_B0B4EC); /*0x6abe88*/
    VectorClass_ptr_ConvertClass::MarkDirty(v2); /*0x6abe8f*/
    v2 += 24; /*0x6abe99*/
    *(v2 - 7) = -g_abs_886F90; /*0x6abe9e*/
    ++v3; /*0x6abea1*/
  }
  while ( (int)v2 < (int)&g_abs_B07DC8 ); /*0x6abea8*/
  Rect_Point::Set(g_abs_B0B328, g_abs_B0B508, g_abs_B0B50C); /*0x6abebd*/
  VectorClass_ptr_ConvertClass::MarkDirty(g_abs_B0B328); /*0x6abec7*/
  g_abs_B0B36C = -g_abs_886F90; /*0x6abedf*/
  Rect_Point::Set(g_abs_B0B408, g_abs_B0B508 + g_abs_B0B510, g_abs_B0B50C); /*0x6abef2*/
  VectorClass_ptr_ConvertClass::MarkDirty(g_abs_B0B408); /*0x6abefc*/
  g_abs_B0B44C = -g_abs_886F90; /*0x6abf0f*/
  v4 = 26; /*0x6abf1d*/
  if ( *((unsigned int *)g_abs_A8B230 + 3374) ) /*0x6abf15*/
    v4 = 18; /*0x6abf24*/
  v5 = (int *)&g_abs_B07E80; /*0x6abf44*/
  v23 = (int *)&g_abs_B07E80; /*0x6abf4d*/
  v6 = (g_abs_886F9C - v4 - g_abs_B0B4F8 + g_abs_886F94 - 7) / 50; /*0x6abf5d*/
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
          (*(void (**)(int *, int, int))(*v5 + 100))( /*0x6abf96*/
            v5,
            g_abs_B0B4F4 + i * g_abs_B0B4FC,
            v7 * g_abs_B0B500 + g_abs_B0B4F8 + 1);
          (*(void (**)(int *))(*v5 + 72))(v5); /*0x6abf9d*/
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
  while ( (int)v5 < (int)&g_abs_B0B300 ); /*0x6abfc2*/
  result = g_abs_887368; /*0x6abfc4*/
  if ( g_abs_887368 ) /*0x6abfcd*/
  {
    v31 = 0; /*0x6abfd3*/
    v10 = 203; /*0x6abfd7*/
    v11 = (int *)&g_abs_B07C58; /*0x6abfdc*/
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
      HashTable::Remove((int *)g_abs_887368, v10); /*0x6ac00b*/
      CommandClass::AddAction(g_abs_887368, (int)&v25); /*0x6ac01b*/
      ++v10; /*0x6ac020*/
      v11 += 24; /*0x6ac021*/
    }
    while ( v10 - 203 < 4 ); /*0x6ac02d*/
    for ( j = 0; j < 60; ++j ) /*0x6ac02f*/
      HashTable::Remove((int *)g_abs_887368, j + 1000); /*0x6ac03e*/
    v16 = 0; /*0x6ac04d*/
    if ( v24 > 0 ) /*0x6ac051*/
    {
      v17 = (int *)&g_abs_B07E90; /*0x6ac053*/
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
        CommandClass::AddAction(g_abs_887368, (int)&v25); /*0x6ac096*/
        ++v16; /*0x6ac09f*/
        v17 += 14; /*0x6ac0a0*/
      }
      while ( v16 < v24 ); /*0x6ac0a5*/
    }
    v26 = g_abs_B07E04; /*0x6ac0ba*/
    v29 = g_abs_B07E10; /*0x6ac0c6*/
    v31 = 0; /*0x6ac0d0*/
    v25 = 102; /*0x6ac0d5*/
    v30 = aTxtSellMode; /*0x6ac0dd*/
    v27 = g_abs_B07E08; /*0x6ac0e5*/
    v28 = g_abs_B07E0C; /*0x6ac0e9*/
    HashTable::Remove((int *)g_abs_887368, 102); /*0x6ac0ed*/
    CommandClass::AddAction(g_abs_887368, (int)&v25); /*0x6ac0fd*/
    v26 = g_abs_B0B3AC; /*0x6ac113*/
    v27 = g_abs_B0B3B0; /*0x6ac11c*/
    v25 = 101; /*0x6ac128*/
    v30 = aTxtRepairMode; /*0x6ac130*/
    v28 = g_abs_B0B3B4; /*0x6ac138*/
    v29 = g_abs_B0B3B8; /*0x6ac13c*/
    HashTable::Remove((int *)g_abs_887368, 101); /*0x6ac140*/
    CommandClass::AddAction(g_abs_887368, (int)&v25); /*0x6ac150*/
    v26 = g_abs_B0B414; /*0x6ac166*/
    v28 = g_abs_B0B41C; /*0x6ac170*/
    v25 = 200; /*0x6ac17f*/
    v30 = 0; /*0x6ac187*/
    v27 = g_abs_B0B418; /*0x6ac18b*/
    v29 = g_abs_B0B420; /*0x6ac18f*/
    HashTable::Remove((int *)g_abs_887368, 200); /*0x6ac193*/
    CommandClass::AddAction(g_abs_887368, (int)&v25); /*0x6ac1a3*/
    v26 = g_abs_B0B334; /*0x6ac1b9*/
    v29 = g_abs_B0B340; /*0x6ac1c8*/
    v25 = 201; /*0x6ac1d2*/
    v30 = 0; /*0x6ac1da*/
    v27 = g_abs_B0B338; /*0x6ac1de*/
    v28 = g_abs_B0B33C; /*0x6ac1e2*/
    HashTable::Remove((int *)g_abs_887368, 201); /*0x6ac1e6*/
    return CommandClass::AddAction(g_abs_887368, (int)&v25); /*0x6ac1f6*/
  }
  return result; /*0x6ac1fb*/

}
} // namespace gamemd
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
  if ( !g_abs_A8ED6B ) /*0x65301f*/
  {
    g_abs_B0499C = 242; /*0x65303d*/
    g_abs_B049C4 = 1; /*0x653047*/
    g_abs_B049C8 = g_abs_87F6CC; /*0x65304e*/
    g_abs_B049A5 = 0; /*0x653053*/
    g_abs_B049A8 = 0; /*0x653059*/
    g_abs_B04998 = 5; /*0x65305f*/
    Rect_Point::Set(g_abs_B04978, g_abs_B04A00, g_abs_B04A04); /*0x653069*/
    ShapeButton::SetShape((int)g_abs_B04978, (int)dword_B048E0, 0, 0); /*0x65307b*/
    VectorClass_ptr_ConvertClass::MarkDirty(g_abs_B04978); /*0x653085*/
    g_abs_B04960 = g_abs_87F6CC; /*0x65309b*/
    g_abs_B04934 = 243; /*0x6530a8*/
    g_abs_B0495C = 1; /*0x6530b2*/
    g_abs_B0493D = 0; /*0x6530b9*/
    g_abs_B04940 = 0; /*0x6530bf*/
    g_abs_B04930 = 5; /*0x6530c5*/
    Rect_Point::Set(g_abs_B04910, dword_B048C8, dword_B048CC); /*0x6530cf*/
    ShapeButton::SetShape((int)g_abs_B04910, (int)dword_B048AC, 0, 0); /*0x6530e2*/
    VectorClass_ptr_ConvertClass::MarkDirty(g_abs_B04910); /*0x6530ec*/
  }

}
// 0x6AB990
int SidebarClass::select()
{

  int v2; // eax
  int result; // eax

  SidebarClass::updateStripVisibility((unsigned int *)g_abs_887368); /*0x6ab99a*/
  SidebarClass::initializeStrip((unsigned int *)g_abs_887368, 0); /*0x6ab9a7*/
  v2 = *((unsigned int *)this + 11); /*0x6ab9ac*/
  *((unsigned char *)this + 52) = 1; /*0x6ab9b1*/
  *(unsigned char *)(v2 + 60) = 1; /*0x6ab9bb*/
  result = MapClass::MarkForRedraw(&g_abs_87F7E8, 0); /*0x6ab9be*/
  g_abs_884B8F = 1; /*0x6ab9c3*/
  g_abs_B0B518 = 1; /*0x6ab9c9*/
  return result; /*0x6ab9cf*/

}
// 0x6AB9E0
int SidebarClass::deselect()
{

  int v2; // eax
  int result; // eax

  SidebarClass::updateStripPosition((unsigned int *)g_abs_887368); /*0x6ab9e9*/
  v2 = *((unsigned int *)this + 11); /*0x6ab9ee*/
  *((unsigned char *)this + 52) = 0; /*0x6ab9f1*/
  *(unsigned char *)(v2 + 60) = 1; /*0x6ab9fc*/
  result = MapClass::MarkForRedraw(&g_abs_87F7E8, 0); /*0x6aba00*/
  g_abs_884B8F = 1; /*0x6aba05*/
  g_abs_B0B518 = 1; /*0x6aba0c*/
  return result; /*0x6aba13*/

}