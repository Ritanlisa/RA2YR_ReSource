// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/SpawnManagerClass_25_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/Timer_e4.hpp"

// 0x6B6C90
namespace ra2 {
namespace game {
S SpawnManagerClass::SpawnManagerClass(TechnoClass * aP1, int a3, int a4, int a5, int a6)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  IUnknown *v7; // eax
  IUnknown *v9; // eax
  HouseClass *v13; // ecx
  int v20; // [esp+14h] [ebp-8h]
  TechnoClass *aP1a; // [esp+20h] [ebp+4h]

  AbstractClass::Constructor((AbstractClass *)this); /*0x6b6c99*/
  SpawnControlVector::Constructor((_DWORD *)(this + 56), 0, 0); /*0x6b6ca7*/
  this->spawns = &vt_DynamicVectorClass_SpawnManagerClass_SpawnControl; /*0x6b6cb0*/
  this->q04C = 10; /*0x6b6cb6*/
  this->q048 = 0; /*0x6b6cbd*/
  v7 = *(IUnknown **)&g_NetworkPlayerBuffer[5960]; /*0x6b6cc0*/
  this->SpawnManagerClass_field_58 = 0; /*0x6b6cc5*/
  this->q050 = v7; /*0x6b6cc8*/
  this->SpawnManagerClass_field_5C = *(_DWORD *)&g_NetworkPlayerBuffer[5960]; /*0x6b6cd5*/
  this->SpawnManagerClass_field_64 = 0; /*0x6b6cdc*/
  this->spawnOwner = a3; /*0x6b6cdf*/
  this->owner = aP1; /*0x6b6ce6*/
  *(_DWORD *)this = &SpawnManagerClass::`vftable'; /*0x6b6cef*/
  this->vtable1 = &SpawnManagerClass::`vftable'; /*0x6b6cf5*/
  this->vtable2 = &SpawnManagerClass::`vftable'; /*0x6b6cfc*/
  this->vtable3 = &vt_SpawnManagerClass; /*0x6b6d03*/
  this->spawnType = a4; /*0x6b6d0a*/
  this->spawnCount = a5; /*0x6b6d0d*/
  this->SpawnManagerClass_field_34 = a6; /*0x6b6d10*/
  for ( aP1a = 0; (int)aP1a < this->spawnType; aP1a = (TechnoClass *)((char *)aP1a + 1) ) /*0x6b6d17*/
  {
    int * v8 = (int *)__2_YAPAXI_Z(0x18u); /*0x6b6d24*/
    if ( !v8 ) /*0x6b6d2b*/
      break; /*0x6b6d2b*/
    v9 = *(IUnknown **)&g_NetworkPlayerBuffer[5960]; /*0x6b6d31*/
    v8[4] = 0; /*0x6b6d36*/
    v8[2] = (int)v9; /*0x6b6d39*/
    int v10 = *this->spawnOwner; /*0x6b6d44*/
    int v11 = (*(int (__thiscall **)(_DWORD))(*this->owner + 60))(this->owner); /*0x6b6d46*/
    int v12 = (*(int (__thiscall **)(_DWORD, int))(v10 + 140))(this->spawnOwner, v11); /*0x6b6d4d*/
    *v8 = v12; /*0x6b6d55*/
    if ( v12 ) /*0x6b6d5a*/
    {
      v13 = this->spawnOwner; /*0x6b6d66*/
      v8[5] = v13 == *(HouseClass **)(*(_DWORD *)&DataGlobal_87F8E4[30972] + 1248) /*0x6b6d86*/
           || v13 == *(HouseClass **)(*(_DWORD *)&DataGlobal_87F8E4[30972] + 1300)
           || v13 == *(HouseClass **)(*(_DWORD *)&DataGlobal_87F8E4[30972] + 1352);
      (*(void (__thiscall **)(int))(*(_DWORD *)v12 + 212))(v12); /*0x6b6d91*/
      *(_DWORD *)(*v8 + 724) = this->owner; /*0x6b6da1*/
      v8[1] = 0; /*0x6b6da7*/
      v8[2] = *(_DWORD *)&g_NetworkPlayerBuffer[5960]; /*0x6b6db1*/
      v8[3] = v20; /*0x6b6db4*/
      v8[4] = 0; /*0x6b6db7*/
      int v14 = this->spawnVectorCapacity; /*0x6b6dba*/
      if ( this->q048 < v14 /*0x6b6dda*/
        || (*(_BYTE *)(this + 69) || !v14)
  int v15; // ecx
        && (v15 = this->q04C, v15 > 0)
        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(this->spawns + 8))(this + 56, v14 + v15, 0) )
      {
        int v16 = this->q048; /*0x6b6de1*/
        int v17 = this->spawnVectorCount; /*0x6b6de4*/
        this->q048 = v16 + 1; /*0x6b6dea*/
        *(_DWORD *)(v17 + 4 * v16) = v8; /*0x6b6ded*/
      }
    }
  }
  this->q050 = *(_DWORD *)&g_NetworkPlayerBuffer[5960]; /*0x6b6e0d*/
  this->SpawnManagerClass_field_54 = v20; /*0x6b6e19*/
  this->SpawnManagerClass_field_58 = 20; /*0x6b6e1c*/
  this->SpawnManagerClass_field_68 = 0; /*0x6b6e1f*/
  this->SpawnManagerClass_field_6C = 0; /*0x6b6e22*/
  this->SpawnManagerClass_field_70 = 0; /*0x6b6e25*/
  this->SpawnManagerClass_field_5C = *(_DWORD *)&g_NetworkPlayerBuffer[5960]; /*0x6b6e2f*/
  this->SpawnManagerClass_field_60 = v20; /*0x6b6e32*/
  this->SpawnManagerClass_field_64 = 0; /*0x6b6e35*/
  if ( *(int *)&g_OverlayTypeConfig[16536] < *(int *)&g_OverlayTypeConfig[16528] /*0x6b6e69*/
    || (g_OverlayTypeConfig[16533] || !*(_DWORD *)&g_OverlayTypeConfig[16528])
    && *(int *)&g_OverlayTypeConfig[16540] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&g_OverlayTypeConfig[16520] + 8))(
         &g_OverlayTypeConfig[16520],
         *(_DWORD *)&g_OverlayTypeConfig[16528] + *(_DWORD *)&g_OverlayTypeConfig[16540],
         0) )
  {
    int v18 = (*(_DWORD *)&g_OverlayTypeConfig[16536])++; /*0x6b6e76*/
    *(_DWORD *)(*(_DWORD *)&g_OverlayTypeConfig[16524] + 4 * v18) = this; /*0x6b6e85*/
  }
  return this; /*0x6b6e8a*/
}
}
} // namespace game
} // namespace ra2

// 0x6B6EA0
namespace ra2 {
namespace game {
void* SpawnManagerClass::Constructor()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  AbstractClass::Constructor((AbstractClass *)this); /*0x6b6ea8*/
  SpawnControlVector::Constructor((_DWORD *)(this + 56), 0, 0); /*0x6b6eb6*/
  this->spawns = &vt_DynamicVectorClass_SpawnManagerClass_SpawnControl; /*0x6b6ebb*/
  this->q04C = 10; /*0x6b6ec1*/
  this->q048 = 0; /*0x6b6ec8*/
  this->q050 = g_CurrentFrame; /*0x6b6ed4*/
  this->SpawnManagerClass_field_58 = 0; /*0x6b6ed7*/
  this->SpawnManagerClass_field_5C = g_CurrentFrame; /*0x6b6ee0*/
  this->SpawnManagerClass_field_64 = 0; /*0x6b6ee3*/
  *(_DWORD *)this = &SpawnManagerClass::`vftable'; /*0x6b6ee6*/
  this->vtable1 = &SpawnManagerClass::`vftable'; /*0x6b6eec*/
  this->vtable2 = &SpawnManagerClass::`vftable'; /*0x6b6ef3*/
  this->vtable3 = &vt_SpawnManagerClass; /*0x6b6efa*/
  this->owner = 0; /*0x6b6f01*/
  this->spawnOwner = 0; /*0x6b6f04*/
  this->spawnType = 0; /*0x6b6f07*/
  this->q050 = g_CurrentFrame; /*0x6b6f11*/
  int v4; // [esp+10h] [ebp-8h]
  this->SpawnManagerClass_field_54 = v4; /*0x6b6f14*/
  this->SpawnManagerClass_field_58 = 0; /*0x6b6f17*/
  this->SpawnManagerClass_field_68 = 0; /*0x6b6f1a*/
  this->SpawnManagerClass_field_6C = 0; /*0x6b6f1d*/
  this->SpawnManagerClass_field_70 = 0; /*0x6b6f20*/
  this->SpawnManagerClass_field_5C = g_CurrentFrame; /*0x6b6f28*/
  this->SpawnManagerClass_field_60 = v4; /*0x6b6f2f*/
  this->SpawnManagerClass_field_64 = 0; /*0x6b6f32*/
  if ( DataGlobal_B0B890 < DataGlobal_B0B888 /*0x6b6f69*/
    || (DataGlobal_B0B88D || !DataGlobal_B0B888)
    && DataGlobal_B0B894 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(SpawnManagerClass_Array + 8))(
         &SpawnManagerClass_Array,
         DataGlobal_B0B888 + DataGlobal_B0B894,
         0) )
  {
    int v2 = DataGlobal_B0B890++; /*0x6b6f76*/
    *((_DWORD *)DataGlobal_B0B884 + v2) = this; /*0x6b6f85*/
  }
  return this; /*0x6b6f8a*/
}
}
} // namespace game
} // namespace ra2

// 0x6B7010
namespace ra2 {
namespace game {
void SpawnManagerClass::Constructor_SpawnManagerClass()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int i; // esi
  SpawnManagerClass *v6; // [esp+8h] [ebp-4h] BYREF
  *(_DWORD *)this = &SpawnManagerClass::`vftable'; /*0x6b7015*/
  this->vtable1 = &SpawnManagerClass::`vftable'; /*0x6b701b*/
  this->vtable2 = &SpawnManagerClass::`vftable'; /*0x6b7022*/
  this->vtable3 = &vt_SpawnManagerClass; /*0x6b7029*/
  if ( g_WTFMode ) /*0x6b7037*/
    TaskManager::Update((_DWORD *)this); /*0x6b7039*/
  for ( i = this->q048 - 1; i >= 0; --i ) /*0x6b7042*/
  {
    if ( *(_DWORD *)(this->spawnVectorCount + 4 * i) ) /*0x6b7047*/
      __3_YAXPAX_Z(*(void **)(this->spawnVectorCount + 4 * i)); /*0x6b704f*/
  }
  int v3 = this->spawnVectorCapacity; /*0x6b7063*/
  (*(void (__thiscall **)(int))(this->spawns + 12))(this + 56); /*0x6b7066*/
  (*(void (__thiscall **)(int, int, _DWORD))(this->spawns + 8))(this + 56, v3, 0); /*0x6b7070*/
  v6 = this; /*0x6b7083*/
  int v4 = (*(int (__thiscall **)(int *, int *))(SpawnManagerClass_Array + 16))(&SpawnManagerClass_Array, &v6); /*0x6b7087*/
  if ( v4 != -1 && v4 < DataGlobal_B0B890 && v4 < --DataGlobal_B0B890 ) /*0x6b70a3*/
  {
    do /*0x6b70bb*/
    {
      ++v4; /*0x6b70ab*/
      *((_DWORD *)DataGlobal_B0B884 + v4 - 1) = *((_DWORD *)DataGlobal_B0B884 + v4); /*0x6b70af*/
    }
    while ( v4 < DataGlobal_B0B890 ); /*0x6b70bb*/
  }
  void * v5 = this->spawnVectorCount; /*0x6b70bd*/
  this->spawns = &vt_VectorClass_SpawnManagerClass_SpawnControl; /*0x6b70c0*/
  if ( v5 && *(_BYTE *)(this + 69) ) /*0x6b70ca*/
  {
    __3_YAXPAX_Z(v5); /*0x6b70d2*/
    this->spawnVectorCount = 0; /*0x6b70da*/
  }
  *(_BYTE *)(this + 69) = 0; /*0x6b70e3*/
  this->spawnVectorCapacity = 0; /*0x6b70e7*/
  AbstractClass::DTOR((_DWORD *)this); /*0x6b70ee*/
}
}
} // namespace game
} // namespace ra2

// 0x6B7B90
namespace ra2 {
namespace game {
int SpawnManagerClass::SetTarget(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax

  result = a2; /*0x6b7b90*/
  if ( a2 != this->SpawnManagerClass_field_68 ) /*0x6b7b99*/
    this->SpawnManagerClass_field_6C = a2; /*0x6b7b9b*/
  return result; /*0x6b7b9e*/
}
}
} // namespace game
} // namespace ra2

// 0x6B7D30
namespace ra2 {
namespace game {
int SpawnManagerClass::CountAliveSpawns()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax

  int v1 = this->q012; /*0x6b7d30*/
  result = 0; /*0x6b7d33*/
  if ( v1 > 0 ) /*0x6b7d37*/
  {
    int v3 = this->spawnVectorCount; /*0x6b7d39*/
    do /*0x6b7d4a*/
    {
      if ( *(_DWORD *)(*(_DWORD *)v3 + 4) != 7 ) /*0x6b7d43*/
        ++result; /*0x6b7d45*/
      v3 += 4; /*0x6b7d46*/
      --v1; /*0x6b7d49*/
    }
    while ( v1 ); /*0x6b7d4a*/
  }
  return result; /*0x6b7d4d*/
}
}
} // namespace game
} // namespace ra2

// 0x6B7D50
namespace ra2 {
namespace game {
int SpawnManagerClass::CountDockedSpawns()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax

  int v1 = this->q012; /*0x6b7d51*/
  result = 0; /*0x6b7d54*/
  if ( v1 > 0 ) /*0x6b7d58*/
  {
    int v3 = this->spawnVectorCount; /*0x6b7d5a*/
    do /*0x6b7d70*/
    {
      int v4 = *(_DWORD *)(*(_DWORD *)v3 + 4); /*0x6b7d5f*/
      if ( v4 == 6 || !v4 ) /*0x6b7d69*/
        ++result; /*0x6b7d6b*/
      v3 += 4; /*0x6b7d6c*/
      --v1; /*0x6b7d6f*/
    }
    while ( v1 ); /*0x6b7d70*/
  }
  return result; /*0x6b7d72*/
}
}
} // namespace game
} // namespace ra2

// 0x6B7DE0
namespace ra2 {
namespace game {
int SpawnManagerClass::PowerDrainUpdate(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax

  AbstractClass::ProcessPower((#378 *)this); /*0x6b7de9*/
  Power::TimerProcess(this->SpawnManagerClass_field_70); /*0x6b7df4*/
  int v3 = this->SpawnManagerClass_field_6C; /*0x6b7df9*/
  if ( v3 ) /*0x6b7dfe*/
  {
    int v4 = (*(int (__stdcall **)(int))(*(_DWORD *)(v3 + 4) + 16))(v3 + 4); /*0x6b7e07*/
    Power::TimerProcess(v4); /*0x6b7e0d*/
  }
  int v5 = this->SpawnManagerClass_field_68; /*0x6b7e12*/
  if ( v5 ) /*0x6b7e17*/
  {
    int v6 = (*(int (__stdcall **)(int))(*(_DWORD *)(v5 + 4) + 16))(v5 + 4); /*0x6b7e20*/
    Power::TimerProcess(v6); /*0x6b7e26*/
  }
  int v7 = this->SpawnManagerClass_field_5C; /*0x6b7e2b*/
  int v8 = this->SpawnManagerClass_field_64; /*0x6b7e2e*/
  if ( v7 != -1 ) /*0x6b7e34*/
  {
    if ( (int)g_CurrentFrame - v7 >= v8 ) /*0x6b7e40*/
      v8 = 0; /*0x6b7e46*/
    else
      v8 -= (int)g_CurrentFrame - v7; /*0x6b7e42*/
  }
  Power::TimerProcess(v8); /*0x6b7e4b*/
  IUnknown *v9 = this->q050; /*0x6b7e50*/
  int v10 = this->SpawnManagerClass_field_58; /*0x6b7e53*/
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
    int v12 = (*(int (__stdcall **)(int))(result->vtable2 + 16))(result + 4); /*0x6b7e99*/
    result = Power::TimerProcess(v12); /*0x6b7e9f*/
  }
  TechnoClass *v13 = this->owner; /*0x6b7ea4*/
  if ( v13 ) /*0x6b7ea9*/
  {
    int v14 = (*(int (__stdcall **)(int))(v13->vtable2 + 16))(v13 + 4); /*0x6b7eb2*/
    return Power::TimerProcess(v14); /*0x6b7eb8*/
  }
  return result; /*0x6b7ebd*/
}
}
} // namespace game
} // namespace ra2

// 0x6B7F10
namespace ra2 {
namespace game {
AbstractClass * SpawnManagerClass::LoadFromStream(int aP1, AbstractClass * aP1_4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  AbstractClass *v2; // ebx
  AbstractClass *v3; // esi
  int Prefix_0; // ebp
  DynamicVector *v5; // edi
  VectorClass *v6; // esi
  DynamicVector *v8; // eax
  IUnknown *v9; // ecx
  int referenceCount; // ecx
  int nextArrayIndex; // edx

  v2 = (AbstractClass *)aP1; /*0x6b7f12*/
  v3 = aP1_4; /*0x6b7f18*/
  Prefix_0 = AbstractClass::SaveLoad_Prefix_0((AbstractClass *)aP1, aP1_4); /*0x6b7f24*/
  v5 = 0; /*0x6b7f26*/
  if ( Prefix_0 >= 0 ) /*0x6b7f2a*/
  {
    if ( v2 ) /*0x6b7f32*/
    {
      AbstractClass::InitVtables(v2, (IUnknown *)&aP1); /*0x6b7f3b*/
      SpawnManagerClass::Constructor_6B83A0(&v2[1].abstractFlags, 0, 0); /*0x6b7f45*/
      *(_DWORD *)&v2[2].__pad_0[8] = *(_DWORD *)&HouseClass_Player[45112]; /*0x6b7f51*/
      v2[2].uniqueId = 0; /*0x6b7f57*/
      Timer::Start(&v2[2].abstractFlags, 0); /*0x6b7f5a*/
      *(_DWORD *)v2->__pad_0 = &SpawnManagerClass::`vftable'; /*0x6b7f5f*/
      *(_DWORD *)&v2->__pad_0[4] = &SpawnManagerClass::`vftable'; /*0x6b7f65*/
      *(_DWORD *)&v2->__pad_0[8] = &SpawnManagerClass::`vftable'; /*0x6b7f6c*/
      *(_DWORD *)&v2->__pad_0[12] = &vt_SpawnManagerClass; /*0x6b7f73*/
    }
  int v16; // [esp+28h] [ebp-4h] BYREF
    Prefix_0 = (*(int (__stdcall **)(AbstractClass *, int *, int, _DWORD))(*(_DWORD *)v3->__pad_0 + 12))(v3, &v16, 4, 0); /*0x6b7f88*/
    if ( Prefix_0 >= 0 ) /*0x6b7f8c*/
    {
      v6 = (VectorClass *)&v2[1].abstractFlags; /*0x6b7f92*/
      if ( v2 != (AbstractClass *)-56 ) /*0x6b7f97*/
      {
        SpawnControlVector::Constructor(&v2[1].abstractFlags, 0, 0); /*0x6b7f9d*/
        *(_DWORD *)v6->vtable0 = &vt_DynamicVectorClass_SpawnManagerClass_SpawnControl; /*0x6b7fa2*/
        *(_DWORD *)&v2[2].__pad_0[4] = 10; /*0x6b7fa8*/
        *(_DWORD *)v2[2].__pad_0 = 0; /*0x6b7faf*/
      }
      int v7 = v16; /*0x6b7fb2*/
      aP1 = 0; /*0x6b7fb6*/
      if ( v16 <= 0 ) /*0x6b7fbc*/
      {
LABEL_20:
        int v14 = 0; /*0x6b804d*/
        if ( v7 > 0 ) /*0x6b8051*/
        {
          do /*0x6b8069*/
            ObjectPtr::RegisterForTracking( /*0x6b805f*/
              (SwizzleManagerClass *)&stru_B05488[27784],
              *(MouseClass **)(v2[1].nextArrayIndex + 4 * v14++));
          while ( v14 < v16 ); /*0x6b8069*/
        }
        ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&stru_B05488[27784], (MouseClass *)&v2[1]); /*0x6b8074*/
        ObjectPtr::RegisterForTracking( /*0x6b8082*/
          (SwizzleManagerClass *)&stru_B05488[27784],
          (MouseClass *)&v2[1].__pad_0[4]);
        ObjectPtr::RegisterForTracking( /*0x6b8090*/
          (SwizzleManagerClass *)&stru_B05488[27784],
          (MouseClass *)&v2[2].NeedsSaveOrLink);
        ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&stru_B05488[27784], (MouseClass *)&v2[3]); /*0x6b809e*/
      }
      else
      {
        while ( 1 ) /*0x6b7fc8*/
        {
          v8 = (DynamicVector *)__2_YAPAXI_Z(0x18u); /*0x6b7fc8*/
          if ( v8 ) /*0x6b7fd2*/
          {
            v9 = *(IUnknown **)&HouseClass_Player[45112]; /*0x6b7fd4*/
            v8->field_10 = 0; /*0x6b7fda*/
            v8->field_8 = (int)v9; /*0x6b7fdd*/
            v5 = v8; /*0x6b7fe0*/
          }
          Prefix_0 = (*(int (__stdcall **)(AbstractClass *, DynamicVector *, int, _DWORD))(*(_DWORD *)aP1_4->__pad_0 + 12))( /*0x6b7ff1*/
                       aP1_4,
                       v5,
                       24,
                       0);
          if ( Prefix_0 < 0 ) /*0x6b7ff5*/
            break; /*0x6b7ff5*/
          referenceCount = v2[1].referenceCount; /*0x6b7ffb*/
          if ( *(_DWORD *)v2[2].__pad_0 < referenceCount /*0x6b8020*/
            || (BYTE1(v2[1].NeedsSaveOrLink) || !referenceCount)
  int v11; // eax
            && (v11 = *(_DWORD *)&v2[2].__pad_0[4], v11 > 0)
            && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(*(_DWORD *)v6->vtable0 + 8))(
                 &v2[1].abstractFlags,
                 referenceCount + v11,
                 0) )
          {
            int v12 = *(_DWORD *)v2[2].__pad_0; /*0x6b8027*/
            nextArrayIndex = v2[1].nextArrayIndex; /*0x6b802a*/
            *(_DWORD *)v2[2].__pad_0 = v12 + 1; /*0x6b8030*/
            *(_DWORD *)(nextArrayIndex + 4 * v12) = v5; /*0x6b8033*/
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
}
} // namespace game
} // namespace ra2

// 0x6B7ED0
namespace ra2 {
namespace game {
int SpawnManagerClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 108652929;
  a2[1] = 299085213;
  a2[2] = 268441278;
  a2[3] = 1822515787;
  return 0;
}
} // namespace game
} // namespace ra2

// 0x6B80B0
namespace ra2 {
namespace game {
int SpawnManagerClass::SaveState(TechnoTypeClass * aP0, int * a1, int aP2)
{
{
    int result;
    int v4;
    int i;
    result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2);
    if ( result >= 0 )
  {
    v4 = *a1;
    aP2 = *(int *)&aP0->UINameLabel[11];
    result = (*(int (__stdcall **)(int *, int *, int, int))(v4 + 16))(a1, &aP2, 4, 0);
    if ( result >= 0 )
    {
    for ( i = 0; i < aP2; ++i )
      {
    result = (*(int (__stdcall **)(int *, int, int, int))(*a1 + 16))( a1, *(int *)(*(int *)&aP0->zero_3C + 4 * i), 24, 0);
    if ( result < 0 )
    break;
      }
    }
  }
    return result;
}
}
} // namespace game
} // namespace ra2

// 0x6B8120
namespace ra2 {
namespace game {
int SpawnManagerClass::StubReturn116()
{
return 116;
}
} // namespace game
} // namespace ra2

// 0x6B8130
namespace ra2 {
namespace game {
int SpawnManagerClass::StubReturn65()
{
return 65;
}
} // namespace game
} // namespace ra2

// 0x6B8140
namespace ra2 {
namespace game {
SpawnManagerClass * SpawnManagerClass::ProcessEvent(char a2)
{
{
    SpawnManagerClass::Constructor_SpawnManagerClass((int)this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (SpawnManagerClass *)this;
}
}
} // namespace game
} // namespace ra2

// 0x6B8160
namespace gamemd {
void SpawnManagerClass_25::ddtor()
{
{
    void *v2;
    v2 = *(void **)(this + 4);
    this->SpawnManagerClass_25_field_0x10 = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->SpawnManagerClass_25_field_0x4 = 0;
  }
    this->IsAllocated = 0;
    this->SpawnManagerClass_25_field_0x8 = 0;
}
}
} // namespace gamemd

// 0x6B8190
namespace gamemd {
unsigned int SpawnManagerClass_25::LoadState(int a2)
{
{
    if ( (unsigned char)this->SpawnManagerClass_25_field_0xC )
    return (unsigned int)(a2 - this->SpawnManagerClass_25_field_0x4) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x6B81B0
namespace gamemd {
int SpawnManagerClass_25::SaveState(int a2)
{
{
    return *(int *)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x6B8220
namespace gamemd {
char SpawnManagerClass_25::AddRef(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int *)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int *)this->Items;
    v5 = *(int *)(a2 + 4) - (int)v4;
    while ( *v4 == *(int *)((char *)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x6B83A0
namespace ra2 {
namespace game {
unsigned int * SpawnManagerClass::Constructor_6B83A0(DynamicVector * aP1, DynamicVector * aP2)
{
{
    this->vtable1 = 0;
    this->vtable2 = aP1;
    this->vtable3 = 1;
    this->IsAllocated = 0;
    *(void**)this = &vt_VectorClass_SpawnManagerClass_SpawnControl;
    if ( aP1 )
  {
    if ( aP2 )
    {
    this->vtable1 = aP2;
    }
    else
    {
    this->vtable1 = __2_YAPAXI_Z(4 * (int)aP1);
    this->IsAllocated = 1;
    }
  }
    *(void**)this = &vt_DynamicVectorClass_SpawnManagerClass_SpawnControl;
    this->abstractFlags = 10;
    this->uniqueId = 0;
    return this;
}
}
} // namespace game
} // namespace ra2

// 0x6B8400
namespace gamemd {
char SpawnManagerClass_25::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->SpawnManagerClass_25_field_0x4 )
    {
    v5 = this->SpawnManagerClass_25_field_0x8;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int *)(this->SpawnManagerClass_25_field_0x4 + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(*((void **)(this) + 1));
    this->SpawnManagerClass_25_field_0x4 = 0;
      }
    }
    this->SpawnManagerClass_25_field_0x4 = v4;
    this->SpawnManagerClass_25_field_0x8 = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->ddtor();
  }
    v7 = this->SpawnManagerClass_25_field_0x8;
    if ( v7 < this->SpawnManagerClass_25_field_0x10 )
    this->SpawnManagerClass_25_field_0x10 = v7;
    return 1;
}
}
} // namespace gamemd

// 0x6B84B0
namespace gamemd {
int SpawnManagerClass_25::Spawn(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int *)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
} // namespace gamemd

}
// 0x6B8790
namespace gamemd {
DynamicVector * SpawnManagerClass_25::QueryInterface(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_SpawnManagerClass_SpawnControl;
    if ( v3 && *((char *)(this) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    *((char *)(this) + 13) = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (DynamicVector *)this;
}
}
} // namespace gamemd
