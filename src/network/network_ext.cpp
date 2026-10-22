#include "network/network_ext.hpp"
#include "e4/e4_globals_decls.hpp"
#include "e4/classes/ConnectionClass_e4.hpp"  // g57c5 W5d scope supply
#include "e4/classes/IPXInterfaceClass_e4.hpp"  // g57c5 W5d scope supply
#include "e4/classes/Waypoint_e4.hpp"  // g57c5 W5d scope supply
// ---- g57c5 W5 vocab (declaration-only) ----
namespace gamemd {
class ConnectionClass;  // g57c5 W5 fwd
class IPXInterfaceClass;  // g57c5 W5 fwd
} // namespace gamemd
// ---- g57c5 W5 end ----



// --- IPXGlobalConnClass ---

// 0x53fbd0
void IPXGlobalConnClass::Flush(const void *a2, unsigned int a3, unsigned int a4, int a5, short a6, int a7)  // g57b5 W4: raw 真值补参 (a2,a3,a4,a5,a6,a7)
{
  int v8; // eax
  int v9; // ecx
  unsigned int v11[3]; // [esp+Ch] [ebp-Ch] BYREF

  Waypoint::InitInvalid((Waypoint *)v11); /*0x53fbdc*/
  *(unsigned int *)(this->q020 + 8) = 0; /*0x53fbe6*/
  *(unsigned short *)(this->q020 + 12) = 0; /*0x53fbec*/
  *(unsigned short *)this->q020 = this->q024; /*0x53fbf7*/
  *(unsigned char *)(this->q020 + 2) = !a5 || !a4; /*0x53fc0d*/
  *(unsigned int *)(this->q020 + 4) = *(unsigned int *)&this->PlayerIndex->q02C; /*0x53fc22*/
  if ( a7 ) /*0x53fc2b*/
    *(unsigned int *)(this->q020 + 4) = a7; /*0x53fc30*/
  *(unsigned short *)(this->q020 + 14) = this->__pad_02E; /*0x53fc3f*/
  *(unsigned char *)(this->q020 + 3) = 0; /*0x53fc46*/
  if ( a4 ) /*0x53fc49*/
  {
    v8 = a4[1]; /*0x53fc4d*/
    v9 = a4[2]; /*0x53fc50*/
    v11[0] = *a4; /*0x53fc53*/
    v11[1] = v8; /*0x53fc57*/
    v11[2] = v9; /*0x53fc5b*/
  }
  memcpy((void *)(this->q020 + 16), a2, a3); /*0x53fc74*/
  return ConnectionClass::queueSendPacket( /*0x53fc99*/
           (ConnectionClass *)this->PlayerIndex,
           (const void *)this->q020,
           a3 + 16,
           v11,
           12,
           a6);
}
// 0x7b0f50
void NetworkOptions::ApplySettings(int a2, char a3, int a4)  // g57b5 W4: raw 真值补参 (a2,a3,a4)
{
  int v5; // eax
  unsigned char v7[6]; // [esp+8h] [ebp-110h] BYREF
  uint8_t v8; // [esp+Eh] [ebp-10Ah]
  uint8_t v9; // [esp+Fh] [ebp-109h]
  uint8_t v10; // [esp+10h] [ebp-108h]
  uint8_t v11; // [esp+11h] [ebp-107h]
  uint8_t v12; // [esp+12h] [ebp-106h]
  int v13; // [esp+13h] [ebp-105h]
  char Buffer[256]; // [esp+18h] [ebp-100h] BYREF

  if ( !this->u32_3F068 ) /*0x7b0f50*/
    return 0; /*0x7b0f6c*/
  v5 = IPXInterfaceClass::initSocket((unsigned int *)this, a2, (int)v7); /*0x7b0f7c*/
  v5 = v5; /*0x7b0f81*/
  if ( v5 )
  {
    if ( v5 == 2 )
      sprintf(Buffer, "?? ?? ?? ?? : %02x %02x %02x %02x %02x %02x", v8, v9, v10, v11, v12, (uint8_t)v13);
    else
      sprintf(
        Buffer,
        "%02x %02x %02x %02x : %02x %02x %02x %02x %02x %02x",
        v7[2],
        v7[3],
        v7[4],
        v7[5],
        v8,
        v9,
        v10,
        v11,
        v12,
        (uint8_t)v13);
    if ( (int)strlen(Buffer) >= a4 ) /*0x7b1078*/
      return 0; /*0x7b1084*/
    strcpy(a3, Buffer); /*0x7b10a5*/
  }
}