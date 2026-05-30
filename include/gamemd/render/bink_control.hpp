#pragma once

#include <windows.h>
#include <ddraw.h>
#include <commctrl.h>
#include <memory>
#include "gamemd/render/movie.hpp"

namespace gamemd
{

constexpr UINT BINKM_INIT  = 0x4E3u;
constexpr UINT BINKM_OPEN  = 0x4E4u;
constexpr UINT BINKM_CLOSE = 0x4F0u;

class BinkPlayerControl
{
public:
    static BinkPlayerControl* FromHwnd(HWND h);

    static LRESULT CALLBACK WindowProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam, UINT_PTR uIdSubclass, DWORD_PTR dwRefData);

    bool IsPlaying() const { return m_playing; }
    int  GetWidth()  const { return m_movie ? m_movie->GetWidth() : 0; }
    int  GetHeight() const { return m_movie ? m_movie->GetHeight() : 0; }

    BinkMovieHandle* Movie() { return m_movie.get(); }

private:
    BinkPlayerControl() = default;

    void Init(HWND hWnd);
    void OpenBink(const char* filename);
    void CloseBink();

    HWND                              m_hWnd           = nullptr;
    std::unique_ptr<BinkMovieHandle>  m_movie;
    IDirectDrawSurface7*             m_surface        = nullptr;
    bool                              m_playing        = false;
};

} // namespace gamemd
