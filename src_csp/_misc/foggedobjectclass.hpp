#pragma once
// CSP: FoggedObjectClass

class FoggedObjectClass : public AbstractClass {
public:
    // 0x004D29B0
    void AddRef();
    // 0x004D28D0
    void CheckVisibility();
    // 0x004D27D0
    void GetClassIdentifier();
    // 0x004D27C0
    void GetObjectSize();
    // 0x004D27B0
    void GetTypeIdentifier();
    // 0x004D2510
    void LoadTypeData();
    // 0x004D2CD0
    void Read();
    // 0x004D2BC0
    void ResizeArray();
    // 0x004D24A0
    void SaveToINI();
};
