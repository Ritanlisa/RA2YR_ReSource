// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AudioQueue_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/IPXInterfaceClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/Waypoint_e4.hpp"
#include "e4/classes/WinsockInterfaceClass_e4.hpp"
#include "e4/classes/Terrain_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/IPXManagerClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Compare_e4.hpp"
#include "e4/classes/IPXGlobalConnClass_e4.hpp"
#include "e4/classes/RadioClass_e4.hpp"
#include "e4/classes/Socket_e4.hpp"
#include "e4/classes/Factory_e4.hpp"
#include "e4/classes/NetworkAddress_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/Color_e4.hpp"
#include "e4/classes/NetworkID_e4.hpp"
#include "e4/classes/Random_e4.hpp"
#include "e4/classes/Block_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/EventQueue_e4.hpp"  // G42.40f-c supply (Process call @0x7b25d4)

// 0x7B0D90
namespace gamemd {
int IPXInterfaceClass::Construct(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6)
{

  IPXInterfaceClass::bindSocket((char *)this); /*0x7b0d93*/
  this->Socket = (int)&vt_IPXInterfaceClass; /*0x7b0da4*/
  *((unsigned int *)this + 64703) = -1; /*0x7b0dad*/
  *((unsigned int *)this + 64704) = -1; /*0x7b0db3*/
  *((unsigned short *)this + 129410) = -1; /*0x7b0db8*/
  *(unsigned int *)((char *)this + 258822) = -1; /*0x7b0dc2*/
  *((unsigned short *)this + 129413) = -1; /*0x7b0dc8*/
  return (int)(&this->Socket); /*0x7b0dce*/

}
} // namespace gamemd
// 0x7B0DD0
namespace gamemd {
int IPXInterfaceClass::initSocket(int aP1, int aP2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7B0DD0)
}
} // namespace gamemd
// 0x7B13D0
namespace gamemd {
AbstractClass * * IPXInterfaceClass::SendPacket(ObjectClass * aP1, int a3, int a4, unsigned int fromlen)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7B13D0)
}
} // namespace gamemd
// 0x7B1760
namespace gamemd {
int IPXInterfaceClass::GetLocalAddress(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7B1760)
}
} // namespace gamemd
// 0x7B19C0
namespace gamemd {
void * IPXInterfaceClass::bindSocket(void *a1)
{

  unsigned char *v2; // eax
  int v3; // edx

  *((unsigned int *)this + 3) = 0; /*0x7b19d2*/
  *((unsigned int *)this + 4) = 0; /*0x7b19d5*/
  *((unsigned char *)this + 20) = 1; /*0x7b19d8*/
  *((unsigned char *)this + 21) = 0; /*0x7b19db*/
  *((unsigned int *)this + 2) = (unsigned int)(&vt_DynamicVectorClass); /*0x7b19de*/
  *((unsigned int *)this + 7) = 10; /*0x7b19e1*/
  *((unsigned int *)this + 6) = 0; /*0x7b19e4*/
  *((unsigned int *)this + 9) = 0; /*0x7b19e7*/
  *((unsigned int *)this + 10) = 0; /*0x7b19ea*/
  *((unsigned char *)this + 44) = 1; /*0x7b19ed*/
  *((unsigned char *)this + 45) = 0; /*0x7b19f0*/
  *((unsigned int *)this + 8) = (unsigned int)(&vt_DynamicVectorClass); /*0x7b19f3*/
  *((unsigned int *)this + 13) = 10; /*0x7b19f6*/
  *((unsigned int *)this + 12) = 0; /*0x7b19f9*/
  *((unsigned int *)this + 19) = 10; /*0x7b19fc*/
  *((unsigned int *)this + 15) = 0; /*0x7b1a02*/
  *((unsigned int *)this + 16) = 0; /*0x7b1a05*/
  *((unsigned char *)this + 68) = 1; /*0x7b1a08*/
  *((unsigned char *)this + 69) = 0; /*0x7b1a0b*/
  *((unsigned int *)this + 14) = (unsigned int)(&vt_DynamicVectorClass); /*0x7b1a0e*/
  *((unsigned int *)this + 18) = 0; /*0x7b1a11*/
  *((unsigned int *)this + 64539) = -1; /*0x7b1a14*/
  *((unsigned int *)this + 64540) = -1; /*0x7b1a1a*/
  *(unsigned int *)this = (unsigned int)(&vt_WinsockInterfaceClass); /*0x7b1a20*/
  *((unsigned char *)this + 258152) = 0; /*0x7b1a26*/
  v2 = (unsigned char *)this + 102; /*0x7b1a2c*/
  v3 = 128; /*0x7b1a2f*/
  do /*0x7b1a6f*/
  {
    *(v2 - 1) = 0; /*0x7b1a34*/
    *v2 = 0; /*0x7b1a37*/
    v2[86015] = 0; /*0x7b1a39*/
    v2[86016] = 0; /*0x7b1a3f*/
    v2[86017] = 0; /*0x7b1a45*/
    v2[86018] = 0; /*0x7b1a4b*/
    v2[172031] = 0; /*0x7b1a51*/
    v2[172032] = 0; /*0x7b1a57*/
    v2[172033] = 1; /*0x7b1a5d*/
    v2[172034] = 0; /*0x7b1a63*/
    v2 += 672; /*0x7b1a69*/
    --v3; /*0x7b1a6e*/
  }
  while ( v3 ); /*0x7b1a6f*/
  *((unsigned int *)this + 64535) = 0; /*0x7b1a76*/
  *((unsigned int *)this + 64536) = 0; /*0x7b1a7c*/
  *((unsigned int *)this + 64537) = 0; /*0x7b1a82*/
  *((unsigned int *)this + 64532) = 0; /*0x7b1a88*/
  *((unsigned int *)this + 64533) = 0; /*0x7b1a8e*/
  *((unsigned int *)this + 1) = 576; /*0x7b1a94*/
  ((Debug *)this)->Log(); /*0x7b1a9b*/
  return this; /*0x7b1aa5*/

}
} // namespace gamemd
// 0x7B1B80
namespace gamemd {
int IPXInterfaceClass::AddRef(void *a1)
{

  int result; // eax

  if ( this->u32_3F06C != -1 ) /*0x7b1b8c*/
  {
    closesocket((void *)(this->u32_3F06C)); /*0x7b1b8f*/
    this->u32_3F06C = -1; /*0x7b1b94*/
  }
  result = this->u32_3F070; /*0x7b1b9e*/
  if ( result != -1 ) /*0x7b1ba7*/
  {
    result = closesocket((void *)(this->u32_3F070)); /*0x7b1baa*/
    this->u32_3F070 = -1; /*0x7b1baf*/
  }
  return result; /*0x7b1bb9*/

}
} // namespace gamemd
// 0x7B1BC0
namespace gamemd {
AbstractClass * * IPXInterfaceClass::Receive()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7B1BC0)
}
} // namespace gamemd
// 0x7B1CA0
namespace gamemd {
void IPXInterfaceClass::Disconnect()
{

  int v2; // eax
  int v3; // eax
  int v4; // ecx
  int v5; // eax

  while ( *((unsigned int *)this + 6) ) /*0x7b1ca6*/
  {
    v2 = **((unsigned int **)this + 3); /*0x7b1cae*/
    if ( *(unsigned char *)(v2 + 22) ) /*0x7b1cb0*/
    {
      __3_YAXPAX_Z(**((void ***)this + 3)); /*0x7b1cb6*/
    }
    else
    {
      *(unsigned char *)(v2 + 21) = 0; /*0x7b1cc0*/
      --*((unsigned int *)this + 64535); /*0x7b1cca*/
    }
    v3 = *((unsigned int *)this + 6); /*0x7b1cd0*/
    if ( v3 > 0 ) /*0x7b1cd5*/
    {
      v4 = v3 - 1; /*0x7b1cd7*/
      v5 = 0; /*0x7b1cda*/
      for ( *((unsigned int *)this + 6) = v4; /*0x7b1ce1*/
            v5 < *((unsigned int *)this + 6);
            *(unsigned int *)(*((unsigned int *)this + 3) + 4 * v5 - 4) = *(unsigned int *)(*((unsigned int *)this + 3) + 4 * v5) )
      {
        ++v5; /*0x7b1ce6*/
      }
    }
  }
  *((unsigned int *)this + 64535) = 0; /*0x7b1cfa*/
  *((unsigned int *)this + 64532) = 0; /*0x7b1d00*/

}
} // namespace gamemd
// 0x7B2240
namespace gamemd {
unsigned char * IPXInterfaceClass::processPacket(void *a1)
{

  unsigned char *result; // eax
  int v2; // edi
  int v3; // esi

  result = 0; /*0x7b2249*/
  if ( this->u32_3F05C == 128 ) /*0x7b2253*/
  {
    result = (unsigned char *)new unsigned char[0x2A0u]; /*0x7b225a*/
    result[22] = 1; /*0x7b2264*/
    result[21] = 1; /*0x7b2267*/
  }
  else
  {
    v2 = 0; /*0x7b226c*/
    while ( 1 ) /*0x7b226e*/
    {
      v3 = this->u32_3F050; /*0x7b226e*/
      this->u32_3F050 = v3 + 1; /*0x7b227a*/
      if ( v3 + 1 > 127 ) /*0x7b2280*/
        this->u32_3F050 = 0; /*0x7b2282*/
      if ( !*((unsigned char *)this + 672 * v3 + 101) ) /*0x7b2297*/
        break; /*0x7b2297*/
      if ( ++v2 >= 128 ) /*0x7b22a4*/
        return result; /*0x7b22a4*/
    }
    result = (unsigned char *)((char *)this + 672 * v3 + 80); /*0x7b22b9*/
    *((unsigned char *)this + 672 * v3 + 101) = 1; /*0x7b22bd*/
    ++this->u32_3F05C; /*0x7b22c8*/
  }
  if ( result ) /*0x7b22d0*/
  {
    result[23] = 0; /*0x7b22d2*/
    result[24] = 0; /*0x7b22d5*/
  }
  return result; /*0x7b22a6*/

}
} // namespace gamemd
// 0x7B24E0
namespace gamemd {
__int16 IPXInterfaceClass::Connect(const void * a1, unsigned int a3, char aP3)  // G42.40f-d truth 0x7B24E0
{

  unsigned char *v5; // ebx
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  int v9; // edx
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // eax
  int v14; // edx
  UINT v15; // eax

  v5 = ((AudioQueue *)((AudioQueue *)this))->AllocBuffer((char)((gamemd::WinsockInterfaceClass *)(aP3))); /*0x7b24f4*/
  qmemcpy(v5 + 32, a1, a3); /*0x7b2505*/
  *((unsigned int *)v5 + 4) = a3; /*0x7b250e*/
  (*(void (**)(WinsockInterfaceClass *, unsigned char *))(this->Socket + 84))((WinsockInterfaceClass *)this, v5); /*0x7b2516*/
  v5[20] = 1; /*0x7b251d*/
  if ( aP3 ) /*0x7b2523*/
  {
    v6 = *((unsigned int *)this + 16); /*0x7b2525*/
    if ( *((unsigned int *)this + 18) < v6 /*0x7b254d*/
      || (*((unsigned char *)this + 69) || !v6)
      && (v7 = *((unsigned int *)this + 19), v7 > 0)
      && (*(uint8_t (**)(char *, int, unsigned int))(*((unsigned int *)this + 14) + 8))(
           (char *)this + 56,
           v6 + v7,
           0) )
    {
      v8 = *((unsigned int *)this + 18); /*0x7b2554*/
      v9 = *((unsigned int *)this + 15); /*0x7b2557*/
      *((unsigned int *)this + 18) = v8 + 1; /*0x7b255d*/
      *(unsigned int *)(v9 + 4 * v8) = (unsigned int)(v5); /*0x7b2560*/
    }
    v10 = *((unsigned int *)this + 64540); /*0x7b2563*/
  }
  else
  {
    v11 = *((unsigned int *)this + 10); /*0x7b256b*/
    if ( *((unsigned int *)this + 12) < v11 /*0x7b2593*/
      || (*((unsigned char *)this + 45) || !v11)
      && (v12 = *((unsigned int *)this + 13), v12 > 0)
      && (*(uint8_t (**)(char *, int, unsigned int))(*((unsigned int *)this + 8) + 8))(
           (char *)this + 32,
           v11 + v12,
           0) )
    {
      v13 = *((unsigned int *)this + 12); /*0x7b259a*/
      v14 = *((unsigned int *)this + 9); /*0x7b259d*/
      *((unsigned int *)this + 12) = v13 + 1; /*0x7b25a3*/
      *(unsigned int *)(v14 + 4 * v13) = (unsigned int)(v5); /*0x7b25a6*/
    }
    v10 = *((unsigned int *)this + 64539); /*0x7b25a9*/
  }
  v15 = (*(int (**)(WinsockInterfaceClass *, int))(this->Socket + 56))((WinsockInterfaceClass *)this, v10); /*0x7b25b9*/
  SendMessageA((HWND)(g_hWnd), v15, 0, 2); /*0x7b25c3*/
  return ((EventQueue *)g_BinkMoviePlayer)->Process(); /*0x7b25d4*/  // G42.40f-c: stru_87F5F0.__pad_58[296] == 0x87F770 == g_BinkMoviePlayer

}
} // namespace gamemd
// 0x7B2A20
namespace gamemd {
AbstractClass * * IPXInterfaceClass::getSocketState(int a2, unsigned int * a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7B2A20)
}
} // namespace gamemd
// 0x7B1720
namespace gamemd {
void IPXInterfaceClass::StubReturnFalse(int a1, int a2)
{

  ; /*0x7b1720*/

}
} // namespace gamemd
// 0x7B1730
namespace gamemd {
void IPXInterfaceClass::GetQueueSize()
{

  ; /*0x7b1730*/

}
} // namespace gamemd
// 0x7B1740
namespace gamemd {
int IPXInterfaceClass::COMStub_Return0()
{

  return 0; /*0x7b1742*/

}
} // namespace gamemd
// 0x7B1750
namespace gamemd {
int IPXInterfaceClass::Send(int a1, void *a2, void *a3, void *a4, void *a5)
{

  return 0; /*0x7b1752*/

}
} // namespace gamemd
// 0x7B1770
namespace gamemd {
int IPXInterfaceClass::COMStub_Return1()
{

  return 1; /*0x7b1775*/

}
} // namespace gamemd
// 0x7B1780
namespace gamemd {
int IPXInterfaceClass::COMStub_Ret1139(int a1)
{

  return 1139; /*0x7b1785*/

}
} // namespace gamemd
// 0x7B1790
namespace gamemd {
IPXInterfaceClass * IPXInterfaceClass::QueryInterface(char a2, int a1, int a3, int a4, int aP1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7B1790)
}
} // namespace gamemd
// 0x7B1FD0
namespace gamemd {
int IPXInterfaceClass::SetAddress(unsigned int * a1)
{

  int v1; // ebx
  WinsockInterfaceClass *v2; // ebp
  int v3; // eax
  int *v4; // esi
  int result; // eax
  int v6; // edx
  int v7; // edi

  v1 = 0; /*0x7b1fd8*/
  v2 = (WinsockInterfaceClass *)((char *)a1 + 28); /*0x7b1fdd*/
  v3 = *((unsigned int *)a1 + 4); /*0x7b1fe0*/
  *((unsigned int *)a1 + 7) = 0; /*0x7b1fe4*/
  v4 = (int *)((char *)a1 + 32); /*0x7b1fed*/
  result = v3 / 4; /*0x7b1ff0*/
  if ( result > 0 ) /*0x7b1ff5*/
  {
    do /*0x7b2012*/
    {
      v6 = *v4++; /*0x7b1ff7*/
      ComputeHash((unsigned int *)(v2), v6); /*0x7b1ffe*/
      ++v1; /*0x7b2006*/
      result = *((unsigned int *)a1 + 4) / 4; /*0x7b200d*/
    }
    while ( v1 < result ); /*0x7b2012*/
  }
  v7 = *((unsigned int *)a1 + 4) & 3; /*0x7b2017*/
  if ( v7 ) /*0x7b201a*/
    return ComputeHash((unsigned int *)(v2), *v4 & (0xFFFFFFFF >> (32 - 8 * v7))); /*0x7b2035*/
  return result; /*0x7b203a*/

}
} // namespace gamemd
// 0x7B25E0
namespace gamemd {
int IPXInterfaceClass::GetAddress(SOCKET s, void *a2, void *a3, void *a4)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7B25E0)
}
} // namespace gamemd
// 0x7B26D0
namespace gamemd {
char IPXInterfaceClass::ReceivePacket(char * name, AnimClass * aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7B26D0)
}
} // namespace gamemd
// 0x7B2840
namespace gamemd {
void IPXInterfaceClass::getSocketCount()
{

  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x7b2846*/
  this->Count = 0; /*0x7b2849*/
  if ( v2 && BYTE1(this->LocalNode) ) /*0x7b2850*/
  {
    __3_YAXPAX_Z(v2); /*0x7b2856*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x7b285e*/
  }
  BYTE1(this->LocalNode) = 0; /*0x7b2861*/
  this->LocalNetwork = 0; /*0x7b2864*/

}
} // namespace gamemd
// 0x7B2870
namespace gamemd {
unsigned int IPXInterfaceClass::resetSocket(int a2)
{

  if ( LOBYTE(this->LocalNode) ) /*0x7b2870*/
    return (unsigned int)(a2 - *(unsigned int *)&this->m_1[3]) >> 2; /*0x7b2885*/
  else
    return 0; /*0x7b2877*/

}
} // namespace gamemd
// 0x7B2AD0
namespace gamemd {
int IPXInterfaceClass::initSession(unsigned int * a2)
{

  int m_10; // edx
  int result; // eax
  unsigned int *i; // ecx

  m_10 =(int)this->Count; /*0x7b2ad0*/
  result = 0; /*0x7b2ad3*/
  if ( m_10 <= 0 ) /*0x7b2ad8*/
    return -1; /*0x7b2aef*/
  for ( i = *(unsigned int **)&this->m_1[3]; *i != *a2; ++i ) /*0x7b2ade*/
  {
    if ( ++result >= m_10 ) /*0x7b2aed*/
      return -1; /*0x7b2aed*/
  }
  return result; /*0x7b2af2*/

}
} // namespace gamemd
// 0x7B2B50
namespace gamemd {
DynamicVector * IPXInterfaceClass::closeSession(char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7B2B50)
}
} // namespace gamemd