#pragma once

// Declarations for cpp-only stub functions that need hpp visibility.
// Generated to resolve need_hpp_decl entries from unannotated_classification.
// Not auto-generated — manually curated.

namespace gamemd {

// === Campaign / Save Functions (menu_globals_gen.cpp) ===

int LoadCampaignCoopSave(void);        // 0x49C0D0 [stub: LoadCampaignCoopSave]
int DecodeCampaignPlayerName(void);     // 0x49CCF0 [stub: DecodeCampaignPlayerName]
int LoadCoopCampaignSave(void);         // 0x49D390 [stub: LoadCoopCampaignSave]
int SerializeCampaignOptions(void);     // 0x49D680 [stub: SerializeCampaignOptions]
int CampaignConstructorWDT(void);       // 0x764B90 [stub: CampaignConstructorWDT]

// === Menu / UI Functions (menu_globals_gen.cpp) ===

int ProcessGraphicMenu(void);           // 0x4F2300 [stub: ProcessGraphicMenu]
int MenuSelect(void);                   // 0x52D9A0 [stub: MenuSelect]
bool ShowSaveLoadDialog(void);          // 0x558810 [stub: ShowSaveLoadDialog]
int HandleMultiplayerMapSelection(void); // 0x5E7160 [stub: HandleMultiplayerMapSelection]
int DestroyDialog(void);                // 0x6223C0 [stub: DestroyDialog]
bool LaunchMultiplayerHost(void);       // 0x663DB0 [stub: LaunchMultiplayerHost]

// === Menu Select Helpers (menu_select.cpp) ===

int GetModuleInternalVersion(void*);    // 0x74FAE0 [stub: GetModuleInternalVersion]

} // namespace gamemd
