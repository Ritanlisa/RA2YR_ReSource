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
// --- flat members (BEGIN) ---

// --- flat members (END) ---
    static int TabControlPaint(int a1, int a2, int a3, int a4);
    void DrawBackground();
    void MapDialogResource(void *a1 = 0);  // 0x49F740
    int InitializeGameSettings();  // 0x5B5BC0
    int ShowMessageBox(unsigned short *lParam, unsigned short *a3, unsigned short *a4, unsigned short *a5, int a6, void *a1 = 0);
    int GetModeNeg2();  // 0x5D5DC0
    int GetMode3();  // 0x5D5DD0
    void RefreshDialogsGame(void *a1 = 0);  // 0x5EE350
    int  RunModemDialing(int a2, int a3, char a4);  // 0x5F2950
    AbstractClass * *  MapControlToAction(HWND hWnd, int a2);  // 0x606800
    int StopBink();  // 0x607FD0
    AbstractClass * * IdleProcess(ObjectClass *a2, void *a1 = 0);
    int  HandleTabKey(HWND hWnd, int a2);  // 0x60A330
    AbstractClass * *  DispatchEvent(HWND hWnd, int a2);  // 0x60A5B0
    static AbstractClass * *  InitWindow(HWND a1, int a2);  // 0x60F760
    static AbstractClass * *  InitializeControls(HWND hWnd, int a2);  // 0x60F9A0
    AbstractClass * * DestroyDialogSystem();  // 0x610360
    AbstractClass * * Resize();  // 0x6213A0
    AbstractClass * * DrawBackground(HWND hWnd);  // 0x621E90
    int Destroy(void *a1 = 0);  // 0x622720
    CampaignClass * * CleanupTree();  // 0x6233A0
    int  UpdateControlState(unsigned int * a2, unsigned int * a3);  // 0x624930
    AbstractClass * * GrowBuffer();  // 0x624BE0
    AbstractClass * *  BindGadgetData(int * a2, char * Block, void *a1 = 0);  // 0x624CA0
    INIClass * * ReadMultiplayerDialogSettings();  // 0x671EA0
    int FindByHandle();  // 0x775940
    static int FindByHandle(int a1);
    static int FindByHandle(void *aP1);
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
    static int ShowMessage(int aP0, size_t aP1, char *aP2, wchar_t *aP3);
    static int DrawBackground(void *aP0);  // G42.33 b8 static-form sync
    static int StopBink(void *aP0);  // G42.33 b8 static-form sync
    static int Resize(void *aP0);  // G42.33 b8 static-form sync
    static HWND ShowStatusText(int a1, int a2);
    static HWND ShowStatusText(LPARAM, int a2, int a3, wchar_t *a4);
    HWND ShowStatusText(SessionClass * aP0, CampaignScore * aP1, CampaignScore * aP2);    // 0x5E2790
    LRESULT ShowPlayerName();  // 0x5E2F60
    int MapPlayerIDToIndex(void *a1 = 0);  // 0x5E9950
    unsigned int CheckButtonState();  // 0x5F3450
    BOOL IsSpecialTemplate();  // 0x602AE0
    BOOL EnumAndCleanup(void *a1 = 0);  // 0x60AAA0
    BOOL  SubclassEditControl(HWND hWnd, int a2);  // 0x60F320
    HWND Show();  // 0x622800
    static char PumpMessages();  // 0x623120
    int FindByPtr(void *a1 = 0);  // 0x7759B0
    HWND RestoreParent();  // 0x777060
    char UpdateGameUI();  // 0x77D820
    static HWND CloseAll();  // 0x799D10
    AbstractClass * * MapControlToAction(HWND hWnd, LPARAM, void * a2);
    char __pad_10[24];  // 0x10 (ml)
    static double Dialog_field_0xC(...);  // plateau: C2039/C3861 stub
    static double __pad_0(...);  // plateau: C2039/C3861 stub
    static double u32_3C(...);  // plateau: C2039/C3861 stub
    static double u32_3F(...);  // plateau: C2039/C3861 stub
};
} // namespace gamemd
