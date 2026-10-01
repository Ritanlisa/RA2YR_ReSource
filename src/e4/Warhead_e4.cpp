// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/Particle_e4.hpp"
#include "e4/classes/Team_e4.hpp"
#include "e4/classes/Trigger_e4.hpp"
#include "e4/classes/Warhead_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/ParticleSystemTypeClass_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/WaveClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/Waypoint_e4.hpp"
#include "e4/classes/WaypointPathClass_e4.hpp"
#include "e4/classes/Init_e4.hpp"
#include "e4/classes/WarheadTypeClass_e4.hpp"
#include "e4/classes/Array_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/WalkLocomotion_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/CoordStruct_e4.hpp"
#include "e4/classes/AirstrikeClass_e4.hpp"
#include "e4/classes/E4Recv_487C80_e4.hpp"
#include "e4/classes/FootClass_e4.hpp"
#include "e4/classes/MPCooperative_e4.hpp"
#include "e4/classes/ParasiteClass_e4.hpp"
#include "e4/classes/Return_e4.hpp"
#include "e4/classes/SlaveManagerClass_e4.hpp"
#include "e4/classes/TeamClass_e4.hpp"

// 0x41D7E0
namespace gamemd {
int Warhead::GetWarheadSound(int a2)
{

  int v3; // eax

  if ( (uint8_t)Audio::IsLoud((int *)(*((unsigned int *)this + 19) + 336)) ) /*0x41d7ec*/
    v3 = *((unsigned int *)this + 18); /*0x41d7f5*/
  else
    v3 = *((unsigned int *)this + 17); /*0x41d7fa*/
  return !*((unsigned int *)this + 60) && v3 + *((unsigned int *)this + 16) <= (int)dword_A8ED84 || a2 != *((unsigned int *)this + 20); /*0x41d814*/

}
} // namespace gamemd
// 0x452820
namespace gamemd {
int Warhead::RemoveFromDamageList(int a2)
{

  Warhead *v2; // esi
  int v3; // eax
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // eax
  int v8; // edx

  v2 = (gamemd::Warhead *)((unsigned int *)this + 1644);
  v3 = (*(int (**)(Warhead *, int *))(*((unsigned int *)this + 411) + 16))((unsigned int *)this + 1644, &a2); /*0x452834*/
  if ( v3 != -1 ) /*0x45283a*/
  {
    v4 = *(unsigned int *)&v2[16]; /*0x45283c*/
    if ( v3 < v4 ) /*0x452841*/
    {
      v5 = v4 - 1; /*0x452843*/
      for ( *(unsigned int *)&v2[16] = v5; /*0x452849*/
            v3 < *(unsigned int *)&v2[16];
            *(unsigned int *)(*(unsigned int *)&v2[4] + 4 * v3 - 4) = *(unsigned int *)(*(unsigned int *)&v2[4] + 4 * v3) )
      {
        ++v3; /*0x45284e*/
      }
    }
  }
  v6 = (BYTE)(*(unsigned int *)&v2[8]);
  if ( *(unsigned int *)&v2[16] < v6 /*0x452887*/
    || ((LOBYTE(v7) = v2[13], (unsigned char)v7) || !v6)
    && (v7 = *(unsigned int *)&v2[20], v7 > 0)
    && (LOBYTE(v7) = (*(int (**)(Warhead *, int, unsigned int))(*(unsigned int *)v2 + 8))(v2, v6 + v7, 0), (unsigned char)v7) )
  {
    v7 = *(unsigned int *)&v2[16]; /*0x452889*/
    v8 = *(unsigned int *)&v2[4]; /*0x45288c*/
    *(unsigned int *)&v2[16] = v7 + 1; /*0x452892*/
    *(unsigned int *)(v8 + 4 * v7) = a2; /*0x452899*/
  }
  return v7; /*0x45289c*/

}
} // namespace gamemd
// 0x4690B0
namespace gamemd {
int Warhead::ApplyDamage(ObjectClass * aP1)
{
    unsigned int v12 = 0;  /* G37 hoist */

  double v2; // st7
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // ecx
  int v8; // ecx
  int v9; // edi
  int v11; // eax
  Concurrency::details::SchedulerBase *v12; // ebx
  RadSiteClass *NumberOfActiveVirtualProcessors_SchedulerBase_details_Concurrency__uint_BEIXZ; // eax
  RadSiteClass *v14; // eax
  RadSiteClass *v15; // edi
  unsigned char *v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // edi
  bool v20; // bl
  TeamClass *v21; // ecx
  int *v22; // edi
  int v23; // eax
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  int v27; // eax
  int v28; // eax
  int v29; // ecx
  unsigned int *v30; // edi
  int v31; // eax
  int v32; // ecx
  int v33; // edi
  Team *v34; // eax
  unsigned int *Member; // ebx
  int v36; // edi
  int v37; // eax
  int *v38; // eax
  CellClass *v39; // eax
  TechnoClass *v40; // ecx
  int v41; // eax
  int v42; // ecx
  int v43; // edi
  int v44; // ecx
  int v45; // ecx
  int v47; ... [32997 chars total]
}
} // namespace gamemd

// 0x46A310
namespace gamemd {
int Warhead::ApplyPostDamageEffects()
{

  double v1; // st7
  int v3; // eax
  int v4; // esi
  int *v5; // ecx
  int v6; // ebx
  int v7; // ebp
  int v8; // edx
  unsigned int *v9; // eax
  int *v10; // eax
  int result; // eax
  int v12; // eax
  int v13; // edx
  int v15; // ecx
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  int *v19; // ecx
  int v20; // edx
  bool v21; // cc
  unsigned short *v22; // ebx
  int16_t v23; // ax
  unsigned char *v24; // ebp
  int v25; // eax
  char v26; // al
  int v27; // edx
  int v28; // ebx
  int v29; // eax
  int *v30; // ebx
  int v31; // ecx
  int v32; // edx
  int16_t v34; // ax
  int v41; // ecx
  int v42; // edx
  char v43; // al
  TechnoClass *v44; // ecx
  TechnoClass *v45; // ecx
  int16_t v46; // ax
  int16_t v47; // ax
  char v48; // dl
  int v49; // ecx
  int v50; // eax
  int v51; // ebx
  int v52; // ebp
  int *v53; // eax
  int *v54; // ebx
  int v55; // edx
  int16_t v57; // ax
  int16_t v58; // bp
  int v61; // ebp
  in... [26032 chars total]
}
} // namespace gamemd
// 0x65B580
namespace gamemd {
int Warhead::ProcessDamageArea()
{

  int v2; // edi
  int v3; // ebx
  int v4; // ebp
  int v5; // eax
  double v6; // st7
  int v7; // eax
  int v8; // ebx
  double v9; // st7
  int v10; // eax
  double v11; // st7
  int v12; // eax
  int v13; // ebp
  double v14; // st7
  int v15; // eax
  int v16; // ecx
  int v17; // edi
  int v18; // ecx
  void *v19; // eax
  int *v20; // eax
  int v21; // ecx
  LightSourceClass *v22; // eax
  unsigned int *v23; // eax
  int v25; // [esp+10h] [ebp-30h]
  int v26; // [esp+10h] [ebp-30h]
  int v27; // [esp+18h] [ebp-28h]
  int v28; // [esp+1Ch] [ebp-24h]
  int v29; // [esp+20h] [ebp-20h]
  int v30; // [esp+24h] [ebp-1Ch]
  int v31; // [esp+28h] [ebp-18h]
  int v32; // [esp+2Ch] [ebp-14h]
  int v33; // [esp+2Ch] [ebp-14h]
  int v34; // [esp+30h] [ebp-10h]
  unsigned char v35[12]; // [esp+34h] [ebp-Ch] BYREF

  v28 = *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 6160); /*0x65b5a3*/
  v29 = *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 6164); /*0x65b5a7*/
  *((unsigned int *)this + 10) = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x65b5ab*/
  *((unsigned int *)this + 11) = v32; /*0x65b5b3*/
  *((unsigned int *)this + 12) = v28; /*0x65b5b9*/
  *((unsigned int *)this + 13) = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x65b5c2*/
  *((unsigned int *)this + 14) = v32; /*0x65b5c8*/
  *((unsigned int *)this + 15) = v29; /*0x65b5cb*/
  v2 = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324]; /*0x65b5ce*/
  v3 = *(uint8_t *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 6194); /*0x65b5e2*/
  v4 = *(uint8_t *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 6193); /*0x65b5e8*/
  v5 = *(uint8_t *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 6192); /*0x65b5f5*/
  if ( ((unsigned int *)(dword_A8B230))[130].uniqueId == 1 ) /*0x65b5fb*/
  {
    v3 = -128; /*0x65b5fd*/
    v5 = -128; /*0x65b602*/
  }
  v25 = 1000 * v5 / 255; /*0x65b62a*/
  v6 = (double)*((int *)this + 19) * *(double *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 6176); /*0x65b63e*/
  v30 = *((unsigned int *)this + 18); /*0x65b679*/
  v27 = 1000 * v3 / 255; /*0x65b684*/
  if ( v6 > 2000.0 ) /*0x65b68b*/
    v6 = 2000.0; /*0x65b68f*/
  LOWORD(v7) = Math::RoundToInt(v6); /*0x65b695*/
  v8 = v7; /*0x65b69e*/
  v9 = (double)v25 * *(double *)(v2 + 6184); /*0x65b6a0*/
  if ( v9 > 2000.0 ) /*0x65b6b3*/
    v9 = 2000.0; /*0x65b6b7*/
  LOWORD(v10) = Math::RoundToInt(v9); /*0x65b6bd*/
  v26 = v10; /*0x65b6c6*/
  v11 = (double)(1000 * v4 / 255) * *(double *)(v2 + 6184); /*0x65b6ca*/
  if ( v11 > 2000.0 ) /*0x65b6dd*/
    v11 = 2000.0; /*0x65b6e1*/
  LOWORD(v12) = Math::RoundToInt(v11); /*0x65b6e7*/
  v13 = v12; /*0x65b6f0*/
  v14 = (double)v27 * *(double *)(v2 + 6184); /*0x65b6f2*/
  if ( v14 > 2000.0 ) /*0x65b705*/
    v14 = 2000.0; /*0x65b709*/
  LOWORD(v15) = Math::RoundToInt(v14); /*0x65b70f*/
  v16 = *((unsigned int *)this + 27); /*0x65b714*/
  v17 = v15; /*0x65b71b*/
  *((unsigned int *)this + 22) = v26; /*0x65b71f*/
  *((unsigned int *)this + 23) = v13; /*0x65b722*/
  *((unsigned int *)this + 24) = v15; /*0x65b72a*/
  *((unsigned int *)this + 21) = v8; /*0x65b72d*/
  *((unsigned int *)this + 20) = v16 / v28; /*0x65b730*/
  v18 = v16 / v29; /*0x65b73a*/
  *((unsigned int *)this + 25) = v18; /*0x65b741*/
  *((unsigned int *)this + 26) = v8 / v18; /*0x65b749*/
  v19 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (int16_t *)this + 32); /*0x65b750*/
  v20 = (int *)(*(int (**)(void *, unsigned char *))(*(unsigned int *)v19 + 72))(v19, v35); /*0x65b75e*/
  v31 = *v20; /*0x65b763*/
  v33 = v20[1]; /*0x65b76a*/
  v21 = *((unsigned int *)this + 9); /*0x65b76e*/
  v34 = v20[2]; /*0x65b776*/
  if ( v21 ) /*0x65b77a*/
  {
    TacticalClass::UpdateScrollTarget(v21, v8, v26, v13, v17, 0); /*0x65b7e8*/
    return RadSiteClass::Radiate((int)this); /*0x65b7ef*/
  }
  else
  {
    v22 = (gamemd::LightSourceClass *)((unsigned int)((LightSourceClass *)__2_YAPAXI_Z(0x4Cu)));
    if ( v22 ) /*0x65b788*/
      v23 = LightSourceClass::Construct(v22, v31, v33, v34, v30, v8, v26, v13, v17); /*0x65b7b2*/
    else
      v23 = 0; /*0x65b7b9*/
    *((unsigned int *)this + 9) = (unsigned int)(v23); /*0x65b7bb*/
    v23[13] = 0; /*0x65b7be*/
    Trigger::EnableOnce(*((Trigger **)this + 9), 0); /*0x65b7ca*/
    return RadSiteClass::Radiate((int)this); /*0x65b7d1*/
  }

}
} // namespace gamemd