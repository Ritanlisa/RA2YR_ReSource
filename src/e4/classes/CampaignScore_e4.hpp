// GENERATED minimal flat class (fix_c2039_methods) -- G42.33 b3 ui/supplied carrier
#pragma once

namespace gamemd {

struct CampaignScore {
    int DialogProc(HWND hWnd, unsigned int a2, unsigned int uIDEvent, HWND a4);  // 0x46DFD0 G42.33 b3 supplied-body sync
    int ProcessScreen();  // 0x46FC00 G42.33 b3
    int InitScoreScreenData();  // 0x471420 G42.33 b3
    std::locale::facet * Constructor_CampaignScoreClass(char a2);  // 0x471500 G42.33 b3
    std::locale::facet * Constructor_CampaignEndScoreClass(char a2);  // 0x471520 G42.33 b3
    static int LookupDialogHash(int aP0);  // 0x60CBA0 G42.33 b3 static-form sync
    static int FindDialogTemplate(int aP0);  // 0x60CC00 G42.33 b3 static-form sync
};

} // namespace gamemd
