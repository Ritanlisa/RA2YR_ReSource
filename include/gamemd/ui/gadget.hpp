#pragma once
#include <cstdint>
#include <functional>
#include <string>
#include <vector>
#include "gamemd/core/math.hpp"
#include "gamemd/render/surface.hpp"

namespace gamemd {

class DSurface;
class TextRenderer;

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

class DialogClass {
public:
    DialogClass(int x, int y, int w, int h);
    virtual ~DialogClass() = default;

    virtual void OnRender(DSurface* surface, TextRenderer* text);
    virtual void OnUpdate();
    virtual bool OnMouseClick(int mouse_x, int mouse_y);
    virtual void OnMouseMove(int mouse_x, int mouse_y);
    virtual bool OnKeyDown(int key);

    void AddGadget(GadgetClass* gadget);
    void SetVisible(bool visible);
    bool IsVisible() const { return m_visible; }
    bool IsFinished() const { return m_finished; }
    void Finish(int result) { m_finished = true; m_result = result; }
    int GetResult() const { return m_result; }

    bool m_finished = false;
    int m_result = 0;

protected:
    void DrawBackground(DSurface* surface);

    int m_x, m_y, m_w, m_h;
    bool m_visible = true;
    std::vector<GadgetClass*> m_gadgets;
};

} // namespace gamemd
