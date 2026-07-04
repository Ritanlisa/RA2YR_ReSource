#pragma once
// CSP: SidebarClass

class SidebarClass {
public:
    uint8_t pad_0[1452]; // +0x0
    uint32_t member_5AC; // +0x5AC
    // 0x006A8220
    void InitCameoGrid();
    // 0x006568A0
    void Load();
    // 0x006A5840
    void LoadAssets();
    // 0x006D02B0
    void LoadButtonSHPs();
    // 0x005005B0
    void MarkTabForRebuild();
    // 0x006AAD00
    void ProcessInput();
    // 0x006A8330
    void RefreshCameoGrid();
    // 0x00637AB0
    void ResetProductionState();
    // 0x00656AC0
    void Save();
    // 0x006A5F20
    void UpdateCameoProductionState();
    // 0x006AA600
    void UpdateProduction();
    // 0x0063E880
    void addToList();
    // 0x0072AD90
    void calcSidebarRect();
    // 0x006AB9E0
    void deselect();
    // 0x004C9C50
    void draw();
    // 0x006CFCC0
    void findEntryIndexByName();
    // 0x00500700
    void getTypeProductionCount();
    // 0x006AC870
    void initButtons();
    // 0x0040D270
    void initButtons2();
    // 0x00724520
    void initializeStrip();
    // 0x00734250
    void registerBuildingType();
    // 0x006AC5E0
    void saveLoadPrefix2();
    // 0x006AB990
    void select();
    // 0x006A83E0
    void sortCameoList();
    // 0x0069DFC0
    void startButtonFlash();
    // 0x00724540
    void updateStripPosition();
    // 0x00724530
    void updateStripVisibility();
};
