// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/classes/CrateClass_e4.hpp"
#include "e4/classes/Rect_e4.hpp"
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_4B0DF0_e4.hpp"
#include "e4/classes/E4Recv_4B4E10_e4.hpp"
#include "e4/classes/E4Recv_4B53E0_e4.hpp"
#include "e4/classes/E4Recv_4B56E0_e4.hpp"
#include "e4/classes/E4Recv_4B5780_e4.hpp"
#include "e4/classes/E4Recv_4B5830_e4.hpp"
#include "e4/classes/E4Recv_4B69E0_e4.hpp"
#include "e4/classes/E4Recv_4B6AB0_e4.hpp"
#include "e4/classes/E4Recv_4B6B80_e4.hpp"
#include "e4/classes/E4Recv_4B6BE0_e4.hpp"
#include "e4/classes/E4Recv_4B6BF0_e4.hpp"
#include "e4/classes/E4Recv_4BAFE0_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/JumpjetLocomotion_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/TimerClass_e4.hpp"
#include "e4/classes/E4Recv_4A0380_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Draw_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/E4Recv_492100_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/E4Recv_4AF2A0_e4.hpp"
#include "e4/classes/MPCooperative_e4.hpp"
#include "e4/classes/SlaveManagerClass_e4.hpp"
#include "e4/classes/Coord2D_e4.hpp"
#include "e4/classes/TextRenderer_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/FootClass_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/ListClass_e4.hpp"

// 0x4B0500
namespace gamemd {
char JumpjetLocomotionClass_Process(int a1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4B0500)
}
}
// 0x4B69E0
namespace gamemd {
int E4Recv_4B69E0::sub_4B69E0(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4B69E0)
}
}
// 0x4B6AB0
namespace gamemd {
int E4Recv_4B6AB0::sub_4B6AB0(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4B6AB0)
}
}
// 0x4B6BF0
namespace gamemd {
int E4Recv_4B6BF0::sub_4B6BF0()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4B6BF0)
}
}
// 0x4B9890
namespace gamemd {
CampaignScore * * DisplayBuildingInfoPanel(CampaignScore ** a1, unsigned int * a2, wchar_t * a3, char a4)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4B9890)
}
}
// 0x4BE9D0
namespace gamemd {
int Color_BlendPack(unsigned char * a1, int a2, int a3, int a4)
{
  int v4; // esi
  int v5; // edx
  int v6; // eax
  int v7; // ecx
  int v8; // edi
  bool v9; // cc

  v4 = a2 + *a1; /*0x4be9dc*/
  v5 = a3 + a1[1]; /*0x4be9ec*/
  v6 = a4 + a1[2]; /*0x4be9ee*/
  v7 = 0; /*0x4be9f0*/
  v8 = 0; /*0x4be9f2*/
  if ( v4 >= 255 ) /*0x4be9fa*/
  {
    v8 = 1; /*0x4be9fc*/
    v7 = v4 - 255; /*0x4bea01*/
  }
  if ( v5 >= 255 ) /*0x4bea0d*/
  {
    ++v8; /*0x4bea0f*/
    v7 = v7 + v5 - 255; /*0x4bea10*/
  }
  if ( v6 >= 255 ) /*0x4bea1c*/
  {
    ++v8; /*0x4bea1e*/
    v7 = v7 + v6 - 255; /*0x4bea1f*/
  }
  if ( !v8 || v8 >= 3 ) /*0x4bea2d*/
    goto LABEL_17; /*0x4bea2d*/
  if ( v8 == 1 ) /*0x4bea32*/
    v7 >>= 1; /*0x4bea34*/
  if ( v4 < 255 ) /*0x4bea3c*/
    v4 += v7; /*0x4bea3e*/
  if ( v5 < 255 ) /*0x4bea46*/
    v5 += v7; /*0x4bea48*/
  v9 = v6 <= 255; /*0x4bea4a*/
  if ( v6 < 255 ) /*0x4bea4f*/
  {
    v6 += v7; /*0x4bea51*/
  LABEL_17:
    v9 = v6 <= 255; /*0x4bea53*/
  }
  if ( !v9 ) /*0x4bea58*/
    v6 = 255; /*0x4bea5a*/
  if ( v5 > 255 ) /*0x4bea65*/
    v5 = 255; /*0x4bea67*/
  if ( v4 > 255 ) /*0x4bea72*/
    v4 = 255; /*0x4bea74*/
  return (v4 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x4bea7f*/
       | (v5 >> g_BitMask_Blue << g_BitMask_Green)
       | (v6 >> g_BitMask_Red << g_BitShift_Blue);
}
}
// 0x4B0DF0
namespace gamemd {
char E4Recv_4B0DF0::sub_4B0DF0(unsigned int *a2, int aP1, int a4, int aP4, int aP5, int aP6, int aP7, int a9, int a10, int a11)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4B0DF0)
}
} // namespace gamemd

// 0x4B4770
namespace gamemd {
void nullsub_118()
{
  ; /*0x4b4770*/
}
} // namespace gamemd

// 0x4B4DF0
namespace gamemd {
int sub_4B4DF0()
{
  dword_8A07D8 = 0; /*0x4b4df2*/
  dword_8A07DC = 0; /*0x4b4df7*/
  dword_8A07E0 = 0; /*0x4b4dfc*/
  dword_8A07E4 = 0; /*0x4b4e01*/
  return 0; /*0x4b4e06*/
}
} // namespace gamemd

// 0x4B4E10
namespace gamemd {
DropListClass * E4Recv_4B4E10::sub_4B4E10(DropListClass * aP1, wchar_t * String, int a4, DropListClass * aP4, ControlClass * aP5, ControlClass * aP6, ControlClass * aP7, int a9, ListClass * a10, int a11)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4B4E10)
}
} // namespace gamemd

// 0x4B53E0
namespace gamemd {
int E4Recv_4B53E0::sub_4B53E0(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4B53E0)
}
} // namespace gamemd

// 0x4B56E0
namespace gamemd {
int E4Recv_4B56E0::sub_4B56E0(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4B56E0)
}
} // namespace gamemd

// 0x4B5780
namespace gamemd {
int E4Recv_4B5780::sub_4B5780(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4B5780)
}
} // namespace gamemd

// 0x4B5830
namespace gamemd {
unsigned int * E4Recv_4B5830::sub_4B5830(unsigned int * a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4B5830)
}
} // namespace gamemd

// 0x4B58A0
namespace gamemd {
void sub_4B58A0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4b58ac*/
  dbl_8A0808 = Math::Sqrt(v0 + v0); /*0x4b58be*/
}
} // namespace gamemd

// 0x4B58D0
namespace gamemd {
void sub_4B58D0()
{
  dbl_8A0858 = dbl_8A0808 / 60.0; /*0x4b58dc*/
}
} // namespace gamemd

// 0x4B58F0
namespace gamemd {
void sub_4B58F0()
{
  dbl_8A0840 = 1.0 / dbl_8A0858; /*0x4b58fc*/
}
} // namespace gamemd

// 0x4B5910
namespace gamemd {
void sub_4B5910()
{
  dbl_8A0838 = 0.0174532925199433 * 45.0; /*0x4b591c*/
}
} // namespace gamemd

// 0x4B5930
namespace gamemd {
void sub_4B5930()
{
  dbl_8A0810 = 0.0174532925199433 * 60.0; /*0x4b593c*/
}
} // namespace gamemd

// 0x4B5950
namespace gamemd {
void sub_4B5950()
{
  dbl_8A07E8 = 0.0174532925199433 * 90.0; /*0x4b595c*/
}
} // namespace gamemd

// 0x4B5970
namespace gamemd {
long long sub_4B5970()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_8A07E8 - dbl_8A0810); /*0x4b5982*/
  result = Math::RoundToInt(v0 * dbl_8A0808 * 0.5); /*0x4b5996*/
  dword_8A0860 = result; /*0x4b599b*/
  return result; /*0x4b59a0*/
}
} // namespace gamemd

// 0x4B59B0
namespace gamemd {
void sub_4B59B0()
{
  dbl_8A0818 = Math::ArcTan((double)dword_8A0860 * 0.00390625); /*0x4b59c7*/
}
} // namespace gamemd

// 0x4B59E0
namespace gamemd {
void sub_4B59E0()
{
  dbl_8A0830 = Math::ArcTan((double)(2 * dword_8A0860) / dbl_8A0808); /*0x4b5a02*/
}
} // namespace gamemd

// 0x4B5A10
namespace gamemd {
long long sub_4B5A10()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_8A0860) + 0.5); /*0x4b5a2b*/
  dword_8A0854 = result; /*0x4b5a30*/
  return result; /*0x4b5a36*/
}
} // namespace gamemd

// 0x4B5A40
namespace gamemd {
int sub_4B5A40()
{
  word_8A0800 = 0; /*0x4b5a42*/
  word_8A0802 = 0; /*0x4b5a48*/
  return 0; /*0x4b5a4e*/
}
} // namespace gamemd

// 0x4B5A50
namespace gamemd {
int sub_4B5A50()
{
  dword_8A0820 = 0; /*0x4b5a52*/
  dword_8A0824 = 0; /*0x4b5a57*/
  dword_8A0828 = 0; /*0x4b5a5c*/
  return 0; /*0x4b5a61*/
}
} // namespace gamemd

// 0x4B5A70
namespace gamemd {
int sub_4B5A70()
{
  dword_8A0850 = 0; /*0x4b5a75*/
  dword_8A0848 = 128; /*0x4b5a7f*/
  dword_8A084C = 128; /*0x4b5a84*/
  return 128; /*0x4b5a89*/
}
} // namespace gamemd

// 0x4B5A90
namespace gamemd {
int sub_4B5A90()
{
  dword_8A07F0 = 0; /*0x4b5a92*/
  dword_8A07F4 = 0; /*0x4b5a97*/
  dword_8A07F8 = 0; /*0x4b5a9c*/
  dword_8A07FC = 0; /*0x4b5aa1*/
  return 0; /*0x4b5aa6*/
}
} // namespace gamemd

// 0x4B67A0
namespace gamemd {
void sub_4B67A0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4b67ac*/
  dbl_8A08A8 = Math::Sqrt(v0 + v0); /*0x4b67be*/
}
} // namespace gamemd

// 0x4B67D0
namespace gamemd {
void sub_4B67D0()
{
  dbl_8A0918 = dbl_8A08A8 / 60.0; /*0x4b67dc*/
}
} // namespace gamemd

// 0x4B67F0
namespace gamemd {
void sub_4B67F0()
{
  dbl_8A0900 = 1.0 / dbl_8A0918; /*0x4b67fc*/
}
} // namespace gamemd

// 0x4B6810
namespace gamemd {
void sub_4B6810()
{
  dbl_8A08F8 = 0.0174532925199433 * 45.0; /*0x4b681c*/
}
} // namespace gamemd

// 0x4B6830
namespace gamemd {
void sub_4B6830()
{
  dbl_8A08B0 = 0.0174532925199433 * 60.0; /*0x4b683c*/
}
} // namespace gamemd

// 0x4B6850
namespace gamemd {
void sub_4B6850()
{
  dbl_8A0868 = 0.0174532925199433 * 90.0; /*0x4b685c*/
}
} // namespace gamemd

// 0x4B6870
namespace gamemd {
long long sub_4B6870()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_8A0868 - dbl_8A08B0); /*0x4b6882*/
  result = Math::RoundToInt(v0 * dbl_8A08A8 * 0.5); /*0x4b6896*/
  dword_8A0920 = result; /*0x4b689b*/
  return result; /*0x4b68a0*/
}
} // namespace gamemd

// 0x4B68B0
namespace gamemd {
void sub_4B68B0()
{
  dbl_8A08B8 = Math::ArcTan((double)dword_8A0920 * 0.00390625); /*0x4b68c7*/
}
} // namespace gamemd

// 0x4B68E0
namespace gamemd {
void sub_4B68E0()
{
  dbl_8A08F0 = Math::ArcTan((double)(2 * dword_8A0920) / dbl_8A08A8); /*0x4b6902*/
}
} // namespace gamemd

// 0x4B6910
namespace gamemd {
long long sub_4B6910()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_8A0920) + 0.5); /*0x4b692b*/
  dword_8A0914 = result; /*0x4b6930*/
  return result; /*0x4b6936*/
}
} // namespace gamemd

// 0x4B6940
namespace gamemd {
int sub_4B6940()
{
  word_8A08A0 = 0; /*0x4b6942*/
  word_8A08A2 = 0; /*0x4b6948*/
  return 0; /*0x4b694e*/
}
} // namespace gamemd

// 0x4B6950
namespace gamemd {
int sub_4B6950()
{
  dword_8A08E0 = 0; /*0x4b6952*/
  dword_8A08E4 = 0; /*0x4b6957*/
  dword_8A08E8 = 0; /*0x4b695c*/
  return 0; /*0x4b6961*/
}
} // namespace gamemd

// 0x4B6970
namespace gamemd {
int sub_4B6970()
{
  dword_8A0910 = 0; /*0x4b6975*/
  dword_8A0908 = 128; /*0x4b697f*/
  dword_8A090C = 128; /*0x4b6984*/
  return 128; /*0x4b6989*/
}
} // namespace gamemd

// 0x4B6990
namespace gamemd {
int sub_4B6990()
{
  dword_8A0890 = 0; /*0x4b6992*/
  dword_8A0894 = 0; /*0x4b6997*/
  dword_8A0898 = 0; /*0x4b699c*/
  dword_8A089C = 0; /*0x4b69a1*/
  return 0; /*0x4b69a6*/
}
} // namespace gamemd

// 0x4B69D0
namespace gamemd {
void nullsub_126_4B69D0()
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4B69D0)
}
} // namespace gamemd

// 0x4B6B80
namespace gamemd {
char E4Recv_4B6B80::sub_4B6B80()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4B6B80)
}
} // namespace gamemd

// 0x4B6BE0
namespace gamemd {
int E4Recv_4B6BE0::sub_4B6BE0(int a2)
{

  return *(&((unsigned int *)this)[0] + a2); /*0x4b6be8*/

}
} // namespace gamemd

// 0x4BA390
namespace gamemd {
int sub_4BA390()
{
  dword_8A0930 = 0; /*0x4ba392*/
  dword_8A0934 = 0; /*0x4ba397*/
  dword_8A0938 = 0; /*0x4ba39c*/
  dword_8A093C = 0; /*0x4ba3a1*/
  return 0; /*0x4ba3a6*/
}
} // namespace gamemd

// 0x4BA3B0
namespace gamemd {
void sub_4BA3B0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x4ba3bc*/
  dbl_8A0968 = Math::Sqrt(v0 + v0); /*0x4ba3ce*/
}
} // namespace gamemd

// 0x4BA3E0
namespace gamemd {
void sub_4BA3E0()
{
  dbl_8A0DC0 = dbl_8A0968 / 60.0; /*0x4ba3ec*/
}
} // namespace gamemd

// 0x4BA400
namespace gamemd {
void sub_4BA400()
{
  dbl_8A0DA8 = 1.0 / dbl_8A0DC0; /*0x4ba40c*/
}
} // namespace gamemd

// 0x4BA420
namespace gamemd {
void sub_4BA420()
{
  dbl_8A0DA0 = 0.0174532925199433 * 45.0; /*0x4ba42c*/
}
} // namespace gamemd

// 0x4BA440
namespace gamemd {
void sub_4BA440()
{
  dbl_8A0970 = 0.0174532925199433 * 60.0; /*0x4ba44c*/
}
} // namespace gamemd

// 0x4BA460
namespace gamemd {
void sub_4BA460()
{
  dbl_8A0928 = 0.0174532925199433 * 90.0; /*0x4ba46c*/
}
} // namespace gamemd

// 0x4BA4C0
namespace gamemd {
void sub_4BA4C0()
{
  dbl_8A0978 = Math::ArcTan((double)dword_8A0DC8 * 0.00390625); /*0x4ba4d7*/
}
} // namespace gamemd

// 0x4BA4F0
namespace gamemd {
void sub_4BA4F0()
{
  dbl_8A0D98 = Math::ArcTan((double)(2 * dword_8A0DC8) / dbl_8A0968); /*0x4ba512*/
}
} // namespace gamemd

// 0x4BA520
namespace gamemd {
long long sub_4BA520()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_8A0DC8) + 0.5); /*0x4ba53b*/
  dword_8A0DBC = result; /*0x4ba540*/
  return result; /*0x4ba546*/
}
} // namespace gamemd

// 0x4BA550
namespace gamemd {
int sub_4BA550()
{
  word_8A0940 = 0; /*0x4ba552*/
  word_8A0942 = 0; /*0x4ba558*/
  return 0; /*0x4ba55e*/
}
} // namespace gamemd

// 0x4BA560
namespace gamemd {
int sub_4BA560()
{
  dword_8A0D88 = 0; /*0x4ba562*/
  dword_8A0D8C = 0; /*0x4ba567*/
  dword_8A0D90 = 0; /*0x4ba56c*/
  return 0; /*0x4ba571*/
}
} // namespace gamemd

// 0x4BA580
namespace gamemd {
int sub_4BA580()
{
  dword_8A0DB8 = 0; /*0x4ba585*/
  dword_8A0DB0 = 128; /*0x4ba58f*/
  dword_8A0DB4 = 128; /*0x4ba594*/
  return 128; /*0x4ba599*/
}
} // namespace gamemd

// 0x4BAFE0
namespace gamemd {
BOOL E4Recv_4BAFE0::sub_4BAFE0()
{

  int referenceCount; // eax

  referenceCount = ((unsigned int *)this)[0]; /*0x4bafe0*/
  return referenceCount && (*(int (**)(int))(*(unsigned int *)referenceCount + 96))(referenceCount) == -2005532222; /*0x4baff9*/

}
} // namespace gamemd

// 0x4BF650
namespace gamemd {
short BlendMinimapPixel(unsigned short a1, unsigned short a2, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4BF650)
}
} // namespace gamemd
