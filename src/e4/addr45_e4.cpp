// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_4517D0_e4.hpp"
#include "e4/classes/E4Recv_4528A0_e4.hpp"
#include "e4/classes/E4Recv_457A10_e4.hpp"
#include "e4/classes/E4Recv_45DD20_e4.hpp"
#include "e4/classes/E4Recv_45DD50_e4.hpp"
#include "e4/classes/E4Recv_45E8B0_e4.hpp"
#include "e4/classes/Array_e4.hpp"
#include "e4/classes/Building_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Techno_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/RulesClass_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/SessionClass_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/E4Recv_4B69E0_e4.hpp"
#include "e4/classes/JumpjetLocomotion_e4.hpp"
#include "e4/classes/TimerClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/E4Recv_4964D0_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Radar_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Color_e4.hpp"
#include "e4/classes/E4Recv_431BC0_e4.hpp"
#include "e4/classes/XSurface_e4.hpp"
#include "e4/classes/ParticleSystemClass_e4.hpp"
#include "e4/classes/Matrix3x4_e4.hpp"
#include "e4/classes/MixFileClass_e4.hpp"
#include "e4/classes/_w14_nocarrier_e4.hpp"
#include "e4/minimal_carriers.hpp"  // G42.42q minimal carriers

// 0x451400
namespace gamemd {  // G42.18 ns repair
char UpdateBuildingActiveAnim(int a1, int edx0, void * a2)
{

  int v3; // eax
  int v4; // edi
  int v5; // esi
  int *Anims; // ebx
  int Type; // ecx
  int damageParticles; // ecx
  int v11; // edi
  int v12; // esi
  int *v13; // ebx
  int v14; // ecx
  int v15; // ecx
  int SuperWeaponToken; // eax
  int v17; // ebx
  unsigned int v18; // edx
  unsigned int v19; // ecx
  char v21; // al
  BOOL v23; // edx
  int v24; // eax
  AnimTypeClass *v25; // ecx
  char v26[64]; // [esp+10h] [ebp-40h] BYREF

  v3 = *(unsigned int *)(a1->Type + 160); /*0x451412*/
  if ( a1->health != v3 ) /*0x45141a*/
  {
    a1->health = v3; /*0x451420*/
    if ( a1->IsDamaged[0] ) /*0x451423*/
    {
      v4 = 0; /*0x45142d*/
      a1->IsDamaged[0] = 0; /*0x45142f*/
      v5 = 0; /*0x451436*/
      Anims = a1->Anims; /*0x451438*/
      do /*0x451475*/
      {
        if ( *Anims ) /*0x45143e*/
        {
          Type = a1->Type; /*0x451443*/
          if ( v5 + Type != -3916 ) /*0x451452*/
          {
            if ( *(unsigned char *)(v5 + Type + 3916) ) /*0x451454*/
              BuildingClass::PlayAnim(a1, a2, (AnimTypeClass *)(v5 + Type + 3916), v4, 0, 0, 0); /*0x451463*/
          }
        }
        v5 += 68; /*0x451468*/
        ++v4; /*0x45146b*/
        ++Anims; /*0x45146c*/
      }
      while ( v5 < 1428 ); /*0x451475*/
    }
    BuildingClass::GetHealthRatio(a1); /*0x451479*/
    _EDX = dword_8871E0; /*0x45147e*/
    __asm /*0x451484*/
    {
      fcomp qword ptr [edx+1700h]
      fnstsw ax
    }
    if ( (_AX & 0x4100) == 0 ) /*0x45148f*/
    {
      damageParticles = a1->damageParticles; /*0x451491*/
      if ( damageParticles ) /*0x451499*/
        (*(void (**)(int))(*(unsigned int *)damageParticles + 248))(damageParticles); /*0x45149d*/
    }
    v11 = 3; /*0x4514a3*/
    v12 = 204; /*0x4514a8*/
    v13 = &a1->Anims[3]; /*0x4514ad*/
    do /*0x4514ea*/
    {
      if ( !*v13 ) /*0x4514b3*/
      {
        v14 = a1->Type; /*0x4514b8*/
        if ( v12 + v14 != -3916 ) /*0x4514c7*/
        {
          if ( *(unsigned char *)(v12 + v14 + 3916) ) /*0x4514c9*/
            BuildingClass::PlayAnim(a1, (int)_EDX, (AnimTypeClass *)(v12 + v14 + 3916), v11, 0, 0, 0); /*0x4514d8*/
        }
      }
      v12 += 68; /*0x4514dd*/
      ++v11; /*0x4514e0*/
      ++v13; /*0x4514e1*/
    }
    while ( v12 <= 408 ); /*0x4514ea*/
    a1->needsRedraw[0] = 1; /*0x4514ec*/
  }
  v15 = a1->Type; /*0x4514f9*/
  if ( v15 == dword_8871E0->NukeDown ) /*0x451505*/
  {
    SuperWeaponToken = a1->SuperWeaponToken; /*0x45150b*/
    v17 = SuperWeaponToken + 1; /*0x451511*/
    if ( SuperWeaponToken + 1 > 2 ) /*0x451517*/
      v17 = 0; /*0x451519*/
    if ( v17 != SuperWeaponToken && !*(unsigned char *)(v15 + 5829) ) /*0x451523*/
    {
      BuildingClass::ClearAnims(a1, 9); /*0x451535*/
      if ( v17 != -1 ) /*0x45153d*/
      {
        strcpy(v26, (const char *)(a1->Type + 504)); /*0x45156b*/
        v18 = strlen(asc_818D7C) + 1; /*0x45158c*/
        qmemcpy(&v26[strlen(v26)], asc_818D7C, v18); /*0x451599*/
        v19 = strlen(v26); /*0x4515b3*/
        v26[v19] = v17 + 66; /*0x4515b6*/
        v26[v19 + 1] = 0; /*0x4515ba*/
        BuildingClass::PlayAnim(a1, v18, (AnimTypeClass *)v26, 9, 0, 0, 0); /*0x4515c6*/
        a1->SuperWeaponToken = v17; /*0x4515cb*/
      }
    }
    ++a1->UpgradeLevel[0]; /*0x4515db*/
    return 1; /*0x4515e2*/
  }
  else
  {
    v21 = a1->UpgradeLevel[0]; /*0x4515e9*/
    if ( v21 == *(unsigned int *)(v15 + 5344) ) /*0x4515fa*/
    {
      return 0; /*0x4515ff*/
    }
    else
    {
      a1->UpgradeLevel[0] = v21 + 1; /*0x45160a*/
      BuildingClass::GetHealthRatio(a1); /*0x451610*/
      _EAX = dword_8871E0; /*0x451615*/
      __asm /*0x45161a*/
      {
        fcomp qword ptr [eax+1700h]
        fnstsw ax
      }
      v23 = (BYTE1(_EAX) & 0x41) != 0; /*0x451625*/
      v24 = a1->UpgradeLevel[0] - 1; /*0x451637*/
      if ( v23 ) /*0x45163c*/
        v25 = (AnimTypeClass *)(a1->Type + 68 * v24 + 3932); /*0x451649*/
      else
        v25 = (AnimTypeClass *)(a1->Type + 68 * v24 + 3916); /*0x45165d*/
      if ( v25 && LOBYTE(v25->ptr_0) ) /*0x451668*/
        BuildingClass::PlayAnim(a1, v23, v25, v24, v23, 0, 0); /*0x451676*/
      return 1; /*0x45167e*/
    }
  }

}
}  // G42.18 ns repair
// 0x452000
namespace gamemd {
int sub_452000(unsigned int * a1)
{
  bool v10; // zf
  int result; // eax

  int v17; // [esp+18h] [ebp-8h]
  v17 = (*(int (**)(unsigned int *))(*a1 + 484))(a1); /*0x452015*/
  int v2; // eax
  v2 = (*(int (**)(unsigned int *))(*a1 + 444))(a1); /*0x452019*/
  int v3; // edi
  v3 = (*(int (**)(unsigned int *, unsigned int))(*a1 + 1124))(a1, *(int16_t *)(v2 + 266)); /*0x452031*/
  unsigned int *v4; // eax
  if ( (*(uint8_t (**)(unsigned int *))(*a1 + 352))(a1)
    || a1[165]
    && (a1 ? (v4 = (*(int (**)(unsigned int *))(*a1 + 44))(a1) == 6 ? a1 : 0) : (v4 = 0),
        *(unsigned int **)(a1[165] + 80) == v4) )
  {
    (*((unsigned short *)&(v3))) = Techno::StartInvulnerability(v3); /*0x452078*/
  }
  *((unsigned short *)a1 + 896) = v3; /*0x45207a*/
  unsigned int *v15; // [esp+10h] [ebp-10h]
  v15 = a1 + 343; /*0x452091*/
  int v16; // [esp+14h] [ebp-Ch]
  v16 = 21; /*0x452095*/
  do /*0x45211d*/
  {
    unsigned int *v5; // eax
    v5 = (unsigned int *)*v15; /*0x4520a1*/
    if ( *v15 ) /*0x4520a1*/
    {
      int v6; // ecx
      v6 = v5[50]; /*0x4520a7*/
      if ( v6 && *(unsigned char *)(v6 + 860) ) /*0x4520b1*/
      {
        v5[53] = v17; /*0x4520c3*/
        v5[63] = (uint16_t)v3; /*0x4520c9*/
      }
      int v7; // ebx
      v7 = *((char *)a1 + 1773); /*0x4520cf*/
      if ( v7 == 15 && (*(int (**)(unsigned int *, unsigned int, unsigned int))(*a1 + 104))(a1, 0, 0) == 5 ) /*0x4520e9*/
        (*((unsigned char *)&(v7))) = 16; /*0x4520eb*/
      unsigned int *v8 = a1 + 343; // ecx /*0x4520f0*/
      int v9 = 21; // ebp /*0x4520f2*/
      do /*0x452107*/
      {
        if ( *v8 ) /*0x4520f7*/
          *(unsigned char *)(*v8 + 376) = v7; /*0x4520fd*/
        ++v8; /*0x452103*/
        --v9; /*0x452106*/
      }
      while ( v9 ); /*0x452107*/
    }
    v10 = v16 == 1; /*0x452114*/
    ++v15; /*0x452115*/
    --v16; /*0x452119*/
  }
  while ( !v10 ); /*0x45211d*/
  int v11; // ebx
  v11 = *((char *)a1 + 1773); /*0x452123*/
  if ( v11 == 15 && (*(int (**)(unsigned int *, unsigned int, unsigned int))(*a1 + 104))(a1, 0, 0) == 5 ) /*0x45213d*/
    (*((unsigned char *)&(v11))) = 16; /*0x45213f*/
  int *v12; // ecx
  v12 = (int *)(a1 + 343); /*0x452144*/
  int v13 = 21; // esi /*0x452146*/
  do /*0x45215b*/
  {
    result = *v12; /*0x45214b*/
    if ( *v12 ) /*0x45214b*/
      result->radarFlashTimer_d = v11; /*0x452151*/
    ++v12; /*0x452157*/
    --v13; /*0x45215a*/
  }
  while ( v13 ); /*0x45215b*/
  return result; /*0x45215d*/
}
}
// 0x452D40
namespace gamemd {
int sub_452D40()
{

  int result; // eax
  result = stru_A8EB00.ptr_0[20]; /*0x452d40*/
  int i; // edi
  for ( i = 0; i < stru_A8EB00.ptr_0[20]; ++i ) /*0x452d4a*/
  {
    BuildingClass *v3; // esi
    v3 = *(BuildingClass **)(stru_A8EB00.ptr_0[17] + 4 * i); /*0x452d52*/
    if ( v3 && v3->Type->LaserFencePost && !dword_A8E7AC && v3->isAliveFlag && !v3->inLimbo ) /*0x452d7c*/
    {
      BuildingClass::DemolishBridge(v3); /*0x452d8a*/
      BuildingClass::DemolishBridge(v3); /*0x452d93*/
      BuildingClass::DemolishBridge(v3); /*0x452d9c*/
      BuildingClass::DemolishBridge(v3); /*0x452da5*/
      BuildingClass::RepairPlacement(v3, 1); /*0x452dae*/
    }
    result = stru_A8EB00.ptr_0[20]; /*0x452db3*/
  }
  return result; /*0x452dbe*/
}
}
// 0x456980
namespace gamemd {
void* DrawTechnoDeployCircle(IUnknown * aP0, IUnknown * aP1, int a1, int a4, int a5, int a6, float a7, char a8, char a9)
{

  int v10; // eax
  int v11; // eax
  int v12; // esi
  double *v13; // edx
  int v14; // eax
  int v17; // eax
  int v18; // ecx
  int v19; // edx
  int v20; // esi
  int v21; // eax
  int v26; // eax
  int v27; // esi
  int v28; // eax
  int v29; // edi
  double var90; // [esp+58h] [ebp-90h]
  double v32; // [esp+58h] [ebp-90h]
  unsigned int *v31; // [esp+5Ch] [ebp-8Ch]
  unsigned __int8 v36[4]; // [esp+70h] [ebp-78h] BYREF
  int v37; // [esp+74h] [ebp-74h]
  double v38; // [esp+78h] [ebp-70h]
  Color v39; // [esp+80h] [ebp-68h] BYREF
  int v40; // [esp+88h] [ebp-60h] BYREF
  int v41; // [esp+8Ch] [ebp-5Ch]
  unsigned int v47[4]; // [esp+B8h] [ebp-30h] BYREF
  double v48; // [esp+C8h] [ebp-20h] BYREF
  int v49[4]; // [esp+D8h] [ebp-10h] BYREF

  __asm { fld [ebp+arg_10] } /*0x45698d*/
  if ( a10 ) /*0x45699c*/
  {
    LOWORD(v10) = Math::RoundToInt(a3); /*0x45699e*/
    v37 = v10; /*0x4569a3*/
    __asm { fild [esp+88h+var_74] } /*0x4569a7*/
  }
  if ( !a9 ) /*0x4569b0*/
  {
    __asm { fadd ds:dbl_7E1738 } /*0x4569b9*/
    __asm { fstp [esp+90h+var_20] }
    Math::Sqrt(2.0); /*0x4569ca*/
    __asm { fdivr [esp+90h+var_20] } /*0x4569cf*/
    __asm { fmul ds:dbl_7E1728 }
  }
  LOWORD(v11) = Math::RoundToInt(a3); /*0x4569b2*/
  v12 = v11; /*0x4569e1*/
  v37 = v11; /*0x4569f2*/
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, &a4, &v40); /*0x4569f6*/
  v40 += DSurface_ViewBounds.field_0; /*0x456a11*/
  v41 += dword_886FA4; /*0x456a20*/
  v49[1] = v41 - v12 / 2; /*0x456a2f*/
  LODWORD(v38) = v12 / 2; /*0x456a48*/
  v49[0] = v40 - v12; /*0x456a4c*/
  v49[2] = 2 * v12; /*0x456a53*/
  v49[3] = v12; /*0x456a5a*/
  v13 = (double *)ClipRectIntersection(v47, v49, &DSurface_ViewBounds.field_0, 0, 0); /*0x456a66*/
  v48 = *v13; /*0x456a6a*/
  v14 = v13->u32_8; /*0x456a75*/
  if ( v14 > 0 && v13->q00C > 0 ) /*0x456a85*/
  {
    BYTE2(v39.Color_field_00) = BYTE2(a7); /*0x456a92*/
    v36[0] = 0; /*0x456a9c*/
    v36[1] = 0; /*0x456aa1*/
    v36[2] = 0; /*0x456aa6*/
    LOWORD(v39.Color_field_00) = a7; /*0x456aab*/
    if ( a2 ) /*0x456ab0*/
      Color::Lerp(&v39, 0x32u, v36); /*0x456abd*/
    (*(void (**)(AudioStream *, int, int, int, int, int, int, int, int, int))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 /*0x456b57*/
                                                                                       + 32))(
      g_DSurface_Hidden_2,
      v40,
      v41,
      v12,
      v12 / 2,
      DSurface_ViewBounds.field_0,
      dword_886FA4,
      dword_886FA8,
      dword_886FAC,
      (LOBYTE(v39.Color_field_00) >> g_BitShift_Green_0 << g_BitShift_Red)
    | (BYTE1(v39.Color_field_00) >> g_BitMask_Blue << g_BitMask_Green)
    | (BYTE2(v39.Color_field_00) >> g_BitMask_Red << g_BitShift_Blue));
    (*(void (**)(AudioStream *, int, int, int, int, int, int, int, int, int))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 /*0x456beb*/
                                                                                       + 32))(
      g_DSurface_Hidden_2,
      v40,
      v41,
      v12 - 1,
      v12 / 2 - 1,
      DSurface_ViewBounds.field_0,
      dword_886FA4,
      dword_886FA8,
      dword_886FAC,
      (LOBYTE(v39.Color_field_00) >> g_BitShift_Green_0 << g_BitShift_Red)
    | (BYTE1(v39.Color_field_00) >> g_BitMask_Blue << g_BitMask_Green)
    | (BYTE2(v39.Color_field_00) >> g_BitMask_Red << g_BitShift_Blue));
    LOBYTE(v14) = a1; /*0x456bee*/
    if ( a1 ) /*0x456bf4*/
    {
      __asm { fild [esp+88h+var_74] } /*0x456bfa*/
      v37 = 0; /*0x456bfe*/
      _EBX = dword_818CC8; /*0x456c06*/
      __asm /*0x456c0b*/
      {
        fstp [esp+88h+var_50]
        fild dword ptr [esp+88h+var_70]
        fstp [esp+88h+var_58]
      }
      do /*0x456c23*/
      {
        LODWORD(v38) = v37 + *(unsigned int *)&stru_A8E960.random[528]; /*0x456c23*/
        __asm /*0x456c27*/
        {
          fild dword ptr [esp+88h+var_70]
          fmul ds:dbl_7E44E8
          fld st
          fmul ds:dbl_7E44E0
        }
        LOWORD(_EAX) = Math::RoundToInt(a3); /*0x456c39*/
        LODWORD(v38) = _EAX; /*0x456c3e*/
        __asm /*0x456c42*/
        {
          fild dword ptr [esp+88h+var_70]
          fmul ds:dbl_7E3CC0
          fsubr st, st(1)
          fstp [esp+88h+var_70]
          fstp st
          fld [esp+88h+var_70]
          fsub ds:dbl_7E2820
          fabs
          fcomp ds:dbl_7E3818
          fnstsw ax
        }
        if ( (_EAX & 0x100) != 0 ) /*0x456c6b*/
        {
          __asm /*0x456c6d*/
          {
            fld [esp+88h+var_58]
            fchs
          }
        }
        else
        {
          __asm /*0x456c8a*/
          {
            fld [esp+88h+var_70]
            fsub ds:dbl_7E44D8
            fabs
            fcomp ds:dbl_7E3818
            fnstsw ax
          }
          if ( (_AX & 0x100) == 0 ) /*0x456ca1*/
          {
            Math::Sin(v38); /*0x456cb3*/
            __asm /*0x456cb8*/
            {
              fld [esp+90h+var_58]
              fmul [esp+90h+var_58]
              fstp [esp+90h+var_40]
              fld [esp+90h+var_50]
              fmul [esp+90h+var_50]
              fstp [esp+90h+var_48]
              fld st
              fmul st, st(1)
              fdiv [esp+90h+var_40]
              fld ds:dbl_7E1718
              fdiv [esp+90h+var_48]
              faddp st(1), st
              fdivr ds:dbl_7E1718
              fstp [esp+90h+var_90]; double
              fstp st
            }
            Math::Sqrt(var90); /*0x456cef*/
            __asm /*0x456cf4*/
            {
              fst [esp+90h+var_38]
              fld st
              fmul st, st(1)
              fdiv [esp+90h+var_48]
              fsubr ds:dbl_7E1718
              fmul [esp+90h+var_40]
              fstp [esp+90h+var_90]; double
              fstp st
            }
            Math::Sqrt(v32); /*0x456d0f*/
            __asm /*0x456d14*/
            {
              fld [esp+90h+var_70]
              fcomp ds:dbl_7E2820
            }
            __asm { fnstsw ax }
            if ( (_AX & 0x4100) != 0 ) /*0x456d26*/
              goto LABEL_19; /*0x456d26*/
            __asm /*0x456d28*/
            {
              fld [esp+88h+var_70]
              fcomp ds:dbl_7E44D8
              fnstsw ax
            }
            if ( (_AX & 0x100) == 0 ) /*0x456d37*/
            {
LABEL_19:
              __asm { fld [esp+88h+var_38] } /*0x456d41*/
            }
            else
            {
              __asm /*0x456d39*/
              {
                fld [esp+88h+var_38]
                fchs
              }
            }
            __asm /*0x456d45*/
            {
              fld [esp+88h+var_70]
              fcomp ds:dbl_7E44D0
              fnstsw ax
            }
            if ( (_AX & 0x100) != 0 ) /*0x456d54*/
            {
              __asm /*0x456d56*/
              {
                fxch st(1)
                fchs
                fxch st(1)
              }
            }
            LOWORD(v26) = Math::RoundToInt(a3); /*0x456d5c*/
            v27 = v26; /*0x456d61*/
            LOWORD(v28) = Math::RoundToInt(a3); /*0x456d63*/
            v19 = v40; /*0x456d68*/
            v18 = v41; /*0x456d6c*/
            v29 = v27 + v40; /*0x456d70*/
            v20 = v41 + v28; /*0x456d73*/
            v21 = v29; /*0x456d76*/
            goto LABEL_23; /*0x456d76*/
          }
          __asm { fld [esp+88h+var_58] } /*0x456ca3*/
        }
        LOWORD(v17) = Math::RoundToInt(a3); /*0x456c73*/
        v18 = v41; /*0x456c78*/
        v19 = v40; /*0x456c7c*/
        v20 = v41 + v17; /*0x456c80*/
        v21 = v40; /*0x456c83*/
LABEL_23:
        __asm { fld qword ptr [ebx] } /*0x456d84*/
        v47[0] = v21 - DSurface_ViewBounds.field_0; /*0x456d88*/
        HIDWORD(v48) = v18 - dword_886FA4; /*0x456d91*/
        LODWORD(v48) = v19 - DSurface_ViewBounds.field_0; /*0x456da3*/
        __asm { fstp dword ptr [esp+8Ch+var_90+4] } /*0x456da7*/
        v47[1] = v20 - dword_886FA4; /*0x456dc9*/
        LOBYTE(v14) = (*(int (**)(AudioStream *, CellStruct *, double *, unsigned int *, int *, int, int, unsigned int, int, int, int, unsigned int *))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 + 60))( /*0x456dd8*/
                        g_DSurface_Hidden_2,
                        &DSurface_ViewBounds,
                        &v48,
                        v47,
                        &a7,
                        -500,
                        -500,
                        0,
                        1,
                        1,
                        1,
                        v31);
        _EBX += 2; /*0x456ddf*/
        ++v37; /*0x456de9*/
      }
      while ( (int)_EBX < (int)aStructures ); /*0x456c23*/
    }
  }
  return v14; /*0x456df5*/

}
}
// 0x456FB0
namespace gamemd {
BuildingTypeClass * * sub_456FB0(unsigned int * a1, int a2, int a3)
{

  int v4; // edi
  unsigned int *v5; // eax

  v4 = a1->vt_slot_1124(a3); /*0x456fc7*/
  if ( a1->vt_slot_352() ) /*0x456fc9*/
    return Techno::StartInvulnerability(v4); /*0x456fc9*/
  if ( a1->armed
    && (a1 ? (v5 = a1->GetTypeIdentifier() == 6 ? a1 : 0) : (v5 = 0),
        *(unsigned int **)(a1[165] + 80) == v5) )
  {
    return Techno::StartInvulnerability(v4); /*0x457005*/
  }
  else
  {
    return v4; /*0x45700f*/
  }

}
}
// 0x459F40
namespace gamemd {
int ObjectType_IsBuildingType(int a1)
{
  if ( a1 )
    return (*(int (**)(int))(*(unsigned int *)a1 + 44))(a1) == 6 ? a1 : 0;
  else
    return 0; /*0x459f47*/
}
}
// 0x45C300
namespace gamemd {
int Map_InitCellOffsets()
{

  unk_89D368 = 0x10000;
  unk_89D36C = 0x1FFFF;
  unk_89D370 = 65537;
  unk_89D374 = 0xFFFF;
  unk_89D378 = 1;
  unk_89D380 = -1;
  unk_89D37C = -65536;
  unk_89D384 = -65535;
  unk_89D388 = 2147450879;
  memset( (void *)(&unk_89D38C), 0, 0x54u);
  unk_89D3E0 = 0x10000;
  unk_89D3E4 = 65537;
  unk_89D3E8 = 0x1FFFF;
  unk_89D3EC = 65538;
  unk_89D3F0 = 0xFFFF;
  unk_89D3F4 = 2;
  unk_89D3F8 = -65536;
  unk_89D3FC = -65535;
  unk_89D404 = -65534;
  unk_89D400 = -1;
  unk_89D408 = 2147450879;
  memset( (void *)(&unk_89D40C), 0, 0x4Cu);
  unk_89D458 = 0x20000;
  unk_89D45C = 131073;
  unk_89D460 = 196607;
  unk_89D464 = 0x1FFFF;
  unk_89D468 = 65537;
  unk_89D46C = 0xFFFF;
  unk_89D470 = 1;
  unk_89D478 = -1;
  unk_89D474 = -65536;
  unk_89D47C = -65535;
  unk_89D480 = 2147450879;
  memset( (void *)(&unk_89D484), 0, 0x4Cu);
  unk_89D4D0 = 0x20000;
  unk_89D4D4 = 131073;
  unk_89D4D8 = 196607;
  unk_89D4DC = 131074;
  unk_89D4E0 = 0x1FFFF;
  unk_89D4E4 = 65538;
  unk_89D4E8 = 0xFFFF;
  unk_89D4EC = 2;
  unk_89D4F0 = -65536;
  unk_89D4F4 = -65535;
  unk_89D4F8 = -1;
  unk_89D4FC = -65534;
  unk_89D500 = 2147450879;
  memset( (void *)(&unk_89D504), 0, 0x44u);
  unk_89D548 = 196608;
  unk_89D54C = 196609;
  unk_89D550 = 0x3FFFF;
  unk_89D554 = 196610;
  unk_89D558 = 196607;
  unk_89D55C = 131074;
  unk_89D560 = 0x1FFFF;
  unk_89D564 = 65538;
  unk_89D568 = 0xFFFF;
  unk_89D56C = 2;
  unk_89D570 = -65536;
  unk_89D574 = -65535;
  unk_89D57C = -65534;
  unk_89D578 = -1;
  unk_89D580 = 2147450879;
  memset( (void *)(&unk_89D584), 0, 0x3Cu);
  unk_89D5C0 = 0x20000;
  unk_89D5C4 = 131073;
  unk_89D5C8 = 131074;
  unk_89D5CC = 196607;
  unk_89D5D0 = 131075;
  unk_89D5D4 = 0x1FFFF;
  unk_89D5D8 = 65539;
  unk_89D5DC = 0xFFFF;
  unk_89D5E0 = 3;
  unk_89D5E4 = -65536;
  unk_89D5E8 = -65535;
  unk_89D5EC = -65534;
  unk_89D5F0 = -1;
  unk_89D5F4 = -65533;
  unk_89D5F8 = 2147450879;
  memset( (void *)(&unk_89D5FC), 0, 0x3Cu);
  unk_89D638 = 196608;
  unk_89D63C = 196609;
  unk_89D640 = 196610;
  unk_89D644 = 0x3FFFF;
  unk_89D648 = 196611;
  unk_89D64C = 196607;
  unk_89D650 = 131075;
  unk_89D654 = 0x1FFFF;
  unk_89D658 = 65539;
  unk_89D65C = 0xFFFF;
  unk_89D660 = 3;
  unk_89D664 = -65536;
  unk_89D668 = -65535;
  unk_89D66C = -65534;
  unk_89D670 = -1;
  unk_89D674 = -65533;
  unk_89D678 = 2147450879;
  memset( (void *)(&unk_89D67C), 0, 0x34u);
  unk_89D6B0 = -1;
  unk_89D6B4 = -65536;
  unk_89D6B8 = -65535;
  unk_89D6BC = -65534;
  unk_89D6C0 = -65533;
  unk_89D6C4 = 0xFFFF;
  unk_89D6C8 = 3;
  unk_89D6CC = 0x1FFFF;
  unk_89D6D0 = 65539;
  unk_89D6D4 = 196607;
  unk_89D6D8 = 131075;
  unk_89D6DC = 0x3FFFF;
  unk_89D6E0 = 196611;
  unk_89D6E8 = 262147;
  unk_89D6E4 = 327679;
  unk_89D6EC = 393215;
  unk_89D6F0 = 327680;
  unk_89D6F4 = 327681;
  unk_89D6F8 = 327682;
  unk_89D6FC = 327683;
  unk_89D700 = 2147450879;
  memset( (void *)(&unk_89D704), 0, 0x24u);
  unk_89D728 = 0x20000;
  unk_89D72C = 131073;
  unk_89D730 = 131074;
  unk_89D734 = 131075;
  unk_89D738 = 196607;
  unk_89D73C = 131076;
  unk_89D740 = 0x1FFFF;
  unk_89D744 = 65540;
  unk_89D748 = 0xFFFF;
  unk_89D74C = 4;
  unk_89D750 = -65536;
  unk_89D754 = -65535;
  unk_89D75C = -65533;
  unk_89D758 = -65534;
  unk_89D760 = -1;
  unk_89D764 = -65532;
  unk_89D768 = 2147450879;
  memset( (void *)(&unk_89D76C), 0, 0x34u);
  unk_89D7A0 = 0;
  unk_89D7A4 = 2147450879;
  memset( (void *)(&unk_89D7A8), 0, 0x70u);
  unk_89D818 = -1;
  unk_89D81C = -65536;
  unk_89D820 = -65535;
  unk_89D824 = 0xFFFF;
  unk_89D828 = 1;
  unk_89D82C = 0x1FFFF;
  unk_89D830 = 65537;
  unk_89D834 = 196607;
  unk_89D838 = 131073;
  unk_89D83C = 0x3FFFF;
  unk_89D844 = 196609;
  unk_89D840 = 196608;
  unk_89D848 = 2147450879;
  memset( (void *)(&unk_89D84C), 0, 0x44u);
  unk_89D890 = -1;
  unk_89D894 = -65536;
  unk_89D898 = -65535;
  unk_89D89C = -65534;
  unk_89D8A0 = -65533;
  unk_89D8A4 = 0xFFFF;
  unk_89D8A8 = 3;
  unk_89D8AC = 0x1FFFF;
  unk_89D8B0 = 0x10000;
  unk_89D8B4 = 65537;
  unk_89D8B8 = 65538;
  unk_89D8BC = 65539;
  unk_89D8C0 = 2147450879;
  memset( (void *)(&unk_89D8C4), 0, 0x44u);
  unk_89D908 = 196608;
  unk_89D90C = 196609;
  unk_89D910 = 196610;
  unk_89D914 = 0x3FFFF;
  unk_89D918 = 196611;
  unk_89D91C = 196607;
  unk_89D920 = 131075;
  unk_89D924 = 0x1FFFF;
  unk_89D928 = 65539;
  unk_89D92C = 0xFFFF;
  unk_89D930 = 3;
  unk_89D934 = -65536;
  unk_89D938 = -65535;
  unk_89D93C = -65534;
  unk_89D944 = -65533;
  unk_89D940 = -1;
  unk_89D948 = 2147450879;
  memset( (void *)(&unk_89D94C), 0, 0x34u);
  unk_89D980 = -1;
  unk_89D984 = -65536;
  unk_89D988 = -65535;
  unk_89D98C = 0xFFFF;
  unk_89D990 = 1;
  unk_89D994 = 0x1FFFF;
  unk_89D998 = 65537;
  unk_89D9A0 = 131073;
  unk_89D99C = 196607;
  unk_89D9A4 = 0x3FFFF;
  unk_89D9A8 = 196609;
  unk_89D9AC = 327679;
  unk_89D9B4 = 262145;
  unk_89D9B0 = 0x40000;
  unk_89D9B8 = 2147450879;
  memset( (void *)(&unk_89D9BC), 0, 0x3Cu);
  unk_89D9F8 = -1;
  unk_89D9FC = -65536;
  unk_89DA00 = -65535;
  unk_89DA04 = 0xFFFF;
  unk_89DA08 = 1;
  unk_89DA0C = 0x1FFFF;
  unk_89DA10 = 65537;
  unk_89DA18 = 131073;
  unk_89DA14 = 196607;
  unk_89DA1C = 0x3FFFF;
  unk_89DA20 = 196609;
  unk_89DA28 = 262145;
  unk_89DA24 = 327679;
  unk_89DA2C = 393215;
  unk_89DA30 = 327680;
  unk_89DA34 = 327681;
  unk_89DA38 = 2147450879;
  memset( (void *)(&unk_89DA3C), 0, 0x34u);
  unk_89DA70 = -1;
  unk_89DA74 = -65536;
  unk_89DA78 = -65535;
  unk_89DA7C = -65534;
  unk_89DA80 = 0xFFFF;
  unk_89DA84 = 2;
  unk_89DA88 = 0x1FFFF;
  unk_89DA8C = 65538;
  unk_89DA90 = 196607;
  unk_89DA94 = 131074;
  unk_89DA98 = 0x3FFFF;
  unk_89DA9C = 196610;
  unk_89DAA0 = 393215;
  unk_89DAA4 = 327682;
  unk_89DAA8 = 458751;
  unk_89DAAC = 393216;
  unk_89DAB4 = 393218;
  unk_89DAB0 = 393217;
  unk_89DAB8 = 2147450879;
  memset( (void *)(&unk_89DABC), 0, 0x2Cu);
  unk_89DAE8 = -1;
  unk_89DAEC = -65536;
  unk_89DAF0 = -65535;
  unk_89DAF4 = -65534;
  unk_89DAF8 = 0xFFFF;
  unk_89DAFC = 2;
  unk_89DB00 = 0x1FFFF;
  unk_89DB04 = 65538;
  unk_89DB08 = 196607;
  unk_89DB0C = 131074;
  unk_89DB10 = 0x3FFFF;
  unk_89DB14 = 196610;
  unk_89DB18 = 393215;
  unk_89DB1C = 327680;
  unk_89DB24 = 327682;
  unk_89DB20 = 327681;
  unk_89DB28 = 2147450879;
  memset( (void *)(&unk_89DB2C), 0, 0x34u);
  unk_89DB60 = -1;
  unk_89DB64 = -65536;
  unk_89DB68 = -65535;
  int v1 = -65532;
  unk_89DB70 = -65533;
  unk_89DB6C = -65534;
  unk_89DB74 = -65532;
  unk_89DB78 = *(unsigned int *)((CellStruct *)(&v1))->Set(5, -1);
  unk_89DB7C = *(unsigned int *)((CellStruct *)(&v1))->Set(-1, 0);
  unk_89DB80 = *(unsigned int *)((CellStruct *)(&v1))->Set(5, 0);
  unk_89DB84 = *(unsigned int *)((CellStruct *)(&v1))->Set(-1, 1);
  unk_89DB88 = *(unsigned int *)((CellStruct *)(&v1))->Set(5, 1);
  unk_89DB8C = *(unsigned int *)((CellStruct *)(&v1))->Set(-1, 2);
  unk_89DB90 = *(unsigned int *)((CellStruct *)(&v1))->Set(5, 2);
  unk_89DB94 = *(unsigned int *)((CellStruct *)(&v1))->Set(-1, 3);
  unk_89DB98 = *(unsigned int *)((CellStruct *)(&v1))->Set(0, 3);
  unk_89DB9C = *(unsigned int *)((CellStruct *)(&v1))->Set(1, 3);
  unk_89DBA0 = *(unsigned int *)((CellStruct *)(&v1))->Set(2, 3);
  unk_89DBA4 = *(unsigned int *)((CellStruct *)(&v1))->Set(3, 3);
  unk_89DBA8 = *(unsigned int *)((CellStruct *)(&v1))->Set(4, 3);
  unk_89DBAC = *(unsigned int *)((CellStruct *)(&v1))->Set(5, 3);
  unk_89DBB0 = *(unsigned int *)((CellStruct *)(&v1))->Set(0x7FFF, 0x7FFF);
  memset( (void *)(&stru_89DBB4), 0, 0x24u);
  Array::ForEach(((Array*)(&stru_89DBB4)), 4, 9, (int (*)(int))__0Iostream_init_QAE_XZ_2);
  unk_89DBD8 = *(unsigned int *)((CellStruct *)(&v1))->Set(-1, -1);
  unk_89DBDC = *(unsigned int *)((CellStruct *)(&v1))->Set(0, -1);
  unk_89DBE0 = *(unsigned int *)((CellStruct *)(&v1))->Set(1, -1);
  unk_89DBE4 = *(unsigned int *)((CellStruct *)(&v1))->Set(2, -1);
  unk_89DBE8 = *(unsigned int *)((CellStruct *)(&v1))->Set(3, -1);
  unk_89DBEC = *(unsigned int *)((CellStruct *)(&v1))->Set(4, -1);
  unk_89DBF0 = *(unsigned int *)((CellStruct *)(&v1))->Set(-1, 4);
  unk_89DBF4 = *(unsigned int *)((CellStruct *)(&v1))->Set(0, 4);
  unk_89DBF8 = *(unsigned int *)((CellStruct *)(&v1))->Set(1, 4);
  unk_89DBFC = *(unsigned int *)((CellStruct *)(&v1))->Set(2, 4);
  unk_89DC00 = *(unsigned int *)((CellStruct *)(&v1))->Set(3, 4);
  unk_89DC04 = *(unsigned int *)((CellStruct *)(&v1))->Set(4, 4);
  unk_89DC08 = *(unsigned int *)((CellStruct *)(&v1))->Set(-1, 0);
  unk_89DC0C = *(unsigned int *)((CellStruct *)(&v1))->Set(-1, 1);
  unk_89DC10 = *(unsigned int *)((CellStruct *)(&v1))->Set(-1, 2);
  unk_89DC14 = *(unsigned int *)((CellStruct *)(&v1))->Set(-1, 3);
  unk_89DC18 = *(unsigned int *)((CellStruct *)(&v1))->Set(-1, 4);
  unk_89DC1C = *(unsigned int *)((CellStruct *)(&v1))->Set(4, 0);
  unk_89DC20 = *(unsigned int *)((CellStruct *)(&v1))->Set(4, 1);
  unk_89DC24 = *(unsigned int *)((CellStruct *)(&v1))->Set(4, 2);
  unk_89DC28 = *(unsigned int *)((CellStruct *)(&v1))->Set(4, 3);
  unk_89DC2C = *(unsigned int *)((CellStruct *)(&v1))->Set(4, 4);
  unk_89DC30 = *(unsigned int *)((CellStruct *)(&v1))->Set(0x7FFF, 0x7FFF);
  memset( (void *)(&stru_89DC34), 0, 0x1Cu);
  Array::ForEach(((Array*)(&stru_89DC34)), 4, 7, (int (*)(int))__0Iostream_init_QAE_XZ_2);
  DataGlobal_0089DC50 = *(unsigned int *)((CellStruct *)(&v1))->Set(0, 4);
  DataGlobal_0089DC54 = *(unsigned int *)((CellStruct *)(&v1))->Set(1, 4);
  unk_89DC58 = *(unsigned int *)((CellStruct *)(&v1))->Set(2, 4);
  unk_89DC5C = *(unsigned int *)((CellStruct *)(&v1))->Set(-1, 4);
  unk_89DC60 = *(unsigned int *)((CellStruct *)(&v1))->Set(3, 4);
  unk_89DC64 = *(unsigned int *)((CellStruct *)(&v1))->Set(-1, 2);
  unk_89DC68 = *(unsigned int *)((CellStruct *)(&v1))->Set(3, 2);
  unk_89DC6C = *(unsigned int *)((CellStruct *)(&v1))->Set(-1, 1);
  unk_89DC70 = *(unsigned int *)((CellStruct *)(&v1))->Set(3, 1);
  unk_89DC74 = *(unsigned int *)((CellStruct *)(&v1))->Set(-1, 0);
  unk_89DC78 = *(unsigned int *)((CellStruct *)(&v1))->Set(3, 0);
  unk_89DC7C = *(unsigned int *)((CellStruct *)(&v1))->Set(0, -1);
  unk_89DC80 = *(unsigned int *)((CellStruct *)(&v1))->Set(1, -1);
  unk_89DC84 = *(unsigned int *)((CellStruct *)(&v1))->Set(2, -1);
  unk_89DC88 = *(unsigned int *)((CellStruct *)(&v1))->Set(-1, -1);
  unk_89DC8C = *(unsigned int *)((CellStruct *)(&v1))->Set(3, -1);
  unk_89DC90 = *(unsigned int *)((CellStruct *)(&v1))->Set(0x7FFF, 0x7FFF);
  memset( (void *)(&stru_89DC94), 0, 0x34u);
  Array::ForEach(((Array*)(&stru_89DC94)), 4, 13, (int (*)(int))__0Iostream_init_QAE_XZ_2);
  unk_89DCC8 = *(unsigned int *)((CellStruct *)(&v1))->Set(2, -1);
  unk_89DCCC = *(unsigned int *)((CellStruct *)(&v1))->Set(0x7FFF, 0x7FFF);
  memset( (void *)(&stru_89DCD0), 0, 0x70u);
  Array::ForEach(((Array*)(&stru_89DCD0)), 4, 28, (int (*)(int))__0Iostream_init_QAE_XZ_2);
  unk_89DD40 = *(unsigned int *)((CellStruct *)(&v1))->Set(0x7FFF, 0x7FFF);
  memset( (void *)(&stru_89DD44), 0, 0x74u);
  return Array::ForEach(((Array*)(&stru_89DD44)), 4, 29, (int (*)(int))__0Iostream_init_QAE_XZ_2);
}
} // namespace gamemd

// 0x45DD20
namespace gamemd {
void * E4Recv_45DD20::sub_45DD20()
{

  int v1; // edx
  ObjectClass **v2; // eax

  v1 = 0; /*0x45dd20*/
  v2 = (ObjectClass **)&stru_81926C.Name[8]; /*0x45dd22*/
  while ( *v2 != this ) /*0x45dd29*/
  {
    v2 += 2; /*0x45dd2b*/
    ++v1; /*0x45dd2e*/
    if ( (int)v2 >= (int)&stru_81926C.voiceIndex ) /*0x45dd34*/
      return (char *)stru_81926C.Name[7]; /*0x45dd3b*/
  }
  return (char *)stru_81926C.Name[2 * v1 + 7]; /*0x45dd3b*/

}
}
// 0x45DD50
namespace gamemd {
int E4Recv_45DD50::sub_45DD50()
{

  int v2 = 0; // edi /*0x45dd55*/
  char **v3; // esi
  v3 = (char **)&stru_81926C.Name[7]; /*0x45dd57*/
  while ( _strcmpi(*v3, (char *)this) ) /*0x45dd6a*/
  {
    v3 += 2; /*0x45dd6c*/
    ++v2; /*0x45dd6f*/
    if ( (int)v3 >= (int)stru_81926C.Type ) /*0x45dd76*/
      return 0; /*0x45dd7d*/
  }
  return stru_81926C.Name[2 * v2 + 8]; /*0x45dd78*/
}
}
// 0x4503E0
namespace gamemd {
void nullsub_101()
{
  ; /*0x4503e0*/
}
} // namespace gamemd

// 0x4517D0
namespace gamemd {
int E4Recv_4517D0::sub_4517D0()
{

  int *v2; // eax
  unsigned int v16[3]; // [esp+20h] [ebp-18h] BYREF
  v2 = (int *)(*(int (**)(TechnoClass *, unsigned int *))(this->ptr_0 + 172))(this, v16); /*0x4517e2*/
  int v3 = 0; // edi /*0x4517ea*/
  int v13; // [esp+14h] [ebp-24h]
  v13 = *v2; /*0x4517ec*/
  int v14; // [esp+18h] [ebp-20h]
  v14 = v2[1]; /*0x4517f3*/
  int v4; // edx
  v4 = v2[2]; /*0x4517f7*/
  int result; // eax
  result = (int)&this->u32_55C; /*0x4517fa*/
  v4 = v4; /*0x451800*/
  int **v12; // [esp+10h] [ebp-28h]
  v12 = &this->u32_55C; /*0x451804*/
  do /*0x451879*/
  {
    int *v6 = *v12; // esi /*0x45180c*/
    if ( *v12 ) /*0x45180c*/
    {
      unsigned int *v7; // eax
      unsigned int v17[3]; // [esp+2Ch] [ebp-Ch] BYREF
      v7 = Matrix3x4::TransformCell( /*0x45182b*/
             (float *)g_TacticalClass_Instance,
             v17,
             (int *)(this->M1312 + v3 + 3964));
      int v8 = v13 + *v7; // ecx /*0x45183a*/
      int v9 = v7->vtable2; // edx /*0x45183c*/
      int v10 = v7->vtable3; // eax /*0x45183f*/
      v16[1] = v14 + v9; /*0x45184a*/
      int v11 = *v6; // edx /*0x45184e*/
      v16[2] = v4 + v10; /*0x451850*/
      v16[0] = v8; /*0x451858*/
      result = (*(int (**)(int *, unsigned int *))(v11 + 436))(v6, v16); /*0x45185f*/
    }
    v3 += 68; /*0x451869*/
    ++v12; /*0x451875*/
  }
  while ( v3 < 1428 ); /*0x451879*/
  return result; /*0x45187b*/
}
} // namespace gamemd

// 0x451EE0
namespace gamemd {
void globalHelper_051EE0(int a1, int a2, IUnknown * aP4)
{
  IUnknown * v4;
  int v5; // ebp
  int v6; // esi
  unsigned int *v7; // ebx
  unsigned char *v8; // eax

  v4 = (IUnknown *)((int)(aP4));
  if ( *(unsigned char *)(a1 + 1766) != (unsigned char)aP4 ) /*0x451eed*/
  {
    v5 = (unsigned char)(0);
    *(unsigned char *)(a1 + 1766) = (unsigned char)(aP4); /*0x451ef4*/
    v6 = 0; /*0x451efa*/
    v7 = (unsigned int *)(a1 + 1372); /*0x451efc*/
    do /*0x451f4f*/
    {
      if ( *v7 ) /*0x451f02*/
      {
        if ( (unsigned char)v4 ) /*0x451f09*/
        {
          v8 = (unsigned char *)(*(unsigned int *)(a1 + 1312) + v6 + 3932); /*0x451f11*/
        }
        else
        {
          a2 = *(unsigned int *)(a1 + 1312); /*0x451f1a*/
          v8 = (unsigned char *)(a2 + v6 + 3916); /*0x451f20*/
        }
        if ( v8 ) /*0x451f29*/
        {
          if ( *v8 ) /*0x451f2b*/
          {
            BuildingClass::PlayAnim((gamemd::BuildingClass *)((unsigned int *)a1), a2, v8, v5, v4, 0, 0); /*0x451f39*/
            v4 = (IUnknown *)((int)(aP4)); /*0x451f3e*/
          }
        }
      }
      v6 += 68; /*0x451f42*/
      ++v5; /*0x451f45*/
      ++v7; /*0x451f46*/
    }
    while ( v6 < 1428 ); /*0x451f4f*/
  }
}
} // namespace gamemd

// 0x4528A0
namespace gamemd {
bool E4Recv_4528A0::sub_4528A0(int a2)
{

  double v2; // st7
  int *v4; // eax
  int v5; // edi
  int v6; // ebx
  int v7; // ebp
  unsigned int *v8; // eax
  int v9; // edi
  int v10; // edx
  unsigned __int16 *v11; // eax
  int v13; // [esp+20h] [ebp-Ch] BYREF
  int v14; // [esp+24h] [ebp-8h]
  int v15; // [esp+28h] [ebp-4h]

  v4 = (int *)(*(int (**)(TechnoClass *, int *))(this->ptr_0 + 72))(this, &v13); /*0x4528b2*/
  v5 = *v4; /*0x4528b5*/
  v6 = v4[1]; /*0x4528bb*/
  v7 = v4[2]; /*0x4528c0*/
  v8 = (unsigned int *)(*(int (**)(int, int *))(*(unsigned int *)a2 + 72))(a2, &v13); /*0x4528c8*/
  v9 = v5 - *v8; /*0x4528d2*/
  v10 = v8[2]; /*0x4528d9*/
  v14 = v6 - v8[1]; /*0x4528dc*/
  v13 = v9; /*0x4528e6*/
  v15 = v7 - v10; /*0x4528ea*/
  Math::Sqrt((double)v9 * (double)v9 + (double)(v7 - v10) * (double)(v7 - v10) + (double)v14 * (double)v14); /*0x45290f*/
  LOWORD(v11) = Math::RoundToInt(v2); /*0x452917*/
  return (int)v11 <= *(unsigned int *)(this->M1312 + 5900) << 8; /*0x452922*/

}
} // namespace gamemd

// 0x454CE0
namespace gamemd {
void ObjectClass::nullsub_5()
{
  ; /*0x454ce0*/
}
} // namespace gamemd

// 0x455DD0
namespace gamemd {
unsigned int * sub_455DD0(int a1, unsigned int * a2)
{

  unsigned int *v2; // esi
  unsigned int *v4; // edi
  int v5; // eax
  int v6; // eax
  unsigned int *v7; // esi
  int v8; // eax
  double v10; // [esp+8h] [ebp-40h]
  int v11; // [esp+24h] [ebp-24h]
  int v13; // [esp+2Ch] [ebp-1Ch]
  unsigned int *v14; // [esp+30h] [ebp-18h]
  int v16; // [esp+38h] [ebp-10h]
  int v17; // [esp+3Ch] [ebp-Ch]
  int v18; // [esp+40h] [ebp-8h]
  int v19; // [esp+44h] [ebp-4h]

  v2 = a1; /*0x455ddc*/
  v4 = a2; /*0x455de7*/
  v14 = 0; /*0x455df5*/
  v11 = 0x7FFFFFFF; /*0x455df9*/
  if ( (byte_89C828 & 1) == 0 ) /*0x455e01*/
  {
    __asm /*0x455e03*/
    {
      fld dbl_89C820
      fmul ds:dbl_7E44C8
    }
    byte_89C828 |= 1u; /*0x455e11*/
    LOWORD(v5) = Math::RoundToInt(a3); /*0x455e17*/
    dword_89C7F0 = v5; /*0x455e1c*/
  }
  v6 = 0; /*0x455e27*/
  v16 = v2[36]; /*0x455e2b*/
  v13 = 0; /*0x455e2f*/
  if ( v16 <= 0 ) /*0x455e33*/
    return 0; /*0x455f00*/
  while ( 1 ) /*0x455e47*/
  {
    v7 = *(unsigned int **)(v2[33] + 4 * v6); /*0x455e47*/
    if ( (*(int (**)(unsigned int *, int, unsigned int *))(*v4 + 632))(v4, 15, v7) ) /*0x455e4f*/
    {
      v17 = v7[39] - v4[39]; /*0x455e7f*/
      v18 = v7[40] - v4[40]; /*0x455e88*/
      __asm { fild [esp+40h+var_8] } /*0x455e8c*/
      v19 = v7[41] - v4[41]; /*0x455e92*/
      __asm /*0x455e96*/
      {
        fild [esp+40h+var_4]
        fild [esp+40h+var_C]
        fld st
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp st(1), st
        fld st(3)
        fmul st, st(4)
        faddp st(1), st
        fstp [esp+40h+var_40]; double
        fstp st
        fstp st
        fstp st
      }
      Math::Sqrt(v10); /*0x455eb7*/
      LOWORD(v8) = Math::RoundToInt(a3); /*0x455ebf*/
      if ( v8 < v11 && v8 < dword_89C7F0 ) /*0x455ed0*/
      {
        v14 = v7; /*0x455ed2*/
        v11 = v8; /*0x455ed6*/
      }
      v4 = a2; /*0x455eda*/
    }
    v6 = ++v13; /*0x455ee6*/
    if ( v13 >= v16 ) /*0x455eed*/
      break; /*0x455eed*/
    v2 = a1; /*0x455e3b*/
  }
  return v14; /*0x455ef7*/

}
} // namespace gamemd

// 0x456970
namespace gamemd {
void nullsub_103()
{
  ; /*0x456970*/
}
} // namespace gamemd

// 0x457A10
namespace gamemd {
char E4Recv_457A10::sub_457A10()
{
  int v5; // [esp+Ch] [ebp-8h]
  int16_t v5[2]; // [esp+10h] [ebp-4h] BYREF

  int v2; // edi
  v2 = *(unsigned int *)(*(int (**)(TechnoClass *, int16_t *))(this->ptr_0 + 440))(this, v5); /*0x457a2d*/
  unsigned short *i; // esi
  for ( i = (unsigned short *)(*(int (**)(unsigned int, unsigned int))(*this->u32_524) + 144))( /*0x457a42*/
                       this->gattlingValue,
                       0); *i != 0x7FFF || i[1] != 0x7FFF; i += 2 )
  {
    (*((unsigned short *)&(v5))) = v2 + *i; /*0x457a59*/
    (*(((unsigned short *)&(v5)) + 1)) = (*(((unsigned short *)&(v2)) + 1)) + i[1]; /*0x457a66*/
    *(unsigned int *)v5 = v5; /*0x457a6f*/
    if ( (*((unsigned int *)((CellCoord *)((CellCoord *)&dword_87F7E8))->To_CellObj(v5) + 80) & 0x400000) == 0 ) /*0x457a87*/
      return 0; /*0x457a96*/
  }
  return 1; /*0x457a8e*/
}
} // namespace gamemd

// 0x45AFA0
namespace gamemd {
void sub_45AFA0()
{

  long double v0; // st7
  v0 = pow(256.0, 2.0); /*0x45afac*/
  dbl_89C8B8 = Math::Sqrt(v0 + v0); /*0x45afbe*/
}
} // namespace gamemd

// 0x45AFD0
namespace gamemd {
void sub_45AFD0()
{
  dbl_89D360 = dbl_89C8B8 / 60.0; /*0x45afdc*/
}
} // namespace gamemd

// 0x45AFF0
namespace gamemd {
void sub_45AFF0()
{
  dbl_89C8F8 = 1.0 / dbl_89D360; /*0x45affc*/
}
} // namespace gamemd

// 0x45B010
namespace gamemd {
void sub_45B010()
{
  dbl_89C8F0 = 0.0174532925199433 * 45.0; /*0x45b01c*/
}
} // namespace gamemd

// 0x45B030
namespace gamemd {
void sub_45B030()
{
  dbl_89C8C0 = 0.0174532925199433 * 60.0; /*0x45b03c*/
}
} // namespace gamemd

// 0x45B050
namespace gamemd {
void sub_45B050()
{
  dbl_89C898 = 0.0174532925199433 * 90.0; /*0x45b05c*/
}
} // namespace gamemd

// 0x45B070
namespace gamemd {
long long sub_45B070()
{

  double v0; // st7
  v0 = Math::Sin(dbl_89C898 - dbl_89C8C0); /*0x45b082*/
  int64_t result; // rax
  result = Math::RoundToInt(v0 * dbl_89C8B8 * 0.5); /*0x45b096*/
  dword_89DDB8 = result; /*0x45b09b*/
  return result; /*0x45b0a0*/
}
} // namespace gamemd

// 0x45B0B0
namespace gamemd {
void sub_45B0B0()
{
  dbl_89C8C8 = Math::ArcTan((double)dword_89DDB8 * 0.00390625); /*0x45b0c7*/
}
} // namespace gamemd

// 0x45B0E0
namespace gamemd {
void sub_45B0E0()
{
  dbl_89C8E0 = Math::ArcTan((double)(2 * dword_89DDB8) / dbl_89C8B8); /*0x45b102*/
}
} // namespace gamemd

// 0x45B110
namespace gamemd {
long long sub_45B110()
{

  int64_t result; // rax
  result = Math::RoundToInt((double)(4 * dword_89DDB8) + 0.5); /*0x45b12b*/
  dword_89D35C = result; /*0x45b130*/
  return result; /*0x45b136*/
}
} // namespace gamemd

// 0x45B140
namespace gamemd {
int sub_45B140()
{
  word_89C8B0 = 0; /*0x45b142*/
  word_89C8B2 = 0; /*0x45b148*/
  return 0; /*0x45b14e*/
}
} // namespace gamemd

// 0x45B150
namespace gamemd {
int sub_45B150()
{
  dword_89C8D0 = 0; /*0x45b152*/
  dword_89C8D4 = 0; /*0x45b157*/
  dword_89C8D8 = 0; /*0x45b15c*/
  return 0; /*0x45b161*/
}
} // namespace gamemd

// 0x45B170
namespace gamemd {
int sub_45B170()
{
  dword_89D358 = 0; /*0x45b175*/
  dword_89D350 = 128; /*0x45b17f*/
  dword_89D354 = 128; /*0x45b184*/
  return 128; /*0x45b189*/
}
} // namespace gamemd

// 0x45B190
namespace gamemd {
int sub_45B190()
{
  dword_89C8A0 = 0; /*0x45b192*/
  dword_89C8A4 = 0; /*0x45b197*/
  dword_89C8A8 = 0; /*0x45b19c*/
  dword_89C8AC = 0; /*0x45b1a1*/
  return 0; /*0x45b1a6*/
}
} // namespace gamemd

// 0x45B1B0
namespace gamemd {
int j_MapData_InitHeights()
{
  return MapData::InitHeights();
}
} // namespace gamemd

// 0x45C2F0
namespace gamemd {
int j_Map_InitCellOffsets()
{
  return InitCellOffsetsMap();
}
} // namespace gamemd

// 0x45E750
namespace gamemd {
void nullsub_6()
{
  ; /*0x45e750*/
}
} // namespace gamemd

// 0x45E8B0
namespace gamemd {
int E4Recv_45E8B0::sub_45E8B0(int a2, int a3, int a4, int a5)
{

  int result; // eax
  char *v6; // edx

  result = 3 * a2 + 963; /*0x45e8bc*/
  v6 = (char *)this + 12 * a2; /*0x45e8c3*/
  *((unsigned int *)v6 + 961) = a3; /*0x45e8c6*/
  *((unsigned int *)v6 + 962) = a4; /*0x45e8d0*/
  this->u32_F08 + result) = a5; /*0x45e8da*/
  return result; /*0x45e8dd*/

}
} // namespace gamemd

// 0x45E8F0
namespace gamemd {
char sub_45E8F0()
{

  int SubFile; // eax
  (*((unsigned char *)&(SubFile))) = (unsigned char)dword_89DDBC; /*0x45e8f0*/
  if ( !dword_89DDBC ) /*0x45e8fb*/
  {
    dword_89DDBC = (unsigned int)((void *)SearchMIXFile((char *)(aBuildngzSha), 0));
    unsigned int v6[4]; // [esp+4h] [ebp-10h] BYREF
    Building::GetFoundationSize(v6, 0); /*0x45e917*/
    SubFile = MixFileClass::GetSubFile((gamemd::MixFileClass *)((char **)dword_89DDBC), 0); /*0x45e924*/
    int v1; // esi
    v1 = *((int16_t *)dword_89DDBC + 1); /*0x45e92f*/
    if ( *((int16_t *)dword_89DDBC + 2) > 0 ) /*0x45e939*/
    {
      int v2 = SubFile; // edx /*0x45e93c*/
      int v3; // edi
      v3 = *((int16_t *)dword_89DDBC + 2); /*0x45e93e*/
      do /*0x45e95a*/
      {
        int i; // ecx
        for ( i = 0; i < v1; ++i ) /*0x45e944*/
        {
          (*((unsigned char *)&(SubFile))) = *(unsigned char *)(v2 + i); /*0x45e946*/
          if ( (unsigned char)SubFile ) /*0x45e94b*/
          {
            (*((unsigned char *)&(SubFile))) = SubFile - 65; /*0x45e94d*/
            *(unsigned char *)(v2 + i) = SubFile; /*0x45e94f*/
          }
        }
        v2 += v1; /*0x45e957*/
        --v3; /*0x45e959*/
      }
      while ( v3 ); /*0x45e95a*/
    }
  }
  return SubFile; /*0x45e95d*/
}
} // namespace gamemd

// 0x45EC80
namespace gamemd {
void nullsub_107()
{
  ; /*0x45ec80*/
}
} // namespace gamemd
