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
#include "e4/classes/LightSourceClass_e4.hpp"
#include "e4/classes/RadSiteClass_e4.hpp"
#include "e4/classes/TacticalClass_e4.hpp"

// 0x41D7E0
namespace gamemd {  // G42.18 ns repair
int Warhead::GetWarheadSound(int a2)
{
  int v3; // eax

  if ( (uint8_t)Audio::IsLoud((int *)(this->u32_4C + 336)) ) /*0x41d7ec*/
    v3 = this->q048; /*0x41d7f5*/
  else
    v3 = this->q044; /*0x41d7fa*/
  return !this->u32_F0 && v3 + this->q040 <= (int)dword_A8ED84 || a2 != this->u32_50; /*0x41d814*/
}  // G42.18 ns repair
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

  v2 = &this->u32_66C; /*0x452827*/
  v3 = (*(int (**)(Warhead *, int *))(this->u32_66C + 16))(&this->u32_66C, &a2); /*0x452834*/
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
  v6 = *(unsigned int *)&v2[8]; /*0x45285d*/
  if ( *(unsigned int *)&v2[16] < v6 /*0x452887*/
    || (((*((unsigned char *)&(v7))) = v2[13], (unsigned char)v7) || !v6)
    && (v7 = *(unsigned int *)&v2[20], v7 > 0)
    && ((*((unsigned char *)&(v7))) = (*(int (**)(Warhead *, int, unsigned int))(this->u32_674)(v2, v6 + v7, 0), (unsigned char)v7) )
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
  // w15f4: v3-export truncated tail (RHS lost): int v47; ... ...
  // live body via get_context/0x4690B0 — w15f4 regrafted decls only
  int v47; // ecx
  int v48; // eax
  int v49; // ecx
  int v50; // eax
  int v51; // ecx
  int v52; // eax
  unsigned int *v53; // edi
  unsigned int *v56; // edx
  int v57; // ecx
  int v58; // edx
  int v60; // edx
  int v61; // eax
  int v62; // ebx
  int v63; // eax
  int v64; // eax
  int v65; // edx
  unsigned char *v66; // eax
  int v67; // eax
  ObjectClass *v68; // eax
  int v69; // ecx
  unsigned int *v70; // eax
  int v71; // ecx
  int result; // eax
  char v73; // cl
  int v74; // ecx
  int v75; // edx
  int v76; // eax
  int *v77; // eax
  int landType; // ebx
  int v79; // ecx
  int v80; // eax
  ObjectClass *firstObject; // edi
  unsigned char *vtable3; // edi
  int v83; // ecx
  int v84; // edx
  void *v85; // ebx
  unsigned char *v86; // edx
  int v87; // eax
  AnimClass *v88; // edi
  void *v89; // eax
  int v90; // eax
  int v91; // ecx
  int v92; // ecx
  int v93; // eax
  char *v94; // ebx
  int v95; // eax
  Cell *v96; // edx
  int v97; // edx
  void *v98; // ebx
  int *v99; // edi
  int *v100; // eax
  AnimClass *v101; // edi
  int *v102; // eax
  int v103; // ecx
  int v104; // edx
  int v105; // eax
  int v106; // eax
  int *v107; // edi
  int v108; // edx
  unsigned int v109; // ebx
  int v110; // ecx
  int v111; // edx
  int *v112; // ebx
  char v113; // al
  int16_t v114; // cx
  int v115; // edx
  int v116; // eax
  int v117; // edx
  int v118; // ebx
  int *v119; // esi
  char v120; // al
  int16_t v121; // cx
  unsigned int v122; // edi
  unsigned int v123; // ebx
  int v124; // ecx
  int v125; // edx
  int v126; // eax
  void *v127; // edi
  AnimClass *v128; // esi
  void *v129; // eax
  double v130; // [esp+0h] [ebp-A8h]
  float v131; // [esp+0h] [ebp-A8h]
  int64_t v132; // [esp+0h] [ebp-A8h]
  int64_t v133; // [esp+0h] [ebp-A8h]
  char v134; // [esp+17h] [ebp-91h]
  double v135; // [esp+18h] [ebp-90h]
  void *NeighbourContent; // [esp+18h] [ebp-90h]
  int v137; // [esp+18h] [ebp-90h]
  int v138; // [esp+18h] [ebp-90h]
  double v139; // [esp+18h] [ebp-90h]
  int v141; // [esp+18h] [ebp-90h]
  int v142; // [esp+18h] [ebp-90h]
  int v143; // [esp+18h] [ebp-90h]
  double v144; // [esp+18h] [ebp-90h]
  double v146; // [esp+18h] [ebp-90h]
  Cell *v147; // [esp+20h] [ebp-88h] BYREF
  int v148; // [esp+24h] [ebp-84h]
  int v149[2]; // [esp+28h] [ebp-80h] BYREF
  double v150; // [esp+30h] [ebp-78h]
  char v151; // [esp+3Bh] [ebp-6Dh]
  int v152; // [esp+3Ch] [ebp-6Ch]
  int v153[2]; // [esp+40h] [ebp-68h]
  double v154; // [esp+48h] [ebp-60h]
  LPVOID ppv[2]; // [esp+50h] [ebp-58h] BYREF
  int v156[2]; // [esp+58h] [ebp-50h] BYREF
  int v157; // [esp+60h] [ebp-48h]
  int v158; // [esp+68h] [ebp-40h] BYREF
  int v159; // [esp+6Ch] [ebp-3Ch] BYREF
  int v160; // [esp+70h] [ebp-38h]
  unsigned int v161; // [esp+74h] [ebp-34h]
  char *v162; // [esp+78h] [ebp-30h]
  double v163; // [esp+7Ch] [ebp-2Ch] BYREF
  int64_t v164; // [esp+84h] [ebp-24h]
  int v165; // [esp+8Ch] [ebp-1Ch]
  double v166; // [esp+90h] [ebp-18h] BYREF
  double v167; // [esp+98h] [ebp-10h]
  int savedregs; // [esp+A8h] [ebp+0h] BYREF
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
  // w15f4: v3-export truncated tail (RHS lost): in... ...
  // live body via get_context/0x46A310 — w15f4 regrafted decls only
  int v66; // ebp
  int v67; // ecx
  int v68; // edx
  int v69; // ecx
  int v70; // edx
  char v71; // al
  unsigned char *v72; // eax
  unsigned char *v73; // eax
  double v74; // [esp+18h] [ebp-C8h]
  double v75; // [esp+18h] [ebp-C8h]
  double v76; // [esp+20h] [ebp-C0h]
  double v77; // [esp+20h] [ebp-C0h]
  double v78; // [esp+20h] [ebp-C0h]
  double v79; // [esp+20h] [ebp-C0h]
  double v80; // [esp+20h] [ebp-C0h]
  double v81; // [esp+20h] [ebp-C0h]
  double v82; // [esp+20h] [ebp-C0h]
  int v83[2]; // [esp+3Ch] [ebp-A4h] BYREF
  double v84; // [esp+44h] [ebp-9Ch]
  double v85; // [esp+4Ch] [ebp-94h]
  int16_t v86[2]; // [esp+54h] [ebp-8Ch] BYREF
  int v87[2]; // [esp+58h] [ebp-88h]
  int v88[2]; // [esp+60h] [ebp-80h]
  LPVOID v89; // [esp+68h] [ebp-78h] BYREF
  int v90; // [esp+6Ch] [ebp-74h]
  int16_t v91[4]; // [esp+70h] [ebp-70h] BYREF
  char v92[4]; // [esp+78h] [ebp-68h] BYREF
  int v93; // [esp+7Ch] [ebp-64h] BYREF
  int v94; // [esp+80h] [ebp-60h]
  int v95; // [esp+84h] [ebp-5Ch]
  int v96[2]; // [esp+88h] [ebp-58h]
  int v97[3]; // [esp+90h] [ebp-50h] BYREF
  int v98; // [esp+9Ch] [ebp-44h]
  int v99; // [esp+A0h] [ebp-40h] BYREF
  int v100; // [esp+A4h] [ebp-3Ch]
  int v101; // [esp+A8h] [ebp-38h]
  int v102; // [esp+ACh] [ebp-34h] BYREF
  int v103; // [esp+B0h] [ebp-30h]
  int v104; // [esp+B4h] [ebp-2Ch]
  LPVOID ppv; // [esp+B8h] [ebp-28h] BYREF
  int v106; // [esp+BCh] [ebp-24h]
  int v107; // [esp+C0h] [ebp-20h]
  int v108; // [esp+C4h] [ebp-1Ch]
  int v109; // [esp+C8h] [ebp-18h]
  char v110[4]; // [esp+CCh] [ebp-14h]
  int v111; // [esp+D0h] [ebp-10h]
  unsigned char v112[12]; // [esp+D4h] [ebp-Ch] BYREF
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

  v28 = *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 6160); /*0x65b5a3*/
  v29 = *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 6164); /*0x65b5a7*/
  this->u32_28 = *(unsigned int *)&stru_A8EB00.?[416]; /*0x65b5ab*/
  this->u32_2C = v32; /*0x65b5b3*/
  this->u32_30 = v28; /*0x65b5b9*/
  this->q034 = *(unsigned int *)&stru_A8EB00.?[416]; /*0x65b5c2*/
  this->u32_38 = v32; /*0x65b5c8*/
  this->u8_3C = v29; /*0x65b5cb*/
  v2 = *(unsigned int *)&g_RulesClass_Instance; /*0x65b5ce*/
  v3 = *(unsigned __int8 *)(*(unsigned int *)&g_RulesClass_Instance + 6194); /*0x65b5e2*/
  v4 = *(unsigned __int8 *)(*(unsigned int *)&g_RulesClass_Instance + 6193); /*0x65b5e8*/
  v5 = *(unsigned __int8 *)(*(unsigned int *)&g_RulesClass_Instance + 6192); /*0x65b5f5*/
  if ( dword_A8B230[130].uniqueId == 1 ) /*0x65b5fb*/
  {
    v3 = -128; /*0x65b5fd*/
    v5 = -128; /*0x65b602*/
  }
  v25 = 1000 * v5 / 255; /*0x65b62a*/
  v6 = (double)this->u32_4C * *(double *)(*(unsigned int *)&g_RulesClass_Instance + 6176); /*0x65b63e*/
  v30 = this->q048; /*0x65b679*/
  v27 = 1000 * v3 / 255; /*0x65b684*/
  if ( v6 > 2000.0 ) /*0x65b68b*/
    v6 = 2000.0; /*0x65b68f*/
  LOWORD(v7) = Math::RoundToInt(v6); /*0x65b695*/
  v8 = v7; /*0x65b69e*/
  v9 = (double)v25 * v2->u64_1828; /*0x65b6a0*/
  if ( v9 > 2000.0 ) /*0x65b6b3*/
    v9 = 2000.0; /*0x65b6b7*/
  LOWORD(v10) = Math::RoundToInt(v9); /*0x65b6bd*/
  v26 = v10; /*0x65b6c6*/
  v11 = (double)(1000 * v4 / 255) * v2->u64_1828; /*0x65b6ca*/
  if ( v11 > 2000.0 ) /*0x65b6dd*/
    v11 = 2000.0; /*0x65b6e1*/
  LOWORD(v12) = Math::RoundToInt(v11); /*0x65b6e7*/
  v13 = v12; /*0x65b6f0*/
  v14 = (double)v27 * v2->u64_1828; /*0x65b6f2*/
  if ( v14 > 2000.0 ) /*0x65b705*/
    v14 = 2000.0; /*0x65b709*/
  LOWORD(v15) = Math::RoundToInt(v14); /*0x65b70f*/
  v16 = this->u32_6C; /*0x65b714*/
  v17 = v15; /*0x65b71b*/
  this->u32_58 = v26; /*0x65b71f*/
  this->u32_5C = v13; /*0x65b722*/
  this->u32_60 = v15; /*0x65b72a*/
  this->q054 = v8; /*0x65b72d*/
  this->u32_50 = v16 / v28; /*0x65b730*/
  v18 = v16 / v29; /*0x65b73a*/
  this->u32_64 = v18; /*0x65b741*/
  this->u32_68 = v8 / v18; /*0x65b749*/
  v19 = CellCoord::To_CellObj((CellCoord *)&DataGlobal_87F7E8, &this->u32_80); /*0x65b750*/
  v20 = (int *)(*(int (**)(void *, unsigned char *))(*(unsigned int *)v19 + 72))(v19, v35); /*0x65b75e*/
  v31 = *v20; /*0x65b763*/
  v33 = v20[1]; /*0x65b76a*/
  v21 = this->u32_24; /*0x65b76e*/
  v34 = v20[2]; /*0x65b776*/
  if ( v21 ) /*0x65b77a*/
  {
    TacticalClass::UpdateScrollTarget(v21, v8, v26, v13, v17, 0); /*0x65b7e8*/
    return RadSiteClass::Radiate((int)this); /*0x65b7ef*/
  }
  else
  {
    v22 = (LightSourceClass *)__2_YAPAXI_Z(0x4Cu); /*0x65b77e*/
    if ( v22 ) /*0x65b788*/
      v23 = LightSourceClass::Construct(v22, v31, v33, v34, v30, v8, v26, v13, v17); /*0x65b7b2*/
    else
      v23 = 0; /*0x65b7b9*/
    this->u32_24 = v23; /*0x65b7bb*/
    v23[13] = 0; /*0x65b7be*/
    Trigger::EnableOnce(*((Trigger **)this + 9), 0); /*0x65b7ca*/
    return RadSiteClass::Radiate((int)this); /*0x65b7d1*/
  }

}
} // namespace gamemd