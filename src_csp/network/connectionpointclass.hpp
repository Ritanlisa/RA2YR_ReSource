#pragma once
// CSP: ConnectionPointClass

class ConnectionPointClass {
public:
    // 0x004A0520
    void AddRef();
    // 0x004A0610
    void Advise();
    // 0x004A0870
    void Construct();
    // 0x004A0700
    void EnumConnections();
    // 0x004A0760
    void GetConnectionInterface();
    // 0x004A04B0
    void QueryInterface();
    // 0x004A0540
    void Release();
    // 0x004A0630
    void Unadvise();
    // 0x004A05D0
    void ddtor();
};
