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

// 0x6B6C90
namespace gamemd {
SpawnManagerClass::SpawnManagerClass(int a2, int a3, int a4, int a5, int a6)
{

  int v7; // eax
  int *v8; // ebp
  int v9; // eax
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

  AbstractClass::Constructor((void *)this); /*0x6b6c99*/
  SpawnControlVector::Constructor((unsigned int *)((char *)this + 56), 0, 0); /*0x6b6ca7*/
  *((unsigned int *)this + 14) = &DynamicVectorClass<SpawnManagerClass::SpawnControl *>::`vftable'; /*0x6b6cb0*/
  *((unsigned int *)this + 19) = 10; /*0x6b6cb6*/
  *((unsigned int *)this + 18) = 0; /*0x6b6cbd*/
  v7 = ((unsigned int *)(dword_A8ED54))[12]; /*0x6b6cc0*/
  *((unsigned int *)this + 22) = 0; /*0x6b6cc5*/
  *((unsigned int *)this + 20) = v7; /*0x6b6cc8*/
  *((unsigned int *)this + 23) = ((unsigned int *)(dword_A8ED54))[12]; /*0x6b6cd5*/
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
    v8 = (int *)RA2_OPNEW(24); /*0x6b6d24*/
    if ( !v8 ) /*0x6b6d2b*/
      break; /*0x6b6d2b*/
    v9 = ((unsigned int *)(dword_A8ED54))[12]; /*0x6b6d31*/
    v8[4] = 0; /*0x6b6d36*/
    v8[2] = v9; /*0x6b6d39*/
    v10 = **(unsigned int **)((char *)this + 40); /*0x6b6d44*/
    v11 = (*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 36) + 60))(*((unsigned int *)this + 9)); /*0x6b6d46*/
    v12 = (*(int (**)(unsigned int, int))(v10 + 140))(*((unsigned int *)this + 10), v11); /*0x6b6d4d*/
    *v8 = v12; /*0x6b6d55*/
    if ( v12 ) /*0x6b6d5a*/
    {
      v13 = *((unsigned int *)this + 10); /*0x6b6d66*/
      v8[5] = v13 == *(unsigned int *)(g_abs_87F7E8[7806] + 1248) /*0x6b6d86*/
           || v13 == *(unsigned int *)(g_abs_87F7E8[7806] + 1300)
           || v13 == *(unsigned int *)(g_abs_87F7E8[7806] + 1352);
      (*(void (**)(int))(*(unsigned int *)v12 + 212))(v12); /*0x6b6d91*/
      *(unsigned int *)(*v8 + 724) = *((unsigned int *)this + 9); /*0x6b6da1*/
      v8[1] = 0; /*0x6b6da7*/
      v8[2] = ((unsigned int *)(dword_A8ED54))[12]; /*0x6b6db1*/
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
        *(unsigned int *)(v17 + 4 * v16) = v8; /*0x6b6ded*/
      }
    }
  }
  *((unsigned int *)this + 20) = ((unsigned int *)(dword_A8ED54))[12]; /*0x6b6e0d*/
  *((unsigned int *)this + 21) = v20; /*0x6b6e19*/
  *((unsigned int *)this + 22) = 20; /*0x6b6e1c*/
  *((unsigned int *)this + 26) = 0; /*0x6b6e1f*/
  *((unsigned int *)this + 27) = 0; /*0x6b6e22*/
  *((unsigned int *)this + 28) = 0; /*0x6b6e25*/
  *((unsigned int *)this + 23) = ((unsigned int *)(dword_A8ED54))[12]; /*0x6b6e2f*/
  *((unsigned int *)this + 24) = v20; /*0x6b6e32*/
  *((unsigned int *)this + 25) = 0; /*0x6b6e35*/
  if ( dword_A8ED54[127695] < dword_A8ED54[127693] /*0x6b6e69*/
    || (IDA_BYTE1(dword_A8ED54[127694]) || !dword_A8ED54[127693])
    && dword_A8ED54[127696] > 0
    && (*(uint8_t (**)(int *, int, unsigned int))(dword_A8ED54[127691] + 8))(
         &dword_A8ED54[127691],
         dword_A8ED54[127693] + dword_A8ED54[127696],
         0) )
  {
    v18 = dword_A8ED54[127695]++; /*0x6b6e76*/
    *(unsigned int *)(dword_A8ED54[127692] + 4 * v18) = this; /*0x6b6e85*/
  }
  return this; /*0x6b6e8a*/

}
} // namespace ra2

// 0x6B6EA0
namespace gamemd {
void* SpawnManagerClass::Constructor()
{

  int v2; // eax
  int v4; // [esp+10h] [ebp-8h]

  ((AbstractClass *)((AbstractClass *)this))->Constructor(); /*0x6b6ea8*/
  SpawnControlVector::Constructor((unsigned int *)((char *)this + 56), 0, 0); /*0x6b6eb6*/
  *((unsigned int *)this + 14) = &vt_DynamicVectorClass_SpawnManagerClass_SpawnControl; /*0x6b6ebb*/
  *((unsigned int *)this + 19) = 10; /*0x6b6ec1*/
  *((unsigned int *)this + 18) = 0; /*0x6b6ec8*/
  *((unsigned int *)this + 20) = g_abs_A8ED84; /*0x6b6ed4*/
  *((unsigned int *)this + 22) = 0; /*0x6b6ed7*/
  *((unsigned int *)this + 23) = g_abs_A8ED84; /*0x6b6ee0*/
  *((unsigned int *)this + 25) = 0; /*0x6b6ee3*/
  *(unsigned int *)this = &vt_SpawnManagerClass; /*0x6b6ee6*/
  *((unsigned int *)this + 1) = &vt_SpawnManagerClass; /*0x6b6eec*/
  *((unsigned int *)this + 2) = &vt_SpawnManagerClass; /*0x6b6ef3*/
  *((unsigned int *)this + 3) = &vt_SpawnManagerClass; /*0x6b6efa*/
  *((unsigned int *)this + 9) = 0; /*0x6b6f01*/
  *((unsigned int *)this + 10) = 0; /*0x6b6f04*/
  *((unsigned int *)this + 11) = 0; /*0x6b6f07*/
  *((unsigned int *)this + 20) = g_abs_A8ED84; /*0x6b6f11*/
  *((unsigned int *)this + 21) = v4; /*0x6b6f14*/
  *((unsigned int *)this + 22) = 0; /*0x6b6f17*/
  *((unsigned int *)this + 26) = 0; /*0x6b6f1a*/
  *((unsigned int *)this + 27) = 0; /*0x6b6f1d*/
  *((unsigned int *)this + 28) = 0; /*0x6b6f20*/
  *((unsigned int *)this + 23) = g_abs_A8ED84; /*0x6b6f28*/
  *((unsigned int *)this + 24) = v4; /*0x6b6f2f*/
  *((unsigned int *)this + 25) = 0; /*0x6b6f32*/
  if ( g_abs_B0B890 < g_abs_B0B888 /*0x6b6f69*/
    || (g_abs_B0B88D || !g_abs_B0B888)
    && g_abs_B0B894 > (unsigned char [1])((unsigned char [1]))((unsigned char [1]))(0)
    && (*(uint8_t (**)(int *, int, unsigned int))(g_abs_B0B880 + 8))(
         &g_abs_B0B880,
         (unsigned int)(g_abs_B0B888)+ g_abs_B0B894,
         0) )
  {
    v2 = (int)(g_abs_B0B890++);
    *((unsigned int *)g_abs_B0B884 + v2) = this; /*0x6b6f85*/
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
  SpawnManagerClass * v6;

  *(unsigned int *)this = &vt_SpawnManagerClass; /*0x6b7015*/
  *((unsigned int *)this + 1) = &vt_SpawnManagerClass; /*0x6b701b*/
  *((unsigned int *)this + 2) = &vt_SpawnManagerClass; /*0x6b7022*/
  *((unsigned int *)this + 3) = &vt_SpawnManagerClass; /*0x6b7029*/
  if ( g_abs_A8E9A0 ) /*0x6b7037*/
    TaskManager::Update((unsigned int *)this); /*0x6b7039*/
  for ( i = *((unsigned int *)this + 18) - 1; i >= 0; --i ) /*0x6b7042*/
  {
    if ( *(unsigned int *)(*((unsigned int *)this + 15) + 4 * i) ) /*0x6b7047*/
      RA2_OPDEL(*(void **)(*((unsigned int *)this + 15) + 4 * i)); /*0x6b704f*/
  }
  v3 = (int)(*((unsigned int *)this + 16));
  (*(void (**)(int))(*((unsigned int *)this + 14) + 12))((char *)this + 56); /*0x6b7066*/
  (*(void (**)(int, int, unsigned int))(*((unsigned int *)this + 14) + 8))((char *)this + 56, v3, 0); /*0x6b7070*/
  v6 = this; /*0x6b7083*/
  v4 = (*(int (**)(int *, int *))(g_abs_B0B880 + 16))(&g_abs_B0B880, &v6); /*0x6b7087*/
  if ( v4 != -1 && v4 < (int)(g_abs_B0B890) && v4 < (int)(--g_abs_B0B890) ) /*0x6b70a3*/
  {
    do /*0x6b70bb*/
    {
      ++v4; /*0x6b70ab*/
      *((unsigned int *)g_abs_B0B884 + v4 - 1) = *((unsigned int *)g_abs_B0B884 + v4); /*0x6b70af*/
    }
    while ( v4 < (int)(g_abs_B0B890) ); /*0x6b70bb*/
  }
  v5 = (void *)((unsigned int)(*(void **)((char *)this + 60)));
  *((unsigned int *)this + 14) = &vt_VectorClass_SpawnManagerClass_SpawnControl; /*0x6b70c0*/
  if ( v5 && *((unsigned char *)this + 69) ) /*0x6b70ca*/
  {
    RA2_OPDEL(v5); /*0x6b70d2*/
    *((unsigned int *)this + 15) = 0; /*0x6b70da*/
  }
  *((unsigned char *)this + 69) = 0; /*0x6b70e3*/
  *((unsigned int *)this + 16) = 0; /*0x6b70e7*/
  AbstractClass::DTOR((unsigned int *)this); /*0x6b70ee*/

}
} // namespace ra2

// 0x6B7B90
namespace gamemd {
int SpawnManagerClass::SetTarget(int a2)
{

  int result; // eax

  result = a2; /*0x6b7b90*/
  if ( a2 != *((unsigned int *)this + 26) ) /*0x6b7b99*/
    *((unsigned int *)this + 27) = a2; /*0x6b7b9b*/
  return result; /*0x6b7b9e*/

}
} // namespace ra2

// 0x6B7D30
namespace gamemd {
int SpawnManagerClass::CountAliveSpawns()
{

  int v1; // edx
  int result; // eax
  int v3; // ecx

  v1 = *((char *)this + 18); /*0x6b7d30*/
  result = 0; /*0x6b7d33*/
  if ( v1 > 0 ) /*0x6b7d37*/
  {
    v3 = *((char *)this + 15); /*0x6b7d39*/
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

  v1 = *((char *)this + 18); /*0x6b7d51*/
  result = 0; /*0x6b7d54*/
  if ( v1 > 0 ) /*0x6b7d58*/
  {
    v3 = *((char *)this + 15); /*0x6b7d5a*/
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
  int v9; // edx
  int v10; // eax
  int result; // eax
  int v12; // eax
  int v13; // esi
  int v14; // eax

  AbstractClass::ProcessPower((void *)this); /*0x6b7de9*/
  Power::TimerProcess(*((unsigned int *)this + 28)); /*0x6b7df4*/
  v3 = *((unsigned int *)this + 27); /*0x6b7df9*/
  if ( v3 ) /*0x6b7dfe*/
  {
    v4 = (*(int (**)(int))(*(unsigned int *)(v3 + 4) + 16))(v3 + 4); /*0x6b7e07*/
    Power::TimerProcess(v4); /*0x6b7e0d*/
  }
  v5 = *((unsigned int *)this + 26); /*0x6b7e12*/
  if ( v5 ) /*0x6b7e17*/
  {
    v6 = (*(int (**)(int))(*(unsigned int *)(v5 + 4) + 16))(v5 + 4); /*0x6b7e20*/
    Power::TimerProcess(v6); /*0x6b7e26*/
  }
  v7 = *((unsigned int *)this + 23); /*0x6b7e2b*/
  v8 = *((unsigned int *)this + 25); /*0x6b7e2e*/
  if ( v7 != -1 ) /*0x6b7e34*/
  {
    if ( (int)g_abs_A8ED84 - v7 >= v8 ) /*0x6b7e40*/
      v8 = 0; /*0x6b7e46*/
    else
      v8 -= (int)g_abs_A8ED84 - v7; /*0x6b7e42*/
  }
  Power::TimerProcess(v8); /*0x6b7e4b*/
  v9 = *((unsigned int *)this + 20); /*0x6b7e50*/
  v10 = *((unsigned int *)this + 22); /*0x6b7e53*/
  if ( v9 != -1 ) /*0x6b7e59*/
  {
    if ( (int)g_abs_A8ED84 - v9 >= v10 ) /*0x6b7e65*/
      v10 = 0; /*0x6b7e6b*/
    else
      v10 -= (int)g_abs_A8ED84 - v9; /*0x6b7e67*/
  }
  Power::TimerProcess(v10); /*0x6b7e70*/
  Power::TimerProcess(*((unsigned int *)this + 18)); /*0x6b7e7b*/
  Power::TimerProcess(*((unsigned int *)this + 11)); /*0x6b7e86*/
  result = *((unsigned int *)this + 10); /*0x6b7e8b*/
  if ( result ) /*0x6b7e90*/
  {
    v12 = (*(int (**)(int))(*(unsigned int *)(result + 4) + 16))(result + 4); /*0x6b7e99*/
    result = Power::TimerProcess(v12); /*0x6b7e9f*/
  }
  v13 = *((unsigned int *)this + 9); /*0x6b7ea4*/
  if ( v13 ) /*0x6b7ea9*/
  {
    v14 = (*(int (**)(int))(*(unsigned int *)(v13 + 4) + 16))(v13 + 4); /*0x6b7eb2*/
    return Power::TimerProcess(v14); /*0x6b7eb8*/
  }
  return result; /*0x6b7ebd*/

}
} // namespace ra2

// 0x6B7F10
namespace gamemd {
AbstractClass * * SpawnManagerClass::LoadFromStream(int aP1, AbstractClass * aP1_4)
{

  AbstractClass *v2; // ebx
  AbstractClass *v3; // esi
  int Prefix_0; // ebp
  DynamicVector *v5; // edi
  VectorClass *v6; // esi
  int v7; // eax
  DynamicVector *v8; // eax
  IUnknown *v9; // ecx
  int referenceCount; // ecx
  int v11; // eax
  int v12; // eax
  int nextArrayIndex; // edx
  int v14; // esi
  int v16; // [esp+28h] [ebp-4h] BYREF

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
      *(unsigned int *)&v2[2].__pad_0[8] = *(unsigned int *)&HouseClass_Player.__pad_5568[23248]; /*0x6b7f51*/
      v2[2].uniqueId = 0; /*0x6b7f57*/
      Timer::Start(&v2[2].abstractFlags, 0); /*0x6b7f5a*/
      *(unsigned int *)v2->__pad_0 = &vt_SpawnManagerClass; /*0x6b7f5f*/
      *(unsigned int *)&v2->__pad_0[4] = &vt_SpawnManagerClass; /*0x6b7f65*/
      *(unsigned int *)&v2->__pad_0[8] = &vt_SpawnManagerClass; /*0x6b7f6c*/
      *(unsigned int *)&v2->__pad_0[12] = &vt_SpawnManagerClass; /*0x6b7f73*/
    }
    Prefix_0 = (*(int (**)(AbstractClass *, int *, int, unsigned int))(*(unsigned int *)v3->__pad_0 + 12))(v3, &v16, 4, 0); /*0x6b7f88*/
    if ( Prefix_0 >= 0 ) /*0x6b7f8c*/
    {
      v6 = (VectorClass *)&v2[1].abstractFlags; /*0x6b7f92*/
      if ( v2 != (AbstractClass *)-56 ) /*0x6b7f97*/
      {
        SpawnControlVector::Constructor(&v2[1].abstractFlags, 0, 0); /*0x6b7f9d*/
        *(unsigned int *)v6->vtable0 = &vt_DynamicVectorClass_SpawnManagerClass_SpawnControl; /*0x6b7fa2*/
        *(unsigned int *)&v2[2].__pad_0[4] = 10; /*0x6b7fa8*/
        *(unsigned int *)v2[2].__pad_0 = 0; /*0x6b7faf*/
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
              (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
              *(MouseClass **)(v2[1].nextArrayIndex + 4 * v14++));
          while ( v14 < v16 ); /*0x6b8069*/
        }
        ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&stru_B05488.__pad_579C[5356], (MouseClass *)&v2[1]); /*0x6b8074*/
        ObjectPtr::RegisterForTracking( /*0x6b8082*/
          (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
          (MouseClass *)&v2[1].__pad_0[4]);
        ObjectPtr::RegisterForTracking( /*0x6b8090*/
          (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
          (MouseClass *)&v2[2].NeedsSaveOrLink);
        ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&stru_B05488.__pad_579C[5356], (MouseClass *)&v2[3]); /*0x6b809e*/
      }
      else
      {
        while ( 1 ) /*0x6b7fc8*/
        {
          v8 = (DynamicVector *)RA2_OPNEW(0x18u); /*0x6b7fc8*/
          if ( v8 ) /*0x6b7fd2*/
          {
            v9 = *(IUnknown **)&HouseClass_Player.__pad_5568[23248]; /*0x6b7fd4*/
            v8->field_10 = 0; /*0x6b7fda*/
            v8->field_8 = (int)v9; /*0x6b7fdd*/
            v5 = v8; /*0x6b7fe0*/
          }
          Prefix_0 = (*(int (**)(AbstractClass *, DynamicVector *, int, unsigned int))(*(unsigned int *)aP1_4->__pad_0 + 12))( /*0x6b7ff1*/
                       aP1_4,
                       v5,
                       24,
                       0);
          if ( Prefix_0 < 0 ) /*0x6b7ff5*/
            break; /*0x6b7ff5*/
          referenceCount = v2[1].referenceCount; /*0x6b7ffb*/
          if ( *(unsigned int *)v2[2].__pad_0 < referenceCount /*0x6b8020*/
            || (IDA_BYTE1(v2[1].NeedsSaveOrLink) || !referenceCount)
            && (v11 = *(unsigned int *)&v2[2].__pad_0[4], v11 > 0)
            && (*(uint8_t (**)(int *, int, unsigned int))(*(unsigned int *)v6->vtable0 + 8))(
                 &v2[1].abstractFlags,
                 referenceCount + v11,
                 0) )
          {
            v12 = *(unsigned int *)v2[2].__pad_0; /*0x6b8027*/
            nextArrayIndex = v2[1].nextArrayIndex; /*0x6b802a*/
            *(unsigned int *)v2[2].__pad_0 = v12 + 1; /*0x6b8030*/
            *(unsigned int *)(nextArrayIndex + 4 * v12) = v5; /*0x6b8033*/
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

  result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2); /*0x6b80c2*/
  if ( result >= 0 ) /*0x6b80c9*/
  {
    v4 = *a1; /*0x6b80ce*/
    aP2 = *(unsigned int *)&aP0->UINameLabel[11]; /*0x6b80da*/
    result = (*(int (**)(int *, int *, int, unsigned int))(v4 + 16))(a1, &aP2, 4, 0); /*0x6b80de*/
    if ( result >= 0 ) /*0x6b80e3*/
    {
      for ( i = 0; i < aP2; ++i ) /*0x6b80ed*/
      {
        result = (*(int (**)(int *, unsigned int, int, unsigned int))(*a1 + 16))( /*0x6b80fd*/
                   a1,
                   *(unsigned int *)(*(unsigned int *)&aP0->zero_3C + 4 * i),
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

  SpawnManagerClass::Constructor_SpawnManagerClass((int)Block); /*0x6b8143*/
  if ( (Block & 1) != 0 ) /*0x6b814d*/
    RA2_OPDEL(Block); /*0x6b8150*/
  return (SpawnManagerClass *)Block; /*0x6b815a*/

}
} // namespace gamemd

// 0x6B8160
namespace gamemd {
void SpawnManagerClass_25::ddtor()
{

  void *v2; // eax

  v2 = *(void **)((char *)this + 4); /*0x6b8166*/
  *((unsigned int *)this + 4) = 0; /*0x6b8169*/
  if ( v2 && *((unsigned char *)this + 13) ) /*0x6b8170*/
  {
    RA2_OPDEL(v2); /*0x6b8176*/
    *((unsigned int *)this + 1) = 0; /*0x6b817e*/
  }
  *((unsigned char *)this + 13) = 0; /*0x6b8181*/
  *((unsigned int *)this + 2) = 0; /*0x6b8184*/

}
} // namespace gamemd

// 0x6B8190
namespace gamemd {
unsigned int SpawnManagerClass_25::LoadState(int a2)
{

  if ( *((unsigned char *)this + 12) ) /*0x6b8190*/
    return (unsigned int)(a2 - *((unsigned int *)this + 1)) >> 2; /*0x6b81a5*/
  else
    return 0; /*0x6b8197*/

}
} // namespace gamemd

// 0x6B81B0
namespace gamemd {
int SpawnManagerClass_25::SaveState(int a2)
{

  return *(unsigned int *)(*((unsigned int *)this + 1) + 4 * a2); /*0x6b81ba*/

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

  v2 = *((char *)this + 2); /*0x6b8222*/
  if ( v2 == *(unsigned int *)(a2 + 8) ) /*0x6b822d*/
  {
    v3 = 0; /*0x6b822f*/
    if ( v2 <= 0 ) /*0x6b8233*/
      return 1; /*0x6b8253*/
    v4 = (unsigned int *)*((char *)this + 1); /*0x6b8235*/
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

  *((unsigned int *)this + 1) = 0; /*0x6b83a9*/
  *((unsigned int *)this + 2) = aP1; /*0x6b83b0*/
  *((unsigned char *)this + 12) = 1; /*0x6b83b3*/
  *((unsigned char *)this + 13) = 0; /*0x6b83b7*/
  *this = &vt_VectorClass_SpawnManagerClass_SpawnControl; /*0x6b83bb*/
  if ( aP1 ) /*0x6b83c1*/
  {
    if ( aP2 ) /*0x6b83c9*/
    {
      *((unsigned int *)this + 1) = aP2; /*0x6b83cb*/
    }
    else
    {
      *((unsigned int *)this + 1) = RA2_OPNEW(4 * (unsigned int)aP1); /*0x6b83dc*/
      *((unsigned char *)this + 13) = 1; /*0x6b83df*/
    }
  }
  *this = &vt_DynamicVectorClass_SpawnManagerClass_SpawnControl; /*0x6b83e3*/
  *((unsigned int *)this + 5) = 10; /*0x6b83e9*/
  *((unsigned int *)this + 4) = 0; /*0x6b83f0*/
  return this; /*0x6b83f9*/

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
    *((unsigned char *)this + 12) = 0; /*0x6b8412*/
    if ( a3 ) /*0x6b8418*/
      v4 = a3; /*0x6b842e*/
    else
      v4 = RA2_OPNEW(4 * a2); /*0x6b842a*/
    *((unsigned char *)this + 12) = 1; /*0x6b8432*/
    if ( !v4 ) /*0x6b8436*/
      return 0; /*0x6b84aa*/
    if ( *((unsigned int *)this + 1) ) /*0x6b8438*/
    {
      v5 = *((unsigned int *)this + 2); /*0x6b843f*/
      if ( a2 < v5 ) /*0x6b8444*/
        v5 = a2; /*0x6b8446*/
      for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) ) /*0x6b844c*/
        ++i; /*0x6b8451*/
      if ( *((unsigned char *)this + 13) ) /*0x6b845e*/
      {
        RA2_OPDEL(*((void **)this + 1)); /*0x6b8469*/
        *((unsigned int *)this + 1) = 0; /*0x6b8471*/
      }
    }
    *((unsigned int *)this + 1) = v4; /*0x6b847a*/
    *((unsigned int *)this + 2) = a2; /*0x6b8482*/
    *((unsigned char *)this + 13) = a3 == 0; /*0x6b8485*/
  }
  else
  {
    (*(void (**)(_DynamicVectorClass_PAUSpawnControl_SpawnManagerClass *))(*(unsigned int *)this->__pad_0 + 12))(this);;
  }
  v7 = *((unsigned int *)this + 2); /*0x6b8491*/
  if ( v7 < *((unsigned int *)this + 4) ) /*0x6b8499*/
    *((unsigned int *)this + 4) = v7; /*0x6b849b*/
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

  v2 = *((char *)this + 4); /*0x6b84b0*/
  result = 0; /*0x6b84b3*/
  if ( v2 <= 0 ) /*0x6b84b8*/
    return -1; /*0x6b84cf*/
  for ( i = (unsigned int *)*((char *)this + 1); *i != *a2; ++i ) /*0x6b84be*/
  {
    if ( ++result >= v2 ) /*0x6b84cd*/
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

  v3 = (void *)*(Block + 1); /*0x6b8793*/
  *Block = &vt_VectorClass_SpawnManagerClass_SpawnControl; /*0x6b8796*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x6b87a0*/
  {
    RA2_OPDEL(v3); /*0x6b87a8*/
    *(Block + 1) = 0; /*0x6b87b0*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x6b87bb*/
  *(Block + 2) = 0; /*0x6b87c1*/
  if ( (Block & 1) != 0 ) /*0x6b87c8*/
    RA2_OPDEL(Block); /*0x6b87cb*/
  return (DynamicVector *)Block; /*0x6b87d5*/

}
} // namespace gamemd
