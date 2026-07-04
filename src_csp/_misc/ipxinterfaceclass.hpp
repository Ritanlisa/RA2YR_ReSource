#pragma once
// CSP: IPXInterfaceClass

class IPXInterfaceClass {
public:
    uint8_t pad_0[13932]; // +0x0
    uint32_t member_366C; // +0x366C
    // 0x007B1B80
    void AddRef();
    // 0x007B1780
    void COMStub_Ret1139();
    // 0x007B1740
    void COMStub_Return0();
    // 0x007B1770
    void COMStub_Return1();
    // 0x007B24E0
    void Connect();
    // 0x007B1CA0
    void Disconnect();
    // 0x007B1760
    void GetLocalAddress();
    // 0x007B1730
    void GetQueueSize();
    // 0x007B1BC0
    void Receive();
    // 0x007B26D0
    void ReceivePacket();
    // 0x007B1750
    void Send();
    // 0x007B1FD0
    void SetAddress();
    // 0x007B1720
    void StubReturnFalse();
    // 0x007B19C0
    void bindSocket();
    // 0x007B2840
    void getSocketCount();
    // 0x007B2A20
    void getSocketState();
    // 0x007B2AD0
    void initSession();
    // 0x007B2870
    void resetSocket();
};
