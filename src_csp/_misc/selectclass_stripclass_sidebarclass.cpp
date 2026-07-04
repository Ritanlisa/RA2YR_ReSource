#include "selectclass_stripclass_sidebarclass.hpp"

int  SelectClass_StripClass_SidebarClass::_vt28(int this)
{
    int v2; // eax
    int result; // eax
    SidebarClass::updateStripVisibility((uint32_t *)g_TacticalRender);
    SidebarClass::initializeStrip((uint32_t *)g_TacticalRender, 0);
    v2 = *(uint32_t *)(this + 44);
    *(uint8_t *)(this + 52) = 1;
    *(uint8_t *)(v2 + 60) = 1;
    result = MapClass::MarkForRedraw(&MapClass_Instance, 0);
    g_CameoRenderFlag = 1;
    g_TooltipActive = 1;
    return result;
}

int  SelectClass_StripClass_SidebarClass::_vt29(int this)
{
    int v2; // eax
    int result; // eax
    SidebarClass::updateStripPosition((uint32_t *)g_TacticalRender);
    v2 = *(uint32_t *)(this + 44);
    *(uint8_t *)(this + 52) = 0;
    *(uint8_t *)(v2 + 60) = 1;
    result = MapClass::MarkForRedraw(&MapClass_Instance, 0);
    g_CameoRenderFlag = 1;
    g_TooltipActive = 1;
    return result;
}

uint32_t * SelectClass_StripClass_SidebarClass::_vt00(uint32_t *Block, char a2)
{
    GadgetClass::Dtor(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
}

