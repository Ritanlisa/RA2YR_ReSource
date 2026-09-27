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

// 0x6613A0
namespace gamemd {
void Color_ComputeSaturation(unsigned int a1, int a2, int a3)
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
  int16_t v14; // [esp+1Ch] [ebp-8h]
  int v15; // [esp+20h] [ebp-4h]

  v3 = *(uint8_t *)a1; /*0x6613ad*/
  v4 = *(uint8_t *)(a1 + 2); /*0x6613b4*/
  v5 = *(uint8_t *)(a1 + 1); /*0x6613b7*/
  IDA_LOBYTE(a1) = 0; /*0x6613b9*/
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
  IDA_LOBYTE(v15) = 0; /*0x6613e5*/
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
  IDA_LOBYTE(v14) = a1; /*0x6614ba*/
  IDA_HIBYTE(v14) = v15; /*0x6614c8*/
  *(unsigned short *)a3 = v14; /*0x6614d1*/
  *(unsigned char *)(a3 + 2) = v6; /*0x6614d7*/
  return a3; /*0x6614d4*/
}
}
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
void UpdateBullets(int a1)
{
  ObjectClass *v1; // ecx
  ObjectClass *v3; // eax
  int v4; // edi
  IUnknown *v7; // edx
  AnimClass *v9; // ebx
  AnimClass *v11; // eax
  int edx19; // edx
  IUnknown *v13; // ecx
  int eax24; // eax
  int objectTypeFlags; // ecx
  IUnknown *v21; // ebx
  IUnknown *v22; // edi
  int edx34; // edx
  AnimClass *v25; // edi
  AnimClass *v27; // eax
  int edx41; // edx
  IUnknown *v31; // ecx
  int edi43; // edi
  ObjectClass *v35; // ecx
  int edx50; // edx
  IUnknown *v40; // edx
  unsigned short *eax63; // eax
  AnimClass *v43; // edi
  AnimClass *v45; // eax
  ObjectClass *v46; // ecx
  double st7_69; // st7
  double st6_69; // st6
  IUnknown *v51; // ecx
  int ebx82; // ebx
  BuildingTypeClass *v57; // eax
  unsigned int *ebx90; // ebx
  ObjectClass *v61; // ecx
  int *eax91a; // eax
  ObjectClass *v75; // ecx
  ObjectClass *v77; // eax
  int eax98; // eax
  ObjectClass *v82; // eax
  int *eax100; // eax
  BuildingTypeClass *v88; // eax
  int ecx102; // ecx
  IUnknown *v94; // edx
  AnimClass *v96; // edi
  AnimClass *v98; // eax
  int edx118; // edx
  ObjectClass *v103; // eax
  double st7_120a; // st7
  VectorClass_flat **v108; // eax
  ObjectClass *v111; // ecx
  VectorClass_flat *v110; // eax
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
  IUnknown *v128[3]; // [esp+84h] [ebp-3Ch] BYREF
  CoordStruct v129; // [esp+90h] [ebp-30h] BYREF
  CoordStruct v131; // [esp+A8h] [ebp-18h] BYREF
  CoordStruct aP2; // [esp+B4h] [ebp-Ch] BYREF

  v1 = *(ObjectClass **)(a1 + 8);
  int v2 = *(unsigned int *)&v1[10].__pad_0[12];
  if ( v2 == *(unsigned int *)(*(unsigned int *)&stru_87C374[44652] + 1248) )
  {
    v3 = (ObjectClass *)(*(unsigned int *)&stru_87C374[44652] + 1200);
LABEL_6:
    v113 = v3;
    v4 = (int)v3;
    goto LABEL_7;
  }
  if ( v2 != *(unsigned int *)(*(unsigned int *)&stru_87C374[44652] + 1352) )
  {
    v3 = (ObjectClass *)(*(unsigned int *)&stru_87C374[44652] + 1252);
    goto LABEL_6;
  }
  v4 = *(unsigned int *)&stru_87C374[44652] + 1304;
  v113 = (ObjectClass *)(*(unsigned int *)&stru_87C374[44652] + 1304);
LABEL_7:
  switch ( *(unsigned int *)(a1 + 60) )
  {
  int v127; // [esp+7Ch] [ebp-44h]
  int v126; // [esp+78h] [ebp-48h]
  int v125; // [esp+74h] [ebp-4Ch] BYREF
  unsigned int *v60; // edi
    case 1:
      *(unsigned int *)(a1 + 68) = 0;
      *(unsigned int *)(a1 + 72) = 0;
      int v5 = *(unsigned int *)(*(unsigned int *)(a1 + 8) + 724);
      bool v6 = v5 && VeterancyStruct::IsElite((float *)(v5 + 336));
      *(unsigned char *)(a1 + 77) = v6;
      if ( *(unsigned int *)(v4 + 48) != *(unsigned int *)(*(unsigned int *)&stru_87C374[44652] + 1352) )
      {
        *(unsigned char *)(a1 + 76) = 1;
LABEL_23:
        IDA_LODWORD(var84_4) = *(unsigned int *)(a1 + 44);
        if ( !IDA_LODWORD(var84_4) )
          goto LABEL_29;
        v13 = *(IUnknown **)(a1 + 32);
        eax24 = *(unsigned int *)(a1 + 40);
        if ( v13 != (IUnknown *)-1 )
        {
          int v14 = *(unsigned int *)&HouseClass_Player[45112] - (unsigned int)v13;
          if ( v14 >= eax24 )
            eax24 = 0;
          else
            eax24 -= v14;
        }
        if ( (double)(IDA_LODWORD(var84_4) - eax24) / (double)IDA_SLODWORD(var84_4) == 1.0 )
        {
LABEL_29:
          int v15 = v126;
          int v16 = -(*(unsigned int *)(*(unsigned int *)&stru_87C374[44652] + 1352) != *(unsigned int *)(v4 + 48));
          IDA_LOBYTE(v16) = v16 & 0xFC;
          *(unsigned int *)(a1 + 60) = v16 + 6;
          int v17 = *(unsigned int *)(v4 + 4);
          *(unsigned int *)(a1 + 32) = *(unsigned int *)&HouseClass_Player[45112];
          *(unsigned int *)(a1 + 36) = v15;
          *(unsigned int *)(a1 + 40) = v17;
          *(unsigned int *)(a1 + 44) = v17;
        }
        goto LABEL_111;
      }
      v7 = *(IUnknown **)(a1 + 48);
      int v8 = *(unsigned int *)(a1 + 56);
      if ( v7 == (IUnknown *)-1 )
        goto LABEL_16;
      if ( *(unsigned int *)&HouseClass_Player[45112] - (int)v7 >= v8 )
        goto LABEL_17;
      v8 -= *(unsigned int *)&HouseClass_Player[45112] - (unsigned int)v7;
LABEL_16:
      if ( !v8 )
      {
LABEL_17:
        v9 = (AnimClass *)new AnimClass;
        if ( v9 )
        {
          aP2 = *(CoordStruct *)(*(unsigned int *)(a1 + 8) + 156);
          v11 = (AnimClass *)AnimTypeClass::FindIndex(*(void **)&stru_830620[37772]);
          AnimClass::ctor(
            (void **)v9,
            *(CoordStruct **)(*(unsigned int *)&stru_89E138[90140] + 4 * (unsigned int)v11),
            &aP2,
            (CoordStruct *)2,
            (CoordStruct *)1,
            (void *)0x600,
            (void *)0xFFFFFFF6,
            0);
        }
        edx19 = v126;
        *(unsigned int *)(a1 + 48) = *(unsigned int *)&HouseClass_Player[45112];
        *(unsigned int *)(a1 + 52) = edx19;
        *(unsigned int *)(a1 + 56) = 24;
      }
      if ( *(unsigned char *)(a1 + 76) )
      {
        (*(void (__thiscall **)(unsigned int, unsigned int))(**(unsigned int **)(a1 + 8) + 292))(*(unsigned int *)(a1 + 8), 0);
        *(unsigned char *)(a1 + 76) = 0;
        Targeting::Readd(*(IUnknown **)(a1 + 8));
        (*(void (__thiscall **)(unsigned int, int))(**(unsigned int **)(a1 + 8) + 292))(*(unsigned int *)(a1 + 8), 1);
      }
      goto LABEL_23;
    case 2:
      *(unsigned int *)(a1 + 68) = 0;
      *(unsigned int *)(a1 + 72) = 0;
      int v36 = *(unsigned int *)(*(unsigned int *)(a1 + 8) + 724);
      bool v37 = v36 && VeterancyStruct::IsElite((float *)(v36 + 336));
      *(unsigned char *)(a1 + 77) = v37;
      IDA_LODWORD(var84_4) = *(unsigned int *)(a1 + 44);
      if ( !IDA_LODWORD(var84_4) )
        goto LABEL_63;
      v40 = *(IUnknown **)(a1 + 32);
      int v39 = *(unsigned int *)(a1 + 40);
      if ( v40 != (IUnknown *)-1 )
      {
        if ( *(unsigned int *)&HouseClass_Player[45112] - (int)v40 >= v39 )
          v39 = 0;
        else
          v39 -= *(unsigned int *)&HouseClass_Player[45112] - (unsigned int)v40;
      }
      IDA_LODWORD(desiredFacing_4) = IDA_LODWORD(var84_4) - v39;
      if ( (double)(IDA_LODWORD(var84_4) - v39) / (double)IDA_SLODWORD(var84_4) != 1.0 )
      {
  double v47; // st5
        st7_69 = *(float *)&v113->__pad_0[8] * 1.570796326794897;
        st6_69 = *(float *)&v113->__pad_0[12] * 1.570796326794897;
        IDA_LODWORD(desiredFacing_4) = *(unsigned int *)(a1 + 44);
        if ( IDA_LODWORD(desiredFacing_4) )
        {
          v51 = *(IUnknown **)(a1 + 32);
          int v49 = *(unsigned int *)(a1 + 40);
          if ( v51 != (IUnknown *)-1 )
          {
            if ( *(unsigned int *)&HouseClass_Player[45112] - (int)v51 >= v49 )
              v49 = 0;
            else
              v49 -= *(unsigned int *)&HouseClass_Player[45112] - (unsigned int)v51;
          }
          IDA_LODWORD(var64_4) = IDA_LODWORD(desiredFacing_4) - v49;
          v47 = (double)(IDA_LODWORD(desiredFacing_4) - v49) / (double)IDA_SLODWORD(desiredFacing_4);
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
        *(unsigned int *)(a1 + 60) = 3;
        eax63 = (unsigned short *)(*(int (__thiscall **)(unsigned int, IUnknown **))(**(unsigned int **)(a1 + 8) + 756))(
                           *(unsigned int *)(a1 + 8),
                           v128);
        if ( *eax63 == word_B04E18 && eax63[1] == word_B04E1A )
          GadgetGrid::InsertItem(&stru_87C374[46356], *(ObjectClass **)(a1 + 8));
        v43 = (AnimClass *)new AnimClass;
        if ( v43 )
        {
          v129 = *(CoordStruct *)(*(unsigned int *)(a1 + 8) + 156);
          v45 = (AnimClass *)AnimTypeClass::FindIndex(*(void **)&stru_830620[37772]);
          AnimClass::ctor(
            (void **)v43,
            *(CoordStruct **)(*(unsigned int *)&stru_89E138[90140] + 4 * (unsigned int)v45),
            &v129,
            (CoordStruct *)2,
            (CoordStruct *)1,
            (void *)0x600,
            (void *)0xFFFFFFF6,
            0);
        }
        v46 = *(ObjectClass **)(a1 + 8);
        v124 = *(CoordStruct *)v46->location;
        int v44 = (*(int (__thiscall **)(ObjectClass *))(*(unsigned int *)v46->__pad_0 + 132))(v46);
        StartAudioControllerAt(*(AudioController **)(v44 + 1324), (int)&v124, 0);
      }
      goto LABEL_111;
    case 3:
      if ( !*(unsigned char *)(a1 + 76) )
      {
        (*(void (__thiscall **)(ObjectClass *, unsigned int))(*(unsigned int *)v1->__pad_0 + 292))(v1, 0);
        *(unsigned char *)(a1 + 76) = 1;
        Targeting::Readd(*(IUnknown **)(a1 + 8));
        (*(void (__thiscall **)(unsigned int, int))(**(unsigned int **)(a1 + 8) + 292))(*(unsigned int *)(a1 + 8), 1);
      }
      *(double *)(a1 + 68) = *(float *)(v4 + 24) + *(double *)(a1 + 68);
      if ( (double)*(int *)((*(int (__thiscall **)(unsigned int))(**(unsigned int **)(a1 + 8) + 132))(*(unsigned int *)(a1 + 8)) + 1656) < *(double *)(a1 + 68) )
        *(double *)(a1 + 68) = (double)*(int *)((*(int (__thiscall **)(unsigned int))(**(unsigned int **)(a1 + 8) + 132))(*(unsigned int *)(a1 + 8))
                                              + 1656);
      if ( (*(int (__thiscall **)(unsigned int))(**(unsigned int **)(a1 + 8) + 456))(*(unsigned int *)(a1 + 8)) >= *(unsigned int *)(v4 + 28) )
      {
        *(unsigned int *)(a1 + 60) = 4;
        int v50 = *(unsigned int *)(a1 + 20);
        ebx82 = *(unsigned int *)(a1 + 24);
        unsigned int * v52 = (unsigned int *)(*(int (__thiscall **)(unsigned int, int *))(**(unsigned int **)(a1 + 8) + 72))(*(unsigned int *)(a1 + 8), &v125);
        int v53 = *v52 - v50;
        v57 = (BuildingTypeClass *)(v52[1] - ebx82);
        desiredFacing_4 = COERCE_DOUBLE(IDA___PAIR64__((unsigned int)v57, v53));
        double v55 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64((double)(int)v57 * (double)(int)v57 + (double)v53 * (double)v53));
        *(unsigned int *)(a1 + 84) = Math::RoundToInt(v55);
      }
      goto LABEL_111;
    case 4:
      if ( (*(int (__thiscall **)(ObjectClass *))(*(unsigned int *)v1->__pad_0 + 456))(v1) <= 0 )
      {
        TechnoClass::CalculateDamage(a1 - 4);
        return 0;
      }
      *(double *)(a1 + 68) = *(float *)(v4 + 24) + *(double *)(a1 + 68);
      if ( (double)*(int *)((*(int (__thiscall **)(unsigned int))(**(unsigned int **)(a1 + 8) + 132))(*(unsigned int *)(a1 + 8)) + 1656) < *(double *)(a1 + 68) )
        *(double *)(a1 + 68) = (double)*(int *)((*(int (__thiscall **)(unsigned int))(**(unsigned int **)(a1 + 8) + 132))(*(unsigned int *)(a1 + 8))
                                              + 1656);
      if ( *(unsigned char *)(v4 + 44) && *(unsigned int *)(a1 + 84) )
      {
        ebx90 = (unsigned int *)(a1 - 4);
        if ( BulletClass::ComputeImpactTrajectory(a1 - 4, v4) )
          return 0;
        v61 = *(ObjectClass **)(a1 + 8);
        int v59 = *(unsigned int *)(a1 + 20);
        v60 = (unsigned int *)(a1 + 20);
        IDA_HIDWORD(desiredFacing_4) = *(unsigned int *)(a1 + 24);
        IDA_LODWORD(desiredFacing_4) = v59;
        eax91a = (int *)(*(int (__thiscall **)(ObjectClass *, int *))(*(unsigned int *)v61->__pad_0 + 72))(v61, &v125);
        int v62 = *eax91a;
        int v63 = eax91a[1];
        IDA_LODWORD(var84_4) = v62 - IDA_LODWORD(desiredFacing_4);
        IDA_HIDWORD(var84_4) = v63 - IDA_HIDWORD(desiredFacing_4);
  double v64; // st7
        v64 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64(
                                            (double)(v63 - IDA_HIDWORD(desiredFacing_4))
                                          * (double)(v63 - IDA_HIDWORD(desiredFacing_4))
                                          + (double)(v62 - IDA_LODWORD(desiredFacing_4))
                                          * (double)(v62 - IDA_LODWORD(desiredFacing_4))));
        IDA_LODWORD(desiredFacing_4) = Math::RoundToInt(v64);
        double v65 = (double)IDA_SLODWORD(desiredFacing_4) / (double)*(int *)(a1 + 84);
        int v66 = *(unsigned int *)(ebx90[3] + 156);
        int v67 = *(unsigned int *)(ebx90[3] + 160);
        v119 = *(ObjectClass **)(ebx90[3] + 164);
        int v68 = ebx90[6] - v66;
        int v69 = ebx90[7] - v67;
        v127 = ebx90[8] - (unsigned int)v119;
        var84_4 = v65;
        var74_4 = 1.0 - v65;
        IDA_LODWORD(desiredFacing_4) = v69 * v69 + v68 * v68;
        double v70 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64((double)IDA_SLODWORD(desiredFacing_4)));
        if ( v70 <= 0.0 )
          double v71 = -1.570796326794897;
        else
          v71 = Math::ArcTan((double)v127 / v70);
        *(float *)(a1 + 80) = *(float *)&v113->__pad_0[12] * var84_4 * 1.570796326794897 + v71 * var74_4;
      }
      else
      {
        if ( *(float *)(a1 + 80) > 0.0 )
        {
          double v72 = *(float *)(a1 + 80) - *(float *)(v4 + 16);
          *(float *)(a1 + 80) = v72;
          if ( v72 < 0.0 )
            *(unsigned int *)(a1 + 80) = 0;
        }
        v60 = (unsigned int *)(a1 + 20);
        var74_4 = *(double *)(a1 + 20);
        v75 = *(ObjectClass **)(a1 + 8);
        v123 = *(ObjectClass **)(a1 + 28);
        v125 = v75->location[0];
        v126 = v75->location[1];
        int v74 = v75->location[2] - (unsigned int)v123;
        IDA_LODWORD(var84_4) = v75->location[0];
        v77 = (ObjectClass *)v75->location[2];
        IDA_HIDWORD(var84_4) = v75->location[1];
        int v76 = *(unsigned int *)v75->__pad_0;
        v121 = (IUnknown *)v77;
        eax98 = (*(int (__thiscall **)(ObjectClass *, int *))(v76 + 72))(v75, &v125);
        int v78 = *(unsigned int *)eax98 - IDA_LODWORD(var74_4);
        int v79 = *(unsigned int *)(eax98 + 4);
        v82 = *(ObjectClass **)(eax98 + 8);
        IDA_LODWORD(desiredFacing_4) = v78;
        IDA_HIDWORD(desiredFacing_4) = v79 - IDA_HIDWORD(var74_4);
        v119 = (ObjectClass *)((char *)v82 - (char *)v121);
  double v81; // st7
        v81 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64(
                                            (double)((char *)v82 - (char *)v121) * (double)((char *)v82 - (char *)v121)
                                          + (double)(v79 - IDA_HIDWORD(var74_4)) * (double)(v79 - IDA_HIDWORD(var74_4))
                                          + (double)v78 * (double)v78));
        if ( (int)Math::RoundToInt(v81) <= v74 )
          *(unsigned int *)(a1 + 60) = 5;
      }
      eax100 = (int *)(*(int (__thiscall **)(unsigned int, int *))(**(unsigned int **)(a1 + 8) + 72))(*(unsigned int *)(a1 + 8), &v125);
      int v83 = *eax100;
      IDA_LODWORD(desiredFacing_4) = *v60;
      IDA_LODWORD(var84_4) = v83;
      *((double *)&_8 + 1) = (double)IDA_SLODWORD(desiredFacing_4) - (double)v83;
      *(double *)&_8 = (double)eax100[1] - (double)(int)v60[1];
      double v84 = Math::CalcAngle((AbstractClass *)_8, *(double *)((char *)&_8 + 4));
      IDA_LOWORD(desiredFacing_4) = Math::RoundToInt((v84 - 1.570796326794897) * -10430.06004058427);
      int v85 = *(unsigned int *)(a1 + 8);
      desiredFacing = (ObjectClass *)IDA_LODWORD(desiredFacing_4);
      FacingClass::Update((FacingClass *)(v85 + 904), (DirStruct *)&desiredFacing);
LABEL_111:
      if ( !(*(uint8_t (__stdcall **)(int))(*(unsigned int *)a1 + 128))(a1) )
        goto LABEL_119;
      v94 = *(IUnknown **)(a1 + 48);
      int v95 = *(unsigned int *)(a1 + 56);
      if ( v94 == (IUnknown *)-1 )
        goto LABEL_115;
      if ( *(unsigned int *)&HouseClass_Player[45112] - (int)v94 >= v95 )
        goto LABEL_116;
      v95 -= *(unsigned int *)&HouseClass_Player[45112] - (unsigned int)v94;
LABEL_115:
      if ( !v95 )
      {
LABEL_116:
        v96 = (AnimClass *)new AnimClass;
        if ( v96 )
        {
          v124 = *(CoordStruct *)(*(unsigned int *)(a1 + 8) + 156);
          v98 = (AnimClass *)AnimTypeClass::FindIndex(*(void **)&stru_830620[37776]);
          AnimClass::ctor(
            (void **)v96,
            *(CoordStruct **)(*(unsigned int *)&stru_89E138[90140] + 4 * (unsigned int)v98),
            &v124,
            0,
            (CoordStruct *)1,
            (void *)0x600,
            0,
            0);
        }
        edx118 = v126;
        *(unsigned int *)(a1 + 48) = *(unsigned int *)&HouseClass_Player[45112];
        *(unsigned int *)(a1 + 52) = edx118;
        *(unsigned int *)(a1 + 56) = 3;
      }
LABEL_119:
      if ( *(double *)(a1 + 68) > 0.0 )
      {
        desiredFacing = (ObjectClass *)Math::RoundToInt(*(double *)(a1 + 68));
        int v99 = *(unsigned int *)(a1 - 4 + 12) + 156;
        desiredFacing_4 = (double)(int)desiredFacing;
        double aP0 = *(float *)(a1 - 4 + 84);
        int v101 = *(unsigned int *)(v99 + 4);
        IDA_LODWORD(var84_4) = *(unsigned int *)v99;
        v103 = *(ObjectClass **)(v99 + 8);
        IDA_HIDWORD(var84_4) = v101;
        v121 = (IUnknown *)v103;
        st7_120a = Math::ArcTan2((IUnknown *)IDA_LODWORD(aP0));
        IDA_LODWORD(var64_4) = Math::RoundToInt(st7_120a * desiredFacing_4);
        desiredFacing = (ObjectClass *)(*(int16_t *)ProgressTimer::GetValue(
                                                      (unsigned short *)(*(unsigned int *)(a1 - 4 + 12) + 904),
                                                      (IUnknown *)v128)
                                      - 0x3FFF);
        *(double *)&v128[1] = (double)(int)desiredFacing * -0.00009587672516830327;
        var64_4 = (double)IDA_SLODWORD(var64_4);
        var74_4 = (double)IDA_SHIDWORD(var84_4);
        double v104 = Math::SinCos(v128[1]);
        desiredFacing = (ObjectClass *)Math::RoundToInt(var74_4 - v104 * var64_4);
        double v105 = Math::ArcTan2(v128[1]);
        int v106 = Math::RoundToInt(v105 * var64_4 + (double)IDA_SLODWORD(var84_4));
        aP0_4 = *(float *)(a1 - 4 + 84);
        v129.Y = (int)desiredFacing;
        v129.Z = (int)v121;
        double v107 = Math::SinCos((IUnknown *)IDA_LODWORD(aP0_4));
        v124.Z = Math::RoundToInt(v107 * desiredFacing_4 + (double)(int)v121);
        v124.X = v106;
        v124.Y = v129.Y;
        IDA_LOWORD(v116) = v106 / 256;
        IDA_HIWORD(v116) = v129.Y / 256;
        desiredFacing = v116;
        if ( LayerClass::CoordinatesLegal(&stru_87C374[13428], (IUnknown *)&desiredFacing) )
          (*(void (__thiscall **)(unsigned int, CoordStruct *))(**(unsigned int **)(a1 + 8) + 436))(*(unsigned int *)(a1 + 8), &v124);
        v108 = (VectorClass_flat **)(*(int (__thiscall **)(unsigned int, IUnknown **))(**(unsigned int **)(a1 + 8) + 440))(
                                 *(unsigned int *)(a1 + 8),
                                 v128);
        v111 = *(ObjectClass **)(a1 + 8);
        v110 = *v108;
        desiredFacing = (ObjectClass *)v110;
        if ( (unsigned short)v110 != *(unsigned short *)v111[8].__pad_0 || IDA_HIWORD(desiredFacing) != *(unsigned short *)&v111[8].__pad_0[2] )
        {
          if ( v111->isAliveFlag )
            Coord::ToGridIndex(
              &stru_87C374[46356],
              (VectorClass_flat *)v111,
              *(VectorClass_flat **)v111[8].__pad_0,
              v110);
        }
        if ( *(int *)(*(unsigned int *)(a1 + 8) + 108) <= 0 )
          TechnoClass::CalculateDamage(a1 - 4);
      }
      return (*(char (__stdcall **)(int))(*(unsigned int *)a1 + 16))(a1);
    case 5:
      unsigned int * v86 = (unsigned int *)(a1 - 4);
      if ( BulletClass::ComputeImpactTrajectory(a1 - 4, v4) )
        return 0;
      v88 = (BuildingTypeClass *)(v86[6] - *(unsigned int *)(v86[3] + 156));
      ecx102 = v86[7] - *(unsigned int *)(v86[3] + 160);
      v127 = v86[8] - *(unsigned int *)(v86[3] + 164);
      IDA_LODWORD(desiredFacing_4) = (unsigned int)v88 * (unsigned int)v88 + ecx102 * ecx102;
      double v89 = Math::Sqrt((AbstractClass *)COERCE_UNSIGNED_INT64((double)IDA_SLODWORD(desiredFacing_4)));
      if ( v89 <= 0.0 )
        double v90 = -1.570796326794897;
      else
        v90 = Math::ArcTan((double)v127 / v89);
      double v91 = v90 - *(float *)(a1 + 80);
      double v92 = v91;
      if ( v91 < 0.0 )
        v92 = -v91;
      if ( v92 <= *(float *)&v113->uniqueId )
      {
        *(float *)(a1 + 80) = *(float *)(a1 + 80) + v91;
      }
      else
      {
        if ( v91 >= 0.0 )
          double v93 = *(float *)&v113->uniqueId + *(float *)(a1 + 80);
        else
          v93 = *(float *)(a1 + 80) - *(float *)&v113->uniqueId;
        *(float *)(a1 + 80) = v93;
      }
      goto LABEL_111;
    case 6:
      objectTypeFlags = v1[4].objectTypeFlags;
      bool v19 = objectTypeFlags && VeterancyStruct::IsElite((float *)(objectTypeFlags + 336));
      v21 = (IUnknown *)(a1 + 48);
      *(unsigned char *)(a1 + 77) = v19;
      v22 = *(IUnknown **)&HouseClass_Player[45112];
      edx34 = *(unsigned int *)(a1 + 48);
      int v23 = *(unsigned int *)(a1 + 56);
      if ( edx34 == -1 )
        goto LABEL_37;
      if ( *(unsigned int *)&HouseClass_Player[45112] - edx34 >= v23 )
        goto LABEL_38;
      v23 -= *(unsigned int *)&HouseClass_Player[45112] - edx34;
LABEL_37:
      if ( !v23 )
      {
LABEL_38:
        v25 = (AnimClass *)new AnimClass;
        if ( v25 )
        {
          v131 = *(CoordStruct *)(*(unsigned int *)(a1 + 8) + 156);
          v27 = (AnimClass *)AnimTypeClass::FindIndex(*(void **)&stru_830620[37772]);
          AnimClass::ctor(
            (void **)v25,
            *(CoordStruct **)(*(unsigned int *)&stru_89E138[90140] + 4 * (unsigned int)v27),
            &v131,
            (CoordStruct *)2,
            (CoordStruct *)1,
            (void *)0x600,
            (void *)0xFFFFFFF6,
            0);
        }
        v21->field_0 = *(unsigned int *)&HouseClass_Player[45112];
        *(unsigned int *)(a1 + 52) = v126;
        *(unsigned int *)(a1 + 56) = 24;
        v22 = *(IUnknown **)&HouseClass_Player[45112];
      }
      int v26 = *(unsigned int *)(a1 + 8) + 156;
      IDA_LODWORD(var74_4) = *(unsigned int *)v26;
      edx41 = *(unsigned int *)(a1 + 44);
      int v28 = *(unsigned int *)(v26 + 4);
      IDA_LODWORD(desiredFacing_4) = edx41;
      IDA_HIDWORD(var74_4) = v28;
      v123 = *(ObjectClass **)(v26 + 8);
      if ( !edx41 )
        goto LABEL_47;
      v31 = *(IUnknown **)(a1 + 32);
      int v30 = *(unsigned int *)(a1 + 40);
      if ( v31 != (IUnknown *)-1 )
      {
        edi43 = (char *)v22 - (char *)v31;
        if ( edi43 >= v30 )
          v30 = 0;
        else
          v30 -= edi43;
      }
      IDA_LODWORD(var84_4) = edx41 - v30;
      if ( (double)(edx41 - v30) / (double)IDA_SLODWORD(desiredFacing_4) != 1.0 )
      {
        v123 = (ObjectClass *)((char *)v123 + v113->abstractFlags);
        IDA_LOWORD(v115) = IDA_SLODWORD(var74_4) / 256;
        IDA_HIWORD(v115) = IDA_SHIDWORD(var74_4) / 256;
        IDA_LODWORD(var64_4) = v115;
        if ( LayerClass::CoordinatesLegal(&stru_87C374[13428], (IUnknown *)&var64_4) )
          (*(void (__thiscall **)(unsigned int, double *))(**(unsigned int **)(a1 + 8) + 436))(*(unsigned int *)(a1 + 8), &var74_4);
      }
      else
      {
LABEL_47:
        *(float *)(a1 + 80) = *(float *)&v113->__pad_0[12] * 1.570796326794897;
  unsigned short *v32; // eax
        v32 = (unsigned short *)(*(int (__thiscall **)(unsigned int, IUnknown **))(**(unsigned int **)(a1 + 8) + 756))(
                         *(unsigned int *)(a1 + 8),
                         &v128[1]);
        if ( *v32 == word_B04E18 && v32[1] == word_B04E1A )
        {
          v35 = *(ObjectClass **)(a1 + 8);
  int v130[3]; // [esp+9Ch] [ebp-24h] BYREF
          v130[0] = v35->location[0];
          v130[1] = v35->location[1];
          v130[2] = v35->location[2];
          int v34 = (*(int (__thiscall **)(ObjectClass *))(*(unsigned int *)v35->__pad_0 + 132))(v35);
          StartAudioControllerAt(*(AudioController **)(v34 + 1324), (int)v130, 0);
          GadgetGrid::InsertItem(&stru_87C374[46356], *(ObjectClass **)(a1 + 8));
        }
        edx50 = v126;
        v21->field_0 = *(unsigned int *)&HouseClass_Player[45112];
        *(unsigned int *)(a1 + 52) = edx50;
        *(unsigned int *)(a1 + 56) = 0;
        *(unsigned int *)(a1 + 60) = 3;
      }
      goto LABEL_111;
    default:
      goto LABEL_111;
  }
}
} // namespace gamemd

// 0x663DB0
namespace gamemd {
AbstractClass * * E4Recv_663DB0::LaunchMultiplayerHost(unsigned char * a2)
{
  uint8_t *v4; // eax
  int *v5; // esi
  uint8_t v6; // dl
  uint8_t v7; // al
  int *v8; // eax
  int v9; // esi
  int v10; // edi
  int v11; // eax
  uint8_t v13; // [esp+5h] [ebp-583h]
  uint8_t v15; // [esp+7h] [ebp-581h]
  int v16; // [esp+8h] [ebp-580h]
  DWORD TicksTimer; // [esp+10h] [ebp-578h]
  int v19; // [esp+18h] [ebp-570h]
  int v20; // [esp+1Ch] [ebp-56Ch] BYREF
  char v21[2]; // [esp+22h] [ebp-566h] BYREF
  char v22[4]; // [esp+24h] [ebp-564h] BYREF
  unsigned char v23[12]; // [esp+28h] [ebp-560h] BYREF
  struct _PROCESS_INFORMATION ProcessInformation; // [esp+34h] [ebp-554h] BYREF
  struct _STARTUPINFOA StartupInfo; // [esp+44h] [ebp-544h] BYREF
  CHAR CommandLine[256]; // [esp+88h] [ebp-500h] BYREF
  char v27[1024]; // [esp+188h] [ebp-400h] BYREF

  TicksTimer = Timer::GetTicks(); /*0x663dc6*/
  v19 = 0; /*0x663dca*/
  Waypoint::InitInvalid(v23); /*0x663dd2*/
  Debug::Log(); /*0x663ddc*/
  GetStartupInfoA(&StartupInfo); /*0x663de9*/
  if ( !(*(int (__thiscall **)(int))(*(unsigned int *)g_NetworkInterface + 72))(g_NetworkInterface) ) /*0x663df7*/
    return 0; /*0x663e07*/
  if ( a2 ) /*0x663e15*/
  {
    sprintf(CommandLine, "mphmd.exe %d.%d.%d.%d", *a2, a2[1], a2[2], a2[3]); /*0x663f0e*/
    if ( *(unsigned int *)Game_PlayerInfoArray == -40 ) /*0x663f21*/
      goto LABEL_11; /*0x663f21*/
    Network::CopyAddress((unsigned int *)(*(unsigned int *)Game_PlayerInfoArray + 40), &v20, (int)&v7); /*0x663f31*/
    v6 = a2[2]; /*0x663f39*/
    v7 = *a2; /*0x663f3c*/
    v13 = a2[1]; /*0x663f3e*/
    v6 = v6; /*0x663f42*/
    v7 = v7; /*0x663f4a*/
    v15 = a2[3]; /*0x663f5e*/
    NetworkID::Assign(&dword_A8DBB0, &v20, (int)&v7, 0); /*0x663f62*/
    Network::SetPort(&dword_A8DBB0, *(unsigned short *)(*(unsigned int *)Game_PlayerInfoArray + 40)); /*0x663f78*/
    IDA_LOWORD(dword_A8DBBC) = *(unsigned short *)(*(unsigned int *)Game_PlayerInfoArray + 40); /*0x663f88*/
    v8 = (int *)(*(unsigned int *)Game_PlayerInfoArray + 40); /*0x663f91*/
    dword_A8DBA4 = *v8; /*0x663f96*/
    dword_A8DBA8 = v8[1]; /*0x663f9f*/
    dword_A8DBAC = v8[2]; /*0x663fa8*/
    goto LABEL_10; /*0x663fa8*/
  }
  if ( !Game_PlayerCount ) /*0x663e22*/
  {
    v4 = (uint8_t *)(*(int (__thiscall **)(int, unsigned int))(*(unsigned int *)g_NetworkInterface + 76))( /*0x663e2d*/
                              g_NetworkInterface,
                              0);
    sprintf(CommandLine, "mphmd.exe %d.%d.%d.%d", *v4, v4[1], v4[2], v4[3]); /*0x663e54*/
    goto LABEL_11; /*0x663e5c*/
  }
  v5 = (int *)(*(unsigned int *)Game_PlayerInfoArray + 40); /*0x663e69*/
  if ( *(unsigned int *)Game_PlayerInfoArray != -40 ) /*0x663e6c*/
  {
    Network::CopyAddress(v5, &v20, (int)&v7); /*0x663e7e*/
    sprintf(CommandLine, "mphmd.exe %d.%d.%d.%d", v7, v13, v6, v15); /*0x663ebb*/
    dword_A8DBB0 = *v5; /*0x663ec5*/
    dword_A8DBB4 = v5[1]; /*0x663ecd*/
    dword_A8DBB8 = v5[2]; /*0x663ed6*/
    IDA_LOWORD(dword_A8DBBC) = 0; /*0x663edc*/
  LABEL_10:
    Network::FormatAddress((uint16_t *)&dword_A8DBB0, 0); /*0x663fad*/
    Debug::Log(); /*0x663fbf*/
  }
  LABEL_11:
  if ( CreateProcessA(ApplicationName, CommandLine, 0, 0, 0, 0x200u, 0, 0, &StartupInfo, &ProcessInformation) ) /*0x663fed*/
  {
    this->M28 = ProcessInformation.hProcess; /*0x664029*/
    Debug::Log(); /*0x66402c*/
    SetFocus(g_hWnd); /*0x66403b*/
    v9 = 1800; /*0x66404e*/
    TicksTimer = Timer::GetTicks(); /*0x664053*/
    v16 = v16; /*0x664057*/
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
        this->M24 = 1; /*0x6640cb*/
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
// 0x664750
namespace gamemd {
int E4Recv_664750::sub_664750(char a2)
{
  int v2; // eax
  unsigned char v4[340]; // [esp+4h] [ebp-154h] BYREF

  memset(v4, 0, 338); /*0x664764*/
  v2 = *(&this->vtable34); /*0x66476c*/
  if ( (unsigned char)v2 ) /*0x664772*/
  {
    v4[0] = 6; /*0x664780*/
    v4[1] = a2; /*0x664785*/
    Debug::Log(); /*0x664789*/
    IDA_LOBYTE(v2) = Network::SendPacket((int)g_NetworkManager, (int)v4, 338, 1u); /*0x6647a2*/
  }
  return v2; /*0x66476f*/
}
}
// 0x660AD0
namespace gamemd {
int E4Recv_660AD0::sub_660AD0()
{
  return dword_7F099C[4 * *this]; /*0x660adb*/
}
} // namespace gamemd

// 0x660AE0
namespace gamemd {
int E4Recv_660AE0::sub_660AE0()
{
  return dword_7F09A0[4 * *this]; /*0x660aeb*/
}
} // namespace gamemd

// 0x660AF0
namespace gamemd {
int E4Recv_660AF0::sub_660AF0()
{
  return dword_7F0998[4 * *this]; /*0x660afb*/
}
} // namespace gamemd

// 0x6616B0
namespace gamemd {
unsigned int * E4Recv_6616B0::sub_6616B0()
{
  int v2; // ebp
  unsigned int *v3; // ebx

  v2 = 32; /*0x6616b8*/
  this->q004 = 0; /*0x6616bd*/
  this->q008 = 0; /*0x6616c0*/
  this->q00C = 0; /*0x6616c9*/
  this->q010 = 0; /*0x6616cc*/
  v3 = &this->q014; /*0x6616cf*/
  do /*0x6616df*/
  {
    sub_65C890(v3, 0, 0); /*0x6616d6*/
    v3 += 2; /*0x6616db*/
    --v2; /*0x6616de*/
  }
  while ( v2 ); /*0x6616df*/
  this->q00C = 0; /*0x6616e1*/
  this->q010 = 0; /*0x6616e4*/
  memset(&this->q014, 0, 0x100u); /*0x6616f7*/
  return this; /*0x6616fb*/
}
} // namespace gamemd

// 0x661960
namespace gamemd {
int E4Recv_661960::sub_661960(short a2)
{
  char *v3; // eax
  int v4; // eax
  unsigned int v5; // esi
  char *v6; // ebp
  size_t v7; // eax
  int result; // eax
  int v9; // [esp+10h] [ebp-8Ch]
  char Src[20]; // [esp+14h] [ebp-88h] BYREF
  unsigned int v11[29]; // [esp+28h] [ebp-74h] BYREF

  v9 = 16; /*0x66196c*/
  do /*0x661a48*/
  {
    if ( (a2 & 1) != 0 ) /*0x661995*/
    {
      v3 = this + (uint8_t)(this->vtable4 / 8) + 20; /*0x661991*/
      *v3 ^= 1 << (this->vtable4 & 7); /*0x66199e*/
    }
    v4 = this->vtable4 + 1; /*0x6619a4*/
    this->vtable4 = v4; /*0x6619a6*/
    if ( v4 == 2048 ) /*0x6619ae*/
    {
      v5 = 0; /*0x6619b4*/
      IDA_LOBYTE(v11[0]) = 0; /*0x6619b9*/
      v11[11] = 0; /*0x6619be*/
      v11[12] = 0; /*0x6619c2*/
      v11[6] = 1732584193; /*0x6619c6*/
      v11[7] = -271733879; /*0x6619ce*/
      v11[8] = -1732584194; /*0x6619d6*/
      v11[9] = 271733878; /*0x6619de*/
      v11[10] = -1009589776; /*0x6619e6*/
      v6 = &this->customSound_controller; /*0x6619ee*/
      do /*0x661a35*/
      {
        SHA1::Process(v11, (int)(&this->vtable30), 256); /*0x6619fa*/
        SHA1::Compute(v11, Src); /*0x661a08*/
        v7 = 256 - v5; /*0x661a12*/
        if ( 256 - v5 > 0x14 ) /*0x661a17*/
          v7 = 20; /*0x661a19*/
        memcpy(v6, Src, v7); /*0x661a25*/
        ++v5; /*0x661a2d*/
        ++v6; /*0x661a2e*/
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
  char *v3; // eax
  int v4; // eax
  unsigned int v5; // esi
  char *v6; // ebp
  size_t v7; // eax
  bool v8; // zf
  int result; // eax
  int v10; // [esp+10h] [ebp-8Ch]
  char Src[20]; // [esp+14h] [ebp-88h] BYREF
  unsigned int v12[29]; // [esp+28h] [ebp-74h] BYREF

  v10 = 32; /*0x661a6c*/
  do /*0x661b50*/
  {
    if ( (a2 & 1) != 0 ) /*0x661a95*/
    {
      v3 = this + (uint8_t)(this->vtable4 / 8) + 20; /*0x661a91*/
      *v3 ^= 1 << (this->vtable4 & 7); /*0x661a9e*/
    }
    v4 = this->vtable4 + 1; /*0x661aa4*/
    this->vtable4 = v4; /*0x661aa6*/
    if ( v4 == 2048 ) /*0x661aae*/
    {
      v5 = 0; /*0x661ab4*/
      IDA_LOBYTE(v12[0]) = 0; /*0x661ab9*/
      v12[11] = 0; /*0x661abe*/
      v12[12] = 0; /*0x661ac2*/
      v12[6] = 1732584193; /*0x661ac6*/
      v12[7] = -271733879; /*0x661ace*/
      v12[8] = -1732584194; /*0x661ad6*/
      v12[9] = 271733878; /*0x661ade*/
      v12[10] = -1009589776; /*0x661ae6*/
      v6 = &this->customSound_controller; /*0x661aee*/
      do /*0x661b35*/
      {
        SHA1::Process(v12, (int)(&this->vtable30), 256); /*0x661afa*/
        SHA1::Compute(v12, Src); /*0x661b08*/
        v7 = 256 - v5; /*0x661b12*/
        if ( 256 - v5 > 0x14 ) /*0x661b17*/
          v7 = 20; /*0x661b19*/
        memcpy(v6, Src, v7); /*0x661b25*/
        ++v5; /*0x661b2d*/
        ++v6; /*0x661b2e*/
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
  int v1; // ebx
  unsigned int v2; // esi
  char *v3; // edi
  size_t v4; // eax
  void *result; // eax
  char Src[20]; // [esp+Ch] [ebp-88h] BYREF
  unsigned int v7[29]; // [esp+20h] [ebp-74h] BYREF

  v1 = (int)(&this->vtable30); /*0x661b7a*/
  IDA_LOBYTE(v7[0]) = 0; /*0x661b7e*/
  v7[11] = 0; /*0x661b82*/
  v7[12] = 0; /*0x661b86*/
  v7[6] = 1732584193; /*0x661b8a*/
  v7[7] = -271733879; /*0x661b92*/
  v7[8] = -1732584194; /*0x661b9a*/
  v7[9] = 271733878; /*0x661ba2*/
  v7[10] = -1009589776; /*0x661baa*/
  v2 = 0; /*0x661bb2*/
  v3 = &this->customSound_controller; /*0x661bb4*/
  do /*0x661bfb*/
  {
    SHA1::Process(v7, v1, 256); /*0x661bc0*/
    SHA1::Compute(v7, Src); /*0x661bce*/
    v4 = 256 - v2; /*0x661bd8*/
    if ( 256 - v2 > 0x14 ) /*0x661bdd*/
      v4 = 20; /*0x661bdf*/
    result = memcpy(v3, Src, v4); /*0x661beb*/
    ++v2; /*0x661bf3*/
    ++v3; /*0x661bf4*/
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
  LocomotionClass::Construct(); /*0x661f3d*/
}
} // namespace gamemd

// 0x662240
namespace gamemd {
double E4Recv_662240::sub_662240()
{
  int v1; // eax
  int v2; // edx
  double v3; // st7
  int v5; // [esp+1Ch] [ebp-4h]

  v1 = this->nextArrayIndex - *(unsigned int *)(this->vtable4 + 156); /*0x66225b*/
  v2 = this->referenceCount - *(unsigned int *)(this->vtable4 + 160); /*0x662263*/
  v5 = this->NeedsSaveOrLink - *(unsigned int *)(this->vtable4 + 164); /*0x662267*/
  v3 = Math::Sqrt((double)(v2 * v2 + v1 * v1)); /*0x662282*/
  if ( v3 <= 0.0 ) /*0x662297*/
    return -1.570796326794897; /*0x6622b5*/
  else
    return Math::ArcTan((double)v5 / v3); /*0x6622a7*/
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
  int64_t result; // rax

  v0 = Math::Sin(dbl_B04E80 - dbl_B052B0); /*0x6636d2*/
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
  dword_B052F0 = 0; /*0x6637a2*/
  dword_B052F4 = 0; /*0x6637a7*/
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
  dword_B052D4 = 0; /*0x663807*/
  dword_B052D8 = 0; /*0x66380c*/
  byte_B052DC = 1; /*0x663811*/
  byte_B052DD = 0; /*0x663818*/
  g_NetworkEventQueue = (int)&DynamicVectorClass_OwnerTalkClass_ConnectionListStruct___vftable; /*0x66381d*/
  dword_B052E4 = 10; /*0x663827*/
  dword_B052E0 = 0; /*0x663831*/
  byte_B052E8 = 0; /*0x663836*/
  dword_B052EC = 0; /*0x66383b*/
  return atexit(sub_663850); /*0x663846*/
}
} // namespace gamemd

// 0x663850
namespace gamemd {
void sub_663850()
{
  bool v0; // zf
  int v1; // eax

  if ( dword_B052E0 ) /*0x66385a*/
  {
    do /*0x66389d*/
    {
      RA2_OPDEL(*(void **)dword_B052D4); /*0x663864*/
      v0 = dword_B052E0 == 0; /*0x663872*/
      if ( dword_B052E0 > 0 ) /*0x663874*/
      {
        v1 = 0; /*0x663877*/
        v0 = dword_B052E0-- == 1; /*0x663879*/
        if ( dword_B052E0 > 0 ) /*0x663881*/
        {
          do /*0x663899*/
          {
            ++v1; /*0x663889*/
            *((unsigned int *)dword_B052D4 + v1 - 1) = *((unsigned int *)dword_B052D4 + v1); /*0x66388d*/
          }
          while ( v1 < dword_B052E0 ); /*0x663899*/
          v0 = dword_B052E0 == 0; /*0x66389b*/
        }
      }
    }
    while ( !v0 ); /*0x66389d*/
  }
  g_NetworkEventQueue = (int)&VectorClass_OwnerTalkClass_ConnectionListStruct___vftable; /*0x6638a4*/
  if ( dword_B052D4 && byte_B052DD ) /*0x6638b8*/
  {
    RA2_OPDEL(dword_B052D4); /*0x6638bb*/
    dword_B052D4 = 0; /*0x6638c3*/
  }
  byte_B052DD = 0; /*0x6638c9*/
  dword_B052D8 = 0; /*0x6638cf*/
}
} // namespace gamemd

// 0x6638E0
namespace gamemd {
unsigned int * E4Recv_6638E0::sub_6638E0()
{
  this->M4 = 0; /*0x6638e4*/
  this->q008 = 0; /*0x6638e7*/
  this->IsInitialized = 1; /*0x6638ea*/
  this->IsAllocated = 0; /*0x6638ee*/
  this->CapacityIncrement = 10; /*0x6638f7*/
  this->q010 = 0; /*0x6638fe*/
  this->q018 = 0; /*0x663901*/
  this->q01C = 0; /*0x663904*/
  return this; /*0x663907*/
}
} // namespace gamemd

// 0x663960
namespace gamemd {
void E4Recv_663960::sub_663960()
{
  int v2; // eax
  int v3; // ecx
  int v4; // eax
  void *v5; // eax

  while ( this->q010 ) /*0x663966*/
  {
    RA2_OPDEL(*this->M4); /*0x663971*/
    v2 = this->q010; /*0x663976*/
    if ( v2 > 0 ) /*0x66397e*/
    {
      v3 = v2 - 1; /*0x663980*/
      v4 = 0; /*0x663983*/
      for ( this->q010 = v3; /*0x66398a*/
            v4 < this->q010;
            *(unsigned int *)(this->Items + 4 * v4 - 4) = *(unsigned int *)(this->Items + 4 * v4) )
      {
        ++v4; /*0x66398f*/
      }
    }
  }
  v5 = (void *)this->Items; /*0x6639a3*/
  if ( v5 && this->IsAllocated ) /*0x6639b0*/
  {
    RA2_OPDEL(v5); /*0x6639b6*/
    this->Items = 0; /*0x6639be*/
  }
  this->IsAllocated = 0; /*0x6639c1*/
  this->Capacity = 0; /*0x6639c4*/
}
} // namespace gamemd

// 0x663CD0
namespace gamemd {
char E4Recv_663CD0::sub_663CD0(unsigned char * a2)
{
  unsigned int *v2; // edi
  char v5; // bl
  int v6; // ecx
  int v7; // eax
  int v8; // esi
  int v10; // [esp+8h] [ebp-8h] BYREF

  a2 = a2; /*0x663cd5*/
  if ( !a2 ) /*0x663cdd*/
    return -1; /*0x663ce0*/
  if ( Network::IsBroadcastAddr(a2) ) /*0x663ceb*/
    return -1; /*0x663cf5*/
  v5 = 0; /*0x663d0c*/
  Network::CopyAddress(a2, &a2, (int)&v10); /*0x663d0e*/
  v6 = this->uniqueId; /*0x663d13*/
  v7 = 0; /*0x663d16*/
  if ( v6 > 0 ) /*0x663d1a*/
  {
    v8 = this->vtable2; /*0x663d1c*/
    for ( v8 = v8; v10 != *(unsigned int *)(*(unsigned int *)v8 + 33); v8 += 4 ) /*0x663d23*/
    {
      if ( ++v7 >= v6 ) /*0x663d32*/
        return 0; /*0x663d3d*/
    }
    return *(unsigned char *)(*(unsigned int *)(v8 + 4 * v7) + 40); /*0x663d43*/
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
  int64_t result; // rax

  v0 = Math::Sin(dbl_B05338 - dbl_B05360); /*0x664bf2*/
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
