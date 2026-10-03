// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/classes/ActionQueue_e4.hpp"
#include "e4/classes/Property_e4.hpp"
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_6E0080_e4.hpp"
#include "e4/classes/E4Recv_6E0250_e4.hpp"
#include "e4/classes/E4Recv_6E0270_e4.hpp"
#include "e4/classes/E4Recv_6E0290_e4.hpp"
#include "e4/classes/E4Recv_6E0490_e4.hpp"
#include "e4/classes/E4Recv_6E0790_e4.hpp"
#include "e4/classes/E4Recv_6E07F0_e4.hpp"
#include "e4/classes/E4Recv_6E0850_e4.hpp"
#include "e4/classes/E4Recv_6E1180_e4.hpp"
#include "e4/classes/E4Recv_6E14A0_e4.hpp"
#include "e4/classes/E4Recv_6E2790_e4.hpp"
#include "e4/classes/E4Recv_6E2A50_e4.hpp"
#include "e4/classes/E4Recv_6E3380_e4.hpp"
#include "e4/classes/E4Recv_6E35F0_e4.hpp"
#include "e4/classes/E4Recv_6E37F0_e4.hpp"
#include "e4/classes/E4Recv_6E3F70_e4.hpp"
#include "e4/classes/E4Recv_6E5290_e4.hpp"
#include "e4/classes/E4Recv_6E5FE0_e4.hpp"
#include "e4/classes/E4Recv_6E6B70_e4.hpp"
#include "e4/classes/E4Recv_6E8000_e4.hpp"
#include "e4/classes/E4Recv_6E85B0_e4.hpp"
#include "e4/classes/E4Recv_6EA080_e4.hpp"
#include "e4/classes/E4Recv_6EA0D0_e4.hpp"
#include "e4/classes/E4Recv_6EC370_e4.hpp"
#include "e4/classes/E4Recv_6ED200_e4.hpp"
#include "e4/classes/E4Recv_6EDDC0_e4.hpp"
#include "e4/classes/E4Recv_6EDE80_e4.hpp"
#include "e4/classes/E4Recv_6EDF10_e4.hpp"
#include "e4/classes/E4Recv_6EDF90_e4.hpp"
#include "e4/classes/E4Recv_6EDFB0_e4.hpp"
#include "e4/classes/E4Recv_6EDFD0_e4.hpp"
#include "e4/classes/E4Recv_6EE050_e4.hpp"
#include "e4/classes/E4Recv_6EE800_e4.hpp"
#include "e4/classes/E4Recv_6EF450_e4.hpp"
#include "e4/classes/E4Recv_6EF700_e4.hpp"
#include "e4/classes/E4Recv_6EFC70_e4.hpp"
#include "e4/classes/Tactical_42_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Super_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/BuildingType_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/LinkedList_flat_e4.hpp"
#include "e4/classes/ScenarioClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/FootClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/TeamTypeClass_28_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Array_e4.hpp"
#include "e4/classes/DialogQueue_e4.hpp"
#include "e4/classes/TeamClass_e4.hpp"
#include "e4/classes/ActionQueue_e4.hpp"
#include "e4/classes/Property_e4.hpp"
#include "e4/classes/SuperWeapon_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/LayerClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/LightningStorm_e4.hpp"  // G42.36 C2027 supply

// 0x6E0250
namespace gamemd {
int E4Recv_6E0250::sub_6E0250(int a2, int a3, int a4, int a5)
{

  HIBYTE((&dword_A8B230)[374].vtable3) = this->isAliveFlag; /*0x6e025c*/
  return 1; /*0x6e0264*/

}
}
// 0x6E0270
namespace gamemd {
int E4Recv_6E0270::sub_6E0270(int a2, int a3, int a4, int a5)
{

  BYTE2(((unsigned int *)(dword_A8B230))[374].vtable3) = this->isAliveFlag; /*0x6e027c*/
  return 1; /*0x6e0284*/

}
}
// 0x6E0290
namespace gamemd {
int E4Recv_6E0290::sub_6E0290(int a2, int a3, int a4, int a5)
{

  LOBYTE((&dword_A8B230)[374].uniqueId) = this->isAliveFlag; /*0x6e029c*/
  return 1; /*0x6e02a4*/

}
}
// 0x6E2050
namespace gamemd {
char globalHelper_0E2050(void * a1, void * a2, void * a3, void * a4)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6E2050)
}
}
// 0x6E2790
namespace gamemd {
int E4Recv_6E2790::sub_6E2790(int a2, int a3, int a4, int a5)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6E2790)
}
}
// 0x6E30C0
namespace gamemd {
char CreateHouseClass(void * a1, void * a2, void * a3, void * a4, void * a5, void * a6)
{
  HouseClass *v7; // esi
  int Field11; // eax
  HouseClass *v10; // [esp+0h] [ebp-4h]

  v7 = *(HouseClass **)((unsigned int)(a1)+ 144); /*0x6e30c1*/
  if ( !a6 ) /*0x6e30cd*/
    return 0; /*0x6e30cd*/
  if ( v7 == (HouseClass *)8997 ) /*0x6e30d5*/
  {
    Field11 = ((Property *)(a6))->GetField11(); /*0x6e30d7*/
  }
  else
  {
    if ( v7 == (HouseClass *)-1 ) /*0x6e30e1*/
      return 0; /*0x6e3103*/
    if ( (uint8_t)((BuildingType*)v7)->IsSpecialType() ) /*0x6e30e5*/
      Field11 = ((BuildingType*)v7)->FindOwnerHouse(); /*0x6e30f0*/
    else
      Field11 = ((HouseClass *)(v7))->FindOwner(); /*0x6e30f7*/
  }
  if ( !Field11 ) /*0x6e30fe*/
    return 0; /*0x6e30fe*/
  HouseClass::RespawnStartingForces((gamemd::TechnoClass *)(v10),(void **)(a2),(unsigned int *)(a3), (int)v7); /*0x6e3108*/
  return 1; /*0x6e3102*/
}
}
// 0x6E3380
namespace gamemd {
int E4Recv_6E3380::sub_6E3380(int a2, int a3, int a4, int a5)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6E3380)
}
}
// 0x6E37F0
namespace gamemd {
int E4Recv_6E37F0::sub_6E37F0(int a2, int a3, int a4, ObjectClass * aP4)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6E37F0)
}
}
// 0x6E4090
namespace gamemd {
char sub_6E4090(int a1, int a2, int a3, int a4)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6E4090)
}
}
// 0x6EC250
namespace gamemd {
int sub_6EC250(int a1, int a2)
{
  int result; // eax
  int i; // ebp
  int v4; // esi
  int j; // eax
  int v7; // eax
  int v10; // [esp+10h] [ebp-8h]

  result = g_HouseClass_AIProductionState; /*0x6ec253*/
  for ( i = 0; i < g_HouseClass_AIProductionState; ++i ) /*0x6ec265*/
  {
    v4 = *((unsigned int *)g_TeamClassPool + i); /*0x6ec275*/
    if ( v4 && a2 == v4->owner && v4->buildingType->q0B4 < a1 ) /*0x6ec294*/
    {
      for ( j = v4->firstUnit; j; j = v4->firstUnit ) /*0x6ec29b*/
        ((TeamClass *)(v4))->LiberateMember_Start(j, 0xFFFFFFFF, 0); /*0x6ec2a4*/
            *(unsigned char *)(v4 + 126) = 1;
            *(unsigned char *)(v4 + 125) = 1;
      g_CurrentFrame = g_CurrentFrame; /*0x6ec2bc*/
      v7 = Math::RoundToInt(*(double *)&((unsigned int *)(g_RulesClass_Instance))[1].AITriggerTrackRecordCoefficient * 900.0); /*0x6ec2ce*/
      v4->isSuspended = 1; /*0x6ec2da*/
      v4->suspendTimer = g_CurrentFrame; /*0x6ec2e0*/
      v4->q068 = v10; /*0x6ec2e2*/
      v4->q06C = v7; /*0x6ec2e5*/
    }
    result = g_HouseClass_AIProductionState; /*0x6ec2e8*/
  }
  return result; /*0x6ec2f9*/
}
}
// 0x6EDFD0
namespace gamemd {
void E4Recv_6EDFD0::sub_6EDFD0(int a2, int a3)
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6EDFD0)
}
}
// 0x6EEBD0
namespace gamemd {
unsigned int * DamageMapClassArea(int ecx0, void * a1, FootClass * aP2, int a4, char a5)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6EEBD0)
}
}
// 0x6EFC70
namespace gamemd {
AbstractClass * * E4Recv_6EFC70::ProcessAISuperWeaponSelection(ScriptClass * aP1, int a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6EFC70)
}
}
// 0x6E0030
namespace gamemd {
char sub_6E0030(int a1, int a2, int a3, int a4)
{
  return 1; /*0x6e0032*/
}
} // namespace gamemd

// 0x6E0040
namespace gamemd {
char sub_6E0040(int a1, int a2, int a3, int a4)
{
  return 1; /*0x6e0042*/
}
} // namespace gamemd

// 0x6E0080
namespace gamemd {
char E4Recv_6E0080::sub_6E0080(int a2, int a3, int a4, int a5)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6E0080)
}
} // namespace gamemd

// 0x6E01C0
namespace gamemd {
char globalHelper_0E01C0(int a1, int a2, int aP1, IUnknown * aP3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6E01C0)
}
} // namespace gamemd

// 0x6E0790
namespace gamemd {
char E4Recv_6E0790::sub_6E0790(int a2, int a3, int a4, int a5)
{

  int v5; // esi
  int *WorldCoords; // eax
  unsigned int v8[3]; // [esp+4h] [ebp-Ch] BYREF

  v5 = *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 4008); /*0x6e07a3*/
  WorldCoords = (int *)(((Cell *)((Cell *)dword_A8B230))->GetWorldCoords(v8, *(unsigned int *)&((unsigned int *)this)[44])); /*0x6e07b5*/
  CreateSmokeEffectAt(50, v5, *WorldCoords, WorldCoords[1], WorldCoords[2], 0, 0); /*0x6e07d6*/
  return 1; /*0x6e07dd*/

}
} // namespace gamemd

// 0x6E07F0
namespace gamemd {
char E4Recv_6E07F0::sub_6E07F0(int a2, int a3, int a4, int a5)
{

  int v5; // esi
  int *WorldCoords; // eax
  unsigned int v8[3]; // [esp+4h] [ebp-Ch] BYREF

  v5 = *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 4008); /*0x6e0803*/
  WorldCoords = (int *)(((Cell *)((Cell *)dword_A8B230))->GetWorldCoords(v8, *(unsigned int *)&((unsigned int *)this)[44])); /*0x6e0815*/
  CreateSmokeEffectAt(100, v5, *WorldCoords, WorldCoords[1], WorldCoords[2], 0, 0); /*0x6e0836*/
  return 1; /*0x6e083d*/

}
} // namespace gamemd

// 0x6E0850
namespace gamemd {
char E4Recv_6E0850::sub_6E0850(int a2, int a3, int a4, int a5)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6E0850)
}
} // namespace gamemd

// 0x6E1180
namespace gamemd {
char E4Recv_6E1180::sub_6E1180(int a2, int a3, int a4, int a5)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6E1180)
}
} // namespace gamemd

// 0x6E21D0
namespace gamemd {
char sub_6E21D0(int a1, int a2, int a3, int a4)
{
  return 1; /*0x6e21d2*/
}
} // namespace gamemd

// 0x6E2A50
namespace gamemd {
char E4Recv_6E2A50::sub_6E2A50(int a2, int a3, int a4, int a5)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6E2A50)
}
} // namespace gamemd

// 0x6E2C20
namespace gamemd {
char globalHelper_0E2C20(int a1, int a2, int a3, IUnknown * aP3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6E2C20)
}
} // namespace gamemd

// 0x6E35F0
namespace gamemd {
char E4Recv_6E35F0::sub_6E35F0(void * a2, int a3, int a4, int a5)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6E35F0)
}
} // namespace gamemd

// 0x6E3F70
namespace gamemd {
unsigned int * E4Recv_6E3F70::sub_6E3F70(unsigned int * a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6E3F70)
}
} // namespace gamemd

// 0x6E4440
namespace gamemd {
char globalHelper_0E4440(unsigned int * a0, int a2, int a3, IUnknown * aP3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6E4440)
}
} // namespace gamemd

// 0x6E44C0
namespace gamemd {
char globalHelper_0E44C0(unsigned int * a0, int a2, int a3, IUnknown * aP3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6E44C0)
}
} // namespace gamemd

// 0x6E4540
namespace gamemd {
char globalHelper_0E4540(unsigned int * a0, int a2, int a3, IUnknown * aP3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6E4540)
}
} // namespace gamemd

// 0x6E4B00
namespace gamemd {
unsigned int * Tactical_42::loc_6E4B00(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = *(void **)&Block->m_1[3]; /*0x6e4ab3*/
  *(unsigned int *)Block->__pad_0 = &vt_VectorClass; /*0x6e4ab6*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x6e4ac0*/
  {
    __3_YAXPAX_Z(v3); /*0x6e4ac8*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x6e4ad0*/
  }
  BYTE1(Block->m_C) = 0; /*0x6e4adb*/
  Block->m_8 = 0; /*0x6e4ae1*/
  if ( (a2 & 1) != 0 ) /*0x6e4ae8*/
    __3_YAXPAX_Z(Block); /*0x6e4aeb*/
  return Block->__pad_0; /*0x6e4af5*/

}
} // namespace gamemd

// 0x6E4B50
namespace gamemd {
void sub_6E4B50()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6e4b5c*/
  dbl_B0E708 = Math::Sqrt(v0 + v0); /*0x6e4b6e*/
}
} // namespace gamemd

// 0x6E4B80
namespace gamemd {
void sub_6E4B80()
{
  dbl_B0E770 = dbl_B0E708 / 60.0; /*0x6e4b8c*/
}
} // namespace gamemd

// 0x6E4BA0
namespace gamemd {
void sub_6E4BA0()
{
  dbl_B0E758 = 1.0 / dbl_B0E770; /*0x6e4bac*/
}
} // namespace gamemd

// 0x6E4BC0
namespace gamemd {
void sub_6E4BC0()
{
  dbl_B0E750 = 0.0174532925199433 * 45.0; /*0x6e4bcc*/
}
} // namespace gamemd

// 0x6E4BE0
namespace gamemd {
void sub_6E4BE0()
{
  dbl_B0E710 = 0.0174532925199433 * 60.0; /*0x6e4bec*/
}
} // namespace gamemd

// 0x6E4C00
namespace gamemd {
void sub_6E4C00()
{
  dbl_B0E6E8 = 0.0174532925199433 * 90.0; /*0x6e4c0c*/
}
} // namespace gamemd

// 0x6E4C20
namespace gamemd {
long long sub_6E4C20()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B0E6E8 - dbl_B0E710); /*0x6e4c32*/
  result = Math::RoundToInt(v0 * dbl_B0E708 * 0.5); /*0x6e4c46*/
  dword_B0E778 = result; /*0x6e4c4b*/
  return result; /*0x6e4c50*/
}
} // namespace gamemd

// 0x6E4C60
namespace gamemd {
void sub_6E4C60()
{
  dbl_B0E718 = Math::ArcTan((double)dword_B0E778 * 0.00390625); /*0x6e4c77*/
}
} // namespace gamemd

// 0x6E4C90
namespace gamemd {
void sub_6E4C90()
{
  dbl_B0E748 = Math::ArcTan((double)(2 * dword_B0E778) / dbl_B0E708); /*0x6e4cb2*/
}
} // namespace gamemd

// 0x6E4CC0
namespace gamemd {
long long sub_6E4CC0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0E778) + 0.5); /*0x6e4cdb*/
  dword_B0E76C = result; /*0x6e4ce0*/
  return result; /*0x6e4ce6*/
}
} // namespace gamemd

// 0x6E4CF0
namespace gamemd {
int sub_6E4CF0()
{
  dword_B0E700 = 0; /*0x6e4cf2*/
  return 0; /*0x6e4cfe*/
}
} // namespace gamemd

// 0x6E4D00
namespace gamemd {
int sub_6E4D00()
{
  dword_B0E738 = 0; /*0x6e4d02*/
  dword_B0E73C = 0; /*0x6e4d07*/
  dword_B0E740 = 0; /*0x6e4d0c*/
  return 0; /*0x6e4d11*/
}
} // namespace gamemd

// 0x6E4D20
namespace gamemd {
int sub_6E4D20()
{
  dword_B0E768 = 0; /*0x6e4d25*/
  dword_B0E760 = 128; /*0x6e4d2f*/
  dword_B0E764 = 128; /*0x6e4d34*/
  return 128; /*0x6e4d39*/
}
} // namespace gamemd

// 0x6E4D40
namespace gamemd {
int sub_6E4D40()
{
  dword_B0E6F0 = 0; /*0x6e4d42*/
  dword_B0E6F4 = 0; /*0x6e4d47*/
  dword_B0E6F8 = 0; /*0x6e4d4c*/
  dword_B0E6FC = 0; /*0x6e4d51*/
  return 0; /*0x6e4d56*/
}
} // namespace gamemd

// 0x6E4D60
namespace gamemd {
int sub_6E4D60()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6E4D60)
}
} // namespace gamemd

// 0x6E4DA0
namespace gamemd {
void sub_6E4DA0()
{
  TagClass_Array = (int)&VectorClass_TagClass___vftable; /*0x6e4da8*/
  if ( g_TagClassCount && byte_B0E72D ) /*0x6e4dbc*/
  {
    RA2_OPDEL(g_TagClassCount); /*0x6e4dbf*/
    g_TagClassCount = 0; /*0x6e4dc7*/
  }
  byte_B0E72D = 0; /*0x6e4dcd*/
  dword_B0E728 = 0; /*0x6e4dd3*/
}
} // namespace gamemd

// 0x6E5290
namespace gamemd {
char E4Recv_6E5290::sub_6E5290()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6E5290)
}
} // namespace gamemd

// 0x6E57DE
namespace gamemd {
char ObjectClass::_do_always_noconv_codecvt_base_std__MBE_NXZ_18()
{

  return 1; /*0x6e57e0*/

}
} // namespace gamemd

// 0x6E58D0
namespace gamemd {
void sub_6E58D0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6e58dc*/
  dbl_B0E7B8 = Math::Sqrt(v0 + v0); /*0x6e58ee*/
}
} // namespace gamemd

// 0x6E5900
namespace gamemd {
void sub_6E5900()
{
  dbl_B0E808 = dbl_B0E7B8 / 60.0; /*0x6e590c*/
}
} // namespace gamemd

// 0x6E5920
namespace gamemd {
void sub_6E5920()
{
  dbl_B0E7F0 = 1.0 / dbl_B0E808; /*0x6e592c*/
}
} // namespace gamemd

// 0x6E5940
namespace gamemd {
void sub_6E5940()
{
  dbl_B0E7E8 = 0.0174532925199433 * 45.0; /*0x6e594c*/
}
} // namespace gamemd

// 0x6E5960
namespace gamemd {
void sub_6E5960()
{
  dbl_B0E7C0 = 0.0174532925199433 * 60.0; /*0x6e596c*/
}
} // namespace gamemd

// 0x6E5980
namespace gamemd {
void sub_6E5980()
{
  dbl_B0E798 = 0.0174532925199433 * 90.0; /*0x6e598c*/
}
} // namespace gamemd

// 0x6E59A0
namespace gamemd {
long long sub_6E59A0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B0E798 - dbl_B0E7C0); /*0x6e59b2*/
  result = Math::RoundToInt(v0 * dbl_B0E7B8 * 0.5); /*0x6e59c6*/
  dword_B0E810 = result; /*0x6e59cb*/
  return result; /*0x6e59d0*/
}
} // namespace gamemd

// 0x6E59E0
namespace gamemd {
void sub_6E59E0()
{
  dbl_B0E7C8 = Math::ArcTan((double)dword_B0E810 * 0.00390625); /*0x6e59f7*/
}
} // namespace gamemd

// 0x6E5A10
namespace gamemd {
void sub_6E5A10()
{
  dbl_B0E7E0 = Math::ArcTan((double)(2 * dword_B0E810) / dbl_B0E7B8); /*0x6e5a32*/
}
} // namespace gamemd

// 0x6E5A40
namespace gamemd {
long long sub_6E5A40()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0E810) + 0.5); /*0x6e5a5b*/
  dword_B0E804 = result; /*0x6e5a60*/
  return result; /*0x6e5a66*/
}
} // namespace gamemd

// 0x6E5A70
namespace gamemd {
int sub_6E5A70()
{
  word_B0E7B0 = 0; /*0x6e5a72*/
  word_B0E7B2 = 0; /*0x6e5a78*/
  return 0; /*0x6e5a7e*/
}
} // namespace gamemd

// 0x6E5A80
namespace gamemd {
int sub_6E5A80()
{
  dword_B0E7D0 = 0; /*0x6e5a82*/
  dword_B0E7D4 = 0; /*0x6e5a87*/
  dword_B0E7D8 = 0; /*0x6e5a8c*/
  return 0; /*0x6e5a91*/
}
} // namespace gamemd

// 0x6E5AA0
namespace gamemd {
int sub_6E5AA0()
{
  dword_B0E800 = 0; /*0x6e5aa5*/
  dword_B0E7F8 = 128; /*0x6e5aaf*/
  dword_B0E7FC = 128; /*0x6e5ab4*/
  return 128; /*0x6e5ab9*/
}
} // namespace gamemd

// 0x6E5AC0
namespace gamemd {
int sub_6E5AC0()
{
  dword_B0E7A0 = 0; /*0x6e5ac2*/
  dword_B0E7A4 = 0; /*0x6e5ac7*/
  dword_B0E7A8 = 0; /*0x6e5acc*/
  dword_B0E7AC = 0; /*0x6e5ad1*/
  return 0; /*0x6e5ad6*/
}
} // namespace gamemd

// 0x6E5AE0
namespace gamemd {
int sub_6E5AE0()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6E5AE0)
}
} // namespace gamemd

// 0x6E5B20
namespace gamemd {
void sub_6E5B20()
{
  dword_B0E780 = (int)&VectorClass_TagTypeClass___vftable; /*0x6e5b28*/
  if ( dword_B0E784 && byte_B0E78D ) /*0x6e5b3c*/
  {
    RA2_OPDEL(dword_B0E784); /*0x6e5b3f*/
    dword_B0E784 = 0; /*0x6e5b47*/
  }
  byte_B0E78D = 0; /*0x6e5b4d*/
  dword_B0E788 = 0; /*0x6e5b53*/
}
} // namespace gamemd

// 0x6E6840
namespace gamemd {
void sub_6E6840()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6e684c*/
  dbl_B0E838 = Math::Sqrt(v0 + v0); /*0x6e685e*/
}
} // namespace gamemd

// 0x6E6870
namespace gamemd {
void sub_6E6870()
{
  dbl_B0E8A0 = dbl_B0E838 / 60.0; /*0x6e687c*/
}
} // namespace gamemd

// 0x6E6890
namespace gamemd {
void sub_6E6890()
{
  dbl_B0E888 = 1.0 / dbl_B0E8A0; /*0x6e689c*/
}
} // namespace gamemd

// 0x6E68B0
namespace gamemd {
void sub_6E68B0()
{
  dbl_B0E880 = 0.0174532925199433 * 45.0; /*0x6e68bc*/
}
} // namespace gamemd

// 0x6E68D0
namespace gamemd {
void sub_6E68D0()
{
  dbl_B0E858 = 0.0174532925199433 * 60.0; /*0x6e68dc*/
}
} // namespace gamemd

// 0x6E68F0
namespace gamemd {
void sub_6E68F0()
{
  dbl_B0E818 = 0.0174532925199433 * 90.0; /*0x6e68fc*/
}
} // namespace gamemd

// 0x6E6910
namespace gamemd {
long long sub_6E6910()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B0E818 - dbl_B0E858); /*0x6e6922*/
  result = Math::RoundToInt(v0 * dbl_B0E838 * 0.5); /*0x6e6936*/
  dword_B0E8A8 = result; /*0x6e693b*/
  return result; /*0x6e6940*/
}
} // namespace gamemd

// 0x6E6950
namespace gamemd {
void sub_6E6950()
{
  dbl_B0E860 = Math::ArcTan((double)dword_B0E8A8 * 0.00390625); /*0x6e6967*/
}
} // namespace gamemd

// 0x6E6980
namespace gamemd {
void sub_6E6980()
{
  dbl_B0E878 = Math::ArcTan((double)(2 * dword_B0E8A8) / dbl_B0E838); /*0x6e69a2*/
}
} // namespace gamemd

// 0x6E69B0
namespace gamemd {
long long sub_6E69B0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0E8A8) + 0.5); /*0x6e69cb*/
  dword_B0E89C = result; /*0x6e69d0*/
  return result; /*0x6e69d6*/
}
} // namespace gamemd

// 0x6E69E0
namespace gamemd {
int sub_6E69E0()
{
  word_B0E830 = 0; /*0x6e69e2*/
  word_B0E832 = 0; /*0x6e69e8*/
  return 0; /*0x6e69ee*/
}
} // namespace gamemd

// 0x6E69F0
namespace gamemd {
int sub_6E69F0()
{
  dword_B0E868 = 0; /*0x6e69f2*/
  dword_B0E86C = 0; /*0x6e69f7*/
  dword_B0E870 = 0; /*0x6e69fc*/
  return 0; /*0x6e6a01*/
}
} // namespace gamemd

// 0x6E6A10
namespace gamemd {
int sub_6E6A10()
{
  dword_B0E898 = 0; /*0x6e6a15*/
  dword_B0E890 = 128; /*0x6e6a1f*/
  dword_B0E894 = 128; /*0x6e6a24*/
  return 128; /*0x6e6a29*/
}
} // namespace gamemd

// 0x6E6A30
namespace gamemd {
int sub_6E6A30()
{
  dword_B0E820 = 0; /*0x6e6a32*/
  dword_B0E824 = 0; /*0x6e6a37*/
  dword_B0E828 = 0; /*0x6e6a3c*/
  dword_B0E82C = 0; /*0x6e6a41*/
  return 0; /*0x6e6a46*/
}
} // namespace gamemd

// 0x6E6A50
namespace gamemd {
int sub_6E6A50()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6E6A50)
}
} // namespace gamemd

// 0x6E6A80
namespace gamemd {
void sub_6E6A80()
{
  RA2_OPDEL(g_BuildingLoadQueue_Array); /*0x6e6a86*/
  g_BuildingLoadQueue_Array = 0; /*0x6e6a90*/
  dword_B0E844 = 0; /*0x6e6a95*/
  dword_B0E848 = 0; /*0x6e6a9a*/
  byte_B0E84C = 0; /*0x6e6a9f*/
  dword_B0E850 = 0; /*0x6e6aa4*/
}
} // namespace gamemd

// 0x6E6B70
namespace gamemd {
unsigned char * E4Recv_6E6B70::sub_6E6B70(unsigned int * a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6E6B70)
}
} // namespace gamemd

// 0x6E7C70
namespace gamemd {
void sub_6E7C70()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6e7c7c*/
  dbl_B0E8D0 = Math::Sqrt(v0 + v0); /*0x6e7c8e*/
}
} // namespace gamemd

// 0x6E7CA0
namespace gamemd {
void sub_6E7CA0()
{
  dbl_B0E920 = dbl_B0E8D0 / 60.0; /*0x6e7cac*/
}
} // namespace gamemd

// 0x6E7CC0
namespace gamemd {
void sub_6E7CC0()
{
  dbl_B0E908 = 1.0 / dbl_B0E920; /*0x6e7ccc*/
}
} // namespace gamemd

// 0x6E7CE0
namespace gamemd {
void sub_6E7CE0()
{
  dbl_B0E900 = 0.0174532925199433 * 45.0; /*0x6e7cec*/
}
} // namespace gamemd

// 0x6E7D00
namespace gamemd {
void sub_6E7D00()
{
  dbl_B0E8D8 = 0.0174532925199433 * 60.0; /*0x6e7d0c*/
}
} // namespace gamemd

// 0x6E7D20
namespace gamemd {
void sub_6E7D20()
{
  dbl_B0E8B0 = 0.0174532925199433 * 90.0; /*0x6e7d2c*/
}
} // namespace gamemd

// 0x6E7D40
namespace gamemd {
long long sub_6E7D40()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B0E8B0 - dbl_B0E8D8); /*0x6e7d52*/
  result = Math::RoundToInt(v0 * dbl_B0E8D0 * 0.5); /*0x6e7d66*/
  dword_B0E928 = result; /*0x6e7d6b*/
  return result; /*0x6e7d70*/
}
} // namespace gamemd

// 0x6E7D80
namespace gamemd {
void sub_6E7D80()
{
  dbl_B0E8E0 = Math::ArcTan((double)dword_B0E928 * 0.00390625); /*0x6e7d97*/
}
} // namespace gamemd

// 0x6E7DB0
namespace gamemd {
void sub_6E7DB0()
{
  dbl_B0E8F8 = Math::ArcTan((double)(2 * dword_B0E928) / dbl_B0E8D0); /*0x6e7dd2*/
}
} // namespace gamemd

// 0x6E7DE0
namespace gamemd {
long long sub_6E7DE0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0E928) + 0.5); /*0x6e7dfb*/
  dword_B0E91C = result; /*0x6e7e00*/
  return result; /*0x6e7e06*/
}
} // namespace gamemd

// 0x6E7E10
namespace gamemd {
int sub_6E7E10()
{
  word_B0E8C8 = 0; /*0x6e7e12*/
  word_B0E8CA = 0; /*0x6e7e18*/
  return 0; /*0x6e7e1e*/
}
} // namespace gamemd

// 0x6E7E20
namespace gamemd {
int sub_6E7E20()
{
  dword_B0E8E8 = 0; /*0x6e7e22*/
  dword_B0E8EC = 0; /*0x6e7e27*/
  dword_B0E8F0 = 0; /*0x6e7e2c*/
  return 0; /*0x6e7e31*/
}
} // namespace gamemd

// 0x6E7E40
namespace gamemd {
int sub_6E7E40()
{
  dword_B0E918 = 0; /*0x6e7e45*/
  dword_B0E910 = 128; /*0x6e7e4f*/
  dword_B0E914 = 128; /*0x6e7e54*/
  return 128; /*0x6e7e59*/
}
} // namespace gamemd

// 0x6E7E60
namespace gamemd {
int sub_6E7E60()
{
  dword_B0E8B8 = 0; /*0x6e7e62*/
  dword_B0E8BC = 0; /*0x6e7e67*/
  dword_B0E8C0 = 0; /*0x6e7e6c*/
  dword_B0E8C4 = 0; /*0x6e7e71*/
  return 0; /*0x6e7e76*/
}
} // namespace gamemd

// 0x6E8000
namespace gamemd {
unsigned int * E4Recv_6E8000::sub_6E8000(int a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6E8000)
}
} // namespace gamemd

// 0x6E85B0
namespace gamemd {
char E4Recv_6E85B0::sub_6E85B0()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6E85B0)
}
} // namespace gamemd

// 0x6E8880
namespace gamemd {
void sub_6E8880()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6e888c*/
  dbl_B0E950 = Math::Sqrt(v0 + v0); /*0x6e889e*/
}
} // namespace gamemd

// 0x6E88B0
namespace gamemd {
void sub_6E88B0()
{
  dbl_B0E9A0 = dbl_B0E950 / 60.0; /*0x6e88bc*/
}
} // namespace gamemd

// 0x6E88D0
namespace gamemd {
void sub_6E88D0()
{
  dbl_B0E988 = 1.0 / dbl_B0E9A0; /*0x6e88dc*/
}
} // namespace gamemd

// 0x6E88F0
namespace gamemd {
void sub_6E88F0()
{
  dbl_B0E980 = 0.0174532925199433 * 45.0; /*0x6e88fc*/
}
} // namespace gamemd

// 0x6E8910
namespace gamemd {
void sub_6E8910()
{
  dbl_B0E958 = 0.0174532925199433 * 60.0; /*0x6e891c*/
}
} // namespace gamemd

// 0x6E8930
namespace gamemd {
void sub_6E8930()
{
  dbl_B0E930 = 0.0174532925199433 * 90.0; /*0x6e893c*/
}
} // namespace gamemd

// 0x6E8950
namespace gamemd {
long long sub_6E8950()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B0E930 - dbl_B0E958); /*0x6e8962*/
  result = Math::RoundToInt(v0 * dbl_B0E950 * 0.5); /*0x6e8976*/
  dword_B0E9A8 = result; /*0x6e897b*/
  return result; /*0x6e8980*/
}
} // namespace gamemd

// 0x6E8990
namespace gamemd {
void sub_6E8990()
{
  dbl_B0E960 = Math::ArcTan((double)dword_B0E9A8 * 0.00390625); /*0x6e89a7*/
}
} // namespace gamemd

// 0x6E89C0
namespace gamemd {
void sub_6E89C0()
{
  dbl_B0E978 = Math::ArcTan((double)(2 * dword_B0E9A8) / dbl_B0E950); /*0x6e89e2*/
}
} // namespace gamemd

// 0x6E89F0
namespace gamemd {
long long sub_6E89F0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0E9A8) + 0.5); /*0x6e8a0b*/
  dword_B0E99C = result; /*0x6e8a10*/
  return result; /*0x6e8a16*/
}
} // namespace gamemd

// 0x6E8A20
namespace gamemd {
int sub_6E8A20()
{
  dword_B0E948 = 0; /*0x6e8a22*/
  return 0; /*0x6e8a2e*/
}
} // namespace gamemd

// 0x6E8A30
namespace gamemd {
int sub_6E8A30()
{
  dword_B0E968 = 0; /*0x6e8a32*/
  dword_B0E96C = 0; /*0x6e8a37*/
  dword_B0E970 = 0; /*0x6e8a3c*/
  return 0; /*0x6e8a41*/
}
} // namespace gamemd

// 0x6E8A50
namespace gamemd {
int sub_6E8A50()
{
  dword_B0E998 = 0; /*0x6e8a55*/
  dword_B0E990 = 128; /*0x6e8a5f*/
  dword_B0E994 = 128; /*0x6e8a64*/
  return 128; /*0x6e8a69*/
}
} // namespace gamemd

// 0x6E8A70
namespace gamemd {
int sub_6E8A70()
{
  dword_B0E938 = 0; /*0x6e8a72*/
  dword_B0E93C = 0; /*0x6e8a77*/
  dword_B0E940 = 0; /*0x6e8a7c*/
  dword_B0E944 = 0; /*0x6e8a81*/
  return 0; /*0x6e8a86*/
}
} // namespace gamemd

// 0x6EA080
namespace gamemd {
char E4Recv_6EA080::sub_6EA080()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6EA080)
}
} // namespace gamemd

// 0x6EC370
namespace gamemd {
char E4Recv_6EC370::sub_6EC370()
{

  int v1; // ecx
  char result; // al

  v1 = *(unsigned int *)&((unsigned int *)this)[23]; /*0x6ec370*/
  result = 1; /*0x6ec373*/
  if ( v1 ) /*0x6ec377*/
  {
    while ( *(unsigned char *)(v1 + 981) ) /*0x6ec381*/
    {
      v1 = *(unsigned int *)(v1 + 1496); /*0x6ec383*/
      if ( !v1 ) /*0x6ec38b*/
        return result; /*0x6ec38b*/
    }
    return 0; /*0x6ec38e*/
  }
  return result; /*0x6ec38d*/

}
} // namespace gamemd

// 0x6EDDC0
namespace gamemd {
int E4Recv_6EDDC0::sub_6EDDC0(int a2, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6EDDC0)
}
} // namespace gamemd

// 0x6EDE80
namespace gamemd {
void E4Recv_6EDE80::sub_6EDE80(int a2, int a3)
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6EDE80)
}
} // namespace gamemd

// 0x6EDF10
namespace gamemd {
void E4Recv_6EDF10::sub_6EDF10(int a2, int a3)
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6EDF10)
}
} // namespace gamemd

// 0x6EDF90
namespace gamemd {
char E4Recv_6EDF90::sub_6EDF90(int a2, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6EDF90)
}
} // namespace gamemd

// 0x6EDFB0
namespace gamemd {
int E4Recv_6EDFB0::sub_6EDFB0(int a2, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6EDFB0)
}
} // namespace gamemd

// 0x6EE050
namespace gamemd {
int E4Recv_6EE050::sub_6EE050(int a2, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6EE050)
}
} // namespace gamemd

// 0x6EF450
namespace gamemd {
char E4Recv_6EF450::sub_6EF450(int a2, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6EF450)
}
} // namespace gamemd
