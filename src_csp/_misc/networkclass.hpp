#pragma once
// CSP: NetworkClass

class NetworkClass {
public:
    uint8_t pad_0[4696]; // +0x0
    uint32_t member_1258; // +0x1258
    // 0x00639FD0
    void ExecutePlanningModeCmd();
    // 0x007B1C50
    void UnregisterAsync();
};
