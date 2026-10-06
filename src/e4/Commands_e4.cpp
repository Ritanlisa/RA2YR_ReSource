// E4 materialized pending bodies (auto-generated from full_export v3)
#define GAMEMD_E4_VECTOR_TREE_TRUTH 1  // G57a2: G42.55 tree-truth bridge pulls core/vector.hpp templates
#define GAMEMD_USING_ObjectClass 1  // G57w9: command_class.hpp using-bridge collides with e4 fwd in this TU
#define GAMEMD_USING_TechnoClass 1
#define GAMEMD_E4_MATH_ALIASES 1  // G57w9: gap2 command chain needs math aliases (abstract.hpp using Point2D)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Commands_e4.hpp"
#include "e4/classes/Compare_e4.hpp"
#include "e4/classes/RawFileClass_e4.hpp"
#include "e4/classes/ToolTipManager_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/ComStreamClass_e4.hpp"
#include "e4/classes/ComPtr_e4.hpp"
#include "app/cmdline.hpp"

// 0x537A50
namespace gamemd {
char * Commands::AddRef(void *a1)  /* G57w9: raw 0x537A50 char *__thiscall */
{

  return (char *)(int32_t)(aMultiplayerdeb); /*0x537a55 G57w9 value-preserving cast*/

}
} // namespace gamemd
// 0x537A60
namespace gamemd {
const wchar_t * Commands::ddtor()  /* G57w9: raw 0x537A60 */
{

  return (const wchar_t *)g_INI_Key_De; /*0x537a65 G57w9*/

}
} // namespace gamemd
// 0x537A70
namespace gamemd {
char ** Commands::Release(void *a1)  /* G57w9: raw 0x537A70 */
{

  return (char **)(int32_t)(&off_8278C0); /*0x537a75 G57w9 value-preserving cast*/

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
int32_t Commands::Execute(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7)
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