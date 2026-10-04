// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Count_e4.hpp"
#include "e4/classes/Player_e4.hpp"
#include "e4/classes/SessionClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/E4Recv_5E93F0_e4.hpp"

// 0x408E70
namespace gamemd {
AbstractClass * * Count::DecrementRefCountsAudio()
{

  int v1; // eax
  int result; // eax
  int v3; // edx

  v1 = (int)(this->u32_1C - 1);
  this->u32_1C = v1; /*0x408e76*/
  if ( v1 < 0 ) /*0x408e79*/
    this->u32_1C = 0; /*0x408e7b*/
  result = (int)(this->m_RefCount); /*0x408e82*/
  v3 = *(unsigned int *)(this->m_RefCount + 152) - 1; /*0x408e8a*/
  *(unsigned int *)(this->m_RefCount + 152) = v3; /*0x408e8d*/
  if ( v3 < 0 ) /*0x408e93*/
  {
    result = (int)(this->m_RefCount);
    *(unsigned int *)(this->m_RefCount + 152) = 0; /*0x408e97*/
  }
  return (gamemd::AbstractClass **)(result);

}
} // namespace gamemd
// 0x46F6D0
namespace gamemd {
int Count::SetupAllCountriesLobby()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x46F6D0)
}
} // namespace gamemd
// 0x5F1EA0
namespace gamemd {
int32_t Count::GetCountQueue()
{

  int v1; // eax

  v1 = this->u32_38; /*0x5f1ea0*/
  if ( v1 ) /*0x5f1ea5*/
    return *(unsigned int *)(*(unsigned int *)(v1 + 4) + 40); /*0x5f1eaa*/
  else
    return 0; /*0x5f1eae*/

}
} // namespace gamemd
// 0x76F080
namespace gamemd {
int32_t Count::Get()
{

  return this->u32_4; /*0x76f083*/

}
} // namespace gamemd
// 0x76F160
namespace gamemd {
int32_t Count::Release(void *a1)
{

  ++this->u32_8; /*0x76f162*/
  return (int32_t)(this->__pad_0); /*0x76f165*/

}
} // namespace gamemd
// 0x76F170
namespace gamemd {
int32_t Count::ddtor()
{

  --this->u32_8; /*0x76f172*/
  return (int32_t)(this->__pad_0); /*0x76f175*/

}
} // namespace gamemd