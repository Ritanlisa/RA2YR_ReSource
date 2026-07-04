#pragma once
// CSP: Network

class Network {
public:
    uint8_t pad_0[3764]; // +0x0
    uint32_t member_EB4; // +0xEB4
    // 0x006471A0
    void AddFrameEvent();
    // 0x005F0040
    void CleanupOnDisconnect();
    // 0x00543080
    void Disconnect();
    // 0x0048D1E0
    void Dispatch();
    // 0x00541000
    void FindPlayerByID();
    // 0x00540FC0
    void GetClass();
    // 0x00540FA0
    void GetConnectionSpeed();
    // 0x00542430
    void GetField();
    // 0x0074FD20
    void GetMaxPacketSize();
    // 0x005422D0
    void GetQueueCount();
    // 0x00540F90
    void GetSendCount();
    // 0x0052F3F0
    void Init();
    // 0x005E8B60
    void InitPlayerSlots();
    // 0x0077D970
    void IsLobbyFeature();
    // 0x0077D940
    void IsMultiplayerActive();
    // 0x005EF4E0
    void ModemConnectionDialog();
    // 0x006475F0
    void QueueProcessingLoop();
    // 0x006521C0
    void RecordEvent();
    // 0x00541370
    void Send();
    // 0x006639D0
    void SendMasterPlayerList();
    // 0x00541410
    void SendPacket();
    // 0x005413B0
    void SendPacketThunk();
    // 0x00541480
    void SendPacketThunk2();
    // 0x00543050
    void SetPlayerCoords();
    // 0x005DA720
    void ShutdownInterface();
    // 0x00792F10
    void SyncPlayerList();
    // 0x0053EF60
    void processPacket();
    // 0x005413F0
    void receiveData();
    // 0x00664400
    void reconnect();
    // 0x00540F00
    void sendData();
    // 0x006956D0
    void sendGameEvent();
};
