#pragma once
// CSP: IPXManagerClass

class IPXManagerClass {
public:
    uint8_t pad_0[844]; // +0x0
    uint32_t member_34C; // +0x34C
    // 0x005424A0
    void CheckStatus();
    // 0x00542EC0
    void Flush();
    // 0x00542350
    void GetAddress();
    // 0x00542330
    void GetConnectionCount();
    // 0x00542450
    void GetQueueSize();
    // 0x00542FE0
    void Init();
    // 0x00542520
    void ProcessQueue();
    // 0x005423C0
    void SetAddress();
    // 0x00543040
    void StubReturnFalse();
    // 0x00540D40
    void createConnection();
    // 0x005415F0
    void ddtor();
    // 0x00540D60
    void destroyConnection();
    // 0x0048BA90
    void init();
    // 0x005409F0
    void processPacket();
    // 0x00541070
    void receivePacket();
    // 0x005414C0
    void release();
    // 0x00541040
    void send();
    // 0x00540D80
    void sendPacket();
};
