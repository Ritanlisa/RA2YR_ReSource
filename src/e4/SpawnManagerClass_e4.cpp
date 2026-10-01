// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/SpawnManagerClass_25_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/SpawnManagerClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/SpawnControlVector_e4.hpp"

// 0x6B6C90
namespace gamemd {
SpawnManagerClass::SpawnManagerClass(int a2, int a3, int a4, int a5, int a6)
{

  unsigned int v7;
  int *v8; // ebp
  unsigned int v9;
  int v10; // ebx
  int v11; // eax
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // edx
  int v18; // eax
  int v20; // [esp+14h] [ebp-8h]
  int i; // [esp+20h] [ebp+4h]

  AbstractClass::Constructor((AbstractClass *)this); /*0x6b6c99*/
  SpawnControlVector::Constructor(0, 0); /*0x6b6ca7*/
  *((unsigned int *)this + 14) = &vt_DynamicVectorClass; /*0x6b6cb0*/
  *((unsigned int *)this + 19) = 10; /*0x6b6cb6*/
  *((unsigned int *)this + 18) = 0; /*0x6b6cbd*/
  v7 = dword_A8ED84; /*0x6b6cc0*/
  *((unsigned int *)this + 22) = 0; /*0x6b6cc5*/
  *((unsigned int *)this + 20) = v7; /*0x6b6cc8*/
  *((unsigned int *)this + 23) = dword_A8ED84; /*0x6b6cd5*/
  *((unsigned int *)this + 25) = 0; /*0x6b6cdc*/
  *((unsigned int *)this + 10) = a3; /*0x6b6cdf*/
  *((unsigned int *)this + 9) = a2; /*0x6b6ce6*/
  *(unsigned int *)this = &vt_SpawnManagerClass; /*0x6b6cef*/
  *((unsigned int *)this + 1) = &vt_SpawnManagerClass; /*0x6b6cf5*/
  *((unsigned int *)this + 2) = &vt_SpawnManagerClass; /*0x6b6cfc*/
  *((unsigned int *)this + 3) = &vt_SpawnManagerClass; /*0x6b6d03*/
  *((unsigned int *)this + 11) = a4; /*0x6b6d0a*/
  *((unsigned int *)this + 12) = a5; /*0x6b6d0d*/
  *((unsigned int *)this + 13) = a6; /*0x6b6d10*/
  for ( i = 0; i < *((unsigned int *)this + 11); ++i ) /*0x6b6d17*/
  {
    v8 = (int *)((wchar_t *)((int *)__2_YAPAXI_Z(0x18u)));
    if ( !v8 ) /*0x6b6d2b*/
      break; /*0x6b6d2b*/
    v9 = dword_A8ED84; /*0x6b6d31*/
    v8[4] = 0; /*0x6b6d36*/
    v8[2] = (int)v9; /*0x6b6d39*/
    v10 = **(unsigned int **)((char *)this + 40); /*0x6b6d44*/
    v11 = (*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 36) + 60))(*((unsigned int *)this + 9)); /*0x6b6d46*/
    v12 = (*(int (**)(unsigned int, int))(v10 + 140))(*((unsigned int *)this + 10), v11); /*0x6b6d4d*/
    *v8 = v12; /*0x6b6d55*/
    if ( v12 ) /*0x6b6d5a*/
    {
      v13 = *((unsigned int *)this + 10); /*0x6b6d66*/
      v8[5] = v13 == *((unsigned int *)dword_8871E0 + 312) /*0x6b6d86*/
           || v13 == *((unsigned int *)dword_8871E0 + 325)
           || v13 == *((unsigned int *)dword_8871E0 + 338);
      (*(void (**)(int))(*(unsigned int *)v12 + 212))(v12); /*0x6b6d91*/
      *(unsigned int *)(*v8 + 724) = *((unsigned int *)this + 9); /*0x6b6da1*/
      v8[1] = 0; /*0x6b6da7*/
      v8[2] = (int)dword_A8ED84; /*0x6b6db1*/
      v8[3] = v20; /*0x6b6db4*/
      v8[4] = 0; /*0x6b6db7*/
      v14 = *((unsigned int *)this + 16); /*0x6b6dba*/
      if ( *((unsigned int *)this + 18) < v14 /*0x6b6dda*/
        || (*((unsigned char *)this + 69) || !v14)
        && (v15 = *((unsigned int *)this + 19), v15 > 0)
        && (*(uint8_t (**)(int, int, unsigned int))(*((unsigned int *)this + 14) + 8))((char *)this + 56, v14 + v15, 0) )
      {
        v16 = *((unsigned int *)this + 18); /*0x6b6de1*/
        v17 = *((unsigned int *)this + 15); /*0x6b6de4*/
        *((unsigned int *)this + 18) = v16 + 1; /*0x6b6dea*/
        *(unsigned int *)(v17 + 4 * v16) = (unsigned int)(v8); /*0x6b6ded*/
      }
    }
  }
  *((unsigned int *)this + 20) = dword_A8ED84; /*0x6b6e0d*/
  *((unsigned int *)this + 21) = v20; /*0x6b6e19*/
  *((unsigned int *)this + 22) = 20; /*0x6b6e1c*/
  *((unsigned int *)this + 26) = 0; /*0x6b6e1f*/
  *((unsigned int *)this + 27) = 0; /*0x6b6e22*/
  *((unsigned int *)this + 28) = 0; /*0x6b6e25*/
  *((unsigned int *)this + 23) = dword_A8ED84; /*0x6b6e2f*/
  *((unsigned int *)this + 24) = v20; /*0x6b6e32*/
  *((unsigned int *)this + 25) = 0; /*0x6b6e35*/
  if ( dword_B0B890 < dword_B0B888 /*0x6b6e69*/
    || (byte_B0B88D || !dword_B0B888)
    && dword_B0B894 > 0
    && (*(uint8_t (**)(int *, int, unsigned int))(SpawnManagerClass_Array + 8))(
         &SpawnManagerClass_Array,
         dword_B0B888 + dword_B0B894,
         0) )
  {
    v18 = dword_B0B890++; /*0x6b6e76*/
    *((unsigned int *)dword_B0B884 + v18) = this; /*0x6b6e85*/
  }
  return this; /*0x6b6e8a*/

}
} // namespace ra2

// 0x6B6EA0
namespace gamemd {
void* SpawnManagerClass::Constructor(void *a1, void *a2, void *a3)
{

  int v2; // eax
  int v4; // [esp+10h] [ebp-8h]

  ((AbstractClass *)((AbstractClass *)this))->Constructor(); /*0x6b6ea8*/
  SpawnControlVector::Constructor((SpawnControlVector *)this->spawns, 0, 0); /*0x6b6eb6*/
  this->spawns[0] = (int)&vt_DynamicVectorClass; /*0x6b6ebb*/
  *(unsigned int *)&this->__pad_48[4] = 10; /*0x6b6ec1*/
  *(unsigned int *)this->__pad_48 = 0; /*0x6b6ec8*/
  *(unsigned int *)&this->__pad_48[8] = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x6b6ed4*/
  this->SpawnManagerClass_field_58 = 0; /*0x6b6ed7*/
  this->SpawnManagerClass_field_5C = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x6b6ee0*/
  this->SpawnManagerClass_field_64 = 0; /*0x6b6ee3*/
  this->AbstractClass = &vt_SpawnManagerClass; /*0x6b6ee6*/
  ((unsigned int *)this)[0] = (unsigned int)(&vt_SpawnManagerClass); /*0x6b6eec*/
  ((unsigned int *)this)[0] = (unsigned int)(&vt_SpawnManagerClass); /*0x6b6ef3*/
  ((unsigned int *)this)[0] = (unsigned int)(&vt_SpawnManagerClass); /*0x6b6efa*/
  this->owner = 0; /*0x6b6f01*/
  this->spawnOwner = 0; /*0x6b6f04*/
  this->spawnType = 0; /*0x6b6f07*/
  *(unsigned int *)&this->__pad_48[8] = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x6b6f11*/
  this->SpawnManagerClass_field_54 = v4; /*0x6b6f14*/
  this->SpawnManagerClass_field_58 = 0; /*0x6b6f17*/
  this->SpawnManagerClass_field_68 = 0; /*0x6b6f1a*/
  this->SpawnManagerClass_field_6C = 0; /*0x6b6f1d*/
  this->SpawnManagerClass_field_70 = 0; /*0x6b6f20*/
  this->SpawnManagerClass_field_5C = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x6b6f28*/
  this->SpawnManagerClass_field_60 = v4; /*0x6b6f2f*/
  this->SpawnManagerClass_field_64 = 0; /*0x6b6f32*/
  if ( dword_B0B890 < dword_B0B888 /*0x6b6f69*/
    || (byte_B0B88D || !dword_B0B888)
    && dword_B0B894 > 0
    && (*(uint8_t (**)(int *, int, unsigned int))(SpawnManagerClass_Array + 8))(
         &SpawnManagerClass_Array,
         dword_B0B888 + dword_B0B894,
         0) )
  {
    v2 = dword_B0B890++; /*0x6b6f76*/
    *((unsigned int *)dword_B0B884 + v2) = (unsigned int)(this); /*0x6b6f85*/
  }
  return (int)this; /*0x6b6f8a*/

}
} // namespace ra2

// 0x6B7010
namespace gamemd {
void SpawnManagerClass::Constructor_SpawnManagerClass()
{

  int i; // esi
  int v3; // ebp
  int v4; // eax
  void *v5; // eax
  TaskManager *v6; // [esp+8h] [ebp-4h] BYREF

  *this = (TaskManager)&vt_SpawnManagerClass; /*0x6b7015*/
  *((unsigned int *)this + 1) = (unsigned int)(&vt_SpawnManagerClass); /*0x6b701b*/
  *((unsigned int *)this + 2) = (unsigned int)(&vt_SpawnManagerClass); /*0x6b7022*/
  *((unsigned int *)this + 3) = (unsigned int)(&vt_SpawnManagerClass); /*0x6b7029*/
  if ( byte_A8E9A0 ) /*0x6b7037*/
    TaskManager::Update(this); /*0x6b7039*/
  for ( i = *((unsigned int *)this + 18) - 1; i >= 0; --i ) /*0x6b7042*/
  {
    if ( *(unsigned int *)(*((unsigned int *)this + 15) + 4 * i) ) /*0x6b7047*/
      __3_YAXPAX_Z(*(void **)(*((unsigned int *)this + 15) + 4 * i)); /*0x6b704f*/
  }
  v3 = *((unsigned int *)this + 16); /*0x6b7063*/
  (*(void ((gamemd::TaskManager *)(**))(TaskManager *))(*((unsigned int *)this + 14) + 12))((unsigned int *)this + 14); /*0x6b7066*/
  (*(void ((gamemd::TaskManager *)(**))(TaskManager *, int, unsigned int))(*((unsigned int *)this + 14) + 8))((unsigned int *)this + 14, v3, 0); /*0x6b7070*/
  v6 = (gamemd::TaskManager *)(this); /*0x6b7083*/
  v4 = (*(int (**)(int *, TaskManager **))(SpawnManagerClass_Array + 16))(&SpawnManagerClass_Array, &v6); /*0x6b7087*/
  if ( v4 != -1 && v4 < dword_B0B890 && v4 < --dword_B0B890 ) /*0x6b70a3*/
  {
    do /*0x6b70bb*/
    {
      ++v4; /*0x6b70ab*/
      *((unsigned int *)dword_B0B884 + v4 - 1) = *((unsigned int *)dword_B0B884 + v4); /*0x6b70af*/
    }
    while ( v4 < dword_B0B890 ); /*0x6b70bb*/
  }
  v5 = (void *)*((unsigned int *)this + 15); /*0x6b70bd*/
  *((unsigned int *)this + 14) = (unsigned int)(&vt_VectorClass); /*0x6b70c0*/
  if ( v5 && *((unsigned char *)this + 69) ) /*0x6b70ca*/
  {
    __3_YAXPAX_Z(v5); /*0x6b70d2*/
    *((unsigned int *)this + 15) = 0; /*0x6b70da*/
  }
  *((unsigned char *)this + 69) = 0; /*0x6b70e3*/
  *((unsigned int *)this + 16) = 0; /*0x6b70e7*/
  AbstractClass::DTOR((AbstractClass *)this); /*0x6b70ee*/

}
} // namespace ra2

// 0x6B7B90
namespace gamemd {
int SpawnManagerClass::SetTarget(int a2)
{

  int result; // eax

  result = a2; /*0x6b7b90*/
  if ( a2 != this->SpawnManagerClass_field_68 ) /*0x6b7b99*/
    this->SpawnManagerClass_field_6C = a2; /*0x6b7b9b*/
  return result; /*0x6b7b9e*/

}
} // namespace ra2

// 0x6B7D30
namespace gamemd {
int SpawnManagerClass::CountAliveSpawns()
{

  int v1; // edx
  int result; // eax
  int spawnVectorCount; // ecx

  v1 = *(unsigned int *)this->__pad_48; /*0x6b7d30*/
  result = 0; /*0x6b7d33*/
  if ( v1 > 0 ) /*0x6b7d37*/
  {
    spawnVectorCount = this->spawnVectorCount; /*0x6b7d39*/
    do /*0x6b7d4a*/
    {
      if ( *(unsigned int *)(*(unsigned int *)spawnVectorCount + 4) != 7 ) /*0x6b7d43*/
        ++result; /*0x6b7d45*/
      spawnVectorCount += 4; /*0x6b7d46*/
      --v1; /*0x6b7d49*/
    }
    while ( v1 ); /*0x6b7d4a*/
  }
  return result; /*0x6b7d4d*/

}
} // namespace ra2

// 0x6B7D50
namespace gamemd {
int SpawnManagerClass::CountDockedSpawns()
{

  int v1; // esi
  int result; // eax
  int spawnVectorCount; // edx
  int v4; // ecx

  v1 = *(unsigned int *)this->__pad_48; /*0x6b7d51*/
  result = 0; /*0x6b7d54*/
  if ( v1 > 0 ) /*0x6b7d58*/
  {
    spawnVectorCount = this->spawnVectorCount; /*0x6b7d5a*/
    do /*0x6b7d70*/
    {
      v4 = *(unsigned int *)(*(unsigned int *)spawnVectorCount + 4); /*0x6b7d5f*/
      if ( v4 == 6 || !v4 ) /*0x6b7d69*/
        ++result; /*0x6b7d6b*/
      spawnVectorCount += 4; /*0x6b7d6c*/
      --v1; /*0x6b7d6f*/
    }
    while ( v1 ); /*0x6b7d70*/
  }
  return result; /*0x6b7d72*/

}
} // namespace ra2

// 0x6B7DE0
namespace gamemd {
int SpawnManagerClass::PowerDrainUpdate(int a2)
{

  int SpawnManagerClass_field_6C; // eax
  int v4; // eax
  int SpawnManagerClass_field_68; // eax
  int v6; // eax
  int SpawnManagerClass_field_5C; // edx
  int SpawnManagerClass_field_64; // eax
  int v9; // edx
  int SpawnManagerClass_field_58; // eax
  int result; // eax
  int v12; // eax
  TechnoClass *owner; // esi
  int v14; // eax

  AbstractClass::ProcessPower((AbstractClass *)this); /*0x6b7de9*/
  Power::TimerProcess(this->SpawnManagerClass_field_70); /*0x6b7df4*/
  SpawnManagerClass_field_6C = this->SpawnManagerClass_field_6C; /*0x6b7df9*/
  if ( SpawnManagerClass_field_6C ) /*0x6b7dfe*/
  {
    v4 = (*(int (**)(int))(*(unsigned int *)(SpawnManagerClass_field_6C + 4) + 16))(SpawnManagerClass_field_6C + 4); /*0x6b7e07*/
    Power::TimerProcess(v4); /*0x6b7e0d*/
  }
  SpawnManagerClass_field_68 = this->SpawnManagerClass_field_68; /*0x6b7e12*/
  if ( SpawnManagerClass_field_68 ) /*0x6b7e17*/
  {
    v6 = (*(int (**)(int))(*(unsigned int *)(SpawnManagerClass_field_68 + 4) + 16))(SpawnManagerClass_field_68 + 4); /*0x6b7e20*/
    Power::TimerProcess(v6); /*0x6b7e26*/
  }
  SpawnManagerClass_field_5C = this->SpawnManagerClass_field_5C; /*0x6b7e2b*/
  SpawnManagerClass_field_64 = (int)(this->SpawnManagerClass_field_64); /*0x6b7e2e*/
  if ( SpawnManagerClass_field_5C != -1 ) /*0x6b7e34*/
  {
    if ( *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) - SpawnManagerClass_field_5C >= SpawnManagerClass_field_64 ) /*0x6b7e40*/
      SpawnManagerClass_field_64 = 0; /*0x6b7e46*/
    else
      SpawnManagerClass_field_64 -= *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) - SpawnManagerClass_field_5C; /*0x6b7e42*/
  }
  Power::TimerProcess(SpawnManagerClass_field_64); /*0x6b7e4b*/
  v9 = *(unsigned int *)&this->__pad_48[8]; /*0x6b7e50*/
  SpawnManagerClass_field_58 = this->SpawnManagerClass_field_58; /*0x6b7e53*/
  if ( v9 != -1 ) /*0x6b7e59*/
  {
    if ( *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) - v9 >= SpawnManagerClass_field_58 ) /*0x6b7e65*/
      SpawnManagerClass_field_58 = 0; /*0x6b7e6b*/
    else
      SpawnManagerClass_field_58 -= *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) - v9; /*0x6b7e67*/
  }
  Power::TimerProcess(SpawnManagerClass_field_58); /*0x6b7e70*/
  Power::TimerProcess(*(unsigned int *)this->__pad_48); /*0x6b7e7b*/
  Power::TimerProcess((int)this->spawnType); /*0x6b7e86*/
  result = (int)this->spawnOwner; /*0x6b7e8b*/
  if ( result ) /*0x6b7e90*/
  {
    v12 = (*(int (**)(int))(*(unsigned int *)(result + 4) + 16))(result + 4); /*0x6b7e99*/
    result = Power::TimerProcess(v12); /*0x6b7e9f*/
  }
  owner = this->owner; /*0x6b7ea4*/
  if ( owner ) /*0x6b7ea9*/
  {
    v14 = (*((int (**)(void **))((unsigned int *)owner)[0] + 4))(&((unsigned int *)owner)[0]); /*0x6b7eb2*/
    return Power::TimerProcess(v14); /*0x6b7eb8*/
  }
  return result; /*0x6b7ebd*/

}
} // namespace ra2

// 0x6B7F10
namespace gamemd {
AbstractClass * * SpawnManagerClass::LoadFromStream(int aP1, AbstractClass * aP1_4)
{

  SpawnManagerClass *v2; // ebx
  int v3; // esi
  int Prefix_0; // ebp
  int v5; // edi
  int *spawns; // esi
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  int spawnVectorCapacity; // ecx
  int v11; // eax
  int v12; // eax
  int spawnVectorCount; // edx
  int v14; // esi
  int v16; // [esp+28h] [ebp-4h] BYREF

  v2 = aP1; /*0x6b7f12*/
  v3 = aP1_4; /*0x6b7f18*/
  Prefix_0 = AbstractClass::SaveLoad_Prefix_0(aP1, aP1_4); /*0x6b7f24*/
  v5 = 0; /*0x6b7f26*/
  if ( Prefix_0 >= 0 ) /*0x6b7f2a*/
  {
    if ( v2 ) /*0x6b7f32*/
    {
      AbstractClass::InitVtables((AbstractClass *)v2, (int)&aP1); /*0x6b7f3b*/
      SpawnManagerClass::Constructor_6B83A0((SpawnManagerClass *)v2->spawns, 0, 0); /*0x6b7f45*/
      *(unsigned int *)&v2->__pad_48[8] = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x6b7f51*/
      v2->SpawnManagerClass_field_58 = 0; /*0x6b7f57*/
      ((Timer *)((Timer *)&v2->SpawnManagerClass_field_5C))->Start(0); /*0x6b7f5a*/
      v2->AbstractClass = &vt_SpawnManagerClass; /*0x6b7f5f*/
      ((unsigned int *)v2)[0] = &vt_SpawnManagerClass; /*0x6b7f65*/
      ((unsigned int *)v2)[0] = &vt_SpawnManagerClass; /*0x6b7f6c*/
      ((unsigned int *)v2)[0] = &vt_SpawnManagerClass; /*0x6b7f73*/
    }
    Prefix_0 = (*(int (**)(int, int *, int, unsigned int))(*(unsigned int *)v3 + 12))(v3, &v16, 4, 0); /*0x6b7f88*/
    if ( Prefix_0 >= 0 ) /*0x6b7f8c*/
    {
      spawns = v2->spawns; /*0x6b7f92*/
      if ( v2 != (SpawnManagerClass *)-56 ) /*0x6b7f97*/
      {
        SpawnControlVector::Constructor((SpawnControlVector *)v2->spawns, 0, 0); /*0x6b7f9d*/
        *spawns = (int)&vt_DynamicVectorClass; /*0x6b7fa2*/
        *(unsigned int *)&v2->__pad_48[4] = 10; /*0x6b7fa8*/
        *(unsigned int *)v2->__pad_48 = 0; /*0x6b7faf*/
      }
      v7 = v16; /*0x6b7fb2*/
      aP1 = 0; /*0x6b7fb6*/
      if ( v16 <= 0 ) /*0x6b7fbc*/
      {
LABEL_20:
        v14 = 0; /*0x6b804d*/
        if ( v7 > 0 ) /*0x6b8051*/
        {
          do /*0x6b8069*/
            ObjectPtr::RegisterForTracking( /*0x6b805f*/
              (int)&SwizzleManagerClass_Instance,
              *(int **)(v2->spawnVectorCount + 4 * v14++));
          while ( v14 < v16 ); /*0x6b8069*/
        }
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v2->owner); /*0x6b8074*/
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v2->spawnOwner); /*0x6b8082*/
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &v2->SpawnManagerClass_field_68); /*0x6b8090*/
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &v2->SpawnManagerClass_field_6C); /*0x6b809e*/
      }
      else
      {
        while ( 1 ) /*0x6b7fc8*/
        {
          v8 = __2_YAPAXI_Z(0x18u); /*0x6b7fc8*/
          if ( v8 ) /*0x6b7fd2*/
          {
            v9 = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x6b7fd4*/
            *(unsigned int *)(v8 + 16) = 0; /*0x6b7fda*/
            *(unsigned int *)(v8 + 8) = v9; /*0x6b7fdd*/
            v5 = v8; /*0x6b7fe0*/
          }
          Prefix_0 = (*(int (**)(int, int, int, unsigned int))(*(unsigned int *)aP1_4 + 12))(aP1_4, v5, 24, 0); /*0x6b7ff1*/
          if ( Prefix_0 < 0 ) /*0x6b7ff5*/
            break; /*0x6b7ff5*/
          spawnVectorCapacity = v2->spawnVectorCapacity; /*0x6b7ffb*/
          if ( *(unsigned int *)v2->__pad_48 < spawnVectorCapacity /*0x6b8020*/
            || (BYTE1(v2->creationFrame) || !spawnVectorCapacity)
            && (v11 = *(unsigned int *)&v2->__pad_48[4], v11 > 0)
            && (*(uint8_t (**)(int *, int, unsigned int))(*spawns + 8))(
                 v2->spawns,
                 spawnVectorCapacity + v11,
                 0) )
          {
            v12 = *(unsigned int *)v2->__pad_48; /*0x6b8027*/
            spawnVectorCount = v2->spawnVectorCount; /*0x6b802a*/
            *(unsigned int *)v2->__pad_48 = v12 + 1; /*0x6b8030*/
            *(unsigned int *)(spawnVectorCount + 4 * v12) = v5; /*0x6b8033*/
          }
          v7 = v16; /*0x6b803a*/
          aP1 = (SpawnManagerClass *)((char *)aP1 + 1); /*0x6b8041*/
          if ( (int)aP1 >= v16 ) /*0x6b8045*/
            goto LABEL_20; /*0x6b8045*/
          v5 = 0; /*0x6b7fc4*/
        }
      }
    }
  }
  return Prefix_0; /*0x6b80a3*/

}
} // namespace ra2

// 0x6B7ED0
namespace gamemd {
int SpawnManagerClass::ddtor(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x6b7ed6*/
    return -2147467261; /*0x6b7ed8*/
  *a2 = 108652929; /*0x6b7ee6*/
  a2[1] = 299085213; /*0x6b7eee*/
  a2[2] = 268441278; /*0x6b7ef7*/
  a2[3] = unk_7E986C; /*0x6b7f00*/
  return 0; /*0x6b7edd*/

}
} // namespace gamemd

// 0x6B80B0
namespace gamemd {
int SpawnManagerClass::SaveState(TechnoTypeClass * aP0, int * a1, int aP2)
{

  int result; // eax
  int v4; // edx
  int i; // edi

  result = AbstractClass::SaveLoad_Prefix((int *)aP0, a1, aP2); /*0x6b80c2*/
  if ( result >= 0 ) /*0x6b80c9*/
  {
    v4 = *a1; /*0x6b80ce*/
    aP2 = *(unsigned int *)aP0->__pad_48; /*0x6b80da*/
    result = (*(int (**)(int *, int *, int, unsigned int))(v4 + 16))(a1, &aP2, 4, 0); /*0x6b80de*/
    if ( result >= 0 ) /*0x6b80e3*/
    {
      for ( i = 0; i < aP2; ++i ) /*0x6b80ed*/
      {
        result = (*(int (**)(int *, unsigned int, int, unsigned int))(*a1 + 16))( /*0x6b80fd*/
                   a1,
                   *(unsigned int *)(aP0->spawnVectorCount + 4 * i),
                   24,
                   0);
        if ( result < 0 ) /*0x6b8102*/
          break; /*0x6b8102*/
      }
    }
  }
  return result; /*0x6b810d*/

}
} // namespace gamemd

// 0x6B8120
namespace gamemd {
int SpawnManagerClass::StubReturn116()
{

  return 116; /*0x6b8125*/

}
} // namespace gamemd

// 0x6B8130
namespace gamemd {
int SpawnManagerClass::StubReturn65()
{

  return 65; /*0x6b8135*/

}
} // namespace gamemd

// 0x6B8140
namespace gamemd {
SpawnManagerClass * SpawnManagerClass::ProcessEvent(void * Block, char a2)
{

  SpawnManagerClass::Constructor_SpawnManagerClass((TaskManager *)Block); /*0x6b8143*/
  if ( (a2 & 1) != 0 ) /*0x6b814d*/
    __3_YAXPAX_Z(Block); /*0x6b8150*/
  return Block; /*0x6b815a*/

}
} // namespace gamemd

// 0x6B8160
namespace gamemd {
void SpawnManagerClass_25::ddtor(void *a1_1, void *a2_1)
{

  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x6b8166*/
  this->m_10 = 0; /*0x6b8169*/
  if ( v2 && BYTE1(this->m_C) ) /*0x6b8170*/
  {
    __3_YAXPAX_Z(v2); /*0x6b8176*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x6b817e*/
  }
  BYTE1(this->m_C) = 0; /*0x6b8181*/
  this->m_8 = 0; /*0x6b8184*/

}
} // namespace gamemd

// 0x6B8190
namespace gamemd {
unsigned int SpawnManagerClass_25::LoadState(int a2)
{

  if ( LOBYTE(this->m_C) ) /*0x6b8190*/
    return (unsigned int)(a2 - *(unsigned int *)&this->m_1[3]) >> 2; /*0x6b81a5*/
  else
    return 0; /*0x6b8197*/

}
} // namespace gamemd

// 0x6B81B0
namespace gamemd {
int SpawnManagerClass_25::SaveState(int a2)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x6b81ba*/

}
} // namespace gamemd

// 0x6B8220
namespace gamemd {
char SpawnManagerClass_25::AddRef(int a2)
{

  int v2; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

  v2 = *((unsigned int *)this + 2); /*0x6b8222*/
  if ( v2 == *(unsigned int *)(a2 + 8) ) /*0x6b822d*/
  {
    v3 = 0; /*0x6b822f*/
    if ( v2 <= 0 ) /*0x6b8233*/
      return 1; /*0x6b8253*/
    v4 = *(unsigned int **)&this->m_1[3]; /*0x6b8235*/
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x6b823b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x6b8244*/
    {
      ++v3; /*0x6b8246*/
      ++v4; /*0x6b8247*/
      if ( v3 >= v2 ) /*0x6b824c*/
        return 1; /*0x6b824c*/
    }
  }
  return 0; /*0x6b824e*/

}
} // namespace gamemd

// 0x6B83A0
namespace gamemd {
unsigned int * SpawnManagerClass::Constructor_6B83A0(DynamicVector * aP1, DynamicVector * aP2)
{

  ((unsigned int *)this)[0] = 0; /*0x6b83a9*/
  ((unsigned int *)this)[0] = (void *)aP1; /*0x6b83b0*/
  LOBYTE(((unsigned int *)this)[0]) = 1; /*0x6b83b3*/
  BYTE1(((unsigned int *)this)[0]) = 0; /*0x6b83b7*/
  this->AbstractClass = &vt_VectorClass; /*0x6b83bb*/
  if ( aP1 ) /*0x6b83c1*/
  {
    if ( aP2 ) /*0x6b83c9*/
    {
      ((unsigned int *)this)[0] = (void *)aP2; /*0x6b83cb*/
    }
    else
    {
      ((unsigned int *)this)[0] = (void *)__2_YAPAXI_Z(4 * aP1); /*0x6b83dc*/
      BYTE1(((unsigned int *)this)[0]) = 1; /*0x6b83df*/
    }
  }
  this->AbstractClass = &vt_DynamicVectorClass; /*0x6b83e3*/
  ((unsigned int *)this)[0] = 10; /*0x6b83e9*/
  ((unsigned int *)this)[0] = 0; /*0x6b83f0*/
  return &this->AbstractClass; /*0x6b83f9*/

}
} // namespace gamemd

// 0x6B8400
namespace gamemd {
char SpawnManagerClass_25::Release(int a2, unsigned int * a3)
{

  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x6b840c*/
  {
    LOBYTE(this->m_C) = 0; /*0x6b8412*/
    if ( a3 ) /*0x6b8418*/
      v4 = a3; /*0x6b842e*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x6b842a*/
    LOBYTE(this->m_C) = 1; /*0x6b8432*/
    if ( !v4 ) /*0x6b8436*/
      return 0; /*0x6b84aa*/
    if ( *(unsigned int *)&this->m_1[3] ) /*0x6b8438*/
    {
      m_8 = this->m_8; /*0x6b843f*/
      if ( a2 < m_8 ) /*0x6b8444*/
        m_8 = a2; /*0x6b8446*/
      for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * i - 4) ) /*0x6b844c*/
        ++i; /*0x6b8451*/
      if ( BYTE1(this->m_C) ) /*0x6b845e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x6b8469*/
        *(unsigned int *)&this->m_1[3] = 0; /*0x6b8471*/
      }
    }
    *(unsigned int *)&this->m_1[3] = v4; /*0x6b847a*/
    this->m_8 = a2; /*0x6b8482*/
    BYTE1(this->m_C) = a3 == 0; /*0x6b8485*/
  }
  else
  {
    (*(void (**)(_DynamicVectorClass_PAUSpawnControl_SpawnManagerClass *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x6b848e*/
  }
  v7 = this->m_8; /*0x6b8491*/
  if ( v7 < this->m_10 ) /*0x6b8499*/
    this->m_10 = v7; /*0x6b849b*/
  return 1; /*0x6b849e*/

}
} // namespace gamemd

// 0x6B84B0
namespace gamemd {
int SpawnManagerClass_25::Spawn(unsigned int * a2)
{

  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

  m_10 = this->m_10; /*0x6b84b0*/
  result = 0; /*0x6b84b3*/
  if ( m_10 <= 0 ) /*0x6b84b8*/
    return -1; /*0x6b84cf*/
  for ( i = *(unsigned int **)&this->m_1[3]; *i != *a2; ++i ) /*0x6b84be*/
  {
    if ( ++result >= m_10 ) /*0x6b84cd*/
      return -1; /*0x6b84cd*/
  }
  return result; /*0x6b84d2*/

}
}
// 0x6B8790
namespace gamemd {
DynamicVector * SpawnManagerClass_25::QueryInterface(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = *(void **)&Block->m_1[3]; /*0x6b8793*/
  *(unsigned int *)Block->__pad_0 = &vt_VectorClass; /*0x6b8796*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x6b87a0*/
  {
    __3_YAXPAX_Z(v3); /*0x6b87a8*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x6b87b0*/
  }
  BYTE1(Block->m_C) = 0; /*0x6b87bb*/
  Block->m_8 = 0; /*0x6b87c1*/
  if ( (a2 & 1) != 0 ) /*0x6b87c8*/
    __3_YAXPAX_Z(Block); /*0x6b87cb*/
  return Block->__pad_0; /*0x6b87d5*/

}
} // namespace gamemd
