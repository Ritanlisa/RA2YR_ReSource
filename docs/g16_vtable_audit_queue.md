# G16 vtable 槽位审计优先队列（核心游戏类，G15 会话末全量扫描）

来源：`.omo/g16_slot_audit.json`（375 表全槽扫描）→ 精馏 `.omo/g16_slot_audit_distilled.json`
过滤：RTTI full-ancestor 合法覆写/MI 基剔除 + 占位名体系剔除（vt_entry/Stub/COM/performAction/IUnknown）
剩余 = fn 类前缀不在表类祖先链 = T19 误归属嫌疑（issue #108 同族）

| 表类 | RTTI | 嫌疑数 | 样本 |
|---|---|---|---|
| NeuronClass | ✓ | 316 | 12:COM::GetClassID; 28:ObjectClass::GetSizeMax; 52:Power::Update |
| AbstractTypeClass | ✓ | 315 | 28:ObjectClass::GetSizeMax; 72:Map::GetInvalidCoord; 112:BSurface::ScalarDtor |
| MultiplayerObserverTeam | ✓ | 297 | 8:PlayerClass::SetHouse; 52:MultiplayerSiege::QueryInterface; 68:MultiplayerSiege::Read |
| AbstractClass | ✓ | 282 | 28:ObjectClass::GetSizeMax; 72:Map::GetInvalidCoord; 204:ObjectClass::GetSizeMax |
| SpawnManagerClass | ✓ | 267 | 28:ObjectClass::GetSizeMax; 72:Map::GetInvalidCoord; 92:UnitClass::ProcessExitQueue |
| TabClass | ✓ | 267 | 0:MouseClass::ToggleContextGadget; 8:COMObject::QueryInterface; 12:InputManager_ProcessEvents::AddRef |
| HouseClass | ✓ | 266 | 28:ObjectClass::GetSizeMax; 72:Map::GetInvalidCoord; 104:VectorClass_UScoutStruct::AddRef |
| MSOverlayAnim | ✓ | 262 | 0:ScenarioClass::processCrates; 8:TimerClass::GetRemaining; 12:TimerClass::StartIfIdle |
| MultiplayerBattleTeam | ✓ | 261 | 36:MPCooperative::QueryInterface; 40:MPCooperative::assignResources; 44:MPCooperative::setUpAlliances |
| ShipLocomotionClass | ✓ | 260 | 16:StreamClass::IsInactive; 28:COMObject::GetStringValue; 76:IRTTITypeInfo::QueryInterface |
| IsometricTileTypeClass | ✓ | 258 | 28:COMObject::GetSizeMaxWrapper; 72:Map::GetInvalidCoord; 112:AnimTypeClass::Thunk_AnimTypeClass_sub_428E40 |
| MSBinkAnim | ✓ | 255 | 4:MSOverlayAnim::AddRef; 8:TimerClass::GetRemaining; 12:TimerClass::StartIfIdle |
| TeleportLocomotionClass | ✓ | 252 | 0:JumpjetLocomotionClass::UpdateAltitude; 16:StreamClass::IsInactive; 20:JumpjetLocomotionClass::InitMultiFieldArray_0 |
| ControlClass | ✓ | 251 | 4:ObjectClass::InputThunkA; 8:ObjectClass::InputThunkB; 12:LinkedList::InsertAfter |
| SmudgeTypeClass | ✓ | 244 | 28:COMObject::GetSizeMaxWrapper; 72:Map::GetInvalidCoord; 112:AnimTypeClass::Thunk_AnimTypeClass_sub_428E40 |
| SidebarClass | ✓ | 236 | 0:COMObject::QueryInterface; 4:InputManager_ProcessEvents::AddRef; 8:InputManager_ProcessEvents::Release |
| WalkLocomotionClass | ✓ | 229 | 16:StreamClass::IsInactive; 28:COMObject::GetStringValue; 80:IRTTITypeInfo::QueryInterface |
| JumpjetLocomotionClass | ✓ | 225 | 16:StreamClass::IsInactive; 28:COMObject::GetStringValue; 72:JumpjetLocomotionClass_26::Constructor_VectorClass_KamikazeControl___ |
| WaypointPathClass | ✓ | 224 | 28:ObjectClass::GetSizeMax; 72:Map::GetInvalidCoord; 180:COMClass::invokeMethod |
| SideClass | ✓ | 218 | 28:ObjectClass::GetSizeMax; 72:Map::GetInvalidCoord; 132:ObjectClass::updateAnimation |
| CaptureManagerClass | ✓ | 210 | 28:ObjectClass::GetSizeMax; 72:Map::GetInvalidCoord; 196:CarryoverClass::QueryInterface |
| CD | ✓ | 208 | 8:LinkedList::LoadScenarioMixFiles; 328:VectorClass::ScalarDtor; 332:GameClass::GetRelatedObject |
| CampaignClass | ✓ | 206 | 28:ObjectClass::GetSizeMax; 72:Map::GetInvalidCoord; 132:CampaignScore::Constructor_CampaignScoreClass |
| PKPipe | ✓ | 202 | 0:GameClass::validateGameFile; 4:GameClass::GetRelatedObject; 8:VtableStub::Method_477740 |
| SlaveManagerClass | ✓ | 199 | 28:ObjectClass::GetSizeMax; 72:Map::GetInvalidCoord; 100:SlaveManagerClass_25::QueryInterface |
| CNetUtilEventSink | ✓ | 198 | 12:ComStreamClass::ddtor; 16:WOLGameList::PopulateLobbyLists; 20:ComStreamClass::Read |
| FilePipe | ✓ | 195 | 4:GameClass::GetRelatedObject; 24:VectorClass::vt00; 28:BufferClass::CompareEqual |
| WarheadTypeClass | ✓ | 195 | 28:ObjectClass::GetSizeMax; 72:Map::GetInvalidCoord; 100:Voxel_Section::Draw |
| DriveLocomotionClass | ✓ | 193 | 16:StreamClass::IsInactive; 28:COMObject::GetStringValue; 80:DropListClass::QueryInterface |
| PKStraw | ✓ | 192 | 0:GameClass::applyGameSettings; 4:PKStrawClass::RelayBlowfishKey; 8:GameClass::ReadEncryptedStream |

## 审计轮操作范式（issue #108/#109 已验证）

1. 反汇编槽函数（live IDA）→ 从调用形态/写入偏移裁决真语义
2. `rename_symbol` 四方同步真名（src+signals+member_lookup+IDA）
3. vo(vtable_offsets.json) 错值修正（已知：IsAboveScreenMargin vo=344 错，二进制字节 124 对）
4. hpp 虚区声明补齐（vo 有名但 hpp 无声明者）→ 解锁 H5 卡账（ParachuteTo/ValidateTargetAndMove/FireWeaponWithCleanup/CanAttackTarget）

注意：TeleportLocomotionClass 表全 362 槽挂 Jumpjet 名——疑似相邻表整体误归属，优先个案裁决。
108 个 RTTI 未覆盖表需先扩 hierarchy（`anchors/rtti_hierarchy.json` full 图）再审计。
---

## G16 进展（2026-09-16，方法论验证轮）

已裁决并四方落盘（本文件原"操作范式"全流程验证通过）：

| 槽位 | 裁决 | 证据 |
|---|---|---|
| MissionClass 区 488-516（7 槽） | queueMission/nextMission/forceMission/onMissionChanged/revertMission/hasValidTarget/isMissionDone | YRpp MissionClass.h + 0x7edcc0 表直读 + 反编译语义；vo 7 条已入，验证器继承链解析全 Techno 族受益 |
| 字节 116（Techno 族） | GetActionOnObject 族（Techno 0x6ffec0 / Foot 0x4dded0 / Infantry_EMP 0x51e3b0 / Building 0x447210 / Aircraft 0x417cc0） | Ares 6 钩子交叉命名（Hooks.Passthrough/Cursor/EMP/Deactivated/Trenches） |
| InfantryClass 倒置条目 ×3 | IsAboveScreenMargin=124（vo 旧错值 344 废）/ ValidatePlacement=1156 / SetState(→forceMission)=496 | 二进制直读修正键值倒置 |

**InfantryClass 真空槽更新**：字节 196（0x41c010，现名 AircraftClass::CheckReloadState
——Aircraft 名在 Infantry 表 = 误归属嫌疑）与字节 1064 仍无主，H5 词汇前置。

**单表耗时实测**：MissionClass 区段（YRpp 对齐 + 逐槽反编译 + 四方落盘）≈ 25 分钟。
头部大表（NeuronClass 316 嫌疑）预计需分批——建议每会话 2-3 表 × 头部 20 槽。

**相邻表整体误归属个案**（TeleportLocomotionClass 362 槽全挂 Jumpjet 名）裁决入口：
表基址相邻性 + RTTI col_offset（MI 次表挂主表名 = find_base 贪婪匹配伪影嫌疑——
`.omo/g16_slot_audit.py` 的 find_base 是"最近基址 ≤ slot"，次表槽会被吸到前一张表，
重建 hierarchy 时需先修 audit 脚本再信其输出）。
