// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x5400D0
int IPXGlobalConnClass::CheckStatus()
{
{
    int v2;
    int *v3;
    v2 = 0;
    v3 = (int *)this->PlayerIndex;
    if ( (int)v3[14] > 0 )
  {
    do
    {
    if ( (*(char *)Terrain::GetTileType(v3, v2) & 2) != 0 )
    PacketQueue::ReleaseEntry((int *)this->PlayerIndex, 0, 0, v2--, 0, 0);
    v3 = (int *)this->PlayerIndex;
    ++v2;
    }
    while ( v2 < v3[14] );
  }
    return 1;
}
}

// 0x540110
void IPXGlobalConnClass::ReceivePacket(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall IPXGlobalConnClass::_vt17(int this, int a2)
{
  int v2; // esi
  _DWORD *v3; // ecx
  int i; // ebp
  int TileType; // edi
  int v6; // eax
  int v7; // ebx
  DWORD Ticks; // edx
  int v9; // eax
  int v10; // ecx
  _DWORD *v11; // edx

  v2 = this; /*0x540113*/
  Debug::Log(); /*0x540132*/
  v3 = *(_DWORD **)(v2 + 4); /*0x540137*/
  for ( i = 0; i < v3[14]; ++i ) /*0x540144*/
  {
    TileType = Terrain::GetTileType(v3, i); /*0x540158*/
    Debug::Log(); /*0x54015a*/
    if ( TileType ) /*0x540164*/
    {
      Debug::Log(); /*0x540170*/
      v6 = MEMORY[0x887338]; /*0x540175*/
      v7 = MEMORY[0x887340]; /*0x540186*/
      if ( MEMORY[0x887338] != -1 ) /*0x540188*/
      {
        Ticks = Timer::GetTicks(); /*0x54019a*/
        v6 = MEMORY[0x887338]; /*0x54019c*/
        v7 += Ticks - MEMORY[0x887338]; /*0x5401a3*/
      }
      if ( a2 + *(_DWORD *)(TileType + 4) >= v7 ) /*0x5401b0*/
      {
        if ( v6 != -1 ) /*0x54023d*/
          Timer::GetTicks(); /*0x540244*/
        Debug::Log(); /*0x54026f*/
      }
      else
      {
        if ( v6 != -1 ) /*0x5401b9*/
          Timer::GetTicks(); /*0x5401c0*/
        Debug::Log(); /*0x5401eb*/
        v9 = 0; /*0x5401fa*/
        v10 = *(_DWORD *)(this + 212); /*0x5401ff*/
        if ( v10 > 0 ) /*0x540207*/
        {
          v11 = *(_DWORD **)(this + 208); /*0x54020f*/
          while ( *v11 != *(_DWORD *)(*(_DWORD *)(TileType + 12) + 4) ) /*0x540213*/
          {
            ++v9; /*0x540215*/
            ++v11; /*0x540216*/
            if ( v9 >= v10 ) /*0x54021b*/
              goto LABEL_14; /*0x54021b*/
          }
          *(_DWORD *)(*(_DWORD *)(this + 208) + 4 * v9) = -1; /*0x54021f*/
        }
LABEL_14:
        PacketQueue::ReleaseEntry(*(_DWORD **)(this + 4), 0, 0, i--, 0, 0); /*0x540226*/
      }
      v2 = this; /*0x540277*/
    }
    v3 = *(_DWORD **)(v2 + 4); /*0x54027b*/
  }
  Debug::Log(); /*0x540296*/
}
}

// 0x5402D0
int IPXGlobalConnClass::Send()
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    int *v6;
    int v8;
    int v9;
    char v10[12];
    char v11[1024];
    v2 = 0;
    v3 = 0;
    v4 = (int *)this->PlayerIndex;
    if ( (int)v4[10] > 0 )
  {
    do
    {
    v5 = *(int *)Terrain::GetTileIndex(v4, v3);
    if ( (v5 & 4) != 0 && (v5 & 2) == 0 )
      {
    Waypoint::InitInvalid(v10);
    v6 = (int *)this->PlayerIndex;
    v8 = 12;
    PacketQueue::ExtractEntry(v6, v11, &v9, v3--, v10, &v8, 0);
    ++v2;
      }
    v4 = (int *)this->PlayerIndex;
    ++v3;
    }
    while ( v3 < v4[10] );
  }
    return v2;
}
}

// 0x540340
int IPXGlobalConnClass::SendPacket(int a2, short a3)
{
{
    int *v4;
    int v5;
    int v6;
    int TileIndex;
    int v8;
    int *v9;
    int v11;
    int v12;
    char v13[12];
    char v14[1024];
    v4 = (int *)this->PlayerIndex;
    v5 = 0;
    v6 = 0;
    if ( (int)v4[10] <= 0 )
    return 0;
    do
  {
    TileIndex = Terrain::GetTileIndex(v4, v6);
    v8 = TileIndex;
    if ( (*(char *)TileIndex & 2) == 0 && *(int *)(TileIndex + 24) && NetworkID::Compare(*(int *)(TileIndex + 28), a2) && *(short *)(v8 + 32) == a3 )
    {
    Waypoint::InitInvalid(v13);
    v9 = (int *)this->PlayerIndex;
    v11 = 12;
    PacketQueue::ExtractEntry(v9, v14, &v12, v6--, v13, &v11, 0);
    ++v5;
    }
    v4 = (int *)this->PlayerIndex;
    ++v6;
  }
    while ( v6 < v4[10] );
    return v5;
}
}

// 0x5403F0
int IPXGlobalConnClass::SetAddress(int a2, int arg4, int * a3, IPXGlobalConnClass * aP4, int a6, int aP3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall IPXGlobalConnClass::SetAddress(
        _BYTE *this,
        int a2,
        int arg4,
        int *a3,
        IPXGlobalConnClass *aP4,
        int a6,
        int aP3)
{
  _BYTE *v7; // ebp
  int v8; // esi
  int v9; // ebp
  int v10; // edi
  char LinkedIndex; // al
  int v12; // edi
  int v13; // edx
  IPXManagerClass *v15; // [esp+Ch] [ebp-28h] BYREF
  _BYTE *aP1_4; // [esp+10h] [ebp-24h]
  int v17[2]; // [esp+14h] [ebp-20h] BYREF
  IPXManagerClass v18; // [esp+1Ch] [ebp-18h] BYREF
  int v19; // [esp+24h] [ebp-10h]
  IPXManagerClass v20; // [esp+28h] [ebp-Ch] BYREF
  int v21; // [esp+30h] [ebp-4h]

  v7 = this; /*0x5403f4*/
  aP1_4 = this; /*0x5403fc*/
  Waypoint::InitInvalid(&v18); /*0x540400*/
  v18.Socket = *a3; /*0x540413*/
  *(_DWORD *)&v18.Initialized = a3[1]; /*0x54041a*/
  v19 = a3[2]; /*0x540421*/
  if ( aP4 ) /*0x540425*/
  {
    Network::CopyAddress(a3, &v15, (int)v17); /*0x540431*/
    v15 = *(IPXManagerClass **)aP4->__pad_0; /*0x540442*/
    NetworkID::Assign(&v18, (IPXManagerClass *)&v15, (int)v17, 0); /*0x54044c*/
  }
  if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 /*0x540477*/
    && !(_BYTE)a6
    && HouseClass_Player.__pad_5568[18668]
    && v7[200] )
  {
    v8 = a2; /*0x540485*/
    if ( !*(_BYTE *)(a2 + 3) ) /*0x540489*/
    {
      v20 = v18; /*0x5404a0*/
      v21 = v19; /*0x5404b6*/
      Network::CopyAddress(&v20, &v15, (int)v17); /*0x5404ba*/
      NetworkID::Assign(&v20, (IPXManagerClass *)&v15, (int)v17, (IPXManagerClass *)aP3); /*0x5404d2*/
      v9 = -1; /*0x5404dc*/
      v10 = 0; /*0x5404df*/
      if ( *(int *)&HouseClass_Player.__pad_5568[18384] > 0 ) /*0x5404e3*/
      {
        while ( !GUID::Compare( /*0x5404fd*/
                   (char *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v10) + 40),
                   (int)&v20) )
        {
          if ( ++v10 >= *(int *)&HouseClass_Player.__pad_5568[18384] ) /*0x540507*/
            goto LABEL_13; /*0x540507*/
        }
        v9 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] + 4 * v10) + 111); /*0x540514*/
      }
LABEL_13:
      LinkedIndex = Factory::GetLinkedIndex((int *)&g_NetworkEventQueue, (DynamicVector *)v9); /*0x540517*/
      if ( !LinkedIndex ) /*0x540524*/
        LinkedIndex = 1; /*0x540526*/
      v7 = aP1_4; /*0x540528*/
      *(_BYTE *)(a2 + 3) = LinkedIndex; /*0x54052c*/
    }
    v18 = *(IPXManagerClass *)&HouseClass_Player.__pad_5568[18672]; /*0x540540*/
    v12 = *(_DWORD *)&stru_830620.__pad_579C[49536]; /*0x54054a*/
    v19 = *(_DWORD *)&HouseClass_Player.__pad_5568[18680]; /*0x540554*/
    if ( GUID::Compare(&HouseClass_Player.__pad_5568[18684], **(_DWORD **)&HouseClass_Player.__pad_5568[18372] + 40) /*0x54057b*/
      && NetworkID::Compare((int)&v18, **(_DWORD **)&HouseClass_Player.__pad_5568[18372] + 40) )
    {
      v13 = a2 + 8; /*0x540584*/
      *(_WORD *)(a2 + 12) = 0; /*0x540587*/
      *(_DWORD *)(a2 + 8) = 0; /*0x54058d*/
    }
    else
    {
      v12 = *(_DWORD *)&HouseClass_Player.__pad_5568[18696]; /*0x54059b*/
      *(_WORD *)(a2 + 12) = *(_WORD *)&stru_830620.__pad_579C[49536]; /*0x5405a4*/
      *(_DWORD *)(a2 + 8) = 0; /*0x5405a8*/
    }
  }
  else
  {
    v8 = a2; /*0x5405b0*/
    v12 = aP3; /*0x5405b4*/
    v13 = a2 + 8; /*0x5405b8*/
    *(_WORD *)(a2 + 12) = 0; /*0x5405bb*/
    *(_DWORD *)(a2 + 8) = 0; /*0x5405c1*/
  }
  if ( *(_DWORD *)&stru_87C374.__pad_579C[23320] ) /*0x5405cf*/
  {
    LOBYTE(v13) = v7[200] == 0; /*0x5405da*/
    (*(void (__thiscall **)(_DWORD, int, int, IPXManagerClass *, int, int, int, int))(**(_DWORD **)&stru_87C374.__pad_579C[23320] /*0x5405f2*/
                                                                                    + 12))(
      *(_DWORD *)&stru_87C374.__pad_579C[23320],
      v8,
      arg4,
      &v18,
      12,
      a6,
      v13,
      v12);
  }
  return 1; /*0x5405f5*/
}
}

// 0x540610
int IPXGlobalConnClass::Release(const void * a1, AnimClass * aP2, int aP3, char aP4)
{
{
    return ConnectionClass::sendAck((int)this, (AnimClass *)a1, aP2, (AnimClass *)aP3, (AnimClass *)aP4);
}
}

// 0x540630
int IPXGlobalConnClass::ddtor(int a2, int a3)
{
{
    return ConnectionClass::receivePacket(this, a2, a3);
}
}

// 0x540650
int IPXGlobalConnClass::Connect(void * a2, signed int * a3)
{
{
    return ConnectionClass::processTileUpdate(this, a2, a3);
}
}

// 0x540670
IPXGlobalConnClass * IPXGlobalConnClass::QueryInterface(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 52);
    *(void**)this = &vt_IPXGlobalConnClass;
    if ( v3 )
  {
    __3_YAXPAX_Z(v3);
    *(this + 52) = 0;
  }
    if ( *(this + 51) )
  {
    __3_YAXPAX_Z((void *)*(this + 51));
    *(this + 51) = 0;
  }
    *(void**)this = &vt_IPXConnClass;
    ConnectionClass::dtor(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (IPXGlobalConnClass *)this;
}
}
