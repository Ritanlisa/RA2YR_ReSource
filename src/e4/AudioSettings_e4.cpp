// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Options_e4.hpp"
#include "e4/classes/AudioSettings_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/AudioQueue_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/WinsockInterfaceClass_e4.hpp"
#include "e4/classes/CampaignClass_e4.hpp"
#include "e4/classes/VocClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/AudioMixer_e4.hpp"
#include "e4/classes/AudioStream_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/LoadingScreen_e4.hpp"
#include "e4/classes/Init_e4.hpp"
#include "e4/classes/RefCount_e4.hpp"
#include "e4/classes/Theme_e4.hpp"
#include "e4/classes/RulesClass_e4.hpp"

// 0x5FA440
namespace gamemd {
void AudioSettings::SetFlag70(char a2)
{

  *((unsigned char *)this + 70) = a2; /*0x5fa444*/
  byte_A83D22 = a2; /*0x5fa447*/
  ((gamemd::Debug *)this)->Log(); /*0x5fa463*/

}
} // namespace gamemd
// 0x5FA470
namespace gamemd {
void AudioSettings::SetFlag68(char a2)
{

  *((unsigned char *)this + 68) = a2; /*0x5fa474*/
  byte_A83D20 = a2; /*0x5fa477*/
  ((gamemd::Debug *)this)->Log(); /*0x5fa493*/

}
} // namespace gamemd
// 0x6B6300
namespace gamemd {
AbstractClass * * AudioSettings::DlgProc(HWND hDlg, unsigned int a2, unsigned int a3, HWND hWnd)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6B6300)
}
} // namespace gamemd