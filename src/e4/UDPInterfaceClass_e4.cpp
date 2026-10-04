// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/classes/Random_e4.hpp"
#include "e4/e4_globals.hpp"
#include "e4/classes/AudioQueue_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/NetworkClass_e4.hpp"
#include "e4/classes/UDPInterfaceClass_e4.hpp"
#include "e4/classes/UDPInterfaceClass_Destru_e4.hpp"
#include "e4/classes/SOCKET_e4.hpp"
#include "e4/classes/TypeList_flat_e4.hpp"
#include "e4/classes/TypeList_TechnoType_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/SessionClass_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/TypeList_Infantry_e4.hpp"
#include "e4/classes/Socket_e4.hpp"
#include "e4/classes/ProgressTimer_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/TypeList_Particle_e4.hpp"
#include "e4/classes/TypeList_cptr_ParticleSystemTypeClass_e4.hpp"
#include "e4/classes/EventClass_e4.hpp"
#include "e4/classes/WinsockInterfaceClass_e4.hpp"
#include "e4/classes/Compare_e4.hpp"
#include "e4/classes/IPXInterfaceClass_e4.hpp"

// 0x7B1B50
namespace gamemd {
int UDPInterfaceClass::connect(void *a1)
{

  char result; // al

  result = *((unsigned char *)this + 258152); /*0x7b1b53*/
  if ( result ) /*0x7b1b5b*/
  {
    (*(void (**)(UDPInterfaceClass *))(this->Socket + 32))(this); /*0x7b1b5f*/
    (*(void (**)(UDPInterfaceClass *))(this->Socket + 4))(this); /*0x7b1b66*/
    result = WSACleanup(); /*0x7b1b69*/
    *((unsigned char *)this + 258152) = 0; /*0x7b1b6e*/
  }
  return result; /*0x7b1b75*/

}
} // namespace gamemd
// 0x7B3310
namespace gamemd {
void UDPInterfaceClass::CheckStatus(short a2)
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7B3310)
}
} // namespace gamemd
// 0x7B33D0
namespace gamemd {
void UDPInterfaceClass::GetStatistics(unsigned short a2)
{

  int v2; // esi
  int v3; // eax
  UDPInterfaceClass *v4; // edx

  if ( !a2 || a2 == *(unsigned int *)&hostshort || (v2 = *((unsigned int *)this + 64716), v3 = 0, v2 <= 0) ) /*0x7b33f6*/
  {
LABEL_7:
    *((unsigned int *)this + 64717) = -1; /*0x7b340b*/
  }
  else
  {
    v4 = (gamemd::UDPInterfaceClass *)((unsigned int *)this + 32356); /*0x7b33f8*/
    while ( LOWORD(v4->Socket) != a2 ) /*0x7b3401*/
    {
      ++v3; /*0x7b3403*/
      v4 = (UDPInterfaceClass *)((char *)v4 + 2); /*0x7b3404*/
      if ( v3 >= v2 ) /*0x7b3409*/
        goto LABEL_7; /*0x7b3409*/
    }
    *((unsigned int *)this + 64717) = *((unsigned int *)this + v3 + 64704); /*0x7b3422*/
  }

}
} // namespace gamemd
// 0x7B3A20
namespace gamemd {
AbstractClass * * UDPInterfaceClass::Flush()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7B3A20)
}
} // namespace gamemd
// 0x7B3AA0
namespace gamemd {
AbstractClass * * UDPInterfaceClass::ProcessSocketIO(int a2, void * s, int a4, unsigned int a5, int a3, int aP1, int aP5, int a7, int a8)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7B3AA0)
}
} // namespace gamemd
// 0x7B4150
namespace gamemd {
int UDPInterfaceClass::Connect(int a2)
{

  return *(unsigned int *)(*((unsigned int *)this + 64853) + 4 * a2); /*0x7b415d*/

}
} // namespace gamemd
// 0x7B4160
namespace gamemd {
int UDPInterfaceClass::Receive()
{

  return *((unsigned short *)this + 129406); /*0x7b4167*/

}
} // namespace gamemd
// 0x7B4170
namespace gamemd {
CampaignClass * * UDPInterfaceClass::Destructor(char a2, int a3, int aP1, int a5, int aP5, int a7, int a8, int a4)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7B4170)
}
} // namespace gamemd
// 0x7B42C0
namespace gamemd {
void UDPInterfaceClass::disconnect()
{

  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x7b42c6*/
  this->m_10 = 0; /*0x7b42c9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x7b42d0*/
  {
    __3_YAXPAX_Z(v2); /*0x7b42d6*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x7b42de*/
  }
  BYTE1(this->m_C) = 0; /*0x7b42e1*/
  this->m_8 = 0; /*0x7b42e4*/

}
} // namespace gamemd
// 0x7B42F0
namespace gamemd {
unsigned int UDPInterfaceClass::reset(int a2)
{

  if ( LOBYTE(this->m_C) ) /*0x7b42f0*/
    return (unsigned int)(a2 - *(unsigned int *)&this->m_1[3]) >> 2; /*0x7b4305*/
  else
    return 0; /*0x7b42f7*/

}
} // namespace gamemd
// 0x7B44A0
namespace gamemd {
AbstractClass * * UDPInterfaceClass::flush(int a2, unsigned int * a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7B44A0)
}
} // namespace gamemd
// 0x7B4550
namespace gamemd {
int UDPInterfaceClass::sendPacket(unsigned int * a2)
{

  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

  m_10 = this->m_10; /*0x7b4550*/
  result = 0; /*0x7b4553*/
  if ( m_10 <= 0 ) /*0x7b4558*/
    return -1; /*0x7b456f*/
  for ( i = *(unsigned int **)&this->m_1[3]; *i != *a2; ++i ) /*0x7b455e*/
  {
    if ( ++result >= m_10 ) /*0x7b456d*/
      return -1; /*0x7b456d*/
  }
  return result; /*0x7b4572*/

}
} // namespace gamemd
// 0x7B3450
namespace gamemd {
AbstractClass * * UDPInterfaceClass_Destru::Bind(int a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7B3450)
}
} // namespace gamemd
// 0x7B36C0
namespace gamemd {
short UDPInterfaceClass_Destru::ddtor(WinsockInterfaceClass * aP1, unsigned int arg4, unsigned char * a3, unsigned int a5, WinsockInterfaceClass * aP5, char a7, short a8)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7B36C0)
}
} // namespace gamemd
// 0x7B3720
namespace gamemd {
void UDPInterfaceClass_Destru_Connect()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7B3720)
}
}
// 0x7B3890
namespace gamemd {  // G42.18c ns repair
int UDPInterfaceClass_Destru::Receive()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7B3890)
}
}  // G42.18c ns repair
// 0x7B3900
namespace gamemd {  // G42.18c ns repair
int UDPInterfaceClass_Destru::CheckStatus()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7B3900)
}
}  // G42.18c ns repair
// 0x7B3920
namespace gamemd {  // G42.18c ns repair
void UDPInterfaceClass_Destru::Reset(unsigned int * a2, short a3)
{

  int v4; // edi
  int16_t v5; // bp
  int v6; // eax
  unsigned int *v7; // edx
  unsigned short *v8; // ecx

  v4 = *((unsigned int *)this + 64858); /*0x7b3926*/
  if ( v4 < 16 ) /*0x7b392f*/
  {
    v5 = a3; /*0x7b3939*/
    v6 = 0; /*0x7b393d*/
    if ( v4 > 0 ) /*0x7b3941*/
    {
      v7 = (unsigned int *)this + 64859; /*0x7b3943*/
      v8 = (unsigned short *)this + 129750; /*0x7b3949*/
      do /*0x7b3967*/
      {
        if ( v5 == *v8 ) /*0x7b3952*/
        {
          if ( *a2 == *v7 ) /*0x7b3958*/
            return; /*0x7b3958*/
          v5 = a3; /*0x7b395a*/
        }
        ++v6; /*0x7b395e*/
        ++v8; /*0x7b395f*/
        ++v7; /*0x7b3962*/
      }
      while ( v6 < v4 ); /*0x7b3967*/
    }
    Debug::Log(); /*0x7b398d*/
    *((unsigned int *)this + *((unsigned int *)this + 64858) + 64859) = *a2; /*0x7b399d*/
    *((unsigned short *)this + (*((unsigned int *)this + 64858))++ + 129750) = v5; /*0x7b39aa*/
  }

}
}  // G42.18c ns repair
// 0x7B4100
namespace gamemd {  // G42.18c ns repair
int UDPInterfaceClass_Destru::GetStatistics(int a2)
{

  if ( a2 == *((unsigned int *)this + 64539) || a2 == -1 )
    return 1140; /*0x7b412e*/
  else
    return a2 != *((unsigned int *)this + 64540) ? 0 : 0x475;

}
}  // G42.18c ns repair
// 0x7B4140
namespace gamemd {  // G42.18c ns repair
int UDPInterfaceClass_Destru::COMStub()
{

  return *((unsigned int *)this + 64856); /*0x7b4146*/

}
}  // G42.18c ns repair
// 0x7B40F0
namespace gamemd {  // G42.18c ns repair
int UDPInterfaceClass_Destru::COMStub_Ret2()
{

  return 2; /*0x7b40f5*/

}
}  // G42.18c ns repair
// 0x7B45D0
namespace gamemd {
DynamicVector * UDPInterfaceClass::receivePacket(unsigned int * Block, char a2, void *a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7B45D0)
}
}
