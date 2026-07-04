#pragma once
// CSP: IPXGlobalConnClass

class IPXGlobalConnClass {
public:
    // 0x005400D0
    void CheckStatus();
    // 0x00540650
    void Connect();
    // 0x00540050
    void GetAddress();
    // 0x00540610
    void Release();
    // 0x005402D0
    void Send();
    // 0x00540340
    void SendPacket();
    // 0x00540630
    void ddtor();
};
