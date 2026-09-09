// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Rules_e4.hpp"

// 0x5FB2E0
namespace gamemd {
char * Rules::GetProductionTimeMult(CellStruct * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__thiscall Rules::GetProductionTimeMult(int *this, CellStruct *aP1)
{
  CellStruct *result; // eax
  int v3; // ecx

  result = aP1; /*0x5fb2e0*/
  if ( aP1 ) /*0x5fb2e6*/
  {
    v3 = *this; /*0x5fb2e8*/
    if ( (int)aP1 >= 5 ) /*0x5fb2ed*/
      return (char *)(8 * (int)aP1 / (v3 + 1)); /*0x5fb301*/
    else
      return *(char **)&stru_830620.__pad_14B0[32 * (_DWORD)aP1 + 4636 + 4 * v3]; /*0x5fb2f2*/
  }
  return (char *)result; /*0x5fb2f9*/
}
}
} // namespace gamemd

// 0x6691E0
namespace gamemd {
int Rules::ReadMiscINI()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// (v3 export truncated pseudocode — commented out; live version via get_context)
// int __thiscall Rules::ReadMiscINI(RulesClass *this)
// {
//   int result; // eax
//   int Int_Overwrite; // eax
//   int FlashFrameTime; // ebx
//   AnimTypeClass *v5; // eax
//   int CreateInfantrySound; // ebx
//   AnimTypeClass *v7; // eax
//   int ImpactLandSound; // ebx
//   int Index; // eax
//   int ChronoInSound; // ebx
//   int v11; // eax
//   int ChronoOutSound; // ebx
//   int v13; // eax
//   int SpySatActivationSound; // ebx
//   int v15; // eax
//   int SpySatDeactivationSound; // ebx
//   int v17; // eax
//   int UpgradeVeteranSound; // ebx
//   int v19; // eax
//   int UpgradeEliteSound; // ebx
//   int v21; // eax
//   int VoiceIFVRepair; // ebx
//   int v23; // eax
//   int SlavesFreeSound; // ebx
//   int v25; // eax
//   int SlaveMinerDeploySound; // ebx
//   int v27; // eax
//   int SlaveMinerUndeploySound; // ebx
//   int v29; // eax
//   int BunkerWallsUpSound; // ebx
//   int v31; // eax
//   int MasterMindOverloadDeathSound; // ebx
//   int v33; // eax
//   int AirstrikeAttackVoice; // ebx
//   int v35; // eax
//   int MindClearedSound; // ebx
//   int v37; // eax
//   in... [94760 chars total]
// end truncated pseudocode
}
} // namespace gamemd

// 0x66BBB0
namespace gamemd {
int Rules::ReadCombatINI()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// (v3 export truncated pseudocode — commented out; live version via get_context)
// int __thiscall Rules::ReadCombatINI(RulesClass *this)
// {
//   int result; // eax
//   int Int_Overwrite; // eax
//   ObjectClass *i; // eax
//   int v5; // ecx
//   VectorClass *v6; // edx
//   void *v7; // eax
//   ObjectClass *j; // eax
//   void *v9; // ecx
//   void *v10; // edx
//   void *v11; // eax
//   ObjectClass *k; // eax
//   void *v13; // edx
//   VectorClass *v14; // ecx
//   void *v15; // eax
//   ObjectClass *m; // eax
//   void *v17; // ecx
//   VectorClass *v18; // edx
//   void *v19; // eax
//   ObjectClass *n; // eax
//   float v21; // ecx
//   int v22; // edx
//   void *v23; // eax
//   AbstractClass *ii; // eax
//   int v25; // edx
//   VectorClass *v26; // ecx
//   void *v27; // eax
//   int v28; // ebx
//   int v29; // eax
//   int v30; // ebx
//   int v31; // eax
//   int v32; // ebx
//   int v33; // eax
//   int v34; // ebx
//   int v35; // eax
//   int v36; // ebx
//   int v37; // eax
//   int v38; // ebx
//   int v39; // eax
//   int v40; // ebx
//   int v41; // eax
//   int v42; // ebx
//   int v43; // eax
//   CCINIClass *v44; // ebx
//   CCINIClass *v45; // eax
//   int v46; // ebx
//   int ... [51989 chars total]
// end truncated pseudocode
}
} // namespace gamemd

// 0x67A570
namespace gamemd {
unsigned int * Rules::CopyDataArray(VectorClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall Rules::CopyDataArray(_DWORD *this, VectorClass *aP1)
{
  void *v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // eax

  if ( this == (_DWORD *)aP1 ) /*0x67a57a*/
    goto LABEL_8; /*0x67a57a*/
  (*(void (__thiscall **)(_DWORD *))(*this + 12))(this); /*0x67a57e*/
  v3 = aP1->field_8; /*0x67a581*/
  *(this + 2) = v3; /*0x67a586*/
  if ( !v3 ) /*0x67a589*/
  {
    *(this + 1) = 0; /*0x67a5d6*/
    *((_BYTE *)this + 13) = 0; /*0x67a5dd*/
LABEL_8:
    *(this + 4) = aP1->field_10; /*0x67a5e1*/
    *(this + 5) = aP1->field_14; /*0x67a5ea*/
    return this; /*0x67a5ed*/
  }
  v4 = __2_YAPAXI_Z(4 * (_DWORD)v3); /*0x67a593*/
  *(this + 1) = v4; /*0x67a59b*/
  if ( !v4 ) /*0x67a5a0*/
    goto LABEL_8; /*0x67a5a0*/
  v5 = *(this + 2); /*0x67a5a2*/
  v6 = 0; /*0x67a5a5*/
  *((_BYTE *)this + 13) = 1; /*0x67a5a9*/
  if ( v5 <= 0 ) /*0x67a5ad*/
    goto LABEL_8; /*0x67a5ad*/
  do /*0x67a5c1*/
  {
    *(_DWORD *)(*(this + 1) + 4 * v6) = *(_DWORD *)(*(_DWORD *)&aP1->field_1[3] + 4 * v6); /*0x67a5b8*/
    ++v6; /*0x67a5be*/
  }
  while ( v6 < *(this + 2) ); /*0x67a5c1*/
  *(this + 4) = aP1->field_10; /*0x67a5c6*/
  *(this + 5) = aP1->field_14; /*0x67a5cc*/
  return this; /*0x67a5d1*/
}
}
} // namespace gamemd
