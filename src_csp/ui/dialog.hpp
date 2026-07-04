#pragma once
// CSP: Dialog

class Dialog {
public:
    uint8_t pad_0[91]; // +0x0
    uint32_t member_5B; // +0x5B
    uint32_t member_5F; // +0x5F
    // 0x00624CA0
    void BindGadgetData();
    // 0x005F3450
    void CheckButtonState();
    // 0x00799D10
    void CloseAll();
    // 0x0060A5B0
    void DispatchEvent();
    // 0x005E26C0
    void FindGameUI();
    // 0x00775B10
    void GetCurrent();
    // 0x00775B20
    void GetCurrentType();
    // 0x005D5DD0
    void GetMode3();
    // 0x005D5DC0
    void GetModeNeg2();
    // 0x00624BE0
    void GrowBuffer();
    // 0x0060F760
    void InitWindow();
    // 0x0060F9A0
    void InitializeControls();
    // 0x00602AE0
    void IsSpecialTemplate();
    // 0x00606800
    void MapControlToAction();
    // 0x0049F740
    void MapDialogResource();
    // 0x00623120
    void PumpMessages();
    // 0x005D3490
    void ShowMessageBox();
    // 0x0060F320
    void SubclassEditControl();
    // 0x00624930
    void UpdateControlState();
    // 0x0077D820
    void UpdateGameUI();
};
