// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

#ifdef GAMEMD_TREE_UNIVERSE
// G42.33 b3: marker 抑制 _fwd_e4 的 AbstractClass/ObjectClass fwd -- 树侧桥接
// (SessionClass_e4 G42.33 同款)
namespace ra2 { namespace game { class AbstractClass; class ObjectClass; } }
namespace gamemd {
#ifndef GAMEMD_USING_AbstractClass_Dialog
#define GAMEMD_USING_AbstractClass_Dialog
// G57c4: using-bridges dropped -- native flat gamemd::AbstractClass/
// ObjectClass carriers are the truth in e4 TUs (C2874).
#endif
} // namespace gamemd
#endif

namespace gamemd {
struct AnimClass;  // fix_fwd_type_supply
struct CampaignClass;  // fix_fwd_type_supply
struct INIClass;  // fix_fwd_type_supply
struct Dialog {
    unsigned int __pad_0;  // 0x0
    unsigned int q004;  // 0x4
    unsigned int Dialog_field_0x8;  // 0x8
    unsigned int Dialog_field_0xC;  // 0xC
    char __pad_10[24];  // 0x10
    int q028;  // 0x28
    unsigned int __pad_2C;  // 0x2C
    unsigned int u32_30;  // 0x30
    int q034;  // 0x34
    char __pad_38[4];  // 0x38
    unsigned int u32_3C;  // 0x3C
    unsigned int __pad_40;  // 0x40
    char __pad_44[36];  // 0x44
    unsigned char q068;  // 0x68
    char __pad_69[307];  // 0x69
    int Dialog_field_0x19C;  // 0x19C
    char __pad_1A0[100];  // 0x1A0
    int Dialog_field_0x204;  // 0x204
    char __pad_208[1196];  // 0x208
    int Dialog_field_0x6B4;  // 0x6B4
    char __pad_6B8[12];  // 0x6B8
    int Dialog_field_0x6C4;  // 0x6C4
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    static int TabControlPaint(int a1, int a2, int a3, int a4);
    void DrawBackground();
    void MapDialogResource(void *a1 = 0);  // 0x49F740
    int InitializeGameSettings();  // 0x5B5BC0
    int ShowMessageBox(unsigned short *a2, unsigned short *aP2, unsigned short *aP3, unsigned short *a5, int a6, void *a6_1 = 0);
    int GetModeNeg2();  // 0x5D5DC0
    int GetMode3();  // 0x5D5DD0
    void RefreshDialogsGame(void *a1 = 0);  // 0x5EE350
    int  RunModemDialing(int a2, int a3, char a4);  // 0x5F2950
    AbstractClass * *  MapControlToAction(HWND hWnd, int a2);  // 0x606800
    int StopBink();  // 0x607FD0
    AbstractClass * * IdleProcess(ObjectClass *a2, void *a2_1 = 0);
    int HandleTabKey(HWND hWnd, LPARAM);  // 0x60A330
    AbstractClass * * DispatchEvent(HWND hWnd, LPARAM);  // 0x60A5B0
    AbstractClass * * InitWindow(int a1, int a2);  // 0x60F760
    static AbstractClass * * InitializeControls(HWND hWnd, LPARAM);  // 0x60F9A0
    AbstractClass * * DestroyDialogSystem();  // 0x610360
    AbstractClass * * Resize();  // 0x6213A0
    AbstractClass * * DrawBackground(HWND hWnd);  // 0x621E90
    int Destroy(void *a1 = 0);  // 0x622720
    CampaignClass * * CleanupTree();  // 0x6233A0
    int  UpdateControlState(unsigned int * a2, unsigned int * a3);  // 0x624930
    AbstractClass * * GrowBuffer();  // 0x624BE0
    AbstractClass * * BindGadgetData(int *a2, char *Block, void *a3 = 0);  // 0x624CA0
    INIClass * * ReadMultiplayerDialogSettings();  // 0x671EA0
    int FindByHandle();  // 0x775940
    int FindByHandle(void *a1 = 0);
    static int GetCurrent();  // 0x775B10
    static int GetCurrentType();  // 0x775B20
    BOOL GetField(void *a1 = 0, void *a2 = 0);  // 0x775BA0
    int SideIDToIndex(void *a1 = 0);  // 0x4E4EC0
    int OptionIDToIndex();  // 0x4E59A0
    static int FindGameUI();  // 0x5E26C0
    HWND ShowMessage(ObjectClass * aP0, CampaignScore * BufferCount, ObjectClass Format, ...);
    static HWND ShowMessage(int a1, int a2);
    static int ShowMessage(int aP0, size_t aP1, void *aP2);
    static int ShowMessage(void *aP0, size_t aP1, void *aP2);
    static int ShowMessage(void *aP0, void *aP1, void *aP2);
    int StopBink(void *a1 = 0);  // G42.33 b8 static-form sync
    AbstractClass * * Resize(void *a1 = 0);  // G42.33 b8 static-form sync
    static HWND ShowStatusText(int a1, int a2);
    HWND ShowStatusText(SessionClass * aP0, CampaignScore * aP1, CampaignScore * aP2, void *a4 = 0);
    HWND ShowStatusText(SessionClass * aP0, CampaignScore * aP1, CampaignScore * aP2);    // 0x5E2790
    LRESULT ShowPlayerName();  // 0x5E2F60
    int MapPlayerIDToIndex(void *a1 = 0);  // 0x5E9950
    unsigned int CheckButtonState();  // 0x5F3450
    BOOL IsSpecialTemplate();  // 0x602AE0
    static BOOL EnumAndCleanup(void *a1 = 0);  // 0x60AAA0
    BOOL SubclassEditControl(HWND hWnd, LPARAM);  // 0x60F320
    HWND Show();  // 0x622800
    static char PumpMessages();  // 0x623120
    int FindByPtr(void *a1 = 0);  // 0x7759B0
    HWND RestoreParent();  // 0x777060
    char UpdateGameUI();  // 0x77D820
    static HWND CloseAll();  // 0x799D10
    AbstractClass * * MapControlToAction(HWND hWnd, LPARAM, void * a2);
};
} // namespace gamemd
