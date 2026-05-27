#include "gamemd/ui/sidebar.hpp"

#include <cstring>

namespace gamemd
{

SidebarClass* SidebarClass::Instance = nullptr;
wchar_t SidebarClass::TooltipBuffer[SidebarClass::kTooltipBufferSize] = {};

void SidebarClass::SidebarNeedsRepaint(int mode)
{
    (void)mode;
    SidebarNeedsRedraw = true;
}

bool SidebarClass::AddCameo(AbstractType absType, int32_t idxType)
{
    (void)absType;
    (void)idxType;
    // TODO: add cameo to appropriate tab
    return false;
}

void SidebarClass::RepaintSidebar(int tab)
{
    (void)tab;
    // TODO: repaint sidebar cameos for tab
}

void SidebarClass::RedrawSidebar(int mode)
{
    (void)mode;
    // TODO: full sidebar redraw with mode flags
}

int32_t SidebarClass::GetObjectTabIdx(AbstractType absType, int32_t idxType, int32_t unused)
{
    (void)absType;
    (void)idxType;
    (void)unused;
    return 0;
}

int32_t SidebarClass::GetObjectTabIdx(AbstractType absType, BuildCat buildCat, bool isNaval)
{
    (void)absType;
    (void)buildCat;
    (void)isNaval;
    return 0;
}

// TODO: complete SidebarClass implementation

} // namespace gamemd
