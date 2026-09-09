// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct Dialog {
    void* vfptr;  // minimal E2 declaration
    void MapDialogResource();  // 0x49F740
    int SideIDToIndex();  // 0x4E4EC0
    int OptionIDToIndex();  // 0x4E59A0
    int InitializeGameSettings();  // 0x5B5BC0
    LONG ShowMessageBox(int lParam, unsigned short * a2, Movie * aP2, IUnknown * aP3, IUnknown * aP4, int a6);  // 0x5D3490
    int GetModeNeg2();  // 0x5D5DC0
    int GetMode3();  // 0x5D5DD0
    int FindGameUI();  // 0x5E26C0
    HWND ShowMessage(ObjectClass * aP0, CampaignScore * BufferCount, ObjectClass Format, ... a4);  // 0x5E2700
    HWND ShowStatusText(SessionClass * aP0, CampaignScore * aP1, CampaignScore * aP2);  // 0x5E2790
    LRESULT ShowPlayerName(HWND hDlg);  // 0x5E2F60
    int MapPlayerIDToIndex();  // 0x5E9950
    HWND RefreshDialogsGame();  // 0x5EE350
    int RunModemDialing(ObjectClass * aP1, int a3, char a4);  // 0x5F2950
    unsigned int CheckButtonState();  // 0x5F3450
    BOOL IsSpecialTemplate();  // 0x602AE0
    BOOL MapControlToAction(HWND hWnd, LPARAM a2);  // 0x606800
    char StopBink(HWND hDlg);  // 0x607FD0
    char IdleProcess();  // 0x608070
    BOOL HandleTabKey(HWND hWnd, LPARAM a2);  // 0x60A330
    BOOL DispatchEvent(HWND hWnd, LPARAM a2);  // 0x60A5B0
    BOOL EnumAndCleanup(HWND hWndParent);  // 0x60AAA0
    BOOL SubclassEditControl(HWND hWnd, LPARAM a2);  // 0x60F320
    BOOL InitWindow(SkirmishDialog * aP0, LPARAM a2);  // 0x60F760
    BOOL InitializeControls(HWND hWnd, LPARAM a2);  // 0x60F9A0
    int DestroyDialogSystem(HWND hWndParent);  // 0x610360
    LONG Resize();  // 0x6213A0
    void DrawBackground(HWND hWnd);  // 0x621E90
    HWND Destroy(SkirmishDialog * hWnd);  // 0x622720
    HWND Show(HWND hWnd);  // 0x622800
    char PumpMessages();  // 0x623120
    void CleanupTree();  // 0x6233A0
    char UpdateControlState(unsigned int * a2, unsigned int * a3);  // 0x624930
    void GrowBuffer();  // 0x624BE0
    char BindGadgetData(IUnknown * aP1, IUnknown * aP2);  // 0x624CA0
    int ReadMultiplayerDialogSettings();  // 0x671EA0
    int FindByHandle();  // 0x775940
    int FindByPtr();  // 0x7759B0
    HWND GetCurrent();  // 0x775B10
    int GetCurrentType();  // 0x775B20
    BOOL GetField();  // 0x775BA0
    HWND RestoreParent(HWND hWnd);  // 0x777060
    char UpdateGameUI();  // 0x77D820
    HWND CloseAll();  // 0x799D10
};
} // namespace gamemd
