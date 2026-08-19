#include "ui/sidebar.hpp"

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
    // Find available cameo slot on the active tab
    TabDataStruct& tab = Tabs[ActiveTabIndex >= 0 ? ActiveTabIndex : 0];
    if (tab.CameoCount >= kMaxCameosPerTab) return false;

    CameoDataStruct& cameo = tab.Cameos[tab.CameoCount];
    cameo = CameoDataStruct(idxType, absType);
    ++tab.CameoCount;
    
    tab.NeedsRedraw = true;
    SidebarNeedsRedraw = true;
    return true;
}

void SidebarClass::RepaintSidebar(int tab)
{
    if (tab >= 0 && tab < kMaxTabs)
    {
        Tabs[tab].NeedsRedraw = true;
    }
    SidebarNeedsRedraw = true;
}

void SidebarClass::RedrawSidebar(int mode)
{
    (void)mode;
    SidebarNeedsRedraw = true;
    SidebarBackgroundNeedsRedraw = true;
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

// ============================================================================
// Sidebar::Render - render the full sidebar (IDA: 0x63FB20)
// ============================================================================

void Sidebar_Render(void* surface, int draw_x, int draw_y, int draw_w, int draw_h)
{
    // Render sidebar tabs
    // Draw cameos for each visible row
    // Draw power bar
    // Draw credits display
    
    (void)surface;
    (void)draw_x;
    (void)draw_y;
    (void)draw_w;
    (void)draw_h;
}

// ============================================================================
// SidebarClass::DrawTabs - draw tab buttons (IDA: 0x6D0A20)
// ============================================================================

void SidebarClass_DrawTabs(SidebarClass* sidebar, void* surface)
{
    if (!sidebar) return;
    
    // Draw each tab button at its screen location
    for (int i = 0; i < kMaxTabs; ++i)
    {
        TabDataStruct& tab = sidebar->Tabs[i];
        if (!tab.AllowedToDraw) continue;
        
        // Draw tab background
        // Draw tab icon/text at tab.Location
    }
    
    (void)surface;
}

// ============================================================================
// Sidebar::UpdateProductionDisplay - update production progress (IDA: 0x6A9540)
// ============================================================================

void Sidebar_UpdateProductionDisplay(SidebarClass* sidebar)
{
    if (!sidebar) return;
    
    // Update progress timers for all cameos in build queue
    for (int t = 0; t < kMaxTabs; ++t)
    {
        TabDataStruct& tab = sidebar->Tabs[t];
        for (int c = 0; c < tab.CameoCount; ++c)
        {
            CameoDataStruct& cameo = tab.Cameos[c];
            
            // Update gclock-based progress animation
            if (cameo.ProgressRate > 0)
            {
                cameo.Progress += cameo.ProgressStep;
                if (cameo.Progress >= 54)
                    cameo.Progress = 0;
                cameo.ProgressHasChanged = true;
            }
        }
    }
}

// ============================================================================
// DrawSidebarCreditsTimer - render credits counter (IDA: 0x4A2370)
// ============================================================================

void DrawSidebarCreditsTimer(void* surface, int draw_x, int draw_y, int credits)
{
    // Format credits as text and draw at sidebar position
    (void)surface;
    (void)draw_x;
    (void)draw_y;
    (void)credits;
}

// ============================================================================
// ObjectClass::ToggleSidebarDisplay - show/hide object info (IDA: 0x6A7D70)
// ============================================================================

void ObjectClass_ToggleSidebarDisplay(void* obj, bool show)
{
    (void)obj;
    (void)show;
}

} // namespace gamemd
