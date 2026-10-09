// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/GadgetGrid_e4.hpp"
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
#include "e4/classes/ProgressTimer_e4.hpp"

// 0x4B0AD0
namespace gamemd {
char JumpjetLocomotion::MoveTo(int aP1, unsigned int *aP3, int a3_1)
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

  v3 = aP3; /*0x4b0ad0*/
  if ( *aP3 != g_DDraw_ClipRect || aP3[1] != (_DWORD)qword_8A0794 || (v5 = aP3[2], v5 != IDA_HIDWORD(qword_8A0794)) ) /*0x4b0afe*/
  {
    IDA_LOBYTE(v5) = aP1->q060; /*0x4b0b04*/
    v6 = a3_1; /*0x4b0b07*/
    if ( !(_BYTE)v5 ) /*0x4b0b0d*/
    {
      v5 = aP1->q058; /*0x4b0b13*/
      if ( v5 != -1 ) /*0x4b0b19*/
      {
        v5 = byte_7E7B28[12 * v5]; /*0x4b0b22*/
        if ( v5 ) /*0x4b0b2c*/
        {
          v7 = 4 * v5; /*0x4b0b32*/
          v8 = dword_7E7A28[v7]; /*0x4b0b35*/
          v5 = dword_7E7A34[v7]; /*0x4b0b3b*/
          if ( v5 > -1 ) /*0x4b0b44*/
          {
            v9 = (int *)(v8 + 12 * v5); /*0x4b0b4d*/
            a3_1 = v9[2]; /*0x4b0b53*/
            if ( aP1->u32_5C < v5 ) /*0x4b0b5c*/
            {
              v10 = v9[1]; /*0x4b0b64*/
              v18[0] = *v9; /*0x4b0b67*/
              v18[1] = v10; /*0x4b0b6f*/
              v5 = (int)JumpjetLocomotion::TransformCoords((JumpjetLocomotion *)aP1, &v19, v18, &a3_1); /*0x4b0b80*/
              v11 = *(_DWORD *)v5; /*0x4b0b85*/
              v12 = *(_DWORD *)(v5 + 4); /*0x4b0b89*/
              if ( !v6 ) /*0x4b0b8c*/
              {
                v13 = (*(int (__thiscall **)(_DWORD))(*aP1->q00C + 464))(aP1->q00C); /*0x4b0b93*/
                v14 = aP1->q00C; /*0x4b0b99*/
                v19 = v11; /*0x4b0b9c*/
                v20 = v12; /*0x4b0ba0*/
                v21 = v13; /*0x4b0ba4*/
                (*(void (__thiscall **)(int, int *))(*(_DWORD *)v14 + 244))(v14, &v19); /*0x4b0baf*/
                IDA_LOBYTE(v5) = (*(char (__thiscall **)(_DWORD, _DWORD *))(*aP1->q00C + 244))( /*0x4b0bbf*/
                               aP1->q00C,
                               aP3);
                return v5; /*0x4b0bcc*/
              }
              if ( v6 == 1 || v6 == 3 ) /*0x4b0bd7*/
              {
                v15 = (*(int (__thiscall **)(_DWORD))(*aP1->q00C + 464))(aP1->q00C); /*0x4b0bde*/
                v16 = aP1->q00C; /*0x4b0be4*/
                v21 = v15; /*0x4b0be7*/
                v19 = v11; /*0x4b0beb*/
                v20 = v12; /*0x4b0bef*/
                IDA_LOBYTE(v5) = (*(int (__thiscall **)(int, int *))(*(_DWORD *)v16 + 240))(v16, &v19); /*0x4b0bfa*/
              }
              v3 = aP3; /*0x4b0c00*/
            }
          }
        }
      }
    }
    if ( v6 ) /*0x4b0c06*/
    {
      if ( v6 == 1 || v6 == 3 ) /*0x4b0c26*/
        IDA_LOBYTE(v5) = (*(char (__thiscall **)(_DWORD, _DWORD *))(*aP1->q00C + 240))( /*0x4b0c2e*/
                       aP1->q00C,
                       v3);
    }
    else
    {
      IDA_LOBYTE(v5) = (*(char (__thiscall **)(_DWORD, _DWORD *))(*aP1->q00C + 244))( /*0x4b0c0e*/
                     aP1->q00C,
                     v3);
    }
  }
  return v5; /*0x4b0bc5*/
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
  // w15f4: v3-export truncated tail (RHS lost): int ... ...
  // live body via get_context/0x4B0F20 — w15f4 regrafted decls only
  int v52; // ecx
  int v53; // eax
  unsigned int *v54; // eax
  int v55; // esi
  int *v56; // ecx
  int v57; // esi
  int v58; // ebx
  unsigned int *v59; // eax
  int v60; // ecx
  int v61; // edx
  int v62; // edi
  int v63; // eax
  int v64; // eax
  unsigned int *v65; // esi
  CellClass *v66; // ebx
  int level; // ecx
  int v68; // eax
  int *v69; // edi
  int v70; // esi
  ObjectClass *v71; // eax
  ObjectClass *v72; // esi
  ObjectClass *nextObject; // ebx
  void *vtable0; // edx
  int v75; // edx
  unsigned char *v76; // ecx
  int v77; // eax
  int v78; // esi
  char v79; // bl
  int v80; // eax
  char v81; // bl
  int16_t v82; // cx
  int v83; // eax
  unsigned int *v84; // ecx
  CellClass *v85; // ebx
  int v86; // eax
  int16_t v87; // dx
  char v88; // al
  ObjectClass *v89; // ecx
  unsigned int *v90; // esi
  int referenceCount; // eax
  int v92; // edx
  int v93; // eax
  int v94; // edi
  int v95; // edx
  void *v96; // edi
  void *v97; // eax
  CellClass *v98; // edx
  char *v99; // eax
  int v100; // eax
  bool v101; // zf
  int v102; // eax
  int v103; // ecx
  unsigned char *v104; // eax
  int v105; // edx
  int v106; // edx
  int v107; // ecx
  int v108; // edi
  int v109; // edx
  CellClass *v110; // eax
  CellClass *v111; // eax
  int v112; // edx
  int *v113; // ecx
  int v114; // edi
  int v115; // ecx
  CellClass *v116; // eax
  bool v117; // cc
  int v118; // eax
  unsigned char *v119; // eax
  int v120; // eax
  int v121; // edi
  unsigned int *v122; // esi
  int v123; // ecx
  int v124; // edx
  int v125; // eax
  int v126; // ebx
  int v127; // ecx
  int v128; // ebx
  int v129; // eax
  int v130; // ecx
  char v131; // al
  int v132; // eax
  int v133; // eax
  int v134; // ecx
  unsigned int *v135; // eax
  int v136; // edi
  int v137; // ebx
  unsigned short *v138; // eax
  int64_t v139; // rax
  FootClass *v140; // ecx
  int v141; // edx
  int v142; // ecx
  int v143; // esi
  int v144; // ecx
  int v145; // eax
  int *v146; // eax
  int v147; // esi
  int v148; // ebx
  int *v149; // eax
  int v150; // ecx
  int v151; // eax
  unsigned int *v152; // ebx
  int v153; // ecx
  int v154; // esi
  int v155; // ebx
  CellClass *v156; // esi
  double v157; // st7
  int *v158; // eax
  int v159; // edx
  CellClass *v160; // edi
  CellClass *v161; // eax
  unsigned int *v162; // ebx
  unsigned int v163; // edx
  int v164; // ebx
  uint64_t v165; // kr28_8
  CellClass *v166; // eax
  int v167; // ecx
  int v168; // eax
  int v169; // edi
  int v170; // edi
  CellClass *v171; // ecx
  CellClass *v172; // eax
  char v173; // bl
  int LandHeight; // [esp+24h] [ebp-10Ch]
  int v175; // [esp+2Ch] [ebp-104h]
  float v176; // [esp+2Ch] [ebp-104h]
  bool v177; // [esp+43h] [ebp-EDh]
  char v178; // [esp+43h] [ebp-EDh]
  char v179; // [esp+43h] [ebp-EDh]
  char v180[4]; // [esp+44h] [ebp-ECh] BYREF
  unsigned int v181[3]; // [esp+48h] [ebp-E8h] BYREF
  double v182; // [esp+54h] [ebp-DCh] BYREF
  int v183; // [esp+5Ch] [ebp-D4h]
  int v184; // [esp+60h] [ebp-D0h] BYREF
  int16_t v185[2]; // [esp+64h] [ebp-CCh] BYREF
  int v186; // [esp+68h] [ebp-C8h]
  int v187; // [esp+6Ch] [ebp-C4h]
  CellClass *v188; // [esp+70h] [ebp-C0h] BYREF
  int v189; // [esp+74h] [ebp-BCh] BYREF
  int v191; // [esp+7Ch] [ebp-B4h]
  int v192; // [esp+80h] [ebp-B0h]
  int v193; // [esp+84h] [ebp-ACh] BYREF
  int v194; // [esp+88h] [ebp-A8h]
  int v195; // [esp+8Ch] [ebp-A4h]
  CellClass *v196; // [esp+90h] [ebp-A0h]
  CellClass *v197; // [esp+94h] [ebp-9Ch]
  int16_t v198[2]; // [esp+98h] [ebp-98h] BYREF
  uint64_t v199; // [esp+9Ch] [ebp-94h] BYREF
  int v200; // [esp+A4h] [ebp-8Ch]
  int v201; // [esp+A8h] [ebp-88h] BYREF
  int v202; // [esp+ACh] [ebp-84h]
  int v203; // [esp+B0h] [ebp-80h]
  int v204; // [esp+B4h] [ebp-7Ch] BYREF
  int v205; // [esp+B8h] [ebp-78h]
  char *v206; // [esp+BCh] [ebp-74h]
  int16_t v207[2]; // [esp+C0h] [ebp-70h] BYREF
  int v208; // [esp+C4h] [ebp-6Ch]
  int v209; // [esp+C8h] [ebp-68h]
  CellClass *v210; // [esp+CCh] [ebp-64h]
  int v211; // [esp+D0h] [ebp-60h]
  int v212; // [esp+D4h] [ebp-5Ch]
  unsigned int v213[3]; // [esp+D8h] [ebp-58h] BYREF
  uint64_t v214; // [esp+E4h] [ebp-4Ch] BYREF
  int v215; // [esp+ECh] [ebp-44h]
  int v216; // [esp+F0h] [ebp-40h] BYREF
  int v217; // [esp+F4h] [ebp-3Ch]
  int v218; // [esp+F8h] [ebp-38h]
  int v219; // [esp+FCh] [ebp-34h] BYREF
  int v220; // [esp+100h] [ebp-30h]
  int v221; // [esp+104h] [ebp-2Ch]
  int v222; // [esp+108h] [ebp-28h] BYREF
  unsigned int v223[3]; // [esp+10Ch] [ebp-24h] BYREF
  int v224; // [esp+118h] [ebp-18h]
  int v225; // [esp+120h] [ebp-10h]
  int v226; // [esp+128h] [ebp-8h]
  int v227; // [esp+12Ch] [ebp-4h]
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
  // w15f4: v3-export truncated tail (RHS lost): unsigned int *v48;... ...
  // live body via get_context/0x4B2630 — w15f4 regrafted decls only
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
  int v79; // ecx
  char *v80; // eax
  int v81; // ecx
  int v82; // edi
  unsigned int *v83; // eax
  unsigned int *v84; // eax
  int v85; // ecx
  int v86; // edx
  unsigned int *v87; // eax
  int v88; // ecx
  unsigned int *v89; // esi
  int v90; // eax
  int v91; // ecx
  int v92; // eax
  int v93; // edx
  int v94; // esi
  int v95; // edx
  unsigned int *v96; // ebx
  int v97; // eax
  int v98; // eax
  unsigned int *v99; // edx
  int v100; // ecx
  int v101; // ecx
  int v102; // edi
  int v103; // esi
  int v104; // eax
  int v105; // edx
  int v106; // eax
  char v107; // bl
  unsigned int *v108; // ecx
  unsigned int *v109; // edx
  wchar_t *v110; // eax
  unsigned int *v111; // eax
  unsigned int *v112; // eax
  int v113; // edx
  int v114; // eax
  double v115; // st7
  unsigned int *v116; // ecx
  int64_t v117; // rax
  unsigned int *v118; // ecx
  unsigned int *v119; // edx
  int v120; // esi
  int v121; // ecx
  unsigned int *v122; // eax
  unsigned int *v123; // eax
  char v124; // al
  int v125; // ecx
  wchar_t *v126; // esi
  wchar_t *v127; // eax
  wchar_t *v128; // ecx
  wchar_t **v129; // edx
  unsigned int *v130; // eax
  unsigned int *v131; // eax
  int Object; // eax
  int *v133; // ecx
  int v134; // esi
  unsigned int *v135; // eax
  int v136; // eax
  int v137; // esi
  void *v138; // eax
  unsigned int *v139; // eax
  int v141; // esi
  unsigned int *v142; // edx
  int v143; // edi
  bool v144; // cc
  double v145; // st7
  double v147; // st7
  unsigned char v148; // c0
  unsigned char v149; // c3
  double *v150; // ecx
  int v151; // ecx
  unsigned int *v152; // ecx
  unsigned int v153; // esi
  unsigned int *v154; // eax
  int v155; // edi
  int v156; // ecx
  int v157; // edx
  int v158; // eax
  int v159; // ecx
  double v160; // st7
  char v161; // dl
  int v162; // ecx
  int v163; // ecx
  unsigned int *NeighbourContent; // eax
  unsigned int *v165; // edi
  int v166; // eax
  int v167; // eax
  unsigned int v168; // eax
  unsigned int *v169; // eax
  int v170; // eax
  int v171; // esi
  int *v172; // edi
  int v173; // edx
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

// 0x4B4780
namespace gamemd {
unsigned int * JumpjetLocomotion::TransformCoords(unsigned int *aP1, int *aP2, int *aP3)
{
  int v4; // eax
  int v5; // ebx
  int v6; // edi
  int v7; // esi
  char *q040; // edx
  char *q044; // ecx

  v4 = *aP3; /*0x4b478d*/
  v5 = dword_7E7B30[3 * (int)this->q058]; /*0x4b4791*/
  v6 = *aP2; /*0x4b479f*/
  v7 = aP2[1]; /*0x4b47a1*/
  if ( (v5 & 1) != 0 ) /*0x4b47a4*/
  {
    v6 = aP2[1]; /*0x4b47a8*/
    v7 = *aP2; /*0x4b47aa*/
    v4 = (unsigned __int8)(-64 - v4); /*0x4b47b9*/
  }
  if ( (v5 & 2) != 0 ) /*0x4b47be*/
  {
    v6 = -v6; /*0x4b47c2*/
    v4 = (unsigned __int8)-(char)v4; /*0x4b47c4*/
  }
  if ( (v5 & 4) != 0 ) /*0x4b47cc*/
  {
    v7 = -v7; /*0x4b47d5*/
    v4 = (unsigned __int8)(0x80 - v4); /*0x4b47dd*/
  }
  *aP3 = v4; /*0x4b47df*/
  q040 = (char *)this->q040; /*0x4b47e2*/
  q044 = (char *)this->q044; /*0x4b47e5*/
  *aP1 = &q040[v6]; /*0x4b47f2*/
  aP1[1] = &q044[v7]; /*0x4b47f5*/
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
  _BYTE *v11; // ecx
  _DWORD *v12; // eax
  _DWORD *v13; // esi
  _DWORD *v14; // ebp
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
  _DWORD *v33; // ecx
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
  char v47; // [esp+34h] [ebp-22h]
  char v48; // [esp+35h] [ebp-21h]
  __int16 v49[2]; // [esp+36h] [ebp-20h] BYREF
  __int16 v50[2]; // [esp+3Ah] [ebp-1Ch] BYREF
  int v51; // [esp+3Eh] [ebp-18h] BYREF
  int v52; // [esp+42h] [ebp-14h]
  int v53; // [esp+46h] [ebp-10h]
  int v54; // [esp+4Ah] [ebp-Ch] BYREF
  int v55; // [esp+4Eh] [ebp-8h]
  int v56; // [esp+52h] [ebp-4h]

  v2 = *(_DWORD *)this->q00C; /*0x54ca99*/
  v51 = v2->q09C; /*0x54caa6*/
  v52 = v2->q280; /*0x54caad*/
  v53 = v2->q0A4; /*0x54cab4*/
  v3 = v2->q0A4; /*0x54caba*/
  v54 = v2->q09C; /*0x54cabd*/
  v4 = v2->u32_6AD; /*0x54cac4*/
  v55 = v2->q280; /*0x54cacc*/
  if ( v4 ) /*0x54cad0*/
  {
    v5 = (double)v53; /*0x54cad2*/
    *(_DWORD *)&this->__pad_5C[20] = 0; /*0x54cad8*/
    *(_DWORD *)this->__pad_78 = 0; /*0x54cadb*/
    v6 = v5 - *(float *)&this->q00C[28]; /*0x54cade*/
    this->q074 = 0; /*0x54cae1*/
    *(_DWORD *)&this->__pad_78[4] = 0; /*0x54cae4*/
    IDA_LOWORD(v7) = Math::RoundToInt(v6); /*0x54cae7*/
    v8 = *(float *)&this->q00C[28] + 1.0; /*0x54caef*/
    v53 = v7; /*0x54caf5*/
    *(float *)&this->q00C[28] = v8; /*0x54caf9*/
  }
  else
  {
    IDA_LOWORD(v9) = Math::RoundToInt((double)v53 - *(float *)&this->q00C[28]); /*0x54cb05*/
    v53 = v9; /*0x54cb0a*/
    v49[0] = *(_WORD *)ProgressTimer::GetValue((ProgressTimer *)&this->q048[12], v50) + 11520; /*0x54cb2a*/
    FacingClass::Update(&this->q048[12], v49); /*0x54cb39*/
  }
  v10 = dword_ABC5DC + Cell::GetGroundHeight(&v51); /*0x54cb5e*/
  if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v51)->flags[0] & 0x100) == 0 /*0x54cb7f*/
    || v3 < v10
    || (v45 = 1, v53 >= v10) )
  {
    v45 = 0; /*0x54cb81*/
  }
  v49[0] = v51 / 256; /*0x54cba0*/
  v49[1] = v52 / 256; /*0x54cbb5*/
  if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&stru_87F5F0.__pad_58[416], v49) ) /*0x54cbc2*/
  {
    RemoveTarget(*(_DWORD *)this->q00C); /*0x54cbd4*/
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)this->q00C + 292))(*(_DWORD *)this->q00C, 0); /*0x54cbe1*/
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)this->q00C + 436))(*(_DWORD *)this->q00C, &v51); /*0x54cbf1*/
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)this->q00C + 292))(*(_DWORD *)this->q00C, 1); /*0x54cbfe*/
    Targeting::Readd(*(_DWORD **)this->q00C); /*0x54cc0d*/
  }
  v46 = 0; /*0x54cc19*/
  if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)this->q00C + 456))(*(_DWORD *)this->q00C) > 0 && !v45 ) /*0x54cc30*/
    goto LABEL_74; /*0x54cc30*/
  v11 = *(_BYTE **)this->q00C; /*0x54cc36*/
  if ( !v11[1063] ) /*0x54cc39*/
    goto LABEL_74; /*0x54cc41*/
  v47 = 0; /*0x54cc4e*/
  v12 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, int *))(v11->q048)(v11, &v54); /*0x54cc53*/
  v49[0] = *v12 / 256; /*0x54cc66*/
  v49[1] = v12[1] / 256; /*0x54cc7f*/
  *(_DWORD *)v50 = *(_DWORD *)v49; /*0x54cc8d*/
  v13 = (_DWORD *)*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v50) + 57); /*0x54cc96*/
  if ( v13 == *(_DWORD **)this->q00C ) /*0x54cca1*/
    v13 = (_DWORD *)v13[12]; /*0x54cca3*/
  if ( v13 ) /*0x54cca8*/
  {
    if ( (*(int (__thiscall **)(_DWORD *))(*v13 + 44))(v13) == 1 /*0x54ccc8*/
      || (*(int (__thiscall **)(_DWORD *))(*v13 + 44))(v13) == 6 )
    {
      goto LABEL_64; /*0x54ccc8*/
    }
    if ( (*(int (__thiscall **)(_DWORD *))(*v13 + 44))(v13) == 15 ) /*0x54ccd8*/
    {
      do /*0x54cd78*/
      {
        v14 = (_DWORD *)v13[12]; /*0x54cce1*/
        v15 = (int *)(*(_DWORD *)this->q00C + 156); /*0x54cce4*/
        v54 = *v15; /*0x54ccf0*/
        v55 = v15[1]; /*0x54ccf9*/
        v16 = *v13; /*0x54ccfd*/
        v56 = v15[2]; /*0x54cd02*/
        v17 = (*(int (__thiscall **)(_DWORD *))(v16 + 136))(v13); /*0x54cd06*/
        StartAudioControllerAt(*(_DWORD *)(v17 + 496), &v54, 0); /*0x54cd14*/
        v18 = *(_DWORD *)this->q00C; /*0x54cd19*/
        v19 = v18->u32_428; /*0x54cd1e*/
        if ( v19 ) /*0x54cd26*/
        {
          (*(void (__thiscall **)(_DWORD *, int))(*v13 + 224))(v13, v19); /*0x54cd2d*/
        }
        else
        {
          v20 = *v13; /*0x54cd3b*/
          if ( v18->q42C ) /*0x54cd35*/
            (*(void (__thiscall **)(_DWORD *, _DWORD))(v20 + 228))(v13, v18->q42C); /*0x54cd44*/
          else
            (*(void (__thiscall **)(_DWORD *, _DWORD))(v20 + 224))(v13, *(_DWORD *)this->q00C); /*0x54cd4f*/
        }
        (*(void (__thiscall **)(_DWORD *, _DWORD))(*v13 + 292))(v13, 0); /*0x54cd5a*/
        (*(void (__thiscall **)(_DWORD *))(*v13 + 212))(v13); /*0x54cd64*/
        (*(void (__thiscall **)(_DWORD *))(*v13 + 248))(v13); /*0x54cd6e*/
        v13 = v14; /*0x54cd76*/
      }
      while ( v14 ); /*0x54cd78*/
    }
    else
    {
      v21 = *(_DWORD *)this->q00C; /*0x54cd80*/
      v22 = v21->u32_428; /*0x54cd83*/
      if ( v22 ) /*0x54cd8b*/
      {
        (*(void (__thiscall **)(_DWORD *, _DWORD *, _DWORD, _DWORD, int, int, _DWORD, _DWORD))(*v13 + 364))( /*0x54cd94*/
          v13,
          v13 + 27,
          0,
          *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.q0FC[324] + 4012),
          v22,
          1,
          0,
          0);
      }
      else if ( v21->q42C ) /*0x54cd96*/
      {
        (*(void (__thiscall **)(_DWORD *, _DWORD *, _DWORD, _DWORD, int, int, _DWORD, _DWORD))(*v13 + 364))( /*0x54cda3*/
          v13,
          v13 + 27,
          0,
          *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.q0FC[324] + 4012),
          v21,
          1,
          0,
          v21->q42C);
      }
      else
      {
        (*(void (__thiscall **)(_DWORD *, _DWORD *, _DWORD, _DWORD, int, int, _DWORD, _DWORD))(*v13 + 364))( /*0x54cdbd*/
          v13,
          v13 + 27,
          0,
          *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.q0FC[324] + 4012),
          v21,
          1,
          0,
          0);
      }
    }
  }
  v47 = 1; /*0x54cdc6*/
  v23 = (int *)(*(_DWORD *)this->q00C + 156); /*0x54cdcb*/
  v54 = *v23; /*0x54cdd3*/
  v55 = v23[1]; /*0x54cddf*/
  v56 = v23[2]; /*0x54cde6*/
  v24 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v54); /*0x54cdf4*/
  landType = v24->landType; /*0x54cdf6*/
  if ( landType != 2 || (v48 = 1, v45) ) /*0x54ce0c*/
    v48 = 0; /*0x54ce0e*/
  v26 = landType == 6 && !v45; /*0x54ce24*/
  v27 = (*(int (__thiscall **)(_DWORD, CellClass *, int, int, _DWORD, int))(**(_DWORD **)this->q00C + 428))( /*0x54ce34*/
          *(_DWORD *)this->q00C,
          v24,
          -1,
          -1,
          0,
          1);
  v28 = *(_DWORD *)this->q00C; /*0x54ce3a*/
  v29 = v27; /*0x54ce3d*/
  if ( v28 /*0x54ce5c*/
    && (*(int (__thiscall **)(int))(v28->u32_2C)(v28) == 2
    && !(unsigned __int8)Cell::IsBuildable((bool *)v24, 2, 1, 1, -1, 0, -1, 1) )
  {
    v29 = 7; /*0x54ce65*/
  }
  if ( *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)this->q00C + 132))(*(_DWORD *)this->q00C) + 3476) /*0x54ce9a*/
    && !(unsigned __int8)Cell::IsBuildable((bool *)v24, 2, 1, 1, -1, 0, -1, 1)
    || v29 )
  {
    if ( v48 && !v26 ) /*0x54ceae*/
    {
      *(_BYTE *)(*(_DWORD *)this->q00C + 973) = 1; /*0x54ceb7*/
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)this->q00C + 928))(*(_DWORD *)this->q00C); /*0x54cec3*/
      v30 = *(_DWORD *)this->q00C; /*0x54cec9*/
      v31 = v30->u32_2D8; /*0x54cecc*/
      if ( v31 ) /*0x54ced4*/
      {
        TechnoClass::MutateAll(v31, v30->u32_428, 0); /*0x54cedf*/
        v32 = *(_DWORD *)(*(_DWORD *)this->q00C + 728); /*0x54cee7*/
        if ( v32 ) /*0x54ceef*/
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v32 + 32))(v32, 1); /*0x54cef5*/
        *(_DWORD *)(*(_DWORD *)this->q00C + 728) = 0; /*0x54cefb*/
      }
      v33 = *(_DWORD **)this->q00C; /*0x54cf05*/
      if ( v33[266] ) /*0x54cf08*/
      {
        (*(void (__thiscall **)(_DWORD *, _DWORD))(*v33 + 224))(v33, v33[266]); /*0x54cf15*/
      }
      else if ( v33[267] ) /*0x54cf20*/
      {
        (*(void (__thiscall **)(_DWORD *, _DWORD))(*v33 + 228))(v33, v33[267]); /*0x54cf31*/
      }
      goto LABEL_65; /*0x54cf1b*/
    }
  }
  else
  {
    v34 = *(_DWORD *)this->q00C; /*0x54cf3c*/
    if ( v34->u32_578 /*0x54cf75*/
      || v34->u32_57C != 1075052544 && (v34->u32_578 || v34->u32_57C != 1075576832)
      || v48 && !v26 )
    {
      v35 = *(_DWORD *)this->q00C; /*0x54cf77*/
      if ( *(_DWORD *)((*(int (__thiscall **)(int))(v35->u32_1BC)(v35) + 224) == v35 ) /*0x54cf8a*/
      {
        v36 = (CellClass *)(*(int (__thiscall **)(int))(v35->u32_1BC)(v35); /*0x54cf92*/
        CellClass::AttachObject(v36, 0); /*0x54cf9a*/
      }
      v37 = *(_DWORD *)this->q00C; /*0x54cf9f*/
      *(_DWORD *)&this->q048[8] = 4; /*0x54cfa2*/
      (*(void (__thiscall **)(int, _DWORD, int))(v37->q480)(v37, 0, 1); /*0x54cfaf*/
      goto LABEL_65; /*0x54cfb5*/
    }
  }
  LABEL_64:
  v46 = 1; /*0x54cfb7*/
  LABEL_65:
  v38 = *(_DWORD *)this->q00C; /*0x54cfbc*/
  if ( v38 && (*(int (__thiscall **)(int))(v38->u32_1C8)(v38) > 0 ) /*0x54cfcf*/
  {
    if ( !v45 ) /*0x54cfd7*/
    {
      v39 = *(_DWORD *)this->q00C; /*0x54cfd9*/
      if ( !v39->u32_6AD || v46 ) /*0x54cfec*/
      {
        v39->u32_428 = 0; /*0x54cfee*/
        *(_DWORD *)(*(_DWORD *)this->q00C + 1068) = 0; /*0x54cff7*/
      }
      goto LABEL_74; /*0x54cffd*/
    }
  }
  else if ( !v45 ) /*0x54d005*/
  {
    goto LABEL_74; /*0x54d005*/
  }
  if ( v47 ) /*0x54d00d*/
    *(_BYTE *)(*(_DWORD *)this->q00C + 140) = 1; /*0x54d012*/
  LABEL_74:
  if ( ((*(int (__thiscall **)(_DWORD))(**(_DWORD **)this->q00C + 456))(*(_DWORD *)this->q00C) <= 0 /*0x54d043*/
     || (IDA_LOBYTE(v40) = v45) != 0)
    && (!*(_BYTE *)(*(_DWORD *)this->q00C + 1709) || (IDA_LOBYTE(v40) = v46) != 0) )
  {
    v41 = *(_DWORD *)this->q00C; /*0x54d045*/
    if ( *(_DWORD *)((*(int (__thiscall **)(int))(v41->u32_1BC)(v41) + 224) == v41 ) /*0x54d058*/
    {
      v42 = (CellClass *)(*(int (__thiscall **)(int))(v41->u32_1BC)(v41); /*0x54d05f*/
      CellClass::AttachObject(v42, 0); /*0x54d067*/
    }
    GadgetGrid::RemoveItem((GadgetGrid *)&g_CellClassManager, *(_DWORD *)this->q00C); /*0x54d075*/
    v43 = *(_DWORD *)this->q00C; /*0x54d07a*/
    *(_DWORD *)this->__pad_78 = 0; /*0x54d07d*/
    *(_DWORD *)&this->q048[8] = 6; /*0x54d083*/
    *(_DWORD *)&this->__pad_78[4] = 0; /*0x54d08a*/
    (**(void (__thiscall ***)(int, int, _DWORD))(v43 + 8))(v43 + 8, 4476, 0); /*0x54d095*/
    v40 = *(_DWORD *)this->q00C; /*0x54d097*/
    if ( v40 ) /*0x54d09c*/
    {
      v40->u32_428 = 0; /*0x54d09e*/
      v40 = *(_DWORD *)this->q00C; /*0x54d0a4*/
      v40->q42C = 0; /*0x54d0a7*/
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
  _BYTE *v3; // ecx
  double v4; // st7
  double v5; // st7
  unsigned __int8 v7; // c0
  unsigned __int8 v8; // c3
  unsigned __int64 v9; // st7
  int v10; // edi
  int v11; // ebp
  _WORD *v12; // eax
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
  _WORD *v38; // eax
  int v39; // ecx
  int *v40; // eax
  int v41; // edi
  int v42; // eax
  unsigned int v43; // ebp
  unsigned int v44; // ebx
  int v45; // eax
  int v46; // eax
  int v47; // ecx
  _BYTE *v48; // ecx
  int v49; // edi
  int v50; // eax
  int v51; // ecx
  int result; // eax
  int *v53; // [esp+4h] [ebp-54h]
  _DWORD *Value; // [esp+4h] [ebp-54h]
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
  _DWORD v66[3]; // [esp+4Ch] [ebp-Ch] BYREF

  v2 = *(_DWORD *)&this->q048[8]; /*0x54d0ff*/
  if ( v2 == 2 || (v55 = 1, v2 == 3) ) /*0x54d10f*/
    v55 = 0; /*0x54d111*/
  v3 = *(_BYTE **)this->q00C; /*0x54d116*/
  v58 = v3[116]; /*0x54d11c*/
  if ( v55 ) /*0x54d126*/
    (*(void (__thiscall **)(_BYTE *, _DWORD))(v3->q124)(v3, 0); /*0x54d12c*/
  else
    v3[116] = 0; /*0x54d134*/
  if ( *(double *)this->__pad_78 > *(double *)&this->__pad_5C[20] ) /*0x54d143*/
  {
    v4 = *(float *)&this->q00C[36] + *(double *)&this->__pad_5C[20]; /*0x54d148*/
    *(double *)&this->__pad_5C[20] = v4; /*0x54d14b*/
    v61 = (double)*(int *)&this->q00C[20]; /*0x54d151*/
    if ( v4 >= v61 ) /*0x54d15e*/
      v4 = v61; /*0x54d162*/
    *(double *)&this->__pad_5C[20] = v4; /*0x54d166*/
  }
  if ( *(double *)this->__pad_78 < *(double *)&this->__pad_5C[20] ) /*0x54d174*/
  {
    v5 = *(double *)&this->__pad_5C[20] - *(float *)&this->q00C[36] * 1.5; /*0x54d17f*/
    *(double *)&this->__pad_5C[20] = v5; /*0x54d188*/
    if ( v7 | v8 ) /*0x54d18d*/
      v5 = 0.0; /*0x54d194*/
    *(double *)&this->__pad_5C[20] = v5; /*0x54d19a*/
  }
  *(double *)&v9 = *(double *)&this->__pad_5C[20] / (double)*(int *)&this->q00C[20]; /*0x54d1a6*/
  (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)this->q00C + 1348))( /*0x54d1ae*/
    *(_DWORD *)this->q00C,
    v9,
    IDA_HIDWORD(v9));
  v10 = (int)this->q040 / 256; /*0x54d1da*/
  v11 = (int)this->q044 / 256; /*0x54d1dd*/
  v12 = (_WORD *)(*(int (__thiscall **)(_DWORD, double *))(**(_DWORD **)this->q00C + 440))( /*0x54d1e0*/
                   *(_DWORD *)this->q00C,
                   &v61);
  if ( *v12 != (_WORD)v10 || (v56 = 1, v12[1] != (_WORD)v11) ) /*0x54d1f4*/
    v56 = 0; /*0x54d1f6*/
  v13 = *(_DWORD *)&this->q048[8]; /*0x54d1fb*/
  if ( (v13 == 2 || v13 == 3) && !this->q00C[48] ) /*0x54d208*/
  {
    *(double *)&this->__pad_85[3] = 6.283185307179586 / (15.0 / *(float *)&this->q00C[40]) /*0x54d224*/
                                  + *(double *)&this->__pad_85[3];
  }
  else
  {
    *(_DWORD *)&this->__pad_85[3] = 0; /*0x54d22e*/
    this->q08C = 0; /*0x54d234*/
  }
  Math::SinCos(*(double *)&this->__pad_85[3]); /*0x54d248*/
  v14 = *(double *)&v9 * (double)*(int *)&this->q00C[44] + (double)*(int *)&this->__pad_78[8]; /*0x54d253*/
  v17 = Math::RoundToInt(v14); /*0x54d259*/
  IDA_LOWORD(v16) = IDA_HIWORD(v17); /*0x54d259*/
  IDA_LOWORD(v15) = v17; /*0x54d259*/
  v18 = *(_DWORD *)this->q00C; /*0x54d25e*/
  IDA_LODWORD(v60) = v15; /*0x54d261*/
  v19 = (*(int (__fastcall **)(int, int))(v18->u32_1D0)(v18, v16); /*0x54d270*/
  v20 = *(_DWORD *)this->q00C + 156; /*0x54d272*/
  v59 = v19; /*0x54d278*/
  v62 = *(double *)v20; /*0x54d27e*/
  v63 = *(_DWORD *)(v20 + 8); /*0x54d291*/
  GroundHeight = Cell::GetGroundHeight(&v62); /*0x54d29f*/
  v22 = *(_DWORD *)this->q00C + 156; /*0x54d2a4*/
  v62 = *(double *)v22; /*0x54d2ab*/
  v63 = *(_DWORD *)(v22 + 8); /*0x54d2c3*/
  if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v62)->flags[0] & 0x100) != 0 ) /*0x54d2d5*/
  {
    v23 = *(_DWORD *)this->q00C + 156; /*0x54d2da*/
    v62 = *(double *)v23; /*0x54d2e2*/
    v24 = *(_DWORD *)(v23 + 8); /*0x54d2f5*/
    IDA_LODWORD(v61) = GroundHeight + 4 * dword_ABC5E8; /*0x54d2f8*/
    v63 = v24; /*0x54d2fc*/
    v14 = (double)v24; /*0x54d300*/
    if ( (double)IDA_SLODWORD(v61) - *(float *)&this->q00C[28] <= v14 ) /*0x54d312*/
      GroundHeight += dword_ABC5DC; /*0x54d314*/
  }
  v25 = *(_DWORD *)&this->q048[8]; /*0x54d31a*/
  if ( v25 == 4 /*0x54d339*/
    || !v25
    || v56
    && !*(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)this->q00C + 132))(*(_DWORD *)this->q00C) + 3434) )
  {
    v26 = v19 - GroundHeight; /*0x54d352*/
  }
  else
  {
    v26 = v19 - JumpjetLocomotionClass::GetFloorZSetContext((JumpjetLocomotionClass *)this); /*0x54d34c*/
  }
  IDA_LODWORD(v61) = v26; /*0x54d358*/
  v57 = 0; /*0x54d35e*/
  if ( v26 < IDA_SLODWORD(v60) ) /*0x54d363*/
  {
    v27 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)this->q00C + 456))(*(_DWORD *)this->q00C); /*0x54d377*/
    v28 = *(_DWORD *)this->q00C + 156; /*0x54d379*/
    v62 = *(double *)v28; /*0x54d381*/
    v63 = *(_DWORD *)(v28 + 8); /*0x54d394*/
    if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v62)->flags[0] & 0x100) != 0 ) /*0x54d3ab*/
    {
      v29 = *(_DWORD *)this->q00C; /*0x54d3ad*/
      if ( !v29->q08C ) /*0x54d3b0*/
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
      v32 = *(_DWORD *)this->q00C; /*0x54d407*/
      v62 = v32->q09C; /*0x54d416*/
      v63 = v32->q0A4; /*0x54d424*/
      (*(void (__thiscall **)(int, double *))(v32->u32_F4)(v32, &v62); /*0x54d42f*/
      *(_BYTE *)(*(_DWORD *)this->q00C + 140) = 0; /*0x54d438*/
    }
    v14 = (double)IDA_SLODWORD(v61) + *(float *)&this->q00C[24]; /*0x54d443*/
    if ( (double)IDA_SLODWORD(v60) >= v14 ) /*0x54d451*/
    {
      v14 = (double)v59 + *(float *)&this->q00C[24]; /*0x54d469*/
      IDA_LOWORD(v33) = Math::RoundToInt(v14); /*0x54d46c*/
      v59 = v33; /*0x54d471*/
    }
    else
    {
      v59 += IDA_LODWORD(v60) - v26; /*0x54d45f*/
    }
  LABEL_49:
    v57 = 1; /*0x54d4bb*/
    goto LABEL_50; /*0x54d4bb*/
  }
  if ( v26 > IDA_SLODWORD(v60) )
  {
    v14 = (double)IDA_SLODWORD(v61) - *(float *)&this->q00C[24]; /*0x54d47d*/
    if ( (double)IDA_SLODWORD(v60) <= v14 ) /*0x54d48b*/
    {
      v14 = (double)v59 - *(float *)&this->q00C[24]; /*0x54d49b*/
      IDA_LOWORD(v35) = Math::RoundToInt(v14); /*0x54d49e*/
      v59 = v35; /*0x54d4a3*/
      v34 = v35; /*0x54d4a7*/
    }
    else
    {
      v34 = IDA_LODWORD(v60) - v26 + v19; /*0x54d48f*/
      v59 = v34; /*0x54d491*/
    }
    if ( v34 <= GroundHeight ) /*0x54d4ab*/
      v59 = GroundHeight; /*0x54d4ad*/
    v26 = v26 <= 0 ? 0 : v26;
    goto LABEL_49; /*0x54d4b9*/
  }
  LABEL_50:
  v36 = (int)this->q040 / 256; /*0x54d4c0*/
  v37 = (int)this->q044 / 256; /*0x54d4e9*/
  v38 = (_WORD *)(*(int (__thiscall **)(_DWORD, double *))(**(_DWORD **)this->q00C + 440))( /*0x54d4ec*/
                   *(_DWORD *)this->q00C,
                   &v61);
  if ( *v38 != (_WORD)v36 || v38[1] != (_WORD)v37 ) /*0x54d4fb*/
  {
    v39 = IDA_LODWORD(v60); /*0x54d4fd*/
    if ( v26 < IDA_SLODWORD(v60) / 2 ) /*0x54d50a*/
    {
      *(_DWORD *)&this->__pad_5C[20] = 0; /*0x54d50e*/
      this->q074 = 0; /*0x54d511*/
    }
    if ( v26 < v39 / 4 ) /*0x54d525*/
    {
      *(_DWORD *)&this->__pad_5C[20] = 0; /*0x54d527*/
      this->q074 = 0; /*0x54d52a*/
    }
  }
  if ( v57 ) /*0x54d537*/
  {
    ObjectClass::SetAnim(*(ObjectClass **)this->q00C, v59); /*0x54d541*/
    if ( v55 ) /*0x54d54c*/
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)this->q00C + 292))(*(_DWORD *)this->q00C, 0); /*0x54d554*/
  }
  v40 = (int *)(*(_DWORD *)this->q00C + 156); /*0x54d55d*/
  v64 = *v40; /*0x54d567*/
  v65 = v40[1]; /*0x54d56e*/
  v41 = v40[2]; /*0x54d572*/
  IDA_LOWORD(v42) = Math::RoundToInt(v14); /*0x54d575*/
  IDA_LODWORD(v60) = v42; /*0x54d57a*/
  v61 = (double)(*(__int16 *)ProgressTimer::GetValue((ProgressTimer *)&this->q048[12], &v59) - 0x3FFF) /*0x54d5a2*/
      * -0.00009587672516830327;
  v43 = IDA_HIDWORD(v61); /*0x54d5aa*/
  v44 = IDA_LODWORD(v61); /*0x54d5ae*/
  v60 = (double)IDA_SLODWORD(v60); /*0x54d5b4*/
  v62 = (double)v65; /*0x54d5bc*/
  Math::SinCos(v61); /*0x54d5c0*/
  IDA_LOWORD(v45) = Math::RoundToInt(v14); /*0x54d5cd*/
  IDA_LODWORD(v61) = v45; /*0x54d5d4*/
  Math::ArcTan2(COERCE_DOUBLE(IDA___PAIR64__(v43, v44))); /*0x54d5d8*/
  IDA_LOWORD(v46) = Math::RoundToInt(v14 * v60 + (double)v64); /*0x54d5e8*/
  v47 = *(_DWORD *)this->q00C; /*0x54d5f1*/
  v66[1] = IDA_LODWORD(v61); /*0x54d5f4*/
  v66[0] = v46; /*0x54d5f8*/
  v66[2] = v41; /*0x54d5fc*/
  (*(void (__thiscall **)(int, _DWORD *))(v47->u32_1B4)(v47, v66); /*0x54d607*/
  v48 = *(_BYTE **)this->q00C; /*0x54d60d*/
  if ( !v48[1709] )
  {
    if ( v48
      && (*(int (__thiscall **)(_BYTE *))(v48->u32_2C)(v48) == 15
      && ((v49 = *(_DWORD *)this->q00C) != 0
        ? (v50 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v49 + 44))(*(_DWORD *)this->q00C) == 15 ? v49 : 0)
        : (v50 = 0),
          *(_BYTE *)(*(_DWORD *)(v50 + 1728) + 3787)
       && *(_DWORD *)&this->q048[8] == 2
       && (v51 = *(_DWORD *)this->q00C, *(_DWORD *)(v51 + 692))) )
    {
      v53 = ObjectClass::CalcTargetFacing((ObjectClass *)v51, (int *)&v61, *(_DWORD *)(v51 + 692)); /*0x54d675*/
      FacingClass::Set_SyncLog(&this->q048[12], v53); /*0x54d679*/
    }
    else
    {
      Value = ProgressTimer::GetValue((ProgressTimer *)&this->q048[12], &v61); /*0x54d68b*/
      FacingClass::Set_SyncLog((char *)(*(_DWORD *)this->q00C + 904), Value); /*0x54d692*/
    }
  }
  if ( v55 ) /*0x54d69d*/
    return (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)this->q00C + 292))(*(_DWORD *)this->q00C, 1); /*0x54d6a6*/
  result = *(_DWORD *)this->q00C; /*0x54d6b4*/
  result->q074 = v58; /*0x54d6bd*/
  return result; /*0x54d6ac*/
}
}