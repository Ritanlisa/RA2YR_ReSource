#pragma once
// CSP: EnumConnectionPointsClass

class EnumConnectionPointsClass {
public:
    uint8_t pad_0[3936]; // +0x0
    uint32_t member_F60; // +0xF60
    // 0x004A0990
    void AddRef();
    // 0x004A0F20
    void ClearBuffer();
    // 0x004A1470
    void FindItem();
    // 0x004A0AF0
    void Next();
    // 0x004A0F50
    void PointerToIndex();
    // 0x004A0920
    void QueryInterface();
    // 0x004A09B0
    void Release();
    // 0x004A13C0
    void SetCapacity();
    // 0x004A0B10
    void Skip();
    // 0x004A0A50
    void ddtor();
};
