#pragma once
// CSP: WalkLocomotionClass

class WalkLocomotionClass : public LocomotionClass {
public:
    uint8_t pad_0[3285]; // +0x0
    uint32_t member_CD5; // +0xCD5
    // 0x0075CB80
    void AddRef();
    // 0x0075C680
    void BeginMove();
    // 0x0075C700
    void LoadFromStream();
    // 0x0075C7F0
    void QueryInterface();
    // 0x0075CB90
    void Release();
    // 0x006A0310
    void SetWaypointTarget();
    // 0x0075CBD0
    void StubReturn60();
    // 0x0075C640
    void ddtor();
};
