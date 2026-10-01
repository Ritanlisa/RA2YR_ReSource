// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/JumpjetLocomotion_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/Team_e4.hpp"
#include "e4/classes/MEMORY_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/BufferIOFileClass_e4.hpp"
#include "e4/classes/CCFileClass_e4.hpp"
#include "e4/classes/LayerClass_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/JumpjetLocomotionClass_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/KeyboardConfig_e4.hpp"
#include "e4/classes/TacticalClass_e4.hpp"
#include "e4/classes/AudioController_e4.hpp"
#include "e4/classes/FacingClass_e4.hpp"
#include "e4/classes/Targeting_e4.hpp"

// 0x4B0AD0
namespace gamemd {
AbstractClass * JumpjetLocomotion::MoveTo(IUnknown * aP1, int aP3, void *a3_1)
{

  unsigned int *v3; // edx
  int v5; // eax
  int v6; // ebp
  int v7; // eax
  int v8; // ecx
  int *v9; // ecx
  int v10; // eax
  int v11; // edi
  int v12; // ebx
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // ecx
  int v18[2]; // [esp+10h] [ebp-14h] BYREF
  int v19; // [esp+18h] [ebp-Ch] BYREF
  int v20; // [esp+1Ch] [ebp-8h]
  int v21; // [esp+20h] [ebp-4h]

  v3 = (unsigned int *)((int)(aP1));
  if ( *aP1 != g_DDraw_ClipRect || aP1[1] != (unsigned int)qword_8A0794 || (v5 = aP1[2], v5 != HIDWORD(qword_8A0794)) ) /*0x4b0afe*/
  {
    LOBYTE(v5) = *((unsigned char *)this + 96); /*0x4b0b04*/
    v6 = aP3; /*0x4b0b07*/
    if ( !(unsigned char)v5 ) /*0x4b0b0d*/
    {
      v5 = *((unsigned int *)this + 22); /*0x4b0b13*/
      if ( v5 != -1 ) /*0x4b0b19*/
      {
        v5 = byte_7E7B28[12 * v5]; /*0x4b0b22*/
        if ( v5 ) /*0x4b0b2c*/
        {
          v7 = 4 * v5; /*0x4b0b32*/
          v8 = ((unsigned int *)(dword_7E7A28))[v7]; /*0x4b0b35*/
          v5 = ((unsigned int *)(dword_7E7A34))[v7]; /*0x4b0b3b*/
          if ( v5 > -1 ) /*0x4b0b44*/
          {
            v9 = (int *)(v8 + 12 * v5); /*0x4b0b4d*/
            aP3 = v9[2]; /*0x4b0b53*/
            if ( *((unsigned int *)this + 23) < v5 ) /*0x4b0b5c*/
            {
              v10 = v9[1]; /*0x4b0b64*/
              v18[0] = *v9; /*0x4b0b67*/
              v18[1] = v10; /*0x4b0b6f*/
              v5 = (int)JumpjetLocomotion::TransformCoords((JumpjetLocomotion *)this, &v19, v18, &aP3); /*0x4b0b80*/
              v11 = *(unsigned int *)v5; /*0x4b0b85*/
              v12 = *(unsigned int *)(v5 + 4); /*0x4b0b89*/
              if ( !v6 ) /*0x4b0b8c*/
              {
                v13 = (*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 12) + 464))(*((unsigned int *)this + 3)); /*0x4b0b93*/
                v14 = *((unsigned int *)this + 3); /*0x4b0b99*/
                v19 = v11; /*0x4b0b9c*/
                v20 = v12; /*0x4b0ba0*/
                v21 = v13; /*0x4b0ba4*/
                (*(void (**)(int, int *))(*(unsigned int *)v14 + 244))(v14, &v19); /*0x4b0baf*/
                LOBYTE(v5) = (*(char (**)(unsigned int, unsigned int *))(**(unsigned int **)((char *)this + 12) + 244))( /*0x4b0bbf*/
                               *((unsigned int *)this + 3),
                               aP1);
                return (gamemd::AbstractClass *)(v5);
              }
              if ( v6 == 1 || v6 == 3 ) /*0x4b0bd7*/
              {
                v15 = (*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 12) + 464))(*((unsigned int *)this + 3)); /*0x4b0bde*/
                v16 = *((unsigned int *)this + 3); /*0x4b0be4*/
                v21 = v15; /*0x4b0be7*/
                v19 = v11; /*0x4b0beb*/
                v20 = v12; /*0x4b0bef*/
                LOBYTE(v5) = (*(int (**)(int, int *))(*(unsigned int *)v16 + 240))(v16, &v19); /*0x4b0bfa*/
              }
              v3 = (unsigned int *)(aP1);
            }
          }
        }
      }
    }
    if ( v6 ) /*0x4b0c06*/
    {
      if ( v6 == 1 || v6 == 3 ) /*0x4b0c26*/
        LOBYTE(v5) = (*(char (**)(unsigned int, unsigned int *))(**(unsigned int **)((char *)this + 12) + 240))( /*0x4b0c2e*/
                       *((unsigned int *)this + 3),
                       v3);
    }
    else
    {
      LOBYTE(v5) = (*(char (**)(unsigned int, unsigned int *))(**(unsigned int **)((char *)this + 12) + 244))( /*0x4b0c0e*/
                     *((unsigned int *)this + 3),
                     v3);
    }
  }
  return (gamemd::AbstractClass *)(v5);

}
}
// 0x4B0F20
namespace gamemd {
AbstractClass * JumpjetLocomotion::ProcessCollision(char a2, void *a2_2)
{

  int v4; // eax
  int v5; // edx
  bool v6; // al
  int v7; // esi
  int v8; // eax
  unsigned int *v9; // esi
  int v10; // edx
  int v11; // esi
  int v12; // eax
  int *v13; // ecx
  int v14; // edi
  char v15; // bl
  int v16; // edx
  int v17; // eax
  int v18; // esi
  int v19; // ecx
  int v20; // eax
  unsigned int *v21; // esi
  int v22; // eax
  unsigned int *v23; // ecx
  int v24; // edx
  int v25; // eax
  int v26; // edx
  unsigned int *v27; // esi
  int v28; // eax
  int v29; // edx
  unsigned int *v30; // ebx
  int v31; // ecx
  int v32; // eax
  int v33; // edx
  CellClass *v34; // eax
  int *Coords; // eax
  int *v36; // ecx
  int *v37; // ecx
  int GroundHeight; // esi
  int v39; // ebx
  char *v41; // esi
  char v42; // dl
  int v43; // edx
  int v44; // ebx
  int16_t v45; // cx
  int v46; // eax
  int v47; // ecx
  unsigned int *v48; // ecx
  int v49; // eax
  int v50; // edx
  int v51; // eax
  int ... [42175 chars total]
}
} // namespace gamemd

// 0x4B2630
namespace gamemd {
int JumpjetLocomotion::Update(unsigned char * a2, int a3, int a4, void *a4_2)
{

  int v5; // ecx
  unsigned int v6; // ebx
  int v7; // ecx
  char v8; // al
  char result; // al
  int v10; // ecx
  int v11; // ecx
  unsigned int *v12; // eax
  unsigned int *v13; // eax
  int v14; // eax
  int v15; // eax
  wchar_t *v16; // edi
  int v17; // edx
  wchar_t **v18; // esi
  int v19; // eax
  wchar_t *v20; // eax
  wchar_t *v21; // ecx
  unsigned int *v22; // ebx
  int v23; // ecx
  char v24; // al
  unsigned int *v25; // ecx
  int v26; // ecx
  unsigned int *v27; // eax
  unsigned int *v28; // eax
  unsigned int *v29; // ecx
  unsigned int *Value; // edi
  unsigned int *v31; // esi
  int v32; // kr0C_4
  unsigned int v33; // edx
  unsigned int *v34; // eax
  unsigned char *v35; // ecx
  int v36; // edi
  unsigned int v37; // esi
  void *v38; // eax
  int v39; // eax
  int v40; // edx
  unsigned int *v41; // edi
  unsigned int *v42; // ecx
  int v43; // esi
  int GroundHeight; // eax
  int ClosestObject; // eax
  unsigned int *v46; // eax
  unsigned int *v47; // eax
  unsigned int *v48;... [57640 chars total]
}

} // namespace gamemd

// 0x4B4780
namespace gamemd {
unsigned int * JumpjetLocomotion::TransformCoords(IUnknown * aP1, IUnknown * aP2, ObjectClass * aP3, void *a4_1)
{

  int v4; // eax
  int v5; // ebx
  int v6; // edi
  int v7; // esi
  char *JumpjetLocomotion_field_0x40; // edx
  char *JumpjetLocomotion_field_0x44; // ecx

  v4 = (int)(*aP3);
  v5 = (int)(dword_7E7B30[3 * (int)this->JumpjetLocomotion_field_0x58]);
  v6 = (int)(*aP2);
  v7 = (int)(aP2[1]);
  if ( (v5 & 1) != 0 ) /*0x4b47a4*/
  {
    v6 = (int)(aP2[1]);
    v7 = (int)(*aP2);
    v4 = (uint8_t)(-64 - v4); /*0x4b47b9*/
  }
  if ( (v5 & 2) != 0 ) /*0x4b47be*/
  {
    v6 = -v6; /*0x4b47c2*/
    v4 = (uint8_t)-(char)v4; /*0x4b47c4*/
  }
  if ( (v5 & 4) != 0 ) /*0x4b47cc*/
  {
    v7 = -v7; /*0x4b47d5*/
    v4 = (uint8_t)(0x80 - v4); /*0x4b47dd*/
  }
  *(unsigned int *)aP3 = v4; /*0x4b47df*/
  JumpjetLocomotion_field_0x40 = (char *)this->JumpjetLocomotion_field_0x40; /*0x4b47e2*/
  JumpjetLocomotion_field_0x44 = (char *)this->JumpjetLocomotion_field_0x44; /*0x4b47e5*/
  *aP1 = &JumpjetLocomotion_field_0x40[v6]; /*0x4b47f2*/
  aP1[1] = &JumpjetLocomotion_field_0x44[v7]; /*0x4b47f5*/
  return aP1; /*0x4b47f0*/

}
}
// 0x54CA90
namespace gamemd {
void* JumpjetLocomotion::Land()
{

  int v2; // ecx
  int v3; // ebp
  char v4; // al
  double v5; // st7
  double v6; // st7
  int v7; // eax
  double v8; // st7
  int v9; // eax
  int v10; // esi
  unsigned char *v11; // ecx
  unsigned int *v12; // eax
  unsigned int *v13; // esi
  unsigned int *v14; // ebp
  int *v15; // eax
  int v16; // edx
  int v17; // eax
  int v18; // eax
  int v19; // ecx
  int v20; // edx
  int v21; // eax
  int v22; // ecx
  int *v23; // ecx
  CellClass *v24; // esi
  int landType; // eax
  bool v26; // bl
  int v27; // eax
  int v28; // ecx
  int v29; // ebp
  int v30; // eax
  TechnoClass *v31; // ecx
  int v32; // ecx
  unsigned int *v33; // ecx
  int v34; // eax
  int v35; // esi
  CellClass *v36; // eax
  int v37; // ecx
  int v38; // ecx
  int v39; // eax
  int v40; // eax
  int v41; // esi
  CellClass *v42; // eax
  int v43; // ecx
  char v45; // [esp+32h] [ebp-24h]
  char v46; // [esp+33h] [ebp-23h]
  CellClass * v47;
  char v48; // [esp+35h] [ebp-21h]
  int16_t v49[2]; // [esp+36h] [ebp-20h] BYREF
  int16_t v50[2]; // [esp+3Ah] [ebp-1Ch] BYREF
  int v51; // [esp+3Eh] [ebp-18h] BYREF
  int v52; // [esp+42h] [ebp-14h]
  int v53; // [esp+46h] [ebp-10h]
  CellClass * v54;
  CellClass * v55;
  int v56; // [esp+52h] [ebp-4h]

  v2 = (int)((gamemd::CellClass *)(*(unsigned int *)this->__pad_C));
  v51 = *(unsigned int *)(v2 + 156); /*0x54caa6*/
  v52 = *(unsigned int *)(v2 + 160); /*0x54caad*/
  v53 = *(unsigned int *)(v2 + 164); /*0x54cab4*/
  v3 = *(unsigned int *)(v2 + 164); /*0x54caba*/
  v54 = (gamemd::CellClass *)(*(unsigned int *)(v2 + 156)); /*0x54cabd*/
  v4 = *(unsigned char *)(v2 + 1709); /*0x54cac4*/
  v55 = (gamemd::CellClass *)(*(unsigned int *)(v2 + 160)); /*0x54cacc*/
  if ( v4 ) /*0x54cad0*/
  {
    v5 = (double)v53; /*0x54cad2*/
    *(unsigned int *)&this->__pad_5C[20] = 0; /*0x54cad8*/
    *(unsigned int *)this->__pad_78 = 0; /*0x54cadb*/
    v6 = v5 - *(float *)&this->__pad_C[28]; /*0x54cade*/
    this->JumpjetLocomotion_field_0x74 = 0; /*0x54cae1*/
    *(unsigned int *)&this->__pad_78[4] = 0; /*0x54cae4*/
    LOWORD(v7) = Math::RoundToInt(v6); /*0x54cae7*/
    v8 = *(float *)&this->__pad_C[28] + 1.0; /*0x54caef*/
    v53 = v7; /*0x54caf5*/
    *(float *)&this->__pad_C[28] = v8; /*0x54caf9*/
  }
  else
  {
    LOWORD(v9) = Math::RoundToInt((double)v53 - *(float *)&this->__pad_C[28]); /*0x54cb05*/
    v53 = v9; /*0x54cb0a*/
    v49[0] = *(unsigned short *)((ProgressTimer *)((ProgressTimer *)&this->__pad_48[12]))->GetValue(v50) + 11520; /*0x54cb2a*/
    FacingClass::Update(&this->__pad_48[12], v49); /*0x54cb39*/
  }
  v10 = dword_ABC5DC + Cell::GetGroundHeight((unsigned int *)(&v51)); /*0x54cb5e*/
  if ( (((Coord *)((Coord *)&stru_87F5F0.__pad_58[416]))->To_Cell(&v51)->flags[0] & 0x100) == 0 /*0x54cb7f*/
    || v3 < v10
    || (v45 = 1, v53 >= v10) )
  {
    v45 = 0; /*0x54cb81*/
  }
  v49[0] = v51 / 256; /*0x54cba0*/
  v49[1] = v52 / 256; /*0x54cbb5*/
  if ( (uint8_t)((LayerClass *)((LayerClass *)&stru_87F5F0.__pad_58[416]))->CoordinatesLegal(v49) ) /*0x54cbc2*/
  {
    RemoveTarget(*(unsigned int *)this->__pad_C); /*0x54cbd4*/
    (*(void (**)(unsigned int, unsigned int))(**(unsigned int **)this->__pad_C + 292))(*(unsigned int *)this->__pad_C, 0); /*0x54cbe1*/
    (*(void (**)(unsigned int, int *))(**(unsigned int **)this->__pad_C + 436))(*(unsigned int *)this->__pad_C, &v51); /*0x54cbf1*/
    (*(void (**)(unsigned int, int))(**(unsigned int **)this->__pad_C + 292))(*(unsigned int *)this->__pad_C, 1); /*0x54cbfe*/
    Targeting::Readd(*(unsigned int **)this->__pad_C); /*0x54cc0d*/
  }
  v46 = 0; /*0x54cc19*/
  if ( (*(int (**)(unsigned int))(**(unsigned int **)this->__pad_C + 456))(*(unsigned int *)this->__pad_C) > 0 && !v45 ) /*0x54cc30*/
    goto LABEL_74; /*0x54cc30*/
  v11 = *(unsigned char **)this->__pad_C; /*0x54cc36*/
  if ( !v11[1063] ) /*0x54cc39*/
    goto LABEL_74; /*0x54cc41*/
  v47 = 0; /*0x54cc4e*/
  v12 = (unsigned int *)(*(int (**)(unsigned char *, int *))(*(unsigned int *)v11 + 72))(v11, &v54); /*0x54cc53*/
  v49[0] = *v12 / 256; /*0x54cc66*/
  v49[1] = v12[1] / 256; /*0x54cc7f*/
  *(unsigned int *)v50 = *(unsigned int *)v49; /*0x54cc8d*/
  v13 = (unsigned int *)*((unsigned int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v50) + 57); /*0x54cc96*/
  if ( v13 == *(unsigned int **)this->__pad_C ) /*0x54cca1*/
    v13 = (unsigned int *)v13[12]; /*0x54cca3*/
  if ( v13 ) /*0x54cca8*/
  {
    if ( (*(int (**)(unsigned int *))(*v13 + 44))(v13) == 1 /*0x54ccc8*/
      || (*(int (**)(unsigned int *))(*v13 + 44))(v13) == 6 )
    {
      goto LABEL_64; /*0x54ccc8*/
    }
    if ( (*(int (**)(unsigned int *))(*v13 + 44))(v13) == 15 ) /*0x54ccd8*/
    {
      do /*0x54cd78*/
      {
        v14 = (unsigned int *)((gamemd::CellClass *)((unsigned int *)v13[12]));
        v15 = (int *)(*(unsigned int *)this->__pad_C + 156); /*0x54cce4*/
        v54 = (gamemd::CellClass *)(*v15); /*0x54ccf0*/
        v55 = (gamemd::CellClass *)(v15[1]); /*0x54ccf9*/
        v16 = *v13; /*0x54ccfd*/
        v56 = v15[2]; /*0x54cd02*/
        v17 = (*(int (**)(unsigned int *))(v16 + 136))(v13); /*0x54cd06*/
        StartAudioControllerAt(*(unsigned int *)(v17 + 496),(unsigned int *)(&v54), 0); /*0x54cd14*/
        v18 = *(unsigned int *)this->__pad_C; /*0x54cd19*/
        v19 = *(unsigned int *)(v18 + 1064); /*0x54cd1e*/
        if ( v19 ) /*0x54cd26*/
        {
          (*(void (**)(unsigned int *, int))(*v13 + 224))(v13, v19); /*0x54cd2d*/
        }
        else
        {
          v20 = *v13; /*0x54cd3b*/
          if ( *(unsigned int *)(v18 + 1068) ) /*0x54cd35*/
            (*(void (**)(unsigned int *, unsigned int))(v20 + 228))(v13, *(unsigned int *)(v18 + 1068)); /*0x54cd44*/
          else
            (*(void (**)(unsigned int *, unsigned int))(v20 + 224))(v13, *(unsigned int *)this->__pad_C); /*0x54cd4f*/
        }
        (*(void (**)(unsigned int *, unsigned int))(*v13 + 292))(v13, 0); /*0x54cd5a*/
        (*(void (**)(unsigned int *))(*v13 + 212))(v13); /*0x54cd64*/
        (*(void (**)(unsigned int *))(*v13 + 248))(v13); /*0x54cd6e*/
        v13 = v14; /*0x54cd76*/
      }
      while ( v14 ); /*0x54cd78*/
    }
    else
    {
      v21 = *(unsigned int *)this->__pad_C; /*0x54cd80*/
      v22 = *(unsigned int *)(v21 + 1064); /*0x54cd83*/
      if ( v22 ) /*0x54cd8b*/
      {
        (*(void (**)(unsigned int *, unsigned int *, unsigned int, unsigned int, int, int, unsigned int, unsigned int))(*v13 + 364))( /*0x54cd94*/
          v13,
          v13 + 27,
          0,
          *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 4012),
          v22,
          1,
          0,
          0);
      }
      else if ( *(unsigned int *)(v21 + 1068) ) /*0x54cd96*/
      {
        (*(void (**)(unsigned int *, unsigned int *, unsigned int, unsigned int, int, int, unsigned int, unsigned int))(*v13 + 364))( /*0x54cda3*/
          v13,
          v13 + 27,
          0,
          *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 4012),
          v21,
          1,
          0,
          *(unsigned int *)(v21 + 1068));
      }
      else
      {
        (*(void (**)(unsigned int *, unsigned int *, unsigned int, unsigned int, int, int, unsigned int, unsigned int))(*v13 + 364))( /*0x54cdbd*/
          v13,
          v13 + 27,
          0,
          *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 4012),
          v21,
          1,
          0,
          0);
      }
    }
  }
  v47 = (gamemd::CellClass *)((char)((gamemd::CellClass *)(1)));
  v23 = (int *)((gamemd::CellClass *)((int *)(*(unsigned int *)this->__pad_C + 156)));
  v54 = (gamemd::CellClass *)((int)((gamemd::CellClass *)(*v23)));
  v55 = (gamemd::CellClass *)((int)((gamemd::CellClass *)(v23[1])));
  v56 = (int)((gamemd::CellClass *)(v23[2]));
  v24 = (gamemd::CellClass *)(((Coord *)((Coord *)&stru_87F5F0.__pad_58[416]))->To_Cell(&v54)); /*0x54cdf4*/
  landType = v24->landType; /*0x54cdf6*/
  if ( landType != 2 || (v48 = 1, v45) ) /*0x54ce0c*/
    v48 = 0; /*0x54ce0e*/
  v26 = landType == 6 && !v45; /*0x54ce24*/
  v27 = (*(int (**)(unsigned int, CellClass *, int, int, unsigned int, int))(**(unsigned int **)this->__pad_C + 428))( /*0x54ce34*/
          *(unsigned int *)this->__pad_C,
          v24,
          -1,
          -1,
          0,
          1);
  v28 = *(unsigned int *)this->__pad_C; /*0x54ce3a*/
  v29 = v27; /*0x54ce3d*/
  if ( v28 /*0x54ce5c*/
    && (*(int (**)(int))(*(unsigned int *)v28 + 44))(v28) == 2
    && !(uint8_t)((Cell *)((bool *)v24))->IsBuildable(2, 1, 1, -1, 0, -1, 1) )
  {
    v29 = 7; /*0x54ce65*/
  }
  if ( *(unsigned char *)((*(int (**)(unsigned int))(**(unsigned int **)this->__pad_C + 132))(*(unsigned int *)this->__pad_C) + 3476) /*0x54ce9a*/
    && !(uint8_t)((Cell *)((bool *)v24))->IsBuildable(2, 1, 1, -1, 0, -1, 1)
    || v29 )
  {
    if ( v48 && !v26 ) /*0x54ceae*/
    {
      *(unsigned char *)(*(unsigned int *)this->__pad_C + 973) = 1; /*0x54ceb7*/
      (*(void (**)(unsigned int))(**(unsigned int **)this->__pad_C + 928))(*(unsigned int *)this->__pad_C); /*0x54cec3*/
      v30 = *(unsigned int *)this->__pad_C; /*0x54cec9*/
      v31 = *(TechnoClass **)(v30 + 728); /*0x54cecc*/
      if ( v31 ) /*0x54ced4*/
      {
        TechnoClass::MutateAll(v31, *(unsigned int *)(v30 + 1064), 0); /*0x54cedf*/
        v32 = *(unsigned int *)(*(unsigned int *)this->__pad_C + 728); /*0x54cee7*/
        if ( v32 ) /*0x54ceef*/
          (*(void (**)(int, int))(*(unsigned int *)v32 + 32))(v32, 1); /*0x54cef5*/
        *(unsigned int *)(*(unsigned int *)this->__pad_C + 728) = 0; /*0x54cefb*/
      }
      v33 = *(unsigned int **)this->__pad_C; /*0x54cf05*/
      if ( v33[266] ) /*0x54cf08*/
      {
        (*(void (**)(unsigned int *, unsigned int))(*v33 + 224))(v33, v33[266]); /*0x54cf15*/
      }
      else if ( v33[267] ) /*0x54cf20*/
      {
        (*(void (**)(unsigned int *, unsigned int))(*v33 + 228))(v33, v33[267]); /*0x54cf31*/
      }
      goto LABEL_65; /*0x54cf1b*/
    }
  }
  else
  {
    v34 = *(unsigned int *)this->__pad_C; /*0x54cf3c*/
    if ( *(unsigned int *)(v34 + 1400) /*0x54cf75*/
      || *(unsigned int *)(v34 + 1404) != 1075052544 && (*(unsigned int *)(v34 + 1400) || *(unsigned int *)(v34 + 1404) != 1075576832)
      || v48 && !v26 )
    {
      v35 = *(unsigned int *)this->__pad_C; /*0x54cf77*/
      if ( *(unsigned int *)((*(int (**)(int))(*(unsigned int *)v35 + 444))(v35) + 224) == v35 ) /*0x54cf8a*/
      {
        v36 = (CellClass *)(*(int (**)(int))(*(unsigned int *)v35 + 444))(v35); /*0x54cf92*/
        CellClass::AttachObject(v36, 0); /*0x54cf9a*/
      }
      v37 = *(unsigned int *)this->__pad_C; /*0x54cf9f*/
      *(unsigned int *)&this->__pad_48[8] = 4; /*0x54cfa2*/
      (*(void (**)(int, unsigned int, int))(*(unsigned int *)v37 + 1152))(v37, 0, 1); /*0x54cfaf*/
      goto LABEL_65; /*0x54cfb5*/
    }
  }
LABEL_64:
  v46 = 1; /*0x54cfb7*/
LABEL_65:
  v38 = *(unsigned int *)this->__pad_C; /*0x54cfbc*/
  if ( v38 && (*(int (**)(int))(*(unsigned int *)v38 + 456))(v38) > 0 ) /*0x54cfcf*/
  {
    if ( !v45 ) /*0x54cfd7*/
    {
      v39 = *(unsigned int *)this->__pad_C; /*0x54cfd9*/
      if ( !*(unsigned char *)(v39 + 1709) || v46 ) /*0x54cfec*/
      {
        *(unsigned int *)(v39 + 1064) = 0; /*0x54cfee*/
        *(unsigned int *)(*(unsigned int *)this->__pad_C + 1068) = 0; /*0x54cff7*/
      }
      goto LABEL_74; /*0x54cffd*/
    }
  }
  else if ( !v45 ) /*0x54d005*/
  {
    goto LABEL_74; /*0x54d005*/
  }
  if ( v47 ) /*0x54d00d*/
    *(unsigned char *)(*(unsigned int *)this->__pad_C + 140) = 1; /*0x54d012*/
LABEL_74:
  if ( ((*(int (**)(unsigned int))(**(unsigned int **)this->__pad_C + 456))(*(unsigned int *)this->__pad_C) <= 0 /*0x54d043*/
     || (LOBYTE(v40) = v45) != 0)
    && (!*(unsigned char *)(*(unsigned int *)this->__pad_C + 1709) || (LOBYTE(v40) = v46) != 0) )
  {
    v41 = *(unsigned int *)this->__pad_C; /*0x54d045*/
    if ( *(unsigned int *)((*(int (**)(int))(*(unsigned int *)v41 + 444))(v41) + 224) == v41 ) /*0x54d058*/
    {
      v42 = (CellClass *)(*(int (**)(int))(*(unsigned int *)v41 + 444))(v41); /*0x54d05f*/
      CellClass::AttachObject(v42, 0); /*0x54d067*/
    }
    GadgetGrid::RemoveItem((GadgetGrid *)&g_CellClassManager, *(unsigned int *)this->__pad_C); /*0x54d075*/
    v43 = *(unsigned int *)this->__pad_C; /*0x54d07a*/
    *(unsigned int *)this->__pad_78 = 0; /*0x54d07d*/
    *(unsigned int *)&this->__pad_48[8] = 6; /*0x54d083*/
    *(unsigned int *)&this->__pad_78[4] = 0; /*0x54d08a*/
    (**(void (***)(int, int, unsigned int))(v43 + 8))(v43 + 8, 4476, 0); /*0x54d095*/
    v40 = *(unsigned int *)this->__pad_C; /*0x54d097*/
    if ( v40 ) /*0x54d09c*/
    {
      *(unsigned int *)(v40 + 1064) = 0; /*0x54d09e*/
      v40 = *(unsigned int *)this->__pad_C; /*0x54d0a4*/
      *(unsigned int *)(v40 + 1068) = 0; /*0x54d0a7*/
    }
  }
  return v40; /*0x54d0ad*/

}
} // namespace gamemd

// 0x54D0F0
namespace gamemd {
void* JumpjetLocomotion::UpdateFacing()
{

  int v2; // eax
  unsigned char *v3; // ecx
  double v4; // st7
  double v5; // st7
  uint8_t v7; // c0
  uint8_t v8; // c3
  uint64_t v9; // st7
  int v10; // edi
  int v11; // ebp
  unsigned short *v12; // eax
  int v13; // eax
  double v14; // st7
  int v15; // eax
  int v16; // edx
  int v17; // kr10_4
  int v18; // ecx
  int v19; // ebp
  int v20; // ecx
  int GroundHeight; // ebx
  int v22; // eax
  int v23; // edx
  int v24; // edx
  int v25; // eax
  int v26; // edi
  int v27; // ebp
  int v28; // ecx
  int v29; // eax
  int *v30; // eax
  int v31; // ebx
  int v32; // ecx
  int v33; // eax
  int v34; // ebp
  int v35; // eax
  int v36; // ebp
  int v37; // ebx
  unsigned short *v38; // eax
  int v39; // ecx
  int *v40; // eax
  int v41; // edi
  int v42; // eax
  unsigned int v43; // ebp
  unsigned int v44; // ebx
  int v45; // eax
  int v46; // eax
  int v47; // ecx
  unsigned char *v48; // ecx
  int v49; // edi
  int v50; // eax
  int v51; // ecx
  int result; // eax
  int *v53; // [esp+4h] [ebp-54h]
  unsigned int *Value; // [esp+4h] [ebp-54h]
  char v55; // [esp+19h] [ebp-3Fh]
  char v56; // [esp+1Ah] [ebp-3Eh]
  char v57; // [esp+1Ah] [ebp-3Eh]
  char v58; // [esp+1Bh] [ebp-3Dh]
  int v59; // [esp+1Ch] [ebp-3Ch] BYREF
  double v60; // [esp+20h] [ebp-38h]
  double v61; // [esp+28h] [ebp-30h] BYREF
  double v62; // [esp+30h] [ebp-28h] BYREF
  int v63; // [esp+38h] [ebp-20h]
  int v64; // [esp+40h] [ebp-18h]
  int v65; // [esp+44h] [ebp-14h]
  unsigned int v66[3]; // [esp+4Ch] [ebp-Ch] BYREF

  v2 = *(unsigned int *)&this->__pad_48[8]; /*0x54d0ff*/
  if ( v2 == 2 || (v55 = 1, v2 == 3) ) /*0x54d10f*/
    v55 = 0; /*0x54d111*/
  v3 = *(unsigned char **)this->__pad_C; /*0x54d116*/
  v58 = v3[116]; /*0x54d11c*/
  if ( v55 ) /*0x54d126*/
    (*(void (**)(unsigned char *, unsigned int))(*(unsigned int *)v3 + 292))(v3, 0); /*0x54d12c*/
  else
    v3[116] = 0; /*0x54d134*/
  if ( *(double *)this->__pad_78 > *(double *)&this->__pad_5C[20] ) /*0x54d143*/
  {
    v4 = *(float *)&this->__pad_C[36] + *(double *)&this->__pad_5C[20]; /*0x54d148*/
    *(double *)&this->__pad_5C[20] = v4; /*0x54d14b*/
    v61 = (double)*(int *)&this->__pad_C[20]; /*0x54d151*/
    if ( v4 >= v61 ) /*0x54d15e*/
      v4 = v61; /*0x54d162*/
    *(double *)&this->__pad_5C[20] = v4; /*0x54d166*/
  }
  if ( *(double *)this->__pad_78 < *(double *)&this->__pad_5C[20] ) /*0x54d174*/
  {
    v5 = *(double *)&this->__pad_5C[20] - *(float *)&this->__pad_C[36] * 1.5; /*0x54d17f*/
    *(double *)&this->__pad_5C[20] = v5; /*0x54d188*/
    if ( v7 | v8 ) /*0x54d18d*/
      v5 = 0.0; /*0x54d194*/
    *(double *)&this->__pad_5C[20] = v5; /*0x54d19a*/
  }
  *(double *)&v9 = *(double *)&this->__pad_5C[20] / (double)*(int *)&this->__pad_C[20]; /*0x54d1a6*/
  (*(void (**)(unsigned int, unsigned int, unsigned int))(**(unsigned int **)this->__pad_C + 1348))( /*0x54d1ae*/
    *(unsigned int *)this->__pad_C,
    v9,
    HIDWORD(v9));
  v10 = (int)this->JumpjetLocomotion_field_0x40 / 256; /*0x54d1da*/
  v11 = (int)this->JumpjetLocomotion_field_0x44 / 256; /*0x54d1dd*/
  v12 = (unsigned short *)(*(int (**)(unsigned int, double *))(**(unsigned int **)this->__pad_C + 440))( /*0x54d1e0*/
                   *(unsigned int *)this->__pad_C,
                   &v61);
  if ( *v12 != (unsigned short)v10 || (v56 = 1, ((unsigned int *)(v12))[1] != (unsigned short)v11) ) /*0x54d1f4*/
    v56 = 0; /*0x54d1f6*/
  v13 = *(unsigned int *)&this->__pad_48[8]; /*0x54d1fb*/
  if ( (v13 == 2 || v13 == 3) && !this->__pad_C[48] ) /*0x54d208*/
  {
    *(double *)&this->__pad_85[3] = 6.283185307179586 / (15.0 / *(float *)&this->__pad_C[40]) /*0x54d224*/
                                  + *(double *)&this->__pad_85[3];
  }
  else
  {
    *(unsigned int *)&this->__pad_85[3] = 0; /*0x54d22e*/
    this->JumpjetLocomotion_field_0x8C = 0; /*0x54d234*/
  }
  Math::SinCos(*(double *)&this->__pad_85[3]); /*0x54d248*/
  v14 = *(double *)&v9 * (double)*(int *)&this->__pad_C[44] + (double)*(int *)&this->__pad_78[8]; /*0x54d253*/
  v17 = Math::RoundToInt(v14); /*0x54d259*/
  LOWORD(v16) = HIWORD(v17); /*0x54d259*/
  LOWORD(v15) = v17; /*0x54d259*/
  v18 = *(unsigned int *)this->__pad_C; /*0x54d25e*/
  LODWORD(v60) = v15; /*0x54d261*/
  v19 = (*(int (__fastcall **)(int, int))(*(unsigned int *)v18 + 464))(v18, v16); /*0x54d270*/
  v20 = *(unsigned int *)this->__pad_C + 156; /*0x54d272*/
  v59 = v19; /*0x54d278*/
  v62 = *(double *)v20; /*0x54d27e*/
  v63 = *(unsigned int *)(v20 + 8); /*0x54d291*/
  GroundHeight = Cell::GetGroundHeight(&v62); /*0x54d29f*/
  v22 = *(unsigned int *)this->__pad_C + 156; /*0x54d2a4*/
  v62 = *(double *)v22; /*0x54d2ab*/
  v63 = *(unsigned int *)(v22 + 8); /*0x54d2c3*/
  if ( (((Coord *)((Coord *)&stru_87F5F0.__pad_58[416]))->To_Cell(&v62)->flags[0] & 0x100) != 0 ) /*0x54d2d5*/
  {
    v23 = *(unsigned int *)this->__pad_C + 156; /*0x54d2da*/
    v62 = *(double *)v23; /*0x54d2e2*/
    v24 = *(unsigned int *)(v23 + 8); /*0x54d2f5*/
    LODWORD(v61) = GroundHeight + 4 * dword_ABC5E8; /*0x54d2f8*/
    v63 = v24; /*0x54d2fc*/
    v14 = (double)v24; /*0x54d300*/
    if ( (double)SLODWORD(v61) - *(float *)&this->__pad_C[28] <= v14 ) /*0x54d312*/
      GroundHeight += dword_ABC5DC; /*0x54d314*/
  }
  v25 = *(unsigned int *)&this->__pad_48[8]; /*0x54d31a*/
  if ( v25 == 4 /*0x54d339*/
    || !v25
    || v56
    && !*(unsigned char *)((*(int (**)(unsigned int))(**(unsigned int **)this->__pad_C + 132))(*(unsigned int *)this->__pad_C) + 3434) )
  {
    v26 = v19 - GroundHeight; /*0x54d352*/
  }
  else
  {
    v26 = v19 - JumpjetLocomotionClass::GetFloorZSetContext((JumpjetLocomotionClass *)this); /*0x54d34c*/
  }
  LODWORD(v61) = v26; /*0x54d358*/
  v57 = 0; /*0x54d35e*/
  if ( v26 < SLODWORD(v60) ) /*0x54d363*/
  {
    v27 = (*(int (**)(unsigned int))(**(unsigned int **)this->__pad_C + 456))(*(unsigned int *)this->__pad_C); /*0x54d377*/
    v28 = *(unsigned int *)this->__pad_C + 156; /*0x54d379*/
    v62 = *(double *)v28; /*0x54d381*/
    v63 = *(unsigned int *)(v28 + 8); /*0x54d394*/
    if ( (((Coord *)((Coord *)&stru_87F5F0.__pad_58[416]))->To_Cell(&v62)->flags[0] & 0x100) != 0 ) /*0x54d3ab*/
    {
      v29 = *(unsigned int *)this->__pad_C; /*0x54d3ad*/
      if ( !*(unsigned char *)(v29 + 140) ) /*0x54d3b0*/
      {
        v30 = (int *)(v29 + 156); /*0x54d3ba*/
        v64 = *v30; /*0x54d3c3*/
        v65 = v30[1]; /*0x54d3ca*/
        v31 = v30[2]; /*0x54d3ce*/
        v62 = *(double *)v30; /*0x54d3d3*/
        v63 = v30[2]; /*0x54d3eb*/
        if ( v31 >= dword_ABC5DC + Cell::GetGroundHeight(&v62) ) /*0x54d3ff*/
          v27 -= dword_ABC5DC; /*0x54d401*/
      }
    }
    if ( !v27 ) /*0x54d405*/
    {
      v32 = *(unsigned int *)this->__pad_C; /*0x54d407*/
      v62 = *(double *)(v32 + 156); /*0x54d416*/
      v63 = *(unsigned int *)(v32 + 164); /*0x54d424*/
      (*(void (**)(int, double *))(*(unsigned int *)v32 + 244))(v32, &v62); /*0x54d42f*/
      *(unsigned char *)(*(unsigned int *)this->__pad_C + 140) = 0; /*0x54d438*/
    }
    v14 = (double)SLODWORD(v61) + *(float *)&this->__pad_C[24]; /*0x54d443*/
    if ( (double)SLODWORD(v60) >= v14 ) /*0x54d451*/
    {
      v14 = (double)v59 + *(float *)&this->__pad_C[24]; /*0x54d469*/
      LOWORD(v33) = Math::RoundToInt(v14); /*0x54d46c*/
      v59 = v33; /*0x54d471*/
    }
    else
    {
      v59 += LODWORD(v60) - v26; /*0x54d45f*/
    }
LABEL_49:
    v57 = 1; /*0x54d4bb*/
    goto LABEL_50; /*0x54d4bb*/
  }
  if ( v26 > SLODWORD(v60) )
  {
    v14 = (double)SLODWORD(v61) - *(float *)&this->__pad_C[24]; /*0x54d47d*/
    if ( (double)SLODWORD(v60) <= v14 ) /*0x54d48b*/
    {
      v14 = (double)v59 - *(float *)&this->__pad_C[24]; /*0x54d49b*/
      LOWORD(v35) = Math::RoundToInt(v14); /*0x54d49e*/
      v59 = v35; /*0x54d4a3*/
      v34 = v35; /*0x54d4a7*/
    }
    else
    {
      v34 = LODWORD(v60) - v26 + v19; /*0x54d48f*/
      v59 = v34; /*0x54d491*/
    }
    if ( v34 <= GroundHeight ) /*0x54d4ab*/
      v59 = GroundHeight; /*0x54d4ad*/
    v26 = v26 <= 0 ? 0 : v26;
    goto LABEL_49; /*0x54d4b9*/
  }
LABEL_50:
  v36 = (int)this->JumpjetLocomotion_field_0x40 / 256; /*0x54d4c0*/
  v37 = (int)this->JumpjetLocomotion_field_0x44 / 256; /*0x54d4e9*/
  v38 = (unsigned short *)(*(int (**)(unsigned int, double *))(**(unsigned int **)this->__pad_C + 440))( /*0x54d4ec*/
                   *(unsigned int *)this->__pad_C,
                   &v61);
  if ( *v38 != (unsigned short)v36 || v38[1] != (unsigned short)v37 ) /*0x54d4fb*/
  {
    v39 = LODWORD(v60); /*0x54d4fd*/
    if ( v26 < SLODWORD(v60) / 2 ) /*0x54d50a*/
    {
      *(unsigned int *)&this->__pad_5C[20] = 0; /*0x54d50e*/
      this->JumpjetLocomotion_field_0x74 = 0; /*0x54d511*/
    }
    if ( v26 < v39 / 4 ) /*0x54d525*/
    {
      *(unsigned int *)&this->__pad_5C[20] = 0; /*0x54d527*/
      this->JumpjetLocomotion_field_0x74 = 0; /*0x54d52a*/
    }
  }
  if ( v57 ) /*0x54d537*/
  {
    ObjectClass::SetAnim(*(ObjectClass **)this->__pad_C, v59); /*0x54d541*/
    if ( v55 ) /*0x54d54c*/
      (*(void (**)(unsigned int, unsigned int))(**(unsigned int **)this->__pad_C + 292))(*(unsigned int *)this->__pad_C, 0); /*0x54d554*/
  }
  v40 = (int *)(*(unsigned int *)this->__pad_C + 156); /*0x54d55d*/
  v64 = *v40; /*0x54d567*/
  v65 = v40[1]; /*0x54d56e*/
  v41 = v40[2]; /*0x54d572*/
  LOWORD(v42) = Math::RoundToInt(v14); /*0x54d575*/
  LODWORD(v60) = v42; /*0x54d57a*/
  v61 = (double)(*(int16_t *)((ProgressTimer *)((ProgressTimer *)&this->__pad_48[12]))->GetValue(&v59) - 0x3FFF) /*0x54d5a2*/
      * -0.00009587672516830327;
  v43 = HIDWORD(v61); /*0x54d5aa*/
  v44 = LODWORD(v61); /*0x54d5ae*/
  v60 = (double)SLODWORD(v60); /*0x54d5b4*/
  v62 = (double)v65; /*0x54d5bc*/
  Math::SinCos(v61); /*0x54d5c0*/
  LOWORD(v45) = Math::RoundToInt(v14); /*0x54d5cd*/
  LODWORD(v61) = v45; /*0x54d5d4*/
  Math::ArcTan2(COERCE_DOUBLE(__PAIR64__(v43, v44))); /*0x54d5d8*/
  LOWORD(v46) = Math::RoundToInt(v14 * v60 + (double)v64); /*0x54d5e8*/
  v47 = *(unsigned int *)this->__pad_C; /*0x54d5f1*/
  v66[1] = LODWORD(v61); /*0x54d5f4*/
  v66[0] = v46; /*0x54d5f8*/
  v66[2] = v41; /*0x54d5fc*/
  (*(void (**)(int, unsigned int *))(*(unsigned int *)v47 + 436))(v47, v66); /*0x54d607*/
  v48 = *(unsigned char **)this->__pad_C; /*0x54d60d*/
  if ( !v48[1709] )
  {
    if ( v48
      && (*(int (**)(unsigned char *))(*(unsigned int *)v48 + 44))(v48) == 15
      && ((v49 = *(unsigned int *)this->__pad_C) != 0
        ? (v50 = (*(int (**)(unsigned int))(*(unsigned int *)v49 + 44))(*(unsigned int *)this->__pad_C) == 15 ? v49 : 0)
        : (v50 = 0),
          *(unsigned char *)(*(unsigned int *)(v50 + 1728) + 3787)
       && *(unsigned int *)&this->__pad_48[8] == 2
       && (v51 = *(unsigned int *)this->__pad_C, *(unsigned int *)(v51 + 692))) )
    {
      v53 = ObjectClass::CalcTargetFacing((ObjectClass *)v51, (int *)&v61, *(unsigned int *)(v51 + 692)); /*0x54d675*/
      FacingClass::Set_SyncLog(&this->__pad_48[12], v53); /*0x54d679*/
    }
    else
    {
      Value = ((ProgressTimer *)((ProgressTimer *)&this->__pad_48[12]))->GetValue(&v61); /*0x54d68b*/
      FacingClass::Set_SyncLog((char *)(*(unsigned int *)this->__pad_C + 904), Value); /*0x54d692*/
    }
  }
  if ( v55 ) /*0x54d69d*/
    return (*(int (**)(unsigned int, int))(**(unsigned int **)this->__pad_C + 292))(*(unsigned int *)this->__pad_C, 1); /*0x54d6a6*/
  result = *(unsigned int *)this->__pad_C; /*0x54d6b4*/
  *(unsigned char *)(result + 116) = v58; /*0x54d6bd*/
  return result; /*0x54d6ac*/

}
}