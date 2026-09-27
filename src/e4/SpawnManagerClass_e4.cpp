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

// 0x6B6C90
namespace gamemd {
SpawnManagerClass::SpawnManagerClass(TechnoClass * aP1, int a3, int a4, int a5, int a6)
{
  int *v8; // ebp
  int v10; // ebx
  int v11; // eax
  int v12; // eax
  HouseClass * v13;
  int v14; // eax
  int v15; // ecx
  void * v16;
  int v17; // edx
  SpawnManagerClass * v18;
  int v20; // [esp+14h] [ebp-8h]
  int i; // [esp+20h] [ebp+4h]

  AbstractClass::Constructor(); /*0x6b6c99*/
  SpawnControlVector::Constructor(0, 0); /*0x6b6ca7*/
  this->q04C = 10; /*0x6b6cb6*/
  this->q048 = 0; /*0x6b6cbd*/
  g_CurrentFrame = g_CurrentFrame; /*0x6b6cc0*/
  this->SpawnManagerClass_field_58 = 0; /*0x6b6cc5*/
  this->q050 = g_CurrentFrame; /*0x6b6cc8*/
  this->SpawnManagerClass_field_5C = g_CurrentFrame; /*0x6b6cd5*/
  this->SpawnManagerClass_field_64 = 0; /*0x6b6cdc*/
  this->spawnOwner = a3; /*0x6b6cdf*/
  this->owner = aP1; /*0x6b6ce6*/
  this->spawnType = a4; /*0x6b6d0a*/
  this->spawnCount = a5; /*0x6b6d0d*/
  this->SpawnManagerClass_field_34 = a6; /*0x6b6d10*/
  for ( i = 0; i < this->spawnType; ++i ) /*0x6b6d17*/
  {
    v8 = (int *)operator new(0x18u); /*0x6b6d24*/
    if ( !v8 ) /*0x6b6d2b*/
      break; /*0x6b6d2b*/
    g_CurrentFrame = g_CurrentFrame; /*0x6b6d31*/
    v8[4] = 0; /*0x6b6d36*/
    v8[2] = (int)g_CurrentFrame; /*0x6b6d39*/
    v10 = **(unsigned int **)(&this->uniqueId0); /*0x6b6d44*/
    v11 = (*(int (__thiscall **)(unsigned int))(**(unsigned int **)(&this->vtable46) + 60))(this->owner); /*0x6b6d46*/
    v12 = (*(int (__thiscall **)(unsigned int, int))(v10 + 140))(this->spawnOwner, v11); /*0x6b6d4d*/
    *v8 = v12; /*0x6b6d55*/
    if ( v12 ) /*0x6b6d5a*/
    {
      v13 = this->spawnOwner; /*0x6b6d66*/
      v8[5] = v13 == *((unsigned int *)g_RulesClass_Instance + 312) /*0x6b6d86*/
           || v13 == *((unsigned int *)g_RulesClass_Instance + 325)
           || v13 == *((unsigned int *)g_RulesClass_Instance + 338);
      (*(void (__thiscall **)(int))(*(unsigned int *)v12 + 212))(v12); /*0x6b6d91*/
      *(unsigned int *)(*v8 + 724) = this->owner; /*0x6b6da1*/
      v8[1] = 0; /*0x6b6da7*/
      v8[2] = (int)g_CurrentFrame; /*0x6b6db1*/
      v8[3] = v20; /*0x6b6db4*/
      v8[4] = 0; /*0x6b6db7*/
      v14 = this->spawnVectorCapacity; /*0x6b6dba*/
      if ( this->q048 < v14 /*0x6b6dda*/
        || (this->u8_45 || !v14)
        && (v15 = this->q04C, v15 > 0)
        && (*(uint8_t (__thiscall **)(int, int, unsigned int))(this->spawns + 8))(&this->u32_E0, v14 + v15, 0) )
      {
        v16 = this->q048; /*0x6b6de1*/
        v17 = this->spawnVectorCount; /*0x6b6de4*/
        this->q048 = v16 + 1; /*0x6b6dea*/
        *(unsigned int *)(v17 + 4 * v16) = v8; /*0x6b6ded*/
      }
    }
  }
  this->q050 = g_CurrentFrame; /*0x6b6e0d*/
  this->SpawnManagerClass_field_54 = v20; /*0x6b6e19*/
  this->SpawnManagerClass_field_58 = 20; /*0x6b6e1c*/
  this->SpawnManagerClass_field_68 = 0; /*0x6b6e1f*/
  this->SpawnManagerClass_field_6C = 0; /*0x6b6e22*/
  this->SpawnManagerClass_field_70 = 0; /*0x6b6e25*/
  this->SpawnManagerClass_field_5C = g_CurrentFrame; /*0x6b6e2f*/
  this->SpawnManagerClass_field_60 = v20; /*0x6b6e32*/
  this->SpawnManagerClass_field_64 = 0; /*0x6b6e35*/
  if ( dword_B0B890 < dword_B0B888 /*0x6b6e69*/
    || (byte_B0B88D || !dword_B0B888)
    && dword_B0B894 > 0
    && (*(uint8_t (__thiscall **)(int *, int, unsigned int))(SpawnManagerClass_Array + 8))(
         &SpawnManagerClass_Array,
         dword_B0B888 + dword_B0B894,
         0) )
  {
    v18 = (gamemd::SpawnManagerClass *)(dword_B0B890++);
    *((unsigned int *)dword_B0B884 + v18) = this; /*0x6b6e85*/
  }
  return this; /*0x6b6e8a*/
}
} // namespace ra2

// 0x6B6EA0
namespace gamemd {
void* SpawnManagerClass::Constructor()
{
  SpawnManagerClass * v2;
  int v4; // [esp+10h] [ebp-8h]

  AbstractClass::Constructor(); /*0x6b6ea8*/
  SpawnControlVector::Constructor((unsigned int *)(&this->abstractFlags6), 0, 0); /*0x6b6eb6*/
  this->q04C = 10; /*0x6b6ec1*/
  this->q048 = 0; /*0x6b6ec8*/
  this->q050 = g_CurrentFrame; /*0x6b6ed4*/
  this->SpawnManagerClass_field_58 = 0; /*0x6b6ed7*/
  this->SpawnManagerClass_field_5C = g_CurrentFrame; /*0x6b6ee0*/
  this->SpawnManagerClass_field_64 = 0; /*0x6b6ee3*/
  this->owner = 0; /*0x6b6f01*/
  this->spawnOwner = 0; /*0x6b6f04*/
  this->spawnType = 0; /*0x6b6f07*/
  this->q050 = g_CurrentFrame; /*0x6b6f11*/
  this->SpawnManagerClass_field_54 = v4; /*0x6b6f14*/
  this->SpawnManagerClass_field_58 = 0; /*0x6b6f17*/
  this->SpawnManagerClass_field_68 = 0; /*0x6b6f1a*/
  this->SpawnManagerClass_field_6C = 0; /*0x6b6f1d*/
  this->SpawnManagerClass_field_70 = 0; /*0x6b6f20*/
  this->SpawnManagerClass_field_5C = g_CurrentFrame; /*0x6b6f28*/
  this->SpawnManagerClass_field_60 = v4; /*0x6b6f2f*/
  this->SpawnManagerClass_field_64 = 0; /*0x6b6f32*/
  if ( dword_B0B890 < dword_B0B888 /*0x6b6f69*/
    || (byte_B0B88D || !dword_B0B888)
    && dword_B0B894 > 0
    && (*(uint8_t (__thiscall **)(int *, int, unsigned int))(SpawnManagerClass_Array + 8))(
         &SpawnManagerClass_Array,
         dword_B0B888 + dword_B0B894,
         0) )
  {
    v2 = (gamemd::SpawnManagerClass *)(dword_B0B890++);
    *((unsigned int *)dword_B0B884 + v2) = this; /*0x6b6f85*/
  }
  return this; /*0x6b6f8a*/
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

  if ( g_WTFMode ) /*0x6b7037*/
    TaskManager::Update(); /*0x6b7039*/
  for ( i = this->q048 - 1; i >= 0; --i ) /*0x6b7042*/
  {
    if ( *(unsigned int *)(this->spawnVectorCount + 4 * i) ) /*0x6b7047*/
      RA2_OPDEL(*(void **)(this->spawnVectorCount + 4 * i)); /*0x6b704f*/
  }
  v3 = (int)(this->spawnVectorCapacity);
  (*(void (__thiscall **)(int))(this->spawns + 12))(&this->abstractFlags6); /*0x6b7066*/
  (*(void (__thiscall **)(int, int, unsigned int))(this->spawns + 8))(&this->u32_E0, v3, 0); /*0x6b7070*/
  v4 = (*(int (__thiscall **)(int *, int *))(SpawnManagerClass_Array + 16))(&SpawnManagerClass_Array, &this); /*0x6b7087*/
  if ( v4 != -1 && v4 < dword_B0B890 && v4 < --dword_B0B890 ) /*0x6b70a3*/
  {
    do /*0x6b70bb*/
    {
      ++v4; /*0x6b70ab*/
      *((unsigned int *)dword_B0B884 + v4 - 1) = *((unsigned int *)dword_B0B884 + v4); /*0x6b70af*/
    }
    while ( v4 < dword_B0B890 ); /*0x6b70bb*/
  }
  v5 = *(void **)(&this->nextArrayIndex0); /*0x6b70bd*/
  if ( v5 && this->u8_45 ) /*0x6b70ca*/
  {
    RA2_OPDEL(v5); /*0x6b70d2*/
    this->spawnVectorCount = 0; /*0x6b70da*/
  }
  this->u8_45 = 0; /*0x6b70e3*/
  this->spawnVectorCapacity = 0; /*0x6b70e7*/
  AbstractClass::DTOR(); /*0x6b70ee*/
}
} // namespace ra2

// 0x6B7B90
namespace gamemd {
int SpawnManagerClass::SetTarget(int a2)
{
  int result; // eax

  a2 = a2; /*0x6b7b90*/
  if ( a2 != *(&this->vtable36) ) /*0x6b7b99*/
    *(&this->vtable37) = a2; /*0x6b7b9b*/
}
} // namespace ra2

// 0x6B7D30
namespace gamemd {
int SpawnManagerClass::CountAliveSpawns()
{
  int v1; // edx
  int result; // eax
  int v3; // ecx

  v1 = *(unsigned int *)&this->q048; /*0x6b7d30*/
  result = 0; /*0x6b7d33*/
  if ( v1 > 0 ) /*0x6b7d37*/
  {
    v3 = *(unsigned int *)&this->spawnVectorCount; /*0x6b7d39*/
    do /*0x6b7d4a*/
    {
      if ( *(unsigned int *)(*(unsigned int *)v3 + 4) != 7 ) /*0x6b7d43*/
        ++result; /*0x6b7d45*/
      v3 += 4; /*0x6b7d46*/
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
  int v3; // edx
  int v4; // ecx

  v1 = *(unsigned int *)&this->q048; /*0x6b7d51*/
  result = 0; /*0x6b7d54*/
  if ( v1 > 0 ) /*0x6b7d58*/
  {
    v3 = *(unsigned int *)&this->spawnVectorCount; /*0x6b7d5a*/
    do /*0x6b7d70*/
    {
      v4 = *(unsigned int *)(*(unsigned int *)v3 + 4); /*0x6b7d5f*/
      if ( v4 == 6 || !v4 ) /*0x6b7d69*/
        ++result; /*0x6b7d6b*/
      v3 += 4; /*0x6b7d6c*/
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
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // edx
  int v8; // eax
  IUnknown * v9;
  int v10; // eax
  HouseClass * result;
  int v12; // eax
  TechnoClass * v13;
  int v14; // eax

  AbstractClass::ProcessPower(); /*0x6b7de9*/
  Power::TimerProcess(this->SpawnManagerClass_field_70); /*0x6b7df4*/
  v3 = this->SpawnManagerClass_field_6C; /*0x6b7df9*/
  if ( v3 ) /*0x6b7dfe*/
  {
    v4 = (*(int (__stdcall **)(int))(*(unsigned int *)(v3 + 4) + 16))(v3 + 4); /*0x6b7e07*/
    Power::TimerProcess(v4); /*0x6b7e0d*/
  }
  v5 = this->SpawnManagerClass_field_68; /*0x6b7e12*/
  if ( v5 ) /*0x6b7e17*/
  {
    v6 = (*(int (__stdcall **)(int))(*(unsigned int *)(v5 + 4) + 16))(v5 + 4); /*0x6b7e20*/
    Power::TimerProcess(v6); /*0x6b7e26*/
  }
  v7 = this->SpawnManagerClass_field_5C; /*0x6b7e2b*/
  v8 = this->SpawnManagerClass_field_64; /*0x6b7e2e*/
  if ( v7 != -1 ) /*0x6b7e34*/
  {
    if ( (int)g_CurrentFrame - v7 >= v8 ) /*0x6b7e40*/
      v8 = 0; /*0x6b7e46*/
    else
      v8 -= (int)g_CurrentFrame - v7; /*0x6b7e42*/
  }
  Power::TimerProcess(v8); /*0x6b7e4b*/
  v9 = this->q050; /*0x6b7e50*/
  v10 = this->SpawnManagerClass_field_58; /*0x6b7e53*/
  if ( v9 != -1 ) /*0x6b7e59*/
  {
    if ( (int)g_CurrentFrame - v9 >= v10 ) /*0x6b7e65*/
      v10 = 0; /*0x6b7e6b*/
    else
      v10 -= (int)g_CurrentFrame - v9; /*0x6b7e67*/
  }
  Power::TimerProcess(v10); /*0x6b7e70*/
  Power::TimerProcess(this->q048); /*0x6b7e7b*/
  Power::TimerProcess(this->spawnType); /*0x6b7e86*/
  result = this->spawnOwner; /*0x6b7e8b*/
  if ( result ) /*0x6b7e90*/
  {
    v12 = (gamemd::HouseClass *)((*(int (__stdcall **)(int))(result->vtable2 + 16))(result + 4));
    result = (gamemd::HouseClass *)(Power::TimerProcess(v12));
  }
  v13 = this->owner; /*0x6b7ea4*/
  if ( v13 ) /*0x6b7ea9*/
  {
    v14 = (*(int (__stdcall **)(int))(v13->vtable2 + 16))(v13 + 4); /*0x6b7eb2*/
    return Power::TimerProcess(v14); /*0x6b7eb8*/
  }
  return (int)(result);
}
} // namespace ra2

// 0x6B7F10
namespace gamemd {
AbstractClass * * SpawnManagerClass::LoadFromStream(int aP1, AbstractClass * aP1_4)
{
  int v2; // ebx
  int v3; // esi
  int Prefix_0; // ebp
  unsigned int *v5; // edi
  int v6; // esi
  int v7; // eax
  unsigned int *v8; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  int v13; // edx
  int v14; // esi
  int v16; // [esp+28h] [ebp-4h] BYREF

  v2 = aP1; /*0x6b7f12*/
  aP1_4 = aP1_4; /*0x6b7f18*/
  Prefix_0 = AbstractClass::SaveLoad_Prefix_0(aP1, aP1_4); /*0x6b7f24*/
  v5 = 0; /*0x6b7f26*/
  if ( Prefix_0 >= 0 ) /*0x6b7f2a*/
  {
    if ( v2 ) /*0x6b7f32*/
    {
      AbstractClass::InitVtables((unsigned int *)v2, (int)&aP1); /*0x6b7f3b*/
      SpawnManagerClass::Constructor_6B83A0(0, 0); /*0x6b7f45*/
      v2->q050 = g_CurrentFrame; /*0x6b7f51*/
      v2->q058 = 0; /*0x6b7f57*/
      Timer::Start((unsigned int *)(v2 + 92), 0); /*0x6b7f5a*/
    }
    Prefix_0 = (*(int (__stdcall **)(int, int *, int, unsigned int))(*(unsigned int *)aP1_4 + 12))(aP1_4, &v16, 4, 0); /*0x6b7f88*/
    if ( Prefix_0 >= 0 ) /*0x6b7f8c*/
    {
      v6 = v2 + 56; /*0x6b7f92*/
      if ( v2 != -56 ) /*0x6b7f97*/
      {
        SpawnControlVector::Constructor(0, 0); /*0x6b7f9d*/
        v2->q04C = 10; /*0x6b7fa8*/
        v2->q048 = 0; /*0x6b7faf*/
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
              *(int **)(v2->q03C + 4 * v14++));
          while ( v14 < v16 ); /*0x6b8069*/
        }
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v2 + 36)); /*0x6b8074*/
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v2 + 40)); /*0x6b8082*/
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v2 + 104)); /*0x6b8090*/
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v2 + 108)); /*0x6b809e*/
      }
      else
      {
        while ( 1 ) /*0x6b7fc8*/
        {
          v8 = (unsigned int *)(operator new(0x18u));
          if ( v8 ) /*0x6b7fd2*/
          {
            g_CurrentFrame = g_CurrentFrame; /*0x6b7fd4*/
            v8[4] = 0; /*0x6b7fda*/
            v8[2] = g_CurrentFrame; /*0x6b7fdd*/
            v5 = v8; /*0x6b7fe0*/
          }
          Prefix_0 = (*(int (__stdcall **)(int, unsigned int *, int, unsigned int))(*(unsigned int *)aP1_4 + 12))(aP1_4, v5, 24, 0); /*0x6b7ff1*/
          if ( Prefix_0 < 0 ) /*0x6b7ff5*/
            break; /*0x6b7ff5*/
          v10 = v2->q040; /*0x6b7ffb*/
          if ( v2->q048 < v10 /*0x6b8020*/
            || (v2->u8_45 || !v10)
            && (v11 = v2->q04C, v11 > 0)
            && (*(uint8_t (__thiscall **)(int, int, unsigned int))(v6->Capacity)(v2 + 56, v10 + v11, 0) )
          {
            v12 = (unsigned int)(v2->q048);
            v13 = (unsigned int)(v2->q03C);
            v2->q048 = (unsigned int)(v12 + 1);
            *(unsigned int *)(v13 + 4 * v12) = v5; /*0x6b8033*/
          }
          v7 = v16; /*0x6b803a*/
          if ( ++aP1 >= v16 ) /*0x6b8045*/
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
  a2[3] = 1822515787; /*0x6b7f00*/
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

  result = AbstractClass::SaveLoad_Prefix(aP0, a1, aP2); /*0x6b80c2*/
  if ( result >= 0 ) /*0x6b80c9*/
  {
    v4 = *a1; /*0x6b80ce*/
    aP2 = aP0[18]; /*0x6b80da*/
    result = (*(int (__stdcall **)(int *, int *, int, unsigned int))(v4 + 16))(a1, &aP2, 4, 0); /*0x6b80de*/
    if ( result >= 0 ) /*0x6b80e3*/
    {
      for ( i = 0; i < aP2; ++i ) /*0x6b80ed*/
      {
        result = (*(int (__stdcall **)(int *, unsigned int, int, unsigned int))(*a1 + 16))(a1, *(unsigned int *)(aP0[15] + 4 * i), 24, 0); /*0x6b80fd*/
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
SpawnManagerClass * SpawnManagerClass::ProcessEvent(char a2)
{
  SpawnManagerClass::Constructor_SpawnManagerClass(); /*0x6b8143*/
  if ( (a2 & 1) != 0 ) /*0x6b814d*/
    RA2_OPDEL(); /*0x6b8150*/
  return this; /*0x6b815a*/
}
} // namespace gamemd

// 0x6B8160
namespace gamemd {
void SpawnManagerClass_25::ddtor()
{
  void *v2; // eax

  v2 = (void *)(*(unsigned int *)&this->q010);
  *(unsigned int *)((char *)&this->__pad_03B + 5) = 0; /*0x6b8169*/
  if ( v2 && this->IsAllocated ) /*0x6b8170*/
  {
    RA2_OPDEL(v2); /*0x6b8176*/
    this->Items = 0; /*0x6b817e*/
  }
  this->IsAllocated = 0; /*0x6b8181*/
  this->q008 = 0; /*0x6b8184*/
}
} // namespace gamemd

// 0x6B8190
namespace gamemd {
unsigned int SpawnManagerClass_25::LoadState(int a2)
{
  if ( this->IsInitialized ) /*0x6b8190*/
    return (unsigned int)(a2 - this->Items) >> 2; /*0x6b81a5*/
  else
    return 0; /*0x6b8197*/
}
} // namespace gamemd

// 0x6B81B0
namespace gamemd {
int SpawnManagerClass_25::SaveState(int a2)
{
  return *(unsigned int *)(this->Items + 4 * a2); /*0x6b81ba*/
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

  v2 = this->Capacity; /*0x6b8222*/
  if ( v2 == *(unsigned int *)(a2 + 8) ) /*0x6b822d*/
  {
    v3 = 0; /*0x6b822f*/
    if ( v2 <= 0 ) /*0x6b8233*/
      return 1; /*0x6b8253*/
    v4 = (unsigned int *)this->Items; /*0x6b8235*/
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
  this->Items = (unsigned int)(0);
  this->Capacity = (unsigned int)(aP1);
  *(unsigned char *)&this->vtable4 = 1; /*0x6b83b3*/
  this->u8_D = 0; /*0x6b83b7*/
  if ( aP1 ) /*0x6b83c1*/
  {
    if ( aP2 ) /*0x6b83c9*/
    {
      this->Items = (unsigned int)(aP2);
    }
    else
    {
      this->Items = operator new(4 * aP1); /*0x6b83dc*/
      this->IsAllocated = 1; /*0x6b83df*/
    }
  }
  this->u32_14 = (unsigned int *)(10);
  this->q010 = (unsigned int *)(0);
  return (unsigned int *)(this);
}
} // namespace gamemd

// 0x6B8400
namespace gamemd {
char SpawnManagerClass_25::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x6b840c*/
  {
    this->IsInitialized = (unsigned int *)(0);
    if ( a3 ) /*0x6b8418*/
      v4 = a3; /*0x6b842e*/
    else
      v4 = operator new(4 * a2); /*0x6b842a*/
    this->IsInitialized = 1; /*0x6b8432*/
    if ( !v4 ) /*0x6b8436*/
      return 0; /*0x6b84aa*/
    if ( this->Items ) /*0x6b8438*/
    {
      v5 = this->q008; /*0x6b843f*/
      if ( a2 < v5 ) /*0x6b8444*/
        v5 = a2; /*0x6b8446*/
      for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(this->Items + 4 * i - 4) ) /*0x6b844c*/
        ++i; /*0x6b8451*/
      if ( this->IsAllocated ) /*0x6b845e*/
      {
        RA2_OPDEL(this->q004); /*0x6b8469*/
        this->Items = 0; /*0x6b8471*/
      }
    }
    this->Items = (unsigned int)(v4);
    this->q008 = a2; /*0x6b8482*/
    this->IsAllocated = a3 == 0; /*0x6b8485*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(((unsigned int)(this->Items2))))(this); /*0x6b848e*/
  }
  v7 = this->q008; /*0x6b8491*/
  if ( v7 < this->q010 ) /*0x6b8499*/
    this->q010 = v7; /*0x6b849b*/
  return 1; /*0x6b849e*/
}
} // namespace gamemd

// 0x6B84B0
namespace gamemd {
int SpawnManagerClass_25::Spawn(unsigned int * a2)
{
  int v2; // edx
  int result; // eax
  unsigned int *i; // ecx

  v2 = this->q010; /*0x6b84b0*/
  result = 0; /*0x6b84b3*/
  if ( v2 <= 0 ) /*0x6b84b8*/
    return -1; /*0x6b84cf*/
  for ( i = (unsigned int *)this->Items; *i != *a2; ++i ) /*0x6b84be*/
  {
    if ( ++result >= v2 ) /*0x6b84cd*/
      return -1; /*0x6b84cd*/
  }
  return result; /*0x6b84d2*/
}
}
// 0x6B8790
namespace gamemd {
DynamicVector * SpawnManagerClass_25::QueryInterface(char a2)
{
  void *v3; // eax

  v3 = (void *)this->q004; /*0x6b8793*/
  if ( v3 && *(unsigned char *)&this->IsAllocated ) /*0x6b87a0*/
  {
    RA2_OPDEL(v3); /*0x6b87a8*/
    this->q004 = 0; /*0x6b87b0*/
  }
  *(unsigned char *)&this->IsAllocated = 0; /*0x6b87bb*/
  this->q008 = 0; /*0x6b87c1*/
  if ( (a2 & 1) != 0 ) /*0x6b87c8*/
    RA2_OPDEL(); /*0x6b87cb*/
  return this; /*0x6b87d5*/
}
} // namespace gamemd
