#pragma once
// CSP: NullModemClass

class NullModemClass : public ConnectionClass {
public:
    uint8_t pad_0[388]; // +0x0
    uint32_t member_184; // +0x184
    // 0x005F1950
    void COMStub();
    // 0x005F3520
    void COMStub_Return0();
    // 0x005F35F0
    void CheckStatus();
    // 0x005F1BC0
    void Connect();
    // 0x005F3540
    void Disconnect();
    // 0x005F1F00
    void Flush();
    // 0x005F3610
    void GetAddress();
    // 0x007754C0
    void GetMember23();
    // 0x005F35D0
    void Receive();
    // 0x005F3560
    void Release();
    // 0x005F3530
    void Send();
    // 0x005F3630
    void SetAddress();
    // 0x005EF170
    void closeConnection();
    // 0x005F35A0
    void ddtor();
};
