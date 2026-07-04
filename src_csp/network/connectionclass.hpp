#pragma once
// CSP: ConnectionClass

class ConnectionClass {
public:
    // 0x0048C590
    void StubReturnFalse();
    // 0x0048B750
    void allocPacketSlot();
    // 0x0048C5A0
    void connect();
    // 0x0048BA10
    void initQueue();
    // 0x0048C320
    void processTileUpdate();
    // 0x0048BF40
    void sendAck();
    // 0x0048C3E0
    void serviceSendQueue();
};
