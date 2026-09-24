// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Debug_e4.hpp"

// 0x7B2630
int Socket::ConfigureBuffers(AnimClass * aP1)
{
  SOCKET v2; // esi

  v2 = aP1; /*0x7b2631*/
  if ( aP1 == -1 ) /*0x7b2638*/
    v2 = *(this + 64539); /*0x7b263a*/
  if ( setsockopt(v2, 0xFFFF, 4098, optval, 4) == -1 ) /*0x7b265a*/
    WSAGetLastError(); /*0x7b265c*/
  Debug::Log(); /*0x7b2667*/
  if ( setsockopt(v2, 0xFFFF, 4097, byte_84DD9C, 4) == -1 ) /*0x7b2699*/
    WSAGetLastError(); /*0x7b269b*/
  Debug::Log(); /*0x7b26a6*/
  return 1; /*0x7b26b0*/
}