// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
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

// 0x6613A0
namespace gamemd {
int Color_ComputeSaturation(unsigned int a1, int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall Color_ComputeSaturation(unsigned int a1, int a2, int a3)
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
  LOBYTE(v15) = 0; /*0x6613e5*/
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
  *(_WORD *)a3 = v14; /*0x6614d1*/
  *(_BYTE *)(a3 + 2) = v6; /*0x6614d7*/
  return a3; /*0x6614d4*/
}
}
} // namespace gamemd

// 0x6615D0
namespace gamemd {
unsigned char * sub_6615D0(char * a1, unsigned char * a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_BYTE *__stdcall sub_6615D0(char *a1, _BYTE *a2, int a3)
{
  int v4; // ebx
  _BYTE *v5; // edi
  char v6; // al
  unsigned int v7; // eax
  _BYTE *v9; // [esp+8h] [ebp-4h]

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
      v7 = (unsigned __int8)*a1++; /*0x6615f3*/
      --v4; /*0x6615f8*/
      if ( v7 ) /*0x6615fb*/
      {
        memset(v5, 0, v7); /*0x661606*/
        v5 = &v9[v7]; /*0x661613*/
LABEL_6:
        v9 = v5; /*0x66161a*/
      }
      if ( v4 <= 0 ) /*0x661620*/
        return (_BYTE *)(v5 - a2); /*0x661620*/
    }
    *v5++ = v6; /*0x661617*/
    goto LABEL_6; /*0x661619*/
  }
  return (_BYTE *)(v5 - a2); /*0x66162a*/
}
}
} // namespace gamemd

// 0x661640
namespace gamemd {
unsigned char * sub_661640(unsigned short * a1, unsigned char * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_BYTE *__stdcall sub_661640(unsigned __int16 *a1, _BYTE *a2)
{
  _BYTE *v2; // edi
  int v3; // edx
  char *v4; // esi
  char v5; // al
  unsigned int v6; // ebx
  _BYTE *v8; // [esp+Ch] [ebp+4h]

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
      v6 = (unsigned __int8)*v4++; /*0x661669*/
      --v3; /*0x66166c*/
      if ( v6 ) /*0x66166f*/
      {
        memset(v2, 0, v6); /*0x66167a*/
        v2 = &v8[v6]; /*0x661687*/
LABEL_6:
        v8 = v2; /*0x66168e*/
      }
      if ( v3 <= 0 ) /*0x661694*/
        return (_BYTE *)(v2 - a2); /*0x661694*/
    }
    *v2++ = v5; /*0x66168b*/
    goto LABEL_6; /*0x66168d*/
  }
  return (_BYTE *)(v2 - a2); /*0x66169e*/
}
}
} // namespace gamemd

// 0x6622C0
namespace gamemd {
char UpdateBullets(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __stdcall UpdateBullets(int a1)
{
  ObjectClass *v1; // ecx
  int v2; // edx
  ObjectClass *v3; // eax
  int v4; // edi
  int v5; // eax
  bool v6; // al
  IUnknown *v7; // edx
  int v8; // eax
  AnimClass *v9; // ebx
  AnimClass *v11; // eax
  int edx19; // edx
  IUnknown *v13; // ecx
  int eax24; // eax
  int v14; // ecx
  int v15; // edx
  int v16; // eax
  int v17; // eax
  int objectTypeFlags; // ecx
  bool v19; // al
  IUnknown *v21; // ebx
  IUnknown *v22; // edi
  int edx34; // edx
  int v23; // eax
  AnimClass *v25; // edi
  AnimClass *v27; // eax
  int v26; // ecx
  int edx41; // edx
  int v28; // eax
  IUnknown *v31; // ecx
  int v30; // eax
  int edi43; // edi
  _WORD *v32; // eax
  ObjectClass *v35; // ecx
  int v34; // eax
  int edx50; // edx
  int v36; // eax
  bool v37; // al
  IUnknown *v40; // edx
  int v39; // eax
  _WORD *eax63; // eax
  AnimClass *v43; // edi
  AnimClass *v45; // eax
  ObjectClass *v46; // ecx
  int v44; // eax
  double st7_69; // st7
  double st6_69; // st6
  double v47; // st5
  IUnknown *v51; // ecx
  int v49; // eax
  int v50; // edi
  int ebx82; // ebx
  _DWORD *v52; // eax
  int v53; // ecx
  BuildingTypeClass *v57; // eax
  double v55; // st7
  _DWORD *ebx90; // ebx
  ObjectClass *v61; // ecx
  int v59; // eax
  _DWORD *v60; // edi
  int *eax91a; // eax
  int v62; // ecx
  int v63; // eax
  double v64; // st7
  double v65; // st7
  int v66; // ecx
  int v67; // edx
  int v68; // eax
  int v69; // ecx
  double v70; // st7
  double v71; // st7
  double v72; // st7
  ObjectClass *v75; // ecx
  int v74; // ebx
  ObjectClass *v77; // eax
  int v76; // edx
  int eax98; // eax
  int v78; // ecx
  int v79; // edx
  ObjectClass *v82; // eax
  double v81; // st7
  int *eax100; // eax
  int v83; // ecx
  double v84; // st7
  int v85; // ecx
  _DWORD *v86; // ebx
  BuildingTypeClass *v88; // eax
  int ecx102; // ecx
  double v89; // st7
  double v90; // st7
  double v91; // st7
  double v92; // st6
  double v93; // st7
  IUnknown *v94; // edx
  int v95; // eax
  AnimClass *v96; // edi
  AnimClass *v98; // eax
  int edx118; // edx
  int v99; // eax
  double aP0; // st7
  int v101; // edx
  ObjectClass *v103; // eax
  double st7_120a; // st7
  double v104; // st7
  double v105; // st7
  int v106; // ebx
  double v107; // st7
  VectorClass **v108; // eax
  ObjectClass *v111; // ecx
  VectorClass *v110; // eax
  __int128 _8; // [esp+8h] [ebp-B8h]
  double aP0_4; // [esp+10h] [ebp-B0h]
  ObjectClass *v113; // [esp+28h] [ebp-98h]
  ObjectClass *v115; // [esp+28h] [ebp-98h]
  ObjectClass *v116; // [esp+28h] [ebp-98h]
  ObjectClass *desiredFacing; // [esp+2Ch] [ebp-94h] BYREF
  double desiredFacing_4; // [esp+30h] [ebp-90h]
  ObjectClass *v119; // [esp+38h] [ebp-88h]
  double var84_4; // [esp+40h] [ebp-80h]
  IUnknown *v121; // [esp+48h] [ebp-78h]
  double var74_4; // [esp+50h] [ebp-70h] BYREF
  ObjectClass *v123; // [esp+58h] [ebp-68h]
  double var64_4; // [esp+60h] [ebp-60h] BYREF
  CoordStruct v124; // [esp+68h] [ebp-58h] BYREF
  int v125; // [esp+74h] [ebp-4Ch] BYREF
  int v126; // [esp+78h] [ebp-48h]
  int v127; // [esp+7Ch] [ebp-44h]
  IUnknown *v128[3]; // [esp+84h] [ebp-3Ch] BYREF
  CoordStruct v129; // [esp+90h] [ebp-30h] BYREF
  int v130[3]; // [esp+9Ch] [ebp-24h] BYREF
  CoordStruct v131; // [esp+A8h] [ebp-18h] BYREF
  CoordStruct aP2; // [esp+B4h] [ebp-Ch] BYREF

  v1 = *(ObjectClass **)(a1 + 8);
  v2 = *(_DWORD *)&v1[10].__pad_0[12];
  if ( v2 == *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 1248) )
  {
    v3 = (ObjectClass *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 1200);
LABEL_6:
    v113 = v3;
    v4 = (int)v3;
    goto LABEL_7;
  }
  if ( v2 != *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 1352) )
  {
    v3 = (ObjectClass *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 1252);
    goto LABEL_6;
  }
  v4 = *(_DWORD *)&stru_87C374.__pad_579C[22224] + 1304;
  v113 = (ObjectClass *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 1304);
LABEL_7:
  switch ( *(_DWORD *)(a1 + 60) )
  {
    case 1:
      *(_DWORD *)(a1 + 68) = 0;
      *(_DWORD *)(a1 + 72) = 0;
      v5 = *(_DWORD *)(*(_DWORD *)(a1 + 8) + 724);
      v6 = v5 && VeterancyStruct::IsElite((float *)(v5 + 336));
      *(_BYTE *)(a1 + 77) = v6;
      if ( *(_DWORD *)(v4 + 48) != *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 1352) )
      {
        *(_BYTE *)(a1 + 76) = 1;
LABEL_23:
        LODWORD(var84_4) = *(_DWORD *)(a1 + 44);
        if ( !LODWORD(var84_4) )
          goto LABEL_29;
        v13 = *(IUnknown **)(a1 + 32);
        eax24 = *(_DWORD *)(a1 + 40);
        if ( v13 != (IUnknown *)-1 )
        {
          v14 = *(_DWORD *)&HouseClass_Player.__pad_5568[23248] - (_DWORD)v13;
          if ( v14 >= eax24 )
            eax24 = 0;
          else
            eax24 -= v14;
        }
        if ( (double)(LODWORD(var84_4) - eax24) / (double)SLODWORD(var84_4) == 1.0 )
        {
LABEL_29:
          v15 = v126;
          v16 = -(*(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 1352) != *(_DWORD *)(v4 + 48));
          LOBYTE(v16) = v16 & 0xFC;
          *(_DWORD *)(a1 + 60) = v16 + 6;
          v17 = *(_DWORD *)(v4 + 4);
          *(_DWORD *)(a1 + 32) = *(_DWORD *)&HouseClass_Player.__pad_5568[23248];
          *(_DWORD *)(a1 + 36) = v15;
          *(_DWORD *)(a1 + 40) = v17;
          *(_DWORD *)(a1 + 44) = v17;
        }
        goto LABEL_111;
      }
      v7 = *(IUnknown **)(a1 + 48);
      v8 = *(_DWORD *)(a1 + 56);
      if ( v7 == (IUnknown *)-1 )
        goto LABEL_16;
      if ( *(_DWORD *)&HouseClass_Player.__pad_5568[23248] - (int)v7 >= v8 )
        goto LABEL_17;
      v8 -= *(_DWORD *)&HouseClass_Player.__pad_5568[23248] - (_DWORD)v7;
LABEL_16:
      if ( !v8 )
      {
LABEL_17:
        v9 = (AnimClass *)__2_YAPAXI_Z(0x1C8u);
        if ( v9 )
        {
          aP2 = *(CoordStruct *)(*(_DWORD *)(a1 + 8) + 156);
          v11 = (AnimClass *)AnimTypeClass::FindIndex(*(void **)&stru_830620.__pad_579C[15344]);
          AnimClass::ctor(
            (void **)v9,
            *(CoordStruct **)(*(_DWORD *)&stru_89E138.__pad_1600D[15] + 4 * (_DWORD)v11),
            &aP2,
            (CoordStruct *)2,
            (CoordStruct *)1,
            (void *)0x600,
            (void *)0xFFFFFFF6,
            0);
        }
        edx19 = v126;
        *(_DWORD *)(a1 + 48) = *(_DWORD *)&HouseClass_Player.__pad_5568[23248];
        *(_DWORD *)(a1 + 52) = edx19;
        *(_DWORD *)(a1 + 56) = 24;
      }
      if ( *(_BYTE *)(a1 + 76) )
      {
        (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 8) + 292))(*(_DWORD *)(a1 + 8), 0);
        *(_BYTE *)(a1 + 76) = 0;
        Targeting::Readd(*(IUnknown **)(a1 + 8));
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 8) + 292))(*(_DWORD *)(a1 + 8), 1);
      }
      goto LABEL_23;
    case 2:
      *(_DWORD *)(a1 + 68) = 0;
      *(_DWORD *)(a1 + 72) = 0;
      v36 = *(_DWORD *)(*(_DWORD *)(a1 + 8) + 724);
      v37 = v36 && VeterancyStruct::IsElite((float *)(v36 + 336));
      *(_BYTE *)(a1 + 77) = v37;
      LODWORD(var84_4) = *(_DWORD *)(a1 + 44);
      if ( !LODWORD(var84_4) )
        goto LABEL_63;
      v40 = *(IUnknown **)(a1 + 32);
      v39 = *(_DWORD *)(a1 + 40);
      if ( v40 != (IUnknown *)-1 )
      {
        if ( *(_DWORD *)&HouseClass_Player.__pad_5568[23248] - (int)v40 >= v39 )
          v39 = 0;
        else
          v39 -= *(_DWORD *)&HouseClass_Player.__pad_5568[23248] - (_DWORD)v40;
      }
      LODWORD(desiredFacing_4) = LODWORD(var84_4) - v39;
      if ( (double)(LODWORD(var84_4) - v39) / (double)SLODWORD(var84_4) != 1.0 )
      {
        st7_69 = *(float *)&v113->__pad_0[8] * 1.570796326794897;
        st6_69 = *(float *)&v113->__pad_0[12] * 1.570796326794897;
        LODWORD(desiredFacing_4) = *(_DWORD *)(a1 + 44);
        if ( LODWORD(desiredFacing_4) )
        {
          v51 = *(IUnknown **)(a1 + 32);
          v49 = *(_DWORD *)(a1 + 40);
          if ( v51 != (IUnknown *)-1 )
          {
            if ( *(_DWORD *)&HouseClass_Player.__pad_5568[23248] - (int)v51 >= v49 )
              v49 = 0;
            else
              v49 -= *(_DWORD *)&HouseClass_Player.__pad_5568[23248] - (_DWORD)v51;
          }
          LODWORD(var64_4) = LODWORD(desiredFacing_4) - v49;
          v47 = (double)(LODWORD(desiredFacing_4) - v49) / (double)SLODWORD(desiredFacing_4);
        }
        else
        {
          v47 = 1.0;
        }
        *(float *)(a1 + 80) = (st6_69 - st7_69) * v47 + st7_69;
      }
      else
      {
LABEL_63:
        *(float *)(a1 + 80) = *(float *)&v113->__pad_0[12] * 1.570796326794897;
        *(_DWORD *)(a1 + 60) = 3;
        eax63 = (_WORD *)(*(int (__thiscall **)(_DWORD, IUnknown **))(**(_DWORD **)(a1 + 8) + 756))(
                           *(_DWORD *)(a1 + 8),
                           v128);
        if ( *eax63 == word_B04E18 && eax63[1] == word_B04E1A )
          GadgetGrid::InsertItem(&stru_87C374.__pad_579C[23928], *(ObjectClass **)(a1 + 8));
        v43 = (AnimClass *)__2_YAPAXI_Z(0x1C8u);
        if ( v43 )
        {
          v129 = *(CoordStruct *)(*(_DWORD *)(a1 + 8) + 156);
          v45 = (AnimClass *)AnimTypeClass::FindIndex(*(void **)&stru_830620.__pad_579C[15344]);
          AnimClass::ctor(
            (void **)v43,
            *(CoordStruct **)(*(_DWORD *)&stru_89E138.__pad_1600D[15] + 4 * (_DWORD)v45),
            &v129,
            (CoordStruct *)2,
            (CoordStruct *)1,
            (void *)0x600,
            (void *)0xFFFFFFF6,
            0);
        }
        v46 = *(ObjectClass **)(a1 + 8);
        v124 = *(CoordStruct *)v46->location;
        v44 = (*(int (__thiscall **)(ObjectClass *))(*(_DWORD *)v46->__pad_0 + 132))(v46);
        StartAudioControllerAt(*(AudioController **)(v44 + 1324), (int)&v124, 0);
      }
      goto LABEL_111;
    case 3:
      if ( !*(_BYTE *)(a1 + 76) )
      {
        (*(void (__thiscall **)(ObjectClass *, _DWORD))(*(_DWORD *)v1->__pad_0 + 292))(v1, 0);
        *(_BYTE *)(a1 + 76) = 1;
        Targeting::Readd(*(IUnknown **)(a1 + 8));
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 8) + 292))(*(_DWORD *)(a1 + 8), 1);
      }
      *(double *)(a1 + 68) = *(float *)(v4 + 24) + *(double *)(a1 + 68);
      if ( (double)*(int *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 132))(*(_DWORD *)(a1 + 8)) + 1656) < *(double *)(a1 + 68) )
        *(double *)(a1 + 68) = (double)*(int *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 132))(*(_DWORD *)(a1 + 8))
                                              + 1656);
      if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 456))(*(_DWORD *)(a1 + 8)) >= *(_DWORD *)(v4 + 28) )
      {
        *(_DWORD *)(a1 + 60) = 4;
        v50 = *(_DWORD *)(a1 + 20);
        ebx82 = *(_DWORD *)(a1 + 24);
        v52 = (_DWORD *)(*(int (__thiscall **)(_DWORD, int *))(**(_DWORD **)(a1 + 8) + 72))(*(_DWORD *)(a1 + 8), &v125);
        v53 = *v52 - v50;
        v57 = (BuildingTypeClass *)(v52[1] - ebx82);
        desiredFacing_4 = COERCE_DOUBLE(__PAIR64__((unsigned int)v57, v53));
        v55 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64((double)(int)v57 * (double)(int)v57 + (double)v53 * (double)v53));
        *(_DWORD *)(a1 + 84) = Math::RoundToInt(v55);
      }
      goto LABEL_111;
    case 4:
      if ( (*(int (__thiscall **)(ObjectClass *))(*(_DWORD *)v1->__pad_0 + 456))(v1) <= 0 )
      {
        TechnoClass::CalculateDamage(a1 - 4);
        return 0;
      }
      *(double *)(a1 + 68) = *(float *)(v4 + 24) + *(double *)(a1 + 68);
      if ( (double)*(int *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 132))(*(_DWORD *)(a1 + 8)) + 1656) < *(double *)(a1 + 68) )
        *(double *)(a1 + 68) = (double)*(int *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 132))(*(_DWORD *)(a1 + 8))
                                              + 1656);
      if ( *(_BYTE *)(v4 + 44) && *(_DWORD *)(a1 + 84) )
      {
        ebx90 = (_DWORD *)(a1 - 4);
        if ( BulletClass::ComputeImpactTrajectory(a1 - 4, v4) )
          return 0;
        v61 = *(ObjectClass **)(a1 + 8);
        v59 = *(_DWORD *)(a1 + 20);
        v60 = (_DWORD *)(a1 + 20);
        HIDWORD(desiredFacing_4) = *(_DWORD *)(a1 + 24);
        LODWORD(desiredFacing_4) = v59;
        eax91a = (int *)(*(int (__thiscall **)(ObjectClass *, int *))(*(_DWORD *)v61->__pad_0 + 72))(v61, &v125);
        v62 = *eax91a;
        v63 = eax91a[1];
        LODWORD(var84_4) = v62 - LODWORD(desiredFacing_4);
        HIDWORD(var84_4) = v63 - HIDWORD(desiredFacing_4);
        v64 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64(
                                            (double)(v63 - HIDWORD(desiredFacing_4))
                                          * (double)(v63 - HIDWORD(desiredFacing_4))
                                          + (double)(v62 - LODWORD(desiredFacing_4))
                                          * (double)(v62 - LODWORD(desiredFacing_4))));
        LODWORD(desiredFacing_4) = Math::RoundToInt(v64);
        v65 = (double)SLODWORD(desiredFacing_4) / (double)*(int *)(a1 + 84);
        v66 = *(_DWORD *)(ebx90[3] + 156);
        v67 = *(_DWORD *)(ebx90[3] + 160);
        v119 = *(ObjectClass **)(ebx90[3] + 164);
        v68 = ebx90[6] - v66;
        v69 = ebx90[7] - v67;
        v127 = ebx90[8] - (_DWORD)v119;
        var84_4 = v65;
        var74_4 = 1.0 - v65;
        LODWORD(desiredFacing_4) = v69 * v69 + v68 * v68;
        v70 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64((double)SLODWORD(desiredFacing_4)));
        if ( v70 <= 0.0 )
          v71 = -1.570796326794897;
        else
          v71 = Math::ArcTan((double)v127 / v70);
        *(float *)(a1 + 80) = *(float *)&v113->__pad_0[12] * var84_4 * 1.570796326794897 + v71 * var74_4;
      }
      else
      {
        if ( *(float *)(a1 + 80) > 0.0 )
        {
          v72 = *(float *)(a1 + 80) - *(float *)(v4 + 16);
          *(float *)(a1 + 80) = v72;
          if ( v72 < 0.0 )
            *(_DWORD *)(a1 + 80) = 0;
        }
        v60 = (_DWORD *)(a1 + 20);
        var74_4 = *(double *)(a1 + 20);
        v75 = *(ObjectClass **)(a1 + 8);
        v123 = *(ObjectClass **)(a1 + 28);
        v125 = v75->location[0];
        v126 = v75->location[1];
        v74 = v75->location[2] - (_DWORD)v123;
        LODWORD(var84_4) = v75->location[0];
        v77 = (ObjectClass *)v75->location[2];
        HIDWORD(var84_4) = v75->location[1];
        v76 = *(_DWORD *)v75->__pad_0;
        v121 = (IUnknown *)v77;
        eax98 = (*(int (__thiscall **)(ObjectClass *, int *))(v76 + 72))(v75, &v125);
        v78 = *(_DWORD *)eax98 - LODWORD(var74_4);
        v79 = *(_DWORD *)(eax98 + 4);
        v82 = *(ObjectClass **)(eax98 + 8);
        LODWORD(desiredFacing_4) = v78;
        HIDWORD(desiredFacing_4) = v79 - HIDWORD(var74_4);
        v119 = (ObjectClass *)((char *)v82 - (char *)v121);
        v81 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64(
                                            (double)((char *)v82 - (char *)v121) * (double)((char *)v82 - (char *)v121)
                                          + (double)(v79 - HIDWORD(var74_4)) * (double)(v79 - HIDWORD(var74_4))
                                          + (double)v78 * (double)v78));
        if ( (int)Math::RoundToInt(v81) <= v74 )
          *(_DWORD *)(a1 + 60) = 5;
      }
      eax100 = (int *)(*(int (__thiscall **)(_DWORD, int *))(**(_DWORD **)(a1 + 8) + 72))(*(_DWORD *)(a1 + 8), &v125);
      v83 = *eax100;
      LODWORD(desiredFacing_4) = *v60;
      LODWORD(var84_4) = v83;
      *((double *)&_8 + 1) = (double)SLODWORD(desiredFacing_4) - (double)v83;
      *(double *)&_8 = (double)eax100[1] - (double)(int)v60[1];
      v84 = Math::CalcAngle((AbstractClass *)_8, *(double *)((char *)&_8 + 4));
      LOWORD(desiredFacing_4) = Math::RoundToInt((v84 - 1.570796326794897) * -10430.06004058427);
      v85 = *(_DWORD *)(a1 + 8);
      desiredFacing = (ObjectClass *)LODWORD(desiredFacing_4);
      FacingClass::Update((FacingClass *)(v85 + 904), (DirStruct *)&desiredFacing);
LABEL_111:
      if ( !(*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)a1 + 128))(a1) )
        goto LABEL_119;
      v94 = *(IUnknown **)(a1 + 48);
      v95 = *(_DWORD *)(a1 + 56);
      if ( v94 == (IUnknown *)-1 )
        goto LABEL_115;
      if ( *(_DWORD *)&HouseClass_Player.__pad_5568[23248] - (int)v94 >= v95 )
        goto LABEL_116;
      v95 -= *(_DWORD *)&HouseClass_Player.__pad_5568[23248] - (_DWORD)v94;
LABEL_115:
      if ( !v95 )
      {
LABEL_116:
        v96 = (AnimClass *)__2_YAPAXI_Z(0x1C8u);
        if ( v96 )
        {
          v124 = *(CoordStruct *)(*(_DWORD *)(a1 + 8) + 156);
          v98 = (AnimClass *)AnimTypeClass::FindIndex(*(void **)&stru_830620.__pad_579C[15348]);
          AnimClass::ctor(
            (void **)v96,
            *(CoordStruct **)(*(_DWORD *)&stru_89E138.__pad_1600D[15] + 4 * (_DWORD)v98),
            &v124,
            0,
            (CoordStruct *)1,
            (void *)0x600,
            0,
            0);
        }
        edx118 = v126;
        *(_DWORD *)(a1 + 48) = *(_DWORD *)&HouseClass_Player.__pad_5568[23248];
        *(_DWORD *)(a1 + 52) = edx118;
        *(_DWORD *)(a1 + 56) = 3;
      }
LABEL_119:
      if ( *(double *)(a1 + 68) > 0.0 )
      {
        desiredFacing = (ObjectClass *)Math::RoundToInt(*(double *)(a1 + 68));
        v99 = *(_DWORD *)(a1 - 4 + 12) + 156;
        desiredFacing_4 = (double)(int)desiredFacing;
        aP0 = *(float *)(a1 - 4 + 84);
        v101 = *(_DWORD *)(v99 + 4);
        LODWORD(var84_4) = *(_DWORD *)v99;
        v103 = *(ObjectClass **)(v99 + 8);
        HIDWORD(var84_4) = v101;
        v121 = (IUnknown *)v103;
        st7_120a = Math::ArcTan2((IUnknown *)LODWORD(aP0));
        LODWORD(var64_4) = Math::RoundToInt(st7_120a * desiredFacing_4);
        desiredFacing = (ObjectClass *)(*(__int16 *)ProgressTimer::GetValue(
                                                      (_WORD *)(*(_DWORD *)(a1 - 4 + 12) + 904),
                                                      (IUnknown *)v128)
                                      - 0x3FFF);
        *(double *)&v128[1] = (double)(int)desiredFacing * -0.00009587672516830327;
        var64_4 = (double)SLODWORD(var64_4);
        var74_4 = (double)SHIDWORD(var84_4);
        v104 = Math::SinCos(v128[1]);
        desiredFacing = (ObjectClass *)Math::RoundToInt(var74_4 - v104 * var64_4);
        v105 = Math::ArcTan2(v128[1]);
        v106 = Math::RoundToInt(v105 * var64_4 + (double)SLODWORD(var84_4));
        aP0_4 = *(float *)(a1 - 4 + 84);
        v129.Y = (int)desiredFacing;
        v129.Z = (int)v121;
        v107 = Math::SinCos((IUnknown *)LODWORD(aP0_4));
        v124.Z = Math::RoundToInt(v107 * desiredFacing_4 + (double)(int)v121);
        v124.X = v106;
        v124.Y = v129.Y;
        LOWORD(v116) = v106 / 256;
        HIWORD(v116) = v129.Y / 256;
        desiredFacing = v116;
        if ( LayerClass::CoordinatesLegal(&stru_87C374.__pad_14B0[8132], (IUnknown *)&desiredFacing) )
          (*(void (__thiscall **)(_DWORD, CoordStruct *))(**(_DWORD **)(a1 + 8) + 436))(*(_DWORD *)(a1 + 8), &v124);
        v108 = (VectorClass **)(*(int (__thiscall **)(_DWORD, IUnknown **))(**(_DWORD **)(a1 + 8) + 440))(
                                 *(_DWORD *)(a1 + 8),
                                 v128);
        v111 = *(ObjectClass **)(a1 + 8);
        v110 = *v108;
        desiredFacing = (ObjectClass *)v110;
        if ( (_WORD)v110 != *(_WORD *)v111[8].__pad_0 || HIWORD(desiredFacing) != *(_WORD *)&v111[8].__pad_0[2] )
        {
          if ( v111->isAliveFlag )
            Coord::ToGridIndex(
              &stru_87C374.__pad_579C[23928],
              (VectorClass *)v111,
              *(VectorClass **)v111[8].__pad_0,
              v110);
        }
        if ( *(int *)(*(_DWORD *)(a1 + 8) + 108) <= 0 )
          TechnoClass::CalculateDamage(a1 - 4);
      }
      return (*(char (__stdcall **)(int))(*(_DWORD *)a1 + 16))(a1);
    case 5:
      v86 = (_DWORD *)(a1 - 4);
      if ( BulletClass::ComputeImpactTrajectory(a1 - 4, v4) )
        return 0;
      v88 = (BuildingTypeClass *)(v86[6] - *(_DWORD *)(v86[3] + 156));
      ecx102 = v86[7] - *(_DWORD *)(v86[3] + 160);
      v127 = v86[8] - *(_DWORD *)(v86[3] + 164);
      LODWORD(desiredFacing_4) = (_DWORD)v88 * (_DWORD)v88 + ecx102 * ecx102;
      v89 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64((double)SLODWORD(desiredFacing_4)));
      if ( v89 <= 0.0 )
        v90 = -1.570796326794897;
      else
        v90 = Math::ArcTan((double)v127 / v89);
      v91 = v90 - *(float *)(a1 + 80);
      v92 = v91;
      if ( v91 < 0.0 )
        v92 = -v91;
      if ( v92 <= *(float *)&v113->uniqueId )
      {
        *(float *)(a1 + 80) = *(float *)(a1 + 80) + v91;
      }
      else
      {
        if ( v91 >= 0.0 )
          v93 = *(float *)&v113->uniqueId + *(float *)(a1 + 80);
        else
          v93 = *(float *)(a1 + 80) - *(float *)&v113->uniqueId;
        *(float *)(a1 + 80) = v93;
      }
      goto LABEL_111;
    case 6:
      objectTypeFlags = v1[4].objectTypeFlags;
      v19 = objectTypeFlags && VeterancyStruct::IsElite((float *)(objectTypeFlags + 336));
      v21 = (IUnknown *)(a1 + 48);
      *(_BYTE *)(a1 + 77) = v19;
      v22 = *(IUnknown **)&HouseClass_Player.__pad_5568[23248];
      edx34 = *(_DWORD *)(a1 + 48);
      v23 = *(_DWORD *)(a1 + 56);
      if ( edx34 == -1 )
        goto LABEL_37;
      if ( *(_DWORD *)&HouseClass_Player.__pad_5568[23248] - edx34 >= v23 )
        goto LABEL_38;
      v23 -= *(_DWORD *)&HouseClass_Player.__pad_5568[23248] - edx34;
LABEL_37:
      if ( !v23 )
      {
LABEL_38:
        v25 = (AnimClass *)__2_YAPAXI_Z(0x1C8u);
        if ( v25 )
        {
          v131 = *(CoordStruct *)(*(_DWORD *)(a1 + 8) + 156);
          v27 = (AnimClass *)AnimTypeClass::FindIndex(*(void **)&stru_830620.__pad_579C[15344]);
          AnimClass::ctor(
            (void **)v25,
            *(CoordStruct **)(*(_DWORD *)&stru_89E138.__pad_1600D[15] + 4 * (_DWORD)v27),
            &v131,
            (CoordStruct *)2,
            (CoordStruct *)1,
            (void *)0x600,
            (void *)0xFFFFFFF6,
            0);
        }
        v21->field_0 = *(_DWORD *)&HouseClass_Player.__pad_5568[23248];
        *(_DWORD *)(a1 + 52) = v126;
        *(_DWORD *)(a1 + 56) = 24;
        v22 = *(IUnknown **)&HouseClass_Player.__pad_5568[23248];
      }
      v26 = *(_DWORD *)(a1 + 8) + 156;
      LODWORD(var74_4) = *(_DWORD *)v26;
      edx41 = *(_DWORD *)(a1 + 44);
      v28 = *(_DWORD *)(v26 + 4);
      LODWORD(desiredFacing_4) = edx41;
      HIDWORD(var74_4) = v28;
      v123 = *(ObjectClass **)(v26 + 8);
      if ( !edx41 )
        goto LABEL_47;
      v31 = *(IUnknown **)(a1 + 32);
      v30 = *(_DWORD *)(a1 + 40);
      if ( v31 != (IUnknown *)-1 )
      {
        edi43 = (char *)v22 - (char *)v31;
        if ( edi43 >= v30 )
          v30 = 0;
        else
          v30 -= edi43;
      }
      LODWORD(var84_4) = edx41 - v30;
      if ( (double)(edx41 - v30) / (double)SLODWORD(desiredFacing_4) != 1.0 )
      {
        v123 = (ObjectClass *)((char *)v123 + v113->abstractFlags);
        LOWORD(v115) = SLODWORD(var74_4) / 256;
        HIWORD(v115) = SHIDWORD(var74_4) / 256;
        LODWORD(var64_4) = v115;
        if ( LayerClass::CoordinatesLegal(&stru_87C374.__pad_14B0[8132], (IUnknown *)&var64_4) )
          (*(void (__thiscall **)(_DWORD, double *))(**(_DWORD **)(a1 + 8) + 436))(*(_DWORD *)(a1 + 8), &var74_4);
      }
      else
      {
LABEL_47:
        *(float *)(a1 + 80) = *(float *)&v113->__pad_0[12] * 1.570796326794897;
        v32 = (_WORD *)(*(int (__thiscall **)(_DWORD, IUnknown **))(**(_DWORD **)(a1 + 8) + 756))(
                         *(_DWORD *)(a1 + 8),
                         &v128[1]);
        if ( *v32 == word_B04E18 && v32[1] == word_B04E1A )
        {
          v35 = *(ObjectClass **)(a1 + 8);
          v130[0] = v35->location[0];
          v130[1] = v35->location[1];
          v130[2] = v35->location[2];
          v34 = (*(int (__thiscall **)(ObjectClass *))(*(_DWORD *)v35->__pad_0 + 132))(v35);
          StartAudioControllerAt(*(AudioController **)(v34 + 1324), (int)v130, 0);
          GadgetGrid::InsertItem(&stru_87C374.__pad_579C[23928], *(ObjectClass **)(a1 + 8));
        }
        edx50 = v126;
        v21->field_0 = *(_DWORD *)&HouseClass_Player.__pad_5568[23248];
        *(_DWORD *)(a1 + 52) = edx50;
        *(_DWORD *)(a1 + 56) = 0;
        *(_DWORD *)(a1 + 60) = 3;
      }
      goto LABEL_111;
    default:
      goto LABEL_111;
  }
}
}
} // namespace gamemd

// 0x663DB0
namespace gamemd {
bool E4Recv_663DB0::LaunchMultiplayerHost(unsigned char * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __thiscall LaunchMultiplayerHost(int this, unsigned __int8 *a2)
{
  unsigned __int8 *v4; // eax
  int *v5; // esi
  unsigned __int8 v6; // dl
  unsigned __int8 v7; // al
  int *v8; // eax
  int v9; // esi
  int v10; // edi
  int v11; // eax
  unsigned __int8 v12; // [esp+4h] [ebp-584h] BYREF
  unsigned __int8 v13; // [esp+5h] [ebp-583h]
  unsigned __int8 v14; // [esp+6h] [ebp-582h]
  unsigned __int8 v15; // [esp+7h] [ebp-581h]
  int v16; // [esp+8h] [ebp-580h]
  DWORD TicksTimer; // [esp+10h] [ebp-578h]
  int v18; // [esp+14h] [ebp-574h]
  int v19; // [esp+18h] [ebp-570h]
  int v20; // [esp+1Ch] [ebp-56Ch] BYREF
  char v21[2]; // [esp+22h] [ebp-566h] BYREF
  char v22[4]; // [esp+24h] [ebp-564h] BYREF
  _BYTE v23[12]; // [esp+28h] [ebp-560h] BYREF
  struct _PROCESS_INFORMATION ProcessInformation; // [esp+34h] [ebp-554h] BYREF
  struct _STARTUPINFOA StartupInfo; // [esp+44h] [ebp-544h] BYREF
  CHAR CommandLine[256]; // [esp+88h] [ebp-500h] BYREF
  char v27[1024]; // [esp+188h] [ebp-400h] BYREF

  TicksTimer = Timer::GetTicks(); /*0x663dc6*/
  v19 = 0; /*0x663dca*/
  Waypoint::InitInvalid(v23); /*0x663dd2*/
  Debug::Log(); /*0x663ddc*/
  GetStartupInfoA(&StartupInfo); /*0x663de9*/
  if ( !(*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887628] + 72))(MEMORY[0x887628]) ) /*0x663df7*/
    return 0; /*0x663e07*/
  if ( a2 ) /*0x663e15*/
  {
    sprintf(CommandLine, MEMORY[0x839B84], *a2, a2[1], a2[2], a2[3]); /*0x663f0e*/
    if ( *(_DWORD *)MEMORY[0xA8DA78] == -40 ) /*0x663f21*/
      goto LABEL_11; /*0x663f21*/
    Network::CopyAddress((_DWORD *)(*(_DWORD *)MEMORY[0xA8DA78] + 40), &v20, (int)&v12); /*0x663f31*/
    v6 = a2[2]; /*0x663f39*/
    v7 = *a2; /*0x663f3c*/
    v13 = a2[1]; /*0x663f3e*/
    v14 = v6; /*0x663f42*/
    v12 = v7; /*0x663f4a*/
    v15 = a2[3]; /*0x663f5e*/
    NetworkID::Assign(&MEMORY[0xA8DBB0], &v20, (int)&v12, 0); /*0x663f62*/
    Network::SetPort(&MEMORY[0xA8DBB0], *(_WORD *)(*(_DWORD *)MEMORY[0xA8DA78] + 40)); /*0x663f78*/
    LOWORD(MEMORY[0xA8DBBC]) = *(_WORD *)(*(_DWORD *)MEMORY[0xA8DA78] + 40); /*0x663f88*/
    v8 = (int *)(*(_DWORD *)MEMORY[0xA8DA78] + 40); /*0x663f91*/
    MEMORY[0xA8DBA4] = *v8; /*0x663f96*/
    MEMORY[0xA8DBA8] = v8[1]; /*0x663f9f*/
    MEMORY[0xA8DBAC] = v8[2]; /*0x663fa8*/
    goto LABEL_10; /*0x663fa8*/
  }
  if ( !MEMORY[0xA8DA84] ) /*0x663e22*/
  {
    v4 = (unsigned __int8 *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)MEMORY[0x887628] + 76))(MEMORY[0x887628], 0); /*0x663e2d*/
    sprintf(CommandLine, MEMORY[0x839B84], *v4, v4[1], v4[2], v4[3]); /*0x663e54*/
    goto LABEL_11; /*0x663e5c*/
  }
  v5 = (int *)(*(_DWORD *)MEMORY[0xA8DA78] + 40); /*0x663e69*/
  if ( *(_DWORD *)MEMORY[0xA8DA78] != -40 ) /*0x663e6c*/
  {
    Network::CopyAddress(v5, &v20, (int)&v12); /*0x663e7e*/
    sprintf(CommandLine, MEMORY[0x839B84], v12, v13, v14, v15); /*0x663ebb*/
    MEMORY[0xA8DBB0] = *v5; /*0x663ec5*/
    MEMORY[0xA8DBB4] = v5[1]; /*0x663ecd*/
    MEMORY[0xA8DBB8] = v5[2]; /*0x663ed6*/
    LOWORD(MEMORY[0xA8DBBC]) = 0; /*0x663edc*/
LABEL_10:
    Network::FormatAddress((unsigned __int16 *)&MEMORY[0xA8DBB0], 0); /*0x663fad*/
    Debug::Log(); /*0x663fbf*/
  }
LABEL_11:
  if ( CreateProcessA(MEMORY[0x8399EC], CommandLine, 0, 0, 0, 0x200u, 0, 0, &StartupInfo, &ProcessInformation) ) /*0x663fed*/
  {
    this->M28 = ProcessInformation.hProcess; /*0x664029*/
    Debug::Log(); /*0x66402c*/
    SetFocus(g_hWnd); /*0x66403b*/
    v9 = 1800; /*0x66404e*/
    TicksTimer = Timer::GetTicks(); /*0x664053*/
    v18 = v16; /*0x664057*/
    v19 = 1800; /*0x66405b*/
    v10 = 0; /*0x66405f*/
    while ( 1 ) /*0x664067*/
    {
      if ( TicksTimer != -1 ) /*0x66406c*/
      {
        v11 = Timer::GetTicks() - TicksTimer; /*0x664077*/
        if ( v11 >= v9 ) /*0x66407d*/
          return v10 != 0; /*0x66407d*/
        v9 -= v11; /*0x66407f*/
      }
      if ( !v9 ) /*0x664083*/
        break; /*0x664083*/
      Event::Dispatch(); /*0x664085*/
      if ( Network::SendPacketThunk2(v27, v22, v23, v21) && v27[0] == 4 ) /*0x6640b7*/
      {
        v10 = 1; /*0x6640be*/
        Debug::Log(); /*0x6640c3*/
        *(_BYTE *)(this + 24) = 1; /*0x6640cb*/
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
}
} // namespace gamemd

// 0x664750
namespace gamemd {
char E4Recv_664750::sub_664750(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_664750(unsigned __int8 *this, char a2)
{
  int v2; // eax
  _BYTE v4[340]; // [esp+4h] [ebp-154h] BYREF

  memset(v4, 0, 338); /*0x664764*/
  v2 = *(this + 24); /*0x66476c*/
  if ( (_BYTE)v2 ) /*0x664772*/
  {
    v4[0] = 6; /*0x664780*/
    v4[1] = a2; /*0x664785*/
    Debug::Log(); /*0x664789*/
    LOBYTE(v2) = Network::SendPacket((int)MEMORY[0xA8E9C0], (int)v4, 338, 1u); /*0x6647a2*/
  }
  return v2; /*0x66476f*/
}
}
} // namespace gamemd

// 0x660AD0
namespace gamemd {
int E4Recv_660AD0::sub_660AD0()
{
{
    return DataGlobal_7F099C[4 * *(void**)this];
}
}
} // namespace gamemd

// 0x660AE0
namespace gamemd {
int E4Recv_660AE0::sub_660AE0()
{
{
    return DataGlobal_7F09A0[4 * *(void**)this];
}
}
} // namespace gamemd

// 0x660AF0
namespace gamemd {
int E4Recv_660AF0::sub_660AF0()
{
{
    return DataGlobal_7F0998[4 * *(void**)this];
}
}
} // namespace gamemd

// 0x6616B0
namespace gamemd {
unsigned int * E4Recv_6616B0::sub_6616B0()
{
{
    int v2;
    int *v3;
    v2 = 32;
    this->M4 = 0;
    this->M8 = 0;
    *(void**)this = &vt_Straw;
    this->M12 = 0;
    this->M16 = 0;
    v3 = this + 5;
    do
  {
    sub_65C890(v3, 0, 0);
    v3 += 2;
    --v2;
  }
    while ( v2 );
    this->M12 = 0;
    this->M16 = 0;
    *(void**)this = &vt_RandomStraw;
    memset(this + 5, 0, 0x100u);
    return this;
}
}
} // namespace gamemd

// 0x661960
namespace gamemd {
int E4Recv_661960::sub_661960(short a2)
{
{
    char *v3;
    int v4;
    unsigned int v5;
    char *v6;
    size_t v7;
    int result;
    int v9;
    char Src[20];
    int v11[29];
    v9 = 16;
    do
  {
    if ( (a2 & 1) != 0 )
    {
    v3 = this + (unsigned char)(this->M12 / 8) + 20;
    *v3 ^= 1 << (this->M12 & 7);
    }
    v4 = this->M12 + 1;
    this->M12 = v4;
    if ( v4 == 2048 )
    {
    v5 = 0;
    LOBYTE(v11[0]) = 0;
    v11[11] = 0;
    v11[12] = 0;
    v11[6] = 1732584193;
    v11[7] = -271733879;
    v11[8] = -1732584194;
    v11[9] = 271733878;
    v11[10] = -1009589776;
    v6 = this + 20;
    do
      {
    SHA1::Process(v11, (int)(this + 20), 256);
    SHA1::Compute(v11, Src);
    v7 = 256 - v5;
    if ( 256 - v5 > 0x14 )
    v7 = 20;
    memcpy(v6, Src, v7);
    ++v5;
    ++v6;
      }
    while ( v5 < 0x100 );
    }
    a2 >>= 1;
    result = --v9;
  }
    while ( v9 );
    return result;
}
}
} // namespace gamemd

// 0x661A60
namespace gamemd {
int E4Recv_661A60::sub_661A60(int a2)
{
{
    char *v3;
    int v4;
    unsigned int v5;
    char *v6;
    size_t v7;
    bool v8;
    int result;
    int v10;
    char Src[20];
    int v12[29];
    v10 = 32;
    do
  {
    if ( (a2 & 1) != 0 )
    {
    v3 = this + (unsigned char)(this->M12 / 8) + 20;
    *v3 ^= 1 << (this->M12 & 7);
    }
    v4 = this->M12 + 1;
    this->M12 = v4;
    if ( v4 == 2048 )
    {
    v5 = 0;
    LOBYTE(v12[0]) = 0;
    v12[11] = 0;
    v12[12] = 0;
    v12[6] = 1732584193;
    v12[7] = -271733879;
    v12[8] = -1732584194;
    v12[9] = 271733878;
    v12[10] = -1009589776;
    v6 = this + 20;
    do
      {
    SHA1::Process(v12, (int)(this + 20), 256);
    SHA1::Compute(v12, Src);
    v7 = 256 - v5;
    if ( 256 - v5 > 0x14 )
    v7 = 20;
    memcpy(v6, Src, v7);
    ++v5;
    ++v6;
      }
    while ( v5 < 0x100 );
    }
    result = v10 - 1;
    v8 = v10 == 1;
    a2 >>= 1;
    --v10;
  }
    while ( !v8 );
    return result;
}
}
} // namespace gamemd

// 0x661B70
namespace gamemd {
void * E4Recv_661B70::sub_661B70()
{
{
    int v1;
    unsigned int v2;
    char *v3;
    size_t v4;
    void *result;
    char Src[20];
    int v7[29];
    v1 = (int)(this + 20);
    LOBYTE(v7[0]) = 0;
    v7[11] = 0;
    v7[12] = 0;
    v7[6] = 1732584193;
    v7[7] = -271733879;
    v7[8] = -1732584194;
    v7[9] = 271733878;
    v7[10] = -1009589776;
    v2 = 0;
    v3 = this + 20;
    do
  {
    SHA1::Process(v7, v1, 256);
    SHA1::Compute(v7, Src);
    v4 = 256 - v2;
    if ( 256 - v2 > 0x14 )
    v4 = 20;
    result = memcpy(v3, Src, v4);
    ++v2;
    ++v3;
  }
    while ( v2 < 0x100 );
    return result;
}
}
} // namespace gamemd

// 0x661CB0
namespace gamemd {
void sub_661CB0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B04E20 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x661CE0
namespace gamemd {
void sub_661CE0()
{
{
    DataGlobal_B04E70 = DataGlobal_B04E20 / 60.0;
}
}
} // namespace gamemd

// 0x661D00
namespace gamemd {
void sub_661D00()
{
{
    DataGlobal_B04E58 = 1.0 / DataGlobal_B04E70;
}
}
} // namespace gamemd

// 0x661D20
namespace gamemd {
void sub_661D20()
{
{
    DataGlobal_B04E50 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x661D40
namespace gamemd {
void sub_661D40()
{
{
    DataGlobal_B04E28 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x661D60
namespace gamemd {
void sub_661D60()
{
{
    DataGlobal_B04E00 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x661DC0
namespace gamemd {
void sub_661DC0()
{
{
    DataGlobal_B04E30 = Math::ArcTan((double)DataGlobal_B04E78 * 0.00390625);
}
}
} // namespace gamemd

// 0x661DF0
namespace gamemd {
void sub_661DF0()
{
{
    DataGlobal_B04E48 = Math::ArcTan((double)(2 * DataGlobal_B04E78) / DataGlobal_B04E20);
}
}
} // namespace gamemd

// 0x661E20
namespace gamemd {
long long sub_661E20()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B04E78) + 0.5);
    DataGlobal_B04E6C = result;
    return result;
}
}
} // namespace gamemd

// 0x661E50
namespace gamemd {
int sub_661E50()
{
{
    DataGlobal_B04E18 = 0;
    DataGlobal_B04E1A = 0;
    return 0;
}
}
} // namespace gamemd

// 0x661E60
namespace gamemd {
int sub_661E60()
{
{
    DataGlobal_B04E38 = 0;
    DataGlobal_B04E3C = 0;
    DataGlobal_B04E40 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x661E80
namespace gamemd {
int sub_661E80()
{
{
    DataGlobal_B04E68 = 0;
    DataGlobal_B04E60 = 128;
    DataGlobal_B04E64 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x661EA0
namespace gamemd {
int sub_661EA0()
{
{
    DataGlobal_B04E08 = 0;
    DataGlobal_B04E0C = 0;
    DataGlobal_B04E10 = 0;
    DataGlobal_B04E14 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x661F30
namespace gamemd {
void E4Recv_661F30::sub_661F30()
{
{
    *(void**)this = vt_RocketLocomotionClass;
    this->M4 = &vt_RocketLocomotionClass;
    LocomotionClass::Construct(this);
}
}
} // namespace gamemd

// 0x662240
namespace gamemd {
double E4Recv_662240::sub_662240()
{
{
    int v1;
    int v2;
    double v3;
    int v5;
    v1 = this->M24 - *(int *)(this->M12 + 156);
    v2 = this->M28 - *(int *)(this->M12 + 160);
    v5 = this->M32 - *(int *)(this->M12 + 164);
    v3 = Math::Sqrt((double)(v2 * v2 + v1 * v1));
    if ( v3 <= 0.0 )
    return -1.570796326794897;
    else
    return Math::ArcTan((double)v5 / v3);
}
}
} // namespace gamemd

// 0x6633C0
namespace gamemd {
void nullsub_224(int a1)
{
  ;
}
} // namespace gamemd

// 0x6635F0
namespace gamemd {
void sub_6635F0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B052A0 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x663620
namespace gamemd {
void sub_663620()
{
{
    DataGlobal_B05328 = DataGlobal_B052A0 / 60.0;
}
}
} // namespace gamemd

// 0x663640
namespace gamemd {
void sub_663640()
{
{
    DataGlobal_B05310 = 1.0 / DataGlobal_B05328;
}
}
} // namespace gamemd

// 0x663660
namespace gamemd {
void sub_663660()
{
{
    DataGlobal_B05308 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x663680
namespace gamemd {
void sub_663680()
{
{
    DataGlobal_B052B0 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x6636A0
namespace gamemd {
void sub_6636A0()
{
{
    DataGlobal_B04E80 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x6636C0
namespace gamemd {
long long sub_6636C0()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_B04E80 - DataGlobal_B052B0);
    result = Math::RoundToInt(v0 * DataGlobal_B052A0 * 0.5);
    DataGlobal_B05330 = result;
    return result;
}
}
} // namespace gamemd

// 0x663700
namespace gamemd {
void sub_663700()
{
{
    DataGlobal_B052B8 = Math::ArcTan((double)DataGlobal_B05330 * 0.00390625);
}
}
} // namespace gamemd

// 0x663730
namespace gamemd {
void sub_663730()
{
{
    DataGlobal_B05300 = Math::ArcTan((double)(2 * DataGlobal_B05330) / DataGlobal_B052A0);
}
}
} // namespace gamemd

// 0x663760
namespace gamemd {
long long sub_663760()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B05330) + 0.5);
    DataGlobal_B05324 = result;
    return result;
}
}
} // namespace gamemd

// 0x663790
namespace gamemd {
int sub_663790()
{
{
    DataGlobal_B04E98 = 0;
    DataGlobal_B04E9A = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6637A0
namespace gamemd {
int sub_6637A0()
{
{
    DataGlobal_B052F0 = 0;
    DataGlobal_B052F4 = 0;
    DataGlobal_B052F8 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6637C0
namespace gamemd {
int sub_6637C0()
{
{
    DataGlobal_B05320 = 0;
    DataGlobal_B05318 = 128;
    DataGlobal_B0531C = 128;
    return 128;
}
}
} // namespace gamemd

// 0x6637E0
namespace gamemd {
int sub_6637E0()
{
{
    DataGlobal_B04E88 = 0;
    DataGlobal_B04E8C = 0;
    DataGlobal_B04E90 = 0;
    DataGlobal_B04E94 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x663800
namespace gamemd {
int sub_663800()
{
{
    DataGlobal_B052D4 = 0;
    DataGlobal_B052D8 = 0;
    DataGlobal_B052DC = 1;
    DataGlobal_B052DD = 0;
    g_NetworkEventQueue = (int)&vt_DynamicVectorClass_OwnerTalkClass_ConnectionListStruct;
    DataGlobal_B052E4 = 10;
    DataGlobal_B052E0 = 0;
    DataGlobal_B052E8 = 0;
    DataGlobal_B052EC = 0;
    return atexit(sub_663850);
}
}
} // namespace gamemd

// 0x663850
namespace gamemd {
void sub_663850()
{
{
    bool v0;
    int v1;
    if ( DataGlobal_B052E0 )
  {
    do
    {
    __3_YAXPAX_Z(*(void **)DataGlobal_B052D4);
    v0 = DataGlobal_B052E0 == 0;
    if ( DataGlobal_B052E0 > 0 )
      {
    v1 = 0;
    v0 = DataGlobal_B052E0-- == 1;
    if ( DataGlobal_B052E0 > 0 )
        {
    do
          {
    ++v1;
    *((int *)(DataGlobal_B052D4) + v1 - 1) = *((int *)(DataGlobal_B052D4) + v1);
          }
    while ( v1 < DataGlobal_B052E0 );
    v0 = DataGlobal_B052E0 == 0;
        }
      }
    }
    while ( !v0 );
  }
    g_NetworkEventQueue = (int)&vt_VectorClass_OwnerTalkClass_ConnectionListStruct;
    if ( DataGlobal_B052D4 && DataGlobal_B052DD )
  {
    __3_YAXPAX_Z(DataGlobal_B052D4);
    DataGlobal_B052D4 = 0;
  }
    DataGlobal_B052DD = 0;
    DataGlobal_B052D8 = 0;
}
}
} // namespace gamemd

// 0x6638E0
namespace gamemd {
unsigned int * E4Recv_6638E0::sub_6638E0()
{
{
    this->M4 = 0;
    this->M8 = 0;
    this->M12 = 1;
    this->M13 = 0;
    *(void**)this = &vt_DynamicVectorClass_OwnerTalkClass_ConnectionListStruct;
    this->M20 = 10;
    this->M16 = 0;
    this->M24 = 0;
    this->M28 = 0;
    return this;
}
}
} // namespace gamemd

// 0x663960
namespace gamemd {
void E4Recv_663960::sub_663960()
{
{
    int v2;
    int v3;
    int v4;
    void *v5;
    while ( this->M16 )
  {
    __3_YAXPAX_Z(**((void ***)(this) + 1));
    v2 = this->M16;
    if ( v2 > 0 )
    {
    v3 = v2 - 1;
    v4 = 0;
    for ( this->M16 = v3;
    v4 < this->M16;
    *(int *)(this->M4 + 4 * v4 - 4) = *(int *)(this->M4 + 4 * v4) ) {
    ++v4;
      }
    }
  }
    v5 = (void *)this->M4;
    *(int *)this = &vt_VectorClass_OwnerTalkClass_ConnectionListStruct;
    if ( v5 && (unsigned char)this->M13 )
  {
    __3_YAXPAX_Z(v5);
    this->M4 = 0;
  }
    this->M13 = 0;
    this->M8 = 0;
}
}
} // namespace gamemd

// 0x663CD0
namespace gamemd {
char E4Recv_663CD0::sub_663CD0(unsigned char * a2)
{
{
    int *v2;
    char v5;
    int v6;
    int v7;
    int v8;
    int i;
    int v10;
    v2 = a2;
    if ( !a2 )
    return -1;
    if ( Network::IsBroadcastAddr(a2) )
    return -1;
    v5 = 0;
    Network::CopyAddress(v2, &a2, (int)&v10);
    v6 = this->M16;
    v7 = 0;
    if ( v6 > 0 )
  {
    v8 = this->M4;
    for ( i = v8; v10 != *(int *)(*(int *)(i) + 33); i += 4 )
    {
    if ( ++v7 >= v6 )
    return 0;
    }
    return *(char *)(*(int *)(v8 + 4 * v7) + 40);
  }
    return v5;
}
}
} // namespace gamemd

// 0x664380
namespace gamemd {
void nullsub_33()
{
  ;
}
} // namespace gamemd

// 0x664B10
namespace gamemd {
void sub_664B10()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B05358 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x664B40
namespace gamemd {
void sub_664B40()
{
{
    DataGlobal_B053A8 = DataGlobal_B05358 / 60.0;
}
}
} // namespace gamemd

// 0x664B60
namespace gamemd {
void sub_664B60()
{
{
    DataGlobal_B05390 = 1.0 / DataGlobal_B053A8;
}
}
} // namespace gamemd

// 0x664B80
namespace gamemd {
void sub_664B80()
{
{
    DataGlobal_B05388 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x664BA0
namespace gamemd {
void sub_664BA0()
{
{
    DataGlobal_B05360 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x664BC0
namespace gamemd {
void sub_664BC0()
{
{
    DataGlobal_B05338 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x664BE0
namespace gamemd {
long long sub_664BE0()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_B05338 - DataGlobal_B05360);
    result = Math::RoundToInt(v0 * DataGlobal_B05358 * 0.5);
    DataGlobal_B053B0 = result;
    return result;
}
}
} // namespace gamemd

// 0x664C20
namespace gamemd {
void sub_664C20()
{
{
    DataGlobal_B05368 = Math::ArcTan((double)DataGlobal_B053B0 * 0.00390625);
}
}
} // namespace gamemd

// 0x664C50
namespace gamemd {
void sub_664C50()
{
{
    DataGlobal_B05380 = Math::ArcTan((double)(2 * DataGlobal_B053B0) / DataGlobal_B05358);
}
}
} // namespace gamemd

// 0x664C80
namespace gamemd {
long long sub_664C80()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B053B0) + 0.5);
    DataGlobal_B053A4 = result;
    return result;
}
}
} // namespace gamemd

// 0x664CB0
namespace gamemd {
int sub_664CB0()
{
{
    DataGlobal_B05350 = 0;
    DataGlobal_B05352 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x664CC0
namespace gamemd {
int sub_664CC0()
{
{
    DataGlobal_B05370 = 0;
    DataGlobal_B05374 = 0;
    DataGlobal_B05378 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x664CE0
namespace gamemd {
int sub_664CE0()
{
{
    DataGlobal_B053A0 = 0;
    DataGlobal_B05398 = 128;
    DataGlobal_B0539C = 128;
    return 128;
}
}
} // namespace gamemd

// 0x664D00
namespace gamemd {
int sub_664D00()
{
{
    DataGlobal_B05340 = 0;
    DataGlobal_B05344 = 0;
    DataGlobal_B05348 = 0;
    DataGlobal_B0534C = 0;
    return 0;
}
}
} // namespace gamemd
