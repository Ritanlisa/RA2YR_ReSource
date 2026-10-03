// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/AudioQueue_e4.hpp"
#include "e4/classes/AudioStream_e4.hpp"
#include "e4/classes/ThemeClass_e4.hpp"
#include "e4/classes/Event_e4.hpp"
#include "e4/classes/HouseTypeClass_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/Theme_e4.hpp"
#include "e4/classes/ThemeManager_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Init_e4.hpp"
#include "e4/classes/BuildingType_e4.hpp"
#include "e4/classes/Building_e4.hpp"
#include "e4/classes/Display_e4.hpp"
#include "e4/classes/TextRenderer_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/TextBuffer_e4.hpp"

// 0x4080C0
namespace gamemd {
int ThemeClass::RequestBuffer()
{

  return RequestBufferMixer((gamemd::VolumeStruct *)(unsigned int *)((&this->m_Name)[3] + 16), 0);

}
} // namespace gamemd
// 0x408140
namespace gamemd {
int ThemeClass::GetValue()
{

  return *(unsigned long long *)&(&this->m_Name)[6]; /*0x408146*/

}
} // namespace gamemd
// 0x720480
namespace gamemd {
int ThemeClass::ReadThemeEntry(uint8_t ***a2, void * aRepeat, void * aScenario, void * aSide, void * aSound)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x720480)
}
} // namespace gamemd
// 0x720590
namespace gamemd {
void * ThemeClass::InitializeThemes(char * a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x720590)
}
} // namespace gamemd
// 0x752370
namespace gamemd {
int ThemeClass::ClearQueues()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x752370)
}
} // namespace gamemd
// 0x752AB0
namespace gamemd {
void ThemeClass::GetField(int a1)
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x752AB0)
}
} // namespace gamemd
