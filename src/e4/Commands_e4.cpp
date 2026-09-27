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

// 0x537A50
namespace gamemd {
char * Commands::AddRef()
{
  return (char *)(aMultiplayerdeb);
}
} // namespace gamemd
// 0x537A60
namespace gamemd {
const wchar_t * Commands::ddtor()
{
  return (const wchar_t *)(g_INI_Key_De);
}
} // namespace gamemd
// 0x537A70
namespace gamemd {
char ** Commands::Release()
{
  return (char **)(&off_8278C0);
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
char Commands::Execute()
{
  char result; // al

  result = byte_A8B8B4; /*0x537a90*/
  if ( byte_A8B8B4 ) /*0x537a97*/
  {
    result = byte_A8B8B5 == 0; /*0x537aa0*/
    byte_A8B8B5 = byte_A8B8B5 == 0; /*0x537aa3*/
  }
  return result; /*0x537aa8*/
}
} // namespace gamemd