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

// 0x71A450
namespace gamemd {
int TemporalClass::Constructor()
{
  int v2; // eax
  int v3; // eax

  AbstractClass::Constructor(); /*0x71a453*/
  v2 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x71a458*/
  this->TemporalClass_field_34 = 0; /*0x71a45d*/
  *(_DWORD *)&this->__pad_28[4] = v2; /*0x71a464*/
  this->AbstractClass = &(void*)(void*)&TemporalClass_vftable; /*0x71a467*/
  this->? = &(void*)(void*)&TemporalClass_vftable; /*0x71a46d*/
  this->? = &(void*)(void*)&TemporalClass_vftable; /*0x71a474*/
  this->? = &(void*)(void*)&TemporalClass_vftable; /*0x71a47b*/
  if ( g_BuildingLoadQueue_Array.?[0] < g_BuildingLoadQueue_Array.?[5] /*0x71a4b7*/
    || (IDA_BYTE1(g_BuildingLoadQueue_Array.?[6]) || !g_BuildingLoadQueue_Array.?[5])
    && g_BuildingLoadQueue_Array.?[1] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.?[3] + 8))(
         &g_BuildingLoadQueue_Array.?[3],
         g_BuildingLoadQueue_Array.?[5] + g_BuildingLoadQueue_Array.?[1],
         0) )
  {
    v3 = g_BuildingLoadQueue_Array.?[0]++; /*0x71a4c4*/
    *(_DWORD *)(g_BuildingLoadQueue_Array.?[4] + 4 * v3) = this; /*0x71a4d3*/
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

  AbstractClass::Constructor(); /*0x71a4e7*/
  *(_DWORD *)&this->__pad_28[4] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x71a4fb*/
  this->TemporalClass_field_34 = 0; /*0x71a4fe*/
  this->AbstractClass = &(void*)(void*)&TemporalClass_vftable; /*0x71a501*/
  this->? = &(void*)(void*)&TemporalClass_vftable; /*0x71a507*/
  this->? = &(void*)(void*)&TemporalClass_vftable; /*0x71a50e*/
  this->? = &(void*)(void*)&TemporalClass_vftable; /*0x71a515*/
  this->aP1 = aP1; /*0x71a51c*/
  *(_DWORD *)this->__pad_28 = 0; /*0x71a51f*/
  *(_DWORD *)&this->__pad_28[4] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x71a529*/
  this->TemporalClass_field_30 = v5; /*0x71a52c*/
  this->TemporalClass_field_34 = 0; /*0x71a52f*/
  this->uniqueId = 0; /*0x71a532*/
  this->q011 = 0; /*0x71a535*/
  if ( g_BuildingLoadQueue_Array.?[0] < g_BuildingLoadQueue_Array.?[5] /*0x71a569*/
    || (IDA_BYTE1(g_BuildingLoadQueue_Array.?[6]) || !g_BuildingLoadQueue_Array.?[5])
    && g_BuildingLoadQueue_Array.?[1] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.?[3] + 8))(
         &g_BuildingLoadQueue_Array.?[3],
         g_BuildingLoadQueue_Array.?[5] + g_BuildingLoadQueue_Array.?[1],
         0) )
  {
    v3 = g_BuildingLoadQueue_Array.?[0]++; /*0x71a576*/
    *(_DWORD *)(g_BuildingLoadQueue_Array.?[4] + 4 * v3) = this; /*0x71a585*/
  }
  this->u32_48 = 0; /*0x71a588*/
  this->IsAllocated = 0; /*0x71a58b*/
  this->u32_38 = 0; /*0x71a58e*/
  this->u32_3C = 0; /*0x71a591*/
  return &this->AbstractClass; /*0x71a596*/
}
} // namespace ra2

// 0x71A760
namespace gamemd {
void ** TemporalClass::ProcessTimeWarp()
{
  double v1; // st7
  _DWORD *v3; // ecx
  void **result; // eax
  int creationFrame; // eax
  _DWORD *v6; // edi
  _DWORD *v7; // eax
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
  _DWORD *v31; // edi
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
  _BYTE v44[12]; // [esp+2Ch] [ebp-18h] BYREF
  _BYTE v45[12]; // [esp+38h] [ebp-Ch] BYREF

  v3 = *(_DWORD **)this->__pad_28; /*0x71a76b*/
  if ( v3 && (TemporalClass *)v3[158] == this && this->uniqueId )
  {
    v3[158] = 0; /*0x71a77f*/
    *(_BYTE *)(*(_DWORD *)this->__pad_28 + 624) = 0; /*0x71a78a*/
    return (); /*0x71a790*/
  }
  else
  {
    creationFrame = this->creationFrame; /*0x71a79d*/
    if ( !creationFrame ) /*0x71a7a2*/
      goto LABEL_10; /*0x71a7a2*/
    if ( !this->u32_A6 ) /*0x71a7a8*/
      goto LABEL_10; /*0x71a7a8*/
    if ( !v3 ) /*0x71a7b6*/
      goto LABEL_10; /*0x71a7b6*/
    v6 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*v3 + 72))(v3, v44); /*0x71a7c9*/
    v7 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this->creationFrame + 72))(this->creationFrame, v45); /*0x71a7d2*/
    v8 = v6[1]; /*0x71a7d9*/
    v9 = *v7 - *v6; /*0x71a7dc*/
    v10 = v7[1]; /*0x71a7de*/
    v11 = v7[2]; /*0x71a7e1*/
    v41 = v9; /*0x71a7e4*/
    v12 = v11 - v6[2]; /*0x71a7ed*/
    v42 = v10 - v8; /*0x71a7ef*/
    v43 = v12; /*0x71a7f3*/
    Math::Sqrt((double)v9 * (double)v9 + (double)v12 * (double)v12 + (double)(v10 - v8) * (double)(v10 - v8)); /*0x71a81f*/
    IDA_LOWORD(v13) = Math::RoundToInt(v1); /*0x71a827*/
    if ( v13 > *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 3936) << 8 )
    {
      return (); /*0x71a841*/
    }
    else
    {
  LABEL_10:
      v14 = (TemporalClass *)this->q011; /*0x71a84e*/
      WarpPerStep = 0; /*0x71a851*/
      if ( v14 ) /*0x71a855*/
        WarpPerStep = TemporalClass::GetWarpPerStep(v14, 1); /*0x71a85e*/
      v16 = this->creationFrame; /*0x71a860*/
      v17 = *(_DWORD *)v16; /*0x71a864*/
      v18 = (*(int (__thiscall **)(int, _DWORD))(this->u32_308)(v16, 0); /*0x71a866*/
      v19 = (*(int (__thiscall **)(int, int))(v17 + 1016))(this->creationFrame, v18); /*0x71a870*/
      v20 = this->u32_48; /*0x71a878*/
      v21 = *(_DWORD *)(*(_DWORD *)v19 + 164); /*0x71a87b*/
      this->IsAllocated = v21; /*0x71a881*/
      result = (void **)(v20 - (WarpPerStep + v21)); /*0x71a888*/
      this->u32_48 = result; /*0x71a88a*/
      if ( (int)result <= 0 )
      {
        if ( *(_DWORD *)this->__pad_28 ) /*0x71a895*/
        {
          result = (void **)RA2_OPNEW(0x1C8u); /*0x71a8c2*/
          if ( result ) /*0x71a8cc*/
          {
            v23 = (int *)(*(_DWORD *)this->__pad_28 + 156); /*0x71a8d2*/
            v41 = *v23; /*0x71a8e3*/
            v42 = v23[1]; /*0x71a8ea*/
            v43 = v23[2]; /*0x71a8f6*/
            result = AnimClass::ctor( /*0x71a909*/
                       (AnimClass *)result,
                       *(void **)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 832),
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
          v22 = this->creationFrame; /*0x71a89a*/
          *(_DWORD *)this->__pad_28 = 0; /*0x71a89d*/
          this->q011 = 0; /*0x71a8a2*/
          this->uniqueId = 0; /*0x71a8a5*/
          this->u32_3C = 0; /*0x71a8a8*/
          this->u32_38 = 0; /*0x71a8ab*/
          if ( v22 ) /*0x71a8ae*/
            result = (void **)(*(int (__thiscall **)(int, _DWORD, int))(this->u32_4A8)(v22, 0, 1); /*0x71a8b5*/
        }
        if ( *(_DWORD *)this->__pad_28 )
        {
          if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)this->creationFrame + 132))(this->creationFrame) + 3214) ) /*0x71a922*/
          {
            v24 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)this->__pad_28 + 132))(*(_DWORD *)this->__pad_28); /*0x71a938*/
            v25 = (*(int (__thiscall **)(int))(*(_DWORD *)this->creationFrame + 132))(this->creationFrame); /*0x71a944*/
            v40 = *(_DWORD *)(*(_DWORD *)this->__pad_28 + 540); /*0x71a94f*/
            v26 = (*(int (__thiscall **)(int))(*(_DWORD *)v24 + 132))(v24); /*0x71a952*/
            v27 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v25 + 132))( /*0x71a968*/
                    v25,
                    *(_DWORD *)(this->creationFrame + 540),
                    v26);
            HouseClass::AccumulateScore((int *)(this->creationFrame + 336), v27, v40); /*0x71a978*/
          }
          if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)this->__pad_28 + 44))(*(_DWORD *)this->__pad_28) == 6 )
          {
            v28 = *(_DWORD *)this->__pad_28; /*0x71a98e*/
            if ( v28 ) /*0x71a993*/
            {
              if ( (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v28 + 1032))(*(_DWORD *)this->__pad_28) > 0 ) /*0x71a9a2*/
                BuildingClass::AnimateUnloadUnits((BuildingClass *)v28, 0); /*0x71a9a7*/
              if ( !dword_A8E7AC && *(_DWORD *)(v28 + 280) ) /*0x71a9b4*/
              {
                do /*0x71a9d6*/
                {
                  v29 = LinkedList::Pop((LinkedList *)(v28 + 276)); /*0x71a9c4*/
                  if ( v29 ) /*0x71a9cb*/
                    (*(void (__thiscall **)(int, int))(*(_DWORD *)v29 + 32))(v29, 1); /*0x71a9d3*/
                }
                while ( *(_DWORD *)(v28 + 280) ); /*0x71a9d6*/
              }
            }
            v30 = this->u32_3C; /*0x71a9de*/
            if ( v30 ) /*0x71a9e3*/
            {
              SuperClass::SetOnHold(v30, 0); /*0x71a9e6*/
              this->u32_3C = 0; /*0x71a9eb*/
            }
            v31 = *(_DWORD **)this->__pad_28; /*0x71a9ee*/
            if ( v31[185] )
            {
              if ( v31 )
                v32 = (*(int (__thiscall **)(_DWORD))(*v31 + 44))(*(_DWORD *)this->__pad_28) == 6
                    ? (BuildingClass *)v31
                    : 0;
              else
                v32 = 0; /*0x71a9fd*/
              BuildingClass::RemoveLimpet(v32); /*0x71aa15*/
            }
            v33 = *(TechnoClass **)(*(_DWORD *)this->__pad_28 + 728); /*0x71aa1d*/
            if ( v33 ) /*0x71aa25*/
              TechnoClass::MutateAll(v33, this->creationFrame, 0); /*0x71aa2c*/
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)this->__pad_28 + 952))( /*0x71aa3a*/
              *(_DWORD *)this->__pad_28,
              this->creationFrame);
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)this->__pad_28 + 224))( /*0x71aa49*/
              *(_DWORD *)this->__pad_28,
              this->creationFrame);
            result = (void **)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)this->__pad_28 + 248))(*(_DWORD *)this->__pad_28); /*0x71aa54*/
            *(_BYTE *)(*(_DWORD *)(v28 + 540) + 508) = 1; /*0x71aa60*/
          }
          else
          {
            v34 = *(_DWORD *)this->__pad_28; /*0x71aa69*/
            v35 = v34->spawnManager; /*0x71aa6c*/
            if ( v35 )
            {
              v36 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v35 + 44))(v34->spawnManager) == 6
                  ? (BuildingClass *)v35
                  : 0;
              BuildingClass::UpdateDamageAnim(v36); /*0x71aa90*/
            }
            v37 = *(TechnoClass **)(*(_DWORD *)this->__pad_28 + 728); /*0x71aa98*/
            if ( v37 ) /*0x71aaa0*/
              TechnoClass::MutateAll(v37, this->creationFrame, 0); /*0x71aaa7*/
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)this->__pad_28 + 952))( /*0x71aab5*/
              *(_DWORD *)this->__pad_28,
              this->creationFrame);
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)this->__pad_28 + 224))( /*0x71aac4*/
              *(_DWORD *)this->__pad_28,
              this->creationFrame);
            result = (void **)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)this->__pad_28 + 248))(*(_DWORD *)this->__pad_28); /*0x71aacf*/
          }
          v38 = this->creationFrame; /*0x71aad5*/
          if ( v38 ) /*0x71aada*/
            result = (void **)(*(int (__thiscall **)(int, _DWORD, int))(this->u32_4A8)(v38, 0, 1); /*0x71aae1*/
        }
        v39 = this->creationFrame; /*0x71aae7*/
        *(_DWORD *)this->__pad_28 = 0; /*0x71aaea*/
        this->q011 = 0; /*0x71aaef*/
        this->uniqueId = 0; /*0x71aaf2*/
        this->u32_3C = 0; /*0x71aaf5*/
        this->u32_38 = 0; /*0x71aaf8*/
        if ( v39 ) /*0x71aafb*/
          return (*(void **(__thiscall **)(int, _DWORD, int))(this->u32_4A8)(v39, 0, 1); /*0x71ab02*/
      }
    }
  }
  return result; /*0x71a795*/
}
} // namespace ra2

// 0x71AB10
namespace gamemd {
int TemporalClass::GetWarpPerStep(int a2)
{
  int WarpPerStep; // ebx
  TemporalClass *v4; // ecx
  int creationFrame; // ecx
  int v6; // edi
  int v7; // eax
  int v8; // eax

  WarpPerStep = 0; /*0x71ab14*/
  v4 = (TemporalClass *)this->q011; /*0x71ab17*/
  if ( v4 && a2 <= 50 ) /*0x71ab25*/
    WarpPerStep = TemporalClass::GetWarpPerStep(v4, a2 + 1); /*0x71ab2e*/
  creationFrame = this->creationFrame; /*0x71ab30*/
  v6 = *(_DWORD *)creationFrame; /*0x71ab35*/
  v7 = (*(int (__thiscall **)(int, _DWORD))(this->u32_308)(creationFrame, 0); /*0x71ab37*/
  v8 = *(_DWORD *)(*(_DWORD *)(*(int (__thiscall **)(int, int))(v6 + 1016))(this->creationFrame, v7) + 164); /*0x71ab4a*/
  this->IsAllocated = v8; /*0x71ab50*/
  return WarpPerStep + v8; /*0x71ab49*/
}
} // namespace ra2

// 0x71B1B0
namespace gamemd {
void * TemporalClass::ProcessEvent(char a2)
{
  int v3; // eax
  TemporalClass *v5; // [esp+4h] [ebp-4h] BYREF

  this->AbstractClass = &(void*)(void*)&TemporalClass_vftable; /*0x71b1bd*/
  this->? = &(void*)(void*)&TemporalClass_vftable; /*0x71b1c3*/
  this->? = &(void*)(void*)&TemporalClass_vftable; /*0x71b1ca*/
  this->? = &(void*)(void*)&TemporalClass_vftable; /*0x71b1d1*/
  v5 = this; /*0x71b1df*/
  v3 = (*(int (__thiscall **)(int *, TemporalClass **))(g_BuildingLoadQueue_Array.?[3] + 16))( /*0x71b1e3*/
         &g_BuildingLoadQueue_Array.?[3],
         &v5);
  if ( v3 != -1 && v3 < g_BuildingLoadQueue_Array.?[0] ) /*0x71b1f3*/
  {
    --g_BuildingLoadQueue_Array.?[0]; /*0x71b1f8*/
    for ( ; /*0x71b1fe*/
          v3 < g_BuildingLoadQueue_Array.?[0];
          *(_DWORD *)(g_BuildingLoadQueue_Array.?[4] + 4 * v3 - 4) = *(_DWORD *)(g_BuildingLoadQueue_Array.?[4] + 4 * v3) )
    {
      ++v3; /*0x71b206*/
    }
  }
  AbstractClass::DTOR(); /*0x71b21a*/
  if ( (a2 & 1) != 0 ) /*0x71b224*/
    RA2_OPDEL(); /*0x71b227*/
  return &this->AbstractClass; /*0x71b231*/
}
} // namespace ra2

// 0x71A650
namespace gamemd {
int TemporalClass::SetTarget(AbstractClass * aP1)
{
  return AbstractClass::ProcessPower(); /*0x71a65a*/
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
      aP0->AbstractClass = &(void*)(void*)&TemporalClass_vftable; /*0x71a687*/
      aP0->? = &(void*)(void*)&TemporalClass_vftable; /*0x71a68d*/
      aP0->? = &(void*)(void*)&TemporalClass_vftable; /*0x71a694*/
      aP0->? = &(void*)(void*)&TemporalClass_vftable; /*0x71a69b*/
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
  _DWORD *v3; // edi
  _DWORD *v4; // eax
  _DWORD v5[3]; // [esp+8h] [ebp-Ch] BYREF

  if ( !a1 ) /*0x71ae5b*/
    return 0; /*0x71ae5e*/
  if ( !*(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*a1 + 132))(a1) + 3386) ) /*0x71ae71*/
    return 0; /*0x71ae7c*/
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a1 + 352))(a1) ) /*0x71ae89*/
    return 0; /*0x71ae94*/
  if ( (*(int (__thiscall **)(_DWORD *))(*a1 + 44))(a1) == 1 ) /*0x71aea7*/
  {
    Member = Team::GetMember(a1, 0); /*0x71aead*/
    v3 = (_DWORD *)Member; /*0x71aeb2*/
    if ( Member ) /*0x71aeb6*/
    {
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)Member + 44))(Member) == 6 ) /*0x71aec2*/
      {
        if ( *(_BYTE *)(v3[328] + 5821) ) /*0x71aeca*/
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
