// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AudioQueue_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Timer_e4.hpp"

// 0x402AF0
namespace gamemd {
unsigned int * AudioQueue::CreateNode()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  AbstractClass *v2 = __2_YAPAXI_Z(0x60u); /*0x402afc*/
  memset(v2, 0, 0x60u); /*0x402b07*/
  DListNode::InitEmpty(v2); /*0x402b0e*/
  v2[4] = 0; /*0x402b13*/
  v2[3] = this; /*0x402b1c*/
  if ( this->vt_slot_20(v2) ) /*0x402b1f*/
  {
    if ( v2 ) /*0x402b28*/
    {
      (*(void (__thiscall **)(_DWORD *))(v2[3] + 24))(v2); /*0x402b2f*/
      *(_DWORD *)(v2[3] + 12) &= ~1u; /*0x402b36*/
      __3_YAXPAX_Z(v2); /*0x402b3a*/
      return 0; /*0x402b47*/
    }
    return 0; /*0x402b28*/
  }
  if ( !v2 ) /*0x402b4a*/
    return 0; /*0x402b51*/
  this->q003 |= 1u; /*0x402b5e*/
  InsertAfterDListNode((int)off_815E98, v2); /*0x402b67*/
  if ( (this->q002 & 2) != 0 ) /*0x402b70*/
    DataGlobal_87DE28 = 1; /*0x402b72*/
  return v2; /*0x402b44*/
}
}
} // namespace gamemd

// 0x4035F0
namespace gamemd {
int AudioQueue::FindBestChannel(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax

  int v2 = a2; /*0x4035f4*/
  int v10 = a2; /*0x4035fc*/
  if ( a2 == -1 ) /*0x403600*/
  {
    v2 = 1; /*0x403602*/
    v10 = 1; /*0x403607*/
  }
  int v3 = 127; /*0x40360b*/
  int v4 = 0; /*0x403610*/
  int v9 = 127; /*0x403618*/
  int v11 = 0; /*0x40361c*/
  unsigned int v5 = -1; /*0x403620*/
  result = AudioQueue::GetNext((int *)(a1 + 248)); /*0x403623*/
  if ( result ) /*0x40362a*/
  {
    while ( 1 ) /*0x403632*/
    {
      if ( *(_DWORD *)(result + 12) == v2 ) /*0x403635*/
      {
        if ( (*(_BYTE *)(result + 164) & 0x15) == 0 ) /*0x40363e*/
          return result; /*0x40363e*/
        int v7 = *(_DWORD *)(result + 160); /*0x403647*/
        if ( (*(_BYTE *)(result + 164) & 1) != 0 ) /*0x40364d*/
        {
          if ( v7 >= v3 ) /*0x403651*/
          {
            if ( v7 == v3 ) /*0x40365f*/
            {
              unsigned int v8 = *(_DWORD *)(result + 220); /*0x403661*/
              if ( v8 < v5 && v5 - v8 >= 0x666 ) /*0x403675*/
              {
                v3 = *(_DWORD *)(result + 160); /*0x403677*/
                v4 = result; /*0x403679*/
                v5 = *(_DWORD *)(result + 220); /*0x40367b*/
              }
            }
          }
          else
          {
            v5 = *(_DWORD *)(result + 220); /*0x403653*/
            v3 = *(_DWORD *)(result + 160); /*0x403659*/
            v4 = result; /*0x40365b*/
          }
        }
        else if ( v7 < v9 ) /*0x403683*/
        {
          v9 = *(_DWORD *)(result + 160); /*0x403685*/
          v11 = result; /*0x403689*/
        }
      }
      result = AudioQueue::GetNextAlt((int *)result); /*0x403693*/
      if ( !result ) /*0x40369a*/
        break; /*0x40369a*/
      v2 = v10; /*0x40362e*/
    }
  }
  result = v11; /*0x4036a2*/
  if ( !v11 || v9 > v3 ) /*0x4036ae*/
    return v4; /*0x4036b0*/
  return result; /*0x4036b2*/
}
}
} // namespace gamemd

// 0x403730
namespace gamemd {
int AudioQueue::StopAllVoices(__thiscall *__fastcall AudioQueue::StopAllVoices(int a1, int a2))( int)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int (__thiscall *result)(int); // eax

  result = (int (__thiscall *)(int))AudioQueue::GetNext((int *)(a1 + 248)); /*0x40373b*/
  Voice *v4 = (int *)result; /*0x403740*/
  Voice *v5 = (int)result; /*0x403744*/
  if ( result ) /*0x403746*/
  {
    do /*0x403766*/
    {
      result = (int (__thiscall *)(int))AudioQueue::GetNextAlt(v4); /*0x40374a*/
      v4 = (int *)result; /*0x403752*/
      if ( a2 == -1 || *(_DWORD *)(v5 + 12) == a2 ) /*0x403759*/
        result = Voice::Stop(v5); /*0x40375d*/
      v5 = (int)v4; /*0x403764*/
    }
    while ( v4 ); /*0x403766*/
  }
  return result; /*0x403768*/
}
}
} // namespace gamemd

// 0x752680
namespace gamemd {
void * AudioQueue::FindByData()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int *result; // eax

  result = (int *)AudioQueue::GetNext(&DataGlobal_B1D3F0); /*0x752689*/
  if ( result ) /*0x752690*/
  {
    while ( (void *)result[3] != this ) /*0x752695*/
    {
      result = (int *)AudioQueue::GetNextAlt(result); /*0x752699*/
      if ( !result ) /*0x7526a0*/
        goto LABEL_4; /*0x7526a0*/
    }
  }
  else
  {
LABEL_4:
    result = (int *)DataGlobal_B1D4B8; /*0x7526a2*/
    if ( !DataGlobal_B1D4B8 || *((void **)DataGlobal_B1D4B8 + 3) != this ) /*0x7526ae*/
    {
      ObjectClass *v3 = (int *)&DataGlobal_B1D474; /*0x7526b0*/
      while ( 1 ) /*0x7526b7*/
      {
        result = (int *)AudioQueue::GetNext(v3); /*0x7526b7*/
        if ( result ) /*0x7526be*/
          break; /*0x7526be*/
LABEL_10:
        v3 -= 3; /*0x7526d0*/
        if ( (int)v3 < (int)DataGlobal_B1D450 ) /*0x7526d9*/
        {
          result = (int *)AudioQueue::GetNext(&DataGlobal_B1D3C8); /*0x7526e0*/
          if ( !result ) /*0x7526e7*/
            return 0; /*0x7526f9*/
          while ( (void *)result[3] != this ) /*0x7526ec*/
          {
            result = (int *)AudioQueue::GetNextAlt(result); /*0x7526f0*/
            if ( !result ) /*0x7526f7*/
              return 0; /*0x7526f7*/
          }
          return result; /*0x7526ec*/
        }
      }
      while ( (void *)result[3] != this ) /*0x7526c3*/
      {
        result = (int *)AudioQueue::GetNextAlt(result); /*0x7526c7*/
        if ( !result ) /*0x7526ce*/
          goto LABEL_10; /*0x7526ce*/
      }
    }
  }
  return result; /*0x7526fb*/
}
}
} // namespace gamemd

// 0x771620
namespace gamemd {
RandomStruct * * AudioQueue::Update()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  signed int v2 = *(_DWORD *)(this + 948); /*0x77162a*/
  if ( *(_DWORD *)(this + 940) == -1 ) /*0x771633*/
  {
LABEL_4:
    if ( v2 ) /*0x77164e*/
      return; /*0x77164e*/
    goto LABEL_5; /*0x77164e*/
  }
  signed int v3 = Timer::GetTicks() - *(_DWORD *)(this + 940); /*0x771640*/
  if ( v3 < v2 ) /*0x771648*/
  {
    v2 -= v3; /*0x77164a*/
    goto LABEL_4; /*0x77164a*/
  }
LABEL_5:
  if ( this->q3D0 > 0 && !(unsigned __int8)Audio::IsPlaying() ) /*0x771662*/
  {
    if ( !*(_BYTE *)(this + 952) ) /*0x77166f*/
    {
      RandomStruct *v4 = this->q3D0; /*0x771679*/
      if ( v4 > 0 ) /*0x771681*/
      {
        RandomStruct *v5 = v4 - 1; /*0x771683*/
        int v6 = 0; /*0x771684*/
        for ( this->q3D0 = v5; v6 < this->q3D0; ++v6 ) /*0x77168e*/
          String::Reassign( /*0x77169e*/
            (char **)(*(_DWORD *)(this + 964) + 4 * v6),
            (const char **)(*(_DWORD *)(this + 964) + 4 * v6 + 4));
      }
      int v7 = *(_DWORD *)(this + 956); /*0x7716ae*/
      if ( v7 > 0 ) /*0x7716b6*/
        *(_DWORD *)(this + 956) = v7 - 1; /*0x7716b9*/
    }
    if ( this->q3D0 <= 0 ) /*0x7716c7*/
    {
      *(_DWORD *)(this + 956) = 0; /*0x7716f1*/
      *(_BYTE *)(this + 952) = 1; /*0x7716fb*/
    }
    else
    {
      char * v8 = String::GetOrEmpty(*(char ***)(this + 964)); /*0x7716d1*/
      int v9 = VocClass::FindByName(v8); /*0x7716d8*/
      UpdateThemeManager(v9, -1, -1); /*0x7716e2*/
      *(_BYTE *)(this + 952) = 0; /*0x7716e7*/
    }
  }
}
}
} // namespace gamemd

// 0x7B1D10
namespace gamemd {
CampaignClass * * AudioQueue::Cleanup()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  while ( *(_DWORD *)(this + 48) ) /*0x7b1d16*/
  {
    AbstractClass *v2 = **(_DWORD **)(this + 36); /*0x7b1d1e*/
    if ( v2->q058 ) /*0x7b1d20*/
    {
      __3_YAXPAX_Z(**(void ***)(this + 36)); /*0x7b1d26*/
    }
    else
    {
      v2->q054 = 0; /*0x7b1d30*/
      --this->q3F060; /*0x7b1d3a*/
    }
    int v3 = *(_DWORD *)(this + 48); /*0x7b1d40*/
    if ( v3 > 0 ) /*0x7b1d45*/
    {
      int v4 = v3 - 1; /*0x7b1d47*/
      int v5 = 0; /*0x7b1d4a*/
      for ( *(_DWORD *)(this + 48) = v4; /*0x7b1d51*/
            v5 < *(_DWORD *)(this + 48);
            *(_DWORD *)(*(_DWORD *)(this + 36) + 4 * v5 - 4) = *(_DWORD *)(*(_DWORD *)(this + 36) + 4 * v5) )
      {
        ++v5; /*0x7b1d56*/
      }
    }
  }
  this->q3F060 = 0; /*0x7b1d6a*/
  this->q3F054 = 0; /*0x7b1d70*/
  while ( *(_DWORD *)(this + 72) ) /*0x7b1d76*/
  {
    AbstractClass *v6 = **(_DWORD **)(this + 60); /*0x7b1d7e*/
    if ( v6->q058 ) /*0x7b1d80*/
    {
      __3_YAXPAX_Z(**(void ***)(this + 60)); /*0x7b1d86*/
    }
    else
    {
      v6->q054 = 0; /*0x7b1d90*/
      --this->q3F064; /*0x7b1d9a*/
    }
    int v7 = *(_DWORD *)(this + 72); /*0x7b1da0*/
    if ( v7 > 0 ) /*0x7b1da5*/
    {
      int v8 = v7 - 1; /*0x7b1da7*/
      int v9 = 0; /*0x7b1daa*/
      for ( *(_DWORD *)(this + 72) = v8; /*0x7b1db1*/
            v9 < *(_DWORD *)(this + 72);
            *(_DWORD *)(*(_DWORD *)(this + 60) + 4 * v9 - 4) = *(_DWORD *)(*(_DWORD *)(this + 60) + 4 * v9) )
      {
        ++v9; /*0x7b1db6*/
      }
    }
  }
  this->q3F064 = 0; /*0x7b1dca*/
  this->q3F058 = 0; /*0x7b1dd0*/
}
}
} // namespace gamemd

// 0x7B20E0
namespace gamemd {
unsigned char * AudioQueue::AllocBuffer(WinsockInterfaceClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  _BYTE *result; // eax

  result = 0; /*0x7b20e7*/
  if ( (_BYTE)aP1 ) /*0x7b20ed*/
  {
    if ( this->q3F064 == 128 ) /*0x7b219e*/
    {
      result = (_BYTE *)__2_YAPAXI_Z(0x2A0u); /*0x7b21a5*/
      result[22] = 1; /*0x7b21af*/
      result[21] = 1; /*0x7b21b2*/
    }
    else
    {
  int v6; // esi
      int v5 = 0; /*0x7b21b7*/
      while ( 1 ) /*0x7b21b9*/
      {
        v6 = this->q3F058; /*0x7b21b9*/
        this->q3F058 = v6 + 1; /*0x7b21c5*/
        if ( v6 + 1 > 127 ) /*0x7b21cb*/
          this->q3F058 = 0; /*0x7b21cd*/
        if ( !*((_BYTE *)this + 672 * v6 + 172133) ) /*0x7b21e2*/
          break; /*0x7b21e2*/
        if ( ++v5 >= 128 ) /*0x7b21f2*/
          return result; /*0x7b21f2*/
      }
      result = this + 168 * v6 + 43028; /*0x7b220b*/
      *((_BYTE *)this + 672 * v6 + 172133) = 1; /*0x7b2212*/
      ++this->q3F064; /*0x7b221c*/
    }
    if ( result ) /*0x7b2224*/
    {
      result[23] = 1; /*0x7b2226*/
      result[24] = 0; /*0x7b2229*/
    }
  }
  else
  {
    if ( this->q3F060 == 128 ) /*0x7b20fd*/
    {
      result = (_BYTE *)__2_YAPAXI_Z(0x2A0u); /*0x7b2104*/
      result[22] = 1; /*0x7b210e*/
      result[21] = 1; /*0x7b2111*/
    }
    else
    {
  int v4; // esi
      int v3 = 0; /*0x7b2116*/
      while ( 1 ) /*0x7b2118*/
      {
        v4 = this->q3F054; /*0x7b2118*/
        this->q3F054 = v4 + 1; /*0x7b2124*/
        if ( v4 + 1 > 127 ) /*0x7b212a*/
          this->q3F054 = 0; /*0x7b212c*/
        if ( !*((_BYTE *)this + 672 * v4 + 86117) ) /*0x7b2141*/
          break; /*0x7b2141*/
        if ( ++v3 >= 128 ) /*0x7b2151*/
          return result; /*0x7b2151*/
      }
      result = this + 168 * v4 + 21524; /*0x7b2168*/
      *((_BYTE *)this + 672 * v4 + 86117) = 1; /*0x7b216f*/
      ++this->q3F060; /*0x7b217a*/
    }
    if ( result ) /*0x7b2182*/
    {
      result[23] = 0; /*0x7b2188*/
      result[24] = 0; /*0x7b218c*/
    }
  }
  return result; /*0x7b2153*/
}
}
} // namespace gamemd

// 0x7B22E0
namespace gamemd {
int AudioQueue::ReadBuffer(void * a2, int a3, void * a4, unsigned int * a5, unsigned short * a6)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  EventQueue::Process(g_BinkMoviePlayer); /*0x7b22e9*/
  if ( !this->q018 ) /*0x7b22ee*/
    return 0; /*0x7b22f5*/
  AbstractClass *v8 = *this->q003; /*0x7b2304*/
  qmemcpy(a2, (const void *)(v8 + 32), v8->uniqueId); /*0x7b2311*/
  unsigned int v9 = *a5; /*0x7b231e*/
  if ( *a5 > 0x10 ) /*0x7b2323*/
    v9 = 16; /*0x7b2325*/
  *a5 = v9; /*0x7b232e*/
  qmemcpy(a4, (const void *)v8, v9); /*0x7b2337*/
  *a6 = v8->q01A; /*0x7b234c*/
  *(_DWORD *)a3 = v8->uniqueId; /*0x7b2352*/
  int v10 = this->q018; /*0x7b2354*/
  if ( v10 > 0 ) /*0x7b2359*/
  {
    int v11 = v10 - 1; /*0x7b235b*/
    int v12 = 0; /*0x7b235e*/
    for ( this->q018 = v11; /*0x7b2365*/
          v12 < this->q018;
          *(_DWORD *)(this->q003 + 4 * v12 - 4) = *(_DWORD *)(this->q003 + 4 * v12) )
    {
      ++v12; /*0x7b236a*/
    }
  }
  if ( v8->q058 ) /*0x7b2379*/
  {
    __3_YAXPAX_Z((void *)v8); /*0x7b2381*/
  }
  else
  {
    v8->q054 = 0; /*0x7b2391*/
    --this->q3F05C; /*0x7b239d*/
  }
  return *(_DWORD *)a3; /*0x7b22f7*/
}
}
} // namespace gamemd

// 0x7B23B0
namespace gamemd {
AnimClass * * AudioQueue::WriteBuffer(WinsockInterfaceClass * aP1, unsigned int arg4, const void * a3, unsigned int a5, WinsockInterfaceClass * aP5, char a7, short a8)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  AnimClass *v14; // eax
  UINT v19; // eax
  _BYTE * v9 = AudioQueue::AllocBuffer((_DWORD *)this, aP5); /*0x7b23c4*/
  qmemcpy(v9 + 32, aP1, arg4); /*0x7b23d5*/
  *((_DWORD *)v9 + 4) = arg4; /*0x7b23e6*/
  v9[20] = 0; /*0x7b23f4*/
  v9[24] = a7; /*0x7b23f8*/
  qmemcpy(v9, a3, a5); /*0x7b23fb*/
  *((_WORD *)v9 + 13) = a8; /*0x7b2409*/
  this->vt_slot_84(v9); /*0x7b2411*/
  if ( (_BYTE)aP5 ) /*0x7b241a*/
  {
    int v10 = *(_DWORD *)(this + 64); /*0x7b241c*/
    if ( *(_DWORD *)(this + 72) < v10 /*0x7b2444*/
      || (*(_BYTE *)(this + 69) || !v10)
  int v11; // eax
      && (v11 = *(_DWORD *)(this + 76), v11 > 0)
      && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(this + 56) + 8))(this + 56, v10 + v11, 0) )
    {
      int v12 = *(_DWORD *)(this + 72); /*0x7b244b*/
      int v13 = *(_DWORD *)(this + 60); /*0x7b244e*/
      *(_DWORD *)(this + 72) = v12 + 1; /*0x7b2454*/
      *(_DWORD *)(v13 + 4 * v12) = v9; /*0x7b2457*/
    }
    v14 = *(_DWORD *)(this + 258160); /*0x7b245a*/
  }
  else
  {
    int v15 = *(_DWORD *)(this + 40); /*0x7b2462*/
    if ( *(_DWORD *)(this + 48) < v15 /*0x7b248a*/
      || (*(_BYTE *)(this + 45) || !v15)
  int v16; // eax
      && (v16 = *(_DWORD *)(this + 52), v16 > 0)
      && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(this + 32) + 8))(this + 32, v15 + v16, 0) )
    {
      int v17 = *(_DWORD *)(this + 48); /*0x7b2491*/
      int v18 = *(_DWORD *)(this + 36); /*0x7b2494*/
      *(_DWORD *)(this + 48) = v17 + 1; /*0x7b249a*/
      *(_DWORD *)(v18 + 4 * v17) = v9; /*0x7b249d*/
    }
    v14 = *(_DWORD *)(this + 258156); /*0x7b24a0*/
  }
  v19 = this->vt_slot_56(v14); /*0x7b24af*/
  SendMessageA((HWND)g_hWnd, v19, 0, 2); /*0x7b24b9*/
  return EventQueue::Process(g_BinkMoviePlayer); /*0x7b24ca*/
}
}
} // namespace gamemd

// 0x403530
namespace gamemd {
int AudioQueue::PreallocateChannels(unsigned int * a1, int a2)
{
{
    int v4;
    int *v5;
    int v6;
    v4 = 0;
    do
  {
    if ( *((int*)(a1) + 60) >= *((int*)(a1) + 61) )
    break;
    v5 = AudioController::Constructor(a1);
    if ( !v5 )
    break;
    v5[43] = (int)a1;
    ++*((int*)(a1) + 60);
    ++*((int*)(a1) + 65);
    InsertAfterDListNode((int)(a1 + 62), v5);
    v6 = *((int*)(a1) + 65) - 1;
    *((int*)(a1) + 65) = v6;
    if ( v6 < 0 )
    *((int*)(a1) + 65) = 0;
    ++v4;
    --a2;
  }
    while ( a2 );
    return v4;
}
}
} // namespace gamemd

// 0x4035D0
namespace gamemd {
int * AudioQueue::IteratorNext()
{
{
    int *v2;
    v2 = *(void**)this;
    if ( v2 )
    *(void**)this = (int *)AudioQueue::GetNextAlt(v2);
    return *this;
}
}
} // namespace gamemd

// 0x403770
namespace gamemd {
int AudioQueue::DeactivateAllMatching(int a1, int a2)
{
{
    int result;
    int i;
    result = AudioQueue::GetNext((int *)(a1 + 248));
    for ( i = result; result; i = result )
  {
    if ( (*(char *)(i + 164) & 1) != 0 && (a2 == -1 || *(int *)(i + 12) == a2) )
    result = AudioChannel::DeactivatePlay((int *)i);
    if ( !i )
    break;
    result = AudioQueue::GetNextAlt((int *)i);
  }
    return result;
}
}
} // namespace gamemd

// 0x4073C0
namespace gamemd {
int AudioQueue::GetNext()
{
{
    int result;
    if ( !this )
    return 0;
    result = *(void**)this;
    if ( *(void**)this )
  {
    if ( result == *(int *)(result + 8) )
    return 0;
  }
    return result;
}
}
} // namespace gamemd

// 0x4073E0
namespace gamemd {
int AudioQueue::GetNextAlt()
{
{
    int result;
    if ( !this )
    return 0;
    result = *(void**)this;
    if ( *(void**)this )
  {
    if ( result == *(int *)(result + 8) )
    return 0;
  }
    return result;
}
}
} // namespace gamemd

// 0x407B40
namespace gamemd {
int AudioQueue::IsEmpty(int a1, int a2)
{
{
    int result;
    result = *(int *)(a1 + 20);
    *(int *)(result + 148) = a2;
    return result;
}
}
} // namespace gamemd

// 0x407B50
namespace gamemd {
int AudioQueue::IsNotEmpty(int a1, int a2)
{
{
    int result;
    result = *(int *)(a1 + 20);
    *(int *)(result + 156) = a2;
    return result;
}
}
} // namespace gamemd

// 0x4081A0
namespace gamemd {
int AudioQueue::HaltVoices()
{
{
    int result;
    int *i;
    result = DataGlobal_87E81C;
    if ( DataGlobal_87E81C )
  {
    result = AudioQueue::GetNext(DataGlobal_87E810);
    for ( i = (int *)result; result; i = (int *)result )
    {
    if ( !i[34] )
      {
    if ( i[5] )
        {
    EnterCriticalSection(&CriticalSection);
    Voice::Stop(i[5]);
    LeaveCriticalSection(&CriticalSection);
        }
      }
    result = AudioQueue::GetNextAlt(i);
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x408200
namespace gamemd {
int * AudioQueue::IncrementPriority()
{
{
    int *result;
    result = (int *)DataGlobal_87E81C;
    if ( DataGlobal_87E81C )
  {
    for ( result = (int *)AudioQueue::GetNext(DataGlobal_87E810); result; result = (int *)AudioQueue::GetNextAlt(result) )
    ++result[34];
  }
    return result;
}
}
} // namespace gamemd

// 0x408270
namespace gamemd {
int AudioQueue::ReleaseBuffers()
{
{
    int result;
    int *i;
    int v2;
    result = DataGlobal_87E81C;
    if ( DataGlobal_87E81C )
  {
    result = AudioQueue::GetNext(DataGlobal_87E810);
    for ( i = (int *)result; result; i = (int *)result )
    {
    if ( !i[32] && i[5] )
      {
    EnterCriticalSection(&CriticalSection);
    AudioChannel::DeactivatePlay(i[5]);
    v2 = i[3];
    if ( (v2 & 1) != 0 )
        {
    LOBYTE(v2) = v2 & 0xFC | 2;
    i[3] = v2;
        }
    LeaveCriticalSection(&CriticalSection);
      }
    ++i[32];
    result = AudioQueue::GetNextAlt(i);
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x750FA0
namespace gamemd {
int AudioQueue::DrainAll()
{
{
    int result;
    int *v1;
    int Next_Alt;
    result = AudioQueue::GetNext(DataGlobal_B1D320);
    v1 = (int *)result;
    if ( result )
  {
    do
    {
    Next_Alt = AudioQueue::GetNextAlt(v1);
    AudioController::Stop(v1 + 3);
    LinkedList::Init((int **)v1);
    result = PushFrontLinkedListAlt(DataGlobal_B1D3A4, (int)v1);
    v1 = (int *)Next_Alt;
    --DataGlobal_B1D3A8;
    }
    while ( Next_Alt );
  }
    return result;
}
}
} // namespace gamemd
