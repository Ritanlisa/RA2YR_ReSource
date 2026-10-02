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
namespace gamemd {  // G42.18 ns repair
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
  in... [74313 chars total]
}
}  // G42.18 ns repair

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
  i... [43328 chars total]
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
  v3 = (int)(aP1[2]); /*0x67a581*/
  *(unsigned int *)&this->m_5[3] = v3; /*0x67a586*/
  if ( !v3 ) /*0x67a589*/
  {
    *(unsigned int *)&this->m_1[3] = 0; /*0x67a5d6*/
    BYTE1(this->m_C) = 0; /*0x67a5dd*/
LABEL_8:
    *(unsigned int *)this->__tail_10 = aP1[4]; /*0x67a5e1*/
    *((unsigned int *)this + 5) = (unsigned int)(aP1[5]); /*0x67a5ea*/
    return this->__pad_0; /*0x67a5ed*/
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
    *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * v6) = *(unsigned int *)(aP1[1] + 4 * v6); /*0x67a5b8*/
    ++v6; /*0x67a5be*/
  }
  while ( v6 < *(unsigned int *)&this->m_5[3] ); /*0x67a5c1*/
  *(unsigned int *)this->__tail_10 = aP1[4]; /*0x67a5c6*/
  *((unsigned int *)this + 5) = (unsigned int)(aP1[5]); /*0x67a5cc*/
  return this->__pad_0; /*0x67a5d1*/

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
