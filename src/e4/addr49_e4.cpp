// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_490400_e4.hpp"
#include "e4/classes/E4Recv_4912B0_e4.hpp"
#include "e4/classes/E4Recv_491300_e4.hpp"
#include "e4/classes/E4Recv_491330_e4.hpp"
#include "e4/classes/E4Recv_491360_e4.hpp"
#include "e4/classes/E4Recv_491670_e4.hpp"
#include "e4/classes/E4Recv_4916B0_e4.hpp"
#include "e4/classes/E4Recv_4916E0_e4.hpp"
#include "e4/classes/E4Recv_491710_e4.hpp"
#include "e4/classes/E4Recv_491740_e4.hpp"
#include "e4/classes/E4Recv_491790_e4.hpp"
#include "e4/classes/E4Recv_4917C0_e4.hpp"
#include "e4/classes/E4Recv_4917F0_e4.hpp"
#include "e4/classes/E4Recv_491820_e4.hpp"
#include "e4/classes/E4Recv_4918A0_e4.hpp"
#include "e4/classes/E4Recv_4918E0_e4.hpp"
#include "e4/classes/E4Recv_491970_e4.hpp"
#include "e4/classes/E4Recv_4919B0_e4.hpp"
#include "e4/classes/E4Recv_491A30_e4.hpp"
#include "e4/classes/E4Recv_491A70_e4.hpp"
#include "e4/classes/E4Recv_491B00_e4.hpp"
#include "e4/classes/E4Recv_491B40_e4.hpp"
#include "e4/classes/E4Recv_491C10_e4.hpp"
#include "e4/classes/E4Recv_491C50_e4.hpp"
#include "e4/classes/E4Recv_491D50_e4.hpp"
#include "e4/classes/E4Recv_491D90_e4.hpp"
#include "e4/classes/E4Recv_491E60_e4.hpp"
#include "e4/classes/E4Recv_491EA0_e4.hpp"
#include "e4/classes/E4Recv_491F90_e4.hpp"
#include "e4/classes/E4Recv_491FD0_e4.hpp"
#include "e4/classes/E4Recv_4920C0_e4.hpp"
#include "e4/classes/E4Recv_492100_e4.hpp"
#include "e4/classes/E4Recv_492210_e4.hpp"
#include "e4/classes/E4Recv_492250_e4.hpp"
#include "e4/classes/E4Recv_492330_e4.hpp"
#include "e4/classes/E4Recv_492370_e4.hpp"
#include "e4/classes/E4Recv_492480_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/E4Recv_4924C0_e4.hpp"
#include "e4/classes/E4Recv_492500_e4.hpp"
#include "e4/classes/E4Recv_492530_e4.hpp"
#include "e4/classes/E4Recv_492560_e4.hpp"
#include "e4/classes/E4Recv_492590_e4.hpp"
#include "e4/classes/E4Recv_4925E0_e4.hpp"
#include "e4/classes/E4Recv_492610_e4.hpp"
#include "e4/classes/E4Recv_492640_e4.hpp"
#include "e4/classes/E4Recv_492670_e4.hpp"
#include "e4/classes/E4Recv_4926B0_e4.hpp"
#include "e4/classes/E4Recv_4926E0_e4.hpp"
#include "e4/classes/E4Recv_492710_e4.hpp"
#include "e4/classes/E4Recv_4927A0_e4.hpp"
#include "e4/classes/E4Recv_4927D0_e4.hpp"
#include "e4/classes/E4Recv_492800_e4.hpp"
#include "e4/classes/E4Recv_492830_e4.hpp"
#include "e4/classes/E4Recv_492890_e4.hpp"
#include "e4/classes/E4Recv_4928C0_e4.hpp"
#include "e4/classes/E4Recv_4928F0_e4.hpp"
#include "e4/classes/E4Recv_492920_e4.hpp"
#include "e4/classes/E4Recv_492980_e4.hpp"
#include "e4/classes/E4Recv_4929B0_e4.hpp"
#include "e4/classes/E4Recv_4929E0_e4.hpp"
#include "e4/classes/E4Recv_492A10_e4.hpp"
#include "e4/classes/E4Recv_492A70_e4.hpp"
#include "e4/classes/E4Recv_492AA0_e4.hpp"
#include "e4/classes/E4Recv_492AD0_e4.hpp"
#include "e4/classes/E4Recv_492B00_e4.hpp"
#include "e4/classes/E4Recv_492B70_e4.hpp"
#include "e4/classes/E4Recv_492BA0_e4.hpp"
#include "e4/classes/E4Recv_492BD0_e4.hpp"
#include "e4/classes/E4Recv_492C00_e4.hpp"
#include "e4/classes/E4Recv_492C90_e4.hpp"
#include "e4/classes/E4Recv_492CC0_e4.hpp"
#include "e4/classes/CCFileClass_e4.hpp"
#include "e4/classes/CampaignClass_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/INISectionList_e4.hpp"
#include "e4/classes/SuperWeaponTypeClass_e4.hpp"
#include "e4/classes/E4Recv_492CF0_e4.hpp"
#include "e4/classes/E4Recv_492D20_e4.hpp"
#include "e4/classes/E4Recv_492D80_e4.hpp"
#include "e4/classes/E4Recv_492DB0_e4.hpp"
#include "e4/classes/E4Recv_492DE0_e4.hpp"
#include "e4/classes/E4Recv_492E10_e4.hpp"
#include "e4/classes/E4Recv_492EA0_e4.hpp"
#include "e4/classes/E4Recv_492ED0_e4.hpp"
#include "e4/classes/E4Recv_492F00_e4.hpp"
#include "e4/classes/E4Recv_492F30_e4.hpp"
#include "e4/classes/E4Recv_492FC0_e4.hpp"
#include "e4/classes/E4Recv_492FF0_e4.hpp"
#include "e4/classes/E4Recv_493020_e4.hpp"
#include "e4/classes/E4Recv_493050_e4.hpp"
#include "e4/classes/E4Recv_4930E0_e4.hpp"
#include "e4/classes/E4Recv_493110_e4.hpp"
#include "e4/classes/E4Recv_493140_e4.hpp"
#include "e4/classes/E4Recv_493170_e4.hpp"
#include "e4/classes/E4Recv_493210_e4.hpp"
#include "e4/classes/E4Recv_493240_e4.hpp"
#include "e4/classes/E4Recv_493270_e4.hpp"
#include "e4/classes/E4Recv_4932A0_e4.hpp"
#include "e4/classes/E4Recv_493340_e4.hpp"
#include "e4/classes/E4Recv_493370_e4.hpp"
#include "e4/classes/E4Recv_4933A0_e4.hpp"
#include "e4/classes/E4Recv_4933D0_e4.hpp"
#include "e4/classes/E4Recv_493470_e4.hpp"
#include "e4/classes/E4Recv_4934A0_e4.hpp"
#include "e4/classes/E4Recv_4934D0_e4.hpp"
#include "e4/classes/E4Recv_493500_e4.hpp"
#include "e4/classes/E4Recv_493570_e4.hpp"
#include "e4/classes/E4Recv_4935A0_e4.hpp"
#include "e4/classes/E4Recv_4935D0_e4.hpp"
#include "e4/classes/E4Recv_493600_e4.hpp"
#include "e4/classes/E4Recv_493680_e4.hpp"
#include "e4/classes/E4Recv_4936B0_e4.hpp"
#include "e4/classes/E4Recv_4936E0_e4.hpp"
#include "e4/classes/E4Recv_493710_e4.hpp"
#include "e4/classes/E4Recv_4937A0_e4.hpp"
#include "e4/classes/E4Recv_4937D0_e4.hpp"
#include "e4/classes/E4Recv_493800_e4.hpp"
#include "e4/classes/E4Recv_493830_e4.hpp"
#include "e4/classes/E4Recv_4938A0_e4.hpp"
#include "e4/classes/E4Recv_4938D0_e4.hpp"
#include "e4/classes/E4Recv_493900_e4.hpp"
#include "e4/classes/E4Recv_496310_e4.hpp"
#include "e4/classes/E4Recv_4963B0_e4.hpp"
#include "e4/classes/E4Recv_4963F0_e4.hpp"
#include "e4/classes/E4Recv_496490_e4.hpp"
#include "e4/classes/E4Recv_4964D0_e4.hpp"
#include "e4/classes/E4Recv_496570_e4.hpp"
#include "e4/classes/E4Recv_4965B0_e4.hpp"
#include "e4/classes/E4Recv_496690_e4.hpp"
#include "e4/classes/E4Recv_4966D0_e4.hpp"
#include "e4/classes/E4Recv_4967E0_e4.hpp"
#include "e4/classes/BufferIOFileClass_e4.hpp"
#include "e4/classes/CCINIClass_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/E4Recv_496820_e4.hpp"
#include "e4/classes/E4Recv_4968F0_e4.hpp"
#include "e4/classes/E4Recv_496930_e4.hpp"
#include "e4/classes/E4Recv_496A40_e4.hpp"
#include "e4/classes/E4Recv_496A80_e4.hpp"
#include "e4/classes/E4Recv_496B80_e4.hpp"
#include "e4/classes/E4Recv_496BC0_e4.hpp"
#include "e4/classes/E4Recv_496CD0_e4.hpp"
#include "e4/classes/E4Recv_496D10_e4.hpp"
#include "e4/classes/E4Recv_496E20_e4.hpp"
#include "e4/classes/E4Recv_496E60_e4.hpp"
#include "e4/classes/E4Recv_496F70_e4.hpp"
#include "e4/classes/E4Recv_496FB0_e4.hpp"
#include "e4/classes/E4Recv_4970C0_e4.hpp"
#include "e4/classes/E4Recv_497100_e4.hpp"
#include "e4/classes/E4Recv_4971F0_e4.hpp"
#include "e4/classes/E4Recv_497230_e4.hpp"
#include "e4/classes/E4Recv_497350_e4.hpp"
#include "e4/classes/E4Recv_497390_e4.hpp"
#include "e4/classes/E4Recv_497470_e4.hpp"
#include "e4/classes/E4Recv_499CA0_e4.hpp"
#include "e4/classes/E4Recv_499D40_e4.hpp"
#include "e4/classes/E4Recv_499D60_e4.hpp"
#include "e4/classes/E4Recv_499D80_e4.hpp"
#include "e4/classes/E4Recv_499DC0_e4.hpp"
#include "e4/classes/E4Recv_499DE0_e4.hpp"
#include "e4/classes/E4Recv_499E00_e4.hpp"
#include "e4/classes/E4Recv_499E20_e4.hpp"
#include "e4/classes/E4Recv_499E40_e4.hpp"
#include "e4/classes/E4Recv_499E60_e4.hpp"
#include "e4/classes/E4Recv_499E80_e4.hpp"
#include "e4/classes/E4Recv_499EA0_e4.hpp"
#include "e4/classes/E4Recv_499EC0_e4.hpp"
#include "e4/classes/E4Recv_499EE0_e4.hpp"
#include "e4/classes/E4Recv_499F00_e4.hpp"
#include "e4/classes/E4Recv_499F20_e4.hpp"
#include "e4/classes/E4Recv_499F40_e4.hpp"
#include "e4/classes/E4Recv_499F60_e4.hpp"
#include "e4/classes/E4Recv_499F80_e4.hpp"
#include "e4/classes/E4Recv_499FA0_e4.hpp"
#include "e4/classes/E4Recv_499FC0_e4.hpp"
#include "e4/classes/E4Recv_499FE0_e4.hpp"
#include "e4/classes/E4Recv_49A000_e4.hpp"
#include "e4/classes/E4Recv_49A020_e4.hpp"
#include "e4/classes/E4Recv_49A040_e4.hpp"
#include "e4/classes/E4Recv_49A060_e4.hpp"
#include "e4/classes/E4Recv_49A080_e4.hpp"
#include "e4/classes/E4Recv_49A0A0_e4.hpp"
#include "e4/classes/E4Recv_49A0C0_e4.hpp"
#include "e4/classes/E4Recv_49A0E0_e4.hpp"
#include "e4/classes/E4Recv_49A100_e4.hpp"
#include "e4/classes/E4Recv_49A120_e4.hpp"
#include "e4/classes/E4Recv_49A140_e4.hpp"
#include "e4/classes/E4Recv_49A160_e4.hpp"
#include "e4/classes/E4Recv_49A180_e4.hpp"
#include "e4/classes/E4Recv_49A7C0_e4.hpp"
#include "e4/classes/E4Recv_49A7E0_e4.hpp"
#include "e4/classes/E4Recv_49A800_e4.hpp"
#include "e4/classes/E4Recv_49A820_e4.hpp"
#include "e4/classes/E4Recv_49A840_e4.hpp"
#include "e4/classes/E4Recv_49A860_e4.hpp"
#include "e4/classes/E4Recv_49A880_e4.hpp"
#include "e4/classes/E4Recv_49A8A0_e4.hpp"
#include "e4/classes/E4Recv_49A8C0_e4.hpp"
#include "e4/classes/E4Recv_49A8E0_e4.hpp"
#include "e4/classes/E4Recv_49A900_e4.hpp"
#include "e4/classes/E4Recv_49A920_e4.hpp"
#include "e4/classes/E4Recv_49A940_e4.hpp"
#include "e4/classes/E4Recv_49A960_e4.hpp"
#include "e4/classes/E4Recv_49A980_e4.hpp"
#include "e4/classes/E4Recv_49C0D0_e4.hpp"
#include "e4/classes/E4Recv_49CCF0_e4.hpp"
#include "e4/classes/E4Recv_49D390_e4.hpp"
#include "e4/classes/E4Recv_49D680_e4.hpp"
#include "e4/classes/E4Recv_49DA60_e4.hpp"
#include "e4/classes/E4Recv_49E7C0_e4.hpp"
#include "e4/classes/COMClass_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Stream_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"
#include "D:\RA2YR_ReSource\src\e4\classes\addr49_carriers_e4.hpp"  // G42.42q minimal carriers
#include "e4/classes/DeleteAndZero_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/_tree_full_e4.hpp"
// ==== G42.57w9 data-label supply (IDA truth; e4_globals pending) ====
extern unsigned int g_DDraw_Gray127;  // data: 0x8a0de8 truth(IDA G42.57w9)


// 0x490400
namespace gamemd {
int E4Recv_490400::sub_490400()
{

  void *v2; // ecx
  int result; // eax
  int v4; // [esp+4h] [ebp-4h] BYREF

  *(unsigned int *)this = (unsigned int)(&vt_ConvertClass); /*0x490404*/
  ((COMClass *)(unsigned int *)this)->RegisterAll(); /*0x49040a*/
  __3_YAXPAX_Z(*(void **)&this->M368); /*0x490416*/
  v2 = *(void **)&this->M376; /*0x49041b*/
  *((unsigned int *)this + 92) = 0; /*0x490421*/
  __3_YAXPAX_Z(v2); /*0x49042c*/
  *((unsigned int *)this + 94) = 0; /*0x490434*/
  v4 = (int)(this); /*0x49044d*/
  result = (*(int (**)(int *, int *))(dword_89ECF8 + 16))( (int *)(&dword_89ECF8), (int *)(&v4)); /*0x490451*/
  if ( result != -1 && result < dword_89ED08 && result < --dword_89ED08 ) /*0x49046d*/
  {
    do /*0x490485*/
    {
      ++result; /*0x490475*/
      *((unsigned int *)dword_89ECFC + result - 1) = *((unsigned int *)dword_89ECFC + result); /*0x490479*/
    }
    while ( result < dword_89ED08 ); /*0x490485*/
  }
  return result; /*0x490457*/

}
}
// 0x491B40
namespace gamemd {
int E4Recv_491B40::sub_491B40(unsigned char * a2, unsigned char * a3, int a4, int a5, int a6, unsigned int a7, int a8, int a9, int a10, char * a11)
{

  int result; // eax
  unsigned char *v14; // esi
  unsigned int v15; // edx
  int v17; // eax
  int v18; // edi
  uint8_t v19; // al
  uint8_t v20; // al
  int v21; // ebp

  result = a5; /*0x491b41*/
  v14 = a2; /*0x491b58*/
  v15 = a7; /*0x491b5f*/
  if ( a5 <= 0 ) /*0x491b61*/
  {
    v18 = a4; /*0x491b9a*/
  }
  else
  {
    do /*0x491b76*/
    {
      if ( *a3++ ) /*0x491b63*/
        --result; /*0x491b73*/
      else
        result -= *a3++; /*0x491b6e*/
    }
    while ( result > 0 ); /*0x491b76*/
    v17 = -result; /*0x491b82*/
    v14 = &a2[v17]; /*0x491b84*/
    v18 = a4 - v17; /*0x491b86*/
    result = a7 + 2 * v17; /*0x491b88*/
    if ( (unsigned int)result >= (&g_ZBufferDescriptor)[1].Stream_field_08 ) /*0x491b91*/
      result -= (&g_ZBufferDescriptor)[1].Stream_field_0C; /*0x491b93*/
    v15 = result; /*0x491b96*/
  }
  while ( v18 > 0 ) /*0x491ba0*/
  {
    v19 = *a3++; /*0x491ba2*/
    if ( v19 ) /*0x491bab*/
    {
      v15 += 2; /*0x491bcf*/
      v21 = a6 - *a11++; /*0x491bd2*/
      if ( v21 < *(uint16_t *)(v15 - 2) ) /*0x491bdd*/
        *v14 = *(unsigned char *)(v19 + *(unsigned int *)&this->m_1[3]); /*0x491bf2*/
      ++v14; /*0x491bf4*/
      --v18; /*0x491bf5*/
    }
    else
    {
      v20 = *a3++; /*0x491bad*/
      v18 -= v20; /*0x491bbd*/
      v14 += v20; /*0x491bbf*/
      v15 += 2 * v20; /*0x491bc1*/
      a11 += v20; /*0x491bc4*/
    }
    result = (int)g_ZBufferDescriptor; /*0x491bf6*/
    if ( v15 >= (&g_ZBufferDescriptor)[1].Stream_field_08 ) /*0x491bfe*/
      v15 -= (&g_ZBufferDescriptor)[1].Stream_field_0C; /*0x491c00*/
  }
  return result; /*0x491c07*/

}
}
// 0x491C50
namespace gamemd {
int E4Recv_491C50::sub_491C50(unsigned char * a1, unsigned char * a2, int a4, int a5, int a6, unsigned int a7, int a8, int a9, int _38, char * a10)
{

  char *v12; // edx
  int result; // eax
  Stream *v14; // ecx
  unsigned char *v15; // esi
  unsigned int v16; // edx
  int v18; // eax
  int v19; // edi
  uint8_t v20; // al
  int v21; // ebp
  uint8_t v24; // [esp+20h] [ebp+Ch]
  uint8_t v25; // [esp+20h] [ebp+Ch]
  char *v26; // [esp+3Ch] [ebp+28h]

  v12 = *(char **)this->m_4; /*0x491c65*/
  result = a5; /*0x491c67*/
  v14 = (gamemd::Stream *)(g_ZBufferDescriptor); /*0x491c6b*/
  v15 = a1; /*0x491c77*/
  v26 = v12; /*0x491c7b*/
  v16 = a7; /*0x491c82*/
  if ( a5 <= 0 ) /*0x491c84*/
  {
    v19 = a4; /*0x491cb7*/
  }
  else
  {
    do /*0x491c99*/
    {
      if ( *a2++ ) /*0x491c86*/
        --result; /*0x491c96*/
      else
        result -= *a2++; /*0x491c91*/
    }
    while ( result > 0 ); /*0x491c99*/
    v18 = -result; /*0x491ca2*/
    v15 = &a1[v18]; /*0x491ca4*/
    v19 = a4 - v18; /*0x491ca6*/
    result = a7 + 2 * v18; /*0x491ca8*/
    if ( (unsigned int)result >= (&g_ZBufferDescriptor)[1].Stream_field_08 ) /*0x491cae*/
      result -= (&g_ZBufferDescriptor)[1].Stream_field_0C; /*0x491cb0*/
    v16 = result; /*0x491cb3*/
  }
  while ( v19 > 0 ) /*0x491cbd*/
  {
    v20 = *a2++; /*0x491cbf*/
    v24 = v20; /*0x491cc4*/
    if ( v20 ) /*0x491cc8*/
    {
      v16 += 2; /*0x491cf5*/
      v21 = a6 - *a10; /*0x491cfb*/
      result = (int)++a10; /*0x491d03*/
      if ( v21 < *(uint16_t *)(v16 - 2) ) /*0x491d0a*/
      {
        result = this->m_8; /*0x491d22*/
        *v15 = *(unsigned char *)((uint8_t)v26[v24] + result); /*0x491d28*/
      }
      v14 = (gamemd::Stream *)(g_ZBufferDescriptor); /*0x491d2a*/
      ++v15; /*0x491d30*/
      --v19; /*0x491d31*/
    }
    else
    {
      v25 = *a2++; /*0x491cd0*/
      result = v25; /*0x491cd9*/
      v19 -= v25; /*0x491cde*/
      v15 += v25; /*0x491ce0*/
      v16 += 2 * v25; /*0x491ce4*/
      a10 += v25; /*0x491ce7*/
    }
    if ( v16 >= v14[1].Stream_field_08 ) /*0x491d35*/
      v16 -= v14[1].Stream_field_0C; /*0x491d37*/
  }
  return result; /*0x491d3e*/

}
}
// 0x491D90
namespace gamemd {
int E4Recv_491D90::sub_491D90(unsigned char * a1, unsigned char * a2, RLEBlitTransRemapDestZRead_E * aP3, int a5, int a6, unsigned int a7, int a8, int a9, int _38, char * a10)
{

  int v11; // eax
  unsigned int v12; // edx
  uint8_t *v14; // esi
  Stream *v15; // ecx
  int v18; // eax
  int v19; // ebx

  v11 = a5; /*0x491d91*/
  v12 = a7; /*0x491d95*/
  v14 = (uint8_t *)(a1); /*0x491da0*/
  v15 = (gamemd::Stream *)(g_ZBufferDescriptor); /*0x491da8*/
  if ( a5 <= 0 ) /*0x491db5*/
  {
    v19 = (int)(aP3); /*0x491de7*/
  }
  else
  {
    do /*0x491dca*/
    {
      if ( *a2++ ) /*0x491db7*/
        --v11; /*0x491dc7*/
      else
        v11 -= *a2++; /*0x491dc2*/
    }
    while ( v11 > 0 ); /*0x491dca*/
    v18 = -v11; /*0x491dd0*/
    v14 = &a1[v18]; /*0x491dd2*/
    v19 = (int)(aP3 - v18); /*0x491dd4*/
    v11 = a7 + 2 * v18; /*0x491dd6*/
    if ( (unsigned int)v11 >= (&g_ZBufferDescriptor)[1].Stream_field_08 ) /*0x491dde*/
      v11 -= (&g_ZBufferDescriptor)[1].Stream_field_0C; /*0x491de0*/
    v12 = v11; /*0x491de3*/
  }
  while ( v19 > 0 ) /*0x491ded*/
  {
    if ( *a2++ ) /*0x491def*/
    {
      v12 += 2; /*0x491e19*/
      v11 = a6 - *a10++; /*0x491e1c*/
      if ( v11 >= *(uint16_t *)(v12 - 2) ) /*0x491e27*/
      {
        ++v14; /*0x491e3e*/
        --v19; /*0x491e3f*/
      }
      else
      {
        v11 = *v14; /*0x491e2f*/
        --v19; /*0x491e31*/
        ++v14; /*0x491e35*/
        LOBYTE(v11) = *(unsigned char *)(*(unsigned int *)&this->m_1[3] + v11); /*0x491e36*/
        *(v14 - 1) = v11; /*0x491e39*/
      }
      v15 = (gamemd::Stream *)(g_ZBufferDescriptor); /*0x491e40*/
    }
    else
    {
      LOBYTE(v11) = *a2++; /*0x491df6*/
      v19 -= (uint8_t)v11; /*0x491e06*/
      v14 += (uint8_t)v11; /*0x491e08*/
      a10 += (uint8_t)v11; /*0x491e0a*/
      v12 += 2 * (uint8_t)v11; /*0x491e0c*/
    }
    if ( v12 >= v15[1].Stream_field_08 ) /*0x491e49*/
      v12 -= v15[1].Stream_field_0C; /*0x491e4b*/
  }
  return v11; /*0x491e52*/

}
}
// 0x491EA0
namespace gamemd {
int E4Recv_491EA0::sub_491EA0(int arg0, unsigned char * a2, int a4, int a5, int a6, unsigned int a7, int a8, int a9, int _38, char * a10)
{

  int result; // eax
  int v14; // esi
  unsigned int v15; // edx
  int v17; // eax
  int v18; // edi
  uint8_t v19; // al
  uint8_t v20; // al
  int v21; // ebp

  result = a5; /*0x491ea1*/
  v14 = arg0; /*0x491eb8*/
  v15 = a7; /*0x491ebf*/
  if ( a5 <= 0 ) /*0x491ec1*/
  {
    v18 = a4; /*0x491efa*/
  }
  else
  {
    do /*0x491ed6*/
    {
      if ( *a2++ ) /*0x491ec3*/
        --result; /*0x491ed3*/
      else
        result -= *a2++; /*0x491ece*/
    }
    while ( result > 0 ); /*0x491ed6*/
    v17 = -result; /*0x491ee2*/
    v14 = v17 + arg0; /*0x491ee4*/
    v18 = a4 - v17; /*0x491ee6*/
    result = a7 + 2 * v17; /*0x491ee8*/
    if ( (unsigned int)result >= (&g_ZBufferDescriptor)[1].Stream_field_08 ) /*0x491ef1*/
      result -= (&g_ZBufferDescriptor)[1].Stream_field_0C; /*0x491ef3*/
    v15 = result; /*0x491ef6*/
  }
  while ( v18 > 0 ) /*0x491f00*/
  {
    v19 = *a2++; /*0x491f02*/
    if ( v19 ) /*0x491f0b*/
    {
      v15 += 2; /*0x491f2f*/
      v21 = a6 - *a10++; /*0x491f32*/
      ++v14; /*0x491f56*/
      --v18; /*0x491f57*/
      if ( v21 < *(uint16_t *)(v15 - 2) ) /*0x491f41*/
        *(unsigned char *)(v14 - 1) = *(unsigned char *)(*(uint8_t *)(v19 + *(unsigned int *)&this->m_1[3]) + *((unsigned int *)this + 2)); /*0x491f69*/
    }
    else
    {
      v20 = *a2++; /*0x491f0d*/
      v18 -= v20; /*0x491f1d*/
      v14 += v20; /*0x491f1f*/
      a10 += v20; /*0x491f21*/
      v15 += 2 * v20; /*0x491f23*/
    }
    result = (int)g_ZBufferDescriptor; /*0x491f70*/
    if ( v15 >= (&g_ZBufferDescriptor)[1].Stream_field_08 ) /*0x491f78*/
      v15 -= (&g_ZBufferDescriptor)[1].Stream_field_0C; /*0x491f7a*/
  }
  return result; /*0x491f81*/

}
}
// 0x491FD0
namespace gamemd {
unsigned short * E4Recv_491FD0::sub_491FD0(int arg0, unsigned char * a2, RLEBlitTransXlatZReadWrite_E * aP3, int a5, int arg10, unsigned short * a6, int a8, int a9, int _38, char * a10)
{

  int v11; // edx
  unsigned short *result; // eax
  int v14; // esi
  Stream *v15; // ecx
  int v18; // edx
  int v19; // ebx
  uint8_t v20; // dl
  uint8_t v21; // dl

  v11 = a5; /*0x491fd1*/
  result = a6; /*0x491fd5*/
  v14 = arg0; /*0x491fe0*/
  v15 = (gamemd::Stream *)(g_ZBufferDescriptor); /*0x491fe8*/
  if ( a5 <= 0 ) /*0x491ff5*/
  {
    v19 = (int)(aP3); /*0x492027*/
  }
  else
  {
    do /*0x49200c*/
    {
      if ( *a2++ ) /*0x491ff7*/
        --v11; /*0x492009*/
      else
        v11 -= *a2++; /*0x492004*/
    }
    while ( v11 > 0 ); /*0x49200c*/
    v18 = -v11; /*0x492012*/
    v14 = v18 + arg0; /*0x492014*/
    v19 = (int)(aP3 - v18); /*0x492016*/
    result = &a6[v18]; /*0x492018*/
    if ( (unsigned int)result >= (&g_ZBufferDescriptor)[1].Stream_field_08 ) /*0x492020*/
      result = (unsigned short *)((char *)result - (&g_ZBufferDescriptor)[1].Stream_field_0C); /*0x492022*/
  }
  while ( v19 > 0 ) /*0x49202d*/
  {
    v20 = *a2++; /*0x49202f*/
    if ( v20 ) /*0x492039*/
    {
      ++v14; /*0x492078*/
      if ( arg10 - *a10 < (uint16_t)*result ) /*0x492068*/
      {
        *(unsigned char *)(v14 - 1) = *(unsigned char *)(*(unsigned int *)&this->m_1[3] + v20); /*0x49207f*/
        *result = arg10 - *a10; /*0x49208c*/
      }
      v15 = (gamemd::Stream *)(g_ZBufferDescriptor); /*0x492092*/
      ++result; /*0x492098*/
      ++a10; /*0x49209b*/
      --v19; /*0x49209c*/
    }
    else
    {
      v21 = *a2++; /*0x49203b*/
      v19 -= v21; /*0x49204d*/
      v14 += v21; /*0x49204f*/
      a10 += v21; /*0x492051*/
      result += v21; /*0x492053*/
    }
    if ( (unsigned int)result >= v15[1].Stream_field_08 ) /*0x4920a0*/
      result = (unsigned short *)((char *)result - v15[1].Stream_field_0C); /*0x4920a2*/
  }
  return result; /*0x4920a9*/

}
}
// 0x492100
namespace gamemd {
unsigned short * E4Recv_492100::sub_492100(int arg0, unsigned char * a2, int a4, int a5, int arg10, unsigned short * a6, int a8, int a9, int _38, char * a10)
{

  uint16_t *result; // eax
  int v13; // ecx
  int v14; // esi
  int v17; // ecx
  int v18; // ebx
  uint8_t v19; // cl
  uint8_t v20; // cl
  int v21; // ecx
  char *v22; // edi
  int16_t v23; // cx
  uint8_t *v25; // [esp+1Ch] [ebp+8h]
  uint8_t v26; // [esp+20h] [ebp+Ch]

  result = (uint16_t *)(a6); /*0x492110*/
  v25 = *(uint8_t **)this->m_4; /*0x492114*/
  v13 = a5; /*0x492118*/
  v14 = arg0; /*0x49211d*/
  if ( a5 <= 0 ) /*0x492128*/
  {
    v18 = a4; /*0x49215e*/
  }
  else
  {
    do /*0x49213f*/
    {
      if ( *a2++ ) /*0x49212a*/
        --v13; /*0x49213c*/
      else
        v13 -= *a2++; /*0x492137*/
    }
    while ( v13 > 0 ); /*0x49213f*/
    v17 = -v13; /*0x492145*/
    v14 = v17 + arg0; /*0x492147*/
    v18 = a4 - v17; /*0x492149*/
    result = &a6[v17]; /*0x49214b*/
    if ( (unsigned int)result >= (&g_ZBufferDescriptor)[1].Stream_field_08 ) /*0x492157*/
      result = (uint16_t *)((char *)result - (&g_ZBufferDescriptor)[1].Stream_field_0C); /*0x492159*/
  }
  while ( v18 > 0 ) /*0x492164*/
  {
    v19 = *a2++; /*0x49216a*/
    v26 = v19; /*0x492170*/
    if ( v19 ) /*0x492178*/
    {
      v21 = arg10 - *a10; /*0x49219e*/
      v22 = a10 + 1; /*0x4921a5*/
      if ( v21 >= *result ) /*0x4921a8*/
      {
        a10 = v22 + 1; /*0x4921e4*/
        ++v14; /*0x4921e5*/
        ++result; /*0x4921e6*/
      }
      else
      {
        ++v14; /*0x4921ba*/
        ++result; /*0x4921bb*/
        *(unsigned char *)(v14 - 1) = *(unsigned char *)(v25[v26] + this->m_8); /*0x4921cf*/
        v23 = *v22; /*0x4921d6*/
        a10 = v22 + 1; /*0x4921dc*/
        *(result - 1) = arg10 - v23; /*0x4921dd*/
      }
      --v18; /*0x4921e1*/
    }
    else
    {
      v20 = *a2++; /*0x49217a*/
      v18 -= v20; /*0x49218c*/
      v14 += v20; /*0x49218e*/
      a10 += v20; /*0x492190*/
      result += v20; /*0x492192*/
    }
    if ( (unsigned int)result >= (&g_ZBufferDescriptor)[1].Stream_field_08 ) /*0x4921f3*/
      result = (uint16_t *)((char *)result - (&g_ZBufferDescriptor)[1].Stream_field_0C); /*0x4921f5*/
  }
  return result; /*0x492200*/

}
}
// 0x492250
namespace gamemd {
unsigned short * E4Recv_492250::sub_492250(unsigned char * a1, unsigned char * a2, RLEBlitTransRemapDestZReadWrite_E * aP3, int a5, int arg10, unsigned short * a6, int a8, int a9, int _38, char * a10)
{

  int v11; // edx
  uint16_t *result; // eax
  unsigned char *v14; // esi
  Stream *v15; // ecx
  int v18; // edx
  int v19; // ebx
  uint8_t v21; // dl
  int v22; // edx
  char *v23; // edi
  int16_t v24; // cx

  v11 = a5; /*0x492251*/
  result = (uint16_t *)(a6); /*0x492255*/
  v14 = a1; /*0x492260*/
  v15 = (gamemd::Stream *)(g_ZBufferDescriptor); /*0x492268*/
  if ( a5 <= 0 ) /*0x492275*/
  {
    v19 = (int)(aP3); /*0x4922a7*/
  }
  else
  {
    do /*0x49228c*/
    {
      if ( *a2++ ) /*0x492277*/
        --v11; /*0x492289*/
      else
        v11 -= *a2++; /*0x492284*/
    }
    while ( v11 > 0 ); /*0x49228c*/
    v18 = -v11; /*0x492292*/
    v14 = &a1[v18]; /*0x492294*/
    v19 = (int)(aP3 - v18); /*0x492296*/
    result = &a6[v18]; /*0x492298*/
    if ( (unsigned int)result >= (&g_ZBufferDescriptor)[1].Stream_field_08 ) /*0x4922a0*/
      result = (uint16_t *)((char *)result - (&g_ZBufferDescriptor)[1].Stream_field_0C); /*0x4922a2*/
  }
  while ( v19 > 0 ) /*0x4922ad*/
  {
    if ( *a2++ ) /*0x4922af*/
    {
      v22 = arg10 - *a10; /*0x4922db*/
      v23 = a10 + 1; /*0x4922e2*/
      if ( v22 >= *result ) /*0x4922e5*/
      {
        a10 = v23 + 1; /*0x49230d*/
        ++v14; /*0x49230e*/
        ++result; /*0x49230f*/
        --v19; /*0x492312*/
      }
      else
      {
        ++result; /*0x4922ef*/
        *v14 = *(unsigned char *)(*(unsigned int *)&this->m_1[3] + (uint8_t)*v14); /*0x4922f8*/
        v24 = *v23; /*0x4922fe*/
        a10 = v23 + 1; /*0x492304*/
        *(result - 1) = arg10 - v24; /*0x492305*/
        --v19; /*0x492309*/
        ++v14; /*0x49230a*/
      }
      v15 = (gamemd::Stream *)(g_ZBufferDescriptor); /*0x492313*/
    }
    else
    {
      v21 = *a2++; /*0x4922b7*/
      v19 -= v21; /*0x4922c9*/
      v14 += v21; /*0x4922cb*/
      a10 += v21; /*0x4922cd*/
      result += v21; /*0x4922cf*/
    }
    if ( (unsigned int)result >= v15[1].Stream_field_08 ) /*0x49231c*/
      result = (uint16_t *)((char *)result - v15[1].Stream_field_0C); /*0x49231e*/
  }
  return result; /*0x492325*/

}
}
// 0x492370
namespace gamemd {
unsigned short * E4Recv_492370::sub_492370(unsigned char * a1, unsigned char * a2, RLEBlitTransRemapXlatZReadWrite_E * aP3, int a5, int arg10, unsigned short * a6, int a8, int a9, int _38, char * a10)
{

  int v11; // edx
  uint16_t *result; // eax
  unsigned char *v14; // esi
  Stream *v15; // ecx
  int v18; // edx
  int v19; // ebx
  uint8_t v20; // dl
  uint8_t v21; // dl
  int16_t v22; // dx

  v11 = a5; /*0x492371*/
  result = (uint16_t *)(a6); /*0x492375*/
  v14 = a1; /*0x492380*/
  v15 = (gamemd::Stream *)(g_ZBufferDescriptor); /*0x492388*/
  if ( a5 <= 0 ) /*0x492395*/
  {
    v19 = (int)(aP3); /*0x4923c7*/
  }
  else
  {
    do /*0x4923ac*/
    {
      if ( *a2++ ) /*0x492397*/
        --v11; /*0x4923a9*/
      else
        v11 -= *a2++; /*0x4923a4*/
    }
    while ( v11 > 0 ); /*0x4923ac*/
    v18 = -v11; /*0x4923b2*/
    v14 = &a1[v18]; /*0x4923b4*/
    v19 = (int)(aP3 - v18); /*0x4923b6*/
    result = &a6[v18]; /*0x4923b8*/
    if ( (unsigned int)result >= (&g_ZBufferDescriptor)[1].Stream_field_08 ) /*0x4923c0*/
      result = (uint16_t *)((char *)result - (&g_ZBufferDescriptor)[1].Stream_field_0C); /*0x4923c2*/
  }
  while ( v19 > 0 ) /*0x4923cd*/
  {
    v20 = *a2++; /*0x4923d3*/
    if ( v20 ) /*0x4923e1*/
    {
      if ( arg10 - *a10 >= *result ) /*0x492410*/
      {
        v15 = (gamemd::Stream *)(g_ZBufferDescriptor); /*0x492455*/
        ++a10; /*0x49245b*/
        ++v14; /*0x49245c*/
        ++result; /*0x49245d*/
      }
      else
      {
        ++result; /*0x492420*/
        *v14++ = *(unsigned char *)(*(uint8_t *)(v20 + *(unsigned int *)&this->m_1[3]) + *((unsigned int *)this + 2)); /*0x49243a*/
        v22 = *a10++; /*0x492441*/
        *(result - 1) = arg10 - v22; /*0x492448*/
        v15 = (gamemd::Stream *)(g_ZBufferDescriptor); /*0x49244c*/
      }
      --v19; /*0x492452*/
    }
    else
    {
      v21 = *a2++; /*0x4923e3*/
      v19 -= v21; /*0x4923f5*/
      v14 += v21; /*0x4923f7*/
      a10 += v21; /*0x4923f9*/
      result += v21; /*0x4923fb*/
    }
    if ( (unsigned int)result >= v15[1].Stream_field_08 ) /*0x492464*/
      result = (uint16_t *)((char *)result - v15[1].Stream_field_0C); /*0x492466*/
  }
  return result; /*0x492471*/

}
}
// 0x496310
namespace gamemd {
int E4Recv_496310::sub_496310(int a5, int a2, unsigned __int8 *a4, int a3, int a1, int aP2, int a6, int a7, int a8, int a9, int a10)
{

  int v12; // esi
  int result; // eax
  int v14; // edx
  uint8_t *v18; // ebx
  uint8_t v19; // al
  int m_4; // eax
  int v21; // ecx
  uint8_t v22; // [esp+18h] [ebp+Ch]

  result = a5; /*0x496310*/
  v14 = a2; /*0x496314*/
  if ( a5 <= 0 ) /*0x496323*/
  {
    v18 = (uint8_t *)(a4); /*0x496347*/
  }
  else
  {
    do /*0x496338*/
    {
      if ( *(unsigned char *)a3++ ) /*0x496325*/
        --result; /*0x496335*/
      else
        result -= *(uint8_t *)a3++; /*0x496330*/
    }
    while ( result > 0 ); /*0x496338*/
    result = -result; /*0x49633e*/
    v18 = &a4[-result]; /*0x496340*/
    v14 = a2 + 2 * result; /*0x496342*/
  }
  while ( (int)v18 > 0 ) /*0x49634d*/
  {
    v19 = *(unsigned char *)a3++; /*0x496350*/
    v22 = v19; /*0x496355*/
    if ( v19 ) /*0x496359*/
    {
      m_4 = (int)(this->m_4); /*0x496376*/
      LOWORD(v12) = *((unsigned short *)this + 4); /*0x496379*/
      v14 += 2; /*0x496383*/
      v21 = *(uint16_t *)(m_4 + 2 * v22); /*0x496386*/
      LOWORD(m_4) = *(unsigned short *)(v14 - 2) >> 2; /*0x49638e*/
      result = 3 * (v12 & m_4); /*0x49639a*/
      --v18; /*0x49639f*/
      *(unsigned short *)(v14 - 2) = result + (v12 & ((uint16_t)v21 >> 2)); /*0x4963a0*/
    }
    else
    {
      LOBYTE(result) = *(unsigned char *)a3++; /*0x49635b*/
      result = (uint8_t)result; /*0x496366*/
      v18 -= (uint8_t)result; /*0x49636b*/
      v14 += 2 * (uint8_t)result; /*0x49636d*/
    }
  }
  return result; /*0x4963a9*/

}
}
// 0x4964D0
namespace gamemd {
int E4Recv_4964D0::sub_4964D0(int a5, int a2, unsigned __int8 *a4, int a3, int a1, int aP2, int a6, int a7, int a8, int a9, int a10)
{

  int v12; // esi
  int result; // eax
  int v14; // edx
  uint8_t *v18; // ebx
  uint8_t v19; // al
  int m_4; // eax
  int v21; // eax
  int16_t v22; // cx
  uint8_t v23; // [esp+18h] [ebp+Ch]

  result = a5; /*0x4964d0*/
  v14 = a2; /*0x4964d4*/
  if ( a5 <= 0 ) /*0x4964e3*/
  {
    v18 = (uint8_t *)(a4); /*0x496507*/
  }
  else
  {
    do /*0x4964f8*/
    {
      if ( *(unsigned char *)a3++ ) /*0x4964e5*/
        --result; /*0x4964f5*/
      else
        result -= *(uint8_t *)a3++; /*0x4964f0*/
    }
    while ( result > 0 ); /*0x4964f8*/
    result = -result; /*0x4964fe*/
    v18 = &a4[-result]; /*0x496500*/
    v14 = a2 + 2 * result; /*0x496502*/
  }
  while ( (int)v18 > 0 ) /*0x49650d*/
  {
    v19 = *(unsigned char *)a3++; /*0x496510*/
    v23 = v19; /*0x496515*/
    if ( v19 ) /*0x496519*/
    {
      m_4 = (int)(this->m_4); /*0x496536*/
      LOWORD(v12) = *((unsigned short *)this + 4); /*0x496539*/
      v14 += 2; /*0x496543*/
      LOWORD(m_4) = *(unsigned short *)(m_4 + 2 * v23) >> 2; /*0x49654a*/
      v21 = v12 & m_4; /*0x49654e*/
      v22 = 3 * v21; /*0x496550*/
      LOWORD(v21) = *(unsigned short *)(v14 - 2) >> 2; /*0x496557*/
      result = v12 & v21; /*0x49655b*/
      --v18; /*0x49655f*/
      *(unsigned short *)(v14 - 2) = result + v22; /*0x496560*/
    }
    else
    {
      LOBYTE(result) = *(unsigned char *)a3++; /*0x49651b*/
      result = (uint8_t)result; /*0x496526*/
      v18 -= (uint8_t)result; /*0x49652b*/
      v14 += 2 * (uint8_t)result; /*0x49652d*/
    }
  }
  return result; /*0x496569*/

}
}
// 0x4965B0
namespace gamemd {
int E4Recv_4965B0::sub_4965B0(unsigned short *a2, unsigned __int8 *a3, int a4, int a5, int a6, unsigned int a7, int a8, int a9, char *a10, char *a11, int a1, unsigned __int8 *aP2, int aP3)
{

  int result; // eax
  unsigned int v12; // edx
  unsigned short *v15; // edi
  int v17; // eax
  int v18; // ebx
  uint8_t v19; // al
  uint8_t v20; // al
  int v21; // esi

  result = a5; /*0x4965b1*/
  v12 = a7; /*0x4965b5*/
  v15 = (unsigned short *)(a1); /*0x4965c9*/
  if ( a5 <= 0 ) /*0x4965cf*/
  {
    v18 = a4; /*0x496608*/
  }
  else
  {
    do /*0x4965e6*/
    {
      if ( *aP2++ ) /*0x4965d1*/
        --result; /*0x4965e3*/
      else
        result -= *aP2++; /*0x4965de*/
    }
    while ( result > 0 ); /*0x4965e6*/
    v17 = -result; /*0x4965ec*/
    v18 = a4 - v17; /*0x4965ee*/
    v15 = &a1[v17]; /*0x4965f0*/
    result = a7 + 2 * v17; /*0x4965f3*/
    if ( (unsigned int)result >= (&g_ZBufferDescriptor)[1].Stream_field_08 ) /*0x4965ff*/
      result -= (&g_ZBufferDescriptor)[1].Stream_field_0C; /*0x496601*/
    v12 = result; /*0x496604*/
  }
  while ( v18 > 0 ) /*0x49660e*/
  {
    v19 = *aP2++; /*0x496610*/
    if ( v19 ) /*0x49661a*/
    {
      v12 += 2; /*0x496641*/
      v21 = a6 - *a10++; /*0x496644*/
      if ( v21 < *(uint16_t *)(v12 - 2) ) /*0x49664f*/
        *v15 = *(unsigned short *)(*(unsigned int *)&this->m_1[3] + 2 * v19); /*0x496665*/
      ++v15; /*0x496668*/
      --v18; /*0x49666b*/
    }
    else
    {
      v20 = *aP2++; /*0x49661c*/
      v18 -= v20; /*0x49662d*/
      v15 += v20; /*0x496632*/
      v12 += 2 * v20; /*0x496634*/
      a10 += v20; /*0x496636*/
    }
    result = (int)g_ZBufferDescriptor; /*0x49666c*/
    if ( v12 >= (&g_ZBufferDescriptor)[1].Stream_field_08 ) /*0x496674*/
      v12 -= (&g_ZBufferDescriptor)[1].Stream_field_0C; /*0x496676*/
  }
  return result; /*0x49667d*/

}
}
// 0x4966D0
namespace gamemd {
int E4Recv_4966D0::sub_4966D0(int arg0, unsigned char * a2, int a4, int a5, int a6, unsigned int a7, int a8, int a9, int _38, char * a10)
{

  int result; // eax
  int v14; // edi
  unsigned int v15; // edx
  int v17; // eax
  int v18; // ebx
  uint8_t v19; // al
  uint8_t v20; // al
  int v21; // esi
  uint8_t *v23; // [esp+1Ch] [ebp+8h]

  result = a5; /*0x4966e7*/
  v14 = arg0; /*0x4966f2*/
  v23 = *(uint8_t **)this->m_4; /*0x4966f6*/
  v15 = a7; /*0x4966fa*/
  if ( a5 <= 0 ) /*0x496700*/
  {
    v18 = a4; /*0x496733*/
  }
  else
  {
    do /*0x496717*/
    {
      if ( *a2++ ) /*0x496702*/
        --result; /*0x496714*/
      else
        result -= *a2++; /*0x49670f*/
    }
    while ( result > 0 ); /*0x496717*/
    v17 = -result; /*0x49671d*/
    v18 = a4 - v17; /*0x49671f*/
    v14 = arg0 + 2 * v17; /*0x496721*/
    result = a7 + 2 * v17; /*0x496724*/
    if ( (unsigned int)result >= (&g_ZBufferDescriptor)[1].Stream_field_08 ) /*0x49672a*/
      result -= (&g_ZBufferDescriptor)[1].Stream_field_0C; /*0x49672c*/
    v15 = result; /*0x49672f*/
  }
  while ( v18 > 0 ) /*0x496739*/
  {
    v19 = *a2++; /*0x49673f*/
    if ( v19 ) /*0x496749*/
    {
      v15 += 2; /*0x496770*/
      v21 = a6 - *a10++; /*0x496773*/
      v14 += 2; /*0x496794*/
      --v18; /*0x496797*/
      if ( v21 < *(uint16_t *)(v15 - 2) ) /*0x496782*/
        *(unsigned short *)(v14 - 2) = *(unsigned short *)(this->m_8 + 2 * v23[v19]); /*0x4967aa*/
    }
    else
    {
      v20 = *a2++; /*0x49674b*/
      v18 -= v20; /*0x49675c*/
      a10 += v20; /*0x49675e*/
      v14 += 2 * v20; /*0x496763*/
      v15 += 2 * v20; /*0x496765*/
    }
    result = (int)g_ZBufferDescriptor; /*0x4967b4*/
    if ( v15 >= (&g_ZBufferDescriptor)[1].Stream_field_08 ) /*0x4967bc*/
      v15 -= (&g_ZBufferDescriptor)[1].Stream_field_0C; /*0x4967be*/
  }
  return result; /*0x4967c9*/

}
}
// 0x496930
namespace gamemd {
int E4Recv_496930::sub_496930(int arg0, unsigned char * a2, RLEBlitTransLucent75ZRead_G * aP3, int a5, int a6, unsigned int a7, int a8, int a9, int _38, char * a10)
{

  int result; // eax
  int v12; // edx
  unsigned int v14; // esi
  int v17; // eax
  int v18; // ebx
  uint8_t v19; // al
  uint8_t v20; // al
  int v21; // edi

  result = a5; /*0x496931*/
  v12 = arg0; /*0x496935*/
  v14 = a7; /*0x496940*/
  if ( a5 <= 0 ) /*0x496955*/
  {
    v18 = (int)(aP3); /*0x496988*/
  }
  else
  {
    do /*0x49696c*/
    {
      if ( *a2++ ) /*0x496957*/
        --result; /*0x496969*/
      else
        result -= *a2++; /*0x496964*/
    }
    while ( result > 0 ); /*0x49696c*/
    v17 = -result; /*0x496972*/
    v18 = (int)(aP3 - v17); /*0x496974*/
    v12 = arg0 + 2 * v17; /*0x496976*/
    result = a7 + 2 * v17; /*0x496979*/
    if ( (unsigned int)result >= (&g_ZBufferDescriptor)[1].Stream_field_08 ) /*0x49697f*/
      result -= (&g_ZBufferDescriptor)[1].Stream_field_0C; /*0x496981*/
    v14 = result; /*0x496984*/
  }
  while ( v18 > 0 ) /*0x49698e*/
  {
    v19 = *a2++; /*0x496994*/
    if ( v19 ) /*0x49699e*/
    {
      v14 += 2; /*0x4969c5*/
      v21 = a6 - *a10++; /*0x4969c8*/
      v12 += 2; /*0x4969e7*/
      --v18; /*0x496a0a*/
      if ( v21 < *(uint16_t *)(v14 - 2) ) /*0x4969d7*/
        *(unsigned short *)(v12 - 2) = 3 * (*(unsigned int *)this->m_8 & (*(unsigned short *)(v12 - 2) >> 2)) /*0x496a0b*/
                            + (*(unsigned int *)this->m_8 & (*(unsigned short *)(this->m_4 + 2 * v19) >> 2));
    }
    else
    {
      v20 = *a2++; /*0x4969a0*/
      v18 -= v20; /*0x4969b1*/
      a10 += v20; /*0x4969b3*/
      v12 += 2 * v20; /*0x4969b8*/
      v14 += 2 * v20; /*0x4969ba*/
    }
    result = (int)g_ZBufferDescriptor; /*0x496a19*/
    if ( v14 >= (&g_ZBufferDescriptor)[1].Stream_field_08 ) /*0x496a21*/
      v14 -= (&g_ZBufferDescriptor)[1].Stream_field_0C; /*0x496a23*/
  }
  return result; /*0x496a2e*/

}
}
// 0x496A80
namespace gamemd {
int E4Recv_496A80::sub_496A80(unsigned short * a1, unsigned char * a2, RLEBlitTransLucent50ZRead_G * aP3, int a5, int a6, unsigned int a7, int a8, int a9, int _38, char * a10)
{

  int result; // eax
  unsigned int v12; // edx
  unsigned short *v14; // esi
  int v17; // eax
  int v18; // ebx
  uint8_t v19; // al
  uint8_t v20; // al
  int v21; // edi

  result = a5; /*0x496a81*/
  v12 = a7; /*0x496a85*/
  v14 = a1; /*0x496a90*/
  if ( a5 <= 0 ) /*0x496aa5*/
  {
    v18 = (int)(aP3); /*0x496ad8*/
  }
  else
  {
    do /*0x496abc*/
    {
      if ( *a2++ ) /*0x496aa7*/
        --result; /*0x496ab9*/
      else
        result -= *a2++; /*0x496ab4*/
    }
    while ( result > 0 ); /*0x496abc*/
    v17 = -result; /*0x496ac2*/
    v18 = (int)(aP3 - v17); /*0x496ac4*/
    v14 = &a1[v17]; /*0x496ac6*/
    result = a7 + 2 * v17; /*0x496ac9*/
    if ( (unsigned int)result >= (&g_ZBufferDescriptor)[1].Stream_field_08 ) /*0x496acf*/
      result -= (&g_ZBufferDescriptor)[1].Stream_field_0C; /*0x496ad1*/
    v12 = result; /*0x496ad4*/
  }
  while ( v18 > 0 ) /*0x496ade*/
  {
    v19 = *a2++; /*0x496ae4*/
    if ( v19 ) /*0x496aee*/
    {
      v12 += 2; /*0x496b15*/
      v21 = a6 - *a10++; /*0x496b18*/
      --v18; /*0x496b51*/
      if ( v21 < *(uint16_t *)(v12 - 2) ) /*0x496b27*/
        *v14 = (*(unsigned int *)this->m_8 & (*v14 >> 1)) + (*(unsigned int *)this->m_8 & (*(unsigned short *)(this->m_4 + 2 * v19) >> 1)); /*0x496b52*/
      ++v14; /*0x496b59*/
    }
    else
    {
      v20 = *a2++; /*0x496af0*/
      v18 -= v20; /*0x496b01*/
      a10 += v20; /*0x496b03*/
      v14 += v20; /*0x496b08*/
      v12 += 2 * v20; /*0x496b0a*/
    }
    result = (int)g_ZBufferDescriptor; /*0x496b62*/
    if ( v12 >= (&g_ZBufferDescriptor)[1].Stream_field_08 ) /*0x496b6a*/
      v12 -= (&g_ZBufferDescriptor)[1].Stream_field_0C; /*0x496b6c*/
  }
  return result; /*0x496b77*/

}
}
// 0x496BC0
namespace gamemd {
int E4Recv_496BC0::sub_496BC0(int arg0, unsigned char * a2, RLEBlitTransLucent25ZRead_G * aP3, int a5, int a6, unsigned int a7, int a8, int a9, int _38, char * a10)
{

  int result; // eax
  int v12; // edx
  unsigned int v14; // esi
  int v17; // eax
  int v18; // ebx
  uint8_t v19; // al
  uint8_t v20; // al
  int v21; // edi

  result = a5; /*0x496bc1*/
  v12 = arg0; /*0x496bc5*/
  v14 = a7; /*0x496bd0*/
  if ( a5 <= 0 ) /*0x496be5*/
  {
    v18 = (int)(aP3); /*0x496c18*/
  }
  else
  {
    do /*0x496bfc*/
    {
      if ( *a2++ ) /*0x496be7*/
        --result; /*0x496bf9*/
      else
        result -= *a2++; /*0x496bf4*/
    }
    while ( result > 0 ); /*0x496bfc*/
    v17 = -result; /*0x496c02*/
    v18 = (int)(aP3 - v17); /*0x496c04*/
    v12 = arg0 + 2 * v17; /*0x496c06*/
    result = a7 + 2 * v17; /*0x496c09*/
    if ( (unsigned int)result >= (&g_ZBufferDescriptor)[1].Stream_field_08 ) /*0x496c0f*/
      result -= (&g_ZBufferDescriptor)[1].Stream_field_0C; /*0x496c11*/
    v14 = result; /*0x496c14*/
  }
  while ( v18 > 0 ) /*0x496c1e*/
  {
    v19 = *a2++; /*0x496c24*/
    if ( v19 ) /*0x496c2e*/
    {
      v14 += 2; /*0x496c55*/
      v21 = a6 - *a10++; /*0x496c58*/
      v12 += 2; /*0x496c77*/
      --v18; /*0x496c9a*/
      if ( v21 < *(uint16_t *)(v14 - 2) ) /*0x496c67*/
        *(unsigned short *)(v12 - 2) = (this->u16_8 & (*(unsigned short *)(v12 - 2) >> 2)) /*0x496c9b*/
                            + 3 * (this->u16_8 & (*(unsigned short *)(this->M4 + 2 * v19) >> 2));
    }
    else
    {
      v20 = *a2++; /*0x496c30*/
      v18 -= v20; /*0x496c41*/
      a10 += v20; /*0x496c43*/
      v12 += 2 * v20; /*0x496c48*/
      v14 += 2 * v20; /*0x496c4a*/
    }
    result = (int)g_ZBufferDescriptor; /*0x496ca9*/
    if ( v14 >= (&g_ZBufferDescriptor)[1].Stream_field_08 ) /*0x496cb1*/
      v14 -= (&g_ZBufferDescriptor)[1].Stream_field_0C; /*0x496cb3*/
  }
  return result; /*0x496cbe*/

}
}
// 0x496D10
namespace gamemd {
int E4Recv_496D10::sub_496D10(int arg0, unsigned char * a2, RLEBlitTransLucent75ZReadWarp_G * aP3, int a5, int a6, unsigned int a7, int a8, int a9, int arg20, char * a10)
{

  int result; // eax
  int v12; // edx
  unsigned int v14; // esi
  int v17; // eax
  int v18; // ebx
  uint8_t v19; // al
  uint8_t v20; // al
  int v21; // edi

  result = a5; /*0x496d11*/
  v12 = arg0; /*0x496d15*/
  v14 = a7; /*0x496d20*/
  if ( a5 <= 0 ) /*0x496d35*/
  {
    v18 = (int)(aP3); /*0x496d68*/
  }
  else
  {
    do /*0x496d4c*/
    {
      if ( *a2++ ) /*0x496d37*/
        --result; /*0x496d49*/
      else
        result -= *a2++; /*0x496d44*/
    }
    while ( result > 0 ); /*0x496d4c*/
    v17 = -result; /*0x496d52*/
    v18 = (int)(aP3 - v17); /*0x496d54*/
    v12 = arg0 + 2 * v17; /*0x496d56*/
    result = a7 + 2 * v17; /*0x496d59*/
    if ( (unsigned int)result >= (&g_ZBufferDescriptor)[1].Stream_field_08 ) /*0x496d5f*/
      result -= (&g_ZBufferDescriptor)[1].Stream_field_0C; /*0x496d61*/
    v14 = result; /*0x496d64*/
  }
  while ( v18 > 0 ) /*0x496d6e*/
  {
    v19 = *a2++; /*0x496d74*/
    if ( v19 ) /*0x496d7e*/
    {
      v14 += 2; /*0x496da5*/
      v21 = a6 - *a10++; /*0x496da8*/
      v12 += 2; /*0x496dc7*/
      --v18; /*0x496def*/
      if ( v21 < *(uint16_t *)(v14 - 2) ) /*0x496db7*/
        *(unsigned short *)(v12 - 2) = 3 * (this->u16_8 & (*(unsigned short *)(v12 + 2 * arg20 - 2) >> 2)) /*0x496df0*/
                            + (this->u16_8 & (*(unsigned short *)(this->M4 + 2 * v19) >> 2));
    }
    else
    {
      v20 = *a2++; /*0x496d80*/
      v18 -= v20; /*0x496d91*/
      a10 += v20; /*0x496d93*/
      v12 += 2 * v20; /*0x496d98*/
      v14 += 2 * v20; /*0x496d9a*/
    }
    result = (int)g_ZBufferDescriptor; /*0x496dfe*/
    if ( v14 >= (&g_ZBufferDescriptor)[1].Stream_field_08 ) /*0x496e06*/
      v14 -= (&g_ZBufferDescriptor)[1].Stream_field_0C; /*0x496e08*/
  }
  return result; /*0x496e13*/

}
}
// 0x496E60
namespace gamemd {
int E4Recv_496E60::sub_496E60(unsigned short * a1, unsigned char * a2, RLEBlitTransLucent50ZReadWarp_G * aP3, int a5, int a6, unsigned int a7, int a8, int a9, int arg20, char * a10)
{

  int result; // eax
  unsigned short *v12; // edx
  unsigned int v14; // esi
  int v17; // eax
  int v18; // ebx
  uint8_t v19; // al
  uint8_t v20; // al
  int v21; // edi

  result = a5; /*0x496e61*/
  v12 = a1; /*0x496e65*/
  v14 = a7; /*0x496e70*/
  if ( a5 <= 0 ) /*0x496e85*/
  {
    v18 = (int)(aP3); /*0x496eb8*/
  }
  else
  {
    do /*0x496e9c*/
    {
      if ( *a2++ ) /*0x496e87*/
        --result; /*0x496e99*/
      else
        result -= *a2++; /*0x496e94*/
    }
    while ( result > 0 ); /*0x496e9c*/
    v17 = -result; /*0x496ea2*/
    v18 = (int)(aP3 - v17); /*0x496ea4*/
    v12 = &a1[v17]; /*0x496ea6*/
    result = a7 + 2 * v17; /*0x496ea9*/
    if ( (unsigned int)result >= (&g_ZBufferDescriptor)[1].Stream_field_08 ) /*0x496eaf*/
      result -= (&g_ZBufferDescriptor)[1].Stream_field_0C; /*0x496eb1*/
    v14 = result; /*0x496eb4*/
  }
  while ( v18 > 0 ) /*0x496ebe*/
  {
    v19 = *a2++; /*0x496ec4*/
    if ( v19 ) /*0x496ece*/
    {
      v14 += 2; /*0x496ef5*/
      v21 = a6 - *a10++; /*0x496ef8*/
      --v18; /*0x496f36*/
      if ( v21 < *(uint16_t *)(v14 - 2) ) /*0x496f07*/
        *v12 = (this->u16_8 & (v12[arg20] >> 1)) + (this->u16_8 & (*(unsigned short *)(this->M4 + 2 * v19) >> 1)); /*0x496f37*/
      ++v12; /*0x496f3e*/
    }
    else
    {
      v20 = *a2++; /*0x496ed0*/
      v18 -= v20; /*0x496ee1*/
      a10 += v20; /*0x496ee3*/
      v12 += v20; /*0x496ee8*/
      v14 += 2 * v20; /*0x496eea*/
    }
    result = (int)g_ZBufferDescriptor; /*0x496f47*/
    if ( v14 >= (&g_ZBufferDescriptor)[1].Stream_field_08 ) /*0x496f4f*/
      v14 -= (&g_ZBufferDescriptor)[1].Stream_field_0C; /*0x496f51*/
  }
  return result; /*0x496f5c*/

}
}
// 0x496FB0
namespace gamemd {
int E4Recv_496FB0::sub_496FB0(int arg0, unsigned char * a2, RLEBlitTransLucent25ZReadWarp_G * aP3, int a5, int a6, unsigned int a7, int a8, int a9, int arg20, char * a10)
{

  int result; // eax
  int v12; // edx
  unsigned int v14; // esi
  int v17; // eax
  int v18; // ebx
  uint8_t v19; // al
  uint8_t v20; // al
  int v21; // edi

  result = a5; /*0x496fb1*/
  v12 = arg0; /*0x496fb5*/
  v14 = a7; /*0x496fc0*/
  if ( a5 <= 0 ) /*0x496fd5*/
  {
    v18 = (int)(aP3); /*0x497008*/
  }
  else
  {
    do /*0x496fec*/
    {
      if ( *a2++ ) /*0x496fd7*/
        --result; /*0x496fe9*/
      else
        result -= *a2++; /*0x496fe4*/
    }
    while ( result > 0 ); /*0x496fec*/
    v17 = -result; /*0x496ff2*/
    v18 = (int)(aP3 - v17); /*0x496ff4*/
    v12 = arg0 + 2 * v17; /*0x496ff6*/
    result = a7 + 2 * v17; /*0x496ff9*/
    if ( (unsigned int)result >= (&g_ZBufferDescriptor)[1].Stream_field_08 ) /*0x496fff*/
      result -= (&g_ZBufferDescriptor)[1].Stream_field_0C; /*0x497001*/
    v14 = result; /*0x497004*/
  }
  while ( v18 > 0 ) /*0x49700e*/
  {
    v19 = *a2++; /*0x497014*/
    if ( v19 ) /*0x49701e*/
    {
      v14 += 2; /*0x497045*/
      v21 = a6 - *a10++; /*0x497048*/
      v12 += 2; /*0x497067*/
      --v18; /*0x49708f*/
      if ( v21 < *(uint16_t *)(v14 - 2) ) /*0x497057*/
        *(unsigned short *)(v12 - 2) = (this->u16_8 & (*(unsigned short *)(v12 + 2 * arg20 - 2) >> 2)) /*0x497090*/
                            + 3 * (this->u16_8 & (*(unsigned short *)(this->M4 + 2 * v19) >> 2));
    }
    else
    {
      v20 = *a2++; /*0x497020*/
      v18 -= v20; /*0x497031*/
      a10 += v20; /*0x497033*/
      v12 += 2 * v20; /*0x497038*/
      v14 += 2 * v20; /*0x49703a*/
    }
    result = (int)g_ZBufferDescriptor; /*0x49709e*/
    if ( v14 >= (&g_ZBufferDescriptor)[1].Stream_field_08 ) /*0x4970a6*/
      v14 -= (&g_ZBufferDescriptor)[1].Stream_field_0C; /*0x4970a8*/
  }
  return result; /*0x4970b3*/

}
}
// 0x497100
namespace gamemd {
unsigned short * E4Recv_497100::sub_497100(int arg0, unsigned char * a2, RLEBlitTransXlatZReadWrite_G * aP3, int a5, int arg10, unsigned short * a6, int a8, int a9, int _38, char * a10)
{

  int v11; // edx
  unsigned short *result; // eax
  int v13; // esi
  int v17; // edx
  int v18; // ebp
  uint8_t v19; // dl
  uint8_t v20; // dl

  v11 = a5; /*0x497101*/
  result = a6; /*0x497105*/
  v13 = arg0; /*0x49710c*/
  if ( a5 <= 0 ) /*0x49711f*/
  {
    v18 = (int)(aP3); /*0x497154*/
  }
  else
  {
    do /*0x497134*/
    {
      if ( *a2++ ) /*0x497121*/
        --v11; /*0x497131*/
      else
        v11 -= *a2++; /*0x49712c*/
    }
    while ( v11 > 0 ); /*0x497134*/
    v17 = -v11; /*0x49713a*/
    v18 = (int)(aP3 - v17); /*0x49713c*/
    v13 = arg0 + 2 * v17; /*0x49713e*/
    result = &a6[v17]; /*0x497141*/
    if ( (unsigned int)result >= (&g_ZBufferDescriptor)[1].Stream_field_08 ) /*0x49714d*/
      result = (unsigned short *)((char *)result - (&g_ZBufferDescriptor)[1].Stream_field_0C); /*0x49714f*/
  }
  while ( v18 > 0 ) /*0x49715a*/
  {
    v19 = *a2++; /*0x497160*/
    if ( v19 ) /*0x497169*/
    {
      v13 += 2; /*0x4971a9*/
      if ( arg10 - *a10 < (uint16_t)*result ) /*0x497199*/
      {
        *(unsigned short *)(v13 - 2) = *(unsigned short *)(*(unsigned int *)&this->m_1[3] + 2 * v19); /*0x4971b7*/
        *result = arg10 - *a10; /*0x4971c1*/
      }
      ++result; /*0x4971c9*/
      ++a10; /*0x4971cc*/
      --v18; /*0x4971cd*/
    }
    else
    {
      v20 = *a2++; /*0x49716b*/
      v18 -= v20; /*0x49717c*/
      a10 += v20; /*0x49717e*/
      v13 += 2 * v20; /*0x497183*/
      result += v20; /*0x497185*/
    }
    if ( (unsigned int)result >= (&g_ZBufferDescriptor)[1].Stream_field_08 ) /*0x4971d7*/
      result = (unsigned short *)((char *)result - (&g_ZBufferDescriptor)[1].Stream_field_0C); /*0x4971d9*/
  }
  return result; /*0x4971e0*/

}
}
// 0x497230
namespace gamemd {
unsigned short * E4Recv_497230::sub_497230(int arg0, unsigned char * a2, int a4, int a5, int arg10, unsigned short * a6, int a8, int a9, int _38, char * a10)
{

  uint16_t *result; // eax
  int v13; // ecx
  int v14; // esi
  int v17; // ecx
  int v18; // ebx
  uint8_t v19; // cl
  uint8_t v20; // cl
  int v21; // ecx
  int v22; // ecx
  char *v23; // edi
  int16_t v24; // cx
  uint8_t *v26; // [esp+1Ch] [ebp+8h]
  uint8_t v27; // [esp+20h] [ebp+Ch]

  result = (uint16_t *)(a6); /*0x497240*/
  v26 = *(uint8_t **)this->u32_4; /*0x497244*/
  v13 = a5; /*0x497248*/
  v14 = arg0; /*0x49724d*/
  if ( a5 <= 0 ) /*0x497258*/
  {
    v18 = a4; /*0x49728f*/
  }
  else
  {
    do /*0x49726f*/
    {
      if ( *a2++ ) /*0x49725a*/
        --v13; /*0x49726c*/
      else
        v13 -= *a2++; /*0x497267*/
    }
    while ( v13 > 0 ); /*0x49726f*/
    v17 = -v13; /*0x497275*/
    v18 = a4 - v17; /*0x497277*/
    v14 = arg0 + 2 * v17; /*0x497279*/
    result = &a6[v17]; /*0x49727c*/
    if ( (unsigned int)result >= (&g_ZBufferDescriptor)[1].Stream_field_08 ) /*0x497288*/
      result = (uint16_t *)((char *)result - (&g_ZBufferDescriptor)[1].Stream_field_0C); /*0x49728a*/
  }
  while ( v18 > 0 ) /*0x497295*/
  {
    v19 = *a2++; /*0x49729b*/
    v27 = v19; /*0x4972a1*/
    if ( v19 ) /*0x4972a9*/
    {
      v22 = arg10 - *a10; /*0x4972d1*/
      v23 = a10 + 1; /*0x4972d8*/
      if ( v22 >= *result ) /*0x4972db*/
      {
        a10 = v23 + 1; /*0x49731b*/
        v14 += 2; /*0x49731c*/
        ++result; /*0x49731f*/
      }
      else
      {
        v14 += 2; /*0x4972ed*/
        ++result; /*0x4972f0*/
        *(unsigned short *)(v14 - 2) = *(unsigned short *)(this->M8 + 2 * v26[v27]); /*0x497305*/
        v24 = *v23; /*0x49730d*/
        a10 = v23 + 1; /*0x497313*/
        *(result - 1) = arg10 - v24; /*0x497314*/
      }
      --v18; /*0x497318*/
    }
    else
    {
      v20 = *a2++; /*0x4972ab*/
      v18 -= v20; /*0x4972bd*/
      a10 += v20; /*0x4972bf*/
      v21 = 2 * v20; /*0x4972c1*/
      v14 += v21; /*0x4972c4*/
      result = (uint16_t *)((char *)result + v21); /*0x4972c6*/
    }
    if ( (unsigned int)result >= (&g_ZBufferDescriptor)[1].Stream_field_08 ) /*0x49732c*/
      result = (uint16_t *)((char *)result - (&g_ZBufferDescriptor)[1].Stream_field_0C); /*0x49732e*/
  }
  return result; /*0x497339*/

}
}
// 0x497390
namespace gamemd {
unsigned short * E4Recv_497390::sub_497390(unsigned short * a1, unsigned char * a2, int a4, RLEBlitTransDarkenZReadWrite_G * aP4, int arg10, unsigned short * a6, int a8, int a9, int _38, char * a10)
{

  int v11; // edx
  unsigned short *v13; // esi
  uint16_t *result; // eax
  int v17; // edx
  int v18; // ebp
  uint8_t v20; // dl
  int16_t v21; // dx

  v11 = (int)(aP4); /*0x497391*/
  v13 = a1; /*0x49739c*/
  result = (uint16_t *)(a6); /*0x4973a9*/
  if ( (int)aP4 <= 0 ) /*0x4973b1*/
  {
    v18 = a4; /*0x4973e6*/
  }
  else
  {
    do /*0x4973c6*/
    {
      if ( *a2++ ) /*0x4973b3*/
        --v11; /*0x4973c3*/
      else
        v11 -= *a2++; /*0x4973be*/
    }
    while ( v11 > 0 ); /*0x4973c6*/
    v17 = -v11; /*0x4973cc*/
    v18 = a4 - v17; /*0x4973ce*/
    v13 = &a1[v17]; /*0x4973d0*/
    result = &a6[v17]; /*0x4973d3*/
    if ( (unsigned int)result >= (&g_ZBufferDescriptor)[1].Stream_field_08 ) /*0x4973df*/
      result = (uint16_t *)((char *)result - (&g_ZBufferDescriptor)[1].Stream_field_0C); /*0x4973e1*/
  }
  while ( v18 > 0 ) /*0x4973ec*/
  {
    if ( *a2++ ) /*0x4973ee*/
    {
      if ( arg10 - *a10 >= *result ) /*0x497423*/
      {
        ++a10; /*0x49744b*/
        --v18; /*0x49744c*/
        ++result; /*0x49744d*/
      }
      else
      {
        ++result; /*0x497437*/
        *v13 = *(unsigned short *)&this->m_2[2] & (*v13 >> 1); /*0x49743a*/
        v21 = *a10++; /*0x49743d*/
        *(result - 1) = arg10 - v21; /*0x497444*/
        --v18; /*0x497448*/
      }
      ++v13; /*0x497450*/
    }
    else
    {
      v20 = *a2++; /*0x4973f5*/
      v18 -= v20; /*0x497406*/
      a10 += v20; /*0x497408*/
      v13 += v20; /*0x49740d*/
      result += v20; /*0x49740f*/
    }
    if ( (unsigned int)result >= (&g_ZBufferDescriptor)[1].Stream_field_08 ) /*0x49745c*/
      result = (uint16_t *)((char *)result - (&g_ZBufferDescriptor)[1].Stream_field_0C); /*0x49745e*/
  }
  return result; /*0x497465*/

}
}
// 0x49B7E0
namespace gamemd {
int FillScoreScreenStats(IUnknown * Destination, char a2)
{
  int v2; // ebp
  int result; // eax
  HouseClass *i; // ecx
  int v6; // esi
  int v7; // eax
  unsigned int *v8; // ecx
  int v9; // edx
  int *v10; // ecx
  int v11; // edx
  int v12; // ebp
  int Count; // ebp
  int v14; // ebp
  int v15; // ebp
  int v16; // esi

  v2 = dword_A80238; /*0x49b7e2*/
  result = 0; /*0x49b7e9*/
  if ( dword_A80238 <= 0 ) /*0x49b7f0*/
    return result; /*0x49b7f0*/
  for ( i = dword_A8022C; ; i = (HouseClass *)((char *)i + 4) ) /*0x49b7f6*/
  {
    v6 = *(unsigned int *)*(unsigned int *)&i->vtable1; /*0x49b7fc*/
    if ( !*(unsigned int *)*(unsigned int *)&i->vtable1 || *(unsigned char *)(*(unsigned int *)(v6 + 52) + 422) == 1 || !*(unsigned char *)(v6 + 492) ) /*0x49b810*/
      goto LABEL_8; /*0x49b816*/
    if ( !a2 ) /*0x49b81a*/
      break; /*0x49b81a*/
    a2 = 0; /*0x49b81c*/
  LABEL_8:
    if ( ++result >= dword_A80238 ) /*0x49b824*/
      return result; /*0x49b824*/
  }
  *((unsigned int *)Destination + 11) = 0; /*0x49b831*/
  wcscpy((wchar_t *)(Destination), (const wchar_t *)(v6 + 90154)); /*0x49b836*/
  *((unsigned int *)Destination + 12) = 0; /*0x49b83b*/
  *((unsigned int *)Destination + 16) = 0; /*0x49b83e*/
  *((unsigned int *)Destination + 20) = 0; /*0x49b841*/
  *((unsigned int *)Destination + 24) = 0; /*0x49b844*/
  *((unsigned int *)Destination + 10) = *(unsigned int *)(v6 + 90196); /*0x49b850*/
  if ( !*(unsigned char *)(v6 + 501) ) /*0x49b853*/
    ++*((unsigned int *)Destination + 11); /*0x49b85d*/
  v7 = 0; /*0x49b860*/
  v8 = (unsigned int *)(v6 + 21476); /*0x49b862*/
  v9 = 20; /*0x49b868*/
  do /*0x49b873*/
  {
    v7 += *v8++; /*0x49b86d*/
    --v9; /*0x49b872*/
  }
  while ( v9 ); /*0x49b873*/
  v10 = (int *)(v6 + 21560); /*0x49b875*/
  v11 = v2; /*0x49b87b*/
  do /*0x49b885*/
  {
    v12 = *v10++; /*0x49b87d*/
    v7 += v12; /*0x49b882*/
    --v11; /*0x49b884*/
  }
  while ( v11 ); /*0x49b885*/
  *((unsigned int *)Destination + 16) = v7; /*0x49b887*/
  *((unsigned int *)Destination + 12) = *(unsigned int *)(v6 + 21640) + *(unsigned int *)(v6 + 21556); /*0x49b89e*/
  Count = ((VectorClass *)((unsigned int *)(v6 + 21840)))->GetCount(); /*0x49b8ac*/
  v14 = ((VectorClass *)((unsigned int *)(v6 + 21860)))->GetCount() + Count; /*0x49b8b9*/
  v15 = ((VectorClass *)((unsigned int *)(v6 + 21880)))->GetCount() + v14; /*0x49b8c6*/
  *((unsigned int *)Destination + 20) = ((VectorClass *)((unsigned int *)(v6 + 21900)))->GetCount() /*0x49b8df*/
                                + v15
                                + *(unsigned int *)(v6 + 21640)
                                + *(unsigned int *)(v6 + 21556);
  v16 = *(unsigned int *)(v6 + 21736); /*0x49b8e2*/
  if ( v16 > 0 ) /*0x49b8ea*/
    *((unsigned int *)Destination + 24) += v16; /*0x49b8ec*/
  ToWideStringChar((IUnknown *)((char *)Destination)); /*0x49b902*/
// 0x4068e0
  return Debug::Log("@@@@ %s: %s\n Scheme: %d\n Lost = %d\n Kills = %d\n Built = %d\n Score = %d\n"); /*0x49b826 G57c1: IDA 0x49b922 push offset aSSSchemeDLostD_0*/
}
}
// 0x49C0D0
namespace gamemd {
AbstractClass * * E4Recv_49C0D0::CampaignClass_LoadCoopSave(void * aScore_0)
{

  char *v2; // ebx
  int v3; // esi
  char *v4; // edi
  int v5; // esi
  int v6; // eax
  char v7; // al
  uint8_t v8; // al
  char v9; // al
  char v10; // al
  char *v11; // edi
  int v12; // esi
  char i; // al
  int v14; // esi
  int v15; // eax
  char v16; // al
  uint8_t v17; // al
  char v18; // al
  int Int_Overwrite; // eax
  int v20; // esi
  int v21; // eax
  int j; // esi
  void *v24[3]; // [esp+10h] [ebp-148h] BYREF
  int v25[7]; // [esp+1Ch] [ebp-13Ch] BYREF
  unsigned int v26[6]; // [esp+38h] [ebp-120h] BYREF
  char v27; // [esp+50h] [ebp-108h]
  char v28[100]; // [esp+68h] [ebp-F0h] BYREF
  unsigned int v29[22]; // [esp+CCh] [ebp-8Ch] BYREF
  unsigned char v30[12]; // [esp+124h] [ebp-34h] BYREF
  int v31; // [esp+130h] [ebp-28h]
  char Buffer[32]; // [esp+138h] [ebp-20h] BYREF

  if ( !*(unsigned int *)this ) /*0x49c0dc*/
    return 0; /*0x49c0dc*/
  v2 = (char *)((unsigned char *)this + 28); /*0x49c0e9*/
  if ( !*((unsigned char *)this + 28) ) /*0x49c0e6*/
    return 0; /*0x49c0ee*/
  v3 = 0; /*0x49c0f7*/
  v4 = (char *)(this); /*0x49c0fb*/
  if ( *this )
  {
    do
    {
      if ( v3 >= 1021 ) /*0x49c109*/
        break; /*0x49c109*/
      if ( isalnum(*v4) )
      {
        (&g_IsWindowed)[v3] = *v4; /*0x49c177*/
      }
      else
      {
        (&g_IsWindowed)[v3] = 61; /*0x49c11b*/
        v5 = v3 + 1; /*0x49c122*/
        v6 = *v4 >> 4; /*0x49c126*/
        if ( (unsigned int)v6 >= 0x10 )
          v7 = 0; /*0x49c13d*/
        else
          v7 = v6 >= 10 ? v6 + 55 : v6 + 48;
        (&g_IsWindowed)[v5] = v7; /*0x49c13f*/
        v3 = v5 + 1; /*0x49c147*/
        v8 = *v4 & 0xF; /*0x49c148*/
        if ( v8 > 0xFu )
        {
          (&g_IsWindowed)[v3] = 0; /*0x49c16d*/
        }
        else
        {
          v9 = (*v4 & 0xFu) >= 0xA ? v8 + 55 : v8 + 48;
          (&g_IsWindowed)[v3] = v9; /*0x49c159*/
        }
      }
      v10 = v4[1]; /*0x49c17d*/
      ++v3; /*0x49c180*/
      ++v4; /*0x49c181*/
    }
    while ( v10 );
  }
  (&g_IsWindowed)[v3] = 0; /*0x49c194*/
  strcpy( (char *)(v28), (const char *)(g_IsWindowed)); /*0x49c1ae*/
  v11 = (char *)((unsigned char *)this + 28); /*0x49c1b7*/
  v12 = 0; /*0x49c1b9*/
  for ( i = *v2; i; ++v11 )
  {
    if ( v12 >= 1021 ) /*0x49c1cb*/
      break; /*0x49c1cb*/
    if ( isalnum(i) )
    {
      (&g_IsWindowed)[v12] = *v11; /*0x49c239*/
    }
    else
    {
      (&g_IsWindowed)[v12] = 61; /*0x49c1dd*/
      v14 = v12 + 1; /*0x49c1e4*/
      v15 = *v11 >> 4; /*0x49c1e8*/
      if ( (unsigned int)v15 >= 0x10 )
        v16 = 0; /*0x49c1ff*/
      else
        v16 = v15 >= 10 ? v15 + 55 : v15 + 48;
      (&g_IsWindowed)[v14] = v16; /*0x49c201*/
      v12 = v14 + 1; /*0x49c209*/
      v17 = *v11 & 0xF; /*0x49c20a*/
      if ( v17 > 0xFu )
      {
        (&g_IsWindowed)[v12] = 0; /*0x49c22f*/
      }
      else
      {
        v18 = (*v11 & 0xFu) >= 0xA ? v17 + 55 : v17 + 48;
        (&g_IsWindowed)[v12] = v18; /*0x49c21b*/
      }
    }
    i = v11[1]; /*0x49c23f*/
    ++v12; /*0x49c242*/
  }
  (&g_IsWindowed)[v12] = 0; /*0x49c256*/
  strcat( (char *)(v28), (const char *)(g_IsWindowed)); /*0x49c278*/
  ((CCFileClass*)v29)->Construct( (char *)(g_Str_File_coopsave_ini)); /*0x49c28d*/
  v24[1] = 0; /*0x49c298*/
  v24[2] = 0; /*0x49c29c*/
  ((INISectionList *)v25)->Constructor(); /*0x49c2a0*/
  Node::Init(v26); /*0x49c2a9*/
  v26[5] = 0; /*0x49c2bc*/
  v27 = 0; /*0x49c2c0*/
  v24[0] = &CCINIClass_Vtable; /*0x49c2c4*/
  if ( !((CCINIClass *)(v24))->Load((int)v29, 0, 0) ) /*0x49c2d3*/
  {
LABEL_44:
    ((HashTable *)(v24))->DestroyHashTableINIClass(); /*0x49c553*/
    v29[0] = (unsigned int)(&vt_CCFileClass); /*0x49c563*/
    v31 = 0; /*0x49c56e*/
    ((Vector *)((int)v30))->Clear((int)((Vector *)((int)v30))); /*0x49c575*/
    v29[0] = (unsigned int)(&off_7E1668); /*0x49c581*/
    ((BufferIOFileClass *)(v29))->Dtor(); /*0x49c58c*/
    return 0; /*0x49c594*/
  }
  *((unsigned int *)this + 14) = INIClass::ReadInt_Overwrite((INIClass *)(v28), (unsigned char *)&g_INI_Key_CurrentMap, (unsigned char *)("Score"), 0); /*0x49c2fc*/
  INIClass::ReadInt_Overwrite((INIClass *)(v28), (unsigned char *)(aScore_0), (unsigned char *)("Score"), 0); /*0x49c2ff*/
  *((unsigned int *)this + 17) = INIClass::ReadInt_Overwrite((INIClass *)(v28),(unsigned char *)(aCampaigntype), (unsigned char *)("House1"), -1); /*0x49c329*/
  *((unsigned int *)this + 5) = SuperWeaponTypeClass::FindOrCreate( /*0x49c341*/
                            (uint8_t ***)v24,
                            (uint8_t *)v28,
                            (uint8_t *)aHouse1,
                            -2);
  *((unsigned int *)this + 6) = INIClass::ReadInt_Overwrite((INIClass *)(v24), (unsigned char *)(v28), (unsigned char *)(aColor1), -2); /*0x49c349*/
  *((unsigned int *)this + 12) = SuperWeaponTypeClass::FindOrCreate( /*0x49c371*/
                             (uint8_t ***)v24,
                             (uint8_t *)v28,
                             (uint8_t *)aHouse2,
                             -2);
  *((unsigned int *)this + 13) = INIClass::ReadInt_Overwrite((INIClass *)(v28), (unsigned char *)(aColor2), (unsigned char *)("Kills1"), -2); /*0x49c388*/
  *((unsigned int *)this + 18) = INIClass::ReadInt_Overwrite((INIClass *)(v24), (unsigned char *)(v28), (unsigned char *)(aKills1), 0); /*0x49c390*/
  *((unsigned int *)this + 19) = INIClass::ReadInt_Overwrite((INIClass *)(v28), (unsigned char *)(aKills2), (unsigned char *)("Built1"), 0); /*0x49c3b6*/
  *((unsigned int *)this + 20) = INIClass::ReadInt_Overwrite((INIClass *)(v28),(unsigned char *)(aBuilt1), (unsigned char *)("Built2"), 0); /*0x49c3cd*/
  *((unsigned int *)this + 21) = INIClass::ReadInt_Overwrite((INIClass *)(v24), (unsigned char *)(v28), (unsigned char *)(aBuilt2), 0); /*0x49c3d5*/
  *((unsigned int *)this + 22) = INIClass::ReadInt_Overwrite((INIClass *)(v28), (unsigned char *)(aLost1), (unsigned char *)("Lost2"), 0); /*0x49c3fb*/
  *((unsigned int *)this + 23) = INIClass::ReadInt_Overwrite((INIClass *)(v28),(unsigned char *)(aLost2), (unsigned char *)("Score1"), 0); /*0x49c412*/
  *((unsigned int *)this + 24) = INIClass::ReadInt_Overwrite((INIClass *)(v24), (unsigned char *)(v28), (unsigned char *)(aScore1), 0); /*0x49c41a*/
  *((unsigned int *)this + 25) = INIClass::ReadInt_Overwrite((INIClass *)(v28), (unsigned char *)(aScore2), (unsigned char *)("Time"), 0); /*0x49c440*/
  Int_Overwrite = INIClass::ReadInt_Overwrite((INIClass *)(v28),(unsigned char *)(g_INI_Key_Time), (unsigned char *)("Time"), 0); /*0x49c443*/
  v20 = *((unsigned int *)this + 17); /*0x49c448*/
  *((unsigned int *)this + 26) = Int_Overwrite; /*0x49c44b*/
  if ( !byte_89F578 ) /*0x49c455*/
    ((CampaignClass*)((int)&g_DDrawSurfaceManager))->LoadFromINI(); /*0x49c45c*/
  if ( v20 < 0 || v20 >= dword_89F574 ) /*0x49c46f*/
  {
    *((unsigned int *)this + 16) = 0; /*0x49c550*/
    goto LABEL_44; /*0x49c550*/
  }
  v21 = dword_89F570 + 76 * v20; /*0x49c486*/
  *((unsigned int *)this + 16) = *(char *)(v21 + 8); /*0x49c489*/
  *((unsigned int *)this + 15) = (unsigned int)(__2_YAPAXI_Z(4 * *(char *)(v21 + 8))); /*0x49c499*/
  for ( j = 0; j < *((unsigned int *)this + 16); ++j ) /*0x49c4a6*/
  {
    sprintf(Buffer, "Map%d", j + 1); /*0x49c4b9*/
    *(unsigned int *)(*((unsigned int *)this + 15) + 4 * j) = (unsigned int)(__2_YAPAXI_Z(0x104u)); /*0x49c4ce*/
    /*0x49c4f3*/
      ((INIClass*)((uint8_t ***)v24))->GetString(/*0x49c4f3*/ (uint8_t *)v28, (uint8_t *)Buffer, (void *)(g_Str_undefined), *(char **)(*((unsigned int *)this + 15) + 4 * j), 260);
  }
  *((unsigned char *)this + 108) = 1; /*0x49c505*/
  ((HashTable *)(v24))->DestroyHashTableINIClass(); /*0x49c509*/
  v29[0] = (unsigned int)((unsigned int)&vt_CCFileClass)); /*0x49c515*/
  v31 = 0; /*0x49c520*/
  ((Vector *)((int)v30))->Clear((int)((Vector *)((int)v30))); /*0x49c527*/
  v29[0] = (unsigned int)(&off_7E1668); /*0x49c533*/
  ((BufferIOFileClass *)(v29))->Dtor(); /*0x49c53e*/
  return (gamemd::AbstractClass **)(1); /*0x49c543*/

}
}
// 0x49CCF0
namespace gamemd {
AbstractClass * * E4Recv_49CCF0::sub_49CCF0(int a2, int a3, void * Block, int a5, short a6, int a7, int a8, char * a9, char * a10)
{

  int v12; // esi
  int v14; // eax
  int i; // esi
  int v16; // esi
  int v17; // ebx
  char *v18; // edx
  char *v19; // esi
  char v20; // al
  char v21; // al
  char v22; // al
  char v23; // cl
  char v24; // al
  char *v25; // edx
  char *v26; // esi
  char v27; // al
  char v28; // al
  char v29; // al
  char v30; // cl
  char v31; // al
  char v32; // bl
  int v33; // [esp+14h] [ebp+4h]

  if ( !byte_89F578 ) /*0x49ccfd*/
    ((CampaignClass*)((int)&g_DDrawSurfaceManager))->LoadFromINI(); /*0x49cd04*/
  if ( a2 >= 0 && a2 < dword_89F574 ) /*0x49cd1d*/
  {
    v12 = dword_89F570; /*0x49cd23*/
    *((unsigned int *)this + 14) = -1; /*0x49cd30*/
    *((unsigned int *)this + 18) = 0; /*0x49cd3a*/
    *((unsigned int *)this + 19) = 0; /*0x49cd3d*/
    *((unsigned int *)this + 20) = 0; /*0x49cd40*/
    *((unsigned int *)this + 21) = 0; /*0x49cd46*/
    v33 = v12 + 76 * a2; /*0x49cd49*/
    *((unsigned int *)this + 22) = 0; /*0x49cd4d*/
    *((unsigned int *)this + 23) = 0; /*0x49cd50*/
    *((unsigned int *)this + 24) = 0; /*0x49cd53*/
    *((unsigned int *)this + 25) = 0; /*0x49cd56*/
    *((unsigned int *)this + 26) = 0; /*0x49cd59*/
    if ( *(char *)(v12 + 76 * a2 + 8) != a7 ) /*0x49cd62*/
    {
      if ( Block ) /*0x49cd6a*/
      {
        if ( HIBYTE(a6) ) /*0x49cd72*/
          __3_YAXPAX_Z(Block); /*0x49cd75*/
      }
      return 0; /*0x49cd83*/
    }
    *((unsigned int *)this + 17) = a2; /*0x49cd86*/
    v14 = *((unsigned int *)this + 15); /*0x49cd89*/
    *((unsigned char *)this + 108) = 1; /*0x49cd8e*/
    if ( v14 ) /*0x49cd92*/
    {
      for ( i = 0; i < *((unsigned int *)this + 16); ++i ) /*0x49cd9b*/
      {
        if ( *(unsigned int *)(*((unsigned int *)this + 15) + 4 * i) ) /*0x49cda0*/
          __3_YAXPAX_Z(*(void **)(*((unsigned int *)this + 15) + 4 * i)); /*0x49cda8*/
      }
      __3_YAXPAX_Z(*(void **)&this->M60); /*0x49cdbe*/
    }
    *((unsigned int *)this + 15) = 0; /*0x49cdc8*/
    *((unsigned int *)this + 16) = 0; /*0x49cdcb*/
    v16 = 0; /*0x49cdde*/
    *((unsigned int *)this + 15) = (unsigned int)(__2_YAPAXI_Z(4 * a7)); /*0x49cde2*/
    if ( a7 > 0 ) /*0x49cde5*/
    {
      v17 = 0; /*0x49cde7*/
      do /*0x49ce2e*/
      {
        *(unsigned int *)(*((unsigned int *)this + 15) + 4 * v16) = (unsigned int)(__2_YAPAXI_Z(0x104u)); /*0x49cdff*/
        strncpy( /*0x49ce20*/
          *(char **)(*((unsigned int *)this + 15) + 4 * v16),
          (const char *)(*(unsigned int *)(v33 + 12) + 260 * (v17 + *((unsigned int *)Block + v16))),
          0x103u);
        ++v16; /*0x49ce28*/
        v17 += 3; /*0x49ce29*/
      }
      while ( v16 < a7 ); /*0x49ce2e*/
    }
    v18 = a10; /*0x49ce30*/
    *((unsigned int *)this + 16) = a7; /*0x49ce34*/
    *((unsigned int *)this + 14) = 0; /*0x49ce39*/
    if ( a10 ) /*0x49ce40*/
    {
      v19 = (char *)(byte_89F118); /*0x49ce48*/
      if ( *a10 ) /*0x49ce46*/
      {
        do /*0x49cf05*/
        {
          if ( *v18 == 61 ) /*0x49ce59*/
          {
            v20 = v18[1]; /*0x49ce5f*/
            if ( !v20 ) /*0x49ce64*/
              break; /*0x49ce64*/
            if ( v20 > 57 || v20 < 48 ) /*0x49ce70*/
            {
              if ( v20 > 102 || v20 < 97 ) /*0x49ce80*/
              {
                if ( v20 > 70 || v20 < 65 ) /*0x49ce90*/
                  v21 = 0; /*0x49ce9a*/
                else
                  v21 = v20 - 55; /*0x49ce95*/
              }
              else
              {
                v21 = v20 - 87; /*0x49ce85*/
              }
            }
            else
            {
              v21 = v20 - 48; /*0x49ce75*/
            }
            ++v18; /*0x49ce9c*/
            *v19 = v21; /*0x49ce9d*/
            if ( v18[1] ) /*0x49ce9f*/
            {
              v22 = 16 * v21; /*0x49cea6*/
              *v19 = v22; /*0x49cea9*/
              v23 = v18[1]; /*0x49ceab*/
              if ( v23 > 57 || v23 < 48 ) /*0x49ceb6*/
              {
                if ( v23 > 102 || v23 < 97 ) /*0x49cecd*/
                {
                  if ( v23 > 70 || v23 < 65 ) /*0x49cee4*/
                  {
                    ++v18; /*0x49cef7*/
                    *v19 = v22; /*0x49cef8*/
                  }
                  else
                  {
                    ++v18; /*0x49ceee*/
                    *v19 = (v23 - 55) | v22; /*0x49ceef*/
                  }
                }
                else
                {
                  ++v18; /*0x49ced7*/
                  *v19 = (v23 - 87) | v22; /*0x49ced8*/
                }
              }
              else
              {
                ++v18; /*0x49cec0*/
                *v19 = (v23 - 48) | v22; /*0x49cec1*/
              }
            }
          }
          else
          {
            *v19 = *v18; /*0x49cefc*/
          }
          v24 = *++v18; /*0x49cefe*/
          ++v19; /*0x49cf02*/
        }
        while ( v24 ); /*0x49cf05*/
      }
      *v19 = 0; /*0x49cf0b*/
      strcpy( (char *)this, (const char *)(byte_89F118)); /*0x49cf27*/
    }
    else
    {
      *(unsigned char *)this = 0; /*0x49cf32*/
    }
    v25 = a9; /*0x49cf36*/
    if ( a9 ) /*0x49cf3c*/
    {
      v26 = (char *)(byte_89F118); /*0x49cf44*/
      if ( *a9 ) /*0x49cf42*/
      {
        do /*0x49d001*/
        {
          if ( *v25 == 61 ) /*0x49cf55*/
          {
            v27 = v25[1]; /*0x49cf5b*/
            if ( !v27 ) /*0x49cf60*/
              break; /*0x49cf60*/
            if ( v27 > 57 || v27 < 48 ) /*0x49cf6c*/
            {
              if ( v27 > 102 || v27 < 97 ) /*0x49cf7c*/
              {
                if ( v27 > 70 || v27 < 65 ) /*0x49cf8c*/
                  v28 = 0; /*0x49cf96*/
                else
                  v28 = v27 - 55; /*0x49cf91*/
              }
              else
              {
                v28 = v27 - 87; /*0x49cf81*/
              }
            }
            else
            {
              v28 = v27 - 48; /*0x49cf71*/
            }
            ++v25; /*0x49cf98*/
            *v26 = v28; /*0x49cf99*/
            if ( v25[1] ) /*0x49cf9b*/
            {
              v29 = 16 * v28; /*0x49cfa2*/
              *v26 = v29; /*0x49cfa5*/
              v30 = v25[1]; /*0x49cfa7*/
              if ( v30 > 57 || v30 < 48 ) /*0x49cfb2*/
              {
                if ( v30 > 102 || v30 < 97 ) /*0x49cfc9*/
                {
                  if ( v30 > 70 || v30 < 65 ) /*0x49cfe0*/
                  {
                    ++v25; /*0x49cff3*/
                    *v26 = v29; /*0x49cff4*/
                  }
                  else
                  {
                    ++v25; /*0x49cfea*/
                    *v26 = (v30 - 55) | v29; /*0x49cfeb*/
                  }
                }
                else
                {
                  ++v25; /*0x49cfd3*/
                  *v26 = (v30 - 87) | v29; /*0x49cfd4*/
                }
              }
              else
              {
                ++v25; /*0x49cfbc*/
                *v26 = (v30 - 48) | v29; /*0x49cfbd*/
              }
            }
          }
          else
          {
            *v26 = *v25; /*0x49cff8*/
          }
          v31 = *++v25; /*0x49cffa*/
          ++v26; /*0x49cffe*/
        }
        while ( v31 ); /*0x49d001*/
      }
      *v26 = 0; /*0x49d007*/
      strcpy( (char *)((char *)this + 28), (const char *)(byte_89F118)); /*0x49d026*/
    }
    else
    {
      *((unsigned char *)this + 28) = 0; /*0x49d031*/
    }
    Debug::Log("@@@@ SetCampaignInfo saw campaign_type %d\n"); /*0x49d03e G57c1: IDA 0x49d03e push offset aSetcampaigninf*/
  }
  v32 = *((unsigned char *)this + 108); /*0x49d04c*/
  if ( Block && HIBYTE(a6) ) /*0x49d059*/
    __3_YAXPAX_Z(Block); /*0x49d05c*/
  return (AbstractClass * *)v32; /*0x49cd7d*/

}
}
// 0x49D390
namespace gamemd {
int E4Recv_49D390::LoadCoopCampaignSave(IUnknown * aP1)
{

  char *v2; // edi
  char *v3; // ebp
  int v5; // esi
  int v6; // esi
  int v7; // eax
  char v8; // al
  char v9; // al
  char *v10; // edi
  int v11; // esi
  char i; // al
  int v13; // esi
  int v14; // eax
  char v15; // al
  int IntOverwriteINIClass; // eax
  unsigned int v17[22]; // [esp+Ch] [ebp-148h] BYREF
  unsigned char v18[12]; // [esp+64h] [ebp-F0h] BYREF
  int v19; // [esp+70h] [ebp-E4h]
  void *v20[3]; // [esp+78h] [ebp-DCh] BYREF
  unsigned int v21[7]; // [esp+84h] [ebp-D0h] BYREF
  unsigned int v22[6]; // [esp+A0h] [ebp-B4h] BYREF
  char v23; // [esp+B8h] [ebp-9Ch]
  char Buffer[32]; // [esp+D0h] [ebp-84h] BYREF
  char v25[100]; // [esp+F0h] [ebp-64h] BYREF

  v2 = (char *)(this); /*0x49d399*/
  if ( !*(unsigned int *)this ) /*0x49d39d*/
    return 0; /*0x49d39d*/
  v3 = (char *)((unsigned char *)this + 28); /*0x49d3a8*/
  if ( !*((unsigned char *)this + 28) ) /*0x49d3a5*/
    return 0; /*0x49d3ad*/
  ((CCFileClass*)v17)->Construct( (char *)(g_Str_File_coopsave_ini)); /*0x49d3bc*/
  v20[1] = 0; /*0x49d3c8*/
  v20[2] = 0; /*0x49d3cc*/
  ((INISectionList *)v21)->Constructor(); /*0x49d3d3*/
  Node::Init(v22); /*0x49d3df*/
  v22[5] = 0; /*0x49d3f2*/
  v23 = 0; /*0x49d3f9*/
  v20[0] = &CCINIClass_Vtable; /*0x49d400*/
  if ( !((CCINIClass *)(v20))->Load((int)v17, 0, 0) ) /*0x49d40b*/
  {
    CCFileClass::Reset((gamemd::CCFileClass *)(v17)); /*0x49d418*/
LABEL_5:
    ((HashTable *)(v20))->DestroyHashTableINIClass(); /*0x49d41d*/
    v17[0] = (unsigned int)((unsigned int)&vt_CCFileClass)); /*0x49d42a*/
    v19 = 0; /*0x49d432*/
    ((Vector *)((int)v18))->Clear((int)((Vector *)((int)v18))); /*0x49d436*/
    v17[0] = (unsigned int)(&off_7E1668); /*0x49d43f*/
    ((BufferIOFileClass *)(v17))->Dtor(); /*0x49d447*/
    return 0; /*0x49d457*/
  }
  CCFileClass::Reset((gamemd::CCFileClass *)(v17)); /*0x49d45f*/
  v5 = 0; /*0x49d466*/
  if ( *v2 )
  {
    do
    {
      if ( v5 >= 1021 ) /*0x49d472*/
        break; /*0x49d472*/
      if ( isalnum(*v2) )
      {
        (&g_IsWindowed)[v5] = *v2; /*0x49d4c3*/
      }
      else
      {
        (&g_IsWindowed)[v5] = 61; /*0x49d484*/
        v6 = v5 + 1; /*0x49d48b*/
        v7 = *v2 >> 4; /*0x49d48f*/
        if ( (unsigned int)v7 >= 0x10 )
          v8 = 0; /*0x49d4a6*/
        else
          v8 = v7 >= 10 ? v7 + 55 : v7 + 48;
        (&g_IsWindowed)[v6] = v8; /*0x49d4a8*/
        v5 = v6 + 1; /*0x49d4b3*/
        (&g_IsWindowed)[v5] = EncodeDigitHex(*v2 & 0xF); /*0x49d4b9*/
      }
      v9 = v2[1]; /*0x49d4c9*/
      ++v5; /*0x49d4cc*/
      ++v2; /*0x49d4cd*/
    }
    while ( v9 );
  }
  (&g_IsWindowed)[v5] = 0; /*0x49d4dc*/
  strcpy( (char *)(v25), (const char *)(g_IsWindowed)); /*0x49d4f8*/
  v10 = v3; /*0x49d501*/
  v11 = 0; /*0x49d503*/
  for ( i = *v3; i; ++v10 )
  {
    if ( v11 >= 1021 ) /*0x49d511*/
      break; /*0x49d511*/
    if ( isalnum(i) )
    {
      (&g_IsWindowed)[v11] = *v10; /*0x49d562*/
    }
    else
    {
      (&g_IsWindowed)[v11] = 61; /*0x49d523*/
      v13 = v11 + 1; /*0x49d52a*/
      v14 = *v10 >> 4; /*0x49d52e*/
      if ( (unsigned int)v14 >= 0x10 )
        v15 = 0; /*0x49d545*/
      else
        v15 = v14 >= 10 ? v14 + 55 : v14 + 48;
      (&g_IsWindowed)[v13] = v15; /*0x49d547*/
      v11 = v13 + 1; /*0x49d552*/
      (&g_IsWindowed)[v11] = EncodeDigitHex(*v10 & 0xF); /*0x49d558*/
    }
    i = v10[1]; /*0x49d568*/
    ++v11; /*0x49d56b*/
  }
  (&g_IsWindowed)[v11] = 0; /*0x49d57b*/
  strcat( (char *)(v25), (const char *)(g_IsWindowed)); /*0x49d59f*/
  IntOverwriteINIClass = INIClass::ReadInt_Overwrite((INIClass *)(v25), (unsigned char *)&g_INI_Key_CurrentMap, (unsigned char *)("CurrentMap"), 0); /*0x49d5bd*/
  sprintf(Buffer, "Map%d", IntOverwriteINIClass + 1); /*0x49d5d1*/
  /*0x49d602*/
    ((INIClass*)((uint8_t ***)v20))->GetString(/*0x49d602*/ (uint8_t *)v25, (uint8_t *)Buffer, (void *)(g_Str_undefined), (void *)(aP1), 260);
  if ( strcmp((const char *)(aP1),(const char *)( g_Str_undefined)) ) /*0x49d614*/
    goto LABEL_5; /*0x49d63a*/
  ((HashTable *)(v20))->DestroyHashTableINIClass(); /*0x49d644*/
  v17[0] = (unsigned int)((unsigned int)&vt_CCFileClass)); /*0x49d64d*/
  v19 = 0; /*0x49d655*/
  ((Vector *)((int)v18))->Clear((int)((Vector *)((int)v18))); /*0x49d659*/
  v17[0] = (unsigned int)(&off_7E1668); /*0x49d662*/
  ((BufferIOFileClass *)(v17))->Dtor(); /*0x49d66a*/
  return 1; /*0x49d44c*/

}
}
// 0x49D680
namespace gamemd {
AbstractClass * * E4Recv_49D680::SerializeCampaignOptions()
{

  int v3; // esi
  int v4; // ebx
  int v5; // esi
  int v6; // edi
  int v7; // esi
  char *v8; // edi
  int v9; // esi
  int v10; // eax
  char v11; // al
  uint8_t v12; // al
  char v13; // al
  char v14; // al
  char *v15; // ebp
  char v16; // al
  int i; // esi
  int v18; // esi
  int v19; // eax
  char v20; // al
  uint8_t v21; // al
  char v22; // al
  int v23; // [esp+Ch] [ebp-1ACh]
  int v24; // [esp+14h] [ebp-1A4h]
  char v25[16]; // [esp+18h] [ebp-1A0h] BYREF
  char Buffer[400]; // [esp+28h] [ebp-190h] BYREF

  if ( !*((unsigned char *)this + 108) ) /*0x49d68b*/
    return 0; /*0x49d68b*/
  v3 = *((unsigned int *)this + 17); /*0x49d6a3*/
  if ( !byte_89F578 ) /*0x49d6a8*/
    ((CampaignClass*)((int)&g_DDrawSurfaceManager))->LoadFromINI(); /*0x49d6af*/
  v4 = 0; /*0x49d6b4*/
  if ( v3 < 0 || v3 >= dword_89F574 ) /*0x49d6c0*/
    return 0; /*0x49d694*/
  v24 = dword_89F570 + 76 * v3; /*0x49d6d8*/
  sprintf( /*0x49d70c*/
    Buffer,
    "C0,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d",
    *((unsigned int *)this + 17),
    *((unsigned int *)this + 14),
    *((unsigned int *)this + 26),
    *((unsigned int *)this + 18),
    *((unsigned int *)this + 20),
    *((unsigned int *)this + 22),
    *((unsigned int *)this + 24),
    *((unsigned int *)this + 19),
    *((unsigned int *)this + 21),
    *((unsigned int *)this + 23),
    *((unsigned int *)this + 25));
  if ( *((int *)this + 16) > 0 ) /*0x49d719*/
  {
    v23 = 0; /*0x49d71f*/
    do /*0x49d7ae*/
    {
      v5 = v23; /*0x49d723*/
      v6 = 0; /*0x49d727*/
      while ( _strcmpi((const char *)((const void *)(v5 + *(unsigned int *)(v24 + 12))),(const char *)( *(const void **)(*((unsigned int *)this + 15) + 4 * v4))) ) /*0x49d748*/
      {
        ++v6; /*0x49d74a*/
        v5 += 260; /*0x49d74b*/
        if ( v6 >= 3 ) /*0x49d754*/
        {
          v6 = 0; /*0x49d756*/
          break; /*0x49d756*/
        }
      }
      sprintf(v25, ",%d", v6); /*0x49d75a*/
      strcat( (char *)(Buffer), (const char *)(v25)); /*0x49d791*/
      ++v4; /*0x49d79b*/
      v23 += 780; /*0x49d7aa*/
    }
    while ( v4 < *((unsigned int *)this + 16) ); /*0x49d7ae*/
  }
  strcat( (char *)(Buffer), (const char *)(a1_0)); /*0x49d7d9*/
  v7 = 0; /*0x49d7e7*/
  v8 = (char *)(this); /*0x49d7e9*/
  if ( *this )
  {
    do
    {
      if ( v7 >= 1021 ) /*0x49d7f9*/
        break; /*0x49d7f9*/
      if ( isalnum(*v8) )
      {
        (&g_IsWindowed)[v7] = *v8; /*0x49d866*/
      }
      else
      {
        (&g_IsWindowed)[v7] = 61; /*0x49d80b*/
        v9 = v7 + 1; /*0x49d811*/
        v10 = *v8 >> 4; /*0x49d815*/
        if ( (unsigned int)v10 >= 0x10 )
          v11 = 0; /*0x49d82c*/
        else
          v11 = v10 >= 10 ? v10 + 55 : v10 + 48;
        (&g_IsWindowed)[v9] = v11; /*0x49d82e*/
        v7 = v9 + 1; /*0x49d836*/
        v12 = *v8 & 0xF; /*0x49d837*/
        if ( v12 > 0xFu )
        {
          (&g_IsWindowed)[v7] = 0; /*0x49d85c*/
        }
        else
        {
          v13 = (*v8 & 0xFu) >= 0xA ? v12 + 55 : v12 + 48;
          (&g_IsWindowed)[v7] = v13; /*0x49d848*/
        }
      }
      v14 = v8[1]; /*0x49d86c*/
      ++v7; /*0x49d86f*/
      ++v8; /*0x49d870*/
    }
    while ( v14 );
  }
  (&g_IsWindowed)[v7] = 0; /*0x49d883*/
  strcat( (char *)(Buffer), (const char *)(g_IsWindowed)); /*0x49d8a5*/
  v15 = (char *)((unsigned char *)this + 28); /*0x49d8b0*/
  strcat( (char *)(Buffer), (char *)&::Delimiter); /*0x49d8d4*/
  v16 = *v15; /*0x49d8d6*/
  for ( i = 0; v16; ++v15 )
  {
    if ( i >= 1021 ) /*0x49d8f0*/
      break; /*0x49d8f0*/
    if ( isalnum(v16) )
    {
      (&g_IsWindowed)[i] = *v15; /*0x49d964*/
    }
    else
    {
      (&g_IsWindowed)[i] = 61; /*0x49d906*/
      v18 = i + 1; /*0x49d90c*/
      v19 = *v15 >> 4; /*0x49d911*/
      if ( (unsigned int)v19 >= 0x10 )
        v20 = 0; /*0x49d928*/
      else
        v20 = v19 >= 10 ? v19 + 55 : v19 + 48;
      (&g_IsWindowed)[v18] = v20; /*0x49d92a*/
      i = v18 + 1; /*0x49d933*/
      v21 = *v15 & 0xF; /*0x49d934*/
      if ( v21 > 0xFu )
      {
        (&g_IsWindowed)[i] = 0; /*0x49d959*/
      }
      else
      {
        v22 = (*v15 & 0xFu) >= 0xA ? v21 + 55 : v21 + 48;
        (&g_IsWindowed)[i] = v22; /*0x49d945*/
      }
    }
    v16 = v15[1]; /*0x49d96a*/
    ++i; /*0x49d96d*/
  }
  (&g_IsWindowed)[i] = 0; /*0x49d981*/
  strcat( (char *)(Buffer), (const char *)(g_IsWindowed)); /*0x49d9a3*/
  Debug::Log("@@@@ Sending campaign game option string: %s\n"); /*0x49d9b6 G57c1: IDA 0x49d9b6 push offset aSendingCampaig_0*/
  ((Network *)Buffer)->SendOptionsGame(); /*0x49d9c2*/
  Debug::Log("@@@@ Sent\n"); /*0x49d9cc G57c1: IDA 0x49d9cc push offset aSent*/
  return (gamemd::AbstractClass **)(1); /*0x49d692*/

}
}
// 0x49E7C0
namespace gamemd {
AbstractClass * sub_49E7C0(ObjectClass *a1, char * Block, char a2)
{

  int v3; // eax
  char *v4; // edi
  int v5; // edx
  int v6; // eax
  int *v7; // esi
  int v8; // ebp
  void *v9; // eax
  void *v10; // eax
  void *fallRate; // eax
  void *abstractFlags; // eax
  char *v14; // [esp+Ch] [ebp-4h]

  if ( (a2 & 2) != 0 ) /*0x49e7cc*/
  {
    v3 = *((unsigned int *)a1 - 1); /*0x49e7d2*/
    v4 = (char *)a1 - 4; /*0x49e7d5*/
    v14 = (char *)a1 - 4; /*0x49e7d8*/
    v5 = 19 * v3; /*0x49e7df*/
    v6 = v3 - 1; /*0x49e7e2*/
    if ( v6 >= 0 ) /*0x49e7e6*/
    {
      v7 = &a1->fallRate + v5; /*0x49e7e9*/
      v8 = v6 + 1; /*0x49e7ec*/
      do /*0x49e84a*/
      {
        v7 -= 19; /*0x49e7f6*/
        j_DeleteAndZero( (void *)((ObjectClass *)(v7 + 7))); /*0x49e7fc*/
        j_DeleteAndZero( (void *)((ObjectClass *)(v7 + 6))); /*0x49e804*/
        v9 = (void *)*v7; /*0x49e809*/
        *(v7 - 1) = (int)&vt_VectorClassDynamicVectorClass; /*0x49e80b*/
        if ( v9 && *((unsigned char *)v7 + 9) ) /*0x49e812*/
        {
          __3_YAXPAX_Z(v9); /*0x49e818*/
          *v7 = 0; /*0x49e820*/
        }
        *((unsigned char *)v7 + 9) = 0; /*0x49e822*/
        v7[1] = 0; /*0x49e825*/
        v10 = (void *)*(v7 - 6); /*0x49e828*/
        *(v7 - 7) = (int)&vt_VectorClassDynamicVectorClass; /*0x49e82b*/
        if ( v10 && *((unsigned char *)v7 - 15) ) /*0x49e832*/
        {
          __3_YAXPAX_Z(v10); /*0x49e838*/
          *(v7 - 6) = 0; /*0x49e840*/
        }
        --v8; /*0x49e843*/
        *((unsigned char *)v7 - 15) = 0; /*0x49e844*/
        *(v7 - 5) = 0; /*0x49e847*/
      }
      while ( v8 ); /*0x49e84a*/
      v4 = v14; /*0x49e84c*/
    }
    if ( (a2 & 1) != 0 ) /*0x49e856*/
      __3_YAXPAX_Z(v4); /*0x49e859*/
    return (gamemd::AbstractClass **)(v4); /*0x49e861*/
  }
  else
  {
    j_DeleteAndZero( (void *)((ObjectClass *)&a1->ambientSoundController[3])); /*0x49e86d*/
    j_DeleteAndZero( (void *)((ObjectClass *)&a1->ambientSoundController[2])); /*0x49e875*/
    fallRate = (void *)a1->fallRate; /*0x49e87a*/
    a1->owningHouseIndex = (int)&vt_VectorClassDynamicVectorClass; /*0x49e886*/
    if ( fallRate && BYTE1(a1->attachedTag) ) /*0x49e88b*/
    {
      __3_YAXPAX_Z(fallRate); /*0x49e891*/
      a1->fallRate = 0; /*0x49e899*/
    }
    BYTE1(a1->attachedTag) = 0; /*0x49e89c*/
    a1->nextObject = 0; /*0x49e89f*/
    abstractFlags = (void *)((unsigned int *)a1)[0]; /*0x49e8a2*/
    ((unsigned int *)a1)[0] = (unsigned int)(int)&vt_VectorClassDynamicVectorClass; /*0x49e8a5*/
    if ( abstractFlags && BYTE1(((unsigned int *)a1)[0]) ) /*0x49e8ac*/
    {
      __3_YAXPAX_Z(abstractFlags); /*0x49e8b2*/
      ((unsigned int *)a1)[0] = 0; /*0x49e8ba*/
    }
    BYTE1(((unsigned int *)a1)[0]) = 0; /*0x49e8c1*/
    ((unsigned int *)a1)[0] = 0; /*0x49e8c6*/
    if ( (a2 & 1) != 0 ) /*0x49e8c9*/
      __3_YAXPAX_Z(a1); /*0x49e8cc*/
    return (gamemd::AbstractClass **)((char *)a1); /*0x49e8d4*/
  }

}
}
// 0x491100
namespace gamemd {
int sub_491100(ObjectClass * a1, char a2, int a3, ObjectClass * a4, short a5, char a6, short a7)
{
  int result; // eax
  unsigned int *v9; // ecx
  unsigned short *v10; // esi
  int v11; // edi
  int v12; // eax
  int v13; // edx
  int16_t v14; // ax
  uint8_t v15; // dl
  int i; // [esp+4h] [ebp-Ch]
  int v18; // [esp+Ch] [ebp-4h]

  result = 0; /*0x491107*/
  for ( i = 0; result < dword_89ED08; i = result ) /*0x491118*/
  {
    v9 = (unsigned int *)*((unsigned int *)dword_89ECFC + result); /*0x491127*/
    v18 = (int)v9; /*0x49112a*/
    if ( v9[1] == 2 ) /*0x491132*/
    {
      v10 = (unsigned short *)v9[92]; /*0x491138*/
      v11 = 256; /*0x49113e*/
      do /*0x4911ba*/
      {
        (a3) = ((a3) & ~0xFFFF) | ((unsigned int)(*v10) & 0xFFFF); /*0x491143*/
        (v12) = ((v12) & ~(0xFFFFULL << 16)) | (((unsigned __int64)(unsigned int)((((unsigned int)(a3) >> 16) & 0xFFFF)) & 0xFFFF) << 16); /*0x491149*/
        (v13) = ((v13) & ~(0xFFFFULL << 16)) | (((unsigned __int64)(unsigned int)((((unsigned int)(a3) >> 16) & 0xFFFF)) & 0xFFFF) << 16); /*0x49114b*/
        v14 = *v10++ >> a1; /*0x49114d*/
        v15 = (uint8_t)((uint16_t)a3 >> a5) << a4; /*0x491165*/
        (a3) = ((a3) & ~0xFFFF) | ((unsigned int)((uint8_t)((uint8_t)((uint8_t)((uint16_t)a3 >> a7) << a6) >> g_BitMask_Red)) & 0xFFFF); /*0x491183*/
        (v12) = ((v12) & ~0xFFFF) | ((unsigned int)((uint8_t)((uint8_t)((unsigned char)v14 << a2) >> g_BitShift_Green_0)) & 0xFFFF); /*0x491197*/
        (v13) = ((v13) & ~0xFFFF) | ((unsigned int)((uint8_t)(v15 >> g_BitMask_Blue)) & 0xFFFF); /*0x4911ad*/
        a3 = (v13 << g_BitMask_Green) | (v12 << g_BitShift_Red) | (a3 << g_BitShift_Blue); /*0x4911b3*/
        --v11; /*0x4911b5*/
        *(v10 - 1) = a3; /*0x4911b6*/
      }
      while ( v11 ); /*0x4911ba*/
      v9[96] = (uint16_t)g_DDraw_Gray127; /*0x4911ca*/
      v9[97] = IDA_HIWORD(g_DDraw_Gray127); /*0x4911d7*/
      ((COMClass *)v9)->RegisterAll(); /*0x4911df*/
      ConvertClass::InitTables(v18); /*0x4911e6*/
      result = i; /*0x4911eb*/
    }
    ++result; /*0x4911f5*/
  }
  return result; /*0x491205*/
}
} // namespace gamemd

// 0x4912B0
namespace gamemd {
char E4Recv_4912B0::sub_4912B0(int a2, unsigned char * a3, int a4, int a5, int a6, int a7, int a8, int a9)
{

  int v9; // ebx
  int v10; // ecx
  unsigned short *v11; // edi
  int v13; // eax

  v9 = *(unsigned int *)&this->M4; /*0x4912c5*/
  v10 = a4 + 1; /*0x4912cb*/
  v11 = (unsigned short *)(a2 - 2); /*0x4912cf*/
  v13 = 0; /*0x4912d5*/
  while ( --v10 ) /*0x4912d7*/
  {
    ++v11; /*0x4912da*/
    LOBYTE(v13) = *a3++; /*0x4912dd*/
    if ( (unsigned char)v13 ) /*0x4912e2*/
      *v11 = *(unsigned short *)(v9 + 2 * v13); /*0x4912e8*/
  }
  return v13; /*0x4912ed*/

}
} // namespace gamemd

// 0x491300
namespace gamemd {
int E4Recv_491300::sub_491300(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{

  return (*(int (**)(_BlitTransXlat_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)&this->vfptr /*0x49132a*/
                                                                                              + 4))(
           (gamemd::_BlitTransXlat_G *)(this),
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);

}
} // namespace gamemd

// 0x491330
namespace gamemd {
int E4Recv_491330::sub_491330(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{

  return (*(int (**)(_BlitTransXlat_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)&this->vfptr /*0x49135a*/
                                                                                              + 4))(
           (gamemd::_BlitTransXlat_G *)(this),
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);

}
} // namespace gamemd

// 0x491360
namespace gamemd {
int E4Recv_491360::sub_491360(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{

  return (*(int (**)(_BlitTransXlat_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)&this->vfptr /*0x49138a*/
                                                                                              + 4))(
           (gamemd::_BlitTransXlat_G *)(this),
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);

}
} // namespace gamemd

// 0x491670
namespace gamemd {
char E4Recv_491670::sub_491670(unsigned char * a1, char * a2, int a4, int a5, int a6, int a7, int a8, int a9)
{

  char result; // al
  int v12; // edi

  result = a4; /*0x491670*/
  if ( a4 > 0 ) /*0x491676*/
  {
    v12 = a4; /*0x491683*/
    do /*0x49169a*/
    {
      result = *a2++; /*0x491685*/
      if ( result ) /*0x49168a*/
      {
        result = *(unsigned char *)(*(unsigned int *)&this->M4 + (uint8_t)*a1); /*0x491693*/
        *a1 = result; /*0x491696*/
      }
      ++a1; /*0x491698*/
      --v12; /*0x491699*/
    }
    while ( v12 ); /*0x49169a*/
  }
  return result; /*0x49169f*/

}
} // namespace gamemd

// 0x4916B0
namespace gamemd {
int E4Recv_4916B0::sub_4916B0(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{

  return (*(int (**)(_BlitTransRemapDest_E *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)this->__pad_0 + 4))( /*0x4916da*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);

}
} // namespace gamemd

// 0x4916E0
namespace gamemd {
int E4Recv_4916E0::sub_4916E0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{

  return (*(int (**)(_BlitTransRemapDest_E *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)this->__pad_0 + 4))( /*0x49170a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);

}
} // namespace gamemd

// 0x491710
namespace gamemd {
int E4Recv_491710::sub_491710(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{

  return (*(int (**)(_BlitTransRemapDest_E *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)this->__pad_0 + 4))( /*0x49173a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);

}
} // namespace gamemd

// 0x491740
namespace gamemd {
unsigned char E4Recv_491740::sub_491740(unsigned char * a1, unsigned char * a2, int a4, int a5, int a6, int a7, int a8, int a9)
{

  unsigned int result; // eax
  int v12; // edi

  result = a4; /*0x491740*/
  if ( a4 > 0 ) /*0x491746*/
  {
    v12 = a4; /*0x491754*/
    do /*0x49177d*/
    {
      LOBYTE(result) = *a2++; /*0x491756*/
      if ( (unsigned char)result ) /*0x49175f*/
      {
        result = *(uint8_t *)(*(unsigned int *)&this->M4 + (uint8_t)result); /*0x491770*/
        LOBYTE(result) = *(unsigned char *)(result + *((unsigned int *)this + 2)); /*0x491776*/
        *a1 = result; /*0x491779*/
      }
      ++a1; /*0x49177b*/
      --v12; /*0x49177c*/
    }
    while ( v12 ); /*0x49177d*/
  }
  return result; /*0x491783*/

}
} // namespace gamemd

// 0x491790
namespace gamemd {
int E4Recv_491790::sub_491790(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{

  return (*(int (**)(_BlitTransRemapXlat_E *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)this->__pad_0 + 4))( /*0x4917ba*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);

}
} // namespace gamemd

// 0x4917C0
namespace gamemd {
int E4Recv_4917C0::sub_4917C0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{

  return (*(int (**)(_BlitTransRemapXlat_E *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)this->__pad_0 + 4))( /*0x4917ea*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);

}
} // namespace gamemd

// 0x4917F0
namespace gamemd {
int E4Recv_4917F0::sub_4917F0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{

  return (*(int (**)(_BlitTransRemapXlat_E *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)this->__pad_0 + 4))( /*0x49181a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);

}
} // namespace gamemd

// 0x491820
namespace gamemd {
int E4Recv_491820::sub_491820(int a2, unsigned char * a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{

  int result; // eax
  int v13; // esi
  int v16; // edi
  uint8_t v17; // al
  uint8_t v18; // [esp+18h] [ebp+Ch]

  result = a5; /*0x491820*/
  v13 = a2; /*0x49182a*/
  if ( a5 <= 0 ) /*0x491833*/
  {
    v16 = a4; /*0x491856*/
  }
  else
  {
    do /*0x491848*/
    {
      if ( *a3++ ) /*0x491835*/
        --result; /*0x491845*/
      else
        result -= *a3++; /*0x491840*/
    }
    while ( result > 0 ); /*0x491848*/
    result = -result; /*0x49184e*/
    v13 = result + a2; /*0x491850*/
    v16 = a4 - result; /*0x491852*/
  }
  while ( v16 > 0 ) /*0x49185c*/
  {
    v17 = *a3++; /*0x49185e*/
    v18 = v17; /*0x491863*/
    if ( v17 ) /*0x491867*/
    {
      result = *(unsigned int *)&this->M4; /*0x491883*/
      ++v13; /*0x49188c*/
      --v16; /*0x49188d*/
      *(unsigned char *)(v13 - 1) = *(unsigned char *)(result + v18); /*0x491891*/
    }
    else
    {
      LOBYTE(result) = *a3++; /*0x491869*/
      result = (uint8_t)result; /*0x491874*/
      v16 -= (uint8_t)result; /*0x491879*/
      v13 += (uint8_t)result; /*0x49187b*/
    }
  }
  return result; /*0x491898*/

}
} // namespace gamemd

// 0x4918A0
namespace gamemd {
int E4Recv_4918A0::sub_4918A0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{

  return (*(int (**)(_RLEBlitTransXlat_E *, int, int, int, int, int, int, int, int, int, int))(*(unsigned int *)this->__pad_0 + 4))( /*0x4918d7*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);

}
} // namespace gamemd

// 0x4918E0
namespace gamemd {
char E4Recv_4918E0::sub_4918E0(int arg0, unsigned char * a2, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{

  int v13; // esi
  int v14; // ecx
  int v15; // eax
  int v17; // edi
  uint8_t v18; // al

  v13 = arg0; /*0x4918e9*/
  v14 = *(unsigned int *)this->m_4; /*0x4918f1*/
  v15 = a5; /*0x4918f3*/
  if ( a5 <= 0 ) /*0x4918f9*/
  {
    v17 = a4; /*0x49191c*/
  }
  else
  {
    do /*0x49190e*/
    {
      if ( *a2++ ) /*0x4918fb*/
        --v15; /*0x49190b*/
      else
        v15 -= *a2++; /*0x491906*/
    }
    while ( v15 > 0 ); /*0x49190e*/
    v15 = -v15; /*0x491914*/
    v13 = v15 + arg0; /*0x491916*/
    v17 = a4 - v15; /*0x491918*/
  }
  while ( v17 > 0 ) /*0x491922*/
  {
    v18 = *a2++; /*0x491924*/
    if ( v18 ) /*0x49192d*/
    {
      ++v13; /*0x491950*/
      --v17; /*0x491951*/
      LOBYTE(v15) = *(unsigned char *)(*(uint8_t *)(v18 + v14) + this->M8); /*0x491958*/
      *(unsigned char *)(v13 - 1) = v15; /*0x49195b*/
    }
    else
    {
      LOBYTE(v15) = *a2++; /*0x49192f*/
      v17 -= (uint8_t)v15; /*0x49193f*/
      v13 += (uint8_t)v15; /*0x491941*/
    }
  }
  return v15; /*0x491962*/

}
} // namespace gamemd

// 0x491970
namespace gamemd {
int E4Recv_491970::sub_491970(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{

  return (*(int (**)(_RLEBlitTransZRemapXlat_E *, int, int, int, int, int, int, int, int, int, int))(*(unsigned int *)this->__pad_0 + 4))( /*0x4919a7*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);

}
} // namespace gamemd

// 0x4919B0
namespace gamemd {
int E4Recv_4919B0::sub_4919B0(unsigned char * a1, unsigned char * a2, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{

  int result; // eax
  uint8_t *v13; // esi
  int v16; // edi
  int v18; // ecx

  result = a5; /*0x4919b0*/
  v13 = (uint8_t *)(a1); /*0x4919ba*/
  if ( a5 <= 0 ) /*0x4919c3*/
  {
    v16 = a4; /*0x4919e6*/
  }
  else
  {
    do /*0x4919d8*/
    {
      if ( *a2++ ) /*0x4919c5*/
        --result; /*0x4919d5*/
      else
        result -= *a2++; /*0x4919d0*/
    }
    while ( result > 0 ); /*0x4919d8*/
    result = -result; /*0x4919de*/
    v13 = &a1[result]; /*0x4919e0*/
    v16 = a4 - result; /*0x4919e2*/
  }
  while ( v16 > 0 ) /*0x4919ec*/
  {
    if ( *a2++ ) /*0x4919ee*/
    {
      result = *(unsigned int *)&this->M4; /*0x491a0b*/
      v18 = *v13; /*0x491a10*/
      --v16; /*0x491a12*/
      *v13++ = *(unsigned char *)(result + v18); /*0x491a17*/
    }
    else
    {
      LOBYTE(result) = *a2++; /*0x4919f5*/
      result = (uint8_t)result; /*0x491a00*/
      v16 -= (uint8_t)result; /*0x491a05*/
      v13 += (uint8_t)result; /*0x491a07*/
    }
  }
  return result; /*0x491a1e*/

}
} // namespace gamemd

// 0x491A30
namespace gamemd {
int E4Recv_491A30::sub_491A30(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{

  return (*(int (**)(_RLEBlitTransRemapDest_E *, int, int, int, int, int, int, int, int, int, int))(*(unsigned int *)this->__pad_0 + 4))( /*0x491a67*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);

}
} // namespace gamemd

// 0x491A70
namespace gamemd {
char E4Recv_491A70::sub_491A70(int arg0, unsigned char * a2, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{

  int v11; // eax
  int v13; // esi
  int v16; // edi
  uint8_t v17; // al

  v11 = a5; /*0x491a70*/
  v13 = arg0; /*0x491a7a*/
  if ( a5 <= 0 ) /*0x491a83*/
  {
    v16 = a4; /*0x491aa6*/
  }
  else
  {
    do /*0x491a98*/
    {
      if ( *a2++ ) /*0x491a85*/
        --v11; /*0x491a95*/
      else
        v11 -= *a2++; /*0x491a90*/
    }
    while ( v11 > 0 ); /*0x491a98*/
    v11 = -v11; /*0x491a9e*/
    v13 = v11 + arg0; /*0x491aa0*/
    v16 = a4 - v11; /*0x491aa2*/
  }
  while ( v16 > 0 ) /*0x491aac*/
  {
    v17 = *a2++; /*0x491aaf*/
    if ( v17 ) /*0x491ab8*/
    {
      ++v13; /*0x491adf*/
      --v16; /*0x491ae0*/
      LOBYTE(v11) = *(unsigned char *)(*(uint8_t *)(*(unsigned int *)&this->M4 + v17) + *((unsigned int *)this + 2)); /*0x491ae7*/
      *(unsigned char *)(v13 - 1) = v11; /*0x491aea*/
    }
    else
    {
      LOBYTE(v11) = *a2++; /*0x491aba*/
      v16 -= (uint8_t)v11; /*0x491aca*/
      v13 += (uint8_t)v11; /*0x491acc*/
    }
  }
  return v11; /*0x491af2*/

}
} // namespace gamemd

// 0x491B00
namespace gamemd {
int E4Recv_491B00::sub_491B00(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{

  return (*(int (**)(_RLEBlitTransRemapXlat_E *, int, int, int, int, int, int, int, int, int, int))(*(unsigned int *)this->__pad_0 + 4))( /*0x491b37*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);

}
} // namespace gamemd

// 0x491C10
namespace gamemd {
int E4Recv_491C10::sub_491C10(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{

  return (*(int (**)(_RLEBlitTransXlatZRead_E *, int, int, int, int, int, int, int, int, int, int))(*(unsigned int *)this->__pad_0 + 4))( /*0x491c47*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);

}
} // namespace gamemd

// 0x491D50
namespace gamemd {
int E4Recv_491D50::sub_491D50(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{

  return (*(int (**)(_RLEBlitTransZRemapXlatZRead_E *, int, int, int, int, int, int, int, int, int, int))(*(unsigned int *)this->__pad_0 + 4))( /*0x491d87*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);

}
} // namespace gamemd

// 0x491E60
namespace gamemd {
int E4Recv_491E60::sub_491E60(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{

  return (*(int (**)(_RLEBlitTransRemapDestZRead_E *, int, int, int, int, int, int, int, int, int, int))(*(unsigned int *)this->__pad_0 + 4))( /*0x491e97*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);

}
} // namespace gamemd

// 0x491F90
namespace gamemd {
int E4Recv_491F90::sub_491F90(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{

  return (*(int (**)(_RLEBlitTransRemapXlatZRead_E *, int, int, int, int, int, int, int, int, int, int))(*(unsigned int *)this->__pad_0 + 4))( /*0x491fc7*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);

}
} // namespace gamemd

// 0x4920C0
namespace gamemd {
int E4Recv_4920C0::sub_4920C0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{

  return (*(int (**)(_RLEBlitTransXlatZReadWrite_E *, int, int, int, int, int, int, int, int, int, int))(*(unsigned int *)this->__pad_0 + 4))( /*0x4920f7*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);

}
} // namespace gamemd

// 0x492210
namespace gamemd {
int E4Recv_492210::sub_492210(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{

  return (*(int (**)(_RLEBlitTransZRemapXlatZReadWrite_E *, int, int, int, int, int, int, int, int, int, int))(*(unsigned int *)this->__pad_0 + 4))( /*0x492247*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);

}
} // namespace gamemd

// 0x492330
namespace gamemd {
int E4Recv_492330::sub_492330(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{

  return (*(int (**)(_RLEBlitTransRemapDestZReadWrite_E *, int, int, int, int, int, int, int, int, int, int))(*(unsigned int *)this->__pad_0 + 4))( /*0x492367*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);

}
} // namespace gamemd

// 0x492480
namespace gamemd {
int E4Recv_492480::sub_492480(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{

  return (*(int (**)(_RLEBlitTransRemapXlatZReadWrite_E *, int, int, int, int, int, int, int, int, int, int))(*(unsigned int *)this->__pad_0 + 4))( /*0x4924b7*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);

}
} // namespace gamemd

// 0x4924C0
namespace gamemd {
void E4Recv_4924C0::sub_4924C0(int a2, unsigned char * a3, int a4, int a5, int a6, int a7, int a8, int a9)
{

  int v9; // esi
  uint8_t v12; // [esp+14h] [ebp+Ch]

  v9 = a4; /*0x4924c1*/
  if ( a4 > 0 ) /*0x4924ca*/
  {
    do /*0x4924f5*/
    {
      v12 = *a3++; /*0x4924da*/
      a2 += 2; /*0x4924e3*/
      --v9; /*0x4924ec*/
      *(unsigned short *)(a2 - 2) = *(unsigned short *)(*(unsigned int *)&this->M4 + 2 * v12); /*0x4924f1*/
    }
    while ( v9 ); /*0x4924f5*/
  }

}
} // namespace gamemd

// 0x492500
namespace gamemd {
int E4Recv_492500::sub_492500(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{

  return (*(int (**)(_BlitPlainXlat_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)&this->vfptr /*0x49252a*/
                                                                                              + 4))(
           (gamemd::_BlitPlainXlat_G *)(this),
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);

}
} // namespace gamemd

// 0x492530
namespace gamemd {
int E4Recv_492530::sub_492530(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{

  return (*(int (**)(_BlitPlainXlat_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)&this->vfptr /*0x49255a*/
                                                                                              + 4))(
           (gamemd::_BlitPlainXlat_G *)(this),
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);

}
} // namespace gamemd

// 0x492560
namespace gamemd {
int E4Recv_492560::sub_492560(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{

  return (*(int (**)(_BlitPlainXlat_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)&this->vfptr /*0x49258a*/
                                                                                              + 4))(
           (gamemd::_BlitPlainXlat_G *)(this),
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);

}
} // namespace gamemd

// 0x492590
namespace gamemd {
char E4Recv_492590::sub_492590(unsigned short * a1, unsigned char * a2, int a4, int a5, int a6, int a7, int a8, int a9)
{

  int v9; // edi
  int16_t v10; // ax
  int v13; // ebp

  v9 = *(unsigned int *)this->m_4; /*0x492594*/
  LOBYTE(v10) = a4; /*0x492596*/
  if ( a4 > 0 ) /*0x49259c*/
  {
    v13 = a4; /*0x4925a9*/
    do /*0x4925d2*/
    {
      LOBYTE(v10) = *a2++; /*0x4925ab*/
      if ( (unsigned char)v10 ) /*0x4925b4*/
      {
        v10 = *(unsigned short *)(this->M8 + 2 * *(uint8_t *)((uint8_t)v10 + v9)); /*0x4925c7*/
        *a1 = v10; /*0x4925cb*/
      }
      ++a1; /*0x4925ce*/
      --v13; /*0x4925d1*/
    }
    while ( v13 ); /*0x4925d2*/
  }
  return v10; /*0x4925d7*/

}
} // namespace gamemd

// 0x4925E0
namespace gamemd {
int E4Recv_4925E0::sub_4925E0(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{

  return (*(int (**)(_BlitTransZRemapXlat_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)&this->vfptr + 4))( (gamemd::_BlitTransZRemapXlat_G *)(/*0x49260a*/
           this),
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);

}
} // namespace gamemd

// 0x492610
namespace gamemd {
int E4Recv_492610::sub_492610(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{

  return (*(int (**)(_BlitTransZRemapXlat_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)&this->vfptr + 4))( (gamemd::_BlitTransZRemapXlat_G *)(/*0x49263a*/
           this),
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);

}
} // namespace gamemd

// 0x492640
namespace gamemd {
int E4Recv_492640::sub_492640(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{

  return (*(int (**)(_BlitTransZRemapXlat_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)&this->vfptr + 4))( (gamemd::_BlitTransZRemapXlat_G *)(/*0x49266a*/
           this),
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);

}
} // namespace gamemd

// 0x492670
namespace gamemd {
char E4Recv_492670::sub_492670(unsigned short * a2, unsigned char * a3, int a4, int a5, int a6, int a7, int a8, int a9)
{

  int16_t v9; // ax
  int v12; // edi

  LOBYTE(v9) = a4; /*0x492670*/
  if ( a4 > 0 ) /*0x492676*/
  {
    v12 = a4; /*0x492682*/
    do /*0x49269c*/
    {
      LOBYTE(v9) = *a3++; /*0x492684*/
      if ( (unsigned char)v9 ) /*0x492689*/
      {
        v9 = *(unsigned short *)&this->M4 & (*a2 >> 1); /*0x492691*/
        *a2 = v9; /*0x492695*/
      }
      ++a2; /*0x492698*/
      --v12; /*0x49269b*/
    }
    while ( v12 ); /*0x49269c*/
  }
  return v9; /*0x4926a0*/

}
} // namespace gamemd

// 0x4926B0
namespace gamemd {
int E4Recv_4926B0::sub_4926B0(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{

  return (*(int (**)(_BlitTransDarken_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)&this->vfptr /*0x4926da*/
                                                                                                + 4))(
           (gamemd::_BlitTransDarken_G *)(this),
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);

}
} // namespace gamemd

// 0x4926E0
namespace gamemd {
int E4Recv_4926E0::sub_4926E0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{

  return (*(int (**)(_BlitTransDarken_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)&this->vfptr /*0x49270a*/
                                                                                                + 4))(
           (gamemd::_BlitTransDarken_G *)(this),
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);

}
} // namespace gamemd

// 0x492710
namespace gamemd {
int E4Recv_492710::sub_492710(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{

  return (*(int (**)(_BlitTransDarken_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)&this->vfptr /*0x49273a*/
                                                                                                + 4))(
           (gamemd::_BlitTransDarken_G *)(this),
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);

}
} // namespace gamemd

// 0x492740
namespace gamemd {
char sub_492740(int a1, int a2, unsigned short * a3, unsigned char * a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  int v10; // eax
  int v13; // ebx
  int v14; // eax
  int16_t v15; // bp
  uint8_t v17; // [esp+Ch] [ebp+Ch]

  (v10) = ((v10) & ~0xFF) | ((unsigned int)(a5) & 0xFF); /*0x492740*/
  if ( a5 > 0 ) /*0x492746*/
  {
    v13 = a5; /*0x492754*/
    do /*0x492791*/
    {
      (v10) = ((v10) & ~0xFF) | ((unsigned int)(*a4++) & 0xFF); /*0x492756*/
      v17 = v10; /*0x49275b*/
      if ( (unsigned char)v10 ) /*0x49275f*/
      {
        (a2) = ((a2) & ~0xFFFF) | ((unsigned int)(*((unsigned short *)a1 + 4)) & 0xFFFF); /*0x492768*/
        v14 = (uint16_t)*a3; /*0x492776*/
        (v14) = ((v14) & ~0xFFFF) | ((unsigned int)((uint16_t)v14 >> 2) & 0xFFFF); /*0x492779*/
        v10 = a2 & v14; /*0x492781*/
        v15 = a2 & (*(unsigned short *)(a1->m_4 + 2 * v17) >> 2); /*0x492783*/
        a2 = 3 * v10; /*0x492785*/
        *a3 = 3 * v10 + v15; /*0x49278a*/
      }
      ++a3; /*0x49278d*/
      --v13; /*0x492790*/
    }
    while ( v13 ); /*0x492791*/
  }
  return v10; /*0x492797*/
}
} // namespace gamemd

// 0x4927A0
namespace gamemd {
int E4Recv_4927A0::sub_4927A0(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{

  return (*(int (**)(_BlitTransLucent75_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)&this->vfptr /*0x4927ca*/
                                                                                                  + 4))(
           (gamemd::_BlitTransLucent75_G *)(this),
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);

}
} // namespace gamemd

// 0x4927D0
namespace gamemd {
int E4Recv_4927D0::sub_4927D0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{

  return (*(int (**)(_BlitTransLucent75_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)&this->vfptr /*0x4927fa*/
                                                                                                  + 4))(
           (gamemd::_BlitTransLucent75_G *)(this),
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);

}
} // namespace gamemd

// 0x492800
namespace gamemd {
int E4Recv_492800::sub_492800(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{

  return (*(int (**)(_BlitTransLucent75_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)&this->vfptr /*0x49282a*/
                                                                                                  + 4))(
           (gamemd::_BlitTransLucent75_G *)(this),
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);

}
} // namespace gamemd

// 0x492830
namespace gamemd {
unsigned int E4Recv_492830::sub_492830(unsigned short * a2, unsigned char * a3, int a4, int a5, int a6, int a7, int a8, int a9)
{

  int m_8_low; // ecx
  unsigned int result; // eax
  int m_4; // [esp+10h] [ebp-4h]

  m_4 = this->M4; /*0x49284b*/
  m_8_low = LOWORD(this->u32_8); /*0x492854*/
  do /*0x49287f*/
  {
    result = (uint8_t)*a3; /*0x49285c*/
    if ( *a3 ) /*0x49285c*/
    {
      LOWORD(result) = *(unsigned short *)(m_4 + 2 * result); /*0x492862*/
      result = (m_8_low & ((uint16_t)*a2 >> 1)) + (m_8_low & (result >> 1)); /*0x492873*/
      *a2 = result; /*0x492875*/
    }
    ++a3; /*0x492878*/
    ++a2; /*0x492879*/
  }
  while ( a4-- > 1 ); /*0x49287f*/
  return result; /*0x492881*/

}
} // namespace gamemd

// 0x492890
namespace gamemd {
int E4Recv_492890::sub_492890(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{

  return (*(int (**)(_BlitTransLucent50_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)&this->vfptr /*0x4928ba*/
                                                                                                  + 4))(
           (gamemd::_BlitTransLucent50_G *)(this),
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);

}
} // namespace gamemd

// 0x4928C0
namespace gamemd {
int E4Recv_4928C0::sub_4928C0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{

  return (*(int (**)(_BlitTransLucent50_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)&this->vfptr /*0x4928ea*/
                                                                                                  + 4))(
           (gamemd::_BlitTransLucent50_G *)(this),
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);

}
} // namespace gamemd

// 0x4928F0
namespace gamemd {
int E4Recv_4928F0::sub_4928F0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{

  return (*(int (**)(_BlitTransLucent50_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)&this->vfptr /*0x49291a*/
                                                                                                  + 4))(
           (gamemd::_BlitTransLucent50_G *)(this),
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);

}
} // namespace gamemd

// 0x492920
namespace gamemd {
char E4Recv_492920::sub_492920(unsigned short * a2, unsigned char * a3, int a4, int a5, int a6, int a7, int a8, int a9)
{

  int16_t v9; // ax
  int v12; // ebx

  LOBYTE(v9) = a4; /*0x492920*/
  if ( a4 > 0 ) /*0x492926*/
  {
    v12 = a4; /*0x492934*/
    do /*0x492971*/
    {
      LOBYTE(v9) = *a3++; /*0x492936*/
      if ( (unsigned char)v9 ) /*0x49293f*/
      {
        v9 = (this->M8 & (*a2 >> 2)) + 3 * (this->M8 & (*(unsigned short *)(this->m_4 + 2 * (uint8_t)v9) >> 2)); /*0x492968*/
        *a2 = v9; /*0x49296a*/
      }
      ++a2; /*0x49296d*/
      --v12; /*0x492970*/
    }
    while ( v12 ); /*0x492971*/
  }
  return v9; /*0x492977*/

}
} // namespace gamemd

// 0x492980
namespace gamemd {
int E4Recv_492980::sub_492980(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{

  return (*(int (**)(_BlitTransLucent25_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)this->__pad_0 /*0x4929aa*/
                                                                                                  + 4))(
           (gamemd::_BlitTransLucent25_G *)(this),
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);

}
} // namespace gamemd

// 0x4929B0
namespace gamemd {
int E4Recv_4929B0::sub_4929B0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{

  return (*(int (**)(_BlitTransLucent25_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)this->__pad_0 /*0x4929da*/
                                                                                                  + 4))(
           (gamemd::_BlitTransLucent25_G *)(this),
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);

}
} // namespace gamemd

// 0x4929E0
namespace gamemd {
int E4Recv_4929E0::sub_4929E0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{

  return (*(int (**)(_BlitTransLucent25_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)this->__pad_0 /*0x492a0a*/
                                                                                                  + 4))(
           (gamemd::_BlitTransLucent25_G *)(this),
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);

}
} // namespace gamemd

// 0x492A10
namespace gamemd {
unsigned short * E4Recv_492A10::sub_492A10(unsigned short * a1, unsigned char * a2, int a4, int argC, unsigned short * a5, int a7, int a8, int a9)
{

  uint16_t *result; // eax
  int v12; // ebp
  Stream *v13; // edx
  uint16_t v14; // bx

  result = (uint16_t *)(a5); /*0x492a14*/
  if ( a4 > 0 ) /*0x492a1a*/
  {
    v12 = a4; /*0x492a28*/
    v13 = (Stream *)(g_ZBufferDescriptor); /*0x492a2a*/
    do /*0x492a61*/
    {
      v14 = *result++; /*0x492a32*/
      if ( argC < v14 ) /*0x492a3c*/
      {
        *a1 = *(unsigned short *)(*(unsigned int *)&this->m_1[3] + 2 * *a2); /*0x492a49*/
        v13 = (Stream *)(g_ZBufferDescriptor); /*0x492a4c*/
      }
      ++a2; /*0x492a55*/
      ++a1; /*0x492a56*/
      if ( (unsigned int)result >= v13[1].Stream_field_08 ) /*0x492a5b*/
        result = (uint16_t *)((char *)result - v13[1].Stream_field_0C); /*0x492a5d*/
      --v12; /*0x492a60*/
    }
    while ( v12 ); /*0x492a61*/
  }
  return result; /*0x492a67*/

}
} // namespace gamemd

// 0x492A70
namespace gamemd {
int E4Recv_492A70::sub_492A70(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{

  return (*(int (**)(_BlitPlainXlatZRead_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)this->__pad_0 + 4))( (gamemd::_BlitPlainXlatZRead_G *)(/*0x492a9a*/
           this),
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);

}
} // namespace gamemd

// 0x492AA0
namespace gamemd {
int E4Recv_492AA0::sub_492AA0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{

  return (*(int (**)(_BlitPlainXlatZRead_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)this->__pad_0 + 4))( (gamemd::_BlitPlainXlatZRead_G *)(/*0x492aca*/
           this),
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);

}
} // namespace gamemd

// 0x492AD0
namespace gamemd {
int E4Recv_492AD0::sub_492AD0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{

  return (*(int (**)(_BlitPlainXlatZRead_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)this->__pad_0 + 4))( (gamemd::_BlitPlainXlatZRead_G *)(/*0x492afa*/
           this),
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);

}
} // namespace gamemd

// 0x492B00
namespace gamemd {
unsigned short * E4Recv_492B00::sub_492B00(unsigned short * a2, unsigned char * a3, int a4, int a5, unsigned short * a6, int a7, int a8, int a9)
{

  uint16_t *result; // eax
  Stream *v11; // esi
  int v13; // ebp
  uint16_t v14; // dx

  result = (uint16_t *)(a6); /*0x492b04*/
  if ( a4 > 0 ) /*0x492b0a*/
  {
    v11 = (Stream *)(g_ZBufferDescriptor); /*0x492b13*/
    v13 = a4; /*0x492b1e*/
    do /*0x492b61*/
    {
      v14 = *result++; /*0x492b22*/
      if ( a5 < v14 && *a3 ) /*0x492b32*/
      {
        *a2 = *(unsigned short *)(*(unsigned int *)&this->m_1[3] + 2 * (uint8_t)*a3); /*0x492b49*/
        v11 = (Stream *)(g_ZBufferDescriptor); /*0x492b4c*/
      }
      ++a3; /*0x492b55*/
      ++a2; /*0x492b56*/
      if ( (unsigned int)result >= v11[1].Stream_field_08 ) /*0x492b5b*/
        result = (uint16_t *)((char *)result - v11[1].Stream_field_0C); /*0x492b5d*/
      --v13; /*0x492b60*/
    }
    while ( v13 ); /*0x492b61*/
  }
  return result; /*0x492b67*/

}
} // namespace gamemd

// 0x492B70
namespace gamemd {
int E4Recv_492B70::sub_492B70(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{

  return (*(int (**)(_BlitTransXlatZRead_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)this->__pad_0 + 4))( (gamemd::_BlitTransXlatZRead_G *)(/*0x492b9a*/
           this),
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);

}
} // namespace gamemd

// 0x492BA0
namespace gamemd {
int E4Recv_492BA0::sub_492BA0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{

  return (*(int (**)(_BlitTransXlatZRead_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)this->__pad_0 + 4))( (gamemd::_BlitTransXlatZRead_G *)(/*0x492bca*/
           this),
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);

}
} // namespace gamemd

// 0x492BD0
namespace gamemd {
int E4Recv_492BD0::sub_492BD0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{

  return (*(int (**)(_BlitTransXlatZRead_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)this->__pad_0 + 4))( (gamemd::_BlitTransXlatZRead_G *)(/*0x492bfa*/
           this),
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);

}
} // namespace gamemd

// 0x492C00
namespace gamemd {
unsigned short * E4Recv_492C00::sub_492C00(unsigned short * a1, unsigned char * a2, int a4, int argC, unsigned short * a5, int a7, int a8, int a9)
{

  uint16_t *result; // eax
  Stream *v13; // edi
  uint16_t v14; // cx
  int v15; // [esp+4h] [ebp-4h]
  uint16_t *v16; // [esp+1Ch] [ebp+14h]

  result = (uint16_t *)(a5); /*0x492c04*/
  v15 = *(unsigned int *)this->m_4; /*0x492c0d*/
  if ( a4 > 0 ) /*0x492c17*/
  {
    v13 = (Stream *)(g_ZBufferDescriptor); /*0x492c24*/
    v16 = (uint16_t *)a4; /*0x492c2a*/
    do /*0x492c82*/
    {
      v14 = *result++; /*0x492c34*/
      if ( argC < v14 && *a2 ) /*0x492c42*/
      {
        *a1 = *(unsigned short *)(this->m_8 + 2 * *(uint8_t *)((uint8_t)*a2 + v15)); /*0x492c62*/
        v13 = (Stream *)(g_ZBufferDescriptor); /*0x492c65*/
      }
      ++a2; /*0x492c6e*/
      ++a1; /*0x492c6f*/
      if ( (unsigned int)result >= v13[1].Stream_field_08 ) /*0x492c74*/
        result = (uint16_t *)((char *)result - v13[1].Stream_field_0C); /*0x492c76*/
      v16 = (uint16_t *)((char *)v16 - 1); /*0x492c7e*/
    }
    while ( v16 ); /*0x492c82*/
  }
  return result; /*0x492c87*/

}
} // namespace gamemd

// 0x492C90
namespace gamemd {
int E4Recv_492C90::sub_492C90(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{

  return (*(int (**)(_BlitTransZRemapXlatZRead_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)this->__pad_0 + 4))( (gamemd::_BlitTransZRemapXlatZRead_G *)(/*0x492cba*/
           this),
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);

}
} // namespace gamemd

// 0x492CC0
namespace gamemd {
int E4Recv_492CC0::sub_492CC0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{

  return (*(int (**)(_BlitTransZRemapXlatZRead_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)this->__pad_0 + 4))( (gamemd::_BlitTransZRemapXlatZRead_G *)(/*0x492cea*/
           this),
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);

}
} // namespace gamemd

// 0x492CF0
namespace gamemd {
int E4Recv_492CF0::sub_492CF0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{

  return (*(int (**)(_BlitTransZRemapXlatZRead_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)this->__pad_0 + 4))( (gamemd::_BlitTransZRemapXlatZRead_G *)(/*0x492d1a*/
           this),
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);

}
} // namespace gamemd

// 0x492D20
namespace gamemd {
unsigned short * E4Recv_492D20::sub_492D20(unsigned short * a1, unsigned char * a2, int a4, int argC, unsigned short * a5, int a7, int a8, int a9)
{

  uint16_t *result; // eax
  Stream *v10; // esi
  int v12; // ebx
  uint16_t v14; // bp

  result = (uint16_t *)(a5); /*0x492d24*/
  if ( a4 > 0 ) /*0x492d2a*/
  {
    v10 = (Stream *)(g_ZBufferDescriptor); /*0x492d2f*/
    v12 = a4; /*0x492d3a*/
    do /*0x492d75*/
    {
      v14 = *result++; /*0x492d42*/
      if ( argC < v14 && *a2 ) /*0x492d4e*/
      {
        *a1 = *(unsigned short *)&this->m_2[2] & (*a1 >> 1); /*0x492d5d*/
        v10 = (Stream *)(g_ZBufferDescriptor); /*0x492d60*/
      }
      ++a2; /*0x492d69*/
      ++a1; /*0x492d6a*/
      if ( (unsigned int)result >= v10[1].Stream_field_08 ) /*0x492d6f*/
        result = (uint16_t *)((char *)result - v10[1].Stream_field_0C); /*0x492d71*/
      --v12; /*0x492d74*/
    }
    while ( v12 ); /*0x492d75*/
  }
  return result; /*0x492d7b*/

}
} // namespace gamemd

// 0x492D80
namespace gamemd {
int E4Recv_492D80::sub_492D80(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{

  return (*(int (**)(_BlitTransDarkenZRead_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)this->__pad_0 + 4))( (gamemd::_BlitTransDarkenZRead_G *)(/*0x492daa*/
           this),
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);

}
} // namespace gamemd

// 0x492DB0
namespace gamemd {
int E4Recv_492DB0::sub_492DB0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{

  return (*(int (**)(_BlitTransDarkenZRead_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)this->__pad_0 + 4))( (gamemd::_BlitTransDarkenZRead_G *)(/*0x492dda*/
           this),
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);

}
} // namespace gamemd

// 0x492DE0
namespace gamemd {
int E4Recv_492DE0::sub_492DE0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{

  return (*(int (**)(_BlitTransDarkenZRead_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)this->__pad_0 + 4))( (gamemd::_BlitTransDarkenZRead_G *)(/*0x492e0a*/
           this),
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);

}
} // namespace gamemd

// 0x492E10
namespace gamemd {
int E4Recv_492E10::sub_492E10(unsigned short * a1, unsigned char * a2, int a4, int argC, unsigned short * a5, int a7, int a8, int a9)
{

  int result; // eax
  Stream *v12; // esi
  uint16_t v14; // ax
  uint16_t *v15; // [esp+14h] [ebp+14h]

  result = a4; /*0x492e10*/
  if ( a4 > 0 ) /*0x492e1a*/
  {
    v12 = (Stream *)(g_ZBufferDescriptor); /*0x492e23*/
    v15 = (uint16_t *)a4; /*0x492e2e*/
    do /*0x492e95*/
    {
      v14 = *a5++; /*0x492e38*/
      if ( argC < v14 && *a2 ) /*0x492e46*/
      {
        *a1 = 3 * (*(unsigned int *)this->m_8 & (*a1 >> 2)) + (*(unsigned int *)this->m_8 & (*(unsigned short *)(this->m_4 + 2 * (uint8_t)*a2) >> 2)); /*0x492e75*/
        v12 = (Stream *)(g_ZBufferDescriptor); /*0x492e78*/
      }
      ++a2; /*0x492e81*/
      ++a1; /*0x492e82*/
      if ( (unsigned int)a5 >= v12[1].Stream_field_08 ) /*0x492e87*/
        a5 = (unsigned short *)((uint16_t *)((char *)a5 - v12[1].Stream_field_0C)); /*0x492e89*/
      result = (int)v15 - 1; /*0x492e90*/
      v15 = (uint16_t *)((char *)v15 - 1); /*0x492e91*/
    }
    while ( v15 ); /*0x492e95*/
  }
  return result; /*0x492e9b*/

}
} // namespace gamemd

// 0x492EA0
namespace gamemd {
int E4Recv_492EA0::sub_492EA0(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{

  return (*(int (**)(_BlitTransLucent75ZRead_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)this->__pad_0 + 4))( (gamemd::_BlitTransLucent75ZRead_G *)(/*0x492eca*/
           this),
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);

}
} // namespace gamemd

// 0x492ED0
namespace gamemd {
int E4Recv_492ED0::sub_492ED0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{

  return (*(int (**)(_BlitTransLucent75ZRead_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)this->__pad_0 + 4))( (gamemd::_BlitTransLucent75ZRead_G *)(/*0x492efa*/
           this),
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);

}
} // namespace gamemd

// 0x492F00
namespace gamemd {
int E4Recv_492F00::sub_492F00(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{

  return (*(int (**)(_BlitTransLucent75ZRead_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)this->__pad_0 + 4))( (gamemd::_BlitTransLucent75ZRead_G *)(/*0x492f2a*/
           this),
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);

}
} // namespace gamemd

// 0x492F30
namespace gamemd {
unsigned short * E4Recv_492F30::sub_492F30(unsigned short * a1, unsigned char * a2, int a4, int argC, unsigned short * a5, int a7, int a8, int a9)
{

  uint16_t *result; // eax
  Stream *v12; // edi
  uint16_t v13; // dx
  uint16_t *v14; // [esp+14h] [ebp+14h]

  result = (uint16_t *)(a5); /*0x492f34*/
  if ( a4 > 0 ) /*0x492f3a*/
  {
    v12 = (Stream *)(g_ZBufferDescriptor); /*0x492f48*/
    v14 = (uint16_t *)a4; /*0x492f4e*/
    do /*0x492fb1*/
    {
      v13 = *result++; /*0x492f58*/
      if ( argC < v13 && *a2 ) /*0x492f66*/
      {
        *a1 = (*(unsigned int *)this->m_8 & (*a1 >> 1)) + (*(unsigned int *)this->m_8 & (*(unsigned short *)(this->m_4 + 2 * (uint8_t)*a2) >> 1)); /*0x492f91*/
        v12 = (Stream *)(g_ZBufferDescriptor); /*0x492f94*/
      }
      ++a2; /*0x492f9d*/
      ++a1; /*0x492f9e*/
      if ( (unsigned int)result >= v12[1].Stream_field_08 ) /*0x492fa3*/
        result = (uint16_t *)((char *)result - v12[1].Stream_field_0C); /*0x492fa5*/
      v14 = (uint16_t *)((char *)v14 - 1); /*0x492fad*/
    }
    while ( v14 ); /*0x492fb1*/
  }
  return result; /*0x492fb7*/

}
} // namespace gamemd

// 0x492FC0
namespace gamemd {
int E4Recv_492FC0::sub_492FC0(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{

  return (*(int (**)(_BlitTransLucent50ZRead_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)this->__pad_0 + 4))( (gamemd::_BlitTransLucent50ZRead_G *)(/*0x492fea*/
           this),
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);

}
} // namespace gamemd

// 0x492FF0
namespace gamemd {
int E4Recv_492FF0::sub_492FF0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{

  return (*(int (**)(_BlitTransLucent50ZRead_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)this->__pad_0 + 4))( (gamemd::_BlitTransLucent50ZRead_G *)(/*0x49301a*/
           this),
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);

}
} // namespace gamemd

// 0x493020
namespace gamemd {
int E4Recv_493020::sub_493020(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{

  return (*(int (**)(_BlitTransLucent50ZRead_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)this->__pad_0 + 4))( (gamemd::_BlitTransLucent50ZRead_G *)(/*0x49304a*/
           this),
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);

}
} // namespace gamemd

// 0x493050
namespace gamemd {
int E4Recv_493050::sub_493050(unsigned short * a1, unsigned char * a2, int a4, int argC, unsigned short * a5, int a7, int a8, int a9)
{

  int result; // eax
  Stream *v12; // esi
  uint16_t v14; // ax
  uint16_t *v15; // [esp+14h] [ebp+14h]

  result = a4; /*0x493050*/
  if ( a4 > 0 ) /*0x49305a*/
  {
    v12 = (Stream *)(g_ZBufferDescriptor); /*0x493063*/
    v15 = (uint16_t *)a4; /*0x49306e*/
    do /*0x4930d5*/
    {
      v14 = *a5++; /*0x493078*/
      if ( argC < v14 && *a2 ) /*0x493086*/
      {
        *a1 = (*(unsigned int *)this->m_8 & (*a1 >> 2)) + 3 * (*(unsigned int *)this->m_8 & (*(unsigned short *)(this->m_4 + 2 * (uint8_t)*a2) >> 2)); /*0x4930b5*/
        v12 = (Stream *)(g_ZBufferDescriptor); /*0x4930b8*/
      }
      ++a2; /*0x4930c1*/
      ++a1; /*0x4930c2*/
      if ( (unsigned int)a5 >= v12[1].Stream_field_08 ) /*0x4930c7*/
        a5 = (unsigned short *)((uint16_t *)((char *)a5 - v12[1].Stream_field_0C)); /*0x4930c9*/
      result = (int)v15 - 1; /*0x4930d0*/
      v15 = (uint16_t *)((char *)v15 - 1); /*0x4930d1*/
    }
    while ( v15 ); /*0x4930d5*/
  }
  return result; /*0x4930db*/

}
} // namespace gamemd

// 0x4930E0
namespace gamemd {
int E4Recv_4930E0::sub_4930E0(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{

  return (*(int (**)(_BlitTransLucent25ZRead_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)this->__pad_0 + 4))( (gamemd::_BlitTransLucent25ZRead_G *)(/*0x49310a*/
           this),
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);

}
} // namespace gamemd

// 0x493110
namespace gamemd {
int E4Recv_493110::sub_493110(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{

  return (*(int (**)(_BlitTransLucent25ZRead_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)this->__pad_0 + 4))( (gamemd::_BlitTransLucent25ZRead_G *)(/*0x49313a*/
           this),
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);

}
} // namespace gamemd

// 0x493140
namespace gamemd {
int E4Recv_493140::sub_493140(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{

  return (*(int (**)(_BlitTransLucent25ZRead_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)this->__pad_0 + 4))( (gamemd::_BlitTransLucent25ZRead_G *)(/*0x49316a*/
           this),
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);

}
} // namespace gamemd

// 0x493170
namespace gamemd {
int E4Recv_493170::sub_493170(unsigned short * a1, unsigned char * a2, int a4, int argC, unsigned short * a5, int a7, int a8, int a9)
{

  int result; // eax
  Stream *v12; // esi
  uint16_t v14; // ax
  uint16_t *v15; // [esp+14h] [ebp+14h]

  result = a4; /*0x493170*/
  if ( a4 > 0 ) /*0x49317a*/
  {
    v12 = (Stream *)(g_ZBufferDescriptor); /*0x493187*/
    v15 = (uint16_t *)a4; /*0x493192*/
    do /*0x4931fe*/
    {
      v14 = *a5++; /*0x49319c*/
      if ( argC < v14 && *a2 ) /*0x4931aa*/
      {
        *a1 = 3 * (*(unsigned int *)this->m_8 & (a1[a9] >> 2)) + (*(unsigned int *)this->m_8 & (*(unsigned short *)(this->m_4 + 2 * (uint8_t)*a2) >> 2)); /*0x4931de*/
        v12 = (Stream *)(g_ZBufferDescriptor); /*0x4931e1*/
      }
      ++a2; /*0x4931ea*/
      ++a1; /*0x4931eb*/
      if ( (unsigned int)a5 >= v12[1].Stream_field_08 ) /*0x4931f0*/
        a5 = (unsigned short *)((uint16_t *)((char *)a5 - v12[1].Stream_field_0C)); /*0x4931f2*/
      result = (int)v15 - 1; /*0x4931f9*/
      v15 = (uint16_t *)((char *)v15 - 1); /*0x4931fa*/
    }
    while ( v15 ); /*0x4931fe*/
  }
  return result; /*0x493204*/

}
} // namespace gamemd

// 0x493210
namespace gamemd {
int E4Recv_493210::sub_493210(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{

  return (*(int (**)(_BlitTransLucent75ZReadWarp_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)this->__pad_0 + 4))( /*0x49323a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);

}
} // namespace gamemd

// 0x493240
namespace gamemd {
int E4Recv_493240::sub_493240(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{

  return (*(int (**)(_BlitTransLucent75ZReadWarp_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)this->__pad_0 + 4))( /*0x49326a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);

}
} // namespace gamemd

// 0x493270
namespace gamemd {
int E4Recv_493270::sub_493270(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{

  return (*(int (**)(_BlitTransLucent75ZReadWarp_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)this->__pad_0 + 4))( /*0x49329a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);

}
} // namespace gamemd

// 0x4932A0
namespace gamemd {
unsigned short * E4Recv_4932A0::sub_4932A0(unsigned short * a1, unsigned char * a2, int a4, int argC, unsigned short * a5, int a7, int a8, int a9)
{

  uint16_t *result; // eax
  Stream *v12; // edi
  uint16_t v13; // dx
  uint16_t *v14; // [esp+14h] [ebp+14h]

  result = (uint16_t *)(a5); /*0x4932a4*/
  if ( a4 > 0 ) /*0x4932aa*/
  {
    v12 = (Stream *)(g_ZBufferDescriptor); /*0x4932bc*/
    v14 = (uint16_t *)a4; /*0x4932c2*/
    do /*0x49332a*/
    {
      v13 = *result++; /*0x4932cc*/
      if ( argC < v13 && *a2 ) /*0x4932da*/
      {
        *a1 = (*(unsigned int *)this->m_8 & (a1[a9] >> 1)) + (*(unsigned int *)this->m_8 & (*(unsigned short *)(this->m_4 + 2 * (uint8_t)*a2) >> 1)); /*0x49330a*/
        v12 = (Stream *)(g_ZBufferDescriptor); /*0x49330d*/
      }
      ++a2; /*0x493316*/
      ++a1; /*0x493317*/
      if ( (unsigned int)result >= v12[1].Stream_field_08 ) /*0x49331c*/
        result = (uint16_t *)((char *)result - v12[1].Stream_field_0C); /*0x49331e*/
      v14 = (uint16_t *)((char *)v14 - 1); /*0x493326*/
    }
    while ( v14 ); /*0x49332a*/
  }
  return result; /*0x493330*/

}
} // namespace gamemd

// 0x493340
namespace gamemd {
int E4Recv_493340::sub_493340(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{

  return (*(int (**)(_BlitTransLucent50ZReadWarp_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)this->__pad_0 + 4))( /*0x49336a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);

}
} // namespace gamemd

// 0x493370
namespace gamemd {
int E4Recv_493370::sub_493370(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{

  return (*(int (**)(_BlitTransLucent50ZReadWarp_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)this->__pad_0 + 4))( /*0x49339a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);

}
} // namespace gamemd

// 0x4933A0
namespace gamemd {
int E4Recv_4933A0::sub_4933A0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{

  return (*(int (**)(_BlitTransLucent50ZReadWarp_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)this->__pad_0 + 4))( /*0x4933ca*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);

}
} // namespace gamemd

// 0x4933D0
namespace gamemd {
int E4Recv_4933D0::sub_4933D0(unsigned short * a1, unsigned char * a2, int a4, int argC, unsigned short * a5, int a7, int a8, int a9)
{

  int result; // eax
  Stream *v12; // esi
  uint16_t v14; // ax
  uint16_t *v15; // [esp+14h] [ebp+14h]

  result = a4; /*0x4933d0*/
  if ( a4 > 0 ) /*0x4933da*/
  {
    v12 = (Stream *)(g_ZBufferDescriptor); /*0x4933e7*/
    v15 = (uint16_t *)a4; /*0x4933f2*/
    do /*0x49345e*/
    {
      v14 = *a5++; /*0x4933fc*/
      if ( argC < v14 && *a2 ) /*0x49340a*/
      {
        *a1 = (*(unsigned int *)this->m_8 & (a1[a9] >> 2)) + 3 * (*(unsigned int *)this->m_8 & (*(unsigned short *)(this->m_4 + 2 * (uint8_t)*a2) >> 2)); /*0x49343e*/
        v12 = (Stream *)(g_ZBufferDescriptor); /*0x493441*/
      }
      ++a2; /*0x49344a*/
      ++a1; /*0x49344b*/
      if ( (unsigned int)a5 >= v12[1].Stream_field_08 ) /*0x493450*/
        a5 = (unsigned short *)((uint16_t *)((char *)a5 - v12[1].Stream_field_0C)); /*0x493452*/
      result = (int)v15 - 1; /*0x493459*/
      v15 = (uint16_t *)((char *)v15 - 1); /*0x49345a*/
    }
    while ( v15 ); /*0x49345e*/
  }
  return result; /*0x493464*/

}
} // namespace gamemd

// 0x493470
namespace gamemd {
int E4Recv_493470::sub_493470(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{

  return (*(int (**)(_BlitTransLucent25ZReadWarp_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)this->__pad_0 + 4))( /*0x49349a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);

}
} // namespace gamemd

// 0x4934A0
namespace gamemd {
int E4Recv_4934A0::sub_4934A0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{

  return (*(int (**)(_BlitTransLucent25ZReadWarp_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)this->__pad_0 + 4))( /*0x4934ca*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);

}
} // namespace gamemd

// 0x4934D0
namespace gamemd {
int E4Recv_4934D0::sub_4934D0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{

  return (*(int (**)(_BlitTransLucent25ZReadWarp_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)this->__pad_0 + 4))( /*0x4934fa*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);

}
} // namespace gamemd

// 0x493500
namespace gamemd {
unsigned short * E4Recv_493500::sub_493500(unsigned short * a1, unsigned char * a2, int a4, int argC, unsigned short * a5, int a7, int a8, int a9)
{

  unsigned short *result; // eax
  Stream *v12; // edi
  unsigned short *v13; // [esp+18h] [ebp+14h]

  result = a5; /*0x493500*/
  if ( a4 > 0 ) /*0x49350d*/
  {
    v12 = (Stream *)(g_ZBufferDescriptor); /*0x49351a*/
    v13 = (unsigned short *)a4; /*0x493520*/
    do /*0x493566*/
    {
      if ( argC < (uint16_t)*result ) /*0x49352f*/
      {
        *a1 = *(unsigned short *)(*(unsigned int *)&this->m_1[3] + 2 * *a2); /*0x49353c*/
        *result = (uint8_t)argC; /*0x493543*/
        v12 = (Stream *)(g_ZBufferDescriptor); /*0x493546*/
      }
      ++result; /*0x49354f*/
      ++a2; /*0x493552*/
      ++a1; /*0x493553*/
      if ( (unsigned int)result >= v12[1].Stream_field_08 ) /*0x493558*/
        result = (unsigned short *)((char *)result - v12[1].Stream_field_0C); /*0x49355a*/
      v13 = (unsigned short *)((char *)v13 - 1); /*0x493562*/
    }
    while ( v13 ); /*0x493566*/
  }
  return result; /*0x49356b*/

}
} // namespace gamemd

// 0x493570
namespace gamemd {
int E4Recv_493570::sub_493570(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{

  return (*(int (**)(_BlitPlainXlatZReadWrite_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)this->__pad_0 + 4))( /*0x49359a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);

}
} // namespace gamemd

// 0x4935A0
namespace gamemd {
int E4Recv_4935A0::sub_4935A0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{

  return (*(int (**)(_BlitPlainXlatZReadWrite_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)this->__pad_0 + 4))( /*0x4935ca*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);

}
} // namespace gamemd

// 0x4935D0
namespace gamemd {
int E4Recv_4935D0::sub_4935D0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{

  return (*(int (**)(_BlitPlainXlatZReadWrite_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)this->__pad_0 + 4))( /*0x4935fa*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);

}
} // namespace gamemd

// 0x493600
namespace gamemd {
unsigned short * E4Recv_493600::sub_493600(unsigned short * a2, unsigned char * a3, int a4, int a5, unsigned short * a6, int a7, int a8, int a9)
{

  unsigned short *result; // eax
  Stream *v10; // esi
  unsigned short *v13; // [esp+14h] [ebp+14h]

  result = a6; /*0x493604*/
  if ( a4 > 0 ) /*0x49360a*/
  {
    v10 = (Stream *)(g_ZBufferDescriptor); /*0x493613*/
    v13 = (unsigned short *)a4; /*0x49361e*/
    do /*0x493670*/
    {
      if ( a5 < (uint16_t)*result && *a3 ) /*0x493633*/
      {
        *a2 = *(unsigned short *)(*(unsigned int *)&this->m_1[3] + 2 * (uint8_t)*a3); /*0x49364a*/
        *result = a5; /*0x49364d*/
        v10 = (Stream *)(g_ZBufferDescriptor); /*0x493650*/
      }
      ++result; /*0x493659*/
      ++a3; /*0x49365c*/
      ++a2; /*0x49365d*/
      if ( (unsigned int)result >= v10[1].Stream_field_08 ) /*0x493662*/
        result = (unsigned short *)((char *)result - v10[1].Stream_field_0C); /*0x493664*/
      v13 = (unsigned short *)((char *)v13 - 1); /*0x49366c*/
    }
    while ( v13 ); /*0x493670*/
  }
  return result; /*0x493676*/

}
} // namespace gamemd

// 0x493680
namespace gamemd {
int E4Recv_493680::sub_493680(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{

  return (*(int (**)(_BlitTransXlatZReadWrite_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)this->__pad_0 + 4))( /*0x4936aa*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);

}
} // namespace gamemd

// 0x4936B0
namespace gamemd {
int E4Recv_4936B0::sub_4936B0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{

  return (*(int (**)(_BlitTransXlatZReadWrite_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)this->__pad_0 + 4))( /*0x4936da*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);

}
} // namespace gamemd

// 0x4936E0
namespace gamemd {
int E4Recv_4936E0::sub_4936E0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{

  return (*(int (**)(_BlitTransXlatZReadWrite_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)this->__pad_0 + 4))( /*0x49370a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);

}
} // namespace gamemd

// 0x493710
namespace gamemd {
unsigned short * E4Recv_493710::sub_493710(unsigned short * a1, unsigned char * a2, int a4, int argC, unsigned short * a5, int a7, int a8, int a9)
{

  unsigned short *result; // eax
  int v10; // ecx
  Stream *v11; // esi
  unsigned short *v15; // [esp+18h] [ebp+14h]

  result = a5; /*0x493715*/
  v10 = *(unsigned int *)this->m_4; /*0x493722*/
  if ( a4 > 0 ) /*0x493724*/
  {
    v11 = (Stream *)(g_ZBufferDescriptor); /*0x49372d*/
    v15 = (unsigned short *)a4; /*0x493738*/
    do /*0x493793*/
    {
      if ( argC < (uint16_t)*result && *a2 ) /*0x49374d*/
      {
        *a1 = *(unsigned short *)(this->m_8 + 2 * *(uint8_t *)((uint8_t)*a2 + v10)); /*0x49376d*/
        *result = argC; /*0x493770*/
        v11 = (Stream *)(g_ZBufferDescriptor); /*0x493773*/
      }
      ++result; /*0x49377c*/
      ++a2; /*0x49377f*/
      ++a1; /*0x493780*/
      if ( (unsigned int)result >= v11[1].Stream_field_08 ) /*0x493785*/
        result = (unsigned short *)((char *)result - v11[1].Stream_field_0C); /*0x493787*/
      v15 = (unsigned short *)((char *)v15 - 1); /*0x49378f*/
    }
    while ( v15 ); /*0x493793*/
  }
  return result; /*0x49379a*/

}
} // namespace gamemd

// 0x4937A0
namespace gamemd {
int E4Recv_4937A0::sub_4937A0(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{

  return (*(int (**)(_BlitTransZRemapXlatZReadWrite_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)this->__pad_0 + 4))( /*0x4937ca*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);

}
} // namespace gamemd

// 0x4937D0
namespace gamemd {
int E4Recv_4937D0::sub_4937D0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{

  return (*(int (**)(_BlitTransZRemapXlatZReadWrite_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)this->__pad_0 + 4))( /*0x4937fa*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);

}
} // namespace gamemd

// 0x493800
namespace gamemd {
int E4Recv_493800::sub_493800(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{

  return (*(int (**)(_BlitTransZRemapXlatZReadWrite_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)this->__pad_0 + 4))( /*0x49382a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);

}
} // namespace gamemd

// 0x493830
namespace gamemd {
unsigned short * E4Recv_493830::sub_493830(unsigned short * a1, unsigned char * a2, int a4, int argC, unsigned short * a5, int a7, int a8, int a9)
{

  unsigned short *result; // eax
  Stream *v10; // esi
  unsigned short *v13; // [esp+14h] [ebp+14h]

  result = a5; /*0x493834*/
  if ( a4 > 0 ) /*0x49383a*/
  {
    v10 = (Stream *)(g_ZBufferDescriptor); /*0x493843*/
    v13 = (unsigned short *)a4; /*0x49384e*/
    do /*0x493894*/
    {
      if ( argC < (uint16_t)*result && *a2 ) /*0x49385f*/
      {
        *a1 = *(unsigned short *)&this->m_2[2] & (*a1 >> 1); /*0x49386e*/
        *result = argC; /*0x493871*/
        v10 = (Stream *)(g_ZBufferDescriptor); /*0x493874*/
      }
      ++result; /*0x49387d*/
      ++a2; /*0x493880*/
      ++a1; /*0x493881*/
      if ( (unsigned int)result >= v10[1].Stream_field_08 ) /*0x493886*/
        result = (unsigned short *)((char *)result - v10[1].Stream_field_0C); /*0x493888*/
      v13 = (unsigned short *)((char *)v13 - 1); /*0x493890*/
    }
    while ( v13 ); /*0x493894*/
  }
  return result; /*0x49389a*/

}
} // namespace gamemd

// 0x4938A0
namespace gamemd {
int E4Recv_4938A0::sub_4938A0(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{

  return (*(int (**)(_BlitTransDarkenZReadWrite_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)this->__pad_0 + 4))( /*0x4938ca*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);

}
} // namespace gamemd

// 0x4938D0
namespace gamemd {
int E4Recv_4938D0::sub_4938D0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{

  return (*(int (**)(_BlitTransDarkenZReadWrite_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)this->__pad_0 + 4))( /*0x4938fa*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);

}
} // namespace gamemd

// 0x493900
namespace gamemd {
int E4Recv_493900::sub_493900(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{

  return (*(int (**)(_BlitTransDarkenZReadWrite_G *, int, int, int, int, int, int, int, unsigned int))(*(unsigned int *)this->__pad_0 + 4))( /*0x49392a*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0);

}
} // namespace gamemd

// 0x4963B0
namespace gamemd {
int E4Recv_4963B0::sub_4963B0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{

  return (*(int (**)(_RLEBlitTransLucent75_G *, int, int, int, int, int, int, int, int, int, int))(*(unsigned int *)this->__pad_0 + 4))( /*0x4963e7*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);

}
} // namespace gamemd

// 0x4963F0
namespace gamemd {
unsigned short * E4Recv_4963F0::sub_4963F0(unsigned short * a1, unsigned char * a2, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{

  int v11; // edx
  unsigned short *result; // eax
  int v15; // edx
  int v16; // edi
  uint8_t v17; // dl
  uint8_t v18; // dl

  v11 = a5; /*0x4963f0*/
  result = a1; /*0x496400*/
  if ( a5 <= 0 ) /*0x496402*/
  {
    v16 = a4; /*0x496426*/
  }
  else
  {
    do /*0x496417*/
    {
      if ( *a2++ ) /*0x496404*/
        --v11; /*0x496414*/
      else
        v11 -= *a2++; /*0x49640f*/
    }
    while ( v11 > 0 ); /*0x496417*/
    v15 = -v11; /*0x496419*/
    result = &a1[v15]; /*0x49641b*/
    v16 = a4 - v15; /*0x496422*/
  }
  while ( v16 > 0 ) /*0x49642c*/
  {
    v17 = *a2++; /*0x496430*/
    if ( v17 ) /*0x496439*/
    {
      --v16; /*0x496478*/
      *result = (*(unsigned int *)this->m_8 & (*result >> 1)) + (*(unsigned int *)this->m_8 & (*(unsigned short *)(this->m_4 + 2 * v17) >> 1)); /*0x496479*/
      ++result; /*0x49647c*/
    }
    else
    {
      v18 = *a2++; /*0x49643b*/
      v16 -= v18; /*0x49644c*/
      result += v18; /*0x49644e*/
    }
  }
  return result; /*0x496485*/

}
} // namespace gamemd

// 0x496490
namespace gamemd {
int E4Recv_496490::sub_496490(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{

  return (*(int (**)(_RLEBlitTransLucent50_G *, int, int, int, int, int, int, int, int, int, int))(*(unsigned int *)this->__pad_0 + 4))( /*0x4964c7*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);

}
} // namespace gamemd

// 0x496570
namespace gamemd {
int E4Recv_496570::sub_496570(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{

  return (*(int (**)(_RLEBlitTransLucent25_G *, int, int, int, int, int, int, int, int, int, int))(*(unsigned int *)this->__pad_0 + 4))( /*0x4965a7*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);

}
} // namespace gamemd

// 0x496690
namespace gamemd {
int E4Recv_496690::sub_496690(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{

  return (*(int (**)(_RLEBlitTransXlatZRead_G *, int, int, int, int, int, int, int, int, int, int))(*(unsigned int *)this->__pad_0 + 4))( /*0x4966c7*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);

}
} // namespace gamemd

// 0x4967E0
namespace gamemd {
int E4Recv_4967E0::sub_4967E0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{

  return (*(int (**)(_RLEBlitTransZRemapXlatZRead_G *, int, int, int, int, int, int, int, int, int, int))(*(unsigned int *)this->__pad_0 + 4))( /*0x496817*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);

}
} // namespace gamemd

// 0x496820
namespace gamemd {
int E4Recv_496820::sub_496820(unsigned short * a1, unsigned char * a2, RLEBlitTransDarkenZRead_G * aP3, int a5, int a6, unsigned int a7, int a8, int a9, int _38, char * a10)
{

  int result; // eax
  unsigned int v12; // edx
  unsigned short *v14; // esi
  int v17; // eax
  int v18; // ebx
  uint8_t v20; // al
  int v21; // edi

  result = a5; /*0x496821*/
  v12 = a7; /*0x496825*/
  v14 = a1; /*0x496830*/
  if ( a5 <= 0 ) /*0x496845*/
  {
    v18 = (unsigned int)aP3; /*0x496878*/
  }
  else
  {
    do /*0x49685c*/
    {
      if ( *a2++ ) /*0x496847*/
        --result; /*0x496859*/
      else
        result -= *a2++; /*0x496854*/
    }
    while ( result > 0 ); /*0x49685c*/
    v17 = -result; /*0x496862*/
    v18 = aP3 - v17; /*0x496864*/
    v14 = &a1[v17]; /*0x496866*/
    result = a7 + 2 * v17; /*0x496869*/
    if ( (unsigned int)result >= g_ZBufferDescriptor[1].Stream_field_08 ) /*0x49686f*/
      result -= g_ZBufferDescriptor[1].Stream_field_0C; /*0x496871*/
    v12 = result; /*0x496874*/
  }
  while ( v18 > 0 ) /*0x49687e*/
  {
    if ( *a2++ ) /*0x496880*/
    {
      v12 += 2; /*0x4968ad*/
      v21 = a6 - *a10++; /*0x4968b0*/
      if ( v21 < *(uint16_t *)(v12 - 2) ) /*0x4968bb*/
        *v14 = *(unsigned short *)&this->m_2[2] & (*v14 >> 1); /*0x4968cb*/
      --v18; /*0x4968ce*/
      ++v14; /*0x4968cf*/
    }
    else
    {
      v20 = *a2++; /*0x496888*/
      v18 -= v20; /*0x496899*/
      a10 += v20; /*0x49689b*/
      v14 += v20; /*0x4968a0*/
      v12 += 2 * v20; /*0x4968a2*/
    }
    result = (int)g_ZBufferDescriptor; /*0x4968d2*/
    if ( v12 >= g_ZBufferDescriptor[1].Stream_field_08 ) /*0x4968da*/
      v12 -= g_ZBufferDescriptor[1].Stream_field_0C; /*0x4968dc*/
  }
  return result; /*0x4968e3*/

}
} // namespace gamemd

// 0x4968F0
namespace gamemd {
int E4Recv_4968F0::sub_4968F0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{

  return (*(int (**)(_RLEBlitTransDarkenZRead_G *, int, int, int, int, int, int, int, int, int, int))(*(unsigned int *)this->__pad_0 + 4))( /*0x496927*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);

}
} // namespace gamemd

// 0x496A40
namespace gamemd {
int E4Recv_496A40::sub_496A40(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{

  return (*(int (**)(_RLEBlitTransLucent75ZRead_G *, int, int, int, int, int, int, int, int, int, int))(*(unsigned int *)this->__pad_0 + 4))( /*0x496a77*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);

}
} // namespace gamemd

// 0x496B80
namespace gamemd {
int E4Recv_496B80::sub_496B80(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{

  return (*(int (**)(_RLEBlitTransLucent50ZRead_G *, int, int, int, int, int, int, int, int, int, int))(*(unsigned int *)this->__pad_0 + 4))( /*0x496bb7*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);

}
} // namespace gamemd

// 0x496CD0
namespace gamemd {
int E4Recv_496CD0::sub_496CD0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{

  return (*(int (**)(_RLEBlitTransLucent25ZRead_G *, int, int, int, int, int, int, int, int, int, int))(*(unsigned int *)this->__pad_0 + 4))( /*0x496d07*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);

}
} // namespace gamemd

// 0x496E20
namespace gamemd {
int E4Recv_496E20::sub_496E20(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{

  return (*(int (**)(_RLEBlitTransLucent75ZReadWarp_G *, int, int, int, int, int, int, int, int, int, int))(*(unsigned int *)this->__pad_0 + 4))( /*0x496e57*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);

}
} // namespace gamemd

// 0x496F70
namespace gamemd {
int E4Recv_496F70::sub_496F70(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{

  return (*(int (**)(_RLEBlitTransLucent50ZReadWarp_G *, int, int, int, int, int, int, int, int, int, int))(*(unsigned int *)this->__pad_0 + 4))( /*0x496fa7*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);

}
} // namespace gamemd

// 0x4970C0
namespace gamemd {
int E4Recv_4970C0::sub_4970C0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{

  return (*(int (**)(_RLEBlitTransLucent25ZReadWarp_G *, int, int, int, int, int, int, int, int, int, int))(*(unsigned int *)this->__pad_0 + 4))( /*0x4970f7*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);

}
} // namespace gamemd

// 0x4971F0
namespace gamemd {
int E4Recv_4971F0::sub_4971F0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{

  return (*(int (**)(_RLEBlitTransXlatZReadWrite_G *, int, int, int, int, int, int, int, int, int, int))(*(unsigned int *)this->__pad_0 + 4))( /*0x497227*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);

}
} // namespace gamemd

// 0x497350
namespace gamemd {
int E4Recv_497350::sub_497350(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{

  return (*(int (**)(_RLEBlitTransZRemapXlatZReadWrite_G *, int, int, int, int, int, int, int, int, int, int))(*(unsigned int *)this->__pad_0 + 4))( /*0x497387*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);

}
} // namespace gamemd

// 0x497470
namespace gamemd {
int E4Recv_497470::sub_497470(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{

  return (*(int (**)(_RLEBlitTransDarkenZReadWrite_G *, int, int, int, int, int, int, int, int, int, int))(*(unsigned int *)this->__pad_0 + 4))( /*0x4974a7*/
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11);

}
} // namespace gamemd

// 0x499CA0
namespace gamemd {
BlitTransXlat * E4Recv_499CA0::___Gfacet_locale_std__UAEPAXI_Z_4(char a2)
{

  *(unsigned int *)this = (unsigned int)&vt_Blitter; /*0x499ca9*/
  if ( (a2 & 1) != 0 ) /*0x499caf*/
    __3_YAXPAX_Z(this); /*0x499cb2*/
  return (BlitTransXlat *)this; /*0x499cbc*/

}
} // namespace gamemd

// 0x499D40
namespace gamemd {
std::locale::facet * E4Recv_499D40::___Gfacet_locale_std__UAEPAXI_Z_9(char a2)
{

  *(unsigned int *)this = (unsigned int)&vt_Blitter; /*0x499d49*/
  if ( (a2 & 1) != 0 ) /*0x499d4f*/
    __3_YAXPAX_Z(this); /*0x499d52*/
  return (std::locale::facet *)this; /*0x499d5c*/

}
} // namespace gamemd

// 0x499D60
namespace gamemd {
std::locale::facet * E4Recv_499D60::___Gfacet_locale_std__UAEPAXI_Z_10(char a2)
{

  *(unsigned int *)this = (unsigned int)&vt_Blitter; /*0x499d69*/
  if ( (a2 & 1) != 0 ) /*0x499d6f*/
    __3_YAXPAX_Z(this); /*0x499d72*/
  return (std::locale::facet *)this; /*0x499d7c*/

}
} // namespace gamemd

// 0x499D80
namespace gamemd {
RLEBlitTransXlat * E4Recv_499D80::___Gfacet_locale_std__UAEPAXI_Z_11(char a2)
{

  *(unsigned int *)this = (unsigned int)&vt_RLEBlitter; /*0x499d89*/
  if ( (a2 & 1) != 0 ) /*0x499d8f*/
    __3_YAXPAX_Z(this); /*0x499d92*/
  return (RLEBlitTransXlat *)this; /*0x499d9c*/

}
} // namespace gamemd

// 0x499DC0
namespace gamemd {
std::locale::facet * E4Recv_499DC0::___Gfacet_locale_std__UAEPAXI_Z_13(char a2)
{

  *(unsigned int *)this = (unsigned int)&vt_RLEBlitter; /*0x499dc9*/
  if ( (a2 & 1) != 0 ) /*0x499dcf*/
    __3_YAXPAX_Z(this); /*0x499dd2*/
  return (std::locale::facet *)this; /*0x499ddc*/

}
} // namespace gamemd

// 0x499DE0
namespace gamemd {
std::locale::facet * E4Recv_499DE0::___Gfacet_locale_std__UAEPAXI_Z_14(char a2)
{

  *(unsigned int *)this = (unsigned int)&vt_RLEBlitter; /*0x499de9*/
  if ( (a2 & 1) != 0 ) /*0x499def*/
    __3_YAXPAX_Z(this); /*0x499df2*/
  return (std::locale::facet *)this; /*0x499dfc*/

}
} // namespace gamemd

// 0x499E00
namespace gamemd {
std::locale::facet * E4Recv_499E00::___Gfacet_locale_std__UAEPAXI_Z_15(char a2)
{

  *(unsigned int *)this = (unsigned int)&vt_RLEBlitter; /*0x499e09*/
  if ( (a2 & 1) != 0 ) /*0x499e0f*/
    __3_YAXPAX_Z(this); /*0x499e12*/
  return (std::locale::facet *)this; /*0x499e1c*/

}
} // namespace gamemd

// 0x499E20
namespace gamemd {
RLEBlitTransXlatZRead * E4Recv_499E20::___Gfacet_locale_std__UAEPAXI_Z_16(char a2)
{

  *(unsigned int *)this = (unsigned int)&vt_RLEBlitter; /*0x499e29*/
  if ( (a2 & 1) != 0 ) /*0x499e2f*/
    __3_YAXPAX_Z(this); /*0x499e32*/
  return (RLEBlitTransXlatZRead *)this; /*0x499e3c*/

}
} // namespace gamemd

// 0x499E40
namespace gamemd {
std::locale::facet * E4Recv_499E40::___Gfacet_locale_std__UAEPAXI_Z_17(char a2)
{

  *(unsigned int *)this = (unsigned int)&vt_RLEBlitter; /*0x499e49*/
  if ( (a2 & 1) != 0 ) /*0x499e4f*/
    __3_YAXPAX_Z(this); /*0x499e52*/
  return (std::locale::facet *)this; /*0x499e5c*/

}
} // namespace gamemd

// 0x499E60
namespace gamemd {
std::locale::facet * E4Recv_499E60::___Gfacet_locale_std__UAEPAXI_Z_18(char a2)
{

  *(unsigned int *)this = (unsigned int)&vt_RLEBlitter; /*0x499e69*/
  if ( (a2 & 1) != 0 ) /*0x499e6f*/
    __3_YAXPAX_Z(this); /*0x499e72*/
  return (std::locale::facet *)this; /*0x499e7c*/

}
} // namespace gamemd

// 0x499E80
namespace gamemd {
std::locale::facet * E4Recv_499E80::___Gfacet_locale_std__UAEPAXI_Z_19(char a2)
{

  *(unsigned int *)this = (unsigned int)&vt_RLEBlitter; /*0x499e89*/
  if ( (a2 & 1) != 0 ) /*0x499e8f*/
    __3_YAXPAX_Z(this); /*0x499e92*/
  return (std::locale::facet *)this; /*0x499e9c*/

}
} // namespace gamemd

// 0x499EA0
namespace gamemd {
std::locale::facet * E4Recv_499EA0::___Gfacet_locale_std__UAEPAXI_Z_20(char a2)
{

  *(unsigned int *)this = (unsigned int)&vt_RLEBlitter; /*0x499ea9*/
  if ( (a2 & 1) != 0 ) /*0x499eaf*/
    __3_YAXPAX_Z(this); /*0x499eb2*/
  return (std::locale::facet *)this; /*0x499ebc*/

}
} // namespace gamemd

// 0x499EC0
namespace gamemd {
std::locale::facet * E4Recv_499EC0::___Gfacet_locale_std__UAEPAXI_Z_21(char a2)
{

  *(unsigned int *)this = (unsigned int)&vt_RLEBlitter; /*0x499ec9*/
  if ( (a2 & 1) != 0 ) /*0x499ecf*/
    __3_YAXPAX_Z(this); /*0x499ed2*/
  return (std::locale::facet *)this; /*0x499edc*/

}
} // namespace gamemd

// 0x499EE0
namespace gamemd {
std::locale::facet * E4Recv_499EE0::___Gfacet_locale_std__UAEPAXI_Z_22(char a2)
{

  *(unsigned int *)this = (unsigned int)&vt_RLEBlitter; /*0x499ee9*/
  if ( (a2 & 1) != 0 ) /*0x499eef*/
    __3_YAXPAX_Z(this); /*0x499ef2*/
  return (std::locale::facet *)this; /*0x499efc*/

}
} // namespace gamemd

// 0x499F00
namespace gamemd {
std::locale::facet * E4Recv_499F00::___Gfacet_locale_std__UAEPAXI_Z_23(char a2)
{

  *(unsigned int *)this = (unsigned int)&vt_RLEBlitter; /*0x499f09*/
  if ( (a2 & 1) != 0 ) /*0x499f0f*/
    __3_YAXPAX_Z(this); /*0x499f12*/
  return (std::locale::facet *)this; /*0x499f1c*/

}
} // namespace gamemd

// 0x499F20
namespace gamemd {
BlitPlainXlat * E4Recv_499F20::___Gfacet_locale_std__UAEPAXI_Z_24(char a2)
{

  *(unsigned int *)this = (unsigned int)&vt_Blitter; /*0x499f29*/
  if ( (a2 & 1) != 0 ) /*0x499f2f*/
    __3_YAXPAX_Z(this); /*0x499f32*/
  return (BlitPlainXlat *)this; /*0x499f3c*/

}
} // namespace gamemd

// 0x499F40
namespace gamemd {
std::locale::facet * E4Recv_499F40::___Gfacet_locale_std__UAEPAXI_Z_25(char a2)
{

  *(unsigned int *)this = (unsigned int)&vt_Blitter; /*0x499f49*/
  if ( (a2 & 1) != 0 ) /*0x499f4f*/
    __3_YAXPAX_Z(this); /*0x499f52*/
  return (std::locale::facet *)this; /*0x499f5c*/

}
} // namespace gamemd

// 0x499F60
namespace gamemd {
BlitTransDarken * E4Recv_499F60::___Gfacet_locale_std__UAEPAXI_Z_26(char a2)
{

  *(unsigned int *)this = (unsigned int)&vt_Blitter; /*0x499f69*/
  if ( (a2 & 1) != 0 ) /*0x499f6f*/
    __3_YAXPAX_Z(this); /*0x499f72*/
  return (BlitTransDarken *)this; /*0x499f7c*/

}
} // namespace gamemd

// 0x499F80
namespace gamemd {
BlitTransLucent75 * E4Recv_499F80::___Gfacet_locale_std__UAEPAXI_Z_27(char a2)
{

  *(unsigned int *)this = (unsigned int)&vt_Blitter; /*0x499f89*/
  if ( (a2 & 1) != 0 ) /*0x499f8f*/
    __3_YAXPAX_Z(this); /*0x499f92*/
  return (BlitTransLucent75 *)this; /*0x499f9c*/

}
} // namespace gamemd

// 0x499FA0
namespace gamemd {
BlitTransLucent50 * E4Recv_499FA0::___Gfacet_locale_std__UAEPAXI_Z_28(char a2)
{

  *(unsigned int *)this = (unsigned int)&vt_Blitter; /*0x499fa9*/
  if ( (a2 & 1) != 0 ) /*0x499faf*/
    __3_YAXPAX_Z(this); /*0x499fb2*/
  return (BlitTransLucent50 *)this; /*0x499fbc*/

}
} // namespace gamemd

// 0x499FC0
namespace gamemd {
BlitTransLucent25 * E4Recv_499FC0::___Gfacet_locale_std__UAEPAXI_Z_29(char a2)
{

  *(unsigned int *)this = (unsigned int)&vt_Blitter; /*0x499fc9*/
  if ( (a2 & 1) != 0 ) /*0x499fcf*/
    __3_YAXPAX_Z(this); /*0x499fd2*/
  return (BlitTransLucent25 *)this; /*0x499fdc*/

}
} // namespace gamemd

// 0x499FE0
namespace gamemd {
std::locale::facet * E4Recv_499FE0::___Gfacet_locale_std__UAEPAXI_Z_30(char a2)
{

  *(unsigned int *)this = (unsigned int)&vt_Blitter; /*0x499fe9*/
  if ( (a2 & 1) != 0 ) /*0x499fef*/
    __3_YAXPAX_Z(this); /*0x499ff2*/
  return (std::locale::facet *)this; /*0x499ffc*/

}
} // namespace gamemd

// 0x49A000
namespace gamemd {
BlitTransXlatZRead * E4Recv_49A000::___Gfacet_locale_std__UAEPAXI_Z_31(char a2)
{

  *(unsigned int *)this = (unsigned int)&vt_Blitter; /*0x49a009*/
  if ( (a2 & 1) != 0 ) /*0x49a00f*/
    __3_YAXPAX_Z(this); /*0x49a012*/
  return (BlitTransXlatZRead *)this; /*0x49a01c*/

}
} // namespace gamemd

// 0x49A020
namespace gamemd {
std::locale::facet * E4Recv_49A020::___Gfacet_locale_std__UAEPAXI_Z_32(char a2)
{

  *(unsigned int *)this = (unsigned int)&vt_Blitter; /*0x49a029*/
  if ( (a2 & 1) != 0 ) /*0x49a02f*/
    __3_YAXPAX_Z(this); /*0x49a032*/
  return (std::locale::facet *)this; /*0x49a03c*/

}
} // namespace gamemd

// 0x49A040
namespace gamemd {
std::locale::facet * E4Recv_49A040::___Gfacet_locale_std__UAEPAXI_Z_33(char a2)
{

  *(unsigned int *)this = (unsigned int)&vt_Blitter; /*0x49a049*/
  if ( (a2 & 1) != 0 ) /*0x49a04f*/
    __3_YAXPAX_Z(this); /*0x49a052*/
  return (std::locale::facet *)this; /*0x49a05c*/

}
} // namespace gamemd

// 0x49A060
namespace gamemd {
std::locale::facet * E4Recv_49A060::___Gfacet_locale_std__UAEPAXI_Z_34(char a2)
{

  *(unsigned int *)this = (unsigned int)&vt_Blitter; /*0x49a069*/
  if ( (a2 & 1) != 0 ) /*0x49a06f*/
    __3_YAXPAX_Z(this); /*0x49a072*/
  return (std::locale::facet *)this; /*0x49a07c*/

}
} // namespace gamemd

// 0x49A080
namespace gamemd {
std::locale::facet * E4Recv_49A080::___Gfacet_locale_std__UAEPAXI_Z_35(char a2)
{

  *(unsigned int *)this = (unsigned int)&vt_Blitter; /*0x49a089*/
  if ( (a2 & 1) != 0 ) /*0x49a08f*/
    __3_YAXPAX_Z(this); /*0x49a092*/
  return (std::locale::facet *)this; /*0x49a09c*/

}
} // namespace gamemd

// 0x49A0A0
namespace gamemd {
std::locale::facet * E4Recv_49A0A0::___Gfacet_locale_std__UAEPAXI_Z_36(char a2)
{

  *(unsigned int *)this = (unsigned int)&vt_Blitter; /*0x49a0a9*/
  if ( (a2 & 1) != 0 ) /*0x49a0af*/
    __3_YAXPAX_Z(this); /*0x49a0b2*/
  return (std::locale::facet *)this; /*0x49a0bc*/

}
} // namespace gamemd

// 0x49A0C0
namespace gamemd {
std::locale::facet * E4Recv_49A0C0::___Gfacet_locale_std__UAEPAXI_Z_37(char a2)
{

  *(unsigned int *)this = (unsigned int)&vt_Blitter; /*0x49a0c9*/
  if ( (a2 & 1) != 0 ) /*0x49a0cf*/
    __3_YAXPAX_Z(this); /*0x49a0d2*/
  return (std::locale::facet *)this; /*0x49a0dc*/

}
} // namespace gamemd

// 0x49A0E0
namespace gamemd {
std::locale::facet * E4Recv_49A0E0::___Gfacet_locale_std__UAEPAXI_Z_38(char a2)
{

  *(unsigned int *)this = (unsigned int)&vt_Blitter; /*0x49a0e9*/
  if ( (a2 & 1) != 0 ) /*0x49a0ef*/
    __3_YAXPAX_Z(this); /*0x49a0f2*/
  return (std::locale::facet *)this; /*0x49a0fc*/

}
} // namespace gamemd

// 0x49A100
namespace gamemd {
std::locale::facet * E4Recv_49A100::___Gfacet_locale_std__UAEPAXI_Z_39(char a2)
{

  *(unsigned int *)this = (unsigned int)&vt_Blitter; /*0x49a109*/
  if ( (a2 & 1) != 0 ) /*0x49a10f*/
    __3_YAXPAX_Z(this); /*0x49a112*/
  return (std::locale::facet *)this; /*0x49a11c*/

}
} // namespace gamemd

// 0x49A120
namespace gamemd {
std::locale::facet * E4Recv_49A120::___Gfacet_locale_std__UAEPAXI_Z_40(char a2)
{

  *(unsigned int *)this = (unsigned int)&vt_Blitter; /*0x49a129*/
  if ( (a2 & 1) != 0 ) /*0x49a12f*/
    __3_YAXPAX_Z(this); /*0x49a132*/
  return (std::locale::facet *)this; /*0x49a13c*/

}
} // namespace gamemd

// 0x49A140
namespace gamemd {
BlitTransXlatZReadWrite * E4Recv_49A140::___Gfacet_locale_std__UAEPAXI_Z_41(char a2)
{

  *(unsigned int *)this = (unsigned int)&vt_Blitter; /*0x49a149*/
  if ( (a2 & 1) != 0 ) /*0x49a14f*/
    __3_YAXPAX_Z(this); /*0x49a152*/
  return (BlitTransXlatZReadWrite *)this; /*0x49a15c*/

}
} // namespace gamemd

// 0x49A160
namespace gamemd {
std::locale::facet * E4Recv_49A160::___Gfacet_locale_std__UAEPAXI_Z_42(char a2)
{

  *(unsigned int *)this = (unsigned int)&vt_Blitter; /*0x49a169*/
  if ( (a2 & 1) != 0 ) /*0x49a16f*/
    __3_YAXPAX_Z(this); /*0x49a172*/
  return (std::locale::facet *)this; /*0x49a17c*/

}
} // namespace gamemd

// 0x49A180
namespace gamemd {
std::locale::facet * E4Recv_49A180::___Gfacet_locale_std__UAEPAXI_Z_43(char a2)
{

  *(unsigned int *)this = (unsigned int)&vt_Blitter; /*0x49a189*/
  if ( (a2 & 1) != 0 ) /*0x49a18f*/
    __3_YAXPAX_Z(this); /*0x49a192*/
  return (std::locale::facet *)this; /*0x49a19c*/

}
} // namespace gamemd

// 0x49A7C0
namespace gamemd {
std::locale::facet * E4Recv_49A7C0::___Gfacet_locale_std__UAEPAXI_Z_55(char a2)
{

  *(unsigned int *)this = (unsigned int)&vt_RLEBlitter; /*0x49a7c9*/
  if ( (a2 & 1) != 0 ) /*0x49a7cf*/
    __3_YAXPAX_Z(this); /*0x49a7d2*/
  return (std::locale::facet *)this; /*0x49a7dc*/

}
} // namespace gamemd

// 0x49A7E0
namespace gamemd {
std::locale::facet * E4Recv_49A7E0::___Gfacet_locale_std__UAEPAXI_Z_56(char a2)
{

  *(unsigned int *)this = (unsigned int)&vt_RLEBlitter; /*0x49a7e9*/
  if ( (a2 & 1) != 0 ) /*0x49a7ef*/
    __3_YAXPAX_Z(this); /*0x49a7f2*/
  return (std::locale::facet *)this; /*0x49a7fc*/

}
} // namespace gamemd

// 0x49A800
namespace gamemd {
std::locale::facet * E4Recv_49A800::___Gfacet_locale_std__UAEPAXI_Z_57(char a2)
{

  *(unsigned int *)this = (unsigned int)&vt_RLEBlitter; /*0x49a809*/
  if ( (a2 & 1) != 0 ) /*0x49a80f*/
    __3_YAXPAX_Z(this); /*0x49a812*/
  return (std::locale::facet *)this; /*0x49a81c*/

}
} // namespace gamemd

// 0x49A820
namespace gamemd {
RLEBlitTransXlatZRead * E4Recv_49A820::___Gfacet_locale_std__UAEPAXI_Z_58(char a2)
{

  *(unsigned int *)this = (unsigned int)&vt_RLEBlitter; /*0x49a829*/
  if ( (a2 & 1) != 0 ) /*0x49a82f*/
    __3_YAXPAX_Z(this); /*0x49a832*/
  return (RLEBlitTransXlatZRead *)this; /*0x49a83c*/

}
} // namespace gamemd

// 0x49A840
namespace gamemd {
std::locale::facet * E4Recv_49A840::___Gfacet_locale_std__UAEPAXI_Z_59(char a2)
{

  *(unsigned int *)this = (unsigned int)&vt_RLEBlitter; /*0x49a849*/
  if ( (a2 & 1) != 0 ) /*0x49a84f*/
    __3_YAXPAX_Z(this); /*0x49a852*/
  return (std::locale::facet *)this; /*0x49a85c*/

}
} // namespace gamemd

// 0x49A860
namespace gamemd {
std::locale::facet * E4Recv_49A860::___Gfacet_locale_std__UAEPAXI_Z_60(char a2)
{

  *(unsigned int *)this = (unsigned int)&vt_RLEBlitter; /*0x49a869*/
  if ( (a2 & 1) != 0 ) /*0x49a86f*/
    __3_YAXPAX_Z(this); /*0x49a872*/
  return (std::locale::facet *)this; /*0x49a87c*/

}
} // namespace gamemd

// 0x49A880
namespace gamemd {
std::locale::facet * E4Recv_49A880::___Gfacet_locale_std__UAEPAXI_Z_61(char a2)
{

  *(unsigned int *)this = (unsigned int)&vt_RLEBlitter; /*0x49a889*/
  if ( (a2 & 1) != 0 ) /*0x49a88f*/
    __3_YAXPAX_Z(this); /*0x49a892*/
  return (std::locale::facet *)this; /*0x49a89c*/

}
} // namespace gamemd

// 0x49A8A0
namespace gamemd {
std::locale::facet * E4Recv_49A8A0::___Gfacet_locale_std__UAEPAXI_Z_62(char a2)
{

  *(unsigned int *)this = (unsigned int)&vt_RLEBlitter; /*0x49a8a9*/
  if ( (a2 & 1) != 0 ) /*0x49a8af*/
    __3_YAXPAX_Z(this); /*0x49a8b2*/
  return (std::locale::facet *)this; /*0x49a8bc*/

}
} // namespace gamemd

// 0x49A8C0
namespace gamemd {
std::locale::facet * E4Recv_49A8C0::___Gfacet_locale_std__UAEPAXI_Z_63(char a2)
{

  *(unsigned int *)this = (unsigned int)&vt_RLEBlitter; /*0x49a8c9*/
  if ( (a2 & 1) != 0 ) /*0x49a8cf*/
    __3_YAXPAX_Z(this); /*0x49a8d2*/
  return (std::locale::facet *)this; /*0x49a8dc*/

}
} // namespace gamemd

// 0x49A8E0
namespace gamemd {
std::locale::facet * E4Recv_49A8E0::___Gfacet_locale_std__UAEPAXI_Z_64(char a2)
{

  *(unsigned int *)this = (unsigned int)&vt_RLEBlitter; /*0x49a8e9*/
  if ( (a2 & 1) != 0 ) /*0x49a8ef*/
    __3_YAXPAX_Z(this); /*0x49a8f2*/
  return (std::locale::facet *)this; /*0x49a8fc*/

}
} // namespace gamemd

// 0x49A900
namespace gamemd {
std::locale::facet * E4Recv_49A900::___Gfacet_locale_std__UAEPAXI_Z_65(char a2)
{

  *(unsigned int *)this = (unsigned int)&vt_RLEBlitter; /*0x49a909*/
  if ( (a2 & 1) != 0 ) /*0x49a90f*/
    __3_YAXPAX_Z(this); /*0x49a912*/
  return (std::locale::facet *)this; /*0x49a91c*/

}
} // namespace gamemd

// 0x49A920
namespace gamemd {
std::locale::facet * E4Recv_49A920::___Gfacet_locale_std__UAEPAXI_Z_66(char a2)
{

  *(unsigned int *)this = (unsigned int)&vt_RLEBlitter; /*0x49a929*/
  if ( (a2 & 1) != 0 ) /*0x49a92f*/
    __3_YAXPAX_Z(this); /*0x49a932*/
  return (std::locale::facet *)this; /*0x49a93c*/

}
} // namespace gamemd

// 0x49A940
namespace gamemd {
std::locale::facet * E4Recv_49A940::___Gfacet_locale_std__UAEPAXI_Z_67(char a2)
{

  *(unsigned int *)this = (unsigned int)&vt_RLEBlitter; /*0x49a949*/
  if ( (a2 & 1) != 0 ) /*0x49a94f*/
    __3_YAXPAX_Z(this); /*0x49a952*/
  return (std::locale::facet *)this; /*0x49a95c*/

}
} // namespace gamemd

// 0x49A960
namespace gamemd {
std::locale::facet * E4Recv_49A960::___Gfacet_locale_std__UAEPAXI_Z_68(char a2)
{

  *(unsigned int *)this = (unsigned int)&vt_RLEBlitter; /*0x49a969*/
  if ( (a2 & 1) != 0 ) /*0x49a96f*/
    __3_YAXPAX_Z(this); /*0x49a972*/
  return (std::locale::facet *)this; /*0x49a97c*/

}
} // namespace gamemd

// 0x49A980
namespace gamemd {
std::locale::facet * E4Recv_49A980::___Gfacet_locale_std__UAEPAXI_Z_69(char a2)
{

  *(unsigned int *)this = (unsigned int)&vt_RLEBlitter; /*0x49a989*/
  if ( (a2 & 1) != 0 ) /*0x49a98f*/
    __3_YAXPAX_Z(this); /*0x49a992*/
  return (std::locale::facet *)this; /*0x49a99c*/

}
} // namespace gamemd

// 0x49B180
namespace gamemd {
void sub_49B180()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x49b18c*/
  dbl_89F5A0 = Math::Sqrt(v0 + v0); /*0x49b19e*/
}
} // namespace gamemd

// 0x49B1B0
namespace gamemd {
void sub_49B1B0()
{
  *((double *)&word_89F5D8 + 19) = dbl_89F5A0 / 60.0; /*0x49b1bc*/
}
} // namespace gamemd

// 0x49B1D0
namespace gamemd {
void sub_49B1D0()
{
  *((double *)&word_89F5D8 + 16) = 1.0 / *((double *)&word_89F5D8 + 19); /*0x49b1dc*/
}
} // namespace gamemd

// 0x49B1F0
namespace gamemd {
void sub_49B1F0()
{
  dbl_89F5D0 = 0.0174532925199433 * 45.0; /*0x49b1fc*/
}
} // namespace gamemd

// 0x49B210
namespace gamemd {
void sub_49B210()
{
  dbl_89F5A8 = 0.0174532925199433 * 60.0; /*0x49b21c*/
}
} // namespace gamemd

// 0x49B230
namespace gamemd {
void sub_49B230()
{
  dbl_89F580 = 0.0174532925199433 * 90.0; /*0x49b23c*/
}
} // namespace gamemd

// 0x49B250
namespace gamemd {
long long sub_49B250()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_89F580 - dbl_89F5A8); /*0x49b262*/
  result = Math::RoundToInt(v0 * dbl_89F5A0 * 0.5); /*0x49b276*/
  *((unsigned int *)&word_89F5D8 + 40) = result; /*0x49b27b*/
  return result; /*0x49b280*/
}
} // namespace gamemd

// 0x49B290
namespace gamemd {
void sub_49B290()
{
  dbl_89F5B0 = Math::ArcTan((double)*((int *)&word_89F5D8 + 40) * 0.00390625); /*0x49b2a7*/
}
} // namespace gamemd

// 0x49B2C0
namespace gamemd {
void sub_49B2C0()
{
  dbl_89F5C8 = Math::ArcTan((double)(2 * *((unsigned int *)&word_89F5D8 + 40)) / dbl_89F5A0); /*0x49b2e2*/
}
} // namespace gamemd

// 0x49B2F0
namespace gamemd {
long long sub_49B2F0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * *((unsigned int *)&word_89F5D8 + 40)) + 0.5); /*0x49b30b*/
  *((unsigned int *)&word_89F5D8 + 37) = result; /*0x49b310*/
  return result; /*0x49b316*/
}
} // namespace gamemd

// 0x49B320
namespace gamemd {
int sub_49B320()
{
  word_89F598 = 0; /*0x49b322*/
  word_89F59A = 0; /*0x49b328*/
  return 0; /*0x49b32e*/
}
} // namespace gamemd

// 0x49B330
namespace gamemd {
int sub_49B330()
{
  dword_89F5B8 = 0; /*0x49b332*/
  dword_89F5BC = 0; /*0x49b337*/
  dword_89F5C0 = 0; /*0x49b33c*/
  return 0; /*0x49b341*/
}
} // namespace gamemd

// 0x49B350
namespace gamemd {
int sub_49B350()
{
  *((unsigned int *)&word_89F5D8 + 34) = 128; /*0x49b35f*/
  *(unsigned long long *)(&word_89F5D8 + 70) = 128; /*0x49b364*/
  return 128; /*0x49b369*/
}
} // namespace gamemd

// 0x49B370
namespace gamemd {
int sub_49B370()
{
  dword_89F588 = 0; /*0x49b372*/
  dword_89F58C = 0; /*0x49b377*/
  dword_89F590 = 0; /*0x49b37c*/
  dword_89F594 = 0; /*0x49b381*/
  return 0; /*0x49b386*/
}
} // namespace gamemd

// 0x49B390
namespace gamemd {
int sub_49B390()
{
  dword_89F51C = 0; /*0x49b398*/
  dword_89F520 = 0; /*0x49b39e*/
  ((GenericNode *)(unk_89F528))->Constructor(); /*0x49b3a4*/
  ((GenericNode *)(stru_89F534))->Constructor(); /*0x49b3ae*/
  dword_89F524 = (int)&GenericList_vftable; /*0x49b3bd*/
  ((LinkedList *)unk_89F528)->Prepend( (void *)((int)stru_89F534)); /*0x49b3c7*/
  dword_89F524 = (int)&List_INIClass_INISection___vftable; /*0x49b3d1*/
  DataGlobal_89F540 = (unsigned char *)(0); /*0x49b3db*/
  DataGlobal_89F544 = (unsigned char *)(0); /*0x49b3e1*/
  DataGlobal_89F548 = (unsigned char *)(0); /*0x49b3e7*/
  DataGlobal_89F54C = (unsigned char *)(0); /*0x49b3ed*/
  DataGlobal_89F550 = (unsigned char *)(0); /*0x49b3f3*/
  DataGlobal_89F554 = (unsigned char *)(0); /*0x49b3f9*/
  DataGlobal_89F558 = (unsigned char *)(0); /*0x49b3ff*/
  g_DDrawSurfaceManager = (int)&CCINIClass_Vtable; /*0x49b405*/
  byte_89F578 = 0; /*0x49b40f*/
  return atexit(unknown_libname_12); /*0x49b41d*/
}
} // namespace gamemd

// 0x49B420
namespace gamemd {
int unknown_libname_12()
{
  INIClass::ClearContents((int)&g_DDrawSurfaceManager); /*0x49b425*/
}
} // namespace gamemd

// 0x49B430
namespace gamemd {
char Hex_EncodeDigit(int a1)
{
  if ( (unsigned int)a1 >= 0x10 ) /*0x49b432*/
    return 0; /*0x49b446*/
  if ( a1 >= 10 ) /*0x49b43c*/
    return a1 + 55; /*0x49b442*/
  return a1 + 48; /*0x49b441*/
}
} // namespace gamemd

// 0x49DA60
namespace gamemd {
unsigned int * E4Recv_49DA60::sub_49DA60()
{

  unsigned int *result; // eax
  int *p_uniqueId; // esi
  int *p_referenceCount; // ecx
  int v4; // ebx
  int v5; // edi
  int v6; // edi
  int v7; // edi

  result = this; /*0x49da60*/
  p_uniqueId = &((unsigned int *)this)[0]; /*0x49da66*/
  p_referenceCount = &((unsigned int *)this)[0]; /*0x49da69*/
  result[1] = 0; /*0x49da6c*/
  result[2] = 0; /*0x49da6f*/
  p_uniqueId[1] = 0; /*0x49da72*/
  p_uniqueId[2] = 0; /*0x49da75*/
  *p_uniqueId = (unsigned int)(int)&vt_GenericNode; /*0x49da78*/
  p_referenceCount[1] = 0; /*0x49da7e*/
  p_referenceCount[2] = 0; /*0x49da81*/
  *p_referenceCount = (unsigned int)(int)&vt_GenericNode; /*0x49da84*/
  result[3] = &vt_GenericList; /*0x49da8d*/
  if ( p_referenceCount ) /*0x49da94*/
  {
    v4 = p_referenceCount[1]; /*0x49da96*/
    if ( v4 ) /*0x49da9b*/
    {
      v5 = p_referenceCount[2]; /*0x49da9d*/
      if ( v5 ) /*0x49daa2*/
      {
        *(unsigned int *)(v5 + 4) = v4; /*0x49daa4*/
        *(unsigned int *)(p_referenceCount[1] + 8) = p_referenceCount[2]; /*0x49daad*/
        p_referenceCount[2] = 0; /*0x49dab0*/
        p_referenceCount[1] = 0; /*0x49dab3*/
      }
    }
  }
  v6 = p_uniqueId[1]; /*0x49dab6*/
  p_referenceCount[2] = (int)p_uniqueId; /*0x49dab9*/
  p_referenceCount[1] = v6; /*0x49dabc*/
  v7 = p_uniqueId[1]; /*0x49dabf*/
  if ( v7 ) /*0x49dac4*/
    *(unsigned int *)(v7 + 8) = (unsigned int)p_referenceCount; /*0x49dac6*/
  p_uniqueId[1] = (int)p_referenceCount; /*0x49dac9*/
  result[3] = &vt_List; /*0x49dacc*/
  result[10] = 0; /*0x49dad4*/
  result[11] = 0; /*0x49dad7*/
  result[12] = 0; /*0x49dada*/
  *((unsigned char *)result + 52) = 0; /*0x49dadd*/
  result[14] = 0; /*0x49dae0*/
  result[15] = 0; /*0x49dae4*/
  *((unsigned char *)result + 64) = 0; /*0x49dae7*/
  *result = (unsigned int)&CCINIClass_Vtable; /*0x49daea*/
  *((unsigned char *)result + 96) = 0; /*0x49daf0*/
  return result; /*0x49dad3*/

}
} // namespace gamemd

// 0x49F0E0
namespace gamemd {
void sub_49F0E0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x49f0ec*/
  dbl_89F6C0 = Math::Sqrt(v0 + v0); /*0x49f0fe*/
}
} // namespace gamemd

// 0x49F110
namespace gamemd {
void sub_49F110()
{
  dbl_89F750 = dbl_89F6C0 / 60.0; /*0x49f11c*/
}
} // namespace gamemd

// 0x49F130
namespace gamemd {
void sub_49F130()
{
  dbl_89F738 = 1.0 / dbl_89F750; /*0x49f13c*/
}
} // namespace gamemd

// 0x49F150
namespace gamemd {
void sub_49F150()
{
  dbl_89F730 = 0.0174532925199433 * 45.0; /*0x49f15c*/
}
} // namespace gamemd

// 0x49F170
namespace gamemd {
void sub_49F170()
{
  dbl_89F6C8 = 0.0174532925199433 * 60.0; /*0x49f17c*/
}
} // namespace gamemd

// 0x49F190
namespace gamemd {
void sub_49F190()
{
  *((double *)&word_89F5D8 + 21) = 0.0174532925199433 * 90.0; /*0x49f19c*/
}
} // namespace gamemd

// 0x49F1B0
namespace gamemd {
long long sub_49F1B0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(*((double *)&word_89F5D8 + 21) - dbl_89F6C8); /*0x49f1c2*/
  result = Math::RoundToInt(v0 * dbl_89F6C0 * 0.5); /*0x49f1d6*/
  dword_89F758 = result; /*0x49f1db*/
  return result; /*0x49f1e0*/
}
} // namespace gamemd

// 0x49F1F0
namespace gamemd {
void sub_49F1F0()
{
  dbl_89F6D0 = Math::ArcTan((double)dword_89F758 * 0.00390625); /*0x49f207*/
}
} // namespace gamemd

// 0x49F220
namespace gamemd {
void sub_49F220()
{
  dbl_89F728 = Math::ArcTan((double)(2 * dword_89F758) / dbl_89F6C0); /*0x49f242*/
}
} // namespace gamemd

// 0x49F250
namespace gamemd {
long long sub_49F250()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_89F758) + 0.5); /*0x49f26b*/
  dword_89F74C = result; /*0x49f270*/
  return result; /*0x49f276*/
}
} // namespace gamemd

// 0x49F280
namespace gamemd {
int sub_49F280()
{
  word_89F6B8 = 0; /*0x49f282*/
  word_89F6BA = 0; /*0x49f288*/
  return 0; /*0x49f28e*/
}
} // namespace gamemd

// 0x49F290
namespace gamemd {
int sub_49F290()
{
  dword_89F718 = 0; /*0x49f292*/
  dword_89F71C = 0; /*0x49f297*/
  dword_89F720 = 0; /*0x49f29c*/
  return 0; /*0x49f2a1*/
}
} // namespace gamemd

// 0x49F2B0
namespace gamemd {
int sub_49F2B0()
{
  dword_89F748 = 0; /*0x49f2b5*/
  dword_89F740 = 128; /*0x49f2bf*/
  dword_89F744 = 128; /*0x49f2c4*/
  return 128; /*0x49f2c9*/
}
} // namespace gamemd

// 0x49F2D0
namespace gamemd {
int sub_49F2D0()
{
  dword_89F6A8 = 0; /*0x49f2d2*/
  dword_89F6AC = 0; /*0x49f2d7*/
  dword_89F6B0 = 0; /*0x49f2dc*/
  dword_89F6B4 = 0; /*0x49f2e1*/
  return 0; /*0x49f2e6*/
}
} // namespace gamemd

// 0x49F2F0
namespace gamemd {
int sub_49F2F0()
{
  (&dword_89F688)[0] = -65536; /*0x49f305*/
  dword_89F68C = -65535; /*0x49f322*/
  dword_89F690 = 1; /*0x49f336*/
  dword_89F694 = 65537; /*0x49f34a*/
  dword_89F69C = 0x1FFFF; /*0x49f375*/
  dword_89F698 = 0x10000; /*0x49f388*/
  dword_89F6A0 = 0xFFFF; /*0x49f38e*/
  dword_89F6A4 = -1; /*0x49f394*/
  return -1; /*0x49f39b*/
}
} // namespace gamemd

// 0x49F3A0
namespace gamemd {
int sub_49F3A0()
{
  (&dword_89F6DC)[0] = -256; /*0x49f3a7*/
  dword_89F6E4 = -256; /*0x49f3ad*/
  (&dword_89F6D8)[0] = 0; /*0x49f3b3*/
  dword_89F6EC = 0; /*0x49f3bf*/
  dword_89F6E0 = 256; /*0x49f3c5*/
  dword_89F6E8 = 256; /*0x49f3ca*/
  dword_89F6F0 = 256; /*0x49f3d1*/
  dword_89F6F4 = 256; /*0x49f3d8*/
  dword_89F6FC = 256; /*0x49f3de*/
  dword_89F704 = 256; /*0x49f3e4*/
  dword_89F6F8 = 0; /*0x49f3ea*/
  dword_89F70C = 0; /*0x49f3f6*/
  dword_89F700 = -256; /*0x49f3fe*/
  dword_89F708 = -256; /*0x49f403*/
  dword_89F710 = -256; /*0x49f408*/
  dword_89F714 = -256; /*0x49f40d*/
  return -256; /*0x49f413*/
}
} // namespace gamemd

// 0x49F420
namespace gamemd {
int * RandomCoordScatter(int * a0, IUnknown * aP1, int aP2, ScenarioClass * aP3)
{
  char v6; // al
  int16_t v7; // cx
  int v8; // edi
  int v9; // eax
  int v10; // eax
  int v11; // edi
  int v12; // ebx
  int v13; // ecx
  int *result; // eax
  int *v15; // edx
  double v16; // [esp+10h] [ebp-20h] BYREF
  int v17; // [esp+18h] [ebp-18h]
  int *v18; // [esp+1Ch] [ebp-14h]
  double v19; // [esp+20h] [ebp-10h]
  double v20; // [esp+28h] [ebp-8h]
  int v21; // [esp+34h] [ebp+4h]

  v18 = a1; /*0x49f42a*/
  IDA_LOWORD(v16) = 0; /*0x49f438*/
  v6 = ((Random *)((unsigned int *)dword_A8B230 + 134))->State(); /*0x49f43f*/
  IDA_LOBYTE(v7) = 0; /*0x49f448*/
  IDA_HIBYTE(v7) = v6; /*0x49f44a*/
  v8 = a2[2]; /*0x49f451*/
  v16 = (double)(v7 - 0x3FFF) * -0.00009587672516830327; /*0x49f46c*/
  v19 = (double)a4; /*0x49f47e*/
  v20 = (double)a2[1]; /*0x49f485*/
  Math::SinCos(v16); /*0x49f489*/
  (v9) = ((v9) & ~0xFFFF) | ((unsigned int)(Math::RoundToInt(a3)) & 0xFFFF); /*0x49f496*/
  v21 = v9; /*0x49f49d*/
  Math::ArcTan2(v16); /*0x49f4a1*/
  (v10) = ((v10) & ~0xFFFF) | ((unsigned int)(Math::RoundToInt(a3 * v19 + (double)*a2)) & 0xFFFF); /*0x49f4af*/
  ((Coord *)(&v16))->Subtract(v10, v21, v8); /*0x49f4bf*/
  v11 = IDA_HIDWORD(v16); /*0x49f4c4*/
  v12 = v17; /*0x49f4c8*/
  v13 = IDA_LODWORD(v16); /*0x49f4d0*/
  if ( (unsigned int)(IDA_SLODWORD(v16) / 256) >= 0x200 || (unsigned int)(IDA_SHIDWORD(v16) / 256) >= 0x200 ) /*0x49f4f8*/
  {
    v13 = *a2; /*0x49f4fa*/
    v11 = a2[1]; /*0x49f4fc*/
    v12 = a2[2]; /*0x49f4ff*/
  }
  if ( a5 ) /*0x49f508*/
  {
    v13 = v13 - (uint8_t)v13 + 128; /*0x49f51d*/
    v11 = v11 - (uint8_t)v11 + 128; /*0x49f523*/
  }
  result = v18; /*0x49f529*/
  v15 = v18; /*0x49f52d*/
  *v18 = v13; /*0x49f52f*/
  v15[1] = v11; /*0x49f531*/
  v15[2] = v12; /*0x49f537*/
  return result; /*0x49f534*/
}
} // namespace gamemd

// 0x49F550
namespace gamemd {
IUnknown * globalHelper_09F550(int * a1, IUnknown * a2, int a3)
{
  int v4; // eax
  int v5; // edi
  int v6; // edi
  int GroundHeight; // eax
  int v9; // [esp+8h] [ebp-Ch] BYREF
  int v10; // [esp+Ch] [ebp-8h]
  int v11; // [esp+10h] [ebp-4h]

  v4 = (&dword_89F6D8)[2 * a3] + *a2; /*0x49f56c*/
  v5 = a2[2]; /*0x49f573*/
  v10 = a2[1] + (&dword_89F6DC)[2 * a3]; /*0x49f576*/
  v9 = v4; /*0x49f57f*/
  v11 = v5; /*0x49f583*/
  v6 = v5 - Cell::GetGroundHeight( a2); /*0x49f595*/
  GroundHeight = Cell::GetGroundHeight( &v9); /*0x49f59c*/
  *a1 = v9; /*0x49f5aa*/
  a1[1] = v10; /*0x49f5b0*/
  a1[2] = v6 + GroundHeight; /*0x49f5b3*/
  return a1; /*0x49f5a9*/
}
} // namespace gamemd

// 0x49F920
namespace gamemd {
bool sub_49F920()
{
  LSTATUS v0; // esi
  int v1; // eax
  HKEY phkResult; // [esp+0h] [ebp-10h] BYREF
  DWORD cbData; // [esp+4h] [ebp-Ch] BYREF
  DWORD Type; // [esp+8h] [ebp-8h] BYREF
  BYTE Data[4]; // [esp+Ch] [ebp-4h] BYREF

  if ( RegOpenKeyExA(HKEY_CLASSES_ROOT, SubKey, 0, 0x20019u, &phkResult) ) /*0x49f939*/
    return 0; /*0x49f939*/
  cbData = 4; /*0x49f95f*/
  v0 = RegQueryValueExA(phkResult, ValueName, 0, &Type, Data, &cbData); /*0x49f96d*/
  RegCloseKey(phkResult); /*0x49f974*/
  if ( v0 || Type != 4 ) /*0x49f984*/
    return 0; /*0x49f9a1*/
  v1 = VersionInfo::Read((int)&dword_A8ECE0); /*0x49f98b*/
  return *(unsigned int *)Data == v1; /*0x49f99d*/
}
} // namespace gamemd

// 0x49FD30
namespace gamemd {
int sub_49FD30()
{
  dword_89F768 = 0; /*0x49fd32*/
  dword_89F76C = 0; /*0x49fd37*/
  dword_89F770 = 0; /*0x49fd3c*/
  dword_89F774 = 0; /*0x49fd41*/
  return 0; /*0x49fd46*/
}
} // namespace gamemd

// 0x49FD50
namespace gamemd {
void sub_49FD50()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x49fd5c*/
  dbl_89F780 = Math::Sqrt(v0 + v0); /*0x49fd6e*/
}
} // namespace gamemd

// 0x49FD80
namespace gamemd {
void sub_49FD80()
{
  dbl_89F7D0 = dbl_89F780 / 60.0; /*0x49fd8c*/
}
} // namespace gamemd

// 0x49FDA0
namespace gamemd {
void sub_49FDA0()
{
  dbl_89F7B8 = 1.0 / dbl_89F7D0; /*0x49fdac*/
}
} // namespace gamemd

// 0x49FDC0
namespace gamemd {
void sub_49FDC0()
{
  dbl_89F7B0 = 0.0174532925199433 * 45.0; /*0x49fdcc*/
}
} // namespace gamemd

// 0x49FDE0
namespace gamemd {
void sub_49FDE0()
{
  dbl_89F788 = 0.0174532925199433 * 60.0; /*0x49fdec*/
}
} // namespace gamemd

// 0x49FE00
namespace gamemd {
void sub_49FE00()
{
  dbl_89F760 = 0.0174532925199433 * 90.0; /*0x49fe0c*/
}
} // namespace gamemd

// 0x49FE20
namespace gamemd {
long long sub_49FE20()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_89F760 - dbl_89F788); /*0x49fe32*/
  result = Math::RoundToInt(v0 * dbl_89F780 * 0.5); /*0x49fe46*/
  dword_89F7D8 = result; /*0x49fe4b*/
  return result; /*0x49fe50*/
}
} // namespace gamemd

// 0x49FE60
namespace gamemd {
void sub_49FE60()
{
  dbl_89F790 = Math::ArcTan((double)dword_89F7D8 * 0.00390625); /*0x49fe77*/
}
} // namespace gamemd

// 0x49FE90
namespace gamemd {
void sub_49FE90()
{
  dbl_89F7A8 = Math::ArcTan((double)(2 * dword_89F7D8) / dbl_89F780); /*0x49feb2*/
}
} // namespace gamemd

// 0x49FEC0
namespace gamemd {
long long sub_49FEC0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_89F7D8) + 0.5); /*0x49fedb*/
  dword_89F7CC = result; /*0x49fee0*/
  return result; /*0x49fee6*/
}
} // namespace gamemd

// 0x49FEF0
namespace gamemd {
int sub_49FEF0()
{
  word_89F778 = 0; /*0x49fef2*/
  word_89F77A = 0; /*0x49fef8*/
  return 0; /*0x49fefe*/
}
} // namespace gamemd

// 0x49FF00
namespace gamemd {
int sub_49FF00()
{
  dword_89F798 = 0; /*0x49ff02*/
  dword_89F79C = 0; /*0x49ff07*/
  dword_89F7A0 = 0; /*0x49ff0c*/
  return 0; /*0x49ff11*/
}
} // namespace gamemd

// 0x49FF20
namespace gamemd {
int sub_49FF20()
{
  dword_89F7C8 = 0; /*0x49ff25*/
  dword_89F7C0 = 128; /*0x49ff2f*/
  dword_89F7C4 = 128; /*0x49ff34*/
  return 128; /*0x49ff39*/
}
} // namespace gamemd
