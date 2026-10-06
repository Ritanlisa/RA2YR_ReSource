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
int ConnectionClass::queueSendPacket(const void *a2, int32_t a3, const void *a4, int32_t a5, int16_t a6)
{
    int PlayerIndex; // eax
    int v8; // esi
    int v9; // ebx
    unsigned char *i; // edi
    int v12; // eax
    int v13; // ecx

    PlayerIndex = this->PlayerIndex; /*0x48b418*/
    v8 = ((ModemConnectionClass *)this)->PhoneNumber[4]; /*0x48b41c*/
    if ( v8 == PlayerIndex || a3 > this->LastPacketTime ) /*0x48b42b*/
    {
      if ( v8 == PlayerIndex ) /*0x48b52f*/
      {
        Debug::Log("Queue_Send - No room in send queue\n"); /*0x48b536 G57c1: IDA 0x48b536 push offset aQueueSendNoRoo*/
        return 0; /*0x48b544*/
      }
      Debug::Log("buflen > MaxPacketSize by %d bytes\n"); /*0x48b552 G57c1: IDA 0x48b552 push offset aBuflenMaxpacke*/
      return 0; /*0x48b552*/
    }
    v9 = 0; /*0x48b433*/
    if ( PlayerIndex <= 0 ) /*0x48b437*/
      return 0; /*0x48b437*/
    for ( i = (unsigned char *)((ModemConnectionClass *)this)->PhoneNumber[3]; (*i & 1) != 0; i += 36 ) /*0x48b440*/
    {
      if ( ++v9 >= PlayerIndex ) /*0x48b44d*/
        return 0; /*0x48b455*/
    }
    if ( v9 == -1 ) /*0x48b45b*/
      return 0; /*0x48b55d*/
    v12 = 36 * v9; /*0x48b464*/
    *(unsigned int *)(((ModemConnectionClass *)this)->PhoneNumber[3] + v12) = *(unsigned int *)(((ModemConnectionClass *)this)->PhoneNumber[3] + 36 * v9) | 1; /*0x48b46d*/
    *(unsigned int *)(36 * v9 + ((ModemConnectionClass *)this)->PhoneNumber[3]) &= ~2u; /*0x48b47a*/
    *(unsigned int *)(36 * v9 + ((ModemConnectionClass *)this)->PhoneNumber[3]) &= ~4u; /*0x48b486*/
    *(unsigned int *)(v12 + ((ModemConnectionClass *)this)->PhoneNumber[3] + 4) = 0; /*0x48b490*/
    *(unsigned int *)(v12 + ((ModemConnectionClass *)this)->PhoneNumber[3] + 8) = 0; /*0x48b497*/
    *(unsigned int *)(v12 + ((ModemConnectionClass *)this)->PhoneNumber[3] + 12) = 0; /*0x48b49e*/
    *(unsigned int *)(v12 + ((ModemConnectionClass *)this)->PhoneNumber[3] + 16) = a3; /*0x48b4a5*/
    *(unsigned short *)(v12 + ((ModemConnectionClass *)this)->PhoneNumber[3] + 32) = a6; /*0x48b4ae*/
    qmemcpy(*(void **)(36 * v9 + ((ModemConnectionClass *)this)->PhoneNumber[3] + 20), a2, a3); /*0x48b4c1*/
    if ( a4 && a5 > 0 && a5 <= this->PacketsSent ) /*0x48b4dd*/
    {
      qmemcpy(*(void **)(v12 + ((ModemConnectionClass *)this)->PhoneNumber[3] + 28), a4, a5); /*0x48b4eb*/
      *(unsigned int *)(v12 + ((ModemConnectionClass *)this)->PhoneNumber[3] + 24) = a5; /*0x48b4f9*/
    }
    else
    {
      *(unsigned int *)(v12 + ((ModemConnectionClass *)this)->PhoneNumber[3] + 24) = 0; /*0x48b502*/
    }
    *(unsigned int *)(((ModemConnectionClass *)this)->PhoneNumber[6] + 4 * ((ModemConnectionClass *)this)->PhoneNumber[4]) = v9; /*0x48b512*/
    v13 = ((ModemConnectionClass *)this)->PhoneNumber[4] + 1; /*0x48b51b*/
    ++((ModemConnectionClass *)this)->PhoneNumber[5]; /*0x48b51e*/
    ((ModemConnectionClass *)this)->PhoneNumber[4] = v13; /*0x48b521*/
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
    if ( PlayerIndex->Terrain_field_0x38 > 0 ) /*0x48c5ae*/
    {
      do /*0x48c5e7*/
      {
        TileType = Terrain::GetTileType(PlayerIndex, v2); /*0x48c5b1*/
        if ( (*(unsigned char *)TileType & 2) != 0 ) /*0x48c5b9*/
        {
          v5 = *(unsigned int *)(TileType + 12); /*0x48c5bb*/
          if ( *(unsigned char *)(v5 + 2) == 1 || *(unsigned int *)(v5 + 4) < ((ModemConnectionClass *)this)->PhoneNumber[11] ) /*0x48c5cc*/
            ((PacketQueue *)this->PlayerIndex)->ReleaseEntry(0, 0, v2--, 0, 0); /*0x48c5da*/
        }
        PlayerIndex = (Terrain *)this->PlayerIndex; /*0x48c5e0*/
        ++v2; /*0x48c5e3*/
      }
      while ( v2 < PlayerIndex->Terrain_field_0x38 ); /*0x48c5e7*/
    }
    return 1; /*0x48c5e9*/
}
// 0x48be60
bool IPXConnClass::initConnection(int a2, int a3, int a4, __int16 a5, int a6, int a7, int a8, int a9, int a1)
{
    CommBufferClass *v10; // eax

    IDA_LOWORD(((ModemConnectionClass *)this)->PhoneNumber[3]) = a5; /*0x48be73*/
    ((ModemConnectionClass *)this)->PhoneNumber[4] = a6; /*0x48be7b*/
    *(unsigned int *)this->__pad_0 = &vt_ConnectionClass; /*0x48be83*/
    ((ModemConnectionClass *)this)->PhoneNumber[1] = a4 + 14; /*0x48be89*/
    ((ModemConnectionClass *)this)->PhoneNumber[5] = a7; /*0x48be8c*/
    ((ModemConnectionClass *)this)->PhoneNumber[6] = a8; /*0x48be8f*/
    ((ModemConnectionClass *)this)->PhoneNumber[2] = RA2_OPNEW(a4 + 14); /*0x48be99*/
    v10 = (CommBufferClass *)RA2_OPNEW(0x58u); /*0x48be9c*/
    if ( v10 ) /*0x48bea6*/
      this->PlayerIndex = (int)sub_48B0E0(v10, a2, a3, ((ModemConnectionClass *)this)->PhoneNumber[1], a9); /*0x48bec2*/
    else
      this->PlayerIndex = 0; /*0x48becd*/
    return this; /*0x48bec7*/
}
// 0x69bc20
bool IPXConnClass::closeConnection(int a2, int a1, int a3, int a4, int a5, int a6, int a7)
{
    int v2; // eax
    unsigned int *i; // esi

    v2 = 0; /*0x69bc27*/
    if ( dword_A8DA84 <= 0 ) /*0x69bc2d*/
      return 0; /*0x69bc48*/
    for ( i = dword_A8DA78; *(unsigned int *)(*i + 111) != a2; ++i ) /*0x69bc2f*/
    {
      if ( ++v2 >= dword_A8DA84 ) /*0x69bc46*/
        return 0; /*0x69bc46*/
    }
    return *((unsigned short *)this + v2 + 6205); /*0x69bc48*/
}
// 0x53f5d0
bool IPXConnClass::send(int a2, int a3, int a4, int a5, int a6, int a7)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7;
}
// 0x53f650
int IPXConnClass::receive(int a2, int a3, int * a4, int ** a5, int a6, int a7)
{
    int **v8; // esi
    int v9; // edi
    int v10; // ebp
    char LinkedIndex; // al
    int v13; // eax
    int v14; // esi
    int v15; // eax
    int ConnectionSpeed; // eax
    int v17[2]; // [esp+10h] [ebp-14h] BYREF
    NetworkID v18; // [esp+18h] [ebp-Ch] BYREF
    int v19; // [esp+20h] [ebp-4h]

    Waypoint::InitInvalid((Waypoint *)&v18); /*0x53f65d*/
    v8 = a5; /*0x53f666*/
    *(unsigned int *)v18.__pad_0 = *a4; /*0x53f670*/
    v18.NetworkID_field_0x04 = a4[1]; /*0x53f677*/
    v19 = a4[2]; /*0x53f67e*/
    if ( a5 ) /*0x53f682*/
    {
      ((Network *)a4)->CopyAddress(&a4, (int)v17); /*0x53f68e*/
      a4 = *v8; /*0x53f69f*/
      (&v18)->Assign(&a4, (int)v17, 0); /*0x53f6a9*/
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
      LinkedIndex = ((Factory *)&stru_B052C0.__pad_0[16])->GetLinkedIndex(*((unsigned int *)this + 25)); /*0x53f6dd*/
      if ( !LinkedIndex ) /*0x53f6e4*/
        return 0; /*0x53f6ef*/
      *(unsigned char *)(a2 + 3) = LinkedIndex; /*0x53f6f2*/
    }
    v18 = qword_A8DBA4; /*0x53f706*/
    v9 = *(unsigned int *)&dword_841F3C; /*0x53f710*/
    v19 = dword_A8DBAC; /*0x53f71a*/
    if ( (unsigned __int8)GUID::Compare(qword_A8DBB0.__pad_0, *dword_A8DA78 + 40) /*0x53f742*/
      && (unsigned __int8)((bool *)v18.__pad_0)->Compare(*dword_A8DA78 + 40) )
    {
      goto LABEL_13; /*0x53f749*/
    }
    v9 = *(unsigned int *)&dword_A8DBBC; /*0x53f752*/
    *(unsigned short *)(a2 + 12) = dword_841F3C; /*0x53f75b*/
    *(unsigned int *)(a2 + 8) = 0; /*0x53f75f*/
  LABEL_14:
    if ( *(unsigned int *)&dword_A8B238 != 4 || byte_A8DBA0 ) /*0x53f78a*/
      goto LABEL_27; /*0x53f78a*/
    v13 = IPXManagerClass::receivePacket(&unk_A8E9C0, (int)this); /*0x53f792*/
    v14 = v13; /*0x53f797*/
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
      if ( v13 >= Network::GetSendCount(&unk_A8E9C0) ) /*0x53f7cb*/
        goto LABEL_27; /*0x53f7cb*/
      ConnectionSpeed = (&unk_A8E9C0)->GetConnectionSpeed(v14); /*0x53f7d3*/
      IDA_LOWORD(v15) = IPXConnClass::closeConnection((IPXConnClass *)&dword_A8B238, ConnectionSpeed); /*0x53f7de*/
  LABEL_26:
      v9 = v15; /*0x53f7ef*/
      goto LABEL_27; /*0x53f7ef*/
    }
    v15 = *(unsigned int *)&dword_A8DBBC; /*0x53f7b1*/
    if ( dword_A8DBBC ) /*0x53f7b9*/
      goto LABEL_26; /*0x53f7b9*/
  LABEL_27:
    if ( *(unsigned int *)&stru_887598.isAliveFlag ) /*0x53f7f9*/
      (*(void (__thiscall **)(unsigned int, int, int, NetworkID *, int, int, unsigned int, int))(**(unsigned int **)&stru_887598.isAliveFlag /*0x53f812*/
                                                                                   + 12))(
        *(unsigned int *)&stru_887598.isAliveFlag,
        v10,
        a3,
        &v18,
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
      return (*(EventClass **)(*((unsigned int *)this + 18) + 4))->SetData(a3, a4, a5, a6, a7); /*0x543008*/
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
    void (__thiscall ***v3)(unsigned int, int); // ecx
    void (__thiscall ***v4)(unsigned int, int); // ecx
    void (__thiscall ***v5)(unsigned int, int); // ecx
    int result; // eax
    int v7; // ebp
    char *v8; // edi
    ObjectClass *v9; // [esp+0h] [ebp-Ch]

    v2 = *(this + 5); /*0x5409f7*/
    *(unsigned int *)this = &vt_IPXManagerClass; /*0x5409fa*/
    if ( v2 ) /*0x540a02*/
    {
      Network_Helper(v9); /*0x540a04*/
      *(this + 5) = 0; /*0x540a09*/
    }
    v3 = (void (__thiscall ***)(unsigned int, int))*((unsigned int *)this + 18); /*0x540a0c*/
    if ( v3 ) /*0x540a11*/
    {
      (**v3)(v3, 1); /*0x540a17*/
      *((unsigned int *)this + 18) = 0; /*0x540a19*/
    }
    v4 = (void (__thiscall ***)(unsigned int, int))*((unsigned int *)this + 19); /*0x540a1c*/
    if ( v4 ) /*0x540a21*/
    {
      (**v4)(v4, 1); /*0x540a27*/
      *((unsigned int *)this + 19) = 0; /*0x540a29*/
    }
    v5 = (void (__thiscall ***)(unsigned int, int))*((unsigned int *)this + 20); /*0x540a2c*/
    if ( v5 ) /*0x540a31*/
    {
      (**v5)(v5, 1); /*0x540a37*/
      *((unsigned int *)this + 20) = 0; /*0x540a39*/
    }
    result = *((unsigned int *)this + 17); /*0x540a3c*/
    v7 = 0; /*0x540a3f*/
    if ( result <= 0 ) /*0x540a43*/
    {
      *((unsigned int *)this + 17) = 0; /*0x540a70*/
      *(unsigned int *)this = &vt_ConnManClass; /*0x540a73*/
    }
    else
    {
      v8 = this + 40; /*0x540a46*/
      do /*0x540a60*/
      {
        if ( *(unsigned int *)v8 ) /*0x540a49*/
          (***(void (__thiscall ****)(unsigned int, int))v8)(*(unsigned int *)v8, 1); /*0x540a53*/
        *(unsigned int *)v8 = 0; /*0x540a55*/
        result = *((unsigned int *)this + 17); /*0x540a57*/
        ++v7; /*0x540a5a*/
        v8 += 4; /*0x540a5b*/
      }
      while ( v7 < result ); /*0x540a60*/
      *((unsigned int *)this + 17) = 0; /*0x540a62*/
      *(unsigned int *)this = &vt_ConnManClass; /*0x540a65*/
    }
    return result; /*0x540a6c*/
}
// 0x540d40
IPXConnClass* IPXManagerClass::createConnection()
{
    unsigned int *result; // eax

    result = (unsigned int *)*((unsigned int *)this + 18); /*0x540d40*/
    if ( result ) /*0x540d45*/
    {
      *((unsigned int *)this + 25) = result[10]; /*0x540d4a*/
      *((unsigned int *)this + 26) = result[11]; /*0x540d50*/
      result = (unsigned int *)result[12]; /*0x540d53*/
      *((unsigned int *)this + 27) = result; /*0x540d56*/
    }
    return result; /*0x540d59*/
}
// 0x540d60
void IPXManagerClass::destroyConnection(IPXConnClass* conn)
{
    int result; // eax

    result = *((unsigned int *)this + 18); /*0x540d60*/
    if ( result ) /*0x540d65*/
    {
      *(unsigned int *)(result + 40) = *((unsigned int *)this + 25); /*0x540d6a*/
      *(unsigned int *)(*((unsigned int *)this + 18) + 44) = *((unsigned int *)this + 26); /*0x540d73*/
      result = *((unsigned int *)this + 18); /*0x540d76*/
      *(unsigned int *)(result + 48) = *((unsigned int *)this + 27); /*0x540d7c*/
    }
    return result; /*0x540d7f*/
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
    v6 = *((unsigned int *)this + 17); /*0x5414dc*/
    if ( !v6 ) /*0x5414e1*/
      return 0; /*0x5414e1*/
    if ( a5 != -1 ) /*0x5414ee*/
    {
      v13 = (*(int (__thiscall **)(IPXManagerClass *, int))(this->Socket + 24))(this, a5); /*0x54159b*/
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
      v7 = (unsigned int *)*((unsigned int *)this + 20); /*0x541506*/
      if ( *(unsigned int *)(v7[1] + 40) < *(unsigned int *)(v7[1] + 4) ) /*0x541514*/
        return (*(int (__thiscall **)(unsigned int *, int, int, int, int))(*v7 + 8))(v7, a2, a3, a4, 255); /*0x541537*/
      goto LABEL_20; /*0x541514*/
    }
    v9 = 0; /*0x54153a*/
    if ( v6 > 0 ) /*0x54153e*/
    {
      v10 = this + 5; /*0x541540*/
      while ( *(unsigned int *)(*(unsigned int *)(v10->Socket + 4) + 40) != *(unsigned int *)(*(unsigned int *)(v10->Socket + 4) + 4) ) /*0x541550*/
      {
        ++v9; /*0x541556*/
        v10 = (IPXManagerClass *)((char *)v10 + 4); /*0x541557*/
        if ( v9 >= v6 ) /*0x54155c*/
          goto LABEL_13; /*0x54155c*/
      }
  LABEL_20:
      ++*((unsigned int *)this + 40); /*0x5415d6*/
      return 0; /*0x5415df*/
    }
  LABEL_13:
    v11 = 0; /*0x54155e*/
    if ( v6 > 0 ) /*0x541562*/
    {
      v12 = this + 5; /*0x541568*/
      do /*0x541588*/
      {
        (*(void (__thiscall **)(int, int, int, int, unsigned int))(*(unsigned int *)v12->Socket + 8))(v12->Socket, a2, a3, a4, 0); /*0x54157c*/
        ++v11; /*0x541582*/
        v12 = (IPXManagerClass *)((char *)v12 + 4); /*0x541583*/
      }
      while ( v11 < *((unsigned int *)this + 17) ); /*0x541588*/
    }
    return 1; /*0x541533*/
}
// 0x542330
int32_t IPXManagerClass::GetConnectionCount() { return 0; }
}  // L-fix: close namespace tail 1
