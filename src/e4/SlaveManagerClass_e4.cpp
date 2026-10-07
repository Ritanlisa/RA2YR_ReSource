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

// 0x522D00
namespace gamemd {
int SlaveManagerClass::Check()
{

  int result; // eax

  if ( this->q02B != 10 ) /*0x522d07*/
    return (*((int (**)(SlaveManagerClass *, int, unsigned int))this->vtable1 + 122))(this, 10, 0); /*0x522d0f*/
  return result; /*0x522d15*/

}
} // namespace ra2

// 0x522D20
namespace gamemd {
int SlaveManagerClass::VtableDispatch()
{

  return (*((int (**)(SlaveManagerClass *, int, unsigned int))this->vtable1 + 122))(this, 5, 0); /*0x522d2c*/

}
} // namespace ra2

// 0x522D30
namespace gamemd {
int SlaveManagerClass::CheckIsOne()
{

  return ((double (*)(SlaveManagerClass *))*((unsigned int *)this->vtable1 + 173))(this) == 1.0; /*0x522d47*/

}
} // namespace ra2

// 0x522FC0
namespace gamemd {
int SlaveManagerClass::IsMasterHarvester()
{

  return (*((int (**)(SlaveManagerClass *))this->vtable1 + 97))(this) == 10; /*0x522fd2*/

}
} // namespace ra2

// 0x6AF1A0
namespace gamemd {
void* SlaveManagerClass::ctor(TechnoClass * aP1, int a3, int a4, int a5, int a6)
{

  int *v7; // eax
  wchar_t *v8; // ecx
  int *v9; // ebp
  int v10; // ebx
  int v11; // eax
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // eax
  int v16; // edx
  SlaveManagerClass * v17;
  int v19; // [esp+10h] [ebp-8h]
  int i; // [esp+1Ch] [ebp+4h]

  ((AbstractClass *)((AbstractClass *)this))->Constructor(); /*0x6af1a8*/
  ((SlaveControlVector *)((int)((unsigned int *)((char *)this + 56))))->Constructor((int)((SlaveControlVector *)((int)((unsigned int *)((char *)this + 56)))), 0, 0); /*0x6af1b6*/
  *((unsigned int *)this + 14) = (unsigned int)(&vt_DynamicVectorClass); /*0x6af1c3*/
  *((unsigned int *)this + 19) = 10; /*0x6af1c9*/
  *((unsigned int *)this + 18) = 0; /*0x6af1d0*/
  *((unsigned int *)this + 20) = dword_A8ED84; /*0x6af1d8*/
  *((unsigned int *)this + 22) = 0; /*0x6af1df*/
  *((unsigned int *)this + 9) = (unsigned int)(aP1); /*0x6af1e2*/
  *((unsigned int *)this + 10) = a3; /*0x6af1e9*/
  *(unsigned int *)this = (unsigned int)(&vt_SlaveManagerClass); /*0x6af1f2*/
  *((unsigned int *)this + 1) = (unsigned int)(&vt_SlaveManagerClass); /*0x6af1f8*/
  *((unsigned int *)this + 2) = (unsigned int)(&vt_SlaveManagerClass); /*0x6af1ff*/
  *((unsigned int *)this + 3) = (unsigned int)(&vt_SlaveManagerClass); /*0x6af206*/
  *((unsigned int *)this + 11) = a4; /*0x6af20d*/
  *((unsigned int *)this + 12) = a5; /*0x6af210*/
  *((unsigned int *)this + 13) = a6; /*0x6af213*/
  for ( i = 0; i < *((unsigned int *)this + 11); ++i ) /*0x6af21a*/
  {
    v7 = (int *)__2_YAPAXI_Z(0x14u); /*0x6af223*/
    if ( v7 ) /*0x6af22d*/
    {
      v8 = (wchar_t *)(dword_A8ED84);
      v7[4] = 0; /*0x6af235*/
      v7[2] = (int)v8; /*0x6af238*/
      v9 = v7; /*0x6af23b*/
    }
    else
    {
      v9 = (int *)(0); /*0x6af23f*/
    }
    v10 = **(unsigned int **)&this->house; /*0x6af249*/
    v11 = (*(int (**)(unsigned int))(**(unsigned int **)&this->master + 60))(*((unsigned int *)this + 9)); /*0x6af24b*/
    v12 = (*(int (**)(unsigned int, int))(v10 + 140))(*((unsigned int *)this + 10), v11); /*0x6af252*/
    *v9 = v12; /*0x6af25a*/
    if ( v12 ) /*0x6af25f*/
    {
      (*(void (**)(int))(*(unsigned int *)v12 + 212))(v12); /*0x6af265*/
      *(unsigned int *)(*v9 + 732) = *((unsigned int *)this + 9); /*0x6af274*/
      v9[1] = 0; /*0x6af27a*/
      v9[2] = (int)dword_A8ED84; /*0x6af284*/
      v9[3] = v19; /*0x6af28a*/
      v9[4] = 0; /*0x6af28d*/
    }
    v13 = *((unsigned int *)this + 16); /*0x6af290*/
    if ( *((unsigned int *)this + 18) >= v13 ) /*0x6af298*/
    {
      if ( !*((unsigned char *)this + 69) && v13 ) /*0x6af2a1*/
        continue; /*0x6af2a1*/
      v14 = *((unsigned int *)this + 19); /*0x6af2a3*/
      if ( v14 <= 0 /*0x6af2b2*/
        || !(*(uint8_t (**)(int, int, unsigned int))(*((unsigned int *)this + 14) + 8))((int)(char *)this + 56, v13 + v14, 0) )
      {
        continue; /*0x6af2b2*/
      }
    }
    v15 = *((unsigned int *)this + 18); /*0x6af2b9*/
    v16 = *((unsigned int *)this + 15); /*0x6af2bc*/
    *((unsigned int *)this + 18) = v15 + 1; /*0x6af2c2*/
    *(unsigned int *)(v16 + 4 * v15) = (unsigned int)(v9); /*0x6af2c5*/
  }
  *((unsigned int *)this + 20) = dword_A8ED84; /*0x6af2e7*/
  *((unsigned int *)this + 21) = v19; /*0x6af2ee*/
  *((unsigned int *)this + 22) = 10; /*0x6af2f1*/
  *((unsigned int *)this + 23) = 0; /*0x6af2f4*/
  *((unsigned int *)this + 24) = 0; /*0x6af2f7*/
  if ( dword_B0B600 < dword_B0B5F8 /*0x6af32e*/
    || (byte_B0B5FD || !dword_B0B5F8)
    && dword_B0B604 > 0
&& (*(uint8_t (**)(int *, int, unsigned int))(SlaveManagerClass_Array + 8))( (int *)(&SlaveManagerClass_Array), dword_B0B5F8 + dword_B0B604, 0) )



  {
    v17 = (gamemd::SlaveManagerClass *)((unsigned int)(dword_B0B600++));
    *((unsigned int *)(unsigned int)(dword_B0B5F4)+ v17) = this; /*0x6af34a*/
  }
  return (void*)this; /*0x6af34f*/

}
} // namespace ra2

// 0x6AF360
namespace gamemd {
int SlaveManagerClass::Constructor()
{

  SlaveManagerClass * v2;
  int v4; // [esp+8h] [ebp-8h]

  ((AbstractClass *)((AbstractClass *)this))->Constructor(); /*0x6af366*/
  this->slaveVectorCount = 0; /*0x6af371*/
  this->slaveVectorCapacity = 0; /*0x6af374*/
  LOBYTE(this->creationFrame) = 1; /*0x6af377*/
  BYTE1(this->creationFrame) = 0; /*0x6af37b*/
  (&this->slaves)[0] = (int)&vt_DynamicVectorClass; /*0x6af37e*/
  *(unsigned int *)&this->__pad_48[4] = 10; /*0x6af385*/
  *(unsigned int *)this->__pad_48 = 0; /*0x6af38c*/
  *(unsigned int *)&this->__pad_48[8] = *(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x6af395*/
  this->SlaveManagerClass_field_58 = 0; /*0x6af398*/
  this->vtable1 = &vt_SlaveManagerClass; /*0x6af39b*/
  ((unsigned int *)this)[0] = (unsigned int)(&vt_SlaveManagerClass); /*0x6af3a1*/
  ((unsigned int *)this)[0] = (unsigned int)(&vt_SlaveManagerClass); /*0x6af3a8*/
  ((unsigned int *)this)[0] = (unsigned int)(&vt_SlaveManagerClass); /*0x6af3af*/
  this->master = 0; /*0x6af3b6*/
  this->house = 0; /*0x6af3b9*/
  this->slaveOwner = 0; /*0x6af3bc*/
  this->slaveType = 0; /*0x6af3bf*/
  this->slaveCount = 0; /*0x6af3c2*/
  *(unsigned int *)&this->__pad_48[8] = *(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x6af3cb*/
  this->SlaveManagerClass_field_54 = v4; /*0x6af3ce*/
  this->SlaveManagerClass_field_58 = 0; /*0x6af3d1*/
  this->SlaveManagerClass_field_5C = 0; /*0x6af3d4*/
  this->SlaveManagerClass_field_60 = 0; /*0x6af3d7*/
  if ( dword_B0B600 < dword_B0B5F8 /*0x6af40c*/
    || (byte_B0B5FD || !dword_B0B5F8)
    && dword_B0B604 > 0
&& (*(uint8_t (**)(int *, int, unsigned int))(SlaveManagerClass_Array + 8))( (int *)(&SlaveManagerClass_Array), dword_B0B5F8 + dword_B0B604, 0) )



  {
    v2 = (gamemd::SlaveManagerClass *)((unsigned int)(dword_B0B600++));
    *((unsigned int *)(unsigned int)(dword_B0B5F4)+ v2) = this; /*0x6af428*/
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
  int v6; // [esp+8h] [ebp-4h] BYREF

  *(unsigned int *)this = (unsigned int)(&vt_SlaveManagerClass); /*0x6af4a5*/
  *((unsigned int *)this + 1) = (unsigned int)(&vt_SlaveManagerClass); /*0x6af4ab*/
  *((unsigned int *)this + 2) = (unsigned int)(&vt_SlaveManagerClass); /*0x6af4b2*/
  *((unsigned int *)this + 3) = (unsigned int)(&vt_SlaveManagerClass); /*0x6af4b9*/
  for ( i = *((unsigned int *)this + 18) - 1; i >= 0; --i ) /*0x6af4c4*/
  {
    if ( *(unsigned int *)(*((unsigned int *)this + 15) + 4 * i) ) /*0x6af4c9*/
      __3_YAXPAX_Z(*(void **)(*((unsigned int *)this + 15) + 4 * i)); /*0x6af4d1*/
  }
  v3 = *((unsigned int *)this + 16); /*0x6af4e5*/
  (*(void (**)(int))(*((unsigned int *)this + 14) + 12))((int)(char *)this + 56); /*0x6af4e8*/
  (*(void (**)(int, int, unsigned int))(*((unsigned int *)this + 14) + 8))((int)(char *)this + 56, v3, 0); /*0x6af4f2*/
  v6 = (int)(this); /*0x6af505*/
  v4 = (*(int (**)(int *, int *))(SlaveManagerClass_Array + 16))( (int *)(&SlaveManagerClass_Array), (int *)(&v6)); /*0x6af509*/
  if ( v4 != -1 && v4 < dword_B0B600 && v4 < --dword_B0B600 ) /*0x6af525*/
  {
    do /*0x6af53d*/
    {
      ++v4; /*0x6af52d*/
      *((unsigned int *)dword_B0B5F4 + v4 - 1) = *((unsigned int *)dword_B0B5F4 + v4); /*0x6af531*/
    }
    while ( v4 < dword_B0B600 ); /*0x6af53d*/
  }
  v5 = *(void **)&this->slaveVectorCount; /*0x6af53f*/
  *((unsigned int *)this + 14) = (unsigned int)(&vt_VectorClass); /*0x6af542*/
  if ( v5 && *((unsigned char *)this + 69) ) /*0x6af54c*/
  {
    __3_YAXPAX_Z(v5); /*0x6af554*/
    *((unsigned int *)this + 15) = 0; /*0x6af55c*/
  }
  *((unsigned char *)this + 69) = 0; /*0x6af565*/
  *((unsigned int *)this + 16) = 0; /*0x6af569*/
  ((AbstractClass*)(AbstractClass *)this)->DTOR(); /*0x6af570*/

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

  master = (gamemd::TechnoClass *)(this->master); /*0x6af588*/
  master->slaveManager = 0; /*0x6af58b*/
  this->master = (unsigned int)((TechnoClass *)aP1); /*0x6af595*/
  v4 = *(TechnoClass **)(aP1 + 728); /*0x6af598*/
  if ( v4 ) /*0x6af5a0*/
  {
    LOBYTE(master) = TechnoClass::MutateAll(v4, 0, 0); /*0x6af5a6*/
    v5 = *(unsigned int *)(aP1 + 728); /*0x6af5ab*/
    if ( v5 ) /*0x6af5b3*/
      LOBYTE(master) = (*(int (**)(int, int))(*(unsigned int *)v5 + 32))(v5, 1); /*0x6af5b9*/
  }
  *(unsigned int *)(aP1 + 728) = (unsigned int)(this); /*0x6af5bc*/
  for ( i = *(unsigned int *)this->__pad_48 - 1; i >= 0; --i ) /*0x6af5c6*/
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

  v2 = *(int **)(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x6af5f7*/
  v3 = *(unsigned int *)&this->__pad_48[8]; /*0x6af5fd*/
  SlaveManagerClass_field_58 = (TechnoClass *)this->SlaveManagerClass_field_58; /*0x6af600*/
  if ( v3 == -1 ) /*0x6af606*/
  {
LABEL_4:
    if ( SlaveManagerClass_field_58 ) /*0x6af614*/
      return (char)SlaveManagerClass_field_58; /*0x6af614*/
    goto LABEL_5; /*0x6af614*/
  }
  if ( *(unsigned int *)((char *)&stru_A8EB00 + 416) - v3 < (int)SlaveManagerClass_field_58 ) /*0x6af60e*/
  {
    SlaveManagerClass_field_58 = (TechnoClass *)((char *)SlaveManagerClass_field_58 /*0x6af610*/
                                               - (*(unsigned int *)((char *)&stru_A8EB00 + 416)
                                                - v3));
    goto LABEL_4; /*0x6af610*/
  }
LABEL_5:
  *(unsigned int *)&this->__pad_48[8] = *(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x6af616*/
  this->SlaveManagerClass_field_54 = v7; /*0x6af622*/
  this->SlaveManagerClass_field_58 = 10; /*0x6af625*/
  SlaveManagerClass_field_58 = (gamemd::TechnoClass *)(this->master); /*0x6af628*/
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
TechnoClass * * SlaveManagerClass_ProcessSlaves(void * a1, void * a2, void * a3)
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
  unsigned short *v17; // eax
  int *v18; // eax
  int v19; // ebx
  unsigned int *v20; // eax
  int v21; // eax
  int v22; // ecx
  int IsBuildingType; // ebx
  int16_t v24; // ax
  int v25; // ecx
  int v26; // eax
  int v27; // ecx
  unsigned short *v28; // eax
  int v29; // ebx
  unsigned int *v30; // eax
  int v31; // eax
  int v32; // ecx
  int v33; // ebx
  int v34; // eax
  int v35; // ecx
  int v36; // eax
  int v37; // ebx
  unsigned short *v38; // eax
  int *v39; // eax
  int v40; // ecx
  unsigned int *v42; // eax
  int v43; // ecx
  int v44; // ebx
  int v45; // eax
  int v46; // ecx
  int v47; // eax
  int v48; // ebx
  unsigned short *v49; // eax
  int *v50; // eax
  int v52; // edx
  unsigned int *v53; // eax
  int v55; // ecx
  int v56; // eax
  int v57; // ecx
  int v58; // edi
  int16_t v59; // ax
  int v60; // ecx
  int v61; // eax
  int v62; // ecx
  unsigned short *v63; // eax
  int *v64; // eax
  int v65; // edi
  int v66; // edx
  int v67; // ecx
  int v68; // eax
  int v69; // edx
  int v70; // ecx
  int v71; // ecx
  unsigned short *v72; // [esp-6h] [ebp-B0h]
  unsigned short *v73; // [esp-6h] [ebp-B0h]
  unsigned short *v76; // [esp+2h] [ebp-A8h]
  int v77; // [esp+Eh] [ebp-9Ch] BYREF
  int v78; // [esp+12h] [ebp-98h]
  int v79; // [esp+16h] [ebp-94h]
  unsigned short v80[2]; // [esp+1Eh] [ebp-8Ch] BYREF
  int v81; // [esp+22h] [ebp-88h] BYREF
  int v82; // [esp+2Ah] [ebp-80h] BYREF
  int v83; // [esp+2Eh] [ebp-7Ch] BYREF
  unsigned short v84[4]; // [esp+32h] [ebp-78h] BYREF
  int v85; // [esp+3Ah] [ebp-70h] BYREF
  int16_t v86[2]; // [esp+42h] [ebp-68h] BYREF
  unsigned short v87[4]; // [esp+46h] [ebp-64h] BYREF
  char v88[4]; // [esp+4Eh] [ebp-5Ch] BYREF
  char v89[4]; // [esp+52h] [ebp-58h] BYREF
  char v90[4]; // [esp+56h] [ebp-54h] BYREF
  int v91; // [esp+5Ah] [ebp-50h] BYREF
  char v92[4]; // [esp+5Eh] [ebp-4Ch] BYREF
  unsigned char v93[8]; // [esp+62h] [ebp-48h] BYREF
  int v94; // [esp+6Ah] [ebp-40h] BYREF
  char v95[8]; // [esp+6Eh] [ebp-3Ch] BYREF
  char v96[4]; // [esp+76h] [ebp-34h] BYREF
  int16_t v97[2]; // [esp+7Ah] [ebp-30h] BYREF
  char v98[12]; // [esp+7Eh] [ebp-2Ch] BYREF
  int v99; // [esp+8Ah] [ebp-20h] BYREF
  unsigned int v100[3]; // [esp+8Eh] [ebp-1Ch] BYREF
  char v101[8]; // [esp+9Ah] [ebp-10h] BYREF
  int v102; // [esp+A2h] [ebp-8h] BYREF

  v4 = (int)(0);
  result = (int)(0);
  v6 = ((int *)a1)[18];
  v83 = 0; /*0x6af6d1*/
  if ( v6 > 0 )
  {
    while ( 1 )
    {
      v7 = *(unsigned int *)(a1[15] + 4 * result); /*0x6af6e6*/
      v8 = *(int **)v7; /*0x6af6e9*/
      if ( !*(unsigned int *)v7 && *(unsigned int *)(v7 + 4) != 6 ) /*0x6af6f9*/
      {
        *(unsigned int *)v7 = 0; /*0x6af707*/
        *(unsigned int *)(v7 + 4) = 6; /*0x6af709*/
        v9 = a1[12]; /*0x6af711*/
        *(unsigned int *)(v7 + 8) = g_CurrentFrame; /*0x6af717*/
        *(unsigned int *)(v7 + 12) = v100[1]; /*0x6af721*/
        *(unsigned int *)(v7 + 16) = v9; /*0x6af724*/
      }
      switch ( *(unsigned int *)(v7 + 4) )
      {
        case 1:
          v77 = *v8; /*0x6af744*/
v81 = *(unsigned int *)(*(int (**)(int *, char *, int, unsigned int, int *, int))(v77 + 824))( /*0x6af778*/ v8, (char *)(v101), *((unsigned int *)g_RulesClass_Instance + 1505) / 256, 0, (int *)a2, (int)a3);






          if ( v81 == dword_B0B5B8 )
          {
            ((TechnoClass *)v8)->SetFocus( 0); /*0x6af7c5*/
            v11 = a1[9]; /*0x6af7ca*/
            if ( v11 && (*(int (**)(int))(v11->fallRate))(v11) == 6 )
            {
              v79 = a1[9]; /*0x6af7e4*/
              if ( v79 )
              {
                v12 = (*(int (**)(int))(*(unsigned int *)v79 + 44))(v79); /*0x6af7ec*/
                v4 = v12 == 6 ? v79 : 0;
              }
              FoundationWidth = BuildingTypeClass::GetFoundationWidth(*(unsigned int **)(v4 + 1312)); /*0x6af806*/
              v14 = *(unsigned int *)(v4 + 1312); /*0x6af80b*/
              v79 = FoundationWidth; /*0x6af813*/
              FoundationHeight = ((BuildingTypeClass *)(v14))->GetFoundationHeight(0); /*0x6af817*/
              v16 = a1[9]; /*0x6af81f*/
              v76 = (unsigned short *)((CellStruct *)(v100))->Set(v79 - 1, FoundationHeight / 2); /*0x6af839*/
              v17 = (unsigned short *)(*(int (**)(int, char *))(v16->airstrikeTintTimer))( v16, (char *)(v89));  /*0x6af849*/
              v18 = (int *)((CellStruct *)(v17))->Add( (unsigned int *)(&v99), (unsigned short *)(v76)); /*0x6af851*/
            }
            else
            {
              v18 = (int *)(*(int (**)(int, int16_t *))(*(unsigned int *)a1[9] + 440))( a1[9], (int16_t *)(v97)); /*0x6af862*/
            }
            v19 = *v8; /*0x6af86a*/
            v85 = *v18; /*0x6af870*/
            a3 = (void *)(1); /*0x6af874*/
            a2 = (void *)((int *)((CellCoord *)(&MapClass_Instance))->To_CellObj((int16_t *)&v85)); /*0x6af881*/
            v8->vt_slot_1152(); /*0x6af884*/
            (*(void (**)(int *, int, unsigned int))(*v8 + 488))( (int *)(v8), 2, 0); /*0x6af892*/
            *(unsigned int *)(v7 + 4) = 4; /*0x6af898*/
          }
          else
          {
            v10 = *v8; /*0x6af78c*/
            a3 = (void *)(1); /*0x6af792*/
            a2 = (void *)((int *)((CellCoord *)(&MapClass_Instance))->To_CellObj((int16_t *)&v81)); /*0x6af79f*/
            v8->vt_slot_1152(); /*0x6af7a2*/
            (*(void (**)(int *, int, unsigned int))(*v8 + 488))( (int *)(v8), 2, 0); /*0x6af7b0*/
            *(unsigned int *)(v7 + 4) = 2; /*0x6af7b6*/
          }
          goto LABEL_62; /*0x6af89f*/
        case 2:
          v20 = (unsigned int *)(*(int (**)(int *))(*v8 + 444))( (int *)(v8)); /*0x6af8a8*/
          if ( ((Cell *)v20)->IsBridge2() ) /*0x6af8b0*/
          {
            ((SlaveManagerClass *)v8)->Check(); /*0x6af8bb*/
            *(unsigned int *)(v7 + 4) = 3; /*0x6af8c0*/
          }
          else if ( !v8[361] ) /*0x6af8cc*/
          {
            *(unsigned int *)(v7 + 4) = 1; /*0x6af8d8*/
          }
          goto LABEL_62; /*0x6af8c7*/
        case 3:
          if ( (uint8_t)((SlaveManagerClass *)v8)->CheckIsOne() ) /*0x6af8e6*/
          {
            v21 = (*(int (**)(int *, int *, int))(*v8 + 444))( (int *)(v8), (int *)(a2), (int)(a3)); /*0x6af8f7*/
            ((TechnoClass *)v8)->SetFocus( v21); /*0x6af900*/
            v22 = a1[9]; /*0x6af905*/
            if ( v22 && (*(int (**)(int))(v22->fallRate))(v22) == 6 ) /*0x6af914*/
            {
              IsBuildingType = IsObjectTypeBuildingType(a1[9]); /*0x6af91e*/
              v24 = BuildingTypeClass::GetFoundationWidth(*(unsigned int **)(IsBuildingType + 1312)); /*0x6af926*/
              v25 = *(unsigned int *)(IsBuildingType + 1312); /*0x6af92b*/
              v84[0] = v24 - 1; /*0x6af934*/
              v26 = ((BuildingTypeClass *)(v25))->GetFoundationHeight(0); /*0x6af939*/
              v27 = a1[9]; /*0x6af93f*/
              v84[1] = v26 / 2; /*0x6af946*/
              v28 = (unsigned short *)(*(int (**)(int, unsigned short *))(v27->airstrikeTintTimer))( v27, (unsigned short *)(v87));  /*0x6af95c*/
              v82 = (int)(*((CellStruct *)(v28))->Add( (unsigned int *)(&v91), (unsigned short *)(v84))); /*0x6af96b*/
            }
            else
            {
              v82 = *(unsigned int *)(*(int (**)(int, unsigned char *))(*(unsigned int *)a1[9] + 440))( a1[9], (unsigned char *)(v93)); /*0x6af983*/
            }
            v29 = *v8; /*0x6af987*/
            a3 = (void *)(1); /*0x6af98d*/
            a2 = (void *)((int *)((CellCoord *)(&MapClass_Instance))->To_CellObj((int16_t *)&v82)); /*0x6af99a*/
            v8->vt_slot_1152(); /*0x6af99d*/
            (*(void (**)(int *, int, unsigned int))(*v8 + 488))( (int *)(v8), 2, 0); /*0x6af9ab*/
            *(unsigned int *)(v7 + 4) = 4; /*0x6af9b1*/
          }
          else
          {
            v30 = (unsigned int *)(*(int (**)(int *))(*v8 + 444))( (int *)(v8)); /*0x6af9c1*/
            if ( ((Cell *)v30)->IsBridge2() ) /*0x6af9c9*/
            {
              if ( !(uint8_t)((SlaveManagerClass *)v8)->IsMasterHarvester() ) /*0x6af9e5*/
                *(unsigned int *)(v7 + 4) = 1; /*0x6af9f2*/
            }
            else
            {
              ((SlaveManagerClass *)v8)->VtableDispatch(); /*0x6af9d4*/
              *(unsigned int *)(v7 + 4) = 1; /*0x6af9d9*/
            }
          }
          goto LABEL_62; /*0x6af9b8*/
        case 4:
          v31 = v8[361]; /*0x6af9fe*/
          IDA_HIBYTE(v78) = 0; /*0x6afa04*/
          if ( v31 ) /*0x6afa0b*/
          {
            v32 = a1[9]; /*0x6afa11*/
            if ( v32 && (*(int (**)(int))(v32->fallRate))(v32) == 6 ) /*0x6afa20*/
            {
              v33 = IsObjectTypeBuildingType(a1[9]); /*0x6afa2a*/
              v34 = BuildingTypeClass::GetFoundationWidth(v33->q520); /*0x6afa32*/
              v35 = v33->q520; /*0x6afa37*/
              v77 = v34; /*0x6afa3f*/
              v36 = ((BuildingTypeClass *)(v35))->GetFoundationHeight(0); /*0x6afa43*/
              v37 = a1[9]; /*0x6afa4c*/
              v72 = (unsigned short *)((CellStruct *)(v97))->Set(v77 - 1, v36 / 2); /*0x6afa67*/
              v38 = (unsigned short *)(*(int (**)(int, int *, unsigned char *))(v37->airstrikeTintTimer))( v37, (int *)(&v99), (unsigned char *)(v93));  /*0x6afa75*/
              v39 = (int *)((CellStruct *)(v38))->Add( (unsigned int *)(v72), (unsigned short *)(a2)); /*0x6afa7d*/
            }
            else
            {
              v39 = (int *)(*(int (**)(int, int *, int *))(*(unsigned int *)a1[9] + 440))( a1[9], (int *)(&v94), (int *)(a2)); /*0x6afa8e*/
            }
            v40 = v8[361]; /*0x6afa94*/
            v85 = *v39; /*0x6afaa3*/
            v85 = v85; /*0x6afa9a*/
            a2 = &v102; /*0x6afaa9*/
            v42 = (unsigned int *)(*(int (**)(int))(*(unsigned int *)v40 + 72))(v40); /*0x6afaaa*/
            v100[0] = *(unsigned int *)((CellStruct *)(v86))->Set(*v42 / 256, v42[1] / 256); /*0x6afad9*/
            IDA_LOWORD(v79) = IDA_LOWORD(v100[0]) - v85; /*0x6afaef*/
            IDA_HIWORD(v79) = IDA_HIWORD(v100[0]) - v84[3]; /*0x6afaf4*/
            v77 = v79; /*0x6afb01*/
            if ( (int16_t)((SlaveManagerClass *)&v77)->Calc2DDistance() > *((unsigned int *)g_RulesClass_Instance + 894) ) /*0x6afb19*/
              IDA_HIBYTE(v78) = 1; /*0x6afb1b*/
          }
          v43 = a1[9]; /*0x6afb20*/
          if ( v43 && (*(int (**)(int))(v43->fallRate))(v43) == 6 ) /*0x6afb2f*/
          {
            v44 = IsObjectTypeBuildingType(a1[9]); /*0x6afb39*/
            v45 = BuildingTypeClass::GetFoundationWidth(v44->q520); /*0x6afb41*/
            v46 = v44->q520; /*0x6afb46*/
            v77 = v45; /*0x6afb4e*/
            v47 = ((BuildingTypeClass *)(v46))->GetFoundationHeight(0); /*0x6afb52*/
            v48 = a1[9]; /*0x6afb5a*/
            v73 = (unsigned short *)((CellStruct *)(v87))->Set(v77 - 1, v47 / 2); /*0x6afb71*/
            v49 = (unsigned short *)(*(int (**)(int, char *, char *))(v48->airstrikeTintTimer))( v48, (char *)(v90), (char *)(v88));  /*0x6afb7e*/
            v50 = (int *)((CellStruct *)(v49))->Add( (unsigned int *)(v73), (unsigned short *)(a2)); /*0x6afb86*/
          }
          else
          {
            v50 = (int *)(*(int (**)(int, char *, int *))(*(unsigned int *)a1[9] + 440))( a1[9], (char *)(v92), (int *)(a2)); /*0x6afb97*/
          }
          v52 = *v8; /*0x6afb9f*/
          a2 = &v94; /*0x6afba7*/
          v78 = *v50; /*0x6afba8*/
          v78 = v78; /*0x6afb9d*/
          v53 = (unsigned int *)v8->GetCellCoords_Alt(); /*0x6afbac*/
          if ( *v53 == IDA___PAIR32__(IDA_HIWORD(v77), v78) ) /*0x6afbb5*/
          {
            if ( !v8[361] ) /*0x6afbc2*/
            {
              InfantryClass::SlaveGiveMoney_RecordBalanceBefore(((unsigned int *)a1)[9]); /*0x6afbd2*/
              (*(void (**)(int *))(*v8 + 212))( (int *)(v8)); /*0x6afbdb*/
              g_CurrentFrame = g_CurrentFrame; /*0x6afbe1*/
              v55 = a1[13]; /*0x6afbe6*/
              *(unsigned int *)(v7 + 4) = 5; /*0x6afbec*/
              *(unsigned int *)(v7 + 8) = g_CurrentFrame; /*0x6afbf3*/
              *(unsigned int *)(v7 + 12) = v102; /*0x6afbfc*/
              *(unsigned int *)(v7 + 16) = v55; /*0x6afbff*/
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
            v59 = BuildingTypeClass::GetFoundationWidth(*(unsigned int **)(v58 + 1312)); /*0x6afc39*/
            v60 = *(unsigned int *)(v58 + 1312); /*0x6afc3e*/
            v80[0] = v59 - 1; /*0x6afc47*/
            v61 = ((BuildingTypeClass *)(v60))->GetFoundationHeight(0); /*0x6afc4c*/
            v62 = a1[9]; /*0x6afc52*/
            v80[1] = v61 / 2; /*0x6afc59*/
v63 = (unsigned short *)(*(int (**)(int, char *, char *, unsigned short *))(v62->airstrikeTintTimer))( /*0x6afc72*/ v62, (char *)(v96), (char *)(v95), (unsigned short *)(v80));




            v64 = (int *)((CellStruct *)(v63))->Add( (unsigned int *)(&v94), (unsigned short *)a3); /*0x6afc7a*/
          }
          else
          {
            v64 = (int *)(*(int (**)(int, char *, int *, int))(v57->airstrikeTintTimer))( v57, (char *)(v98), (int *)(&v94), (int)(a3));  /*0x6afc8b*/
          }
          v65 = *v8; /*0x6afc93*/
          v83 = *v64; /*0x6afc99*/
          a3 = (void *)(1); /*0x6afc9d*/
          a2 = (void *)((int *)((CellCoord *)(&MapClass_Instance))->To_CellObj((int16_t *)&v83)); /*0x6afcaa*/
          v8->vt_slot_1152(); /*0x6afcad*/
          (*(void (**)(int *, int, unsigned int))(*v8 + 488))( (int *)(v8), 2, 0); /*0x6afcbb*/
  LABEL_62:
          v71 = a1[18]; /*0x6afd20*/
          result = ++v83; /*0x6afd27*/
          if ( v83 >= v71 ) /*0x6afd2e*/
            return (TechnoClass * *)result; /*0x6afd2e*/
          v4 = 0; /*0x6af6e1*/
          break; /*0x6af6e1*/
        case 5:
          v66 = *(unsigned int *)(v7 + 8); /*0x6afcc3*/
          v67 = *(unsigned int *)(v7 + 16); /*0x6afcc6*/
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
            v8[27] = *(unsigned int *)(v68 + 160); /*0x6afceb*/
            v8[28] = *(unsigned int *)(v68 + 160); /*0x6afcf4*/
            *(unsigned int *)(v7 + 4) = 0; /*0x6afcf7*/
          }
          goto LABEL_62; /*0x6afcfa*/
        case 6:
          v69 = *(unsigned int *)(v7 + 8); /*0x6afcfc*/
          v70 = *(unsigned int *)(v7 + 16); /*0x6afcff*/
          if ( v69 == -1 ) /*0x6afd05*/
            goto LABEL_60; /*0x6afd05*/
          if ( (int)g_CurrentFrame - v69 >= v70 ) /*0x6afd10*/
            goto LABEL_61; /*0x6afd10*/
          v70 -= (int)g_CurrentFrame - v69; /*0x6afd12*/
  LABEL_60:
          if ( !v70 ) /*0x6afd16*/
  LABEL_61:
            ((SlaveManagerClass *)(v7))->CreateSlave(); /*0x6afd1b*/
          goto LABEL_62; /*0x6afd1b*/
        default:
          goto LABEL_62;
      }
    }
  }
  return (TechnoClass * *)result; /*0x6afd36*/
}
}
// 0x6B0A20
namespace gamemd {
int SlaveManagerClass::LostSlave(int aP1)
{

  int result; // eax
  int slaveVectorCount; // esi
  unsigned int **i; // edx
  unsigned int *v5; // eax
  int slaveType; // ecx
  int v7; // [esp+10h] [ebp-8h]

  result = *(unsigned int *)this->__pad_48 - 1; /*0x6b0a26*/
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
    *(unsigned int *)result = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x6b0a79*/
    *(unsigned int *)(result + 4) = v7; /*0x6b0a7f*/
    *(unsigned int *)(result + 8) = slaveType; /*0x6b0a82*/
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

  master = (TechnoClass *)(this->master); /*0x6b1024*/
  if ( !master || this->SlaveManagerClass_field_5C ) /*0x6b102f*/
    return 0; /*0x6b102f*/
  if ( !master->owner->currentPlayer ) /*0x6b1040*/
    return 1; /*0x6b104e*/
  if ( *(unsigned int *)((*((int (**)(TechnoClass *))master->vtable1 + 111))( (TechnoClass *)(master)) + 236) == 5 ) /*0x6b105e*/
    return 1; /*0x6b1064*/
  if ( this->SlaveManagerClass_field_60 + *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 6032) >= *(int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) ) /*0x6b107d*/
    return 0; /*0x6b107d*/
v4 = *(unsigned int *)(*((int (**)(TechnoClass *, int *, int, unsigned int))this->master->vtable1 + 206))( /*0x6b10ad*/ this->master, (int *)(&v4), *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 6016) / 256, 0);




  return v4 != dword_B0B5B8; /*0x6b10c6*/

}
} // namespace ra2

// 0x6B10F0
namespace gamemd {
int SlaveManagerClass::AssignTask(AbstractClass * aP1)
{

  int result; // eax
  int i; // esi

  ((AbstractClass *)this)->ProcessPower(); /*0x6b10fa*/
  result = Power::TimerProcess(this->SlaveManagerClass_field_5C); /*0x6b1105*/
  for ( i = *(unsigned int *)this->__pad_48 - 1; i >= 0; --i ) /*0x6b110e*/
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
  v3 = (SlaveManagerClass *)(a1); /*0x6b1179*/
  Prefix_0 = AbstractClass::SaveLoad_Prefix_0( (AbstractClass *)(a1), (AbstractClass *)(a2)); /*0x6b1184*/
  v5 = 0; /*0x6b1186*/
  if ( Prefix_0 >= 0 ) /*0x6b118a*/
  {
    if ( v3 ) /*0x6b1192*/
    {
      ((AbstractClass *)v3)->InitVtables( (int)&a1); /*0x6b119b*/
      ((SlaveControlVector *)((int)((SlaveControlVector *)v3->slaves)))->Constructor((int)((SlaveControlVector *)((int)((SlaveControlVector *)v3->slaves))), 0, 0); /*0x6b11a7*/
      v3->slaves[0] = (int)&vt_DynamicVectorClass; /*0x6b11b0*/
      *(unsigned int *)&v3->__pad_48[4] = 10; /*0x6b11b6*/
      *(unsigned int *)v3->__pad_48 = 0; /*0x6b11bd*/
      ((Timer *)((Timer *)&v3->__pad_48[8]))->Start(0); /*0x6b11c0*/
      v3->vtable1 = &vt_SlaveManagerClass; /*0x6b11c5*/
      ((unsigned int *)v3)[0] = (unsigned int)&vt_SlaveManagerClass; /*0x6b11cb*/
      v2 = a2; /*0x6b11d2*/
      ((unsigned int *)v3)[0] = (unsigned int)&vt_SlaveManagerClass; /*0x6b11d6*/
      ((unsigned int *)v3)[0] = (unsigned int)&vt_SlaveManagerClass; /*0x6b11dd*/
    }
    Prefix_0 = (*(int (**)(int, int *, int, unsigned int))(*(unsigned int *)v2 + 12))( v2, (int *)(&v16), 4, 0); /*0x6b11f2*/
    if ( Prefix_0 >= 0 ) /*0x6b11f6*/
    {
      slaves = (int *)(v3->slaves); /*0x6b11fc*/
      if ( v3 != (SlaveManagerClass *)-56 ) /*0x6b1201*/
      {
        ((SlaveControlVector *)((int)((SlaveControlVector *)v3->slaves)))->Constructor((int)((SlaveControlVector *)((int)((SlaveControlVector *)v3->slaves))), 0, 0); /*0x6b1207*/
        *slaves = (unsigned int)(int)&vt_DynamicVectorClass;
        *(unsigned int *)&v3->__pad_48[4] = 10; /*0x6b1212*/
        *(unsigned int *)v3->__pad_48 = 0; /*0x6b1219*/
      }
      v7 = v16; /*0x6b121c*/
      a1 = (unsigned int *)(0); /*0x6b1220*/
      if ( v16 <= 0 ) /*0x6b1226*/
      {
LABEL_20:
        v14 = 0; /*0x6b12b7*/
        if ( v7 > 0 ) /*0x6b12bb*/
        {
          do /*0x6b12d3*/
            ObjectPtr::RegisterForTracking( /*0x6b12c9*/
              (int)&SwizzleManagerClass_Instance,
              *(int **)(v3->slaveVectorCount + 4 * v14++));
          while ( v14 < v16 ); /*0x6b12d3*/
        }
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v3->master); /*0x6b12de*/
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v3->house); /*0x6b12ec*/
      }
      else
      {
        while ( 1 ) /*0x6b1232*/
        {
          v8 = (unsigned int)__2_YAPAXI_Z(0x14u); /*0x6b1232*/
          if ( v8 ) /*0x6b123c*/
          {
            v9 = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x6b123e*/
            *(unsigned int *)(v8 + 16) = 0; /*0x6b1244*/
            *(unsigned int *)(v8 + 8) = v9; /*0x6b1247*/
            v5 = v8; /*0x6b124a*/
          }
          Prefix_0 = (*(int (**)(int, int, int, unsigned int))(*(unsigned int *)a2 + 12))(a2, v5, 20, 0); /*0x6b125b*/
          if ( Prefix_0 < 0 ) /*0x6b125f*/
            break; /*0x6b125f*/
          slaveVectorCapacity = v3->slaveVectorCapacity; /*0x6b1265*/
          if ( *(unsigned int *)v3->__pad_48 < slaveVectorCapacity /*0x6b128a*/
            || (BYTE1(v3->creationFrame) || !slaveVectorCapacity)
            && (v11 = *(unsigned int *)&v3->__pad_48[4], v11 > 0)
&& (*(uint8_t (**)(int *, int, unsigned int))(*slaves + 8))( (int *)(v3->slaves), slaveVectorCapacity + v11, 0) )



          {
            v12 = *(unsigned int *)v3->__pad_48; /*0x6b1291*/
            slaveVectorCount = v3->slaveVectorCount; /*0x6b1294*/
            *(unsigned int *)v3->__pad_48 = v12 + 1; /*0x6b129a*/
            *(unsigned int *)(slaveVectorCount + 4 * v12) = v5; /*0x6b129d*/
          }
          v7 = v16; /*0x6b12a4*/
          a1 = (unsigned int *)((SlaveManagerClass *)((char *)a1 + 1)); /*0x6b12ab*/
          if ( (int)a1 >= v16 ) /*0x6b12af*/
            goto LABEL_20; /*0x6b12af*/
          v5 = 0; /*0x6b122e*/
        }
      }
    }
  }
  return (AbstractClass * *)Prefix_0; /*0x6b12f1*/

}
} // namespace ra2

// 0x6B1A70
namespace gamemd {
long long SlaveManagerClass::Calc2DDistance()
{

  double v1; // st7
  int64_t result; // rax
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

  vtable0 = (int (**)(HouseClass *, int))this->house->AbstractClass; /*0x6af65f*/
  v4 = (*((int (**)(TechnoClass *))this->master->vtable1 + 15))( (TechnoClass *)(this->master)); /*0x6af661*/
  result = (wchar_t *)vtable0[35](this->house, v4); /*0x6af668*/
  *a2 = result; /*0x6af674*/
  if ( result ) /*0x6af676*/
  {
    (*(void (**)(wchar_t *))(*(unsigned int *)result + 212))( (wchar_t *)(result)); /*0x6af67c*/
    *((unsigned int *)*a2 + 183) = this->master; /*0x6af68b*/
    a2[1] = 0; /*0x6af691*/
    result = *(wchar_t **)&(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x6af698*/
    a2[2] = *(wchar_t **)&(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x6af6a2*/
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

  result = AbstractClass::SaveLoad_Prefix( (ObjectTypeClass *)((int *)aP0), (ObjectTypeClass *)(a1), (ObjectTypeClass *)(aP2)); /*0x6b1312*/
  if ( result >= 0 ) /*0x6b1319*/
  {
    v4 = *a1; /*0x6b131e*/
    aP2 = *(unsigned int *)aP0->__pad_48; /*0x6b132a*/
    result = (*(int (**)(int *, int *, int, unsigned int))(v4 + 16))( (int *)(a1), (int *)(&aP2), 4, 0); /*0x6b132e*/
    if ( result >= 0 ) /*0x6b1333*/
    {
      for ( i = 0; i < aP2; ++i ) /*0x6b133d*/
      {
        result = (*(int (**)(int *, unsigned int, int, unsigned int))(*a1 + 16))( /*0x6b134d*/
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

  ((SlaveManagerClass *)(int)this)->Constructor_SlaveManagerClass(); /*0x6b1393*/
  if ( (a2 & 1) != 0 ) /*0x6b139d*/
    __3_YAXPAX_Z(this); /*0x6b13a0*/
  return (SlaveManagerClass *)this; /*0x6b13aa*/

}
} // namespace gamemd

// 0x6B13B0
namespace gamemd {
void SlaveManagerClass_25::ddtor(void *a1_1, void *a2_1)
{

  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x6b13b6*/
  this->m_10 = 0; /*0x6b13b9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x6b13c0*/
  {
    __3_YAXPAX_Z(v2); /*0x6b13c6*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x6b13ce*/
  }
  BYTE1(this->m_C) = 0; /*0x6b13d1*/
  this->m_8 = 0; /*0x6b13d4*/

}
} // namespace gamemd

// 0x6B13E0
namespace gamemd {
unsigned int SlaveManagerClass_25::Write(int a2)
{

  if ( LOBYTE(this->m_C) ) /*0x6b13e0*/
    return (unsigned int)(a2 - *(unsigned int *)&this->m_1[3]) >> 2; /*0x6b13f5*/
  else
    return 0; /*0x6b13e7*/

}
} // namespace gamemd

// 0x6B1400
namespace gamemd {
int SlaveManagerClass_25::Seek(int a2, void *a2_2, void *a3_1)
{

  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x6b140a*/

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

  v2 = *((unsigned int *)this + 2); /*0x6b1472*/
  if ( v2 == *(unsigned int *)(a2 + 8) ) /*0x6b147d*/
  {
    v3 = 0; /*0x6b147f*/
    if ( v2 <= 0 ) /*0x6b1483*/
      return 1; /*0x6b14a3*/
    v4 = *(unsigned int **)&this->m_1[3]; /*0x6b1485*/
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
    LOBYTE(this->m_C) = 0; /*0x6b1602*/
    if ( a3 ) /*0x6b1608*/
      v4 = a3; /*0x6b161e*/
    else
      v4 = (unsigned int *)__2_YAPAXI_Z(4 * a2); /*0x6b161a*/
    LOBYTE(this->m_C) = 1; /*0x6b1622*/
    if ( !v4 ) /*0x6b1626*/
      return 0; /*0x6b169a*/
    if ( *(unsigned int *)&this->m_1[3] ) /*0x6b1628*/
    {
      m_8 = this->m_8; /*0x6b162f*/
      if ( a2 < m_8 ) /*0x6b1634*/
        m_8 = a2; /*0x6b1636*/
      for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * i - 4) ) /*0x6b163c*/
        ++i; /*0x6b1641*/
      if ( BYTE1(this->m_C) ) /*0x6b164e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x6b1659*/
        *(unsigned int *)&this->m_1[3] = 0; /*0x6b1661*/
      }
    }
    *(unsigned int *)&this->m_1[3] = (unsigned int)v4; /*0x6b166a*/
    this->m_8 = a2; /*0x6b1672*/
    BYTE1(this->m_C) = a3 == 0; /*0x6b1675*/
  }
  else
  {
    (*(void (**)(void *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x6b167e*/
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
  unsigned int *i; // ecx

  m_10 = this->m_10; /*0x6b16a0*/
  result = 0; /*0x6b16a3*/
  if ( m_10 <= 0 ) /*0x6b16a8*/
    return -1; /*0x6b16bf*/
  for ( i = *(unsigned int **)&this->m_1[3]; *i != *a2; ++i ) /*0x6b16ae*/
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

  v3 = *(void **)&this->m_1[3]; /*0x6b1983*/
  *(unsigned int *)this->__pad_0 = (unsigned int)&vt_VectorClass;
  if ( v3 && BYTE1(this->m_C) ) /*0x6b1990*/
  {
    __3_YAXPAX_Z(v3); /*0x6b1998*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x6b19a0*/
  }
  BYTE1(this->m_C) = 0; /*0x6b19ab*/
  this->m_8 = 0; /*0x6b19b1*/
  if ( (a2 & 1) != 0 ) /*0x6b19b8*/
    __3_YAXPAX_Z(this); /*0x6b19bb*/
  return this->__pad_0; /*0x6b19c5*/

}
} // namespace gamemd
