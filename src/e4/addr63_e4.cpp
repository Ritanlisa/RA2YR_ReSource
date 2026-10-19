// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_631300_e4.hpp"
#include "e4/classes/E4Recv_631640_e4.hpp"
#include "e4/classes/E4Recv_631F10_e4.hpp"
#include "e4/classes/E4Recv_631F30_e4.hpp"
#include "e4/classes/E4Recv_631FC0_e4.hpp"
#include "e4/classes/E4Recv_631FE0_e4.hpp"
#include "e4/classes/E4Recv_6329C0_e4.hpp"
#include "e4/classes/E4Recv_632A20_e4.hpp"
#include "e4/classes/E4Recv_632AC0_e4.hpp"
#include "e4/classes/E4Recv_632B20_e4.hpp"
#include "e4/classes/E4Recv_632D60_e4.hpp"
#include "e4/classes/E4Recv_633A20_e4.hpp"
#include "e4/classes/E4Recv_633A40_e4.hpp"
#include "e4/classes/E4Recv_633A50_e4.hpp"
#include "e4/classes/E4Recv_633A60_e4.hpp"
#include "e4/classes/E4Recv_633A70_e4.hpp"
#include "e4/classes/E4Recv_633A90_e4.hpp"
#include "e4/classes/E4Recv_633AA0_e4.hpp"
#include "e4/classes/E4Recv_633AE0_e4.hpp"
#include "e4/classes/E4Recv_633B00_e4.hpp"
#include "e4/classes/E4Recv_633B10_e4.hpp"
#include "e4/classes/E4Recv_633B20_e4.hpp"
#include "e4/classes/E4Recv_633B30_e4.hpp"
#include "e4/classes/E4Recv_633B40_e4.hpp"
#include "e4/classes/E4Recv_633B70_e4.hpp"
#include "e4/classes/E4Recv_633B80_e4.hpp"
#include "e4/classes/E4Recv_633C60_e4.hpp"
#include "e4/classes/E4Recv_633E50_e4.hpp"
#include "e4/classes/E4Recv_633E60_e4.hpp"
#include "e4/classes/E4Recv_634360_e4.hpp"
#include "e4/classes/E4Recv_6343B0_e4.hpp"
#include "e4/classes/E4Recv_634470_e4.hpp"
#include "e4/classes/E4Recv_634700_e4.hpp"
#include "e4/classes/E4Recv_6347A0_e4.hpp"
#include "e4/classes/E4Recv_634800_e4.hpp"
#include "e4/classes/E4Recv_634810_e4.hpp"
#include "e4/classes/E4Recv_634850_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Array_e4.hpp"
#include "e4/classes/ArrayClass_e4.hpp"
#include "e4/classes/BlowPipe_23_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Display_e4.hpp"
#include "e4/classes/EventClass_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Mission_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/ScriptAction_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/VectorClass_Techno_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/E4Recv_634880_e4.hpp"
#include "e4/classes/E4Recv_6348F0_e4.hpp"
#include "e4/classes/E4Recv_634950_e4.hpp"
#include "e4/classes/E4Recv_634960_e4.hpp"
#include "e4/classes/E4Recv_635210_e4.hpp"
#include "e4/classes/E4Recv_6352D0_e4.hpp"
#include "e4/classes/E4Recv_635310_e4.hpp"
#include "e4/classes/E4Recv_635560_e4.hpp"
#include "e4/classes/E4Recv_635680_e4.hpp"
#include "e4/classes/E4Recv_635DF0_e4.hpp"
#include "e4/classes/E4Recv_635E90_e4.hpp"
#include "e4/classes/E4Recv_636110_e4.hpp"
#include "e4/classes/E4Recv_636520_e4.hpp"
#include "e4/classes/E4Recv_636530_e4.hpp"
#include "e4/classes/E4Recv_636540_e4.hpp"
#include "e4/classes/E4Recv_636D90_e4.hpp"
#include "e4/classes/E4Recv_636F00_e4.hpp"
#include "e4/classes/E4Recv_636FA0_e4.hpp"
#include "e4/classes/E4Recv_636FC0_e4.hpp"
#include "e4/classes/E4Recv_636FD0_e4.hpp"
#include "e4/classes/E4Recv_637020_e4.hpp"
#include "e4/classes/E4Recv_637030_e4.hpp"
#include "e4/classes/E4Recv_6375B0_e4.hpp"
#include "e4/classes/FactoryClass_e4.hpp"
#include "e4/classes/TeamClass_e4.hpp"
#include "e4/classes/E4Recv_63A4A0_e4.hpp"
#include "e4/classes/E4Recv_63AD30_e4.hpp"
#include "e4/classes/E4Recv_63B080_e4.hpp"
#include "e4/classes/E4Recv_63C690_e4.hpp"
#include "e4/classes/E4Recv_63CAE0_e4.hpp"
#include "e4/classes/E4Recv_63CF10_e4.hpp"
#include "e4/classes/E4Recv_63CFC0_e4.hpp"
#include "e4/classes/E4Recv_63D2D0_e4.hpp"
#include "e4/classes/E4Recv_63D480_e4.hpp"
#include "e4/classes/E4Recv_63DAD0_e4.hpp"
#include "e4/classes/E4Recv_63F810_e4.hpp"
#include "e4/classes/E4Recv_63F8F0_e4.hpp"
#include "e4/classes/E4Recv_63FDC0_e4.hpp"
#include "e4/classes/E4Recv_63FE30_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/Buffer_e4.hpp"
#include "e4/classes/Init_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/SkirmishDialog_e4.hpp"
#include "e4/classes/EventQueue_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/GameClass_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/E4Recv_645B60_e4.hpp"
#include "e4/classes/E4Recv_645D60_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/AudioQueue_e4.hpp"
#include "e4/classes/Movie_e4.hpp"
#include "e4/classes/BuildingLoadQueue_e4.hpp"
#include "e4/classes/PhoneEditor_e4.hpp"
#include "e4/classes/Function_e4.hpp"
#include "e4/classes/Color_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/ScenarioClass_e4.hpp"
#include "e4/classes/_w14_nocarrier_e4.hpp"
#include "e4/classes/RulesClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/Rect_e4.hpp"  // G42.36 C2027 supply
#include "e4/minimal_carriers.hpp"  // G42.42q minimal carriers
#include "e4/classes/SuperWeaponClass_e4.hpp"  // G57w10 D supply
#include "e4/classes/PlanManager_e4.hpp"  // G57w10 D supply
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/SidebarClass_e4.hpp"
// [w18j2] C3861 supply (raw-evidenced)
namespace gamemd { int CalcFill(); }  // x4:empty@0x63f850
namespace gamemd { int ComputeFill(int* p0, int* p1, int* p2); }  // x4:signals@0x63f960
int ComputeFill(int* p0, int* p1, int* p2);  // x4:signals@0x63f960
int CalcFill();  // x4:empty@0x63f850
// [w18j2] C3861 supply (raw-evidenced)
namespace gamemd { int ExecuteActionPlanManager_Helper_63DEC0(int p0, int p1); }  // x4:signals@0x63dec0
// [w16g4] C3861 supply (raw call-form evidence)
namespace gamemd { int UI_Pop_631500(ObjectClass *p_this); }  // x4:ida@0x631500
// [w14e3] fn vocab supply (g57b5-W5 variadic convention); evidence: raw_decomp entries
namespace gamemd {
int RenderScenarioActionLines2(ObjectClass *p_this);  // x4:ida@0x63cae0
int Team_Helper_6342E0(int p0, int p1);  // x4:signals@0x6342e0
} // namespace gamemd
// ==== G42.57w9 data-label supply (IDA truth; e4_globals pending) ====
extern unsigned int aMsgPlanningmod_4;  // data: 0x836d60 truth(IDA G42.57w9)
extern unsigned int aMsgPostloop;  // data: 0x836bf0 truth(IDA G42.57w9)
extern char aMsgPlanningmod_3[29];  // data: 0x836d7c truth(IDA G42.57w9)
extern char aMsgPlanningmod_5[28];  // data: 0x836d44 truth(IDA G42.57w9)
extern char aMsgPlanningmod_6[27];  // data: 0x836d28 truth(IDA G42.57w9)


// 0x630310
namespace gamemd {  // G42.18 ns repair
unsigned int * SHP_DecodeFrame(int a1, int a2, int a3, size_t Size)
{

  size_t v6; // ebp
  unsigned int v7; // ecx
  int v8; // edi
  int v9; // esi
  int v10; // eax
  unsigned int *v11; // ebx
  unsigned int *v12; // esi
  int v13; // eax
  unsigned int *v14; // ebx
  unsigned __int16 *v15; // ebx
  unsigned char *v16; // ebp
  size_t v17; // esi
  unsigned __int8 v18; // bl
  char *v19; // ecx
  char v20; // al
  char v21; // bl
  unsigned int v22; // edi
  unsigned __int8 *v23; // ebp
  unsigned __int8 *v24; // ebx
  int v25; // esi
  int v26; // edx
  int v27; // eax
  int v28; // edi
  unsigned int v29; // edx
  int v30; // eax
  unsigned int v31; // esi
  unsigned __int16 *v32; // ebp
  unsigned __int8 v33; // bl
  unsigned char *v34; // eax
  bool v35; // cf
  unsigned __int8 *v36; // eax
  char v37; // bl
  unsigned int i; // eax
  unsigned __int8 *v39; // eax
  unsigned int v40; // edi
  unsigned int v41; // ebp
  unsigned __int8 v42; // cl
  unsigned char *v43; // eax
  unsigned __int8 *v44; // eax
  char *v45; // edi
  int v46; // eax
  unsigned int v47; // ecx
  unsigned __int8 *v48; // [esp+30h] [ebp-8B4h]
  unsigned char *v50; // [esp+38h] [ebp-8ACh]
  unsigned __int8 v51; // [esp+38h] [ebp-8ACh]
  unsigned __int8 v52; // [esp+38h] [ebp-8ACh]
  unsigned __int8 v53; // [esp+38h] [ebp-8ACh]
  unsigned int v54; // [esp+3Ch] [ebp-8A8h]
  unsigned int *v55; // [esp+40h] [ebp-8A4h]
  unsigned __int16 *v56; // [esp+44h] [ebp-8A0h]
  int v57; // [esp+44h] [ebp-8A0h]
  int v58; // [esp+44h] [ebp-8A0h]
  char v59; // [esp+48h] [ebp-89Ch]
  char v60; // [esp+48h] [ebp-89Ch]
  size_t v61; // [esp+4Ch] [ebp-898h]
  unsigned int v62; // [esp+4Ch] [ebp-898h]
  unsigned __int16 *v63; // [esp+50h] [ebp-894h]
  Buffer v65; // [esp+58h] [ebp-88Ch] BYREF
  unsigned __int8 v66; // [esp+A5h] [ebp-83Fh]
  unsigned __int16 v67; // [esp+A6h] [ebp-83Eh]
  unsigned char v68[2048]; // [esp+E4h] [ebp-800h] BYREF
  _UNKNOWN *retaddr; // [esp+8E4h] [ebp+0h] BYREF

  if ( !(*(unsigned __int8 (**)(unsigned int))(*(unsigned int *)a1 + 20))(0) ) /*0x630328*/
    return 0; /*0x63033b*/
  (*(void (**)(int, int))(*(unsigned int *)a1 + 28))(a1, 1); /*0x630344*/
  (*(void (**)(int, int *, int))(*(unsigned int *)a1 + 36))(a1, &v65.Buffer_field_0C, 128); /*0x630355*/
  if ( LOBYTE(v65.Buffer_field_0C) != 10 && BYTE1(v65.Buffer_field_0C) != 5 && HIBYTE(v65.Buffer_field_0C) != 8 ) /*0x63036b*/
    return 0; /*0x630379*/
  v6 = v66 * v67; /*0x6303ca*/
  v7 = LOWORD(v65.Buffer_field_14) - LOWORD(v65.Buffer_field_10) + 1; /*0x6303cd*/
  v8 = HIWORD(v65.Buffer_field_14) - HIWORD(v65.Buffer_field_10) + 1; /*0x6303ce*/
  v54 = v7; /*0x6303d7*/
  v61 = v6; /*0x6303dd*/
  v9 = (v66 != 1) + 1; /*0x6303e1*/
  if ( a3 ) /*0x6303e3*/
  {
    if ( (int)(Size / v7 - 1) < v8 ) /*0x6303f7*/
      v8 = Size / v7 - 1; /*0x6303f9*/
    Buffer::Init(&v65, a3, Size); /*0x630408*/
    v10 = __2_YAPAXI_Z(0x20u); /*0x63040f*/
    v11 = (unsigned int *)v10; /*0x630414*/
    if ( v10 ) /*0x63041d*/
    {
      *(unsigned int *)(v10 + 16) = v9; /*0x63041f*/
      *(unsigned int *)(v10 + 12) = 0; /*0x630429*/
      *(unsigned int *)(v10 + 4) = v54; /*0x630438*/
      *(unsigned int *)(v10 + 8) = v8; /*0x63043b*/
      /* X11: ptr_0 install elided (X67 star-deref, RHS XSurface_Vtable) */  /*0x63043e*/
      Buffer::Init((Buffer *)(v10 + 20), (int)&v65, v54 * v8 * v9); /*0x630444*/
      v12 = v11; /*0x630449*/
      /* X11: ptr_0 install elided (X67 star-deref, RHS BSurface_Vtable) */  /*0x63044f*/
      v55 = v11; /*0x630455*/
    }
    else
    {
      v55 = 0; /*0x630460*/
      v12 = 0; /*0x630464*/
    }
    Vector::Clear((int)&v65); /*0x630459*/
  }
  else
  {
    v13 = __2_YAPAXI_Z(0x20u); /*0x630473*/
    v14 = (unsigned int *)v13; /*0x630478*/
    if ( !v13 ) /*0x63047f*/
      return 0; /*0x6304c8*/
    *(unsigned int *)(v13 + 16) = v9; /*0x630481*/
    *(unsigned int *)(v13 + 4) = v54; /*0x630494*/
    *(unsigned int *)(v13 + 8) = v8; /*0x630497*/
    *(unsigned int *)(v13 + 12) = 0; /*0x63049a*/
    /* X11: ptr_0 install elided (X67 star-deref, RHS XSurface_Vtable) */  /*0x6304a1*/
    Buffer::Init((Buffer *)(v13 + 20), 0, v54 * v8 * v9); /*0x6304a7*/
    /* X11: ptr_0 install elided (X67 star-deref, RHS BSurface_Vtable) */  /*0x6304ac*/
    v12 = v14; /*0x6304b2*/
    v55 = v14; /*0x6304b4*/
  }
  if ( !v12 ) /*0x6304ba*/
    return 0; /*0x6304ba*/
  v15 = (unsigned __int16 *)(*(int (**)(unsigned int *, unsigned int, unsigned int))(*v12 + 92))(v12, 0, 0); /*0x6304d8*/
  v56 = v15; /*0x6304dc*/
  if ( v15 ) /*0x6304e0*/
  {
    v48 = v68; /*0x6304f1*/
    (*(void (**)(int, unsigned char *, int))(*(unsigned int *)a1 + 36))(a1, v68, 2048); /*0x630504*/
    v63 = v15; /*0x63050e*/
    if ( v66 == 3 ) /*0x630514*/
    {
      v16 = (unsigned char *)__2_YAPAXI_Z(v6); /*0x630520*/
      v50 = v16; /*0x630527*/
      if ( !v16 ) /*0x63052b*/
      {
        (*(void (**)(unsigned int *))(*v12 + 96))(v12); /*0x630531*/
        (*(void (**)(unsigned int *, int))*v12)(v12, 1); /*0x63053a*/
        return 0; /*0x630548*/
      }
      if ( v8 ) /*0x63054d*/
      {
        v57 = v8; /*0x630553*/
        do /*0x63067e*/
        {
          v17 = 0; /*0x630557*/
          do /*0x6305ea*/
          {
            v18 = *v48; /*0x630568*/
            v19 = (char *)++v48; /*0x63056a*/
            if ( v48 >= (unsigned __int8 *)&retaddr ) /*0x630571*/
            {
              (*(void (**)(int, unsigned char *, int))(*(unsigned int *)a1 + 36))(a1, v68, 2048); /*0x630584*/
              v48 = v68; /*0x63058e*/
              v19 = v68; /*0x630592*/
            }
            if ( (v18 & 0xC0) == 0xC0 ) /*0x63059a*/
            {
              v20 = *v19; /*0x63059c*/
              v21 = v18 & 0x3F; /*0x63059e*/
              v59 = *v19; /*0x6305ab*/
              v48 = (unsigned __int8 *)(v19 + 1); /*0x6305af*/
              if ( v19 + 1 >= (char *)&retaddr ) /*0x6305b3*/
              {
                (*(void (**)(int, unsigned char *, int))(*(unsigned int *)a1 + 36))(a1, v68, 2048); /*0x6305c6*/
                v20 = v59; /*0x6305d0*/
                v48 = v68; /*0x6305d4*/
              }
              do /*0x6305de*/
              {
                v16[v17++] = v20; /*0x6305d8*/
                --v21; /*0x6305dc*/
              }
              while ( v21 ); /*0x6305de*/
            }
            else
            {
              v16[v17++] = v18; /*0x6305e2*/
            }
          }
          while ( v17 < v61 ); /*0x6305ea*/
          v22 = 0; /*0x6305fb*/
          if ( v54 ) /*0x630604*/
          {
            v23 = &v16[v67]; /*0x63060a*/
            v24 = &v50[2 * v67]; /*0x63060c*/
            do /*0x63066f*/
            {
              v25 = (unsigned __int8)v50[v22]; /*0x63061e*/
              v26 = *v23; /*0x630626*/
              ++v22; /*0x630629*/
              v27 = (int)*v24 >> g_BitMask_Red; /*0x63062a*/
              ++v23; /*0x630632*/
              ++v24; /*0x630633*/
              *v63++ = (v25 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x630665*/
                     | (v26 >> g_BitMask_Blue << g_BitMask_Green)
                     | (v27 << g_BitShift_Blue);
            }
            while ( v22 < v54 ); /*0x63066f*/
            v16 = v50; /*0x630671*/
          }
          --v57; /*0x63067a*/
        }
        while ( v57 ); /*0x63067e*/
        v12 = v55; /*0x630684*/
      }
      __3_YAXPAX_Z(v16); /*0x630689*/
      v28 = a1; /*0x630690*/
      (*(void (**)(unsigned int *))(*v12 + 96))(v12); /*0x630699*/
    }
    else
    {
      v29 = v54; /*0x6306a8*/
      v30 = v67; /*0x6306ac*/
      if ( v67 == v54 ) /*0x6306b3*/
      {
        v40 = v54 * v8; /*0x630834*/
        v41 = 0; /*0x630839*/
        v62 = v40; /*0x63083b*/
        while ( v41 < v40 ) /*0x630841*/
        {
          v42 = *v48; /*0x630856*/
          v43 = v48 + 1; /*0x630858*/
          v35 = v48 + 1 < (unsigned __int8 *)&retaddr; /*0x630859*/
          v52 = *v48++; /*0x63085b*/
          if ( !v35 ) /*0x630863*/
          {
            (*(void (**)(int, unsigned char *, int))(*(unsigned int *)a1 + 36))(a1, v68, 2048); /*0x630876*/
            v42 = v52; /*0x630880*/
            v48 = v68; /*0x630884*/
            v43 = v68; /*0x630888*/
          }
          if ( (v42 & 0xC0) == 0xC0 ) /*0x630892*/
          {
            v44 = v43 + 1; /*0x630897*/
            v53 = v42 & 0x3F; /*0x630898*/
            v60 = *(v44 - 1); /*0x6308a6*/
            v48 = v44; /*0x6308ac*/
            if ( v44 >= (unsigned __int8 *)&retaddr ) /*0x6308b0*/
            {
              (*(void (**)(int, unsigned char *, int))(*(unsigned int *)a1 + 36))(a1, v68, 2048); /*0x6308c3*/
              v48 = v68; /*0x6308cd*/
            }
            v45 = (char *)v15 + v41; /*0x6308de*/
            LOBYTE(v15) = v60; /*0x6308e1*/
            BYTE1(v15) = v60; /*0x6308e9*/
            v46 = (unsigned int)v15 << 16; /*0x6308f1*/
            (v46) = ((v46) & ~0xFFFF) | (((unsigned short)v15) & 0xFFFF); /*0x6308f4*/
            v15 = v56; /*0x6308f7*/
            v47 = v53 >> 2; /*0x6308fb*/
            memset32(v45, v46, v47); /*0x6308fe*/
            v41 += v53; /*0x630905*/
            memset(&v45[4 * v47], v46, v53 & 3); /*0x630907*/
            v40 = v62; /*0x630909*/
          }
          else
          {
            *((unsigned char *)v15 + v41++) = v42; /*0x63090f*/
          }
        }
        v12 = v55; /*0x63091b*/
        v28 = a1; /*0x63091f*/
        (*(void (**)(unsigned int *))(*v55 + 96))(v55); /*0x630927*/
      }
      else
      {
        v31 = 0; /*0x6306b9*/
        v51 = 0; /*0x6306bb*/
        if ( v8 ) /*0x6306c2*/
        {
          v32 = v15; /*0x6306c8*/
          v58 = v8; /*0x6306ca*/
          do /*0x6307ad*/
          {
            v31 = 0; /*0x6306ce*/
            if ( v30 ) /*0x6306d2*/
            {
              do /*0x63079c*/
              {
                v33 = *v48; /*0x6306e7*/
                v34 = v48 + 1; /*0x6306e9*/
                v35 = v48 + 1 < (unsigned __int8 *)&retaddr; /*0x6306ea*/
                v51 = *v48++; /*0x6306ec*/
                if ( !v35 ) /*0x6306f4*/
                {
                  (*(void (**)(int, unsigned char *, int))(*(unsigned int *)a1 + 36))(a1, v68, 2048); /*0x630707*/
                  v29 = v54; /*0x630711*/
                  v48 = v68; /*0x630715*/
                  v34 = v68; /*0x630719*/
                }
                if ( (v33 & 0xC0) == 0xC0 ) /*0x630723*/
                {
                  v36 = v34 + 1; /*0x630728*/
                  v51 = v33 & 0x3F; /*0x630729*/
                  v37 = *(v36 - 1); /*0x63072d*/
                  v48 = v36; /*0x630737*/
                  if ( v36 >= (unsigned __int8 *)&retaddr ) /*0x63073d*/
                  {
                    (*(void (**)(int, unsigned char *, int))(*(unsigned int *)a1 + 36))(a1, v68, 2048); /*0x630750*/
                    v29 = v54; /*0x63075a*/
                    v48 = v68; /*0x63075e*/
                  }
                  for ( i = 0; i < v51; ++i ) /*0x63076e*/
                  {
                    if ( i + v31 < v29 ) /*0x630775*/
                      *((unsigned char *)v32 + i + v31) = v37; /*0x63077a*/
                  }
                  v31 += v51; /*0x630782*/
                }
                else if ( v31 < v29 ) /*0x630788*/
                {
                  *((unsigned char *)v32 + v31++) = v33; /*0x63078a*/
                }
                v30 = v67; /*0x630795*/
              }
              while ( v31 < v67 ); /*0x63079c*/
            }
            v32 = (unsigned __int16 *)((char *)v32 + v29); /*0x6307a6*/
            --v58; /*0x6307a9*/
          }
          while ( v58 ); /*0x6307ad*/
        }
        v39 = v48; /*0x6307b3*/
        if ( v31 == v29 ) /*0x6307b9*/
        {
          v28 = a1; /*0x6307bd*/
          v39 = v48 + 1; /*0x6307c1*/
          v51 = *v48; /*0x6307cb*/
          if ( v48 + 1 >= (unsigned __int8 *)&retaddr ) /*0x6307cf*/
          {
            (*(void (**)(int, unsigned char *, int))(*(unsigned int *)a1 + 36))(a1, v68, 2048); /*0x6307e2*/
            v39 = v68; /*0x6307f0*/
          }
        }
        else
        {
          v28 = a1; /*0x6307f4*/
        }
        if ( (v51 & 0xC0) == 0xC0 && v39 + 1 >= (unsigned __int8 *)&retaddr ) /*0x63080e*/
          (*(void (**)(int, unsigned char *, int))(*(unsigned int *)v28 + 36))(v28, v68, 2048); /*0x630821*/
        v12 = v55; /*0x630824*/
        (*(void (**)(unsigned int *))(*v55 + 96))(v55); /*0x63082c*/
      }
    }
  }
  else
  {
    v28 = a1; /*0x63092c*/
  }
  if ( a2 ) /*0x630936*/
  {
    if ( v66 == 1 ) /*0x630940*/
    {
      (*(void (**)(int, int, int))(*(unsigned int *)v28 + 40))(v28, -768, 2); /*0x63094d*/
      (*(void (**)(int, int, int))(*(unsigned int *)v28 + 36))(v28, a2, 768); /*0x63095a*/
    }
  }
  (*(void (**)(int))(*(unsigned int *)v28 + 52))(v28); /*0x630961*/
  return v12; /*0x63032f*/

}
}  // G42.18 ns repair
// 0x630C10
namespace gamemd {
ObjectClass * * PhoneEditorDialogProc(HWND hWnd, unsigned int a2, unsigned int a3, unsigned int a4)
{

  int result; // eax
  result = (int)(BaseDialogProc(hWnd, a2, a3, a4)); /*0x630c29*/
  if ( !result ) /*0x630c30*/
  {
    LONG WindowLongA; // ebx
    WindowLongA = GetWindowLongA(hWnd, 8); /*0x630c46*/
    if ( a2 == 273 ) /*0x630c48*/
    {
      if ( (uint16_t)a3 > 0x5E0u ) /*0x630cbe*/
      {
        if ( (uint16_t)a3 == 1508 ) /*0x630e66*/
        {
          if ( !(*(((unsigned short *)&(a3)) + 1)) ) /*0x630e82*/
            UI_Pop_631500(WindowLongA); /*0x630e89*/
        }
        else if ( (uint16_t)a3 == 1633 && !(*(((unsigned short *)&(a3)) + 1)) ) /*0x630e6d*/
        {
          UI_Pop(WindowLongA); /*0x630e74*/
          return 0; /*0x630e7f*/
        }
      }
      else
      {
        switch ( (uint16_t)a3 ) /*0x630cc4*/
        {
          case 0x5E0u: /*0x630cc4*/
            if ( (*(((unsigned short *)&(a3)) + 1)) == 1 ) /*0x630dda*/
            {
            HWND DlgItem; // eax
            DlgItem = GetDlgItem(*(HWND *)WindowLongA, 1504); /*0x630dee*/
            HWND v10 = DlgItem; // esi /*0x630df0*/
            if ( DlgItem ) /*0x630df4*/
            {
              if ( SendMessageA(DlgItem, 0x18Bu, 0, 0) > 0 ) /*0x630e0e*/
              {
                dword_A8DABC = SendMessageA(v10, 0x188u, 0, 0); /*0x630e1f*/
                if ( (int)dword_A8DABC > -1 ) /*0x630e24*/
                {
                  HWND v11; // esi
                  v11 = GetDlgItem(*(HWND *)WindowLongA, 1509); /*0x630e36*/
                  SendMessageA(v11, 0x4B4u, 0, *((unsigned int *)dword_A8DB38 + dword_A8DABC) + 154); /*0x630e4f*/
                  SetFocus(v11); /*0x630e52*/
                  return 0; /*0x630e5e*/
                }
              }
            }
          }
            break;
          case 1u: /*0x630cc4*/
            if ( !(*(((unsigned short *)&(a3)) + 1)) && (uint8_t)UI_Get_630EA0(WindowLongA) == 1 ) /*0x630dbe*/
            {
            WindowLongA->__pad_004 = 1; /*0x630dc4*/
            return 0; /*0x630dd1*/
          }
            break;
          case 2u: /*0x630cc4*/
            if ( !(*(((unsigned short *)&(a3)) + 1)) ) /*0x630d93*/
            {
            WindowLongA->__pad_004 = 2; /*0x630d9c*/
            return 0; /*0x630da9*/
          }
            break;
          default:
            if ( (uint16_t)a3 == 1339 && !(*(((unsigned short *)&(a3)) + 1)) ) /*0x630ce3*/
            {
            HWND v6; // eax
            v6 = GetDlgItem(*(HWND *)WindowLongA, 1504); /*0x630cfa*/
            if ( v6 ) /*0x630cfe*/
            {
              LRESULT v7; // eax
              v7 = SendMessageA(v6, 0x188u, 0, 0); /*0x630d14*/
              dword_A8DABC = v7; /*0x630d19*/
              if ( v7 > -1 ) /*0x630d1e*/
              {
                if ( v7 < (int)dword_A8DB44 && v7 < (int)--dword_A8DB44 ) /*0x630d37*/
                {
                  do /*0x630d4f*/
                  {
                    ++v7; /*0x630d3f*/
                    *((unsigned int *)dword_A8DB38 + v7 - 1) = *((unsigned int *)dword_A8DB38 + v7); /*0x630d43*/
                  }
                  while ( v7 < (int)dword_A8DB44 ); /*0x630d4f*/
                }
                WindowLongA->q008 = 1; /*0x630d53*/
                ((HWND *)WindowLongA)->PopulateList(); /*0x630d57*/
                if ( dword_A8DABC == -1 ) /*0x630d63*/
                {
                  HWND v8; // eax
                  v8 = GetDlgItem(*(HWND *)WindowLongA, 1509); /*0x630d71*/
                  if ( v8 ) /*0x630d75*/
                  {
                    SendMessageA(v8, 0x4B4u, 0, (LPARAM)&g_INI_DefaultBuffer); /*0x630d88*/
                    return 0; /*0x630d90*/
                  }
                }
              }
            }
          }
            break;
        }
      }
    }
    else if ( a2 == 1175 ) /*0x630c50*/
    {
      SendDlgItemMessageA(hWnd, 1509, 0xC5u, 0x14u, 0); /*0x630c6b*/
      SendDlgItemMessageA(hWnd, 1504, 0x4A6u, 0x90u, 2); /*0x630c7f*/
      SendDlgItemMessageA(hWnd, 1504, 0x4A6u, 0x79u, 150); /*0x630c93*/
      SendDlgItemMessageA(hWnd, 1504, 0x4A6u, 0, 275); /*0x630ca7*/
      return 0; /*0x630caf*/
    }
    return 0; /*0x630e8e*/
  }
  return (gamemd::ObjectClass **)(result); /*0x630caa*/
}
}
// 0x631300
namespace gamemd {
AbstractClass * * E4Recv_631300::sub_631300()
{

  int result; // eax
  result = (int)GetDlgItem((HWND)this->ptr_0, 1504); /*0x631314*/
  HWND v3; // esi
  v3 = (HWND)result; /*0x631316*/
  if ( result ) /*0x63131a*/
  {
    result = SendMessageA((HWND)result, 0x18Bu, 0, 0); /*0x63132c*/
    if ( result > 0 ) /*0x631330*/
    {
      result = SendMessageA(v3, 0x188u, 0, 0); /*0x63133c*/
      dword_A8DABC = result; /*0x631341*/
      if ( result > -1 ) /*0x631346*/
      {
        HWND DlgItem; // esi
        DlgItem = GetDlgItem((HWND)this->ptr_0, 1509); /*0x631358*/
        SendMessageA(DlgItem, 0x4B4u, 0, *((unsigned int *)dword_A8DB38 + dword_A8DABC) + 154); /*0x631371*/
        return (int)SetFocus(DlgItem); /*0x631374*/
      }
    }
  }
  return result; /*0x63137a*/
}
}
// 0x631640
namespace gamemd {
AbstractClass * * E4Recv_631640::sub_631640()
{


  HWND DlgItem; // eax
  DlgItem = GetDlgItem((HWND)this->AbstractClass, 1504); /*0x631653*/
  if ( DlgItem ) /*0x631657*/
  {
    LRESULT v3; // eax
    v3 = SendMessageA(DlgItem, 0x188u, 0, 0); /*0x631669*/
    dword_A8DABC = v3; /*0x63166e*/
    if ( v3 > -1 ) /*0x631673*/
    {
      if ( v3 < (int)dword_A8DB44 && v3 < (int)--dword_A8DB44 ) /*0x631688*/
      {
        do /*0x6316a0*/
        {
          ++v3; /*0x631690*/
          *((unsigned int *)dword_A8DB38 + v3 - 1) = *((unsigned int *)dword_A8DB38 + v3); /*0x631694*/
        }
        while ( v3 < (int)dword_A8DB44 ); /*0x6316a0*/
      }
      LOBYTE(this->M8) = 1; /*0x6316a4*/
      ((PhoneEditor *)this)->PopulateList(); /*0x6316a8*/
      if ( dword_A8DABC == -1 ) /*0x6316b4*/
      {
        HWND v4; // eax
        v4 = GetDlgItem((HWND)this->AbstractClass, 1509); /*0x6316be*/
        if ( v4 ) /*0x6316c2*/
          SendMessageA(v4, 0x4B4u, 0, (LPARAM)&g_INI_DefaultBuffer); /*0x6316d1*/
      }
    }
  }

}
}
// 0x631760
namespace gamemd {
int NetworkSettingsDlgProc(HWND hWnd, unsigned int a2, unsigned int a3, HWND a4)
{
  wchar_t lParam[64]; // [esp+14h] [ebp-3F4h] BYREF

  int result; // eax
  result = (int)(BaseDialogProc((gamemd::SkirmishDialog *)(hWnd), a2, a3, (unsigned int)a4)); /*0x63178c*/
  if ( !result ) /*0x631793*/
  {
    LONG WindowLongA; // ecx
    WindowLongA = GetWindowLongA(hWnd, 8); /*0x6317a2*/
    LONG v6; // [esp+10h] [ebp-3F8h]
    v6 = WindowLongA; /*0x6317aa*/
    if ( a2 == 273 ) /*0x6317ae*/
    {
      if ( (uint16_t)a3 > 0x5E5u ) /*0x6317ff*/
      {
        if ( (uint16_t)a3 == 1635 ) /*0x63190a*/
        {
          if ( (*(((unsigned short *)&(a3)) + 1)) ) /*0x631986*/
          {
            SendMessageA(a4, 0xF1u, 1u, 0); /*0x631995*/
            SendDlgItemMessageA(hWnd, 1636, 0xF1u, 0, 0); /*0x6319aa*/
          }
        }
        else if ( (uint16_t)a3 == 1636 && (*(((unsigned short *)&(a3)) + 1)) ) /*0x631913*/
        {
          SendMessageA(a4, 0xF1u, 1u, 0); /*0x631926*/
          SendDlgItemMessageA(hWnd, 1635, 0xF1u, 0, 0); /*0x63193b*/
          UpdateWindow(hWnd); /*0x631948*/
          ShowWindow(hWnd, 0); /*0x631953*/
          UpdateWindow((HWND)(g_hWnd)); /*0x63195c*/
          LONG dwNewLong[221]; // [esp+94h] [ebp-374h] BYREF
          Network::sendGameEvent((LONG)dwNewLong, v6 + 12); /*0x63196d*/
          ShowWindow(hWnd, 5); /*0x631975*/
          return 0; /*0x631983*/
        }
      }
      else
      {
        switch ( (uint16_t)a3 ) /*0x631805*/
        {
          case 0x5E5u: /*0x631805*/
            if ( (*(((unsigned short *)&(a3)) + 1)) == 1281 || (*(((unsigned short *)&(a3)) + 1)) == 512 ) /*0x6318c3*/
            {
            SendMessageA(a4, 0x4B3u, 0x40u, (LPARAM)lParam); /*0x6318dc*/
            WideString::Trim(lParam); /*0x6318e2*/
            SendMessageA(a4, 0x4B2u, 0, (LPARAM)lParam); /*0x6318f4*/
            return 0; /*0x631902*/
          }
            break;
          case 1u: /*0x631805*/
            if ( !(*(((unsigned short *)&(a3)) + 1)) ) /*0x63188c*/
            {
            Network_Set(); /*0x631895*/
            v6->__pad_004 = 1; /*0x6318a1*/
            return 0; /*0x6318b1*/
          }
            break;
          case 2u: /*0x631805*/
            if ( !(*(((unsigned short *)&(a3)) + 1)) ) /*0x63186d*/
            {
            WindowLongA->__pad_004 = 2; /*0x631879*/
            return 0; /*0x631889*/
          }
            break;
          default:
            if ( (uint16_t)a3 == 1503 && ((*(((unsigned short *)&(a3)) + 1)) == 1281 || (*(((unsigned short *)&(a3)) + 1)) == 512) ) /*0x63182b*/
            {
            SendMessageA(a4, 0x4B5u, 0x40u, (LPARAM)lParam); /*0x631844*/
            ((char *)lParam)->Trim(); /*0x63184a*/
            SendMessageA(a4, 0x4B4u, 0, (LPARAM)lParam); /*0x63185c*/
            return 0; /*0x63186a*/
          }
            break;
        }
      }
    }
    else if ( a2 == 1175 ) /*0x6317b6*/
    {
      SendDlgItemMessageA(hWnd, 1509, 0xC5u, 0x14u, 0); /*0x6317d1*/
      SendDlgItemMessageA(hWnd, 1503, 0xC5u, 0x14u, 0); /*0x6317e2*/
      return 0; /*0x6317f0*/
    }
    return 0; /*0x6319b0*/
  }
  return result; /*0x6317e4*/
}
}
// 0x633AB0
namespace gamemd {
int sub_633AB0(ObjectClass *a1)
{
  return (char)a1->ptr_C; /*0x633ab3*/
}
}
// 0x633BC0
namespace gamemd {
unsigned int * ScenarioClass_GetActionCoords(unsigned int * a1, unsigned char * a2)
{
  int *v3; // eax
  int v4; // edx
  unsigned int *v5; // eax
  unsigned char v7[12]; // [esp+4h] [ebp-Ch] BYREF

  if ( *a2 == 4 ) /*0x633bca*/
  {
    if ( a2[18] ) /*0x633bcc*/
    {
      v3 = (int *)((BuildingLoadQueue *)(a2 + 14))->GetNext(); /*0x633bd6*/
      if ( v3 ) /*0x633bdd*/
      {
        v4 = *v3; /*0x633bdf*/
        LABEL_11:
        v5 = (unsigned int *)v3->GetCoords(v7); /*0x633c1b*/
        *a1 = *v5; /*0x633c25*/
        a1[1] = v5[1]; /*0x633c2a*/
        a1[2] = v5[2]; /*0x633c30*/
        return a1; /*0x633c39*/
      }
    }
    else if ( a2[28] ) /*0x633be7*/
    {
      v3 = (int *)((BuildingLoadQueue *)(a2 + 24))->GetNext(); /*0x633bf1*/
      if ( v3 ) /*0x633bf8*/
      {
        v4 = *v3; /*0x633bfa*/
        goto LABEL_11; /*0x633c00*/
      }
    }
    else if ( a2[23] ) /*0x633c02*/
    {
      v3 = (int *)((BuildingLoadQueue *)(a2 + 19))->GetNext(); /*0x633c0c*/
      if ( v3 ) /*0x633c13*/
      {
        v4 = *v3; /*0x633c15*/
        goto LABEL_11; /*0x633c15*/
      }
    }
  }
  *a1 = -1; /*0x633c43*/
  a1[1] = -1; /*0x633c4a*/
  a1[2] = -1; /*0x633c4d*/
  return a1; /*0x633c35*/
}
}
// 0x635560
namespace gamemd {
AbstractClass * * E4Recv_635560::sub_635560(int a2)
{

  int result; // eax

  int *Viewport; // eax
  int v16[4]; // [esp+24h] [ebp-40h] BYREF
  Viewport = (int *)(Display::GetViewport(v16)); /*0x63556d*/
  unsigned int v21[4]; // [esp+44h] [ebp-20h] BYREF
  v21[0] = *Viewport; /*0x635574*/
  v21[1] = Viewport[1]; /*0x63557b*/
  v21[2] = Viewport[2]; /*0x635582*/
  int v4; // edx
  v4 = Viewport[3]; /*0x635586*/
  void *ptr_0; // eax
  ptr_0 = (void *)(this->M4); /*0x635589*/
  v21[3] = v4; /*0x63558c*/
  unsigned int *ScenarioClassActionCoords; // eax
  ScenarioClassActionCoords = GetScenarioClassActionCoords(v16, *(unsigned char **)(*&ptr_0->uniqueId)); /*0x635599*/
  unsigned int v15[3]; // [esp+18h] [ebp-4Ch] BYREF
  v15[0] = *ScenarioClassActionCoords; /*0x6355a0*/
  v15[1] = ScenarioClassActionCoords->ptr_4; /*0x6355a7*/
  v15[2] = ScenarioClassActionCoords->ptr_8; /*0x6355b2*/
  int *v7; // eax
  int v14; // [esp+10h] [ebp-54h] BYREF
  v7 = (int *)(ToCoordPixel(&v14, v15)); /*0x6355ba*/
  unsigned int *v8; // eax
  unsigned int v22[4]; // [esp+54h] [ebp-10h] BYREF
  v8 = ComputeBounds(v22, 8, *v7, v7[1]); /*0x6355cf*/
  int v9 = 3; // edi /*0x6355d6*/
  int v10; // ecx
  v10 = v8[1] - 4; /*0x6355e8*/
  int v11; // edx
  v11 = v8[2] + 8; /*0x6355ee*/
  int v12; // esi
  v12 = v8[3]; /*0x6355f1*/
  int v17; // [esp+34h] [ebp-30h] BYREF
  v17 = *v8 - 4; /*0x6355f4*/
  int v18; // [esp+38h] [ebp-2Ch]
  v18 = v10; /*0x6355fb*/
  int v20; // [esp+40h] [ebp-24h]
  v20 = v12 + 8; /*0x6355ff*/
  int v19; // [esp+3Ch] [ebp-28h]
  v19 = v11; /*0x635607*/
  do /*0x63566d*/
  {
    result = (*(int (**)(AudioStream *, unsigned int *, int *, int))(*(unsigned int *)DSurface_Composite->__pad_0 + 84))( /*0x635620*/
               DSurface_Composite,
               v21,
               &v17,
               a2);
    if ( v19 > -2 && v20 > -2 ) /*0x63562d*/
    {
      ++v17; /*0x63564f*/
      ++v18; /*0x635657*/
      result = 2; /*0x63565b*/
      v19 -= 2; /*0x635664*/
      v20 -= 2; /*0x635668*/
    }
    else
    {
      v17 = 0; /*0x63562f*/
      v18 = 0; /*0x635633*/
      v19 = 0; /*0x635637*/
      v20 = 0; /*0x63563b*/
    }
    --v9; /*0x63566c*/
  }
  while ( v9 ); /*0x63566d*/
  return (gamemd::AbstractClass **)(result); /*0x63566f*/

}
}
// 0x635680
namespace gamemd {
int E4Recv_635680::sub_635680(int a2)
{

  int result; // eax

  int *Viewport; // eax
  int v16; // [esp+40h] [ebp-30h] BYREF
  Viewport = (int *)(Display::GetViewport(&v16)); /*0x63568d*/
  unsigned int v20[4]; // [esp+50h] [ebp-20h] BYREF
  v20[0] = *Viewport; /*0x635694*/
  v20[1] = Viewport[1]; /*0x63569b*/
  v20[2] = Viewport[2]; /*0x6356a2*/
  v20[3] = Viewport[3]; /*0x6356b0*/
  unsigned int *Coords; // eax
  unsigned int v11[3]; // [esp+24h] [ebp-4Ch] BYREF
  Coords = ScriptAction::GetCoords((ScriptAction *)this, v11); /*0x6356b4*/
  unsigned int v10[3]; // [esp+18h] [ebp-58h] BYREF
  v10[0] = *Coords; /*0x6356bb*/
  v10[1] = Coords->u32_4; /*0x6356c6*/
  v10[2] = Owner; /*0x6356d1*/
  int *v5; // eax
  int v9; // [esp+10h] [ebp-60h] BYREF
  v5 = (int *)(ToCoordPixel(&v9, v10)); /*0x6356d5*/
  int *v6; // eax
  int v21[4]; // [esp+60h] [ebp-10h] BYREF
  v6 = (int *)(ComputeBounds(v21, 8, *v5, v5[1])); /*0x6356ea*/
  v16 = *v6; /*0x6356f1*/
  int v17; // [esp+44h] [ebp-2Ch]
  v17 = v6[1]; /*0x6356f8*/
  int v18; // [esp+48h] [ebp-28h]
  v18 = v6[2]; /*0x6356ff*/
  int v19; // [esp+4Ch] [ebp-24h]
  v19 = v6[3]; /*0x63570a*/
  ShrinkRect(&v16, 4); /*0x635713*/
  v21[0] = v16; /*0x635728*/
  int v12; // [esp+30h] [ebp-40h] BYREF
  v12 = v16 - 4; /*0x635738*/
  int v13; // [esp+34h] [ebp-3Ch]
  v13 = v17 - 4; /*0x635740*/
  int v14; // [esp+38h] [ebp-38h]
  v14 = v18 + 8; /*0x635744*/
  int v15; // [esp+3Ch] [ebp-34h]
  v15 = v19 + 8; /*0x635748*/
  int v7 = 3; // edi /*0x63574c*/
  do /*0x6357b8*/
  {
    result = (*(int (**)(AudioStream *, unsigned int *, int *, int))(*(unsigned int *)DSurface_Composite->__pad_0 + 84))( /*0x63576b*/
               DSurface_Composite,
               v20,
               &v12,
               a2);
    if ( v14 > -2 && v15 > -2 ) /*0x635778*/
    {
      ++v12; /*0x63579a*/
      ++v13; /*0x6357a2*/
      result = 2; /*0x6357a6*/
      v14 -= 2; /*0x6357af*/
      v15 -= 2; /*0x6357b3*/
    }
    else
    {
      v12 = 0; /*0x63577a*/
      v13 = 0; /*0x63577e*/
      v14 = 0; /*0x635782*/
      v15 = 0; /*0x635786*/
    }
    --v7; /*0x6357b7*/
  }
  while ( v7 ); /*0x6357b8*/
  return result; /*0x6357ba*/

}
}
// 0x636F00
namespace gamemd {
int E4Recv_636F00::sub_636F00(int a2, int a3)
{

  unsigned int *ptr_4; // eax
  void *ptr_0; // ecx
  int v5; // esi
  int v6; // eax
  int v7; // edx
  void ***v8; // esi
  void ***v9; // edi
  void **v10; // eax
  unsigned char *v11; // esi

  ptr_4 = this->ptr_8; /*0x636f00*/
  ptr_0 = this->ptr_0; /*0x636f08*/
  v5 = ptr_4[a3]; /*0x636f0b*/
  v6 = 0; /*0x636f0e*/
  v7 = *(unsigned int *)(v5 + 16); /*0x636f11*/
  if ( v7 <= 0 ) /*0x636f16*/
    goto LABEL_7; /*0x636f16*/
  v8 = *(void ****)(v5 + 4); /*0x636f18*/
  v9 = v8; /*0x636f1b*/
  while ( **v9 != ptr_0 ) /*0x636f21*/
  {
    ++v6; /*0x636f23*/
    ++v9; /*0x636f24*/
    if ( v6 >= v7 ) /*0x636f29*/
    {
      v10 = 0; /*0x636f2b*/
      goto LABEL_9; /*0x636f2d*/
    }
  }
  if ( v6 == -1 ) /*0x636f32*/
LABEL_7:
    v10 = 0; /*0x636f34*/
  else
    v10 = v8[v6]; /*0x636f38*/
LABEL_9:
  v11 = v10[1]; /*0x636f3b*/
  qmemcpy((void *)a2, v11, 0x6Cu); /*0x636f49*/
  v11 += 108; /*0x636f49*/
  *(unsigned short *)(a2 + 108) = *(unsigned short *)v11; /*0x636f4b*/
  *(unsigned char *)(a2 + 110) = v11[2]; /*0x636f4d*/
  return a2; /*0x636f4e*/

}
}
// 0x637270
namespace gamemd {
char ExecutePlanningQueue()
{

  SuperWeaponClass *v1; // edi
  int v2; // eax
  int v3; // ecx
  TeamClass *v4; // ebp
  int v5; // ebx
  Array *v6; // esi
  int Value; // eax
  unsigned __int8 **v8; // eax
  unsigned __int8 *v9; // esi
  BuildingLoadQueue *v10; // ecx
  int abstractFlags; // esi
  int v12; // edx
  int v13; // ecx
  int v14; // edi
  int Type; // esi
  int v16; // eax
  int v17; // eax
  int v18; // ecx
  int v19; // eax
  int v20; // ebx
  int v21; // esi
  int v22; // ebp
  int i; // edi
  bool v24; // cc
  char result; // al
  int v26; // esi
  wchar_t *v27; // eax
  wchar_t *StringCSF; // eax
  SuperWeaponClass *v29; // [esp-Ch] [ebp-90h]
  ObjectClass *v30; // [esp+4h] [ebp-80h]
  int v31; // [esp+4h] [ebp-80h]
  BuildingClass *ptr_0; // [esp+8h] [ebp-7Ch]
  int v33; // [esp+Ch] [ebp-78h] BYREF
  int v34; // [esp+10h] [ebp-74h]
  unsigned char v35[108]; // [esp+14h] [ebp-70h] BYREF
  __int16 v36; // [esp+80h] [ebp-4h]
  unsigned __int8 v37; // [esp+82h] [ebp-2h]

  SelectScriptNode(v30); /*0x637276*/
  v2 = 0; /*0x637281*/
  if ( *(unsigned int *)&stru_AC4B48.__pad_9C[12] && *(int *)&stru_A8E960.random[340] > 0 ) /*0x63728d*/
    *(unsigned int *)&stru_AC4B48.__pad_9C[12] = 0; /*0x63728f*/
  v3 = *(unsigned int *)&stru_AC4B48.__pad_B8[136]; /*0x637294*/
  v29 = v1; /*0x63729f*/
  v34 = *(unsigned int *)&stru_AC4B48.__pad_B8[136]; /*0x6372a0*/
  v31 = 0; /*0x6372a4*/
  if ( *(int *)&stru_AC4B48.__pad_B8[136] <= 0 ) /*0x6372a8*/
    goto LABEL_37; /*0x6372a8*/
  do /*0x6373e5*/
  {
    v4 = *(TeamClass **)(*(unsigned int *)&stru_AC4B48.__pad_B8[124] + 4 * v2); /*0x6372b4*/
    v5 = v4->abstractFlags - 1; /*0x6372bd*/
    ptr_0 = (BuildingClass *)v4->ptr_0; /*0x6372be*/
    if ( v5 < 0 ) /*0x6372c2*/
      goto LABEL_36; /*0x6372c2*/
    do /*0x6373d0*/
    {
      v6 = *(Array **)(v4->ptr_8 + 4 * v5); /*0x6372cb*/
      Value = (v6)->FindValue(v4->ptr_0); /*0x6372d4*/
      if ( Value == -1 ) /*0x6372dc*/
        v8 = 0; /*0x6372de*/
      else
        v8 = *(unsigned __int8 ***)(v6->Array_field_0x4 + 4 * Value); /*0x6372e5*/
      v9 = v8[1]; /*0x6372e8*/
      qmemcpy(v35, v9, sizeof(v35)); /*0x6372f4*/
      v9 += 108; /*0x6372f4*/
      v36 = *(unsigned short *)v9; /*0x6372f6*/
      v37 = v9[2]; /*0x6372f8*/
      if ( v35[0] == 4 ) /*0x6372fe*/
      {
        if ( v35[18] ) /*0x637306*/
        {
          v10 = (BuildingLoadQueue *)&v35[14]; /*0x637308*/
        }
        else
        {
          if ( !v35[23] ) /*0x637314*/
            goto LABEL_15; /*0x637314*/
          v10 = (BuildingLoadQueue *)&v35[19]; /*0x637316*/
        }
        if ( BuildingLoadQueue::GetNext(v10) ) /*0x63731a*/
          goto LABEL_34; /*0x637326*/
      }
LABEL_15:
      abstractFlags = v4->abstractFlags; /*0x63732c*/
      v12 = v5; /*0x63732f*/
      if ( !abstractFlags ) /*0x637333*/
        goto LABEL_22; /*0x637333*/
      if ( v5 >= abstractFlags ) /*0x637337*/
      {
        v13 = v4->countObjects[3]; /*0x637339*/
        if ( v13 < 0 ) /*0x637341*/
          goto LABEL_22; /*0x637341*/
        v12 = v13 + (v5 - v13) % v4->countObjects[2]; /*0x637350*/
      }
      if ( v12 < 0 || v12 >= abstractFlags ) /*0x637358*/
      {
LABEL_22:
        v14 = 0; /*0x637362*/
        goto LABEL_23; /*0x637362*/
      }
      v14 = *(unsigned int *)(v4->ptr_8 + 4 * v12); /*0x63735d*/
LABEL_23:
      Type = BuildingClass::GetType(ptr_0); /*0x637364*/
      v33 = v14; /*0x637374*/
      v16 = (*(int (**)(int, int *))(Type->ptr_4 + 16))(Type + 4, &v33); /*0x63737e*/
      if ( v16 == -1 ) /*0x637384*/
      {
        v17 = 0; /*0x637386*/
      }
      else
      {
        v18 = Type->abstractFlags; /*0x63738a*/
        if ( v18 == 1 ) /*0x637390*/
        {
          v17 = v14; /*0x637392*/
        }
        else
        {
          v19 = v16 + 1; /*0x637396*/
          if ( v19 >= v18 ) /*0x637399*/
            v19 = 0; /*0x63739b*/
          v17 = ArrayClass::GetAt_Wrap((ArrayClass *)Type, v19); /*0x6373a0*/
        }
      }
      v33 = v17; /*0x6373a7*/
      if ( v17 && !v17->u32_1C ) /*0x6373ad*/
      {
        v17->u32_1C = 1; /*0x6373b8*/
        VectorClass::Append((DynamicVectorClass *)&stru_AC4B48.__pad_B8[152], &v33); /*0x6373c2*/
      }
      (v4)->Cleanup(v5); /*0x6373ca*/
LABEL_34:
      --v5; /*0x6373cf*/
    }
    while ( v5 >= 0 ); /*0x6373d0*/
    v3 = v34; /*0x6373d6*/
    v2 = v31; /*0x6373da*/
LABEL_36:
    v31 = ++v2; /*0x6373e1*/
  }
  while ( v2 < v3 ); /*0x6373e5*/
LABEL_37:
  v20 = 0; /*0x6373eb*/
  v34 = *(unsigned int *)&stru_AC4B48.__pad_B8[168]; /*0x6373f4*/
  if ( *(int *)&stru_AC4B48.__pad_B8[168] > 0 ) /*0x6373f8*/
  {
    do /*0x637438*/
    {
      v21 = *(unsigned int *)(*(unsigned int *)&stru_AC4B48.__pad_B8[156] + 4 * v20); /*0x637400*/
      FactoryClass::ClearObjects((FactoryClass *)v21); /*0x637405*/
      v22 = *(unsigned int *)(v21 + 16); /*0x63740a*/
      for ( i = 0; i < v22; ++i ) /*0x637411*/
        ScriptAction::PlaceObject(v21, *(unsigned int **)(*(unsigned int *)(v21 + 4) + 4 * i)); /*0x63741c*/
      ScriptAction::FindSquadMember((ScriptAction *)v21); /*0x637428*/
      v24 = ++v20 < v34; /*0x637432*/
      *(unsigned char *)(v21 + 28) = 0; /*0x637434*/
    }
    while ( v24 ); /*0x637438*/
  }
  *(unsigned int *)&stru_AC4B48.__pad_B8[168] = 0; /*0x63743f*/
  BlowPipe_23::Clear_1((_VectorClass_PAVPlanningNodeClass *)&stru_AC4B48.__pad_B8[152]); /*0x637449*/
  v26 = *(unsigned int *)&stru_AC4B48.__pad_B8[144]; /*0x63744e*/
  if ( *(unsigned int *)&stru_AC4B48.__pad_B8[144] != -1 ) /*0x637457*/
  {
    result = SuperWeaponClass::UpdateAll(v29); /*0x637463*/
    if ( v26 ) /*0x63746a*/
    {
      if ( v26 == 1 ) /*0x6374c2*/
      {
        result = stru_AC4B48.__pad_B8[8]; /*0x6374c4*/
        if ( !stru_AC4B48.__pad_B8[8] ) /*0x6374cb*/
        {
          stru_AC4B48.__pad_B8[8] = 1; /*0x6374de*/
          StringCSF = GetStringCSF(g_Str_MSG_PostContinualCommand, 0, g_Str_File_PlanMgr_cpp, 3233); /*0x6374e5*/
          AddMessageListPlayerMessage(StringCSF, 480); /*0x6374f1*/
          result = (unsigned __int8)PlayVocClass(dword_8871E0->ShellButtonSlideSound, 0x2000u, 1.0, 0); /*0x63750e*/
        }
      }
      else if ( v26 == 2 ) /*0x637518*/
      {
        result = PlanManager::Notify((PlanManager *)g_Str_MSG_NodeMaximum); /*0x63751f*/
      }
    }
    else
    {
      result = stru_AC4B48.__pad_B8[8]; /*0x63746c*/
      if ( !stru_AC4B48.__pad_B8[8] ) /*0x637473*/
      {
        stru_AC4B48.__pad_B8[8] = 1; /*0x63748a*/
        v27 = GetStringCSF(g_Str_MSG_PostTerminatingCommand, 0, g_Str_File_PlanMgr_cpp, 3233); /*0x637491*/
        AddMessageListPlayerMessage(v27, 480); /*0x63749d*/
        result = (unsigned __int8)PlayVocClass(dword_8871E0->ShellButtonSlideSound, 0x2000u, 1.0, 0); /*0x6374b8*/
      }
    }
    *(unsigned int *)&stru_AC4B48.__pad_B8[144] = -1; /*0x637524*/
  }
  LOBYTE(stru_AC4B48.SidebarClass_field_0x188) = 0; /*0x637531*/
  stru_AC4B48.__pad_B8[200] = 0; /*0x637538*/
  stru_AC4B48.__pad_B8[8] = 0; /*0x63753f*/
  return result; /*0x637547*/

}
}
// 0x6375B0
namespace gamemd {
int E4Recv_6375B0::sub_6375B0()
{

  unsigned char *v2; // eax
  unsigned char *v3; // ebx
  int *p_health; // esi
  int result; // eax

  v2 = (unsigned char *)__2_YAPAXI_Z(0x6Fu); /*0x6375b6*/
  if ( v2 ) /*0x6375c0*/
  {
    *v2 = 0; /*0x6375c2*/
    v3 = v2; /*0x6375c5*/
  }
  else
  {
    v3 = 0; /*0x6375c9*/
  }
  qmemcpy(v3, this, 0x6Cu); /*0x6375d3*/
  p_health = &this->health; /*0x6375d3*/
  *((unsigned short *)v3 + 54) = *(unsigned short *)p_health; /*0x6375d5*/
  v3[110] = *((unsigned char *)p_health + 2); /*0x6375d7*/
  if ( *v3 == 4 ) /*0x6375dd*/
    v3[29] = 2; /*0x6375df*/
  result = *(unsigned int *)&DataGlobal_AC4B50; /*0x6375e3*/
  if ( *(int *)&DataGlobal_AC4B58 < *(int *)&DataGlobal_AC4B50 /*0x63761e*/
    || (DataGlobal_AC4B55 || !*(unsigned int *)&DataGlobal_AC4B50)
    && (int)DataGlobal_AC4B5C > 0
    && (result = (*(int (**)(char *, char *, unsigned int))(*(unsigned int *)&DataGlobal_AC4B48 + 8))(
                   &DataGlobal_AC4B48,
                   (char *)DataGlobal_AC4B5C + *(unsigned int *)&DataGlobal_AC4B50,
                   0),
        (unsigned char)result) )
  {
    result = (*(unsigned int *)&DataGlobal_AC4B58)++; /*0x637626*/
    *(unsigned int *)(*(unsigned int *)&DataGlobal_AC4B4C + 4 * result) = v3; /*0x637635*/
  }
  return result; /*0x637638*/

}
}
// 0x637920
namespace gamemd {
AbstractClass * * sub_637920()
{

  int v1 = 0; // edi /*0x637928*/
  int v2 = 0; // ebx /*0x63792a*/
  int v5; // [esp+8h] [ebp-4h]
  v5 = *(unsigned int *)&DataGlobal_AC4CA8; /*0x63792e*/
  if ( *(int *)&DataGlobal_AC4CA8 > 0 ) /*0x637932*/
  {
    while ( 1 ) /*0x63793f*/
    {
      int v3; // esi
      v3 = *(unsigned int *)(*(unsigned int *)&DataGlobal_AC4C9C + 4 * v2); /*0x63793f*/
      ((FactoryClass *)v3)->ClearObjects(); /*0x637944*/
      int v4; // ebp
      v4 = *(unsigned int *)(v3 + 16); /*0x637949*/
      if ( v4 > 0 ) /*0x63794e*/
      {
        do /*0x637961*/
          ScriptAction::PlaceObject(v3, *(unsigned int **)(*(unsigned int *)(v3 + 4) + 4 * v1++)); /*0x637959*/
        while ( v1 < v4 ); /*0x637961*/
      }
      ((ScriptAction *)((ScriptAction *)v3))->FindSquadMember(); /*0x637965*/
      ++v2; /*0x63796e*/
      *(unsigned char *)(v3 + 28) = 0; /*0x637971*/
      if ( v2 >= v5 ) /*0x637975*/
        break; /*0x637975*/
      v1 = 0; /*0x637938*/
    }
  }
  *(unsigned int *)&DataGlobal_AC4CA8 = 0; /*0x637980*/
  if ( *(unsigned int *)&DataGlobal_AC4C9C && DataGlobal_AC4CA5 ) /*0x637992*/
  {
    operator delete((*(void **)&DataGlobal_AC4C9C)); /*0x637995*/
    *(unsigned int *)&DataGlobal_AC4C9C = 0; /*0x63799d*/
  }
  *(unsigned int *)&DataGlobal_AC4CA0 = 0; /*0x6379a3*/
  DataGlobal_AC4CA5 = 0; /*0x6379aa*/
}
}
// 0x638120
namespace gamemd {
char ExecuteActionPlanManager(IUnknown * a1, char * a2)
{

  char *v2; // edi
  int *ScenarioClassActionCoords; // eax
  int v4; // ecx
  int v5; // ebx
  int v6; // edx
  int v7; // eax
  int v8; // esi
  int v9; // ebp
  Function *v10; // edi
  TeamClass *v11; // eax
  int LeaderIndex; // eax
  ScriptAction *v13; // ecx
  BuildingClass *v14; // esi
  int v15; // eax
  char v16; // al
  wchar_t *StringCSF; // eax
  wchar_t *v19; // ecx
  ObjectClass *Type; // ebp
  ScriptAction *v21; // eax
  bool v22; // bl
  ObjectClass *v23; // ecx
  int v24; // eax
  int abstractFlags; // eax
  int v26; // eax
  unsigned int v27; // eax
  VectorClass *v28; // eax
  VectorClass *v29; // edi
  int v30; // esi
  wchar_t *v31; // eax
  int v32; // eax
  unsigned char v33[112]; // [esp-70h] [ebp-ACh] BYREF
  bool v34; // [esp+13h] [ebp-29h]
  ScriptAction *v35; // [esp+14h] [ebp-28h] BYREF
  char v36[4]; // [esp+18h] [ebp-24h] BYREF
  char *v37; // [esp+1Ch] [ebp-20h]
  BuildingClass *v38; // [esp+20h] [ebp-1Ch]
  int v39; // [esp+24h] [ebp-18h]
  int v40; // [esp+28h] [ebp-14h]
  int v41; // [esp+2Ch] [ebp-10h]
  unsigned int v42[3]; // [esp+30h] [ebp-Ch] BYREF

  v2 = a2; /*0x638127*/
  v38 = a1; /*0x638129*/
  v37 = a2; /*0x63812f*/
  if ( !a1 ) /*0x638133*/
    return 0; /*0x638133*/
  v34 = a2[2] == *(unsigned int *)(*(int *)((char *)&stru_A83CD9.estimatedHealth + 3) + 48); /*0x63814c*/
  ScenarioClassActionCoords = GetScenarioClassActionCoords(v42, a2); /*0x638151*/
  if ( *ScenarioClassActionCoords == -1 && ScenarioClassActionCoords->Coord3D_field_0x04 == -1 && ScenarioClassActionCoords->q008 == -1 ) /*0x63816b*/
    return 0; /*0x63816b*/
  v4 = *ScenarioClassActionCoords; /*0x638174*/
  v5 = dword_AC4B40; /*0x638176*/
  *(unsigned int *)v36 = *(unsigned int *)(v2 + 3); /*0x63817c*/
  v6 = ScenarioClassActionCoords->Coord3D_field_0x04; /*0x638180*/
  v7 = ScenarioClassActionCoords->q008; /*0x638183*/
  v8 = v2[2]; /*0x638186*/
  v9 = 0; /*0x63818a*/
  v39 = v4; /*0x63818c*/
  v40 = v6; /*0x638192*/
  v41 = v7; /*0x638196*/
  if ( dword_AC4B40 <= 0 ) /*0x63819a*/
  {
LABEL_13:
    v13 = 0; /*0x6381f9*/
  }
  else
  {
    while ( 1 ) /*0x6381a9*/
    {
      v10 = (Function *)*((unsigned int *)dword_AC4B34 + v9); /*0x6381a9*/
      if ( ScriptAction::GetActionCoordinates((ScriptAction *)v10, v39, v40, v41) /*0x6381d5*/
        && (*(unsigned int *)v36 == -1 || *(unsigned int *)v36 == v10->Function_field_0x18) )
      {
        v11 = (TeamClass *)Function::Method_6342D0(v10, 0); /*0x6381db*/
        LeaderIndex = TeamClass::GetLeaderIndex(v11); /*0x6381e2*/
        if ( v8 == -1 || v8 == LeaderIndex ) /*0x6381ee*/
          break; /*0x6381ee*/
      }
      if ( ++v9 >= v5 ) /*0x6381f3*/
      {
        v2 = v37; /*0x6381f5*/
        goto LABEL_13; /*0x6381f5*/
      }
    }
    v13 = (ScriptAction *)v10; /*0x638252*/
    v2 = v37; /*0x638254*/
  }
  v14 = v38; /*0x6381fb*/
  v35 = v13; /*0x6381ff*/
  if ( v13 && Array::FindValue((Array *)v13, (int)v38) != -1 ) /*0x638210*/
    return 1; /*0x638210*/
  v15 = ScriptAction::ClassifyAction(&v38->ptr_0, v2); /*0x63821a*/
  if ( v15 != -1 ) /*0x638222*/
  {
    if ( !v34 ) /*0x63822e*/
      return 0; /*0x63822e*/
    if ( !v15 ) /*0x638236*/
    {
      v16 = *v2; /*0x638238*/
      if ( *v2 == 9 ) /*0x63823c*/
      {
        PlanManager::Notify(&g_Str_MSG_PlanningModeNoDeploy); /*0x638243*/
        return 0; /*0x638251*/
      }
      if ( v16 == 6 ) /*0x63825c*/
      {
        PlanManager::Notify((PlanManager *)g_Str_MSG_PlanningModeNoStop); /*0x638263*/
        return 0; /*0x638271*/
      }
      if ( v16 == 7 ) /*0x638274*/
      {
        PlanManager::Notify((PlanManager *)g_Str_MSG_PlanningModeNoScatter); /*0x63827f*/
        return 0; /*0x63828d*/
      }
      return 0; /*0x638274*/
    }
    if ( v15 == 1 ) /*0x638295*/
    {
      if ( !stru_AC4B48.__pad_B8[8] ) /*0x63829e*/
      {
        stru_AC4B48.__pad_B8[8] = 1; /*0x6382a4*/
        StringCSF = GetStringCSF(g_Str_MSG_PostTerminatingCommand, 0, g_Str_File_PlanMgr_cpp, 3233); /*0x6382bb*/
        AddMessageListPlayerMessage(StringCSF, 480); /*0x6382c7*/
        PlayVocClass(dword_8871E0->ShellButtonSlideSound, 0x2000u, 1.0, 0); /*0x6382e4*/
        return 0; /*0x6382f2*/
      }
      return 0; /*0x63829e*/
    }
    if ( v15 != 2 || stru_AC4B48.__pad_B8[8] ) /*0x638303*/
      return 0; /*0x63853c*/
    stru_AC4B48.__pad_B8[8] = 1; /*0x638309*/
    *(unsigned int *)&v33[108] = 3233; /*0x63830f*/
    *(unsigned int *)&v33[104] = g_Str_File_PlanMgr_cpp; /*0x638314*/
    v19 = g_Str_MSG_PostContinualCommand; /*0x63831b*/
LABEL_67:
    v31 = GetStringCSF(v19, 0, *(const char **)&v33[104], *(int *)&v33[108]); /*0x638506*/
    AddMessageListPlayerMessage(v31, 480); /*0x638512*/
    PlayVocClass(dword_8871E0->ShellButtonSlideSound, 0x2000u, 1.0, 0); /*0x63852e*/
    return 0; /*0x63852e*/
  }
  Type = (ObjectClass *)BuildingClass::GetType(v38); /*0x63832c*/
  if ( !Type ) /*0x638330*/
  {
    v21 = (ScriptAction *)__2_YAPAXI_Z(0x9Cu); /*0x638337*/
    if ( v21 ) /*0x638341*/
      *(unsigned int *)v36 = ScriptAction::Constructor(v21, (int)v38); /*0x63834b*/
    else
      *(unsigned int *)v36 = 0; /*0x638351*/
    ScriptActionVector::PushBack((ScriptActionVector *)&stru_AC4B48.__pad_B8[120], v36); /*0x638363*/
    BuildingClass::SetType(v14, *(int *)v36); /*0x63836f*/
    Type = *(ObjectClass **)v36; /*0x638374*/
  }
  v22 = v34; /*0x638378*/
  if ( v34 ) /*0x63837e*/
  {
    v23 = (ObjectClass *)v2[12]; /*0x638380*/
    if ( v23 == 7 || v23 == 8 || v23 == 9 ) /*0x638391*/
    {
      v24 = 0; /*0x638393*/
LABEL_46:
      *(unsigned int *)&stru_AC4B48.__pad_B8[144] = v24; /*0x6383bf*/
      goto LABEL_47; /*0x6383bf*/
    }
    if ( ExecuteActionPlanManager_Helper_638C40(v23, *(unsigned int *)(v2 + 14), v2[18]) ) /*0x6383a7*/
    {
      v24 = 0; /*0x6383b0*/
      goto LABEL_46; /*0x6383b2*/
    }
    if ( Type->abstractFlags == 15 ) /*0x6383b8*/
    {
      v24 = 2; /*0x6383ba*/
      goto LABEL_46; /*0x6383ba*/
    }
  }
LABEL_47:
  if ( Type->lastLayer >= 0 ) /*0x6383cc*/
  {
    if ( !v34 || stru_AC4B48.__pad_B8[8] ) /*0x6383df*/
      return 0; /*0x6383df*/
    *(unsigned int *)&v33[108] = 3233; /*0x6383e5*/
    stru_AC4B48.__pad_B8[8] = 1; /*0x6383ea*/
    *(unsigned int *)&v33[104] = g_Str_File_PlanMgr_cpp; /*0x6383f1*/
    v19 = (wchar_t *)aMsgPostloop; /*0x6383f8*/
    goto LABEL_67; /*0x6383fd*/
  }
  abstractFlags = Type->abstractFlags; /*0x638402*/
  if ( abstractFlags ) /*0x638407*/
  {
    if ( abstractFlags == 16 ) /*0x6384df*/
    {
      if ( !v34 || stru_AC4B48.__pad_B8[8] ) /*0x6384ec*/
        return 0; /*0x6384ec*/
      *(unsigned int *)&v33[108] = 3233; /*0x6384ee*/
      stru_AC4B48.__pad_B8[8] = 1; /*0x6384f3*/
      *(unsigned int *)&v33[104] = g_Str_File_PlanMgr_cpp; /*0x6384fa*/
      v19 = g_Str_MSG_NodeMaximum; /*0x638501*/
      goto LABEL_67; /*0x638501*/
    }
  }
  else
  {
    if ( *(int *)&stru_AC4B48.__pad_B8[80] < *(int *)&stru_AC4B48.__pad_B8[72] /*0x638444*/
      || (stru_AC4B48.__pad_B8[77] || !*(unsigned int *)&stru_AC4B48.__pad_B8[72])
      && *(int *)&stru_AC4B48.__pad_B8[84] > 0
      && (*(unsigned __int8 (**)(char *, int, unsigned int))(*(unsigned int *)&stru_AC4B48.__pad_B8[64] + 8))(
           &stru_AC4B48.__pad_B8[64],
           *(unsigned int *)&stru_AC4B48.__pad_B8[84] + *(unsigned int *)&stru_AC4B48.__pad_B8[72],
           0) )
    {
      v26 = (*(unsigned int *)&stru_AC4B48.__pad_B8[80])++; /*0x638451*/
      *(unsigned int *)(*(unsigned int *)&stru_AC4B48.__pad_B8[68] + 4 * v26) = v14; /*0x638460*/
    }
    v27 = v2[2]; /*0x638463*/
    if ( v27 < 0x18 ) /*0x638469*/
      ++*(&stru_AC4B48.SidebarClass_field_0x3C + v27); /*0x638470*/
  }
  if ( !v35 ) /*0x63847d*/
  {
    v28 = (VectorClass *)__2_YAPAXI_Z(0xB8u); /*0x638488*/
    v29 = v28; /*0x63848d*/
    if ( v28 ) /*0x638494*/
    {
      *(unsigned int *)&v33[108] = 0; /*0x63849e*/
      *(unsigned int *)&v33[104] = 0; /*0x6384a0*/
      v30 = *(unsigned int *)(v37 + 3); /*0x6384a2*/
      ExecuteActionPlanManager_Helper_63DEC0(v28, 0, 0); /*0x6384a7*/
      v29[1].Capacity = v30; /*0x6384af*/
      *(unsigned int *)&v33[108] = 0; /*0x6384b2*/
      *(unsigned int *)&v33[104] = 0; /*0x6384b4*/
      v29[1].IsInitialized[0] = 0; /*0x6384b6*/
      ExecuteActionPlanManager_Helper_63E1D0(v29 + 2, *(int *)&v33[104], *(int *)&v33[108]); /*0x6384ba*/
      ExecuteActionPlanManager_Helper((ObjectClass *)&v29[3].Capacity); /*0x6384c2*/
      v29[11].ptr_0 = -1; /*0x6384ca*/
      v29[11].Items = -1; /*0x6384d0*/
      v35 = (ScriptAction *)v29; /*0x6384d6*/
    }
    else
    {
      v35 = 0; /*0x63853d*/
    }
    VectorClass::Append((DynamicVectorClass *)&stru_AC4B30, &v35); /*0x63854f*/
    v2 = v37; /*0x638554*/
    v14 = v38; /*0x638558*/
  }
  v32 = ExecuteActionPlanManager_Helper_636EB0(Type); /*0x63855e*/
  if ( v32 ) /*0x638565*/
  {
    qmemcpy(v33, v2, 0x6Fu); /*0x638573*/
    ScriptAction::ExecutePlacement( /*0x638581*/
      (int)v35,
      v32,
      *(int *)v33,
      *(__int64 *)&v33[4],
      *(int *)&v33[12],
      *(int *)&v33[16],
      *(int *)&v33[20],
      *(int *)&v33[24],
      *(int *)&v33[28],
      *(int *)&v33[32],
      *(int *)&v33[36],
      *(int *)&v33[40],
      *(int *)&v33[44],
      *(int *)&v33[48],
      *(int *)&v33[52],
      *(int *)&v33[56],
      *(int *)&v33[60],
      *(int *)&v33[64],
      *(int *)&v33[68],
      *(int *)&v33[72],
      *(int *)&v33[76],
      *(int *)&v33[80],
      *(int *)&v33[84],
      *(int *)&v33[88],
      *(int *)&v33[92],
      *(int *)&v33[96],
      *(int *)&v33[100],
      *(int *)&v33[104],
      *(int *)&v33[108]);
  }
  else
  {
    ScriptAction::CreatePlacementAction(v35, v14, v2); /*0x63858e*/
  }
  if ( v22 ) /*0x638595*/
    PlayVocClass(dword_8871E0->EnterGrinderSound, 0x2000u, 1.0, 0); /*0x6385ae*/
  return 1; /*0x63824a*/

}
}
// 0x6386E0
namespace gamemd {
int FactoryClass_ClearProduction(unsigned int * a1, int a2)
{

  int result; // eax
  int v5; // ebx
  int v6; // edi
  int v7; // ebx
  int i; // ebp
  Array *v9; // esi
  int Value; // eax
  void *v11; // eax
  House *v12; // ecx
  unsigned int v13; // esi
  void *Block; // [esp+10h] [ebp-8h] BYREF
  int v15; // [esp+14h] [ebp-4h]

  if ( a1 ) /*0x6386ec*/
  {
    result = BuildingClass::GetType((BuildingClass *)a1); /*0x6386f2*/
    v5 = result; /*0x6386f7*/
    v15 = result; /*0x6386fb*/
    if ( result ) /*0x6386ff*/
    {
      if ( !a2 || (result = *(char *)(a2 + 29), !*(unsigned char *)(a2 + 29)) ) /*0x638709*/
      {
        result = *(unsigned int *)(v5 + 20); /*0x638715*/
        if ( result > 0 ) /*0x63871a*/
        {
          result = BuildingClass::GetType((BuildingClass *)a1); /*0x638722*/
          v6 = result; /*0x638727*/
          if ( result ) /*0x63872b*/
          {
            v7 = *(unsigned int *)(result + 20); /*0x638731*/
            for ( i = 0; i < v7; ++i ) /*0x638740*/
            {
              v9 = *(Array **)(*(unsigned int *)(v6 + 8) + 4 * i); /*0x638745*/
              Value = Array::FindValue(v9, *(unsigned int *)v6); /*0x63874d*/
              if ( Value == -1 ) /*0x638755*/
                v11 = 0; /*0x638757*/
              else
                v11 = *(void **)(v9->Array_field_0x4 + 4 * Value); /*0x63875e*/
              Block = v11; /*0x638763*/
              if ( v11 ) /*0x638767*/
              {
                FactoryClass::FinishProduction((int *)v9->__pad_0, (int)v11); /*0x63876c*/
                __3_YAXPAX_Z(*((void **)Block + 1)); /*0x638779*/
                FactoryClass::RemoveItemAt((FactoryClass *)v9, (int)&Block); /*0x638788*/
                __3_YAXPAX_Z(Block); /*0x638792*/
                if ( !v9->Array_field_0x10 ) /*0x638797*/
                {
                  if ( v9 ) /*0x6387a3*/
                    FactoryClass::RemoveFromArrays((FactoryClass *)v9, 1); /*0x6387a9*/
                }
              }
            }
            if ( v7 ) /*0x6387ba*/
            {
              Block = *(void **)v6; /*0x6387be*/
              v12 = (House *)*((unsigned int *)Block + 135); /*0x6387c2*/
              v13 = *&v12->u32_30; /*0x6387c8*/
              if ( (unsigned __int8)House::IsHumanPlayer(v12) ) /*0x6387cb*/
              {
                if ( *(int *)((char *)&stru_A83CD9.estimatedHealth + 3) ) /*0x6387db*/
                  v13 = *(unsigned int *)(*(int *)((char *)&stru_A83CD9.estimatedHealth + 3) + 48); /*0x6387dd*/
              }
              DecFactoryClassCounter(v13); /*0x6387e2*/
              VectorClass::EraseAt((DynamicVectorClass *)&stru_AC4B48.__pad_B8[64], (int)&Block); /*0x6387f1*/
            }
            (*(void (**)(int))(*(unsigned int *)(v6 + 4) + 12))(v6 + 4); /*0x6387fc*/
            v5 = v15; /*0x6387ff*/
            result = -1; /*0x638803*/
            *(unsigned int *)(v6 + 140) = -1; /*0x638806*/
            *(unsigned int *)(v6 + 144) = -1; /*0x63880c*/
            *(unsigned int *)(v6 + 148) = -1; /*0x638812*/
            *(unsigned char *)(v6 + 152) = 0; /*0x638818*/
            *(unsigned char *)(v6 + 153) = 0; /*0x63881f*/
          }
        }
      }
      *(unsigned char *)(v5 + 28) = 0; /*0x638826*/
    }
  }
  return result; /*0x63882a*/

}
}
// 0x638E60
namespace gamemd {
AbstractClass * * sub_638E60()
{
  int v1; // ebx
  int v2; // ebp
  int v3; // edi
  int v4; // esi
  int *ScreenPos; // eax
  int *v6; // eax
  int v7; // [esp+4h] [ebp-2Ch]
  int v8; // [esp+8h] [ebp-28h] BYREF
  int v9; // [esp+10h] [ebp-20h] BYREF
  int v10; // [esp+14h] [ebp-1Ch]
  int v11; // [esp+18h] [ebp-18h]
  int v12; // [esp+1Ch] [ebp-14h]
  int v13[4]; // [esp+20h] [ebp-10h] BYREF

  if ( !DataGlobal_AC4CB0 ) /*0x638e6b*/
  {
    v1 = (*(int (**)(void *))(*(unsigned int *)stru_887598.lineTrailer + 44))(stru_887598.lineTrailer); /*0x638e85*/
    v2 = (*(int (**)(void *))(*(unsigned int *)stru_887598.lineTrailer + 48))(stru_887598.lineTrailer); /*0x638e8c*/
    v3 = 0; /*0x638e93*/
    v7 = *(unsigned int *)&DataGlobal_AC4C28; /*0x638e95*/
    if ( *(int *)&DataGlobal_AC4C28 <= 0 ) /*0x638e9b*/
    {
      LABEL_8:
      v4 = 0; /*0x638f1c*/
    }
    else
    {
      while ( 1 ) /*0x638ea7*/
      {
        v4 = *(unsigned int *)(*(unsigned int *)DataGlobal_AC4C1C + 4 * v3); /*0x638ea7*/
        ScreenPos = (int *)(((ScriptAction *)((ScriptAction *)v4))->GetScreenPos(&v8)); /*0x638eac*/
        v6 = (int *)(ComputeBounds(v13, 8, *ScreenPos, ScreenPos[1])); /*0x638ec1*/
        v9 = *v6; /*0x638ec8*/
        v10 = v6->u32_4; /*0x638ecf*/
        v11 = v6->u32_8; /*0x638ed6*/
        v12 = v6->q00C; /*0x638ee1*/
        ShrinkRect(&v9, 4); /*0x638eea*/
        if ( v1 >= v9 && v1 < v9 + v11 && v2 >= v10 && v2 < v10 + v12 ) /*0x638f11*/
          break; /*0x638f11*/
        if ( ++v3 >= v7 ) /*0x638f1a*/
          goto LABEL_8; /*0x638f1a*/
      }
    }
    if ( v4 != *(unsigned int *)&g_ScriptPool ) /*0x638f28*/
    {
      *(unsigned int *)&DataGlobal_AC4C3C = 0; /*0x638f2c*/
      if ( v4 /*0x638f66*/
        && (*(Object **)(**v4->ptr_4 + 540) != dword_A83D4C
         || *(unsigned int *)&g_ScriptState && *(unsigned int *)&g_ScriptState != v4
         || BuildingClass::CheckBuildability((BuildingClass *)v4) != -1) )
      {
        *(unsigned int *)&DataGlobal_AC4C3C = v4; /*0x638f68*/
        v4 = 0; /*0x638f6e*/
      }
      *(unsigned int *)&g_ScriptPool = v4; /*0x638f72*/
      if ( v4 ) /*0x638f78*/
        Team_Get((ObjectClass *)v4); /*0x638f7c*/
    }
  }
}
}
// 0x639040
namespace gamemd {
int sub_639040(void * aMsgPlanningmod_2)
{

  int v2; // ebp
  int v3; // eax
  unsigned __int8 **i; // esi
  unsigned __int8 *v5; // ecx
  int *Type; // edi
  int v7; // esi
  unsigned __int8 *v8; // ecx
  unsigned int *v9; // eax
  wchar_t *StringCSF; // eax

  if ( !stru_AC4B48.__pad_194[24] ) /*0x63904b*/
    return 1; /*0x63904f*/
  v2 = *(unsigned int *)&stru_A8E960.random[340]; /*0x639054*/
  if ( !*(unsigned int *)&stru_A8E960.random[340] ) /*0x63905c*/
    return 1; /*0x63905e*/
  v3 = 0; /*0x639065*/
  if ( *(int *)&stru_A8E960.random[340] > 0 ) /*0x639069*/
  {
    for ( i = *(unsigned __int8 ***)&stru_A8E960.random[328]; ; ++i ) /*0x63906f*/
    {
      v5 = *i; /*0x639075*/
      if ( *i ) /*0x639075*/
      {
        if ( (v5[20] & 1) != 0 ) /*0x639085*/
          break; /*0x639085*/
      }
      if ( ++v3 >= *(int *)&stru_A8E960.random[340] ) /*0x63908d*/
        return 0; /*0x639095*/
    }
    Type = (int *)BuildingClass::GetType((BuildingClass *)v5); /*0x63909b*/
    v7 = 0; /*0x63909d*/
    while ( 1 ) /*0x6390a4*/
    {
      v8 = *(unsigned __int8 **)(*(unsigned int *)&stru_A8E960.random[328] + 4 * v7); /*0x6390a4*/
      if ( !v8 ) /*0x6390a9*/
        break; /*0x6390a9*/
      if ( (v8[20] & 1) == 0 ) /*0x6390b5*/
        break; /*0x6390b5*/
      v9 = (unsigned int *)BuildingClass::GetType((BuildingClass *)v8); /*0x6390b7*/
      if ( !Object_Read(Type, v9) ) /*0x6390c0*/
        break; /*0x6390c0*/
      if ( ++v7 >= v2 ) /*0x6390cc*/
        return 1; /*0x6390cc*/
    }
    if ( !stru_AC4B48.__pad_B8[8] ) /*0x6390d7*/
    {
      stru_AC4B48.__pad_B8[8] = 1; /*0x6390ea*/
      StringCSF = GetStringCSF(aMsgPlanningmod_2, 0, g_Str_File_PlanMgr_cpp, 3233); /*0x6390f1*/
      AddMessageListPlayerMessage(StringCSF, 480); /*0x6390fd*/
      PlayVocClass(dword_8871E0->ShellButtonSlideSound, 0x2000u, 1.0, 0); /*0x639119*/
    }
  }
  return 0; /*0x63904d*/

}
}
// 0x639130
namespace gamemd {
int sub_639130(void * aMsgPlannermaxi)
{

  unsigned int v1; // ecx
  int v2; // ebp
  int v3; // ebx
  int v4; // edi
  int i; // esi
  BuildingClass *v6; // ecx
  int Type; // eax
  wchar_t *StringCSF; // eax

  if ( !stru_AC4B48.__pad_194[24] ) /*0x639138*/
    return 1; /*0x639138*/
  v1 = *(unsigned int *)(*(int *)((char *)&stru_A83CD9.estimatedHealth + 3) + 48); /*0x639143*/
  v2 = 0; /*0x639157*/
  if ( v1 < 0x18 ) /*0x63915d*/
    v2 = *(&stru_AC4B48.SidebarClass_field_0x3C + v1); /*0x63915f*/
  v3 = *(unsigned int *)&stru_A8E960.random[340]; /*0x639166*/
  v4 = 0; /*0x63916c*/
  for ( i = 0; i < v3; ++i ) /*0x639172*/
  {
    v6 = *(BuildingClass **)(*(unsigned int *)&stru_A8E960.random[328] + 4 * i); /*0x63917a*/
    if ( v6 ) /*0x63917f*/
    {
      if ( (v6->abstractFlags & 1) != 0 ) /*0x63918b*/
      {
        Type = BuildingClass::GetType(v6); /*0x63918d*/
        if ( !Type || !*(unsigned int *)(Type + 20) ) /*0x639196*/
          ++v4; /*0x63919d*/
      }
    }
  }
  if ( v4 + v2 <= 128 ) /*0x6391af*/
    return 1; /*0x639203*/
  if ( !stru_AC4B48.__pad_B8[8] ) /*0x6391b8*/
  {
    stru_AC4B48.__pad_B8[8] = 1; /*0x6391cb*/
    StringCSF = GetStringCSF(aMsgPlannermaxi, 0, g_Str_File_PlanMgr_cpp, 3233); /*0x6391d2*/
    AddMessageListPlayerMessage(StringCSF, 480); /*0x6391de*/
    PlayVocClass(dword_8871E0->ShellButtonSlideSound, 0x2000u, 1.0, 0); /*0x6391fa*/
  }
  return 0; /*0x639202*/

}
}
// 0x639210
namespace gamemd {
int sub_639210(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // edi
  int v6; // ebx
  int v7; // esi
  unsigned int *ScenarioClassActionCoords; // eax
  int v9; // ecx
  int v10; // edi
  int v14; // [esp+18h] [ebp-10h]
  unsigned int v15[3]; // [esp+1Ch] [ebp-Ch] BYREF

  v5 = dword_AC4B40; /*0x639217*/
  v6 = 0; /*0x63921d*/
  v14 = dword_AC4B40; /*0x639229*/
  if ( dword_AC4B40 <= 0 ) /*0x63922d*/
    return 0; /*0x6392bc*/
  while ( 1 ) /*0x63923c*/
  {
    v7 = *((unsigned int *)dword_AC4B34 + v6); /*0x63923c*/
    ScenarioClassActionCoords = GetScenarioClassActionCoords(v15, *(unsigned char **)(*v7->u32_4 + 4)); /*0x63924b*/
    if ( *ScenarioClassActionCoords != a3 /*0x639276*/
      || ScenarioClassActionCoords->Coord3D_field_0x04 != a4
      || ScenarioClassActionCoords->q008 != a5
      || a2 != -1 && a2 != v7->u32_18 )
    {
      goto LABEL_13; /*0x639276*/
    }
    v9 = *(unsigned int *)(**v7->u32_4 + 540); /*0x63927f*/
    v10 = *(unsigned int *)(v9 + 48); /*0x639285*/
    if ( (uint8_t)((House *)((void *)v9))->IsHumanPlayer() && dword_A83D4C ) /*0x639298*/
      v10 = dword_A83D4C->relatedTagsCount; /*0x63929a*/
    if ( a1 == -1 || a1 == v10 ) /*0x6392a8*/
      return v7; /*0x6392b3*/
    v5 = v14; /*0x6392aa*/
    LABEL_13:
    if ( ++v6 >= v5 ) /*0x6392b1*/
      return 0; /*0x6392b1*/
  }
}
}
// 0x6392D0
namespace gamemd {
unsigned int ** sub_6392D0(int a1, int a2)
{
  unsigned int **v3; // edi

  int v2 = 0; // ebx /*0x6392da*/
  int v8; // [esp+10h] [ebp-44h]
  v8 = dword_AC4B40; /*0x6392e0*/
  if ( dword_AC4B40 <= 0 ) /*0x6392e4*/
    return 0; /*0x639393*/
  while ( 1 ) /*0x6392f8*/
  {
    v3 = (unsigned int **)*((unsigned int *)dword_AC4B34 + v2); /*0x6392f8*/
    unsigned int *Coords; // eax
    unsigned int v11[3]; // [esp+28h] [ebp-2Ch] BYREF
    Coords = ScriptAction::GetCoords(v3, v11); /*0x6392fd*/
    unsigned int v10[3]; // [esp+1Ch] [ebp-38h] BYREF
    v10[0] = *Coords; /*0x639304*/
    v10[1] = Coords[1]; /*0x63930b*/
    v10[2] = Coords[2]; /*0x639316*/
    unsigned int *v5; // eax
    int v9; // [esp+14h] [ebp-40h] BYREF
    v5 = (unsigned int *)(ToCoordPixel(&v9, v10)); /*0x63931e*/
    unsigned int v12[8]; // [esp+34h] [ebp-20h] BYREF
    ((Rect *)(v12))->Set(*v5 - 4, v5[1] - 4, 8, 8); /*0x63933a*/
    v12[4] = v12[0]; /*0x63934f*/
    int v6; // eax
    v6 = v12[1] - 4; /*0x639356*/
    if ( a1 >= v12[0] - 4 && a1 < v12[2] + 8 + v12[0] - 4 && a2 >= v6 && a2 < v12[3] + 8 + v6 ) /*0x639377*/
      break; /*0x639377*/
    if ( ++v2 >= v8 ) /*0x639380*/
      return 0; /*0x639380*/
  }
  return v3; /*0x639389*/
}
}
// 0x6393A0
namespace gamemd {
unsigned int ** sub_6393A0(int a1, int a2)
{
  unsigned int **v3; // edi

  int v2 = 0; // ebx /*0x6393aa*/
  int v8; // [esp+10h] [ebp-44h]
  v8 = dword_AC4C28; /*0x6393b0*/
  if ( dword_AC4C28 <= 0 ) /*0x6393b4*/
    return 0; /*0x639463*/
  while ( 1 ) /*0x6393c8*/
  {
    v3 = (unsigned int **)*((unsigned int *)dword_AC4C1C + v2); /*0x6393c8*/
    unsigned int *Coords; // eax
    unsigned int v11[3]; // [esp+28h] [ebp-2Ch] BYREF
    Coords = ScriptAction::GetCoords(v3, v11); /*0x6393cd*/
    unsigned int v10[3]; // [esp+1Ch] [ebp-38h] BYREF
    v10[0] = *Coords; /*0x6393d4*/
    v10[1] = Coords[1]; /*0x6393db*/
    v10[2] = Coords[2]; /*0x6393e6*/
    unsigned int *v5; // eax
    int v9; // [esp+14h] [ebp-40h] BYREF
    v5 = (unsigned int *)(ToCoordPixel(&v9, v10)); /*0x6393ee*/
    unsigned int v12[8]; // [esp+34h] [ebp-20h] BYREF
    ((Rect *)(v12))->Set(*v5 - 4, v5[1] - 4, 8, 8); /*0x63940a*/
    v12[4] = v12[0]; /*0x63941f*/
    int v6; // eax
    v6 = v12[1] - 4; /*0x639426*/
    if ( a1 >= v12[0] - 4 && a1 < v12[2] + 8 + v12[0] - 4 && a2 >= v6 && a2 < v12[3] + 8 + v6 ) /*0x639447*/
      break; /*0x639447*/
    if ( ++v2 >= v8 ) /*0x639450*/
      return 0; /*0x639450*/
  }
  return v3; /*0x639459*/
}
}
// 0x639470
namespace gamemd {
int sub_639470(int a1, int a2, int a3)
{
  int v5; // esi

  int v3 = dword_AC4C28; // ebp /*0x639475*/
  int v4 = 0; // edi /*0x63947d*/
  if ( dword_AC4C28 <= 0 ) /*0x639481*/
    return 0; /*0x6394cd*/
  while ( 1 ) /*0x63948c*/
  {
    v5 = *((unsigned int *)dword_AC4C1C + v4); /*0x63948c*/
    unsigned int *ScenarioClassActionCoords; // eax
    unsigned int v8[3]; // [esp+10h] [ebp-Ch] BYREF
    ScenarioClassActionCoords = GetScenarioClassActionCoords(v8, *(unsigned char **)(*v5->u32_4 + 4)); /*0x63949b*/
    if ( *ScenarioClassActionCoords == a1 && ScenarioClassActionCoords->Coord3D_field_0x04 == a2 && ScenarioClassActionCoords->q008 == a3 ) /*0x6394b8*/
      break; /*0x6394b8*/
    if ( ++v4 >= v3 ) /*0x6394bd*/
      return 0; /*0x6394bd*/
  }
  return v5; /*0x6394c3*/
}
}
// 0x639800
namespace gamemd {
TechnoClass * * CompleteBuildingProduction(IUnknown * a1, int edx0)
{

  ScriptAction *v2; // edi
  BuildingClass *v4; // ebx
  int Type; // eax
  int v6; // edx
  int v7; // ebp
  TeamClass *v8; // ebx
  int v9; // eax
  int v10; // esi
  unsigned int *v11; // ecx
  int abstractFlags; // edi
  int v13; // edx
  ScriptAction *v14; // esi
  int v15; // edx
  ScriptAction *v16; // eax
  int v17; // eax
  unsigned char *v18; // esi
  BuildingClass *v19; // esi
  unsigned char *WaypointCoords; // eax
  ScriptAction *v21; // eax
  ScriptAction *v22; // edx
  int v23; // eax
  unsigned int *v24; // esi
  signed int v25; // ebx
  signed int j; // edi
  int v27; // ecx
  signed int i; // edi
  unsigned char *v29; // ecx
  int ptr_0; // [esp-4h] [ebp-A4h]
  ScriptAction *v32; // [esp+10h] [ebp-90h] BYREF
  ScriptAction *v33; // [esp+14h] [ebp-8Ch]
  int v34; // [esp+18h] [ebp-88h] BYREF
  unsigned int *v35; // [esp+1Ch] [ebp-84h]
  int v36; // [esp+20h] [ebp-80h] BYREF
  BuildingClass *v37; // [esp+24h] [ebp-7Ch]
  unsigned char v38[8]; // [esp+28h] [ebp-78h] BYREF
  unsigned char v39[108]; // [esp+30h] [ebp-70h] BYREF
  __int16 v40; // [esp+9Ch] [ebp-4h]
  char v41; // [esp+9Eh] [ebp-2h]

  v2 = (ScriptAction *)edx0; /*0x63980a*/
  v36 = edx0; /*0x63980e*/
  v37 = a1; /*0x639812*/
  v4 = ***(BuildingClass ****)(edx0 + 4); /*0x63981b*/
  Type = BuildingClass::GetType(v4); /*0x63981f*/
  v6 = *(unsigned int *)(Type + 4); /*0x639824*/
  v34 = (int)v2; /*0x63982e*/
  v7 = (*(int (**)(int, int *))(v6 + 16))(Type + 4, &v34); /*0x639838*/
  v8 = (TeamClass *)BuildingClass::GetType(v4); /*0x63983f*/
  TeamClass::UpdateBuildQueue(v8, a1, v7, v8->abstractFlags - v7); /*0x63984b*/
  v32 = (ScriptAction *)-1; /*0x639855*/
  v34 = -1; /*0x639859*/
  v33 = 0; /*0x63985d*/
  v9 = BuildingClass::GetType(a1); /*0x639865*/
  v10 = v8->countObjects[3]; /*0x63986a*/
  v11 = (unsigned int *)v9; /*0x639870*/
  v35 = (unsigned int *)v9; /*0x639874*/
  if ( v10 < 0 ) /*0x639878*/
  {
    v2 = v33; /*0x63997f*/
    v17 = v34; /*0x639983*/
  }
  else
  {
    v34 = v8->countObjects[2]; /*0x639888*/
    if ( v10 <= 0 || v7 >= v10 ) /*0x639890*/
    {
      if ( BuildingClass::GetType(v37) ) /*0x6398e5*/
      {
        v33 = (ScriptAction *)v10; /*0x6398f0*/
        if ( v10 < v7 ) /*0x6398f4*/
        {
          do /*0x639952*/
          {
            ptr_0 = v8->ptr_0; /*0x639902*/
            v32 = *(ScriptAction **)(v8->ptr_8 + 4 * (unsigned int)v33); /*0x639903*/
            v18 = (unsigned char *)ScriptAction::FindItemByValue(v32, ptr_0)[1]; /*0x63990c*/
            qmemcpy(v39, v18, sizeof(v39)); /*0x639918*/
            v18 += 108; /*0x639918*/
            v40 = *(unsigned short *)v18; /*0x63991a*/
            v41 = v18[2]; /*0x63991c*/
            v19 = v37; /*0x63991d*/
            WaypointCoords = ScriptAction::GetWaypointCoords((ScriptAction *)v38, v37); /*0x639926*/
            *(unsigned int *)&v39[7] = *(unsigned int *)WaypointCoords; /*0x63992d*/
            v39[11] = WaypointCoords[4]; /*0x63993e*/
            ScriptAction::CreatePlacementAction(v32, v19, v39); /*0x639942*/
            v33 = (ScriptAction *)((char *)v33 + 1); /*0x63994e*/
          }
          while ( (int)v33 < v7 ); /*0x639952*/
          v2 = (ScriptAction *)v36; /*0x639954*/
        }
      }
      v36 = (int)v2; /*0x639964*/
      v21 = (ScriptAction *)(*(int (**)(unsigned int *, int *))(v35[1] + 16))(v35 + 1, &v36); /*0x63996a*/
      v11 = v35; /*0x63996d*/
      v32 = v21; /*0x639971*/
      v17 = v34; /*0x639975*/
      v33 = v2; /*0x639979*/
    }
    else
    {
      abstractFlags = v8->abstractFlags; /*0x639892*/
      v13 = v10; /*0x639895*/
      if ( !abstractFlags ) /*0x639899*/
        goto LABEL_10; /*0x639899*/
      if ( v10 >= abstractFlags ) /*0x63989d*/
        v13 = v10 + 0 % v34; /*0x6398a8*/
      if ( v13 >= 0 && v13 < abstractFlags ) /*0x6398b0*/
        v14 = *(ScriptAction **)(v8->ptr_8 + 4 * v13); /*0x6398b5*/
      else
LABEL_10:
        v14 = 0; /*0x6398ba*/
      v15 = *(unsigned int *)(v9 + 4); /*0x6398bc*/
      v32 = v14; /*0x6398c6*/
      v16 = (ScriptAction *)(*(int (**)(int, ScriptAction **))(v15 + 16))(v9 + 4, &v32); /*0x6398cb*/
      v2 = v14; /*0x6398ce*/
      v11 = v35; /*0x6398d0*/
      v32 = v16; /*0x6398d4*/
      v17 = v34; /*0x6398d8*/
    }
  }
  v22 = v32; /*0x639987*/
  v11->q090 = v17; /*0x63998f*/
  v11->u32_94 = v22; /*0x639995*/
  v11->q098 = 1; /*0x63999b*/
  if ( v2 ) /*0x6399a1*/
    ScriptAction::FindSquadMember(v2); /*0x6399a5*/
  LOBYTE(v23) = stru_AC4B48.SidebarClass_field_0x188; /*0x6399aa*/
  if ( !LOBYTE(stru_AC4B48.SidebarClass_field_0x188) ) /*0x6399b1*/
  {
    (v23) = ((v23) & ~0xFF) | ((House::IsHumanPlayer((House *)v37->owner)) & 0xFF); /*0x6399c1*/
    if ( (unsigned char)v23 ) /*0x6399c8*/
    {
      LOBYTE(stru_AC4B48.SidebarClass_field_0x188) = 1; /*0x6399ce*/
      v23 = v35[5] - 1; /*0x6399d7*/
      if ( v23 >= 0 ) /*0x6399d8*/
        v24 = *(unsigned int **)(v35[2] + 4 * v23); /*0x6399e1*/
      else
        v24 = 0; /*0x6399da*/
      v25 = v24[4]; /*0x6399e4*/
      if ( v2 ) /*0x6399e9*/
      {
        for ( i = 0; i < v25; ++i ) /*0x639a1f*/
        {
          v29 = **(unsigned char ***)(v24[1] + 4 * i); /*0x639a27*/
          LOBYTE(v23) = v29[131]; /*0x639a29*/
          if ( (unsigned char)v23 ) /*0x639a31*/
            LOBYTE(v23) = (*(int (**)(unsigned char *))(*(unsigned int *)v29 + 336))(v29); /*0x639a35*/
        }
      }
      else
      {
        for ( j = 0; j < v25; ++j ) /*0x6399ef*/
        {
          v23 = *(unsigned int *)(v24[1] + 4 * j); /*0x6399f4*/
          v27 = *(unsigned int *)v23; /*0x6399f7*/
          (v23) = ((v23) & ~0xFF) | ((*(unsigned char *)(*(unsigned int *)v23 + 131)) & 0xFF); /*0x6399f9*/
          if ( !(unsigned char)v23 ) /*0x639a01*/
            LOBYTE(v23) = (*(int (**)(int))(*(unsigned int *)v27 + 332))(v27); /*0x639a05*/
        }
      }
    }
  }
  return v23; /*0x639a10*/

}
}
// 0x639F80
namespace gamemd {
int FactoryClass_DecCounter(unsigned int a1)
{
  int result; // eax

  if ( a1 < 0x18 )
  {
    result = dword_AC4B84[a1] - 1; /*0x639f95*/
    dword_AC4B84[a1] = result < 0 ? 0 : result;
  }
  return result; /*0x639fa3*/
}
}
// 0x63A5A0
namespace gamemd {
AbstractClass * * HandlePlanningModeClick(MouseClass * aP0, int a2)
{

  int v3; // esi
  int v4; // ebp
  int v5; // ebx
  int v6; // edi
  unsigned int **v7; // esi
  int *ScreenPosScriptAction; // eax
  int *v9; // eax
  int *v10; // eax
  wchar_t *v11; // eax
  int v12; // eax
  wchar_t *v13; // eax
  wchar_t *StringCSF; // eax
  int v15; // [esp+10h] [ebp-50h]
  int v16; // [esp+14h] [ebp-4Ch]
  unsigned int v17[2]; // [esp+18h] [ebp-48h] BYREF
  int v18; // [esp+20h] [ebp-40h] BYREF
  int v19; // [esp+24h] [ebp-3Ch]
  int v20; // [esp+28h] [ebp-38h]
  int v21; // [esp+2Ch] [ebp-34h]
  int v22; // [esp+30h] [ebp-30h] BYREF
  int v23; // [esp+34h] [ebp-2Ch]
  int v24; // [esp+38h] [ebp-28h]
  int v25; // [esp+3Ch] [ebp-24h]
  unsigned int v26[4]; // [esp+40h] [ebp-20h] BYREF
  unsigned int v27[4]; // [esp+50h] [ebp-10h] BYREF

  if ( !MEMORY[0xAC4CF4] ) /*0x63a5ae*/
    return 0; /*0x63a5b9*/
  v3 = MEMORY[0xAC4C38]; /*0x63a5c2*/
  v4 = a2; /*0x63a5c8*/
  v5 = aP0; /*0x63a5cc*/
  v6 = 0; /*0x63a5d0*/
  v16 = MEMORY[0xAC4C38]; /*0x63a5d2*/
  if ( !MEMORY[0xAC4CCC] ) /*0x63a5d8*/
    goto LABEL_4; /*0x63a5d8*/
  v10 = (int *)Render_Render_6345A0(v26); /*0x63a6a2*/
  v18 = *v10; /*0x63a6a9*/
  v19 = v10[1]; /*0x63a6b0*/
  v20 = v10[2]; /*0x63a6b7*/
  v21 = v10[3]; /*0x63a6c2*/
  ShrinkRect(&v18, 4); /*0x63a6cb*/
  v23 = v19; /*0x63a6dc*/
  v22 = v18; /*0x63a6e4*/
  v24 = v20; /*0x63a6f1*/
  v25 = v21; /*0x63a6f5*/
  if ( (unsigned __int8)HandlePlanningModeClick_Handle(&aP0) ) /*0x63a6f9*/
  {
    aP0 = MEMORY[0xAC4CCC]; /*0x63a70d*/
    if ( MEMORY[0xAC4CCC] && MEMORY[0xAC4CCC] != v3 ) /*0x63a719*/
    {
      Mission::SetAndCall((int *)&dword_87F7E8, 0, 1); /*0x63a727*/
      MEMORY[0xAC4C38] = aP0; /*0x63a730*/
      return v16 || aP0; /*0x63a757*/
    }
  }
  else
  {
LABEL_4:
    aP0 = 0; /*0x63a5de*/
  }
  v15 = dword_AC4B40; /*0x63a5e9*/
  if ( dword_AC4B40 <= 0 ) /*0x63a5ed*/
    goto LABEL_21; /*0x63a5ed*/
  while ( 1 ) /*0x63a5fd*/
  {
    v17[0] = v5; /*0x63a5fd*/
    v7 = (unsigned int **)*((unsigned int *)dword_AC4B34 + v6); /*0x63a601*/
    v17[1] = v4; /*0x63a604*/
    ScreenPosScriptAction = ScriptAction::GetScreenPos(v7, &v18); /*0x63a60a*/
    v9 = ComputeBounds(v27, 8, *ScreenPosScriptAction, ScreenPosScriptAction[1]); /*0x63a61f*/
    v22 = *v9; /*0x63a626*/
    v23 = v9->u32_4; /*0x63a62d*/
    v24 = v9->u32_8; /*0x63a634*/
    v25 = v9->q00C; /*0x63a63f*/
    ShrinkRect(&v22, 4); /*0x63a648*/
    v26[1] = v23; /*0x63a659*/
    v26[0] = v22; /*0x63a661*/
    v26[2] = v24; /*0x63a66e*/
    v26[3] = v25; /*0x63a672*/
    if ( (unsigned __int8)HandlePlanningModeClick_Handle(v17) ) /*0x63a676*/
      break; /*0x63a676*/
    if ( ++v6 >= v15 ) /*0x63a68a*/
      goto LABEL_21; /*0x63a68a*/
  }
  if ( !v7 ) /*0x63a75c*/
  {
LABEL_21:
    v12 = UI_Process_639DA0(); /*0x63a7c4*/
    if ( v12 == -1 ) /*0x63a7cc*/
      return v16 || aP0; /*0x63a7cc*/
    if ( v12 ) /*0x63a7d4*/
    {
      if ( v12 == 1 ) /*0x63a803*/
      {
        if ( !MEMORY[0xAC4C08] ) /*0x63a80c*/
        {
          MEMORY[0xAC4C08] = 1; /*0x63a823*/
          StringCSF = GetStringCSF(aMsgPlanningmod_5, 0, g_Str_File_PlanMgr_cpp, 3233); /*0x63a82a*/
          AddMessageListPlayerMessage(StringCSF, 480); /*0x63a836*/
          PlayVocClass(dword_8871E0->ShellButtonSlideSound, 0x2000, 1.0, 0); /*0x63a852*/
          return 1; /*0x63a860*/
        }
        return 1; /*0x63a80c*/
      }
      if ( v12 == 2 && !MEMORY[0xAC4C08] ) /*0x63a86f*/
      {
        MEMORY[0xAC4C08] = 1; /*0x63a876*/
        v13 = GetStringCSF(aMsgPlanningmod_6, 0, g_Str_File_PlanMgr_cpp, 3233); /*0x63a889*/
        goto LABEL_31; /*0x63a889*/
      }
    }
    else if ( !MEMORY[0xAC4C08] ) /*0x63a7dd*/
    {
      MEMORY[0xAC4C08] = 1; /*0x63a7e8*/
      v13 = GetStringCSF((wchar_t *)aMsgPlanningmod_4, 0, g_Str_File_PlanMgr_cpp, 3233); /*0x63a7fb*/
LABEL_31:
      AddMessageListPlayerMessage(v13, 480); /*0x63a88e*/
      PlayVocClass(dword_8871E0->ShellButtonSlideSound, 0x2000, 1.0, 0); /*0x63a8b2*/
    }
    return 1; /*0x63a8c0*/
  }
  if ( BuildingClass::CheckBuildability(v7) == -1 ) /*0x63a768*/
    return v16 || aP0; /*0x63a768*/
  if ( !MEMORY[0xAC4C08] ) /*0x63a771*/
  {
    MEMORY[0xAC4C08] = 1; /*0x63a784*/
    v11 = GetStringCSF(aMsgPlanningmod_3, 0, g_Str_File_PlanMgr_cpp, 3233); /*0x63a78b*/
    AddMessageListPlayerMessage(v11, 480); /*0x63a797*/
    PlayVocClass(dword_8871E0->ShellButtonSlideSound, 0x2000, 1.0, 0); /*0x63a7b3*/
  }
  return 1; /*0x63a5b0*/

}
}
// 0x63AD50
namespace gamemd {
AbstractClass * * ExportSelectionAsScriptAction()
{

  int v1; // eax
  int v2; // eax
  BuildingClass *v3; // esi
  int Type; // eax
  int v5; // ecx
  unsigned int *v6; // ebp
  int v7; // edi
  int v8; // ebx
  int m_8; // edx
  int v10; // eax
  int v11; // esi
  unsigned int *v12; // ecx
  int v13; // eax
  int v14; // eax
  int v15; // ebp
  unsigned int *v16; // ebx
  unsigned int *_63B050; // eax
  unsigned char *WaypointCoords; // eax
  int v19; // edx
  unsigned char *v20; // eax
  wchar_t *StringCSF; // eax
  int result; // eax
  unsigned char v23[108]; // [esp-70h] [ebp-204h] BYREF
  int v24; // [esp-4h] [ebp-198h]
  _VectorClass_PAVTechnoClass v25; // [esp+10h] [ebp-184h] BYREF
  int v26; // [esp+24h] [ebp-170h]
  int v27; // [esp+28h] [ebp-16Ch]
  unsigned char v29[243]; // [esp+30h] [ebp-164h] BYREF
  int v30[28]; // [esp+124h] [ebp-70h] BYREF

  v1 = *(unsigned int *)&stru_AC4B48.__pad_B8[56]; /*0x63ad56*/
  *(unsigned int *)&v29[8] = *(unsigned int *)&stru_AC4B48.__pad_B8[56]; /*0x63ad67*/
  *(unsigned int *)&stru_AC4B48.__pad_B8[56] = 0; /*0x63ad6b*/
  *(unsigned int *)v29 = *(unsigned int *)&stru_A8E960.random[340]; /*0x63ad75*/
  if ( *(int *)&stru_A8E960.random[340] <= 0 ) /*0x63ad79*/
  {
    *(unsigned int *)&stru_AC4B48.__pad_9C[12] = v1; /*0x63b02f*/
    Team_Get_63A1B0(4); /*0x63b034*/
    return result; /*0x63b034*/
  }
  EventClass::resetEvent((EventClass *)&v25, 0, 0); /*0x63ad87*/
  v2 = 0; /*0x63ad8e*/
  /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7E17AC) */  /*0x63ad92*/
  v26 = 10; /*0x63ad9a*/
  *(unsigned int *)v25.__tail_10 = 0; /*0x63ada2*/
  v27 = 0; /*0x63ada6*/
  do /*0x63af15*/
  {
    v3 = *(BuildingClass **)(*(unsigned int *)&stru_A8E960.random[328] + 4 * v2); /*0x63adb6*/
    if ( v3 ) /*0x63adbb*/
    {
      if ( v3->abstractFlags & 1 ) /*0x63adc7*/
      {
        Type = BuildingClass::GetType(v3); /*0x63add3*/
        if ( Type ) /*0x63adda*/
        {
          v5 = *(unsigned int *)(Type + 20) - 1; /*0x63ade3*/
          if ( v5 >= 0 ) /*0x63ade4*/
          {
            v6 = *(unsigned int **)(*(unsigned int *)(Type + 8) + 4 * v5); /*0x63ade9*/
            if ( v6 ) /*0x63adee*/
            {
              v7 = v6[4]; /*0x63ae39*/
              v8 = 0; /*0x63ae3c*/
              if ( v7 <= 0 ) /*0x63ae40*/
                goto LABEL_37; /*0x63ae40*/
              m_8 = v25.m_8; /*0x63ae46*/
              while ( 2 ) /*0x63ae4a*/
              {
                v10 = 0; /*0x63ae4a*/
                v11 = **(unsigned int **)(v6[1] + 4 * v8); /*0x63ae52*/
                if ( *(int *)v25.__tail_10 <= 0 ) /*0x63ae5a*/
                  goto LABEL_22; /*0x63ae5a*/
                v12 = *(unsigned int **)&v25.m_1[3]; /*0x63ae5c*/
                while ( *v12 != v11 ) /*0x63ae62*/
                {
                  ++v10; /*0x63ae64*/
                  ++v12; /*0x63ae65*/
                  if ( v10 >= *(int *)v25.__tail_10 ) /*0x63ae6c*/
                    goto LABEL_22; /*0x63ae6c*/
                }
                if ( v10 == -1 ) /*0x63ae73*/
                {
LABEL_22:
                  if ( *(int *)v25.__tail_10 < m_8 ) /*0x63ae79*/
                    goto LABEL_27; /*0x63ae79*/
                  if ( (BYTE1(v25.m_C) || !m_8) && v26 > 0 ) /*0x63ae8d*/
                  {
                    if ( (*(unsigned __int8 (**)(_VectorClass_PAVTechnoClass *, int, unsigned int))(*(unsigned int *)v25.__pad_0 + 8))( /*0x63ae9c*/
                           &v25,
                           v26 + m_8,
                           0) )
                    {
LABEL_27:
                      v13 = (*(unsigned int *)v25.__tail_10)++; /*0x63aea3*/
                      *(unsigned int *)(*(unsigned int *)&v25.m_1[3] + 4 * v13) = v11; /*0x63aeb2*/
                    }
                    m_8 = v25.m_8; /*0x63aeb5*/
                  }
                }
                if ( ++v8 >= v7 ) /*0x63aebc*/
                  goto LABEL_37; /*0x63aebc*/
                continue; /*0x63aebc*/
              }
            }
          }
          if ( *(int *)v25.__tail_10 < v25.m_8 /*0x63ae29*/
            || (BYTE1(v25.m_C) || !v25.m_8)
            && v26 > 0
            && (*(unsigned __int8 (**)(_VectorClass_PAVTechnoClass *, int, unsigned int))(*(unsigned int *)v25.__pad_0 + 8))(
                 &v25,
                 v26 + v25.m_8,
                 0) )
          {
LABEL_36:
            v14 = (*(unsigned int *)v25.__tail_10)++; /*0x63aef4*/
            *(unsigned int *)(*(unsigned int *)&v25.m_1[3] + 4 * v14) = v3; /*0x63af03*/
          }
        }
        else if ( *(int *)v25.__tail_10 < v25.m_8 /*0x63aeed*/
               || (BYTE1(v25.m_C) || !v25.m_8)
               && v26 > 0
               && (*(unsigned __int8 (**)(_VectorClass_PAVTechnoClass *, int, unsigned int))(*(unsigned int *)v25.__pad_0
                                                                                                + 8))(
                    &v25,
                    v26 + v25.m_8,
                    0) )
        {
          goto LABEL_36; /*0x63aef2*/
        }
      }
    }
LABEL_37:
    v2 = ++v27; /*0x63af06*/
  }
  while ( v27 < *(int *)v29 ); /*0x63af15*/
  v15 = 0; /*0x63af1f*/
  v27 = *(unsigned int *)v25.__tail_10; /*0x63af21*/
  if ( *(int *)v25.__tail_10 > 0 ) /*0x63af27*/
  {
    do /*0x63afd3*/
    {
      v24 = 0; /*0x63af3c*/
      v16 = *(unsigned int **)(*(unsigned int *)&v25.m_1[3] + 4 * v15); /*0x63af3e*/
      qmemcpy(&v29[132], (const void *)Team_Helper_6342E0(*(ObjectClass **)&v29[8], (int)v30, 0), 0x6Fu); /*0x63af55*/
      _63B050 = Team_Load_63B050((ObjectClass *)&v29[132]); /*0x63af61*/
      if ( _63B050 ) /*0x63af68*/
      {
        WaypointCoords = ScriptAction::GetWaypointCoords((ScriptAction *)v29, _63B050); /*0x63af6f*/
        v19 = *(unsigned int *)WaypointCoords; /*0x63af74*/
        LOBYTE(WaypointCoords) = WaypointCoords[4]; /*0x63af7b*/
        *(unsigned int *)&v23[104] = v19; /*0x63af7f*/
        (v24) = ((v24) & ~0xFF) | (((unsigned char)WaypointCoords) & 0xFF); /*0x63af81*/
        v20 = ScriptAction::GetWaypointCoords((ScriptAction *)&v29[12], v16); /*0x63af88*/
        ScenarioClass::SetEvent( /*0x63afac*/
          &v29[20],
          *(unsigned int *)(*(int *)((char *)&stru_A83CD9.estimatedHealth + 3) + 48),
          42,
          *(unsigned int *)v20,
          v20->ptr_4,
          *(int *)&v23[104],
          v24);
        qmemcpy(v23, &v29[20], sizeof(v23)); /*0x63afc2*/
        (v24) = ((v24) & ~0xFFFF) | ((*(unsigned short *)&v29[128]) & 0xFFFF); /*0x63afc4*/
        (v24) = ((v24) & ~(0xFF << 16)) | (((v29[130]) & 0xFF) << 16); /*0x63afc6*/
        Network::RecordEvent( /*0x63afc7*/
          *(__int64 *)v23,
          *(int *)&v23[8],
          *(int *)&v23[12],
          *(int *)&v23[16],
          *(int *)&v23[20],
          *(int *)&v23[24],
          *(int *)&v23[28],
          *(int *)&v23[32],
          *(int *)&v23[36],
          *(int *)&v23[40],
          *(int *)&v23[44],
          *(int *)&v23[48],
          *(int *)&v23[52],
          *(int *)&v23[56],
          *(int *)&v23[60],
          *(int *)&v23[64],
          *(int *)&v23[68],
          *(int *)&v23[72],
          *(int *)&v23[76],
          *(int *)&v23[80],
          *(int *)&v23[84],
          *(int *)&v23[88],
          *(int *)&v23[92],
          *(int *)&v23[96],
          *(int *)&v23[100],
          *(int *)&v23[104],
          v24);
      }
      ++v15; /*0x63afd0*/
    }
    while ( v15 < v27 ); /*0x63afd3*/
    if ( v27 > 0 && *(int *)stru_AC4B48.__pad_B8 < 1 ) /*0x63afe4*/
    {
      StringCSF = GetStringCSF(aMsgPlanningmod_7, 0, g_Str_File_PlanMgr_cpp, 3233); /*0x63aff7*/
      AddMessageListPlayerMessage(StringCSF, 480); /*0x63b003*/
      ++*(unsigned int *)stru_AC4B48.__pad_B8; /*0x63b008*/
    }
  }
  /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7E180C) */  /*0x63b012*/
  VectorClass_Techno::ddtor(&v25); /*0x63b01a*/
  return result; /*0x63b01f*/

}
}
// 0x63B080
namespace gamemd {
void E4Recv_63B080::sub_63B080()
{
  *(unsigned int *)&g_ScriptActionPool = this; /*0x63b080*/
}
}
// 0x63B150
namespace gamemd {
AbstractClass * * sub_63B150()
{
  int v22; // [esp+3Ch] [ebp-34h]

  void *Array_field_0x10 = DataGlobal_AC4B40; // ebp /*0x63b155*/
  int i; // esi
  for ( i = 0; i < (int)Array_field_0x10; ++i ) /*0x63b161*/
  {
    int v3; // edi
    v3 = *((unsigned int *)DataGlobal_AC4B34 + i); /*0x63b168*/
    if ( (uint8_t)HouseClass::IsAlliedWith(*(void **)(**v3->ptr_4 + 540), (void *)dword_A83D4C) ) /*0x63b17f*/
      RenderScenarioActionLines2((ObjectClass *)v3); /*0x63b18a*/
  }
  int j; // ebx
  for ( j = 0; j < (int)Array_field_0x10; ++j ) /*0x63b198*/
  {
    int v5; // esi
    v5 = *((unsigned int *)DataGlobal_AC4B34 + j); /*0x63b1a3*/
    if ( (uint8_t)(*(void **)(***(unsigned int ***)(v5 + 4) + 540))->IsAlliedWith((void *)dword_A83D4C) ) /*0x63b1ba*/
    {
      int DrawColor; // edi
      DrawColor = BuildingClass::GetDrawColor(v5); /*0x63b1d2*/
      int *Viewport; // eax
      int v24[4]; // [esp+50h] [ebp-20h] BYREF
      Viewport = Display::GetViewport(v24); /*0x63b1d4*/
      unsigned int v23[4]; // [esp+40h] [ebp-30h] BYREF
      v23[0] = *Viewport; /*0x63b1db*/
      v23[1] = Viewport[1]; /*0x63b1e2*/
      v23[2] = Viewport[2]; /*0x63b1e9*/
      v23[3] = Viewport[3]; /*0x63b1f7*/
      unsigned int *Coords; // eax
      unsigned int v18[3]; // [esp+24h] [ebp-4Ch] BYREF
      Coords = ScriptAction::GetCoords((ScriptAction *)v5, v18); /*0x63b1fb*/
      unsigned int v17[3]; // [esp+18h] [ebp-58h] BYREF
      v17[0] = *Coords; /*0x63b202*/
      v17[1] = Coords->u32_4; /*0x63b20d*/
      v17[2] = Owner; /*0x63b218*/
      int *v9; // eax
      int v16; // [esp+10h] [ebp-60h] BYREF
      v9 = ToCoordPixel(&v16, v17); /*0x63b21c*/
      int *v10; // ecx
      unsigned int v25[4]; // [esp+60h] [ebp-10h] BYREF
      v10 = ComputeBounds(v25, 8, *v9, v9[1]); /*0x63b236*/
      int v19; // [esp+30h] [ebp-40h] BYREF
      v19 = *v10; /*0x63b23a*/
      int v20; // [esp+34h] [ebp-3Ch]
      v20 = v10[1]; /*0x63b241*/
      int v11; // eax
      v11 = v10[2]; /*0x63b245*/
      int v21; // [esp+38h] [ebp-38h]
      v21 = v11; /*0x63b248*/
      int v12; // ecx
      v12 = v10[3]; /*0x63b24f*/
      if ( v11 > -2 && v12 > -2 ) /*0x63b257*/
      {
        ++v19; /*0x63b27d*/
        ++v20; /*0x63b281*/
        v21 = v11 - 2; /*0x63b285*/
        v22 = v12 - 2; /*0x63b289*/
      }
      else
      {
        v19 = 0; /*0x63b25b*/
        v20 = 0; /*0x63b25f*/
        v21 = 0; /*0x63b263*/
        v22 = 0; /*0x63b267*/
      }
      (*(void (**)(AudioStream *, unsigned int *, int *, int))(*(unsigned int *)DSurface_Composite->__pad_0 + 16))( /*0x63b2a0*/
        DSurface_Composite,
        v23,
        &v19,
        DrawColor);
    }
  }
  int v13; // ebx
  v13 = *(unsigned int *)&((unsigned int *)&stru_A8EB00)[164]; /*0x63b2ac*/
  int k; // esi
  for ( k = 0; k < v13; ++k ) /*0x63b2b6*/
  {
    int v15; // edi
    v15 = *(unsigned int *)(*(unsigned int *)&((unsigned int *)&stru_A8EB00)[152] + 4 * k); /*0x63b2c5*/
    if ( (uint8_t)HouseClass::IsAlliedWith(v15->owner, (void *)dword_A83D4C) ) /*0x63b2ce*/
      BuildingClass::DrawActionLines((BuildingClass *)v15); /*0x63b2d9*/
  }
}
}
// 0x63B2F0
namespace gamemd {
int RenderScriptActionHighlight()
{
  int v15; // [esp+10h] [ebp-50h] BYREF
  int v19; // [esp+20h] [ebp-40h] BYREF
  int v20; // [esp+24h] [ebp-3Ch]
  int v21; // [esp+28h] [ebp-38h]
  int v22; // [esp+2Ch] [ebp-34h]
  int v23; // [esp+30h] [ebp-30h] BYREF
  int v24; // [esp+34h] [ebp-2Ch]
  int v25; // [esp+38h] [ebp-28h]
  int v26; // [esp+3Ch] [ebp-24h]
  int v27[4]; // [esp+40h] [ebp-20h] BYREF

  ScriptAction *v1; // edi
  v1 = *(ScriptAction **)&g_ScriptPool; /*0x63b31c*/
  int result; // eax
  result = (*((unsigned char *)&(stru_A80220.ptr_0))) >> g_BitShift_Green_0 << g_BitShift_Red; /*0x63b34b*/
  int v3; // esi
  v3 = result /*0x63b34d*/
  | ((((unsigned char *)&(stru_A80220.ptr_0))[1]) >> g_BitMask_Blue << g_BitMask_Green)
  | ((((unsigned char *)&(stru_A80220.ptr_0))[2]) >> g_BitMask_Red << g_BitShift_Blue);
  if ( *(unsigned int *)&g_ScriptPool ) /*0x63b351*/
  {
    int *Viewport; // eax
    Viewport = Display::GetViewport(v27); /*0x63b35b*/
    v23 = *Viewport; /*0x63b362*/
    v24 = Viewport[1]; /*0x63b369*/
    v25 = Viewport[2]; /*0x63b370*/
    v26 = Viewport[3]; /*0x63b37e*/
    int *ScreenPos; // eax
    ScreenPos = ((ScriptAction *)(v1))->GetScreenPos(&v15); /*0x63b382*/
    unsigned int *v6; // eax
    v6 = ComputeBounds(v27, 8, *ScreenPos, ScreenPos->u32_4); /*0x63b397*/
    int v7; // ecx
    v7 = v6[1] - 4; /*0x63b3a6*/
    int v8; // edx
    v8 = v6[2] + 8; /*0x63b3ac*/
    int v9; // edi
    v9 = v6[3]; /*0x63b3af*/
    v19 = *v6 - 4; /*0x63b3b2*/
    v20 = v7; /*0x63b3b9*/
    v22 = v9 + 8; /*0x63b3bd*/
    v21 = v8; /*0x63b3c1*/
    int v10 = 3; // edi /*0x63b3c5*/
    do /*0x63b42a*/
    {
      result = (*(int (**)(AudioStream *, int *, int *, int))(*(unsigned int *)DSurface_Composite->__pad_0 + 84))( /*0x63b3dd*/
                 DSurface_Composite,
                 &v23,
                 &v19,
                 v3);
      if ( v21 > -2 && v22 > -2 ) /*0x63b3ea*/
      {
        ++v19; /*0x63b40c*/
        ++v20; /*0x63b414*/
        result = 2; /*0x63b418*/
        v21 -= 2; /*0x63b421*/
        v22 -= 2; /*0x63b425*/
      }
      else
      {
        v19 = 0; /*0x63b3ec*/
        v20 = 0; /*0x63b3f0*/
        v21 = 0; /*0x63b3f4*/
        v22 = 0; /*0x63b3f8*/
      }
      --v10; /*0x63b429*/
    }
    while ( v10 ); /*0x63b42a*/
  }
  ObjectClass *v11; // edi
  v11 = *(ObjectClass **)&g_ScriptActionPool; /*0x63b42c*/
  if ( *(unsigned int *)&g_ScriptActionPool ) /*0x63b434*/
  {
    int *v12; // eax
    v12 = Display::GetViewport(&v23); /*0x63b43e*/
    v27[0] = *v12; /*0x63b445*/
    v27[1] = v12[1]; /*0x63b44c*/
    v27[2] = v12[2]; /*0x63b453*/
    v27[3] = v12[3]; /*0x63b461*/
    int *v13; // eax
    char v28[16]; // [esp+50h] [ebp-10h] BYREF
    v13 = Render_Render_6345A0(v11, v28); /*0x63b465*/
    v15 = *v13; /*0x63b46c*/
    int v16; // [esp+14h] [ebp-4Ch]
    v16 = v13[1]; /*0x63b473*/
    int v17; // [esp+18h] [ebp-48h]
    v17 = v13[2]; /*0x63b47a*/
    int v18; // [esp+1Ch] [ebp-44h]
    v18 = v13[3]; /*0x63b485*/
    ShrinkRect(&v15, 4); /*0x63b48e*/
    v23 = v15; /*0x63b49f*/
    v24 = v16; /*0x63b4a7*/
    v25 = v17; /*0x63b4ab*/
    v26 = v18; /*0x63b4b8*/
    ShrinkRect(&v23, 4); /*0x63b4bc*/
    v19 = v23; /*0x63b4cd*/
    v20 = v24; /*0x63b4d5*/
    v21 = v25; /*0x63b4d9*/
    v22 = v26; /*0x63b4dd*/
    int v14 = 3; // edi /*0x63b4e1*/
    do /*0x63b546*/
    {
      result = (*(int (**)(AudioStream *, int *, int *, int))(*(unsigned int *)DSurface_Composite->__pad_0 + 84))( /*0x63b4f9*/
                 DSurface_Composite,
                 v27,
                 &v19,
                 v3);
      if ( v21 > -2 && v22 > -2 ) /*0x63b506*/
      {
        ++v19; /*0x63b528*/
        ++v20; /*0x63b530*/
        result = 2; /*0x63b534*/
        v21 -= 2; /*0x63b53d*/
        v22 -= 2; /*0x63b541*/
      }
      else
      {
        v19 = 0; /*0x63b508*/
        v20 = 0; /*0x63b50c*/
        v21 = 0; /*0x63b510*/
        v22 = 0; /*0x63b514*/
      }
      --v14; /*0x63b545*/
    }
    while ( v14 ); /*0x63b546*/
  }
  return result; /*0x63b548*/
}
}
// 0x63CF10
namespace gamemd {
int HouseClass::sub_63CF10()
{

  House *v1; // ecx
  int v2; // esi
  int v3; // ecx
  Color v5; // [esp+4h] [ebp-8h] BYREF

  v1 = (House *)this->planningPaths[3]; /*0x63cf10*/
  v2 = *&v1->u32_30; /*0x63cf1a*/
  if ( (unsigned __int8)House::IsHumanPlayer(v1) && *(int *)((char *)&stru_A83CD9.estimatedHealth + 3) ) /*0x63cf2d*/
    v2 = *(unsigned int *)(*(int *)((char *)&stru_A83CD9.estimatedHealth + 3) + 48); /*0x63cf2f*/
  v3 = *(&dword_A8022C->ptr_0 + v2) + 22265; /*0x63cf41*/
  LOWORD(v5.Color_field_00) = *(unsigned short *)v3; /*0x63cf4a*/
  BYTE2(v5.Color_field_00) = *(unsigned char *)(v3 + 2); /*0x63cf56*/
  Color::Lerp(&v5, 0x50u, (unsigned __int8 *)&stru_A83CD9); /*0x63cf5a*/
  return (BYTE1(v5.Color_field_00) >> g_BitMask_Blue << g_BitMask_Green) /*0x63cf80*/
       | (LOBYTE(v5.Color_field_00) >> g_BitShift_Green_0 << g_BitShift_Red)
       | (BYTE2(v5.Color_field_00) >> g_BitMask_Red << g_BitShift_Blue);

}
}
// 0x63CFC0
namespace gamemd {
int HouseClass::sub_63CFC0()
{

  House *v1; // ecx
  int v2; // esi
  int v3; // ecx
  Color v5; // [esp+4h] [ebp-8h] BYREF

  v1 = (House *)this->planningPaths[3]; /*0x63cfc0*/
  v2 = *&v1->u32_30; /*0x63cfca*/
  if ( (unsigned __int8)House::IsHumanPlayer(v1) && *(int *)((char *)&stru_A83CD9.estimatedHealth + 3) ) /*0x63cfdd*/
    v2 = *(unsigned int *)(*(int *)((char *)&stru_A83CD9.estimatedHealth + 3) + 48); /*0x63cfdf*/
  v3 = *(&dword_A8022C->ptr_0 + v2) + 22265; /*0x63cff1*/
  LOWORD(v5.Color_field_00) = *(unsigned short *)v3; /*0x63cffa*/
  BYTE2(v5.Color_field_00) = *(unsigned char *)(v3 + 2); /*0x63d006*/
  Color::Lerp(&v5, 0x64u, (unsigned __int8 *)&stru_A80220); /*0x63d00a*/
  return (BYTE1(v5.Color_field_00) >> g_BitMask_Blue << g_BitMask_Green) /*0x63d030*/
       | (LOBYTE(v5.Color_field_00) >> g_BitShift_Green_0 << g_BitShift_Red)
       | (BYTE2(v5.Color_field_00) >> g_BitMask_Red << g_BitShift_Blue);

}
}
// 0x63D630
namespace gamemd {
AbstractClass * * Tactical_DrawWaypoint(int a1, int a2, int a3, int a4, int a5, int a6, unsigned int a7)
{

  int v7 = a4; // ebx /*0x63d634*/
  int v8 = a6; // ebp /*0x63d639*/
  int v9 = a3; // esi /*0x63d63e*/
  int v10 = a5; // edi /*0x63d643*/
  int v19; // [esp+20h] [ebp-40h] BYREF
  v19 = a3 - a5; /*0x63d651*/
  int v20; // [esp+24h] [ebp-3Ch]
  v20 = a4 - a6; /*0x63d65b*/
  double v11; // st7
  v11 = Math::Sqrt((double)(a4 - a6) * (double)(a4 - a6) + (double)(a3 - a5) * (double)(a3 - a5)); /*0x63d67b*/
  if ( (int)Math::RoundToInt(v11) >= 37 ) /*0x63d68b*/
  {
    int v12; // esi
    v12 = (v10 + v9) / 2; /*0x63d6a5*/
    int v13; // edi
    v13 = (v7 + v8) / 2; /*0x63d6a7*/
    int *Viewport; // eax
    int v28[4]; // [esp+50h] [ebp-10h] BYREF
    Viewport = Display::GetViewport(v28); /*0x63d6af*/
    int v23; // [esp+30h] [ebp-30h] BYREF
    v23 = *Viewport; /*0x63d6b6*/
    int v24; // [esp+34h] [ebp-2Ch]
    v24 = Viewport[1]; /*0x63d6bd*/
    int v25; // [esp+38h] [ebp-28h]
    v25 = Viewport[2]; /*0x63d6c7*/
    int v15; // eax
    v15 = Viewport[3]; /*0x63d6ce*/
    v20 = v13 - 10 + 1; /*0x63d6d1*/
    int v26; // [esp+3Ch] [ebp-24h]
    v26 = v15; /*0x63d6d9*/
    v19 = v12 - 10 + 1; /*0x63d6de*/
    int v21; // [esp+28h] [ebp-38h]
    v21 = 19; /*0x63d6f2*/
    int v22; // [esp+2Ch] [ebp-34h]
    v22 = 19; /*0x63d6f6*/
    (*(void (**)(int, int *, int *, int))(*(unsigned int *)DSurface_Composite + 84))( /*0x63d701*/
      DSurface_Composite,
      &v23,
      &v19,
      a1);
    if ( v21 > -2 && v22 > -2 ) /*0x63d713*/
    {
      ++v19; /*0x63d737*/
      ++v20; /*0x63d73f*/
      v21 -= 2; /*0x63d74c*/
      v22 -= 2; /*0x63d750*/
    }
    else
    {
      v19 = 0; /*0x63d717*/
      v20 = 0; /*0x63d71b*/
      v21 = 0; /*0x63d71f*/
      v22 = 0; /*0x63d723*/
    }
    (*(void (**)(int, int *, int *, int))(*(unsigned int *)DSurface_Composite + 16))( /*0x63d76b*/
      DSurface_Composite,
      &v23,
      &v19,
      a2);
    a3 = v12 - 10; /*0x63d76e*/
    a4 = v13 - 10; /*0x63d772*/
    int v27[4]; // [esp+40h] [ebp-20h] BYREF
    v27[0] = v23; /*0x63d782*/
    v27[1] = v24; /*0x63d78a*/
    v27[2] = v25; /*0x63d794*/
    v27[3] = v26; /*0x63d798*/
    int v16; // edi
    v16 = v13 - *((int16_t *)dword_ABF294 + 2) / 2; /*0x63d7b4*/
    a3 = v12 - *((int16_t *)dword_ABF294 + 1) / 2 - 1; /*0x63d7ed*/
    a4 = v16; /*0x63d7f4*/
    DrawToSurfaceSHP( /*0x63d7fb*/
      DSurface_Composite,
      dword_87F6C8,
      (int)dword_ABF294,
      a7,
      &a3,
      v27,
      1024,
      0,
      0,
      0,
      1000,
      0,
      0,
      0,
      0,
      0);
  }
}
}
// 0x63D810
namespace gamemd {
void* DrawTacticalLine2D(int a1, ObjectClass * aP1, int aP0, int aP0_4, int aP0_8, int aP0_12, char aP0_16)
{

  signed int v7; // ebx
  v7 = abs32(aP0_12 - aP0_4); /*0x63d832*/
  signed int v8; // eax
  v8 = abs32(aP0_8 - aP0); /*0x63d83d*/
  int v9; // edx
  v9 = v8 <= v7 ? a1 : 0;
  int v10; // eax
  v10 = v8 > v7 ? a1 : 0;
  int v14[4]; // [esp+14h] [ebp-10h] BYREF
  v14[1] = dword_886FA4; /*0x63d871*/
  v14[0] = DSurface_ViewBounds; /*0x63d879*/
  v14[2] = dword_886FA8; /*0x63d882*/
  aP0 += v9; /*0x63d88f*/
  aP0_4 += v10; /*0x63d893*/
  aP0_8 += v9; /*0x63d897*/
  aP0_12 += v10; /*0x63d89b*/
  v14[3] = dword_886FAC; /*0x63d89f*/
  char result; // al
  result = ClipLine(&aP0, &aP0_8, v14); /*0x63d8a3*/
  if ( result ) /*0x63d8ae*/
  {
    if ( aP0_16 ) /*0x63d8b6*/
    {
      DWORD Time; // eax
      Time = timeGetTime(); /*0x63d8b8*/
      return (*(int (**)(int, int *, int *, int, void *, int))(*(unsigned int *)DSurface_Composite + 72))( /*0x63d8e3*/
               DSurface_Composite,
               &aP0,
               &aP0_8,
               aP1,
               &unk_836880,
               ((signed int)-Time >> 5) & 0xF);
    }
    else
    {
      return (*(int (**)(int, int *, int *, int))(*(unsigned int *)DSurface_Composite + 48))( /*0x63d903*/
               DSurface_Composite,
               &aP0,
               &aP0_8,
               aP1);
    }
  }
  return result; /*0x63d8aa*/
}
}
// 0x63F080
namespace gamemd {
AbstractClass * * Voxel_ProcessVertexData(unsigned int * a1, int * a2)
{
  int v34; // [esp+30h] [ebp-4h]

  int v2; // esi
  v2 = a1[1]; /*0x63f086*/
  unsigned int *v29; // [esp+1Ch] [ebp-18h]
  v29 = a1; /*0x63f08a*/
  int v3 = *a1; // ecx /*0x63f08e*/
  int v4 = 0; // edi /*0x63f090*/
  int *v33; // [esp+2Ch] [ebp-8h]
  v33 = a2; /*0x63f094*/
  if ( v3 ) /*0x63f098*/
  {
    int v5; // ebx
    v5 = *(unsigned int *)(v2 + 4); /*0x63f09e*/
    int v6 = 1; // eax /*0x63f0a1*/
    int v31; // [esp+24h] [ebp-10h]
    v31 = 0; /*0x63f0a8*/
    int v27; // [esp+14h] [ebp-20h] BYREF
    v27 = v5; /*0x63f0ac*/
    if ( v3 > 1 ) /*0x63f0b0*/
    {
      int *v7; // ebp
      v7 = (int *)(v2 + 12); /*0x63f0b6*/
      do /*0x63f0da*/
      {
        int v8 = *v7; // edx /*0x63f0b9*/
        if ( *v7 >= v5 ) /*0x63f0be*/
        {
          if ( v8 > v27 ) /*0x63f0ca*/
          {
            v31 = v6; /*0x63f0cc*/
            v27 = v8; /*0x63f0d0*/
          }
        }
        else
        {
          v4 = v6; /*0x63f0c0*/
          v5 = *v7; /*0x63f0c2*/
        }
        ++v6; /*0x63f0d4*/
        v7 += 2; /*0x63f0d5*/
      }
      while ( v6 < v3 ); /*0x63f0da*/
      if ( v5 != v27 ) /*0x63f0e0*/
      {
        int v9; // ebp
        v9 = *(unsigned int *)(v2 + 8 * v4 + 4); /*0x63f0e6*/
        int v10 = v4; // edx /*0x63f0ea*/
        if ( v9 == v5 ) /*0x63f0ee*/
        {
          do /*0x63f0fa*/
            v10 = (v10 + 1) % v3; /*0x63f0f4*/
          while ( *(unsigned int *)(v2 + 8 * v10 + 4) == v5 ); /*0x63f0fa*/
        }
        int v26; // [esp+10h] [ebp-24h]
        v26 = (v3 + v10 - 1) % v3; /*0x63f105*/
        if ( v9 == v5 ) /*0x63f109*/
        {
          do /*0x63f118*/
            v4 = (v3 + v4 - 1) % v3; /*0x63f112*/
          while ( *(unsigned int *)(v2 + 8 * v4 + 4) == v5 ); /*0x63f118*/
        }
        int v28; // [esp+18h] [ebp-1Ch]
        v28 = -1; /*0x63f11d*/
        int v11; // edi
        v11 = (v4 + 1) % v3; /*0x63f12c*/
        int v12; // edx
        v12 = *(unsigned int *)(v2 + 8 * v26); /*0x63f12e*/
        int v13; // ebp
        v13 = *(unsigned int *)(v2 + 8 * v11); /*0x63f133*/
        BOOL v14; // eax
        v14 = v13 != v12; /*0x63f138*/
        BOOL v30; // [esp+20h] [ebp-14h]
        v30 = v14; /*0x63f13e*/
        if ( v14 ) /*0x63f142*/
        {
          if ( v13 > v12 ) /*0x63f146*/
          {
            int v15 = v11; // ecx /*0x63f148*/
            v11 = v26; /*0x63f14a*/
            v28 = v13 != v12; /*0x63f14e*/
            v26 = v15; /*0x63f152*/
          }
        }
        else
        {
          int v32; // [esp+28h] [ebp-Ch]
          v32 = (v26 + 1) % v3; /*0x63f166*/
          int v16; // eax
          v16 = *(unsigned int *)(v2 + 8 * v11 + 4); /*0x63f16d*/
          v34 = (v3 + v11 - 1) % v3; /*0x63f171*/
          if ( (*(unsigned int *)(v2 + 8 * v32) - v13) * (*(unsigned int *)(v2 + 8 * v34 + 4) - v16) /*0x63f19f*/
            - (*(unsigned int *)(v2 + 8 * v34) - v13) * (*(unsigned int *)(v2 + 8 * v32 + 4) - v16) < 0 )
          {
            int v17 = v11; // eax /*0x63f1a1*/
            v11 = v26; /*0x63f1a3*/
            v28 = 1; /*0x63f1a7*/
            v26 = v17; /*0x63f1af*/
          }
          v14 = v30; /*0x63f1b3*/
        }
        int *v18 = v33; // ebp /*0x63f1bb*/
        int v19 = v14 - v5 + v27 - 1; // ecx /*0x63f1c3*/
        bool v20; // zf
        v20 = v14 - v5 + v27 == 1; /*0x63f1c7*/
        *v33 = v19; /*0x63f1c9*/
        if ( v19 >= 0 && !v20 ) /*0x63f1cc*/
        {
          int v21; // edx
          v21 = v18[2]; /*0x63f1d2*/
          v18[1] = v5 - v14 + 1; /*0x63f1da*/
          if ( !v21 ) /*0x63f1dd*/
          {
            v18[2] = (int)operator new(8 * v19 + 1600); /*0x63f1ec*/
            v14 = v30; /*0x63f1ef*/
          }
          if ( v18[2] ) /*0x63f1f6*/
          {
            v27 = v18[2]; /*0x63f20a*/
            BOOL v22 = !v14; // ebx /*0x63f210*/
            v34 = v22; /*0x63f215*/
            do /*0x63f267*/
            {
              if ( v28 <= 0 ) /*0x63f21f*/
              {
                v18 = v33; /*0x63f23c*/
                v11 = (v11 + *v29 - 1) % *v29; /*0x63f240*/
              }
              else
              {
                v11 = (v11 + 1) % *v29; /*0x63f22b*/
              }
              Audio_Process(*(unsigned int *)(v2 + 8 * v11), *(unsigned int *)(v2 + 8 * v11 + 4), 1, v22, &v27); /*0x63f25a*/
              v22 = 0; /*0x63f25f*/
            }
            while ( v11 != v31 ); /*0x63f267*/
            int v23 = v34; // ebx /*0x63f270*/
            v27 = v18[2]; /*0x63f274*/
            int v24 = -v28; // ebp /*0x63f27c*/
            int v25 = v26; // edi /*0x63f27e*/
            v34 = -v28; /*0x63f280*/
            do /*0x63f2d0*/
            {
              if ( v24 <= 0 ) /*0x63f286*/
              {
                v24 = v34; /*0x63f2a3*/
                v25 = (v25 + *v29 - 1) % *v29; /*0x63f2a7*/
              }
              else
              {
                v25 = (v25 + 1) % *v29; /*0x63f292*/
              }
              Audio_Process(*(unsigned int *)(v2 + 8 * v25) - 1, *(unsigned int *)(v2 + 8 * v25 + 4), 0, v23, &v27); /*0x63f2c3*/
              v23 = 0; /*0x63f2c8*/
            }
            while ( v25 != v31 ); /*0x63f2d0*/
          }
          else
          {
            *v18 = 0; /*0x63f1fe*/
          }
        }
      }
    }
  }
}
}
// 0x630090
namespace gamemd {
int ParticleSystemClass__vt_06_(int * a1, int * a2, int a3)
{

  int result; // eax
  result = AbstractClass::SaveLoad_Prefix(&a1->ptr_0.ptr_0.ptr_0, a2, a3); /*0x6300a2*/
  if ( result >= 0 ) /*0x6300a9*/
  {
    int v4 = *a2; // edx /*0x6300b1*/
    a3 = a1->a3; /*0x6300bd*/
    result = (*(int (__stdcall **)(int *, int *, int, unsigned int))(v4 + 16))(a2, &a3, 4, 0); /*0x6300c1*/
    if ( result >= 0 ) /*0x6300c6*/
    {
      int i; // ebx
      for ( i = 0; i < a3; ++i ) /*0x6300d0*/
      {
        result = (*(int (__stdcall **)(int *, int, int, unsigned int))(*a2 + 16))(a2, a1->TargetCoords[0] + 4 * i, 4, 0); /*0x6300e3*/
        if ( result < 0 ) /*0x6300e8*/
          break; /*0x6300e8*/
      }
    }
  }
  return result; /*0x6300f3*/
}
} // namespace gamemd

// 0x6302F0
namespace gamemd {
int sub_6302F0()
{
  dword_AC4AA0 = 0; /*0x6302f2*/
  dword_AC4AA4 = 0; /*0x6302f7*/
  dword_AC4AA8 = 0; /*0x6302fc*/
  dword_AC4AAC = 0; /*0x630301*/
  return 0; /*0x630306*/
}
} // namespace gamemd

// 0x630980
namespace gamemd {
int sub_630980()
{
  dword_AC4AB8 = 0; /*0x630982*/
  dword_AC4ABC = 0; /*0x630987*/
  dword_AC4AC0 = 0; /*0x63098c*/
  dword_AC4AC4 = 0; /*0x630991*/
  return 0; /*0x630996*/
}
} // namespace gamemd

// 0x6309A0
namespace gamemd {
void sub_6309A0()
{

  long double v0; // st7
  v0 = pow(256.0, 2.0); /*0x6309ac*/
  dbl_AC4AD0 = Math::Sqrt(v0 + v0); /*0x6309be*/
}
} // namespace gamemd

// 0x6309D0
namespace gamemd {
void sub_6309D0()
{
  dbl_AC4B20 = dbl_AC4AD0 / 60.0; /*0x6309dc*/
}
} // namespace gamemd

// 0x6309F0
namespace gamemd {
void sub_6309F0()
{
  dbl_AC4B08 = 1.0 / dbl_AC4B20; /*0x6309fc*/
}
} // namespace gamemd

// 0x630A10
namespace gamemd {
void sub_630A10()
{
  dbl_AC4B00 = 0.0174532925199433 * 45.0; /*0x630a1c*/
}
} // namespace gamemd

// 0x630A30
namespace gamemd {
void sub_630A30()
{
  dbl_AC4AD8 = 0.0174532925199433 * 60.0; /*0x630a3c*/
}
} // namespace gamemd

// 0x630A50
namespace gamemd {
void sub_630A50()
{
  dbl_AC4AB0 = 0.0174532925199433 * 90.0; /*0x630a5c*/
}
} // namespace gamemd

// 0x630A70
namespace gamemd {
long long sub_630A70()
{

  double v0; // st7
  v0 = Math::Sin(dbl_AC4AB0 - dbl_AC4AD8); /*0x630a82*/
  int64_t result; // rax
  result = Math::RoundToInt(v0 * dbl_AC4AD0 * 0.5); /*0x630a96*/
  dword_AC4B28 = result; /*0x630a9b*/
  return result; /*0x630aa0*/
}
} // namespace gamemd

// 0x630AB0
namespace gamemd {
void sub_630AB0()
{
  dbl_AC4AE0 = Math::ArcTan((double)dword_AC4B28 * 0.00390625); /*0x630ac7*/
}
} // namespace gamemd

// 0x630AE0
namespace gamemd {
void sub_630AE0()
{
  dbl_AC4AF8 = Math::ArcTan((double)(2 * dword_AC4B28) / dbl_AC4AD0); /*0x630b02*/
}
} // namespace gamemd

// 0x630B10
namespace gamemd {
long long sub_630B10()
{

  int64_t result; // rax
  result = Math::RoundToInt((double)(4 * dword_AC4B28) + 0.5); /*0x630b2b*/
  dword_AC4B1C = result; /*0x630b30*/
  return result; /*0x630b36*/
}
} // namespace gamemd

// 0x630B40
namespace gamemd {
int sub_630B40()
{
  word_AC4AC8 = 0; /*0x630b42*/
  word_AC4ACA = 0; /*0x630b48*/
  return 0; /*0x630b4e*/
}
} // namespace gamemd

// 0x630B50
namespace gamemd {
int sub_630B50()
{
  dword_AC4AE8 = 0; /*0x630b52*/
  dword_AC4AEC = 0; /*0x630b57*/
  dword_AC4AF0 = 0; /*0x630b5c*/
  return 0; /*0x630b61*/
}
} // namespace gamemd

// 0x630B70
namespace gamemd {
int sub_630B70()
{
  dword_AC4B18 = 0; /*0x630b75*/
  dword_AC4B10 = 128; /*0x630b7f*/
  dword_AC4B14 = 128; /*0x630b84*/
  return 128; /*0x630b89*/
}
} // namespace gamemd

// 0x631C10
namespace gamemd {
int sub_631C10(int * a1, int * a2)
{

  int v2; // esi
  char *v3; // edi
  int result; // eax

  v2 = *a2; /*0x631c1a*/
  v3 = *a1; /*0x631c1c*/
  result = wcscmp((const wchar_t *)*a1 + 56, (const wchar_t *)(*a2 + 112)); /*0x631c26*/
  if ( !result ) /*0x631c30*/
    return strcmp(v3 + 154, (const char *)(v2 + 154)); /*0x631c47*/
  return result; /*0x631c64*/

}
} // namespace gamemd

// 0x631F10
namespace gamemd {
int E4Recv_631F10::sub_631F10(int a2, int a3)
{
  this->M48 = a2; /*0x631f18*/
  this->M52 = a3; /*0x631f1b*/
  return a2; /*0x631f1e*/
}
} // namespace gamemd

// 0x631F30
namespace gamemd {
void E4Recv_631F30::sub_631F30()
{
  /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7EFDA4) */  /*0x631f30*/
}
} // namespace gamemd

// 0x631FC0
namespace gamemd {
int E4Recv_631FC0::sub_631FC0(ObjectClass * aP1)
{
  if ( aP1 ) /*0x631fc6*/
    return EncodeVarInt(aP1, 64); /*0x631fcf*/
  else
    return 0; /*0x631fc8*/
}
} // namespace gamemd

// 0x631FE0
namespace gamemd {
int E4Recv_631FE0::sub_631FE0(unsigned char * a2)
{
  if ( a2 ) /*0x631fe6*/
    return EncodeVarInt((int)this + 256, a2, 64); /*0x631ff5*/
  else
    return 0; /*0x631fe8*/
}
} // namespace gamemd

// 0x6329C0
namespace gamemd {
void * E4Recv_6329C0::sub_6329C0(void * a2, unsigned short a3)
{

  unsigned int v5[64]; // [esp+8h] [ebp-100h] BYREF
  InitArrayWithValue(v5, 0, 64); /*0x6329d2*/
  byte_A8F8FD = DecodeAudioSampleWord((int)v5, (uint16_t *)this, a3, 0, 64); /*0x6329ee*/
  memcpy(a2, v5, 0x100u); /*0x632a05*/
  return a2; /*0x632a07*/
}
} // namespace gamemd

// 0x632A20
namespace gamemd {
void * E4Recv_632A20::sub_632A20(void * a2, const void * a3)
{

  unsigned int v5[64]; // [esp+8h] [ebp-100h] BYREF
  InitArrayWithValue(v5, 0, 64); /*0x632a32*/
  ModInverseBigInteger((char *)v5, this, a3, 64); /*0x632a47*/
  memcpy(a2, v5, 0x100u); /*0x632a5e*/
  return a2; /*0x632a60*/
}
} // namespace gamemd

// 0x632A70
namespace gamemd {
int ObjectClass::sub_632A70(int a2, int a3, ObjectClass * aP3)
{


  sub_5C8E40(this, a2, a3, aP3, 64); /*0x632a85*/
  int result; // eax
  result = (int)this->AbstractClass; /*0x632a8a*/
  (result) = ((result) & ~0xFF) | (((int)this->AbstractClass | 1) & 0xFF); /*0x632a8c*/
  this->AbstractClass = (void *)result; /*0x632a8e*/
  return result; /*0x632a90*/

}
} // namespace gamemd

// 0x632AC0
namespace gamemd {
unsigned int * E4Recv_632AC0::sub_632AC0(unsigned int * a2, unsigned short a3)
{

  unsigned int v5[64]; // [esp+8h] [ebp-100h] BYREF
  InitArrayWithValue(v5, 0, 64); /*0x632ad2*/
  byte_A8F8FC = sub_5C6AA0(v5, (unsigned int *)this, a3, 0, 64); /*0x632af3*/
  memcpy(a2, v5, 0x100u); /*0x632b0a*/
  return a2; /*0x632b0c*/
}
} // namespace gamemd

// 0x632B20
namespace gamemd {
void * E4Recv_632B20::sub_632B20(void * a2, short a3)
{

  unsigned int v5[64]; // [esp+8h] [ebp-100h] BYREF
  InitArrayWithValue(v5, 0, 64); /*0x632b32*/
  *(int *)((char *)&((char *)&stru_A8EB00) + 1) = sub_5C6D90((int)v5, (uint16_t *)this, a3, 64); /*0x632b4c*/
  memcpy(a2, v5, 0x100u); /*0x632b63*/
  return a2; /*0x632b65*/
}
} // namespace gamemd

// 0x632D60
namespace gamemd {
int ObjectClass::sub_632D60(int a2)
{

  int result; // eax

  if ( !a2 ) /*0x632d6a*/
  {
    result = (*((int (**)(ObjectClass *))this->AbstractClass + 1))(this); /*0x632d6e*/
    (this->ptr_C) = ((this->ptr_C) & ~0xFF) | ((0) & 0xFF); /*0x632d71*/
  }
  this->attachedBomb = (BombClass *)a2; /*0x632d77*/
  if ( a2 ) /*0x632d7a*/
  {
    TagClass *attachedTag; // ecx
    attachedTag = this->attachedTag; /*0x632d7c*/
    result = 1; /*0x632d7f*/
    (this->ptr_C) = ((this->ptr_C) & ~0xFF) | ((1) & 0xFF); /*0x632d86*/
    if ( attachedTag == 1 ) /*0x632d89*/
    {
      result = ((*(unsigned int *)(a2 + 512) - 1) / 8 + 1) * (55 / ((*(unsigned int *)(a2 + 512) - 1) / 8) + 1); /*0x632da7*/
      this->q140 = result; /*0x632daa*/
      this->u32_13C = result; /*0x632db0*/
    }
  }
  return result; /*0x632db6*/

}
} // namespace gamemd

// 0x6333D0
namespace gamemd {
void sub_6333D0()
{

  long double v0; // st7
  v0 = pow(256.0, 2.0); /*0x6333dc*/
  dbl_AC4BE8 = Math::Sqrt(v0 + v0); /*0x6333ee*/
}
} // namespace gamemd

// 0x633400
namespace gamemd {
void sub_633400()
{
  dbl_AC4CE8 = dbl_AC4BE8 / 60.0; /*0x63340c*/
}
} // namespace gamemd

// 0x633420
namespace gamemd {
void sub_633420()
{
  dbl_AC4CC0 = 1.0 / dbl_AC4CE8; /*0x63342c*/
}
} // namespace gamemd

// 0x633440
namespace gamemd {
void sub_633440()
{
  dbl_AC4CB8 = 0.0174532925199433 * 45.0; /*0x63344c*/
}
} // namespace gamemd

// 0x633460
namespace gamemd {
void sub_633460()
{
  dbl_AC4C10 = 0.0174532925199433 * 60.0; /*0x63346c*/
}
} // namespace gamemd

// 0x633480
namespace gamemd {
void sub_633480()
{
  dbl_AC4B68 = 0.0174532925199433 * 90.0; /*0x63348c*/
}
} // namespace gamemd

// 0x6334A0
namespace gamemd {
long long sub_6334A0()
{

  double v0; // st7
  v0 = Math::Sin(dbl_AC4B68 - dbl_AC4C10); /*0x6334b2*/
  int64_t result; // rax
  result = Math::RoundToInt(v0 * dbl_AC4BE8 * 0.5); /*0x6334c6*/
  dword_AC4CF0 = result; /*0x6334cb*/
  return result; /*0x6334d0*/
}
} // namespace gamemd

// 0x6334E0
namespace gamemd {
void sub_6334E0()
{
  dbl_AC4C30 = Math::ArcTan((double)dword_AC4CF0 * 0.00390625); /*0x6334f7*/
}
} // namespace gamemd

// 0x633510
namespace gamemd {
void sub_633510()
{
  dbl_AC4C70 = Math::ArcTan((double)(2 * dword_AC4CF0) / dbl_AC4BE8); /*0x633532*/
}
} // namespace gamemd

// 0x633540
namespace gamemd {
long long sub_633540()
{

  int64_t result; // rax
  result = Math::RoundToInt((double)(4 * dword_AC4CF0) + 0.5); /*0x63355b*/
  dword_AC4CE4 = result; /*0x633560*/
  return result; /*0x633566*/
}
} // namespace gamemd

// 0x633570
namespace gamemd {
int sub_633570()
{
  word_AC4BE4 = 0; /*0x633572*/
  word_AC4BE6 = 0; /*0x633578*/
  return 0; /*0x63357e*/
}
} // namespace gamemd

// 0x633580
namespace gamemd {
int sub_633580()
{
  dword_AC4C58 = 0; /*0x633582*/
  dword_AC4C5C = 0; /*0x633587*/
  dword_AC4C60 = 0; /*0x63358c*/
  return 0; /*0x633591*/
}
} // namespace gamemd

// 0x6335A0
namespace gamemd {
int sub_6335A0()
{
  dword_AC4CE0 = 0; /*0x6335a5*/
  dword_AC4CD8 = 128; /*0x6335af*/
  dword_AC4CDC = 128; /*0x6335b4*/
  return 128; /*0x6335b9*/
}
} // namespace gamemd

// 0x6335C0
namespace gamemd {
int sub_6335C0()
{
  dword_AC4B70 = 0; /*0x6335c2*/
  dword_AC4B74 = 0; /*0x6335c7*/
  dword_AC4B78 = 0; /*0x6335cc*/
  dword_AC4B7C = 0; /*0x6335d1*/
  return 0; /*0x6335d6*/
}
} // namespace gamemd

// 0x6335E0
namespace gamemd {
int sub_6335E0()
{
  dword_AC4B4C = 0; /*0x6335e7*/
  dword_AC4B50 = 0; /*0x6335ec*/
  byte_AC4B54 = 1; /*0x6335f1*/
  byte_AC4B55 = 0; /*0x6335f8*/
  dword_AC4B48 = (int)&g_ptr_7E3238; /*0x6335fd*/
  dword_AC4B5C = 10; /*0x633607*/
  dword_AC4B58 = 0; /*0x633611*/
  return atexit(sub_633620); /*0x63361c*/
}
} // namespace gamemd

// 0x633620
namespace gamemd {
void sub_633620()
{
  if ( (byte_AC4B61 & 1) == 0 ) /*0x63362a*/
  {
    dword_AC4B48 = (int)&g_ptr_7E8500; /*0x63362e*/
    byte_AC4B61 |= 1u; /*0x633641*/
    if ( dword_AC4B4C ) /*0x633647*/
    {
      if ( byte_AC4B55 ) /*0x633651*/
      {
        operator delete((void *)(dword_AC4B4C)); /*0x633654*/
        dword_AC4B4C = 0; /*0x63365c*/
      }
    }
    byte_AC4B55 = 0; /*0x633666*/
    dword_AC4B50 = 0; /*0x63366d*/
  }
}
} // namespace gamemd

// 0x633680
namespace gamemd {
int sub_633680()
{
  dword_AC4C9C = 0; /*0x633687*/
  dword_AC4CA0 = 0; /*0x63368c*/
  byte_AC4CA4 = 1; /*0x633691*/
  byte_AC4CA5 = 0; /*0x633698*/
  dword_AC4C98 = (int)&g_ptr_7E3238; /*0x63369d*/
  dword_AC4CAC = 10; /*0x6336a7*/
  dword_AC4CA8 = 0; /*0x6336b1*/
  return atexit(sub_6336C0); /*0x6336bc*/
}
} // namespace gamemd

// 0x6336C0
namespace gamemd {
void sub_6336C0()
{
  if ( (byte_AC4B60 & 1) == 0 ) /*0x6336ca*/
  {
    dword_AC4C98 = (int)&g_ptr_7E8500; /*0x6336ce*/
    byte_AC4B60 |= 1u; /*0x6336e1*/
    if ( dword_AC4C9C ) /*0x6336e7*/
    {
      if ( byte_AC4CA5 ) /*0x6336f1*/
      {
        operator delete((void *)(dword_AC4C9C)); /*0x6336f4*/
        dword_AC4C9C = 0; /*0x6336fc*/
      }
    }
    byte_AC4CA5 = 0; /*0x633706*/
    dword_AC4CA0 = 0; /*0x63370d*/
  }
}
} // namespace gamemd

// 0x633720
namespace gamemd {
int sub_633720()
{
  g_abs_AC4C44 = 0; /*0x633727*/
  DataGlobal_AC4C48 = 0; /*0x63372c*/
  DataGlobal_AC4C4C = 1; /*0x633731*/
  g_abs_AC4C4D = 0; /*0x633738*/
  stru_AC4C40 = (int)&(void*)(void*)&DynamicVectorClass_TechnoClass___vftable; /*0x63373d*/
  g_abs_AC4C54 = 10; /*0x633747*/
  g_abs_AC4C50 = 0; /*0x633751*/
  return atexit(sub_633760); /*0x63375c*/
}
} // namespace gamemd

// 0x633760
namespace gamemd {
void sub_633760()
{
  if ( (byte_AC4B63 & 1) == 0 ) /*0x63376a*/
  {
    stru_AC4C40 = (int)&(void*)(void*)&VectorClass_TechnoClass___vftable; /*0x63376e*/
    byte_AC4B63 |= 1u; /*0x633781*/
    if ( g_abs_AC4C44 ) /*0x633787*/
    {
      if ( g_abs_AC4C4D ) /*0x633791*/
      {
        RA2_OPDEL(g_abs_AC4C44); /*0x633794*/
        g_abs_AC4C44 = 0; /*0x63379c*/
      }
    }
    g_abs_AC4C4D = 0; /*0x6337a6*/
    DataGlobal_AC4C48 = 0; /*0x6337ad*/
  }
}
} // namespace gamemd

// 0x6337C0
namespace gamemd {
int sub_6337C0()
{
  dword_AC4B34 = 0; /*0x6337c7*/
  dword_AC4B38 = 0; /*0x6337cc*/
  byte_AC4B3C = 1; /*0x6337d1*/
  byte_AC4B3D = 0; /*0x6337d8*/
  stru_AC4B30 = (int)&g_ptr_7E3238; /*0x6337dd*/
  dword_AC4B44 = 10; /*0x6337e7*/
  dword_AC4B40 = 0; /*0x6337f1*/
  return atexit(sub_633800); /*0x6337fc*/
}
} // namespace gamemd

// 0x633800
namespace gamemd {
void sub_633800()
{
  if ( (byte_AC4B62 & 1) == 0 ) /*0x63380a*/
  {
    stru_AC4B30 = (int)&g_ptr_7E8500; /*0x63380e*/
    byte_AC4B62 |= 1u; /*0x633821*/
    if ( dword_AC4B34 ) /*0x633827*/
    {
      if ( byte_AC4B3D ) /*0x633831*/
      {
        operator delete((void *)(dword_AC4B34)); /*0x633834*/
        dword_AC4B34 = 0; /*0x63383c*/
      }
    }
    byte_AC4B3D = 0; /*0x633846*/
    dword_AC4B38 = 0; /*0x63384d*/
  }
}
} // namespace gamemd

// 0x633860
namespace gamemd {
int sub_633860()
{
  dword_AC4C1C = 0; /*0x633867*/
  dword_AC4C20 = 0; /*0x63386c*/
  byte_AC4C24 = 1; /*0x633871*/
  byte_AC4C25 = 0; /*0x633878*/
  dword_AC4C18 = (int)&g_ptr_7E3238; /*0x63387d*/
  dword_AC4C2C = 10; /*0x633887*/
  dword_AC4C28 = 0; /*0x633891*/
  return atexit(sub_6338A0); /*0x63389c*/
}
} // namespace gamemd

// 0x6338A0
namespace gamemd {
void sub_6338A0()
{
  if ( (byte_AC4B62 & 2) == 0 ) /*0x6338aa*/
  {
    dword_AC4C18 = (int)&g_ptr_7E8500; /*0x6338ae*/
    byte_AC4B62 |= 2u; /*0x6338c1*/
    if ( dword_AC4C1C ) /*0x6338c7*/
    {
      if ( byte_AC4C25 ) /*0x6338d1*/
      {
        operator delete((void *)(dword_AC4C1C)); /*0x6338d4*/
        dword_AC4C1C = 0; /*0x6338dc*/
      }
    }
    byte_AC4C25 = 0; /*0x6338e6*/
    dword_AC4C20 = 0; /*0x6338ed*/
  }
}
} // namespace gamemd

// 0x633900
namespace gamemd {
int sub_633900()
{
  dword_AC4C7C = 0; /*0x633907*/
  dword_AC4C80 = 0; /*0x63390c*/
  byte_AC4C84 = 1; /*0x633911*/
  byte_AC4C85 = 0; /*0x633918*/
  dword_AC4C78 = (int)&g_ptr_7E3238; /*0x63391d*/
  dword_AC4C8C = 10; /*0x633927*/
  dword_AC4C88 = 0; /*0x633931*/
  return atexit(sub_633940); /*0x63393c*/
}
} // namespace gamemd

// 0x633940
namespace gamemd {
void sub_633940()
{
  if ( (byte_AC4B62 & 4) == 0 ) /*0x63394a*/
  {
    dword_AC4C78 = (int)&g_ptr_7E8500; /*0x63394e*/
    byte_AC4B62 |= 4u; /*0x633961*/
    if ( dword_AC4C7C ) /*0x633967*/
    {
      if ( byte_AC4C85 ) /*0x633971*/
      {
        operator delete((void *)(dword_AC4C7C)); /*0x633974*/
        dword_AC4C7C = 0; /*0x63397c*/
      }
    }
    byte_AC4C85 = 0; /*0x633986*/
    dword_AC4C80 = 0; /*0x63398d*/
  }
}
} // namespace gamemd

// 0x6339E0
namespace gamemd {
BuildingClass * ToCoordPixel(unsigned int * a1, unsigned int * a2)
{

  int v5[2]; // [esp+4h] [ebp-8h] BYREF
  ((Coord *)((Coord *)g_TacticalClass_Instance))->To_Screen(a2, v5); /*0x6339f2*/
  char *v3; // ecx
  v3 = (char *)DSurface_ViewBounds.field_4 + v5[1]; /*0x633a0d*/
  *a1 = DSurface_ViewBounds.field_0 + v5[0]; /*0x633a0f*/
  a1[1] = v3; /*0x633a11*/
  return a1; /*0x633a16*/
}
} // namespace gamemd

// 0x633A20
namespace gamemd {
unsigned int * E4Recv_633A20::sub_633A20()
{

  this->AbstractClass = 0; /*0x633a24*/
  this->M4 = 0; /*0x633a26*/
  this->M8 = (void *)-1; /*0x633a29*/
  LOBYTE(this->M12) = 0; /*0x633a30*/
  return &this->AbstractClass; /*0x633a33*/

}
} // namespace gamemd

// 0x633A40
namespace gamemd {
int E4Recv_633A40::sub_633A40(int a2)
{
  *this = a2; /*0x633a44*/
  return a2; /*0x633a46*/
}
} // namespace gamemd

// 0x633A50
namespace gamemd {
int E4Recv_633A50::sub_633A50(int a2)
{
  this->M4 = a2; /*0x633a54*/
  return a2; /*0x633a57*/
}
} // namespace gamemd

// 0x633A60
namespace gamemd {
int E4Recv_633A60::sub_633A60(int a2)
{
  this->M8 = a2; /*0x633a64*/
  return a2; /*0x633a67*/
}
} // namespace gamemd

// 0x633A70
namespace gamemd {
char E4Recv_633A70::sub_633A70(char a2)
{
  this->M12 = a2; /*0x633a74*/
  return a2; /*0x633a77*/
}
} // namespace gamemd

// 0x633A90
namespace gamemd {
int E4Recv_633A90::sub_633A90()
{

  return (int)this->M4; /*0x633a93*/

}
} // namespace gamemd

// 0x633AA0
namespace gamemd {
int E4Recv_633AA0::sub_633AA0()
{

  return (int)this->M8; /*0x633aa3*/

}
} // namespace gamemd

// 0x633AE0
namespace gamemd {
void E4Recv_633AE0::sub_633AE0(const void * a2)
{
  memcpy(a2, 0x6Fu); /*0x633aed*/
}
} // namespace gamemd

// 0x633B00
namespace gamemd {
int E4Recv_633B00::sub_633B00(int a2)
{
  this->M112 = a2; /*0x633b04*/
  return a2; /*0x633b07*/
}
} // namespace gamemd

// 0x633B10
namespace gamemd {
int E4Recv_633B10::sub_633B10(int a2)
{
  this->M116 = a2; /*0x633b14*/
  return a2; /*0x633b17*/
}
} // namespace gamemd

// 0x633B20
namespace gamemd {
void ObjectClass::sub_633B20()
{

  this->estimatedHealth = 0; /*0x633b20*/

}
} // namespace gamemd

// 0x633B30
namespace gamemd {
int ObjectClass::sub_633B30()
{


  int result = this->estimatedHealth + 1; // eax /*0x633b33*/
  this->estimatedHealth = result; /*0x633b34*/
  return result; /*0x633b37*/

}
} // namespace gamemd

// 0x633B40
namespace gamemd {
int ObjectClass::sub_633B40()
{


  int result = this->estimatedHealth - 1; // eax /*0x633b43*/
  this->estimatedHealth = result; /*0x633b44*/
  return result; /*0x633b47*/

}
} // namespace gamemd

// 0x633B70
namespace gamemd {
int ObjectClass::sub_633B70()
{

  return this->estimatedHealth; /*0x633b73*/

}
} // namespace gamemd

// 0x633B80
namespace gamemd {
int ObjectClass::sub_633B80()
{

  return *&this->isOnMap; /*0x633b83*/

}
} // namespace gamemd

// 0x633C60
namespace gamemd {
unsigned int * E4Recv_633C60::sub_633C60(unsigned int * a2)
{

  unsigned int *ScenarioClassActionCoords; // eax
  int v5[3]; // [esp+0h] [ebp-18h] BYREF
  ScenarioClassActionCoords = GetScenarioClassActionCoords(v5, this); /*0x633c69*/
  unsigned int v6[3]; // [esp+Ch] [ebp-Ch] BYREF
  v6[0] = *ScenarioClassActionCoords; /*0x633c70*/
  v6[1] = ScenarioClassActionCoords->Coord3D_field_0x04; /*0x633c82*/
  v6[2] = ScenarioClassActionCoords->q008; /*0x633c8e*/
  ((Coord *)((Coord *)g_TacticalClass_Instance))->To_Screen(v6, v5); /*0x633c92*/
  char *v3; // edx
  v3 = (char *)DSurface_ViewBounds.field_4 + v5[1]; /*0x633cac*/
  *a2 = DSurface_ViewBounds.field_0 + v5[0]; /*0x633cb2*/
  a2[1] = v3; /*0x633cb4*/
  return a2; /*0x633cb7*/
}
} // namespace gamemd

// 0x633E50
namespace gamemd {
int E4Recv_633E50::sub_633E50()
{

  return this->M24; /*0x633e53*/

}
} // namespace gamemd

// 0x633E60
namespace gamemd {
int E4Recv_633E60::sub_633E60()
{

  return this->M16; /*0x633e63*/

}
} // namespace gamemd

// 0x634360
namespace gamemd {
BOOL E4Recv_634360::sub_634360(int a2)
{


  int uniqueId = this->M16; // edx /*0x634360*/
  int v3 = -1; // esi /*0x634365*/
  int v4 = 0; // eax /*0x634368*/
  if ( uniqueId > 0 ) /*0x63436d*/
  {
    unsigned int **i; // ecx
    for ( i = (unsigned int **)this->M4; **i != a2; ++i ) /*0x63436f*/
    {
      if ( ++v4 >= uniqueId ) /*0x634382*/
        return 0; /*0x63438f*/
    }
    v3 = v4; /*0x634392*/
  }
  return v3 != -1; /*0x634389*/

}
} // namespace gamemd

// 0x6343B0
namespace gamemd {
int E4Recv_6343B0::sub_6343B0()
{

  return *(unsigned int *)(**(unsigned int **)this->? + 540); /*0x6343bd*/

}
} // namespace gamemd

// 0x634470
namespace gamemd {
BOOL E4Recv_634470::sub_634470(int a2, int a3)
{


  unsigned int *ScenarioClassActionCoords; // eax
  unsigned int v13[3]; // [esp+1Ch] [ebp-1Ch] BYREF
  ScenarioClassActionCoords = GetScenarioClassActionCoords(v13, *(unsigned char **)(*(unsigned int *)this->? + 4)); /*0x634481*/
  unsigned int v12[3]; // [esp+10h] [ebp-28h] BYREF
  v12[0] = *ScenarioClassActionCoords; /*0x634488*/
  v12[1] = ScenarioClassActionCoords->ptr_4; /*0x63448f*/
  v12[2] = ScenarioClassActionCoords->ptr_8; /*0x63449a*/
  int *v4; // eax
  int v11; // [esp+8h] [ebp-30h] BYREF
  v4 = ToCoordPixel(&v11, v12); /*0x6344a2*/
  unsigned int *v5; // esi
  unsigned int v14[4]; // [esp+28h] [ebp-10h] BYREF
  v5 = ComputeBounds(v14, 8, *v4, v4[1]); /*0x6344bc*/
  int v6 = *v5 - 4; // eax /*0x6344c4*/
  int v7; // ecx
  v7 = v5[1] - 4; /*0x6344ca*/
  int v8; // edx
  v8 = v5[2] + 8; /*0x6344d0*/
  int v9; // esi
  v9 = v5[3] + 8; /*0x6344d6*/
  return a2 >= v6 && a2 < v8 + v6 && a3 >= v7 && a3 < v9 + v7; /*0x6344f1*/

}
} // namespace gamemd

// 0x634510
namespace gamemd {
unsigned int * ComputeBounds(AbstractClass * aP0, ObjectClass * aP1, int a3, int a4)
{
  *aP0 = aP1 / -2 + a3; /*0x634532*/
  aP0[1] = aP1 / -2 + a4; /*0x634535*/
  aP0[2] = aP1; /*0x634538*/
  aP0[3] = aP1; /*0x63453b*/
  return aP0; /*0x634534*/
}
} // namespace gamemd

// 0x634700
namespace gamemd {
int ObjectClass::sub_634700()
{

  return (int)this->nextObject; /*0x634703*/

}
} // namespace gamemd

// 0x6347A0
namespace gamemd {
int ObjectClass::sub_6347A0(int a2)
{

  return *(unsigned int *)(this->occupant + 4 * a2); /*0x6347aa*/

}
} // namespace gamemd

// 0x634800
namespace gamemd {
char ObjectClass::sub_634800()
{
  return &this->attachedBomb; /*0x634803*/
}
} // namespace gamemd

// 0x634810
namespace gamemd {
unsigned int ObjectClass::sub_634810(unsigned int * a2, int a3)
{

  int *ScenarioClassActionCoords; // eax
  unsigned int v8[3]; // [esp+8h] [ebp-Ch] BYREF
  ScenarioClassActionCoords = GetScenarioClassActionCoords(v8, *(unsigned char **)(this->occupant + 4 * a3)); /*0x634823*/
  int v4 = *ScenarioClassActionCoords; // ecx /*0x634828*/
  int v5 = ScenarioClassActionCoords->Coord3D_field_0x04; // edx /*0x63482a*/
  int v6 = ScenarioClassActionCoords->q008; // esi /*0x63482d*/
  *a2 = v4; /*0x634836*/
  a2[1] = v5; /*0x634838*/
  a2[2] = v6; /*0x63483b*/
  return a2; /*0x63483e*/
}
} // namespace gamemd

// 0x634850
namespace gamemd {
unsigned int ObjectClass::sub_634850(unsigned int * a2)
{

  int *ScenarioClassActionCoords; // eax
  unsigned int v7[3]; // [esp+8h] [ebp-Ch] BYREF
  ScenarioClassActionCoords = GetScenarioClassActionCoords(v7, &this->attachedBomb); /*0x63485c*/
  int v3 = *ScenarioClassActionCoords; // ecx /*0x634861*/
  int v4 = ScenarioClassActionCoords->Coord3D_field_0x04; // edx /*0x634863*/
  int v5 = ScenarioClassActionCoords->q008; // esi /*0x634866*/
  *a2 = v3; /*0x63486f*/
  a2[1] = v4; /*0x634871*/
  a2[2] = v5; /*0x634874*/
  return a2; /*0x634877*/
}
} // namespace gamemd

// 0x634880
namespace gamemd {
unsigned int ObjectClass::sub_634880(unsigned int * a2, int a3)
{

  unsigned int *ScenarioClassActionCoords; // eax
  unsigned int v8[3]; // [esp+14h] [ebp-Ch] BYREF
  ScenarioClassActionCoords = GetScenarioClassActionCoords(v8, *(unsigned char **)(this->occupant + 4 * a3)); /*0x634891*/
  unsigned int v7[3]; // [esp+8h] [ebp-18h] BYREF
  v7[0] = *ScenarioClassActionCoords; /*0x634898*/
  v7[1] = ScenarioClassActionCoords->Coord3D_field_0x04; /*0x63489f*/
  v7[2] = ScenarioClassActionCoords->q008; /*0x6348b6*/
  int v6[2]; // [esp+0h] [ebp-20h] BYREF
  ((Coord *)((Coord *)g_TacticalClass_Instance))->To_Screen(v7, v6); /*0x6348ba*/
  char *v4; // edx
  v4 = (char *)DSurface_ViewBounds.field_4 + v6[1]; /*0x6348d4*/
  *a2 = DSurface_ViewBounds.field_0 + v6[0]; /*0x6348da*/
  a2[1] = v4; /*0x6348dc*/
  return a2; /*0x6348df*/
}
} // namespace gamemd

// 0x6348F0
namespace gamemd {
unsigned int ObjectClass::sub_6348F0(unsigned int * a2)
{

  unsigned int *ScenarioClassActionCoords; // eax
  unsigned int v7[3]; // [esp+14h] [ebp-Ch] BYREF
  ScenarioClassActionCoords = GetScenarioClassActionCoords(v7, &this->attachedBomb); /*0x6348fa*/
  unsigned int v6[3]; // [esp+8h] [ebp-18h] BYREF
  v6[0] = *ScenarioClassActionCoords; /*0x634901*/
  v6[1] = ScenarioClassActionCoords->Coord3D_field_0x04; /*0x634913*/
  v6[2] = ScenarioClassActionCoords->q008; /*0x63491f*/
  int v5[2]; // [esp+0h] [ebp-20h] BYREF
  ((Coord *)((Coord *)g_TacticalClass_Instance))->To_Screen(v6, v5); /*0x634923*/
  char *v3; // edx
  v3 = (char *)DSurface_ViewBounds.field_4 + v5[1]; /*0x63493d*/
  *a2 = DSurface_ViewBounds.field_0 + v5[0]; /*0x634943*/
  a2[1] = v3; /*0x634945*/
  return a2; /*0x634948*/
}
} // namespace gamemd

// 0x634950
namespace gamemd {
void E4Recv_634950::sub_634950()
{

  LOBYTE(this->M28) = 1; /*0x634950*/

}
} // namespace gamemd

// 0x634960
namespace gamemd {
char E4Recv_634960::sub_634960()
{

  return this->M28; /*0x634963*/

}
} // namespace gamemd

// 0x635210
namespace gamemd {
int ObjectClass::sub_635210()
{

  int result; // eax
  int v3; // ebp
  unsigned char *v4; // esi
  int *ScenarioClassActionCoords; // eax
  int v6; // esi
  int v7; // edi
  int *v8; // edx
  int v9; // ecx
  int v10; // edx
  int v11; // [esp+10h] [ebp-108h]
  int v12; // [esp+1Ch] [ebp-FCh]
  int v13[3]; // [esp+20h] [ebp-F8h] BYREF
  int v14[3]; // [esp+2Ch] [ebp-ECh] BYREF
  unsigned char v15[112]; // [esp+38h] [ebp-E0h] BYREF
  unsigned char v16[108]; // [esp+A8h] [ebp-70h] BYREF
  __int16 v17; // [esp+114h] [ebp-4h]
  char v18; // [esp+116h] [ebp-2h]

  this->q_B0 = -1; /*0x63521b*/
  result = (int)this->lineTrailer; /*0x635225*/
  if ( result ) /*0x63522e*/
  {
    result = (int)this->nextObject; /*0x635240*/
    qmemcpy(v15, &this->attachedBomb, 0x6Eu); /*0x635243*/
    v3 = 0; /*0x635247*/
    v11 = result; /*0x635249*/
    v15[110] = this->location[4]; /*0x63524f*/
    if ( result > 0 ) /*0x635250*/
    {
      while ( 1 ) /*0x635265*/
      {
        v4 = *(unsigned char **)(this->occupant + 4 * v3); /*0x635265*/
        qmemcpy(v16, v4, sizeof(v16)); /*0x635268*/
        v4 += 108; /*0x635268*/
        v17 = *(unsigned short *)v4; /*0x63526a*/
        v18 = v4[2]; /*0x635270*/
        ScenarioClassActionCoords = GetScenarioClassActionCoords(v13, v15); /*0x635271*/
        v6 = *ScenarioClassActionCoords; /*0x635276*/
        v7 = ScenarioClassActionCoords->Coord3D_field_0x04; /*0x63527f*/
        v12 = ScenarioClassActionCoords->q008; /*0x635285*/
        v8 = GetScenarioClassActionCoords(v14, v16); /*0x635292*/
        result = *v8; /*0x635294*/
        v9 = v8->Coord3D_field_0x04; /*0x635298*/
        v10 = v8->q008; /*0x63529b*/
        if ( v6 == result && v7 == v9 && v12 == v10 ) /*0x6352a8*/
          break; /*0x6352a8*/
        result = v11; /*0x6352aa*/
        if ( ++v3 >= v11 ) /*0x6352b1*/
          return result; /*0x6352b1*/
      }
      this->q_B0 = v3; /*0x6352b5*/
    }
  }
  return result; /*0x6352bb*/

}
} // namespace gamemd

// 0x6352D0
namespace gamemd {
char E4Recv_6352D0::sub_6352D0()
{

  char result; // al

  int v2 = 0; // esi /*0x6352d5*/
  int uniqueId = this->M16; // ebx /*0x6352d7*/
  if ( uniqueId > 0 ) /*0x6352dc*/
  {
    do /*0x6352fb*/
    {
      unsigned char *v4; // ecx
      v4 = (unsigned char *)**((unsigned int **)this->M4 + v2); /*0x6352e4*/
      result = v4[131]; /*0x6352e6*/
      if ( !result ) /*0x6352ee*/
        result = (*(int (**)(unsigned char *))(*&v4->q530))(v4); /*0x6352f2*/
      ++v2; /*0x6352f8*/
    }
    while ( v2 < uniqueId ); /*0x6352fb*/
  }
  return result; /*0x6352fd*/

}
} // namespace gamemd

// 0x635310
namespace gamemd {
char E4Recv_635310::sub_635310()
{

  char result; // al

  int v2 = 0; // esi /*0x635315*/
  int uniqueId = this->M16; // ebx /*0x635317*/
  if ( uniqueId > 0 ) /*0x63531c*/
  {
    do /*0x63533b*/
    {
      unsigned char *v4; // ecx
      v4 = (unsigned char *)**((unsigned int **)this->M4 + v2); /*0x635324*/
      result = v4[131]; /*0x635326*/
      if ( result ) /*0x63532e*/
        result = (*(int (**)(unsigned char *))(*&v4->u32_540))(v4); /*0x635332*/
      ++v2; /*0x635338*/
    }
    while ( v2 < uniqueId ); /*0x63533b*/
  }
  return result; /*0x63533d*/

}
} // namespace gamemd

// 0x6357D0
namespace gamemd {
int Rect_Shrink(unsigned int * a1, int a2)
{

  int result = 2 * a2; // eax /*0x6357d0*/
  if ( (a2 & 0x40000000) != 0 && (result >= a1[2] || result >= a1[3]) ) /*0x6357e0*/
  {
    *a1 = 0; /*0x6357e2*/
    a1[1] = 0; /*0x6357e8*/
    a1[2] = 0; /*0x6357ef*/
    a1[3] = 0; /*0x6357f6*/
  }
  else
  {
    int v3; // esi
    v3 = a1[1]; /*0x635802*/
    *a1 -= a2; /*0x635807*/
    int v4 = v3 - a2; // esi /*0x63580c*/
    int v5; // edx
    v5 = a1[3]; /*0x63580e*/
    int v6; // edi
    v6 = result + a1[2]; /*0x635811*/
    a1[1] = v4; /*0x635813*/
    a1[2] = v6; /*0x635818*/
    a1[3] = result + v5; /*0x63581c*/
  }
  return result; /*0x6357fd*/
}
} // namespace gamemd

// 0x635DF0
namespace gamemd {
unsigned int * E4Recv_635DF0::sub_635DF0(unsigned int * a2)
{


  unsigned int *ScenarioClassActionCoords; // eax
  unsigned int v7[4]; // [esp+20h] [ebp-10h] BYREF
  ScenarioClassActionCoords = GetScenarioClassActionCoords(v7, *(unsigned char **)(*(unsigned int *)this->? + 4)); /*0x635e02*/
  unsigned int v6[3]; // [esp+14h] [ebp-1Ch] BYREF
  v6[0] = *ScenarioClassActionCoords; /*0x635e09*/
  v6[1] = ScenarioClassActionCoords->ptr_4; /*0x635e10*/
  v6[2] = ScenarioClassActionCoords->ptr_8; /*0x635e27*/
  int v5[2]; // [esp+Ch] [ebp-24h] BYREF
  Coord::To_Screen((Coord *)g_TacticalClass_Instance, v6, v5); /*0x635e2b*/
  v5[0] += DSurface_ViewBounds.field_0; /*0x635e48*/
  char *v4; // ecx
  v4 = (char *)DSurface_ViewBounds.field_4 + v5[1] - 8; /*0x635e64*/
  *a2 = v5[0] - 8; /*0x635e69*/
  a2[1] = v4; /*0x635e70*/
  a2[2] = 16; /*0x635e73*/
  a2[3] = 16; /*0x635e76*/
  return a2; /*0x635e6f*/

}
} // namespace gamemd

// 0x635E90
namespace gamemd {
int * E4Recv_635E90::sub_635E90(int * a2)
{


  unsigned int *ScenarioClassActionCoords; // eax
  unsigned int v12[3]; // [esp+20h] [ebp-1Ch] BYREF
  ScenarioClassActionCoords = GetScenarioClassActionCoords(v12, *(unsigned char **)(*(unsigned int *)this->? + 4)); /*0x635ea2*/
  unsigned int v11[3]; // [esp+14h] [ebp-28h] BYREF
  v11[0] = *ScenarioClassActionCoords; /*0x635ea9*/
  v11[1] = ScenarioClassActionCoords->ptr_4; /*0x635eb0*/
  v11[2] = ScenarioClassActionCoords->ptr_8; /*0x635ebb*/
  int *v3; // eax
  int v10; // [esp+Ch] [ebp-30h] BYREF
  v3 = ToCoordPixel(&v10, v11); /*0x635ec3*/
  unsigned int *v4; // esi
  unsigned int v13[4]; // [esp+2Ch] [ebp-10h] BYREF
  v4 = ComputeBounds(v13, 8, *v3, v3[1]); /*0x635edd*/
  int v5 = *v4 - 8; // edi /*0x635ee7*/
  int v6; // ecx
  v6 = v4[1] - 8; /*0x635ef0*/
  int v7; // edx
  v7 = v4[2] + 8; /*0x635ef3*/
  int v8; // esi
  v8 = v4[3]; /*0x635ef6*/
  *a2 = v5; /*0x635f0c*/
  a2[1] = v6; /*0x635f0f*/
  a2[2] = v7 + 8; /*0x635f12*/
  a2[3] = v8 + 16; /*0x635f15*/
  return a2; /*0x635f0e*/

}
} // namespace gamemd

// 0x636110
namespace gamemd {
ObjectClass * E4Recv_636110::ReadPointerFromECX2()
{
  return (int)this->ptr_0; /*0x636112*/
}
} // namespace gamemd

// 0x636520
namespace gamemd {
void E4Recv_636520::sub_636520()
{

  LOBYTE(this->M28) = 1; /*0x636520*/

}
} // namespace gamemd

// 0x636530
namespace gamemd {
void E4Recv_636530::sub_636530()
{

  LOBYTE(this->M28) = 0; /*0x636530*/

}
} // namespace gamemd

// 0x636540
namespace gamemd {
char E4Recv_636540::sub_636540()
{

  return this->M28; /*0x636543*/

}
} // namespace gamemd

// 0x636D90
namespace gamemd {
unsigned int E4Recv_636D90::_GetExecutionResourceId_irtualProcessor_details_Concurrency__QBEIXZ()
{
  return this->M140; /*0x636d96*/
}
} // namespace gamemd

// 0x636FA0
namespace gamemd {
int E4Recv_636FA0::sub_636FA0(int a2, int a3)
{
  this->M144 = a2; /*0x636fa8*/
  this->M148 = a3; /*0x636fae*/
  this->M152 = 1; /*0x636fb4*/
  return a2; /*0x636fbb*/
}
} // namespace gamemd

// 0x636FC0
namespace gamemd {
unsigned int E4Recv_636FC0::_GetMaskId_irtualProcessor_details_Concurrency__QBEIXZ()
{
  return this->M144; /*0x636fc6*/
}
} // namespace gamemd

// 0x636FD0
namespace gamemd {
int E4Recv_636FD0::sub_636FD0()
{
  return this->lastLayer; /*0x636fd6*/
}
} // namespace gamemd

// 0x637020
namespace gamemd {
bool E4Recv_637020::_WasExplicitlyAttached_ExternalContextBase_details_Concurrency__QBE_NXZ()
{
  return this->M152; /*0x637026*/
}
} // namespace gamemd

// 0x637030
namespace gamemd {
char E4Recv_637030::sub_637030()
{
  return this->isVisible; /*0x637036*/
}
} // namespace gamemd

// 0x6370A0
namespace gamemd {
int j_PlanningNodeClass_CleanupAll()
{
  return PlanningNodeClass::CleanupAll();
}
} // namespace gamemd

// 0x637550
namespace gamemd {
void FlushPlanningQueue(CCINIClass * a1)
{

  int i; // esi
  for ( i = *(unsigned int *)&DataGlobal_AC4B58 - 1; i >= 0; --i ) /*0x63755b*/
  {
    void *v2; // edi
    v2 = *(void **)(*(unsigned int *)&DataGlobal_AC4B4C + 4 * i); /*0x637564*/
    Render_Show((int)v2); /*0x637569*/
    if ( i < *(int *)&DataGlobal_AC4B58 ) /*0x637576*/
    {
      int v3 = i; // eax /*0x637579*/
      --*(unsigned int *)&DataGlobal_AC4B58; /*0x63757d*/
      if ( i < *(int *)&DataGlobal_AC4B58 ) /*0x637583*/
      {
        do /*0x63759b*/
        {
          ++v3; /*0x63758b*/
          *(unsigned int *)(*(unsigned int *)&DataGlobal_AC4B4C + 4 * v3 - 4) = *(unsigned int *)(*(unsigned int *)&DataGlobal_AC4B4C /*0x63758f*/
          + 4 * v3);
        }
        while ( v3 < *(int *)&DataGlobal_AC4B58 ); /*0x63759b*/
      }
    }
    operator delete((v2)); /*0x63759e*/
  }
}
} // namespace gamemd

// 0x638F90
namespace gamemd {
int sub_638F90(int a1, int a2)
{

  if ( !dword_AC4CCC ) /*0x638f9d*/
    return 0; /*0x638f9d*/
  unsigned int *Coords; // eax
  unsigned int v8[4]; // [esp+1Ch] [ebp-20h] BYREF
  Coords = ScriptAction::GetCoords((unsigned int **)dword_AC4CCC, v8); /*0x638fa8*/
  unsigned int v7[3]; // [esp+10h] [ebp-2Ch] BYREF
  v7[0] = *Coords; /*0x638faf*/
  v7[1] = Coords->u32_4; /*0x638fba*/
  v7[2] = Owner; /*0x638fc5*/
  unsigned int *v3; // eax
  int v6; // [esp+8h] [ebp-34h] BYREF
  v3 = ToCoordPixel(&v6, v7); /*0x638fc9*/
  unsigned int v9[4]; // [esp+2Ch] [ebp-10h] BYREF
  ((Rect *)(v9))->Set(*v3 - 4, v3[1] - 4, 8, 8); /*0x638fe5*/
  v8[0] = v9[0]; /*0x638ffe*/
  int v4; // eax
  v4 = v9[1] - 4; /*0x639005*/
  if ( a1 < v9[0] - 4 ) /*0x639010*/
    return 0; /*0x639010*/
  if ( a1 < v9[2] + 8 + v9[0] - 4 && a2 >= v4 && a2 < v9[3] + 8 + v4 ) /*0x639024*/
    return dword_AC4CCC; /*0x639026*/
  else
    return 0; /*0x639034*/
}
} // namespace gamemd

// 0x6394E0
namespace gamemd {
char sub_6394E0(IUnknown * a1, int a2)
{

  unsigned char *v3; // esi
  BuildingLoadQueue *v4; // ecx
  unsigned int *Next; // eax
  unsigned char *WaypointCoords; // eax
  int v7; // edx
  unsigned char *v8; // eax
  unsigned char v10[108]; // [esp-70h] [ebp-16Ch] BYREF
  int v11; // [esp-4h] [ebp-100h]
  unsigned char v12[236]; // [esp+Ch] [ebp-F0h] BYREF
  __int16 v13; // [esp+F8h] [ebp-4h]
  char v14; // [esp+FAh] [ebp-2h]

  v3 = *(unsigned char **)(**(unsigned int **)(a2 + 4) + 4); /*0x6394ef*/
  qmemcpy(&v12[16], v3, 0x6Cu); /*0x6394fc*/
  v3 += 108; /*0x6394fc*/
  *(unsigned short *)&v12[124] = *(unsigned short *)v3; /*0x6394fe*/
  v12[126] = v3[2]; /*0x639500*/
  if ( v12[34] ) /*0x639507*/
  {
    v4 = (BuildingLoadQueue *)&v12[30]; /*0x639509*/
  }
  else if ( v12[44] ) /*0x639515*/
  {
    v4 = (BuildingLoadQueue *)&v12[40]; /*0x639517*/
  }
  else
  {
    LOBYTE(Next) = v12[39]; /*0x63951d*/
    if ( !v12[39] ) /*0x639523*/
      return (char)Next; /*0x639523*/
    v4 = (BuildingLoadQueue *)&v12[35]; /*0x639525*/
  }
  Next = BuildingLoadQueue::GetNext(v4); /*0x639529*/
  if ( Next ) /*0x639530*/
  {
    WaypointCoords = ScriptAction::GetWaypointCoords((ScriptAction *)&v12[8], Next); /*0x639537*/
    v7 = *(unsigned int *)WaypointCoords; /*0x63953c*/
    LOBYTE(WaypointCoords) = WaypointCoords[4]; /*0x639543*/
    *(unsigned int *)&v10[104] = v7; /*0x639547*/
    (v11) = ((v11) & ~0xFF) | (((unsigned char)WaypointCoords) & 0xFF); /*0x639549*/
    v8 = ScriptAction::GetWaypointCoords((ScriptAction *)v12, a1); /*0x639550*/
    ScenarioClass::SetEvent( /*0x639577*/
      &v12[128],
      *(unsigned int *)(*(int *)((char *)&stru_A83CD9.estimatedHealth + 3) + 48),
      42,
      *(unsigned int *)v8,
      v8->ptr_4,
      *(int *)&v10[104],
      v11);
    qmemcpy(v10, &v12[128], sizeof(v10)); /*0x63958d*/
    (v11) = ((v11) & ~0xFFFF) | ((v13) & 0xFFFF); /*0x63958f*/
    (v11) = ((v11) & ~(0xFF << 16)) | (((v14) & 0xFF) << 16); /*0x639591*/
    LOBYTE(Next) = Network::RecordEvent( /*0x639592*/
                     *(__int64 *)v10,
                     *(int *)&v10[8],
                     *(int *)&v10[12],
                     *(int *)&v10[16],
                     *(int *)&v10[20],
                     *(int *)&v10[24],
                     *(int *)&v10[28],
                     *(int *)&v10[32],
                     *(int *)&v10[36],
                     *(int *)&v10[40],
                     *(int *)&v10[44],
                     *(int *)&v10[48],
                     *(int *)&v10[52],
                     *(int *)&v10[56],
                     *(int *)&v10[60],
                     *(int *)&v10[64],
                     *(int *)&v10[68],
                     *(int *)&v10[72],
                     *(int *)&v10[76],
                     *(int *)&v10[80],
                     *(int *)&v10[84],
                     *(int *)&v10[88],
                     *(int *)&v10[92],
                     *(int *)&v10[96],
                     *(int *)&v10[100],
                     *(int *)&v10[104],
                     v11);
  }
  return (char)Next; /*0x639597*/

}
} // namespace gamemd

// 0x63A440
namespace gamemd {
int sub_63A440(int a1, int a2)
{

  int v2; // eax
  unsigned __int8 *v3; // edx
  unsigned __int8 v5; // dl
  int v6; // eax

  v2 = *(char *)(a2 + 12); /*0x63a440*/
  v3 = (unsigned __int8 *)(a2 + 14); /*0x63a447*/
  if ( v2 == 7 || v2 == 8 || v2 == 9 ) /*0x63a457*/
    return 0; /*0x63a459*/
  v5 = v3[4]; /*0x63a462*/
  if ( (v2 == 1 || v2 == 11) && (v5 == 11 || v2 == 11 && !v5) ) /*0x63a480*/
    return 0; /*0x63a482*/
  v6 = -(*(unsigned int *)(a1 + 20) != 15); /*0x63a490*/
  (v6) = ((v6) & ~0xFF) | ((v6 & 0xFD) & 0xFF); /*0x63a492*/
  return v6 + 2; /*0x63a45b*/

}
} // namespace gamemd

// 0x63A4A0
namespace gamemd {
void E4Recv_63A4A0::sub_63A4A0()
{
  *(unsigned int *)&DataGlobal_AC4C90 = this; /*0x63a4a0*/
}
} // namespace gamemd

// 0x63AD30
namespace gamemd {
void E4Recv_63AD30::sub_63AD30()
{
  *(unsigned int *)&g_ScriptState = this; /*0x63ad30*/
}
} // namespace gamemd

// 0x63AD40
namespace gamemd {
IUnknown * sub_63AD40()
{
  return dword_AC4C38; /*0x63ad45*/
}
} // namespace gamemd

// 0x63B090
namespace gamemd {
void sub_63B090()
{
  dword_AC4BF0 = 0; /*0x63b090*/
}
} // namespace gamemd

// 0x63D070
namespace gamemd {
int ColorLerpAndPack(short * a1, unsigned char * a2, int aP1)
{
  Color v5; // [esp+0h] [ebp-8h] BYREF

  int16_t ptr_0; // ax
  ptr_0 = (int16_t)a1->ptr_0; /*0x63d073*/
  (((unsigned char *)&(v5.Color_field_00))[2]) = (((unsigned char *)&(a1->ptr_0))[2]); /*0x63d07e*/
  (*((unsigned short *)&(v5.Color_field_00))) = ptr_0; /*0x63d087*/
  Color::Lerp(&v5, aP1, a2); /*0x63d08c*/
  return ((*((unsigned char *)&(v5.Color_field_00))) >> g_BitShift_Green_0 << g_BitShift_Red) /*0x63d0e2*/
  | ((((unsigned char *)&(v5.Color_field_00))[1]) >> g_BitMask_Blue << g_BitMask_Green)
  | ((((unsigned char *)&(v5.Color_field_00))[2]) >> g_BitMask_Red << g_BitShift_Blue);
}
} // namespace gamemd

// 0x63D210
namespace gamemd {
int * ActionScenarioClassCoordToScreen(BuildingClass * aP0, const void * a1, int a3)
{

  int v3 = -1; // eax /*0x63d216*/
  int v5 = -1; // ecx /*0x63d21c*/
  if ( a1 ) /*0x63d221*/
  {
    unsigned char v15[112]; // [esp+28h] [ebp-70h] BYREF
    memcpy(v15, a1, 0x6Fu); /*0x63d238*/
    int *ActionCoords; // ecx
    int v13[3]; // [esp+10h] [ebp-88h] BYREF
    ActionCoords = GetScenarioClassActionCoords(v13, v15); /*0x63d246*/
    int v7 = *ActionCoords; // eax /*0x63d248*/
    int v8 = ActionCoords->Coord3D_field_0x04; // edx /*0x63d24d*/
    int v9 = ActionCoords->q008; // esi /*0x63d250*/
    if ( *ActionCoords == -1 && v8 == -1 && v9 == -1 && a3 ) /*0x63d266*/
    {
      int *v10; // ecx
      unsigned char v14[12]; // [esp+1Ch] [ebp-7Ch] BYREF
      v10 = (int *)(*(int (**)(int, unsigned char *))(*(unsigned int *)a3 + 88))(a3, v14); /*0x63d272*/
      v7 = *v10; /*0x63d274*/
      v8 = v10[1]; /*0x63d276*/
      v9 = v10[2]; /*0x63d279*/
    }
    unsigned int v12[3]; // [esp+4h] [ebp-94h] BYREF
    v12[1] = v8; /*0x63d282*/
    v12[0] = v7; /*0x63d286*/
    v12[2] = v9; /*0x63d294*/
    ((Coord *)(g_TacticalClass_Instance))->To_Screen(v12, v13); /*0x63d298*/
    v3 = DSurface_ViewBounds + v13[0]; /*0x63d2b1*/
    v5 = dword_886FA4 + v13[1]; /*0x63d2b4*/
  }
  *aP0 = v3; /*0x63d2b7*/
  aP0[1] = v5; /*0x63d2b9*/
  return aP0; /*0x63d2be*/
}
} // namespace gamemd

// 0x63D2D0
namespace gamemd {
int E4Recv_63D2D0::sub_63D2D0()
{

  int result; // eax
  int v2; // edi
  int v3; // ecx
  unsigned __int8 ***i; // edx
  unsigned __int8 *v5; // [esp+10h] [ebp-Ch]

  v5 = **(unsigned __int8 ***)this->ptr_4; /*0x63d31a*/
  result = (BYTE2(stru_A83CD9.ptr_0) >> g_BitMask_Red << g_BitShift_Blue) /*0x63d354*/
         | (BYTE1(stru_A83CD9.ptr_0) >> g_BitMask_Blue << g_BitMask_Green)
         | (LOBYTE(stru_A83CD9.ptr_0) >> g_BitShift_Green_0 << g_BitShift_Red);
  if ( v5 ) /*0x63d358*/
  {
    if ( *(unsigned int *)&stru_AC4B48.__pad_9C[12] ) /*0x63d3a7*/
    {
      v2 = *(unsigned int *)(*(unsigned int *)&stru_AC4B48.__pad_9C[12] + 16); /*0x63d3a9*/
      v3 = 0; /*0x63d3ac*/
      if ( v2 > 0 ) /*0x63d3b0*/
      {
        for ( i = *(unsigned __int8 ****)(*(unsigned int *)&stru_AC4B48.__pad_9C[12] + 4); **i != v5; ++i ) /*0x63d3b2*/
        {
          if ( ++v3 >= v2 ) /*0x63d3c6*/
            return result; /*0x63d3c6*/
        }
        if ( v3 != -1 ) /*0x63d3d3*/
          return (BYTE2(stru_A80220.ptr_0) >> g_BitMask_Red << g_BitShift_Blue) /*0x63d3d5*/
               | (BYTE1(stru_A80220.ptr_0) >> g_BitMask_Blue << g_BitMask_Green)
               | (LOBYTE(stru_A80220.ptr_0) >> g_BitShift_Green_0 << g_BitShift_Red);
      }
    }
    else if ( v5[131] ) /*0x63d3e3*/
    {
      return (BYTE2(stru_A80220.ptr_0) >> g_BitMask_Red << g_BitShift_Blue) /*0x63d3ed*/
           | (BYTE1(stru_A80220.ptr_0) >> g_BitMask_Blue << g_BitMask_Green)
           | (LOBYTE(stru_A80220.ptr_0) >> g_BitShift_Green_0 << g_BitShift_Red);
    }
  }
  return result; /*0x63d3c8*/

}
} // namespace gamemd

// 0x63D910
namespace gamemd {
char DrawTacticalFillScanline(AbstractClass * aP0, BuildingClass * aP1, int a3, BuildingClass * aP3, int a5, int a6)
{

  int v7; // eax
  int v8; // edi
  int v9; // esi

  v7 = aP0 - (aP0 >> 31); /*0x63d917*/
  v8 = aP0 / 2; /*0x63d91c*/
  v9 = aP0 / 2 - aP0 + 1; /*0x63d922*/
  if ( v9 <= aP0 / 2 ) /*0x63d925*/
  {
    do /*0x63d94a*/
      LOBYTE(v7) = DrawTacticalLine2D(v9++, aP1, a3, aP3, a5, a6, 0); /*0x63d942*/
    while ( v9 <= v8 ); /*0x63d94a*/
  }
  return v7; /*0x63d94d*/

}
} // namespace gamemd

// 0x63D960
namespace gamemd {
char globalHelper_03D960(Tactical * aP0, int a2, int a3, int a4, int a5, int a6)
{

  int v6; // ecx
  int v7; // esi
  int v8; // edi
  int v9; // eax

  v6 = aP0 - 2; /*0x63d961*/
  if ( v6 > 0 ) /*0x63d96c*/
  {
    v9 = v6 - (v6 >> 31); /*0x63d977*/
    v8 = v6 / 2; /*0x63d97b*/
    v7 = v6 / 2 - v6 + 1; /*0x63d981*/
  }
  else
  {
    v7 = 0; /*0x63d96e*/
    v8 = 0; /*0x63d970*/
  }
  for ( ; v7 <= v8; ++v7 ) /*0x63d984*/
    LOBYTE(v9) = DrawTacticalLine2D(v7, a2, a3, a4, a5, a6, 1); /*0x63d9a4*/
  return v9; /*0x63d9b3*/

}
} // namespace gamemd

// 0x63F4A0
namespace gamemd {
int sub_63F4A0()
{
  dword_AC4D00 = 0; /*0x63f4a2*/
  dword_AC4D04 = 0; /*0x63f4a7*/
  dword_AC4D08 = 0; /*0x63f4ac*/
  dword_AC4D0C = 0; /*0x63f4b1*/
  return 0; /*0x63f4b6*/
}
} // namespace gamemd

// 0x63F4C0
namespace gamemd {
void sub_63F4C0()
{

  long double v0; // st7
  v0 = pow(256.0, 2.0); /*0x63f4cc*/
  dbl_AC4D18 = Math::Sqrt(v0 + v0); /*0x63f4de*/
}
} // namespace gamemd

// 0x63F4F0
namespace gamemd {
void sub_63F4F0()
{
  dbl_AC4E68 = dbl_AC4D18 / 60.0; /*0x63f4fc*/
}
} // namespace gamemd

// 0x63F510
namespace gamemd {
void sub_63F510()
{
  dbl_AC4E50 = 1.0 / dbl_AC4E68; /*0x63f51c*/
}
} // namespace gamemd

// 0x63F530
namespace gamemd {
void sub_63F530()
{
  dbl_AC4E48 = 0.0174532925199433 * 45.0; /*0x63f53c*/
}
} // namespace gamemd

// 0x63F550
namespace gamemd {
void sub_63F550()
{
  dbl_AC4D20 = 0.0174532925199433 * 60.0; /*0x63f55c*/
}
} // namespace gamemd

// 0x63F570
namespace gamemd {
void sub_63F570()
{
  dbl_AC4CF8 = 0.0174532925199433 * 90.0; /*0x63f57c*/
}
} // namespace gamemd

// 0x63F590
namespace gamemd {
long long sub_63F590()
{

  double v0; // st7
  v0 = Math::Sin(dbl_AC4CF8 - dbl_AC4D20); /*0x63f5a2*/
  int64_t result; // rax
  result = Math::RoundToInt(v0 * dbl_AC4D18 * 0.5); /*0x63f5b6*/
  dword_AC4E70 = result; /*0x63f5bb*/
  return result; /*0x63f5c0*/
}
} // namespace gamemd

// 0x63F5D0
namespace gamemd {
void sub_63F5D0()
{
  dbl_AC4D28 = Math::ArcTan((double)dword_AC4E70 * 0.00390625); /*0x63f5e7*/
}
} // namespace gamemd

// 0x63F600
namespace gamemd {
void sub_63F600()
{
  dbl_AC4E40 = Math::ArcTan((double)(2 * dword_AC4E70) / dbl_AC4D18); /*0x63f622*/
}
} // namespace gamemd

// 0x63F630
namespace gamemd {
long long sub_63F630()
{

  int result; // eax
  (*((unsigned short *)&(result))) = Math::RoundToInt((double)(4 * dword_AC4E70) + 0.5); /*0x63f64b*/
  dword_AC4E64 = result; /*0x63f650*/
  return result; /*0x63f656*/
}
} // namespace gamemd

// 0x63F660
namespace gamemd {
int sub_63F660()
{
  word_AC4D10 = 0; /*0x63f662*/
  word_AC4D12 = 0; /*0x63f668*/
  return 0; /*0x63f66e*/
}
} // namespace gamemd

// 0x63F670
namespace gamemd {
int sub_63F670()
{
  dword_AC4E30 = 0; /*0x63f672*/
  dword_AC4E34 = 0; /*0x63f677*/
  dword_AC4E38 = 0; /*0x63f67c*/
  return 0; /*0x63f681*/
}
} // namespace gamemd

// 0x63F690
namespace gamemd {
int sub_63F690()
{
  dword_AC4E60 = 0; /*0x63f695*/
  dword_AC4E58 = 128; /*0x63f69f*/
  dword_AC4E5C = 128; /*0x63f6a4*/
  return 128; /*0x63f6a9*/
}
} // namespace gamemd

// 0x63F810
namespace gamemd {
int E4Recv_63F810::sub_63F810()
{

  char *v1; // esi
  int v3; // [esp+8h] [ebp-8h]

  this->M5404 = 10; /*0x63f81a*/
  v1 = &this->M5392; /*0x63f829*/
  this->M5392 = Timer::GetTicks(); /*0x63f834*/
  *((unsigned int *)v1 + 1) = v3; /*0x63f83a*/
  *((unsigned int *)v1 + 2) = 3; /*0x63f83d*/
  return v3; /*0x63f840*/

}
} // namespace gamemd

// 0x63F8F0
namespace gamemd {
long long E4Recv_63F8F0::sub_63F8F0()
{

  int v2; // eax
  v2 = PowerBar::CalcFill(); /*0x63f8f6*/
  int v5; // [esp+0h] [ebp-8h]
  v5 = this->M5420 + this->M5424 + this->M5428; /*0x63f917*/
  if ( v5 > v2 ) /*0x63f91c*/
    v5 = v2; /*0x63f91e*/
  int v4; // kr00_4
  v4 = Math::RoundToInt((double)v5 / (double)v2 * 5.0); /*0x63f930*/
  int64_t result; // rax
  (((unsigned short *)&(result))[2]) = (*(((unsigned short *)&(v4)) + 1)); /*0x63f930*/
  (*((unsigned short *)&(result))) = v4; /*0x63f930*/
  return result; /*0x63f935*/
}
} // namespace gamemd

// 0x63FDC0
namespace gamemd {
int E4Recv_63FDC0::sub_63FDC0()
{
  int result; // eax

  int v5; // [esp+4h] [ebp-Ch] BYREF
  int v6; // [esp+8h] [ebp-8h] BYREF
  int v7; // [esp+Ch] [ebp-4h] BYREF
  PowerBar::ComputeFill(&v5, &v7, &v6); /*0x63fdd7*/
  int v2 = this->M5420; // eax /*0x63fddc*/
  if ( v2 <= v5 ) /*0x63fde8*/
  {
    int v4 = this->M5428; // eax /*0x63fdf6*/
    if ( v4 <= v6 ) /*0x63fe02*/
    {
      result = this->M5424; /*0x63fe10*/
      if ( result > v7 ) /*0x63fe1c*/
        this->M5424 = --result; /*0x63fe1f*/
    }
    else
    {
      result = v4 - 1; /*0x63fe04*/
      this->M5428 = result; /*0x63fe05*/
    }
  }
  else
  {
    result = v2 - 1; /*0x63fdea*/
    this->M5420 = result; /*0x63fdeb*/
  }
  return result; /*0x63fdf1*/
}
} // namespace gamemd

// 0x63FE30
namespace gamemd {
int E4Recv_63FE30::sub_63FE30()
{
  int result; // eax

  int v5; // [esp+4h] [ebp-Ch] BYREF
  int v6; // [esp+8h] [ebp-8h] BYREF
  int v7; // [esp+Ch] [ebp-4h] BYREF
  PowerBar::ComputeFill(&v6, &v7, &v5); /*0x63fe47*/
  int v2 = this->M5428; // eax /*0x63fe4c*/
  if ( v2 >= v5 ) /*0x63fe58*/
  {
    int v4 = this->M5420; // eax /*0x63fe66*/
    if ( v4 >= v6 ) /*0x63fe72*/
    {
      result = this->M5424; /*0x63fe80*/
      if ( result < v7 ) /*0x63fe8c*/
        this->M5424 = ++result; /*0x63fe8f*/
    }
    else
    {
      result = v4 + 1; /*0x63fe74*/
      this->M5420 = result; /*0x63fe75*/
    }
  }
  else
  {
    result = v2 + 1; /*0x63fe5a*/
    this->M5428 = result; /*0x63fe5b*/
  }
  return result; /*0x63fe61*/
}
} // namespace gamemd
