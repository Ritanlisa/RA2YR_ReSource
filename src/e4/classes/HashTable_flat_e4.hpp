// GENERATED template-collision flat carrier (mechanical).
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct CampaignClass;  // fix_fwd_type_supply

struct HashTable_flat {
// --- flat members (BEGIN) ---
    char u32_3;  // 0x3
    unsigned int u32_4;  // 0x4
    char u32_6;  // 0x6
    unsigned int u32_B;  // 0xB
    unsigned int u32_C;  // 0xC
    unsigned int u32_18;  // 0x18
    unsigned int u32_38;  // 0x38
    unsigned int u32_3C;  // 0x3C
    unsigned int u32_234;  // 0x234
    unsigned int u32_238;  // 0x238
    unsigned int u32_244;  // 0x244
    unsigned int u32_250;  // 0x250
    unsigned int u32_25C;  // 0x25C
    unsigned int u32_8D0;  // 0x8D0
// --- flat members (END) ---
AbstractClass * * FindWOLHashTableEntry(const char ** a2, void * a3);
AbstractClass * * Grow();
AbstractClass * * Grow2();
AbstractClass * * Insert(ObjectClass * aP1, void * a2);
AbstractClass * * Lookup(ObjectClass * aP1, TechnoTypeClass * aP2);
AbstractClass * * RebuildEx(void *a1);
AbstractClass * * RemoveAndResize(unsigned int * a2, unsigned char * a3);
AbstractClass * * RemoveHashTableEntry(ObjectClass * aP1, void * a2);
CampaignClass * * Clear(void *a1);
CampaignClass * * RemoveEntry(const char * a2);
ObjectClass * * Remove(int a2, void *a1 = 0);
int ComputeHash(int a2);
int Find(const char * a1, ConvertClass * aP2);
int FindChunk(char * Str1, void * a2, CCINIClass * aP3);
int FindString(char * Str1, IUnknown * aP2);
int Get(IUnknown * aP1, IUnknown * aP2);
int LookupString(const char ** a2, unsigned int * a3);
unsigned int CleanupAndResize();
unsigned int Rebuild();
void Rebuild2();
int Shrink(void *a1 = 0);
void Shrink2(void *a1 = 0);
    int SendBeaconDelete(int a2, int a3);
    int SendBeacon(wchar_t *aP1, int a3, int a4, char a5);
    int Dispatch(void *a1_1, void *a2_1, void *a3_1, void *a4_1, void *a5_1);
    void * initConnection(int a2, unsigned int * a3, char a4);
    int SendOffer();
    AbstractClass * * Init(void *a1 = 0, void *a2 = 0);
    int GetAddress(unsigned int *a1, int aP2, unsigned short *a3);
    void * CopyAddress(unsigned int *a2, int a3);
    int IsBroadcastAddr();
    int processPacket(TechnoTypeClass * aP1);
    AbstractClass * * SetConnectionParams(int aP1, int a3, int a4, char aP4, void *a1 = 0);
    int sendData(AnimClass * aP1);
    int GetSendCount(void *a1_1);
    int GetConnectionSpeed(int aP1);
    int GetClass(int a2);
    int FindPlayerByID(int aP1);
    AbstractClass * * SendToPlayer(int a2, int a3, int a4, wchar_t * String2, void *a5_1);
    int Send(int a2, int a3, int aP3, int a5);
    int SendPacketThunk(int a2, int a3, int a4, int a5, int a6, int a7);
    int receiveData(int a2);
    int SendPacket(int a2, int a3, unsigned char a4);
    int SendPacketThunk2(int a2, int a3, int a4, int a5);
    int GetLobbyStatus();
    int updateLatency();
    unsigned int * SetPlayerCoords(IPXManagerClass * aP1);
    int Disconnect();
    int validateConnection(int a2, int a3);
    AbstractClass * * SetupRematch();
    int dispatchEvent();
    IPXConnClass * * ResolveAndConnect(unsigned char * a2);
    unsigned short ResolveNetworkAddress(uint16_t a2, void *a1 = 0);
    int processQueue();
    int CountDisconnectedHouses();
    int AddFrameEvent();
    AbstractClass * * QueueProcessingLoop(void *a1 = 0);
    int syncGameState(void *a1_1);
    AbstractClass * * ProcessEventList(int a1, int * a2, int a3);
    AbstractClass * * RecordEvent(long long a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27);
    int SendUnreachable();
    void validatePacket();
    int SendMasterPlayerList();
    HashTable_flat * * ProcessAddressChange();
    void * processAcknowledgment(IUnknown * aP1);
    void * reconnect(DynamicVector * aP1, short a3);
    unsigned int * processGameEvent();
    AbstractClass * * SyncPlayerList(void *a1 = 0);
    int finalizeSession();
    int CopyAddress_Small(IPXManagerClass * aP1);
    char * FormatAddress(uint16_t *aP1, void *a1 = 0);
    short SetPort(int16_t aP1);
    int SendSettingsRequest();
    char QueryAddress(IPXManagerClass * aP0, int a2, int a3, char a4);
    short WaitForPacket(int a1, int a2);
    int SendOptionsGame(char * Source);
    int InitPlayerSlots();
    HWND handleTimeout(HWND hDlg);
    int CleanupOnDisconnect();
    AbstractClass * * handleDisconnect(IUnknown * aP1);
    int checkTimeout(int a2);
    bool sendGameEvent(unsigned int *aP0, void *a1 = 0);
    int GetMaxPacketSize();
    bool IsMultiplayerActive();
    char IsLobbyFeature();
    HashTable_flat * * WDT_Campaign_Constructor(const char ** a2, int a3);
    unsigned int *q000;  // 0x0 (offset-truth)
    unsigned int q004;  // 0x4 (offset-truth)
    unsigned int q00C;  // 0xC (offset-truth)
    unsigned int q014;  // 0x14 (offset-truth)
    unsigned int q018;  // 0x18 (offset-truth)
    unsigned int q020;  // 0x20 (offset-truth)
    unsigned int q030;  // 0x30 (offset-truth)
    unsigned int u32_8;  // 0x8 (offset-truth)
    static double HashTable_field_0x04(...);  // plateau: C2039/C3861 stub
    static double HashTable_field_0x08(...);  // plateau: C2039/C3861 stub
    static double HashTable_field_0x0C(...);  // plateau: C2039/C3861 stub
    static double HashTable_field_0x14(...);  // plateau: C2039/C3861 stub
    static double HashTable_field_0x18(...);  // plateau: C2039/C3861 stub
    static double HashTable_field_0x20(...);  // plateau: C2039/C3861 stub
    static double HashTable_field_0x30(...);  // plateau: C2039/C3861 stub
    static double __pad_0(...);  // plateau: C2039/C3861 stub
};

} // namespace gamemd
