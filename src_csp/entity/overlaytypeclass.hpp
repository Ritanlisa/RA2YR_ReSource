#pragma once
// CSP: OverlayTypeClass

class OverlayTypeClass : public ObjectTypeClass {
public:
    uint8_t pad_0[5834]; // +0x0
    uint32_t member_16CA; // +0x16CA
    // 0x006440A0
    void Construct();
    // 0x005FEF20
    void GetAuxField();
    // 0x005FEC30
    void GetClassIdentifier();
    // 0x005FE5A0
    void GetLandType();
    // 0x005FEF10
    void GetObjectSize();
    // 0x005FE4C0
    void GetTile();
    // 0x005FEF00
    void GetTypeIdentifier();
    // 0x005FE250
    void OverlayTypeClass();
    // 0x005FEA50
    void PowerDrainUpdate();
    // 0x005FEAF0
    void SaveLoad_Prefix();
    // 0x005FEC10
    void SaveLoad_Prefix_0();
    // 0x005FEA30
    void vt_entry_6C();
};
