// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Team_e4.hpp"
#include "e4/classes/TemporalClass_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/TerrainTypeClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/TeamTypeClass_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/TerrainClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Techno_e4.hpp"
#include "e4/classes/Map_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/Movie_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/Terrain_e4.hpp"

// 0x71A450
namespace gamemd {
void TemporalClass::Constructor()
{

  unsigned int v2;
  int v3; // eax

  ((AbstractClass *)((AbstractClass *)this))->Constructor(); /*0x71a453*/
  v2 = g_abs_A8ED84; /*0x71a458*/
  *((unsigned int *)this + 13) = 0; /*0x71a45d*/
  *((unsigned int *)this + 11) = v2; /*0x71a464*/
  *(unsigned int *)this = &vt_TemporalClass; /*0x71a467*/
  *((unsigned int *)this + 1) = &vt_TemporalClass; /*0x71a46d*/
  *((unsigned int *)this + 2) = &vt_TemporalClass; /*0x71a474*/
  *((unsigned int *)this + 3) = &vt_TemporalClass; /*0x71a47b*/
  if ( g_abs_B0EC70 < g_abs_B0EC68 /*0x71a4b7*/
    || (g_abs_B0EC6D || !g_abs_B0EC68)
    && g_abs_B0EC74 > (unsigned char [1])((unsigned char [1]))((unsigned char [1]))(0)
    && (*(uint8_t (**)(int *, int, unsigned int))(g_abs_B0EC60 + 8))(
         &g_abs_B0EC60,
         (unsigned int)(g_abs_B0EC68)+ g_abs_B0EC74,
         0) )
  {
    v3 = (int)(g_abs_B0EC70++);
    *((unsigned int *)g_abs_B0EC64 + v3) = this; /*0x71a4d3*/
  }
  return this; /*0x71a4d8*/

}
} // namespace ra2

// 0x71A4E0
namespace gamemd {
TemporalClass::TemporalClass(TechnoClass * aP1)
{

  int v3; // eax
  int v5; // [esp+Ch] [ebp-8h]

  ((AbstractClass *)((AbstractClass *)this))->Constructor(); /*0x71a4e7*/
  *((unsigned int *)this + 11) = *(unsigned int *)&HouseClass_Player.__pad_5568[23248]; /*0x71a4fb*/
  *((unsigned int *)this + 13) = 0; /*0x71a4fe*/
  *this = &vt_TemporalClass; /*0x71a501*/
  *((unsigned int *)this + 1) = &vt_TemporalClass; /*0x71a507*/
  *((unsigned int *)this + 2) = &vt_TemporalClass; /*0x71a50e*/
  *((unsigned int *)this + 3) = &vt_TemporalClass; /*0x71a515*/
  *((unsigned int *)this + 9) = aP1; /*0x71a51c*/
  *((unsigned int *)this + 10) = 0; /*0x71a51f*/
  *((unsigned int *)this + 11) = *(unsigned int *)&HouseClass_Player.__pad_5568[23248]; /*0x71a529*/
  *((unsigned int *)this + 12) = v5; /*0x71a52c*/
  *((unsigned int *)this + 13) = 0; /*0x71a52f*/
  *((unsigned int *)this + 16) = 0; /*0x71a532*/
  *((unsigned int *)this + 17) = 0; /*0x71a535*/
  if ( *(int *)&stru_B05488.__pad_579C[16460] < *(int *)&stru_B05488.__pad_579C[16452] /*0x71a569*/
    || (stru_B05488.__pad_579C[16457] || !*(unsigned int *)&stru_B05488.__pad_579C[16452])
    && *(int *)&stru_B05488.__pad_579C[16464] > 0
    && (*(uint8_t (**)(char *, int, unsigned int))(*(unsigned int *)&stru_B05488.__pad_579C[16444] + 8))(
         &stru_B05488.__pad_579C[16444],
         *(unsigned int *)&stru_B05488.__pad_579C[16452] + *(unsigned int *)&stru_B05488.__pad_579C[16464],
         0) )
  {
    v3 = (*(unsigned int *)&stru_B05488.__pad_579C[16460])++; /*0x71a576*/
    *(unsigned int *)(*(unsigned int *)&stru_B05488.__pad_579C[16448] + 4 * v3) = this; /*0x71a585*/
  }
  *((unsigned int *)this + 18) = 0; /*0x71a588*/
  *((unsigned int *)this + 19) = 0; /*0x71a58b*/
  *((unsigned int *)this + 14) = 0; /*0x71a58e*/
  *((unsigned int *)this + 15) = 0; /*0x71a591*/
  return this; /*0x71a596*/

}
} // namespace ra2

// 0x71A760
namespace gamemd {
void ** TemporalClass::ProcessTimeWarp()
{

  unsigned int *v2; // ecx
  void **result; // eax
  int v4; // eax
  unsigned int *v5; // edi
  unsigned int *v6; // eax
  int v7; // ebp
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  int v11; // eax
  double v12; // st7
  int **v13; // ecx
  int WarpPerStep; // ebp
  int *v15; // ecx
  int v16; // edi
  int v17; // eax
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // ecx
  int *v22; // ecx
  int v23; // edi
  int v24; // ebp
  int v25; // eax
  int v26; // eax
  unsigned int *v27; // ebp
  int v28; // eax
  int v29; // ecx
  unsigned int *v30; // edi
  unsigned int *v31; // eax
  unsigned int *v32; // ecx
  int v33; // edx
  int v34; // edi
  int *v35; // eax
  unsigned int *v36; // ecx
  int v37; // ecx
  int v38; // ecx
  int v39; // [esp+Ch] [ebp-38h]
  int v40; // [esp+20h] [ebp-24h] BYREF
  int v41; // [esp+24h] [ebp-20h]
  int v42; // [esp+28h] [ebp-1Ch]
  unsigned char v43[12]; // [esp+2Ch] [ebp-18h] BYREF
  unsigned char v44[12]; // [esp+38h] [ebp-Ch] BYREF

  v2 = (unsigned int *)*((char *)this + 10); /*0x71a76b*/
  if ( v2 && (int *)v2[158] == (int *)(this) && *((char *)this + 16) )
  {
    v2[158] = 0; /*0x71a77f*/
    *(unsigned char *)(*((char *)this + 10) + 624) = 0; /*0x71a78a*/
    return (void **)TagClass::Unlink(this); /*0x71a790*/
  }
  else
  {
    v4 = *((char *)this + 9); /*0x71a79d*/
    if ( !v4 ) /*0x71a7a2*/
      goto LABEL_10; /*0x71a7a2*/
    if ( !*(unsigned char *)(v4 + 130) ) /*0x71a7a8*/
      goto LABEL_10; /*0x71a7a8*/
    if ( !v2 ) /*0x71a7b6*/
      goto LABEL_10; /*0x71a7b6*/
    v5 = (unsigned int *)(*(int (**)(unsigned int *, unsigned char *))(*v2 + 72))(v2, v43); /*0x71a7c9*/
    v6 = (unsigned int *)(*(int (**)(unsigned int, unsigned char *))(*(unsigned int *)*((char *)this + 9) + 72))(*((char *)this + 9), v44); /*0x71a7d2*/
    v7 = v5[1]; /*0x71a7d9*/
    v8 = *v6 - *v5; /*0x71a7dc*/
    v9 = v6[1]; /*0x71a7de*/
    v10 = v6[2]; /*0x71a7e1*/
    v40 = v8; /*0x71a7e4*/
    v11 = v10 - v5[2]; /*0x71a7ed*/
    v41 = v9 - v7; /*0x71a7ef*/
    v42 = v11; /*0x71a7f3*/
    v12 = Math::Sqrt((double)v8 * (double)v8 + (double)v11 * (double)v11 + (double)(v9 - v7) * (double)(v9 - v7)); /*0x71a81f*/
    if ( (int)Math::RoundToInt(v12) > g_abs_8871E0->? << 8 )
    {
      return (void **)FactoryClass::CompleteItem(this); /*0x71a841*/
    }
    else
    {
LABEL_10:
      v13 = (int **)*((char *)this + 17); /*0x71a84e*/
      WarpPerStep = 0; /*0x71a851*/
      if ( v13 ) /*0x71a855*/
        WarpPerStep = TemporalClass::GetWarpPerStep(v13, 1); /*0x71a85e*/
      v15 = (int *)*((char *)this + 9); /*0x71a860*/
      v16 = *v15; /*0x71a864*/
      v17 = (*(int (**)(int *, unsigned int))(*v15 + 740))(v15, 0); /*0x71a866*/
      v18 = (*(int (**)(unsigned int, int))(v16 + 1016))(*((char *)this + 9), v17); /*0x71a870*/
      v19 = *((char *)this + 18); /*0x71a878*/
      v20 = *(unsigned int *)(*(unsigned int *)v18 + 164); /*0x71a87b*/
      *((char *)this + 19) = v20; /*0x71a881*/
      result = (void **)(v19 - (WarpPerStep + v20)); /*0x71a888*/
      *((char *)this + 18) = (int)result; /*0x71a88a*/
      if ( (int)result <= 0 )
      {
        if ( *((char *)this + 10) ) /*0x71a895*/
        {
          result = (void **)RA2_OPNEW(0x1C8u); /*0x71a8c2*/
          if ( result ) /*0x71a8cc*/
          {
            v22 = (int *)(*((char *)this + 10) + 156); /*0x71a8d2*/
            v40 = *v22; /*0x71a8e3*/
            v41 = v22[1]; /*0x71a8ea*/
            v42 = v22[2]; /*0x71a8f6*/
            result = AnimClass::ctor(result, (void *)g_abs_8871E0->?[1], &v40, 0, 1, (void *)0x600, 0, 0); /*0x71a909*/
          }
        }
        else
        {
          v21 = *((char *)this + 9); /*0x71a89a*/
          *((char *)this + 10) = 0; /*0x71a89d*/
          *((char *)this + 17) = 0; /*0x71a8a2*/
          *((char *)this + 16) = 0; /*0x71a8a5*/
          *((char *)this + 15) = 0; /*0x71a8a8*/
          *((char *)this + 14) = 0; /*0x71a8ab*/
          if ( v21 ) /*0x71a8ae*/
            result = (void **)(*(int (**)(int, unsigned int, int))(*(unsigned int *)v21 + 1156))(v21, 0, 1); /*0x71a8b5*/
        }
        if ( *((char *)this + 10) )
        {
          if ( *(unsigned char *)((*(int (**)(unsigned int))(*(unsigned int *)*((char *)this + 9) + 132))(*((char *)this + 9)) + 3214) ) /*0x71a922*/
          {
            v23 = (*(int (**)(unsigned int))(*(unsigned int *)*((char *)this + 10) + 132))(*((char *)this + 10)); /*0x71a938*/
            v24 = (*(int (**)(unsigned int))(*(unsigned int *)*((char *)this + 9) + 132))(*((char *)this + 9)); /*0x71a944*/
            v39 = *(unsigned int *)(*((char *)this + 10) + 540); /*0x71a94f*/
            v25 = (*(int (**)(int))(*(unsigned int *)v23 + 132))(v23); /*0x71a952*/
            v26 = (*(int (**)(int, unsigned int, int))(*(unsigned int *)v24 + 132))( /*0x71a968*/
                    v24,
                    *(unsigned int *)(*((char *)this + 9) + 540),
                    v25);
            VeterancyStruct::Accumulate((float *)(*((char *)this + 9) + 336), v26, v39); /*0x71a978*/
          }
          if ( (*(int (**)(unsigned int))(*(unsigned int *)*((char *)this + 10) + 44))(*((char *)this + 10)) == 6 )
          {
            v27 = (unsigned int *)*((char *)this + 10); /*0x71a98e*/
            if ( v27 ) /*0x71a993*/
            {
              if ( (*(int (**)(unsigned int))(*v27 + 1032))(*((char *)this + 10)) > 0 ) /*0x71a9a2*/
                BuildingClass::AnimateUnloadUnits(v27, 0); /*0x71a9a7*/
              if ( !g_abs_A8E7AC && v27[70] ) /*0x71a9b4*/
              {
                do /*0x71a9d6*/
                {
                  v28 = LinkedList::Pop(v27 + 69); /*0x71a9c4*/
                  if ( v28 ) /*0x71a9cb*/
                    (*(void (**)(int, int))(*(unsigned int *)v28 + 32))(v28, 1); /*0x71a9d3*/
                }
                while ( v27[70] ); /*0x71a9d6*/
              }
            }
            v29 = *((char *)this + 15); /*0x71a9de*/
            if ( v29 ) /*0x71a9e3*/
            {
              SuperClass::SetOnHold(v29, 0); /*0x71a9e6*/
              *((char *)this + 15) = 0; /*0x71a9eb*/
            }
            v30 = (unsigned int *)*((char *)this + 10); /*0x71a9ee*/
            if ( v30[185] )
            {
              if ( v30 )
                v31 = (*(int (**)(unsigned int))(*v30 + 44))(*((char *)this + 10)) == 6 ? v30 : 0;
              else
                v31 = 0; /*0x71a9fd*/
              BuildingClass::RemoveLimpet(v31); /*0x71aa15*/
            }
            v32 = *(unsigned int **)(*((char *)this + 10) + 728); /*0x71aa1d*/
            if ( v32 ) /*0x71aa25*/
              TechnoClass::MutateAll(v32, *((char *)this + 9), 0); /*0x71aa2c*/
            (*(void (**)(unsigned int, unsigned int))(*(unsigned int *)*((char *)this + 10) + 952))(*((char *)this + 10), *((char *)this + 9)); /*0x71aa3a*/
            (*(void (**)(unsigned int, unsigned int))(*(unsigned int *)*((char *)this + 10) + 224))(*((char *)this + 10), *((char *)this + 9)); /*0x71aa49*/
            result = (void **)(*(int (**)(unsigned int))(*(unsigned int *)*((char *)this + 10) + 248))(*((char *)this + 10)); /*0x71aa54*/
            *(unsigned char *)(v27[135] + 508) = 1; /*0x71aa60*/
          }
          else
          {
            v33 = *((char *)this + 10); /*0x71aa69*/
            v34 = *(unsigned int *)(v33 + 740); /*0x71aa6c*/
            if ( v34 )
            {
              v35 = (*(int (**)(unsigned int))(*(unsigned int *)v34 + 44))(*(unsigned int *)(v33 + 740)) == 6 ? (int *)v34 : 0;
              BuildingClass::UpdateDamageAnim(v35); /*0x71aa90*/
            }
            v36 = *(unsigned int **)(*((char *)this + 10) + 728); /*0x71aa98*/
            if ( v36 ) /*0x71aaa0*/
              TechnoClass::MutateAll(v36, *((char *)this + 9), 0); /*0x71aaa7*/
            (*(void (**)(unsigned int, unsigned int))(*(unsigned int *)*((char *)this + 10) + 952))(*((char *)this + 10), *((char *)this + 9)); /*0x71aab5*/
            (*(void (**)(unsigned int, unsigned int))(*(unsigned int *)*((char *)this + 10) + 224))(*((char *)this + 10), *((char *)this + 9)); /*0x71aac4*/
            result = (void **)(*(int (**)(unsigned int))(*(unsigned int *)*((char *)this + 10) + 248))(*((char *)this + 10)); /*0x71aacf*/
          }
          v37 = *((char *)this + 9); /*0x71aad5*/
          if ( v37 ) /*0x71aada*/
            result = (void **)(*(int (**)(int, unsigned int, int))(*(unsigned int *)v37 + 1156))(v37, 0, 1); /*0x71aae1*/
        }
        v38 = *((char *)this + 9); /*0x71aae7*/
        *((char *)this + 10) = 0; /*0x71aaea*/
        *((char *)this + 17) = 0; /*0x71aaef*/
        *((char *)this + 16) = 0; /*0x71aaf2*/
        *((char *)this + 15) = 0; /*0x71aaf5*/
        *((char *)this + 14) = 0; /*0x71aaf8*/
        if ( v38 ) /*0x71aafb*/
          return (void **)(*(int (**)(int, unsigned int, int))(*(unsigned int *)v38 + 1156))(v38, 0, 1); /*0x71ab02*/
      }
    }
  }
  return result; /*0x71a795*/

}
} // namespace ra2

// 0x71AB10
namespace gamemd {
void TemporalClass::GetWarpPerStep( int a2)
{

  int * WarpPerStep;
  int *v4; // ecx
  int v5; // edi
  int v6; // eax
  int *v7; // eax

  WarpPerStep = (int *)(0);
  if ( *(this + 17) && a2 <= 50 ) /*0x71ab25*/
    WarpPerStep = TemporalClass::GetWarpPerStep(a2 + 1); /*0x71ab2e*/
  v4 = *(this + 9); /*0x71ab30*/
  v5 = *v4; /*0x71ab35*/
  v6 = (*(int (**)(int *, unsigned int))(*v4 + 740))(v4, 0); /*0x71ab37*/
  v7 = *(int **)(*(unsigned int *)(*(int (**)(unsigned int, int))(v5 + 1016))(*(this + 9), v6) + 164); /*0x71ab4a*/
  *(this + 19) = v7; /*0x71ab50*/
  return (int)v7 + WarpPerStep; /*0x71ab49*/

}
} // namespace ra2

// 0x71B1B0
namespace gamemd {
void * TemporalClass::ProcessEvent(unsigned int * Block, char a2)
{

  int v3; // eax
  unsigned int *v5; // [esp+4h] [ebp-4h] BYREF

  *Block = (unsigned int)(&vt_TemporalClass);
  *(Block + 1) = &vt_TemporalClass; /*0x71b1c3*/
  *(Block + 2) = &vt_TemporalClass; /*0x71b1ca*/
  *(Block + 3) = &vt_TemporalClass; /*0x71b1d1*/
  v5 = Block; /*0x71b1df*/
  v3 = (*(int (**)(int *, unsigned int **))(g_abs_B0EC60 + 16))(&g_abs_B0EC60, &v5); /*0x71b1e3*/
  if ( v3 != -1 && v3 < (int)((int))((int))(g_abs_B0EC70) && v3 < --g_abs_B0EC70 ) /*0x71b1fe*/
  {
    do /*0x71b216*/
    {
      ++v3; /*0x71b206*/
      *((unsigned int *)g_abs_B0EC64 + v3 - 1) = *((unsigned int *)g_abs_B0EC64 + v3); /*0x71b20a*/
    }
    while ( v3 < (int)((int))((int))(g_abs_B0EC70) ); /*0x71b216*/
  }
  AbstractClass::DTOR(Block); /*0x71b21a*/
  if ( ((unsigned int)(Block)& 1) != 0 ) /*0x71b224*/
    RA2_OPDEL(Block); /*0x71b227*/
  return (TemporalClass *)Block; /*0x71b231*/

}
} // namespace ra2

// 0x71A650
namespace gamemd {
int TemporalClass::SetTarget(AbstractClass * aP1)
{

  return AbstractClass::ProcessPower((void *)this); /*0x71a65a*/

}
} // namespace gamemd

// 0x71A660
namespace gamemd {
int TemporalClass::LoadTemporal(AbstractClass * aP0, int aP1)
{

  AbstractClass *Prefix_0; // edi

  Prefix_0 = (AbstractClass *)((AbstractClass *)(aP0))->SaveLoad_Prefix_0((AbstractClass *)aP1); /*0x71a671*/
  if ( (int)Prefix_0 >= 0 ) /*0x71a675*/
  {
    if ( aP0 ) /*0x71a679*/
    {
      AbstractClass::InitVtables(aP0, (IUnknown *)&aP1); /*0x71a682*/
      *(unsigned int *)aP0->__pad_0 = &vt_TemporalClass; /*0x71a687*/
      *(unsigned int *)&aP0-((unsigned int *)(>__pad_0))[4] = &vt_TemporalClass; /*0x71a68d*/
      *(unsigned int *)&aP0-((unsigned int *)(>__pad_0))[8] = &vt_TemporalClass; /*0x71a694*/
      *(unsigned int *)&aP0-((unsigned int *)(>__pad_0))[12] = &vt_TemporalClass; /*0x71a69b*/
    }
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&stru_B05488.__pad_579C[5356], (MouseClass *)&aP0[1]); /*0x71a6ab*/
    ObjectPtr::RegisterForTracking( /*0x71a6b9*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[((unsigned int *)(1].__pad_0))[4]);
    ObjectPtr::RegisterForTracking( /*0x71a6c7*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[1].referenceCount);
    ObjectPtr::RegisterForTracking( /*0x71a6d5*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[1].NeedsSaveOrLink);
    ObjectPtr::RegisterForTracking( /*0x71a6e3*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[1].abstractFlags);
    ObjectPtr::RegisterForTracking( /*0x71a6f1*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[1].nextArrayIndex);
  }
  return (int)Prefix_0->__pad_0; /*0x71a6f8*/

}
} // namespace gamemd

// 0x71A700
namespace gamemd {
int TemporalClass::SaveTemporal(TechnoTypeClass * aP0, int * a1, int aP2)
{

  return AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2); /*0x71a714*/

}
} // namespace gamemd

// 0x71A720
namespace gamemd {
int TemporalClass::ddtor(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x71a726*/
    return -2147467261; /*0x71a728*/
  *a2 = -1810815964; /*0x71a736*/
  a2[1] = 299099139; /*0x71a73e*/
  a2[2] = 1342205582; /*0x71a747*/
  a2[3] = -72177148; /*0x71a750*/
  return 0; /*0x71a72d*/

}
} // namespace gamemd

// 0x71AE50
namespace gamemd {
char TemporalClass::CanWarpTarget(unsigned int * a1)
{

  int Member; // eax
  unsigned int *v3; // edi
  unsigned int *v4; // eax
  unsigned int v5[3]; // [esp+8h] [ebp-Ch] BYREF

  if ( !a1 ) /*0x71ae5b*/
    return 0; /*0x71ae5e*/
  if ( !*(unsigned char *)((*(int (**)(unsigned int *))(*a1 + 132))(a1) + 3386) ) /*0x71ae71*/
    return 0; /*0x71ae7c*/
  if ( (*(uint8_t (**)(unsigned int *))(*a1 + 352))(a1) ) /*0x71ae89*/
    return 0; /*0x71ae94*/
  if ( (*(int (**)(unsigned int *))(*a1 + 44))(a1) == 1 ) /*0x71aea7*/
  {
    Member = Team::GetMember(a1, 0); /*0x71aead*/
    v3 = (unsigned int *)Member; /*0x71aeb2*/
    if ( Member ) /*0x71aeb6*/
    {
      if ( (*(int (**)(int))(*(unsigned int *)Member + 44))(Member) == 6 ) /*0x71aec2*/
      {
        if ( *(unsigned char *)(v3[328] + 5821) ) /*0x71aeca*/
        {
          v5[0] = a1[39]; /*0x71aedc*/
          v5[1] = a1[40]; /*0x71aeed*/
          v5[2] = a1[41]; /*0x71aef4*/
          v4 = Coord::To_Cell(&g_abs_87F7E8, v5); /*0x71aef8*/
          if ( Cell::IsBridge(v4) == v3 ) /*0x71af06*/
            return 0; /*0x71af09*/
        }
      }
    }
  }
  return 1; /*0x71ae5d*/

}
} // namespace gamemd
