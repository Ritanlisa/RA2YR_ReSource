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

// 0x71A450
namespace gamemd {
int TemporalClass::Constructor()
{
  TemporalClass * v3;

  AbstractClass::Constructor(); /*0x71a453*/
  g_CurrentFrame = g_CurrentFrame; /*0x71a458*/
  this->TemporalClass_field_34 = 0; /*0x71a45d*/
  this->q02C = g_CurrentFrame; /*0x71a464*/
  if ( dword_B0EC70 < dword_B0EC68 /*0x71a4b7*/
    || (byte_B0EC6D || !dword_B0EC68)
    && dword_B0EC74 > 0
    && (*(uint8_t (__thiscall **)(int *, int, unsigned int))(dword_B0EC60 + 8))(
         &dword_B0EC60,
         dword_B0EC68 + dword_B0EC74,
         0) )
  {
    v3 = (gamemd::TemporalClass *)(dword_B0EC70++);
    *((unsigned int *)dword_B0EC64 + v3) = this; /*0x71a4d3*/
  }
  return (int)(this);
}
} // namespace ra2

// 0x71A4E0
namespace gamemd {
TemporalClass::TemporalClass(TechnoClass * aP1)
{
  TemporalClass * v3;
  int v5; // [esp+Ch] [ebp-8h]

  AbstractClass::Constructor(); /*0x71a4e7*/
  *(&this->vtable21) = g_CurrentFrame; /*0x71a4fb*/
  *(&this->vtable23) = 0; /*0x71a4fe*/
  this->creationFrame = aP1; /*0x71a51c*/
  *(&this->vtable20) = 0; /*0x71a51f*/
  *(&this->vtable21) = g_CurrentFrame; /*0x71a529*/
  *(&this->vtable22) = v5; /*0x71a52c*/
  *(&this->vtable23) = 0; /*0x71a52f*/
  *(&this->vtable26) = 0; /*0x71a532*/
  *(&this->vtable27) = 0; /*0x71a535*/
  if ( dword_B0EC70 < dword_B0EC68 /*0x71a569*/
    || (byte_B0EC6D || !dword_B0EC68)
    && dword_B0EC74 > 0
    && (*(uint8_t (__thiscall **)(int *, int, unsigned int))(dword_B0EC60 + 8))(
         &dword_B0EC60,
         dword_B0EC68 + dword_B0EC74,
         0) )
  {
    v3 = (gamemd::TemporalClass *)(dword_B0EC70++);
    *((unsigned int *)dword_B0EC64 + v3) = this; /*0x71a585*/
  }
  *(&this->vtable28) = 0; /*0x71a588*/
  *(&this->vtable29) = 0; /*0x71a58b*/
  *(&this->vtable24) = 0; /*0x71a58e*/
  *(&this->vtable25) = 0; /*0x71a591*/
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
  int * v15;
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

  v2 = (unsigned int *)*(&this->vtable20); /*0x71a76b*/
  if ( v2 && (int *)v2[158] == this && *(&this->vtable26) )
  {
    v2[158] = 0; /*0x71a77f*/
    *(unsigned char *)(*(&this->vtable20) + 624) = 0; /*0x71a78a*/
    return 0; /*0x71a790*/
  }
  else
  {
    v4 = this->creationFrame; /*0x71a79d*/
    if ( !v4 ) /*0x71a7a2*/
      goto LABEL_10; /*0x71a7a2*/
    if ( !*(unsigned char *)(v4 + 130) ) /*0x71a7a8*/
      goto LABEL_10; /*0x71a7a8*/
    if ( !v2 ) /*0x71a7b6*/
      goto LABEL_10; /*0x71a7b6*/
    v5 = (unsigned int *)(*(int (__thiscall **)(unsigned int *, unsigned char *))(*v2 + 72))(v2, v43); /*0x71a7c9*/
    v6 = (unsigned int *)(*(int (__thiscall **)(unsigned int, unsigned char *))(*(unsigned int *)this->creationFrame + 72))(this->creationFrame, v44); /*0x71a7d2*/
    v7 = v5[1]; /*0x71a7d9*/
    v8 = *v6 - *v5; /*0x71a7dc*/
    v9 = v6[1]; /*0x71a7de*/
    v10 = v6[2]; /*0x71a7e1*/
    v40 = v8; /*0x71a7e4*/
    v11 = v10 - v5[2]; /*0x71a7ed*/
    v41 = v9 - v7; /*0x71a7ef*/
    v42 = v11; /*0x71a7f3*/
    v12 = Math::Sqrt((double)v8 * (double)v8 + (double)v11 * (double)v11 + (double)(v9 - v7) * (double)(v9 - v7)); /*0x71a81f*/
    if ( (int)Math::RoundToInt(v12) > g_RulesClass_Instance->FireSupress << 8 )
    {
      return 0; /*0x71a841*/
    }
    else
    {
  LABEL_10:
      v13 = (int **)*(&this->vtable27); /*0x71a84e*/
      WarpPerStep = 0; /*0x71a851*/
      if ( v13 ) /*0x71a855*/
        WarpPerStep = TemporalClass::GetWarpPerStep(v13, 1); /*0x71a85e*/
      v15 = (int *)this->creationFrame; /*0x71a860*/
      v16 = *v15; /*0x71a864*/
      v17 = (*(int (__thiscall **)(int *, unsigned int))(*v15 + 740))(v15, 0); /*0x71a866*/
      v18 = (*(int (__thiscall **)(unsigned int, int))(v16 + 1016))(this->creationFrame, v17); /*0x71a870*/
      v19 = *(&this->vtable28); /*0x71a878*/
      v20 = *(unsigned int *)(*(unsigned int *)v18 + 164); /*0x71a87b*/
      *(&this->vtable29) = v20; /*0x71a881*/
      result = (void **)(v19 - (WarpPerStep + v20)); /*0x71a888*/
      *(&this->vtable28) = (int)result; /*0x71a88a*/
      if ( (int)result <= 0 )
      {
        if ( *(&this->vtable20) ) /*0x71a895*/
        {
          result = (void *)operator new(0x1C8u); /*0x71a8c2*/
          if ( result ) /*0x71a8cc*/
          {
            v22 = (int *)(*(&this->vtable20) + 156); /*0x71a8d2*/
            v40 = *v22; /*0x71a8e3*/
            v41 = v22[1]; /*0x71a8ea*/
            v42 = v22[2]; /*0x71a8f6*/
            result = AnimClass::ctor( /*0x71a909*/
                       result,
                       (void *)g_RulesClass_Instance->PrerequisiteTech[1],
                       &v40,
                       0,
                       1,
                       (void *)0x600,
                       0,
                       0);
          }
        }
        else
        {
          v21 = this->creationFrame; /*0x71a89a*/
          *(&this->vtable20) = 0; /*0x71a89d*/
          *(&this->vtable27) = 0; /*0x71a8a2*/
          *(&this->vtable26) = 0; /*0x71a8a5*/
          *(&this->vtable25) = 0; /*0x71a8a8*/
          *(&this->vtable24) = 0; /*0x71a8ab*/
          if ( v21 ) /*0x71a8ae*/
            result = (void **)(*(int (__thiscall **)(int, unsigned int, int))(*(unsigned int *)v21 + 1156))(v21, 0, 1); /*0x71a8b5*/
        }
        if ( *(&this->vtable20) )
        {
          if ( *(unsigned char *)((*(int (__thiscall **)(unsigned int))(*(unsigned int *)this->creationFrame + 132))(this->creationFrame) + 3214) ) /*0x71a922*/
          {
            v23 = (*(int (__thiscall **)(unsigned int))(*(unsigned int *)*(&this->vtable20) + 132))(*(&this->vtable20)); /*0x71a938*/
            v24 = (*(int (__thiscall **)(unsigned int))(*(unsigned int *)this->creationFrame + 132))(this->creationFrame); /*0x71a944*/
            v39 = *(unsigned int *)(*(&this->vtable20) + 540); /*0x71a94f*/
            v25 = (*(int (__thiscall **)(int))(*(unsigned int *)v23 + 132))(v23); /*0x71a952*/
            v26 = (*(int (__thiscall **)(int, unsigned int, int))(*(unsigned int *)v24 + 132))( /*0x71a968*/
                    v24,
                    *(unsigned int *)(this->creationFrame + 540),
                    v25);
            HouseClass::AccumulateScore((float *)(this->creationFrame + 336), v26, v39); /*0x71a978*/
          }
          if ( (*(int (__thiscall **)(unsigned int))(*(unsigned int *)*(&this->vtable20) + 44))(*(&this->vtable20)) == 6 )
          {
            v27 = (unsigned int *)*(&this->vtable20); /*0x71a98e*/
            if ( v27 ) /*0x71a993*/
            {
              if ( (*(int (__thiscall **)(unsigned int))(*v27 + 1032))(*(&this->vtable20)) > 0 ) /*0x71a9a2*/
                BuildingClass::AnimateUnloadUnits(v27, 0); /*0x71a9a7*/
              if ( !g_IKnowWhatImDoing && v27[70] ) /*0x71a9b4*/
              {
                do /*0x71a9d6*/
                {
                  v28 = LinkedList::Pop(v27 + 69); /*0x71a9c4*/
                  if ( v28 ) /*0x71a9cb*/
                    (*(void (__thiscall **)(int, int))(*(unsigned int *)v28 + 32))(v28, 1); /*0x71a9d3*/
                }
                while ( v27[70] ); /*0x71a9d6*/
              }
            }
            v29 = *(&this->vtable25); /*0x71a9de*/
            if ( v29 ) /*0x71a9e3*/
            {
              SuperClass::SetOnHold(v29, 0); /*0x71a9e6*/
              *(&this->vtable25) = 0; /*0x71a9eb*/
            }
            v30 = (unsigned int *)*(&this->vtable20); /*0x71a9ee*/
            if ( v30[185] )
            {
              if ( v30 )
                v31 = (*(int (__thiscall **)(unsigned int))(*v30 + 44))(*(&this->vtable20)) == 6 ? v30 : 0;
              else
                v31 = 0; /*0x71a9fd*/
              BuildingClass::RemoveLimpet(v31); /*0x71aa15*/
            }
            v32 = *(unsigned int **)(*(&this->vtable20) + 728); /*0x71aa1d*/
            if ( v32 ) /*0x71aa25*/
              TechnoClass::MutateAll(v32, this->creationFrame, 0); /*0x71aa2c*/
            (*(void (__thiscall **)(unsigned int, unsigned int))(*(unsigned int *)*(&this->vtable20) + 952))(*(&this->vtable20), this->creationFrame); /*0x71aa3a*/
            (*(void (__thiscall **)(unsigned int, unsigned int))(*(unsigned int *)*(&this->vtable20) + 224))(*(&this->vtable20), this->creationFrame); /*0x71aa49*/
            result = (void **)(*(int (__thiscall **)(unsigned int))(*(unsigned int *)*(&this->vtable20) + 248))(*(&this->vtable20)); /*0x71aa54*/
            *(unsigned char *)(v27[135] + 508) = 1; /*0x71aa60*/
          }
          else
          {
            v33 = *(&this->vtable20); /*0x71aa69*/
            v34 = *(unsigned int *)(v33 + 740); /*0x71aa6c*/
            if ( v34 )
            {
              v35 = (*(int (__thiscall **)(unsigned int))(*(unsigned int *)v34 + 44))(*(unsigned int *)(v33 + 740)) == 6 ? (int *)v34 : 0;
              BuildingClass::UpdateDamageAnim(v35); /*0x71aa90*/
            }
            v36 = *(unsigned int **)(*(&this->vtable20) + 728); /*0x71aa98*/
            if ( v36 ) /*0x71aaa0*/
              TechnoClass::MutateAll(v36, this->creationFrame, 0); /*0x71aaa7*/
            (*(void (__thiscall **)(unsigned int, unsigned int))(*(unsigned int *)*(&this->vtable20) + 952))(*(&this->vtable20), this->creationFrame); /*0x71aab5*/
            (*(void (__thiscall **)(unsigned int, unsigned int))(*(unsigned int *)*(&this->vtable20) + 224))(*(&this->vtable20), this->creationFrame); /*0x71aac4*/
            result = (void **)(*(int (__thiscall **)(unsigned int))(*(unsigned int *)*(&this->vtable20) + 248))(*(&this->vtable20)); /*0x71aacf*/
          }
          v37 = this->creationFrame; /*0x71aad5*/
          if ( v37 ) /*0x71aada*/
            result = (void **)(*(int (__thiscall **)(int, unsigned int, int))(*(unsigned int *)v37 + 1156))(v37, 0, 1); /*0x71aae1*/
        }
        v38 = this->creationFrame; /*0x71aae7*/
        *(&this->vtable20) = 0; /*0x71aaea*/
        *(&this->vtable27) = 0; /*0x71aaef*/
        *(&this->vtable26) = 0; /*0x71aaf2*/
        *(&this->vtable25) = 0; /*0x71aaf5*/
        *(&this->vtable24) = 0; /*0x71aaf8*/
        if ( v38 ) /*0x71aafb*/
          return (void **)(*(int (__thiscall **)(int, unsigned int, int))(*(unsigned int *)v38 + 1156))(v38, 0, 1); /*0x71ab02*/
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
  int *v4; // ecx
  int v5; // edi
  int v6; // eax
  int *v7; // eax

  WarpPerStep = (unsigned int)(0);
  if ( *(&this->vtable27) && a2 <= 50 ) /*0x71ab25*/
    WarpPerStep = TemporalClass::GetWarpPerStep(a2 + 1); /*0x71ab2e*/
  v4 = this->objectTypeFlags; /*0x71ab30*/
  v5 = *v4; /*0x71ab35*/
  v6 = (*(int (__thiscall **)(int *, unsigned int))(*v4 + 740))(v4, 0); /*0x71ab37*/
  v7 = *(int **)(*(unsigned int *)(*(int (__thiscall **)(unsigned int, int))(v5 + 1016))(this->objectTypeFlags, v6) + 164); /*0x71ab4a*/
  *(&this->vtable29) = v7; /*0x71ab50*/
  return (int)v7 + WarpPerStep; /*0x71ab49*/
}
} // namespace ra2

// 0x71B1B0
namespace gamemd {
void * TemporalClass::ProcessEvent(char a2)
{
  int v3; // eax

  v3 = (*(int (__thiscall **)(int *, unsigned int **))(dword_B0EC60 + 16))(&dword_B0EC60, &this); /*0x71b1e3*/
  if ( v3 != -1 && v3 < dword_B0EC70 && v3 < --dword_B0EC70 ) /*0x71b1fe*/
  {
    do /*0x71b216*/
    {
      ++v3; /*0x71b206*/
      *((unsigned int *)dword_B0EC64 + v3 - 1) = *((unsigned int *)dword_B0EC64 + v3); /*0x71b20a*/
    }
    while ( v3 < dword_B0EC70 ); /*0x71b216*/
  }
  AbstractClass::DTOR(); /*0x71b21a*/
  if ( (a2 & 1) != 0 ) /*0x71b224*/
    RA2_OPDEL(); /*0x71b227*/
  return this; /*0x71b231*/
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
      AbstractClass::InitVtables(aP0, (int)&aP1); /*0x71a682*/
      *(unsigned int *)aP0 = (int)&TemporalClass_vftable; /*0x71a687*/
      aP0[1] = (int)&TemporalClass_vftable; /*0x71a68d*/
      aP0[2] = (int)&TemporalClass_vftable; /*0x71a694*/
      aP0[3] = (int)&TemporalClass_vftable; /*0x71a69b*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, aP0 + 9); /*0x71a6ab*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, aP0 + 10); /*0x71a6b9*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, aP0 + 16); /*0x71a6c7*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, aP0 + 17); /*0x71a6d5*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, aP0 + 14); /*0x71a6e3*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, aP0 + 15); /*0x71a6f1*/
  }
  return Prefix_0; /*0x71a6f8*/
}
} // namespace gamemd

// 0x71A700
namespace gamemd {
int TemporalClass::SaveTemporal(TechnoTypeClass * aP0, int * a1, int aP2)
{
  return AbstractClass::SaveLoad_Prefix(aP0, a1, aP2); /*0x71a714*/
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
  if ( !*(unsigned char *)((*(int (__thiscall **)(unsigned int *))(*a1 + 132))(a1) + 3386) ) /*0x71ae71*/
    return 0; /*0x71ae7c*/
  if ( (*(uint8_t (__thiscall **)(unsigned int *))(*a1 + 352))(a1) ) /*0x71ae89*/
    return 0; /*0x71ae94*/
  if ( (*(int (__thiscall **)(unsigned int *))(*a1 + 44))(a1) == 1 ) /*0x71aea7*/
  {
    Member = Team::GetMember(a1, 0); /*0x71aead*/
    v3 = (unsigned int *)Member; /*0x71aeb2*/
    if ( Member ) /*0x71aeb6*/
    {
      if ( (*(int (__thiscall **)(int))(*(unsigned int *)Member + 44))(Member) == 6 ) /*0x71aec2*/
      {
        if ( *(unsigned char *)(v3[328] + 5821) ) /*0x71aeca*/
        {
          v5[0] = (unsigned int *)(a1[39]);
          v5[1] = a1[40]; /*0x71aeed*/
          v5[2] = a1[41]; /*0x71aef4*/
          v4 = Coord::To_Cell(&MapClass_Instance, v5); /*0x71aef8*/
          if ( Cell::IsBridge(v4) == v3 ) /*0x71af06*/
            return 0; /*0x71af09*/
        }
      }
    }
  }
  return 1; /*0x71ae5d*/
}
} // namespace gamemd
