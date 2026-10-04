// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/Diplomacy_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/Map_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/DisplayClass_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Screen_e4.hpp"
#include "e4/classes/Movie_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"

// 0x657DA0
namespace gamemd {
CampaignScore * * Diplomacy::DlgProc(HWND hDlg, unsigned int a2, unsigned int a3, HWND a4)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00657DA0.json)
}
} // namespace gamemd
// 0x603DB0
namespace gamemd {
LRESULT Diplomacy_Helper(HWND hWnd, unsigned char a2)
{
  return SendMessageA(hWnd, 0x4E5u, 0, a2); /*0x603dc5*/
}
} // namespace gamemd

// 0x656580
namespace gamemd {
char * Diplomacy::GetField(int aP1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x656580)
}
}