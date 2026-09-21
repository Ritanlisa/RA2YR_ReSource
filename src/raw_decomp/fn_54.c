// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x00540030  IPXGlobalConnClass::Disconnect  this=IPXGlobalConnClass  sig=csp ====
_DWORD *__thiscall IPXGlobalConnClass::_vt15(_DWORD *this, int a2)
{
  _DWORD *v2; // ecx
  _DWORD *result; // eax

  v2 = (_DWORD *)this->IPXGlobalConnClass_field_0x04; /*0x540030*/
  result = (_DWORD *)a2; /*0x540033*/
  if ( a2 < v2[14] ) /*0x54003a*/
  {
    result = (_DWORD *)Terrain::GetTileType(v2, a2); /*0x54003d*/
    *result |= 2u; /*0x540042*/
  }
  return result; /*0x540045*/
}


// ==== 0x00540050  IPXGlobalConnClass::GetAddress  this=IPXGlobalConnClass  sig=csp ====
int __thiscall IPXGlobalConnClass::_vt09(_DWORD *this, int a2, int a3, _BYTE *a4, int a5, int a6, int a7)
{
  if ( Network::IsBroadcastAddr(a4) ) /*0x54005a*/
    return Network_Get(a2, a3); /*0x54006b*/
  if ( MEMORY[0xA8B238][0] == 3 && this->q0C4 && *(_DWORD *)a4 == *(_DWORD *)((char *)this + 186) ) /*0x540098*/
    return (*(int (__thiscall **)(_DWORD *, int, int, _BYTE *, int, int, _DWORD))(*this + 40))( /*0x5400aa*/
             this,
             a2,
             a3,
             a4,
             (int)this + 190,
             a6,
             0);
  return (*(int (__thiscall **)(_DWORD *, int, int, _BYTE *, _DWORD, int, int))(*this + 40))( /*0x540070*/
           this,
           a2,
           a3,
           a4,
           0,
           a6,
           a7);
}


// ==== 0x005400D0  IPXGlobalConnClass::CheckStatus  this=IPXGlobalConnClass  sig=csp ====
int __thiscall IPXGlobalConnClass::_vt08(_DWORD *this)
{
  int v2; // esi
  _DWORD *v3; // ecx

  v2 = 0; /*0x5400d4*/
  v3 = (_DWORD *)this->IPXGlobalConnClass_field_0x04; /*0x5400d6*/
  if ( (int)v3[14] > 0 ) /*0x5400de*/
  {
    do /*0x540104*/
    {
      if ( (*(_BYTE *)Terrain::GetTileType(v3, v2) & 2) != 0 ) /*0x5400e9*/
        PacketQueue::ReleaseEntry((_DWORD *)this->IPXGlobalConnClass_field_0x04, 0, 0, v2--, 0, 0); /*0x5400f7*/
      v3 = (_DWORD *)this->IPXGlobalConnClass_field_0x04; /*0x5400fd*/
      ++v2; /*0x540100*/
    }
    while ( v2 < v3[14] ); /*0x540104*/
  }
  return 1; /*0x540106*/
}


// ==== 0x00540110  IPXGlobalConnClass::ReceivePacket  this=IPXGlobalConnClass  sig=csp ====
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


// ==== 0x005402B0  ObjectClass::Network_Init_5402B0  this=ObjectClass  sig=csp ====
int __thiscall sub_5402B0(_DWORD *this, int a2)
{
  int result; // eax

  result = unk_AA05A4; /*0x5402b0*/
  if ( unk_AA05A4 ) /*0x5402b7*/
    this->q0C4 = 0; /*0x5402b9*/
  return result; /*0x5402c3*/
}


// ==== 0x005402D0  IPXGlobalConnClass::Send  this=IPXGlobalConnClass  sig=csp ====
int __thiscall IPXGlobalConnClass::_vt06(_DWORD *this)
{
  int v2; // ebx
  int v3; // esi
  _DWORD *v4; // ecx
  int v5; // eax
  _DWORD *v6; // ecx
  int v8; // [esp+Ch] [ebp-414h] BYREF
  int v9; // [esp+10h] [ebp-410h] BYREF
  _BYTE v10[12]; // [esp+14h] [ebp-40Ch] BYREF
  _BYTE v11[1024]; // [esp+20h] [ebp-400h] BYREF

  v2 = 0; /*0x5402db*/
  v3 = 0; /*0x5402dd*/
  v4 = (_DWORD *)this->IPXGlobalConnClass_field_0x04; /*0x5402df*/
  if ( (int)v4[10] > 0 ) /*0x5402e7*/
  {
    do /*0x540332*/
    {
      v5 = *(_DWORD *)Terrain::GetTileIndex(v4, v3); /*0x5402ef*/
      if ( (v5 & 4) != 0 && (v5 & 2) == 0 ) /*0x5402f7*/
      {
        Waypoint::InitInvalid(v10); /*0x5402fd*/
        v6 = (_DWORD *)this->IPXGlobalConnClass_field_0x04; /*0x54030e*/
        v8 = 12; /*0x54031c*/
        PacketQueue::ExtractEntry(v6, v11, &v9, v3--, v10, &v8, 0); /*0x540324*/
        ++v2; /*0x54032a*/
      }
      v4 = (_DWORD *)this->IPXGlobalConnClass_field_0x04; /*0x54032b*/
      ++v3; /*0x54032e*/
    }
    while ( v3 < v4[10] ); /*0x540332*/
  }
  return v2; /*0x540334*/
}


// ==== 0x00540340  IPXGlobalConnClass::SendPacket  this=IPXGlobalConnClass  sig=csp ====
int __thiscall IPXGlobalConnClass::_vt16(_DWORD *this, int a2, __int16 a3)
{
  _DWORD *v4; // ecx
  int v5; // ebp
  int v6; // esi
  int TileIndex; // eax
  int v8; // edi
  _DWORD *v9; // ecx
  int v11; // [esp+Ch] [ebp-414h] BYREF
  int v12; // [esp+10h] [ebp-410h] BYREF
  _BYTE v13[12]; // [esp+14h] [ebp-40Ch] BYREF
  _BYTE v14[1024]; // [esp+20h] [ebp-400h] BYREF

  v4 = (_DWORD *)this->IPXGlobalConnClass_field_0x04; /*0x54034b*/
  v5 = 0; /*0x54034e*/
  v6 = 0; /*0x540350*/
  if ( (int)v4[10] <= 0 ) /*0x540357*/
    return 0; /*0x5403de*/
  do /*0x5403cd*/
  {
    TileIndex = Terrain::GetTileIndex(v4, v6); /*0x54035f*/
    v8 = TileIndex; /*0x540364*/
    if ( (*(_BYTE *)TileIndex & 2) == 0 /*0x540392*/
      && *(_DWORD *)(TileIndex + 24)
      && NetworkID::Compare(*(_DWORD *)(TileIndex + 28), a2)
      && *(_WORD *)(v8 + 32) == a3 )
    {
      Waypoint::InitInvalid(v13); /*0x540398*/
      v9 = (_DWORD *)this->IPXGlobalConnClass_field_0x04; /*0x5403b3*/
      v11 = 12; /*0x5403b7*/
      PacketQueue::ExtractEntry(v9, v14, &v12, v6--, v13, &v11, 0); /*0x5403bf*/
      ++v5; /*0x5403c5*/
    }
    v4 = (_DWORD *)this->IPXGlobalConnClass_field_0x04; /*0x5403c6*/
    ++v6; /*0x5403c9*/
  }
  while ( v6 < v4[10] ); /*0x5403cd*/
  return v5; /*0x5403d2*/
}


// ==== 0x005403F0  IPXGlobalConnClass::SetAddress  this=IPXGlobalConnClass  sig=csp ====
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


// ==== 0x00540610  IPXGlobalConnClass::Release  this=IPXGlobalConnClass  sig=csp ====
int __thiscall IPXGlobalConnClass::Release(void *this, const void *a1, AnimClass *aP2, int aP3, char aP4)
{
  return ConnectionClass::sendAck((int)this, (AnimClass *)a1, aP2, (AnimClass *)aP3, (AnimClass *)aP4); /*0x540629*/
}


// ==== 0x00540630  IPXGlobalConnClass::ddtor  this=IPXGlobalConnClass  sig=csp ====
int __thiscall IPXGlobalConnClass::_vt03(_DWORD *this, int a2, int a3)
{
  return ConnectionClass::receivePacket(this, a2, a3); /*0x54063f*/
}


// ==== 0x00540650  IPXGlobalConnClass::Connect  this=IPXGlobalConnClass  sig=csp ====
int __thiscall IPXGlobalConnClass::_vt04(_DWORD *this, void *a2, signed int *a3)
{
  return ConnectionClass::processTileUpdate(this, a2, a3); /*0x54065f*/
}


// ==== 0x00540670  IPXGlobalConnClass::QueryInterface  this=IPXGlobalConnClass  sig=csp ====
IPXGlobalConnClass *__thiscall IPXGlobalConnClass::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 52); /*0x540673*/
  *Block = &vt_IPXGlobalConnClass; /*0x540679*/
  if ( v3 ) /*0x540681*/
  {
    __3_YAXPAX_Z(v3); /*0x540684*/
    *(Block + 52) = 0; /*0x54068c*/
  }
  if ( *(Block + 51) ) /*0x540696*/
  {
    __3_YAXPAX_Z((void *)*(Block + 51)); /*0x5406a1*/
    *(Block + 51) = 0; /*0x5406a9*/
  }
  *Block = &vt_IPXConnClass; /*0x5406b5*/
  ConnectionClass::dtor(Block); /*0x5406bb*/
  if ( (a2 & 1) != 0 ) /*0x5406c5*/
    __3_YAXPAX_Z(Block); /*0x5406c8*/
  return (IPXGlobalConnClass *)Block; /*0x5406d2*/
}


// ==== 0x005406E0  sub_5406E0  this=-  sig=ida-proto ====
void sub_5406E0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5406ec*/
  unk_AA0650 = Math::Sqrt(v0 + v0); /*0x5406fe*/
}


// ==== 0x00540710  sub_540710  this=-  sig=ida-proto ====
void sub_540710()
{
  unk_AA06A0 = unk_AA0650 / 60.0; /*0x54071c*/
}


// ==== 0x00540730  sub_540730  this=-  sig=ida-proto ====
void sub_540730()
{
  unk_AA0688 = 1.0 / unk_AA06A0; /*0x54073c*/
}


// ==== 0x00540750  sub_540750  this=-  sig=ida-proto ====
void sub_540750()
{
  unk_AA0680 = 0.0174532925199433 * 45.0; /*0x54075c*/
}


// ==== 0x00540770  sub_540770  this=-  sig=ida-proto ====
void sub_540770()
{
  unk_AA0658 = 0.0174532925199433 * 60.0; /*0x54077c*/
}


// ==== 0x00540790  sub_540790  this=-  sig=ida-proto ====
void sub_540790()
{
  unk_AA0630 = 0.0174532925199433 * 90.0; /*0x54079c*/
}


// ==== 0x005407B0  sub_5407B0  this=-  sig=ida-proto ====
__int64 sub_5407B0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(unk_AA0630 - unk_AA0658); /*0x5407c2*/
  result = Math::RoundToInt(v0 * unk_AA0650 * 0.5); /*0x5407d6*/
  unk_AA06A8 = result; /*0x5407db*/
  return result; /*0x5407e0*/
}


// ==== 0x005407F0  sub_5407F0  this=-  sig=ida-proto ====
void sub_5407F0()
{
  unk_AA0660 = Math::ArcTan((double)unk_AA06A8 * 0.00390625); /*0x540807*/
}


// ==== 0x00540820  sub_540820  this=-  sig=ida-proto ====
void sub_540820()
{
  unk_AA0678 = Math::ArcTan((double)(2 * unk_AA06A8) / unk_AA0650); /*0x540842*/
}


// ==== 0x00540850  sub_540850  this=-  sig=ida-proto ====
__int64 sub_540850()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * unk_AA06A8) + 0.5); /*0x54086b*/
  unk_AA069C = result; /*0x540870*/
  return result; /*0x540876*/
}


// ==== 0x00540880  sub_540880  this=-  sig=ida-proto ====
int sub_540880()
{
  unk_AA0648 = 0; /*0x540882*/
  unk_AA064A = 0; /*0x540888*/
  return 0; /*0x54088e*/
}


// ==== 0x00540890  sub_540890  this=-  sig=ida-proto ====
int sub_540890()
{
  unk_AA0668 = 0; /*0x540892*/
  unk_AA066C = 0; /*0x540897*/
  unk_AA0670 = 0; /*0x54089c*/
  return 0; /*0x5408a1*/
}


// ==== 0x005408B0  sub_5408B0  this=-  sig=ida-proto ====
int sub_5408B0()
{
  unk_AA0698 = 0; /*0x5408b5*/
  unk_AA0690 = 128; /*0x5408bf*/
  unk_AA0694 = 128; /*0x5408c4*/
  return 128; /*0x5408c9*/
}


// ==== 0x005408D0  sub_5408D0  this=-  sig=ida-proto ====
int sub_5408D0()
{
  unk_AA0638 = 0; /*0x5408d2*/
  unk_AA063C = 0; /*0x5408d7*/
  unk_AA0640 = 0; /*0x5408dc*/
  unk_AA0644 = 0; /*0x5408e1*/
  return 0; /*0x5408e6*/
}


// ==== 0x005408F0  IPXManagerClass::method_5408F0  this=IPXManagerClass  sig=csp ====
char *__thiscall sub_5408F0(char *this, int a2, int a3, int a4, int a5, __int16 a6, __int16 a7)
{
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  __int16 v10; // cx

  *(_DWORD *)this = &vt_IPXManagerClass; /*0x5408f7*/
  if ( MEMORY[0x887628] ) /*0x540905*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x887628])(MEMORY[0x887628], 1); /*0x54090b*/
    MEMORY[0x887628] = 0; /*0x54090d*/
  }
  v8 = __2_YAPAXI_Z(0x3F310u); /*0x540918*/
  if ( v8 ) /*0x540922*/
    v9 = IPXInterfaceClass::Construct(v8); /*0x540926*/
  else
    v9 = 0; /*0x54092d*/
  MEMORY[0x887628] = (int)v9; /*0x540931*/
  if ( WinsockInterface::Init(v9) ) /*0x540936*/
    this->Initialized = 1; /*0x54093f*/
  else
    this->Initialized = 0; /*0x540945*/
  if ( MEMORY[0x887628] ) /*0x540950*/
    (**(void (__thiscall ***)(int, int))MEMORY[0x887628])(MEMORY[0x887628], 1); /*0x540956*/
  MEMORY[0x887628] = 0; /*0x540960*/
  this->q008 = a2; /*0x540966*/
  this->q030 = a4; /*0x540969*/
  this->tail_6 = a2; /*0x540970*/
  this->Active = a5; /*0x54097c*/
  this->q007 = a5; /*0x54097f*/
  this->q010 = a7; /*0x540982*/
  LOBYTE(v10) = HIBYTE(a6); /*0x54098d*/
  HIBYTE(v10) = a6; /*0x540992*/
  this->connCount = v10; /*0x540996*/
  this->Active = 0; /*0x54099f*/
  this->Initialized = a3; /*0x5409a2*/
  this->q009 = 0; /*0x5409a5*/
  this->connCount = 0; /*0x5409a8*/
  this->curConnIndex = 0; /*0x5409ab*/
  memset(this + 40, 0, 0x1Cu); /*0x5409ae*/
  this->q048 = 0; /*0x5409b3*/
  this->q0A8 = -1; /*0x5409b6*/
  this->q05C = -1; /*0x5409bc*/
  this->q04C = 0; /*0x5409bf*/
  this->__pad_014 = 0; /*0x5409c2*/
  this->connTable = 0; /*0x5409c5*/
  this->q0A4 = 0; /*0x5409cb*/
  this->q058 = 2; /*0x5409d1*/
  this->q060 = 60; /*0x5409d8*/
  return this; /*0x5409e1*/
}


// ==== 0x005409F0  IPXManagerClass::processPacket  this=IPXManagerClass  sig=csp ====
int __thiscall sub_5409F0(char *this)
{
  char v2; // al
  void (__thiscall ***v3)(_DWORD, int); // ecx
  void (__thiscall ***v4)(_DWORD, int); // ecx
  void (__thiscall ***v5)(_DWORD, int); // ecx
  int result; // eax
  int v7; // ebp
  _DWORD *v8; // edi

  v2 = this->Active; /*0x5409f7*/
  *(_DWORD *)this = &vt_IPXManagerClass; /*0x5409fa*/
  if ( v2 ) /*0x540a02*/
  {
    Network_Helper(); /*0x540a04*/
    this->Active = 0; /*0x540a09*/
  }
  v3 = (void (__thiscall ***)(_DWORD, int))this->q048; /*0x540a0c*/
  if ( v3 ) /*0x540a11*/
  {
    (**v3)(v3, 1); /*0x540a17*/
    this->q048 = 0; /*0x540a19*/
  }
  v4 = (void (__thiscall ***)(_DWORD, int))this->q04C; /*0x540a1c*/
  if ( v4 ) /*0x540a21*/
  {
    (**v4)(v4, 1); /*0x540a27*/
    this->q04C = 0; /*0x540a29*/
  }
  v5 = (void (__thiscall ***)(_DWORD, int))this->__pad_014; /*0x540a2c*/
  if ( v5 ) /*0x540a31*/
  {
    (**v5)(v5, 1); /*0x540a37*/
    this->__pad_014 = 0; /*0x540a39*/
  }
  result = this->connCount; /*0x540a3c*/
  v7 = 0; /*0x540a3f*/
  if ( result <= 0 ) /*0x540a43*/
  {
    this->connCount = 0; /*0x540a70*/
    *(_DWORD *)this = &vt_ConnManClass; /*0x540a73*/
  }
  else
  {
    v8 = this + 40; /*0x540a46*/
    do /*0x540a60*/
    {
      if ( *v8 ) /*0x540a49*/
        (**(void (__thiscall ***)(_DWORD, int))*v8)(*v8, 1); /*0x540a53*/
      *v8 = 0; /*0x540a55*/
      result = this->connCount; /*0x540a57*/
      ++v7; /*0x540a5a*/
      ++v8; /*0x540a5b*/
    }
    while ( v7 < result ); /*0x540a60*/
    this->connCount = 0; /*0x540a62*/
    *(_DWORD *)this = &vt_ConnManClass; /*0x540a65*/
  }
  return result; /*0x540a6c*/
}


// ==== 0x00540A80  ObjectClass::Network_Init  this=ObjectClass  sig=csp ====
int __thiscall sub_540A80(int this)
{
  int result; // eax
  void (__thiscall ***v3)(_DWORD, int); // ecx
  void (__thiscall ***v4)(_DWORD, int); // ecx
  void (__thiscall ***v5)(_DWORD, int); // ecx
  int v6; // ebp
  _DWORD *v7; // edi
  int *v8; // eax
  int *v9; // eax
  int *v10; // eax
  int *v11; // eax

  Debug::Log(); /*0x540a89*/
  if ( MEMORY[0x887628] ) /*0x540a9b*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887628] + 20))(MEMORY[0x887628]); /*0x540a9f*/
    (*(void (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887628] + 24))(MEMORY[0x887628]); /*0x540aaa*/
  }
  if ( MEMORY[0xA8B238][0] == 4 ) /*0x540ab4*/
  {
    *(_BYTE *)(this + 4) = 1; /*0x540acf*/
  }
  else
  {
    if ( !*(_BYTE *)(this + 4) ) /*0x540ab6*/
      return 0; /*0x540abf*/
    if ( *(_BYTE *)(this + 5) ) /*0x540ac0*/
    {
      Network_Helper(); /*0x540ac5*/
      *(_BYTE *)(this + 5) = 0; /*0x540aca*/
    }
  }
  v3 = *(void (__thiscall ****)(_DWORD, int))(this + 72); /*0x540ad3*/
  if ( v3 ) /*0x540ad8*/
  {
    (**v3)(v3, 1); /*0x540ade*/
    *(_DWORD *)(this + 72) = 0; /*0x540ae0*/
  }
  v4 = *(void (__thiscall ****)(_DWORD, int))(this + 76); /*0x540ae3*/
  if ( v4 ) /*0x540ae8*/
  {
    (**v4)(v4, 1); /*0x540aee*/
    *(_DWORD *)(this + 76) = 0; /*0x540af0*/
  }
  v5 = *(void (__thiscall ****)(_DWORD, int))(this + 80); /*0x540af3*/
  if ( v5 ) /*0x540af8*/
  {
    (**v5)(v5, 1); /*0x540afe*/
    *(_DWORD *)(this + 80) = 0; /*0x540b00*/
  }
  v6 = 0; /*0x540b07*/
  if ( *(int *)(this + 68) > 0 ) /*0x540b0b*/
  {
    v7 = (_DWORD *)(this + 40); /*0x540b0e*/
    do /*0x540b28*/
    {
      if ( *v7 ) /*0x540b11*/
        (**(void (__thiscall ***)(_DWORD, int))*v7)(*v7, 1); /*0x540b1b*/
      *v7 = 0; /*0x540b1d*/
      ++v6; /*0x540b22*/
      ++v7; /*0x540b23*/
    }
    while ( v6 < *(_DWORD *)(this + 68) ); /*0x540b28*/
  }
  *(_DWORD *)(this + 68) = 0; /*0x540b30*/
  v8 = (int *)__2_YAPAXI_Z(0xDCu); /*0x540b33*/
  if ( v8 ) /*0x540b3e*/
    v9 = Network_Init_53FA90( /*0x540b58*/
           v8,
           *(_DWORD *)(this + 12),
           2 * *(_DWORD *)(this + 12),
           *(_DWORD *)(this + 8),
           *(_WORD *)(this + 32),
           4662);
  else
    v9 = 0; /*0x540b5f*/
  *(_DWORD *)(this + 72) = v9; /*0x540b63*/
  if ( !v9 ) /*0x540b66*/
    return 0; /*0x540b69*/
  (*(void (__thiscall **)(int *))(*v9 + 4))(v9); /*0x540b71*/
  *(_DWORD *)(*(_DWORD *)(this + 72) + 40) = *(_DWORD *)(this + 88); /*0x540b7f*/
  *(_DWORD *)(*(_DWORD *)(this + 72) + 44) = *(_DWORD *)(this + 92); /*0x540b88*/
  *(_DWORD *)(*(_DWORD *)(this + 72) + 48) = *(_DWORD *)(this + 96); /*0x540b91*/
  v10 = (int *)__2_YAPAXI_Z(0xDCu); /*0x540b94*/
  if ( v10 ) /*0x540b9e*/
    v11 = Network_Init_53FA90( /*0x540bb8*/
            v10,
            *(_DWORD *)(this + 28),
            2 * *(_DWORD *)(this + 28),
            *(_DWORD *)(this + 24),
            *(_WORD *)(this + 32),
            52719);
  else
    v11 = 0; /*0x540bbf*/
  *(_DWORD *)(this + 76) = v11; /*0x540bc3*/
  if ( !v11 ) /*0x540bc6*/
    return 0; /*0x540bc9*/
  (*(void (__thiscall **)(int *))(*v11 + 4))(v11); /*0x540bd1*/
  *(_DWORD *)(*(_DWORD *)(this + 76) + 40) = *(_DWORD *)(this + 88); /*0x540bda*/
  *(_DWORD *)(*(_DWORD *)(this + 76) + 44) = *(_DWORD *)(this + 92); /*0x540be3*/
  *(_DWORD *)(*(_DWORD *)(this + 76) + 48) = *(_DWORD *)(this + 96); /*0x540bec*/
  Network_Init_53F4F0( /*0x540c13*/
    *(_WORD *)(this + 34),
    *(_DWORD *)(this + 36),
    *(_DWORD *)(this + 124),
    *(_DWORD *)(this + 148),
    *(_DWORD *)(this + 128),
    *(_DWORD *)(this + 152),
    *(_DWORD *)(this + 116));
  if ( !MEMORY[0x887628] ) /*0x540c1e*/
    return 0; /*0x540c21*/
  if ( MEMORY[0xA8B238][0] == 4 || (result = Network_Init_53F540()) != 0 ) /*0x540c35*/
  {
    *(_BYTE *)(this + 5) = 1; /*0x540c3a*/
    return 1; /*0x540c3f*/
  }
  return result; /*0x540abb*/
}


// ==== 0x00540C50  ObjectClass::method_540C50  this=ObjectClass  sig=csp ====
int __thiscall sub_540C50(unsigned __int8 *this)
{
  return this->vtable2; /*0x540c55*/
}


// ==== 0x00540C60  IPXManagerClass::SetConnectionParams  this=IPXManagerClass  sig=csp ====
int __thiscall Network::SetConnectionParams(int *this, IUnknown *aP1, int a3, int a4, CellStruct *aP4)
{
  int v6; // ecx
  int *v7; // eax
  int v8; // edx
  int result; // eax

  this->q058 = (int)aP1; /*0x540c75*/
  this->q05C = a3; /*0x540c78*/
  this->q060 = a4; /*0x540c7b*/
  Debug::Log(); /*0x540c7e*/
  Debug::Log(); /*0x540c8e*/
  if ( (_BYTE)aP4 ) /*0x540c9c*/
    (*(void (__thiscall **)(int *, _DWORD, _DWORD, _DWORD))(*this + 56))(this, this->q058, this->q05C, this->q060); /*0x540cae*/
  v6 = 0; /*0x540cb4*/
  if ( this->connCount > 0 ) /*0x540cb8*/
  {
    v7 = this + 10; /*0x540cbb*/
    do /*0x540ce1*/
    {
      v8 = *v7; /*0x540cbe*/
      ++v6; /*0x540cc3*/
      ++v7; /*0x540cc4*/
      *(_DWORD *)(v8 + 40) = this->q058; /*0x540cc7*/
      *(_DWORD *)(*(v7 - 1) + 44) = this->q05C; /*0x540cd0*/
      *(_DWORD *)(*(v7 - 1) + 48) = this->q060; /*0x540cd9*/
    }
    while ( v6 < this->connCount ); /*0x540ce1*/
  }
  result = this->__pad_014; /*0x540ce4*/
  if ( result ) /*0x540ce9*/
  {
    *(_DWORD *)(result + 40) = this->q058; /*0x540cee*/
    result = this->q05C; /*0x540cf4*/
    *(_DWORD *)(this->__pad_014 + 44) = result; /*0x540cf7*/
    *(_DWORD *)(this->__pad_014 + 48) = this->q060; /*0x540d00*/
  }
  return result; /*0x540d03*/
}


// ==== 0x00540D10  IPXManagerClass::SetCameraPosition  this=IPXManagerClass  sig=csp ====
int __thiscall TacticalClass_SetCameraPosition(_DWORD *this, int a2, int a3, int a4)
{
  int result; // eax

  result = this->q048; /*0x540d10*/
  if ( result ) /*0x540d15*/
  {
    *(_DWORD *)(result + 40) = a2; /*0x540d1b*/
    *(_DWORD *)(this->q048 + 44) = a3; /*0x540d25*/
    result = this->q048; /*0x540d28*/
    *(_DWORD *)(result + 48) = a4; /*0x540d2f*/
  }
  return result; /*0x540d32*/
}


// ==== 0x00540D40  IPXManagerClass::createConnection  this=IPXManagerClass  sig=csp ====
_DWORD *__thiscall IPXManagerClass::_vt16(_DWORD *this)
{
  _DWORD *result; // eax

  result = (_DWORD *)this->q048; /*0x540d40*/
  if ( result ) /*0x540d45*/
  {
    this->q064 = result[10]; /*0x540d4a*/
    this->q068 = result[11]; /*0x540d50*/
    result = (_DWORD *)result[12]; /*0x540d53*/
    this->q06C = result; /*0x540d56*/
  }
  return result; /*0x540d59*/
}


// ==== 0x00540D60  IPXManagerClass::destroyConnection  this=IPXManagerClass  sig=csp ====
int __thiscall IPXManagerClass::_vt17(_DWORD *this)
{
  int result; // eax

  result = this->q048; /*0x540d60*/
  if ( result ) /*0x540d65*/
  {
    *(_DWORD *)(result + 40) = this->q064; /*0x540d6a*/
    *(_DWORD *)(this->q048 + 44) = this->q068; /*0x540d73*/
    result = this->q048; /*0x540d76*/
    *(_DWORD *)(result + 48) = this->q06C; /*0x540d7c*/
  }
  return result; /*0x540d7f*/
}


// ==== 0x00540D80  IPXManagerClass::sendPacket  this=IPXManagerClass  sig=csp ====
int __thiscall IPXManagerClass::_vt18(_DWORD *this, int a2, int a3, int a4)
{
  int v4; // eax
  int result; // eax

  v4 = this->q04C; /*0x540d80*/
  if ( v4 ) /*0x540d93*/
  {
    *(_DWORD *)(v4 + 40) = a2; /*0x540d95*/
    *(_DWORD *)(this->q04C + 44) = a3; /*0x540d9b*/
    *(_DWORD *)(this->q04C + 48) = a4; /*0x540da1*/
  }
  result = this->q050; /*0x540da4*/
  if ( result ) /*0x540da9*/
  {
    *(_DWORD *)(result + 40) = a2; /*0x540dab*/
    result = this->q050; /*0x540dae*/
    *(_DWORD *)(result + 44) = a3; /*0x540db1*/
    *(_DWORD *)(this->q050 + 48) = a4; /*0x540db7*/
  }
  return result; /*0x540dba*/
}


// ==== 0x00540DC0  SessionClass::initLAN  this=SessionClass  sig=csp ====
int __thiscall SessionClass::initLAN(int this, int a2, #72 *Source, _DWORD *a4)
{
  void *v6; // eax
  void *v7; // eax
  int v8; // ecx

  if ( !*(_BYTE *)(this + 4) ) /*0x540dc3*/
    return 0; /*0x540dca*/
  if ( *(_DWORD *)(this + 68) == 7 ) /*0x540dd4*/
    return 0; /*0x540dd6*/
  v6 = (void *)__2_YAPAXI_Z(184); /*0x540de1*/
  if ( v6 ) /*0x540deb*/
    v7 = IPXConnClass::constructor( /*0x540e0e*/
           v6,
           *(_DWORD *)(this + 20),
           *(_DWORD *)(this + 20),
           *(_DWORD *)(this + 16),
           *(_WORD *)(this + 32),
           a4,
           a2,
           Source,
           0);
  else
    v7 = 0; /*0x540e15*/
  *(_DWORD *)(this + 4 * *(_DWORD *)(this + 68) + 40) = v7; /*0x540e1a*/
  v8 = *(_DWORD *)(this + 4 * *(_DWORD *)(this + 68) + 40); /*0x540e21*/
  if ( !v8 ) /*0x540e27*/
    return 0; /*0x540e29*/
  (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 4))(v8); /*0x540e31*/
  *(_DWORD *)(*(_DWORD *)(this + 4 * *(_DWORD *)(this + 68) + 40) + 40) = *(_DWORD *)(this + 88); /*0x540e3e*/
  *(_DWORD *)(*(_DWORD *)(this + 4 * *(_DWORD *)(this + 68) + 40) + 44) = *(_DWORD *)(this + 92); /*0x540e4b*/
  *(_DWORD *)(*(_DWORD *)(this + 4 * (*(_DWORD *)(this + 68))++ + 40) + 48) = *(_DWORD *)(this + 96); /*0x540e58*/
  return 1; /*0x540dcc*/
}


// ==== 0x00540E70  SessionClass::initInternet  this=SessionClass  sig=csp ====
int __thiscall sub_540E70(int this)
{
  int result; // eax
  void *v3; // ebp
  int v4; // ebx
  int v5; // edi
  char *v6; // eax

  if ( !*(_BYTE *)(this + 4) ) /*0x540e73*/
    return 0; /*0x540e7a*/
  v3 = __2_YAPAXI_Z(0xB8u); /*0x540e89*/
  if ( v3 ) /*0x540e90*/
  {
    v4 = MEMORY[0xA8DA78]; /*0x540e93*/
    v5 = *(_DWORD *)(this + 20); /*0x540e9a*/
    v6 = CharToWideString(aMulticast); /*0x540ea4*/
    result = (int)IPXConnClass::constructor( /*0x540ebf*/
                    v3,
                    v5,
                    v5,
                    *(_DWORD *)(this + 16),
                    *(_WORD *)(this + 32),
                    (_DWORD *)(*(_DWORD *)v4 + 40),
                    -1,
                    (wchar_t *)v6,
                    0);
  }
  else
  {
    result = 0; /*0x540ec8*/
  }
  *(_DWORD *)(this + 80) = result; /*0x540ecc*/
  if ( result ) /*0x540ed0*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)result + 4))(result); /*0x540ed8*/
    *(_DWORD *)(*(_DWORD *)(this + 80) + 40) = *(_DWORD *)(this + 88); /*0x540ee1*/
    *(_DWORD *)(*(_DWORD *)(this + 80) + 44) = *(_DWORD *)(this + 92); /*0x540eea*/
    *(_DWORD *)(*(_DWORD *)(this + 80) + 48) = *(_DWORD *)(this + 96); /*0x540ef8*/
    return 1; /*0x540ef3*/
  }
  return result; /*0x540e7c*/
}


// ==== 0x00540F00  Network::sendData  this=Network  sig=csp ====
int __thiscall Network::sendData(int this, AnimClass *aP1)
{
  int v3; // ecx
  int v4; // esi
  int i; // eax
  void (__thiscall ***v7)(_DWORD, int); // ecx
  int v8; // ecx
  _DWORD *v9; // eax
  int v10; // ecx
  int v11; // eax

  if ( !*(_BYTE *)(this + 4) ) /*0x540f05*/
    return 0; /*0x540f05*/
  v3 = *(_DWORD *)(this + 68); /*0x540f0c*/
  if ( !v3 ) /*0x540f11*/
    return 0; /*0x540f11*/
  v4 = 0; /*0x540f13*/
  if ( v3 <= 0 ) /*0x540f17*/
    return 0; /*0x540f2f*/
  for ( i = this + 40; *(AnimClass **)(*(_DWORD *)i + 100) != aP1; i += 4 ) /*0x540f1d*/
  {
    if ( ++v4 >= v3 ) /*0x540f2d*/
      return 0; /*0x540f2d*/
  }
  v7 = *(void (__thiscall ****)(_DWORD, int))(this + 4 * v4 + 40); /*0x540f37*/
  if ( v7 ) /*0x540f41*/
    (**v7)(v7, 1); /*0x540f47*/
  v8 = v4; /*0x540f4c*/
  if ( v4 < *(_DWORD *)(this + 68) - 1 ) /*0x540f51*/
  {
    v9 = (_DWORD *)(this + 4 * v4 + 40); /*0x540f53*/
    do /*0x540f64*/
    {
      ++v8; /*0x540f58*/
      *v9 = v9[1]; /*0x540f59*/
      ++v9; /*0x540f5e*/
    }
    while ( v8 < *(_DWORD *)(this + 68) - 1 ); /*0x540f64*/
  }
  v10 = *(_DWORD *)(this + 84); /*0x540f69*/
  v11 = *(_DWORD *)(this + 68) - 1; /*0x540f6d*/
  *(_DWORD *)(this + 68) = v11; /*0x540f6f*/
  if ( v10 >= v11 ) /*0x540f74*/
    *(_DWORD *)(this + 84) = 0; /*0x540f76*/
  return 1; /*0x540f2f*/
}


// ==== 0x00540F90  IPXManagerClass::GetSendCount  this=IPXManagerClass  sig=csp ====
int __thiscall Network_GetSendCount(_DWORD *this)
{
  return this->connCount; /*0x540f93*/
}


// ==== 0x00540FA0  IPXManagerClass::GetConnectionSpeed  this=IPXManagerClass  sig=csp ====
int __thiscall Network::GetConnectionSpeed(_DWORD *this, CellStruct *aP1)
{
  if ( (int)aP1 < 0 || (int)aP1 >= this->connCount ) /*0x540fab*/
    return -1; /*0x540fb7*/
  else
    return *(_DWORD *)(*(this + (_DWORD)aP1 + 10) + 100); /*0x540fb1*/
}


// ==== 0x00540FC0  Network::GetClass  this=Network  sig=csp ====
int __thiscall Network_GetClass(int *this, int a2)
{
  int v2; // esi
  int v3; // eax
  _DWORD *i; // edx

  v2 = this->Network_field_0x44; /*0x540fc2*/
  v3 = 0; /*0x540fc5*/
  if ( v2 <= 0 ) /*0x540fca*/
    return 0; /*0x540fe2*/
  for ( i = this + 10; *(_DWORD *)(*i + 100) != a2; ++i ) /*0x540fd0*/
  {
    if ( ++v3 >= v2 ) /*0x540fe0*/
      return 0; /*0x540fe0*/
  }
  return *(this + v3 + 10) + 104; /*0x540fe2*/
}


// ==== 0x00541000  Network::FindPlayerByID  this=Network  sig=csp ====
int __thiscall Network::FindPlayerByID(int *this, DynamicVector *aP1)
{
  int v2; // esi
  int v3; // eax
  int *i; // edx

  v2 = this->Network_field_0x44; /*0x541002*/
  v3 = 0; /*0x541005*/
  if ( v2 <= 0 ) /*0x54100a*/
    return 0; /*0x541022*/
  for ( i = this + 10; *(DynamicVector **)(*i + 100) != aP1; ++i ) /*0x541010*/
  {
    if ( ++v3 >= v2 ) /*0x541020*/
      return 0; /*0x541020*/
  }
  return *(this + v3 + 10) + 76; /*0x541022*/
}


// ==== 0x00541040  IPXManagerClass::send  this=IPXManagerClass  sig=csp ====
int __thiscall IPXManagerClass::_vt06(int *this, int a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->connCount; /*0x541040*/
  result = 0; /*0x541043*/
  if ( v2 <= 0 ) /*0x541049*/
    return -1; /*0x541061*/
  for ( i = this + 10; *(_DWORD *)(*i + 100) != a2; ++i ) /*0x54104f*/
  {
    if ( ++result >= v2 ) /*0x54105f*/
      return -1; /*0x54105f*/
  }
  return result; /*0x541064*/
}


// ==== 0x00541070  IPXManagerClass::receivePacket  this=IPXManagerClass  sig=csp ====
int __thiscall IPXManagerClass::_vt19(_DWORD *this, int a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *v4; // esi

  v2 = this->connCount; /*0x541070*/
  result = 0; /*0x541074*/
  if ( v2 <= 0 ) /*0x54107d*/
  {
LABEL_5:
    if ( a2 == this->q050 ) /*0x541091*/
    {
      return -4; /*0x541095*/
    }
    else if ( a2 == this->q04C ) /*0x5410a0*/
    {
      return -3; /*0x5410a4*/
    }
    else
    {
      return (a2 != this->q048) - 2; /*0x5410b6*/
    }
  }
  else
  {
    v4 = this + 10; /*0x54107f*/
    while ( *v4 != a2 ) /*0x541084*/
    {
      ++result; /*0x541086*/
      ++v4; /*0x541087*/
      if ( result >= v2 ) /*0x54108c*/
        goto LABEL_5; /*0x54108c*/
    }
  }
  return result; /*0x541093*/
}


// ==== 0x005410F0  Network::SendMessage  this=Network  sig=csp ====
int __thiscall Network_SendMessage(int this, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v8; // edi
  int v9; // edi
  int v10; // ebx

  if ( !*(_BYTE *)(this + 4) || !*(_BYTE *)(this + 5) ) /*0x5410fa*/
    return 0; /*0x541169*/
  v8 = a4; /*0x541107*/
  if ( a4 && (!a5 || Network::IsBroadcastAddr(a5)) ) /*0x541115*/
    v8 = 0; /*0x54111e*/
  v9 = (*(int (__thiscall **)(_DWORD, int, int, int, int, int, int))(**(_DWORD **)(this + 72) + 44))( /*0x54113e*/
         *(_DWORD *)(this + 72),
         a2,
         a3,
         a5,
         v8,
         a6,
         a7);
  if ( !v9 ) /*0x541142*/
  {
    v10 = *(_DWORD *)(this + 160) + 1; /*0x54114a*/
    *(_DWORD *)(this + 160) = v10; /*0x54114b*/
    Debug::Log("Send overflow %d\n", v10); /*0x541159*/
  }
  return v9; /*0x541165*/
}


// ==== 0x00541170  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_541170(int this, int a2, int a3, int a4, int a5)
{
  int v5; // ebx
  int v7; // eax
  int i; // edx
  _DWORD *v10; // ecx
  char v11; // al
  int v12; // edi
  int v13; // edi
  int v14; // [esp+0h] [ebp-1Ch] BYREF
  _DWORD v15[3]; // [esp+10h] [ebp-Ch] BYREF

  HIWORD(v5) = HIWORD(a5); /*0x541174*/
  if ( MEMORY[0xA8DA84] && *(_DWORD *)(*(_DWORD *)MEMORY[0xA8DA78] + 111) == a5 ) /*0x541192*/
    return 0; /*0x541192*/
  v7 = 1; /*0x541194*/
  if ( MEMORY[0xA8DA84] <= 1 ) /*0x54119b*/
    return 0; /*0x54119b*/
  for ( i = MEMORY[0xA8DA78] + 4; *(_DWORD *)(*(_DWORD *)i + 111) != a5; i += 4 ) /*0x54119d*/
  {
    if ( ++v7 >= MEMORY[0xA8DA84] ) /*0x5411ad*/
      return 0; /*0x5411ad*/
  }
  LOWORD(v5) = *((_WORD *)&MEMORY[0xA8E2B2] + v7); /*0x5411be*/
  v10 = (_DWORD *)(*(_DWORD *)(MEMORY[0xA8DA78] + 4 * v7) + 40); /*0x5411c6*/
  v11 = *(_BYTE *)(this + 4); /*0x5411c9*/
  v12 = a4; /*0x5411cc*/
  v15[0] = *v10; /*0x5411d2*/
  v15[1] = v10[1]; /*0x5411d9*/
  v15[2] = v10[2]; /*0x5411e2*/
  if ( !v11 || !*(_BYTE *)(this + 5) ) /*0x5411e8*/
    return 0; /*0x5411af*/
  if ( a4 && (&v14 == (int *)-16 || Network::IsBroadcastAddr(v15)) ) /*0x5411ff*/
    v12 = 0; /*0x541208*/
  v13 = (*(int (__thiscall **)(_DWORD, int, int, _DWORD *, int, int, _DWORD))(**(_DWORD **)(this + 72) + 44))( /*0x541225*/
          *(_DWORD *)(this + 72),
          a2,
          a3,
          v15,
          v12,
          v5,
          0);
  if ( !v13 ) /*0x541229*/
  {
    ++*(_DWORD *)(this + 160); /*0x541232*/
    Debug::Log(); /*0x541240*/
  }
  return v13; /*0x5411af*/
}


// ==== 0x00541260  Network::SendToPlayer  this=Network  sig=csp ====
int __thiscall Network_SendToPlayer(int this, int a2, int a3, int a4, wchar_t *String2)
{
  int v6; // esi
  int v8; // ebx
  _DWORD *v9; // edx
  char v10; // al
  int v11; // esi
  int v12; // ebx
  int v13; // [esp+0h] [ebp-18h] BYREF
  _DWORD v14[3]; // [esp+Ch] [ebp-Ch] BYREF

  if ( MEMORY[0xA8DA84] && !_wcsicmp(*(const wchar_t **)MEMORY[0xA8DA78], String2) ) /*0x54127e*/
    return 0; /*0x54127e*/
  v6 = 1; /*0x54128f*/
  if ( MEMORY[0xA8DA84] <= 1 ) /*0x541296*/
    return 0; /*0x541296*/
  while ( _wcsicmp(*(const wchar_t **)(MEMORY[0xA8DA78] + 4 * v6), String2) ) /*0x5412ad*/
  {
    if ( ++v6 >= MEMORY[0xA8DA84] ) /*0x5412b7*/
      return 0; /*0x5412b7*/
  }
  v8 = a4; /*0x5412ca*/
  v9 = *(_DWORD **)(MEMORY[0xA8DA78] + 4 * v6); /*0x5412ce*/
  LOWORD(v6) = *((_WORD *)&MEMORY[0xA8E2B2] + v6); /*0x5412d1*/
  v9 += 10; /*0x5412d9*/
  v14[0] = *v9; /*0x5412de*/
  v10 = *(_BYTE *)(this + 4); /*0x5412e2*/
  v14[1] = v9[1]; /*0x5412e8*/
  v14[2] = v9[2]; /*0x5412f1*/
  if ( !v10 || !*(_BYTE *)(this + 5) ) /*0x5412f7*/
    return 0; /*0x5412b9*/
  if ( a4 && (&v13 == (int *)-12 || Network::IsBroadcastAddr(v14)) ) /*0x54130e*/
    v8 = 0; /*0x541317*/
  v11 = (*(int (__thiscall **)(_DWORD, int, int, _DWORD *, int, int, _DWORD))(**(_DWORD **)(this + 72) + 44))( /*0x541334*/
          *(_DWORD *)(this + 72),
          a2,
          a3,
          v14,
          v8,
          v6,
          0);
  if ( !v11 ) /*0x541338*/
  {
    v12 = *(_DWORD *)(this + 160) + 1; /*0x541340*/
    *(_DWORD *)(this + 160) = v12; /*0x541341*/
    Debug::Log("Send overflow %d\n", v12); /*0x54134f*/
  }
  return v11; /*0x5412b9*/
}


// ==== 0x00541370  Network::Send  this=Network  sig=csp ====
int __thiscall Network::Send(int this, int a2, int a3, TechnoTypeClass *aP3, int a5)
{
  if ( *(_BYTE *)(this + 4) && *(_BYTE *)(this + 5) ) /*0x541377*/
    return (*(int (__thiscall **)(_DWORD, int, int, TechnoTypeClass *, int))(**(_DWORD **)(this + 72) + 52))( /*0x541397*/
             *(_DWORD *)(this + 72),
             a2,
             a3,
             aP3,
             a5);
  else
    return 0; /*0x54139d*/
}


// ==== 0x005413B0  Network::SendPacketThunk  this=Network  sig=csp ====
int __thiscall Network::SendPacketThunk(int this, int a2, int a3, int a4, int a5, int a6, int a7)
{
  if ( *(_BYTE *)(this + 4) && *(_BYTE *)(this + 5) ) /*0x5413b7*/
    return (*(int (__thiscall **)(_DWORD, int, int, int, int, int, int))(**(_DWORD **)(this + 72) + 56))( /*0x5413e1*/
             *(_DWORD *)(this + 72),
             a2,
             a3,
             a4,
             a5,
             a6,
             a7);
  else
    return 0; /*0x5413e7*/
}


// ==== 0x005413F0  Network::receiveData  this=Network  sig=csp ====
char __thiscall sub_5413F0(int this, int a2)
{
  char result; // al

  result = *(_BYTE *)(this + 4); /*0x5413f0*/
  if ( result ) /*0x5413f5*/
  {
    result = *(_BYTE *)(this + 5); /*0x5413f7*/
    if ( result ) /*0x5413fc*/
      return (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 72) + 60))(*(_DWORD *)(this + 72), a2); /*0x541408*/
  }
  return result; /*0x54140b*/
}


// ==== 0x00541410  Network::SendPacket  this=Network  sig=csp ====
int __thiscall Network_SendPacket(int this, int a2, int a3, unsigned __int8 a4)
{
  int v5; // ecx
  int v6; // edi

  if ( !*(_BYTE *)(this + 4) ) /*0x541413*/
    return 0; /*0x541413*/
  if ( !*(_BYTE *)(this + 5) ) /*0x54141a*/
    return 0; /*0x54141a*/
  v5 = *(_DWORD *)(this + 76); /*0x541421*/
  if ( !v5 ) /*0x541426*/
    return 0; /*0x541475*/
  v6 = (*(int (__stdcall **)(int, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v5 + 44))(a2, a3, v5 + 76, a4, 0, 0); /*0x54144b*/
  if ( !v6 ) /*0x54144f*/
  {
    ++*(_DWORD *)(this + 160); /*0x541458*/
    Debug::Log(); /*0x541466*/
  }
  return v6; /*0x541471*/
}


// ==== 0x00541480  Network::SendPacketThunk2  this=Network  sig=csp ====
int __thiscall Network::SendPacketThunk2(int this, int a2, int a3, int a4, int a5)
{
  if ( *(_BYTE *)(this + 4) && *(_BYTE *)(this + 5) ) /*0x541487*/
    return (*(int (__thiscall **)(_DWORD, int, int, int, int))(**(_DWORD **)(this + 76) + 52))( /*0x5414a7*/
             *(_DWORD *)(this + 76),
             a2,
             a3,
             a4,
             a5);
  else
    return 0; /*0x5414ad*/
}


// ==== 0x005414C0  IPXManagerClass::release  this=IPXManagerClass  sig=csp ====
int __thiscall IPXManagerClass::_vt02(char *this, int a2, int a3, int a4, int a5)
{
  int v6; // ecx
  _DWORD *v7; // ecx
  int v9; // eax
  char *v10; // edx
  int v11; // edi
  _DWORD *v12; // ebx
  int v13; // eax
  _DWORD *v14; // ecx

  if ( !this->Initialized ) /*0x5414c6*/
    return 0; /*0x5414c6*/
  if ( !this->Active ) /*0x5414d1*/
    return 0; /*0x5414d1*/
  v6 = this->connCount; /*0x5414dc*/
  if ( !v6 ) /*0x5414e1*/
    return 0; /*0x5414e1*/
  if ( a5 != -1 ) /*0x5414ee*/
  {
    v13 = (*(int (__thiscall **)(char *, int))(this->q060)(this, a5); /*0x54159b*/
    if ( v13 != -1 ) /*0x5415a1*/
    {
      v14 = (_DWORD *)*((_DWORD *)this + v13 + 10); /*0x5415a3*/
      if ( *(_DWORD *)(v14[1] + 40) != *(_DWORD *)(v14[1] + 4) ) /*0x5415b2*/
      {
        (*(void (__thiscall **)(_DWORD *, int, int, int, _DWORD))(*v14 + 8))(v14, a2, a3, a4, 0); /*0x5415c7*/
        return 1; /*0x5415d3*/
      }
    }
    goto LABEL_20; /*0x5415b2*/
  }
  if ( MEMORY[0xA8B238][0] == 4 && MEMORY[0xA8DBA0] ) /*0x541504*/
  {
    v7 = (_DWORD *)this->__pad_014; /*0x541506*/
    if ( *(_DWORD *)(v7[1] + 40) < *(_DWORD *)(v7[1] + 4) ) /*0x541514*/
      return (*(int (__thiscall **)(_DWORD *, int, int, int, int))(*v7 + 8))(v7, a2, a3, a4, 255); /*0x541537*/
    goto LABEL_20; /*0x541514*/
  }
  v9 = 0; /*0x54153a*/
  if ( v6 > 0 ) /*0x54153e*/
  {
    v10 = this + 40; /*0x541540*/
    while ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v10 + 4) + 40) != *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v10 + 4) + 4) ) /*0x541550*/
    {
      ++v9; /*0x541556*/
      v10 += 4; /*0x541557*/
      if ( v9 >= v6 ) /*0x54155c*/
        goto LABEL_13; /*0x54155c*/
    }
LABEL_20:
    ++this->connTable; /*0x5415d6*/
    return 0; /*0x5415df*/
  }
LABEL_13:
  v11 = 0; /*0x54155e*/
  if ( v6 > 0 ) /*0x541562*/
  {
    v12 = this + 40; /*0x541568*/
    do /*0x541588*/
    {
      (*(void (__thiscall **)(_DWORD, int, int, int, _DWORD))(*(_DWORD *)*v12 + 8))(*v12, a2, a3, a4, 0); /*0x54157c*/
      ++v11; /*0x541582*/
      ++v12; /*0x541583*/
    }
    while ( v11 < this->connCount ); /*0x541588*/
  }
  return 1; /*0x541533*/
}


// ==== 0x005415F0  IPXManagerClass::ddtor  this=IPXManagerClass  sig=csp ====
int __thiscall IPXManagerClass::_vt03(int this, int a2, int a3, _DWORD *a4)
{
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  int v9; // edx
  int v10; // edi
  int v11; // edx
  int v13; // [esp+10h] [ebp-4h]

  if ( !*(_BYTE *)(this + 4) ) /*0x5415f7*/
    return 0; /*0x5415f7*/
  if ( !*(_BYTE *)(this + 5) ) /*0x5415fe*/
    return 0; /*0x5415fe*/
  v5 = *(_DWORD *)(this + 68); /*0x541605*/
  if ( !v5 ) /*0x54160c*/
    return 0; /*0x54160c*/
  if ( *(_DWORD *)(this + 84) >= v5 ) /*0x541611*/
    *(_DWORD *)(this + 84) = 0; /*0x541613*/
  v13 = 0; /*0x541618*/
  if ( v5 <= 0 ) /*0x54161c*/
    return 0; /*0x541661*/
  while ( 1 ) /*0x54162b*/
  {
    v6 = this->connTable[this->curConnIndex]; /*0x54162b*/
    v7 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v6 + 16))(v6, a2, a3); /*0x541631*/
    v8 = *(_DWORD *)(this + 84); /*0x541634*/
    v9 = this->connTable[v8++]; /*0x541637*/
    v10 = *(_DWORD *)(v9 + 100); /*0x54163c*/
    v11 = *(_DWORD *)(this + 68); /*0x54163f*/
    *(_DWORD *)(this + 84) = v8; /*0x541644*/
    if ( v8 >= v11 ) /*0x541647*/
      *(_DWORD *)(this + 84) = 0; /*0x541649*/
    if ( v7 ) /*0x541652*/
      break; /*0x541652*/
    if ( ++v13 >= v11 ) /*0x54165f*/
      return 0; /*0x54165f*/
  }
  *a4 = v10; /*0x54166f*/
  return 1; /*0x541661*/
}


// ==== 0x00541680  Network_Recv  this=IPXManagerClass  sig=csp ====
char __stdcall Network_Recv(IPXManagerClass *aP0, IPXManagerClass *aP1, int a3, int a4, IPXManagerClass *aP4)
{
  IPXManagerClass *v5; // edi
  int v6; // edx
  IPXManagerClass *v8; // ebx
  IPXManagerClass aP1a; // [esp+0h] [ebp-1Ch] BYREF
  IPXManagerClass v10; // [esp+8h] [ebp-14h] BYREF
  char v11[12]; // [esp+10h] [ebp-Ch] BYREF

  if ( (unk_AA0674 & 1) == 0 ) /*0x54168a*/
  {
    unk_AA0674 |= 1u; /*0x541696*/
    unk_AA06B0 = htonl((IUnknown *)0x7F000001); /*0x5416a1*/
  }
  if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] != 4 || !HouseClass_Player.__pad_5568[18668] || !dword_B052EC ) /*0x5416ca*/
    return 0; /*0x5416ca*/
  if ( *(unsigned __int16 *)&aP0[1].Initialized == *(_DWORD *)&stru_830620.__pad_579C[49536] ) /*0x5416e8*/
  {
    *(_WORD *)&aP0[1].Initialized = (_WORD)aP4; /*0x5416f2*/
    aP0[1].Socket = *(_DWORD *)(a4 + 4); /*0x541701*/
    Network::FormatAddress((unsigned __int16 *)a4, 0); /*0x541704*/
    Debug::Log(); /*0x54170f*/
    LOWORD(v6) = *(_WORD *)&stru_830620.__pad_579C[49536]; /*0x541714*/
    (*(void (__thiscall **)(_DWORD, IPXManagerClass *, int, void *, int, _DWORD, int, int))(**(_DWORD **)&stru_87C374.__pad_579C[23320] /*0x54173c*/
                                                                                          + 12))(
      *(_DWORD *)&stru_87C374.__pad_579C[23320],
      aP1,
      a3,
      &unk_AA06AC,
      12,
      0,
      1,
      v6);
    return 1; /*0x541746*/
  }
  if ( !*(_WORD *)&aP0[1].Initialized ) /*0x5416da*/
    return 0; /*0x54174c*/
  Network::CopyAddress_Small((char *)(**(_DWORD **)&HouseClass_Player.__pad_5568[18372] + 40), &aP1a); /*0x54175e*/
  v8 = aP0 + 1; /*0x541766*/
  if ( aP1a.Socket == aP0[1].Socket && *(_WORD *)&HouseClass_Player.__pad_5568[20478] == *(_WORD *)&aP0[1].Initialized ) /*0x54177e*/
  {
    Debug::Log(); /*0x541785*/
    return 0; /*0x541794*/
  }
  if ( !v8->Socket ) /*0x54179a*/
    return 0; /*0x54179a*/
  LOWORD(v5) = *(_WORD *)&aP0[1].Initialized; /*0x54179d*/
  Waypoint::InitInvalid(v11); /*0x5417a5*/
  v10.Socket = v8->Socket; /*0x5417b5*/
  Struct::Copy6Bytes(v11, &v10); /*0x5417b9*/
  Network::SetPort(v11, v5); /*0x5417c3*/
  *(_WORD *)&aP0[1].Initialized = 0; /*0x5417c8*/
  v8->Socket = 0; /*0x5417d4*/
  Network::FormatAddress((unsigned __int16 *)v11, 0); /*0x5417da*/
  Debug::Log(); /*0x5417e5*/
  (*(void (__thiscall **)(_DWORD, IPXManagerClass *, int, char *, int, _DWORD, int, _WORD))(**(_DWORD **)&stru_87C374.__pad_579C[23320] /*0x54180b*/
                                                                                          + 12))(
    *(_DWORD *)&stru_87C374.__pad_579C[23320],
    aP1,
    a3,
    v11,
    12,
    0,
    1,
    (_WORD)v5);
  return 1; /*0x541743*/
}


// ==== 0x00541820  IPXManagerClass::ReceiveLoop  this=IPXManagerClass  sig=csp ====
void *__thiscall Network::ReceiveLoop(_DWORD *this)
{
  unsigned int v2; // ebx
  int v3; // edx
  int v4; // ecx
  int v5; // edi
  bool v6; // zf
  char *v7; // ebp
  int v8; // ecx
  const char *v9; // eax
  int v10; // edi
  char *v11; // eax
  __int16 v12; // ax
  __int16 v13; // bp
  int v14; // edx
  _DWORD *v15; // ecx
  _DWORD *v16; // eax
  int PlayerName; // eax
  int ebp27; // ebp
  TechnoTypeClass *v18; // ebx
  char *v20; // eax
  _DWORD *v21; // ecx
  int v22; // ecx
  _DWORD *v23; // edx
  _WORD *v24; // ecx
  unsigned __int8 v25; // cl
  int v26; // ebp
  TechnoTypeClass *v29; // edi
  char LinkedIndex; // al
  int eax67; // eax
  int v30; // edi
  int v31; // ecx
  int i; // edi
  _DWORD *v33; // ecx
  _DWORD *v34; // eax
  _DWORD *v35; // eax
  _DWORD *v36; // ecx
  int v37; // ecx
  int v38; // ebp
  int v39; // ecx
  int v40; // ecx
  TechnoTypeClass *v47; // edi
  void *result; // eax
  IUnknown *v43; // [esp+20h] [ebp-4CCh]
  int v44; // [esp+20h] [ebp-4CCh]
  IUnknown *aP1; // [esp+34h] [ebp-4B8h] BYREF
  DynamicVector aP2; // [esp+38h] [ebp-4B4h] BYREF
  int var488; // [esp+64h] [ebp-488h]
  __int16 v48; // [esp+68h] [ebp-484h]
  _DWORD v49[32]; // [esp+6Ch] [ebp-480h] BYREF
  __int16 v50; // [esp+ECh] [ebp-400h] BYREF
  unsigned __int8 v51[12]; // [esp+EEh] [ebp-3FEh]
  char v52; // [esp+FAh] [ebp-3F2h]
  char v53; // [esp+FCh] [ebp-3F0h]

  aP2.field_10 = (void *)1; /*0x541830*/
  Waypoint::InitInvalid(&aP2); /*0x541838*/
  if ( *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10204] ) /*0x541844*/
  {
    while ( 1 ) /*0x541864*/
    {
      *(_DWORD *)aP2.__pad_14 = 1024; /*0x541864*/
      *(_DWORD *)&aP2.__pad_14[4] = 128; /*0x54186c*/
      aP1 = 0; /*0x541874*/
      v2 = (*(int (__thiscall **)(_DWORD, __int16 *, char *, _DWORD *, char *, IUnknown **))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[10204] /*0x541889*/
                                                                                           + 8))(
             *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10204],
             &v50,
             aP2.__pad_14,
             v49,
             &aP2.__pad_14[4],
             &aP1);
      *(_DWORD *)aP2.__pad_C = v2; /*0x54188d*/
      if ( !v2 ) /*0x541891*/
        goto LABEL_92; /*0x541891*/
      v3 = v49[1]; /*0x54189b*/
      *(_DWORD *)aP2.__pad_0 = v49[0]; /*0x5418a6*/
      v4 = this->q048; /*0x5418aa*/
      this->q023 = &v50; /*0x5418ad*/
      *(_DWORD *)&aP2.field_1[3] = v3; /*0x5418b7*/
      aP2.field_8 = v49[2]; /*0x5418bb*/
      if ( v50 == *(_WORD *)(v4 + 36) ) /*0x5418cb*/
      {
        if ( Network_Recv((int)&v50, (int)&v50, v2, (int)v49, (__int16)aP1) ) /*0x5418ee*/
          goto LABEL_87; /*0x5418f5*/
        if ( (*(int (__thiscall **)(_DWORD, __int16 *, unsigned int, DynamicVector *, IUnknown *))(*(_DWORD *)this->q048 /*0x541913*/
                                                                                                 + 48))(
               this->q048,
               &v50,
               v2,
               &aP2,
               aP1) )
        {
          if ( MEMORY[0xA8B238] == (CellStruct *)4 && MEMORY[0xA8D63C].__pad_BC0[204] ) /*0x541932*/
          {
            v5 = 0; /*0x54193d*/
            v6 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_430[24] == 0; /*0x54193f*/
            if ( *(int *)&MEMORY[0xA8D63C].__pad_430[24] <= 0 ) /*0x541941*/
            {
LABEL_14:
              if ( !v6 ) /*0x541980*/
              {
                Debug::Log(); /*0x54198b*/
                if ( v2 >= 0x10 && v51[0] != 2 && v2 >= 0x3F ) /*0x5419ad*/
                {
                  v8 = *(_DWORD *)(this->q023 + 16); /*0x5419bc*/
                  if ( v8 == 39 || v8 == 41 || v8 == 13 ) /*0x5419cb*/
                  {
                    v9 = (const char *)(this->q023 + 20); /*0x5419d3*/
                    memset(&aP2.field_1C, 0, 16); /*0x5419d6*/
                    var488 = 0; /*0x5419ee*/
                    v48 = 0; /*0x5419f2*/
                    strncpy((char *)&aP2.field_1C, v9, 0x14u); /*0x5419f7*/
                    v10 = 0; /*0x541a04*/
                    if ( *(int *)&MEMORY[0xA8D63C].__pad_430[24] > 0 ) /*0x541a08*/
                    {
                      while ( 1 ) /*0x541a1b*/
                      {
                        v11 = ToWideStringChar(*(char **)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_430[12] + 4 * v10)); /*0x541a1b*/
                        if ( !_strcmpi(v11, (char *)&aP2.field_1C) ) /*0x541a21*/
                          break; /*0x541a21*/
                        if ( ++v10 >= *(int *)&MEMORY[0xA8D63C].__pad_430[24] ) /*0x541a35*/
                          goto LABEL_87; /*0x541a35*/
                      }
                      if ( !NetworkID::Compare( /*0x541a67*/
                              *(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_430[12] + 4 * v10) + 40,
                              (int)&aP2)
                        || *(_WORD *)(*(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_430[12] + 4 * v10) + 40) != (_WORD)aP1 )
                      {
                        Debug::Log(); /*0x541a7d*/
                        v12 = (__int16)aP1; /*0x541a82*/
                        v13 = *(_WORD *)&MEMORY[0xA8D63C].__pad_BC0[2 * v10 + 182]; /*0x541a86*/
                        *(_WORD *)&MEMORY[0xA8D63C].__pad_BC0[2 * v10 + 182] = (_WORD)aP1; /*0x541a91*/
                        Network::reconnect( /*0x541aab*/
                          (int *)&g_NetworkEventQueue,
                          *(DynamicVector **)(*(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_430[12] + 4 * v10) + 111),
                          v12);
                        (*(void (__thiscall **)(_DWORD, DynamicVector *, __int16))(*(_DWORD *)this->q048 + 64))( /*0x541abb*/
                          this->q048,
                          &aP2,
                          v13);
                        v14 = *(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_430[12] + 4 * v10); /*0x541ac7*/
                        LOWORD(v14) = *(_WORD *)(v14 + 40); /*0x541acc*/
                        (*(void (__thiscall **)(_DWORD, DynamicVector *, int))(*(_DWORD *)this->q048 + 64))( /*0x541ad6*/
                          this->q048,
                          &aP2,
                          v14);
                        v15 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_430[12] + 4 * v10) + 40); /*0x541ae5*/
                        *v15 = *(_DWORD *)aP2.__pad_0; /*0x541ae8*/
                        v15[1] = *(_DWORD *)&aP2.field_1[3]; /*0x541aee*/
                        v15[2] = aP2.field_8; /*0x541af5*/
                        Network::SetPort( /*0x541b09*/
                          (_WORD *)(*(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_430[12] + 4 * v10) + 40),
                          (IPXManagerClass *)aP1);
                        NetworkManager::SetPlayerAddress( /*0x541b24*/
                          (int *)&g_NetworkEventQueue,
                          *(DynamicVector **)(*(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_430[12] + 4 * v10) + 111),
                          (DynamicVector *)(*(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_430[12] + 4 * v10) + 40));
                        v16 = (_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_430[4 * GameClass::FindPlayerName(v10) + 36] /*0x541b3f*/
                                       + 40);
                        *v16 = *(_DWORD *)aP2.__pad_0; /*0x541b42*/
                        v16[1] = *(_DWORD *)&aP2.field_1[3]; /*0x541b48*/
                        v16[2] = aP2.field_8; /*0x541b4f*/
                        v43 = aP1; /*0x541b56*/
                        PlayerName = GameClass::FindPlayerName(v10); /*0x541b5d*/
                        Network::SetPort( /*0x541b6c*/
                          (_WORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_430[4 * PlayerName + 36] + 40),
                          (IPXManagerClass *)v43);
                        ebp27 = 0; /*0x541b74*/
                        if ( (int)this->connCount > 0 ) /*0x541b78*/
                        {
                          v18 = (TechnoTypeClass *)(this + 10); /*0x541b7a*/
                          while ( 1 ) /*0x541b87*/
                          {
                            v20 = ToWideStringChar((char *)(*(_DWORD *)v18->vtable0 + 104)); /*0x541b87*/
                            if ( !_strcmpi(v20, (char *)&aP2.field_1C) ) /*0x541b8d*/
                              break; /*0x541b8d*/
                            ++ebp27; /*0x541b9c*/
                            v18 = (TechnoTypeClass *)((char *)v18 + 4); /*0x541b9d*/
                            if ( ebp27 >= this->connCount ) /*0x541ba2*/
                              goto LABEL_33; /*0x541ba2*/
                          }
                          v21 = (_DWORD *)(*(this + ebp27 + 10) + 76); /*0x541bae*/
                          *v21 = *(_DWORD *)aP2.__pad_0; /*0x541bb1*/
                          v21[1] = *(_DWORD *)&aP2.field_1[3]; /*0x541bb7*/
                          v21[2] = aP2.field_8; /*0x541bbe*/
                          Network::SetPort((_WORD *)(*(this + ebp27 + 10) + 76), (IPXManagerClass *)aP1); /*0x541bcd*/
                          Network::FormatAddress((unsigned __int16 *)(*(this + ebp27 + 10) + 76), 0); /*0x541bdb*/
                          Debug::Log(); /*0x541be7*/
LABEL_33:
                          v2 = *(_DWORD *)aP2.__pad_C; /*0x541bef*/
                        }
                        if ( !MEMORY[0xA8D60E] ) /*0x541bfa*/
                        {
                          if ( this->connCount ) /*0x541c00*/
                          {
                            v22 = *(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_430[12] + 4 * v10); /*0x541c16*/
                            if ( (int)HouseClass_Count > *(_DWORD *)(v22 + 111) ) /*0x541c1c*/
                            {
                              if ( SessionClass::IsValidHouse( /*0x541c36*/
                                     (int)&MEMORY[0xA8B238],
                                     *(#375 **)&HouseClass_Array->__pad_0[4 * *(_DWORD *)(v22 + 111)]) )
                              {
                                Network::FormatAddress((unsigned __int16 *)&aP2, 0); /*0x541c49*/
                                Network::FormatAddress((unsigned __int16 *)(this->q050 + 76), 0); /*0x541c57*/
                                Debug::Log(); /*0x541c69*/
                                v23 = (_DWORD *)(this->q050 + 76); /*0x541c75*/
                                *v23 = *(_DWORD *)aP2.__pad_0; /*0x541c7b*/
                                v23[1] = *(_DWORD *)&aP2.field_1[3]; /*0x541c81*/
                                v23[2] = aP2.field_8; /*0x541c88*/
                                Network::SetPort((_WORD *)(this->q050 + 76), (IPXManagerClass *)aP1); /*0x541c96*/
                                *(_DWORD *)&MEMORY[0xA8BB1C] = *(_DWORD *)aP2.__pad_0; /*0x541ca7*/
                                MEMORY[0xA8BB24] = aP2.field_8; /*0x541cb1*/
                                MEMORY[0xA8BB20] = *(_DWORD *)&aP2.field_1[3]; /*0x541cbd*/
                                Network::SetPort(&MEMORY[0xA8BB1C], (IPXManagerClass *)aP1); /*0x541cc2*/
                                *(IPXManagerClass *)&MEMORY[0xA8D63C].__pad_524[68] = *(IPXManagerClass *)aP2.__pad_0; /*0x541cd3*/
                                *(_DWORD *)&MEMORY[0xA8D63C].__pad_524[76] = aP2.field_8; /*0x541ce8*/
                                Network::SetPort(&MEMORY[0xA8D63C].__pad_524[68], (IPXManagerClass *)aP1); /*0x541cee*/
                                *(_WORD *)&MEMORY[0xA8D63C].__pad_524[92] = (_WORD)aP1; /*0x541cf8*/
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            else
            {
              v7 = &MEMORY[0xA8D63C].__pad_BC0[182]; /*0x541943*/
              while ( !NetworkID::Compare( /*0x54196b*/
                         *(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_430[12] + 4 * v5) + 40,
                         (int)&aP2)
                   || *(_WORD *)v7 != (_WORD)aP1 )
              {
                ++v5; /*0x541976*/
                v7 += 2; /*0x541977*/
                if ( v5 >= *(int *)&MEMORY[0xA8D63C].__pad_430[24] ) /*0x54197c*/
                {
                  v6 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_430[24] == 0; /*0x54197e*/
                  goto LABEL_14; /*0x54197e*/
                }
              }
            }
          }
          goto LABEL_87; /*0x54196b*/
        }
        ++this->q0A4; /*0x54216c*/
        goto LABEL_91; /*0x542178*/
      }
      v24 = (_WORD *)this->q04C; /*0x541d04*/
      if ( v50 == v24[18] ) /*0x541d0b*/
      {
        if ( !MEMORY[0xA8D63C].__pad_524[64] /*0x541d2c*/
          || (*(int (__thiscall **)(_WORD *, __int16 *, unsigned int, DynamicVector *, _DWORD))(*(_DWORD *)v24 + 48))(
               v24,
               &v50,
               v2,
               &aP2,
               0) )
        {
          goto LABEL_87; /*0x541d31*/
        }
        ++this->q0A4; /*0x542183*/
LABEL_91:
        Debug::Log(); /*0x54218f*/
        goto LABEL_92; /*0x54218f*/
      }
      if ( v50 != this->q010 || Network_Recv((int)&v50, (int)&v50, v2, (int)v49, (__int16)aP1) ) /*0x541d63*/
        goto LABEL_87; /*0x541d6a*/
      v25 = v51[0]; /*0x541d75*/
      if ( MEMORY[0xA8D63C].__pad_524[64] && v51[1] == 0xFF ) /*0x541d87*/
      {
        if ( v51[0] == 2 ) /*0x541d90*/
        {
          (*(void (__thiscall **)(_DWORD, __int16 *, unsigned int))(*(_DWORD *)this->q050 + 12))( /*0x541da0*/
            this->q050,
            &v50,
            v2);
        }
        else if ( (int)this->connCount > 0 ) /*0x541dad*/
        {
          Network::FormatAddress((unsigned __int16 *)&aP2, 0); /*0x541e46*/
          Debug::Log(); /*0x541e59*/
          if ( !(*(int (__thiscall **)(_DWORD, __int16 *, unsigned int))(*(_DWORD *)this->connTable + 12))( /*0x541e6f*/
                  this->connTable,
                  &v50,
                  v2) )
          {
            v2 = 0; /*0x541e80*/
            ++this->q0A4; /*0x541e85*/
            goto LABEL_74; /*0x541e91*/
          }
        }
        goto LABEL_75; /*0x541da3*/
      }
      v26 = 0; /*0x541e99*/
      if ( (int)this->connCount <= 0 ) /*0x541e9d*/
      {
LABEL_60:
        if ( MEMORY[0xA8B238] == (CellStruct *)4 /*0x541f4a*/
          && !*(_DWORD *)&MEMORY[0xA8D63C].__pad_1140[48]
          && *(int *)&MEMORY[0xA8D63C].__pad_14B0[664] > 8
          && !MEMORY[0xA8D63C].__pad_524[64]
          && v2 > 0xF
          && v25 == 1
          && v52 == 25 )
        {
          eax67 = 1; /*0x541f56*/
          v30 = v53; /*0x541f5b*/
          if ( *(int *)&MEMORY[0xA8D63C].__pad_430[24] > 1 ) /*0x541f65*/
          {
            v31 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_430[12] + 4; /*0x541f71*/
            while ( *(_DWORD *)(*(_DWORD *)v31 + 111) != v53 ) /*0x541f79*/
            {
              ++eax67; /*0x541f7f*/
              v31 += 4; /*0x541f80*/
              if ( eax67 >= *(int *)&MEMORY[0xA8D63C].__pad_430[24] ) /*0x541f85*/
                goto LABEL_86; /*0x541f85*/
            }
            v35 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_430[12] + 4 * eax67) + 40); /*0x542113*/
            v44 = v53; /*0x542116*/
            *v35 = *(_DWORD *)aP2.__pad_0; /*0x542117*/
            v35[1] = *(_DWORD *)&aP2.field_1[3]; /*0x54211d*/
            v35[2] = aP2.field_8; /*0x542124*/
            if ( (*(int (__thiscall **)(_DWORD *, int))(*this + 24))(this, v44) != -1 ) /*0x542131*/
            {
              v36 = (_DWORD *)(*(this + (*(int (__thiscall **)(_DWORD *, int))(*this + 24))(this, v30) + 10) + 76); /*0x542143*/
              *v36 = *(_DWORD *)aP2.__pad_0; /*0x542146*/
              v36[1] = *(_DWORD *)&aP2.field_1[3]; /*0x54214c*/
              v36[2] = aP2.field_8; /*0x542153*/
            }
LABEL_86:
            v2 = *(_DWORD *)aP2.__pad_C; /*0x542156*/
          }
        }
        goto LABEL_87; /*0x542156*/
      }
      v29 = (TechnoTypeClass *)(this + 10); /*0x541e9f*/
      while ( MEMORY[0xA8D63C].__pad_524[64] ) /*0x541ea9*/
      {
        LinkedIndex = Factory::GetLinkedIndex( /*0x541eb6*/
                        (int *)&g_NetworkEventQueue,
                        *(DynamicVector **)(*(_DWORD *)v29->vtable0 + 100));
        v25 = v51[0]; /*0x541ebb*/
        if ( LinkedIndex == v51[1] ) /*0x541ec4*/
          goto LABEL_72; /*0x541ec4*/
        if ( !MEMORY[0xA8D63C].__pad_524[64] ) /*0x541ed1*/
          break; /*0x541ed1*/
LABEL_59:
        ++v26; /*0x541ef1*/
        v29 = (TechnoTypeClass *)((char *)v29 + 4); /*0x541ef5*/
        if ( v26 >= this->connCount ) /*0x541efa*/
          goto LABEL_60; /*0x541efa*/
      }
      if ( !GUID::Compare((char *)(*(_DWORD *)v29->vtable0 + 76), (int)&aP2) ) /*0x541edd*/
        break; /*0x541edd*/
LABEL_72:
      if ( !(*(int (__thiscall **)(_DWORD, __int16 *, unsigned int))(*(_DWORD *)*(this + v26 + 10) + 12))( /*0x541f9b*/
              *(this + v26 + 10),
              &v50,
              v2) )
      {
        v2 = 0; /*0x541fa8*/
        ++this->q0A4; /*0x541fad*/
LABEL_74:
        Debug::Log(); /*0x541fb9*/
      }
LABEL_75:
      if ( MEMORY[0xA8B238] == (CellStruct *)4 ) /*0x541fc8*/
      {
        if ( MEMORY[0xA8D63C].__pad_524[64] ) /*0x541fd5*/
        {
          if ( Network::processPacket(aP2.__pad_0, (TechnoTypeClass *)(this->q050 + 76)) ) /*0x541fe6*/
          {
            for ( i = 1; i < *(int *)&MEMORY[0xA8D63C].__pad_430[24]; ++i ) /*0x541fff*/
            {
              if ( NetworkID::Compare( /*0x54203e*/
                     *(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_430[12] + 4 * i) + 40,
                     this->q050 + 76)
                && SessionClass::IsValidHouse(
                     (int)&MEMORY[0xA8B238],
                     *(#375 **)&HouseClass_Array->__pad_0[4
                                                        * *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_430[12]
                                                                                + 4 * i)
                                                                    + 111)]) )
              {
                Network::FormatAddress((unsigned __int16 *)&aP2, 0); /*0x542051*/
                Network::FormatAddress((unsigned __int16 *)(this->q050 + 76), 0); /*0x54205f*/
                Debug::Log(); /*0x542071*/
                v33 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_430[12] + 4 * i) + 40); /*0x542085*/
                *v33 = *(_DWORD *)aP2.__pad_0; /*0x542088*/
                v33[1] = *(_DWORD *)&aP2.field_1[3]; /*0x54208e*/
                v33[2] = aP2.field_8; /*0x542095*/
                v34 = (_DWORD *)(this->q050 + 76); /*0x54209f*/
                *v34 = *(_DWORD *)aP2.__pad_0; /*0x5420a2*/
                v34[1] = *(_DWORD *)&aP2.field_1[3]; /*0x5420a8*/
                v34[2] = aP2.field_8; /*0x5420af*/
                *(_DWORD *)&MEMORY[0xA8BB1C] = *(_DWORD *)aP2.__pad_0; /*0x5420be*/
                *(IPXManagerClass *)&MEMORY[0xA8D63C].__pad_524[68] = *(IPXManagerClass *)aP2.__pad_0; /*0x5420c3*/
                MEMORY[0xA8BB20] = *(_DWORD *)&aP2.field_1[3]; /*0x5420cd*/
                MEMORY[0xA8BB24] = aP2.field_8; /*0x5420d3*/
                *(_DWORD *)&MEMORY[0xA8D63C].__pad_524[76] = aP2.field_8; /*0x5420df*/
                NetworkManager::SetPlayerAddress( /*0x5420f6*/
                  (int *)&g_NetworkEventQueue,
                  *(DynamicVector **)(*(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_430[12] + 4 * i) + 111),
                  &aP2);
              }
            }
          }
        }
      }
LABEL_87:
      if ( !v2 ) /*0x54215c*/
        goto LABEL_92; /*0x54215c*/
    }
    v25 = v51[0]; /*0x541eea*/
    goto LABEL_59; /*0x541eea*/
  }
LABEL_92:
  v37 = this->q048; /*0x542197*/
  v38 = 0; /*0x54219a*/
  if ( v37 && *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10204] && !(*(int (__thiscall **)(int))(*(_DWORD *)v37 + 20))(v37) ) /*0x5421aa*/
  {
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)this->q048 + 24))(this->q048); /*0x5421b6*/
    aP2.field_10 = 0; /*0x5421b9*/
  }
  if ( MEMORY[0xA8D63C].__pad_524[64] ) /*0x5421c4*/
  {
    v39 = this->q04C; /*0x5421c6*/
    if ( v39 ) /*0x5421cb*/
    {
      if ( !(*(int (__thiscall **)(int))(*(_DWORD *)v39 + 20))(v39) ) /*0x5421cf*/
      {
        (*(void (__thiscall **)(_DWORD))(*(_DWORD *)this->q04C + 24))(this->q04C); /*0x5421db*/
        aP2.field_10 = 0; /*0x5421de*/
      }
      if ( !MEMORY[0xA8D63C].__pad_BC0[212] ) /*0x5421e9*/
        Network::ProcessAddressChange(); /*0x5421f0*/
    }
    if ( MEMORY[0xA8D63C].__pad_524[64] ) /*0x5421fc*/
    {
      v40 = this->q050; /*0x5421fe*/
      if ( v40 ) /*0x542203*/
      {
        if ( !(*(int (__thiscall **)(int))(*(_DWORD *)v40 + 20))(v40) ) /*0x542207*/
        {
          Debug::Log(); /*0x542213*/
          aP2.field_10 = 0; /*0x54221b*/
        }
      }
    }
  }
  if ( *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10204] && (int)this->connCount > 0 ) /*0x54222a*/
  {
    v47 = (TechnoTypeClass *)(this + 10); /*0x54222c*/
    do /*0x542260*/
    {
      if ( !(*(int (__thiscall **)(_DWORD))(**(_DWORD **)v47->vtable0 + 20))(*(_DWORD *)v47->vtable0) ) /*0x542233*/
      {
        aP2.field_10 = 0; /*0x54223a*/
        this->q0A8 = *(_DWORD *)(*(_DWORD *)v47->vtable0 + 100); /*0x542249*/
        Debug::Log(); /*0x54224f*/
      }
      ++v38; /*0x54225a*/
      v47 = (TechnoTypeClass *)((char *)v47 + 4); /*0x54225b*/
    }
    while ( v38 < this->connCount ); /*0x542260*/
  }
  result = aP2.field_10; /*0x542262*/
  if ( aP2.field_10 ) /*0x542268*/
    this->q0A8 = -1; /*0x54226a*/
  return result; /*0x542274*/
}


// ==== 0x00542280  EventClass::deserializeEvent  this=EventClass  sig=csp ====
int __thiscall EventClass::deserializeEvent(_DWORD *this, int a2, IUnknown *aP2)
{
  int result; // eax
  int *v5; // edx

  result = (*(int (__thiscall **)(_DWORD *, int))(*this + 24))(this, a2); /*0x54228c*/
  if ( result != -1 && result < this->EventClass_field_0x44 ) /*0x542297*/
  {
    v5 = (int *)(*(this + result + 10) + 76); /*0x5422a1*/
    *v5 = aP2->field_0; /*0x5422a6*/
    v5[1] = aP2->field_4; /*0x5422ab*/
    result = aP2->field_8; /*0x5422ae*/
    v5[2] = result; /*0x5422b1*/
  }
  return result; /*0x5422b4*/
}


// ==== 0x005422C0  ObjectClass::?GetNumBorrowedCores_SchedulerProxy_details_Concurrency__QBEIXZ  this=ObjectClass  sig=csp ====
unsigned int __thiscall _GetNumBorrowedCores_SchedulerProxy_details_Concurrency__QBEIXZ(
        Concurrency::details::SchedulerProxy *this)
{
  return this->q02A; /*0x5422c6*/
}


// ==== 0x005422D0  IPXManagerClass::GetQueueCount  this=IPXManagerClass  sig=csp ====
int __thiscall Network_GetQueueCount(int this)
{
  if ( *(_BYTE *)(this + 4) && *(_BYTE *)(this + 5) ) /*0x5422d7*/
    return *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 72) + 4) + 40); /*0x5422e4*/
  else
    return 0; /*0x5422e8*/
}


// ==== 0x005422F0  IPXManagerClass::GetSpeed  this=IPXManagerClass  sig=csp ====
int __thiscall Connection_GetSpeed(int this)
{
  if ( *(_BYTE *)(this + 4) && *(_BYTE *)(this + 5) ) /*0x5422f7*/
    return *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 72) + 4) + 56); /*0x542304*/
  else
    return 0; /*0x542308*/
}


// ==== 0x00542310  IPXManagerClass::GetUpgradeValue  this=IPXManagerClass  sig=csp ====
int __thiscall HouseClass_GetUpgradeValue(int this)
{
  int v1; // ecx

  if ( *(_BYTE *)(this + 4) && *(_BYTE *)(this + 5) && (v1 = *(_DWORD *)(this + 76)) != 0 ) /*0x542323*/
    return *(_DWORD *)(*(_DWORD *)(v1 + 4) + 40); /*0x542328*/
  else
    return 0; /*0x54232c*/
}


// ==== 0x00542330  IPXManagerClass::GetConnectionCount  this=IPXManagerClass  sig=csp ====
int __thiscall IPXManagerClass::_vt21(int this)
{
  int v1; // ecx

  if ( *(_BYTE *)(this + 4) && *(_BYTE *)(this + 5) && (v1 = *(_DWORD *)(this + 76)) != 0 ) /*0x542343*/
    return *(_DWORD *)(*(_DWORD *)(v1 + 4) + 56); /*0x542348*/
  else
    return 0; /*0x54234c*/
}


// ==== 0x00542350  IPXManagerClass::GetAddress  this=IPXManagerClass  sig=csp ====
int __thiscall IPXManagerClass::_vt09(char *this, int a2)
{
  int v3; // ecx
  int v4; // eax
  int result; // eax
  char *v6; // edx
  int v7; // esi

  if ( !this->Initialized ) /*0x542353*/
    return 0; /*0x542353*/
  if ( !this->Active ) /*0x54235a*/
    return 0; /*0x54235a*/
  v3 = this->connCount; /*0x542361*/
  if ( !v3 ) /*0x542366*/
    return 0; /*0x5423af*/
  if ( a2 != -1 ) /*0x54236f*/
  {
    v4 = (*(int (__thiscall **)(char *, int))(this->q060)(this, a2); /*0x542376*/
    if ( v4 != -1 ) /*0x54237c*/
      return *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + v4 + 10) + 4) + 40); /*0x542389*/
    return 0; /*0x54237c*/
  }
  result = 0; /*0x54238c*/
  if ( v3 > 0 ) /*0x542390*/
  {
    v6 = this + 40; /*0x542392*/
    v7 = this->connCount; /*0x542395*/
    do /*0x5423a9*/
    {
      if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v6 + 4) + 40) > result ) /*0x5423a1*/
        result = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v6 + 4) + 40); /*0x5423a3*/
      v6 += 4; /*0x5423a5*/
      --v7; /*0x5423a8*/
    }
    while ( v7 ); /*0x5423a9*/
  }
  return result; /*0x542382*/
}


// ==== 0x005423C0  IPXManagerClass::SetAddress  this=IPXManagerClass  sig=csp ====
int __thiscall IPXManagerClass::_vt10(char *this, int a2)
{
  int v3; // ecx
  int v4; // eax
  int result; // eax
  char *v6; // edx
  int v7; // esi

  if ( !this->Initialized ) /*0x5423c3*/
    return 0; /*0x5423c3*/
  if ( !this->Active ) /*0x5423ca*/
    return 0; /*0x5423ca*/
  v3 = this->connCount; /*0x5423d1*/
  if ( !v3 ) /*0x5423d6*/
    return 0; /*0x54241f*/
  if ( a2 != -1 ) /*0x5423df*/
  {
    v4 = (*(int (__thiscall **)(char *, int))(this->q060)(this, a2); /*0x5423e6*/
    if ( v4 != -1 ) /*0x5423ec*/
      return *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + v4 + 10) + 4) + 56); /*0x5423f9*/
    return 0; /*0x5423ec*/
  }
  result = 0; /*0x5423fc*/
  if ( v3 > 0 ) /*0x542400*/
  {
    v6 = this + 40; /*0x542402*/
    v7 = this->connCount; /*0x542405*/
    do /*0x542419*/
    {
      if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v6 + 4) + 56) > result ) /*0x542411*/
        result = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v6 + 4) + 56); /*0x542413*/
      v6 += 4; /*0x542415*/
      --v7; /*0x542418*/
    }
    while ( v7 ); /*0x542419*/
  }
  return result; /*0x5423f2*/
}


// ==== 0x00542430  Network::GetField  this=Network  sig=csp ====
int __thiscall Network::GetField(_WORD *this, __int16 a2)
{
  int result; // eax
  __int16 v3; // dx

  LOWORD(result) = a2; /*0x542430*/
  LOBYTE(v3) = HIBYTE(a2); /*0x542437*/
  HIBYTE(v3) = a2; /*0x542439*/
  this->Network_field_0x44 = v3; /*0x54243b*/
  return result; /*0x54243f*/
}


// ==== 0x00542450  IPXManagerClass::GetQueueSize  this=IPXManagerClass  sig=csp ====
unsigned int __thiscall IPXManagerClass::_vt12(_DWORD *this)
{
  unsigned int v2; // ebp
  int v3; // edi
  _DWORD *v4; // ebx
  unsigned int BridgeIndex; // eax
  int v6; // esi
  unsigned int result; // eax

  v2 = 0; /*0x542455*/
  v3 = 0; /*0x542457*/
  if ( (int)this->connCount > 0 ) /*0x54245e*/
  {
    v4 = this + 10; /*0x542461*/
    do /*0x54247d*/
    {
      BridgeIndex = CellClass::GetBridgeIndex(*(_DWORD **)(*v4 + 4)); /*0x542469*/
      if ( BridgeIndex > v2 ) /*0x542470*/
        v2 = BridgeIndex; /*0x542472*/
      ++v3; /*0x542477*/
      ++v4; /*0x542478*/
    }
    while ( v3 < this->connCount ); /*0x54247d*/
  }
  v6 = this->q050; /*0x542480*/
  if ( !v6 ) /*0x542485*/
    return v2; /*0x542485*/
  result = CellClass::GetBridgeIndex(*(_DWORD **)(v6 + 4)); /*0x54248a*/
  if ( result <= v2 ) /*0x542491*/
    return v2; /*0x542493*/
  return result; /*0x542495*/
}


// ==== 0x005424A0  IPXManagerClass::CheckStatus  this=IPXManagerClass  sig=csp ====
int __thiscall IPXManagerClass::_vt22(_DWORD *this, int a2)
{
  return CellClass::GetBridgeIndex(*(_DWORD **)(*(this + a2 + 10) + 4)); /*0x5424b0*/
}


// ==== 0x005424C0  Network::GetLobbyStatus  this=Network  sig=csp ====
int __thiscall Network_GetLobbyStatus(_DWORD *this)
{
  int v1; // eax

  v1 = this->Network_field_0x48; /*0x5424c0*/
  if ( v1 ) /*0x5424c5*/
    return CellClass::GetBridgeIndex(*(_DWORD *)(v1 + 4)); /*0x5424ca*/
  else
    return 0; /*0x5424cf*/
}


// ==== 0x00542500  Network::updateLatency  this=Network  sig=csp ====
int __thiscall sub_542500(_DWORD *this)
{
  int v1; // eax

  v1 = this->Network_field_0x50; /*0x542500*/
  if ( v1 ) /*0x542505*/
    return CellClass::GetBridgeIndex(*(_DWORD **)(v1 + 4)); /*0x54250a*/
  else
    return 0; /*0x54250f*/
}


// ==== 0x00542520  IPXManagerClass::ProcessQueue  this=IPXManagerClass  sig=csp ====
int __thiscall IPXManagerClass::_vt23(int *this)
{
  int v2; // ebx
  int result; // eax
  _DWORD *v4; // edi
  int *v5; // esi
  #375 *v6; // ecx
  int *v7; // eax
  int v8; // ecx
  int v9; // eax
  unsigned int v10; // kr00_4
  signed int v11; // eax

  v2 = 0; /*0x542524*/
  result = this->connCount; /*0x542526*/
  if ( result > 0 ) /*0x54252b*/
  {
    v4 = this + 10; /*0x542533*/
    v5 = (int *)&MEMORY[0xA8B5B4]; /*0x542536*/
    do /*0x54260c*/
    {
      v6 = *(#375 **)&HouseClass_Array->__pad_0[4 * *(_DWORD *)(*v4 + 100)]; /*0x542546*/
      if ( v6 && v6 != HouseClass_Player ) /*0x542557*/
      {
        if ( !*((_BYTE *)v5 - 64) ) /*0x54255d*/
        {
          CopyWideToChar((_BYTE *)v5 - 64, (char *)(*v4 + 104), -1); /*0x54256c*/
          v7 = (int *)(*v4 + 76); /*0x542576*/
          v5[7] = *v7; /*0x54257b*/
          v5[8] = v7[1]; /*0x542580*/
          v5[9] = v7[2]; /*0x542586*/
        }
        v8 = 1000 * IPXManagerClass::init(*(_DWORD **)(*v4 + 4)); /*0x5425a1*/
        v9 = *v5; /*0x5425b2*/
        if ( *v5 <= v8 / 60 ) /*0x5425b6*/
          v9 = v8 / 60; /*0x5425b8*/
        *v5 = v9; /*0x5425ba*/
        v10 = 1000 * CellClass::GetBridgeIndex(*(_DWORD **)(*v4 + 4)); /*0x5425c6*/
        v11 = v5[4]; /*0x5425d9*/
        if ( (int)(v10 / 0x3C) > v11 ) /*0x5425e1*/
          v11 = v10 / 0x3C; /*0x5425e3*/
        v5[4] = v11; /*0x5425e5*/
        v5[1] = *(_DWORD *)(*v4 + 8); /*0x5425ed*/
        v5[2] = *(_DWORD *)(*v4 + 12); /*0x5425f5*/
        v5[3] = *(_DWORD *)(*v4 + 16); /*0x5425fd*/
      }
      result = this->connCount; /*0x542600*/
      ++v2; /*0x542603*/
      ++v4; /*0x542604*/
      v5 += 26; /*0x542607*/
    }
    while ( v2 < result ); /*0x54260c*/
  }
  return result; /*0x542614*/
}


// ==== 0x00542620  ScoreBoard::Render  this=ScoreBoard  sig=csp ====
int __thiscall ScoreBoard::Render(CampaignScore *this)
{
  CampaignScore *v1; // edi
  DSurface *v2; // esi
  int BuildingAnimByName; // eax
  _DWORD *v4; // eax
  int v5; // eax
  _DWORD *v6; // eax
  int v7; // eax
  _DWORD *v8; // eax
  signed int v9; // ebx
  _DWORD *v10; // eax
  int BridgeIndex; // eax
  _DWORD *v12; // eax
  int result; // eax
  int v14; // ebp
  int *p_CampaignScore_field_0x04; // ebx
  int v16; // eax
  int v17; // edi
  _DWORD *v18; // eax
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  _DWORD *v22; // eax
  int v23; // eax
  _DWORD *v24; // eax
  _DWORD *v25; // eax
  _DWORD *v26; // eax
  _DWORD *v27; // eax
  const wchar_t *NeedsSaveOrLink; // ecx
  bool v29; // cc
  _DWORD *v30; // eax
  _DWORD *v31; // eax
  _DWORD *v32; // eax
  _DWORD *v33; // eax
  _DWORD *v34; // eax
  CampaignScore *v35; // [esp+8h] [ebp-548h]
  CampaignScore *v36; // [esp+8h] [ebp-548h]
  CampaignScore *v37; // [esp+Ch] [ebp-544h]
  CampaignScore *v38; // [esp+Ch] [ebp-544h]
  CampaignScore *v39; // [esp+10h] [ebp-540h]
  CampaignScore *v40; // [esp+10h] [ebp-540h]
  int v41; // [esp+14h] [ebp-53Ch]
  int v42; // [esp+14h] [ebp-53Ch]
  int v43; // [esp+14h] [ebp-53Ch]
  int v44; // [esp+18h] [ebp-538h]
  ObjectClass *v45; // [esp+18h] [ebp-538h]
  ObjectClass *v46; // [esp+18h] [ebp-538h]
  ObjectClass *v47; // [esp+18h] [ebp-538h]
  int v48; // [esp+18h] [ebp-538h]
  ObjectClass *v49; // [esp+18h] [ebp-538h]
  int v50; // [esp+18h] [ebp-538h]
  ObjectClass *v51; // [esp+18h] [ebp-538h]
  ObjectClass *v52; // [esp+18h] [ebp-538h]
  ObjectClass *v53; // [esp+1Ch] [ebp-534h]
  int v54; // [esp+1Ch] [ebp-534h]
  int v55; // [esp+1Ch] [ebp-534h]
  ObjectClass *v56; // [esp+1Ch] [ebp-534h]
  int v57; // [esp+1Ch] [ebp-534h]
  int v58; // [esp+1Ch] [ebp-534h]
  ObjectClass *v59; // [esp+1Ch] [ebp-534h]
  int v60; // [esp+1Ch] [ebp-534h]
  int v61; // [esp+20h] [ebp-530h]
  int v62; // [esp+20h] [ebp-530h]
  int v63; // [esp+20h] [ebp-530h]
  ObjectClass *v64; // [esp+20h] [ebp-530h]
  int v65; // [esp+20h] [ebp-530h]
  int v66; // [esp+20h] [ebp-530h]
  ObjectClass *v67; // [esp+20h] [ebp-530h]
  int v68; // [esp+20h] [ebp-530h]
  int v69; // [esp+20h] [ebp-530h]
  CampaignScore *v70; // [esp+24h] [ebp-52Ch]
  int v71; // [esp+24h] [ebp-52Ch]
  int v72; // [esp+24h] [ebp-52Ch]
  int v73; // [esp+24h] [ebp-52Ch]
  int v74; // [esp+24h] [ebp-52Ch]
  int v75; // [esp+24h] [ebp-52Ch]
  ObjectClass *v76; // [esp+24h] [ebp-52Ch]
  int v77; // [esp+24h] [ebp-52Ch]
  int v78; // [esp+24h] [ebp-52Ch]
  ObjectClass *v79; // [esp+24h] [ebp-52Ch]
  int v80; // [esp+24h] [ebp-52Ch]
  int v81; // [esp+24h] [ebp-52Ch]
  int v82; // [esp+28h] [ebp-528h]
  int v83; // [esp+28h] [ebp-528h]
  ObjectClass *v84; // [esp+28h] [ebp-528h]
  int v85; // [esp+28h] [ebp-528h]
  int v86; // [esp+28h] [ebp-528h]
  int v87; // [esp+28h] [ebp-528h]
  int v88; // [esp+28h] [ebp-528h]
  int v89; // [esp+2Ch] [ebp-524h]
  int v90; // [esp+2Ch] [ebp-524h]
  int v91; // [esp+2Ch] [ebp-524h]
  int v92; // [esp+2Ch] [ebp-524h]
  int v93; // [esp+30h] [ebp-520h]
  int v94; // [esp+30h] [ebp-520h]
  int v95; // [esp+34h] [ebp-51Ch] BYREF
  ObjectClass aP5; // [esp+38h] [ebp-518h] BYREF
  int a0[2]; // [esp+E4h] [ebp-46Ch] BYREF
  int v98[3]; // [esp+ECh] [ebp-464h] BYREF
  CampaignScore aP3; // [esp+F8h] [ebp-458h] BYREF
  char v100[4]; // [esp+120h] [ebp-430h] BYREF
  char v101[24]; // [esp+124h] [ebp-42Ch] BYREF
  char v102[20]; // [esp+13Ch] [ebp-414h] BYREF
  char v103[8]; // [esp+150h] [ebp-400h] BYREF
  char v104[16]; // [esp+158h] [ebp-3F8h] BYREF
  char v105[12]; // [esp+168h] [ebp-3E8h] BYREF
  char v106[12]; // [esp+174h] [ebp-3DCh] BYREF
  char v107[16]; // [esp+180h] [ebp-3D0h] BYREF
  char v108[20]; // [esp+190h] [ebp-3C0h] BYREF
  char v109[24]; // [esp+1A4h] [ebp-3ACh] BYREF
  char v110[4]; // [esp+1BCh] [ebp-394h] BYREF
  wchar_t Buffer; // [esp+1C0h] [ebp-390h] BYREF
  wchar_t v112; // [esp+1C4h] [ebp-38Ch] BYREF
  wchar_t v113; // [esp+1C8h] [ebp-388h] BYREF
  wchar_t v114; // [esp+1CCh] [ebp-384h] BYREF
  wchar_t v115; // [esp+1D0h] [ebp-380h] BYREF
  wchar_t v116[246]; // [esp+1D4h] [ebp-37Ch] BYREF
  wchar_t v117[10]; // [esp+3C0h] [ebp-190h] BYREF
  size_t BufferCount[95]; // [esp+3D4h] [ebp-17Ch] BYREF

  v1 = this; /*0x54262a*/
  v2 = *(DSurface **)&stru_87C374.__pad_579C[22540]; /*0x54262c*/
  aP5.referenceCount = (int)this; /*0x542632*/
  swprintf(&Buffer, (const size_t)&off_8288A0, (const wchar_t *const)(1000 * *((_DWORD *)this + 22) / 0x3Cu), v70); /*0x54265d*/
  v95 = 0; /*0x542674*/
  *(_DWORD *)aP5.__pad_0 = 402; /*0x542678*/
  BuildingAnimByName = FindBuildingAnimByName(&g_INI_Key_Grey, 1); /*0x542680*/
  v4 = (_DWORD *)(*(int (__thiscall **)(DSurface *, int *, int *, int))(v2->field_0 + 120))( /*0x542697*/
                   v2,
                   &aP5.spawnStatus,
                   &v95,
                   BuildingAnimByName);
  TextRenderer::DrawText((int *)&aP5.__pad_0[12], (size_t)&v113, (IUnknown *)v2, v4, 0, (ObjectClass *)0x19, v71, v82); /*0x5426a9*/
  swprintf(&v113, (const size_t)&off_82887C, (const wchar_t *const)(1000 * v1[2].CampaignScore_field_0x18 / 0x3Cu), v37); /*0x5426d5*/
  *(_DWORD *)&aP5.__pad_0[4] = 0; /*0x5426e7*/
  *(_DWORD *)&aP5.__pad_0[8] = 412; /*0x5426ee*/
  v5 = FindBuildingAnimByName(&g_INI_Key_Grey, 1); /*0x5426f6*/
  v6 = (_DWORD *)(*(int (__thiscall **)(DSurface *, char *, char *, int, _DWORD, int))(v2->field_0 + 120))( /*0x54270d*/
                   v2,
                   &aP5.needsRedraw,
                   &aP5.__pad_0[4],
                   v5,
                   0,
                   25);
  TextRenderer::DrawText((int *)&aP5.__pad_0[8], (size_t)&v112, (IUnknown *)v2, v6, v44, v53, v61, v72); /*0x54271f*/
  swprintf(&v112, (const size_t)&off_82885C, *(const wchar_t *const *)&HouseClass_Player.__pad_5568[18664], v35); /*0x542737*/
  *(_DWORD *)aP5.__pad_0 = 0; /*0x542749*/
  v73 = 25; /*0x54274d*/
  *(_DWORD *)&aP5.__pad_0[4] = 422; /*0x542750*/
  v7 = FindBuildingAnimByName(&g_INI_Key_Grey, 1); /*0x542758*/
  v8 = (_DWORD *)(*(int (__thiscall **)(DSurface *, int *, ObjectClass *, int, _DWORD))(v2->field_0 + 120))( /*0x54276f*/
                   v2,
                   &aP5.visibilityFlags,
                   &aP5,
                   v7,
                   0);
  TextRenderer::DrawText((int *)&aP5.__pad_0[4], (size_t)&Buffer, (IUnknown *)v2, v8, v41, v45, v54, v62); /*0x542781*/
  if ( (int)(Timer::GetTicks() - (_DWORD)*(&g_MatrixTransformState + 7694)) / 60 ) /*0x5427ad*/
  {
    v9 = Timer::GetTicks() - (_DWORD)*(&g_MatrixTransformState + 7694); /*0x5427c6*/
    swprintf( /*0x5427f3*/
      &Buffer,
      (const size_t)aFspsD,
      (const wchar_t *const)((int)dword_B0487C / (v9 / 60)),
      (CampaignScore *)0x19);
    v95 = 0; /*0x542805*/
    *(_DWORD *)aP5.__pad_0 = 432; /*0x54280c*/
    v46 = (ObjectClass *)FindBuildingAnimByName(&g_INI_Key_Grey, 1); /*0x54281b*/
    v10 = (_DWORD *)(*(int (__thiscall **)(DSurface *, int *))(v2->field_0 + 120))(v2, &aP5.spawnStatus); /*0x54282b*/
    TextRenderer::DrawText((int *)&aP5.__pad_0[4], (size_t)&Buffer, (IUnknown *)v2, v10, (int)&v95, v46, 0, 25); /*0x54283d*/
    if ( (HouseClass_Player.__pad_5568[23248] & 0x7F) == 0x7F ) /*0x54284f*/
    {
      *(&g_MatrixTransformState + 7694) = (CoordStruct *)Timer::GetTicks(); /*0x54285e*/
      *(&g_MatrixTransformState + 7695) = *(CoordStruct **)&aP5.__pad_0[8]; /*0x542863*/
      dword_B0487C = 0; /*0x542869*/
    }
  }
  if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 && HouseClass_Player.__pad_5568[18668] ) /*0x542883*/
  {
    if ( *(_DWORD *)&HouseClass_Player.__pad_5568[22364] ) /*0x542890*/
      BridgeIndex = CellClass::GetBridgeIndex(*(_DWORD **)(*(_DWORD *)&HouseClass_Player.__pad_5568[22364] + 4)); /*0x542895*/
    else
      BridgeIndex = 0; /*0x54289c*/
    swprintf( /*0x5428c2*/
      &Buffer,
      (const size_t)&off_828830,
      (const wchar_t *const)(1000 * BridgeIndex / 0x3Cu),
      (CampaignScore *)v73);
    v95 = 0; /*0x5428d4*/
    *(_DWORD *)aP5.__pad_0 = 442; /*0x5428db*/
    v47 = (ObjectClass *)FindBuildingAnimByName(&g_INI_Key_Grey, 1); /*0x5428ea*/
    v12 = (_DWORD *)(*(int (__thiscall **)(DSurface *, int *))(v2->field_0 + 120))(v2, &aP5.spawnStatus); /*0x5428fa*/
    TextRenderer::DrawText((int *)&aP5.__pad_0[4], (size_t)&Buffer, (IUnknown *)v2, v12, (int)&v95, v47, 0, 25); /*0x54290c*/
  }
  result = v1[1].CampaignScore_field_0x20; /*0x542914*/
  aP5.nextArrayIndex = 0; /*0x542917*/
  if ( result > 0 )
  {
    *(_DWORD *)&aP5.__pad_0[12] = &g_MatrixTransformState + 6400; /*0x542928*/
    v14 = 100; /*0x542932*/
    p_CampaignScore_field_0x04 = &v1[1].CampaignScore_field_0x04; /*0x542937*/
    v95 = &HouseClass_Player.__pad_5568[18592] - (char *)v1; /*0x54293a*/
    do
    {
      v16 = *(_DWORD *)&HouseClass_Array->__pad_0[4 * *(_DWORD *)(*p_CampaignScore_field_0x04 + 100)]; /*0x542949*/
      if ( v16 && v16 != HouseClass_Player.field_0 )
      {
        v17 = *(_DWORD *)(v16 + 90196); /*0x542960*/
        swprintf( /*0x542977*/
          v117,
          (const size_t)&off_8240B4,
          (const wchar_t *const)(*p_CampaignScore_field_0x04 + 104),
          (CampaignScore *)v73);
        *(_DWORD *)&aP5.bombVisible = v14; /*0x542985*/
        aP5.health = 302; /*0x542989*/
        v18 = (_DWORD *)(*(int (__thiscall **)(DSurface *, char *, char *, _DWORD, _DWORD, int, int))(v2->field_0 + 120))( /*0x5429b0*/
                          v2,
                          v107,
                          &aP5.bombVisible,
                          *(_DWORD *)(stru_B05488.field_4C + 4 * v17),
                          0,
                          25,
                          v74);
        TextRenderer::DrawText(a0, (size_t)BufferCount, (IUnknown *)v2, v18, v83, (ObjectClass *)v89, v93, v95); /*0x5429c5*/
        v19 = CellClass::GetBridgeIndex(*(_DWORD **)(*p_CampaignScore_field_0x04 + 4)); /*0x5429d2*/
        swprintf( /*0x542a04*/
          v116,
          (const size_t)&off_828814,
          (const wchar_t *const)(1000 * v19 / 60),
          *(CampaignScore **)aP5.__pad_0);
        aP5.ambientSoundController[0] = v14; /*0x542a11*/
        aP5.ambientSoundController[1] = 311; /*0x542a15*/
        v20 = *(_DWORD *)(stru_B05488.field_4C + 4 * v17); /*0x542a1d*/
        v21 = v2->field_0; /*0x542a20*/
        v95 = 25; /*0x542a22*/
        v22 = (_DWORD *)(*(int (__thiscall **)(DSurface *, char *, int *, int, _DWORD))(v21 + 120))( /*0x542a36*/
                          v2,
                          v101,
                          aP5.ambientSoundController,
                          v20,
                          0);
        TextRenderer::DrawText(&aP3.CampaignScore_field_0x20, (size_t)&v115, (IUnknown *)v2, v22, v75, v84, v90, v94); /*0x542a4b*/
        v23 = IPXManagerClass::init(*(_DWORD **)(*p_CampaignScore_field_0x04 + 4)); /*0x542a58*/
        swprintf(&v115, (const size_t)&off_8287F8, (const wchar_t *const)(1000 * v23 / 60), (CampaignScore *)v95); /*0x542a8a*/
        *(_DWORD *)&aP5.needsRedraw = v14; /*0x542a98*/
        *(_DWORD *)&aP5.hasParachute = 319; /*0x542a9f*/
        v93 = 25; /*0x542aaf*/
        v24 = (_DWORD *)(*(int (__thiscall **)(DSurface *, char *, char *, _DWORD, _DWORD))(v2->field_0 + 120))( /*0x542ac6*/
                          v2,
                          v103,
                          &aP5.needsRedraw,
                          *(_DWORD *)(stru_B05488.field_4C + 4 * v17),
                          0);
        TextRenderer::DrawText(&aP5.lastLayer, (size_t)&v114, (IUnknown *)v2, v24, v63, v76, v85, v91); /*0x542adb*/
        swprintf(&v114, (const size_t)&off_8287DC, *(const wchar_t *const *)(*p_CampaignScore_field_0x04 + 8), v39); /*0x542af3*/
        aP5.ambientSoundController[4] = v14; /*0x542b00*/
        aP5.customSound_controller[0] = 327; /*0x542b04*/
        v25 = (_DWORD *)(*(int (__thiscall **)(DSurface *, char *, int *, _DWORD, _DWORD, int))(v2->field_0 + 120))( /*0x542b25*/
                          v2,
                          v110,
                          &aP5.ambientSoundController[4],
                          *(_DWORD *)(stru_B05488.field_4C + 4 * v17),
                          0,
                          25);
        TextRenderer::DrawText((int *)aP3.__pad_0, (size_t)&v113, (IUnknown *)v2, v25, v55, v64, v77, v86); /*0x542b3a*/
        swprintf(
          &v113,
          (const size_t)&off_8287C0,
          *(int *)(*p_CampaignScore_field_0x04 + 12) < 0
        ? 0
        : *(const wchar_t *const *)(*p_CampaignScore_field_0x04 + 12),
          v38);
        *(_DWORD *)&aP5.bombVisible = v14; /*0x542b6a*/
        aP5.health = 335; /*0x542b6e*/
        v26 = (_DWORD *)(*(int (__thiscall **)(DSurface *, char *, char *, _DWORD, _DWORD, int))(v2->field_0 + 120))( /*0x542b92*/
                          v2,
                          v105,
                          &aP5.bombVisible,
                          *(_DWORD *)(stru_B05488.field_4C + 4 * v17),
                          0,
                          25);
        TextRenderer::DrawText(a0, (size_t)&v112, (IUnknown *)v2, v26, v48, v56, v65, v78); /*0x542ba7*/
        swprintf(&v112, (const size_t)&off_8287A4, *(const wchar_t *const *)(*p_CampaignScore_field_0x04 + 16), v36); /*0x542bbf*/
        aP5.customSound_controller[1] = v14; /*0x542bcc*/
        aP5.customSound_controller[2] = 343; /*0x542bd0*/
        v27 = (_DWORD *)(*(int (__thiscall **)(DSurface *, char *, int *, _DWORD, _DWORD))(v2->field_0 + 120))( /*0x542bf1*/
                          v2,
                          v109,
                          &aP5.customSound_controller[1],
                          *(_DWORD *)(stru_B05488.field_4C + 4 * v17),
                          0);
        TextRenderer::DrawText(&aP3.CampaignScore_field_0x08, (size_t)&Buffer, (IUnknown *)v2, v27, v42, v49, v57, v66); /*0x542c06*/
        NeedsSaveOrLink = 0; /*0x542c10*/
        aP5.NeedsSaveOrLink = 0; /*0x542c17*/
        aP5.abstractFlags = 0; /*0x542c1b*/
        if ( *(int *)&HouseClass_Player.__pad_5568[18384] > 0 ) /*0x542c1f*/
        {
          aP5.objectTypeFlags = *(_DWORD *)(*p_CampaignScore_field_0x04 + 100); /*0x542c2c*/
          aP5.uniqueId = *(_DWORD *)&HouseClass_Player.__pad_5568[18372]; /*0x542c30*/
          while ( aP5.objectTypeFlags != *(_DWORD *)(*(_DWORD *)aP5.uniqueId + 111) ) /*0x542c41*/
          {
            v29 = ++aP5.abstractFlags < *(_DWORD *)&HouseClass_Player.__pad_5568[18384]; /*0x542c4f*/
            aP5.uniqueId += 4; /*0x542c55*/
            if ( !v29 ) /*0x542c59*/
            {
              NeedsSaveOrLink = (const wchar_t *)aP5.NeedsSaveOrLink; /*0x542c5b*/
              goto LABEL_20; /*0x542c5f*/
            }
          }
          NeedsSaveOrLink = *(const wchar_t **)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[18372] /*0x542c6d*/
                                                          + 4 * aP5.abstractFlags)
                                              + 115);
        }
LABEL_20:
        swprintf(&Buffer, (const size_t)&off_828788, NeedsSaveOrLink, (CampaignScore *)0x19); /*0x542c70*/
        aP5.nextObject = (void *)v14; /*0x542c8c*/
        aP5.attachedTag = (void *)351; /*0x542c90*/
        v30 = (_DWORD *)(*(int (__thiscall **)(DSurface *, char *, void **, _DWORD, _DWORD))(v2->field_0 + 120))( /*0x542cb1*/
                          v2,
                          v100,
                          &aP5.nextObject,
                          *(_DWORD *)(stru_B05488.field_4C + 4 * v17),
                          0);
        TextRenderer::DrawText(aP5.location, (size_t)&v114, (IUnknown *)v2, v30, 25, v79, v87, v92); /*0x542cc6*/
        swprintf( /*0x542ce2*/
          &v114,
          (const size_t)&off_82876C,
          (const wchar_t *const)-*(int *)((char *)p_CampaignScore_field_0x04 + *(_DWORD *)&aP5.__pad_0[8]),
          v40);
        aP5.ambientSoundController[2] = v14; /*0x542cef*/
        aP5.ambientSoundController[3] = 359; /*0x542cf3*/
        v89 = 25; /*0x542d00*/
        v31 = (_DWORD *)(*(int (__thiscall **)(DSurface *, char *, int *, _DWORD, _DWORD))(v2->field_0 + 120))( /*0x542d14*/
                          v2,
                          v102,
                          &aP5.ambientSoundController[2],
                          *(_DWORD *)(stru_B05488.field_4C + 4 * v17),
                          0);
        TextRenderer::DrawText((int *)&aP5.lineTrailer, (size_t)&v113, (IUnknown *)v2, v31, v58, v67, v80, v88); /*0x542d29*/
        swprintf( /*0x542d48*/
          &v113,
          (const size_t)&off_828748,
          *(const wchar_t *const *)(*(_DWORD *)(*p_CampaignScore_field_0x04 + 4) + 40),
          *(CampaignScore **)(*(_DWORD *)(*p_CampaignScore_field_0x04 + 4) + 56));
        aP5.customSound_controller[0] = v14; /*0x542d56*/
        aP5.customSound_controller[1] = 367; /*0x542d5a*/
        v83 = 25; /*0x542d67*/
        v32 = (_DWORD *)(*(int (__thiscall **)(DSurface *, char *, int *, _DWORD, _DWORD))(v2->field_0 + 120))( /*0x542d7b*/
                          v2,
                          v104,
                          aP5.customSound_controller,
                          *(_DWORD *)(stru_B05488.field_4C + 4 * v17),
                          0);
        TextRenderer::DrawText(v98, (size_t)&v112, (IUnknown *)v2, v32, v50, v59, v68, v81); /*0x542d90*/
        swprintf( /*0x542dac*/
          &v112,
          (const size_t)&off_828724,
          *(const wchar_t *const *)(*p_CampaignScore_field_0x04 + 20),
          *(CampaignScore **)(*p_CampaignScore_field_0x04 + 24));
        aP5.customSound_controller[3] = v14; /*0x542dba*/
        aP5.customSound_controller[4] = 375; /*0x542dbe*/
        v73 = 25; /*0x542dc9*/
        v33 = (_DWORD *)(*(int (__thiscall **)(DSurface *, char *, int *, _DWORD, _DWORD))(v2->field_0 + 120))( /*0x542ddf*/
                          v2,
                          v106,
                          &aP5.customSound_controller[3],
                          *(_DWORD *)(stru_B05488.field_4C + 4 * v17),
                          0);
        TextRenderer::DrawText((int *)aP3.__pad_0, (size_t)&Buffer, (IUnknown *)v2, v33, v43, v51, v60, v69); /*0x542df4*/
        if ( *(_DWORD *)&HouseClass_Player.__pad_5568[8068] == 4 ) /*0x542e04*/
        {
          if ( HouseClass_Player.__pad_5568[18668] ) /*0x542e11*/
          {
            swprintf( /*0x542e3d*/
              &Buffer,
              (const size_t)&off_828708,
              (const wchar_t *const)(1000 * **(_DWORD **)&aP5.__pad_0[12] / 0x3Cu),
              (CampaignScore *)0x19);
            *(_DWORD *)&aP5.__pad_0[4] = v14; /*0x542e4a*/
            *(_DWORD *)&aP5.__pad_0[8] = 383; /*0x542e4e*/
            v52 = *(ObjectClass **)(stru_B05488.field_4C + 4 * v17); /*0x542e5f*/
            v34 = (_DWORD *)(*(int (__thiscall **)(DSurface *, char *))(v2->field_0 + 120))(v2, v108); /*0x542e6f*/
            TextRenderer::DrawText( /*0x542e84*/
              &aP5.spawnStatus,
              (size_t)&Buffer,
              (IUnknown *)v2,
              v34,
              (int)&aP5.__pad_0[4],
              v52,
              0,
              25);
          }
        }
        v1 = (CampaignScore *)aP5.referenceCount; /*0x542e8c*/
      }
      result = aP5.nextArrayIndex + 1; /*0x542e9b*/
      v14 += 100; /*0x542e9c*/
      ++p_CampaignScore_field_0x04; /*0x542e9f*/
      v29 = ++aP5.nextArrayIndex < v1[1].CampaignScore_field_0x20; /*0x542ea5*/
      *(_DWORD *)&aP5.__pad_0[12] += 4; /*0x542eab*/
    }
    while ( v29 );
  }
  return result; /*0x542eb5*/
}


// ==== 0x00542EC0  IPXManagerClass::Flush  this=IPXManagerClass  sig=csp ====
int __thiscall IPXManagerClass::_vt11(int *this, char a2)
{
  int v3; // edi
  _DWORD *v4; // ebx
  int v5; // eax
  int result; // eax
  int v7; // esi

  v3 = 0; /*0x542ec4*/
  if ( this->connCount > 0 ) /*0x542ecb*/
  {
    v4 = this + 10; /*0x542ed3*/
    do /*0x542eea*/
    {
      Rect::SetRedraw(*(_DWORD **)(*v4 + 4), a2); /*0x542edc*/
      ++v3; /*0x542ee4*/
      ++v4; /*0x542ee5*/
    }
    while ( v3 < this->connCount ); /*0x542eea*/
  }
  v5 = this->q048; /*0x542eee*/
  if ( v5 ) /*0x542ef3*/
    Rect::SetRedraw(*(_DWORD **)(v5 + 4), 1); /*0x542efa*/
  result = this->q04C; /*0x542eff*/
  if ( result ) /*0x542f04*/
    result = Rect::SetRedraw(*(_DWORD **)(result + 4), 1); /*0x542f0b*/
  v7 = this->__pad_014; /*0x542f10*/
  if ( v7 ) /*0x542f15*/
    return Rect::SetRedraw(*(_DWORD **)(v7 + 4), 1); /*0x542f1c*/
  return result; /*0x542f21*/
}


// ==== 0x00542F30  ObjectClass::method_542F30  this=ObjectClass  sig=csp ====
int __thiscall sub_542F30(_DWORD *this)
{
  unsigned int v1; // ebx
  int result; // eax
  int v3; // ebp
  _DWORD *i; // edi
  int v5; // esi
  _DWORD *v6; // ecx
  int TileIndex; // eax
  int v8; // [esp+8h] [ebp-8h]

  v1 = -1; /*0x542f38*/
  result = 0; /*0x542f3b*/
  v3 = 0; /*0x542f3d*/
  v8 = 0; /*0x542f45*/
  if ( (int)this->q044 > 0 ) /*0x542f49*/
  {
    for ( i = this + 10; ; ++i ) /*0x542f4d*/
    {
      v5 = 0; /*0x542f52*/
      v6 = *(_DWORD **)(*i + 4); /*0x542f54*/
      if ( (int)v6[10] <= 0 ) /*0x542f5c*/
        goto LABEL_12; /*0x542f5c*/
      while ( 1 ) /*0x542f5f*/
      {
        TileIndex = Terrain::GetTileIndex(v6, v5); /*0x542f5f*/
        if ( TileIndex ) /*0x542f66*/
          break; /*0x542f66*/
LABEL_8:
        ++v5; /*0x542f79*/
        v6 = *(_DWORD **)(*i + 4); /*0x542f7c*/
        if ( v5 >= v6[10] ) /*0x542f82*/
          goto LABEL_9; /*0x542f82*/
      }
      if ( *(_BYTE *)(*(_DWORD *)(TileIndex + 20) + 2) || (*(_BYTE *)TileIndex & 2) != 0 ) /*0x542f75*/
        break; /*0x542f75*/
LABEL_9:
      if ( TileIndex ) /*0x542f86*/
      {
        if ( *(_DWORD *)(TileIndex + 4) < v1 ) /*0x542f8d*/
        {
          v1 = *(_DWORD *)(TileIndex + 4); /*0x542f92*/
          v8 = *(_DWORD *)(TileIndex + 20); /*0x542f94*/
        }
      }
LABEL_12:
      if ( ++v3 >= this->q044 ) /*0x542fa3*/
        return v8; /*0x542fa5*/
    }
    TileIndex = 0; /*0x542f77*/
    goto LABEL_8; /*0x542f77*/
  }
  return result; /*0x542fab*/
}


// ==== 0x00542FC0  ObjectClass::Network_Init_542FC0  this=ObjectClass  sig=csp ====
int __thiscall sub_542FC0(_DWORD *this, int a2)
{
  _DWORD *v2; // ecx
  int result; // eax

  v2 = (_DWORD *)this->q048; /*0x542fc0*/
  if ( v2 ) /*0x542fc5*/
    return Network_Init_5402B0(v2, a2); /*0x542fcc*/
  return result; /*0x542fd1*/
}


// ==== 0x00542FE0  IPXManagerClass::Init  this=IPXManagerClass  sig=csp ====
int __thiscall IPXManagerClass::_vt15(_DWORD *this, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int result; // eax

  if ( a2 == -1 ) /*0x542fe7*/
    return EventClass::SetData(*(_DWORD **)(this->q048 + 4), a3, a4, a5, a6, a7); /*0x543008*/
  result = *(this + a2 + 10); /*0x543010*/
  if ( result ) /*0x543016*/
    return EventClass::SetData(*(_DWORD **)(result + 4), a3, a4, a5, a6, a7); /*0x543034*/
  return result; /*0x54300d*/
}


// ==== 0x00543040  IPXManagerClass::StubReturnFalse  this=IPXManagerClass  sig=csp ====
void __stdcall IPXManagerClass::StubReturnFalse(int a1, int a2)
{
  ; /*0x543040*/
}


// ==== 0x00543050  Network::SetPlayerCoords  this=Network  sig=csp ====
_DWORD *__thiscall Network::SetPlayerCoords(_DWORD *this, IPXManagerClass *aP1)
{
  _DWORD *result; // eax

  result = (_DWORD *)this->Network_field_0x4C; /*0x543050*/
  if ( result ) /*0x543055*/
  {
    result += 19; /*0x54305b*/
    *(IPXManagerClass *)result = *aP1; /*0x543060*/
    result[2] = aP1[1].Socket; /*0x54306b*/
  }
  return result; /*0x54306e*/
}


// ==== 0x00543080  Network::Disconnect  this=Network  sig=csp ====
int __thiscall Network_Disconnect(_DWORD *this)
{
  int result; // eax

  result = this->Network_field_0x48; /*0x543080*/
  if ( result ) /*0x543085*/
    *(_BYTE *)(result + 200) = 0; /*0x543087*/
  return result; /*0x54308e*/
}


// ==== 0x00543090  Connection::Close  this=Connection  sig=csp ====
int __thiscall Connection_Close(_DWORD *this)
{
  int result; // eax

  result = this->Connection_field_0x48; /*0x543090*/
  if ( result ) /*0x543095*/
    *(_BYTE *)(result + 200) = 1; /*0x543097*/
  return result; /*0x54309e*/
}


// ==== 0x005430C0  ObjectClass::StartGameWOL_Start  this=ObjectClass  sig=csp ====
int __thiscall sub_5430C0(_DWORD *this, int a2)
{
  int v2; // ecx
  int result; // eax

  v2 = this->q048; /*0x5430c0*/
  if ( v2 ) /*0x5430c5*/
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)v2 + 68))(v2, a2); /*0x5430ce*/
  return result; /*0x5430d1*/
}


// ==== 0x005430E0  IPXManagerClass::QueryInterface  this=IPXManagerClass  sig=csp ====
IPXManagerClass *__thiscall IPXManagerClass::QueryInterface(char *Block, char a2)
{
  IPXManagerClass::processPacket(Block); /*0x5430e3*/
  if ( (a2 & 1) != 0 ) /*0x5430ed*/
    __3_YAXPAX_Z(Block); /*0x5430f0*/
  return (IPXManagerClass *)Block; /*0x5430fa*/
}


// ==== 0x00543100  ConnManClass::getPlayerName  this=ConnManClass  sig=csp ====
_DWORD *__thiscall IPXManagerClass::getPlayerName(ConnManClass *this, char a2)
{
  this->vfptr = &vt_ConnManClass; /*0x543109*/
  if ( (a2 & 1) != 0 ) /*0x54310f*/
    __3_YAXPAX_Z(this); /*0x543112*/
  return &this->vfptr; /*0x54311c*/
}


// ==== 0x00543120  sub_543120  this=-  sig=ida-proto ====
void sub_543120()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x54312c*/
  unk_AA06D8 = Math::Sqrt(v0 + v0); /*0x54313e*/
}


// ==== 0x00543150  sub_543150  this=-  sig=ida-proto ====
void sub_543150()
{
  unk_AA0728 = unk_AA06D8 / 60.0; /*0x54315c*/
}


// ==== 0x00543170  sub_543170  this=-  sig=ida-proto ====
void sub_543170()
{
  unk_AA0710 = 1.0 / unk_AA0728; /*0x54317c*/
}


// ==== 0x00543190  sub_543190  this=-  sig=ida-proto ====
void sub_543190()
{
  unk_AA0708 = 0.0174532925199433 * 45.0; /*0x54319c*/
}


// ==== 0x005431B0  sub_5431B0  this=-  sig=ida-proto ====
void sub_5431B0()
{
  unk_AA06E0 = 0.0174532925199433 * 60.0; /*0x5431bc*/
}


// ==== 0x005431D0  sub_5431D0  this=-  sig=ida-proto ====
void sub_5431D0()
{
  unk_AA06B8 = 0.0174532925199433 * 90.0; /*0x5431dc*/
}


// ==== 0x005431F0  sub_5431F0  this=-  sig=ida-proto ====
__int64 sub_5431F0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(unk_AA06B8 - unk_AA06E0); /*0x543202*/
  result = Math::RoundToInt(v0 * unk_AA06D8 * 0.5); /*0x543216*/
  unk_AA0730 = result; /*0x54321b*/
  return result; /*0x543220*/
}


// ==== 0x00543230  sub_543230  this=-  sig=ida-proto ====
void sub_543230()
{
  unk_AA06E8 = Math::ArcTan((double)unk_AA0730 * 0.00390625); /*0x543247*/
}


// ==== 0x00543260  sub_543260  this=-  sig=ida-proto ====
void sub_543260()
{
  unk_AA0700 = Math::ArcTan((double)(2 * unk_AA0730) / unk_AA06D8); /*0x543282*/
}


// ==== 0x00543290  sub_543290  this=-  sig=ida-proto ====
__int64 sub_543290()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * unk_AA0730) + 0.5); /*0x5432ab*/
  unk_AA0724 = result; /*0x5432b0*/
  return result; /*0x5432b6*/
}


// ==== 0x005432C0  sub_5432C0  this=-  sig=ida-proto ====
int sub_5432C0()
{
  unk_AA06D0 = 0; /*0x5432c2*/
  unk_AA06D2 = 0; /*0x5432c8*/
  return 0; /*0x5432ce*/
}


// ==== 0x005432D0  sub_5432D0  this=-  sig=ida-proto ====
int sub_5432D0()
{
  unk_AA06F0 = 0; /*0x5432d2*/
  unk_AA06F4 = 0; /*0x5432d7*/
  unk_AA06F8 = 0; /*0x5432dc*/
  return 0; /*0x5432e1*/
}


// ==== 0x005432F0  sub_5432F0  this=-  sig=ida-proto ====
int sub_5432F0()
{
  unk_AA0720 = 0; /*0x5432f5*/
  unk_AA0718 = 128; /*0x5432ff*/
  unk_AA071C = 128; /*0x543304*/
  return 128; /*0x543309*/
}


// ==== 0x00543310  sub_543310  this=-  sig=ida-proto ====
int sub_543310()
{
  unk_AA06C0 = 0; /*0x543312*/
  unk_AA06C4 = 0; /*0x543317*/
  unk_AA06C8 = 0; /*0x54331c*/
  unk_AA06CC = 0; /*0x543321*/
  return 0; /*0x543326*/
}


// ==== 0x00543330  AbstractClass::ModifyCellTiles  this=IsometricTileClass  sig=csp ====
char __thiscall AbstractClass::ModifyCellTiles(IsometricTileClass *this, int a2)
{
  IsometricTileClass *v2; // edi
  int v3; // esi
  IsometricTileClass v4; // eax
  int v5; // ecx
  int v6; // ebp
  _WORD *v7; // eax
  _DWORD *v8; // esi
  IsometricTileClass v9; // eax
  int v10; // ebx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // edx
  int v15; // eax
  int v16; // edx
  _DWORD *v17; // eax
  int v18; // edx
  _DWORD *v19; // ecx
  bool v20; // cc
  void *NeighbourContent; // eax
  void *v22; // eax
  void *v23; // eax
  void *v24; // eax
  IsometricTileClass v25; // eax
  AudioController *v27; // [esp+Ch] [ebp-40h]
  char *v28; // [esp+10h] [ebp-3Ch]
  int v30; // [esp+18h] [ebp-34h]
  int v31; // [esp+1Ch] [ebp-30h]
  int v32; // [esp+20h] [ebp-2Ch] BYREF
  int v33; // [esp+24h] [ebp-28h]
  int v34; // [esp+28h] [ebp-24h]
  int v35; // [esp+2Ch] [ebp-20h]
  int v36; // [esp+30h] [ebp-1Ch] BYREF
  int v37; // [esp+38h] [ebp-14h]
  int v38; // [esp+3Ch] [ebp-10h]
  _BYTE v39[12]; // [esp+40h] [ebp-Ch] BYREF

  v2 = this; /*0x543335*/
  v30 = (*(int (__thiscall **)(IsometricTileClass *))(this->health)(this); /*0x543342*/
  if ( !v30 ) /*0x543346*/
    return 0; /*0x543346*/
  v3 = a2; /*0x54334c*/
  if ( !(unsigned __int8)ObjectClass::UpdateProductionDisplay((#374 *)v2) ) /*0x543353*/
    return 0; /*0x543741*/
  v4 = v2[43]; /*0x543360*/
  v27 = 0; /*0x543366*/
  if ( *(int *)(*(_DWORD *)&v4 + 744) > 0 ) /*0x543376*/
  {
    while ( 1 ) /*0x54337e*/
    {
      v5 = *(_DWORD *)(*(_DWORD *)&v4 + 740); /*0x54337e*/
      v6 = 0; /*0x543384*/
      v34 = 0; /*0x543388*/
      if ( v5 <= 0 ) /*0x54338c*/
        goto LABEL_45; /*0x54338c*/
      do /*0x5436f2*/
      {
        v7 = (_WORD *)(*(int (__thiscall **)(IsometricTileClass *, int *))(*(_DWORD *)v2 + 440))(v2, &v36); /*0x54339b*/
        LOWORD(v31) = *v7 + v6; /*0x5433b0*/
        HIWORD(v31) = (_WORD)v27 + v7[1]; /*0x5433b9*/
        v32 = v31; /*0x5433c8*/
        if ( !LayerClass::CoordinatesLegal(&MEMORY[0x87F7E8], (__int16 *)&v32) ) /*0x5433cc*/
          goto LABEL_44; /*0x5433cc*/
        v8 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v32); /*0x5433e8*/
        v9 = v2[43]; /*0x5433ea*/
        v10 = v6 + (_DWORD)v27 * *(_DWORD *)(*(_DWORD *)&v9 + 740); /*0x5433ff*/
        if ( !*(_DWORD *)(v30 + 4 * v10 + 16) ) /*0x543401*/
          goto LABEL_44; /*0x543407*/
        if ( !a2 ) /*0x543413*/
        {
          if ( v8[14] == *(_DWORD *)(*(_DWORD *)&v9 + 660) && *((unsigned __int8 *)v8 + 282) == v10 ) /*0x543430*/
          {
            v8[14] = 0xFFFF; /*0x54343a*/
            *((_BYTE *)v8 + 282) = 0; /*0x543441*/
            *((_BYTE *)v8 + 283) -= *(_BYTE *)(*(_DWORD *)(v30 + 4 * v10 + 16) + 40); /*0x543457*/
          }
          goto LABEL_43; /*0x54345d*/
        }
        if ( a2 != 1 && a2 != 3 ) /*0x54346a*/
          goto LABEL_43; /*0x54346a*/
        v11 = *(_DWORD *)(*(_DWORD *)&v9 + 660); /*0x543470*/
        if ( v11 == unk_AA10B0 ) /*0x54347e*/
        {
          v8[14] = 0xFFFF; /*0x543480*/
        }
        else
        {
          v8[14] = v11; /*0x54348c*/
          *((_BYTE *)v8 + 282) = v10; /*0x54348f*/
          *((_BYTE *)v8 + 284) = HouseClass::GetCameoTypeIndex(*(void **)&v2[43], v10); /*0x5434a1*/
          if ( v8[14] == g_TerrainTypeTable2 + 5 ) /*0x5434b5*/
          {
            switch ( *((_BYTE *)v8 + 282) ) /*0x5434cc*/
            {
              case 0: /*0x5434cc*/
              case 3: /*0x5434cc*/
              case 6: /*0x5434cc*/
              case 9: /*0x5434cc*/
                v12 = g_CellTileLookup; /*0x5434d3*/
                *((_BYTE *)v8 + 282) = 0; /*0x5434d8*/
                v8[14] = v12 + 1; /*0x5434e0*/
                break; /*0x5434e0*/
              default:
                break;
            }
          }
          if ( v8[14] == unk_AA1098 + 5 ) /*0x5434f1*/
          {
            switch ( *((_BYTE *)v8 + 282) ) /*0x543508*/
            {
              case 0: /*0x543508*/
              case 3: /*0x543508*/
              case 6: /*0x543508*/
              case 9: /*0x543508*/
                v13 = unk_AA109C; /*0x54350f*/
                *((_BYTE *)v8 + 282) = 0; /*0x543514*/
                v8[14] = v13 + 1; /*0x54351c*/
                break; /*0x54351c*/
              default:
                break;
            }
          }
          if ( v8[14] == g_TerrainTypeTable2 + 8 && *((_BYTE *)v8 + 282) <= 3u ) /*0x543536*/
          {
            v14 = g_CellTileLookup; /*0x543538*/
            *((_BYTE *)v8 + 282) = 0; /*0x54353e*/
            v8[14] = v14; /*0x543545*/
          }
          if ( v8[14] != unk_AA1098 + 8 || *((_BYTE *)v8 + 282) > 3u ) /*0x54355e*/
            goto LABEL_28; /*0x54355e*/
          v8[14] = unk_AA109C; /*0x543566*/
        }
        *((_BYTE *)v8 + 282) = 0; /*0x543569*/
LABEL_28:
        v15 = v8[17]; /*0x543570*/
        v8[18] = -1; /*0x543573*/
        *((_BYTE *)v8 + 287) = 0; /*0x54357d*/
        if ( v15 < 27 ) /*0x543584*/
          goto LABEL_42; /*0x543584*/
        if ( v15 >= 38 ) /*0x54358d*/
          goto LABEL_42; /*0x54358d*/
        v16 = *v8; /*0x543599*/
        v8[80] &= ~0x20000u; /*0x5435a2*/
        v17 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(v16 + 72))(v8, v39); /*0x5435ad*/
        v18 = *v17 + 384; /*0x5435bb*/
        v37 = v17[1] + 384; /*0x5435c1*/
        v38 = v17[2]; /*0x5435cd*/
        v33 = 0; /*0x5435d3*/
        if ( MEMORY[0xA8E9B8] <= 0 ) /*0x5435db*/
          goto LABEL_42; /*0x5435db*/
        v35 = *(_DWORD *)(*(_DWORD *)&MEMORY[0xA83D84]->vtable0[4 * v8[17]] + 668); /*0x5435f8*/
        v28 = (char *)MEMORY[0xA8E9AC]; /*0x5435fc*/
        while ( 1 ) /*0x543608*/
        {
          v19 = *(_DWORD **)v28; /*0x543608*/
          if ( *(_DWORD *)(*(_DWORD *)v28 + 200) == v35 ) /*0x543610*/
            break; /*0x543610*/
LABEL_37:
          v20 = ++v33 < MEMORY[0xA8E9B8]; /*0x543637*/
          v28 += 4; /*0x54364f*/
          if ( !v20 ) /*0x543653*/
            goto LABEL_42; /*0x543653*/
        }
        if ( v19[39] != v18 || v19[40] != v37 || v19[41] != v38 ) /*0x543631*/
        {
          v2 = this; /*0x543633*/
          goto LABEL_37; /*0x543633*/
        }
        if ( v19 ) /*0x543659*/
          (*(void (__thiscall **)(_DWORD *, int))(*v19 + 32))(v19, 1); /*0x54365f*/
        v2 = this; /*0x543662*/
LABEL_42:
        v8[17] = -1; /*0x543666*/
        *((_BYTE *)v8 + 286) = 0; /*0x543671*/
        *((_BYTE *)v8 + 283) += *(_BYTE *)(*(_DWORD *)(v30 + 4 * v10 + 16) + 40); /*0x543689*/
        CellClass::DetermineTileType((int)v8); /*0x54368f*/
        NeighbourContent = Cell::GetNeighbourContent(v8, 0); /*0x543698*/
        CellClass::DetermineTileType((int)NeighbourContent); /*0x54369f*/
        v22 = Cell::GetNeighbourContent(v8, 2u); /*0x5436a8*/
        CellClass::DetermineTileType((int)v22); /*0x5436af*/
        v23 = Cell::GetNeighbourContent(v8, 4u); /*0x5436b8*/
        CellClass::DetermineTileType((int)v23); /*0x5436bf*/
        v24 = Cell::GetNeighbourContent(v8, 6u); /*0x5436c8*/
        CellClass::DetermineTileType((int)v24); /*0x5436cf*/
        v6 = v34; /*0x5436d4*/
LABEL_43:
        House::AnnounceUpgrade((int)v8, -1); /*0x5436d8*/
LABEL_44:
        v25 = v2[43]; /*0x5436e1*/
        v34 = ++v6; /*0x5436e8*/
      }
      while ( v6 < *(_DWORD *)(*(_DWORD *)&v25 + 740) ); /*0x5436f2*/
LABEL_45:
      v4 = v2[43]; /*0x5436f8*/
      v27 = (AudioController *)((char *)v27 + 1); /*0x543709*/
      if ( (int)v27 >= *(_DWORD *)(*(_DWORD *)&v4 + 744) ) /*0x54370f*/
      {
        v3 = a2; /*0x543715*/
        break; /*0x543715*/
      }
    }
  }
  if ( v3 == 1 || v3 == 3 ) /*0x543723*/
  {
    v2[29].__tail_0[0] = 0; /*0x543727*/
    if ( v2 ) /*0x54372b*/
      (*(void (__thiscall **)(IsometricTileClass *, int))(*(_DWORD *)v2 + 32))(v2, 1); /*0x543733*/
  }
  return 1; /*0x543736*/
}


// ==== 0x00543780  IsometricTileClass::IsometricTileClass  this=IsometricTileClass  sig=csp ====
IsometricTileClass *__thiscall IsometricTileClass::IsometricTileClass(
        IsometricTileClass *this,
        IsometricTileClass *aP1,
        IsometricTileClass *aP2)
{
  int v4; // eax

  ObjectClass::ctor(this); /*0x543786*/
  this->q02B = *(IsometricTileClass *)(*(_DWORD *)&HouseClass_Player.__pad_5568[23160] + 4 * (_DWORD)aP1); /*0x54379c*/
  *this = (IsometricTileClass)&IsometricTileClass::`vftable'; /*0x5437a2*/
  this->vtable2 = &IsometricTileClass::`vftable'; /*0x5437a8*/
  this->vtable3 = &IsometricTileClass::`vftable'; /*0x5437af*/
  this->vtable4 = &vt_IsometricTileClass; /*0x5437b6*/
  if ( *(_WORD *)aP2->__tail_0 != unk_AA06D0 || *(_WORD *)&aP2->__tail_0[2] != unk_AA06D2 ) /*0x5437d4*/
  {
    this->q081 = 0; /*0x543805*/
    ObjectClass::SetPosition((#374 *)this); /*0x54380c*/
    (*(void (__thiscall **)(IsometricTileClass *, int))(this->q124)(this, 1); /*0x543818*/
  }
  if ( *(int *)&stru_87C374.__pad_14B0[7996] < *(int *)&stru_87C374.__pad_14B0[7988] /*0x543855*/
    || (stru_87C374.__pad_14B0[7993] || !*(_DWORD *)&stru_87C374.__pad_14B0[7988])
    && *(int *)&stru_87C374.__pad_14B0[8000] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_87C374.__pad_14B0[7980] + 8))(
         &stru_87C374.__pad_14B0[7980],
         *(_DWORD *)&stru_87C374.__pad_14B0[7988] + *(_DWORD *)&stru_87C374.__pad_14B0[8000],
         0) )
  {
    v4 = (*(_DWORD *)&stru_87C374.__pad_14B0[7996])++; /*0x543862*/
    *(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_14B0[7984] + 4 * v4) = this; /*0x543871*/
  }
  return this; /*0x543876*/
}


// ==== 0x00543990  AbstractClass::COMStub_5  this=IsometricTileClass  sig=csp ====
int __thiscall AbstractClass::COMStub_5(void *this, ObjectClass *aP1, int aP1a)
{
  ObjectClass *Register; // edi

  Register = (ObjectClass *)BuildingClass::SaveLoad_Register((#374 *)this); /*0x5439a1*/
  if ( (int)Register >= 0 ) /*0x5439a5*/
  {
    if ( aP1 ) /*0x5439a9*/
    {
      ObjectClass::Init(aP1, (AbstractClass *)&aP1a); /*0x5439b2*/
      *(_DWORD *)aP1->__pad_0 = &IsometricTileClass::`vftable'; /*0x5439b7*/
      *(_DWORD *)&aP1->__pad_0[4] = &IsometricTileClass::`vftable'; /*0x5439bd*/
      *(_DWORD *)&aP1->__pad_0[8] = &IsometricTileClass::`vftable'; /*0x5439c4*/
      *(_DWORD *)&aP1->__pad_0[12] = &vt_IsometricTileClass; /*0x5439cb*/
    }
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&stru_B05488.__pad_579C[5356], (MouseClass *)&aP1[1]); /*0x5439de*/
  }
  return (int)Register->__pad_0; /*0x5439e5*/
}


// ==== 0x005439F0  AbstractClass::COMStub_6  this=IsometricTileClass  sig=csp ====
int __stdcall AbstractClass::COMStub_6(TechnoTypeClass *aP0, int *a1, int aP2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2); /*0x5439ff*/
  if ( result >= 0 ) /*0x543a06*/
    return 0; /*0x543a08*/
  return result; /*0x543a0a*/
}


// ==== 0x00543A10  AbstractClass::COMStub_54  this=IsometricTileClass  sig=csp ====
int __thiscall AbstractClass::_vt54(_BYTE *this, int a2, int a3)
{
  int v4; // eax

  v4 = *(_DWORD *)this; /*0x543a17*/
  this->q081 = 0; /*0x543a1c*/
  (*(void (__thiscall **)(_BYTE *, int))(v4 + 436))(this, a2); /*0x543a23*/
  return (*(int (__thiscall **)(_BYTE *, int))(this->q124)(this, 1); /*0x543a35*/
}


// ==== 0x00543A40  AbstractClass::COMStub_53  this=IsometricTileClass  sig=csp ====
char __thiscall AbstractClass::_vt53(_BYTE *this)
{
  if ( !MEMORY[0xA8E9A0] || this->q081 ) /*0x543a4c*/
    return 0; /*0x543a88*/
  (*(void (__thiscall **)(_BYTE *))(this->q150)(this); /*0x543a58*/
  (*(void (__thiscall **)(_BYTE *, int))(this->q0DC)(this, 1); /*0x543a64*/
  (*(void (__thiscall **)(_BYTE *, _DWORD))(this->q124)(this, 0); /*0x543a70*/
  this->q081 = 1; /*0x543a76*/
  this->q080 = 0; /*0x543a7d*/
  return 1; /*0x543a86*/
}


// ==== 0x00543A90  AbstractClass::COMStub_Ret176_12  this=IsometricTileClass  sig=csp ====
int AbstractClass::_vt12()
{
  return 176; /*0x543a95*/
}


// ==== 0x00543AA0  AbstractClass::COMStub_Ret17_11  this=IsometricTileClass  sig=csp ====
int AbstractClass::_vt11()
{
  return 17; /*0x543aa5*/
}


// ==== 0x00543AB0  IsometricTileClass::nullsub_0  this=IsometricTileClass  sig=csp ====
int __stdcall nullsub_0(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x543ab6*/
    return -2147467261; /*0x543ab8*/
  *a2 = 237448640; /*0x543ac6*/
  a2[1] = 298949647; /*0x543ace*/
  a2[2] = -1610610249; /*0x543ad7*/
  a2[3] = -777003740; /*0x543ae0*/
  return 0; /*0x543abd*/
}


// ==== 0x00543AF0  IsometricTileClass::nullsub_0_0  this=IsometricTileClass  sig=csp ====
int __thiscall nullsub_0_0(_DWORD *this)
{
  return this->q0AC; /*0x543af6*/
}


// ==== 0x00543B00  IsometricTileClass::nullsub_154  this=IsometricTileClass  sig=csp ====
void __stdcall nullsub_154(int a1, int a2)
{
  ; /*0x543b00*/
}


// ==== 0x00543B10  AbstractClass::CreateInstance  this=IsometricTileClass  sig=csp ====
IsometricTileClass *__thiscall AbstractClass::CreateInstance(void **Block, char a2)
{
  int v3; // eax
  int v4; // eax
  void **v6; // [esp+Ch] [ebp-4h] BYREF

  *Block = &IsometricTileClass::`vftable'; /*0x543b16*/
  *(Block + 1) = &IsometricTileClass::`vftable'; /*0x543b1c*/
  *(Block + 2) = &IsometricTileClass::`vftable'; /*0x543b23*/
  *(Block + 3) = &vt_IsometricTileClass; /*0x543b2a*/
  AbstractClass::AnnounceExpiredPointer(Block, 1); /*0x543b31*/
  if ( MEMORY[0xA8E9A0] && !*((_BYTE *)Block + 129) ) /*0x543b3f*/
  {
    (*((void (__thiscall **)(void **))*Block + 84))(Block); /*0x543b4d*/
    (*((void (__thiscall **)(void **, int))*Block + 55))(Block, 1); /*0x543b59*/
    (*((void (__thiscall **)(void **, _DWORD))*Block + 73))(Block, 0); /*0x543b65*/
    *((_BYTE *)Block + 129) = 1; /*0x543b6b*/
    *((_BYTE *)Block + 128) = 0; /*0x543b72*/
  }
  *(Block + 43) = 0; /*0x543b7d*/
  v6 = Block; /*0x543b93*/
  v3 = (*(int (__thiscall **)(int *, void ***))(MEMORY[0x87F750] + 16))(&MEMORY[0x87F750], &v6); /*0x543b97*/
  if ( v3 != -1 && v3 < MEMORY[0x87F760] && v3 < --MEMORY[0x87F760] ) /*0x543bb2*/
  {
    do /*0x543bca*/
    {
      ++v3; /*0x543bba*/
      *((_DWORD *)MEMORY[0x87F754] + v3 - 1) = *((_DWORD *)MEMORY[0x87F754] + v3); /*0x543bbe*/
    }
    while ( v3 < MEMORY[0x87F760] ); /*0x543bca*/
  }
  v6 = Block; /*0x543bdc*/
  v4 = (*(int (__thiscall **)(int *, void ***))(MEMORY[0xB0F670] + 16))(&MEMORY[0xB0F670], &v6); /*0x543be0*/
  if ( v4 != -1 && v4 < MEMORY[0xB0F680] && v4 < --MEMORY[0xB0F680] ) /*0x543bfb*/
  {
    do /*0x543c13*/
    {
      ++v4; /*0x543c03*/
      *((_DWORD *)MEMORY[0xB0F674] + v4 - 1) = *((_DWORD *)MEMORY[0xB0F674] + v4); /*0x543c07*/
    }
    while ( v4 < MEMORY[0xB0F680] ); /*0x543c13*/
  }
  ObjectClass::Dtor(Block); /*0x543c17*/
  if ( (a2 & 1) != 0 ) /*0x543c21*/
    __3_YAXPAX_Z(Block); /*0x543c24*/
  return (IsometricTileClass *)Block; /*0x543c2e*/
}


// ==== 0x00543C40  sub_543C40  this=-  sig=ida-proto ====
int sub_543C40()
{
  unk_AA1040 = 0; /*0x543c42*/
  unk_AA1044 = 0; /*0x543c47*/
  unk_AA1048 = 0; /*0x543c4c*/
  unk_AA104C = 0; /*0x543c51*/
  return 0; /*0x543c56*/
}


// ==== 0x00543C60  sub_543C60  this=-  sig=ida-proto ====
void sub_543C60()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x543c6c*/
  unk_AA1070 = Math::Sqrt(v0 + v0); /*0x543c7e*/
}


// ==== 0x00543C90  sub_543C90  this=-  sig=ida-proto ====
void sub_543C90()
{
  dbl_ABC2C0 = unk_AA1070 / 60.0; /*0x543c9c*/
}


// ==== 0x00543CB0  sub_543CB0  this=-  sig=ida-proto ====
void sub_543CB0()
{
  dbl_ABC1F0 = 1.0 / dbl_ABC2C0; /*0x543cbc*/
}


// ==== 0x00543CD0  sub_543CD0  this=-  sig=ida-proto ====
void sub_543CD0()
{
  dbl_ABC1E0 = 0.0174532925199433 * 45.0; /*0x543cdc*/
}


// ==== 0x00543CF0  sub_543CF0  this=-  sig=ida-proto ====
void sub_543CF0()
{
  unk_AA1128 = 0.0174532925199433 * 60.0; /*0x543cfc*/
}


// ==== 0x00543D10  sub_543D10  this=-  sig=ida-proto ====
void sub_543D10()
{
  unk_AA0E30 = 0.0174532925199433 * 90.0; /*0x543d1c*/
}


// ==== 0x00543D30  sub_543D30  this=-  sig=ida-proto ====
__int64 sub_543D30()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(unk_AA0E30 - unk_AA1128); /*0x543d42*/
  result = Math::RoundToInt(v0 * unk_AA1070 * 0.5); /*0x543d56*/
  dword_ABC550 = result; /*0x543d5b*/
  return result; /*0x543d60*/
}


// ==== 0x00543D70  sub_543D70  this=-  sig=ida-proto ====
void sub_543D70()
{
  unk_AA1138 = Math::ArcTan((double)dword_ABC550 * 0.00390625); /*0x543d87*/
}


// ==== 0x00543DA0  sub_543DA0  this=-  sig=ida-proto ====
void sub_543DA0()
{
  dbl_ABB118 = Math::ArcTan((double)(2 * dword_ABC550) / unk_AA1070); /*0x543dc2*/
}


// ==== 0x00543DD0  sub_543DD0  this=-  sig=ida-proto ====
__int64 sub_543DD0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABC550) + 0.5); /*0x543deb*/
  dword_ABC2BC = result; /*0x543df0*/
  return result; /*0x543df6*/
}


// ==== 0x00543E00  sub_543E00  this=-  sig=ida-proto ====
int sub_543E00()
{
  unk_AA105C[0] = 0; /*0x543e02*/
  return 0; /*0x543e0e*/
}


// ==== 0x00543E10  sub_543E10  this=-  sig=ida-proto ====
int sub_543E10()
{
  dword_ABB0F8 = 0; /*0x543e12*/
  dword_ABB0FC = 0; /*0x543e17*/
  dword_ABB100 = 0; /*0x543e1c*/
  return 0; /*0x543e21*/
}


// ==== 0x00543E30  sub_543E30  this=-  sig=ida-proto ====
int sub_543E30()
{
  dword_ABC208 = 0; /*0x543e35*/
  dword_ABC200 = 128; /*0x543e3f*/
  dword_ABC204 = 128; /*0x543e44*/
  return 128; /*0x543e49*/
}


// ==== 0x00543E50  sub_543E50  this=-  sig=ida-proto ====
_BYTE *sub_543E50()
{
  _BYTE *result; // eax
  int v1; // ecx

  result = &MEMORY[0xABBED2]; /*0x543e50*/
  v1 = 256; /*0x543e55*/
  do /*0x543e68*/
  {
    *(result - 2) = 0; /*0x543e5c*/
    *(result - 1) = 0; /*0x543e5f*/
    *result = 0; /*0x543e62*/
    result += 3; /*0x543e64*/
    --v1; /*0x543e67*/
  }
  while ( v1 ); /*0x543e68*/
  return result; /*0x543e6a*/
}


// ==== 0x00543E70  sub_543E70  this=-  sig=ida-proto ====
int sub_543E70()
{
  unk_AA107C = 0; /*0x543e77*/
  unk_AA1080 = 0; /*0x543e7c*/
  unk_AA1084 = 1; /*0x543e81*/
  unk_AA1085 = 0; /*0x543e88*/
  unk_AA1078 = (int)&vt_DynamicVectorClass_IsometricTileTypeClass_TileInsertType; /*0x543e8d*/
  unk_AA108C = 10; /*0x543e97*/
  unk_AA1088 = 0; /*0x543ea1*/
  return atexit(sub_543EB0); /*0x543eac*/
}


// ==== 0x00543EB0  sub_543EB0  this=-  sig=ida-proto ====
void __cdecl sub_543EB0()
{
  if ( (unk_AA0E2C & 1) == 0 ) /*0x543eba*/
  {
    unk_AA1078 = (int)&vt_VectorClass_IsometricTileTypeClass_TileInsertType; /*0x543ebe*/
    unk_AA0E2C |= 1u; /*0x543ed1*/
    if ( unk_AA107C ) /*0x543ed7*/
    {
      if ( unk_AA1085 ) /*0x543ee1*/
      {
        __3_YAXPAX_Z(unk_AA107C); /*0x543ee4*/
        unk_AA107C = 0; /*0x543eec*/
      }
    }
    unk_AA1085 = 0; /*0x543ef6*/
    unk_AA1080 = 0; /*0x543efd*/
  }
}


// ==== 0x00544690  sub_544690  this=-  sig=ida-proto ====
int sub_544690()
{
  dword_ABC21C = 0; /*0x544699*/
  dword_ABC22C = 0; /*0x54469f*/
  dword_ABC23C = 0; /*0x5446a5*/
  dword_ABC24C = 0; /*0x5446ab*/
  dword_ABC210 = 0; /*0x5446b1*/
  dword_ABC214 = 0; /*0x5446b6*/
  dword_ABC218 = 0; /*0x5446bc*/
  dword_ABC220 = 0; /*0x5446c2*/
  dword_ABC224 = 0; /*0x5446c7*/
  dword_ABC228 = 0; /*0x5446cd*/
  dword_ABC230 = 0; /*0x5446d3*/
  dword_ABC234 = 0; /*0x5446d8*/
  dword_ABC238 = 0; /*0x5446de*/
  dword_ABC240 = 0; /*0x5446e4*/
  dword_ABC244 = 0; /*0x5446e9*/
  dword_ABC248 = 0; /*0x5446ef*/
  dword_ABC25C = 12; /*0x544709*/
  dword_ABC250 = 13; /*0x54470f*/
  dword_ABC254 = 6; /*0x544714*/
  dword_ABC258 = 48; /*0x54471a*/
  dword_ABC26C = 0; /*0x544728*/
  dword_ABC260 = 0; /*0x54472e*/
  dword_ABC264 = 0; /*0x544733*/
  dword_ABC268 = 0; /*0x544739*/
  dword_ABC27C = 12; /*0x544753*/
  dword_ABC270 = 14; /*0x544759*/
  dword_ABC274 = 1; /*0x54475e*/
  dword_ABC278 = 48; /*0x544764*/
  dword_ABC28C = 0; /*0x544772*/
  dword_ABC29C = 0; /*0x544778*/
  dword_ABC2AC = 0; /*0x54477e*/
  dword_ABC280 = 0; /*0x544784*/
  dword_ABC284 = 0; /*0x544789*/
  dword_ABC288 = 0; /*0x54478f*/
  dword_ABC290 = 0; /*0x544795*/
  dword_ABC294 = 0; /*0x54479a*/
  dword_ABC298 = 0; /*0x5447a0*/
  dword_ABC2A0 = 0; /*0x5447a6*/
  dword_ABC2A4 = 0; /*0x5447ab*/
  dword_ABC2A8 = 0; /*0x5447b1*/
  return 0; /*0x5447b7*/
}


// ==== 0x005447C0  TerrainTypeClass::Construct  this=MapClass  sig=csp ====
_DWORD *__thiscall TerrainTypeClass::Construct(
        _DWORD *this,
        int a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        MapClass *aP4,
        char a6)
{
  int v7; // eax
  int v8; // eax
  char Destination[48]; // [esp+10h] [ebp-34h] BYREF
  char v11; // [esp+40h] [ebp-4h]

  ObjectTypeClass::ConstructFull((int)this, (AbstractClass *)aP4); /*0x5447ce*/
  this->MapClass_field_0x294 = a2; /*0x5447d9*/
  this->__pad_298 = 0xFFFF; /*0x5447e4*/
  this->q0A7 = 0xFFFF; /*0x5447ea*/
  this->q0A8 = 0; /*0x5447f0*/
  this->q0AA = 0; /*0x5447f8*/
  this->q0AB = 0; /*0x5447fe*/
  *((_BYTE *)this + 688) = 1; /*0x544804*/
  *((_BYTE *)this + 689) = 0; /*0x54480b*/
  this->q0A9 = &vt_DynamicVectorClass_unsigned_short; /*0x544811*/
  this->q0AE = 10; /*0x54481b*/
  this->q0AD = 0; /*0x544825*/
  this->q0B3 = 0; /*0x544830*/
  this->q0B0 = -1; /*0x544836*/
  this->q0B1 = -1; /*0x54483c*/
  this->q0B2 = -1; /*0x544842*/
  this->q0B4 = 0; /*0x544848*/
  this->q0B5 = -1; /*0x544852*/
  this->q0AF = 0; /*0x544868*/
  this->q0B6 = 0; /*0x54486e*/
  this->q0B7 = a3; /*0x544874*/
  this->MapClass_field_0xB8 = 0; /*0x54487a*/
  *((_BYTE *)this + 737) = 0; /*0x544880*/
  *((_BYTE *)this + 738) = 1; /*0x544886*/
  *((_BYTE *)this + 739) = 0; /*0x54488d*/
  this->q0B9 = 0; /*0x544893*/
  this->q2E8 = 0; /*0x544899*/
  this->__pad_2EC = a4; /*0x54489f*/
  this->q0BC = 1; /*0x5448a5*/
  *((_BYTE *)this + 756) = 0; /*0x5448af*/
  *((_BYTE *)this + 773) = 1; /*0x5448b5*/
  *((_BYTE *)this + 774) = 0; /*0x5448bc*/
  this->MapClass_field_0x308 = 0; /*0x5448c2*/
  *this = &IsometricTileTypeClass::`vftable'; /*0x5448c8*/
  this->MapClass_field_0x4 = &IsometricTileTypeClass::`vftable'; /*0x5448cf*/
  this->MapClass_field_0x8 = &IsometricTileTypeClass::`vftable'; /*0x5448d6*/
  this->MapClass_field_0xC = &vt_IsometricTileTypeClass; /*0x5448dd*/
  if ( *(int *)&MEMORY[0xB077F8].__pad_579C[9964] < *(int *)&MEMORY[0xB077F8].__pad_579C[9956] /*0x544917*/
    || (MEMORY[0xB077F8].__pad_579C[9961] || !*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9956])
    && *(int *)&MEMORY[0xB077F8].__pad_579C[9968] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9948] + 8))(
         &MEMORY[0xB077F8].__pad_579C[9948],
         *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9956] + *(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9968],
         0) )
  {
    v7 = (*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9964])++; /*0x544924*/
    *(_DWORD *)(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[9952] + 4 * v7) = this; /*0x544933*/
  }
  if ( !a6 /*0x544970*/
    && (*(int *)&MEMORY[0xA8D63C].__pad_14B0[588] < *(int *)&MEMORY[0xA8D63C].__pad_14B0[580]
     || (MEMORY[0xA8D63C].__pad_14B0[585] || !*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[580])
     && *(int *)&MEMORY[0xA8D63C].__pad_14B0[592] > 0
     && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[572] + 8))(
          &MEMORY[0xA8D63C].__pad_14B0[572],
          *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[580] + *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[592],
          0)) )
  {
    v8 = (*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[588])++; /*0x54497d*/
    *(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[576] + 4 * v8) = this; /*0x54498c*/
  }
  if ( aP4 ) /*0x544991*/
  {
    strncpy(Destination, (const char *)aP4, 0x30u); /*0x5449a1*/
    v11 = 0; /*0x5449a9*/
  }
  else
  {
    Destination[0] = 0; /*0x544993*/
  }
  if ( Destination != (char *)(this + 25) ) /*0x5449b6*/
  {
    qmemcpy(this + 25, Destination, 0x30u); /*0x5449c1*/
    *((_BYTE *)this + 148) = v11; /*0x5449c3*/
  }
  this->q2F5 = 0; /*0x5449c5*/
  *((_BYTE *)this + 559) = 1; /*0x5449cb*/
  this->LevelAndPassabilityStruct2pointer_70 = 0; /*0x5449d2*/
  *((_BYTE *)this + 561) = 0; /*0x5449d8*/
  *((_BYTE *)this + 562) = 1; /*0x5449de*/
  *((_BYTE *)this + 563) = 1; /*0x5449e5*/
  *((_BYTE *)this + 565) = 0; /*0x5449ec*/
  return this; /*0x5449c4*/
}


// ==== 0x00544A70  IsometricTileTypeClass::CleanupMembers  this=IsometricTileTypeClass  sig=csp ====
int __thiscall sub_544A70(int this)
{
  int v2; // ecx
  int v3; // eax
  int v4; // eax
  int i; // edi
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  void *v9; // eax
  int v11; // [esp+8h] [ebp-4h] BYREF

  *(_DWORD *)this = &IsometricTileTypeClass::`vftable'; /*0x544a77*/
  *(_DWORD *)(this + 4) = &IsometricTileTypeClass::`vftable'; /*0x544a7d*/
  *(_DWORD *)(this + 8) = &IsometricTileTypeClass::`vftable'; /*0x544a84*/
  *(_DWORD *)(this + 12) = &IsometricTileTypeClass::`vftable'; /*0x544a8b*/
  AbstractClass::AnnounceExpiredPointer((void **)this, 1); /*0x544a92*/
  v2 = *(_DWORD *)(this + 700); /*0x544a97*/
  if ( v2 ) /*0x544aa1*/
  {
    *(_DWORD *)(this + 700) = 0; /*0x544aa3*/
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 32))(v2, 1); /*0x544aad*/
  }
  v11 = this; /*0x544ac0*/
  v3 = (*(int (__thiscall **)(int *, int *))(MEMORY[0xA8ED28] + 16))(&MEMORY[0xA8ED28], &v11); /*0x544ac4*/
  if ( v3 != -1 && v3 < MEMORY[0xA8ED38] && v3 < --MEMORY[0xA8ED38] ) /*0x544adf*/
  {
    do /*0x544af7*/
    {
      ++v3; /*0x544ae7*/
      *((_DWORD *)MEMORY[0xA8ED2C] + v3 - 1) = *((_DWORD *)MEMORY[0xA8ED2C] + v3); /*0x544aeb*/
    }
    while ( v3 < MEMORY[0xA8ED38] ); /*0x544af7*/
  }
  v11 = this; /*0x544b09*/
  v4 = (*(int (__thiscall **)(int *, int *))(MEMORY[0xB0F670] + 16))(&MEMORY[0xB0F670], &v11); /*0x544b0d*/
  if ( v4 != -1 && v4 < MEMORY[0xB0F680] && v4 < --MEMORY[0xB0F680] ) /*0x544b28*/
  {
    do /*0x544b40*/
    {
      ++v4; /*0x544b30*/
      *((_DWORD *)MEMORY[0xB0F674] + v4 - 1) = *((_DWORD *)MEMORY[0xB0F674] + v4); /*0x544b34*/
    }
    while ( v4 < MEMORY[0xB0F680] ); /*0x544b40*/
  }
  for ( i = *(_DWORD *)(this + 692) - 1; i >= 0; --i ) /*0x544b4a*/
  {
    if ( *(_DWORD *)(*(_DWORD *)(this + 680) + 4 * i) ) /*0x544b52*/
      __3_YAXPAX_Z(*(void **)(*(_DWORD *)(this + 680) + 4 * i)); /*0x544b5a*/
    v6 = *(_DWORD *)(this + 692); /*0x544b62*/
    if ( i < v6 ) /*0x544b6a*/
    {
      v7 = v6 - 1; /*0x544b6c*/
      v8 = i; /*0x544b6f*/
      for ( *(_DWORD *)(this + 692) = v7; /*0x544b79*/
            v8 < *(_DWORD *)(this + 692);
            *(_DWORD *)(*(_DWORD *)(this + 680) + 4 * v8 - 4) = *(_DWORD *)(*(_DWORD *)(this + 680) + 4 * v8) )
      {
        ++v8; /*0x544b81*/
      }
    }
  }
  v9 = *(void **)(this + 680); /*0x544b96*/
  *(_DWORD *)(this + 676) = &VectorClass<unsigned short *>::`vftable'; /*0x544b9c*/
  if ( v9 && *(_BYTE *)(this + 689) ) /*0x544bab*/
  {
    __3_YAXPAX_Z(v9); /*0x544bb4*/
    *(_DWORD *)(this + 680) = 0; /*0x544bbc*/
  }
  *(_BYTE *)(this + 689) = 0; /*0x544bc4*/
  *(_DWORD *)(this + 684) = 0; /*0x544bca*/
  return ObjectTypeClass::Destruct(this); /*0x544bd5*/
}


// ==== 0x00544BE0  House::LookupObject  this=House  sig=csp ====
int __thiscall sub_544BE0(void *this, int a2)
{
  _DWORD *v2; // eax
  int v3; // ecx

  v2 = (_DWORD *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 156))(this); /*0x544be2*/
  if ( v2 && (v3 = v2[a2 % (*v2 * v2[1]) + 4]) != 0 ) /*0x544c03*/
    return dword_8288E4[*(char *)(v3 + 41)]; /*0x544c09*/
  else
    return 0; /*0x544c13*/
}


// ==== 0x00544C20  House::LoadMapFileData  this=House  sig=csp ====
bool __thiscall sub_544C20(_DWORD *this, int a2, char a3)
{
  _DWORD *v4; // eax

  if ( a3 && !this->House_field_0x29 && *((_BYTE *)this + 756) ) /*0x544c35*/
    MapClass::LoadFileData((int)this); /*0x544c3f*/
  v4 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*this + 156))(this); /*0x544c48*/
  return v4 && a2 < *v4 * v4[1] && v4[a2 + 4]; /*0x544c50*/
}


// ==== 0x00544C80  CellClass::EnsureFileLoaded  this=CellClass  sig=csp ====
BOOL __thiscall sub_544C80(int this)
{
  if ( !*(_DWORD *)(this + 164) && *(_BYTE *)(this + 756) ) /*0x544c8d*/
    MapClass::LoadFileData(this); /*0x544c97*/
  return *(_DWORD *)(this + 164) != 0; /*0x544ca9*/
}


// ==== 0x00544CB0  IsometricTileTypeClass::LoadTileFileData  this=MapClass  sig=csp ====
int __thiscall IsometricTileTypeClass::sub_544CB0(int this)
{
  int result; // eax

  result = *(_DWORD *)(this + 164); /*0x544cb3*/
  if ( !result ) /*0x544cbb*/
  {
    if ( *(_BYTE *)(this + 756) ) /*0x544cbd*/
    {
      MapClass::LoadFileData(this); /*0x544cc9*/
      return *(_DWORD *)(this + 164); /*0x544cce*/
    }
  }
  return result; /*0x544cd4*/
}


// ==== 0x00544CE0  ObjectClass::Entity_Read  this=ObjectClass  sig=csp ====
int __thiscall Entity_Read(void *this)
{
  int v2; // esi

  if ( !this ) /*0x544ce6*/
    return 0xFFFF; /*0x544ce6*/
  v2 = 0; /*0x544ced*/
  if ( *(int *)&HouseClass_Player.__pad_5568[23172] <= 0 ) /*0x544cf1*/
    return 0xFFFF; /*0x544d16*/
  while ( _strcmpi((const void *)(*(_DWORD *)(*(_DWORD *)&HouseClass_Player.__pad_5568[23160] + 4 * v2) + 36), this) ) /*0x544d0a*/
  {
    if ( ++v2 >= *(int *)&HouseClass_Player.__pad_5568[23172] ) /*0x544d14*/
      return 0xFFFF; /*0x544d14*/
  }
  return v2; /*0x544d16*/
}


// ==== 0x00544DF0  nullsub_155  this=-  sig=ida-proto ====
void nullsub_155()
{
  ; /*0x544df0*/
}


// ==== 0x00544E00  ObjectClass::Map_Get  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_544E00(_DWORD *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *result; // eax

  v2 = this->__pad_BC0; /*0x544e05*/
  v3 = a2; /*0x544e0c*/
  if ( a2 > v2 - 1 ) /*0x544e13*/
    v3 = a2 % v2; /*0x544e16*/
  for ( result = this; v3; --v3 ) /*0x544e1e*/
    result = (_DWORD *)result[175]; /*0x544e20*/
  return result; /*0x544e18*/
}


// ==== 0x00544E30  AccumulateMIXFileIndex  this=BombClass  sig=ida-proto ====
int __fastcall MIXFile_AccumulateIndex(int a1)
{
  int result; // eax
  int v2; // esi
  _DWORD *v3; // edi
  _DWORD *v4; // edx

  result = a1; /*0x544e36*/
  if ( a1 != 0xFFFF ) /*0x544e38*/
  {
    v2 = 0; /*0x544e44*/
    if ( unk_AA1088 > 0 ) /*0x544e49*/
    {
      v3 = unk_AA107C; /*0x544e4b*/
      do /*0x544e62*/
      {
        v4 = (_DWORD *)*v3; /*0x544e51*/
        if ( *(_DWORD *)*v3 > a1 ) /*0x544e55*/
          break; /*0x544e55*/
        ++v3; /*0x544e5a*/
        result += v4[1]; /*0x544e5d*/
        ++v2; /*0x544e5f*/
      }
      while ( v2 < unk_AA1088 ); /*0x544e62*/
    }
  }
  return result; /*0x544e3a*/
}


// ==== 0x00544E70  CreateSurfaceClassPrimary  this=-  sig=csp ====
int __fastcall SurfaceClass_CreatePrimary(int a1, int a2, int a3)
{
  int result; // eax
  int v4; // ecx
  char *v5; // edx
  int v6; // esi
  int v7; // esi
  int v8; // eax

  if ( !MEMORY[0x887308] ) /*0x544e86*/
    return 0; /*0x544e8b*/
  if ( a1 == 1000 && a2 == 1000 && a3 == 1000 && MEMORY[0x87F6A8] ) /*0x544ead*/
    return *(_DWORD *)MEMORY[0x87F69C]; /*0x544eb7*/
  QuantizeColorRGB(&a3); /*0x544ecd*/
  v4 = 1; /*0x544ee4*/
  if ( MEMORY[0x87F6A8] <= 1 ) /*0x544eeb*/
  {
LABEL_14:
    v6 = 53; /*0x544f1c*/
    if ( a3 + a2 + a1 < 2000 ) /*0x544f2b*/
      v6 = 27; /*0x544f2d*/
    if ( __2_YAPAXI_Z(0x1B4u) ) /*0x544f37*/
      v7 = LightConvertClass::Constructor( /*0x544f79*/
             &stru_ABBED0,
             &MEMORY[0x885780],
             MEMORY[0x887308],
             a1,
             a2,
             a3,
             MEMORY[0x87F6A8] != 0,
             0,
             v6);
    else
      v7 = 0; /*0x544f7d*/
    if ( MEMORY[0x87F6A8] < MEMORY[0x87F6A0] /*0x544fb6*/
      || (MEMORY[0x87F6A5] || !MEMORY[0x87F6A0])
      && MEMORY[0x87F6AC] > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0x87F698] + 8))(
           &MEMORY[0x87F698],
           MEMORY[0x87F6A0] + MEMORY[0x87F6AC],
           0) )
    {
      v8 = MEMORY[0x87F6A8]++; /*0x544fc3*/
      *((_DWORD *)MEMORY[0x87F69C] + v8) = v7; /*0x544fd2*/
    }
    return v7; /*0x544fd5*/
  }
  else
  {
    v5 = (char *)MEMORY[0x87F69C] + 4; /*0x544ef3*/
    while ( 1 ) /*0x544ef6*/
    {
      result = *(_DWORD *)v5; /*0x544ef6*/
      if ( *(_DWORD *)(*(_DWORD *)v5 + 408) == a1 && *(_DWORD *)(result + 412) == a2 && *(_DWORD *)(result + 416) == a3 ) /*0x544f0e*/
        break; /*0x544f0e*/
      ++v4; /*0x544f14*/
      v5 += 4; /*0x544f15*/
      if ( v4 >= MEMORY[0x87F6A8] ) /*0x544f1a*/
        goto LABEL_14; /*0x544f1a*/
    }
  }
  return result; /*0x544e88*/
}


// ==== 0x00544FF0  ReturnFalse2  this=-  sig=ida-proto ====
char ReturnFalse2()
{
  return 0; /*0x544ff2*/
}


// ==== 0x00545000  TheatreClass::InitView  this=TheatreClass  sig=csp ====
int TheatreClass_InitView()
{
  int v0; // edx
  _DWORD *v1; // esi
  int v2; // eax
  void *v3; // eax
  int v4; // esi
  int v5; // eax
  int result; // eax

  v0 = MEMORY[0x87F6A8]; /*0x545000*/
  if ( MEMORY[0x87F6A8] > 0 ) /*0x545009*/
  {
    v1 = MEMORY[0x87F69C]; /*0x54500b*/
    do /*0x545054*/
    {
      if ( *v1 ) /*0x545011*/
      {
        (**(void (__thiscall ***)(_DWORD, int))*v1)(*v1, 1); /*0x54501b*/
        v1 = MEMORY[0x87F69C]; /*0x54501d*/
        v0 = MEMORY[0x87F6A8]; /*0x545023*/
      }
      if ( v0 <= 0 ) /*0x54502b*/
        break; /*0x54502b*/
      v2 = 0; /*0x54502e*/
      MEMORY[0x87F6A8] = v0 - 1; /*0x545032*/
      if ( v0 - 1 <= 0 ) /*0x545038*/
        break; /*0x545038*/
      do /*0x545050*/
      {
        v1[v2] = v1[v2 + 1]; /*0x54503e*/
        v0 = MEMORY[0x87F6A8]; /*0x545041*/
        v1 = MEMORY[0x87F69C]; /*0x545047*/
        ++v2; /*0x54504d*/
      }
      while ( v2 < MEMORY[0x87F6A8] ); /*0x545050*/
    }
    while ( MEMORY[0x87F6A8] > 0 ); /*0x545054*/
  }
  v3 = __2_YAPAXI_Z(0x1B4u); /*0x54505b*/
  if ( v3 ) /*0x545065*/
    v4 = LightConvertClass::Constructor( /*0x545094*/
           (int)v3,
           (int)&stru_ABBED0,
           (int)&MEMORY[0x885780],
           MEMORY[0x887308],
           1000,
           1000,
           1000,
           0,
           0,
           53);
  else
    v4 = 0; /*0x545098*/
  if ( MEMORY[0x87F6A8] < MEMORY[0x87F6A0] /*0x5450d0*/
    || (MEMORY[0x87F6A5] || !MEMORY[0x87F6A0])
    && MEMORY[0x87F6AC] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0x87F698] + 8))(
         &MEMORY[0x87F698],
         MEMORY[0x87F6A0] + MEMORY[0x87F6AC],
         0) )
  {
    v5 = MEMORY[0x87F6A8]++; /*0x5450dd*/
    *((_DWORD *)MEMORY[0x87F69C] + v5) = v4; /*0x5450ec*/
  }
  dword_ABDC84 = 0; /*0x54510c*/
  TacticalClass::SetView((int)g_CellClassArray, 0, 0x10000, 0, 1000, 1000, 1000); /*0x545116*/
  LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]); /*0x545120*/
  for ( result = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); /*0x545132*/
        result;
        result = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]) )
  {
    *(_DWORD *)(result + 52) = 0; /*0x545139*/
  }
  return result; /*0x545131*/
}


// ==== 0x00545150  LoadTerrainTypeClassTheatre  this=-  sig=ida-proto ====
char *__fastcall LoadTerrainTypeClassTheatre(AbstractClass *a1, char a2)
{
  _DWORD *v3; // ebp
  size_t Size; // eax
  signed int v5; // eax
  int i; // esi
  int v7; // eax
  void **v8; // esi
  int v9; // esi
  size_t v10; // eax
  signed int v11; // eax
  size_t v12; // eax
  signed int v13; // eax
  size_t v14; // eax
  signed int v15; // eax
  size_t v16; // eax
  signed int v17; // eax
  CampaignScore *v18; // eax
  int v19; // ecx
  INIClass *v20; // edi
  CCINIClass *v21; // ebx
  AbstractClass *v22; // eax
  int v23; // ecx
  signed int v24; // eax
  int v25; // eax
  AbstractClass *v26; // eax
  AbstractClass *v27; // ebx
  MapClass *v28; // eax
  int v29; // edx
  int v30; // eax
  CCINIClass *v31; // eax
  char v32; // al
  INIClass *v33; // ecx
  int v34; // eax
  INIClass *v35; // ebx
  _DWORD *v36; // eax
  MapClass *v37; // edx
  INIClass *v38; // ecx
  AbstractClass *ecx147a; // ecx
  INIClass *v39; // edx
  int v41; // edx
  AnimTypeClass *v42; // eax
  int v43; // esi
  unsigned __int8 *v44; // ebx
  _DWORD *eax193; // eax
  CCINIClass *v46; // edx
  MapClass *v45; // ecx
  int v48; // edx
  unsigned int *ecx209; // ecx
  unsigned int v50; // eax
  MapClass *v49; // eax
  int v52; // ecx
  int v53; // edx
  int j; // edi
  _DWORD *v55; // eax
  int v56; // ecx
  int v57; // edx
  int v58; // edx
  char v60; // [esp+11h] [ebp-9FFh]
  char v62; // [esp+13h] [ebp-9FDh]
  char v63; // [esp+14h] [ebp-9FCh]
  char v64; // [esp+15h] [ebp-9FBh]
  char var9FC_2; // [esp+16h] [ebp-9FAh]
  char v66; // [esp+17h] [ebp-9F9h]
  MapClass *v65; // [esp+18h] [ebp-9F8h]
  char Bool_Overwrite; // [esp+1Ch] [ebp-9F4h]
  bool var9F4_1; // [esp+1Dh] [ebp-9F3h]
  __int16 var9F4_2; // [esp+1Eh] [ebp-9F2h] BYREF
  MapClass *v69; // [esp+20h] [ebp-9F0h]
  MapClass *v70; // [esp+24h] [ebp-9ECh]
  ObjectClass *v71; // [esp+28h] [ebp-9E8h]
  CCINIClass *v72; // [esp+2Ch] [ebp-9E4h]
  CCINIClass *v75; // [esp+30h] [ebp-9E0h]
  MapClass *v76; // [esp+34h] [ebp-9DCh]
  unsigned __int8 **v77[4]; // [esp+38h] [ebp-9D8h] BYREF
  _DWORD v78[3]; // [esp+48h] [ebp-9C8h] BYREF
  _DWORD v79[6]; // [esp+54h] [ebp-9BCh] BYREF
  char var9A4; // [esp+6Ch] [ebp-9A4h]
  int v81; // [esp+70h] [ebp-9A0h]
  AbstractClass *v80; // [esp+74h] [ebp-99Ch]
  char var998; // [esp+78h] [ebp-998h]
  INIClass *Ticks; // [esp+90h] [ebp-980h]
  MapClass *v83; // [esp+94h] [ebp-97Ch]
  int var978; // [esp+98h] [ebp-978h]
  MapClass *var974; // [esp+9Ch] [ebp-974h]
  INIClass *v86; // [esp+A0h] [ebp-970h]
  AbstractClass *v87; // [esp+A4h] [ebp-96Ch]
  AbstractClass *v88; // [esp+A8h] [ebp-968h]
  AbstractClass *v89; // [esp+ACh] [ebp-964h]
  AbstractClass *v90; // [esp+B0h] [ebp-960h]
  AbstractClass *v91; // [esp+B4h] [ebp-95Ch]
  AbstractClass *v92; // [esp+B8h] [ebp-958h]
  AbstractClass *v93; // [esp+BCh] [ebp-954h]
  AbstractClass *v94; // [esp+C0h] [ebp-950h]
  AbstractClass *v95; // [esp+C4h] [ebp-94Ch]
  AbstractClass *v96; // [esp+C8h] [ebp-948h]
  AbstractClass *v97; // [esp+CCh] [ebp-944h]
  AbstractClass *v98; // [esp+D0h] [ebp-940h]
  AbstractClass *v99; // [esp+D4h] [ebp-93Ch]
  AbstractClass *v100; // [esp+D8h] [ebp-938h]
  AbstractClass *v101; // [esp+DCh] [ebp-934h]
  INIClass *var930; // [esp+E0h] [ebp-930h]
  AbstractClass *v103; // [esp+E4h] [ebp-92Ch]
  INIClass *v104; // [esp+E8h] [ebp-928h]
  AbstractClass *v105; // [esp+ECh] [ebp-924h]
  INIClass *v108; // [esp+F0h] [ebp-920h]
  AbstractClass *v107; // [esp+F4h] [ebp-91Ch]
  INIClass *var918; // [esp+F8h] [ebp-918h]
  AbstractClass *v109; // [esp+FCh] [ebp-914h]
  AbstractClass *v110; // [esp+100h] [ebp-910h]
  AbstractClass *v111; // [esp+104h] [ebp-90Ch]
  AbstractClass *v112; // [esp+108h] [ebp-908h]
  int var904; // [esp+10Ch] [ebp-904h]
  AbstractClass *v114; // [esp+110h] [ebp-900h]
  AbstractClass *v115; // [esp+114h] [ebp-8FCh]
  AbstractClass *v116; // [esp+118h] [ebp-8F8h]
  AbstractClass *v117; // [esp+11Ch] [ebp-8F4h]
  AbstractClass *v118; // [esp+120h] [ebp-8F0h]
  AbstractClass *v119; // [esp+124h] [ebp-8ECh]
  AbstractClass *v120; // [esp+128h] [ebp-8E8h]
  AbstractClass *v121; // [esp+12Ch] [ebp-8E4h]
  AbstractClass *v122; // [esp+130h] [ebp-8E0h]
  AbstractClass *v123; // [esp+134h] [ebp-8DCh]
  AbstractClass *v124; // [esp+138h] [ebp-8D8h]
  AbstractClass *v125; // [esp+13Ch] [ebp-8D4h]
  AbstractClass *v126; // [esp+140h] [ebp-8D0h]
  INIClass *var8CC; // [esp+144h] [ebp-8CCh]
  AbstractClass *v128; // [esp+148h] [ebp-8C8h]
  AbstractClass *v129; // [esp+14Ch] [ebp-8C4h]
  AbstractClass *v130; // [esp+150h] [ebp-8C0h]
  AbstractClass *v131; // [esp+154h] [ebp-8BCh]
  AbstractClass *v132; // [esp+158h] [ebp-8B8h]
  AbstractClass *v133; // [esp+15Ch] [ebp-8B4h]
  AbstractClass *Int_Overwrite; // [esp+160h] [ebp-8B0h]
  INIClass *v137; // [esp+164h] [ebp-8ACh]
  INIClass *v138; // [esp+168h] [ebp-8A8h]
  AbstractClass *v139; // [esp+16Ch] [ebp-8A4h]
  INIClass *var8A0; // [esp+170h] [ebp-8A0h]
  INIClass *v141; // [esp+174h] [ebp-89Ch]
  AbstractClass *v140; // [esp+178h] [ebp-898h]
  MapClass *v143; // [esp+17Ch] [ebp-894h]
  int v144; // [esp+180h] [ebp-890h]
  INIClass *v145; // [esp+184h] [ebp-88Ch]
  CCINIClass aP2; // [esp+188h] [ebp-888h] BYREF
  char Buffer[5]; // [esp+1F4h] [ebp-81Ch] BYREF
  char v148; // [esp+1F9h] [ebp-817h]
  int v149[22]; // [esp+214h] [ebp-7FCh] BYREF
  char v150[12]; // [esp+26Ch] [ebp-7A4h] BYREF
  int v151; // [esp+278h] [ebp-798h]
  INIClass aP4; // [esp+280h] [ebp-790h] BYREF
  char Destination[48]; // [esp+2C0h] [ebp-750h] BYREF
  char v154; // [esp+2F0h] [ebp-720h]
  char v155[48]; // [esp+2F4h] [ebp-71Ch] BYREF
  char v156; // [esp+324h] [ebp-6ECh]
  char v157[20]; // [esp+328h] [ebp-6E8h] BYREF
  int v158[22]; // [esp+33Ch] [ebp-6D4h] BYREF
  char v159[12]; // [esp+394h] [ebp-67Ch] BYREF
  int v160; // [esp+3A0h] [ebp-670h]
  _DWORD v161[22]; // [esp+3A8h] [ebp-668h] BYREF
  char v162[12]; // [esp+400h] [ebp-610h] BYREF
  int v163; // [esp+40Ch] [ebp-604h]
  char Filename[128]; // [esp+414h] [ebp-5FCh] BYREF
  _DWORD v165[22]; // [esp+494h] [ebp-57Ch] BYREF
  char v166[12]; // [esp+4ECh] [ebp-524h] BYREF
  int v167; // [esp+4F8h] [ebp-518h]
  MultiplayerGameMode aP1; // [esp+500h] [ebp-510h] BYREF
  char v169[12]; // [esp+558h] [ebp-4B8h] BYREF
  int v170; // [esp+564h] [ebp-4ACh]
  _DWORD v171[22]; // [esp+56Ch] [ebp-4A4h] BYREF
  char v172[12]; // [esp+5C4h] [ebp-44Ch] BYREF
  int v173; // [esp+5D0h] [ebp-440h]
  _DWORD v174[22]; // [esp+5D8h] [ebp-438h] BYREF
  char v175[12]; // [esp+630h] [ebp-3E0h] BYREF
  int v176; // [esp+63Ch] [ebp-3D4h]
  _DWORD v177[22]; // [esp+644h] [ebp-3CCh] BYREF
  char v178[12]; // [esp+69Ch] [ebp-374h] BYREF
  int v179; // [esp+6A8h] [ebp-368h]
  char v180[32]; // [esp+6B0h] [ebp-360h] BYREF
  char Source[128]; // [esp+6D0h] [ebp-340h] BYREF
  char v182[512]; // [esp+750h] [ebp-2C0h] BYREF
  INIClass v183; // [esp+950h] [ebp-C0h] BYREF
  INIClass v184; // [esp+990h] [ebp-80h] BYREF

  v3 = 0;
  v91 = a1;
  v77[1] = 0;
  v77[2] = 0;
  GenericNode::Constructor(v78);
  GenericNode::Constructor(v79);
  LinkedList::Prepend(v78, (int)v79);
  v77[3] = (unsigned __int8 **)&vt_List_INIClass_INISection;
  memset(&v79[3], 0, 12);
  var9A4 = 0;
  v81 = 0;
  v80 = 0;
  var998 = 0;
  v77[0] = (unsigned __int8 **)&CCINIClass_Vtable;
  Ticks = (INIClass *)Timer::GetTicks();
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57940] = 0;
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57944] = 0;
  var978 = 0;
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57948] = 0;
  v89 = 0;
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57952] = 0;
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57956] = 0;
  CCFileClass::Construct(v158, MEMORY[0x82960C]);
  if ( lpBuffer )
  {
    __3_YAXPAX_Z(lpBuffer);
    lpBuffer = 0;
  }
  Size = CCFileClass::GetSize(v158);
  lpBuffer = (MapClass *)__2_YAPAXI_Z(Size);
  v5 = CCFileClass::GetSize(v158);
  CCFileClass::Read(v158, (CampaignScore *)lpBuffer, v5);
  if ( *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[58032] )
  {
    for ( i = *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[58032] - 1; i >= 0; --i )
    {
      __3_YAXPAX_Z(*(void **)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[58020] + 4 * i));
      if ( i < *(int *)&MEMORY[0xA8D63C].__pad_579C[58032] )
      {
        v7 = i;
        --*(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[58032];
        if ( i < *(int *)&MEMORY[0xA8D63C].__pad_579C[58032] )
        {
          do
          {
            ++v7;
            *(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[58020] + 4 * v7 - 4) = *(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[58020]
                                                                                                 + 4 * v7);
          }
          while ( v7 < *(int *)&MEMORY[0xA8D63C].__pad_579C[58032] );
        }
      }
    }
  }
  v8 = (void **)&MEMORY[0xA8D63C].__pad_579C[57992];
  do
  {
    if ( *v8 )
    {
      __3_YAXPAX_Z(*v8);
      *v8 = 0;
    }
    ++v8;
  }
  while ( (int)v8 < (int)&MEMORY[0xA8D63C].__pad_579C[58008] );
  v9 = 112 * (_DWORD)a1;
  var904 = 112 * (_DWORD)a1;
  sprintf(Buffer, MEMORY[0x829600], (const char *)&off_7E1BC6 + 112 * (_DWORD)a1);
  CCFileClass::Construct(v149, Buffer);
  v10 = CCFileClass::GetSize(v149);
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57992] = __2_YAPAXI_Z(v10);
  v11 = CCFileClass::GetSize(v149);
  CCFileClass::Read(v149, *(CampaignScore **)&MEMORY[0xA8D63C].__pad_579C[57992], v11);
  v148 = 50;
  FileClass::SetFileName(v149, (IUnknown *)Buffer);
  v12 = CCFileClass::GetSize(v149);
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57996] = __2_YAPAXI_Z(v12);
  v13 = CCFileClass::GetSize(v149);
  CCFileClass::Read(v149, *(CampaignScore **)&MEMORY[0xA8D63C].__pad_579C[57996], v13);
  v148 = 51;
  FileClass::SetFileName(v149, (IUnknown *)Buffer);
  v14 = CCFileClass::GetSize(v149);
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[58000] = __2_YAPAXI_Z(v14);
  v15 = CCFileClass::GetSize(v149);
  CCFileClass::Read(v149, *(CampaignScore **)&MEMORY[0xA8D63C].__pad_579C[58000], v15);
  v148 = 52;
  FileClass::SetFileName(v149, (IUnknown *)Buffer);
  v16 = CCFileClass::GetSize(v149);
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[58004] = __2_YAPAXI_Z(v16);
  v17 = CCFileClass::GetSize(v149);
  CCFileClass::Read(v149, *(CampaignScore **)&MEMORY[0xA8D63C].__pad_579C[58004], v17);
  while ( *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[588] )
  {
    if ( **(_DWORD **)&MEMORY[0xA8D63C].__pad_14B0[576] )
      (*(void (__thiscall **)(_DWORD, int))(***(_DWORD ***)&MEMORY[0xA8D63C].__pad_14B0[576] + 32))(
        **(_DWORD **)&MEMORY[0xA8D63C].__pad_14B0[576],
        1);
  }
  sprintf(v180, MEMORY[0x8295F4], (const char *)&off_7E1BC6 + v9);
  CCFileClass::Construct(v161, v180);
  if ( CCFileClass::Open(v161, 0) )
  {
    CCFileClass::Read(v161, &stru_ABBED0, 768);
    v18 = &stru_ABBED0;
    v19 = 768;
    do
    {
      v18->__pad_0[0] *= 4;
      v18 = (CampaignScore *)((char *)v18 + 1);
      --v19;
    }
    while ( v19 );
  }
  TheatreClass::InitView();
  sprintf(v157, stru_8295E8, &aTemperat[v9]);
  CCFileClass::Construct(&aP1, v157);
  CCINIClass::Load(v77, &aP1, 0, 0);
  v20 = 0;
  v21 = 0;
  v90 = 0;
  v70 = 0;
  v72 = 0;
  Int_Overwrite = (AbstractClass *)INIClass::ReadInt_Overwrite(
                                     (int)v77,
                                     (unsigned __int8 *)&g_INI_Key_General,
                                     &unk_8295DC,
                                     (INIClass *)0xFFFFFFFF);
  var8A0 = (INIClass *)INIClass::ReadInt_Overwrite(
                         (int)v77,
                         (unsigned __int8 *)&g_INI_Key_General,
                         &unk_8295D0,
                         (INIClass *)0xFFFFFFFF);
  v129 = (AbstractClass *)INIClass::ReadInt_Overwrite(
                            (int)v77,
                            (unsigned __int8 *)&g_INI_Key_General,
                            &unk_8295C4,
                            (INIClass *)0xFFFFFFFF);
  v94 = (AbstractClass *)INIClass::ReadInt_Overwrite(
                           (int)v77,
                           (unsigned __int8 *)&g_INI_Key_General,
                           &unk_8295B8,
                           (INIClass *)0xFFFFFFFF);
  v115 = (AbstractClass *)INIClass::ReadInt_Overwrite(
                            (int)v77,
                            (unsigned __int8 *)&g_INI_Key_General,
                            &unk_8295AC,
                            (INIClass *)0xFFFFFFFF);
  v96 = (AbstractClass *)INIClass::ReadInt_Overwrite(
                           (int)v77,
                           (unsigned __int8 *)&g_INI_Key_General,
                           &unk_8295A0,
                           (INIClass *)0xFFFFFFFF);
  v116 = (AbstractClass *)INIClass::ReadInt_Overwrite(
                            (int)v77,
                            (unsigned __int8 *)&g_INI_Key_General,
                            &unk_829594,
                            (INIClass *)0xFFFFFFFF);
  v98 = (AbstractClass *)INIClass::ReadInt_Overwrite(
                           (int)v77,
                           (unsigned __int8 *)&g_INI_Key_General,
                           &unk_829588,
                           (INIClass *)0xFFFFFFFF);
  v118 = (AbstractClass *)INIClass::ReadInt_Overwrite(
                            (int)v77,
                            (unsigned __int8 *)&g_INI_Key_General,
                            &unk_829578,
                            (INIClass *)0xFFFFFFFF);
  v100 = (AbstractClass *)INIClass::ReadInt_Overwrite(
                            (int)v77,
                            (unsigned __int8 *)&g_INI_Key_General,
                            &unk_829568,
                            (INIClass *)0xFFFFFFFF);
  v120 = (AbstractClass *)INIClass::ReadInt_Overwrite(
                            (int)v77,
                            (unsigned __int8 *)&g_INI_Key_General,
                            &unk_829558,
                            (INIClass *)0xFFFFFFFF);
  var930 = (INIClass *)INIClass::ReadInt_Overwrite(
                         (int)v77,
                         (unsigned __int8 *)&g_INI_Key_General,
                         &unk_829548,
                         (INIClass *)0xFFFFFFFF);
  v122 = (AbstractClass *)INIClass::ReadInt_Overwrite(
                            (int)v77,
                            (unsigned __int8 *)&g_INI_Key_General,
                            &unk_829538,
                            (INIClass *)0xFFFFFFFF);
  v104 = (INIClass *)INIClass::ReadInt_Overwrite(
                       (int)v77,
                       (unsigned __int8 *)&g_INI_Key_General,
                       &unk_82952C,
                       (INIClass *)0xFFFFFFFF);
  v124 = (AbstractClass *)INIClass::ReadInt_Overwrite(
                            (int)v77,
                            (unsigned __int8 *)&g_INI_Key_General,
                            &unk_829520,
                            (INIClass *)0xFFFFFFFF);
  v108 = (INIClass *)INIClass::ReadInt_Overwrite(
                       (int)v77,
                       (unsigned __int8 *)&g_INI_Key_General,
                       &unk_829514,
                       (INIClass *)0xFFFFFFFF);
  v126 = (AbstractClass *)INIClass::ReadInt_Overwrite(
                            (int)v77,
                            (unsigned __int8 *)&g_INI_Key_General,
                            &unk_829504,
                            (INIClass *)0xFFFFFFFF);
  var918 = (INIClass *)INIClass::ReadInt_Overwrite(
                         (int)v77,
                         (unsigned __int8 *)&g_INI_Key_General,
                         &unk_8294F8,
                         (INIClass *)0xFFFFFFFF);
  v128 = (AbstractClass *)INIClass::ReadInt_Overwrite(
                            (int)v77,
                            (unsigned __int8 *)&g_INI_Key_General,
                            &unk_8294EC,
                            (INIClass *)0xFFFFFFFF);
  v110 = (AbstractClass *)INIClass::ReadInt_Overwrite(
                            (int)v77,
                            (unsigned __int8 *)&g_INI_Key_General,
                            &unk_8294E0,
                            (INIClass *)0xFFFFFFFF);
  v130 = (AbstractClass *)INIClass::ReadInt_Overwrite(
                            (int)v77,
                            (unsigned __int8 *)&g_INI_Key_General,
                            &unk_8294D0,
                            (INIClass *)0xFFFFFFFF);
  v112 = (AbstractClass *)INIClass::ReadInt_Overwrite(
                            (int)v77,
                            (unsigned __int8 *)&g_INI_Key_General,
                            &unk_8294C0,
                            (INIClass *)0xFFFFFFFF);
  v132 = (AbstractClass *)INIClass::ReadInt_Overwrite(
                            (int)v77,
                            (unsigned __int8 *)&g_INI_Key_General,
                            &unk_8294B0,
                            (INIClass *)0xFFFFFFFF);
  v138 = (INIClass *)INIClass::ReadInt_Overwrite(
                       (int)v77,
                       (unsigned __int8 *)&g_INI_Key_General,
                       &unk_8294A8,
                       (INIClass *)0xFFFFFFFF);
  v117 = (AbstractClass *)INIClass::ReadInt_Overwrite(
                            (int)v77,
                            (unsigned __int8 *)&g_INI_Key_General,
                            &unk_829498,
                            (INIClass *)0xFFFFFFFF);
  v114 = (AbstractClass *)INIClass::ReadInt_Overwrite(
                            (int)v77,
                            (unsigned __int8 *)&g_INI_Key_General,
                            &unk_82948C,
                            (INIClass *)0xFFFFFFFF);
  v92 = (AbstractClass *)INIClass::ReadInt_Overwrite(
                           (int)v77,
                           (unsigned __int8 *)&g_INI_Key_General,
                           &unk_829478,
                           (INIClass *)0xFFFFFFFF);
  v141 = (INIClass *)INIClass::ReadInt_Overwrite(
                       (int)v77,
                       (unsigned __int8 *)&g_INI_Key_General,
                       &unk_829468,
                       (INIClass *)0xFFFFFFFF);
  v119 = (AbstractClass *)INIClass::ReadInt_Overwrite(
                            (int)v77,
                            (unsigned __int8 *)&g_INI_Key_General,
                            &unk_829458,
                            (INIClass *)0xFFFFFFFF);
  v131 = (AbstractClass *)INIClass::ReadInt_Overwrite(
                            (int)v77,
                            (unsigned __int8 *)&g_INI_Key_General,
                            &unk_829448,
                            (INIClass *)0xFFFFFFFF);
  v121 = (AbstractClass *)INIClass::ReadInt_Overwrite(
                            (int)v77,
                            (unsigned __int8 *)&g_INI_Key_General,
                            &unk_829438,
                            (INIClass *)0xFFFFFFFF);
  v139 = (AbstractClass *)INIClass::ReadInt_Overwrite(
                            (int)v77,
                            (unsigned __int8 *)&g_INI_Key_General,
                            &unk_82942C,
                            (INIClass *)0xFFFFFFFF);
  v123 = (AbstractClass *)INIClass::ReadInt_Overwrite(
                            (int)v77,
                            (unsigned __int8 *)&g_INI_Key_General,
                            &unk_829420,
                            (INIClass *)0xFFFFFFFF);
  v133 = (AbstractClass *)INIClass::ReadInt_Overwrite(
                            (int)v77,
                            (unsigned __int8 *)&g_INI_Key_General,
                            &unk_829410,
                            (INIClass *)0xFFFFFFFF);
  v125 = (AbstractClass *)INIClass::ReadInt_Overwrite(
                            (int)v77,
                            (unsigned __int8 *)&g_INI_Key_General,
                            &unk_829408,
                            (INIClass *)0xFFFFFFFF);
  v145 = (INIClass *)INIClass::ReadInt_Overwrite(
                       (int)v77,
                       (unsigned __int8 *)&g_INI_Key_General,
                       &unk_8293FC,
                       (INIClass *)0xFFFFFFFF);
  var8CC = (INIClass *)INIClass::ReadInt_Overwrite(
                         (int)v77,
                         (unsigned __int8 *)&g_INI_Key_General,
                         &unk_8293E8,
                         (INIClass *)0xFFFFFFFF);
  v137 = (INIClass *)INIClass::ReadInt_Overwrite(
                       (int)v77,
                       (unsigned __int8 *)&g_INI_Key_General,
                       &unk_8293D8,
                       (INIClass *)0xFFFFFFFF);
  v93 = (AbstractClass *)INIClass::ReadInt_Overwrite(
                           (int)v77,
                           (unsigned __int8 *)&g_INI_Key_General,
                           &unk_8293C4,
                           (INIClass *)0xFFFFFFFF);
  v95 = (AbstractClass *)INIClass::ReadInt_Overwrite(
                           (int)v77,
                           (unsigned __int8 *)&g_INI_Key_General,
                           &unk_8293B0,
                           (INIClass *)0xFFFFFFFE);
  v99 = (AbstractClass *)INIClass::ReadInt_Overwrite(
                           (int)v77,
                           (unsigned __int8 *)&g_INI_Key_General,
                           &unk_8293A4,
                           (INIClass *)0xFFFFFFFF);
  v97 = (AbstractClass *)INIClass::ReadInt_Overwrite(
                           (int)v77,
                           (unsigned __int8 *)&g_INI_Key_General,
                           &unk_829398,
                           (INIClass *)0xFFFFFFFF);
  v101 = (AbstractClass *)INIClass::ReadInt_Overwrite(
                            (int)v77,
                            (unsigned __int8 *)&g_INI_Key_General,
                            &unk_829388,
                            (INIClass *)0xFFFFFFFF);
  v103 = (AbstractClass *)INIClass::ReadInt_Overwrite(
                            (int)v77,
                            (unsigned __int8 *)&g_INI_Key_General,
                            &unk_829378,
                            (INIClass *)0xFFFFFFFF);
  v105 = (AbstractClass *)INIClass::ReadInt_Overwrite(
                            (int)v77,
                            (unsigned __int8 *)&g_INI_Key_General,
                            &unk_829370,
                            (INIClass *)0xFFFFFFFF);
  v22 = (AbstractClass *)INIClass::ReadInt_Overwrite(
                           (int)v77,
                           (unsigned __int8 *)&g_INI_Key_General,
                           &unk_829364,
                           (INIClass *)0xFFFFFFFF);
  g_CellTileLookup = (CCINIClass *)-1;
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57984] = -1;
  v107 = v22;
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[58052] = -1;
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[58072] = -1;
  dword_ABC2B8 = -1;
  dword_ABB104 = (CCINIClass *)-1;
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57408] = -1;
  dword_ABC2B0 = (CCINIClass *)-1;
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[58060] = -1;
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[58204] = -1;
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57420] = -1;
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[55664] = -1;
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[58064] = -1;
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[55660] = -1;
  dword_ABC2CC = (CCINIClass *)-1;
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57424] = -1;
  g_TerrainBridgeIndex = -1;
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57928] = -1;
  dword_ABAD28 = -1;
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[55648] = -1;
  g_TerrainTypeTable2 = (CCINIClass *)-1;
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[58048] = -1;
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57932] = -1;
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57980] = -1;
  dword_ABB108 = (CCINIClass *)-1;
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[58076] = -1;
  dword_ABAD2C = (CCINIClass *)-1;
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[55652] = -1;
  dword_ABB110 = (CCINIClass *)-1;
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[58056] = -1;
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57976] = -1;
  dword_ABBEBC = (CCINIClass *)-1;
  g_CellTileTypeCache = (CCINIClass *)-1;
  dword_ABBEC4 = (CCINIClass *)-1;
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57416] = -1;
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57412] = -1;
  dword_ABAD20 = (CCINIClass *)-1;
  dword_ABC1D4 = (CCINIClass *)-1;
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[58068] = -1;
  dword_ABC2C8 = -2;
  dword_ABAD24 = (CCINIClass *)-1;
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57924] = -1;
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[58044] = -1;
  dword_ABBEC0 = (CCINIClass *)-1;
  dword_ABB10C = (CCINIClass *)-1;
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[58040] = -1;
  dword_ABC2B4 = INIClass::ReadInt_Overwrite(
                   (int)v77,
                   (unsigned __int8 *)&g_INI_Key_General,
                   &unk_829354,
                   (INIClass *)0xFFFFFFFF);
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[58200] = INIClass::ReadInt_Overwrite(
                                                     (int)v77,
                                                     (unsigned __int8 *)&g_INI_Key_General,
                                                     &MEMORY[0x829344],
                                                     (INIClass *)0xFFFFFFFF);
  dword_ABC1E8 = INIClass::ReadInt_Overwrite(
                   (int)v77,
                   (unsigned __int8 *)&g_INI_Key_General,
                   &MEMORY[0x829330],
                   (INIClass *)0xFFFFFFFF);
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57440] = INIClass::ReadInt_Overwrite(
                                                     (int)v77,
                                                     (unsigned __int8 *)&g_INI_Key_General,
                                                     &MEMORY[0x82931C],
                                                     (INIClass *)0xFFFFFFFF);
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[59248] = INIClass::ReadInt_Overwrite(
                                                     (int)v77,
                                                     (unsigned __int8 *)&g_INI_Key_General,
                                                     &MEMORY[0x82930C],
                                                     (INIClass *)0xFFFFFFFF);
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[55656] = INIClass::ReadInt_Overwrite(
                                                     (int)v77,
                                                     (unsigned __int8 *)&g_INI_Key_General,
                                                     &MEMORY[0x8292FC],
                                                     (INIClass *)0xFFFFFFFF);
  dword_ABC1D0 = INIClass::ReadInt_Overwrite(
                   (int)v77,
                   (unsigned __int8 *)&g_INI_Key_General,
                   &MEMORY[0x8292E8],
                   (INIClass *)0xFFFFFFFF);
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[59240] = INIClass::ReadInt_Overwrite(
                                                     (int)v77,
                                                     (unsigned __int8 *)&g_INI_Key_General,
                                                     &MEMORY[0x8292D4],
                                                     (INIClass *)0xFFFFFFFF);
  g_TerrainSoundTable2 = INIClass::ReadInt_Overwrite(
                           (int)v77,
                           (unsigned __int8 *)&g_INI_Key_General,
                           &MEMORY[0x8292C4],
                           (INIClass *)0xFFFFFFFF);
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57936] = INIClass::ReadInt_Overwrite(
                                                     (int)v77,
                                                     (unsigned __int8 *)&g_INI_Key_General,
                                                     &MEMORY[0x8292B4],
                                                     (INIClass *)0xFFFFFFFF);
  dword_ABC558 = 0;
  Ticks = (INIClass *)Timer::GetTicks();
  v23 = 4;
  v83 = v143;
  var978 = 4;
  while ( 1 )
  {
    v69 = (MapClass *)v23;
    if ( Ticks == (INIClass *)-1 )
      goto LABEL_24;
    v24 = Timer::GetTicks() - (_DWORD)Ticks;
    if ( v24 < (int)v69 )
    {
      v23 = (int)v69 - v24;
LABEL_24:
      if ( v23 )
        goto LABEL_26;
    }
    Event::Dispatch();
    v140 = (AbstractClass *)Timer::GetTicks();
    v144 = 4;
    Ticks = (INIClass *)v140;
    v83 = v143;
    var978 = 4;
LABEL_26:
    v25 = dword_ABC558;
    *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[4 * dword_ABC558 + 58216] = v21;
    dword_ABC558 = v25 + 1;
    if ( v20 == (INIClass *)Int_Overwrite )
      g_CellTileLookup = v21;
    if ( v20 == var8A0 )
      *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57984] = v21;
    if ( v20 == (INIClass *)v129 )
      *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[58052] = v21;
    if ( v20 == (INIClass *)v94 )
      *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[58072] = v21;
    if ( v20 == (INIClass *)v115 )
      dword_ABC2B8 = (int)v21;
    if ( v20 == (INIClass *)v96 )
      dword_ABB104 = v21;
    if ( v20 == (INIClass *)v116 )
      *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57408] = v21;
    if ( v20 == (INIClass *)v98 )
      dword_ABC2B0 = v21;
    if ( v20 == (INIClass *)v118 )
      *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[58060] = v21;
    if ( v20 == (INIClass *)v100 )
      *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[58204] = v21;
    if ( v20 == (INIClass *)v120 )
      *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57420] = v21;
    if ( v20 == var930 )
      *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[55664] = v21;
    if ( v20 == (INIClass *)v122 )
      *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[58064] = v21;
    if ( v20 == v104 )
      *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[55660] = v21;
    if ( v20 == (INIClass *)v124 )
      dword_ABC2CC = v21;
    if ( v20 == v108 )
      *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57424] = v21;
    if ( v20 == (INIClass *)v126 )
      g_TerrainBridgeIndex = (int)v21;
    if ( v20 == var918 )
      *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57928] = v21;
    if ( v20 == (INIClass *)v128 )
      dword_ABAD28 = (int)v21;
    if ( v20 == (INIClass *)v110 )
      *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[55648] = v21;
    if ( v20 == (INIClass *)v130 )
      g_TerrainTypeTable2 = v21;
    if ( v20 == (INIClass *)v112 )
      *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[58048] = v21;
    if ( v20 == (INIClass *)v132 )
      *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57932] = v21;
    if ( v20 == (INIClass *)v114 )
      *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[58076] = v21;
    if ( v20 == (INIClass *)v92 )
      dword_ABAD2C = v21;
    if ( v20 == v138 )
      *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57980] = v21;
    if ( v20 == (INIClass *)v117 )
      dword_ABB108 = v21;
    if ( v20 == v141 )
      *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[55652] = v21;
    if ( v20 == (INIClass *)v119 )
      dword_ABB110 = v21;
    if ( v20 == (INIClass *)v131 )
      *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[58056] = v21;
    if ( v20 == (INIClass *)v121 )
      *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57976] = v21;
    if ( v20 == (INIClass *)v139 )
      dword_ABBEBC = v21;
    if ( v20 == (INIClass *)v123 )
      g_CellTileTypeCache = v21;
    if ( v20 == (INIClass *)v133 )
      dword_ABBEC4 = v21;
    if ( v20 == (INIClass *)v125 )
      *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57416] = v21;
    if ( v20 == v145 )
      *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57412] = v21;
    if ( v20 == var8CC )
      dword_ABAD20 = v21;
    if ( v20 == v137 )
      dword_ABC1D4 = v21;
    if ( v20 == (INIClass *)v93 )
      *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[58068] = v21;
    if ( v20 == (INIClass *)v95 )
      dword_ABC2C8 = (int)v21;
    if ( v20 == (INIClass *)v97 )
      *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57924] = v21;
    if ( v20 == (INIClass *)v99 )
      dword_ABAD24 = v21;
    if ( v20 == (INIClass *)v101 )
      *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[58044] = v21;
    if ( v20 == (INIClass *)v103 )
      dword_ABBEC0 = v21;
    if ( v20 == (INIClass *)v105 )
      dword_ABB10C = v21;
    if ( v20 == (INIClass *)v107 )
      *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[58040] = v21;
    sprintf((char *const)&aP2.INIClass_field_2C, stru_8292A8, v20);
    INIClass::ResetSection(v77);
    v71 = (ObjectClass *)INIClass::ReadInt_Overwrite(
                           (int)v77,
                           (unsigned __int8 *)&aP2.INIClass_field_2C,
                           &unk_82929C,
                           (INIClass *)0xFFFFFFFF);
    if ( v71 == (ObjectClass *)-1 )
      break;
    v26 = (AbstractClass *)INIClass::ReadInt_Overwrite(
                             (int)v77,
                             (unsigned __int8 *)&aP2.INIClass_field_2C,
                             &unk_82928C,
                             (INIClass *)0xFFFFFFFF);
    v27 = v26;
    if ( v26 == (AbstractClass *)-1 || v26 == (AbstractClass *)v71 )
    {
      v31 = (CCINIClass *)((char *)v72 + (_DWORD)v71);
    }
    else
    {
      v28 = (MapClass *)__2_YAPAXI_Z(8u);
      v29 = (char *)v71 - (char *)v27;
      v76 = v28;
      v75 = (CCINIClass *)((char *)v72 + (_DWORD)v27);
      v28->field_0 = (int)&v72->__pad_0[(_DWORD)v27];
      v28->field_4 = (void *)v29;
      if ( *(int *)&MEMORY[0xA8D63C].__pad_579C[58032] < *(int *)&MEMORY[0xA8D63C].__pad_579C[58024]
        || (MEMORY[0xA8D63C].__pad_579C[58029] || !*(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[58024])
        && *(int *)&MEMORY[0xA8D63C].__pad_579C[58036] > 0
        && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[58016] + 8))(
             &MEMORY[0xA8D63C].__pad_579C[58016],
             *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[58036] + *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[58024],
             0) )
      {
        v30 = (*(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[58032])++;
        *(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[58020] + 4 * v30) = v76;
      }
      v31 = v75;
    }
    v72 = v31;
    INIClass::GetString(v77, (INIClass *)&aP2.INIClass_field_2C, &unk_82927C, &unk_829284, &aP4, 64);
    INIClass::GetString(v77, (INIClass *)&aP2.INIClass_field_2C, &unk_829268, &unk_829274, &v183, 64);
    v75 = (CCINIClass *)INIClass::ReadInt_Overwrite(
                          (int)v77,
                          (unsigned __int8 *)&aP2.INIClass_field_2C,
                          &unk_829258,
                          (INIClass *)0xFFFF);
    v86 = (INIClass *)INIClass::ReadInt_Overwrite(
                        (int)v77,
                        (unsigned __int8 *)&aP2.INIClass_field_2C,
                        &unk_829244,
                        (INIClass *)0xFFFF);
    Bool_Overwrite = INIClass::ReadBool_Overwrite((int)v77, (unsigned __int8 *)&aP2.INIClass_field_2C, &unk_829238, 0);
    v64 = INIClass::ReadBool_Overwrite((int)v77, (unsigned __int8 *)&aP2.INIClass_field_2C, &unk_829228, 1);
    v66 = INIClass::ReadBool_Overwrite((int)v77, (unsigned __int8 *)&aP2.INIClass_field_2C, &unk_829218, 1);
    v62 = INIClass::ReadBool_Overwrite(
            (int)v77,
            (unsigned __int8 *)&aP2.INIClass_field_2C,
            (CCINIClass *)&MEMORY[0x8291B8].unknown50,
            0);
    var9FC_2 = INIClass::ReadBool_Overwrite(
                 (int)v77,
                 (unsigned __int8 *)&aP2.INIClass_field_2C,
                 (CCINIClass *)&MEMORY[0x8291B8].ownsFile,
                 0);
    v109 = (AbstractClass *)INIClass::ReadInt_Overwrite(
                              (int)v77,
                              (unsigned __int8 *)&aP2.INIClass_field_2C,
                              (CCINIClass *)&MEMORY[0x8291B8].unknown30,
                              (INIClass *)0xFFFFFFFF);
    v111 = (AbstractClass *)INIClass::ReadInt_Overwrite(
                              (int)v77,
                              (unsigned __int8 *)&aP2.INIClass_field_2C,
                              (CCINIClass *)&MEMORY[0x8291B8].sectionCount,
                              (INIClass *)0xFFFFFFFF);
    v32 = INIClass::ReadBool_Overwrite(
            (int)v77,
            (unsigned __int8 *)&aP2.INIClass_field_2C,
            (CCINIClass *)&MEMORY[0x8291B8].headNode[2],
            0);
    v63 = v32;
    if ( v32 )
    {
      v33 = (INIClass *)v89;
      *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[4 * (_DWORD)v89 + 57940] = v70;
      v89 = (AbstractClass *)&v33->__pad_0[1];
    }
    v88 = 0;
    if ( v32 )
      v88 = (AbstractClass *)INIClass::ReadInt_Overwrite(
                               (int)v77,
                               (unsigned __int8 *)&aP2.INIClass_field_2C,
                               &MEMORY[0x8291B8],
                               0);
    v34 = INIClass::BinarySearchSection((int)v77, &aP4);
    v69 = 0;
    var9F4_1 = v34 != 0;
    if ( (int)v71 > 0 )
    {
      while ( 1 )
      {
        v65 = 0;
        v76 = 0;
        var974 = 0;
        v87 = (AbstractClass *)((char *)&v70[-1].field_16C0 + 3);
        do
        {
          if ( v65 )
            var9F4_2 = (unsigned __int8)((_BYTE)v65 + 96);
          else
            LOBYTE(var9F4_2) = 0;
          v35 = (INIClass *)((char *)&v69->field_0 + 1);
          sprintf(aP2.__pad_20, MEMORY[0x8291B0], (char *)&v69->field_0 + 1);
          strcat(aP2.__pad_20, (const char *)&var9F4_2);
          strcpy(Filename, v183.__pad_0);
          strcat(Filename, aP2.__pad_20);
          sprintf(Source, MEMORY[0x8291A4], aP4.__pad_0, v35);
          if ( !v65 )
          {
            v36 = (_DWORD *)__2_YAPAXI_Z(0x30Cu);
            if ( v36 )
            {
              v37 = v70;
              v70 = (MapClass *)((char *)v70 + 1);
              v87 = (AbstractClass *)((char *)v87 + 1);
              v3 = TerrainTypeClass::Construct(v36, (int)v37, 0xBFu, 0, (MapClass *)Filename, 0);
            }
            else
            {
              v3 = 0;
            }
            if ( Source )
            {
              strncpy(Destination, Source, 0x30u);
              v154 = 0;
            }
            else
            {
              Destination[0] = (unsigned __int8)Source;
            }
            if ( Destination != (char *)(v3 + 25) )
            {
              qmemcpy(v3 + 25, Destination, 0x30u);
              *((_BYTE *)v3 + 148) = v154;
            }
            v38 = v86;
            v3[166] = v75;
            v3[167] = v38;
            *((_BYTE *)v3 + 738) = v64;
            *((_BYTE *)v3 + 736) = Bool_Overwrite;
            *((_BYTE *)v3 + 739) = var9FC_2;
            *((_BYTE *)v3 + 773) = v66;
            ecx147a = v109;
            *((_BYTE *)v3 + 774) = v62;
            v39 = (INIClass *)v111;
            v3[41] = 0;
            *((_BYTE *)v3 + 168) = 0;
            v3[176] = ecx147a;
            v3[177] = v39;
            if ( v63 && v88 )
              *((_BYTE *)v3 + 737) = v63;
            if ( a2 )
              *((_BYTE *)v3 + 756) = 1;
            v41 = v3[169];
            v3[168] = *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[4 * dword_ABC558 + 58212];
            (*(void (__thiscall **)(_DWORD *))(v41 + 12))(v3 + 169);
            if ( var9F4_1 )
            {
              sprintf(aP2.__pad_0, MEMORY[0x829194], v35);
              if ( INIClass::GetString(
                     v77,
                     &aP4,
                     (unsigned __int8 *)&aP2,
                     (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
                     &v184,
                     128) )
              {
                v42 = AnimTypeClass::FindOrCreate((AbstractClass *)&v184);
                if ( v42 )
                {
                  v3[178] = (*(int (__thiscall **)(AnimTypeClass *))(*(_DWORD *)v42->__pad_0 + 64))(v42);
                  sprintf(aP2.__pad_0, MEMORY[0x829184], v35);
                  v3[179] = INIClass::ReadInt_Overwrite((int)v77, (unsigned __int8 *)&aP4, &aP2, (INIClass *)v3[179]);
                  sprintf(aP2.__pad_0, MEMORY[0x829174], v35);
                  v3[180] = INIClass::ReadInt_Overwrite((int)v77, (unsigned __int8 *)&aP4, &aP2, (INIClass *)v3[180]);
                  sprintf(aP2.__pad_0, MEMORY[0x829160], v35);
                  v3[181] = INIClass::ReadInt_Overwrite((int)v77, (unsigned __int8 *)&aP4, &aP2, (INIClass *)v3[181]);
                  sprintf(aP2.__pad_0, stru_829150, v35);
                  v3[182] = INIClass::ReadInt_Overwrite((int)v77, (unsigned __int8 *)&aP4, &aP2, (INIClass *)v3[182]);
                }
              }
            }
            v76 = (MapClass *)v3;
            var974 = (MapClass *)v3;
          }
          v43 = var904;
          _makepath(v182, 0, 0, Filename, (const char *)&off_7E1BC6 + var904);
          v44 = 0;
          v60 = 0;
          if ( a2 )
          {
            CCFileClass::Construct(v171, v182);
            v60 = CCFileClass::Open(v171, 0);
            if ( v60 && !v65 )
              strncpy((char *)v3 + 757, v182, 0xEu);
            v171[0] = &vt_CCFileClass;
            v173 = 0;
            Vector::Clear((int)v172);
            v171[0] = &off_7E1668;
            BufferIOFileClass::Dtor(v171);
            if ( v60 )
              goto LABEL_190;
          }
          else
          {
            v44 = (unsigned __int8 *)SearchMIXFile(v182, 0);
            if ( v44 )
              goto LABEL_189;
          }
          if ( !v86 )
            goto LABEL_190;
          if ( v91 == (AbstractClass *)-1 )
            _makepath(v182, 0, 0, Filename, aMmt);
          else
            _makepath(v182, 0, 0, Filename, (const char *)&off_7E1BCA + v43);
          if ( a2 )
          {
            CCFileClass::Construct(v174, v182);
            v60 = CCFileClass::Open(v174, 0);
            if ( v60 && !v65 )
              strncpy((char *)v3 + 757, v182, 0xEu);
            v174[0] = &vt_CCFileClass;
            v176 = 0;
            Vector::Clear((int)v175);
            v174[0] = &off_7E1668;
            BufferIOFileClass::Dtor(v174);
            if ( v60 )
              goto LABEL_190;
          }
          else
          {
            v44 = (unsigned __int8 *)SearchMIXFile(v182, 0);
            if ( v44 )
              goto LABEL_189;
          }
          _makepath(v182, 0, 0, Filename, aTem);
          if ( a2 )
          {
            CCFileClass::Construct(v165, v182);
            v60 = CCFileClass::Open(v165, 0);
            if ( v60 && !v65 )
              strncpy((char *)v3 + 757, v182, 0xEu);
            v165[0] = &vt_CCFileClass;
            v167 = 0;
            Vector::Clear((int)v166);
            v165[0] = &off_7E1668;
            BufferIOFileClass::Dtor(v165);
            if ( v60 )
              goto LABEL_190;
          }
          else
          {
            v44 = (unsigned __int8 *)SearchMIXFile(v182, 0);
            if ( v44 )
              goto LABEL_189;
          }
          _makepath(v182, 0, 0, Filename, aUrb);
          if ( !a2 )
          {
            v44 = (unsigned __int8 *)SearchMIXFile(v182, 0);
            if ( !v44 )
              goto LABEL_190;
LABEL_189:
            v60 = 1;
            goto LABEL_190;
          }
          CCFileClass::Construct(v177, v182);
          v60 = CCFileClass::Open(v177, 0);
          if ( v60 && !v65 )
            strncpy((char *)v3 + 757, v182, 0xEu);
          v177[0] = &vt_CCFileClass;
          v179 = 0;
          Vector::Clear((int)v178);
          v177[0] = &off_7E1668;
          BufferIOFileClass::Dtor(v177);
LABEL_190:
          if ( !v65 )
            goto LABEL_207;
          if ( !v44 && !v60 )
            break;
          eax193 = (_DWORD *)__2_YAPAXI_Z(0x30Cu);
          if ( eax193 )
            v3 = TerrainTypeClass::Construct(eax193, (int)v87, 0xBFu, 0, (MapClass *)Filename, 1);
          else
            v3 = 0;
          if ( Source )
          {
            strncpy(v155, Source, 0x30u);
            v156 = 0;
          }
          else
          {
            v155[0] = (unsigned __int8)Source;
          }
          if ( v155 != (char *)(v3 + 25) )
          {
            qmemcpy(v3 + 25, v155, 0x30u);
            *((_BYTE *)v3 + 148) = v156;
          }
          v46 = v75;
          v3[167] = v86;
          v3[166] = v46;
          *((_BYTE *)v3 + 773) = v66;
          *((_BYTE *)v3 + 736) = Bool_Overwrite;
          *((_BYTE *)v3 + 738) = v64;
          *((_BYTE *)v3 + 774) = v62;
          *((_BYTE *)v3 + 739) = var9FC_2;
          if ( a2 )
          {
            *((_BYTE *)v3 + 756) = 1;
            strncpy((char *)v3 + 757, v182, 0xEu);
          }
          if ( v63 && v88 )
            *((_BYTE *)v3 + 737) = v63;
          v45 = var974;
          v3[168] = *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[4 * dword_ABC558 + 58212];
          *(_DWORD *)&v45->__pad_298[36] = v3;
          (*(void (__thiscall **)(_DWORD *))(v3[169] + 12))(v3 + 169);
          var974 = (MapClass *)v3;
          if ( !v44 )
          {
LABEL_215:
            if ( !v65 )
            {
              v3[185] = 0;
              v3[186] = 0;
            }
            goto LABEL_217;
          }
LABEL_207:
          v3[41] = v44;
          if ( !v44 )
            goto LABEL_215;
          v48 = 0;
          v3[185] = *v44;
          v3[186] = v44[4];
          if ( *((_DWORD *)v44 + 1) * *(_DWORD *)v44 > 0 )
          {
            ecx209 = (unsigned int *)(v44 + 16);
            do
            {
              v50 = *ecx209;
              if ( *ecx209 && v50 < (unsigned int)v44 )
                *ecx209 = (unsigned int)&v44[v50];
              ++v48;
              ++ecx209;
            }
            while ( v48 < *((_DWORD *)v44 + 1) * *(_DWORD *)v44 );
          }
          TerrainClass::InitTheatre(v3);
LABEL_217:
          v65 = (MapClass *)((char *)v65 + 1);
        }
        while ( v44 || v60 );
        if ( (int)v65 > 1 )
        {
          v49 = v76;
          if ( (char)v65 > 1 )
          {
            v52 = (char)v65;
            v53 = (char)v65 - 1;
            do
            {
              *(_DWORD *)&v49->__pad_298[88] = v52;
              v49 = *(MapClass **)&v49->__pad_298[36];
              --v52;
              --v53;
            }
            while ( v53 );
          }
        }
        v69 = (MapClass *)((char *)v69 + 1);
        if ( (int)v69 >= (int)v71 )
        {
          v20 = (INIClass *)v90;
          break;
        }
      }
    }
    v23 = var978;
    v21 = (CCINIClass *)v70;
    v20 = (INIClass *)((char *)v20 + 1);
    v90 = (AbstractClass *)v20;
  }
  for ( j = 0; j < *(int *)&MEMORY[0xA8D63C].__pad_14B0[588]; ++j )
  {
    v55 = *(_DWORD **)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[576] + 4 * j);
    v56 = v55[165] - v55[168];
    v57 = v55[166];
    if ( v57 != 0xFFFF )
      v55[166] = v56 + *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[4 * v57 + 58216];
    v58 = v55[167];
    if ( v58 != 0xFFFF )
      v55[167] = v56 + *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[4 * v58 + 58216];
  }
  if ( v91 == (AbstractClass *)5 )
  {
    dword_ABAD28 = -1;
    *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[55648] = -1;
    *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57928] = -1;
    *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57924] = -1;
    *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[58040] = -1;
    *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57424] = -1;
    g_TerrainBridgeIndex = -1;
  }
  *(_DWORD *)aP1.__pad_0 = &vt_CCFileClass;
  v170 = 0;
  Vector::Clear((int)v169);
  *(_DWORD *)aP1.__pad_0 = &off_7E1668;
  BufferIOFileClass::Dtor(&aP1);
  v161[0] = &vt_CCFileClass;
  v163 = 0;
  Vector::Clear((int)v162);
  v161[0] = &off_7E1668;
  BufferIOFileClass::Dtor(v161);
  v149[0] = (int)&vt_CCFileClass;
  v151 = 0;
  Vector::Clear((int)v150);
  v149[0] = (int)&off_7E1668;
  BufferIOFileClass::Dtor(v149);
  v158[0] = (int)&vt_CCFileClass;
  v160 = 0;
  Vector::Clear((int)v159);
  v158[0] = (int)&off_7E1668;
  BufferIOFileClass::Dtor(v158);
  return HashTable::DestroyHashTableINIClass((void **)v77);
}



// ==== 0x00546DA0  LoadMapClassIsometricTiles  this=-  sig=ida-proto ====
void __fastcall MapClass_LoadIsometricTiles(char a1, char a2)
{
  int i; // edi
  int v4; // ecx
  int inited; // eax
  _DWORD *v6; // esi
  int v7; // ebp
  _DWORD *v8; // eax
  int v9; // ecx
  int v10; // ecx
  int v11; // edx
  int v12; // ebx
  int v13; // ebp
  int v14; // esi
  int v15; // edi
  int v16; // eax
  int v17; // esi
  int v20; // [esp+14h] [ebp-1Ch]
  DWORD Ticks; // [esp+18h] [ebp-18h]
  int v22; // [esp+20h] [ebp-10h]

  Timer::GetTicks(); /*0x546db5*/
  if ( !a1 ) /*0x546dc8*/
  {
    LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]); /*0x546dd3*/
    for ( i = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); i; i = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]) ) /*0x546de6*/
    {
      v4 = *(_DWORD *)(i + 56); /*0x546dec*/
      inited = 0; /*0x546def*/
      if ( v4 == 0xFFFF || v4 >= MEMORY[0xA8ED38] ) /*0x546dff*/
      {
        v6 = (_DWORD *)*((_DWORD *)MEMORY[0xA8ED2C] + unk_AA10B0); /*0x546e6f*/
        inited = CellClass::InitRandomOffsets(i, unk_AA10B0, v6[188]); /*0x546e7c*/
      }
      else
      {
        v6 = (_DWORD *)*((_DWORD *)MEMORY[0xA8ED2C] + v4); /*0x546e07*/
        if ( (int)v6[188] > 1 ) /*0x546e11*/
        {
          LOBYTE(inited) = *(_BYTE *)(i + 282); /*0x546e13*/
          v7 = inited; /*0x546e1d*/
          v8 = (_DWORD *)(*(int (__thiscall **)(_DWORD))(*v6 + 156))(*((_DWORD *)MEMORY[0xA8ED2C] + v4)); /*0x546e1f*/
          if ( v8 && (v9 = v8[v7 % (*v8 * v8[1]) + 4]) != 0 && (*(_DWORD *)(v9 + 36) & 4) != 0 ) /*0x546e48*/
            inited = (*(_DWORD *)(i + 320) >> 13) & 1; /*0x546e53*/
          else
            inited = CellClass::InitRandomOffsets(i, *(_DWORD *)(i + 56), v6[188]); /*0x546e62*/
        }
      }
      v10 = v6[188]; /*0x546e81*/
      v11 = inited; /*0x546e87*/
      if ( inited > v10 - 1 ) /*0x546e8e*/
        v11 = inited % v10; /*0x546e91*/
      for ( ; v11; --v11 ) /*0x546e95*/
        v6 = (_DWORD *)v6[175]; /*0x546e97*/
      ++v6[194]; /*0x546ea7*/
    }
  }
  v12 = 0; /*0x546ec5*/
  v13 = 0; /*0x546ec7*/
  Ticks = Timer::GetTicks(); /*0x546ed7*/
  v14 = 1; /*0x546ee0*/
  v15 = 0; /*0x546ee2*/
  v22 = 1; /*0x546eea*/
  v20 = 0; /*0x546eee*/
  if ( MEMORY[0xA8ED38] > 0 ) /*0x546ef2*/
  {
    while ( 1 ) /*0x546efe*/
    {
      if ( Ticks == -1 ) /*0x546f03*/
        goto LABEL_23; /*0x546f03*/
      v16 = Timer::GetTicks() - Ticks; /*0x546f0e*/
      if ( v16 < v14 ) /*0x546f14*/
        break; /*0x546f14*/
LABEL_24:
      Event::Dispatch(); /*0x546f1c*/
      Ticks = Timer::GetTicks(); /*0x546f2e*/
      v22 = 4; /*0x546f43*/
LABEL_25:
      v17 = *((_DWORD *)MEMORY[0xA8ED2C] + v15); /*0x546f47*/
      if ( v17 ) /*0x546f52*/
      {
        do /*0x546fdc*/
        {
          if ( *(_BYTE *)(v17 + 756) && strlen((const char *)(v17 + 757)) ) /*0x546f68*/
          {
            if ( a1 || *(_DWORD *)(v17 + 776) || a2 && *(_BYTE *)(v17 + 739) ) /*0x546f8e*/
            {
              if ( !*(_DWORD *)(v17 + 164) ) /*0x546fc0*/
              {
                v13 += MapClass::LoadFileData(v17); /*0x546fd1*/
                ++v12; /*0x546fd3*/
              }
            }
            else if ( *(_DWORD *)(v17 + 164) ) /*0x546f98*/
            {
              __3_YAXPAX_Z(*(void **)(v17 + 164)); /*0x546fa5*/
              *(_DWORD *)(v17 + 164) = 0; /*0x546fad*/
              *(_BYTE *)(v17 + 168) = 0; /*0x546fb7*/
            }
          }
          v17 = *(_DWORD *)(v17 + 700); /*0x546fd4*/
        }
        while ( v17 ); /*0x546fdc*/
        v15 = v20; /*0x546fe2*/
      }
      v20 = ++v15; /*0x546fee*/
      if ( v15 >= MEMORY[0xA8ED38] ) /*0x546ff2*/
        goto LABEL_39; /*0x546ff2*/
      v14 = v22; /*0x546efa*/
    }
    v14 -= v16; /*0x546f16*/
LABEL_23:
    if ( v14 ) /*0x546f1a*/
      goto LABEL_25; /*0x546f1a*/
    goto LABEL_24; /*0x546f1a*/
  }
LABEL_39:
  Debug::Log(); /*0x546ff8*/
}


// ==== 0x00547020  MapClass::LoadFileData  this=MapClass  sig=csp ====
int __thiscall MapClass_LoadFileData(int this)
{
  int Size; // ebx
  void *v3; // eax
  unsigned __int8 *v4; // eax
  int v5; // edi
  int v6; // ecx
  int v7; // edx
  unsigned int *v8; // ecx
  unsigned int v9; // eax
  unsigned int v10; // edx
  int v12[22]; // [esp+Ch] [ebp-6Ch] BYREF
  _BYTE v13[12]; // [esp+64h] [ebp-14h] BYREF
  int v14; // [esp+70h] [ebp-8h]

  CCFileClass::Construct(v12, (char *)(this + 757)); /*0x547033*/
  Size = CCFileClass::GetSize(v12); /*0x547041*/
  if ( *(_DWORD *)(this + 164) ) /*0x547043*/
    __3_YAXPAX_Z(*(void **)(this + 164)); /*0x54704e*/
  v3 = __2_YAPAXI_Z(Size); /*0x547057*/
  *(_DWORD *)(this + 164) = v3; /*0x547063*/
  CCFileClass::Read(v12, v3, Size); /*0x54706b*/
  v4 = *(unsigned __int8 **)(this + 164); /*0x547070*/
  *(_BYTE *)(this + 168) = 1; /*0x547078*/
  v5 = 0; /*0x54707f*/
  *(_DWORD *)(this + 740) = *v4; /*0x547083*/
  v6 = v4[4]; /*0x547091*/
  v7 = v6 * *(_DWORD *)(this + 740); /*0x547094*/
  *(_DWORD *)(this + 744) = v6; /*0x547099*/
  if ( v7 > 0 ) /*0x54709f*/
  {
    v8 = (unsigned int *)(v4 + 16); /*0x5470a1*/
    do /*0x5470cb*/
    {
      v9 = *v8; /*0x5470a4*/
      if ( *v8 ) /*0x5470a4*/
      {
        v10 = *(_DWORD *)(this + 164); /*0x5470aa*/
        if ( v9 < v10 ) /*0x5470b2*/
          *v8 = v10 + v9; /*0x5470b6*/
      }
      ++v5; /*0x5470be*/
      ++v8; /*0x5470c6*/
    }
    while ( v5 < *(_DWORD *)(this + 744) * *(_DWORD *)(this + 740) ); /*0x5470cb*/
  }
  TerrainClass::InitTheatre(this); /*0x5470cf*/
  v12[0] = (int)&vt_CCFileClass; /*0x5470d8*/
  v14 = 0; /*0x5470e0*/
  Vector::Clear((int)v13); /*0x5470e8*/
  v12[0] = (int)&off_7E1668; /*0x5470f1*/
  BufferIOFileClass::Dtor(v12); /*0x5470f9*/
  return Size; /*0x5470fe*/
}


// ==== 0x00547110  ResetAllTechnoField776  this=-  sig=ida-proto ====
int ResetAllTechnoField776()
{
  int result; // eax
  int i; // ecx
  int j; // eax

  result = MEMORY[0xA8ED38]; /*0x547110*/
  for ( i = 0; i < MEMORY[0xA8ED38]; ++i ) /*0x54711b*/
  {
    for ( j = *((_DWORD *)MEMORY[0xA8ED2C] + i); j; j = *(_DWORD *)(j + 700) ) /*0x547127*/
      *(_DWORD *)(j + 776) = 0; /*0x547129*/
    result = MEMORY[0xA8ED38]; /*0x547139*/
  }
  return result; /*0x547143*/
}


// ==== 0x00547150  TechnoClass::GetTileAnimationData  this=TechnoClass  sig=csp ====
char __thiscall sub_547150(void *this, int a2, _DWORD *a3, _DWORD *a4)
{
  _DWORD *v4; // eax
  int v5; // edx
  int v6; // ecx

  v4 = (_DWORD *)(*(int (__thiscall **)(void *))(this->location)(this); /*0x547152*/
  if ( !v4 ) /*0x54715c*/
    return 0; /*0x5471a0*/
  v5 = v4[a2 % (*v4 * v4[1]) + 4]; /*0x547174*/
  *a3 = v4[2]; /*0x547178*/
  v6 = v4[3]; /*0x54717e*/
  *a4 = v6; /*0x547183*/
  if ( v5 ) /*0x547185*/
  {
    if ( (*(_BYTE *)(v5 + 36) & 1) != 0 ) /*0x54718b*/
      *a4 = v6 + *(_DWORD *)(v5 + 4) - *(_DWORD *)(v5 + 24); /*0x547197*/
  }
  return 1; /*0x54719d*/
}


// ==== 0x005471B0  HouseClass::GetCameoTypeIndex  this=HouseClass  sig=csp ====
int __thiscall HouseClass::GetCameoTypeIndex(void *this, int a2)
{
  _DWORD *v2; // eax
  int v3; // ecx

  v2 = (_DWORD *)(*(int (__thiscall **)(void *))(this->secretLabsCount)(this); /*0x5471b2*/
  if ( v2 && (v3 = v2[a2 % (*v2 * v2[1]) + 4]) != 0 ) /*0x5471d3*/
    return *(char *)(v3 + 42); /*0x5471d5*/
  else
    return 0; /*0x5471dc*/
}


// ==== 0x005471F0  CellClass::GetTerrainFlag  this=CellClass  sig=csp ====
char __thiscall CellClass_GetTerrainFlag(void *this, int a2)
{
  _DWORD *v2; // eax
  int v3; // ecx
  int v4; // eax

  v2 = (_DWORD *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 156))(this); /*0x5471f2*/
  if ( v2 && (v3 = v2[a2 % (*v2 * v2[1]) + 4]) != 0 ) /*0x547213*/
    return (*(_DWORD *)(v3 + 36) >> 2) & 1; /*0x54721b*/
  else
    LOBYTE(v4) = 0; /*0x547221*/
  return v4; /*0x54721e*/
}


// ==== 0x00547230  TacticalClass::DrawCellOverlay  this=TacticalClass  sig=csp ====
void __thiscall TacticalClass::DrawCellOverlay(
        int this,
        int a2,
        IUnknown *aP2,
        int a4,
        int a5,
        IUnknown *aP5,
        int a7,
        int a8,
        int a9,
        int a10)
{
  int v10; // edx
  CCINIClass *v11; // esi
  int v12; // eax
  int v13; // esi
  int v14; // edx
  int v15; // ecx
  IUnknown *v16; // ecx
  unsigned int v17; // eax
  int v18; // eax

  v10 = *(_DWORD *)(this + 660); /*0x547230*/
  v11 = g_TerrainTypeTable2; /*0x547237*/
  if ( (v10 < (int)g_TerrainTypeTable2 || v10 >= (int)&g_TerrainTypeTable2->headNode[1] + 2) /*0x547260*/
    && ((v11 = *(CCINIClass **)&MEMORY[0xA8D63C].__pad_579C[58048], v10 < *(int *)&MEMORY[0xA8D63C].__pad_579C[58048])
     || v10 >= *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[58048] + 10)
    || v10 - (_DWORD)v11 == -1 )
  {
    if ( *(_BYTE *)(this + 737) ) /*0x547294*/
    {
      v16 = (IUnknown *)&MEMORY[0xA8D63C].__pad_579C[57940]; /*0x5472a2*/
      do /*0x5472c9*/
      {
        v17 = v10 - v16->field_0; /*0x5472ab*/
        if ( v17 < 0x28 ) /*0x5472ad*/
          break; /*0x5472ad*/
        if ( v16 == (IUnknown *)&MEMORY[0xA8D63C].__pad_579C[57956] ) /*0x5472ba*/
          return; /*0x5472ba*/
        v16 = (IUnknown *)((char *)v16 + 4); /*0x5472c0*/
      }
      while ( (int)v16 < (int)&MEMORY[0xA8D63C].__pad_579C[57960] ); /*0x5472c9*/
      v18 = 4 * v17; /*0x5472cf*/
      if ( a2 == dword_ABC2D4[v18] ) /*0x5472d8*/
      {
        v13 = dword_ABC2D0[v18]; /*0x5472de*/
        if ( v13 ) /*0x5472e6*/
        {
          v14 = dword_ABC2DC[v18]; /*0x5472ee*/
          v15 = dword_ABC2D8[v18] + 30; /*0x5472f4*/
          goto LABEL_17; /*0x5472f4*/
        }
      }
    }
  }
  else
  {
    v12 = 4 * (v10 - (_DWORD)v11); /*0x547266*/
    if ( a2 == dword_ABC214[v12] ) /*0x54726f*/
    {
      v13 = dword_ABC210[v12]; /*0x547275*/
      if ( v13 ) /*0x54727d*/
      {
        v14 = dword_ABC21C[v12]; /*0x547289*/
        v15 = dword_ABC218[v12] + 30; /*0x54728f*/
LABEL_17:
        a4 = *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8532] + v15 + a4 - (_DWORD)aP5; /*0x5472f7*/
        a5 = *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8536] + v14 + 15 + a5 - a7; /*0x54732c*/
        DrawToSurfaceSHP( /*0x547362*/
          (int)aP2,
          *(_DWORD *)MEMORY[0x87F69C]->__pad_0,
          (int)lpBuffer,
          v13 - 1,
          &a4,
          (int *)&aP5,
          17921,
          0,
          a10,
          0,
          1000,
          0,
          0,
          0,
          0,
          0);
      }
    }
  }
}


// ==== 0x00547370  InitCoordinateOffsetsMap  this=-  sig=ida-proto ====
int __fastcall Map_InitCoordinateOffsets(int a1)
{
  int v1; // edx
  int *v2; // ecx
  unsigned int v3; // eax
  int v5; // [esp+Ch] [ebp-4h]

  v5 = a1; /*0x54737f*/
  if ( !*(_BYTE *)(a1 + 737) ) /*0x547373*/
    return 0; /*0x547cbb*/
  if ( (byte_ABBEB8 & 1) == 0 ) /*0x547390*/
  {
    byte_ABBEB8 |= 1u; /*0x5473a5*/
    dword_ABAD48 = 2147450879; /*0x5473b9*/
    dword_ABAD60 = 2147450879; /*0x5473cd*/
    dword_ABAD78 = 2147450879; /*0x5473e1*/
    dword_ABAD90 = 2147450879; /*0x5473f5*/
    dword_ABADA8 = 2147450879; /*0x547409*/
    dword_ABADC0 = 2147450879; /*0x54741d*/
    dword_ABADD8 = 2147450879; /*0x547431*/
    dword_ABAD34 = unk_AA105C[0]; /*0x547447*/
    dword_ABAD38 = unk_AA105C[0]; /*0x54744c*/
    dword_ABAD3C = unk_AA105C[0]; /*0x547451*/
    dword_ABAD40 = unk_AA105C[0]; /*0x547456*/
    dword_ABAD44 = unk_AA105C[0]; /*0x54745b*/
    dword_ABAD4C = unk_AA105C[0]; /*0x547460*/
    dword_ABAD50 = unk_AA105C[0]; /*0x547465*/
    dword_ABAD54 = unk_AA105C[0]; /*0x54746a*/
    dword_ABAD58 = unk_AA105C[0]; /*0x54746f*/
    dword_ABAD5C = unk_AA105C[0]; /*0x547474*/
    dword_ABAD64 = unk_AA105C[0]; /*0x547479*/
    dword_ABAD68 = unk_AA105C[0]; /*0x54747e*/
    dword_ABAD6C = unk_AA105C[0]; /*0x547483*/
    dword_ABAD70 = unk_AA105C[0]; /*0x547488*/
    dword_ABAD74 = unk_AA105C[0]; /*0x54748d*/
    dword_ABAD7C = unk_AA105C[0]; /*0x547492*/
    dword_ABAD80 = unk_AA105C[0]; /*0x547497*/
    dword_ABAD84 = unk_AA105C[0]; /*0x54749c*/
    dword_ABAD88 = unk_AA105C[0]; /*0x5474a1*/
    dword_ABAD8C = unk_AA105C[0]; /*0x5474a6*/
    dword_ABAD94 = unk_AA105C[0]; /*0x5474ab*/
    dword_ABAD98 = unk_AA105C[0]; /*0x5474b0*/
    dword_ABAD9C = unk_AA105C[0]; /*0x5474b5*/
    dword_ABADA0 = unk_AA105C[0]; /*0x5474ba*/
    dword_ABADA4 = unk_AA105C[0]; /*0x5474bf*/
    dword_ABADAC = unk_AA105C[0]; /*0x5474c4*/
    dword_ABADB0 = unk_AA105C[0]; /*0x5474c9*/
    dword_ABADB4 = unk_AA105C[0]; /*0x5474ce*/
    dword_ABADB8 = unk_AA105C[0]; /*0x5474d3*/
    dword_ABADBC = unk_AA105C[0]; /*0x5474d8*/
    dword_ABADC4 = unk_AA105C[0]; /*0x5474dd*/
    dword_ABADC8 = unk_AA105C[0]; /*0x5474e2*/
    dword_ABADCC = unk_AA105C[0]; /*0x5474e7*/
    dword_ABADD0 = unk_AA105C[0]; /*0x5474ec*/
    dword_ABADD4 = unk_AA105C[0]; /*0x5474f1*/
    dword_ABADDC = unk_AA105C[0]; /*0x5474f6*/
    dword_ABADE0 = unk_AA105C[0]; /*0x5474fb*/
    dword_ABADE4 = unk_AA105C[0]; /*0x547500*/
    dword_ABADE8 = unk_AA105C[0]; /*0x547505*/
    dword_ABADEC = unk_AA105C[0]; /*0x54750a*/
    dword_ABADF0 = 2147450879; /*0x54750f*/
    dword_ABADF4 = unk_AA105C[0]; /*0x547515*/
    dword_ABADF8 = unk_AA105C[0]; /*0x54751a*/
    dword_ABAE08 = 2147450879; /*0x547532*/
    dword_ABAE20 = 2147450879; /*0x547546*/
    dword_ABAE38 = 2147450879; /*0x54755a*/
    dword_ABAE50 = 2147450879; /*0x54756e*/
    dword_ABAE68 = 2147450879; /*0x547582*/
    dword_ABAE80 = 2147450879; /*0x547596*/
    dword_ABAE98 = 2147450879; /*0x5475aa*/
    dword_ABAEB0 = 2147450879; /*0x5475be*/
    dword_ABADFC = unk_AA105C[0]; /*0x5475cd*/
    dword_ABAE00 = unk_AA105C[0]; /*0x5475d2*/
    dword_ABAE04 = unk_AA105C[0]; /*0x5475d7*/
    dword_ABAE0C = unk_AA105C[0]; /*0x5475dc*/
    dword_ABAE10 = unk_AA105C[0]; /*0x5475e1*/
    dword_ABAE14 = unk_AA105C[0]; /*0x5475e6*/
    dword_ABAE18 = unk_AA105C[0]; /*0x5475eb*/
    dword_ABAE1C = unk_AA105C[0]; /*0x5475f0*/
    dword_ABAE24 = unk_AA105C[0]; /*0x5475f5*/
    dword_ABAE28 = unk_AA105C[0]; /*0x5475fa*/
    dword_ABAE2C = unk_AA105C[0]; /*0x5475ff*/
    dword_ABAE30 = unk_AA105C[0]; /*0x547604*/
    dword_ABAE34 = unk_AA105C[0]; /*0x547609*/
    dword_ABAE3C = unk_AA105C[0]; /*0x54760e*/
    dword_ABAE40 = unk_AA105C[0]; /*0x547613*/
    dword_ABAE44 = unk_AA105C[0]; /*0x547618*/
    dword_ABAE48 = unk_AA105C[0]; /*0x54761d*/
    dword_ABAE4C = unk_AA105C[0]; /*0x547622*/
    dword_ABAE54 = unk_AA105C[0]; /*0x547627*/
    dword_ABAE58 = unk_AA105C[0]; /*0x54762c*/
    dword_ABAE5C = unk_AA105C[0]; /*0x547631*/
    dword_ABAE60 = unk_AA105C[0]; /*0x547636*/
    dword_ABAE64 = unk_AA105C[0]; /*0x54763b*/
    dword_ABAE6C = unk_AA105C[0]; /*0x547640*/
    dword_ABAE70 = unk_AA105C[0]; /*0x547645*/
    dword_ABAE74 = unk_AA105C[0]; /*0x54764a*/
    dword_ABAE78 = unk_AA105C[0]; /*0x54764f*/
    dword_ABAE7C = unk_AA105C[0]; /*0x547654*/
    dword_ABAE84 = unk_AA105C[0]; /*0x547659*/
    dword_ABAE88 = unk_AA105C[0]; /*0x54765e*/
    dword_ABAE8C = unk_AA105C[0]; /*0x547663*/
    dword_ABAE90 = unk_AA105C[0]; /*0x547668*/
    dword_ABAE94 = unk_AA105C[0]; /*0x54766d*/
    dword_ABAE9C = unk_AA105C[0]; /*0x547672*/
    dword_ABAEA0 = unk_AA105C[0]; /*0x547677*/
    dword_ABAEA4 = unk_AA105C[0]; /*0x54767c*/
    dword_ABAEA8 = unk_AA105C[0]; /*0x547681*/
    dword_ABAEAC = unk_AA105C[0]; /*0x547686*/
    dword_ABAEB4 = unk_AA105C[0]; /*0x54768b*/
    dword_ABAEB8 = unk_AA105C[0]; /*0x547690*/
    dword_ABAEBC = unk_AA105C[0]; /*0x547695*/
    dword_ABAEC0 = unk_AA105C[0]; /*0x54769a*/
    dword_ABAEC4 = unk_AA105C[0]; /*0x54769f*/
    dword_ABAEC8 = 2147450879; /*0x5476a4*/
    dword_ABAECC = unk_AA105C[0]; /*0x5476aa*/
    dword_ABAED0 = unk_AA105C[0]; /*0x5476af*/
    dword_ABAEE0 = 2147450879; /*0x5476c7*/
    dword_ABAEF8 = 2147450879; /*0x5476db*/
    dword_ABAF10 = 2147450879; /*0x5476ed*/
    dword_ABAF14 = -65536; /*0x547701*/
    dword_ABAF18 = -65536; /*0x54771a*/
    dword_ABAF1C = -65537; /*0x547733*/
    dword_ABAF28 = 2147450879; /*0x547747*/
    dword_ABAF2C = -65536; /*0x54775b*/
    dword_ABAF30 = -65536; /*0x54776f*/
    dword_ABAF34 = -65537; /*0x547783*/
    dword_ABAF40 = 2147450879; /*0x547797*/
    dword_ABAF44 = -131073; /*0x5477ab*/
    dword_ABAF48 = -196608; /*0x5477bf*/
    dword_ABAED4 = unk_AA105C[0]; /*0x5477d3*/
    dword_ABAED8 = unk_AA105C[0]; /*0x5477d8*/
    dword_ABAEDC = unk_AA105C[0]; /*0x5477dd*/
    dword_ABAEE4 = unk_AA105C[0]; /*0x5477e2*/
    dword_ABAEE8 = unk_AA105C[0]; /*0x5477e7*/
    dword_ABAEEC = unk_AA105C[0]; /*0x5477ec*/
    dword_ABAEF0 = unk_AA105C[0]; /*0x5477f1*/
    dword_ABAEF4 = unk_AA105C[0]; /*0x5477f6*/
    dword_ABAEFC = unk_AA105C[0]; /*0x5477fb*/
    dword_ABAF00 = unk_AA105C[0]; /*0x547800*/
    dword_ABAF04 = unk_AA105C[0]; /*0x547805*/
    dword_ABAF08 = unk_AA105C[0]; /*0x54780a*/
    dword_ABAF0C = unk_AA105C[0]; /*0x54780f*/
    dword_ABAF20 = unk_AA105C[0]; /*0x547814*/
    dword_ABAF24 = unk_AA105C[0]; /*0x547819*/
    dword_ABAF38 = unk_AA105C[0]; /*0x54781e*/
    dword_ABAF3C = unk_AA105C[0]; /*0x547823*/
    dword_ABAF4C = unk_AA105C[0]; /*0x547828*/
    dword_ABAF50 = unk_AA105C[0]; /*0x54782d*/
    dword_ABAF54 = unk_AA105C[0]; /*0x547832*/
    dword_ABAF58 = 2147450879; /*0x547837*/
    dword_ABAF5C = -131073; /*0x547850*/
    dword_ABAF60 = -196608; /*0x547864*/
    dword_ABAF70 = 2147450879; /*0x547878*/
    dword_ABAF74 = -131073; /*0x54788c*/
    dword_ABAF78 = -196608; /*0x5478a0*/
    dword_ABAF88 = 2147450879; /*0x5478b4*/
    dword_ABAF8C = -196608; /*0x5478c8*/
    dword_ABAFA0 = 2147450879; /*0x5478dc*/
    dword_ABAFA4 = -196608; /*0x5478f2*/
    dword_ABAFA8 = -196607; /*0x547906*/
    dword_ABAFAC = -131073; /*0x54791a*/
    dword_ABAFB0 = -131074; /*0x54792e*/
    dword_ABAFB8 = 2147450879; /*0x547942*/
    dword_ABAFBC = -196608; /*0x547956*/
    dword_ABAFC0 = -131073; /*0x54796a*/
    dword_ABAFC4 = -131074; /*0x54797e*/
    dword_ABAFC8 = -65539; /*0x547992*/
    dword_ABAF64 = unk_AA105C[0]; /*0x5479a1*/
    dword_ABAF68 = unk_AA105C[0]; /*0x5479a6*/
    dword_ABAF6C = unk_AA105C[0]; /*0x5479ab*/
    dword_ABAF7C = unk_AA105C[0]; /*0x5479b0*/
    dword_ABAF80 = unk_AA105C[0]; /*0x5479b5*/
    dword_ABAF84 = unk_AA105C[0]; /*0x5479ba*/
    dword_ABAF90 = unk_AA105C[0]; /*0x5479bf*/
    dword_ABAF94 = unk_AA105C[0]; /*0x5479c4*/
    dword_ABAF98 = unk_AA105C[0]; /*0x5479c9*/
    dword_ABAF9C = unk_AA105C[0]; /*0x5479ce*/
    dword_ABAFB4 = unk_AA105C[0]; /*0x5479d3*/
    dword_ABAFCC = unk_AA105C[0]; /*0x5479d8*/
    dword_ABAFD0 = 2147450879; /*0x5479dd*/
    dword_ABAFD4 = -196608; /*0x5479f1*/
    dword_ABAFD8 = -131073; /*0x547a05*/
    dword_ABAFDC = -131074; /*0x547a19*/
    dword_ABAFE8 = 2147450879; /*0x547a2d*/
    dword_ABAFF0 = -131073; /*0x547a54*/
    dword_ABAFF4 = -131074; /*0x547a68*/
    dword_ABB000 = 2147450879; /*0x547a7c*/
    dword_ABB004 = -131074; /*0x547a90*/
    dword_ABB018 = 2147450879; /*0x547aa4*/
    dword_ABB01C = -131074; /*0x547ab8*/
    dword_ABB034 = -196608; /*0x547ad5*/
    dword_ABB048 = 2147450879; /*0x547ae9*/
    dword_ABAFE0 = unk_AA105C[0]; /*0x547afd*/
    dword_ABAFE4 = unk_AA105C[0]; /*0x547b02*/
    dword_ABAFEC = -196608; /*0x547b07*/
    dword_ABAFF8 = unk_AA105C[0]; /*0x547b0d*/
    dword_ABAFFC = unk_AA105C[0]; /*0x547b12*/
    dword_ABB008 = unk_AA105C[0]; /*0x547b17*/
    dword_ABB00C = unk_AA105C[0]; /*0x547b1c*/
    dword_ABB010 = unk_AA105C[0]; /*0x547b21*/
    dword_ABB014 = unk_AA105C[0]; /*0x547b26*/
    dword_ABB020 = unk_AA105C[0]; /*0x547b2b*/
    dword_ABB024 = unk_AA105C[0]; /*0x547b30*/
    dword_ABB028 = unk_AA105C[0]; /*0x547b35*/
    dword_ABB02C = unk_AA105C[0]; /*0x547b3a*/
    dword_ABB030 = 2147450879; /*0x547b3f*/
    dword_ABB038 = unk_AA105C[0]; /*0x547b45*/
    dword_ABB03C = unk_AA105C[0]; /*0x547b4a*/
    dword_ABB040 = unk_AA105C[0]; /*0x547b4f*/
    dword_ABB044 = unk_AA105C[0]; /*0x547b54*/
    dword_ABB04C = unk_AA105C[0]; /*0x547b59*/
    dword_ABB050 = unk_AA105C[0]; /*0x547b5e*/
    dword_ABB054 = unk_AA105C[0]; /*0x547b63*/
    dword_ABB058 = unk_AA105C[0]; /*0x547b68*/
    dword_ABB05C = unk_AA105C[0]; /*0x547b6d*/
    dword_ABB060 = 2147450879; /*0x547b72*/
    dword_ABB078 = 2147450879; /*0x547b86*/
    dword_ABB090 = 2147450879; /*0x547b9a*/
    dword_ABB0A8 = 2147450879; /*0x547bae*/
    dword_ABB0C0 = 2147450879; /*0x547bc2*/
    dword_ABB064 = unk_AA105C[0]; /*0x547bd6*/
    dword_ABB068 = unk_AA105C[0]; /*0x547bdb*/
    dword_ABB06C = unk_AA105C[0]; /*0x547be0*/
    dword_ABB070 = unk_AA105C[0]; /*0x547be5*/
    dword_ABB074 = unk_AA105C[0]; /*0x547bea*/
    dword_ABB07C = unk_AA105C[0]; /*0x547bef*/
    dword_ABB080 = unk_AA105C[0]; /*0x547bf4*/
    dword_ABB084 = unk_AA105C[0]; /*0x547bf9*/
    dword_ABB088 = unk_AA105C[0]; /*0x547bfe*/
    dword_ABB08C = unk_AA105C[0]; /*0x547c03*/
    dword_ABB094 = unk_AA105C[0]; /*0x547c08*/
    dword_ABB098 = unk_AA105C[0]; /*0x547c0d*/
    dword_ABB09C = unk_AA105C[0]; /*0x547c12*/
    dword_ABB0A0 = unk_AA105C[0]; /*0x547c17*/
    dword_ABB0A4 = unk_AA105C[0]; /*0x547c1c*/
    dword_ABB0AC = unk_AA105C[0]; /*0x547c21*/
    dword_ABB0B0 = unk_AA105C[0]; /*0x547c26*/
    dword_ABB0B4 = unk_AA105C[0]; /*0x547c2b*/
    dword_ABB0B8 = unk_AA105C[0]; /*0x547c30*/
    dword_ABB0BC = unk_AA105C[0]; /*0x547c35*/
    dword_ABB0C4 = unk_AA105C[0]; /*0x547c3a*/
    dword_ABB0C8 = unk_AA105C[0]; /*0x547c3f*/
    dword_ABB0CC = unk_AA105C[0]; /*0x547c44*/
    dword_ABB0D0 = unk_AA105C[0]; /*0x547c49*/
    dword_ABB0D4 = unk_AA105C[0]; /*0x547c4e*/
    dword_ABB0DC = unk_AA105C[0]; /*0x547c53*/
    dword_ABB0E0 = unk_AA105C[0]; /*0x547c58*/
    dword_ABB0E4 = unk_AA105C[0]; /*0x547c5d*/
    dword_ABB0E8 = unk_AA105C[0]; /*0x547c62*/
    dword_ABB0EC = unk_AA105C[0]; /*0x547c67*/
    dword_ABB0D8 = 2147450879; /*0x547c7f*/
    dword_ABB0F0 = 2147450879; /*0x547c85*/
    atexit(nullsub_20); /*0x547c8a*/
    a1 = v5; /*0x547c8f*/
  }
  v1 = *(_DWORD *)(a1 + 660); /*0x547c98*/
  v2 = unk_AA102C; /*0x547c9e*/
  while ( 1 ) /*0x547ca7*/
  {
    v3 = v1 - *v2; /*0x547ca7*/
    if ( v3 < 0x28 ) /*0x547ca9*/
      break; /*0x547ca9*/
    if ( (int)++v2 >= (int)&unk_AA1040 ) /*0x547cb9*/
      return 0; /*0x547cb9*/
  }
  return 24 * v3 + 11250996; /*0x547cbb*/
}


// ==== 0x00547CE0  nullsub_20  this=-  sig=ida-proto ====
void __cdecl nullsub_20()
{
  ; /*0x547ce0*/
}


// ==== 0x00547CF0  TerrainClass::GenerateTexture  this=AbstractClass  sig=csp ====
void __thiscall TerrainClass::GenerateTexture(
        _DWORD *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        CCINIClass *aP7,
        int a9,
        IUnknown *aP9,
        int a11,
        int a12,
        char a13,
        int a14,
        char a15,
        char a16,
        char a17,
        int a18)
{
  CCINIClass *v18; // esi
  int v20; // ebp
  int unknown30; // ecx
  int v22; // edx
  CCINIClass *v23; // ecx
  CCINIClass *v24; // esi
  int v25; // ebx
  _DWORD *FractalNoise; // edi
  int v27; // eax
  int v28; // ebp
  int v29; // ecx
  int v30; // edi
  int v31; // eax
  int v32; // edx
  _BYTE *v33; // ecx
  int v34; // ecx
  char *v35; // ebp
  int v36; // ebx
  int v37; // edx
  __int16 v38; // ax
  char *v39; // ebx
  int v40; // esi
  int i; // edx
  int v42; // ecx
  bool v43; // cc
  int v44; // edi
  int v45; // eax
  int v46; // edx
  int v47; // edi
  MouseClass *v48; // ebx
  CCINIClass *v49; // ecx
  in... [85250 chars total]


// ==== 0x00549830  ObjectClass::method  this=ObjectClass  sig=csp ====
char __thiscall sub_549830(void *this, int a2, void **a3, int a4, int a5)
{
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  int v8; // edi
  _DWORD *v9; // eax
  _DWORD *v10; // ecx
  int v11; // ebx
  int v12; // eax
  int v13; // edx
  int v14; // ecx
  int v15; // ebx
  _BYTE *v16; // eax
  unsigned int v17; // ebp
  char *v19; // edx
  int v20; // ecx
  char v21; // bl
  char v22; // bl
  _BYTE *v23; // eax
  _BYTE *v24; // edx
  int v25; // ebx
  int v26; // esi
  int v27; // [esp+1Ch] [ebp+4h]
  char *v28; // [esp+1Ch] [ebp+4h]
  int v29; // [esp+28h] [ebp+10h]

  memset(*a3, 0, a5 * a4); /*0x549859*/
  v6 = (_DWORD *)(*(int (__thiscall **)(void *))(this->location)(this); /*0x549866*/
  v7 = v6; /*0x54986c*/
  if ( v6 ) /*0x549870*/
  {
    v27 = a2 % (*v6 * v6[1]); /*0x549883*/
    v8 = v6[v27 + 4]; /*0x549887*/
    if ( !v8 ) /*0x54988d*/
      return 0; /*0x54988d*/
    v9 = (_DWORD *)(*(int (__thiscall **)(void *))(this->location)(this); /*0x549897*/
    v10 = v9; /*0x54989d*/
    if ( v9 ) /*0x5498a1*/
    {
      v11 = *v9 * v9[1]; /*0x5498aa*/
      v12 = v9[2]; /*0x5498b0*/
      v13 = v10[v27 % v11 + 4]; /*0x5498b3*/
      v14 = v10[3]; /*0x5498b7*/
      if ( v13 && (*(_BYTE *)(v13 + 36) & 1) != 0 ) /*0x5498c2*/
        v14 += *(_DWORD *)(v13 + 4) - *(_DWORD *)(v13 + 24); /*0x5498ca*/
    }
    else
    {
      v14 = 0; /*0x5498ce*/
      v12 = 0; /*0x5498d2*/
    }
    v15 = a4; /*0x5498d6*/
    if ( v12 > a4 || v14 > a5 ) /*0x5498e6*/
      return 0; /*0x5498e6*/
    v16 = *a3; /*0x5498f3*/
    v17 = (unsigned int)*a3 + a5 * a4; /*0x5498f5*/
    if ( (*(_BYTE *)(v8 + 36) & 1) != 0 ) /*0x5498fa*/
    {
      v16 += a4 * (*(_DWORD *)(v8 + 4) - *(_DWORD *)(v8 + 24)); /*0x549907*/
      if ( (unsigned int)v16 >= v17 ) /*0x54990b*/
        return 0; /*0x549916*/
    }
    v19 = (char *)&unk_828924; /*0x54991c*/
    v28 = (char *)(v8 + 52); /*0x549921*/
    v29 = 0; /*0x54992a*/
    if ( (int)v7[3] > 0 ) /*0x549932*/
    {
      while ( 1 ) /*0x549934*/
      {
        v20 = 0; /*0x549934*/
        if ( (int)v7[2] > 0 ) /*0x549939*/
          break; /*0x549939*/
LABEL_20:
        v16 += v15 - v7[2]; /*0x549969*/
        if ( (unsigned int)v16 >= v17 ) /*0x549972*/
          return 0; /*0x549972*/
        if ( ++v29 >= v7[3] ) /*0x549980*/
          goto LABEL_22; /*0x549980*/
      }
      while ( 1 ) /*0x54993b*/
      {
        v21 = *v19++; /*0x54993b*/
        if ( v21 != 32 ) /*0x549945*/
        {
          v22 = *v28++; /*0x54994b*/
          *v16 = v22; /*0x549956*/
        }
        if ( (unsigned int)++v16 >= v17 ) /*0x54995b*/
          return 0; /*0x54995b*/
        if ( ++v20 >= v7[2] ) /*0x549963*/
        {
          v15 = a4; /*0x549965*/
          goto LABEL_20; /*0x549965*/
        }
      }
    }
LABEL_22:
    if ( (*(_BYTE *)(v8 + 36) & 1) != 0 ) /*0x549986*/
    {
      v23 = (char *)*a3 + *(_DWORD *)(v8 + 20) - *(_DWORD *)v8; /*0x549995*/
      if ( (unsigned int)v23 >= v17 ) /*0x549999*/
        return 0; /*0x5499a4*/
      v24 = (_BYTE *)(v8 + *(_DWORD *)(v8 + 8)); /*0x5499ad*/
      v25 = 0; /*0x5499af*/
      if ( *(int *)(v8 + 32) > 0 ) /*0x5499b3*/
      {
        while ( 1 ) /*0x5499b8*/
        {
          v26 = 0; /*0x5499b8*/
          if ( *(int *)(v8 + 28) > 0 ) /*0x5499bc*/
            break; /*0x5499bc*/
LABEL_31:
          v23 += a4 - *(_DWORD *)(v8 + 28); /*0x5499d4*/
          if ( (unsigned int)v23 >= v17 ) /*0x5499e1*/
            return 0; /*0x5499e1*/
          if ( ++v25 >= *(_DWORD *)(v8 + 32) ) /*0x5499e9*/
            return 1; /*0x5499e9*/
        }
        while ( 1 ) /*0x5499be*/
        {
          if ( *v24 ) /*0x5499be*/
            *v23 = *v24; /*0x5499c4*/
          ++v23; /*0x5499c6*/
          ++v24; /*0x5499c7*/
          if ( (unsigned int)v23 >= v17 ) /*0x5499ca*/
            return 0; /*0x5499ca*/
          if ( ++v26 >= *(_DWORD *)(v8 + 28) ) /*0x5499d2*/
            goto LABEL_31; /*0x5499d2*/
        }
      }
    }
  }
  return 1; /*0x54990d*/
}


// ==== 0x00549A00  sub_549A00  this=-  sig=ida-proto ====
int __fastcall sub_549A00(int a1, int a2, int *a3, int *a4)
{
  int result; // eax

  *a3 = 60 * a1 / 2; /*0x549a16*/
  *a4 = 30 * a1 / 2; /*0x549a29*/
  *a3 += -60 * a2 / 2; /*0x549a43*/
  result = 30 * a2 / 2; /*0x549a51*/
  *a4 += result; /*0x549a55*/
  return result; /*0x549a45*/
}


// ==== 0x00549AA0  IsometricTileTypeClass::GetTerrainType  this=IsometricTileTypeClass  sig=csp ====
bool __thiscall IsometricTileTypeClass::_vt32(int *this, _WORD *a2, int a3)
{
  IsometricTileClass *v4; // eax

  v4 = (IsometricTileClass *)__2_YAPAXI_Z(0xB0u); /*0x549aa8*/
  return v4 && IsometricTileClass::IsometricTileClass(v4, this->q294, a2); /*0x549acd*/
}


// ==== 0x00549AE0  IsometricTileTypeClass::GetHeight  this=IsometricTileTypeClass  sig=csp ====
IsometricTileClass *__thiscall IsometricTileTypeClass::_vt35(int this, int a2)
{
  IsometricTileClass *v3; // eax

  if ( !*(_DWORD *)(this + 164) && *(_BYTE *)(this + 756) ) /*0x549aed*/
    MapClass::LoadFileData(this); /*0x549af7*/
  v3 = (IsometricTileClass *)__2_YAPAXI_Z(0xB0u); /*0x549b01*/
  if ( v3 ) /*0x549b0b*/
    return IsometricTileClass::IsometricTileClass(v3, *(_DWORD *)(this + 660), unk_AA105C); /*0x549b1b*/
  else
    return 0; /*0x549b24*/
}


// ==== 0x00549B30  sub_549B30  this=-  sig=ida-proto ====
int sub_549B30()
{
  lpBuffer = 0; /*0x549b32*/
  unk_AA1060 = 0; /*0x549b37*/
  unk_AA1064 = 0; /*0x549b3c*/
  unk_AA1068 = 0; /*0x549b41*/
  unk_AA106C = 0; /*0x549b46*/
  return 0; /*0x549b4b*/
}


// ==== 0x00549B50  IsometricTileTypeClass::vt_entry_6C  this=IsometricTileTypeClass  sig=csp ====
_DWORD *__stdcall IsometricTileTypeClass::vt_entry_6C(_DWORD *a0, IsometricTileTypeClass *aP1)
{
  *a0 = *(_DWORD *)aP1->__pad_0; /*0x549b5d*/
  a0[1] = aP1->IsometricTileTypeClass_field_0x04; /*0x549b62*/
  a0[2] = aP1->IsometricTileTypeClass_field_0x08; /*0x549b69*/
  return a0; /*0x549b65*/
}


// ==== 0x00549B70  IsometricTileTypeClass::ProcessPower  this=IsometricTileTypeClass  sig=csp ====
int __thiscall IsometricTileTypeClass::ProcessPower(int this, int *a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // edx
  int v6; // eax

  AbstractTypeClass::ProcessPower((char *)this, a2); /*0x549b79*/
  Power::TimerProcess(*(_DWORD *)(this + 660)); /*0x549b87*/
  Power::TimerProcess(*(_DWORD *)(this + 664)); /*0x549b95*/
  Power::TimerProcess(*(_DWORD *)(this + 668)); /*0x549ba3*/
  Power::TimerProcess(*(_DWORD *)(this + 672)); /*0x549bb1*/
  Power::TimerProcess(*(_DWORD *)(this + 692)); /*0x549bbf*/
  v3 = *(_DWORD *)(this + 700); /*0x549bc4*/
  if ( v3 ) /*0x549bcc*/
  {
    v4 = (*(int (__stdcall **)(int))(*(_DWORD *)(v3 + 4) + 16))(v3 + 4); /*0x549bd5*/
    Power::TimerProcess(v4); /*0x549bdb*/
  }
  Power::TimerProcess(*(_DWORD *)(this + 704)); /*0x549be9*/
  Power::TimerProcess(*(_DWORD *)(this + 708)); /*0x549bf7*/
  Power::TimerProcess(*(_DWORD *)(this + 724)); /*0x549c05*/
  Power::TimerProcess(*(_DWORD *)(this + 728)); /*0x549c13*/
  Power::TimerProcess(*(_DWORD *)(this + 732)); /*0x549c21*/
  LOBYTE(v5) = *(_BYTE *)(this + 736); /*0x549c26*/
  v6 = Power::FlagProcess(a2, v5); /*0x549c2f*/
  LOBYTE(v6) = *(_BYTE *)(this + 737); /*0x549c34*/
  Power::FlagProcess(a2, v6); /*0x549c3d*/
  Power::TimerProcess(*(_DWORD *)(this + 740)); /*0x549c4b*/
  Power::TimerProcess(*(_DWORD *)(this + 744)); /*0x549c59*/
  Power::TimerProcess(*(_DWORD *)(this + 748)); /*0x549c67*/
  return Power::TimerProcess(*(_DWORD *)(this + 752)); /*0x549c7a*/
}


// ==== 0x00549C80  IsometricTileTypeClass::LoadTypeData  this=IsometricTileTypeClass  sig=csp ====
int __stdcall IsometricTileTypeClass::_vt05(int *a1, int a2)
{
  int i; // esi
  void (__thiscall ***v3)(_DWORD, int); // ecx
  int result; // eax
  int j; // eax

  for ( i = 0; i < MEMORY[0x87F6A8]; *((_DWORD *)MEMORY[0x87F69C] + i - 1) = 0 ) /*0x549c8a*/
  {
    v3 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)MEMORY[0x87F69C] + i); /*0x549c91*/
    if ( v3 ) /*0x549c96*/
      (**v3)(v3, 1); /*0x549c9c*/
    ++i; /*0x549ca3*/
  }
  result = ObjectTypeClass::LoadCleanup((int)a1, a2); /*0x549cbf*/
  if ( result >= 0 ) /*0x549cc6*/
  {
    if ( a1 ) /*0x549cce*/
    {
      ObjectTypeClass::Construct(a1, (int)&a2); /*0x549cd8*/
      IsometricTileTypeClass::Constructor_0(a1 + 169, 0, 0); /*0x549ce9*/
      a1[169] = (int)&vt_DynamicVectorClass_unsigned_short; /*0x549cee*/
      a1[174] = 10; /*0x549cf4*/
      a1[173] = 0; /*0x549cfb*/
      *a1 = (int)&IsometricTileTypeClass::`vftable'; /*0x549d02*/
      a1[1] = (int)&IsometricTileTypeClass::`vftable'; /*0x549d08*/
      a1[2] = (int)&IsometricTileTypeClass::`vftable'; /*0x549d0f*/
      a1[3] = (int)&vt_IsometricTileTypeClass; /*0x549d16*/
    }
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], a1 + 175); /*0x549d2a*/
    for ( j = 0; j < MEMORY[0x87F6A8]; *((_DWORD *)MEMORY[0x87F69C] + j - 1) = 0 ) /*0x549d39*/
      ++j; /*0x549d41*/
    TerrainClass::InitTheatre(a1); /*0x549d56*/
    return 0; /*0x549d5b*/
  }
  return result; /*0x549d5d*/
}


// ==== 0x00549D70  IsometricTileTypeClass::SaveToINI  this=IsometricTileTypeClass  sig=csp ====
int __stdcall IsometricTileTypeClass::SaveToINI(TechnoTypeClass *aP0, ObjectTypeClass *aP1, int aP2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_PrefixWrapper(aP0, aP1, (TechnoTypeClass *)aP2); /*0x549d7f*/
  if ( result >= 0 ) /*0x549d86*/
    return 0; /*0x549d88*/
  return result; /*0x549d8a*/
}


// ==== 0x00549D90  IsometricTileTypeClass::GetClassIdentifier  this=IsometricTileTypeClass  sig=csp ====
int __stdcall IsometricTileTypeClass::_vt03(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x549d96*/
    return -2147467261; /*0x549d98*/
  *a2 = 1525862010; /*0x549da6*/
  a2[1] = 298976820; /*0x549dae*/
  a2[2] = 1610654892; /*0x549db7*/
  a2[3] = -1252326136; /*0x549dc0*/
  return 0; /*0x549d9d*/
}


// ==== 0x00549DD0  IsometricTileTypeClass::GetTileIndex  this=IsometricTileTypeClass  sig=csp ====
int __thiscall IsometricTileTypeClass::_vt10(_DWORD *this, int a2, int a3)
{
  int result; // eax

  if ( this->q2BC == a2 ) /*0x549ddc*/
    this->q2BC = 0; /*0x549dde*/
  result = this->q2C8; /*0x549de8*/
  if ( result != -1 && *((_DWORD *)MEMORY[0x8B4154] + result) == a2 ) /*0x549e02*/
    this->q2C8 = -1; /*0x549e04*/
  return result; /*0x549e0e*/
}


// ==== 0x00549E50  ObjectClass::Map_Get_549E50  this=ObjectClass  sig=csp ====
int __thiscall sub_549E50(int this, int a2, int a3)
{
  if ( !*(_DWORD *)(this + 164) && *(_BYTE *)(this + 756) ) /*0x549e5d*/
    MapClass::LoadFileData(this); /*0x549e67*/
  return *(_DWORD *)(*(_DWORD *)(this + 680) + 4 * a2) + 4 * a3; /*0x549e7a*/
}


// ==== 0x00549E90  TerrainClass::InitTheatre  this=IUnknown  sig=csp ====
int __thiscall TerrainClass_InitTheatre(int *this)
{
  int v2; // esi
  int v3; // eax
  _DWORD *v4; // ebx
  int v5; // edx
  _DWORD *v6; // edi
  int v7; // eax
  int result; // eax
  _DWORD *v9; // esi
  _WORD *v10; // eax
  int v11; // esi
  _WORD *v12; // ebp
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // edx
  char v17; // al
  char v18; // cl
  char v19; // dl
  float v20; // ebx
  _WORD *v21; // esi
  float v22; // ebp
  _BYTE *v23; // eax
  int v24; // edx
  int v25; // eax
  int v26; // edx
  _BYTE *v27; // eax
  unsigned __int8 v28; // dl
  int v29; // ecx
  int v30; // eax
  int v31; // eax
  int v32; // edx
  bool v33; // cc
  __int16 v34; // [esp+Ch] [ebp-2Ch] BYREF
  char v35[4]; // [esp+10h] [ebp-28h] BYREF
  __int16 v36; // [esp+14h] [ebp-24h]
  __int16 v37; // [esp+18h] [ebp-20h] BYREF
  char v38; // [esp+1Ah] [ebp-1Eh]
  int v39; // [esp+1Ch] [ebp-1Ch] BYREF
  float v40; // [esp+20h] [ebp-18h]
  int v41; // [esp+24h] [ebp-14h]
  _DWORD *v42; // [esp+28h] [ebp-10h]
  int v43; // [esp+2Ch] [ebp-Ch] BYREF
  int v44; // [esp+30h] [ebp-8h] BYREF
  _DWORD *v45; // [esp+34h] [ebp-4h]

  v2 = 0; /*0x549e98*/
  v3 = this->q2B4; /*0x549e9a*/
  v4 = (_DWORD *)this->q0A4; /*0x549ea0*/
  v45 = v4; /*0x549ea8*/
  if ( v3 > 0 ) /*0x549eac*/
  {
    do /*0x549ecd*/
    {
      if ( *(_DWORD *)(this->q0AA + 4 * v2) ) /*0x549eb4*/
        __3_YAXPAX_Z(*(void **)(this->q0AA + 4 * v2)); /*0x549ebc*/
      ++v2; /*0x549eca*/
    }
    while ( v2 < this->q2B4 ); /*0x549ecd*/
  }
  v5 = this->q0A9; /*0x549ecf*/
  v6 = this + 169; /*0x549ed5*/
  (*(void (__thiscall **)(_DWORD *))(v5 + 12))(v6); /*0x549edd*/
  v7 = v4[1]; /*0x549ee0*/
  v41 = 0; /*0x549ee3*/
  result = *v4 * v7; /*0x549eeb*/
  if ( result > 0 ) /*0x549ef0*/
  {
    v9 = v4 + 4; /*0x549ef6*/
    v42 = v4 + 4; /*0x549efa*/
    do /*0x54a106*/
    {
      if ( *v9 ) /*0x549efe*/
      {
        v10 = __2_YAPAXI_Z(0x34u); /*0x549f09*/
        v11 = *v9; /*0x549f11*/
        v12 = v10; /*0x549f13*/
        v13 = v6[2]; /*0x549f15*/
        if ( v6[4] < v13 /*0x549f3a*/
          || (*((_BYTE *)v6 + 13) || !v13)
          && (v14 = v6[5], v14 > 0)
          && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v6 + 8))(v6, v13 + v14, 0) )
        {
          v15 = v6[4]; /*0x549f41*/
          v16 = v6[1]; /*0x549f44*/
          v6[4] = v15 + 1; /*0x549f4a*/
          *(_DWORD *)(v16 + 4 * v15) = v12; /*0x549f4d*/
        }
        v17 = *(_BYTE *)(v11 + 45); /*0x549f50*/
        v37 = *(_WORD *)(v11 + 43); /*0x549f5d*/
        v38 = v17; /*0x549f61*/
        v18 = *(_BYTE *)(v11 + 47); /*0x549f68*/
        v19 = *(_BYTE *)(v11 + 46); /*0x549f6b*/
        BYTE2(v39) = *(_BYTE *)(v11 + 48); /*0x549f6e*/
        BYTE1(v39) = v18; /*0x549f77*/
        LOBYTE(v39) = v19; /*0x549f85*/
        Color::ScaleRGB((int)&v37, 1.4); /*0x549f89*/
        Color::ScaleRGB((int)&v39, 1.4); /*0x549f9e*/
        v20 = 0.0; /*0x549fa3*/
        v21 = v12; /*0x549fa5*/
        v40 = 0.0; /*0x549fa7*/
        do /*0x54a09f*/
        {
          v40 = (double)SLODWORD(v40) * 0.08333333333333333; /*0x549fbd*/
          v22 = v40; /*0x549fc1*/
          v23 = Color::Lerp2(&v34, (int)&v37, (int)&v43, v40); /*0x549fcc*/
          BYTE1(v24) = 0; /*0x549fd4*/
          v36 = *(_WORD *)v23; /*0x549fd7*/
          LOBYTE(v24) = v23[2] >> MEMORY[0x8A0DDC]; /*0x549fee*/
          LOWORD(v23) = (unsigned __int8)(HIBYTE(v36) >> MEMORY[0x8A0DE4]); /*0x54a004*/
          v25 = (_DWORD)v23 << MEMORY[0x8A0DE0]; /*0x54a008*/
          v26 = v25 | (v24 << MEMORY[0x8A0DD8]); /*0x54a010*/
          LOWORD(v25) = (unsigned __int8)((unsigned __int8)v36 >> MEMORY[0x8A0DD4]); /*0x54a01e*/
          *v21 = (v25 << MEMORY[0x8A0DD0]) | v26; /*0x54a02f*/
          v27 = Color::Lerp2(v35, (int)&v39, (int)&v44, v22); /*0x54a037*/
          v36 = *(_WORD *)v27; /*0x54a042*/
          v21 += 2; /*0x54a050*/
          v28 = v27[2] >> MEMORY[0x8A0DDC]; /*0x54a05b*/
          LOWORD(v27) = (unsigned __int8)(HIBYTE(v36) >> MEMORY[0x8A0DE4]); /*0x54a071*/
          ++LODWORD(v20); /*0x54a093*/
          *(v21 - 1) = ((unsigned __int8)((unsigned __int8)v36 >> MEMORY[0x8A0DD4]) << MEMORY[0x8A0DD0]) /*0x54a094*/
                     | ((_DWORD)v27 << MEMORY[0x8A0DE0])
                     | (v28 << MEMORY[0x8A0DD8]);
          v40 = v20; /*0x54a09b*/
        }
        while ( SLODWORD(v20) <= 12 ); /*0x54a09f*/
        v4 = v45; /*0x54a0a5*/
        v9 = v42; /*0x54a0a9*/
      }
      else
      {
        v29 = v6[2]; /*0x54a0af*/
        if ( v6[4] < v29 /*0x54a0d4*/
          || (*((_BYTE *)v6 + 13) || !v29)
          && (v30 = v6[5], v30 > 0)
          && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v6 + 8))(v6, v29 + v30, 0) )
        {
          v31 = v6[4]; /*0x54a0db*/
          v32 = v6[1]; /*0x54a0de*/
          v6[4] = v31 + 1; /*0x54a0e4*/
          *(_DWORD *)(v32 + 4 * v31) = 0; /*0x54a0e7*/
        }
      }
      result = v41 + 1; /*0x54a0f8*/
      ++v9; /*0x54a0f9*/
      v33 = ++v41 < *v4 * v4[1]; /*0x54a0fc*/
      v42 = v9; /*0x54a102*/
    }
    while ( v33 ); /*0x54a106*/
  }
  return result; /*0x54a10d*/
}


// ==== 0x0054A120  Rect::Set4  this=Rect  sig=csp ====
_DWORD *__thiscall sub_54A120(_DWORD *this, int a2, int a3, int a4, int a5)
{
  *this = a2; /*0x54a12a*/
  this->Y = a3; /*0x54a130*/
  this->Width = a4; /*0x54a137*/
  this->Height = a5; /*0x54a13a*/
  return this; /*0x54a13d*/
}


// ==== 0x0054A140  IsometricTileTypeClass::GetTypeIdentifier  this=IsometricTileTypeClass  sig=csp ====
int IsometricTileTypeClass::_vt11()
{
  return 18; /*0x54a145*/
}


// ==== 0x0054A150  IsometricTileTypeClass::GetObjectSize  this=IsometricTileTypeClass  sig=csp ====
int IsometricTileTypeClass::_vt12()
{
  return 780; /*0x54a155*/
}


// ==== 0x0054A160  IsometricTileTypeClass::GetAuxField  this=IsometricTileTypeClass  sig=csp ====
int __thiscall IsometricTileTypeClass::_vt16(_DWORD *this)
{
  return this->q294; /*0x54a166*/
}


// ==== 0x0054A170  IsometricTileTypeClass::ddtor  this=IsometricTileTypeClass  sig=csp ====
IsometricTileTypeClass *__thiscall IsometricTileTypeClass::ddtor(void *Block, char a2)
{
  IsometricTileTypeClass::CleanupMembers((int)Block); /*0x54a173*/
  if ( (a2 & 1) != 0 ) /*0x54a17d*/
    __3_YAXPAX_Z(Block); /*0x54a180*/
  return (IsometricTileTypeClass *)Block; /*0x54a18a*/
}


// ==== 0x0054A190  _DynamicVectorClass_PAG::ClearBuffer  this=DynamicVector  sig=csp ====
void __thiscall IsometricTileTypeClass::sub_54A190(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x54a196*/
  *(_DWORD *)(this + 16) = 0; /*0x54a199*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x54a1a0*/
  {
    __3_YAXPAX_Z(v2); /*0x54a1a6*/
    *(_DWORD *)(this + 4) = 0; /*0x54a1ae*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x54a1b1*/
  *(_DWORD *)(this + 8) = 0; /*0x54a1b4*/
}


// ==== 0x0054A1C0  _DynamicVectorClass_PAG::PointerToIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall IsometricTileTypeClass::sub_54A1C0(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x54a1c0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x54a1d5*/
  else
    return 0; /*0x54a1c7*/
}


// ==== 0x0054A1E0  _VectorClass_PAG::Count  this=VectorClass  sig=csp ====
int __thiscall VectorClass_PAG::Count(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x54a1ea*/
}


// ==== 0x0054A1F0  _DynamicVectorClass_PAUTileInsertType_IsometricTileTypeClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_TileInsertType_uint_sometricTileTypeClass::sub_54A1F0(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x54a1f6*/
  *(_DWORD *)(this + 16) = 0; /*0x54a1f9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x54a200*/
  {
    __3_YAXPAX_Z(v2); /*0x54a206*/
    *(_DWORD *)(this + 4) = 0; /*0x54a20e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x54a211*/
  *(_DWORD *)(this + 8) = 0; /*0x54a214*/
}


// ==== 0x0054A220  _DynamicVectorClass_PAUTileInsertType_IsometricTileTypeClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_TileInsertType_uint_sometricTileTypeClass::sub_54A220(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x54a220*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x54a235*/
  else
    return 0; /*0x54a227*/
}


// ==== 0x0054A240  _VectorClass_PAUTileInsertType_IsometricTileTypeClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_TileInsertType_uint_sometricTileTypeClass::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x54a24a*/
}


// ==== 0x0054A250  _VectorClass_PAG::Get  this=VectorClass  sig=csp ====
char __thiscall VectorClass_PAG::Get(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x54a252*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x54a25d*/
  {
    v3 = 0; /*0x54a25f*/
    if ( v2 <= 0 ) /*0x54a263*/
      return 1; /*0x54a283*/
    v4 = (_DWORD *)this->Items; /*0x54a265*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x54a26b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x54a274*/
    {
      ++v3; /*0x54a276*/
      ++v4; /*0x54a277*/
      if ( v3 >= v2 ) /*0x54a27c*/
        return 1; /*0x54a27c*/
    }
  }
  return 0; /*0x54a27e*/
}


// ==== 0x0054A290  _VectorClass_PAG::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_PAG::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x54a29c*/
  {
    this->IsInitialized = 0; /*0x54a2a6*/
    if ( a3 ) /*0x54a2ac*/
      v4 = a3; /*0x54a2c2*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x54a2be*/
    this->IsInitialized = 1; /*0x54a2c6*/
    if ( v4 ) /*0x54a2ca*/
    {
      if ( this->Items ) /*0x54a2d5*/
      {
        v6 = this->Capacity; /*0x54a2dc*/
        if ( a2 < v6 ) /*0x54a2e1*/
          v6 = a2; /*0x54a2e3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x54a2e9*/
          ++i; /*0x54a2ee*/
        if ( this->IsAllocated ) /*0x54a2fb*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x54a306*/
          this->Items = 0; /*0x54a30e*/
        }
      }
      this->Items = v4; /*0x54a317*/
      this->Capacity = a2; /*0x54a31f*/
      this->IsAllocated = a3 == 0; /*0x54a322*/
      return 1; /*0x54a328*/
    }
    else
    {
      return 0; /*0x54a2cf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x54a332*/
    return 1; /*0x54a338*/
  }
}


// ==== 0x0054A340  _VectorClass_PAG::Set  this=VectorClass  sig=csp ====
void __thiscall VectorClass_PAG::Set(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x54a34d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x54a353*/
    *(_DWORD *)(this + 4) = 0; /*0x54a35b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x54a35e*/
  *(_DWORD *)(this + 8) = 0; /*0x54a361*/
}


// ==== 0x0054A370  _VectorClass_PAG::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_PAG::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x54a370*/
    return 0; /*0x54a378*/
  v3 = *(_DWORD *)(this + 8); /*0x54a37e*/
  result = 0; /*0x54a381*/
  if ( v3 <= 0 ) /*0x54a385*/
    return -1; /*0x54a39c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x54a38b*/
  {
    if ( ++result >= v3 ) /*0x54a39a*/
      return -1; /*0x54a39a*/
  }
  return result; /*0x54a37a*/
}


// ==== 0x0054A3B0  _VectorClass_PAG::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_PAG::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x54a3b0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x54a3c5*/
  else
    return 0; /*0x54a3b7*/
}


// ==== 0x0054A3D0  _DynamicVectorClass_PAG::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall IsometricTileTypeClass::sub_54A3D0(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x54a3dc*/
  {
    this->IsInitialized = 0; /*0x54a3e2*/
    if ( a3 ) /*0x54a3e8*/
      v4 = a3; /*0x54a3fe*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x54a3fa*/
    this->IsInitialized = 1; /*0x54a402*/
    if ( !v4 ) /*0x54a406*/
      return 0; /*0x54a47a*/
    if ( this->Items ) /*0x54a408*/
    {
      v5 = this->DynamicVector_field_0x8; /*0x54a40f*/
      if ( a2 < v5 ) /*0x54a414*/
        v5 = a2; /*0x54a416*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x54a41c*/
        ++i; /*0x54a421*/
      if ( this->IsAllocated ) /*0x54a42e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x54a439*/
        this->Items = 0; /*0x54a441*/
      }
    }
    this->Items = v4; /*0x54a44a*/
    this->DynamicVector_field_0x8 = a2; /*0x54a452*/
    this->IsAllocated = a3 == 0; /*0x54a455*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x54a45e*/
  }
  v7 = this->DynamicVector_field_0x8; /*0x54a461*/
  if ( v7 < this->Items ) /*0x54a469*/
    this->Items = v7; /*0x54a46b*/
  return 1; /*0x54a46e*/
}


// ==== 0x0054A480  _DynamicVectorClass_PAG::FindItem  this=DynamicVector  sig=csp ====
int __thiscall IsometricTileTypeClass::sub_54A480(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x54a480*/
  result = 0; /*0x54a483*/
  if ( v2 <= 0 ) /*0x54a488*/
    return -1; /*0x54a49f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x54a48e*/
  {
    if ( ++result >= v2 ) /*0x54a49d*/
      return -1; /*0x54a49d*/
  }
  return result; /*0x54a4a2*/
}


// ==== 0x0054A4B0  _VectorClass_PAUTileInsertType_IsometricTileTypeClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_TileInsertType_uint_sometricTileTypeClass::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x54a4b2*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x54a4bd*/
  {
    v3 = 0; /*0x54a4bf*/
    if ( v2 <= 0 ) /*0x54a4c3*/
      return 1; /*0x54a4e3*/
    v4 = (_DWORD *)this->Items; /*0x54a4c5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x54a4cb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x54a4d4*/
    {
      ++v3; /*0x54a4d6*/
      ++v4; /*0x54a4d7*/
      if ( v3 >= v2 ) /*0x54a4dc*/
        return 1; /*0x54a4dc*/
    }
  }
  return 0; /*0x54a4de*/
}


// ==== 0x0054A4F0  _VectorClass_PAUTileInsertType_IsometricTileTypeClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_TileInsertType_uint_sometricTileTypeClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x54a4fc*/
  {
    this->IsInitialized = 0; /*0x54a506*/
    if ( a3 ) /*0x54a50c*/
      v4 = a3; /*0x54a522*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x54a51e*/
    this->IsInitialized = 1; /*0x54a526*/
    if ( v4 ) /*0x54a52a*/
    {
      if ( this->Items ) /*0x54a535*/
      {
        v6 = this->Capacity; /*0x54a53c*/
        if ( a2 < v6 ) /*0x54a541*/
          v6 = a2; /*0x54a543*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x54a549*/
          ++i; /*0x54a54e*/
        if ( this->IsAllocated ) /*0x54a55b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x54a566*/
          this->Items = 0; /*0x54a56e*/
        }
      }
      this->Items = v4; /*0x54a577*/
      this->Capacity = a2; /*0x54a57f*/
      this->IsAllocated = a3 == 0; /*0x54a582*/
      return 1; /*0x54a588*/
    }
    else
    {
      return 0; /*0x54a52f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x54a592*/
    return 1; /*0x54a598*/
  }
}


// ==== 0x0054A5A0  _VectorClass_PAUTileInsertType_IsometricTileTypeClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_TileInsertType_uint_sometricTileTypeClass::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x54a5ad*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x54a5b3*/
    *(_DWORD *)(this + 4) = 0; /*0x54a5bb*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x54a5be*/
  *(_DWORD *)(this + 8) = 0; /*0x54a5c1*/
}


// ==== 0x0054A5D0  _VectorClass_PAUTileInsertType_IsometricTileTypeClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_TileInsertType_uint_sometricTileTypeClass::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x54a5d0*/
    return 0; /*0x54a5d8*/
  v3 = *(_DWORD *)(this + 8); /*0x54a5de*/
  result = 0; /*0x54a5e1*/
  if ( v3 <= 0 ) /*0x54a5e5*/
    return -1; /*0x54a5fc*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x54a5eb*/
  {
    if ( ++result >= v3 ) /*0x54a5fa*/
      return -1; /*0x54a5fa*/
  }
  return result; /*0x54a5da*/
}


// ==== 0x0054A610  _VectorClass_PAUTileInsertType_IsometricTileTypeClass::LoadTypeData  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_TileInsertType_uint_sometricTileTypeClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x54a610*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x54a625*/
  else
    return 0; /*0x54a617*/
}


// ==== 0x0054A630  _DynamicVectorClass_PAUTileInsertType_IsometricTileTypeClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_TileInsertType_uint_sometricTileTypeClass::sub_54A630(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x54a63c*/
  {
    this->IsInitialized = 0; /*0x54a642*/
    if ( a3 ) /*0x54a648*/
      v4 = a3; /*0x54a65e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x54a65a*/
    this->IsInitialized = 1; /*0x54a662*/
    if ( !v4 ) /*0x54a666*/
      return 0; /*0x54a6da*/
    if ( this->Items ) /*0x54a668*/
    {
      v5 = this->DynamicVector_field_0x8; /*0x54a66f*/
      if ( a2 < v5 ) /*0x54a674*/
        v5 = a2; /*0x54a676*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x54a67c*/
        ++i; /*0x54a681*/
      if ( this->IsAllocated ) /*0x54a68e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x54a699*/
        this->Items = 0; /*0x54a6a1*/
      }
    }
    this->Items = v4; /*0x54a6aa*/
    this->DynamicVector_field_0x8 = a2; /*0x54a6b2*/
    this->IsAllocated = a3 == 0; /*0x54a6b5*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x54a6be*/
  }
  v7 = this->DynamicVector_field_0x8; /*0x54a6c1*/
  if ( v7 < this->Items ) /*0x54a6c9*/
    this->Items = v7; /*0x54a6cb*/
  return 1; /*0x54a6ce*/
}


// ==== 0x0054A6E0  _DynamicVectorClass_PAUTileInsertType_IsometricTileTypeClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_TileInsertType_uint_sometricTileTypeClass::sub_54A6E0(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x54a6e0*/
  result = 0; /*0x54a6e3*/
  if ( v2 <= 0 ) /*0x54a6e8*/
    return -1; /*0x54a6ff*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x54a6ee*/
  {
    if ( ++result >= v2 ) /*0x54a6fd*/
      return -1; /*0x54a6fd*/
  }
  return result; /*0x54a702*/
}


// ==== 0x0054A710  _VectorClass_PAG::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_PAG::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x54a713*/
  *Block = &vt_VectorClass_unsigned_short; /*0x54a716*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x54a720*/
  {
    __3_YAXPAX_Z(v3); /*0x54a728*/
    *(Block + 1) = 0; /*0x54a730*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x54a73b*/
  *(Block + 2) = 0; /*0x54a741*/
  if ( (a2 & 1) != 0 ) /*0x54a748*/
    __3_YAXPAX_Z(Block); /*0x54a74b*/
  return (VectorClass *)Block; /*0x54a755*/
}


// ==== 0x0054A760  _DynamicVectorClass_PAG::Constructor  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall IsometricTileTypeClass::Constructor(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x54a763*/
  *Block = &vt_VectorClass_unsigned_short; /*0x54a766*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x54a770*/
  {
    __3_YAXPAX_Z(v3); /*0x54a778*/
    *(Block + 1) = 0; /*0x54a780*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x54a78b*/
  *(Block + 2) = 0; /*0x54a791*/
  if ( (a2 & 1) != 0 ) /*0x54a798*/
    __3_YAXPAX_Z(Block); /*0x54a79b*/
  return (DynamicVector *)Block; /*0x54a7a5*/
}


// ==== 0x0054A7B0  _VectorClass_PAUTileInsertType_IsometricTileTypeClass::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_ptr_TileInsertType_uint_sometricTileTypeClass::QueryInterface(
        _DWORD *Block,
        char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x54a7b3*/
  *Block = &vt_VectorClass_IsometricTileTypeClass_TileInsertType; /*0x54a7b6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x54a7c0*/
  {
    __3_YAXPAX_Z(v3); /*0x54a7c8*/
    *(Block + 1) = 0; /*0x54a7d0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x54a7db*/
  *(Block + 2) = 0; /*0x54a7e1*/
  if ( (a2 & 1) != 0 ) /*0x54a7e8*/
    __3_YAXPAX_Z(Block); /*0x54a7eb*/
  return (VectorClass *)Block; /*0x54a7f5*/
}


// ==== 0x0054A800  _DynamicVectorClass_PAUTileInsertType_IsometricTileTypeClass::Constructor  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall VectorClass_ptr_TileInsertType_uint_sometricTileTypeClass::Constructor(
        _DWORD *Block,
        char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x54a803*/
  *Block = &vt_VectorClass_IsometricTileTypeClass_TileInsertType; /*0x54a806*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x54a810*/
  {
    __3_YAXPAX_Z(v3); /*0x54a818*/
    *(Block + 1) = 0; /*0x54a820*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x54a82b*/
  *(Block + 2) = 0; /*0x54a831*/
  if ( (a2 & 1) != 0 ) /*0x54a838*/
    __3_YAXPAX_Z(Block); /*0x54a83b*/
  return (DynamicVector *)Block; /*0x54a845*/
}


// ==== 0x0054A850  IsometricTileTypeClass::Constructor_0  this=VectorClass  sig=csp ====
_DWORD *__thiscall sub_54A850(_DWORD *this, int a2, int a3)
{
  this->Items = 0; /*0x54a85b*/
  this->Capacity = a2; /*0x54a85e*/
  this->q030 = 1; /*0x54a861*/
  this->__pad_034 = 0; /*0x54a865*/
  *this = &vt_VectorClass_unsigned_short; /*0x54a868*/
  if ( a2 ) /*0x54a86e*/
  {
    if ( a3 ) /*0x54a876*/
    {
      this->Items = a3; /*0x54a878*/
      return this; /*0x54a87e*/
    }
    this->Items = __2_YAPAXI_Z(4 * a2); /*0x54a88d*/
    this->__pad_034 = 1; /*0x54a890*/
  }
  return this; /*0x54a87d*/
}


// ==== 0x0054A8A0  sub_54A8A0  this=-  sig=ida-proto ====
int sub_54A8A0()
{
  dword_ABC560 = 0; /*0x54a8a2*/
  dword_ABC564 = 0; /*0x54a8a7*/
  dword_ABC568 = 0; /*0x54a8ac*/
  dword_ABC56C = 0; /*0x54a8b1*/
  return 0; /*0x54a8b6*/
}


// ==== 0x0054A900  SetBitfieldBit  this=-  sig=csp ====
_BYTE *__fastcall Bitfield_SetBit(int a1, int a2, int a3)
{
  char v3; // bl
  _BYTE *result; // eax
  char v5; // cl

  v3 = 1 << (a2 % 8); /*0x54a917*/
  result = (_BYTE *)(a1 + a2 / 8); /*0x54a92a*/
  if ( a3 ) /*0x54a920*/
    v5 = v3 | *result; /*0x54a92f*/
  else
    v5 = ~v3 & *result; /*0x54a946*/
  *result = v5; /*0x54a932*/
  return result; /*0x54a92c*/
}


// ==== 0x0054A950  BitArray::TestBit  this=BitArray  sig=ida-proto ====
BOOL __fastcall BitArray::TestBit(int a1, int a2)
{
  return (*(_BYTE *)(a2 / 8 + a1) & (unsigned __int8)(1 << (a2 % 8))) != 0; /*0x54a975*/
}


// ==== 0x0054A990  ObjectClass::method_54A990  this=ObjectClass  sig=csp ====
int __thiscall sub_54A990(_BYTE *this)
{
  _BYTE *v1; // edi
  int v2; // ebp
  char v3; // al
  int i; // esi

  v1 = this; /*0x54a994*/
  v2 = 0; /*0x54a996*/
  if ( !*this ) /*0x54a998*/
  {
    do /*0x54a9a4*/
    {
      v3 = v1[1]; /*0x54a99d*/
      ++v2; /*0x54a9a0*/
      ++v1; /*0x54a9a1*/
    }
    while ( !v3 ); /*0x54a9a4*/
  }
  for ( i = 0; i < 8; ++i ) /*0x54a9a6*/
  {
    if ( ((unsigned __int8)(1 << (i % 8)) & v1[i / 8]) != 0 ) /*0x54a9c9*/
      break; /*0x54a9c9*/
  }
  return i + 8 * v2; /*0x54a9d4*/
}


// ==== 0x0054A9E0  ObjectClass::method_54A9E0  this=ObjectClass  sig=csp ====
int __thiscall sub_54A9E0(_BYTE *this)
{
  _BYTE *v1; // edi
  int v2; // ebp
  char v3; // al
  int i; // esi

  v1 = this; /*0x54a9e4*/
  v2 = 0; /*0x54a9e6*/
  if ( *this == 0xFF ) /*0x54a9eb*/
  {
    do /*0x54a9f4*/
    {
      v3 = v1[1]; /*0x54a9ed*/
      ++v2; /*0x54a9f0*/
      ++v1; /*0x54a9f1*/
    }
    while ( v3 == -1 ); /*0x54a9f4*/
  }
  for ( i = 0; i < 8; ++i ) /*0x54a9f6*/
  {
    if ( ((unsigned __int8)(1 << (i % 8)) & v1[i / 8]) == 0 ) /*0x54aa19*/
      break; /*0x54aa19*/
  }
  return i + 8 * v2; /*0x54aa24*/
}


// ==== 0x0054AA30  sub_54AA30  this=-  sig=ida-proto ====
void sub_54AA30()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x54aa3c*/
  dbl_ABC590 = Math::Sqrt(v0 + v0); /*0x54aa4e*/
}


// ==== 0x0054AA60  sub_54AA60  this=-  sig=ida-proto ====
void sub_54AA60()
{
  dbl_ABC5E0 = dbl_ABC590 / 60.0; /*0x54aa6c*/
}


// ==== 0x0054AA80  sub_54AA80  this=-  sig=ida-proto ====
void sub_54AA80()
{
  dbl_ABC5C8 = 1.0 / dbl_ABC5E0; /*0x54aa8c*/
}


// ==== 0x0054AAA0  sub_54AAA0  this=-  sig=ida-proto ====
void sub_54AAA0()
{
  dbl_ABC5C0 = 0.0174532925199433 * 45.0; /*0x54aaac*/
}


// ==== 0x0054AAC0  sub_54AAC0  this=-  sig=ida-proto ====
void sub_54AAC0()
{
  dbl_ABC598 = 0.0174532925199433 * 60.0; /*0x54aacc*/
}


// ==== 0x0054AAE0  sub_54AAE0  this=-  sig=ida-proto ====
void sub_54AAE0()
{
  dbl_ABC570 = 0.0174532925199433 * 90.0; /*0x54aaec*/
}


// ==== 0x0054AB00  sub_54AB00  this=-  sig=ida-proto ====
__int64 sub_54AB00()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_ABC570 - dbl_ABC598); /*0x54ab12*/
  result = Math::RoundToInt(v0 * dbl_ABC590 * 0.5); /*0x54ab26*/
  dword_ABC5E8 = result; /*0x54ab2b*/
  return result; /*0x54ab30*/
}


// ==== 0x0054AB40  sub_54AB40  this=-  sig=ida-proto ====
void sub_54AB40()
{
  dbl_ABC5A0 = Math::ArcTan((double)dword_ABC5E8 * 0.00390625); /*0x54ab57*/
}


// ==== 0x0054AB70  sub_54AB70  this=-  sig=ida-proto ====
void sub_54AB70()
{
  dbl_ABC5B8 = Math::ArcTan((double)(2 * dword_ABC5E8) / dbl_ABC590); /*0x54ab92*/
}


// ==== 0x0054ABA0  sub_54ABA0  this=-  sig=ida-proto ====
__int64 sub_54ABA0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABC5E8) + 0.5); /*0x54abbb*/
  dword_ABC5DC = result; /*0x54abc0*/
  return result; /*0x54abc6*/
}


// ==== 0x0054ABD0  sub_54ABD0  this=-  sig=ida-proto ====
int sub_54ABD0()
{
  dword_ABC588 = 0; /*0x54abd2*/
  MEMORY[0xABC58A] = 0; /*0x54abd8*/
  return 0; /*0x54abde*/
}


// ==== 0x0054ABE0  sub_54ABE0  this=-  sig=ida-proto ====
int sub_54ABE0()
{
  dword_ABC5A8 = 0; /*0x54abe2*/
  dword_ABC5AC = 0; /*0x54abe7*/
  dword_ABC5B0 = 0; /*0x54abec*/
  return 0; /*0x54abf1*/
}


// ==== 0x0054AC00  sub_54AC00  this=-  sig=ida-proto ====
int sub_54AC00()
{
  dword_ABC5D8 = 0; /*0x54ac05*/
  dword_ABC5D0 = 128; /*0x54ac0f*/
  dword_ABC5D4 = 128; /*0x54ac14*/
  return 128; /*0x54ac19*/
}


// ==== 0x0054AC20  sub_54AC20  this=-  sig=ida-proto ====
int sub_54AC20()
{
  dword_ABC578 = 0; /*0x54ac22*/
  dword_ABC57C = 0; /*0x54ac27*/
  dword_ABC580 = 0; /*0x54ac2c*/
  dword_ABC584 = 0; /*0x54ac31*/
  return 0; /*0x54ac36*/
}


// ==== 0x0054AC40  JumpjetLocomotionClass::Update  this=JumpjetLocomotionClass  sig=csp ====
int __thiscall sub_54AC40(int this)
{
  int v2; // ecx
  int v4; // [esp+Ch] [ebp-4h] BYREF

  LocomotionClass::Init((_DWORD *)this); /*0x54ac46*/
  *(_DWORD *)(this + 64) = dword_ABC5A8; /*0x54ac59*/
  *(_DWORD *)(this + 68) = dword_ABC5AC; /*0x54ac61*/
  v2 = dword_ABC5B0; /*0x54ac64*/
  *(_BYTE *)(this + 76) = 0; /*0x54ac6a*/
  *(_DWORD *)(this + 80) = 0; /*0x54ac6d*/
  *(_DWORD *)(this + 72) = v2; /*0x54ac70*/
  FrameSnapshot::InitMax((_WORD *)(this + 84), MEMORY[0x8871E0]->?[8]); /*0x54ac82*/
  *(_DWORD *)(this + 112) = 0; /*0x54ac87*/
  *(_DWORD *)(this + 120) = 0; /*0x54ac8a*/
  *(_DWORD *)(this + 136) = 0; /*0x54ac8d*/
  *(_DWORD *)(this + 116) = 0; /*0x54ac93*/
  *(_DWORD *)(this + 124) = 0; /*0x54ac96*/
  *(_DWORD *)(this + 128) = 0; /*0x54ac99*/
  *(_DWORD *)(this + 140) = 0; /*0x54ac9f*/
  *(_BYTE *)(this + 144) = 0; /*0x54aca5*/
  *(_BYTE *)(this + 145) = 0; /*0x54acab*/
  *(_DWORD *)(this + 148) = 0; /*0x54acb5*/
  *(_DWORD *)this = &JumpjetLocomotionClass::`vftable'; /*0x54acc3*/
  *(_DWORD *)(this + 4) = &JumpjetLocomotionClass::`vftable'; /*0x54acc9*/
  *(_DWORD *)(this + 24) = &vt_JumpjetLocomotionClass; /*0x54acd0*/
  LOWORD(v4) = 0x4000; /*0x54acd7*/
  FacingClass::Update((char *)(this + 84), &v4); /*0x54acdc*/
  LOWORD(v4) = 0x4000; /*0x54ace8*/
  FacingClass::Set_SyncLog((char *)(this + 84), &v4); /*0x54aced*/
  return this; /*0x54acf4*/
}


// ==== 0x0054AD30  JumpjetLocomotionClass::InitMovementParams  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::sub_54AD30(int a1, int a2)
{
  int v2; // ebx
  int v3; // ebp
  int v4; // eax
  _WORD v6[12]; // [esp+10h] [ebp-18h] BYREF

  v2 = a2; /*0x54ad34*/
  v3 = a1; /*0x54ad39*/
  *(_DWORD *)(v3 + 24) = *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)a2 + 132))(a2) + 3440); /*0x54ad4f*/
  *(_DWORD *)(v3 + 28) = *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)v2 + 132))(v2) + 3444); /*0x54ad64*/
  *(_DWORD *)(v3 + 32) = *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)v2 + 132))(v2) + 3448); /*0x54ad77*/
  *(_DWORD *)(v3 + 36) = *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)v2 + 132))(v2) + 3452); /*0x54ad8a*/
  v4 = *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)v2 + 132))(v2) + 3456); /*0x54ad9b*/
  if ( v4 <= 2 * dword_ABC5E8 ) /*0x54ada5*/
    v4 = 2 * dword_ABC5E8; /*0x54ada7*/
  *(_DWORD *)(v3 + 40) = v4; /*0x54ada9*/
  *(_DWORD *)(v3 + 44) = *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)v2 + 132))(v2) + 3460); /*0x54adbe*/
  *(_DWORD *)(v3 + 48) = *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)v2 + 132))(v2) + 3464); /*0x54add1*/
  *(_DWORD *)(v3 + 52) = *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)v2 + 132))(v2) + 3472); /*0x54ade4*/
  *(_BYTE *)(v3 + 56) = *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v2 + 132))(v2) + 3468); /*0x54adf5*/
  FrameSnapshot::InitMax(v6, *(_DWORD *)(v3 + 24)); /*0x54ae00*/
  qmemcpy((void *)(v3 + 80), v6, 0x18u); /*0x54ae13*/
  LOWORD(a1) = 0x4000; /*0x54ae21*/
  FacingClass::Update((char *)(v3 + 80), &a1); /*0x54ae26*/
  LOWORD(a1) = 0x4000; /*0x54ae33*/
  FacingClass::Set_SyncLog((char *)(v3 + 80), &a1); /*0x54ae38*/
  return StreamClass::ResetPosition(v3, v2); /*0x54ae44*/
}


// ==== 0x0054AE50  JumpjetLocomotionClass::SmallStub_54AE50  this=JumpjetLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::sub_54AE50(int a1)
{
  return *(_BYTE *)(a1 + 72); /*0x54ae57*/
}


// ==== 0x0054AE60  JumpjetLocomotionClass::GetMovementCoordinate_0  this=JumpjetLocomotionClass  sig=csp ====
_DWORD *__stdcall JumpjetLocomotionClass::sub_54AE60(_DWORD *a1, _DWORD *a2)
{
  _DWORD *result; // eax
  int v3; // edx
  int v4; // esi
  _DWORD *v5; // edi

  if ( (*(unsigned __int8 (__stdcall **)(_DWORD *))(*a1 + 16))(a1) ) /*0x54ae69*/
  {
    result = a2; /*0x54ae70*/
    v3 = a1[16]; /*0x54ae77*/
    v4 = a1[17]; /*0x54ae7a*/
    v5 = a2; /*0x54ae7d*/
    *a2 = a1[15]; /*0x54ae7f*/
  }
  else
  {
    result = a2; /*0x54ae8c*/
    v3 = dword_ABC5AC; /*0x54ae96*/
    v4 = dword_ABC5B0; /*0x54ae9c*/
    v5 = a2; /*0x54aea2*/
    *a2 = dword_ABC5A8; /*0x54aea4*/
  }
  v5[1] = v3; /*0x54ae81*/
  v5[2] = v4; /*0x54ae84*/
  return result; /*0x54ae87*/
}


// ==== 0x0054AEC0  JumpjetLocomotionClass::DispatchLocomotion  this=JumpjetLocomotionClass  sig=csp ====
char __stdcall DispatchLocomotion(_DWORD *a1)
{
  int v2; // eax
  int v3; // ecx
  int v4; // eax
  _BYTE *v5; // ecx
  int v6; // eax
  int *v7; // eax
  int v8; // edi
  int *v9; // ecx
  int v10; // ebx
  int v11; // edx
  _DWORD *v12; // eax
  void *v13; // eax
  int *v14; // edx
  int v15; // eax
  int v16; // ecx
  int v17; // edx
  int v18; // eax
  int *v19; // eax
  int *v20; // edx
  int v21; // eax
  int *v22; // eax
  int v23; // eax
  int v25; // [esp+2Ch] [ebp-20h] BYREF
  int v26; // [esp+30h] [ebp-1Ch]
  int v27; // [esp+34h] [ebp-18h] BYREF
  int v28; // [esp+38h] [ebp-14h]
  int v29; // [esp+3Ch] [ebp-10h]
  _BYTE v30[12]; // [esp+40h] [ebp-Ch] BYREF
  int v31; // [esp+50h] [ebp+4h]

  v2 = (*(int (__stdcall **)(_DWORD *))(*a1 + 116))(a1); /*0x54aecb*/
  v3 = *a1; /*0x54aece*/
  v26 = v2; /*0x54aed1*/
  if ( (*(unsigned __int8 (__stdcall **)(_DWORD *))(v3 + 16))(a1) /*0x54aedf*/
    || (*(unsigned __int8 (__stdcall **)(_DWORD *))(*a1 + 128))(a1) )
  {
    JumpjetLocomotion::UpdateFacing((int)(a1 - 1)); /*0x54aef0*/
    if ( !*(_BYTE *)(a1[2] + 144) ) /*0x54af00*/
      return 0; /*0x54af00*/
    if ( HouseClass::IonSensitivesShouldBeOffline() ) /*0x54af0c*/
    {
      v4 = a1[19]; /*0x54af15*/
      if ( v4 ) /*0x54af1a*/
      {
        if ( v4 != 5 ) /*0x54af1f*/
          (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)a1[2] + 988))(a1[2], 0); /*0x54af28*/
      }
    }
    v5 = (_BYTE *)a1[2]; /*0x54af2e*/
    if ( v5[1061] ) /*0x54af33*/
    {
      v6 = a1[19]; /*0x54af41*/
      if ( v6 != 5 && v6 != 6 && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v5 + 456))(v5) > 0 ) /*0x54af60*/
      {
        v7 = (int *)(*(int (__thiscall **)(_DWORD, int *))(*(_DWORD *)a1[2] + 72))(a1[2], &v27); /*0x54af71*/
        v8 = *v7; /*0x54af74*/
        v9 = (int *)a1[2]; /*0x54af76*/
        v10 = v7[1]; /*0x54af79*/
        v11 = *v9; /*0x54af7c*/
        v29 = v7[2]; /*0x54af81*/
        v12 = (_DWORD *)(*(int (__thiscall **)(int *, int *))(v11 + 72))(v9, &v27); /*0x54af8a*/
        LOWORD(v31) = *v12 / 256; /*0x54af9d*/
        HIWORD(v31) = v12[1] / 256; /*0x54afb5*/
        v25 = v31; /*0x54afbe*/
        v13 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v25); /*0x54afc8*/
        v14 = (int *)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)v13 + 72))(v13, v30); /*0x54afdc*/
        v15 = *v14; /*0x54afde*/
        v16 = v14[1]; /*0x54afe8*/
        v17 = v14[2]; /*0x54afeb*/
        if ( !*(_BYTE *)(a1[2] + 1709) || v8 == v15 && v10 == v16 ) /*0x54aff6*/
        {
          a1[31] = -5; /*0x54b006*/
          a1[19] = 5; /*0x54b00d*/
          if ( (*(int (__thiscall **)(_DWORD))(*(_DWORD *)a1[2] + 44))(a1[2]) == 15 ) /*0x54b01f*/
            (*(void (__thiscall **)(_DWORD, int, _DWORD, _DWORD))(*(_DWORD *)a1[2] + 1368))(a1[2], 34, 0, 0); /*0x54b02c*/
        }
        else
        {
          a1[15] = v15; /*0x54affb*/
          a1[16] = v16; /*0x54affe*/
          a1[17] = v17; /*0x54b001*/
        }
      }
    }
    switch ( a1[19] ) /*0x54b03c*/
    {
      case 0: /*0x54b03c*/
        HouseClass::Set(a1 - 1); /*0x54b046*/
        break; /*0x54b04b*/
      case 1: /*0x54b03c*/
        UpdateFootMovement((int)(a1 - 1)); /*0x54b050*/
        break; /*0x54b055*/
      case 2: /*0x54b03c*/
        UpdateFootMoveToState(a1 - 1); /*0x54b05a*/
        break; /*0x54b05f*/
      case 3: /*0x54b03c*/
        MovementClass::CalcSpeed((int)(a1 - 1)); /*0x54b064*/
        break; /*0x54b069*/
      case 4: /*0x54b03c*/
        BuildingPlacement::ProcessBuildingPlacementAction((int)(a1 - 1)); /*0x54b06e*/
        break; /*0x54b073*/
      case 5: /*0x54b03c*/
        JumpjetLocomotion::Land((int)(a1 - 1)); /*0x54b078*/
        break; /*0x54b078*/
      default:
        break;
    }
    v18 = a1[2]; /*0x54b07d*/
    if ( *(_BYTE *)(v18 + 131) ) /*0x54b080*/
    {
      if ( *(#375 **)(v18 + 540) != HouseClass_Player ) /*0x54b09c*/
      {
        v19 = (int *)(v18 + 156); /*0x54b09e*/
        v27 = *v19; /*0x54b0a5*/
        v28 = v19[1]; /*0x54b0ac*/
        v29 = v19[2]; /*0x54b0bd*/
        if ( Cell::IsPassable(&v27) /*0x54b0fe*/
          || (*(_DWORD *)MEMORY[0xA8B230] & 0x1000) != 0
          && (v20 = (int *)(a1[2] + 156), v27 = *v20, v28 = v20[1], v29 = v20[2], Game::Stub3((int)&v27)) )
        {
          (*(void (__thiscall **)(_DWORD))(*(_DWORD *)a1[2] + 336))(a1[2]); /*0x54b10c*/
        }
      }
    }
    v21 = a1[2]; /*0x54b112*/
    if ( !*(_BYTE *)(v21 + 1051) && *(#375 **)(v21 + 540) != HouseClass_Player ) /*0x54b12d*/
    {
      v22 = (int *)(v21 + 156); /*0x54b12f*/
      v27 = *v22; /*0x54b136*/
      v28 = v22[1]; /*0x54b13d*/
      v29 = v22[2]; /*0x54b14e*/
      if ( !Cell::IsPassable(&v27) ) /*0x54b152*/
        (*(void (__thiscall **)(_DWORD, #375 *))(*(_DWORD *)a1[2] + 408))(a1[2], HouseClass_Player); /*0x54b166*/
    }
  }
  if ( *(_BYTE *)(a1[2] + 144) ) /*0x54b16f*/
  {
    v23 = (*(int (__stdcall **)(_DWORD *))(*a1 + 116))(a1); /*0x54b17c*/
    if ( v23 != v26 ) /*0x54b183*/
      Targeting::Readd((_DWORD *)a1[2]); /*0x54b18e*/
  }
  return 0; /*0x54b195*/
}


// ==== 0x0054B1C0  JumpjetLocomotionClass::SmoothObjectPlacement  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall SmoothObjectPlacement(int a1, int a2, int a3, int a4)
{
  int v4; // esi
  int v5; // edi
  int v6; // ebp
  int result; // eax
  int *PlacementCellsMapClass; // eax
  int v9; // edx
  int *v10; // eax
  int v11; // edi
  int v12; // ebx
  int v13; // ebp
  _DWORD *v14; // ecx
  _DWORD *v15; // ecx
  int v16; // [esp+10h] [ebp-10h] BYREF
  _DWORD v17[3]; // [esp+14h] [ebp-Ch] BYREF

  v4 = a1; /*0x54b1cc*/
  if ( (*(_DWORD *)(a1 + 60) != dword_ABC5A8 /*0x54b1fe*/
     || *(_DWORD *)(a1 + 64) != dword_ABC5AC
     || *(_DWORD *)(a1 + 68) != dword_ABC5B0)
    && *(_DWORD *)(a1 + 76)
    && *(_BYTE *)(a1 + 140) )
  {
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 8) + 244))(*(_DWORD *)(a1 + 8), a1 + 60); /*0x54b20e*/
    *(_BYTE *)(v4 + 140) = 0; /*0x54b214*/
  }
  v5 = a2; /*0x54b21e*/
  v6 = a3; /*0x54b222*/
  result = a4; /*0x54b22b*/
  *(_DWORD *)(v4 + 60) = a2; /*0x54b22f*/
  *(_DWORD *)(v4 + 64) = v6; /*0x54b231*/
  *(_DWORD *)(v4 + 68) = result; /*0x54b234*/
  if ( v5 == dword_ABC5A8 && v6 == dword_ABC5AC && result == dword_ABC5B0 ) /*0x54b24f*/
  {
    *(_BYTE *)(v4 + 72) = 0; /*0x54b4c1*/
  }
  else
  {
    if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v4 + 8) + 44))(*(_DWORD *)(v4 + 8)) != 1 /*0x54b26b*/
      || *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v4 + 8) + 1732) + 3434) )
    {
      v17[2] = a4; /*0x54b2e4*/
      LOWORD(a1) = v5 / 256; /*0x54b2fd*/
      a2 = 0; /*0x54b30b*/
      HIWORD(a1) = v6 / 256; /*0x54b31a*/
      v17[0] = v5; /*0x54b33d*/
      v17[1] = v6; /*0x54b341*/
      v9 = *((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], v17) + 80) >> 8; /*0x54b358*/
      LOBYTE(v9) = v9 & 1; /*0x54b35b*/
      PlacementCellsMapClass = LayerClass::Pathfinding_Find( /*0x54b36f*/
                                 &MEMORY[0x87F7E8],
                                 v9,
                                 &v16,
                                 (__int16 *)&a1,
                                 3,
                                 -1,
                                 9,
                                 v9,
                                 1,
                                 1,
                                 0,
                                 0,
                                 0,
                                 1,
                                 (__int16 *)&a2,
                                 0,
                                 0);
    }
    else
    {
      LOWORD(a1) = v5 / 256; /*0x54b28c*/
      a2 = 0; /*0x54b29a*/
      HIWORD(a1) = v6 / 256; /*0x54b2a9*/
      PlacementCellsMapClass = LayerClass::Pathfinding_Find( /*0x54b2d9*/
                                 &MEMORY[0x87F7E8],
                                 (int)&v16,
                                 &v16,
                                 (__int16 *)&a1,
                                 3,
                                 -1,
                                 9,
                                 0,
                                 1,
                                 1,
                                 0,
                                 0,
                                 0,
                                 0,
                                 (__int16 *)&a2,
                                 0,
                                 0);
    }
    a1 = *PlacementCellsMapClass; /*0x54b37d*/
    a2 = ((__int16)a1 << 8) + 128; /*0x54b393*/
    a3 = (SHIWORD(a1) << 8) + 128; /*0x54b3a4*/
    a4 = 0; /*0x54b3a8*/
    v10 = (int *)JumpjetLocomotionClass::ProcessLanding(v17, &a2); /*0x54b3b0*/
    v11 = *v10; /*0x54b3b5*/
    v12 = v10[1]; /*0x54b3b7*/
    v13 = v10[2]; /*0x54b3ba*/
    result = dword_ABC5A8; /*0x54b3bd*/
    if ( v11 != dword_ABC5A8 || v12 != dword_ABC5AC || v13 != dword_ABC5B0 ) /*0x54b3d4*/
    {
      if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v4 + 8) + 44))(*(_DWORD *)(v4 + 8)) != 1 /*0x54b413*/
        || !*(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v4 + 8) + 132))(*(_DWORD *)(v4 + 8)) + 3434)
        && (v14 = *(_DWORD **)(v4 + 8), v14[45] != 7)
        && (*(int (__thiscall **)(_DWORD *))(*v14 + 388))(v14) != 7 )
      {
        *(_DWORD *)(v4 + 60) = v11; /*0x54b418*/
        *(_DWORD *)(v4 + 64) = v12; /*0x54b41b*/
        *(_DWORD *)(v4 + 68) = v13; /*0x54b41e*/
      }
      v15 = *(_DWORD **)(v4 + 8); /*0x54b421*/
      if ( v15[45] != 7 && (*(int (__thiscall **)(_DWORD *))(*v15 + 388))(v15) != 7 ) /*0x54b438*/
        *(_DWORD *)(*(_DWORD *)(v4 + 8) + 1444) = Coord::To_Cell(&MEMORY[0x87F7E8], (_DWORD *)(v4 + 60)); /*0x54b44b*/
      *(_BYTE *)(v4 + 72) = 1; /*0x54b451*/
      result = *(_DWORD *)(v4 + 76); /*0x54b455*/
      if ( result == 4 ) /*0x54b45b*/
      {
        *(_DWORD *)(v4 + 76) = 1; /*0x54b45d*/
        *(_DWORD *)(v4 + 124) = *(_DWORD *)(v4 + 40); /*0x54b467*/
        *(_BYTE *)(*(_DWORD *)(v4 + 8) + 308) = 0; /*0x54b46d*/
        result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v4 + 8) + 388))(*(_DWORD *)(v4 + 8)); /*0x54b479*/
        if ( result == 16 ) /*0x54b482*/
        {
          (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(v4 + 8) + 488))(*(_DWORD *)(v4 + 8), 5, 1); /*0x54b48d*/
          *(_BYTE *)(*(_DWORD *)(v4 + 8) + 184) = 1; /*0x54b496*/
          result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v4 + 8) + 512))(*(_DWORD *)(v4 + 8)); /*0x54b4a2*/
          if ( (_BYTE)result ) /*0x54b4aa*/
            return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v4 + 8) + 492))(*(_DWORD *)(v4 + 8)); /*0x54b4b1*/
        }
      }
    }
  }
  return result; /*0x54b4b7*/
}


// ==== 0x0054B4D0  JumpjetLocomotionClass::MoveToDestination  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::sub_54B4D0(int a1)
{
  int result; // eax
  int v2; // edi
  _DWORD *v3; // ebp
  _DWORD *v4; // esi
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  int *v9; // ecx
  int v10; // [esp-2Ch] [ebp-50h]
  int v11; // [esp+Ch] [ebp-18h] BYREF
  int v12; // [esp+10h] [ebp-14h] BYREF
  int v13; // [esp+14h] [ebp-10h] BYREF
  int v14; // [esp+18h] [ebp-Ch] BYREF
  int v15; // [esp+1Ch] [ebp-8h]
  int GroundHeight; // [esp+20h] [ebp-4h]

  result = MEMORY[0xA8E7AC]; /*0x54b4d0*/
  if ( !MEMORY[0xA8E7AC] ) /*0x54b4dd*/
  {
    v2 = a1; /*0x54b4e3*/
    result = *(unsigned __int8 *)(a1 + 72); /*0x54b4e7*/
    if ( (_BYTE)result ) /*0x54b4ec*/
    {
      v3 = (_DWORD *)(a1 + 60); /*0x54b4fb*/
      if ( (*(_DWORD *)(a1 + 60) != dword_ABC5A8 /*0x54b521*/
         || *(_DWORD *)(a1 + 64) != dword_ABC5AC
         || *(_DWORD *)(a1 + 68) != dword_ABC5B0)
        && *(_DWORD *)(a1 + 76)
        && *(_BYTE *)(a1 + 140) )
      {
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 8) + 244))(*(_DWORD *)(a1 + 8), a1 + 60); /*0x54b531*/
        *(_BYTE *)(v2 + 140) = 0; /*0x54b537*/
      }
      v4 = *(_DWORD **)(v2 + 8); /*0x54b541*/
      v5 = v4[39]; /*0x54b54f*/
      v6 = v4[40]; /*0x54b551*/
      GroundHeight = v4[41]; /*0x54b557*/
      LOWORD(a1) = v5 / 256; /*0x54b567*/
      HIWORD(a1) = v6 / 256; /*0x54b57e*/
      v12 = a1; /*0x54b587*/
      a1 = 0; /*0x54b59b*/
      v10 = *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*v4 + 132))(v4) + 1460); /*0x54b5be*/
      v7 = (*(int (__thiscall **)(_DWORD *))(*v4 + 132))(v4); /*0x54b5c3*/
      v8 = *LayerClass::Pathfinding_Find( /*0x54b5e4*/
              &MEMORY[0x87F7E8],
              (int)&v13,
              &v13,
              (__int16 *)&v12,
              *(_DWORD *)(v7 + 1660),
              -1,
              v10,
              0,
              1,
              1,
              0,
              0,
              0,
              1,
              (__int16 *)&a1,
              0,
              0);
      v11 = v8; /*0x54b5ed*/
      if ( v8 == dword_ABC588 ) /*0x54b5f6*/
      {
        v9 = *(int **)(v2 + 8); /*0x54b68f*/
        result = (int)(v9 + 27); /*0x54b695*/
        if ( v9[27] > 0 ) /*0x54b69a*/
        {
          (*(void (__stdcall **)(int *, _DWORD, int, _DWORD, int, int, _DWORD))(*v9 + 364))( /*0x54b6b6*/
            v9 + 27,
            0,
            MEMORY[0x8871E0]->?[5],
            0,
            1,
            1,
            0);
          result = dword_ABC5A8; /*0x54b6bc*/
          *v3 = dword_ABC5A8; /*0x54b6c1*/
          *(_DWORD *)(v2 + 64) = dword_ABC5AC; /*0x54b6ca*/
          *(_DWORD *)(v2 + 68) = dword_ABC5B0; /*0x54b6d3*/
        }
      }
      else
      {
        v14 = ((__int16)v8 << 8) + 128; /*0x54b61e*/
        v15 = (SHIWORD(v8) << 8) + 128; /*0x54b626*/
        GroundHeight = 0; /*0x54b630*/
        GroundHeight = Cell::GetGroundHeight(&v14); /*0x54b643*/
        if ( (*((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v11) + 80) & 0x100) != 0 ) /*0x54b655*/
          GroundHeight += dword_ABC5DC; /*0x54b663*/
        return (*(int (__stdcall **)(int, int, int, int))(*(_DWORD *)v2 + 68))(v2, v14, v15, GroundHeight); /*0x54b683*/
      }
    }
  }
  return result; /*0x54b686*/
}


// ==== 0x0054B6E0  JumpjetLocomotionClass::SynchronizeFacingDirection_0  this=JumpjetLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::sub_54B6E0(int a1, int a2)
{
  return FacingClass::Set_SyncLog((char *)(*(_DWORD *)(a1 + 8) + 904), &a2); /*0x54b6ff*/
}


// ==== 0x0054B710  JumpjetLocomotionClass::GetClassIdentifier  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::_vt03(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x54b716*/
    return -2147467261; /*0x54b718*/
  *a2 = -1839125434; /*0x54b726*/
  a2[1] = 298972959; /*0x54b72e*/
  a2[2] = 1610653612; /*0x54b737*/
  a2[3] = -1252326136; /*0x54b740*/
  return 0; /*0x54b71d*/
}


// ==== 0x0054B750  JumpjetLocomotionClass::InitClass  this=JumpjetLocomotionClass  sig=csp ====
HRESULT __stdcall JumpjetLocomotionClass::_vt05(int *a1, int *pStm)
{
  IStream *v2; // edi
  int v3; // ebx
  int v4; // eax
  LPVOID *v5; // esi

  v2 = (IStream *)pStm; /*0x54b757*/
  v3 = SwizzleManager::SaveLoad(a1, pStm); /*0x54b762*/
  if ( v3 < 0 ) /*0x54b766*/
    return v3; /*0x54b766*/
  if ( a1 ) /*0x54b76a*/
  {
    a1[37] = 0; /*0x54b76c*/
    *a1 = (int)&JumpjetLocomotionClass::`vftable'; /*0x54b776*/
    a1[1] = (int)&JumpjetLocomotionClass::`vftable'; /*0x54b77c*/
    a1[6] = (int)&vt_JumpjetLocomotionClass; /*0x54b783*/
  }
  v2->__pad_0->Read(v2, &pStm, 1, 0); /*0x54b796*/
  if ( !(_BYTE)pStm ) /*0x54b79f*/
    return v3; /*0x54b7d1*/
  v4 = a1[37]; /*0x54b7a1*/
  v5 = (LPVOID *)(a1 + 37); /*0x54b7a7*/
  if ( v4 ) /*0x54b7af*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v4 + 8))(v4); /*0x54b7b4*/
  *v5 = 0; /*0x54b7be*/
  return OleLoadFromStream(v2, &IID_ILocomotion, v5); /*0x54b7ca*/
}


// ==== 0x0054B7E0  JumpjetLocomotionClass::LoadFromStream  this=JumpjetLocomotionClass  sig=csp ====
HRESULT __stdcall JumpjetLocomotionClass::LoadFromStream(int *a1, int *pPStm, int a3)
{
  IStream *v3; // esi
  int *v4; // edi
  int IPersistStream; // ebx
  int v6; // ecx
  int (__stdcall ***v7)(_DWORD, void *, int **); // eax
  int v8; // edi
  int *v9; // ebx
  HRESULT v10; // esi
  int v12; // edx

  v3 = (IStream *)pPStm; /*0x54b7e6*/
  v4 = a1; /*0x54b7eb*/
  IPersistStream = LoadIPersistStream(a1, pPStm, a3); /*0x54b7f7*/
  if ( IPersistStream < 0 ) /*0x54b7fb*/
    return IPersistStream; /*0x54b7fb*/
  if ( !v4[37] ) /*0x54b809*/
  {
    v12 = *(_DWORD *)v3->__pad_0; /*0x54b8a9*/
    LOBYTE(a3) = 0; /*0x54b8b5*/
    (*(void (__stdcall **)(IStream *, int *, int, _DWORD))(v12 + 16))(v3, &a3, 1, 0); /*0x54b8ba*/
    return IPersistStream; /*0x54b8be*/
  }
  v6 = *(_DWORD *)v3->__pad_0; /*0x54b80f*/
  LOBYTE(a3) = 1; /*0x54b81b*/
  (*(void (__stdcall **)(IStream *, int *, int, _DWORD))(v6 + 16))(v3, &a3, 1, 0); /*0x54b820*/
  v7 = (int (__stdcall ***)(_DWORD, void *, int **))v4[37]; /*0x54b823*/
  pPStm = 0; /*0x54b829*/
  if ( v7 ) /*0x54b833*/
  {
    v8 = (**v7)(v7, &unk_820270, &a1); /*0x54b844*/
    if ( v8 >= 0 ) /*0x54b848*/
    {
      v9 = a1; /*0x54b861*/
      if ( pPStm ) /*0x54b867*/
        (*(void (__stdcall **)(int *))(*pPStm + 8))(pPStm); /*0x54b86c*/
      pPStm = v9; /*0x54b86f*/
    }
    else
    {
      Function::Method_4B4D60((int *)&pPStm); /*0x54b84e*/
      pPStm = 0; /*0x54b853*/
    }
    if ( v8 < 0 && v8 != -2147467262 ) /*0x54b87d*/
      WinAPI::Wrapper(v8); /*0x54b880*/
  }
  v10 = OleSaveToStream((LPPERSISTSTREAM)pPStm, v3); /*0x54b891*/
  if ( pPStm ) /*0x54b899*/
    (*(void (__stdcall **)(int *))(*pPStm + 8))(pPStm); /*0x54b89e*/
  return v10; /*0x54b8a3*/
}


// ==== 0x0054B8D0  JumpjetLocomotionClass::ConvertCoordToCell_0  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::sub_54B8D0(int a1)
{
  int v1; // edi
  int v2; // eax
  _DWORD *v3; // eax
  _DWORD v5[3]; // [esp+8h] [ebp-Ch] BYREF

  v1 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 456))(*(_DWORD *)(a1 + 8)); /*0x54b8e4*/
  v2 = *(_DWORD *)(a1 + 8); /*0x54b8e6*/
  if ( !*(_BYTE *)(v2 + 140) ) /*0x54b8e9*/
  {
    v3 = (_DWORD *)(v2 + 156); /*0x54b8f3*/
    v5[0] = *v3; /*0x54b8fa*/
    v5[1] = v3[1]; /*0x54b906*/
    v5[2] = v3[2]; /*0x54b912*/
    if ( (*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], v5) + 80) & 0x100) != 0 /*0x54b932*/
      && v1 >= dword_ABC5DC
      && !*(_BYTE *)(*(_DWORD *)(a1 + 8) + 141) )
    {
      v1 -= dword_ABC5DC; /*0x54b93c*/
    }
  }
  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 84))(*(_DWORD *)(a1 + 8)) ) /*0x54b943*/
    return 2; /*0x54b94b*/
  if ( v1 ) /*0x54b959*/
    return (v1 >= *(_DWORD *)(a1 + 40)) + 3; /*0x54b973*/
  return 2; /*0x54b94a*/
}


// ==== 0x0054B980  HouseClass::Set  this=HouseClass  sig=csp ====
char __thiscall sub_54B980(int this)
{
  _WORD *v2; // eax
  _DWORD *Value; // eax
  int v4; // ecx
  int v6; // [esp+Ch] [ebp-4h] BYREF

  LOBYTE(v2) = (*(int (__stdcall **)(int))(*(_DWORD *)(this + 4) + 16))(this + 4); /*0x54b98b*/
  if ( (_BYTE)v2 ) /*0x54b990*/
  {
    (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 12) + 1348))( /*0x54b9a4*/
      *(_DWORD *)(this + 12),
      0,
      1072693248);
    Value = ProgressTimer::GetValue((_WORD *)(*(_DWORD *)(this + 12) + 904), &v6); /*0x54b9b8*/
    FacingClass::Set_SyncLog((char *)(this + 84), Value); /*0x54b9c1*/
    v4 = *(_DWORD *)(this + 44); /*0x54b9c6*/
    *(_DWORD *)(this + 112) = 0; /*0x54b9cc*/
    *(_DWORD *)(this + 120) = 0; /*0x54b9cf*/
    *(_DWORD *)(this + 116) = 0; /*0x54b9d2*/
    *(_DWORD *)(this + 124) = 0; /*0x54b9d5*/
    *(_DWORD *)(this + 128) = v4; /*0x54b9d8*/
    LOBYTE(v2) = HouseClass::IonSensitivesShouldBeOffline(); /*0x54b9e4*/
    if ( !(_BYTE)v2 ) /*0x54b9ec*/
    {
      v2 = (_WORD *)(*(int (__thiscall **)(_DWORD, int *))(**(_DWORD **)(this + 12) + 756))(*(_DWORD *)(this + 12), &v6); /*0x54b9f8*/
      if ( *v2 == dword_ABC588 && v2[1] == MEMORY[0xABC58A] ) /*0x54ba15*/
        LOBYTE(v2) = GadgetGrid::InsertItem(MEMORY[0x887888], *(_DWORD *)(this + 12)); /*0x54ba20*/
      *(_DWORD *)(this + 80) = 1; /*0x54ba25*/
    }
  }
  return (char)v2; /*0x54ba2c*/
}


// ==== 0x0054BA30  ObjectClass::UpdateFootMovement  this=ObjectClass  sig=csp ====
int __thiscall UpdateFootMovement(int this)
{
  int v2; // edi
  int v3; // eax
  int *v4; // eax
  int v5; // eax
  int v6; // ecx
  unsigned int v7; // edi
  _DWORD *v8; // eax
  int v9; // ebx
  void *NeighbourContentCell; // eax
  _BYTE *v11; // ecx
  int result; // eax
  _DWORD *v13; // eax
  _BYTE *v14; // ecx
  char v15; // bl
  int *v16; // ecx
  int v17; // edx
  double v18; // st7
  int MemberTeam; // eax
  int v20; // edi
  _BYTE *v21; // eax
  int v22; // eax
  _BYTE *v23; // ecx
  char v24; // bl
  int v25; // [esp+14h] [ebp-24h]
  int v26; // [esp+20h] [ebp-18h] BYREF
  int v27; // [esp+24h] [ebp-14h] BYREF
  int v28; // [esp+28h] [ebp-10h] BYREF
  int v29; // [esp+2Ch] [ebp-Ch] BYREF
  int v30; // [esp+30h] [ebp-8h]
  int v31; // [esp+34h] [ebp-4h]

  v2 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 456))(*(_DWORD *)(this + 12)); /*0x54ba43*/
  v3 = *(_DWORD *)(this + 12); /*0x54ba45*/
  if ( !*(_BYTE *)(v3 + 140) ) /*0x54ba48*/
  {
    v4 = (int *)(v3 + 156); /*0x54ba52*/
    v29 = *v4; /*0x54ba59*/
    v30 = v4[1]; /*0x54ba65*/
    v31 = v4[2]; /*0x54ba71*/
    if ( (*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], &v29) + 80) & 0x100) != 0 && v2 >= dword_ABC5DC ) /*0x54ba8c*/
      v2 -= dword_ABC5DC; /*0x54ba8e*/
  }
  v5 = *(_DWORD *)(*(int (__thiscall **)(_DWORD, int *))(**(_DWORD **)(this + 12) + 440))(*(_DWORD *)(this + 12), &v28); /*0x54baa0*/
  v6 = *(_DWORD *)(this + 12); /*0x54baa2*/
  v26 = v5; /*0x54baa5*/
  if ( v5 != *(_DWORD *)(v6 + 1376) ) /*0x54bab0*/
    Coord::ToGridIndex((char *)MEMORY[0x887888], v6, *(_DWORD *)(v6 + 1376), v5); /*0x54bace*/
  if ( v2 < *(_DWORD *)(this + 128) ) /*0x54bade*/
  {
    if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 44))(*(_DWORD *)(this + 12)) == 1 /*0x54bba2*/
      && *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(*(_DWORD *)(this + 12)) + 3434) )
    {
      result = *(_DWORD *)(this + 128) / 2; /*0x54bbb5*/
    }
    else
    {
      result = *(_DWORD *)(this + 128) / 4; /*0x54bbc5*/
    }
    if ( v2 > result ) /*0x54bbca*/
    {
      v16 = (int *)(*(_DWORD *)(this + 12) + 156); /*0x54bbd6*/
      *(double *)(this + 120) = (double)*(int *)(this + 32); /*0x54bbdc*/
      v29 = *v16; /*0x54bbe1*/
      v17 = v16[1]; /*0x54bbe5*/
      v30 = v17; /*0x54bbe8*/
      v31 = v16[2]; /*0x54bbef*/
      v28 = *(_DWORD *)(this + 64); /*0x54bbf8*/
      if ( v29 == v28 && v17 == *(_DWORD *)(this + 68) ) /*0x54bc01*/
        LOWORD(v27) = 0; /*0x54bc03*/
      v18 = Math::CalcAngle((double)v30 - (double)*(int *)(this + 68), (double)v28 - (double)v29); /*0x54bc26*/
      LOWORD(v28) = Math::RoundToInt((v18 - 1.570796326794897) * -10430.06004058427); /*0x54bc3f*/
      v27 = v28; /*0x54bc50*/
      FacingClass::Update((char *)(this + 84), &v27); /*0x54bc54*/
      MemberTeam = Team::GetMember(*(_DWORD **)(this + 12), 0); /*0x54bc5e*/
      v20 = MemberTeam; /*0x54bc63*/
      if ( MemberTeam ) /*0x54bc67*/
      {
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)MemberTeam + 44))(MemberTeam) == 6 ) /*0x54bc73*/
        {
          v21 = *(_BYTE **)(v20 + 1312); /*0x54bc75*/
          if ( v21[5821] || v21[5860] || v21[5861] || v21[5862] ) /*0x54bc99*/
            (**(void (__thiscall ***)(int, int, _DWORD))(*(_DWORD *)(this + 12) + 8))( /*0x54bcb3*/
              *(_DWORD *)(this + 12) + 8,
              4475,
              0);
        }
      }
      result = *(_DWORD *)(this + 68) / 256; /*0x54bcd2*/
      if ( v26 == __PAIR32__(result, *(_DWORD *)(this + 64) / 256) ) /*0x54bcda*/
      {
        result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(*(_DWORD *)(this + 12)); /*0x54bce8*/
        if ( !*(_BYTE *)(result + 3434) ) /*0x54bcee*/
        {
          v22 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 456))(*(_DWORD *)(this + 12)); /*0x54bcfd*/
          v23 = *(_BYTE **)(this + 12); /*0x54bd03*/
          *(_DWORD *)(this + 128) = v22; /*0x54bd06*/
          v24 = v23[116]; /*0x54bd10*/
          (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)v23 + 292))(v23, 0); /*0x54bd13*/
          result = *(_DWORD *)(this + 12); /*0x54bd19*/
          *(_DWORD *)(this + 80) = 3; /*0x54bd1c*/
          *(_BYTE *)(result + 116) = v24; /*0x54bd23*/
        }
      }
    }
  }
  else if ( ObjectClass::HasLinkedObject(*(_DWORD *)(this + 12)) ) /*0x54baea*/
  {
    v7 = Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 7); /*0x54bb08*/
    v8 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v26); /*0x54bb14*/
    v9 = **(_DWORD **)(this + 12); /*0x54bb1f*/
    NeighbourContentCell = Cell::GetNeighbourContent(v8, v7); /*0x54bb23*/
    (*(void (__thiscall **)(_DWORD, void *, int))(v9 + 1152))(*(_DWORD *)(this + 12), NeighbourContentCell, 1); /*0x54bb2c*/
    v11 = *(_BYTE **)(this + 12); /*0x54bb32*/
    LOBYTE(v9) = v11[116]; /*0x54bb39*/
    (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)v11 + 292))(v11, 0); /*0x54bb3c*/
    result = *(_DWORD *)(this + 12); /*0x54bb42*/
    *(_BYTE *)(result + 116) = v9; /*0x54bb46*/
    *(_DWORD *)(this + 80) = 3; /*0x54bb49*/
  }
  else
  {
    v13 = (_DWORD *)(*(int (__stdcall **)(_DWORD))(**(_DWORD **)(this + 12) + 444))(*(_DWORD *)(this + 12)); /*0x54bb5c*/
    CellClass::AttachObject(v13, v25); /*0x54bb64*/
    v14 = *(_BYTE **)(this + 12); /*0x54bb69*/
    v15 = v14[116]; /*0x54bb70*/
    result = (*(int (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)v14 + 292))(v14, 0); /*0x54bb73*/
    *(_BYTE *)(*(_DWORD *)(this + 12) + 116) = v15; /*0x54bb7d*/
    *(_DWORD *)(this + 80) = 2; /*0x54bb80*/
  }
  return result; /*0x54bb45*/
}


// ==== 0x0054BD30  ObjectClass::UpdateFootMoveToState  this=ObjectClass  sig=csp ====
int __thiscall UpdateFootMoveToState(int this)
{
  int result; // eax
  int *v3; // ecx
  int v4; // edx
  _DWORD *v5; // edi
  int *v6; // eax
  int v7; // ebx
  _BYTE *v8; // ecx
  char v9; // bl
  _BYTE *v10; // ecx
  char v11; // bl
  _DWORD *v12; // eax
  int v13; // edx
  int v14; // edi
  int v15; // eax
  int v16; // eax
  bool v17; // zf
  double v18; // st7
  int v19; // edi
  _DWORD *v20; // eax
  _DWORD *v21; // eax
  _BYTE *v22; // ecx
  char v23; // bl
  int v24; // [esp+14h] [ebp-2Ch]
  int v25; // [esp+20h] [ebp-20h] BYREF
  int v26; // [esp+24h] [ebp-1Ch]
  int v27; // [esp+28h] [ebp-18h]
  int v28; // [esp+2Ch] [ebp-14h]
  int v29; // [esp+30h] [ebp-10h]
  int v30; // [esp+38h] [ebp-8h]
  int v31; // [esp+3Ch] [ebp-4h]

  result = (*(int (__stdcall **)(int))(*(_DWORD *)(this + 4) + 16))(this + 4); /*0x54bd3f*/
  if ( (_BYTE)result ) /*0x54bd44*/
  {
    v3 = (int *)(this + 64); /*0x54bd4a*/
    v4 = *(_DWORD *)(this + 64); /*0x54bd50*/
    v30 = *(_DWORD *)(this + 68); /*0x54bd55*/
    v5 = *(_DWORD **)(this + 12); /*0x54bd59*/
    v31 = *(_DWORD *)(this + 72); /*0x54bd5f*/
    v6 = v5 + 39; /*0x54bd63*/
    v27 = v5[39]; /*0x54bd6e*/
    v7 = v5[40]; /*0x54bd72*/
    v29 = v5[41]; /*0x54bd78*/
    if ( v4 == v27 && v30 == v7 ) /*0x54bd8d*/
    {
      result = v5[173]; /*0x54bd93*/
      if ( result ) /*0x54bd9b*/
        return result; /*0x54bd9b*/
      if ( v5 /*0x54bdd0*/
        && (*(int (__thiscall **)(_DWORD *))(*v5 + 44))(v5) == 1
        && *(_BYTE *)(v5[433] + 3603)
        && !*(_BYTE *)(*(_DWORD *)(this + 12) + 1709) )
      {
        if ( *(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*v5 + 132))(v5) + 1709) ) /*0x54bde8*/
        {
          if ( !*((_BYTE *)v5 + 308) ) /*0x54bdf2*/
          {
            v8 = *(_BYTE **)(this + 12); /*0x54bdfc*/
            if ( !v8[1709] ) /*0x54bdff*/
            {
              *(_DWORD *)(this + 128) = *(_DWORD *)(this + 44); /*0x54be0e*/
              v9 = v8[116]; /*0x54be16*/
              (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)v8 + 292))(v8, 0); /*0x54be19*/
              *(_BYTE *)(*(_DWORD *)(this + 12) + 116) = v9; /*0x54be22*/
              *(_DWORD *)(this + 80) = 2; /*0x54be28*/
              return BuildingClass::GetType_Thunk(); /*0x54be3a*/
            }
          }
        }
        v25 = *(_DWORD *)(this + 12); /*0x54be40*/
        if ( *(_DWORD *)((*(int (**)(void))(*(_DWORD *)v25 + 444))() + 224) != v25 ) /*0x54be52*/
          goto LABEL_19; /*0x54be52*/
      }
      else
      {
        if ( *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(*(_DWORD *)(this + 12)) + 3434) ) /*0x54be6d*/
        {
          v10 = *(_BYTE **)(this + 12); /*0x54be77*/
          v11 = v10[116]; /*0x54be7e*/
          (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)v10 + 292))(v10, 0); /*0x54be81*/
          *(_BYTE *)(*(_DWORD *)(this + 12) + 116) = v11; /*0x54be8a*/
          *(_DWORD *)(this + 80) = 2; /*0x54be90*/
          return BuildingClass::GetType_Thunk(); /*0x54bea2*/
        }
        v25 = *(_DWORD *)(this + 12); /*0x54bea8*/
        if ( *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)v25 + 444))(v25) + 224) != v25 ) /*0x54bebc*/
          goto LABEL_19; /*0x54bebc*/
      }
      v12 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v25 + 444))(v25); /*0x54bec4*/
      CellClass::AttachObject(v12, 0); /*0x54becc*/
LABEL_19:
      *(_DWORD *)(this + 80) = 4; /*0x54bed1*/
      return BuildingClass::GetType_Thunk(); /*0x54bee6*/
    }
    v13 = *v6; /*0x54bee7*/
    v14 = v5[40]; /*0x54bee9*/
    v15 = v6[2]; /*0x54beec*/
    v27 = v13; /*0x54beef*/
    v29 = v15; /*0x54bef3*/
    v16 = *v3; /*0x54bef7*/
    v17 = v13 == *v3; /*0x54bef9*/
    v28 = v14; /*0x54befb*/
    v26 = v16; /*0x54beff*/
    if ( v17 && v14 == *(_DWORD *)(this + 68) ) /*0x54bf08*/
      LOWORD(v25) = 0; /*0x54bf0a*/
    v18 = Math::CalcAngle((double)v28 - (double)*(int *)(this + 68), (double)v26 - (double)v27); /*0x54bf2d*/
    LOWORD(v26) = Math::RoundToInt((v18 - 1.570796326794897) * -10430.06004058427); /*0x54bf46*/
    v25 = v26; /*0x54bf53*/
    FacingClass::Update((char *)(this + 84), &v25); /*0x54bf5b*/
    if ( !*(_DWORD *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 444))(*(_DWORD *)(this + 12)) + 224) ) /*0x54bf6b*/
    {
      v19 = *(_DWORD *)(this + 12); /*0x54bf75*/
      if ( *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)(v19 + 1376)) + 56) == v19 ) /*0x54bf91*/
      {
        v20 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)(v19 + 1376)); /*0x54bfa1*/
        CellClass::AttachObject(v20, 0); /*0x54bfa8*/
      }
    }
    v21 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 12) + 444))(*(_DWORD *)(this + 12), 0); /*0x54bfb4*/
    CellClass::AttachObject(v21, v24); /*0x54bfbc*/
    v22 = *(_BYTE **)(this + 12); /*0x54bfc1*/
    v23 = v22[116]; /*0x54bfc8*/
    result = (*(int (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)v22 + 292))(v22, 0); /*0x54bfcb*/
    *(_BYTE *)(*(_DWORD *)(this + 12) + 116) = v23; /*0x54bfd4*/
    *(_DWORD *)(this + 80) = 3; /*0x54bfd7*/
  }
  return result; /*0x54be34*/
}


// ==== 0x0054BFF0  MovementClass::CalcSpeed  this=MovementClass  sig=csp ====
int __thiscall MovementClass_CalcSpeed(int this)
{
  _DWORD *v2; // ecx
  int v3; // eax
  int v4; // ecx
  double v5; // st7
  unsigned int v6; // ebp
  int v7; // eax
  int v8; // ecx
  double v9; // st7
  int v10; // eax
  int v11; // edi
  int v12; // ebx
  _DWORD *v13; // edi
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  char v17; // bl
  int v18; // eax
  int *v19; // eax
  unsigned int v20; // ebx
  _DWORD *v21; // eax
  int v22; // ebp
  void *v23; // eax
  _DWORD *v24; // eax
  _BYTE *v25; // ecx
  char v26; // bl
  unsigned int v27; // ebx
  _DWORD *v28; // eax
  int v29; // ebp
  void *NeighbourContent; // eax
  _DWORD *v31; // eax
  _BYTE *v32; // ecx
  char v33; // bl
  int v34; // edi
  int v35; // edx
  int v36; // edx
  double v37; // st7
  int v38; // ecx
  double v39; // st7
  double v40; // st7
  _DWORD *v41; // eax
  int result; // eax
  int v43; // [esp+14h] [ebp-38h]
  char v44; // [esp+2Bh] [ebp-21h]
  int v45; // [esp+2Ch] [ebp-20h]
  _DWORD *v46; // [esp+2Ch] [ebp-20h]
  int v47; // [esp+30h] [ebp-1Ch] BYREF
  int v48; // [esp+34h] [ebp-18h] BYREF
  _DWORD v49[2]; // [esp+38h] [ebp-14h] BYREF
  int v50; // [esp+40h] [ebp-Ch] BYREF
  int v51; // [esp+44h] [ebp-8h]
  int v52; // [esp+48h] [ebp-4h]

  v2 = *(_DWORD **)(this + 12); /*0x54bfff*/
  v50 = v2[39]; /*0x54c00e*/
  v51 = v2[40]; /*0x54c015*/
  v52 = v2[41]; /*0x54c01c*/
  v3 = *(_DWORD *)(*(int (__thiscall **)(_DWORD *, _DWORD *))(*v2 + 440))(v2, v49); /*0x54c02d*/
  v4 = *(_DWORD *)(this + 12); /*0x54c02f*/
  v47 = v3; /*0x54c032*/
  if ( v3 != *(_DWORD *)(v4 + 1376) ) /*0x54c03d*/
    Coord::ToGridIndex((char *)MEMORY[0x887888], v4, *(_DWORD *)(v4 + 1376), v3); /*0x54c05b*/
  v45 = *(_DWORD *)(this + 64); /*0x54c069*/
  if ( v50 == v45 && v51 == *(_DWORD *)(this + 68) ) /*0x54c078*/
    LOWORD(v48) = 0; /*0x54c07a*/
  v5 = Math::CalcAngle((double)v51 - (double)*(int *)(this + 68), (double)v45 - (double)v50); /*0x54c09d*/
  LOWORD(v48) = Math::RoundToInt((v5 - 1.570796326794897) * -10430.06004058427); /*0x54c0b6*/
  FacingClass::Update((char *)(this + 84), &v48); /*0x54c0cd*/
  v6 = *(_DWORD *)MovementClass::CompareAbsCoords(v49); /*0x54c0e1*/
  v7 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(*(_DWORD *)(this + 12)); /*0x54c0e5*/
  v8 = *(_DWORD *)(this + 68); /*0x54c0f5*/
  v44 = *(_BYTE *)(v7 + 3434); /*0x54c0f8*/
  v49[0] = v50 - *(_DWORD *)(this + 64); /*0x54c10a*/
  v49[1] = v51 - v8; /*0x54c10e*/
  v9 = Math::Sqrt((double)v49[0] * (double)v49[0] + (double)(v51 - v8) * (double)(v51 - v8)); /*0x54c12b*/
  v10 = Math::RoundToInt(v9); /*0x54c133*/
  v11 = *(_DWORD *)(this + 12); /*0x54c138*/
  v12 = v10; /*0x54c13f*/
  if ( v11 )
  {
    v46 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v11 + 44))(*(_DWORD *)(this + 12)) == 1 ? (_DWORD *)v11 : 0;
    v13 = v46; /*0x54c161*/
  }
  else
  {
    v13 = 0; /*0x54c143*/
    v46 = 0; /*0x54c145*/
  }
  if ( v12 >= 20 ) /*0x54c166*/
  {
    v49[0] = *(_DWORD *)(this + 32); /*0x54c387*/
    v34 = v49[0]; /*0x54c382*/
    if ( v12 >= v49[0] ) /*0x54c38b*/
    {
      if ( v12 >= 2 * v49[0] ) /*0x54c3ca*/
      {
        if ( v12 >= 50 * v49[0] / *(_DWORD *)(this + 28) ) /*0x54c462*/
        {
          v40 = (double)v49[0]; /*0x54c4e9*/
          *(_DWORD *)(this + 128) = *(_DWORD *)(this + 44); /*0x54c4f0*/
          *(double *)(this + 120) = v40; /*0x54c4f6*/
        }
        else
        {
          v38 = *(_DWORD *)(this + 12); /*0x54c46a*/
          v49[0] /= 2; /*0x54c472*/
          *(double *)(this + 120) = (double)(v34 / 2); /*0x54c47a*/
          if ( !*(_DWORD *)(v38 + 692) ) /*0x54c47d*/
            *(_DWORD *)(this + 128) = Math::RoundToInt((double)*(int *)(this + 44) * 0.75); /*0x54c495*/
          if ( (unsigned __int8)(((v6 >> 7) + 1) >> 1) > 5 * *(_DWORD *)(this + 28) ) /*0x54c4af*/
          {
            v49[0] = v34 / 5; /*0x54c4c1*/
            v39 = (double)(v34 / 5); /*0x54c4c5*/
            *(double *)(this + 120) = v39; /*0x54c4c9*/
            if ( v39 < 1.0 ) /*0x54c4d7*/
            {
              *(_DWORD *)(this + 120) = 0; /*0x54c4d9*/
              *(_DWORD *)(this + 124) = 1072693248; /*0x54c4e0*/
            }
          }
        }
      }
      else
      {
        v36 = *(_DWORD *)(this + 12); /*0x54c3d8*/
        v49[0] /= 4; /*0x54c3de*/
        *(double *)(this + 120) = (double)(v34 / 4); /*0x54c3e6*/
        if ( !*(_DWORD *)(v36 + 692) ) /*0x54c3e9*/
          *(_DWORD *)(this + 128) = *(_DWORD *)(this + 44) / 2; /*0x54c3f9*/
        if ( (unsigned __int8)(((v6 >> 7) + 1) >> 1) > *(int *)(this + 28) ) /*0x54c410*/
        {
          v49[0] = v34 / 10; /*0x54c427*/
          v37 = (double)(v34 / 10); /*0x54c42b*/
          *(double *)(this + 120) = v37; /*0x54c42f*/
          if ( v37 < 1.0 ) /*0x54c43d*/
          {
            *(_DWORD *)(this + 120) = 0; /*0x54c443*/
            *(_DWORD *)(this + 124) = 1072693248; /*0x54c446*/
          }
        }
      }
    }
    else
    {
      v35 = *(_DWORD *)(this + 12); /*0x54c395*/
      v49[0] /= 8; /*0x54c39b*/
      *(double *)(this + 120) = (double)(v34 / 8); /*0x54c3a3*/
      if ( !*(_DWORD *)(v35 + 692) ) /*0x54c3a6*/
        *(_DWORD *)(this + 128) = *(_DWORD *)(this + 44) / 2; /*0x54c3ba*/
    }
    v13 = v46; /*0x54c4f9*/
  }
  else
  {
    v14 = *(_DWORD *)(this + 64); /*0x54c16c*/
    *(_DWORD *)(this + 112) = 0; /*0x54c16f*/
    *(_DWORD *)(this + 120) = 0; /*0x54c172*/
    *(_DWORD *)(this + 116) = 0; /*0x54c175*/
    *(_DWORD *)(this + 124) = 0; /*0x54c178*/
    v15 = *(_DWORD *)(this + 68); /*0x54c17b*/
    v50 = v14; /*0x54c17e*/
    v16 = *(_DWORD *)(this + 12); /*0x54c182*/
    v51 = v15; /*0x54c185*/
    v17 = *(_BYTE *)(v16 + 116); /*0x54c189*/
    *(_BYTE *)(v16 + 116) = 0; /*0x54c18c*/
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(this + 12) + 436))(*(_DWORD *)(this + 12), &v50); /*0x54c19a*/
    *(_BYTE *)(*(_DWORD *)(this + 12) + 116) = v17; /*0x54c1a3*/
    v18 = *(_DWORD *)(this + 12); /*0x54c1a6*/
    if ( *(_BYTE *)(v18 + 1709) ) /*0x54c1a9*/
    {
      *(_DWORD *)(this + 128) = 0; /*0x54c1b3*/
      v19 = *(int **)(v18 + 688); /*0x54c1bd*/
      if ( v19 ) /*0x54c1c5*/
        TechnoClass::EjectPassengers(v19, 1); /*0x54c1cb*/
      *(_DWORD *)(this + 80) = 4; /*0x54c1d0*/
    }
    else if ( *(_DWORD *)(v18 + 692) || v44 ) /*0x54c1f0*/
    {
      if ( ObjectClass::HasLinkedObject(*(_DWORD *)(this + 12)) ) /*0x54c300*/
      {
        v27 = Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 7); /*0x54c328*/
        v28 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v47); /*0x54c32a*/
        v29 = **(_DWORD **)(this + 12); /*0x54c335*/
        NeighbourContent = Cell::GetNeighbourContent(v28, v27); /*0x54c339*/
        (*(void (__thiscall **)(_DWORD, void *, int))(v29 + 1152))(*(_DWORD *)(this + 12), NeighbourContent, 1); /*0x54c342*/
      }
      else
      {
        v31 = (_DWORD *)(*(int (__stdcall **)(_DWORD))(**(_DWORD **)(this + 12) + 444))(*(_DWORD *)(this + 12)); /*0x54c353*/
        CellClass::AttachObject(v31, v43); /*0x54c35b*/
        v32 = *(_BYTE **)(this + 12); /*0x54c360*/
        v33 = v32[116]; /*0x54c367*/
        (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)v32 + 292))(v32, 0); /*0x54c36a*/
        *(_BYTE *)(*(_DWORD *)(this + 12) + 116) = v33; /*0x54c373*/
        *(_DWORD *)(this + 80) = 2; /*0x54c376*/
      }
    }
    else if ( v13 /*0x54c22d*/
           && *(_BYTE *)(v13[433] + 3603)
           && *(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*v13 + 132))(v13) + 1709)
           && !*(_BYTE *)(*(_DWORD *)(this + 12) + 1709) )
    {
      if ( ObjectClass::HasLinkedObject(*(_DWORD *)(this + 12)) ) /*0x54c241*/
      {
        v20 = Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 7); /*0x54c269*/
        v21 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v47); /*0x54c26b*/
        v22 = **(_DWORD **)(this + 12); /*0x54c276*/
        v23 = Cell::GetNeighbourContent(v21, v20); /*0x54c27a*/
        (*(void (__thiscall **)(_DWORD, void *, int))(v22 + 1152))(*(_DWORD *)(this + 12), v23, 1); /*0x54c283*/
        BuildingClass::GetType_Thunk(); /*0x54c28c*/
      }
      else
      {
        v24 = (_DWORD *)(*(int (__stdcall **)(_DWORD))(**(_DWORD **)(this + 12) + 444))(*(_DWORD *)(this + 12)); /*0x54c29c*/
        CellClass::AttachObject(v24, v43); /*0x54c2a4*/
        v25 = *(_BYTE **)(this + 12); /*0x54c2ac*/
        *(_DWORD *)(this + 128) = *(_DWORD *)(this + 44); /*0x54c2af*/
        v26 = v25[116]; /*0x54c2b9*/
        (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)v25 + 292))(v25, 0); /*0x54c2bc*/
        *(_BYTE *)(*(_DWORD *)(this + 12) + 116) = v26; /*0x54c2c5*/
        *(_DWORD *)(this + 80) = 2; /*0x54c2cb*/
        BuildingClass::GetType_Thunk(); /*0x54c2d2*/
      }
    }
    else
    {
      *(_DWORD *)(this + 128) = 0; /*0x54c2df*/
      *(_DWORD *)(this + 80) = 4; /*0x54c2e9*/
      BuildingClass::GetType_Thunk(); /*0x54c2f0*/
    }
  }
  v41 = Coord::To_Cell(&MEMORY[0x87F7E8], (_DWORD *)(this + 64)); /*0x54c506*/
  if ( v44 /*0x54c531*/
    || (result = v41[59], result == 2)
    || result == 6
    || v13 && (result = (*(int (__thiscall **)(_DWORD *))(*v13 + 132))(v13), *(_BYTE *)(result + 1709)) )
  {
    result = *(_DWORD *)(this + 44); /*0x54c53b*/
    *(_DWORD *)(this + 128) = result; /*0x54c53e*/
  }
  return result; /*0x54c544*/
}


// ==== 0x0054C550  BuildingPlacement::ProcessBuildingPlacementAction  this=BuildingPlacement  sig=csp ====
char __thiscall BuildingPlacementClass::ProcessAction(int this)
{
  _DWORD *v2; // ebp
  _DWORD *v3; // eax
  int v4; // ecx
  _DWORD *v5; // edi
  int v6; // eax
  unsigned int v7; // edi
  _DWORD *v8; // eax
  int v9; // ebx
  void *NeighbourContent; // eax
  _BYTE *v11; // ecx
  char *v12; // eax
  _DWORD *v13; // eax
  _BYTE *v14; // ecx
  char v15; // bl
  int v16; // edx
  int v17; // eax
  int v18; // ebx
  _DWORD *v19; // ecx
  int v20; // ecx
  _DWORD *v21; // edi
  int DeployDir; // ebx
  _DWORD *Value; // eax
  __int16 v24; // cx
  __int16 v25; // dx
  int v26; // ecx
  int v27; // edi
  int *v28; // eax
  _BYTE *v29; // ecx
  int *v30; // eax
  int v31; // edi
  int *v32; // edx
  int v33; // ecx
  _BYTE *v34; // ecx
  _BYTE *v35; // ecx
  int v36; // eax
  int v37; // edi
  _DWORD *v38; // eax
  int v39; // ecx
  _DWORD *v40; // eax
  int v41; // ecx
  int v42; // edi
  int v43; // eax
  int v45; // [esp+44h] [ebp-28h]
  int v46; // [esp+48h] [ebp-24h]
  char v47; // [esp+5Bh] [ebp-11h]
  int v48; // [esp+5Ch] [ebp-10h] BYREF
  int v49; // [esp+60h] [ebp-Ch] BYREF
  int v50; // [esp+64h] [ebp-8h]
  int v51; // [esp+68h] [ebp-4h]

  v2 = (_DWORD *)(this + 64); /*0x54c55e*/
  v3 = Coord::To_Cell(&MEMORY[0x87F7E8], (_DWORD *)(this + 64)); /*0x54c562*/
  v4 = *(_DWORD *)(this + 12); /*0x54c567*/
  v5 = v3; /*0x54c56a*/
  if ( !*(_BYTE *)(v4 + 1709) ) /*0x54c56c*/
  {
    v6 = v3[59]; /*0x54c57a*/
    if ( (v6 == 2 || v6 == 6) /*0x54c5a6*/
      && *(_DWORD *)(v4 + 180) != 7
      && (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 388))(v4) != 7 )
    {
      if ( ObjectClass::HasLinkedObject(*(_DWORD *)(this + 12)) ) /*0x54c5b5*/
      {
        v7 = Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 7); /*0x54c5d6*/
        v8 = (_DWORD *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 444))(*(_DWORD *)(this + 12)); /*0x54c5da*/
        v9 = **(_DWORD **)(this + 12); /*0x54c5e6*/
        NeighbourContent = Cell::GetNeighbourContent(v8, v7); /*0x54c5ea*/
        (*(void (__thiscall **)(_DWORD, void *, int))(v9 + 1152))(*(_DWORD *)(this + 12), NeighbourContent, 1); /*0x54c5f3*/
        v11 = *(_BYTE **)(this + 12); /*0x54c5f9*/
        LOBYTE(v9) = v11[116]; /*0x54c600*/
        (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)v11 + 292))(v11, 0); /*0x54c603*/
        v12 = *(char **)(this + 12); /*0x54c609*/
        v12[116] = v9; /*0x54c60d*/
        *(_DWORD *)(this + 80) = 3; /*0x54c610*/
      }
      else
      {
        v13 = (_DWORD *)(*(int (__stdcall **)(_DWORD))(**(_DWORD **)(this + 12) + 444))(*(_DWORD *)(this + 12)); /*0x54c624*/
        CellClass::AttachObject(v13, v46); /*0x54c62c*/
        v14 = *(_BYTE **)(this + 12); /*0x54c631*/
        v15 = v14[116]; /*0x54c638*/
        LOBYTE(v12) = (*(int (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)v14 + 292))(v14, 0); /*0x54c63b*/
        *(_BYTE *)(*(_DWORD *)(this + 12) + 116) = v15; /*0x54c645*/
        v16 = *(_DWORD *)(this + 44); /*0x54c648*/
        *(_DWORD *)(this + 80) = 2; /*0x54c64b*/
        *(_DWORD *)(this + 128) = v16; /*0x54c652*/
      }
      return (char)v12; /*0x54c61d*/
    }
    v48 = (*(int (__thiscall **)(_DWORD, _DWORD *, int, int, _DWORD, int))(**(_DWORD **)(this + 12) + 428))( /*0x54c675*/
            *(_DWORD *)(this + 12),
            v5,
            -1,
            -1,
            0,
            1);
    LOBYTE(v17) = Input::OffsetToDirection((_DWORD *)(this + 64)); /*0x54c679*/
    v18 = v17; /*0x54c684*/
    if ( (unsigned __int8)BuildingPlacement::IsPlacementFlagSet(v17, BYTE1(v5[80]) & 1) /*0x54c699*/
      || (v47 = 0, *(_BYTE *)(this + 144)) )
    {
      v47 = 1; /*0x54c6a8*/
    }
    if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 44))(*(_DWORD *)(this + 12)) == 1 && !v18 ) /*0x54c6bc*/
      v47 = 1; /*0x54c6be*/
    v19 = *(_DWORD **)(this + 12); /*0x54c6c2*/
    if ( v19[45] != 7 && (*(int (__thiscall **)(_DWORD *))(*v19 + 388))(v19) != 7 ) /*0x54c6d9*/
    {
      if ( !v47 /*0x54c70c*/
        || (*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], (_DWORD *)(this + 64)) + 80) & 0x100) == 0
        && (v48 > 2 || v48 == 2 && !*(_BYTE *)(this + 144)) )
      {
        LOBYTE(v12) = (*(int (__stdcall **)(int))(*(_DWORD *)(this + 4) + 72))(this + 4); /*0x54ca43*/
        return (char)v12; /*0x54ca4d*/
      }
      if ( !*(_BYTE *)(this + 144) ) /*0x54c71a*/
      {
        v20 = *(_DWORD *)(this + 12); /*0x54c724*/
        *(_BYTE *)(this + 144) = 1; /*0x54c727*/
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v20 + 240))(v20, this + 64); /*0x54c731*/
      }
    }
  }
  v21 = *(_DWORD **)(this + 12); /*0x54c737*/
  if ( v21 ) /*0x54c73c*/
  {
    if ( (*(int (__thiscall **)(_DWORD))(*v21 + 44))(*(_DWORD *)(this + 12)) == 1 ) /*0x54c748*/
    {
      if ( *(_BYTE *)(v21[433] + 3603) ) /*0x54c750*/
      {
        if ( !*(_BYTE *)(*(_DWORD *)(this + 12) + 1709) ) /*0x54c75d*/
        {
          DeployDir = MEMORY[0x8871E0]->DeployDir; /*0x54c776*/
          Value = ProgressTimer::GetValue((_WORD *)(this + 84), &v48); /*0x54c77a*/
          LOBYTE(v24) = 0; /*0x54c77f*/
          HIBYTE(v24) = DeployDir; /*0x54c781*/
          if ( *(_WORD *)Value != v24 ) /*0x54c786*/
          {
            LOBYTE(v25) = 0; /*0x54c78d*/
            HIBYTE(v25) = MEMORY[0x8871E0]->DeployDir; /*0x54c793*/
            LOWORD(v48) = v25; /*0x54c799*/
            FacingClass::Update((char *)(this + 84), &v48); /*0x54c79e*/
          }
        }
      }
    }
  }
  v26 = *(_DWORD *)(this + 12); /*0x54c7a3*/
  *(_DWORD *)(this + 128) = 0; /*0x54c7a6*/
  v27 = (*(int (__thiscall **)(int))(*(_DWORD *)v26 + 456))(v26); /*0x54c7b8*/
  v12 = *(char **)(this + 12); /*0x54c7ba*/
  if ( !v12[140] ) /*0x54c7bd*/
  {
    v28 = (int *)(v12 + 156); /*0x54c7c7*/
    v49 = *v28; /*0x54c7ce*/
    v50 = v28[1]; /*0x54c7da*/
    v51 = v28[2]; /*0x54c7e6*/
    v12 = (char *)Coord::To_Cell(&MEMORY[0x87F7E8], &v49); /*0x54c7ea*/
    if ( (*((_DWORD *)v12 + 80) & 0x100) != 0 ) /*0x54c7f8*/
    {
      LOBYTE(v12) = dword_ABC5DC; /*0x54c7fa*/
      if ( v27 >= dword_ABC5DC ) /*0x54c801*/
        v27 -= dword_ABC5DC; /*0x54c803*/
    }
  }
  if ( !v27 )
  {
    (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 12) + 1348))(*(_DWORD *)(this + 12), 0, 0); /*0x54c814*/
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 12) + 292))(*(_DWORD *)(this + 12), 0); /*0x54c820*/
    v29 = *(_BYTE **)(this + 12); /*0x54c826*/
    if ( !v29[1709] ) /*0x54c829*/
      (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)v29 + 436))(v29, this + 64); /*0x54c836*/
    v30 = (int *)(*(_DWORD *)(this + 12) + 156); /*0x54c83f*/
    v49 = *v30; /*0x54c848*/
    v50 = v30[1]; /*0x54c84f*/
    v31 = v30[2]; /*0x54c853*/
    v49 = *v30; /*0x54c858*/
    v50 = v30[1]; /*0x54c863*/
    v51 = v30[2]; /*0x54c870*/
    if ( v31 > Cell::GetGroundHeight(&v49) ) /*0x54c87b*/
    {
      v32 = (int *)(*(_DWORD *)(this + 12) + 156); /*0x54c880*/
      v49 = *v32; /*0x54c888*/
      v50 = v32[1]; /*0x54c894*/
      v51 = v32[2]; /*0x54c8a0*/
      if ( (*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], &v49) + 80) & 0x100) != 0 ) /*0x54c8b2*/
        *(_BYTE *)(*(_DWORD *)(this + 12) + 140) = 1; /*0x54c8b7*/
    }
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 12) + 292))(*(_DWORD *)(this + 12), 1); /*0x54c8c5*/
    *v2 = dword_ABC5A8; /*0x54c8d2*/
    *(_DWORD *)(this + 68) = dword_ABC5AC; /*0x54c8db*/
    v33 = *(_DWORD *)(this + 12); /*0x54c8e4*/
    *(_DWORD *)(this + 72) = dword_ABC5B0; /*0x54c8e7*/
    *(_BYTE *)(this + 76) = 0; /*0x54c8ea*/
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v33 + 396))(v33, 2); /*0x54c8f0*/
    (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 12) + 1152))(*(_DWORD *)(this + 12), 0, 1); /*0x54c8ff*/
    v34 = *(_BYTE **)(this + 12); /*0x54c905*/
    LOBYTE(v12) = v34[144]; /*0x54c908*/
    if ( (_BYTE)v12 )
    {
      LOBYTE(v12) = v34[129]; /*0x54c916*/
      if ( !(_BYTE)v12 )
      {
        LOBYTE(v12) = v34[141]; /*0x54c924*/
        if ( !(_BYTE)v12 )
        {
          (*(void (__thiscall **)(_BYTE *, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v34 + 1164))(v34, 0, 0, 0, 0); /*0x54c93c*/
          v35 = *(_BYTE **)(this + 12); /*0x54c942*/
          if ( v35[144] ) /*0x54c945*/
            (*(void (__thiscall **)(_BYTE *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v35 + 1160))( /*0x54c95b*/
              v35,
              0,
              0,
              0,
              0,
              0);
          v36 = *(_DWORD *)(this + 12); /*0x54c961*/
          if ( *(_BYTE *)(v36 + 144) ) /*0x54c964*/
          {
            v49 = *(_DWORD *)(v36 + 156); /*0x54c978*/
            v50 = *(_DWORD *)(v36 + 160); /*0x54c97f*/
            v51 = *(_DWORD *)(v36 + 164); /*0x54c986*/
            MapClass::RevealArea2(&v49, *(_DWORD *)(v36 + 608) - 3, *(_DWORD *)(v36 + 608) + 3, 0); /*0x54c9a2*/
          }
          v48 = *(_DWORD *)(this + 12); /*0x54c9ac*/
          v37 = v48; /*0x54c9aa*/
          if ( *(_DWORD *)((*(int (**)(void))(*(_DWORD *)v48 + 444))() + 224) == v37 ) /*0x54c9be*/
          {
            v38 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v37 + 444))(v37); /*0x54c9c6*/
            CellClass::AttachObject(v38, 0); /*0x54c9ce*/
          }
          GadgetGrid::RemoveItem(MEMORY[0x887888], *(_DWORD *)(this + 12)); /*0x54c9dc*/
          v39 = *(_DWORD *)(this + 12); /*0x54c9e1*/
          *(_DWORD *)(this + 80) = 0; /*0x54c9e4*/
          v45 = v39; /*0x54c9eb*/
          v40 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v39 + 444))(v39); /*0x54c9ee*/
          CrateClass::ProcessPickup(v40, v45); /*0x54c9f6*/
          v12 = *(char **)(this + 12); /*0x54c9fb*/
          v12[1710] = 1; /*0x54c9fe*/
          *(_BYTE *)(*(_DWORD *)(this + 12) + 1063) = 0; /*0x54ca08*/
          *(_BYTE *)(*(_DWORD *)(this + 12) + 1061) = 0; /*0x54ca12*/
          v41 = *(_DWORD *)(this + 12); /*0x54ca19*/
          *(_BYTE *)(this + 144) = 0; /*0x54ca1e*/
          if ( v41 )
          {
            v12 = (char *)(*(int (__thiscall **)(int))(*(_DWORD *)v41 + 44))(v41); /*0x54ca29*/
            if ( v12 == (char *)1 )
            {
              v42 = *(_DWORD *)(this + 12); /*0x54ca31*/
              if ( v42 )
                v43 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v42 + 44))(*(_DWORD *)(this + 12)) == 1 ? v42 : 0;
              else
                v43 = 0; /*0x54ca38*/
              v12 = (char *)(*(int (__thiscall **)(int))(*(_DWORD *)v43 + 132))(v43); /*0x54ca62*/
              if ( v12[1709] ) /*0x54ca68*/
              {
                v12 = *(char **)(this + 12); /*0x54ca72*/
                v12[308] = 0; /*0x54ca75*/
              }
            }
          }
        }
      }
    }
  }
  return (char)v12; /*0x54c60c*/
}


// ==== 0x0054CA90  JumpjetLocomotion::Land  this=JumpjetLocomotion  sig=csp ====
char __thiscall JumpjetLocomotion_Land(int this)
{
  int v2; // ecx
  int v3; // ebp
  char v4; // al
  double v5; // st7
  double v6; // st7
  int v7; // eax
  double v8; // st7
  int v9; // esi
  _BYTE *v10; // ecx
  _DWORD *v11; // eax
  _DWORD *v12; // esi
  _DWORD *v13; // ebp
  int *v14; // eax
  int v15; // edx
  int v16; // eax
  int v17; // eax
  int v18; // ecx
  int v19; // edx
  int v20; // eax
  int v21; // ecx
  int *v22; // ecx
  _DWORD *v23; // esi
  int v24; // eax
  bool v25; // bl
  int v26; // eax
  int v27; // ecx
  int v28; // ebp
  int v29; // eax
  _DWORD *v30; // ecx
  int v31; // ecx
  _DWORD *v32; // ecx
  int v33; // eax
  int v34; // esi
  _DWORD *v35; // eax
  int v36; // ecx
  int v37; // ecx
  int v38; // eax
  int v39; // eax
  int v40; // esi
  _DWORD *v41; // eax
  int v42; // ecx
  char v44; // [esp+32h] [ebp-24h]
  char v45; // [esp+33h] [ebp-23h]
  char v46; // [esp+34h] [ebp-22h]
  char v47; // [esp+35h] [ebp-21h]
  int v48; // [esp+36h] [ebp-20h] BYREF
  int v49; // [esp+3Ah] [ebp-1Ch] BYREF
  int v50; // [esp+3Eh] [ebp-18h] BYREF
  int v51; // [esp+42h] [ebp-14h]
  int v52; // [esp+46h] [ebp-10h]
  int v53; // [esp+4Ah] [ebp-Ch] BYREF
  int v54; // [esp+4Eh] [ebp-8h]
  int v55; // [esp+52h] [ebp-4h]

  v2 = *(_DWORD *)(this + 12); /*0x54ca99*/
  v50 = *(_DWORD *)(v2 + 156); /*0x54caa6*/
  v51 = *(_DWORD *)(v2 + 160); /*0x54caad*/
  v52 = *(_DWORD *)(v2 + 164); /*0x54cab4*/
  v3 = *(_DWORD *)(v2 + 164); /*0x54caba*/
  v53 = *(_DWORD *)(v2 + 156); /*0x54cabd*/
  v4 = *(_BYTE *)(v2 + 1709); /*0x54cac4*/
  v54 = *(_DWORD *)(v2 + 160); /*0x54cacc*/
  if ( v4 ) /*0x54cad0*/
  {
    v5 = (double)v52; /*0x54cad2*/
    *(_DWORD *)(this + 112) = 0; /*0x54cad8*/
    *(_DWORD *)(this + 120) = 0; /*0x54cadb*/
    v6 = v5 - *(float *)(this + 40); /*0x54cade*/
    *(_DWORD *)(this + 116) = 0; /*0x54cae1*/
    *(_DWORD *)(this + 124) = 0; /*0x54cae4*/
    v7 = Math::RoundToInt(v6); /*0x54cae7*/
    v8 = *(float *)(this + 40) + 1.0; /*0x54caef*/
    v52 = v7; /*0x54caf5*/
    *(float *)(this + 40) = v8; /*0x54caf9*/
  }
  else
  {
    v52 = Math::RoundToInt((double)v52 - *(float *)(this + 40)); /*0x54cb0a*/
    LOWORD(v48) = *(_WORD *)ProgressTimer::GetValue((_WORD *)(this + 84), &v49) + 11520; /*0x54cb2a*/
    FacingClass::Update((char *)(this + 84), &v48); /*0x54cb39*/
  }
  v9 = dword_ABC5DC + Cell::GetGroundHeight(&v50); /*0x54cb5e*/
  if ( (*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], &v50) + 80) & 0x100) == 0 || v3 < v9 || (v44 = 1, v52 >= v9) ) /*0x54cb7f*/
    v44 = 0; /*0x54cb81*/
  LOWORD(v48) = v50 / 256; /*0x54cba0*/
  HIWORD(v48) = v51 / 256; /*0x54cbb5*/
  if ( LayerClass::CoordinatesLegal(&MEMORY[0x87F7E8], (__int16 *)&v48) ) /*0x54cbc2*/
  {
    RemoveTarget(*(_DWORD *)(this + 12)); /*0x54cbd4*/
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 12) + 292))(*(_DWORD *)(this + 12), 0); /*0x54cbe1*/
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(this + 12) + 436))(*(_DWORD *)(this + 12), &v50); /*0x54cbf1*/
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 12) + 292))(*(_DWORD *)(this + 12), 1); /*0x54cbfe*/
    Targeting::Readd(*(_DWORD **)(this + 12)); /*0x54cc0d*/
  }
  v45 = 0; /*0x54cc19*/
  if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 456))(*(_DWORD *)(this + 12)) > 0 && !v44 ) /*0x54cc30*/
    goto LABEL_74; /*0x54cc30*/
  v10 = *(_BYTE **)(this + 12); /*0x54cc36*/
  if ( !v10[1063] ) /*0x54cc39*/
    goto LABEL_74; /*0x54cc41*/
  v46 = 0; /*0x54cc4e*/
  v11 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, int *))(*(_DWORD *)v10 + 72))(v10, &v53); /*0x54cc53*/
  LOWORD(v48) = *v11 / 256; /*0x54cc66*/
  HIWORD(v48) = v11[1] / 256; /*0x54cc7f*/
  v49 = v48; /*0x54cc8d*/
  v12 = (_DWORD *)*((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v49) + 57); /*0x54cc96*/
  if ( v12 == *(_DWORD **)(this + 12) ) /*0x54cca1*/
    v12 = (_DWORD *)v12[12]; /*0x54cca3*/
  if ( v12 ) /*0x54cca8*/
  {
    if ( (*(int (__thiscall **)(_DWORD *))(*v12 + 44))(v12) == 1 /*0x54ccc8*/
      || (*(int (__thiscall **)(_DWORD *))(*v12 + 44))(v12) == 6 )
    {
      goto LABEL_64; /*0x54ccc8*/
    }
    if ( (*(int (__thiscall **)(_DWORD *))(*v12 + 44))(v12) == 15 ) /*0x54ccd8*/
    {
      do /*0x54cd78*/
      {
        v13 = (_DWORD *)v12[12]; /*0x54cce1*/
        v14 = (int *)(*(_DWORD *)(this + 12) + 156); /*0x54cce4*/
        v53 = *v14; /*0x54ccf0*/
        v54 = v14[1]; /*0x54ccf9*/
        v15 = *v12; /*0x54ccfd*/
        v55 = v14[2]; /*0x54cd02*/
        v16 = (*(int (__thiscall **)(_DWORD *))(v15 + 136))(v12); /*0x54cd06*/
        StartAudioControllerAt(*(_DWORD *)(v16 + 496), (int)&v53, 0); /*0x54cd14*/
        v17 = *(_DWORD *)(this + 12); /*0x54cd19*/
        v18 = *(_DWORD *)(v17 + 1064); /*0x54cd1e*/
        if ( v18 ) /*0x54cd26*/
        {
          (*(void (__thiscall **)(_DWORD *, int))(*v12 + 224))(v12, v18); /*0x54cd2d*/
        }
        else
        {
          v19 = *v12; /*0x54cd3b*/
          if ( *(_DWORD *)(v17 + 1068) ) /*0x54cd35*/
            (*(void (__thiscall **)(_DWORD *, _DWORD))(v19 + 228))(v12, *(_DWORD *)(v17 + 1068)); /*0x54cd44*/
          else
            (*(void (__thiscall **)(_DWORD *, _DWORD))(v19 + 224))(v12, *(_DWORD *)(this + 12)); /*0x54cd4f*/
        }
        (*(void (__thiscall **)(_DWORD *, _DWORD))(*v12 + 292))(v12, 0); /*0x54cd5a*/
        (*(void (__thiscall **)(_DWORD *))(*v12 + 212))(v12); /*0x54cd64*/
        (*(void (__thiscall **)(_DWORD *))(*v12 + 248))(v12); /*0x54cd6e*/
        v12 = v13; /*0x54cd76*/
      }
      while ( v13 ); /*0x54cd78*/
    }
    else
    {
      v20 = *(_DWORD *)(this + 12); /*0x54cd80*/
      v21 = *(_DWORD *)(v20 + 1064); /*0x54cd83*/
      if ( v21 ) /*0x54cd8b*/
      {
        (*(void (__thiscall **)(_DWORD *, _DWORD *, _DWORD, int, int, int, _DWORD, _DWORD))(*v12 + 364))( /*0x54cd94*/
          v12,
          v12 + 27,
          0,
          MEMORY[0x8871E0]->?[6],
          v21,
          1,
          0,
          0);
      }
      else if ( *(_DWORD *)(v20 + 1068) ) /*0x54cd96*/
      {
        (*(void (__thiscall **)(_DWORD *, _DWORD *, _DWORD, int, int, int, _DWORD, _DWORD))(*v12 + 364))( /*0x54cda3*/
          v12,
          v12 + 27,
          0,
          MEMORY[0x8871E0]->?[6],
          v20,
          1,
          0,
          *(_DWORD *)(v20 + 1068));
      }
      else
      {
        (*(void (__thiscall **)(_DWORD *, _DWORD *, _DWORD, int, int, int, _DWORD, _DWORD))(*v12 + 364))( /*0x54cdbd*/
          v12,
          v12 + 27,
          0,
          MEMORY[0x8871E0]->?[6],
          v20,
          1,
          0,
          0);
      }
    }
  }
  v46 = 1; /*0x54cdc6*/
  v22 = (int *)(*(_DWORD *)(this + 12) + 156); /*0x54cdcb*/
  v53 = *v22; /*0x54cdd3*/
  v54 = v22[1]; /*0x54cddf*/
  v55 = v22[2]; /*0x54cde6*/
  v23 = Coord::To_Cell(&MEMORY[0x87F7E8], &v53); /*0x54cdf4*/
  v24 = v23[59]; /*0x54cdf6*/
  if ( v24 != 2 || (v47 = 1, v44) ) /*0x54ce0c*/
    v47 = 0; /*0x54ce0e*/
  v25 = v24 == 6 && !v44; /*0x54ce24*/
  v26 = (*(int (__thiscall **)(_DWORD, _DWORD *, int, int, _DWORD, int))(**(_DWORD **)(this + 12) + 428))( /*0x54ce34*/
          *(_DWORD *)(this + 12),
          v23,
          -1,
          -1,
          0,
          1);
  v27 = *(_DWORD *)(this + 12); /*0x54ce3a*/
  v28 = v26; /*0x54ce3d*/
  if ( v27 /*0x54ce5c*/
    && (*(int (__thiscall **)(int))(*(_DWORD *)v27 + 44))(v27) == 2
    && !Cell::IsBuildable((int)v23, 2, 1, 1, -1, 0, -1, 1) )
  {
    v28 = 7; /*0x54ce65*/
  }
  if ( *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(*(_DWORD *)(this + 12)) + 3476) /*0x54ce9a*/
    && !Cell::IsBuildable((int)v23, 2, 1, 1, -1, 0, -1, 1)
    || v28 )
  {
    if ( v47 && !v25 ) /*0x54ceae*/
    {
      *(_BYTE *)(*(_DWORD *)(this + 12) + 973) = 1; /*0x54ceb7*/
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 928))(*(_DWORD *)(this + 12)); /*0x54cec3*/
      v29 = *(_DWORD *)(this + 12); /*0x54cec9*/
      v30 = *(_DWORD **)(v29 + 728); /*0x54cecc*/
      if ( v30 ) /*0x54ced4*/
      {
        TechnoClass::MutateAll(v30, *(_DWORD *)(v29 + 1064), 0); /*0x54cedf*/
        v31 = *(_DWORD *)(*(_DWORD *)(this + 12) + 728); /*0x54cee7*/
        if ( v31 ) /*0x54ceef*/
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v31 + 32))(v31, 1); /*0x54cef5*/
        *(_DWORD *)(*(_DWORD *)(this + 12) + 728) = 0; /*0x54cefb*/
      }
      v32 = *(_DWORD **)(this + 12); /*0x54cf05*/
      if ( v32[266] ) /*0x54cf08*/
      {
        (*(void (__thiscall **)(_DWORD *, _DWORD))(*v32 + 224))(v32, v32[266]); /*0x54cf15*/
      }
      else if ( v32[267] ) /*0x54cf20*/
      {
        (*(void (__thiscall **)(_DWORD *, _DWORD))(*v32 + 228))(v32, v32[267]); /*0x54cf31*/
      }
      goto LABEL_65; /*0x54cf1b*/
    }
  }
  else
  {
    v33 = *(_DWORD *)(this + 12); /*0x54cf3c*/
    if ( *(_DWORD *)(v33 + 1400) /*0x54cf75*/
      || *(_DWORD *)(v33 + 1404) != 1075052544 && (*(_DWORD *)(v33 + 1400) || *(_DWORD *)(v33 + 1404) != 1075576832)
      || v47 && !v25 )
    {
      v34 = *(_DWORD *)(this + 12); /*0x54cf77*/
      if ( *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)v34 + 444))(v34) + 224) == v34 ) /*0x54cf8a*/
      {
        v35 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v34 + 444))(v34); /*0x54cf92*/
        CellClass::AttachObject(v35, 0); /*0x54cf9a*/
      }
      v36 = *(_DWORD *)(this + 12); /*0x54cf9f*/
      *(_DWORD *)(this + 80) = 4; /*0x54cfa2*/
      (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v36 + 1152))(v36, 0, 1); /*0x54cfaf*/
      goto LABEL_65; /*0x54cfb5*/
    }
  }
LABEL_64:
  v45 = 1; /*0x54cfb7*/
LABEL_65:
  v37 = *(_DWORD *)(this + 12); /*0x54cfbc*/
  if ( v37 && (*(int (__thiscall **)(int))(*(_DWORD *)v37 + 456))(v37) > 0 ) /*0x54cfcf*/
  {
    if ( !v44 ) /*0x54cfd7*/
    {
      v38 = *(_DWORD *)(this + 12); /*0x54cfd9*/
      if ( !*(_BYTE *)(v38 + 1709) || v45 ) /*0x54cfec*/
      {
        *(_DWORD *)(v38 + 1064) = 0; /*0x54cfee*/
        *(_DWORD *)(*(_DWORD *)(this + 12) + 1068) = 0; /*0x54cff7*/
      }
      goto LABEL_74; /*0x54cffd*/
    }
  }
  else if ( !v44 ) /*0x54d005*/
  {
    goto LABEL_74; /*0x54d005*/
  }
  if ( v46 ) /*0x54d00d*/
    *(_BYTE *)(*(_DWORD *)(this + 12) + 140) = 1; /*0x54d012*/
LABEL_74:
  if ( ((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 456))(*(_DWORD *)(this + 12)) <= 0 /*0x54d043*/
     || (LOBYTE(v39) = v44) != 0)
    && (!*(_BYTE *)(*(_DWORD *)(this + 12) + 1709) || (LOBYTE(v39) = v45) != 0) )
  {
    v40 = *(_DWORD *)(this + 12); /*0x54d045*/
    if ( *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)v40 + 444))(v40) + 224) == v40 ) /*0x54d058*/
    {
      v41 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v40 + 444))(v40); /*0x54d05f*/
      CellClass::AttachObject(v41, 0); /*0x54d067*/
    }
    GadgetGrid::RemoveItem(MEMORY[0x887888], *(_DWORD *)(this + 12)); /*0x54d075*/
    v42 = *(_DWORD *)(this + 12); /*0x54d07a*/
    *(_DWORD *)(this + 120) = 0; /*0x54d07d*/
    *(_DWORD *)(this + 80) = 6; /*0x54d083*/
    *(_DWORD *)(this + 124) = 0; /*0x54d08a*/
    (**(void (__thiscall ***)(int, int, _DWORD))(v42 + 8))(v42 + 8, 4476, 0); /*0x54d095*/
    v39 = *(_DWORD *)(this + 12); /*0x54d097*/
    if ( v39 ) /*0x54d09c*/
    {
      *(_DWORD *)(v39 + 1064) = 0; /*0x54d09e*/
      v39 = *(_DWORD *)(this + 12); /*0x54d0a4*/
      *(_DWORD *)(v39 + 1068) = 0; /*0x54d0a7*/
    }
  }
  return v39; /*0x54d0ad*/
}


// ==== 0x0054D0C0  nullsub_156  this=-  sig=ida-proto ====
void nullsub_156()
{
  ; /*0x54d0c0*/
}


// ==== 0x0054D0D0  JumpjetLocomotionClass::CheckCompositeState  this=JumpjetLocomotionClass  sig=csp ====
bool __stdcall JumpjetLocomotionClass::sub_54D0D0(int a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 76); /*0x54d0d4*/
  return v1 && v1 != 2; /*0x54d0e2*/
}


// ==== 0x0054D0F0  JumpjetLocomotion::UpdateFacing  this=JumpjetLocomotion  sig=csp ====
int __thiscall JumpjetLocomotion_UpdateFacing(int this)
{
  int v2; // eax
  _BYTE *v3; // ecx
  double v4; // st7
  double v5; // st7
  unsigned __int8 v7; // c0
  unsigned __int8 v8; // c3
  int v9; // edi
  int v10; // ebp
  _WORD *v11; // eax
  int v12; // eax
  double v13; // st7
  __int64 v14; // rax
  int v15; // ecx
  int v16; // ebp
  int v17; // ecx
  int GroundHeight; // ebx
  int v19; // eax
  int v20; // edx
  int v21; // edx
  int v22; // eax
  int v23; // edi
  int v24; // ebp
  int v25; // ecx
  int v26; // eax
  int *v27; // eax
  int v28; // ebx
  int v29; // ecx
  int v30; // ebp
  int v31; // ebp
  int v32; // ebx
  _WORD *v33; // eax
  int v34; // ecx
  int *v35; // eax
  double v36; // st7
  int v37; // edi
  unsigned int v38; // ebp
  unsigned int v39; // ebx
  double v40; // st7
  double v41; // st7
  int v42; // eax
  int v43; // ecx
  _BYTE *v44; // ecx
  int v45; // edi
  int v46; // eax
  int *v47; // ecx
  int result; // eax
  double v49; // [esp+0h] [ebp-58h]
  int *v50; // [esp+4h] [ebp-54h]
  _DWORD *Value; // [esp+4h] [ebp-54h]
  char v52; // [esp+19h] [ebp-3Fh]
  char v53; // [esp+1Ah] [ebp-3Eh]
  char v54; // [esp+1Ah] [ebp-3Eh]
  char v55; // [esp+1Bh] [ebp-3Dh]
  int v56; // [esp+1Ch] [ebp-3Ch] BYREF
  double v57; // [esp+20h] [ebp-38h]
  double v58; // [esp+28h] [ebp-30h] BYREF
  double v59; // [esp+30h] [ebp-28h] BYREF
  int v60; // [esp+38h] [ebp-20h]
  int v61; // [esp+40h] [ebp-18h]
  int v62; // [esp+44h] [ebp-14h]
  _DWORD v63[3]; // [esp+4Ch] [ebp-Ch] BYREF

  v2 = *(_DWORD *)(this + 80); /*0x54d0ff*/
  if ( v2 == 2 || (v52 = 1, v2 == 3) ) /*0x54d10f*/
    v52 = 0; /*0x54d111*/
  v3 = *(_BYTE **)(this + 12); /*0x54d116*/
  v55 = v3[116]; /*0x54d11c*/
  if ( v52 ) /*0x54d126*/
    (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)v3 + 292))(v3, 0); /*0x54d12c*/
  else
    v3[116] = 0; /*0x54d134*/
  if ( *(double *)(this + 120) > *(double *)(this + 112) ) /*0x54d143*/
  {
    v4 = *(float *)(this + 48) + *(double *)(this + 112); /*0x54d148*/
    *(double *)(this + 112) = v4; /*0x54d14b*/
    v58 = (double)*(int *)(this + 32); /*0x54d151*/
    if ( v4 >= v58 ) /*0x54d15e*/
      v4 = v58; /*0x54d162*/
    *(double *)(this + 112) = v4; /*0x54d166*/
  }
  if ( *(double *)(this + 120) < *(double *)(this + 112) ) /*0x54d174*/
  {
    v5 = *(double *)(this + 112) - *(float *)(this + 48) * 1.5; /*0x54d17f*/
    *(double *)(this + 112) = v5; /*0x54d188*/
    if ( v7 | v8 ) /*0x54d18d*/
      v5 = 0.0; /*0x54d194*/
    *(double *)(this + 112) = v5; /*0x54d19a*/
  }
  v49 = *(double *)(this + 112) / (double)*(int *)(this + 32); /*0x54d1ab*/
  (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 12) + 1348))( /*0x54d1ae*/
    *(_DWORD *)(this + 12),
    LODWORD(v49),
    HIDWORD(v49));
  v9 = *(_DWORD *)(this + 64) / 256; /*0x54d1da*/
  v10 = *(_DWORD *)(this + 68) / 256; /*0x54d1dd*/
  v11 = (_WORD *)(*(int (__thiscall **)(_DWORD, double *))(**(_DWORD **)(this + 12) + 440))( /*0x54d1e0*/
                   *(_DWORD *)(this + 12),
                   &v58);
  if ( *v11 != (_WORD)v9 || (v53 = 1, v11[1] != (_WORD)v10) ) /*0x54d1f4*/
    v53 = 0; /*0x54d1f6*/
  v12 = *(_DWORD *)(this + 80); /*0x54d1fb*/
  if ( (v12 == 2 || v12 == 3) && !*(_BYTE *)(this + 60) ) /*0x54d208*/
  {
    *(double *)(this + 136) = 6.283185307179586 / (15.0 / *(float *)(this + 52)) + *(double *)(this + 136); /*0x54d224*/
  }
  else
  {
    *(_DWORD *)(this + 136) = 0; /*0x54d22e*/
    *(_DWORD *)(this + 140) = 0; /*0x54d234*/
  }
  v13 = Math::SinCos(*(double *)(this + 136)); /*0x54d248*/
  v14 = Math::RoundToInt(v13 * (double)*(int *)(this + 56) + (double)*(int *)(this + 128)); /*0x54d259*/
  v15 = *(_DWORD *)(this + 12); /*0x54d25e*/
  LODWORD(v57) = v14; /*0x54d261*/
  v16 = (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)v15 + 464))(v15, HIDWORD(v14)); /*0x54d270*/
  v17 = *(_DWORD *)(this + 12) + 156; /*0x54d272*/
  v56 = v16; /*0x54d278*/
  v59 = *(double *)v17; /*0x54d27e*/
  v60 = *(_DWORD *)(v17 + 8); /*0x54d291*/
  GroundHeight = Cell::GetGroundHeight(&v59); /*0x54d29f*/
  v19 = *(_DWORD *)(this + 12) + 156; /*0x54d2a4*/
  v59 = *(double *)v19; /*0x54d2ab*/
  v60 = *(_DWORD *)(v19 + 8); /*0x54d2c3*/
  if ( (*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], &v59) + 80) & 0x100) != 0 ) /*0x54d2d5*/
  {
    v20 = *(_DWORD *)(this + 12) + 156; /*0x54d2da*/
    v59 = *(double *)v20; /*0x54d2e2*/
    v21 = *(_DWORD *)(v20 + 8); /*0x54d2f5*/
    LODWORD(v58) = GroundHeight + 4 * dword_ABC5E8; /*0x54d2f8*/
    v60 = v21; /*0x54d2fc*/
    if ( (double)SLODWORD(v58) - *(float *)(this + 40) <= (double)v21 ) /*0x54d312*/
      GroundHeight += dword_ABC5DC; /*0x54d314*/
  }
  v22 = *(_DWORD *)(this + 80); /*0x54d31a*/
  if ( v22 == 4 /*0x54d339*/
    || !v22
    || v53
    && !*(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(*(_DWORD *)(this + 12)) + 3434) )
  {
    v23 = v16 - GroundHeight; /*0x54d352*/
  }
  else
  {
    v23 = v16 - JumpjetLocomotionClass::GetFloorZSetContext(this); /*0x54d34c*/
  }
  LODWORD(v58) = v23; /*0x54d358*/
  v54 = 0; /*0x54d35e*/
  if ( v23 < SLODWORD(v57) ) /*0x54d363*/
  {
    v24 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 456))(*(_DWORD *)(this + 12)); /*0x54d377*/
    v25 = *(_DWORD *)(this + 12) + 156; /*0x54d379*/
    v59 = *(double *)v25; /*0x54d381*/
    v60 = *(_DWORD *)(v25 + 8); /*0x54d394*/
    if ( (*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], &v59) + 80) & 0x100) != 0 ) /*0x54d3ab*/
    {
      v26 = *(_DWORD *)(this + 12); /*0x54d3ad*/
      if ( !*(_BYTE *)(v26 + 140) ) /*0x54d3b0*/
      {
        v27 = (int *)(v26 + 156); /*0x54d3ba*/
        v61 = *v27; /*0x54d3c3*/
        v62 = v27[1]; /*0x54d3ca*/
        v28 = v27[2]; /*0x54d3ce*/
        v59 = *(double *)v27; /*0x54d3d3*/
        v60 = v27[2]; /*0x54d3eb*/
        if ( v28 >= dword_ABC5DC + Cell::GetGroundHeight(&v59) ) /*0x54d3ff*/
          v24 -= dword_ABC5DC; /*0x54d401*/
      }
    }
    if ( !v24 ) /*0x54d405*/
    {
      v29 = *(_DWORD *)(this + 12); /*0x54d407*/
      v59 = *(double *)(v29 + 156); /*0x54d416*/
      v60 = *(_DWORD *)(v29 + 164); /*0x54d424*/
      (*(void (__thiscall **)(int, double *))(*(_DWORD *)v29 + 244))(v29, &v59); /*0x54d42f*/
      *(_BYTE *)(*(_DWORD *)(this + 12) + 140) = 0; /*0x54d438*/
    }
    if ( (double)SLODWORD(v57) >= (double)SLODWORD(v58) + *(float *)(this + 36) ) /*0x54d451*/
      v56 = Math::RoundToInt((double)v56 + *(float *)(this + 36)); /*0x54d471*/
    else
      v56 += LODWORD(v57) - v23; /*0x54d45f*/
LABEL_49:
    v54 = 1; /*0x54d4bb*/
    goto LABEL_50; /*0x54d4bb*/
  }
  if ( v23 > SLODWORD(v57) )
  {
    if ( (double)SLODWORD(v57) <= (double)SLODWORD(v58) - *(float *)(this + 36) ) /*0x54d48b*/
    {
      v56 = Math::RoundToInt((double)v56 - *(float *)(this + 36)); /*0x54d4a3*/
      v30 = v56; /*0x54d4a7*/
    }
    else
    {
      v30 = LODWORD(v57) - v23 + v16; /*0x54d48f*/
      v56 = v30; /*0x54d491*/
    }
    if ( v30 <= GroundHeight ) /*0x54d4ab*/
      v56 = GroundHeight; /*0x54d4ad*/
    v23 = v23 <= 0 ? 0 : v23;
    goto LABEL_49; /*0x54d4b9*/
  }
LABEL_50:
  v31 = *(_DWORD *)(this + 64) / 256; /*0x54d4c0*/
  v32 = *(_DWORD *)(this + 68) / 256; /*0x54d4e9*/
  v33 = (_WORD *)(*(int (__thiscall **)(_DWORD, double *))(**(_DWORD **)(this + 12) + 440))( /*0x54d4ec*/
                   *(_DWORD *)(this + 12),
                   &v58);
  if ( *v33 != (_WORD)v31 || v33[1] != (_WORD)v32 ) /*0x54d4fb*/
  {
    v34 = LODWORD(v57); /*0x54d4fd*/
    if ( v23 < SLODWORD(v57) / 2 ) /*0x54d50a*/
    {
      *(_DWORD *)(this + 112) = 0; /*0x54d50e*/
      *(_DWORD *)(this + 116) = 0; /*0x54d511*/
    }
    if ( v23 < v34 / 4 ) /*0x54d525*/
    {
      *(_DWORD *)(this + 112) = 0; /*0x54d527*/
      *(_DWORD *)(this + 116) = 0; /*0x54d52a*/
    }
  }
  if ( v54 ) /*0x54d537*/
  {
    ObjectClass::SetAnim(*(_DWORD **)(this + 12), v56); /*0x54d541*/
    if ( v52 ) /*0x54d54c*/
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 12) + 292))(*(_DWORD *)(this + 12), 0); /*0x54d554*/
  }
  v35 = (int *)(*(_DWORD *)(this + 12) + 156); /*0x54d55d*/
  v36 = *(double *)(this + 112); /*0x54d562*/
  v61 = *v35; /*0x54d567*/
  v62 = v35[1]; /*0x54d56e*/
  v37 = v35[2]; /*0x54d572*/
  LODWORD(v57) = Math::RoundToInt(v36); /*0x54d57a*/
  v58 = (double)(*(__int16 *)ProgressTimer::GetValue((_WORD *)(this + 84), &v56) - 0x3FFF) * -0.00009587672516830327; /*0x54d5a2*/
  v38 = HIDWORD(v58); /*0x54d5aa*/
  v39 = LODWORD(v58); /*0x54d5ae*/
  v57 = (double)SLODWORD(v57); /*0x54d5b4*/
  v59 = (double)v62; /*0x54d5bc*/
  v40 = Math::SinCos(v58); /*0x54d5c0*/
  LODWORD(v58) = Math::RoundToInt(v59 - v40 * v57); /*0x54d5d4*/
  v41 = Math::ArcTan2(COERCE_DOUBLE(__PAIR64__(v38, v39))); /*0x54d5d8*/
  v42 = Math::RoundToInt(v41 * v57 + (double)v61); /*0x54d5e8*/
  v43 = *(_DWORD *)(this + 12); /*0x54d5f1*/
  v63[1] = LODWORD(v58); /*0x54d5f4*/
  v63[0] = v42; /*0x54d5f8*/
  v63[2] = v37; /*0x54d5fc*/
  (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v43 + 436))(v43, v63); /*0x54d607*/
  v44 = *(_BYTE **)(this + 12); /*0x54d60d*/
  if ( !v44[1709] )
  {
    if ( v44
      && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v44 + 44))(v44) == 15
      && ((v45 = *(_DWORD *)(this + 12)) != 0
        ? (v46 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v45 + 44))(*(_DWORD *)(this + 12)) == 15 ? v45 : 0)
        : (v46 = 0),
          *(_BYTE *)(*(_DWORD *)(v46 + 1728) + 3787)
       && *(_DWORD *)(this + 80) == 2
       && (v47 = *(int **)(this + 12), v47[173])) )
    {
      v50 = ObjectClass::CalcTargetFacing(v47, (int *)&v58, v47[173]); /*0x54d675*/
      FacingClass::Set_SyncLog(v50); /*0x54d679*/
    }
    else
    {
      Value = ProgressTimer::GetValue((_WORD *)(this + 84), &v58); /*0x54d68b*/
      FacingClass::Set_SyncLog(Value); /*0x54d692*/
    }
  }
  if ( v52 ) /*0x54d69d*/
    return (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 12) + 292))(*(_DWORD *)(this + 12), 1); /*0x54d6a6*/
  result = *(_DWORD *)(this + 12); /*0x54d6b4*/
  *(_BYTE *)(result + 116) = v55; /*0x54d6bd*/
  return result; /*0x54d6ac*/
}


// ==== 0x0054D6D0  JumpjetLocomotionClass::ProcessLanding  this=JumpjetLocomotionClass  sig=csp ====
int *__thiscall sub_54D6D0(_DWORD *this, int *a2, _DWORD *a3)
{
  int v3; // ecx
  void *v4; // eax
  int *v5; // eax
  int v6; // esi
  int v7; // edx
  int v8; // ecx
  int *v9; // eax
  int v10; // edx
  int v12; // [esp+4h] [ebp-18h] BYREF
  int v13; // [esp+8h] [ebp-14h]
  int GroundHeight; // [esp+Ch] [ebp-10h]
  int v15[3]; // [esp+10h] [ebp-Ch] BYREF

  v3 = this->LinkedTo; /*0x54d6d0*/
  if ( v3 && (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 44))(v3) == 1 ) /*0x54d6e7*/
  {
    v4 = Coord::To_Cell(&MEMORY[0x87F7E8], a3); /*0x54d6f7*/
    v5 = (int *)(*(int (__thiscall **)(void *, int *))(*(_DWORD *)v4 + 72))(v4, v15); /*0x54d705*/
    v6 = dword_ABC5A8; /*0x54d70a*/
    v12 = *v5; /*0x54d712*/
    v7 = v5[1]; /*0x54d718*/
    v13 = v7; /*0x54d71b*/
    v8 = v5[2]; /*0x54d71f*/
    GroundHeight = v8; /*0x54d722*/
    if ( v12 != dword_ABC5A8 || v7 != dword_ABC5AC || v8 != dword_ABC5B0 ) /*0x54d736*/
    {
      GroundHeight = Cell::GetGroundHeight(&v12); /*0x54d74b*/
      if ( (*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], &v12) + 80) & 0x100) != 0 ) /*0x54d767*/
      {
        v8 = dword_ABC5DC + GroundHeight; /*0x54d776*/
        goto LABEL_14; /*0x54d778*/
      }
LABEL_13:
      v8 = GroundHeight; /*0x54d7fd*/
    }
  }
  else
  {
    v9 = ObjectPlacement::CalcPosition_Wrapper(v15, a3, 0); /*0x54d78e*/
    v6 = dword_ABC5A8; /*0x54d795*/
    v12 = *v9; /*0x54d79d*/
    v10 = v9[1]; /*0x54d7a3*/
    v13 = v10; /*0x54d7a6*/
    v8 = v9[2]; /*0x54d7aa*/
    GroundHeight = v8; /*0x54d7ad*/
    if ( v12 != dword_ABC5A8 || v10 != dword_ABC5AC || v8 != dword_ABC5B0 ) /*0x54d7c1*/
    {
      GroundHeight = Cell::GetGroundHeight(&v12); /*0x54d7d2*/
      if ( (*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], &v12) + 80) & 0x100) != 0 ) /*0x54d7ee*/
      {
        v8 = dword_ABC5DC + GroundHeight; /*0x54d7f9*/
        goto LABEL_14; /*0x54d7fb*/
      }
      goto LABEL_13; /*0x54d7ee*/
    }
  }
LABEL_14:
  *a2 = v6; /*0x54d801*/
  a2[1] = v13; /*0x54d811*/
  a2[2] = v8; /*0x54d815*/
  return a2; /*0x54d805*/
}


// ==== 0x0054D820  JumpjetLocomotionClass::GetFloorZSetContext  this=JumpjetLocomotionClass  sig=csp ====
int __thiscall JumpjetLocomotionClass::GetFloorZSetContext(int this)
{
  int *v2; // eax
  _DWORD *v3; // eax
  int v4; // edi
  unsigned int v5; // ecx
  int v6; // eax
  int v7; // ecx
  _DWORD *v8; // eax
  int v9; // esi
  int v11; // [esp+8h] [ebp-10h] BYREF
  int v12; // [esp+Ch] [ebp-Ch] BYREF
  int v13; // [esp+10h] [ebp-8h]
  int v14; // [esp+14h] [ebp-4h]

  v2 = (int *)(*(_DWORD *)(this + 12) + 156); /*0x54d82a*/
  v12 = *v2; /*0x54d831*/
  v13 = v2[1]; /*0x54d83d*/
  v14 = v2[2]; /*0x54d849*/
  v3 = Coord::To_Cell(&MEMORY[0x87F7E8], &v12); /*0x54d84d*/
  v4 = JumpjetLocomotionClass::FindClosestOccupiableCell(v3); /*0x54d863*/
  if ( (*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], &v12) + 80) & 0x100) != 0 ) /*0x54d873*/
    v4 += dword_ABC5DC; /*0x54d875*/
  if ( *(double *)(this + 112) <= 0.0 ) /*0x54d889*/
    return v4; /*0x54d926*/
  v5 = ((unsigned int)((*ProgressTimer::GetValue((_WORD *)(this + 84), &v11) >> 12) + 1) >> 1) & 7; /*0x54d8ac*/
  v6 = v12 + MEMORY[0x89F6D8][2 * v5]; /*0x54d8bd*/
  v7 = MEMORY[0x89F6DC][2 * v5]; /*0x54d8bf*/
  v12 = v6; /*0x54d8c2*/
  v13 += v7; /*0x54d8d4*/
  v8 = Coord::To_Cell(&MEMORY[0x87F7E8], &v12); /*0x54d8de*/
  v9 = JumpjetLocomotionClass::FindClosestOccupiableCell(v8); /*0x54d8ea*/
  if ( (*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], &v12) + 80) & 0x100) != 0 ) /*0x54d904*/
    v4 += dword_ABC5DC; /*0x54d906*/
  if ( v9 <= v4 ) /*0x54d90e*/
    return (v9 + v4) / 2; /*0x54d920*/
  else
    return v9; /*0x54d910*/
}


// ==== 0x0054D930  JumpjetLocomotionClass::DispatchVirtualCall_4  this=JumpjetLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::sub_54D930(int a1, int a2)
{
  int v2; // eax
  _DWORD *v3; // eax
  int v4; // edx
  _DWORD v6[3]; // [esp+8h] [ebp-18h] BYREF
  _BYTE v7[12]; // [esp+14h] [ebp-Ch] BYREF

  LOBYTE(v2) = a2; /*0x54d930*/
  if ( !a2 ) /*0x54d93a*/
  {
    v3 = (_DWORD *)(*(int (__stdcall **)(int, _BYTE *))(*(_DWORD *)a1 + 24))(a1, v7); /*0x54d949*/
    v6[0] = *v3; /*0x54d954*/
    v4 = v3[1]; /*0x54d958*/
    v6[1] = v4; /*0x54d95b*/
    v2 = v3[2]; /*0x54d95f*/
    v6[2] = v2; /*0x54d964*/
    if ( v6[0] != dword_ABC5A8 || v4 != dword_ABC5AC || v2 != dword_ABC5B0 ) /*0x54d979*/
    {
      if ( !*(_DWORD *)(a1 + 76) || (LOBYTE(v2) = *(_BYTE *)(a1 + 140), (_BYTE)v2) ) /*0x54d98a*/
      {
        LOBYTE(v2) = (*(int (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(a1 + 8) + 244))(*(_DWORD *)(a1 + 8), v6); /*0x54d996*/
        *(_BYTE *)(a1 + 140) = 0; /*0x54d99c*/
      }
    }
  }
  return v2; /*0x54d9a3*/
}


// ==== 0x0054D9B0  JumpjetLocomotionClass::GetConditionedCoordinate  this=JumpjetLocomotionClass  sig=csp ====
_DWORD *__stdcall JumpjetLocomotionClass::sub_54D9B0(_DWORD *a1, _DWORD *a2)
{
  int v2; // edx
  int v3; // esi
  int v5; // edx
  int v6; // eax

  if ( a1[19] ) /*0x54d9b6*/
  {
    v5 = a1[16]; /*0x54d9e7*/
    v6 = a1[17]; /*0x54d9ea*/
    *a2 = a1[15]; /*0x54d9ef*/
    a2[1] = v5; /*0x54d9f1*/
    a2[2] = v6; /*0x54d9f4*/
    return a2; /*0x54d9f7*/
  }
  else
  {
    v2 = *(_DWORD *)(a1[2] + 160); /*0x54d9c7*/
    v3 = *(_DWORD *)(a1[2] + 164); /*0x54d9ca*/
    *a2 = *(_DWORD *)(a1[2] + 156); /*0x54d9d3*/
    a2[1] = v2; /*0x54d9d5*/
    a2[2] = v3; /*0x54d9d8*/
    return a2; /*0x54d9cd*/
  }
}


// ==== 0x0054DA00  JumpjetLocomotionClass::StubReturnZero_9  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::sub_54DA00(int a1, int a2)
{
  if ( !a2 ) /*0x54da06*/
    return -2147467261; /*0x54da08*/
  if ( *(_DWORD *)(a1 + 124) ) /*0x54da14*/
    return -2147467259; /*0x54da3b*/
  *(_DWORD *)(a1 + 124) = a2; /*0x54da22*/
  (*(void (__stdcall **)(int))(*(_DWORD *)a2 + 4))(a2); /*0x54da28*/
  return 0; /*0x54da0d*/
}


// ==== 0x0054DA50  JumpjetLocomotionClass::StubReturnZero_10  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::sub_54DA50(int a1, _DWORD *a2)
{
  int v3; // eax
  _DWORD *v4; // ecx
  int v5; // eax

  if ( !a2 ) /*0x54da5b*/
    return -2147467261; /*0x54da5f*/
  v3 = *(_DWORD *)(a1 - 12); /*0x54da6c*/
  if ( v3 ) /*0x54da71*/
  {
    if ( *(_BYTE *)(v3 + 1709) || *(_BYTE *)(v3 + 1710) ) /*0x54da7b*/
    {
      *(_BYTE *)(v3 + 1709) = 0; /*0x54da83*/
      *(_BYTE *)(*(_DWORD *)(a1 - 12) + 1710) = 0; /*0x54da8c*/
      v4 = *(_DWORD **)(a1 - 12); /*0x54da92*/
      if ( !*(_BYTE *)(v4[135] + 492) && *(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*v4 + 132))(v4) + 1516) ) /*0x54daab*/
        (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(a1 - 12) + 488))(*(_DWORD *)(a1 - 12), 10, 0); /*0x54dabb*/
    }
    *(_DWORD *)(*(_DWORD *)(a1 - 12) + 1064) = 0; /*0x54dac4*/
    *(_DWORD *)(*(_DWORD *)(a1 - 12) + 1068) = 0; /*0x54dacd*/
  }
  v5 = *(_DWORD *)(a1 + 124); /*0x54dad3*/
  if ( !v5 ) /*0x54dad8*/
    return 1; /*0x54dae9*/
  *a2 = v5; /*0x54dada*/
  *(_DWORD *)(a1 + 124) = 0; /*0x54dadc*/
  return 0; /*0x54da5d*/
}


// ==== 0x0054DB00  JumpjetLocomotionClass::StubReturnTrue_2  this=JumpjetLocomotionClass  sig=csp ====
bool __stdcall JumpjetLocomotionClass::sub_54DB00(int a1)
{
  int v1; // esi
  bool result; // al

  result = 0; /*0x54db3e*/
  if ( !(*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)(a1 - 20) + 16))(a1 - 20) ) /*0x54db0c*/
  {
    if ( *(_DWORD *)(a1 + 124) ) /*0x54db13*/
    {
      if ( !*(_BYTE *)(a1 + 121) ) /*0x54db1a*/
      {
        v1 = *(_DWORD *)(a1 - 12); /*0x54db21*/
        if ( !*(_BYTE *)(v1 + 1709) || *(_BYTE *)(v1 + 1710) ) /*0x54db2e*/
          return 1; /*0x54db11*/
      }
    }
  }
  return result; /*0x54db3a*/
}


// ==== 0x0054DB50  JumpjetLocomotionClass::LoadLocomotionFromStream_1  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::sub_54DB50(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v2; // ebp
  _DWORD *v4; // eax
  int v5; // eax
  int v6; // esi
  int v7; // esi
  _DWORD *v8; // eax
  _DWORD *v9; // edi

  v2 = a2; /*0x54db51*/
  if ( !a2 ) /*0x54db58*/
    return -2147467261; /*0x54db61*/
  v4 = a1 + 31; /*0x54db6b*/
  if ( a1[31] ) /*0x54db68*/
  {
    a1 = 0; /*0x54db74*/
    v5 = StreamClass::Set2(&a1, v4); /*0x54db85*/
    if ( v5 < 0 && v5 != -2147467262 ) /*0x54db93*/
      WinAPI::Wrapper(v5); /*0x54db96*/
    if ( !a1 ) /*0x54dba1*/
      return -2147467259; /*0x54dbaa*/
    v6 = (*(int (__stdcall **)(_DWORD *, _DWORD *))(*a1 + 12))(a1, v2); /*0x54dbb4*/
    if ( a1 ) /*0x54dbbc*/
    {
      (*(void (__stdcall **)(_DWORD *))(*a1 + 8))(a1); /*0x54dbc5*/
      return v6; /*0x54dbcc*/
    }
  }
  else
  {
    a2 = 0; /*0x54dbd2*/
    if ( a1 == (_DWORD *)24 ) /*0x54dbdc*/
      return -2147467259; /*0x54dbdc*/
    v7 = (*(int (__stdcall **)(_DWORD *, void *, _DWORD **))*(a1 - 6))(a1 - 6, &unk_818858, &a1); /*0x54dbed*/
    if ( v7 >= 0 ) /*0x54dbf1*/
    {
      v9 = a1; /*0x54dc05*/
      ComPtr::Release_Alt((int *)&a2); /*0x54dc0d*/
      v8 = v9; /*0x54dc12*/
      a2 = v9; /*0x54dc15*/
    }
    else
    {
      ComPtr::Release_Alt((int *)&a2); /*0x54dbf7*/
      v8 = 0; /*0x54dbfc*/
      a2 = 0; /*0x54dbfe*/
    }
    if ( v7 < 0 && v7 != -2147467262 ) /*0x54dc23*/
      WinAPI::Wrapper(v7); /*0x54dc26*/
    if ( !v8 ) /*0x54dc31*/
      return -2147467259; /*0x54dc3a*/
    v6 = (*(int (__stdcall **)(_DWORD *, _DWORD *))(*v8 + 12))(v8, v2); /*0x54dc44*/
    if ( a2 ) /*0x54dc4c*/
      (*(void (__stdcall **)(_DWORD *))(*a2 + 8))(a2); /*0x54dc51*/
  }
  return v6; /*0x54db5a*/
}


// ==== 0x0054DC60  JumpjetLocomotionClass::QueryInterface  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::_vt00(int a1, const void *a2, int *a3)
{
  int result; // eax
  int v4; // eax

  result = LocomotionClass::QueryInterface(a1, a2, a3); /*0x54dc72*/
  if ( result == -2147467262 ) /*0x54dc7c*/
  {
    if ( !memcmp(a2, &IID_IPiggyback, 0x10u) ) /*0x54dc8b*/
    {
      if ( a1 ) /*0x54dc92*/
        v4 = a1 + 24; /*0x54dc94*/
      else
        v4 = 0; /*0x54dc99*/
      *a3 = v4; /*0x54dc9b*/
    }
    if ( *a3 ) /*0x54dc9e*/
    {
      (*(void (__stdcall **)(int))(*(_DWORD *)a1 + 4))(a1); /*0x54dcb2*/
      return 0; /*0x54dcb5*/
    }
    else
    {
      return -2147467262; /*0x54dca6*/
    }
  }
  return result; /*0x54dca4*/
}


// ==== 0x0054DCC0  JumpjetLocomotionClass::ComputeMovementTransform  this=JumpjetLocomotionClass  sig=csp ====
float *__stdcall JumpjetLocomotionClass::sub_54DCC0(signed int a1, float *a2, _DWORD *a3)
{
  int v3; // ecx
  double v4; // st7
  int v5; // edi
  int v6; // eax
  int v7; // ecx
  float *Transform; // eax
  float *v9; // eax
  float *v10; // esi
  float *v12; // esi
  float v13; // [esp+4h] [ebp-144h]
  float v14; // [esp+4h] [ebp-144h]
  float v15; // [esp+4h] [ebp-144h]
  float v16; // [esp+14h] [ebp-134h]
  int v17; // [esp+14h] [ebp-134h]
  float v18; // [esp+18h] [ebp-130h]
  int v19; // [esp+18h] [ebp-130h]
  float v20; // [esp+1Ch] [ebp-12Ch]
  int v21; // [esp+1Ch] [ebp-12Ch]
  float v22; // [esp+20h] [ebp-128h]
  int v23; // [esp+20h] [ebp-128h]
  float v24; // [esp+24h] [ebp-124h]
  int v25; // [esp+24h] [ebp-124h]
  float v26[12]; // [esp+28h] [ebp-120h] BYREF
  float v27[12]; // [esp+58h] [ebp-F0h] BYREF
  float v28[12]; // [esp+88h] [ebp-C0h] BYREF
  float v29[12]; // [esp+B8h] [ebp-90h] BYREF
  float v30[12]; // [esp+E8h] [ebp-60h] BYREF
  float v31[12]; // [esp+118h] [ebp-30h] BYREF

  if ( *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 132))(*(_DWORD *)(a1 + 8)) + 3362) /*0x54dd13*/
    && ((v3 = *(_DWORD *)(a1 + 8), fabs(*(float *)(v3 + 808)) >= 0.005) || fabs(*(float *)(v3 + 812)) >= 0.005) )
  {
    if ( a3 ) /*0x54dd23*/
      *a3 = -1; /*0x54dd25*/
    Matrix3x4::Identity(v27); /*0x54dd2f*/
    Matrix3x4::Identity(v26); /*0x54dd38*/
    v18 = *(double *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 132))(*(_DWORD *)(a1 + 8)) + 864); /*0x54dd53*/
    v16 = *(double *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 132))(*(_DWORD *)(a1 + 8)) + 872); /*0x54dd69*/
    v22 = Math::ArcTan2(*(float *)(*(_DWORD *)(a1 + 8) + 812)); /*0x54dd7e*/
    v20 = Math::SinCos(*(float *)(*(_DWORD *)(a1 + 8) + 812)); /*0x54dd93*/
    v24 = Math::ArcTan2(*(float *)(*(_DWORD *)(a1 + 8) + 808)); /*0x54dda8*/
    v4 = Math::SinCos(*(float *)(*(_DWORD *)(a1 + 8) + 808)); /*0x54ddb5*/
    v21 = Math::RoundToInt(fabs(v4) * v18 + fabs(v20) * v16); /*0x54dddc*/
    v23 = Math::RoundToInt(v22 * v16); /*0x54dde5*/
    v5 = Math::RoundToInt(v16 - (double)v23); /*0x54ddfe*/
    v17 = v5; /*0x54de00*/
    v25 = Math::RoundToInt(v24 * v18); /*0x54de09*/
    v6 = Math::RoundToInt(v18 - (double)v25); /*0x54de15*/
    v7 = *(_DWORD *)(a1 + 8); /*0x54de1a*/
    v19 = v6; /*0x54de1f*/
    if ( *(float *)(v7 + 812) < 0.0 ) /*0x54de34*/
      v17 = -v5; /*0x54de38*/
    if ( *(float *)(v7 + 808) > 0.0 ) /*0x54de4d*/
      v19 = -v6; /*0x54de51*/
    v13 = (float)v21; /*0x54de5e*/
    Matrix3x3::ApplyCol1(v27, v13); /*0x54de61*/
    v14 = (float)v17; /*0x54de6f*/
    Matrix3x4::Translate(v26, v14); /*0x54de72*/
    v15 = (float)v19; /*0x54de80*/
    Matrix3x3::ApplyCol0(v26, v15); /*0x54de83*/
    Matrix3x3::RotateX(v26, *(float *)(*(_DWORD *)(a1 + 8) + 808)); /*0x54de96*/
    Matrix3D::RotateZ(v26, *(float *)(*(_DWORD *)(a1 + 8) + 812)); /*0x54dea9*/
    Transform = Turret::GetTransform(a1, v30, a3); /*0x54deb8*/
    Transform::Copy(v28, Transform); /*0x54dec5*/
    v9 = MultiplyMatrix3x4(v31, v27, v28); /*0x54dee2*/
    v10 = MultiplyMatrix3x4(v29, v9, v26); /*0x54def5*/
    qmemcpy(a2, v10, 0x30u); /*0x54df06*/
    return a2; /*0x54defc*/
  }
  else
  {
    v12 = Turret::GetTransform(a1, v29, a3); /*0x54df29*/
    qmemcpy(a2, v12, 0x30u); /*0x54df39*/
    return a2; /*0x54df30*/
  }
}


// ==== 0x0054DF50  JumpjetLocomotionClass::AddRef  this=JumpjetLocomotionClass  sig=csp ====
LONG __stdcall JumpjetLocomotionClass::_vt01(int a1)
{
  return COM::AddRef(a1); /*0x54df5a*/
}


// ==== 0x0054DF60  JumpjetLocomotionClass::Release  this=JumpjetLocomotionClass  sig=csp ====
LONG __stdcall JumpjetLocomotionClass::_vt02(volatile LONG *a1)
{
  return COM::ReleaseRef(a1); /*0x54df6a*/
}


// ==== 0x0054DF70  JumpjetLocomotionClass::ShortFunc_54DF70  this=JumpjetLocomotionClass  sig=csp ====
BOOL __stdcall JumpjetLocomotionClass::sub_54DF70(int a1)
{
  return *(_DWORD *)(a1 + 124) != 0; /*0x54df7e*/
}


// ==== 0x0054DF90  JumpjetLocomotionClass::CheckAttachStatus  this=JumpjetLocomotionClass  sig=csp ====
int JumpjetLocomotionClass::_vt09()
{
  return 152; /*0x54df95*/
}


// ==== 0x0054DFA0  JumpjetLocomotionClass::ProcessAttach  this=JumpjetLocomotionClass  sig=csp ====
JumpjetLocomotionClass *__thiscall JumpjetLocomotionClass::ProcessAttach(int *Block, char a2)
{
  int v3; // eax

  *Block = (int)&JumpjetLocomotionClass::`vftable'; /*0x54dfa3*/
  *(Block + 1) = (int)&JumpjetLocomotionClass::`vftable'; /*0x54dfa9*/
  *(Block + 6) = (int)&vt_JumpjetLocomotionClass; /*0x54dfb0*/
  v3 = *(Block + 37); /*0x54dfb7*/
  if ( v3 ) /*0x54dfbf*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v3 + 8))(v3); /*0x54dfc4*/
  LocomotionClass::Construct(Block); /*0x54dfc9*/
  if ( (a2 & 1) != 0 ) /*0x54dfd3*/
    __3_YAXPAX_Z(Block); /*0x54dfd6*/
  return (JumpjetLocomotionClass *)Block; /*0x54dfe0*/
}


// ==== 0x0054DFF0  JumpjetLocomotionClass::SmallStub_54DFF0  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::sub_54DFF0(int a1, const void *a2, int *a3)
{
  return JumpjetLocomotionClass::QueryInterface(a1 - 4, a2, a3);
}


// ==== 0x0054E000  JumpjetLocomotionClass::SmallStub_54E000  this=JumpjetLocomotionClass  sig=csp ====
LONG __stdcall JumpjetLocomotionClass::sub_54E000(int a1)
{
  return JumpjetLocomotionClass::AddRef(a1 - 4);
}


// ==== 0x0054E010  JumpjetLocomotionClass::SmallStub_54E010  this=JumpjetLocomotionClass  sig=csp ====
LONG __stdcall JumpjetLocomotionClass::sub_54E010(int a1)
{
  return JumpjetLocomotionClass::Release((volatile LONG *)(a1 - 4));
}


// ==== 0x0054E020  JumpjetLocomotionClass::SmallStub_54E020  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::sub_54E020(int a1, const void *a2, int *a3)
{
  return JumpjetLocomotionClass::QueryInterface(a1 - 24, a2, a3);
}


// ==== 0x0054E030  JumpjetLocomotionClass::SmallStub_54E030  this=JumpjetLocomotionClass  sig=csp ====
LONG __stdcall JumpjetLocomotionClass::sub_54E030(int a1)
{
  return JumpjetLocomotionClass::AddRef(a1 - 24);
}


// ==== 0x0054E040  JumpjetLocomotionClass::SmallStub_54E040  this=JumpjetLocomotionClass  sig=csp ====
LONG __stdcall JumpjetLocomotionClass::sub_54E040(int a1)
{
  return JumpjetLocomotionClass::Release((volatile LONG *)(a1 - 24));
}


// ==== 0x0054E050  sub_54E050  this=-  sig=ida-proto ====
void sub_54E050()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x54e05c*/
  dbl_ABC638 = Math::Sqrt(v0 + v0); /*0x54e06e*/
}


// ==== 0x0054E080  sub_54E080  this=-  sig=ida-proto ====
void sub_54E080()
{
  dbl_ABC688 = dbl_ABC638 / 60.0; /*0x54e08c*/
}


// ==== 0x0054E0A0  sub_54E0A0  this=-  sig=ida-proto ====
void sub_54E0A0()
{
  dbl_ABC670 = 1.0 / dbl_ABC688; /*0x54e0ac*/
}


// ==== 0x0054E0C0  sub_54E0C0  this=-  sig=ida-proto ====
void sub_54E0C0()
{
  dbl_ABC668 = 0.0174532925199433 * 45.0; /*0x54e0cc*/
}


// ==== 0x0054E0E0  sub_54E0E0  this=-  sig=ida-proto ====
void sub_54E0E0()
{
  dbl_ABC640 = 0.0174532925199433 * 60.0; /*0x54e0ec*/
}


// ==== 0x0054E100  sub_54E100  this=-  sig=ida-proto ====
void sub_54E100()
{
  dbl_ABC5F0 = 0.0174532925199433 * 90.0; /*0x54e10c*/
}


// ==== 0x0054E120  sub_54E120  this=-  sig=ida-proto ====
__int64 sub_54E120()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_ABC5F0 - dbl_ABC640); /*0x54e132*/
  result = Math::RoundToInt(v0 * dbl_ABC638 * 0.5); /*0x54e146*/
  dword_ABC690 = result; /*0x54e14b*/
  return result; /*0x54e150*/
}


// ==== 0x0054E160  sub_54E160  this=-  sig=ida-proto ====
void sub_54E160()
{
  dbl_ABC648 = Math::ArcTan((double)dword_ABC690 * 0.00390625); /*0x54e177*/
}


// ==== 0x0054E190  sub_54E190  this=-  sig=ida-proto ====
void sub_54E190()
{
  dbl_ABC660 = Math::ArcTan((double)(2 * dword_ABC690) / dbl_ABC638); /*0x54e1b2*/
}


// ==== 0x0054E1C0  sub_54E1C0  this=-  sig=ida-proto ====
__int64 sub_54E1C0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABC690) + 0.5); /*0x54e1db*/
  dword_ABC684 = result; /*0x54e1e0*/
  return result; /*0x54e1e6*/
}


// ==== 0x0054E1F0  sub_54E1F0  this=-  sig=ida-proto ====
int sub_54E1F0()
{
  word_ABC630 = 0; /*0x54e1f2*/
  word_ABC632 = 0; /*0x54e1f8*/
  return 0; /*0x54e1fe*/
}


// ==== 0x0054E200  sub_54E200  this=-  sig=ida-proto ====
int sub_54E200()
{
  dword_ABC650 = 0; /*0x54e202*/
  dword_ABC654 = 0; /*0x54e207*/
  dword_ABC658 = 0; /*0x54e20c*/
  return 0; /*0x54e211*/
}


// ==== 0x0054E220  sub_54E220  this=-  sig=ida-proto ====
int sub_54E220()
{
  dword_ABC680 = 0; /*0x54e225*/
  dword_ABC678 = 128; /*0x54e22f*/
  dword_ABC67C = 128; /*0x54e234*/
  return 128; /*0x54e239*/
}


// ==== 0x0054E240  sub_54E240  this=-  sig=ida-proto ====
int sub_54E240()
{
  dword_ABC620 = 0; /*0x54e242*/
  dword_ABC624 = 0; /*0x54e247*/
  dword_ABC628 = 0; /*0x54e24c*/
  dword_ABC62C = 0; /*0x54e251*/
  return 0; /*0x54e256*/
}


// ==== 0x0054E260  ObjectClass::method_54E260  this=ObjectClass  sig=csp ====
int sub_54E260()
{
  int v1; // [esp+4h] [ebp-8h]

  g_MissionQueueFrame = (int)MEMORY[0xA8ED84]; /*0x54e26d*/
  g_MissionQueueType = 0; /*0x54e276*/
  sub_54EBF0(&dword_ABC604, 0, 0); /*0x54e280*/
  dword_ABC604 = (int)&vt_DynamicVectorClass_KamikazeControl; /*0x54e298*/
  dword_ABC618 = 10; /*0x54e2a2*/
  dword_ABC614 = 0; /*0x54e2ac*/
  g_MissionQueueFrame = (int)MEMORY[0xA8ED84]; /*0x54e2b6*/
  g_MissionQueueParam = v1; /*0x54e2bb*/
  g_MissionQueueType = 100; /*0x54e2c1*/
  return atexit(loc_54E2D0); /*0x54e2cf*/
}


// ==== 0x0054E360  ObjectClass::method_54E360  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_54E360(_DWORD *this)
{
  int v2; // [esp+8h] [ebp-8h]

  *this = MEMORY[0xA8ED84]; /*0x54e370*/
  this->vtable3 = 0; /*0x54e375*/
  this->uniqueId = 0; /*0x54e378*/
  this->abstractFlags = 0; /*0x54e37b*/
  this->q060 = 1; /*0x54e37e*/
  this->customSound = 0; /*0x54e382*/
  this->vtable4 = &vt_DynamicVectorClass_KamikazeControl; /*0x54e385*/
  this->NeedsSaveOrLink = 10; /*0x54e38c*/
  this->referenceCount = 0; /*0x54e393*/
  *this = MEMORY[0xA8ED84]; /*0x54e39e*/
  this->vtable2 = v2; /*0x54e3a4*/
  this->vtable3 = 100; /*0x54e3a7*/
  return this; /*0x54e3aa*/
}


// ==== 0x0054E3B0  UnitClass::GetExitCell  this=AbstractClass  sig=csp ====
int __thiscall UnitClass::GetExitCell(int this, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // esi
  int result; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // ecx
  _DWORD *v8; // ebx
  bool v9; // zf
  unsigned int v10; // edi
  _DWORD *v11; // eax
  _DWORD *v12; // eax
  int v13; // ecx
  int v14; // edx
  char v15[12]; // [esp+Ch] [ebp-Ch] BYREF

  v3 = a2; /*0x54e3b6*/
  if ( !*(_BYTE *)(a2[433] + 3432) ) /*0x54e3c2*/
    return (*(int (__thiscall **)(_DWORD *, _DWORD))(*a2 + 988))(a2, 0); /*0x54e3d2*/
  v6 = (_DWORD *)__2_YAPAXI_Z(8); /*0x54e3e3*/
  v7 = a3; /*0x54e3e8*/
  v8 = v6; /*0x54e3ec*/
  v9 = a3 == 0; /*0x54e3f1*/
  *v6 = v3; /*0x54e3f3*/
  if ( v9 ) /*0x54e3f5*/
  {
    v10 = ((unsigned int)((*ProgressTimer::GetValue((_WORD *)v3 + 452, &a2) >> 12) + 1) >> 1) & 7; /*0x54e414*/
    v11 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v3 + 444))(v3); /*0x54e417*/
    v8[1] = Cell::GetNeighbourContent(v11, v10); /*0x54e425*/
  }
  else
  {
    v12 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, char *))(*v7 + 72))(v7, v15); /*0x54e432*/
    LOWORD(a2) = *v12 / 256; /*0x54e445*/
    HIWORD(a2) = v12[1] / 256; /*0x54e45e*/
    a3 = a2; /*0x54e46c*/
    v8[1] = CellCoord::To_CellObj(MEMORY[0x87F7E8], (__int16 *)&a3); /*0x54e475*/
  }
  *((_BYTE *)v3 + 1738) = 1; /*0x54e47d*/
  v3[191] = 1; /*0x54e483*/
  result = *(_DWORD *)(this + 20); /*0x54e489*/
  if ( *(_DWORD *)(this + 28) < result /*0x54e4b6*/
    || (*(_BYTE *)(this + 25) || !result)
    && (v13 = *(_DWORD *)(this + 32), v13 > 0)
    && (result = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(this + 12) + 8))(this + 12, result + v13, 0),
        (_BYTE)result) )
  {
    result = *(_DWORD *)(this + 28); /*0x54e4b8*/
    v14 = *(_DWORD *)(this + 16); /*0x54e4bb*/
    *(_DWORD *)(this + 28) = result + 1; /*0x54e4c1*/
    *(_DWORD *)(v14 + 4 * result) = v8; /*0x54e4c4*/
  }
  return result; /*0x54e3d8*/
}


// ==== 0x0054E4D0  ScenarioClass::UpdateScriptActions  this=AbstractClass  sig=csp ====
int __thiscall sub_54E4D0(int *this)
{
  int v2; // edx
  int result; // eax
  int v4; // edx
  int v5; // ebp
  _DWORD *v6; // eax
  int v7; // ecx
  _WORD *v8; // esi
  unsigned int v9; // edi
  _DWORD *v10; // eax
  void *NeighbourContent; // eax
  _DWORD v12[4]; // [esp+Ch] [ebp-10h] BYREF

  v2 = *this; /*0x54e4d8*/
  result = this->vtable3; /*0x54e4da*/
  if ( *this == -1 ) /*0x54e4e6*/
  {
LABEL_4:
    if ( result ) /*0x54e4f4*/
      return result; /*0x54e4f4*/
    goto LABEL_5; /*0x54e4f4*/
  }
  if ( (int)MEMORY[0xA8ED84] - v2 < result ) /*0x54e4ee*/
  {
    result -= (int)MEMORY[0xA8ED84] - v2; /*0x54e4f0*/
    goto LABEL_4; /*0x54e4f0*/
  }
LABEL_5:
  v4 = v12[2]; /*0x54e4fa*/
  v5 = 0; /*0x54e505*/
  *this = (int)MEMORY[0xA8ED84]; /*0x54e507*/
  this->vtable2 = v4; /*0x54e509*/
  this->vtable3 = 30; /*0x54e50c*/
  result = this->referenceCount; /*0x54e50f*/
  if ( result > 0 ) /*0x54e514*/
  {
    do /*0x54e581*/
    {
      v6 = *(_DWORD **)(this->vtable2 + 4 * v5); /*0x54e51a*/
      v7 = v6[1]; /*0x54e51d*/
      v8 = (_WORD *)*v6; /*0x54e520*/
      *(_DWORD *)(*v6 + 764) = 1; /*0x54e524*/
      if ( v7 ) /*0x54e52e*/
      {
        (*(void (__thiscall **)(_WORD *, int))(*(_DWORD *)v8 + 968))(v8, v7); /*0x54e567*/
      }
      else
      {
        v9 = ((unsigned int)((*ProgressTimer::GetValue(v8 + 452, v12) >> 12) + 1) >> 1) & 7; /*0x54e54c*/
        v10 = (_DWORD *)(*(int (__thiscall **)(_WORD *))(*(_DWORD *)v8 + 444))(v8); /*0x54e54f*/
        NeighbourContent = Cell::GetNeighbourContent(v10, v9); /*0x54e558*/
        (*(void (__thiscall **)(_WORD *, void *))(*(_DWORD *)v8 + 968))(v8, NeighbourContent); /*0x54e560*/
      }
      (*(void (__thiscall **)(_WORD *, int, _DWORD))(*(_DWORD *)v8 + 488))(v8, 1, 0); /*0x54e575*/
      result = this->referenceCount; /*0x54e57b*/
      ++v5; /*0x54e57e*/
    }
    while ( v5 < result ); /*0x54e581*/
  }
  return result; /*0x54e584*/
}


// ==== 0x0054E590  AbstractClass::processStateTransition  this=AbstractClass  sig=csp ====
void __thiscall AbstractClass::processStateTransition(int *this, AbstractClass *aP1)
{
  int v3; // esi
  int v4; // ebx
  int i; // edx
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  _DWORD *v9; // eax
  void *v10; // ebx
  _DWORD *v11; // eax
  int v12; // ecx
  AbstractClass *v13; // [esp+Ch] [ebp-10h] BYREF
  char v14[12]; // [esp+10h] [ebp-Ch] BYREF
  AbstractClass *aP1a; // [esp+20h] [ebp+4h]

  v3 = this->referenceCount - 1; /*0x54e59b*/
  if ( v3 >= 0 ) /*0x54e59c*/
  {
    v4 = this->vtable2; /*0x54e5a2*/
    for ( i = v4 + 4 * v3; aP1 != **(AbstractClass ***)i; i -= 4 ) /*0x54e5a9*/
    {
      if ( aP1 == *(AbstractClass **)(*(_DWORD *)i + 4) ) /*0x54e5b5*/
      {
        v9 = (_DWORD *)(*(int (__stdcall **)(char *))(*(_DWORD *)aP1->__pad_0 + 72))(v14); /*0x54e611*/
        LOWORD(aP1a) = *v9 / 256; /*0x54e624*/
        HIWORD(aP1a) = v9[1] / 256; /*0x54e63d*/
        v13 = aP1a; /*0x54e64b*/
        v10 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v13); /*0x54e657*/
        v11 = *(_DWORD **)(this->vtable2 + 4 * v3); /*0x54e65a*/
        (*(void (__thiscall **)(_DWORD, void *))(*(_DWORD *)*v11 + 968))(*v11, v10); /*0x54e661*/
        v12 = **(_DWORD **)(this->vtable2 + 4 * v3); /*0x54e671*/
        (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v12 + 488))(v12, 1, 0); /*0x54e675*/
        *(_DWORD *)(*(_DWORD *)(this->vtable2 + 4 * v3) + 4) = v10; /*0x54e681*/
        return; /*0x54e681*/
      }
      if ( --v3 < 0 ) /*0x54e5bd*/
        return; /*0x54e5bd*/
    }
    __3_YAXPAX_Z(*(void **)(v4 + 4 * v3)); /*0x54e5cc*/
    v6 = this->referenceCount; /*0x54e5d1*/
    if ( v3 < v6 ) /*0x54e5d9*/
    {
      v7 = v6 - 1; /*0x54e5df*/
      v8 = v3; /*0x54e5e2*/
      for ( this->referenceCount = v7; v8 < this->referenceCount; *(_DWORD *)(this->vtable2 + 4 * v8 - 4) = *(_DWORD *)(this->vtable2 + 4 * v8) ) /*0x54e5e9*/
        ++v8; /*0x54e5f2*/
    }
  }
}


// ==== 0x0054E690  ObjectClass::method_54E690  this=ObjectClass  sig=csp ====
void __thiscall sub_54E690(_DWORD *this)
{
  int i; // esi
  int v3; // edx
  _DWORD *v4; // esi
  _DWORD *v5; // ecx
  int v6; // edi
  void *v7; // eax

  for ( i = this->referenceCount - 1; i >= 0; --i ) /*0x54e699*/
    __3_YAXPAX_Z(*(void **)(this->uniqueId + 4 * i)); /*0x54e6a2*/
  v3 = this->vtable4; /*0x54e6ad*/
  v4 = this + 3; /*0x54e6b0*/
  v5 = this + 3; /*0x54e6b3*/
  v6 = this->abstractFlags; /*0x54e6b5*/
  (*(void (__thiscall **)(_DWORD *))(v3 + 12))(v5); /*0x54e6b8*/
  (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*v4 + 8))(v4, v6, 0); /*0x54e6c3*/
  v7 = (void *)v4[1]; /*0x54e6c6*/
  *v4 = &vt_VectorClass_KamikazeControl; /*0x54e6c9*/
  if ( v7 && *((_BYTE *)v4 + 13) ) /*0x54e6d3*/
  {
    __3_YAXPAX_Z(v7); /*0x54e6d9*/
    v4[1] = 0; /*0x54e6e1*/
  }
  *((_BYTE *)v4 + 13) = 0; /*0x54e6e4*/
  v4[2] = 0; /*0x54e6e7*/
}


// ==== 0x0054E6F0  LoadGame::CleanupArray  this=AbstractClass  sig=csp ====
wchar_t *__thiscall sub_54E6F0(_DWORD *this)
{
  int i; // esi
  int v3; // ebx
  wchar_t *result; // eax
  int v5; // [esp+10h] [ebp-8h]

  for ( i = this->referenceCount - 1; i >= 0; --i ) /*0x54e6fc*/
    __3_YAXPAX_Z(*(void **)(this->uniqueId + 4 * i)); /*0x54e705*/
  v3 = this->abstractFlags; /*0x54e713*/
  (*(void (__thiscall **)(_DWORD *))(this->vtable4 + 12))(this + 3); /*0x54e71b*/
  (*(void (__thiscall **)(_DWORD *, int, _DWORD))(this->vtable4 + 8))(this + 3, v3, 0); /*0x54e725*/
  result = MEMORY[0xA8ED84]; /*0x54e728*/
  *this = MEMORY[0xA8ED84]; /*0x54e736*/
  this->vtable2 = v5; /*0x54e738*/
  this->vtable3 = 1; /*0x54e73b*/
  return result; /*0x54e73e*/
}


// ==== 0x0054E750  SaveGame::WriteDataArray  this=AbstractClass  sig=csp ====
int __thiscall sub_54E750(_DWORD *this, int *a2)
{
  int v3; // ecx
  int result; // eax
  int i; // edi
  int v6; // [esp+20h] [ebp-4h] BYREF

  v3 = *a2; /*0x54e75c*/
  v6 = this->referenceCount; /*0x54e769*/
  result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(v3 + 16))(a2, &v6, 4, 0); /*0x54e76d*/
  if ( result >= 0 ) /*0x54e772*/
  {
    for ( i = 0; i < v6; ++i ) /*0x54e77c*/
    {
      result = (*(int (__stdcall **)(int *, _DWORD, int, _DWORD))(*a2 + 16))(a2, *(_DWORD *)(this->uniqueId + 4 * i), 8, 0); /*0x54e78c*/
      if ( result < 0 ) /*0x54e791*/
        break; /*0x54e791*/
    }
  }
  return result; /*0x54e79c*/
}


// ==== 0x0054E7B0  LoadGame::LoadPointArray  this=AbstractClass  sig=csp ====
int __thiscall sub_54E7B0(_DWORD *this, int a2)
{
  int v3; // ebx
  int *v4; // edi
  int v5; // eax
  _DWORD *v6; // esi
  int v7; // ecx
  int v8; // eax
  int v9; // edx
  int v11; // [esp+28h] [ebp-8h] BYREF
  _DWORD *v12; // [esp+2Ch] [ebp-4h]
  int v13; // [esp+34h] [ebp+4h]

  v12 = this; /*0x54e7ba*/
  v3 = (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, &v11, 4, 0); /*0x54e7cf*/
  if ( v3 >= 0 ) /*0x54e7d3*/
  {
    v13 = 0; /*0x54e7dd*/
    while ( v13 < v11 ) /*0x54e7e7*/
    {
      v4 = (int *)__2_YAPAXI_Z(8u); /*0x54e7fa*/
      v3 = (*(int (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)a2 + 12))(a2, v4, 8, 0); /*0x54e805*/
      if ( v3 < 0 ) /*0x54e809*/
        break; /*0x54e809*/
      ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], v4); /*0x54e811*/
      ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], v4 + 1); /*0x54e81f*/
      v5 = v12[5]; /*0x54e828*/
      v6 = v12 + 3; /*0x54e82b*/
      if ( v12[7] >= v5 ) /*0x54e833*/
      {
        if ( !*((_BYTE *)v12 + 25) && v5 ) /*0x54e83e*/
          continue; /*0x54e83e*/
        v7 = v12[8]; /*0x54e840*/
        if ( v7 <= 0 || !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v6 + 8))(v12 + 3, v5 + v7, 0) ) /*0x54e850*/
          continue; /*0x54e850*/
      }
      v8 = v6[4]; /*0x54e857*/
      v9 = v6[1]; /*0x54e85a*/
      v6[4] = v8 + 1; /*0x54e860*/
      *(_DWORD *)(v9 + 4 * v8) = v4; /*0x54e863*/
      ++v13; /*0x54e871*/
    }
  }
  return v3; /*0x54e87b*/
}


// ==== 0x0054E890  _DynamicVectorClass_PAUKamikazeControl::ClearBuffer  this=DynamicVector  sig=csp ====
void __thiscall JumpjetLocomotionClass_26_::sub_54E890(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x54e896*/
  *(_DWORD *)(this + 16) = 0; /*0x54e899*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x54e8a0*/
  {
    __3_YAXPAX_Z(v2); /*0x54e8a6*/
    *(_DWORD *)(this + 4) = 0; /*0x54e8ae*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x54e8b1*/
  *(_DWORD *)(this + 8) = 0; /*0x54e8b4*/
}


// ==== 0x0054E8C0  _DynamicVectorClass_PAUKamikazeControl::PointerToIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall JumpjetLocomotionClass_26_::sub_54E8C0(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x54e8c0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x54e8d5*/
  else
    return 0; /*0x54e8c7*/
}


// ==== 0x0054E8E0  _VectorClass_PAUKamikazeControl::Seek  this=VectorClass  sig=csp ====
int __thiscall JumpjetLocomotionClass_26_::_vt06(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x54e8ea*/
}


// ==== 0x0054E8F0  _VectorClass_PAUKamikazeControl::AddRef  this=VectorClass  sig=csp ====
char __thiscall JumpjetLocomotionClass_26_::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x54e8f2*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x54e8fd*/
  {
    v3 = 0; /*0x54e8ff*/
    if ( v2 <= 0 ) /*0x54e903*/
      return 1; /*0x54e923*/
    v4 = (_DWORD *)this->Items; /*0x54e905*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x54e90b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x54e914*/
    {
      ++v3; /*0x54e916*/
      ++v4; /*0x54e917*/
      if ( v3 >= v2 ) /*0x54e91c*/
        return 1; /*0x54e91c*/
    }
  }
  return 0; /*0x54e91e*/
}


// ==== 0x0054E930  _VectorClass_PAUKamikazeControl::Release  this=VectorClass  sig=csp ====
char __thiscall JumpjetLocomotionClass_26_::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x54e93c*/
  {
    this->IsInitialized = 0; /*0x54e946*/
    if ( a3 ) /*0x54e94c*/
      v4 = a3; /*0x54e962*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x54e95e*/
    this->IsInitialized = 1; /*0x54e966*/
    if ( v4 ) /*0x54e96a*/
    {
      if ( this->Items ) /*0x54e975*/
      {
        v6 = this->Capacity; /*0x54e97c*/
        if ( a2 < v6 ) /*0x54e981*/
          v6 = a2; /*0x54e983*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x54e989*/
          ++i; /*0x54e98e*/
        if ( this->IsAllocated ) /*0x54e99b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x54e9a6*/
          this->Items = 0; /*0x54e9ae*/
        }
      }
      this->Items = v4; /*0x54e9b7*/
      this->Capacity = a2; /*0x54e9bf*/
      this->IsAllocated = a3 == 0; /*0x54e9c2*/
      return 1; /*0x54e9c8*/
    }
    else
    {
      return 0; /*0x54e96f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x54e9d2*/
    return 1; /*0x54e9d8*/
  }
}


// ==== 0x0054E9E0  _VectorClass_PAUKamikazeControl::ddtor  this=VectorClass  sig=csp ====
void __thiscall JumpjetLocomotionClass_26_::_vt03(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x54e9ed*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x54e9f3*/
    *(_DWORD *)(this + 4) = 0; /*0x54e9fb*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x54e9fe*/
  *(_DWORD *)(this + 8) = 0; /*0x54ea01*/
}


// ==== 0x0054EA10  _VectorClass_PAUKamikazeControl::Read  this=VectorClass  sig=csp ====
int __thiscall JumpjetLocomotionClass_26_::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x54ea10*/
    return 0; /*0x54ea18*/
  v3 = *(_DWORD *)(this + 8); /*0x54ea1e*/
  result = 0; /*0x54ea21*/
  if ( v3 <= 0 ) /*0x54ea25*/
    return -1; /*0x54ea3c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x54ea2b*/
  {
    if ( ++result >= v3 ) /*0x54ea3a*/
      return -1; /*0x54ea3a*/
  }
  return result; /*0x54ea1a*/
}


// ==== 0x0054EA50  _VectorClass_PAUKamikazeControl::Write  this=VectorClass  sig=csp ====
unsigned int __thiscall JumpjetLocomotionClass_26_::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x54ea50*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x54ea65*/
  else
    return 0; /*0x54ea57*/
}


// ==== 0x0054EA70  _DynamicVectorClass_PAUKamikazeControl::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall JumpjetLocomotionClass_26_::sub_54EA70(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x54ea7c*/
  {
    this->IsInitialized = 0; /*0x54ea82*/
    if ( a3 ) /*0x54ea88*/
      v4 = a3; /*0x54ea9e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x54ea9a*/
    this->IsInitialized = 1; /*0x54eaa2*/
    if ( !v4 ) /*0x54eaa6*/
      return 0; /*0x54eb1a*/
    if ( this->Items ) /*0x54eaa8*/
    {
      v5 = this->DynamicVector_field_0x8; /*0x54eaaf*/
      if ( a2 < v5 ) /*0x54eab4*/
        v5 = a2; /*0x54eab6*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x54eabc*/
        ++i; /*0x54eac1*/
      if ( this->IsAllocated ) /*0x54eace*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x54ead9*/
        this->Items = 0; /*0x54eae1*/
      }
    }
    this->Items = v4; /*0x54eaea*/
    this->DynamicVector_field_0x8 = a2; /*0x54eaf2*/
    this->IsAllocated = a3 == 0; /*0x54eaf5*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x54eafe*/
  }
  v7 = this->DynamicVector_field_0x8; /*0x54eb01*/
  if ( v7 < this->Items ) /*0x54eb09*/
    this->Items = v7; /*0x54eb0b*/
  return 1; /*0x54eb0e*/
}


// ==== 0x0054EB20  _DynamicVectorClass_PAUKamikazeControl::FindItem  this=DynamicVector  sig=csp ====
int __thiscall JumpjetLocomotionClass_26_::sub_54EB20(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x54eb20*/
  result = 0; /*0x54eb23*/
  if ( v2 <= 0 ) /*0x54eb28*/
    return -1; /*0x54eb3f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x54eb2e*/
  {
    if ( ++result >= v2 ) /*0x54eb3d*/
      return -1; /*0x54eb3d*/
  }
  return result; /*0x54eb42*/
}


// ==== 0x0054EB50  _VectorClass_PAUKamikazeControl::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall JumpjetLocomotionClass_26_::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x54eb53*/
  *Block = &vt_VectorClass_KamikazeControl; /*0x54eb56*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x54eb60*/
  {
    __3_YAXPAX_Z(v3); /*0x54eb68*/
    *(Block + 1) = 0; /*0x54eb70*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x54eb7b*/
  *(Block + 2) = 0; /*0x54eb81*/
  if ( (a2 & 1) != 0 ) /*0x54eb88*/
    __3_YAXPAX_Z(Block); /*0x54eb8b*/
  return (VectorClass *)Block; /*0x54eb95*/
}


// ==== 0x0054EBA0  _DynamicVectorClass_PAUKamikazeControl::Constructor_VectorClass_KamikazeControl___  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall JumpjetLocomotionClass_26_::Constructor_VectorClass_KamikazeControl___(
        _DWORD *Block,
        char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x54eba3*/
  *Block = &vt_VectorClass_KamikazeControl; /*0x54eba6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x54ebb0*/
  {
    __3_YAXPAX_Z(v3); /*0x54ebb8*/
    *(Block + 1) = 0; /*0x54ebc0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x54ebcb*/
  *(Block + 2) = 0; /*0x54ebd1*/
  if ( (a2 & 1) != 0 ) /*0x54ebd8*/
    __3_YAXPAX_Z(Block); /*0x54ebdb*/
  return (DynamicVector *)Block; /*0x54ebe5*/
}


// ==== 0x0054EBF0  VectorClass::sub_54EBF0  this=VectorClass  sig=csp ====
_DWORD *__thiscall sub_54EBF0(_DWORD *this, int a2, int a3)
{
  this->Items = 0; /*0x54ebfb*/
  this->Capacity = a2; /*0x54ebfe*/
  this->q030 = 1; /*0x54ec01*/
  this->__pad_034 = 0; /*0x54ec05*/
  *this = &vt_VectorClass_KamikazeControl; /*0x54ec08*/
  if ( a2 ) /*0x54ec0e*/
  {
    if ( a3 ) /*0x54ec16*/
    {
      this->Items = a3; /*0x54ec18*/
      return this; /*0x54ec1e*/
    }
    this->Items = __2_YAPAXI_Z(4 * a2); /*0x54ec2d*/
    this->__pad_034 = 1; /*0x54ec30*/
  }
  return this; /*0x54ec1d*/
}


// ==== 0x0054EC40  sub_54EC40  this=-  sig=ida-proto ====
int sub_54EC40()
{
  dword_ABC6A0 = 0; /*0x54ec42*/
  dword_ABC6A4 = 0; /*0x54ec47*/
  dword_ABC6A8 = 0; /*0x54ec4c*/
  dword_ABC6AC = 0; /*0x54ec51*/
  return 0; /*0x54ec56*/
}


// ==== 0x0054EC60  sub_54EC60  this=-  sig=ida-proto ====
void sub_54EC60()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x54ec6c*/
  dbl_ABC6B8 = Math::Sqrt(v0 + v0); /*0x54ec7e*/
}


// ==== 0x0054EC90  sub_54EC90  this=-  sig=ida-proto ====
void sub_54EC90()
{
  dbl_ABC708 = dbl_ABC6B8 / 60.0; /*0x54ec9c*/
}


// ==== 0x0054ECB0  sub_54ECB0  this=-  sig=ida-proto ====
void sub_54ECB0()
{
  dbl_ABC6F0 = 1.0 / dbl_ABC708; /*0x54ecbc*/
}


// ==== 0x0054ECD0  sub_54ECD0  this=-  sig=ida-proto ====
void sub_54ECD0()
{
  dbl_ABC6E8 = 0.0174532925199433 * 45.0; /*0x54ecdc*/
}


// ==== 0x0054ECF0  sub_54ECF0  this=-  sig=ida-proto ====
void sub_54ECF0()
{
  dbl_ABC6C0 = 0.0174532925199433 * 60.0; /*0x54ecfc*/
}


// ==== 0x0054ED10  sub_54ED10  this=-  sig=ida-proto ====
void sub_54ED10()
{
  dbl_ABC698 = 0.0174532925199433 * 90.0; /*0x54ed1c*/
}


// ==== 0x0054ED30  sub_54ED30  this=-  sig=ida-proto ====
__int64 sub_54ED30()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_ABC698 - dbl_ABC6C0); /*0x54ed42*/
  result = Math::RoundToInt(v0 * dbl_ABC6B8 * 0.5); /*0x54ed56*/
  dword_ABC710 = result; /*0x54ed5b*/
  return result; /*0x54ed60*/
}


// ==== 0x0054ED70  sub_54ED70  this=-  sig=ida-proto ====
void sub_54ED70()
{
  dbl_ABC6C8 = Math::ArcTan((double)dword_ABC710 * 0.00390625); /*0x54ed87*/
}


// ==== 0x0054EDA0  sub_54EDA0  this=-  sig=ida-proto ====
void sub_54EDA0()
{
  dbl_ABC6E0 = Math::ArcTan((double)(2 * dword_ABC710) / dbl_ABC6B8); /*0x54edc2*/
}


// ==== 0x0054EDD0  sub_54EDD0  this=-  sig=ida-proto ====
__int64 sub_54EDD0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABC710) + 0.5); /*0x54edeb*/
  dword_ABC704 = result; /*0x54edf0*/
  return result; /*0x54edf6*/
}


// ==== 0x0054EE00  sub_54EE00  this=-  sig=ida-proto ====
int sub_54EE00()
{
  word_ABC6B0 = 0; /*0x54ee02*/
  word_ABC6B2 = 0; /*0x54ee08*/
  return 0; /*0x54ee0e*/
}


// ==== 0x0054EE10  sub_54EE10  this=-  sig=ida-proto ====
int sub_54EE10()
{
  dword_ABC6D0 = 0; /*0x54ee12*/
  dword_ABC6D4 = 0; /*0x54ee17*/
  dword_ABC6D8 = 0; /*0x54ee1c*/
  return 0; /*0x54ee21*/
}


// ==== 0x0054EE30  sub_54EE30  this=-  sig=ida-proto ====
int sub_54EE30()
{
  dword_ABC700 = 0; /*0x54ee35*/
  dword_ABC6F8 = 128; /*0x54ee3f*/
  dword_ABC6FC = 128; /*0x54ee44*/
  return 128; /*0x54ee49*/
}


// ==== 0x0054EE50  nullsub_157  this=-  sig=ida-proto ====
void nullsub_157()
{
  ; /*0x54ee50*/
}


// ==== 0x0054EE60  NetworkSession::ResetState  this=NetworkSession  sig=csp ====
_DWORD *__thiscall sub_54EE60(_DWORD *this)
{
  *this = 0; /*0x54ee6a*/
  this->NetworkSession_field_0x04 = 0; /*0x54ee6c*/
  this->q003 = 0; /*0x54ee6f*/
  this->NetworkSession_field_0x04 = 0; /*0x54ee72*/
  this->q0C5 = 0; /*0x54ee78*/
  this->q0C6 = 0; /*0x54ee7e*/
  memset(this + 5, 0, 0x100u); /*0x54ee84*/
  return this; /*0x54ee88*/
}


// ==== 0x0054F000  EventQueue::Process  this=AbstractClass  sig=csp ====
__int16 __thiscall EventQueue::Process(_DWORD *this)
{
  int v2; // eax

  if ( (*(this + 198) + 1) % 256 != *(this + 197) ) /*0x54f01e*/
    MessageLoop(); /*0x54f020*/
  v2 = *(this + 197); /*0x54f025*/
  if ( v2 == *(this + 198) ) /*0x54f033*/
    return 0; /*0x54f035*/
  else
    return *((_WORD *)this + v2 + 138); /*0x54f03a*/
}


// ==== 0x0054F050  EventQueue::Read  this=AbstractClass  sig=csp ====
__int16 __thiscall EventQueue_Read(_DWORD *this)
{
  int v2; // eax
  int v3; // ecx
  int v4; // edi
  __int16 result; // ax
  int v6; // edx
  unsigned __int16 v7; // cx
  int v8; // ebx
  unsigned __int16 v9; // dx
  int v10; // ecx
  __int16 v11; // dx

  do /*0x54f086*/
  {
    if ( (*(this + 198) + 1) % 256 != *(this + 197) ) /*0x54f06f*/
      MessageLoop(); /*0x54f071*/
    v2 = *(this + 197); /*0x54f076*/
  }
  while ( v2 == *(this + 198) || !*((_WORD *)this + v2 + 138) ); /*0x54f086*/
  do /*0x54f0b3*/
  {
    if ( !(unsigned __int8)EventQueue::CheckPosition(this) ) /*0x54f093*/
      MessageLoop(); /*0x54f09c*/
  }
  while ( *(this + 197) == *(this + 198) || !(unsigned __int16)EventQueue::Check(this) ); /*0x54f0b3*/
  v3 = *(this + 197); /*0x54f0bd*/
  v4 = *(this + 198); /*0x54f0c3*/
  result = 0; /*0x54f0c9*/
  if ( v3 != v4 ) /*0x54f0cd*/
  {
    result = *((_WORD *)this + v3 + 138); /*0x54f0cf*/
    *(this + 197) = (v3 + 1) % 256; /*0x54f0e8*/
  }
  if ( (unsigned __int8)result == 1 || (unsigned __int8)result == 4 || (unsigned __int8)result == 2 ) /*0x54f106*/
  {
    v6 = *(this + 197); /*0x54f108*/
    v7 = 0; /*0x54f10e*/
    if ( v6 != v4 ) /*0x54f112*/
    {
      v7 = *((_WORD *)this + v6 + 138); /*0x54f114*/
      *(this + 197) = (v6 + 1) % 256; /*0x54f12d*/
    }
    v8 = *(this + 197); /*0x54f134*/
    v9 = 0; /*0x54f140*/
    *this = v7; /*0x54f144*/
    if ( v8 != v4 ) /*0x54f146*/
    {
      v9 = *((_WORD *)this + v8 + 138); /*0x54f148*/
      *(this + 197) = (v8 + 1) % 256; /*0x54f161*/
    }
    this->vtable4 = v7; /*0x54f16d*/
    this->vtable2 = v9; /*0x54f171*/
    this->uniqueId = v9; /*0x54f174*/
  }
  else if ( (unsigned __int8)result == 10 ) /*0x54f17e*/
  {
    v10 = *(this + 197); /*0x54f180*/
    v11 = 0; /*0x54f186*/
    if ( v10 != v4 ) /*0x54f18a*/
    {
      v11 = *((_WORD *)this + v10 + 138); /*0x54f18c*/
      *(this + 197) = (v10 + 1) % 256; /*0x54f1a5*/
    }
    this->uniqueId = v11; /*0x54f1ab*/
  }
  return result; /*0x54f177*/
}


// ==== 0x0054F1C0  EventBuffer::Enqueue  this=AbstractClass  sig=csp ====
char __thiscall EventBuffer_Enqueue(_DWORD *this, __int16 a2)
{
  int v2; // edx
  int v3; // eax

  v2 = *(this + 198); /*0x54f1c0*/
  v3 = (v2 + 1) % 256; /*0x54f1d7*/
  if ( v3 == *(this + 197) ) /*0x54f1de*/
    return 0; /*0x54f1f9*/
  *((_WORD *)this + v2 + 138) = a2; /*0x54f1e5*/
  *(this + 198) = v3; /*0x54f1ed*/
  return 1; /*0x54f1f5*/
}


// ==== 0x0054F200  EventClass::Enqueue  this=AbstractClass  sig=csp ====
char __thiscall EventClass_Enqueue(_DWORD *this, unsigned __int16 a2, char a3)
{
  int v4; // edx
  __int16 v5; // si
  int v6; // ecx
  int v7; // eax

  if ( (unsigned __int8)ChronoScreen::IsActive() ) /*0x54f205*/
    return 1; /*0x54f205*/
  v5 = a2; /*0x54f217*/
  if ( MEMORY[0xA8ED9C] ) /*0x54f21d*/
  {
    if ( a2 != 27 ) /*0x54f223*/
      return 1; /*0x54f223*/
  }
  LOBYTE(v4) = a3; /*0x54f22f*/
  Memory_Helper(a2, v4); /*0x54f237*/
  if ( (unsigned __int8)a2 != 1 && (unsigned __int8)a2 != 4 && (unsigned __int8)a2 != 2 && (unsigned __int8)a2 != 10 ) /*0x54f259*/
  {
    if ( (((unsigned __int16)EventClass::GetKeyStateSafe(16) >> 8) & 0x80u) != 0 ) /*0x54f268*/
      v5 = a2 | 0x100; /*0x54f26a*/
    if ( (((unsigned __int16)EventClass::GetKeyStateSafe(17) >> 8) & 0x80u) != 0 ) /*0x54f27d*/
      v5 |= 0x200u; /*0x54f27f*/
    if ( (((unsigned __int16)EventClass::GetKeyStateSafe(18) >> 8) & 0x80u) != 0 ) /*0x54f292*/
    {
      if ( v5 == 9 ) /*0x54f298*/
        return 1; /*0x54f2dc*/
      v5 |= 0x400u; /*0x54f29a*/
    }
  }
  if ( a3 ) /*0x54f2a2*/
    v5 |= 0x800u; /*0x54f2a4*/
  v6 = *(this + 198); /*0x54f2aa*/
  v7 = (v6 + 1) % 256; /*0x54f2c0*/
  if ( v7 != *(this + 197) ) /*0x54f2c7*/
  {
    *((_WORD *)this + v6 + 138) = v5; /*0x54f2c9*/
    *(this + 198) = v7; /*0x54f2d1*/
    return 1; /*0x54f2d1*/
  }
  return 0; /*0x54f2d7*/
}


// ==== 0x0054F2F0  InputManager::EnqueueInputEvent  this=AbstractClass  sig=csp ====
char __thiscall InputManager::EnqueueInputEvent(
        _DWORD *this,
        unsigned __int16 a2,
        CCINIClass *aP2,
        __int16 a4,
        char a5)
{
  __int64 v7; // rax
  int v8; // ecx
  int v9; // eax
  int v10; // ecx
  int v11; // eax

  if ( MEMORY[0xA8D63C].__pad_14B0[688] ) /*0x54f2fa*/
    return 1; /*0x54f2fc*/
  v7 = *(this + 198) - *(this + 197); /*0x54f315*/
  if ( (int)(256 - ((HIDWORD(v7) ^ v7) - HIDWORD(v7))) < 3 /*0x54f343*/
    || (unsigned __int8)a2 != 1 && (unsigned __int8)a2 != 4 && (unsigned __int8)a2 != 2 )
  {
    return 0; /*0x54f3bc*/
  }
  EventClass::Enqueue(this, a2, a5); /*0x54f34d*/
  v8 = *(this + 198); /*0x54f352*/
  v9 = (v8 + 1) % 256; /*0x54f368*/
  if ( v9 != *(this + 197) ) /*0x54f36f*/
  {
    *((_WORD *)this + v8 + 138) = (_WORD)aP2; /*0x54f376*/
    *(this + 198) = v9; /*0x54f37e*/
  }
  v10 = *(this + 198); /*0x54f384*/
  v11 = (v10 + 1) % 256; /*0x54f39a*/
  if ( v11 != *(this + 197) ) /*0x54f3a1*/
  {
    *((_WORD *)this + v10 + 138) = a4; /*0x54f3a8*/
    *(this + 198) = v11; /*0x54f3b0*/
  }
  return 1; /*0x54f2fe*/
}


// ==== 0x0054F450  Keyboard::MapKey  this=AbstractClass  sig=csp ====
char __thiscall Keyboard_MapKey(int this, unsigned __int16 a2)
{
  __int16 v5; // di
  UINT v6; // eax
  int v7; // eax
  WORD Char[6]; // [esp+8h] [ebp-Ch] BYREF
  __int16 v9; // [esp+18h] [ebp+4h]

  if ( (a2 & 0x800) != 0 ) /*0x54f461*/
    return 0; /*0x54f464*/
  if ( (unsigned __int8)a2 == 36 ) /*0x54f478*/
    return 8; /*0x54f47b*/
  if ( (unsigned __int8)a2 == 35 ) /*0x54f488*/
    return 92; /*0x54f48b*/
  v5 = a2 & 0x100; /*0x54f49a*/
  if ( (a2 & 0x100) != 0 ) /*0x54f4a3*/
    *(_BYTE *)(this + 36) = 0x80; /*0x54f4a5*/
  v9 = a2 & 0x200; /*0x54f4b2*/
  if ( (a2 & 0x200) != 0 ) /*0x54f4b6*/
    *(_BYTE *)(this + 37) = 0x80; /*0x54f4b8*/
  if ( (a2 & 0x400) != 0 ) /*0x54f4c6*/
    *(_BYTE *)(this + 38) = 0x80; /*0x54f4c8*/
  v6 = MapVirtualKeyA(a2, 0); /*0x54f4d4*/
  v7 = ToAscii(a2, v6, (const BYTE *)(this + 20), Char, 0); /*0x54f4e7*/
  if ( v5 ) /*0x54f4f0*/
    *(_BYTE *)(this + 36) = 0; /*0x54f4f2*/
  if ( v9 ) /*0x54f4fc*/
    *(_BYTE *)(this + 37) = 0; /*0x54f4fe*/
  if ( (a2 & 0x400) != 0 ) /*0x54f507*/
    *(_BYTE *)(this + 38) = 0; /*0x54f509*/
  return v7 != 1 ? 0 : LOBYTE(Char[0]);
}


// ==== 0x0054F530  ObjectClass::Event_Process  this=AbstractClass  sig=csp ====
char __thiscall Event_Process(_BYTE *this, CCINIClass *aP1)
{
  char result; // al

  if ( (BYTE1(aP1) & 8) != 0 ) /*0x54f53a*/
    return 0; /*0x54f57f*/
  result = (char)aP1; /*0x54f53c*/
  switch ( (char)aP1 ) /*0x54f559*/
  {
    case 8: /*0x54f559*/
    case 13: /*0x54f559*/
    case 27: /*0x54f559*/
      return result;
    case 10: /*0x54f559*/
      result = this->vtable3; /*0x54f56c*/
      if ( result == 13 ) /*0x54f571*/
        result = 0; /*0x54f573*/
      this->vtable2 = 0; /*0x54f575*/
      break; /*0x54f57c*/
    case 35: /*0x54f559*/
      result = 92; /*0x54f566*/
      break; /*0x54f569*/
    case 36: /*0x54f559*/
      result = 8; /*0x54f560*/
      break; /*0x54f563*/
    default:
      return 0;
  }
  return result; /*0x54f562*/
}


// ==== 0x0054F5C0  Mouse::IsButtonDown  this=AbstractClass  sig=csp ====
BOOL __stdcall Mouse_IsButtonDown(unsigned __int8 a1)
{
  unsigned __int16 v1; // si

  v1 = a1; /*0x54f5c5*/
  if ( (a1 == 1 || a1 == 2) && GetSystemMetrics(23) == 1 ) /*0x54f5e2*/
    v1 = 2 - (a1 != 1); /*0x54f5eb*/
  return (unsigned __int16)Mouse::GetKeyState(v1) != 0; /*0x54f600*/
}


// ==== 0x0054F650  EventQueue::Check  this=AbstractClass  sig=csp ====
__int16 __thiscall sub_54F650(_DWORD *this)
{
  int v1; // eax

  v1 = *(this + 197); /*0x54f650*/
  if ( v1 == *(this + 198) ) /*0x54f65e*/
    return 0; /*0x54f669*/
  else
    return *((_WORD *)this + v1 + 138); /*0x54f660*/
}


// ==== 0x0054F670  InputManager::PushInputEvent  this=AbstractClass  sig=csp ====
char __thiscall sub_54F670(_DWORD *this, __int16 a2)
{
  int v2; // edx
  int v3; // eax

  v2 = *(this + 198); /*0x54f670*/
  v3 = (v2 + 1) % 256; /*0x54f687*/
  if ( v3 == *(this + 197) ) /*0x54f68e*/
    return 0; /*0x54f6a9*/
  *((_WORD *)this + v2 + 138) = a2; /*0x54f695*/
  *(this + 198) = v3; /*0x54f69d*/
  return 1; /*0x54f6a5*/
}


// ==== 0x0054F6B0  EventQueue::CheckPosition  this=AbstractClass  sig=csp ====
bool __thiscall EventQueue_CheckPosition(_DWORD *this)
{
  return (*(this + 198) + 1) % 256 == *(this + 197); /*0x54f6ce*/
}


// ==== 0x0054F6D0  ObjectClass::method_54F6D0  this=ObjectClass  sig=csp ====
bool __thiscall sub_54F6D0(_DWORD *this)
{
  return this->q0C5 == this->q0C6; /*0x54f6e1*/
}


// ==== 0x0054F720  Timer::PumpMessages  this=AbstractClass  sig=csp ====
int __thiscall Timer::PumpMessages(int *this)
{
  int v2; // eax
  int result; // eax

  if ( (*(this + 198) + 1) % 256 != *(this + 197) ) /*0x54f73e*/
    MessageLoop(); /*0x54f740*/
  v2 = *(this + 198); /*0x54f745*/
  *(this + 197) = v2; /*0x54f74b*/
  if ( (v2 + 1) % 256 == v2 ) /*0x54f766*/
  {
    result = *(this + 198); /*0x54f77b*/
    *(this + 197) = result; /*0x54f781*/
  }
  else
  {
    result = MessageLoop(); /*0x54f768*/
    *(this + 197) = *(this + 198); /*0x54f773*/
  }
  return result; /*0x54f779*/
}


// ==== 0x0054F790  InputManager::WndProc  this=AbstractClass  sig=csp ====
int __thiscall InputManager::WndProc(_DWORD *this, HWND hWnd, UINT Msg, CCINIClass *aP3, unsigned int lParam)
{
  CCINIClass *x; // edi
  __int16 y; // bp
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int16 v17[2]; // [esp+10h] [ebp-10h] BYREF
  CCINIClass *aP2; // [esp+14h] [ebp-Ch] BYREF
  struct tagPOINT Point; // [esp+18h] [ebp-8h] BYREF

  Point.y = HIWORD(lParam); /*0x54f7a6*/
  Point.x = (unsigned __int16)lParam; /*0x54f7b6*/
  ClientToScreen(hWnd, &Point); /*0x54f7ba*/
  x = (CCINIClass *)Point.x; /*0x54f7c6*/
  y = Point.y; /*0x54f7ca*/
  aP2 = (CCINIClass *)Point.x; /*0x54f7ce*/
  *(_DWORD *)v17 = Point.y; /*0x54f7d4*/
  if ( *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10228] ) /*0x54f7d8*/
  {
    (*(void (__thiscall **)(_DWORD, CCINIClass **, __int16 *))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[10228] + 68))( /*0x54f7e6*/
      *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10228],
      &aP2,
      v17);
    x = aP2; /*0x54f7e9*/
    y = v17[0]; /*0x54f7ed*/
  }
  if ( Msg > 0x201 ) /*0x54f7fe*/
  {
    switch ( Msg ) /*0x54f916*/
    {
      case 0x202u: /*0x54f916*/
        if ( MEMORY[0xA8D63C].__pad_14B0[688] ) /*0x54f924*/
          goto LABEL_45; /*0x54f924*/
        v10 = *(this + 198) - *(this + 197); /*0x54f938*/
        if ( (int)(256 - ((HIDWORD(v10) ^ v10) - HIDWORD(v10))) < 3 ) /*0x54f947*/
          goto LABEL_45; /*0x54f947*/
        EventClass::Enqueue(this, 1u, 1); /*0x54f94f*/
        goto LABEL_17; /*0x54f94f*/
      case 0x203u: /*0x54f916*/
        if ( MEMORY[0xA8D63C].__pad_14B0[688] ) /*0x54f958*/
          goto LABEL_45; /*0x54f958*/
        v11 = *(this + 198) - *(this + 197); /*0x54f971*/
        if ( (int)(256 - ((HIDWORD(v11) ^ v11) - HIDWORD(v11))) >= 3 ) /*0x54f97b*/
        {
          EventClass::Enqueue(this, 1u, 0); /*0x54f983*/
          if ( !EventQueue::CheckPosition(this) ) /*0x54f98a*/
            InputManager::PushInputEvent(this, (__int16)x); /*0x54f996*/
          EventBuffer::Enqueue(this, y); /*0x54f99e*/
          LOWORD(x) = (_WORD)aP2; /*0x54f9a3*/
          y = v17[0]; /*0x54f9a7*/
        }
        if ( MEMORY[0xA8D63C].__pad_14B0[688] ) /*0x54f9b2*/
          goto LABEL_45; /*0x54f9b2*/
        v12 = *(this + 198) - *(this + 197); /*0x54f9c6*/
        if ( (int)(256 - ((HIDWORD(v12) ^ v12) - HIDWORD(v12))) < 3 ) /*0x54f9d5*/
          goto LABEL_45; /*0x54f9d5*/
        EventClass::Enqueue(this, 1u, 1); /*0x54f9e1*/
        if ( !EventQueue::CheckPosition(this) ) /*0x54f9e8*/
          goto LABEL_31; /*0x54f9ef*/
        goto LABEL_32; /*0x54f9ef*/
      case 0x204u: /*0x54f916*/
        InputManager::EnqueueInputEvent(this, 2u, x, y, 0); /*0x54faee*/
        goto LABEL_45; /*0x54faee*/
      case 0x205u: /*0x54f916*/
        InputManager::EnqueueInputEvent(this, 2u, x, y, 1); /*0x54faf4*/
        goto LABEL_45; /*0x54faf4*/
      case 0x206u: /*0x54f916*/
        InputManager::EnqueueInputEvent(this, 2u, x, y, 0); /*0x54fafe*/
        InputManager::EnqueueInputEvent(this, 2u, aP2, v17[0], 1); /*0x54fb13*/
        goto LABEL_45; /*0x54fb13*/
      case 0x207u: /*0x54f916*/
        if ( !MEMORY[0xA8D63C].__pad_14B0[688] ) /*0x54fa0d*/
        {
          v13 = *(this + 198) - *(this + 197); /*0x54fa26*/
          if ( (int)(256 - ((HIDWORD(v13) ^ v13) - HIDWORD(v13))) >= 3 ) /*0x54fa30*/
          {
            EventClass::Enqueue(this, 4u, 0); /*0x54fa3c*/
            EventBuffer::Enqueue(this, (__int16)x); /*0x54fa44*/
            EventBuffer::Enqueue(this, y); /*0x54fa4c*/
          }
        }
        goto LABEL_45; /*0x54fa51*/
      case 0x208u: /*0x54f916*/
        goto LABEL_39;
      case 0x209u: /*0x54f916*/
        if ( MEMORY[0xA8D63C].__pad_14B0[688] ) /*0x54fa5d*/
          goto LABEL_45; /*0x54fa5d*/
        v14 = *(this + 198) - *(this + 197); /*0x54fa76*/
        if ( (int)(256 - ((HIDWORD(v14) ^ v14) - HIDWORD(v14))) >= 3 ) /*0x54fa80*/
        {
          EventClass::Enqueue(this, 4u, 0); /*0x54fa88*/
          EventBuffer::Enqueue(this, (__int16)x); /*0x54fa90*/
          EventBuffer::Enqueue(this, y); /*0x54fa98*/
          LOWORD(x) = (_WORD)aP2; /*0x54fa9d*/
          y = v17[0]; /*0x54faa1*/
        }
LABEL_39:
        if ( !MEMORY[0xA8D63C].__pad_14B0[688] ) /*0x54faac*/
        {
          v15 = *(this + 198) - *(this + 197); /*0x54fabc*/
          if ( (int)(256 - ((HIDWORD(v15) ^ v15) - HIDWORD(v15))) >= 3 ) /*0x54facb*/
          {
            EventClass::Enqueue(this, 4u, 1); /*0x54fad3*/
            EventBuffer::Enqueue(this, (__int16)x); /*0x54fadb*/
            EventBuffer::Enqueue(this, y); /*0x54fae3*/
          }
        }
        goto LABEL_45; /*0x54fae8*/
      default:
        return 0; /*0x54fb40*/
    }
  }
  if ( Msg != 513 ) /*0x54f809*/
  {
    switch ( Msg ) /*0x54f81d*/
    {
      case 0x100u: /*0x54f81d*/
      case 0x104u: /*0x54f81d*/
        if ( aP3 != (CCINIClass *)145 && (lParam & 0x40000000) == 0 ) /*0x54f838*/
          EventClass::Enqueue(this, (unsigned __int16)aP3, 0); /*0x54f843*/
        goto LABEL_45; /*0x54f848*/
      case 0x101u: /*0x54f81d*/
      case 0x105u: /*0x54f81d*/
        EventClass::Enqueue(this, (unsigned __int16)aP3, 1); /*0x54f852*/
        goto LABEL_45; /*0x54f857*/
      case 0x102u: /*0x54f81d*/
        if ( MEMORY[0xA8BC79] ) /*0x54f863*/
        {
          if ( !MEMORY[0xA8D63C].__pad_14B0[688] ) /*0x54f870*/
          {
            v8 = *(this + 198) - *(this + 197); /*0x54f889*/
            if ( (int)(256 - ((HIDWORD(v8) ^ v8) - HIDWORD(v8))) >= 2 ) /*0x54f893*/
            {
              EventClass::Enqueue(this, 0xAu, 0); /*0x54f89f*/
              EventBuffer::Enqueue(this, (unsigned __int8)aP3); /*0x54f8af*/
            }
          }
        }
        goto LABEL_45; /*0x54f8b4*/
      default:
        return 0;
    }
  }
  if ( !MEMORY[0xA8D63C].__pad_14B0[688] ) /*0x54f8c0*/
  {
    v9 = *(this + 198) - *(this + 197); /*0x54f8d9*/
    if ( (int)(256 - ((HIDWORD(v9) ^ v9) - HIDWORD(v9))) >= 3 ) /*0x54f8e3*/
    {
      EventClass::Enqueue(this, 1u, 0); /*0x54f8ef*/
LABEL_17:
      if ( !EventQueue::CheckPosition(this) ) /*0x54f8f6*/
LABEL_31:
        InputManager::PushInputEvent(this, (__int16)x); /*0x54f9f1*/
LABEL_32:
      EventBuffer::Enqueue(this, y); /*0x54f9f9*/
    }
  }
LABEL_45:
  DefWindowProcA(hWnd, Msg, (WPARAM)aP3, lParam); /*0x54fb18*/
  return 1; /*0x54fb2e*/
}


// ==== 0x0054FBB0  sub_54FBB0  this=-  sig=ida-proto ====
void sub_54FBB0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x54fbbc*/
  dbl_ABC7C0 = Math::Sqrt(v0 + v0); /*0x54fbce*/
}


// ==== 0x0054FBE0  sub_54FBE0  this=-  sig=ida-proto ====
void sub_54FBE0()
{
  dbl_ABC8B0 = dbl_ABC7C0 / 60.0; /*0x54fbec*/
}


// ==== 0x0054FC00  sub_54FC00  this=-  sig=ida-proto ====
void sub_54FC00()
{
  dbl_ABC898 = 1.0 / dbl_ABC8B0; /*0x54fc0c*/
}


// ==== 0x0054FC20  sub_54FC20  this=-  sig=ida-proto ====
void sub_54FC20()
{
  dbl_ABC890 = 0.0174532925199433 * 45.0; /*0x54fc2c*/
}


// ==== 0x0054FC40  sub_54FC40  this=-  sig=ida-proto ====
void sub_54FC40()
{
  dbl_ABC7D0 = 0.0174532925199433 * 60.0; /*0x54fc4c*/
}


// ==== 0x0054FC60  sub_54FC60  this=-  sig=ida-proto ====
void sub_54FC60()
{
  dbl_ABC720 = 0.0174532925199433 * 90.0; /*0x54fc6c*/
}


// ==== 0x0054FC80  sub_54FC80  this=-  sig=ida-proto ====
__int64 sub_54FC80()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_ABC720 - dbl_ABC7D0); /*0x54fc92*/
  result = Math::RoundToInt(v0 * dbl_ABC7C0 * 0.5); /*0x54fca6*/
  dword_ABC8BC = result; /*0x54fcab*/
  return result; /*0x54fcb0*/
}


// ==== 0x0054FCC0  sub_54FCC0  this=-  sig=ida-proto ====
void sub_54FCC0()
{
  dbl_ABC7D8 = Math::ArcTan((double)dword_ABC8BC * 0.00390625); /*0x54fcd7*/
}


// ==== 0x0054FCF0  sub_54FCF0  this=-  sig=ida-proto ====
void sub_54FCF0()
{
  dbl_ABC7F0 = Math::ArcTan((double)(2 * dword_ABC8BC) / dbl_ABC7C0); /*0x54fd12*/
}


// ==== 0x0054FD20  sub_54FD20  this=-  sig=ida-proto ====
__int64 sub_54FD20()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABC8BC) + 0.5); /*0x54fd3b*/
  dword_ABC8AC = result; /*0x54fd40*/
  return result; /*0x54fd46*/
}


// ==== 0x0054FD50  sub_54FD50  this=-  sig=ida-proto ====
int sub_54FD50()
{
  word_ABC7B8 = 0; /*0x54fd52*/
  word_ABC7BA = 0; /*0x54fd58*/
  return 0; /*0x54fd5e*/
}


// ==== 0x0054FD60  sub_54FD60  this=-  sig=ida-proto ====
int sub_54FD60()
{
  dword_ABC7E0 = 0; /*0x54fd62*/
  dword_ABC7E4 = 0; /*0x54fd67*/
  dword_ABC7E8 = 0; /*0x54fd6c*/
  return 0; /*0x54fd71*/
}


// ==== 0x0054FD80  sub_54FD80  this=-  sig=ida-proto ====
int sub_54FD80()
{
  dword_ABC8A8 = 0; /*0x54fd85*/
  dword_ABC8A0 = 128; /*0x54fd8f*/
  dword_ABC8A4 = 128; /*0x54fd94*/
  return 128; /*0x54fd99*/
}


// ==== 0x0054FDA0  sub_54FDA0  this=-  sig=ida-proto ====
int sub_54FDA0()
{
  dword_ABC728 = 0; /*0x54fda2*/
  dword_ABC72C = 0; /*0x54fda7*/
  dword_ABC730 = 0; /*0x54fdac*/
  dword_ABC734 = 0; /*0x54fdb1*/
  return 0; /*0x54fdb6*/
}


// ==== 0x0054FDC0  sub_54FDC0  this=-  sig=ida-proto ====
int sub_54FDC0()
{
  dword_ABC87C = 0; /*0x54fdc7*/
  dword_ABC880 = 0; /*0x54fdcc*/
  byte_ABC884 = 1; /*0x54fdd1*/
  byte_ABC885 = 0; /*0x54fdd8*/
  dword_ABC878 = (int)&vt_DynamicVectorClass_LaserDrawClass; /*0x54fddd*/
  dword_ABC88C = 10; /*0x54fde7*/
  g_TimerPool = 0; /*0x54fdf1*/
  return atexit(sub_54FE00); /*0x54fdfc*/
}


// ==== 0x0054FE00  sub_54FE00  this=-  sig=ida-proto ====
void __cdecl sub_54FE00()
{
  if ( (byte_ABC718 & 1) == 0 ) /*0x54fe0a*/
  {
    dword_ABC878 = (int)&vt_VectorClass_LaserDrawClass; /*0x54fe0e*/
    byte_ABC718 |= 1u; /*0x54fe21*/
    if ( dword_ABC87C ) /*0x54fe27*/
    {
      if ( byte_ABC885 ) /*0x54fe31*/
      {
        __3_YAXPAX_Z(dword_ABC87C); /*0x54fe34*/
        dword_ABC87C = 0; /*0x54fe3c*/
      }
    }
    byte_ABC885 = 0; /*0x54fe46*/
    dword_ABC880 = 0; /*0x54fe4d*/
  }
}


// ==== 0x0054FE60  TimerClass::Construct  this=TechnoTypeClass  sig=csp ====
char *__thiscall TimerClass::Construct(
        char *this,
        int a2,
        int a3,
        TechnoTypeClass *aP3,
        int a5,
        int a6,
        int a7,
        int a8,
        char a9,
        int a10,
        int a11,
        int a12,
        int a13,
        char a14,
        char a15,
        int a16,
        int a17)
{
  char *v18; // ecx
  IUnknown *v19; // ecx
  int v20; // eax

  *(_DWORD *)this = 0; /*0x54fe6a*/
  this->vtable2 = 0; /*0x54fe6c*/
  this->vtable3 = *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x54fe75*/
  v18 = this + 36; /*0x54fe78*/
  this->vtable2 = 0; /*0x54fe7b*/
  *(_DWORD *)v18 = a2; /*0x54fe83*/
  this->abstractFlags = 0; /*0x54fe89*/
  this->nextArrayIndex = 1; /*0x54fe8c*/
  *((_DWORD *)v18 + 1) = a3; /*0x54fe8f*/
  this->referenceCount = 1; /*0x54fe96*/
  this->NeedsSaveOrLink = 0; /*0x54fe99*/
  *((_DWORD *)v18 + 2) = aP3; /*0x54fe9c*/
  this->q021 = 0; /*0x54fea6*/
  this->vtable4 = a5; /*0x54fea9*/
  this->q034 = a6; /*0x54feaf*/
  this->TargetStrengthCoefficient = a7; /*0x54feb6*/
  this->zero_3C = a8; /*0x54febd*/
  this->TargetDistanceCoefficient = a9; /*0x54fec4*/
  this->ChargerBarrels = 0; /*0x54fecb*/
  this->q042 = 0; /*0x54fece*/
  this->q043 = 0; /*0x54fed1*/
  this->q044 = 0; /*0x54fed4*/
  this->IntList_D_Items = 0; /*0x54fed7*/
  this->q046 = 0; /*0x54feda*/
  this->q11C = 0; /*0x54fedd*/
  this->ThreatAvoidanceCoefficient = 0; /*0x54fee0*/
  this->q049 = 0; /*0x54fee3*/
  this->q04C = a13; /*0x54fee6*/
  this->q144 = 0; /*0x54feed*/
  this->SlowdownDistance = a14; /*0x54fef0*/
  this->q052 = a15; /*0x54fef7*/
  this->align_A9_3 = a16; /*0x54fefe*/
  *((_DWORD *)this + 22) = a17; /*0x54ff05*/
  *(_DWORD *)this = 0; /*0x54ff08*/
  v19 = *(IUnknown **)&MEMORY[0xA8D63C].__pad_14B0[664]; /*0x54ff0a*/
  this->abstractFlags = 1; /*0x54ff10*/
  this->vtable3 = v19; /*0x54ff13*/
  this->vtable4 = a3; /*0x54ff1a*/
  this->vtable2 = 1; /*0x54ff21*/
  *(_WORD *)(this + 65) = a10; /*0x54ff29*/
  this->q043 = BYTE2(a10); /*0x54ff32*/
  *((_WORD *)this + 34) = a11; /*0x54ff39*/
  this->q046 = BYTE2(a11); /*0x54ff42*/
  *(_WORD *)(this + 71) = a12; /*0x54ff49*/
  this->q049 = BYTE2(a12); /*0x54ff4d*/
  if ( g_TimerPool < dword_ABC880 /*0x54ff85*/
    || (byte_ABC885 || !dword_ABC880)
    && dword_ABC88C > 0
    && ((unsigned __int8 (__thiscall *)(DynamicVector **, int, _DWORD))dword_ABC878->field_8)(
         &dword_ABC878,
         dword_ABC880 + dword_ABC88C,
         0) )
  {
    v20 = g_TimerPool++; /*0x54ff92*/
    *((_DWORD *)dword_ABC87C + v20) = this; /*0x54ffa1*/
  }
  return this; /*0x54ffa6*/
}

