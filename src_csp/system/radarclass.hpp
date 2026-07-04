#pragma once
// CSP: RadarClass

class RadarClass {
public:
    uint8_t pad_0[3785]; // +0x0
    uint32_t member_EC9; // +0xEC9
    // 0x00652960
    void Construct();
    // 0x0063F6B0
    void Create();
    // 0x00652DE0
    void Destru_vt07();
    // 0x00658770
    void Destru_vt33();
    // 0x006A8420
    void GetBlip();
    // 0x00656E50
    void IsActiveMode();
    // 0x00565190
    void Render();
    // 0x00565090
    void RenderMapPreview();
    // 0x004A8730
    void RenderSpySatellite();
    // 0x00656E90
    void SetFlag();
    // 0x00654EA0
    void UpdateBlips();
    // 0x0058AF80
    void drawRadarEvents();
    // 0x004F4220
    void initRadarSurface();
};
