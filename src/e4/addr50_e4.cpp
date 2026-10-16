// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_501750_e4.hpp"
#include "e4/classes/E4Recv_5093C0_e4.hpp"
#include "e4/classes/E4Recv_50C160_e4.hpp"
#include "e4/classes/E4Recv_50DA40_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Options_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/SkirmishDialog_e4.hpp"
#include "e4/classes/BuildingType_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/SessionClass_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"

// 0x501750
namespace gamemd {  // G42.18 ns repair
int E4Recv_501750::sub_501750(int a2)
{
  char result; // al
  int v4; // eax
  char v5; // bl
  int v6; // [esp+5Ch] [ebp-28h] BYREF
  int v7; // [esp+60h] [ebp-24h] BYREF
  int v8; // [esp+64h] [ebp-20h] BYREF
  int v9; // [esp+68h] [ebp-1Ch] BYREF
  unsigned int v10[2]; // [esp+6Ch] [ebp-18h] BYREF
  unsigned char v11[16]; // [esp+74h] [ebp-10h] BYREF

  result = byte_A8E9A0; /*0x501750*/
  if ( byte_A8E9A0 ) /*0x50175f*/
  {
    v4 = this->M21412; /*0x501765*/
    v5 = v4 < this->M21416; /*0x501777*/
    this->M21412 = a2 + v4; /*0x50177e*/
    House_Notify(); /*0x501784*/
    result = this->M21412 < this->M21416; /*0x50179d*/
    result = result; /*0x5017a2*/
    if ( !dword_A8E7AC && v5 != result ) /*0x5017ae*/
    {
      (*(void (__stdcall **)(ObjectClass *, void *, int *))this->vfptr)(this, &unk_7F7CD0, &v9); /*0x5017c1*/
      (*(void (__stdcall **)(int, int *))(*(unsigned int *)v9 + 12))(v9, &v8); /*0x5017cf*/
      if ( (*(int (__stdcall **)(int, int, int *, unsigned int))(*(unsigned int *)v8 + 12))(v8, 1, &v6, 0) >= 0 ) /*0x5017e7*/
      {
        while ( 1 ) /*0x5017f7*/
        {
          (*(void (__stdcall **)(int, unsigned char *))(*(unsigned int *)v6 + 12))(v6, v11); /*0x5017f9*/
          if ( !memcmp(v11,(const void *)(dword_7E9550), 0x10u) ) /*0x501810*/
            break; /*0x501810*/
          (*(void (__stdcall **)(int))(*(unsigned int *)v6 + 8))(v6); /*0x501817*/
          if ( (*(int (__stdcall **)(int, int, int *, unsigned int))(*(unsigned int *)v8 + 12))(v8, 1, &v6, 0) < 0 ) /*0x50182f*/
            goto LABEL_14; /*0x50182f*/
        }
        (*(void (__stdcall **)(int, int *))(*(unsigned int *)v6 + 28))(v6, &v7); /*0x50183b*/
        while ( (*(int (__stdcall **)(int, int, unsigned int *, unsigned int))(*(unsigned int *)v7 + 12))(v7, 1, v10, 0) >= 0 ) /*0x501853*/
        {
          if ( result ) /*0x50185f*/
            (*(void (__stdcall **)(unsigned int))(*(unsigned int *)v10[0] + 16))(v10[0]); /*0x501864*/
          else
            (*(void (__stdcall **)(unsigned int))(*(unsigned int *)v10[0] + 12))(v10[0]); /*0x50186c*/
          (*(void (__stdcall **)(unsigned int))(*(unsigned int *)v10[0] + 8))(v10[0]); /*0x501876*/
        }
        (*(void (__stdcall **)(int))(*(unsigned int *)v7 + 8))(v7); /*0x501897*/
      }
      LABEL_14:
      (*(void (__stdcall **)(int))(*(unsigned int *)v9 + 8))(v9); /*0x50189a*/
      return (*(char (__stdcall **)(int))(*(unsigned int *)v8 + 8))(v8); /*0x5018ab*/
    }
  }
  return result; /*0x5018ae*/
}
}  // G42.18 ns repair
// 0x504790
namespace gamemd {
int UpdateHouseClassAnger(IUnknown * aP0, HouseClass * aP1, int a3, int a4)
{
  int v4; // ebx
  int v6; // ecx
  int v7; // ebp
  int v8; // ecx
  unsigned int *v9; // edi
  int v10; // ecx
  int v12; // [esp+14h] [ebp+4h]
  int v13; // [esp+18h] [ebp+8h]

  v4 = 0; /*0x504793*/
  aP0 = aP0; /*0x50479c*/
  if ( aP0->u32_5614 > 0 ) /*0x5047a2*/
  {
    do /*0x5047c8*/
    {
      v6 = aP0->u32_5608; /*0x5047ac*/
      v7 = *(unsigned int *)(v6 + 8 * (*(((unsigned int *)&(aP0)) + 1))); /*0x5047b2*/
      v8 = v6 + 8 * (*(((unsigned int *)&(aP0)) + 1)); /*0x5047b5*/
      if ( v7 == a4 ) /*0x5047ba*/
        *(unsigned int *)(v8 + 4) += a3; /*0x5047bc*/
      ++(*(((unsigned int *)&(aP0)) + 1)); /*0x5047c5*/
    }
    while ( (*((signed int *)(((unsigned char *)&(aP0)) + 4))) < aP0->u32_5614 ); /*0x5047c8*/
  }
  v12 = 0; /*0x5047d0*/
  if ( aP0->u32_5614 <= 0 ) /*0x5047d6*/
    goto LABEL_18; /*0x5047d6*/
  v9 = aP0->u32_5608; /*0x5047d8*/
  v13 = *&aP0->u32_5614; /*0x5047de*/
  do /*0x504832*/
  {
    (*(((unsigned int *)&(aP0)) + 1)) = *v9; /*0x5047e5*/
    if ( v9[1] > v4 && !*(unsigned char *)((*(((unsigned int *)&(aP0)) + 1)) + 501) ) /*0x5047eb*/
    {
      if ( !(*(((unsigned int *)&(aP0)) + 1)) /*0x50481e*/
        || (*(((unsigned int *)&(aP0)) + 1)) != (unsigned int)aP0
        && (v10 = *(unsigned int *)((*(((unsigned int *)&(aP0)) + 1)) + 48), v10 != aP0->ptr_30)
        && (v10 == -1 || ((1 << v10) & aP0->ptr_5788) == 0) )
      {
        v4 = v9[1]; /*0x504820*/
        v12 = *v9; /*0x504822*/
      }
    }
    v9 += 2; /*0x50482a*/
    --v13; /*0x50482e*/
  }
  while ( v13 ); /*0x504832*/
  if ( v12 ) /*0x50483a*/
    aP0->u32_5600 = *(unsigned int *)(v12 + 48); /*0x504842*/
  else
    LABEL_18:
  aP0->u32_5600 = -1; /*0x50484f*/
}
}
// 0x5004E0
namespace gamemd {
int House_GetTechLevel(int a1, int a2)
{

  if ( a2 < 0 ) /*0x5004e5*/
    return 0; /*0x5004e7*/
  int v4; // eax
  v4 = TechnoTypeClass::GetByTypeAndIndex(a1, a2); /*0x5004ed*/
  if ( a1 == 6 || a1 == 7 ) /*0x5004fa*/
    return v4->qE08; /*0x500500*/
  else
    return 0; /*0x5004fc*/
}
} // namespace gamemd

// 0x501AA0
namespace gamemd {
unsigned int * sub_501AA0(unsigned int * a1, int a2, int a3)
{
  *a1 = 0; /*0x501ab5*/
  return a1; /*0x501ab8*/
}
} // namespace gamemd

// 0x505F80
namespace gamemd {
int globalHelper_005F80(int a1, int * a2, int a3, int a4)
{

  int v4; // esi
  v4 = *(int16_t *)a2 - *(int16_t *)(a1 + 22352); /*0x505f92*/
  int64_t v5; // rax
  v5 = *((int16_t *)a2 + 1) - *(int16_t *)(a1 + 22354); /*0x505f9a*/
  signed int v6; // ecx
  v6 = ((*(((unsigned int *)&(v5)) + 1)) ^ v5) - (*(((unsigned int *)&(v5)) + 1)); /*0x505fa2*/
  signed int v7; // eax
  v7 = abs32(v4); /*0x505fa7*/
  if ( v7 <= v6 ) /*0x505fab*/
    v7 = v6; /*0x505fad*/
  return a3 + 1000 * v7; /*0x505fa1*/
}
} // namespace gamemd

// 0x505FD0
namespace gamemd {
int globalHelper_005FD0(int a1, int * a2, int a3, int a4, void * a5)
{

  int v5; // esi
  v5 = *((int16_t *)a2 + 1); /*0x505fd5*/
  int v6; // edx
  v6 = *(int16_t *)a2; /*0x505ff7*/
  int v8; // edi
  v8 = *(unsigned int *)(*(unsigned int *)(a1 + 90208) /*0x506002*/
  + 4 * (v6 + *(unsigned int *)(a1 + 22364) * (v5 - *(unsigned int *)(a1 + 22360)) - *(unsigned int *)(a1 + 22356)));
  int v9 = 0; // eax /*0x506005*/
  if ( a5 != (void *)(-1) ) /*0x50600a*/
  {
    int v14; // [esp+1Ch] [ebp-8h]
    v14 = v6 - *(int16_t *)(a1 + 22352); /*0x50601e*/
    __asm { fild [esp+1Ch+var_8] } /*0x506025*/
    unsigned int v15; // [esp+2Ch] [ebp+8h]
    v15 = *(int16_t *)(a1 + 22354) - v5; /*0x50602b*/
    __asm /*0x50602f*/
    {
      fstp [esp+1Ch+var_1C]; double
      fild [esp+1Ch+arg_4]
    }
    __asm { fstp [esp+24h+var_24] } /*; double*/
    double v12; // [esp+0h] [ebp-24h]
    double v13; // [esp+8h] [ebp-1Ch]
    Math::CalcAngle(v12, v13); /*0x50603c*/
    __asm { fsub ds:dbl_7E2820 } /*0x506041*/
    __asm { fmul ds:dbl_7E2818 }
    (*((unsigned short *)&(v15))) = Math::RoundToInt(a3); /*0x506055*/
    int64_t v10; // rax
    v10 = 32 * a5 - (uint8_t)(((v15 >> 7) + 1) >> 1); /*0x506071*/
    v9 = ((*(((unsigned int *)&(v10)) + 1)) ^ v10) - (*(((unsigned int *)&(v10)) + 1)); /*0x506074*/
    if ( v9 >= 128 ) /*0x50607b*/
      v9 = 255 - v9; /*0x506084*/
  }
  return a4 + 1000 * (v9 + (v8 << 7)); /*0x50608e*/
}
} // namespace gamemd

// 0x506B70
namespace gamemd {
void nullsub_16()
{
  ; /*0x506b70*/
}
} // namespace gamemd

// 0x506B80
namespace gamemd {
void nullsub_17()
{
  ; /*0x506b80*/
}
} // namespace gamemd

// 0x5092F0
namespace gamemd {
int HouseClass::sub_5092F0(int a2)
{

  int result = a2; // eax /*0x5092f0*/
  this->radarVisibleTo |= 1 << *(unsigned int *)(*(unsigned int *)(a2 + 52) + 184); /*0x509313*/
  if ( (Object *)a2 == (gamemd::Object *)(dword_A83D4C) ) /*0x509321*/
  {
    int i; // edi
    for ( i = 0; i < dword_A8EC88; ++i ) /*0x509330*/
    {
      int *v5; // ecx
      v5 = (int *)*((unsigned int *)dword_A8EC7C + i); /*0x509337*/
      if ( v5 && !*((unsigned char *)v5 + 129) && (TechnoClass *)v5[135] == (gamemd::TechnoClass *)(this) ) /*0x50934e*/
      {
        int v8[3]; // [esp+8h] [ebp-Ch] BYREF
        v8[0] = v5[39]; /*0x509360*/
        v8[1] = v5[40]; /*0x50936a*/
        int v6 = *v5; // eax /*0x50936e*/
        v8[2] = v5[41]; /*0x509373*/
        int v7; // eax
        v7 = (*(int (**)(int *))(v6 + 132))(v5); /*0x509377*/
        MapClass::RevealArea0((MapClass *)&dword_87F7E8, v8, *(unsigned int *)(v7 + 1512), this, 0, 0, 0, 1, 1); /*0x50938e*/
      }
    }
    return MapClass::MarkForRedraw((GScreenClass *)&dword_87F7E8, 2); /*0x5093a4*/
  }
  return result; /*0x5093a9*/
}
} // namespace gamemd


int v2; // esi
int result; // eax
unsigned int *i; // edx

v2 = this->u32_5614;
result = 0; /*0x5093c8*/
if ( v2 > 0 ) /*0x5093cd*/
{
  for ( i = (unsigned int *)this->u32_5608; *i != a2; i += 2 )
  {
    if ( ++result >= v2 ) /*0x5093e5*/
      return result; /*0x5093e5*/
  }
  return UpdateHouseClassAnger( /*0x5093f5*/
             (unsigned int)this,
             (int)i,
             -*(unsigned int *)(this->u32_5608 + 8 * result + 4),
             a2);
  return result; /*0x5093e7*/

} // namespace gamemd

// 0x509CC0
namespace gamemd {
void nullsub_144(int a1)
{
  ; /*0x509cc0*/
}
} // namespace gamemd

// 0x50B920
namespace gamemd {
void sub_50B920(int a1, int a2, int a3)
{

  double v5; // st7
  v5 = Math::Sqrt(*(double *)a1 * *(double *)a1 + *(double *)a3 * *(double *)a3 + *(double *)a2 * *(double *)a2); /*0x50b94d*/
  if ( v5 == 0.0 ) /*0x50b960*/
  {
    *(unsigned int *)a3 = 0; /*0x50b967*/
    *(unsigned int *)(a3 + 4) = 1081073664; /*0x50b96d*/
    *(unsigned int *)a2 = 0; /*0x50b970*/
    *(unsigned int *)(a2 + 4) = 1081073664; /*0x50b976*/
    *(unsigned int *)a1 = 0; /*0x50b979*/
    a1->u32_4 = 1081073664; /*0x50b97f*/
  }
  else
  {
    double v6; // st6
    v6 = *(double *)a1 * 240.0 / v5; /*0x50b997*/
    *(double *)a1 = v6; /*0x50b999*/
    if ( v6 > 255.0 ) /*0x50b9a6*/
    {
      *(unsigned int *)a1 = 0; /*0x50b9a8*/
      a1->u32_4 = 1081073664; /*0x50b9ae*/
    }
    double v7; // st6
    v7 = *(double *)a2 * 240.0 / v5; /*0x50b9b9*/
    *(double *)a2 = v7; /*0x50b9bb*/
    if ( v7 > 255.0 ) /*0x50b9c8*/
    {
      *(unsigned int *)a2 = 0; /*0x50b9ca*/
      *(unsigned int *)(a2 + 4) = 1081073664; /*0x50b9d0*/
    }
    double v8; // st7
    v8 = *(double *)a3 * 240.0 / v5; /*0x50b9db*/
    *(double *)a3 = v8; /*0x50b9dd*/
    if ( v8 > 255.0 ) /*0x50b9ea*/
    {
      *(unsigned int *)a3 = 0; /*0x50b9ec*/
      *(unsigned int *)(a3 + 4) = 1081073664; /*0x50b9f2*/
    }
  }
}
} // namespace gamemd

// 0x50C160
namespace gamemd {
double E4Recv_50C160::sub_50C160()
{

  return *(float *)this->attachedTag[5].defaultCoords; /*0x50c169*/

}
} // namespace gamemd

// 0x50DA40
namespace gamemd {
int E4Recv_50DA40::sub_50DA40(int a2)
{
  this->M21752 = a2; /*0x50da44*/
  return a2; /*0x50da4a*/
}
} // namespace gamemd

// 0x50E3A0
namespace gamemd {
unsigned int * sub_50E3A0(unsigned int * a1, int * a2, short * a3, int a4)
{

  int v6; // ebx
  v6 = a2[2]; /*0x50e3c0*/
  double v10; // [esp+10h] [ebp-18h]
  v10 = (double)(*a3 - 0x3FFF) * -0.00009587672516830327; /*0x50e3c9*/
  double v11; // [esp+18h] [ebp-10h]
  v11 = (double)a4; /*0x50e3db*/
  double v12; // [esp+20h] [ebp-8h]
  v12 = (double)a2[1]; /*0x50e3e2*/
  double v7; // st7
  v7 = Math::SinCos(v10); /*0x50e3e6*/
  int v13; // [esp+2Ch] [ebp+4h]
  v13 = Math::RoundToInt(v12 - v7 * v11); /*0x50e3f8*/
  double v8; // st7
  v8 = Math::ArcTan2(v10); /*0x50e402*/
  *a1 = Math::RoundToInt(v8 * v11 + (double)*a2); /*0x50e41b*/
  a1[1] = v13; /*0x50e421*/
  a1[2] = v6; /*0x50e425*/
  return a1; /*0x50e41f*/
}
} // namespace gamemd

// 0x50FF40
namespace gamemd {
void nullsub_145()
{
  ; /*0x50ff40*/
}
} // namespace gamemd
