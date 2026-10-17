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
#pragma pack(push, 1)  // X60: binary-packed layout
    unsigned int Network_field_0x0;  // 0x0
    int Network_field_0x4;  // 0x4
    int q008;  // 0x8
    unsigned int q00C;  // 0xC
    int Network_field_0x10;  // 0x10
    char __pad_14[14];  // 0x14
    char Network_field_0x22[4];  // 0x22
    char __pad_26[2];  // 0x26
    unsigned int u32_28;  // 0x28
    char __pad_2C[4];  // 0x2C
    int u32_30;  // 0x30
    char __pad_34[12];  // 0x34
    unsigned int q040;  // 0x40
    unsigned int u32_44;  // 0x44
    unsigned int u32_48;  // 0x48
    unsigned int u32_4C;  // 0x4C
    int q050;  // 0x50
    unsigned int u32_54;  // 0x54
    unsigned int q058;  // 0x58
    unsigned int q05C;  // 0x5C
    int Network_field_0x60;  // 0x60
    char __pad_64[8];  // 0x64
    char u32_6C[3];  // 0x6C
    char Network_field_0x6F[4];  // 0x6F
    char __pad_73[16];  // 0x73
    char Network_field_0x83[4];  // 0x83
    char __pad_87[1];  // 0x87
    unsigned int q088;  // 0x88
    unsigned int u32_8C;  // 0x8C
    char __pad_90[12];  // 0x90
    unsigned int u32_9C;  // 0x9C
    unsigned int u32_A0;  // 0xA0
    unsigned int u32_A4;  // 0xA4
    unsigned char q0A8;  // 0xA8
    char __pad_A9[4];  // 0xA9
    unsigned char u8_AD;  // 0xAD
    unsigned char u8_AE;  // 0xAE
    unsigned char u8_AF;  // 0xAF
    unsigned char q0B0;  // 0xB0
    char __pad_B1[2];  // 0xB1
    unsigned char u8_B3;  // 0xB3
    char __pad_B4[4];  // 0xB4
    unsigned int u32_B8;  // 0xB8
    char __pad_BC[4];  // 0xBC
    unsigned char q0C0;  // 0xC0
    char __pad_C1[3];  // 0xC1
    unsigned char q0C4;  // 0xC4
    char __pad_C5[95];  // 0xC5
    unsigned char q124;  // 0x124
    char __pad_125[31];  // 0x125
    unsigned char q144;  // 0x144
    char __pad_145[31];  // 0x145
    unsigned int q164;  // 0x164
    char __pad_168[40];  // 0x168
    unsigned char q190;  // 0x190
    char __pad_191[3];  // 0x191
    unsigned int u32_194;  // 0x194
    unsigned int u32_198;  // 0x198
    unsigned int u32_19C;  // 0x19C
    unsigned int u32_1A0;  // 0x1A0
    char __pad_1A4[2];  // 0x1A4
    char Network_field_0x1A6[4];  // 0x1A6
    char __pad_1AA[75];  // 0x1AA
    char Network_field_0x1F5[4];  // 0x1F5
    char __pad_1F9[1];  // 0x1F9
// --- flat members (BEGIN) ---
// --- flat members (END) ---
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
    int processPacket(TechnoTypeClass * aP1);  // 0x53EF60
    AbstractClass * * SetConnectionParams(int aP1, int a3, int a4, char aP4, void *a5 = 0);  // 0x540C60
    int sendData(AnimClass * aP1);  // 0x540F00
int GetSendCount();
    int GetConnectionSpeed(int aP1);  // 0x540FA0
    int  GetClass(int a2);  // 0x540FC0
    int FindPlayerByID(int aP1);  // 0x541000
    int  SendMessage(int a2, int a3, int a4, int a5, int a6, int a7);  // 0x5410F0
    AbstractClass * * SendToPlayer(int a2, int a3, int a4, wchar_t * String2, void *a5_1);  // 0x541260
    int Send(int a2, int a3, int aP3, int a5);  // 0x541370
    int  SendPacketThunk(int a2, int a3, int a4, int a5, int a6, int a7);  // 0x5413B0
    int  receiveData(int a2);  // 0x5413F0
    int SendPacket(int a2, int a3, unsigned char a4);  // 0x541410
    int  SendPacketThunk2(int a2, int a3, int a4, int a5);  // 0x541480
    void * ReceiveLoop(void *a1 = 0);
    int GetQueueCount(void *a1 = 0);
    int GetLobbyStatus();  // 0x5424C0
    int updateLatency();  // 0x542500
    unsigned int * SetPlayerCoords(IPXManagerClass * aP1);  // 0x543050
    int Disconnect();  // 0x543080
    int  validateConnection(int a2, int a3);  // 0x5BCC40
    AbstractClass * * SetupRematch();  // 0x5C46E0
    int dispatchEvent();  // 0x5D93D0
    IPXConnClass * *  ResolveAndConnect(unsigned char * a2);  // 0x5D9410
    unsigned short ResolveNetworkAddress(uint16_t a2, void *a2_1 = 0);  // 0x5DA0B0
    int processQueue();  // 0x5E2BA0
    int CountDisconnectedHouses();  // 0x5E2BE0
    int AddFrameEvent();  // 0x6471A0
    static AbstractClass * * QueueProcessingLoop(void *a1 = 0);  // 0x6475F0
    int syncGameState(void *a1_1);  // 0x64AC90
    AbstractClass * *  ProcessEventList(int a1, int * a2, int a3);  // 0x64C380
    AbstractClass * * RecordEvent(long long a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27);  // 0x6521C0
    static int SendUnreachable();  // 0x6523A0
    void validatePacket();  // 0x663910
    int SendMasterPlayerList();  // 0x6639D0
    HashTable_flat * * ProcessAddressChange();  // 0x6640E0
    void * processAcknowledgment(IUnknown * aP1);  // G57w10-S raw 0x006642A0 IUnknown 占位清除
    void * reconnect(DynamicVector * aP1, short a3);  // 0x664400
    unsigned int * processGameEvent();  // 0x69B540
    static AbstractClass * * SyncPlayerList(void *a1 = 0);  // 0x792F10
    int finalizeSession();  // 0x7B2DB0
    char * FormatAddress(uint16_t *aP1, void *a2 = 0);  // 0x53F0E0
    int CleanupOnDisconnect();  // 0x5F0040
    int  GetMaxPacketSize(unsigned int a1);  // 0x74FD20
    short SetPort(int16_t aP1);  // 0x53F200
    int SendSettingsRequest();  // 0x5B5E90
    char QueryAddress(IPXManagerClass * aP0, int a2, int a3, char a4);  // 0x5D90E0
    short  WaitForPacket(int a1, int a2);  // 0x5D9220
    bool sendGameEvent(unsigned int *aP0, void *a2 = 0);  // 0x6956D0
    int CopyAddress_Small(IPXManagerClass * aP1);  // 0x53EDC0
    int  SendOptionsGame(char * Source);  // 0x5E3720
    static int InitPlayerSlots();  // 0x5E8B60
    HWND handleTimeout(HWND hDlg);  // 0x5EFF70
    AbstractClass * * handleDisconnect(IUnknown * aP1);  // G57w10-S raw 0x00664390 IUnknown 占位清除
    int  checkTimeout(int a2);  // 0x6643E0
    static bool IsMultiplayerActive();  // 0x77D940
    static char IsLobbyFeature();  // 0x77D970
    void Network_resetConnectionState();
    void Network_UpdateLatencyDisplay(ProgressScreenClass * aP1, ProgressScreenClass * aP2, ProgressScreenClass * aP3);
#pragma pack(pop)
};
#endif  // GAMEMD_G2_NETWORK_FLAT_DEF
} // namespace gamemd
