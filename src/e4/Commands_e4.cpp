// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Commands_e4.hpp"
#include "e4/classes/Compare_e4.hpp"
#include "e4/classes/RawFileClass_e4.hpp"
#include "e4/classes/ToolTipManager_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/CommandClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/ComStreamClass_e4.hpp"
#include "e4/classes/ComPtr_e4.hpp"
#include "app/cmdline.hpp"

// 0x537A50
namespace gamemd {
int32_t Commands::AddRef()
{

  return aMultiplayerdeb; /*0x537a55*/

}
} // namespace gamemd
// 0x537A60
namespace gamemd {
int32_t Commands::ddtor()
{

  return g_INI_Key_De; /*0x537a65*/

}
} // namespace gamemd
// 0x537A70
namespace gamemd {
int32_t Commands::Release()
{

  return &off_8278C0; /*0x537a75*/

}
} // namespace gamemd
// 0x537A80
namespace gamemd {
void ** Commands::StubReturn8550640()
{

  return &off_8278F0; /*0x537a85*/

}
} // namespace gamemd
// 0x537A90
namespace gamemd {
int32_t Commands::Execute()
{

  char result; // al

  result = MEMORY[0xA8B8B4]; /*0x537a90*/
  if ( MEMORY[0xA8B8B4] ) /*0x537a97*/
  {
    result = MEMORY[0xA8B8B5] == 0; /*0x537aa0*/
    MEMORY[0xA8B8B5] = MEMORY[0xA8B8B5] == 0; /*0x537aa3*/
  }
  return result; /*0x537aa8*/

}
} // namespace gamemd