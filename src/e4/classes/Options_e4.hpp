// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Options {
// --- flat members (BEGIN) ---
    unsigned int u32_4;  // 0x4
    AbstractClass * q008;  // 0x8
    void* q00C;  // 0xC
    void* q010;  // 0x10
    void* q018;  // 0x18
    void* q024;  // 0x24
    unsigned int u32_2C;  // 0x2C
    void* q030;  // 0x30
    void* q034;  // 0x34
    AbstractClass * ptr_38;  // 0x38
    unsigned int q044;  // 0x44
    void* q048;  // 0x48
    void* q054;  // 0x54
    unsigned int q060;  // 0x60
    unsigned int q064;  // 0x64
    unsigned int q068;  // 0x68
    void* q084;  // 0x84
    void* q0E8;  // 0xE8
    void* q0EC;  // 0xEC
    void* q0F0;  // 0xF0
    void* q0F4;  // 0xF4
    void* q0F8;  // 0xF8
    unsigned int q100;  // 0x100
    unsigned int q104;  // 0x104
    void* q114;  // 0x114
    void* q130;  // 0x130
    AbstractClass * q134;  // 0x134
    unsigned int q150;  // 0x150
    void* q240;  // 0x240
    void* q244;  // 0x244
    void* q248;  // 0x248
    unsigned int q260;  // 0x260
    void* q304;  // 0x304
    AbstractClass * q308;  // 0x308
    void* q580;  // 0x580
    void* q584;  // 0x584
    unsigned int q598;  // 0x598
    unsigned int q608;  // 0x608
    void* q630;  // 0x630
    void* q70C;  // 0x70C
    void* q774;  // 0x774
    void* q1378;  // 0x1378
    void* q1398;  // 0x1398
    void* q1408;  // 0x1408
    unsigned int q1544;  // 0x1544
    void* q1584;  // 0x1584
    void* q1804;  // 0x1804
    void* q1908;  // 0x1908
    AbstractClass * q1910;  // 0x1910
    void* q4984;  // 0x4984
    void* q4994;  // 0x4994
    void* q5128;  // 0x5128
    void* q5138;  // 0x5138
    unsigned int q5170;  // 0x5170
    unsigned int q5444;  // 0x5444
    void* q5508;  // 0x5508
    void* q6148;  // 0x6148
    void* q6408;  // 0x6408
    void* q18820;  // 0x18820
    unsigned int q20848;  // 0x20848
    void* q21768;  // 0x21768
    void* q24904;  // 0x24904
    void* q25608;  // 0x25608
    unsigned int q33570;  // 0x33570
    void* q100384;  // 0x100384
    void* q132354;  // 0x132354
    void* q133010;  // 0x133010
    void* q137064;  // 0x137064
    void* q149764;  // 0x149764
    void* q153094;  // 0x153094
    void* q1254228;  // 0x1254228
    void* q1255810;  // 0x1255810
    void* q1257488;  // 0x1257488
    unsigned int q1271138;  // 0x1271138
    AbstractClass * q1388834;  // 0x1388834
    void* q19218984;  // 0x19218984
    void* q19231880;  // 0x19231880
    unsigned int q19337528;  // 0x19337528
    void* q19347798;  // 0x19347798
    void* q20223094;  // 0x20223094
    AbstractClass * q20482100;  // 0x20482100
    void* q421676434;  // 0x421676434
    unsigned int q422802728;  // 0x422802728
    void* q422868888;  // 0x422868888
    void* q15136604770;  // 0x15136604770
    unsigned int q17758693160;  // 0x17758693160
    void* q17759111304;  // 0x17759111304
    void* q22432257394;  // 0x22432257394
    void* q1448316258160;  // 0x1448316258160
    void* q1611578946150;  // 0x1611578946150
    void* q1611689177458;  // 0x1611689177458
    void* q1611703603238;  // 0x1611703603238
    unsigned int q1612096024928;  // 0x1612096024928
    void* q2354483393428;  // 0x2354483393428
    void* q356804779671904;  // 0x356804779671904
    void* q356804779788614;  // 0x356804779788614
    void* q388219821908304;  // 0x388219821908304
    void* q388224393901144;  // 0x388224393901144
    void* q621518329033768;  // 0x621518329033768
    void* q240520674579875348;  // 0x240520674579875348
    void* q254491193000887958;  // 0x254491193000887958
    void* q441723862229661544;  // 0x441723862229661544
    void* q22166868479831443256185750;  // 0x22166868479831443256185750
// --- flat members (END) ---
    int DlgProc(HWND hDlg, unsigned int a2, unsigned int a3, HWND a4);  // 0x4F11B0
    bool PrepareSaveLoadDlg(const char ** dwNewLong);  // 0x558840
    AbstractClass * * Screen_Save();  // 0x55FAA0
    char Screen_Dialog();  // 0x55FC80
    int DeleteAndZero();  // 0x6244E0
    char EnsureCapacity();  // 0x6248A0
    int GrowBuffer();  // 0x6253B0
    int ReadOptionValue();  // 0x6254D0
    AbstractClass * * DestroyComposite(void * Block, char a2);  // 0x625560
    void * RebuildDropdownList(ObjectClass * aP1);  // 0x6255F0
    int SaveOptionValue();  // 0x625A20
    int SetScoreVolume(float volume, int pad, void *a3_1);  // 0x5FA4A0
    int SetSoundVolume(float volume, int pad, void *a3_1);  // 0x5FA510
    int SetVoiceVolume(float volume, int pad, void *a3_1);  // 0x5FA590
    HWND InitDialogControls(HWND hDlg);  // 0x4F1720
    int DialogProc(CCINIClass hWnd);  // 0x618D40
    void ClearComboBoxes();  // 0x624460
};
} // namespace gamemd
