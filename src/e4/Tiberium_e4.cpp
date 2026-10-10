// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Tiberium_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/RandomMap_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/Color_e4.hpp"
#include "e4/classes/TiberiumClass_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/TubeClass_e4.hpp"
#include "e4/classes/Init_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/TimerClass_e4.hpp"
#include "e4/classes/Time_e4.hpp"
#include "e4/classes/File_e4.hpp"
#include "e4/classes/LocomotionClass_e4.hpp"
#include "e4/classes/ProgressTimer_e4.hpp"
#include "e4/classes/Turret_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"

// 0x59D510
namespace gamemd {  // G42.18 ns repair
int Tiberium::ProcessGrowth(int a2, MapResourceClass * aP2, char _140)
{

  double v4; // st7
  bool v5; // zf
  unsigned int v6; // eax
  unsigned int v7; // edi
  unsigned int v8; // eax
  int16_t v9; // si
  unsigned int v10; // edi
  unsigned int v11; // eax
  int16_t v12; // di
  int16_t v13; // bx
  int v14; // ebx
  int v19; // esi
  unsigned int v22; // eax
  unsigned int v23; // esi
  unsigned int v24; // eax
  int v25; // eax
  unsigned int v26; // eax
  Tiberium *v27; // ebx
  int16_t v28; // ax
  int16_t v29; // si
  int16_t v30; // ax
  int v31; // ecx
  int v32; // esi
  int v33; // edx
  double v34; // rdi
  int v35; // eax
  int v36; // esi
  int16_t v37; // ax
  int16_t v38; // di
  int16_t v39; // ax
  int v40; // edx
  int16_t v41; // bx
  int16_t v42; // ax
  Cell *v43; // eax
  char IsEmpty; // al
  int v45; // eax
  unsigned char *v46; // eax
  int v47; // ecx
  int v48; // eax
  int v49; // edi
  int v50; // eax
  int v51; // eax
  int v52; // edi
  // w15f4: v3-export truncated tail (RHS lost): int v53; ... ...
  // live body via get_context/0x59D510 — w15f4 regrafted decls only
  int v53; // eax
  int v57; // esi
  int16_t v59; // ax
  int16_t v60; // ax
  int16_t v61; // ax
  int v62; // eax
  int16_t v68; // ax
  int16_t v79; // ax
  int16_t v80; // di
  int16_t v81; // ax
  int v82; // ecx
  int v83; // eax
  char v84; // al
  void *v85; // esi
  int i; // eax
  int v87; // ecx
  int v88; // ecx
  int v90; // edx
  void *v91; // esi
  int m; // eax
  signed int v93; // edx
  int v94; // ecx
  bool v95; // cc
  char v96; // al
  void *v98; // esi
  int j; // eax
  int v100; // ecx
  int v101; // esi
  int k; // eax
  int v103; // ecx
  char inited; // [esp+Fh] [ebp-121h]
  char v105[3]; // [esp+10h] [ebp-120h] BYREF
  char v106; // [esp+13h] [ebp-11Dh]
  int v107; // [esp+14h] [ebp-11Ch]
  double v108; // [esp+18h] [ebp-118h]
  char v109; // [esp+27h] [ebp-109h]
  signed int v110; // [esp+28h] [ebp-108h]
  Tiberium *v112; // [esp+3Ch] [ebp-F4h]
  int v114; // [esp+4Ch] [ebp-E4h]
  int v115; // [esp+50h] [ebp-E0h] BYREF
  int16_t v116[4]; // [esp+58h] [ebp-D8h] BYREF
  unsigned int v117[2]; // [esp+60h] [ebp-D0h] BYREF
  int16_t v119[2]; // [esp+74h] [ebp-BCh] BYREF
  double v120; // [esp+78h] [ebp-B8h]
  double v122; // [esp+88h] [ebp-A8h]
  double v123; // [esp+90h] [ebp-A0h]
  double v124; // [esp+98h] [ebp-98h]
  int16_t v125; // [esp+A0h] [ebp-90h] BYREF
  int v126; // [esp+A2h] [ebp-8Eh]
  double v127; // [esp+A8h] [ebp-88h]
  double v128; // [esp+B0h] [ebp-80h] BYREF
  double v129; // [esp+B8h] [ebp-78h]
  double v130; // [esp+C0h] [ebp-70h] BYREF
  int16_t v131[2]; // [esp+CCh] [ebp-64h] BYREF
  int v132[2]; // [esp+D0h] [ebp-60h] BYREF
  int v133; // [esp+D8h] [ebp-58h]
  int v134; // [esp+DCh] [ebp-54h]
  int16_t v135[2]; // [esp+E0h] [ebp-50h] BYREF
  int v136; // [esp+E4h] [ebp-4Ch]
  double v137; // [esp+E8h] [ebp-48h]
  double v138; // [esp+F0h] [ebp-40h]
  double v139; // [esp+F8h] [ebp-38h]
  int64_t v141; // [esp+108h] [ebp-28h]
}  // G42.18 ns repair
} // namespace gamemd

// 0x59E740
namespace gamemd {
VectorClass_flat * * Tiberium::CalculateSpread(MouseClass * aP1, MapResourceClass * aP2, short * a3, int a5, MouseClass * aP5, MapResourceClass * aP6, double * a7)
{

  int v8; // ecx
  int v9; // edi
  int v10; // esi
  int v11; // eax
  int v12; // edx
  int v13; // ebp
  int v14; // ebp
  int v15; // edx
  int v16; // eax
  int v17; // ebp
  int v18; // edx
  int v19; // ebp
  int v20; // eax
  int v21; // edx
  int v22; // edx
  int v23; // eax
  int v24; // ebp
  int v25; // ebp
  int16_t v26; // dx
  int v27; // edi
  int v28; // eax
  int v29; // esi
  int v30; // ebx
  int v31; // edx
  Cell *v32; // eax
  int i; // ebp
  int v35; // ecx
  unsigned int v36; // eax
  unsigned int v37; // esi
  unsigned int v38; // eax
  int16_t v39; // si
  char v40; // cl
  int v41; // edi
  int j; // eax
  int v43; // edx
  int v44; // ecx
  int v45; // ecx
  int k; // ebp
  int v47; // eax
  unsigned int v48; // eax
  unsigned int v49; // esi
  // w15f4: v3-export truncated tail (RHS lost): unsigned int v... ...
  // live body via get_context/0x59E740 — w15f4 regrafted decls only
  char v53; // bl
  RandomMap *v54; // edi
  int16_t v55; // ax
  int v56; // edi
  int v57; // ecx
  int v58; // esi
  unsigned char *v59; // eax
  int v60; // esi
  unsigned char *v61; // eax
  int v62; // esi
  int v63; // edi
  int v64; // ebp
  int v65; // ebx
  int v66; // edi
  int v67; // eax
  RandomMap *v68; // esi
  unsigned int *v69; // eax
  int16_t v70; // dx
  int m; // esi
  unsigned char *v72; // eax
  int16_t v73; // ax
  int v74; // edx
  int v75; // ecx
  int v76; // esi
  unsigned char *v77; // eax
  int v78; // edi
  unsigned char *v79; // eax
  int v80; // esi
  int v81; // edi
  RandomMap *v82; // ebp
  int v83; // ebx
  char v84; // di
  RandomMap *v85; // ebx
  int16_t v86; // si
  int v87; // ebp
  int v88; // esi
  int v89; // ecx
  int v90; // edx
  unsigned char *v91; // eax
  int v92; // edx
  unsigned char *v93; // eax
  int v94; // esi
  int v95; // ebx
  int v96; // ebp
  char v97; // bl
  RandomMap *v98; // ebp
  int v99; // edi
  int16_t v100; // si
  int v101; // edx
  int v102; // edi
  int v103; // esi
  unsigned char *v104; // eax
  int v105; // ecx
  int v106; // eax
  int v107; // edx
  unsigned char *v108; // eax
  int v109; // esi
  unsigned char *v110; // eax
  int v111; // esi
  int v112; // edi
  int v113; // ebp
  int16_t v114; // dx
  int16_t v115[2]; // [esp+10h] [ebp-118h] BYREF
  char v116; // [esp+17h] [ebp-111h] BYREF
  int16_t v117[4]; // [esp+18h] [ebp-110h] BYREF
  int16_t v118[2]; // [esp+20h] [ebp-108h] BYREF
  int16_t v119[4]; // [esp+24h] [ebp-104h] BYREF
  int v120; // [esp+2Ch] [ebp-FCh]
  int16_t v121[3]; // [esp+34h] [ebp-F4h] BYREF
  char inited; // [esp+3Bh] [ebp-EDh]
  int16_t v123[2]; // [esp+3Ch] [ebp-ECh] BYREF
  RandomMap *v124; // [esp+40h] [ebp-E8h]
  int16_t v125; // [esp+48h] [ebp-E0h]
  int16_t v126; // [esp+4Ah] [ebp-DEh]
  int v127; // [esp+50h] [ebp-D8h]
  int v128; // [esp+54h] [ebp-D4h]
  int v129; // [esp+58h] [ebp-D0h]
  int v130; // [esp+5Ch] [ebp-CCh]
  int v131; // [esp+60h] [ebp-C8h]
  int v132; // [esp+64h] [ebp-C4h]
  int v133; // [esp+68h] [ebp-C0h]
  int v134; // [esp+6Ch] [ebp-BCh]
  int v135; // [esp+70h] [ebp-B8h] BYREF
  int v136; // [esp+74h] [ebp-B4h]
  int v137; // [esp+78h] [ebp-B0h]
  int v138; // [esp+7Ch] [ebp-ACh]
  int64_t v139; // [esp+80h] [ebp-A8h] BYREF
  int v140[4]; // [esp+88h] [ebp-A0h] BYREF
  int v141; // [esp+98h] [ebp-90h] BYREF
  int v142; // [esp+9Ch] [ebp-8Ch] BYREF
  int16_t v143[2]; // [esp+A0h] [ebp-88h] BYREF
  int16_t v144[2]; // [esp+A4h] [ebp-84h] BYREF
  int v145; // [esp+A8h] [ebp-80h] BYREF
  int16_t v146[2]; // [esp+ACh] [ebp-7Ch] BYREF
  int v147; // [esp+B0h] [ebp-78h] BYREF
  int16_t v148[2]; // [esp+B4h] [ebp-74h] BYREF
  int v149; // [esp+B8h] [ebp-70h] BYREF
  int v150; // [esp+BCh] [ebp-6Ch] BYREF
  int v151; // [esp+C0h] [ebp-68h] BYREF
  int v152; // [esp+C4h] [ebp-64h] BYREF
  int v153; // [esp+C8h] [ebp-60h] BYREF
  int16_t v154[2]; // [esp+CCh] [ebp-5Ch] BYREF
  int16_t v155[2]; // [esp+D0h] [ebp-58h] BYREF
  int v156; // [esp+D4h] [ebp-54h] BYREF
  int16_t v157[2]; // [esp+D8h] [ebp-50h] BYREF
  int16_t v158[2]; // [esp+DCh] [ebp-4Ch] BYREF
  int v159; // [esp+E0h] [ebp-48h] BYREF
  int v160; // [esp+E4h] [ebp-44h] BYREF
  int16_t v161[2]; // [esp+E8h] [ebp-40h] BYREF
  int16_t v162[2]; // [esp+ECh] [ebp-3Ch] BYREF
  int v163; // [esp+F0h] [ebp-38h] BYREF
  int v164; // [esp+F4h] [ebp-34h] BYREF
  int v165; // [esp+F8h] [ebp-30h] BYREF
  int v166; // [esp+FCh] [ebp-2Ch] BYREF
  int v167; // [esp+100h] [ebp-28h] BYREF
  int v168; // [esp+104h] [ebp-24h] BYREF
  int v169; // [esp+108h] [ebp-20h] BYREF
  int v170; // [esp+10Ch] [ebp-1Ch] BYREF
  int v171; // [esp+110h] [ebp-18h] BYREF
  int v172; // [esp+114h] [ebp-14h] BYREF
  int v173; // [esp+118h] [ebp-10h] BYREF
  int v174; // [esp+11Ch] [ebp-Ch] BYREF
  int v175; // [esp+120h] [ebp-8h] BYREF
  int v176; // [esp+124h] [ebp-4h] BYREF
}
} // namespace gamemd
