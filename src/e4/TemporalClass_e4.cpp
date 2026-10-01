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
#include "e4/classes/Float_e4.hpp"
#include "e4/classes/SuperClass_e4.hpp"
#include "e4/classes/TagClass_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/Conditions_e4.hpp"
#include "e4/classes/MessageListClass_e4.hpp"

// 0x71A450
namespace gamemd {
int TemporalClass::Constructor(void *a1, void *a2, void *a3)
{

  int v2; // eax
  int v3; // eax

  ((AbstractClass *)((AbstractClass *)this))->Constructor(); /*0x71a453*/
  v2 = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x71a458*/
  this->TemporalClass_field_34 = 0; /*0x71a45d*/
  *(unsigned int *)&this->__pad_28[4] = v2; /*0x71a464*/
  this->AbstractClass = &vt_TemporalClass; /*0x71a467*/
  ((unsigned int *)this)[0] = (unsigned int)(&vt_TemporalClass); /*0x71a46d*/
  ((unsigned int *)this)[0] = (unsigned int)(&vt_TemporalClass); /*0x71a474*/
  ((unsigned int *)this)[0] = (unsigned int)(&vt_TemporalClass); /*0x71a47b*/
  if ( *((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 0)) < *((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 5)) /*0x71a4b7*/
    || (BYTE1(*((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 6))) || !((unsigned int *)&g_BuildingLoadQueue_Array)[5])
    && *((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 1)) > 0
    && (*(uint8_t (**)(int *, int, unsigned int))(*((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 3)) + 8))(
         &(unsigned int *)((char *)&g_BuildingLoadQueue_Array + 3),
         *((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 5)) + *((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 1)),
         0) )
  {
    v3 = *((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 0))++; /*0x71a4c4*/
    *(unsigned int *)(*((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 4)) + 4 * v3) = (unsigned int)(this); /*0x71a4d3*/
  }
  return (int)this; /*0x71a4d8*/

}
} // namespace ra2

// 0x71A4E0
namespace gamemd {
TemporalClass::TemporalClass(TechnoClass * aP1)
{

  int v3; // eax
  int v5; // [esp+Ch] [ebp-8h]

  AbstractClass::Constructor((AbstractClass *)this); /*0x71a4e7*/
  *(unsigned int *)&this->__pad_28[4] = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x71a4fb*/
  this->TemporalClass_field_34 = 0; /*0x71a4fe*/
  this->AbstractClass = &vt_TemporalClass; /*0x71a501*/
  ((unsigned int *)this)[0] = &vt_TemporalClass; /*0x71a507*/
  ((unsigned int *)this)[0] = &vt_TemporalClass; /*0x71a50e*/
  ((unsigned int *)this)[0] = &vt_TemporalClass; /*0x71a515*/
  this->creationFrame = aP1; /*0x71a51c*/
  *(unsigned int *)this->__pad_28 = 0; /*0x71a51f*/
  *(unsigned int *)&this->__pad_28[4] = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x71a529*/
  this->TemporalClass_field_30 = v5; /*0x71a52c*/
  this->TemporalClass_field_34 = 0; /*0x71a52f*/
  *((unsigned int *)this + 16) = 0; /*0x71a532*/
  *((unsigned int *)this + 17) = 0; /*0x71a535*/
  if ( *((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 0)) < *((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 5)) /*0x71a569*/
    || (BYTE1(*((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 6))) || !((unsigned int *)&g_BuildingLoadQueue_Array)[5])
    && *((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 1)) > 0
    && (*(uint8_t (**)(int *, int, unsigned int))(*((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 3)) + 8))(
         &(unsigned int *)((char *)&g_BuildingLoadQueue_Array + 3),
         *((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 5)) + *((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 1)),
         0) )
  {
    v3 = *((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 0))++; /*0x71a576*/
    *(unsigned int *)(*((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 4)) + 4 * v3) = this; /*0x71a585*/
  }
  *((unsigned int *)this + 18) = 0; /*0x71a588*/
  *((unsigned int *)this + 19) = 0; /*0x71a58b*/
  *((unsigned int *)this + 14) = 0; /*0x71a58e*/
  *((unsigned int *)this + 15) = 0; /*0x71a591*/
  return &this->AbstractClass; /*0x71a596*/

}
} // namespace ra2

// 0x71A760
namespace gamemd {
void ** TemporalClass::ProcessTimeWarp()
{

  double v1; // st7
  unsigned int *v3; // ecx
  void **result; // eax
  int creationFrame; // eax
  unsigned int *v6; // edi
  unsigned int *v7; // eax
  int v8; // ebp
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  TemporalClass *v14; // ecx
  int WarpPerStep; // ebp
  int v16; // ecx
  int v17; // edi
  int v18; // eax
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  int v22; // ecx
  int *v23; // ecx
  int v24; // edi
  int v25; // ebp
  int v26; // eax
  int v27; // eax
  int v28; // ebp
  int v29; // eax
  int v30; // ecx
  unsigned int *v31; // edi
  BuildingClass *v32; // eax
  TechnoClass *v33; // ecx
  int v34; // edx
  int v35; // edi
  BuildingClass *v36; // eax
  TechnoClass *v37; // ecx
  int v38; // ecx
  int v39; // ecx
  int v40; // [esp+Ch] [ebp-38h]
  int v41; // [esp+20h] [ebp-24h] BYREF
  int v42; // [esp+24h] [ebp-20h]
  int v43; // [esp+28h] [ebp-1Ch]
  unsigned char v44[12]; // [esp+2Ch] [ebp-18h] BYREF
  unsigned char v45[12]; // [esp+38h] [ebp-Ch] BYREF

  v3 = *(unsigned int **)this->__pad_28; /*0x71a76b*/
  if ( v3 && (TemporalClass *)v3[158] == this && *((unsigned int *)this + 16) )
  {
    v3[158] = 0; /*0x71a77f*/
    *(unsigned char *)(*(unsigned int *)this->__pad_28 + 624) = 0; /*0x71a78a*/
    return (void **)TagClass::Unlink((TagClass *)this); /*0x71a790*/
  }
  else
  {
    creationFrame = (int)(this->creationFrame); /*0x71a79d*/
    if ( !creationFrame ) /*0x71a7a2*/
      goto LABEL_10; /*0x71a7a2*/
    if ( !*(unsigned char *)(creationFrame + 130) ) /*0x71a7a8*/
      goto LABEL_10; /*0x71a7a8*/
    if ( !v3 ) /*0x71a7b6*/
      goto LABEL_10; /*0x71a7b6*/
    v6 = (unsigned int *)(*(int (**)(unsigned int *, unsigned char *))(*v3 + 72))(v3, v44); /*0x71a7c9*/
    v7 = (unsigned int *)(*(int (**)(int, unsigned char *))(*(unsigned int *)this->creationFrame + 72))(this->creationFrame, v45); /*0x71a7d2*/
    v8 = v6[1]; /*0x71a7d9*/
    v9 = *v7 - *v6; /*0x71a7dc*/
    v10 = v7[1]; /*0x71a7de*/
    v11 = v7[2]; /*0x71a7e1*/
    v41 = v9; /*0x71a7e4*/
    v12 = v11 - v6[2]; /*0x71a7ed*/
    v42 = v10 - v8; /*0x71a7ef*/
    v43 = v12; /*0x71a7f3*/
    Math::Sqrt((double)v9 * (double)v9 + (double)v12 * (double)v12 + (double)(v10 - v8) * (double)(v10 - v8)); /*0x71a81f*/
    LOWORD(v13) = Math::RoundToInt(v1); /*0x71a827*/
    if ( v13 > *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 3936) << 8 )
    {
      return (void **)FactoryClass::CompleteItem((FactoryClass *)this); /*0x71a841*/
    }
    else
    {
LABEL_10:
      v14 = (TemporalClass *)*((unsigned int *)this + 17); /*0x71a84e*/
      WarpPerStep = 0; /*0x71a851*/
      if ( v14 ) /*0x71a855*/
        WarpPerStep = TemporalClass::GetWarpPerStep(v14, 1); /*0x71a85e*/
      v16 = (int)(this->creationFrame); /*0x71a860*/
      v17 = *(unsigned int *)v16; /*0x71a864*/
      v18 = (*(int (**)(int, unsigned int))(*(unsigned int *)v16 + 740))(v16, 0); /*0x71a866*/
      v19 = (*(int (**)(int, int))(v17 + 1016))(this->creationFrame, v18); /*0x71a870*/
      v20 = *((unsigned int *)this + 18); /*0x71a878*/
      v21 = *(unsigned int *)(*(unsigned int *)v19 + 164); /*0x71a87b*/
      *((unsigned int *)this + 19) = v21; /*0x71a881*/
      result = (void **)(v20 - (WarpPerStep + v21)); /*0x71a888*/
      *((unsigned int *)this + 18) = (unsigned int)(result); /*0x71a88a*/
      if ( (int)result <= 0 )
      {
        if ( *(unsigned int *)this->__pad_28 ) /*0x71a895*/
        {
          result = (void **)__2_YAPAXI_Z(0x1C8u); /*0x71a8c2*/
          if ( result ) /*0x71a8cc*/
          {
            v23 = (int *)(*(unsigned int *)this->__pad_28 + 156); /*0x71a8d2*/
            v41 = *v23; /*0x71a8e3*/
            v42 = v23[1]; /*0x71a8ea*/
            v43 = v23[2]; /*0x71a8f6*/
            result = AnimClass::ctor( /*0x71a909*/
                       (AnimClass *)result,
                       *(void **)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 832),
                       &v41,
                       0,
                       1,
                       (void *)0x600,
                       0,
                       0);
          }
        }
        else
        {
          v22 = (int)(this->creationFrame); /*0x71a89a*/
          *(unsigned int *)this->__pad_28 = 0; /*0x71a89d*/
          *((unsigned int *)this + 17) = 0; /*0x71a8a2*/
          *((unsigned int *)this + 16) = 0; /*0x71a8a5*/
          *((unsigned int *)this + 15) = 0; /*0x71a8a8*/
          *((unsigned int *)this + 14) = 0; /*0x71a8ab*/
          if ( v22 ) /*0x71a8ae*/
            result = (void **)(*(int (**)(int, unsigned int, int))(*(unsigned int *)v22 + 1156))(v22, 0, 1); /*0x71a8b5*/
        }
        if ( *(unsigned int *)this->__pad_28 )
        {
          if ( *(unsigned char *)((*(int (**)(int))(*(unsigned int *)this->creationFrame + 132))(this->creationFrame) + 3214) ) /*0x71a922*/
          {
            v24 = (*(int (**)(unsigned int))(**(unsigned int **)this->__pad_28 + 132))(*(unsigned int *)this->__pad_28); /*0x71a938*/
            v25 = (*(int (**)(int))(*(unsigned int *)this->creationFrame + 132))(this->creationFrame); /*0x71a944*/
            v40 = *(unsigned int *)(*(unsigned int *)this->__pad_28 + 540); /*0x71a94f*/
            v26 = (*(int (**)(int))(*(unsigned int *)v24 + 132))(v24); /*0x71a952*/
            v27 = (*(int (**)(int, unsigned int, int))(*(unsigned int *)v25 + 132))( /*0x71a968*/
                    v25,
                    *(unsigned int *)(this->creationFrame + 540),
                    v26);
            HouseClass::AccumulateScore((int *)(this->creationFrame + 336), v27, v40); /*0x71a978*/
          }
          if ( (*(int (**)(unsigned int))(**(unsigned int **)this->__pad_28 + 44))(*(unsigned int *)this->__pad_28) == 6 )
          {
            v28 = *(unsigned int *)this->__pad_28; /*0x71a98e*/
            if ( v28 ) /*0x71a993*/
            {
              if ( (*(int (**)(unsigned int))(*(unsigned int *)v28 + 1032))(*(unsigned int *)this->__pad_28) > 0 ) /*0x71a9a2*/
                BuildingClass::AnimateUnloadUnits((BuildingClass *)v28, 0); /*0x71a9a7*/
              if ( !dword_A8E7AC && *(unsigned int *)(v28 + 280) ) /*0x71a9b4*/
              {
                do /*0x71a9d6*/
                {
                  v29 = LinkedList::Pop((LinkedList *)(v28 + 276)); /*0x71a9c4*/
                  if ( v29 ) /*0x71a9cb*/
                    (*(void (**)(int, int))(*(unsigned int *)v29 + 32))(v29, 1); /*0x71a9d3*/
                }
                while ( *(unsigned int *)(v28 + 280) ); /*0x71a9d6*/
              }
            }
            v30 = *((unsigned int *)this + 15); /*0x71a9de*/
            if ( v30 ) /*0x71a9e3*/
            {
              SuperClass::SetOnHold(v30, 0); /*0x71a9e6*/
              *((unsigned int *)this + 15) = 0; /*0x71a9eb*/
            }
            v31 = *(unsigned int **)this->__pad_28; /*0x71a9ee*/
            if ( v31[185] )
            {
              if ( v31 )
                v32 = (*(int (**)(unsigned int))(*v31 + 44))(*(unsigned int *)this->__pad_28) == 6
                    ? (BuildingClass *)v31
                    : 0;
              else
                v32 = 0; /*0x71a9fd*/
              BuildingClass::RemoveLimpet(v32); /*0x71aa15*/
            }
            v33 = *(TechnoClass **)(*(unsigned int *)this->__pad_28 + 728); /*0x71aa1d*/
            if ( v33 ) /*0x71aa25*/
              TechnoClass::MutateAll(v33, this->creationFrame, 0); /*0x71aa2c*/
            (*(void (**)(unsigned int, int))(**(unsigned int **)this->__pad_28 + 952))( /*0x71aa3a*/
              *(unsigned int *)this->__pad_28,
              this->creationFrame);
            (*(void (**)(unsigned int, int))(**(unsigned int **)this->__pad_28 + 224))( /*0x71aa49*/
              *(unsigned int *)this->__pad_28,
              this->creationFrame);
            result = (void **)(*(int (**)(unsigned int))(**(unsigned int **)this->__pad_28 + 248))(*(unsigned int *)this->__pad_28); /*0x71aa54*/
            *(unsigned char *)(*(unsigned int *)(v28 + 540) + 508) = 1; /*0x71aa60*/
          }
          else
          {
            v34 = *(unsigned int *)this->__pad_28; /*0x71aa69*/
            v35 = *(unsigned int *)(v34 + 740); /*0x71aa6c*/
            if ( v35 )
            {
              v36 = (*(int (**)(unsigned int))(*(unsigned int *)v35 + 44))(*(unsigned int *)(v34 + 740)) == 6
                  ? (BuildingClass *)v35
                  : 0;
              BuildingClass::UpdateDamageAnim(v36); /*0x71aa90*/
            }
            v37 = *(TechnoClass **)(*(unsigned int *)this->__pad_28 + 728); /*0x71aa98*/
            if ( v37 ) /*0x71aaa0*/
              TechnoClass::MutateAll(v37, this->creationFrame, 0); /*0x71aaa7*/
            (*(void (**)(unsigned int, int))(**(unsigned int **)this->__pad_28 + 952))( /*0x71aab5*/
              *(unsigned int *)this->__pad_28,
              this->creationFrame);
            (*(void (**)(unsigned int, int))(**(unsigned int **)this->__pad_28 + 224))( /*0x71aac4*/
              *(unsigned int *)this->__pad_28,
              this->creationFrame);
            result = (void **)(*(int (**)(unsigned int))(**(unsigned int **)this->__pad_28 + 248))(*(unsigned int *)this->__pad_28); /*0x71aacf*/
          }
          v38 = (int)(this->creationFrame); /*0x71aad5*/
          if ( v38 ) /*0x71aada*/
            result = (void **)(*(int (**)(int, unsigned int, int))(*(unsigned int *)v38 + 1156))(v38, 0, 1); /*0x71aae1*/
        }
        v39 = (int)(this->creationFrame); /*0x71aae7*/
        *(unsigned int *)this->__pad_28 = 0; /*0x71aaea*/
        *((unsigned int *)this + 17) = 0; /*0x71aaef*/
        *((unsigned int *)this + 16) = 0; /*0x71aaf2*/
        *((unsigned int *)this + 15) = 0; /*0x71aaf5*/
        *((unsigned int *)this + 14) = 0; /*0x71aaf8*/
        if ( v39 ) /*0x71aafb*/
          return (*(void **(**)(int, unsigned int, int))(*(unsigned int *)v39 + 1156))(v39, 0, 1); /*0x71ab02*/
      }
    }
  }
  return result; /*0x71a795*/

}
} // namespace ra2

// 0x71AB10
namespace gamemd {
int TemporalClass::GetWarpPerStep(int a2, void *a2_2)
{

  int WarpPerStep; // ebx
  TemporalClass *v4; // ecx
  int creationFrame; // ecx
  int v6; // edi
  int v7; // eax
  int v8; // eax

  WarpPerStep = 0; /*0x71ab14*/
  v4 = (TemporalClass *)*((unsigned int *)this + 17); /*0x71ab17*/
  if ( v4 && a2 <= 50 ) /*0x71ab25*/
    WarpPerStep = TemporalClass::GetWarpPerStep(v4, a2 + 1); /*0x71ab2e*/
  creationFrame = (int)(this->creationFrame); /*0x71ab30*/
  v6 = *(unsigned int *)creationFrame; /*0x71ab35*/
  v7 = (*(int (**)(int, unsigned int))(*(unsigned int *)creationFrame + 740))(creationFrame, 0); /*0x71ab37*/
  v8 = *(unsigned int *)(*(unsigned int *)(*(int (**)(int, int))(v6 + 1016))(this->creationFrame, v7) + 164); /*0x71ab4a*/
  *((unsigned int *)this + 19) = v8; /*0x71ab50*/
  return WarpPerStep + v8; /*0x71ab49*/

}
} // namespace ra2

// 0x71B1B0
namespace gamemd {
void * TemporalClass::ProcessEvent(unsigned int * Block, char a2)
{

  int v3; // eax
  TemporalClass *v5; // [esp+4h] [ebp-4h] BYREF

  Block->AbstractClass = &vt_TemporalClass; /*0x71b1bd*/
  ((unsigned int *)Block)[0] = &vt_TemporalClass; /*0x71b1c3*/
  ((unsigned int *)Block)[0] = &vt_TemporalClass; /*0x71b1ca*/
  ((unsigned int *)Block)[0] = &vt_TemporalClass; /*0x71b1d1*/
  v5 = Block; /*0x71b1df*/
  v3 = (*(int (**)(int *, TemporalClass **))(*((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 3)) + 16))( /*0x71b1e3*/
         &(unsigned int *)((char *)&g_BuildingLoadQueue_Array + 3),
         &v5);
  if ( v3 != -1 && v3 < *((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 0)) ) /*0x71b1f3*/
  {
    --((unsigned int *)&g_BuildingLoadQueue_Array)[0]; /*0x71b1f8*/
    for ( ; /*0x71b1fe*/
          v3 < *((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 0));
          *(unsigned int *)(*((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 4)) + 4 * v3 - 4) = *(unsigned int *)(*((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 4)) + 4 * v3) )
    {
      ++v3; /*0x71b206*/
    }
  }
  AbstractClass::DTOR((AbstractClass *)Block); /*0x71b21a*/
  if ( (a2 & 1) != 0 ) /*0x71b224*/
    __3_YAXPAX_Z(Block); /*0x71b227*/
  return &Block->AbstractClass; /*0x71b231*/

}
} // namespace ra2

// 0x71A650
namespace gamemd {
int TemporalClass::SetTarget(AbstractClass * aP1)
{

  return AbstractClass::ProcessPower((AbstractClass *)this); /*0x71a65a*/

}
} // namespace gamemd

// 0x71A660
namespace gamemd {
int TemporalClass::LoadTemporal(AbstractClass * aP0, int aP1)
{

  int Prefix_0; // edi

  Prefix_0 = AbstractClass::SaveLoad_Prefix_0(aP0, aP1); /*0x71a671*/
  if ( Prefix_0 >= 0 ) /*0x71a675*/
  {
    if ( aP0 ) /*0x71a679*/
    {
      AbstractClass::InitVtables((AbstractClass *)aP0, (int)&aP1); /*0x71a682*/
      aP0->AbstractClass = &vt_TemporalClass; /*0x71a687*/
      ((unsigned int *)aP0)[0] = &vt_TemporalClass; /*0x71a68d*/
      ((unsigned int *)aP0)[0] = &vt_TemporalClass; /*0x71a694*/
      ((unsigned int *)aP0)[0] = &vt_TemporalClass; /*0x71a69b*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &aP0->creationFrame); /*0x71a6ab*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)aP0->__pad_28); /*0x71a6b9*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)aP0 + 16); /*0x71a6c7*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)aP0 + 17); /*0x71a6d5*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)aP0 + 14); /*0x71a6e3*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)aP0 + 15); /*0x71a6f1*/
  }
  return Prefix_0; /*0x71a6f8*/

}
} // namespace gamemd

// 0x71A700
namespace gamemd {
int TemporalClass::SaveTemporal(TechnoTypeClass * aP0, int * a1, int aP2)
{

  return AbstractClass::SaveLoad_Prefix((int *)aP0, a1, aP2); /*0x71a714*/

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
  a2[3] = unk_7E98DC; /*0x71a750*/
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
          v4 = Coord::To_Cell(&dword_87F7E8, v5); /*0x71aef8*/
          if ( Cell::IsBridge(v4) == v3 ) /*0x71af06*/
            return 0; /*0x71af09*/
        }
      }
    }
  }
  return 1; /*0x71ae5d*/

}
} // namespace gamemd
