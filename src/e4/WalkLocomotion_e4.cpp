// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/WalkLocomotion_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/Team_e4.hpp"
#include "e4/classes/MEMORY_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/WarheadTypeClass_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/ParticleSystemTypeClass_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/WaveClass_e4.hpp"
#include "e4/classes/WaypointClass_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/Warhead_e4.hpp"
#include "e4/classes/WaypointPathClass_e4.hpp"
#include "e4/classes/Particle_e4.hpp"
#include "e4/classes/Trigger_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/WalkLocomotionClass_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/ScriptAction_e4.hpp"

// 0x6A01A0
namespace gamemd {
AbstractClass * * WalkLocomotion::MoveTo(unsigned int *aP1, int aP3)
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
  if ( *aP1 != g_OverlayTypeConfig || aP1[1] != (unsigned int)qword_B077FC || (v5 = aP1[2], v5 != HIDWORD(qword_B077FC)) ) /*0x6a01ce*/
  {
    LOBYTE(v5) = *((unsigned char *)this + 96); /*0x6a01d4*/
    v6 = aP3; /*0x6a01d7*/
    if ( !(unsigned char)v5 ) /*0x6a01dd*/
    {
      v5 = *((unsigned int *)this + 22); /*0x6a01e3*/
      if ( v5 != -1 ) /*0x6a01e9*/
      {
        v5 = (&byte_7F2A40)[12 * v5]; /*0x6a01f2*/
        if ( v5 ) /*0x6a01fc*/
        {
          v7 = 4 * v5; /*0x6a0202*/
          v8 = ((unsigned int *)(dword_7F2960))[v7]; /*0x6a0205*/
          v5 = ((unsigned int *)(dword_7F296C))[v7]; /*0x6a020b*/
          if ( v5 > -1 ) /*0x6a0214*/
          {
            v9 = (int *)(v8 + 12 * v5); /*0x6a021d*/
            aP3 = v9[2]; /*0x6a0223*/
            if ( *((unsigned int *)this + 23) < v5 ) /*0x6a022c*/
            {
              v10 = v9[1]; /*0x6a0234*/
              v18[0] = *v9; /*0x6a0237*/
              v18[1] = v10; /*0x6a023f*/
              v5 = (int)((WalkLocomotion *)((gamemd::ObjectClass *)((WalkLocomotion *)this)))->TransformCoords( (unsigned int *)((IUnknown *)(&v19)), (int *)(v18), (int *)((gamemd::ObjectClass *)(&aP3))); /*0x6a0250*/
              v11 = *(unsigned int *)v5; /*0x6a0255*/
              v12 = *(unsigned int *)(v5 + 4); /*0x6a0259*/
              if ( !v6 ) /*0x6a025c*/
              {
                v13 = (*(int (**)(unsigned int))(**(unsigned int **)&this->q00C + 464))(*((unsigned int *)this + 3)); /*0x6a0263*/
                v14 = *((unsigned int *)this + 3); /*0x6a0269*/
                v19 = v11; /*0x6a026c*/
                v20 = v12; /*0x6a0270*/
                v21 = v13; /*0x6a0274*/
                (*(void (**)(int, int *))(*(unsigned int *)v14 + 244))( v14, (int *)(&v19)); /*0x6a027f*/
LOBYTE(v5) = (*(char (**)(unsigned int, unsigned int *))(**(unsigned int **)&this->q00C + 244))( /*0x6a028f*/ *((unsigned int *)this + 3), (unsigned int *)(aP1));


                return (gamemd::AbstractClass **)(v5);
              }
              if ( v6 == 1 || v6 == 3 ) /*0x6a02a7*/
              {
                v15 = (*(int (**)(unsigned int))(**(unsigned int **)&this->q00C + 464))(*((unsigned int *)this + 3)); /*0x6a02ae*/
                v16 = *((unsigned int *)this + 3); /*0x6a02b4*/
                v21 = v15; /*0x6a02b7*/
                v19 = v11; /*0x6a02bb*/
                v20 = v12; /*0x6a02bf*/
                LOBYTE(v5) = (*(int (**)(int, int *))(*(unsigned int *)v16 + 240))( v16, (int *)(&v19)); /*0x6a02ca*/
              }
              v3 = (unsigned int *)(aP1);
            }
          }
        }
      }
    }
    if ( v6 ) /*0x6a02d6*/
    {
      if ( v6 == 1 || v6 == 3 ) /*0x6a02f6*/
LOBYTE(v5) = (*(char (**)(unsigned int, unsigned int *))(**(unsigned int **)&this->q00C + 240))( /*0x6a02fe*/ *((unsigned int *)this + 3), (unsigned int *)(v3));


    }
    else
    {
LOBYTE(v5) = (*(char (**)(unsigned int, unsigned int *))(**(unsigned int **)&this->q00C + 244))( /*0x6a02de*/ *((unsigned int *)this + 3), (unsigned int *)(v3));


    }
  }
  return (gamemd::AbstractClass **)(v5);

}
}
// 0x6A05F0
namespace gamemd {
void WalkLocomotion::ProcessCollision(char a2, void *a2_2)
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
  int v14; // esi
  char v15; // bl
  int v16; // edx
  int v17; // eax
  int v18; // eax
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
  int16_t v44; // cx
  int v45; // eax
  int v46; // esi
  int v47; // ecx
  unsigned int *v48; // ecx
  int v49; // eax
  int v50; // edx
  int v51; // eax
  int v52... [41340 chars total]
}
} // namespace gamemd

// 0x6A1C80
namespace gamemd {
int WalkLocomotion::Update(unsigned char * a2, int a3, int a4, void *a4_2)
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
  unsigned int *v48; //... [57624 chars total]
}

} // namespace gamemd

// 0x6A3DB0
namespace gamemd {
unsigned int * WalkLocomotion::TransformCoords(unsigned int *aP1, int *aP2, int *aP3)
{

  int v4; // eax
  int v5; // ebx
  int v6; // edi
  int v7; // esi
  char *WalkLocomotion_field_0x40; // edx
  char *WalkLocomotion_field_0x44; // ecx

  v4 = (int)(*aP3);
  v5 = (int)((&dword_7F2A48)[3 * (int)this->WalkLocomotion_field_0x58]);
  v6 = (int)(*aP2);
  v7 = (int)(aP2[1]);
  if ( (v5 & 1) != 0 ) /*0x6a3dd4*/
  {
    v6 = (int)(aP2[1]);
    v7 = (int)(*aP2);
    v4 = (uint8_t)(-64 - v4); /*0x6a3de9*/
  }
  if ( (v5 & 2) != 0 ) /*0x6a3dee*/
  {
    v6 = -v6; /*0x6a3df2*/
    v4 = (uint8_t)-(char)v4; /*0x6a3df4*/
  }
  if ( (v5 & 4) != 0 ) /*0x6a3dfc*/
  {
    v7 = -v7; /*0x6a3e05*/
    v4 = (uint8_t)(0x80 - v4); /*0x6a3e0d*/
  }
  *(unsigned int *)aP3 = v4; /*0x6a3e0f*/
  WalkLocomotion_field_0x40 = (char *)this->WalkLocomotion_field_0x40; /*0x6a3e12*/
  WalkLocomotion_field_0x44 = (char *)this->WalkLocomotion_field_0x44; /*0x6a3e15*/
  *aP1 = (unsigned int)(&WalkLocomotion_field_0x40[v6]); /*0x6a3e22*/
  aP1[1] = (unsigned int)(&WalkLocomotion_field_0x44[v7]); /*0x6a3e25*/
  return aP1; /*0x6a3e20*/

}
}