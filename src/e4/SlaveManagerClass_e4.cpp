// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/SlaveManagerClass_25_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/SlaveManagerClass_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x522D00
namespace gamemd {
int SlaveManagerClass::Check()
{
  int result; // eax

  if ( *(&this->uniqueId3) != 10 ) /*0x522d07*/
    return (10, 0); /*0x522d0f*/
  return result; /*0x522d15*/
}
} // namespace ra2

// 0x522D20
namespace gamemd {
int SlaveManagerClass::VtableDispatch()
{
  return (5, 0); /*0x522d2c*/
}
} // namespace ra2

// 0x522D30
namespace gamemd {
int SlaveManagerClass::CheckIsOne()
{
  return ((double (__thiscall *)(void *))*(_DWORD *)(*(_DWORD *)&this->q1142))(this) == 1.0; /*0x522d47*/
}
} // namespace ra2

// 0x522FC0
namespace gamemd {
int SlaveManagerClass::IsMasterHarvester()
{
  return (*(int (__thiscall **)(void *))(*(_DWORD *)&this->q0988))(this) == 10; /*0x522fd2*/
}
} // namespace ra2

// 0x6AF1A0
namespace gamemd {
void* SlaveManagerClass::ctor(TechnoClass * aP1, int a3, int a4, int a5, int a6)
{
  int *v7; // eax
  int *v9; // ebp
  int v10; // ebx
  int v11; // eax
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  void * v15;
  int v16; // edx
  SlaveManagerClass * v17;
  int v19; // [esp+10h] [ebp-8h]
  int i; // [esp+1Ch] [ebp+4h]

  AbstractClass::Constructor(); /*0x6af1a8*/
  SlaveControlVector::Constructor((_DWORD *)(&this->abstractFlags6), 0, 0); /*0x6af1b6*/
  this->slaves = (void*)&DynamicVectorClass_SlaveManagerClass_SlaveControl___vftable; /*0x6af1c3*/
  this->q04C = 10; /*0x6af1c9*/
  this->q048 = 0; /*0x6af1d0*/
  this->q050 = g_CurrentFrame; /*0x6af1d8*/
  this->SlaveManagerClass_field_58 = 0; /*0x6af1df*/
  this->master = aP1; /*0x6af1e2*/
  this->house = a3; /*0x6af1e9*/
  *(void **)this = (void*)&SlaveManagerClass_vftable; /*0x6af1f2*/
  this->vtable2 = (void*)&SlaveManagerClass_vftable; /*0x6af1f8*/
  this->vtable3 = (void*)&SlaveManagerClass_vftable; /*0x6af1ff*/
  this->vtable4 = (void*)&SlaveManagerClass_vftable; /*0x6af206*/
  this->slaveOwner = a4; /*0x6af20d*/
  this->slaveType = a5; /*0x6af210*/
  this->slaveCount = a6; /*0x6af213*/
  for ( i = 0; i < this->slaveOwner; ++i ) /*0x6af21a*/
  {
    v7 = (int *)RA2_OPNEW(0x14u); /*0x6af223*/
    if ( v7 ) /*0x6af22d*/
    {
      g_CurrentFrame = g_CurrentFrame; /*0x6af22f*/
      v7[4] = 0; /*0x6af235*/
      v7[2] = (int)g_CurrentFrame; /*0x6af238*/
      v9 = v7; /*0x6af23b*/
    }
    else
    {
      v9 = 0; /*0x6af23f*/
    }
    v10 = **(_DWORD **)(&this->uniqueId0); /*0x6af249*/
    v11 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(&this->vtable46) + 60))(this->master); /*0x6af24b*/
    v12 = (*(int (__thiscall **)(_DWORD, int))(v10 + 140))(this->house, v11); /*0x6af252*/
    *v9 = v12; /*0x6af25a*/
    if ( v12 ) /*0x6af25f*/
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)v12 + 212))(v12); /*0x6af265*/
      *(_DWORD *)(*v9 + 732) = this->master; /*0x6af274*/
      v9[1] = 0; /*0x6af27a*/
      v9[2] = (int)g_CurrentFrame; /*0x6af284*/
      v9[3] = v19; /*0x6af28a*/
      v9[4] = 0; /*0x6af28d*/
    }
    v13 = this->slaveVectorCapacity; /*0x6af290*/
    if ( this->q048 >= v13 ) /*0x6af298*/
    {
      if ( !this->u8_45 && v13 ) /*0x6af2a1*/
        continue; /*0x6af2a1*/
      v14 = this->q04C; /*0x6af2a3*/
      if ( v14 <= 0 /*0x6af2b2*/
        || !(*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(this->slaves + 8))(&this->u32_E0, v13 + v14, 0) )
      {
        continue; /*0x6af2b2*/
      }
    }
    v15 = this->q048; /*0x6af2b9*/
    v16 = this->slaveVectorCount; /*0x6af2bc*/
    this->q048 = v15 + 1; /*0x6af2c2*/
    *(_DWORD *)(v16 + 4 * v15) = v9; /*0x6af2c5*/
  }
  this->q050 = g_CurrentFrame; /*0x6af2e7*/
  this->SlaveManagerClass_field_54 = v19; /*0x6af2ee*/
  this->SlaveManagerClass_field_58 = 10; /*0x6af2f1*/
  this->SlaveManagerClass_field_5C = 0; /*0x6af2f4*/
  this->SlaveManagerClass_field_60 = 0; /*0x6af2f7*/
  if ( dword_B0B600 < dword_B0B5F8 /*0x6af32e*/
    || (byte_B0B5FD || !dword_B0B5F8)
    && dword_B0B604 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(SlaveManagerClass_Array + 8))(
         &SlaveManagerClass_Array,
         dword_B0B5F8 + dword_B0B604,
         0) )
  {
    v17 = dword_B0B600++; /*0x6af33b*/
    *((_DWORD *)dword_B0B5F4 + v17) = this; /*0x6af34a*/
  }
  return this; /*0x6af34f*/
}
} // namespace ra2

// 0x6AF360
namespace gamemd {
int SlaveManagerClass::Constructor()
{
  SlaveManagerClass * v2;
  int v4; // [esp+8h] [ebp-8h]

  AbstractClass::Constructor(); /*0x6af366*/
  this->slaveVectorCount = 0; /*0x6af371*/
  this->slaveVectorCapacity = 0; /*0x6af374*/
  this->creationFrame = 1; /*0x6af377*/
  this->u8_45 = 0; /*0x6af37b*/
  this->slaves = (void*)&DynamicVectorClass_SlaveManagerClass_SlaveControl___vftable; /*0x6af37e*/
  this->q04C = 10; /*0x6af385*/
  this->q048 = 0; /*0x6af38c*/
  this->q050 = g_CurrentFrame; /*0x6af395*/
  this->SlaveManagerClass_field_58 = 0; /*0x6af398*/
  *(void **)this = (void*)&SlaveManagerClass_vftable; /*0x6af39b*/
  this->vtable2 = (void*)&SlaveManagerClass_vftable; /*0x6af3a1*/
  this->vtable3 = (void*)&SlaveManagerClass_vftable; /*0x6af3a8*/
  this->vtable4 = (void*)&SlaveManagerClass_vftable; /*0x6af3af*/
  this->master = 0; /*0x6af3b6*/
  this->house = 0; /*0x6af3b9*/
  this->slaveOwner = 0; /*0x6af3bc*/
  this->slaveType = 0; /*0x6af3bf*/
  this->slaveCount = 0; /*0x6af3c2*/
  this->q050 = g_CurrentFrame; /*0x6af3cb*/
  this->SlaveManagerClass_field_54 = v4; /*0x6af3ce*/
  this->SlaveManagerClass_field_58 = 0; /*0x6af3d1*/
  this->SlaveManagerClass_field_5C = 0; /*0x6af3d4*/
  this->SlaveManagerClass_field_60 = 0; /*0x6af3d7*/
  if ( dword_B0B600 < dword_B0B5F8 /*0x6af40c*/
    || (byte_B0B5FD || !dword_B0B5F8)
    && dword_B0B604 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(SlaveManagerClass_Array + 8))(
         &SlaveManagerClass_Array,
         dword_B0B5F8 + dword_B0B604,
         0) )
  {
    v2 = dword_B0B600++; /*0x6af419*/
    *((_DWORD *)dword_B0B5F4 + v2) = this; /*0x6af428*/
  }
  return this; /*0x6af42d*/
}
} // namespace ra2

// 0x6AF4A0
namespace gamemd {
void SlaveManagerClass::Constructor_SlaveManagerClass()
{
  int i; // esi
  int v3; // ebp
  int v4; // eax
  void *v5; // eax

  *(void **)this = (void*)&SlaveManagerClass_vftable; /*0x6af4a5*/
  this->vtable2 = (void*)&SlaveManagerClass_vftable; /*0x6af4ab*/
  this->vtable3 = (void*)&SlaveManagerClass_vftable; /*0x6af4b2*/
  this->vtable4 = (void*)&SlaveManagerClass_vftable; /*0x6af4b9*/
  for ( i = this->q048 - 1; i >= 0; --i ) /*0x6af4c4*/
  {
    if ( *(_DWORD *)(this->slaveVectorCount + 4 * i) ) /*0x6af4c9*/
      RA2_OPDEL(*(void **)(this->slaveVectorCount + 4 * i)); /*0x6af4d1*/
  }
  v3 = this->slaveVectorCapacity; /*0x6af4e5*/
  (*(void (__thiscall **)(int))(this->slaves + 12))(&this->abstractFlags6); /*0x6af4e8*/
  (*(void (__thiscall **)(int, int, _DWORD))(this->slaves + 8))(&this->u32_E0, v3, 0); /*0x6af4f2*/
  v4 = (*(int (__thiscall **)(int *, int *))(SlaveManagerClass_Array + 16))(&SlaveManagerClass_Array, &this); /*0x6af509*/
  if ( v4 != -1 && v4 < dword_B0B600 && v4 < --dword_B0B600 ) /*0x6af525*/
  {
    do /*0x6af53d*/
    {
      ++v4; /*0x6af52d*/
      *((_DWORD *)dword_B0B5F4 + v4 - 1) = *((_DWORD *)dword_B0B5F4 + v4); /*0x6af531*/
    }
    while ( v4 < dword_B0B600 ); /*0x6af53d*/
  }
  v5 = *(void **)(&this->nextArrayIndex0); /*0x6af53f*/
  this->slaves = (void*)&VectorClass_SlaveManagerClass_SlaveControl___vftable; /*0x6af542*/
  if ( v5 && this->u8_45 ) /*0x6af54c*/
  {
    RA2_OPDEL(v5); /*0x6af554*/
    this->slaveVectorCount = 0; /*0x6af55c*/
  }
  this->u8_45 = 0; /*0x6af565*/
  this->slaveVectorCapacity = 0; /*0x6af569*/
  AbstractClass::DTOR(); /*0x6af570*/
}
} // namespace ra2

// 0x6AF580
namespace gamemd {
int SlaveManagerClass::SetOwner(TechnoClass * aP1)
{
  int v3; // eax
  _DWORD *v4; // ecx
  int v5; // ecx
  int i; // ecx

  v3 = *(this + 9); /*0x6af588*/
  *(_DWORD *)(v3 + 728) = 0; /*0x6af58b*/
  *(this + 9) = aP1; /*0x6af595*/
  v4 = *(_DWORD **)(aP1 + 728); /*0x6af598*/
  if ( v4 ) /*0x6af5a0*/
  {
    IDA_LOBYTE(v3) = TechnoClass::MutateAll(v4, 0, 0); /*0x6af5a6*/
    v5 = *(_DWORD *)(aP1 + 728); /*0x6af5ab*/
    if ( v5 ) /*0x6af5b3*/
      IDA_LOBYTE(v3) = (*(int (__thiscall **)(int, int))(*(_DWORD *)v5 + 32))(v5, 1); /*0x6af5b9*/
  }
  *(_DWORD *)(aP1 + 728) = this; /*0x6af5bc*/
  for ( i = *(this + 18) - 1; i >= 0; --i ) /*0x6af5c6*/
  {
    v3 = **(_DWORD **)(*(this + 15) + 4 * i); /*0x6af5ce*/
    if ( v3 ) /*0x6af5d2*/
      *(_DWORD *)(v3 + 732) = *(this + 9); /*0x6af5d7*/
  }
  return v3; /*0x6af5e0*/
}
} // namespace ra2

// 0x6AF5F0
namespace gamemd {
int SlaveManagerClass::UpdateSlaves()
{
  int *v2; // edi
  int v3; // edx
  TechnoClass * v4;
  int v6; // [esp+Ch] [ebp-8h]

  v2 = (int *)g_CurrentFrame; /*0x6af5f7*/
  v3 = *(&this->vtable30); /*0x6af5fd*/
  v4 = *(&this->vtable32); /*0x6af600*/
  if ( v3 == -1 ) /*0x6af606*/
  {
  LABEL_4:
    if ( v4 ) /*0x6af614*/
      return v4; /*0x6af614*/
    goto LABEL_5; /*0x6af614*/
  }
  if ( (int)g_CurrentFrame - v3 < v4 ) /*0x6af60e*/
  {
    v4 -= (int, unsigned int a1)g_CurrentFrame - v3; /*0x6af610*/
    goto LABEL_4; /*0x6af610*/
  }
  LABEL_5:
  *(&this->vtable30) = (int)g_CurrentFrame; /*0x6af616*/
  *(&this->vtable31) = v6; /*0x6af622*/
  *(&this->vtable32) = 10; /*0x6af625*/
  v4 = this->master; /*0x6af628*/
  if ( v4 ) /*0x6af62d*/
  {
    SlaveManagerClass::ProcessSlaves(v2, (int)this); /*0x6af631*/
    IDA_LOBYTE(unsigned int a1); /*0x6af638*/
  }
  return v4; /*0x6af63d*/
}
} // namespace ra2

// 0x6AF6C0
namespace gamemd {
TechnoClass * * SlaveManagerClass_ProcessSlaves()
{
  int v4; // ebx
  int result; // eax
  int v6; // ecx
  int v7; // edi
  int *v8; // esi
  int v9; // ecx
  int v10; // ebx
  int v11; // ecx
  int v12; // eax
  int FoundationWidth; // eax
  int v14; // ecx
  int FoundationHeight; // eax
  int v16; // ebx
  _WORD *v17; // eax
  int *v18; // eax
  int v19; // ebx
  _DWORD *v20; // eax
  int v21; // eax
  int v22; // ecx
  int IsBuildingType; // ebx
  __int16 v24; // ax
  int v25; // ecx
  int v26; // eax
  int v27; // ecx
  _WORD *v28; // eax
  int v29; // ebx
  _DWORD *v30; // eax
  int v31; // eax
  int v32; // ecx
  int v33; // ebx
  int v34; // eax
  int v35; // ecx
  int v36; // eax
  int v37; // ebx
  _WORD *v38; // eax
  int *v39; // eax
  int v40; // ecx
  _DWORD *v42; // eax
  int v43; // ecx
  int v44; // ebx
  int v45; // eax
  int v46; // ecx
  int v47; // eax
  int v48; // ebx
  _WORD *v49; // eax
  int *v50; // eax
  int v52; // edx
  _DWORD *v53; // eax
  int v55; // ecx
  int v56; // eax
  int v57; // ecx
  int v58; // edi
  __int16 v59; // ax
  int v60; // ecx
  int v61; // eax
  int v62; // ecx
  _WORD *v63; // eax
  int *v64; // eax
  int v65; // edi
  int v66; // edx
  int v67; // ecx
  int v68; // eax
  int v69; // edx
  int v70; // ecx
  int v71; // ecx
  _WORD *v72; // [esp-6h] [ebp-B0h]
  _WORD *v73; // [esp-6h] [ebp-B0h]
  _WORD *v76; // [esp+2h] [ebp-A8h]
  int v77; // [esp+Eh] [ebp-9Ch] BYREF
  int v78; // [esp+12h] [ebp-98h]
  int v79; // [esp+16h] [ebp-94h]
  _WORD v80[2]; // [esp+1Eh] [ebp-8Ch] BYREF
  int v81; // [esp+22h] [ebp-88h] BYREF
  int v82; // [esp+2Ah] [ebp-80h] BYREF
  int v83; // [esp+2Eh] [ebp-7Ch] BYREF
  _WORD v84[4]; // [esp+32h] [ebp-78h] BYREF
  int v85; // [esp+3Ah] [ebp-70h] BYREF
  __int16 v86[2]; // [esp+42h] [ebp-68h] BYREF
  _WORD v87[4]; // [esp+46h] [ebp-64h] BYREF
  char v88[4]; // [esp+4Eh] [ebp-5Ch] BYREF
  char v89[4]; // [esp+52h] [ebp-58h] BYREF
  char v90[4]; // [esp+56h] [ebp-54h] BYREF
  int v91; // [esp+5Ah] [ebp-50h] BYREF
  char v92[4]; // [esp+5Eh] [ebp-4Ch] BYREF
  _BYTE v93[8]; // [esp+62h] [ebp-48h] BYREF
  int v94; // [esp+6Ah] [ebp-40h] BYREF
  char v95[8]; // [esp+6Eh] [ebp-3Ch] BYREF
  char v96[4]; // [esp+76h] [ebp-34h] BYREF
  __int16 v97[2]; // [esp+7Ah] [ebp-30h] BYREF
  char v98[12]; // [esp+7Eh] [ebp-2Ch] BYREF
  int v99; // [esp+8Ah] [ebp-20h] BYREF
  _DWORD v100[3]; // [esp+8Eh] [ebp-1Ch] BYREF
  char v101[8]; // [esp+9Ah] [ebp-10h] BYREF
  int v102; // [esp+A2h] [ebp-8h] BYREF

  v4 = 0; /*0x6af6ca*/
  result = 0; /*0x6af6cc*/
  v6 = a1[18]; /*0x6af6ce*/
  v83 = 0; /*0x6af6d1*/
  if ( v6 > 0 )
  {
    while ( 1 )
    {
      v7 = *(_DWORD *)(a1[15] + 4 * result); /*0x6af6e6*/
      v8 = *(int **)v7; /*0x6af6e9*/
      if ( !*(_DWORD *)v7 && *(_DWORD *)(v7 + 4) != 6 ) /*0x6af6f9*/
      {
        *(_DWORD *)v7 = 0; /*0x6af707*/
        *(_DWORD *)(v7 + 4) = 6; /*0x6af709*/
        v9 = a1[12]; /*0x6af711*/
        *(_DWORD *)(v7 + 8) = g_CurrentFrame; /*0x6af717*/
        *(_DWORD *)(v7 + 12) = v100[1]; /*0x6af721*/
        *(_DWORD *, unsigned int a2, unsigned int a3, unsigned int a1)(v7 + 16) = v9; /*0x6af724*/
      }
      switch ( *(_DWORD *)(v7 + 4) )
      {
        case 1:
          v77 = *v8; /*0x6af744*/
          v81 = *(_DWORD *)(*(int (__thiscall **)(int *, char *, int, _DWORD, int *, int))(v77 + 824))( /*0x6af778*/
                             v8,
                             v101,
                             *((_DWORD *)g_RulesClass_Instance + 1505) / 256,
                             0,
                             a2,
                             a3);
          if ( v81 == dword_B0B5B8 )
          {
            TechnoClass::SetFocus(v8, 0); /*0x6af7c5*/
            v11 = a1[9]; /*0x6af7ca*/
            if ( v11 && (*(int (__thiscall **)(int))(v11->fallRate)(v11) == 6 )
            {
              v79 = a1[9]; /*0x6af7e4*/
              if ( v79 )
              {
                v12 = (*(int (__thiscall **)(int))(*(_DWORD *)v79 + 44))(v79); /*0x6af7ec*/
                v4 = v12 == 6 ? v79 : 0;
              }
              FoundationWidth = BuildingTypeClass::GetFoundationWidth(*(_DWORD **)(v4 + 1312)); /*0x6af806*/
              v14 = *(_DWORD *)(v4 + 1312); /*0x6af80b*/
              v79 = FoundationWidth; /*0x6af813*/
              FoundationHeight = BuildingTypeClass::GetFoundationHeight(v14, 0); /*0x6af817*/
              v16 = a1[9]; /*0x6af81f*/
              v76 = CellStruct::Set(v100, v79 - 1, FoundationHeight / 2); /*0x6af839*/
              v17 = (_WORD *)(*(int (__thiscall **)(int, char *))(v16->airstrikeTintTimer)(v16, v89); /*0x6af849*/
              v18 = CellStruct::Add(v17, &v99, v76); /*0x6af851*/
            }
            else
            {
              v18 = (int *)(*(int (__thiscall **)(int, __int16 *))(*(_DWORD *)a1[9] + 440))(a1[9], v97); /*0x6af862*/
            }
            v19 = *v8; /*0x6af86a*/
            v85 = *v18; /*0x6af870*/
            a3 = 1; /*0x6af874*/
            a2 = (int *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v85); /*0x6af881*/
            v8->vt_slot_1152(); /*0x6af884*/
            (*(void (__thiscall **)(int *, int, _DWORD))(*v8 + 488))(v8, 2, 0); /*0x6af892*/
            *(_DWORD *)(v7 + 4) = 4; /*0x6af898*/
          }
          else
          {
            v10 = *v8; /*0x6af78c*/
            a3 = 1; /*0x6af792*/
            a2 = (int *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v81); /*0x6af79f*/
            v8->vt_slot_1152(); /*0x6af7a2*/
            (*(void (__thiscall **)(int *, int, _DWORD))(*v8 + 488))(v8, 2, 0); /*0x6af7b0*/
            *(_DWORD *)(v7 + 4) = 2; /*0x6af7b6*/
          }
          goto LABEL_62; /*0x6af89f*/
        case 2:
          v20 = (_DWORD *)(*(int (__thiscall **)(int *))(*v8 + 444))(v8); /*0x6af8a8*/
          if ( Cell::IsBridge2(v20) ) /*0x6af8b0*/
          {
            SlaveManagerClass::Check(v8); /*0x6af8bb*/
            *(_DWORD *)(v7 + 4) = 3; /*0x6af8c0*/
          }
          else if ( !v8[361] ) /*0x6af8cc*/
          {
            *(_DWORD *)(v7 + 4) = 1; /*0x6af8d8*/
          }
          goto LABEL_62; /*0x6af8c7*/
        case 3:
          if ( (unsigned __int8)SlaveManagerClass::CheckIsOne(v8) ) /*0x6af8e6*/
          {
            v21 = (*(int (__thiscall **)(int *, int *, int))(*v8 + 444))(v8, a2, a3); /*0x6af8f7*/
            TechnoClass::SetFocus(v8, v21); /*0x6af900*/
            v22 = a1[9]; /*0x6af905*/
            if ( v22 && (*(int (__thiscall **)(int))(v22->fallRate)(v22) == 6 ) /*0x6af914*/
            {
              IsBuildingType = IsObjectTypeBuildingType(a1[9]); /*0x6af91e*/
              v24 = BuildingTypeClass::GetFoundationWidth(*(_DWORD **)(IsBuildingType + 1312)); /*0x6af926*/
              v25 = *(_DWORD *)(IsBuildingType + 1312); /*0x6af92b*/
              v84[0] = v24 - 1; /*0x6af934*/
              v26 = BuildingTypeClass::GetFoundationHeight(v25, 0); /*0x6af939*/
              v27 = a1[9]; /*0x6af93f*/
              v84[1] = v26 / 2; /*0x6af946*/
              v28 = (_WORD *)(*(int (__thiscall **)(int, _WORD *))(v27->airstrikeTintTimer)(v27, v87); /*0x6af95c*/
              v82 = *CellStruct::Add(v28, &v91, v84); /*0x6af96b*/
            }
            else
            {
              v82 = *(_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a1[9] + 440))(a1[9], v93); /*0x6af983*/
            }
            v29 = *v8; /*0x6af987*/
            a3 = 1; /*0x6af98d*/
            a2 = (int *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v82); /*0x6af99a*/
            v8->vt_slot_1152(); /*0x6af99d*/
            (*(void (__thiscall **)(int *, int, _DWORD))(*v8 + 488))(v8, 2, 0); /*0x6af9ab*/
            *(_DWORD *)(v7 + 4) = 4; /*0x6af9b1*/
          }
          else
          {
            v30 = (_DWORD *)(*(int (__thiscall **)(int *))(*v8 + 444))(v8); /*0x6af9c1*/
            if ( Cell::IsBridge2(v30) ) /*0x6af9c9*/
            {
              if ( !(unsigned __int8)SlaveManagerClass::IsMasterHarvester(v8) ) /*0x6af9e5*/
                *(_DWORD *)(v7 + 4) = 1; /*0x6af9f2*/
            }
            else
            {
              SlaveManagerClass::VtableDispatch(v8); /*0x6af9d4*/
              *(_DWORD *)(v7 + 4) = 1; /*0x6af9d9*/
            }
          }
          goto LABEL_62; /*0x6af9b8*/
        case 4:
          v31 = v8[361]; /*0x6af9fe*/
          IDA_HIBYTE(v78) = 0; /*0x6afa04*/
          if ( v31 ) /*0x6afa0b*/
          {
            v32 = a1[9]; /*0x6afa11*/
            if ( v32 && (*(int (__thiscall **)(int))(v32->fallRate)(v32) == 6 ) /*0x6afa20*/
            {
              v33 = IsObjectTypeBuildingType(a1[9]); /*0x6afa2a*/
              v34 = BuildingTypeClass::GetFoundationWidth(v33->q520); /*0x6afa32*/
              v35 = v33->q520; /*0x6afa37*/
              v77 = v34; /*0x6afa3f*/
              v36 = BuildingTypeClass::GetFoundationHeight(v35, 0); /*0x6afa43*/
              v37 = a1[9]; /*0x6afa4c*/
              v72 = CellStruct::Set(v97, v77 - 1, v36 / 2); /*0x6afa67*/
              v38 = (_WORD *)(*(int (__thiscall **)(int, int *, _BYTE *))(v37->airstrikeTintTimer)(v37, &v99, v93); /*0x6afa75*/
              v39 = CellStruct::Add(v38, v72, a2); /*0x6afa7d*/
            }
            else
            {
              v39 = (int *)(*(int (__thiscall **)(int, int *, int *))(*(_DWORD *)a1[9] + 440))(a1[9], &v94, a2); /*0x6afa8e*/
            }
            v40 = v8[361]; /*0x6afa94*/
            v85 = *v39; /*0x6afaa3*/
            v85 = v85; /*0x6afa9a*/
            a2 = &v102; /*0x6afaa9*/
            v42 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v40 + 72))(v40); /*0x6afaaa*/
            v100[0] = *(_DWORD *)CellStruct::Set(v86, *v42 / 256, v42[1] / 256); /*0x6afad9*/
            IDA_LOWORD(v79) = IDA_LOWORD(v100[0]) - v85; /*0x6afaef*/
            IDA_HIWORD(v79) = IDA_HIWORD(v100[0]) - v84[3]; /*0x6afaf4*/
            v77 = v79; /*0x6afb01*/
            if ( (__int16)SlaveManagerClass::Calc2DDistance(&v77) > *((_DWORD *)g_RulesClass_Instance + 894) ) /*0x6afb19*/
              IDA_HIBYTE(v78) = 1; /*0x6afb1b*/
          }
          v43 = a1[9]; /*0x6afb20*/
          if ( v43 && (*(int (__thiscall **)(int))(v43->fallRate)(v43) == 6 ) /*0x6afb2f*/
          {
            v44 = IsObjectTypeBuildingType(a1[9]); /*0x6afb39*/
            v45 = BuildingTypeClass::GetFoundationWidth(v44->q520); /*0x6afb41*/
            v46 = v44->q520; /*0x6afb46*/
            v77 = v45; /*0x6afb4e*/
            v47 = BuildingTypeClass::GetFoundationHeight(v46, 0); /*0x6afb52*/
            v48 = a1[9]; /*0x6afb5a*/
            v73 = CellStruct::Set(v87, v77 - 1, v47 / 2); /*0x6afb71*/
            v49 = (_WORD *)(*(int (__thiscall **)(int, char *, char *))(v48->airstrikeTintTimer)(v48, v90, v88); /*0x6afb7e*/
            v50 = CellStruct::Add(v49, v73, a2); /*0x6afb86*/
          }
          else
          {
            v50 = (int *)(*(int (__thiscall **)(int, char *, int *))(*(_DWORD *)a1[9] + 440))(a1[9], v92, a2); /*0x6afb97*/
          }
          v52 = *v8; /*0x6afb9f*/
          a2 = &v94; /*0x6afba7*/
          v78 = *v50; /*0x6afba8*/
          v78 = v78; /*0x6afb9d*/
          v53 = (_DWORD *)v8->GetCellCoords_Alt(); /*0x6afbac*/
          if ( *v53 == IDA___PAIR32__(IDA_HIWORD(v77), v78) ) /*0x6afbb5*/
          {
            if ( !v8[361] ) /*0x6afbc2*/
            {
              InfantryClass::SlaveGiveMoney_RecordBalanceBefore(a1[9]); /*0x6afbd2*/
              (*(void (__thiscall **)(int *))(*v8 + 212))(v8); /*0x6afbdb*/
              g_CurrentFrame = g_CurrentFrame; /*0x6afbe1*/
              v55 = a1[13]; /*0x6afbe6*/
              *(_DWORD *)(v7 + 4) = 5; /*0x6afbec*/
              *(_DWORD *)(v7 + 8) = g_CurrentFrame; /*0x6afbf3*/
              *(_DWORD *)(v7 + 12) = v102; /*0x6afbfc*/
              *(_DWORD *)(v7 + 16) = v55; /*0x6afbff*/
              goto LABEL_62; /*0x6afc02*/
            }
  LABEL_47:
            if ( !IDA_HIBYTE(v78) ) /*0x6afc17*/
              goto LABEL_62; /*0x6afc17*/
            goto LABEL_48; /*0x6afc17*/
          }
          if ( v8[361] ) /*0x6afc07*/
            goto LABEL_47; /*0x6afc0f*/
  LABEL_48:
          v56 = IsObjectTypeBuildingType(a1[9]); /*0x6afc1d*/
          v57 = a1[9]; /*0x6afc25*/
          if ( v56 ) /*0x6afc2a*/
          {
            v58 = IsObjectTypeBuildingType(v57); /*0x6afc31*/
            v59 = BuildingTypeClass::GetFoundationWidth(*(_DWORD **)(v58 + 1312)); /*0x6afc39*/
            v60 = *(_DWORD *)(v58 + 1312); /*0x6afc3e*/
            v80[0] = v59 - 1; /*0x6afc47*/
            v61 = BuildingTypeClass::GetFoundationHeight(v60, 0); /*0x6afc4c*/
            v62 = a1[9]; /*0x6afc52*/
            v80[1] = v61 / 2; /*0x6afc59*/
            v63 = (_WORD *)(*(int (__thiscall **)(int, char *, char *, _WORD *))(v62->airstrikeTintTimer)( /*0x6afc72*/
                             v62,
                             v96,
                             v95,
                             v80);
            v64 = CellStruct::Add(v63, &v94, (_WORD *)a3); /*0x6afc7a*/
          }
          else
          {
            v64 = (int *)(*(int (__thiscall **)(int, char *, int *, int))(v57->airstrikeTintTimer)(v57, v98, &v94, a3); /*0x6afc8b*/
          }
          v65 = *v8; /*0x6afc93*/
          v83 = *v64; /*0x6afc99*/
          a3 = 1; /*0x6afc9d*/
          a2 = (int *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v83); /*0x6afcaa*/
          v8->vt_slot_1152(); /*0x6afcad*/
          (*(void (__thiscall **)(int *, int, _DWORD))(*v8 + 488))(v8, 2, 0); /*0x6afcbb*/
  LABEL_62:
          v71 = a1[18]; /*0x6afd20*/
          result = ++v83; /*0x6afd27*/
          if ( v83 >= v71 ) /*0x6afd2e*/
            return result; /*0x6afd2e*/
          v4 = 0; /*0x6af6e1*/
          break; /*0x6af6e1*/
        case 5:
          v66 = *(_DWORD *)(v7 + 8); /*0x6afcc3*/
          v67 = *(_DWORD *)(v7 + 16); /*0x6afcc6*/
          if ( v66 == -1 ) /*0x6afccc*/
            goto LABEL_55; /*0x6afccc*/
          if ( (int)g_CurrentFrame - v66 >= v67 ) /*0x6afcd7*/
            goto LABEL_56; /*0x6afcd7*/
          v67 -= (int)g_CurrentFrame - v66; /*0x6afcd9*/
  LABEL_55:
          if ( !v67 ) /*0x6afcdd*/
          {
  LABEL_56:
            v68 = v8[432]; /*0x6afcdf*/
            v8[27] = *(_DWORD *)(v68 + 160); /*0x6afceb*/
            v8[28] = *(_DWORD *)(v68 + 160); /*0x6afcf4*/
            *(_DWORD *)(v7 + 4) = 0; /*0x6afcf7*/
          }
          goto LABEL_62; /*0x6afcfa*/
        case 6:
          v69 = *(_DWORD *)(v7 + 8); /*0x6afcfc*/
          v70 = *(_DWORD *)(v7 + 16); /*0x6afcff*/
          if ( v69 == -1 ) /*0x6afd05*/
            goto LABEL_60; /*0x6afd05*/
          if ( (int)g_CurrentFrame - v69 >= v70 ) /*0x6afd10*/
            goto LABEL_61; /*0x6afd10*/
          v70 -= (int)g_CurrentFrame - v69; /*0x6afd12*/
  LABEL_60:
          if ( !v70 ) /*0x6afd16*/
  LABEL_61:
            SlaveManagerClass::CreateSlave(v7); /*0x6afd1b*/
          goto LABEL_62; /*0x6afd1b*/
        default:
          goto LABEL_62;
      }
    }
  }
  return result; /*0x6afd36*/
}
}
// 0x6B0A20
namespace gamemd {
int SlaveManagerClass::LostSlave(ObjectClass * aP1)
{
  int result; // eax
  int v3; // esi
  _DWORD **i; // edx
  _DWORD *v5; // eax
  int v6; // ecx
  int v7; // [esp+10h] [ebp-8h]

  result = *(this + 18) - 1; /*0x6b0a26*/
  if ( result >= 0 ) /*0x6b0a2a*/
  {
    v3 = *(this + 15); /*0x6b0a2c*/
    for ( i = (_DWORD **)(v3 + 4 * result); **i != aP1; --i ) /*0x6b0a33*/
    {
      if ( --result < 0 ) /*0x6b0a42*/
        return result; /*0x6b0a42*/
    }
    v5 = *(_DWORD **)(v3 + 4 * result); /*0x6b0a4d*/
    if ( *v5 ) /*0x6b0a50*/
      *(_DWORD *)(*v5 + 732) = 0; /*0x6b0a56*/
    *v5 = 0; /*0x6b0a60*/
    v5[1] = 6; /*0x6b0a66*/
    v6 = *(this + 12); /*0x6b0a73*/
    result = (int)(v5 + 2); /*0x6b0a76*/
    *(_DWORD *)result = g_CurrentFrame; /*0x6b0a79*/
    *(_DWORD *)(result + 4) = v7; /*0x6b0a7f*/
    *(_DWORD *)(result + 8) = v6; /*0x6b0a82*/
  }
  return result; /*0x6b0a44*/
}
} // namespace ra2

// 0x6B1020
namespace gamemd {
int SlaveManagerClass::ShouldWakeUpNow()
{
  _DWORD *v2; // ecx
  int v4; // [esp+Ch] [ebp-4h] BYREF

  v2 = (_DWORD *)*(this + 9); /*0x6b1024*/
  if ( !v2 || *(this + 23) ) /*0x6b102f*/
    return 0; /*0x6b102f*/
  if ( !*(_BYTE *)(v2[135] + 492) ) /*0x6b1040*/
    return 1; /*0x6b104e*/
  if ( *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*v2 + 444))(v2) + 236) == 5 ) /*0x6b105e*/
    return 1; /*0x6b1064*/
  if ( *(this + 24) + *(_DWORD *)g_RulesClass_Instance[1].gap370 >= (int)g_CurrentFrame ) /*0x6b107d*/
    return 0; /*0x6b107d*/
  v4 = *(_DWORD *)(*(int (__thiscall **)(_DWORD, int *, int, _DWORD))(*(_DWORD *)*(this + 9) + 824))( /*0x6b10ad*/
                    *(this + 9),
                    &v4,
                    g_RulesClass_Instance[1].GateUp / 256,
                    0);
  return v4 != dword_B0B5B8; /*0x6b10c6*/
}
} // namespace ra2

// 0x6B10F0
namespace gamemd {
int SlaveManagerClass::AssignTask(AbstractClass * aP1)
{
  int result; // eax
  int i; // esi

  AbstractClass::ProcessPower(); /*0x6b10fa*/
  result = Power::TimerProcess(this->u32_5C); /*0x6b1105*/
  for ( i = this->__pad_048 - 1; i >= 0; --i ) /*0x6b110e*/
    result = Power::TimerProcess(*(_DWORD *)(*(_DWORD *)(this->__pad_03C + 4 * i) + 4)); /*0x6b111c*/
  return result; /*0x6b1124*/
}
} // namespace ra2

// 0x6B1170
namespace gamemd {
AbstractClass * * SlaveManagerClass::LoadManager(unsigned int * a1, int a2)
{
  int v2; // esi
  _DWORD *v3; // edi
  int Prefix_0; // ebx
  _DWORD *v5; // ebp
  _DWORD *v6; // esi
  int v7; // eax
  _DWORD *v8; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  int v13; // edx
  int v14; // esi
  int v16; // [esp+28h] [ebp-4h] BYREF

  v2 = a2; /*0x6b1174*/
  v3 = a1; /*0x6b1179*/
  Prefix_0 = AbstractClass::SaveLoad_Prefix_0(a1, a2); /*0x6b1184*/
  v5 = 0; /*0x6b1186*/
  if ( Prefix_0 >= 0 ) /*0x6b118a*/
  {
    if ( v3 ) /*0x6b1192*/
    {
      AbstractClass::InitVtables(v3, (int)&a1); /*0x6b119b*/
      SlaveControlVector::Constructor(v3 + 14, 0, 0); /*0x6b11a7*/
      v3[14] = (void*)&DynamicVectorClass_SlaveManagerClass_SlaveControl___vftable; /*0x6b11b0*/
      v3[19] = 10; /*0x6b11b6*/
      v3[18] = 0; /*0x6b11bd*/
      Timer::Start(v3 + 20, 0); /*0x6b11c0*/
      *v3 = (void*)&SlaveManagerClass_vftable; /*0x6b11c5*/
      v3[1] = (void*)&SlaveManagerClass_vftable; /*0x6b11cb*/
      v2 = a2; /*0x6b11d2*/
      v3[2] = (void*)&SlaveManagerClass_vftable; /*0x6b11d6*/
      v3[3] = (void*)&SlaveManagerClass_vftable; /*0x6b11dd*/
    }
    Prefix_0 = (*(int (__stdcall **)(int, int *, int, _DWORD))(v2->vtable4)(v2, &v16, 4, 0); /*0x6b11f2*/
    if ( Prefix_0 >= 0 ) /*0x6b11f6*/
    {
      v6 = v3 + 14; /*0x6b11fc*/
      if ( v3 != (_DWORD *)-56 ) /*0x6b1201*/
      {
        SlaveControlVector::Constructor(v3 + 14, 0, 0); /*0x6b1207*/
        *v6 = (void*)&DynamicVectorClass_SlaveManagerClass_SlaveControl___vftable; /*0x6b120c*/
        v3[19] = 10; /*0x6b1212*/
        v3[18] = 0; /*0x6b1219*/
      }
      v7 = v16; /*0x6b121c*/
      a1 = 0; /*0x6b1220*/
      if ( v16 <= 0 ) /*0x6b1226*/
      {
  LABEL_20:
        v14 = 0; /*0x6b12b7*/
        if ( v7 > 0 ) /*0x6b12bb*/
        {
          do /*0x6b12d3*/
            ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, *(int **)(v3[15] + 4 * v14++)); /*0x6b12c9*/
          while ( v14 < v16 ); /*0x6b12d3*/
        }
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v3 + 9); /*0x6b12de*/
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v3 + 10); /*0x6b12ec*/
      }
      else
      {
        while ( 1 ) /*0x6b1232*/
        {
          v8 = RA2_OPNEW(0x14u); /*0x6b1232*/
          if ( v8 ) /*0x6b123c*/
          {
            g_CurrentFrame = g_CurrentFrame; /*0x6b123e*/
            v8[4] = 0; /*0x6b1244*/
            v8[2] = g_CurrentFrame; /*0x6b1247*/
            v5 = v8; /*0x6b124a*/
          }
          Prefix_0 = (*(int (__stdcall **)(int, _DWORD *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, v5, 20, 0); /*0x6b125b*/
          if ( Prefix_0 < 0 ) /*0x6b125f*/
            break; /*0x6b125f*/
          v10 = v3[16]; /*0x6b1265*/
          if ( v3[18] < v10 /*0x6b128a*/
            || (*((_BYTE *)v3 + 69) || !v10)
            && (v11 = v3[19], v11 > 0)
            && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v6 + 8))(v3 + 14, v10 + v11, 0) )
          {
            v12 = v3[18]; /*0x6b1291*/
            v13 = v3[15]; /*0x6b1294*/
            v3[18] = v12 + 1; /*0x6b129a*/
            *(_DWORD *)(v13 + 4 * v12) = v5; /*0x6b129d*/
          }
          v7 = v16; /*0x6b12a4*/
          a1 = (_DWORD *)((char *)a1 + 1); /*0x6b12ab*/
          if ( (int)a1 >= v16 ) /*0x6b12af*/
            goto LABEL_20; /*0x6b12af*/
          v5 = 0; /*0x6b122e*/
        }
      }
    }
  }
  return Prefix_0; /*0x6b12f1*/
}
} // namespace ra2

// 0x6B1A70
namespace gamemd {
long long SlaveManagerClass::Calc2DDistance()
{
  double v1; // st7

  v1 = Math::Sqrt((double)*this * (double)*this + (double)*(this + 1) * (double)*(this + 1)); /*0x6b1a9c*/
  return Math::RoundToInt(v1); /*0x6b1aa9*/
}
} // namespace ra2

// 0x6AF650
namespace gamemd {
wchar_t * SlaveManagerClass::CreateSlave(wchar_t ** a2)
{
  int v3; // edi
  int v4; // eax
  wchar_t *result; // eax
  wchar_t *v6; // [esp+Ch] [ebp-8h]

  v3 = **(&this->vtable20); /*0x6af65f*/
  v4 = (*(int (__thiscall **)(_DWORD))(*this->master + 60))(this->master); /*0x6af661*/
  result = (wchar_t *)(*(int (__thiscall **)(_DWORD, int))(v3 + 140))(*(&this->vtable20), v4); /*0x6af668*/
  *a2 = result; /*0x6af674*/
  if ( result ) /*0x6af676*/
  {
    (*(void (__thiscall **)(wchar_t *))(result->u32_D4)(result); /*0x6af67c*/
    *((_DWORD *)*a2 + 183) = this->master; /*0x6af68b*/
    a2[1] = 0; /*0x6af691*/
    result = g_CurrentFrame; /*0x6af698*/
    a2[2] = g_CurrentFrame; /*0x6af6a2*/
    a2[3] = v6; /*0x6af6a4*/
    a2[4] = 0; /*0x6af6a7*/
  }
  return result; /*0x6af6aa*/
}
} // namespace gamemd

// 0x6B1130
namespace gamemd {
int SlaveManagerClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 ) /*0x6b1136*/
    return -2147467261; /*0x6b1138*/
  *a2 = 861581284; /*0x6b1146*/
  a2[1] = 299183526; /*0x6b114e*/
  a2[2] = 268444350; /*0x6b1157*/
  a2[3] = 1822515787; /*0x6b1160*/
  return 0; /*0x6b113d*/
}
} // namespace gamemd

// 0x6B1300
namespace gamemd {
int SlaveManagerClass::SaveManager(TechnoTypeClass * aP0, int * a1, int aP2)
{
  int result; // eax
  int v4; // edx
  int i; // edi

  result = AbstractClass::SaveLoad_Prefix(aP0, a1, aP2); /*0x6b1312*/
  if ( result >= 0 ) /*0x6b1319*/
  {
    v4 = *a1; /*0x6b131e*/
    aP2 = aP0[18]; /*0x6b132a*/
    result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(v4 + 16))(a1, &aP2, 4, 0); /*0x6b132e*/
    if ( result >= 0 ) /*0x6b1333*/
    {
      for ( i = 0; i < aP2; ++i ) /*0x6b133d*/
      {
        result = (*(int (__stdcall **)(int *, _DWORD, int, _DWORD))(*a1 + 16))(a1, *(_DWORD *)(aP0[15] + 4 * i), 20, 0); /*0x6b134d*/
        if ( result < 0 ) /*0x6b1352*/
          break; /*0x6b1352*/
      }
    }
  }
  return result; /*0x6b135d*/
}
} // namespace gamemd

// 0x6B1370
namespace gamemd {
int SlaveManagerClass::StubReturn100()
{
  return 100; /*0x6b1375*/
}
} // namespace gamemd

// 0x6B1380
namespace gamemd {
int SlaveManagerClass::StubReturn72()
{
  return 72; /*0x6b1385*/
}
} // namespace gamemd

// 0x6B1390
namespace gamemd {
SlaveManagerClass * SlaveManagerClass::ProcessOrders(char a2)
{
  SlaveManagerClass::Constructor_SlaveManagerClass(); /*0x6b1393*/
  if ( (a2 & 1) != 0 ) /*0x6b139d*/
    RA2_OPDEL(); /*0x6b13a0*/
  return this; /*0x6b13aa*/
}
} // namespace gamemd

// 0x6B13B0
namespace gamemd {
void SlaveManagerClass_25::ddtor()
{
  void *v2; // eax

  v2 = this->vtable2; /*0x6b13b6*/
  *(_DWORD *)(this + 16) = 0; /*0x6b13b9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x6b13c0*/
  {
    RA2_OPDEL(v2); /*0x6b13c6*/
    this->Items = 0; /*0x6b13ce*/
  }
  this->IsAllocated = 0; /*0x6b13d1*/
  this->q008 = 0; /*0x6b13d4*/
}
} // namespace gamemd

// 0x6B13E0
namespace gamemd {
unsigned int SlaveManagerClass_25::Write(int a2)
{
  if ( this->IsInitialized ) /*0x6b13e0*/
    return (unsigned int)(a2 - this->Items) >> 2; /*0x6b13f5*/
  else
    return 0; /*0x6b13e7*/
}
} // namespace gamemd

// 0x6B1400
namespace gamemd {
int SlaveManagerClass_25::Seek(int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x6b140a*/
}
} // namespace gamemd

// 0x6B1470
namespace gamemd {
char SlaveManagerClass_25::AddRef(int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x6b1472*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x6b147d*/
  {
    v3 = 0; /*0x6b147f*/
    if ( v2 <= 0 ) /*0x6b1483*/
      return 1; /*0x6b14a3*/
    v4 = (_DWORD *)this->Items; /*0x6b1485*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x6b148b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x6b1494*/
    {
      ++v3; /*0x6b1496*/
      ++v4; /*0x6b1497*/
      if ( v3 >= v2 ) /*0x6b149c*/
        return 1; /*0x6b149c*/
    }
  }
  return 0; /*0x6b149e*/
}
} // namespace gamemd

// 0x6B15F0
namespace gamemd {
char SlaveManagerClass_25::Release(int a2, unsigned int * a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x6b15fc*/
  {
    this->IsInitialized = 0; /*0x6b1602*/
    if ( a3 ) /*0x6b1608*/
      v4 = a3; /*0x6b161e*/
    else
      v4 = RA2_OPNEW(4 * a2); /*0x6b161a*/
    this->IsInitialized = 1; /*0x6b1622*/
    if ( !v4 ) /*0x6b1626*/
      return 0; /*0x6b169a*/
    if ( this->Items ) /*0x6b1628*/
    {
      v5 = this->q008; /*0x6b162f*/
      if ( a2 < v5 ) /*0x6b1634*/
        v5 = a2; /*0x6b1636*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x6b163c*/
        ++i; /*0x6b1641*/
      if ( this->IsAllocated ) /*0x6b164e*/
      {
        RA2_OPDEL(*((void **)this + 1)); /*0x6b1659*/
        this->Items = 0; /*0x6b1661*/
      }
    }
    this->Items = v4; /*0x6b166a*/
    this->q008 = a2; /*0x6b1672*/
    this->IsAllocated = a3 == 0; /*0x6b1675*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)&this->Items2))(this); /*0x6b167e*/
  }
  v7 = this->q008; /*0x6b1681*/
  if ( v7 < this->q010 ) /*0x6b1689*/
    this->q010 = v7; /*0x6b168b*/
  return 1; /*0x6b168e*/
}
} // namespace gamemd

// 0x6B16A0
namespace gamemd {
int SlaveManagerClass_25::Read(unsigned int * a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = *(this + 4); /*0x6b16a0*/
  result = 0; /*0x6b16a3*/
  if ( v2 <= 0 ) /*0x6b16a8*/
    return -1; /*0x6b16bf*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x6b16ae*/
  {
    if ( ++result >= v2 ) /*0x6b16bd*/
      return -1; /*0x6b16bd*/
  }
  return result; /*0x6b16c2*/
}
}
// 0x6B1980
namespace gamemd {
DynamicVector * SlaveManagerClass_25::QueryInterface(char a2)
{
  void *v3; // eax

  v3 = (void *)this->Items; /*0x6b1983*/
  *this = (void*)&VectorClass_SlaveManagerClass_SlaveControl___vftable; /*0x6b1986*/
  if ( v3 && *((_BYTE *)this + 13) ) /*0x6b1990*/
  {
    RA2_OPDEL(v3); /*0x6b1998*/
    *(this + 1) = 0; /*0x6b19a0*/
  }
  *((_BYTE *)this + 13) = 0; /*0x6b19ab*/
  *(this + 2) = 0; /*0x6b19b1*/
  if ( (a2 & 1) != 0 ) /*0x6b19b8*/
    RA2_OPDEL(); /*0x6b19bb*/
  return this; /*0x6b19c5*/
}
} // namespace gamemd
