# CW6 残墙工单（下一轮输入，2026-11-12）

性质：**只读产出**。数据源 = `.omo/decomp_batch/cw6_prep/plan.json`（CW6 备弹四态划分）
+ `.omo/decomp_batch/cw6_prep/cw6_result.json`（CW6 收割实测）。机器可读版 = `cw6_live_workorder.json`。

## 0. 三份清单的关系

| 清单 | 件数 | 含义 | 下一步 |
|---|---:|---|---|
| G5 live（当前代码残墙） | **194** | 末次编译就在 CW5 末期（当前生成器），非陈旧证据 | 新规则，按码分派 W1-W21 |
| C2440 全部 CF | **210**（live 192） | 最大单一族；192 live 含 G3 陈旧证据，收割后可再降 | W1 赋值站点 harmonize |
| CW6 收割后复败 | **110** | 本轮 947 stale 重跑后仍 CF，且**首错码已换新**（旧族已消，新族暴露） | 与 live 合并去重后作为下一轮靶集 |
| live 全量 | **817** | CW6 备弹 §3.1 的 live 桶（含 G0-G3 旧代际证据） | 优先 G5 子集 |

> 去重提示：复败 110 与 live 817 **无地址交集**（前者来自 stale 947，后者来自 live 划分），
> 但形态高度重叠（C2039/C2296/C2440/C2109/C2143/C2228/C2036/C2227 与 live 首错谱同族）。
> 下一轮建议靶集 = `g5_live(194) + refail(110) = 304`，再按 W 工单 ROI 排序。

## 1. G5 live（194）按首错码

| 首错 | 件 |
|---|---:|
| C2440 | 28 |
| C2664 | 24 |
| C2227 | 20 |
| C2039 | 19 |
| C2036 | 16 |
| C2065 | 12 |
| C2228 | 9 |
| C2446 | 9 |
| C2296 | 8 |
| C2673 | 6 |
| C2109 | 5 |
| C2562 | 5 |
| C2059 | 4 |
| C2653 | 4 |
| C2044 | 4 |
| C2660 | 3 |
| C2371 | 3 |
| C2143 | 3 |
| C2100 | 3 |
| C2064 | 3 |
| C2106 | 1 |
| C1004 | 1 |
| C2079 | 1 |
| C2197 | 1 |
| C4716 | 1 |
| C2679 | 1 |

### 1.1 G5 live 全清单（194）

| addr | layer | code | form | name | unit |
|---|---|---|---|---|---|
| 0x402040 | D | C2039 | real member absent from shell (B9) | AudioController::Constructor | AudioController |
| 0x406b10 | D | C2106 | unclassified | ObjectClass::InitializeAudioSubsystem | ObjectClass |
| 0x406ee0 | C | C2673 | unclassified | sub_406EE0 | _addr_40 |
| 0x40a090 | D | C2227 | global scalar ->member | TechnoClass::sub_40A090 | TechnoClass |
| 0x40d3c0 | C | C2673 | unclassified | sub_40D3C0 | _addr_40 |
| 0x40d400 | C | C2673 | unclassified | sub_40D400 | _addr_40 |
| 0x410800 | D | C2059 | other syntax | AbstractTypeClass::Constructor | AbstractTypeClass |
| 0x420f40 | D | C2228 | array-element .member | UpdateSpotlightsFoo | _addr_42 |
| 0x42b420 | D | C2440 | ptr->ptr type mismatch / assign | GeneratePathWaypoints | _addr_42 |
| 0x433040 | C | C2039 | real member absent from shell (B9) | BinkMovieHandle::RenderFrameToSurface | BinkMovieHandle |
| 0x4456d0 | D | C2039 | real member absent from shell (B9) | BuildingClass::UpdateSidebar | BuildingClass |
| 0x44d7d0 | D | C2039 | real member absent from shell (B9) | BuildingClass::GetTargetFacing | BuildingClass |
| 0x451690 | D | C2039 | real member absent from shell (B9) | BuildingClass::ClearSuperWeaponAnim | BuildingClass |
| 0x453240 | D | C2036 | pointer arithmetic on void*/incomplete type | BuildingClass::TraverseBridgeSegments | BuildingClass |
| 0x455820 | D | C2039 | real member absent from shell (B9) | BuildingClass::ScanCircleForUnits2 | BuildingClass |
| 0x455c20 | C | C2065 | type name not declared | TechnoClass::GetScreenCoords | TechnoClass |
| 0x471c90 | D | C2227 | param ->member (param typed scalar) | CaptureManagerClass::CanCapture | CaptureManagerClass |
| 0x474430 | D | C1004 | unclassified | CCINIClass::WriteDigest | CCINIClass |
| 0x4791f0 | D | C2039 | __tail_N shell gap | CD::LoadScenarioMixFiles | CD |
| 0x479a40 | D | C2673 | unclassified | sub_479A40 | _addr_47 |
| 0x47d210 | C | C2440 | ptr<->int other / assign | CellClass::SetWallOwner | CellClass |
| 0x4950c0 | B | C2039 | mNNN/m_N spelling gap | _BlitTransLucent50AlphaZRead_G::AddRef | _BlitTransLucent50AlphaZRead_G |
| 0x497b80 | B | C2039 | __pad_N shell gap | _RLEBlitTransLucent75Alpha_G::AddRef | _RLEBlitTransLucent75Alpha_G |
| 0x497e60 | B | C2039 | __pad_N shell gap | _RLEBlitTransLucent25Alpha_G::AddRef | _RLEBlitTransLucent25Alpha_G |
| 0x49be40 | D | C2109 | g_ global scalar subscript | MPCooperative::WriteCoopSaveINI | MPCooperative |
| 0x49d120 | D | C2109 | g_ global scalar subscript | MPCooperative::ReadCoopSaveINI | MPCooperative |
| 0x4a18f0 | D | C2228 | vfptr chain on scalar | BuildingClass::CreateCraterAtCell | BuildingClass |
| 0x4a2ab0 | D | C2660 | unclassified | CStreamClass::StreamRead | CStreamClass |
| 0x4a2cd0 | D | C2036 | pointer arithmetic on void*/incomplete type | CStreamClass::CopyStreamToBuffer | CStreamClass |
| 0x4a4780 | C | C2036 | void* member/element | Surface::CreateSurfacePalette | Surface |
| 0x4a8960 | D | C2440 | ptr<->int other / assign | DisplayClass::SetViewDimensions | DisplayClass |
| 0x4a8bf0 | D | C2296 | void* operand (mask/merge) | MouseClass::SetBounds | MouseClass |
| 0x4a8d50 | D | C2296 | void* operand (mask/merge) | MIXClass::CopyHeader | MIXClass |
| 0x4a95a0 | C | C2036 | global object-array member/element | MapClass::SetCellFlagsAlongPath | MapClass |
| 0x4a9650 | C | C2296 | typed pointer operand (mask/merge) | BuildingClass::MarkExitPath | BuildingClass |
| 0x4ad7e0 | D | C2036 | global object-array member/element | MapClass::SaveCellTagsToINI | MapClass |
| 0x4adba0 | D | C2036 | global object-array member/element | ScenarioClass::ProcessGame | ScenarioClass |
| 0x4af720 | C | C2440 | ptr->ptr type mismatch / assign | DriveLocomotionClass::QueryInterface | DriveLocomotionClass |
| 0x4b4b00 | B | C2296 | typed pointer operand (mask/merge) | DriveLocomotionClass::StubReturnZero_2 | DriveLocomotionClass |
| 0x4b64e0 | D | C2065 | other | JumpjetLocomotionClass::LoadLocomotionFromStream_0 | JumpjetLocomotionClass |
| 0x4ba5a0 | C | C2039 | offset-encoded name (u32_C/q123C) | DSurface::Construct | DSurface |
| 0x4c68e0 | C | C2371 | unclassified | ObjectClass::sub_4C68E0 | ObjectClass |
| 0x4cbba0 | C | C2660 | unclassified | FootClass::FindPathWithRetry | FootClass |
| 0x4cd510 | D | C2227 | other -> on scalar | JumpjetLocomotionClass::IsMapCoordVisible | JumpjetLocomotionClass |
| 0x4ce840 | D | C2227 | other -> on scalar | DropPod::ProcessLanding | DropPod |
| 0x4d1650 | D | C2065 | local vN lost | FoggedObjectClass::DestructFoggedObjectClass | FoggedObjectClass |
| 0x4d2bc0 | C | C2036 | void* member/element | _DynamicVectorClass_UDrawRecord_FoggedObjectClass::ResizeArray | _DynamicVectorClass_UDrawRecord_FoggedObjectClass |
| 0x4d9e70 | D | C2059 | other syntax | FootClass::CheckCohesion | FootClass |
| 0x4e43c0 | D | C2440 | ptr->ptr type mismatch / initializing | ObjectClass::InitGameDropdownColors | ObjectClass |
| 0x4f3b80 | D | C2228 | other .member on scalar | sub_4F3B80 | _addr_4F |
| 0x4feee0 | D | C2227 | param ->member (param typed scalar) | HouseClass::AIInfantryProduction | HouseClass |
| 0x501160 | D | C2036 | global object-array member/element | CCINIClass::WriteHouses | CCINIClass |
| 0x501750 | D | C2664 | CRT/Win32 / const mismatch | ObjectClass::sub_501750 | ObjectClass |
| 0x5054b0 | D | C2446 | int*/scalar compare | HouseClass::GenerateAIBuildListEnsureSanity | HouseClass |
| 0x509610 | C | C2036 | global object-array member/element | TriggerClass::ValidateTeamTriggerConditions | TriggerClass |
| 0x50a5c0 | D | C2446 | int*/scalar compare | HouseClass::AIBuildBase | HouseClass |
| 0x511850 | D | C2059 | other syntax | HouseTypeClass::LoadFromINI | HouseTypeClass |
| 0x52fc20 | D | C2143 | other syntax | TechnoClass::InitRandomSeed | TechnoClass |
| 0x530000 | D | C2079 | unclassified | ObjectClass::LoadExpansionMixFiles | ObjectClass |
| 0x537530 | C | C2296 | void* operand (mask/merge) | View3CommandClass::performAction_158 | View3CommandClass |
| 0x53fbd0 | C | C2664 | project stub/registry proto / const mismatch | IPXGlobalConnClass::Flush | IPXGlobalConnClass |
| 0x542520 | C | C2036 | void* member/element | IPXManagerClass::ProcessQueue | IPXManagerClass |
| 0x54b8d0 | C | C2227 | other -> on scalar | JumpjetLocomotionClass::ConvertCoordToCell_0 | JumpjetLocomotionClass |
| 0x54d0f0 | D | C2227 | other -> on scalar | JumpjetLocomotion::UpdateFacing | JumpjetLocomotion |
| 0x559d60 | D | C2036 | pointer arithmetic on void*/incomplete type | LoadOptions::AddRef | LoadOptions |
| 0x55a970 | C | C2660 | unclassified | LocomotionClass::ReleaseRef | LocomotionClass |
| 0x583180 | D | C2664 | project stub/registry proto / int->ptr | Pathfinding::CrossBridge | Pathfinding |
| 0x583ad0 | D | C2440 | void* -> int / assign | ObjectClass::sub_583AD0 | ObjectClass |
| 0x58a630 | D | C2440 | ptr<->int other / assign | _DynamicVectorClass_U_HashObject_II::Constructor | _DynamicVectorClass_U_HashObject_II |
| 0x58bb30 | B | C2440 | ptr->ptr type mismatch / assign | ScenarioClass::CopyStartPositions | ScenarioClass |
| 0x58ef10 | D | C2664 | project stub/registry proto / value | ObjectClass::ResetMapState | ObjectClass |
| 0x5b57d0 | D | C2653 | unclassified | ObjectClass::sub_5B57D0 | ObjectClass |
| 0x5b9550 | D | C2664 | other callee / const mismatch | ModemGuest::UpdateGuestPlayerInfo | ModemGuest |
| 0x5bb6e0 | D | C2664 | project stub/registry proto / ptr->int | Modem::EnumerateDevices | Modem |
| 0x5c1300 | D | C2440 | void* -> int / assign | ObjectClass::ReadMPMapsINI | ObjectClass |
| 0x5c2de0 | C | C2440 | int -> void* / assign | MPCooperative::selectTeam | MPCooperative |
| 0x5cc110 | D | C2440 | ptr->ptr type mismatch / assign | MSFadeAnim::DrawConstructionFrame | MSFadeAnim |
| 0x5cc550 | D | C2065 | local vN lost | MSOverlayAnim::DrawPlacementPreview | MSOverlayAnim |
| 0x5cd0e0 | C | C2228 | other .member on scalar | MSVQAnim::Play | MSVQAnim |
| 0x5ce330 | D | C2664 | other callee / int->ptr | ObjectClass::sub_5CE330 | ObjectClass |
| 0x5ce640 | D | C2440 | ptr<->int other / assign | MSPCXAnim::Construct | MSPCXAnim |
| 0x5ce7d0 | D | C2065 | other | MSPCXAnim::Load | MSPCXAnim |
| 0x5d1b30 | D | C2562 | unclassified | MSEngine::Destruct | MSEngine |
| 0x5d3a60 | D | C2562 | unclassified | MessageListClass::Init | MessageListClass |
| 0x5d4b20 | C | C2440 | ptr->ptr type mismatch / assign | WideString::WordWrap | WideString |
| 0x5d67b0 | D | C2109 | member scalar subscript (->M[i]) | GameConfig::Constructor | GameConfig |
| 0x5e8590 | D | C2653 | unclassified | ObjectClass::SkirmishSetup_Setup_5E8590 | ObjectClass |
| 0x5eacd0 | C | C2440 | ptr<->int other / initializing | ObjectClass::RefreshLobbyAll_Get_5EACD0 | ObjectClass |
| 0x5eb060 | D | C2446 | class pointer/int compare | Lobby::UpdatePlayerLabels | Lobby |
| 0x5f1fa0 | D | C2664 | project stub/registry proto / ptr->int | NullModemClass::DetectModem | NullModemClass |
| 0x5f60a0 | D | C2227 | other -> on scalar | ObjectClass::SetCellOverlayFlag | ObjectClass |
| 0x5fea50 | D | C2039 | real member absent from shell (B9) | OverlayTypeClass::PowerDrainUpdate | OverlayTypeClass |
| 0x60c4a0 | C | C2065 | other | SkirmishDialog::ResizeDialogAndEnum | SkirmishDialog |
| 0x62dc50 | D | C2227 | other -> on scalar | ParticleSystemClass::Constructor | ParticleSystemClass |
| 0x62e4c0 | D | C2036 | void* member/element | ParticleClass::CreateInstance | ParticleClass |
| 0x635490 | D | C2440 | ptr->ptr type mismatch / initializing | ObjectClass::Render_Render_635490 | ObjectClass |
| 0x6386e0 | D | C2562 | unclassified | ClearFactoryClassProduction | _addr_63 |
| 0x63d0f0 | B | C2296 | char*/char[] operand | ObjectClass::Render_Render_63D0F0 | ObjectClass |
| 0x63d2d0 | B | C2296 | char*/char[] operand | ObjectClass::sub_63D2D0 | ObjectClass |
| 0x64a630 | D | C2653 | unclassified | ProcessNetworkMessage | _addr_64 |
| 0x652cf0 | C | C2059 | other syntax | RadarClass::Destru_vt05 | RadarClass |
| 0x653f50 | C | C2065 | pseudo local/loop name | RadarClass::DrawWrapper | RadarClass |
| 0x655a90 | D | C2039 | offset-encoded name (u32_C/q123C) | TacticalClass::FreeResources | TacticalClass |
| 0x660840 | D | C2197 | unclassified | LoadGame::LoadTriggerEvents | LoadGame |
| 0x679cc0 | D | C4716 | unclassified | sub_679CC0 | _addr_67 |
| 0x679f70 | C | C2440 | member->void* init / initializing | VectorClass::Dtor | VectorClass |
| 0x67bb10 | D | C2446 | int*/scalar compare | ReadINIClassInfantryTypeList | _addr_67 |
| 0x68ad70 | D | C2664 | project stub/registry proto / int->ptr | ScenarioClass::SaveToINI | ScenarioClass |
| 0x68bdc0 | C | C2440 | ptr->ptr type mismatch / assign | ScenarioClass::ReadWaypoints | ScenarioClass |
| 0x690a10 | D | C2440 | int -> void* / initializing | ScoreScreen::LoadScoreFont | ScoreScreen |
| 0x691970 | D | C2227 | param ->member (param typed scalar) | ScoreScreenClass::ProcessFrame | ScoreScreenClass |
| 0x6964c0 | D | C2065 | IDA param name aN | NetworkDialog::Dispatch | NetworkDialog |
| 0x6990a0 | D | C2065 | other | TechnoClass::SaveConfigWOL | TechnoClass |
| 0x69b7e0 | C | C2039 | real member absent from shell (B9) | SessionClass::AssignColor | SessionClass |
| 0x69e930 | C | C2039 | vtable/ctor member store | MixFileClass::CacheNode_Dtor | MixFileClass |
| 0x6a4130 | B | C2227 | member chain this->M-> | ShipLocomotionClass::StubReturnZero_15 | ShipLocomotionClass |
| 0x6acd60 | D | C2227 | global scalar ->member | Skirmish::EnableSpawnButtons | Skirmish |
| 0x6b0300 | D | C2039 | real member absent from shell (B9) | BuildingClass::FindPlacementCells2 | BuildingClass |
| 0x6b56d0 | D | C2036 | global object-array member/element | SmudgeTypeClass::GetSize | SmudgeTypeClass |
| 0x6bf690 | D | C2227 | other -> on scalar | _TClassFactory_VSuperClass::ddtor | _TClassFactory_VSuperClass |
| 0x6c0a10 | D | C2227 | other -> on scalar | _TClassFactory_VSpawnManagerClass::ddtor | _TClassFactory_VSpawnManagerClass |
| 0x6c2c90 | D | C2227 | other -> on scalar | _TClassFactory_VInfantryTypeClass::GetClassIdentifier | _TClassFactory_VInfantryTypeClass |
| 0x6c3890 | D | C2227 | other -> on scalar | _TClassFactory_VInfantryClass::ddtor | _TClassFactory_VInfantryClass |
| 0x6c4010 | D | C2227 | other -> on scalar | _TClassFactory_VDriveLocomotionClass::ddtor | _TClassFactory_VDriveLocomotionClass |
| 0x6c9c60 | C | C2039 | mNNN/m_N spelling gap | BinkMovie::CheckKeyframeTransition | BinkMovie |
| 0x6d5c50 | D | C2664 | other callee / ptr->int | TechnoClass::RenderRadarBlips | TechnoClass |
| 0x6d7c00 | D | C2679 | unclassified | TacticalClass::DrawTerrain | TacticalClass |
| 0x6e1780 | D | C2100 | other | TActionClass::PlayAudioAtRandomWP | TActionClass |
| 0x6e35f0 | D | C2664 | project stub/registry proto / ptr->int | ObjectClass::sub_6E35F0 | ObjectClass |
| 0x6ea3e0 | C | C2228 | Type object member missing | TeamClass::UpdateReadinessState | TeamClass |
| 0x6ee310 | D | C2228 | vfptr chain on scalar | TeamClass::SelectAreaAttackTarget | TeamClass |
| 0x6ee3f0 | D | C2228 | vfptr chain on scalar | TeamClass::ProcessTeamMovement | TeamClass |
| 0x6f79a0 | D | C2664 | other callee / ptr->int | TechnoClass::GetBridgeDamageMult | TechnoClass |
| 0x6fda00 | D | C2664 | other callee / ptr->int | TechnoClass::GetFiringAngle | TechnoClass |
| 0x703860 | D | C2143 | other syntax | TechnoClass::UpdatePowerDrain | TechnoClass |
| 0x703e70 | D | C2664 | other callee / ptr->int | TechnoClass::ScanNeighborCells | TechnoClass |
| 0x7049c0 | D | C2036 | void* member/element | DrawTacticalMapLine | _addr_70 |
| 0x7090a0 | D | C2664 | project stub/registry proto / int->ptr | TechnoClass::VoiceAttack | TechnoClass |
| 0x70e920 | D | C2036 | void* member/element | UpdateTimedStateMachine | _addr_70 |
| 0x711840 | D | C2446 | class pointer/int compare | TechnoTypeClass::Construct | TechnoTypeClass |
| 0x71ab60 | C | C2446 | int*/scalar compare | ObjectClass::UnlinkFromFactory | ObjectClass |
| 0x71ff20 | C | C2065 | IDA param name aN | TextButtonClass::sub_71FF20 | TextButtonClass |
| 0x720590 | D | C2664 | CRT/Win32 / ptr->ptr | ThemeClass::InitializeThemes | ThemeClass |
| 0x7248c0 | C | C2440 | ptr->ptr const mismatch / assign | TooltipClass::GetText | TooltipClass |
| 0x72d730 | C | C2036 | DataGlobal/IDA-global subscript arithmetic | Game::LoadMultiplayerScoreAssets | Game |
| 0x737180 | D | C2143 | other syntax | TechnoClass::UpdateInfantryIdleWander | TechnoClass |
| 0x73e5e0 | D | C2227 | global scalar ->member | VoxelTypeClass::ReadINI | VoxelTypeClass |
| 0x7438f0 | D | C2227 | global scalar ->member | UnitClass::CanCrushTarget | UnitClass |
| 0x749b20 | C | C2227 | other -> on scalar | VoxelAnimClass::DrawVoxelFrame | VoxelAnimClass |
| 0x74d670 | C | C2440 | ptr->ptr type mismatch / assign | ObjectClass::IsCellSuitableForPlacement | ObjectClass |
| 0x74fdc0 | D | C2664 | other callee / const mismatch | GetModuleVersion | _addr_74 |
| 0x7510d0 | D | C2446 | int*/scalar compare | Audio::InitFromINI | Audio |
| 0x753e00 | B | C2109 | g_ global scalar subscript | Viewport::Clear | Viewport |
| 0x755db0 | D | C2664 | other callee / ptr->int | Voxel::SortDepth | Voxel |
| 0x757360 | D | C2109 | g_ global scalar subscript | ObjectClass::ProcessVoxelDepthSamples | ObjectClass |
| 0x75c680 | D | C2039 | real member absent from shell (B9) | WalkLocomotionClass::BeginMove | WalkLocomotionClass |
| 0x75cbe0 | C | C2039 | real member absent from shell (B9) | WalkLocomotionClass::ProcessMove | WalkLocomotionClass |
| 0x762af0 | D | C2664 | other callee / ptr->int | Voxel::TransformMatrix | Voxel |
| 0x764b90 | D | C2440 | ptr<->int other / assign | ReferenceCounted::CampaignConstructorWDT | ReferenceCounted |
| 0x765000 | D | C2664 | project stub/registry proto / int->ptr | sub_765000 | _addr_76 |
| 0x766880 | D | C2228 | other .member on scalar | rc_ptr::System_Init_766880 | rc_ptr |
| 0x76e2f0 | D | C2440 | ptr->ptr type mismatch / initializing | ObjectClass::Team_Start_76E2F0 | ObjectClass |
| 0x770f10 | D | C2440 | ptr->ptr type mismatch / initializing | ObjectClass::sub_770F10 | ObjectClass |
| 0x7712c0 | D | C2562 | unclassified | ScoreScreen::RemoveItem | ScoreScreen |
| 0x773600 | D | C2065 | other | WebBrowser::LoadURLFromRegistry | WebBrowser |
| 0x7759e0 | D | C2446 | void*/int compare | MessageDialogLoopAlt | _addr_77 |
| 0x778210 | D | C2440 | ptr->ptr type mismatch / initializing | ScoreScreen::DrawSHPBackground | ScoreScreen |
| 0x779dd0 | D | C2440 | ptr->ptr type mismatch / initializing | ObjectClass::LoadConfigWOL | ObjectClass |
| 0x779f10 | D | C2440 | ptr->ptr type mismatch / initializing | ObjectClass::SavePersonaConfigWOL | ObjectClass |
| 0x77bcb0 | D | C2446 | void*/int compare | sub_77BCB0 | _addr_77 |
| 0x788800 | D | C2673 | unclassified | LeaveChannelExWOL | _addr_78 |
| 0x7937b0 | D | C2664 | project stub/registry proto / ptr->int | CComObject_CChatEventSink___ATL::DispatchConnectionPairs | CComObject_CChatEventSink___ATL |
| 0x79ba60 | D | C2673 | unclassified | ValidateGameJoinWOL | _addr_79 |
| 0x7a16b0 | D | C2653 | unclassified | HandleWOLMatchMessage | _addr_7A |
| 0x7a2730 | C | C2296 | char*/char[] operand | ObjectClass::Network_Create_7A2730 | ObjectClass |
| 0x7aa870 | D | C2064 | unclassified | CChatEventSink::HandleChatChannelList | CChatEventSink |
| 0x7abd40 | D | C2064 | unclassified | CChatEventSink::DispatchStub_34 | CChatEventSink |
| 0x7b0220 | D | C2664 | other callee / ptr->int | ComStreamClass::seekToPosition | ComStreamClass |
| 0x7b60e0 | D | C2440 | ptr->ptr const mismatch / initializing | ObjectClass::sub_7B60E0 | ObjectClass |
| 0x7b6760 | C | C2562 | unclassified | DeleteAndZero::Alt | DeleteAndZero |
| 0x7b68e0 | D | C2664 | CRT/Win32 / ptr->ptr | WideString::Reassign_Alt | WideString |
| 0x7b6ee0 | C | C2228 | vfptr chain on scalar | ObjectClass::sub_7B6EE0 | ObjectClass |
| 0x7b7f90 | D | C2664 | CRT/Win32 / ptr->ptr | ToWideStringCharAlt | _addr_7B |
| 0x7cc309 | D | C2100 | other | __mbstowcs_lk | _addr_7C |
| 0x7d5ac0 | D | C2440 | value cast / initializing | __setenvp | _addr_7D |
| 0x7d6830 | D | C2100 | global scalar deref | ___init_monetary | _addr_7D |
| 0x7d68fb | D | C2371 | unclassified | __get_lc_lconv | _addr_7D |
| 0x7d73f9 | D | C2064 | unclassified | _TestDefaultLanguage | _addr_7D |
| 0x7d7491 | C | C2065 | other | _crtGetLocaleInfoA_16 | _addr_7D |
| 0x7daf28 | D | C2371 | unclassified | ___getlocaleinfo | _addr_7D |
| 0x7df280 | B | C2044 | unclassified | Object_Calc_7DF280 | Object_Calc |
| 0x7df3c2 | B | C2044 | unclassified | Object_Calc_7DF3C2 | Object_Calc |
| 0x7df500 | B | C2044 | unclassified | Object_Calc_7DF500 | Object_Calc |
| 0x7df640 | B | C2044 | unclassified | Object_Calc_7DF640 | Object_Calc |

## 2. C2440（CF 210，live 192）

层分布：{"A": 51, "C": 55, "D": 78, "B": 8}

### 2.1 C2440 live 全清单（192）

| addr | layer | gen | form | name | unit |
|---|---|---|---|---|---|
| 0x406170 | A | G2_asweep_preCW4 | ptr<->int other / type cast | VocClass::Check | VocClass |
| 0x408a70 | A | G_R5toR8 | ptr->ptr type mismatch / assign | AudioMixer::SetupChannels | AudioMixer |
| 0x40ffff | A | G2_asweep_preCW4 | value cast / type cast | Math::InitDegToRad | Math |
| 0x4112d0 | C | G3_CW3 | member->void* init (scalar member, ptr local) / initializing | MapClass::isLocationShrouded | MapClass |
| 0x416d50 | D | G3_CW3 | ptr->ptr type mismatch / assign | Carryall::MissionStateMachine | Carryall |
| 0x41cbf0 | A | G2_asweep_preCW4 | void* -> int / assign | AircraftTypeClass::vt_entry_7C | AircraftTypeClass |
| 0x41cfe0 | D | G3_CW3 | void* -> int / assign | AircraftTypeClass::ddtor | AircraftTypeClass |
| 0x41dc80 | A | G2_asweep_preCW4 | ptr->ptr type mismatch / assign | AirstrikeClass::RemoveAircraft | AirstrikeClass |
| 0x426270 | D | G3_CW3 | ptr->ptr type mismatch / initializing | AnimClass::UpdateDamageRadius | AnimClass |
| 0x42b420 | D | G5_CW5 | ptr->ptr type mismatch / assign | GeneratePathWaypoints | _addr_42 |
| 0x42df90 | D | G3_CW3 | ptr<->int other / initializing | Base64Straw::ProcessFrame | Base64Straw |
| 0x438210 | D | G3_CW3 | ptr<->int other / initializing | BlowStraw::Get | BlowStraw |
| 0x44f640 | C | G3_CW3 | int -> void* / assign | BuildingClass::GetFactoryPosition | BuildingClass |
| 0x457aa0 | D | G3_CW3 | ptr->ptr type mismatch / assign | BuildingClass::CreateFoggedObjects | BuildingClass |
| 0x46b960 | A | G2_asweep_preCW4 | ptr<->int other / type cast | BulletClass::AddVector3 | BulletClass |
| 0x474940 | C | G3_CW3 | ptr->ptr type mismatch / initializing | ObjectTypeClass::loadTypeMember_5474940 | ObjectTypeClass |
| 0x475540 | D | G3_CW3 | ptr->ptr type mismatch / assign | SuperWeaponTypeClass::FindOrCreate | SuperWeaponTypeClass |
| 0x47d210 | C | G5_CW5 | ptr<->int other / assign | CellClass::SetWallOwner | CellClass |
| 0x47e470 | D | G3_CW3 | ptr->ptr type mismatch / initializing | SetCellClassOccupancyFlags | _addr_47 |
| 0x484050 | D | G3_CW3 | ptr->ptr type mismatch / assign | Tactical::CreateTacticalLightSurface | Tactical |
| 0x484d60 | D | G3_CW3 | ptr->ptr type mismatch / initializing | InfantryClass::CanMoveThroughCell | InfantryClass |
| 0x486d90 | C | G3_CW3 | ptr->ptr type mismatch / assign | ObjectClass::sub_486D90 | ObjectClass |
| 0x487630 | A | G2_asweep_preCW4 | member->void* init (scalar member, ptr local) / initializing | DisplayClass::UpdateDisplayTimer | DisplayClass |
| 0x487690 | A | G2_asweep_preCW4 | ptr->ptr type mismatch / assign | DisplayClass::AdvanceFrameCounter | DisplayClass |
| 0x48bf40 | D | G3_CW3 | ptr<->int other / assign | ConnectionClass::sendAck | ConnectionClass |
| 0x49e8e0 | A | G2_asweep_preCW4 | ptr<->int other / assign | INISectionList::Constructor | INISectionList |
| 0x4a1c10 | A | G2_asweep_preCW4 | member->void* init (scalar member, ptr local) / initializing | Power::FinalizeDrain | Power |
| 0x4a1ca0 | A | G0_preCW2_census | member->void* init (scalar member, ptr local) / initializing | Power::FlagProcess | Power |
| 0x4a71a0 | D | G3_CW3 | int -> void* / assign | DiskLaserClass::Fire | DiskLaserClass |
| 0x4a8960 | D | G5_CW5 | ptr<->int other / assign | DisplayClass::SetViewDimensions | DisplayClass |
| 0x4ac8c0 | C | G3_CW3 | int -> void* / assign | BuildingClass::TogglePower2 | BuildingClass |
| 0x4acac0 | D | G3_CW3 | ptr->ptr type mismatch / assign | MapClass::ProcessVisibilityFlags | MapClass |
| 0x4acda0 | D | G3_CW3 | ptr->ptr type mismatch / assign | MapClass::RevealCell | MapClass |
| 0x4af720 | C | G5_CW5 | ptr->ptr type mismatch / assign | DriveLocomotionClass::QueryInterface | DriveLocomotionClass |
| 0x4b0c40 | C | G3_CW3 | ptr->ptr type mismatch / assign | DriveLocomotionClass::SetWaypointTarget | DriveLocomotionClass |
| 0x4c3c90 | C | G3_CW3 | ptr<->int other / assign | ObjectClass::sub_4C3C90 | ObjectClass |
| 0x4c58c0 | C | G3_CW3 | ptr->ptr type mismatch / assign | EMPulseClass::IterateCellsInRadius | EMPulseClass |
| 0x4c9e60 | A | G2_asweep_preCW4 | ptr->ptr type mismatch / assign | FactoryClass::StartProduction | FactoryClass |
| 0x4c9ea0 | C | G3_CW3 | ptr->ptr type mismatch / assign | ProductionClass::StartTimer | ProductionClass |
| 0x4caa70 | C | G3_CW3 | ptr->ptr type mismatch / assign | DynamicVector::executeScriptAction | DynamicVector |
| 0x4de710 | C | G3_CW3 | ptr<->int other / type cast | FootClass::PopAndProcess | FootClass |
| 0x4e43c0 | D | G5_CW5 | ptr->ptr type mismatch / initializing | ObjectClass::InitGameDropdownColors | ObjectClass |
| 0x4f2a60 | C | G3_CW3 | ptr->ptr type mismatch / assign | DynamicVector::processWaypointPlanning | DynamicVector |
| 0x4f9b70 | D | G3_CW3 | value cast / type cast | HouseClass::HandleAlliance | HouseClass |
| 0x4fa350 | D | G3_CW3 | ptr->ptr type mismatch / assign | Sidebar::StartSidebarProduction | Sidebar |
| 0x4fb840 | D | G3_CW3 | ptr<->int other / assign | BuildingPlacement::Activate | BuildingPlacement |
| 0x4fbe40 | D | G3_CW3 | ptr->ptr type mismatch / assign | HouseClass::IsCellOccupied | HouseClass |
| 0x4fd060 | C | G3_CW3 | ptr<->int other / type cast | HouseClass::FindBuildingOfType | HouseClass |
| 0x5090f0 | A | G2_asweep_preCW4 | member->void* init (scalar member, ptr local) / initializing | Radar::IsRadarTargetEligible | Radar |
| 0x50bcd0 | A | G2_asweep_preCW4 | ptr->ptr type mismatch / initializing | HouseClass::CreateRadarOutage | HouseClass |
| 0x50e0e0 | C | G3_CW3 | ptr<->int other / type cast | HouseClass::LostPoweredCenter | HouseClass |
| 0x510820 | A | G2_asweep_preCW4 | ptr->ptr type mismatch / initializing | HouseClass::processAIEvents | HouseClass |
| 0x5239d0 | D | G3_CW3 | ptr<->int other / assign | InfantryClass::DTOR | InfantryClass |
| 0x52b170 | C | G3_CW3 | value cast / assign | SortedArray::Find | SortedArray |
| 0x52b390 | C | G3_CW3 | value cast / assign | HashTable::BinarySearch | HashTable |
| 0x538280 | C | G3_CW3 | value cast / type cast | StopCommandClass::performAction_221 | StopCommandClass |
| 0x538980 | C | G3_CW3 | value cast / assign | SortedArray::FindPair | SortedArray |
| 0x53ece0 | A | G2_asweep_preCW4 | ptr<->int other / initializing | NetworkAddress::Assign | NetworkAddress |
| 0x540670 | D | G3_CW3 | ptr<->int other / assign | IPXGlobalConnClass::QueryInterface | IPXGlobalConnClass |
| 0x540fc0 | A | G2_asweep_preCW4 | member->void* init (scalar member, ptr local) / initializing | Network::GetClass | Network |
| 0x541000 | A | G2_asweep_preCW4 | member->void* init (scalar member, ptr local) / initializing | Network::FindPlayerByID | Network |
| 0x54fe60 | C | G3_CW3 | ptr->ptr type mismatch / initializing | TimerClass::Construct | TimerClass |
| 0x551e50 | B | G3_CW3 | ptr->ptr type mismatch / assign | DecompressCoreLCW | _addr_55 |
| 0x554370 | D | G3_CW3 | ptr<->int other / assign | LoadProgressMgr::ReleaseBuffer | LoadProgressMgr |
| 0x556640 | A | G0_preCW2_census | ptr->ptr type mismatch / assign | LinkClass::FindPrev | LinkClass |
| 0x556670 | A | G2_asweep_preCW4 | ptr->ptr type mismatch / assign | LinkClass::FindNext | LinkClass |
| 0x556b70 | A | G2_asweep_preCW4 | ptr->ptr to void** / assign | ObjectClass::Render_Render_556B70 | ObjectClass |
| 0x55c0e0 | B | G3_CW3 | ptr->ptr type mismatch / assign | DecodeBlockLCW | _addr_55 |
| 0x568350 | A | G2_asweep_preCW4 | member->void* init (scalar member, ptr local) / initializing | Tactical::IsCellVisible | Tactical |
| 0x578710 | C | G3_CW3 | member->void* init (scalar member, ptr local) / initializing | MapClass::SpiralSearch | MapClass |
| 0x578880 | D | G3_CW3 | int -> void* / assign | MapClass::FastCellLookup | MapClass |
| 0x578e60 | D | G3_CW3 | ptr->ptr type mismatch / assign | CreateMapObject | _addr_57 |
| 0x583ad0 | D | G5_CW5 | void* -> int / assign | ObjectClass::sub_583AD0 | ObjectClass |
| 0x58a630 | D | G5_CW5 | ptr<->int other / assign | _DynamicVectorClass_U_HashObject_II::Constructor | _DynamicVectorClass_U_HashObject_II |
| 0x58bb30 | B | G5_CW5 | ptr->ptr type mismatch / assign | ScenarioClass::CopyStartPositions | ScenarioClass |
| 0x591d80 | D | G3_CW3 | ptr->ptr type mismatch / assign | MapSeed::PlaceCityBuildings | MapSeed |
| 0x5a33f0 | D | G3_CW3 | ptr->ptr type mismatch / assign | ObjectClass::GenerateTerrainHeightMapInternal | ObjectClass |
| 0x5a7e90 | C | G3_CW3 | ptr->ptr type mismatch / assign | Object_Helper_5A7E90 | Object_Helper |
| 0x5a89d0 | D | G3_CW3 | ptr->ptr type mismatch / assign | ScheduleMapSeedBuildings | _addr_5A |
| 0x5aead0 | A | G2_asweep_preCW4 | ptr<->int other / type cast | BuildingClass::processBaseExpansion | BuildingClass |
| 0x5aeaf0 | A | G2_asweep_preCW4 | ptr<->int other / type cast | BuildingClass::updateFoundation | BuildingClass |
| 0x5aeb20 | A | G2_asweep_preCW4 | ptr<->int other / type cast | BuildingClass::recalcAdjacency | BuildingClass |
| 0x5af120 | A | G2_asweep_preCW4 | ptr<->int other / initializing | ObjectClass::sub_5AF120 | ObjectClass |
| 0x5b2da0 | C | G3_CW3 | ptr->ptr type mismatch / initializing | MissionClass::Constructor | MissionClass |
| 0x5b4270 | C | G3_CW3 | ptr->ptr type mismatch / initializing | HashTree::MarkEntry | HashTree |
| 0x5b4310 | C | G3_CW3 | ptr->ptr type mismatch / initializing | WinMainSetup_Setup_5B4310 | WinMainSetup_Setup |
| 0x5c0630 | A | G2_asweep_preCW4 | value cast / type cast | MovieHandle::sub_5C0630 | MovieHandle |
| 0x5c1300 | D | G5_CW5 | void* -> int / assign | ObjectClass::ReadMPMapsINI | ObjectClass |
| 0x5c1640 | D | G3_CW3 | ptr<->int other / assign | MPCooperative::MPCooperative_Cleanup | MPCooperative |
| 0x5c2de0 | C | G5_CW5 | int -> void* / assign | MPCooperative::selectTeam | MPCooperative |
| 0x5c6660 | B | G3_CW3 | ptr->ptr type mismatch / assign | RotateBitBufferRight | _addr_5C |
| 0x5c67a0 | B | G3_CW3 | ptr->ptr type mismatch / assign | RotateBitBufferLeft | _addr_5C |
| 0x5c71e0 | B | G3_CW3 | ptr->ptr type mismatch / assign | ShiftBigIntAndScan | _addr_5C |
| 0x5c8500 | D | G3_CW3 | ptr->ptr type mismatch / assign | ModBigIntExp | _addr_5C |
| 0x5cc110 | D | G5_CW5 | ptr->ptr type mismatch / assign | MSFadeAnim::DrawConstructionFrame | MSFadeAnim |
| 0x5ce640 | D | G5_CW5 | ptr<->int other / assign | MSPCXAnim::Construct | MSPCXAnim |
| 0x5cf760 | D | G3_CW3 | ptr->ptr const mismatch / initializing | CampaignClass::DeleteAndZero | CampaignClass |
| 0x5cf840 | D | G3_CW3 | ptr->ptr const mismatch / initializing | ObjectClass::sub_5CF840 | ObjectClass |
| 0x5d4b20 | C | G5_CW5 | ptr->ptr type mismatch / assign | WideString::WordWrap | WideString |
| 0x5d74a0 | C | G3_CW3 | ptr->ptr type mismatch / initializing | MultiplayerGameMode::InitAlliances | MultiplayerGameMode |
| 0x5d8270 | C | G3_CW3 | ptr->ptr type mismatch / initializing | AbstractClass::applyRevealToCell | AbstractClass |
| 0x5eacd0 | C | G5_CW5 | ptr<->int other / initializing | ObjectClass::RefreshLobbyAll_Get_5EACD0 | ObjectClass |
| 0x610950 | D | G3_CW3 | ptr->ptr type mismatch / assign | TriggerClass::FindByEventType | TriggerClass |
| 0x6234b0 | D | G3_CW3 | ptr<->int other / assign | SymbolTable::Rebuild | SymbolTable |
| 0x625560 | D | G3_CW3 | ptr<->int other / assign | Options::DestroyComposite | Options |
| 0x626ab0 | D | G3_CW3 | ptr->ptr type mismatch / assign | System_Read | System |
| 0x627170 | D | G3_CW3 | void* -> int / assign | FileSystem::findFile | FileSystem |
| 0x62f9a0 | D | G3_CW3 | ptr->ptr type mismatch / assign | ObjectClass::UpdateBuildingDamageParticles | ObjectClass |
| 0x634290 | A | G0_preCW2_census | member->void* init (scalar member, ptr local) / initializing | Array::FindValue | Array |
| 0x634e10 | D | G3_CW3 | ptr->ptr type mismatch / assign | ScriptAction::PlaceObject | ScriptAction |
| 0x635490 | D | G5_CW5 | ptr->ptr type mismatch / initializing | ObjectClass::Render_Render_635490 | ObjectClass |
| 0x635e90 | C | G3_CW3 | ptr->ptr type mismatch / initializing | ObjectClass::sub_635E90 | ObjectClass |
| 0x636570 | A | G2_asweep_preCW4 | int -> void* / assign | ScriptAction::Check | ScriptAction |
| 0x636ce0 | A | G_R5toR8 | int -> void* / assign | ScriptAction::ClearBuildingState | ScriptAction |
| 0x636e60 | A | G2_asweep_preCW4 | member->void* init / initializing | ArrayClass::GetAt_Wrap | ArrayClass |
| 0x636f00 | A | G2_asweep_preCW4 | ptr->ptr type mismatch / assign | ObjectClass::sub_636F00 | ObjectClass |
| 0x637060 | A | G_R5toR8 | ptr<->int other / assign | TabClass::processTabInput | TabClass |
| 0x639a50 | D | G3_CW3 | ptr->ptr type mismatch / assign | ScriptAction::ExecutePlacement | ScriptAction |
| 0x63a4a0 | A | G2_asweep_preCW4 | ptr<->int other / assign | ObjectClass::sub_63A4A0 | ObjectClass |
| 0x63ad30 | A | G2_asweep_preCW4 | ptr<->int other / assign | ObjectClass::sub_63AD30 | ObjectClass |
| 0x63b080 | A | G2_asweep_preCW4 | ptr<->int other / assign | ObjectClass::sub_63B080 | ObjectClass |
| 0x63e880 | C | G3_CW3 | member->void* init (scalar member, ptr local) / initializing | SidebarClass::addToList | SidebarClass |
| 0x63f2e0 | B | G3_CW3 | ptr->ptr type mismatch / assign | Audio_Process | Audio |
| 0x649ca0 | D | G3_CW3 | ptr<->int other / assign | BuildNetworkEventPacket | _addr_64 |
| 0x65ad50 | A | G2_asweep_preCW4 | int -> void* / assign | Array::Contains | Array |
| 0x65adf0 | A | G2_asweep_preCW4 | int -> void* / assign | Array::ContainsValue | Array |
| 0x65ae30 | A | G2_asweep_preCW4 | int -> void* / assign | Team::AllMembersValid | Team |
| 0x65c250 | C | G3_CW3 | ptr<->int other / assign | RAMFileClass::WinMain_Helper_65C250 | RAMFileClass |
| 0x65cbf0 | D | G3_CW3 | value cast / type cast | RawFileClass::Open | RawFileClass |
| 0x65d8e0 | D | G3_CW3 | value cast / type cast | DeployScriptActionPlane | _addr_65 |
| 0x663d60 | A | G2_asweep_preCW4 | int -> void* / assign | Factory::GetLinkedIndex | Factory |
| 0x679f70 | C | G5_CW5 | member->void* init / initializing | VectorClass::Dtor | VectorClass |
| 0x6824b0 | D | G3_CW3 | ptr->ptr to void** / assign | Map_Read_6824B0 | Map_Read |
| 0x6896c0 | C | G3_CW3 | ptr<->int other / assign | ScenarioClass::SetCountryFlag | ScenarioClass |
| 0x68bdc0 | C | G5_CW5 | ptr->ptr type mismatch / assign | ScenarioClass::ReadWaypoints | ScenarioClass |
| 0x68c710 | C | G3_CW3 | ptr<->int other / assign | FontClass::InitMetrics | FontClass |
| 0x68ca50 | C | G3_CW3 | ptr->ptr type mismatch / initializing | FindBuildingAnimByName | _addr_68 |
| 0x68cab0 | C | G3_CW3 | ptr->ptr type mismatch / initializing | Network_Assign | Network |
| 0x690a10 | D | G5_CW5 | int -> void* / initializing | ScoreScreen::LoadScoreFont | ScoreScreen |
| 0x697e70 | C | G3_CW3 | ptr->ptr type mismatch / assign | SessionClass::IsValidHouse | SessionClass |
| 0x69deb0 | C | G3_CW3 | ptr->ptr type mismatch / assign | ShapeButtonClass::Draw | ShapeButtonClass |
| 0x69e010 | A | G2_asweep_preCW4 | int -> void* / assign | SidebarClass::updateFlashTimer | SidebarClass |
| 0x6a0310 | C | G3_CW3 | ptr->ptr type mismatch / assign | ShipLocomotionClass::SetWaypointTarget | ShipLocomotionClass |
| 0x6b55f0 | D | G3_CW3 | ptr->ptr type mismatch / assign | SmudgeTypeClass::vt_entry_A0 | SmudgeTypeClass |
| 0x6b6080 | C | G3_CW3 | ptr->ptr type mismatch / assign | UnitClass::CreateUnloadPlacementCraters | UnitClass |
| 0x6c6de0 | D | G3_CW3 | ptr->ptr type mismatch / assign | ObjectClass::Audio_Read_6C6DE0 | ObjectClass |
| 0x6cb920 | D | G3_CW3 | ptr->ptr type mismatch / assign | SuperClass::ClickFire | SuperClass |
| 0x6cfcc0 | A | G2_asweep_preCW4 | ptr->ptr const mismatch / initializing | SidebarClass::findEntryIndexByName | SidebarClass |
| 0x6d59d0 | D | G3_CW3 | ptr->ptr type mismatch / assign | RadarClass::DrawBlip | RadarClass |
| 0x6dbb60 | D | G3_CW3 | int -> void* / assign | Tactical::DrawOverlay | Tactical |
| 0x6edb50 | D | G3_CW3 | ptr->ptr type mismatch / initializing | TeamClass::AssignAttackTarget | TeamClass |
| 0x6ef610 | D | G3_CW3 | ptr<->int other / assign | TeamClass::PlayMemberAnimation | TeamClass |
| 0x6f7970 | C | G3_CW3 | ptr->ptr type mismatch / initializing | TechnoClass::CheckCellPassable3 | TechnoClass |
| 0x70ece0 | A | G2_asweep_preCW4 | ptr<->int other / type cast | TechnoClass::Fire | TechnoClass |
| 0x711ae0 | D | G3_CW3 | ptr<->int other / assign | TechnoTypeClass::DTOR | TechnoTypeClass |
| 0x71c930 | D | G3_CW3 | ptr->ptr type mismatch / assign | TerrainClass::ApplyCellModifications | TerrainClass |
| 0x7248c0 | C | G5_CW5 | ptr->ptr const mismatch / assign | TooltipClass::GetText | TooltipClass |
| 0x724ab0 | A | G2_asweep_preCW4 | ptr<->int other / assign | ToolTipManager::release | ToolTipManager |
| 0x72bac0 | C | G3_CW3 | void* -> int / assign | WOLobby_Load | WOLobby |
| 0x72d120 | C | G3_CW3 | void* -> int / assign | UI_Show | UI |
| 0x731d00 | A | G2_asweep_preCW4 | ptr<->int other / assign | Selection::SetCurrent | Selection |
| 0x736579 | D | G3_CW3 | void* -> int / initializing | InfantryClass::UpdateBehavior | InfantryClass |
| 0x736d50 | D | G3_CW3 | ptr->ptr type mismatch / initializing | TechnoClass::IsC4AnimationActive | TechnoClass |
| 0x74d5d0 | C | G3_CW3 | void* -> int / assign | VeinholeMonsterClass::ProcessExpansion | VeinholeMonsterClass |
| 0x74d670 | C | G5_CW5 | ptr->ptr type mismatch / assign | ObjectClass::IsCellSuitableForPlacement | ObjectClass |
| 0x74f960 | D | G3_CW3 | ptr<->int other / assign | GameClass::ReadVersionFile | GameClass |
| 0x763a50 | A | G_R5toR8 | member->void* init / initializing | Waypoint::FindCell | Waypoint |
| 0x764b90 | D | G5_CW5 | ptr<->int other / assign | ReferenceCounted::CampaignConstructorWDT | ReferenceCounted |
| 0x76e2f0 | D | G5_CW5 | ptr->ptr type mismatch / initializing | ObjectClass::Team_Start_76E2F0 | ObjectClass |
| 0x76f970 | D | G3_CW3 | ptr<->int other / assign | ReferenceCounted::Constructor | ReferenceCounted |
| 0x76ff20 | A | G2_asweep_preCW4 | ptr->ptr type mismatch / assign | Trigger::executeActions | Trigger |
| 0x770f10 | D | G5_CW5 | ptr->ptr type mismatch / initializing | ObjectClass::sub_770F10 | ObjectClass |
| 0x778210 | D | G5_CW5 | ptr->ptr type mismatch / initializing | ScoreScreen::DrawSHPBackground | ScoreScreen |
| 0x779dd0 | D | G5_CW5 | ptr->ptr type mismatch / initializing | ObjectClass::LoadConfigWOL | ObjectClass |
| 0x779f10 | D | G5_CW5 | ptr->ptr type mismatch / initializing | ObjectClass::SavePersonaConfigWOL | ObjectClass |
| 0x77a080 | D | G3_CW3 | ptr->ptr type mismatch / assign | ObjectClass::SaveProfileWOL | ObjectClass |
| 0x783270 | D | G3_CW3 | ptr->ptr type mismatch / initializing | SortWOLPlayerList | _addr_78 |
| 0x78f200 | D | G3_CW3 | ptr->ptr type mismatch / assign | ObjectClass::BuildWOLPlayerTooltip | ObjectClass |
| 0x7b2630 | D | G3_CW3 | value cast / initializing | WinsockInterfaceClass::ConfigureBuffers | WinsockInterfaceClass |
| 0x7b2ff0 | C | G3_CW3 | void* -> int / initializing | UDPInterfaceClass::Flush | UDPInterfaceClass |
| 0x7b3310 | C | G3_CW3 | void* -> int / initializing | UDPInterfaceClass::CheckStatus | UDPInterfaceClass |
| 0x7b60e0 | D | G5_CW5 | ptr->ptr const mismatch / initializing | ObjectClass::sub_7B60E0 | ObjectClass |
| 0x7b9d90 | A | G2_asweep_preCW4 | member->void* init (scalar member, ptr local) / initializing | WWMouseClass::processFrame | WWMouseClass |
| 0x7ba360 | A | G2_asweep_preCW4 | member->void* init (scalar member, ptr local) / initializing | WWMouseClass::updatePosition | WWMouseClass |
| 0x7be670 | B | G3_CW3 | ptr<->int other / assign | UnitClass::Audio_Render_7BE670 | UnitClass |
| 0x7c61cf | A | G2_asweep_preCW4 | ptr<->int other / assign | globalHelper_0C61CF | _addr_7C |
| 0x7cc682 | A | G2_asweep_preCW4 | ptr<->int other / assign | _wcsstr | _addr_7C |
| 0x7cde75 | D | G3_CW3 | ptr->ptr const mismatch / initializing | __setlocale_get_all | _addr_7C |
| 0x7d1512 | C | G3_CW3 | value cast / type cast | GetCurrentThreadId::_0 | GetCurrentThreadId |
| 0x7d5ac0 | D | G5_CW5 | value cast / initializing | __setenvp | _addr_7D |
| 0x7dcee0 | C | G3_CW3 | ptr<->int other / type cast | GetCurrentThread::_0 | GetCurrentThread |
| 0x7dcf22 | C | G3_CW3 | value cast / type cast | GetCurrentProcessId::_0 | GetCurrentProcessId |

## 3. CW6 收割后复败（110）按新首错码

| 新首错 | 件 | 旧族（来源） |
|---|---:|---|
| C2039 | 19 | CW5-8/9/12 shell supply×19 |
| C2296 | 14 | CW3-4 pointer-local store×9; CW3-1 param proto merge×3; CW3-3 global-array upgrade×1 |
| C2440 | 13 | CW5-10 uintN_t typedef×6; CW3-3 global member view×2; CW5-10 MEMORY rewrite×1 |
| C2109 | 12 | CW3-3 global-array upgrade×5; CW5-10 uintN_t typedef×2; CW5-1/2/3/4 call-site args×2 |
| C2143 | 12 | CW5-10 __usercall strip×6; CW5-6/7 member chain×2; CW3-3 idx consumption×1 |
| C2228 | 9 | CW5-5/6/7/8 member view×6; CW5-10 uintN_t typedef×2; CW5-6/7 member chain×1 |
| C2036 | 8 | CW3-3 global-array upgrade×7; CW5-5 global object array×1 |
| C2227 | 5 | CW5-6/7 member chain×2; CW5-1/2/3/4 call-site args×2; CW5-10 uintN_t typedef×1 |
| C2100 | 4 | CW3-1 param proto merge×2; CW5-10 uintN_t typedef×2 |
| C2446 | 4 | CW5-10 uintN_t typedef×4 |
| C2673 | 2 | CW3-4 __int64 literal×1; CW5-10 uintN_t typedef×1 |
| C2562 | 2 | CW3-3 global-array upgrade×1; CW5-10 uintN_t typedef×1 |
| C2660 | 2 | CW5-10 uintN_t typedef×2 |
| C2664 | 2 | CW5-10 uintN_t typedef×2 |
| C2065 | 1 | CW5-10 undeclared g_/s_/p_×1 |
| C2106 | 1 | CW3-1 param proto merge×1 |

### 3.1 复败全清单（110）

| addr | layer | code | form | name | unit |
|---|---|---|---|---|---|
| 0x401190 | A | C2673 | stale_cw3|CW3-4 __int64 literal | sub_401190 | _addr_40 |
| 0x4073b0 | A | C2039 | stale_cw5|CW5-8/9/12 shell supply | SaveGame::CountLinkedList | SaveGame |
| 0x40d8e0 | A | C2440 | stale_cw5|CW5-10 MEMORY rewrite | sub_40D8E0 | _addr_40 |
| 0x417fd0 | A | C2227 | stale_cw5|CW5-6/7 member chain | AbstractClass::GetField9 | AbstractClass |
| 0x45dd20 | A | C2228 | stale_cw5|CW5-5/6/7/8 member view | ObjectClass::sub_45DD20 | ObjectClass |
| 0x45ec90 | A | C2109 | stale_cw5|CW5-5/6/7/8 member view | BuildingTypeClass::GetFoundationWidth | BuildingTypeClass |
| 0x45eca0 | A | C2109 | stale_cw3|CW3-3 global-array upgrade | BuildingTypeClass::GetFoundationHeight | BuildingTypeClass |
| 0x464af0 | A | C2109 | stale_cw5|CW5-8/9/12 shell supply | BuildingTypeClass::GetSizeInLeptons | BuildingTypeClass |
| 0x4722f0 | A | C2228 | stale_cw5|CW5-5/6/7/8 member view | CaptureManagerClass::GetOriginalOwner | CaptureManagerClass |
| 0x473960 | A | C2036 | stale_cw3|CW3-3 global-array upgrade | sub_473960 | _addr_47 |
| 0x48dfd0 | A | C2036 | stale_cw3|CW3-3 global-array upgrade | sub_48DFD0 | _addr_48 |
| 0x48e030 | A | C2036 | stale_cw3|CW3-3 global-array upgrade | sub_48E030 | _addr_48 |
| 0x48e090 | A | C2036 | stale_cw3|CW3-3 global-array upgrade | globalHelper_08E090 | _addr_48 |
| 0x494590 | A | C2296 | stale_cw3|CW3-1 param proto merge | _BlitTransXlatMultWriteAlpha_G::Blit_ZRead_AlphaBlend | _BlitTransXlatMultWriteAlpha_G |
| 0x4963f0 | A | C2100 | stale_cw3|CW3-1 param proto merge | _RLEBlitTransLucent50_G::sub_4963F0 | _RLEBlitTransLucent50_G |
| 0x4ac310 | A | C2440 | stale_cw3|CW3-4 pointer-local store | DisplayClass::InitViewBounds | DisplayClass |
| 0x4afb80 | A | C2227 | stale_cw5|CW5-1/2/3/4 call-site args | JumpjetLocomotionClass::StubReturnTrue | JumpjetLocomotionClass |
| 0x4d2cd0 | A | C2039 | stale_cw5|CW5-8/9/12 shell supply | _DynamicVectorClass_UDrawRecord_FoggedObjectClass::Read | _DynamicVectorClass_UDrawRecord_FoggedObjectClass |
| 0x4e0220 | A | C2228 | stale_cw5|CW5-5/6/7/8 member view | FoggedObjectClass::PointerToIndex | FoggedObjectClass |
| 0x4e07b0 | A | C2228 | stale_cw5|CW5-5/6/7/8 member view | FoggedObjectClass::FindItem | FoggedObjectClass |
| 0x4e7e20 | A | C2109 | stale_cw5|CW5-10 uintN_t typedef | unknown_libname_15 | _addr_4E |
| 0x4fa2e0 | A | C2296 | stale_cw3|CW3-3 global-array upgrade | HouseClass::SetThreat_Bounds | HouseClass |
| 0x5095d0 | A | C2228 | stale_cw5|CW5-5/6/7/8 member view | TeamClass::CountActiveTeamsForType | TeamClass |
| 0x50bc90 | A | C2440 | stale_cw3|CW3-3 global member view | HouseClass::CreatePowerOutage | HouseClass |
| 0x50c160 | A | C2228 | stale_cw5|CW5-5/6/7/8 member view | ObjectClass::sub_50C160 | ObjectClass |
| 0x52ace0 | A | C2039 | stale_cw5|CW5-8/9/12 shell supply | GenericList::Constructor | GenericList |
| 0x535fc0 | A | C2039 | stale_cw5|CW5-8/9/12 shell supply | SelectTeamCommand::Construct | SelectTeamCommand |
| 0x5360b0 | A | C2039 | stale_cw5|CW5-8/9/12 shell supply | AddTeamCommand::Construct | AddTeamCommand |
| 0x5361a0 | A | C2039 | stale_cw5|CW5-8/9/12 shell supply | CenterTeamCommand::Construct | CenterTeamCommand |
| 0x536290 | A | C2039 | stale_cw5|CW5-8/9/12 shell supply | TauntCommandClass::Construct | TauntCommandClass |
| 0x537b40 | A | C2039 | stale_cw5|CW5-8/9/12 shell supply | ScreenCaptureCommandClass::Constructor | ScreenCaptureCommandClass |
| 0x537e70 | A | C2039 | stale_cw5|CW5-8/9/12 shell supply | CursorPositionCommandClass::Constructor | CursorPositionCommandClass |
| 0x537f10 | A | C2039 | stale_cw5|CW5-8/9/12 shell supply | DeleteCommandClass::Constructor | DeleteCommandClass |
| 0x53e3c0 | A | C2440 | stale_cw3|CW3-3 global member view | TimerPool::AllocSlot | TimerPool |
| 0x540c50 | A | C2296 | stale_cw3|CW3-4 pointer-local store | ObjectClass::sub_540C50 | ObjectClass |
| 0x54a990 | A | C2296 | stale_cw3|CW3-4 pointer-local store | ObjectClass::sub_54A990 | ObjectClass |
| 0x54a9e0 | A | C2296 | stale_cw3|CW3-4 pointer-local store | ObjectClass::sub_54A9E0 | ObjectClass |
| 0x54d9b0 | A | C2227 | stale_cw5|CW5-6/7 member chain | JumpjetLocomotionClass::GetConditionedCoordinate | JumpjetLocomotionClass |
| 0x55a6c0 | A | C2039 | stale_cw5|CW5-8/9/12 shell supply | LocomotionClass::Init | LocomotionClass |
| 0x55a6f0 | A | C2039 | stale_cw5|CW5-8/9/12 shell supply | LocomotionClass::Construct | LocomotionClass |
| 0x55f970 | A | C2109 | stale_cw3|CW3-3 global-array upgrade | unknown_libname_21 | _addr_55 |
| 0x56da10 | A | C2296 | stale_cw3|CW3-4 pointer-local store | ObjectClass::GetRegionMap | ObjectClass |
| 0x5892d0 | A | C2039 | stale_cw5|CW5-8/9/12 shell supply | _DynamicVectorClass_USubzoneConnectionStruct::GetSize | _DynamicVectorClass_USubzoneConnectionStruct |
| 0x58bdc0 | A | C2039 | stale_cw5|CW5-8/9/12 shell supply | TileData::Constructor | TileData |
| 0x5ac230 | A | C2143 | stale_cw3|CW3-3 idx consumption | MapSeed::IsCellInBounds | MapSeed |
| 0x5affe0 | A | C2109 | stale_cw5|CW5-1/2/3/4 call-site args | JumpjetLocomotionClass::GetRenderCoordinate_0 | JumpjetLocomotionClass |
| 0x5b2930 | A | C2296 | stale_cw3|CW3-4 pointer-local store | Movement::Check | Movement |
| 0x5b2950 | A | C2296 | stale_cw3|CW3-4 pointer-local store | Math::Sub16 | Math |
| 0x5b3950 | A | C2036 | stale_cw3|CW3-3 global-array upgrade | FromNameIndex | _addr_5B |
| 0x5c8470 | A | C2296 | stale_cw3|CW3-3 idx consumption | ObjectClass::sub_5C8470 | ObjectClass |
| 0x5cae70 | A | C2440 | stale_cw5|CW5-10 uintN_t typedef | MultiplayerSiegeDefenderTeam::AddRef | MultiplayerSiegeDefenderTeam |
| 0x5d39d0 | A | C2039 | stale_cw5|CW5-8/9/12 shell supply | SessionClass::saveSettings | SessionClass |
| 0x5d6790 | A | C2440 | stale_cw5|CW5-6/7 member chain | MultiplayerGameMode::ClearFlag | MultiplayerGameMode |
| 0x5e2ba0 | A | C2109 | stale_cw3|CW3-3 global member view | Network::processQueue | Network |
| 0x5f96b0 | A | C2562 | stale_cw3|CW3-3 global-array upgrade | TheaterObjectTypeClassSpecificID | _addr_5F |
| 0x600250 | A | C2039 | stale_cw5|CW5-8/9/12 shell supply | _DynamicVectorClass_PAVSpotLightClass::FindItemIndex | _DynamicVectorClass_PAVSpotLightClass |
| 0x645ba0 | A | C2036 | stale_cw3|CW3-3 global-array upgrade | sub_645BA0 | _addr_64 |
| 0x661fb0 | A | C2039 | stale_cw5|CW5-8/9/12 shell supply | JumpjetLocomotionClass::GetCoordinate_0 | JumpjetLocomotionClass |
| 0x689790 | A | C2296 | stale_cw3|CW3-1 param proto merge | ObjectClass::sub_689790 | ObjectClass |
| 0x689a00 | A | C2100 | stale_cw3|CW3-1 param proto merge | ScenarioClass::GetLocalStateByID | ScenarioClass |
| 0x689a30 | A | C2296 | stale_cw3|CW3-1 param proto merge | ObjectClass::sub_689A30 | ObjectClass |
| 0x6915b0 | A | C2228 | stale_cw5|CW5-6/7 member chain | TeamClass::Check | TeamClass |
| 0x69a310 | A | C2109 | stale_cw3|CW3-3 global-array upgrade | SessionClass::GetPlayerColorScheme | SessionClass |
| 0x69bc20 | A | C2440 | stale_cw5|CW5-10 uintN_t typedef | IPXConnClass::closeConnection | IPXConnClass |
| 0x69f290 | A | C2227 | stale_cw5|CW5-1/2/3/4 call-site args | JumpjetLocomotionClass::StubReturnTrue_5 | JumpjetLocomotionClass |
| 0x6d9ef0 | A | C2065 | stale_cw5|CW5-10 undeclared g_/s_/p_ | TacticalClass::AddToDrawQueue | TacticalClass |
| 0x6e0290 | A | C2036 | stale_cw5|CW5-5 global object array | ObjectClass::sub_6E0290 | ObjectClass |
| 0x6e37f0 | A | C2440 | stale_cw3|CW3-2 vftable regex | ObjectClass::sub_6E37F0 | ObjectClass |
| 0x6ef9e0 | A | C2296 | stale_cw3|CW3-4 pointer-local store | TechnoClass::IsDeployed | TechnoClass |
| 0x6f1f70 | A | C2440 | stale_cw5|CW5-5/6/7/8 member view | TeamTypeClass::FindFirstInstance | TeamTypeClass |
| 0x7271d0 | A | C2036 | stale_cw3|CW3-3 global-array upgrade | sub_7271D0 | _addr_72 |
| 0x72b2f0 | A | C2109 | stale_cw3|CW3-3 global-array upgrade | LoadingScreen::GetBackgroundImage | LoadingScreen |
| 0x72b310 | A | C2109 | stale_cw3|CW3-3 global-array upgrade | LoadingScreen::GetOverlayImage | LoadingScreen |
| 0x74ff50 | A | C2296 | stale_cw3|CW3-4 pointer-local store | VeterancyStruct::Accumulate | VeterancyStruct |
| 0x754740 | A | C2109 | stale_cw5|CW5-1/2/3/4 call-site args | sub_754740 | _addr_75 |
| 0x75e690 | A | C2039 | stale_cw5|CW5-8/9/12 shell supply | WarheadTypeClass::checkImmunity | WarheadTypeClass |
| 0x75e6a0 | A | C2039 | stale_cw5|CW5-8/9/12 shell supply | WarheadTypeClass::calculateDamage | WarheadTypeClass |
| 0x7b33d0 | A | C2296 | stale_cw3|CW3-4 pointer-local store | UDPInterfaceClass::GetStatistics | UDPInterfaceClass |
| 0x7bc890 | A | C2106 | stale_cw3|CW3-1 param proto merge | _BlitTrans_G::sub_7BC890 | _BlitTrans_G |
| 0x7c8f5e | A | C2143 | stale_cw3|CW3-3 global-array upgrade | __cfltcvt_init_13 | _addr_7C |
| 0x7c91a5 | A | C2143 | stale_cw5|CW5-10 __usercall strip | CIpow_Helper_Helper | CIpow_Helper |
| 0x7c92d0 | A | C2143 | stale_cw3|CW3-4 __int64 literal | __alldiv | _addr_7C |
| 0x7caef1 | A | C2143 | stale_cw5|CW5-6/7 member chain | PMDtoOffset_YAHPAXABUPMD___Z | _addr_7C |
| 0x7cc186 | A | C2143 | stale_cw5|CW5-6/7 member chain | __abnormal_termination | _addr_7C |
| 0x7cf0ae | A | C2143 | stale_cw5|CW5-10 __usercall strip | __ffexpm1 | _addr_7C |
| 0x7cf0f1 | A | C2143 | stale_cw5|CW5-10 __usercall strip | _isintTOS | _addr_7C |
| 0x7cf390 | A | C2143 | stale_cw5|CW5-10 __usercall strip | __twoToTOS | _addr_7C |
| 0x7d75e0 | A | C2143 | stale_cw3|CW3-4 pointer-local store | _memset | _addr_7D |
| 0x7dbc68 | A | C2143 | stale_cw5|CW5-10 __usercall strip | __clrfp | _addr_7D |
| 0x664440 | C | C2446 | stale_cw5|CW5-10 uintN_t typedef | EventClass::validateEventType | EventClass |
| 0x49c5a0 | D | C2440 | stale_cw5|CW5-10 uintN_t typedef | CampaignClass::SaveProgress | CampaignClass |
| 0x4f1ca0 | D | C2228 | stale_cw5|CW5-10 uintN_t typedef | ObjectClass::LoadFromINIGraphicMenu | ObjectClass |
| 0x533fd0 | D | C2660 | stale_cw5|CW5-10 uintN_t typedef | AllocateSurfaceScreenSurfaces | _addr_53 |
| 0x5c1dc0 | D | C2440 | stale_cw5|CW5-10 uintN_t typedef | MPCooperative::Seek | MPCooperative |
| 0x5e9b60 | D | C2446 | stale_cw5|CW5-10 uintN_t typedef | SelectLobbyCountry | _addr_5E |
| 0x5e9c00 | D | C2446 | stale_cw5|CW5-10 uintN_t typedef | AssignPlayerColor | _addr_5E |
| 0x5edde0 | D | C2446 | stale_cw5|CW5-10 uintN_t typedef | EnablePlayerSlotControls | _addr_5E |
| 0x640710 | D | C2664 | stale_cw5|CW5-10 uintN_t typedef | Skirmish::RenderPreview | Skirmish |
| 0x64a7b0 | D | C2228 | stale_cw5|CW5-10 uintN_t typedef | ObjectClass::RenderPlayerLatencyBars | ObjectClass |
| 0x64ad10 | D | C2100 | stale_cw5|CW5-10 uintN_t typedef | Network_Process_64AD10 | Network_Process |
| 0x6523a0 | D | C2100 | stale_cw5|CW5-10 uintN_t typedef | Network::SendUnreachable | Network |
| 0x658330 | D | C2562 | stale_cw5|CW5-10 uintN_t typedef | TabClass::DrawPower | TabClass |
| 0x693b70 | D | C2660 | stale_cw5|CW5-10 uintN_t typedef | RequestNetworkFile | _addr_69 |
| 0x6c8ff0 | D | C2227 | stale_cw5|CW5-10 uintN_t typedef | DlgProcScoreScreen | _addr_6C |
| 0x778710 | D | C2440 | stale_cw5|CW5-10 uintN_t typedef | ObjectClass::LoadAccountInfoWOL | ObjectClass |
| 0x77e900 | D | C2440 | stale_cw5|CW5-10 uintN_t typedef | AssignWOLPlayerSide | _addr_77 |
| 0x793d20 | D | C2673 | stale_cw5|CW5-10 uintN_t typedef | NegotiateNetworkConnection | _addr_79 |
| 0x796de0 | D | C2109 | stale_cw5|CW5-10 uintN_t typedef | Game::CreateAIPlayer | Game |
| 0x7b7dd0 | D | C2664 | stale_cw5|CW5-10 uintN_t typedef | FormatWideString | _addr_7B |
| 0x7cf125 | D | C2143 | stale_cw5|CW5-10 __usercall strip | _usepowhlp | _addr_7C |

## 4. live 全量按码（817）

| 首错 | 件 |
|---|---:|
| C2440 | 192 |
| C2109 | 72 |
| C2296 | 48 |
| C2446 | 46 |
| C2673 | 38 |
| C2562 | 30 |
| C4716 | 30 |
| C2106 | 26 |
| C2660 | 24 |
| C2664 | 24 |
| C2065 | 23 |
| C2653 | 22 |
| C2100 | 22 |
| C2377 | 22 |
| C2227 | 20 |
| C2143 | 20 |
| C2039 | 19 |
| C2064 | 17 |
| C2036 | 17 |
| C2059 | 11 |
| C2146 | 10 |
| C2228 | 9 |
| C2027 | 8 |
| C2380 | 6 |
| C2679 | 5 |
| C2533 | 5 |
| C2198 | 4 |
| C2040 | 4 |
| C2371 | 4 |
| C2110 | 4 |
| C2044 | 4 |
| C2665 | 3 |
| C2079 | 3 |
| C2018 | 3 |
| C2105 | 3 |
| C2102 | 2 |
| C2086 | 2 |
| C2171 | 2 |
| C2043 | 2 |
| NO_ERR_TEXT | 1 |
| C1004 | 1 |
| C2676 | 1 |
| C2166 | 1 |
| C2197 | 1 |
| C2556 | 1 |
| C2144 | 1 |
| C2520 | 1 |
| C2275 | 1 |
| C2061 | 1 |
| C2628 | 1 |
