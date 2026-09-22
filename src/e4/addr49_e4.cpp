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

// 0x490400
namespace gamemd {
int E4Recv_490400::sub_490400()
{
{
  int result; // eax
  E4Recv_490400 *v4; // [esp+4h] [ebp-4h] BYREF
  *(_DWORD *)this = &vt_ConvertClass; /*0x490404*/
  COMClass::RegisterAll((_DWORD *)this); /*0x49040a*/
  __3_YAXPAX_Z(*(void **)(this + 368)); /*0x490416*/
  CampaignClass *v2 = *(void **)(this + 376); /*0x49041b*/
  this->M368 = 0; /*0x490421*/
  __3_YAXPAX_Z(v2); /*0x49042c*/
  this->M376 = 0; /*0x490434*/
  v4 = this; /*0x49044d*/
  result = (*(int (__thiscall **)(int *, int *))(DataGlobal_89ECF8 + 16))(&DataGlobal_89ECF8, &v4); /*0x490451*/
  if ( result != -1 && result < DataGlobal_89ED08 && result < --DataGlobal_89ED08 ) /*0x49046d*/
  {
    do /*0x490485*/
    {
      ++result; /*0x490475*/
      *((_DWORD *)DataGlobal_89ECFC + result - 1) = *((_DWORD *)DataGlobal_89ECFC + result); /*0x490479*/
    }
    while ( result < DataGlobal_89ED08 ); /*0x490485*/
  }
  return result; /*0x490457*/
}
} // namespace gamemd
}

// 0x491B40
namespace gamemd {
int E4Recv_491B40::sub_491B40(unsigned char * a2, unsigned char * a3, int a4, int a5, int a6, unsigned int a7, int a8, int a9, int a10, char * a11)
{
        _DWORD *this,
        _BYTE *a2,
        unsigned __int8 *a3,
        int a4,
        int a5,
        int a6,
        unsigned int a7,
        int a8,
        int a9,
        int a10,
        char *a11)
{
  int result; // eax
  int v18; // edi
  unsigned __int8 v19; // al
  unsigned __int8 v20; // al
  result = a5; /*0x491b41*/
  _BYTE * v14 = a2; /*0x491b58*/
  MouseClass *v15 = a7; /*0x491b5f*/
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
    int v17 = -result; /*0x491b82*/
    v14 = &a2[v17]; /*0x491b84*/
    v18 = a4 - v17; /*0x491b86*/
    result = a7 + 2 * v17; /*0x491b88*/
    if ( (unsigned int)result >= *((_DWORD *)g_ZBufferDescriptor + 7) ) /*0x491b91*/
      result -= *((_DWORD *)g_ZBufferDescriptor + 8); /*0x491b93*/
    v15 = result; /*0x491b96*/
  }
  while ( v18 > 0 ) /*0x491ba0*/
  {
    v19 = *a3++; /*0x491ba2*/
    if ( v19 ) /*0x491bab*/
    {
      v15 += 2; /*0x491bcf*/
      int v21 = a6 - *a11++; /*0x491bd2*/
      if ( v21 < *(unsigned __int16 *)(v15 - 2) ) /*0x491bdd*/
        *v14 = *(_BYTE *)(v19 + this->M4); /*0x491bf2*/
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
    if ( v15 >= *((_DWORD *)g_ZBufferDescriptor + 7) ) /*0x491bfe*/
      v15 -= *((_DWORD *)g_ZBufferDescriptor + 8); /*0x491c00*/
  }
  return result; /*0x491c07*/
}
} // namespace gamemd
}

// 0x491C50
namespace gamemd {
int E4Recv_491C50::sub_491C50(unsigned char * a1, unsigned char * a2, int a4, int a5, int a6, unsigned int a7, int a8, int a9, int _38, char * a10)
{
        RLEBlitTransZRemapXlatZRead_E *this,
        _BYTE *a1,
        unsigned __int8 *a2,
        int a4,
        int a5,
        int a6,
        unsigned int a7,
        int a8,
        int a9,
        int _38,
        char *a10)
{
  int result; // eax
  MouseClass *v14; // ecx
  int v19; // edi
  unsigned __int8 v20; // al
  unsigned __int8 v24; // [esp+20h] [ebp+Ch]
  unsigned __int8 v25; // [esp+20h] [ebp+Ch]
  char *a10a; // [esp+3Ch] [ebp+28h]

  char * v12 = (char *)**((_DWORD **)this + 1); /*0x491c65*/
  result = a5; /*0x491c67*/
  v14 = *(TacticalMap **)&DataGlobal_87F8E4[32096]; /*0x491c6b*/
  _BYTE * v15 = a1; /*0x491c77*/
  a10a = v12; /*0x491c7b*/
  unsigned int v16 = a7; /*0x491c82*/
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
    int v18 = -result; /*0x491ca2*/
    v15 = &a1[v18]; /*0x491ca4*/
    v19 = a4 - v18; /*0x491ca6*/
    result = a7 + 2 * v18; /*0x491ca8*/
    if ( (unsigned int)result >= *(_DWORD *)(*(_DWORD *)&DataGlobal_87F8E4[32096] + 28) ) /*0x491cae*/
      result -= *(_DWORD *)(*(_DWORD *)&DataGlobal_87F8E4[32096] + 32); /*0x491cb0*/
    v16 = result; /*0x491cb3*/
  }
  while ( v19 > 0 ) /*0x491cbd*/
  {
    v20 = *a2++; /*0x491cbf*/
    v24 = v20; /*0x491cc4*/
    if ( v20 ) /*0x491cc8*/
    {
      v16 += 2; /*0x491cf5*/
      int v21 = a6 - *a10; /*0x491cfb*/
      result = (int)++a10; /*0x491d03*/
      if ( v21 < *(unsigned __int16 *)(v16 - 2) ) /*0x491d0a*/
      {
        result = this->M8; /*0x491d22*/
        *v15 = *(_BYTE *)((unsigned __int8)a10a[v24] + result); /*0x491d28*/
      }
      v14 = *(TacticalMap **)&DataGlobal_87F8E4[32096]; /*0x491d2a*/
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
    if ( v16 >= v14->TacticalMap_field_1C ) /*0x491d35*/
      v16 -= v14->TacticalMap_field_20; /*0x491d37*/
  }
  return result; /*0x491d3e*/
}
} // namespace gamemd
}

// 0x491D90
namespace gamemd {
int E4Recv_491D90::sub_491D90(unsigned char * a1, unsigned char * a2, RLEBlitTransRemapDestZRead_E * aP3, int a5, int a6, unsigned int a7, int a8, int a9, int _38, char * a10)
{
        RLEBlitTransRemapDestZRead_E *this,
        unsigned __int8 *a1,
        unsigned __int8 *a2,
        RLEBlitTransRemapDestZRead_E *aP3,
        int a5,
        int a6,
        unsigned int a7,
        int a8,
        int a9,
        int _38,
        char *a10)
{
  unsigned __int8 *v14; // esi
  MouseClass *v15; // ecx
  RLEBlitTransRemapDestZRead_E *v19; // ebx
  int v11 = a5; /*0x491d91*/
  unsigned int v12 = a7; /*0x491d95*/
  v14 = a1; /*0x491da0*/
  v15 = *(TacticalMap **)&stru_87C374[45776]; /*0x491da8*/
  if ( a5 <= 0 ) /*0x491db5*/
  {
    v19 = aP3; /*0x491de7*/
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
    int v18 = -v11; /*0x491dd0*/
    v14 = &a1[v18]; /*0x491dd2*/
    v19 = (RLEBlitTransRemapDestZRead_E *)((char *)aP3 - v18); /*0x491dd4*/
    v11 = a7 + 2 * v18; /*0x491dd6*/
    if ( (unsigned int)v11 >= *(_DWORD *)(*(_DWORD *)&stru_87C374[45776] + 28) ) /*0x491dde*/
      v11 -= *(_DWORD *)(*(_DWORD *)&stru_87C374[45776] + 32); /*0x491de0*/
    v12 = v11; /*0x491de3*/
  }
  while ( (int)v19 > 0 ) /*0x491ded*/
  {
    if ( *a2++ ) /*0x491def*/
    {
      v12 += 2; /*0x491e19*/
      v11 = a6 - *a10++; /*0x491e1c*/
      if ( v11 >= *(unsigned __int16 *)(v12 - 2) ) /*0x491e27*/
      {
        ++v14; /*0x491e3e*/
        v19 = (RLEBlitTransRemapDestZRead_E *)((char *)v19 - 1); /*0x491e3f*/
      }
      else
      {
        v11 = *v14; /*0x491e2f*/
        v19 = (RLEBlitTransRemapDestZRead_E *)((char *)v19 - 1); /*0x491e31*/
        ++v14; /*0x491e35*/
        LOBYTE(v11) = *(_BYTE *)(this->M4 + v11); /*0x491e36*/
        *(v14 - 1) = v11; /*0x491e39*/
      }
      v15 = *(TacticalMap **)&stru_87C374[45776]; /*0x491e40*/
    }
    else
    {
      LOBYTE(v11) = *a2++; /*0x491df6*/
      v19 = (RLEBlitTransRemapDestZRead_E *)((char *)v19 - (unsigned __int8)v11); /*0x491e06*/
      v14 += (unsigned __int8)v11; /*0x491e08*/
      a10 += (unsigned __int8)v11; /*0x491e0a*/
      v12 += 2 * (unsigned __int8)v11; /*0x491e0c*/
    }
    if ( v12 >= v15->TacticalMap_field_1C ) /*0x491e49*/
      v12 -= v15->TacticalMap_field_20; /*0x491e4b*/
  }
  return v11; /*0x491e52*/
}
} // namespace gamemd
}

// 0x491EA0
namespace gamemd {
int E4Recv_491EA0::sub_491EA0(int arg0, unsigned char * a2, int a4, int a5, int a6, unsigned int a7, int a8, int a9, int _38, char * a10)
{
        RLEBlitTransRemapXlatZRead_E *this,
        int arg0,
        unsigned __int8 *a2,
        int a4,
        int a5,
        int a6,
        unsigned int a7,
        int a8,
        int a9,
        int _38,
        char *a10)
{
  int result; // eax
  int v18; // edi
  unsigned __int8 v19; // al
  unsigned __int8 v20; // al
  result = a5; /*0x491ea1*/
  int v14 = arg0; /*0x491eb8*/
  MouseClass *v15 = a7; /*0x491ebf*/
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
    int v17 = -result; /*0x491ee2*/
    v14 = v17 + arg0; /*0x491ee4*/
    v18 = a4 - v17; /*0x491ee6*/
    result = a7 + 2 * v17; /*0x491ee8*/
    if ( (unsigned int)result >= *(_DWORD *)(*(_DWORD *)&DataGlobal_87F8E4[32096] + 28) ) /*0x491ef1*/
      result -= *(_DWORD *)(*(_DWORD *)&DataGlobal_87F8E4[32096] + 32); /*0x491ef3*/
    v15 = result; /*0x491ef6*/
  }
  while ( v18 > 0 ) /*0x491f00*/
  {
    v19 = *a2++; /*0x491f02*/
    if ( v19 ) /*0x491f0b*/
    {
      v15 += 2; /*0x491f2f*/
      int v21 = a6 - *a10++; /*0x491f32*/
      ++v14; /*0x491f56*/
      --v18; /*0x491f57*/
      if ( v21 < *(unsigned __int16 *)(v15 - 2) ) /*0x491f41*/
        *(_BYTE *)(v14 - 1) = *(_BYTE *)(*(unsigned __int8 *)(v19 + this->M4) + this->M8); /*0x491f69*/
    }
    else
    {
      v20 = *a2++; /*0x491f0d*/
      v18 -= v20; /*0x491f1d*/
      v14 += v20; /*0x491f1f*/
      a10 += v20; /*0x491f21*/
      v15 += 2 * v20; /*0x491f23*/
    }
    result = *(_DWORD *)&DataGlobal_87F8E4[32096]; /*0x491f70*/
    if ( v15 >= *(_DWORD *)(*(_DWORD *)&DataGlobal_87F8E4[32096] + 28) ) /*0x491f78*/
      v15 -= *(_DWORD *)(*(_DWORD *)&DataGlobal_87F8E4[32096] + 32); /*0x491f7a*/
  }
  return result; /*0x491f81*/
}
} // namespace gamemd
}

// 0x491FD0
namespace gamemd {
unsigned short * E4Recv_491FD0::sub_491FD0(int arg0, unsigned char * a2, RLEBlitTransXlatZReadWrite_E * aP3, int a5, int arg10, unsigned short * a6, int a8, int a9, int _38, char * a10)
{
{
  _WORD *result; // eax
  MouseClass *v15; // ecx
  RLEBlitTransXlatZReadWrite_E *v19; // ebx
  unsigned __int8 v20; // dl
  unsigned __int8 v21; // dl
  int v11 = a5; /*0x491fd1*/
  result = a6; /*0x491fd5*/
  int v14 = arg0; /*0x491fe0*/
  v15 = *(TacticalMap **)&stru_87C374[45776]; /*0x491fe8*/
  if ( a5 <= 0 ) /*0x491ff5*/
  {
    v19 = aP3; /*0x492027*/
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
    int v18 = -v11; /*0x492012*/
    v14 = v18 + arg0; /*0x492014*/
    v19 = (RLEBlitTransXlatZReadWrite_E *)((char *)aP3 - v18); /*0x492016*/
    result = &a6[v18]; /*0x492018*/
    if ( (unsigned int)result >= *(_DWORD *)(*(_DWORD *)&stru_87C374[45776] + 28) ) /*0x492020*/
      result = (_WORD *)((char *)result - *(_DWORD *)(*(_DWORD *)&stru_87C374[45776] + 32)); /*0x492022*/
  }
  while ( (int)v19 > 0 ) /*0x49202d*/
  {
    v20 = *a2++; /*0x49202f*/
    if ( v20 ) /*0x492039*/
    {
      ++v14; /*0x492078*/
      if ( arg10 - *a10 < (unsigned __int16)*result ) /*0x492068*/
      {
        *(_BYTE *)(v14 - 1) = *(_BYTE *)(this->M4 + v20); /*0x49207f*/
        *result = arg10 - *a10; /*0x49208c*/
      }
      v15 = *(TacticalMap **)&stru_87C374[45776]; /*0x492092*/
      ++result; /*0x492098*/
      ++a10; /*0x49209b*/
      v19 = (RLEBlitTransXlatZReadWrite_E *)((char *)v19 - 1); /*0x49209c*/
    }
    else
    {
      v21 = *a2++; /*0x49203b*/
      v19 = (RLEBlitTransXlatZReadWrite_E *)((char *)v19 - v21); /*0x49204d*/
      v14 += v21; /*0x49204f*/
      a10 += v21; /*0x492051*/
      result += v21; /*0x492053*/
    }
    if ( (unsigned int)result >= v15->TacticalMap_field_1C ) /*0x4920a0*/
      result = (_WORD *)((char *)result - v15->TacticalMap_field_20); /*0x4920a2*/
  }
  return result; /*0x4920a9*/
}
} // namespace gamemd
}

// 0x492100
namespace gamemd {
unsigned short * E4Recv_492100::sub_492100(int arg0, unsigned char * a2, int a4, int a5, int arg10, unsigned short * a6, int a8, int a9, int _38, char * a10)
{
{
  unsigned __int16 *result; // eax
  int v18; // ebx
  unsigned __int8 v19; // cl
  unsigned __int8 v20; // cl
  __int16 v23; // cx
  unsigned __int8 *a2a; // [esp+1Ch] [ebp+8h]
  unsigned __int8 v26; // [esp+20h] [ebp+Ch]
  result = a6; /*0x492110*/
  a2a = (unsigned __int8 *)**((_DWORD **)this + 1); /*0x492114*/
  int v13 = a5; /*0x492118*/
  int v14 = arg0; /*0x49211d*/
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
    int v17 = -v13; /*0x492145*/
    v14 = v17 + arg0; /*0x492147*/
    v18 = a4 - v17; /*0x492149*/
    result = &a6[v17]; /*0x49214b*/
    if ( (unsigned int)result >= *(_DWORD *)(*(_DWORD *)&DataGlobal_87F8E4[32096] + 28) ) /*0x492157*/
      result = (unsigned __int16 *)((char *)result - *(_DWORD *)(*(_DWORD *)&DataGlobal_87F8E4[32096] + 32)); /*0x492159*/
  }
  while ( v18 > 0 ) /*0x492164*/
  {
    v19 = *a2++; /*0x49216a*/
    v26 = v19; /*0x492170*/
    if ( v19 ) /*0x492178*/
    {
      int v21 = arg10 - *a10; /*0x49219e*/
      char * v22 = a10 + 1; /*0x4921a5*/
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
        *(_BYTE *)(v14 - 1) = *(_BYTE *)(a2a[v26] + this->M8); /*0x4921cf*/
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
    if ( (unsigned int)result >= *(_DWORD *)(*(_DWORD *)&DataGlobal_87F8E4[32096] + 28) ) /*0x4921f3*/
      result = (unsigned __int16 *)((char *)result - *(_DWORD *)(*(_DWORD *)&DataGlobal_87F8E4[32096] + 32)); /*0x4921f5*/
  }
  return result; /*0x492200*/
}
} // namespace gamemd
}

// 0x492250
namespace gamemd {
unsigned short * E4Recv_492250::sub_492250(unsigned char * a1, unsigned char * a2, RLEBlitTransRemapDestZReadWrite_E * aP3, int a5, int arg10, unsigned short * a6, int a8, int a9, int _38, char * a10)
{
{
  unsigned __int16 *result; // eax
  MouseClass *v15; // ecx
  RLEBlitTransRemapDestZReadWrite_E *v19; // ebx
  unsigned __int8 v21; // dl
  __int16 v24; // cx
  int v11 = a5; /*0x492251*/
  result = a6; /*0x492255*/
  _BYTE * v14 = a1; /*0x492260*/
  v15 = *(TacticalMap **)&stru_87C374[45776]; /*0x492268*/
  if ( a5 <= 0 ) /*0x492275*/
  {
    v19 = aP3; /*0x4922a7*/
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
    int v18 = -v11; /*0x492292*/
    v14 = &a1[v18]; /*0x492294*/
    v19 = (RLEBlitTransRemapDestZReadWrite_E *)((char *)aP3 - v18); /*0x492296*/
    result = &a6[v18]; /*0x492298*/
    if ( (unsigned int)result >= *(_DWORD *)(*(_DWORD *)&stru_87C374[45776] + 28) ) /*0x4922a0*/
      result = (unsigned __int16 *)((char *)result - *(_DWORD *)(*(_DWORD *)&stru_87C374[45776] + 32)); /*0x4922a2*/
  }
  while ( (int)v19 > 0 ) /*0x4922ad*/
  {
    if ( *a2++ ) /*0x4922af*/
    {
      int v22 = arg10 - *a10; /*0x4922db*/
      char * v23 = a10 + 1; /*0x4922e2*/
      if ( v22 >= *result ) /*0x4922e5*/
      {
        a10 = v23 + 1; /*0x49230d*/
        ++v14; /*0x49230e*/
        ++result; /*0x49230f*/
        v19 = (RLEBlitTransRemapDestZReadWrite_E *)((char *)v19 - 1); /*0x492312*/
      }
      else
      {
        ++result; /*0x4922ef*/
        *v14 = *(_BYTE *)(this->M4 + (unsigned __int8)*v14); /*0x4922f8*/
        v24 = *v23; /*0x4922fe*/
        a10 = v23 + 1; /*0x492304*/
        *(result - 1) = arg10 - v24; /*0x492305*/
        v19 = (RLEBlitTransRemapDestZReadWrite_E *)((char *)v19 - 1); /*0x492309*/
        ++v14; /*0x49230a*/
      }
      v15 = *(TacticalMap **)&stru_87C374[45776]; /*0x492313*/
    }
    else
    {
      v21 = *a2++; /*0x4922b7*/
      v19 = (RLEBlitTransRemapDestZReadWrite_E *)((char *)v19 - v21); /*0x4922c9*/
      v14 += v21; /*0x4922cb*/
      a10 += v21; /*0x4922cd*/
      result += v21; /*0x4922cf*/
    }
    if ( (unsigned int)result >= v15->TacticalMap_field_1C ) /*0x49231c*/
      result = (unsigned __int16 *)((char *)result - v15->TacticalMap_field_20); /*0x49231e*/
  }
  return result; /*0x492325*/
}
} // namespace gamemd
}

// 0x492370
namespace gamemd {
unsigned short * E4Recv_492370::sub_492370(unsigned char * a1, unsigned char * a2, RLEBlitTransRemapXlatZReadWrite_E * aP3, int a5, int arg10, unsigned short * a6, int a8, int a9, int _38, char * a10)
{
{
  unsigned __int16 *result; // eax
  MouseClass *v15; // ecx
  RLEBlitTransRemapXlatZReadWrite_E *v19; // ebx
  unsigned __int8 v20; // dl
  unsigned __int8 v21; // dl
  __int16 v22; // dx
  int v11 = a5; /*0x492371*/
  result = a6; /*0x492375*/
  _BYTE * v14 = a1; /*0x492380*/
  v15 = *(TacticalMap **)&stru_87C374[45776]; /*0x492388*/
  if ( a5 <= 0 ) /*0x492395*/
  {
    v19 = aP3; /*0x4923c7*/
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
    int v18 = -v11; /*0x4923b2*/
    v14 = &a1[v18]; /*0x4923b4*/
    v19 = (RLEBlitTransRemapXlatZReadWrite_E *)((char *)aP3 - v18); /*0x4923b6*/
    result = &a6[v18]; /*0x4923b8*/
    if ( (unsigned int)result >= *(_DWORD *)(*(_DWORD *)&stru_87C374[45776] + 28) ) /*0x4923c0*/
      result = (unsigned __int16 *)((char *)result - *(_DWORD *)(*(_DWORD *)&stru_87C374[45776] + 32)); /*0x4923c2*/
  }
  while ( (int)v19 > 0 ) /*0x4923cd*/
  {
    v20 = *a2++; /*0x4923d3*/
    if ( v20 ) /*0x4923e1*/
    {
      if ( arg10 - *a10 >= *result ) /*0x492410*/
      {
        v15 = *(TacticalMap **)&stru_87C374[45776]; /*0x492455*/
        ++a10; /*0x49245b*/
        ++v14; /*0x49245c*/
        ++result; /*0x49245d*/
      }
      else
      {
        ++result; /*0x492420*/
        *v14++ = *(_BYTE *)(*(unsigned __int8 *)(v20 + this->M4) + this->M8); /*0x49243a*/
        v22 = *a10++; /*0x492441*/
        *(result - 1) = arg10 - v22; /*0x492448*/
        v15 = *(TacticalMap **)&stru_87C374[45776]; /*0x49244c*/
      }
      v19 = (RLEBlitTransRemapXlatZReadWrite_E *)((char *)v19 - 1); /*0x492452*/
    }
    else
    {
      v21 = *a2++; /*0x4923e3*/
      v19 = (RLEBlitTransRemapXlatZReadWrite_E *)((char *)v19 - v21); /*0x4923f5*/
      v14 += v21; /*0x4923f7*/
      a10 += v21; /*0x4923f9*/
      result += v21; /*0x4923fb*/
    }
    if ( (unsigned int)result >= v15->TacticalMap_field_1C ) /*0x492464*/
      result = (unsigned __int16 *)((char *)result - v15->TacticalMap_field_20); /*0x492466*/
  }
  return result; /*0x492471*/
}
} // namespace gamemd
}

// 0x496310
namespace gamemd {
int E4Recv_496310::sub_496310()
{
{
  int result; // eax
  unsigned __int8 *v4; // edi
  int v7; // ebx
  unsigned __int8 v8; // al
  int v11; // [esp+10h] [ebp+4h]
  unsigned __int8 *v12; // [esp+14h] [ebp+8h]
  int v13; // [esp+18h] [ebp+Ch]
  unsigned __int8 v14; // [esp+18h] [ebp+Ch]
  int v15; // [esp+1Ch] [ebp+10h]
  result = v15; /*0x496310*/
  int v3 = v11; /*0x496314*/
  v4 = v12; /*0x49631b*/
  if ( v15 <= 0 ) /*0x496323*/
  {
    v7 = v13; /*0x496347*/
  }
  else
  {
    do /*0x496338*/
    {
      if ( *v4++ ) /*0x496325*/
        --result; /*0x496335*/
      else
        result -= *v4++; /*0x496330*/
    }
    while ( result > 0 ); /*0x496338*/
    result = -result; /*0x49633e*/
    v7 = v13 - result; /*0x496340*/
    v3 = v11 + 2 * result; /*0x496342*/
  }
  while ( v7 > 0 ) /*0x49634d*/
  {
    v8 = *v4++; /*0x496350*/
    v14 = v8; /*0x496355*/
    if ( v8 ) /*0x496359*/
    {
      int v9 = this->M4; /*0x496376*/
  int v1; // esi
      LOWORD(v1) = (unsigned short)this->M8; /*0x496379*/
      v3 += 2; /*0x496383*/
      int v10 = *(unsigned __int16 *)(v9 + 2 * v14); /*0x496386*/
      LOWORD(v9) = *(_WORD *)(v3 - 2) >> 2; /*0x49638e*/
      result = 3 * (v1 & v9); /*0x49639a*/
      --v7; /*0x49639f*/
      *(_WORD *)(v3 - 2) = result + (v1 & ((unsigned __int16)v10 >> 2)); /*0x4963a0*/
    }
    else
    {
      LOBYTE(result) = *v4++; /*0x49635b*/
      result = (unsigned __int8)result; /*0x496366*/
      v7 -= (unsigned __int8)result; /*0x49636b*/
      v3 += 2 * (unsigned __int8)result; /*0x49636d*/
    }
  }
  return result; /*0x4963a9*/
}
} // namespace gamemd
}

// 0x4964D0
namespace gamemd {
int E4Recv_4964D0::sub_4964D0()
{
{
  int result; // eax
  unsigned __int8 *v4; // edi
  int v7; // ebx
  unsigned __int8 v8; // al
  __int16 v11; // cx
  int v12; // [esp+10h] [ebp+4h]
  unsigned __int8 *v13; // [esp+14h] [ebp+8h]
  int v14; // [esp+18h] [ebp+Ch]
  unsigned __int8 v15; // [esp+18h] [ebp+Ch]
  int v16; // [esp+1Ch] [ebp+10h]
  result = v16; /*0x4964d0*/
  int v3 = v12; /*0x4964d4*/
  v4 = v13; /*0x4964db*/
  if ( v16 <= 0 ) /*0x4964e3*/
  {
    v7 = v14; /*0x496507*/
  }
  else
  {
    do /*0x4964f8*/
    {
      if ( *v4++ ) /*0x4964e5*/
        --result; /*0x4964f5*/
      else
        result -= *v4++; /*0x4964f0*/
    }
    while ( result > 0 ); /*0x4964f8*/
    result = -result; /*0x4964fe*/
    v7 = v14 - result; /*0x496500*/
    v3 = v12 + 2 * result; /*0x496502*/
  }
  while ( v7 > 0 ) /*0x49650d*/
  {
    v8 = *v4++; /*0x496510*/
    v15 = v8; /*0x496515*/
    if ( v8 ) /*0x496519*/
    {
      int v9 = this->M4; /*0x496536*/
  int v1; // esi
      LOWORD(v1) = (unsigned short)this->M8; /*0x496539*/
      v3 += 2; /*0x496543*/
      LOWORD(v9) = *(_WORD *)(v9 + 2 * v15) >> 2; /*0x49654a*/
      int v10 = v1 & v9; /*0x49654e*/
      v11 = 3 * v10; /*0x496550*/
      LOWORD(v10) = *(_WORD *)(v3 - 2) >> 2; /*0x496557*/
      result = v1 & v10; /*0x49655b*/
      --v7; /*0x49655f*/
      *(_WORD *)(v3 - 2) = result + v11; /*0x496560*/
    }
    else
    {
      LOBYTE(result) = *v4++; /*0x49651b*/
      result = (unsigned __int8)result; /*0x496526*/
      v7 -= (unsigned __int8)result; /*0x49652b*/
      v3 += 2 * (unsigned __int8)result; /*0x49652d*/
    }
  }
  return result; /*0x496569*/
}
} // namespace gamemd
}

// 0x4965B0
namespace gamemd {
int E4Recv_4965B0::sub_4965B0(unsigned short * a1, RLEBlitTransXlatZRead * aP2, int a4, int a5, int a6, unsigned int a7, int a8, int a9, int _38, char * a10)
{
        _DWORD *this,
        _WORD *a1,
        RLEBlitTransXlatZRead *aP2,
        int a4,
        int a5,
        int a6,
        unsigned int a7,
        int a8,
        int a9,
        int _38,
        char *a10)
{
  int result; // eax
  int v18; // ebx
  unsigned __int8 v19; // al
  unsigned __int8 v20; // al
  result = a5; /*0x4965b1*/
  MouseClass *v12 = a7; /*0x4965b5*/
  _WORD * v15 = a1; /*0x4965c9*/
  if ( a5 <= 0 ) /*0x4965cf*/
  {
    v18 = a4; /*0x496608*/
  }
  else
  {
    do /*0x4965e6*/
    {
      char v16 = aP2->__pad_0[0]; /*0x4965d1*/
      aP2 = (RLEBlitTransXlatZRead *)((char *)aP2 + 1); /*0x4965d4*/
      if ( v16 ) /*0x4965d7*/
      {
        --result; /*0x4965e3*/
      }
      else
      {
        result -= (unsigned __int8)aP2->__pad_0[0]; /*0x4965de*/
        aP2 = (RLEBlitTransXlatZRead *)((char *)aP2 + 1); /*0x4965e0*/
      }
    }
    while ( result > 0 ); /*0x4965e6*/
    int v17 = -result; /*0x4965ec*/
    v18 = a4 - v17; /*0x4965ee*/
    v15 = &a1[v17]; /*0x4965f0*/
    result = a7 + 2 * v17; /*0x4965f3*/
    if ( (unsigned int)result >= *(_DWORD *)(*(_DWORD *)&stru_87C374[45776] + 28) ) /*0x4965ff*/
      result -= *(_DWORD *)(*(_DWORD *)&stru_87C374[45776] + 32); /*0x496601*/
    v12 = result; /*0x496604*/
  }
  while ( v18 > 0 ) /*0x49660e*/
  {
    v19 = aP2->__pad_0[0]; /*0x496610*/
    aP2 = (RLEBlitTransXlatZRead *)((char *)aP2 + 1); /*0x496613*/
    if ( v19 ) /*0x49661a*/
    {
      v12 += 2; /*0x496641*/
      int v21 = a6 - *a10++; /*0x496644*/
      if ( v21 < *(unsigned __int16 *)(v12 - 2) ) /*0x49664f*/
        *v15 = *(_WORD *)(this->M4 + 2 * v19); /*0x496665*/
      ++v15; /*0x496668*/
      --v18; /*0x49666b*/
    }
    else
    {
      v20 = aP2->__pad_0[0]; /*0x49661c*/
      aP2 = (RLEBlitTransXlatZRead *)((char *)aP2 + 1); /*0x49661f*/
      v18 -= v20; /*0x49662d*/
      v15 += v20; /*0x496632*/
      v12 += 2 * v20; /*0x496634*/
      a10 += v20; /*0x496636*/
    }
    result = *(_DWORD *)&stru_87C374[45776]; /*0x49666c*/
    if ( v12 >= *(_DWORD *)(*(_DWORD *)&stru_87C374[45776] + 28) ) /*0x496674*/
      v12 -= *(_DWORD *)(*(_DWORD *)&stru_87C374[45776] + 32); /*0x496676*/
  }
  return result; /*0x49667d*/
}
} // namespace gamemd
}

// 0x4966D0
namespace gamemd {
int E4Recv_4966D0::sub_4966D0(int arg0, unsigned char * a2, int a4, int a5, int a6, unsigned int a7, int a8, int a9, int _38, char * a10)
{
        RLEBlitTransZRemapXlatZRead_G *this,
        int arg0,
        unsigned __int8 *a2,
        int a4,
        int a5,
        int a6,
        unsigned int a7,
        int a8,
        int a9,
        int _38,
        char *a10)
{
  int result; // eax
  int v18; // ebx
  unsigned __int8 v19; // al
  unsigned __int8 v20; // al
  unsigned __int8 *a2a; // [esp+1Ch] [ebp+8h]

  result = a5; /*0x4966e7*/
  int v14 = arg0; /*0x4966f2*/
  a2a = (unsigned __int8 *)**((_DWORD **)this + 1); /*0x4966f6*/
  MouseClass *v15 = a7; /*0x4966fa*/
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
    int v17 = -result; /*0x49671d*/
    v18 = a4 - v17; /*0x49671f*/
    v14 = arg0 + 2 * v17; /*0x496721*/
    result = a7 + 2 * v17; /*0x496724*/
    if ( (unsigned int)result >= *(_DWORD *)(*(_DWORD *)&DataGlobal_87F8E4[32096] + 28) ) /*0x49672a*/
      result -= *(_DWORD *)(*(_DWORD *)&DataGlobal_87F8E4[32096] + 32); /*0x49672c*/
    v15 = result; /*0x49672f*/
  }
  while ( v18 > 0 ) /*0x496739*/
  {
    v19 = *a2++; /*0x49673f*/
    if ( v19 ) /*0x496749*/
    {
      v15 += 2; /*0x496770*/
      int v21 = a6 - *a10++; /*0x496773*/
      v14 += 2; /*0x496794*/
      --v18; /*0x496797*/
      if ( v21 < *(unsigned __int16 *)(v15 - 2) ) /*0x496782*/
        *(_WORD *)(v14 - 2) = *(_WORD *)(this->M8 + 2 * a2a[v19]); /*0x4967aa*/
    }
    else
    {
      v20 = *a2++; /*0x49674b*/
      v18 -= v20; /*0x49675c*/
      a10 += v20; /*0x49675e*/
      v14 += 2 * v20; /*0x496763*/
      v15 += 2 * v20; /*0x496765*/
    }
    result = *(_DWORD *)&DataGlobal_87F8E4[32096]; /*0x4967b4*/
    if ( v15 >= *(_DWORD *)(*(_DWORD *)&DataGlobal_87F8E4[32096] + 28) ) /*0x4967bc*/
      v15 -= *(_DWORD *)(*(_DWORD *)&DataGlobal_87F8E4[32096] + 32); /*0x4967be*/
  }
  return result; /*0x4967c9*/
}
} // namespace gamemd
}

// 0x496930
namespace gamemd {
int E4Recv_496930::sub_496930(int arg0, unsigned char * a2, RLEBlitTransLucent75ZRead_G * aP3, int a5, int a6, unsigned int a7, int a8, int a9, int _38, char * a10)
{
        RLEBlitTransLucent75ZRead_G *this,
        int arg0,
        unsigned __int8 *a2,
        RLEBlitTransLucent75ZRead_G *aP3,
        int a5,
        int a6,
        unsigned int a7,
        int a8,
        int a9,
        int _38,
        char *a10)
{
  int result; // eax
  RLEBlitTransLucent75ZRead_G *v18; // ebx
  unsigned __int8 v19; // al
  unsigned __int8 v20; // al
  result = a5; /*0x496931*/
  int v12 = arg0; /*0x496935*/
  MouseClass *v14 = a7; /*0x496940*/
  if ( a5 <= 0 ) /*0x496955*/
  {
    v18 = aP3; /*0x496988*/
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
    int v17 = -result; /*0x496972*/
    v18 = (RLEBlitTransLucent75ZRead_G *)((char *)aP3 - v17); /*0x496974*/
    v12 = arg0 + 2 * v17; /*0x496976*/
    result = a7 + 2 * v17; /*0x496979*/
    if ( (unsigned int)result >= *(_DWORD *)(*(_DWORD *)&stru_87C374[45776] + 28) ) /*0x49697f*/
      result -= *(_DWORD *)(*(_DWORD *)&stru_87C374[45776] + 32); /*0x496981*/
    v14 = result; /*0x496984*/
  }
  while ( (int)v18 > 0 ) /*0x49698e*/
  {
    v19 = *a2++; /*0x496994*/
    if ( v19 ) /*0x49699e*/
    {
      v14 += 2; /*0x4969c5*/
      int v21 = a6 - *a10++; /*0x4969c8*/
      v12 += 2; /*0x4969e7*/
      v18 = (RLEBlitTransLucent75ZRead_G *)((char *)v18 - 1); /*0x496a0a*/
      if ( v21 < *(unsigned __int16 *)(v14 - 2) ) /*0x4969d7*/
        *(_WORD *)(v12 - 2) = 3 * ((unsigned short)this->M2 & (*(_WORD *)(v12 - 2) >> 2)) /*0x496a0b*/
                            + ((unsigned short)this->M2 & (*(_WORD *)(this->M4 + 2 * v19) >> 2));
    }
    else
    {
      v20 = *a2++; /*0x4969a0*/
      v18 = (RLEBlitTransLucent75ZRead_G *)((char *)v18 - v20); /*0x4969b1*/
      a10 += v20; /*0x4969b3*/
      v12 += 2 * v20; /*0x4969b8*/
      v14 += 2 * v20; /*0x4969ba*/
    }
    result = *(_DWORD *)&stru_87C374[45776]; /*0x496a19*/
    if ( v14 >= *(_DWORD *)(*(_DWORD *)&stru_87C374[45776] + 28) ) /*0x496a21*/
      v14 -= *(_DWORD *)(*(_DWORD *)&stru_87C374[45776] + 32); /*0x496a23*/
  }
  return result; /*0x496a2e*/
}
} // namespace gamemd
}

// 0x496A80
namespace gamemd {
int E4Recv_496A80::sub_496A80(unsigned short * a1, unsigned char * a2, RLEBlitTransLucent50ZRead_G * aP3, int a5, int a6, unsigned int a7, int a8, int a9, int _38, char * a10)
{
        RLEBlitTransLucent50ZRead_G *this,
        _WORD *a1,
        unsigned __int8 *a2,
        RLEBlitTransLucent50ZRead_G *aP3,
        int a5,
        int a6,
        unsigned int a7,
        int a8,
        int a9,
        int _38,
        char *a10)
{
  int result; // eax
  RLEBlitTransLucent50ZRead_G *v18; // ebx
  unsigned __int8 v19; // al
  unsigned __int8 v20; // al
  result = a5; /*0x496a81*/
  MouseClass *v12 = a7; /*0x496a85*/
  _WORD * v14 = a1; /*0x496a90*/
  if ( a5 <= 0 ) /*0x496aa5*/
  {
    v18 = aP3; /*0x496ad8*/
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
    int v17 = -result; /*0x496ac2*/
    v18 = (RLEBlitTransLucent50ZRead_G *)((char *)aP3 - v17); /*0x496ac4*/
    v14 = &a1[v17]; /*0x496ac6*/
    result = a7 + 2 * v17; /*0x496ac9*/
    if ( (unsigned int)result >= *(_DWORD *)(*(_DWORD *)&stru_87C374[45776] + 28) ) /*0x496acf*/
      result -= *(_DWORD *)(*(_DWORD *)&stru_87C374[45776] + 32); /*0x496ad1*/
    v12 = result; /*0x496ad4*/
  }
  while ( (int)v18 > 0 ) /*0x496ade*/
  {
    v19 = *a2++; /*0x496ae4*/
    if ( v19 ) /*0x496aee*/
    {
      v12 += 2; /*0x496b15*/
      int v21 = a6 - *a10++; /*0x496b18*/
      v18 = (RLEBlitTransLucent50ZRead_G *)((char *)v18 - 1); /*0x496b51*/
      if ( v21 < *(unsigned __int16 *)(v12 - 2) ) /*0x496b27*/
        *v14 = ((unsigned short)this->M2 & (*v14 >> 1)) /*0x496b52*/
             + ((unsigned short)this->M2 & (*(_WORD *)(this->M4 + 2 * v19) >> 1));
      ++v14; /*0x496b59*/
    }
    else
    {
      v20 = *a2++; /*0x496af0*/
      v18 = (RLEBlitTransLucent50ZRead_G *)((char *)v18 - v20); /*0x496b01*/
      a10 += v20; /*0x496b03*/
      v14 += v20; /*0x496b08*/
      v12 += 2 * v20; /*0x496b0a*/
    }
    result = *(_DWORD *)&stru_87C374[45776]; /*0x496b62*/
    if ( v12 >= *(_DWORD *)(*(_DWORD *)&stru_87C374[45776] + 28) ) /*0x496b6a*/
      v12 -= *(_DWORD *)(*(_DWORD *)&stru_87C374[45776] + 32); /*0x496b6c*/
  }
  return result; /*0x496b77*/
}
} // namespace gamemd
}

// 0x496BC0
namespace gamemd {
int E4Recv_496BC0::sub_496BC0(int arg0, unsigned char * a2, RLEBlitTransLucent25ZRead_G * aP3, int a5, int a6, unsigned int a7, int a8, int a9, int _38, char * a10)
{
        RLEBlitTransLucent25ZRead_G *this,
        int arg0,
        unsigned __int8 *a2,
        RLEBlitTransLucent25ZRead_G *aP3,
        int a5,
        int a6,
        unsigned int a7,
        int a8,
        int a9,
        int _38,
        char *a10)
{
  int result; // eax
  RLEBlitTransLucent25ZRead_G *v18; // ebx
  unsigned __int8 v19; // al
  unsigned __int8 v20; // al
  result = a5; /*0x496bc1*/
  int v12 = arg0; /*0x496bc5*/
  MouseClass *v14 = a7; /*0x496bd0*/
  if ( a5 <= 0 ) /*0x496be5*/
  {
    v18 = aP3; /*0x496c18*/
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
    int v17 = -result; /*0x496c02*/
    v18 = (RLEBlitTransLucent25ZRead_G *)((char *)aP3 - v17); /*0x496c04*/
    v12 = arg0 + 2 * v17; /*0x496c06*/
    result = a7 + 2 * v17; /*0x496c09*/
    if ( (unsigned int)result >= *(_DWORD *)(*(_DWORD *)&stru_87C374[45776] + 28) ) /*0x496c0f*/
      result -= *(_DWORD *)(*(_DWORD *)&stru_87C374[45776] + 32); /*0x496c11*/
    v14 = result; /*0x496c14*/
  }
  while ( (int)v18 > 0 ) /*0x496c1e*/
  {
    v19 = *a2++; /*0x496c24*/
    if ( v19 ) /*0x496c2e*/
    {
      v14 += 2; /*0x496c55*/
      int v21 = a6 - *a10++; /*0x496c58*/
      v12 += 2; /*0x496c77*/
      v18 = (RLEBlitTransLucent25ZRead_G *)((char *)v18 - 1); /*0x496c9a*/
      if ( v21 < *(unsigned __int16 *)(v14 - 2) ) /*0x496c67*/
        *(_WORD *)(v12 - 2) = ((unsigned short)this->M2 & (*(_WORD *)(v12 - 2) >> 2)) /*0x496c9b*/
                            + 3 * ((unsigned short)this->M2 & (*(_WORD *)(this->M4 + 2 * v19) >> 2));
    }
    else
    {
      v20 = *a2++; /*0x496c30*/
      v18 = (RLEBlitTransLucent25ZRead_G *)((char *)v18 - v20); /*0x496c41*/
      a10 += v20; /*0x496c43*/
      v12 += 2 * v20; /*0x496c48*/
      v14 += 2 * v20; /*0x496c4a*/
    }
    result = *(_DWORD *)&stru_87C374[45776]; /*0x496ca9*/
    if ( v14 >= *(_DWORD *)(*(_DWORD *)&stru_87C374[45776] + 28) ) /*0x496cb1*/
      v14 -= *(_DWORD *)(*(_DWORD *)&stru_87C374[45776] + 32); /*0x496cb3*/
  }
  return result; /*0x496cbe*/
}
} // namespace gamemd
}

// 0x496D10
namespace gamemd {
int E4Recv_496D10::sub_496D10(int arg0, unsigned char * a2, RLEBlitTransLucent75ZReadWarp_G * aP3, int a5, int a6, unsigned int a7, int a8, int a9, int arg20, char * a10)
{
        RLEBlitTransLucent75ZReadWarp_G *this,
        int arg0,
        unsigned __int8 *a2,
        RLEBlitTransLucent75ZReadWarp_G *aP3,
        int a5,
        int a6,
        unsigned int a7,
        int a8,
        int a9,
        int arg20,
        char *a10)
{
  int result; // eax
  RLEBlitTransLucent75ZReadWarp_G *v18; // ebx
  unsigned __int8 v19; // al
  unsigned __int8 v20; // al
  result = a5; /*0x496d11*/
  int v12 = arg0; /*0x496d15*/
  MouseClass *v14 = a7; /*0x496d20*/
  if ( a5 <= 0 ) /*0x496d35*/
  {
    v18 = aP3; /*0x496d68*/
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
    int v17 = -result; /*0x496d52*/
    v18 = (RLEBlitTransLucent75ZReadWarp_G *)((char *)aP3 - v17); /*0x496d54*/
    v12 = arg0 + 2 * v17; /*0x496d56*/
    result = a7 + 2 * v17; /*0x496d59*/
    if ( (unsigned int)result >= *(_DWORD *)(*(_DWORD *)&stru_87C374[45776] + 28) ) /*0x496d5f*/
      result -= *(_DWORD *)(*(_DWORD *)&stru_87C374[45776] + 32); /*0x496d61*/
    v14 = result; /*0x496d64*/
  }
  while ( (int)v18 > 0 ) /*0x496d6e*/
  {
    v19 = *a2++; /*0x496d74*/
    if ( v19 ) /*0x496d7e*/
    {
      v14 += 2; /*0x496da5*/
      int v21 = a6 - *a10++; /*0x496da8*/
      v12 += 2; /*0x496dc7*/
      v18 = (RLEBlitTransLucent75ZReadWarp_G *)((char *)v18 - 1); /*0x496def*/
      if ( v21 < *(unsigned __int16 *)(v14 - 2) ) /*0x496db7*/
        *(_WORD *)(v12 - 2) = 3 * ((unsigned short)this->M2 & (*(_WORD *)(v12 + 2 * arg20 - 2) >> 2)) /*0x496df0*/
                            + ((unsigned short)this->M2 & (*(_WORD *)(this->M4 + 2 * v19) >> 2));
    }
    else
    {
      v20 = *a2++; /*0x496d80*/
      v18 = (RLEBlitTransLucent75ZReadWarp_G *)((char *)v18 - v20); /*0x496d91*/
      a10 += v20; /*0x496d93*/
      v12 += 2 * v20; /*0x496d98*/
      v14 += 2 * v20; /*0x496d9a*/
    }
    result = *(_DWORD *)&stru_87C374[45776]; /*0x496dfe*/
    if ( v14 >= *(_DWORD *)(*(_DWORD *)&stru_87C374[45776] + 28) ) /*0x496e06*/
      v14 -= *(_DWORD *)(*(_DWORD *)&stru_87C374[45776] + 32); /*0x496e08*/
  }
  return result; /*0x496e13*/
}
} // namespace gamemd
}

// 0x496E60
namespace gamemd {
int E4Recv_496E60::sub_496E60(unsigned short * a1, unsigned char * a2, RLEBlitTransLucent50ZReadWarp_G * aP3, int a5, int a6, unsigned int a7, int a8, int a9, int arg20, char * a10)
{
        RLEBlitTransLucent50ZReadWarp_G *this,
        _WORD *a1,
        unsigned __int8 *a2,
        RLEBlitTransLucent50ZReadWarp_G *aP3,
        int a5,
        int a6,
        unsigned int a7,
        int a8,
        int a9,
        int arg20,
        char *a10)
{
  int result; // eax
  RLEBlitTransLucent50ZReadWarp_G *v18; // ebx
  unsigned __int8 v19; // al
  unsigned __int8 v20; // al
  result = a5; /*0x496e61*/
  _WORD * v12 = a1; /*0x496e65*/
  MouseClass *v14 = a7; /*0x496e70*/
  if ( a5 <= 0 ) /*0x496e85*/
  {
    v18 = aP3; /*0x496eb8*/
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
    int v17 = -result; /*0x496ea2*/
    v18 = (RLEBlitTransLucent50ZReadWarp_G *)((char *)aP3 - v17); /*0x496ea4*/
    v12 = &a1[v17]; /*0x496ea6*/
    result = a7 + 2 * v17; /*0x496ea9*/
    if ( (unsigned int)result >= *(_DWORD *)(*(_DWORD *)&stru_87C374[45776] + 28) ) /*0x496eaf*/
      result -= *(_DWORD *)(*(_DWORD *)&stru_87C374[45776] + 32); /*0x496eb1*/
    v14 = result; /*0x496eb4*/
  }
  while ( (int)v18 > 0 ) /*0x496ebe*/
  {
    v19 = *a2++; /*0x496ec4*/
    if ( v19 ) /*0x496ece*/
    {
      v14 += 2; /*0x496ef5*/
      int v21 = a6 - *a10++; /*0x496ef8*/
      v18 = (RLEBlitTransLucent50ZReadWarp_G *)((char *)v18 - 1); /*0x496f36*/
      if ( v21 < *(unsigned __int16 *)(v14 - 2) ) /*0x496f07*/
        *v12 = ((unsigned short)this->M2 & (v12[arg20] >> 1)) /*0x496f37*/
             + ((unsigned short)this->M2 & (*(_WORD *)(this->M4 + 2 * v19) >> 1));
      ++v12; /*0x496f3e*/
    }
    else
    {
      v20 = *a2++; /*0x496ed0*/
      v18 = (RLEBlitTransLucent50ZReadWarp_G *)((char *)v18 - v20); /*0x496ee1*/
      a10 += v20; /*0x496ee3*/
      v12 += v20; /*0x496ee8*/
      v14 += 2 * v20; /*0x496eea*/
    }
    result = *(_DWORD *)&stru_87C374[45776]; /*0x496f47*/
    if ( v14 >= *(_DWORD *)(*(_DWORD *)&stru_87C374[45776] + 28) ) /*0x496f4f*/
      v14 -= *(_DWORD *)(*(_DWORD *)&stru_87C374[45776] + 32); /*0x496f51*/
  }
  return result; /*0x496f5c*/
}
} // namespace gamemd
}

// 0x496FB0
namespace gamemd {
int E4Recv_496FB0::sub_496FB0(int arg0, unsigned char * a2, RLEBlitTransLucent25ZReadWarp_G * aP3, int a5, int a6, unsigned int a7, int a8, int a9, int arg20, char * a10)
{
        RLEBlitTransLucent25ZReadWarp_G *this,
        int arg0,
        unsigned __int8 *a2,
        RLEBlitTransLucent25ZReadWarp_G *aP3,
        int a5,
        int a6,
        unsigned int a7,
        int a8,
        int a9,
        int arg20,
        char *a10)
{
  int result; // eax
  RLEBlitTransLucent25ZReadWarp_G *v18; // ebx
  unsigned __int8 v19; // al
  unsigned __int8 v20; // al
  result = a5; /*0x496fb1*/
  int v12 = arg0; /*0x496fb5*/
  MouseClass *v14 = a7; /*0x496fc0*/
  if ( a5 <= 0 ) /*0x496fd5*/
  {
    v18 = aP3; /*0x497008*/
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
    int v17 = -result; /*0x496ff2*/
    v18 = (RLEBlitTransLucent25ZReadWarp_G *)((char *)aP3 - v17); /*0x496ff4*/
    v12 = arg0 + 2 * v17; /*0x496ff6*/
    result = a7 + 2 * v17; /*0x496ff9*/
    if ( (unsigned int)result >= *(_DWORD *)(*(_DWORD *)&stru_87C374[45776] + 28) ) /*0x496fff*/
      result -= *(_DWORD *)(*(_DWORD *)&stru_87C374[45776] + 32); /*0x497001*/
    v14 = result; /*0x497004*/
  }
  while ( (int)v18 > 0 ) /*0x49700e*/
  {
    v19 = *a2++; /*0x497014*/
    if ( v19 ) /*0x49701e*/
    {
      v14 += 2; /*0x497045*/
      int v21 = a6 - *a10++; /*0x497048*/
      v12 += 2; /*0x497067*/
      v18 = (RLEBlitTransLucent25ZReadWarp_G *)((char *)v18 - 1); /*0x49708f*/
      if ( v21 < *(unsigned __int16 *)(v14 - 2) ) /*0x497057*/
        *(_WORD *)(v12 - 2) = ((unsigned short)this->M2 & (*(_WORD *)(v12 + 2 * arg20 - 2) >> 2)) /*0x497090*/
                            + 3 * ((unsigned short)this->M2 & (*(_WORD *)(this->M4 + 2 * v19) >> 2));
    }
    else
    {
      v20 = *a2++; /*0x497020*/
      v18 = (RLEBlitTransLucent25ZReadWarp_G *)((char *)v18 - v20); /*0x497031*/
      a10 += v20; /*0x497033*/
      v12 += 2 * v20; /*0x497038*/
      v14 += 2 * v20; /*0x49703a*/
    }
    result = *(_DWORD *)&stru_87C374[45776]; /*0x49709e*/
    if ( v14 >= *(_DWORD *)(*(_DWORD *)&stru_87C374[45776] + 28) ) /*0x4970a6*/
      v14 -= *(_DWORD *)(*(_DWORD *)&stru_87C374[45776] + 32); /*0x4970a8*/
  }
  return result; /*0x4970b3*/
}
} // namespace gamemd
}

// 0x497100
namespace gamemd {
unsigned short * E4Recv_497100::sub_497100(int arg0, unsigned char * a2, RLEBlitTransXlatZReadWrite_G * aP3, int a5, int arg10, unsigned short * a6, int a8, int a9, int _38, char * a10)
{
{
  _WORD *result; // eax
  RLEBlitTransXlatZReadWrite_G *v18; // ebp
  unsigned __int8 v19; // dl
  unsigned __int8 v20; // dl
  int v11 = a5; /*0x497101*/
  result = a6; /*0x497105*/
  int v13 = arg0; /*0x49710c*/
  if ( a5 <= 0 ) /*0x49711f*/
  {
    v18 = aP3; /*0x497154*/
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
    int v17 = -v11; /*0x49713a*/
    v18 = (RLEBlitTransXlatZReadWrite_G *)((char *)aP3 - v17); /*0x49713c*/
    v13 = arg0 + 2 * v17; /*0x49713e*/
    result = &a6[v17]; /*0x497141*/
    if ( (unsigned int)result >= *(_DWORD *)(*(_DWORD *)&stru_87C374[45776] + 28) ) /*0x49714d*/
      result = (_WORD *)((char *)result - *(_DWORD *)(*(_DWORD *)&stru_87C374[45776] + 32)); /*0x49714f*/
  }
  while ( (int)v18 > 0 ) /*0x49715a*/
  {
    v19 = *a2++; /*0x497160*/
    if ( v19 ) /*0x497169*/
    {
      v13 += 2; /*0x4971a9*/
      if ( arg10 - *a10 < (unsigned __int16)*result ) /*0x497199*/
      {
        *(_WORD *)(v13 - 2) = *(_WORD *)(this->M4 + 2 * v19); /*0x4971b7*/
        *result = arg10 - *a10; /*0x4971c1*/
      }
      ++result; /*0x4971c9*/
      ++a10; /*0x4971cc*/
      v18 = (RLEBlitTransXlatZReadWrite_G *)((char *)v18 - 1); /*0x4971cd*/
    }
    else
    {
      v20 = *a2++; /*0x49716b*/
      v18 = (RLEBlitTransXlatZReadWrite_G *)((char *)v18 - v20); /*0x49717c*/
      a10 += v20; /*0x49717e*/
      v13 += 2 * v20; /*0x497183*/
      result += v20; /*0x497185*/
    }
    if ( (unsigned int)result >= *(_DWORD *)(*(_DWORD *)&stru_87C374[45776] + 28) ) /*0x4971d7*/
      result = (_WORD *)((char *)result - *(_DWORD *)(*(_DWORD *)&stru_87C374[45776] + 32)); /*0x4971d9*/
  }
  return result; /*0x4971e0*/
}
} // namespace gamemd
}

// 0x497230
namespace gamemd {
unsigned short * E4Recv_497230::sub_497230(int arg0, unsigned char * a2, int a4, int a5, int arg10, unsigned short * a6, int a8, int a9, int _38, char * a10)
{
{
  unsigned __int16 *result; // eax
  int v18; // ebx
  unsigned __int8 v19; // cl
  unsigned __int8 v20; // cl
  __int16 v24; // cx
  unsigned __int8 *a2a; // [esp+1Ch] [ebp+8h]
  unsigned __int8 v27; // [esp+20h] [ebp+Ch]
  result = a6; /*0x497240*/
  a2a = (unsigned __int8 *)**((_DWORD **)this + 1); /*0x497244*/
  int v13 = a5; /*0x497248*/
  int v14 = arg0; /*0x49724d*/
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
    int v17 = -v13; /*0x497275*/
    v18 = a4 - v17; /*0x497277*/
    v14 = arg0 + 2 * v17; /*0x497279*/
    result = &a6[v17]; /*0x49727c*/
    if ( (unsigned int)result >= *(_DWORD *)(*(_DWORD *)&DataGlobal_87F8E4[32096] + 28) ) /*0x497288*/
      result = (unsigned __int16 *)((char *)result - *(_DWORD *)(*(_DWORD *)&DataGlobal_87F8E4[32096] + 32)); /*0x49728a*/
  }
  while ( v18 > 0 ) /*0x497295*/
  {
    v19 = *a2++; /*0x49729b*/
    v27 = v19; /*0x4972a1*/
    if ( v19 ) /*0x4972a9*/
    {
      int v22 = arg10 - *a10; /*0x4972d1*/
      char * v23 = a10 + 1; /*0x4972d8*/
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
        *(_WORD *)(v14 - 2) = *(_WORD *)(this->M8 + 2 * a2a[v27]); /*0x497305*/
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
      int v21 = 2 * v20; /*0x4972c1*/
      v14 += v21; /*0x4972c4*/
      result = (unsigned __int16 *)((char *)result + v21); /*0x4972c6*/
    }
    if ( (unsigned int)result >= *(_DWORD *)(*(_DWORD *)&DataGlobal_87F8E4[32096] + 28) ) /*0x49732c*/
      result = (unsigned __int16 *)((char *)result - *(_DWORD *)(*(_DWORD *)&DataGlobal_87F8E4[32096] + 32)); /*0x49732e*/
  }
  return result; /*0x497339*/
}
} // namespace gamemd
}

// 0x497390
namespace gamemd {
unsigned short * E4Recv_497390::sub_497390(unsigned short * a1, unsigned char * a2, int a4, RLEBlitTransDarkenZReadWrite_G * aP4, int arg10, unsigned short * a6, int a8, int a9, int _38, char * a10)
{
{
  RLEBlitTransDarkenZReadWrite_G *v11; // edx
  RLEBlitTransDarkenZReadWrite_G *v13; // esi
  unsigned __int16 *result; // eax
  int v18; // ebp
  unsigned __int8 v20; // dl
  __int16 v21; // dx
  v11 = aP4; /*0x497391*/
  v13 = (RLEBlitTransDarkenZReadWrite_G *)a1; /*0x49739c*/
  result = a6; /*0x4973a9*/
  if ( (int)aP4 <= 0 ) /*0x4973b1*/
  {
    v18 = a4; /*0x4973e6*/
  }
  else
  {
    do /*0x4973c6*/
    {
      if ( *a2++ ) /*0x4973b3*/
        v11 = (RLEBlitTransDarkenZReadWrite_G *)((char *)v11 - 1); /*0x4973c3*/
      RLEBlitTransDarkenZReadWrite_G *v11 = (RLEBlitTransDarkenZReadWrite_G *)((char *)v11 - *a2++); /*0x4973be*/
    }
    while ( (int)v11 > 0 ); /*0x4973c6*/
    int v17 = -(int)v11; /*0x4973cc*/
    v18 = a4 - v17; /*0x4973ce*/
    v13 = (RLEBlitTransDarkenZReadWrite_G *)&a1[v17]; /*0x4973d0*/
    result = &a6[v17]; /*0x4973d3*/
    if ( (unsigned int)result >= *(_DWORD *)(*(_DWORD *)&stru_87C374[45776] + 28) ) /*0x4973df*/
      result = (unsigned __int16 *)((char *)result - *(_DWORD *)(*(_DWORD *)&stru_87C374[45776] + 32)); /*0x4973e1*/
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
        LOWORD(v13->vfptr) = (unsigned short)this->M1 & (LOWORD(v13->vfptr) >> 1); /*0x49743a*/
        v21 = *a10++; /*0x49743d*/
        *(result - 1) = arg10 - v21; /*0x497444*/
        --v18; /*0x497448*/
      }
      v13 = (RLEBlitTransDarkenZReadWrite_G *)((char *)v13 + 2); /*0x497450*/
    }
    else
    {
      v20 = *a2++; /*0x4973f5*/
      v18 -= v20; /*0x497406*/
      a10 += v20; /*0x497408*/
      v13 = (RLEBlitTransDarkenZReadWrite_G *)((char *)v13 + 2 * v20); /*0x49740d*/
      result += v20; /*0x49740f*/
    }
    if ( (unsigned int)result >= *(_DWORD *)(*(_DWORD *)&stru_87C374[45776] + 28) ) /*0x49745c*/
      result = (unsigned __int16 *)((char *)result - *(_DWORD *)(*(_DWORD *)&stru_87C374[45776] + 32)); /*0x49745e*/
  }
  return result; /*0x497465*/
}
} // namespace gamemd
}

// 0x49B7E0
namespace gamemd {
void FillScoreScreenStats(IUnknown * Destination, char a2)
{
{
  IUnknown *v2; // ebp
  HouseClass *i; // ecx
  int v6; // esi
  int v7; // eax
  _DWORD *v8; // ecx
  int v9; // edx
  int *v10; // ecx
  IUnknown *v11; // edx
  int Count; // ebp
  int v14; // ebp
  int v15; // ebp
  int v16; // esi
  v2 = HouseClass_Count; /*0x49b7e2*/
  int v3 = 0; /*0x49b7e9*/
  if ( (int)HouseClass_Count <= 0 ) /*0x49b7f0*/
    return; /*0x49b7f0*/
  for ( i = HouseClass_Array; ; i = (HouseClass *)((char *)i + 4) ) /*0x49b7f6*/
  {
    v6 = *(_DWORD *)i->__pad_0; /*0x49b7fc*/
    if ( !*(_DWORD *)i->__pad_0 || *(_BYTE *)(*(_DWORD *)(v6 + 52) + 422) == 1 || !*(_BYTE *)(v6 + 492) ) /*0x49b810*/
      goto LABEL_8; /*0x49b816*/
    if ( !a2 ) /*0x49b81a*/
      break; /*0x49b81a*/
    a2 = 0; /*0x49b81c*/
LABEL_8:
    if ( ++v3 >= (int)HouseClass_Count ) /*0x49b824*/
      return; /*0x49b824*/
  }
  *(_DWORD *)&Destination->__pad_28[4] = 0; /*0x49b831*/
  wcscpy((wchar_t *)Destination, (const wchar_t *)(v6 + 90154)); /*0x49b836*/
  *(_DWORD *)&Destination->__pad_28[8] = 0; /*0x49b83b*/
  Destination->field_40 = 0; /*0x49b83e*/
  Destination->field_50 = 0; /*0x49b841*/
  Destination->field_60 = 0; /*0x49b844*/
  *(_DWORD *)Destination->__pad_28 = *(_DWORD *)(v6 + 90196); /*0x49b850*/
  if ( !*(_BYTE *)(v6 + 501) ) /*0x49b853*/
    ++*(_DWORD *)&Destination->__pad_28[4]; /*0x49b85d*/
  v7 = 0; /*0x49b860*/
  v8 = (_DWORD *)(v6 + 21476); /*0x49b862*/
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
    int v12 = *v10++; /*0x49b87d*/
    v7 += v12; /*0x49b882*/
    v11 = (IUnknown *)((char *)v11 - 1); /*0x49b884*/
  }
  while ( v11 ); /*0x49b885*/
  Destination->field_40 = v7; /*0x49b887*/
  *(_DWORD *)&Destination->__pad_28[8] = *(_DWORD *)(v6 + 21640) + *(_DWORD *)(v6 + 21556); /*0x49b89e*/
  Count = VectorClass::GetCount((_DWORD *)(v6 + 21840)); /*0x49b8ac*/
  v14 = VectorClass::GetCount((_DWORD *)(v6 + 21860)) + Count; /*0x49b8b9*/
  v15 = VectorClass::GetCount((_DWORD *)(v6 + 21880)) + v14; /*0x49b8c6*/
  Destination->field_50 = VectorClass::GetCount((_DWORD *)(v6 + 21900)) /*0x49b8df*/
                        + v15
                        + *(_DWORD *)(v6 + 21640)
                        + *(_DWORD *)(v6 + 21556);
  v16 = *(_DWORD *)(v6 + 21736); /*0x49b8e2*/
  if ( v16 > 0 ) /*0x49b8ea*/
    Destination->field_60 += v16; /*0x49b8ec*/
  ToWideStringChar(Destination); /*0x49b902*/
  Debug::Log(); /*0x49b922*/
}
} // namespace gamemd
}

// 0x49C0D0
namespace gamemd {
AbstractClass * * E4Recv_49C0D0::CampaignClass_LoadCoopSave()
{
{
  unsigned __int8 v8; // al
  char i; // al
  unsigned __int8 v17; // al
  int Int_Overwrite; // eax
  int j; // esi
  _BYTE v30[12]; // [esp+124h] [ebp-34h] BYREF
  int v31; // [esp+130h] [ebp-28h]
  char Buffer[32]; // [esp+138h] [ebp-20h] BYREF

  if ( !*this ) /*0x49c0dc*/
    return 0; /*0x49c0dc*/
  char * v2 = this + 28; /*0x49c0e9*/
  if ( !*(this + 28) ) /*0x49c0e6*/
    return 0; /*0x49c0ee*/
  int v3 = 0; /*0x49c0f7*/
  E4Recv_49C0D0 *v4 = this; /*0x49c0fb*/
  if ( *this )
  {
  INIClass *v10; // al
    do
    {
      if ( v3 >= 1021 ) /*0x49c109*/
        break; /*0x49c109*/
      if ( isalnum(*v4) )
      {
        g_IsWindowed[v3] = *v4; /*0x49c177*/
      }
      else
      {
        g_IsWindowed[v3] = 61; /*0x49c11b*/
        int v5 = v3 + 1; /*0x49c122*/
        int v6 = *v4 >> 4; /*0x49c126*/
        if ( (unsigned int)v6 >= 0x10 )
          char v7 = 0; /*0x49c13d*/
        else
          v7 = v6 >= 10 ? v6 + 55 : v6 + 48;
        g_IsWindowed[v5] = v7; /*0x49c13f*/
        v3 = v5 + 1; /*0x49c147*/
        v8 = *v4 & 0xF; /*0x49c148*/
        if ( v8 > 0xFu )
        {
          g_IsWindowed[v3] = 0; /*0x49c16d*/
        }
        else
        {
          char v9 = (*v4 & 0xFu) >= 0xA ? v8 + 55 : v8 + 48;
          g_IsWindowed[v3] = v9; /*0x49c159*/
        }
      }
      v10 = v4[1]; /*0x49c17d*/
      ++v3; /*0x49c180*/
      ++v4; /*0x49c181*/
    }
    while ( v10 );
  }
  g_IsWindowed[v3] = 0; /*0x49c194*/
  char v28[100]; // [esp+68h] [ebp-F0h] BYREF
  strcpy(v28, g_IsWindowed); /*0x49c1ae*/
  char * v11 = this + 28; /*0x49c1b7*/
  int v12 = 0; /*0x49c1b9*/
  for ( i = *v2; i; ++v11 )
  {
    if ( v12 >= 1021 ) /*0x49c1cb*/
      break; /*0x49c1cb*/
    if ( isalnum(i) )
    {
      g_IsWindowed[v12] = *v11; /*0x49c239*/
    }
    else
    {
      g_IsWindowed[v12] = 61; /*0x49c1dd*/
      int v14 = v12 + 1; /*0x49c1e4*/
      int v15 = *v11 >> 4; /*0x49c1e8*/
      if ( (unsigned int)v15 >= 0x10 )
        char v16 = 0; /*0x49c1ff*/
      else
        v16 = v15 >= 10 ? v15 + 55 : v15 + 48;
      g_IsWindowed[v14] = v16; /*0x49c201*/
      v12 = v14 + 1; /*0x49c209*/
      v17 = *v11 & 0xF; /*0x49c20a*/
      if ( v17 > 0xFu )
      {
        g_IsWindowed[v12] = 0; /*0x49c22f*/
      }
      else
      {
        char v18 = (*v11 & 0xFu) >= 0xA ? v17 + 55 : v17 + 48;
        g_IsWindowed[v12] = v18; /*0x49c21b*/
      }
    }
    i = v11[1]; /*0x49c23f*/
    ++v12; /*0x49c242*/
  }
  g_IsWindowed[v12] = 0; /*0x49c256*/
  strcat(v28, g_IsWindowed); /*0x49c278*/
  _DWORD v29[22]; // [esp+CCh] [ebp-8Ch] BYREF
  CCFileClass::Construct(v29, g_Str_File_coopsave_ini); /*0x49c28d*/
  void *v24[3]; // [esp+10h] [ebp-148h] BYREF
  v24[1] = 0; /*0x49c298*/
  v24[2] = 0; /*0x49c29c*/
  int v25[7]; // [esp+1Ch] [ebp-13Ch] BYREF
  INISectionList::Constructor(v25); /*0x49c2a0*/
  _DWORD v26[6]; // [esp+38h] [ebp-120h] BYREF
  Node::Init(v26); /*0x49c2a9*/
  v26[5] = 0; /*0x49c2bc*/
  char v27 = 0; /*0x49c2c0*/
  v24[0] = &CCINIClass_Vtable; /*0x49c2c4*/
  if ( !CCINIClass::Load(v24, (int)v29, 0, 0) ) /*0x49c2d3*/
  {
LABEL_44:
    HashTable::DestroyHashTableINIClass(v24); /*0x49c553*/
    v29[0] = &vt_CCFileClass; /*0x49c563*/
    v31 = 0; /*0x49c56e*/
    Vector::Clear((int)v30); /*0x49c575*/
    v29[0] = &off_7E1668; /*0x49c581*/
    BufferIOFileClass::Dtor(v29); /*0x49c58c*/
    return 0; /*0x49c594*/
  }
  this->M56 = INIClass::ReadInt_Overwrite(v28, unk_81F19C, 0); /*0x49c2fc*/
  INIClass::ReadInt_Overwrite(v28, unk_81F194, 0); /*0x49c2ff*/
  this->M68 = INIClass::ReadInt_Overwrite(v28, unk_81F184, -1); /*0x49c329*/
  this->M20 = SuperWeaponTypeClass::FindOrCreate( /*0x49c341*/
                            (unsigned __int8 ***)v24,
                            (unsigned __int8 *)v28,
                            (unsigned __int8 *)unk_81F17C,
                            -2);
  this->M24 = INIClass::ReadInt_Overwrite(v28, unk_81F174, -2); /*0x49c349*/
  this->M48 = SuperWeaponTypeClass::FindOrCreate( /*0x49c371*/
                             (unsigned __int8 ***)v24,
                             (unsigned __int8 *)v28,
                             (unsigned __int8 *)unk_81F16C,
                             -2);
  this->M52 = INIClass::ReadInt_Overwrite(v28, unk_81F164, -2); /*0x49c388*/
  this->M72 = INIClass::ReadInt_Overwrite(v28, unk_81F15C, 0); /*0x49c390*/
  this->M76 = INIClass::ReadInt_Overwrite(v28, unk_81F154, 0); /*0x49c3b6*/
  this->M80 = INIClass::ReadInt_Overwrite(v28, DataGlobal_81F14C, 0); /*0x49c3cd*/
  this->M84 = INIClass::ReadInt_Overwrite(v28, DataGlobal_81F144, 0); /*0x49c3d5*/
  this->M88 = INIClass::ReadInt_Overwrite(v28, DataGlobal_81F13C, 0); /*0x49c3fb*/
  this->M92 = INIClass::ReadInt_Overwrite(v28, DataGlobal_81F134, 0); /*0x49c412*/
  this->M96 = INIClass::ReadInt_Overwrite(v28, DataGlobal_81F12C, 0); /*0x49c41a*/
  this->M100 = INIClass::ReadInt_Overwrite(v28, DataGlobal_81F124, 0); /*0x49c440*/
  Int_Overwrite = INIClass::ReadInt_Overwrite(v28, g_INI_Key_Time, 0); /*0x49c443*/
  int v20 = this->M68; /*0x49c448*/
  this->M104 = Int_Overwrite; /*0x49c44b*/
  if ( !DataGlobal_89F578 ) /*0x49c455*/
    CampaignClass::LoadFromINI((int)&g_DDrawSurfaceManager); /*0x49c45c*/
  if ( v20 < 0 || v20 >= DataGlobal_89F574 ) /*0x49c46f*/
  {
    this->M64 = 0; /*0x49c550*/
    goto LABEL_44; /*0x49c550*/
  }
  int v21 = DataGlobal_89F570 + 76 * v20; /*0x49c486*/
  this->M64 = *(char *)(v21 + 8); /*0x49c489*/
  this->M60 = __2_YAPAXI_Z(4 * *(char *)(v21 + 8)); /*0x49c499*/
  for ( j = 0; j < this->M64; ++j ) /*0x49c4a6*/
  {
    sprintf(Buffer, g_Str_Trace_Map_d, j + 1); /*0x49c4b9*/
    *(_DWORD *)(this->M60 + 4 * j) = __2_YAPAXI_Z(0x104u); /*0x49c4ce*/
    INIClass::GetString( /*0x49c4f3*/
      (unsigned __int8 ***)v24,
      (unsigned __int8 *)v28,
      (unsigned __int8 *)Buffer,
      g_Str_undefined,
      *(char **)(this->M60 + 4 * j),
      260);
  }
  *(this + 108) = 1; /*0x49c505*/
  HashTable::DestroyHashTableINIClass(v24); /*0x49c509*/
  v29[0] = &vt_CCFileClass; /*0x49c515*/
  v31 = 0; /*0x49c520*/
  Vector::Clear((int)v30); /*0x49c527*/
  v29[0] = &off_7E1668; /*0x49c533*/
  BufferIOFileClass::Dtor(v29); /*0x49c53e*/
  return 1; /*0x49c543*/
}
} // namespace gamemd
}

// 0x49CCF0
namespace gamemd {
AbstractClass * * E4Recv_49CCF0::sub_49CCF0(int a2, int a3, void * Block, int a5, short a6, int a7, int a8, char * a9, char * a10)
{
        int this,
        int a2,
        int a3,
        void *Block,
        int a5,
        __int16 a6,
        int a7,
        int a8,
        char *a9,
        char *a10)
{
  int i; // esi

  if ( !DataGlobal_89F578 ) /*0x49ccfd*/
    CampaignClass::LoadFromINI((int)&g_DDrawSurfaceManager); /*0x49cd04*/
  if ( a2 >= 0 && a2 < DataGlobal_89F574 ) /*0x49cd1d*/
  {
    TechnoTypeClass *v12 = DataGlobal_89F570; /*0x49cd23*/
    this->M56 = -1; /*0x49cd30*/
    this->M72 = 0; /*0x49cd3a*/
    this->M76 = 0; /*0x49cd3d*/
    this->M80 = 0; /*0x49cd40*/
    this->M84 = 0; /*0x49cd46*/
    int v33 = v12 + 76 * a2; /*0x49cd49*/
    this->M88 = 0; /*0x49cd4d*/
    this->M92 = 0; /*0x49cd50*/
    this->M96 = 0; /*0x49cd53*/
    this->M100 = 0; /*0x49cd56*/
    this->M104 = 0; /*0x49cd59*/
    if ( *(char *)(v12 + 76 * a2 + 8) != a7 ) /*0x49cd62*/
    {
      if ( Block ) /*0x49cd6a*/
      {
        if ( HIBYTE(a6) ) /*0x49cd72*/
          __3_YAXPAX_Z(Block); /*0x49cd75*/
      }
      return 0; /*0x49cd83*/
    }
    this->M68 = a2; /*0x49cd86*/
    AbstractClass *v14 = this->M60; /*0x49cd89*/
    this->M108 = 1; /*0x49cd8e*/
    if ( v14 ) /*0x49cd92*/
    {
      for ( i = 0; i < this->M64; ++i ) /*0x49cd9b*/
      {
        if ( *(_DWORD *)(this->M60 + 4 * i) ) /*0x49cda0*/
          __3_YAXPAX_Z(*(void **)(this->M60 + 4 * i)); /*0x49cda8*/
      }
      __3_YAXPAX_Z(*(void **)(&this->u32_180)); /*0x49cdbe*/
    }
    this->M60 = 0; /*0x49cdc8*/
    this->M64 = 0; /*0x49cdcb*/
    int v16 = 0; /*0x49cdde*/
    this->M60 = __2_YAPAXI_Z(4 * a7); /*0x49cde2*/
    if ( a7 > 0 ) /*0x49cde5*/
    {
      int v17 = 0; /*0x49cde7*/
      do /*0x49ce2e*/
      {
        *(_DWORD *)(this->M60 + 4 * v16) = __2_YAPAXI_Z(0x104u); /*0x49cdff*/
        strncpy( /*0x49ce20*/
          *(char **)(this->M60 + 4 * v16),
          (const char *)(*(_DWORD *)(v33 + 12) + 260 * (v17 + *((_DWORD *)Block + v16))),
          0x103u);
        ++v16; /*0x49ce28*/
        v17 += 3; /*0x49ce29*/
      }
      while ( v16 < a7 ); /*0x49ce2e*/
    }
    char * v18 = a10; /*0x49ce30*/
    this->M64 = a7; /*0x49ce34*/
    this->M56 = 0; /*0x49ce39*/
    if ( a10 ) /*0x49ce40*/
    {
      char * v19 = DataGlobal_89F118; /*0x49ce48*/
      if ( *a10 ) /*0x49ce46*/
      {
  char v24; // al
        do /*0x49cf05*/
        {
          if ( *v18 == 61 ) /*0x49ce59*/
          {
  char v21; // al
            char v20 = v18[1]; /*0x49ce5f*/
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
              char v22 = 16 * v21; /*0x49cea6*/
              *v19 = v22; /*0x49cea9*/
              char v23 = v18[1]; /*0x49ceab*/
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
      strcpy((char *)this, DataGlobal_89F118); /*0x49cf27*/
    }
    else
    {
      *(_BYTE *)this = 0; /*0x49cf32*/
    }
    char * v25 = a9; /*0x49cf36*/
    if ( a9 ) /*0x49cf3c*/
    {
      char * v26 = DataGlobal_89F118; /*0x49cf44*/
      if ( *a9 ) /*0x49cf42*/
      {
  char v31; // al
        do /*0x49d001*/
        {
          if ( *v25 == 61 ) /*0x49cf55*/
          {
  char v28; // al
            char v27 = v25[1]; /*0x49cf5b*/
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
              char v29 = 16 * v28; /*0x49cfa2*/
              *v26 = v29; /*0x49cfa5*/
              char v30 = v25[1]; /*0x49cfa7*/
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
      strcpy((char *)(&this->u32_88), DataGlobal_89F118); /*0x49d026*/
    }
    else
    {
      this->M28 = 0; /*0x49d031*/
    }
    Debug::Log(); /*0x49d03e*/
  }
  char v32 = (unsigned char)this->M108; /*0x49d04c*/
  if ( Block && HIBYTE(a6) ) /*0x49d059*/
    __3_YAXPAX_Z(Block); /*0x49d05c*/
  return v32; /*0x49cd7d*/
}
} // namespace gamemd
}

// 0x49D390
namespace gamemd {
int E4Recv_49D390::LoadCoopCampaignSave(IUnknown * aP1)
{
{
  char i; // al
  int Int_Overwrite; // eax
  MultiplayerGameMode aP1a; // [esp+Ch] [ebp-148h] BYREF
  _BYTE v18[12]; // [esp+64h] [ebp-F0h] BYREF
  int v19; // [esp+70h] [ebp-E4h]
  unsigned __int8 **v20[3]; // [esp+78h] [ebp-DCh] BYREF
  _DWORD v21[7]; // [esp+84h] [ebp-D0h] BYREF
  _DWORD v22[6]; // [esp+A0h] [ebp-B4h] BYREF
  char v23; // [esp+B8h] [ebp-9Ch]
  char Buffer[32]; // [esp+D0h] [ebp-84h] BYREF
  INIClass v25; // [esp+F0h] [ebp-64h] BYREF
  E4Recv_49D390 *v2 = this; /*0x49d399*/
  if ( !*this ) /*0x49d39d*/
    return 0; /*0x49d39d*/
  char * v3 = this + 28; /*0x49d3a8*/
  if ( !*(this + 28) ) /*0x49d3a5*/
    return 0; /*0x49d3ad*/
  CCFileClass::Construct(&aP1a, g_Str_File_coopsave_ini); /*0x49d3bc*/
  v20[1] = 0; /*0x49d3c8*/
  v20[2] = 0; /*0x49d3cc*/
  INISectionList::Constructor(v21); /*0x49d3d3*/
  Node::Init(v22); /*0x49d3df*/
  v22[5] = 0; /*0x49d3f2*/
  v23 = 0; /*0x49d3f9*/
  v20[0] = (unsigned __int8 **)&CCINIClass_Vtable; /*0x49d400*/
  if ( !CCINIClass::Load(v20, &aP1a, 0, 0) ) /*0x49d40b*/
  {
    CCFileClass::Reset(&aP1a); /*0x49d418*/
LABEL_5:
    HashTable::DestroyHashTableINIClass((void **)v20); /*0x49d41d*/
    *(_DWORD *)aP1a[0] = &vt_CCFileClass; /*0x49d42a*/
    v19 = 0; /*0x49d432*/
    Vector::Clear((int)v18); /*0x49d436*/
    *(_DWORD *)aP1a[0] = &off_7E1668; /*0x49d43f*/
    BufferIOFileClass::Dtor(&aP1a); /*0x49d447*/
    return 0; /*0x49d457*/
  }
  CCFileClass::Reset(&aP1a); /*0x49d45f*/
  int v5 = 0; /*0x49d466*/
  if ( *v2 )
  {
  char v9; // al
    do
    {
      if ( v5 >= 1021 ) /*0x49d472*/
        break; /*0x49d472*/
      if ( isalnum(*v2) )
      {
        g_IsWindowed[v5] = *v2; /*0x49d4c3*/
      }
      else
      {
        g_IsWindowed[v5] = 61; /*0x49d484*/
        int v6 = v5 + 1; /*0x49d48b*/
        int v7 = *v2 >> 4; /*0x49d48f*/
        if ( (unsigned int)v7 >= 0x10 )
          char v8 = 0; /*0x49d4a6*/
        else
          v8 = v7 >= 10 ? v7 + 55 : v7 + 48;
        g_IsWindowed[v6] = v8; /*0x49d4a8*/
        v5 = v6 + 1; /*0x49d4b3*/
        g_IsWindowed[v5] = EncodeDigitHex(*v2 & 0xF); /*0x49d4b9*/
      }
      v9 = v2[1]; /*0x49d4c9*/
      ++v5; /*0x49d4cc*/
      ++v2; /*0x49d4cd*/
    }
    while ( v9 );
  }
  g_IsWindowed[v5] = 0; /*0x49d4dc*/
  strcpy(v25[0], g_IsWindowed); /*0x49d4f8*/
  char * v10 = v3; /*0x49d501*/
  int v11 = 0; /*0x49d503*/
  for ( i = *v3; i; ++v10 )
  {
    if ( v11 >= 1021 ) /*0x49d511*/
      break; /*0x49d511*/
    if ( isalnum(i) )
    {
      g_IsWindowed[v11] = *v10; /*0x49d562*/
    }
    else
    {
      g_IsWindowed[v11] = 61; /*0x49d523*/
      int v13 = v11 + 1; /*0x49d52a*/
      int v14 = *v10 >> 4; /*0x49d52e*/
      if ( (unsigned int)v14 >= 0x10 )
        char v15 = 0; /*0x49d545*/
      else
        v15 = v14 >= 10 ? v14 + 55 : v14 + 48;
      g_IsWindowed[v13] = v15; /*0x49d547*/
      v11 = v13 + 1; /*0x49d552*/
      g_IsWindowed[v11] = EncodeDigitHex(*v10 & 0xF); /*0x49d558*/
    }
    i = v10[1]; /*0x49d568*/
    ++v11; /*0x49d56b*/
  }
  g_IsWindowed[v11] = 0; /*0x49d57b*/
  strcat(v25[0], g_IsWindowed); /*0x49d59f*/
  Int_Overwrite = INIClass::ReadInt_Overwrite((int)v20, (unsigned __int8 *)&v25, &unk_81F19C, 0); /*0x49d5bd*/
  sprintf(Buffer, (const char *const)&g_Str_undefined.headNode[2], Int_Overwrite + 1); /*0x49d5d1*/
  INIClass::GetString(v20, &v25, (unsigned __int8 *)Buffer, &g_Str_undefined, (INIClass *)aP1, 260); /*0x49d602*/
  if ( strcmp((const char *)aP1, g_Str_undefined[0]) ) /*0x49d614*/
    goto LABEL_5; /*0x49d63a*/
  HashTable::DestroyHashTableINIClass((void **)v20); /*0x49d644*/
  *(_DWORD *)aP1a[0] = &vt_CCFileClass; /*0x49d64d*/
  v19 = 0; /*0x49d655*/
  Vector::Clear((int)v18); /*0x49d659*/
  *(_DWORD *)aP1a[0] = &off_7E1668; /*0x49d662*/
  BufferIOFileClass::Dtor(&aP1a); /*0x49d66a*/
  return 1; /*0x49d44c*/
}
} // namespace gamemd
}

// 0x49D680
namespace gamemd {
AbstractClass * * E4Recv_49D680::SerializeCampaignOptions()
{
{
  unsigned __int8 v12; // al
  int i; // esi
  unsigned __int8 v21; // al
  char Buffer[400]; // [esp+28h] [ebp-190h] BYREF

  if ( !*(&this->u32_288) ) /*0x49d68b*/
    return 0; /*0x49d68b*/
  AnimClass *v3 = this->M68; /*0x49d6a3*/
  if ( !DataGlobal_89F578 ) /*0x49d6a8*/
    CampaignClass::LoadFromINI((int)&g_DDrawSurfaceManager); /*0x49d6af*/
  int v4 = 0; /*0x49d6b4*/
  if ( v3 < 0 || v3 >= DataGlobal_89F574 ) /*0x49d6c0*/
    return 0; /*0x49d694*/
  int v24 = DataGlobal_89F570 + 76 * v3; /*0x49d6d8*/
  sprintf( /*0x49d70c*/
    Buffer,
    stru_81F218,
    this->M68,
    this->M56,
    this->M104,
    this->M72,
    this->M80,
    this->M88,
    this->M96,
    this->M76,
    this->M84,
    this->M92,
    this->M100);
  if ( this->q040 > 0 ) /*0x49d719*/
  {
    int v23 = 0; /*0x49d71f*/
    do /*0x49d7ae*/
    {
      int v5 = v23; /*0x49d723*/
      INIClass *v6 = 0; /*0x49d727*/
      while ( _strcmpi((const void *)(v5 + *(_DWORD *)(v24 + 12)), *(const void **)(this->M60 + 4 * v4)) ) /*0x49d748*/
      {
        ++v6; /*0x49d74a*/
        v5 += 260; /*0x49d74b*/
        if ( v6 >= 3 ) /*0x49d754*/
        {
          v6 = 0; /*0x49d756*/
          break; /*0x49d756*/
        }
      }
  char v25[16]; // [esp+18h] [ebp-1A0h] BYREF
      sprintf(v25, g_Str_Trace_, v6); /*0x49d75a*/
      strcat(Buffer, v25); /*0x49d791*/
      ++v4; /*0x49d79b*/
      v23 += 780; /*0x49d7aa*/
    }
    while ( v4 < this->M64 ); /*0x49d7ae*/
  }
  strcat(Buffer, a1_0); /*0x49d7d9*/
  int v7 = 0; /*0x49d7e7*/
  E4Recv_49D680 *v8 = this; /*0x49d7e9*/
  if ( *this )
  {
  char v14; // al
    do
    {
      if ( v7 >= 1021 ) /*0x49d7f9*/
        break; /*0x49d7f9*/
      if ( isalnum(*v8) )
      {
        g_IsWindowed[v7] = *v8; /*0x49d866*/
      }
      else
      {
        g_IsWindowed[v7] = 61; /*0x49d80b*/
        int v9 = v7 + 1; /*0x49d811*/
        int v10 = *v8 >> 4; /*0x49d815*/
        if ( (unsigned int)v10 >= 0x10 )
          char v11 = 0; /*0x49d82c*/
        else
          v11 = v10 >= 10 ? v10 + 55 : v10 + 48;
        g_IsWindowed[v9] = v11; /*0x49d82e*/
        v7 = v9 + 1; /*0x49d836*/
        v12 = *v8 & 0xF; /*0x49d837*/
        if ( v12 > 0xFu )
        {
          g_IsWindowed[v7] = 0; /*0x49d85c*/
        }
        else
        {
          char v13 = (*v8 & 0xFu) >= 0xA ? v12 + 55 : v12 + 48;
          g_IsWindowed[v7] = v13; /*0x49d848*/
        }
      }
      v14 = v8[1]; /*0x49d86c*/
      ++v7; /*0x49d86f*/
      ++v8; /*0x49d870*/
    }
    while ( v14 );
  }
  g_IsWindowed[v7] = 0; /*0x49d883*/
  strcat(Buffer, g_IsWindowed); /*0x49d8a5*/
  char * v15 = &this->u32_70; /*0x49d8b0*/
  strcat(Buffer, Delimiter); /*0x49d8d4*/
  char v16 = *v15; /*0x49d8d6*/
  for ( i = 0; v16; ++v15 )
  {
    if ( i >= 1021 ) /*0x49d8f0*/
      break; /*0x49d8f0*/
    if ( isalnum(v16) )
    {
      g_IsWindowed[i] = *v15; /*0x49d964*/
    }
    else
    {
      g_IsWindowed[i] = 61; /*0x49d906*/
      int v18 = i + 1; /*0x49d90c*/
      int v19 = *v15 >> 4; /*0x49d911*/
      if ( (unsigned int)v19 >= 0x10 )
        char v20 = 0; /*0x49d928*/
      else
        v20 = v19 >= 10 ? v19 + 55 : v19 + 48;
      g_IsWindowed[v18] = v20; /*0x49d92a*/
      i = v18 + 1; /*0x49d933*/
      v21 = *v15 & 0xF; /*0x49d934*/
      if ( v21 > 0xFu )
      {
        g_IsWindowed[i] = 0; /*0x49d959*/
      }
      else
      {
        char v22 = (*v15 & 0xFu) >= 0xA ? v21 + 55 : v21 + 48;
        g_IsWindowed[i] = v22; /*0x49d945*/
      }
    }
    v16 = v15[1]; /*0x49d96a*/
    ++i; /*0x49d96d*/
  }
  g_IsWindowed[i] = 0; /*0x49d981*/
  strcat(Buffer, g_IsWindowed); /*0x49d9a3*/
  Debug::Log(); /*0x49d9b6*/
  Network::SendOptionsGame(Buffer); /*0x49d9c2*/
  Debug::Log(); /*0x49d9cc*/
  return 1; /*0x49d692*/
}
} // namespace gamemd
}

// 0x49E7C0
namespace gamemd {
AbstractClass * * E4Recv_49E7C0::sub_49E7C0(char a2)
{
{
  ObjectClass *v13; // eax
  if ( (a2 & 2) != 0 ) /*0x49e7cc*/
  {
    int v3 = *((_DWORD *)this - 1); /*0x49e7d2*/
    char * v4 = this - 4; /*0x49e7d5*/
    char * v14 = this - 4; /*0x49e7d8*/
    int v5 = 19 * v3; /*0x49e7df*/
    int v6 = v3 - 1; /*0x49e7e2*/
    if ( v6 >= 0 ) /*0x49e7e6*/
    {
      char * v7 = this + 4 * v5 + 44; /*0x49e7e9*/
      int v8 = v6 + 1; /*0x49e7ec*/
      do /*0x49e84a*/
      {
        v7 -= 76; /*0x49e7f6*/
        DeleteAndZero((void **)v7 + 7); /*0x49e7fc*/
        DeleteAndZero((void **)v7 + 6); /*0x49e804*/
        AbstractClass *v9 = *(void **)v7; /*0x49e809*/
        *((_DWORD *)v7 - 1) = &vt_VectorClass_DynamicVectorClass_char; /*0x49e80b*/
        if ( v9 && v7[9] ) /*0x49e812*/
        {
          __3_YAXPAX_Z(v9); /*0x49e818*/
          *(_DWORD *)v7 = 0; /*0x49e820*/
        }
        v7[9] = 0; /*0x49e822*/
        *((_DWORD *)v7 + 1) = 0; /*0x49e825*/
        void * v10 = (void *)*((_DWORD *)v7 - 6); /*0x49e828*/
        *((_DWORD *)v7 - 7) = &vt_VectorClass_DynamicVectorClass_char; /*0x49e82b*/
        if ( v10 && *(v7 - 15) ) /*0x49e832*/
        {
          __3_YAXPAX_Z(v10); /*0x49e838*/
          *((_DWORD *)v7 - 6) = 0; /*0x49e840*/
        }
        --v8; /*0x49e843*/
        *(v7 - 15) = 0; /*0x49e844*/
        *((_DWORD *)v7 - 5) = 0; /*0x49e847*/
      }
      while ( v8 ); /*0x49e84a*/
      v4 = v14; /*0x49e84c*/
    }
    if ( (a2 & 1) != 0 ) /*0x49e856*/
      __3_YAXPAX_Z(v4); /*0x49e859*/
    return v4; /*0x49e861*/
  }
  else
  {
    DeleteAndZero((void **)this + 18); /*0x49e86d*/
    DeleteAndZero((void **)this + 17); /*0x49e875*/
    AbstractClass *v12 = (void *)this->M44; /*0x49e87a*/
    this->M40 = &vt_VectorClass_DynamicVectorClass_char; /*0x49e886*/
    if ( v12 && *(this + 53) ) /*0x49e88b*/
    {
      __3_YAXPAX_Z(v12); /*0x49e891*/
      this->M44 = 0; /*0x49e899*/
    }
    *(this + 53) = 0; /*0x49e89c*/
    this->M48 = 0; /*0x49e89f*/
    v13 = (ObjectClass *)this->M20; /*0x49e8a2*/
    this->M16 = &vt_VectorClass_DynamicVectorClass_char; /*0x49e8a5*/
    if ( v13 && *(this + 29) ) /*0x49e8ac*/
    {
      __3_YAXPAX_Z(v13); /*0x49e8b2*/
      this->M20 = 0; /*0x49e8ba*/
    }
    *(this + 29) = 0; /*0x49e8c1*/
    this->M24 = 0; /*0x49e8c6*/
    if ( (a2 & 1) != 0 ) /*0x49e8c9*/
      __3_YAXPAX_Z(this); /*0x49e8cc*/
    return this; /*0x49e8d4*/
  }
}
} // namespace gamemd
}

// 0x491100
namespace gamemd {
int sub_491100(ObjectClass * aP0, char a2, int a3, ObjectClass * aP3, short a5, char a6, short a7)
{
{
    char v7;
    char v8;
    int v9;
    ObjectClass *result;
    char v11;
    int *v12;
    short *v13;
    int v14;
    int v15;
    int v16;
    short v17;
    unsigned char v18;
    ObjectClass *i;
    char v20;
    int v21;
    v20 = v8;
    result = 0;
    v11 = v7;
    for ( i = 0; (int)result < *(int *)&DataGlobal_89E138[3024]; i = result )
  {
    v12 = *(int **)(*(int *)&DataGlobal_89E138[3012] + 4 * (int)result);
    v21 = (int)v12;
    if ( v12[1] == 2 )
    {
    v13 = (short *)v12[92];
    v14 = 256;
    do
      {
    LOWORD(v9) = *v13;
    HIWORD(v15) = HIWORD(v9);
    HIWORD(v16) = HIWORD(v9);
    v17 = *v13++ >> v11;
    v18 = (unsigned char)((unsigned short)v9 >> a2) << (char)aP0;
    LOWORD(v9) = (unsigned char)((unsigned char)((unsigned char)((unsigned short)v9 >> (char)aP3) << a3) >> DataGlobal_89E138[11428]);
    LOWORD(v15) = (unsigned char)((unsigned char)((char)v17 << v20) >> DataGlobal_89E138[11420]);
    LOWORD(v16) = (unsigned char)(v18 >> DataGlobal_89E138[11436]);
    v9 = (v16 << DataGlobal_89E138[11432])
    | (v15 << DataGlobal_89E138[11416])
    | (v9 << DataGlobal_89E138[11424]);
    --v14;
    *(v13 - 1) = v9;
      }
    while ( v14 );
    v12[96] = *(unsigned short *)&DataGlobal_89E138[11440];
    v12[97] = *(unsigned short *)&DataGlobal_89E138[11442];
    COMClass::RegisterAll(v12);
    ConvertClass::InitTables(v21);
    result = i;
    }
    result = (ObjectClass *)((char *)(result) + 1);
  }
    return (int)result->__pad_0;
}
}
} // namespace gamemd

// 0x4912B0
namespace gamemd {
char E4Recv_4912B0::sub_4912B0(int a2, unsigned char * a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
    int v9;
    int v10;
    short *v11;
    int v13;
    v9 = this->M4;
    v10 = a4 + 1;
    v11 = (short *)(a2 - 2);
    v13 = 0;
    while ( --v10 )
  {
    ++v11;
    LOBYTE(v13) = *a3++;
    if ( (char)v13 )
    *v11 = *(short *)(v9 + 2 * v13);
  }
    return v13;
}
} // namespace gamemd

// 0x491300
namespace gamemd {
int E4Recv_491300::sub_491300(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
{
    return this->Vf4(a2, a3, a4, a5, a6, a7, a8, 0);
}
}
} // namespace gamemd

// 0x491330
namespace gamemd {
int E4Recv_491330::sub_491330(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
{
    return this->Vf4(a2, a3, a4, a5, a6, a7, a8, 0);
}
}
} // namespace gamemd

// 0x491360
namespace gamemd {
int E4Recv_491360::sub_491360(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
{
    return this->Vf4(a2, a3, a4, a5, a6, a7, a8, 0);
}
}
} // namespace gamemd

// 0x491670
namespace gamemd {
char E4Recv_491670::sub_491670(unsigned char * a1, char * a2, int a4, int a5, int a6, int a7, int a8, int a9)
{
{
    char result;
    int v12;
    result = a4;
    if ( a4 > 0 )
  {
    v12 = a4;
    do
    {
    result = *a2++;
    if ( result )
      {
    result = *(char *)(this->M4 + (unsigned char)*a1);
    *a1 = result;
      }
    ++a1;
    --v12;
    }
    while ( v12 );
  }
    return result;
}
}
} // namespace gamemd

// 0x4916B0
namespace gamemd {
int E4Recv_4916B0::sub_4916B0(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
{
    return (*((int (__thiscall **)(BlitTransRemapDest_E *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}
} // namespace gamemd

// 0x4916E0
namespace gamemd {
int E4Recv_4916E0::sub_4916E0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
{
    return (*((int (__thiscall **)(BlitTransRemapDest_E *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}
} // namespace gamemd

// 0x491710
namespace gamemd {
int E4Recv_491710::sub_491710(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
{
    return (*((int (__thiscall **)(BlitTransRemapDest_E *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}
} // namespace gamemd

// 0x491740
namespace gamemd {
unsigned char E4Recv_491740::sub_491740(unsigned char * a1, unsigned char * a2, int a4, int a5, int a6, int a7, int a8, int a9)
{
{
    unsigned char result;
    int v12;
    result = a4;
    if ( a4 > 0 )
  {
    v12 = a4;
    do
    {
    result = *a2++;
    if ( result )
      {
    result = *(char *)(*(unsigned char *)(this->M4 + result) + this->M8);
    *a1 = result;
      }
    ++a1;
    --v12;
    }
    while ( v12 );
  }
    return result;
}
}
} // namespace gamemd

// 0x491790
namespace gamemd {
int E4Recv_491790::sub_491790(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
{
    return (*((int (__thiscall **)(BlitTransRemapXlat_E *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}
} // namespace gamemd

// 0x4917C0
namespace gamemd {
int E4Recv_4917C0::sub_4917C0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
{
    return (*((int (__thiscall **)(BlitTransRemapXlat_E *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}
} // namespace gamemd

// 0x4917F0
namespace gamemd {
int E4Recv_4917F0::sub_4917F0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
{
    return (*((int (__thiscall **)(BlitTransRemapXlat_E *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}
} // namespace gamemd

// 0x491820
namespace gamemd {
int E4Recv_491820::sub_491820(int a2, unsigned char * a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
{
    int result;
    int v13;
    int v16;
    unsigned char v17;
    unsigned char v18;
    result = a5;
    v13 = a2;
    if ( a5 <= 0 )
  {
    v16 = a4;
  }
    else
  {
    do
    {
    if ( *a3++ )
    --result;
    else
    result -= *a3++;
    }
    while ( result > 0 );
    result = -result;
    v13 = result + a2;
    v16 = a4 - result;
  }
    while ( v16 > 0 )
  {
    v17 = *a3++;
    v18 = v17;
    if ( v17 )
    {
    result = this->M4;
    ++v13;
    --v16;
    *(char *)(v13 - 1) = *(char *)(result + v18);
    }
    else
    {
    LOBYTE(result) = *a3++;
    result = (unsigned char)result;
    v16 -= (unsigned char)result;
    v13 += (unsigned char)result;
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x4918A0
namespace gamemd {
int E4Recv_4918A0::sub_4918A0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
{
    return this->Vf4(a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
}
} // namespace gamemd

// 0x4918E0
namespace gamemd {
char E4Recv_4918E0::sub_4918E0(int arg0, unsigned char * a2, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
{
    int v13;
    int v14;
    int v15;
    int v17;
    unsigned char v18;
    v13 = arg0;
    v14 = **((int **)(this) + 1);
    v15 = a5;
    if ( a5 <= 0 )
  {
    v17 = a4;
  }
    else
  {
    do
    {
    if ( *a2++ )
    --v15;
    else
    v15 -= *a2++;
    }
    while ( v15 > 0 );
    v15 = -v15;
    v13 = v15 + arg0;
    v17 = a4 - v15;
  }
    while ( v17 > 0 )
  {
    v18 = *a2++;
    if ( v18 )
    {
    ++v13;
    --v17;
    LOBYTE(v15) = *(char *)(*(unsigned char *)(v18 + v14) + this->M8);
    *(char *)(v13 - 1) = v15;
    }
    else
    {
    LOBYTE(v15) = *a2++;
    v17 -= (unsigned char)v15;
    v13 += (unsigned char)v15;
    }
  }
    return v15;
}
}
} // namespace gamemd

// 0x491970
namespace gamemd {
int E4Recv_491970::sub_491970(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
{
    return (*((int (__thiscall **)(RLEBlitTransZRemapXlat_E *, int, int, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
}
} // namespace gamemd

// 0x4919B0
namespace gamemd {
int E4Recv_4919B0::sub_4919B0(unsigned char * a1, unsigned char * a2, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
{
    int result;
    unsigned char *v13;
    int v16;
    int v18;
    result = a5;
    v13 = a1;
    if ( a5 <= 0 )
  {
    v16 = a4;
  }
    else
  {
    do
    {
    if ( *a2++ )
    --result;
    else
    result -= *a2++;
    }
    while ( result > 0 );
    result = -result;
    v13 = &a1[result];
    v16 = a4 - result;
  }
    while ( v16 > 0 )
  {
    if ( *a2++ )
    {
    result = this->M4;
    v18 = *v13;
    --v16;
    *v13++ = *(char *)(result + v18);
    }
    else
    {
    LOBYTE(result) = *a2++;
    result = (unsigned char)result;
    v16 -= (unsigned char)result;
    v13 += (unsigned char)result;
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x491A30
namespace gamemd {
int E4Recv_491A30::sub_491A30(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
{
    return (*((int (__thiscall **)(RLEBlitTransRemapDest_E *, int, int, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
}
} // namespace gamemd

// 0x491A70
namespace gamemd {
char E4Recv_491A70::sub_491A70(int arg0, unsigned char * a2, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
{
    int v11;
    int v13;
    int v16;
    unsigned char v17;
    v11 = a5;
    v13 = arg0;
    if ( a5 <= 0 )
  {
    v16 = a4;
  }
    else
  {
    do
    {
    if ( *a2++ )
    --v11;
    else
    v11 -= *a2++;
    }
    while ( v11 > 0 );
    v11 = -v11;
    v13 = v11 + arg0;
    v16 = a4 - v11;
  }
    while ( v16 > 0 )
  {
    v17 = *a2++;
    if ( v17 )
    {
    ++v13;
    --v16;
    LOBYTE(v11) = *(char *)(*(unsigned char *)(this->M4 + v17) + this->M8);
    *(char *)(v13 - 1) = v11;
    }
    else
    {
    LOBYTE(v11) = *a2++;
    v16 -= (unsigned char)v11;
    v13 += (unsigned char)v11;
    }
  }
    return v11;
}
}
} // namespace gamemd

// 0x491B00
namespace gamemd {
int E4Recv_491B00::sub_491B00(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
{
    return (*((int (__thiscall **)(RLEBlitTransRemapXlat_E *, int, int, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
}
} // namespace gamemd

// 0x491C10
namespace gamemd {
int E4Recv_491C10::sub_491C10(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
{
    return this->Vf4(a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
}
} // namespace gamemd

// 0x491D50
namespace gamemd {
int E4Recv_491D50::sub_491D50(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
{
    return (*((int (__thiscall **)(RLEBlitTransZRemapXlatZRead_E *, int, int, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
}
} // namespace gamemd

// 0x491E60
namespace gamemd {
int E4Recv_491E60::sub_491E60(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
{
    return (*((int (__thiscall **)(RLEBlitTransRemapDestZRead_E *, int, int, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
}
} // namespace gamemd

// 0x491F90
namespace gamemd {
int E4Recv_491F90::sub_491F90(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
{
    return (*((int (__thiscall **)(RLEBlitTransRemapXlatZRead_E *, int, int, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
}
} // namespace gamemd

// 0x4920C0
namespace gamemd {
int E4Recv_4920C0::sub_4920C0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
{
    return (*((int (__thiscall **)(RLEBlitTransXlatZReadWrite_E *, int, int, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
}
} // namespace gamemd

// 0x492210
namespace gamemd {
int E4Recv_492210::sub_492210(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
{
    return (*((int (__thiscall **)(RLEBlitTransZRemapXlatZReadWrite_E *, int, int, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
}
} // namespace gamemd

// 0x492330
namespace gamemd {
int E4Recv_492330::sub_492330(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
{
    return (*((int (__thiscall **)(RLEBlitTransRemapDestZReadWrite_E *, int, int, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
}
} // namespace gamemd

// 0x492480
namespace gamemd {
int E4Recv_492480::sub_492480(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
{
    return (*((int (__thiscall **)(RLEBlitTransRemapXlatZReadWrite_E *, int, int, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
}
} // namespace gamemd

// 0x4924C0
namespace gamemd {
void E4Recv_4924C0::sub_4924C0(int a2, unsigned char * a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
{
    int v9;
    unsigned char v12;
    v9 = a4;
    if ( a4 > 0 )
  {
    do
    {
    v12 = *a3++;
    a2 += 2;
    --v9;
    *(short *)(a2 - 2) = *(short *)(this->M4 + 2 * v12);
    }
    while ( v9 );
  }
}
}
} // namespace gamemd

// 0x492500
namespace gamemd {
int E4Recv_492500::sub_492500(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
{
    return this->Vf4(a2, a3, a4, a5, a6, a7, a8, 0);
}
}
} // namespace gamemd

// 0x492530
namespace gamemd {
int E4Recv_492530::sub_492530(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
{
    return this->Vf4(a2, a3, a4, a5, a6, a7, a8, 0);
}
}
} // namespace gamemd

// 0x492560
namespace gamemd {
int E4Recv_492560::sub_492560(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
{
    return this->Vf4(a2, a3, a4, a5, a6, a7, a8, 0);
}
}
} // namespace gamemd

// 0x492590
namespace gamemd {
char E4Recv_492590::sub_492590(unsigned short * a1, unsigned char * a2, int a4, int a5, int a6, int a7, int a8, int a9)
{
{
    int v9;
    short v10;
    int v13;
    v9 = **((int **)(this) + 1);
    LOBYTE(v10) = a4;
    if ( a4 > 0 )
  {
    v13 = a4;
    do
    {
    LOBYTE(v10) = *a2++;
    if ( (char)v10 )
      {
    v10 = *(short *)(this->M8 + 2 * *(unsigned char *)((unsigned char)v10 + v9));
    *a1 = v10;
      }
    ++a1;
    --v13;
    }
    while ( v13 );
  }
    return v10;
}
}
} // namespace gamemd

// 0x4925E0
namespace gamemd {
int E4Recv_4925E0::sub_4925E0(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
{
    return (*((int (__thiscall **)(BlitTransZRemapXlat_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}
} // namespace gamemd

// 0x492610
namespace gamemd {
int E4Recv_492610::sub_492610(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
{
    return (*((int (__thiscall **)(BlitTransZRemapXlat_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}
} // namespace gamemd

// 0x492640
namespace gamemd {
int E4Recv_492640::sub_492640(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
{
    return (*((int (__thiscall **)(BlitTransZRemapXlat_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}
} // namespace gamemd

// 0x492670
namespace gamemd {
char E4Recv_492670::sub_492670(unsigned short * a2, unsigned char * a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
{
    short v9;
    int v12;
    LOBYTE(v9) = a4;
    if ( a4 > 0 )
  {
    v12 = a4;
    do
    {
    LOBYTE(v9) = *a3++;
    if ( (char)v9 )
      {
    v9 = this->M4 & (*a2 >> 1);
    *a2 = v9;
      }
    ++a2;
    --v12;
    }
    while ( v12 );
  }
    return v9;
}
}
} // namespace gamemd

// 0x4926B0
namespace gamemd {
int E4Recv_4926B0::sub_4926B0(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
{
    return this->Vf4(a2, a3, a4, a5, a6, a7, a8, 0);
}
}
} // namespace gamemd

// 0x4926E0
namespace gamemd {
int E4Recv_4926E0::sub_4926E0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
{
    return this->Vf4(a2, a3, a4, a5, a6, a7, a8, 0);
}
}
} // namespace gamemd

// 0x492710
namespace gamemd {
int E4Recv_492710::sub_492710(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
{
    return this->Vf4(a2, a3, a4, a5, a6, a7, a8, 0);
}
}
} // namespace gamemd

// 0x492740
namespace gamemd {
char sub_492740(int a1, int a2, unsigned short * a3, unsigned char * a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
{
    int v10;
    int v13;
    int v14;
    short v15;
    unsigned char v17;
    LOBYTE(v10) = a5;
    if ( a5 > 0 )
  {
    v13 = a5;
    do
    {
    LOBYTE(v10) = *a4++;
    v17 = v10;
    if ( (char)v10 )
      {
    LOWORD(a2) = *(short *)(a1 + 8);
    v14 = (unsigned short)*a3;
    LOWORD(v14) = (unsigned short)v14 >> 2;
    v10 = a2 & v14;
    v15 = a2 & (*(short *)(*(int *)(a1 + 4) + 2 * v17) >> 2);
    a2 = 3 * v10;
    *a3 = 3 * v10 + v15;
      }
    ++a3;
    --v13;
    }
    while ( v13 );
  }
    return v10;
}
}
} // namespace gamemd

// 0x4927A0
namespace gamemd {
int E4Recv_4927A0::sub_4927A0(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
{
    return this->Vf4(a2, a3, a4, a5, a6, a7, a8, 0);
}
}
} // namespace gamemd

// 0x4927D0
namespace gamemd {
int E4Recv_4927D0::sub_4927D0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
{
    return this->Vf4(a2, a3, a4, a5, a6, a7, a8, 0);
}
}
} // namespace gamemd

// 0x492800
namespace gamemd {
int E4Recv_492800::sub_492800(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
{
    return this->Vf4(a2, a3, a4, a5, a6, a7, a8, 0);
}
}
} // namespace gamemd

// 0x492830
namespace gamemd {
unsigned int E4Recv_492830::sub_492830(unsigned short * a2, unsigned char * a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
{
    int v11;
    unsigned int result;
    int v14;
    v14 = this->M4;
    v11 = this->u32_8;
    do
  {
    result = (unsigned char)*a3;
    if ( *a3 )
    {
    LOWORD(result) = *(short *)(v14 + 2 * result);
    result = (v11 & ((unsigned short)*a2 >> 1)) + (v11 & (result >> 1));
    *a2 = result;
    }
    ++a3;
    ++a2;
  }
    while ( a4-- > 1 );
    return result;
}
}
} // namespace gamemd

// 0x492890
namespace gamemd {
int E4Recv_492890::sub_492890(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
{
    return this->Vf4(a2, a3, a4, a5, a6, a7, a8, 0);
}
}
} // namespace gamemd

// 0x4928C0
namespace gamemd {
int E4Recv_4928C0::sub_4928C0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
{
    return this->Vf4(a2, a3, a4, a5, a6, a7, a8, 0);
}
}
} // namespace gamemd

// 0x4928F0
namespace gamemd {
int E4Recv_4928F0::sub_4928F0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
{
    return this->Vf4(a2, a3, a4, a5, a6, a7, a8, 0);
}
}
} // namespace gamemd

// 0x492920
namespace gamemd {
char E4Recv_492920::sub_492920(unsigned short * a2, unsigned char * a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
{
    short v9;
    int v12;
    LOBYTE(v9) = a4;
    if ( a4 > 0 )
  {
    v12 = a4;
    do
    {
    LOBYTE(v9) = *a3++;
    if ( (char)v9 )
      {
    v9 = ((unsigned short)this->M8 & (*a2 >> 2))
    + 3 * ((unsigned short)this->M8 & (*(short *)(this->M4 + 2 * (unsigned char)v9) >> 2));
    *a2 = v9;
      }
    ++a2;
    --v12;
    }
    while ( v12 );
  }
    return v9;
}
}
} // namespace gamemd

// 0x492980
namespace gamemd {
int E4Recv_492980::sub_492980(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
{
    return this->Vf4(a2, a3, a4, a5, a6, a7, a8, 0);
}
}
} // namespace gamemd

// 0x4929B0
namespace gamemd {
int E4Recv_4929B0::sub_4929B0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
{
    return this->Vf4(a2, a3, a4, a5, a6, a7, a8, 0);
}
}
} // namespace gamemd

// 0x4929E0
namespace gamemd {
int E4Recv_4929E0::sub_4929E0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
{
    return this->Vf4(a2, a3, a4, a5, a6, a7, a8, 0);
}
}
} // namespace gamemd

// 0x492A10
namespace gamemd {
unsigned short * E4Recv_492A10::sub_492A10(unsigned short * a1, unsigned char * a2, int a4, int argC, unsigned short * a5, int a7, int a8, int a9)
{
{
    unsigned short *result;
    int v12;
    TacticalMap *v13;
    unsigned short v14;
    result = a5;
    if ( a4 > 0 )
  {
    v12 = a4;
    v13 = *(TacticalMap **)&DataGlobal_87F8E4[32096];
    do
    {
    v14 = *result++;
    if ( argC < v14 )
      {
    *a1 = *(short *)(this->M4 + 2 * *a2);
    v13 = *(TacticalMap **)&DataGlobal_87F8E4[32096];
      }
    ++a2;
    ++a1;
    if ( (unsigned int)result >= v13->TacticalMap_field_1C )
    result = (unsigned short *)((char *)result - v13->TacticalMap_field_20);
    --v12;
    }
    while ( v12 );
  }
    return result;
}
}
} // namespace gamemd

// 0x492A70
namespace gamemd {
int E4Recv_492A70::sub_492A70(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
{
    return (*((int (__thiscall **)(BlitPlainXlatZRead_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}
} // namespace gamemd

// 0x492AA0
namespace gamemd {
int E4Recv_492AA0::sub_492AA0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
{
    return (*((int (__thiscall **)(BlitPlainXlatZRead_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}
} // namespace gamemd

// 0x492AD0
namespace gamemd {
int E4Recv_492AD0::sub_492AD0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
{
    return (*((int (__thiscall **)(BlitPlainXlatZRead_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}
} // namespace gamemd

// 0x492B00
namespace gamemd {
unsigned short * E4Recv_492B00::sub_492B00(unsigned short * a2, unsigned char * a3, int a4, int a5, unsigned short * a6, int a7, int a8, int a9)
{
{
    unsigned short *result;
    int *v11;
    int v13;
    unsigned short v14;
    result = a6;
    if ( a4 > 0 )
  {
    v11 = g_ZBufferDescriptor;
    v13 = a4;
    do
    {
    v14 = *result++;
    if ( a5 < v14 && *a3 )
      {
    *a2 = *(short *)(this->M4 + 2 * (unsigned char)*a3);
    v11 = g_ZBufferDescriptor;
      }
    ++a3;
    ++a2;
    if ( (unsigned int)result >= v11[7] )
    result = (unsigned short *)((char *)result - v11[8]);
    --v13;
    }
    while ( v13 );
  }
    return result;
}
}
} // namespace gamemd

// 0x492B70
namespace gamemd {
int E4Recv_492B70::sub_492B70(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
{
    return this->Vf4(a2, a3, a4, a5, a6, a7, a8, 0);
}
}
} // namespace gamemd

// 0x492BA0
namespace gamemd {
int E4Recv_492BA0::sub_492BA0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
{
    return this->Vf4(a2, a3, a4, a5, a6, a7, a8, 0);
}
}
} // namespace gamemd

// 0x492BD0
namespace gamemd {
int E4Recv_492BD0::sub_492BD0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
{
    return this->Vf4(a2, a3, a4, a5, a6, a7, a8, 0);
}
}
} // namespace gamemd

// 0x492C00
namespace gamemd {
unsigned short * E4Recv_492C00::sub_492C00(unsigned short * a1, unsigned char * a2, int a4, int argC, unsigned short * a5, int a7, int a8, int a9)
{
{
    unsigned short *result;
    TacticalMap *v13;
    unsigned short v14;
    int v15;
    unsigned short *a5a;
    result = a5;
    v15 = **((int **)(this) + 1);
    if ( a4 > 0 )
  {
    v13 = *(TacticalMap **)&DataGlobal_87F8E4[32096];
    a5a = (unsigned short *)a4;
    do
    {
    v14 = *result++;
    if ( argC < v14 && *a2 )
      {
    *a1 = *(short *)(this->M8 + 2 * *(unsigned char *)((unsigned char)*a2 + v15));
    v13 = *(TacticalMap **)&DataGlobal_87F8E4[32096];
      }
    ++a2;
    ++a1;
    if ( (unsigned int)result >= v13->TacticalMap_field_1C )
    result = (unsigned short *)((char *)result - v13->TacticalMap_field_20);
    a5a = (unsigned short *)((char *)a5a - 1);
    }
    while ( a5a );
  }
    return result;
}
}
} // namespace gamemd

// 0x492C90
namespace gamemd {
int E4Recv_492C90::sub_492C90(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
{
    return (*((int (__thiscall **)(BlitTransZRemapXlatZRead_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}
} // namespace gamemd

// 0x492CC0
namespace gamemd {
int E4Recv_492CC0::sub_492CC0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
{
    return (*((int (__thiscall **)(BlitTransZRemapXlatZRead_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}
} // namespace gamemd

// 0x492CF0
namespace gamemd {
int E4Recv_492CF0::sub_492CF0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
{
    return (*((int (__thiscall **)(BlitTransZRemapXlatZRead_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}
} // namespace gamemd

// 0x492D20
namespace gamemd {
unsigned short * E4Recv_492D20::sub_492D20(unsigned short * a1, unsigned char * a2, int a4, int argC, unsigned short * a5, int a7, int a8, int a9)
{
{
    unsigned short *result;
    TacticalMap *v10;
    int v12;
    unsigned short v14;
    result = a5;
    if ( a4 > 0 )
  {
    v10 = *(TacticalMap **)&DataGlobal_87F8E4[32096];
    v12 = a4;
    do
    {
    v14 = *result++;
    if ( argC < v14 && *a2 )
      {
    *a1 = (unsigned short)this->M1 & (*a1 >> 1);
    v10 = *(TacticalMap **)&DataGlobal_87F8E4[32096];
      }
    ++a2;
    ++a1;
    if ( (unsigned int)result >= v10->TacticalMap_field_1C )
    result = (unsigned short *)((char *)result - v10->TacticalMap_field_20);
    --v12;
    }
    while ( v12 );
  }
    return result;
}
}
} // namespace gamemd

// 0x492D80
namespace gamemd {
int E4Recv_492D80::sub_492D80(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
{
    return (*((int (__thiscall **)(BlitTransDarkenZRead_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}
} // namespace gamemd

// 0x492DB0
namespace gamemd {
int E4Recv_492DB0::sub_492DB0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
{
    return (*((int (__thiscall **)(BlitTransDarkenZRead_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}
} // namespace gamemd

// 0x492DE0
namespace gamemd {
int E4Recv_492DE0::sub_492DE0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
{
    return (*((int (__thiscall **)(BlitTransDarkenZRead_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}
} // namespace gamemd

// 0x492E10
namespace gamemd {
int E4Recv_492E10::sub_492E10(unsigned short * a1, unsigned char * a2, int a4, int argC, unsigned short * a5, int a7, int a8, int a9)
{
{
    int result;
    TacticalMap *v12;
    unsigned short v14;
    unsigned short *a5a;
    result = a4;
    if ( a4 > 0 )
  {
    v12 = *(TacticalMap **)&DataGlobal_87F8E4[32096];
    a5a = (unsigned short *)a4;
    do
    {
    v14 = *a5++;
    if ( argC < v14 && *a2 )
      {
    *a1 = 3 * ((unsigned short)this->M2 & (*a1 >> 2))
    + ((unsigned short)this->M2 & (*(short *)(this->M4 + 2 * (unsigned char)*a2) >> 2));
    v12 = *(TacticalMap **)&DataGlobal_87F8E4[32096];
      }
    ++a2;
    ++a1;
    if ( (unsigned int)a5 >= v12->TacticalMap_field_1C )
    a5 = (unsigned short *)((char *)a5 - v12->TacticalMap_field_20);
    result = (int)a5a - 1;
    a5a = (unsigned short *)((char *)a5a - 1);
    }
    while ( a5a );
  }
    return result;
}
}
} // namespace gamemd

// 0x492EA0
namespace gamemd {
int E4Recv_492EA0::sub_492EA0(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
{
    return (*((int (__thiscall **)(BlitTransLucent75ZRead_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}
} // namespace gamemd

// 0x492ED0
namespace gamemd {
int E4Recv_492ED0::sub_492ED0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
{
    return (*((int (__thiscall **)(BlitTransLucent75ZRead_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}
} // namespace gamemd

// 0x492F00
namespace gamemd {
int E4Recv_492F00::sub_492F00(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
{
    return (*((int (__thiscall **)(BlitTransLucent75ZRead_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}
} // namespace gamemd

// 0x492F30
namespace gamemd {
unsigned short * E4Recv_492F30::sub_492F30(unsigned short * a1, unsigned char * a2, int a4, int argC, unsigned short * a5, int a7, int a8, int a9)
{
{
    unsigned short *result;
    TacticalMap *v12;
    unsigned short v13;
    unsigned short *a5a;
    result = a5;
    if ( a4 > 0 )
  {
    v12 = *(TacticalMap **)&DataGlobal_87F8E4[32096];
    a5a = (unsigned short *)a4;
    do
    {
    v13 = *result++;
    if ( argC < v13 && *a2 )
      {
    *a1 = ((unsigned short)this->M2 & (*a1 >> 1))
    + ((unsigned short)this->M2 & (*(short *)(this->M4 + 2 * (unsigned char)*a2) >> 1));
    v12 = *(TacticalMap **)&DataGlobal_87F8E4[32096];
      }
    ++a2;
    ++a1;
    if ( (unsigned int)result >= v12->TacticalMap_field_1C )
    result = (unsigned short *)((char *)result - v12->TacticalMap_field_20);
    a5a = (unsigned short *)((char *)a5a - 1);
    }
    while ( a5a );
  }
    return result;
}
}
} // namespace gamemd

// 0x492FC0
namespace gamemd {
int E4Recv_492FC0::sub_492FC0(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
{
    return (*((int (__thiscall **)(BlitTransLucent50ZRead_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}
} // namespace gamemd

// 0x492FF0
namespace gamemd {
int E4Recv_492FF0::sub_492FF0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
{
    return (*((int (__thiscall **)(BlitTransLucent50ZRead_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}
} // namespace gamemd

// 0x493020
namespace gamemd {
int E4Recv_493020::sub_493020(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
{
    return (*((int (__thiscall **)(BlitTransLucent50ZRead_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}
} // namespace gamemd

// 0x493050
namespace gamemd {
int E4Recv_493050::sub_493050(unsigned short * a1, unsigned char * a2, int a4, int argC, unsigned short * a5, int a7, int a8, int a9)
{
{
    int result;
    TacticalMap *v12;
    unsigned short v14;
    unsigned short *a5a;
    result = a4;
    if ( a4 > 0 )
  {
    v12 = *(TacticalMap **)&DataGlobal_87F8E4[32096];
    a5a = (unsigned short *)a4;
    do
    {
    v14 = *a5++;
    if ( argC < v14 && *a2 )
      {
    *a1 = ((unsigned short)this->M2 & (*a1 >> 2))
    + 3 * ((unsigned short)this->M2 & (*(short *)(this->M4 + 2 * (unsigned char)*a2) >> 2));
    v12 = *(TacticalMap **)&DataGlobal_87F8E4[32096];
      }
    ++a2;
    ++a1;
    if ( (unsigned int)a5 >= v12->TacticalMap_field_1C )
    a5 = (unsigned short *)((char *)a5 - v12->TacticalMap_field_20);
    result = (int)a5a - 1;
    a5a = (unsigned short *)((char *)a5a - 1);
    }
    while ( a5a );
  }
    return result;
}
}
} // namespace gamemd

// 0x4930E0
namespace gamemd {
int E4Recv_4930E0::sub_4930E0(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
{
    return (*((int (__thiscall **)(BlitTransLucent25ZRead_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}
} // namespace gamemd

// 0x493110
namespace gamemd {
int E4Recv_493110::sub_493110(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
{
    return (*((int (__thiscall **)(BlitTransLucent25ZRead_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}
} // namespace gamemd

// 0x493140
namespace gamemd {
int E4Recv_493140::sub_493140(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
{
    return (*((int (__thiscall **)(BlitTransLucent25ZRead_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}
} // namespace gamemd

// 0x493170
namespace gamemd {
int E4Recv_493170::sub_493170(unsigned short * a1, unsigned char * a2, int a4, int argC, unsigned short * a5, int a7, int a8, int a9)
{
{
    int result;
    TacticalMap *v12;
    unsigned short v14;
    unsigned short *a5a;
    result = a4;
    if ( a4 > 0 )
  {
    v12 = *(TacticalMap **)&DataGlobal_87F8E4[32096];
    a5a = (unsigned short *)a4;
    do
    {
    v14 = *a5++;
    if ( argC < v14 && *a2 )
      {
    *a1 = 3 * ((unsigned short)this->M2 & (a1[a9] >> 2))
    + ((unsigned short)this->M2 & (*(short *)(this->M4 + 2 * (unsigned char)*a2) >> 2));
    v12 = *(TacticalMap **)&DataGlobal_87F8E4[32096];
      }
    ++a2;
    ++a1;
    if ( (unsigned int)a5 >= v12->TacticalMap_field_1C )
    a5 = (unsigned short *)((char *)a5 - v12->TacticalMap_field_20);
    result = (int)a5a - 1;
    a5a = (unsigned short *)((char *)a5a - 1);
    }
    while ( a5a );
  }
    return result;
}
}
} // namespace gamemd

// 0x493210
namespace gamemd {
int E4Recv_493210::sub_493210(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
{
    return (*((int (__thiscall **)(BlitTransLucent75ZReadWarp_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}
} // namespace gamemd

// 0x493240
namespace gamemd {
int E4Recv_493240::sub_493240(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
{
    return (*((int (__thiscall **)(BlitTransLucent75ZReadWarp_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}
} // namespace gamemd

// 0x493270
namespace gamemd {
int E4Recv_493270::sub_493270(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
{
    return (*((int (__thiscall **)(BlitTransLucent75ZReadWarp_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}
} // namespace gamemd

// 0x4932A0
namespace gamemd {
unsigned short * E4Recv_4932A0::sub_4932A0(unsigned short * a1, unsigned char * a2, int a4, int argC, unsigned short * a5, int a7, int a8, int a9)
{
{
    unsigned short *result;
    TacticalMap *v12;
    unsigned short v13;
    unsigned short *a5a;
    result = a5;
    if ( a4 > 0 )
  {
    v12 = *(TacticalMap **)&DataGlobal_87F8E4[32096];
    a5a = (unsigned short *)a4;
    do
    {
    v13 = *result++;
    if ( argC < v13 && *a2 )
      {
    *a1 = ((unsigned short)this->M2 & (a1[a9] >> 1))
    + ((unsigned short)this->M2 & (*(short *)(this->M4 + 2 * (unsigned char)*a2) >> 1));
    v12 = *(TacticalMap **)&DataGlobal_87F8E4[32096];
      }
    ++a2;
    ++a1;
    if ( (unsigned int)result >= v12->TacticalMap_field_1C )
    result = (unsigned short *)((char *)result - v12->TacticalMap_field_20);
    a5a = (unsigned short *)((char *)a5a - 1);
    }
    while ( a5a );
  }
    return result;
}
}
} // namespace gamemd

// 0x493340
namespace gamemd {
int E4Recv_493340::sub_493340(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
{
    return (*((int (__thiscall **)(BlitTransLucent50ZReadWarp_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}
} // namespace gamemd

// 0x493370
namespace gamemd {
int E4Recv_493370::sub_493370(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
{
    return (*((int (__thiscall **)(BlitTransLucent50ZReadWarp_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}
} // namespace gamemd

// 0x4933A0
namespace gamemd {
int E4Recv_4933A0::sub_4933A0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
{
    return (*((int (__thiscall **)(BlitTransLucent50ZReadWarp_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}
} // namespace gamemd

// 0x4933D0
namespace gamemd {
int E4Recv_4933D0::sub_4933D0(unsigned short * a1, unsigned char * a2, int a4, int argC, unsigned short * a5, int a7, int a8, int a9)
{
{
    int result;
    TacticalMap *v12;
    unsigned short v14;
    unsigned short *a5a;
    result = a4;
    if ( a4 > 0 )
  {
    v12 = *(TacticalMap **)&DataGlobal_87F8E4[32096];
    a5a = (unsigned short *)a4;
    do
    {
    v14 = *a5++;
    if ( argC < v14 && *a2 )
      {
    *a1 = ((unsigned short)this->M2 & (a1[a9] >> 2))
    + 3 * ((unsigned short)this->M2 & (*(short *)(this->M4 + 2 * (unsigned char)*a2) >> 2));
    v12 = *(TacticalMap **)&DataGlobal_87F8E4[32096];
      }
    ++a2;
    ++a1;
    if ( (unsigned int)a5 >= v12->TacticalMap_field_1C )
    a5 = (unsigned short *)((char *)a5 - v12->TacticalMap_field_20);
    result = (int)a5a - 1;
    a5a = (unsigned short *)((char *)a5a - 1);
    }
    while ( a5a );
  }
    return result;
}
}
} // namespace gamemd

// 0x493470
namespace gamemd {
int E4Recv_493470::sub_493470(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
{
    return (*((int (__thiscall **)(BlitTransLucent25ZReadWarp_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}
} // namespace gamemd

// 0x4934A0
namespace gamemd {
int E4Recv_4934A0::sub_4934A0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
{
    return (*((int (__thiscall **)(BlitTransLucent25ZReadWarp_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}
} // namespace gamemd

// 0x4934D0
namespace gamemd {
int E4Recv_4934D0::sub_4934D0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
{
    return (*((int (__thiscall **)(BlitTransLucent25ZReadWarp_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}
} // namespace gamemd

// 0x493500
namespace gamemd {
unsigned short * E4Recv_493500::sub_493500(unsigned short * a1, unsigned char * a2, int a4, int argC, unsigned short * a5, int a7, int a8, int a9)
{
{
    short *result;
    TacticalMap *v12;
    short *a5a;
    result = a5;
    if ( a4 > 0 )
  {
    v12 = *(TacticalMap **)&DataGlobal_87F8E4[32096];
    a5a = (short *)a4;
    do
    {
    if ( argC < (unsigned short)*result )
      {
    *a1 = *(short *)(this->M4 + 2 * *a2);
    *result = (unsigned char)argC;
    v12 = *(TacticalMap **)&DataGlobal_87F8E4[32096];
      }
    ++result;
    ++a2;
    ++a1;
    if ( (unsigned int)result >= v12->TacticalMap_field_1C )
    result = (short *)((char *)result - v12->TacticalMap_field_20);
    a5a = (short *)((char *)a5a - 1);
    }
    while ( a5a );
  }
    return result;
}
}
} // namespace gamemd

// 0x493570
namespace gamemd {
int E4Recv_493570::sub_493570(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
{
    return (*((int (__thiscall **)(BlitPlainXlatZReadWrite_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}
} // namespace gamemd

// 0x4935A0
namespace gamemd {
int E4Recv_4935A0::sub_4935A0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
{
    return (*((int (__thiscall **)(BlitPlainXlatZReadWrite_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}
} // namespace gamemd

// 0x4935D0
namespace gamemd {
int E4Recv_4935D0::sub_4935D0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
{
    return (*((int (__thiscall **)(BlitPlainXlatZReadWrite_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}
} // namespace gamemd

// 0x493600
namespace gamemd {
unsigned short * E4Recv_493600::sub_493600(unsigned short * a2, unsigned char * a3, int a4, int a5, unsigned short * a6, int a7, int a8, int a9)
{
{
    short *result;
    int *v10;
    int v13;
    result = a6;
    if ( a4 > 0 )
  {
    v10 = g_ZBufferDescriptor;
    v13 = a4;
    do
    {
    if ( a5 < (unsigned short)*result && *a3 )
      {
    *a2 = *(short *)(this->M4 + 2 * (unsigned char)*a3);
    *result = a5;
    v10 = g_ZBufferDescriptor;
      }
    ++result;
    ++a3;
    ++a2;
    if ( (unsigned int)result >= v10[7] )
    result = (short *)((char *)result - v10[8]);
    --v13;
    }
    while ( v13 );
  }
    return result;
}
}
} // namespace gamemd

// 0x493680
namespace gamemd {
int E4Recv_493680::sub_493680(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
{
    return this->Vf4(a2, a3, a4, a5, a6, a7, a8, 0);
}
}
} // namespace gamemd

// 0x4936B0
namespace gamemd {
int E4Recv_4936B0::sub_4936B0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
{
    return this->Vf4(a2, a3, a4, a5, a6, a7, a8, 0);
}
}
} // namespace gamemd

// 0x4936E0
namespace gamemd {
int E4Recv_4936E0::sub_4936E0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
{
    return this->Vf4(a2, a3, a4, a5, a6, a7, a8, 0);
}
}
} // namespace gamemd

// 0x493710
namespace gamemd {
unsigned short * E4Recv_493710::sub_493710(unsigned short * a1, unsigned char * a2, int a4, int argC, unsigned short * a5, int a7, int a8, int a9)
{
{
    short *result;
    int v10;
    TacticalMap *v11;
    short *a5a;
    result = a5;
    v10 = **((int **)(this) + 1);
    if ( a4 > 0 )
  {
    v11 = *(TacticalMap **)&DataGlobal_87F8E4[32096];
    a5a = (short *)a4;
    do
    {
    if ( argC < (unsigned short)*result && *a2 )
      {
    *a1 = *(short *)(this->M8 + 2 * *(unsigned char *)((unsigned char)*a2 + v10));
    *result = argC;
    v11 = *(TacticalMap **)&DataGlobal_87F8E4[32096];
      }
    ++result;
    ++a2;
    ++a1;
    if ( (unsigned int)result >= v11->TacticalMap_field_1C )
    result = (short *)((char *)result - v11->TacticalMap_field_20);
    a5a = (short *)((char *)a5a - 1);
    }
    while ( a5a );
  }
    return result;
}
}
} // namespace gamemd

// 0x4937A0
namespace gamemd {
int E4Recv_4937A0::sub_4937A0(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
{
    return (*((int (__thiscall **)(BlitTransZRemapXlatZReadWrite_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}
} // namespace gamemd

// 0x4937D0
namespace gamemd {
int E4Recv_4937D0::sub_4937D0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
{
    return (*((int (__thiscall **)(BlitTransZRemapXlatZReadWrite_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}
} // namespace gamemd

// 0x493800
namespace gamemd {
int E4Recv_493800::sub_493800(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
{
    return (*((int (__thiscall **)(BlitTransZRemapXlatZReadWrite_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}
} // namespace gamemd

// 0x493830
namespace gamemd {
unsigned short * E4Recv_493830::sub_493830(unsigned short * a1, unsigned char * a2, int a4, int argC, unsigned short * a5, int a7, int a8, int a9)
{
{
    short *result;
    TacticalMap *v10;
    short *a5a;
    result = a5;
    if ( a4 > 0 )
  {
    v10 = *(TacticalMap **)&DataGlobal_87F8E4[32096];
    a5a = (short *)a4;
    do
    {
    if ( argC < (unsigned short)*result && *a2 )
      {
    *a1 = (unsigned short)this->M1 & (*a1 >> 1);
    *result = argC;
    v10 = *(TacticalMap **)&DataGlobal_87F8E4[32096];
      }
    ++result;
    ++a2;
    ++a1;
    if ( (unsigned int)result >= v10->TacticalMap_field_1C )
    result = (short *)((char *)result - v10->TacticalMap_field_20);
    a5a = (short *)((char *)a5a - 1);
    }
    while ( a5a );
  }
    return result;
}
}
} // namespace gamemd

// 0x4938A0
namespace gamemd {
int E4Recv_4938A0::sub_4938A0(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
{
    return (*((int (__thiscall **)(BlitTransDarkenZReadWrite_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}
} // namespace gamemd

// 0x4938D0
namespace gamemd {
int E4Recv_4938D0::sub_4938D0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
{
    return (*((int (__thiscall **)(BlitTransDarkenZReadWrite_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}
} // namespace gamemd

// 0x493900
namespace gamemd {
int E4Recv_493900::sub_493900(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
{
    return (*((int (__thiscall **)(BlitTransDarkenZReadWrite_G *, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, 0);
}
}
} // namespace gamemd

// 0x4963B0
namespace gamemd {
int E4Recv_4963B0::sub_4963B0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
{
    return (*((int (__thiscall **)(RLEBlitTransLucent75_G *, int, int, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
}
} // namespace gamemd

// 0x4963F0
namespace gamemd {
unsigned short * E4Recv_4963F0::sub_4963F0(unsigned short * a1, unsigned char * a2, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
{
    int v11;
    short *result;
    int v15;
    int v16;
    unsigned char v17;
    unsigned char v18;
    v11 = a5;
    result = a1;
    if ( a5 <= 0 )
  {
    v16 = a4;
  }
    else
  {
    do
    {
    if ( *a2++ )
    --v11;
    else
    v11 -= *a2++;
    }
    while ( v11 > 0 );
    v15 = -v11;
    result = &a1[v15];
    v16 = a4 - v15;
  }
    while ( v16 > 0 )
  {
    v17 = *a2++;
    if ( v17 )
    {
    --v16;
    *result = ((unsigned short)this->M2 & (*result >> 1))
    + ((unsigned short)this->M2 & (*(short *)(this->M4 + 2 * v17) >> 1));
    ++result;
    }
    else
    {
    v18 = *a2++;
    v16 -= v18;
    result += v18;
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x496490
namespace gamemd {
int E4Recv_496490::sub_496490(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
{
    return (*((int (__thiscall **)(RLEBlitTransLucent50_G *, int, int, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
}
} // namespace gamemd

// 0x496570
namespace gamemd {
int E4Recv_496570::sub_496570(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
{
    return (*((int (__thiscall **)(RLEBlitTransLucent25_G *, int, int, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
}
} // namespace gamemd

// 0x496690
namespace gamemd {
int E4Recv_496690::sub_496690(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
{
    return this->Vf4(a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
}
} // namespace gamemd

// 0x4967E0
namespace gamemd {
int E4Recv_4967E0::sub_4967E0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
{
    return (*((int (__thiscall **)(RLEBlitTransZRemapXlatZRead_G *, int, int, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
}
} // namespace gamemd

// 0x496820
namespace gamemd {
int E4Recv_496820::sub_496820(unsigned short * a1, unsigned char * a2, RLEBlitTransDarkenZRead_G * aP3, int a5, int a6, unsigned int a7, int a8, int a9, int _38, char * a10)
{
{
    int result;
    unsigned int v12;
    short *v14;
    int v17;
    RLEBlitTransDarkenZRead_G *v18;
    unsigned char v20;
    int v21;
    result = a5;
    v12 = a7;
    v14 = a1;
    if ( a5 <= 0 )
  {
    v18 = aP3;
  }
    else
  {
    do
    {
    if ( *a2++ )
    --result;
    else
    result -= *a2++;
    }
    while ( result > 0 );
    v17 = -result;
    v18 = (RLEBlitTransDarkenZRead_G *)((char *)aP3 - v17);
    v14 = &a1[v17];
    result = a7 + 2 * v17;
    if ( (unsigned int)result >= *(int *)(*(int *)&DataGlobal_87C374[45776] + 28) )
    result -= *(int *)(*(int *)&DataGlobal_87C374[45776] + 32);
    v12 = result;
  }
    while ( (int)v18 > 0 )
  {
    if ( *a2++ )
    {
    v12 += 2;
    v21 = a6 - *a10++;
    if ( v21 < *(unsigned short *)(v12 - 2) )
    *v14 = (unsigned short)this->M1 & (*v14 >> 1);
    v18 = (RLEBlitTransDarkenZRead_G *)((char *)v18 - 1);
    ++v14;
    }
    else
    {
    v20 = *a2++;
    v18 = (RLEBlitTransDarkenZRead_G *)((char *)v18 - v20);
    a10 += v20;
    v14 += v20;
    v12 += 2 * v20;
    }
    result = *(int *)&DataGlobal_87C374[45776];
    if ( v12 >= *(int *)(*(int *)&DataGlobal_87C374[45776] + 28) )
    v12 -= *(int *)(*(int *)&DataGlobal_87C374[45776] + 32);
  }
    return result;
}
}
} // namespace gamemd

// 0x4968F0
namespace gamemd {
int E4Recv_4968F0::sub_4968F0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
{
    return (*((int (__thiscall **)(RLEBlitTransDarkenZRead_G *, int, int, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
}
} // namespace gamemd

// 0x496A40
namespace gamemd {
int E4Recv_496A40::sub_496A40(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
{
    return (*((int (__thiscall **)(RLEBlitTransLucent75ZRead_G *, int, int, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
}
} // namespace gamemd

// 0x496B80
namespace gamemd {
int E4Recv_496B80::sub_496B80(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
{
    return (*((int (__thiscall **)(RLEBlitTransLucent50ZRead_G *, int, int, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
}
} // namespace gamemd

// 0x496CD0
namespace gamemd {
int E4Recv_496CD0::sub_496CD0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
{
    return (*((int (__thiscall **)(RLEBlitTransLucent25ZRead_G *, int, int, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
}
} // namespace gamemd

// 0x496E20
namespace gamemd {
int E4Recv_496E20::sub_496E20(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
{
    return (*((int (__thiscall **)(RLEBlitTransLucent75ZReadWarp_G *, int, int, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
}
} // namespace gamemd

// 0x496F70
namespace gamemd {
int E4Recv_496F70::sub_496F70(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
{
    return (*((int (__thiscall **)(RLEBlitTransLucent50ZReadWarp_G *, int, int, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
}
} // namespace gamemd

// 0x4970C0
namespace gamemd {
int E4Recv_4970C0::sub_4970C0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
{
    return (*((int (__thiscall **)(RLEBlitTransLucent25ZReadWarp_G *, int, int, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
}
} // namespace gamemd

// 0x4971F0
namespace gamemd {
int E4Recv_4971F0::sub_4971F0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
{
    return (*((int (__thiscall **)(RLEBlitTransXlatZReadWrite_G *, int, int, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
}
} // namespace gamemd

// 0x497350
namespace gamemd {
int E4Recv_497350::sub_497350(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
{
    return (*((int (__thiscall **)(RLEBlitTransZRemapXlatZReadWrite_G *, int, int, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
}
} // namespace gamemd

// 0x497470
namespace gamemd {
int E4Recv_497470::sub_497470(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
{
    return (*((int (__thiscall **)(RLEBlitTransDarkenZReadWrite_G *, int, int, int, int, int, int, int, int, int, int))this->vfptr + 1))( this, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
}
} // namespace gamemd

// 0x499CA0
namespace gamemd {
BlitTransXlat * E4Recv_499CA0::___Gfacet_locale_std__UAEPAXI_Z_4(char a2)
{
{
    *(int *)this = &vt_Blitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (BlitTransXlat *)this;
}
}
} // namespace gamemd

// 0x499D40
namespace gamemd {
std::locale::facet * E4Recv_499D40::___Gfacet_locale_std__UAEPAXI_Z_9(char a2)
{
{
    *(void**)this = vt_Blitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}
} // namespace gamemd

// 0x499D60
namespace gamemd {
std::locale::facet * E4Recv_499D60::___Gfacet_locale_std__UAEPAXI_Z_10(char a2)
{
{
    *(void**)this = vt_Blitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}
} // namespace gamemd

// 0x499D80
namespace gamemd {
RLEBlitTransXlat * E4Recv_499D80::___Gfacet_locale_std__UAEPAXI_Z_11(char a2)
{
{
    *(int *)this = &vt_RLEBlitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (RLEBlitTransXlat *)this;
}
}
} // namespace gamemd

// 0x499DC0
namespace gamemd {
std::locale::facet * E4Recv_499DC0::___Gfacet_locale_std__UAEPAXI_Z_13(char a2)
{
{
    *(void**)this = vt_RLEBlitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}
} // namespace gamemd

// 0x499DE0
namespace gamemd {
std::locale::facet * E4Recv_499DE0::___Gfacet_locale_std__UAEPAXI_Z_14(char a2)
{
{
    *(void**)this = vt_RLEBlitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}
} // namespace gamemd

// 0x499E00
namespace gamemd {
std::locale::facet * E4Recv_499E00::___Gfacet_locale_std__UAEPAXI_Z_15(char a2)
{
{
    *(void**)this = vt_RLEBlitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}
} // namespace gamemd

// 0x499E20
namespace gamemd {
RLEBlitTransXlatZRead * E4Recv_499E20::___Gfacet_locale_std__UAEPAXI_Z_16(char a2)
{
{
    *(int *)this = &vt_RLEBlitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (RLEBlitTransXlatZRead *)this;
}
}
} // namespace gamemd

// 0x499E40
namespace gamemd {
std::locale::facet * E4Recv_499E40::___Gfacet_locale_std__UAEPAXI_Z_17(char a2)
{
{
    *(void**)this = vt_RLEBlitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}
} // namespace gamemd

// 0x499E60
namespace gamemd {
std::locale::facet * E4Recv_499E60::___Gfacet_locale_std__UAEPAXI_Z_18(char a2)
{
{
    *(void**)this = vt_RLEBlitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}
} // namespace gamemd

// 0x499E80
namespace gamemd {
std::locale::facet * E4Recv_499E80::___Gfacet_locale_std__UAEPAXI_Z_19(char a2)
{
{
    *(void**)this = vt_RLEBlitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}
} // namespace gamemd

// 0x499EA0
namespace gamemd {
std::locale::facet * E4Recv_499EA0::___Gfacet_locale_std__UAEPAXI_Z_20(char a2)
{
{
    *(void**)this = vt_RLEBlitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}
} // namespace gamemd

// 0x499EC0
namespace gamemd {
std::locale::facet * E4Recv_499EC0::___Gfacet_locale_std__UAEPAXI_Z_21(char a2)
{
{
    *(void**)this = vt_RLEBlitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}
} // namespace gamemd

// 0x499EE0
namespace gamemd {
std::locale::facet * E4Recv_499EE0::___Gfacet_locale_std__UAEPAXI_Z_22(char a2)
{
{
    *(void**)this = vt_RLEBlitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}
} // namespace gamemd

// 0x499F00
namespace gamemd {
std::locale::facet * E4Recv_499F00::___Gfacet_locale_std__UAEPAXI_Z_23(char a2)
{
{
    *(void**)this = vt_RLEBlitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}
} // namespace gamemd

// 0x499F20
namespace gamemd {
BlitPlainXlat * E4Recv_499F20::___Gfacet_locale_std__UAEPAXI_Z_24(char a2)
{
{
    *(int *)this = &vt_Blitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (BlitPlainXlat *)this;
}
}
} // namespace gamemd

// 0x499F40
namespace gamemd {
std::locale::facet * E4Recv_499F40::___Gfacet_locale_std__UAEPAXI_Z_25(char a2)
{
{
    *(void**)this = vt_Blitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}
} // namespace gamemd

// 0x499F60
namespace gamemd {
BlitTransDarken * E4Recv_499F60::___Gfacet_locale_std__UAEPAXI_Z_26(char a2)
{
{
    *(int *)this = &vt_Blitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (BlitTransDarken *)this;
}
}
} // namespace gamemd

// 0x499F80
namespace gamemd {
BlitTransLucent75 * E4Recv_499F80::___Gfacet_locale_std__UAEPAXI_Z_27(char a2)
{
{
    *(int *)this = &vt_Blitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (BlitTransLucent75 *)this;
}
}
} // namespace gamemd

// 0x499FA0
namespace gamemd {
BlitTransLucent50 * E4Recv_499FA0::___Gfacet_locale_std__UAEPAXI_Z_28(char a2)
{
{
    *(int *)this = &vt_Blitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (BlitTransLucent50 *)this;
}
}
} // namespace gamemd

// 0x499FC0
namespace gamemd {
BlitTransLucent25 * E4Recv_499FC0::___Gfacet_locale_std__UAEPAXI_Z_29(char a2)
{
{
    *(int *)this = &vt_Blitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (BlitTransLucent25 *)this;
}
}
} // namespace gamemd

// 0x499FE0
namespace gamemd {
std::locale::facet * E4Recv_499FE0::___Gfacet_locale_std__UAEPAXI_Z_30(char a2)
{
{
    *(void**)this = vt_Blitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}
} // namespace gamemd

// 0x49A000
namespace gamemd {
BlitTransXlatZRead * E4Recv_49A000::___Gfacet_locale_std__UAEPAXI_Z_31(char a2)
{
{
    *(int *)this = &vt_Blitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (BlitTransXlatZRead *)this;
}
}
} // namespace gamemd

// 0x49A020
namespace gamemd {
std::locale::facet * E4Recv_49A020::___Gfacet_locale_std__UAEPAXI_Z_32(char a2)
{
{
    *(void**)this = vt_Blitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}
} // namespace gamemd

// 0x49A040
namespace gamemd {
std::locale::facet * E4Recv_49A040::___Gfacet_locale_std__UAEPAXI_Z_33(char a2)
{
{
    *(void**)this = vt_Blitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}
} // namespace gamemd

// 0x49A060
namespace gamemd {
std::locale::facet * E4Recv_49A060::___Gfacet_locale_std__UAEPAXI_Z_34(char a2)
{
{
    *(void**)this = vt_Blitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}
} // namespace gamemd

// 0x49A080
namespace gamemd {
std::locale::facet * E4Recv_49A080::___Gfacet_locale_std__UAEPAXI_Z_35(char a2)
{
{
    *(void**)this = vt_Blitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}
} // namespace gamemd

// 0x49A0A0
namespace gamemd {
std::locale::facet * E4Recv_49A0A0::___Gfacet_locale_std__UAEPAXI_Z_36(char a2)
{
{
    *(void**)this = vt_Blitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}
} // namespace gamemd

// 0x49A0C0
namespace gamemd {
std::locale::facet * E4Recv_49A0C0::___Gfacet_locale_std__UAEPAXI_Z_37(char a2)
{
{
    *(void**)this = vt_Blitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}
} // namespace gamemd

// 0x49A0E0
namespace gamemd {
std::locale::facet * E4Recv_49A0E0::___Gfacet_locale_std__UAEPAXI_Z_38(char a2)
{
{
    *(void**)this = vt_Blitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}
} // namespace gamemd

// 0x49A100
namespace gamemd {
std::locale::facet * E4Recv_49A100::___Gfacet_locale_std__UAEPAXI_Z_39(char a2)
{
{
    *(void**)this = vt_Blitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}
} // namespace gamemd

// 0x49A120
namespace gamemd {
std::locale::facet * E4Recv_49A120::___Gfacet_locale_std__UAEPAXI_Z_40(char a2)
{
{
    *(void**)this = vt_Blitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}
} // namespace gamemd

// 0x49A140
namespace gamemd {
BlitTransXlatZReadWrite * E4Recv_49A140::___Gfacet_locale_std__UAEPAXI_Z_41(char a2)
{
{
    *(int *)this = &vt_Blitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (BlitTransXlatZReadWrite *)this;
}
}
} // namespace gamemd

// 0x49A160
namespace gamemd {
std::locale::facet * E4Recv_49A160::___Gfacet_locale_std__UAEPAXI_Z_42(char a2)
{
{
    *(void**)this = vt_Blitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}
} // namespace gamemd

// 0x49A180
namespace gamemd {
std::locale::facet * E4Recv_49A180::___Gfacet_locale_std__UAEPAXI_Z_43(char a2)
{
{
    *(void**)this = vt_Blitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}
} // namespace gamemd

// 0x49A7C0
namespace gamemd {
std::locale::facet * E4Recv_49A7C0::___Gfacet_locale_std__UAEPAXI_Z_55(char a2)
{
{
    *(void**)this = vt_RLEBlitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}
} // namespace gamemd

// 0x49A7E0
namespace gamemd {
std::locale::facet * E4Recv_49A7E0::___Gfacet_locale_std__UAEPAXI_Z_56(char a2)
{
{
    *(void**)this = vt_RLEBlitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}
} // namespace gamemd

// 0x49A800
namespace gamemd {
std::locale::facet * E4Recv_49A800::___Gfacet_locale_std__UAEPAXI_Z_57(char a2)
{
{
    *(void**)this = vt_RLEBlitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}
} // namespace gamemd

// 0x49A820
namespace gamemd {
RLEBlitTransXlatZRead * E4Recv_49A820::___Gfacet_locale_std__UAEPAXI_Z_58(char a2)
{
{
    *(int *)this = &vt_RLEBlitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (RLEBlitTransXlatZRead *)this;
}
}
} // namespace gamemd

// 0x49A840
namespace gamemd {
std::locale::facet * E4Recv_49A840::___Gfacet_locale_std__UAEPAXI_Z_59(char a2)
{
{
    *(void**)this = vt_RLEBlitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}
} // namespace gamemd

// 0x49A860
namespace gamemd {
std::locale::facet * E4Recv_49A860::___Gfacet_locale_std__UAEPAXI_Z_60(char a2)
{
{
    *(void**)this = vt_RLEBlitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}
} // namespace gamemd

// 0x49A880
namespace gamemd {
std::locale::facet * E4Recv_49A880::___Gfacet_locale_std__UAEPAXI_Z_61(char a2)
{
{
    *(void**)this = vt_RLEBlitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}
} // namespace gamemd

// 0x49A8A0
namespace gamemd {
std::locale::facet * E4Recv_49A8A0::___Gfacet_locale_std__UAEPAXI_Z_62(char a2)
{
{
    *(void**)this = vt_RLEBlitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}
} // namespace gamemd

// 0x49A8C0
namespace gamemd {
std::locale::facet * E4Recv_49A8C0::___Gfacet_locale_std__UAEPAXI_Z_63(char a2)
{
{
    *(void**)this = vt_RLEBlitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}
} // namespace gamemd

// 0x49A8E0
namespace gamemd {
std::locale::facet * E4Recv_49A8E0::___Gfacet_locale_std__UAEPAXI_Z_64(char a2)
{
{
    *(void**)this = vt_RLEBlitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}
} // namespace gamemd

// 0x49A900
namespace gamemd {
std::locale::facet * E4Recv_49A900::___Gfacet_locale_std__UAEPAXI_Z_65(char a2)
{
{
    *(void**)this = vt_RLEBlitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}
} // namespace gamemd

// 0x49A920
namespace gamemd {
std::locale::facet * E4Recv_49A920::___Gfacet_locale_std__UAEPAXI_Z_66(char a2)
{
{
    *(void**)this = vt_RLEBlitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}
} // namespace gamemd

// 0x49A940
namespace gamemd {
std::locale::facet * E4Recv_49A940::___Gfacet_locale_std__UAEPAXI_Z_67(char a2)
{
{
    *(void**)this = vt_RLEBlitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}
} // namespace gamemd

// 0x49A960
namespace gamemd {
std::locale::facet * E4Recv_49A960::___Gfacet_locale_std__UAEPAXI_Z_68(char a2)
{
{
    *(void**)this = vt_RLEBlitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}
} // namespace gamemd

// 0x49A980
namespace gamemd {
std::locale::facet * E4Recv_49A980::___Gfacet_locale_std__UAEPAXI_Z_69(char a2)
{
{
    *(void**)this = vt_RLEBlitter;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return this;
}
}
} // namespace gamemd

// 0x49B180
namespace gamemd {
void sub_49B180()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_89F5A0 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x49B1B0
namespace gamemd {
void sub_49B1B0()
{
{
    *((double *)&DataGlobal_89F5D8 + 19) = DataGlobal_89F5A0 / 60.0;
}
}
} // namespace gamemd

// 0x49B1D0
namespace gamemd {
void sub_49B1D0()
{
{
    *((double *)&DataGlobal_89F5D8 + 16) = 1.0 / *((double *)&DataGlobal_89F5D8 + 19);
}
}
} // namespace gamemd

// 0x49B1F0
namespace gamemd {
void sub_49B1F0()
{
{
    DataGlobal_89F5D0 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x49B210
namespace gamemd {
void sub_49B210()
{
{
    DataGlobal_89F5A8 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x49B230
namespace gamemd {
void sub_49B230()
{
{
    DataGlobal_89F580 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x49B250
namespace gamemd {
long long sub_49B250()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_89F580 - DataGlobal_89F5A8);
    result = Math::RoundToInt(v0 * DataGlobal_89F5A0 * 0.5);
    *((int *)&DataGlobal_89F5D8 + 40) = result;
    return result;
}
}
} // namespace gamemd

// 0x49B290
namespace gamemd {
void sub_49B290()
{
{
    DataGlobal_89F5B0 = Math::ArcTan((double)*((int *)&DataGlobal_89F5D8 + 40) * 0.00390625);
}
}
} // namespace gamemd

// 0x49B2C0
namespace gamemd {
void sub_49B2C0()
{
{
    DataGlobal_89F5C8 = Math::ArcTan((double)(2 * *((int *)&DataGlobal_89F5D8 + 40)) / DataGlobal_89F5A0);
}
}
} // namespace gamemd

// 0x49B2F0
namespace gamemd {
long long sub_49B2F0()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * *((int *)&DataGlobal_89F5D8 + 40)) + 0.5);
    *((int *)&DataGlobal_89F5D8 + 37) = result;
    return result;
}
}
} // namespace gamemd

// 0x49B320
namespace gamemd {
int sub_49B320()
{
{
    DataGlobal_89F598 = 0;
    DataGlobal_89F59A = 0;
    return 0;
}
}
} // namespace gamemd

// 0x49B330
namespace gamemd {
int sub_49B330()
{
{
    DataGlobal_89F5B8 = 0;
    DataGlobal_89F5BC = 0;
    DataGlobal_89F5C0 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x49B350
namespace gamemd {
int sub_49B350()
{
{
    *((int *)&DataGlobal_89F5D8 + 34) = 128;
    *(__int64 *)(&DataGlobal_89F5D8 + 70) = 128;
    return 128;
}
}
} // namespace gamemd

// 0x49B370
namespace gamemd {
int sub_49B370()
{
{
    DataGlobal_89F588 = 0;
    DataGlobal_89F58C = 0;
    DataGlobal_89F590 = 0;
    DataGlobal_89F594 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x49B390
namespace gamemd {
int sub_49B390()
{
{
    DataGlobal_89F51C = 0;
    DataGlobal_89F520 = 0;
    GenericNode::Constructor(DataGlobal_89F528);
    GenericNode::Constructor(DataGlobal_89F534);
    DataGlobal_89F524 = (int)&vt_GenericList;
    LinkedList::Prepend(DataGlobal_89F528, (int)DataGlobal_89F534);
    DataGlobal_89F524 = (int)&vt_List_INIClass_INISection;
    DataGlobal_89F540 = 0;
    DataGlobal_89F544 = 0;
    DataGlobal_89F548 = 0;
    DataGlobal_89F54C = 0;
    DataGlobal_89F550 = 0;
    DataGlobal_89F554 = 0;
    DataGlobal_89F558 = 0;
    g_DDrawSurfaceManager = (int)&CCINIClass_Vtable;
    DataGlobal_89F578 = 0;
    return atexit(unknown_libname_12);
}
}
} // namespace gamemd

// 0x49B420
namespace gamemd {
int unknown_libname_12()
{
    void __cdecl unknown_libname_12()
{
    INIClass::ClearContents((int)&g_DDrawSurfaceManager);
}
}
} // namespace gamemd

// 0x49B430
namespace gamemd {
char Hex_EncodeDigit(int a1)
{
  if ( (unsigned int)a1 >= 0x10 )
    return 0;
  if ( a1 >= 10 )
    return a1 + 55;
  return a1 + 48;
}
} // namespace gamemd

// 0x49DA60
namespace gamemd {
unsigned int * E4Recv_49DA60::sub_49DA60()
{
{
    int *result;
    int *v2;
    int *v3;
    int v4;
    int v5;
    int v6;
    int v7;
    result = this;
    v2 = this + 4;
    v3 = this + 7;
    result[1] = 0;
    result[2] = 0;
    v2[1] = 0;
    v2[2] = 0;
    *v2 = &vt_GenericNode;
    v3[1] = 0;
    v3[2] = 0;
    *v3 = &vt_GenericNode;
    result[3] = &vt_GenericList;
    if ( v3 )
  {
    v4 = v3[1];
    if ( v4 )
    {
    v5 = v3[2];
    if ( v5 )
      {
    *(int *)(v5 + 4) = v4;
    *(int *)(v3[1] + 8) = v3[2];
    v3[2] = 0;
    v3[1] = 0;
      }
    }
  }
    v6 = v2[1];
    v3[2] = v2;
    v3[1] = v6;
    v7 = v2[1];
    if ( v7 )
    *(int *)(v7 + 8) = v3;
    v2[1] = v3;
    result[3] = &vt_List_INIClass_INISection;
    result[10] = 0;
    result[11] = 0;
    result[12] = 0;
    *((char *)(result) + 52) = 0;
    result[14] = 0;
    result[15] = 0;
    *((char *)(result) + 64) = 0;
    *result = &CCINIClass_Vtable;
    *((char *)(result) + 96) = 0;
    return result;
}
}
} // namespace gamemd

// 0x49F0E0
namespace gamemd {
void sub_49F0E0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_89F6C0 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x49F110
namespace gamemd {
void sub_49F110()
{
{
    DataGlobal_89F750 = DataGlobal_89F6C0 / 60.0;
}
}
} // namespace gamemd

// 0x49F130
namespace gamemd {
void sub_49F130()
{
{
    DataGlobal_89F738 = 1.0 / DataGlobal_89F750;
}
}
} // namespace gamemd

// 0x49F150
namespace gamemd {
void sub_49F150()
{
{
    DataGlobal_89F730 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x49F170
namespace gamemd {
void sub_49F170()
{
{
    DataGlobal_89F6C8 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x49F190
namespace gamemd {
void sub_49F190()
{
{
    *((double *)&DataGlobal_89F5D8 + 21) = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x49F1B0
namespace gamemd {
long long sub_49F1B0()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(*((double *)&DataGlobal_89F5D8 + 21) - DataGlobal_89F6C8);
    result = Math::RoundToInt(v0 * DataGlobal_89F6C0 * 0.5);
    DataGlobal_89F758 = result;
    return result;
}
}
} // namespace gamemd

// 0x49F1F0
namespace gamemd {
void sub_49F1F0()
{
{
    DataGlobal_89F6D0 = Math::ArcTan((double)DataGlobal_89F758 * 0.00390625);
}
}
} // namespace gamemd

// 0x49F220
namespace gamemd {
void sub_49F220()
{
{
    DataGlobal_89F728 = Math::ArcTan((double)(2 * DataGlobal_89F758) / DataGlobal_89F6C0);
}
}
} // namespace gamemd

// 0x49F250
namespace gamemd {
long long sub_49F250()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_89F758) + 0.5);
    DataGlobal_89F74C = result;
    return result;
}
}
} // namespace gamemd

// 0x49F280
namespace gamemd {
int sub_49F280()
{
{
    DataGlobal_89F6B8 = 0;
    DataGlobal_89F6BA = 0;
    return 0;
}
}
} // namespace gamemd

// 0x49F290
namespace gamemd {
int sub_49F290()
{
{
    DataGlobal_89F718 = 0;
    DataGlobal_89F71C = 0;
    DataGlobal_89F720 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x49F2B0
namespace gamemd {
int sub_49F2B0()
{
{
    DataGlobal_89F748 = 0;
    DataGlobal_89F740 = 128;
    DataGlobal_89F744 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x49F2D0
namespace gamemd {
int sub_49F2D0()
{
{
    DataGlobal_89F6A8 = 0;
    DataGlobal_89F6AC = 0;
    DataGlobal_89F6B0 = 0;
    DataGlobal_89F6B4 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x49F2F0
namespace gamemd {
int sub_49F2F0()
{
{
    Direction_X_Offsets[0] = -65536;
    DataGlobal_89F68C = -65535;
    g_CellDirectionOffsets = 1;
    DataGlobal_89F694 = 65537;
    DataGlobal_89F69C = 0x1FFFF;
    g_DirectionOffsetPool = 0x10000;
    Direction_Y_Offsets = 0xFFFF;
    DataGlobal_89F6A4 = -1;
    return -1;
}
}
} // namespace gamemd

// 0x49F3A0
namespace gamemd {
int sub_49F3A0()
{
{
    DataGlobal_89F6DC[0] = -256;
    DataGlobal_89F6E4 = -256;
    DataGlobal_89F6D8[0] = 0;
    DataGlobal_89F6EC = 0;
    DataGlobal_89F6E0 = 256;
    DataGlobal_89F6E8 = 256;
    DataGlobal_89F6F0 = 256;
    DataGlobal_89F6F4 = 256;
    DataGlobal_89F6FC = 256;
    DataGlobal_89F704 = 256;
    DataGlobal_89F6F8 = 0;
    DataGlobal_89F70C = 0;
    DataGlobal_89F700 = -256;
    DataGlobal_89F708 = -256;
    DataGlobal_89F710 = -256;
    DataGlobal_89F714 = -256;
    return -256;
}
}
} // namespace gamemd

// 0x49F420
namespace gamemd {
int * RandomCoordScatter(int * a0, IUnknown * aP1, int aP2, ScenarioClass * aP3)
{
{
    char v5;
    short v6;
    IUnknown *v7;
    double v8;
    double v9;
    IUnknown *v10;
    IUnknown *v11;
    int v12;
    IUnknown *v13;
    int *result;
    int *v15;
    IUnknown *a0[2];
    int v17;
    int *v18;
    double v19;
    double v20;
    IUnknown *aP2a;
    v18 = a0;
    LOWORD(a0[0]) = 0;
    v5 = Random::State((int *)(*(int *)&HouseClass_Player[29924] + 536));
    LOBYTE(v6) = 0;
    HIBYTE(v6) = v5;
    v7 = (IUnknown *)aP1->field_8;
    *(double *)a0 = (double)(v6 - 0x3FFF) * -0.00009587672516830327;
    v19 = (double)aP2;
    v20 = (double)aP1->field_4;
    v8 = Math::SinCos(a0[0]);
    aP2a = (IUnknown *)Math::RoundToInt(v20 - v8 * v19);
    v9 = Math::ArcTan2(a0[0]);
    v10 = (IUnknown *)Math::RoundToInt(v9 * v19 + (double)aP1->field_0);
    Coord::Subtract(a0, v10, aP2a, v7);
    v11 = a0[1];
    v12 = v17;
    v13 = a0[0];
    if ( (unsigned int)((int)a0[0] / 256) >= 0x200 || (unsigned int)((int)a0[1] / 256) >= 0x200 )
  {
    v13 = (IUnknown *)aP1->field_0;
    v11 = (IUnknown *)aP1->field_4;
    v12 = aP1->field_8;
  }
    if ( (char)aP3 )
  {
    v13 = (IUnknown *)&v13->__pad_68[-(unsigned char)v13 + 24];
    v11 = (IUnknown *)&v11->__pad_68[-(unsigned char)v11 + 24];
  }
    result = v18;
    v15 = v18;
    *v18 = (int)v13;
    v15[1] = (int)v11;
    v15[2] = v12;
    return result;
}
}
} // namespace gamemd

// 0x49F550
namespace gamemd {
IUnknown * globalHelper_09F550(int * a1, IUnknown * a2, int a3)
{
{
    int v4;
    IUnknown *v5;
    char *v6;
    int GroundHeight;
    int v9;
    int v10;
    IUnknown *v11;
    v4 = *(int *)&DataGlobal_89E138[5296][8 * a3 + 240] + a2->field_0;
    v5 = (IUnknown *)a2->field_8;
    v10 = a2->field_4 + *(int *)&DataGlobal_89E138[5296][8 * a3 + 244];
    v9 = v4;
    v11 = v5;
    v6 = (char *)v5 - Cell::GetGroundHeight(a2);
    GroundHeight = Cell::GetGroundHeight((IUnknown *)&v9);
    *a1 = v9;
    *((int*)(a1) + 1) = v10;
    *((int*)(a1) + 2) = (int)&v6[GroundHeight];
    return (IUnknown *)a1;
}
}
} // namespace gamemd

// 0x49F920
namespace gamemd {
bool sub_49F920()
{
{
    LSTATUS v0;
    int v1;
    HKEY phkResult;
    DWORD cbData;
    DWORD Type;
    BYTE Data[4];
    if ( RegOpenKeyExA(HKEY_CLASSES_ROOT, SubKey, 0, 0x20019u, &phkResult) )
    return 0;
    cbData = 4;
    v0 = RegQueryValueExA(phkResult, ValueName, 0, &Type, Data, &cbData);
    RegCloseKey(phkResult);
    if ( v0 || Type != 4 )
    return 0;
    v1 = VersionInfo::Read((int)&g_EventManager[624]);
    return *(int *)Data == v1;
}
}
} // namespace gamemd

// 0x49FD30
namespace gamemd {
int sub_49FD30()
{
{
    DataGlobal_89F768 = 0;
    DataGlobal_89F76C = 0;
    DataGlobal_89F770 = 0;
    DataGlobal_89F774 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x49FD50
namespace gamemd {
void sub_49FD50()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_89F780 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x49FD80
namespace gamemd {
void sub_49FD80()
{
{
    DataGlobal_89F7D0 = DataGlobal_89F780 / 60.0;
}
}
} // namespace gamemd

// 0x49FDA0
namespace gamemd {
void sub_49FDA0()
{
{
    DataGlobal_89F7B8 = 1.0 / DataGlobal_89F7D0;
}
}
} // namespace gamemd

// 0x49FDC0
namespace gamemd {
void sub_49FDC0()
{
{
    DataGlobal_89F7B0 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x49FDE0
namespace gamemd {
void sub_49FDE0()
{
{
    DataGlobal_89F788 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x49FE00
namespace gamemd {
void sub_49FE00()
{
{
    DataGlobal_89F760 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x49FE20
namespace gamemd {
long long sub_49FE20()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_89F760 - DataGlobal_89F788);
    result = Math::RoundToInt(v0 * DataGlobal_89F780 * 0.5);
    DataGlobal_89F7D8 = result;
    return result;
}
}
} // namespace gamemd

// 0x49FE60
namespace gamemd {
void sub_49FE60()
{
{
    DataGlobal_89F790 = Math::ArcTan((double)DataGlobal_89F7D8 * 0.00390625);
}
}
} // namespace gamemd

// 0x49FE90
namespace gamemd {
void sub_49FE90()
{
{
    DataGlobal_89F7A8 = Math::ArcTan((double)(2 * DataGlobal_89F7D8) / DataGlobal_89F780);
}
}
} // namespace gamemd

// 0x49FEC0
namespace gamemd {
long long sub_49FEC0()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_89F7D8) + 0.5);
    DataGlobal_89F7CC = result;
    return result;
}
}
} // namespace gamemd

// 0x49FEF0
namespace gamemd {
int sub_49FEF0()
{
{
    DataGlobal_89F778 = 0;
    DataGlobal_89F77A = 0;
    return 0;
}
}
} // namespace gamemd

// 0x49FF00
namespace gamemd {
int sub_49FF00()
{
{
    DataGlobal_89F798 = 0;
    DataGlobal_89F79C = 0;
    DataGlobal_89F7A0 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x49FF20
namespace gamemd {
int sub_49FF20()
{
{
    DataGlobal_89F7C8 = 0;
    DataGlobal_89F7C0 = 128;
    DataGlobal_89F7C4 = 128;
    return 128;
}
}
} // namespace gamemd
