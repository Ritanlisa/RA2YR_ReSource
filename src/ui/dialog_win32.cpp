// Dialog system -- IDA Win32 dialog wrapper stubs
// These are the original gamemd.exe Win32 CreateDialogIndirectParamA wrappers.
// Implemented as stubs for now (custom DialogClass is used for menu screens).
#include "gamemd/ui/dialog.hpp"
#include "gamemd/core/logging.hpp"

namespace gamemd {
namespace Dialog {

// IDA: Calls ResourceFind(template_id, type=5) -> DLGTEMPLATE*
//       then CreateDialogIndirectParamA(g_hInstance, template, g_hWnd, dlg_proc, lParam)
//       then registers to internal tracking array (dword_B72F50)
HWND Create(int template_id, DLGPROC dlg_proc, LPARAM lParam)
{
    (void)template_id;
    (void)dlg_proc;
    (void)lParam;
    LOG_TRACE("Dialog::Create(template_id=%d)", template_id);
    return nullptr; // TODO: ResourceFind + CreateDialogIndirectParamA
}

// IDA: 56 basic blocks, handles WM_INITDIALOG/WM_COMMAND/WM_PAINT/WM_CTLCOLOR*
// Called by 59 sub-dialog procedures
INT_PTR CALLBACK BaseProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
    switch (msg) {
    case WM_INITDIALOG: return TRUE;
    case WM_CLOSE:      DestroyWindow(hWnd); return TRUE;
    default:
        (void)wParam; (void)lParam;
        return FALSE;
    }
}

// IDA: GameLoopMessagePump + MessageIsDialog + TranslateMessage + DispatchMessageA + CopyProtection hook
void MessageLoop()
{
    MSG msg;
    while (PeekMessageA(&msg, nullptr, 0, 0, PM_REMOVE)) {
        TranslateMessage(&msg);
        DispatchMessageA(&msg);
    }
}

// IDA: 27 callers in original binary -- wraps MessageLoop + Event::Dispatch for in-game modes
void PumpMessages()
{
    MessageLoop();
    // IDA: if GameMode==0||5: Event::Dispatch()
    // IDA: if in-game: sub_55CBF0()->GameFrameLoop()
}

// IDA: ShowWindow(SW_SHOW) + SetWindowPos
void Show(HWND hWnd)
{
    ShowWindow(hWnd, SW_SHOW);
    SetWindowPos(hWnd, HWND_TOP, 0, 0, 0, 0, SWP_NOMOVE | SWP_NOSIZE);
}

// IDA: DestroyWindow + tracking array cleanup
void Destroy(HWND hWnd)
{
    DestroyWindow(hWnd);
}

// IDA 0x5D3490 -- Dialog::ShowMessageBox (CSF strings -> MessageBox)
int ShowMessageBox(const wchar_t* msg, const wchar_t* ok, const wchar_t* cancel, int a4, int a5)
{
    (void)msg; (void)ok; (void)cancel; (void)a4; (void)a5;
    return 1; // OK pressed (simplified)
}

} // namespace Dialog
} // namespace gamemd
