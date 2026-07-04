#pragma once
// CSP: LoadingScreen

class LoadingScreen {
public:
    uint8_t pad_0[345]; // +0x0
    uint32_t member_159; // +0x159
    // 0x00554100
    void AdjustForResolution();
    // 0x00554150
    void CalcProgressBarRect();
    // 0x0072F140
    void CleanupObjects();
    // 0x0072EF60
    void DestroyFileTrees();
    // 0x00642B30
    void FindLoadScreenAnim();
    // 0x00730400
    void FreeResources();
    // 0x0072B2F0
    void GetBackgroundImage();
    // 0x00642B60
    void GetColorScheme();
    // 0x0072B310
    void GetOverlayImage();
    // 0x00642B20
    void GetValue();
    // 0x0072CF40
    void Init();
    // 0x0072FA10
    void LoadSHPs();
    // 0x0072B390
    void ReleaseAnimObjects();
};
