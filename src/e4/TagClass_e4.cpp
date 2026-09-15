// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x6E4F60
namespace gamemd {
void TagClass::Destructor(void ** a1, AbstractClass * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __fastcall TagClass::Destructor(void **a1, AbstractClass *a2)
{
  TagTypeClass *v2; // ecx
  int eax5; // eax
  ParticleSystemClass *v4; // ecx
  ParticleSystemClass *v5; // ecx
  TagTypeClass *v6; // ecx
  int eax18; // eax
  ParticleSystemClass *v8; // ecx
  ParticleSystemClass *v9; // ecx
  TriggerClass *v10; // eax
  _DWORD *buildingType; // eax
  int Owner; // eax
  int v14; // ecx
  _DWORD *eax35; // eax
  TriggerClass *v15; // esi
  int eax37; // eax
  AbstractClass *v17; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  AbstractClass *v22; // edx
  _DWORD v23[4]; // [esp+10h] [ebp-10h] BYREF

  LOBYTE(a2) = 1; /*0x6e4f63*/
  *a1 = &TagClass::`vftable'; /*0x6e4f69*/
  a1[1] = &TagClass::`vftable'; /*0x6e4f6f*/
  a1[2] = &TagClass::`vftable'; /*0x6e4f76*/
  a1[3] = &vt_TagClass; /*0x6e4f7d*/
  AbstractClass::AnnounceExpiredPointer((AbstractClass *)a1, a2); /*0x6e4f84*/
  if ( HouseClass_Player.__pad_5568[22252] ) /*0x6e4f90*/
  {
    if ( HouseClass_Player.__pad_5568[23208] ) /*0x6e4f9d*/
    {
      v2 = (TagTypeClass *)a1[9]; /*0x6e4f9f*/
      if ( v2 ) /*0x6e4fa4*/
      {
        if ( (Debug::AccumFlags(v2) & 0x10) != 0 ) /*0x6e4fad*/
        {
          eax5 = 0; /*0x6e4fb5*/
          if ( *(int *)&stru_89E138.__pad_579C[67588] <= 0 ) /*0x6e4fb9*/
          {
LABEL_9:
            eax5 = -1; /*0x6e4fcd*/
          }
          else
          {
            v4 = *(ParticleSystemClass **)&stru_89E138.__pad_579C[67576]; /*0x6e4fbb*/
            while ( *(void ***)v4->__pad_0 != a1 ) /*0x6e4fc3*/
            {
              ++eax5; /*0x6e4fc5*/
              v4 = (ParticleSystemClass *)((char *)v4 + 4); /*0x6e4fc6*/
              if ( eax5 >= *(int *)&stru_89E138.__pad_579C[67588] ) /*0x6e4fcb*/
                goto LABEL_9; /*0x6e4fcb*/
            }
          }
          v5 = (ParticleSystemClass *)dword_A83CDC; /*0x6e4fd0*/
          if ( dword_A83CDC >= eax5 ) /*0x6e4fd8*/
          {
            --dword_A83CDC; /*0x6e4fdd*/
            if ( (int)&v5[-1].OwnerHouse + 3 < 0 && !*(_DWORD *)&stru_89E138.__pad_579C[67588] ) /*0x6e4fe6*/
              dword_A83CDC = 0; /*0x6e4fe8*/
          }
        }
      }
    }
    if ( HouseClass_Player.__pad_5568[22252] ) /*0x6e4ff5*/
    {
      if ( HouseClass_Player.__pad_5568[23208] ) /*0x6e5002*/
      {
        v6 = (TagTypeClass *)a1[9]; /*0x6e5004*/
        if ( v6 ) /*0x6e5009*/
        {
          if ( (Debug::AccumFlags(v6) & 4) != 0 ) /*0x6e5012*/
          {
            eax18 = 0; /*0x6e501a*/
            if ( dword_8B41B8 <= 0 ) /*0x6e501e*/
            {
LABEL_22:
              eax18 = -1; /*0x6e5032*/
            }
            else
            {
              v8 = (ParticleSystemClass *)unk_8B41AC; /*0x6e5020*/
              while ( *(void ***)v8->__pad_0 != a1 ) /*0x6e5028*/
              {
                ++eax18; /*0x6e502a*/
                v8 = (ParticleSystemClass *)((char *)v8 + 4); /*0x6e502b*/
                if ( eax18 >= dword_8B41B8 ) /*0x6e5030*/
                  goto LABEL_22; /*0x6e5030*/
              }
            }
            v9 = (ParticleSystemClass *)HouseClass_Player.field_70; /*0x6e5035*/
            if ( HouseClass_Player.field_70 >= eax18 ) /*0x6e503d*/
            {
              --HouseClass_Player.field_70; /*0x6e5042*/
              if ( (int)&v9[-1].OwnerHouse + 3 < 0 && !dword_8B41B8 ) /*0x6e504b*/
                HouseClass_Player.field_70 = 0; /*0x6e504d*/
            }
          }
        }
      }
      if ( HouseClass_Player.__pad_5568[22252] ) /*0x6e505a*/
      {
        if ( HouseClass_Player.__pad_5568[23208] ) /*0x6e5063*/
        {
          v10 = (TriggerClass *)a1[10]; /*0x6e5065*/
          if ( v10 ) /*0x6e506a*/
          {
            buildingType = v10->buildingType; /*0x6e506c*/
            if ( buildingType ) /*0x6e5071*/
            {
              if ( buildingType[41] && TagClass::HasValidHouse(a1[9]) ) /*0x6e5080*/
              {
                Owner = HouseClass::FindOwner(*(void **)(*(_DWORD *)(*((_DWORD *)a1[10] + 9) + 164) + 184)); /*0x6e509b*/
                v14 = *(_DWORD *)(Owner + 636); /*0x6e50a0*/
                if ( v14 ) /*0x6e50a8*/
                  *(_DWORD *)(Owner + 636) = v14 - 1; /*0x6e50ab*/
                eax35 = (_DWORD *)(Owner + 664); /*0x6e50b7*/
                *eax35 = *(_DWORD *)&HouseClass_Player.__pad_5568[23248]; /*0x6e50c1*/
                eax35[1] = v23[2]; /*0x6e50c7*/
                eax35[2] = 60; /*0x6e50ca*/
              }
            }
          }
        }
      }
    }
  }
  v15 = (TriggerClass *)a1[10]; /*0x6e50cd*/
  if ( v15 ) /*0x6e50d2*/
  {
    eax37 = *(_DWORD *)&stru_B05488.__pad_579C[19068]; /*0x6e50d4*/
    do /*0x6e50d9*/
    {
      if ( *(int *)&stru_B05488.__pad_579C[19076] < eax37 ) /*0x6e50df*/
        goto LABEL_43; /*0x6e50df*/
      if ( !stru_B05488.__pad_579C[19073] && eax37 || *(int *)&stru_B05488.__pad_579C[19080] <= 0 ) /*0x6e50f7*/
        goto LABEL_45; /*0x6e50f7*/
      if ( (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_B05488.__pad_579C[19060] + 8))( /*0x6e5109*/
             &stru_B05488.__pad_579C[19060],
             eax37 + *(_DWORD *)&stru_B05488.__pad_579C[19080],
             0) )
      {
LABEL_43:
        v17 = (AbstractClass *)(*(_DWORD *)&stru_B05488.__pad_579C[19076])++; /*0x6e5116*/
        *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[19064] + 4 * (_DWORD)v17) = v15; /*0x6e5125*/
      }
      eax37 = *(_DWORD *)&stru_B05488.__pad_579C[19068]; /*0x6e5128*/
LABEL_45:
      v15 = (TriggerClass *)v15->nextTrigger; /*0x6e512d*/
    }
    while ( v15 ); /*0x6e50d9*/
  }
  v23[0] = a1; /*0x6e5134*/
  v19 = (*(int (__thiscall **)(char *, _DWORD *))(*(_DWORD *)&stru_B05488.__pad_579C[19020] + 16))( /*0x6e5147*/
          &stru_B05488.__pad_579C[19020],
          v23);
  if ( v19 != -1 && v19 < *(int *)&stru_B05488.__pad_579C[19036] ) /*0x6e5157*/
  {
    --*(_DWORD *)&stru_B05488.__pad_579C[19036]; /*0x6e515c*/
    for ( ; /*0x6e5162*/
          v19 < *(int *)&stru_B05488.__pad_579C[19036];
          *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[19024] + 4 * v19 - 4) = *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[19024]
                                                                                           + 4 * v19) )
    {
      ++v19; /*0x6e516a*/
    }
  }
  v23[0] = a1; /*0x6e518c*/
  v20 = (*(int (__thiscall **)(char *, _DWORD *))(*(_DWORD *)&stru_B05488.__pad_579C[19172] + 16))( /*0x6e5190*/
          &stru_B05488.__pad_579C[19172],
          v23);
  if ( v20 != -1 && v20 < *(int *)&stru_B05488.__pad_579C[19188] ) /*0x6e51a0*/
  {
    --*(_DWORD *)&stru_B05488.__pad_579C[19188]; /*0x6e51a5*/
    for ( ; /*0x6e51ab*/
          v20 < *(int *)&stru_B05488.__pad_579C[19188];
          *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[19176] + 4 * v20 - 4) = *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[19176]
                                                                                           + 4 * v20) )
    {
      ++v20; /*0x6e51b3*/
    }
  }
  v23[0] = a1; /*0x6e51d5*/
  v21 = (*(int (__thiscall **)(char *, _DWORD *))(*(_DWORD *)&stru_B05488.__pad_579C[15100] + 16))( /*0x6e51d9*/
          &stru_B05488.__pad_579C[15100],
          v23);
  if ( v21 != -1 && v21 < *(int *)&stru_B05488.__pad_579C[15116] ) /*0x6e51e9*/
  {
    --*(_DWORD *)&stru_B05488.__pad_579C[15116]; /*0x6e51ee*/
    for ( ; /*0x6e51f4*/
          v21 < *(int *)&stru_B05488.__pad_579C[15116];
          *(_DWORD *)(*(_DWORD *)&stru_B05488.__pad_579C[15104] + 4 * v21 - 4) = v22 )
    {
      ++v21; /*0x6e51fc*/
      v22 = *(AbstractClass **)(*(_DWORD *)&stru_B05488.__pad_579C[15104] + 4 * v21); /*0x6e51fd*/
    }
  }
  LOBYTE(v22) = 1; /*0x6e520e*/
  AbstractClass::AnnounceExpiredPointer((AbstractClass *)a1, v22); /*0x6e5212*/
  AbstractClass::DTOR(a1); /*0x6e5219*/
}
}
} // namespace gamemd

// 0x6E56E0
namespace gamemd {
int TagClass::ProcessTag(int * a2)
{
{
    int v3;
    int v4;
    int v5;
    AbstractClass::ProcessPower((AbstractClass *)this);
    v3 = (*(int (__stdcall **)(int))(*(int *)(this->buildingType + 4) + 16))(this->buildingType + 4);
    Power::TimerProcess(v3);
    v4 = this->firstTrigger;
    if ( v4 )
  {
    v5 = (*(int (__stdcall **)(int))(*(int *)(v4 + 4) + 16))(v4 + 4);
    v4 = Power::TimerProcess(v5);
  }
    LOBYTE(v4) = this->destroyed;
    return Power::FlagProcess(a2, v4);
}
}
} // namespace gamemd

// 0x6E6220
namespace gamemd {
char TagClass::HasValidHouse()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall TagClass::HasValidHouse(_DWORD *this)
{
  _DWORD *v1; // esi

  v1 = (_DWORD *)*(this + 40); /*0x6e6221*/
  if ( !v1 ) /*0x6e6229*/
    return 0; /*0x6e6240*/
  while ( !HouseClass::FindType15(v1) ) /*0x6e6234*/
  {
    v1 = (_DWORD *)v1[42]; /*0x6e6236*/
    if ( !v1 ) /*0x6e623e*/
      return 0; /*0x6e623e*/
  }
  return 1; /*0x6e6242*/
}
}
} // namespace gamemd

// 0x71ADE0
namespace gamemd {
int TagClass::Unlink()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall TagClass_Unlink(int *this)
{
  int v2; // eax
  int result; // eax
  int v4; // ecx

  *(_BYTE *)(*(this + 10) + 624) = 0; /*0x71ade9*/
  *(_DWORD *)(*(this + 10) + 632) = 0; /*0x71adf2*/
  v2 = *(this + 17); /*0x71adf8*/
  *(this + 10) = 0; /*0x71adfd*/
  if ( v2 ) /*0x71ae00*/
  {
    if ( *(int **)(v2 + 64) == this ) /*0x71ae05*/
      *(_DWORD *)(v2 + 64) = 0; /*0x71ae07*/
    TagClass::Unlink(*(this + 17)); /*0x71ae0d*/
  }
  result = *(this + 16); /*0x71ae12*/
  if ( result ) /*0x71ae17*/
  {
    if ( *(int **)(result + 68) == this ) /*0x71ae1c*/
      *(_DWORD *)(result + 68) = 0; /*0x71ae1e*/
    result = TagClass::Unlink(*(this + 16)); /*0x71ae24*/
  }
  v4 = *(this + 9); /*0x71ae29*/
  *(this + 17) = 0; /*0x71ae2c*/
  *(this + 16) = 0; /*0x71ae31*/
  *(this + 15) = 0; /*0x71ae34*/
  *(this + 14) = 0; /*0x71ae37*/
  if ( v4 ) /*0x71ae3a*/
    return (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v4 + 1156))(v4, 0, 1); /*0x71ae41*/
  return result; /*0x71ae47*/
}
}
} // namespace gamemd

// 0x6E5610
namespace gamemd {
int TagClass::CheckEvent(int a2, TagTypeClass * aP2)
{
{
    TriggerClass *v4;
    TagTypeClass *result;
    if ( this->buildingType == a2 )
    this->buildingType = 0;
    v4 = *(TriggerClass **)(this + 40);
    if ( v4 == (TriggerClass *)a2 )
    this->firstTrigger = v4->nextTrigger;
    result = *(TagTypeClass **)(this + 36);
    if ( !result )
  {
    this->destroyed = 1;
    result = *(TagTypeClass **)&DataGlobal_B05488.__pad_579C[19068];
    if ( *(int *)&DataGlobal_B05488.__pad_579C[19076] < *(int *)&DataGlobal_B05488.__pad_579C[19068] || (DataGlobal_B05488.__pad_579C[19073] || !*(int *)&DataGlobal_B05488.__pad_579C[19068]) && *(int *)&DataGlobal_B05488.__pad_579C[19080] > 0 && (result = (TagTypeClass *)(*(int (__thiscall **)(char *, int, int))(*(int *)&DataGlobal_B05488.__pad_579C[19060] + 8))( &DataGlobal_B05488.__pad_579C[19060], *(int *)&DataGlobal_B05488.__pad_579C[19068] + *(int *)&DataGlobal_B05488.__pad_579C[19080], 0), (char)result) )
    {
    result = (TagTypeClass *)(*(int *)&DataGlobal_B05488.__pad_579C[19076])++;
    *(int *)(*(int *)&DataGlobal_B05488.__pad_579C[19064] + 4 * (int)result) = this;
    }
  }
    return (int)result->__pad_0;
}
}
} // namespace gamemd

// 0x6E56A0
namespace gamemd {
int TagClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 1425466418;
  a2[1] = 298977773;
  a2[2] = 1610655148;
  a2[3] = -1252326136;
  return 0;
}
} // namespace gamemd

// 0x6E5730
namespace gamemd {
int TagClass::LoadTag(AbstractClass * aP0, int aP1)
{
{
    int result;
    result = AbstractClass::SaveLoad_Prefix_0(aP0, (AbstractClass *)aP1);
    if ( result >= 0 )
  {
    if ( aP0 )
    {
    AbstractClass::InitVtables(aP0, (IUnknown *)&aP1);
    *(int *)aP0->__pad_0 = (unsigned int)vt_TagClass;
    *(int *)&aP0->__pad_0[4] = (unsigned int)vt_TagClass;
    *(int *)&aP0->__pad_0[8] = (unsigned int)vt_TagClass;
    *(int *)&aP0->__pad_0[12] = &vt_TagClass;
    }
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&DataGlobal_B05488.__pad_579C[5356], (MouseClass *)&aP0[1]);
    ObjectPtr::RegisterForTracking( (SwizzleManagerClass *)&DataGlobal_B05488.__pad_579C[5356], (MouseClass *)&aP0[1].__pad_0[4]);
    return 0;
  }
    return result;
}
}
} // namespace gamemd

// 0x6E57A0
namespace gamemd {
int TagClass::SaveTag(TechnoTypeClass * aP0, int * a1, int aP2)
{
{
    int result;
    result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2);
    if ( result >= 0 )
    return 0;
    return result;
}
}
} // namespace gamemd

// 0x6E5890
namespace gamemd {
int TagClass::StubReturn56()
{
return 56;
}
} // namespace gamemd

// 0x6E58A0
namespace gamemd {
int TagClass::StubReturn44()
{
return 44;
}
} // namespace gamemd

// 0x6E58B0
namespace gamemd {
TagClass * TagClass::ProcessTrigger(char a2)
{
{
    TagClass::Destructor(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (TagClass *)this;
}
}
} // namespace gamemd
