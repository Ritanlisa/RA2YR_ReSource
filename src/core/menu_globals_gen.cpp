#include <cstdint>
#include <windows.h>
#include "core/reverse_marker.hpp"

// Windows API name conflicts - prefix with gamemd_
namespace gamemd {

// GadgetGrid::InsertItem @ 0x4134A0 (236B)
REVERSE(0x4134A0, "IDA decompilation", "None")
int GadgetGrid_InsertItem(void* /*GadgetGrid*/ self) {
    return 0;
}

// GadgetGrid::RemoveItem @ 0x4135D0 (233B)
REVERSE(0x4135D0, "IDA decompilation", "None")
int GadgetGrid_RemoveItem(void* /*GadgetGrid*/ self) {
    return 0;
}

// AITriggerTypeClass::HouseCredits @ 0x41F230 (148B)
REVERSE(0x41F230, "IDA decompilation", "None")
bool AITriggerTypeClass_HouseCredits(void* /*AITriggerTypeClass*/ self) {
    return false;
}

// CampaignClass::CampaignClass @ 0x46CB60 (172B)
REVERSE(0x46CB60, "IDA decompilation", "None")
int CampaignClass_CampaignClass(void* /*CampaignClass*/ self) {
    return 0;
}

// CampaignSelect::sub_46CC90 @ 0x46CC90 (61B)
REVERSE(0x46CC90, "IDA decompilation", "None")
int CampaignSelect_sub_46CC90(void* /*CampaignSelect*/ self) {
    return 0;
}

// CampaignClass::GetMapData @ 0x46CCD0 (307B)
REVERSE(0x46CCD0, "IDA decompilation", "None")
int CampaignClass_GetMapData(void* /*CampaignClass*/ self) {
    return 0;
}

// CampaignClass::LoadFromINIList @ 0x46CE10 (363B)
REVERSE(0x46CE10, "IDA decompilation", "None")
int CampaignClass_LoadFromINIList(void* /*CampaignClass*/ self) {
    return 0;
}

// CampaignClass::ddtor @ 0x46CF80 (56B)
REVERSE(0x46CF80, "IDA decompilation", "None")
int CampaignClass_ddtor(void* /*CampaignClass*/ self) {
    return 0;
}

// CampaignClass::Stat @ 0x46CFC0 (61B)
REVERSE(0x46CFC0, "IDA decompilation", "None")
int CampaignClass_Stat(void* /*CampaignClass*/ self) {
    return 0;
}

// CampaignClass::Write @ 0x46D000 (69B)
REVERSE(0x46D000, "IDA decompilation", "None")
int CampaignClass_Write(void* /*CampaignClass*/ self) {
    return 0;
}

// CampaignClass::Seek @ 0x46D050 (29B)
REVERSE(0x46D050, "IDA decompilation", "None")
int CampaignClass_Seek(void* /*CampaignClass*/ self) {
    return 0;
}

// CampaignClass::StubReturn928 @ 0x46D070 (6B)
REVERSE(0x46D070, "IDA decompilation", "None")
int CampaignClass_StubReturn928(void* /*CampaignClass*/ self) {
    return 0;
}

// CampaignClass::StubReturn10 @ 0x46D080 (6B)
REVERSE(0x46D080, "IDA decompilation", "None")
int CampaignClass_StubReturn10(void* /*CampaignClass*/ self) {
    return 0;
}

// CampaignClass::DTOR @ 0x46D090 (141B)
REVERSE(0x46D090, "IDA decompilation", "None")
void CampaignClass_DTOR(void* /*CampaignClass*/ self) {
    (void)self;
}

// Game::SendCampaignOptions @ 0x46D4A0 (427B)
REVERSE(0x46D4A0, "IDA decompilation", "None")
int Game_SendCampaignOptions(void* /*Game*/ self) {
    return 0;
}

// CampaignScore::DialogProc @ 0x46DFD0 (5384B)
REVERSE(0x46DFD0, "IDA decompilation", "None")
int CampaignScore_DialogProc(void* /*CampaignScore*/ self) {
    return 0;
}

// CampaignScore::ProcessScreen @ 0x46FC00 (4088B)
REVERSE(0x46FC00, "IDA decompilation", "None")
void CampaignScore_ProcessScreen(void* /*CampaignScore*/ self) {
    (void)self;
}

// CampaignScreen::Init @ 0x470D30 (1731B)
REVERSE(0x470D30, "IDA decompilation", "None")
int CampaignScreen_Init(void* /*CampaignScreen*/ self) {
    return 0;
}

// CampaignScore::sub_471420 @ 0x471420 (210B)
REVERSE(0x471420, "IDA decompilation", "None")
void CampaignScore_sub_471420(void* /*CampaignScore*/ self) {
    (void)self;
}

// CampaignScore::sub_471500 @ 0x471500 (32B)
REVERSE(0x471500, "IDA decompilation", "None")
int CampaignScore_sub_471500(void* /*CampaignScore*/ self) {
    return 0;
}

// CampaignScore::sub_471520 @ 0x471520 (32B)
REVERSE(0x471520, "IDA decompilation", "None")
int CampaignScore_sub_471520(void* /*CampaignScore*/ self) {
    return 0;
}

// LoadCampaignCoopSave @ 0x49C0D0 (1230B)
REVERSE(0x49C0D0, "IDA decompilation", "None")
int LoadCampaignCoopSave(void) {
    return 0;
}

// CampaignClass::SaveProgress @ 0x49C5A0 (1359B)
REVERSE(0x49C5A0, "IDA decompilation", "None")
int CampaignClass_SaveProgress(void* /*CampaignClass*/ self) {
    return 0;
}

// DecodeCampaignPlayerName @ 0x49CCF0 (893B)
REVERSE(0x49CCF0, "IDA decompilation", "None")
int DecodeCampaignPlayerName(void) {
    return 0;
}

// LoadCoopCampaignSave @ 0x49D390 (749B)
REVERSE(0x49D390, "IDA decompilation", "None")
int LoadCoopCampaignSave(void) {
    return 0;
}

// SerializeCampaignOptions @ 0x49D680 (865B)
REVERSE(0x49D680, "IDA decompilation", "None")
int SerializeCampaignOptions(void) {
    return 0;
}

// CampaignClass::LoadFromINI @ 0x49DB00 (2218B)
REVERSE(0x49DB00, "IDA decompilation", "None")
int CampaignClass_LoadFromINI(void* /*CampaignClass*/ self) {
    return 0;
}

// CampaignClass::FindMission @ 0x49E400 (227B)
REVERSE(0x49E400, "IDA decompilation", "None")
int CampaignClass_FindMission(void* /*CampaignClass*/ self) {
    return 0;
}

// CampaignClass::GetValue @ 0x49E4F0 (31B)
REVERSE(0x49E4F0, "IDA decompilation", "None")
int CampaignClass_GetValue(void* /*CampaignClass*/ self) {
    return 0;
}

// CampaignClass::sub_549ECD0 @ 0x49ECD0 (93B)
REVERSE(0x49ECD0, "IDA decompilation", "None")
int CampaignClass_sub_549ECD0(void* /*CampaignClass*/ self) {
    return 0;
}

// CampaignClass::sub_549F090 @ 0x49F090 (74B)
REVERSE(0x49F090, "IDA decompilation", "None")
int CampaignClass_sub_549F090(void* /*CampaignClass*/ self) {
    return 0;
}

// Dialog::sub_49F740 @ 0x49F740 (88B)
REVERSE(0x49F740, "IDA decompilation", "None")
void Dialog_sub_49F740(void* /*Dialog*/ self) {
    (void)self;
}

// CreditsScreen::sub_4A3C00 @ 0x4A3C00 (4B)
REVERSE(0x4A3C00, "IDA decompilation", "None")
void CreditsScreen_sub_4A3C00(void* /*CreditsScreen*/ self) {
    (void)self;
}

// CreditsPower::sub_4C3D00 @ 0x4C3D00 (199B)
REVERSE(0x4C3D00, "IDA decompilation", "None")
int CreditsPower_sub_4C3D00(void* /*CreditsPower*/ self) {
    return 0;
}

// Menu::sub_4C6140 @ 0x4C6140 (37B)
REVERSE(0x4C6140, "IDA decompilation", "None")
int Menu_sub_4C6140(void* /*Menu*/ self) {
    return 0;
}

// DialogFunc @ 0x4C83E0 (255B)
REVERSE(0x4C83E0, "IDA decompilation", "None")
INT_PTR DialogFunc(void) {
    return 0;
}

// GadgetClass::Construct @ 0x4E12F0 (79B)
REVERSE(0x4E12F0, "IDA decompilation", "None")
int GadgetClass_Construct(void* /*GadgetClass*/ self) {
    return 0;
}

// GadgetClass::Dtor @ 0x4E1390 (82B)
REVERSE(0x4E1390, "IDA decompilation", "None")
int GadgetClass_Dtor(void* /*GadgetClass*/ self) {
    return 0;
}

// DialogControl::Hide @ 0x4E1450 (13B)
REVERSE(0x4E1450, "IDA decompilation", "None")
int DialogControl_Hide(void* /*DialogControl*/ self) {
    return 0;
}

// DialogControl::Show @ 0x4E1460 (13B)
REVERSE(0x4E1460, "IDA decompilation", "None")
int DialogControl_Show(void* /*DialogControl*/ self) {
    return 0;
}

// DialogControl::IsHidden @ 0x4E1470 (11B)
REVERSE(0x4E1470, "IDA decompilation", "None")
bool DialogControl_IsHidden(void* /*DialogControl*/ self) {
    return false;
}

// GadgetClass::ClearState @ 0x4E1550 (32B)
REVERSE(0x4E1550, "IDA decompilation", "None")
int GadgetClass_ClearState(void* /*GadgetClass*/ self) {
    return 0;
}

// MapSkirmishDialogPlayerToControl @ 0x4E48E0 (180B)
REVERSE(0x4E48E0, "IDA decompilation", "None")
int MapSkirmishDialogPlayerToControl(void) {
    return 0;
}

// SetupSkirmishSpawnLocations @ 0x4E49A0 (635B)
REVERSE(0x4E49A0, "IDA decompilation", "None")
int SetupSkirmishSpawnLocations(void) {
    return 0;
}

// Dialog::SideIDToIndex @ 0x4E4EC0 (105B)
REVERSE(0x4E4EC0, "IDA decompilation", "None")
int Dialog_SideIDToIndex(void* /*Dialog*/ self) {
    return 0;
}

// Dialog::OptionIDToIndex @ 0x4E59A0 (105B)
REVERSE(0x4E59A0, "IDA decompilation", "None")
int Dialog_OptionIDToIndex(void* /*Dialog*/ self) {
    return 0;
}

// SetupLobbyPlayerSlotDialog @ 0x4E5E20 (161B)
REVERSE(0x4E5E20, "IDA decompilation", "None")
bool SetupLobbyPlayerSlotDialog(void) {
    return false;
}

// VectorClass_ptr_CampaignClass::sub_4E8A20 @ 0x4E8A20 (42B)
REVERSE(0x4E8A20, "IDA decompilation", "None")
void VectorClass_ptr_CampaignClass_sub_4E8A20(void* /*VectorClass_ptr_CampaignClass*/ self) {
    (void)self;
}

// VectorClass_ptr_CampaignClass::sub_4E8A50 @ 0x4E8A50 (27B)
REVERSE(0x4E8A50, "IDA decompilation", "None")
int VectorClass_ptr_CampaignClass_sub_4E8A50(void* /*VectorClass_ptr_CampaignClass*/ self) {
    return 0;
}

// VectorClass_ptr_CampaignClass::Get @ 0x4E8A70 (13B)
REVERSE(0x4E8A70, "IDA decompilation", "None")
int VectorClass_ptr_CampaignClass_Get(void* /*VectorClass_ptr_CampaignClass*/ self) {
    return 0;
}

// VectorClass_ptr_CampaignClass::sub_4E8A80 @ 0x4E8A80 (42B)
REVERSE(0x4E8A80, "IDA decompilation", "None")
void VectorClass_ptr_CampaignClass_sub_4E8A80(void* /*VectorClass_ptr_CampaignClass*/ self) {
    (void)self;
}

// VectorClass_ptr_CampaignClass::sub_4E8AB0 @ 0x4E8AB0 (27B)
REVERSE(0x4E8AB0, "IDA decompilation", "None")
int VectorClass_ptr_CampaignClass_sub_4E8AB0(void* /*VectorClass_ptr_CampaignClass*/ self) {
    return 0;
}

// VectorClass_ptr_CampaignClass::Add @ 0x4EC300 (62B)
REVERSE(0x4EC300, "IDA decompilation", "None")
int VectorClass_ptr_CampaignClass_Add(void* /*VectorClass_ptr_CampaignClass*/ self) {
    return 0;
}

// VectorClass_ptr_CampaignClass::Release @ 0x4EC340 (174B)
REVERSE(0x4EC340, "IDA decompilation", "None")
int VectorClass_ptr_CampaignClass_Release(void* /*VectorClass_ptr_CampaignClass*/ self) {
    return 0;
}

// VectorClass_ptr_CampaignClass::Remove @ 0x4EC3F0 (39B)
REVERSE(0x4EC3F0, "IDA decompilation", "None")
void VectorClass_ptr_CampaignClass_Remove(void* /*VectorClass_ptr_CampaignClass*/ self) {
    (void)self;
}

// VectorClass_ptr_CampaignClass::GetSize @ 0x4EC420 (51B)
REVERSE(0x4EC420, "IDA decompilation", "None")
int VectorClass_ptr_CampaignClass_GetSize(void* /*VectorClass_ptr_CampaignClass*/ self) {
    return 0;
}

// VectorClass_ptr_CampaignClass::GetCapacity @ 0x4EC460 (27B)
REVERSE(0x4EC460, "IDA decompilation", "None")
int VectorClass_ptr_CampaignClass_GetCapacity(void* /*VectorClass_ptr_CampaignClass*/ self) {
    return 0;
}

// VectorClass_ptr_CampaignClass::sub_4EC480 @ 0x4EC480 (176B)
REVERSE(0x4EC480, "IDA decompilation", "None")
int VectorClass_ptr_CampaignClass_sub_4EC480(void* /*VectorClass_ptr_CampaignClass*/ self) {
    return 0;
}

// VectorClass_ptr_CampaignClass::sub_4EC530 @ 0x4EC530 (38B)
REVERSE(0x4EC530, "IDA decompilation", "None")
int VectorClass_ptr_CampaignClass_sub_4EC530(void* /*VectorClass_ptr_CampaignClass*/ self) {
    return 0;
}

// VectorClass_ptr_CampaignClass::sub_4EC6E0 @ 0x4EC6E0 (176B)
REVERSE(0x4EC6E0, "IDA decompilation", "None")
int VectorClass_ptr_CampaignClass_sub_4EC6E0(void* /*VectorClass_ptr_CampaignClass*/ self) {
    return 0;
}

// VectorClass_ptr_CampaignClass::sub_4EC790 @ 0x4EC790 (38B)
REVERSE(0x4EC790, "IDA decompilation", "None")
int VectorClass_ptr_CampaignClass_sub_4EC790(void* /*VectorClass_ptr_CampaignClass*/ self) {
    return 0;
}

// VectorClass_ptr_CampaignClass::sub_4F0200 @ 0x4F0200 (73B)
REVERSE(0x4F0200, "IDA decompilation", "None")
int VectorClass_ptr_CampaignClass_sub_4F0200(void* /*VectorClass_ptr_CampaignClass*/ self) {
    return 0;
}

// VectorClass_ptr_CampaignClass::sub_4F02A0 @ 0x4F02A0 (73B)
REVERSE(0x4F02A0, "IDA decompilation", "None")
int VectorClass_ptr_CampaignClass_sub_4F02A0(void* /*VectorClass_ptr_CampaignClass*/ self) {
    return 0;
}

// ShowGameDialog @ 0x4F1840 (103B)
REVERSE(0x4F1840, "IDA decompilation", "None")
LONG ShowGameDialog(void) {
    return 0L;
}

// LoadFromINIGraphicMenu @ 0x4F1CA0 (1173B)
REVERSE(0x4F1CA0, "IDA decompilation", "None")
int LoadFromINIGraphicMenu(void) {
    return 0;
}

// ProcessGraphicMenu @ 0x4F2300 (826B)
REVERSE(0x4F2300, "IDA decompilation", "None")
int ProcessGraphicMenu(void) {
    return 0;
}

// ParseINIAnimGadgetDefinition @ 0x4F2C70 (669B)
REVERSE(0x4F2C70, "IDA decompilation", "None")
int ParseINIAnimGadgetDefinition(void) {
    return 0;
}

// GraphicMenuAnimItem::Release @ 0x4F3090 (66B)
REVERSE(0x4F3090, "IDA decompilation", "None")
bool GraphicMenuAnimItem_Release(void* /*GraphicMenuAnimItem*/ self) {
    return false;
}

// ParseINIGadgetDefinition @ 0x4F3140 (798B)
REVERSE(0x4F3140, "IDA decompilation", "None")
int ParseINIGadgetDefinition(void) {
    return 0;
}

// GraphicMenuImageItem::Release @ 0x4F3640 (66B)
REVERSE(0x4F3640, "IDA decompilation", "None")
bool GraphicMenuImageItem_Release(void* /*GraphicMenuImageItem*/ self) {
    return false;
}

// GraphicMenuImageItem::Load @ 0x4F3690 (136B)
REVERSE(0x4F3690, "IDA decompilation", "None")
int GraphicMenuImageItem_Load(void* /*GraphicMenuImageItem*/ self) {
    return 0;
}

// GraphicMenuImageItem::ddtor @ 0x4F37A0 (149B)
REVERSE(0x4F37A0, "IDA decompilation", "None")
int GraphicMenuImageItem_ddtor(void* /*GraphicMenuImageItem*/ self) {
    return 0;
}

// GraphicMenuItem::Constructor @ 0x4F3A50 (30B)
REVERSE(0x4F3A50, "IDA decompilation", "None")
int GraphicMenuItem_Constructor(void* /*GraphicMenuItem*/ self) {
    return 0;
}

// GraphicMenuItem::Destructor @ 0x4F3A70 (32B)
REVERSE(0x4F3A70, "IDA decompilation", "None")
void GraphicMenuItem_Destructor(void* /*GraphicMenuItem*/ self) {
    (void)self;
}

// GraphicMenuAnimItem::StubReturnFalse @ 0x4F3AD0 (3B)
REVERSE(0x4F3AD0, "IDA decompilation", "None")
void GraphicMenuAnimItem_StubReturnFalse(void* /*GraphicMenuAnimItem*/ self) {
    (void)self;
}

// GraphicMenuAnimItem::Stub @ 0x4F3AE0 (3B)
REVERSE(0x4F3AE0, "IDA decompilation", "None")
void GraphicMenuAnimItem_Stub(void* /*GraphicMenuAnimItem*/ self) {
    (void)self;
}

// GraphicMenuItem_Destru::Release @ 0x4F3AF0 (5B)
REVERSE(0x4F3AF0, "IDA decompilation", "None")
int GraphicMenuItem_Destru_Release(void* /*GraphicMenuItem_Destru*/ self) {
    return 0;
}

// GraphicMenuAnimItem::AddRef @ 0x4F3B00 (5B)
REVERSE(0x4F3B00, "IDA decompilation", "None")
int GraphicMenuAnimItem_AddRef(void* /*GraphicMenuAnimItem*/ self) {
    return 0;
}

// GraphicMenuShortcutItem::AddRef @ 0x4F3EE0 (120B)
REVERSE(0x4F3EE0, "IDA decompilation", "None")
int GraphicMenuShortcutItem_AddRef(void* /*GraphicMenuShortcutItem*/ self) {
    return 0;
}

// GraphicMenuAnimItem::sub_4F3FD0 @ 0x4F3FD0 (32B)
REVERSE(0x4F3FD0, "IDA decompilation", "None")
int GraphicMenuAnimItem_sub_4F3FD0(void* /*GraphicMenuAnimItem*/ self) {
    return 0;
}

// PlayerSlot::NameToDialogID @ 0x510FB0 (546B)
REVERSE(0x510FB0, "IDA decompilation", "None")
int PlayerSlot_NameToDialogID(void* /*PlayerSlot*/ self) {
    return 0;
}

// Credits::Screen @ 0x52CB90 (473B)
REVERSE(0x52CB90, "IDA decompilation", "None")
int Credits_Screen(void* /*Credits*/ self) {
    return 0;
}

// CampaignMenu::DlgProc @ 0x52D640 (328B)
REVERSE(0x52D640, "IDA decompilation", "None")
int CampaignMenu_DlgProc(void* /*CampaignMenu*/ self) {
    return 0;
}

// MenuSelect @ 0x52D9A0 (4536B)
REVERSE(0x52D9A0, "IDA decompilation", "None")
int MenuSelect(void) {
    return 0;
}

// CampaignSelect::DlgProc @ 0x52EC00 (2024B)
REVERSE(0x52EC00, "IDA decompilation", "None")
int CampaignSelect_DlgProc(void* /*CampaignSelect*/ self) {
    return 0;
}

// CreditsScreen::DlgProc @ 0x531A00 (555B)
REVERSE(0x531A00, "IDA decompilation", "None")
int CreditsScreen_DlgProc(void* /*CreditsScreen*/ self) {
    return 0;
}

// MainMenu::Screen @ 0x531CC0 (671B)
REVERSE(0x531CC0, "IDA decompilation", "None")
LONG MainMenu_Screen(void* /*MainMenu*/ self) {
    return 0L;
}

// MainMenu::DlgProc @ 0x531F60 (415B)
REVERSE(0x531F60, "IDA decompilation", "None")
int MainMenu_DlgProc(void* /*MainMenu*/ self) {
    return 0;
}

// IsMessageDialog @ 0x53E730 (50B)
REVERSE(0x53E730, "IDA decompilation", "None")
bool IsMessageDialog(void) {
    return false;
}

// GadgetClass::InitControls @ 0x557BE0 (203B)
REVERSE(0x557BE0, "IDA decompilation", "None")
int GadgetClass_InitControls(void* /*GadgetClass*/ self) {
    return 0;
}

// ShowSaveLoadDialog @ 0x558810 (36B)
REVERSE(0x558810, "IDA decompilation", "None")
bool ShowSaveLoadDialog(void) {
    return false;
}

// SaveLoadDialog::DlgProc @ 0x558DD0 (2080B)
REVERSE(0x558DD0, "IDA decompilation", "None")
bool SaveLoadDialog_DlgProc(void* /*SaveLoadDialog*/ self) {
    return false;
}

// LoadSaveDialog::FillList @ 0x5596A0 (1396B)
REVERSE(0x5596A0, "IDA decompilation", "None")
void LoadSaveDialog_FillList(void* /*LoadSaveDialog*/ self) {
    (void)self;
}

// VideoSettingsDialogProc @ 0x561400 (737B)
REVERSE(0x561400, "IDA decompilation", "None")
int VideoSettingsDialogProc(void) {
    return 0;
}

// SkirmishMapGen::DlgProc @ 0x596300 (2385B)
REVERSE(0x596300, "IDA decompilation", "None")
int SkirmishMapGen_DlgProc(void* /*SkirmishMapGen*/ self) {
    return 0;
}

// CampaignClass::sub_55AE460 @ 0x5AE460 (91B)
REVERSE(0x5AE460, "IDA decompilation", "None")
int CampaignClass_sub_55AE460(void* /*CampaignClass*/ self) {
    return 0;
}

// ModemGuest::Dialog @ 0x5B49B0 (351B)
REVERSE(0x5B49B0, "IDA decompilation", "None")
int ModemGuest_Dialog(void* /*ModemGuest*/ self) {
    return 0;
}

// GameSetupDialogProc @ 0x5B4B10 (976B)
REVERSE(0x5B4B10, "IDA decompilation", "None")
int GameSetupDialogProc(void) {
    return 0;
}

// ModemGuest::InitDialog @ 0x5B4EE0 (2058B)
REVERSE(0x5B4EE0, "IDA decompilation", "None")
void ModemGuest_InitDialog(void* /*ModemGuest*/ self) {
    (void)self;
}

// Dialog::InitializeGameSettings @ 0x5B5BC0 (705B)
REVERSE(0x5B5BC0, "IDA decompilation", "None")
int Dialog_InitializeGameSettings(void* /*Dialog*/ self) {
    return 0;
}

// Game::StartModemMultiplayer @ 0x5B7090 (705B)
REVERSE(0x5B7090, "IDA decompilation", "None")
int Game_StartModemMultiplayer(void* /*Game*/ self) {
    return 0;
}

// ModemHost::Dialog @ 0x5B77E0 (398B)
REVERSE(0x5B77E0, "IDA decompilation", "None")
int ModemHost_Dialog(void* /*ModemHost*/ self) {
    return 0;
}

// ModemHost::InitDialog @ 0x5B82F0 (2538B)
REVERSE(0x5B82F0, "IDA decompilation", "None")
void ModemHost_InitDialog(void* /*ModemHost*/ self) {
    (void)self;
}

// MultiplayerBattleTeam::AddRef @ 0x5C1090 (18B)
REVERSE(0x5C1090, "IDA decompilation", "None")
bool MultiplayerBattleTeam_AddRef(void* /*MultiplayerBattleTeam*/ self) {
    return false;
}

// MultiplayerBattleTeam::Release @ 0x5C10B0 (18B)
REVERSE(0x5C10B0, "IDA decompilation", "None")
bool MultiplayerBattleTeam_Release(void* /*MultiplayerBattleTeam*/ self) {
    return false;
}

// CampaignCoop::Setup @ 0x5C21D0 (469B)
REVERSE(0x5C21D0, "IDA decompilation", "None")
HWND CampaignCoop_Setup(void* /*CampaignCoop*/ self) {
    return nullptr;
}

// Campaign::SetupMovie @ 0x5C2500 (317B)
REVERSE(0x5C2500, "IDA decompilation", "None")
void Campaign_SetupMovie(void* /*Campaign*/ self) {
    (void)self;
}

// CoopCampaignVector::Seek @ 0x5C5120 (13B)
REVERSE(0x5C5120, "IDA decompilation", "None")
int CoopCampaignVector_Seek(void* /*CoopCampaignVector*/ self) {
    return 0;
}

// CoopCampaignVector::AddRef @ 0x5C55F0 (62B)
REVERSE(0x5C55F0, "IDA decompilation", "None")
int CoopCampaignVector_AddRef(void* /*CoopCampaignVector*/ self) {
    return 0;
}

// CoopCampaignVector::Release @ 0x5C5630 (174B)
REVERSE(0x5C5630, "IDA decompilation", "None")
int CoopCampaignVector_Release(void* /*CoopCampaignVector*/ self) {
    return 0;
}

// CoopCampaignVector::ddtor @ 0x5C56E0 (39B)
REVERSE(0x5C56E0, "IDA decompilation", "None")
void CoopCampaignVector_ddtor(void* /*CoopCampaignVector*/ self) {
    (void)self;
}

// CoopCampaignVector::Read @ 0x5C5710 (51B)
REVERSE(0x5C5710, "IDA decompilation", "None")
int CoopCampaignVector_Read(void* /*CoopCampaignVector*/ self) {
    return 0;
}

// CoopCampaignVector::Write @ 0x5C5750 (27B)
REVERSE(0x5C5750, "IDA decompilation", "None")
int CoopCampaignVector_Write(void* /*CoopCampaignVector*/ self) {
    return 0;
}

// CoopCampaignVector::Construct @ 0x5C5A80 (74B)
REVERSE(0x5C5A80, "IDA decompilation", "None")
int CoopCampaignVector_Construct(void* /*CoopCampaignVector*/ self) {
    return 0;
}

// ShowConfirmDialog @ 0x5C60D0 (74B)
REVERSE(0x5C60D0, "IDA decompilation", "None")
bool ShowConfirmDialog(void) {
    return false;
}

// MultiplayerObserverTeam::AddRef @ 0x5C94C0 (13B)
REVERSE(0x5C94C0, "IDA decompilation", "None")
bool MultiplayerObserverTeam_AddRef(void* /*MultiplayerObserverTeam*/ self) {
    return false;
}

// Game::GetMultiplayerScoreScreenBar @ 0x5CA110 (782B)
REVERSE(0x5CA110, "IDA decompilation", "None")
int Game_GetMultiplayerScoreScreenBar(void* /*Game*/ self) {
    return 0;
}

// MultiplayerSiege::Read @ 0x5CA680 (79B)
REVERSE(0x5CA680, "IDA decompilation", "None")
int MultiplayerSiege_Read(void* /*MultiplayerSiege*/ self) {
    return 0;
}

// MultiplayerSiege::Write @ 0x5CA6D0 (242B)
REVERSE(0x5CA6D0, "IDA decompilation", "None")
int MultiplayerSiege_Write(void* /*MultiplayerSiege*/ self) {
    return 0;
}

// MultiplayerSiege::StubReturnFalse @ 0x5CA7E0 (3B)
REVERSE(0x5CA7E0, "IDA decompilation", "None")
int MultiplayerSiege_StubReturnFalse(void* /*MultiplayerSiege*/ self) {
    return 0;
}

// MultiplayerSiege::ProcessTurn @ 0x5CA800 (429B)
REVERSE(0x5CA800, "IDA decompilation", "None")
int MultiplayerSiege_ProcessTurn(void* /*MultiplayerSiege*/ self) {
    return 0;
}

// MultiplayerSiege::CheckStatus @ 0x5CA9B0 (269B)
REVERSE(0x5CA9B0, "IDA decompilation", "None")
int MultiplayerSiege_CheckStatus(void* /*MultiplayerSiege*/ self) {
    return 0;
}

// MultiplayerSiege::GetResult @ 0x5CAAC0 (260B)
REVERSE(0x5CAAC0, "IDA decompilation", "None")
int MultiplayerSiege_GetResult(void* /*MultiplayerSiege*/ self) {
    return 0;
}

// MultiplayerSiegeDefenderTeam::AddRef @ 0x5CAE70 (63B)
REVERSE(0x5CAE70, "IDA decompilation", "None")
int MultiplayerSiegeDefenderTeam_AddRef(void* /*MultiplayerSiegeDefenderTeam*/ self) {
    return 0;
}

// CampaignClass::sub_55CF760 @ 0x5CF760 (165B)
REVERSE(0x5CF760, "IDA decompilation", "None")
int CampaignClass_sub_55CF760(void* /*CampaignClass*/ self) {
    return 0;
}

// CampaignClass::sub_55CF810 @ 0x5CF810 (30B)
REVERSE(0x5CF810, "IDA decompilation", "None")
int CampaignClass_sub_55CF810(void* /*CampaignClass*/ self) {
    return 0;
}

// CampaignProperties_WorldDominationTour[22]::Seek @ 0x5D2770 (13B)
REVERSE(0x5D2770, "IDA decompilation", "None")
int CampaignProperties_WorldDominationTour_22_Seek(void* /*CampaignProperties_WorldDominationTour[22]*/ self) {
    return 0;
}

// CampaignProperties_WorldDominationTour[22]::Read @ 0x5D2900 (51B)
REVERSE(0x5D2900, "IDA decompilation", "None")
int CampaignProperties_WorldDominationTour_22_Read(void* /*CampaignProperties_WorldDominationTour[22]*/ self) {
    return 0;
}

// CampaignProperties_WorldDominationTour[22]::Write @ 0x5D2940 (27B)
REVERSE(0x5D2940, "IDA decompilation", "None")
int CampaignProperties_WorldDominationTour_22_Write(void* /*CampaignProperties_WorldDominationTour[22]*/ self) {
    return 0;
}

// CampaignClass::sub_55D2E00 @ 0x5D2E00 (47B)
REVERSE(0x5D2E00, "IDA decompilation", "None")
int CampaignClass_sub_55D2E00(void* /*CampaignClass*/ self) {
    return 0;
}

// Dialog::ShowMessageBox @ 0x5D3490 (524B)
REVERSE(0x5D3490, "IDA decompilation", "None")
LONG Dialog_ShowMessageBox(void* /*Dialog*/ self) {
    return 0L;
}

// Dialog::MessageLoop @ 0x5D4D50 (286B)
REVERSE(0x5D4D50, "IDA decompilation", "None")
HWND Dialog_MessageLoop(void* /*Dialog*/ self) {
    return nullptr;
}

// DialogQueue::PushEntry @ 0x5D4E70 (88B)
REVERSE(0x5D4E70, "IDA decompilation", "None")
int DialogQueue_PushEntry(void* /*DialogQueue*/ self) {
    return 0;
}

// DialogQueue::RemoveEntry @ 0x5D4ED0 (76B)
REVERSE(0x5D4ED0, "IDA decompilation", "None")
int DialogQueue_RemoveEntry(void* /*DialogQueue*/ self) {
    return 0;
}

// Dialog::GetModeNeg2 @ 0x5D5DC0 (14B)
REVERSE(0x5D5DC0, "IDA decompilation", "None")
int Dialog_GetModeNeg2(void* /*Dialog*/ self) {
    return 0;
}

// Dialog::GetMode3 @ 0x5D5DD0 (14B)
REVERSE(0x5D5DD0, "IDA decompilation", "None")
int Dialog_GetMode3(void* /*Dialog*/ self) {
    return 0;
}

// DialogClass::GetFlag @ 0x5D6350 (4B)
REVERSE(0x5D6350, "IDA decompilation", "None")
int DialogClass_GetFlag(void* /*DialogClass*/ self) {
    return 0;
}

// VectorClass_ptr_MultiplayerTeam::Get @ 0x5D8100 (13B)
REVERSE(0x5D8100, "IDA decompilation", "None")
int VectorClass_ptr_MultiplayerTeam_Get(void* /*VectorClass_ptr_MultiplayerTeam*/ self) {
    return 0;
}

// VectorClass_ptr_MultiplayerTeam::Add @ 0x5D82F0 (62B)
REVERSE(0x5D82F0, "IDA decompilation", "None")
int VectorClass_ptr_MultiplayerTeam_Add(void* /*VectorClass_ptr_MultiplayerTeam*/ self) {
    return 0;
}

// VectorClass_ptr_MultiplayerTeam::Release @ 0x5D8330 (174B)
REVERSE(0x5D8330, "IDA decompilation", "None")
int VectorClass_ptr_MultiplayerTeam_Release(void* /*VectorClass_ptr_MultiplayerTeam*/ self) {
    return 0;
}

// VectorClass_ptr_MultiplayerTeam::Remove @ 0x5D83E0 (39B)
REVERSE(0x5D83E0, "IDA decompilation", "None")
void VectorClass_ptr_MultiplayerTeam_Remove(void* /*VectorClass_ptr_MultiplayerTeam*/ self) {
    (void)self;
}

// VectorClass_ptr_MultiplayerTeam::GetSize @ 0x5D8410 (51B)
REVERSE(0x5D8410, "IDA decompilation", "None")
int VectorClass_ptr_MultiplayerTeam_GetSize(void* /*VectorClass_ptr_MultiplayerTeam*/ self) {
    return 0;
}

// VectorClass_ptr_MultiplayerTeam::GetCapacity @ 0x5D8450 (27B)
REVERSE(0x5D8450, "IDA decompilation", "None")
int VectorClass_ptr_MultiplayerTeam_GetCapacity(void* /*VectorClass_ptr_MultiplayerTeam*/ self) {
    return 0;
}

// GameInit::InitMultiplayerModes @ 0x5D86D0 (93B)
REVERSE(0x5D86D0, "IDA decompilation", "None")
int GameInit_InitMultiplayerModes(void* /*GameInit*/ self) {
    return 0;
}

// MultiplayerTeamVector::Destruct @ 0x5D8860 (73B)
REVERSE(0x5D8860, "IDA decompilation", "None")
int MultiplayerTeamVector_Destruct(void* /*MultiplayerTeamVector*/ self) {
    return 0;
}

// MultiplayerModeVector::Destruct @ 0x5D88B0 (73B)
REVERSE(0x5D88B0, "IDA decompilation", "None")
int MultiplayerModeVector_Destruct(void* /*MultiplayerModeVector*/ self) {
    return 0;
}

// MultiplayerModeVector2::Destruct @ 0x5D8900 (73B)
REVERSE(0x5D8900, "IDA decompilation", "None")
int MultiplayerModeVector2_Destruct(void* /*MultiplayerModeVector2*/ self) {
    return 0;
}

// MultiplayerGameMode::ConstructMultiplayerGameModeVectorClass @ 0x5D89F0 (74B)
REVERSE(0x5D89F0, "IDA decompilation", "None")
int MultiplayerGameMode_ConstructMultiplayerGameModeVectorClass(void* /*MultiplayerGameMode*/ self) {
    return 0;
}

// UpdateMultiplayerPlayerOptions @ 0x5DBF50 (539B)
REVERSE(0x5DBF50, "IDA decompilation", "None")
int UpdateMultiplayerPlayerOptions(void) {
    return 0;
}

// SynchronizeMultiplayerGameStart @ 0x5DD8A0 (804B)
REVERSE(0x5DD8A0, "IDA decompilation", "None")
int SynchronizeMultiplayerGameStart(void) {
    return 0;
}

// SkirmishDialogProc @ 0x5DF180 (648B)
REVERSE(0x5DF180, "IDA decompilation", "None")
int SkirmishDialogProc(void) {
    return 0;
}

// Dialog::FindGameUI @ 0x5E26C0 (53B)
REVERSE(0x5E26C0, "IDA decompilation", "None")
int Dialog_FindGameUI(void* /*Dialog*/ self) {
    return 0;
}

// Dialog::ShowMessage @ 0x5E2700 (135B)
REVERSE(0x5E2700, "IDA decompilation", "None")
HWND Dialog_ShowMessage(void* /*Dialog*/ self) {
    return nullptr;
}

// Dialog::ShowStatusText @ 0x5E2790 (135B)
REVERSE(0x5E2790, "IDA decompilation", "None")
HWND Dialog_ShowStatusText(void* /*Dialog*/ self) {
    return nullptr;
}

// ShowDialogConfirm @ 0x5E2CD0 (364B)
REVERSE(0x5E2CD0, "IDA decompilation", "None")
int ShowDialogConfirm(void) {
    return 0;
}

// SetDialogPlayerName @ 0x5E2EF0 (48B)
REVERSE(0x5E2EF0, "IDA decompilation", "None")
void SetDialogPlayerName(void) {
}

// Dialog::ShowPlayerName @ 0x5E2F60 (32B)
REVERSE(0x5E2F60, "IDA decompilation", "None")
LRESULT Dialog_ShowPlayerName(void* /*Dialog*/ self) {
    return 0;
}

// SetupNetworkLobbyDialog @ 0x5E3D10 (8702B)
REVERSE(0x5E3D10, "IDA decompilation", "None")
bool SetupNetworkLobbyDialog(void) {
    return false;
}

// SkirmishSetup::DlgProc @ 0x5E6920 (1828B)
REVERSE(0x5E6920, "IDA decompilation", "None")
int SkirmishSetup_DlgProc(void* /*SkirmishSetup*/ self) {
    return 0;
}

// HandleMultiplayerMapSelection @ 0x5E7160 (767B)
REVERSE(0x5E7160, "IDA decompilation", "None")
int HandleMultiplayerMapSelection(void) {
    return 0;
}

// Dialog::MapPlayerIDToIndex @ 0x5E9950 (105B)
REVERSE(0x5E9950, "IDA decompilation", "None")
int Dialog_MapPlayerIDToIndex(void* /*Dialog*/ self) {
    return 0;
}

// SetupSkirmishPlayerSlots @ 0x5E9E70 (593B)
REVERSE(0x5E9E70, "IDA decompilation", "None")
int SetupSkirmishPlayerSlots(void) {
    return 0;
}

// UpdateMultiplayerLobbySlots @ 0x5EB7B0 (592B)
REVERSE(0x5EB7B0, "IDA decompilation", "None")
int UpdateMultiplayerLobbySlots(void) {
    return 0;
}

// DisableCampaignSlots @ 0x5EBC00 (464B)
REVERSE(0x5EBC00, "IDA decompilation", "None")
void DisableCampaignSlots(void) {
}

// MultiplayerLobby::FillSlots @ 0x5EC030 (607B)
REVERSE(0x5EC030, "IDA decompilation", "None")
int MultiplayerLobby_FillSlots(void* /*MultiplayerLobby*/ self) {
    return 0;
}

// PlayerSkirmishSlotHandler @ 0x5EC9F0 (2168B)
REVERSE(0x5EC9F0, "IDA decompilation", "None")
int PlayerSkirmishSlotHandler(void) {
    return 0;
}

// SaveMultiplayerLobbySettings @ 0x5ED400 (409B)
REVERSE(0x5ED400, "IDA decompilation", "None")
int SaveMultiplayerLobbySettings(void) {
    return 0;
}

// Dialog::RefreshDialogsGame @ 0x5EE350 (73B)
REVERSE(0x5EE350, "IDA decompilation", "None")
HWND Dialog_RefreshDialogsGame(void* /*Dialog*/ self) {
    return nullptr;
}

// SkirmishVector::PushBack @ 0x5EEE40 (80B)
REVERSE(0x5EEE40, "IDA decompilation", "None")
int SkirmishVector_PushBack(void* /*SkirmishVector*/ self) {
    return 0;
}

// Network::ModemConnectionDialog @ 0x5EF4E0 (2561B)
REVERSE(0x5EF4E0, "IDA decompilation", "None")
int Network_ModemConnectionDialog(void* /*Network*/ self) {
    return 0;
}

// CleanupCampaignResources @ 0x5F0070 (175B)
REVERSE(0x5F0070, "IDA decompilation", "None")
int CleanupCampaignResources(void) {
    return 0;
}

// Dialog::RunModemDialing @ 0x5F2950 (903B)
REVERSE(0x5F2950, "IDA decompilation", "None")
int Dialog_RunModemDialing(void* /*Dialog*/ self) {
    return 0;
}

// Dialog::CheckButtonState @ 0x5F3450 (66B)
REVERSE(0x5F3450, "IDA decompilation", "None")
int Dialog_CheckButtonState(void* /*Dialog*/ self) {
    return 0;
}

// Gadget::InitProperties @ 0x600630 (45B)
REVERSE(0x600630, "IDA decompilation", "None")
int Gadget_InitProperties(void* /*Gadget*/ self) {
    return 0;
}

// NavigateDialogTab @ 0x600C70 (47B)
REVERSE(0x600C70, "IDA decompilation", "None")
int NavigateDialogTab(void) {
    return 0;
}

// ValidateDialogEvent @ 0x600CA0 (1718B)
REVERSE(0x600CA0, "IDA decompilation", "None")
int ValidateDialogEvent(void) {
    return 0;
}

// CtlDialogColorHandler @ 0x6015E0 (1848B)
REVERSE(0x6015E0, "IDA decompilation", "None")
int CtlDialogColorHandler(void) {
    return 0;
}

// ValidateDialogControl @ 0x601D20 (1730B)
REVERSE(0x601D20, "IDA decompilation", "None")
int ValidateDialogControl(void) {
    return 0;
}

// IsValidActionDialog @ 0x602490 (1602B)
REVERSE(0x602490, "IDA decompilation", "None")
bool IsValidActionDialog(void) {
    return false;
}

// Dialog::IsSpecialTemplate @ 0x602AE0 (161B)
REVERSE(0x602AE0, "IDA decompilation", "None")
bool Dialog_IsSpecialTemplate(void* /*Dialog*/ self) {
    return false;
}

// IsDialogControlHidden @ 0x602DD0 (527B)
REVERSE(0x602DD0, "IDA decompilation", "None")
int IsDialogControlHidden(void) {
    return 0;
}

// LoadCampaignMissionData @ 0x603040 (503B)
REVERSE(0x603040, "IDA decompilation", "None")
int LoadCampaignMissionData(void) {
    return 0;
}

// DispatchDialogControlAction @ 0x6035F0 (530B)
REVERSE(0x6035F0, "IDA decompilation", "None")
int DispatchDialogControlAction(void) {
    return 0;
}

// GetDialogControlSHP @ 0x603870 (550B)
REVERSE(0x603870, "IDA decompilation", "None")
void GetDialogControlSHP(void) {
}

// IsDialogWindowClass @ 0x603AA0 (646B)
REVERSE(0x603AA0, "IDA decompilation", "None")
int IsDialogWindowClass(void) {
    return 0;
}

// CacheDialogInvalidate @ 0x603D30 (116B)
REVERSE(0x603D30, "IDA decompilation", "None")
HWND CacheDialogInvalidate(void) {
    return nullptr;
}

// GetSkirmishMenuOwnerName @ 0x604060 (71B)
REVERSE(0x604060, "IDA decompilation", "None")
int GetSkirmishMenuOwnerName(void) {
    return 0;
}

// DlgSkirmishMenuProc @ 0x6040B0 (9871B)
REVERSE(0x6040B0, "IDA decompilation", "None")
int DlgSkirmishMenuProc(void) {
    return 0;
}

// SetDialogActiveFlag @ 0x606740 (96B)
REVERSE(0x606740, "IDA decompilation", "None")
int SetDialogActiveFlag(void) {
    return 0;
}

// Dialog::MapControlToAction @ 0x606800 (2496B)
REVERSE(0x606800, "IDA decompilation", "None")
bool Dialog_MapControlToAction(void* /*Dialog*/ self) {
    return false;
}

// Dialog::StopBink @ 0x607FD0 (155B)
REVERSE(0x607FD0, "IDA decompilation", "None")
int Dialog_StopBink(void* /*Dialog*/ self) {
    return 0;
}

// Dialog::IdleProcess @ 0x608070 (496B)
REVERSE(0x608070, "IDA decompilation", "None")
int Dialog_IdleProcess(void* /*Dialog*/ self) {
    return 0;
}

// SkirmishSetup::sub_608260 @ 0x608260 (273B)
REVERSE(0x608260, "IDA decompilation", "None")
int SkirmishSetup_sub_608260(void* /*SkirmishSetup*/ self) {
    return 0;
}

// SaveLoadDialog::sub_608380 @ 0x608380 (92B)
REVERSE(0x608380, "IDA decompilation", "None")
int SaveLoadDialog_sub_608380(void* /*SaveLoadDialog*/ self) {
    return 0;
}

// SaveLoadDialog::sub_6083E0 @ 0x6083E0 (92B)
REVERSE(0x6083E0, "IDA decompilation", "None")
int SaveLoadDialog_sub_6083E0(void* /*SaveLoadDialog*/ self) {
    return 0;
}

// ControlDialogHandler @ 0x608500 (1998B)
REVERSE(0x608500, "IDA decompilation", "None")
int ControlDialogHandler(void) {
    return 0;
}

// IsDialogControlVisible @ 0x608CD0 (2508B)
REVERSE(0x608CD0, "IDA decompilation", "None")
int IsDialogControlVisible(void) {
    return 0;
}

// GetDialogDefaultButton @ 0x609730 (865B)
REVERSE(0x609730, "IDA decompilation", "None")
bool GetDialogDefaultButton(void) {
    return false;
}

// FilterDialogButtonAction @ 0x609E20 (725B)
REVERSE(0x609E20, "IDA decompilation", "None")
int FilterDialogButtonAction(void) {
    return 0;
}

// Dialog::HandleTabKey @ 0x60A330 (610B)
REVERSE(0x60A330, "IDA decompilation", "None")
bool Dialog_HandleTabKey(void* /*Dialog*/ self) {
    return false;
}

// Dialog::DispatchEvent @ 0x60A5B0 (1184B)
REVERSE(0x60A5B0, "IDA decompilation", "None")
bool Dialog_DispatchEvent(void* /*Dialog*/ self) {
    return false;
}

// Dialog::EnumAndCleanup @ 0x60AAA0 (15B)
REVERSE(0x60AAA0, "IDA decompilation", "None")
bool Dialog_EnumAndCleanup(void* /*Dialog*/ self) {
    return false;
}

// GadgetClass::FindByWindow @ 0x60AAB0 (1156B)
REVERSE(0x60AAB0, "IDA decompilation", "None")
bool GadgetClass_FindByWindow(void* /*GadgetClass*/ self) {
    return false;
}

// Control::RepositionControlsDialog @ 0x60B950 (1895B)
REVERSE(0x60B950, "IDA decompilation", "None")
int Control_RepositionControlsDialog(void* /*Control*/ self) {
    return 0;
}

// RepositionDialogControls @ 0x60C0C0 (987B)
REVERSE(0x60C0C0, "IDA decompilation", "None")
bool RepositionDialogControls(void) {
    return false;
}

// ResizeDialogAndEnum @ 0x60C4A0 (54B)
REVERSE(0x60C4A0, "IDA decompilation", "None")
bool ResizeDialogAndEnum(void) {
    return false;
}

// Control::CheckControlTypeDialog @ 0x60C540 (648B)
REVERSE(0x60C540, "IDA decompilation", "None")
int Control_CheckControlTypeDialog(void* /*Control*/ self) {
    return 0;
}

// CampaignScore::sub_60CBA0 @ 0x60CBA0 (92B)
REVERSE(0x60CBA0, "IDA decompilation", "None")
int CampaignScore_sub_60CBA0(void* /*CampaignScore*/ self) {
    return 0;
}

// CampaignScore::sub_60CC00 @ 0x60CC00 (92B)
REVERSE(0x60CC00, "IDA decompilation", "None")
int CampaignScore_sub_60CC00(void* /*CampaignScore*/ self) {
    return 0;
}

// Control::CreateControlDialog @ 0x60CF00 (951B)
REVERSE(0x60CF00, "IDA decompilation", "None")
int Control_CreateControlDialog(void* /*Control*/ self) {
    return 0;
}

// Campaign::Screen @ 0x60D380 (175B)
REVERSE(0x60D380, "IDA decompilation", "None")
LONG Campaign_Screen(void* /*Campaign*/ self) {
    return 0L;
}

// DialogClass::RegisterWinClasses @ 0x60D450 (201B)
REVERSE(0x60D450, "IDA decompilation", "None")
int DialogClass_RegisterWinClasses(void* /*DialogClass*/ self) {
    return 0;
}

// Dialog::SubclassEditControl @ 0x60F320 (385B)
REVERSE(0x60F320, "IDA decompilation", "None")
bool Dialog_SubclassEditControl(void* /*Dialog*/ self) {
    return false;
}

// InitializeDialogControls @ 0x60F4B0 (678B)
REVERSE(0x60F4B0, "IDA decompilation", "None")
int InitializeDialogControls(void) {
    return 0;
}

// Dialog::InitWindow @ 0x60F760 (566B)
REVERSE(0x60F760, "IDA decompilation", "None")
bool Dialog_InitWindow(void* /*Dialog*/ self) {
    return false;
}

// Dialog::InitializeControls @ 0x60F9A0 (2481B)
REVERSE(0x60F9A0, "IDA decompilation", "None")
bool Dialog_InitializeControls(void* /*Dialog*/ self) {
    return false;
}

// Dialog::DestroyDialogSystem @ 0x610360 (518B)
REVERSE(0x610360, "IDA decompilation", "None")
int Dialog_DestroyDialogSystem(void* /*Dialog*/ self) {
    return 0;
}

// DestroyDialogChildWindow @ 0x610570 (548B)
REVERSE(0x610570, "IDA decompilation", "None")
bool DestroyDialogChildWindow(void) {
    return false;
}

// Dialog::TabControlPaint @ 0x6137D0 (2495B)
REVERSE(0x6137D0, "IDA decompilation", "None")
LRESULT Dialog_TabControlPaint(void* /*Dialog*/ self) {
    return 0;
}

// InitDialogCountryIcons @ 0x61F210 (3646B)
REVERSE(0x61F210, "IDA decompilation", "None")
int InitDialogCountryIcons(void) {
    return 0;
}

// Dialog::Resize @ 0x6213A0 (266B)
REVERSE(0x6213A0, "IDA decompilation", "None")
LONG Dialog_Resize(void* /*Dialog*/ self) {
    return 0L;
}

// DestroyDialog @ 0x6223C0 (119B)
REVERSE(0x6223C0, "IDA decompilation", "None")
int DestroyDialog(void) {
    return 0;
}

// CreateDialog @ 0x622650 (193B)
REVERSE(0x622650, "IDA decompilation", "None")
int gamemd_CreateDialog(void) {
    return 0;
}

// Dialog::Destroy @ 0x622720 (224B)
REVERSE(0x622720, "IDA decompilation", "None")
HWND Dialog_Destroy(void* /*Dialog*/ self) {
    return nullptr;
}

// Dialog::Show @ 0x622800 (32B)
REVERSE(0x622800, "IDA decompilation", "None")
int Dialog_Show(void* /*Dialog*/ self) {
    return 0;
}

// SetupDialog @ 0x622820 (810B)
REVERSE(0x622820, "IDA decompilation", "None")
int SetupDialog(void) {
    return 0;
}

// BaseDialogProc @ 0x622B50 (1418B)
REVERSE(0x622B50, "IDA decompilation", "None")
int BaseDialogProc(void) {
    return 0;
}

// Dialog::PumpMessages @ 0x623120 (66B)
REVERSE(0x623120, "IDA decompilation", "None")
int Dialog_PumpMessages(void* /*Dialog*/ self) {
    return 0;
}

// DialogControl::Constructor @ 0x623340 (81B)
REVERSE(0x623340, "IDA decompilation", "None")
int DialogControl_Constructor(void* /*DialogControl*/ self) {
    return 0;
}

// Dialog::CleanupTree @ 0x6233A0 (115B)
REVERSE(0x6233A0, "IDA decompilation", "None")
void Dialog_CleanupTree(void* /*Dialog*/ self) {
    (void)self;
}

// GadgetClass::SetTooltip @ 0x623560 (75B)
REVERSE(0x623560, "IDA decompilation", "None")
void GadgetClass_SetTooltip(void* /*GadgetClass*/ self) {
    (void)self;
}

// DialogClass::CopyTemplateStruct @ 0x623610 (277B)
REVERSE(0x623610, "IDA decompilation", "None")
int DialogClass_CopyTemplateStruct(void* /*DialogClass*/ self) {
    return 0;
}

// GetDialogText @ 0x623E40 (95B)
REVERSE(0x623E40, "IDA decompilation", "None")
LRESULT GetDialogText(void) {
    return 0;
}

// SimpleDialogControl::Constructor @ 0x624110 (17B)
REVERSE(0x624110, "IDA decompilation", "None")
int SimpleDialogControl_Constructor(void* /*SimpleDialogControl*/ self) {
    return 0;
}

// RunDialog @ 0x6241F0 (182B)
REVERSE(0x6241F0, "IDA decompilation", "None")
int RunDialog(void) {
    return 0;
}

// Dialog::sub_624930 @ 0x624930 (103B)
REVERSE(0x624930, "IDA decompilation", "None")
int Dialog_sub_624930(void* /*Dialog*/ self) {
    return 0;
}

// Dialog::sub_624BE0 @ 0x624BE0 (156B)
REVERSE(0x624BE0, "IDA decompilation", "None")
void Dialog_sub_624BE0(void* /*Dialog*/ self) {
    (void)self;
}

// Dialog::BindGadgetData @ 0x624CA0 (794B)
REVERSE(0x624CA0, "IDA decompilation", "None")
int Dialog_BindGadgetData(void* /*Dialog*/ self) {
    return 0;
}

// PhoneEditorDialogProc @ 0x630C10 (647B)
REVERSE(0x630C10, "IDA decompilation", "None")
int PhoneEditorDialogProc(void) {
    return 0;
}

// ShowDiplomacyDialog @ 0x6586D0 (150B)
REVERSE(0x6586D0, "IDA decompilation", "None")
int ShowDiplomacyDialog(void) {
    return 0;
}

// LaunchMultiplayerHost @ 0x663DB0 (816B)
REVERSE(0x663DB0, "IDA decompilation", "None")
bool LaunchMultiplayerHost(void) {
    return false;
}

// Dialog::ReadMultiplayerDialogSettings @ 0x671EA0 (903B)
REVERSE(0x671EA0, "IDA decompilation", "None")
int Dialog_ReadMultiplayerDialogSettings(void* /*Dialog*/ self) {
    return 0;
}

// RulesClass::ReadMultiplayerDefaults @ 0x672AE0 (5015B)
REVERSE(0x672AE0, "IDA decompilation", "None")
int RulesClass_ReadMultiplayerDefaults(void* /*RulesClass*/ self) {
    return 0;
}

// WaitForMultiplayerLoadSync @ 0x684370 (676B)
REVERSE(0x684370, "IDA decompilation", "None")
int WaitForMultiplayerLoadSync(void) {
    return 0;
}

// Multiplayer::FindStartPositions @ 0x688380 (813B)
REVERSE(0x688380, "IDA decompilation", "None")
int Multiplayer_FindStartPositions(void* /*Multiplayer*/ self) {
    return 0;
}

// Multiplayer::sub_68C2B0 @ 0x68C2B0 (124B)
REVERSE(0x68C2B0, "IDA decompilation", "None")
int Multiplayer_sub_68C2B0(void* /*Multiplayer*/ self) {
    return 0;
}

// NetworkDialog::InitModemSettings @ 0x695FD0 (556B)
REVERSE(0x695FD0, "IDA decompilation", "None")
HWND NetworkDialog_InitModemSettings(void* /*NetworkDialog*/ self) {
    return nullptr;
}

// NetworkDialog::sub_6964C0 @ 0x6964C0 (205B)
REVERSE(0x6964C0, "IDA decompilation", "None")
HWND NetworkDialog_sub_6964C0(void* /*NetworkDialog*/ self) {
    return nullptr;
}

// NetworkDialog::UpdateListBox @ 0x696610 (181B)
REVERSE(0x696610, "IDA decompilation", "None")
HWND NetworkDialog_UpdateListBox(void* /*NetworkDialog*/ self) {
    return nullptr;
}

// Game::DumpMultiplayerGameInfo @ 0x698CB0 (728B)
REVERSE(0x698CB0, "IDA decompilation", "None")
int Game_DumpMultiplayerGameInfo(void* /*Game*/ self) {
    return 0;
}

// ScenarioClass::SaveMultiplayerSettings @ 0x699450 (159B)
REVERSE(0x699450, "IDA decompilation", "None")
void ScenarioClass_SaveMultiplayerSettings(void* /*ScenarioClass*/ self) {
    (void)self;
}

// Multiplayer::ShowProgress @ 0x69AE90 (713B)
REVERSE(0x69AE90, "IDA decompilation", "None")
void Multiplayer_ShowProgress(void* /*Multiplayer*/ self) {
    (void)self;
}

// MouseClass::ToggleContextGadget @ 0x6D1770 (132B)
REVERSE(0x6D1770, "IDA decompilation", "None")
int MouseClass_ToggleContextGadget(void* /*MouseClass*/ self) {
    return 0;
}

// GadgetClass::Show @ 0x723EA0 (9B)
REVERSE(0x723EA0, "IDA decompilation", "None")
int GadgetClass_Show(void* /*GadgetClass*/ self) {
    return 0;
}

// GadgetClass::Hide @ 0x723EB0 (9B)
REVERSE(0x723EB0, "IDA decompilation", "None")
int GadgetClass_Hide(void* /*GadgetClass*/ self) {
    return 0;
}

// GadgetClass::ProcessMouseOver @ 0x723EC0 (278B)
REVERSE(0x723EC0, "IDA decompilation", "None")
int GadgetClass_ProcessMouseOver(void* /*GadgetClass*/ self) {
    return 0;
}

// CampaignScore::LoadCampaignScoreAssetsGame @ 0x72D300 (70B)
REVERSE(0x72D300, "IDA decompilation", "None")
int CampaignScore_LoadCampaignScoreAssetsGame(void* /*CampaignScore*/ self) {
    return 0;
}

// CampaignScore::LoadScreenAssets @ 0x72D460 (417B)
REVERSE(0x72D460, "IDA decompilation", "None")
void CampaignScore_LoadScreenAssets(void* /*CampaignScore*/ self) {
    (void)self;
}

// Game::LoadMultiplayerScoreAssets @ 0x72D730 (70B)
REVERSE(0x72D730, "IDA decompilation", "None")
int Game_LoadMultiplayerScoreAssets(void* /*Game*/ self) {
    return 0;
}

// CampaignConstructorWDT @ 0x764B90 (922B)
REVERSE(0x764B90, "IDA decompilation", "None")
int CampaignConstructorWDT(void) {
    return 0;
}

// Campaign_WorldDominationTour[16]::Seek @ 0x7656D0 (47B)
REVERSE(0x7656D0, "IDA decompilation", "None")
int Campaign_WorldDominationTour_16_Seek(void* /*Campaign_WorldDominationTour[16]*/ self) {
    return 0;
}

// Campaign_WorldDominationTour[24]::AddRef @ 0x765700 (14B)
REVERSE(0x765700, "IDA decompilation", "None")
bool Campaign_WorldDominationTour_24_AddRef(void* /*Campaign_WorldDominationTour[24]*/ self) {
    return false;
}

// Campaign_WorldDominationTour[16]::sub_765710 @ 0x765710 (36B)
REVERSE(0x765710, "IDA decompilation", "None")
int Campaign_WorldDominationTour_16_sub_765710(void* /*Campaign_WorldDominationTour[16]*/ self) {
    return 0;
}

// Campaign_WorldDominationTour[16]::sub_765740 @ 0x765740 (36B)
REVERSE(0x765740, "IDA decompilation", "None")
int Campaign_WorldDominationTour_16_sub_765740(void* /*Campaign_WorldDominationTour[16]*/ self) {
    return 0;
}

// Campaign_WorldDominationTour[16]::sub_765770 @ 0x765770 (32B)
REVERSE(0x765770, "IDA decompilation", "None")
int Campaign_WorldDominationTour_16_sub_765770(void* /*Campaign_WorldDominationTour[16]*/ self) {
    return 0;
}

// Campaign_WorldDominationTour[16]::AddRef @ 0x7657F0 (70B)
REVERSE(0x7657F0, "IDA decompilation", "None")
int Campaign_WorldDominationTour_16_AddRef(void* /*Campaign_WorldDominationTour[16]*/ self) {
    return 0;
}

// Campaign_WorldDominationTour[16]::Release @ 0x765840 (282B)
REVERSE(0x765840, "IDA decompilation", "None")
int Campaign_WorldDominationTour_16_Release(void* /*Campaign_WorldDominationTour[16]*/ self) {
    return 0;
}

// Campaign_WorldDominationTour[16]::ddtor @ 0x765960 (40B)
REVERSE(0x765960, "IDA decompilation", "None")
int Campaign_WorldDominationTour_16_ddtor(void* /*Campaign_WorldDominationTour[16]*/ self) {
    return 0;
}

// Campaign_WorldDominationTour[16]::Read @ 0x765990 (55B)
REVERSE(0x765990, "IDA decompilation", "None")
int Campaign_WorldDominationTour_16_Read(void* /*Campaign_WorldDominationTour[16]*/ self) {
    return 0;
}

// Campaign_WorldDominationTour[16]::Write @ 0x7659D0 (27B)
REVERSE(0x7659D0, "IDA decompilation", "None")
int Campaign_WorldDominationTour_16_Write(void* /*Campaign_WorldDominationTour[16]*/ self) {
    return 0;
}

// Campaign_WorldDominationTour[24]::Release @ 0x765B40 (6B)
REVERSE(0x765B40, "IDA decompilation", "None")
int Campaign_WorldDominationTour_24_Release(void* /*Campaign_WorldDominationTour[24]*/ self) {
    return 0;
}

// Campaign_WorldDominationTour[24]::ddtor @ 0x765B50 (6B)
REVERSE(0x765B50, "IDA decompilation", "None")
int Campaign_WorldDominationTour_24_ddtor(void* /*Campaign_WorldDominationTour[24]*/ self) {
    return 0;
}

// CampaignProperties_WorldDominationTour[22]::AddRef @ 0x76F0F0 (14B)
REVERSE(0x76F0F0, "IDA decompilation", "None")
bool CampaignProperties_WorldDominationTour_22_AddRef(void* /*CampaignProperties_WorldDominationTour[22]*/ self) {
    return false;
}

// CampaignProperties_WorldDominationTour[22]::Release @ 0x76F1A0 (6B)
REVERSE(0x76F1A0, "IDA decompilation", "None")
int CampaignProperties_WorldDominationTour_22_Release(void* /*CampaignProperties_WorldDominationTour[22]*/ self) {
    return 0;
}

// CampaignProperties_WorldDominationTour[22]::ddtor @ 0x76F1B0 (6B)
REVERSE(0x76F1B0, "IDA decompilation", "None")
int CampaignProperties_WorldDominationTour_22_ddtor(void* /*CampaignProperties_WorldDominationTour[22]*/ self) {
    return 0;
}

// WebBrowser::ShowDialog @ 0x773E90 (478B)
REVERSE(0x773E90, "IDA decompilation", "None")
HWND WebBrowser_ShowDialog(void* /*WebBrowser*/ self) {
    return nullptr;
}

// ScreenDialogToClient @ 0x775690 (108B)
REVERSE(0x775690, "IDA decompilation", "None")
bool ScreenDialogToClient(void) {
    return false;
}

// CreateDialogIndirect @ 0x775700 (212B)
REVERSE(0x775700, "IDA decompilation", "None")
int gamemd_CreateDialogIndirect(void) {
    return 0;
}

// CloseDialog @ 0x7757E0 (293B)
REVERSE(0x7757E0, "IDA decompilation", "None")
int CloseDialog(void) {
    return 0;
}

// Dialog::FindByHandle @ 0x775940 (40B)
REVERSE(0x775940, "IDA decompilation", "None")
int Dialog_FindByHandle(void* /*Dialog*/ self) {
    return 0;
}

// Dialog::FindByPtr @ 0x7759B0 (44B)
REVERSE(0x7759B0, "IDA decompilation", "None")
int Dialog_FindByPtr(void* /*Dialog*/ self) {
    return 0;
}

// MessageDialogLoopAlt @ 0x7759E0 (300B)
REVERSE(0x7759E0, "IDA decompilation", "None")
int MessageDialogLoopAlt(void) {
    return 0;
}

// Dialog::GetCurrent @ 0x775B10 (6B)
REVERSE(0x775B10, "IDA decompilation", "None")
HWND Dialog_GetCurrent(void* /*Dialog*/ self) {
    return nullptr;
}

// Dialog::GetCurrentType @ 0x775B20 (6B)
REVERSE(0x775B20, "IDA decompilation", "None")
int Dialog_GetCurrentType(void* /*Dialog*/ self) {
    return 0;
}

// Dialog::GetField @ 0x775BA0 (27B)
REVERSE(0x775BA0, "IDA decompilation", "None")
bool Dialog_GetField(void* /*Dialog*/ self) {
    return false;
}

// DialogClass::Reposition @ 0x775BC0 (420B)
REVERSE(0x775BC0, "IDA decompilation", "None")
bool DialogClass_Reposition(void* /*DialogClass*/ self) {
    return false;
}

// HitDialogTest @ 0x776490 (214B)
REVERSE(0x776490, "IDA decompilation", "None")
int HitDialogTest(void) {
    return 0;
}

// Dialog::RestoreParent @ 0x777060 (27B)
REVERSE(0x777060, "IDA decompilation", "None")
HWND Dialog_RestoreParent(void* /*Dialog*/ self) {
    return nullptr;
}

// SetDialogParent @ 0x777080 (218B)
REVERSE(0x777080, "IDA decompilation", "None")
bool SetDialogParent(void) {
    return false;
}

// GadgetClass::TrackState @ 0x77A700 (96B)
REVERSE(0x77A700, "IDA decompilation", "None")
int GadgetClass_TrackState(void* /*GadgetClass*/ self) {
    return 0;
}

// Dialog::UpdateGameUI @ 0x77D820 (28B)
REVERSE(0x77D820, "IDA decompilation", "None")
int Dialog_UpdateGameUI(void* /*Dialog*/ self) {
    return 0;
}

// ShowWOLLobbyDialog @ 0x77D840 (121B)
REVERSE(0x77D840, "IDA decompilation", "None")
int ShowWOLLobbyDialog(void) {
    return 0;
}

// Network::IsMultiplayerActive @ 0x77D940 (47B)
REVERSE(0x77D940, "IDA decompilation", "None")
bool Network_IsMultiplayerActive(void* /*Network*/ self) {
    return false;
}

// Setup2DlgProcMultiplayer @ 0x7983E0 (1237B)
REVERSE(0x7983E0, "IDA decompilation", "None")
int Setup2DlgProcMultiplayer(void) {
    return 0;
}

// GameModeDlgProcMultiplayer @ 0x7988C0 (1305B)
REVERSE(0x7988C0, "IDA decompilation", "None")
int GameModeDlgProcMultiplayer(void) {
    return 0;
}

// Dialog::CloseAll @ 0x799D10 (28B)
REVERSE(0x799D10, "IDA decompilation", "None")
HWND Dialog_CloseAll(void* /*Dialog*/ self) {
    return nullptr;
}

// WOLLoginDialogProc @ 0x79D720 (877B)
REVERSE(0x79D720, "IDA decompilation", "None")
int WOLLoginDialogProc(void) {
    return 0;
}

// ChatDialog::DlgProc @ 0x79DB50 (1162B)
REVERSE(0x79DB50, "IDA decompilation", "None")
int ChatDialog_DlgProc(void* /*ChatDialog*/ self) {
    return 0;
}

// GameOptionsScreenWOL @ 0x79F140 (2548B)
REVERSE(0x79F140, "IDA decompilation", "None")
int GameOptionsScreenWOL(void) {
    return 0;
}

// WonlineStringDialogControl[12]::sub_7AC630 @ 0x7AC630 (52B)
REVERSE(0x7AC630, "IDA decompilation", "None")
void WonlineStringDialogControl_12_sub_7AC630(void* /*WonlineStringDialogControl[12]*/ self) {
    (void)self;
}

// WonlineStringDialogControl[12]::sub_7AC970 @ 0x7AC970 (42B)
REVERSE(0x7AC970, "IDA decompilation", "None")
void WonlineStringDialogControl_12_sub_7AC970(void* /*WonlineStringDialogControl[12]*/ self) {
    (void)self;
}

// WonlineStringDialogControl[12]::sub_7AC9A0 @ 0x7AC9A0 (27B)
REVERSE(0x7AC9A0, "IDA decompilation", "None")
int WonlineStringDialogControl_12_sub_7AC9A0(void* /*WonlineStringDialogControl[12]*/ self) {
    return 0;
}

// WonlineStringDialogControl[12]::Seek @ 0x7AC9C0 (13B)
REVERSE(0x7AC9C0, "IDA decompilation", "None")
int WonlineStringDialogControl_12_Seek(void* /*WonlineStringDialogControl[12]*/ self) {
    return 0;
}

// WonlineStringDialogControl[12]::AddRef @ 0x7AD090 (62B)
REVERSE(0x7AD090, "IDA decompilation", "None")
int WonlineStringDialogControl_12_AddRef(void* /*WonlineStringDialogControl[12]*/ self) {
    return 0;
}

// WonlineStringDialogControl[12]::Release @ 0x7AD0D0 (174B)
REVERSE(0x7AD0D0, "IDA decompilation", "None")
int WonlineStringDialogControl_12_Release(void* /*WonlineStringDialogControl[12]*/ self) {
    return 0;
}

// WonlineStringDialogControl[12]::ddtor @ 0x7AD180 (39B)
REVERSE(0x7AD180, "IDA decompilation", "None")
void WonlineStringDialogControl_12_ddtor(void* /*WonlineStringDialogControl[12]*/ self) {
    (void)self;
}

// WonlineStringDialogControl[12]::Read @ 0x7AD1B0 (51B)
REVERSE(0x7AD1B0, "IDA decompilation", "None")
int WonlineStringDialogControl_12_Read(void* /*WonlineStringDialogControl[12]*/ self) {
    return 0;
}

// WonlineStringDialogControl[12]::Write @ 0x7AD1F0 (27B)
REVERSE(0x7AD1F0, "IDA decompilation", "None")
int WonlineStringDialogControl_12_Write(void* /*WonlineStringDialogControl[12]*/ self) {
    return 0;
}

// WonlineStringDialogControl[12]::sub_7AD210 @ 0x7AD210 (176B)
REVERSE(0x7AD210, "IDA decompilation", "None")
int WonlineStringDialogControl_12_sub_7AD210(void* /*WonlineStringDialogControl[12]*/ self) {
    return 0;
}

// WonlineStringDialogControl[12]::sub_7AD2C0 @ 0x7AD2C0 (38B)
REVERSE(0x7AD2C0, "IDA decompilation", "None")
int WonlineStringDialogControl_12_sub_7AD2C0(void* /*WonlineStringDialogControl[12]*/ self) {
    return 0;
}

// WonlineStringDialogControl[12]::sub_7AD3C0 @ 0x7AD3C0 (73B)
REVERSE(0x7AD3C0, "IDA decompilation", "None")
int WonlineStringDialogControl_12_sub_7AD3C0(void* /*WonlineStringDialogControl[12]*/ self) {
    return 0;
}

// WonlineStringDialogControl[28]::ddtor @ 0x7AD440 (26B)
REVERSE(0x7AD440, "IDA decompilation", "None")
int WonlineStringDialogControl_28_ddtor(void* /*WonlineStringDialogControl[28]*/ self) {
    return 0;
}

// WonlineStringDialogControl[28]::Read @ 0x7AD460 (29B)
REVERSE(0x7AD460, "IDA decompilation", "None")
int WonlineStringDialogControl_28_Read(void* /*WonlineStringDialogControl[28]*/ self) {
    return 0;
}

// WonlineStringDialogControl[28]::Write @ 0x7AD480 (241B)
REVERSE(0x7AD480, "IDA decompilation", "None")
int WonlineStringDialogControl_28_Write(void* /*WonlineStringDialogControl[28]*/ self) {
    return 0;
}

// WonlineStringDialogControl[28]::StubReturnFalse @ 0x7AD610 (5B)
REVERSE(0x7AD610, "IDA decompilation", "None")
int WonlineStringDialogControl_28_StubReturnFalse(void* /*WonlineStringDialogControl[28]*/ self) {
    return 0;
}

// WonlineStringDialogControl[28]::AddRef @ 0x7AD620 (17B)
REVERSE(0x7AD620, "IDA decompilation", "None")
LONG WonlineStringDialogControl_28_AddRef(void* /*WonlineStringDialogControl[28]*/ self) {
    return 0L;
}

// WonlineStringDialogControl[28]::Release @ 0x7AD640 (77B)
REVERSE(0x7AD640, "IDA decompilation", "None")
LONG WonlineStringDialogControl_28_Release(void* /*WonlineStringDialogControl[28]*/ self) {
    return 0L;
}

// StartWDTCampaign @ 0x7AFB90 (1252B)
REVERSE(0x7AFB90, "IDA decompilation", "None")
bool StartWDTCampaign(void) {
    return false;
}

// EndDialog @ 0x7C866E (6B)
REVERSE(0x7C866E, "IDA decompilation", "None")
int gamemd_EndDialog(void) {
    return 0;
}

// DialogBoxParamA @ 0x7C8680 (6B)
REVERSE(0x7C8680, "IDA decompilation", "None")
int gamemd_DialogBoxParamA(void) {
    return 0;
}

// DialogBoxIndirectParamA @ 0x7C8686 (6B)
REVERSE(0x7C8686, "IDA decompilation", "None")
int gamemd_DialogBoxIndirectParamA(void) {
    return 0;
}

// GetMenu @ 0x7C86F2 (6B)
REVERSE(0x7C86F2, "IDA decompilation", "None")
int gamemd_GetMenu(void) {
    return 0;
}

// CreateDialogParamA @ 0x7C8704 (6B)
REVERSE(0x7C8704, "IDA decompilation", "None")
int gamemd_CreateDialogParamA(void) {
    return 0;
}

// IsDialogMessageA @ 0x7C8722 (6B)
REVERSE(0x7C8722, "IDA decompilation", "None")
int gamemd_IsDialogMessageA(void) {
    return 0;
}

// CreateDialogIndirectParamA @ 0x7C87A0 (6B)
REVERSE(0x7C87A0, "IDA decompilation", "None")
int gamemd_CreateDialogIndirectParamA(void) {
    return 0;
}

} // namespace gamemd