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
namespace gamemd { int ProcessDeployAction(ObjectClass *p_this); }  // x4:ida@0x6afd60

// 0x522D00
namespace gamemd {  // G42.18 ns repair
int SlaveManagerClass::Check(void *a1, void *a2, void *a3)
{


  if ( this->u32_AC != 10 ) /*0x522d07*/
    return (*((int (**)(SlaveManagerClass *, int, unsigned int))this->AbstractClass + 122))(this, 10, 0); /*0x522d0f*/
  int result; // eax
  return result; /*0x522d15*/

}
} // namespace ra2

// 0x522D20
namespace gamemd {
int SlaveManagerClass::VtableDispatch()
{

  return (*((int (**)(SlaveManagerClass *, int, unsigned int))this->AbstractClass + 122))(this, 5, 0); /*0x522d2c*/

}
} // namespace ra2

// 0x522D30
namespace gamemd {
int SlaveManagerClass::CheckIsOne()
{

  return ((double (*)(SlaveManagerClass *))*((unsigned int *)this->AbstractClass + 173))(this) == 1.0; /*0x522d47*/

}
} // namespace ra2

// 0x522FC0
namespace gamemd {
int SlaveManagerClass::IsMasterHarvester()
{

  return (*((int (**)(SlaveManagerClass *))this->AbstractClass + 97))(this) == 10; /*0x522fd2*/

}
} // namespace ra2

// 0x6AF1A0
namespace gamemd {
void* SlaveManagerClass::ctor(TechnoClass * aP1, int a3, int a4, int a5, int a6, void *a6_1, void *a7, void *a8)
{

  int *v9; // ebp
  int v19; // [esp+10h] [ebp-8h]

  ((AbstractClass *)this)->Constructor(); /*0x6af1a8*/
  SlaveControlVector::Constructor(&this->slaves, 0, 0); /*0x6af1b6*/
  this->slaves = (unsigned int)(&vt_DynamicVectorClass); /*0x6af1c3*/
  this->slaveVectorCapacity = 10; /*0x6af1c9*/
  this->slaveVectorCount = 0; /*0x6af1d0*/
  this->creationFrame = dword_A8ED84; /*0x6af1d8*/
  this->SlaveManagerClass_field_58 = 0; /*0x6af1df*/
  this->master = aP1; /*0x6af1e2*/
  this->house = (gamemd::HouseClass *)(a3); /*0x6af1e9*/
  /* X11: vtable install elided (implicit via SlaveManagerClass virtuals 0x6af1f2) */
  /* X11: vtable install elided (implicit via SlaveManagerClass virtuals 0x6af1f8) */
  /* X11: vtable install elided (implicit via SlaveManagerClass virtuals 0x6af1ff) */
  /* X11: vtable install elided (implicit via SlaveManagerClass virtuals 0x6af206) */
  this->slaveOwner = (gamemd::HouseClass *)(a4); /*0x6af20d*/
  this->slaveType = a5; /*0x6af210*/
  this->slaveCount = a6; /*0x6af213*/
  int i; // [esp+1Ch] [ebp+4h]
  for ( i = 0; i < this->slaveOwner; ++i ) /*0x6af21a*/
  {
  int *v7; // eax
    v7 = (int *)__2_YAPAXI_Z(0x14u); /*0x6af223*/
    if ( v7 ) /*0x6af22d*/
    {
  wchar_t *v8; // ecx
      v8 = (wchar_t *)(dword_A8ED84); /*0x6af22f*/
      v7[4] = 0; /*0x6af235*/
      v7[2] = (int)v8; /*0x6af238*/
      v9 = v7; /*0x6af23b*/
    }
    else
    {
      v9 = 0; /*0x6af23f*/
    }
  int v10; // ebx
    v10 = (int)(**&this->house); /*0x6af249*/
  int v11; // eax
    v11 = (*(int (**)(unsigned int))(**&this->master + 60))(this->master); /*0x6af24b*/
  int v12; // eax
    v12 = (*(int (**)(unsigned int, int))(v10 + 140))(this->house, v11); /*0x6af252*/
    *v9 = v12; /*0x6af25a*/
    if ( v12 ) /*0x6af25f*/
    {
      (*(void (**)(int))(*(unsigned int *)v12 + 212))(v12); /*0x6af265*/
      *(unsigned int *)(*v9 + 732) = (unsigned int)(this->master); /*0x6af274*/
      v9[1] = 0; /*0x6af27a*/
      v9[2] = (int)dword_A8ED84; /*0x6af284*/
      v9[3] = v19; /*0x6af28a*/
      v9[4] = 0; /*0x6af28d*/
    }
  int v13; // ecx
    v13 = (int)(this->slaveVectorCapacity); /*0x6af290*/
    if ( this->slaveVectorCount >= v13 ) /*0x6af298*/
    {
      if ( !this->u32_45 && v13 ) /*0x6af2a1*/
        continue; /*0x6af2a1*/
  int v14; // eax
      v14 = (int)(this->slaveVectorCapacity); /*0x6af2a3*/
      if ( v14 <= 0 /*0x6af2b2*/
        || !(*(unsigned __int8 (**)(int, int, unsigned int))&this->slaves->Capacity)(&this->slaves, v13 + v14, 0) )
      {
        continue; /*0x6af2b2*/
      }
    }
  int v15; // eax
    v15 = (int)(this->slaveVectorCount); /*0x6af2b9*/
  int v16; // edx
    v16 = (int)(this->slaveVectorCount); /*0x6af2bc*/
    this->slaveVectorCount = v15 + 1; /*0x6af2c2*/
    *(unsigned int *)(v16 + 4 * v15) = (unsigned int)(v9); /*0x6af2c5*/
  }
  this->creationFrame = dword_A8ED84; /*0x6af2e7*/
  this->SlaveManagerClass_field_54 = v19; /*0x6af2ee*/
  this->SlaveManagerClass_field_58 = 10; /*0x6af2f1*/
  this->SlaveManagerClass_field_5C = 0; /*0x6af2f4*/
  this->SlaveManagerClass_field_60 = 0; /*0x6af2f7*/
  if ( dword_B0B600 < dword_B0B5F8 /*0x6af32e*/
    || (byte_B0B5FD || !dword_B0B5F8)
    && dword_B0B604 > 0
    && (*(unsigned __int8 (**)(int *, int, unsigned int))(SlaveManagerClass_Array + 8))(
         &SlaveManagerClass_Array,
         dword_B0B5F8 + dword_B0B604,
         0) )
  {
  int v17; // eax
    v17 = dword_B0B600++; /*0x6af33b*/
    *((unsigned int *)dword_B0B5F4 + v17) = (unsigned int)(this); /*0x6af34a*/
  }
  return this; /*0x6af34f*/

}
} // namespace ra2

// 0x6AF360
namespace gamemd {
int SlaveManagerClass::Constructor(void *a1, void *a2, void *a3, void *a4)
{


  ((AbstractClass *)this)->Constructor(); /*0x6af366*/
  this->slaveVectorCount = 0; /*0x6af371*/
  this->slaveVectorCapacity = 0; /*0x6af374*/
  LOBYTE(this->creationFrame) = 1; /*0x6af377*/
  BYTE1(this->creationFrame) = 0; /*0x6af37b*/
  this->slaves[0] = (int)&vt_DynamicVectorClass; /*0x6af37e*/
  *&this->slaveVectorCapacity = 10; /*0x6af385*/
  *(unsigned int *)this->slaveVectorCount = 0; /*0x6af38c*/
  *&this->creationFrame = *(unsigned int *)&DataGlobal_A8EB00[644]; /*0x6af395*/
  this->SlaveManagerClass_field_58 = 0; /*0x6af398*/
  this->AbstractClass = &vt_SlaveManagerClass; /*0x6af39b*/
  /* X11: vtable install elided (implicit via SlaveManagerClass virtuals 0x6af3a1) */
  /* X11: vtable install elided (implicit via SlaveManagerClass virtuals 0x6af3a8) */
  /* X11: vtable install elided (implicit via SlaveManagerClass virtuals 0x6af3af) */
  this->master = 0; /*0x6af3b6*/
  this->house = 0; /*0x6af3b9*/
  this->slaveOwner = 0; /*0x6af3bc*/
  this->slaveType = 0; /*0x6af3bf*/
  this->slaveCount = 0; /*0x6af3c2*/
  *&this->creationFrame = *(unsigned int *)&DataGlobal_A8EB00[644]; /*0x6af3cb*/
  int v4; // [esp+8h] [ebp-8h]
  this->SlaveManagerClass_field_54 = v4; /*0x6af3ce*/
  this->SlaveManagerClass_field_58 = 0; /*0x6af3d1*/
  this->SlaveManagerClass_field_5C = 0; /*0x6af3d4*/
  this->SlaveManagerClass_field_60 = 0; /*0x6af3d7*/
  if ( dword_B0B600 < dword_B0B5F8 /*0x6af40c*/
    || (byte_B0B5FD || !dword_B0B5F8)
    && dword_B0B604 > 0
    && (*(unsigned __int8 (**)(int *, int, unsigned int))(SlaveManagerClass_Array + 8))(
         &SlaveManagerClass_Array,
         dword_B0B5F8 + dword_B0B604,
         0) )
  {
  int v2; // eax
    v2 = dword_B0B600++; /*0x6af419*/
    *((unsigned int *)dword_B0B5F4 + v2) = this; /*0x6af428*/
  }
  return (int)this; /*0x6af42d*/

}
} // namespace ra2

// 0x6AF4A0
namespace gamemd {
void SlaveManagerClass::Constructor_SlaveManagerClass()
{


  /* X11: vtable install elided (implicit via SlaveManagerClass virtuals 0x6af4a5) */
  /* X11: vtable install elided (implicit via SlaveManagerClass virtuals 0x6af4ab) */
  /* X11: vtable install elided (implicit via SlaveManagerClass virtuals 0x6af4b2) */
  /* X11: vtable install elided (implicit via SlaveManagerClass virtuals 0x6af4b9) */
  int i; // esi
  for ( i = this->slaveVectorCount - 1; i >= 0; --i ) /*0x6af4c4*/
  {
    if ( *(unsigned int *)(this->slaveVectorCount + 4 * i) ) /*0x6af4c9*/
      __3_YAXPAX_Z(*(void **)(this->slaveVectorCount + 4 * i)); /*0x6af4d1*/
  }
  int v3; // ebp
  v3 = (int)(this->slaveVectorCapacity); /*0x6af4e5*/
  (*(void (**)(int))&this->slaves->IsInitialized)(&this->slaves); /*0x6af4e8*/
  (*(void (**)(int, int, unsigned int))&this->slaves->Capacity)(&this->slaves, v3, 0); /*0x6af4f2*/
  int v6; // [esp+8h] [ebp-4h] BYREF
  v6 = (int)(this); /*0x6af505*/
  int v4; // eax
  v4 = (*(int (**)(int *, int *))(SlaveManagerClass_Array + 16))(&SlaveManagerClass_Array, &v6); /*0x6af509*/
  if ( v4 != -1 && v4 < dword_B0B600 && v4 < --dword_B0B600 ) /*0x6af525*/
  {
    do /*0x6af53d*/
    {
      ++v4; /*0x6af52d*/
      *((unsigned int *)dword_B0B5F4 + v4 - 1) = *((unsigned int *)dword_B0B5F4 + v4); /*0x6af531*/
    }
    while ( v4 < dword_B0B600 ); /*0x6af53d*/
  }
  void *v5; // eax
  v5 = *&this->slaveVectorCount; /*0x6af53f*/
  this->slaves = (unsigned int)(&vt_VectorClass); /*0x6af542*/
  if ( v5 && this->u32_45 ) /*0x6af54c*/
  {
    __3_YAXPAX_Z(v5); /*0x6af554*/
    this->slaveVectorCount = 0; /*0x6af55c*/
  }
  this->u32_45 = 0; /*0x6af565*/
  this->slaveVectorCapacity = 0; /*0x6af569*/
  ((AbstractClass *)this)->DTOR(); /*0x6af570*/

}
} // namespace ra2

// 0x6AF580
namespace gamemd {
int SlaveManagerClass::SetOwner(TechnoClass * aP1)
{


  TechnoClass *master; // eax
  master = this->master; /*0x6af588*/
  master->slaveManager = 0; /*0x6af58b*/
  this->master = (TechnoClass *)aP1; /*0x6af595*/
  TechnoClass *v4; // ecx
  v4 = aP1->q2D8; /*0x6af598*/
  if ( v4 ) /*0x6af5a0*/
  {
    LOBYTE(master) = TechnoClass::MutateAll(v4, 0, 0); /*0x6af5a6*/
  int v5; // ecx
    v5 = aP1->q2D8; /*0x6af5ab*/
    if ( v5 ) /*0x6af5b3*/
      LOBYTE(master) = (*(int (**)(int, int))(*(unsigned int *)v5 + 32))(v5, 1); /*0x6af5b9*/
  }
  aP1->q2D8 = this; /*0x6af5bc*/
  int i; // ecx
  for ( i = *(unsigned int *)this->slaveVectorCount - 1; i >= 0; --i ) /*0x6af5c6*/
  {
    master = **(TechnoClass ***)(this->slaveVectorCount + 4 * i); /*0x6af5ce*/
    if ( master ) /*0x6af5d2*/
      master->slaveOwner = (gamemd::AnimClass *)(this->master); /*0x6af5d7*/
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

  v2 = *(int **)&TeamTypeClass_Array; /*0x6af5f7*/
  v3 = (int)(*&this->creationFrame); /*0x6af5fd*/
  SlaveManagerClass_field_58 = (TechnoClass *)this->SlaveManagerClass_field_58; /*0x6af600*/
  if ( v3 == -1 ) /*0x6af606*/
  {
LABEL_4:
    if ( SlaveManagerClass_field_58 ) /*0x6af614*/
      return (char)SlaveManagerClass_field_58; /*0x6af614*/
    goto LABEL_5; /*0x6af614*/
  }
  if ( *(unsigned int *)&DataGlobal_A8EB00[644] - v3 < (int)SlaveManagerClass_field_58 ) /*0x6af60e*/
  {
    SlaveManagerClass_field_58 = (TechnoClass *)((char *)SlaveManagerClass_field_58 /*0x6af610*/
                                               - (*(unsigned int *)&TeamTypeClass_Array
                                                - v3));
    goto LABEL_4; /*0x6af610*/
  }
LABEL_5:
  *&this->creationFrame = *(unsigned int *)&DataGlobal_A8EB00[644]; /*0x6af616*/
  this->SlaveManagerClass_field_54 = v7; /*0x6af622*/
  this->SlaveManagerClass_field_58 = 10; /*0x6af625*/
  SlaveManagerClass_field_58 = this->master; /*0x6af628*/
  if ( SlaveManagerClass_field_58 ) /*0x6af62d*/
  {
    SlaveManagerClass::ProcessSlaves(v6, v2, (int)this); /*0x6af631*/
    LOBYTE(SlaveManagerClass_field_58) = ProcessDeployAction((ObjectClass *)this); /*0x6af638*/
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
  void (**v11)(wchar_t *); // ebx
  int v12; // ecx
  int v13; // eax
  void *FoundationWidth; // eax
  int *v15; // ecx
  int FoundationHeight; // eax
  int v17; // ebx
  CellStruct *v18; // eax
  HouseClass **v19; // eax
  void (**v20)(wchar_t *); // ebx
  Cell *v21; // eax
  int v22; // eax
  int v23; // ecx
  int v24; // ebx
  int16_t v25; // ax
  int *v26; // ecx
  int v27; // eax
  int v28; // ecx
  CellStruct *v29; // eax
  void (**v30)(wchar_t *); // ebx
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
  int16_t slaveOwner; // bx
  unsigned int *v43; // eax
  int v44; // ecx
  int v45; // ebx
  void *v46; // eax
  int *v47; // ecx
  int v48; // eax
  int v49; // ebx
  CellStruct *v50; // eax
  void **v51; // eax
  uint16_t vtable1; // bx
  int (**v53)(wchar_t *); // edx
  unsigned int *v54; // eax
  int v55; // eax
  int v56; // ecx
  int v57; // eax
  int v58; // ecx
  int v59; // edi
  int16_t v60; // ax
  int *v61; // ecx
  int v62; // eax
  int v63; // ecx
  CellStruct *v64; // eax
  void **v65; // eax
  void (**v66)(wchar_t *); // edi
  int v67; // edx
  int v68; // ecx
  int v69; // eax
  int v70; // edx
  int v71; // ecx
  int v72; // ecx
  unsigned short *v73; // [esp-6h] [ebp-B0h]
  unsigned short *v74; // [esp-6h] [ebp-B0h]
  unsigned short *v77; // [esp+2h] [ebp-A8h]
  SlaveManagerClass v78; // [esp+Eh] [ebp-9Ch] BYREF
  char v79[4]; // [esp+76h] [ebp-34h] BYREF
  int16_t v80[2]; // [esp+7Ah] [ebp-30h] BYREF
  char v81[12]; // [esp+7Eh] [ebp-2Ch] BYREF
  int v82; // [esp+8Ah] [ebp-20h] BYREF
  unsigned int v83[3]; // [esp+8Eh] [ebp-1Ch] BYREF
  char v84[8]; // [esp+9Ah] [ebp-10h] BYREF
  unsigned int v85[2]; // [esp+A2h] [ebp-8h] BYREF

  v3 = v3; /*0x6af6c8*/
  v5 = 0; /*0x6af6ca*/
  result = 0; /*0x6af6cc*/
  v7 = *(unsigned int *)(v3 + 72); /*0x6af6ce*/
  v78.NeedsSaveOrLink = 0; /*0x6af6d1*/
  if ( v7 > 0 )
  {
    while ( 1 )
    {
      v8 = *(unsigned int *)(*(unsigned int *)(v3 + 60) + 4 * result); /*0x6af6e6*/
      v9 = *(wchar_t **)v8; /*0x6af6e9*/
      if ( !*(unsigned int *)v8 && *(unsigned int *)(v8 + 4) != 6 ) /*0x6af6f9*/
      {
        *(unsigned int *)v8 = 0; /*0x6af707*/
        *(unsigned int *)(v8 + 4) = 6; /*0x6af709*/
        v10 = *(unsigned int *)(v3 + 48); /*0x6af711*/
        *(unsigned int *)(v8 + 8) = *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416]; /*0x6af717*/
        *(unsigned int *)(v8 + 12) = v83[1]; /*0x6af721*/
        *(unsigned int *)(v8 + 16) = v10; /*0x6af724*/
      }
      switch ( *(unsigned int *)(v8 + 4) )
      {
        case 1:
          v78.vfptr = *(void **)v9; /*0x6af744*/
          v78.abstractFlags = *(unsigned int *)(*((int (**)(wchar_t *, char *, int, unsigned int, int *, int))v78.vfptr /*0x6af778*/
                                          + 206))(
                                           v9,
                                           v84,
                                           *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 6020) / 256,
                                           0,
                                           p_SlaveManagerClass_field_5C,
                                           a3);
          if ( v78.abstractFlags == dword_B0B5B8 )
          {
            TechnoClass::SetFocus((TechnoClass *)v9, 0); /*0x6af7c5*/
            v12 = *(unsigned int *)(v3 + 36); /*0x6af7ca*/
            if ( v12 && (*(int (**)(int))(v12->fallRate)(v12) == 6 )
            {
              v78.vfptr2 = *(void **)(v3 + 36); /*0x6af7e4*/
              if ( v78.vfptr2 )
              {
                v13 = (*(int (**)(void *))(*(unsigned int *)v78.vfptr2 + 44))(v78.vfptr2); /*0x6af7ec*/
                v5 = v13 == 6 ? (BuildingTypeClass **)v78.vfptr2 : 0;
              }
              FoundationWidth = (void *)((BuildingTypeClass *)(v5[328]))->GetFoundationWidth(); /*0x6af806*/
              v15 = (int *)v5[328]; /*0x6af80b*/
              v78.vfptr2 = FoundationWidth; /*0x6af813*/
              FoundationHeight = BuildingTypeClass::GetFoundationHeight(v15, 0); /*0x6af817*/
              v17 = *(unsigned int *)(v3 + 36); /*0x6af81f*/
              v77 = CellStruct::Set((CellStruct *)v83, (*((unsigned short *)&(v78.vfptr2))) - 1, FoundationHeight / 2); /*0x6af839*/
              v18 = (CellStruct *)(*(int (**)(int, int *))(v17->airstrikeTintTimer)(v17, &v78.creationFrame); /*0x6af849*/
              v19 = (HouseClass **)CellStruct::Add(v18, &v82, v77); /*0x6af851*/
            }
            else
            {
              v19 = (HouseClass **)(*(int (**)(unsigned int, int16_t *))(**(unsigned int **)(v3 + 36) + 440))( /*0x6af862*/
                                     *(unsigned int *)(v3 + 36),
                                     v80);
            }
            v20 = *(void (***)(wchar_t *))v9; /*0x6af86a*/
            v78.slaveOwner = *v19; /*0x6af870*/
            a3 = 1; /*0x6af874*/
            p_SlaveManagerClass_field_5C = (int *)CellCoord::To_CellObj( /*0x6af881*/
                                                    (CellCoord *)&DataGlobal_87F7E8,
                                                    (int16_t *)&v78.slaveOwner);
            v20[288](v9); /*0x6af884*/
            (*(void (**)(wchar_t *, int, unsigned int))(*(unsigned int *)v9 + 488))(v9, 2, 0); /*0x6af892*/
            *(unsigned int *)(v8 + 4) = 4; /*0x6af898*/
          }
          else
          {
            v11 = *(void (***)(wchar_t *))v9; /*0x6af78c*/
            a3 = 1; /*0x6af792*/
            p_SlaveManagerClass_field_5C = (int *)CellCoord::To_CellObj( /*0x6af79f*/
                                                    (CellCoord *)&DataGlobal_87F7E8,
                                                    (int16_t *)&v78.abstractFlags);
            v11[288](v9); /*0x6af7a2*/
            (*(void (**)(wchar_t *, int, unsigned int))(*(unsigned int *)v9 + 488))(v9, 2, 0); /*0x6af7b0*/
            *(unsigned int *)(v8 + 4) = 2; /*0x6af7b6*/
          }
          goto LABEL_62; /*0x6af89f*/
        case 2:
          v21 = (Cell *)(*(int (**)(wchar_t *))(*(unsigned int *)v9 + 444))(v9); /*0x6af8a8*/
          if ( (uint8_t)Cell::IsBridge2(v21) ) /*0x6af8b0*/
          {
            SlaveManagerClass::Check((SlaveManagerClass *)v9); /*0x6af8bb*/
            *(unsigned int *)(v8 + 4) = 3; /*0x6af8c0*/
          }
          else if ( !v9->q5A4 ) /*0x6af8cc*/
          {
            *(unsigned int *)(v8 + 4) = 1; /*0x6af8d8*/
          }
          goto LABEL_62; /*0x6af8c7*/
        case 3:
          if ( SlaveManagerClass::CheckIsOne((SlaveManagerClass *)v9) ) /*0x6af8e6*/
          {
            v22 = (*(int (**)(wchar_t *, int *, int))(*(unsigned int *)v9 + 444))( /*0x6af8f7*/
                    v9,
                    p_SlaveManagerClass_field_5C,
                    a3);
            TechnoClass::SetFocus((TechnoClass *)v9, v22); /*0x6af900*/
            v23 = *(unsigned int *)(v3 + 36); /*0x6af905*/
            if ( v23 && (*(int (**)(int))(v23->fallRate)(v23) == 6 ) /*0x6af914*/
            {
              v24 = IsObjectTypeBuildingType(*(unsigned int *)(v3 + 36)); /*0x6af91e*/
              v25 = ((BuildingTypeClass *)(v24->q520))->GetFoundationWidth(); /*0x6af926*/
              v26 = v24->q520; /*0x6af92b*/
              (*((unsigned short *)&(v78.master))) = v25 - 1; /*0x6af934*/
              v27 = BuildingTypeClass::GetFoundationHeight(v26, 0); /*0x6af939*/
              v28 = *(unsigned int *)(v3 + 36); /*0x6af93f*/
              (*(((unsigned short *)&(v78.master)) + 1)) = v27 / 2; /*0x6af946*/
              v29 = (CellStruct *)(*(int (**)(int, int *))(v28->airstrikeTintTimer)(v28, v78.slaves); /*0x6af95c*/
              v78.referenceCount = *CellStruct::Add(v29, &v78.slaveVectorCapacity, &v78.master); /*0x6af96b*/
            }
            else
            {
              v78.referenceCount = *(unsigned int *)(*(int (**)(unsigned int, int *))(**(unsigned int **)(v3 + 36) + 440))( /*0x6af983*/
                                                *(unsigned int *)(v3 + 36),
                                                &v78.SlaveManagerClass_field_54);
            }
            v30 = *(void (***)(wchar_t *))v9; /*0x6af987*/
            a3 = 1; /*0x6af98d*/
            p_SlaveManagerClass_field_5C = (int *)CellCoord::To_CellObj( /*0x6af99a*/
                                                    (CellCoord *)&DataGlobal_87F7E8,
                                                    (int16_t *)&v78.referenceCount);
            v30[288](v9); /*0x6af99d*/
            (*(void (**)(wchar_t *, int, unsigned int))(*(unsigned int *)v9 + 488))(v9, 2, 0); /*0x6af9ab*/
            *(unsigned int *)(v8 + 4) = 4; /*0x6af9b1*/
          }
          else
          {
            v31 = (Cell *)(*(int (**)(wchar_t *))(*&v9->q6F0))(v9); /*0x6af9c1*/
            if ( (uint8_t)Cell::IsBridge2(v31) ) /*0x6af9c9*/
            {
              if ( !SlaveManagerClass::IsMasterHarvester((SlaveManagerClass *)v9) ) /*0x6af9e5*/
                *(unsigned int *)(v8 + 4) = 1; /*0x6af9f2*/
            }
            else
            {
              SlaveManagerClass::VtableDispatch((SlaveManagerClass *)v9); /*0x6af9d4*/
              *(unsigned int *)(v8 + 4) = 1; /*0x6af9d9*/
            }
          }
          goto LABEL_62; /*0x6af9b8*/
        case 4:
          v32 = v9->q5A4; /*0x6af9fe*/
          (*(((unsigned char *)&(v78.vfptr1)) + (sizeof(v78.vfptr1) - 1))) = 0; /*0x6afa04*/
          if ( v32 ) /*0x6afa0b*/
          {
            v33 = *(unsigned int *)(v3 + 36); /*0x6afa11*/
            if ( v33 && (*(int (**)(int))(v33->fallRate)(v33) == 6 ) /*0x6afa20*/
            {
              v34 = IsObjectTypeBuildingType(*(unsigned int *)(v3 + 36)); /*0x6afa2a*/
              v35 = (void *)((BuildingTypeClass *)(v34->BuildingTypeClass_520))->GetFoundationWidth(); /*0x6afa32*/
              v36 = v34->BuildingTypeClass_520; /*0x6afa37*/
              v78.vfptr = v35; /*0x6afa3f*/
              v37 = BuildingTypeClass::GetFoundationHeight(v36, 0); /*0x6afa43*/
              v38 = *(unsigned int *)(v3 + 36); /*0x6afa4c*/
              v73 = CellStruct::Set((CellStruct *)v80, (*((unsigned short *)&(v78.vfptr))) - 1, v37 / 2); /*0x6afa67*/
              v39 = (CellStruct *)(*(int (**)(int, int *, int *))(v38->airstrikeTintTimer)( /*0x6afa75*/
                                    v38,
                                    &v82,
                                    &v78.SlaveManagerClass_field_54);
              v40 = (HouseClass **)CellStruct::Add(v39, v73, p_SlaveManagerClass_field_5C); /*0x6afa7d*/
            }
            else
            {
              v40 = (HouseClass **)(*(int (**)(unsigned int, int *, int *))(**(unsigned int **)(v3 + 36) + 440))( /*0x6afa8e*/
                                     *(unsigned int *)(v3 + 36),
                                     &v78.SlaveManagerClass_field_5C,
                                     p_SlaveManagerClass_field_5C);
            }
            v41 = v9->q5A4; /*0x6afa94*/
            v78.slaveOwner = *v40; /*0x6afaa3*/
            slaveOwner = (int16_t)v78.slaveOwner; /*0x6afa9a*/
            p_SlaveManagerClass_field_5C = v85; /*0x6afaa9*/
            v43 = (unsigned int *)(*(int (**)(int))(*(unsigned int *)v41 + 72))(v41); /*0x6afaaa*/
            v83[0] = *(unsigned int *)CellStruct::Set((CellStruct *)&v78.slaveCount, *v43 / 256, v43[1] / 256); /*0x6afad9*/
            (*((unsigned short *)&(v78.vfptr2))) = (*((unsigned short *)&(v83[0]))) - slaveOwner; /*0x6afaef*/
            (*(((unsigned short *)&(v78.vfptr2)) + 1)) = (*(((unsigned short *)&(v83[0])) + 1)) - (*(((unsigned short *)&(v78.house)) + 1)); /*0x6afaf4*/
            v78.vfptr = v78.vfptr2; /*0x6afb01*/
            if ( (int16_t)SlaveManagerClass::Calc2DDistance(&v78) > *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance /*0x6afb19*/
                                                                              + 3576) )
              (*(((unsigned char *)&(v78.vfptr1)) + (sizeof(v78.vfptr1) - 1))) = 1; /*0x6afb1b*/
          }
          v44 = *(unsigned int *)(v3 + 36); /*0x6afb20*/
          if ( v44 && (*(int (**)(int))(v44->fallRate)(v44) == 6 ) /*0x6afb2f*/
          {
            v45 = IsObjectTypeBuildingType(*(unsigned int *)(v3 + 36)); /*0x6afb39*/
            v46 = (void *)((BuildingTypeClass *)(v45->gattlingValue))->GetFoundationWidth(); /*0x6afb41*/
            v47 = v45->gattlingValue; /*0x6afb46*/
            v78.vfptr = v46; /*0x6afb4e*/
            v48 = BuildingTypeClass::GetFoundationHeight(v47, 0); /*0x6afb52*/
            v49 = *(unsigned int *)(v3 + 36); /*0x6afb5a*/
            v74 = CellStruct::Set((CellStruct *)v78.slaves, (*((unsigned short *)&(v78.vfptr))) - 1, v48 / 2); /*0x6afb71*/
            v50 = (CellStruct *)(*(int (**)(int, char *, int *))(v49->airstrikeTintTimer)( /*0x6afb7e*/
                                  v49,
                                  v78.slaveVectorCount,
                                  &v78.slaveVectorCapacity);
            v51 = (void **)CellStruct::Add(v50, v74, p_SlaveManagerClass_field_5C); /*0x6afb86*/
          }
          else
          {
            v51 = (void **)(*(int (**)(unsigned int, char *, int *))(**(unsigned int **)(v3 + 36) + 440))( /*0x6afb97*/
                             *(unsigned int *)(v3 + 36),
                             &v78.creationFrame,
                             p_SlaveManagerClass_field_5C);
          }
          v53 = *(int (***)(wchar_t *))v9; /*0x6afb9f*/
          p_SlaveManagerClass_field_5C = &v78.SlaveManagerClass_field_5C; /*0x6afba7*/
          v78.vfptr1 = *v51; /*0x6afba8*/
          vtable1 = (uint16_t)v78.vfptr1; /*0x6afb9d*/
          v54 = (unsigned int *)v53[110](v9); /*0x6afbac*/
          if ( *v54 == (((unsigned int)(unsigned short)(vtable1)) | ((unsigned int)(unsigned short)((*(((unsigned short *)&(v78.vfptr)) + 1))) << 16)) ) /*0x6afbb5*/
          {
            if ( !v9->q5A4 ) /*0x6afbc2*/
            {
              InfantryClass::SlaveGiveMoney_RecordBalanceBefore((int *)v9, *(unsigned int **)(v3 + 36)); /*0x6afbd2*/
              (*(void (**)(wchar_t *))(*&v9->q350))(v9); /*0x6afbdb*/
              v55 = *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416]; /*0x6afbe1*/
              v56 = *(unsigned int *)(v3 + 52); /*0x6afbe6*/
              *(unsigned int *)(v8 + 4) = 5; /*0x6afbec*/
              *(unsigned int *)(v8 + 8) = v55; /*0x6afbf3*/
              *(unsigned int *)(v8 + 12) = v85[0]; /*0x6afbfc*/
              *(unsigned int *)(v8 + 16) = v56; /*0x6afbff*/
              goto LABEL_62; /*0x6afc02*/
            }
  LABEL_47:
            if ( !(*(((unsigned char *)&(v78.vfptr1)) + (sizeof(v78.vfptr1) - 1))) ) /*0x6afc17*/
              goto LABEL_62; /*0x6afc17*/
            goto LABEL_48; /*0x6afc17*/
          }
          if ( v9->q5A4 ) /*0x6afc07*/
            goto LABEL_47; /*0x6afc0f*/
  LABEL_48:
          v57 = IsObjectTypeBuildingType(*(unsigned int *)(v3 + 36)); /*0x6afc1d*/
          v58 = *(unsigned int *)(v3 + 36); /*0x6afc25*/
          if ( v57 ) /*0x6afc2a*/
          {
            v59 = IsObjectTypeBuildingType(v58); /*0x6afc31*/
            v60 = ((BuildingTypeClass *)(*(BuildingTypeClass **)(v59 + 1312)))->GetFoundationWidth(); /*0x6afc39*/
            v61 = *(int **)(v59 + 1312); /*0x6afc3e*/
            (*((unsigned short *)&(v78.uniqueId))) = v60 - 1; /*0x6afc47*/
            v62 = BuildingTypeClass::GetFoundationHeight(v61, 0); /*0x6afc4c*/
            v63 = *(unsigned int *)(v3 + 36); /*0x6afc52*/
            (*(((unsigned short *)&(v78.uniqueId)) + 1)) = v62 / 2; /*0x6afc59*/
            v64 = (CellStruct *)(*(int (**)(int, char *, int *, int *))(v63->airstrikeTintTimer)( /*0x6afc72*/
                                  v63,
                                  v79,
                                  &v78.SlaveManagerClass_field_60,
                                  &v78.uniqueId);
            v65 = (void **)CellStruct::Add(v64, &v78.SlaveManagerClass_field_5C, (unsigned short *)a3); /*0x6afc7a*/
          }
          else
          {
            v65 = (void **)(*(int (**)(int, char *, int *, int))(v58->airstrikeTintTimer)( /*0x6afc8b*/
                             v58,
                             v81,
                             &v78.SlaveManagerClass_field_5C,
                             a3);
          }
          v66 = *(void (***)(wchar_t *))v9; /*0x6afc93*/
          v78.NeedsSaveOrLink = *v65; /*0x6afc99*/
          a3 = 1; /*0x6afc9d*/
          p_SlaveManagerClass_field_5C = (int *)CellCoord::To_CellObj( /*0x6afcaa*/
                                                  (CellCoord *)&DataGlobal_87F7E8,
                                                  (int16_t *)&v78.NeedsSaveOrLink);
          v66[288](v9); /*0x6afcad*/
          (*(void (**)(wchar_t *, int, unsigned int))(*&v9->q7A0))(v9, 2, 0); /*0x6afcbb*/
  LABEL_62:
          v72 = *(unsigned int *)(v3 + 72); /*0x6afd20*/
          result = (int)++v78.NeedsSaveOrLink; /*0x6afd27*/
          if ( (int)v78.NeedsSaveOrLink >= v72 ) /*0x6afd2e*/
            return result; /*0x6afd2e*/
          v5 = 0; /*0x6af6e1*/
          break; /*0x6af6e1*/
        case 5:
          v67 = *(unsigned int *)(v8 + 8); /*0x6afcc3*/
          v68 = *(unsigned int *)(v8 + 16); /*0x6afcc6*/
          if ( v67 == -1 ) /*0x6afccc*/
            goto LABEL_55; /*0x6afccc*/
          if ( *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] - v67 >= v68 ) /*0x6afcd7*/
            goto LABEL_56; /*0x6afcd7*/
          v68 -= *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] - v67; /*0x6afcd9*/
  LABEL_55:
          if ( !v68 ) /*0x6afcdd*/
          {
  LABEL_56:
            v69 = v9->q6C0; /*0x6afcdf*/
            *((unsigned int *)v9 + 27) = *(unsigned int *)(v69 + 160); /*0x6afceb*/
            *((unsigned int *)v9 + 28) = *(unsigned int *)(v69 + 160); /*0x6afcf4*/
            *(unsigned int *)(v8 + 4) = 0; /*0x6afcf7*/
          }
          goto LABEL_62; /*0x6afcfa*/
        case 6:
          v70 = *(unsigned int *)(v8 + 8); /*0x6afcfc*/
          v71 = *(unsigned int *)(v8 + 16); /*0x6afcff*/
          if ( v70 == -1 ) /*0x6afd05*/
            goto LABEL_60; /*0x6afd05*/
          if ( *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] - v70 >= v71 ) /*0x6afd10*/
            goto LABEL_61; /*0x6afd10*/
          v71 -= *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] - v70; /*0x6afd12*/
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
int SlaveManagerClass::LostSlave(int aP1, void *a2)
{

  int result; // eax
  int slaveVectorCount; // esi
  unsigned int **i; // edx
  unsigned int *v5; // eax
  int slaveType; // ecx
  int v7; // [esp+10h] [ebp-8h]

  result = *(unsigned int *)this->slaveVectorCount - 1; /*0x6b0a26*/
  if ( result >= 0 ) /*0x6b0a2a*/
  {
    slaveVectorCount = this->slaveVectorCount; /*0x6b0a2c*/
    for ( i = (unsigned int **)(slaveVectorCount + 4 * result); **i != aP1; --i ) /*0x6b0a33*/
    {
      if ( --result < 0 ) /*0x6b0a42*/
        return result; /*0x6b0a42*/
    }
    v5 = *(unsigned int **)(slaveVectorCount + 4 * result); /*0x6b0a4d*/
    if ( *v5 ) /*0x6b0a50*/
      *(unsigned int *)(*v5 + 732) = 0; /*0x6b0a56*/
    *v5 = 0; /*0x6b0a60*/
    v5[1] = 6; /*0x6b0a66*/
    slaveType = this->slaveType; /*0x6b0a73*/
    result = (int)(v5 + 2); /*0x6b0a76*/
    *(unsigned int *)result = *(unsigned int *)&DataGlobal_A8EB00[644]; /*0x6b0a79*/
    result->u32_4 = v7; /*0x6b0a7f*/
    result->VtableStub_8 = slaveType; /*0x6b0a82*/
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
  if ( *(unsigned int *)((*((int (**)(TechnoClass *))master->vfptr + 111))(master) + 236) == 5 ) /*0x6b105e*/
    return 1; /*0x6b1064*/
  if ( this->SlaveManagerClass_field_60 + *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 6032) >= *(int *)&((unsigned int *)&stru_A8EB00)[416] ) /*0x6b107d*/
    return 0; /*0x6b107d*/
  v4 = *(unsigned int *)(*((int (**)(TechnoClass *, int *, int, unsigned int))this->master->vfptr + 206))( /*0x6b10ad*/
                    this->master,
                    &v4,
                    *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 6016) / 256,
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

  AbstractClass::ProcessPower((AbstractClass *)this); /*0x6b10fa*/
  result = Power::TimerProcess(this->SlaveManagerClass_field_5C); /*0x6b1105*/
  for ( i = *(unsigned int *)this->slaveVectorCount - 1; i >= 0; --i ) /*0x6b110e*/
    result = Power::TimerProcess(*(unsigned int *)(*(unsigned int *)(this->slaveVectorCount + 4 * i) + 4)); /*0x6b111c*/
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
      a1->slaves[0] = (int)&vt_DynamicVectorClass; /*0x6b11b0*/
      *&a1->slaveVectorCapacity = 10; /*0x6b11b6*/
      *(unsigned int *)a1->slaveVectorCount = 0; /*0x6b11bd*/
      Timer::Start(&a1->creationFrame, 0); /*0x6b11c0*/
      /* X11: vtable install elided (implicit via SlaveManagerClass virtuals 0x6b11c5) */
      /* X11: vtable install elided (implicit via SlaveManagerClass virtuals 0x6b11cb) */
      v2 = a2; /*0x6b11d2*/
      /* X11: vtable install elided (implicit via SlaveManagerClass virtuals 0x6b11d6) */
      /* X11: vtable install elided (implicit via SlaveManagerClass virtuals 0x6b11dd) */
    }
    Prefix_0 = (*(int (__stdcall **)(int, int *, int, unsigned int))(v2->vtable4)(v2, &v16, 4, 0); /*0x6b11f2*/
    if ( Prefix_0 >= 0 ) /*0x6b11f6*/
    {
      slaves = a1->slaves; /*0x6b11fc*/
      if ( a1 != (SlaveManagerClass *)-56 ) /*0x6b1201*/
      {
        SlaveControlVector::Constructor((SlaveControlVector *)a1->slaves, 0, 0); /*0x6b1207*/
        *slaves = (int)&vt_DynamicVectorClass; /*0x6b120c*/
        *&a1->slaveVectorCapacity = 10; /*0x6b1212*/
        *(unsigned int *)a1->slaveVectorCount = 0; /*0x6b1219*/
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
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &a1->master); /*0x6b12de*/
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &a1->house); /*0x6b12ec*/
      }
      else
      {
        while ( 1 ) /*0x6b1232*/
        {
          v8 = operator new(0x14u); /*0x6b1232*/
          if ( v8 ) /*0x6b123c*/
          {
            v9 = *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416]; /*0x6b123e*/
            *(unsigned int *)(v8 + 16) = 0; /*0x6b1244*/
            *(unsigned int *)(v8 + 8) = v9; /*0x6b1247*/
            v5 = v8; /*0x6b124a*/
          }
          Prefix_0 = (*(int (__stdcall **)(int, int, int, unsigned int))(*(unsigned int *)a2 + 12))(a2, v5, 20, 0); /*0x6b125b*/
          if ( Prefix_0 < 0 ) /*0x6b125f*/
            break; /*0x6b125f*/
          slaveVectorCapacity = a1->slaveVectorCapacity; /*0x6b1265*/
          if ( *(unsigned int *)a1->slaveVectorCount < slaveVectorCapacity /*0x6b128a*/
            || ((a1->u32_45) || !slaveVectorCapacity)
            && (v11 = *&a1->slaveVectorCapacity, v11 > 0)
            && slaves->Release(a1->slaves, slaveVectorCapacity + v11, 0) )
          {
            v12 = *(unsigned int *)a1->slaveVectorCount; /*0x6b1291*/
            slaveVectorCount = a1->slaveVectorCount; /*0x6b1294*/
            *(unsigned int *)a1->slaveVectorCount = v12 + 1; /*0x6b129a*/
            *(unsigned int *)(slaveVectorCount + 4 * v12) = v5; /*0x6b129d*/
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

  vtable0_high = SHIWORD(this->AbstractClass); /*0x6b1a78*/
  __asm { fild [esp+0Ch+var_4] } /*0x6b1a7f*/
  vtable0_low = SLOWORD(this->AbstractClass); /*0x6b1a83*/
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
  WORD2(result) = HIWORD(v3); /*0x6b1aa1*/
  LOWORD(result) = v3; /*0x6b1aa1*/
  return result; /*0x6b1aa9*/

}
} // namespace ra2

// 0x6AF650
namespace gamemd {
wchar_t * SlaveManagerClass::CreateSlave(wchar_t ** a2)
{
  int (**vtable0)(HouseClass *, int); // edi
  int v4; // eax
  wchar_t *result; // eax
  wchar_t *v6; // [esp+Ch] [ebp-8h]

  vtable0 = (int (**)(HouseClass *, int))this->house->vfptr; /*0x6af65f*/
  v4 = (*((int (**)(TechnoClass *))this->master->vfptr + 15))(this->master); /*0x6af661*/
  result = (wchar_t *)vtable0[35](this->house, v4); /*0x6af668*/
  *a2 = result; /*0x6af674*/
  if ( result ) /*0x6af676*/
  {
    (*(void (**)(wchar_t *))(*(unsigned int *)result + 212))(result); /*0x6af67c*/
    *((unsigned int *)*a2 + 183) = this->master; /*0x6af68b*/
    a2[1] = 0; /*0x6af691*/
    result = *(wchar_t **)&((unsigned int *)&stru_A8EB00)[416]; /*0x6af698*/
    a2[2] = *(wchar_t **)&((unsigned int *)&stru_A8EB00)[416]; /*0x6af6a2*/
    a2[3] = v6; /*0x6af6a4*/
    a2[4] = 0; /*0x6af6a7*/
  }
  return result; /*0x6af6aa*/
}
} // namespace gamemd

// 0x6B1130
namespace gamemd {
int SlaveManagerClass::ddtor(int a1, unsigned int * result)
{
  if ( !result ) /*0x6b1136*/
    return -2147467261; /*0x6b1138*/
  *result = 861581284; /*0x6b1146*/
  result[1] = 299183526; /*0x6b114e*/
  result[2] = 268444350; /*0x6b1157*/
  result[3] = unk_7E987C; /*0x6b1160*/
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
    aP2 = *(unsigned int *)aP0->u32_48; /*0x6b132a*/
    result = (*(int (__stdcall **)(int *, int *, int, unsigned int))(v4 + 16))(a1, &aP2, 4, 0); /*0x6b132e*/
    if ( result >= 0 ) /*0x6b1333*/
    {
      for ( i = 0; i < aP2; ++i ) /*0x6b133d*/
      {
        result = (*(int (__stdcall **)(int *, unsigned int, int, unsigned int))(*a1 + 16))( /*0x6b134d*/
                   a1,
                   *(unsigned int *)(aP0->slaveVectorCount + 4 * i),
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
    operator delete((void *)(Block)); /*0x6b13a0*/
  return Block; /*0x6b13aa*/
}
} // namespace gamemd

// 0x6B13B0
namespace gamemd {
void SlaveManagerClass_25::ddtor(void *a1_1, void *a2_1)
{

  void *v2; // eax

  v2 = *(void **)&a1_1->m_1[3]; /*0x6b13b6*/
  a1_1->m_10 = 0; /*0x6b13b9*/
  if ( v2 && BYTE1(a1_1->m_C) ) /*0x6b13c0*/
  {
    __3_YAXPAX_Z(v2); /*0x6b13c6*/
    *(unsigned int *)&a1_1->m_1[3] = 0; /*0x6b13ce*/
  }
  BYTE1(a1_1->m_C) = 0; /*0x6b13d1*/
  a1_1->m_8 = 0; /*0x6b13d4*/

}
} // namespace gamemd

// 0x6B13E0
namespace gamemd {
unsigned int SlaveManagerClass_25::Write(int a2)
{

  if ( LOBYTE(this->IsInitialized) ) /*0x6b13e0*/
    return (unsigned int)(a2 - *&this->Items) >> 2; /*0x6b13f5*/
  else
    return 0; /*0x6b13e7*/

}
} // namespace gamemd

// 0x6B1400
namespace gamemd {
int SlaveManagerClass_25::Seek(int a2, void *a2_2, void *a3_1)
{

  return *(unsigned int *)(*(unsigned int *)&a2_2->m_1[3] + 4 * a2_2); /*0x6b140a*/

}
} // namespace gamemd

// 0x6B1470
namespace gamemd {
char SlaveManagerClass_25::AddRef(int a2)
{

  int v2; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x6b1472*/
  if ( v2 == *(unsigned int *)(a2 + 8) ) /*0x6b147d*/
  {
    v3 = 0; /*0x6b147f*/
    if ( v2 <= 0 ) /*0x6b1483*/
      return 1; /*0x6b14a3*/
    v4 = *&this->Items; /*0x6b1485*/
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x6b148b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x6b1494*/
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

  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x6b15fc*/
  {
    LOBYTE(this->IsInitialized) = 0; /*0x6b1602*/
    if ( a3 ) /*0x6b1608*/
      v4 = a3; /*0x6b161e*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x6b161a*/
    LOBYTE(this->IsInitialized) = 1; /*0x6b1622*/
    if ( !v4 ) /*0x6b1626*/
      return 0; /*0x6b169a*/
    if ( *&this->Items ) /*0x6b1628*/
    {
      m_8 = this->Capacity; /*0x6b162f*/
      if ( a2 < m_8 ) /*0x6b1634*/
        m_8 = a2; /*0x6b1636*/
      for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*&this->Items + 4 * i - 4) ) /*0x6b163c*/
        ++i; /*0x6b1641*/
      if ( BYTE1(this->IsInitialized) ) /*0x6b164e*/
      {
        __3_YAXPAX_Z(*&this->Items); /*0x6b1659*/
        *&this->Items = 0; /*0x6b1661*/
      }
    }
    *&this->Items = v4; /*0x6b166a*/
    this->Capacity = a2; /*0x6b1672*/
    BYTE1(this->IsInitialized) = a3 == 0; /*0x6b1675*/
  }
  else
  {
    (*(void (**)(_DynamicVectorClass_PAUSlaveControl_SlaveManagerClass *))(*(unsigned int *)this->ClearAndFree2_ph + 12))(this); /*0x6b167e*/
  }
  v7 = this->Capacity; /*0x6b1681*/
  if ( v7 < this->Count ) /*0x6b1689*/
    this->Count = v7; /*0x6b168b*/
  return 1; /*0x6b168e*/

}
} // namespace gamemd

// 0x6B16A0
namespace gamemd {
int SlaveManagerClass_25::Read(unsigned int * a2, void *a2_2, void *a3)
{
  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

  m_10 = a2_2->q010; /*0x6b16a0*/
  result = 0; /*0x6b16a3*/
  if ( m_10 <= 0 ) /*0x6b16a8*/
    return -1; /*0x6b16bf*/
  for ( i = *(unsigned int **)&a2_2->q004; *i != *a2_2; ++i ) /*0x6b16ae*/
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

  v3 = *&Block->__pad_004; /*0x6b1983*/
  *(unsigned int *)Block->tail_0 = &vt_VectorClass; /*0x6b1986*/
  if ( v3 && (((unsigned char *)&(*&Block->u32_D))[1]) ) /*0x6b1990*/
  {
    operator delete((void *)(v3)); /*0x6b1998*/
    *&Block->__pad_004 = 0; /*0x6b19a0*/
  }
  (((unsigned char *)&(*&Block->u32_C))[1]) = 0; /*0x6b19ab*/
  Block->u32_8 = 0; /*0x6b19b1*/
  if ( (a2 & 1) != 0 ) /*0x6b19b8*/
    operator delete((void *)(Block)); /*0x6b19bb*/
  return Block->tail_0; /*0x6b19c5*/
}
} // namespace gamemd
