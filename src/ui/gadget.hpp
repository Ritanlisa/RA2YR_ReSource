#pragma once
#include <cstdint>
#include <functional>
#include <string>
#include <vector>
#include "core/math.hpp"
#include "render/surface.hpp"

namespace gamemd {

class DSurface;
class TextRenderer;
class ShpImage;

enum class GadgetFlag : uint32_t {
    None        = 0,
    LeftJustify = 0x01,
    CenterText  = 0x02,
    RightJustify= 0x04,
};

struct GadgetEvent {
    enum Type { None, Click, Enter, Leave };
    Type type = None;
};

// ============================================================================
// GadgetClass — base widget (simplified from original GadgetClass @ 0x4E12F0)
// Original inherits LinkClass (prev/next ptrs at +0, +4) then members at +12.
// Member layout in original binary (GadgetClass::Construct @ 0x4E12F0):
//   +0x00 LinkClass::Next (ptr)
//   +0x04 LinkClass::Prev (ptr)
//   +0x0C X (int)         = a2
//   +0x10 Y (int)         = a3
//   +0x14 Width (int)     = a4
//   +0x18 Height (int)    = a5
//   +0x1C NeedsRedraw (byte)
//   +0x1D IsSticky (byte) = a7
//   +0x1E Disabled (byte)
//   +0x20 Flags (int)     = a6
//   sizeof(GadgetClass) = 0x24 (from constructor)
// ============================================================================
class GadgetClass {
public:
    GadgetClass() = default;
    virtual ~GadgetClass() = default;  // 0x4E1390

    virtual void Draw(DSurface* surface, TextRenderer* text) = 0;  // 0x557920
    virtual bool OnClick(int x, int y); // IDA: NOT_FOUND
    virtual void OnMouseEnter() = 0; // IDA: NOT_FOUND
    virtual void OnMouseLeave() = 0; // IDA: NOT_FOUND

    int X = 0;           // binary offset +0x0C
    int Y = 0;           // binary offset +0x10
    int Width = 0;       // binary offset +0x14
    int Height = 0;      // binary offset +0x18
    bool Visible = true; // custom (binary: NeedsRedraw @ +0x1C)
    bool Enabled = true; // custom (binary: Disabled @ +0x1E)
    uint32_t ID = 0;     // custom (binary: GadgetFlag Flags @ +0x20)
};

// ============================================================================
// TextButtonClass — text label with button behavior
// ============================================================================
class TextButtonClass : public GadgetClass {
public:
    TextButtonClass(uint32_t id, const char* text, int x, int y, // IDA: UNMATCHED — no_callgraph_match, no_git_history
                    int w = 200, int h = 32);

    void Draw(DSurface* surface, TextRenderer* text) override;
    bool OnClick(int x, int y) override;
    void OnMouseEnter() override;
    void OnMouseLeave() override;

    std::string Text;
    uint8_t R = 255, G = 255, B = 255;
    bool Hovered = false;
    std::function<void()> Callback;
};

// ============================================================================
// LabelClass — static text display
// ============================================================================
class LabelClass : public GadgetClass {
public:
    LabelClass(uint32_t id, const char* text, int x, int y, // IDA: UNMATCHED — no_callgraph_match, no_git_history
               uint8_t r = 200, uint8_t g = 200, uint8_t b = 200);

    void Draw(DSurface* surface, TextRenderer* text) override;
    void OnMouseEnter() override;
    void OnMouseLeave() override;

    std::string Text;
    uint8_t R, G, B;
};

// ============================================================================
// ShpButtonClass — SHP-based button with 3 frames (0=normal, 1=hover, 2=pressed)
// Palette is a 256x4 uint8_t array (R,G,B,unused per entry)
// ============================================================================
class ShpButtonClass : public GadgetClass {
public:
    ShpButtonClass(uint32_t id, int x, int y, ShpImage* img, // IDA: UNMATCHED — no_callgraph_match, no_git_history
                   const uint8_t palette[256][4]);

    void Draw(DSurface* surface, TextRenderer* text) override;
    bool OnClick(int x, int y) override;
    void OnMouseEnter() override;
    void OnMouseLeave() override;

    ShpImage* Image = nullptr;
    const uint8_t (*Palette)[4] = nullptr; // IDA: UNMATCHED — no_callgraph_match, no_git_history
    bool Hovered = false;
    bool Pressed = false;
    std::function<void()> Callback;
};

// ============================================================================
// DialogClass — custom widget-based dialog (not Win32 DLGPROC)
// ============================================================================
class DialogClass {
public:
    DialogClass(int x, int y, int w, int h); // IDA: UNMATCHED — no_callgraph_match, no_git_history
    virtual ~DialogClass() = default; // IDA: NOT_FOUND

    virtual void OnRender(DSurface* surface, TextRenderer* text);  // 0x68F060
    virtual void OnupdateLogic(); // IDA: UNMATCHED — no_callgraph_match, no_git_history
    virtual bool OnMouseClick(int mouse_x, int mouse_y); // IDA: UNMATCHED — no_callgraph_match, no_git_history
    virtual void OnMouseMove(int mouse_x, int mouse_y); // IDA: UNMATCHED — no_callgraph_match, no_git_history
    virtual bool OnKeyDown(int key); // IDA: NOT_FOUND

    void AddGadget(GadgetClass* gadget); // IDA: UNMATCHED — no_callgraph_match, no_git_history
    void ClearGadgets(); // IDA: NOT_FOUND
    void SetVisible(bool visible); // IDA: UNMATCHED — no_callgraph_match, no_git_history
    bool IsVisible() const;  // 0x4A5110
    bool IsFinished() const; // IDA: UNMATCHED — no_callgraph_match, no_git_history
    void Finish(int result); // IDA: UNMATCHED — no_callgraph_match, no_git_history
    int GetResult() const; // IDA: NOT_FOUND

    bool finished = false;
    int result = 0;
    bool drawBackground = true;
    std::vector<GadgetClass*>& Gadgets(); // IDA: UNMATCHED — no_callgraph_match, no_git_history

protected:
    void DrawBackground(DSurface* surface);  // 0x621E90

    int x, y, w, h;
    bool visible = true;
    std::vector<GadgetClass*> gadgets;
};

} // namespace gamemd
