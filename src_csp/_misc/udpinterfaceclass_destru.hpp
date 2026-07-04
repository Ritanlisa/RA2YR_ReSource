#pragma once
// CSP: UDPInterfaceClass_Destru

class UDPInterfaceClass_Destru {
public:
    uint8_t pad_0[21452]; // +0x0
    uint32_t member_53CC; // +0x53CC
    // 0x007B4140
    void COMStub();
    // 0x007B40F0
    void COMStub_Ret2();
    // 0x007B3900
    void CheckStatus();
    // 0x007B3430
    void GetAddress();
    // 0x007B4100
    void GetStatistics();
    // 0x007B3890
    void Receive();
    // 0x007B36C0
    void ddtor();
};
