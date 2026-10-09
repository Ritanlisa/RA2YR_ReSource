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
  _DWORD *v3; // edx
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

  v3 = aP1; /*0x6a01a0*/
  if ( *aP1 != g_OverlayTypeConfig || aP1[1] != (_DWORD)qword_B077FC || (v5 = aP1[2], v5 != IDA_HIDWORD(qword_B077FC)) ) /*0x6a01ce*/
  {
    IDA_LOBYTE(v5) = this->ptr_60; /*0x6a01d4*/
    v6 = aP3; /*0x6a01d7*/
    if ( !(_BYTE)v5 ) /*0x6a01dd*/
    {
      v5 = this->q058; /*0x6a01e3*/
      if ( v5 != -1 ) /*0x6a01e9*/
      {
        v5 = byte_7F2A40[12 * v5]; /*0x6a01f2*/
        if ( v5 ) /*0x6a01fc*/
        {
          v7 = 4 * v5; /*0x6a0202*/
          v8 = dword_7F2960[v7]; /*0x6a0205*/
          v5 = dword_7F296C[v7]; /*0x6a020b*/
          if ( v5 > -1 ) /*0x6a0214*/
          {
            v9 = (int *)(v8 + 12 * v5); /*0x6a021d*/
            aP3 = v9[2]; /*0x6a0223*/
            if ( this->q05C < v5 ) /*0x6a022c*/
            {
              v10 = v9[1]; /*0x6a0234*/
              v18[0] = *v9; /*0x6a0237*/
              v18[1] = v10; /*0x6a023f*/
              v5 = (int)WalkLocomotion::TransformCoords((WalkLocomotion *)this, &v19, v18, &aP3); /*0x6a0250*/
              v11 = *(_DWORD *)v5; /*0x6a0255*/
              v12 = *(_DWORD *)(v5 + 4); /*0x6a0259*/
              if ( !v6 ) /*0x6a025c*/
              {
                v13 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(&this->q0042) + 464))(this->q00C); /*0x6a0263*/
                v14 = this->q00C; /*0x6a0269*/
                v19 = v11; /*0x6a026c*/
                v20 = v12; /*0x6a0270*/
                v21 = v13; /*0x6a0274*/
                (*(void (__thiscall **)(int, int *))(*(_DWORD *)v14 + 244))(v14, &v19); /*0x6a027f*/
                IDA_LOBYTE(v5) = (*(char (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(&this->q0042) + 244))( /*0x6a028f*/
                               this->q00C,
                               aP1);
                return v5; /*0x6a029c*/
              }
              if ( v6 == 1 || v6 == 3 ) /*0x6a02a7*/
              {
                v15 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(&this->q0042) + 464))(this->q00C); /*0x6a02ae*/
                v16 = this->q00C; /*0x6a02b4*/
                v21 = v15; /*0x6a02b7*/
                v19 = v11; /*0x6a02bb*/
                v20 = v12; /*0x6a02bf*/
                IDA_LOBYTE(v5) = (*(int (__thiscall **)(int, int *))(*(_DWORD *)v16 + 240))(v16, &v19); /*0x6a02ca*/
              }
              v3 = aP1; /*0x6a02d0*/
            }
          }
        }
      }
    }
    if ( v6 ) /*0x6a02d6*/
    {
      if ( v6 == 1 || v6 == 3 ) /*0x6a02f6*/
        IDA_LOBYTE(v5) = (*(char (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(&this->q0042) + 240))( /*0x6a02fe*/
                       this->q00C,
                       v3);
    }
    else
    {
      IDA_LOBYTE(v5) = (*(char (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(&this->q0042) + 244))( /*0x6a02de*/
                     this->q00C,
                     v3);
    }
  }
  return v5; /*0x6a0295*/
}
}
// 0x6A05F0
namespace gamemd {
char WalkLocomotion::ProcessCollision(char a2, void *a2_2)
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
  // w15f4: v3-export truncated tail (RHS lost): int v52... ...
  // live body via get_context/0x6A05F0 — w15f4 regrafted decls only
  int v52; // ecx
  int v53; // eax
  unsigned int *v54; // eax
  int v55; // esi
  int *v56; // eax
  int v57; // edi
  int v58; // ecx
  int v59; // kr28_4
  int v60; // eax
  int v61; // edi
  unsigned int *v62; // esi
  unsigned int *v63; // ebx
  int v64; // ecx
  int v65; // eax
  int *v66; // edi
  signed int v67; // esi
  ObjectClass *v68; // eax
  ObjectClass *v69; // esi
  ObjectClass *nextObject; // ebx
  void *vtable0; // edx
  int v72; // edx
  unsigned char *v73; // ecx
  int v74; // eax
  int v75; // esi
  char v76; // bl
  int v77; // eax
  char v78; // bl
  int16_t v79; // cx
  int v80; // eax
  unsigned int *v81; // ecx
  int v82; // eax
  int16_t v83; // dx
  char *v84; // ebx
  char v85; // al
  ObjectClass *v86; // ecx
  unsigned int *v87; // esi
  int referenceCount; // eax
  int v89; // edx
  int v90; // eax
  int v91; // edi
  int v92; // edx
  void *v93; // edi
  void *v94; // eax
  unsigned int v95; // eax
  int v96; // eax
  bool v97; // zf
  int v98; // eax
  int v99; // ecx
  unsigned char *v100; // eax
  int v101; // edx
  int v102; // edx
  int v103; // ecx
  int v104; // edi
  int v105; // edx
  CellClass *v106; // eax
  CellClass *v107; // eax
  int v108; // edx
  int *v109; // ecx
  int v110; // edi
  int level; // ecx
  CellClass *v112; // eax
  bool v113; // cc
  int v114; // eax
  unsigned char *v115; // eax
  int v116; // eax
  int v117; // edi
  unsigned int *v118; // esi
  int v119; // ecx
  int v120; // edx
  int v121; // eax
  int v122; // ebx
  int v123; // ecx
  int v124; // ebx
  int v125; // eax
  int v126; // ecx
  char v127; // al
  int v128; // eax
  int v129; // eax
  int v130; // ecx
  unsigned int *v131; // eax
  int v132; // edi
  int v133; // ebx
  unsigned short *v134; // eax
  int64_t v135; // rax
  FootClass *v136; // ecx
  int v137; // edx
  int v138; // eax
  int v139; // esi
  int v140; // ecx
  int v141; // eax
  int *v142; // eax
  int v143; // esi
  int v144; // ebx
  int *v145; // eax
  int v146; // ecx
  int v147; // eax
  unsigned int *v148; // ebx
  int v149; // ecx
  int v150; // esi
  int v151; // ebx
  CellClass *v152; // esi
  double v153; // st7
  int *v154; // eax
  int v155; // edx
  CellClass *v156; // edi
  CellClass *v157; // eax
  unsigned int *v158; // ebx
  unsigned int v159; // edx
  int v160; // ebx
  uint64_t v161; // kr30_8
  CellClass *v162; // eax
  int v163; // ecx
  int v164; // eax
  int v165; // edi
  int v166; // edi
  CellClass *v167; // ecx
  CellClass *v168; // eax
  char v169; // bl
  int v170; // [esp+20h] [ebp-104h]
  int LandHeight; // [esp+24h] [ebp-100h]
  int v172; // [esp+2Ch] [ebp-F8h]
  float v173; // [esp+2Ch] [ebp-F8h]
  bool v174; // [esp+43h] [ebp-E1h]
  char v175; // [esp+43h] [ebp-E1h]
  char v176; // [esp+43h] [ebp-E1h]
  char v177[4]; // [esp+44h] [ebp-E0h] BYREF
  unsigned int v178[3]; // [esp+48h] [ebp-DCh] BYREF
  double v179; // [esp+54h] [ebp-D0h] BYREF
  int v180; // [esp+5Ch] [ebp-C8h]
  int16_t v181[2]; // [esp+60h] [ebp-C4h] BYREF
  int v182; // [esp+64h] [ebp-C0h]
  int v183; // [esp+68h] [ebp-BCh]
  unsigned int v184; // [esp+6Ch] [ebp-B8h] BYREF
  int v185; // [esp+70h] [ebp-B4h]
  int v186; // [esp+74h] [ebp-B0h] BYREF
  int v187; // [esp+78h] [ebp-ACh] BYREF
  int v188; // [esp+7Ch] [ebp-A8h]
  int v189; // [esp+80h] [ebp-A4h]
  int v190; // [esp+84h] [ebp-A0h]
  CellClass *v191; // [esp+88h] [ebp-9Ch] BYREF
  CellClass *v192; // [esp+8Ch] [ebp-98h]
  int16_t v193[2]; // [esp+90h] [ebp-94h] BYREF
  int v194; // [esp+94h] [ebp-90h] BYREF
  int v196; // [esp+9Ch] [ebp-88h]
  int v197; // [esp+A0h] [ebp-84h]
  uint64_t v198; // [esp+A4h] [ebp-80h] BYREF
  int v199; // [esp+ACh] [ebp-78h]
  int v200; // [esp+B0h] [ebp-74h] BYREF
  int v201; // [esp+B4h] [ebp-70h]
  int v202; // [esp+B8h] [ebp-6Ch]
  int16_t v203[2]; // [esp+BCh] [ebp-68h] BYREF
  int v204; // [esp+C0h] [ebp-64h]
  int v205; // [esp+C4h] [ebp-60h]
  char *v206; // [esp+C8h] [ebp-5Ch]
  int v207; // [esp+CCh] [ebp-58h] BYREF
  int v208; // [esp+D0h] [ebp-54h]
  int v209; // [esp+D4h] [ebp-50h]
  unsigned int v210; // [esp+D8h] [ebp-4Ch]
  int v211; // [esp+DCh] [ebp-48h] BYREF
  int v212; // [esp+E0h] [ebp-44h]
  int v213; // [esp+E4h] [ebp-40h]
  uint64_t v214; // [esp+E8h] [ebp-3Ch] BYREF
  int v215; // [esp+F0h] [ebp-34h]
  unsigned int v216[3]; // [esp+F4h] [ebp-30h] BYREF
  int v217; // [esp+100h] [ebp-24h] BYREF
  int v218; // [esp+104h] [ebp-20h]
  int v219; // [esp+108h] [ebp-1Ch]
  unsigned int v220[4]; // [esp+10Ch] [ebp-18h] BYREF
  int v221; // [esp+11Ch] [ebp-8h]
  int v222; // [esp+120h] [ebp-4h]
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
  int64_t v52; // rax
  unsigned int *v53; // ecx
  int v54; // eax
  int v55; // eax
  unsigned int *v56; // ecx
  unsigned int *v57; // eax
  int v58; // kr10_4
  int v59; // edx
  int16_t v60; // cx
  unsigned char *v61; // ecx
  int v62; // esi
  void *v63; // eax
  int v64; // eax
  int v65; // eax
  unsigned int *v66; // esi
  unsigned int *v67; // ecx
  int v68; // edi
  int v69; // eax
  int v70; // eax
  unsigned int *v71; // eax
  unsigned int *v72; // eax
  unsigned int *v73; // ecx
  int64_t v74; // rax
  unsigned int *v75; // ecx
  unsigned int *v76; // ecx
  int64_t v77; // rax
  int *v78; // eax
  int v79; // edx
  int v80; // eax
  char *v81; // eax
  int v82; // ecx
  int v83; // edi
  unsigned int *v84; // eax
  unsigned int *v85; // eax
  int v86; // ecx
  int v87; // edx
  unsigned int *v88; // eax
  int v89; // ecx
  unsigned int *v90; // esi
  int v91; // eax
  int v92; // ecx
  int v93; // eax
  int v94; // edx
  int v95; // esi
  int v96; // edx
  unsigned int *v97; // ebx
  int v98; // eax
  int v99; // eax
  unsigned int *v100; // edx
  int v101; // ecx
  int v102; // ecx
  int v103; // edi
  int v104; // esi
  int v105; // eax
  int v106; // edx
  int v107; // eax
  char v108; // bl
  unsigned int *v109; // ecx
  unsigned int *v110; // edx
  wchar_t *v111; // eax
  unsigned int *v112; // eax
  unsigned int *v113; // eax
  int v114; // edx
  int v115; // eax
  double v116; // st7
  unsigned int *v117; // ecx
  int64_t v118; // rax
  unsigned int *v119; // ecx
  unsigned int *v120; // edx
  int v121; // esi
  int v122; // ecx
  unsigned int *v123; // eax
  unsigned int *v124; // eax
  char v125; // al
  int v126; // ecx
  wchar_t *v127; // esi
  wchar_t *v128; // eax
  wchar_t *v129; // ecx
  wchar_t **v130; // edx
  unsigned int *v131; // eax
  unsigned int *v132; // eax
  int Object; // eax
  int *v134; // ecx
  int v135; // esi
  unsigned int *v136; // eax
  int v137; // eax
  int v138; // esi
  void *v139; // eax
  unsigned int *v140; // eax
  int v142; // esi
  unsigned int *v143; // edx
  int v144; // edi
  bool v145; // cc
  double v146; // st7
  double v148; // st7
  unsigned char v149; // c0
  unsigned char v150; // c3
  double *v151; // ecx
  int v152; // ecx
  unsigned int *v153; // ecx
  unsigned int v154; // esi
  unsigned int *v155; // eax
  int v156; // edi
  int v157; // ecx
  int v158; // edx
  int v159; // eax
  int v160; // ecx
  double v161; // st7
  char v162; // dl
  int v163; // ecx
  int v164; // ecx
  unsigned int *NeighbourContent; // eax
  int v166; // eax
  int v167; // eax
  unsigned int v168; // eax
  unsigned int *v169; // eax
  int v170; // eax
  int v171; // esi
  int *v172; // edi
  int v173; // eax
  int v174; // ecx
  int v175; // edi
  void *v176; // eax
  int v177; // ebx
  unsigned int *v178; // ecx
  unsigned int *v179; // eax
  int v180; // edi
  unsigned int *v181; // ecx
  int v182; // edx
  int v183; // eax
  int v184; // eax
  double v185; // st7
  unsigned int *v186; // ecx
  int64_t v187; // rax
  unsigned int *v188; // ecx
  unsigned int *v189; // ecx
  unsigned int *v190; // edx
  int v191; // edi
  int64_t v192; // rax
  unsigned int *v193; // eax
  unsigned char *v194; // edx
  int *v195; // esi
  int v196; // edx
  int v197; // eax
  int v198; // ecx
  int v199; // ecx
  int v200; // edx
  bool v201; // zf
  int v202; // eax
  unsigned int *v203; // eax
  int v204; // ecx
  int v205; // [esp+70h] [ebp-6Ch]
  int LandHeight; // [esp+74h] [ebp-68h]
  int v207; // [esp+74h] [ebp-68h]
  unsigned char *v208; // [esp+74h] [ebp-68h]
  int v209; // [esp+74h] [ebp-68h]
  char v210; // [esp+7Ch] [ebp-60h]
  int v211; // [esp+7Ch] [ebp-60h]
  int v212; // [esp+7Ch] [ebp-60h]
  int v213; // [esp+80h] [ebp-5Ch]
  char v214; // [esp+93h] [ebp-49h]
  int v215; // [esp+94h] [ebp-48h] BYREF
  double v216; // [esp+98h] [ebp-44h] BYREF
  int v217; // [esp+A0h] [ebp-3Ch]
  int v218; // [esp+A4h] [ebp-38h] BYREF
  int v219; // [esp+A8h] [ebp-34h] BYREF
  unsigned int *v220; // [esp+ACh] [ebp-30h] BYREF
  int v221; // [esp+B0h] [ebp-2Ch]
  int v222; // [esp+B4h] [ebp-28h]
  int v223; // [esp+B8h] [ebp-24h] BYREF
  int v224; // [esp+BCh] [ebp-20h]
  int v225; // [esp+C0h] [ebp-1Ch]
  unsigned int *v226; // [esp+C4h] [ebp-18h] BYREF
  wchar_t *v227; // [esp+C8h] [ebp-14h]
  int v228; // [esp+CCh] [ebp-10h]
  int v229; // [esp+D0h] [ebp-Ch] BYREF
  wchar_t *v230; // [esp+D4h] [ebp-8h]
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

  v4 = *aP3; /*0x6a3dbd*/
  v5 = dword_7F2A48[3 * (int)this->WalkLocomotion_field_0x58]; /*0x6a3dc1*/
  v6 = *aP2; /*0x6a3dcf*/
  v7 = aP2[1]; /*0x6a3dd1*/
  if ( (v5 & 1) != 0 ) /*0x6a3dd4*/
  {
    v6 = aP2[1]; /*0x6a3dd8*/
    v7 = *aP2; /*0x6a3dda*/
    v4 = (unsigned __int8)(-64 - v4); /*0x6a3de9*/
  }
  if ( (v5 & 2) != 0 ) /*0x6a3dee*/
  {
    v6 = -v6; /*0x6a3df2*/
    v4 = (unsigned __int8)-(char)v4; /*0x6a3df4*/
  }
  if ( (v5 & 4) != 0 ) /*0x6a3dfc*/
  {
    v7 = -v7; /*0x6a3e05*/
    v4 = (unsigned __int8)(0x80 - v4); /*0x6a3e0d*/
  }
  *aP3 = v4; /*0x6a3e0f*/
  WalkLocomotion_field_0x40 = (char *)this->WalkLocomotion_field_0x40; /*0x6a3e12*/
  WalkLocomotion_field_0x44 = (char *)this->WalkLocomotion_field_0x44; /*0x6a3e15*/
  *aP1 = &WalkLocomotion_field_0x40[v6]; /*0x6a3e22*/
  aP1[1] = &WalkLocomotion_field_0x44[v7]; /*0x6a3e25*/
  return aP1; /*0x6a3e20*/
}
}