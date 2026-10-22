// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct NullModemClass {
    void * ptr_0;  // 0x0
    int PlayerIndex;  // 0x4
    char Active[1];  // 0x8
    char __pad_9[3];  // 0x9
    void * LastPacketTime;  // 0xC
    void * PacketsSent;  // 0x10
    void * PacketsReceived;  // 0x14
    unsigned int q018;  // 0x18
    unsigned int u32_1C;  // 0x1C
    unsigned int u32_20;  // 0x20
    char __pad_24[8];  // 0x24
    unsigned int u32_2C;  // 0x2C
    unsigned char q030;  // 0x30
    char __pad_31[3];  // 0x31
    unsigned int u32_34;  // 0x34
    unsigned int u32_38;  // 0x38
    unsigned int u32_3C;  // 0x3C
    unsigned int q040;  // 0x40
    char __pad_44[4];  // 0x44
    unsigned int q048;  // 0x48
    unsigned int u32_4C;  // 0x4C
    unsigned char q050;  // 0x50
    unsigned char u32_51;  // 0x51
    char __pad_52[3];  // 0x52
    char __pad_55[7];  // 0x55
    unsigned int u32_5C;  // 0x5C
    unsigned int u32_60;  // 0x60
    unsigned int q064;  // 0x64
    unsigned int u32_68;  // 0x68
    char __pad_6C[12];  // 0x6C
    unsigned int q078;  // 0x78
    char __pad_7C[188];  // 0x7C
    unsigned int q138;  // 0x138
    char __pad_13C[20];  // 0x13C
    unsigned char q150;  // 0x150
    char __pad_151[23];  // 0x151
    unsigned int q168;  // 0x168
    char __pad_16C[20];  // 0x16C
    unsigned char q180;  // 0x180
    char __pad_181[23];  // 0x181
    unsigned char q198;  // 0x198
    char __pad_199[23];  // 0x199
    unsigned char q1B0;  // 0x1B0
    char __pad_1B1[47];  // 0x1B1
    unsigned int q1E0;  // 0x1E0
    char __pad_1E4[20];  // 0x1E4
    unsigned int q1F8;  // 0x1F8
    char __pad_1FC[20];  // 0x1FC
    unsigned int q210;  // 0x210
    char __pad_214[20];  // 0x214
    unsigned int q228;  // 0x228
    char __pad_22C[20];  // 0x22C
    unsigned int q240;  // 0x240
    char __pad_244[20];  // 0x244
    unsigned int q258;  // 0x258
    char __pad_25C[7696];  // 0x25C
    unsigned int q206C;  // 0x206C
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    int COMStub();
    int COMStub_Return0(int a1);
    int CheckStatus();
    int Disconnect(int a2, int a3, int a4);
    int Flush(int a2);
    int GetAddress(int a2);
    int GetMember23();
    int Receive();
    int Release(int a2, int a3, int a4, int a5);
    int Send();
    int SetAddress(int a2);
    int ddtor(int a2, int a3, int a4);
    int receiveData();
    int sendData();
    void * QueryInterface(char a2, int a1, int a3, int a4, int a5);
};

} // namespace gamemd
