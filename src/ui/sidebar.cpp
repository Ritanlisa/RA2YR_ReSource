// G42.32 P: tree-universe marker -- e4 tree-owned decls suppressed
#define GAMEMD_TREE_UNIVERSE 1
// G42.32 S: guard-order tree-bridge -- ra2::game full defs precede e4 leaf headers
#include "object/abstract.hpp"
#include "object/techno.hpp"
#ifdef GAMEMD_TREE_UNIVERSE
namespace gamemd {
using ra2::game::AbstractClass;
using ra2::game::TechnoClass;
}
#endif
#include "ui/sidebar.hpp"
#include "e4/classes/TabCameoListClass_e4.hpp"
#include "e4/classes/VoxClass_e4.hpp"
#include "e4/classes/Hash_e4.hpp"

#include <cstring>
#include "e4/e4_globals_decls.hpp"
#include "e4/e4_globals_decls.hpp"
#include "e4/e4_globals_decls.hpp"
#include "e4/e4_globals_decls.hpp"
#include "e4/classes/DialogControl_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/GadgetClass_e4.hpp"

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
    int result; // eax
    int v5; // eax
    int *v6; // ecx
    int v8; // edx
    int v9; // ecx
    int v10; // edi
    int v11; // eax
    int *v12; // ecx
    int v13; // ebp
    int *v14; // eax
    int v15; // eax
    int v16; // esi
    char *v17; // ebp
    char *v18; // edi
    int v19; // ebp
    int i; // esi
    int (__thiscall **SidebarClass_field_0x0)(SidebarClass *, unsigned int); // edx
    ObjectClass *v22; // [esp+0h] [ebp-14h]
    int v23; // [esp+10h] [ebp-4h]
    int v24; // [esp+18h] [ebp+4h]

    if ( stru_A8EB00.?[391] ) /*0x6a630e*/
      goto LABEL_57; /*0x6a630e*/
    v5 = 0; /*0x6a6314*/
    v6 = (int *)((char *)this + 5528); /*0x6a6316*/
    while ( *v6 <= 0 ) /*0x6a631f*/
    {
      ++v5; /*0x6a6321*/
      v6 += 997; /*0x6a6322*/
      if ( v5 >= 4 ) /*0x6a632b*/
      {
        v23 = -1; /*0x6a632d*/
        goto LABEL_6; /*0x6a632d*/
      }
    }
    v23 = v5; /*0x6a637e*/
  LABEL_6:
    switch ( a2 )
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
        v24 = GetHouseTechLevel(a2, a3) == 5; /*0x6a639f*/
        break;
      default:
        v24 = a2 == 57 || a2 == 32 || a2 == 31 ? 1 : -1;
        break;
    }
    result = v24; /*0x6a63b7*/
    v8 = *((unsigned int *)this + 997 * v24 + 1382); /*0x6a63cf*/
    if ( v8 > 75 ) /*0x6a63d9*/
      goto LABEL_57; /*0x6a63d9*/
    v9 = 0; /*0x6a63df*/
    if ( v8 > 0 ) /*0x6a63e3*/
    {
      result = (int)this + 3988 * v24 + 5532; /*0x6a63e5*/
      while ( *(unsigned int *)(result + 4) != a2 || *(unsigned int *)result != a3 ) /*0x6a63ef*/
      {
        ++v9; /*0x6a63f5*/
        result += 52; /*0x6a63f6*/
        if ( v9 >= v8 ) /*0x6a63fb*/
          goto LABEL_29; /*0x6a63fb*/
      }
  LABEL_57:
      IDA_LOBYTE(result) = 0; /*0x6a65ff*/
      return result; /*0x6a6602*/
    }
  LABEL_29:
    if ( !dword_A8E7AC && a2 != 31 ) /*0x6a6409*/
      VoxClass::FindAndPlay(&stru_83FA64, -1); /*0x6a6415*/
    TabCameoListClass::AddCameo_ReplaceItAll((TabCameoListClass *)&this->__pad_CD2[3988 * v24 + 2162], a2, a3); /*0x6a641e*/
    *((unsigned char *)this + 3988 * v24 + 5504) = 1; /*0x6a6423*/
    v10 = 0; /*0x6a6427*/
    g_CameoRenderFlag = 1; /*0x6a6429*/
    v11 = 0; /*0x6a6430*/
    v12 = (int *)((char *)this + 5528); /*0x6a6432*/
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
      *((unsigned int *)this + 5350) = 1; /*0x6a6457*/
      *((unsigned int *)this + 5349) = 0; /*0x6a6461*/
    }
  LABEL_39:
    v13 = v24; /*0x6a6467*/
    if ( !(unsigned __int8)DialogControl::IsHidden((DialogControl *)&stru_B07C48 + 6 * v24) ) /*0x6a647a*/
      DialogControl::Hide((GadgetClass *)(&stru_B07C48 + 8 * v24)); /*0x6a6485*/
    if ( v24 == *((unsigned int *)this + 5351) ) /*0x6a6490*/
      Tactical::UpdateUIVisibility((Tactical *)this); /*0x6a6494*/
    (*((void (__thiscall **)(SidebarClass *, int))this->SidebarClass_field_0x0 + 54))(this, 1); /*0x6a649f*/
    if ( v23 == -1 ) /*0x6a64aa*/
    {
      v14 = (int *)((char *)this + 5528); /*0x6a64b0*/
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
      v15 = *((unsigned int *)this + 5351); /*0x6a64c9*/
      if ( v10 != v15 ) /*0x6a64d1*/
      {
        GadgetClass::Hide((GadgetClass *)(&stru_B07C48 + 8 * v15)); /*0x6a64e3*/
        v16 = 0; /*0x6a64f5*/
        v17 = &this->__pad_CD2[3988 * *((unsigned int *)this + 5351) + 2162]; /*0x6a64fd*/
        *((unsigned char *)this + 3988 * *((unsigned int *)this + 5351) + 5472) = 0; /*0x6a6504*/
        do /*0x6a652f*/
        {
          Tactical::SelectObject( /*0x6a6526*/
            (GScreenClass *)&stru_87F5F0.__pad_58[416],
            56 * (v16 + 60 * *((unsigned int *)v17 + 14)) + 11566720);
          ++v16; /*0x6a652b*/
        }
        while ( v16 < 60 ); /*0x6a652f*/
        *((unsigned int *)this + 5351) = v10; /*0x6a6534*/
        GadgetClass::Show((GadgetClass *)(&stru_B07C48 + 8 * v10)); /*0x6a6543*/
        v18 = &this->__pad_CD2[3988 * *((unsigned int *)this + 5351) + 2162]; /*0x6a6560*/
        *((unsigned char *)this + 3988 * *((unsigned int *)this + 5351) + 5472) = 1; /*0x6a6567*/
        v19 = UI_Add_6AC430(v22); /*0x6a6570*/
        for ( i = 0; i < v19; ++i ) /*0x6a6576*/
        {
          Hash::Reset((LinkClass *)(56 * (i + 60 * *((unsigned int *)v18 + 14)) + 11566720)); /*0x6a6590*/
          Hash::InsertOrdered( /*0x6a65b3*/
            (GScreenClass *)&stru_87F5F0.__pad_58[416],
            56 * (i + 60 * *((unsigned int *)v18 + 14)) + 11566720);
        }
        g_CameoRenderFlag = 1; /*0x6a65bf*/
        Tactical::UpdateUIVisibility((Tactical *)this); /*0x6a65c6*/
        v13 = v24; /*0x6a65cb*/
        *((unsigned char *)this + 21415) = 1; /*0x6a65cf*/
      }
    }
    SidebarClass_field_0x0 = (int (__thiscall **)(SidebarClass *, unsigned int))this->SidebarClass_field_0x0; /*0x6a65d6*/
    *((unsigned char *)this + 21414) = 1; /*0x6a65dc*/
    result = SidebarClass_field_0x0[14](this, 0); /*0x6a65e3*/
    if ( v13 == *((unsigned int *)this + 5351) ) /*0x6a65ec*/
      g_TooltipActive = 1; /*0x6a65ee*/
    IDA_LOBYTE(result) = 1; /*0x6a65f8*/
    return result; /*0x6a65f5*/
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
