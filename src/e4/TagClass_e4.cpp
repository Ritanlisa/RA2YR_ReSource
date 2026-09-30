// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/TagClass_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/TauntCommandClass_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/TaskForceClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/TagTypeClass_e4.hpp"
#include "e4/classes/ScenarioClass_e4.hpp"
#include "e4/classes/DisplayClass_e4.hpp"
#include "e4/classes/Techno_e4.hpp"
#include "e4/classes/Factory_e4.hpp"

// 0x6E4F60
namespace gamemd {
TriggerClass * * TagClass::Destructor(void ** a1, AbstractClass * a2)
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
  unsigned int *buildingType; // eax
  int Owner; // eax
  int v14; // ecx
  unsigned int *eax35; // eax
  TriggerClass *v15; // esi
  int eax37; // eax
  AbstractClass *v17; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  AbstractClass *v22; // edx
  unsigned int v23[4]; // [esp+10h] [ebp-10h] BYREF

  IDA_LOBYTE(a2) = 1; /*0x6e4f63*/
  *a1 = &vt_TagClass; /*0x6e4f69*/
  a1[1] = &vt_TagClass; /*0x6e4f6f*/
  a1[2] = &vt_TagClass; /*0x6e4f76*/
  a1[3] = &vt_TagClass; /*0x6e4f7d*/
  ((AbstractClass *)((AbstractClass *)a1))->AnnounceExpiredPointer(a2); /*0x6e4f84*/
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
            if ( (int)&v5[-1].OwnerHouse + 3 < 0 && !*(unsigned int *)&stru_89E138.__pad_579C[67588] ) /*0x6e4fe6*/
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
                Owner = HouseClass::FindOwner(*(void **)(*(unsigned int *)(*((unsigned int *)a1[10] + 9) + 164) + 184)); /*0x6e509b*/
                v14 = *(unsigned int *)(Owner + 636); /*0x6e50a0*/
                if ( v14 ) /*0x6e50a8*/
                  *(unsigned int *)(Owner + 636) = v14 - 1; /*0x6e50ab*/
                eax35 = (unsigned int *)(Owner + 664); /*0x6e50b7*/
                *eax35 = *(unsigned int *)&HouseClass_Player.__pad_5568[23248]; /*0x6e50c1*/
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
    eax37 = *(unsigned int *)&stru_B05488.__pad_579C[19068]; /*0x6e50d4*/
    do /*0x6e50d9*/
    {
      if ( *(int *)&stru_B05488.__pad_579C[19076] < eax37 ) /*0x6e50df*/
        goto LABEL_43; /*0x6e50df*/
      if ( !stru_B05488.__pad_579C[19073] && eax37 || *(int *)&stru_B05488.__pad_579C[19080] <= 0 ) /*0x6e50f7*/
        goto LABEL_45; /*0x6e50f7*/
      if ( (*(uint8_t (**)(char *, int, unsigned int))(*(unsigned int *)&stru_B05488.__pad_579C[19060] + 8))( /*0x6e5109*/
             &stru_B05488.__pad_579C[19060],
             eax37 + *(unsigned int *)&stru_B05488.__pad_579C[19080],
             0) )
      {
LABEL_43:
        v17 = (AbstractClass *)(*(unsigned int *)&stru_B05488.__pad_579C[19076])++; /*0x6e5116*/
        *(unsigned int *)(*(unsigned int *)&stru_B05488.__pad_579C[19064] + 4 * (unsigned int)v17) = v15; /*0x6e5125*/
      }
      eax37 = *(unsigned int *)&stru_B05488.__pad_579C[19068]; /*0x6e5128*/
LABEL_45:
      v15 = (TriggerClass *)v15->nextTrigger; /*0x6e512d*/
    }
    while ( v15 ); /*0x6e50d9*/
  }
  v23[0] = (unsigned int)(a1);
  v19 = (*(int (**)(char *, unsigned int *))(*(unsigned int *)&stru_B05488.__pad_579C[19020] + 16))( /*0x6e5147*/
          &stru_B05488.__pad_579C[19020],
          v23);
  if ( v19 != -1 && v19 < *(int *)&stru_B05488.__pad_579C[19036] ) /*0x6e5157*/
  {
    --*(unsigned int *)&stru_B05488.__pad_579C[19036]; /*0x6e515c*/
    for ( ; /*0x6e5162*/
          v19 < *(int *)&stru_B05488.__pad_579C[19036];
          *(unsigned int *)(*(unsigned int *)&stru_B05488.__pad_579C[19024] + 4 * v19 - 4) = *(unsigned int *)(*(unsigned int *)&stru_B05488.__pad_579C[19024]
                                                                                           + 4 * v19) )
    {
      ++v19; /*0x6e516a*/
    }
  }
  v23[0] = (unsigned int)(a1);
  v20 = (*(int (**)(char *, unsigned int *))(*(unsigned int *)&stru_B05488.__pad_579C[19172] + 16))( /*0x6e5190*/
          &stru_B05488.__pad_579C[19172],
          v23);
  if ( v20 != -1 && v20 < *(int *)&stru_B05488.__pad_579C[19188] ) /*0x6e51a0*/
  {
    --*(unsigned int *)&stru_B05488.__pad_579C[19188]; /*0x6e51a5*/
    for ( ; /*0x6e51ab*/
          v20 < *(int *)&stru_B05488.__pad_579C[19188];
          *(unsigned int *)(*(unsigned int *)&stru_B05488.__pad_579C[19176] + 4 * v20 - 4) = *(unsigned int *)(*(unsigned int *)&stru_B05488.__pad_579C[19176]
                                                                                           + 4 * v20) )
    {
      ++v20; /*0x6e51b3*/
    }
  }
  v23[0] = (unsigned int)(a1);
  v21 = (*(int (**)(char *, unsigned int *))(*(unsigned int *)&stru_B05488.__pad_579C[15100] + 16))( /*0x6e51d9*/
          &stru_B05488.__pad_579C[15100],
          v23);
  if ( v21 != -1 && v21 < *(int *)&stru_B05488.__pad_579C[15116] ) /*0x6e51e9*/
  {
    --*(unsigned int *)&stru_B05488.__pad_579C[15116]; /*0x6e51ee*/
    for ( ; /*0x6e51f4*/
          v21 < *(int *)&stru_B05488.__pad_579C[15116];
          *(unsigned int *)(*(unsigned int *)&stru_B05488.__pad_579C[15104] + 4 * v21 - 4) = v22 )
    {
      ++v21; /*0x6e51fc*/
      v22 = *(AbstractClass **)(*(unsigned int *)&stru_B05488.__pad_579C[15104] + 4 * v21); /*0x6e51fd*/
    }
  }
  IDA_LOBYTE(v22) = 1; /*0x6e520e*/
  ((AbstractClass *)((AbstractClass *)a1))->AnnounceExpiredPointer(v22); /*0x6e5212*/
  AbstractClass::DTOR(a1); /*0x6e5219*/

}
}
// 0x6E6220
namespace gamemd {
void TagClass::HasValidHouse()
{

  unsigned int *v1; // esi

  v1 = (unsigned int *)*((unsigned int *)this + 40); /*0x6e6221*/
  if ( !v1 ) /*0x6e6229*/
    return 0; /*0x6e6240*/
  while ( !HouseClass::FindType15(v1) ) /*0x6e6234*/
  {
    v1 = (unsigned int *)v1[42]; /*0x6e6236*/
    if ( !v1 ) /*0x6e623e*/
      return 0; /*0x6e623e*/
  }
  return 1; /*0x6e6242*/

}
}
// 0x71ADE0
namespace gamemd {
void TagClass::Unlink()
{

  int v2; // eax
  int result; // eax
  int v4; // ecx

  *(unsigned char *)(*((char *)this + 10) + 624) = 0; /*0x71ade9*/
  *(unsigned int *)(*((char *)this + 10) + 632) = 0; /*0x71adf2*/
  v2 = *((char *)this + 17); /*0x71adf8*/
  *((char *)this + 10) = 0; /*0x71adfd*/
  if ( v2 ) /*0x71ae00*/
  {
    if ( *(int **)(v2 + 64) == this ) /*0x71ae05*/
      *(unsigned int *)(v2 + 64) = 0; /*0x71ae07*/
    TagClass::Unlink(*((char *)this + 17)); /*0x71ae0d*/
  }
  result = *((char *)this + 16); /*0x71ae12*/
  if ( result ) /*0x71ae17*/
  {
    if ( *(int **)(result + 68) == this ) /*0x71ae1c*/
      *(unsigned int *)(result + 68) = 0; /*0x71ae1e*/
    result = TagClass::Unlink(*((char *)this + 16)); /*0x71ae24*/
  }
  v4 = *((char *)this + 9); /*0x71ae29*/
  *((char *)this + 17) = 0; /*0x71ae2c*/
  *((char *)this + 16) = 0; /*0x71ae31*/
  *((char *)this + 15) = 0; /*0x71ae34*/
  *((char *)this + 14) = 0; /*0x71ae37*/
  if ( v4 ) /*0x71ae3a*/
    return (*(int (**)(int, unsigned int, int))(*(unsigned int *)v4 + 1156))(v4, 0, 1); /*0x71ae41*/
  return result; /*0x71ae47*/

}
}
// 0x6E5610
namespace gamemd {
int TagClass::CheckEvent(int a2, TagTypeClass * aP2)
{

  TriggerClass *v4; // eax
  TagTypeClass *result; // eax

  if ( *((unsigned int *)this + 9) == a2 ) /*0x6e561a*/
    *((unsigned int *)this + 9) = 0; /*0x6e561c*/
  v4 = *(TriggerClass **)((char *)this + 40); /*0x6e5623*/
  if ( v4 == (TriggerClass *)a2 ) /*0x6e5628*/
    *((unsigned int *)this + 10) = v4->nextTrigger; /*0x6e562d*/
  result = *(TagTypeClass **)((char *)this + 36); /*0x6e5630*/
  if ( !result ) /*0x6e5635*/
  {
    *((unsigned char *)this + 52) = 1; /*0x6e5637*/
    result = *(TagTypeClass **)&stru_B05488.__pad_579C[19068]; /*0x6e563b*/
    if ( *(int *)&stru_B05488.__pad_579C[19076] < *(int *)&stru_B05488.__pad_579C[19068] /*0x6e5675*/
      || (stru_B05488.__pad_579C[19073] || !*(unsigned int *)&stru_B05488.__pad_579C[19068])
      && *(int *)&stru_B05488.__pad_579C[19080] > 0
      && (result = (TagTypeClass *)(*(int (**)(char *, int, unsigned int))(*(unsigned int *)&stru_B05488.__pad_579C[19060]
                                                                              + 8))(
                                     &stru_B05488.__pad_579C[19060],
                                     *(unsigned int *)&stru_B05488.__pad_579C[19068]
                                   + *(unsigned int *)&stru_B05488.__pad_579C[19080],
                                     0),
          (unsigned char)result) )
    {
      result = (TagTypeClass *)(*(unsigned int *)&stru_B05488.__pad_579C[19076])++; /*0x6e567d*/
      *(unsigned int *)(*(unsigned int *)&stru_B05488.__pad_579C[19064] + 4 * (unsigned int)result) = this; /*0x6e568c*/
    }
  }
  return (int)result->__pad_0; /*0x6e568f*/

}
} // namespace gamemd

// 0x6E56A0
namespace gamemd {
int TagClass::ddtor(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x6e56a6*/
    return -2147467261; /*0x6e56a8*/
  *a2 = 1425466418; /*0x6e56b6*/
  a2[1] = 298977773; /*0x6e56be*/
  a2[2] = 1610655148; /*0x6e56c7*/
  a2[3] = -1252326136; /*0x6e56d0*/
  return 0; /*0x6e56ad*/

}
} // namespace gamemd

// 0x6E56E0
namespace gamemd {
int TagClass::ProcessTag(int * a2)
{

  int v3; // eax
  int v4; // eax
  int v5; // eax

  AbstractClass::ProcessPower((#378 *)this); /*0x6e56e9*/
  v3 = (*(int (**)(int))(*(unsigned int *)(*((unsigned int *)this + 9) + 4) + 16))(*((unsigned int *)this + 9) + 4); /*0x6e56f7*/
  Power::TimerProcess(v3); /*0x6e56fd*/
  v4 = *((unsigned int *)this + 10); /*0x6e5702*/
  if ( v4 ) /*0x6e5707*/
  {
    v5 = (*(int (**)(int))(*(unsigned int *)(v4 + 4) + 16))(v4 + 4); /*0x6e5710*/
    v4 = Power::TimerProcess(v5); /*0x6e5716*/
  }
  IDA_LOBYTE(v4) = *((unsigned char *)this + 52); /*0x6e571b*/
  return Power::FlagProcess(a2, v4); /*0x6e5726*/

}
} // namespace gamemd

// 0x6E5730
namespace gamemd {
int TagClass::LoadTag(AbstractClass * aP0, int aP1)
{

  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0(aP0, (AbstractClass *)aP1); /*0x6e573b*/
  if ( result >= 0 ) /*0x6e5742*/
  {
    if ( aP0 ) /*0x6e5746*/
    {
      AbstractClass::InitVtables(aP0, (IUnknown *)&aP1); /*0x6e574f*/
      *(unsigned int *)aP0->__pad_0 = &vt_TagClass; /*0x6e5754*/
      *(unsigned int *)&aP0-((unsigned int *)(>__pad_0))[4] = &vt_TagClass; /*0x6e575a*/
      *(unsigned int *)&aP0-((unsigned int *)(>__pad_0))[8] = &vt_TagClass; /*0x6e5761*/
      *(unsigned int *)&aP0-((unsigned int *)(>__pad_0))[12] = &vt_TagClass; /*0x6e5768*/
    }
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&stru_B05488.__pad_579C[5356], (MouseClass *)&aP0[1]); /*0x6e5778*/
    ObjectPtr::RegisterForTracking( /*0x6e5786*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[((unsigned int *)(1].__pad_0))[4]);
    return 0; /*0x6e578b*/
  }
  return result; /*0x6e578d*/

}
} // namespace gamemd

// 0x6E57A0
namespace gamemd {
int TagClass::SaveTag(TechnoTypeClass * aP0, int * a1, int aP2)
{

  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2); /*0x6e57af*/
  if ( result >= 0 ) /*0x6e57b6*/
    return 0; /*0x6e57b8*/
  return result; /*0x6e57ba*/

}
} // namespace gamemd

// 0x6E5890
namespace gamemd {
int TagClass::StubReturn56()
{

  return 56; /*0x6e5895*/

}
} // namespace gamemd

// 0x6E58A0
namespace gamemd {
int TagClass::StubReturn44()
{

  return 44; /*0x6e58a5*/

}
} // namespace gamemd

// 0x6E58B0
namespace gamemd {
TagClass * TagClass::ProcessTrigger(void ** Block, char a2)
{

  TagClass::Destructor(Block); /*0x6e58b3*/
  if ( ((unsigned int)(Block)& 1) != 0 ) /*0x6e58bd*/
    RA2_OPDEL(Block); /*0x6e58c0*/
  return (TagClass *)Block; /*0x6e58ca*/

}
} // namespace gamemd
