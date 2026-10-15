#pragma once

#include <cstdint>
#include <windows.h>

#include "ui/g_screen.hpp"
#include "core/enums.hpp"
#include "core/math.hpp"
#include "system/radar.hpp"
#include "core/utility_ext.hpp"  // G42.55 closure (Count)

namespace gamemd
{
    // X27: member-decl type supply (log-driven hygiene)
    class CampaignClass;

struct SHPStruct;
class DSurface;

struct MouseHotSpotX {};
struct MouseHotSpotY {};

struct MouseCursor
{
    int32_t  Frame;
    int32_t  Count;  // data: 0xb79be0
    int32_t  Interval;
    int32_t  MiniFrame;
    int32_t  MiniCount;
    int32_t  HotX;
    int32_t  HotY;

    MouseCursor() noexcept;  // 0x55CC20

    MouseCursor(int32_t frame, int32_t count, int32_t interval,
                int32_t miniFrame, int32_t miniCount,
                int32_t hotX, int32_t hotY) noexcept;
};

class WWMouseClass
{
public:
    static WWMouseClass* Instance;

    // design: defaulted virtual destructor, no binary equivalent
    virtual ~WWMouseClass() = default;

    // design: inline accessor, inlined at all call sites
    virtual void Draw(const CellStruct& coords, const SHPStruct* pImage, int32_t idxFrame);
    // design: inline accessor, inlined at all call sites
    virtual bool IsRefCountNegative();
    virtual void HideCursor();  // 0x7B9930
    int ShowCursor();
    virtual void ReleaseMouse();  // 0x7B9C30
    virtual void CaptureMouse();  // 0x7B9A60
    virtual uint8_t GetField10();
    int InvalidateRect(const RectangleStruct& rect);
    // unmatched: no callgraph reference and no git history record
    virtual void CallFunc10();
    // design: inline accessor, inlined at all call sites
    virtual uint32_t GetRefCount();
    // unmatched: no callgraph reference and no git history record
    virtual int32_t GetX() const;
    // unmatched: no callgraph reference and no git history record
    virtual int32_t GetY() const;
    // unmatched: no callgraph reference and no git history record
    virtual Point2D* fetchCoordinatesHere(Point2D* out) const;
    // unmatched: no callgraph reference and no git history record
    virtual void SetCoords(const Point2D& buffer);
    virtual void InitSurface(DSurface* pSurface, bool unk);  // 0x7B9040
    // design: inline accessor, inlined at all call sites
    virtual void InitCursor(DSurface* pSurface, bool unk);
    // unmatched: no callgraph reference and no git history record
    virtual void GetDimensions(int32_t* outWidth, int32_t* outHeight);

    SHPStruct*       Image;
    int32_t          ImageFrameIndex;
    uint32_t         RefCount;
    uint8_t          WWfield_10;
    uint8_t          WWfield_11;
    uint8_t          WWfield_12;
    uint8_t          WWfield_13;
    uint32_t         WWfield_14;
    uint32_t         WWfield_18;
    Point2D          Position;
    DSurface*        Surface;
    HWND             hWnd;
    RectangleStruct  CursorRect;
    Point2D          HotspotOffset;
    uint32_t         WWfield_44;
    RectangleStruct  DirtyRect;
    uint32_t         WWfield_58;

    // TODO: complete WWMouseClass members
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    int loadCursorImages();  // 0x7B88D0
    void AddRef(void* a1, int a2, int a3);  // 0x7B8A00
    void* initCursorState(void* a1);  // 0x7B8E80
    int updateCursorRect();  // 0x7B8F30
    int DrawCursorBuffered(void* a1, int a2);  // 0x7B90C0
    void updateCursor();  // 0x7B92D0
    bool renderDragSelectionRect();  // 0x7B9690
    int showCursor();  // 0x7B9750
    int checkStatus(int a1, int a2, int a3, int a4);  // 0x7B9D70
    void processFrame();  // 0x7B9D90
    bool FlipCursorBuffer();  // 0x7B9E30
    int UpdateCursorMovement();  // 0x7BA090
    void drawCursor();  // 0x7BA320
    int checkHotspot(int a1, int a2);  // 0x7BA380
    void* QueryInterface(int a1);  // 0x7BA3A0
    // --- gap2 auto-generated stub declarations (END) ---

    unsigned int XY2;  // X10 supply (csp_canon_members)
    unsigned char __pad_044;  // X10 supply (csp_canon_members)
    unsigned int q018;  // X10 supply (member_lookup)
    int q01C;  // X10 supply (member_lookup)
    int q02C;  // X10 supply (member_lookup)
    int q038;  // X10 supply (member_lookup)
    unsigned char q03C[8];  /* char[8] */  // X10 supply (member_lookup)
    unsigned char q048[16];  /* char[16] */  // X10 supply (member_lookup)
    unsigned int q04C;  // X10 supply (member_lookup)
    unsigned int q050;  // X10 supply (member_lookup)
    unsigned int q054;  // X10 supply (member_lookup)
    int q058;  // X10 supply (member_lookup)
    unsigned char u32_5C[16];  /* char[16] */  // X10 supply (member_lookup)
};

class MouseClass : public RadarClass
{
public:
    static MouseClass* Instance;

    // design: defaulted virtual destructor, no binary equivalent
    virtual ~MouseClass() = default;

    virtual bool SetCursor(MouseCursorType cursor, bool miniMap);  // G57w8: MouseClass own slot (RadarClass 无此虚函数)
    // design: inline accessor, inlined at all call sites
    virtual bool UpdateCursor(MouseCursorType cursor, bool miniMap);  // G57w8: MouseClass own slot (RadarClass 无此虚函数)
    // unmatched: no callgraph reference and no git history record
    virtual bool RestoreCursor();  // G57w8: MouseClass own slot (RadarClass 无此虚函数)
    // design: inline accessor, inlined at all call sites
    virtual void UpdateCursorMinimapState(bool miniMap);  // G57w8: MouseClass own slot (RadarClass 无此虚函数)
    // design: inline accessor, inlined at all call sites
    virtual MouseCursorType GetLastMouseCursor();

    bool              MouseCursorIsMini;
    uint8_t           padding_01[3];
    MouseCursorType   MouseCursorIndex;
    MouseCursorType   MouseCursorLastIndex;
    int32_t           MouseCursorCurrentFrame;

    // TODO: complete MouseClass members, ScrollClass intermediate layer

protected:
    MouseClass() = default;
    unsigned char m_1[4];  // 0x1
    int m_8;  // G57w8 raw-vocab (0x40D75F this->m_8)
    unsigned int u32_5564;  // G57w8 raw-vocab (0x40D286 this->u32_5564)
    unsigned int m_C;  // 0xC
    unsigned char *__pad_0;  // 0x0
    int u32_8;  // 0x8
    unsigned int q010;  // 0x10
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    int ProcessInput();  // 0x40D280
    void* InitMouse(int a1, char a2);  // 0x40D290
    void initCursor();  // 0x40D540
    int updateCursorState(int a1);  // 0x40D570
    char selectCursor(int a2, unsigned int *a3);
    int getCursorFrame(unsigned int *a2);
    void* applyCursorSettings(int a1);  // 0x40D850
    int GetPosition();  // 0x5BDAA0
    int SetPosition(int a1);  // 0x5BDAB0
    void* LoadTypeData();  // 0x5BDF30
    int HandleClick();  // 0x5BDF50
    int LoadGameAssets();  // 0x5BDF70
    int DrawCursor();  // 0x5BE6D0
    void* drawCursor(int a1);  // 0x5BE9B0
    void* loadCursor(int a1, int a2);  // 0x5BEA30
    bool GetHotspot();  // 0x693060
    int GetButtonState(int a1);  // 0x693840
    int CheckCapture(void* a1);  // 0x693880
    void* Construct(int a1, int a2);  // 0x7B8730
    void CalcConfiningRect();  // 0x7B8960
    // --- gap2 auto-generated stub declarations (END) ---
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    int SetBounds(int a1, const void *a2);
    int GetKeyState();  // 0x53ec90 -- Mouse::GetKeyState
    int SetCursor(int a1, int a2);  // 0x5bdc80 -- Mouse::SetCursor
    int ReleaseCapture();  // 0x6938c0 -- Mouse::ReleaseCapture
    // === SYMBOL-ANCHOR (END) ===

    unsigned int CapacityIncrement;  // X10 supply (csp_canon_members)
    bool IsAllocated;  // X10 supply (csp_canon_members)
    unsigned int MaxLevel;  // X10 supply (csp_canon_members)
    unsigned int MaxWidth;  // X10 supply (csp_canon_members)
    CampaignClass* MouseClass_field_0x70;  // X10 supply (member_types)
    unsigned char q018[16];  /* char[16] */  // X10 supply (member_lookup)
    unsigned int q01C;  // X10 supply (member_lookup)
    int q028;  // X10 supply (member_lookup)
    unsigned char q03C[44];  /* char[44] */  // X10 supply (member_lookup)
    unsigned int q044;  // X10 supply (member_lookup)
    unsigned int q058;  // X10 supply (member_lookup)
    unsigned int q05C;  // X10 supply (member_lookup)
    unsigned int q05D;  // X10 supply (member_lookup)
    unsigned int q064;  // X10 supply (member_lookup)
    unsigned char q074[136];  /* char[136] */  // X10 supply (member_lookup)
    unsigned int q078;  // X10 supply (member_lookup)
    unsigned int q07C;  // X10 supply (member_lookup)
    unsigned int q090;  // X10 supply (member_lookup)
    unsigned int q094;  // X10 supply (member_lookup)
    unsigned int q0D8;  // X10 supply (member_lookup)
    unsigned int q0DC;  // X10 supply (member_lookup)
    unsigned int q0E1;  // X10 supply (member_lookup)
    unsigned int q0E4;  // X10 supply (member_lookup)
    unsigned int q0E8;  // X10 supply (member_lookup)
    unsigned int q0F4;  // X10 supply (member_lookup)
    unsigned int q0F8;  // X10 supply (member_lookup)
    unsigned int q1160;  // X10 supply (member_lookup)
    unsigned int q1164;  // X10 supply (member_lookup)
    unsigned int q1169;  // X10 supply (member_lookup)
    unsigned int q116C;  // X10 supply (member_lookup)
    unsigned int q1170;  // X10 supply (member_lookup)
    int q11A0;  // X10 supply (member_lookup)
    int q11A4;  // X10 supply (member_lookup)
    int q11A8;  // X10 supply (member_lookup)
    unsigned int q11BC;  // X10 supply (member_lookup)
    unsigned char q1554;  // X10 supply (member_lookup)
    unsigned int q5550;  // X10 supply (member_lookup)
    unsigned int q5554;  // X10 supply (member_lookup)
    unsigned int q5558;  // X10 supply (member_lookup)
    unsigned int u32_115C;  // X10 supply (member_lookup)
    int u32_15A8;  // X10 supply (member_lookup)
    unsigned char u32_2C[1];  /* char[1] */  // X10 supply (member_lookup)
    int u32_38;  // X10 supply (member_lookup)
    CampaignClass * u32_48;  // X10 supply (member_lookup)
    unsigned int u32_4C;  // X10 supply (member_lookup)
    unsigned int u32_50;  // X10 supply (member_lookup)
    unsigned int u32_54;  // X10 supply (member_lookup)
    unsigned int u32_5518;  // X10 supply (member_lookup)
    unsigned int u32_555C;  // X10 supply (member_lookup)
    unsigned int u32_5560;  // X10 supply (member_lookup)
    unsigned int u32_5568;  // X10 supply (member_lookup)
    int u8_555A;  // X10 supply (member_lookup)
    int vtable1;  // X10 supply (member_lookup)
};

} // namespace gamemd
