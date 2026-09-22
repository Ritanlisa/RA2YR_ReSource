// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Team_e4.hpp"

// 0x71A450
namespace ra2 {
namespace game {
void TemporalClass::Constructor()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  wchar_t *v2; // eax
  AbstractClass::Constructor((AbstractClass *)this); /*0x71a453*/
  v2 = g_CurrentFrame; /*0x71a458*/
  this->TemporalClass_field_34 = 0; /*0x71a45d*/
  this->q02C = v2; /*0x71a464*/
  *(_DWORD *)this = &TemporalClass::`vftable'; /*0x71a467*/
  this->vtable1 = &TemporalClass::`vftable'; /*0x71a46d*/
  this->vtable2 = &TemporalClass::`vftable'; /*0x71a474*/
  this->vtable3 = &vt_TemporalClass; /*0x71a47b*/
  if ( DataGlobal_B0EC70 < DataGlobal_B0EC68 /*0x71a4b7*/
    || (DataGlobal_B0EC6D || !DataGlobal_B0EC68)
    && DataGlobal_B0EC74 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(DataGlobal_B0EC60 + 8))(
         &DataGlobal_B0EC60,
         DataGlobal_B0EC68 + DataGlobal_B0EC74,
         0) )
  {
    int v3 = DataGlobal_B0EC70++; /*0x71a4c4*/
    *((_DWORD *)DataGlobal_B0EC64 + v3) = this; /*0x71a4d3*/
  }
  return this; /*0x71a4d8*/
}
}
} // namespace game
} // namespace ra2

// 0x71A4E0
namespace ra2 {
namespace game {
unsigned int * TemporalClass::TemporalClass(TechnoClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  AbstractClass::Constructor((AbstractClass *)this); /*0x71a4e7*/
  this->q02C = *(_DWORD *)&HouseClass_Player[45112]; /*0x71a4fb*/
  this->TemporalClass_field_34 = 0; /*0x71a4fe*/
  *this = &TemporalClass::`vftable'; /*0x71a501*/
  this->vtable2 = &TemporalClass::`vftable'; /*0x71a507*/
  this->vtable3 = &TemporalClass::`vftable'; /*0x71a50e*/
  this->vtable4 = &vt_TemporalClass; /*0x71a515*/
  this->creationFrame = aP1; /*0x71a51c*/
  this->q028 = 0; /*0x71a51f*/
  this->q02C = *(_DWORD *)&HouseClass_Player[45112]; /*0x71a529*/
  int v5; // [esp+Ch] [ebp-8h]
  this->TemporalClass_field_30 = v5; /*0x71a52c*/
  this->TemporalClass_field_34 = 0; /*0x71a52f*/
  this->uniqueId = 0; /*0x71a532*/
  this->q044 = 0; /*0x71a535*/
  if ( *(int *)&stru_B05488[38888] < *(int *)&stru_B05488[38880] /*0x71a569*/
    || (stru_B05488[38885] || !*(_DWORD *)&stru_B05488[38880])
    && *(int *)&stru_B05488[38892] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_B05488[38872] + 8))(
         &stru_B05488[38872],
         *(_DWORD *)&stru_B05488[38880] + *(_DWORD *)&stru_B05488[38892],
         0) )
  {
    int v3 = (*(_DWORD *)&stru_B05488[38888])++; /*0x71a576*/
    *(_DWORD *)(*(_DWORD *)&stru_B05488[38876] + 4 * v3) = this; /*0x71a585*/
  }
  this->q048 = 0; /*0x71a588*/
  this->q04C = 0; /*0x71a58b*/
  this->q038 = 0; /*0x71a58e*/
  this->q03C = 0; /*0x71a591*/
  return this; /*0x71a596*/
}
}
} // namespace game
} // namespace ra2

// 0x71A760
namespace ra2 {
namespace game {
void ** TemporalClass::ProcessTimeWarp()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  void **result; // eax
  int **v13; // ecx
  int WarpPerStep; // ebp

  _DWORD * v2 = (_DWORD *)this->q028; /*0x71a76b*/
  if ( v2 && (int *)v2[158] == this && this->uniqueId )
  {
    v2[158] = 0; /*0x71a77f*/
    *(_BYTE *)(this->q028 + 624) = 0; /*0x71a78a*/
    return (void **)TagClass::Unlink(this); /*0x71a790*/
  }
  else
  {
    int v4 = this->creationFrame; /*0x71a79d*/
    if ( !v4 ) /*0x71a7a2*/
      goto LABEL_10; /*0x71a7a2*/
    if ( !*(_BYTE *)(v4 + 130) ) /*0x71a7a8*/
      goto LABEL_10; /*0x71a7a8*/
    if ( !v2 ) /*0x71a7b6*/
      goto LABEL_10; /*0x71a7b6*/
  _BYTE v43[12]; // [esp+2Ch] [ebp-18h] BYREF
    _DWORD * v5 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*v2 + 72))(v2, v43); /*0x71a7c9*/
  _BYTE v44[12]; // [esp+38h] [ebp-Ch] BYREF
    _DWORD * v6 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _BYTE *))(*(_DWORD *)this->creationFrame + 72))(this->creationFrame, v44); /*0x71a7d2*/
    int v7 = v5[1]; /*0x71a7d9*/
    int v8 = *v6 - *v5; /*0x71a7dc*/
    int v9 = v6[1]; /*0x71a7de*/
    int v10 = v6[2]; /*0x71a7e1*/
    int v40 = v8; /*0x71a7e4*/
    int v11 = v10 - v5[2]; /*0x71a7ed*/
    int v41 = v9 - v7; /*0x71a7ef*/
    int v42 = v11; /*0x71a7f3*/
    double v12 = Math::Sqrt((double)v8 * (double)v8 + (double)v11 * (double)v11 + (double)(v9 - v7) * (double)(v9 - v7)); /*0x71a81f*/
    if ( (int)Math::RoundToInt(v12) > g_RulesClass_Instance->? << 8 )
    {
      return (void **)FactoryClass::CompleteItem(this); /*0x71a841*/
    }
    else
    {
LABEL_10:
      v13 = (int **)this->q011; /*0x71a84e*/
      WarpPerStep = 0; /*0x71a851*/
      if ( v13 ) /*0x71a855*/
        WarpPerStep = TemporalClass::GetWarpPerStep(v13, 1); /*0x71a85e*/
      int * v15 = (int *)this->creationFrame; /*0x71a860*/
      int v16 = *v15; /*0x71a864*/
      int v17 = (*(int (__thiscall **)(int *, _DWORD))(*v15 + 740))(v15, 0); /*0x71a866*/
      int v18 = (*(int (__thiscall **)(_DWORD, int))(v16 + 1016))(this->creationFrame, v17); /*0x71a870*/
      int v19 = this->q012; /*0x71a878*/
      int v20 = *(_DWORD *)(*(_DWORD *)v18 + 164); /*0x71a87b*/
      this->q04C = v20; /*0x71a881*/
      result = (void **)(v19 - (WarpPerStep + v20)); /*0x71a888*/
      this->q012 = (int)result; /*0x71a88a*/
      if ( (int)result <= 0 )
      {
        if ( this->q028 ) /*0x71a895*/
        {
          result = (void **)__2_YAPAXI_Z(0x1C8u); /*0x71a8c2*/
          if ( result ) /*0x71a8cc*/
          {
            int * v22 = (int *)(this->q028 + 156); /*0x71a8d2*/
            v40 = *v22; /*0x71a8e3*/
            v41 = v22[1]; /*0x71a8ea*/
            v42 = v22[2]; /*0x71a8f6*/
            result = AnimClass::ctor(result, (void *)g_RulesClass_Instance->?[1], &v40, 0, 1, (void *)0x600, 0, 0); /*0x71a909*/
          }
        }
        else
        {
          int v21 = this->creationFrame; /*0x71a89a*/
          this->q028 = 0; /*0x71a89d*/
          this->q011 = 0; /*0x71a8a2*/
          this->uniqueId = 0; /*0x71a8a5*/
          this->q03C = 0; /*0x71a8a8*/
          this->q038 = 0; /*0x71a8ab*/
          if ( v21 ) /*0x71a8ae*/
            result = (void **)(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v21 + 1156))(v21, 0, 1); /*0x71a8b5*/
        }
        if ( this->q028 )
        {
          if ( *(_BYTE *)((*(int (__thiscall **)(_DWORD))(*(_DWORD *)this->creationFrame + 132))(this->creationFrame) + 3214) ) /*0x71a922*/
          {
            int v23 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)this->q028 + 132))(this->q028); /*0x71a938*/
            int v24 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)this->creationFrame + 132))(this->creationFrame); /*0x71a944*/
            int v39 = *(_DWORD *)(this->q028 + 540); /*0x71a94f*/
            int v25 = (*(int (__thiscall **)(int))(*(_DWORD *)v23 + 132))(v23); /*0x71a952*/
  int v26; // eax
            v26 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v24 + 132))( /*0x71a968*/
                    v24,
                    *(_DWORD *)(this->creationFrame + 540),
                    v25);
            VeterancyStruct::Accumulate((float *)(this->creationFrame + 336), v26, v39); /*0x71a978*/
          }
          if ( (*(int (__thiscall **)(_DWORD))(*(_DWORD *)this->q028 + 44))(this->q028) == 6 )
          {
            _DWORD * v27 = (_DWORD *)this->q028; /*0x71a98e*/
            if ( v27 ) /*0x71a993*/
            {
              if ( (*(int (__thiscall **)(_DWORD))(*v27 + 1032))(this->q028) > 0 ) /*0x71a9a2*/
                BuildingClass::AnimateUnloadUnits(v27, 0); /*0x71a9a7*/
              if ( !g_IKnowWhatImDoing && v27[70] ) /*0x71a9b4*/
              {
                do /*0x71a9d6*/
                {
                  int v28 = LinkedList::Pop(v27 + 69); /*0x71a9c4*/
                  if ( v28 ) /*0x71a9cb*/
                    (*(void (__thiscall **)(int, int))(*(_DWORD *)v28 + 32))(v28, 1); /*0x71a9d3*/
                }
                while ( v27[70] ); /*0x71a9d6*/
              }
            }
            int v29 = this->q03C; /*0x71a9de*/
            if ( v29 ) /*0x71a9e3*/
            {
              SuperClass::SetOnHold(v29, 0); /*0x71a9e6*/
              this->q03C = 0; /*0x71a9eb*/
            }
            _DWORD * v30 = (_DWORD *)this->q028; /*0x71a9ee*/
            if ( v30[185] )
            {
              if ( v30 )
                _DWORD * v31 = (*(int (__thiscall **)(_DWORD))(*v30 + 44))(this->q028) == 6 ? v30 : 0;
              else
                v31 = 0; /*0x71a9fd*/
              BuildingClass::RemoveLimpet(v31); /*0x71aa15*/
            }
            _DWORD * v32 = *(_DWORD **)(this->q028 + 728); /*0x71aa1d*/
            if ( v32 ) /*0x71aa25*/
              TechnoClass::MutateAll(v32, this->creationFrame, 0); /*0x71aa2c*/
            (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)this->q028 + 952))(this->q028, this->creationFrame); /*0x71aa3a*/
            (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)this->q028 + 224))(this->q028, this->creationFrame); /*0x71aa49*/
            result = (void **)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)this->q028 + 248))(this->q028); /*0x71aa54*/
            *(_BYTE *)(v27[135] + 508) = 1; /*0x71aa60*/
          }
          else
          {
            int v33 = this->q028; /*0x71aa69*/
            int v34 = *(_DWORD *)(v33 + 740); /*0x71aa6c*/
            if ( v34 )
            {
              int * v35 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v34 + 44))(*(_DWORD *)(v33 + 740)) == 6 ? (int *)v34 : 0;
              BuildingClass::UpdateDamageAnim(v35); /*0x71aa90*/
            }
            _DWORD * v36 = *(_DWORD **)(this->q028 + 728); /*0x71aa98*/
            if ( v36 ) /*0x71aaa0*/
              TechnoClass::MutateAll(v36, this->creationFrame, 0); /*0x71aaa7*/
            (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)this->q028 + 952))(this->q028, this->creationFrame); /*0x71aab5*/
            (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)this->q028 + 224))(this->q028, this->creationFrame); /*0x71aac4*/
            result = (void **)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)this->q028 + 248))(this->q028); /*0x71aacf*/
          }
          int v37 = this->creationFrame; /*0x71aad5*/
          if ( v37 ) /*0x71aada*/
            result = (void **)(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v37 + 1156))(v37, 0, 1); /*0x71aae1*/
        }
        int v38 = this->creationFrame; /*0x71aae7*/
        this->q028 = 0; /*0x71aaea*/
        this->q011 = 0; /*0x71aaef*/
        this->uniqueId = 0; /*0x71aaf2*/
        this->q03C = 0; /*0x71aaf5*/
        this->q038 = 0; /*0x71aaf8*/
        if ( v38 ) /*0x71aafb*/
          return (void **)(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v38 + 1156))(v38, 0, 1); /*0x71ab02*/
      }
    }
  }
  return result; /*0x71a795*/
}
}
} // namespace game
} // namespace ra2

// 0x71AB10
namespace ra2 {
namespace game {
void TemporalClass::GetWarpPerStep(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int WarpPerStep; // ebx

  WarpPerStep = 0; /*0x71ab14*/
  if ( this->q011 && a2 <= 50 ) /*0x71ab25*/
    WarpPerStep = TemporalClass::GetWarpPerStep(a2 + 1); /*0x71ab2e*/
  int * v4 = this->creationFrame; /*0x71ab30*/
  int v5 = *v4; /*0x71ab35*/
  int v6 = (*(int (__thiscall **)(int *, _DWORD))(*v4 + 740))(v4, 0); /*0x71ab37*/
  int * v7 = *(int **)(*(_DWORD *)(*(int (__thiscall **)(_DWORD, int))(v5 + 1016))(this->creationFrame, v6) + 164); /*0x71ab4a*/
  this->q04C = v7; /*0x71ab50*/
  return (int)v7 + WarpPerStep; /*0x71ab49*/
}
}
} // namespace game
} // namespace ra2

// 0x71B1B0
namespace ra2 {
namespace game {
void * TemporalClass::ProcessEvent(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  *this = &TemporalClass::`vftable'; /*0x71b1bd*/
  this->vtable2 = &TemporalClass::`vftable'; /*0x71b1c3*/
  this->vtable3 = &TemporalClass::`vftable'; /*0x71b1ca*/
  this->vtable4 = &vt_TemporalClass; /*0x71b1d1*/
  TemporalClass *v5 = this; /*0x71b1df*/
  int v3 = (*(int (__thiscall **)(int *, _DWORD **))(DataGlobal_B0EC60 + 16))(&DataGlobal_B0EC60, &v5); /*0x71b1e3*/
  if ( v3 != -1 && v3 < DataGlobal_B0EC70 && v3 < --DataGlobal_B0EC70 ) /*0x71b1fe*/
  {
    do /*0x71b216*/
    {
      ++v3; /*0x71b206*/
      *((_DWORD *)DataGlobal_B0EC64 + v3 - 1) = *((_DWORD *)DataGlobal_B0EC64 + v3); /*0x71b20a*/
    }
    while ( v3 < DataGlobal_B0EC70 ); /*0x71b216*/
  }
  AbstractClass::DTOR(this); /*0x71b21a*/
  if ( (a2 & 1) != 0 ) /*0x71b224*/
    __3_YAXPAX_Z(this); /*0x71b227*/
  return (TemporalClass *)this; /*0x71b231*/
}
}
} // namespace game
} // namespace ra2

// 0x71A650
namespace ra2 {
namespace game {
int TemporalClass::SetTarget(AbstractClass * aP1)
{
{
    return AbstractClass::ProcessPower((#378 *)this);
}
}
} // namespace game
} // namespace ra2

// 0x71A660
namespace ra2 {
namespace game {
int TemporalClass::LoadTemporal(AbstractClass * aP0, int aP1)
{
{
    AbstractClass *Prefix_0;
    Prefix_0 = (AbstractClass *)AbstractClass::SaveLoad_Prefix_0(aP0, (AbstractClass *)aP1);
    if ( (int)Prefix_0 >= 0 )
  {
    if ( aP0 )
    {
    AbstractClass::InitVtables(aP0, (IUnknown *)&aP1);
    *(int *)aP0->__pad_0 = (unsigned int)vt_TemporalClass;
    *(int *)&aP0->__pad_0[4] = (unsigned int)vt_TemporalClass;
    *(int *)&aP0->__pad_0[8] = (unsigned int)vt_TemporalClass;
    *(int *)&aP0->__pad_0[12] = &vt_TemporalClass;
    }
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&DataGlobal_B05488[27784], (MouseClass *)&aP0[1]);
    ObjectPtr::RegisterForTracking( (SwizzleManagerClass *)&DataGlobal_B05488[27784], (MouseClass *)&aP0[1].__pad_0[4]);
    ObjectPtr::RegisterForTracking( (SwizzleManagerClass *)&DataGlobal_B05488[27784], (MouseClass *)&aP0[1].referenceCount);
    ObjectPtr::RegisterForTracking( (SwizzleManagerClass *)&DataGlobal_B05488[27784], (MouseClass *)&aP0[1].NeedsSaveOrLink);
    ObjectPtr::RegisterForTracking( (SwizzleManagerClass *)&DataGlobal_B05488[27784], (MouseClass *)&aP0[1].abstractFlags);
    ObjectPtr::RegisterForTracking( (SwizzleManagerClass *)&DataGlobal_B05488[27784], (MouseClass *)&aP0[1].nextArrayIndex);
  }
    return (int)Prefix_0->__pad_0;
}
}
} // namespace game
} // namespace ra2

// 0x71A700
namespace ra2 {
namespace game {
int TemporalClass::SaveTemporal(TechnoTypeClass * aP0, int * a1, int aP2)
{
{
    return AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2);
}
}
} // namespace game
} // namespace ra2

// 0x71A720
namespace ra2 {
namespace game {
int TemporalClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = -1810815964;
  a2[1] = 299099139;
  a2[2] = 1342205582;
  a2[3] = -72177148;
  return 0;
}
} // namespace game
} // namespace ra2

// 0x71AE50
namespace ra2 {
namespace game {
char TemporalClass::CanWarpTarget(unsigned int * a1)
{
{
    int Member;
    int *v3;
    int *v4;
    int v5[3];
    if ( !a1 )
    return 0;
    if ( !*(char *)((*(int (__thiscall **)(int *))(*a1 + 132))(a1) + 3386) )
    return 0;
    if ( (*(unsigned char (__thiscall **)(int *))(*a1 + 352))(a1) )
    return 0;
    if ( (*(int (__thiscall **)(int *))(*a1 + 44))(a1) == 1 )
  {
    Member = Team::GetMember(a1, 0);
    v3 = (int *)Member;
    if ( Member )
    {
    if ( (*(int (__thiscall **)(int))(*(int *)(Member) + 44))(Member) == 6 )
      {
    if ( *(char *)(v3[328] + 5821) )
        {
    v5[0] = *((int*)(a1) + 39);
    v5[1] = *((int*)(a1) + 40);
    v5[2] = *((int*)(a1) + 41);
    v4 = Coord::To_Cell(&DataGlobal_87F7E8, v5);
    if ( Cell::IsBridge(v4) == v3 )
    return 0;
        }
      }
    }
  }
    return 1;
}
}
} // namespace game
} // namespace ra2
