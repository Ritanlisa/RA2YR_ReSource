#pragma once

#include <windows.h>
#include <ddraw.h>
#include <commctrl.h>
#include <memory>
#include "render/movie.hpp"

namespace gamemd
{

constexpr UINT BINKM_INIT  = 0x4E3u;
constexpr UINT BINKM_OPEN  = 0x4E4u;
constexpr UINT BINKM_CLOSE = 0x4F0u;

class BinkPlayerControl
{
public:
    // unmatched: no callgraph reference and no git history record
    static BinkPlayerControl* FromHwnd(HWND h);

    // unmatched: no callgraph reference and no git history record
    static LRESULT CALLBACK WindowProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam, UINT_PTR uIdSubclass, DWORD_PTR dwRefData);

    bool IsPlaying() const;
    int  GetWidth()  const { return movie ? movie->GetWidth() : 0; }
    int  GetHeight() const { return movie ? movie->GetHeight() : 0; }

    // unmatched: no callgraph reference and no git history record
    BinkMovieHandle* Movie();

private:
    BinkPlayerControl() = default;

    void Init(HWND hWnd);
    // unmatched: no callgraph reference and no git history record
    void OpenBink(const char* filename);
    void CloseBink();

    HWND                              m_hWnd           = nullptr;
    std::unique_ptr<BinkMovieHandle>  movie;
    IDirectDrawSurface7*             surface        = nullptr;
    bool                              playing        = false;
};

} // namespace gamemd
