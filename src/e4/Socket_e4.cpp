// E4 materialized pending bodies (auto-generated from full_export v3)
#define GAMEMD_E4_VECTOR_TREE_TRUTH 1  // G57a2: G42.55 tree-truth bridge pulls core/vector.hpp templates
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Socket_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/SmudgeTypeClass_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/Mouse_e4.hpp"
#include "e4/classes/LayerClass_e4.hpp"
#include "e4/classes/E4Recv_5AFEF0_e4.hpp"
#include "e4/classes/SlaveManagerClass_e4.hpp"
#include "e4/classes/SortedArray_e4.hpp"
#include "e4/classes/SpawnManagerClass_e4.hpp"

// 0x7B2630
namespace gamemd {
int Socket::ConfigureBuffers(SOCKET aP1)
{

  AnimClass * v2;
  int result; // eax

  v2 =(gamemd::AnimClass *)(unsigned int)(aP1);
  if ( aP1 == (gamemd::AnimClass *)(-1) ) /*0x7b2638*/
    v2 = *((unsigned int *)this + 64539); /*0x7b263a*/
  if ( setsockopt(v2, 0xFFFF, 4098, optval, 4) == -1 ) /*0x7b265a*/
    WSAGetLastError(); /*0x7b265c*/
  ((gamemd::Debug *)this)->Log("Failed to set socket option SO_RCVBUF - error code %d.\n"); /*0x7b2667 G57w12: IDA push seq @ 0x7b2667 +1 reg-vararg omitted*/
  if ( setsockopt(v2, 0xFFFF, 4097, byte_84DD9C, 4) == -1 ) /*0x7b2699*/
    WSAGetLastError(); /*0x7b269b*/
  result = ((gamemd::Debug *)this)->Log("Failed to set socket option SO_SNDBUF - error code %d.\n"); /*0x7b26a6 G57w12: IDA push seq @ 0x7b26a6 +1 reg-vararg omitted*/
  LOBYTE(result) = 1; /*0x7b26ae*/
  return result; /*0x7b26b0*/

}
} // namespace gamemd