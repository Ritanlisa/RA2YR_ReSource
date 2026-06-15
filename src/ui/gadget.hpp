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

class GadgetClass {
public:
    GadgetClass() = default;
    virtual ~GadgetClass() = default;

    virtual void Draw(DSurface* surface, TextRenderer* text) = 0;
    virtual bool OnClick(int x, int y) { return false; }
    virtual void OnMouseEnter() {}
    virtual void OnMouseLeave() {}

    int X = 0;
    int Y = 0;
    int Width = 0;
    int Height = 0;
    bool Visible = true;
    bool Enabled = true;
    uint32_t ID = 0;
};

class TextButtonClass : public GadgetClass {
public:
    TextButtonClass(uint32_t id, const char* text, int x, int y,
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

class LabelClass : public GadgetClass {
public:
    LabelClass(uint32_t id, const char* text, int x, int y,
               uint8_t r = 200, uint8_t g = 200, uint8_t b = 200);

    void Draw(DSurface* surface, TextRenderer* text) override;

    std::string Text;
    uint8_t R, G, B;
};

// SHP-based button with 3 frames: 0=normal, 1=hover, 2=pressed
// Palette is a 256x4 uint8_t array (R,G,B,unused per entry)
class ShpButtonClass : public GadgetClass {
public:
    ShpButtonClass(uint32_t id, int x, int y, ShpImage* img,
                   const uint8_t palette[256][4]);

    void Draw(DSurface* surface, TextRenderer* text) override;
    bool OnClick(int x, int y) override;
    void OnMouseEnter() override;
    void OnMouseLeave() override;

    ShpImage* Image = nullptr;
    const uint8_t (*Palette)[4] = nullptr;
    bool Hovered = false;
    bool Pressed = false;
    std::function<void()> Callback;
};

class DialogClass {
public:
    DialogClass(int x, int y, int w, int h);
    virtual ~DialogClass() = default;

    virtual void OnRender(DSurface* surface, TextRenderer* text);
    virtual void OnupdateLogic();
    virtual bool OnMouseClick(int mouse_x, int mouse_y);
    virtual void OnMouseMove(int mouse_x, int mouse_y);
    virtual bool OnKeyDown(int key);

    void AddGadget(GadgetClass* gadget);
    void ClearGadgets();
    void SetVisible(bool visible);
    bool IsVisible() const { return visible; }
    bool IsFinished() const { return finished; }
    void Finish(int result) { finished = true; result = result; }
    int GetResult() const { return result; }

    bool finished = false;
    int result = 0;
    bool drawBackground = true;
    std::vector<GadgetClass*>& Gadgets() { return gadgets; }

protected:
    void DrawBackground(DSurface* surface);

    int x, y, w, h;
    bool visible = true;
    std::vector<GadgetClass*> gadgets;
};

} // namespace gamemd
