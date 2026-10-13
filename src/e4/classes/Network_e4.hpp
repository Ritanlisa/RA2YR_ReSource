// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct WinModemClass;  // fix_fwd_type_supply
struct IPXConnClass;  // fix_fwd_type_supply
struct HashTable_flat;  // fix_fwd_type_supply
#ifndef GAMEMD_G2_NETWORK_FLAT_DEF  // W13A: shared twin guard w/ network_ext.hpp (was one-sided; nesting accident silently deduped)
#define GAMEMD_G2_NETWORK_FLAT_DEF 1
struct Network {
// --- flat members (BEGIN) ---

// --- flat members (END) ---
    unsigned char __pad_87[0x171];  // 0x87 (array base, max idx 214)
    unsigned int UpdateLatencyDisplay_ph;  // w18j3: filler renamed (no offset truth; canon Network::UpdateLatencyDisplay is a method)
    static unsigned int UpdateLatencyDisplay(int p0, double p1, double p2);  // x4:signals@0x643c50
    int SendBeaconDelete(int a2, int a3);  // 0x4311C0
    int SendBeacon(wchar_t *aP1, int a3, int a4, char a5);  // 0x431450
    int Dispatch(void *a1_1, void *a2_1, void *a3_1, void *a4_1, void *a5_1);  // 0x48D1E0
    void *  initConnection(int a2, unsigned int * a3, char a4);  // 0x4C6C50
    int SendOffer();  // 0x4FC980
    static AbstractClass * * Init();
    int GetAddress(unsigned int *a1, int aP2, unsigned short *a3);  // 0x53ED60
    void * CopyAddress(unsigned int *a2, int a3);  // 0x53EDA0
    int IsBroadcastAddr();  // 0x53EE00
    int  processPacket(int a2);  // 0x53EF60
    AbstractClass * *  SetConnectionParams(int a2, int a3, int a4, char a5, void *a1 = 0);  // 0x540C60
    int  sendData(int a2);  // 0x540F00
int GetSendCount();
    int GetConnectionSpeed(int aP1);  // 0x540FA0
    int  GetClass(int a2);  // 0x540FC0
    int  FindPlayerByID(int a2);  // 0x541000
    int  SendMessage(int a2, int a3, int a4, int a5, int a6, int a7);  // 0x5410F0
    AbstractClass * *  SendToPlayer(int a2, int a3, int a4, void * String2, void *a1 = 0);  // 0x541260
    int Send(int a2, int a3, int aP3, int a5);  // 0x541370
    int  SendPacketThunk(int a2, int a3, int a4, int a5, int a6, int a7);  // 0x5413B0
    int  receiveData(int a2);  // 0x5413F0
    int  SendPacket(int a2, int a3, uint8_t a4);  // 0x541410
    int  SendPacketThunk2(int a2, int a3, int a4, int a5);  // 0x541480
    void * ReceiveLoop(void *a1 = 0);
    int GetQueueCount(void *a1 = 0);
    int GetLobbyStatus();  // 0x5424C0
    int updateLatency();  // 0x542500
    unsigned int *  SetPlayerCoords(unsigned int * a2);  // 0x543050
    int Disconnect();  // 0x543080
    int  validateConnection(int a2, int a3);  // 0x5BCC40
    AbstractClass * * SetupRematch();  // 0x5C46E0
    int dispatchEvent();  // 0x5D93D0
    IPXConnClass * *  ResolveAndConnect(unsigned char * a2);  // 0x5D9410
    unsigned short  ResolveNetworkAddress(uint16_t a2, void *a1 = 0);  // 0x5DA0B0
    int processQueue();  // 0x5E2BA0
    int CountDisconnectedHouses();  // 0x5E2BE0
    int AddFrameEvent();  // 0x6471A0
    AbstractClass * * QueueProcessingLoop(void *a1 = 0);  // 0x6475F0
    int syncGameState(void *a1_1);  // 0x64AC90
    AbstractClass * *  ProcessEventList(int a1, int * a2, int a3);  // 0x64C380
    static AbstractClass * *  RecordEvent(int64_t a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27);  // 0x6521C0
    static int SendUnreachable();  // 0x6523A0
    void validatePacket();  // 0x663910
    int SendMasterPlayerList();  // 0x6639D0
    HashTable_flat * * ProcessAddressChange();  // 0x6640E0
    char * processAcknowledgment(void *a2);  // G57w10-S raw 0x006642A0 IUnknown 占位清除
    void *  reconnect(int a2, int16_t a3);  // 0x664400
    unsigned int * processGameEvent();  // 0x69B540
    AbstractClass * * SyncPlayerList(void *a1 = 0);  // 0x792F10
    int finalizeSession();  // 0x7B2DB0
    char *  FormatAddress(uint16_t * a2, void *a1 = 0);  // 0x53F0E0
    int CleanupOnDisconnect();  // 0x5F0040
    int  GetMaxPacketSize(unsigned int a1);  // 0x74FD20
    short SetPort(int16_t aP1);  // 0x53F200
    int SendSettingsRequest();  // 0x5B5E90
    char  QueryAddress(uint16_t * a1, int a2, int a3, char a4);  // 0x5D90E0
    short  WaitForPacket(int a1, int a2);  // 0x5D9220
    bool  sendGameEvent(unsigned int * a2, void *a1 = 0);  // 0x6956D0
    int  CopyAddress_Small(int a2);  // 0x53EDC0
    int  SendOptionsGame(char * Source);  // 0x5E3720
    static int InitPlayerSlots();  // 0x5E8B60
    HWND handleTimeout(HWND hDlg);  // 0x5EFF70
    int16_t handleDisconnect(void *a2);  // G57w10-S raw 0x00664390 IUnknown 占位清除
    int  checkTimeout(int a2);  // 0x6643E0
    static bool IsMultiplayerActive();  // 0x77D940
    static char IsLobbyFeature();  // 0x77D970
    void Network_resetConnectionState();
    void Network_UpdateLatencyDisplay(ProgressScreenClass * aP1, ProgressScreenClass * aP2, ProgressScreenClass * aP3);
    char __pad_2C[4];  // 0x2C (ml)

    unsigned char __pad_000;  // X10 supply (csp_canon_members)
    int q010;  // X10 supply (member_lookup)
    unsigned int q018;  // X10 supply (member_lookup)
    unsigned char q020;  // X10 supply (member_lookup)
    unsigned int q024;  // X10 supply (member_lookup)
    unsigned int q040;  // X10 supply (member_lookup)
    int q050;  // X10 supply (member_lookup)
    unsigned int q058;  // X10 supply (member_lookup)
    unsigned int q05C;  // X10 supply (member_lookup)
    unsigned char q070;  // X10 supply (member_lookup)
    unsigned int q088;  // X10 supply (member_lookup)
    unsigned char q0A8;  // X10 supply (member_lookup)
    unsigned char q0B0;  // X10 supply (member_lookup)
    unsigned char q0C0;  // X10 supply (member_lookup)
    unsigned char q0C4;  // X10 supply (member_lookup)
    unsigned char q124;  // X10 supply (member_lookup)
    unsigned char q144;  // X10 supply (member_lookup)
    unsigned int q164;  // X10 supply (member_lookup)
    unsigned char q190;  // X10 supply (member_lookup)
    unsigned int q1F8;  // X10 supply (member_lookup)
    unsigned int q3F2FC;  // X10 supply (member_lookup)
    unsigned int q3F330;  // X10 supply (member_lookup)
    unsigned char q3F338;  // X10 supply (member_lookup)
    unsigned int q3F33C;  // X10 supply (member_lookup)
    unsigned int q3F340;  // X10 supply (member_lookup)
    unsigned int q3F344;  // X10 supply (member_lookup)
    unsigned int q3F345;  // X10 supply (member_lookup)
    unsigned int q3F560;  // X10 supply (member_lookup)
    unsigned int q3F564;  // X10 supply (member_lookup)
    unsigned int q3F568;  // X10 supply (member_lookup)
    unsigned int q408;  // X10 supply (member_lookup)
    unsigned int u32_194;  // X10 supply (member_lookup)
    unsigned int u32_198;  // X10 supply (member_lookup)
    unsigned int u32_19C;  // X10 supply (member_lookup)
    unsigned int u32_1A0;  // X10 supply (member_lookup)
    unsigned int u32_1C;  // X10 supply (member_lookup)
    unsigned int u32_1F7;  // X10 supply (member_lookup)
    unsigned int u32_271C;  // X10 supply (member_lookup)
    unsigned int u32_2720;  // X10 supply (member_lookup)
    unsigned int u32_28;  // X10 supply (member_lookup)
    unsigned int u32_298;  // X10 supply (member_lookup)
    unsigned int u32_29C;  // X10 supply (member_lookup)
    unsigned int u32_2A0;  // X10 supply (member_lookup)
    unsigned int u32_3;  // X10 supply (member_lookup)
    int u32_30;  // X10 supply (member_lookup)
    unsigned int u32_44;  // X10 supply (member_lookup)
    unsigned int u32_48;  // X10 supply (member_lookup)
    unsigned int u32_4C;  // X10 supply (member_lookup)
    unsigned int u32_5;  // X10 supply (member_lookup)
    unsigned int u32_54;  // X10 supply (member_lookup)
    unsigned int u32_60;  // X10 supply (member_lookup)
    unsigned int u32_61;  // X10 supply (member_lookup)
    unsigned int u32_6C;  // X10 supply (member_lookup)
    unsigned int u32_8C;  // X10 supply (member_lookup)
    unsigned int u32_9C;  // X10 supply (member_lookup)
    unsigned int u32_A0;  // X10 supply (member_lookup)
    unsigned int u32_A4;  // X10 supply (member_lookup)
    unsigned int u32_B8;  // X10 supply (member_lookup)
    int u8_1F6;  // X10 supply (member_lookup)
    unsigned char u8_AD;  // X10 supply (member_types)
    unsigned char u8_AE;  // X10 supply (member_types)
    unsigned char u8_AF;  // X10 supply (member_types)
    unsigned char u8_B3;  // X10 supply (member_types)
};
#endif  // GAMEMD_G2_NETWORK_FLAT_DEF
} // namespace gamemd
