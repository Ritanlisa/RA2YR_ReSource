// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct Network {
    void* vfptr;  // minimal E2 declaration
    char SendBeaconDelete(int a2, int a3);  // 0x4311C0
    char SendBeacon(CellStruct * aP1, int a3, int a4, char a5);  // 0x431450
    char Dispatch();  // 0x48D1E0
    char * initConnection(int a2, unsigned int * a3, char a4);  // 0x4C6C50
    char SendOffer();  // 0x4FC980
    char Init();  // 0x52F3F0
    short GetAddress(unsigned int * a1, ObjectClass * aP2, unsigned short * a3);  // 0x53ED60
    char * CopyAddress(unsigned int * a2, int a3);  // 0x53EDA0
    int IsBroadcastAddr();  // 0x53EE00
    bool processPacket(TechnoTypeClass * aP1);  // 0x53EF60
    int SetConnectionParams(IUnknown * aP1, int a3, int a4, CellStruct * aP4);  // 0x540C60
    int sendData(AnimClass * aP1);  // 0x540F00
    int GetSendCount();  // 0x540F90
    int GetConnectionSpeed(CellStruct * aP1);  // 0x540FA0
    int GetClass(int a2);  // 0x540FC0
    int FindPlayerByID(DynamicVector * aP1);  // 0x541000
    int SendMessage(int a2, int a3, int a4, int a5, int a6, int a7);  // 0x5410F0
    int SendToPlayer(int a2, int a3, int a4, wchar_t * String2);  // 0x541260
    int Send(int a2, int a3, TechnoTypeClass * aP3, int a5);  // 0x541370
    int SendPacketThunk(int a2, int a3, int a4, int a5, int a6, int a7);  // 0x5413B0
    char receiveData(int a2);  // 0x5413F0
    int SendPacket(int a2, int a3, unsigned char a4);  // 0x541410
    int SendPacketThunk2(int a2, int a3, int a4, int a5);  // 0x541480
    void * ReceiveLoop();  // 0x541820
    int GetQueueCount();  // 0x5422D0
    int GetLobbyStatus();  // 0x5424C0
    int updateLatency();  // 0x542500
    unsigned int * SetPlayerCoords(IPXManagerClass * aP1);  // 0x543050
    int Disconnect();  // 0x543080
    int validateConnection(int a2, int a3);  // 0x5BCC40
    int SetupRematch();  // 0x5C46E0
    int dispatchEvent();  // 0x5D93D0
    int ResolveAndConnect(unsigned char * a2);  // 0x5D9410
    unsigned short ResolveNetworkAddress(unsigned short a2);  // 0x5DA0B0
    int processQueue();  // 0x5E2BA0
    int CountDisconnectedHouses();  // 0x5E2BE0
    char AddFrameEvent();  // 0x6471A0
    void QueueProcessingLoop();  // 0x6475F0
    int syncGameState();  // 0x64AC90
    int ProcessEventList(int a1, int * a2, int a3);  // 0x64C380
    char RecordEvent(long long a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27);  // 0x6521C0
    int SendUnreachable();  // 0x6523A0
    void validatePacket();  // 0x663910
    char SendMasterPlayerList();  // 0x6639D0
    wchar_t * ProcessAddressChange();  // 0x6640E0
    char * processAcknowledgment(IUnknown * aP1);  // 0x6642A0
    char * reconnect(DynamicVector * aP1, short a3);  // 0x664400
    unsigned int * processGameEvent();  // 0x69B540
    void SyncPlayerList();  // 0x792F10
    int finalizeSession();  // 0x7B2DB0
    char * FormatAddress(IUnknown * aP1);  // 0x53F0E0
    int CleanupOnDisconnect();  // 0x5F0040
    int GetMaxPacketSize();  // 0x74FD20
    short SetPort(IPXManagerClass * aP1);  // 0x53F200
    int SendSettingsRequest();  // 0x5B5E90
    char QueryAddress(IPXManagerClass * aP0, int a2, int a3, char a4);  // 0x5D90E0
    short WaitForPacket(int a1, int a2);  // 0x5D9220
    bool sendGameEvent(Modem * aP0, int _10, unsigned int * a2);  // 0x6956D0
    int CopyAddress_Small(IPXManagerClass * aP1);  // 0x53EDC0
    int SendOptionsGame();  // 0x5E3720
    int InitPlayerSlots();  // 0x5E8B60
    HWND handleTimeout();  // 0x5EFF70
    short handleDisconnect(IUnknown * aP1);  // 0x664390
    int checkTimeout(int a2);  // 0x6643E0
    bool IsMultiplayerActive();  // 0x77D940
    char IsLobbyFeature();  // 0x77D970
};
} // namespace gamemd
