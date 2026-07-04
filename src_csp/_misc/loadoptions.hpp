#pragma once
// CSP: LoadOptions

class LoadOptions {
public:
    uint8_t pad_0[258808]; // +0x0
    uint32_t member_3F2F8; // +0x3F2F8
    // 0x0055A2A0
    void ClearBuffer();
    // 0x0055A0B0
    void Close();
    // 0x0055A1F0
    void CopyItems();
    // 0x0055A2D0
    void FindItem();
    // 0x006812D0
    void GetFlag252();
    // 0x00681120
    void GetFlag98();
    // 0x00681140
    void GetFlag99();
    // 0x0055A090
    void Open();
    // 0x0055A310
    void PointerToIndex();
    // 0x00559ED0
    void Read();
    // 0x00559E40
    void Release();
    // 0x0055A070
    void Seek();
    // 0x0055A050
    void Write();
    // 0x00559EB0
    void ddtor();
    // 0x0055A1B0
    void vt01();
    // 0x0055A330
    void vt02();
    // 0x0055A150
    void vt03();
    // 0x0055A3E0
    void vt04();
    // 0x0055A180
    void vt05();
    // 0x0055A1A0
    void vt06();
};
