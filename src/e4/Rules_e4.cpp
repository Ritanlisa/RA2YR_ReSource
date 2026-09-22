// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Rules_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/Math_e4.hpp"

// 0x6691E0
namespace gamemd {
int Rules::ReadMiscINI()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Rules::ReadMiscINI(RulesClass *this)
{
  int result; // eax
  int Int_Overwrite; // eax
  int FlashFrameTime; // ebx
  AnimTypeClass *v5; // eax
  int CreateInfantrySound; // ebx
  AnimTypeClass *v7; // eax
  int ImpactLandSound; // ebx
  int Index; // eax
  int ChronoInSound; // ebx
  int v11; // eax
  int ChronoOutSound; // ebx
  int v13; // eax
  int SpySatActivationSound; // ebx
  int v15; // eax
  int SpySatDeactivationSound; // ebx
  int v17; // eax
  int UpgradeVeteranSound; // ebx
  int v19; // eax
  int UpgradeEliteSound; // ebx
  int v21; // eax
  int VoiceIFVRepair; // ebx
  int v23; // eax
  int SlavesFreeSound; // ebx
  int v25; // eax
  int SlaveMinerDeploySound; // ebx
  int v27; // eax
  int SlaveMinerUndeploySound; // ebx
  int v29; // eax
  int BunkerWallsUpSound; // ebx
  int v31; // eax
  int MasterMindOverloadDeathSound; // ebx
  int v33; // eax
  int AirstrikeAttackVoice; // ebx
  int v35; // eax
  int MindClearedSound; // ebx
  int v37; // eax
  int EnterBioReactorSound; // ebx
  int v39; // eax
  int LeaveBioReactorSound; // ebx
  int v41; // eax
  int ActivateSound; // ebx
  int v43; // eax
  int DeactivateSound; // ebx
  int v45; // eax
  int SpyPlaneCamera; // ebx
  int v47; // eax
  int SpyPlaneCameraFrames; // ebx
  int v49; // eax
  void *Dig; // ebx
  void *v51; // eax
  void *IonBlast; // ebx
  void *v53; // eax
  void *IonBeam; // ebx
  void *v55; // eax
  int v56; // ebx
  int v57; // eax
  int ParadropRadius; // ebx
  int v59; // eax
  int v60; // ebx
  int v61; // eax
  int v62; // ebx
  int v63; // eax
  int v64; // ebx
  int v65; // eax
  int v66; // ebx
  int v67; // eax
  int v68; // ebx
  int v69; // eax
  int EnterGrinderSound; // ebx
  int v71; // eax
  int LeaveGrinderSound; // ebx
  int v73; // eax
  int AirstrikeAbortSound; // ebx
  int v75; // eax
  int PsychicDominatorActivateSound; // ebx
  int v77; // eax
  int GeneticMutatorActivateSound; // ebx
  int v79; // eax
  int PsychicRevealActivateSound; // ebx
  int v81; // eax
  int YuriMindControlSound; // ebx
  int v83; // eax
  int TiberiumStrength; // ebx
  int v85; // eax
  float MinLowPowerProductionSpeed; // ebx
  float v87; // eax
  float MaxLowPowerProductionSpeed; // ebx
  float v89; // eax
  float LowPowerPenaltyModifier; // ebx
  float v91; // eax
  float MultipleFactory; // ebx
  float v93; // eax
  int MaximumCheerRate; // ebx
  int v95; // eax
  int v96; // ebx
  int v97; // eax
  int v98; // ebx
  int v99; // eax
  int v100; // ebx
  int v101; // eax
  int v102; // ebx
  int v103; // eax
  int v104; // ebx
  int v105; // eax
  int v106; // ebx
  int v107; // eax
  int v108; // ebx
  int v109; // eax
  int v110; // ebx
  int v111; // eax
  int v112; // ebx
  int v113; // eax
  int v114; // ebx
  int v115; // eax
  int v116; // ebx
  int v117; // eax
  int v118; // ebx
  int v119; // eax
  int v120; // ebx
  int v121; // eax
  int v122; // ebx
  int v123; // eax
  int v124; // ebx
  int v125; // eax
  int v126; // ebx
  int v127; // eax
  int v128; // ebx
  int v129; // eax
  int v130; // ebx
  int v131; // eax
  int v132; // ebx
  int v133; // eax
  int v134; // ebx
  int v135; // eax
  int SinkingSound; // ebx
  int v137; // eax
  int BombTickingSound; // ebx
  int v139; // eax
  int BombAttachSound; // ebx
  int v141; // eax
  int BunkerWallsDownSound; // ebx
  int v143; // eax
  int RepairBridgeSound; // ebx
  int v145; // eax
  int v146; // ebx
  int v147; // eax
  int TiberiumExplosionDamage; // ebx
  int v149; // eax
  AnimTypeClass *v150; // ebx
  AnimTypeClass *v151; // eax
  AnimTypeClass *v152; // ebx
  AnimTypeClass *v153; // eax
  int v154; // ebx
  int v155; // eax
  int v156; // ebx
  int v157; // eax
  INIClass *aP3; // ecx
  int v159; // eax
  int BuildingSlam; // ebx
  int v161; // eax
  int RadarOn; // ebx
  int v163; // eax
  int RadarOff; // ebx
  int v165; // eax
  int MovieOn; // ebx
  int v167; // eax
  int GenericBeep; // ebx
  int v169; // eax
  int MovieOff; // ebx
  int v171; // eax
  int ScoldSound; // ebx
  int v173; // eax
  int TeslaCharge; // ebx
  int v175; // eax
  int TeslaZap; // ebx
  int v177; // eax
  int GenericClick; // ebx
  int v179; // eax
  int BuildingDamageSound; // ebx
  int v181; // eax
  CCINIClass *INIClassIntList; // ebx
  int v183; // ebx
  int v184; // eax
  int v185; // ebx
  int v186; // eax
  int v187; // ebx
  int v188; // eax
  int v189; // ebx
  int v190; // eax
  int v191; // ebx
  int v192; // eax
  int v193; // ebx
  int v194; // eax
  int ShellButtonSlideSound; // ebx
  int v196; // eax
  int v197; // ebx
  int v198; // eax
  int v199; // ebx
  int v200; // eax
  int v201; // ebx
  int v202; // eax
  int v203; // ebx
  int v204; // eax
  int v205; // ebx
  int v206; // eax
  int v207; // ebx
  int v208; // eax
  int v209; // ebx
  int v210; // eax
  int v211; // ebx
  int v212; // eax
  int v213; // ebx
  int v214; // eax
  int v215; // ebx
  int v216; // eax
  int v217; // ebx
  int v218; // eax
  CCINIClass *v219; // ebx
  int v220; // ebx
  int v221; // eax
  AbstractClass *i; // eax
  AbstractClass *j; // eax
  int v224; // ebx
  AnimTypeClass *v225; // eax
  int v226; // ebx
  AnimTypeClass *v227; // eax
  int v228; // eax
  int v229; // ebx
  AnimTypeClass *v230; // eax
  int v231; // ebx
  AnimTypeClass *v232; // eax
  CCINIClass *v233; // eax
  CCINIClass *v234; // eax
  CCINIClass *v236; // eax
  CCINIClass *v237; // eax
  CCINIClass *v238; // eax
  CCINIClass *v239; // edx
  CCINIClass *v240; // edx
  CCINIClass *v241; // edx
  CCINIClass *v242; // edx
  CCINIClass *v243; // edx
  VectorClass *ebp360; // ebp
  CCINIClass *v245; // eax
  CCINIClass *v246; // eax
  CCINIClass *v247; // eax
  CCINIClass *v248; // eax
  double Double_Overwrite; // st7
  double v249; // st7
  double v250; // st7
  int Coord; // eax
  int v252; // eax
  int v253; // eax
  int v254; // eax
  double v255; // st7
  int v256; // [esp-14h] [ebp-E8h] BYREF
  void *v257; // [esp-10h] [ebp-E4h]
  TypeList *v258; // [esp-Ch] [ebp-E0h]
  __int16 v259; // [esp-8h] [ebp-DCh]
  _BYTE v260[12]; // [esp-4h] [ebp-D8h]
  INIClass *aP3_8; // [esp+8h] [ebp-CCh]
  int aP3_12; // [esp+Ch] [ebp-C8h]
  CCINIClass aP1; // [esp+18h] [ebp-BCh] BYREF
  void **v264; // [esp+9Ch] [ebp-38h] BYREF
  void *Block; // [esp+A0h] [ebp-34h]
  char v266; // [esp+A9h] [ebp-2Bh]
  void **v267; // [esp+B8h] [ebp-1Ch] BYREF
  void *v268; // [esp+BCh] [ebp-18h]
  char v269; // [esp+C5h] [ebp-Fh]
  int v270; // [esp+C8h] [ebp-Ch]
  int v271; // [esp+CCh] [ebp-8h]
  int v272; // [esp+D0h] [ebp-4h]
  unsigned __int8 ***v273; // [esp+D8h] [ebp+4h]

  result = INIClass::BinarySearchSection((int)v273, (INIClass *)&stru_830620[39048]);
  if ( result )
  {
    this->DetailMinFrameRateNormal = INIClass::ReadInt_Overwrite(
                                       (int)v273,
                                       (unsigned __int8 *)&stru_830620[39048],
                                       (CCINIClass *)&stru_830620[42448],
                                       (INIClass *)this->DetailMinFrameRateNormal);
    this->DetailMinFrameRateMovie = INIClass::ReadInt_Overwrite(
                                      (int)v273,
                                      (unsigned __int8 *)&stru_830620[39048],
                                      (CCINIClass *)&stru_830620[42424],
                                      (INIClass *)this->DetailMinFrameRateMovie);
    this->DetailBufferZoneWidth = INIClass::ReadInt_Overwrite(
                                    (int)v273,
                                    (unsigned __int8 *)&stru_830620[39048],
                                    (CCINIClass *)&stru_830620[42400],
                                    (INIClass *)this->DetailBufferZoneWidth);
    this->PoseDir = INIClass::ReadInt_Overwrite(
                      (int)v273,
                      (unsigned __int8 *)&stru_830620[39048],
                      (CCINIClass *)&stru_830620[42392],
                      (INIClass *)this->PoseDir);
    Int_Overwrite = INIClass::ReadInt_Overwrite(
                      (int)v273,
                      (unsigned __int8 *)&stru_830620[39048],
                      (CCINIClass *)&stru_830620[42380],
                      (INIClass *)(this->DeployDir >> 5));
    *(_DWORD *)&v260[8] = 128;
    this->DeployDir = 32 * Int_Overwrite;
    FlashFrameTime = this->FlashFrameTime;
    if ( INIClass::GetString(
           v273,
           (INIClass *)&stru_830620[39048],
           (unsigned __int8 *)&stru_830620[42368],
           (INIClass *)&stru_87C374[56304],
           (INIClass *)aP1.headNode,
           *(int *)&v260[8]) )
    {
      v5 = AnimTypeClass::FindOrCreate((AbstractClass *)aP1.headNode);
    }
    else
    {
      v5 = (AnimTypeClass *)FlashFrameTime;
    }
    this->FlashFrameTime = (int)v5;
    this->RadarCombatFlashTime = INIClass::ReadInt_Overwrite(
                                   (int)v273,
                                   (unsigned __int8 *)&stru_830620[39048],
                                   (CCINIClass *)&stru_830620[42344],
                                   (INIClass *)this->RadarCombatFlashTime);
    CreateInfantrySound = this->CreateInfantrySound;
    if ( INIClass::GetString(
           v273,
           (INIClass *)&stru_830620[39048],
           (unsigned __int8 *)&stru_830620[42332],
           (INIClass *)&stru_87C374[56304],
           (INIClass *)aP1.headNode,
           128) )
    {
      v7 = AnimTypeClass::FindOrCreate((AbstractClass *)aP1.headNode);
    }
    else
    {
      v7 = (AnimTypeClass *)CreateInfantrySound;
    }
    *(_DWORD *)&v260[8] = 128;
    this->CreateInfantrySound = (int)v7;
    ImpactLandSound = this->ImpactLandSound;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[42320],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (Index = VocClass::FindIndex(aP1.headNode), Index == -1) )
    {
      Index = ImpactLandSound;
    }
    *(_DWORD *)&v260[8] = 128;
    this->ImpactLandSound = Index;
    ChronoInSound = this->ChronoInSound;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[42300],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v11 = VocClass::FindIndex(aP1.headNode), v11 == -1) )
    {
      v11 = ChronoInSound;
    }
    this->ChronoInSound = v11;
    ChronoOutSound = this->ChronoOutSound;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[42284],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            128)
      || (v13 = VocClass::FindIndex(aP1.headNode), v13 == -1) )
    {
      v13 = ChronoOutSound;
    }
    *(_DWORD *)&v260[8] = 128;
    this->ChronoOutSound = v13;
    SpySatActivationSound = this->SpySatActivationSound;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[42272],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v15 = VocClass::FindIndex(aP1.headNode), v15 == -1) )
    {
      v15 = SpySatActivationSound;
    }
    *(_DWORD *)&v260[8] = 128;
    this->SpySatActivationSound = v15;
    SpySatDeactivationSound = this->SpySatDeactivationSound;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[42256],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v17 = VocClass::FindIndex(aP1.headNode), v17 == -1) )
    {
      v17 = SpySatDeactivationSound;
    }
    this->SpySatDeactivationSound = v17;
    UpgradeVeteranSound = this->UpgradeVeteranSound;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[42240],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            128)
      || (v19 = VocClass::FindIndex(aP1.headNode), v19 == -1) )
    {
      v19 = UpgradeVeteranSound;
    }
    *(_DWORD *)&v260[8] = 128;
    this->UpgradeVeteranSound = v19;
    UpgradeEliteSound = this->UpgradeEliteSound;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[42224],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v21 = VocClass::FindIndex(aP1.headNode), v21 == -1) )
    {
      v21 = UpgradeEliteSound;
    }
    *(_DWORD *)&v260[8] = 128;
    this->UpgradeEliteSound = v21;
    VoiceIFVRepair = this->VoiceIFVRepair;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[42208],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v23 = VocClass::FindIndex(aP1.headNode), v23 == -1) )
    {
      v23 = VoiceIFVRepair;
    }
    this->VoiceIFVRepair = v23;
    SlavesFreeSound = this->SlavesFreeSound;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[42188],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            128)
      || (v25 = VocClass::FindIndex(aP1.headNode), v25 == -1) )
    {
      v25 = SlavesFreeSound;
    }
    *(_DWORD *)&v260[8] = 128;
    this->SlavesFreeSound = v25;
    SlaveMinerDeploySound = this->SlaveMinerDeploySound;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[42168],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v27 = VocClass::FindIndex(aP1.headNode), v27 == -1) )
    {
      v27 = SlaveMinerDeploySound;
    }
    *(_DWORD *)&v260[8] = 128;
    this->SlaveMinerDeploySound = v27;
    SlaveMinerUndeploySound = this->SlaveMinerUndeploySound;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[42148],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v29 = VocClass::FindIndex(aP1.headNode), v29 == -1) )
    {
      v29 = SlaveMinerUndeploySound;
    }
    this->SlaveMinerUndeploySound = v29;
    BunkerWallsUpSound = this->BunkerWallsUpSound;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[42132],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            128)
      || (v31 = VocClass::FindIndex(aP1.headNode), v31 == -1) )
    {
      v31 = BunkerWallsUpSound;
    }
    *(_DWORD *)&v260[8] = 128;
    this->BunkerWallsUpSound = v31;
    MasterMindOverloadDeathSound = this->MasterMindOverloadDeathSound;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[42120],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v33 = VocClass::FindIndex(aP1.headNode), v33 == -1) )
    {
      v33 = MasterMindOverloadDeathSound;
    }
    *(_DWORD *)&v260[8] = 128;
    this->MasterMindOverloadDeathSound = v33;
    AirstrikeAttackVoice = this->AirstrikeAttackVoice;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[42100],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v35 = VocClass::FindIndex(aP1.headNode), v35 == -1) )
    {
      v35 = AirstrikeAttackVoice;
    }
    this->AirstrikeAttackVoice = v35;
    MindClearedSound = this->MindClearedSound;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[42076],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            128)
      || (v37 = VocClass::FindIndex(aP1.headNode), v37 == -1) )
    {
      v37 = MindClearedSound;
    }
    *(_DWORD *)&v260[8] = 128;
    this->MindClearedSound = v37;
    EnterBioReactorSound = this->EnterBioReactorSound;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[42052],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v39 = VocClass::FindIndex(aP1.headNode), v39 == -1) )
    {
      v39 = EnterBioReactorSound;
    }
    *(_DWORD *)&v260[8] = 128;
    this->EnterBioReactorSound = v39;
    LeaveBioReactorSound = this->LeaveBioReactorSound;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[42036],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v41 = VocClass::FindIndex(aP1.headNode), v41 == -1) )
    {
      v41 = LeaveBioReactorSound;
    }
    this->LeaveBioReactorSound = v41;
    ActivateSound = this->ActivateSound;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[42016],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            128)
      || (v43 = VocClass::FindIndex(aP1.headNode), v43 == -1) )
    {
      v43 = ActivateSound;
    }
    *(_DWORD *)&v260[8] = 128;
    this->ActivateSound = v43;
    DeactivateSound = this->DeactivateSound;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[42000],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v45 = VocClass::FindIndex(aP1.headNode), v45 == -1) )
    {
      v45 = DeactivateSound;
    }
    *(_DWORD *)&v260[8] = 128;
    this->DeactivateSound = v45;
    SpyPlaneCamera = this->SpyPlaneCamera;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[41980],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v47 = VocClass::FindIndex(aP1.headNode), v47 == -1) )
    {
      v47 = SpyPlaneCamera;
    }
    this->SpyPlaneCamera = v47;
    SpyPlaneCameraFrames = this->SpyPlaneCameraFrames;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[41964],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            128)
      || (v49 = VocClass::FindIndex(aP1.headNode), v49 == -1) )
    {
      v49 = SpyPlaneCameraFrames;
    }
    *(_DWORD *)&v260[8] = 128;
    this->SpyPlaneCameraFrames = v49;
    Dig = this->Dig;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[41948],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v51 = (void *)VocClass::FindIndex(aP1.headNode), v51 == (void *)-1) )
    {
      v51 = Dig;
    }
    *(_DWORD *)&v260[8] = 128;
    this->Dig = v51;
    IonBlast = this->IonBlast;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[41928],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v53 = (void *)VocClass::FindIndex(aP1.headNode), v53 == (void *)-1) )
    {
      v53 = IonBlast;
    }
    this->IonBlast = v53;
    IonBeam = this->IonBeam;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[41908],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            128)
      || (v55 = (void *)VocClass::FindIndex(aP1.headNode), v55 == (void *)-1) )
    {
      v55 = IonBeam;
    }
    *(_DWORD *)&v260[8] = 128;
    this->IonBeam = v55;
    v56 = this->DamageFireTypes[0];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[41892],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v57 = VocClass::FindIndex(aP1.headNode), v57 == -1) )
    {
      v57 = v56;
    }
    *(_DWORD *)&v260[8] = 128;
    this->DamageFireTypes[0] = v57;
    ParadropRadius = this->ParadropRadius;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[41876],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v59 = VocClass::FindIndex(aP1.headNode), v59 == -1) )
    {
      v59 = ParadropRadius;
    }
    this->ParadropRadius = v59;
    v60 = this->ConditionRedSparkingProbability[1];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[41860],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            128)
      || (v61 = VocClass::FindIndex(aP1.headNode), v61 == -1) )
    {
      v61 = v60;
    }
    *(_DWORD *)&v260[8] = 128;
    this->ConditionRedSparkingProbability[1] = v61;
    v62 = this->ConditionYellowSparkingProbability[0];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[41844],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v63 = VocClass::FindIndex(aP1.headNode), v63 == -1) )
    {
      v63 = v62;
    }
    *(_DWORD *)&v260[8] = 128;
    this->ConditionYellowSparkingProbability[0] = v63;
    v64 = this->ZoomInFactor[0];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[41824],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v65 = VocClass::FindIndex(aP1.headNode), v65 == -1) )
    {
      v65 = v64;
    }
    this->ZoomInFactor[0] = v65;
    v66 = this->ZoomInFactor[1];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[41808],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            128)
      || (v67 = VocClass::FindIndex(aP1.headNode), v67 == -1) )
    {
      v67 = v66;
    }
    *(_DWORD *)&v260[8] = 128;
    this->ZoomInFactor[1] = v67;
    v68 = this->ConditionRedSparkingProbability[0];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[41784],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v69 = VocClass::FindIndex(aP1.headNode), v69 == -1) )
    {
      v69 = v68;
    }
    *(_DWORD *)&v260[8] = 128;
    this->ConditionRedSparkingProbability[0] = v69;
    EnterGrinderSound = this->EnterGrinderSound;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[41756],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v71 = VocClass::FindIndex(aP1.headNode), v71 == -1) )
    {
      v71 = EnterGrinderSound;
    }
    this->EnterGrinderSound = v71;
    LeaveGrinderSound = this->LeaveGrinderSound;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[41736],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            128)
      || (v73 = VocClass::FindIndex(aP1.headNode), v73 == -1) )
    {
      v73 = LeaveGrinderSound;
    }
    *(_DWORD *)&v260[8] = 128;
    this->LeaveGrinderSound = v73;
    AirstrikeAbortSound = this->AirstrikeAbortSound;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[41716],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v75 = VocClass::FindIndex(aP1.headNode), v75 == -1) )
    {
      v75 = AirstrikeAbortSound;
    }
    *(_DWORD *)&v260[8] = 128;
    this->AirstrikeAbortSound = v75;
    PsychicDominatorActivateSound = this->PsychicDominatorActivateSound;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[41692],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v77 = VocClass::FindIndex(aP1.headNode), v77 == -1) )
    {
      v77 = PsychicDominatorActivateSound;
    }
    this->PsychicDominatorActivateSound = v77;
    GeneticMutatorActivateSound = this->GeneticMutatorActivateSound;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[41668],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            128)
      || (v79 = VocClass::FindIndex(aP1.headNode), v79 == -1) )
    {
      v79 = GeneticMutatorActivateSound;
    }
    *(_DWORD *)&v260[8] = 128;
    this->GeneticMutatorActivateSound = v79;
    PsychicRevealActivateSound = this->PsychicRevealActivateSound;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[41644],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v81 = VocClass::FindIndex(aP1.headNode), v81 == -1) )
    {
      v81 = PsychicRevealActivateSound;
    }
    *(_DWORD *)&v260[8] = 128;
    this->PsychicRevealActivateSound = v81;
    YuriMindControlSound = this->YuriMindControlSound;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[41620],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v83 = VocClass::FindIndex(aP1.headNode), v83 == -1) )
    {
      v83 = YuriMindControlSound;
    }
    this->YuriMindControlSound = v83;
    TiberiumStrength = this->TiberiumStrength;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[41600],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            128)
      || (v85 = VocClass::FindIndex(aP1.headNode), v85 == -1) )
    {
      v85 = TiberiumStrength;
    }
    *(_DWORD *)&v260[8] = 128;
    this->TiberiumStrength = v85;
    MinLowPowerProductionSpeed = this->MinLowPowerProductionSpeed;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[41580],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v87 = COERCE_FLOAT(VocClass::FindIndex(aP1.headNode)), v87 == NAN) )
    {
      v87 = MinLowPowerProductionSpeed;
    }
    *(_DWORD *)&v260[8] = 128;
    this->MinLowPowerProductionSpeed = v87;
    MaxLowPowerProductionSpeed = this->MaxLowPowerProductionSpeed;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[41564],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v89 = COERCE_FLOAT(VocClass::FindIndex(aP1.headNode)), v89 == NAN) )
    {
      v89 = MaxLowPowerProductionSpeed;
    }
    this->MaxLowPowerProductionSpeed = v89;
    LowPowerPenaltyModifier = this->LowPowerPenaltyModifier;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[41548],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            128)
      || (v91 = COERCE_FLOAT(VocClass::FindIndex(aP1.headNode)), v91 == NAN) )
    {
      v91 = LowPowerPenaltyModifier;
    }
    *(_DWORD *)&v260[8] = 128;
    this->LowPowerPenaltyModifier = v91;
    MultipleFactory = this->MultipleFactory;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[41524],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v93 = COERCE_FLOAT(VocClass::FindIndex(aP1.headNode)), v93 == NAN) )
    {
      v93 = MultipleFactory;
    }
    *(_DWORD *)&v260[8] = 128;
    this->MultipleFactory = v93;
    MaximumCheerRate = this->MaximumCheerRate;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[41500],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v95 = VocClass::FindIndex(aP1.headNode), v95 == -1) )
    {
      v95 = MaximumCheerRate;
    }
    this->MaximumCheerRate = v95;
    v96 = *(_DWORD *)this->__pad_240;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[41480],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            128)
      || (v97 = VocClass::FindIndex(aP1.headNode), v97 == -1) )
    {
      v97 = v96;
    }
    *(_DWORD *)&v260[8] = 128;
    *(_DWORD *)this->__pad_240 = v97;
    v98 = *(_DWORD *)&this->__pad_240[4];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[41456],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v99 = VocClass::FindIndex(aP1.headNode), v99 == -1) )
    {
      v99 = v98;
    }
    *(_DWORD *)&v260[8] = 128;
    *(_DWORD *)&this->__pad_240[4] = v99;
    v100 = *(_DWORD *)&this->__pad_240[8];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[41436],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v101 = VocClass::FindIndex(aP1.headNode), v101 == -1) )
    {
      v101 = v100;
    }
    *(_DWORD *)&this->__pad_240[8] = v101;
    v102 = *(_DWORD *)&this->__pad_240[12];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[41404],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            128)
      || (v103 = VocClass::FindIndex(aP1.headNode), v103 == -1) )
    {
      v103 = v102;
    }
    *(_DWORD *)&v260[8] = 128;
    *(_DWORD *)&this->__pad_240[12] = v103;
    v104 = *(_DWORD *)&this->__pad_240[16];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[41376],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v105 = VocClass::FindIndex(aP1.headNode), v105 == -1) )
    {
      v105 = v104;
    }
    *(_DWORD *)&v260[8] = 128;
    *(_DWORD *)&this->__pad_240[16] = v105;
    v106 = *(_DWORD *)&this->__pad_240[20];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[41348],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v107 = VocClass::FindIndex(aP1.headNode), v107 == -1) )
    {
      v107 = v106;
    }
    *(_DWORD *)&this->__pad_240[20] = v107;
    v108 = *(_DWORD *)&this->__pad_240[24];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[41316],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            128)
      || (v109 = VocClass::FindIndex(aP1.headNode), v109 == -1) )
    {
      v109 = v108;
    }
    *(_DWORD *)&v260[8] = 128;
    *(_DWORD *)&this->__pad_240[24] = v109;
    v110 = *(_DWORD *)&this->__pad_240[28];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[41296],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v111 = VocClass::FindIndex(aP1.headNode), v111 == -1) )
    {
      v111 = v110;
    }
    *(_DWORD *)&v260[8] = 128;
    *(_DWORD *)&this->__pad_240[28] = v111;
    v112 = *(_DWORD *)&this->__pad_240[32];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[41272],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v113 = VocClass::FindIndex(aP1.headNode), v113 == -1) )
    {
      v113 = v112;
    }
    *(_DWORD *)&this->__pad_240[32] = v113;
    v114 = *(_DWORD *)&this->__pad_240[36];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[41252],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            128)
      || (v115 = VocClass::FindIndex(aP1.headNode), v115 == -1) )
    {
      v115 = v114;
    }
    *(_DWORD *)&v260[8] = 128;
    *(_DWORD *)&this->__pad_240[36] = v115;
    v116 = *(_DWORD *)&this->__pad_240[40];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[41232],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v117 = VocClass::FindIndex(aP1.headNode), v117 == -1) )
    {
      v117 = v116;
    }
    *(_DWORD *)&v260[8] = 128;
    *(_DWORD *)&this->__pad_240[40] = v117;
    v118 = *(_DWORD *)&this->__pad_240[44];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[41212],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v119 = VocClass::FindIndex(aP1.headNode), v119 == -1) )
    {
      v119 = v118;
    }
    *(_DWORD *)&this->__pad_240[44] = v119;
    v120 = *(_DWORD *)&this->__pad_240[48];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[41188],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            128)
      || (v121 = VocClass::FindIndex(aP1.headNode), v121 == -1) )
    {
      v121 = v120;
    }
    *(_DWORD *)&v260[8] = 128;
    *(_DWORD *)&this->__pad_240[48] = v121;
    v122 = *(_DWORD *)&this->__pad_240[52];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[41164],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v123 = VocClass::FindIndex(aP1.headNode), v123 == -1) )
    {
      v123 = v122;
    }
    *(_DWORD *)&v260[8] = 128;
    *(_DWORD *)&this->__pad_240[52] = v123;
    v124 = *(_DWORD *)&this->__pad_240[56];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[41148],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v125 = VocClass::FindIndex(aP1.headNode), v125 == -1) )
    {
      v125 = v124;
    }
    *(_DWORD *)&this->__pad_240[56] = v125;
    v126 = *(_DWORD *)&this->__pad_240[60];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[41132],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            128)
      || (v127 = VocClass::FindIndex(aP1.headNode), v127 == -1) )
    {
      v127 = v126;
    }
    *(_DWORD *)&v260[8] = 128;
    *(_DWORD *)&this->__pad_240[60] = v127;
    v128 = *(_DWORD *)&this->__pad_240[64];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[41116],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v129 = VocClass::FindIndex(aP1.headNode), v129 == -1) )
    {
      v129 = v128;
    }
    *(_DWORD *)&v260[8] = 128;
    *(_DWORD *)&this->__pad_240[64] = v129;
    v130 = *(_DWORD *)&this->__pad_240[68];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[41088],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v131 = VocClass::FindIndex(aP1.headNode), v131 == -1) )
    {
      v131 = v130;
    }
    *(_DWORD *)&this->__pad_240[68] = v131;
    v132 = *(_DWORD *)&this->__pad_240[72];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[41060],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            128)
      || (v133 = VocClass::FindIndex(aP1.headNode), v133 == -1) )
    {
      v133 = v132;
    }
    *(_DWORD *)&v260[8] = 128;
    *(_DWORD *)&this->__pad_240[72] = v133;
    v134 = *(_DWORD *)&this->__pad_240[76];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[41040],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v135 = VocClass::FindIndex(aP1.headNode), v135 == -1) )
    {
      v135 = v134;
    }
    *(_DWORD *)&this->__pad_240[76] = v135;
    *(_DWORD *)&this->__pad_240[80] = INIClass::ReadInt_Overwrite(
                                        (int)v273,
                                        (unsigned __int8 *)&stru_830620[39048],
                                        (CCINIClass *)&stru_830620[41016],
                                        *(INIClass **)&this->__pad_240[80]);
    SinkingSound = this->SinkingSound;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            aCreateunitsoun,
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            128)
      || (v137 = VocClass::FindIndex(aP1.headNode), v137 == -1) )
    {
      v137 = SinkingSound;
    }
    *(_DWORD *)&v260[8] = 128;
    this->SinkingSound = v137;
    BombTickingSound = this->BombTickingSound;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[40996],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v139 = VocClass::FindIndex(aP1.headNode), v139 == -1) )
    {
      v139 = BombTickingSound;
    }
    *(_DWORD *)&v260[8] = 128;
    this->BombTickingSound = v139;
    BombAttachSound = this->BombAttachSound;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[40976],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v141 = VocClass::FindIndex(aP1.headNode), v141 == -1) )
    {
      v141 = BombAttachSound;
    }
    this->BombAttachSound = v141;
    BunkerWallsDownSound = this->BunkerWallsDownSound;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[40956],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            128)
      || (v143 = VocClass::FindIndex(aP1.headNode), v143 == -1) )
    {
      v143 = BunkerWallsDownSound;
    }
    *(_DWORD *)&v260[8] = 128;
    this->BunkerWallsDownSound = v143;
    RepairBridgeSound = this->RepairBridgeSound;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[40928],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v145 = VocClass::FindIndex(aP1.headNode), v145 == -1) )
    {
      v145 = RepairBridgeSound;
    }
    *(_DWORD *)&v260[8] = 128;
    this->RepairBridgeSound = v145;
    v146 = this->ConditionYellowSparkingProbability[1];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[40904],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v147 = VocClass::FindIndex(aP1.headNode), v147 == -1) )
    {
      v147 = v146;
    }
    this->ConditionYellowSparkingProbability[1] = v147;
    TiberiumExplosionDamage = this->TiberiumExplosionDamage;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[40880],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            128)
      || (v149 = VocClass::FindIndex(aP1.headNode), v149 == -1) )
    {
      v149 = TiberiumExplosionDamage;
    }
    *(_DWORD *)&v260[8] = 128;
    this->TiberiumExplosionDamage = v149;
    v150 = *(AnimTypeClass **)&this->__pad_240[84];
    if ( INIClass::GetString(
           v273,
           (INIClass *)&stru_830620[39048],
           (unsigned __int8 *)&stru_830620[40876],
           (INIClass *)&stru_87C374[56304],
           (INIClass *)aP1.headNode,
           *(int *)&v260[8]) )
    {
      v151 = AnimTypeClass::FindOrCreate((AbstractClass *)aP1.headNode);
    }
    else
    {
      v151 = v150;
    }
    *(_DWORD *)&v260[8] = 128;
    *(_DWORD *)&this->__pad_240[84] = v151;
    v152 = *(AnimTypeClass **)&this->__pad_240[276];
    if ( INIClass::GetString(
           v273,
           (INIClass *)&stru_830620[39048],
           (unsigned __int8 *)&stru_830620[40860],
           (INIClass *)&stru_87C374[56304],
           (INIClass *)aP1.headNode,
           *(int *)&v260[8]) )
    {
      v153 = AnimTypeClass::FindOrCreate((AbstractClass *)aP1.headNode);
    }
    else
    {
      v153 = v152;
    }
    *(_DWORD *)&this->__pad_240[276] = v153;
    v154 = *(_DWORD *)&this->__pad_240[452];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[40852],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            128)
      || (v155 = VocClass::FindIndex(aP1.headNode), v155 == -1) )
    {
      v155 = v154;
    }
    *(_DWORD *)&v260[8] = 128;
    *(_DWORD *)&this->__pad_240[452] = v155;
    v156 = *(_DWORD *)&this->__pad_240[456];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[40840],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v157 = VocClass::FindIndex(aP1.headNode), v157 == -1) )
    {
      v157 = v156;
    }
    *(_DWORD *)&this->__pad_240[456] = v157;
    LOBYTE(this->ElevationBonusCap[1]) = INIClass::ReadBool_Overwrite(
                                           (int)v273,
                                           (unsigned __int8 *)&stru_830620[39048],
                                           (CCINIClass *)&stru_830620[40828],
                                           this->ElevationBonusCap[1]);
    aP3 = (INIClass *)this->ScrollMultiplier[0];
    *(_DWORD *)&v260[8] = this->ScrollMultiplier[1];
    *(double *)this->ScrollMultiplier = INIClass::ReadDouble_Overwrite(
                                          (int)v273,
                                          (INIClass *)&stru_830620[39048],
                                          (unsigned __int8 *)&stru_830620[40808],
                                          aP3);
    v159 = INIClass::ReadInt_Overwrite(
             (int)v273,
             (unsigned __int8 *)&stru_830620[39048],
             (CCINIClass *)&stru_830620[40796],
             (INIClass *)this->ShakeScreen);
    *(_DWORD *)&v260[8] = 128;
    this->ShakeScreen = v159;
    BuildingSlam = this->BuildingSlam;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[40784],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v161 = VocClass::FindIndex(aP1.headNode), v161 == -1) )
    {
      v161 = BuildingSlam;
    }
    *(_DWORD *)&v260[8] = 128;
    this->BuildingSlam = v161;
    RadarOn = this->RadarOn;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[40772],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v163 = VocClass::FindIndex(aP1.headNode), v163 == -1) )
    {
      v163 = RadarOn;
    }
    this->RadarOn = v163;
    RadarOff = this->RadarOff;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[40760],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            128)
      || (v165 = VocClass::FindIndex(aP1.headNode), v165 == -1) )
    {
      v165 = RadarOff;
    }
    *(_DWORD *)&v260[8] = 128;
    this->RadarOff = v165;
    MovieOn = this->MovieOn;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[40744],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v167 = VocClass::FindIndex(aP1.headNode), v167 == -1) )
    {
      v167 = MovieOn;
    }
    *(_DWORD *)&v260[8] = 128;
    this->MovieOn = v167;
    GenericBeep = this->GenericBeep;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[40724],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v169 = VocClass::FindIndex(aP1.headNode), v169 == -1) )
    {
      v169 = GenericBeep;
    }
    this->GenericBeep = v169;
    MovieOff = this->MovieOff;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[40712],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            128)
      || (v171 = VocClass::FindIndex(aP1.headNode), v171 == -1) )
    {
      v171 = MovieOff;
    }
    *(_DWORD *)&v260[8] = 128;
    this->MovieOff = v171;
    ScoldSound = this->ScoldSound;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[40696],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v173 = VocClass::FindIndex(aP1.headNode), v173 == -1) )
    {
      v173 = ScoldSound;
    }
    *(_DWORD *)&v260[8] = 128;
    this->ScoldSound = v173;
    TeslaCharge = this->TeslaCharge;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[40684],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v175 = VocClass::FindIndex(aP1.headNode), v175 == -1) )
    {
      v175 = TeslaCharge;
    }
    this->TeslaCharge = v175;
    TeslaZap = this->TeslaZap;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[40672],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            128)
      || (v177 = VocClass::FindIndex(aP1.headNode), v177 == -1) )
    {
      v177 = TeslaZap;
    }
    *(_DWORD *)&v260[8] = 128;
    this->TeslaZap = v177;
    GenericClick = this->GenericClick;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[40656],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v179 = VocClass::FindIndex(aP1.headNode), v179 == -1) )
    {
      v179 = GenericClick;
    }
    *(_DWORD *)&v260[8] = 128;
    this->GenericClick = v179;
    BuildingDamageSound = this->BuildingDamageSound;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            aConstruction,
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v181 = VocClass::FindIndex(aP1.headNode), v181 == -1) )
    {
      v181 = BuildingDamageSound;
    }
    this->BuildingDamageSound = v181;
    IntVector::Copy(&v256, (VectorClass *)&this->HealCrateSound);
    INIClassIntList = (CCINIClass *)GetINIClassIntList(
                                      (int)&v264,
                                      v273,
                                      (INIClass *)&stru_830620[39048],
                                      (unsigned __int8 *)&stru_830620[40644],
                                      (void **)&vt_TypeList_int,
                                      v257,
                                      (int)v258,
                                      v259,
                                      this->ScatterSound,
                                      this->DeploySound,
                                      *(int *)&v260[8]);
    TypeList::Copy(&this->HealCrateSound, INIClassIntList);
    this->ScatterSound = INIClassIntList->sectionHead[0];
    this->DeploySound = INIClassIntList->sectionHead[1];
    this->StormSound = INIClassIntList->sectionHead[2];
    v264 = (void **)&vt_VectorClass_int;
    if ( Block && v266 )
      __3_YAXPAX_Z(Block);
    v183 = this->LightningSounds[0];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[40624],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            128)
      || (v184 = VocClass::FindIndex(aP1.headNode), v184 == -1) )
    {
      v184 = v183;
    }
    *(_DWORD *)&v260[8] = 128;
    this->LightningSounds[0] = v184;
    v185 = this->LightningSounds[1];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[40608],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v186 = VocClass::FindIndex(aP1.headNode), v186 == -1) )
    {
      v186 = v185;
    }
    *(_DWORD *)&v260[8] = 128;
    this->LightningSounds[1] = v186;
    v187 = this->LightningSounds[2];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[40600],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v188 = VocClass::FindIndex(aP1.headNode), v188 == -1) )
    {
      v188 = v187;
    }
    this->LightningSounds[2] = v188;
    v189 = this->LightningSounds[3];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[40588],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            128)
      || (v190 = VocClass::FindIndex(aP1.headNode), v190 == -1) )
    {
      v190 = v189;
    }
    *(_DWORD *)&v260[8] = 128;
    this->LightningSounds[3] = v190;
    v191 = this->LightningSounds[4];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[40580],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v192 = VocClass::FindIndex(aP1.headNode), v192 == -1) )
    {
      v192 = v191;
    }
    *(_DWORD *)&v260[8] = 128;
    this->LightningSounds[4] = v192;
    v193 = this->LightningSounds[5];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[40568],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v194 = VocClass::FindIndex(aP1.headNode), v194 == -1) )
    {
      v194 = v193;
    }
    this->LightningSounds[5] = v194;
    ShellButtonSlideSound = this->ShellButtonSlideSound;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[40556],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            128)
      || (v196 = VocClass::FindIndex(aP1.headNode), v196 == -1) )
    {
      v196 = ShellButtonSlideSound;
    }
    *(_DWORD *)&v260[8] = 128;
    this->ShellButtonSlideSound = v196;
    v197 = *(_DWORD *)this->__pad_704;
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[40544],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v198 = VocClass::FindIndex(aP1.headNode), v198 == -1) )
    {
      v198 = v197;
    }
    *(_DWORD *)&v260[8] = 128;
    *(_DWORD *)this->__pad_704 = v198;
    v199 = *(_DWORD *)&this->__pad_704[4];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[40532],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v200 = VocClass::FindIndex(aP1.headNode), v200 == -1) )
    {
      v200 = v199;
    }
    *(_DWORD *)&this->__pad_704[4] = v200;
    v201 = *(_DWORD *)&this->__pad_704[16];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[40512],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            128)
      || (v202 = VocClass::FindIndex(aP1.headNode), v202 == -1) )
    {
      v202 = v201;
    }
    *(_DWORD *)&v260[8] = 128;
    *(_DWORD *)&this->__pad_704[16] = v202;
    v203 = *(_DWORD *)&this->__pad_704[24];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[40500],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v204 = VocClass::FindIndex(aP1.headNode), v204 == -1) )
    {
      v204 = v203;
    }
    *(_DWORD *)&v260[8] = 128;
    *(_DWORD *)&this->__pad_704[24] = v204;
    v205 = *(_DWORD *)&this->__pad_704[8];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[40484],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v206 = VocClass::FindIndex(aP1.headNode), v206 == -1) )
    {
      v206 = v205;
    }
    *(_DWORD *)&this->__pad_704[8] = v206;
    v207 = *(_DWORD *)&this->__pad_704[12];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[40472],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            128)
      || (v208 = VocClass::FindIndex(aP1.headNode), v208 == -1) )
    {
      v208 = v207;
    }
    *(_DWORD *)&v260[8] = 128;
    *(_DWORD *)&this->__pad_704[12] = v208;
    v209 = this->NodBaseDefenseCoefficient[0];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[40456],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v210 = VocClass::FindIndex(aP1.headNode), v210 == -1) )
    {
      v210 = v209;
    }
    *(_DWORD *)&v260[8] = 128;
    this->NodBaseDefenseCoefficient[0] = v210;
    v211 = *(_DWORD *)&this->__pad_704[28];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            &unk_818404,
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v212 = VocClass::FindIndex(aP1.headNode), v212 == -1) )
    {
      v212 = v211;
    }
    *(_DWORD *)&this->__pad_704[28] = v212;
    v213 = *(_DWORD *)&this->__pad_704[32];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[40444],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            128)
      || (v214 = VocClass::FindIndex(aP1.headNode), v214 == -1) )
    {
      v214 = v213;
    }
    *(_DWORD *)&v260[8] = 128;
    *(_DWORD *)&this->__pad_704[32] = v214;
    v215 = *(_DWORD *)&this->__pad_704[36];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[40428],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v216 = VocClass::FindIndex(aP1.headNode), v216 == -1) )
    {
      v216 = v215;
    }
    *(_DWORD *)&v260[8] = 128;
    *(_DWORD *)&this->__pad_704[36] = v216;
    v217 = *(_DWORD *)&this->__pad_704[44];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[40416],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            *(int *)&v260[8])
      || (v218 = VocClass::FindIndex(aP1.headNode), v218 == -1) )
    {
      v218 = v217;
    }
    *(_DWORD *)&this->__pad_704[44] = v218;
    IntVector::Copy(&v256, (VectorClass *)&this->__pad_704[48]);
    v219 = (CCINIClass *)GetINIClassIntList(
                           (int)&v264,
                           v273,
                           (INIClass *)&stru_830620[39048],
                           (unsigned __int8 *)&stru_830620[40400],
                           (void **)&vt_TypeList_int,
                           v257,
                           (int)v258,
                           v259,
                           *(_DWORD *)&this->__pad_704[64],
                           *(_DWORD *)&this->__pad_704[68],
                           *(int *)&v260[8]);
    TypeList::Copy(&this->__pad_704[48], v219);
    *(_DWORD *)&this->__pad_704[64] = v219->sectionHead[0];
    *(_DWORD *)&this->__pad_704[68] = v219->sectionHead[1];
    *(_DWORD *)&this->__pad_704[72] = v219->sectionHead[2];
    v264 = (void **)&vt_VectorClass_int;
    if ( Block && v266 )
      __3_YAXPAX_Z(Block);
    v220 = *(_DWORD *)&this->__pad_704[76];
    if ( !INIClass::GetString(
            v273,
            (INIClass *)&stru_830620[39048],
            (unsigned __int8 *)&stru_830620[40376],
            (INIClass *)&stru_87C374[56304],
            (INIClass *)aP1.headNode,
            128)
      || (v221 = VocClass::FindIndex(aP1.headNode), v221 == -1) )
    {
      v221 = v220;
    }
    *(_DWORD *)&v260[8] = 128;
    *(_DWORD *)&this->__pad_704[76] = v221;
    if ( INIClass::GetString(
           v273,
           (INIClass *)&stru_830620[39048],
           (unsigned __int8 *)&stru_830620[40364],
           (INIClass *)&stru_87C374[56304],
           (INIClass *)aP1.headNode,
           *(int *)&v260[8]) )
    {
      DynamicVectorClass::AnimTypeConstructor(&v264, 0, 0);
      v264 = (void **)&vt_TypeList_AnimTypeClass_const;
      for ( i = (AbstractClass *)strtok((char *)aP1.headNode, (ObjectClass *)&stru_817F40.nextObject);
            i;
            i = (AbstractClass *)strtok(0, (ObjectClass *)&stru_817F40.nextObject) )
      {
        if ( !i->__pad_0[0] )
          break;
        *(_DWORD *)aP1[0] = AnimTypeClass::FindOrCreate(i);
        if ( *(_DWORD *)aP1[0] )
          DynamicVector::Add_Alt4(&v264, (VectorClass *)&aP1);
      }
      TypeList::AnimTypeCopy(&v267, (VectorClass *)&v264);
      v264 = (void **)&vt_VectorClass_AnimTypeClass_const;
      DynamicVectorClass::Destroy_Alt((int)&v264);
    }
    else
    {
      TypeList::AnimTypeCopy(&v267, (VectorClass *)&this->Easy[17]);
    }
    VectorClass::CopyDefault(&this->Easy[17], (VectorClass *)&v267);
    this->Normal[1] = v270;
    this->Normal[2] = v271;
    this->Normal[3] = v272;
    v267 = (void **)&vt_VectorClass_AnimTypeClass_const;
    if ( v268 && v269 )
      __3_YAXPAX_Z(v268);
    if ( INIClass::GetString(
           v273,
           (INIClass *)&stru_830620[39048],
           (unsigned __int8 *)&stru_830620[40356],
           (INIClass *)&stru_87C374[56304],
           (INIClass *)aP1.headNode,
           128) )
    {
      DynamicVectorClass::AnimTypeConstructor(&v264, 0, 0);
      v264 = (void **)&vt_TypeList_AnimTypeClass_const;
      for ( j = (AbstractClass *)strtok((char *)aP1.headNode, (ObjectClass *)&stru_817F40.nextObject);
            j;
            j = (AbstractClass *)strtok(0, (ObjectClass *)&stru_817F40.nextObject) )
      {
        if ( !j->__pad_0[0] )
          break;
        *(_DWORD *)aP1[0] = AnimTypeClass::FindOrCreate(j);
        if ( *(_DWORD *)aP1[0] )
          DynamicVector::Add_Alt4(&v264, (VectorClass *)&aP1);
      }
      TypeList::AnimTypeCopy(&v267, (VectorClass *)&v264);
      v264 = (void **)&vt_VectorClass_AnimTypeClass_const;
      DynamicVectorClass::Destroy_Alt((int)&v264);
    }
    else
    {
      TypeList::AnimTypeCopy(&v267, (VectorClass *)&this->Easy[10]);
    }
    InfantryTypeClass::CopyDataArray(&this->Easy[10], (DynamicVector *)&v267);
    this->Easy[16] = v272;
    v267 = (void **)&vt_VectorClass_AnimTypeClass_const;
    DynamicVectorClass::Destroy_Alt((int)&v267);
    v224 = this->Normal[4];
    if ( INIClass::GetString(
           v273,
           (INIClass *)&stru_830620[39048],
           (unsigned __int8 *)&stru_830620[26860],
           (INIClass *)&stru_87C374[56304],
           (INIClass *)aP1.headNode,
           128) )
    {
      v225 = AnimTypeClass::FindOrCreate((AbstractClass *)aP1.headNode);
    }
    else
    {
      v225 = (AnimTypeClass *)v224;
    }
    *(_DWORD *)&v260[8] = 128;
    this->Normal[4] = (int)v225;
    v226 = this->Normal[5];
    if ( INIClass::GetString(
           v273,
           (INIClass *)&stru_830620[39048],
           (unsigned __int8 *)&stru_830620[26860],
           (INIClass *)&stru_87C374[56304],
           (INIClass *)aP1.headNode,
           *(int *)&v260[8]) )
    {
      v227 = AnimTypeClass::FindOrCreate((AbstractClass *)aP1.headNode);
    }
    else
    {
      v227 = (AnimTypeClass *)v226;
    }
    this->Normal[5] = (int)v227;
    v228 = INIClass::ReadInt_Overwrite(
             (int)v273,
             (unsigned __int8 *)&stru_830620[39048],
             (CCINIClass *)&stru_830620[40340],
             (INIClass *)this->Normal[19]);
    *(_DWORD *)&v260[8] = 128;
    this->Normal[19] = v228;
    v229 = this->Normal[16];
    if ( INIClass::GetString(
           v273,
           (INIClass *)&stru_830620[39048],
           (unsigned __int8 *)&stru_830620[40328],
           (INIClass *)&stru_87C374[56304],
           (INIClass *)aP1.headNode,
           *(int *)&v260[8]) )
    {
      v230 = AnimTypeClass::FindOrCreate((AbstractClass *)aP1.headNode);
    }
    else
    {
      v230 = (AnimTypeClass *)v229;
    }
    *(_DWORD *)&v260[8] = 128;
    this->Normal[16] = (int)v230;
    v231 = this->Normal[17];
    if ( INIClass::GetString(
           v273,
           (INIClass *)&stru_830620[39048],
           (unsigned __int8 *)&stru_830620[40316],
           (INIClass *)&stru_87C374[56304],
           (INIClass *)aP1.headNode,
           *(int *)&v260[8]) )
    {
      v232 = AnimTypeClass::FindOrCreate((AbstractClass *)aP1.headNode);
    }
    else
    {
      v232 = (AnimTypeClass *)v231;
    }
    this->Normal[17] = (int)v232;
    HIBYTE(this->ElevationIncrementBonus[0]) = INIClass::ReadBool_Overwrite(
                                                 (int)v273,
                                                 (unsigned __int8 *)&stru_830620[39048],
                                                 (CCINIClass *)&stru_830620[40304],
                                                 HIBYTE(this->ElevationIncrementBonus[0]));
    this->Crush = 0;
    this->CrateRadius = 1072693248;
    v233 = (CCINIClass *)this->RefundPercent[0];
    *(_DWORD *)&v260[8] = this->RefundPercent[1];
    *(double *)this->RefundPercent = INIClass::ReadDouble_Overwrite(
                                       (int)v273,
                                       (INIClass *)&stru_830620[39048],
                                       (unsigned __int8 *)&stru_830620[40288],
                                       (INIClass *)v233);
    v234 = (CCINIClass *)this->HomingScatter;
    *(_DWORD *)&v260[8] = this->BallisticScatter;
    *(double *)&this->HomingScatter = INIClass::ReadDouble_Overwrite(
                                        (int)v273,
                                        (INIClass *)&stru_830620[39048],
                                        (unsigned __int8 *)&stru_830620[40272],
                                        (INIClass *)v234);
    *(_DWORD *)&v260[8] = *(_DWORD *)&this->__pad_C3C[2176];
    *(_DWORD *)&v260[4] = &stru_830620[40256];
    *(_DWORD *)v260 = &stru_830620[39048];
    *(_DWORD *)&this->__pad_C3C[2176] = INIClass::ReadCoord(*(double *)v260, *(int *)&v260[8], aP3_8, aP3_12);
    BYTE2(this->ElevationIncrementBonus[0]) = INIClass::ReadBool_Overwrite(
                                                (int)v273,
                                                (unsigned __int8 *)&stru_830620[39048],
                                                (CCINIClass *)&stru_830620[40244],
                                                BYTE2(this->ElevationIncrementBonus[0]));
    this->RepairRate[0] = INIClass::ReadInt_Overwrite(
                            (int)v273,
                            (unsigned __int8 *)&stru_830620[39048],
                            (CCINIClass *)&stru_830620[40236],
                            (INIClass *)this->RepairRate[0]);
    v236 = (CCINIClass *)this->BridgeStrength;
    *(_DWORD *)&v260[8] = this->BuildSpeed[0];
    *(double *)&this->BridgeStrength = INIClass::ReadDouble_Overwrite(
                                         (int)v273,
                                         (INIClass *)&stru_830620[39048],
                                         (unsigned __int8 *)&stru_830620[40216],
                                         (INIClass *)v236);
    v237 = *(CCINIClass **)&this->__pad_C3C[2180];
    *(_DWORD *)&v260[8] = *(_DWORD *)&this->__pad_C3C[2184];
    *(double *)&this->__pad_C3C[2180] = INIClass::ReadDouble_Overwrite(
                                          (int)v273,
                                          (INIClass *)&stru_830620[39048],
                                          (unsigned __int8 *)&stru_830620[40200],
                                          (INIClass *)v237);
    v238 = (CCINIClass *)this->ForceShieldBlackoutDuration;
    *(_DWORD *)&v260[8] = this->ForceShieldPlayFadeSoundTime;
    *(double *)&this->ForceShieldBlackoutDuration = INIClass::ReadDouble_Overwrite(
                                                      (int)v273,
                                                      (INIClass *)&stru_830620[39048],
                                                      (unsigned __int8 *)&stru_830620[40188],
                                                      (INIClass *)v238);
    BYTE2(this->ElevationIncrementBonus[1]) = INIClass::ReadBool_Overwrite(
                                                (int)v273,
                                                (unsigned __int8 *)&stru_830620[39048],
                                                (CCINIClass *)&stru_830620[40172],
                                                BYTE2(this->ElevationIncrementBonus[1]));
    v239 = *(CCINIClass **)&this->__pad_C3C[2188];
    *(_DWORD *)&v260[8] = *(_DWORD *)&this->__pad_C3C[2192];
    *(double *)&this->__pad_C3C[2188] = INIClass::ReadDouble_Overwrite(
                                          (int)v273,
                                          (INIClass *)&stru_830620[39048],
                                          (unsigned __int8 *)&stru_830620[40160],
                                          (INIClass *)v239);
    v240 = (CCINIClass *)this->ShroudRate[0];
    *(_DWORD *)&v260[8] = this->ShroudRate[1];
    *(double *)this->ShroudRate = INIClass::ReadDouble_Overwrite(
                                    (int)v273,
                                    (INIClass *)&stru_830620[39048],
                                    (unsigned __int8 *)&stru_830620[40148],
                                    (INIClass *)v240);
    v241 = (CCINIClass *)this->FogRate[0];
    *(_DWORD *)&v260[8] = this->FogRate[1];
    *(double *)this->FogRate = INIClass::ReadDouble_Overwrite(
                                 (int)v273,
                                 (INIClass *)&stru_830620[39048],
                                 (unsigned __int8 *)&stru_830620[40140],
                                 (INIClass *)v241);
    v242 = (CCINIClass *)this->VeinGrowthRate[0];
    *(_DWORD *)&v260[8] = this->VeinGrowthRate[1];
    *(double *)this->VeinGrowthRate = INIClass::ReadDouble_Overwrite(
                                        (int)v273,
                                        (INIClass *)&stru_830620[39048],
                                        (unsigned __int8 *)&stru_830620[40124],
                                        (INIClass *)v242);
    v243 = (CCINIClass *)this->IceGrowthRate[0];
    *(_DWORD *)&v260[8] = this->IceGrowthRate[1];
    *(double *)this->IceGrowthRate = INIClass::ReadDouble_Overwrite(
                                       (int)v273,
                                       (INIClass *)&stru_830620[39048],
                                       (unsigned __int8 *)&stru_830620[40108],
                                       (INIClass *)v243);
    this->IceSolidifyFrameTime = INIClass::ReadInt_Overwrite(
                                   (int)v273,
                                   (unsigned __int8 *)&stru_830620[39048],
                                   (CCINIClass *)&stru_830620[40084],
                                   (INIClass *)this->IceSolidifyFrameTime);
    (*(void (__thiscall **)(int *))(this->VeteranROF[0] + 12))(this->VeteranROF);
    DynamicVectorClass::Copy(&v256, (DynamicVector *)this->VeteranROF);
    ebp360 = GetINIClassIntList(
               (int)&v264,
               v273,
               (INIClass *)&stru_830620[39048],
               (unsigned __int8 *)&stru_830620[40068],
               (void **)&vt_TypeList_int,
               v257,
               (int)v258,
               v259,
               *(int *)v260,
               *(int *)&v260[4],
               *(int *)&v260[8]);
    TypeList::Copy(this->VeteranROF, ebp360);
    this->CloakSound = (int)ebp360[1].vtable0;
    this->SellSound = (int)ebp360[1].Items;
    this->GameClosed = ebp360[1].Capacity;
    v264 = (void **)&vt_VectorClass_int;
    if ( Block )
    {
      if ( v266 )
        __3_YAXPAX_Z(Block);
    }
    v245 = (CCINIClass *)this->AmbientChangeRate[1];
    *(_DWORD *)&v260[8] = this->AmbientChangeStep[0];
    *(double *)&this->AmbientChangeRate[1] = INIClass::ReadDouble_Overwrite(
                                               (int)v273,
                                               (INIClass *)&stru_830620[39048],
                                               (unsigned __int8 *)&stru_830620[40048],
                                               (INIClass *)v245);
    v246 = (CCINIClass *)this->AmbientChangeStep[1];
    *(_DWORD *)&v260[8] = this->CrateRegen[0];
    *(double *)&this->AmbientChangeStep[1] = INIClass::ReadDouble_Overwrite(
                                               (int)v273,
                                               (INIClass *)&stru_830620[39048],
                                               (unsigned __int8 *)&stru_830620[40028],
                                               (INIClass *)v246);
    v247 = (CCINIClass *)this->RepairStep;
    *(_DWORD *)&v260[8] = this->RepairPercent[0];
    *(double *)&this->RepairStep = INIClass::ReadDouble_Overwrite(
                                     (int)v273,
                                     (INIClass *)&stru_830620[39048],
                                     (unsigned __int8 *)&stru_830620[40016],
                                     (INIClass *)v247);
    v248 = (CCINIClass *)this->TimerWarning[1];
    *(_DWORD *)&v260[8] = this->SpeakDelay[0];
    *(double *)&this->TimerWarning[1] = INIClass::ReadDouble_Overwrite(
                                          (int)v273,
                                          (INIClass *)&stru_830620[39048],
                                          (unsigned __int8 *)&stru_830620[40000],
                                          (INIClass *)v248);
    *(_DWORD *)aP1[0] = this->RadTintFactor[1] / 1000;
    *(double *)&v260[4] = (double)*(int *)aP1[0];
    Double_Overwrite = INIClass::ReadDouble_Overwrite(
                         (int)v273,
                         (INIClass *)&stru_830620[39048],
                         (unsigned __int8 *)&stru_830620[39984],
                         *(INIClass **)&v260[4]);
    this->RadTintFactor[1] = Math::RoundToInt(Double_Overwrite * 1000.0);
    *(_DWORD *)aP1[0] = *(_DWORD *)this->RadColor / 1000;
    *(double *)&v260[4] = (double)*(int *)aP1[0];
    v249 = INIClass::ReadDouble_Overwrite(
             (int)v273,
             (INIClass *)&stru_830620[39048],
             (unsigned __int8 *)&stru_830620[39964],
             *(INIClass **)&v260[4]);
    *(_DWORD *)this->RadColor = Math::RoundToInt(v249 * 1000.0);
    *(_DWORD *)aP1[0] = (int)this->RadSiteWarhead / 1000;
    *(double *)&v260[4] = (double)*(int *)aP1[0];
    v250 = INIClass::ReadDouble_Overwrite(
             (int)v273,
             (INIClass *)&stru_830620[39048],
             (unsigned __int8 *)&stru_830620[39944],
             *(INIClass **)&v260[4]);
    this->RadSiteWarhead = (void *)Math::RoundToInt(v250 * 1000.0);
    Coord = INIClass::GetCoord(
              v273,
              &aP1,
              (INIClass *)&stru_830620[39048],
              (Color *)&stru_830620[39928],
              (Color *)this + 1560);
    *((_WORD *)this + 3120) = *(_WORD *)Coord;
    *((_BYTE *)this + 6242) = *(_BYTE *)(Coord + 2);
    v252 = INIClass::GetCoord(
             v273,
             &aP1,
             (INIClass *)&stru_830620[39048],
             (Color *)&stru_830620[39904],
             (Color *)((char *)this + 6243));
    *(_WORD *)((char *)this + 6243) = *(_WORD *)v252;
    *((_BYTE *)this + 6245) = *(_BYTE *)(v252 + 2);
    v253 = INIClass::GetCoord(
             v273,
             &aP1,
             (INIClass *)&stru_830620[39048],
             (Color *)&stru_830620[39888],
             (Color *)((char *)this + 6246));
    *((_WORD *)this + 3123) = *(_WORD *)v253;
    *((_BYTE *)this + 6248) = *(_BYTE *)(v253 + 2);
    v254 = INIClass::GetCoord(
             v273,
             &aP1,
             (INIClass *)&stru_830620[39048],
             (Color *)&stru_830620[39872],
             (Color *)((char *)this + 6249));
    *(_WORD *)((char *)this + 6249) = *(_WORD *)v254;
    *((_BYTE *)this + 6251) = *(_BYTE *)(v254 + 2);
    *((_DWORD *)this + 1563) = INIClass::ReadInt_Overwrite(
                                 (int)v273,
                                 (unsigned __int8 *)&stru_830620[39048],
                                 (CCINIClass *)&stru_830620[39852],
                                 *((INIClass **)this + 1563));
    *((_DWORD *)this + 1577) = INIClass::ReadInt_Overwrite(
                                 (int)v273,
                                 (unsigned __int8 *)&stru_830620[39048],
                                 (CCINIClass *)&stru_830620[39832],
                                 *((INIClass **)this + 1577));
    *((_DWORD *)this + 1578) = INIClass::ReadInt_Overwrite(
                                 (int)v273,
                                 (unsigned __int8 *)&stru_830620[39048],
                                 (CCINIClass *)&stru_830620[39812],
                                 *((INIClass **)this + 1578));
    *((_DWORD *)this + 1579) = INIClass::ReadInt_Overwrite(
                                 (int)v273,
                                 (unsigned __int8 *)&stru_830620[39048],
                                 (CCINIClass *)&stru_830620[39796],
                                 *((INIClass **)this + 1579));
    *((_DWORD *)this + 1580) = INIClass::ReadInt_Overwrite(
                                 (int)v273,
                                 (unsigned __int8 *)&stru_830620[39048],
                                 (CCINIClass *)&stru_830620[39776],
                                 *((INIClass **)this + 1580));
    *(double *)&v260[4] = *((float *)this + 1581);
    *((float *)this + 1581) = INIClass::ReadDouble_Overwrite(
                                (int)v273,
                                (INIClass *)&stru_830620[39048],
                                (unsigned __int8 *)&stru_830620[39748],
                                *(INIClass **)&v260[4]);
    v255 = *((float *)this + 1582);
    *(double *)&v260[4] = v255;
    *((float *)this + 1582) = INIClass::ReadDouble_Overwrite(
                                (int)v273,
                                (INIClass *)&stru_830620[39048],
                                (unsigned __int8 *)&stru_830620[39728],
                                (INIClass *)LODWORD(v255));
    LOBYTE(result) = 1;
  }
  else
  {
    LOBYTE(result) = 0;
  }
  return result;
}

}
} // namespace gamemd

// 0x66BBB0
namespace gamemd {
int Rules::ReadCombatINI()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Rules::ReadCombatINI(RulesClass *this)
{
  int result; // eax
  int Int_Overwrite; // eax
  ObjectClass *i; // eax
  int v5; // ecx
  VectorClass *v6; // edx
  void *v7; // eax
  ObjectClass *j; // eax
  void *v9; // ecx
  void *v10; // edx
  void *v11; // eax
  ObjectClass *k; // eax
  void *v13; // edx
  VectorClass *v14; // ecx
  void *v15; // eax
  ObjectClass *m; // eax
  void *v17; // ecx
  VectorClass *v18; // edx
  void *v19; // eax
  ObjectClass *n; // eax
  float v21; // ecx
  int v22; // edx
  void *v23; // eax
  AbstractClass *ii; // eax
  int v25; // edx
  VectorClass *v26; // ecx
  void *v27; // eax
  int v28; // ebx
  int v29; // eax
  int v30; // ebx
  int v31; // eax
  int v32; // ebx
  int v33; // eax
  int v34; // ebx
  int v35; // eax
  int v36; // ebx
  int v37; // eax
  int v38; // ebx
  int v39; // eax
  int v40; // ebx
  int v41; // eax
  int v42; // ebx
  int v43; // eax
  CCINIClass *v44; // ebx
  CCINIClass *v45; // eax
  int v46; // ebx
  int v47; // eax
  char Bool_Overwrite; // al
  WeaponTypeClass *v49; // ebx
  WeaponTypeClass *v50; // eax
  VectorClass *v56; // eax
  int v52; // edx
  CCINIClass *v58; // eax
  VectorClass *v59; // eax
  VectorClass *v60; // eax
  AnimTypeClass *ebx112; // ebx
  AnimTypeClass *v57; // eax
  AnimTypeClass *ebx115; // ebx
  AnimTypeClass *eax116; // eax
  AnimTypeClass *ebx118; // ebx
  AnimTypeClass *v61; // eax
  int v62; // ebx
  int v63; // eax
  ParticleSystemTypeClass *v64; // ebx
  ParticleSystemTypeClass *v65; // eax
  ParticleSystemTypeClass *v66; // ebx
  ParticleSystemTypeClass *v67; // eax
  ParticleSystemTypeClass *v68; // ebx
  ParticleSystemTypeClass *v69; // eax
  ParticleSystemTypeClass *v70; // ebx
  ParticleSystemTypeClass *v71; // eax
  ParticleSystemTypeClass *v72; // ebx
  ParticleSystemTypeClass *v73; // eax
  ParticleSystemTypeClass *v74; // ebx
  ParticleSystemTypeClass *v75; // eax
  ParticleSystemTypeClass *v76; // ebx
  ParticleSystemTypeClass *v77; // eax
  ParticleSystemTypeClass *v78; // ebx
  ParticleSystemTypeClass *v79; // eax
  ParticleSystemTypeClass *v80; // ebx
  ParticleSystemTypeClass *v81; // eax
  char v82; // al
  int v83; // edx
  INIClass *v84; // eax
  double Double_Overwrite; // st7
  CCINIClass *v90; // edx
  int v87; // eax
  DynamicVector *v92; // ecx
  int v89; // eax
  int LightningScatterDelay; // edx
  INIClass *LightningHitDelay; // eax
  double st7_151a; // st7
  DynamicVector *v95; // edx
  DynamicVector *Coord; // eax
  int ecx151; // ecx
  INIClass *v96; // edx
  double v97; // st7
  DynamicVector *v99; // ecx
  DynamicVector *v100; // eax
  CCINIClass *v101; // edx
  int eax151d; // eax
  CCINIClass *v103; // ecx
  char al151a; // al
  char v104; // dl
  char v105; // al
  char v106; // cl
  char v107; // al
  char v108; // dl
  char v109; // al
  WarheadTypeClass *v111; // ecx
  void **_FFFFFFEC; // [esp-14h] [ebp-E4h] BYREF
  CCINIClass *v113; // [esp-10h] [ebp-E0h]
  VectorClass *_FFFFFFF4; // [esp-Ch] [ebp-DCh]
  __int16 v114; // [esp-8h] [ebp-D8h]
  _BYTE aP3[12]; // [esp-4h] [ebp-D4h]
  INIClass *aP3_8; // [esp+8h] [ebp-C8h]
  int aP3_12; // [esp+Ch] [ebp-C4h]
  CCINIClass *IntList; // [esp+14h] [ebp-BCh] BYREF
  CCINIClass aP1_4[2]; // [esp+18h] [ebp-B8h] BYREF
  unsigned __int8 ***v120; // [esp+D8h] [ebp+8h]

  result = INIClass::BinarySearchSection((int)v120, (INIClass *)&stru_830620[39020]);
  if ( result )
  {
    this->AmmoCrateDamage = INIClass::ReadInt_Overwrite(
                              (int)v120,
                              (unsigned __int8 *)&stru_830620[39020],
                              (CCINIClass *)&stru_830620[44148],
                              (INIClass *)this->AmmoCrateDamage);
    *(_DWORD *)&this->__pad_240[592] = INIClass::ReadInt_Overwrite(
                                         (int)v120,
                                         (unsigned __int8 *)&stru_830620[39020],
                                         (CCINIClass *)&stru_830620[44132],
                                         *(INIClass **)&this->__pad_240[592]);
    *(_DWORD *)&this->__pad_240[596] = INIClass::ReadInt_Overwrite(
                                         (int)v120,
                                         (unsigned __int8 *)&stru_830620[39020],
                                         (CCINIClass *)&stru_830620[44112],
                                         *(INIClass **)&this->__pad_240[596]);
    *(_DWORD *)&this->__pad_240[808] = INIClass::ReadInt_Overwrite(
                                         (int)v120,
                                         (unsigned __int8 *)&stru_830620[39020],
                                         (CCINIClass *)&stru_830620[44088],
                                         *(INIClass **)&this->__pad_240[808]);
    Int_Overwrite = INIClass::ReadInt_Overwrite(
                      (int)v120,
                      (unsigned __int8 *)&stru_830620[39020],
                      (CCINIClass *)&stru_830620[44068],
                      *(INIClass **)&this->__pad_240[812]);
    *(_DWORD *)&aP3[8] = 128;
    *(_DWORD *)&this->__pad_240[812] = Int_Overwrite;
    if ( INIClass::GetString(
           v120,
           (INIClass *)&stru_830620[39020],
           (unsigned __int8 *)&stru_830620[44056],
           (INIClass *)&stru_87C374[56304],
           (INIClass *)&aP1_4[0].unknown38,
           *(int *)&aP3[8]) )
    {
      SmudgeTypeVector::Construct(&aP1_4[0].sectionCount, 0, 0);
      aP1_4[0].sectionCount = (int)&vt_TypeList_SmudgeTypeClass_const;
      for ( i = (ObjectClass *)strtok((char *)&aP1_4[0].unknown38, (ObjectClass *)&stru_817F40.nextObject);
            i;
            i = (ObjectClass *)strtok(0, (ObjectClass *)&stru_817F40.nextObject) )
      {
        if ( !i->__pad_0[0] )
          break;
        IntList = (CCINIClass *)FactoryClass::FindOrCreate(i);
        if ( IntList )
          SmudgeTypeVector::Add(&aP1_4[0].sectionCount, (CCINIClass *)&IntList);
      }
      SmudgeTypeList::Copy(aP1_4, (CCINIClass *)&aP1_4[0].sectionCount);
      aP1_4[0].sectionCount = (int)&vt_VectorClass_SmudgeTypeClass_const;
      VectorClass::ClearAndFree((int)&aP1_4[0].sectionCount);
    }
    else
    {
      SmudgeTypeList::Copy(aP1_4, (CCINIClass *)&this->NodBaseDefenseCoefficient[1]);
    }
    VectorClass::CopySmudge(&this->NodBaseDefenseCoefficient[1], aP1_4);
    v5 = aP1_4[0].sectionHead[1];
    v6 = (VectorClass *)aP1_4[0].sectionHead[2];
    this->MaximumBaseDefenseValue = aP1_4[0].sectionHead[0];
    v7 = (void *)aP1_4[0].headNode[0];
    this->BaseUnit[0] = v5;
    this->HarvesterUnit[0] = (int)v6;
    *(_DWORD *)aP1_4[0].__pad_0 = &vt_VectorClass_SmudgeTypeClass_const;
    if ( v7 && BYTE1(aP1_4[0].headNode[2]) )
      __3_YAXPAX_Z(v7);
    if ( INIClass::GetString(
           v120,
           (INIClass *)&stru_830620[39020],
           (unsigned __int8 *)&stru_830620[44044],
           (INIClass *)&stru_87C374[56304],
           (INIClass *)&aP1_4[0].unknown38,
           128) )
    {
      SmudgeTypeVector::Construct(&aP1_4[0].sectionCount, 0, 0);
      aP1_4[0].sectionCount = (int)&vt_TypeList_SmudgeTypeClass_const;
      for ( j = (ObjectClass *)strtok((char *)&aP1_4[0].unknown38, (ObjectClass *)&stru_817F40.nextObject);
            j;
            j = (ObjectClass *)strtok(0, (ObjectClass *)&stru_817F40.nextObject) )
      {
        if ( !j->__pad_0[0] )
          break;
        IntList = (CCINIClass *)FactoryClass::FindOrCreate(j);
        if ( IntList )
          SmudgeTypeVector::Add(&aP1_4[0].sectionCount, (CCINIClass *)&IntList);
      }
      SmudgeTypeList::Copy(aP1_4, (CCINIClass *)&aP1_4[0].sectionCount);
      aP1_4[0].sectionCount = (int)&vt_VectorClass_SmudgeTypeClass_const;
      VectorClass::ClearAndFree((int)&aP1_4[0].sectionCount);
    }
    else
    {
      SmudgeTypeList::Copy(aP1_4, (CCINIClass *)this->PadAircraft);
    }
    VectorClass::CopySmudge(this->PadAircraft, aP1_4);
    v9 = (void *)aP1_4[0].sectionHead[0];
    v10 = (void *)aP1_4[0].sectionHead[1];
    this->BombParachute = (void *)aP1_4[0].sectionHead[2];
    v11 = (void *)aP1_4[0].headNode[0];
    this->SmokeAlt = v9;
    this->MoveFlash = v10;
    *(_DWORD *)aP1_4[0].__pad_0 = &vt_VectorClass_SmudgeTypeClass_const;
    if ( v11 && BYTE1(aP1_4[0].headNode[2]) )
      __3_YAXPAX_Z(v11);
    if ( INIClass::GetString(
           v120,
           (INIClass *)&stru_830620[39020],
           (unsigned __int8 *)&stru_830620[44032],
           (INIClass *)&stru_87C374[56304],
           (INIClass *)&aP1_4[0].unknown38,
           128) )
    {
      SmudgeTypeVector::Construct(&aP1_4[0].sectionCount, 0, 0);
      aP1_4[0].sectionCount = (int)&vt_TypeList_SmudgeTypeClass_const;
      for ( k = (ObjectClass *)strtok((char *)&aP1_4[0].unknown38, (ObjectClass *)&stru_817F40.nextObject);
            k;
            k = (ObjectClass *)strtok(0, (ObjectClass *)&stru_817F40.nextObject) )
      {
        if ( !k->__pad_0[0] )
          break;
        IntList = (CCINIClass *)FactoryClass::FindOrCreate(k);
        if ( IntList )
          SmudgeTypeVector::Add(&aP1_4[0].sectionCount, (CCINIClass *)&IntList);
      }
      SmudgeTypeList::Copy(aP1_4, (CCINIClass *)&aP1_4[0].sectionCount);
      aP1_4[0].sectionCount = (int)&vt_VectorClass_SmudgeTypeClass_const;
      VectorClass::ClearAndFree((int)&aP1_4[0].sectionCount);
    }
    else
    {
      SmudgeTypeList::Copy(aP1_4, (CCINIClass *)&this->Parachute);
    }
    VectorClass::CopySmudge(&this->Parachute, aP1_4);
    v13 = (void *)aP1_4[0].sectionHead[0];
    v14 = (VectorClass *)aP1_4[0].sectionHead[2];
    this->EliteFlashTimer = aP1_4[0].sectionHead[1];
    v15 = (void *)aP1_4[0].headNode[0];
    this->Paratrooper = v13;
    this->ChronoDelay = (int)v14;
    *(_DWORD *)aP1_4[0].__pad_0 = &vt_VectorClass_SmudgeTypeClass_const;
    if ( v15 && BYTE1(aP1_4[0].headNode[2]) )
      __3_YAXPAX_Z(v15);
    if ( INIClass::GetString(
           v120,
           (INIClass *)&stru_830620[39020],
           (unsigned __int8 *)&stru_830620[44020],
           (INIClass *)&stru_87C374[56304],
           (INIClass *)&aP1_4[0].unknown38,
           128) )
    {
      SmudgeTypeVector::Construct(&aP1_4[0].sectionCount, 0, 0);
      aP1_4[0].sectionCount = (int)&vt_TypeList_SmudgeTypeClass_const;
      for ( m = (ObjectClass *)strtok((char *)&aP1_4[0].unknown38, (ObjectClass *)&stru_817F40.nextObject);
            m;
            m = (ObjectClass *)strtok(0, (ObjectClass *)&stru_817F40.nextObject) )
      {
        if ( !m->__pad_0[0] )
          break;
        IntList = (CCINIClass *)FactoryClass::FindOrCreate(m);
        if ( IntList )
          SmudgeTypeVector::Add(&aP1_4[0].sectionCount, (CCINIClass *)&IntList);
      }
      SmudgeTypeList::Copy(aP1_4, (CCINIClass *)&aP1_4[0].sectionCount);
      aP1_4[0].sectionCount = (int)&vt_VectorClass_SmudgeTypeClass_const;
      VectorClass::ClearAndFree((int)&aP1_4[0].sectionCount);
    }
    else
    {
      SmudgeTypeList::Copy(aP1_4, (CCINIClass *)&this->ChronoReinfDelay);
    }
    VectorClass::CopySmudge(&this->ChronoReinfDelay, aP1_4);
    v17 = (void *)aP1_4[0].sectionHead[1];
    v18 = (VectorClass *)aP1_4[0].sectionHead[2];
    this->ChronoRangeMinimum = aP1_4[0].sectionHead[0];
    v19 = (void *)aP1_4[0].headNode[0];
    this->AlliedDisguise = v17;
    this->SovietDisguise = v18;
    *(_DWORD *)aP1_4[0].__pad_0 = &vt_VectorClass_SmudgeTypeClass_const;
    if ( v19 && BYTE1(aP1_4[0].headNode[2]) )
      __3_YAXPAX_Z(v19);
    if ( INIClass::GetString(
           v120,
           (INIClass *)&stru_830620[39020],
           (unsigned __int8 *)&stru_830620[44008],
           (INIClass *)&stru_87C374[56304],
           (INIClass *)&aP1_4[0].unknown38,
           128) )
    {
      SmudgeTypeVector::Construct(&aP1_4[0].sectionCount, 0, 0);
      aP1_4[0].sectionCount = (int)&vt_TypeList_SmudgeTypeClass_const;
      for ( n = (ObjectClass *)strtok((char *)&aP1_4[0].unknown38, (ObjectClass *)&stru_817F40.nextObject);
            n;
            n = (ObjectClass *)strtok(0, (ObjectClass *)&stru_817F40.nextObject) )
      {
        if ( !n->__pad_0[0] )
          break;
        IntList = (CCINIClass *)FactoryClass::FindOrCreate(n);
        if ( IntList )
          SmudgeTypeVector::Add(&aP1_4[0].sectionCount, (CCINIClass *)&IntList);
      }
      SmudgeTypeList::Copy(aP1_4, (CCINIClass *)&aP1_4[0].sectionCount);
      aP1_4[0].sectionCount = (int)&vt_VectorClass_SmudgeTypeClass_const;
      VectorClass::ClearAndFree((int)&aP1_4[0].sectionCount);
    }
    else
    {
      SmudgeTypeList::Copy(aP1_4, (CCINIClass *)&this->ThirdDisguise);
    }
    VectorClass::CopySmudge(&this->ThirdDisguise, aP1_4);
    v21 = *(float *)aP1_4[0].sectionHead;
    v22 = aP1_4[0].sectionHead[1];
    this->HarvesterTooFarDistance = aP1_4[0].sectionHead[2];
    v23 = (void *)aP1_4[0].headNode[0];
    this->AIMinorSuperReadyPercent = v21;
    this->AISafeDistance = v22;
    *(_DWORD *)aP1_4[0].__pad_0 = &vt_VectorClass_SmudgeTypeClass_const;
    if ( v23 && BYTE1(aP1_4[0].headNode[2]) )
      __3_YAXPAX_Z(v23);
    if ( INIClass::GetString(
           v120,
           (INIClass *)&stru_830620[39020],
           (unsigned __int8 *)&stru_830620[43996],
           (INIClass *)&stru_87C374[56304],
           (INIClass *)&aP1_4[0].unknown38,
           128) )
    {
      DynamicVectorClass::AnimTypeConstructor(&aP1_4[0].sectionCount, 0, 0);
      aP1_4[0].sectionCount = (int)&vt_TypeList_AnimTypeClass_const;
      for ( ii = (AbstractClass *)strtok((char *)&aP1_4[0].unknown38, (ObjectClass *)&stru_817F40.nextObject);
            ii;
            ii = (AbstractClass *)strtok(0, (ObjectClass *)&stru_817F40.nextObject) )
      {
        if ( !ii->__pad_0[0] )
          break;
        IntList = (CCINIClass *)AnimTypeClass::FindOrCreate(ii);
        if ( IntList )
          DynamicVector::Add_Alt4(&aP1_4[0].sectionCount, (VectorClass *)&IntList);
      }
      TypeList::AnimTypeCopy(aP1_4, (VectorClass *)&aP1_4[0].sectionCount);
      aP1_4[0].sectionCount = (int)&vt_VectorClass_AnimTypeClass_const;
      DynamicVectorClass::Destroy_Alt((int)&aP1_4[0].sectionCount);
    }
    else
    {
      TypeList::AnimTypeCopy(aP1_4, (VectorClass *)&this->Normal[9]);
    }
    VectorClass::CopyDefault(&this->Normal[9], (VectorClass *)aP1_4);
    v25 = aP1_4[0].sectionHead[0];
    v26 = (VectorClass *)aP1_4[0].sectionHead[2];
    this->Normal[14] = aP1_4[0].sectionHead[1];
    v27 = (void *)aP1_4[0].headNode[0];
    this->Normal[13] = v25;
    this->Normal[15] = (int)v26;
    *(_DWORD *)aP1_4[0].__pad_0 = &vt_VectorClass_AnimTypeClass_const;
    if ( v27 && BYTE1(aP1_4[0].headNode[2]) )
      __3_YAXPAX_Z(v27);
    v28 = *(_DWORD *)&this->__pad_C3C[840];
    if ( INIClass::GetString(
           v120,
           (INIClass *)&stru_830620[39020],
           (unsigned __int8 *)&stru_830620[43984],
           (INIClass *)&stru_87C374[56304],
           (INIClass *)&aP1_4[0].unknown38,
           128) )
    {
      v29 = WarheadTypeClass::FindOrCreate((ObjectClass *)&aP1_4[0].unknown38);
    }
    else
    {
      v29 = v28;
    }
    *(_DWORD *)&aP3[8] = 128;
    *(_DWORD *)&this->__pad_C3C[840] = v29;
    v30 = *(_DWORD *)&this->__pad_C3C[844];
    if ( INIClass::GetString(
           v120,
           (INIClass *)&stru_830620[39020],
           (unsigned __int8 *)&stru_830620[43968],
           (INIClass *)&stru_87C374[56304],
           (INIClass *)&aP1_4[0].unknown38,
           *(int *)&aP3[8]) )
    {
      v31 = WarheadTypeClass::FindOrCreate((ObjectClass *)&aP1_4[0].unknown38);
    }
    else
    {
      v31 = v30;
    }
    *(_DWORD *)&this->__pad_C3C[844] = v31;
    v32 = *(_DWORD *)&this->__pad_C3C[876];
    if ( INIClass::GetString(
           v120,
           (INIClass *)&stru_830620[39020],
           (unsigned __int8 *)&stru_830620[43956],
           (INIClass *)&stru_87C374[56304],
           (INIClass *)&aP1_4[0].unknown38,
           128) )
    {
      v33 = WarheadTypeClass::FindOrCreate((ObjectClass *)&aP1_4[0].unknown38);
    }
    else
    {
      v33 = v32;
    }
    *(_DWORD *)&aP3[8] = 128;
    *(_DWORD *)&this->__pad_C3C[876] = v33;
    v34 = *(_DWORD *)&this->__pad_C3C[880];
    if ( INIClass::GetString(
           v120,
           (INIClass *)&stru_830620[39020],
           (unsigned __int8 *)&stru_830620[43940],
           (INIClass *)&stru_87C374[56304],
           (INIClass *)&aP1_4[0].unknown38,
           *(int *)&aP3[8]) )
    {
      v35 = WarheadTypeClass::FindOrCreate((ObjectClass *)&aP1_4[0].unknown38);
    }
    else
    {
      v35 = v34;
    }
    *(_DWORD *)&aP3[8] = 128;
    *(_DWORD *)&this->__pad_C3C[880] = v35;
    v36 = *(_DWORD *)&this->__pad_C3C[884];
    if ( INIClass::GetString(
           v120,
           (INIClass *)&stru_830620[39020],
           (unsigned __int8 *)&stru_830620[43928],
           (INIClass *)&stru_87C374[56304],
           (INIClass *)&aP1_4[0].unknown38,
           *(int *)&aP3[8]) )
    {
      v37 = WarheadTypeClass::FindOrCreate((ObjectClass *)&aP1_4[0].unknown38);
    }
    else
    {
      v37 = v36;
    }
    *(_DWORD *)&this->__pad_C3C[884] = v37;
    v38 = *(_DWORD *)&this->__pad_C3C[888];
    if ( INIClass::GetString(
           v120,
           (INIClass *)&stru_830620[39020],
           (unsigned __int8 *)&stru_830620[43912],
           (INIClass *)&stru_87C374[56304],
           (INIClass *)&aP1_4[0].unknown38,
           128) )
    {
      v39 = WarheadTypeClass::FindOrCreate((ObjectClass *)&aP1_4[0].unknown38);
    }
    else
    {
      v39 = v38;
    }
    *(_DWORD *)&aP3[8] = 128;
    *(_DWORD *)&this->__pad_C3C[888] = v39;
    v40 = *(_DWORD *)&this->__pad_C3C[884];
    if ( INIClass::GetString(
           v120,
           (INIClass *)&stru_830620[39020],
           (unsigned __int8 *)&stru_830620[43896],
           (INIClass *)&stru_87C374[56304],
           (INIClass *)&aP1_4[0].unknown38,
           *(int *)&aP3[8]) )
    {
      v41 = WarheadTypeClass::FindOrCreate((ObjectClass *)&aP1_4[0].unknown38);
    }
    else
    {
      v41 = v40;
    }
    *(_DWORD *)&aP3[8] = 128;
    *(_DWORD *)&this->__pad_C3C[892] = v41;
    v42 = *(_DWORD *)&this->__pad_C3C[888];
    if ( INIClass::GetString(
           v120,
           (INIClass *)&stru_830620[39020],
           (unsigned __int8 *)&stru_830620[43876],
           (INIClass *)&stru_87C374[56304],
           (INIClass *)&aP1_4[0].unknown38,
           *(int *)&aP3[8]) )
    {
      v43 = WarheadTypeClass::FindOrCreate((ObjectClass *)&aP1_4[0].unknown38);
    }
    else
    {
      v43 = v42;
    }
    *(_DWORD *)&this->__pad_C3C[896] = v43;
    v44 = *(CCINIClass **)&this->__pad_C3C[900];
    if ( INIClass::GetString(
           v120,
           (INIClass *)&stru_830620[39020],
           (unsigned __int8 *)&stru_830620[43860],
           (INIClass *)&stru_87C374[56304],
           (INIClass *)&aP1_4[0].unknown38,
           128) )
    {
      v44 = (CCINIClass *)WarheadTypeClass::FindOrCreate((ObjectClass *)&aP1_4[0].unknown38);
    }
    *(_DWORD *)&aP3[8] = 128;
    *(_DWORD *)&this->__pad_C3C[900] = v44;
    if ( INIClass::GetString(
           v120,
           (INIClass *)&stru_830620[39020],
           (unsigned __int8 *)&stru_830620[43840],
           (INIClass *)&stru_87C374[56304],
           (INIClass *)&aP1_4[0].unknown38,
           *(int *)&aP3[8]) )
    {
      v45 = (CCINIClass *)WarheadTypeClass::FindOrCreate((ObjectClass *)&aP1_4[0].unknown38);
    }
    else
    {
      v45 = v44;
    }
    *(_DWORD *)&aP3[8] = 128;
    *(_DWORD *)&this->__pad_C3C[904] = v45;
    v46 = *(_DWORD *)&this->__pad_C3C[908];
    if ( INIClass::GetString(
           v120,
           (INIClass *)&stru_830620[39020],
           (unsigned __int8 *)&stru_830620[43828],
           (INIClass *)&stru_87C374[56304],
           (INIClass *)&aP1_4[0].unknown38,
           *(int *)&aP3[8]) )
    {
      v47 = WarheadTypeClass::FindOrCreate((ObjectClass *)&aP1_4[0].unknown38);
    }
    else
    {
      v47 = v46;
    }
    *(_DWORD *)&this->__pad_C3C[908] = v47;
    this->__pad_C3C[920] = INIClass::ReadBool_Overwrite(
                             (int)v120,
                             (unsigned __int8 *)&stru_830620[39020],
                             (CCINIClass *)&stru_830620[43808],
                             this->__pad_C3C[920]);
    Bool_Overwrite = INIClass::ReadBool_Overwrite(
                       (int)v120,
                       (unsigned __int8 *)&stru_830620[39020],
                       (CCINIClass *)&stru_830620[43784],
                       this->__pad_C3C[921]);
    *(_DWORD *)&aP3[8] = 128;
    this->__pad_C3C[921] = Bool_Overwrite;
    v49 = *(WeaponTypeClass **)&this->__pad_C3C[928];
    if ( INIClass::GetString(
           v120,
           (INIClass *)&stru_830620[39020],
           (unsigned __int8 *)&stru_830620[43772],
           (INIClass *)&stru_87C374[56304],
           (INIClass *)&aP1_4[0].unknown38,
           *(int *)&aP3[8]) )
    {
      v50 = InfantryTypeClass::Find((ObjectClass *)&aP1_4[0].unknown38);
    }
    else
    {
      v50 = v49;
    }
    *(_DWORD *)&this->__pad_C3C[928] = v50;
    *(_DWORD *)&this->__pad_C3C[912] = INIClass::ReadInt_Overwrite(
                                         (int)v120,
                                         (unsigned __int8 *)&stru_830620[39020],
                                         (CCINIClass *)&stru_830620[43760],
                                         *(INIClass **)&this->__pad_C3C[912]);
    *(_DWORD *)&this->__pad_C3C[916] = INIClass::ReadInt_Overwrite(
                                         (int)v120,
                                         (unsigned __int8 *)&stru_830620[39020],
                                         (CCINIClass *)&stru_830620[43744],
                                         *(INIClass **)&this->__pad_C3C[916]);
    *(_DWORD *)&this->__pad_C3C[932] = SearchMIXFile(&stru_830620[43728], 0);
    *(_DWORD *)&this->__pad_C3C[936] = SearchMIXFile(&stru_830620[43712], 0);
    *(_DWORD *)&this->__pad_C3C[924] = INIClass::ReadInt_Overwrite(
                                         (int)v120,
                                         (unsigned __int8 *)&stru_830620[39020],
                                         (CCINIClass *)&stru_830620[43692],
                                         *(INIClass **)&this->__pad_C3C[924]);
    *(_DWORD *)&this->__pad_C3C[940] = INIClass::ReadInt_Overwrite(
                                         (int)v120,
                                         (unsigned __int8 *)&stru_830620[39020],
                                         (CCINIClass *)&stru_830620[43672],
                                         *(INIClass **)&this->__pad_C3C[940]);
    *(_DWORD *)&this->__pad_C3C[944] = INIClass::ReadInt_Overwrite(
                                         (int)v120,
                                         (unsigned __int8 *)&stru_830620[39020],
                                         (CCINIClass *)&stru_830620[43652],
                                         *(INIClass **)&this->__pad_C3C[944]);
    *(double *)&aP3[4] = *(float *)&this->__pad_C3C[772];
    *(float *)&this->__pad_C3C[772] = INIClass::ReadDouble_Overwrite(
                                        (int)v120,
                                        (INIClass *)&stru_830620[39020],
                                        (unsigned __int8 *)&stru_830620[43628],
                                        *(INIClass **)&aP3[4]);
    *(double *)&aP3[4] = *(float *)&this->__pad_C3C[776];
    *(float *)&this->__pad_C3C[776] = INIClass::ReadDouble_Overwrite(
                                        (int)v120,
                                        (INIClass *)&stru_830620[39020],
                                        (unsigned __int8 *)&stru_830620[43608],
                                        *(INIClass **)&aP3[4]);
    *(_DWORD *)&this->__pad_C3C[780] = INIClass::ReadInt_Overwrite(
                                         (int)v120,
                                         (unsigned __int8 *)&stru_830620[39020],
                                         (CCINIClass *)&stru_830620[43588],
                                         *(INIClass **)&this->__pad_C3C[780]);
    *(double *)&aP3[4] = *(float *)&this->__pad_C3C[784];
    *(float *)&this->__pad_C3C[784] = INIClass::ReadDouble_Overwrite(
                                        (int)v120,
                                        (INIClass *)&stru_830620[39020],
                                        (unsigned __int8 *)&stru_830620[43564],
                                        *(INIClass **)&aP3[4]);
    *(double *)&aP3[4] = *(float *)&this->__pad_C3C[788];
    *(float *)&this->__pad_C3C[788] = INIClass::ReadDouble_Overwrite(
                                        (int)v120,
                                        (INIClass *)&stru_830620[39020],
                                        (unsigned __int8 *)&stru_830620[43544],
                                        *(INIClass **)&aP3[4]);
    *(_DWORD *)&this->__pad_C3C[792] = INIClass::ReadInt_Overwrite(
                                         (int)v120,
                                         (unsigned __int8 *)&stru_830620[39020],
                                         (CCINIClass *)&stru_830620[43520],
                                         *(INIClass **)&this->__pad_C3C[792]);
    *(double *)&aP3[4] = *(float *)&this->__pad_C3C[796];
    *(float *)&this->__pad_C3C[796] = INIClass::ReadDouble_Overwrite(
                                        (int)v120,
                                        (INIClass *)&stru_830620[39020],
                                        (unsigned __int8 *)&stru_830620[43492],
                                        *(INIClass **)&aP3[4]);
    *(_DWORD *)&this->__pad_C3C[800] = INIClass::ReadInt_Overwrite(
                                         (int)v120,
                                         (unsigned __int8 *)&stru_830620[39020],
                                         (CCINIClass *)&stru_830620[43468],
                                         *(INIClass **)&this->__pad_C3C[800]);
    *(_DWORD *)&this->__pad_C3C[804] = INIClass::ReadInt_Overwrite(
                                         (int)v120,
                                         (unsigned __int8 *)&stru_830620[39020],
                                         (CCINIClass *)&stru_830620[43444],
                                         *(INIClass **)&this->__pad_C3C[804]);
    IntList = (CCINIClass *)&_FFFFFFEC;
    DynamicVectorClass::Copy(&_FFFFFFEC, (DynamicVector *)&this->__pad_C3C[684]);
    *(_DWORD *)IntList->__pad_0 = &vt_TypeList_int;
    IntList = (CCINIClass *)INIClass::ReadIntList(
                              v120,
                              (int)&aP1_4[0].sectionCount,
                              (INIClass *)&stru_830620[39020],
                              (unsigned __int8 *)&stru_830620[43428],
                              _FFFFFFEC,
                              v113,
                              (int)_FFFFFFF4,
                              v114,
                              *(int *)aP3,
                              *(int *)&aP3[4],
                              *(int *)&aP3[8]);
    TypeList::Copy(&this->__pad_C3C[684], IntList);
    v56 = (VectorClass *)IntList;
    *(_DWORD *)&this->__pad_C3C[700] = IntList->sectionHead[0];
    *(_DWORD *)&this->__pad_C3C[704] = v56[1].Items;
    v52 = v56[1].Capacity;
    v58 = *(CCINIClass **)aP1_4[0].__pad_20;
    *(_DWORD *)&this->__pad_C3C[708] = v52;
    aP1_4[0].sectionCount = (int)&vt_VectorClass_int;
    if ( v58 && aP1_4[0].__pad_20[9] )
      __3_YAXPAX_Z(v58);
    IntList = (CCINIClass *)&_FFFFFFEC;
    DynamicVectorClass::Copy(&_FFFFFFEC, (DynamicVector *)&this->__pad_C3C[712]);
    *(_DWORD *)IntList->__pad_0 = &vt_TypeList_int;
    IntList = (CCINIClass *)INIClass::ReadIntList(
                              v120,
                              (int)&aP1_4[0].sectionCount,
                              (INIClass *)&stru_830620[39020],
                              (unsigned __int8 *)&stru_830620[43412],
                              _FFFFFFEC,
                              v113,
                              (int)_FFFFFFF4,
                              v114,
                              *(int *)aP3,
                              *(int *)&aP3[4],
                              *(int *)&aP3[8]);
    TypeList::Copy(&this->__pad_C3C[712], IntList);
    v59 = (VectorClass *)IntList;
    *(_DWORD *)&this->__pad_C3C[728] = IntList->sectionHead[0];
    *(_DWORD *)&this->__pad_C3C[732] = v59[1].Items;
    *(_DWORD *)&this->__pad_C3C[736] = v59[1].Capacity;
    aP1_4[0].sectionCount = (int)&vt_VectorClass_int;
    if ( *(_DWORD *)aP1_4[0].__pad_20 && aP1_4[0].__pad_20[9] )
      __3_YAXPAX_Z(*(void **)aP1_4[0].__pad_20);
    IntList = (CCINIClass *)&_FFFFFFEC;
    DynamicVectorClass::Copy(&_FFFFFFEC, (DynamicVector *)&this->__pad_C3C[740]);
    *(_DWORD *)IntList->__pad_0 = &vt_TypeList_int;
    IntList = (CCINIClass *)INIClass::ReadIntList(
                              v120,
                              (int)&aP1_4[0].sectionCount,
                              (INIClass *)&stru_830620[39020],
                              (unsigned __int8 *)&stru_830620[43396],
                              _FFFFFFEC,
                              v113,
                              (int)_FFFFFFF4,
                              v114,
                              *(int *)aP3,
                              *(int *)&aP3[4],
                              *(int *)&aP3[8]);
    TypeList::Copy(&this->__pad_C3C[740], IntList);
    v60 = (VectorClass *)IntList;
    *(_DWORD *)&this->__pad_C3C[756] = IntList->sectionHead[0];
    *(_DWORD *)&this->__pad_C3C[760] = v60[1].Items;
    *(_DWORD *)&this->__pad_C3C[764] = v60[1].Capacity;
    aP1_4[0].sectionCount = (int)&vt_VectorClass_int;
    if ( *(_DWORD *)aP1_4[0].__pad_20 && aP1_4[0].__pad_20[9] )
      __3_YAXPAX_Z(*(void **)aP1_4[0].__pad_20);
    *(_DWORD *)&this->__pad_240[208] = INIClass::ReadInt_Overwrite(
                                         (int)v120,
                                         (unsigned __int8 *)&stru_830620[39020],
                                         (CCINIClass *)&stru_830620[43368],
                                         *(INIClass **)&this->__pad_240[208]);
    ebx112 = *(AnimTypeClass **)&this->__pad_240[220];
    if ( INIClass::GetString(
           v120,
           (INIClass *)&stru_830620[39020],
           (unsigned __int8 *)&stru_830620[43348],
           (INIClass *)&stru_87C374[56304],
           (INIClass *)&aP1_4[0].unknown38,
           128) )
    {
      v57 = AnimTypeClass::FindOrCreate((AbstractClass *)&aP1_4[0].unknown38);
    }
    else
    {
      v57 = ebx112;
    }
    *(_DWORD *)&this->__pad_240[220] = v57;
    *(_DWORD *)&this->__pad_240[212] = INIClass::ReadInt_Overwrite(
                                         (int)v120,
                                         (unsigned __int8 *)&stru_830620[39020],
                                         (CCINIClass *)&stru_830620[43324],
                                         *(INIClass **)&this->__pad_240[212]);
    *(_DWORD *)&this->__pad_240[216] = INIClass::ReadInt_Overwrite(
                                         (int)v120,
                                         (unsigned __int8 *)&stru_830620[39020],
                                         (CCINIClass *)&stru_830620[43304],
                                         *(INIClass **)&this->__pad_240[216]);
    *(double *)&aP3[4] = *(float *)&this->__pad_C3C[808];
    *(float *)&this->__pad_C3C[808] = INIClass::ReadDouble_Overwrite(
                                        (int)v120,
                                        (INIClass *)&stru_830620[39020],
                                        (unsigned __int8 *)&stru_830620[43280],
                                        *(INIClass **)&aP3[4]);
    this->__pad_C3C[812] = INIClass::ReadBool_Overwrite(
                             (int)v120,
                             (unsigned __int8 *)&stru_830620[39020],
                             (CCINIClass *)&stru_830620[43256],
                             this->__pad_C3C[812]);
    ebx115 = *(AnimTypeClass **)&this->__pad_240[224];
    if ( INIClass::GetString(
           v120,
           (INIClass *)&stru_830620[39020],
           (unsigned __int8 *)&stru_830620[43232],
           (INIClass *)&stru_87C374[56304],
           (INIClass *)&aP1_4[0].unknown38,
           128) )
    {
      eax116 = AnimTypeClass::FindOrCreate((AbstractClass *)&aP1_4[0].unknown38);
    }
    else
    {
      eax116 = ebx115;
    }
    ebx118 = *(AnimTypeClass **)&this->__pad_240[228];
    *(_DWORD *)&aP3[8] = 128;
    *(_DWORD *)&this->__pad_240[224] = eax116;
    if ( INIClass::GetString(
           v120,
           (INIClass *)&stru_830620[39020],
           (unsigned __int8 *)&stru_830620[43200],
           (INIClass *)&stru_87C374[56304],
           (INIClass *)&aP1_4[0].unknown38,
           *(int *)&aP3[8]) )
    {
      v61 = AnimTypeClass::FindOrCreate((AbstractClass *)&aP1_4[0].unknown38);
    }
    else
    {
      v61 = ebx118;
    }
    v62 = *(_DWORD *)&this->__pad_C3C[948];
    *(_DWORD *)&aP3[8] = 128;
    *(_DWORD *)&this->__pad_240[228] = v61;
    if ( INIClass::GetString(
           v120,
           (INIClass *)&stru_830620[39020],
           (unsigned __int8 *)&stru_830620[43180],
           (INIClass *)&stru_87C374[56304],
           (INIClass *)&aP1_4[0].unknown38,
           *(int *)&aP3[8]) )
    {
      v63 = WarheadTypeClass::FindOrCreate((ObjectClass *)&aP1_4[0].unknown38);
    }
    else
    {
      v63 = v62;
    }
    *(_DWORD *)&this->__pad_C3C[948] = v63;
    v64 = *(ParticleSystemTypeClass **)&this->__pad_C3C[988];
    if ( INIClass::GetString(
           v120,
           (INIClass *)&stru_830620[39020],
           (unsigned __int8 *)&stru_830620[43152],
           (INIClass *)&stru_87C374[56304],
           (INIClass *)&aP1_4[0].unknown38,
           128) )
    {
      v65 = BuildingTypeClass::LoadOrGet((ObjectClass *)&aP1_4[0].unknown38);
    }
    else
    {
      v65 = v64;
    }
    v66 = *(ParticleSystemTypeClass **)&this->__pad_C3C[992];
    *(_DWORD *)&aP3[8] = 128;
    *(_DWORD *)&this->__pad_C3C[988] = v65;
    if ( INIClass::GetString(
           v120,
           (INIClass *)&stru_830620[39020],
           (unsigned __int8 *)&stru_830620[43124],
           (INIClass *)&stru_87C374[56304],
           (INIClass *)&aP1_4[0].unknown38,
           *(int *)&aP3[8]) )
    {
      v67 = BuildingTypeClass::LoadOrGet((ObjectClass *)&aP1_4[0].unknown38);
    }
    else
    {
      v67 = v66;
    }
    v68 = *(ParticleSystemTypeClass **)&this->__pad_C3C[996];
    *(_DWORD *)&aP3[8] = 128;
    *(_DWORD *)&this->__pad_C3C[992] = v67;
    if ( INIClass::GetString(
           v120,
           (INIClass *)&stru_830620[39020],
           (unsigned __int8 *)&stru_830620[43104],
           (INIClass *)&stru_87C374[56304],
           (INIClass *)&aP1_4[0].unknown38,
           *(int *)&aP3[8]) )
    {
      v69 = BuildingTypeClass::LoadOrGet((ObjectClass *)&aP1_4[0].unknown38);
    }
    else
    {
      v69 = v68;
    }
    *(_DWORD *)&this->__pad_C3C[996] = v69;
    v70 = *(ParticleSystemTypeClass **)&this->__pad_C3C[1000];
    if ( INIClass::GetString(
           v120,
           (INIClass *)&stru_830620[39020],
           (unsigned __int8 *)&stru_830620[43076],
           (INIClass *)&stru_87C374[56304],
           (INIClass *)&aP1_4[0].unknown38,
           128) )
    {
      v71 = BuildingTypeClass::LoadOrGet((ObjectClass *)&aP1_4[0].unknown38);
    }
    else
    {
      v71 = v70;
    }
    v72 = *(ParticleSystemTypeClass **)&this->__pad_C3C[1004];
    *(_DWORD *)&aP3[8] = 128;
    *(_DWORD *)&this->__pad_C3C[1000] = v71;
    if ( INIClass::GetString(
           v120,
           (INIClass *)&stru_830620[39020],
           (unsigned __int8 *)&stru_830620[43048],
           (INIClass *)&stru_87C374[56304],
           (INIClass *)&aP1_4[0].unknown38,
           *(int *)&aP3[8]) )
    {
      v73 = BuildingTypeClass::LoadOrGet((ObjectClass *)&aP1_4[0].unknown38);
    }
    else
    {
      v73 = v72;
    }
    v74 = *(ParticleSystemTypeClass **)&this->__pad_C3C[1008];
    *(_DWORD *)&aP3[8] = 128;
    *(_DWORD *)&this->__pad_C3C[1004] = v73;
    if ( INIClass::GetString(
           v120,
           (INIClass *)&stru_830620[39020],
           (unsigned __int8 *)&stru_830620[43020],
           (INIClass *)&stru_87C374[56304],
           (INIClass *)&aP1_4[0].unknown38,
           *(int *)&aP3[8]) )
    {
      v75 = BuildingTypeClass::LoadOrGet((ObjectClass *)&aP1_4[0].unknown38);
    }
    else
    {
      v75 = v74;
    }
    *(_DWORD *)&this->__pad_C3C[1008] = v75;
    v76 = *(ParticleSystemTypeClass **)&this->__pad_C3C[1012];
    if ( INIClass::GetString(
           v120,
           (INIClass *)&stru_830620[39020],
           (unsigned __int8 *)&stru_830620[42996],
           (INIClass *)&stru_87C374[56304],
           (INIClass *)&aP1_4[0].unknown38,
           128) )
    {
      v77 = BuildingTypeClass::LoadOrGet((ObjectClass *)&aP1_4[0].unknown38);
    }
    else
    {
      v77 = v76;
    }
    v78 = *(ParticleSystemTypeClass **)&this->__pad_C3C[1016];
    *(_DWORD *)&aP3[8] = 128;
    *(_DWORD *)&this->__pad_C3C[1012] = v77;
    if ( INIClass::GetString(
           v120,
           (INIClass *)&stru_830620[39020],
           (unsigned __int8 *)&stru_830620[42968],
           (INIClass *)&stru_87C374[56304],
           (INIClass *)&aP1_4[0].unknown38,
           *(int *)&aP3[8]) )
    {
      v79 = BuildingTypeClass::LoadOrGet((ObjectClass *)&aP1_4[0].unknown38);
    }
    else
    {
      v79 = v78;
    }
    v80 = *(ParticleSystemTypeClass **)&this->__pad_C3C[1020];
    *(_DWORD *)&aP3[8] = 128;
    *(_DWORD *)&this->__pad_C3C[1016] = v79;
    if ( INIClass::GetString(
           v120,
           (INIClass *)&stru_830620[39020],
           (unsigned __int8 *)&stru_830620[42940],
           (INIClass *)&stru_87C374[56304],
           (INIClass *)&aP1_4[0].unknown38,
           *(int *)&aP3[8]) )
    {
      v81 = BuildingTypeClass::LoadOrGet((ObjectClass *)&aP1_4[0].unknown38);
    }
    else
    {
      v81 = v80;
    }
    *(_DWORD *)&this->__pad_C3C[1020] = v81;
    v82 = INIClass::ReadBool_Overwrite(
            (int)v120,
            (unsigned __int8 *)&stru_830620[39020],
            (CCINIClass *)&stru_830620[42924],
            this->BerzerkAllowed);
    v83 = *(_DWORD *)&this->__pad_C3C[1120];
    this->BerzerkAllowed = v82;
    v84 = *(INIClass **)&this->__pad_C3C[1116];
    *(_DWORD *)&aP3[8] = v83;
    Double_Overwrite = INIClass::ReadDouble_Overwrite(
                         (int)v120,
                         (INIClass *)&stru_830620[39020],
                         (unsigned __int8 *)&stru_830620[42912],
                         v84);
    v90 = *(CCINIClass **)&this->__pad_C3C[2292];
    *(double *)&this->__pad_C3C[1116] = Double_Overwrite;
    v87 = INIClass::ReadInt_Overwrite(
            (int)v120,
            (unsigned __int8 *)&stru_830620[39020],
            (CCINIClass *)&stru_830620[42900],
            (INIClass *)v90);
    v92 = (DynamicVector *)this->MovieTime[0];
    *(_DWORD *)&this->__pad_C3C[2292] = v87;
    *(_DWORD *)&aP3[4] = &stru_830620[42880];
    *(_DWORD *)aP3 = &stru_830620[39020];
    this->MovieTime[0] = (int)INIClass::ReadCoord(*(double *)aP3, (int)v92, aP3_8, aP3_12);
    v89 = INIClass::ReadInt_Overwrite(
            (int)v120,
            (unsigned __int8 *)&stru_830620[39020],
            (CCINIClass *)&stru_830620[42864],
            (INIClass *)this->TiberiumLongScan);
    LightningScatterDelay = this->LightningScatterDelay;
    this->TiberiumLongScan = v89;
    LightningHitDelay = (INIClass *)this->LightningHitDelay;
    *(_DWORD *)&aP3[8] = LightningScatterDelay;
    st7_151a = INIClass::ReadDouble_Overwrite(
                 (int)v120,
                 (INIClass *)&stru_830620[39020],
                 (unsigned __int8 *)&stru_830620[42856],
                 LightningHitDelay);
    v95 = (DynamicVector *)this->PathDelay[0];
    *(double *)&this->LightningHitDelay = st7_151a;
    *(_DWORD *)&aP3[4] = &stru_830620[42848];
    *(_DWORD *)aP3 = &stru_830620[39020];
    Coord = (DynamicVector *)INIClass::ReadCoord(*(double *)aP3, (int)v95, aP3_8, aP3_12);
    ecx151 = *(_DWORD *)&this->__pad_C3C[2032];
    v96 = *(INIClass **)&this->__pad_C3C[2028];
    this->PathDelay[0] = (int)Coord;
    *(_DWORD *)&aP3[8] = ecx151;
    v97 = INIClass::ReadDouble_Overwrite(
            (int)v120,
            (INIClass *)&stru_830620[39020],
            (unsigned __int8 *)&stru_830620[42836],
            v96);
    v99 = *(DynamicVector **)&this->__pad_C3C[2036];
    *(double *)&this->__pad_C3C[2028] = v97;
    *(_DWORD *)&aP3[4] = &stru_830620[42824];
    *(_DWORD *)aP3 = &stru_830620[39020];
    *(_DWORD *)&this->__pad_C3C[2036] = INIClass::ReadCoord(*(double *)aP3, (int)v99, aP3_8, aP3_12);
    *(_DWORD *)&aP3[8] = this->BlockagePathDelay;
    *(_DWORD *)&aP3[4] = &stru_830620[42808];
    *(_DWORD *)aP3 = &stru_830620[39020];
    v100 = (DynamicVector *)INIClass::ReadCoord(*(double *)aP3, *(int *)&aP3[8], aP3_8, aP3_12);
    v101 = (CCINIClass *)this->IRepairRate[0];
    this->BlockagePathDelay = (int)v100;
    eax151d = INIClass::ReadInt_Overwrite(
                (int)v120,
                (unsigned __int8 *)&stru_830620[39020],
                (CCINIClass *)&stru_830620[42796],
                (INIClass *)v101);
    v103 = (CCINIClass *)this->URepairRate[1];
    this->IRepairRate[0] = eax151d;
    this->URepairRate[1] = INIClass::ReadInt_Overwrite(
                             (int)v120,
                             (unsigned __int8 *)&stru_830620[39020],
                             (CCINIClass *)&stru_830620[42784],
                             (INIClass *)v103);
    al151a = INIClass::ReadBool_Overwrite(
               (int)v120,
               (unsigned __int8 *)&stru_830620[39020],
               (CCINIClass *)&stru_830620[42764],
               BYTE1(this->ElevationIncrementBonus[0]));
    v104 = HIBYTE(this->ElevationIncrementBonus[1]);
    BYTE1(this->ElevationIncrementBonus[0]) = al151a;
    v105 = INIClass::ReadBool_Overwrite(
             (int)v120,
             (unsigned __int8 *)&stru_830620[39020],
             (CCINIClass *)&stru_830620[42748],
             v104);
    v106 = this->ElevationBonusCap[0];
    HIBYTE(this->ElevationIncrementBonus[1]) = v105;
    LOBYTE(this->ElevationBonusCap[0]) = INIClass::ReadBool_Overwrite(
                                           (int)v120,
                                           (unsigned __int8 *)&stru_830620[39020],
                                           (CCINIClass *)&stru_830620[42728],
                                           v106);
    v107 = INIClass::ReadBool_Overwrite(
             (int)v120,
             (unsigned __int8 *)&stru_830620[39020],
             (CCINIClass *)&stru_830620[42712],
             BYTE1(this->ElevationBonusCap[0]));
    v108 = BYTE1(this->ElevationIncrementBonus[1]);
    BYTE1(this->ElevationBonusCap[0]) = v107;
    v109 = INIClass::ReadBool_Overwrite(
             (int)v120,
             (unsigned __int8 *)&stru_830620[39020],
             (CCINIClass *)&stru_830620[42696],
             v108);
    v111 = (WarheadTypeClass *)this->URepairRate[0];
    BYTE1(this->ElevationIncrementBonus[1]) = v109;
    this->URepairRate[0] = (int)WarheadTypeClass::loadWarheadINI(
                                  v120,
                                  (CCINIClass *)&stru_830620[39020],
                                  (unsigned __int8 *)&stru_830620[42684],
                                  (CCINIClass *)v111);
    result = INIClass::ReadInt_Overwrite(
               (int)v120,
               (unsigned __int8 *)&stru_830620[39020],
               (CCINIClass *)&stru_830620[42668],
               (INIClass *)this->RadLightFactor[1]);
    this->RadLightFactor[1] = result;
    LOBYTE(result) = 1;
  }
  else
  {
    LOBYTE(result) = 0;
  }
  return result;
}
}
} // namespace gamemd

// 0x67A570
namespace gamemd {
unsigned int * Rules::CopyDataArray(VectorClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall Rules::CopyDataArray(_DWORD *this, VectorClass *aP1)
{
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // eax

  if ( this == (_DWORD *)aP1 ) /*0x67a57a*/
    goto LABEL_8; /*0x67a57a*/
  (*(void (__thiscall **)(_DWORD *))(*this + 12))(this); /*0x67a57e*/
  v3 = aP1->Capacity; /*0x67a581*/
  *(this + 2) = v3; /*0x67a586*/
  if ( !v3 ) /*0x67a589*/
  {
    *(this + 1) = 0; /*0x67a5d6*/
    *((_BYTE *)this + 13) = 0; /*0x67a5dd*/
LABEL_8:
    *(this + 4) = aP1[1].vtable0; /*0x67a5e1*/
    *(this + 5) = aP1[1].Items; /*0x67a5ea*/
    return this; /*0x67a5ed*/
  }
  v4 = __2_YAPAXI_Z(4 * v3); /*0x67a593*/
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
    *(_DWORD *)(*(this + 1) + 4 * v6) = *((_DWORD *)aP1->Items + v6); /*0x67a5b8*/
    ++v6; /*0x67a5be*/
  }
  while ( v6 < *(this + 2) ); /*0x67a5c1*/
  *(this + 4) = aP1[1].vtable0; /*0x67a5c6*/
  *(this + 5) = aP1[1].Items; /*0x67a5cc*/
  return this; /*0x67a5d1*/
}
}
} // namespace gamemd

// 0x5FB2E0
namespace gamemd {
char * Rules::GetProductionTimeMult(CellStruct * aP1)
{
{
    CellStruct *result;
    int v3;
    result = aP1;
    if ( aP1 )
  {
    v3 = *(void**)this;
    if ( (int)aP1 >= 5 )
    return (char *)(8 * (int)aP1 / (v3 + 1));
    else
    return *(char **)&DataGlobal_830620[5296][32 * (int)aP1 + 4636 + 4 * v3];
  }
    return (char *)result;
}
}
} // namespace gamemd
