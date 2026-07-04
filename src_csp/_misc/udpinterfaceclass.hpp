#pragma once
// CSP: UDPInterfaceClass

class UDPInterfaceClass {
public:
    uint8_t pad_0[2880]; // +0x0
    uint32_t member_B40; // +0xB40
    // 0x007B4150
    void Connect();
    // 0x007B3A20
    void Flush();
    // 0x007B33D0
    void GetStatistics();
    // 0x007B4160
    void Receive();
    // 0x007B42C0
    void disconnect();
    // 0x007B44A0
    void flush();
    // 0x007B42F0
    void reset();
    // 0x007B4550
    void sendPacket();
};
