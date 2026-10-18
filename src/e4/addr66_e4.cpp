// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/GadgetGrid_e4.hpp"
#include "e4/classes/FacingClass_e4.hpp"
#include "e4/classes/E4Recv_660050_e4.hpp"
#include "e4/classes/E4Recv_660AD0_e4.hpp"
#include "e4/classes/E4Recv_660AE0_e4.hpp"
#include "e4/classes/E4Recv_660AF0_e4.hpp"
#include "e4/classes/E4Recv_6616B0_e4.hpp"
#include "e4/classes/E4Recv_661770_e4.hpp"
#include "e4/classes/E4Recv_661960_e4.hpp"
#include "e4/classes/E4Recv_661A60_e4.hpp"
#include "e4/classes/E4Recv_661B70_e4.hpp"
#include "e4/classes/E4Recv_661F30_e4.hpp"
#include "e4/classes/E4Recv_662240_e4.hpp"
#include "e4/classes/E4Recv_6638E0_e4.hpp"
#include "e4/classes/E4Recv_663960_e4.hpp"
#include "e4/classes/E4Recv_663CD0_e4.hpp"
#include "e4/classes/E4Recv_663DB0_e4.hpp"
#include "e4/classes/E4Recv_664750_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Event_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Waypoint_e4.hpp"
#include "e4/classes/CoordStruct_e4.hpp"
#include "e4/classes/VeterancyStruct_e4.hpp"
#include "e4/classes/E4Recv_655050_e4.hpp"
#include "e4/classes/E4Recv_655890_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/CCFileClass_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/SkirmishDialog_e4.hpp"
#include "e4/classes/E4Recv_659590_e4.hpp"
#include "e4/classes/Mouse_e4.hpp"
#include "e4/classes/E4Recv_690400_e4.hpp"
#include "e4/classes/RAMFileClass_e4.hpp"
#include "e4/classes/AircraftTypeClass_e4.hpp"
#include "e4/classes/InfantryTypeClass_e4.hpp"
#include "e4/classes/E4Recv_6A6AF0_e4.hpp"
#include "e4/classes/BulletClass_e4.hpp"
#include "e4/classes/AnimTypeClass_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/LayerClass_e4.hpp"
#include "e4/classes/Targeting_e4.hpp"
#include "e4/classes/NetworkID_e4.hpp"
#include "e4/classes/LocomotionClass_e4.hpp"
// [w14e3] fn vocab supply (g57b5-W5 variadic convention); evidence: raw_decomp entries
namespace gamemd {
int ComputeImpactTrajectory(int p0);  // x4:signals@0x6620f0
} // namespace gamemd

// 0x6613A0
namespace gamemd {  // G42.18 ns repair
int Color_ComputeSaturation(unsigned int a1, int a2, int a3)
{

  int v3; // edi
  int v4; // eax
  int v5; // ebp
  int v6; // ebx
  unsigned int v7; // esi
  unsigned int v8; // eax
  unsigned int v9; // ecx
  int v10; // ecx
  int v12; // [esp+10h] [ebp-14h]
  int v13; // [esp+14h] [ebp-10h]
  __int16 v14; // [esp+1Ch] [ebp-8h]
  int v15; // [esp+20h] [ebp-4h]

  v3 = *(unsigned __int8 *)a1; /*0x6613ad*/
  v4 = *(unsigned __int8 *)(a1 + 2); /*0x6613b4*/
  v5 = *(unsigned __int8 *)(a1 + 1); /*0x6613b7*/
  LOBYTE(a1) = 0; /*0x6613b9*/
  v13 = v4; /*0x6613bd*/
  v6 = v3; /*0x6613c1*/
  if ( v3 <= v5 ) /*0x6613c3*/
    v6 = v5; /*0x6613c5*/
  if ( v4 > v6 ) /*0x6613c9*/
    v6 = v4; /*0x6613cb*/
  v12 = v3; /*0x6613cf*/
  if ( v3 >= v5 ) /*0x6613d3*/
    v12 = v5; /*0x6613d5*/
  if ( v4 < v12 ) /*0x6613dd*/
    v12 = v4; /*0x6613df*/
  (v15) = ((v15) & ~0xFF) | ((0) & 0xFF); /*0x6613e5*/
  if ( v6 ) /*0x6613e9*/
  {
    v7 = v6 - v12; /*0x6613f5*/
    v15 = 255 * (v6 - v12) / v6; /*0x661403*/
    if ( v15 ) /*0x661407*/
    {
      v8 = (255 * v6 - 255 * v4) / v7; /*0x66144f*/
      if ( v6 == v3 ) /*0x661453*/
      {
        if ( v12 == v5 ) /*0x661459*/
        {
          v9 = v8 + 1280; /*0x66145b*/
LABEL_23:
          a1 = v9 / 6; /*0x6614ae*/
          goto LABEL_24; /*0x6614b7*/
        }
        v8 = (255 * v6 - 255 * v5) / v7; /*0x661463*/
        v10 = 256; /*0x661467*/
      }
      else if ( v6 == v5 ) /*0x661470*/
      {
        if ( v12 == v13 ) /*0x66147c*/
        {
          v9 = (255 * v6 - 255 * v3) / v7 + 256; /*0x661482*/
          goto LABEL_23; /*0x661488*/
        }
        v10 = 768; /*0x66148a*/
      }
      else
      {
        if ( v12 == v3 ) /*0x661495*/
        {
          v9 = (255 * v6 - 255 * v5) / v7 + 768; /*0x66149b*/
          goto LABEL_23; /*0x6614a1*/
        }
        v8 = (255 * v6 - 255 * v3) / v7; /*0x6614a3*/
        v10 = 1280; /*0x6614a7*/
      }
      v9 = v10 - v8; /*0x6614ac*/
      goto LABEL_23; /*0x6614ac*/
    }
  }
LABEL_24:
  LOBYTE(v14) = a1; /*0x6614ba*/
  HIBYTE(v14) = v15; /*0x6614c8*/
  *(unsigned short *)a3 = v14; /*0x6614d1*/
  *(unsigned char *)(a3 + 2) = v6; /*0x6614d7*/
  return a3; /*0x6614d4*/

}
}  // G42.18 ns repair
// 0x6615D0
namespace gamemd {
unsigned char * sub_6615D0(char * a1, unsigned char * a2, int a3)
{
  int v4; // ebx
  unsigned char *v5; // edi
  char v6; // al
  unsigned int v7; // eax
  unsigned char *v9; // [esp+8h] [ebp-4h]

  v4 = a3; /*0x6615d6*/
  v5 = a2; /*0x6615db*/
  v9 = a2; /*0x6615e1*/
  if ( a3 > 0 ) /*0x6615e5*/
  {
    while ( 1 ) /*0x6615e9*/
    {
      v6 = *a1++; /*0x6615e9*/
      --v4; /*0x6615ec*/
      if ( v6 ) /*0x6615ef*/
        break; /*0x6615ef*/
      v7 = (uint8_t)*a1++; /*0x6615f3*/
      --v4; /*0x6615f8*/
      if ( v7 ) /*0x6615fb*/
      {
        memset(v5, 0, v7); /*0x661606*/
        v5 = &v9[v7]; /*0x661613*/
        LABEL_6:
        v9 = v5; /*0x66161a*/
      }
      if ( v4 <= 0 ) /*0x661620*/
        return (unsigned char *)(v5 - a2); /*0x661620*/
    }
    *v5++ = v6; /*0x661617*/
    goto LABEL_6; /*0x661619*/
  }
  return (unsigned char *)(v5 - a2); /*0x66162a*/
}
}
// 0x661640
namespace gamemd {
unsigned char * sub_661640(unsigned short * a1, unsigned char * a2)
{
  unsigned char *v2; // edi
  int v3; // edx
  char *v4; // esi
  char v5; // al
  unsigned int v6; // ebx
  unsigned char *v8; // [esp+Ch] [ebp+4h]

  v2 = a2; /*0x66164b*/
  v3 = *a1 - 2; /*0x66164f*/
  v4 = (char *)(a1 + 1); /*0x661652*/
  v8 = a2; /*0x661657*/
  if ( v3 > 0 ) /*0x66165b*/
  {
    while ( 1 ) /*0x66165f*/
    {
      v5 = *v4++; /*0x66165f*/
      --v3; /*0x661662*/
      if ( v5 ) /*0x661665*/
        break; /*0x661665*/
      v6 = (uint8_t)*v4++; /*0x661669*/
      --v3; /*0x66166c*/
      if ( v6 ) /*0x66166f*/
      {
        memset(v2, 0, v6); /*0x66167a*/
        v2 = &v8[v6]; /*0x661687*/
        LABEL_6:
        v8 = v2; /*0x66168e*/
      }
      if ( v3 <= 0 ) /*0x661694*/
        return (unsigned char *)(v2 - a2); /*0x661694*/
    }
    *v2++ = v5; /*0x66168b*/
    goto LABEL_6; /*0x66168d*/
  }
  return (unsigned char *)(v2 - a2); /*0x66169e*/
}
}
// 0x6622C0
namespace gamemd {
char UpdateBullets(int a1)
{

  double v1; // st7
  unsigned int *Owner; // ecx
  int v4; // edx
  char *v5; // eax
  int v7; // eax
  bool v8; // al
  int v9; // edx
  int v10; // eax
  AnimClass *v11; // ebx
  int *v12; // eax
  int Index; // eax
  int v14; // edx
  int v15; // ecx
  int v16; // eax
  int v17; // ecx
  int v19; // edx
  int v20; // eax
  int v21; // eax
  int v22; // ecx
  bool v23; // al
  int *v24; // ebx
  int v25; // edi
  ObjectClass **v26; // edx
  int v27; // eax
  AnimClass *v28; // edi
  int *v29; // eax
  int v30; // eax
  unsigned int *v31; // ecx
  int v32; // edx
  int v33; // eax
  int v34; // ecx
  int v35; // eax
  int v36; // edi
  unsigned short *v40; // eax
  unsigned int *v41; // ecx
  int v42; // eax
  int v43; // edx
  int v44; // eax
  bool v45; // al
  int v46; // edx
  int v47; // eax
  unsigned short *v51; // eax
  AnimClass *v52; // edi
  int *v53; // ecx
  int v54; // eax
  int *v55; // ecx
  int v56; // eax
  int v58; // ecx
  int v59; // eax
  int RefCount; // edi
  int v66; // ebx
  unsigned int *v67; // eax
  int v68; // eax
  RocketLocomotionClass *v74; // ebx
  int v75; // ecx
  int v76; // eax
  int *v78; // eax
  int v79; // ecx
  int v80; // eax
  int v81; // eax
  int v82; // ecx
  int v83; // edx
  int v84; // eax
  int v85; // ecx
  int *v92; // ecx
  int v93; // ebx
  int v94; // eax
  int v95; // edx
  unsigned int *v96; // eax
  int v97; // ecx
  int v98; // edx
  int v99; // eax
  int v100; // eax
  int v102; // ecx
  int v103; // ecx
  RocketLocomotionClass *v104; // ebx
  int v105; // eax
  int v106; // ecx
  int v113; // edx
  int v114; // eax
  AnimClass *v115; // edi
  int *v116; // eax
  int v117; // eax
  int v118; // edx
  int v120; // eax
  unsigned int *v122; // eax
  int v123; // edx
  int v124; // eax
  int v125; // eax
  unsigned int v126; // ebx
  int v127; // eax
  int v128; // eax
  int v129; // ebx
  int v130; // eax
  int *v131; // eax
  int v132; // ecx
  int v133; // eax
  double v135; // [esp+8h] [ebp-B8h]
  double v136; // [esp+10h] [ebp-B0h]
  double v137; // [esp+10h] [ebp-B0h]
  double v138; // [esp+10h] [ebp-B0h]
  double v139; // [esp+10h] [ebp-B0h]
  double v140; // [esp+10h] [ebp-B0h]
  double v141; // [esp+10h] [ebp-B0h]
  double v142; // [esp+10h] [ebp-B0h]
  double v143; // [esp+10h] [ebp-B0h]
  double v144; // [esp+10h] [ebp-B0h]
  double v145; // [esp+10h] [ebp-B0h]
  char *v146; // [esp+28h] [ebp-98h]
  int v147; // [esp+28h] [ebp-98h]
  int v148; // [esp+28h] [ebp-98h]
  int v149; // [esp+28h] [ebp-98h]
  int v150; // [esp+2Ch] [ebp-94h] BYREF
  double v151; // [esp+30h] [ebp-90h]
  int v152; // [esp+38h] [ebp-88h]
  double v153; // [esp+40h] [ebp-80h]
  int v154; // [esp+48h] [ebp-78h]
  double v155; // [esp+50h] [ebp-70h] BYREF
  int v156; // [esp+58h] [ebp-68h]
  double v157; // [esp+60h] [ebp-60h] BYREF
  int v158; // [esp+68h] [ebp-58h] BYREF
  int v159; // [esp+6Ch] [ebp-54h]
  int v160; // [esp+70h] [ebp-50h]
  int v161; // [esp+74h] [ebp-4Ch] BYREF
  int v162; // [esp+78h] [ebp-48h]
  int v163; // [esp+7Ch] [ebp-44h]
  unsigned int v164[3]; // [esp+84h] [ebp-3Ch] BYREF
  int v165; // [esp+90h] [ebp-30h] BYREF
  int v166; // [esp+94h] [ebp-2Ch]
  int v167; // [esp+98h] [ebp-28h]
  unsigned int v168[3]; // [esp+9Ch] [ebp-24h] BYREF
  int v169[3]; // [esp+A8h] [ebp-18h] BYREF
  int v170[3]; // [esp+B4h] [ebp-Ch] BYREF

  _ESI = this; /*0x6622d3*/
  Owner = (unsigned int *)this->Owner; /*0x6622dd*/
  v4 = Owner[433]; /*0x6622e0*/
  if ( v4 == *&dword_8871E0->u32_4E0 ) /*0x6622e8*/
  {
    v5 = &dword_8871E0->u32_4B0; /*0x6622ea*/
LABEL_6:
    v146 = v5; /*0x66230a*/
    _EDI = v5; /*0x66230e*/
    goto LABEL_7; /*0x66230e*/
  }
  if ( v4 != *&dword_8871E0->q548 ) /*0x6622f7*/
  {
    v5 = &dword_8871E0->TechnoTypeClass_4E4; /*0x662305*/
    goto LABEL_6; /*0x662305*/
  }
  _EDI = &dword_8871E0->TechnoTypeClass_518; /*0x6622f9*/
  v146 = &dword_8871E0->TechnoTypeClass_518; /*0x6622ff*/
LABEL_7:
  switch ( this->TrailerTimer[2] ) /*0x66231f*/
  {
    case 1: /*0x66231f*/
      this->RocketLocomotionClass_field_44 = 0; /*0x662326*/
      this->CurrentSpeed[0] = 0; /*0x662329*/
      v7 = *(unsigned int *)(this->Owner + 724); /*0x66232f*/
      v8 = v7 && (unsigned __int8)Audio::IsLoud((int *)(v7 + 336)); /*0x662348*/
      BYTE1(this->CurrentSpeed[1]) = v8; /*0x662351*/
      if ( *((unsigned int *)_EDI + 12) != *&dword_8871E0->q548 ) /*0x662363*/
      {
        LOBYTE(this->CurrentSpeed[1]) = 1; /*0x662440*/
LABEL_23:
        LODWORD(v153) = this->MissionTimer[2]; /*0x662444*/
        if ( !LODWORD(v153) ) /*0x66244d*/
          goto LABEL_29; /*0x66244d*/
        v15 = this->MovingDestination[2]; /*0x66244f*/
        v16 = this->MissionTimer[1]; /*0x662452*/
        if ( v15 != -1 ) /*0x662458*/
        {
          v17 = *(unsigned int *)&stru_A8E960.random[528] - v15; /*0x662462*/
          if ( v17 >= v16 ) /*0x662466*/
            v16 = 0; /*0x66246c*/
          else
            v16 -= v17; /*0x662468*/
        }
        v147 = LODWORD(v153) - v16; /*0x662470*/
        __asm /*0x662474*/
        {
          fild [esp+0A8h+var_98]
          fidiv dword ptr [esp+0A8h+var_84+4]
          fcomp ds:dbl_7E1718
          fnstsw ax
        }
        if ( (_AX & 0x4000) != 0 ) /*0x662487*/
        {
LABEL_29:
          v19 = v162; /*0x66249e*/
          v20 = -(*&dword_8871E0->q548 != *((unsigned int *)_EDI + 12)); /*0x6624a4*/
          (v20) = ((v20) & ~0xFF) | ((v20 & 0xFC) & 0xFF); /*0x6624a6*/
          this->TrailerTimer[2] = v20 + 6; /*0x6624ab*/
          v21 = *((unsigned int *)_EDI + 1); /*0x6624b4*/
          this->MovingDestination[2] = *(unsigned int *)&stru_A8E960.random[528]; /*0x6624b7*/
          this->MissionTimer[0] = v19; /*0x6624ba*/
          this->MissionTimer[1] = v21; /*0x6624bd*/
          this->MissionTimer[2] = v21; /*0x6624c0*/
        }
        goto LABEL_111; /*0x6624c3*/
      }
      v9 = this->MissionTimer[3]; /*0x662369*/
      v10 = this->TrailerTimer[1]; /*0x66236c*/
      if ( v9 == -1 ) /*0x662372*/
        goto LABEL_16; /*0x662372*/
      if ( *(unsigned int *)&stru_A8E960.random[528] - v9 >= v10 ) /*0x66237e*/
        goto LABEL_17; /*0x66237e*/
      v10 -= *(unsigned int *)&stru_A8E960.random[528] - v9; /*0x662380*/
LABEL_16:
      if ( !v10 ) /*0x662384*/
      {
LABEL_17:
        v11 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x662394*/
        if ( v11 ) /*0x66239b*/
        {
          v12 = (int *)(this->Owner + 156); /*0x6623a0*/
          v170[0] = *v12; /*0x6623a7*/
          v170[1] = v12[1]; /*0x6623b7*/
          v170[2] = v12[2]; /*0x6623c1*/
          Index = AnimTypeClass::FindIndex(off_8399AC); /*0x6623c8*/
          AnimClass::ctor( /*0x6623ee*/
            v11,
            *((void **)dword_8B4154 + Index),
            v170,
            (void *)2,
            1,
            (void *)0x600,
            (void *)0xFFFFFFF6,
            0);
        }
        v14 = v162; /*0x6623f8*/
        this->MissionTimer[3] = *(unsigned int *)&stru_A8E960.random[528]; /*0x662401*/
        this->TrailerTimer[0] = v14; /*0x662404*/
        this->TrailerTimer[1] = 24; /*0x662407*/
      }
      if ( LOBYTE(this->CurrentSpeed[1]) ) /*0x66240c*/
      {
        (*(void (**)(int, unsigned int))(*(unsigned int *)this->Owner + 292))(this->Owner, 0); /*0x662419*/
        LOBYTE(this->CurrentSpeed[1]) = 0; /*0x66241f*/
        Targeting::Readd((unsigned int *)this->Owner); /*0x66242c*/
        (*(void (**)(int, int))(*(unsigned int *)this->Owner + 292))(this->Owner, 1); /*0x662438*/
      }
      goto LABEL_23; /*0x66243e*/
    case 2: /*0x66231f*/
      this->RocketLocomotionClass_field_44 = 0; /*0x662720*/
      this->CurrentSpeed[0] = 0; /*0x662723*/
      v44 = *(unsigned int *)(this->Owner + 724); /*0x662729*/
      v45 = v44 && (unsigned __int8)Audio::IsLoud((int *)(v44 + 336)); /*0x662742*/
      BYTE1(this->CurrentSpeed[1]) = v45; /*0x66274b*/
      LODWORD(v153) = this->MissionTimer[2]; /*0x662753*/
      if ( !LODWORD(v153) ) /*0x662757*/
        goto LABEL_63; /*0x662757*/
      v46 = this->MovingDestination[2]; /*0x662759*/
      v47 = this->MissionTimer[1]; /*0x66275c*/
      if ( v46 != -1 ) /*0x662768*/
      {
        if ( *(unsigned int *)&stru_A8E960.random[528] - v46 >= v47 ) /*0x662770*/
          v47 = 0; /*0x662776*/
        else
          v47 -= *(unsigned int *)&stru_A8E960.random[528] - v46; /*0x662772*/
      }
      LODWORD(v151) = LODWORD(v153) - v47; /*0x66277a*/
      __asm /*0x66277e*/
      {
        fild dword ptr [esp+0A8h+var_94+4]
        fidiv dword ptr [esp+0A8h+var_84+4]
        fcomp ds:dbl_7E1718
        fnstsw ax
      }
      if ( (_AX & 0x4000) == 0 ) /*0x662791*/
      {
        _EAX = v146; /*0x66288a*/
        __asm /*0x662893*/
        {
          fld dword ptr [eax+8]
          fmul ds:dbl_7E2820
          fld dword ptr [eax+0Ch]
          fmul ds:dbl_7E2820
        }
        LODWORD(v151) = this->MissionTimer[2]; /*0x6628a5*/
        if ( LODWORD(v151) ) /*0x6628a9*/
        {
          v58 = this->MovingDestination[2]; /*0x6628b3*/
          v59 = this->MissionTimer[1]; /*0x6628b6*/
          if ( v58 != -1 ) /*0x6628bc*/
          {
            if ( *(unsigned int *)&stru_A8E960.random[528] - v58 >= v59 ) /*0x6628c4*/
              v59 = 0; /*0x6628ca*/
            else
              v59 -= *(unsigned int *)&stru_A8E960.random[528] - v58; /*0x6628c6*/
          }
          LODWORD(v157) = LODWORD(v151) - v59; /*0x6628ce*/
          __asm /*0x6628d2*/
          {
            fild dword ptr [esp+0A8h+var_64+4]
            fidiv dword ptr [esp+0A8h+var_94+4]
          }
        }
        else
        {
          __asm { fld ds:dbl_7E1718 } /*0x6628ab*/
        }
        __asm /*0x6628da*/
        {
          fxch st(1)
          fsub st, st(2)
          fmul st, st(1)
          fxch st(2)
          faddp st(2), st
          fxch st(1)
          fstp dword ptr [esi+50h]
        }
        *(float *)this->RocketLocomotionClass_field_bool_4C = _ET1; /*0x6628e6*/
        __asm { fstp st } /*0x6628e9*/
      }
      else
      {
LABEL_63:
        _ECX = v146; /*0x662797*/
        __asm /*0x6627a0*/
        {
          fld dword ptr [ecx+0Ch]
          fmul ds:dbl_7E2820
          fstp dword ptr [esi+50h]
        }
        *(float *)this->RocketLocomotionClass_field_bool_4C = _ET1; /*0x6627a9*/
        this->TrailerTimer[2] = 3; /*0x6627ac*/
        v51 = (unsigned short *)(*(int (**)(int, unsigned int *))(*(unsigned int *)this->Owner + 756))(this->Owner, v164); /*0x6627b8*/
        if ( *v51 == word_B04E18 && v51[1] == word_B04E1A ) /*0x6627d5*/
          GadgetGrid::InsertItem((GadgetGrid *)&g_CellClassManager, this->Owner); /*0x6627e0*/
        v52 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x6627ef*/
        if ( v52 ) /*0x6627f6*/
        {
          v53 = (int *)(this->Owner + 156); /*0x6627fb*/
          v165 = *v53; /*0x662803*/
          v166 = v53[1]; /*0x66280a*/
          v167 = v53[2]; /*0x662811*/
          v54 = AnimTypeClass::FindIndex(off_8399AC); /*0x66281e*/
          AnimClass::ctor( /*0x662844*/
            v52,
            *((void **)dword_8B4154 + v54),
            &v165,
            (void *)2,
            1,
            (void *)0x600,
            (void *)0xFFFFFFF6,
            0);
        }
        v55 = (int *)this->Owner; /*0x662849*/
        v158 = v55[39]; /*0x66285e*/
        v159 = v55[40]; /*0x662865*/
        v160 = v55[41]; /*0x66286c*/
        v56 = (*(int (**)(int *))(*v55 + 132))(v55); /*0x662872*/
        StartAudioControllerAt(*(unsigned int *)(v56 + 1324), &v158, 0); /*0x662880*/
      }
      goto LABEL_111; /*0x662885*/
    case 3: /*0x66231f*/
      if ( !LOBYTE(this->CurrentSpeed[1]) ) /*0x6628f0*/
      {
        (*(void (**)(unsigned int *, unsigned int))(*Owner + 292))(Owner, 0); /*0x6628fa*/
        LOBYTE(this->CurrentSpeed[1]) = 1; /*0x662900*/
        Targeting::Readd((unsigned int *)this->Owner); /*0x66290d*/
        (*(void (**)(int, int))(*(unsigned int *)this->Owner + 292))(this->Owner, 1); /*0x662919*/
      }
      __asm /*0x66291f*/
      {
        fld dword ptr [edi+18h]
        fadd qword ptr [esi+44h]
        fstp qword ptr [esi+44h]
      }
      *&this->RocketLocomotionClass_field_44 = _RT1; /*0x662925*/
      _EAX = (*(int (**)(int))(*(unsigned int *)this->Owner + 132))(this->Owner); /*0x66292d*/
      __asm /*0x662933*/
      {
        fild dword ptr [eax+678h]
        fcomp qword ptr [esi+44h]
        fnstsw ax
      }
      if ( (_EAX & 0x100) != 0 ) /*0x662941*/
      {
        _EAX = (*(int (**)(int))(*(unsigned int *)this->Owner + 132))(this->Owner); /*0x662948*/
        __asm /*0x66294e*/
        {
          fild dword ptr [eax+678h]
          fstp qword ptr [esi+44h]
        }
        *&this->RocketLocomotionClass_field_44 = _RT1; /*0x662954*/
      }
      if ( (*(int (**)(int))(*(unsigned int *)this->Owner + 456))(this->Owner) >= *((unsigned int *)_EDI + 7) ) /*0x662965*/
      {
        this->TrailerTimer[2] = 4; /*0x66296b*/
        RefCount = this->RefCount; /*0x662975*/
        v66 = this->MovingDestination[0]; /*0x662978*/
        v67 = (unsigned int *)(*(int (**)(int, int *))(*(unsigned int *)this->Owner + 72))(this->Owner, &v161); /*0x662982*/
        v151 = COERCE_DOUBLE((((v67[1] - v66 & 0xFFFFFFFFull)) << 32 | (*v67 - RefCount & 0xFFFFFFFFull))); /*0x66298e*/
        __asm /*0x662996*/
        {
          fild dword ptr [esp+0A8h+var_94+4]
          fild [esp+0A8h+var_8C]
        }
        __asm
        {
          fld st
          fmul st, st(1)
          fld st(2)
          fmul st, st(3)
          faddp st(1), st
          fstp [esp+0B0h+var_B4+4]; double
          fstp st
          fstp st
        }
        Math::Sqrt(v136); /*0x6629b2*/
        LOWORD(v68) = Math::RoundToInt(v1); /*0x6629ba*/
        this->CurrentPitch = v68; /*0x6629bf*/
      }
      goto LABEL_111; /*0x6629c2*/
    case 4: /*0x66231f*/
      if ( (*(int (**)(unsigned int *))(*Owner + 456))(Owner) <= 0 ) /*0x6629d1*/
      {
        TechnoClass::CalculateDamage((TechnoClass *)((char *)this - 4)); /*0x6629d6*/
        return 0; /*0x6629e3*/
      }
      __asm /*0x6629e6*/
      {
        fld dword ptr [edi+18h]
        fadd qword ptr [esi+44h]
        fstp qword ptr [esi+44h]
      }
      *&this->RocketLocomotionClass_field_44 = _RT1; /*0x6629ec*/
      _EAX = (*(int (**)(int))(*(unsigned int *)this->Owner + 132))(this->Owner); /*0x6629f4*/
      __asm /*0x6629fa*/
      {
        fild dword ptr [eax+678h]
        fcomp qword ptr [esi+44h]
        fnstsw ax
      }
      if ( (_EAX & 0x100) != 0 ) /*0x662a08*/
      {
        _EAX = (*(int (**)(int))(*(unsigned int *)this->Owner + 132))(this->Owner); /*0x662a0f*/
        __asm /*0x662a15*/
        {
          fild dword ptr [eax+678h]
          fstp qword ptr [esi+44h]
        }
        *&this->RocketLocomotionClass_field_44 = _RT1; /*0x662a1b*/
      }
      if ( _EDI[44] && this->CurrentPitch ) /*0x662a29*/
      {
        v74 = (RocketLocomotionClass *)((char *)this - 4); /*0x662a32*/
        if ( BulletClass::ComputeImpactTrajectory((TechnoClass *)((char *)this - 4), v1, (int)_EDI) ) /*0x662a38*/
          return 0; /*0x662a3f*/
        v75 = this->Owner; /*0x662a44*/
        v76 = this->RefCount; /*0x662a47*/
        _EDI = &this->RefCount; /*0x662a4a*/
        HIDWORD(v151) = this->MovingDestination[0]; /*0x662a4d*/
        LODWORD(v151) = v76; /*0x662a51*/
        v78 = (int *)(*(int (**)(int, int *))(*(unsigned int *)v75 + 72))(v75, &v161); /*0x662a5c*/
        v79 = *v78; /*0x662a5f*/
        v80 = v78[1]; /*0x662a65*/
        LODWORD(v153) = v79 - LODWORD(v151); /*0x662a6a*/
        __asm { fild dword ptr [esp+0A8h+var_84+4] } /*0x662a72*/
        HIDWORD(v153) = v80 - HIDWORD(v151); /*0x662a7b*/
        __asm /*0x662a7f*/
        {
          fild [esp+0B0h+var_7C]
          fld st
          fmul st, st(1)
          fld st(2)
          fmul st, st(3)
          faddp st(1), st
          fstp [esp+0B0h+var_B4+4]; double
          fstp st
          fstp st
        }
        Math::Sqrt(v137); /*0x662a94*/
        LOWORD(v81) = Math::RoundToInt(v1); /*0x662a99*/
        LODWORD(v151) = v81; /*0x662a9e*/
        __asm { fild dword ptr [esp+0B0h+var_94+4] } /*0x662aa5*/
        __asm { fidiv dword ptr [esi+54h] }
        v82 = *(unsigned int *)(v74->LinkedTo + 156); /*0x662ab1*/
        v83 = *(unsigned int *)(v74->LinkedTo + 160); /*0x662ab3*/
        v152 = *(unsigned int *)(v74->LinkedTo + 164); /*0x662ab9*/
        v84 = v74->MovingDestination[0] - v82; /*0x662ac0*/
        v85 = v74->MovingDestination[1] - v83; /*0x662ac5*/
        v163 = v74->MovingDestination[2] - v152; /*0x662ace*/
        __asm { fst [esp+0B0h+var_84+4] } /*0x662ad4*/
        __asm
        {
          fld ds:dbl_7E1718
          fsub st, st(1)
          fstp [esp+0B0h+var_74+4]
          fstp st
        }
        LODWORD(v151) = v85 * v85 + v84 * v84; /*0x662af0*/
        __asm /*0x662af4*/
        {
          fild dword ptr [esp+0B0h+var_94+4]
          fstp [esp+0B0h+var_B4+4]; double
        }
        Math::Sqrt(v138); /*0x662afb*/
        __asm { fcom ds:dbl_7E2800 } /*0x662b00*/
        __asm { fnstsw ax }
        if ( (_AX & 0x4100) != 0 ) /*0x662b0e*/
        {
          __asm /*0x662b28*/
          {
            fstp st
            fld ds:dbl_7F0C10
          }
        }
        else
        {
          __asm { fild [esp+0A8h+var_44] } /*0x662b10*/
          __asm
          {
            fdiv st, st(1)
            fstp [esp+0B0h+var_B4+4]; double
            fstp st
          }
          Math::ArcTan(v139); /*0x662b1e*/
        }
        _ECX = v146; /*0x662b30*/
        __asm /*0x662b34*/
        {
          fld dword ptr [ecx+0Ch]
          fmul [esp+0A8h+var_84+4]
          fmul ds:dbl_7E2820
          fxch st(1)
          fmul [esp+0A8h+var_74+4]
          faddp st(1), st
          fstp dword ptr [esi+50h]
        }
        *(float *)this->RocketLocomotionClass_field_bool_4C = _ET1; /*0x662b49*/
      }
      else
      {
        __asm /*0x662b51*/
        {
          fld dword ptr [esi+50h]
          fcomp ds:flt_7E1748
          fnstsw ax
        }
        if ( (_AX & 0x4100) == 0 ) /*0x662b5f*/
        {
          __asm /*0x662b61*/
          {
            fld dword ptr [esi+50h]
            fsub dword ptr [edi+10h]
            fst dword ptr [esi+50h]
          }
          *(float *)this->RocketLocomotionClass_field_bool_4C = _ET1; /*0x662b67*/
          __asm /*0x662b6a*/
          {
            fcomp ds:flt_7E1748
            fnstsw ax
          }
          if ( (_AX & 0x100) != 0 ) /*0x662b75*/
            *(unsigned int *)this->RocketLocomotionClass_field_bool_4C = 0; /*0x662b77*/
        }
        _EDI = &this->RefCount; /*0x662b7a*/
        v155 = *&this->RefCount; /*0x662b81*/
        v92 = (int *)this->Owner; /*0x662b8c*/
        v156 = this->MovingDestination[1]; /*0x662b98*/
        v161 = v92[39]; /*0x662ba0*/
        v162 = v92[40]; /*0x662ba7*/
        v93 = v92[41] - v156; /*0x662bb4*/
        LODWORD(v153) = v92[39]; /*0x662bb8*/
        v94 = v92[41]; /*0x662bbf*/
        HIDWORD(v153) = v92[40]; /*0x662bc2*/
        v95 = *v92; /*0x662bc6*/
        v154 = v94; /*0x662bc8*/
        v96 = (unsigned int *)(*(int (**)(int *, int *))(v95 + 72))(v92, &v161); /*0x662bd1*/
        v97 = *v96 - LODWORD(v155); /*0x662bda*/
        v98 = v96[1]; /*0x662bdc*/
        v99 = v96[2]; /*0x662bdf*/
        LODWORD(v151) = v97; /*0x662be2*/
        __asm { fild dword ptr [esp+0B0h+var_94+4] } /*0x662bed*/
        HIDWORD(v151) = v98 - HIDWORD(v155); /*0x662bf7*/
        __asm { fild [esp+0B0h+var_8C] } /*0x662bfd*/
        v152 = v99 - v154; /*0x662c01*/
        __asm /*0x662c05*/
        {
          fild [esp+0B0h+var_88]
          fld st
          fmul st, st(1)
          fld st(2)
          fmul st, st(3)
          faddp st(1), st
          fld st(3)
          fmul st, st(4)
          faddp st(1), st
          fstp [esp+0B0h+var_B4+4]; double
          fstp st
          fstp st
          fstp st
        }
        Math::Sqrt(v140); /*0x662c22*/
        LOWORD(v100) = Math::RoundToInt(v1); /*0x662c2a*/
        if ( v100 <= v93 ) /*0x662c31*/
          this->TrailerTimer[2] = 5; /*0x662c33*/
      }
      _EAX = (int *)(*(int (**)(int, int *))(*(unsigned int *)this->Owner + 72))(this->Owner, &v161); /*0x662c44*/
      v102 = *_EAX; /*0x662c49*/
      LODWORD(v151) = *_EDI; /*0x662c4b*/
      LODWORD(v153) = v102; /*0x662c4f*/
      __asm { fild dword ptr [esp+0A8h+var_94+4] } /*0x662c53*/
      __asm
      {
        fisub dword ptr [esp+0B8h+var_84+4]
        fstp [esp+0B8h+var_B4+4]; double
        fild dword ptr [eax+4]
        fisub dword ptr [edi+4]
        fstp qword ptr [esp]; double
      }
      Math::CalcAngle(v135, v141); /*0x662c6e*/
      __asm { fsub ds:dbl_7E2820 } /*0x662c73*/
      __asm { fmul ds:dbl_7E2818 }
      LOWORD(v151) = Math::RoundToInt(v1); /*0x662c8b*/
      v103 = this->Owner; /*0x662c95*/
      v150 = LODWORD(v151); /*0x662c98*/
      FacingClass::Update((char *)(v103 + 904), &v150); /*0x662ca2*/
LABEL_111:
      if ( !(*(unsigned __int8 (**)(RocketLocomotionClass *))(*&this->Owner + 128))(this) ) /*0x662d7f*/
        goto LABEL_119; /*0x662d7f*/
      v113 = this->MissionTimer[3]; /*0x662d85*/
      v114 = this->TrailerTimer[1]; /*0x662d88*/
      if ( v113 == -1 ) /*0x662d8e*/
        goto LABEL_115; /*0x662d8e*/
      if ( *(unsigned int *)&stru_A8E960.random[528] - v113 >= v114 ) /*0x662d9a*/
        goto LABEL_116; /*0x662d9a*/
      v114 -= *(unsigned int *)&stru_A8E960.random[528] - v113; /*0x662d9c*/
LABEL_115:
      if ( !v114 ) /*0x662da0*/
      {
LABEL_116:
        v115 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x662dac*/
        if ( v115 ) /*0x662db3*/
        {
          v116 = (int *)(this->Owner + 156); /*0x662db8*/
          v158 = *v116; /*0x662dbf*/
          v159 = v116[1]; /*0x662dcc*/
          v160 = v116[2]; /*0x662dd3*/
          v117 = AnimTypeClass::FindIndex(off_8399B0); /*0x662dd7*/
          AnimClass::ctor(v115, *((void **)dword_8B4154 + v117), &v158, 0, 1, (void *)0x600, 0, 0); /*0x662dfa*/
        }
        v118 = v162; /*0x662e04*/
        this->MissionTimer[3] = *(unsigned int *)&stru_A8E960.random[528]; /*0x662e0d*/
        this->TrailerTimer[0] = v118; /*0x662e10*/
        this->TrailerTimer[1] = 3; /*0x662e13*/
      }
LABEL_119:
      __asm /*0x662e16*/
      {
        fld qword ptr [esi+44h]
        fcomp ds:dbl_7E2800
        fnstsw ax
      }
      if ( (_AX & 0x4100) == 0 ) /*0x662e24*/
      {
        __asm { fld qword ptr [esi+44h] } /*0x662e2a*/
        LOWORD(v120) = Math::RoundToInt(v1); /*0x662e2d*/
        _EDI = (char *)this - 4; /*0x662e32*/
        v150 = v120; /*0x662e35*/
        __asm { fild dword ptr [esp+0A8h+var_94] } /*0x662e39*/
        v122 = (unsigned int *)(this->Owner + 156); /*0x662e43*/
        __asm { fstp qword ptr [esp+0B0h+var_94+4] } /*0x662e48*/
        __asm { fld dword ptr [edi+54h] }
        v123 = v122[1]; /*0x662e51*/
        LODWORD(v153) = *v122; /*0x662e54*/
        __asm { fstp [esp+0B0h+var_B4+4]; double } /*0x662e58*/
        v124 = v122[2]; /*0x662e5b*/
        HIDWORD(v153) = v123; /*0x662e5e*/
        v154 = v124; /*0x662e62*/
        Math::ArcTan2(v144); /*0x662e66*/
        __asm { fmul qword ptr [esp+0B0h+var_94+4] } /*0x662e6b*/
        LOWORD(v125) = Math::RoundToInt(v1); /*0x662e72*/
        LODWORD(v157) = v125; /*0x662e7b*/
        v150 = *(__int16 *)ProgressTimer::GetValue((ProgressTimer *)(this->Owner + 904), v164) - 0x3FFF; /*0x662e97*/
        __asm /*0x662e9b*/
        {
          fild dword ptr [esp+0A8h+var_94]
          fmul ds:dbl_7E2810
          fstp qword ptr [esp+0A8h+var_3C+4]
          fild dword ptr [esp+0A8h+var_64+4]
        }
        v126 = v164[2]; /*0x662ead*/
        __asm /*0x662eb7*/
        {
          fstp qword ptr [esp+0B0h+var_64+4]
          fild [esp+0B0h+var_7C]
          fstp [esp+0B0h+var_74+4]
        }
        Math::SinCos(*(double *)&v164[1]); /*0x662ec3*/
        __asm /*0x662ec8*/
        {
          fmul qword ptr [esp+0B0h+var_64+4]
          fsubr [esp+0B0h+var_74+4]
        }
        LOWORD(v127) = Math::RoundToInt(v1); /*0x662ed0*/
        v150 = v127; /*0x662edb*/
        Math::ArcTan2(COERCE_DOUBLE((((v126 & 0xFFFFFFFFull)) << 32 | (v164[1] & 0xFFFFFFFFull)))); /*0x662edf*/
        __asm /*0x662ee4*/
        {
          fmul qword ptr [esp+0B8h+var_64+4]
          fiadd dword ptr [esp+0B8h+var_84+4]
        }
        LOWORD(v128) = Math::RoundToInt(v1); /*0x662eec*/
        __asm { fld dword ptr [edi+54h] } /*0x662ef1*/
        v129 = v128; /*0x662efb*/
        __asm { fstp [esp+0B0h+var_B4+4]; double } /*0x662f01*/
        v166 = v150; /*0x662f04*/
        v167 = v154; /*0x662f0b*/
        Math::SinCos(v145); /*0x662f12*/
        __asm { fmul qword ptr [esp+0B0h+var_94+4] } /*0x662f17*/
        __asm { fiadd [esp+0A8h+var_78] }
        LOWORD(v130) = Math::RoundToInt(v1); /*0x662f22*/
        v160 = v130; /*0x662f27*/
        v158 = v129; /*0x662f31*/
        v159 = v166; /*0x662f3c*/
        (v149) = ((v149) & ~0xFFFF) | ((v129 / 256) & 0xFFFF); /*0x662f45*/
        (v149) = ((v149) & ~(0xFFFF << 16)) | (((v166 / 256) & 0xFFFF) << 16); /*0x662f58*/
        v150 = v149; /*0x662f65*/
        if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&dword_87F7E8, (__int16 *)&v150) ) /*0x662f6f*/
          (*(void (**)(int, int *))(*(unsigned int *)this->Owner + 436))(this->Owner, &v158); /*0x662f82*/
        v131 = (int *)(*(int (**)(int, unsigned int *))(*(unsigned int *)this->Owner + 440))(this->Owner, v164); /*0x662f92*/
        v132 = this->Owner; /*0x662f98*/
        v133 = *v131; /*0x662f9b*/
        v150 = v133; /*0x662f9d*/
        if ( v133 != *(unsigned int *)(v132 + 1376) && *(unsigned char *)(v132 + 144) ) /*0x662fb8*/
          Coord::ToGridIndex((char *)&g_CellClassManager, v132, *(unsigned int *)(v132 + 1376), v133); /*0x662fd0*/
        if ( *(int *)(this->Owner + 108) <= 0 ) /*0x662fdd*/
          TechnoClass::CalculateDamage((TechnoClass *)((char *)this - 4)); /*0x662fe1*/
      }
      return (*(char (**)(RocketLocomotionClass *))(*(unsigned int *)&this->0 + 16))(this);
    case 5: /*0x66231f*/
      v104 = (RocketLocomotionClass *)((char *)this - 4); /*0x662cac*/
      if ( BulletClass::ComputeImpactTrajectory((TechnoClass *)((char *)this - 4), v1, (int)_EDI) ) /*0x662cb2*/
        return 0; /*0x662cb9*/
      v105 = v104->MovingDestination[0] - *(unsigned int *)(v104->LinkedTo + 156); /*0x662cd8*/
      v106 = v104->MovingDestination[1] - *(unsigned int *)(v104->LinkedTo + 160); /*0x662cdd*/
      v163 = v104->MovingDestination[2] - *(unsigned int *)(v104->LinkedTo + 164); /*0x662ce4*/
      LODWORD(v151) = v105 * v105 + v106 * v106; /*0x662cf4*/
      __asm /*0x662cf8*/
      {
        fild dword ptr [esp+0B0h+var_94+4]
        fstp [esp+0B0h+var_B4+4]; double
      }
      Math::Sqrt(v142); /*0x662cff*/
      __asm { fcom ds:dbl_7E2800 } /*0x662d04*/
      __asm { fnstsw ax }
      if ( (_AX & 0x4100) != 0 ) /*0x662d12*/
      {
        __asm /*0x662d2c*/
        {
          fstp st
          fld ds:dbl_7F0C10
        }
      }
      else
      {
        __asm { fild [esp+0A8h+var_44] } /*0x662d14*/
        __asm
        {
          fdiv st, st(1)
          fstp [esp+0B0h+var_B4+4]; double
          fstp st
        }
        Math::ArcTan(v143); /*0x662d22*/
      }
      __asm /*0x662d34*/
      {
        fsub dword ptr [esi+50h]
        fld st
        fcom ds:dbl_7E2800
        fnstsw ax
      }
      if ( (_AX & 0x100) != 0 ) /*0x662d44*/
        __asm { fchs } /*0x662d46*/
      _ECX = v146; /*0x662d48*/
      __asm /*0x662d4c*/
      {
        fcomp dword ptr [ecx+10h]
        fnstsw ax
      }
      if ( (_AX & 0x4100) != 0 ) /*0x662d54*/
      {
        __asm /*0x663000*/
        {
          fld dword ptr [esi+50h]
          fadd st, st(1)
          fstp dword ptr [esi+50h]
        }
        *(float *)this->RocketLocomotionClass_field_bool_4C = _ET1; /*0x663005*/
        __asm { fstp st } /*0x663008*/
      }
      else
      {
        __asm /*0x662d5a*/
        {
          fcomp ds:dbl_7E2800
          fnstsw ax
        }
        if ( (_AX & 0x100) != 0 ) /*0x662d65*/
        {
          __asm /*0x662d6b*/
          {
            fld dword ptr [esi+50h]
            fsub dword ptr [ecx+10h]
          }
        }
        else
        {
          __asm /*0x662ff5*/
          {
            fld dword ptr [ecx+10h]
            fadd dword ptr [esi+50h]
          }
        }
        __asm { fstp dword ptr [esi+50h] } /*0x662d71*/
        *(float *)this->RocketLocomotionClass_field_bool_4C = _ET1; /*0x662d71*/
      }
      goto LABEL_111; /*0x662d71*/
    case 6: /*0x66231f*/
      v22 = Owner[181]; /*0x6624c8*/
      v23 = v22 && (unsigned __int8)Audio::IsLoud((int *)(v22 + 336)); /*0x6624e1*/
      v24 = &this->MissionTimer[3]; /*0x6624ea*/
      BYTE1(this->CurrentSpeed[1]) = v23; /*0x6624ed*/
      v25 = *(unsigned int *)&stru_A8E960.random[528]; /*0x6624f0*/
      v26 = (ObjectClass **)this->MissionTimer[3]; /*0x6624f6*/
      v27 = this->TrailerTimer[1]; /*0x6624f8*/
      if ( v26 == (ObjectClass **)-1 ) /*0x6624fe*/
        goto LABEL_37; /*0x6624fe*/
      if ( *(unsigned int *)&stru_A8E960.random[528] - (int)v26 >= v27 ) /*0x662506*/
        goto LABEL_38; /*0x662506*/
      v27 -= *(unsigned int *)&stru_A8E960.random[528] - (unsigned int)v26; /*0x662508*/
LABEL_37:
      if ( !v27 ) /*0x66250c*/
      {
LABEL_38:
        v28 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x66251c*/
        if ( v28 ) /*0x662523*/
        {
          v29 = (int *)(this->Owner + 156); /*0x662528*/
          v169[0] = *v29; /*0x66252f*/
          v169[1] = v29[1]; /*0x66253f*/
          v169[2] = v29[2]; /*0x662549*/
          v30 = AnimTypeClass::FindIndex(off_8399AC); /*0x662550*/
          AnimClass::ctor(v28, *((void **)dword_8B4154 + v30), v169, (void *)2, 1, (void *)0x600, (void *)0xFFFFFFF6, 0); /*0x662576*/
        }
        *v24 = *(unsigned int *)&stru_A8E960.random[528]; /*0x662587*/
        this->TrailerTimer[0] = v162; /*0x66258d*/
        this->TrailerTimer[1] = 24; /*0x662590*/
        v25 = *(unsigned int *)&stru_A8E960.random[528]; /*0x662593*/
      }
      v31 = (unsigned int *)(this->Owner + 156); /*0x66259c*/
      LODWORD(v155) = *v31; /*0x6625a4*/
      v32 = this->MissionTimer[2]; /*0x6625a8*/
      v33 = v31[1]; /*0x6625ab*/
      LODWORD(v151) = v32; /*0x6625ae*/
      HIDWORD(v155) = v33; /*0x6625b2*/
      v156 = v31[2]; /*0x6625bb*/
      if ( !v32 ) /*0x6625bf*/
        goto LABEL_47; /*0x6625bf*/
      v34 = this->MovingDestination[2]; /*0x6625c1*/
      v35 = this->MissionTimer[1]; /*0x6625c4*/
      if ( v34 != -1 ) /*0x6625ca*/
      {
        v36 = v25 - v34; /*0x6625cc*/
        if ( v36 >= v35 ) /*0x6625d2*/
          v35 = 0; /*0x6625d8*/
        else
          v35 -= v36; /*0x6625d4*/
      }
      LODWORD(v153) = v32 - v35; /*0x6625dc*/
      __asm /*0x6625e0*/
      {
        fild dword ptr [esp+0A8h+var_84+4]
        fidiv dword ptr [esp+0A8h+var_94+4]
        fcomp ds:dbl_7E1718
        fnstsw ax
      }
      if ( (_AX & 0x4000) == 0 ) /*0x6625f3*/
      {
        v156 += *((unsigned int *)v146 + 5); /*0x6626c0*/
        LOWORD(v148) = SLODWORD(v155) / 256; /*0x6626d4*/
        HIWORD(v148) = SHIDWORD(v155) / 256; /*0x6626eb*/
        LODWORD(v157) = v148; /*0x6626f4*/
        if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&dword_87F7E8, (__int16 *)&v157) ) /*0x6626fe*/
          (*(void (**)(int, double *))(*(unsigned int *)this->Owner + 436))(this->Owner, &v155); /*0x662715*/
      }
      else
      {
LABEL_47:
        _EDX = v146; /*0x6625f9*/
        __asm /*0x6625fd*/
        {
          fld dword ptr [edx+0Ch]
          fmul ds:dbl_7E2820
        }
        __asm { fstp dword ptr [esi+50h] }
        *(float *)this->RocketLocomotionClass_field_bool_4C = _ET1; /*0x66260b*/
        v40 = (unsigned short *)(*(int (**)(int, unsigned int *))(*(unsigned int *)this->Owner + 756))(this->Owner, &v164[1]); /*0x662613*/
        if ( *v40 == word_B04E18 && v40[1] == word_B04E1A ) /*0x662630*/
        {
          v41 = (unsigned int *)this->Owner; /*0x662632*/
          v168[0] = v41[39]; /*0x66264a*/
          v168[1] = v41[40]; /*0x662654*/
          v168[2] = v41[41]; /*0x66265e*/
          v42 = (*(int (**)(unsigned int *))(*v41 + 132))(v41); /*0x662667*/
          StartAudioControllerAt(*(unsigned int *)(v42 + 1324), v168, 0); /*0x662675*/
          GadgetGrid::InsertItem((GadgetGrid *)&g_CellClassManager, this->Owner); /*0x662683*/
        }
        v43 = v162; /*0x66268d*/
        *v24 = *(unsigned int *)&stru_A8E960.random[528]; /*0x662693*/
        this->TrailerTimer[0] = v43; /*0x662695*/
        this->TrailerTimer[1] = 0; /*0x662698*/
        this->TrailerTimer[2] = 3; /*0x66269b*/
      }
      goto LABEL_111; /*0x6626a2*/
    default:
      goto LABEL_111;
  }

}
} // namespace gamemd

// 0x663DB0
namespace gamemd {
AbstractClass * * E4Recv_663DB0::LaunchMultiplayerHost(unsigned char * a2, void *a2_2)
{
  uint8_t *v4; // eax
  Network *v5; // esi
  uint8_t v6; // dl
  uint8_t v7; // al
  NetworkID *v8; // eax
  int v9; // esi
  int v10; // edi
  int v11; // eax
  uint8_t v12; // [esp+4h] [ebp-584h] BYREF
  uint8_t v13; // [esp+5h] [ebp-583h]
  uint8_t v14; // [esp+6h] [ebp-582h]
  uint8_t v15; // [esp+7h] [ebp-581h]
  int v16; // [esp+8h] [ebp-580h]
  int Ticks; // [esp+10h] [ebp-578h]
  int v18; // [esp+14h] [ebp-574h]
  int v19; // [esp+18h] [ebp-570h]
  int v20; // [esp+1Ch] [ebp-56Ch] BYREF
  char v21[2]; // [esp+22h] [ebp-566h] BYREF
  char v22[4]; // [esp+24h] [ebp-564h] BYREF
  Waypoint v23; // [esp+28h] [ebp-560h] BYREF
  CHAR CommandLine[256]; // [esp+88h] [ebp-500h] BYREF
  char v25[1024]; // [esp+188h] [ebp-400h] BYREF

  Ticks = TimerGetTicks(); /*0x663dc6*/
  v19 = 0; /*0x663dca*/
  (&v23)->InitInvalid(); /*0x663dd2*/
  Debug::Log(); /*0x663ddc*/
  GetStartupInfoA((LPSTARTUPINFOA)&v23.u32_1C); /*0x663de9*/
  if ( !(*(int (**)(unsigned int *))(*dword_887628 + 72))(dword_887628) ) /*0x663df7*/
    return 0; /*0x663e07*/
  if ( a2_2 ) /*0x663e15*/
  {
    sprintf(CommandLine, "mphmd.exe %d.%d.%d.%d", *a2_2, a2_2[1], a2_2[2], a2_2[3]); /*0x663f0e*/
    if ( *dword_A8DA78 == -40 ) /*0x663f21*/
      goto LABEL_11; /*0x663f21*/
    ((Network *)((Network *)(*dword_A8DA78 + 40)))->CopyAddress(&v20, (int)&v12); /*0x663f31*/
    v6 = a2_2[2]; /*0x663f39*/
    v7 = *a2_2; /*0x663f3c*/
    v13 = a2_2[1]; /*0x663f3e*/
    v14 = v6; /*0x663f42*/
    v12 = v7; /*0x663f4a*/
    v15 = a2_2[3]; /*0x663f5e*/
    (&qword_A8DBB0)->Assign(&v20, (int)&v12, 0); /*0x663f62*/
    ((Network *)((Network *)&qword_A8DBB0))->SetPort(*(unsigned short *)(*dword_A8DA78 + 40)); /*0x663f78*/
    dword_A8DBBC = *(unsigned short *)(*dword_A8DA78 + 40); /*0x663f88*/
    v8 = (NetworkID *)(*dword_A8DA78 + 40); /*0x663f91*/
    qword_A8DBA4 = *v8; /*0x663f96*/
    dword_A8DBAC = *v8->q004.__pad_0; /*0x663fa8*/
    goto LABEL_10; /*0x663fa8*/
  }
  if ( !dword_A8DA84 ) /*0x663e22*/
  {
    v4 = (uint8_t *)(*(int (**)(unsigned int *, unsigned int))(*dword_887628 + 76))(dword_887628, 0); /*0x663e2d*/
    sprintf(CommandLine, "mphmd.exe %d.%d.%d.%d", *v4, v4->u8_1, v4->u32_2, v4->ptr_3); /*0x663e54*/
    goto LABEL_11; /*0x663e5c*/
  }
  v5 = (Network *)(*dword_A8DA78 + 40); /*0x663e69*/
  if ( *dword_A8DA78 != -40 ) /*0x663e6c*/
  {
    ((Network *)(v5))->CopyAddress(&v20, (int)&v12); /*0x663e7e*/
    sprintf(CommandLine, "mphmd.exe %d.%d.%d.%d", v12, v13, v14, v15); /*0x663ebb*/
    qword_A8DBB0 = *&v5->__pad_000; /*0x663ec5*/
    dword_A8DBB8 = v5->q008; /*0x663ed6*/
    dword_A8DBBC = 0; /*0x663edc*/
    LABEL_10:
    Network::FormatAddress((Network *)&qword_A8DBB0, 0); /*0x663fad*/
    Debug::Log(); /*0x663fbf*/
  }
  LABEL_11:
  if ( CreateProcessA( /*0x663fed*/
         ApplicationName,
         CommandLine,
         0,
         0,
         0,
         0x200u,
         0,
         0,
         (LPSTARTUPINFOA)&v23.u32_1C,
         (LPPROCESS_INFORMATION)&v23.u32_C) )
  {
    *((unsigned int *)a2_2 + 7) = *(unsigned int *)&v23.u32_C; /*0x664029*/
    Debug::Log(); /*0x66402c*/
    SetFocus(g_hWnd); /*0x66403b*/
    v9 = 1800; /*0x66404e*/
    Ticks = TimerGetTicks(); /*0x664053*/
    v18 = v16; /*0x664057*/
    v19 = 1800; /*0x66405b*/
    v10 = 0; /*0x66405f*/
    while ( 1 ) /*0x664067*/
    {
      if ( Ticks != -1 ) /*0x66406c*/
      {
        v11 = TimerGetTicks() - Ticks; /*0x664077*/
        if ( v11 >= v9 ) /*0x66407d*/
          return v10 != 0; /*0x66407d*/
        v9 -= v11; /*0x66407f*/
      }
      if ( !v9 ) /*0x664083*/
        break; /*0x664083*/
      Event::Dispatch(); /*0x664085*/
      if ( ((Network *)&unk_A8E9C0)->SendPacketThunk2((int)v25, (int)v22, (int)&v23, (int)v21) && v25[0] == 4 ) /*0x6640b7*/
      {
        v10 = 1; /*0x6640be*/
        Debug::Log(); /*0x6640c3*/
        *(a2_2 + 24) = 1; /*0x6640cb*/
        return v10 != 0; /*0x6640cb*/
      }
      v9 = v19; /*0x664063*/
    }
    return v10 != 0; /*0x6640cf*/
  }
  else
  {
    GetLastError(); /*0x663ffa*/
    Debug::Log(); /*0x664006*/
    return 0; /*0x664012*/
  }
}
{

  char result; // al
  unsigned char v3[340]; // [esp+4h] [ebp-154h] BYREF

  memset(v3, 0, 338); /*0x664764*/
  result = ((unsigned int *)this)[0]; /*0x66476c*/
  if ( result ) /*0x664772*/
  {
    v3[0] = 6; /*0x664780*/
    v3[1] = a2; /*0x664785*/
    Debug::Log("Sending TALK_PORT_BLITZ to router\n"); /*0x664789 G57w11: IDA push seq @ 0x664789*/
    return Network::SendPacket(&unk_A8E9C0, (int)v3, 338, 1u); /*0x6647a2*/
  }
  return result; /*0x66476f*/

}
}
{

  return dword_7F099C[4 * (int)this->AbstractClass];

} // namespace gamemd

// 0x660AE0
namespace gamemd {
int E4Recv_660AE0::sub_660AE0()
{
  return dword_7F09A0[4 * (int)this->vfptr]; /*0x660aeb*/
}
} // namespace gamemd

// 0x660AF0
namespace gamemd {
int E4Recv_660AF0::sub_660AF0()
{
  return dword_7F0998[4 * (int)this->vfptr]; /*0x660afb*/
}
} // namespace gamemd

// 0x6616B0
namespace gamemd {
unsigned int * E4Recv_6616B0::sub_6616B0()
{


  int v2 = 32; // ebp /*0x6616b8*/
  this->M4 = 0; /*0x6616bd*/
  this->M8 = 0; /*0x6616c0*/
  /* X11: vtable install elided (implicit via Straw virtuals 0x6616c3) */
  this->M12 = 0; /*0x6616c9*/
  this->M16 = 0; /*0x6616cc*/
  ObjectClass *v3 = &this->ptr_14; // ebx /*0x6616cf*/
  do /*0x6616df*/
  {
    sub_65C890(v3, 0, 0); /*0x6616d6*/
    v3 = (ObjectClass *)((char *)v3 + 8); /*0x6616db*/
    --v2; /*0x6616de*/
  }
  while ( v2 ); /*0x6616df*/
  this->M12 = 0; /*0x6616e1*/
  this->M16 = 0; /*0x6616e4*/
  *(unsigned int *)this->__pad_0 = &vt_RandomStraw; /*0x6616f1*/
  memset(&this->ptr_14, 0, 0x100u); /*0x6616f7*/
  return this->vfptr; /*0x6616fb*/

}
} // namespace gamemd

// 0x661960
namespace gamemd {
int E4Recv_661960::sub_661960(short a2)
{

  int result; // eax
  SHA1 v11; // [esp+28h] [ebp-74h] BYREF

  int v9; // [esp+10h] [ebp-8Ch]
  v9 = 16; /*0x66196c*/
  do /*0x661a48*/
  {
    if ( (a2 & 1) != 0 ) /*0x661995*/
    {
      unsigned char *v3; // eax
      v3 = &this->M12 + (unsigned __int8)((int)this->M12 / 8); /*0x661991*/
      *v3 ^= 1 << ((int)this->M12 & 7); /*0x66199e*/
    }
    char *v4; // eax
    v4 = (char *)this->M12 + 1; /*0x6619a4*/
    this->M12 = v4; /*0x6619a6*/
    if ( v4 == 2048 ) /*0x6619ae*/
    {
      unsigned int v5 = 0; // esi /*0x6619b4*/
      v11.state = 0; /*0x6619b9*/
      int v17; // [esp+54h] [ebp-48h]
      v17 = 0; /*0x6619be*/
      int v18; // [esp+58h] [ebp-44h]
      v18 = 0; /*0x6619c2*/
      int v12; // [esp+40h] [ebp-5Ch]
      v12 = 1732584193; /*0x6619c6*/
      int v13; // [esp+44h] [ebp-58h]
      v13 = -271733879; /*0x6619ce*/
      int v14; // [esp+48h] [ebp-54h]
      v14 = -1732584194; /*0x6619d6*/
      int v15; // [esp+4Ch] [ebp-50h]
      v15 = 271733878; /*0x6619de*/
      int v16; // [esp+50h] [ebp-4Ch]
      v16 = -1009589776; /*0x6619e6*/
      int *p_abstractFlags; // ebp
      p_abstractFlags = &this->?; /*0x6619ee*/
      do /*0x661a35*/
      {
        SHA1::Process(&v11, (int)&this->?, 256); /*0x6619fa*/
        char Src[20]; // [esp+14h] [ebp-88h] BYREF
        SHA1::Compute(&v11, Src); /*0x661a08*/
        size_t v7 = 256 - v5; // eax /*0x661a12*/
        if ( 256 - v5 > 0x14 ) /*0x661a17*/
          v7 = 20; /*0x661a19*/
        memcpy(p_abstractFlags, Src, v7); /*0x661a25*/
        ++v5; /*0x661a2d*/
        p_abstractFlags = (int *)((char *)p_abstractFlags + 1); /*0x661a2e*/
      }
      while ( v5 < 0x100 ); /*0x661a35*/
    }
    a2 >>= 1; /*0x661a3b*/
    result = --v9; /*0x661a43*/
  }
  while ( v9 ); /*0x661a48*/
  return result; /*0x661a4e*/

}
} // namespace gamemd

// 0x661A60
namespace gamemd {
int E4Recv_661A60::sub_661A60(int a2)
{

  bool v8; // zf
  int result; // eax
  SHA1 v12; // [esp+28h] [ebp-74h] BYREF

  int v10; // [esp+10h] [ebp-8Ch]
  v10 = 32; /*0x661a6c*/
  do /*0x661b50*/
  {
    if ( (a2 & 1) != 0 ) /*0x661a95*/
    {
      unsigned char *v3; // eax
      v3 = &this->M12 + (unsigned __int8)((int)this->M12 / 8); /*0x661a91*/
      *v3 ^= 1 << ((int)this->M12 & 7); /*0x661a9e*/
    }
    char *v4; // eax
    v4 = (char *)this->M12 + 1; /*0x661aa4*/
    this->M12 = v4; /*0x661aa6*/
    if ( v4 == 2048 ) /*0x661aae*/
    {
      unsigned int v5 = 0; // esi /*0x661ab4*/
      v12.state = 0; /*0x661ab9*/
      int v18; // [esp+54h] [ebp-48h]
      v18 = 0; /*0x661abe*/
      int v19; // [esp+58h] [ebp-44h]
      v19 = 0; /*0x661ac2*/
      int v13; // [esp+40h] [ebp-5Ch]
      v13 = 1732584193; /*0x661ac6*/
      int v14; // [esp+44h] [ebp-58h]
      v14 = -271733879; /*0x661ace*/
      int v15; // [esp+48h] [ebp-54h]
      v15 = -1732584194; /*0x661ad6*/
      int v16; // [esp+4Ch] [ebp-50h]
      v16 = 271733878; /*0x661ade*/
      int v17; // [esp+50h] [ebp-4Ch]
      v17 = -1009589776; /*0x661ae6*/
      int *p_abstractFlags; // ebp
      p_abstractFlags = &this->?; /*0x661aee*/
      do /*0x661b35*/
      {
        SHA1::Process(&v12, (int)&this->?, 256); /*0x661afa*/
        char Src[20]; // [esp+14h] [ebp-88h] BYREF
        SHA1::Compute(&v12, Src); /*0x661b08*/
        size_t v7 = 256 - v5; // eax /*0x661b12*/
        if ( 256 - v5 > 0x14 ) /*0x661b17*/
          v7 = 20; /*0x661b19*/
        memcpy(p_abstractFlags, Src, v7); /*0x661b25*/
        ++v5; /*0x661b2d*/
        p_abstractFlags = (int *)((char *)p_abstractFlags + 1); /*0x661b2e*/
      }
      while ( v5 < 0x100 ); /*0x661b35*/
    }
    result = v10 - 1; /*0x661b44*/
    v8 = v10 == 1; /*0x661b44*/
    a2 >>= 1; /*0x661b45*/
    --v10; /*0x661b4c*/
  }
  while ( !v8 ); /*0x661b50*/
  return result; /*0x661b56*/

}
} // namespace gamemd

// 0x661B70
namespace gamemd {
void * E4Recv_661B70::sub_661B70()
{

  void *result; // eax
  SHA1 v7; // [esp+20h] [ebp-74h] BYREF

  int *p_abstractFlags; // ebx
  p_abstractFlags = &this->?; /*0x661b7a*/
  v7.state = 0; /*0x661b7e*/
  int v13; // [esp+4Ch] [ebp-48h]
  v13 = 0; /*0x661b82*/
  int v14; // [esp+50h] [ebp-44h]
  v14 = 0; /*0x661b86*/
  int v8; // [esp+38h] [ebp-5Ch]
  v8 = 1732584193; /*0x661b8a*/
  int v9; // [esp+3Ch] [ebp-58h]
  v9 = -271733879; /*0x661b92*/
  int v10; // [esp+40h] [ebp-54h]
  v10 = -1732584194; /*0x661b9a*/
  int v11; // [esp+44h] [ebp-50h]
  v11 = 271733878; /*0x661ba2*/
  int v12; // [esp+48h] [ebp-4Ch]
  v12 = -1009589776; /*0x661baa*/
  unsigned int v2 = 0; // esi /*0x661bb2*/
  int *v3; // edi
  v3 = &this->?; /*0x661bb4*/
  do /*0x661bfb*/
  {
    SHA1::Process(&v7, (int)p_abstractFlags, 256); /*0x661bc0*/
    char Src[20]; // [esp+Ch] [ebp-88h] BYREF
    SHA1::Compute(&v7, Src); /*0x661bce*/
    size_t v4 = 256 - v2; // eax /*0x661bd8*/
    if ( 256 - v2 > 0x14 ) /*0x661bdd*/
      v4 = 20; /*0x661bdf*/
    result = memcpy(v3, Src, v4); /*0x661beb*/
    ++v2; /*0x661bf3*/
    v3 = (int *)((char *)v3 + 1); /*0x661bf4*/
  }
  while ( v2 < 0x100 ); /*0x661bfb*/
  return result; /*0x661bfd*/

}
} // namespace gamemd

// 0x661CB0
namespace gamemd {
void sub_661CB0()
{

  long double v0; // st7
  v0 = pow(256.0, 2.0); /*0x661cbc*/
  dbl_B04E20 = Math::Sqrt(v0 + v0); /*0x661cce*/
}
} // namespace gamemd

// 0x661CE0
namespace gamemd {
void sub_661CE0()
{
  dbl_B04E70 = dbl_B04E20 / 60.0; /*0x661cec*/
}
} // namespace gamemd

// 0x661D00
namespace gamemd {
void sub_661D00()
{
  dbl_B04E58 = 1.0 / dbl_B04E70; /*0x661d0c*/
}
} // namespace gamemd

// 0x661D20
namespace gamemd {
void sub_661D20()
{
  dbl_B04E50 = 0.0174532925199433 * 45.0; /*0x661d2c*/
}
} // namespace gamemd

// 0x661D40
namespace gamemd {
void sub_661D40()
{
  dbl_B04E28 = 0.0174532925199433 * 60.0; /*0x661d4c*/
}
} // namespace gamemd

// 0x661D60
namespace gamemd {
void sub_661D60()
{
  dbl_B04E00 = 0.0174532925199433 * 90.0; /*0x661d6c*/
}
} // namespace gamemd

// 0x661DC0
namespace gamemd {
void sub_661DC0()
{
  dbl_B04E30 = Math::ArcTan((double)dword_B04E78 * 0.00390625); /*0x661dd7*/
}
} // namespace gamemd

// 0x661DF0
namespace gamemd {
void sub_661DF0()
{
  dbl_B04E48 = Math::ArcTan((double)(2 * dword_B04E78) / dbl_B04E20); /*0x661e12*/
}
} // namespace gamemd

// 0x661E20
namespace gamemd {
long long sub_661E20()
{

  int64_t result; // rax
  result = Math::RoundToInt((double)(4 * dword_B04E78) + 0.5); /*0x661e3b*/
  dword_B04E6C = result; /*0x661e40*/
  return result; /*0x661e46*/
}
} // namespace gamemd

// 0x661E50
namespace gamemd {
int sub_661E50()
{
  word_B04E18 = 0; /*0x661e52*/
  word_B04E1A = 0; /*0x661e58*/
  return 0; /*0x661e5e*/
}
} // namespace gamemd

// 0x661E60
namespace gamemd {
int sub_661E60()
{
  dword_B04E38 = 0; /*0x661e62*/
  dword_B04E3C = 0; /*0x661e67*/
  dword_B04E40 = 0; /*0x661e6c*/
  return 0; /*0x661e71*/
}
} // namespace gamemd

// 0x661E80
namespace gamemd {
int sub_661E80()
{
  dword_B04E68 = 0; /*0x661e85*/
  dword_B04E60 = 128; /*0x661e8f*/
  dword_B04E64 = 128; /*0x661e94*/
  return 128; /*0x661e99*/
}
} // namespace gamemd

// 0x661EA0
namespace gamemd {
int sub_661EA0()
{
  dword_B04E08 = 0; /*0x661ea2*/
  dword_B04E0C = 0; /*0x661ea7*/
  dword_B04E10 = 0; /*0x661eac*/
  dword_B04E14 = 0; /*0x661eb1*/
  return 0; /*0x661eb6*/
}
} // namespace gamemd

// 0x661F30
namespace gamemd {
void E4Recv_661F30::sub_661F30()
{
  *(unsigned int *)this->0 = &vt_RocketLocomotionClass; /*0x661f30*/
  *&this->u32_14 = &vt_RocketLocomotionClass; /*0x661f36*/
  LocomotionClass::Construct(); /*0x661f3d*/
}
} // namespace gamemd

// 0x662240
namespace gamemd {
double E4Recv_662240::sub_662240()
{


  int v1; // eax
  v1 = this->q018 - *((unsigned int *)this->q018 + 39); /*0x66225b*/
  int v2; // edx
  v2 = this->M32 - *((unsigned int *)this->M32 + 40); /*0x662263*/
  char *v8; // [esp+1Ch] [ebp-4h]
  v8 = (char *)this->M32 - *((unsigned int *)this->M32 + 41); /*0x662267*/
  int v7; // [esp+10h] [ebp-10h]
  v7 = v2 * v2 + v1 * v1; /*0x662277*/
  __asm /*0x66227b*/
  {
    fild [esp+20h+var_10]
    fstp [esp+20h+var_20]; double
  }
  double v5; // [esp+0h] [ebp-20h]
  Math::Sqrt(v5); /*0x662282*/
  __asm { fcom ds:dbl_7E2800 } /*0x662287*/
  __asm { fnstsw ax }
  if ( (_AX & 0x4100) != 0 ) /*0x662297*/
  {
    __asm /*0x6622b3*/
    {
      fstp st
      fld ds:dbl_7F0C10
    }
  }
  else
  {
    __asm { fild [esp+10h+var_4] } /*0x662299*/
    __asm
    {
      fdiv st, st(1)
      fstp [esp+18h+var_18]; double
      fstp st
    }
    double v6; // [esp+8h] [ebp-18h]
    Math::ArcTan(v6); /*0x6622a7*/
  }
  double result; // st7
  return result; /*0x6622af*/

}
} // namespace gamemd

// 0x6633C0
namespace gamemd {
void nullsub_224(int a1)
{
  ; /*0x6633c0*/
}
} // namespace gamemd

// 0x6635F0
namespace gamemd {
void sub_6635F0()
{

  long double v0; // st7
  v0 = pow(256.0, 2.0); /*0x6635fc*/
  dbl_B052A0 = Math::Sqrt(v0 + v0); /*0x66360e*/
}
} // namespace gamemd

// 0x663620
namespace gamemd {
void sub_663620()
{
  dbl_B05328 = dbl_B052A0 / 60.0; /*0x66362c*/
}
} // namespace gamemd

// 0x663640
namespace gamemd {
void sub_663640()
{
  dbl_B05310 = 1.0 / dbl_B05328; /*0x66364c*/
}
} // namespace gamemd

// 0x663660
namespace gamemd {
void sub_663660()
{
  dbl_B05308 = 0.0174532925199433 * 45.0; /*0x66366c*/
}
} // namespace gamemd

// 0x663680
namespace gamemd {
void sub_663680()
{
  dbl_B052B0 = 0.0174532925199433 * 60.0; /*0x66368c*/
}
} // namespace gamemd

// 0x6636A0
namespace gamemd {
void sub_6636A0()
{
  dbl_B04E80 = 0.0174532925199433 * 90.0; /*0x6636ac*/
}
} // namespace gamemd

// 0x6636C0
namespace gamemd {
long long sub_6636C0()
{

  double v0; // st7
  v0 = Math::Sin(dbl_B04E80 - dbl_B052B0); /*0x6636d2*/
  int64_t result; // rax
  result = Math::RoundToInt(v0 * dbl_B052A0 * 0.5); /*0x6636e6*/
  dword_B05330 = result; /*0x6636eb*/
  return result; /*0x6636f0*/
}
} // namespace gamemd

// 0x663700
namespace gamemd {
void sub_663700()
{
  dbl_B052B8 = Math::ArcTan((double)dword_B05330 * 0.00390625); /*0x663717*/
}
} // namespace gamemd

// 0x663730
namespace gamemd {
void sub_663730()
{
  dbl_B05300 = Math::ArcTan((double)(2 * dword_B05330) / dbl_B052A0); /*0x663752*/
}
} // namespace gamemd

// 0x663760
namespace gamemd {
long long sub_663760()
{

  int64_t result; // rax
  result = Math::RoundToInt((double)(4 * dword_B05330) + 0.5); /*0x66377b*/
  dword_B05324 = result; /*0x663780*/
  return result; /*0x663786*/
}
} // namespace gamemd

// 0x663790
namespace gamemd {
int sub_663790()
{
  word_B04E98 = 0; /*0x663792*/
  word_B04E9A = 0; /*0x663798*/
  return 0; /*0x66379e*/
}
} // namespace gamemd

// 0x6637A0
namespace gamemd {
int sub_6637A0()
{
  unk_B052F0 = 0; /*0x6637a2*/
  unk_B052F4 = 0; /*0x6637a7*/
  dword_B052F8 = 0; /*0x6637ac*/
  return 0; /*0x6637b1*/
}
} // namespace gamemd

// 0x6637C0
namespace gamemd {
int sub_6637C0()
{
  dword_B05320 = 0; /*0x6637c5*/
  dword_B05318 = 128; /*0x6637cf*/
  dword_B0531C = 128; /*0x6637d4*/
  return 128; /*0x6637d9*/
}
} // namespace gamemd

// 0x6637E0
namespace gamemd {
int sub_6637E0()
{
  dword_B04E88 = 0; /*0x6637e2*/
  dword_B04E8C = 0; /*0x6637e7*/
  dword_B04E90 = 0; /*0x6637ec*/
  dword_B04E94 = 0; /*0x6637f1*/
  return 0; /*0x6637f6*/
}
} // namespace gamemd

// 0x663800
namespace gamemd {
int sub_663800()
{
  unk_B052D4 = 0; /*0x663807*/
  unk_B052D8 = 0; /*0x66380c*/
  unk_B052DC = 1; /*0x663811*/
  unk_B052DD = 0; /*0x663818*/
  unk_B052D0 = (int)&vt_DynamicVectorClass; /*0x66381d*/
  unk_B052E4 = 10; /*0x663827*/
  unk_B052E0 = 0; /*0x663831*/
  unk_B052E8 = 0; /*0x663836*/
  unk_B052EC = 0; /*0x66383b*/
  return atexit(sub_663850); /*0x663846*/
}
} // namespace gamemd

// 0x663850
namespace gamemd {
void sub_663850()
{
  bool v0; // zf

  if ( unk_B052E0 ) /*0x66385a*/
  {
    do /*0x66389d*/
    {
      operator delete((void *)(*(void **)unk_B052D4)); /*0x663864*/
      v0 = unk_B052E0 == 0; /*0x663872*/
      if ( unk_B052E0 > 0 ) /*0x663874*/
      {
        int v1 = 0; // eax /*0x663877*/
        v0 = unk_B052E0-- == 1; /*0x663879*/
        if ( unk_B052E0 > 0 ) /*0x663881*/
        {
          do /*0x663899*/
          {
            ++v1; /*0x663889*/
            *((unsigned int *)unk_B052D4 + v1 - 1) = *((unsigned int *)unk_B052D4 + v1); /*0x66388d*/
          }
          while ( v1 < unk_B052E0 ); /*0x663899*/
          v0 = unk_B052E0 == 0; /*0x66389b*/
        }
      }
    }
    while ( !v0 ); /*0x66389d*/
  }
  unk_B052D0 = (int)&vt_VectorClass; /*0x6638a4*/
  if ( unk_B052D4 && unk_B052DD ) /*0x6638b8*/
  {
    operator delete((void *)(unk_B052D4)); /*0x6638bb*/
    unk_B052D4 = 0; /*0x6638c3*/
  }
  unk_B052DD = 0; /*0x6638c9*/
  unk_B052D8 = 0; /*0x6638cf*/
}
} // namespace gamemd

// 0x6638E0
namespace gamemd {
unsigned int * E4Recv_6638E0::sub_6638E0()
{

  this->M4 = 0; /*0x6638e4*/
  this->M8 = 0; /*0x6638e7*/
  LOBYTE(this->M12) = 1; /*0x6638ea*/
  BYTE1(this->M13) = 0; /*0x6638ee*/
  /* X11: vtable install elided (base-interface slot, RHS vt_DynamicVectorClass) */  /*0x6638f1*/
  this->M20 = 10; /*0x6638f7*/
  this->M16 = 0; /*0x6638fe*/
  LOBYTE(this->q018) = 0; /*0x663901*/
  this->M28 = 0; /*0x663904*/
  return &this->AbstractClass; /*0x663907*/

}
} // namespace gamemd

// 0x663960
namespace gamemd {
void E4Recv_663960::sub_663960()
{


  while ( this->Count ) /*0x663966*/
  {
    __3_YAXPAX_Z(*(void **)this->Items); /*0x663971*/
    int Count; // eax
    Count = this->Count; /*0x663976*/
    if ( Count > 0 ) /*0x66397e*/
    {
      int v3 = Count - 1; // ecx /*0x663980*/
      int v4 = 0; // eax /*0x663983*/
      for ( this->Count = v3; v4 < this->Count; *(unsigned int *)(this->Items + 4 * v4 - 4) = *(unsigned int *)(this->Items + 4 * v4) ) /*0x66398a*/
        ++v4; /*0x66398f*/
    }
  }
  void *Items; // eax
  Items = (void *)this->Items; /*0x6639a3*/
  /* X11: vtable install elided (implicit via VectorClass virtuals 0x6639a6) */
  if ( Items && this->IsAllocated[0] ) /*0x6639b0*/
  {
    __3_YAXPAX_Z(Items); /*0x6639b6*/
    this->Items = 0; /*0x6639be*/
  }
  this->IsAllocated[0] = 0; /*0x6639c1*/
  this->Capacity = 0; /*0x6639c4*/

}
} // namespace gamemd

// 0x663CD0
namespace gamemd {
char E4Recv_663CD0::sub_663CD0(unsigned char * a2)
{


  Network *v2; // edi
  v2 = (Network *)a2; /*0x663cd5*/
  if ( !a2 ) /*0x663cdd*/
    return -1; /*0x663ce0*/
  if ( Network::IsBroadcastAddr((Network *)a2) ) /*0x663ceb*/
    return -1; /*0x663cf5*/
  char v5 = 0; // bl /*0x663d0c*/
  int v10; // [esp+8h] [ebp-8h] BYREF
  Network::CopyAddress(v2, &a2, (int)&v10); /*0x663d0e*/
  int uniqueId = this->M16; // ecx /*0x663d13*/
  int v7 = 0; // eax /*0x663d16*/
  if ( uniqueId > 0 ) /*0x663d1a*/
  {
    unsigned int *vtable1 = this->M4; // esi /*0x663d1c*/
    unsigned int *i; // edx
    for ( i = vtable1; v10 != *(unsigned int *)(*i + 33); ++i ) /*0x663d23*/
    {
      if ( ++v7 >= uniqueId ) /*0x663d32*/
        return 0; /*0x663d3d*/
    }
    return *(unsigned char *)(vtable1[v7] + 40); /*0x663d43*/
  }
  return v5; /*0x663cdf*/

}
} // namespace gamemd

// 0x664380
namespace gamemd {
void nullsub_33()
{
  ; /*0x664380*/
}
} // namespace gamemd

// 0x664B10
namespace gamemd {
void sub_664B10()
{

  long double v0; // st7
  v0 = pow(256.0, 2.0); /*0x664b1c*/
  dbl_B05358 = Math::Sqrt(v0 + v0); /*0x664b2e*/
}
} // namespace gamemd

// 0x664B40
namespace gamemd {
void sub_664B40()
{
  dbl_B053A8 = dbl_B05358 / 60.0; /*0x664b4c*/
}
} // namespace gamemd

// 0x664B60
namespace gamemd {
void sub_664B60()
{
  dbl_B05390 = 1.0 / dbl_B053A8; /*0x664b6c*/
}
} // namespace gamemd

// 0x664B80
namespace gamemd {
void sub_664B80()
{
  dbl_B05388 = 0.0174532925199433 * 45.0; /*0x664b8c*/
}
} // namespace gamemd

// 0x664BA0
namespace gamemd {
void sub_664BA0()
{
  dbl_B05360 = 0.0174532925199433 * 60.0; /*0x664bac*/
}
} // namespace gamemd

// 0x664BC0
namespace gamemd {
void sub_664BC0()
{
  dbl_B05338 = 0.0174532925199433 * 90.0; /*0x664bcc*/
}
} // namespace gamemd

// 0x664BE0
namespace gamemd {
long long sub_664BE0()
{

  double v0; // st7
  v0 = Math::Sin(dbl_B05338 - dbl_B05360); /*0x664bf2*/
  int64_t result; // rax
  result = Math::RoundToInt(v0 * dbl_B05358 * 0.5); /*0x664c06*/
  dword_B053B0 = result; /*0x664c0b*/
  return result; /*0x664c10*/
}
} // namespace gamemd

// 0x664C20
namespace gamemd {
void sub_664C20()
{
  dbl_B05368 = Math::ArcTan((double)dword_B053B0 * 0.00390625); /*0x664c37*/
}
} // namespace gamemd

// 0x664C50
namespace gamemd {
void sub_664C50()
{
  dbl_B05380 = Math::ArcTan((double)(2 * dword_B053B0) / dbl_B05358); /*0x664c72*/
}
} // namespace gamemd

// 0x664C80
namespace gamemd {
long long sub_664C80()
{

  int64_t result; // rax
  result = Math::RoundToInt((double)(4 * dword_B053B0) + 0.5); /*0x664c9b*/
  dword_B053A4 = result; /*0x664ca0*/
  return result; /*0x664ca6*/
}
} // namespace gamemd

// 0x664CB0
namespace gamemd {
int sub_664CB0()
{
  word_B05350 = 0; /*0x664cb2*/
  word_B05352 = 0; /*0x664cb8*/
  return 0; /*0x664cbe*/
}
} // namespace gamemd

// 0x664CC0
namespace gamemd {
int sub_664CC0()
{
  dword_B05370 = 0; /*0x664cc2*/
  dword_B05374 = 0; /*0x664cc7*/
  dword_B05378 = 0; /*0x664ccc*/
  return 0; /*0x664cd1*/
}
} // namespace gamemd

// 0x664CE0
namespace gamemd {
int sub_664CE0()
{
  dword_B053A0 = 0; /*0x664ce5*/
  dword_B05398 = 128; /*0x664cef*/
  dword_B0539C = 128; /*0x664cf4*/
  return 128; /*0x664cf9*/
}
} // namespace gamemd

// 0x664D00
namespace gamemd {
int sub_664D00()
{
  dword_B05340 = 0; /*0x664d02*/
  dword_B05344 = 0; /*0x664d07*/
  dword_B05348 = 0; /*0x664d0c*/
  dword_B0534C = 0; /*0x664d11*/
  return 0; /*0x664d16*/
}
} // namespace gamemd
