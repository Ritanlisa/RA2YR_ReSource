#pragma once
// CSP: CaptureManagerClass

class CaptureManagerClass : public AbstractClass {
public:
    uint8_t pad_0[675]; // +0x0
    uint32_t member_2A3; // +0x2A3
    // 0x006EA4F0
    void AddMember();
    // 0x00472B40
    void AddRef();
    // 0x004722A0
    void CannotControlAnyMore();
    // 0x00472D70
    void Capture();
    // 0x00472C30
    void Destroy();
    // 0x00472160
    void DrawLinks();
    // 0x00472960
    void GetClassIdentifier();
    // 0x004729A0
    void GetObjectSize();
    // 0x004722F0
    void GetOriginalOwner();
    // 0x004729B0
    void GetTypeIdentifier();
    // 0x00471A50
    void HandleOverload();
    // 0x00472C60
    void IndexOf();
    // 0x004726C0
    void IsOverloading();
    // 0x00472720
    void LoadFromStream();
    // 0x00472AB0
    void LoadTypeData();
    // 0x00472640
    void NeedsToDrawLinks();
    // 0x00472CA0
    void PointerToIndex();
    // 0x00472CC0
    void Release();
    // 0x004728E0
    void SaveToINI();
    // 0x00472B80
    void SetCapacity();
    // 0x00472A80
    void vt[03]();
    // 0x00472AD0
    void vt[06]();
};
