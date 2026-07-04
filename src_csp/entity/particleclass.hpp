#pragma once
// CSP: ParticleClass

class ParticleClass {
public:
    uint8_t pad_0[4180]; // +0x0
    uint32_t member_1054; // +0x1054
    // 0x0062D710
    void CheckDrawFlags();
    // 0x0062D6F0
    void CheckMirrorState();
    // 0x0062D770
    void CheckStateFlag();
    // 0x0062E4C0
    void CreateInstance();
    // 0x0062D930
    void GetClassIdentifier();
    // 0x0062D970
    void GetObjectSize();
    // 0x0062D980
    void GetTypeIdentifier();
    // 0x0062D7A0
    void LoadParticleData();
    // 0x005B35E0
    void MissionDispatch();
    // 0x0062D990
    void Stub();
};
