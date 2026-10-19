// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_659E30_e4.hpp"
#include "e4/classes/E4Recv_659EE0_e4.hpp"
#include "e4/classes/E4Recv_659FF0_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Weapon_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/Color_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/ObjectVector_e4.hpp"
#include "e4/classes/WeaponTypeClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/WebBrowser_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/InfantryClass_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/MessageListClass_e4.hpp"
#include "e4/classes/LayerClass_e4.hpp"

// 0x53AE00
namespace gamemd {  // G42.18 ns repair
int sub_53AE00()
{

  wchar_t *StringCSF; // eax
  StringCSF = GetStringCSF((char *)(unk_82809C), 0, g_Str_File_Ion_cpp, 1123); /*0x53ae11*/
  int v1 = 3; // ecx /*0x53ae1c*/
  if ( dword_A83D4C ) /*0x53ae23*/
    v1 = dword_A83D4C->startingCell; /*0x53ae25*/
  return MessageListClass::AddMessage((gamemd::MessageListClass *)(unk_A8BC60), 0, 0, StringCSF, v1, 16454, 150, 0); /*0x53ae47*/
}
}  // G42.18 ns repair
// 0x659CA0
namespace gamemd {
bool Weapon_Update(void * a1, void * a2)
{

  ObjectClass *v2; // ecx
  ObjectClass *v3; // edi
  int v4; // eax
  __int64 updated; // rax
  int v6; // ebx
  int v7; // esi
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // edx
  int v12; // eax
  int v14[2]; // [esp+8h] [ebp-20h] BYREF
  int v15[2]; // [esp+10h] [ebp-18h] BYREF
  int v16[4]; // [esp+18h] [ebp-10h] BYREF

  v3 = v2; /*0x659ca5*/
  if ( !((v2->ptr_8) & 0xFF) ) /*0x659ca7*/
  {
    (v2->ptr_8) = ((v2->ptr_8) & ~0xFF) | ((1) & 0xFF); /*0x659cae*/
    Weapon_Update_Update(v2); /*0x659cb2*/
  }
  if ( (((v3->ptr_8) >> 8) & 0xFF) ) /*0x659cb7*/
  {
    Weapon_Update_Update_659EE0(v3); /*0x659cc4*/
    v4 = *(unsigned int *)v3->onBridge; /*0x659cc9*/
    v3->parachute = 0; /*0x659ccf*/
    if ( v4 > 0 ) /*0x659cdb*/
    {
      do /*0x659e01*/
      {
        updated = Weapon_Update_Update_659FF0((int)v3); /*0x659ceb*/
        LOWORD(a2) = (unsigned __int8)(BYTE2(v3[1].abstractFlags) >> g_BitMask_Red); /*0x659d13*/
        (updated) = ((updated) & ~0xFFFF) | (((unsigned __int8)(BYTE1(v3[1].abstractFlags) >> g_BitMask_Blue)) & 0xFFFF); /*0x659d28*/
        (updated) = ((updated) & 0xFFFFFFFF00000000ull) | (((unsigned int)updated << g_BitMask_Green) & 0xFFFFFFFFull); /*0x659d30*/
        v6 = updated | (a2 << g_BitShift_Blue); /*0x659d40*/
        (updated) = ((updated) & ~0xFFFF) | (((unsigned __int8)(LOBYTE(v3[1].abstractFlags) >> g_BitShift_Green_0)) & 0xFFFF); /*0x659d45*/
        a2 = ((unsigned int)updated << g_BitShift_Red) | v6; /*0x659d55*/
        Coord::To_Screen((Coord *)g_TacticalClass_Instance, v3->location, v15); /*0x659d57*/
        Coord::To_Screen((Coord *)g_TacticalClass_Instance, &v3->lineTrailer, v14); /*0x659d68*/
        v16[1] = dword_886FA4; /*0x659d7e*/
        v16[0] = DSurface_ViewBounds.field_0; /*0x659d86*/
        v16[2] = dword_886FA8; /*0x659d8f*/
        v16[3] = dword_886FAC; /*0x659d9c*/
        if ( (unsigned __int8)ClipLine(v15, v14, v16) ) /*0x659da0*/
        {
          v7 = v3->ptr_C - ZCoordToScreenY(v3->location[2]) - 2; /*0x659db9*/
          v8 = ZCoordToScreenY(v3[1].ptr_4); /*0x659dbc*/
          (*(void (**)(AudioStream *, CellStruct *, int *, int *, unsigned int, int, int, unsigned int))(*(unsigned int *)g_DSurface_Hidden_2->__pad_0 + 52))( /*0x659de7*/
            g_DSurface_Hidden_2,
            &DSurface_ViewBounds,
            v15,
            v14,
            (__int16)a2,
            v7,
            -2 - v8,
            0);
        }
        v9 = *(unsigned int *)v3->onBridge; /*0x659df0*/
        v10 = v3->parachute + 1; /*0x659df7*/
        v3->parachute = v10; /*0x659df9*/
      }
      while ( v10 < v9 ); /*0x659e01*/
    }
  }
  v11 = v3->ambientSoundController[0]; /*0x659e0c*/
  v12 = v3->visibilityFlags + 1; /*0x659e12*/
  v3->visibilityFlags = v12; /*0x659e14*/
  return v12 >= v11; /*0x659e19*/

}
}
// 0x70C690
namespace gamemd {  // G42.18c ns repair
int * Weapon::DestroyTerrain(int *a1, int *aP2, int *aP3, int aP4)
{

  int *v5; // eax
  float v7; // edx
  int v8; // eax
  int v9; // eax
  int v10; // edx
  int v11; // eax
  int *v12; // eax
  unsigned int *v13; // eax
  int v14; // esi
  int v15; // edx
  int v16; // eax
  int ObjectVector_field_0x10; // eax
  int v20; // ecx
  unsigned int *ObjectVector_field_0x04; // edx
  int GroundHeight; // eax
  int v23; // eax
  int v24; // ecx
  int **v25; // edx
  CellClass *v26; // eax
  int v27; // esi
  CellClass *v28; // eax
  int v29; // edx
  int v30; // edx
  int v31; // ecx
  int v33; // esi
  int v34; // esi
  int v35; // edx
  int v36; // edx
  int v37; // ecx
  double v38; // [esp+14h] [ebp-C8h]
  float v39; // [esp+18h] [ebp-C4h]
  char v40; // [esp+2Bh] [ebp-B1h]
  int v41; // [esp+2Ch] [ebp-B0h]
  int v42; // [esp+2Ch] [ebp-B0h]
  ObjectVector v43; // [esp+30h] [ebp-ACh] BYREF
  int v44; // [esp+48h] [ebp-94h]
  __int16 v48[2]; // [esp+58h] [ebp-84h] BYREF
  int v49; // [esp+5Ch] [ebp-80h] BYREF
  int v50; // [esp+60h] [ebp-7Ch]
  int v51; // [esp+64h] [ebp-78h]
  int v52; // [esp+68h] [ebp-74h] BYREF
  int v53; // [esp+6Ch] [ebp-70h]
  int v54; // [esp+70h] [ebp-6Ch]
  int v55; // [esp+74h] [ebp-68h] BYREF
  int v56; // [esp+78h] [ebp-64h]
  int v57; // [esp+7Ch] [ebp-60h]
  Weapon *v64; // [esp+98h] [ebp-44h]
  int v65; // [esp+9Ch] [ebp-40h]
  int v66; // [esp+A0h] [ebp-3Ch]
  int v67; // [esp+A4h] [ebp-38h]
  float v68; // [esp+A8h] [ebp-34h] BYREF
  Color v74[3]; // [esp+D0h] [ebp-Ch] BYREF

  v64 = this; /*0x70c6a0*/
  v5 = (int *)aP3->GetInvalidCoord(&v68); /*0x70c6b2*/
  v55 = *v5; /*0x70c6ba*/
  v56 = v5[1]; /*0x70c6c4*/
  _ECX = aP2; /*0x70c6c8*/
  v7 = *((float *)v5 + 2); /*0x70c6ca*/
  v8 = *aP2; /*0x70c6cd*/
  v57 = LODWORD(v7); /*0x70c6cf*/
  v44 = v8; /*0x70c6d3*/
  __asm { fild [esp+0C4h+var_94] } /*0x70c6d7*/
  v40 = 0; /*0x70c6e5*/
  (v41) = ((v41) & ~0xFFFF) | ((v8 / 256) & 0xFFFF); /*0x70c6ed*/
  v9 = aP2[1]; /*0x70c6f2*/
  __asm { fstp [esp+0C8h+var_50] } /*0x70c6f5*/
  v54 = v9; /*0x70c6f9*/
  __asm { fild [esp+0C8h+var_6C] } /*0x70c6fd*/
  __asm
  {
    fstp [esp+0C8h+var_4C]
    fild dword ptr [edi+8]
  }
  v10 = *aP2; /*0x70c711*/
  __asm /*0x70c713*/
  {
    fstp [esp+0C8h+var_48]
    fild [esp+0C8h+var_68]
    fild [esp+0C8h+var_64]
  }
  (v41) = ((v41) & ~(0xFFFF << 16)) | (((v9 / 256) & 0xFFFF) << 16); /*0x70c725*/
  __asm /*0x70c72e*/
  {
    fstp [esp+0C8h+var_58]
    fild [esp+0C8h+var_60]
  }
  *(unsigned int *)v48 = v41; /*0x70c736*/
  v11 = aP2[1]; /*0x70c73a*/
  v49 = v10; /*0x70c73d*/
  v50 = v11; /*0x70c741*/
  __asm { fstp [esp+0C8h+var_54] } /*0x70c745*/
  __asm { fsub [esp+0C8h+var_50] }
  v51 = aP2[2]; /*0x70c750*/
  __asm /*0x70c758*/
  {
    fstp [esp+0C8h+var_90]
    fld [esp+0C8h+var_58]
    fsub [esp+0C8h+var_4C]
    fstp [esp+0C8h+var_8C]
    fld [esp+0C8h+var_54]
    fsub [esp+0C8h+var_48]
    fstp [esp+0C8h+var_88]
  }
  ObjectVector::Construct(&v43, 0, 0); /*0x70c777*/
  /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7E4F64) */  /*0x70c77c*/
  v43.ObjectVector_field_0x14 = 10; /*0x70c784*/
  v43.ObjectVector_field_0x10 = 0; /*0x70c78c*/
  v42 = 0; /*0x70c790*/
  while ( 1 ) /*0x70c794*/
  {
    __asm { fild [esp+0C0h+var_B0] } /*0x70c794*/
    __asm
    {
      fmul ds:flt_7F4E88
      fstp [esp+0C4h+var_C4]; float
    }
    v12 = Color::RGBFromFloat(v74, (int)&v55, v39); /*0x70c7b0*/
    v49 = *v12; /*0x70c7b9*/
    v50 = v12->u32_4; /*0x70c7c0*/
    v51 = v12->u32_8; /*0x70c7c7*/
    if ( ((v50 / 256 & 0xFFFFu) << 16 | (v49 / 256 & 0xFFFFu)) != *(unsigned int *)v48 ) /*0x70c7ec*/
    {
      (v44) = ((v44) & ~0xFFFF) | ((v49 / 256) & 0xFFFF); /*0x70c7f9*/
      (v44) = ((v44) & ~(0xFFFF << 16)) | (((v50 / 256) & 0xFFFF) << 16); /*0x70c802*/
      *(unsigned int *)v48 = v44; /*0x70c811*/
      v13 = CellCoord::To_CellObj((CellCoord *)&DataGlobal_87F7E8, v48); /*0x70c815*/
      if ( (v13->u32_140 & 0x100) != 0 /*0x70c83c*/
        && v51 >= g_BuildingLoadQueue_Array.ThreatAvoidanceCoefficient[1] * (*(&v13->u32_11B) + 4) )
      {
        v14 = v13->q0E8; /*0x70c83e*/
      }
      else
      {
        v14 = v13->u32_E4; /*0x70c846*/
      }
      while ( v14 ) /*0x70c84e*/
      {
        if ( (Weapon *)v14 == v64 ) /*0x70c858*/
          goto LABEL_31; /*0x70c858*/
        if ( (int *)v14 == aP3 ) /*0x70c860*/
          v40 = 1; /*0x70c862*/
        HIBYTE(v53) = *(unsigned char *)(v14 + 20) & 1; /*0x70c874*/
        if ( !HIBYTE(v53) ) /*0x70c878*/
          goto LABEL_31; /*0x70c878*/
        v15 = *(unsigned int *)v14; /*0x70c87e*/
        v52 = 0; /*0x70c882*/
        if ( (*(int (**)(int))(v15 + 44))(v14) == 6 ) /*0x70c890*/
        {
          __asm { fld [esp+0C0h+var_74] } /*0x70c9d3*/
        }
        else
        {
          v65 = *(unsigned int *)(v14 + 156); /*0x70c8a2*/
          __asm { fild [esp+0C0h+var_40] } /*0x70c8ac*/
          v16 = *(unsigned int *)(v14 + 164); /*0x70c8b3*/
          v66 = *(unsigned int *)(v14 + 160); /*0x70c8b6*/
          __asm { fild [esp+0C0h+var_3C] } /*0x70c8bd*/
          v67 = v16; /*0x70c8c4*/
          __asm /*0x70c8cb*/
          {
            fstp [esp+0C0h+var_30]
            fild [esp+0C0h+var_38]
            fstp dword ptr [esp+0C0h+var_2C]
            fsub [esp+0C0h+var_50]
            fld [esp+0C0h+var_30]
            fsub [esp+0C0h+var_4C]
            fld dword ptr [esp+0C0h+var_2C]
            fsub [esp+0C0h+var_48]
            fld st(1)
            fmul [esp+0C0h+var_88]
            fld st(1)
            fmul [esp+0C0h+var_8C]
            fsubp st(1), st
            fld st(1)
            fmul [esp+0C0h+var_90]
            fld [esp+0C0h+var_88]
            fmul st, st(5)
            fsubp st(1), st
            fld [esp+0C0h+var_8C]
            fmul st, st(5)
            fld st(4)
            fmul [esp+0C0h+var_90]
            fsubp st(1), st
            fld st(1)
            fmul [esp+0C0h+var_88]
            fld st(1)
            fmul [esp+0C0h+var_8C]
            fsubp st(1), st
            fstp [esp+0C0h+var_5C]
            fmul [esp+0C0h+var_90]
            fld [esp+0C0h+var_88]
            fmul st, st(3)
            fsubp st(1), st
            fstp [esp+0C0h+var_58]
            fld [esp+0C0h+var_8C]
            fmulp st(2), st
            fld st
            fmul [esp+0C0h+var_90]
            fsubp st(2), st
            fstp st
            fld [esp+0C0h+var_58]
            fstp [esp+0C0h+var_24+4]
            fst [esp+0C0h+var_2C+4]
            fld [esp+0C0h+var_5C]
            fstp [esp+0C0h+var_1C+4]
            fmul st, st(1)
            fld [esp+0C0h+var_58]
            fmul st, st(3)
            faddp st(1), st
            fld [esp+0C0h+var_5C]
            fmul st, st(4)
            faddp st(1), st
            fstp [esp+0C0h+var_6C]
            fstp st
            fstp st
            fstp st
            fld [esp+0C0h+var_1C+4]
            fmul [esp+0C0h+var_1C+4]
            fld [esp+0C0h+var_2C+4]
            fmul [esp+0C0h+var_2C+4]
            faddp st(1), st
            fld [esp+0C0h+var_24+4]
            fmul [esp+0C0h+var_24+4]
          }
          __asm
          {
            faddp st(1), st
            fstp [esp+0C8h+var_CC+4]; double
          }
          Math::Sqrt(v38); /*0x70c9c3*/
          __asm { fdivr [esp+0C8h+var_6C] } /*0x70c9c8*/
          __asm { fabs }
        }
        _ECX = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324]; /*0x70c9d7*/
        __asm /*0x70c9dd*/
        {
          fild dword ptr [ecx+494h]
          fxch st(1)
          fcompp
          fnstsw ax
        }
        if ( (_AX & 0x100) == 0 && (int *)v14 != aP3 ) /*0x70c9f0*/
          goto LABEL_31; /*0x70c9f0*/
        ObjectVector_field_0x10 = v43.ObjectVector_field_0x10; /*0x70c9f2*/
        if ( v43.ObjectVector_field_0x10 ) /*0x70c9f8*/
        {
          v20 = 0; /*0x70c9fa*/
          if ( v43.ObjectVector_field_0x10 > 0 ) /*0x70c9fe*/
          {
            ObjectVector_field_0x04 = (unsigned int *)v43.ObjectVector_field_0x04; /*0x70ca00*/
            while ( *ObjectVector_field_0x04 != v14 ) /*0x70ca06*/
            {
              ++v20; /*0x70ca08*/
              ++ObjectVector_field_0x04; /*0x70ca09*/
              if ( v20 >= v43.ObjectVector_field_0x10 ) /*0x70ca0e*/
                goto LABEL_24; /*0x70ca0e*/
            }
            if ( v20 != -1 ) /*0x70ca15*/
              goto LABEL_31; /*0x70ca15*/
          }
        }
LABEL_24:
        if ( v43.ObjectVector_field_0x10 >= v43.ObjectVector_field_0x08 ) /*0x70ca1d*/
        {
          if ( !BYTE1(v43.ObjectVector_field_0x0C) && v43.ObjectVector_field_0x08 /*0x70ca40*/
            || v43.ObjectVector_field_0x14 <= 0
            || !(*(unsigned __int8 (**)(ObjectVector *, int, unsigned int))(*(unsigned int *)v43.__pad_0 + 8))(
                  &v43,
                  v43.ObjectVector_field_0x14 + v43.ObjectVector_field_0x08,
                  0) )
          {
            goto LABEL_31; /*0x70ca45*/
          }
          ObjectVector_field_0x10 = v43.ObjectVector_field_0x10; /*0x70ca47*/
        }
        v43.ObjectVector_field_0x10 = ObjectVector_field_0x10 + 1; /*0x70ca4e*/
        *(unsigned int *)(v43.ObjectVector_field_0x04 + 4 * ObjectVector_field_0x10) = v14; /*0x70ca56*/
LABEL_31:
        v14 = *(unsigned int *)(v14 + 48); /*0x70ca59*/
      }
      GroundHeight = Cell::GetGroundHeight(&v49); /*0x70ca6e*/
      if ( GroundHeight > v51 ) /*0x70ca77*/
        break; /*0x70ca77*/
    }
    if ( ++v42 >= 50 ) /*0x70ca85*/
    {
      if ( v40 || !aP3 || (aP3[5] & 2) == 0 ) /*0x70caa3*/
        goto LABEL_55; /*0x70caa3*/
      v23 = v43.ObjectVector_field_0x10; /*0x70caa9*/
      if ( !v43.ObjectVector_field_0x10 ) /*0x70caaf*/
        goto LABEL_48; /*0x70caaf*/
      v24 = 0; /*0x70cab5*/
      if ( v43.ObjectVector_field_0x10 <= 0 ) /*0x70cab9*/
        goto LABEL_48; /*0x70cab9*/
      v25 = (int **)v43.ObjectVector_field_0x04; /*0x70cabf*/
      while ( *v25 != aP3 ) /*0x70cac5*/
      {
        ++v24; /*0x70cacb*/
        ++v25; /*0x70cacc*/
        if ( v24 >= v43.ObjectVector_field_0x10 ) /*0x70cad1*/
          goto LABEL_48; /*0x70cad1*/
      }
      if ( v24 == -1 ) /*0x70cb68*/
      {
LABEL_48:
        if ( v43.ObjectVector_field_0x10 < v43.ObjectVector_field_0x08 ) /*0x70cb70*/
          goto LABEL_54; /*0x70cb70*/
        if ( (BYTE1(v43.ObjectVector_field_0x0C) || !v43.ObjectVector_field_0x08) && v43.ObjectVector_field_0x14 > 0 ) /*0x70cb84*/
        {
          if ( (*(unsigned __int8 (**)(ObjectVector *, int, unsigned int))(*(unsigned int *)v43.__pad_0 + 8))( /*0x70cb93*/
                 &v43,
                 v43.ObjectVector_field_0x14 + v43.ObjectVector_field_0x08,
                 0) )
          {
            v23 = v43.ObjectVector_field_0x10; /*0x70cb9a*/
LABEL_54:
            v43.ObjectVector_field_0x10 = v23 + 1; /*0x70cb9e*/
            *(unsigned int *)(v43.ObjectVector_field_0x04 + 4 * v23) = aP3; /*0x70cba9*/
          }
LABEL_55:
          v23 = v43.ObjectVector_field_0x10; /*0x70cbac*/
        }
      }
      v33 = 0; /*0x70cbb0*/
      if ( v23 > 0 ) /*0x70cbb4*/
      {
        do /*0x70cbf5*/
        {
          v52 = aP4->u32_98; /*0x70cbc3*/
          (*(void (**)(unsigned int, int *, unsigned int, unsigned int, Weapon *, unsigned int, unsigned int, unsigned int))(**(unsigned int **)(v43.ObjectVector_field_0x04 + 4 * v33) /*0x70cbe8*/
                                                                                                  + 364))(
            *(unsigned int *)(v43.ObjectVector_field_0x04 + 4 * v33),
            &v52,
            0,
            aP4->u32_AC,
            v64,
            0,
            0,
            0);
          ++v33; /*0x70cbf2*/
        }
        while ( v33 < v43.ObjectVector_field_0x10 ); /*0x70cbf5*/
      }
      if ( aP3->getAltitude() == 11 ) /*0x70cc01*/
      {
        if ( (unsigned __int8)CellClass::IsActiveOrNext((CellClass *)aP3) ) /*0x70cc05*/
        {
          v34 = *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 6092); /*0x70cc1e*/
          if ( Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 99) < v34 ) /*0x70cc31*/
            LayerClass::DestroyCliff((int *)&DataGlobal_87F7E8, v35, (int)aP3); /*0x70cc39*/
        }
      }
      v36 = v56; /*0x70cc45*/
      /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7E192C) */  /*0x70cc4b*/
      *a1 = v55; /*0x70cc53*/
      v37 = v57; /*0x70cc55*/
      a1[1] = v36; /*0x70cc59*/
      a1[2] = v37; /*0x70cc5c*/
      if ( v43.ObjectVector_field_0x04 ) /*0x70cc65*/
      {
        if ( BYTE1(v43.ObjectVector_field_0x0C) ) /*0x70cc6d*/
          __3_YAXPAX_Z((void *)v43.ObjectVector_field_0x04); /*0x70cc70*/
      }
      return a1; /*0x70cc78*/
    }
  }
  v26 = Coord::To_Cell((Coord *)&DataGlobal_87F7E8, &v49); /*0x70cae2*/
  if ( (unsigned __int8)CellClass::IsActiveOrNext(v26) ) /*0x70cae9*/
  {
    v27 = *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 6092); /*0x70cb01*/
    if ( Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 99) < v27 ) /*0x70cb14*/
    {
      v28 = Coord::To_Cell((Coord *)&DataGlobal_87F7E8, &v49); /*0x70cb20*/
      LayerClass::DestroyCliff((int *)&DataGlobal_87F7E8, v29, (int)v28); /*0x70cb2b*/
    }
  }
  v30 = v50; /*0x70cb37*/
  /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7E192C) */  /*0x70cb3d*/
  *a1 = v49; /*0x70cb45*/
  v31 = v51; /*0x70cb47*/
  a1[1] = v30; /*0x70cb4b*/
  a1[2] = v31; /*0x70cb4e*/
  ObjectVector::ddtor((_VectorClass_PAVObjectClass *)&v43); /*0x70cb55*/
  return a1; /*0x70cb5c*/

}
}  // G42.18c ns repair
// 0x53B410
namespace gamemd {
int sub_53B410()
{

  wchar_t *StringCSF; // eax
  StringCSF = GetStringCSF((char *)(aMsgDominatorac), 0, g_Str_File_Ion_cpp, 1339); /*0x53b421*/
  int v1 = 3; // ecx /*0x53b42c*/
  if ( dword_A83D4C ) /*0x53b433*/
    v1 = dword_A83D4C->startingCell; /*0x53b435*/
  return MessageListClass::AddMessage((gamemd::MessageListClass *)(unk_A8BC60), 0, 0, StringCSF, v1, 16454, 150, 0); /*0x53b457*/
}
}
// 0x53A0E0
namespace gamemd {
bool sub_53A0E0()
{
  return LightningStorm_Active || LightningStorm_Deferment > 0; /*0x53a0f4*/
}
} // namespace gamemd
