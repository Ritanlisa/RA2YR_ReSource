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
    WinModemClass* q000;  // 0x0
    void* q004;  // 0x4
    void* q008;  // 0x8
    void* q00C;  // 0xC
    void* q010;  // 0x10
    char u32_13;  // 0x13
    unsigned char q014;  // 0x14
    unsigned int q018;  // 0x18
    unsigned int q01C;  // 0x1C
    unsigned char q020;  // 0x20
    void* q024;  // 0x24
    unsigned int u32_28;  // 0x28
    unsigned char q02C;  // 0x2C
    unsigned int u32_30;  // 0x30
    unsigned char q034;  // 0x34
    unsigned int u32_3C;  // 0x3C
    unsigned int q040;  // 0x40
    void* q044;  // 0x44
    void* q048;  // 0x48
    void* q04C;  // 0x4C
    void* q050;  // 0x50
    unsigned int q054;  // 0x54
    unsigned int q058;  // 0x58
    unsigned int q05C;  // 0x5C
    void* q060;  // 0x60
    char u32_61;  // 0x61
    unsigned char q064;  // 0x64
    unsigned int q068;  // 0x68
    unsigned int u32_6C;  // 0x6C
    unsigned char q070;  // 0x70
    unsigned char q073;  // 0x73
    unsigned int u32_74;  // 0x74
    unsigned int u32_80;  // 0x80
    unsigned int q084;  // 0x84
    unsigned char q087;  // 0x87
    unsigned int q088;  // 0x88
    unsigned int u32_8C;  // 0x8C
    unsigned int u32_9C;  // 0x9C
    unsigned int q0A0;  // 0xA0
    unsigned int u32_A4;  // 0xA4
    unsigned char q0A8;  // 0xA8
    unsigned char u8_AC;  // 0xAC
    unsigned char u8_AD;  // 0xAD
    unsigned char u8_AE;  // 0xAE
    unsigned char u8_AF;  // 0xAF
    unsigned char q0B0;  // 0xB0
    unsigned char u8_B1;  // 0xB1
    unsigned char u8_B2;  // 0xB2
    unsigned char u8_B3;  // 0xB3
    unsigned char q0B4;  // 0xB4
    unsigned int u32_B8;  // 0xB8
    unsigned char u8_BC;  // 0xBC
    unsigned char u8_BD;  // 0xBD
    unsigned char u8_BE;  // 0xBE
    unsigned char u8_BF;  // 0xBF
    unsigned char q0C0;  // 0xC0
    unsigned char q0C4;  // 0xC4
    unsigned int u32_C8;  // 0xC8
    unsigned char q0CC;  // 0xCC
    unsigned char q0D0;  // 0xD0
    unsigned char q0D4;  // 0xD4
    unsigned char q0D8;  // 0xD8
    unsigned char q0DC;  // 0xDC
    unsigned char q0E0;  // 0xE0
    unsigned char q0E4;  // 0xE4
    unsigned char q0E8;  // 0xE8
    unsigned char q0EC;  // 0xEC
    unsigned char q0F0;  // 0xF0
    unsigned char q0F4;  // 0xF4
    unsigned char q0F8;  // 0xF8
    unsigned char q0FC;  // 0xFC
    unsigned char q100;  // 0x100
    unsigned int q104;  // 0x104
    unsigned int q108;  // 0x108
    unsigned char q10C;  // 0x10C
    unsigned char q110;  // 0x110
    unsigned int q114;  // 0x114
    unsigned int q118;  // 0x118
    unsigned char q11C;  // 0x11C
    unsigned char q120;  // 0x120
    unsigned int q128;  // 0x128
    unsigned char q12C;  // 0x12C
    unsigned char q130;  // 0x130
    unsigned char q134;  // 0x134
    unsigned char q138;  // 0x138
    unsigned int q140;  // 0x140
    unsigned char q144;  // 0x144
    unsigned char q148;  // 0x148
    unsigned char q14C;  // 0x14C
    unsigned int q150;  // 0x150
    unsigned char q154;  // 0x154
    unsigned char q158;  // 0x158
    unsigned char q15C;  // 0x15C
    unsigned int q160;  // 0x160
    unsigned int q164;  // 0x164
    unsigned char q168;  // 0x168
    unsigned char q16C;  // 0x16C
    unsigned char q170;  // 0x170
    unsigned char q174;  // 0x174
    unsigned char q178;  // 0x178
    unsigned char q17C;  // 0x17C
    unsigned char q180;  // 0x180
    unsigned int q184;  // 0x184
    unsigned char q188;  // 0x188
    unsigned char q18C;  // 0x18C
    unsigned char q190;  // 0x190
    unsigned int u32_194;  // 0x194
    unsigned int u32_198;  // 0x198
    unsigned int u32_19C;  // 0x19C
    unsigned int u32_1A0;  // 0x1A0
    unsigned char q1A4;  // 0x1A4
    unsigned char q1A8;  // 0x1A8
    unsigned char q1AA;  // 0x1AA
    unsigned char u8_1EC;  // 0x1EC
    unsigned int u32_1F6;  // 0x1F6
    unsigned int u32_1F7;  // 0x1F7
    void* q1F8;  // 0x1F8
// --- flat members (END) ---
    unsigned char __pad_87[0x171];  // 0x87 (array base, max idx 214)
    unsigned int UpdateLatencyDisplay_ph;  // w18j3: filler renamed (no offset truth; canon Network::UpdateLatencyDisplay is a method)
    static unsigned int UpdateLatencyDisplay(...);  // w18j3 C2597 static-call supply (w16g4 convention)
    int SendBeaconDelete(int a2, int a3);  // 0x4311C0
    int SendBeacon(wchar_t *aP1, int a3, int a4, char a5);  // 0x431450
    int Dispatch(void *a1_1, void *a2_1, void *a3_1, void *a4_1, void *a5_1);  // 0x48D1E0
    void * initConnection(int a2, unsigned int * a3, char a4);  // 0x4C6C50
    int SendOffer();  // 0x4FC980
    static AbstractClass * * Init();  // 0x52F3F0 [w16g2] static per raw receiver-first (def body this=0)
    int GetAddress(unsigned int *a1, int aP2, unsigned short *a3);  // 0x53ED60
    void * CopyAddress(unsigned int *a2, int a3);  // 0x53EDA0
    int IsBroadcastAddr();  // 0x53EE00
    int processPacket(TechnoTypeClass * aP1);  // 0x53EF60
    AbstractClass * * SetConnectionParams(int aP1, int a3, int a4, char aP4);  // 0x540C60
    int sendData(AnimClass * aP1);  // 0x540F00
int GetSendCount();  // 0x00540f90 g57w12-r raw-sync (def-form)
    int GetConnectionSpeed(int aP1);  // 0x540FA0
    int GetClass(int a2);  // 0x540FC0
    int FindPlayerByID(int aP1);  // 0x541000
    int SendMessage(int a2, int a3, int a4, int a5, int a6, int a7);  // 0x5410F0
    AbstractClass * * SendToPlayer(int a2, int a3, int a4, wchar_t * String2, void *a5_1);  // 0x541260
    int Send(int a2, int a3, int aP3, int a5);  // 0x541370
    int SendPacketThunk(int a2, int a3, int a4, int a5, int a6, int a7);  // 0x5413B0
    int receiveData(int a2);  // 0x5413F0
    int SendPacket(int a2, int a3, unsigned char a4);  // 0x541410
    int SendPacketThunk2(int a2, int a3, int a4, int a5);  // 0x541480
    void * ReceiveLoop();
    int GetQueueCount();
    int GetLobbyStatus();  // 0x5424C0
    int updateLatency();  // 0x542500
    unsigned int * SetPlayerCoords(IPXManagerClass * aP1);  // 0x543050
    int Disconnect();  // 0x543080
    int validateConnection(int a2, int a3);  // 0x5BCC40
    AbstractClass * * SetupRematch();  // 0x5C46E0
    int dispatchEvent();  // 0x5D93D0
    IPXConnClass * * ResolveAndConnect(unsigned char * a2);  // 0x5D9410
    unsigned short ResolveNetworkAddress(uint16_t a2);  // 0x5DA0B0
    int processQueue();  // 0x5E2BA0
    int CountDisconnectedHouses();  // 0x5E2BE0
    int AddFrameEvent();  // 0x6471A0
    AbstractClass * * QueueProcessingLoop();  // 0x6475F0
    int syncGameState(void *a1_1);  // 0x64AC90
    AbstractClass * * ProcessEventList(int a1, int * a2, int a3);  // 0x64C380
    static AbstractClass * * RecordEvent(long long a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27);  // 0x6521C0
    static int SendUnreachable();  // 0x6523A0
    void validatePacket();  // 0x663910
    int SendMasterPlayerList();  // 0x6639D0
    HashTable_flat * * ProcessAddressChange();  // 0x6640E0
    char * processAcknowledgment(void *a2);  // G57w10-S raw 0x006642A0 IUnknown 占位清除
    void * reconnect(DynamicVector * aP1, short a3);  // 0x664400
    unsigned int * processGameEvent();  // 0x69B540
    AbstractClass * * SyncPlayerList();  // 0x792F10
    int finalizeSession();  // 0x7B2DB0
    char * FormatAddress(uint16_t *aP1);  // 0x53F0E0
    int CleanupOnDisconnect();  // 0x5F0040
    int GetMaxPacketSize();  // 0x74FD20
    short SetPort(int16_t aP1);  // 0x53F200
    int SendSettingsRequest();  // 0x5B5E90
    char QueryAddress(IPXManagerClass * aP0, int a2, int a3, char a4);  // 0x5D90E0
    short WaitForPacket(int a1, int a2);  // 0x5D9220
    bool sendGameEvent(unsigned int *aP0);  // 0x6956D0
    int CopyAddress_Small(IPXManagerClass * aP1);  // 0x53EDC0
    int SendOptionsGame(char * Source);  // 0x5E3720
    static int InitPlayerSlots();  // 0x5E8B60
    HWND handleTimeout(HWND hDlg);  // 0x5EFF70
    __int16 handleDisconnect(void *a2);  // G57w10-S raw 0x00664390 IUnknown 占位清除
    int checkTimeout(int a2);  // 0x6643E0
    static bool IsMultiplayerActive();  // 0x77D940
    static char IsLobbyFeature();  // 0x77D970
    static double ShutdownInterface(...);  // C2597 interim stub
    void Network_resetConnectionState();
    void Network_UpdateLatencyDisplay(ProgressScreenClass * aP1, ProgressScreenClass * aP2, ProgressScreenClass * aP3);
};
#endif  // GAMEMD_G2_NETWORK_FLAT_DEF
} // namespace gamemd
