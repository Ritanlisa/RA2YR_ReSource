#pragma once
// CSP: Object

class Object {
public:
    uint8_t pad_0[20]; // +0x0
    uint32_t member_14; // +0x14
    uint32_t member_18; // +0x18
    uint32_t member_1C; // +0x1C
    uint32_t member_20; // +0x20
    // 0x0042B1F0
    void ComputeAllocationSize();
    // 0x0056C210
    void FindNearestObjectAtCell();
    // 0x005FD970
    void HandleAction();
    // 0x005FD8F0
    void LoadObject();
    // 0x005FDDE0
    void ProcessEvent();
    // 0x005FDF00
    void StubReturn176();
    // 0x005FDF50
    void StubReturn20();
    // 0x005F5230
    void Unlink();
    // 0x005FDF10
    void ddtor();
};
