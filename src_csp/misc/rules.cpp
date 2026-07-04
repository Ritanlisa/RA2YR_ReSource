#include "rules.hpp"

int  Rules::ReadMiscINI(RulesClass *this)
{
    int result; // eax
    int Int_Overwrite; // eax
    int DropPodPuff; // ebx
    int v5; // eax
    int MaximumQueuedObjects; // ebx
    int v7; // eax
    int GUICheckboxSound; // ebx
    int Index; // eax
    int BuildingAbandonedSound; // ebx
    int v11; // eax
    int BuildingRepairedSound; // ebx
    int v13; // eax
    int CheerSound; // ebx
    int v15; // eax
    int PlaceBeaconSound; // ebx
    int v17; // eax
    int DefaultChronoSound; // ebx
    int v19; // eax
    int StartPlanningModeSound; // ebx
    int v21; // eax
    int AddPlanningModeCommandSound; // ebx
    int v23; // eax
    int ExecutePlanSound; // ebx
    int v25; // eax
    int EndPlanningModeSound; // ebx
    int v27; // eax
    int CrateMoneySound; // ebx
    int v29; // eax
    int CrateRevealSound; // ebx
    int v31; // eax
    int ImpactWaterSound; // ebx
    int v33; // eax
    int SinkingSound; // ebx
    int v35; // eax
    int BombTickingSound; // ebx
    int v37; // eax
    int ChronoInSound; // ebx
    int v39; // eax
    int ChronoOutSound; // ebx
    int v41; // eax
    int SpySatActivationSound; // ebx
    int v43; // eax
    int SpySatDeactivationSound; // ebx
    int v45; // eax
    int UpgradeVeteranSound; // ebx
    int v47; // eax
    int UpgradeEliteSound; // ebx
    int v49; // eax
    int VoiceIFVRepair; // ebx
    int v51; // eax
    int SlavesFreeSound; // ebx
    int v53; // eax
    int SlaveMinerDeploySound; // ebx
    int v55; // eax
    int SlaveMinerUndeploySound; // ebx
    int v57; // eax
    int BunkerWallsUpSound; // ebx
    int v59; // eax
    int GeneticMutatorActivateSound; // ebx
    int v61; // eax
    int PsychicRevealActivateSound; // ebx
    int v63; // eax
    int BunkerWallsDownSound; // ebx
    int v65; // eax
    int RepairBridgeSound; // ebx
    int v67; // eax
    int PsychicDominatorActivateSound; // ebx
    int v69; // eax
    int BombAttachSound; // ebx
    int v71; // eax
    int YuriMindControlSound; // ebx
    int v73; // eax
    int ImpactLandSound; // ebx
    int v75; // eax
    int CrateSpeedSound; // ebx
    int v77; // eax
    int CrateUnitSound; // ebx
    int v79; // eax
    int CratePromoteSound; // ebx
    int v81; // eax
    int BuildingGarrisonedSound; // ebx
    int v83; // eax
    int AirstrikeAttackVoice; // ebx
    int v85; // eax
    int MindClearedSound; // ebx
    int v87; // eax
    int EnterGrinderSound; // ebx
    int v89; // eax
    int LeaveGrinderSound; // ebx
    int v91; // eax
    int EnterBioReactorSound; // ebx
    int v93; // eax
    int LeaveBioReactorSound; // ebx
    int v95; // eax
    int ActivateSound; // ebx
    int v97; // eax
    int DeactivateSound; // ebx
    int v99; // eax
    int SpyPlaneCamera; // ebx
    int v101; // eax
    int LetsDoTheTimeWarpOutAgain; // ebx
    int v103; // eax
    int LetsDoTheTimeWarpInAgain; // ebx
    int v105; // eax
    int DiskLaserChargeUp; // ebx
    int v107; // eax
    int SpyPlaneCameraFrames; // ebx
    int v109; // eax
    int Dig; // ebx
    int v111; // eax
    int IonBlast; // ebx
    int v113; // eax
    int IonBeam; // ebx
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
    int ScoreAnimSound; // ebx
    int v137; // eax
    int IFVTransformSound; // ebx
    int v139; // eax
    int PsychicSensorDetectSound; // ebx
    int v141; // eax
    int CrateFireSound; // ebx
    int v143; // eax
    int CrateArmourSound; // ebx
    int v145; // eax
    int MasterMindOverloadDeathSound; // ebx
    int v147; // eax
    int AirstrikeAbortSound; // ebx
    int v149; // eax
    int v150; // ebx
    int v151; // eax
    int v152; // ebx
    int v153; // eax
    int v154; // ebx
    int v155; // eax
    int v156; // ebx
    int v157; // eax
    int VeteranSight; // ecx
    int v159; // eax
    int WheeledDownhill; // ebx
    int v161; // eax
    int WheeledDownhill_high; // ebx
    int v163; // eax
    int SpotlightMovementRadius; // ebx
    int v165; // eax
    int SpotlightLocationRadius; // ebx
    int v167; // eax
    int SpotlightAngle_high; // ebx
    int v169; // eax
    int SpotlightSpeed; // ebx
    int v171; // eax
    int SpotlightSpeed_high; // ebx
    int v173; // eax
    int SpotlightAcceleration; // ebx
    int v175; // eax
    int SpotlightAcceleration_high; // ebx
    int v177; // eax
    int SpotlightAngle; // ebx
    int v179; // eax
    int SpotlightRadius; // ebx
    int v181; // eax
    uint32_t *INIClassIntList; // ebx
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
    int v195; // ebx
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
    uint32_t *v219; // ebx
    int NodGateTwo; // ebx
    int v221; // eax
    char *i; // eax
    char *j; // eax
    int OpenToppedRangeBonus; // ebx
    int v225; // eax
    int OpenToppedWarpDistance; // ebx
    int v227; // eax
    int v228; // eax
    int NukeWarhead; // ebx
    int v230; // eax
    int NukeProjectile; // ebx
    int v232; // eax
    int v233; // eax
    int v234; // eax
    double Double_Overwrite; // st7
    int v236; // eax
    int v237; // eax
    int v238; // eax
    int v239; // edx
    int v240; // edx
    int v241; // edx
    int v242; // edx
    int v243; // edx
    uint32_t *v244; // ebp
    int v245; // eax
    int v246; // eax
    int v247; // eax
    int v248; // eax
    double v249; // st7
    double v250; // st7
    double v251; // st7
    int Coord; // eax
    int v253; // eax
    int v254; // eax
    int v255; // eax
    int v256; // [esp-14h] [ebp-E8h] BYREF
    void *v257; // [esp-10h] [ebp-E4h]
    int v258; // [esp-Ch] [ebp-E0h]
    __int16 v259; // [esp-8h] [ebp-DCh]
    int v260; // [esp-4h] [ebp-D8h]
    int v261[5]; // [esp+0h] [ebp-D4h]
    int v262; // [esp+18h] [ebp-BCh] BYREF
    char String[128]; // [esp+1Ch] [ebp-B8h] BYREF
    void **v264; // [esp+9Ch] [ebp-38h] BYREF
    void *Block; // [esp+A0h] [ebp-34h]
    char v266; // [esp+A9h] [ebp-2Bh]
    void **v267; // [esp+B8h] [ebp-1Ch] BYREF
    void *v268; // [esp+BCh] [ebp-18h]
    char v269; // [esp+C5h] [ebp-Fh]
    float v270; // [esp+C8h] [ebp-Ch]
    int v271; // [esp+CCh] [ebp-8h]
    float v272; // [esp+D0h] [ebp-4h]
    unsigned __int8 ***v273; // [esp+D8h] [ebp+4h]
    result = INIClass::BinarySearchSection((int)v273, (unsigned __int8 *)aAudiovisual);
    if ( result )
    this->DetailMinFrameRateNormal = INIClass::ReadInt_Overwrite(
    (int)v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aDetailminframe,
    this->DetailMinFrameRateNormal);
    this->DetailMinFrameRateMovie = INIClass::ReadInt_Overwrite(
    (int)v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aDetailminframe_0,
    this->DetailMinFrameRateMovie);
    this->DetailBufferZoneWidth = INIClass::ReadInt_Overwrite(
    (int)v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aDetailbufferzo,
    this->DetailBufferZoneWidth);
    this->PoseDir = INIClass::ReadInt_Overwrite(
    (int)v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aPosedir,
    this->PoseDir);
    Int_Overwrite = INIClass::ReadInt_Overwrite(
    (int)v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aDeploydir,
    this->DeployDir >> 5);
    v261[1] = 128;
    this->DeployDir = 32 * Int_Overwrite;
    DropPodPuff = this->DropPodPuff;
    if ( INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aDroppodpuff,
    &g_INI_DefaultBuffer,
    String,
    v261[1]) )
    v5 = AnimTypeClass::FindOrCreate(String);
    else
    v5 = DropPodPuff;
    this->DropPodPuff = v5;
    this->WaypointAnimationSpeed = INIClass::ReadInt_Overwrite(
    (int)v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aWaypointanimat,
    this->WaypointAnimationSpeed);
    MaximumQueuedObjects = this->MaximumQueuedObjects;
    if ( INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aVeinattack,
    &g_INI_DefaultBuffer,
    String,
    128) )
    v7 = AnimTypeClass::FindOrCreate(String);
    else
    v7 = MaximumQueuedObjects;
    v261[1] = 128;
    this->MaximumQueuedObjects = v7;
    GUICheckboxSound = this->GUICheckboxSound;
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aDigsound,
    &g_INI_DefaultBuffer,
    String,
    v261[1])
    || (Index = VocClass::FindIndex(String), Index == -1) )
    Index = GUICheckboxSound;
    v261[1] = 128;
    this->GUICheckboxSound = Index;
    BuildingAbandonedSound = this->BuildingAbandonedSound;
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aGuimainbuttons,
    &g_INI_DefaultBuffer,
    String,
    v261[1])
    || (v11 = VocClass::FindIndex(String), v11 == -1) )
    v11 = BuildingAbandonedSound;
    this->BuildingAbandonedSound = v11;
    BuildingRepairedSound = this->BuildingRepairedSound;
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aGuibuildsound,
    &g_INI_DefaultBuffer,
    String,
    128)
    || (v13 = VocClass::FindIndex(String), v13 == -1) )
    v13 = BuildingRepairedSound;
    v261[1] = 128;
    this->BuildingRepairedSound = v13;
    CheerSound = this->CheerSound;
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aGuitabsound,
    &g_INI_DefaultBuffer,
    String,
    v261[1])
    || (v15 = VocClass::FindIndex(String), v15 == -1) )
    v15 = CheerSound;
    v261[1] = 128;
    this->CheerSound = v15;
    PlaceBeaconSound = this->PlaceBeaconSound;
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aGuiopensound,
    &g_INI_DefaultBuffer,
    String,
    v261[1])
    || (v17 = VocClass::FindIndex(String), v17 == -1) )
    v17 = PlaceBeaconSound;
    this->PlaceBeaconSound = v17;
    DefaultChronoSound = this->DefaultChronoSound;
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aGuiclosesound,
    &g_INI_DefaultBuffer,
    String,
    128)
    || (v19 = VocClass::FindIndex(String), v19 == -1) )
    v19 = DefaultChronoSound;
    v261[1] = 128;
    this->DefaultChronoSound = v19;
    StartPlanningModeSound = this->StartPlanningModeSound;
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aGuimoveoutsoun,
    &g_INI_DefaultBuffer,
    String,
    v261[1])
    || (v21 = VocClass::FindIndex(String), v21 == -1) )
    v21 = StartPlanningModeSound;
    v261[1] = 128;
    this->StartPlanningModeSound = v21;
    AddPlanningModeCommandSound = this->AddPlanningModeCommandSound;
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aGuimoveinsound,
    &g_INI_DefaultBuffer,
    String,
    v261[1])
    || (v23 = VocClass::FindIndex(String), v23 == -1) )
    v23 = AddPlanningModeCommandSound;
    this->AddPlanningModeCommandSound = v23;
    ExecutePlanSound = this->ExecutePlanSound;
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aGuicomboopenso,
    &g_INI_DefaultBuffer,
    String,
    128)
    || (v25 = VocClass::FindIndex(String), v25 == -1) )
    v25 = ExecutePlanSound;
    v261[1] = 128;
    this->ExecutePlanSound = v25;
    EndPlanningModeSound = this->EndPlanningModeSound;
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aGuicombocloses,
    &g_INI_DefaultBuffer,
    String,
    v261[1])
    || (v27 = VocClass::FindIndex(String), v27 == -1) )
    v27 = EndPlanningModeSound;
    v261[1] = 128;
    this->EndPlanningModeSound = v27;
    CrateMoneySound = this->CrateMoneySound;
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aGuicheckboxsou,
    &g_INI_DefaultBuffer,
    String,
    v261[1])
    || (v29 = VocClass::FindIndex(String), v29 == -1) )
    v29 = CrateMoneySound;
    this->CrateMoneySound = v29;
    CrateRevealSound = this->CrateRevealSound;
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aScoreanimsound,
    &g_INI_DefaultBuffer,
    String,
    128)
    || (v31 = VocClass::FindIndex(String), v31 == -1) )
    v31 = CrateRevealSound;
    v261[1] = 128;
    this->CrateRevealSound = v31;
    ImpactWaterSound = this->ImpactWaterSound;
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aCheersound,
    &g_INI_DefaultBuffer,
    String,
    v261[1])
    || (v33 = VocClass::FindIndex(String), v33 == -1) )
    v33 = ImpactWaterSound;
    v261[1] = 128;
    this->ImpactWaterSound = v33;
    SinkingSound = this->SinkingSound;
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aDefaultchronos,
    &g_INI_DefaultBuffer,
    String,
    v261[1])
    || (v35 = VocClass::FindIndex(String), v35 == -1) )
    v35 = SinkingSound;
    this->SinkingSound = v35;
    BombTickingSound = this->BombTickingSound;
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aStartplanningm,
    &g_INI_DefaultBuffer,
    String,
    128)
    || (v37 = VocClass::FindIndex(String), v37 == -1) )
    v37 = BombTickingSound;
    v261[1] = 128;
    this->BombTickingSound = v37;
    ChronoInSound = this->ChronoInSound;
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aEndplanningmod,
    &g_INI_DefaultBuffer,
    String,
    v261[1])
    || (v39 = VocClass::FindIndex(String), v39 == -1) )
    v39 = ChronoInSound;
    v261[1] = 128;
    this->ChronoInSound = v39;
    ChronoOutSound = this->ChronoOutSound;
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aCratemoneysoun,
    &g_INI_DefaultBuffer,
    String,
    v261[1])
    || (v41 = VocClass::FindIndex(String), v41 == -1) )
    v41 = ChronoOutSound;
    this->ChronoOutSound = v41;
    SpySatActivationSound = this->SpySatActivationSound;
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aCraterevealsou,
    &g_INI_DefaultBuffer,
    String,
    128)
    || (v43 = VocClass::FindIndex(String), v43 == -1) )
    v43 = SpySatActivationSound;
    v261[1] = 128;
    this->SpySatActivationSound = v43;
    SpySatDeactivationSound = this->SpySatDeactivationSound;
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aCratefiresound,
    &g_INI_DefaultBuffer,
    String,
    v261[1])
    || (v45 = VocClass::FindIndex(String), v45 == -1) )
    v45 = SpySatDeactivationSound;
    v261[1] = 128;
    this->SpySatDeactivationSound = v45;
    UpgradeVeteranSound = this->UpgradeVeteranSound;
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aCratearmoursou,
    &g_INI_DefaultBuffer,
    String,
    v261[1])
    || (v47 = VocClass::FindIndex(String), v47 == -1) )
    v47 = UpgradeVeteranSound;
    this->UpgradeVeteranSound = v47;
    UpgradeEliteSound = this->UpgradeEliteSound;
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aCratespeedsoun,
    &g_INI_DefaultBuffer,
    String,
    128)
    || (v49 = VocClass::FindIndex(String), v49 == -1) )
    v49 = UpgradeEliteSound;
    v261[1] = 128;
    this->UpgradeEliteSound = v49;
    VoiceIFVRepair = this->VoiceIFVRepair;
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aCrateunitsound,
    &g_INI_DefaultBuffer,
    String,
    v261[1])
    || (v51 = VocClass::FindIndex(String), v51 == -1) )
    v51 = VoiceIFVRepair;
    v261[1] = 128;
    this->VoiceIFVRepair = v51;
    SlavesFreeSound = this->SlavesFreeSound;
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aCratepromoteso,
    &g_INI_DefaultBuffer,
    String,
    v261[1])
    || (v53 = VocClass::FindIndex(String), v53 == -1) )
    v53 = SlavesFreeSound;
    this->SlavesFreeSound = v53;
    SlaveMinerDeploySound = this->SlaveMinerDeploySound;
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aImpactwatersou,
    &g_INI_DefaultBuffer,
    String,
    128)
    || (v55 = VocClass::FindIndex(String), v55 == -1) )
    v55 = SlaveMinerDeploySound;
    v261[1] = 128;
    this->SlaveMinerDeploySound = v55;
    SlaveMinerUndeploySound = this->SlaveMinerUndeploySound;
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aImpactlandsoun,
    &g_INI_DefaultBuffer,
    String,
    v261[1])
    || (v57 = VocClass::FindIndex(String), v57 == -1) )
    v57 = SlaveMinerUndeploySound;
    v261[1] = 128;
    this->SlaveMinerUndeploySound = v57;
    BunkerWallsUpSound = this->BunkerWallsUpSound;
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aSinkingsound,
    &g_INI_DefaultBuffer,
    String,
    v261[1])
    || (v59 = VocClass::FindIndex(String), v59 == -1) )
    v59 = BunkerWallsUpSound;
    this->BunkerWallsUpSound = v59;
    GeneticMutatorActivateSound = this->GeneticMutatorActivateSound;
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aChronoinsound,
    &g_INI_DefaultBuffer,
    String,
    128)
    || (v61 = VocClass::FindIndex(String), v61 == -1) )
    v61 = GeneticMutatorActivateSound;
    v261[1] = 128;
    this->GeneticMutatorActivateSound = v61;
    PsychicRevealActivateSound = this->PsychicRevealActivateSound;
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aChronooutsound,
    &g_INI_DefaultBuffer,
    String,
    v261[1])
    || (v63 = VocClass::FindIndex(String), v63 == -1) )
    v63 = PsychicRevealActivateSound;
    v261[1] = 128;
    this->PsychicRevealActivateSound = v63;
    BunkerWallsDownSound = this->BunkerWallsDownSound;
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aBombtickingsou,
    &g_INI_DefaultBuffer,
    String,
    v261[1])
    || (v65 = VocClass::FindIndex(String), v65 == -1) )
    v65 = BunkerWallsDownSound;
    this->BunkerWallsDownSound = v65;
    RepairBridgeSound = this->RepairBridgeSound;
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aBombattachsoun,
    &g_INI_DefaultBuffer,
    String,
    128)
    || (v67 = VocClass::FindIndex(String), v67 == -1) )
    v67 = RepairBridgeSound;
    v261[1] = 128;
    this->RepairBridgeSound = v67;
    PsychicDominatorActivateSound = this->PsychicDominatorActivateSound;
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aYurimindcontro,
    &g_INI_DefaultBuffer,
    String,
    v261[1])
    || (v69 = VocClass::FindIndex(String), v69 == -1) )
    v69 = PsychicDominatorActivateSound;
    v261[1] = 128;
    this->PsychicDominatorActivateSound = v69;
    BombAttachSound = this->BombAttachSound;
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aAddplanningmod,
    &g_INI_DefaultBuffer,
    String,
    v261[1])
    || (v71 = VocClass::FindIndex(String), v71 == -1) )
    v71 = BombAttachSound;
    this->BombAttachSound = v71;
    YuriMindControlSound = this->YuriMindControlSound;
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aExecuteplansou,
    &g_INI_DefaultBuffer,
    String,
    128)
    || (v73 = VocClass::FindIndex(String), v73 == -1) )
    v73 = YuriMindControlSound;
    v261[1] = 128;
    this->YuriMindControlSound = v73;
    ImpactLandSound = this->ImpactLandSound;
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aPlacebeaconsou,
    &g_INI_DefaultBuffer,
    String,
    v261[1])
    || (v75 = VocClass::FindIndex(String), v75 == -1) )
    v75 = ImpactLandSound;
    v261[1] = 128;
    this->ImpactLandSound = v75;
    CrateSpeedSound = this->CrateSpeedSound;
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aBuildinggarris,
    &g_INI_DefaultBuffer,
    String,
    v261[1])
    || (v77 = VocClass::FindIndex(String), v77 == -1) )
    v77 = CrateSpeedSound;
    this->CrateSpeedSound = v77;
    CrateUnitSound = this->CrateUnitSound;
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aBuildingabando,
    &g_INI_DefaultBuffer,
    String,
    128)
    || (v79 = VocClass::FindIndex(String), v79 == -1) )
    v79 = CrateUnitSound;
    v261[1] = 128;
    this->CrateUnitSound = v79;
    CratePromoteSound = this->CratePromoteSound;
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aBuildingrepair,
    &g_INI_DefaultBuffer,
    String,
    v261[1])
    || (v81 = VocClass::FindIndex(String), v81 == -1) )
    v81 = CratePromoteSound;
    v261[1] = 128;
    this->CratePromoteSound = v81;
    BuildingGarrisonedSound = this->BuildingGarrisonedSound;
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aBaseunderattac,
    &g_INI_DefaultBuffer,
    String,
    v261[1])
    || (v83 = VocClass::FindIndex(String), v83 == -1) )
    v83 = BuildingGarrisonedSound;
    this->BuildingGarrisonedSound = v83;
    AirstrikeAttackVoice = this->AirstrikeAttackVoice;
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aUpgradeveteran,
    &g_INI_DefaultBuffer,
    String,
    128)
    || (v85 = VocClass::FindIndex(String), v85 == -1) )
    v85 = AirstrikeAttackVoice;
    v261[1] = 128;
    this->AirstrikeAttackVoice = v85;
    MindClearedSound = this->MindClearedSound;
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aUpgradeeliteso,
    &g_INI_DefaultBuffer,
    String,
    v261[1])
    || (v87 = VocClass::FindIndex(String), v87 == -1) )
    v87 = MindClearedSound;
    v261[1] = 128;
    this->MindClearedSound = v87;
    EnterGrinderSound = this->EnterGrinderSound;
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aVoiceifvrepair,
    &g_INI_DefaultBuffer,
    String,
    v261[1])
    || (v89 = VocClass::FindIndex(String), v89 == -1) )
    v89 = EnterGrinderSound;
    this->EnterGrinderSound = v89;
    LeaveGrinderSound = this->LeaveGrinderSound;
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aSlavesfreesoun,
    &g_INI_DefaultBuffer,
    String,
    128)
    || (v91 = VocClass::FindIndex(String), v91 == -1) )
    v91 = LeaveGrinderSound;
    v261[1] = 128;
    this->LeaveGrinderSound = v91;
    EnterBioReactorSound = this->EnterBioReactorSound;
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aSlaveminerdepl,
    &g_INI_DefaultBuffer,
    String,
    v261[1])
    || (v93 = VocClass::FindIndex(String), v93 == -1) )
    v93 = EnterBioReactorSound;
    v261[1] = 128;
    this->EnterBioReactorSound = v93;
    LeaveBioReactorSound = this->LeaveBioReactorSound;
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aSlaveminerunde,
    &g_INI_DefaultBuffer,
    String,
    v261[1])
    || (v95 = VocClass::FindIndex(String), v95 == -1) )
    v95 = LeaveBioReactorSound;
    this->LeaveBioReactorSound = v95;
    ActivateSound = this->ActivateSound;
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aBunkerwallsups,
    &g_INI_DefaultBuffer,
    String,
    128)
    || (v97 = VocClass::FindIndex(String), v97 == -1) )
    v97 = ActivateSound;
    v261[1] = 128;
    this->ActivateSound = v97;
    DeactivateSound = this->DeactivateSound;
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aBunkerwallsdow,
    &g_INI_DefaultBuffer,
    String,
    v261[1])
    || (v99 = VocClass::FindIndex(String), v99 == -1) )
    v99 = DeactivateSound;
    v261[1] = 128;
    this->DeactivateSound = v99;
    SpyPlaneCamera = this->SpyPlaneCamera;
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aRepairbridgeso,
    &g_INI_DefaultBuffer,
    String,
    v261[1])
    || (v101 = VocClass::FindIndex(String), v101 == -1) )
    v101 = SpyPlaneCamera;
    this->SpyPlaneCamera = v101;
    LetsDoTheTimeWarpOutAgain = this->LetsDoTheTimeWarpOutAgain;
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aPsychicdominat,
    &g_INI_DefaultBuffer,
    String,
    128)
    || (v103 = VocClass::FindIndex(String), v103 == -1) )
    v103 = LetsDoTheTimeWarpOutAgain;
    v261[1] = 128;
    this->LetsDoTheTimeWarpOutAgain = v103;
    LetsDoTheTimeWarpInAgain = this->LetsDoTheTimeWarpInAgain;
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aGeneticmutator,
    &g_INI_DefaultBuffer,
    String,
    v261[1])
    || (v105 = VocClass::FindIndex(String), v105 == -1) )
    v105 = LetsDoTheTimeWarpInAgain;
    v261[1] = 128;
    this->LetsDoTheTimeWarpInAgain = v105;
    DiskLaserChargeUp = this->DiskLaserChargeUp;
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aPsychicreveala,
    &g_INI_DefaultBuffer,
    String,
    v261[1])
    || (v107 = VocClass::FindIndex(String), v107 == -1) )
    v107 = DiskLaserChargeUp;
    this->DiskLaserChargeUp = v107;
    SpyPlaneCameraFrames = this->SpyPlaneCameraFrames;
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aMastermindover,
    &g_INI_DefaultBuffer,
    String,
    128)
    || (v109 = VocClass::FindIndex(String), v109 == -1) )
    v109 = SpyPlaneCameraFrames;
    v261[1] = 128;
    this->SpyPlaneCameraFrames = v109;
    Dig = this->Dig;
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aAirstrikeabort,
    &g_INI_DefaultBuffer,
    String,
    v261[1])
    || (v111 = VocClass::FindIndex(String), v111 == -1) )
    v111 = Dig;
    v261[1] = 128;
    this->Dig = v111;
    IonBlast = this->IonBlast;
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aAirstrikeattac,
    &g_INI_DefaultBuffer,
    String,
    v261[1])
    || (v113 = VocClass::FindIndex(String), v113 == -1) )
    v113 = IonBlast;
    this->IonBlast = v113;
    IonBeam = this->IonBeam;
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aMindclearedsou,
    &g_INI_DefaultBuffer,
    String,
    128)
    || (v115 = VocClass::FindIndex(String), v115 == -1) )
    v115 = IonBeam;
    v261[1] = 128;
    this->IonBeam = v115;
    v116 = this->DamageFireTypes[0];
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aEntergrinderso,
    &g_INI_DefaultBuffer,
    String,
    v261[1])
    || (v117 = VocClass::FindIndex(String), v117 == -1) )
    v117 = v116;
    v261[1] = 128;
    this->DamageFireTypes[0] = v117;
    v118 = this->DamageFireTypes[1];
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aLeavegrinderso,
    &g_INI_DefaultBuffer,
    String,
    v261[1])
    || (v119 = VocClass::FindIndex(String), v119 == -1) )
    v119 = v118;
    this->DamageFireTypes[1] = v119;
    v120 = this->DamageFireTypes[2];
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aEnterbioreacto,
    &g_INI_DefaultBuffer,
    String,
    128)
    || (v121 = VocClass::FindIndex(String), v121 == -1) )
    v121 = v120;
    v261[1] = 128;
    this->DamageFireTypes[2] = v121;
    v122 = this->DamageFireTypes[3];
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aLeavebioreacto,
    &g_INI_DefaultBuffer,
    String,
    v261[1])
    || (v123 = VocClass::FindIndex(String), v123 == -1) )
    v123 = v122;
    v261[1] = 128;
    this->DamageFireTypes[3] = v123;
    v124 = this->WeatherConClouds[0];
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aActivatesound,
    &g_INI_DefaultBuffer,
    String,
    v261[1])
    || (v125 = VocClass::FindIndex(String), v125 == -1) )
    v125 = v124;
    this->WeatherConClouds[0] = v125;
    v126 = this->WeatherConClouds[1];
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aDeactivatesoun,
    &g_INI_DefaultBuffer,
    String,
    128)
    || (v127 = VocClass::FindIndex(String), v127 == -1) )
    v127 = v126;
    v261[1] = 128;
    this->WeatherConClouds[1] = v127;
    v128 = this->WeatherConClouds[2];
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aSpyplanecamera,
    &g_INI_DefaultBuffer,
    String,
    v261[1])
    || (v129 = VocClass::FindIndex(String), v129 == -1) )
    v129 = v128;
    v261[1] = 128;
    this->WeatherConClouds[2] = v129;
    v130 = this->WeatherConClouds[3];
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aLetsdothetimew,
    &g_INI_DefaultBuffer,
    String,
    v261[1])
    || (v131 = VocClass::FindIndex(String), v131 == -1) )
    v131 = v130;
    this->WeatherConClouds[3] = v131;
    v132 = this->WeatherConBolts[0];
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aLetsdothetimew_0,
    &g_INI_DefaultBuffer,
    String,
    128)
    || (v133 = VocClass::FindIndex(String), v133 == -1) )
    v133 = v132;
    v261[1] = 128;
    this->WeatherConBolts[0] = v133;
    v134 = this->WeatherConBolts[1];
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aDisklasercharg,
    &g_INI_DefaultBuffer,
    String,
    v261[1])
    || (v135 = VocClass::FindIndex(String), v135 == -1) )
    v135 = v134;
    this->WeatherConBolts[1] = v135;
    this->WeatherConBolts[2] = INIClass::ReadInt_Overwrite(
    (int)v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aSpyplanecamera_0,
    this->WeatherConBolts[2]);
    ScoreAnimSound = this->ScoreAnimSound;
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aCreateunitsoun,
    &g_INI_DefaultBuffer,
    String,
    128)
    || (v137 = VocClass::FindIndex(String), v137 == -1) )
    v137 = ScoreAnimSound;
    v261[1] = 128;
    this->ScoreAnimSound = v137;
    IFVTransformSound = this->IFVTransformSound;
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aCreateinfantry,
    &g_INI_DefaultBuffer,
    String,
    v261[1])
    || (v139 = VocClass::FindIndex(String), v139 == -1) )
    v139 = IFVTransformSound;
    v261[1] = 128;
    this->IFVTransformSound = v139;
    PsychicSensorDetectSound = this->PsychicSensorDetectSound;
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aCreateaircraft,
    &g_INI_DefaultBuffer,
    String,
    v261[1])
    || (v141 = VocClass::FindIndex(String), v141 == -1) )
    v141 = PsychicSensorDetectSound;
    this->PsychicSensorDetectSound = v141;
    CrateFireSound = this->CrateFireSound;
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aIfvtransformso,
    &g_INI_DefaultBuffer,
    String,
    128)
    || (v143 = VocClass::FindIndex(String), v143 == -1) )
    v143 = CrateFireSound;
    v261[1] = 128;
    this->CrateFireSound = v143;
    CrateArmourSound = this->CrateArmourSound;
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aPsychicsensord,
    &g_INI_DefaultBuffer,
    String,
    v261[1])
    || (v145 = VocClass::FindIndex(String), v145 == -1) )
    v145 = CrateArmourSound;
    v261[1] = 128;
    this->CrateArmourSound = v145;
    MasterMindOverloadDeathSound = this->MasterMindOverloadDeathSound;
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aSpysatactivati,
    &g_INI_DefaultBuffer,
    String,
    v261[1])
    || (v147 = VocClass::FindIndex(String), v147 == -1) )
    v147 = MasterMindOverloadDeathSound;
    this->MasterMindOverloadDeathSound = v147;
    AirstrikeAbortSound = this->AirstrikeAbortSound;
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aSpysatdeactiva,
    &g_INI_DefaultBuffer,
    String,
    128)
    || (v149 = VocClass::FindIndex(String), v149 == -1) )
    v149 = AirstrikeAbortSound;
    v261[1] = 128;
    this->AirstrikeAbortSound = v149;
    v150 = this->WeatherConBolts[3];
    if ( INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)&off_83A5CC,
    &g_INI_DefaultBuffer,
    String,
    v261[1]) )
    v151 = AnimTypeClass::FindOrCreate(String);
    else
    v151 = v150;
    v261[1] = 128;
    this->WeatherConBolts[3] = v151;
    v152 = this->PrerequisiteProc[2];
    if ( INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aAtmosphereentr,
    &g_INI_DefaultBuffer,
    String,
    v261[1]) )
    v153 = AnimTypeClass::FindOrCreate(String);
    else
    v153 = v152;
    this->PrerequisiteProc[2] = v153;
    v154 = this->V3Rocket[6];
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aGateup,
    &g_INI_DefaultBuffer,
    String,
    128)
    || (v155 = VocClass::FindIndex(String), v155 == -1) )
    v155 = v154;
    v261[1] = 128;
    this->V3Rocket[6] = v155;
    v156 = this->V3Rocket[7];
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aGatedown,
    &g_INI_DefaultBuffer,
    String,
    v261[1])
    || (v157 = VocClass::FindIndex(String), v157 == -1) )
    v157 = v156;
    this->V3Rocket[7] = v157;
    *((uint8_t *)this + 6128) = INIClass::ReadBool_Overwrite(
    (int)v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aShroudgrow,
    *((uint8_t *)this + 6128));
    VeteranSight = this->VeteranSight;
    v261[1] = HIDWORD(this->VeteranSight);
    v261[0] = VeteranSight;
    *(double *)&this->VeteranSight = INIClass::ReadDouble_Overwrite(
    (int)v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aScrollmultipli,
    *(double *)v261);
    v159 = INIClass::ReadInt_Overwrite(
    (int)v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aShakescreen,
    this->VeteranROF);
    v261[1] = 128;
    LODWORD(this->VeteranROF) = v159;
    WheeledDownhill = this->WheeledDownhill;
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aCloaksound,
    &g_INI_DefaultBuffer,
    String,
    v261[1])
    || (v161 = VocClass::FindIndex(String), v161 == -1) )
    v161 = WheeledDownhill;
    v261[1] = 128;
    LODWORD(this->WheeledDownhill) = v161;
    WheeledDownhill_high = HIDWORD(this->WheeledDownhill);
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aSellsound,
    &g_INI_DefaultBuffer,
    String,
    v261[1])
    || (v163 = VocClass::FindIndex(String), v163 == -1) )
    v163 = WheeledDownhill_high;
    HIDWORD(this->WheeledDownhill) = v163;
    SpotlightMovementRadius = this->SpotlightMovementRadius;
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aGameclosed,
    &g_INI_DefaultBuffer,
    String,
    128)
    || (v165 = VocClass::FindIndex(String), v165 == -1) )
    v165 = SpotlightMovementRadius;
    v261[1] = 128;
    this->SpotlightMovementRadius = v165;
    SpotlightLocationRadius = this->SpotlightLocationRadius;
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aIncomingmessag,
    &g_INI_DefaultBuffer,
    String,
    v261[1])
    || (v167 = VocClass::FindIndex(String), v167 == -1) )
    v167 = SpotlightLocationRadius;
    v261[1] = 128;
    this->SpotlightLocationRadius = v167;
    SpotlightAngle_high = HIDWORD(this->SpotlightAngle);
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aMessagechartyp,
    &g_INI_DefaultBuffer,
    String,
    v261[1])
    || (v169 = VocClass::FindIndex(String), v169 == -1) )
    v169 = SpotlightAngle_high;
    HIDWORD(this->SpotlightAngle) = v169;
    SpotlightSpeed = this->SpotlightSpeed;
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aSystemerror,
    &g_INI_DefaultBuffer,
    String,
    128)
    || (v171 = VocClass::FindIndex(String), v171 == -1) )
    v171 = SpotlightSpeed;
    v261[1] = 128;
    LODWORD(this->SpotlightSpeed) = v171;
    SpotlightSpeed_high = HIDWORD(this->SpotlightSpeed);
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aOptionschanged,
    &g_INI_DefaultBuffer,
    String,
    v261[1])
    || (v173 = VocClass::FindIndex(String), v173 == -1) )
    v173 = SpotlightSpeed_high;
    v261[1] = 128;
    HIDWORD(this->SpotlightSpeed) = v173;
    SpotlightAcceleration = this->SpotlightAcceleration;
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aGameforming,
    &g_INI_DefaultBuffer,
    String,
    v261[1])
    || (v175 = VocClass::FindIndex(String), v175 == -1) )
    v175 = SpotlightAcceleration;
    LODWORD(this->SpotlightAcceleration) = v175;
    SpotlightAcceleration_high = HIDWORD(this->SpotlightAcceleration);
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aPlayerleft,
    &g_INI_DefaultBuffer,
    String,
    128)
    || (v177 = VocClass::FindIndex(String), v177 == -1) )
    v177 = SpotlightAcceleration_high;
    v261[1] = 128;
    HIDWORD(this->SpotlightAcceleration) = v177;
    SpotlightAngle = this->SpotlightAngle;
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aPlayerjoined,
    &g_INI_DefaultBuffer,
    String,
    v261[1])
    || (v179 = VocClass::FindIndex(String), v179 == -1) )
    v179 = SpotlightAngle;
    v261[1] = 128;
    LODWORD(this->SpotlightAngle) = v179;
    SpotlightRadius = this->SpotlightRadius;
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aConstruction,
    &g_INI_DefaultBuffer,
    String,
    v261[1])
    || (v181 = VocClass::FindIndex(String), v181 == -1) )
    v181 = SpotlightRadius;
    this->SpotlightRadius = v181;
    IntVector::Copy(&v256, &this->WindDirection);
    INIClassIntList = (uint32_t *)GetINIClassIntList(
    (int)&v264,
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aCreditticks,
    &TypeList<int>::`vftable',
    v257,
    v258,
    v259,
    this->NoParachuteMaxFallRate,
    this->BuildingDrop,
    v261[1]);
    TypeList::Copy(&this->WindDirection, INIClassIntList);
    this->NoParachuteMaxFallRate = INIClassIntList[4];
    this->BuildingDrop = INIClassIntList[5];
    this->Scorches[0] = INIClassIntList[6];
    v264 = &VectorClass<int>::`vftable';
    if ( Block && v266 )
    __3_YAXPAX_Z(Block);
    v183 = this->Scorches[1];
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aBuildingdiesou,
    &g_INI_DefaultBuffer,
    String,
    128)
    || (v184 = VocClass::FindIndex(String), v184 == -1) )
    v184 = v183;
    v261[1] = 128;
    this->Scorches[1] = v184;
    v185 = this->Scorches[2];
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aBuildingslam,
    &g_INI_DefaultBuffer,
    String,
    v261[1])
    || (v186 = VocClass::FindIndex(String), v186 == -1) )
    v186 = v185;
    v261[1] = 128;
    this->Scorches[2] = v186;
    v187 = this->Scorches[3];
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aRadaron,
    &g_INI_DefaultBuffer,
    String,
    v261[1])
    || (v188 = VocClass::FindIndex(String), v188 == -1) )
    v188 = v187;
    this->Scorches[3] = v188;
    v189 = this->Scorches1[0];
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aRadaroff,
    &g_INI_DefaultBuffer,
    String,
    128)
    || (v190 = VocClass::FindIndex(String), v190 == -1) )
    v190 = v189;
    v261[1] = 128;
    this->Scorches1[0] = v190;
    v191 = this->Scorches1[1];
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aMovieon,
    &g_INI_DefaultBuffer,
    String,
    v261[1])
    || (v192 = VocClass::FindIndex(String), v192 == -1) )
    v192 = v191;
    v261[1] = 128;
    this->Scorches1[1] = v192;
    v193 = this->Scorches1[2];
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aMovieoff,
    &g_INI_DefaultBuffer,
    String,
    v261[1])
    || (v194 = VocClass::FindIndex(String), v194 == -1) )
    v194 = v193;
    this->Scorches1[2] = v194;
    v195 = this->Scorches1[3];
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aScoldsound,
    &g_INI_DefaultBuffer,
    String,
    128)
    || (v196 = VocClass::FindIndex(String), v196 == -1) )
    v196 = v195;
    v261[1] = 128;
    this->Scorches1[3] = v196;
    v197 = this->Scorches2[0];
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aTeslacharge,
    &g_INI_DefaultBuffer,
    String,
    v261[1])
    || (v198 = VocClass::FindIndex(String), v198 == -1) )
    v198 = v197;
    v261[1] = 128;
    this->Scorches2[0] = v198;
    v199 = this->Scorches2[1];
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aTeslazap,
    &g_INI_DefaultBuffer,
    String,
    v261[1])
    || (v200 = VocClass::FindIndex(String), v200 == -1) )
    v200 = v199;
    this->Scorches2[1] = v200;
    v201 = this->Scorches3[0];
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aBuildingdamage,
    &g_INI_DefaultBuffer,
    String,
    128)
    || (v202 = VocClass::FindIndex(String), v202 == -1) )
    v202 = v201;
    v261[1] = 128;
    this->Scorches3[0] = v202;
    v203 = this->Scorches3[2];
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aChutesound,
    &g_INI_DefaultBuffer,
    String,
    v261[1])
    || (v204 = VocClass::FindIndex(String), v204 == -1) )
    v204 = v203;
    v261[1] = 128;
    this->Scorches3[2] = v204;
    v205 = this->Scorches2[2];
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aGenericclick,
    &g_INI_DefaultBuffer,
    String,
    v261[1])
    || (v206 = VocClass::FindIndex(String), v206 == -1) )
    v206 = v205;
    this->Scorches2[2] = v206;
    v207 = this->Scorches2[3];
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aGenericbeep,
    &g_INI_DefaultBuffer,
    String,
    128)
    || (v208 = VocClass::FindIndex(String), v208 == -1) )
    v208 = v207;
    v261[1] = 128;
    this->Scorches2[3] = v208;
    v209 = this->BuildTech[2];
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aBuildingdrop,
    &g_INI_DefaultBuffer,
    String,
    v261[1])
    || (v210 = VocClass::FindIndex(String), v210 == -1) )
    v210 = v209;
    v261[1] = 128;
    this->BuildTech[2] = v210;
    v211 = this->Scorches3[3];
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)g_INI_Key_StopSound,
    &g_INI_DefaultBuffer,
    String,
    v261[1])
    || (v212 = VocClass::FindIndex(String), v212 == -1) )
    v212 = v211;
    this->Scorches3[3] = v212;
    v213 = this->Scorches4[0];
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aGuardsound,
    &g_INI_DefaultBuffer,
    String,
    128)
    || (v214 = VocClass::FindIndex(String), v214 == -1) )
    v214 = v213;
    v261[1] = 128;
    this->Scorches4[0] = v214;
    v215 = this->Scorches4[1];
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aScattersound,
    &g_INI_DefaultBuffer,
    String,
    v261[1])
    || (v216 = VocClass::FindIndex(String), v216 == -1) )
    v216 = v215;
    v261[1] = 128;
    this->Scorches4[1] = v216;
    v217 = this->Scorches4[3];
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aStormsound,
    &g_INI_DefaultBuffer,
    String,
    v261[1])
    || (v218 = VocClass::FindIndex(String), v218 == -1) )
    v218 = v217;
    this->Scorches4[3] = v218;
    IntVector::Copy(&v256, this->RepairBay);
    v219 = (uint32_t *)GetINIClassIntList(
    (int)&v264,
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aLightningsound,
    &TypeList<int>::`vftable',
    v257,
    v258,
    v259,
    this->GDIGateOne,
    this->GDIGateTwo,
    v261[1]);
    TypeList::Copy(this->RepairBay, v219);
    this->GDIGateOne = v219[4];
    this->GDIGateTwo = v219[5];
    this->NodGateOne = v219[6];
    v264 = &VectorClass<int>::`vftable';
    if ( Block && v266 )
    __3_YAXPAX_Z(Block);
    NodGateTwo = this->NodGateTwo;
    if ( !INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aShellbuttonsli,
    &g_INI_DefaultBuffer,
    String,
    128)
    || (v221 = VocClass::FindIndex(String), v221 == -1) )
    v221 = NodGateTwo;
    v261[1] = 128;
    this->NodGateTwo = v221;
    if ( INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aTreefire,
    &g_INI_DefaultBuffer,
    String,
    v261[1]) )
    DynamicVectorClass::AnimTypeConstructor(&v264, 0, 0);
    v264 = &TypeList<AnimTypeClass const *>::`vftable';
    for ( i = strtok(String, Delimiter); i; i = strtok(0, Delimiter) )
    if ( !*i )
    break;
    v262 = AnimTypeClass::FindOrCreate(i);
    if ( v262 )
    DynamicVector::Add_Alt4(&v264, &v262);
    TypeList::AnimTypeCopy(&v267, &v264);
    v264 = &VectorClass<AnimTypeClass const *>::`vftable';
    DynamicVectorClass::Destroy_Alt((int)&v264);
    else
    TypeList::AnimTypeCopy(&v267, &this->OccupyDamageMultiplier);
    VectorClass::CopyDefault(&this->OccupyDamageMultiplier, &v267);
    this->BunkerROFMultiplier = v270;
    this->BunkerWeaponRangeBonus = v271;
    this->OpenToppedDamageMultiplier = v272;
    v267 = &VectorClass<AnimTypeClass const *>::`vftable';
    if ( v268 && v269 )
    __3_YAXPAX_Z(v268);
    if ( INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aOnfire,
    &g_INI_DefaultBuffer,
    String,
    128) )
    DynamicVectorClass::AnimTypeConstructor(&v264, 0, 0);
    v264 = &TypeList<AnimTypeClass const *>::`vftable';
    for ( j = strtok(String, Delimiter); j; j = strtok(0, Delimiter) )
    if ( !*j )
    break;
    v262 = AnimTypeClass::FindOrCreate(j);
    if ( v262 )
    DynamicVector::Add_Alt4(&v264, &v262);
    TypeList::AnimTypeCopy(&v267, &v264);
    v264 = &VectorClass<AnimTypeClass const *>::`vftable';
    DynamicVectorClass::Destroy_Alt((int)&v264);
    else
    TypeList::AnimTypeCopy(&v267, &this->OverloadDamage[2]);
    InfantryTypeClass::CopyDataArray(&this->OverloadDamage[2], &v267);
    this->PurifierBonus = v272;
    v267 = &VectorClass<AnimTypeClass const *>::`vftable';
    DynamicVectorClass::Destroy_Alt((int)&v267);
    OpenToppedRangeBonus = this->OpenToppedRangeBonus;
    if ( INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)g_INI_Key_Smoke,
    &g_INI_DefaultBuffer,
    String,
    128) )
    v225 = AnimTypeClass::FindOrCreate(String);
    else
    v225 = OpenToppedRangeBonus;
    v261[1] = 128;
    this->OpenToppedRangeBonus = v225;
    OpenToppedWarpDistance = this->OpenToppedWarpDistance;
    if ( INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)g_INI_Key_Smoke,
    &g_INI_DefaultBuffer,
    String,
    v261[1]) )
    v227 = AnimTypeClass::FindOrCreate(String);
    else
    v227 = OpenToppedWarpDistance;
    this->OpenToppedWarpDistance = v227;
    v228 = INIClass::ReadInt_Overwrite(
    (int)v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aEliteflashtime,
    this->MutateWarhead);
    v261[1] = 128;
    this->MutateWarhead = v228;
    NukeWarhead = this->NukeWarhead;
    if ( INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aSmallfire,
    &g_INI_DefaultBuffer,
    String,
    v261[1]) )
    v230 = AnimTypeClass::FindOrCreate(String);
    else
    v230 = NukeWarhead;
    v261[1] = 128;
    this->NukeWarhead = v230;
    NukeProjectile = this->NukeProjectile;
    if ( INIClass::GetString(
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aLargefire,
    &g_INI_DefaultBuffer,
    String,
    v261[1]) )
    v232 = AnimTypeClass::FindOrCreate(String);
    else
    v232 = NukeProjectile;
    this->NukeProjectile = v232;
    *((uint8_t *)this + 6119) = INIClass::ReadBool_Overwrite(
    (int)v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aAllyreveal,
    *((uint8_t *)this + 6119));
    *((uint32_t *)this + 1470) = 0;
    *((uint32_t *)this + 1471) = 1072693248;
    v233 = *((uint32_t *)this + 1474);
    v261[1] = *((uint32_t *)this + 1475);
    v261[0] = v233;
    *((double *)this + 737) = INIClass::ReadDouble_Overwrite(
    (int)v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aConditionred,
    *(double *)v261);
    v234 = *((uint32_t *)this + 1472);
    v261[1] = *((uint32_t *)this + 1473);
    v261[0] = v234;
    Double_Overwrite = INIClass::ReadDouble_Overwrite(
    (int)v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aConditionyello,
    *(double *)v261);
    *((double *)this + 736) = Double_Overwrite;
    *((uint32_t *)this + 1327) = INIClass::ReadCoord(
    Double_Overwrite,
    (int)aAudiovisual,
    (int)aDropzoneradius,
    *((uint32_t *)this + 1327));
    *((uint8_t *)this + 6118) = INIClass::ReadBool_Overwrite(
    (int)v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aEnemyhealth,
    *((uint8_t *)this + 6118));
    *((uint32_t *)this + 1454) = INIClass::ReadInt_Overwrite(
    (int)v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aGravity,
    *((uint32_t *)this + 1454));
    v236 = *((uint32_t *)this + 1476);
    v261[1] = *((uint32_t *)this + 1477);
    v261[0] = v236;
    *((double *)this + 738) = INIClass::ReadDouble_Overwrite(
    (int)v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aIdleactionfreq,
    *(double *)v261);
    v237 = *((uint32_t *)this + 1328);
    v261[1] = *((uint32_t *)this + 1329);
    v261[0] = v237;
    *((double *)this + 664) = INIClass::ReadDouble_Overwrite(
    (int)v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aMessagedelay,
    *(double *)v261);
    v238 = *((uint32_t *)this + 1500);
    v261[1] = *((uint32_t *)this + 1501);
    v261[0] = v238;
    *((double *)this + 750) = INIClass::ReadDouble_Overwrite(
    (int)v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aMovietime,
    *(double *)v261);
    *((uint8_t *)this + 6122) = INIClass::ReadBool_Overwrite(
    (int)v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aNamedcivilians,
    *((uint8_t *)this + 6122));
    v239 = *((uint32_t *)this + 1330);
    v261[1] = *((uint32_t *)this + 1331);
    v261[0] = v239;
    *((double *)this + 665) = INIClass::ReadDouble_Overwrite(
    (int)v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aSavourdelay,
    *(double *)v261);
    v240 = *((uint32_t *)this + 1424);
    v261[1] = *((uint32_t *)this + 1425);
    v261[0] = v240;
    *((double *)this + 712) = INIClass::ReadDouble_Overwrite(
    (int)v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aShroudrate,
    *(double *)v261);
    v241 = *((uint32_t *)this + 1426);
    v261[1] = *((uint32_t *)this + 1427);
    v261[0] = v241;
    *((double *)this + 713) = INIClass::ReadDouble_Overwrite(
    (int)v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aFograte,
    *(double *)v261);
    v242 = *((uint32_t *)this + 1430);
    v261[1] = *((uint32_t *)this + 1431);
    v261[0] = v242;
    *((double *)this + 715) = INIClass::ReadDouble_Overwrite(
    (int)v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aVeingrowthrate,
    *(double *)v261);
    v243 = *((uint32_t *)this + 1428);
    v261[1] = *((uint32_t *)this + 1429);
    v261[0] = v243;
    *((double *)this + 714) = INIClass::ReadDouble_Overwrite(
    (int)v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aIcegrowthrate,
    *(double *)v261);
    *((uint32_t *)this + 1432) = INIClass::ReadInt_Overwrite(
    (int)v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aIcesolidifyfra,
    *((uint32_t *)this + 1432));
    (*(void (__thiscall **)(int *))(this->ChuteSound + 12))(&this->ChuteSound);
    DynamicVectorClass::Copy(&v256, &this->ChuteSound);
    v244 = (uint32_t *)GetINIClassIntList(
    (int)&v264,
    v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aIcecracksounds,
    &TypeList<int>::`vftable',
    v257,
    v258,
    v259,
    v260,
    v261[0],
    v261[1]);
    TypeList::Copy(&this->ChuteSound, v244);
    this->DeploySound = v244[4];
    this->StormSound = v244[5];
    this->LightningSounds[0] = v244[6];
    v264 = &VectorClass<int>::`vftable';
    if ( Block )
    if ( v266 )
    __3_YAXPAX_Z(Block);
    v245 = *((uint32_t *)this + 1434);
    v261[1] = *((uint32_t *)this + 1435);
    v261[0] = v245;
    *((double *)this + 717) = INIClass::ReadDouble_Overwrite(
    (int)v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aAmbientchanger,
    *(double *)v261);
    v246 = *((uint32_t *)this + 1436);
    v261[1] = *((uint32_t *)this + 1437);
    v261[0] = v246;
    *((double *)this + 718) = INIClass::ReadDouble_Overwrite(
    (int)v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aAmbientchanges,
    *(double *)v261);
    v247 = *((uint32_t *)this + 1450);
    v261[1] = *((uint32_t *)this + 1451);
    v261[0] = v247;
    *((double *)this + 725) = INIClass::ReadDouble_Overwrite(
    (int)v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aSpeakdelay,
    *(double *)v261);
    v248 = *((uint32_t *)this + 1440);
    v261[1] = *((uint32_t *)this + 1441);
    v261[0] = v248;
    *((double *)this + 720) = INIClass::ReadDouble_Overwrite(
    (int)v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aTimerwarning,
    *(double *)v261);
    v262 = *((uint32_t *)this + 1525) / 1000;
    v249 = INIClass::ReadDouble_Overwrite(
    (int)v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aExtraunitlight,
    (double)v262);
    *((uint32_t *)this + 1525) = Math::RoundToInt(v249 * 1000.0);
    v262 = *((uint32_t *)this + 1526) / 1000;
    v250 = INIClass::ReadDouble_Overwrite(
    (int)v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aExtrainfantryl,
    (double)v262);
    *((uint32_t *)this + 1526) = Math::RoundToInt(v250 * 1000.0);
    v262 = *((uint32_t *)this + 1527) / 1000;
    v251 = INIClass::ReadDouble_Overwrite(
    (int)v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aExtraaircraftl,
    (double)v262);
    *((uint32_t *)this + 1527) = Math::RoundToInt(v251 * 1000.0);
    Coord = INIClass::GetCoord(
    v273,
    (int)&v262,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aLocalradarcolo,
    (unsigned __int8 *)this + 6240);
    *((_WORD *)this + 3120) = *(_WORD *)Coord;
    *((uint8_t *)this + 6242) = *(uint8_t *)(Coord + 2);
    v253 = INIClass::GetCoord(
    v273,
    (int)&v262,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aLinetrailcolor_1,
    (unsigned __int8 *)this + 6243);
    *(_WORD *)((char *)this + 6243) = *(_WORD *)v253;
    *((uint8_t *)this + 6245) = *(uint8_t *)(v253 + 2);
    v254 = INIClass::GetCoord(
    v273,
    (int)&v262,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aChronobeamcolo,
    (unsigned __int8 *)this + 6246);
    *((_WORD *)this + 3123) = *(_WORD *)v254;
    *((uint8_t *)this + 6248) = *(uint8_t *)(v254 + 2);
    v255 = INIClass::GetCoord(
    v273,
    (int)&v262,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aMagnabeamcolor,
    (unsigned __int8 *)this + 6249);
    *(_WORD *)((char *)this + 6249) = *(_WORD *)v255;
    *((uint8_t *)this + 6251) = *(uint8_t *)(v255 + 2);
    *((uint32_t *)this + 1563) = INIClass::ReadInt_Overwrite(
    (int)v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aOretwinklechan,
    *((uint32_t *)this + 1563));
    *((uint32_t *)this + 1577) = INIClass::ReadInt_Overwrite(
    (int)v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aLasertargetcol,
    *((uint32_t *)this + 1577));
    *((uint32_t *)this + 1578) = INIClass::ReadInt_Overwrite(
    (int)v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aIroncurtaincol,
    *((uint32_t *)this + 1578));
    *((uint32_t *)this + 1579) = INIClass::ReadInt_Overwrite(
    (int)v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aBerserkcolor,
    *((uint32_t *)this + 1579));
    *((uint32_t *)this + 1580) = INIClass::ReadInt_Overwrite(
    (int)v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aForceshieldcol,
    *((uint32_t *)this + 1580));
    *((float *)this + 1581) = INIClass::ReadDouble_Overwrite(
    (int)v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aDirectrockingc,
    *((float *)this + 1581));
    *((float *)this + 1582) = INIClass::ReadDouble_Overwrite(
    (int)v273,
    (unsigned __int8 *)aAudiovisual,
    (unsigned __int8 *)aFallbackcoeffi,
    *((float *)this + 1582));
    LOBYTE(result) = 1;
    else
    LOBYTE(result) = 0;
    return result;
}

int  Rules::ReadBuildingsINI(RulesClass *this)
{
    int result; // eax
    char *i; // eax
    int v4; // edx
    int v5; // eax
    char *j; // eax
    char *k; // eax
    char *m; // eax
    char *n; // eax
    char *ii; // eax
    char *jj; // eax
    char *kk; // eax
    char *mm; // eax
    int v14; // ecx
    char *nn; // eax
    char *i1; // eax
    char *i2; // eax
    char *i3; // eax
    char *i4; // eax
    char *i5; // eax
    int v21; // ecx
    int *INIClassBuildingTypeList; // eax
    int *v23; // eax
    int *v24; // eax
    int *v25; // eax
    int Int_Overwrite; // eax
    unsigned int v27; // ecx
    unsigned int v28; // edx
    double Double_Overwrite; // st7
    int v30; // ecx
    int v31; // eax
    int v32; // edx
    int v33; // eax
    int v34; // ecx
    int v35; // eax
    int v36; // ecx
    double v37; // st7
    int v38; // eax
    int v39; // eax
    double v40; // rax
    double v41; // st7
    int v42; // edx
    int v43; // eax
    int v44; // ecx
    int v45; // edx
    double v46; // st7
    int v47; // ecx
    int v48; // eax
    int v49; // ecx
    double v50; // st7
    int v51; // eax
    int v52; // eax
    double v53; // rax
    double v54; // st7
    int v55; // edx
    int v56; // eax
    int v57; // ecx
    int v58; // edx
    double v59; // st7
    int v60; // ecx
    int v61; // eax
    int v62; // ecx
    double v63; // st7
    int v64; // eax
    int v65; // eax
    double v66; // rax
    double v67; // st7
    int v68; // edx
    int v69; // eax
    char v70; // cl
    char Bool_Overwrite; // al
    double v72; // rax
    double v73; // st7
    int v74; // edx
    int v75; // eax
    int v76; // ecx
    int MaximumBuildingPlacementFailures; // edx
    double v78; // st7
    int v79; // ecx
    int v80; // edx
    double v81; // st7
    int v82; // ecx
    int v83; // edx
    double v84; // st7
    int v85; // ecx
    int v86; // edx
    double v87; // st7
    int v88; // ecx
    void **v89[3]; // [esp-1Ch] [ebp-E4h] BYREF
    __int16 v90; // [esp-10h] [ebp-D8h]
    int v91; // [esp-Ch] [ebp-D4h]
    double v92; // [esp-8h] [ebp-D0h]
    void ***IntList; // [esp+Ch] [ebp-BCh] BYREF
    int v94[6]; // [esp+10h] [ebp-B8h] BYREF
    int v95; // [esp+28h] [ebp-A0h]
    uint32_t v96[6]; // [esp+2Ch] [ebp-9Ch] BYREF
    int v97; // [esp+44h] [ebp-84h]
    char String[128]; // [esp+48h] [ebp-80h] BYREF
    unsigned __int8 ***v99; // [esp+D0h] [ebp+8h]
    result = INIClass::BinarySearchSection((int)v99, (unsigned __int8 *)aAi);
    if ( result )
    if ( INIClass::GetString(
    v99,
    (unsigned __int8 *)aAi,
    (unsigned __int8 *)aBuildconst,
    &g_INI_DefaultBuffer,
    String,
    128) )
    DynamicVectorClass::BuildingTypeConstructor(v94, 0, 0);
    v94[0] = (int)&TypeList<BuildingTypeClass const *>::`vftable';
    for ( i = strtok(String, Delimiter); i; i = strtok(0, Delimiter) )
    if ( !*i )
    break;
    IntList = (void ***)BuildingTypeClass::FindOrCreate(i);
    if ( IntList )
    DynamicVector::Add_Alt3(v94, &IntList);
    TypeList::BuildingTypeCopy(v96, v94);
    v94[0] = (int)&VectorClass<BuildingTypeClass const *>::`vftable';
    DynamicVectorClass::Destroy((int)v94);
    else
    TypeList::BuildingTypeCopy(v96, &this->BuildDummy[1]);
    VectorClass::CopyBuilding(&this->BuildDummy[1], v96);
    v4 = v96[4];
    v5 = v96[5];
    this->NeutralTechBuildings[3] = v97;
    this->NeutralTechBuildings[1] = v4;
    this->NeutralTechBuildings[2] = v5;
    v96[0] = &VectorClass<BuildingTypeClass const *>::`vftable';
    DynamicVectorClass::Destroy((int)v96);
    if ( INIClass::GetString(
    v99,
    (unsigned __int8 *)aAi,
    (unsigned __int8 *)aBuildpower,
    &g_INI_DefaultBuffer,
    String,
    128) )
    DynamicVectorClass::BuildingTypeConstructor(v94, 0, 0);
    v94[0] = (int)&TypeList<BuildingTypeClass const *>::`vftable';
    for ( j = strtok(String, Delimiter); j; j = strtok(0, Delimiter) )
    if ( !*j )
    break;
    IntList = (void ***)BuildingTypeClass::FindOrCreate(j);
    if ( IntList )
    DynamicVector::Add_Alt3(v94, &IntList);
    TypeList::BuildingTypeCopy(v96, v94);
    v94[0] = (int)&VectorClass<BuildingTypeClass const *>::`vftable';
    DynamicVectorClass::Destroy((int)v94);
    else
    TypeList::BuildingTypeCopy(v96, &this->GDIWallDefense);
    DynamicVector::Copy(&this->GDIWallDefense, v96);
    LODWORD(this->GDIBaseDefenseCoefficient) = v97;
    v96[0] = &VectorClass<BuildingTypeClass const *>::`vftable';
    DynamicVectorClass::Destroy((int)v96);
    if ( INIClass::GetString(
    v99,
    (unsigned __int8 *)aAi,
    (unsigned __int8 *)aBuildrefinery,
    &g_INI_DefaultBuffer,
    String,
    128) )
    DynamicVectorClass::BuildingTypeConstructor(v94, 0, 0);
    v94[0] = (int)&TypeList<BuildingTypeClass const *>::`vftable';
    for ( k = strtok(String, Delimiter); k; k = strtok(0, Delimiter) )
    if ( !*k )
    break;
    IntList = (void ***)BuildingTypeClass::FindOrCreate(k);
    if ( IntList )
    DynamicVector::Add_Alt3(v94, &IntList);
    TypeList::BuildingTypeCopy(v96, v94);
    v94[0] = (int)&VectorClass<BuildingTypeClass const *>::`vftable';
    DynamicVectorClass::Destroy((int)v94);
    else
    TypeList::BuildingTypeCopy(v96, (uint32_t *)&this->GDIBaseDefenseCoefficient + 1);
    DynamicVector::Copy((uint32_t *)&this->GDIBaseDefenseCoefficient + 1, v96);
    this->BaseUnit[3] = v97;
    v96[0] = &VectorClass<BuildingTypeClass const *>::`vftable';
    DynamicVectorClass::Destroy((int)v96);
    if ( INIClass::GetString(
    v99,
    (unsigned __int8 *)aAi,
    (unsigned __int8 *)aBuildbarracks,
    &g_INI_DefaultBuffer,
    String,
    128) )
    DynamicVectorClass::BuildingTypeConstructor(v94, 0, 0);
    v94[0] = (int)&TypeList<BuildingTypeClass const *>::`vftable';
    for ( m = strtok(String, Delimiter); m; m = strtok(0, Delimiter) )
    if ( !*m )
    break;
    IntList = (void ***)BuildingTypeClass::FindOrCreate(m);
    if ( IntList )
    DynamicVector::Add_Alt3(v94, &IntList);
    TypeList::BuildingTypeCopy(v96, v94);
    v94[0] = (int)&VectorClass<BuildingTypeClass const *>::`vftable';
    DynamicVectorClass::Destroy((int)v94);
    else
    TypeList::BuildingTypeCopy(v96, this->HarvesterUnit);
    DynamicVector::Copy(this->HarvesterUnit, v96);
    v96[0] = &VectorClass<BuildingTypeClass const *>::`vftable';
    this->PadAircraft[2] = v97;
    DynamicVectorClass::Destroy((int)v96);
    if ( INIClass::GetString(
    v99,
    (unsigned __int8 *)aAi,
    (unsigned __int8 *)aBuildtech,
    &g_INI_DefaultBuffer,
    String,
    128) )
    TypeList::BuildingTypeConstructor(v96);
    for ( n = strtok(String, Delimiter); n; n = strtok(0, Delimiter) )
    if ( !*n )
    break;
    IntList = (void ***)BuildingTypeClass::FindOrCreate(n);
    if ( IntList )
    DynamicVector::Add_Alt3(v96, &IntList);
    TypeList::BuildingTypeCopy(v94, v96);
    v96[0] = &VectorClass<BuildingTypeClass const *>::`vftable';
    DynamicVectorClass::Destroy((int)v96);
    else
    TypeList::BuildingTypeCopy(v94, &this->PadAircraft[3]);
    DynamicVector::Copy(&this->PadAircraft[3], v94);
    this->TreeFire[1] = v95;
    v94[0] = (int)&VectorClass<BuildingTypeClass const *>::`vftable';
    DynamicVectorClass::Destroy((int)v94);
    if ( INIClass::GetString(
    v99,
    (unsigned __int8 *)aAi,
    (unsigned __int8 *)aBuildweapons,
    &g_INI_DefaultBuffer,
    String,
    128) )
    TypeList::BuildingTypeConstructor(v96);
    for ( ii = strtok(String, Delimiter); ii; ii = strtok(0, Delimiter) )
    if ( !*ii )
    break;
    IntList = (void ***)BuildingTypeClass::FindOrCreate(ii);
    if ( IntList )
    DynamicVector::Add_Alt3(v96, &IntList);
    TypeList::BuildingTypeCopy(v94, v96);
    v96[0] = &VectorClass<BuildingTypeClass const *>::`vftable';
    DynamicVectorClass::Destroy((int)v96);
    else
    TypeList::BuildingTypeCopy(v94, &this->TreeFire[2]);
    DynamicVector::Copy(&this->TreeFire[2], v94);
    this->Parachute = v95;
    v94[0] = (int)&VectorClass<BuildingTypeClass const *>::`vftable';
    DynamicVectorClass::Destroy((int)v94);
    if ( INIClass::GetString(
    v99,
    (unsigned __int8 *)aAi,
    (unsigned __int8 *)aAlliedbasedefe_0,
    &g_INI_DefaultBuffer,
    String,
    128) )
    TypeList::BuildingTypeConstructor(v96);
    for ( jj = strtok(String, Delimiter); jj; jj = strtok(0, Delimiter) )
    if ( !*jj )
    break;
    IntList = (void ***)BuildingTypeClass::FindOrCreate(jj);
    if ( IntList )
    DynamicVector::Add_Alt3(v96, &IntList);
    TypeList::BuildingTypeCopy(v94, v96);
    v96[0] = &VectorClass<BuildingTypeClass const *>::`vftable';
    DynamicVectorClass::Destroy((int)v96);
    else
    TypeList::BuildingTypeCopy(v94, this->SplashList);
    DynamicVector::Copy(this->SplashList, v94);
    v94[0] = (int)&VectorClass<BuildingTypeClass const *>::`vftable';
    this->Paratrooper = v95;
    DynamicVectorClass::Destroy((int)v94);
    if ( INIClass::GetString(
    v99,
    (unsigned __int8 *)aAi,
    (unsigned __int8 *)aSovietbasedefe_0,
    &g_INI_DefaultBuffer,
    String,
    128) )
    TypeList::BuildingTypeConstructor(v96);
    for ( kk = strtok(String, Delimiter); kk; kk = strtok(0, Delimiter) )
    if ( !*kk )
    break;
    IntList = (void ***)BuildingTypeClass::FindOrCreate(kk);
    if ( IntList )
    DynamicVector::Add_Alt3(v96, &IntList);
    TypeList::BuildingTypeCopy(v94, v96);
    v96[0] = &VectorClass<BuildingTypeClass const *>::`vftable';
    DynamicVectorClass::Destroy((int)v96);
    else
    TypeList::BuildingTypeCopy(v94, &this->EliteFlashTimer);
    DynamicVector::Copy(&this->EliteFlashTimer, v94);
    this->ChronoRangeMinimum = v95;
    v94[0] = (int)&VectorClass<BuildingTypeClass const *>::`vftable';
    DynamicVectorClass::Destroy((int)v94);
    if ( INIClass::GetString(
    v99,
    (unsigned __int8 *)aAi,
    (unsigned __int8 *)aThirdbasedefen_0,
    &g_INI_DefaultBuffer,
    String,
    128) )
    TypeList::BuildingTypeConstructor(v96);
    for ( mm = strtok(String, Delimiter); mm; mm = strtok(0, Delimiter) )
    if ( !*mm )
    break;
    IntList = (void ***)BuildingTypeClass::FindOrCreate(mm);
    if ( IntList )
    DynamicVector::Add_Alt3(v96, &IntList);
    TypeList::BuildingTypeCopy(v94, v96);
    v96[0] = &VectorClass<BuildingTypeClass const *>::`vftable';
    DynamicVectorClass::Destroy((int)v96);
    else
    TypeList::BuildingTypeCopy(v94, this->AmerParaDropInf);
    DynamicVector::Copy(this->AmerParaDropInf, v94);
    this->AmerParaDropNum[2] = v95;
    v94[0] = (int)&VectorClass<BuildingTypeClass const *>::`vftable';
    DynamicVectorClass::Destroy((int)v94);
    IntList = v89;
    DynamicVectorClass::Copy(v89, &this->AmerParaDropNum[3]);
    *IntList = &TypeList<int>::`vftable';
    IntList = (void ***)INIClass::ReadIntList(
    v99,
    (int)v94,
    (unsigned __int8 *)aAi,
    (unsigned __int8 *)aAiforcepredict,
    v89[0],
    v89[1],
    (int)v89[2],
    v90,
    v91,
    SLODWORD(v92),
    SHIDWORD(v92));
    Rules::CopyDataArray(&this->AmerParaDropNum[3], IntList);
    v14 = (int)IntList[6];
    v94[0] = (int)&VectorClass<int>::`vftable';
    this->AllyParaDropNum[1] = v14;
    VectorClass::Destroy((int)v94);
    if ( INIClass::GetString(
    v99,
    (unsigned __int8 *)aAi,
    (unsigned __int8 *)aBuilddefense,
    &g_INI_DefaultBuffer,
    String,
    128) )
    TypeList::BuildingTypeConstructor(v96);
    for ( nn = strtok(String, Delimiter); nn; nn = strtok(0, Delimiter) )
    if ( !*nn )
    break;
    IntList = (void ***)BuildingTypeClass::FindOrCreate(nn);
    if ( IntList )
    DynamicVector::Add_Alt3(v96, &IntList);
    TypeList::BuildingTypeCopy(v94, v96);
    v96[0] = &VectorClass<BuildingTypeClass const *>::`vftable';
    DynamicVectorClass::Destroy((int)v96);
    else
    TypeList::BuildingTypeCopy(v94, &this->AllyParaDropNum[2]);
    DynamicVector::Copy(&this->AllyParaDropNum[2], v94);
    this->SovParaDropNum[0] = v95;
    v94[0] = (int)&VectorClass<BuildingTypeClass const *>::`vftable';
    DynamicVectorClass::Destroy((int)v94);
    if ( INIClass::GetString(
    v99,
    (unsigned __int8 *)aAi,
    (unsigned __int8 *)aBuildpdefense,
    &g_INI_DefaultBuffer,
    String,
    128) )
    TypeList::BuildingTypeConstructor(v96);
    for ( i1 = strtok(String, Delimiter); i1; i1 = strtok(0, Delimiter) )
    if ( !*i1 )
    break;
    IntList = (void ***)BuildingTypeClass::FindOrCreate(i1);
    if ( IntList )
    DynamicVector::Add_Alt3(v96, &IntList);
    TypeList::BuildingTypeCopy(v94, v96);
    v96[0] = &VectorClass<BuildingTypeClass const *>::`vftable';
    DynamicVectorClass::Destroy((int)v96);
    else
    TypeList::BuildingTypeCopy(v94, &this->SovParaDropNum[1]);
    DynamicVector::Copy(&this->SovParaDropNum[1], v94);
    this->YuriParaDropInf[3] = v95;
    v94[0] = (int)&VectorClass<BuildingTypeClass const *>::`vftable';
    DynamicVectorClass::Destroy((int)v94);
    if ( INIClass::GetString(
    v99,
    (unsigned __int8 *)aAi,
    (unsigned __int8 *)aBuildaa,
    &g_INI_DefaultBuffer,
    String,
    128) )
    TypeList::BuildingTypeConstructor(v96);
    for ( i2 = strtok(String, Delimiter); i2; i2 = strtok(0, Delimiter) )
    if ( !*i2 )
    break;
    IntList = (void ***)BuildingTypeClass::FindOrCreate(i2);
    if ( IntList )
    DynamicVector::Add_Alt3(v96, &IntList);
    TypeList::BuildingTypeCopy(v94, v96);
    v96[0] = &VectorClass<BuildingTypeClass const *>::`vftable';
    DynamicVectorClass::Destroy((int)v96);
    else
    TypeList::BuildingTypeCopy(v94, this->YuriParaDropNum);
    DynamicVector::Copy(this->YuriParaDropNum, v94);
    v94[0] = (int)&VectorClass<BuildingTypeClass const *>::`vftable';
    this->AnimToInfantry[2] = v95;
    DynamicVectorClass::Destroy((int)v94);
    if ( INIClass::GetString(
    v99,
    (unsigned __int8 *)aAi,
    (unsigned __int8 *)aBuildhelipad,
    &g_INI_DefaultBuffer,
    String,
    128) )
    TypeList::BuildingTypeConstructor(v96);
    for ( i3 = strtok(String, Delimiter); i3; i3 = strtok(0, Delimiter) )
    if ( !*i3 )
    break;
    IntList = (void ***)BuildingTypeClass::FindOrCreate(i3);
    if ( IntList )
    DynamicVector::Add_Alt3(v96, &IntList);
    TypeList::BuildingTypeCopy(v94, v96);
    v96[0] = &VectorClass<BuildingTypeClass const *>::`vftable';
    DynamicVectorClass::Destroy((int)v96);
    else
    TypeList::BuildingTypeCopy(v94, &this->AnimToInfantry[3]);
    DynamicVector::Copy(&this->AnimToInfantry[3], v94);
    this->SecretUnits[1] = v95;
    v94[0] = (int)&VectorClass<BuildingTypeClass const *>::`vftable';
    DynamicVectorClass::Destroy((int)v94);
    if ( INIClass::GetString(
    v99,
    (unsigned __int8 *)aAi,
    (unsigned __int8 *)aBuildradar,
    &g_INI_DefaultBuffer,
    String,
    128) )
    TypeList::BuildingTypeConstructor(v96);
    for ( i4 = strtok(String, Delimiter); i4; i4 = strtok(0, Delimiter) )
    if ( !*i4 )
    break;
    IntList = (void ***)BuildingTypeClass::FindOrCreate(i4);
    if ( IntList )
    DynamicVector::Add_Alt3(v96, &IntList);
    TypeList::BuildingTypeCopy(v94, v96);
    v96[0] = &VectorClass<BuildingTypeClass const *>::`vftable';
    DynamicVectorClass::Destroy((int)v96);
    else
    TypeList::BuildingTypeCopy(v94, &this->SecretUnits[2]);
    DynamicVector::Copy(&this->SecretUnits[2], v94);
    this->SecretSum = v95;
    v94[0] = (int)&VectorClass<BuildingTypeClass const *>::`vftable';
    DynamicVectorClass::Destroy((int)v94);
    if ( INIClass::GetString(
    v99,
    (unsigned __int8 *)aAi,
    (unsigned __int8 *)aConcretewalls,
    &g_INI_DefaultBuffer,
    String,
    128) )
    TypeList::BuildingTypeConstructor(v96);
    for ( i5 = strtok(String, Delimiter); i5; i5 = strtok(0, Delimiter) )
    if ( !*i5 )
    break;
    IntList = (void ***)BuildingTypeClass::FindOrCreate(i5);
    if ( IntList )
    DynamicVector::Add_Alt3(v96, &IntList);
    TypeList::BuildingTypeCopy(v94, v96);
    v96[0] = &VectorClass<BuildingTypeClass const *>::`vftable';
    DynamicVectorClass::Destroy((int)v96);
    else
    TypeList::BuildingTypeCopy(v94, &this->AlliedDisguise);
    DynamicVector::Copy(&this->AlliedDisguise, v94);
    v94[0] = (int)&VectorClass<BuildingTypeClass const *>::`vftable';
    LODWORD(this->AIMinorSuperReadyPercent) = v95;
    DynamicVectorClass::Destroy((int)v94);
    IntList = (void ***)ReadINIClassBuildingTypeList(
    (int)v94,
    v99,
    (unsigned __int8 *)aAi,
    (unsigned __int8 *)aNsgates,
    &this->AISafeDistance);
    DynamicVector::Copy(&this->AISafeDistance, IntList);
    v21 = (int)IntList[6];
    v94[0] = (int)&VectorClass<BuildingTypeClass const *>::`vftable';
    this->AlliedBaseDefenseCounts[3] = v21;
    DynamicVectorClass::Destroy((int)v94);
    INIClassBuildingTypeList = (int *)ReadINIClassBuildingTypeList(
    (int)v94,
    v99,
    (unsigned __int8 *)aAi,
    (unsigned __int8 *)aEwgates,
    this->SovietBaseDefenseCounts);
    TypeList::CopyAircraft(this->SovietBaseDefenseCounts, INIClassBuildingTypeList);
    v94[0] = (int)&VectorClass<BuildingTypeClass const *>::`vftable';
    DynamicVectorClass::Destroy((int)v94);
    v23 = (int *)ReadINIClassBuildingTypeList(
    (int)v94,
    v99,
    (unsigned __int8 *)aAi,
    (unsigned __int8 *)aBuildnavalyard,
    &this->ThirdBaseDefenseCounts[3]);
    TypeList::CopyAircraft(&this->ThirdBaseDefenseCounts[3], v23);
    v94[0] = (int)&VectorClass<BuildingTypeClass const *>::`vftable';
    DynamicVectorClass::Destroy((int)v94);
    v24 = (int *)ReadINIClassBuildingTypeList(
    (int)v94,
    v99,
    (unsigned __int8 *)aAi,
    (unsigned __int8 *)aBuilddummy,
    &this->ApproachTargetResetMultiplier);
    TypeList::CopyAircraft(&this->ApproachTargetResetMultiplier, v24);
    v94[0] = (int)&VectorClass<BuildingTypeClass const *>::`vftable';
    DynamicVectorClass::Destroy((int)v94);
    v25 = (int *)ReadINIClassBuildingTypeList(
    (int)v94,
    v99,
    (unsigned __int8 *)aAi,
    (unsigned __int8 *)aNeutraltechbui,
    &this->DisabledDisguiseDetectionPercent[1]);
    TypeList::CopyAircraft(&this->DisabledDisguiseDetectionPercent[1], v25);
    v94[0] = (int)&VectorClass<BuildingTypeClass const *>::`vftable';
    DynamicVectorClass::Destroy((int)v94);
    *(double *)&this->HarvesterDumpRate = INIClass::ReadDouble_Overwrite(
    (int)v99,
    (unsigned __int8 *)aAi,
    (unsigned __int8 *)aAttackinterval,
    *(double *)&this->HarvesterDumpRate);
    *(double *)&this->AtomDamage = INIClass::ReadDouble_Overwrite(
    (int)v99,
    (unsigned __int8 *)aAi,
    (unsigned __int8 *)aAttackdelay,
    *(double *)&this->AtomDamage);
    *(double *)this->Difficult = INIClass::ReadDouble_Overwrite(
    (int)v99,
    (unsigned __int8 *)aAi,
    (unsigned __int8 *)aPatrolscan,
    *(double *)this->Difficult);
    *((uint32_t *)this + 1494) = INIClass::ReadInt_Overwrite(
    (int)v99,
    (unsigned __int8 *)aAi,
    (unsigned __int8 *)aCreditreserve,
    *((uint32_t *)this + 1494));
    *((double *)this + 748) = INIClass::ReadDouble_Overwrite(
    (int)v99,
    (unsigned __int8 *)aAi,
    (unsigned __int8 *)aPathdelay,
    *((double *)this + 748));
    Int_Overwrite = INIClass::ReadInt_Overwrite(
    (int)v99,
    (unsigned __int8 *)aAi,
    (unsigned __int8 *)aBlockagepathde,
    *((uint32_t *)this + 1498));
    v27 = *((uint32_t *)this + 1349);
    v28 = *((uint32_t *)this + 1348);
    *((uint32_t *)this + 1498) = Int_Overwrite;
    Double_Overwrite = INIClass::ReadDouble_Overwrite(
    (int)v99,
    (unsigned __int8 *)aAi,
    (unsigned __int8 *)aAutocreatetime,
    COERCE_DOUBLE(__PAIR64__(v27, v28)));
    v30 = this->Normal[14];
    *((double *)this + 674) = Double_Overwrite;
    this->Normal[14] = INIClass::ReadInt_Overwrite(
    (int)v99,
    (unsigned __int8 *)aAi,
    (unsigned __int8 *)aInfantryreserv,
    v30);
    v31 = INIClass::ReadInt_Overwrite(
    (int)v99,
    (unsigned __int8 *)aAi,
    (unsigned __int8 *)aInfantrybasemu,
    this->Normal[15]);
    v32 = this->Normal[13];
    this->Normal[15] = v31;
    v33 = INIClass::ReadInt_Overwrite((int)v99, (unsigned __int8 *)aAi, (unsigned __int8 *)aPowersurplus, v32);
    v34 = this->Normal[12];
    this->Normal[13] = v33;
    v35 = INIClass::ReadInt_Overwrite((int)v99, (unsigned __int8 *)aAi, (unsigned __int8 *)aBasesizeadd, v34);
    v36 = this->Normal[10];
    this->Normal[12] = v35;
    HIDWORD(v92) = this->Normal[11];
    LODWORD(v92) = v36;
    v37 = INIClass::ReadDouble_Overwrite((int)v99, (unsigned __int8 *)aAi, (unsigned __int8 *)aRefineryratio, v92);
    v38 = this->Normal[9];
    *(double *)&this->Normal[10] = v37;
    v39 = INIClass::ReadInt_Overwrite((int)v99, (unsigned __int8 *)aAi, (unsigned __int8 *)aRefinerylimit, v38);
    HIDWORD(v40) = this->Normal[7];
    this->Normal[9] = v39;
    LODWORD(v40) = this->Normal[6];
    v41 = INIClass::ReadDouble_Overwrite((int)v99, (unsigned __int8 *)aAi, (unsigned __int8 *)aBarracksratio, v40);
    v42 = this->Normal[8];
    *(double *)&this->Normal[6] = v41;
    v43 = INIClass::ReadInt_Overwrite((int)v99, (unsigned __int8 *)aAi, (unsigned __int8 *)aBarrackslimit, v42);
    v44 = this->Normal[3];
    v45 = this->Normal[2];
    this->Normal[8] = v43;
    v46 = INIClass::ReadDouble_Overwrite(
    (int)v99,
    (unsigned __int8 *)aAi,
    (unsigned __int8 *)aWarratio,
    COERCE_DOUBLE(__PAIR64__(v44, v45)));
    v47 = this->Normal[4];
    *(double *)&this->Normal[2] = v46;
    v48 = INIClass::ReadInt_Overwrite((int)v99, (unsigned __int8 *)aAi, (unsigned __int8 *)aWarlimit, v47);
    v49 = this->Easy[18];
    this->Normal[4] = v48;
    HIDWORD(v92) = this->Easy[19];
    LODWORD(v92) = v49;
    v50 = INIClass::ReadDouble_Overwrite((int)v99, (unsigned __int8 *)aAi, (unsigned __int8 *)aDefenseratio, v92);
    v51 = this->Normal[0];
    *(double *)&this->Easy[18] = v50;
    v52 = INIClass::ReadInt_Overwrite((int)v99, (unsigned __int8 *)aAi, (unsigned __int8 *)aDefenselimit, v51);
    HIDWORD(v53) = this->Easy[15];
    this->Normal[0] = v52;
    LODWORD(v53) = this->Easy[14];
    v54 = INIClass::ReadDouble_Overwrite((int)v99, (unsigned __int8 *)aAi, (unsigned __int8 *)aAaratio, v53);
    v55 = this->Easy[16];
    *(double *)&this->Easy[14] = v54;
    v56 = INIClass::ReadInt_Overwrite((int)v99, (unsigned __int8 *)aAi, (unsigned __int8 *)aAalimit, v55);
    v57 = this->Easy[11];
    v58 = this->Easy[10];
    this->Easy[16] = v56;
    v59 = INIClass::ReadDouble_Overwrite(
    (int)v99,
    (unsigned __int8 *)aAi,
    (unsigned __int8 *)aTeslaratio,
    COERCE_DOUBLE(__PAIR64__(v57, v58)));
    v60 = this->Easy[12];
    *(double *)&this->Easy[10] = v59;
    v61 = INIClass::ReadInt_Overwrite((int)v99, (unsigned __int8 *)aAi, (unsigned __int8 *)aTeslalimit, v60);
    v62 = this->Easy[6];
    this->Easy[12] = v61;
    HIDWORD(v92) = this->Easy[7];
    LODWORD(v92) = v62;
    v63 = INIClass::ReadDouble_Overwrite((int)v99, (unsigned __int8 *)aAi, (unsigned __int8 *)aHelipadratio, v92);
    v64 = this->Easy[8];
    *(double *)&this->Easy[6] = v63;
    v65 = INIClass::ReadInt_Overwrite((int)v99, (unsigned __int8 *)aAi, (unsigned __int8 *)aHelipadlimit, v64);
    HIDWORD(v66) = this->Easy[3];
    this->Easy[8] = v65;
    LODWORD(v66) = this->Easy[2];
    v67 = INIClass::ReadDouble_Overwrite((int)v99, (unsigned __int8 *)aAi, (unsigned __int8 *)aAirstripratio, v66);
    v68 = this->Easy[4];
    *(double *)&this->Easy[2] = v67;
    v69 = INIClass::ReadInt_Overwrite((int)v99, (unsigned __int8 *)aAi, (unsigned __int8 *)aAirstriplimit, v68);
    v70 = *((uint8_t *)this + 6115);
    this->Easy[4] = v69;
    *((uint8_t *)this + 6115) = INIClass::ReadBool_Overwrite(
    (int)v99,
    (unsigned __int8 *)aAi,
    (unsigned __int8 *)aCompeasybonus,
    v70);
    Bool_Overwrite = INIClass::ReadBool_Overwrite(
    (int)v99,
    (unsigned __int8 *)aAi,
    (unsigned __int8 *)aParanoid,
    *((uint8_t *)this + 6112));
    HIDWORD(v72) = this->Easy[1];
    *((uint8_t *)this + 6112) = Bool_Overwrite;
    LODWORD(v72) = this->Easy[0];
    v73 = INIClass::ReadDouble_Overwrite((int)v99, (unsigned __int8 *)aAi, (unsigned __int8 *)aPoweremergency, v72);
    v74 = *((uint32_t *)this + 1304);
    *(double *)this->Easy = v73;
    v75 = INIClass::ReadInt_Overwrite((int)v99, (unsigned __int8 *)aAi, (unsigned __int8 *)aAibasespacing, v74);
    v76 = this->AICaptureNormal[0];
    MaximumBuildingPlacementFailures = this->MaximumBuildingPlacementFailures;
    *((uint32_t *)this + 1304) = v75;
    v78 = INIClass::ReadDouble_Overwrite(
    (int)v99,
    (unsigned __int8 *)aAi,
    (unsigned __int8 *)aGdiwalldefense,
    COERCE_DOUBLE(__PAIR64__(v76, MaximumBuildingPlacementFailures)));
    v79 = this->AICaptureNormal[2];
    v80 = this->AICaptureNormal[1];
    *(double *)&this->MaximumBuildingPlacementFailures = v78;
    v81 = INIClass::ReadDouble_Overwrite(
    (int)v99,
    (unsigned __int8 *)aAi,
    (unsigned __int8 *)aGdiwalldefense_0,
    COERCE_DOUBLE(__PAIR64__(v79, v80)));
    v82 = this->AICaptureWounded[0];
    v83 = this->AICaptureNormal[3];
    *(double *)&this->AICaptureNormal[1] = v81;
    v84 = INIClass::ReadDouble_Overwrite(
    (int)v99,
    (unsigned __int8 *)aAi,
    (unsigned __int8 *)aNodbasedefense,
    COERCE_DOUBLE(__PAIR64__(v82, v83)));
    v85 = this->AICaptureWounded[2];
    v86 = this->AICaptureWounded[1];
    *(double *)&this->AICaptureNormal[3] = v84;
    v87 = INIClass::ReadDouble_Overwrite(
    (int)v99,
    (unsigned __int8 *)aAi,
    (unsigned __int8 *)aGdibasedefense,
    COERCE_DOUBLE(__PAIR64__(v85, v86)));
    v88 = this->AICaptureLowPower[0];
    *(double *)&this->AICaptureWounded[1] = v87;
    this->AICaptureLowPower[0] = INIClass::ReadInt_Overwrite(
    (int)v99,
    (unsigned __int8 *)aAi,
    (unsigned __int8 *)aMaximumbasedef,
    v88);
    result = INIClass::ReadInt_Overwrite(
    (int)v99,
    (unsigned __int8 *)aAi,
    (unsigned __int8 *)aComputerbasede,
    this->AICaptureWounded[3]);
    this->AICaptureWounded[3] = result;
    LOBYTE(result) = 1;
    else
    LOBYTE(result) = 0;
    return result;
}

uint32_t * Rules::CopyDataArray(uint32_t *this, uint32_t *a2)
{
    int v3; // eax
    void *v4; // eax
    int v5; // ecx
    int v6; // eax
    if ( this == a2 )
    goto LABEL_8;
    (*(void (__thiscall **)(uint32_t *))(*this + 12))(this);
    v3 = a2[2];
    *(this + 2) = v3;
    if ( !v3 )
    *(this + 1) = 0;
    *((uint8_t *)this + 13) = 0;
    LABEL_8:
    *(this + 4) = a2[4];
    *(this + 5) = a2[5];
    return this;
    v4 = __2_YAPAXI_Z(4 * v3);
    *(this + 1) = v4;
    if ( !v4 )
    goto LABEL_8;
    v5 = *(this + 2);
    v6 = 0;
    *((uint8_t *)this + 13) = 1;
    if ( v5 <= 0 )
    goto LABEL_8;
    do
    *(uint32_t *)(*(this + 1) + 4 * v6) = *(uint32_t *)(a2[1] + 4 * v6);
    ++v6;
    while ( v6 < *(this + 2) );
    *(this + 4) = a2[4];
    *(this + 5) = a2[5];
    return this;
}

