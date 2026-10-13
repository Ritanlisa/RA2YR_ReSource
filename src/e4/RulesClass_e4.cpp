// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include <new>  // W20L4 T2 placement-new Constructor forwarding
#include "e4/e4_globals.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/TypeList_cptr_TerrainTypeClass_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/RulesClass_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/Rules_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/AnimTypeClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/RocketLocomotionClass_17_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/SaveGame_e4.hpp"
#include "e4/classes/MPCooperative_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/Theme_e4.hpp"
#include "e4/classes/TerrainTypeClass_e4.hpp"
#include "e4/classes/INIEntry_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/WeaponTypeClass_e4.hpp"
#include "e4/minimal_carriers.hpp"  // G42.42q minimal carriers
#include "e4/classes/KeywordClass_e4.hpp"  // G57w10 D supply
#include "e4/classes/GlobalArray_e4.hpp"  // G57w10 D supply
// ==== G42.57w9 data-label supply (IDA truth; e4_globals pending) ====
extern char a0None[];  // data: 0x83d4ac truth(IDA G42.57w9)


// 0x48ACF0
namespace gamemd {  // G42.18 ns repair
double RulesClass::GetFiringDistance()
{
  return (double)dword_8871E0->RepairRate * 0.5; /*0x48ad01*/
}  // G42.18 ns repair
} // namespace gamemd

// 0x538B30
namespace gamemd {
unsigned int * RulesClass::InitINIChain(int a2, int a3)
{
  this->DetailMinFrameRateMovie = 0; /*0x538b3b*/
  this->DetailBufferZoneWidth = a2; /*0x538b3e*/
  (this->AmmoCrateDamage) = 1; /*0x538b41*/
  (this->u8_D) = 0; /*0x538b45*/
  this->DetailMinFrameRateNormal = (int)&vt_VectorClass; /*0x538b48*/
  if ( a2 ) /*0x538b4e*/
  {
    if ( a3 ) /*0x538b56*/
    {
      this->DetailMinFrameRateMovie = a3; /*0x538b58*/
      return &this->DetailMinFrameRateNormal; /*0x538b5e*/
    }
    this->DetailMinFrameRateMovie = operator new(4 * a2); /*0x538b6d*/
    (this->u8_D) = 1; /*0x538b70*/
  }
  return &this->DetailMinFrameRateNormal; /*0x538b5d*/
}
} // namespace gamemd
// 0x665650 site-form Constructor supply (W20L4 T2; forwards to ctor def below)
namespace gamemd {
int RulesClass::Constructor(void *aP1) { return (int)(void *)(new (aP1) RulesClass()); }

  float *p_RadarEventColorSpeed; // ebp
  char *v3; // ecx
  char *v4; // ebp
  int v5; // edx
  int v6; // eax
  char *v7; // edi

  aP1->DetailMinFrameRateNormal = 15; /*0x665665*/
  aP1->DetailMinFrameRateMovie = 20; /*0x66566b*/
  aP1->DetailBufferZoneWidth = 5; /*0x665672*/
  aP1->AmmoCrateDamage = 100; /*0x665675*/
  aP1->LargeVisceroid = 0; /*0x66567c*/
  aP1->SmallVisceroid = 0; /*0x66567f*/
  aP1->AttackingAircraftSightRange = 5; /*0x665682*/
  aP1->TunnelSpeed[0] = 0; /*0x665685*/
  aP1->TunnelSpeed[1] = 1072693248; /*0x665688*/
  aP1->TiberiumHeal[0] = 286331153; /*0x66568f*/
  aP1->TiberiumHeal[1] = 1066471697; /*0x66569b*/
  aP1->SelfHealInfantryFrames = 1000; /*0x6656a7*/
  aP1->SelfHealInfantryAmount = 1; /*0x6656aa*/
  aP1->SelfHealUnitFrames = 1000; /*0x6656ad*/
  aP1->SelfHealUnitAmount = 1; /*0x6656b0*/
  aP1->FreeMCV = 0; /*0x6656b3*/
  aP1->BerzerkAllowed = 0; /*0x6656b6*/
  aP1->PoseDir = ... [67687 chars total]
}
// 0x665650
namespace gamemd {  // G42.18c ns repair
RulesClass::RulesClass()
{

  float *p_RadarEventColorSpeed; // ebp
  char *v3; // ecx
  char *v4; // ebp
  int v5; // edx
  int v6; // eax
  char *v7; // edi

  this->DetailMinFrameRateNormal = 15; /*0x665665*/
  this->DetailMinFrameRateMovie = 20; /*0x66566b*/
  this->DetailBufferZoneWidth = 5; /*0x665672*/
  this->AmmoCrateDamage = 100; /*0x665675*/
  this->LargeVisceroid = 0; /*0x66567c*/
  this->SmallVisceroid = 0; /*0x66567f*/
  this->AttackingAircraftSightRange = 5; /*0x665682*/
  (&this->TunnelSpeed)[0] = 0; /*0x665685*/
  (&this->TunnelSpeed)[1] = 1072693248; /*0x665688*/
  (&this->TiberiumHeal)[0] = 286331153; /*0x66568f*/
  (&this->TiberiumHeal)[1] = 1066471697; /*0x66569b*/
  this->SelfHealInfantryFrames = 1000; /*0x6656a7*/
  this->SelfHealInfantryAmount = 1; /*0x6656aa*/
  this->SelfHealUnitFrames = 1000; /*0x6656ad*/
  this->SelfHealUnitAmount = 1; /*0x6656b0*/
  this->FreeMCV = 0; /*0x6656b3*/
  this->BerzerkAllowed = 0; /*0x6656b6*/
  // w15f4: v3-export truncated tail (RHS lost): this->PoseDir = ... ...
  // live body via get_context/0x665650 — w15f4 regrafted decls only
}
}  // G42.18c ns repair

// 0x667A30
namespace gamemd {  // G42.18c ns repair
int RulesClass::DTOR(void *a1)
{

  char *v2; // ecx
  void *Harvester; // eax
  void *Production; // eax
  void *v5; // eax
  UnitTypeClass *UnitCrateType; // eax
  void *v7; // eax
  void *v8; // eax
  void *v9; // eax
  void *AirstripLimit; // eax
  void *v11; // eax
  void *v12; // eax
  void *v13; // eax
  void *v14; // eax
  void *v15; // eax
  void *v16; // eax
  void *v17; // eax
  void *v18; // eax
  void *IronCurtainDuration; // eax
  void *IvanDamage; // eax
  WarheadTypeClass *MutateExplosionWarhead; // eax
  InfantryTypeClass *Technician; // eax
  void *SpyPowerBlackout; // eax
  void *ChronoDistanceFactor; // eax
  void *v25; // eax
  void *v26; // eax
  void *v27; // eax
  void *v28; // eax
  void *ChuteSound; // eax
  void *v30; // eax
  void *RevealTriggerRadius; // eax
  void *v32; // eax
  void *v33; // eax
  void *v34; // eax
  void *v35; // eax
  void *v36; // eax
  void *v37; // eax
  void *v38; // eax
  void *v39; // eax
  void *v40; // eax
  // w15f4: v3-export truncated tail (RHS lost): vo... ...
  // live body via get_context/0x667A30 — w15f4 regrafted decls only
  void *v41; // eax
  void *v42; // eax
  void *v43; // eax
  void *CrateFireSound; // eax
  void *DefaultChronoSound; // eax
  void *IFVTransformSound; // eax
  void *GUIMoveOutSound; // eax
  int result; // eax
}
}  // G42.18c ns repair

// 0x66D150
namespace gamemd {  // G42.18c ns repair
void* RulesClass::readAudioVisual()
{

  int result; // eax
  int Int_Overwrite; // eax
  int v4; // ecx
  int BerserkColor; // eax
  int IronCurtainColor; // ecx
  double v9; // [esp-8h] [ebp-10h]
  bool *v10; // [esp+Ch] [ebp+4h]

  result = INIClass::BinarySearchSection((int)v10, (unsigned __int8 *)aElevationmodel); /*0x66d160*/
  if ( result ) /*0x66d16c*/
  {
    Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x66d183*/
                      v10,
                      (unsigned __int8 *)aElevationmodel,
                      aElevationincre,
                      this->ColorAdd[9]);
    v4 = this->ColorAdd[11]; /*0x66d188*/
    this->ColorAdd[9] = Int_Overwrite; /*0x66d18e*/
    HIDWORD(v9) = this->LaserTargetColor; /*0x66d1a0*/
    LODWORD(v9) = v4; /*0x66d1a1*/
    INIClass::ReadDouble_Overwrite((double *)v10, (unsigned __int8 *)aElevationmodel, aElevationincre_0, v9); /*0x66d1aa*/
    BerserkColor = this->BerserkColor; /*0x66d1af*/
    IronCurtainColor = this->IronCurtainColor; /*0x66d1b5*/
    __asm { fstp qword ptr [esi+1840h] } /*0x66d1bb*/
    *&this->RepairRate = _RT1; /*0x66d1bb*/
    result = INIClass::ReadDouble_Overwrite( /*0x66d1d1*/
               (double *)v10,
               (unsigned __int8 *)aElevationmodel,
               aElevationbonus,
               COERCE_DOUBLE(__PAIR64__(BerserkColor, IronCurtainColor)));
    __asm { fstp qword ptr [esi+1848h] } /*0x66d1d6*/
    *&this->IronCurtainColor = _RT1; /*0x66d1d6*/
    LOBYTE(result) = 1; /*0x66d1dd*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x66d1e4*/
  }
  return result; /*0x66d1dc*/

}
}  // G42.18c ns repair
// 0x673E80
namespace gamemd {  // G42.18c ns repair
INIClass * * RulesClass::ReadPowerupsSection(void * aPowerups)
{

  int result; // eax
  int v2; // edi
  double *v3; // ebp
  char *v4; // eax
  const char *v5; // esi
  char *v6; // eax
  GlobalArray *v7; // esi
  char *v8; // eax
  char *v9; // esi
  char *v10; // esi
  char String[128]; // [esp+0h] [ebp-80h] BYREF
  unsigned __int8 ***v13; // [esp+84h] [ebp+4h]

  result = INIClass::BinarySearchSection((int)v13, (unsigned __int8 *)aPowerups); /*0x673e90*/
  if ( result ) /*0x673e9c*/
  {
    v2 = 0; /*0x673ea5*/
    v3 = dbl_89EC28; /*0x673ea7*/
    do /*0x673fd7*/
    {
      result = INIClass::GetString( /*0x673ed0*/
                 (INIClass *)v13,
                 (unsigned __int8 *)aPowerups,
                 (&off_7E523C)[v2],
                 a0None,
                 String,
                 128);
      if ( result ) /*0x673ed7*/
      {
        v4 = strtok(String, Str); /*0x673ee7*/
        v5 = v4; /*0x673eec*/
        if ( v4 ) /*0x673ef3*/
        {
          String::Trim(v4); /*0x673ef7*/
          dword_81DA8C[v2] = atoi(v5); /*0x673f05*/
        }
        v6 = strtok(0, Str); /*0x673f13*/
        v7 = (GlobalArray *)v6; /*0x673f18*/
        if ( v6 ) /*0x673f1f*/
        {
          String::Trim(v6); /*0x673f23*/
          dword_81DAD8[v2] = GlobalArray::FindString(v7); /*0x673f2f*/
        }
        v8 = strtok(0, Str); /*0x673f3d*/
        v9 = v8; /*0x673f42*/
        if ( v8 ) /*0x673f49*/
        {
          String::Trim(v8); /*0x673f4d*/
          if ( _strcmpi(v9, off_825BF8) ) /*0x673f58*/
          {
            if ( !_strcmpi(v9, g_Str_no) ) /*0x673f73*/
              byte_89ECC0[v2] = 0; /*0x673f7f*/
          }
          else
          {
            byte_89ECC0[v2] = 1; /*0x673f64*/
          }
        }
        result = (int)strtok(0, Str); /*0x673f8c*/
        v10 = (char *)result; /*0x673f91*/
        if ( result ) /*0x673f98*/
        {
          if ( strchr((const char *)result, 37) ) /*0x673f9d*/
          {
            result = atof(v10); /*0x673faa*/
            __asm { fmul ds:dbl_7E3808 } /*0x673faf*/
          }
          else
          {
            String::Trim(v10); /*0x673fbc*/
            result = atof(v10); /*0x673fc2*/
          }
          __asm { fstp qword ptr [ebp+0] } /*0x673fca*/
          *v3 = _RT1; /*0x673fca*/
        }
      }
      ++v3; /*0x673fcd*/
      ++v2; /*0x673fd0*/
    }
    while ( (int)v3 < (int)byte_89ECC0 ); /*0x673fd7*/
    LOBYTE(result) = 1; /*0x673fdf*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x673feb*/
  }
  return result; /*0x673fe2*/

}
}  // G42.18c ns repair
// 0x6743D0
namespace gamemd {  // G42.18c ns repair
INIClass * * RulesClass::readDifficulty(void * aClimb, void * aCruiseheight, void * aJumpjetcontrol, void * aTurnrate, void * aWobbledeviatio, void * aWobblesperseco)
{

  int result; // eax
  int Int_Overwrite; // eax
  int v4; // edx
  int v5; // edx
  int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // edx
  unsigned int v10; // ecx
  unsigned int v11; // edx
  int v13; // ecx
  double v15; // [esp-8h] [ebp-10h]
  bool *v16; // [esp+Ch] [ebp+4h]

  result = INIClass::BinarySearchSection((int)v16, (unsigned __int8 *)aJumpjetcontrol); /*0x6743e0*/
  if ( result ) /*0x6743ec*/
  {
    *(unsigned int *)&aClimb->__pad_240[460] = INIClass::ReadInt_Overwrite( /*0x67440c*/
                                         v16,
                                         (unsigned __int8 *)aJumpjetcontrol,
                                         aTurnrate,
                                         *(unsigned int *)&aClimb->__pad_240[460]);
    Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x674427*/
                      v16,
                      (unsigned __int8 *)aJumpjetcontrol,
                      g_INI_Key_Speed,
                      *(unsigned int *)&aClimb->__pad_240[464]);
    v4 = *(unsigned int *)&aClimb->__pad_240[476]; /*0x67442c*/
    *(unsigned int *)&aClimb->__pad_240[464] = Int_Overwrite; /*0x674432*/
    HIDWORD(v15) = v4; /*0x674444*/
    LODWORD(v15) = *(unsigned int *)&aClimb->__pad_240[472]; /*0x674445*/
    INIClass::ReadDouble_Overwrite((double *)v16, (unsigned __int8 *)aJumpjetcontrol, aClimb, v15); /*0x67444e*/
    v5 = *(unsigned int *)&aClimb->__pad_240[480]; /*0x674453*/
    __asm { fstp qword ptr [esi+418h] } /*0x67445b*/
    *(double *)&aClimb->__pad_240[472] = _RT1; /*0x67445b*/
    v7 = INIClass::ReadInt_Overwrite(v16, (unsigned __int8 *)aJumpjetcontrol, aCruiseheight, v5); /*0x67446d*/
    v8 = *(unsigned int *)&aClimb->__pad_240[492]; /*0x674472*/
    v9 = *(unsigned int *)&aClimb->__pad_240[488]; /*0x674478*/
    *(unsigned int *)&aClimb->__pad_240[480] = v7; /*0x67447e*/
    INIClass::ReadDouble_Overwrite( /*0x674493*/
      (double *)v16,
      (unsigned __int8 *)aJumpjetcontrol,
      (unsigned __int8 *)&stru_81AF8C.?[103],
      COERCE_DOUBLE(__PAIR64__(v8, v9)));
    v10 = *(unsigned int *)&aClimb->__pad_240[500]; /*0x674498*/
    v11 = *(unsigned int *)&aClimb->__pad_240[496]; /*0x67449e*/
    __asm { fstp qword ptr [esi+428h] } /*0x6744a4*/
    *(double *)&aClimb->__pad_240[488] = _RT1; /*0x6744a4*/
    INIClass::ReadDouble_Overwrite( /*0x6744b9*/
      (double *)v16,
      (unsigned __int8 *)aJumpjetcontrol,
      aWobblesperseco,
      COERCE_DOUBLE(__PAIR64__(v10, v11)));
    v13 = *(unsigned int *)&aClimb->__pad_240[504]; /*0x6744be*/
    __asm { fstp qword ptr [esi+430h] } /*0x6744c4*/
    *(double *)&aClimb->__pad_240[496] = _RT1; /*0x6744c4*/
    result = INIClass::ReadInt_Overwrite(v16, (unsigned __int8 *)aJumpjetcontrol, aWobbledeviatio, v13); /*0x6744d9*/
    *(unsigned int *)&aClimb->__pad_240[504] = result; /*0x6744de*/
    LOBYTE(result) = 1; /*0x6744e5*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x6744ec*/
  }
  return result; /*0x6744e4*/

}
}  // G42.18c ns repair
// 0x674550
namespace gamemd {  // G42.18c ns repair
INIClass * * RulesClass::ReadMovies(void * aMovies)
{
  int result; // eax
  int v2; // ebp
  int i; // ebx
  uint8_t *StringByIndex; // eax
  char *v5; // esi
  char Source[32]; // [esp+4h] [ebp-20h] BYREF
  INIClass *v7; // [esp+28h] [ebp+4h]

  result = INIClass::BinarySearchSection((int)v7, (uint8_t *)aMovies); /*0x674560*/
  if ( result ) /*0x67456c*/
  {
    result = INIClass::GetKeyCount(v7->__pad_0, (uint8_t *)aMovies); /*0x67457d*/
    v2 = result; /*0x674582*/
    for ( i = 0; i < v2; ++i ) /*0x674588*/
    {
      StringByIndex = (uint8_t *)INIClass::GetStringByIndex(v7->__pad_0, (uint8_t *)aMovies, i); /*0x6745a4*/
      result = INIClass::GetString(v7, (uint8_t *)aMovies, StringByIndex, g_Str__none_, Source, 32); /*0x6745b3*/
      if ( result ) /*0x6745ba*/
      {
        result = LookupNameIndex((ObjectClass *)Source); /*0x6745c0*/
        if ( result == -1 ) /*0x6745c8*/
        {
          v5 = _strdup(Source); /*0x6745da*/
          result = g_MissionQueueFrame.localVariables[581]; /*0x6745dc*/
          if ( g_MissionQueueFrame.localVariables[583] < g_MissionQueueFrame.localVariables[581] /*0x674614*/
            || ((((unsigned char *)&(g_MissionQueueFrame.localVariables[582]))[1]) || !g_MissionQueueFrame.localVariables[581])
            && g_MissionQueueFrame.localVariables[584] > 0
            && (result = (*(int (**)(int *, int, unsigned int))(g_MissionQueueFrame.localVariables[579] + 8))(
                           &g_MissionQueueFrame.localVariables[579],
                           g_MissionQueueFrame.localVariables[581] + g_MissionQueueFrame.localVariables[584],
                           0),
                (unsigned char)result) )
          {
            result = g_MissionQueueFrame.localVariables[583]++; /*0x67461c*/
            *(unsigned int *)(g_MissionQueueFrame.localVariables[580] + 4 * result) = v5; /*0x67462b*/
          }
        }
      }
    }
    (*((unsigned char *)&(result))) = 1; /*0x67463a*/
  }
  else
  {
    (*((unsigned char *)&(result))) = 0; /*0x674643*/
  }
  return result; /*0x67463c*/
}
}  // G42.18c ns repair
// 0x679FA0
namespace gamemd {  // G42.18c ns repair
void RulesClass::readMaximums()
{
  void *DetailMinFrameRateMovie; // eax

  DetailMinFrameRateMovie = (void *)this->DetailMinFrameRateMovie; /*0x679fa6*/
  this->DetailMinFrameRateNormal = (int)&vt_VectorClass; /*0x679fa9*/
  if ( DetailMinFrameRateMovie && (this->u8_D) ) /*0x679fb3*/
  {
    operator delete((void *)(DetailMinFrameRateMovie)); /*0x679fb9*/
    this->DetailMinFrameRateMovie = 0; /*0x679fc1*/
  }
  (this->u8_D) = 0; /*0x679fc4*/
  this->DetailBufferZoneWidth = 0; /*0x679fc7*/
}
}  // G42.18c ns repair
// 0x679FD0
namespace gamemd {  // G42.18c ns repair
void RulesClass::readInfantryTypes()
{
  void *DetailMinFrameRateMovie; // eax

  DetailMinFrameRateMovie = (void *)this->DetailMinFrameRateMovie; /*0x679fd6*/
  this->DetailMinFrameRateNormal = (int)&vt_VectorClass; /*0x679fd9*/
  if ( DetailMinFrameRateMovie && (this->u8_D) ) /*0x679fe3*/
  {
    operator delete((void *)(DetailMinFrameRateMovie)); /*0x679fe9*/
    this->DetailMinFrameRateMovie = 0; /*0x679ff1*/
  }
  (this->u8_D) = 0; /*0x679ff4*/
  this->DetailBufferZoneWidth = 0; /*0x679ff7*/
}
}  // G42.18c ns repair
// 0x67A000
namespace gamemd {  // G42.18c ns repair
void RulesClass::readCountries()
{
  void *DetailMinFrameRateMovie; // eax

  DetailMinFrameRateMovie = (void *)this->DetailMinFrameRateMovie; /*0x67a006*/
  this->DetailMinFrameRateNormal = (int)&vt_VectorClass; /*0x67a009*/
  if ( DetailMinFrameRateMovie && (this->u8_D) ) /*0x67a013*/
  {
    operator delete((void *)(DetailMinFrameRateMovie)); /*0x67a019*/
    this->DetailMinFrameRateMovie = 0; /*0x67a021*/
  }
  (this->u8_D) = 0; /*0x67a024*/
  this->DetailBufferZoneWidth = 0; /*0x67a027*/
}
}  // G42.18c ns repair
// 0x67A060
namespace gamemd {  // G42.18c ns repair
void RulesClass::readVehicleTypes()
{
  void *DetailMinFrameRateMovie; // eax

  DetailMinFrameRateMovie = (void *)this->DetailMinFrameRateMovie; /*0x67a066*/
  this->DetailMinFrameRateNormal = (int)&vt_VectorClass; /*0x67a069*/
  if ( DetailMinFrameRateMovie && (this->u8_D) ) /*0x67a073*/
  {
    operator delete((void *)(DetailMinFrameRateMovie)); /*0x67a079*/
    this->DetailMinFrameRateMovie = 0; /*0x67a081*/
  }
  (this->u8_D) = 0; /*0x67a084*/
  this->DetailBufferZoneWidth = 0; /*0x67a087*/
}
}  // G42.18c ns repair
// 0x67A190
namespace gamemd {  // G42.18c ns repair
void *  RulesClass::readAircraftTypes(int * a2)
{
  int v3; // eax
  int v4; // eax
  int DetailBufferZoneWidth; // ecx
  int v6; // eax

  if ( this != (RulesClass *)a2 ) /*0x67a19a*/
  {
    (*(void (**)(RulesClass *))(this->DetailMinFrameRateNormal + 12))(this); /*0x67a19e*/
    v3 = a2[2]; /*0x67a1a1*/
    this->DetailBufferZoneWidth = v3; /*0x67a1a6*/
    if ( v3 ) /*0x67a1a9*/
    {
      v4 = operator new(4 * v3); /*0x67a1b3*/
      this->DetailMinFrameRateMovie = v4; /*0x67a1bb*/
      if ( v4 ) /*0x67a1c0*/
      {
        DetailBufferZoneWidth = this->DetailBufferZoneWidth; /*0x67a1c2*/
        v6 = 0; /*0x67a1c5*/
        (this->u8_D) = 1; /*0x67a1c9*/
        if ( DetailBufferZoneWidth > 0 ) /*0x67a1cd*/
        {
          do /*0x67a1e1*/
          {
            *(unsigned int *)(this->DetailMinFrameRateMovie + 4 * v6) = *(unsigned int *)(a2[1] + 4 * v6); /*0x67a1d8*/
            ++v6; /*0x67a1de*/
          }
          while ( v6 < this->DetailBufferZoneWidth ); /*0x67a1e1*/
        }
      }
    }
    else
    {
      this->DetailMinFrameRateMovie = 0; /*0x67a1e5*/
      (this->u8_D) = 0; /*0x67a1ec*/
    }
  }
  this->LargeVisceroid = (UnitTypeClass *)a2[4]; /*0x67a1f3*/
  this->SmallVisceroid = (UnitTypeClass *)a2[5]; /*0x67a1f9*/
  this->AttackingAircraftSightRange = a2[6]; /*0x67a1ff*/
  return &this->DetailMinFrameRateNormal; /*0x67a204*/
}
}  // G42.18c ns repair
// 0x67A210
namespace gamemd {  // G42.18c ns repair
void * RulesClass::readSuperWeaponTypes(int * a2)
{
  int v3; // eax
  int v4; // eax
  int DetailBufferZoneWidth; // ecx
  int v6; // eax

  if ( this != (RulesClass *)a2 ) /*0x67a21a*/
  {
    (*(void (**)(RulesClass *))(this->DetailMinFrameRateNormal + 12))(this); /*0x67a21e*/
    v3 = a2[2]; /*0x67a221*/
    this->DetailBufferZoneWidth = v3; /*0x67a226*/
    if ( v3 ) /*0x67a229*/
    {
      v4 = operator new(4 * v3); /*0x67a233*/
      this->DetailMinFrameRateMovie = v4; /*0x67a23b*/
      if ( v4 ) /*0x67a240*/
      {
        DetailBufferZoneWidth = this->DetailBufferZoneWidth; /*0x67a242*/
        v6 = 0; /*0x67a245*/
        (this->u8_D) = 1; /*0x67a249*/
        if ( DetailBufferZoneWidth > 0 ) /*0x67a24d*/
        {
          do /*0x67a261*/
          {
            *(unsigned int *)(this->DetailMinFrameRateMovie + 4 * v6) = *(unsigned int *)(a2[1] + 4 * v6); /*0x67a258*/
            ++v6; /*0x67a25e*/
          }
          while ( v6 < this->DetailBufferZoneWidth ); /*0x67a261*/
        }
      }
    }
    else
    {
      this->DetailMinFrameRateMovie = 0; /*0x67a265*/
      (this->u8_D) = 0; /*0x67a26c*/
    }
  }
  this->LargeVisceroid = a2->uniqueId; /*0x67a273*/
  this->SmallVisceroid = a2->abstractFlags; /*0x67a279*/
  this->AttackingAircraftSightRange = a2[6]; /*0x67a27f*/
  return &this->DetailMinFrameRateNormal; /*0x67a284*/
}
}  // G42.18c ns repair
// 0x67A310
namespace gamemd {  // G42.18c ns repair
void * RulesClass::readBuildingTypes(int * a2)
{
  int v3; // eax
  int v4; // eax
  int DetailBufferZoneWidth; // ecx
  int v6; // eax

  if ( this != (RulesClass *)a2 ) /*0x67a31a*/
  {
    (*(void (**)(RulesClass *))(this->DetailMinFrameRateNormal + 12))(this); /*0x67a31e*/
    v3 = a2[2]; /*0x67a321*/
    this->DetailBufferZoneWidth = v3; /*0x67a326*/
    if ( v3 ) /*0x67a329*/
    {
      v4 = operator new(4 * v3); /*0x67a333*/
      this->DetailMinFrameRateMovie = v4; /*0x67a33b*/
      if ( v4 ) /*0x67a340*/
      {
        DetailBufferZoneWidth = this->DetailBufferZoneWidth; /*0x67a342*/
        v6 = 0; /*0x67a345*/
        (this->u8_D) = 1; /*0x67a349*/
        if ( DetailBufferZoneWidth > 0 ) /*0x67a34d*/
        {
          do /*0x67a361*/
          {
            *(unsigned int *)(this->DetailMinFrameRateMovie + 4 * v6) = *(unsigned int *)(a2[1] + 4 * v6); /*0x67a358*/
            ++v6; /*0x67a35e*/
          }
          while ( v6 < this->DetailBufferZoneWidth ); /*0x67a361*/
        }
      }
    }
    else
    {
      this->DetailMinFrameRateMovie = 0; /*0x67a365*/
      (this->u8_D) = 0; /*0x67a36c*/
    }
  }
  this->LargeVisceroid = (UnitTypeClass *)a2[4]; /*0x67a373*/
  this->SmallVisceroid = (UnitTypeClass *)a2[5]; /*0x67a379*/
  this->AttackingAircraftSightRange = a2[6]; /*0x67a37f*/
  return &this->DetailMinFrameRateNormal; /*0x67a384*/
}
}  // G42.18c ns repair
// 0x67A8B0
namespace gamemd {  // G42.18c ns repair
unsigned int * RulesClass::readParticles()
{
  this->DetailMinFrameRateMovie = 0; /*0x67a8b4*/
  this->DetailBufferZoneWidth = 0; /*0x67a8b7*/
  (this->AmmoCrateDamage) = 1; /*0x67a8ba*/
  (this->u8_D) = 0; /*0x67a8be*/
  this->SmallVisceroid = (UnitTypeClass *)10; /*0x67a8c1*/
  this->LargeVisceroid = 0; /*0x67a8c8*/
  this->DetailMinFrameRateNormal = (int)&vt_TypeList; /*0x67a8cb*/
  return &this->DetailMinFrameRateNormal; /*0x67a8d1*/
}
}  // G42.18c ns repair
// 0x67B480
namespace gamemd {  // G42.18c ns repair
int  RulesClass::readAI(unsigned int * a2)
{
  int DetailBufferZoneWidth; // ecx
  int result; // eax
  int DetailMinFrameRateMovie; // edx

  DetailBufferZoneWidth = this->DetailBufferZoneWidth; /*0x67b483*/
  result = (int)this->LargeVisceroid; /*0x67b486*/
  if ( result < DetailBufferZoneWidth /*0x67b4ad*/
    || ((this->u8_D) || !DetailBufferZoneWidth)
    && (result = (int)this->SmallVisceroid, result > 0)
    && (result = (*(int (**)(RulesClass *, int, unsigned int))(this->DetailMinFrameRateNormal + 8))(
                   this,
                   DetailBufferZoneWidth + result,
                   0),
        (unsigned char)result) )
  {
    result = (int)this->LargeVisceroid; /*0x67b4b5*/
    DetailMinFrameRateMovie = this->DetailMinFrameRateMovie; /*0x67b4b8*/
    this->LargeVisceroid = (UnitTypeClass *)(result + 1); /*0x67b4be*/
    *(unsigned int *)(DetailMinFrameRateMovie + 4 * result) = *a2; /*0x67b4c8*/
    (*((unsigned char *)&(result))) = 1; /*0x67b4cb*/
  }
  else
  {
    (*((unsigned char *)&(result))) = 0; /*0x67b4af*/
  }
  return result; /*0x67b4b1*/
}
}  // G42.18c ns repair
// 0x67BDD0
namespace gamemd {  // G42.18c ns repair
void * RulesClass::LoadTypeList(int a1, unsigned char *** edx0, INIClass * aP1, unsigned char * a2, unsigned int * a5)
{
  char *i; // eax
  int v7; // edi
  int v8; // eax
  int v9; // ecx
  void *v10; // eax
  bool v11; // zf
  int v13; // eax
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  void **v17; // [esp+Ch] [ebp-9Ch] BYREF
  void *Block; // [esp+10h] [ebp-98h]
  int v19; // [esp+14h] [ebp-94h]
  char v20; // [esp+19h] [ebp-8Fh]
  int v21; // [esp+1Ch] [ebp-8Ch]
  int v22; // [esp+20h] [ebp-88h]
  char String[128]; // [esp+28h] [ebp-80h] BYREF

  if ( INIClass::GetString((INIClass *)edx0, aP1, a2, &g_INI_DefaultBuffer, String, 128) ) /*0x67bdfc*/
  {
    RulesClass::readIQ((RulesClass *)&v17, 0, 0); /*0x67be11*/
    v22 = 10; /*0x67be1a*/
    v21 = 0; /*0x67be28*/
    v17 = &vt_TypeList; /*0x67be2c*/
    for ( i = strtok(String, Str); i; i = strtok(0, Str) ) /*0x67be3e*/
    {
      if ( !*i ) /*0x67be40*/
        break; /*0x67be42*/
      v7 = TerrainTypeClass::FindOrCreate(i); /*0x67be4b*/
      if ( v7 /*0x67be7b*/
        && (v21 < v19
         || (v20 || !v19)
         && v22 > 0
         && ((uint8_t (__thiscall *)(void ***, int, unsigned int))v17[2])(&v17, v22 + v19, 0)) )
      {
        v8 = v21++; /*0x67be86*/
        *((unsigned int *)Block + v8) = v7; /*0x67be91*/
      }
    }
    *(unsigned int *)(a1 + 4) = 0; /*0x67bead*/
    *(unsigned int *)(a1 + 8) = 0; /*0x67beb0*/
    *(unsigned char *)(a1 + 12) = 1; /*0x67beb3*/
    *(unsigned char *)(a1 + 13) = 0; /*0x67beb7*/
    *(unsigned int *)a1 = &vt_VectorClass; /*0x67beba*/
    System_Load_67BFA0((ObjectClass *)a1, &v17); /*0x67bec0*/
    *(unsigned int *)a1 = &vt_TypeList; /*0x67bec5*/
    v17 = &vt_VectorClass; /*0x67becb*/
    v9 = v22; /*0x67bed7*/
    *(unsigned int *)(a1 + 16) = v21; /*0x67bedb*/
    v10 = Block; /*0x67bede*/
    v11 = Block == 0; /*0x67bee2*/
    *(unsigned int *)(a1 + 20) = v9; /*0x67bee4*/
    if ( !v11 && v20 ) /*0x67bef1*/
    {
      operator delete((void *)(v10)); /*0x67bef8*/
      return (void *)a1; /*0x67bf0b*/
    }
  }
  else
  {
    *(unsigned int *)(a1 + 4) = 0; /*0x67bf19*/
    *(unsigned int *)(a1 + 8) = 0; /*0x67bf1c*/
    *(unsigned char *)(a1 + 12) = 1; /*0x67bf1f*/
    *(unsigned char *)(a1 + 13) = 0; /*0x67bf23*/
    *(unsigned int *)a1 = &vt_VectorClass; /*0x67bf26*/
    if ( (unsigned int *)a1 != a5 ) /*0x67bf2c*/
    {
      TypeList_cptr_TerrainTypeClass::TryFreeAndClear((_VectorClass_PBVTerrainTypeClass *)a1); /*0x67bf30*/
      v13 = a5[2]; /*0x67bf36*/
      *(unsigned int *)(a1 + 8) = v13; /*0x67bf3b*/
      if ( v13 ) /*0x67bf3e*/
      {
        v14 = operator new(4 * v13); /*0x67bf48*/
        *(unsigned int *)(a1 + 4) = v14; /*0x67bf52*/
        if ( v14 ) /*0x67bf55*/
        {
          v15 = *(unsigned int *)(a1 + 8); /*0x67bf57*/
          v16 = 0; /*0x67bf5a*/
          *(unsigned char *)(a1 + 13) = 1; /*0x67bf5e*/
          if ( v15 > 0 ) /*0x67bf62*/
          {
            do /*0x67bf76*/
            {
              *(unsigned int *)(*(unsigned int *)(a1 + 4) + 4 * v16) = *(unsigned int *)(a5[1] + 4 * v16); /*0x67bf6d*/
              ++v16; /*0x67bf73*/
            }
            while ( v16 < *(unsigned int *)(a1 + 8) ); /*0x67bf76*/
          }
        }
      }
      else
      {
        *(unsigned int *)(a1 + 4) = 0; /*0x67bf7a*/
        *(unsigned char *)(a1 + 13) = 0; /*0x67bf7d*/
      }
    }
    *(unsigned int *)(a1 + 16) = a5[4]; /*0x67bf83*/
    *(unsigned int *)(a1 + 20) = a5[5]; /*0x67bf89*/
    *(unsigned int *)a1 = &vt_TypeList; /*0x67bf8c*/
  }
  return (void *)a1; /*0x67bf02*/
}
}  // G42.18c ns repair
// 0x67C430
namespace gamemd {  // G42.18c ns repair
unsigned int * RulesClass::readIQ(int a2, int a3)
{
  this->DetailMinFrameRateMovie = 0; /*0x67c43b*/
  this->DetailBufferZoneWidth = a2; /*0x67c43e*/
  (this->AmmoCrateDamage) = 1; /*0x67c441*/
  (this->u8_D) = 0; /*0x67c445*/
  this->DetailMinFrameRateNormal = (int)&vt_VectorClass; /*0x67c448*/
  if ( a2 ) /*0x67c44e*/
  {
    if ( a3 ) /*0x67c456*/
    {
      this->DetailMinFrameRateMovie = a3; /*0x67c458*/
      return &this->DetailMinFrameRateNormal; /*0x67c45e*/
    }
    this->DetailMinFrameRateMovie = operator new(4 * a2); /*0x67c46d*/
    (this->u8_D) = 1; /*0x67c470*/
  }
  return &this->DetailMinFrameRateNormal; /*0x67c45d*/
}
}  // G42.18c ns repair
// 0x6614F0
namespace gamemd {  // G42.18c ns repair
int RulesClass::readGeneralSection(TechnoTypeClass * aP1)
{
  return (*(int (__stdcall **)(int, RulesClass *, int, unsigned int))(aP1->uniqueId)(aP1, this, 3, 0); /*0x6614ff*/
}
}  // G42.18c ns repair
// 0x661510
namespace gamemd {  // G42.18c ns repair
int RulesClass::readCombatDamage(int a2)
{
  return (*(int (__stdcall **)(int, RulesClass *, int, unsigned int))(*(unsigned int *)a2 + 12))(a2, this, 3, 0); /*0x66151f*/
}
}  // G42.18c ns repair
// 0x66D1F0
namespace gamemd {  // G42.18c ns repair
int RulesClass::readSpecialWeapons(void * aAlliedwalltran, void * aWallmodel, void * aWallpenetrator)
{

  int result; // eax
  char Bool_Overwrite; // al
  float FallBackCoefficient; // ecx
  double v6; // [esp-8h] [ebp-10h]
  int *v7; // [esp+Ch] [ebp+4h]

  result = INIClass::BinarySearchSection((int)v7, (unsigned __int8 *)aWallmodel); /*0x66d200*/
  if ( result ) /*0x66d20c*/
  {
    Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x66d223*/
                       v7,
                       (unsigned __int8 *)aWallmodel,
                       aAlliedwalltran,
                       aAlliedwalltran->ForceShieldColor);
    FallBackCoefficient = aAlliedwalltran->FallBackCoefficient; /*0x66d228*/
    LOBYTE(aAlliedwalltran->ForceShieldColor) = Bool_Overwrite; /*0x66d22e*/
    HIDWORD(v6) = aAlliedwalltran->CrewCount; /*0x66d240*/
    *(float *)&v6 = FallBackCoefficient; /*0x66d241*/
    result = INIClass::ReadDouble_Overwrite((double *)v7, (unsigned __int8 *)aWallmodel, aWallpenetrator, v6); /*0x66d24a*/
    __asm { fstp qword ptr [esi+1858h] } /*0x66d24f*/
    *(double *)&aAlliedwalltran->FallBackCoefficient = _RT1; /*0x66d24f*/
    LOBYTE(result) = 1; /*0x66d256*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x66d25d*/
  }
  return result; /*0x66d255*/

}
}  // G42.18c ns repair
// 0x66D3A0
namespace gamemd {  // G42.18c ns repair
int RulesClass::ReadColors(void * aColors)
{
  char *v1; // ebp
  int result; // eax
  int v3; // ebx
  int i; // edi
  uint8_t *StringByIndex; // esi
  int Color; // eax
  uint8_t v7[4]; // [esp+4h] [ebp-8h] BYREF
  int v8; // [esp+8h] [ebp-4h] BYREF
  INIEntry *v9; // [esp+10h] [ebp+4h] BYREF

  v1 = (char *)v9; /*0x66d3a9*/
  result = INIClass::BinarySearchSection((int)v9, (uint8_t *)aColors); /*0x66d3b0*/
  if ( result ) /*0x66d3bc*/
  {
    result = INIClass::GetKeyCount(v1, (uint8_t *)aColors); /*0x66d3cd*/
    v3 = result; /*0x66d3d2*/
    for ( i = 0; i < v3; ++i ) /*0x66d3d8*/
    {
      StringByIndex = (uint8_t *)INIClass::GetStringByIndex(v1, (uint8_t *)aColors, i); /*0x66d3f4*/
      v7[0] = 0; /*0x66d404*/
      v7[1] = 0; /*0x66d409*/
      v7[2] = 0; /*0x66d40e*/
      Color = INIEntry::ReadColor((INIEntry *)v1, (int)&v8, (uint8_t *)aColors, StringByIndex, v7); /*0x66d413*/
      (*((unsigned short *)&(v9))) = *(unsigned short *)Color; /*0x66d41b*/
      (((unsigned char *)&(v9))[2]) = *(unsigned char *)(Color + 2); /*0x66d425*/
      System_Read((const char *)StringByIndex, (int)&v9); /*0x66d42d*/
      System_Read_68C9C0((char *)StringByIndex, (int)&v9, (int)&stru_886380, (int)&FileSystem_TEMPERAT_PAL, 1); /*0x66d444*/
      result = System_Read_68C9C0((char *)StringByIndex, (int)&v9, (int)&stru_886380, (int)&FileSystem_TEMPERAT_PAL, 53); /*0x66d45b*/
    }
    (*((unsigned char *)&(result))) = 1; /*0x66d46c*/
  }
  else
  {
    (*((unsigned char *)&(result))) = 0; /*0x66d475*/
  }
  return result; /*0x66d46e*/
}
}  // G42.18c ns repair
// 0x66D480
namespace gamemd {  // G42.18c ns repair
int RulesClass::ReadColorAdd(void * aColoradd)
{
  INIClass *v1; // edi
  int result; // eax
  int v4; // esi
  char *v5; // ebp
  uint8_t *StringByIndex; // eax
  int Coord; // eax
  char *v8; // edx
  char v9; // cl
  bool v10; // cc
  char v11[4]; // [esp+Ch] [ebp-8h] BYREF
  int v12; // [esp+10h] [ebp-4h]
  INIClass *v13; // [esp+18h] [ebp+4h] BYREF

  v1 = v13; /*0x66d48b*/
  result = INIClass::BinarySearchSection((int)v13, (uint8_t *)aColoradd); /*0x66d494*/
  if ( result ) /*0x66d4a2*/
  {
    result = INIClass::GetKeyCount(v1->__pad_0, (uint8_t *)aColoradd); /*0x66d4ae*/
    v4 = 0; /*0x66d4b3*/
    v12 = result; /*0x66d4b7*/
    if ( result > 0 ) /*0x66d4bb*/
    {
      v5 = (char *)aColoradd + 6260; /*0x66d4bd*/
      do /*0x66d511*/
      {
        StringByIndex = (uint8_t *)INIClass::GetStringByIndex(v1->__pad_0, (uint8_t *)aColoradd, v4); /*0x66d4cd*/
        (*((unsigned short *)&(v13))) = 0; /*0x66d4e6*/
        (((unsigned char *)&(v13))[2]) = 0; /*0x66d4ee*/
        Coord = INIClass::GetCoord(v1, (int)v11, (uint8_t *)aColoradd, StringByIndex, (uint8_t *)&v13); /*0x66d4f2*/
        v8 = v5; /*0x66d4f9*/
        ++v4; /*0x66d4fb*/
        v5 += 3; /*0x66d4fc*/
        v9 = *(unsigned char *)(Coord + 2); /*0x66d502*/
        *(unsigned short *)v8 = *(unsigned short *)Coord; /*0x66d505*/
        result = v12; /*0x66d508*/
        v10 = v4 < v12; /*0x66d50c*/
        v8[2] = v9; /*0x66d50e*/
      }
      while ( v10 ); /*0x66d511*/
    }
    (*((unsigned char *)&(result))) = 1; /*0x66d516*/
  }
  else
  {
    (*((unsigned char *)&(result))) = 0; /*0x66d521*/
  }
  return result; /*0x66d514*/
}
}  // G42.18c ns repair
// 0x672280
namespace gamemd {  // G42.18c ns repair
int RulesClass::readCrateRules(void * aInfantrytypes)
{
  int KeyCount; // ebx
  int i; // esi
  uint8_t *StringByIndex; // eax
  char Destination[32]; // [esp+Ch] [ebp-20h] BYREF
  INIClass *v6; // [esp+30h] [ebp+4h]

  KeyCount = INIClass::GetKeyCount(v6->__pad_0, (uint8_t *)aInfantrytypes); /*0x672297*/
  for ( i = 0; i < KeyCount; ++i ) /*0x67229d*/
  {
    StringByIndex = (uint8_t *)INIClass::GetStringByIndex(v6->__pad_0, (uint8_t *)aInfantrytypes, i); /*0x6722b5*/
    if ( INIClass::GetString( /*0x6722c3*/
           v6,
           (uint8_t *)aInfantrytypes,
           StringByIndex,
           &g_INI_DefaultBuffer,
           Destination,
           32) )
    {
      KeywordType::FindOrCreate2(Destination); /*0x6722d0*/
    }
  }
  return KeyCount > 0; /*0x6722dc*/
}
}  // G42.18c ns repair
// 0x6723D0
namespace gamemd {  // G42.18c ns repair
int RulesClass::readRadiation(void * aAircrafttypes)
{
  int KeyCount; // ebx
  int i; // esi
  uint8_t *StringByIndex; // eax
  char Destination[32]; // [esp+Ch] [ebp-20h] BYREF
  INIClass *v6; // [esp+30h] [ebp+4h]

  KeyCount = INIClass::GetKeyCount(v6->__pad_0, (uint8_t *)aAircrafttypes); /*0x6723e7*/
  for ( i = 0; i < KeyCount; ++i ) /*0x6723ed*/
  {
    StringByIndex = (uint8_t *)INIClass::GetStringByIndex(v6->__pad_0, (uint8_t *)aAircrafttypes, i); /*0x672405*/
    if ( INIClass::GetString( /*0x672413*/
           v6,
           (uint8_t *)aAircrafttypes,
           StringByIndex,
           &g_INI_DefaultBuffer,
           Destination,
           32) )
    {
      KeywordClass::FindOrCreate(Destination); /*0x672420*/
    }
  }
  return KeyCount > 0; /*0x67242c*/
}
}  // G42.18c ns repair
// 0x6725F0
namespace gamemd {  // G42.18c ns repair
int RulesClass::ReadSidesList(void * aSuperweapontyp)
{
  int KeyCount; // ebx
  int i; // esi
  uint8_t *StringByIndex; // eax
  char Destination[32]; // [esp+Ch] [ebp-20h] BYREF
  INIClass *v6; // [esp+30h] [ebp+4h]

  KeyCount = INIClass::GetKeyCount(v6->__pad_0, (uint8_t *)aSuperweapontyp); /*0x672607*/
  for ( i = 0; i < KeyCount; ++i ) /*0x67260d*/
  {
    StringByIndex = (uint8_t *)INIClass::GetStringByIndex(v6->__pad_0, (uint8_t *)aSuperweapontyp, i); /*0x672625*/
    if ( INIClass::GetString( /*0x672633*/
           v6,
           (uint8_t *)aSuperweapontyp,
           StringByIndex,
           &g_INI_DefaultBuffer,
           Destination,
           32) )
    {
      WeaponTypeClass::Process(Destination); /*0x672640*/
    }
  }
  return KeyCount > 0; /*0x67264c*/
}
}  // G42.18c ns repair
// 0x67A3C0
namespace gamemd {  // G42.18c ns repair
int  RulesClass::readTerrainTypes(TechnoTypeClass * aP1)
{
  int v3; // ecx
  int result; // eax
  int i; // esi
  UnitTypeClass *LargeVisceroid; // [esp+20h] [ebp-4h] BYREF

  v3 = *aP1; /*0x67a3cc*/
  LargeVisceroid = this->LargeVisceroid; /*0x67a3d9*/
  aP1->IsClean(&LargeVisceroid, 4, 0); /*0x67a3dd*/
  result = (int)LargeVisceroid; /*0x67a3e0*/
  for ( i = 0; i < (int)LargeVisceroid; ++i ) /*0x67a3e8*/
  {
    (*(void (__stdcall **)(int *, int, int, unsigned int))(*aP1 + 16))(aP1, this->DetailMinFrameRateMovie + 4 * i, 4, 0); /*0x67a3f8*/
    result = (int)LargeVisceroid; /*0x67a3fb*/
  }
  return result; /*0x67a404*/
}
}  // G42.18c ns repair
// 0x67A730
namespace gamemd {  // G42.18c ns repair
int RulesClass::readSmudgeTypes()
{
  return (int)this->LargeVisceroid; /*0x67a733*/
}
}  // G42.18c ns repair
// 0x67A7C0
namespace gamemd {  // G42.18c ns repair
int RulesClass::readOverlayTypes()
{
  return (int)this->LargeVisceroid; /*0x67a7c3*/
}
}  // G42.18c ns repair
// 0x67A7D0
namespace gamemd {  // G42.18c ns repair
int  RulesClass::readAnimations(TechnoTypeClass * aP1)
{
  int v3; // ecx
  int result; // eax
  int i; // esi
  UnitTypeClass *LargeVisceroid; // [esp+20h] [ebp-4h] BYREF

  v3 = *aP1; /*0x67a7dc*/
  LargeVisceroid = this->LargeVisceroid; /*0x67a7e9*/
  aP1->IsClean(&LargeVisceroid, 4, 0); /*0x67a7ed*/
  result = (int)LargeVisceroid; /*0x67a7f0*/
  for ( i = 0; i < (int)LargeVisceroid; ++i ) /*0x67a7f8*/
  {
    (*(void (__stdcall **)(int *, int, int, unsigned int))(*aP1 + 16))(aP1, this->DetailMinFrameRateMovie + 4 * i, 4, 0); /*0x67a808*/
    result = (int)LargeVisceroid; /*0x67a80b*/
  }
  return result; /*0x67a814*/
}
}  // G42.18c ns repair
// 0x67A8A0
namespace gamemd {  // G42.18c ns repair
int RulesClass::readWarheads()
{
  return (int)this->LargeVisceroid; /*0x67a8a3*/
}
}
// 0x67A8E0
int   RulesClass::readParticleSystems()
{
  int v3; // ecx
  int result; // eax
  int i; // esi
  UnitTypeClass *LargeVisceroid; // [esp+20h] [ebp-4h] BYREF

  v3 = *this; /*0x67a8ec*/
  LargeVisceroid = this->LargeVisceroid; /*0x67a8f9*/
  this->IsClean(&LargeVisceroid, 4, 0); /*0x67a8fd*/
  result = (int)LargeVisceroid; /*0x67a900*/
  for ( i = 0; i < (int)LargeVisceroid; ++i ) /*0x67a908*/
  {
    (*(void (__stdcall **)(int *, int, int, unsigned int))(*&this->LargeVisceroid))(this, this->DetailMinFrameRateMovie + 4 * i, 4, 0); /*0x67a918*/
    result = (int)LargeVisceroid; /*0x67a91b*/
  }
  return result; /*0x67a924*/
}