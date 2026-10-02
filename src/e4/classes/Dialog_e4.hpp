// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct AnimClass;  // fix_fwd_type_supply
struct CampaignClass;  // fix_fwd_type_supply
struct INIClass;  // fix_fwd_type_supply
struct Dialog {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    unsigned int q004;  // 0x4
    unsigned int u32_8;  // 0x8
    AnimClass* q00C;  // 0xC
    unsigned char q010;  // 0x10
    unsigned int u32_14;  // 0x14
    unsigned int u32_18;  // 0x18
    unsigned int q020;  // 0x20
    unsigned int q024;  // 0x24
    CampaignClass* q028;  // 0x28
    unsigned char q02C;  // 0x2C
    unsigned int u32_30;  // 0x30
    CampaignClass* q034;  // 0x34
    unsigned char q038;  // 0x38
    void* q03C;  // 0x3C
    unsigned char q040;  // 0x40
    unsigned char q043;  // 0x43
    unsigned char q044;  // 0x44
    unsigned int q048;  // 0x48
    unsigned int q050;  // 0x50
    unsigned int q054;  // 0x54
    void* q060;  // 0x60
    unsigned char q064;  // 0x64
    unsigned char q068;  // 0x68
    unsigned int q080;  // 0x80
    unsigned int q084;  // 0x84
    unsigned int u32_D0;  // 0xD0
    unsigned int u32_F0;  // 0xF0
    unsigned int u32_FC;  // 0xFC
    unsigned char q100;  // 0x100
    unsigned char q104;  // 0x104
    unsigned int q114;  // 0x114
    unsigned int q128;  // 0x128
    CampaignClass* q130;  // 0x130
    unsigned char q134;  // 0x134
    void* q150;  // 0x150
    unsigned int q160;  // 0x160
    void* q19C;  // 0x19C
    unsigned char q1A0;  // 0x1A0
    void* q204;  // 0x204
    unsigned char q208;  // 0x208
    unsigned int u32_20C;  // 0x20C
    unsigned int u32_210;  // 0x210
    unsigned char q214;  // 0x214
    unsigned int q240;  // 0x240
    unsigned char q244;  // 0x244
    unsigned char q260;  // 0x260
    unsigned char q264;  // 0x264
    CampaignClass* q304;  // 0x304
    unsigned char q308;  // 0x308
    unsigned char q30C;  // 0x30C
    unsigned char q520;  // 0x520
    unsigned int q524;  // 0x524
    unsigned int q528;  // 0x528
    unsigned char q52C;  // 0x52C
    unsigned int q594;  // 0x594
    unsigned char q598;  // 0x598
    unsigned char q59C;  // 0x59C
    unsigned char q608;  // 0x608
    unsigned char q60C;  // 0x60C
    unsigned int q630;  // 0x630
    unsigned char q634;  // 0x634
    void* q6B4;  // 0x6B4
    unsigned char q6B8;  // 0x6B8
    void* q6C4;  // 0x6C4
    unsigned int Dialog_field_0xC;
    unsigned int *__pad_0;
    unsigned int *__pad_10;
    unsigned int Debug;
// --- flat members (END) ---
    void MapDialogResource();  // 0x49F740
    int InitializeGameSettings();  // 0x5B5BC0
    int ShowMessageBox(unsigned short *a2, unsigned short *aP2, unsigned short *aP3, unsigned short *a5, int a6);
    int GetModeNeg2();  // 0x5D5DC0
    int GetMode3();  // 0x5D5DD0
    void RefreshDialogsGame();  // 0x5EE350
    int RunModemDialing(int a2, int a3, char a4);  // 0x5F2950
    AbstractClass * * MapControlToAction(HWND hWnd, LPARAM);  // 0x606800
    int StopBink();  // 0x607FD0
    AbstractClass * * IdleProcess(ObjectClass *a2);
    int HandleTabKey(HWND hWnd, LPARAM);  // 0x60A330
    AbstractClass * * DispatchEvent(HWND hWnd, LPARAM);  // 0x60A5B0
    static AbstractClass * * InitWindow(int a1, int a2);  // 0x60F760
    static AbstractClass * * InitializeControls(HWND hWnd, LPARAM);  // 0x60F9A0
    AbstractClass * * DestroyDialogSystem();  // 0x610360
    AbstractClass * * Resize();  // 0x6213A0
    AbstractClass * * DrawBackground(HWND hWnd);  // 0x621E90
    int Destroy();  // 0x622720
    CampaignClass * * CleanupTree();  // 0x6233A0
    int UpdateControlState(unsigned int * a2, unsigned int * a3);  // 0x624930
    AbstractClass * * GrowBuffer();  // 0x624BE0
    AbstractClass * * BindGadgetData(int *a2, char *Block);  // 0x624CA0
    INIClass * * ReadMultiplayerDialogSettings();  // 0x671EA0
    int FindByHandle();  // 0x775940
    static int GetCurrent();  // 0x775B10
    int GetCurrentType();  // 0x775B20
    BOOL GetField();  // 0x775BA0
    int SideIDToIndex();  // 0x4E4EC0
    int OptionIDToIndex();  // 0x4E59A0
    static int FindGameUI();  // 0x5E26C0
    HWND ShowMessage(ObjectClass * aP0, CampaignScore * BufferCount, ObjectClass Format, ...);    // 0x5E2700
    HWND ShowStatusText(SessionClass * aP0, CampaignScore * aP1, CampaignScore * aP2);    // 0x5E2790
    LRESULT ShowPlayerName();  // 0x5E2F60
    int MapPlayerIDToIndex();  // 0x5E9950
    unsigned int CheckButtonState();  // 0x5F3450
    BOOL IsSpecialTemplate();  // 0x602AE0
    BOOL EnumAndCleanup();  // 0x60AAA0
    BOOL SubclassEditControl(HWND hWnd, LPARAM);  // 0x60F320
    HWND Show();  // 0x622800
    char PumpMessages();  // 0x623120
    int FindByPtr();  // 0x7759B0
    HWND RestoreParent();  // 0x777060
    char UpdateGameUI();  // 0x77D820
    HWND CloseAll();  // 0x799D10
};
} // namespace gamemd
