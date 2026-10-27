#include "network/connection.hpp"
#include "e4/classes/PacketQueue_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/GUID_e4.hpp"
#include "e4/classes/Terrain_e4.hpp"
#include "e4/classes/NetworkID_e4.hpp"
#include <cstring>
#include "core/globals_core.hpp"
#include "e4/e4_globals_decls.hpp"
#include "e4/classes/Factory_e4.hpp"
#include "e4/classes/Waypoint_e4.hpp"
#include "e4/classes/EventClass_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/CommBufferClass_e4.hpp"
// ---- g57c5 W5 vocab (declaration-only) ----
namespace gamemd {
void Network_Helper();  // g57c5 W5 vocab (csp)
} // namespace gamemd
// ---- g57c5 W5 end ----
namespace gamemd
{

// ============================================================================
// ConnectionClass
// ============================================================================

ConnectionClass::ConnectionClass() noexcept
    : PlayerIndex(-1)
    , Active(false)
    , LastPacketTime(0)
    , PacketsSent(0)
    , PacketsReceived(0)
{
}

// 0x48b410
int ModemConnectionClass::queueSendPacket(const void *a2, int32_t a3, const void *a4, int32_t a5, int16_t a6)
{
  int PlayerIndex; // eax
  int v8; // esi
  int v9; // ebx
  unsigned char *i; // edi
  int v12; // eax
  int v13; // ecx

  PlayerIndex = this->PlayerIndex; /*0x48b418*/
  v8 = (*(unsigned int *)(this->PhoneNumber + 16)); /*0x48b41c*/
  if ( v8 == PlayerIndex || a3 > this->LastPacketTime ) /*0x48b42b*/
  {
    if ( v8 == PlayerIndex ) /*0x48b52f*/
    {
      Debug::Log(); /*0x48b536*/
      return 0; /*0x48b544*/
    }
    Debug::Log(); /*0x48b552*/
    return 0; /*0x48b552*/
  }
  v9 = 0; /*0x48b433*/
  if ( PlayerIndex <= 0 ) /*0x48b437*/
    return 0; /*0x48b437*/
  for ( i = (unsigned char *)(*(unsigned int *)(this->PhoneNumber + 12)); (*i & 1) != 0; i += 36 ) /*0x48b440*/
  {
    if ( ++v9 >= PlayerIndex ) /*0x48b44d*/
      return 0; /*0x48b455*/
  }
  if ( v9 == -1 ) /*0x48b45b*/
    return 0; /*0x48b55d*/
  v12 = 36 * v9; /*0x48b464*/
  *(unsigned int *)((*(unsigned int *)(this->PhoneNumber + 12)) + v12) = *(unsigned int *)((*(unsigned int *)(this->PhoneNumber + 12)) + 36 * v9) | 1; /*0x48b46d*/
  *(unsigned int *)(36 * v9 + (*(unsigned int *)(this->PhoneNumber + 12))) &= ~2u; /*0x48b47a*/
  *(unsigned int *)(36 * v9 + (*(unsigned int *)(this->PhoneNumber + 12))) &= ~4u; /*0x48b486*/
  *(unsigned int *)(v12 + (*(unsigned int *)(this->PhoneNumber + 12)) + 4) = 0; /*0x48b490*/
  *(unsigned int *)(v12 + (*(unsigned int *)(this->PhoneNumber + 12)) + 8) = 0; /*0x48b497*/
  *(unsigned int *)(v12 + (*(unsigned int *)(this->PhoneNumber + 12)) + 12) = 0; /*0x48b49e*/
  *(unsigned int *)(v12 + (*(unsigned int *)(this->PhoneNumber + 12)) + 16) = a3; /*0x48b4a5*/
  *(unsigned short *)(v12 + (*(unsigned int *)(this->PhoneNumber + 12)) + 32) = a6; /*0x48b4ae*/
  memcpy(*(void **)(36 * v9 + (*(unsigned int *)(this->PhoneNumber + 12)) + 20), a2, a3); /*0x48b4c1*/
  if ( a4 && a5 > 0 && a5 <= this->PacketsSent ) /*0x48b4dd*/
  {
    memcpy(*(void **)(v12 + (*(unsigned int *)(this->PhoneNumber + 12)) + 28), a4, a5); /*0x48b4eb*/
    *(unsigned int *)(v12 + (*(unsigned int *)(this->PhoneNumber + 12)) + 24) = a5; /*0x48b4f9*/
  }
  else
  {
    *(unsigned int *)(v12 + (*(unsigned int *)(this->PhoneNumber + 12)) + 24) = 0; /*0x48b502*/
  }
  *(unsigned int *)(this->PhoneNumber[6] + 4 * (*(unsigned int *)(this->PhoneNumber + 16))) = v9; /*0x48b512*/
  v13 = (*(unsigned int *)(this->PhoneNumber + 16)) + 1; /*0x48b51b*/
  ++this->PhoneNumber[5]; /*0x48b51e*/
  (*(unsigned int *)(this->PhoneNumber + 16)) = v13; /*0x48b521*/
  return 1; /*0x48b44f*/
}
// 0x48c5a0
int ConnectionClass::connect()
{
  int v2; // esi
  Terrain *PlayerIndex; // ecx
  int TileType; // eax
  int v5; // eax

  v2 = 0; /*0x48c5a4*/
  PlayerIndex = (Terrain *)this->PlayerIndex; /*0x48c5a6*/
  if ( PlayerIndex->q038 > 0 ) /*0x48c5ae*/
  {
    do /*0x48c5e7*/
    {
      TileType = PlayerIndex->GetTileType(v2); /*0x48c5b1*/
      if ( (*(unsigned char *)TileType & 2) != 0 ) /*0x48c5b9*/
      {
        v5 = *(unsigned int *)(TileType + 12); /*0x48c5bb*/
        if ( *(unsigned char *)(v5 + 2) == 1 || *(unsigned int *)(v5 + 4) < ((ModemConnectionClass *)this)->PhoneNumber[11] ) /*0x48c5cc*/
          ((PacketQueue *)this->PlayerIndex)->ReleaseEntry(0, 0, v2--, 0, 0); /*0x48c5da*/
      }
      PlayerIndex = (Terrain *)this->PlayerIndex; /*0x48c5e0*/
      ++v2; /*0x48c5e3*/
    }
    while ( v2 < PlayerIndex->q038 ); /*0x48c5e7*/
  }
  return 1; /*0x48c5e9*/
}
// 0x48be60
void * IPXConnClass::initConnection(int a2, int a3, int a4, int16_t a5, int a6, int a7, int a8, int a9)
{
  CommBufferClass *v10; // eax
  ModemConnectionClass *vThis = (ModemConnectionClass *)this; /* x145b: ida til receiver=ModemConnectionClass* (0x48BE60) */

  *(unsigned short *)&vThis->PhoneNumber[3] = (unsigned short)a5; /*0x48be73*/
  vThis->PhoneNumber[4] = (char)a6; /*0x48be7b*/
  /* X11: ptr_0 install elided (implicit via class virtuals 0x48be83) — binary-proven install, was 0 */
  vThis->PhoneNumber[1] = (char)(a4 + 14); /*0x48be89*/
  vThis->PhoneNumber[5] = (char)a7; /*0x48be8c*/
  vThis->PhoneNumber[6] = (char)a8; /*0x48be8f*/
  *(unsigned int *)&vThis->PhoneNumber[2] = (unsigned int)operator new(a4 + 14); /*0x48be99*/
  v10 = (CommBufferClass *)operator new(0x58u); /*0x48be9c*/
  if ( v10 ) /*0x48bea6*/
    this->PlayerIndex = (int)v10->sub_48B0E0(a2, a3, (size_t)vThis->PhoneNumber[1], a9); /*0x48bec2*/
  else
    this->PlayerIndex = 0; /*0x48becd*/
  return this; /*0x48bec7*/
}
// 0x69bc20
unsigned short IPXConnClass::closeConnection(int a2)
{
  int v2; // eax
  unsigned int *i; // esi

  v2 = 0; /*0x69bc27*/
  if ( dword_A8DA84 <= 0 ) /*0x69bc2d*/
    return 0; /*0x69bc48*/
  for ( i = (unsigned int *)dword_A8DA78; *(unsigned int *)(*i + 111) != a2; ++i ) /*0x69bc2f*/
  {
    if ( ++v2 >= dword_A8DA84 ) /*0x69bc46*/
      return 0; /*0x69bc46*/
  }
  return *((unsigned short *)this + v2 + 6205); /*0x69bc48*/
}
// 0x53f5d0
bool IPXConnClass::send(int a2, int a3, int a4, int a5, int a6, int a7)
{
  return (*(bool (__stdcall **)(int, int, unsigned int *, unsigned int, int, unsigned int))(*(unsigned int *)this->ptr_0 + 40))( /*0x53f5ec*/
           a2,
           a3,
           &this->u32_4C,
           0,
           a6,
           0);
}
// 0x53f650
int IPXConnClass::receive(int a2, int a3, int * a4, int ** a5, int a6, int a7)
{
  int v9; // edi
  int v10; // ebp
  char LinkedIndex; // al
  int v13; // eax
  int v15; // eax
  int ConnectionSpeed; // eax
  int v17[2]; // [esp+10h] [ebp-14h] BYREF
  int v19; // [esp+20h] [ebp-4h]

  ((Waypoint *)&qword_A8DBA4)->InitInvalid(); /*0x53f65d*/
  a5 = a5; /*0x53f666*/
  *(unsigned int *)&qword_A8DBA4 = *a4; /*0x53f670*/
  ((unsigned int *)&qword_A8DBA4)[1] = a4[1]; /*0x53f677*/
  v19 = a4[2]; /*0x53f67e*/
  if ( a5 ) /*0x53f682*/
  {
    ((Network *)a4)->CopyAddress((unsigned int *)&a4, (int)v17); /*0x53f68e*/
    a4 = *a5; /*0x53f69f*/
    ((NetworkID *)&qword_A8DBA4)->Assign((unsigned int *)&a4, (int)v17, 0); /*0x53f6a9*/
  }
  v9 = 0; /*0x53f6b2*/
  if ( (unsigned char)a6 || !byte_A8DBA0 ) /*0x53f6c3*/
  {
    v10 = a2; /*0x53f767*/
  LABEL_13:
    *(unsigned short *)(v10 + 12) = 0; /*0x53f76b*/
    *(unsigned int *)(v10 + 8) = 0; /*0x53f774*/
    goto LABEL_14; /*0x53f774*/
  }
  v10 = a2; /*0x53f6c9*/
  if ( !*(unsigned char *)(a2 + 3) ) /*0x53f6cd*/
  {
    LinkedIndex = ((Factory *)&g_NetworkEventQueue)->GetLinkedIndex(this->u32_64); /*0x53f6dd*/
    if ( !LinkedIndex ) /*0x53f6e4*/
      return 0; /*0x53f6ef*/
    *(unsigned char *)(a2 + 3) = LinkedIndex; /*0x53f6f2*/
  }
  qword_A8DBA4 = qword_A8DBA4; /*0x53f706*/
  v9 = *(unsigned int *)&dword_841F3C; /*0x53f710*/
  v19 = dword_A8DBAC; /*0x53f71a*/
  if ( (uint8_t)((GUID *)&qword_A8DBB0)->Compare(*(unsigned int *)dword_A8DA78 + 40) /*0x53f742*/
    && (uint8_t)((NetworkID *)&qword_A8DBA4)->Compare(*(unsigned int *)dword_A8DA78 + 40) )
  {
    goto LABEL_13; /*0x53f749*/
  }
  v9 = *(unsigned int *)&dword_A8DBBC; /*0x53f752*/
  *(unsigned short *)(a2 + 12) = dword_841F3C; /*0x53f75b*/
  *(unsigned int *)(a2 + 8) = 0; /*0x53f75f*/
  LABEL_14:
  if ( *(unsigned int *)&dword_A8B238 != 4 || byte_A8DBA0 ) /*0x53f78a*/
    goto LABEL_27; /*0x53f78a*/
  v13 = ((ConnectionClass *)&unk_A8E9C0)->receivePacket((int)this); /*0x53f792*/
  v13 = v13; /*0x53f797*/
  if ( v13 == -4 ) /*0x53f79c*/
  {
    v15 = *(unsigned int *)&dword_A8DBBC; /*0x53f7e5*/
    if ( !dword_A8DBBC ) /*0x53f7ed*/
      goto LABEL_27; /*0x53f7ed*/
    goto LABEL_26; /*0x53f7ed*/
  }
  if ( (unsigned int)v13 > 0xFFFFFFFC ) /*0x53f79e*/
    goto LABEL_27; /*0x53f79e*/
  if ( v13 ) /*0x53f7a6*/
  {
    if ( v13 < 0 ) /*0x53f7bd*/
      goto LABEL_27; /*0x53f7bd*/
    goto LABEL_23; /*0x53f7bd*/
  }
  if ( !byte_A8DBA0 ) /*0x53f7af*/
  {
  LABEL_23:
    if ( v13 >= ((Network *)&unk_A8E9C0)->GetSendCount() ) /*0x53f7cb*/
      goto LABEL_27; /*0x53f7cb*/
    ConnectionSpeed = ((Network *)&unk_A8E9C0)->GetConnectionSpeed(v13); /*0x53f7d3*/
    (*(unsigned short *)&(v15)) = ((IPXConnClass *)&dword_A8B238)->closeConnection(ConnectionSpeed); /*0x53f7de*/
  LABEL_26:
    v9 = v15; /*0x53f7ef*/
    goto LABEL_27; /*0x53f7ef*/
  }
  v15 = *(unsigned int *)&dword_A8DBBC; /*0x53f7b1*/
  if ( dword_A8DBBC ) /*0x53f7b9*/
    goto LABEL_26; /*0x53f7b9*/
  LABEL_27:
  if ( dword_887628 ) /*0x53f7f9*/
    (*(void (__thiscall **)(unsigned int, int, int, NetworkID *, int, int, unsigned int, int))(*(unsigned int *)*(unsigned int *)dword_887628 + 12))( /*0x53f812*/
      *(unsigned int *)dword_887628,
      v10,
      a3,
      (NetworkID *)&qword_A8DBA4,
      12,
      a6,
      0,
      v9);
  return 1; /*0x53f6e6*/
}
// ============================================================================
// IPXManagerClass
// ============================================================================

IPXManagerClass* IPXManagerClass::Instance = nullptr;

IPXManagerClass::IPXManagerClass() noexcept
    : Socket(0xFFFFFFFF)
    , Initialized(false)
    , Active(false)
{
}

// 0x542fe0
int IPXManagerClass::Init(int a2, int a3, int a4, int a5, int a6, int a7)
{
  int result; // eax

  if ( a2 == -1 ) /*0x542fe7*/
    return (*(EventClass **)(this->u32_48 + 4))->SetData(a3, a4, a5, a6, a7); /*0x543008*/
  result = *((unsigned int *)this + a2 + 10); /*0x543010*/
  if ( result ) /*0x543016*/
    return (*(EventClass **)(result + 4))->SetData(a3, a4, a5, a6, a7); /*0x543034*/
  return result; /*0x54300d*/
}
// 0x48ba90
int IPXManagerClass::init()
{
  return this->u32_20; /*0x48ba93*/
}
// 0x5409f0
int IPXManagerClass::processPacket()
{
  char v2; // al
  void (__thiscall ***v3)(void *, int); // ecx
  void (__thiscall ***v4)(void *, int); // ecx
  void (__thiscall ***v5)(void *, int); // ecx
  int result; // eax
  int v7; // ebp
  char *v8; // edi
  ObjectClass *v9; // [esp+0h] [ebp-Ch]

  v2 = this->Active; /*0x5409f7*/
  /* X11: ptr_0 install elided (implicit via class virtuals 0x5409fa) — binary-proven install, was 0 */
  if ( v2 ) /*0x540a02*/
  {
    Network_Helper(); /*0x540a04*/
    this->Active = 0; /*0x540a09*/
  }
  v3 = (void (__thiscall ***)(void *, int))this->u32_48; /*0x540a0c*/
  if ( v3 ) /*0x540a11*/
  {
    (**v3)(v3, 1); /*0x540a17*/
    this->u32_48 = 0; /*0x540a19*/
  }
  v4 = (void (__thiscall ***)(void *, int))this->u32_4C; /*0x540a1c*/
  if ( v4 ) /*0x540a21*/
  {
    (**v4)(v4, 1); /*0x540a27*/
    this->u32_4C = 0; /*0x540a29*/
  }
  v5 = (void (__thiscall ***)(void *, int))this->u32_50; /*0x540a2c*/
  if ( v5 ) /*0x540a31*/
  {
    (**v5)(v5, 1); /*0x540a37*/
    this->u32_50 = 0; /*0x540a39*/
  }
  result = this->u32_44; /*0x540a3c*/
  v7 = 0; /*0x540a3f*/
  if ( result <= 0 ) /*0x540a43*/
  {
    this->u32_44 = 0; /*0x540a70*/
    /* X11: ptr_0 install elided (implicit via class virtuals 0x540a73) — binary-proven install, was 0 */
  }
  else
  {
    v8 = (char *)&this->q280; /*0x540a46*/
    do /*0x540a60*/
    {
      if ( *(unsigned int *)v8 ) /*0x540a49*/
        (***(void (__thiscall ****)(unsigned int, int))v8)(*(unsigned int *)v8, 1); /*0x540a53*/
      *(unsigned int *)v8 = 0; /*0x540a55*/
      result = this->u32_44; /*0x540a57*/
      ++v7; /*0x540a5a*/
      v8 += 4; /*0x540a5b*/
    }
    while ( v7 < result ); /*0x540a60*/
    this->u32_44 = 0; /*0x540a62*/
    /* X11: ptr_0 install elided (implicit via class virtuals 0x540a65) — binary-proven install, was 0 */
  }
  return result; /*0x540a6c*/
}
// 0x540d40
IPXConnClass* IPXManagerClass::createConnection()
{
  unsigned int *result; // eax

  result = (unsigned int *)this->u32_48; /*0x540d40*/
  if ( result ) /*0x540d45*/
  {
    this->u32_64 = result[10]; /*0x540d4a*/
    this->u32_68 = result[11]; /*0x540d50*/
    result = (unsigned int *)result[12]; /*0x540d53*/
    this->u32_6C = (unsigned int)result; /*0x540d56*/
  }
  return (IPXConnClass *)result; /*0x540d59*/
}
// 0x540d60
void IPXManagerClass::destroyConnection(IPXConnClass* conn)
{
  int result; // eax

  (void)conn; /* x145b: ida 0x540D60 receiver-only; conn 形参保留兼容 hpp */
  result = this->u32_48; /*0x540d60*/
  if ( result ) /*0x540d65*/
  {
    *(unsigned int *)(result + 40) = this->u32_64; /*0x540d6a*/
    *(unsigned int *)(this->u32_48 + 44) = this->u32_68; /*0x540d73*/
    result = this->u32_48; /*0x540d76*/
    *(unsigned int *)(result + 48) = this->u32_6C; /*0x540d7c*/
  }
  return; /*0x540d7f*/
}
bool IPXManagerClass::OpenSession() { return Active; }
void IPXManagerClass::CloseSession() { Active = false; }

bool IPXManagerClass::SendPacket(const uint8_t* data, int32_t length)
{
    (void)data; (void)length;
    return Active;
}

int32_t IPXManagerClass::ReceivePacket(uint8_t* buffer, int32_t maxLen)
{
    (void)buffer; (void)maxLen;
    return 0;
}

bool IPXManagerClass::IsIPXAvailable() const
{
    return false; // IPX not available on modern systems
}

// 0x5414c0
int IPXManagerClass::release(int a5, int a2, int a3, int a4)
{
  int v6; // ecx
  unsigned int *v7; // ecx
  int v9; // eax
  IPXManagerClass *v10; // edx
  int v11; // edi
  IPXManagerClass *v12; // ebx
  int v13; // eax
  unsigned int *v14; // ecx

  if ( !this->Initialized ) /*0x5414c6*/
    return 0; /*0x5414c6*/
  if ( !this->Active ) /*0x5414d1*/
    return 0; /*0x5414d1*/
  v6 = this->u32_44; /*0x5414dc*/
  if ( !v6 ) /*0x5414e1*/
    return 0; /*0x5414e1*/
  if ( a4 != -1 ) /*0x5414ee*/
  {
    v13 = (*(int (__thiscall **)(IPXManagerClass *, int))(this->Socket + 24))(this, a4); /*0x54159b*/
    if ( v13 != -1 ) /*0x5415a1*/
    {
      v14 = (unsigned int *)*((unsigned int *)this + v13 + 10); /*0x5415a3*/
      if ( *(unsigned int *)(v14[1] + 40) != *(unsigned int *)(v14[1] + 4) ) /*0x5415b2*/
      {
        (*(void (__thiscall **)(unsigned int *, int, int, int, unsigned int))(*v14 + 8))(v14, a2, a3, a4, 0); /*0x5415c7*/
        return 1; /*0x5415d3*/
      }
    }
    goto LABEL_20; /*0x5415b2*/
  }
  if ( *(unsigned int *)&dword_A8B238 == 4 && byte_A8DBA0 ) /*0x541504*/
  {
    v7 = (unsigned int *)this->u32_50; /*0x541506*/
    if ( *(unsigned int *)(v7[1] + 40) < *(unsigned int *)(v7[1] + 4) ) /*0x541514*/
      return (*(int (__thiscall **)(unsigned int *, int, int, int, int))(*v7 + 8))(v7, a2, a3, a4, 255); /*0x541537*/
    goto LABEL_20; /*0x541514*/
  }
  v9 = 0; /*0x54153a*/
  if ( v6 > 0 ) /*0x54153e*/
  {
    v10 = (IPXManagerClass *)&this->q280; /*0x541540*/
    while ( *(unsigned int *)(*(unsigned int *)(v10->Socket + 4) + 40) != *(unsigned int *)(*(unsigned int *)(v10->Socket + 4) + 4) ) /*0x541550*/
    {
      ++v9; /*0x541556*/
      v10 = (IPXManagerClass *)&v10->Initialized; /*0x541557*/
      if ( v9 >= v6 ) /*0x54155c*/
        goto LABEL_13; /*0x54155c*/
    }
  LABEL_20:
    ++this->u32_A0; /*0x5415d6*/
    return 0; /*0x5415df*/
  }
  LABEL_13:
  v11 = 0; /*0x54155e*/
  if ( v6 > 0 ) /*0x541562*/
  {
    v12 = (IPXManagerClass *)&this->q280; /*0x541568*/
    do /*0x541588*/
    {
      (*(void (__thiscall **)(unsigned int, int, int, int, unsigned int))(*(unsigned int *)*(unsigned int *)v12 + 8))(*(unsigned int *)v12, a2, a3, a4, 0); /*0x54157c*/
      ++v11; /*0x541582*/
      v12 = (IPXManagerClass *)((char *)v12 + 4); /*0x541583*/
    }
    while ( v11 < this->u32_44 ); /*0x541588*/
  }
  return 1; /*0x541533*/
}
// 0x542330
int32_t IPXManagerClass::GetConnectionCount() { /*0x542330*/
  int v1; // ecx

  if ( this->Initialized && this->Active && (v1 = this->u32_4C) != 0 ) /*0x542343*/
    return *(unsigned int *)(*(unsigned int *)(v1 + 4) + 56); /*0x542348*/
  else
    return 0; /*0x54234c*/
}
} // namespace gamemd