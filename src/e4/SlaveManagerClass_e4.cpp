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
#include "e4/classes/LocomotionClass_e4.hpp"
#include "e4/classes/LayerClass_e4.hpp"
#include "e4/classes/SlaveControlVector_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/InfantryClass_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/ObjectPtr_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/TechnoTypeClass_e4.hpp"  // G42.36 C2027 supply
// [w16g4] C3861 supply (raw call-form evidence)
namespace gamemd { int ProcessDeployAction(...); }  // w16g4 raw call-form

// 0x522D00
namespace gamemd {
int SlaveManagerClass::Check()
{
  int result; // eax

  if ( this->q02B != 10 ) /*0x522d07*/
    return (*((int (__thiscall **)(SlaveManagerClass *, int, _DWORD))this->vfptr + 122))(this, 10, 0); /*0x522d0f*/
  return result; /*0x522d15*/
}
} // namespace ra2

// 0x522D20
namespace gamemd {
int SlaveManagerClass::VtableDispatch()
{
  return (*((int (__thiscall **)(SlaveManagerClass *, int, _DWORD))this->vfptr + 122))(this, 5, 0); /*0x522d2c*/
}
} // namespace ra2

// 0x522D30
namespace gamemd {
int SlaveManagerClass::CheckIsOne()
{
  return ((double (__thiscall *)(SlaveManagerClass *))*((_DWORD *)this->vfptr + 173))(this) == 1.0; /*0x522d47*/
}
} // namespace ra2

// 0x522FC0
namespace gamemd {
int SlaveManagerClass::IsMasterHarvester()
{
  return (*((int (__thiscall **)(SlaveManagerClass *))this->vfptr + 97))(this) == 10; /*0x522fd2*/
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
  int v15; // eax
  int v16; // edx
  int v17; // eax
  int v19; // [esp+10h] [ebp-8h]
  int i; // [esp+1Ch] [ebp+4h]

  AbstractClass::Constructor(); /*0x6af1a8*/
  SlaveControlVector::Constructor((_DWORD *)(&this->abstractFlags6), 0, 0); /*0x6af1b6*/
  this->slaves = &(void*)(void*)&DynamicVectorClass_SlaveManagerClass_SlaveControl___vftable; /*0x6af1c3*/
  this->q04C = 10; /*0x6af1c9*/
  this->q048 = 0; /*0x6af1d0*/
  this->q050 = dword_A8ED84; /*0x6af1d8*/
  this->SlaveManagerClass_field_58 = 0; /*0x6af1df*/
  this->master = aP1; /*0x6af1e2*/
  this->house = a3; /*0x6af1e9*/
  *(_DWORD *)this = &(void*)(void*)&SlaveManagerClass_vftable; /*0x6af1f2*/
  this->vtable2 = &(void*)(void*)&SlaveManagerClass_vftable; /*0x6af1f8*/
  this->vtable3 = &(void*)(void*)&SlaveManagerClass_vftable; /*0x6af1ff*/
  this->vtable4 = &(void*)(void*)&SlaveManagerClass_vftable; /*0x6af206*/
  this->slaveOwner = a4; /*0x6af20d*/
  this->slaveType = a5; /*0x6af210*/
  this->slaveCount = a6; /*0x6af213*/
  for ( i = 0; i < this->slaveOwner; ++i ) /*0x6af21a*/
  {
    v7 = (int *)RA2_OPNEW(0x14u); /*0x6af223*/
    if ( v7 ) /*0x6af22d*/
    {
      dword_A8ED84 = dword_A8ED84; /*0x6af22f*/
      v7[4] = 0; /*0x6af235*/
      v7[2] = (int)dword_A8ED84; /*0x6af238*/
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
      v9[2] = (int)dword_A8ED84; /*0x6af284*/
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
        || !(*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(this->slaves + 8))(&this->slaves, v13 + v14, 0) )
      {
        continue; /*0x6af2b2*/
      }
    }
    v15 = this->q048; /*0x6af2b9*/
    v16 = this->slaveVectorCount; /*0x6af2bc*/
    this->q048 = v15 + 1; /*0x6af2c2*/
    *(_DWORD *)(v16 + 4 * v15) = v9; /*0x6af2c5*/
  }
  this->q050 = dword_A8ED84; /*0x6af2e7*/
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
  int v2; // eax
  int v4; // [esp+8h] [ebp-8h]

  AbstractClass::Constructor(); /*0x6af366*/
  this->slaveVectorCount = 0; /*0x6af371*/
  this->slaveVectorCapacity = 0; /*0x6af374*/
  IDA_LOBYTE(this->creationFrame) = 1; /*0x6af377*/
  IDA_BYTE1(this->creationFrame) = 0; /*0x6af37b*/
  this->slaves[0] = (int)&(void*)(void*)&DynamicVectorClass_SlaveManagerClass_SlaveControl___vftable; /*0x6af37e*/
  *(_DWORD *)&this->__pad_48[4] = 10; /*0x6af385*/
  *(_DWORD *)this->__pad_48 = 0; /*0x6af38c*/
  *(_DWORD *)&this->__pad_48[8] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6af395*/
  this->SlaveManagerClass_field_58 = 0; /*0x6af398*/
  this->vfptr = &(void*)(void*)&SlaveManagerClass_vftable; /*0x6af39b*/
  this->vfptr1 = &(void*)(void*)&SlaveManagerClass_vftable; /*0x6af3a1*/
  this->vfptr2 = &(void*)(void*)&SlaveManagerClass_vftable; /*0x6af3a8*/
  this->vfptr3 = &(void*)(void*)&SlaveManagerClass_vftable; /*0x6af3af*/
  this->master = 0; /*0x6af3b6*/
  this->house = 0; /*0x6af3b9*/
  this->slaveOwner = 0; /*0x6af3bc*/
  this->slaveType = 0; /*0x6af3bf*/
  this->slaveCount = 0; /*0x6af3c2*/
  *(_DWORD *)&this->__pad_48[8] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6af3cb*/
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
  return (int)this; /*0x6af42d*/
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

  *(_DWORD *)this = &(void*)(void*)&SlaveManagerClass_vftable; /*0x6af4a5*/
  this->vtable2 = &(void*)(void*)&SlaveManagerClass_vftable; /*0x6af4ab*/
  this->vtable3 = &(void*)(void*)&SlaveManagerClass_vftable; /*0x6af4b2*/
  this->vtable4 = &(void*)(void*)&SlaveManagerClass_vftable; /*0x6af4b9*/
  for ( i = this->q048 - 1; i >= 0; --i ) /*0x6af4c4*/
  {
    if ( *(_DWORD *)(this->slaveVectorCount + 4 * i) ) /*0x6af4c9*/
      RA2_OPDEL(*(void **)(this->slaveVectorCount + 4 * i)); /*0x6af4d1*/
  }
  v3 = this->slaveVectorCapacity; /*0x6af4e5*/
  (*(void (__thiscall **)(int))(this->slaves + 12))(&this->abstractFlags6); /*0x6af4e8*/
  (*(void (__thiscall **)(int, int, _DWORD))(this->slaves + 8))(&this->slaves, v3, 0); /*0x6af4f2*/
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
  this->slaves = &(void*)(void*)&VectorClass_SlaveManagerClass_SlaveControl___vftable; /*0x6af542*/
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
  TechnoClass *master; // eax
  TechnoClass *v4; // ecx
  int v5; // ecx
  int i; // ecx

  master = this->master; /*0x6af588*/
  master->slaveManager = 0; /*0x6af58b*/
  this->master = (TechnoClass *)aP1; /*0x6af595*/
  v4 = *(TechnoClass **)(aP1 + 728); /*0x6af598*/
  if ( v4 ) /*0x6af5a0*/
  {
    IDA_LOBYTE(master) = TechnoClass::MutateAll(v4, 0, 0); /*0x6af5a6*/
    v5 = *(_DWORD *)(aP1 + 728); /*0x6af5ab*/
    if ( v5 ) /*0x6af5b3*/
      IDA_LOBYTE(master) = (*(int (__thiscall **)(int, int))(*(_DWORD *)v5 + 32))(v5, 1); /*0x6af5b9*/
  }
  *(_DWORD *)(aP1 + 728) = this; /*0x6af5bc*/
  for ( i = *(_DWORD *)this->__pad_48 - 1; i >= 0; --i ) /*0x6af5c6*/
  {
    master = **(TechnoClass ***)(this->slaveVectorCount + 4 * i); /*0x6af5ce*/
    if ( master ) /*0x6af5d2*/
      master->slaveOwner = this->master; /*0x6af5d7*/
  }
  return (char)master; /*0x6af5e0*/
}
} // namespace ra2

// 0x6AF5F0
namespace gamemd {
char SlaveManagerClass::UpdateSlaves()
{
  int *v2; // edi
  int v3; // edx
  TechnoClass *SlaveManagerClass_field_58; // eax
  SlaveManagerClass *v6; // [esp+0h] [ebp-14h]
  int v7; // [esp+Ch] [ebp-8h]

  v2 = *(int **)&stru_A8EB00.?[416]; /*0x6af5f7*/
  v3 = *(_DWORD *)&this->__pad_48[8]; /*0x6af5fd*/
  SlaveManagerClass_field_58 = (TechnoClass *)this->SlaveManagerClass_field_58; /*0x6af600*/
  if ( v3 == -1 ) /*0x6af606*/
  {
  LABEL_4:
    if ( SlaveManagerClass_field_58 ) /*0x6af614*/
      return (char)SlaveManagerClass_field_58; /*0x6af614*/
    goto LABEL_5; /*0x6af614*/
  }
  if ( *(_DWORD *)&stru_A8EB00.?[416] - v3 < (int)SlaveManagerClass_field_58 ) /*0x6af60e*/
  {
    SlaveManagerClass_field_58 = (TechnoClass *)((char *)SlaveManagerClass_field_58 /*0x6af610*/
                                               - (*(_DWORD *)&stru_A8EB00.?[416]
                                                - v3));
    goto LABEL_4; /*0x6af610*/
  }
  LABEL_5:
  *(_DWORD *)&this->__pad_48[8] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6af616*/
  this->SlaveManagerClass_field_54 = v7; /*0x6af622*/
  this->SlaveManagerClass_field_58 = 10; /*0x6af625*/
  SlaveManagerClass_field_58 = this->master; /*0x6af628*/
  if ( SlaveManagerClass_field_58 ) /*0x6af62d*/
  {
    SlaveManagerClass::ProcessSlaves(v6, v2, (int)this); /*0x6af631*/
    IDA_LOBYTE(); /*0x6af638*/
  }
  return (char)SlaveManagerClass_field_58; /*0x6af63d*/
}
} // namespace ra2

// 0x6AF6C0
namespace gamemd {
TechnoClass * * SlaveManagerClass_ProcessSlaves(unsigned int *a1, void * a2, void * a3)
{
  int v3; // ecx
  BuildingTypeClass **v5; // ebx
  int result; // eax
  int v7; // ecx
  int v8; // edi
  wchar_t *v9; // esi
  int v10; // ecx
  void (__thiscall **v11)(wchar_t *); // ebx
  int v12; // ecx
  int v13; // eax
  void *FoundationWidth; // eax
  int *v15; // ecx
  int FoundationHeight; // eax
  int v17; // ebx
  CellStruct *v18; // eax
  HouseClass **v19; // eax
  void (__thiscall **v20)(wchar_t *); // ebx
  Cell *v21; // eax
  int v22; // eax
  int v23; // ecx
  int v24; // ebx
  __int16 v25; // ax
  int *v26; // ecx
  int v27; // eax
  int v28; // ecx
  CellStruct *v29; // eax
  void (__thiscall **v30)(wchar_t *); // ebx
  Cell *v31; // eax
  int v32; // eax
  int v33; // ecx
  int v34; // ebx
  void *v35; // eax
  int *v36; // ecx
  int v37; // eax
  int v38; // ebx
  CellStruct *v39; // eax
  HouseClass **v40; // eax
  int v41; // ecx
  __int16 slaveOwner; // bx
  _DWORD *v43; // eax
  int v44; // ecx
  int v45; // ebx
  void *v46; // eax
  int *v47; // ecx
  int v48; // eax
  int v49; // ebx
  CellStruct *v50; // eax
  void **v51; // eax
  unsigned __int16 vtable1; // bx
  int (__thiscall **v53)(wchar_t *); // edx
  _DWORD *v54; // eax
  int v55; // eax
  int v56; // ecx
  int v57; // eax
  int v58; // ecx
  int v59; // edi
  __int16 v60; // ax
  int *v61; // ecx
  int v62; // eax
  int v63; // ecx
  CellStruct *v64; // eax
  void **v65; // eax
  void (__thiscall **v66)(wchar_t *); // edi
  int v67; // edx
  int v68; // ecx
  int v69; // eax
  int v70; // edx
  int v71; // ecx
  int v72; // ecx
  _WORD *v73; // [esp-6h] [ebp-B0h]
  _WORD *v74; // [esp-6h] [ebp-B0h]
  _WORD *v77; // [esp+2h] [ebp-A8h]
  SlaveManagerClass v78; // [esp+Eh] [ebp-9Ch] BYREF
  char v79[4]; // [esp+76h] [ebp-34h] BYREF
  __int16 v80[2]; // [esp+7Ah] [ebp-30h] BYREF
  char v81[12]; // [esp+7Eh] [ebp-2Ch] BYREF
  int v82; // [esp+8Ah] [ebp-20h] BYREF
  _DWORD v83[3]; // [esp+8Eh] [ebp-1Ch] BYREF
  char v84[8]; // [esp+9Ah] [ebp-10h] BYREF
  _DWORD v85[2]; // [esp+A2h] [ebp-8h] BYREF

  v3 = v3; /*0x6af6c8*/
  v5 = 0; /*0x6af6ca*/
  result = 0; /*0x6af6cc*/
  v7 = *(_DWORD *)(v3 + 72); /*0x6af6ce*/
  v78.NeedsSaveOrLink = 0; /*0x6af6d1*/
  if ( v7 > 0 )
  {
    while ( 1 )
    {
      v8 = *(_DWORD *)(*(_DWORD *)(v3 + 60) + 4 * result); /*0x6af6e6*/
      v9 = *(wchar_t **)v8; /*0x6af6e9*/
      if ( !*(_DWORD *)v8 && *(_DWORD *)(v8 + 4) != 6 ) /*0x6af6f9*/
      {
        *(_DWORD *)v8 = 0; /*0x6af707*/
        *(_DWORD *)(v8 + 4) = 6; /*0x6af709*/
        v10 = *(_DWORD *)(v3 + 48); /*0x6af711*/
        *(_DWORD *)(v8 + 8) = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6af717*/
        *(_DWORD *)(v8 + 12) = v83[1]; /*0x6af721*/
        *(_DWORD *)(v8 + 16) = v10; /*0x6af724*/
      }
      switch ( *(_DWORD *)(v8 + 4) )
      {
        case 1:
          v78.vfptr = *(void **)v9; /*0x6af744*/
          v78.abstractFlags = *(_DWORD *)(*((int (__thiscall **)(wchar_t *, char *, int, _DWORD, int *, int))v78.vfptr /*0x6af778*/
                                          + 206))(
                                           v9,
                                           v84,
                                           *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6020) / 256,
                                           0,
                                           p_SlaveManagerClass_field_5C,
                                           a3);
          if ( v78.abstractFlags == dword_B0B5B8 )
          {
            TechnoClass::SetFocus((TechnoClass *)v9, 0); /*0x6af7c5*/
            v12 = *(_DWORD *)(v3 + 36); /*0x6af7ca*/
            if ( v12 && (*(int (__thiscall **)(int))(v12->fallRate)(v12) == 6 )
            {
              v78.vfptr2 = *(void **)(v3 + 36); /*0x6af7e4*/
              if ( v78.vfptr2 )
              {
                v13 = (*(int (__thiscall **)(void *))(*(_DWORD *)v78.vfptr2 + 44))(v78.vfptr2); /*0x6af7ec*/
                v5 = v13 == 6 ? (BuildingTypeClass **)v78.vfptr2 : 0;
              }
              FoundationWidth = (void *)BuildingTypeClass::GetFoundationWidth(v5[328]); /*0x6af806*/
              v15 = (int *)v5[328]; /*0x6af80b*/
              v78.vfptr2 = FoundationWidth; /*0x6af813*/
              FoundationHeight = BuildingTypeClass::GetFoundationHeight(v15, 0); /*0x6af817*/
              v17 = *(_DWORD *)(v3 + 36); /*0x6af81f*/
              v77 = CellStruct::Set((CellStruct *)v83, IDA_LOWORD(v78.vfptr2) - 1, FoundationHeight / 2); /*0x6af839*/
              v18 = (CellStruct *)(*(int (__thiscall **)(int, int *))(v17->airstrikeTintTimer)(v17, &v78.creationFrame); /*0x6af849*/
              v19 = (HouseClass **)CellStruct::Add(v18, &v82, v77); /*0x6af851*/
            }
            else
            {
              v19 = (HouseClass **)(*(int (__thiscall **)(_DWORD, __int16 *))(**(_DWORD **)(v3 + 36) + 440))( /*0x6af862*/
                                     *(_DWORD *)(v3 + 36),
                                     v80);
            }
            v20 = *(void (__thiscall ***)(wchar_t *))v9; /*0x6af86a*/
            v78.slaveOwner = *v19; /*0x6af870*/
            a3 = 1; /*0x6af874*/
            p_SlaveManagerClass_field_5C = (int *)CellCoord::To_CellObj( /*0x6af881*/
                                                    (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                    (__int16 *)&v78.slaveOwner);
            v20[288](v9); /*0x6af884*/
            (*(void (__thiscall **)(wchar_t *, int, _DWORD))(*(_DWORD *)v9 + 488))(v9, 2, 0); /*0x6af892*/
            *(_DWORD *)(v8 + 4) = 4; /*0x6af898*/
          }
          else
          {
            v11 = *(void (__thiscall ***)(wchar_t *))v9; /*0x6af78c*/
            a3 = 1; /*0x6af792*/
            p_SlaveManagerClass_field_5C = (int *)CellCoord::To_CellObj( /*0x6af79f*/
                                                    (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                    (__int16 *)&v78.abstractFlags);
            v11[288](v9); /*0x6af7a2*/
            (*(void (__thiscall **)(wchar_t *, int, _DWORD))(*(_DWORD *)v9 + 488))(v9, 2, 0); /*0x6af7b0*/
            *(_DWORD *)(v8 + 4) = 2; /*0x6af7b6*/
          }
          goto LABEL_62; /*0x6af89f*/
        case 2:
          v21 = (Cell *)(*(int (__thiscall **)(wchar_t *))(*(_DWORD *)v9 + 444))(v9); /*0x6af8a8*/
          if ( (unsigned __int8)Cell::IsBridge2(v21) ) /*0x6af8b0*/
          {
            SlaveManagerClass::Check((SlaveManagerClass *)v9); /*0x6af8bb*/
            *(_DWORD *)(v8 + 4) = 3; /*0x6af8c0*/
          }
          else if ( !*((_DWORD *)v9 + 361) ) /*0x6af8cc*/
          {
            *(_DWORD *)(v8 + 4) = 1; /*0x6af8d8*/
          }
          goto LABEL_62; /*0x6af8c7*/
        case 3:
          if ( SlaveManagerClass::CheckIsOne((SlaveManagerClass *)v9) ) /*0x6af8e6*/
          {
            v22 = (*(int (__thiscall **)(wchar_t *, int *, int))(*(_DWORD *)v9 + 444))( /*0x6af8f7*/
                    v9,
                    p_SlaveManagerClass_field_5C,
                    a3);
            TechnoClass::SetFocus((TechnoClass *)v9, v22); /*0x6af900*/
            v23 = *(_DWORD *)(v3 + 36); /*0x6af905*/
            if ( v23 && (*(int (__thiscall **)(int))(v23->fallRate)(v23) == 6 ) /*0x6af914*/
            {
              v24 = IsObjectTypeBuildingType(*(_DWORD *)(v3 + 36)); /*0x6af91e*/
              v25 = BuildingTypeClass::GetFoundationWidth(v24->q520); /*0x6af926*/
              v26 = v24->q520; /*0x6af92b*/
              IDA_LOWORD(v78.master) = v25 - 1; /*0x6af934*/
              v27 = BuildingTypeClass::GetFoundationHeight(v26, 0); /*0x6af939*/
              v28 = *(_DWORD *)(v3 + 36); /*0x6af93f*/
              IDA_HIWORD(v78.master) = v27 / 2; /*0x6af946*/
              v29 = (CellStruct *)(*(int (__thiscall **)(int, int *))(v28->airstrikeTintTimer)(v28, v78.slaves); /*0x6af95c*/
              v78.referenceCount = *CellStruct::Add(v29, &v78.__pad_48[4], &v78.master); /*0x6af96b*/
            }
            else
            {
              v78.referenceCount = *(_DWORD *)(*(int (__thiscall **)(_DWORD, int *))(**(_DWORD **)(v3 + 36) + 440))( /*0x6af983*/
                                                *(_DWORD *)(v3 + 36),
                                                &v78.SlaveManagerClass_field_54);
            }
            v30 = *(void (__thiscall ***)(wchar_t *))v9; /*0x6af987*/
            a3 = 1; /*0x6af98d*/
            p_SlaveManagerClass_field_5C = (int *)CellCoord::To_CellObj( /*0x6af99a*/
                                                    (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                    (__int16 *)&v78.referenceCount);
            v30[288](v9); /*0x6af99d*/
            (*(void (__thiscall **)(wchar_t *, int, _DWORD))(*(_DWORD *)v9 + 488))(v9, 2, 0); /*0x6af9ab*/
            *(_DWORD *)(v8 + 4) = 4; /*0x6af9b1*/
          }
          else
          {
            v31 = (Cell *)(*(int (__thiscall **)(wchar_t *))(*(_DWORD *)v9 + 444))(v9); /*0x6af9c1*/
            if ( (unsigned __int8)Cell::IsBridge2(v31) ) /*0x6af9c9*/
            {
              if ( !SlaveManagerClass::IsMasterHarvester((SlaveManagerClass *)v9) ) /*0x6af9e5*/
                *(_DWORD *)(v8 + 4) = 1; /*0x6af9f2*/
            }
            else
            {
              SlaveManagerClass::VtableDispatch((SlaveManagerClass *)v9); /*0x6af9d4*/
              *(_DWORD *)(v8 + 4) = 1; /*0x6af9d9*/
            }
          }
          goto LABEL_62; /*0x6af9b8*/
        case 4:
          v32 = *((_DWORD *)v9 + 361); /*0x6af9fe*/
          IDA_HIBYTE(v78.vfptr1) = 0; /*0x6afa04*/
          if ( v32 ) /*0x6afa0b*/
          {
            v33 = *(_DWORD *)(v3 + 36); /*0x6afa11*/
            if ( v33 && (*(int (__thiscall **)(int))(v33->fallRate)(v33) == 6 ) /*0x6afa20*/
            {
              v34 = IsObjectTypeBuildingType(*(_DWORD *)(v3 + 36)); /*0x6afa2a*/
              v35 = (void *)BuildingTypeClass::GetFoundationWidth(*(BuildingTypeClass **)(v34 + 1312)); /*0x6afa32*/
              v36 = *(int **)(v34 + 1312); /*0x6afa37*/
              v78.vfptr = v35; /*0x6afa3f*/
              v37 = BuildingTypeClass::GetFoundationHeight(v36, 0); /*0x6afa43*/
              v38 = *(_DWORD *)(v3 + 36); /*0x6afa4c*/
              v73 = CellStruct::Set((CellStruct *)v80, IDA_LOWORD(v78.vfptr) - 1, v37 / 2); /*0x6afa67*/
              v39 = (CellStruct *)(*(int (__thiscall **)(int, int *, int *))(v38->airstrikeTintTimer)( /*0x6afa75*/
                                    v38,
                                    &v82,
                                    &v78.SlaveManagerClass_field_54);
              v40 = (HouseClass **)CellStruct::Add(v39, v73, p_SlaveManagerClass_field_5C); /*0x6afa7d*/
            }
            else
            {
              v40 = (HouseClass **)(*(int (__thiscall **)(_DWORD, int *, int *))(**(_DWORD **)(v3 + 36) + 440))( /*0x6afa8e*/
                                     *(_DWORD *)(v3 + 36),
                                     &v78.SlaveManagerClass_field_5C,
                                     p_SlaveManagerClass_field_5C);
            }
            v41 = *((_DWORD *)v9 + 361); /*0x6afa94*/
            v78.slaveOwner = *v40; /*0x6afaa3*/
            slaveOwner = (__int16)v78.slaveOwner; /*0x6afa9a*/
            p_SlaveManagerClass_field_5C = v85; /*0x6afaa9*/
            v43 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v41 + 72))(v41); /*0x6afaaa*/
            v83[0] = *(_DWORD *)CellStruct::Set((CellStruct *)&v78.slaveCount, *v43 / 256, v43[1] / 256); /*0x6afad9*/
            IDA_LOWORD(v78.vfptr2) = IDA_LOWORD(v83[0]) - slaveOwner; /*0x6afaef*/
            IDA_HIWORD(v78.vfptr2) = IDA_HIWORD(v83[0]) - IDA_HIWORD(v78.house); /*0x6afaf4*/
            v78.vfptr = v78.vfptr2; /*0x6afb01*/
            if ( (__int16)SlaveManagerClass::Calc2DDistance(&v78) > *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] /*0x6afb19*/
                                                                              + 3576) )
              IDA_HIBYTE(v78.vfptr1) = 1; /*0x6afb1b*/
          }
          v44 = *(_DWORD *)(v3 + 36); /*0x6afb20*/
          if ( v44 && (*(int (__thiscall **)(int))(v44->fallRate)(v44) == 6 ) /*0x6afb2f*/
          {
            v45 = IsObjectTypeBuildingType(*(_DWORD *)(v3 + 36)); /*0x6afb39*/
            v46 = (void *)BuildingTypeClass::GetFoundationWidth(v45->gattlingValue); /*0x6afb41*/
            v47 = v45->gattlingValue; /*0x6afb46*/
            v78.vfptr = v46; /*0x6afb4e*/
            v48 = BuildingTypeClass::GetFoundationHeight(v47, 0); /*0x6afb52*/
            v49 = *(_DWORD *)(v3 + 36); /*0x6afb5a*/
            v74 = CellStruct::Set((CellStruct *)v78.slaves, IDA_LOWORD(v78.vfptr) - 1, v48 / 2); /*0x6afb71*/
            v50 = (CellStruct *)(*(int (__thiscall **)(int, char *, int *))(v49->airstrikeTintTimer)( /*0x6afb7e*/
                                  v49,
                                  v78.__pad_48,
                                  &v78.slaveVectorCapacity);
            v51 = (void **)CellStruct::Add(v50, v74, p_SlaveManagerClass_field_5C); /*0x6afb86*/
          }
          else
          {
            v51 = (void **)(*(int (__thiscall **)(_DWORD, char *, int *))(**(_DWORD **)(v3 + 36) + 440))( /*0x6afb97*/
                             *(_DWORD *)(v3 + 36),
                             &v78.__pad_48[8],
                             p_SlaveManagerClass_field_5C);
          }
          v53 = *(int (__thiscall ***)(wchar_t *))v9; /*0x6afb9f*/
          p_SlaveManagerClass_field_5C = &v78.SlaveManagerClass_field_5C; /*0x6afba7*/
          v78.vfptr1 = *v51; /*0x6afba8*/
          vtable1 = (unsigned __int16)v78.vfptr1; /*0x6afb9d*/
          v54 = (_DWORD *)v53[110](v9); /*0x6afbac*/
          if ( *v54 == IDA___PAIR32__(IDA_HIWORD(v78.vfptr), vtable1) ) /*0x6afbb5*/
          {
            if ( !*((_DWORD *)v9 + 361) ) /*0x6afbc2*/
            {
              InfantryClass::SlaveGiveMoney_RecordBalanceBefore((int *)v9, *(_DWORD **)(v3 + 36)); /*0x6afbd2*/
              (*(void (__thiscall **)(wchar_t *))(*(_DWORD *)v9 + 212))(v9); /*0x6afbdb*/
              v55 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6afbe1*/
              v56 = *(_DWORD *)(v3 + 52); /*0x6afbe6*/
              *(_DWORD *)(v8 + 4) = 5; /*0x6afbec*/
              *(_DWORD *)(v8 + 8) = v55; /*0x6afbf3*/
              *(_DWORD *)(v8 + 12) = v85[0]; /*0x6afbfc*/
              *(_DWORD *)(v8 + 16) = v56; /*0x6afbff*/
              goto LABEL_62; /*0x6afc02*/
            }
  LABEL_47:
            if ( !IDA_HIBYTE(v78.vfptr1) ) /*0x6afc17*/
              goto LABEL_62; /*0x6afc17*/
            goto LABEL_48; /*0x6afc17*/
          }
          if ( *((_DWORD *)v9 + 361) ) /*0x6afc07*/
            goto LABEL_47; /*0x6afc0f*/
  LABEL_48:
          v57 = IsObjectTypeBuildingType(*(_DWORD *)(v3 + 36)); /*0x6afc1d*/
          v58 = *(_DWORD *)(v3 + 36); /*0x6afc25*/
          if ( v57 ) /*0x6afc2a*/
          {
            v59 = IsObjectTypeBuildingType(v58); /*0x6afc31*/
            v60 = BuildingTypeClass::GetFoundationWidth(*(BuildingTypeClass **)(v59 + 1312)); /*0x6afc39*/
            v61 = *(int **)(v59 + 1312); /*0x6afc3e*/
            IDA_LOWORD(v78.uniqueId) = v60 - 1; /*0x6afc47*/
            v62 = BuildingTypeClass::GetFoundationHeight(v61, 0); /*0x6afc4c*/
            v63 = *(_DWORD *)(v3 + 36); /*0x6afc52*/
            IDA_HIWORD(v78.uniqueId) = v62 / 2; /*0x6afc59*/
            v64 = (CellStruct *)(*(int (__thiscall **)(int, char *, int *, int *))(v63->airstrikeTintTimer)( /*0x6afc72*/
                                  v63,
                                  v79,
                                  &v78.SlaveManagerClass_field_60,
                                  &v78.uniqueId);
            v65 = (void **)CellStruct::Add(v64, &v78.SlaveManagerClass_field_5C, (_WORD *)a3); /*0x6afc7a*/
          }
          else
          {
            v65 = (void **)(*(int (__thiscall **)(int, char *, int *, int))(v58->airstrikeTintTimer)( /*0x6afc8b*/
                             v58,
                             v81,
                             &v78.SlaveManagerClass_field_5C,
                             a3);
          }
          v66 = *(void (__thiscall ***)(wchar_t *))v9; /*0x6afc93*/
          v78.NeedsSaveOrLink = *v65; /*0x6afc99*/
          a3 = 1; /*0x6afc9d*/
          p_SlaveManagerClass_field_5C = (int *)CellCoord::To_CellObj( /*0x6afcaa*/
                                                  (CellCoord *)&stru_87F5F0.__pad_58[416],
                                                  (__int16 *)&v78.NeedsSaveOrLink);
          v66[288](v9); /*0x6afcad*/
          (*(void (__thiscall **)(wchar_t *, int, _DWORD))(*(_DWORD *)v9 + 488))(v9, 2, 0); /*0x6afcbb*/
  LABEL_62:
          v72 = *(_DWORD *)(v3 + 72); /*0x6afd20*/
          result = (int)++v78.NeedsSaveOrLink; /*0x6afd27*/
          if ( (int)v78.NeedsSaveOrLink >= v72 ) /*0x6afd2e*/
            return result; /*0x6afd2e*/
          v5 = 0; /*0x6af6e1*/
          break; /*0x6af6e1*/
        case 5:
          v67 = *(_DWORD *)(v8 + 8); /*0x6afcc3*/
          v68 = *(_DWORD *)(v8 + 16); /*0x6afcc6*/
          if ( v67 == -1 ) /*0x6afccc*/
            goto LABEL_55; /*0x6afccc*/
          if ( *(_DWORD *)&stru_A8EB00.?[416] - v67 >= v68 ) /*0x6afcd7*/
            goto LABEL_56; /*0x6afcd7*/
          v68 -= *(_DWORD *)&stru_A8EB00.?[416] - v67; /*0x6afcd9*/
  LABEL_55:
          if ( !v68 ) /*0x6afcdd*/
          {
  LABEL_56:
            v69 = *((_DWORD *)v9 + 432); /*0x6afcdf*/
            *((_DWORD *)v9 + 27) = *(_DWORD *)(v69 + 160); /*0x6afceb*/
            *((_DWORD *)v9 + 28) = *(_DWORD *)(v69 + 160); /*0x6afcf4*/
            *(_DWORD *)(v8 + 4) = 0; /*0x6afcf7*/
          }
          goto LABEL_62; /*0x6afcfa*/
        case 6:
          v70 = *(_DWORD *)(v8 + 8); /*0x6afcfc*/
          v71 = *(_DWORD *)(v8 + 16); /*0x6afcff*/
          if ( v70 == -1 ) /*0x6afd05*/
            goto LABEL_60; /*0x6afd05*/
          if ( *(_DWORD *)&stru_A8EB00.?[416] - v70 >= v71 ) /*0x6afd10*/
            goto LABEL_61; /*0x6afd10*/
          v71 -= *(_DWORD *)&stru_A8EB00.?[416] - v70; /*0x6afd12*/
  LABEL_60:
          if ( !v71 ) /*0x6afd16*/
  LABEL_61:
            SlaveManagerClass::CreateSlave((SlaveManagerClass *)v3, (wchar_t **)v8); /*0x6afd1b*/
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
int SlaveManagerClass::LostSlave(int aP1)
{
  int result; // eax
  int slaveVectorCount; // esi
  _DWORD **i; // edx
  _DWORD *v5; // eax
  int slaveType; // ecx
  int v7; // [esp+10h] [ebp-8h]

  result = *(_DWORD *)this->__pad_48 - 1; /*0x6b0a26*/
  if ( result >= 0 ) /*0x6b0a2a*/
  {
    slaveVectorCount = this->slaveVectorCount; /*0x6b0a2c*/
    for ( i = (_DWORD **)(slaveVectorCount + 4 * result); **i != aP1; --i ) /*0x6b0a33*/
    {
      if ( --result < 0 ) /*0x6b0a42*/
        return result; /*0x6b0a42*/
    }
    v5 = *(_DWORD **)(slaveVectorCount + 4 * result); /*0x6b0a4d*/
    if ( *v5 ) /*0x6b0a50*/
      *(_DWORD *)(*v5 + 732) = 0; /*0x6b0a56*/
    *v5 = 0; /*0x6b0a60*/
    v5[1] = 6; /*0x6b0a66*/
    slaveType = this->slaveType; /*0x6b0a73*/
    result = (int)(v5 + 2); /*0x6b0a76*/
    *(_DWORD *)result = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6b0a79*/
    *(_DWORD *)(result + 4) = v7; /*0x6b0a7f*/
    *(_DWORD *)(result + 8) = slaveType; /*0x6b0a82*/
  }
  return result; /*0x6b0a44*/
}
} // namespace ra2

// 0x6B1020
namespace gamemd {
int SlaveManagerClass::ShouldWakeUpNow()
{
  TechnoClass *master; // ecx
  int v4; // [esp+Ch] [ebp-4h] BYREF

  master = this->master; /*0x6b1024*/
  if ( !master || this->SlaveManagerClass_field_5C ) /*0x6b102f*/
    return 0; /*0x6b102f*/
  if ( !master->owner->currentPlayer ) /*0x6b1040*/
    return 1; /*0x6b104e*/
  if ( *(_DWORD *)((*((int (__thiscall **)(TechnoClass *))master->vfptr + 111))(master) + 236) == 5 ) /*0x6b105e*/
    return 1; /*0x6b1064*/
  if ( this->SlaveManagerClass_field_60 + *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6032) >= *(int *)&stru_A8EB00.?[416] ) /*0x6b107d*/
    return 0; /*0x6b107d*/
  v4 = *(_DWORD *)(*((int (__thiscall **)(TechnoClass *, int *, int, _DWORD))this->master->vfptr + 206))( /*0x6b10ad*/
                    this->master,
                    &v4,
                    *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 6016) / 256,
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
  result = Power::TimerProcess(this->SlaveManagerClass_field_5C); /*0x6b1105*/
  for ( i = *(_DWORD *)this->__pad_48 - 1; i >= 0; --i ) /*0x6b110e*/
    result = Power::TimerProcess(*(_DWORD *)(*(_DWORD *)(this->slaveVectorCount + 4 * i) + 4)); /*0x6b111c*/
  return result; /*0x6b1124*/
}
} // namespace ra2

// 0x6B1170
namespace gamemd {
AbstractClass * * SlaveManagerClass::LoadManager(unsigned int * a1, int a2)
{
  int v2; // esi
  SlaveManagerClass *v3; // edi
  int Prefix_0; // ebx
  int v5; // ebp
  int *slaves; // esi
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  int slaveVectorCapacity; // ecx
  int v11; // eax
  int v12; // eax
  int slaveVectorCount; // edx
  int v14; // esi
  int v16; // [esp+28h] [ebp-4h] BYREF

  v2 = a2; /*0x6b1174*/
  a1 = a1; /*0x6b1179*/
  Prefix_0 = AbstractClass::SaveLoad_Prefix_0(a1, a2); /*0x6b1184*/
  v5 = 0; /*0x6b1186*/
  if ( Prefix_0 >= 0 ) /*0x6b118a*/
  {
    if ( a1 ) /*0x6b1192*/
    {
      AbstractClass::InitVtables((AbstractClass *)a1, (int)&a1); /*0x6b119b*/
      SlaveControlVector::Constructor((SlaveControlVector *)a1->slaves, 0, 0); /*0x6b11a7*/
      a1->slaves[0] = (int)&(void*)(void*)&DynamicVectorClass_SlaveManagerClass_SlaveControl___vftable; /*0x6b11b0*/
      *(_DWORD *)&a1->__pad_48[4] = 10; /*0x6b11b6*/
      *(_DWORD *)a1->__pad_48 = 0; /*0x6b11bd*/
      Timer::Start((Timer *)&a1->__pad_48[8], 0); /*0x6b11c0*/
      a1->vfptr = &(void*)(void*)&SlaveManagerClass_vftable; /*0x6b11c5*/
      a1->vfptr1 = &(void*)(void*)&SlaveManagerClass_vftable; /*0x6b11cb*/
      v2 = a2; /*0x6b11d2*/
      a1->vfptr2 = &(void*)(void*)&SlaveManagerClass_vftable; /*0x6b11d6*/
      a1->vfptr3 = &(void*)(void*)&SlaveManagerClass_vftable; /*0x6b11dd*/
    }
    Prefix_0 = (*(int (__stdcall **)(int, int *, int, _DWORD))(v2->vtable4)(v2, &v16, 4, 0); /*0x6b11f2*/
    if ( Prefix_0 >= 0 ) /*0x6b11f6*/
    {
      slaves = a1->slaves; /*0x6b11fc*/
      if ( a1 != (SlaveManagerClass *)-56 ) /*0x6b1201*/
      {
        SlaveControlVector::Constructor((SlaveControlVector *)a1->slaves, 0, 0); /*0x6b1207*/
        *slaves = (int)&(void*)(void*)&DynamicVectorClass_SlaveManagerClass_SlaveControl___vftable; /*0x6b120c*/
        *(_DWORD *)&a1->__pad_48[4] = 10; /*0x6b1212*/
        *(_DWORD *)a1->__pad_48 = 0; /*0x6b1219*/
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
            ObjectPtr::RegisterForTracking( /*0x6b12c9*/
              (int)&SwizzleManagerClass_Instance,
              *(int **)(a1->slaveVectorCount + 4 * v14++));
          while ( v14 < v16 ); /*0x6b12d3*/
        }
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&a1->master); /*0x6b12de*/
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&a1->house); /*0x6b12ec*/
      }
      else
      {
        while ( 1 ) /*0x6b1232*/
        {
          v8 = RA2_OPNEW(0x14u); /*0x6b1232*/
          if ( v8 ) /*0x6b123c*/
          {
            v9 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6b123e*/
            *(_DWORD *)(v8 + 16) = 0; /*0x6b1244*/
            *(_DWORD *)(v8 + 8) = v9; /*0x6b1247*/
            v5 = v8; /*0x6b124a*/
          }
          Prefix_0 = (*(int (__stdcall **)(int, int, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, v5, 20, 0); /*0x6b125b*/
          if ( Prefix_0 < 0 ) /*0x6b125f*/
            break; /*0x6b125f*/
          slaveVectorCapacity = a1->slaveVectorCapacity; /*0x6b1265*/
          if ( *(_DWORD *)a1->__pad_48 < slaveVectorCapacity /*0x6b128a*/
            || (IDA_BYTE1(a1->creationFrame) || !slaveVectorCapacity)
            && (v11 = *(_DWORD *)&a1->__pad_48[4], v11 > 0)
            && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(*slaves + 8))(
                 a1->slaves,
                 slaveVectorCapacity + v11,
                 0) )
          {
            v12 = *(_DWORD *)a1->__pad_48; /*0x6b1291*/
            slaveVectorCount = a1->slaveVectorCount; /*0x6b1294*/
            *(_DWORD *)a1->__pad_48 = v12 + 1; /*0x6b129a*/
            *(_DWORD *)(slaveVectorCount + 4 * v12) = v5; /*0x6b129d*/
          }
          v7 = v16; /*0x6b12a4*/
          a1 = (SlaveManagerClass *)((char *)a1 + 1); /*0x6b12ab*/
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
  __int64 result; // rax
  int v3; // kr00_4
  double v4; // [esp+0h] [ebp-Ch]
  int vtable0_high; // [esp+8h] [ebp-4h]
  int vtable0_low; // [esp+8h] [ebp-4h]

  vtable0_high = IDA_SHIWORD(this->vfptr); /*0x6b1a78*/
  __asm { fild [esp+0Ch+var_4] } /*0x6b1a7f*/
  vtable0_low = SLOWORD(this->vfptr); /*0x6b1a83*/
  __asm /*0x6b1a87*/
  {
    fild [esp+0Ch+var_4]
    fld st
    fmul st, st(1)
    fld st(2)
    fmul st, st(3)
    faddp st(1), st
    fstp [esp+0Ch+var_C]; double
    fstp st
    fstp st
  }
  Math::Sqrt(v4); /*0x6b1a9c*/
  v3 = Math::RoundToInt(v1); /*0x6b1aa1*/
  IDA_WORD2(result) = IDA_HIWORD(v3); /*0x6b1aa1*/
  IDA_LOWORD(result) = v3; /*0x6b1aa1*/
  return result; /*0x6b1aa9*/
}
} // namespace ra2

// 0x6AF650
namespace gamemd {
wchar_t * SlaveManagerClass::CreateSlave(wchar_t ** a2)
{
  int (__thiscall **vtable0)(HouseClass *, int); // edi
  int v4; // eax
  wchar_t *result; // eax
  wchar_t *v6; // [esp+Ch] [ebp-8h]

  vtable0 = (int (__thiscall **)(HouseClass *, int))this->house->vfptr; /*0x6af65f*/
  v4 = (*((int (__thiscall **)(TechnoClass *))this->master->vfptr + 15))(this->master); /*0x6af661*/
  result = (wchar_t *)vtable0[35](this->house, v4); /*0x6af668*/
  *result = result; /*0x6af674*/
  if ( result ) /*0x6af676*/
  {
    (*(void (__thiscall **)(wchar_t *))(result->u32_D4)(result); /*0x6af67c*/
    *((_DWORD *)*result + 183) = this->master; /*0x6af68b*/
    result[1] = 0; /*0x6af691*/
    result = *(wchar_t **)&stru_A8EB00.?[416]; /*0x6af698*/
    result[2] = *(wchar_t **)&stru_A8EB00.?[416]; /*0x6af6a2*/
    result[3] = v6; /*0x6af6a4*/
    result[4] = 0; /*0x6af6a7*/
  }
  return result; /*0x6af6aa*/
}
} // namespace gamemd

// 0x6B1130
namespace gamemd {
int SlaveManagerClass::ddtor(int a1, unsigned int * result)
{
  if ( !a2 ) /*0x6b1136*/
    return -2147467261; /*0x6b1138*/
  *a2 = 861581284; /*0x6b1146*/
  a2[1] = 299183526; /*0x6b114e*/
  a2[2] = 268444350; /*0x6b1157*/
  a2[3] = unk_7E987C; /*0x6b1160*/
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

  result = AbstractClass::SaveLoad_Prefix((int *)aP0, a1, aP2); /*0x6b1312*/
  if ( result >= 0 ) /*0x6b1319*/
  {
    v4 = *a1; /*0x6b131e*/
    aP2 = *(_DWORD *)aP0->__pad_48; /*0x6b132a*/
    result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(v4 + 16))(a1, &aP2, 4, 0); /*0x6b132e*/
    if ( result >= 0 ) /*0x6b1333*/
    {
      for ( i = 0; i < aP2; ++i ) /*0x6b133d*/
      {
        result = (*(int (__stdcall **)(int *, _DWORD, int, _DWORD))(*a1 + 16))( /*0x6b134d*/
                   a1,
                   *(_DWORD *)(aP0->slaveVectorCount + 4 * i),
                   20,
                   0);
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
SlaveManagerClass * SlaveManagerClass::ProcessOrders(void * Block, char a2)
{
  SlaveManagerClass::Constructor_SlaveManagerClass((int)Block); /*0x6b1393*/
  if ( (a2 & 1) != 0 ) /*0x6b139d*/
    RA2_OPDEL(Block); /*0x6b13a0*/
  return Block; /*0x6b13aa*/
}
} // namespace gamemd

// 0x6B13B0
namespace gamemd {
void SlaveManagerClass_25::ddtor(void *a1_1, void *a2_1)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x6b13b6*/
  this->m_10 = 0; /*0x6b13b9*/
  if ( v2 && IDA_BYTE1(this->m_C) ) /*0x6b13c0*/
  {
    RA2_OPDEL(v2); /*0x6b13c6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x6b13ce*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x6b13d1*/
  this->m_8 = 0; /*0x6b13d4*/
}
} // namespace gamemd

// 0x6B13E0
namespace gamemd {
unsigned int SlaveManagerClass_25::Write(int a2)
{
  if ( IDA_LOBYTE(this->m_C) ) /*0x6b13e0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x6b13f5*/
  else
    return 0; /*0x6b13e7*/
}
} // namespace gamemd

// 0x6B1400
namespace gamemd {
int SlaveManagerClass_25::Seek(int a2, void *a2_2, void *a3_1)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x6b140a*/
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
    v4 = *(_DWORD **)&this->m_1[3]; /*0x6b1485*/
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
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x6b15fc*/
  {
    IDA_LOBYTE(this->m_C) = 0; /*0x6b1602*/
    if ( a3 ) /*0x6b1608*/
      v4 = a3; /*0x6b161e*/
    else
      v4 = (_DWORD *)RA2_OPNEW(4 * a2); /*0x6b161a*/
    IDA_LOBYTE(this->m_C) = 1; /*0x6b1622*/
    if ( !v4 ) /*0x6b1626*/
      return 0; /*0x6b169a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x6b1628*/
    {
      m_8 = this->m_8; /*0x6b162f*/
      if ( a2 < m_8 ) /*0x6b1634*/
        m_8 = a2; /*0x6b1636*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x6b163c*/
        ++i; /*0x6b1641*/
      if ( IDA_BYTE1(this->m_C) ) /*0x6b164e*/
      {
        RA2_OPDEL(*(void **)&this->m_1[3]); /*0x6b1659*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x6b1661*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x6b166a*/
    this->m_8 = a2; /*0x6b1672*/
    IDA_BYTE1(this->m_C) = a3 == 0; /*0x6b1675*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAUSlaveControl_SlaveManagerClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x6b167e*/
  }
  v7 = this->m_8; /*0x6b1681*/
  if ( v7 < this->m_10 ) /*0x6b1689*/
    this->m_10 = v7; /*0x6b168b*/
  return 1; /*0x6b168e*/
}
} // namespace gamemd

// 0x6B16A0
namespace gamemd {
int SlaveManagerClass_25::Read(unsigned int * a2, void *a2_2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = a2_2->m_10; /*0x6b16a0*/
  result = 0; /*0x6b16a3*/
  if ( m_10 <= 0 ) /*0x6b16a8*/
    return -1; /*0x6b16bf*/
  for ( i = *(_DWORD **)&a2_2->m_1[3]; *i != *a2_2; ++i ) /*0x6b16ae*/
  {
    if ( ++result >= m_10 ) /*0x6b16bd*/
      return -1; /*0x6b16bd*/
  }
  return result; /*0x6b16c2*/
}
}
// 0x6B1980
namespace gamemd {
DynamicVector * SlaveManagerClass_25::QueryInterface(unsigned int * Block, char a2)
{
  void *v3; // eax

  v3 = *(void **)&Block->m_1[3]; /*0x6b1983*/
  *(_DWORD *)Block->__pad_0 = &(void*)(void*)&VectorClass_SlaveManagerClass_SlaveControl___vftable; /*0x6b1986*/
  if ( v3 && IDA_BYTE1(Block->m_C) ) /*0x6b1990*/
  {
    RA2_OPDEL(v3); /*0x6b1998*/
    *(_DWORD *)&Block->m_1[3] = 0; /*0x6b19a0*/
  }
  IDA_BYTE1(Block->m_C) = 0; /*0x6b19ab*/
  Block->m_8 = 0; /*0x6b19b1*/
  if ( (a2 & 1) != 0 ) /*0x6b19b8*/
    RA2_OPDEL(Block); /*0x6b19bb*/
  return Block->__pad_0; /*0x6b19c5*/
}
} // namespace gamemd
