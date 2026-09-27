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

// 0x6a6300
bool SidebarClass::AddCameo(AbstractType absType, int32_t idxType)
{
  int v4; // eax
  int *v5; // ecx
  int v7; // edx
  int v8; // ecx
  int *v9; // eax
  int v10; // edi
  int v11; // eax
  int *v12; // ecx
  int v13; // ebp
  int *v14; // eax
  int v15; // eax
  int v16; // esi
  int v17; // ebp
  int v18; // edi
  int v19; // ebp
  int i; // esi
  int v21; // edx
  int v23; // [esp+10h] [ebp-4h]
  int v24; // [esp+18h] [ebp+4h]

  if ( g_ArmageddonMode ) /*0x6a630e*/
    return 0; /*0x6a630e*/
  v4 = 0; /*0x6a6314*/
  v5 = this + 1382; /*0x6a6316*/
  while ( *v5 <= 0 ) /*0x6a631f*/
  {
    ++v4; /*0x6a6321*/
    v5 += 997; /*0x6a6322*/
    if ( v4 >= 4 ) /*0x6a632b*/
    {
      v23 = -1; /*0x6a632d*/
      goto LABEL_6; /*0x6a632d*/
    }
  }
  v23 = v4; /*0x6a637e*/
  LABEL_6:
  switch ( absType )
  {
    case 15:
    case 16:
      v24 = 2; /*0x6a63af*/
      break;
    case 1:
    case 40:
    case 2:
    case 3:
      v24 = 3; /*0x6a63a5*/
      break;
    case 6:
    case 7:
      v24 = GetHouseTechLevel(absType, idxType) == 5; /*0x6a639f*/
      break;
    default:
      v24 = absType == 57 || absType == 32 || absType == 31 ? 1 : -1;
      break;
  }
  v7 = *(&this->u32_F94 * v24 + 1382); /*0x6a63cf*/
  if ( v7 > 75 ) /*0x6a63d9*/
    return 0; /*0x6a63d9*/
  v8 = 0; /*0x6a63df*/
  if ( v7 > 0 ) /*0x6a63e3*/
  {
    v9 = &this->u32_F94 * v24 + 1383; /*0x6a63e5*/
    while ( v9[1] != absType || *v9 != idxType ) /*0x6a63ef*/
    {
      ++v8; /*0x6a63f5*/
      v9 += 13; /*0x6a63f6*/
      if ( v8 >= v7 ) /*0x6a63fb*/
        goto LABEL_29; /*0x6a63fb*/
    }
    return 0; /*0x6a6602*/
  }
  LABEL_29:
  if ( !g_IKnowWhatImDoing && absType != 31 ) /*0x6a6409*/
    VoxClass::FindAndPlay(aEvaNewconstruc, -1); /*0x6a6415*/
  TabCameoListClass::AddCameo_ReplaceItAll(absType, idxType); /*0x6a641e*/
  *((_BYTE *)&this->u32_3E50 * v24 + 5504) = 1; /*0x6a6423*/
  v10 = 0; /*0x6a6427*/
  g_CameoRenderFlag = 1; /*0x6a6429*/
  v11 = 0; /*0x6a6430*/
  v12 = this + 1382; /*0x6a6432*/
  while ( *v12 <= 0 ) /*0x6a643a*/
  {
    ++v11; /*0x6a643c*/
    v12 += 997; /*0x6a643d*/
    if ( v11 >= 4 ) /*0x6a6446*/
      goto LABEL_37; /*0x6a6446*/
  }
  if ( v11 != -1 ) /*0x6a644d*/
    goto LABEL_39; /*0x6a644d*/
  LABEL_37:
  if ( dword_B0B478 ) /*0x6a6455*/
  {
    *(&this->u32_85C0) = 1; /*0x6a6457*/
    *(&this->u32_8589) = 0; /*0x6a6461*/
  }
  LABEL_39:
  v13 = v24; /*0x6a6467*/
  if ( !DialogControl::IsHidden((_BYTE *)&unk_B07C48 + 96 * v24) ) /*0x6a647a*/
    DialogControl::Hide((_BYTE *)&unk_B07C48 + 96 * v24); /*0x6a6485*/
  if ( v24 == *(&this->u32_85C1) ) /*0x6a6490*/
    Tactical::UpdateUIVisibility(this); /*0x6a6494*/
  this->ToggleSidebarDisplay(1); /*0x6a649f*/
  if ( v23 == -1 ) /*0x6a64aa*/
  {
    v14 = (int *)(this + 1382);
    while ( *v14 <= 0 ) /*0x6a64b9*/
    {
      ++v10; /*0x6a64bb*/
      v14 += 997; /*0x6a64bc*/
      if ( v10 >= 4 ) /*0x6a64c4*/
      {
        v10 = -1; /*0x6a64c6*/
        break; /*0x6a64c6*/
      }
    }
    v15 = *(&this->u32_85C1); /*0x6a64c9*/
    if ( v10 != v15 ) /*0x6a64d1*/
    {
      GadgetClass::Hide((char *)&unk_B07C48 + 96 * v15); /*0x6a64e3*/
      v16 = 0; /*0x6a64f5*/
      v17 = (int)(&this->u32_F94 * *(&this->u32_85C1) + 1361); /*0x6a64fd*/
      *((_BYTE *)&this->u32_3E50 * *(&this->u32_85C1) + 5472) = 0; /*0x6a6504*/
      do /*0x6a652f*/
      {
        Tactical::SelectObject(56 * (v16 + 60 * *(_DWORD *)(v17 + 56)) + 11566720); /*0x6a6526*/
        ++v16; /*0x6a652b*/
      }
      while ( v16 < 60 ); /*0x6a652f*/
      *(&this->u32_85C1) = v10; /*0x6a6534*/
      GadgetClass::Show((char *)&unk_B07C48 + 96 * v10); /*0x6a6543*/
      v18 = (int)(&this->u32_F94 * *(&this->u32_85C1) + 1361); /*0x6a6560*/
      *((_BYTE *)&this->u32_3E50 * *(&this->u32_85C1) + 5472) = 1; /*0x6a6567*/
      v19 = UI_Add_6AC430(&MapClass_Instance); /*0x6a6570*/
      for ( i = 0; i < v19; ++i ) /*0x6a6576*/
      {
        Hash::Reset((_DWORD *)(56 * (i + 60 * *(_DWORD *)(v18 + 56)) + 11566720)); /*0x6a6590*/
        Hash::InsertOrdered(56 * (i + 60 * *(_DWORD *)(v18 + 56)) + 11566720); /*0x6a65b3*/
      }
      g_CameoRenderFlag = 1; /*0x6a65bf*/
      Tactical::UpdateUIVisibility(this); /*0x6a65c6*/
      v13 = v24; /*0x6a65cb*/
      this->q53A7 = 1; /*0x6a65cf*/
    }
  }
  v21 = (int)(*this);
  this->q53A6 = 1; /*0x6a65dc*/
  this->MarkForRedraw(0); /*0x6a65e3*/
  if ( v13 == *(&this->u32_85C1) ) /*0x6a65ec*/
    g_TooltipActive = 1; /*0x6a65ee*/
  return 1; /*0x6a65f5*/
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

} // namespace gamemd
}
