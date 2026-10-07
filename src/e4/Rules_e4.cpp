// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Rules_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/AnimTypeClass_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/RulesClass_e4.hpp"
#include "e4/classes/VocClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Frame_e4.hpp"
#include "e4/classes/Mouse_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/Rect_e4.hpp"
#include "e4/classes/ScoreScreen_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/SaveGame_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/Scenario_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/MPCooperative_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/Theme_e4.hpp"
#include "e4/classes/Screen_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"

// 0x6691E0
namespace gamemd {
int Rules::ReadMiscINI()
{

  double v1; // st7
  int result; // eax
  int Int_Overwrite; // eax
  unsigned int *v5; // ebx
  unsigned int *v6; // eax
  unsigned int *m_C; // ebx
  unsigned int *v8; // eax
  int v9; // ebx
  int Index; // eax
  int v11; // ebx
  int v12; // eax
  int v13; // ebx
  int v14; // eax
  int v15; // ebx
  int v16; // eax
  int v17; // ebx
  int v18; // eax
  int v19; // ebx
  int v20; // eax
  int v21; // ebx
  int v22; // eax
  int v23; // ebx
  int v24; // eax
  int v25; // ebx
  int v26; // eax
  int v27; // ebx
  int v28; // eax
  int v29; // ebx
  int v30; // eax
  int v31; // ebx
  int v32; // eax
  int v33; // ebx
  int v34; // eax
  int v35; // ebx
  int v36; // eax
  int v37; // ebx
  int v38; // eax
  int v39; // ebx
  int v40; // eax
  int v41; // ebx
  int v42; // eax
  int v43; // ebx
  int v44; // eax
  int v45; // ebx
  int v46; // eax
  int v47; // ebx
  int v48; // eax
  int v49; // ebx
  int v50; // eax
  int v51; // ebx
  int v52; // eax
  // w15f4: v3-export truncated tail (RHS lost): in... ...
  // live body via get_context/0x6691E0 — w15f4 regrafted decls only
  int v53; // ebx
  int v54; // eax
  int v55; // ebx
  int v56; // eax
  int v57; // ebx
  int v58; // eax
  int v59; // ebx
  int v60; // eax
  int v61; // ebx
  int v62; // eax
  int v63; // ebx
  int v64; // eax
  int v65; // ebx
  int v66; // eax
  int v67; // ebx
  int v68; // eax
  int v69; // ebx
  int v70; // eax
  int v71; // ebx
  int v72; // eax
  int v73; // ebx
  int v74; // eax
  int v75; // ebx
  int v76; // eax
  int v77; // ebx
  int v78; // eax
  int v79; // ebx
  int v80; // eax
  int v81; // ebx
  int v82; // eax
  int v83; // ebx
  int v84; // eax
  int v85; // ebx
  int v86; // eax
  int v87; // ebx
  int v88; // eax
  int v89; // ebx
  int v90; // eax
  int v91; // ebx
  int v92; // eax
  int v93; // ebx
  int v94; // eax
  int v95; // ebx
  int v96; // eax
  int v97; // ebx
  int v98; // eax
  int v99; // ebx
  int v100; // eax
  int v101; // ebx
  int v102; // eax
  int v103; // ebx
  int v104; // eax
  int v105; // ebx
  int v106; // eax
  int v107; // ebx
  int v108; // eax
  int v109; // ebx
  int v110; // eax
  int v111; // ebx
  int v112; // eax
  int v113; // ebx
  int v114; // eax
  int v115; // ebx
  int v116; // eax
  int v117; // ebx
  int v118; // eax
  int v119; // ebx
  int v120; // eax
  int v121; // ebx
  int v122; // eax
  int v123; // ebx
  int v124; // eax
  int v125; // ebx
  int v126; // eax
  int v127; // ebx
  int v128; // eax
  int v129; // ebx
  int v130; // eax
  int v131; // ebx
  int v132; // eax
  int v133; // ebx
  int v134; // eax
  int v135; // ebx
  int v136; // eax
  int v137; // ebx
  int v138; // eax
  int v139; // ebx
  int v140; // eax
  int v141; // ebx
  int v142; // eax
  int v143; // ebx
  int v144; // eax
  int v145; // ebx
  int v146; // eax
  int v147; // ebx
  int v148; // eax
  int v149; // ebx
  int v150; // eax
  unsigned int *v151; // ebx
  unsigned int *v152; // eax
  unsigned int *v153; // ebx
  unsigned int *v154; // eax
  int v155; // ebx
  int v156; // eax
  int v157; // ebx
  int v158; // eax
  int v160; // eax
  int v161; // ebx
  int v162; // eax
  int v163; // ebx
  int v164; // eax
  int v165; // ebx
  int v166; // eax
  int v167; // ebx
  int v168; // eax
  int v169; // ebx
  int v170; // eax
  int v171; // ebx
  int v172; // eax
  int v173; // ebx
  int v174; // eax
  int v175; // ebx
  int v176; // eax
  int v177; // ebx
  int v178; // eax
  int v179; // ebx
  int v180; // eax
  int v181; // ebx
  int v182; // eax
  unsigned int *INIClassIntList; // ebx
  int v184; // ebx
  int v185; // eax
  int v186; // ebx
  int v187; // eax
  int v188; // ebx
  int v189; // eax
  int v190; // ebx
  int v191; // eax
  int v192; // ebx
  int v193; // eax
  int v194; // ebx
  int v195; // eax
  int v196; // ebx
  int v197; // eax
  int v198; // ebx
  int v199; // eax
  int v200; // ebx
  int v201; // eax
  int v202; // ebx
  int v203; // eax
  int v204; // ebx
  int v205; // eax
  int v206; // ebx
  int v207; // eax
  int v208; // ebx
  int v209; // eax
  int v210; // ebx
  int v211; // eax
  int v212; // ebx
  int v213; // eax
  int v214; // ebx
  int v215; // eax
  int v216; // ebx
  int v217; // eax
  int v218; // ebx
  int v219; // eax
  unsigned int *v220; // ebx
  int v221; // ebx
  int v222; // eax
  char *i; // eax
  char *j; // eax
  unsigned int *v225; // ebx
  unsigned int *v226; // eax
  unsigned int *v227; // ebx
  unsigned int *v228; // eax
  int v229; // eax
  unsigned int *v230; // ebx
  unsigned int *v231; // eax
  unsigned int *v232; // ebx
  unsigned int *v233; // eax
  unsigned int *v244; // ebp
  int v249; // eax
  int v250; // eax
  int v251; // eax
  int Coord; // eax
  int v253; // eax
  int v254; // eax
  int v255; // eax
  float *v256; // esi
  int v258; // [esp-Ch] [ebp-E0h]
  int16_t v259; // [esp-8h] [ebp-DCh]
  int v260; // [esp-4h] [ebp-D8h]
  double v261[2]; // [esp+0h] [ebp-D4h]
  int v262; // [esp+18h] [ebp-BCh] BYREF
  char String[128]; // [esp+1Ch] [ebp-B8h] BYREF
  DynamicVector v264; // [esp+9Ch] [ebp-38h] BYREF
  int v265; // [esp+C8h] [ebp-Ch]
  int v266; // [esp+CCh] [ebp-8h]
  int v267; // [esp+D0h] [ebp-4h]
  INIClass *v268; // [esp+D8h] [ebp+4h]
}

} // namespace gamemd

// 0x66BBB0
namespace gamemd {
IUnknown * * Rules::ReadCombatINI()
{

  double v1; // st7
  int result; // eax
  int Int_Overwrite; // eax
  char *i; // eax
  int CapacityIncrement; // ecx
  int unknown_18; // edx
  void *Items; // eax
  char *j; // eax
  int Count; // ecx
  int v11; // edx
  void *v12; // eax
  char *k; // eax
  int v14; // edx
  int v15; // ecx
  void *v16; // eax
  char *m; // eax
  int v18; // ecx
  int v19; // edx
  void *v20; // eax
  char *n; // eax
  int v22; // ecx
  int v23; // edx
  void *v24; // eax
  char *ii; // eax
  int v26; // edx
  int v27; // ecx
  void *v28; // eax
  int m_C; // ebx
  int v30; // eax
  int v31; // ebx
  int v32; // eax
  int v33; // ebx
  int v34; // eax
  int v35; // ebx
  int v36; // eax
  int v37; // ebx
  int v38; // eax
  int v39; // ebx
  int v40; // eax
  int v41; // ebx
  int v42; // eax
  int v43; // ebx
  int v44; // eax
  int v45; // ebx
  int v46; // eax
  int v47; // ebx
  int v48; // eax
  char Bool_Overwrite; // al
  int v50; // ebx
  // w15f4: v3-export truncated tail (RHS lost): i... ...
  // live body via get_context/0x66BBB0 — w15f4 regrafted decls only
  void ***v57; // eax
  void **v58; // edx
  void *v59; // eax
  void ***v60; // eax
  void ***v61; // eax
  unsigned int *v62; // ebx
  unsigned int *v63; // eax
  unsigned int *v65; // ebx
  unsigned int *v66; // eax
  unsigned int *v67; // ebx
  unsigned int *v68; // eax
  int v69; // ebx
  int v70; // eax
  unsigned int *v71; // ebx
  unsigned int *v72; // eax
  unsigned int *v73; // ebx
  unsigned int *v74; // eax
  unsigned int *v75; // ebx
  unsigned int *v76; // eax
  unsigned int *v77; // ebx
  unsigned int *v78; // eax
  unsigned int *v79; // ebx
  unsigned int *v80; // eax
  unsigned int *v81; // ebx
  unsigned int *v82; // eax
  unsigned int *v83; // ebx
  unsigned int *v84; // eax
  unsigned int *v85; // ebx
  unsigned int *v86; // eax
  unsigned int *v87; // ebx
  unsigned int *v88; // eax
  char v89; // al
  double v90; // rax
  int v91; // edx
  int v93; // eax
  int v94; // ecx
  int v95; // eax
  double v96; // rax
  int v97; // edx
  int Coord; // eax
  unsigned int v100; // ecx
  unsigned int v101; // edx
  int v102; // ecx
  int v104; // eax
  int v105; // edx
  int v106; // eax
  int v107; // ecx
  char v108; // al
  char v109; // dl
  char v110; // al
  char v111; // cl
  char v112; // al
  char v113; // dl
  char v114; // al
  int v115; // ecx
  void **v116; // [esp-14h] [ebp-E4h] BYREF
  void *v117; // [esp-10h] [ebp-E0h]
  int v118; // [esp-Ch] [ebp-DCh]
  int16_t v119; // [esp-8h] [ebp-D8h]
  int v120; // [esp-4h] [ebp-D4h]
  double v121[2]; // [esp+0h] [ebp-D0h]
  void ***IntList; // [esp+14h] [ebp-BCh] BYREF
  DynamicVector v124[3]; // [esp+34h] [ebp-9Ch] BYREF
  INIClass *v125; // [esp+D8h] [ebp+8h]
}
} // namespace gamemd

// 0x67A570
namespace gamemd {
unsigned int * Rules::CopyDataArray(VectorClass_flat * aP1)
{

  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // eax

  if ( this == (Rules *)aP1 ) /*0x67a57a*/
    goto LABEL_8; /*0x67a57a*/
  (*(void (**)(Rules *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x67a57e*/
  v3 = ((int *)aP1)[2]; /*0x67a581*/
  *(unsigned int *)&this->m_5[3] = v3; /*0x67a586*/
  if ( !v3 ) /*0x67a589*/
  {
    *(unsigned int *)&this->m_1[3] = 0; /*0x67a5d6*/
    BYTE1(this->m_C) = 0; /*0x67a5dd*/
LABEL_8:
    *(unsigned int *)this->__tail_10 = ((unsigned int *)aP1)[4]; /*0x67a5e1*/
    *((unsigned int *)this + 5) = ((unsigned int *)aP1)[5]; /*0x67a5ea*/
    return (unsigned int *)(this->__pad_0); /*0x67a5ed*/
  }
  v4 = (int)(__2_YAPAXI_Z(4 * v3)); /*0x67a593*/
  *(unsigned int *)&this->m_1[3] = v4; /*0x67a59b*/
  if ( !v4 ) /*0x67a5a0*/
    goto LABEL_8; /*0x67a5a0*/
  v5 = *(unsigned int *)&this->m_5[3]; /*0x67a5a2*/
  v6 = 0; /*0x67a5a5*/
  BYTE1(this->m_C) = 1; /*0x67a5a9*/
  if ( v5 <= 0 ) /*0x67a5ad*/
    goto LABEL_8; /*0x67a5ad*/
  do /*0x67a5c1*/
  {
    *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * v6) = *(unsigned int *)(((unsigned int *)aP1)[1] + 4 * v6); /*0x67a5b8*/
    ++v6; /*0x67a5be*/
  }
  while ( v6 < *(unsigned int *)&this->m_5[3] ); /*0x67a5c1*/
  *(unsigned int *)this->__tail_10 = ((unsigned int *)aP1)[4]; /*0x67a5c6*/
  *((unsigned int *)this + 5) = ((unsigned int *)aP1)[5]; /*0x67a5cc*/
  return (unsigned int *)(this->__pad_0); /*0x67a5d1*/

}
}
// 0x5FB2E0
namespace gamemd {
char * Rules::GetProductionTimeMult(int aP1)
{

  char *result; // eax
  int v3; // ecx

  result = (char *)aP1; /*0x5fb2e0*/
  if ( aP1 ) /*0x5fb2e6*/
  {
    v3 = *(unsigned int *)this->__pad_0; /*0x5fb2e8*/
    if ( aP1 >= 5 ) /*0x5fb2ed*/
      return (char *)(8 * aP1 / (v3 + 1)); /*0x5fb301*/
    else
      return (char *)((&(&off_832CEC)[8 * aP1])[v3]); /*0x5fb2f2*/
  }
  return result; /*0x5fb2f9*/

}
} // namespace gamemd
