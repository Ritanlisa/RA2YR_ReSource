#pragma once
// CSP: DisplayClass

class DisplayClass {
public:
    uint8_t pad_0[13]; // +0x0
    uint32_t member_D; // +0xD
    // 0x004AE720
    void GetSurface();
    // 0x004AC310
    void InitViewBounds();
    // 0x00551A90
    void InsertPriorityText();
    // 0x007BA4D0
    void ReadFromBuffer();
    // 0x004AE6B0
    void Render();
    // 0x005519B0
    void RenderStatusText();
    // 0x004A9840
    void SetCoordVisible();
    // 0x004A88C0
    void SetSize();
    // 0x004AE6F0
    void SetSurface();
    // 0x004A9700
    void Update();
    // 0x00487630
    void UpdateDisplayTimer();
    // 0x005F6220
    void checkScreenBounds();
    // 0x004A8930
    void ddtor();
    // 0x0040D250
    void vt_entry_AC();
    // 0x004AAD20
    void vt_entry_B0();
};
