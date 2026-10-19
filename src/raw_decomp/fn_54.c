// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x00540030  IPXGlobalConnClass::Disconnect  this=IPXGlobalConnClass  sig=csp ====
_DWORD *__thiscall IPXGlobalConnClass::Disconnect(IPXGlobalConnClass *this, int a2)
{
  Terrain *IPXGlobalConnClass_field_0x04; // ecx
  _DWORD *result; // eax

  IPXGlobalConnClass_field_0x04 = (Terrain *)this->IPXGlobalConnClass_field_0x04; /*0x540030*/
  result = (_DWORD *)a2; /*0x540033*/
  if ( a2 < (int)IPXGlobalConnClass_field_0x04->Terrain_field_0x38 ) /*0x54003a*/
  {
    result = (_DWORD *)Terrain::GetTileType(IPXGlobalConnClass_field_0x04, a2); /*0x54003d*/
    *result |= 2u; /*0x540042*/
  }
  return result; /*0x540045*/
}



// ==== 0x00540050  IPXGlobalConnClass::GetAddress  this=IPXGlobalConnClass  sig=csp ====
int __thiscall IPXGlobalConnClass::GetAddress(
        IPXGlobalConnClass *this,
        int a2,
        int a3,
        _BYTE *a4,
        int a5,
        int a6,
        int a7)
{
  int v9; // edx
  char *v10; // [esp-Ch] [ebp-14h]
  int v11; // [esp-8h] [ebp-10h]
  int v12; // [esp-4h] [ebp-Ch]

  if ( Network::IsBroadcastAddr((Network *)a4) ) /*0x54005a*/
    return Network_Get(a2, a3); /*0x54006b*/
  if ( *(_DWORD *)&dword_A8B238 == 3 && *((_DWORD *)this + 49) && *(_DWORD *)a4 == *(_DWORD *)((char *)this + 186) ) /*0x540098*/
  {
    v9 = *(_DWORD *)this->__pad_0; /*0x54009e*/
    v12 = 0; /*0x5400a0*/
    v11 = a6; /*0x5400a8*/
    v10 = (char *)this + 190; /*0x5400a9*/
  }
  else
  {
    v9 = *(_DWORD *)this->__pad_0; /*0x5400b4*/
    v12 = a7; /*0x5400b6*/
    v11 = a6; /*0x5400b7*/
    v10 = 0; /*0x5400b8*/
  }
  return (*(int (__thiscall **)(IPXGlobalConnClass *, int, int, _BYTE *, char *, int, int))(v9 + 40))( /*0x540070*/
           this,
           a2,
           a3,
           a4,
           v10,
           v11,
           v12);
}



// ==== 0x005400D0  IPXGlobalConnClass::CheckStatus  this=IPXGlobalConnClass  sig=csp ====
int __thiscall IPXGlobalConnClass::CheckStatus(IPXGlobalConnClass *this)
{
  int v2; // esi
  Terrain *IPXGlobalConnClass_field_0x04; // ecx

  v2 = 0; /*0x5400d4*/
  IPXGlobalConnClass_field_0x04 = (Terrain *)this->IPXGlobalConnClass_field_0x04; /*0x5400d6*/
  if ( (int)IPXGlobalConnClass_field_0x04->Terrain_field_0x38 > 0 ) /*0x5400de*/
  {
    do /*0x540104*/
    {
      if ( (*(_BYTE *)Terrain::GetTileType(IPXGlobalConnClass_field_0x04, v2) & 2) != 0 ) /*0x5400e9*/
        PacketQueue::ReleaseEntry((PacketQueue *)this->IPXGlobalConnClass_field_0x04, 0, 0, v2--, 0, 0); /*0x5400f7*/
      IPXGlobalConnClass_field_0x04 = (Terrain *)this->IPXGlobalConnClass_field_0x04; /*0x5400fd*/
      ++v2; /*0x540100*/
    }
    while ( v2 < (int)IPXGlobalConnClass_field_0x04->Terrain_field_0x38 ); /*0x540104*/
  }
  return 1; /*0x540106*/
}



// ==== 0x00540110  IPXGlobalConnClass::ReceivePacket  this=IPXGlobalConnClass  sig=csp ====
void __thiscall IPXGlobalConnClass::ReceivePacket(IPXGlobalConnClass *this, int a2)
{
  IPXGlobalConnClass *v2; // esi
  Terrain *IPXGlobalConnClass_field_0x04; // ecx
  int i; // ebp
  int TileType; // edi
  int v6; // eax
  int v7; // ebx
  int Ticks; // edx
  int v9; // eax
  int v10; // ecx
  _DWORD *v11; // edx

  v2 = this; /*0x540113*/
  Debug::Log(); /*0x540132*/
  IPXGlobalConnClass_field_0x04 = (Terrain *)v2->IPXGlobalConnClass_field_0x04; /*0x540137*/
  for ( i = 0; i < (int)IPXGlobalConnClass_field_0x04->Terrain_field_0x38; ++i ) /*0x540144*/
  {
    TileType = Terrain::GetTileType(IPXGlobalConnClass_field_0x04, i); /*0x540158*/
    Debug::Log(); /*0x54015a*/
    if ( TileType ) /*0x540164*/
    {
      Debug::Log(); /*0x540170*/
      v6 = *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x540175*/
      v7 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x540186*/
      if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x540188*/
      {
        Ticks = Timer::GetTicks(); /*0x54019a*/
        v6 = *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x54019c*/
        v7 += Ticks - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5401a3*/
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
        v10 = *((_DWORD *)this + 53); /*0x5401ff*/
        if ( v10 > 0 ) /*0x540207*/
        {
          v11 = (_DWORD *)this->q034; /*0x54020f*/
          while ( *v11 != *(_DWORD *)(*(_DWORD *)(TileType + 12) + 4) ) /*0x540213*/
          {
            ++v9; /*0x540215*/
            ++v11; /*0x540216*/
            if ( v9 >= v10 ) /*0x54021b*/
              goto LABEL_14; /*0x54021b*/
          }
          *(_DWORD *)(this->q034 + 4 * v9) = -1; /*0x54021f*/
        }
LABEL_14:
        PacketQueue::ReleaseEntry((PacketQueue *)this->IPXGlobalConnClass_field_0x04, 0, 0, i--, 0, 0); /*0x540226*/
      }
      v2 = this; /*0x540277*/
    }
    IPXGlobalConnClass_field_0x04 = (Terrain *)v2->IPXGlobalConnClass_field_0x04; /*0x54027b*/
  }
  Debug::Log(); /*0x540296*/
}



// ==== 0x005402B0  ObjectClass::Network_Init_5402B0  this=ObjectClass  sig=csp ====
int __thiscall Network_Init_5402B0(ObjectClass *this, int a2)
{
  int result; // eax

  result = dword_AA05A4; /*0x5402b0*/
  if ( dword_AA05A4 ) /*0x5402b7*/
    this->q031 = 0; /*0x5402b9*/
  return result; /*0x5402c3*/
}



// ==== 0x005402D0  IPXGlobalConnClass::Send  this=IPXGlobalConnClass  sig=csp ====
int __thiscall IPXGlobalConnClass::Send(IPXGlobalConnClass *this)
{
  int v2; // ebx
  int v3; // esi
  int IPXGlobalConnClass_field_0x04; // ecx
  int v5; // eax
  PacketQueue *v6; // ecx
  int v8; // [esp+Ch] [ebp-414h] BYREF
  int v9; // [esp+10h] [ebp-410h] BYREF
  Waypoint v10; // [esp+14h] [ebp-40Ch] BYREF

  v2 = 0; /*0x5402db*/
  v3 = 0; /*0x5402dd*/
  IPXGlobalConnClass_field_0x04 = this->IPXGlobalConnClass_field_0x04; /*0x5402df*/
  if ( *(int *)(IPXGlobalConnClass_field_0x04 + 40) > 0 ) /*0x5402e7*/
  {
    do /*0x540332*/
    {
      v5 = *(_DWORD *)Terrain::GetTileIndex((Terrain *)IPXGlobalConnClass_field_0x04, v3); /*0x5402ef*/
      if ( (v5 & 4) != 0 && (v5 & 2) == 0 ) /*0x5402f7*/
      {
        Waypoint::InitInvalid(&v10); /*0x5402fd*/
        v6 = (PacketQueue *)this->IPXGlobalConnClass_field_0x04; /*0x54030e*/
        v8 = 12; /*0x54031c*/
        PacketQueue::ExtractEntry(v6, &v10.__pad_0[12], &v9, v3--, &v10, &v8, 0); /*0x540324*/
        ++v2; /*0x54032a*/
      }
      IPXGlobalConnClass_field_0x04 = this->IPXGlobalConnClass_field_0x04; /*0x54032b*/
      ++v3; /*0x54032e*/
    }
    while ( v3 < *(_DWORD *)(IPXGlobalConnClass_field_0x04 + 40) ); /*0x540332*/
  }
  return v2; /*0x540334*/
}



// ==== 0x00540340  IPXGlobalConnClass::SendPacket  this=IPXGlobalConnClass  sig=csp ====
int __thiscall IPXGlobalConnClass::SendPacket(IPXGlobalConnClass *this, int a2, __int16 a3)
{
  int IPXGlobalConnClass_field_0x04; // ecx
  int v5; // ebp
  int v6; // esi
  int TileIndex; // eax
  int v8; // edi
  PacketQueue *v9; // ecx
  int v11; // [esp+Ch] [ebp-414h] BYREF
  int v12; // [esp+10h] [ebp-410h] BYREF
  Waypoint v13; // [esp+14h] [ebp-40Ch] BYREF

  IPXGlobalConnClass_field_0x04 = this->IPXGlobalConnClass_field_0x04; /*0x54034b*/
  v5 = 0; /*0x54034e*/
  v6 = 0; /*0x540350*/
  if ( *(int *)(IPXGlobalConnClass_field_0x04 + 40) <= 0 ) /*0x540357*/
    return 0; /*0x5403de*/
  do /*0x5403cd*/
  {
    TileIndex = Terrain::GetTileIndex((Terrain *)IPXGlobalConnClass_field_0x04, v6); /*0x54035f*/
    v8 = TileIndex; /*0x540364*/
    if ( (*(_BYTE *)TileIndex & 2) == 0 /*0x540392*/
      && *(_DWORD *)(TileIndex + 24)
      && (unsigned __int8)NetworkID::Compare(*(bool **)(TileIndex + 28), a2)
      && *(_WORD *)(v8 + 32) == a3 )
    {
      Waypoint::InitInvalid(&v13); /*0x540398*/
      v9 = (PacketQueue *)this->IPXGlobalConnClass_field_0x04; /*0x5403b3*/
      v11 = 12; /*0x5403b7*/
      PacketQueue::ExtractEntry(v9, &v13.__pad_0[12], &v12, v6--, &v13, &v11, 0); /*0x5403bf*/
      ++v5; /*0x5403c5*/
    }
    IPXGlobalConnClass_field_0x04 = this->IPXGlobalConnClass_field_0x04; /*0x5403c6*/
    ++v6; /*0x5403c9*/
  }
  while ( v6 < *(_DWORD *)(IPXGlobalConnClass_field_0x04 + 40) ); /*0x5403cd*/
  return v5; /*0x5403d2*/
}



// ==== 0x005403F0  IPXGlobalConnClass::SetAddress  this=IPXGlobalConnClass  sig=csp ====
int __thiscall IPXGlobalConnClass::SetAddress(
        IPXGlobalConnClass *this,
        int a2,
        int a3,
        int *a4,
        int *a5,
        int a6,
        int a7)
{
  IPXGlobalConnClass *v7; // ebp
  int v8; // esi
  int v9; // ebp
  int v10; // edi
  char LinkedIndex; // al
  int v12; // edi
  int v13; // edx
  int v15; // [esp+Ch] [ebp-28h] BYREF
  IPXGlobalConnClass *v16; // [esp+10h] [ebp-24h]
  int v17[2]; // [esp+14h] [ebp-20h] BYREF
  NetworkID v18; // [esp+1Ch] [ebp-18h] BYREF
  int v19; // [esp+24h] [ebp-10h]
  NetworkID v20; // [esp+28h] [ebp-Ch] BYREF
  int v21; // [esp+30h] [ebp-4h]

  v7 = this; /*0x5403f4*/
  v16 = this; /*0x5403fc*/
  Waypoint::InitInvalid((Waypoint *)&v18); /*0x540400*/
  *(_DWORD *)v18.__pad_0 = *a4; /*0x540413*/
  v18.NetworkID_field_0x04 = a4[1]; /*0x54041a*/
  v19 = a4[2]; /*0x540421*/
  if ( a5 ) /*0x540425*/
  {
    Network::CopyAddress((Network *)a4, &v15, (int)v17); /*0x540431*/
    v15 = *a5; /*0x540442*/
    NetworkID::Assign(&v18, &v15, (int)v17, 0); /*0x54044c*/
  }
  if ( *(_DWORD *)&dword_A8B238 == 4 && !(_BYTE)a6 && byte_A8DBA0 && LOBYTE(v7[3].IPXGlobalConnClass_field_0x20) ) /*0x540477*/
  {
    v8 = a2; /*0x540485*/
    if ( !*(_BYTE *)(a2 + 3) ) /*0x540489*/
    {
      v20 = v18; /*0x5404a0*/
      v21 = v19; /*0x5404b6*/
      Network::CopyAddress((Network *)&v20, &v15, (int)v17); /*0x5404ba*/
      NetworkID::Assign(&v20, &v15, (int)v17, a7); /*0x5404d2*/
      v9 = -1; /*0x5404dc*/
      v10 = 0; /*0x5404df*/
      if ( dword_A8DA84 > 0 ) /*0x5404e3*/
      {
        while ( !(unsigned __int8)GUID::Compare((char *)(dword_A8DA78[v10] + 40), (int)&v20) ) /*0x5404fd*/
        {
          if ( ++v10 >= dword_A8DA84 ) /*0x540507*/
            goto LABEL_13; /*0x540507*/
        }
        v9 = *(_DWORD *)(dword_A8DA78[v10] + 111); /*0x540514*/
      }
LABEL_13:
      LinkedIndex = Factory::GetLinkedIndex((Factory *)&stru_B052C0.__pad_0[16], v9); /*0x540517*/
      if ( !LinkedIndex ) /*0x540524*/
        LinkedIndex = 1; /*0x540526*/
      v7 = v16; /*0x540528*/
      *(_BYTE *)(a2 + 3) = LinkedIndex; /*0x54052c*/
    }
    v18 = qword_A8DBA4; /*0x540540*/
    v12 = *(_DWORD *)&dword_841F3C; /*0x54054a*/
    v19 = dword_A8DBAC; /*0x540554*/
    if ( (unsigned __int8)GUID::Compare(qword_A8DBB0.__pad_0, *dword_A8DA78 + 40) /*0x54057b*/
      && (unsigned __int8)NetworkID::Compare((bool *)v18.__pad_0, *dword_A8DA78 + 40) )
    {
      v13 = a2 + 8; /*0x540584*/
      *(_WORD *)(a2 + 12) = 0; /*0x540587*/
      *(_DWORD *)(a2 + 8) = 0; /*0x54058d*/
    }
    else
    {
      v12 = *(_DWORD *)&dword_A8DBBC; /*0x54059b*/
      *(_WORD *)(a2 + 12) = dword_841F3C; /*0x5405a4*/
      *(_DWORD *)(a2 + 8) = 0; /*0x5405a8*/
    }
  }
  else
  {
    v8 = a2; /*0x5405b0*/
    v12 = a7; /*0x5405b4*/
    v13 = a2 + 8; /*0x5405b8*/
    *(_WORD *)(a2 + 12) = 0; /*0x5405bb*/
    *(_DWORD *)(a2 + 8) = 0; /*0x5405c1*/
  }
  if ( *(_DWORD *)&stru_887598.isAliveFlag ) /*0x5405cf*/
  {
    LOBYTE(v13) = LOBYTE(v7[3].IPXGlobalConnClass_field_0x20) == 0; /*0x5405da*/
    (*(void (__thiscall **)(_DWORD, int, int, NetworkID *, int, int, int, int))(**(_DWORD **)&stru_887598.isAliveFlag /*0x5405f2*/
                                                                              + 12))(
      *(_DWORD *)&stru_887598.isAliveFlag,
      v8,
      a3,
      &v18,
      12,
      a6,
      v13,
      v12);
  }
  return 1; /*0x5405f5*/
}



// ==== 0x00540610  IPXGlobalConnClass::Release  this=IPXGlobalConnClass  sig=csp ====
int __thiscall IPXGlobalConnClass::Release(IPXGlobalConnClass *this, const void *a2, signed int a3, int a4, char a5)
{
  return ConnectionClass::sendAck((int)this, a2, a3, a4, a5); /*0x540629*/
}



// ==== 0x00540630  IPXGlobalConnClass::ddtor  this=IPXGlobalConnClass  sig=csp ====
int __thiscall IPXGlobalConnClass::ddtor(IPXGlobalConnClass *this, int a2, int a3)
{
  return ConnectionClass::receivePacket((ConnectionClass *)this, a2, a3); /*0x54063f*/
}



// ==== 0x00540650  IPXGlobalConnClass::Connect  this=IPXGlobalConnClass  sig=csp ====
int __thiscall IPXGlobalConnClass::Connect(IPXGlobalConnClass *this, void *a2, signed int *a3)
{
  return ConnectionClass::processTileUpdate((ConnectionClass *)this, a2, a3); /*0x54065f*/
}



// ==== 0x00540670  IPXGlobalConnClass::QueryInterface  this=IPXGlobalConnClass  sig=csp ====
_DWORD *__thiscall IPXGlobalConnClass::QueryInterface(IPXGlobalConnClass *this, char a2)
{
  void *v3; // eax

  v3 = (void *)this->q034; /*0x540673*/
  *(_DWORD *)this->__pad_0 = &IPXGlobalConnClass::`vftable'; /*0x540679*/
  if ( v3 ) /*0x540681*/
  {
    __3_YAXPAX_Z(v3); /*0x540684*/
    this->q034 = 0; /*0x54068c*/
  }
  if ( *((_DWORD *)this + 51) ) /*0x540696*/
  {
    __3_YAXPAX_Z(*((void **)this + 51)); /*0x5406a1*/
    *((_DWORD *)this + 51) = 0; /*0x5406a9*/
  }
  *(_DWORD *)this->__pad_0 = &IPXConnClass::`vftable'; /*0x5406b5*/
  ConnectionClass::dtor((ConnectionClass *)this); /*0x5406bb*/
  if ( (a2 & 1) != 0 ) /*0x5406c5*/
    __3_YAXPAX_Z(this); /*0x5406c8*/
  return this->__pad_0; /*0x5406d2*/
}



// ==== 0x005406E0  sub_5406E0  this=-  sig=ida-proto ====
void sub_5406E0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5406ec*/
  dbl_AA0650 = Math::Sqrt(v0 + v0); /*0x5406fe*/
}



// ==== 0x00540710  sub_540710  this=-  sig=ida-proto ====
void sub_540710()
{
  dbl_AA06A0 = dbl_AA0650 / 60.0; /*0x54071c*/
}



// ==== 0x00540730  sub_540730  this=-  sig=ida-proto ====
void sub_540730()
{
  dbl_AA0688 = 1.0 / dbl_AA06A0; /*0x54073c*/
}



// ==== 0x00540750  sub_540750  this=-  sig=ida-proto ====
void sub_540750()
{
  dbl_AA0680 = 0.0174532925199433 * 45.0; /*0x54075c*/
}



// ==== 0x00540770  sub_540770  this=-  sig=ida-proto ====
void sub_540770()
{
  dbl_AA0658 = 0.0174532925199433 * 60.0; /*0x54077c*/
}



// ==== 0x00540790  sub_540790  this=-  sig=ida-proto ====
void sub_540790()
{
  dbl_AA0630 = 0.0174532925199433 * 90.0; /*0x54079c*/
}



// ==== 0x005407B0  sub_5407B0  this=-  sig=ida-proto ====
__int64 sub_5407B0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_AA0630 - dbl_AA0658); /*0x5407c2*/
  result = Math::RoundToInt(v0 * dbl_AA0650 * 0.5); /*0x5407d6*/
  dword_AA06A8 = result; /*0x5407db*/
  return result; /*0x5407e0*/
}



// ==== 0x005407F0  sub_5407F0  this=-  sig=ida-proto ====
void sub_5407F0()
{
  dbl_AA0660 = Math::ArcTan((double)dword_AA06A8 * 0.00390625); /*0x540807*/
}



// ==== 0x00540820  sub_540820  this=-  sig=ida-proto ====
void sub_540820()
{
  dbl_AA0678 = Math::ArcTan((double)(2 * dword_AA06A8) / dbl_AA0650); /*0x540842*/
}



// ==== 0x00540850  sub_540850  this=-  sig=ida-proto ====
__int64 sub_540850()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_AA06A8) + 0.5); /*0x54086b*/
  dword_AA069C = result; /*0x540870*/
  return result; /*0x540876*/
}



// ==== 0x00540880  sub_540880  this=-  sig=ida-proto ====
int sub_540880()
{
  word_AA0648 = 0; /*0x540882*/
  word_AA064A = 0; /*0x540888*/
  return 0; /*0x54088e*/
}



// ==== 0x00540890  sub_540890  this=-  sig=ida-proto ====
int sub_540890()
{
  dword_AA0668 = 0; /*0x540892*/
  dword_AA066C = 0; /*0x540897*/
  dword_AA0670 = 0; /*0x54089c*/
  return 0; /*0x5408a1*/
}



// ==== 0x005408B0  sub_5408B0  this=-  sig=ida-proto ====
int sub_5408B0()
{
  dword_AA0698 = 0; /*0x5408b5*/
  dword_AA0690 = 128; /*0x5408bf*/
  dword_AA0694 = 128; /*0x5408c4*/
  return 128; /*0x5408c9*/
}



// ==== 0x005408D0  sub_5408D0  this=-  sig=ida-proto ====
int sub_5408D0()
{
  dword_AA0638 = 0; /*0x5408d2*/
  dword_AA063C = 0; /*0x5408d7*/
  dword_AA0640 = 0; /*0x5408dc*/
  dword_AA0644 = 0; /*0x5408e1*/
  return 0; /*0x5408e6*/
}



// ==== 0x005408F0  IPXManagerClass::method_5408F0  this=IPXManagerClass  sig=csp ====
char *__thiscall sub_5408F0(char *this, int a2, int a3, int a4, int a5, __int16 a6, __int16 a7)
{
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  __int16 v10; // cx

  *(_DWORD *)this = &IPXManagerClass::`vftable'; /*0x5408f7*/
  if ( dword_887628 ) /*0x540905*/
  {
    (**(void (__thiscall ***)(int, int))dword_887628)(dword_887628, 1); /*0x54090b*/
    dword_887628 = 0; /*0x54090d*/
  }
  v8 = __2_YAPAXI_Z(0x3F310u); /*0x540918*/
  if ( v8 ) /*0x540922*/
    v9 = IPXInterfaceClass::Construct(v8); /*0x540926*/
  else
    v9 = 0; /*0x54092d*/
  dword_887628 = (int)v9; /*0x540931*/
  if ( WinsockInterface::Init(v9) ) /*0x540936*/
    this->Initialized = 1; /*0x54093f*/
  else
    this->Initialized = 0; /*0x540945*/
  if ( dword_887628 ) /*0x540950*/
    (**(void (__thiscall ***)(int, int))dword_887628)(dword_887628, 1); /*0x540956*/
  dword_887628 = 0; /*0x540960*/
  *((_DWORD *)this + 2) = a2; /*0x540966*/
  *((_DWORD *)this + 3) = a4; /*0x540969*/
  this->tail_6 = a2; /*0x540970*/
  this->Active = a5; /*0x54097c*/
  *((_DWORD *)this + 7) = a5; /*0x54097f*/
  this->Initialized = a7; /*0x540982*/
  LOBYTE(v10) = HIBYTE(a6); /*0x54098d*/
  HIBYTE(v10) = a6; /*0x540992*/
  *((_WORD *)this + 17) = v10; /*0x540996*/
  this->Active = 0; /*0x54099f*/
  this->Initialized = a3; /*0x5409a2*/
  *((_DWORD *)this + 9) = 0; /*0x5409a5*/
  *((_DWORD *)this + 17) = 0; /*0x5409a8*/
  *((_DWORD *)this + 21) = 0; /*0x5409ab*/
  memset(this + 40, 0, 0x1Cu); /*0x5409ae*/
  *((_DWORD *)this + 18) = 0; /*0x5409b3*/
  *((_DWORD *)this + 42) = -1; /*0x5409b6*/
  *((_DWORD *)this + 23) = -1; /*0x5409bc*/
  *((_DWORD *)this + 19) = 0; /*0x5409bf*/
  this->Active = 0; /*0x5409c2*/
  *((_DWORD *)this + 40) = 0; /*0x5409c5*/
  *((_DWORD *)this + 41) = 0; /*0x5409cb*/
  *((_DWORD *)this + 22) = 2; /*0x5409d1*/
  this->tail_6 = 60; /*0x5409d8*/
  return this; /*0x5409e1*/
}



// ==== 0x005409F0  IPXManagerClass::processPacket  this=IPXManagerClass  sig=csp ====
int __thiscall IPXManagerClass::processPacket(char *this)
{
  char v2; // al
  void (__thiscall ***v3)(_DWORD, int); // ecx
  void (__thiscall ***v4)(_DWORD, int); // ecx
  void (__thiscall ***v5)(_DWORD, int); // ecx
  int result; // eax
  int v7; // ebp
  char *v8; // edi
  ObjectClass *v9; // [esp+0h] [ebp-Ch]

  v2 = this->Active; /*0x5409f7*/
  *(_DWORD *)this = &IPXManagerClass::`vftable'; /*0x5409fa*/
  if ( v2 ) /*0x540a02*/
  {
    Network_Helper(v9); /*0x540a04*/
    this->Active = 0; /*0x540a09*/
  }
  v3 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 18); /*0x540a0c*/
  if ( v3 ) /*0x540a11*/
  {
    (**v3)(v3, 1); /*0x540a17*/
    *((_DWORD *)this + 18) = 0; /*0x540a19*/
  }
  v4 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 19); /*0x540a1c*/
  if ( v4 ) /*0x540a21*/
  {
    (**v4)(v4, 1); /*0x540a27*/
    *((_DWORD *)this + 19) = 0; /*0x540a29*/
  }
  v5 = (void (__thiscall ***)(_DWORD, int))this->Active; /*0x540a2c*/
  if ( v5 ) /*0x540a31*/
  {
    (**v5)(v5, 1); /*0x540a37*/
    this->Active = 0; /*0x540a39*/
  }
  result = *((_DWORD *)this + 17); /*0x540a3c*/
  v7 = 0; /*0x540a3f*/
  if ( result <= 0 ) /*0x540a43*/
  {
    *((_DWORD *)this + 17) = 0; /*0x540a70*/
    *(_DWORD *)this = &ConnManClass::`vftable'; /*0x540a73*/
  }
  else
  {
    v8 = this + 40; /*0x540a46*/
    do /*0x540a60*/
    {
      if ( *(_DWORD *)v8 ) /*0x540a49*/
        (***(void (__thiscall ****)(_DWORD, int))v8)(*(_DWORD *)v8, 1); /*0x540a53*/
      *(_DWORD *)v8 = 0; /*0x540a55*/
      result = *((_DWORD *)this + 17); /*0x540a57*/
      ++v7; /*0x540a5a*/
      v8 += 4; /*0x540a5b*/
    }
    while ( v7 < result ); /*0x540a60*/
    *((_DWORD *)this + 17) = 0; /*0x540a62*/
    *(_DWORD *)this = &ConnManClass::`vftable'; /*0x540a65*/
  }
  return result; /*0x540a6c*/
}



// ==== 0x00540A80  ObjectClass::Network_Init  this=ObjectClass  sig=csp ====
int __thiscall Network_Init(ObjectClass *this)
{
  int result; // eax
  void (__thiscall ***v3)(_DWORD, int); // ecx
  void (__thiscall ***v4)(_DWORD, int); // ecx
  void (__thiscall ***v5)(_DWORD, int); // ecx
  int v6; // ebp
  int *p_owningHouseIndex; // edi
  IPXGlobalConnClass *v8; // eax
  int *inited; // eax
  IPXGlobalConnClass *v10; // eax
  int *v11; // eax
  ObjectClass *v12; // [esp+0h] [ebp-8h]

  Debug::Log(); /*0x540a89*/
  if ( *(_DWORD *)&stru_887598.isAliveFlag ) /*0x540a9b*/
  {
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_887598.isAliveFlag + 20))(*(_DWORD *)&stru_887598.isAliveFlag); /*0x540a9f*/
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_887598.isAliveFlag + 24))(*(_DWORD *)&stru_887598.isAliveFlag); /*0x540aaa*/
  }
  if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x540ab4*/
  {
    LOBYTE(this->?) = 1; /*0x540acf*/
  }
  else
  {
    if ( !LOBYTE(this->?) ) /*0x540ab6*/
      return 0; /*0x540abf*/
    if ( BYTE1(this->?) ) /*0x540ac0*/
    {
      Network_Helper(v12); /*0x540ac5*/
      BYTE1(this->?) = 0; /*0x540aca*/
    }
  }
  v3 = (void (__thiscall ***)(_DWORD, int))this->ambientSoundController[3]; /*0x540ad3*/
  if ( v3 ) /*0x540ad8*/
  {
    (**v3)(v3, 1); /*0x540ade*/
    this->ambientSoundController[3] = 0; /*0x540ae0*/
  }
  v4 = (void (__thiscall ***)(_DWORD, int))this->ambientSoundController[4]; /*0x540ae3*/
  if ( v4 ) /*0x540ae8*/
  {
    (**v4)(v4, 1); /*0x540aee*/
    this->ambientSoundController[4] = 0; /*0x540af0*/
  }
  v5 = (void (__thiscall ***)(_DWORD, int))this->customSound_controller[0]; /*0x540af3*/
  if ( v5 ) /*0x540af8*/
  {
    (**v5)(v5, 1); /*0x540afe*/
    this->customSound_controller[0] = 0; /*0x540b00*/
  }
  v6 = 0; /*0x540b07*/
  if ( this->ambientSoundController[2] > 0 ) /*0x540b0b*/
  {
    p_owningHouseIndex = &this->owningHouseIndex; /*0x540b0e*/
    do /*0x540b28*/
    {
      if ( *p_owningHouseIndex ) /*0x540b11*/
        (**(void (__thiscall ***)(int, int))*p_owningHouseIndex)(*p_owningHouseIndex, 1); /*0x540b1b*/
      *p_owningHouseIndex = 0; /*0x540b1d*/
      ++v6; /*0x540b22*/
      ++p_owningHouseIndex; /*0x540b23*/
    }
    while ( v6 < this->ambientSoundController[2] ); /*0x540b28*/
  }
  this->ambientSoundController[2] = 0; /*0x540b30*/
  v8 = (IPXGlobalConnClass *)__2_YAPAXI_Z(0xDCu); /*0x540b33*/
  if ( v8 ) /*0x540b3e*/
    inited = Network_Init_53FA90(v8, (int)this->?, 2 * (int)this->?, (int)this->?, (__int16)this->?, 4662); /*0x540b58*/
  else
    inited = 0; /*0x540b5f*/
  this->ambientSoundController[3] = (int)inited; /*0x540b63*/
  if ( !inited ) /*0x540b66*/
    return 0; /*0x540b69*/
  (*(void (__thiscall **)(int *))(*inited + 4))(inited); /*0x540b71*/
  *(_DWORD *)(this->ambientSoundController[3] + 40) = this->customSound_controller[2]; /*0x540b7f*/
  *(_DWORD *)(this->ambientSoundController[3] + 44) = this->customSound_controller[3]; /*0x540b88*/
  *(_DWORD *)(this->ambientSoundController[3] + 48) = this->customSound_controller[4]; /*0x540b91*/
  v10 = (IPXGlobalConnClass *)__2_YAPAXI_Z(0xDCu); /*0x540b94*/
  if ( v10 ) /*0x540b9e*/
    v11 = Network_Init_53FA90(v10, this->?, 2 * this->?, this->?, (__int16)this->?, 52719); /*0x540bb8*/
  else
    v11 = 0; /*0x540bbf*/
  this->ambientSoundController[4] = (int)v11; /*0x540bc3*/
  if ( !v11 ) /*0x540bc6*/
    return 0; /*0x540bc9*/
  (*(void (__thiscall **)(int *))(*v11 + 4))(v11); /*0x540bd1*/
  *(_DWORD *)(this->ambientSoundController[4] + 40) = this->customSound_controller[2]; /*0x540bda*/
  *(_DWORD *)(this->ambientSoundController[4] + 44) = this->customSound_controller[3]; /*0x540be3*/
  *(_DWORD *)(this->ambientSoundController[4] + 48) = this->customSound_controller[4]; /*0x540bec*/
  Network_Init_53F4F0( /*0x540c13*/
    HIWORD(this->?),
    this->occupant,
    this->visibilityFlags,
    this->lastLayer,
    *(_DWORD *)&this->needsRedraw,
    *(_DWORD *)&this->isInLogic,
    *(_DWORD *)&this->isOnMap);
  if ( !*(_DWORD *)&stru_887598.isAliveFlag ) /*0x540c1e*/
    return 0; /*0x540c21*/
  if ( *(_DWORD *)&dword_A8B238 == 4 || (result = Network_Init_53F540(v12)) != 0 ) /*0x540c35*/
  {
    BYTE1(this->?) = 1; /*0x540c3a*/
    return 1; /*0x540c3f*/
  }
  return result; /*0x540abb*/
}



// ==== 0x00540C50  ObjectClass::method_540C50  this=ObjectClass  sig=csp ====
int __thiscall sub_540C50(ObjectClass *this)
{
  return LOBYTE(this->?); /*0x540c55*/
}



// ==== 0x00540C60  IPXManagerClass::SetConnectionParams  this=IPXManagerClass  sig=csp ====
int __thiscall Network::SetConnectionParams(IPXManagerClass *this, int a2, int a3, int a4, char a5)
{
  int v6; // ecx
  IPXManagerClass *v7; // eax
  int Socket; // edx
  int result; // eax

  *((_DWORD *)this + 22) = a2; /*0x540c75*/
  *((_DWORD *)this + 23) = a3; /*0x540c78*/
  this->tail_6 = a4; /*0x540c7b*/
  Debug::Log(); /*0x540c7e*/
  Debug::Log(); /*0x540c8e*/
  if ( a5 ) /*0x540c9c*/
    (*(void (__thiscall **)(IPXManagerClass *, _DWORD, _DWORD, _DWORD))(this->Socket + 56))( /*0x540cae*/
      this,
      *((_DWORD *)this + 22),
      *((_DWORD *)this + 23),
      this->tail_6);
  v6 = 0; /*0x540cb4*/
  if ( *((int *)this + 17) > 0 ) /*0x540cb8*/
  {
    v7 = this + 5; /*0x540cbb*/
    do /*0x540ce1*/
    {
      Socket = v7->Socket; /*0x540cbe*/
      ++v6; /*0x540cc3*/
      v7 = (IPXManagerClass *)((char *)v7 + 4); /*0x540cc4*/
      *(_DWORD *)(Socket + 40) = *((_DWORD *)this + 22); /*0x540cc7*/
      *(_DWORD *)(*(_DWORD *)&v7[-1].Initialized + 44) = *((_DWORD *)this + 23); /*0x540cd0*/
      *(_DWORD *)(*(_DWORD *)&v7[-1].Initialized + 48) = this->tail_6; /*0x540cd9*/
    }
    while ( v6 < *((_DWORD *)this + 17) ); /*0x540ce1*/
  }
  result = this->Active; /*0x540ce4*/
  if ( result ) /*0x540ce9*/
  {
    *(_DWORD *)(result + 40) = *((_DWORD *)this + 22); /*0x540cee*/
    result = *((_DWORD *)this + 23); /*0x540cf4*/
    *(_DWORD *)(this->Active + 44) = result; /*0x540cf7*/
    *(_DWORD *)(this->Active + 48) = this->tail_6; /*0x540d00*/
  }
  return result; /*0x540d03*/
}



// ==== 0x00540D10  IPXManagerClass::SetCameraPosition  this=IPXManagerClass  sig=csp ====
int __thiscall TacticalClass::SetCameraPosition(IPXManagerClass *this, int a2, int a3, int a4)
{
  int result; // eax

  result = *((_DWORD *)this + 18); /*0x540d10*/
  if ( result ) /*0x540d15*/
  {
    *(_DWORD *)(result + 40) = a2; /*0x540d1b*/
    *(_DWORD *)(*((_DWORD *)this + 18) + 44) = a3; /*0x540d25*/
    result = *((_DWORD *)this + 18); /*0x540d28*/
    *(_DWORD *)(result + 48) = a4; /*0x540d2f*/
  }
  return result; /*0x540d32*/
}



// ==== 0x00540D40  IPXManagerClass::createConnection  this=IPXManagerClass  sig=csp ====
_DWORD *__thiscall IPXManagerClass::createConnection(IPXManagerClass *this)
{
  _DWORD *result; // eax

  result = (_DWORD *)*((_DWORD *)this + 18); /*0x540d40*/
  if ( result ) /*0x540d45*/
  {
    *((_DWORD *)this + 25) = result[10]; /*0x540d4a*/
    *((_DWORD *)this + 26) = result[11]; /*0x540d50*/
    result = (_DWORD *)result[12]; /*0x540d53*/
    *((_DWORD *)this + 27) = result; /*0x540d56*/
  }
  return result; /*0x540d59*/
}



// ==== 0x00540D60  IPXManagerClass::destroyConnection  this=IPXManagerClass  sig=csp ====
int __thiscall IPXManagerClass::destroyConnection(IPXManagerClass *this)
{
  int result; // eax

  result = *((_DWORD *)this + 18); /*0x540d60*/
  if ( result ) /*0x540d65*/
  {
    *(_DWORD *)(result + 40) = *((_DWORD *)this + 25); /*0x540d6a*/
    *(_DWORD *)(*((_DWORD *)this + 18) + 44) = *((_DWORD *)this + 26); /*0x540d73*/
    result = *((_DWORD *)this + 18); /*0x540d76*/
    *(_DWORD *)(result + 48) = *((_DWORD *)this + 27); /*0x540d7c*/
  }
  return result; /*0x540d7f*/
}



// ==== 0x00540D80  IPXManagerClass::sendPacket  this=IPXManagerClass  sig=csp ====
int __thiscall IPXManagerClass::sendPacket(IPXManagerClass *this, int a2, int a3, int a4)
{
  int v4; // eax
  int result; // eax

  v4 = *((_DWORD *)this + 19); /*0x540d80*/
  if ( v4 ) /*0x540d93*/
  {
    *(_DWORD *)(v4 + 40) = a2; /*0x540d95*/
    *(_DWORD *)(*((_DWORD *)this + 19) + 44) = a3; /*0x540d9b*/
    *(_DWORD *)(*((_DWORD *)this + 19) + 48) = a4; /*0x540da1*/
  }
  result = this->Active; /*0x540da4*/
  if ( result ) /*0x540da9*/
  {
    *(_DWORD *)(result + 40) = a2; /*0x540dab*/
    result = this->Active; /*0x540dae*/
    *(_DWORD *)(result + 44) = a3; /*0x540db1*/
    *(_DWORD *)(this->Active + 48) = a4; /*0x540db7*/
  }
  return result; /*0x540dba*/
}



// ==== 0x00540DC0  SessionClass::initLAN  this=SessionClass  sig=csp ====
int __thiscall sub_540DC0(int this, int a2, wchar_t *Source, _DWORD *a4)
{
  void *v6; // eax
  void *v7; // eax
  int v8; // ecx

  if ( !*(_BYTE *)(this + 4) ) /*0x540dc3*/
    return 0; /*0x540dca*/
  if ( *(_DWORD *)(this + 68) == 7 ) /*0x540dd4*/
    return 0; /*0x540dd6*/
  v6 = __2_YAPAXI_Z(0xB8u); /*0x540de1*/
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
int __thiscall SessionClass::initInternet(SessionClass *this)
{
  int result; // eax
  IPXConnClass *v3; // ebp
  _DWORD *v4; // ebx
  int v5; // edi
  char *v6; // eax

  if ( !LOBYTE(this->MPGameMode[0]) ) /*0x540e73*/
    return 0; /*0x540e7a*/
  v3 = (IPXConnClass *)__2_YAPAXI_Z(0xB8u); /*0x540e89*/
  if ( v3 ) /*0x540e90*/
  {
    v4 = dword_A8DA78; /*0x540e93*/
    v5 = this->unknown_14[0]; /*0x540e9a*/
    v6 = CharToWideString(aMulticast); /*0x540ea4*/
    result = (int)IPXConnClass::constructor( /*0x540ebf*/
                    v3,
                    v5,
                    v5,
                    this->unknown_10[0],
                    this->Config[2],
                    (_DWORD *)(*v4 + 40),
                    -1,
                    (wchar_t *)v6,
                    0);
  }
  else
  {
    result = 0; /*0x540ec8*/
  }
  *(_DWORD *)this->__pad_50 = result; /*0x540ecc*/
  if ( result ) /*0x540ed0*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)result + 4))(result); /*0x540ed8*/
    *(_DWORD *)(*(_DWORD *)this->__pad_50 + 40) = *(_DWORD *)&this->__pad_50[8]; /*0x540ee1*/
    *(_DWORD *)(*(_DWORD *)this->__pad_50 + 44) = *(_DWORD *)&this->__pad_50[12]; /*0x540eea*/
    *(_DWORD *)(*(_DWORD *)this->__pad_50 + 48) = *(_DWORD *)&this->__pad_50[16]; /*0x540ef8*/
    return 1; /*0x540ef3*/
  }
  return result; /*0x540e7c*/
}



// ==== 0x00540F00  Network::sendData  this=Network  sig=csp ====
int __thiscall sub_540F00(int this, int a2)
{
  int v3; // ecx
  int v4; // esi
  int i; // eax
  void (__thiscall ***v7)(_DWORD, int); // ecx
  int v8; // ecx
  _DWORD *v9; // eax
  int v10; // ecx
  int v11; // edx

  if ( !*(_BYTE *)(this + 4) ) /*0x540f05*/
    return 0; /*0x540f05*/
  v3 = *(_DWORD *)(this + 68); /*0x540f0c*/
  if ( !v3 ) /*0x540f11*/
    return 0; /*0x540f11*/
  v4 = 0; /*0x540f13*/
  if ( v3 <= 0 ) /*0x540f17*/
    return 0; /*0x540f2f*/
  for ( i = this + 40; *(_DWORD *)(*(_DWORD *)i + 100) != a2; i += 4 ) /*0x540f1d*/
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
  v11 = *(_DWORD *)(this + 68) - 1; /*0x540f6c*/
  *(_DWORD *)(this + 68) = v11; /*0x540f6f*/
  if ( v10 >= v11 ) /*0x540f74*/
    *(_DWORD *)(this + 84) = 0; /*0x540f76*/
  return 1; /*0x540f2f*/
}



// ==== 0x00540F90  IPXManagerClass::GetSendCount  this=IPXManagerClass  sig=csp ====
int __thiscall Network::GetSendCount(IPXManagerClass *this)
{
  return *((_DWORD *)this + 17); /*0x540f93*/
}



// ==== 0x00540FA0  IPXManagerClass::GetConnectionSpeed  this=IPXManagerClass  sig=csp ====
int __thiscall Network::GetConnectionSpeed(IPXManagerClass *this, int a2)
{
  if ( a2 < 0 || a2 >= *((_DWORD *)this + 17) ) /*0x540fab*/
    return -1; /*0x540fb7*/
  else
    return *(_DWORD *)(*((_DWORD *)this + a2 + 10) + 100); /*0x540fb1*/
}



// ==== 0x00540FC0  Network::GetClass  this=Network  sig=csp ====
int __thiscall Network::GetClass(Network *this, int a2)
{
  void *Network_field_0x44; // esi
  int v3; // eax
  int *i; // edx

  Network_field_0x44 = this->Network_field_0x44; /*0x540fc2*/
  v3 = 0; /*0x540fc5*/
  if ( (int)Network_field_0x44 <= 0 ) /*0x540fca*/
    return 0; /*0x540fe2*/
  for ( i = this->Network_field_0x28; *(_DWORD *)(*i + 100) != a2; ++i ) /*0x540fd0*/
  {
    if ( ++v3 >= (int)Network_field_0x44 ) /*0x540fe0*/
      return 0; /*0x540fe0*/
  }
  return this->Network_field_0x28[v3] + 104; /*0x540fe2*/
}



// ==== 0x00541000  Network::FindPlayerByID  this=Network  sig=csp ====
int __thiscall Network::FindPlayerByID(Network *this, int a2)
{
  void *Network_field_0x44; // esi
  int v3; // eax
  int *i; // edx

  Network_field_0x44 = this->Network_field_0x44; /*0x541002*/
  v3 = 0; /*0x541005*/
  if ( (int)Network_field_0x44 <= 0 ) /*0x54100a*/
    return 0; /*0x541022*/
  for ( i = this->Network_field_0x28; *(_DWORD *)(*i + 100) != a2; ++i ) /*0x541010*/
  {
    if ( ++v3 >= (int)Network_field_0x44 ) /*0x541020*/
      return 0; /*0x541020*/
  }
  return this->Network_field_0x28[v3] + 76; /*0x541022*/
}



// ==== 0x00541040  IPXManagerClass::send  this=IPXManagerClass  sig=csp ====
int __thiscall IPXManagerClass::send(IPXManagerClass *this, int a2)
{
  int v2; // edx
  int result; // eax
  IPXManagerClass *i; // ecx

  v2 = *((_DWORD *)this + 17); /*0x541040*/
  result = 0; /*0x541043*/
  if ( v2 <= 0 ) /*0x541049*/
    return -1; /*0x541061*/
  for ( i = this + 5; *(_DWORD *)(i->Socket + 100) != a2; i = (IPXManagerClass *)((char *)i + 4) ) /*0x54104f*/
  {
    if ( ++result >= v2 ) /*0x54105f*/
      return -1; /*0x54105f*/
  }
  return result; /*0x541064*/
}



// ==== 0x00541070  IPXManagerClass::receivePacket  this=IPXManagerClass  sig=csp ====
int __thiscall IPXManagerClass::receivePacket(IPXManagerClass *this, int a2)
{
  int v2; // edx
  int result; // eax
  IPXManagerClass *v4; // esi

  v2 = *((_DWORD *)this + 17); /*0x541070*/
  result = 0; /*0x541074*/
  if ( v2 <= 0 ) /*0x54107d*/
  {
LABEL_5:
    if ( a2 == this->Active ) /*0x541091*/
    {
      return -4; /*0x541095*/
    }
    else if ( a2 == *((_DWORD *)this + 19) ) /*0x5410a0*/
    {
      return -3; /*0x5410a4*/
    }
    else
    {
      return (a2 != *((_DWORD *)this + 18)) - 2; /*0x5410b6*/
    }
  }
  else
  {
    v4 = this + 5; /*0x54107f*/
    while ( v4->Socket != a2 ) /*0x541084*/
    {
      ++result; /*0x541086*/
      v4 = (IPXManagerClass *)((char *)v4 + 4); /*0x541087*/
      if ( result >= v2 ) /*0x54108c*/
        goto LABEL_5; /*0x54108c*/
    }
  }
  return result; /*0x541093*/
}



// ==== 0x005410F0  Network::SendMessage  this=Network  sig=csp ====
int __thiscall Network::SendMessage(int *this, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v8; // edi
  int v9; // edi

  if ( !this->q004 || !this->q014 ) /*0x5410fa*/
    return 0; /*0x541169*/
  v8 = a4; /*0x541107*/
  if ( a4 && (!a5 || Network::IsBroadcastAddr((_BYTE *)a5)) ) /*0x541115*/
    v8 = 0; /*0x54111e*/
  v9 = (*(int (__thiscall **)(_DWORD, int, int, int, int, int, int))(*(_DWORD *)this->q048 + 44))( /*0x54113e*/
         this->q048,
         a2,
         a3,
         a5,
         v8,
         a6,
         a7);
  if ( !v9 ) /*0x541142*/
  {
    ++this->u32_28; /*0x54114b*/
    Debug::Log(); /*0x541159*/
  }
  return v9; /*0x541165*/
}



// ==== 0x00541170  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_541170(ObjectClass *this, int a2, int a3, int a4, int a5)
{
  int v5; // ebx
  int v7; // eax
  _DWORD *i; // edx
  _DWORD *v10; // ecx
  char ptr_4; // al
  int v12; // edi
  int v13; // edi
  int v14; // [esp+0h] [ebp-1Ch] BYREF
  _DWORD v15[3]; // [esp+10h] [ebp-Ch] BYREF

  HIWORD(v5) = HIWORD(a5); /*0x541174*/
  if ( dword_A8DA84 && *(_DWORD *)(*dword_A8DA78 + 111) == a5 ) /*0x541192*/
    return 0; /*0x541192*/
  v7 = 1; /*0x541194*/
  if ( dword_A8DA84 <= 1 ) /*0x54119b*/
    return 0; /*0x54119b*/
  for ( i = dword_A8DA78 + 1; *(_DWORD *)(*i + 111) != a5; ++i ) /*0x54119d*/
  {
    if ( ++v7 >= dword_A8DA84 ) /*0x5411ad*/
      return 0; /*0x5411ad*/
  }
  LOWORD(v5) = *(&dword_A8E2B2 + v7); /*0x5411be*/
  v10 = (_DWORD *)(dword_A8DA78[v7] + 40); /*0x5411c6*/
  ptr_4 = (char)this->?; /*0x5411c9*/
  v12 = a4; /*0x5411cc*/
  v15[0] = *v10; /*0x5411d2*/
  v15[1] = v10[1]; /*0x5411d9*/
  v15[2] = v10[2]; /*0x5411e2*/
  if ( !ptr_4 || !BYTE1(this->?) ) /*0x5411e8*/
    return 0; /*0x5411af*/
  if ( a4 && (&v14 == (int *)-16 || Network::IsBroadcastAddr((Network *)v15)) ) /*0x5411ff*/
    v12 = 0; /*0x541208*/
  v13 = (*(int (__thiscall **)(int, int, int, _DWORD *, int, int, _DWORD))(*(_DWORD *)this->ambientSoundController[3] /*0x541225*/
                                                                         + 44))(
          this->ambientSoundController[3],
          a2,
          a3,
          v15,
          v12,
          v5,
          0);
  if ( !v13 ) /*0x541229*/
  {
    ++this->location[1]; /*0x541232*/
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

  if ( dword_A8DA84 && !_wcsicmp(*(const wchar_t **)dword_A8DA78, String2) ) /*0x54127e*/
    return 0; /*0x54127e*/
  v6 = 1; /*0x54128f*/
  if ( dword_A8DA84 <= 1 ) /*0x541296*/
    return 0; /*0x541296*/
  while ( _wcsicmp(*(const wchar_t **)(dword_A8DA78 + 4 * v6), String2) ) /*0x5412ad*/
  {
    if ( ++v6 >= dword_A8DA84 ) /*0x5412b7*/
      return 0; /*0x5412b7*/
  }
  v8 = a4; /*0x5412ca*/
  v9 = *(_DWORD **)(dword_A8DA78 + 4 * v6); /*0x5412ce*/
  LOWORD(v6) = *((_WORD *)&dword_A8E2B2 + v6); /*0x5412d1*/
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
int __thiscall Network::Send(Network *this, int a2, int a3, int a4, int a5)
{
  if ( LOBYTE(this->Network_field_0x4) && BYTE1(this->Network_field_0x4) ) /*0x541377*/
    return (*(int (__thiscall **)(int, int, int, int, int))(*(_DWORD *)this->Network_field_0x48 + 52))( /*0x541397*/
             this->Network_field_0x48,
             a2,
             a3,
             a4,
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
int __thiscall Network::SendPacket(int *this, int a2, int a3, unsigned __int8 a4)
{
  int v5; // ecx
  int v6; // edi

  if ( !this->q004 ) /*0x541413*/
    return 0; /*0x541413*/
  if ( !this->q014 ) /*0x54141a*/
    return 0; /*0x54141a*/
  v5 = this->q04C; /*0x541421*/
  if ( !v5 ) /*0x541426*/
    return 0; /*0x541475*/
  v6 = (*(int (__stdcall **)(int, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v5 + 44))(a2, a3, v5 + 76, a4, 0, 0); /*0x54144b*/
  if ( !v6 ) /*0x54144f*/
  {
    ++this->u32_28; /*0x541458*/
    Debug::Log(); /*0x541466*/
  }
  return v6; /*0x541471*/
}



// ==== 0x00541480  Network::SendPacketThunk2  this=Network  sig=csp ====
int __thiscall Network::SendPacketThunk2(Network *this, int a2, int a3, int a4, int a5)
{
  if ( LOBYTE(this->Network_field_0x4) && BYTE1(this->Network_field_0x4) ) /*0x541487*/
    return (*(int (__thiscall **)(void *, int, int, int, int))(*(_DWORD *)this->Network_field_0x4C + 52))( /*0x5414a7*/
             this->Network_field_0x4C,
             a2,
             a3,
             a4,
             a5);
  else
    return 0; /*0x5414ad*/
}



// ==== 0x005414C0  IPXManagerClass::release  this=IPXManagerClass  sig=csp ====
int __thiscall IPXManagerClass::release(IPXManagerClass *this, int a2, int a3, int a4, int a5)
{
  int v6; // ecx
  _DWORD *v7; // ecx
  int v9; // eax
  IPXManagerClass *v10; // edx
  int v11; // edi
  IPXManagerClass *v12; // ebx
  int v13; // eax
  _DWORD *v14; // ecx

  if ( !this->Initialized ) /*0x5414c6*/
    return 0; /*0x5414c6*/
  if ( !this->Active ) /*0x5414d1*/
    return 0; /*0x5414d1*/
  v6 = *((_DWORD *)this + 17); /*0x5414dc*/
  if ( !v6 ) /*0x5414e1*/
    return 0; /*0x5414e1*/
  if ( a5 != -1 ) /*0x5414ee*/
  {
    v13 = (*(int (__thiscall **)(IPXManagerClass *, int))(this->Socket + 24))(this, a5); /*0x54159b*/
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
  if ( *(_DWORD *)&dword_A8B238 == 4 && byte_A8DBA0 ) /*0x541504*/
  {
    v7 = (_DWORD *)this->Active; /*0x541506*/
    if ( *(_DWORD *)(v7[1] + 40) < *(_DWORD *)(v7[1] + 4) ) /*0x541514*/
      return (*(int (__thiscall **)(_DWORD *, int, int, int, int))(*v7 + 8))(v7, a2, a3, a4, 255); /*0x541537*/
    goto LABEL_20; /*0x541514*/
  }
  v9 = 0; /*0x54153a*/
  if ( v6 > 0 ) /*0x54153e*/
  {
    v10 = this + 5; /*0x541540*/
    while ( *(_DWORD *)(*(_DWORD *)(v10->Socket + 4) + 40) != *(_DWORD *)(*(_DWORD *)(v10->Socket + 4) + 4) ) /*0x541550*/
    {
      ++v9; /*0x541556*/
      v10 = (IPXManagerClass *)((char *)v10 + 4); /*0x541557*/
      if ( v9 >= v6 ) /*0x54155c*/
        goto LABEL_13; /*0x54155c*/
    }
LABEL_20:
    ++*((_DWORD *)this + 40); /*0x5415d6*/
    return 0; /*0x5415df*/
  }
LABEL_13:
  v11 = 0; /*0x54155e*/
  if ( v6 > 0 ) /*0x541562*/
  {
    v12 = this + 5; /*0x541568*/
    do /*0x541588*/
    {
      (*(void (__thiscall **)(int, int, int, int, _DWORD))(*(_DWORD *)v12->Socket + 8))(v12->Socket, a2, a3, a4, 0); /*0x54157c*/
      ++v11; /*0x541582*/
      v12 = (IPXManagerClass *)((char *)v12 + 4); /*0x541583*/
    }
    while ( v11 < *((_DWORD *)this + 17) ); /*0x541588*/
  }
  return 1; /*0x541533*/
}



// ==== 0x005415F0  IPXManagerClass::ddtor  this=IPXManagerClass  sig=csp ====
int __thiscall IPXManagerClass::ddtor(IPXManagerClass *this, int a2, int a3, _DWORD *a4)
{
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  int v9; // edx
  int v10; // edi
  int v11; // edx
  int v13; // [esp+10h] [ebp-4h]

  if ( !this->Initialized ) /*0x5415f7*/
    return 0; /*0x5415f7*/
  if ( !this->Active ) /*0x5415fe*/
    return 0; /*0x5415fe*/
  v5 = *((_DWORD *)this + 17); /*0x541605*/
  if ( !v5 ) /*0x54160c*/
    return 0; /*0x54160c*/
  if ( *((_DWORD *)this + 21) >= v5 ) /*0x541611*/
    *((_DWORD *)this + 21) = 0; /*0x541613*/
  v13 = 0; /*0x541618*/
  if ( v5 <= 0 ) /*0x54161c*/
    return 0; /*0x541661*/
  while ( 1 ) /*0x54162b*/
  {
    v6 = *((_DWORD *)this + *((_DWORD *)this + 21) + 10); /*0x54162b*/
    v7 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v6 + 16))(v6, a2, a3); /*0x541631*/
    v8 = *((_DWORD *)this + 21); /*0x541634*/
    v9 = *((_DWORD *)this + v8++ + 10); /*0x541637*/
    v10 = *(_DWORD *)(v9 + 100); /*0x54163c*/
    v11 = *((_DWORD *)this + 17); /*0x54163f*/
    *((_DWORD *)this + 21) = v8; /*0x541644*/
    if ( v8 >= v11 ) /*0x541647*/
      *((_DWORD *)this + 21) = 0; /*0x541649*/
    if ( v7 ) /*0x541652*/
      break; /*0x541652*/
    if ( ++v13 >= v11 ) /*0x54165f*/
      return 0; /*0x54165f*/
  }
  *a4 = v10; /*0x54166f*/
  return 1; /*0x541661*/
}



// ==== 0x00541680  Network_Recv  this=IPXManagerClass  sig=csp ====
char __stdcall sub_541680(int a1, int a2, int a3, int a4, __int16 a5)
{
  int v5; // edx
  int *v7; // ebx
  __int16 v8; // di
  int v9; // [esp+0h] [ebp-1Ch] BYREF
  int v10; // [esp+8h] [ebp-14h] BYREF
  unsigned __int16 v11[6]; // [esp+10h] [ebp-Ch] BYREF

  if ( (byte_AA0674 & 1) == 0 ) /*0x54168a*/
  {
    byte_AA0674 |= 1u; /*0x541696*/
    dword_AA06B0 = htonl(0x7F000001u); /*0x5416a1*/
  }
  if ( dword_A8B238[0] != 4 || !byte_A8DBA0 || !unk_B052EC ) /*0x5416ca*/
    return 0; /*0x5416ca*/
  if ( *(unsigned __int16 *)(a1 + 12) == *(_DWORD *)&dword_841F3C ) /*0x5416e8*/
  {
    *(_WORD *)(a1 + 12) = a5; /*0x5416f2*/
    *(_DWORD *)(a1 + 8) = *(_DWORD *)(a4 + 4); /*0x541701*/
    Network::FormatAddress((unsigned __int16 *)a4, 0); /*0x541704*/
    Debug::Log(); /*0x54170f*/
    LOWORD(v5) = dword_841F3C; /*0x541714*/
    (*(void (__thiscall **)(int, int, int, void *, int, _DWORD, int, int))(*(_DWORD *)dword_887628 + 12))( /*0x54173c*/
      dword_887628,
      a2,
      a3,
      &unk_AA06AC,
      12,
      0,
      1,
      v5);
    return 1; /*0x541746*/
  }
  if ( !*(_WORD *)(a1 + 12) ) /*0x5416da*/
    return 0; /*0x54174c*/
  Network::CopyAddress_Small((char *)(*(_DWORD *)dword_A8DA78 + 40), (int)&v9); /*0x54175e*/
  v7 = (int *)(a1 + 8); /*0x541766*/
  if ( v9 == *(_DWORD *)(a1 + 8) && (_WORD)dword_A8E2B2 == *(_WORD *)(a1 + 12) ) /*0x54177e*/
  {
    Debug::Log(); /*0x541785*/
    return 0; /*0x541794*/
  }
  if ( !*v7 ) /*0x54179a*/
    return 0; /*0x54179a*/
  v8 = *(_WORD *)(a1 + 12); /*0x54179d*/
  Waypoint::InitInvalid(v11); /*0x5417a5*/
  v10 = *v7; /*0x5417b5*/
  Struct::Copy6Bytes((char *)v11, (int)&v10); /*0x5417b9*/
  Network::SetPort(v11, v8); /*0x5417c3*/
  *(_WORD *)(a1 + 12) = 0; /*0x5417c8*/
  *v7 = 0; /*0x5417d4*/
  Network::FormatAddress(v11, 0); /*0x5417da*/
  Debug::Log(); /*0x5417e5*/
  (*(void (__thiscall **)(int, int, int, unsigned __int16 *, int, _DWORD, int, __int16))(*(_DWORD *)dword_887628 + 12))( /*0x54180b*/
    dword_887628,
    a2,
    a3,
    v11,
    12,
    0,
    1,
    v8);
  return 1; /*0x541743*/
}



// ==== 0x00541820  IPXManagerClass::ReceiveLoop  this=IPXManagerClass  sig=csp ====
int __thiscall Network::ReceiveLoop(IPXManagerClass *this)
{
  void *Network_field_0xC; // ebx
  void *v3; // edx
  int v4; // ecx
  int v5; // edi
  bool v6; // zf
  unsigned __int16 *v7; // ebp
  int v8; // ecx
  const char *v9; // eax
  int v10; // edi
  char *v11; // eax
  __int16 v12; // ax
  __int16 v13; // bp
  int v14; // edx
  int *v15; // ecx
  int *v16; // eax
  int PlayerName; // eax
  int v18; // ebp
  IPXManagerClass *v19; // ebx
  char *v20; // eax
  int *v21; // ecx
  int v22; // ecx
  int *v23; // edx
  _WORD *v24; // ecx
  char v25; // cl
  int v26; // ebp
  IPXManagerClass *v27; // edi
  char LinkedIndex; // al
  int v29; // eax
  int v30; // edi
  _DWORD *v31; // ecx
  int i; // edi
  int *v33; // ecx
  int *v34; // eax
  int *v35; // eax
  int *v36; // ecx
  int v37; // ecx
  int v38; // ebp
  int v39; // ecx
  int v40; // ecx
  IPXManagerClass *v41; // edi
  int result; // eax
  __int16 v43; // [esp+20h] [ebp-4CCh]
  int v44; // [esp+20h] [ebp-4CCh]
  Network *v45; // [esp+24h] [ebp-4C8h]
  __int16 v46[2]; // [esp+34h] [ebp-4B8h] BYREF
  Network v47[2]; // [esp+38h] [ebp-4B4h] BYREF

  v47[0].Network_field_0x10 = (void *)1; /*0x541830*/
  Waypoint::InitInvalid((Waypoint *)v47); /*0x541838*/
  if ( *(_DWORD *)&stru_887598.isAliveFlag ) /*0x541844*/
  {
    while ( 1 ) /*0x541864*/
    {
      *(_DWORD *)v47[0].__pad_14 = 1024; /*0x541864*/
      *(_DWORD *)&v47[0].__pad_14[4] = 128; /*0x54186c*/
      *(_DWORD *)v46 = 0; /*0x541874*/
      Network_field_0xC = (void *)(*(int (__thiscall **)(_DWORD, char *, char *, char *, char *, __int16 *))(**(_DWORD **)&stru_887598.isAliveFlag + 8))( /*0x541889*/
                                    *(_DWORD *)&stru_887598.isAliveFlag,
                                    &v47[0].__pad_87[45],
                                    v47[0].__pad_14,
                                    v47[0].__pad_34,
                                    &v47[0].__pad_14[4],
                                    v46);
      v47[0].Network_field_0xC = Network_field_0xC; /*0x54188d*/
      if ( !Network_field_0xC ) /*0x541891*/
        goto LABEL_92; /*0x541891*/
      v3 = *(void **)&v47[0].__pad_34[4]; /*0x54189b*/
      v47[0].Network_field_0x0 = *(_DWORD *)v47[0].__pad_34; /*0x5418a6*/
      v4 = *((_DWORD *)this + 18); /*0x5418aa*/
      *((_DWORD *)this + 35) = &v47[0].__pad_87[45]; /*0x5418ad*/
      v47[0].Network_field_0x4 = v3; /*0x5418b7*/
      v47[0].Network_field_0x8 = *(void **)&v47[0].__pad_34[8]; /*0x5418bb*/
      if ( *(_WORD *)&v47[0].__pad_87[45] == *(_WORD *)(v4 + 36) ) /*0x5418cb*/
      {
        if ( Network_Recv( /*0x5418ee*/
               (int)&v47[0].__pad_87[45],
               (int)&v47[0].__pad_87[45],
               (int)Network_field_0xC,
               (int)v47[0].__pad_34,
               v46[0]) )
        {
          goto LABEL_87; /*0x5418f5*/
        }
        if ( (*(int (__thiscall **)(_DWORD, char *, void *, Network *, _DWORD))(**((_DWORD **)this + 18) + 48))( /*0x541913*/
               *((_DWORD *)this + 18),
               &v47[0].__pad_87[45],
               Network_field_0xC,
               v47,
               *(_DWORD *)v46) )
        {
          if ( *(_DWORD *)&dword_A8B238 == 4 && byte_A8E2C8 ) /*0x541932*/
          {
            v5 = 0; /*0x54193d*/
            v6 = dword_A8DA84 == 0; /*0x54193f*/
            if ( dword_A8DA84 <= 0 ) /*0x541941*/
            {
LABEL_14:
              if ( !v6 ) /*0x541980*/
              {
                Debug::Log(); /*0x54198b*/
                if ( (unsigned int)Network_field_0xC >= 0x10 /*0x5419ad*/
                  && v47[0].__pad_87[47] != 2
                  && (unsigned int)Network_field_0xC >= 0x3F )
                {
                  v8 = *(_DWORD *)(*((_DWORD *)this + 35) + 16); /*0x5419bc*/
                  if ( v8 == 39 || v8 == 41 || v8 == 13 ) /*0x5419cb*/
                  {
                    v9 = (const char *)(*((_DWORD *)this + 35) + 20); /*0x5419d3*/
                    *(_DWORD *)&v47[0].__pad_14[8] = 0; /*0x5419d6*/
                    *(_DWORD *)&v47[0].__pad_14[12] = 0; /*0x5419dc*/
                    *(_DWORD *)&v47[0].Network_field_0x22[2] = 0; /*0x5419e4*/
                    v47[0].Network_field_0x28[0] = 0; /*0x5419e9*/
                    *(_DWORD *)v47[0].__pad_2C = 0; /*0x5419ee*/
                    LOWORD(v47[0].Network_field_0x30[0]) = 0; /*0x5419f2*/
                    strncpy(&v47[0].__pad_14[8], v9, 0x14u); /*0x5419f7*/
                    v10 = 0; /*0x541a04*/
                    if ( dword_A8DA84 > 0 ) /*0x541a08*/
                    {
                      while ( 1 ) /*0x541a1b*/
                      {
                        v11 = ToWideStringChar((char *)dword_A8DA78[v10]); /*0x541a1b*/
                        if ( !_strcmpi(v11, &v47[0].__pad_14[8]) ) /*0x541a21*/
                          break; /*0x541a21*/
                        if ( ++v10 >= dword_A8DA84 ) /*0x541a35*/
                          goto LABEL_87; /*0x541a35*/
                      }
                      if ( !(unsigned __int8)NetworkID::Compare((bool *)(dword_A8DA78[v10] + 40), (int)v47) /*0x541a67*/
                        || *(_WORD *)(dword_A8DA78[v10] + 40) != v46[0] )
                      {
                        Debug::Log(); /*0x541a7d*/
                        v12 = v46[0]; /*0x541a82*/
                        v13 = *(&dword_A8E2B2 + v10); /*0x541a86*/
                        *(&dword_A8E2B2 + v10) = v46[0]; /*0x541a91*/
                        Network::reconnect( /*0x541aab*/
                          (Network *)&stru_B052C0.__pad_0[16],
                          *(_DWORD *)(dword_A8DA78[v10] + 111),
                          v12);
                        (*(void (__thiscall **)(_DWORD, Network *, __int16))(**((_DWORD **)this + 18) + 64))( /*0x541abb*/
                          *((_DWORD *)this + 18),
                          v47,
                          v13);
                        v14 = dword_A8DA78[v10]; /*0x541ac7*/
                        LOWORD(v14) = *(_WORD *)(v14 + 40); /*0x541acc*/
                        (*(void (__thiscall **)(_DWORD, Network *, int))(**((_DWORD **)this + 18) + 64))( /*0x541ad6*/
                          *((_DWORD *)this + 18),
                          v47,
                          v14);
                        v15 = (int *)(dword_A8DA78[v10] + 40); /*0x541ae5*/
                        *v15 = v47[0].Network_field_0x0; /*0x541ae8*/
                        v15[1] = (int)v47[0].Network_field_0x4; /*0x541aee*/
                        v15[2] = (int)v47[0].Network_field_0x8; /*0x541af5*/
                        Network::SetPort((Network *)(dword_A8DA78[v10] + 40), v46[0]); /*0x541b09*/
                        NetworkManager::SetPlayerAddress( /*0x541b24*/
                          (NetworkManager *)&stru_B052C0.__pad_0[16],
                          *(_DWORD *)(dword_A8DA78[v10] + 111),
                          (_DWORD *)(dword_A8DA78[v10] + 40));
                        v16 = (int *)(dword_A8DA90[GameClass::FindPlayerName(v10)] + 40); /*0x541b3f*/
                        *v16 = v47[0].Network_field_0x0; /*0x541b42*/
                        v16[1] = (int)v47[0].Network_field_0x4; /*0x541b48*/
                        v16[2] = (int)v47[0].Network_field_0x8; /*0x541b4f*/
                        v43 = v46[0]; /*0x541b56*/
                        PlayerName = GameClass::FindPlayerName(v10); /*0x541b5d*/
                        Network::SetPort((Network *)(dword_A8DA90[PlayerName] + 40), v43); /*0x541b6c*/
                        v18 = 0; /*0x541b74*/
                        if ( *((int *)this + 17) > 0 ) /*0x541b78*/
                        {
                          v19 = this + 5; /*0x541b7a*/
                          while ( 1 ) /*0x541b87*/
                          {
                            v20 = ToWideStringChar((char *)(v19->Socket + 104)); /*0x541b87*/
                            if ( !_strcmpi(v20, &v47[0].__pad_14[8]) ) /*0x541b8d*/
                              break; /*0x541b8d*/
                            ++v18; /*0x541b9c*/
                            v19 = (IPXManagerClass *)((char *)v19 + 4); /*0x541b9d*/
                            if ( v18 >= *((_DWORD *)this + 17) ) /*0x541ba2*/
                              goto LABEL_33; /*0x541ba2*/
                          }
                          v21 = (int *)(*((_DWORD *)this + v18 + 10) + 76); /*0x541bae*/
                          *v21 = v47[0].Network_field_0x0; /*0x541bb1*/
                          v21[1] = (int)v47[0].Network_field_0x4; /*0x541bb7*/
                          v21[2] = (int)v47[0].Network_field_0x8; /*0x541bbe*/
                          Network::SetPort((Network *)(*((_DWORD *)this + v18 + 10) + 76), v46[0]); /*0x541bcd*/
                          Network::FormatAddress((Network *)(*((_DWORD *)this + v18 + 10) + 76), 0); /*0x541bdb*/
                          Debug::Log(); /*0x541be7*/
LABEL_33:
                          Network_field_0xC = v47[0].Network_field_0xC; /*0x541bef*/
                        }
                        if ( !BYTE2(stru_A8D600.Network_field_0xC) ) /*0x541bfa*/
                        {
                          if ( *((_DWORD *)this + 17) ) /*0x541c00*/
                          {
                            v22 = dword_A8DA78[v10]; /*0x541c16*/
                            if ( stru_A80220.? > *(_DWORD *)(v22 + 111) ) /*0x541c1c*/
                            {
                              if ( SessionClass::IsValidHouse( /*0x541c36*/
                                     (int)&dword_A8B238,
                                     *((#375 **)stru_A80220.? + *(_DWORD *)(v22 + 111))) )
                              {
                                Network::FormatAddress(v47, 0); /*0x541c49*/
                                Network::FormatAddress((Network *)(this->Active + 76), 0); /*0x541c57*/
                                Debug::Log(); /*0x541c69*/
                                v23 = (int *)(this->Active + 76); /*0x541c75*/
                                *v23 = v47[0].Network_field_0x0; /*0x541c7b*/
                                v23[1] = (int)v47[0].Network_field_0x4; /*0x541c81*/
                                v23[2] = (int)v47[0].Network_field_0x8; /*0x541c88*/
                                Network::SetPort((Network *)(this->Active + 76), v46[0]); /*0x541c96*/
                                stru_A8BB1C.Network_field_0x0 = v47[0].Network_field_0x0; /*0x541ca7*/
                                stru_A8BB1C.Network_field_0x8 = v47[0].Network_field_0x8; /*0x541cb1*/
                                stru_A8BB1C.Network_field_0x4 = v47[0].Network_field_0x4; /*0x541cbd*/
                                Network::SetPort(&stru_A8BB1C, v46[0]); /*0x541cc2*/
                                qword_A8DBA4 = *(NetworkID *)&v47[0].Network_field_0x0; /*0x541cd3*/
                                dword_A8DBAC = v47[0].Network_field_0x8; /*0x541ce8*/
                                Network::SetPort((Network *)&qword_A8DBA4, v46[0]); /*0x541cee*/
                                dword_A8DBBC = v46[0]; /*0x541cf8*/
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
              v7 = &dword_A8E2B2; /*0x541943*/
              while ( !(unsigned __int8)NetworkID::Compare((bool *)(dword_A8DA78[v5] + 40), (int)v47) || *v7 != v46[0] ) /*0x54196b*/
              {
                ++v5; /*0x541976*/
                ++v7; /*0x541977*/
                if ( v5 >= dword_A8DA84 ) /*0x54197c*/
                {
                  v6 = dword_A8DA84 == 0; /*0x54197e*/
                  goto LABEL_14; /*0x54197e*/
                }
              }
            }
          }
          goto LABEL_87; /*0x54196b*/
        }
        ++*((_DWORD *)this + 41); /*0x54216c*/
        goto LABEL_91; /*0x542178*/
      }
      v24 = (_WORD *)*((_DWORD *)this + 19); /*0x541d04*/
      if ( *(_WORD *)&v47[0].__pad_87[45] == v24[18] ) /*0x541d0b*/
      {
        if ( !byte_A8DBA0 /*0x541d2c*/
          || (*(int (__thiscall **)(_WORD *, char *, void *, Network *, _DWORD))(*(_DWORD *)v24 + 48))(
               v24,
               &v47[0].__pad_87[45],
               Network_field_0xC,
               v47,
               0) )
        {
          goto LABEL_87; /*0x541d31*/
        }
        ++*((_DWORD *)this + 41); /*0x542183*/
LABEL_91:
        Debug::Log(); /*0x54218f*/
        goto LABEL_92; /*0x54218f*/
      }
      if ( *(_WORD *)&v47[0].__pad_87[45] != this->Initialized /*0x541d63*/
        || Network_Recv(
             (int)&v47[0].__pad_87[45],
             (int)&v47[0].__pad_87[45],
             (int)Network_field_0xC,
             (int)v47[0].__pad_34,
             v46[0]) )
      {
        goto LABEL_87; /*0x541d6a*/
      }
      v25 = v47[0].__pad_87[47]; /*0x541d75*/
      if ( byte_A8DBA0 && v47[0].__pad_87[48] == -1 ) /*0x541d87*/
      {
        if ( v47[0].__pad_87[47] == 2 ) /*0x541d90*/
        {
          (*(void (__thiscall **)(_DWORD, char *, void *))(**((_DWORD **)this + 20) + 12))( /*0x541da0*/
            this->Active,
            &v47[0].__pad_87[45],
            Network_field_0xC);
        }
        else if ( *((int *)this + 17) > 0 ) /*0x541dad*/
        {
          Network::FormatAddress(v47, 0); /*0x541e46*/
          Debug::Log(); /*0x541e59*/
          if ( !(*(int (__thiscall **)(_DWORD, char *, void *))(**((_DWORD **)this + 10) + 12))( /*0x541e6f*/
                  *((_DWORD *)this + 10),
                  &v47[0].__pad_87[45],
                  Network_field_0xC) )
          {
            Network_field_0xC = 0; /*0x541e80*/
            ++*((_DWORD *)this + 41); /*0x541e85*/
            goto LABEL_74; /*0x541e91*/
          }
        }
        goto LABEL_75; /*0x541da3*/
      }
      v26 = 0; /*0x541e99*/
      if ( *((int *)this + 17) <= 0 ) /*0x541e9d*/
      {
LABEL_60:
        if ( *(_DWORD *)&dword_A8B238 == 4 /*0x541f4a*/
          && !dword_A8E7AC
          && *(int *)&stru_A8EB00.?[416] > 8
          && !byte_A8DBA0
          && (unsigned int)Network_field_0xC > 0xF
          && v25 == 1
          && v47[0].__pad_87[59] == 25 )
        {
          v29 = 1; /*0x541f56*/
          v30 = v47[0].__pad_87[61]; /*0x541f5b*/
          if ( dword_A8DA84 > 1 ) /*0x541f65*/
          {
            v31 = dword_A8DA78 + 1; /*0x541f71*/
            while ( *(_DWORD *)(*v31 + 111) != v47[0].__pad_87[61] ) /*0x541f79*/
            {
              ++v29; /*0x541f7f*/
              ++v31; /*0x541f80*/
              if ( v29 >= dword_A8DA84 ) /*0x541f85*/
                goto LABEL_86; /*0x541f85*/
            }
            v35 = (int *)(dword_A8DA78[v29] + 40); /*0x542113*/
            v44 = v47[0].__pad_87[61]; /*0x542116*/
            *v35 = v47[0].Network_field_0x0; /*0x542117*/
            v35[1] = (int)v47[0].Network_field_0x4; /*0x54211d*/
            v35[2] = (int)v47[0].Network_field_0x8; /*0x542124*/
            if ( (*(int (__thiscall **)(IPXManagerClass *, int))(this->Socket + 24))(this, v44) != -1 ) /*0x542131*/
            {
              v36 = (int *)(*((_DWORD *)this /*0x542143*/
                            + (*(int (__thiscall **)(IPXManagerClass *, int))(this->Socket + 24))(this, v30)
                            + 10)
                          + 76);
              *v36 = v47[0].Network_field_0x0; /*0x542146*/
              v36[1] = (int)v47[0].Network_field_0x4; /*0x54214c*/
              v36[2] = (int)v47[0].Network_field_0x8; /*0x542153*/
            }
LABEL_86:
            Network_field_0xC = v47[0].Network_field_0xC; /*0x542156*/
          }
        }
        goto LABEL_87; /*0x542156*/
      }
      v27 = this + 5; /*0x541e9f*/
      while ( byte_A8DBA0 ) /*0x541ea9*/
      {
        LinkedIndex = Factory::GetLinkedIndex((Factory *)&stru_B052C0.__pad_0[16], *(_DWORD *)(v27->Socket + 100)); /*0x541eb6*/
        v25 = v47[0].__pad_87[47]; /*0x541ebb*/
        if ( LinkedIndex == v47[0].__pad_87[48] ) /*0x541ec4*/
          goto LABEL_72; /*0x541ec4*/
        if ( !byte_A8DBA0 ) /*0x541ed1*/
          break; /*0x541ed1*/
LABEL_59:
        ++v26; /*0x541ef1*/
        v27 = (IPXManagerClass *)((char *)v27 + 4); /*0x541ef5*/
        if ( v26 >= *((_DWORD *)this + 17) ) /*0x541efa*/
          goto LABEL_60; /*0x541efa*/
      }
      if ( !(unsigned __int8)GUID::Compare((char *)(v27->Socket + 76), (int)v47) ) /*0x541edd*/
        break; /*0x541edd*/
LABEL_72:
      if ( !(*(int (__thiscall **)(_DWORD, char *, void *))(**((_DWORD **)this + v26 + 10) + 12))( /*0x541f9b*/
              *((_DWORD *)this + v26 + 10),
              &v47[0].__pad_87[45],
              Network_field_0xC) )
      {
        Network_field_0xC = 0; /*0x541fa8*/
        ++*((_DWORD *)this + 41); /*0x541fad*/
LABEL_74:
        Debug::Log(); /*0x541fb9*/
      }
LABEL_75:
      if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x541fc8*/
      {
        if ( byte_A8DBA0 ) /*0x541fd5*/
        {
          if ( Network::processPacket((char *)v47, this->Active + 76) ) /*0x541fe6*/
          {
            for ( i = 1; i < dword_A8DA84; ++i ) /*0x541fff*/
            {
              if ( (unsigned __int8)NetworkID::Compare((bool *)(dword_A8DA78[i] + 40), this->Active + 76) /*0x54203e*/
                && SessionClass::IsValidHouse(
                     (int)&dword_A8B238,
                     *((#375 **)stru_A80220.? + *(_DWORD *)(dword_A8DA78[i] + 111))) )
              {
                Network::FormatAddress(v47, 0); /*0x542051*/
                Network::FormatAddress((Network *)(this->Active + 76), 0); /*0x54205f*/
                Debug::Log(); /*0x542071*/
                v33 = (int *)(dword_A8DA78[i] + 40); /*0x542085*/
                *v33 = v47[0].Network_field_0x0; /*0x542088*/
                v33[1] = (int)v47[0].Network_field_0x4; /*0x54208e*/
                v33[2] = (int)v47[0].Network_field_0x8; /*0x542095*/
                v34 = (int *)(this->Active + 76); /*0x54209f*/
                *v34 = v47[0].Network_field_0x0; /*0x5420a2*/
                v34[1] = (int)v47[0].Network_field_0x4; /*0x5420a8*/
                v34[2] = (int)v47[0].Network_field_0x8; /*0x5420af*/
                stru_A8BB1C.Network_field_0x0 = v47[0].Network_field_0x0; /*0x5420be*/
                qword_A8DBA4 = *(NetworkID *)&v47[0].Network_field_0x0; /*0x5420c3*/
                stru_A8BB1C.Network_field_0x4 = v47[0].Network_field_0x4; /*0x5420cd*/
                stru_A8BB1C.Network_field_0x8 = v47[0].Network_field_0x8; /*0x5420d3*/
                dword_A8DBAC = v47[0].Network_field_0x8; /*0x5420df*/
                NetworkManager::SetPlayerAddress( /*0x5420f6*/
                  (NetworkManager *)&stru_B052C0.__pad_0[16],
                  *(_DWORD *)(dword_A8DA78[i] + 111),
                  v47);
              }
            }
          }
        }
      }
LABEL_87:
      if ( !Network_field_0xC ) /*0x54215c*/
        goto LABEL_92; /*0x54215c*/
    }
    v25 = v47[0].__pad_87[47]; /*0x541eea*/
    goto LABEL_59; /*0x541eea*/
  }
LABEL_92:
  v37 = *((_DWORD *)this + 18); /*0x542197*/
  v38 = 0; /*0x54219a*/
  if ( v37 && *(_DWORD *)&stru_887598.isAliveFlag && !(*(int (__thiscall **)(int))(*(_DWORD *)v37 + 20))(v37) ) /*0x5421aa*/
  {
    (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 18) + 24))(*((_DWORD *)this + 18)); /*0x5421b6*/
    v47[0].Network_field_0x10 = 0; /*0x5421b9*/
  }
  if ( byte_A8DBA0 ) /*0x5421c4*/
  {
    v39 = *((_DWORD *)this + 19); /*0x5421c6*/
    if ( v39 ) /*0x5421cb*/
    {
      if ( !(*(int (__thiscall **)(int))(*(_DWORD *)v39 + 20))(v39) ) /*0x5421cf*/
      {
        (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 19) + 24))(*((_DWORD *)this + 19)); /*0x5421db*/
        v47[0].Network_field_0x10 = 0; /*0x5421de*/
      }
      if ( !byte_A8E2D0 ) /*0x5421e9*/
        Network::ProcessAddressChange(v45); /*0x5421f0*/
    }
    if ( byte_A8DBA0 ) /*0x5421fc*/
    {
      v40 = this->Active; /*0x5421fe*/
      if ( v40 ) /*0x542203*/
      {
        if ( !(*(int (__thiscall **)(int))(*(_DWORD *)v40 + 20))(v40) ) /*0x542207*/
        {
          Debug::Log(); /*0x542213*/
          v47[0].Network_field_0x10 = 0; /*0x54221b*/
        }
      }
    }
  }
  if ( *(_DWORD *)&stru_887598.isAliveFlag && *((int *)this + 17) > 0 ) /*0x54222a*/
  {
    v41 = this + 5; /*0x54222c*/
    do /*0x542260*/
    {
      if ( !(*(int (__thiscall **)(int))(*(_DWORD *)v41->Socket + 20))(v41->Socket) ) /*0x542233*/
      {
        v47[0].Network_field_0x10 = 0; /*0x54223a*/
        *((_DWORD *)this + 42) = *(_DWORD *)(v41->Socket + 100); /*0x542249*/
        Debug::Log(); /*0x54224f*/
      }
      ++v38; /*0x54225a*/
      v41 = (IPXManagerClass *)((char *)v41 + 4); /*0x54225b*/
    }
    while ( v38 < *((_DWORD *)this + 17) ); /*0x542260*/
  }
  result = (int)v47[0].Network_field_0x10; /*0x542262*/
  if ( v47[0].Network_field_0x10 ) /*0x542268*/
    *((_DWORD *)this + 42) = -1; /*0x54226a*/
  return result; /*0x542274*/
}



// ==== 0x00542280  EventClass::deserializeEvent  this=EventClass  sig=csp ====
int __thiscall EventClass::deserializeEvent(EventClass *this, int a2, _DWORD *a3)
{
  int result; // eax
  _DWORD *v5; // edx

  result = (*(int (__thiscall **)(EventClass *, int))(this->EventClass_field_0x0 + 24))(this, a2); /*0x54228c*/
  if ( result != -1 && result < (int)this->EventClass_field_0x44 ) /*0x542297*/
  {
    v5 = (_DWORD *)(*((_DWORD *)&this->EventClass_field_0x28 + result) + 76); /*0x5422a1*/
    *v5 = *a3; /*0x5422a6*/
    v5[1] = a3[1]; /*0x5422ab*/
    result = a3[2]; /*0x5422ae*/
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
int __thiscall Network::GetQueueCount(IPXManagerClass *this)
{
  if ( this->Initialized && this->Active ) /*0x5422d7*/
    return *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 18) + 4) + 40); /*0x5422e4*/
  else
    return 0; /*0x5422e8*/
}



// ==== 0x005422F0  IPXManagerClass::GetSpeed  this=IPXManagerClass  sig=csp ====
int __thiscall Connection::GetSpeed(IPXManagerClass *this)
{
  if ( this->Initialized && this->Active ) /*0x5422f7*/
    return *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 18) + 4) + 56); /*0x542304*/
  else
    return 0; /*0x542308*/
}



// ==== 0x00542310  IPXManagerClass::GetUpgradeValue  this=IPXManagerClass  sig=csp ====
int __thiscall HouseClass::GetUpgradeValue(IPXManagerClass *this)
{
  int v1; // ecx

  if ( this->Initialized && this->Active && (v1 = *((_DWORD *)this + 19)) != 0 ) /*0x542323*/
    return *(_DWORD *)(*(_DWORD *)(v1 + 4) + 40); /*0x542328*/
  else
    return 0; /*0x54232c*/
}



// ==== 0x00542330  IPXManagerClass::GetConnectionCount  this=IPXManagerClass  sig=csp ====
int __thiscall IPXManagerClass::GetConnectionCount(IPXManagerClass *this)
{
  int v1; // ecx

  if ( this->Initialized && this->Active && (v1 = *((_DWORD *)this + 19)) != 0 ) /*0x542343*/
    return *(_DWORD *)(*(_DWORD *)(v1 + 4) + 56); /*0x542348*/
  else
    return 0; /*0x54234c*/
}



// ==== 0x00542350  IPXManagerClass::GetAddress  this=IPXManagerClass  sig=csp ====
int __thiscall IPXManagerClass::GetAddress(IPXManagerClass *this, int a2)
{
  int v3; // ecx
  int v4; // eax
  int result; // eax
  IPXManagerClass *v6; // edx
  int v7; // esi

  if ( !this->Initialized ) /*0x542353*/
    return 0; /*0x542353*/
  if ( !this->Active ) /*0x54235a*/
    return 0; /*0x54235a*/
  v3 = *((_DWORD *)this + 17); /*0x542361*/
  if ( !v3 ) /*0x542366*/
    return 0; /*0x5423af*/
  if ( a2 != -1 ) /*0x54236f*/
  {
    v4 = (*(int (__thiscall **)(IPXManagerClass *, int))(this->Socket + 24))(this, a2); /*0x542376*/
    if ( v4 != -1 ) /*0x54237c*/
      return *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + v4 + 10) + 4) + 40); /*0x542389*/
    return 0; /*0x54237c*/
  }
  result = 0; /*0x54238c*/
  if ( v3 > 0 ) /*0x542390*/
  {
    v6 = this + 5; /*0x542392*/
    v7 = *((_DWORD *)this + 17); /*0x542395*/
    do /*0x5423a9*/
    {
      if ( *(_DWORD *)(*(_DWORD *)(v6->Socket + 4) + 40) > result ) /*0x5423a1*/
        result = *(_DWORD *)(*(_DWORD *)(v6->Socket + 4) + 40); /*0x5423a3*/
      v6 = (IPXManagerClass *)((char *)v6 + 4); /*0x5423a5*/
      --v7; /*0x5423a8*/
    }
    while ( v7 ); /*0x5423a9*/
  }
  return result; /*0x542382*/
}



// ==== 0x005423C0  IPXManagerClass::SetAddress  this=IPXManagerClass  sig=csp ====
int __thiscall IPXManagerClass::SetAddress(IPXManagerClass *this, int a2)
{
  int v3; // ecx
  int v4; // eax
  int result; // eax
  IPXManagerClass *v6; // edx
  int v7; // esi

  if ( !this->Initialized ) /*0x5423c3*/
    return 0; /*0x5423c3*/
  if ( !this->Active ) /*0x5423ca*/
    return 0; /*0x5423ca*/
  v3 = *((_DWORD *)this + 17); /*0x5423d1*/
  if ( !v3 ) /*0x5423d6*/
    return 0; /*0x54241f*/
  if ( a2 != -1 ) /*0x5423df*/
  {
    v4 = (*(int (__thiscall **)(IPXManagerClass *, int))(this->Socket + 24))(this, a2); /*0x5423e6*/
    if ( v4 != -1 ) /*0x5423ec*/
      return *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + v4 + 10) + 4) + 56); /*0x5423f9*/
    return 0; /*0x5423ec*/
  }
  result = 0; /*0x5423fc*/
  if ( v3 > 0 ) /*0x542400*/
  {
    v6 = this + 5; /*0x542402*/
    v7 = *((_DWORD *)this + 17); /*0x542405*/
    do /*0x542419*/
    {
      if ( *(_DWORD *)(*(_DWORD *)(v6->Socket + 4) + 56) > result ) /*0x542411*/
        result = *(_DWORD *)(*(_DWORD *)(v6->Socket + 4) + 56); /*0x542413*/
      v6 = (IPXManagerClass *)((char *)v6 + 4); /*0x542415*/
      --v7; /*0x542418*/
    }
    while ( v7 ); /*0x542419*/
  }
  return result; /*0x5423f2*/
}



// ==== 0x00542430  Network::GetField  this=Network  sig=csp ====
int __thiscall Network::GetField(Network *this, __int16 a2)
{
  int result; // eax
  __int16 v3; // dx

  LOWORD(result) = a2; /*0x542430*/
  LOBYTE(v3) = HIBYTE(a2); /*0x542437*/
  HIBYTE(v3) = a2; /*0x542439*/
  *(_WORD *)this->Network_field_0x22 = v3; /*0x54243b*/
  return result; /*0x54243f*/
}



// ==== 0x00542450  IPXManagerClass::GetQueueSize  this=IPXManagerClass  sig=csp ====
unsigned int __thiscall IPXManagerClass::GetQueueSize(IPXManagerClass *this)
{
  unsigned int v2; // ebp
  int v3; // edi
  IPXManagerClass *v4; // ebx
  unsigned int BridgeIndex; // eax
  int v6; // esi
  unsigned int result; // eax

  v2 = 0; /*0x542455*/
  v3 = 0; /*0x542457*/
  if ( *((int *)this + 17) > 0 ) /*0x54245e*/
  {
    v4 = this + 5; /*0x542461*/
    do /*0x54247d*/
    {
      BridgeIndex = CellClass::GetBridgeIndex(*(CellClass **)(v4->Socket + 4)); /*0x542469*/
      if ( BridgeIndex > v2 ) /*0x542470*/
        v2 = BridgeIndex; /*0x542472*/
      ++v3; /*0x542477*/
      v4 = (IPXManagerClass *)((char *)v4 + 4); /*0x542478*/
    }
    while ( v3 < *((_DWORD *)this + 17) ); /*0x54247d*/
  }
  v6 = this->Active; /*0x542480*/
  if ( !v6 ) /*0x542485*/
    return v2; /*0x542485*/
  result = CellClass::GetBridgeIndex(*(CellClass **)(v6 + 4)); /*0x54248a*/
  if ( result <= v2 ) /*0x542491*/
    return v2; /*0x542493*/
  return result; /*0x542495*/
}



// ==== 0x005424A0  IPXManagerClass::CheckStatus  this=IPXManagerClass  sig=csp ====
int __thiscall IPXManagerClass::CheckStatus(IPXManagerClass *this, int a2)
{
  return CellClass::GetBridgeIndex(*(CellClass **)(*((_DWORD *)this + a2 + 10) + 4)); /*0x5424b0*/
}



// ==== 0x005424C0  Network::GetLobbyStatus  this=Network  sig=csp ====
int __thiscall Network::GetLobbyStatus(Network *this)
{
  int Network_field_0x48; // eax

  Network_field_0x48 = this->Network_field_0x48; /*0x5424c0*/
  if ( Network_field_0x48 ) /*0x5424c5*/
    return CellClass::GetBridgeIndex(*(CellClass **)(Network_field_0x48 + 4)); /*0x5424ca*/
  else
    return 0; /*0x5424cf*/
}



// ==== 0x00542500  Network::updateLatency  this=Network  sig=csp ====
int __thiscall Network::updateLatency(Network *this)
{
  CellClass **Network_field_0x50; // eax

  Network_field_0x50 = (CellClass **)this->Network_field_0x50; /*0x542500*/
  if ( Network_field_0x50 ) /*0x542505*/
    return CellClass::GetBridgeIndex(Network_field_0x50[1]); /*0x54250a*/
  else
    return 0; /*0x54250f*/
}



// ==== 0x00542520  IPXManagerClass::ProcessQueue  this=IPXManagerClass  sig=csp ====
int __thiscall IPXManagerClass::ProcessQueue(IPXManagerClass *this)
{
  int v2; // ebx
  int result; // eax
  IPXManagerClass *v4; // edi
  int *v5; // esi
  Object *v6; // ecx
  int *v7; // eax
  int v8; // ecx
  int v9; // eax
  unsigned int v10; // kr00_4
  signed int v11; // eax

  v2 = 0; /*0x542524*/
  result = *((_DWORD *)this + 17); /*0x542526*/
  if ( result > 0 ) /*0x54252b*/
  {
    v4 = this + 5; /*0x542533*/
    v5 = (int *)&unk_A8B5B4; /*0x542536*/
    do /*0x54260c*/
    {
      v6 = (Object *)*((_DWORD *)stru_A80220.? + *(_DWORD *)(v4->Socket + 100)); /*0x542546*/
      if ( v6 && v6 != dword_A83D4C ) /*0x542557*/
      {
        if ( !*((_BYTE *)v5 - 64) ) /*0x54255d*/
        {
          CopyWideToChar((_BYTE *)v5 - 64, (char *)(v4->Socket + 104), -1); /*0x54256c*/
          v7 = (int *)(v4->Socket + 76); /*0x542576*/
          v5[7] = *v7; /*0x54257b*/
          v5[8] = v7[1]; /*0x542580*/
          v5[9] = v7[2]; /*0x542586*/
        }
        v8 = 1000 * IPXManagerClass::init(*(IPXManagerClass **)(v4->Socket + 4)); /*0x5425a1*/
        v9 = *v5; /*0x5425b2*/
        if ( *v5 <= v8 / 60 ) /*0x5425b6*/
          v9 = v8 / 60; /*0x5425b8*/
        *v5 = v9; /*0x5425ba*/
        v10 = 1000 * CellClass::GetBridgeIndex(*(CellClass **)(v4->Socket + 4)); /*0x5425c6*/
        v11 = v5[4]; /*0x5425d9*/
        if ( (int)(v10 / 0x3C) > v11 ) /*0x5425e1*/
          v11 = v10 / 0x3C; /*0x5425e3*/
        v5[4] = v11; /*0x5425e5*/
        v5[1] = *(_DWORD *)(v4->Socket + 8); /*0x5425ed*/
        v5[2] = *(_DWORD *)(v4->Socket + 12); /*0x5425f5*/
        v5[3] = *(_DWORD *)(v4->Socket + 16); /*0x5425fd*/
      }
      result = *((_DWORD *)this + 17); /*0x542600*/
      ++v2; /*0x542603*/
      v4 = (IPXManagerClass *)((char *)v4 + 4); /*0x542604*/
      v5 += 26; /*0x542607*/
    }
    while ( v2 < result ); /*0x54260c*/
  }
  return result; /*0x542614*/
}



// ==== 0x00542620  ScoreBoard::Render  this=ScoreBoard  sig=csp ====
int __thiscall ScoreBoard_Render(char *this)
{
  char *v1; // edi
  int v2; // esi
  int v3; // eax
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
  _DWORD *v15; // ebx
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
  const wchar_t *v28; // ecx
  bool v29; // cc
  _DWORD *v30; // eax
  _DWORD *v31; // eax
  _DWORD *v32; // eax
  _DWORD *v33; // eax
  _DWORD *v34; // eax
  int v35; // [esp+14h] [ebp-53Ch]
  int v36; // [esp+14h] [ebp-53Ch]
  int v37; // [esp+14h] [ebp-53Ch]
  int v38; // [esp+18h] [ebp-538h]
  int v39; // [esp+18h] [ebp-538h]
  int v40; // [esp+18h] [ebp-538h]
  int v41; // [esp+18h] [ebp-538h]
  int v42; // [esp+18h] [ebp-538h]
  int v43; // [esp+18h] [ebp-538h]
  int v44; // [esp+18h] [ebp-538h]
  int v45; // [esp+18h] [ebp-538h]
  int v46; // [esp+18h] [ebp-538h]
  int v47; // [esp+1Ch] [ebp-534h]
  int v48; // [esp+1Ch] [ebp-534h]
  int v49; // [esp+1Ch] [ebp-534h]
  int v50; // [esp+1Ch] [ebp-534h]
  int v51; // [esp+1Ch] [ebp-534h]
  int v52; // [esp+1Ch] [ebp-534h]
  int v53; // [esp+1Ch] [ebp-534h]
  int v54; // [esp+1Ch] [ebp-534h]
  int v55; // [esp+20h] [ebp-530h]
  int v56; // [esp+20h] [ebp-530h]
  int v57; // [esp+20h] [ebp-530h]
  int v58; // [esp+20h] [ebp-530h]
  int v59; // [esp+20h] [ebp-530h]
  int v60; // [esp+20h] [ebp-530h]
  int v61; // [esp+20h] [ebp-530h]
  int v62; // [esp+20h] [ebp-530h]
  int v63; // [esp+20h] [ebp-530h]
  int v64; // [esp+24h] [ebp-52Ch]
  int v65; // [esp+24h] [ebp-52Ch]
  int v66; // [esp+24h] [ebp-52Ch]
  int v67; // [esp+24h] [ebp-52Ch]
  int v68; // [esp+24h] [ebp-52Ch]
  int v69; // [esp+24h] [ebp-52Ch]
  int v70; // [esp+24h] [ebp-52Ch]
  int v71; // [esp+24h] [ebp-52Ch]
  int v72; // [esp+24h] [ebp-52Ch]
  int v73; // [esp+24h] [ebp-52Ch]
  int v74; // [esp+28h] [ebp-528h]
  int v75; // [esp+28h] [ebp-528h]
  int v76; // [esp+28h] [ebp-528h]
  int v77; // [esp+28h] [ebp-528h]
  int v78; // [esp+28h] [ebp-528h]
  int v79; // [esp+28h] [ebp-528h]
  int v80; // [esp+28h] [ebp-528h]
  int v81; // [esp+2Ch] [ebp-524h]
  int v82; // [esp+2Ch] [ebp-524h]
  int v83; // [esp+2Ch] [ebp-524h]
  int v84; // [esp+2Ch] [ebp-524h]
  int v85; // [esp+30h] [ebp-520h]
  int v86; // [esp+30h] [ebp-520h]
  int v87; // [esp+34h] [ebp-51Ch] BYREF
  int v88; // [esp+38h] [ebp-518h] BYREF
  int v89; // [esp+3Ch] [ebp-514h] BYREF
  int v90; // [esp+40h] [ebp-510h] BYREF
  int *v91; // [esp+44h] [ebp-50Ch] BYREF
  int v92; // [esp+48h] [ebp-508h]
  int v93; // [esp+4Ch] [ebp-504h]
  int v94; // [esp+50h] [ebp-500h]
  char *v95; // [esp+54h] [ebp-4FCh]
  const wchar_t *v96; // [esp+58h] [ebp-4F8h]
  int v97; // [esp+5Ch] [ebp-4F4h]
  _DWORD v98[3]; // [esp+68h] [ebp-4E8h] BYREF
  _DWORD v99[2]; // [esp+74h] [ebp-4DCh] BYREF
  _DWORD v100[2]; // [esp+7Ch] [ebp-4D4h] BYREF
  int v101; // [esp+84h] [ebp-4CCh] BYREF
  int v102; // [esp+88h] [ebp-4C8h] BYREF
  _DWORD v103[2]; // [esp+8Ch] [ebp-4C4h] BYREF
  _DWORD v104[3]; // [esp+94h] [ebp-4BCh] BYREF
  int v105; // [esp+A0h] [ebp-4B0h] BYREF
  int v106; // [esp+A4h] [ebp-4ACh]
  int v107; // [esp+B0h] [ebp-4A0h] BYREF
  char v108[4]; // [esp+B4h] [ebp-49Ch] BYREF
  _DWORD v109[5]; // [esp+B8h] [ebp-498h] BYREF
  int v110; // [esp+CCh] [ebp-484h] BYREF
  int v111[3]; // [esp+D4h] [ebp-47Ch] BYREF
  int v112; // [esp+E0h] [ebp-470h] BYREF
  int v113[2]; // [esp+E4h] [ebp-46Ch] BYREF
  int v114[3]; // [esp+ECh] [ebp-464h] BYREF
  int v115[2]; // [esp+F8h] [ebp-458h] BYREF
  int v116[6]; // [esp+100h] [ebp-450h] BYREF
  int v117; // [esp+118h] [ebp-438h] BYREF
  char v118[4]; // [esp+120h] [ebp-430h] BYREF
  char v119[24]; // [esp+124h] [ebp-42Ch] BYREF
  char v120[20]; // [esp+13Ch] [ebp-414h] BYREF
  char v121[8]; // [esp+150h] [ebp-400h] BYREF
  char v122[16]; // [esp+158h] [ebp-3F8h] BYREF
  char v123[12]; // [esp+168h] [ebp-3E8h] BYREF
  char v124[12]; // [esp+174h] [ebp-3DCh] BYREF
  char v125[16]; // [esp+180h] [ebp-3D0h] BYREF
  char v126[20]; // [esp+190h] [ebp-3C0h] BYREF
  char v127[24]; // [esp+1A4h] [ebp-3ACh] BYREF
  char v128[4]; // [esp+1BCh] [ebp-394h] BYREF
  wchar_t Buffer; // [esp+1C0h] [ebp-390h] BYREF
  wchar_t v130; // [esp+1C4h] [ebp-38Ch] BYREF
  wchar_t v131; // [esp+1C8h] [ebp-388h] BYREF
  wchar_t v132; // [esp+1CCh] [ebp-384h] BYREF
  wchar_t v133; // [esp+1D0h] [ebp-380h] BYREF
  wchar_t v134[246]; // [esp+1D4h] [ebp-37Ch] BYREF
  wchar_t v135[10]; // [esp+3C0h] [ebp-190h] BYREF
  char v136[380]; // [esp+3D4h] [ebp-17Ch] BYREF

  v1 = this; /*0x54262a*/
  v2 = DSurface_Composite; /*0x54262c*/
  v95 = this; /*0x542632*/
  swprintf(&Buffer, (const size_t)&off_8288A0, (const wchar_t *const)(1000 * *((_DWORD *)this + 22) / 0x3Cu)); /*0x54265d*/
  v87 = 0; /*0x542674*/
  v88 = 402; /*0x542678*/
  v3 = FindBuildingAnimByName(aGrey, 1); /*0x542680*/
  v4 = (_DWORD *)(*(int (__thiscall **)(int, int *, int *, int))(*(_DWORD *)v2 + 120))(v2, &v107, &v87, v3); /*0x542697*/
  TextRenderer::DrawText((int *)&v91, (size_t)&v131, v2, v4, 0, 25, v64, v74); /*0x5426a9*/
  swprintf(&v131, (const size_t)&off_82887C, (const wchar_t *const)(1000 * *((_DWORD *)v1 + 24) / 0x3Cu)); /*0x5426d5*/
  v89 = 0; /*0x5426e7*/
  v90 = 412; /*0x5426ee*/
  v5 = FindBuildingAnimByName(aGrey, 1); /*0x5426f6*/
  v6 = (_DWORD *)(*(int (__thiscall **)(int, _DWORD *, int *, int, _DWORD, int))(*(_DWORD *)v2 + 120))( /*0x54270d*/
                   v2,
                   v109,
                   &v89,
                   v5,
                   0,
                   25);
  TextRenderer::DrawText(&v90, (size_t)&v130, v2, v6, v38, v47, v55, v65); /*0x54271f*/
  swprintf(&v130, (const size_t)&off_82885C, dword_A8DB9C); /*0x542737*/
  v88 = 0; /*0x542749*/
  v89 = 422; /*0x542750*/
  v7 = FindBuildingAnimByName(aGrey, 1); /*0x542758*/
  v8 = (_DWORD *)(*(int (__thiscall **)(int, char *, int *, int, _DWORD, int))(*(_DWORD *)v2 + 120))( /*0x54276f*/
                   v2,
                   v108,
                   &v88,
                   v7,
                   0,
                   25);
  TextRenderer::DrawText(&v89, (size_t)&Buffer, v2, v8, v35, v39, v48, v56); /*0x542781*/
  if ( (int)(Timer::GetTicks() - dword_AC6648) / 60 ) /*0x5427ad*/
  {
    v9 = Timer::GetTicks() - dword_AC6648; /*0x5427c6*/
    swprintf(&Buffer, (const size_t)aFspsD, (const wchar_t *const)(dword_B0487C / (v9 / 60))); /*0x5427f3*/
    v87 = 0; /*0x542805*/
    v88 = 432; /*0x54280c*/
    v40 = FindBuildingAnimByName(aGrey, 1); /*0x54281b*/
    v10 = (_DWORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v2 + 120))(v2, &v107); /*0x54282b*/
    TextRenderer::DrawText(&v89, (size_t)&Buffer, v2, v10, (int)&v87, v40, 0, 25); /*0x54283d*/
    if ( ((unsigned __int8)dword_A8ED84 & 0x7F) == 0x7F ) /*0x54284f*/
    {
      dword_AC6648 = Timer::GetTicks(); /*0x54285e*/
      dword_AC664C = v90; /*0x542863*/
      dword_B0487C = 0; /*0x542869*/
    }
  }
  if ( dword_A8B238[0] == 4 && byte_A8DBA0 ) /*0x542883*/
  {
    if ( dword_A8EA10 ) /*0x542890*/
      BridgeIndex = CellClass::GetBridgeIndex(*(_DWORD **)(dword_A8EA10 + 4)); /*0x542895*/
    else
      BridgeIndex = 0; /*0x54289c*/
    swprintf(&Buffer, (const size_t)&off_828830, (const wchar_t *const)(1000 * BridgeIndex / 0x3Cu)); /*0x5428c2*/
    v87 = 0; /*0x5428d4*/
    v88 = 442; /*0x5428db*/
    v41 = FindBuildingAnimByName(aGrey, 1); /*0x5428ea*/
    v12 = (_DWORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v2 + 120))(v2, &v107); /*0x5428fa*/
    TextRenderer::DrawText(&v89, (size_t)&Buffer, v2, v12, (int)&v87, v41, 0, 25); /*0x54290c*/
  }
  result = *((_DWORD *)v1 + 17); /*0x542914*/
  v94 = 0; /*0x542917*/
  if ( result > 0 )
  {
    v91 = &dword_AC5210; /*0x542928*/
    v14 = 100; /*0x542932*/
    v15 = v1 + 40; /*0x542937*/
    v87 = (char *)&dword_A8DB54 - v1; /*0x54293a*/
    do
    {
      v16 = *(_DWORD *)&dword_A8022C->AbstractClass[4 * *(_DWORD *)(*v15 + 100)]; /*0x542949*/
      if ( v16 && (#375 *)v16 != dword_A83D4C )
      {
        v17 = *(_DWORD *)(v16 + 90196); /*0x542960*/
        swprintf(v135, (const size_t)&off_8240B4, (const wchar_t *const)(*v15 + 104)); /*0x542977*/
        v105 = v14; /*0x542985*/
        v106 = 302; /*0x542989*/
        v18 = (_DWORD *)(*(int (__thiscall **)(int, char *, int *, _DWORD, _DWORD, int, int))(*(_DWORD *)v2 + 120))( /*0x5429b0*/
                          v2,
                          v125,
                          &v105,
                          *((_DWORD *)dword_B054D4 + v17),
                          0,
                          25,
                          v66);
        TextRenderer::DrawText(v113, (size_t)v136, v2, v18, v75, v81, v85, v87); /*0x5429c5*/
        v19 = CellClass::GetBridgeIndex(*(_DWORD **)(*v15 + 4)); /*0x5429d2*/
        swprintf(v134, (const size_t)&off_828814, (const wchar_t *const)(1000 * v19 / 60)); /*0x542a04*/
        v99[0] = v14; /*0x542a11*/
        v99[1] = 311; /*0x542a15*/
        v20 = *((_DWORD *)dword_B054D4 + v17); /*0x542a1d*/
        v21 = *(_DWORD *)v2; /*0x542a20*/
        v87 = 25; /*0x542a22*/
        v22 = (_DWORD *)(*(int (__thiscall **)(int, char *, _DWORD *, int, _DWORD))(v21 + 120))(v2, v119, v99, v20, 0); /*0x542a36*/
        TextRenderer::DrawText(&v117, (size_t)&v133, v2, v22, v67, v76, v82, v86); /*0x542a4b*/
        v23 = IPXManagerClass::init(*(_DWORD *)(*v15 + 4)); /*0x542a58*/
        swprintf(&v133, (const size_t)&off_8287F8, (const wchar_t *const)(1000 * v23 / 60)); /*0x542a8a*/
        v109[0] = v14; /*0x542a98*/
        v109[1] = 319; /*0x542a9f*/
        v85 = 25; /*0x542aaf*/
        v24 = (_DWORD *)(*(int (__thiscall **)(int, char *, _DWORD *, _DWORD, _DWORD))(*(_DWORD *)v2 + 120))( /*0x542ac6*/
                          v2,
                          v121,
                          v109,
                          *((_DWORD *)dword_B054D4 + v17),
                          0);
        TextRenderer::DrawText(&v110, (size_t)&v132, v2, v24, v57, v68, v77, v83); /*0x542adb*/
        swprintf(&v132, (const size_t)&off_8287DC, *(const wchar_t *const *)(*v15 + 8)); /*0x542af3*/
        v101 = v14; /*0x542b00*/
        v102 = 327; /*0x542b04*/
        v25 = (_DWORD *)(*(int (__thiscall **)(int, char *, int *, _DWORD, _DWORD, int))(*(_DWORD *)v2 + 120))( /*0x542b25*/
                          v2,
                          v128,
                          &v101,
                          *((_DWORD *)dword_B054D4 + v17),
                          0,
                          25);
        TextRenderer::DrawText(v115, (size_t)&v131, v2, v25, v49, v58, v69, v78); /*0x542b3a*/
        swprintf(&v131, (const size_t)&off_8287C0, *(int *)(*v15 + 12) < 0 ? 0 : *(const wchar_t *const *)(*v15 + 12));
        v105 = v14; /*0x542b6a*/
        v106 = 335; /*0x542b6e*/
        v26 = (_DWORD *)(*(int (__thiscall **)(int, char *, int *, _DWORD, _DWORD, int))(*(_DWORD *)v2 + 120))( /*0x542b92*/
                          v2,
                          v123,
                          &v105,
                          *((_DWORD *)dword_B054D4 + v17),
                          0,
                          25);
        TextRenderer::DrawText(v113, (size_t)&v130, v2, v26, v42, v50, v59, v70); /*0x542ba7*/
        swprintf(&v130, (const size_t)&off_8287A4, *(const wchar_t *const *)(*v15 + 16)); /*0x542bbf*/
        v103[0] = v14; /*0x542bcc*/
        v103[1] = 343; /*0x542bd0*/
        v27 = (_DWORD *)(*(int (__thiscall **)(int, char *, _DWORD *, _DWORD, _DWORD, int))(*(_DWORD *)v2 + 120))( /*0x542bf1*/
                          v2,
                          v127,
                          v103,
                          *((_DWORD *)dword_B054D4 + v17),
                          0,
                          25);
        TextRenderer::DrawText(v116, (size_t)&Buffer, v2, v27, v36, v43, v51, v60); /*0x542c06*/
        v28 = 0; /*0x542c10*/
        v96 = 0; /*0x542c17*/
        v93 = 0; /*0x542c1b*/
        if ( dword_A8DA84 > 0 ) /*0x542c1f*/
        {
          v97 = *(_DWORD *)(*v15 + 100); /*0x542c2c*/
          v92 = dword_A8DA78; /*0x542c30*/
          while ( v97 != *(_DWORD *)(*(_DWORD *)v92 + 111) ) /*0x542c41*/
          {
            v29 = ++v93 < dword_A8DA84; /*0x542c4f*/
            v92 += 4; /*0x542c55*/
            if ( !v29 ) /*0x542c59*/
            {
              swprintf(&Buffer, (const size_t)&off_828788, v96); /*0x542c5f*/
              goto LABEL_21; /*0x542c5f*/
            }
          }
          v28 = *(const wchar_t **)(*(_DWORD *)(dword_A8DA78 + 4 * v93) + 115); /*0x542c6d*/
        }
        swprintf(&Buffer, (const size_t)&off_828788, v28); /*0x542c7e*/
LABEL_21:
        v98[0] = v14; /*0x542c83*/
        v98[1] = 351; /*0x542c90*/
        v30 = (_DWORD *)(*(int (__thiscall **)(int, char *, _DWORD *, _DWORD, _DWORD))(*(_DWORD *)v2 + 120))( /*0x542cb1*/
                          v2,
                          v118,
                          v98,
                          *((_DWORD *)dword_B054D4 + v17),
                          0);
        TextRenderer::DrawText(v111, (size_t)&v132, v2, v30, 25, v71, v79, v84); /*0x542cc6*/
        swprintf(&v132, (const size_t)&off_82876C, (const wchar_t *const)-*(_DWORD *)((char *)v15 + v90)); /*0x542ce2*/
        v100[0] = v14; /*0x542cef*/
        v100[1] = 359; /*0x542cf3*/
        v81 = 25; /*0x542d00*/
        v31 = (_DWORD *)(*(int (__thiscall **)(int, char *, _DWORD *, _DWORD, _DWORD))(*(_DWORD *)v2 + 120))( /*0x542d14*/
                          v2,
                          v120,
                          v100,
                          *((_DWORD *)dword_B054D4 + v17),
                          0);
        TextRenderer::DrawText(&v112, (size_t)&v131, v2, v31, v52, v61, v72, v80); /*0x542d29*/
        swprintf( /*0x542d48*/
          &v131,
          (const size_t)&off_828748,
          *(const wchar_t *const *)(*(_DWORD *)(*v15 + 4) + 40),
          *(_DWORD *)(*(_DWORD *)(*v15 + 4) + 56));
        v102 = v14; /*0x542d56*/
        v103[0] = 367; /*0x542d5a*/
        v75 = 25; /*0x542d67*/
        v32 = (_DWORD *)(*(int (__thiscall **)(int, char *, int *, _DWORD, _DWORD))(*(_DWORD *)v2 + 120))( /*0x542d7b*/
                          v2,
                          v122,
                          &v102,
                          *((_DWORD *)dword_B054D4 + v17),
                          0);
        TextRenderer::DrawText(v114, (size_t)&v130, v2, v32, v44, v53, v62, v73); /*0x542d90*/
        swprintf(&v130, (const size_t)&off_828724, *(const wchar_t *const *)(*v15 + 20), *(_DWORD *)(*v15 + 24)); /*0x542dac*/
        v104[0] = v14; /*0x542dba*/
        v104[1] = 375; /*0x542dbe*/
        v66 = 25; /*0x542dc9*/
        v33 = (_DWORD *)(*(int (__thiscall **)(int, char *, _DWORD *, _DWORD, _DWORD))(*(_DWORD *)v2 + 120))( /*0x542ddf*/
                          v2,
                          v124,
                          v104,
                          *((_DWORD *)dword_B054D4 + v17),
                          0);
        TextRenderer::DrawText(v115, (size_t)&Buffer, v2, v33, v37, v45, v54, v63); /*0x542df4*/
        if ( dword_A8B238[0] == 4 ) /*0x542e04*/
        {
          if ( byte_A8DBA0 ) /*0x542e11*/
          {
            swprintf(&Buffer, (const size_t)&off_828708, (const wchar_t *const)(1000 * *v91 / 0x3Cu)); /*0x542e3d*/
            v89 = v14; /*0x542e4a*/
            v90 = 383; /*0x542e4e*/
            v46 = *((_DWORD *)dword_B054D4 + v17); /*0x542e5f*/
            v34 = (_DWORD *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)v2 + 120))(v2, v126); /*0x542e6f*/
            TextRenderer::DrawText(&v107, (size_t)&Buffer, v2, v34, (int)&v89, v46, 0, 25); /*0x542e84*/
          }
        }
        v1 = v95; /*0x542e8c*/
      }
      result = v94 + 1; /*0x542e9b*/
      v14 += 100; /*0x542e9c*/
      ++v15; /*0x542e9f*/
      v29 = ++v94 < *((_DWORD *)v1 + 17); /*0x542ea5*/
      ++v91; /*0x542eab*/
    }
    while ( v29 );
  }
  return result; /*0x542eb5*/
}



// ==== 0x00542EC0  IPXManagerClass::Flush  this=IPXManagerClass  sig=csp ====
int __thiscall IPXManagerClass::Flush(IPXManagerClass *this, char a2)
{
  int v3; // edi
  IPXManagerClass *v4; // ebx
  int v5; // eax
  int result; // eax
  int v7; // esi

  v3 = 0; /*0x542ec4*/
  if ( *((int *)this + 17) > 0 ) /*0x542ecb*/
  {
    v4 = this + 5; /*0x542ed3*/
    do /*0x542eea*/
    {
      Rect::SetRedraw(*(Rect **)(v4->Socket + 4), a2); /*0x542edc*/
      ++v3; /*0x542ee4*/
      v4 = (IPXManagerClass *)((char *)v4 + 4); /*0x542ee5*/
    }
    while ( v3 < *((_DWORD *)this + 17) ); /*0x542eea*/
  }
  v5 = *((_DWORD *)this + 18); /*0x542eee*/
  if ( v5 ) /*0x542ef3*/
    Rect::SetRedraw(*(Rect **)(v5 + 4), 1); /*0x542efa*/
  result = *((_DWORD *)this + 19); /*0x542eff*/
  if ( result ) /*0x542f04*/
    result = Rect::SetRedraw(*(Rect **)(result + 4), 1); /*0x542f0b*/
  v7 = this->Active; /*0x542f10*/
  if ( v7 ) /*0x542f15*/
    return Rect::SetRedraw(*(Rect **)(v7 + 4), 1); /*0x542f1c*/
  return result; /*0x542f21*/
}



// ==== 0x00542F30  ObjectClass::method_542F30  this=ObjectClass  sig=csp ====
int __thiscall sub_542F30(ObjectClass *this)
{
  unsigned int v1; // ebx
  int result; // eax
  int v3; // ebp
  int *i; // edi
  int v5; // esi
  int v6; // ecx
  int TileIndex; // eax
  int v8; // [esp+8h] [ebp-8h]

  v1 = -1; /*0x542f38*/
  result = 0; /*0x542f3b*/
  v3 = 0; /*0x542f3d*/
  v8 = 0; /*0x542f45*/
  if ( this->ambientSoundController[2] > 0 ) /*0x542f49*/
  {
    for ( i = &this->owningHouseIndex; ; ++i ) /*0x542f4d*/
    {
      v5 = 0; /*0x542f52*/
      v6 = *(_DWORD *)(*i + 4); /*0x542f54*/
      if ( *(int *)(v6 + 40) <= 0 ) /*0x542f5c*/
        goto LABEL_12; /*0x542f5c*/
      while ( 1 ) /*0x542f5f*/
      {
        TileIndex = Terrain::GetTileIndex((Terrain *)v6, v5); /*0x542f5f*/
        if ( TileIndex ) /*0x542f66*/
          break; /*0x542f66*/
LABEL_8:
        ++v5; /*0x542f79*/
        v6 = *(_DWORD *)(*i + 4); /*0x542f7c*/
        if ( v5 >= *(_DWORD *)(v6 + 40) ) /*0x542f82*/
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
      if ( ++v3 >= this->ambientSoundController[2] ) /*0x542fa3*/
        return v8; /*0x542fa5*/
    }
    TileIndex = 0; /*0x542f77*/
    goto LABEL_8; /*0x542f77*/
  }
  return result; /*0x542fab*/
}



// ==== 0x00542FC0  ObjectClass::Network_Init_542FC0  this=ObjectClass  sig=csp ====
int __thiscall Network_Init_542FC0(ObjectClass *this, int a2)
{
  ObjectClass *v2; // ecx
  int result; // eax

  v2 = (ObjectClass *)this->ambientSoundController[3]; /*0x542fc0*/
  if ( v2 ) /*0x542fc5*/
    return Network_Init_5402B0(v2, a2); /*0x542fcc*/
  return result; /*0x542fd1*/
}



// ==== 0x00542FE0  IPXManagerClass::Init  this=IPXManagerClass  sig=csp ====
int __thiscall IPXManagerClass::Init(IPXManagerClass *this, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int result; // eax

  if ( a2 == -1 ) /*0x542fe7*/
    return EventClass::SetData(*(EventClass **)(*((_DWORD *)this + 18) + 4), a3, a4, a5, a6, a7); /*0x543008*/
  result = *((_DWORD *)this + a2 + 10); /*0x543010*/
  if ( result ) /*0x543016*/
    return EventClass::SetData(*(EventClass **)(result + 4), a3, a4, a5, a6, a7); /*0x543034*/
  return result; /*0x54300d*/
}



// ==== 0x00543040  IPXManagerClass::StubReturnFalse  this=IPXManagerClass  sig=csp ====
void __stdcall IPXManagerClass::StubReturnFalse(IPXManagerClass *this, int a2)
{
  ; /*0x543040*/
}



// ==== 0x00543050  Network::SetPlayerCoords  this=Network  sig=csp ====
_DWORD *__thiscall Network::SetPlayerCoords(Network *this, _DWORD *a2)
{
  _DWORD *result; // eax

  result = this->Network_field_0x4C; /*0x543050*/
  if ( result ) /*0x543055*/
  {
    result += 19; /*0x54305b*/
    *result = *a2; /*0x543060*/
    result[1] = a2[1]; /*0x543065*/
    result[2] = a2[2]; /*0x54306b*/
  }
  return result; /*0x54306e*/
}



// ==== 0x00543080  Network::Disconnect  this=Network  sig=csp ====
int __thiscall Network::Disconnect(Network *this)
{
  int result; // eax

  result = this->Network_field_0x48; /*0x543080*/
  if ( result ) /*0x543085*/
    *(_BYTE *)(result + 200) = 0; /*0x543087*/
  return result; /*0x54308e*/
}



// ==== 0x00543090  Connection::Close  this=Connection  sig=csp ====
int __thiscall Connection::Close(Connection *this)
{
  int result; // eax

  result = (int)this->Connection_field_0x48; /*0x543090*/
  if ( result ) /*0x543095*/
    *(_BYTE *)(result + 200) = 1; /*0x543097*/
  return result; /*0x54309e*/
}



// ==== 0x005430C0  ObjectClass::StartGameWOL_Start  this=ObjectClass  sig=csp ====
int __thiscall StartGameWOL_Start(ObjectClass *this, int a2)
{
  int v2; // ecx
  int result; // eax

  v2 = this->ambientSoundController[3]; /*0x5430c0*/
  if ( v2 ) /*0x5430c5*/
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)v2 + 68))(v2, a2); /*0x5430ce*/
  return result; /*0x5430d1*/
}



// ==== 0x005430E0  IPXManagerClass::QueryInterface  this=IPXManagerClass  sig=csp ====
char *__thiscall IPXManagerClass::QueryInterface(IPXManagerClass *this, char a2)
{
  IPXManagerClass::processPacket((char *)this); /*0x5430e3*/
  if ( (a2 & 1) != 0 ) /*0x5430ed*/
    __3_YAXPAX_Z(this); /*0x5430f0*/
  return (char *)this; /*0x5430fa*/
}



// ==== 0x00543100  ConnManClass::getPlayerName  this=ConnManClass  sig=csp ====
_DWORD *__thiscall IPXManagerClass::getPlayerName(ConnManClass *this, char a2)
{
  this->m_0 = (int)&ConnManClass::`vftable'; /*0x543109*/
  if ( (a2 & 1) != 0 ) /*0x54310f*/
    __3_YAXPAX_Z(this); /*0x543112*/
  return &this->m_0; /*0x54311c*/
}



// ==== 0x00543120  sub_543120  this=-  sig=ida-proto ====
void sub_543120()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x54312c*/
  dbl_AA06D8 = Math::Sqrt(v0 + v0); /*0x54313e*/
}



// ==== 0x00543150  sub_543150  this=-  sig=ida-proto ====
void sub_543150()
{
  dbl_AA0728 = dbl_AA06D8 / 60.0; /*0x54315c*/
}



// ==== 0x00543170  sub_543170  this=-  sig=ida-proto ====
void sub_543170()
{
  dbl_AA0710 = 1.0 / dbl_AA0728; /*0x54317c*/
}



// ==== 0x00543190  sub_543190  this=-  sig=ida-proto ====
void sub_543190()
{
  dbl_AA0708 = 0.0174532925199433 * 45.0; /*0x54319c*/
}



// ==== 0x005431B0  sub_5431B0  this=-  sig=ida-proto ====
void sub_5431B0()
{
  dbl_AA06E0 = 0.0174532925199433 * 60.0; /*0x5431bc*/
}



// ==== 0x005431D0  sub_5431D0  this=-  sig=ida-proto ====
void sub_5431D0()
{
  dbl_AA06B8 = 0.0174532925199433 * 90.0; /*0x5431dc*/
}



// ==== 0x005431F0  sub_5431F0  this=-  sig=ida-proto ====
__int64 sub_5431F0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_AA06B8 - dbl_AA06E0); /*0x543202*/
  result = Math::RoundToInt(v0 * dbl_AA06D8 * 0.5); /*0x543216*/
  dword_AA0730 = result; /*0x54321b*/
  return result; /*0x543220*/
}



// ==== 0x00543230  sub_543230  this=-  sig=ida-proto ====
void sub_543230()
{
  dbl_AA06E8 = Math::ArcTan((double)dword_AA0730 * 0.00390625); /*0x543247*/
}



// ==== 0x00543260  sub_543260  this=-  sig=ida-proto ====
void sub_543260()
{
  dbl_AA0700 = Math::ArcTan((double)(2 * dword_AA0730) / dbl_AA06D8); /*0x543282*/
}



// ==== 0x00543290  sub_543290  this=-  sig=ida-proto ====
__int64 sub_543290()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_AA0730) + 0.5); /*0x5432ab*/
  dword_AA0724 = result; /*0x5432b0*/
  return result; /*0x5432b6*/
}



// ==== 0x005432C0  sub_5432C0  this=-  sig=ida-proto ====
int sub_5432C0()
{
  word_AA06D0 = 0; /*0x5432c2*/
  word_AA06D2 = 0; /*0x5432c8*/
  return 0; /*0x5432ce*/
}



// ==== 0x005432D0  sub_5432D0  this=-  sig=ida-proto ====
int sub_5432D0()
{
  dword_AA06F0 = 0; /*0x5432d2*/
  dword_AA06F4 = 0; /*0x5432d7*/
  dword_AA06F8 = 0; /*0x5432dc*/
  return 0; /*0x5432e1*/
}



// ==== 0x005432F0  sub_5432F0  this=-  sig=ida-proto ====
int sub_5432F0()
{
  dword_AA0720 = 0; /*0x5432f5*/
  dword_AA0718 = 128; /*0x5432ff*/
  dword_AA071C = 128; /*0x543304*/
  return 128; /*0x543309*/
}



// ==== 0x00543310  sub_543310  this=-  sig=ida-proto ====
int sub_543310()
{
  dword_AA06C0 = 0; /*0x543312*/
  dword_AA06C4 = 0; /*0x543317*/
  dword_AA06C8 = 0; /*0x54331c*/
  dword_AA06CC = 0; /*0x543321*/
  return 0; /*0x543326*/
}



// ==== 0x00543330  AbstractClass::ModifyCellTiles  this=IsometricTileClass  sig=csp ====
char __thiscall AbstractClass::ModifyCellTiles(AbstractClass *this, int a2)
{
  AbstractClass *v2; // edi
  int v3; // esi
  int referenceCount; // eax
  int v5; // ecx
  int v6; // ebp
  _WORD *v7; // eax
  unsigned __int8 *v8; // esi
  int v9; // eax
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
  CellClass *NeighbourContent; // eax
  CellClass *v22; // eax
  CellClass *v23; // eax
  CellClass *v24; // eax
  int v25; // eax
  int v27; // [esp+Ch] [ebp-40h]
  char *v28; // [esp+10h] [ebp-3Ch]
  int v30; // [esp+18h] [ebp-34h]
  int v31; // [esp+1Ch] [ebp-30h]
  __int16 v32[2]; // [esp+20h] [ebp-2Ch] BYREF
  int v33; // [esp+24h] [ebp-28h]
  int v34; // [esp+28h] [ebp-24h]
  int v35; // [esp+2Ch] [ebp-20h]
  int v36; // [esp+30h] [ebp-1Ch] BYREF
  int v37; // [esp+38h] [ebp-14h]
  int v38; // [esp+3Ch] [ebp-10h]
  _BYTE v39[12]; // [esp+40h] [ebp-Ch] BYREF

  v2 = this; /*0x543335*/
  v30 = (*(int (__thiscall **)(AbstractClass *))(this->ptr_0 + 108))(this); /*0x543342*/
  if ( !v30 ) /*0x543346*/
    return 0; /*0x543346*/
  v3 = a2; /*0x54334c*/
  if ( !(unsigned __int8)ObjectClass::UpdateProductionDisplay((TechnoClass *)v2) ) /*0x543353*/
    return 0; /*0x543741*/
  referenceCount = v2[4].referenceCount; /*0x543360*/
  v27 = 0; /*0x543366*/
  if ( *(int *)(referenceCount + 744) > 0 ) /*0x543376*/
  {
    while ( 1 ) /*0x54337e*/
    {
      v5 = *(_DWORD *)(referenceCount + 740); /*0x54337e*/
      v6 = 0; /*0x543384*/
      v34 = 0; /*0x543388*/
      if ( v5 <= 0 ) /*0x54338c*/
        goto LABEL_45; /*0x54338c*/
      do /*0x5436f2*/
      {
        v7 = (_WORD *)(*(int (__thiscall **)(AbstractClass *, int *))(v2->ptr_0 + 440))(v2, &v36); /*0x54339b*/
        LOWORD(v31) = *v7 + v6; /*0x5433b0*/
        HIWORD(v31) = v27 + v7[1]; /*0x5433b9*/
        *(_DWORD *)v32 = v31; /*0x5433c8*/
        if ( !(unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&dword_87F7E8, v32) ) /*0x5433cc*/
          goto LABEL_44; /*0x5433cc*/
        v8 = (unsigned __int8 *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v32); /*0x5433e8*/
        v9 = v2[4].referenceCount; /*0x5433ea*/
        v10 = v6 + v27 * *(_DWORD *)(v9 + 740); /*0x5433ff*/
        if ( !*(_DWORD *)(v30 + 4 * v10 + 16) ) /*0x543401*/
          goto LABEL_44; /*0x543407*/
        if ( !a2 ) /*0x543413*/
        {
          if ( *((_DWORD *)v8 + 14) == *(_DWORD *)(v9 + 660) && v8[282] == v10 ) /*0x543430*/
          {
            *((_DWORD *)v8 + 14) = 0xFFFF; /*0x54343a*/
            v8[282] = 0; /*0x543441*/
            v8[283] -= *(_BYTE *)(*(_DWORD *)(v30 + 4 * v10 + 16) + 40); /*0x543457*/
          }
          goto LABEL_43; /*0x54345d*/
        }
        if ( a2 != 1 && a2 != 3 ) /*0x54346a*/
          goto LABEL_43; /*0x54346a*/
        v11 = *(_DWORD *)(v9 + 660); /*0x543470*/
        if ( v11 == dword_AA10B0 ) /*0x54347e*/
        {
          *((_DWORD *)v8 + 14) = 0xFFFF; /*0x543480*/
        }
        else
        {
          *((_DWORD *)v8 + 14) = v11; /*0x54348c*/
          v8[282] = v10; /*0x54348f*/
          v8[284] = HouseClass::GetCameoTypeIndex((HouseClass *)v2[4].referenceCount, v10); /*0x5434a1*/
          if ( *((_DWORD *)v8 + 14) == g_TerrainTypeTable2 + 5 ) /*0x5434b5*/
          {
            switch ( v8[282] ) /*0x5434cc*/
            {
              case 0u: /*0x5434cc*/
              case 3u: /*0x5434cc*/
              case 6u: /*0x5434cc*/
              case 9u: /*0x5434cc*/
                v12 = g_CellTileLookup; /*0x5434d3*/
                v8[282] = 0; /*0x5434d8*/
                *((_DWORD *)v8 + 14) = v12 + 1; /*0x5434e0*/
                break; /*0x5434e0*/
              default:
                break;
            }
          }
          if ( *((_DWORD *)v8 + 14) == dword_AA1098 + 5 ) /*0x5434f1*/
          {
            switch ( v8[282] ) /*0x543508*/
            {
              case 0u: /*0x543508*/
              case 3u: /*0x543508*/
              case 6u: /*0x543508*/
              case 9u: /*0x543508*/
                v13 = dword_AA109C; /*0x54350f*/
                v8[282] = 0; /*0x543514*/
                *((_DWORD *)v8 + 14) = v13 + 1; /*0x54351c*/
                break; /*0x54351c*/
              default:
                break;
            }
          }
          if ( *((_DWORD *)v8 + 14) == g_TerrainTypeTable2 + 8 && v8[282] <= 3u ) /*0x543536*/
          {
            v14 = g_CellTileLookup; /*0x543538*/
            v8[282] = 0; /*0x54353e*/
            *((_DWORD *)v8 + 14) = v14; /*0x543545*/
          }
          if ( *((_DWORD *)v8 + 14) != dword_AA1098 + 8 || v8[282] > 3u ) /*0x54355e*/
            goto LABEL_28; /*0x54355e*/
          *((_DWORD *)v8 + 14) = dword_AA109C; /*0x543566*/
        }
        v8[282] = 0; /*0x543569*/
LABEL_28:
        v15 = *((_DWORD *)v8 + 17); /*0x543570*/
        *((_DWORD *)v8 + 18) = -1; /*0x543573*/
        v8[287] = 0; /*0x54357d*/
        if ( v15 < 27 ) /*0x543584*/
          goto LABEL_42; /*0x543584*/
        if ( v15 >= 38 ) /*0x54358d*/
          goto LABEL_42; /*0x54358d*/
        v16 = *(_DWORD *)v8; /*0x543599*/
        *((_DWORD *)v8 + 80) &= ~0x20000u; /*0x5435a2*/
        v17 = (_DWORD *)(*(int (__thiscall **)(unsigned __int8 *, _BYTE *))(v16 + 72))(v8, v39); /*0x5435ad*/
        v18 = *v17 + 384; /*0x5435bb*/
        v37 = v17[1] + 384; /*0x5435c1*/
        v38 = v17[2]; /*0x5435cd*/
        v33 = 0; /*0x5435d3*/
        if ( dword_A8E9B8 <= 0 ) /*0x5435db*/
          goto LABEL_42; /*0x5435db*/
        v35 = *(_DWORD *)(*(&dword_A83D84->ptr_0 + *((_DWORD *)v8 + 17)) + 668); /*0x5435f8*/
        v28 = (char *)dword_A8E9AC; /*0x5435fc*/
        while ( 1 ) /*0x543608*/
        {
          v19 = *(_DWORD **)v28; /*0x543608*/
          if ( *(_DWORD *)(*(_DWORD *)v28 + 200) == v35 ) /*0x543610*/
            break; /*0x543610*/
LABEL_37:
          v20 = ++v33 < dword_A8E9B8; /*0x543637*/
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
        *((_DWORD *)v8 + 17) = -1; /*0x543666*/
        v8[286] = 0; /*0x543671*/
        v8[283] += *(_BYTE *)(*(_DWORD *)(v30 + 4 * v10 + 16) + 40); /*0x543689*/
        CellClass::DetermineTileType((CellClass *)v8); /*0x54368f*/
        NeighbourContent = (CellClass *)Cell::GetNeighbourContent((Cell *)v8, 0); /*0x543698*/
        CellClass::DetermineTileType(NeighbourContent); /*0x54369f*/
        v22 = (CellClass *)Cell::GetNeighbourContent((Cell *)v8, 2u); /*0x5436a8*/
        CellClass::DetermineTileType(v22); /*0x5436af*/
        v23 = (CellClass *)Cell::GetNeighbourContent((Cell *)v8, 4u); /*0x5436b8*/
        CellClass::DetermineTileType(v23); /*0x5436bf*/
        v24 = (CellClass *)Cell::GetNeighbourContent((Cell *)v8, 6u); /*0x5436c8*/
        CellClass::DetermineTileType(v24); /*0x5436cf*/
        v6 = v34; /*0x5436d4*/
LABEL_43:
        House::AnnounceUpgrade((int)v8, -1); /*0x5436d8*/
LABEL_44:
        v25 = v2[4].referenceCount; /*0x5436e1*/
        v34 = ++v6; /*0x5436e8*/
      }
      while ( v6 < *(_DWORD *)(v25 + 740) ); /*0x5436f2*/
LABEL_45:
      referenceCount = v2[4].referenceCount; /*0x5436f8*/
      if ( ++v27 >= *(_DWORD *)(referenceCount + 744) ) /*0x54370f*/
      {
        v3 = a2; /*0x543715*/
        break; /*0x543715*/
      }
    }
  }
  if ( v3 == 1 || v3 == 3 ) /*0x543723*/
  {
    LOBYTE(v2[3].ptr_8) = 0; /*0x543727*/
    if ( v2 ) /*0x54372b*/
      (*(void (__thiscall **)(AbstractClass *, int))(v2->ptr_0 + 32))(v2, 1); /*0x543733*/
  }
  return 1; /*0x543736*/
}



// ==== 0x00543780  IsometricTileClass::IsometricTileClass  this=IsometricTileClass  sig=csp ====
IsometricTileClass *__thiscall IsometricTileClass::IsometricTileClass(IsometricTileClass *this, int a2, _WORD *a3)
{
  int v4; // eax

  ObjectClass::ctor((ObjectClass *)this); /*0x543786*/
  *(this + 43) = *(IsometricTileClass *)(*(_DWORD *)&stru_A8EB00.?[328] + 4 * a2); /*0x54379c*/
  *this = (IsometricTileClass)&IsometricTileClass::`vftable'; /*0x5437a2*/
  *((_DWORD *)this + 1) = &IsometricTileClass::`vftable'; /*0x5437a8*/
  *((_DWORD *)this + 2) = &IsometricTileClass::`vftable'; /*0x5437af*/
  *((_DWORD *)this + 3) = &IsometricTileClass::`vftable'; /*0x5437b6*/
  if ( *a3 != word_AA06D0 || a3[1] != word_AA06D2 ) /*0x5437d4*/
  {
    *((_BYTE *)this + 129) = 0; /*0x543805*/
    ObjectClass::SetPosition((IUnknown *)this); /*0x54380c*/
    (*(void (__thiscall **)(IsometricTileClass *, int))(*(_DWORD *)this + 292))(this, 1); /*0x543818*/
  }
  if ( *(int *)&stru_87F5F0.__pad_58[280] < *(int *)&stru_87F5F0.__pad_58[272] /*0x543855*/
    || (stru_87F5F0.__pad_58[277] || !*(_DWORD *)&stru_87F5F0.__pad_58[272])
    && *(int *)&stru_87F5F0.__pad_58[284] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_87F5F0.__pad_58[264] + 8))(
         &stru_87F5F0.__pad_58[264],
         *(_DWORD *)&stru_87F5F0.__pad_58[272] + *(_DWORD *)&stru_87F5F0.__pad_58[284],
         0) )
  {
    v4 = (*(_DWORD *)&stru_87F5F0.__pad_58[280])++; /*0x543862*/
    *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[268] + 4 * v4) = this; /*0x543871*/
  }
  return this; /*0x543876*/
}



// ==== 0x00543990  AbstractClass::COMStub_5  this=IsometricTileClass  sig=csp ====
int __thiscall AbstractClass::COMStub_5(AbstractClass *this, _DWORD *a2, int a3)
{
  int Register; // edi

  Register = BuildingClass::SaveLoad_Register((ObjectClass *)this); /*0x5439a1*/
  if ( Register >= 0 ) /*0x5439a5*/
  {
    if ( a2 ) /*0x5439a9*/
    {
      ObjectClass::Init((ObjectClass *)a2, (int)&a3); /*0x5439b2*/
      *a2 = &IsometricTileClass::`vftable'; /*0x5439b7*/
      a2[1] = &IsometricTileClass::`vftable'; /*0x5439bd*/
      a2[2] = &IsometricTileClass::`vftable'; /*0x5439c4*/
      a2[3] = &IsometricTileClass::`vftable'; /*0x5439cb*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a2 + 43); /*0x5439de*/
  }
  return Register; /*0x5439e5*/
}



// ==== 0x005439F0  AbstractClass::COMStub_6  this=IsometricTileClass  sig=csp ====
int __stdcall AbstractClass::COMStub_6(AbstractClass *this, int *a2, int a3)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((int *)this, a2, a3); /*0x5439ff*/
  if ( result >= 0 ) /*0x543a06*/
    return 0; /*0x543a08*/
  return result; /*0x543a0a*/
}



// ==== 0x00543A10  AbstractClass::COMStub_54  this=IsometricTileClass  sig=csp ====
int __thiscall AbstractClass::COMStub_54(AbstractClass *this, int a2, int a3)
{
  void (__thiscall **ptr_0)(AbstractClass *, int); // eax

  ptr_0 = (void (__thiscall **)(AbstractClass *, int))this->ptr_0; /*0x543a17*/
  *((_BYTE *)this + 129) = 0; /*0x543a1c*/
  ptr_0[109](this, a2); /*0x543a23*/
  return (*((int (__thiscall **)(AbstractClass *, int))this->ptr_0 + 73))(this, 1); /*0x543a35*/
}



// ==== 0x00543A40  AbstractClass::COMStub_53  this=IsometricTileClass  sig=csp ====
char __thiscall AbstractClass::COMStub_53(AbstractClass *this)
{
  if ( !byte_A8E9A0 || *((_BYTE *)this + 129) ) /*0x543a4c*/
    return 0; /*0x543a88*/
  (*((void (__thiscall **)(AbstractClass *))this->ptr_0 + 84))(this); /*0x543a58*/
  (*((void (__thiscall **)(AbstractClass *, int))this->ptr_0 + 55))(this, 1); /*0x543a64*/
  (*((void (__thiscall **)(AbstractClass *, _DWORD))this->ptr_0 + 73))(this, 0); /*0x543a70*/
  *((_BYTE *)this + 129) = 1; /*0x543a76*/
  *((_BYTE *)this + 128) = 0; /*0x543a7d*/
  return 1; /*0x543a86*/
}



// ==== 0x00543A90  AbstractClass::COMStub_Ret176_12  this=IsometricTileClass  sig=csp ====
int AbstractClass::COMStub_Ret176_12(AbstractClass *this)
{
  return 176; /*0x543a95*/
}



// ==== 0x00543AA0  AbstractClass::COMStub_Ret17_11  this=IsometricTileClass  sig=csp ====
int AbstractClass::COMStub_Ret17_11(AbstractClass *this)
{
  return 17; /*0x543aa5*/
}



// ==== 0x00543AB0  IsometricTileClass::nullsub_0  this=IsometricTileClass  sig=csp ====
int __stdcall nullsub_0(IsometricTileClass *this, _DWORD *a2)
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
int __thiscall nullsub_0_0(IsometricTileClass *this)
{
  return *((_DWORD *)this + 43); /*0x543af6*/
}



// ==== 0x00543B00  IsometricTileClass::nullsub_154  this=IsometricTileClass  sig=csp ====
void __stdcall nullsub_154(IsometricTileClass *this, int a2)
{
  ; /*0x543b00*/
}



// ==== 0x00543B10  AbstractClass::CreateInstance  this=IsometricTileClass  sig=csp ====
void **__thiscall AbstractClass::CreateInstance(AbstractClass *this, char a2)
{
  int v3; // eax
  int v4; // eax
  AbstractClass *v6; // [esp+Ch] [ebp-4h] BYREF

  this->ptr_0 = &IsometricTileClass::`vftable'; /*0x543b16*/
  this->ptr_4 = &IsometricTileClass::`vftable'; /*0x543b1c*/
  this->ptr_8 = &IsometricTileClass::`vftable'; /*0x543b23*/
  this->ptr_C = &IsometricTileClass::`vftable'; /*0x543b2a*/
  AbstractClass::AnnounceExpiredPointer(&this->ptr_0, 1); /*0x543b31*/
  if ( byte_A8E9A0 && !*((_BYTE *)this + 129) ) /*0x543b3f*/
  {
    (*((void (__thiscall **)(AbstractClass *))this->ptr_0 + 84))(this); /*0x543b4d*/
    (*((void (__thiscall **)(AbstractClass *, int))this->ptr_0 + 55))(this, 1); /*0x543b59*/
    (*((void (__thiscall **)(AbstractClass *, _DWORD))this->ptr_0 + 73))(this, 0); /*0x543b65*/
    *((_BYTE *)this + 129) = 1; /*0x543b6b*/
    *((_BYTE *)this + 128) = 0; /*0x543b72*/
  }
  *((_DWORD *)this + 43) = 0; /*0x543b7d*/
  v6 = this; /*0x543b93*/
  v3 = (*(int (__thiscall **)(char *, AbstractClass **))(*(_DWORD *)&stru_87F5F0.__pad_58[264] + 16))( /*0x543b97*/
         &stru_87F5F0.__pad_58[264],
         &v6);
  if ( v3 != -1 && v3 < *(int *)&stru_87F5F0.__pad_58[280] ) /*0x543ba7*/
  {
    --*(_DWORD *)&stru_87F5F0.__pad_58[280]; /*0x543bac*/
    for ( ; /*0x543bb2*/
          v3 < *(int *)&stru_87F5F0.__pad_58[280];
          *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[268] + 4 * v3 - 4) = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[268]
                                                                                      + 4 * v3) )
    {
      ++v3; /*0x543bba*/
    }
  }
  v6 = this; /*0x543bdc*/
  v4 = (*(int (__thiscall **)(int *, AbstractClass **))(g_BuildingLoadQueue_Array.LightVisibility + 16))( /*0x543be0*/
         &g_BuildingLoadQueue_Array.LightVisibility,
         &v6);
  if ( v4 != -1 && v4 < g_BuildingLoadQueue_Array.LightBlueTint ) /*0x543bf0*/
  {
    --g_BuildingLoadQueue_Array.LightBlueTint; /*0x543bf5*/
    for ( ; /*0x543bfb*/
          v4 < g_BuildingLoadQueue_Array.LightBlueTint;
          *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v4 - 4) = *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity
                                                                                         + 4 * v4) )
    {
      ++v4; /*0x543c03*/
    }
  }
  ObjectClass::Dtor((ObjectClass *)this); /*0x543c17*/
  if ( (a2 & 1) != 0 ) /*0x543c21*/
    __3_YAXPAX_Z(this); /*0x543c24*/
  return &this->ptr_0; /*0x543c2e*/
}



// ==== 0x00543C40  sub_543C40  this=-  sig=ida-proto ====
int sub_543C40()
{
  dword_AA1040 = 0; /*0x543c42*/
  dword_AA1044 = 0; /*0x543c47*/
  dword_AA1048 = 0; /*0x543c4c*/
  dword_AA104C = 0; /*0x543c51*/
  return 0; /*0x543c56*/
}



// ==== 0x00543C60  sub_543C60  this=-  sig=ida-proto ====
void sub_543C60()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x543c6c*/
  dbl_AA1070 = Math::Sqrt(v0 + v0); /*0x543c7e*/
}



// ==== 0x00543C90  sub_543C90  this=-  sig=ida-proto ====
void sub_543C90()
{
  dbl_ABC2C0 = dbl_AA1070 / 60.0; /*0x543c9c*/
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
  dbl_AA1128 = 0.0174532925199433 * 60.0; /*0x543cfc*/
}



// ==== 0x00543D10  sub_543D10  this=-  sig=ida-proto ====
void sub_543D10()
{
  dbl_AA0E30 = 0.0174532925199433 * 90.0; /*0x543d1c*/
}



// ==== 0x00543D30  sub_543D30  this=-  sig=ida-proto ====
__int64 sub_543D30()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_AA0E30 - dbl_AA1128); /*0x543d42*/
  result = Math::RoundToInt(v0 * dbl_AA1070 * 0.5); /*0x543d56*/
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
  dbl_ABB118 = Math::ArcTan((double)(2 * dword_ABC550) / dbl_AA1070); /*0x543dc2*/
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
  dword_AA105C[0] = 0; /*0x543e02*/
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

  result = &unk_ABBED2; /*0x543e50*/
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
  dword_AA107C = 0; /*0x543e77*/
  dword_AA1080 = 0; /*0x543e7c*/
  byte_AA1084 = 1; /*0x543e81*/
  byte_AA1085 = 0; /*0x543e88*/
  dword_AA1078 = (int)&DynamicVectorClass<IsometricTileTypeClass::TileInsertType *>::`vftable'; /*0x543e8d*/
  dword_AA108C = 10; /*0x543e97*/
  dword_AA1088 = 0; /*0x543ea1*/
  return atexit(sub_543EB0); /*0x543eac*/
}



// ==== 0x00543EB0  sub_543EB0  this=-  sig=ida-proto ====
void __cdecl sub_543EB0()
{
  if ( (byte_AA0E2C & 1) == 0 ) /*0x543eba*/
  {
    dword_AA1078 = (int)&VectorClass<IsometricTileTypeClass::TileInsertType *>::`vftable'; /*0x543ebe*/
    byte_AA0E2C |= 1u; /*0x543ed1*/
    if ( dword_AA107C ) /*0x543ed7*/
    {
      if ( byte_AA1085 ) /*0x543ee1*/
      {
        __3_YAXPAX_Z(dword_AA107C); /*0x543ee4*/
        dword_AA107C = 0; /*0x543eec*/
      }
    }
    byte_AA1085 = 0; /*0x543ef6*/
    dword_AA1080 = 0; /*0x543efd*/
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



// ==== 0x005447C0  TerrainTypeClass::Construct  this=TerrainTypeClass  sig=csp ====
_DWORD *__thiscall TerrainTypeClass::Construct(
        TerrainTypeClass *this,
        int a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        char *Source,
        char a6)
{
  int v7; // eax
  int v8; // eax
  char Destination[48]; // [esp+10h] [ebp-34h] BYREF
  char v11; // [esp+40h] [ebp-4h]

  ObjectTypeClass::ConstructFull((int *)this, Source); /*0x5447ce*/
  this->ArrayIndex = a2; /*0x5447d9*/
  this->Foundation = 0xFFFF; /*0x5447e4*/
  *(_DWORD *)this->RadarColor = 0xFFFF; /*0x5447ea*/
  this->AnimationRate = 0; /*0x5447f0*/
  this->TemperateOccupationBits = 0; /*0x5447f8*/
  this->SnowOccupationBits = 0; /*0x5447fe*/
  this->WaterBound = 1; /*0x544804*/
  this->SpawnsTiberium = 0; /*0x54480b*/
  LODWORD(this->AnimationProbability) = &DynamicVectorClass<unsigned short *>::`vftable'; /*0x544811*/
  this->FoundationData = (CellStruct *)10; /*0x54481b*/
  *(_DWORD *)&this->IsVeinhole = 0; /*0x544825*/
  *((_DWORD *)this + 179) = 0; /*0x544830*/
  this->MainVoxel = -1; /*0x544836*/
  *((_DWORD *)this + 177) = -1; /*0x54483c*/
  *((_DWORD *)this + 178) = -1; /*0x544842*/
  this->TurretVoxel = 0; /*0x544848*/
  *((_DWORD *)this + 181) = -1; /*0x544852*/
  *((_DWORD *)this + 175) = 0; /*0x544868*/
  *((_DWORD *)this + 182) = 0; /*0x54486e*/
  *((_DWORD *)this + 183) = a3; /*0x544874*/
  this->BarrelVoxel = 0; /*0x54487a*/
  *((_BYTE *)this + 737) = 0; /*0x544880*/
  *((_BYTE *)this + 738) = 1; /*0x544886*/
  *((_BYTE *)this + 739) = 0; /*0x54488d*/
  this->q0B9 = 0; /*0x544893*/
  *((_DWORD *)this + 186) = 0; /*0x544899*/
  *((_DWORD *)this + 187) = a4; /*0x54489f*/
  this->ChargerTurrets = 1; /*0x5448a5*/
  *((_BYTE *)this + 756) = 0; /*0x5448af*/
  *((_BYTE *)this + 773) = 1; /*0x5448b5*/
  *((_BYTE *)this + 774) = 0; /*0x5448bc*/
  *((_DWORD *)this + 194) = 0; /*0x5448c2*/
  this->ObjectTypeClass = &IsometricTileTypeClass::`vftable'; /*0x5448c8*/
  this->? = &IsometricTileTypeClass::`vftable'; /*0x5448cf*/
  this->? = &IsometricTileTypeClass::`vftable'; /*0x5448d6*/
  this->? = &IsometricTileTypeClass::`vftable'; /*0x5448dd*/
  if ( g_BuildingLoadQueue_Array.LightBlueTint < g_BuildingLoadQueue_Array.LightRedTint /*0x544917*/
    || (BYTE1(g_BuildingLoadQueue_Array.LightGreenTint) || !g_BuildingLoadQueue_Array.LightRedTint)
    && g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.LightVisibility + 8))(
         &g_BuildingLoadQueue_Array.LightVisibility,
         g_BuildingLoadQueue_Array.LightRedTint + g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0],
         0) )
  {
    v7 = g_BuildingLoadQueue_Array.LightBlueTint++; /*0x544924*/
    *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v7) = this; /*0x544933*/
  }
  if ( !a6 /*0x544970*/
    && (*(int *)&stru_A8EB00.?[340] < *(int *)&stru_A8EB00.?[332]
     || (stru_A8EB00.?[337] || !*(_DWORD *)&stru_A8EB00.?[332])
     && *(int *)&stru_A8EB00.?[344] > 0
     && (*(unsigned __int8 (__thiscall **)(_BYTE *, int, _DWORD))(*(_DWORD *)&stru_A8EB00.?[324] + 8))(
          &stru_A8EB00.?[324],
          *(_DWORD *)&stru_A8EB00.?[332] + *(_DWORD *)&stru_A8EB00.?[344],
          0)) )
  {
    v8 = (*(_DWORD *)&stru_A8EB00.?[340])++; /*0x54497d*/
    *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[328] + 4 * v8) = this; /*0x54498c*/
  }
  if ( Source ) /*0x544991*/
  {
    strncpy(Destination, Source, 0x30u); /*0x5449a1*/
    v11 = 0; /*0x5449a9*/
  }
  else
  {
    Destination[0] = 0; /*0x544993*/
  }
  if ( Destination != this->? ) /*0x5449b6*/
  {
    qmemcpy(this->?, Destination, 0x30u); /*0x5449c1*/
    this->?[48] = v11; /*0x5449c3*/
  }
  *((_BYTE *)this + 757) = 0; /*0x5449c5*/
  this->? = 1; /*0x5449cb*/
  this->? = 0; /*0x5449d2*/
  this->? = 0; /*0x5449d8*/
  this->? = 1; /*0x5449de*/
  this->? = 1; /*0x5449e5*/
  this->? = 0; /*0x5449ec*/
  return &this->ObjectTypeClass; /*0x5449c4*/
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
  v3 = (*(int (__thiscall **)(int *, int *))(dword_A8ED28 + 16))(&dword_A8ED28, &v11); /*0x544ac4*/
  if ( v3 != -1 && v3 < dword_A8ED38 && v3 < --dword_A8ED38 ) /*0x544adf*/
  {
    do /*0x544af7*/
    {
      ++v3; /*0x544ae7*/
      *((_DWORD *)dword_A8ED2C + v3 - 1) = *((_DWORD *)dword_A8ED2C + v3); /*0x544aeb*/
    }
    while ( v3 < dword_A8ED38 ); /*0x544af7*/
  }
  v11 = this; /*0x544b09*/
  v4 = (*(int (__thiscall **)(int *, int *))(dword_B0F670 + 16))(&dword_B0F670, &v11); /*0x544b0d*/
  if ( v4 != -1 && v4 < dword_B0F680 && v4 < --dword_B0F680 ) /*0x544b28*/
  {
    do /*0x544b40*/
    {
      ++v4; /*0x544b30*/
      *((_DWORD *)dword_B0F674 + v4 - 1) = *((_DWORD *)dword_B0F674 + v4); /*0x544b34*/
    }
    while ( v4 < dword_B0F680 ); /*0x544b40*/
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
int __thiscall House::LookupObject(House *this, int a2)
{
  _DWORD *v2; // eax
  int v3; // ecx

  v2 = (_DWORD *)(*(int (__thiscall **)(House *))(*(_DWORD *)this->__pad_0 + 156))(this); /*0x544be2*/
  if ( v2 && (v3 = v2[a2 % (*v2 * v2[1]) + 4]) != 0 ) /*0x544c03*/
    return dword_8288E4[*(char *)(v3 + 41)]; /*0x544c09*/
  else
    return 0; /*0x544c13*/
}



// ==== 0x00544C20  House::LoadMapFileData  this=House  sig=csp ====
bool __thiscall House::LoadMapFileData(House *this, int a2, char a3)
{
  _DWORD *v4; // eax

  if ( a3 && !*(_DWORD *)&this->__pad_7C[40] && this->__pad_2B0[68] ) /*0x544c35*/
    MapClass::LoadFileData((MapClass *)this); /*0x544c3f*/
  v4 = (_DWORD *)(*(int (__thiscall **)(House *))(*(_DWORD *)this->__pad_0 + 156))(this); /*0x544c48*/
  return v4 && a2 < *v4 * v4[1] && v4[a2 + 4]; /*0x544c50*/
}



// ==== 0x00544C80  CellClass::EnsureFileLoaded  this=CellClass  sig=csp ====
BOOL __thiscall CellClass::EnsureFileLoaded(CellClass *this)
{
  if ( !this->sensorsOfHouses[10] && *((_BYTE *)this + 756) ) /*0x544c8d*/
    MapClass::LoadFileData((MapClass *)this); /*0x544c97*/
  return this->sensorsOfHouses[10] != 0; /*0x544ca9*/
}



// ==== 0x00544CB0  IsometricTileTypeClass::LoadTileFileData  this=MapClass  sig=csp ====
int __thiscall IsometricTileTypeClass::LoadTileFileData(Class_7ECCDC *this)
{
  int result; // eax

  result = this->q0A4; /*0x544cb3*/
  if ( !result ) /*0x544cbb*/
  {
    if ( this->u32_2F4 ) /*0x544cbd*/
    {
      MapClass::LoadFileData((MapClass *)this); /*0x544cc9*/
      return this->q0A4; /*0x544cce*/
    }
  }
  return result; /*0x544cd4*/
}



// ==== 0x00544CE0  ObjectClass::Entity_Read  this=ObjectClass  sig=csp ====
int __thiscall Entity_Read(ObjectClass *this)
{
  int v2; // esi

  if ( !this ) /*0x544ce6*/
    return 0xFFFF; /*0x544ce6*/
  v2 = 0; /*0x544ced*/
  if ( *(int *)&stru_A8EB00.?[340] <= 0 ) /*0x544cf1*/
    return 0xFFFF; /*0x544d16*/
  while ( _strcmpi((char *)(*(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[328] + 4 * v2) + 36), (char *)this) ) /*0x544d0a*/
  {
    if ( ++v2 >= *(int *)&stru_A8EB00.?[340] ) /*0x544d14*/
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
_DWORD *__thiscall Map_Get(TechnoClass *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *result; // eax

  v2 = this->diskLaserTimer[1]; /*0x544e05*/
  v3 = a2; /*0x544e0c*/
  if ( a2 > v2 - 1 ) /*0x544e13*/
    v3 = a2 % v2; /*0x544e16*/
  for ( result = &this->ptr_0; v3; --v3 ) /*0x544e1e*/
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
    if ( dword_AA1088 > 0 ) /*0x544e49*/
    {
      v3 = dword_AA107C; /*0x544e4b*/
      do /*0x544e62*/
      {
        v4 = (_DWORD *)*v3; /*0x544e51*/
        if ( *(_DWORD *)*v3 > a1 ) /*0x544e55*/
          break; /*0x544e55*/
        ++v3; /*0x544e5a*/
        result += v4[1]; /*0x544e5d*/
        ++v2; /*0x544e5f*/
      }
      while ( v2 < dword_AA1088 ); /*0x544e62*/
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

  if ( !g_DSurface_Primary ) /*0x544e86*/
    return 0; /*0x544e8b*/
  if ( a1 == 1000 && a2 == 1000 && a3 == 1000 && dword_87F6A8 ) /*0x544ead*/
    return *(_DWORD *)dword_87F69C; /*0x544eb7*/
  QuantizeColorRGB(&a3); /*0x544ecd*/
  v4 = 1; /*0x544ee4*/
  if ( dword_87F6A8 <= 1 ) /*0x544eeb*/
  {
LABEL_14:
    v6 = 53; /*0x544f1c*/
    if ( a3 + a2 + a1 < 2000 ) /*0x544f2b*/
      v6 = 27; /*0x544f2d*/
    if ( __2_YAPAXI_Z(0x1B4u) ) /*0x544f37*/
      v7 = LightConvertClass::Constructor( /*0x544f79*/
             &unk_ABBED0,
             &FileSystem_TEMPERAT_PAL,
             g_DSurface_Primary,
             a1,
             a2,
             a3,
             dword_87F6A8 != 0,
             0,
             v6);
    else
      v7 = 0; /*0x544f7d*/
    if ( dword_87F6A8 < dword_87F6A0 /*0x544fb6*/
      || (byte_87F6A5 || !dword_87F6A0)
      && dword_87F6AC > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_87F698 + 8))(
           &dword_87F698,
           dword_87F6A0 + dword_87F6AC,
           0) )
    {
      v8 = dword_87F6A8++; /*0x544fc3*/
      *((_DWORD *)dword_87F69C + v8) = v7; /*0x544fd2*/
    }
    return v7; /*0x544fd5*/
  }
  else
  {
    v5 = (char *)dword_87F69C + 4; /*0x544ef3*/
    while ( 1 ) /*0x544ef6*/
    {
      result = *(_DWORD *)v5; /*0x544ef6*/
      if ( *(_DWORD *)(*(_DWORD *)v5 + 408) == a1 && *(_DWORD *)(result + 412) == a2 && *(_DWORD *)(result + 416) == a3 ) /*0x544f0e*/
        break; /*0x544f0e*/
      ++v4; /*0x544f14*/
      v5 += 4; /*0x544f15*/
      if ( v4 >= dword_87F6A8 ) /*0x544f1a*/
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

  v0 = dword_87F6A8; /*0x545000*/
  if ( dword_87F6A8 > 0 ) /*0x545009*/
  {
    v1 = dword_87F69C; /*0x54500b*/
    do /*0x545054*/
    {
      if ( *v1 ) /*0x545011*/
      {
        (**(void (__thiscall ***)(_DWORD, int))*v1)(*v1, 1); /*0x54501b*/
        v1 = dword_87F69C; /*0x54501d*/
        v0 = dword_87F6A8; /*0x545023*/
      }
      if ( v0 <= 0 ) /*0x54502b*/
        break; /*0x54502b*/
      v2 = 0; /*0x54502e*/
      dword_87F6A8 = v0 - 1; /*0x545032*/
      if ( v0 - 1 <= 0 ) /*0x545038*/
        break; /*0x545038*/
      do /*0x545050*/
      {
        v1[v2] = v1[v2 + 1]; /*0x54503e*/
        v0 = dword_87F6A8; /*0x545041*/
        v1 = dword_87F69C; /*0x545047*/
        ++v2; /*0x54504d*/
      }
      while ( v2 < dword_87F6A8 ); /*0x545050*/
    }
    while ( dword_87F6A8 > 0 ); /*0x545054*/
  }
  v3 = __2_YAPAXI_Z(0x1B4u); /*0x54505b*/
  if ( v3 ) /*0x545065*/
    v4 = LightConvertClass::Constructor( /*0x545094*/
           (int)v3,
           (int)&unk_ABBED0,
           (int)&FileSystem_TEMPERAT_PAL,
           g_DSurface_Primary,
           1000,
           1000,
           1000,
           0,
           0,
           53);
  else
    v4 = 0; /*0x545098*/
  if ( dword_87F6A8 < dword_87F6A0 /*0x5450d0*/
    || (byte_87F6A5 || !dword_87F6A0)
    && dword_87F6AC > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_87F698 + 8))(
         &dword_87F698,
         dword_87F6A0 + dword_87F6AC,
         0) )
  {
    v5 = dword_87F6A8++; /*0x5450dd*/
    *((_DWORD *)dword_87F69C + v5) = v4; /*0x5450ec*/
  }
  dword_ABDC84 = 0; /*0x54510c*/
  TacticalClass::SetView((int)unk_ABDC50, 0, 0x10000, 0, 1000, 1000, 1000); /*0x545116*/
  LayerClass::CellIteratorReset(&dword_87F7E8); /*0x545120*/
  for ( result = LayerClass::CellIteratorNext(&dword_87F7E8); result; result = LayerClass::CellIteratorNext(&dword_87F7E8) ) /*0x545132*/
    *(_DWORD *)(result + 52) = 0; /*0x545139*/
  return result; /*0x545131*/
}



// ==== 0x00545150  LoadTerrainTypeClassTheatre  this=-  sig=ida-proto ====
char *__fastcall TerrainTypeClass_LoadTheatre(int a1, char a2)
{
  int v3; // ebp
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
  _BYTE *v18; // eax
  int v19; // ecx
  int v20; // edi
  int v21; // ebx
  int v22; // eax
  int v23; // ecx
  signed int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // ebx
  _DWORD *v28; // eax
  int v29; // edx
  int v30; // eax
  int v31; // eax
  char v32; // al
  int v33; // ecx
  int v34; // eax
  int v35; // ebx
  int v36; // edx
  int v37; // ecx
  int v38; // ecx
  int v39; // edx
  int v40; // edx
  int v41; // eax
  int v42; // esi
  unsigned __int8 *v43; // ebx
  int v44; // edx
  int v45; // ecx
  int v46; // edx
  unsigned int *v47; // ecx
  unsigned int v48; // eax
  _DWORD *v49;... [37464 chars total]



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
    LayerClass::CellIteratorReset(&dword_87F7E8); /*0x546dd3*/
    for ( i = LayerClass::CellIteratorNext(&dword_87F7E8); i; i = LayerClass::CellIteratorNext(&dword_87F7E8) ) /*0x546de6*/
    {
      v4 = *(_DWORD *)(i + 56); /*0x546dec*/
      inited = 0; /*0x546def*/
      if ( v4 == 0xFFFF || v4 >= dword_A8ED38 ) /*0x546dff*/
      {
        v6 = (_DWORD *)*((_DWORD *)dword_A8ED2C + dword_AA10B0); /*0x546e6f*/
        inited = CellClass::InitRandomOffsets(i, dword_AA10B0, v6[188]); /*0x546e7c*/
      }
      else
      {
        v6 = (_DWORD *)*((_DWORD *)dword_A8ED2C + v4); /*0x546e07*/
        if ( (int)v6[188] > 1 ) /*0x546e11*/
        {
          LOBYTE(inited) = *(_BYTE *)(i + 282); /*0x546e13*/
          v7 = inited; /*0x546e1d*/
          v8 = (_DWORD *)(*(int (__thiscall **)(_DWORD))(*v6 + 156))(*((_DWORD *)dword_A8ED2C + v4)); /*0x546e1f*/
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
  if ( dword_A8ED38 > 0 ) /*0x546ef2*/
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
      v17 = *((_DWORD *)dword_A8ED2C + v15); /*0x546f47*/
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
      if ( v15 >= dword_A8ED38 ) /*0x546ff2*/
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
int __thiscall MapClass::LoadFileData(MapClass *this)
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
  CCFileClass v12; // [esp+Ch] [ebp-6Ch] BYREF
  int v13[3]; // [esp+64h] [ebp-14h] BYREF
  int v14; // [esp+70h] [ebp-8h]

  CCFileClass::Construct(&v12, &this->__pad_298[93]); /*0x547033*/
  Size = CCFileClass::GetSize(&v12); /*0x547041*/
  if ( *(_DWORD *)&this->__pad_5C[72] ) /*0x547043*/
    __3_YAXPAX_Z(*(void **)&this->__pad_5C[72]); /*0x54704e*/
  v3 = (void *)__2_YAPAXI_Z(Size); /*0x547057*/
  *(_DWORD *)&this->__pad_5C[72] = v3; /*0x547063*/
  CCFileClass::Read(&v12, v3, Size); /*0x54706b*/
  v4 = *(unsigned __int8 **)&this->__pad_5C[72]; /*0x547070*/
  this->__pad_5C[76] = 1; /*0x547078*/
  v5 = 0; /*0x54707f*/
  *(_DWORD *)&this->__pad_298[76] = *v4; /*0x547083*/
  v6 = v4[4]; /*0x547091*/
  v7 = v6 * *(_DWORD *)&this->__pad_298[76]; /*0x547094*/
  *(_DWORD *)&this->__pad_298[80] = v6; /*0x547099*/
  if ( v7 > 0 ) /*0x54709f*/
  {
    v8 = (unsigned int *)(v4 + 16); /*0x5470a1*/
    do /*0x5470cb*/
    {
      v9 = *v8; /*0x5470a4*/
      if ( *v8 ) /*0x5470a4*/
      {
        v10 = *(_DWORD *)&this->__pad_5C[72]; /*0x5470aa*/
        if ( v9 < v10 ) /*0x5470b2*/
          *v8 = v10 + v9; /*0x5470b6*/
      }
      ++v5; /*0x5470be*/
      ++v8; /*0x5470c6*/
    }
    while ( v5 < *(_DWORD *)&this->__pad_298[80] * *(_DWORD *)&this->__pad_298[76] ); /*0x5470cb*/
  }
  TerrainClass::InitTheatre((TerrainClass *)this); /*0x5470cf*/
  *(_DWORD *)v12.CDFileClass = &CCFileClass::`vftable'; /*0x5470d8*/
  v14 = 0; /*0x5470e0*/
  Vector::Clear((int)v13); /*0x5470e8*/
  *(_DWORD *)v12.CDFileClass = &off_7E1668; /*0x5470f1*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v12); /*0x5470f9*/
  return Size; /*0x5470fe*/
}



// ==== 0x00547110  ResetAllTechnoField776  this=-  sig=ida-proto ====
int ResetAllTechnoField776()
{
  int result; // eax
  int i; // ecx
  int j; // eax

  result = dword_A8ED38; /*0x547110*/
  for ( i = 0; i < dword_A8ED38; ++i ) /*0x54711b*/
  {
    for ( j = *((_DWORD *)dword_A8ED2C + i); j; j = *(_DWORD *)(j + 700) ) /*0x547127*/
      *(_DWORD *)(j + 776) = 0; /*0x547129*/
    result = dword_A8ED38; /*0x547139*/
  }
  return result; /*0x547143*/
}



// ==== 0x00547150  TechnoClass::GetTileAnimationData  this=TechnoClass  sig=csp ====
char __thiscall TechnoClass::GetTileAnimationData(TechnoClass *this, int a2, _DWORD *a3, _DWORD *a4)
{
  _DWORD *v4; // eax
  int v5; // edx
  int v6; // ecx

  v4 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *))this->RadioClass + 39))(this); /*0x547152*/
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
int __thiscall HouseClass::GetCameoTypeIndex(HouseClass *this, int a2)
{
  _DWORD *v2; // eax
  int v3; // ecx

  v2 = (_DWORD *)(*((int (__thiscall **)(HouseClass *))this->AbstractClass + 39))(this); /*0x5471b2*/
  if ( v2 && (v3 = v2[a2 % (*v2 * v2[1]) + 4]) != 0 ) /*0x5471d3*/
    return *(char *)(v3 + 42); /*0x5471d5*/
  else
    return 0; /*0x5471dc*/
}



// ==== 0x005471F0  CellClass::GetTerrainFlag  this=CellClass  sig=csp ====
int __thiscall CellClass::GetTerrainFlag(CellClass *this, int a2)
{
  int result; // eax
  int v3; // ecx
  int v4; // esi
  int v5; // ecx

  result = (*(int (__thiscall **)(CellClass *))(this->mapCoords[0] + 156))(this); /*0x5471f2*/
  v3 = result; /*0x5471f8*/
  if ( result ) /*0x5471fc*/
  {
    v4 = *(_DWORD *)result * *(_DWORD *)(result + 4); /*0x547202*/
    result = a2 / v4; /*0x54720a*/
    v5 = *(_DWORD *)(v3 + 4 * (a2 % v4) + 16); /*0x54720d*/
    if ( v5 ) /*0x547213*/
      return (*(_DWORD *)(v5 + 36) >> 2) & 1; /*0x54721b*/
  }
  LOBYTE(result) = 0; /*0x547221*/
  return result; /*0x54721e*/
}



// ==== 0x00547230  TacticalClass::DrawCellOverlay  this=TacticalClass  sig=csp ====
void __thiscall sub_547230(int this, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  int v10; // edx
  int v11; // esi
  int v12; // eax
  int v13; // esi
  int v14; // edx
  int v15; // ecx
  int *v16; // ecx
  unsigned int v17; // eax
  int v18; // eax

  v10 = *(_DWORD *)(this + 660); /*0x547230*/
  v11 = g_TerrainTypeTable2; /*0x547237*/
  if ( (v10 < g_TerrainTypeTable2 || v10 >= g_TerrainTypeTable2 + 10) /*0x547260*/
    && ((v11 = dword_AA1098, v10 < dword_AA1098) || v10 >= dword_AA1098 + 10)
    || v10 - v11 == -1 )
  {
    if ( *(_BYTE *)(this + 737) ) /*0x547294*/
    {
      v16 = dword_AA102C; /*0x5472a2*/
      do /*0x5472c9*/
      {
        v17 = v10 - *v16; /*0x5472ab*/
        if ( v17 < 0x28 ) /*0x5472ad*/
          break; /*0x5472ad*/
        if ( v16 == &dword_AA103C ) /*0x5472ba*/
          return; /*0x5472ba*/
        ++v16; /*0x5472c0*/
      }
      while ( (int)v16 < (int)&dword_AA1040 ); /*0x5472c9*/
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
    v12 = 4 * (v10 - v11); /*0x547266*/
    if ( a2 == dword_ABC214[v12] ) /*0x54726f*/
    {
      v13 = dword_ABC210[v12]; /*0x547275*/
      if ( v13 ) /*0x54727d*/
      {
        v14 = dword_ABC21C[v12]; /*0x547289*/
        v15 = dword_ABC218[v12] + 30; /*0x54728f*/
LABEL_17:
        a4 = DSurface_ViewBounds + v15 + a4 - a6; /*0x5472f7*/
        a5 = dword_886FA4 + v14 + 15 + a5 - a7; /*0x54732c*/
        DrawToSurfaceSHP( /*0x547362*/
          a3,
          *(_DWORD *)dword_87F69C,
          (int)lpBuffer,
          v13 - 1,
          &a4,
          &a6,
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
    dword_ABAD34 = dword_AA105C[0]; /*0x547447*/
    dword_ABAD38 = dword_AA105C[0]; /*0x54744c*/
    dword_ABAD3C = dword_AA105C[0]; /*0x547451*/
    dword_ABAD40 = dword_AA105C[0]; /*0x547456*/
    dword_ABAD44 = dword_AA105C[0]; /*0x54745b*/
    dword_ABAD4C = dword_AA105C[0]; /*0x547460*/
    dword_ABAD50 = dword_AA105C[0]; /*0x547465*/
    dword_ABAD54 = dword_AA105C[0]; /*0x54746a*/
    dword_ABAD58 = dword_AA105C[0]; /*0x54746f*/
    dword_ABAD5C = dword_AA105C[0]; /*0x547474*/
    dword_ABAD64 = dword_AA105C[0]; /*0x547479*/
    dword_ABAD68 = dword_AA105C[0]; /*0x54747e*/
    dword_ABAD6C = dword_AA105C[0]; /*0x547483*/
    dword_ABAD70 = dword_AA105C[0]; /*0x547488*/
    dword_ABAD74 = dword_AA105C[0]; /*0x54748d*/
    dword_ABAD7C = dword_AA105C[0]; /*0x547492*/
    dword_ABAD80 = dword_AA105C[0]; /*0x547497*/
    dword_ABAD84 = dword_AA105C[0]; /*0x54749c*/
    dword_ABAD88 = dword_AA105C[0]; /*0x5474a1*/
    dword_ABAD8C = dword_AA105C[0]; /*0x5474a6*/
    dword_ABAD94 = dword_AA105C[0]; /*0x5474ab*/
    dword_ABAD98 = dword_AA105C[0]; /*0x5474b0*/
    dword_ABAD9C = dword_AA105C[0]; /*0x5474b5*/
    dword_ABADA0 = dword_AA105C[0]; /*0x5474ba*/
    dword_ABADA4 = dword_AA105C[0]; /*0x5474bf*/
    dword_ABADAC = dword_AA105C[0]; /*0x5474c4*/
    dword_ABADB0 = dword_AA105C[0]; /*0x5474c9*/
    dword_ABADB4 = dword_AA105C[0]; /*0x5474ce*/
    dword_ABADB8 = dword_AA105C[0]; /*0x5474d3*/
    dword_ABADBC = dword_AA105C[0]; /*0x5474d8*/
    dword_ABADC4 = dword_AA105C[0]; /*0x5474dd*/
    dword_ABADC8 = dword_AA105C[0]; /*0x5474e2*/
    dword_ABADCC = dword_AA105C[0]; /*0x5474e7*/
    dword_ABADD0 = dword_AA105C[0]; /*0x5474ec*/
    dword_ABADD4 = dword_AA105C[0]; /*0x5474f1*/
    dword_ABADDC = dword_AA105C[0]; /*0x5474f6*/
    dword_ABADE0 = dword_AA105C[0]; /*0x5474fb*/
    dword_ABADE4 = dword_AA105C[0]; /*0x547500*/
    dword_ABADE8 = dword_AA105C[0]; /*0x547505*/
    dword_ABADEC = dword_AA105C[0]; /*0x54750a*/
    dword_ABADF0 = 2147450879; /*0x54750f*/
    dword_ABADF4 = dword_AA105C[0]; /*0x547515*/
    dword_ABADF8 = dword_AA105C[0]; /*0x54751a*/
    dword_ABAE08 = 2147450879; /*0x547532*/
    dword_ABAE20 = 2147450879; /*0x547546*/
    dword_ABAE38 = 2147450879; /*0x54755a*/
    dword_ABAE50 = 2147450879; /*0x54756e*/
    dword_ABAE68 = 2147450879; /*0x547582*/
    dword_ABAE80 = 2147450879; /*0x547596*/
    dword_ABAE98 = 2147450879; /*0x5475aa*/
    dword_ABAEB0 = 2147450879; /*0x5475be*/
    dword_ABADFC = dword_AA105C[0]; /*0x5475cd*/
    dword_ABAE00 = dword_AA105C[0]; /*0x5475d2*/
    dword_ABAE04 = dword_AA105C[0]; /*0x5475d7*/
    dword_ABAE0C = dword_AA105C[0]; /*0x5475dc*/
    dword_ABAE10 = dword_AA105C[0]; /*0x5475e1*/
    dword_ABAE14 = dword_AA105C[0]; /*0x5475e6*/
    dword_ABAE18 = dword_AA105C[0]; /*0x5475eb*/
    dword_ABAE1C = dword_AA105C[0]; /*0x5475f0*/
    dword_ABAE24 = dword_AA105C[0]; /*0x5475f5*/
    dword_ABAE28 = dword_AA105C[0]; /*0x5475fa*/
    dword_ABAE2C = dword_AA105C[0]; /*0x5475ff*/
    dword_ABAE30 = dword_AA105C[0]; /*0x547604*/
    dword_ABAE34 = dword_AA105C[0]; /*0x547609*/
    dword_ABAE3C = dword_AA105C[0]; /*0x54760e*/
    dword_ABAE40 = dword_AA105C[0]; /*0x547613*/
    dword_ABAE44 = dword_AA105C[0]; /*0x547618*/
    dword_ABAE48 = dword_AA105C[0]; /*0x54761d*/
    dword_ABAE4C = dword_AA105C[0]; /*0x547622*/
    dword_ABAE54 = dword_AA105C[0]; /*0x547627*/
    dword_ABAE58 = dword_AA105C[0]; /*0x54762c*/
    dword_ABAE5C = dword_AA105C[0]; /*0x547631*/
    dword_ABAE60 = dword_AA105C[0]; /*0x547636*/
    dword_ABAE64 = dword_AA105C[0]; /*0x54763b*/
    dword_ABAE6C = dword_AA105C[0]; /*0x547640*/
    dword_ABAE70 = dword_AA105C[0]; /*0x547645*/
    dword_ABAE74 = dword_AA105C[0]; /*0x54764a*/
    dword_ABAE78 = dword_AA105C[0]; /*0x54764f*/
    dword_ABAE7C = dword_AA105C[0]; /*0x547654*/
    dword_ABAE84 = dword_AA105C[0]; /*0x547659*/
    dword_ABAE88 = dword_AA105C[0]; /*0x54765e*/
    dword_ABAE8C = dword_AA105C[0]; /*0x547663*/
    dword_ABAE90 = dword_AA105C[0]; /*0x547668*/
    dword_ABAE94 = dword_AA105C[0]; /*0x54766d*/
    dword_ABAE9C = dword_AA105C[0]; /*0x547672*/
    dword_ABAEA0 = dword_AA105C[0]; /*0x547677*/
    dword_ABAEA4 = dword_AA105C[0]; /*0x54767c*/
    dword_ABAEA8 = dword_AA105C[0]; /*0x547681*/
    dword_ABAEAC = dword_AA105C[0]; /*0x547686*/
    dword_ABAEB4 = dword_AA105C[0]; /*0x54768b*/
    dword_ABAEB8 = dword_AA105C[0]; /*0x547690*/
    dword_ABAEBC = dword_AA105C[0]; /*0x547695*/
    dword_ABAEC0 = dword_AA105C[0]; /*0x54769a*/
    dword_ABAEC4 = dword_AA105C[0]; /*0x54769f*/
    dword_ABAEC8 = 2147450879; /*0x5476a4*/
    dword_ABAECC = dword_AA105C[0]; /*0x5476aa*/
    dword_ABAED0 = dword_AA105C[0]; /*0x5476af*/
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
    dword_ABAED4 = dword_AA105C[0]; /*0x5477d3*/
    dword_ABAED8 = dword_AA105C[0]; /*0x5477d8*/
    dword_ABAEDC = dword_AA105C[0]; /*0x5477dd*/
    dword_ABAEE4 = dword_AA105C[0]; /*0x5477e2*/
    dword_ABAEE8 = dword_AA105C[0]; /*0x5477e7*/
    dword_ABAEEC = dword_AA105C[0]; /*0x5477ec*/
    dword_ABAEF0 = dword_AA105C[0]; /*0x5477f1*/
    dword_ABAEF4 = dword_AA105C[0]; /*0x5477f6*/
    dword_ABAEFC = dword_AA105C[0]; /*0x5477fb*/
    dword_ABAF00 = dword_AA105C[0]; /*0x547800*/
    dword_ABAF04 = dword_AA105C[0]; /*0x547805*/
    dword_ABAF08 = dword_AA105C[0]; /*0x54780a*/
    dword_ABAF0C = dword_AA105C[0]; /*0x54780f*/
    dword_ABAF20 = dword_AA105C[0]; /*0x547814*/
    dword_ABAF24 = dword_AA105C[0]; /*0x547819*/
    dword_ABAF38 = dword_AA105C[0]; /*0x54781e*/
    dword_ABAF3C = dword_AA105C[0]; /*0x547823*/
    dword_ABAF4C = dword_AA105C[0]; /*0x547828*/
    dword_ABAF50 = dword_AA105C[0]; /*0x54782d*/
    dword_ABAF54 = dword_AA105C[0]; /*0x547832*/
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
    dword_ABAF64 = dword_AA105C[0]; /*0x5479a1*/
    dword_ABAF68 = dword_AA105C[0]; /*0x5479a6*/
    dword_ABAF6C = dword_AA105C[0]; /*0x5479ab*/
    dword_ABAF7C = dword_AA105C[0]; /*0x5479b0*/
    dword_ABAF80 = dword_AA105C[0]; /*0x5479b5*/
    dword_ABAF84 = dword_AA105C[0]; /*0x5479ba*/
    dword_ABAF90 = dword_AA105C[0]; /*0x5479bf*/
    dword_ABAF94 = dword_AA105C[0]; /*0x5479c4*/
    dword_ABAF98 = dword_AA105C[0]; /*0x5479c9*/
    dword_ABAF9C = dword_AA105C[0]; /*0x5479ce*/
    dword_ABAFB4 = dword_AA105C[0]; /*0x5479d3*/
    dword_ABAFCC = dword_AA105C[0]; /*0x5479d8*/
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
    dword_ABAFE0 = dword_AA105C[0]; /*0x547afd*/
    dword_ABAFE4 = dword_AA105C[0]; /*0x547b02*/
    dword_ABAFEC = -196608; /*0x547b07*/
    dword_ABAFF8 = dword_AA105C[0]; /*0x547b0d*/
    dword_ABAFFC = dword_AA105C[0]; /*0x547b12*/
    dword_ABB008 = dword_AA105C[0]; /*0x547b17*/
    dword_ABB00C = dword_AA105C[0]; /*0x547b1c*/
    dword_ABB010 = dword_AA105C[0]; /*0x547b21*/
    dword_ABB014 = dword_AA105C[0]; /*0x547b26*/
    dword_ABB020 = dword_AA105C[0]; /*0x547b2b*/
    dword_ABB024 = dword_AA105C[0]; /*0x547b30*/
    dword_ABB028 = dword_AA105C[0]; /*0x547b35*/
    dword_ABB02C = dword_AA105C[0]; /*0x547b3a*/
    dword_ABB030 = 2147450879; /*0x547b3f*/
    dword_ABB038 = dword_AA105C[0]; /*0x547b45*/
    dword_ABB03C = dword_AA105C[0]; /*0x547b4a*/
    dword_ABB040 = dword_AA105C[0]; /*0x547b4f*/
    dword_ABB044 = dword_AA105C[0]; /*0x547b54*/
    dword_ABB04C = dword_AA105C[0]; /*0x547b59*/
    dword_ABB050 = dword_AA105C[0]; /*0x547b5e*/
    dword_ABB054 = dword_AA105C[0]; /*0x547b63*/
    dword_ABB058 = dword_AA105C[0]; /*0x547b68*/
    dword_ABB05C = dword_AA105C[0]; /*0x547b6d*/
    dword_ABB060 = 2147450879; /*0x547b72*/
    dword_ABB078 = 2147450879; /*0x547b86*/
    dword_ABB090 = 2147450879; /*0x547b9a*/
    dword_ABB0A8 = 2147450879; /*0x547bae*/
    dword_ABB0C0 = 2147450879; /*0x547bc2*/
    dword_ABB064 = dword_AA105C[0]; /*0x547bd6*/
    dword_ABB068 = dword_AA105C[0]; /*0x547bdb*/
    dword_ABB06C = dword_AA105C[0]; /*0x547be0*/
    dword_ABB070 = dword_AA105C[0]; /*0x547be5*/
    dword_ABB074 = dword_AA105C[0]; /*0x547bea*/
    dword_ABB07C = dword_AA105C[0]; /*0x547bef*/
    dword_ABB080 = dword_AA105C[0]; /*0x547bf4*/
    dword_ABB084 = dword_AA105C[0]; /*0x547bf9*/
    dword_ABB088 = dword_AA105C[0]; /*0x547bfe*/
    dword_ABB08C = dword_AA105C[0]; /*0x547c03*/
    dword_ABB094 = dword_AA105C[0]; /*0x547c08*/
    dword_ABB098 = dword_AA105C[0]; /*0x547c0d*/
    dword_ABB09C = dword_AA105C[0]; /*0x547c12*/
    dword_ABB0A0 = dword_AA105C[0]; /*0x547c17*/
    dword_ABB0A4 = dword_AA105C[0]; /*0x547c1c*/
    dword_ABB0AC = dword_AA105C[0]; /*0x547c21*/
    dword_ABB0B0 = dword_AA105C[0]; /*0x547c26*/
    dword_ABB0B4 = dword_AA105C[0]; /*0x547c2b*/
    dword_ABB0B8 = dword_AA105C[0]; /*0x547c30*/
    dword_ABB0BC = dword_AA105C[0]; /*0x547c35*/
    dword_ABB0C4 = dword_AA105C[0]; /*0x547c3a*/
    dword_ABB0C8 = dword_AA105C[0]; /*0x547c3f*/
    dword_ABB0CC = dword_AA105C[0]; /*0x547c44*/
    dword_ABB0D0 = dword_AA105C[0]; /*0x547c49*/
    dword_ABB0D4 = dword_AA105C[0]; /*0x547c4e*/
    dword_ABB0DC = dword_AA105C[0]; /*0x547c53*/
    dword_ABB0E0 = dword_AA105C[0]; /*0x547c58*/
    dword_ABB0E4 = dword_AA105C[0]; /*0x547c5d*/
    dword_ABB0E8 = dword_AA105C[0]; /*0x547c62*/
    dword_ABB0EC = dword_AA105C[0]; /*0x547c67*/
    dword_ABB0D8 = 2147450879; /*0x547c7f*/
    dword_ABB0F0 = 2147450879; /*0x547c85*/
    atexit(nullsub_20); /*0x547c8a*/
    a1 = v5; /*0x547c8f*/
  }
  v1 = *(_DWORD *)(a1 + 660); /*0x547c98*/
  v2 = dword_AA102C; /*0x547c9e*/
  while ( 1 ) /*0x547ca7*/
  {
    v3 = v1 - *v2; /*0x547ca7*/
    if ( v3 < 0x28 ) /*0x547ca9*/
      break; /*0x547ca9*/
    if ( (int)++v2 >= (int)&dword_AA1040 ) /*0x547cb9*/
      return 0; /*0x547cb9*/
  }
  return 24 * v3 + 11250996; /*0x547cbb*/
}



// ==== 0x00547CE0  nullsub_20  this=-  sig=ida-proto ====
void __cdecl nullsub_20()
{
  ; /*0x547ce0*/
}



// ==== 0x00547CF0  TerrainClass::GenerateTexture  this=TerrainClass  sig=csp ====
void __thiscall TerrainClass::GenerateTexture(
        TerrainClass *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        char a13,
        int a14,
        char a15,
        char a16,
        char a17,
        int a18)
{
  TerrainClass *v18; // esi
  int v20; // ebp
  int v21; // ecx
  int v22; // edx
  TerrainClass *referenceCount; // ecx
  int v24; // esi
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
  int v48; // ebx
  int v49; // ecx
  int v50; // eax
  int v51;... [63802 chars total]



// ==== 0x00549830  ObjectClass::method  this=ObjectClass  sig=csp ====
char __thiscall sub_549830(ObjectClass *this, int a2, void **a3, int a4, int a5)
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
  char *v16; // eax
  char *v17; // ebp
  char *v19; // edx
  int v20; // ecx
  char v21; // bl
  char v22; // bl
  char *v23; // eax
  char *v24; // edx
  int v25; // ebx
  int v26; // esi
  int v27; // [esp+1Ch] [ebp+4h]
  char *v28; // [esp+1Ch] [ebp+4h]
  int v29; // [esp+28h] [ebp+10h]

  memset(*a3, 0, a5 * a4); /*0x549859*/
  v6 = (_DWORD *)(*((int (__thiscall **)(ObjectClass *))this->AbstractClass + 39))(this); /*0x549866*/
  v7 = v6; /*0x54986c*/
  if ( v6 ) /*0x549870*/
  {
    v27 = a2 % (*v6 * v6[1]); /*0x549883*/
    v8 = v6[v27 + 4]; /*0x549887*/
    if ( !v8 ) /*0x54988d*/
      return 0; /*0x54988d*/
    v9 = (_DWORD *)(*((int (__thiscall **)(ObjectClass *))this->AbstractClass + 39))(this); /*0x549897*/
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
    v16 = (char *)*a3; /*0x5498f3*/
    v17 = (char *)*a3 + a5 * a4; /*0x5498f5*/
    if ( (*(_BYTE *)(v8 + 36) & 1) != 0 ) /*0x5498fa*/
    {
      v16 += a4 * (*(_DWORD *)(v8 + 4) - *(_DWORD *)(v8 + 24)); /*0x549907*/
      if ( v16 >= v17 ) /*0x54990b*/
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
        if ( v16 >= v17 ) /*0x549972*/
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
        if ( ++v16 >= v17 ) /*0x54995b*/
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
      if ( v23 >= v17 ) /*0x549999*/
        return 0; /*0x5499a4*/
      v24 = (char *)(v8 + *(_DWORD *)(v8 + 8)); /*0x5499ad*/
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
          if ( v23 >= v17 ) /*0x5499e1*/
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
          if ( v23 >= v17 ) /*0x5499ca*/
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
bool __thiscall IsometricTileTypeClass::GetTerrainType(IsometricTileTypeClass *this, _WORD *a2, int a3)
{
  IsometricTileClass *v4; // eax

  v4 = (IsometricTileClass *)__2_YAPAXI_Z(0xB0u); /*0x549aa8*/
  return v4 && IsometricTileClass::IsometricTileClass(v4, *((_DWORD *)this + 165), a2); /*0x549acd*/
}



// ==== 0x00549AE0  IsometricTileTypeClass::GetHeight  this=IsometricTileTypeClass  sig=csp ====
IsometricTileClass *__thiscall IsometricTileTypeClass::GetHeight(IsometricTileTypeClass *this, int a2)
{
  IsometricTileClass *v3; // eax

  if ( !*((_DWORD *)this + 41) && *((_BYTE *)this + 756) ) /*0x549aed*/
    MapClass::LoadFileData((MapClass *)this); /*0x549af7*/
  v3 = (IsometricTileClass *)__2_YAPAXI_Z(0xB0u); /*0x549b01*/
  if ( v3 ) /*0x549b0b*/
    return IsometricTileClass::IsometricTileClass(v3, *((_DWORD *)this + 165), dword_AA105C); /*0x549b1b*/
  else
    return 0; /*0x549b24*/
}



// ==== 0x00549B30  sub_549B30  this=-  sig=ida-proto ====
int sub_549B30()
{
  lpBuffer = 0; /*0x549b32*/
  dword_AA1060 = 0; /*0x549b37*/
  dword_AA1064 = 0; /*0x549b3c*/
  dword_AA1068 = 0; /*0x549b41*/
  dword_AA106C = 0; /*0x549b46*/
  return 0; /*0x549b4b*/
}



// ==== 0x00549B50  IsometricTileTypeClass::g_var_4f9ac2  this=IsometricTileTypeClass  sig=csp ====
_DWORD *__stdcall IsometricTileTypeClass::g_var_4f9ac2(IsometricTileTypeClass *this, _DWORD *a2)
{
  *(_DWORD *)this->__pad_0 = *a2; /*0x549b5d*/
  this->IsometricTileTypeClass_field_0x04 = a2[1]; /*0x549b62*/
  this->IsometricTileTypeClass_field_0x08 = a2[2]; /*0x549b69*/
  return this->__pad_0; /*0x549b65*/
}



// ==== 0x00549B70  IsometricTileTypeClass::ProcessPower  this=IsometricTileTypeClass  sig=csp ====
int __thiscall IsometricTileTypeClass::ProcessPower(IsometricTileTypeClass *this, int *a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // edx
  int v6; // eax

  AbstractTypeClass::ProcessPower((AbstractTypeClass *)this, a2); /*0x549b79*/
  Power::TimerProcess(*((_DWORD *)this + 165)); /*0x549b87*/
  Power::TimerProcess(*((_DWORD *)this + 166)); /*0x549b95*/
  Power::TimerProcess(*((_DWORD *)this + 167)); /*0x549ba3*/
  Power::TimerProcess(*((_DWORD *)this + 168)); /*0x549bb1*/
  Power::TimerProcess(*((_DWORD *)this + 173)); /*0x549bbf*/
  v3 = *((_DWORD *)this + 175); /*0x549bc4*/
  if ( v3 ) /*0x549bcc*/
  {
    v4 = (*(int (__stdcall **)(int))(*(_DWORD *)(v3 + 4) + 16))(v3 + 4); /*0x549bd5*/
    Power::TimerProcess(v4); /*0x549bdb*/
  }
  Power::TimerProcess(this->q02C); /*0x549be9*/
  Power::TimerProcess(*((_DWORD *)this + 177)); /*0x549bf7*/
  Power::TimerProcess(*((_DWORD *)this + 181)); /*0x549c05*/
  Power::TimerProcess(*((_DWORD *)this + 182)); /*0x549c13*/
  Power::TimerProcess(*((_DWORD *)this + 183)); /*0x549c21*/
  LOBYTE(v5) = *((_BYTE *)this + 736); /*0x549c26*/
  v6 = Power::FlagProcess((Power *)a2, v5); /*0x549c2f*/
  LOBYTE(v6) = *((_BYTE *)this + 737); /*0x549c34*/
  Power::FlagProcess((Power *)a2, v6); /*0x549c3d*/
  Power::TimerProcess(*((_DWORD *)this + 185)); /*0x549c4b*/
  Power::TimerProcess(*((_DWORD *)this + 186)); /*0x549c59*/
  Power::TimerProcess(*((_DWORD *)this + 187)); /*0x549c67*/
  return Power::TimerProcess(*((_DWORD *)this + 188)); /*0x549c7a*/
}



// ==== 0x00549C80  IsometricTileTypeClass::LoadTypeData  this=IsometricTileTypeClass  sig=csp ====
int __stdcall IsometricTileTypeClass::LoadTypeData(IsometricTileTypeClass *this, int a2)
{
  int i; // esi
  void (__thiscall ***v3)(_DWORD, int); // ecx
  int result; // eax
  int j; // eax

  for ( i = 0; i < *(int *)&stru_87F5F0.__pad_58[96]; *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[84] + 4 * i - 4) = 0 ) /*0x549c8a*/
  {
    v3 = *(void (__thiscall ****)(_DWORD, int))(*(_DWORD *)&stru_87F5F0.__pad_58[84] + 4 * i); /*0x549c91*/
    if ( v3 ) /*0x549c96*/
      (**v3)(v3, 1); /*0x549c9c*/
    ++i; /*0x549ca3*/
  }
  result = ObjectTypeClass::LoadCleanup((ObjectTypeClass *)this, a2); /*0x549cbf*/
  if ( result >= 0 ) /*0x549cc6*/
  {
    if ( this ) /*0x549cce*/
    {
      ObjectTypeClass::Construct((ObjectTypeClass *)this, (int)&a2); /*0x549cd8*/
      IsometricTileTypeClass::Constructor_0((IsometricTileTypeClass *)((char *)this + 676), 0, 0); /*0x549ce9*/
      *((_DWORD *)this + 169) = &DynamicVectorClass<unsigned short *>::`vftable'; /*0x549cee*/
      *((_DWORD *)this + 174) = 10; /*0x549cf4*/
      *((_DWORD *)this + 173) = 0; /*0x549cfb*/
      *(_DWORD *)this->__pad_0 = &IsometricTileTypeClass::`vftable'; /*0x549d02*/
      this->IsometricTileTypeClass_field_0x04 = (int)&IsometricTileTypeClass::`vftable'; /*0x549d08*/
      this->IsometricTileTypeClass_field_0x08 = (int)&IsometricTileTypeClass::`vftable'; /*0x549d0f*/
      this->IsometricTileTypeClass_field_0x0C = (int)&IsometricTileTypeClass::`vftable'; /*0x549d16*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)this + 175); /*0x549d2a*/
    for ( j = 0; j < *(int *)&stru_87F5F0.__pad_58[96]; *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[84] + 4 * j - 4) = 0 ) /*0x549d39*/
      ++j; /*0x549d41*/
    TerrainClass::InitTheatre((TerrainClass *)this); /*0x549d56*/
    return 0; /*0x549d5b*/
  }
  return result; /*0x549d5d*/
}



// ==== 0x00549D70  IsometricTileTypeClass::SaveToINI  this=IsometricTileTypeClass  sig=csp ====
int __stdcall IsometricTileTypeClass::SaveToINI(IsometricTileTypeClass *this, int a2, int a3)
{
  int result; // eax

  result = AbstractClass::SaveLoad_PrefixWrapper((AbstractClass *)this, a2, a3); /*0x549d7f*/
  if ( result >= 0 ) /*0x549d86*/
    return 0; /*0x549d88*/
  return result; /*0x549d8a*/
}



// ==== 0x00549D90  IsometricTileTypeClass::GetClassIdentifier  this=IsometricTileTypeClass  sig=csp ====
int __stdcall IsometricTileTypeClass::GetClassIdentifier(IsometricTileTypeClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x549d96*/
    return -2147467261; /*0x549d98*/
  *a2 = 1525862010; /*0x549da6*/
  a2[1] = 298976820; /*0x549dae*/
  a2[2] = 1610654892; /*0x549db7*/
  a2[3] = unk_7E95FC; /*0x549dc0*/
  return 0; /*0x549d9d*/
}



// ==== 0x00549DD0  IsometricTileTypeClass::GetTileIndex  this=IsometricTileTypeClass  sig=csp ====
int __thiscall IsometricTileTypeClass::GetTileIndex(IsometricTileTypeClass *this, int a2, int a3)
{
  int result; // eax

  if ( *((_DWORD *)this + 175) == a2 ) /*0x549ddc*/
    *((_DWORD *)this + 175) = 0; /*0x549dde*/
  result = *((_DWORD *)this + 178); /*0x549de8*/
  if ( result != -1 && *(_DWORD *)(FootClass_Array.?[3] + 4 * result) == a2 ) /*0x549e02*/
    *((_DWORD *)this + 178) = -1; /*0x549e04*/
  return result; /*0x549e0e*/
}



// ==== 0x00549E50  ObjectClass::Map_Get_549E50  this=ObjectClass  sig=csp ====
int __thiscall sub_549E50(int this, int a2, int a3)
{
  if ( !*(_DWORD *)(this + 164) && *(_BYTE *)(this + 756) ) /*0x549e5d*/
    MapClass::LoadFileData(this); /*0x549e67*/
  return *(_DWORD *)(*(_DWORD *)(this + 680) + 4 * a2) + 4 * a3; /*0x549e7a*/
}



// ==== 0x00549E90  TerrainClass::InitTheatre  this=TerrainClass  sig=csp ====
int __thiscall TerrainClass::InitTheatre(TerrainClass *this)
{
  int v2; // esi
  int v3; // eax
  _DWORD *v4; // ebx
  int v5; // edx
  char *v6; // edi
  int v7; // eax
  int result; // eax
  _DWORD *v9; // esi
  int v10; // eax
  _BYTE *v11; // esi
  _WORD *v12; // ebp
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // edx
  unsigned __int8 v17; // al
  unsigned __int8 v18; // dl
  unsigned __int8 v19; // cl
  unsigned __int8 v20; // dl
  float v21; // ebx
  _WORD *v22; // esi
  float v23; // ebp
  _BYTE *v24; // eax
  int v25; // edx
  int v26; // eax
  int v27; // edx
  _BYTE *v28; // eax
  unsigned __int8 v29; // dl
  int v30; // ecx
  int v31; // eax
  int v32; // eax
  int v33; // edx
  bool v34; // cc
  Color v35; // [esp+Ch] [ebp-2Ch] BYREF
  Color v36; // [esp+10h] [ebp-28h] BYREF
  __int16 v37; // [esp+14h] [ebp-24h]
  unsigned __int8 v38[4]; // [esp+18h] [ebp-20h] BYREF
  unsigned __int8 v39[4]; // [esp+1Ch] [ebp-1Ch] BYREF
  float v40; // [esp+20h] [ebp-18h]
  int v41; // [esp+24h] [ebp-14h]
  _DWORD *v42; // [esp+28h] [ebp-10h]
  Color v43; // [esp+2Ch] [ebp-Ch] BYREF
  Color v44; // [esp+30h] [ebp-8h] BYREF
  _DWORD *v45; // [esp+34h] [ebp-4h]

  v2 = 0; /*0x549e98*/
  v3 = *((_DWORD *)this + 173); /*0x549e9a*/
  v4 = (_DWORD *)this->?[2]; /*0x549ea0*/
  v45 = v4; /*0x549ea8*/
  if ( v3 > 0 ) /*0x549eac*/
  {
    do /*0x549ecd*/
    {
      if ( *(_DWORD *)(this->q0AA + 4 * v2) ) /*0x549eb4*/
        __3_YAXPAX_Z(*(void **)(this->q0AA + 4 * v2)); /*0x549ebc*/
      ++v2; /*0x549eca*/
    }
    while ( v2 < *((_DWORD *)this + 173) ); /*0x549ecd*/
  }
  v5 = *((_DWORD *)this + 169); /*0x549ecf*/
  v6 = (char *)this + 676; /*0x549ed5*/
  (*(void (__thiscall **)(char *))(v5 + 12))(v6); /*0x549edd*/
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
        v11 = (_BYTE *)*v9; /*0x549f11*/
        v12 = (_WORD *)v10; /*0x549f13*/
        v13 = *((_DWORD *)v6 + 2); /*0x549f15*/
        if ( *((_DWORD *)v6 + 4) < v13 /*0x549f3a*/
          || (v6[13] || !v13)
          && (v14 = *((_DWORD *)v6 + 5), v14 > 0)
          && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)v6 + 8))(v6, v13 + v14, 0) )
        {
          v15 = *((_DWORD *)v6 + 4); /*0x549f41*/
          v16 = *((_DWORD *)v6 + 1); /*0x549f44*/
          *((_DWORD *)v6 + 4) = v15 + 1; /*0x549f4a*/
          *(_DWORD *)(v16 + 4 * v15) = v12; /*0x549f4d*/
        }
        v17 = v11[45]; /*0x549f50*/
        v18 = v11[43]; /*0x549f56*/
        v38[1] = v11[44]; /*0x549f59*/
        v38[0] = v18; /*0x549f5d*/
        v38[2] = v17; /*0x549f61*/
        v19 = v11[47]; /*0x549f68*/
        v20 = v11[46]; /*0x549f6b*/
        v39[2] = v11[48]; /*0x549f6e*/
        v39[1] = v19; /*0x549f77*/
        v39[0] = v20; /*0x549f85*/
        Color::ScaleRGB(&v43, v38, 1.4); /*0x549f89*/
        Color::ScaleRGB(&v44, v39, 1.4); /*0x549f9e*/
        v21 = 0.0; /*0x549fa3*/
        v22 = v12; /*0x549fa5*/
        v40 = 0.0; /*0x549fa7*/
        do /*0x54a09f*/
        {
          v40 = (double)SLODWORD(v40) * 0.08333333333333333; /*0x549fbd*/
          v23 = v40; /*0x549fc1*/
          v24 = Color::Lerp2(&v35, (int)v38, (int)&v43, v40); /*0x549fcc*/
          BYTE1(v25) = 0; /*0x549fd4*/
          v37 = *(_WORD *)v24; /*0x549fd7*/
          LOBYTE(v25) = v24[2] >> g_BitMask_Red; /*0x549fee*/
          LOWORD(v24) = (unsigned __int8)(HIBYTE(v37) >> g_BitMask_Blue); /*0x54a004*/
          v26 = (_DWORD)v24 << g_BitMask_Green; /*0x54a008*/
          v27 = v26 | (v25 << g_BitShift_Blue); /*0x54a010*/
          LOWORD(v26) = (unsigned __int8)((unsigned __int8)v37 >> g_BitShift_Green_0); /*0x54a01e*/
          *v22 = (v26 << g_BitShift_Red) | v27; /*0x54a02f*/
          v28 = Color::Lerp2(&v36, (int)v39, (int)&v44, v23); /*0x54a037*/
          v37 = *(_WORD *)v28; /*0x54a042*/
          v22 += 2; /*0x54a050*/
          v29 = v28[2] >> g_BitMask_Red; /*0x54a05b*/
          LOWORD(v28) = (unsigned __int8)(HIBYTE(v37) >> g_BitMask_Blue); /*0x54a071*/
          ++LODWORD(v21); /*0x54a093*/
          *(v22 - 1) = ((unsigned __int8)((unsigned __int8)v37 >> g_BitShift_Green_0) << g_BitShift_Red) /*0x54a094*/
                     | ((_DWORD)v28 << g_BitMask_Green)
                     | (v29 << g_BitShift_Blue);
          v40 = v21; /*0x54a09b*/
        }
        while ( SLODWORD(v21) <= 12 ); /*0x54a09f*/
        v4 = v45; /*0x54a0a5*/
        v9 = v42; /*0x54a0a9*/
      }
      else
      {
        v30 = *((_DWORD *)v6 + 2); /*0x54a0af*/
        if ( *((_DWORD *)v6 + 4) < v30 /*0x54a0d4*/
          || (v6[13] || !v30)
          && (v31 = *((_DWORD *)v6 + 5), v31 > 0)
          && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)v6 + 8))(v6, v30 + v31, 0) )
        {
          v32 = *((_DWORD *)v6 + 4); /*0x54a0db*/
          v33 = *((_DWORD *)v6 + 1); /*0x54a0de*/
          *((_DWORD *)v6 + 4) = v32 + 1; /*0x54a0e4*/
          *(_DWORD *)(v33 + 4 * v32) = 0; /*0x54a0e7*/
        }
      }
      result = v41 + 1; /*0x54a0f8*/
      ++v9; /*0x54a0f9*/
      v34 = ++v41 < *v4 * v4[1]; /*0x54a0fc*/
      v42 = v9; /*0x54a102*/
    }
    while ( v34 ); /*0x54a106*/
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
int IsometricTileTypeClass::GetTypeIdentifier(IsometricTileTypeClass *this)
{
  return 18; /*0x54a145*/
}



// ==== 0x0054A150  IsometricTileTypeClass::GetObjectSize  this=IsometricTileTypeClass  sig=csp ====
int IsometricTileTypeClass::GetObjectSize(IsometricTileTypeClass *this)
{
  return 780; /*0x54a155*/
}



// ==== 0x0054A160  IsometricTileTypeClass::GetAuxField  this=IsometricTileTypeClass  sig=csp ====
int __thiscall IsometricTileTypeClass::GetAuxField(IsometricTileTypeClass *this)
{
  return *((_DWORD *)this + 165); /*0x54a166*/
}



// ==== 0x0054A170  IsometricTileTypeClass::ddtor  this=IsometricTileTypeClass  sig=csp ====
void *__thiscall IsometricTileTypeClass::ddtor(IsometricTileTypeClass *this, char a2)
{
  IsometricTileTypeClass::CleanupMembers((int)this); /*0x54a173*/
  if ( (a2 & 1) != 0 ) /*0x54a17d*/
    __3_YAXPAX_Z(this); /*0x54a180*/
  return this; /*0x54a18a*/
}



// ==== 0x0054A190  _DynamicVectorClass_PAG::ClearBuffer  this=DynamicVector  sig=csp ====
void __thiscall IsometricTileTypeClass::ClearBuffer(_DynamicVectorClass_PAG *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x54a196*/
  this->m_10 = 0; /*0x54a199*/
  if ( v2 && BYTE1(this->m_C) ) /*0x54a1a0*/
  {
    __3_YAXPAX_Z(v2); /*0x54a1a6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x54a1ae*/
  }
  BYTE1(this->m_C) = 0; /*0x54a1b1*/
  this->m_8 = 0; /*0x54a1b4*/
}



// ==== 0x0054A1C0  _DynamicVectorClass_PAG::PointerToIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall IsometricTileTypeClass::PointerToIndex(_DynamicVectorClass_PAG *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x54a1c0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x54a1d5*/
  else
    return 0; /*0x54a1c7*/
}



// ==== 0x0054A1E0  _VectorClass_PAG::Count  this=VectorClass  sig=csp ====
int __thiscall VectorClass_PAG::Count(_VectorClass_PAG *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x54a1ea*/
}



// ==== 0x0054A1F0  _DynamicVectorClass_PAUTileInsertType_IsometricTileTypeClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_TileInsertType_uint_sometricTileTypeClass::Destroy(
        _DynamicVectorClass_PAUTileInsertType_IsometricTileTypeClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x54a1f6*/
  this->m_10 = 0; /*0x54a1f9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x54a200*/
  {
    __3_YAXPAX_Z(v2); /*0x54a206*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x54a20e*/
  }
  BYTE1(this->m_C) = 0; /*0x54a211*/
  this->m_8 = 0; /*0x54a214*/
}



// ==== 0x0054A220  _DynamicVectorClass_PAUTileInsertType_IsometricTileTypeClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_TileInsertType_uint_sometricTileTypeClass::GetItemIndex(
        _DynamicVectorClass_PAUTileInsertType_IsometricTileTypeClass *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x54a220*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x54a235*/
  else
    return 0; /*0x54a227*/
}



// ==== 0x0054A240  _VectorClass_PAUTileInsertType_IsometricTileTypeClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_TileInsertType_uint_sometricTileTypeClass::Get(
        _VectorClass_PAUTileInsertType_IsometricTileTypeClass *this,
        int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x54a24a*/
}



// ==== 0x0054A250  _VectorClass_PAG::Get  this=VectorClass  sig=csp ====
char __thiscall VectorClass_PAG::Get(_VectorClass_PAG *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x54a252*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x54a25d*/
  {
    v3 = 0; /*0x54a25f*/
    if ( m_8 <= 0 ) /*0x54a263*/
      return 1; /*0x54a283*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x54a265*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x54a26b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x54a274*/
    {
      ++v3; /*0x54a276*/
      ++v4; /*0x54a277*/
      if ( v3 >= m_8 ) /*0x54a27c*/
        return 1; /*0x54a27c*/
    }
  }
  return 0; /*0x54a27e*/
}



// ==== 0x0054A290  _VectorClass_PAG::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_PAG::Release(_VectorClass_PAG *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x54a29c*/
  {
    LOBYTE(this->m_C) = 0; /*0x54a2a6*/
    if ( a3 ) /*0x54a2ac*/
      v4 = a3; /*0x54a2c2*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x54a2be*/
    LOBYTE(this->m_C) = 1; /*0x54a2c6*/
    if ( v4 ) /*0x54a2ca*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x54a2d5*/
      {
        m_8 = this->m_8; /*0x54a2dc*/
        if ( a2 < m_8 ) /*0x54a2e1*/
          m_8 = a2; /*0x54a2e3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x54a2e9*/
          ++i; /*0x54a2ee*/
        if ( BYTE1(this->m_C) ) /*0x54a2fb*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x54a306*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x54a30e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x54a317*/
      this->m_8 = a2; /*0x54a31f*/
      BYTE1(this->m_C) = a3 == 0; /*0x54a322*/
      return 1; /*0x54a328*/
    }
    else
    {
      return 0; /*0x54a2cf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAG *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x54a332*/
    return 1; /*0x54a338*/
  }
}



// ==== 0x0054A340  _VectorClass_PAG::Set  this=VectorClass  sig=csp ====
void __thiscall VectorClass_PAG::Set(_VectorClass_PAG *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x54a34d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x54a353*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x54a35b*/
  }
  BYTE1(this->m_C) = 0; /*0x54a35e*/
  this->m_8 = 0; /*0x54a361*/
}



// ==== 0x0054A370  _VectorClass_PAG::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_PAG::GetSize(_VectorClass_PAG *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x54a370*/
    return 0; /*0x54a378*/
  m_8 = this->m_8; /*0x54a37e*/
  result = 0; /*0x54a381*/
  if ( m_8 <= 0 ) /*0x54a385*/
    return -1; /*0x54a39c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x54a38b*/
  {
    if ( ++result >= m_8 ) /*0x54a39a*/
      return -1; /*0x54a39a*/
  }
  return result; /*0x54a37a*/
}



// ==== 0x0054A3B0  _VectorClass_PAG::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_PAG::GetCapacity(_VectorClass_PAG *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x54a3b0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x54a3c5*/
  else
    return 0; /*0x54a3b7*/
}



// ==== 0x0054A3D0  _DynamicVectorClass_PAG::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall IsometricTileTypeClass::SetCapacity(_DynamicVectorClass_PAG *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x54a3dc*/
  {
    LOBYTE(this->m_C) = 0; /*0x54a3e2*/
    if ( a3 ) /*0x54a3e8*/
      v4 = a3; /*0x54a3fe*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x54a3fa*/
    LOBYTE(this->m_C) = 1; /*0x54a402*/
    if ( !v4 ) /*0x54a406*/
      return 0; /*0x54a47a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x54a408*/
    {
      m_8 = this->m_8; /*0x54a40f*/
      if ( a2 < m_8 ) /*0x54a414*/
        m_8 = a2; /*0x54a416*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x54a41c*/
        ++i; /*0x54a421*/
      if ( BYTE1(this->m_C) ) /*0x54a42e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x54a439*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x54a441*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x54a44a*/
    this->m_8 = a2; /*0x54a452*/
    BYTE1(this->m_C) = a3 == 0; /*0x54a455*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAG *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x54a45e*/
  }
  v7 = this->m_8; /*0x54a461*/
  if ( v7 < this->m_10 ) /*0x54a469*/
    this->m_10 = v7; /*0x54a46b*/
  return 1; /*0x54a46e*/
}



// ==== 0x0054A480  _DynamicVectorClass_PAG::FindItem  this=DynamicVector  sig=csp ====
int __thiscall IsometricTileTypeClass::FindItem(_DynamicVectorClass_PAG *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x54a480*/
  result = 0; /*0x54a483*/
  if ( m_10 <= 0 ) /*0x54a488*/
    return -1; /*0x54a49f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x54a48e*/
  {
    if ( ++result >= m_10 ) /*0x54a49d*/
      return -1; /*0x54a49d*/
  }
  return result; /*0x54a4a2*/
}



// ==== 0x0054A4B0  _VectorClass_PAUTileInsertType_IsometricTileTypeClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_TileInsertType_uint_sometricTileTypeClass::Add(
        _VectorClass_PAUTileInsertType_IsometricTileTypeClass *this,
        int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x54a4b2*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x54a4bd*/
  {
    v3 = 0; /*0x54a4bf*/
    if ( m_8 <= 0 ) /*0x54a4c3*/
      return 1; /*0x54a4e3*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x54a4c5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x54a4cb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x54a4d4*/
    {
      ++v3; /*0x54a4d6*/
      ++v4; /*0x54a4d7*/
      if ( v3 >= m_8 ) /*0x54a4dc*/
        return 1; /*0x54a4dc*/
    }
  }
  return 0; /*0x54a4de*/
}



// ==== 0x0054A4F0  _VectorClass_PAUTileInsertType_IsometricTileTypeClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_TileInsertType_uint_sometricTileTypeClass::Release(
        _VectorClass_PAUTileInsertType_IsometricTileTypeClass *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x54a4fc*/
  {
    LOBYTE(this->m_C) = 0; /*0x54a506*/
    if ( a3 ) /*0x54a50c*/
      v4 = a3; /*0x54a522*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x54a51e*/
    LOBYTE(this->m_C) = 1; /*0x54a526*/
    if ( v4 ) /*0x54a52a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x54a535*/
      {
        m_8 = this->m_8; /*0x54a53c*/
        if ( a2 < m_8 ) /*0x54a541*/
          m_8 = a2; /*0x54a543*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x54a549*/
          ++i; /*0x54a54e*/
        if ( BYTE1(this->m_C) ) /*0x54a55b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x54a566*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x54a56e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x54a577*/
      this->m_8 = a2; /*0x54a57f*/
      BYTE1(this->m_C) = a3 == 0; /*0x54a582*/
      return 1; /*0x54a588*/
    }
    else
    {
      return 0; /*0x54a52f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAUTileInsertType_IsometricTileTypeClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x54a592*/
    return 1; /*0x54a598*/
  }
}



// ==== 0x0054A5A0  _VectorClass_PAUTileInsertType_IsometricTileTypeClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_TileInsertType_uint_sometricTileTypeClass::Remove(
        _VectorClass_PAUTileInsertType_IsometricTileTypeClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x54a5ad*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x54a5b3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x54a5bb*/
  }
  BYTE1(this->m_C) = 0; /*0x54a5be*/
  this->m_8 = 0; /*0x54a5c1*/
}



// ==== 0x0054A5D0  _VectorClass_PAUTileInsertType_IsometricTileTypeClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_TileInsertType_uint_sometricTileTypeClass::GetSize(
        _VectorClass_PAUTileInsertType_IsometricTileTypeClass *this,
        _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x54a5d0*/
    return 0; /*0x54a5d8*/
  m_8 = this->m_8; /*0x54a5de*/
  result = 0; /*0x54a5e1*/
  if ( m_8 <= 0 ) /*0x54a5e5*/
    return -1; /*0x54a5fc*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x54a5eb*/
  {
    if ( ++result >= m_8 ) /*0x54a5fa*/
      return -1; /*0x54a5fa*/
  }
  return result; /*0x54a5da*/
}



// ==== 0x0054A610  _VectorClass_PAUTileInsertType_IsometricTileTypeClass::LoadTypeData  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_TileInsertType_uint_sometricTileTypeClass::LoadTypeData(
        _VectorClass_PAUTileInsertType_IsometricTileTypeClass *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x54a610*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x54a625*/
  else
    return 0; /*0x54a617*/
}



// ==== 0x0054A630  _DynamicVectorClass_PAUTileInsertType_IsometricTileTypeClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_TileInsertType_uint_sometricTileTypeClass::SetCapacity(
        _DynamicVectorClass_PAUTileInsertType_IsometricTileTypeClass *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x54a63c*/
  {
    LOBYTE(this->m_C) = 0; /*0x54a642*/
    if ( a3 ) /*0x54a648*/
      v4 = a3; /*0x54a65e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x54a65a*/
    LOBYTE(this->m_C) = 1; /*0x54a662*/
    if ( !v4 ) /*0x54a666*/
      return 0; /*0x54a6da*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x54a668*/
    {
      m_8 = this->m_8; /*0x54a66f*/
      if ( a2 < m_8 ) /*0x54a674*/
        m_8 = a2; /*0x54a676*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x54a67c*/
        ++i; /*0x54a681*/
      if ( BYTE1(this->m_C) ) /*0x54a68e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x54a699*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x54a6a1*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x54a6aa*/
    this->m_8 = a2; /*0x54a6b2*/
    BYTE1(this->m_C) = a3 == 0; /*0x54a6b5*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAUTileInsertType_IsometricTileTypeClass *))(*(_DWORD *)this->__pad_0 /*0x54a6be*/
                                                                                           + 12))(this);
  }
  v7 = this->m_8; /*0x54a6c1*/
  if ( v7 < this->m_10 ) /*0x54a6c9*/
    this->m_10 = v7; /*0x54a6cb*/
  return 1; /*0x54a6ce*/
}



// ==== 0x0054A6E0  _DynamicVectorClass_PAUTileInsertType_IsometricTileTypeClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_TileInsertType_uint_sometricTileTypeClass::FindItemIndex(
        _DynamicVectorClass_PAUTileInsertType_IsometricTileTypeClass *this,
        _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x54a6e0*/
  result = 0; /*0x54a6e3*/
  if ( m_10 <= 0 ) /*0x54a6e8*/
    return -1; /*0x54a6ff*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x54a6ee*/
  {
    if ( ++result >= m_10 ) /*0x54a6fd*/
      return -1; /*0x54a6fd*/
  }
  return result; /*0x54a702*/
}



// ==== 0x0054A710  _VectorClass_PAG::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_PAG::QueryInterface(_VectorClass_PAG *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x54a713*/
  *(_DWORD *)this->__pad_0 = &VectorClass<unsigned short *>::`vftable'; /*0x54a716*/
  if ( v3 && BYTE1(this->m_C) ) /*0x54a720*/
  {
    __3_YAXPAX_Z(v3); /*0x54a728*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x54a730*/
  }
  BYTE1(this->m_C) = 0; /*0x54a73b*/
  this->m_8 = 0; /*0x54a741*/
  if ( (a2 & 1) != 0 ) /*0x54a748*/
    __3_YAXPAX_Z(this); /*0x54a74b*/
  return this->__pad_0; /*0x54a755*/
}



// ==== 0x0054A760  _DynamicVectorClass_PAG::Constructor  this=DynamicVector  sig=csp ====
_DWORD *__thiscall IsometricTileTypeClass::Constructor(_DynamicVectorClass_PAG *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x54a763*/
  *(_DWORD *)this->__pad_0 = &VectorClass<unsigned short *>::`vftable'; /*0x54a766*/
  if ( v3 && BYTE1(this->m_C) ) /*0x54a770*/
  {
    __3_YAXPAX_Z(v3); /*0x54a778*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x54a780*/
  }
  BYTE1(this->m_C) = 0; /*0x54a78b*/
  this->m_8 = 0; /*0x54a791*/
  if ( (a2 & 1) != 0 ) /*0x54a798*/
    __3_YAXPAX_Z(this); /*0x54a79b*/
  return this->__pad_0; /*0x54a7a5*/
}



// ==== 0x0054A7B0  _VectorClass_PAUTileInsertType_IsometricTileTypeClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_TileInsertType_uint_sometricTileTypeClass::QueryInterface(
        _VectorClass_PAUTileInsertType_IsometricTileTypeClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x54a7b3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<IsometricTileTypeClass::TileInsertType *>::`vftable'; /*0x54a7b6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x54a7c0*/
  {
    __3_YAXPAX_Z(v3); /*0x54a7c8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x54a7d0*/
  }
  BYTE1(this->m_C) = 0; /*0x54a7db*/
  this->m_8 = 0; /*0x54a7e1*/
  if ( (a2 & 1) != 0 ) /*0x54a7e8*/
    __3_YAXPAX_Z(this); /*0x54a7eb*/
  return this->__pad_0; /*0x54a7f5*/
}



// ==== 0x0054A800  _DynamicVectorClass_PAUTileInsertType_IsometricTileTypeClass::Constructor  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_TileInsertType_uint_sometricTileTypeClass::Constructor(
        _DynamicVectorClass_PAUTileInsertType_IsometricTileTypeClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x54a803*/
  *(_DWORD *)this->__pad_0 = &VectorClass<IsometricTileTypeClass::TileInsertType *>::`vftable'; /*0x54a806*/
  if ( v3 && BYTE1(this->m_C) ) /*0x54a810*/
  {
    __3_YAXPAX_Z(v3); /*0x54a818*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x54a820*/
  }
  BYTE1(this->m_C) = 0; /*0x54a82b*/
  this->m_8 = 0; /*0x54a831*/
  if ( (a2 & 1) != 0 ) /*0x54a838*/
    __3_YAXPAX_Z(this); /*0x54a83b*/
  return this->__pad_0; /*0x54a845*/
}



// ==== 0x0054A850  IsometricTileTypeClass::Constructor_0  this=VectorClass  sig=csp ====
_DWORD *__thiscall IsometricTileTypeClass::Constructor_0(IsometricTileTypeClass *this, int a2, int a3)
{
  this->IsometricTileTypeClass_field_0x04 = 0; /*0x54a85b*/
  this->IsometricTileTypeClass_field_0x08 = a2; /*0x54a85e*/
  LOBYTE(this->IsometricTileTypeClass_field_0x0C) = 1; /*0x54a861*/
  BYTE1(this->IsometricTileTypeClass_field_0x0C) = 0; /*0x54a865*/
  *(_DWORD *)this->__pad_0 = &VectorClass<unsigned short *>::`vftable'; /*0x54a868*/
  if ( a2 ) /*0x54a86e*/
  {
    if ( a3 ) /*0x54a876*/
    {
      this->IsometricTileTypeClass_field_0x04 = a3; /*0x54a878*/
      return this->__pad_0; /*0x54a87e*/
    }
    this->IsometricTileTypeClass_field_0x04 = __2_YAPAXI_Z(4 * a2); /*0x54a88d*/
    BYTE1(this->IsometricTileTypeClass_field_0x0C) = 1; /*0x54a890*/
  }
  return this->__pad_0; /*0x54a87d*/
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
int __thiscall sub_54A990(ObjectClass *this)
{
  ObjectClass *v1; // edi
  int v2; // ebp
  char v3; // al
  int i; // esi

  v1 = this; /*0x54a994*/
  v2 = 0; /*0x54a996*/
  if ( !LOBYTE(this->AbstractClass) ) /*0x54a998*/
  {
    do /*0x54a9a4*/
    {
      v3 = BYTE1(v1->AbstractClass); /*0x54a99d*/
      ++v2; /*0x54a9a0*/
      v1 = (ObjectClass *)((char *)v1 + 1); /*0x54a9a1*/
    }
    while ( !v3 ); /*0x54a9a4*/
  }
  for ( i = 0; i < 8; ++i ) /*0x54a9a6*/
  {
    if ( ((unsigned __int8)(1 << (i % 8)) & *((_BYTE *)&v1->AbstractClass + i / 8)) != 0 ) /*0x54a9c9*/
      break; /*0x54a9c9*/
  }
  return i + 8 * v2; /*0x54a9d4*/
}



// ==== 0x0054A9E0  ObjectClass::method_54A9E0  this=ObjectClass  sig=csp ====
int __thiscall sub_54A9E0(ObjectClass *this)
{
  ObjectClass *v1; // edi
  int v2; // ebp
  char v3; // al
  int i; // esi

  v1 = this; /*0x54a9e4*/
  v2 = 0; /*0x54a9e6*/
  if ( LOBYTE(this->AbstractClass) == 0xFF ) /*0x54a9eb*/
  {
    do /*0x54a9f4*/
    {
      v3 = BYTE1(v1->AbstractClass); /*0x54a9ed*/
      ++v2; /*0x54a9f0*/
      v1 = (ObjectClass *)((char *)v1 + 1); /*0x54a9f1*/
    }
    while ( v3 == -1 ); /*0x54a9f4*/
  }
  for ( i = 0; i < 8; ++i ) /*0x54a9f6*/
  {
    if ( ((unsigned __int8)(1 << (i % 8)) & *((_BYTE *)&v1->AbstractClass + i / 8)) == 0 ) /*0x54aa19*/
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
int __thiscall LocomotionClass::Update(JumpjetLocomotionClass *this)
{
  int v2; // ecx
  int v4; // [esp+Ch] [ebp-4h] BYREF

  LocomotionClass::Init((LocomotionClass *)this); /*0x54ac46*/
  this->DestinationCoords[0] = dword_ABC5A8; /*0x54ac59*/
  this->DestinationCoords[1] = dword_ABC5AC; /*0x54ac61*/
  v2 = dword_ABC5B0; /*0x54ac64*/
  this->IsMoving = 0; /*0x54ac6a*/
  *(_DWORD *)this->__pad_50 = 0; /*0x54ac6d*/
  this->DestinationCoords[2] = v2; /*0x54ac70*/
  FrameSnapshot::InitMax( /*0x54ac82*/
    (FrameSnapshot *)&this->__pad_50[4],
    *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1036));
  this->CurrentHeight = 0; /*0x54ac87*/
  *(_DWORD *)&this->__pad_74[4] = 0; /*0x54ac8a*/
  *(_DWORD *)&this->DestinationReached = 0; /*0x54ac8d*/
  *(_DWORD *)this->__pad_74 = 0; /*0x54ac93*/
  *(_DWORD *)&this->__pad_74[8] = 0; /*0x54ac96*/
  *(_DWORD *)&this->__pad_74[12] = 0; /*0x54ac99*/
  *(_DWORD *)&this->__pad_89[3] = 0; /*0x54ac9f*/
  this->__pad_89[7] = 0; /*0x54aca5*/
  this->unknown_91 = 0; /*0x54acab*/
  this->Piggybackee = 0; /*0x54acb5*/
  this->LocomotionClass[0] = (int)&JumpjetLocomotionClass::`vftable'; /*0x54acc3*/
  this->LocomotionClass[1] = (int)&JumpjetLocomotionClass::`vftable'; /*0x54acc9*/
  this->TurnRate = (int)&JumpjetLocomotionClass::`vftable'; /*0x54acd0*/
  LOWORD(v4) = 0x4000; /*0x54acd7*/
  FacingClass::Update(&this->__pad_50[4], &v4); /*0x54acdc*/
  LOWORD(v4) = 0x4000; /*0x54ace8*/
  FacingClass::Set_SyncLog(&this->__pad_50[4], &v4); /*0x54aced*/
  return (int)this->LocomotionClass; /*0x54acf4*/
}



// ==== 0x0054AD30  JumpjetLocomotionClass::InitMovementParams  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::InitMovementParams(JumpjetLocomotionClass *this, int a2)
{
  int v2; // ebx
  JumpjetLocomotionClass *v3; // ebp
  int v4; // eax
  FrameSnapshot v6[3]; // [esp+10h] [ebp-18h] BYREF

  v2 = a2; /*0x54ad34*/
  v3 = this; /*0x54ad39*/
  v3->TurnRate = *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)a2 + 132))(a2) + 3440); /*0x54ad4f*/
  v3->Speed = *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)v2 + 132))(v2) + 3444); /*0x54ad64*/
  v3->Climb = *(float *)((*(int (__thiscall **)(int))(*(_DWORD *)v2 + 132))(v2) + 3448); /*0x54ad77*/
  v3->Crash = *(float *)((*(int (__thiscall **)(int))(*(_DWORD *)v2 + 132))(v2) + 3452); /*0x54ad8a*/
  v4 = *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)v2 + 132))(v2) + 3456); /*0x54ad9b*/
  if ( v4 <= 2 * dword_ABC5E8 ) /*0x54ada5*/
    v4 = 2 * dword_ABC5E8; /*0x54ada7*/
  v3->Height = v4; /*0x54ada9*/
  v3->Accel = *(float *)((*(int (__thiscall **)(int))(*(_DWORD *)v2 + 132))(v2) + 3460); /*0x54adbe*/
  v3->Wobbles = *(float *)((*(int (__thiscall **)(int))(*(_DWORD *)v2 + 132))(v2) + 3464); /*0x54add1*/
  v3->Deviation = *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)v2 + 132))(v2) + 3472); /*0x54ade4*/
  v3->NoWobbles = *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v2 + 132))(v2) + 3468); /*0x54adf5*/
  FrameSnapshot::InitMax(v6, v3->TurnRate); /*0x54ae00*/
  qmemcpy(v3->__pad_50, v6, 0x18u); /*0x54ae13*/
  LOWORD(this) = 0x4000; /*0x54ae21*/
  FacingClass::Update(v3->__pad_50, &this); /*0x54ae26*/
  LOWORD(this) = 0x4000; /*0x54ae33*/
  FacingClass::Set_SyncLog(v3->__pad_50, &this); /*0x54ae38*/
  return StreamClass::ResetPosition((LocomotionClass *)v3, v2); /*0x54ae44*/
}



// ==== 0x0054AE50  JumpjetLocomotionClass::SmallStub_54AE50  this=JumpjetLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::SmallStub_54AE50(JumpjetLocomotionClass *this)
{
  return this->DestinationCoords[2]; /*0x54ae57*/
}



// ==== 0x0054AE60  JumpjetLocomotionClass::GetMovementCoordinate_0  this=JumpjetLocomotionClass  sig=csp ====
_DWORD *__stdcall JumpjetLocomotionClass::GetMovementCoordinate_0(JumpjetLocomotionClass *this, _DWORD *a2)
{
  _DWORD *result; // eax
  int v3; // edx
  int v4; // esi
  _DWORD *v5; // edi

  if ( (*(unsigned __int8 (__stdcall **)(JumpjetLocomotionClass *))(this->LocomotionClass[0] + 16))(this) ) /*0x54ae69*/
  {
    result = a2; /*0x54ae70*/
    v3 = this->DestinationCoords[0]; /*0x54ae77*/
    v4 = this->DestinationCoords[1]; /*0x54ae7a*/
    v5 = a2; /*0x54ae7d*/
    *a2 = *(_DWORD *)&this->__pad_39[3]; /*0x54ae7f*/
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
char __stdcall JumpjetLocomotionClass::DispatchLocomotion(JumpjetLocomotionClass *this)
{
  double v1; // st7
  int v3; // eax
  int v4; // ecx
  int v5; // eax
  FootClass *Owner; // ecx
  int v7; // eax
  int *v8; // eax
  int v9; // edi
  FootClass *v10; // ecx
  int v11; // ebx
  int (__thiscall **ptr_0)(FootClass *, int *); // edx
  _DWORD *v13; // eax
  void *v14; // eax
  int *v15; // edx
  int v16; // eax
  int v17; // ecx
  int v18; // edx
  FootClass *v19; // eax
  int *location; // eax
  int *v21; // edx
  FootClass *v22; // eax
  int *v23; // eax
  int v24; // eax
  ObjectClass *v26; // [esp+28h] [ebp-24h]
  __int16 v27[2]; // [esp+2Ch] [ebp-20h] BYREF
  int v28; // [esp+30h] [ebp-1Ch]
  int v29; // [esp+34h] [ebp-18h] BYREF
  int v30; // [esp+38h] [ebp-14h]
  int v31; // [esp+3Ch] [ebp-10h]
  _BYTE v32[12]; // [esp+40h] [ebp-Ch] BYREF
  JumpjetLocomotionClass *thisa; // [esp+50h] [ebp+4h]

  v3 = (*(int (__stdcall **)(JumpjetLocomotionClass *))(this->LocomotionClass[0] + 116))(this); /*0x54aecb*/
  v4 = this->LocomotionClass[0]; /*0x54aece*/
  v28 = v3; /*0x54aed1*/
  if ( (*(unsigned __int8 (__stdcall **)(JumpjetLocomotionClass *))(v4 + 16))(this) /*0x54aedf*/
    || (*(unsigned __int8 (__stdcall **)(JumpjetLocomotionClass *))(this->LocomotionClass[0] + 128))(this) )
  {
    JumpjetLocomotion::UpdateFacing((JumpjetLocomotion *)((char *)this - 4)); /*0x54aef0*/
    if ( !this->?->? ) /*0x54af00*/
      return 0; /*0x54af00*/
    if ( HouseClass::IonSensitivesShouldBeOffline() ) /*0x54af0c*/
    {
      v5 = *(_DWORD *)&this->IsMoving; /*0x54af15*/
      if ( v5 ) /*0x54af1a*/
      {
        if ( v5 != 5 ) /*0x54af1f*/
          (*((void (__thiscall **)(FootClass *, _DWORD))this->?->TechnoClass + 247))(this->?, 0); /*0x54af28*/
      }
    }
    Owner = this->?; /*0x54af2e*/
    if ( Owner->? ) /*0x54af33*/
    {
      v7 = *(_DWORD *)&this->IsMoving; /*0x54af41*/
      if ( v7 != 5 && v7 != 6 && (*((int (__thiscall **)(FootClass *))Owner->TechnoClass + 114))(Owner) > 0 ) /*0x54af60*/
      {
        v8 = (int *)(*((int (__thiscall **)(FootClass *, int *))this->?->TechnoClass + 18))(this->?, &v29); /*0x54af71*/
        v9 = *v8; /*0x54af74*/
        v10 = this->?; /*0x54af76*/
        v11 = v8[1]; /*0x54af79*/
        ptr_0 = (int (__thiscall **)(FootClass *, int *))v10->TechnoClass; /*0x54af7c*/
        v31 = v8[2]; /*0x54af81*/
        v13 = (_DWORD *)ptr_0[18](v10, &v29); /*0x54af8a*/
        LOWORD(thisa) = *v13 / 256; /*0x54af9d*/
        HIWORD(thisa) = v13[1] / 256; /*0x54afb5*/
        *(_DWORD *)v27 = thisa; /*0x54afbe*/
        v14 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v27); /*0x54afc8*/
        v15 = (int *)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)v14 + 72))(v14, v32); /*0x54afdc*/
        v16 = *v15; /*0x54afde*/
        v17 = v15[1]; /*0x54afe8*/
        v18 = v15[2]; /*0x54afeb*/
        if ( !this->?->isAttackedByLocomotor || v9 == v16 && v11 == v17 ) /*0x54aff6*/
        {
          *(_DWORD *)&this->__pad_74[8] = -5; /*0x54b006*/
          *(_DWORD *)&this->IsMoving = 5; /*0x54b00d*/
          if ( (*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 11))(this->?) == 15 ) /*0x54b01f*/
            (*((void (__thiscall **)(FootClass *, int, _DWORD, _DWORD))this->?->TechnoClass + 342))(this->?, 34, 0, 0); /*0x54b02c*/
        }
        else
        {
          *(_DWORD *)&this->__pad_39[3] = v16; /*0x54affb*/
          this->DestinationCoords[0] = v17; /*0x54affe*/
          this->DestinationCoords[1] = v18; /*0x54b001*/
        }
      }
    }
    switch ( *(_DWORD *)&this->IsMoving ) /*0x54b03c*/
    {
      case 0: /*0x54b03c*/
        HouseClass::Set((HouseClass *)((char *)this - 4)); /*0x54b046*/
        break; /*0x54b04b*/
      case 1: /*0x54b03c*/
        UpdateFootMovement(v26, v1); /*0x54b050*/
        break; /*0x54b055*/
      case 2: /*0x54b03c*/
        UpdateFootMoveToState(v26, v1); /*0x54b05a*/
        break; /*0x54b05f*/
      case 3: /*0x54b03c*/
        MovementClass::CalcSpeed((MovementClass *)v26, v1); /*0x54b064*/
        break; /*0x54b069*/
      case 4: /*0x54b03c*/
        BuildingPlacement::ProcessBuildingPlacementAction((BuildingPlacement *)((char *)this - 4)); /*0x54b06e*/
        break; /*0x54b073*/
      case 5: /*0x54b03c*/
        JumpjetLocomotion::Land((JumpjetLocomotion *)((char *)this - 4)); /*0x54b078*/
        break; /*0x54b078*/
      default:
        break;
    }
    v19 = this->?; /*0x54b07d*/
    if ( v19->? ) /*0x54b080*/
    {
      if ( (Object *)v19->? != dword_A83D4C ) /*0x54b09c*/
      {
        location = v19->?; /*0x54b09e*/
        v29 = *location; /*0x54b0a5*/
        v30 = location[1]; /*0x54b0ac*/
        v31 = location[2]; /*0x54b0bd*/
        if ( (unsigned __int8)Cell::IsPassable(&v29) /*0x54b0fe*/
          || ((int)dword_A8B230->ptr_0 & 0x1000) != 0
          && (v21 = this->?->?, v29 = *v21, v30 = v21[1], v31 = v21[2], (unsigned __int8)Game::Stub3((int)&v29)) )
        {
          (*((void (__thiscall **)(FootClass *))this->?->TechnoClass + 84))(this->?); /*0x54b10c*/
        }
      }
    }
    v22 = this->?; /*0x54b112*/
    if ( !v22->? && (Object *)v22->? != dword_A83D4C ) /*0x54b12d*/
    {
      v23 = v22->?; /*0x54b12f*/
      v29 = *v23; /*0x54b136*/
      v30 = v23[1]; /*0x54b13d*/
      v31 = v23[2]; /*0x54b14e*/
      if ( !(unsigned __int8)Cell::IsPassable(&v29) ) /*0x54b152*/
        (*((void (__thiscall **)(FootClass *, Object *))this->?->TechnoClass + 102))(this->?, dword_A83D4C); /*0x54b166*/
    }
  }
  if ( this->?->? ) /*0x54b16f*/
  {
    v24 = (*(int (__stdcall **)(JumpjetLocomotionClass *))(this->LocomotionClass[0] + 116))(this); /*0x54b17c*/
    if ( v24 != v28 ) /*0x54b183*/
      Targeting::Readd(&this->?->TechnoClass); /*0x54b18e*/
  }
  return 0; /*0x54b195*/
}



// ==== 0x0054B1C0  JumpjetLocomotionClass::SmoothObjectPlacement  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::SmoothObjectPlacement(JumpjetLocomotionClass *this, int a2, int a3, int a4)
{
  JumpjetLocomotionClass *v4; // esi
  int v5; // edi
  int v6; // ebp
  int result; // eax
  JumpjetLocomotionClass **v8; // eax
  unsigned int v9; // edx
  int *v10; // eax
  int v11; // edi
  int v12; // ebx
  int v13; // ebp
  FootClass *Owner; // ecx
  FootClass *v15; // ecx
  int v16; // [esp+10h] [ebp-10h] BYREF
  int v17[3]; // [esp+14h] [ebp-Ch] BYREF

  v4 = this; /*0x54b1cc*/
  if ( (*(_DWORD *)&this->__pad_39[3] != dword_ABC5A8 /*0x54b1fe*/
     || this->DestinationCoords[0] != dword_ABC5AC
     || this->DestinationCoords[1] != dword_ABC5B0)
    && *(_DWORD *)&this->IsMoving
    && this->__pad_89[3] )
  {
    (*((void (__thiscall **)(FootClass *, char *))this->?->TechnoClass + 61))(this->?, &this->__pad_39[3]); /*0x54b20e*/
    v4->__pad_89[3] = 0; /*0x54b214*/
  }
  v5 = a2; /*0x54b21e*/
  v6 = a3; /*0x54b222*/
  result = a4; /*0x54b22b*/
  *(_DWORD *)&v4->__pad_39[3] = a2; /*0x54b22f*/
  v4->DestinationCoords[0] = v6; /*0x54b231*/
  v4->DestinationCoords[1] = result; /*0x54b234*/
  if ( v5 == dword_ABC5A8 && v6 == dword_ABC5AC && result == dword_ABC5B0 ) /*0x54b24f*/
  {
    LOBYTE(v4->DestinationCoords[2]) = 0; /*0x54b4c1*/
  }
  else
  {
    if ( (*((int (__thiscall **)(FootClass *))v4->?->TechnoClass + 11))(v4->?) != 1 || *((_BYTE *)v4->?[1].? + 3434) ) /*0x54b26b*/
    {
      v17[2] = a4; /*0x54b2e4*/
      LOWORD(this) = v5 / 256; /*0x54b2fd*/
      a2 = 0; /*0x54b30b*/
      HIWORD(this) = v6 / 256; /*0x54b31a*/
      v17[0] = v5; /*0x54b33d*/
      v17[1] = v6; /*0x54b341*/
      v9 = (unsigned int)Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v17)->flags[0] >> 8; /*0x54b358*/
      LOBYTE(v9) = v9 & 1; /*0x54b35b*/
      v8 = (JumpjetLocomotionClass **)LayerClass::Pathfinding_Find( /*0x54b36f*/
                                        &stru_87F5F0.__pad_58[416],
                                        v9,
                                        &v16,
                                        (__int16 *)&this,
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
      LOWORD(this) = v5 / 256; /*0x54b28c*/
      a2 = 0; /*0x54b29a*/
      HIWORD(this) = v6 / 256; /*0x54b2a9*/
      v8 = (JumpjetLocomotionClass **)LayerClass::Pathfinding_Find( /*0x54b2d9*/
                                        &stru_87F5F0.__pad_58[416],
                                        (int)&v16,
                                        &v16,
                                        (__int16 *)&this,
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
    this = *v8; /*0x54b37d*/
    a2 = ((__int16)this << 8) + 128; /*0x54b393*/
    a3 = (SHIWORD(this) << 8) + 128; /*0x54b3a4*/
    a4 = 0; /*0x54b3a8*/
    v10 = JumpjetLocomotionClass::ProcessLanding((JumpjetLocomotionClass *)((char *)v4 - 4), v17, &a2); /*0x54b3b0*/
    v11 = *v10; /*0x54b3b5*/
    v12 = v10[1]; /*0x54b3b7*/
    v13 = v10[2]; /*0x54b3ba*/
    result = dword_ABC5A8; /*0x54b3bd*/
    if ( v11 != dword_ABC5A8 || v12 != dword_ABC5AC || v13 != dword_ABC5B0 ) /*0x54b3d4*/
    {
      if ( (*((int (__thiscall **)(FootClass *))v4->?->TechnoClass + 11))(v4->?) != 1 /*0x54b413*/
        || !*(_BYTE *)((*((int (__thiscall **)(FootClass *))v4->?->TechnoClass + 33))(v4->?) + 3434)
        && (Owner = v4->?, Owner->? != 7)
        && (*((int (__thiscall **)(FootClass *))Owner->TechnoClass + 97))(Owner) != 7 )
      {
        *(_DWORD *)&v4->__pad_39[3] = v11; /*0x54b418*/
        v4->DestinationCoords[0] = v12; /*0x54b41b*/
        v4->DestinationCoords[1] = v13; /*0x54b41e*/
      }
      v15 = v4->?; /*0x54b421*/
      if ( v15->? != 7 && (*((int (__thiscall **)(FootClass *))v15->TechnoClass + 97))(v15) != 7 ) /*0x54b438*/
        v4->?->movementDestination = (AbstractClass *)Coord::To_Cell( /*0x54b44b*/
                                                        (Coord *)&stru_87F5F0.__pad_58[416],
                                                        &v4->__pad_39[3]);
      LOBYTE(v4->DestinationCoords[2]) = 1; /*0x54b451*/
      result = *(_DWORD *)&v4->IsMoving; /*0x54b455*/
      if ( result == 4 ) /*0x54b45b*/
      {
        *(_DWORD *)&v4->IsMoving = 1; /*0x54b45d*/
        *(_DWORD *)&v4->__pad_74[8] = v4->Height; /*0x54b467*/
        v4->?->? = 0; /*0x54b46d*/
        result = (*((int (__thiscall **)(FootClass *))v4->?->TechnoClass + 97))(v4->?); /*0x54b479*/
        if ( result == 16 ) /*0x54b482*/
        {
          (*((void (__thiscall **)(FootClass *, int, int))v4->?->TechnoClass + 122))(v4->?, 5, 1); /*0x54b48d*/
          v4->?->? = 1; /*0x54b496*/
          result = (*((int (__thiscall **)(FootClass *))v4->?->TechnoClass + 128))(v4->?); /*0x54b4a2*/
          if ( (_BYTE)result ) /*0x54b4aa*/
            return (*((int (__thiscall **)(FootClass *))v4->?->TechnoClass + 123))(v4->?); /*0x54b4b1*/
        }
      }
    }
  }
  return result; /*0x54b4b7*/
}



// ==== 0x0054B4D0  JumpjetLocomotionClass::MoveToDestination  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::MoveToDestination(JumpjetLocomotionClass *this)
{
  int result; // eax
  JumpjetLocomotionClass *v2; // edi
  char *v3; // ebp
  FootClass *Owner; // esi
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  int *v9; // ecx
  int v10; // [esp-2Ch] [ebp-50h]
  __int16 v11[2]; // [esp+Ch] [ebp-18h] BYREF
  JumpjetLocomotionClass *v12; // [esp+10h] [ebp-14h] BYREF
  int v13; // [esp+14h] [ebp-10h] BYREF
  int v14; // [esp+18h] [ebp-Ch] BYREF
  int v15; // [esp+1Ch] [ebp-8h]
  int GroundHeight; // [esp+20h] [ebp-4h]

  result = dword_A8E7AC; /*0x54b4d0*/
  if ( !dword_A8E7AC ) /*0x54b4dd*/
  {
    v2 = this; /*0x54b4e3*/
    result = LOBYTE(this->DestinationCoords[2]); /*0x54b4e7*/
    if ( (_BYTE)result ) /*0x54b4ec*/
    {
      v3 = &this->__pad_39[3]; /*0x54b4fb*/
      if ( (*(_DWORD *)&this->__pad_39[3] != dword_ABC5A8 /*0x54b521*/
         || this->DestinationCoords[0] != dword_ABC5AC
         || this->DestinationCoords[1] != dword_ABC5B0)
        && *(_DWORD *)&this->IsMoving
        && this->__pad_89[3] )
      {
        (*((void (__thiscall **)(FootClass *, char *))this->?->TechnoClass + 61))(this->?, &this->__pad_39[3]); /*0x54b531*/
        v2->__pad_89[3] = 0; /*0x54b537*/
      }
      Owner = v2->?; /*0x54b541*/
      v5 = Owner->?[0]; /*0x54b54f*/
      v6 = Owner->?[1]; /*0x54b551*/
      GroundHeight = Owner->?[2]; /*0x54b557*/
      LOWORD(this) = v5 / 256; /*0x54b567*/
      HIWORD(this) = v6 / 256; /*0x54b57e*/
      v12 = this; /*0x54b587*/
      this = 0; /*0x54b59b*/
      v10 = *(_DWORD *)((*((int (__thiscall **)(FootClass *))Owner->TechnoClass + 33))(Owner) + 1460); /*0x54b5be*/
      v7 = (*((int (__thiscall **)(FootClass *))Owner->TechnoClass + 33))(Owner); /*0x54b5c3*/
      v8 = *LayerClass::Pathfinding_Find( /*0x54b5e4*/
              &stru_87F5F0.__pad_58[416],
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
              (__int16 *)&this,
              0,
              0);
      *(_DWORD *)v11 = v8; /*0x54b5ed*/
      if ( v8 == dword_ABC588 ) /*0x54b5f6*/
      {
        v9 = (int *)v2->?; /*0x54b68f*/
        result = (int)(v9 + 27); /*0x54b695*/
        if ( v9[27] > 0 ) /*0x54b69a*/
        {
          (*(void (__stdcall **)(int *, _DWORD, _DWORD, _DWORD, int, int, _DWORD))(*v9 + 364))( /*0x54b6b6*/
            v9 + 27,
            0,
            *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4008),
            0,
            1,
            1,
            0);
          result = dword_ABC5A8; /*0x54b6bc*/
          *(_DWORD *)v3 = dword_ABC5A8; /*0x54b6c1*/
          v2->DestinationCoords[0] = dword_ABC5AC; /*0x54b6ca*/
          v2->DestinationCoords[1] = dword_ABC5B0; /*0x54b6d3*/
        }
      }
      else
      {
        v14 = ((__int16)v8 << 8) + 128; /*0x54b61e*/
        v15 = (SHIWORD(v8) << 8) + 128; /*0x54b626*/
        GroundHeight = 0; /*0x54b630*/
        GroundHeight = Cell::GetGroundHeight(&v14); /*0x54b643*/
        if ( (*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v11) + 80) & 0x100) != 0 ) /*0x54b655*/
          GroundHeight += dword_ABC5DC; /*0x54b663*/
        return (*(int (__stdcall **)(JumpjetLocomotionClass *, int, int, int))(v2->LocomotionClass[0] + 68))( /*0x54b683*/
                 v2,
                 v14,
                 v15,
                 GroundHeight);
      }
    }
  }
  return result; /*0x54b686*/
}



// ==== 0x0054B6E0  JumpjetLocomotionClass::SynchronizeFacingDirection_0  this=JumpjetLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::SynchronizeFacingDirection_0(JumpjetLocomotionClass *this, int a2)
{
  return FacingClass::Set_SyncLog((char *)this->?->?, &a2); /*0x54b6ff*/
}



// ==== 0x0054B710  JumpjetLocomotionClass::GetClassIdentifier  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::GetClassIdentifier(JumpjetLocomotionClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x54b716*/
    return -2147467261; /*0x54b718*/
  *(IID *)a2 = g_CLSID_JumpjetLocomotion; /*0x54b726*/
  a2[3] = unk_7E9ACC; /*0x54b740*/
  return 0; /*0x54b71d*/
}



// ==== 0x0054B750  JumpjetLocomotionClass::InitClass  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::InitClass(JumpjetLocomotionClass *this, int *pStm)
{
  int *v2; // edi
  int v3; // ebx
  ILocomotion *Piggybackee; // eax
  LPVOID *p_Piggybackee; // esi

  v2 = pStm; /*0x54b757*/
  v3 = SwizzleManager::SaveLoad(this->LocomotionClass, pStm); /*0x54b762*/
  if ( v3 < 0 ) /*0x54b766*/
    return v3; /*0x54b766*/
  if ( this ) /*0x54b76a*/
  {
    this->Piggybackee = 0; /*0x54b76c*/
    this->LocomotionClass[0] = (int)&JumpjetLocomotionClass::`vftable'; /*0x54b776*/
    this->LocomotionClass[1] = (int)&JumpjetLocomotionClass::`vftable'; /*0x54b77c*/
    this->TurnRate = (int)&JumpjetLocomotionClass::`vftable'; /*0x54b783*/
  }
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(*v2 + 12))(v2, &pStm, 1, 0); /*0x54b796*/
  if ( !(_BYTE)pStm ) /*0x54b79f*/
    return v3; /*0x54b7d1*/
  Piggybackee = this->Piggybackee; /*0x54b7a1*/
  p_Piggybackee = (LPVOID *)&this->Piggybackee; /*0x54b7a7*/
  if ( Piggybackee ) /*0x54b7af*/
    (*(void (__stdcall **)(ILocomotion *))(*(_DWORD *)Piggybackee + 8))(Piggybackee); /*0x54b7b4*/
  *p_Piggybackee = 0; /*0x54b7be*/
  return OleLoadFromStream((LPSTREAM)v2, &IID_ILocomotion, p_Piggybackee); /*0x54b7ca*/
}



// ==== 0x0054B7E0  JumpjetLocomotionClass::LoadFromStream  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::LoadFromStream(JumpjetLocomotionClass *this, int *pPStm, int a3)
{
  IStream *v3; // esi
  JumpjetLocomotionClass *v4; // edi
  int IPersistStream; // ebx
  int v6; // ecx
  ILocomotion *Piggybackee; // eax
  int v8; // edi
  JumpjetLocomotionClass *v9; // ebx
  HRESULT v10; // esi
  int v12; // edx

  v3 = (IStream *)pPStm; /*0x54b7e6*/
  v4 = this; /*0x54b7eb*/
  IPersistStream = LoadIPersistStream((LocomotionClass *)this, pPStm, a3); /*0x54b7f7*/
  if ( IPersistStream < 0 ) /*0x54b7fb*/
    return IPersistStream; /*0x54b7fb*/
  if ( !v4->Piggybackee ) /*0x54b809*/
  {
    v12 = *(_DWORD *)v3->__pad_0; /*0x54b8a9*/
    LOBYTE(a3) = 0; /*0x54b8b5*/
    (*(void (__stdcall **)(IStream *, int *, int, _DWORD))(v12 + 16))(v3, &a3, 1, 0); /*0x54b8ba*/
    return IPersistStream; /*0x54b8be*/
  }
  v6 = *(_DWORD *)v3->__pad_0; /*0x54b80f*/
  LOBYTE(a3) = 1; /*0x54b81b*/
  (*(void (__stdcall **)(IStream *, int *, int, _DWORD))(v6 + 16))(v3, &a3, 1, 0); /*0x54b820*/
  Piggybackee = v4->Piggybackee; /*0x54b823*/
  pPStm = 0; /*0x54b829*/
  if ( Piggybackee ) /*0x54b833*/
  {
    v8 = (**(int (__stdcall ***)(ILocomotion *, void *, JumpjetLocomotionClass **))Piggybackee)( /*0x54b844*/
           Piggybackee,
           &unk_820270,
           &this);
    if ( v8 >= 0 ) /*0x54b848*/
    {
      v9 = this; /*0x54b861*/
      if ( pPStm ) /*0x54b867*/
        (*(void (__stdcall **)(int *))(*pPStm + 8))(pPStm); /*0x54b86c*/
      pPStm = (int *)v9; /*0x54b86f*/
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
int __stdcall JumpjetLocomotionClass::ConvertCoordToCell_0(JumpjetLocomotionClass *this)
{
  int v1; // edi
  FootClass *Owner; // eax
  int *location; // eax
  _DWORD v5[3]; // [esp+8h] [ebp-Ch] BYREF

  v1 = (*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 114))(this->?); /*0x54b8e4*/
  Owner = this->?; /*0x54b8e6*/
  if ( !Owner->? ) /*0x54b8e9*/
  {
    location = Owner->?; /*0x54b8f3*/
    v5[0] = *location; /*0x54b8fa*/
    v5[1] = location[1]; /*0x54b906*/
    v5[2] = location[2]; /*0x54b912*/
    if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v5)->flags[0] & 0x100) != 0 /*0x54b932*/
      && v1 >= dword_ABC5DC
      && !this->?->? )
    {
      v1 -= dword_ABC5DC; /*0x54b93c*/
    }
  }
  if ( !(*((unsigned __int8 (__thiscall **)(FootClass *))this->?->TechnoClass + 21))(this->?) ) /*0x54b943*/
    return 2; /*0x54b94b*/
  if ( v1 ) /*0x54b959*/
    return (v1 >= this->Height) + 3; /*0x54b973*/
  return 2; /*0x54b94a*/
}



// ==== 0x0054B980  HouseClass::Set  this=HouseClass  sig=csp ====
char __thiscall HouseClass::Set(HouseClass *this)
{
  _DWORD *v2; // eax
  _DWORD *Value; // eax
  int v4; // ecx
  int v6; // [esp+Ch] [ebp-4h] BYREF

  LOBYTE(v2) = (*((int (__stdcall **)(void **))this->? + 4))(&this->?); /*0x54b98b*/
  if ( (_BYTE)v2 ) /*0x54b990*/
  {
    (*(void (__thiscall **)(void *, _DWORD, int))(*(_DWORD *)this->? + 1348))(this->?, 0, 1072693248); /*0x54b9a4*/
    Value = ProgressTimer::GetValue((ProgressTimer *)((char *)this->? + 904), &v6); /*0x54b9b8*/
    FacingClass::Set_SyncLog((char *)&this->repairStationsCount, Value); /*0x54b9c1*/
    v4 = this->relatedTags[0]; /*0x54b9c6*/
    this->absorbersCapacity = 0; /*0x54b9cc*/
    this->bunkersCount = 0; /*0x54b9cf*/
    this->bunkers[0] = 0; /*0x54b9d2*/
    this->bunkersCapacity = 0; /*0x54b9d5*/
    this->occupiables[0] = v4; /*0x54b9d8*/
    LOBYTE(v2) = HouseClass::IonSensitivesShouldBeOffline(); /*0x54b9e4*/
    if ( !(_BYTE)v2 ) /*0x54b9ec*/
    {
      v2 = (_DWORD *)(*(int (__thiscall **)(void *, int *))(*(_DWORD *)this->? + 756))(this->?, &v6); /*0x54b9f8*/
      if ( *v2 == dword_ABC588 ) /*0x54ba08*/
        LOBYTE(v2) = GadgetGrid::InsertItem((GadgetGrid *)&g_CellClassManager, (int)this->?); /*0x54ba20*/
      this->unitRepairStations[0] = 1; /*0x54ba25*/
    }
  }
  return (char)v2; /*0x54ba2c*/
}



// ==== 0x0054BA30  ObjectClass::UpdateFootMovement  this=ObjectClass  sig=csp ====
double __usercall UpdateFootMovement@<st0>(ObjectClass *this, double result@<st0>)
{
  int v2; // ecx
  int v4; // edi
  int v5; // eax
  int *v6; // eax
  int v7; // eax
  int v8; // ecx
  unsigned int v9; // edi
  Cell *v10; // eax
  int v11; // ebx
  void *NeighbourContent; // eax
  _BYTE *v13; // ecx
  CellClass *v14; // eax
  _BYTE *v15; // ecx
  char v16; // bl
  int v17; // eax
  int *v18; // ecx
  int v20; // edx
  int Member; // eax
  int v22; // edi
  _BYTE *v23; // eax
  int v24; // eax
  _BYTE *v25; // ecx
  char v26; // bl
  int v27; // eax
  double v28; // [esp+4h] [ebp-34h]
  double v29; // [esp+Ch] [ebp-2Ch]
  int v30; // [esp+14h] [ebp-24h]
  __int16 v31[2]; // [esp+20h] [ebp-18h] BYREF
  int v32; // [esp+24h] [ebp-14h] BYREF
  int v33; // [esp+28h] [ebp-10h] BYREF
  int v34; // [esp+2Ch] [ebp-Ch] BYREF
  int v35; // [esp+30h] [ebp-8h]
  int v36; // [esp+34h] [ebp-4h]

  _ESI = v2; /*0x54ba35*/
  v4 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v2 + 12) + 456))(*(_DWORD *)(v2 + 12)); /*0x54ba43*/
  v5 = *(_DWORD *)(_ESI + 12); /*0x54ba45*/
  if ( !*(_BYTE *)(v5 + 140) ) /*0x54ba48*/
  {
    v6 = (int *)(v5 + 156); /*0x54ba52*/
    v34 = *v6; /*0x54ba59*/
    v35 = v6[1]; /*0x54ba65*/
    v36 = v6[2]; /*0x54ba71*/
    if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v34)->flags[0] & 0x100) != 0 && v4 >= dword_ABC5DC ) /*0x54ba8c*/
      v4 -= dword_ABC5DC; /*0x54ba8e*/
  }
  v7 = *(_DWORD *)(*(int (__thiscall **)(_DWORD, int *))(**(_DWORD **)(_ESI + 12) + 440))(*(_DWORD *)(_ESI + 12), &v33); /*0x54baa0*/
  v8 = *(_DWORD *)(_ESI + 12); /*0x54baa2*/
  *(_DWORD *)v31 = v7; /*0x54baa5*/
  if ( (_WORD)v7 != *(_WORD *)(v8 + 1376) || v31[1] != *(_WORD *)(v8 + 1378) ) /*0x54babe*/
    Coord::ToGridIndex((char *)&g_CellClassManager, v8, *(_DWORD *)(v8 + 1376), v7); /*0x54bace*/
  if ( v4 < *(_DWORD *)(_ESI + 128) ) /*0x54bade*/
  {
    if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(_ESI + 12) + 44))(*(_DWORD *)(_ESI + 12)) == 1 /*0x54bba2*/
      && *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(_ESI + 12) + 132))(*(_DWORD *)(_ESI + 12)) + 3434) )
    {
      v17 = *(_DWORD *)(_ESI + 128) / 2; /*0x54bbb5*/
    }
    else
    {
      v17 = *(_DWORD *)(_ESI + 128) / 4; /*0x54bbc5*/
    }
    if ( v4 > v17 ) /*0x54bbca*/
    {
      __asm { fild dword ptr [esi+20h] } /*0x54bbd0*/
      v18 = (int *)(*(_DWORD *)(_ESI + 12) + 156); /*0x54bbd6*/
      __asm { fstp qword ptr [esi+78h] } /*0x54bbdc*/
      *(double *)(_ESI + 120) = _RT1; /*0x54bbdc*/
      v34 = *v18; /*0x54bbe1*/
      v20 = v18[1]; /*0x54bbe5*/
      v35 = v20; /*0x54bbe8*/
      v36 = v18[2]; /*0x54bbef*/
      v33 = *(_DWORD *)(_ESI + 64); /*0x54bbf8*/
      if ( v34 == v33 && v20 == *(_DWORD *)(_ESI + 68) ) /*0x54bc01*/
        LOWORD(v32) = 0; /*0x54bc03*/
      __asm { fild [esp+24h+var_10] } /*0x54bc0a*/
      __asm
      {
        fisub [esp+34h+var_C]
        fstp [esp+34h+var_30+4]; double
        fild [esp+34h+var_8]
        fisub dword ptr [esi+44h]
        fstp [esp+34h+var_38+4]; double
      }
      Math::CalcAngle(v28, v29); /*0x54bc26*/
      __asm { fsub ds:dbl_7E2820 } /*0x54bc2b*/
      __asm { fmul ds:dbl_7E2818 }
      LOWORD(v33) = Math::RoundToInt(result); /*0x54bc3f*/
      v32 = v33; /*0x54bc50*/
      FacingClass::Update((char *)(_ESI + 84), &v32); /*0x54bc54*/
      Member = Team::GetMember(*(Team **)(_ESI + 12), 0); /*0x54bc5e*/
      v22 = Member; /*0x54bc63*/
      if ( Member ) /*0x54bc67*/
      {
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)Member + 44))(Member) == 6 ) /*0x54bc73*/
        {
          v23 = *(_BYTE **)(v22 + 1312); /*0x54bc75*/
          if ( v23[5821] || v23[5860] || v23[5861] || v23[5862] ) /*0x54bc99*/
            (**(void (__thiscall ***)(int, int, _DWORD))(*(_DWORD *)(_ESI + 12) + 8))( /*0x54bcb3*/
              *(_DWORD *)(_ESI + 12) + 8,
              4475,
              0);
        }
      }
      if ( *(_DWORD *)v31 == __PAIR32__(*(_DWORD *)(_ESI + 68) / 256, *(_DWORD *)(_ESI + 64) / 256) /*0x54bcee*/
        && !*(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(_ESI + 12) + 132))(*(_DWORD *)(_ESI + 12)) + 3434) )
      {
        v24 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(_ESI + 12) + 456))(*(_DWORD *)(_ESI + 12)); /*0x54bcfd*/
        v25 = *(_BYTE **)(_ESI + 12); /*0x54bd03*/
        *(_DWORD *)(_ESI + 128) = v24; /*0x54bd06*/
        v26 = v25[116]; /*0x54bd10*/
        (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)v25 + 292))(v25, 0); /*0x54bd13*/
        v27 = *(_DWORD *)(_ESI + 12); /*0x54bd19*/
        *(_DWORD *)(_ESI + 80) = 3; /*0x54bd1c*/
        *(_BYTE *)(v27 + 116) = v26; /*0x54bd23*/
      }
    }
  }
  else if ( (unsigned __int8)ObjectClass::HasLinkedObject(*(_DWORD *)(_ESI + 12)) ) /*0x54baea*/
  {
    v9 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 7); /*0x54bb08*/
    v10 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v31); /*0x54bb14*/
    v11 = **(_DWORD **)(_ESI + 12); /*0x54bb1f*/
    NeighbourContent = Cell::GetNeighbourContent(v10, v9); /*0x54bb23*/
    (*(void (__thiscall **)(_DWORD, void *, int))(v11 + 1152))(*(_DWORD *)(_ESI + 12), NeighbourContent, 1); /*0x54bb2c*/
    v13 = *(_BYTE **)(_ESI + 12); /*0x54bb32*/
    LOBYTE(v11) = v13[116]; /*0x54bb39*/
    (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)v13 + 292))(v13, 0); /*0x54bb3c*/
    *(_BYTE *)(*(_DWORD *)(_ESI + 12) + 116) = v11; /*0x54bb46*/
    *(_DWORD *)(_ESI + 80) = 3; /*0x54bb49*/
  }
  else
  {
    v14 = (CellClass *)(*(int (__stdcall **)(_DWORD))(**(_DWORD **)(_ESI + 12) + 444))(*(_DWORD *)(_ESI + 12)); /*0x54bb5c*/
    CellClass::AttachObject(v14, v30); /*0x54bb64*/
    v15 = *(_BYTE **)(_ESI + 12); /*0x54bb69*/
    v16 = v15[116]; /*0x54bb70*/
    (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)v15 + 292))(v15, 0); /*0x54bb73*/
    *(_BYTE *)(*(_DWORD *)(_ESI + 12) + 116) = v16; /*0x54bb7d*/
    *(_DWORD *)(_ESI + 80) = 2; /*0x54bb80*/
  }
  return result; /*0x54bb45*/
}



// ==== 0x0054BD30  ObjectClass::UpdateFootMoveToState  this=ObjectClass  sig=csp ====
double __usercall UpdateFootMoveToState@<st0>(ObjectClass *this, double result@<st0>)
{
  int v2; // ecx
  int v3; // esi
  int *v4; // ecx
  int v5; // edx
  _DWORD *v6; // edi
  int *v7; // eax
  int v8; // ebx
  _BYTE *v9; // ecx
  char v10; // bl
  _DWORD *v11; // ecx
  _BYTE *v12; // ecx
  char v13; // bl
  _DWORD *v14; // ecx
  CellClass *v15; // eax
  _DWORD *v16; // ecx
  int v17; // edx
  int v18; // edi
  int v19; // eax
  int v20; // eax
  bool v21; // zf
  int v22; // edi
  CellClass *v23; // eax
  CellClass *v24; // eax
  _BYTE *v25; // ecx
  char v26; // bl
  int v27; // [esp+14h] [ebp-2Ch]
  int v28; // [esp+20h] [ebp-20h] BYREF
  int v29; // [esp+24h] [ebp-1Ch]
  int v30; // [esp+28h] [ebp-18h]
  int v31; // [esp+2Ch] [ebp-14h]
  int v32; // [esp+30h] [ebp-10h]
  int v33; // [esp+38h] [ebp-8h]
  int v34; // [esp+3Ch] [ebp-4h]

  v3 = v2; /*0x54bd35*/
  if ( (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)(v2 + 4) + 16))(v2 + 4) ) /*0x54bd3f*/
  {
    v4 = (int *)(v3 + 64); /*0x54bd4a*/
    v5 = *(_DWORD *)(v3 + 64); /*0x54bd50*/
    v33 = *(_DWORD *)(v3 + 68); /*0x54bd55*/
    v6 = *(_DWORD **)(v3 + 12); /*0x54bd59*/
    v34 = *(_DWORD *)(v3 + 72); /*0x54bd5f*/
    v7 = v6 + 39; /*0x54bd63*/
    v30 = v6[39]; /*0x54bd6e*/
    v8 = v6[40]; /*0x54bd72*/
    v32 = v6[41]; /*0x54bd78*/
    if ( v5 == v30 && v33 == v8 ) /*0x54bd8d*/
    {
      if ( v6[173] ) /*0x54bd93*/
        return result; /*0x54bd9b*/
      if ( v6 /*0x54bdd0*/
        && (*(int (__thiscall **)(_DWORD *))(*v6 + 44))(v6) == 1
        && *(_BYTE *)(v6[433] + 3603)
        && !*(_BYTE *)(*(_DWORD *)(v3 + 12) + 1709) )
      {
        if ( *(_BYTE *)((*(int (__usercall **)@<eax>(_DWORD *@<ecx>, double@<st0>))(*v6 + 132))(v6, result) + 1709) ) /*0x54bde8*/
        {
          if ( !*((_BYTE *)v6 + 308) ) /*0x54bdf2*/
          {
            v9 = *(_BYTE **)(v3 + 12); /*0x54bdfc*/
            if ( !v9[1709] ) /*0x54bdff*/
            {
              *(_DWORD *)(v3 + 128) = *(_DWORD *)(v3 + 44); /*0x54be0e*/
              v10 = v9[116]; /*0x54be16*/
              (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)v9 + 292))(v9, 0); /*0x54be19*/
              *(_BYTE *)(*(_DWORD *)(v3 + 12) + 116) = v10; /*0x54be22*/
              v11 = *(_DWORD **)(v3 + 12); /*0x54be25*/
              *(_DWORD *)(v3 + 80) = 2; /*0x54be28*/
              BuildingClass::GetType_Thunk(v11); /*0x54be2f*/
              return result; /*0x54be3a*/
            }
          }
        }
        v28 = *(_DWORD *)(v3 + 12); /*0x54be40*/
        if ( *(_DWORD *)((*(int (**)(void))(*(_DWORD *)v28 + 444))() + 224) != v28 ) /*0x54be52*/
          goto LABEL_19; /*0x54be52*/
      }
      else
      {
        if ( *(_BYTE *)((*(int (__usercall **)@<eax>(_DWORD@<ecx>, double@<st0>))(**(_DWORD **)(v3 + 12) + 132))( /*0x54be6d*/
                          *(_DWORD *)(v3 + 12),
                          result)
                      + 3434) )
        {
          v12 = *(_BYTE **)(v3 + 12); /*0x54be77*/
          v13 = v12[116]; /*0x54be7e*/
          (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)v12 + 292))(v12, 0); /*0x54be81*/
          *(_BYTE *)(*(_DWORD *)(v3 + 12) + 116) = v13; /*0x54be8a*/
          v14 = *(_DWORD **)(v3 + 12); /*0x54be8d*/
          *(_DWORD *)(v3 + 80) = 2; /*0x54be90*/
          BuildingClass::GetType_Thunk(v14); /*0x54be97*/
          return result; /*0x54bea2*/
        }
        v28 = *(_DWORD *)(v3 + 12); /*0x54bea8*/
        if ( *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)v28 + 444))(v28) + 224) != v28 ) /*0x54bebc*/
          goto LABEL_19; /*0x54bebc*/
      }
      v15 = (CellClass *)(*(int (__thiscall **)(int))(*(_DWORD *)v28 + 444))(v28); /*0x54bec4*/
      CellClass::AttachObject(v15, 0); /*0x54becc*/
LABEL_19:
      v16 = *(_DWORD **)(v3 + 12); /*0x54bed1*/
      *(_DWORD *)(v3 + 80) = 4; /*0x54bed4*/
      BuildingClass::GetType_Thunk(v16); /*0x54bedb*/
      return result; /*0x54bee6*/
    }
    v17 = *v7; /*0x54bee7*/
    v18 = v6[40]; /*0x54bee9*/
    v19 = v7[2]; /*0x54beec*/
    v30 = v17; /*0x54beef*/
    v32 = v19; /*0x54bef3*/
    v20 = *v4; /*0x54bef7*/
    v21 = v17 == *v4; /*0x54bef9*/
    v31 = v18; /*0x54befb*/
    v29 = v20; /*0x54beff*/
    if ( v21 && v18 == *(_DWORD *)(v3 + 68) ) /*0x54bf08*/
      LOWORD(v28) = 0; /*0x54bf0a*/
    Math::CalcAngle((double)v31 - (double)*(int *)(v3 + 68), (double)v29 - (double)v30); /*0x54bf2d*/
    result = (result - 1.570796326794897) * -10430.06004058427; /*0x54bf3b*/
    LOWORD(v29) = Math::RoundToInt(result); /*0x54bf46*/
    v28 = v29; /*0x54bf53*/
    FacingClass::Update((char *)(v3 + 84), &v28); /*0x54bf5b*/
    if ( !*(_DWORD *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v3 + 12) + 444))(*(_DWORD *)(v3 + 12)) + 224) ) /*0x54bf6b*/
    {
      v22 = *(_DWORD *)(v3 + 12); /*0x54bf75*/
      if ( *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)(v22 + 1376)) + 56) == v22 ) /*0x54bf91*/
      {
        v23 = (CellClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)(v22 + 1376)); /*0x54bfa1*/
        CellClass::AttachObject(v23, 0); /*0x54bfa8*/
      }
    }
    v24 = (CellClass *)(*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(v3 + 12) + 444))(*(_DWORD *)(v3 + 12), 0); /*0x54bfb4*/
    CellClass::AttachObject(v24, v27); /*0x54bfbc*/
    v25 = *(_BYTE **)(v3 + 12); /*0x54bfc1*/
    v26 = v25[116]; /*0x54bfc8*/
    (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)v25 + 292))(v25, 0); /*0x54bfcb*/
    *(_BYTE *)(*(_DWORD *)(v3 + 12) + 116) = v26; /*0x54bfd4*/
    *(_DWORD *)(v3 + 80) = 3; /*0x54bfd7*/
  }
  return result; /*0x54be34*/
}



// ==== 0x0054BFF0  MovementClass::CalcSpeed  this=MovementClass  sig=csp ====
int __usercall MovementClass::CalcSpeed@<eax>(MovementClass *this, double a2@<st0>)
{
  int v2; // ecx
  int v3; // esi
  _DWORD *v4; // ecx
  int v5; // eax
  int v6; // ecx
  double v7; // st7
  unsigned int v8; // ebp
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // edi
  int v13; // ebx
  _DWORD *v14; // edi
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  char v18; // bl
  int v19; // eax
  TechnoClass *v20; // eax
  unsigned int v21; // ebx
  Cell *v22; // eax
  int v23; // ebp
  void *v24; // eax
  CellClass *v25; // eax
  _BYTE *v26; // ecx
  char v27; // bl
  _DWORD *v28; // ecx
  _DWORD *v29; // ecx
  unsigned int v30; // ebx
  Cell *v31; // eax
  int v32; // ebp
  void *NeighbourContent; // eax
  CellClass *v34; // eax
  _BYTE *v35; // ecx
  char v36; // bl
  int v37; // edi
  int v38; // edx
  int v39; // edx
  double v40; // st7
  int v41; // ecx
  int v42; // eax
  double v43; // st7
  double v44; // st7
  CellClass *v45; // eax
  int result; // eax
  int v47; // [esp+14h] [ebp-38h]
  char v48; // [esp+2Bh] [ebp-21h]
  int v49; // [esp+2Ch] [ebp-20h]
  _DWORD *v50; // [esp+2Ch] [ebp-20h]
  __int16 v51[2]; // [esp+30h] [ebp-1Ch] BYREF
  _WORD v52[2]; // [esp+34h] [ebp-18h] BYREF
  _DWORD v53[2]; // [esp+38h] [ebp-14h] BYREF
  int v54; // [esp+40h] [ebp-Ch] BYREF
  int v55; // [esp+44h] [ebp-8h]
  int v56; // [esp+48h] [ebp-4h]

  v3 = v2; /*0x54bffc*/
  v4 = *(_DWORD **)(v2 + 12); /*0x54bfff*/
  v54 = v4[39]; /*0x54c00e*/
  v55 = v4[40]; /*0x54c015*/
  v56 = v4[41]; /*0x54c01c*/
  v5 = *(_DWORD *)(*(int (__thiscall **)(_DWORD *, _DWORD *))(*v4 + 440))(v4, v53); /*0x54c02d*/
  v6 = *(_DWORD *)(v3 + 12); /*0x54c02f*/
  *(_DWORD *)v51 = v5; /*0x54c032*/
  if ( (_WORD)v5 != *(_WORD *)(v6 + 1376) || v51[1] != *(_WORD *)(v6 + 1378) ) /*0x54c04b*/
    Coord::ToGridIndex((char *)&g_CellClassManager, v6, *(_DWORD *)(v6 + 1376), v5); /*0x54c05b*/
  v49 = *(_DWORD *)(v3 + 64); /*0x54c069*/
  if ( v54 == v49 && v55 == *(_DWORD *)(v3 + 68) ) /*0x54c078*/
    v52[0] = 0; /*0x54c07a*/
  Math::CalcAngle((double)v55 - (double)*(int *)(v3 + 68), (double)v49 - (double)v54); /*0x54c09d*/
  v7 = (a2 - 1.570796326794897) * -10430.06004058427; /*0x54c0ab*/
  v52[0] = Math::RoundToInt(v7); /*0x54c0b6*/
  FacingClass::Update((char *)(v3 + 84), v52); /*0x54c0cd*/
  v8 = *MovementClass::CompareAbsCoords((MovementClass *)(v3 + 84), v53); /*0x54c0e1*/
  v9 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v3 + 12) + 132))(*(_DWORD *)(v3 + 12)); /*0x54c0e5*/
  v10 = *(_DWORD *)(v3 + 68); /*0x54c0f5*/
  v48 = *(_BYTE *)(v9 + 3434); /*0x54c0f8*/
  v53[0] = v54 - *(_DWORD *)(v3 + 64); /*0x54c10a*/
  v53[1] = v55 - v10; /*0x54c10e*/
  Math::Sqrt((double)v53[0] * (double)v53[0] + (double)(v55 - v10) * (double)(v55 - v10)); /*0x54c12b*/
  LOWORD(v11) = Math::RoundToInt(v7); /*0x54c133*/
  v12 = *(_DWORD *)(v3 + 12); /*0x54c138*/
  v13 = v11; /*0x54c13f*/
  if ( v12 )
  {
    v50 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v12 + 44))(*(_DWORD *)(v3 + 12)) == 1 ? (_DWORD *)v12 : 0;
    v14 = v50; /*0x54c161*/
  }
  else
  {
    v14 = 0; /*0x54c143*/
    v50 = 0; /*0x54c145*/
  }
  if ( v13 >= 20 ) /*0x54c166*/
  {
    v53[0] = *(_DWORD *)(v3 + 32); /*0x54c387*/
    v37 = v53[0]; /*0x54c382*/
    if ( v13 >= v53[0] ) /*0x54c38b*/
    {
      if ( v13 >= 2 * v53[0] ) /*0x54c3ca*/
      {
        if ( v13 >= 50 * v53[0] / *(_DWORD *)(v3 + 28) ) /*0x54c462*/
        {
          v44 = (double)v53[0]; /*0x54c4e9*/
          *(_DWORD *)(v3 + 128) = *(_DWORD *)(v3 + 44); /*0x54c4f0*/
          *(double *)(v3 + 120) = v44; /*0x54c4f6*/
        }
        else
        {
          v41 = *(_DWORD *)(v3 + 12); /*0x54c46a*/
          v53[0] /= 2; /*0x54c472*/
          *(double *)(v3 + 120) = (double)(v37 / 2); /*0x54c47a*/
          if ( !*(_DWORD *)(v41 + 692) ) /*0x54c47d*/
          {
            LOWORD(v42) = Math::RoundToInt((double)*(int *)(v3 + 44) * 0.75); /*0x54c490*/
            *(_DWORD *)(v3 + 128) = v42; /*0x54c495*/
          }
          if ( (unsigned __int8)(((v8 >> 7) + 1) >> 1) > 5 * *(_DWORD *)(v3 + 28) ) /*0x54c4af*/
          {
            v53[0] = v37 / 5; /*0x54c4c1*/
            v43 = (double)(v37 / 5); /*0x54c4c5*/
            *(double *)(v3 + 120) = v43; /*0x54c4c9*/
            if ( v43 < 1.0 ) /*0x54c4d7*/
            {
              *(_DWORD *)(v3 + 120) = 0; /*0x54c4d9*/
              *(_DWORD *)(v3 + 124) = 1072693248; /*0x54c4e0*/
            }
          }
        }
      }
      else
      {
        v39 = *(_DWORD *)(v3 + 12); /*0x54c3d8*/
        v53[0] /= 4; /*0x54c3de*/
        *(double *)(v3 + 120) = (double)(v37 / 4); /*0x54c3e6*/
        if ( !*(_DWORD *)(v39 + 692) ) /*0x54c3e9*/
          *(_DWORD *)(v3 + 128) = *(_DWORD *)(v3 + 44) / 2; /*0x54c3f9*/
        if ( (unsigned __int8)(((v8 >> 7) + 1) >> 1) > *(int *)(v3 + 28) ) /*0x54c410*/
        {
          v53[0] = v37 / 10; /*0x54c427*/
          v40 = (double)(v37 / 10); /*0x54c42b*/
          *(double *)(v3 + 120) = v40; /*0x54c42f*/
          if ( v40 < 1.0 ) /*0x54c43d*/
          {
            *(_DWORD *)(v3 + 120) = 0; /*0x54c443*/
            *(_DWORD *)(v3 + 124) = 1072693248; /*0x54c446*/
          }
        }
      }
    }
    else
    {
      v38 = *(_DWORD *)(v3 + 12); /*0x54c395*/
      v53[0] /= 8; /*0x54c39b*/
      *(double *)(v3 + 120) = (double)(v37 / 8); /*0x54c3a3*/
      if ( !*(_DWORD *)(v38 + 692) ) /*0x54c3a6*/
        *(_DWORD *)(v3 + 128) = *(_DWORD *)(v3 + 44) / 2; /*0x54c3ba*/
    }
    v14 = v50; /*0x54c4f9*/
  }
  else
  {
    v15 = *(_DWORD *)(v3 + 64); /*0x54c16c*/
    *(_DWORD *)(v3 + 112) = 0; /*0x54c16f*/
    *(_DWORD *)(v3 + 120) = 0; /*0x54c172*/
    *(_DWORD *)(v3 + 116) = 0; /*0x54c175*/
    *(_DWORD *)(v3 + 124) = 0; /*0x54c178*/
    v16 = *(_DWORD *)(v3 + 68); /*0x54c17b*/
    v54 = v15; /*0x54c17e*/
    v17 = *(_DWORD *)(v3 + 12); /*0x54c182*/
    v55 = v16; /*0x54c185*/
    v18 = *(_BYTE *)(v17 + 116); /*0x54c189*/
    *(_BYTE *)(v17 + 116) = 0; /*0x54c18c*/
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(v3 + 12) + 436))(*(_DWORD *)(v3 + 12), &v54); /*0x54c19a*/
    *(_BYTE *)(*(_DWORD *)(v3 + 12) + 116) = v18; /*0x54c1a3*/
    v19 = *(_DWORD *)(v3 + 12); /*0x54c1a6*/
    if ( *(_BYTE *)(v19 + 1709) ) /*0x54c1a9*/
    {
      *(_DWORD *)(v3 + 128) = 0; /*0x54c1b3*/
      v20 = *(TechnoClass **)(v19 + 688); /*0x54c1bd*/
      if ( v20 ) /*0x54c1c5*/
        TechnoClass::EjectPassengers(v20, 1); /*0x54c1cb*/
      *(_DWORD *)(v3 + 80) = 4; /*0x54c1d0*/
    }
    else if ( *(_DWORD *)(v19 + 692) || v48 ) /*0x54c1f0*/
    {
      if ( (unsigned __int8)ObjectClass::HasLinkedObject(*(_DWORD *)(v3 + 12)) ) /*0x54c300*/
      {
        v30 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 7); /*0x54c328*/
        v31 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v51); /*0x54c32a*/
        v32 = **(_DWORD **)(v3 + 12); /*0x54c335*/
        NeighbourContent = Cell::GetNeighbourContent(v31, v30); /*0x54c339*/
        (*(void (__thiscall **)(_DWORD, void *, int))(v32 + 1152))(*(_DWORD *)(v3 + 12), NeighbourContent, 1); /*0x54c342*/
      }
      else
      {
        v34 = (CellClass *)(*(int (__stdcall **)(_DWORD))(**(_DWORD **)(v3 + 12) + 444))(*(_DWORD *)(v3 + 12)); /*0x54c353*/
        CellClass::AttachObject(v34, v47); /*0x54c35b*/
        v35 = *(_BYTE **)(v3 + 12); /*0x54c360*/
        v36 = v35[116]; /*0x54c367*/
        (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)v35 + 292))(v35, 0); /*0x54c36a*/
        *(_BYTE *)(*(_DWORD *)(v3 + 12) + 116) = v36; /*0x54c373*/
        *(_DWORD *)(v3 + 80) = 2; /*0x54c376*/
      }
    }
    else if ( v14 /*0x54c22d*/
           && *(_BYTE *)(v14[433] + 3603)
           && *(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*v14 + 132))(v14) + 1709)
           && !*(_BYTE *)(*(_DWORD *)(v3 + 12) + 1709) )
    {
      if ( (unsigned __int8)ObjectClass::HasLinkedObject(*(_DWORD *)(v3 + 12)) ) /*0x54c241*/
      {
        v21 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 7); /*0x54c269*/
        v22 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v51); /*0x54c26b*/
        v23 = **(_DWORD **)(v3 + 12); /*0x54c276*/
        v24 = Cell::GetNeighbourContent(v22, v21); /*0x54c27a*/
        (*(void (__thiscall **)(_DWORD, void *, int))(v23 + 1152))(*(_DWORD *)(v3 + 12), v24, 1); /*0x54c283*/
        BuildingClass::GetType_Thunk(*(_DWORD **)(v3 + 12)); /*0x54c28c*/
      }
      else
      {
        v25 = (CellClass *)(*(int (__stdcall **)(_DWORD))(**(_DWORD **)(v3 + 12) + 444))(*(_DWORD *)(v3 + 12)); /*0x54c29c*/
        CellClass::AttachObject(v25, v47); /*0x54c2a4*/
        v26 = *(_BYTE **)(v3 + 12); /*0x54c2ac*/
        *(_DWORD *)(v3 + 128) = *(_DWORD *)(v3 + 44); /*0x54c2af*/
        v27 = v26[116]; /*0x54c2b9*/
        (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)v26 + 292))(v26, 0); /*0x54c2bc*/
        *(_BYTE *)(*(_DWORD *)(v3 + 12) + 116) = v27; /*0x54c2c5*/
        v28 = *(_DWORD **)(v3 + 12); /*0x54c2c8*/
        *(_DWORD *)(v3 + 80) = 2; /*0x54c2cb*/
        BuildingClass::GetType_Thunk(v28); /*0x54c2d2*/
      }
    }
    else
    {
      v29 = *(_DWORD **)(v3 + 12); /*0x54c2dc*/
      *(_DWORD *)(v3 + 128) = 0; /*0x54c2df*/
      *(_DWORD *)(v3 + 80) = 4; /*0x54c2e9*/
      BuildingClass::GetType_Thunk(v29); /*0x54c2f0*/
    }
  }
  v45 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], (_DWORD *)(v3 + 64)); /*0x54c506*/
  if ( v48 /*0x54c531*/
    || (result = v45->landType, result == 2)
    || result == 6
    || v14 && (result = (*(int (__thiscall **)(_DWORD *))(*v14 + 132))(v14), *(_BYTE *)(result + 1709)) )
  {
    result = *(_DWORD *)(v3 + 44); /*0x54c53b*/
    *(_DWORD *)(v3 + 128) = result; /*0x54c53e*/
  }
  return result; /*0x54c544*/
}



// ==== 0x0054C550  BuildingPlacement::ProcessBuildingPlacementAction  this=BuildingPlacement  sig=csp ====
char __thiscall BuildingPlacement::ProcessBuildingPlacementAction(BuildingPlacement *this)
{
  BuildingPlacement *v2; // ebp
  CellClass *v3; // eax
  int BuildingPlacement_field_0x0C; // ecx
  BuildingPlacement *v5; // edi
  int landType; // eax
  unsigned int v7; // edi
  Cell *v8; // eax
  int v9; // ebx
  void *NeighbourContent; // eax
  _BYTE *v11; // ecx
  CellClass *v12; // eax
  CellClass *v13; // eax
  _BYTE *v14; // ecx
  char v15; // bl
  int v16; // edx
  unsigned int v17; // ebx
  _DWORD *v18; // ecx
  int v19; // ecx
  _DWORD *v20; // edi
  int v21; // ebx
  _DWORD *Value; // eax
  __int16 v23; // cx
  __int16 v24; // dx
  int v25; // ecx
  int v26; // edi
  int *v27; // eax
  _BYTE *v28; // ecx
  int *v29; // eax
  int v30; // edi
  int *v31; // edx
  int v32; // ecx
  _BYTE *v33; // ecx
  _BYTE *v34; // ecx
  int v35; // eax
  int v36; // edi
  CellClass *v37; // eax
  int v38; // ecx
  CrateClass *v39; // eax
  int v40; // ecx
  int v41; // edi
  int v42; // eax
  int v44; // [esp+44h] [ebp-28h]
  int v45; // [esp+48h] [ebp-24h]
  char v46; // [esp+5Bh] [ebp-11h]
  int v47; // [esp+5Ch] [ebp-10h] BYREF
  int v48; // [esp+60h] [ebp-Ch] BYREF
  int v49; // [esp+64h] [ebp-8h]
  int v50; // [esp+68h] [ebp-4h]

  v2 = (BuildingPlacement *)((char *)this + 64); /*0x54c55e*/
  v3 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], (_DWORD *)this + 16); /*0x54c562*/
  BuildingPlacement_field_0x0C = this->BuildingPlacement_field_0x0C; /*0x54c567*/
  v5 = (BuildingPlacement *)v3; /*0x54c56a*/
  if ( !*(_BYTE *)(BuildingPlacement_field_0x0C + 1709) ) /*0x54c56c*/
  {
    landType = v3->landType; /*0x54c57a*/
    if ( (landType == 2 || landType == 6) /*0x54c5a6*/
      && *(_DWORD *)(BuildingPlacement_field_0x0C + 180) != 7
      && (*(int (__thiscall **)(int))(*(_DWORD *)BuildingPlacement_field_0x0C + 388))(BuildingPlacement_field_0x0C) != 7 )
    {
      if ( (unsigned __int8)ObjectClass::HasLinkedObject(this->BuildingPlacement_field_0x0C) ) /*0x54c5b5*/
      {
        v7 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 7); /*0x54c5d6*/
        v8 = (Cell *)(*(int (__thiscall **)(int))(*(_DWORD *)this->BuildingPlacement_field_0x0C + 444))(this->BuildingPlacement_field_0x0C); /*0x54c5da*/
        v9 = *(_DWORD *)this->BuildingPlacement_field_0x0C; /*0x54c5e6*/
        NeighbourContent = Cell::GetNeighbourContent(v8, v7); /*0x54c5ea*/
        (*(void (__thiscall **)(int, void *, int))(v9 + 1152))(this->BuildingPlacement_field_0x0C, NeighbourContent, 1); /*0x54c5f3*/
        v11 = (_BYTE *)this->BuildingPlacement_field_0x0C; /*0x54c5f9*/
        LOBYTE(v9) = v11[116]; /*0x54c600*/
        (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)v11 + 292))(v11, 0); /*0x54c603*/
        v12 = (CellClass *)this->BuildingPlacement_field_0x0C; /*0x54c609*/
        LOBYTE(v12->unknown74) = v9; /*0x54c60d*/
        this->q014 = 3; /*0x54c610*/
      }
      else
      {
        v13 = (CellClass *)(*(int (__stdcall **)(int))(*(_DWORD *)this->BuildingPlacement_field_0x0C + 444))(this->BuildingPlacement_field_0x0C); /*0x54c624*/
        CellClass::AttachObject(v13, v45); /*0x54c62c*/
        v14 = (_BYTE *)this->BuildingPlacement_field_0x0C; /*0x54c631*/
        v15 = v14[116]; /*0x54c638*/
        LOBYTE(v12) = (*(int (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)v14 + 292))(v14, 0); /*0x54c63b*/
        *(_BYTE *)(this->BuildingPlacement_field_0x0C + 116) = v15; /*0x54c645*/
        v16 = *((_DWORD *)this + 11); /*0x54c648*/
        this->q014 = 2; /*0x54c64b*/
        this->u32_20 = v16; /*0x54c652*/
      }
      return (char)v12; /*0x54c61d*/
    }
    v47 = (*(int (__thiscall **)(int, BuildingPlacement *, int, int, _DWORD, int))(*(_DWORD *)this->BuildingPlacement_field_0x0C /*0x54c675*/
                                                                                 + 428))(
            this->BuildingPlacement_field_0x0C,
            v5,
            -1,
            -1,
            0,
            1);
    v17 = Input::OffsetToDirection((Input *)this + 16); /*0x54c684*/
    if ( BuildingPlacement::IsPlacementFlagSet(v5, v17, BYTE1(v5[8].BuildingPlacement_field_0x20) & 1) /*0x54c699*/
      || (v46 = 0, *((_BYTE *)this + 144)) )
    {
      v46 = 1; /*0x54c6a8*/
    }
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)this->BuildingPlacement_field_0x0C + 44))(this->BuildingPlacement_field_0x0C) == 1 /*0x54c6bc*/
      && !v17 )
    {
      v46 = 1; /*0x54c6be*/
    }
    v18 = (_DWORD *)this->BuildingPlacement_field_0x0C; /*0x54c6c2*/
    if ( v18[45] != 7 && (*(int (__thiscall **)(_DWORD *))(*v18 + 388))(v18) != 7 ) /*0x54c6d9*/
    {
      if ( !v46 /*0x54c70c*/
        || (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], (_DWORD *)this + 16)->flags[0] & 0x100) == 0
        && (v47 > 2 || v47 == 2 && !*((_BYTE *)this + 144)) )
      {
        LOBYTE(v12) = (*(char (__stdcall **)(int *))(this->BuildingPlacement_field_0x04 + 72))(&this->BuildingPlacement_field_0x04); /*0x54ca43*/
        return (char)v12; /*0x54ca4d*/
      }
      if ( !*((_BYTE *)this + 144) ) /*0x54c71a*/
      {
        v19 = this->BuildingPlacement_field_0x0C; /*0x54c724*/
        *((_BYTE *)this + 144) = 1; /*0x54c727*/
        (*(void (__thiscall **)(int, char *))(*(_DWORD *)v19 + 240))(v19, (char *)this + 64); /*0x54c731*/
      }
    }
  }
  v20 = (_DWORD *)this->BuildingPlacement_field_0x0C; /*0x54c737*/
  if ( v20 ) /*0x54c73c*/
  {
    if ( (*(int (__thiscall **)(int))(*v20 + 44))(this->BuildingPlacement_field_0x0C) == 1 ) /*0x54c748*/
    {
      if ( *(_BYTE *)(v20[433] + 3603) ) /*0x54c750*/
      {
        if ( !*(_BYTE *)(this->BuildingPlacement_field_0x0C + 1709) ) /*0x54c75d*/
        {
          v21 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 72); /*0x54c776*/
          Value = ProgressTimer::GetValue((ProgressTimer *)((char *)this + 84), &v47); /*0x54c77a*/
          LOBYTE(v23) = 0; /*0x54c77f*/
          HIBYTE(v23) = v21; /*0x54c781*/
          if ( *(_WORD *)Value != v23 ) /*0x54c786*/
          {
            LOBYTE(v24) = 0; /*0x54c78d*/
            HIBYTE(v24) = *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 72); /*0x54c793*/
            LOWORD(v47) = v24; /*0x54c799*/
            FacingClass::Update((char *)this + 84, &v47); /*0x54c79e*/
          }
        }
      }
    }
  }
  v25 = this->BuildingPlacement_field_0x0C; /*0x54c7a3*/
  this->u32_20 = 0; /*0x54c7a6*/
  v26 = (*(int (__thiscall **)(int))(*(_DWORD *)v25 + 456))(v25); /*0x54c7b8*/
  v12 = (CellClass *)this->BuildingPlacement_field_0x0C; /*0x54c7ba*/
  if ( !LOBYTE(v12->sensorsOfHouses[4]) ) /*0x54c7bd*/
  {
    v27 = &v12->sensorsOfHouses[8]; /*0x54c7c7*/
    v48 = *v27; /*0x54c7ce*/
    v49 = v27[1]; /*0x54c7da*/
    v50 = v27[2]; /*0x54c7e6*/
    v12 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v48); /*0x54c7ea*/
    if ( (v12->flags[0] & 0x100) != 0 ) /*0x54c7f8*/
    {
      LOBYTE(v12) = dword_ABC5DC; /*0x54c7fa*/
      if ( v26 >= dword_ABC5DC ) /*0x54c801*/
        v26 -= dword_ABC5DC; /*0x54c803*/
    }
  }
  if ( !v26 )
  {
    (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)this->BuildingPlacement_field_0x0C + 1348))( /*0x54c814*/
      this->BuildingPlacement_field_0x0C,
      0,
      0);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this->BuildingPlacement_field_0x0C + 292))( /*0x54c820*/
      this->BuildingPlacement_field_0x0C,
      0);
    v28 = (_BYTE *)this->BuildingPlacement_field_0x0C; /*0x54c826*/
    if ( !v28[1709] ) /*0x54c829*/
      (*(void (__thiscall **)(_BYTE *, char *))(*(_DWORD *)v28 + 436))(v28, (char *)this + 64); /*0x54c836*/
    v29 = (int *)(this->BuildingPlacement_field_0x0C + 156); /*0x54c83f*/
    v48 = *v29; /*0x54c848*/
    v49 = v29[1]; /*0x54c84f*/
    v30 = v29[2]; /*0x54c853*/
    v48 = *v29; /*0x54c858*/
    v49 = v29[1]; /*0x54c863*/
    v50 = v29[2]; /*0x54c870*/
    if ( v30 > Cell::GetGroundHeight(&v48) ) /*0x54c87b*/
    {
      v31 = (int *)(this->BuildingPlacement_field_0x0C + 156); /*0x54c880*/
      v48 = *v31; /*0x54c888*/
      v49 = v31[1]; /*0x54c894*/
      v50 = v31[2]; /*0x54c8a0*/
      if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v48)->flags[0] & 0x100) != 0 ) /*0x54c8b2*/
        *(_BYTE *)(this->BuildingPlacement_field_0x0C + 140) = 1; /*0x54c8b7*/
    }
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this->BuildingPlacement_field_0x0C + 292))( /*0x54c8c5*/
      this->BuildingPlacement_field_0x0C,
      1);
    *(_DWORD *)v2->__pad_0 = dword_ABC5A8; /*0x54c8d2*/
    *((_DWORD *)this + 17) = dword_ABC5AC; /*0x54c8db*/
    v32 = this->BuildingPlacement_field_0x0C; /*0x54c8e4*/
    *((_DWORD *)this + 18) = dword_ABC5B0; /*0x54c8e7*/
    *((_BYTE *)this + 76) = 0; /*0x54c8ea*/
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v32 + 396))(v32, 2); /*0x54c8f0*/
    (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)this->BuildingPlacement_field_0x0C + 1152))( /*0x54c8ff*/
      this->BuildingPlacement_field_0x0C,
      0,
      1);
    v33 = (_BYTE *)this->BuildingPlacement_field_0x0C; /*0x54c905*/
    LOBYTE(v12) = v33[144]; /*0x54c908*/
    if ( (_BYTE)v12 )
    {
      LOBYTE(v12) = v33[129]; /*0x54c916*/
      if ( !(_BYTE)v12 )
      {
        LOBYTE(v12) = v33[141]; /*0x54c924*/
        if ( !(_BYTE)v12 )
        {
          (*(void (__thiscall **)(_BYTE *, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v33 + 1164))(v33, 0, 0, 0, 0); /*0x54c93c*/
          v34 = (_BYTE *)this->BuildingPlacement_field_0x0C; /*0x54c942*/
          if ( v34[144] ) /*0x54c945*/
            (*(void (__thiscall **)(_BYTE *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v34 + 1160))( /*0x54c95b*/
              v34,
              0,
              0,
              0,
              0,
              0);
          v35 = this->BuildingPlacement_field_0x0C; /*0x54c961*/
          if ( *(_BYTE *)(v35 + 144) ) /*0x54c964*/
          {
            v48 = *(_DWORD *)(v35 + 156); /*0x54c978*/
            v49 = *(_DWORD *)(v35 + 160); /*0x54c97f*/
            v50 = *(_DWORD *)(v35 + 164); /*0x54c986*/
            MapClass::RevealArea2( /*0x54c9a2*/
              (MapClass *)&stru_87F5F0.__pad_58[416],
              &v48,
              *(_DWORD *)(v35 + 608) - 3,
              *(_DWORD *)(v35 + 608) + 3,
              0);
          }
          v47 = this->BuildingPlacement_field_0x0C; /*0x54c9ac*/
          v36 = v47; /*0x54c9aa*/
          if ( *(_DWORD *)((*(int (**)(void))(*(_DWORD *)v47 + 444))() + 224) == v36 ) /*0x54c9be*/
          {
            v37 = (CellClass *)(*(int (__thiscall **)(int))(*(_DWORD *)v36 + 444))(v36); /*0x54c9c6*/
            CellClass::AttachObject(v37, 0); /*0x54c9ce*/
          }
          GadgetGrid::RemoveItem((GadgetGrid *)&g_CellClassManager, this->BuildingPlacement_field_0x0C); /*0x54c9dc*/
          v38 = this->BuildingPlacement_field_0x0C; /*0x54c9e1*/
          this->q014 = 0; /*0x54c9e4*/
          v44 = v38; /*0x54c9eb*/
          v39 = (CrateClass *)(*(int (__thiscall **)(int))(*(_DWORD *)v38 + 444))(v38); /*0x54c9ee*/
          CrateClass::ProcessPickup(v39, v44); /*0x54c9f6*/
          v12 = (CellClass *)this->BuildingPlacement_field_0x0C; /*0x54c9fb*/
          v12[5].__pad_28[30] = 1; /*0x54c9fe*/
          *(_BYTE *)(this->BuildingPlacement_field_0x0C + 1063) = 0; /*0x54ca08*/
          *(_BYTE *)(this->BuildingPlacement_field_0x0C + 1061) = 0; /*0x54ca12*/
          v40 = this->BuildingPlacement_field_0x0C; /*0x54ca19*/
          *((_BYTE *)this + 144) = 0; /*0x54ca1e*/
          if ( v40 )
          {
            v12 = (CellClass *)(*(int (__thiscall **)(int))(*(_DWORD *)v40 + 44))(v40); /*0x54ca29*/
            if ( v12 == (CellClass *)1 )
            {
              v41 = this->BuildingPlacement_field_0x0C; /*0x54ca31*/
              if ( v41 )
                v42 = (*(int (__thiscall **)(int))(*(_DWORD *)v41 + 44))(this->BuildingPlacement_field_0x0C) == 1
                    ? v41
                    : 0;
              else
                v42 = 0; /*0x54ca38*/
              v12 = (CellClass *)(*(int (__thiscall **)(int))(*(_DWORD *)v42 + 132))(v42); /*0x54ca62*/
              if ( v12[5].__pad_28[29] ) /*0x54ca68*/
              {
                v12 = (CellClass *)this->BuildingPlacement_field_0x0C; /*0x54ca72*/
                LOBYTE(v12->gapsCoveringThisCell) = 0; /*0x54ca75*/
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
char __thiscall JumpjetLocomotion::Land(JumpjetLocomotion *this)
{
  int v2; // ecx
  int v3; // ebp
  char v4; // al
  double v5; // st7
  double v6; // st7
  int v7; // eax
  double v8; // st7
  int v9; // eax
  int v10; // esi
  _BYTE *v11; // ecx
  _DWORD *v12; // eax
  _DWORD *v13; // esi
  _DWORD *v14; // ebp
  int *v15; // eax
  int v16; // edx
  int v17; // eax
  int v18; // eax
  int v19; // ecx
  int v20; // edx
  int v21; // eax
  int v22; // ecx
  int *v23; // ecx
  CellClass *v24; // esi
  int landType; // eax
  bool v26; // bl
  int v27; // eax
  int v28; // ecx
  int v29; // ebp
  int v30; // eax
  TechnoClass *v31; // ecx
  int v32; // ecx
  _DWORD *v33; // ecx
  int v34; // eax
  int v35; // esi
  CellClass *v36; // eax
  int v37; // ecx
  int v38; // ecx
  int v39; // eax
  int v40; // eax
  int v41; // esi
  CellClass *v42; // eax
  int v43; // ecx
  char v45; // [esp+32h] [ebp-24h]
  char v46; // [esp+33h] [ebp-23h]
  char v47; // [esp+34h] [ebp-22h]
  char v48; // [esp+35h] [ebp-21h]
  __int16 v49[2]; // [esp+36h] [ebp-20h] BYREF
  __int16 v50[2]; // [esp+3Ah] [ebp-1Ch] BYREF
  int v51; // [esp+3Eh] [ebp-18h] BYREF
  int v52; // [esp+42h] [ebp-14h]
  int v53; // [esp+46h] [ebp-10h]
  int v54; // [esp+4Ah] [ebp-Ch] BYREF
  int v55; // [esp+4Eh] [ebp-8h]
  int v56; // [esp+52h] [ebp-4h]

  v2 = *(_DWORD *)this->__pad_C; /*0x54ca99*/
  v51 = *(_DWORD *)(v2 + 156); /*0x54caa6*/
  v52 = *(_DWORD *)(v2 + 160); /*0x54caad*/
  v53 = *(_DWORD *)(v2 + 164); /*0x54cab4*/
  v3 = *(_DWORD *)(v2 + 164); /*0x54caba*/
  v54 = *(_DWORD *)(v2 + 156); /*0x54cabd*/
  v4 = *(_BYTE *)(v2 + 1709); /*0x54cac4*/
  v55 = *(_DWORD *)(v2 + 160); /*0x54cacc*/
  if ( v4 ) /*0x54cad0*/
  {
    v5 = (double)v53; /*0x54cad2*/
    *(_DWORD *)&this->__pad_5C[20] = 0; /*0x54cad8*/
    *(_DWORD *)this->__pad_78 = 0; /*0x54cadb*/
    v6 = v5 - *(float *)&this->__pad_C[28]; /*0x54cade*/
    this->JumpjetLocomotion_field_0x74 = 0; /*0x54cae1*/
    *(_DWORD *)&this->__pad_78[4] = 0; /*0x54cae4*/
    LOWORD(v7) = Math::RoundToInt(v6); /*0x54cae7*/
    v8 = *(float *)&this->__pad_C[28] + 1.0; /*0x54caef*/
    v53 = v7; /*0x54caf5*/
    *(float *)&this->__pad_C[28] = v8; /*0x54caf9*/
  }
  else
  {
    LOWORD(v9) = Math::RoundToInt((double)v53 - *(float *)&this->__pad_C[28]); /*0x54cb05*/
    v53 = v9; /*0x54cb0a*/
    v49[0] = *(_WORD *)ProgressTimer::GetValue((ProgressTimer *)&this->__pad_48[12], v50) + 11520; /*0x54cb2a*/
    FacingClass::Update(&this->__pad_48[12], v49); /*0x54cb39*/
  }
  v10 = dword_ABC5DC + Cell::GetGroundHeight(&v51); /*0x54cb5e*/
  if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v51)->flags[0] & 0x100) == 0 /*0x54cb7f*/
    || v3 < v10
    || (v45 = 1, v53 >= v10) )
  {
    v45 = 0; /*0x54cb81*/
  }
  v49[0] = v51 / 256; /*0x54cba0*/
  v49[1] = v52 / 256; /*0x54cbb5*/
  if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&stru_87F5F0.__pad_58[416], v49) ) /*0x54cbc2*/
  {
    RemoveTarget(*(_DWORD *)this->__pad_C); /*0x54cbd4*/
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)this->__pad_C + 292))(*(_DWORD *)this->__pad_C, 0); /*0x54cbe1*/
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)this->__pad_C + 436))(*(_DWORD *)this->__pad_C, &v51); /*0x54cbf1*/
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)this->__pad_C + 292))(*(_DWORD *)this->__pad_C, 1); /*0x54cbfe*/
    Targeting::Readd(*(_DWORD **)this->__pad_C); /*0x54cc0d*/
  }
  v46 = 0; /*0x54cc19*/
  if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)this->__pad_C + 456))(*(_DWORD *)this->__pad_C) > 0 && !v45 ) /*0x54cc30*/
    goto LABEL_74; /*0x54cc30*/
  v11 = *(_BYTE **)this->__pad_C; /*0x54cc36*/
  if ( !v11[1063] ) /*0x54cc39*/
    goto LABEL_74; /*0x54cc41*/
  v47 = 0; /*0x54cc4e*/
  v12 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, int *))(*(_DWORD *)v11 + 72))(v11, &v54); /*0x54cc53*/
  v49[0] = *v12 / 256; /*0x54cc66*/
  v49[1] = v12[1] / 256; /*0x54cc7f*/
  *(_DWORD *)v50 = *(_DWORD *)v49; /*0x54cc8d*/
  v13 = (_DWORD *)*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v50) + 57); /*0x54cc96*/
  if ( v13 == *(_DWORD **)this->__pad_C ) /*0x54cca1*/
    v13 = (_DWORD *)v13[12]; /*0x54cca3*/
  if ( v13 ) /*0x54cca8*/
  {
    if ( (*(int (__thiscall **)(_DWORD *))(*v13 + 44))(v13) == 1 /*0x54ccc8*/
      || (*(int (__thiscall **)(_DWORD *))(*v13 + 44))(v13) == 6 )
    {
      goto LABEL_64; /*0x54ccc8*/
    }
    if ( (*(int (__thiscall **)(_DWORD *))(*v13 + 44))(v13) == 15 ) /*0x54ccd8*/
    {
      do /*0x54cd78*/
      {
        v14 = (_DWORD *)v13[12]; /*0x54cce1*/
        v15 = (int *)(*(_DWORD *)this->__pad_C + 156); /*0x54cce4*/
        v54 = *v15; /*0x54ccf0*/
        v55 = v15[1]; /*0x54ccf9*/
        v16 = *v13; /*0x54ccfd*/
        v56 = v15[2]; /*0x54cd02*/
        v17 = (*(int (__thiscall **)(_DWORD *))(v16 + 136))(v13); /*0x54cd06*/
        StartAudioControllerAt(*(_DWORD *)(v17 + 496), &v54, 0); /*0x54cd14*/
        v18 = *(_DWORD *)this->__pad_C; /*0x54cd19*/
        v19 = *(_DWORD *)(v18 + 1064); /*0x54cd1e*/
        if ( v19 ) /*0x54cd26*/
        {
          (*(void (__thiscall **)(_DWORD *, int))(*v13 + 224))(v13, v19); /*0x54cd2d*/
        }
        else
        {
          v20 = *v13; /*0x54cd3b*/
          if ( *(_DWORD *)(v18 + 1068) ) /*0x54cd35*/
            (*(void (__thiscall **)(_DWORD *, _DWORD))(v20 + 228))(v13, *(_DWORD *)(v18 + 1068)); /*0x54cd44*/
          else
            (*(void (__thiscall **)(_DWORD *, _DWORD))(v20 + 224))(v13, *(_DWORD *)this->__pad_C); /*0x54cd4f*/
        }
        (*(void (__thiscall **)(_DWORD *, _DWORD))(*v13 + 292))(v13, 0); /*0x54cd5a*/
        (*(void (__thiscall **)(_DWORD *))(*v13 + 212))(v13); /*0x54cd64*/
        (*(void (__thiscall **)(_DWORD *))(*v13 + 248))(v13); /*0x54cd6e*/
        v13 = v14; /*0x54cd76*/
      }
      while ( v14 ); /*0x54cd78*/
    }
    else
    {
      v21 = *(_DWORD *)this->__pad_C; /*0x54cd80*/
      v22 = *(_DWORD *)(v21 + 1064); /*0x54cd83*/
      if ( v22 ) /*0x54cd8b*/
      {
        (*(void (__thiscall **)(_DWORD *, _DWORD *, _DWORD, _DWORD, int, int, _DWORD, _DWORD))(*v13 + 364))( /*0x54cd94*/
          v13,
          v13 + 27,
          0,
          *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4012),
          v22,
          1,
          0,
          0);
      }
      else if ( *(_DWORD *)(v21 + 1068) ) /*0x54cd96*/
      {
        (*(void (__thiscall **)(_DWORD *, _DWORD *, _DWORD, _DWORD, int, int, _DWORD, _DWORD))(*v13 + 364))( /*0x54cda3*/
          v13,
          v13 + 27,
          0,
          *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4012),
          v21,
          1,
          0,
          *(_DWORD *)(v21 + 1068));
      }
      else
      {
        (*(void (__thiscall **)(_DWORD *, _DWORD *, _DWORD, _DWORD, int, int, _DWORD, _DWORD))(*v13 + 364))( /*0x54cdbd*/
          v13,
          v13 + 27,
          0,
          *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4012),
          v21,
          1,
          0,
          0);
      }
    }
  }
  v47 = 1; /*0x54cdc6*/
  v23 = (int *)(*(_DWORD *)this->__pad_C + 156); /*0x54cdcb*/
  v54 = *v23; /*0x54cdd3*/
  v55 = v23[1]; /*0x54cddf*/
  v56 = v23[2]; /*0x54cde6*/
  v24 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v54); /*0x54cdf4*/
  landType = v24->landType; /*0x54cdf6*/
  if ( landType != 2 || (v48 = 1, v45) ) /*0x54ce0c*/
    v48 = 0; /*0x54ce0e*/
  v26 = landType == 6 && !v45; /*0x54ce24*/
  v27 = (*(int (__thiscall **)(_DWORD, CellClass *, int, int, _DWORD, int))(**(_DWORD **)this->__pad_C + 428))( /*0x54ce34*/
          *(_DWORD *)this->__pad_C,
          v24,
          -1,
          -1,
          0,
          1);
  v28 = *(_DWORD *)this->__pad_C; /*0x54ce3a*/
  v29 = v27; /*0x54ce3d*/
  if ( v28 /*0x54ce5c*/
    && (*(int (__thiscall **)(int))(*(_DWORD *)v28 + 44))(v28) == 2
    && !(unsigned __int8)Cell::IsBuildable((bool *)v24, 2, 1, 1, -1, 0, -1, 1) )
  {
    v29 = 7; /*0x54ce65*/
  }
  if ( *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)this->__pad_C + 132))(*(_DWORD *)this->__pad_C) + 3476) /*0x54ce9a*/
    && !(unsigned __int8)Cell::IsBuildable((bool *)v24, 2, 1, 1, -1, 0, -1, 1)
    || v29 )
  {
    if ( v48 && !v26 ) /*0x54ceae*/
    {
      *(_BYTE *)(*(_DWORD *)this->__pad_C + 973) = 1; /*0x54ceb7*/
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)this->__pad_C + 928))(*(_DWORD *)this->__pad_C); /*0x54cec3*/
      v30 = *(_DWORD *)this->__pad_C; /*0x54cec9*/
      v31 = *(TechnoClass **)(v30 + 728); /*0x54cecc*/
      if ( v31 ) /*0x54ced4*/
      {
        TechnoClass::MutateAll(v31, *(_DWORD *)(v30 + 1064), 0); /*0x54cedf*/
        v32 = *(_DWORD *)(*(_DWORD *)this->__pad_C + 728); /*0x54cee7*/
        if ( v32 ) /*0x54ceef*/
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v32 + 32))(v32, 1); /*0x54cef5*/
        *(_DWORD *)(*(_DWORD *)this->__pad_C + 728) = 0; /*0x54cefb*/
      }
      v33 = *(_DWORD **)this->__pad_C; /*0x54cf05*/
      if ( v33[266] ) /*0x54cf08*/
      {
        (*(void (__thiscall **)(_DWORD *, _DWORD))(*v33 + 224))(v33, v33[266]); /*0x54cf15*/
      }
      else if ( v33[267] ) /*0x54cf20*/
      {
        (*(void (__thiscall **)(_DWORD *, _DWORD))(*v33 + 228))(v33, v33[267]); /*0x54cf31*/
      }
      goto LABEL_65; /*0x54cf1b*/
    }
  }
  else
  {
    v34 = *(_DWORD *)this->__pad_C; /*0x54cf3c*/
    if ( *(_DWORD *)(v34 + 1400) /*0x54cf75*/
      || *(_DWORD *)(v34 + 1404) != 1075052544 && (*(_DWORD *)(v34 + 1400) || *(_DWORD *)(v34 + 1404) != 1075576832)
      || v48 && !v26 )
    {
      v35 = *(_DWORD *)this->__pad_C; /*0x54cf77*/
      if ( *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)v35 + 444))(v35) + 224) == v35 ) /*0x54cf8a*/
      {
        v36 = (CellClass *)(*(int (__thiscall **)(int))(*(_DWORD *)v35 + 444))(v35); /*0x54cf92*/
        CellClass::AttachObject(v36, 0); /*0x54cf9a*/
      }
      v37 = *(_DWORD *)this->__pad_C; /*0x54cf9f*/
      *(_DWORD *)&this->__pad_48[8] = 4; /*0x54cfa2*/
      (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v37 + 1152))(v37, 0, 1); /*0x54cfaf*/
      goto LABEL_65; /*0x54cfb5*/
    }
  }
LABEL_64:
  v46 = 1; /*0x54cfb7*/
LABEL_65:
  v38 = *(_DWORD *)this->__pad_C; /*0x54cfbc*/
  if ( v38 && (*(int (__thiscall **)(int))(*(_DWORD *)v38 + 456))(v38) > 0 ) /*0x54cfcf*/
  {
    if ( !v45 ) /*0x54cfd7*/
    {
      v39 = *(_DWORD *)this->__pad_C; /*0x54cfd9*/
      if ( !*(_BYTE *)(v39 + 1709) || v46 ) /*0x54cfec*/
      {
        *(_DWORD *)(v39 + 1064) = 0; /*0x54cfee*/
        *(_DWORD *)(*(_DWORD *)this->__pad_C + 1068) = 0; /*0x54cff7*/
      }
      goto LABEL_74; /*0x54cffd*/
    }
  }
  else if ( !v45 ) /*0x54d005*/
  {
    goto LABEL_74; /*0x54d005*/
  }
  if ( v47 ) /*0x54d00d*/
    *(_BYTE *)(*(_DWORD *)this->__pad_C + 140) = 1; /*0x54d012*/
LABEL_74:
  if ( ((*(int (__thiscall **)(_DWORD))(**(_DWORD **)this->__pad_C + 456))(*(_DWORD *)this->__pad_C) <= 0 /*0x54d043*/
     || (LOBYTE(v40) = v45) != 0)
    && (!*(_BYTE *)(*(_DWORD *)this->__pad_C + 1709) || (LOBYTE(v40) = v46) != 0) )
  {
    v41 = *(_DWORD *)this->__pad_C; /*0x54d045*/
    if ( *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)v41 + 444))(v41) + 224) == v41 ) /*0x54d058*/
    {
      v42 = (CellClass *)(*(int (__thiscall **)(int))(*(_DWORD *)v41 + 444))(v41); /*0x54d05f*/
      CellClass::AttachObject(v42, 0); /*0x54d067*/
    }
    GadgetGrid::RemoveItem((GadgetGrid *)&g_CellClassManager, *(_DWORD *)this->__pad_C); /*0x54d075*/
    v43 = *(_DWORD *)this->__pad_C; /*0x54d07a*/
    *(_DWORD *)this->__pad_78 = 0; /*0x54d07d*/
    *(_DWORD *)&this->__pad_48[8] = 6; /*0x54d083*/
    *(_DWORD *)&this->__pad_78[4] = 0; /*0x54d08a*/
    (**(void (__thiscall ***)(int, int, _DWORD))(v43 + 8))(v43 + 8, 4476, 0); /*0x54d095*/
    v40 = *(_DWORD *)this->__pad_C; /*0x54d097*/
    if ( v40 ) /*0x54d09c*/
    {
      *(_DWORD *)(v40 + 1064) = 0; /*0x54d09e*/
      v40 = *(_DWORD *)this->__pad_C; /*0x54d0a4*/
      *(_DWORD *)(v40 + 1068) = 0; /*0x54d0a7*/
    }
  }
  return v40; /*0x54d0ad*/
}



// ==== 0x0054D0C0  nullsub_156  this=-  sig=ida-proto ====
void nullsub_156()
{
  ; /*0x54d0c0*/
}



// ==== 0x0054D0D0  JumpjetLocomotionClass::CheckCompositeState  this=JumpjetLocomotionClass  sig=csp ====
bool __stdcall JumpjetLocomotionClass::CheckCompositeState(JumpjetLocomotionClass *this)
{
  int v1; // eax

  v1 = *(_DWORD *)&this->IsMoving; /*0x54d0d4*/
  return v1 && v1 != 2; /*0x54d0e2*/
}



// ==== 0x0054D0F0  JumpjetLocomotion::UpdateFacing  this=JumpjetLocomotion  sig=csp ====
int __thiscall JumpjetLocomotion::UpdateFacing(JumpjetLocomotion *this)
{
  int v2; // eax
  _BYTE *v3; // ecx
  double v4; // st7
  double v5; // st7
  unsigned __int8 v7; // c0
  unsigned __int8 v8; // c3
  unsigned __int64 v9; // st7
  int v10; // edi
  int v11; // ebp
  _WORD *v12; // eax
  int v13; // eax
  double v14; // st7
  int v15; // eax
  int v16; // edx
  int v17; // kr10_4
  int v18; // ecx
  int v19; // ebp
  int v20; // ecx
  int GroundHeight; // ebx
  int v22; // eax
  int v23; // edx
  int v24; // edx
  int v25; // eax
  int v26; // edi
  int v27; // ebp
  int v28; // ecx
  int v29; // eax
  int *v30; // eax
  int v31; // ebx
  int v32; // ecx
  int v33; // eax
  int v34; // ebp
  int v35; // eax
  int v36; // ebp
  int v37; // ebx
  _WORD *v38; // eax
  int v39; // ecx
  int *v40; // eax
  int v41; // edi
  int v42; // eax
  unsigned int v43; // ebp
  unsigned int v44; // ebx
  int v45; // eax
  int v46; // eax
  int v47; // ecx
  _BYTE *v48; // ecx
  int v49; // edi
  int v50; // eax
  int v51; // ecx
  int result; // eax
  int *v53; // [esp+4h] [ebp-54h]
  _DWORD *Value; // [esp+4h] [ebp-54h]
  char v55; // [esp+19h] [ebp-3Fh]
  char v56; // [esp+1Ah] [ebp-3Eh]
  char v57; // [esp+1Ah] [ebp-3Eh]
  char v58; // [esp+1Bh] [ebp-3Dh]
  int v59; // [esp+1Ch] [ebp-3Ch] BYREF
  double v60; // [esp+20h] [ebp-38h]
  double v61; // [esp+28h] [ebp-30h] BYREF
  double v62; // [esp+30h] [ebp-28h] BYREF
  int v63; // [esp+38h] [ebp-20h]
  int v64; // [esp+40h] [ebp-18h]
  int v65; // [esp+44h] [ebp-14h]
  _DWORD v66[3]; // [esp+4Ch] [ebp-Ch] BYREF

  v2 = *(_DWORD *)&this->__pad_48[8]; /*0x54d0ff*/
  if ( v2 == 2 || (v55 = 1, v2 == 3) ) /*0x54d10f*/
    v55 = 0; /*0x54d111*/
  v3 = *(_BYTE **)this->__pad_C; /*0x54d116*/
  v58 = v3[116]; /*0x54d11c*/
  if ( v55 ) /*0x54d126*/
    (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)v3 + 292))(v3, 0); /*0x54d12c*/
  else
    v3[116] = 0; /*0x54d134*/
  if ( *(double *)this->__pad_78 > *(double *)&this->__pad_5C[20] ) /*0x54d143*/
  {
    v4 = *(float *)&this->__pad_C[36] + *(double *)&this->__pad_5C[20]; /*0x54d148*/
    *(double *)&this->__pad_5C[20] = v4; /*0x54d14b*/
    v61 = (double)*(int *)&this->__pad_C[20]; /*0x54d151*/
    if ( v4 >= v61 ) /*0x54d15e*/
      v4 = v61; /*0x54d162*/
    *(double *)&this->__pad_5C[20] = v4; /*0x54d166*/
  }
  if ( *(double *)this->__pad_78 < *(double *)&this->__pad_5C[20] ) /*0x54d174*/
  {
    v5 = *(double *)&this->__pad_5C[20] - *(float *)&this->__pad_C[36] * 1.5; /*0x54d17f*/
    *(double *)&this->__pad_5C[20] = v5; /*0x54d188*/
    if ( v7 | v8 ) /*0x54d18d*/
      v5 = 0.0; /*0x54d194*/
    *(double *)&this->__pad_5C[20] = v5; /*0x54d19a*/
  }
  *(double *)&v9 = *(double *)&this->__pad_5C[20] / (double)*(int *)&this->__pad_C[20]; /*0x54d1a6*/
  (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)this->__pad_C + 1348))( /*0x54d1ae*/
    *(_DWORD *)this->__pad_C,
    v9,
    HIDWORD(v9));
  v10 = (int)this->JumpjetLocomotion_field_0x40 / 256; /*0x54d1da*/
  v11 = (int)this->JumpjetLocomotion_field_0x44 / 256; /*0x54d1dd*/
  v12 = (_WORD *)(*(int (__thiscall **)(_DWORD, double *))(**(_DWORD **)this->__pad_C + 440))( /*0x54d1e0*/
                   *(_DWORD *)this->__pad_C,
                   &v61);
  if ( *v12 != (_WORD)v10 || (v56 = 1, v12[1] != (_WORD)v11) ) /*0x54d1f4*/
    v56 = 0; /*0x54d1f6*/
  v13 = *(_DWORD *)&this->__pad_48[8]; /*0x54d1fb*/
  if ( (v13 == 2 || v13 == 3) && !this->__pad_C[48] ) /*0x54d208*/
  {
    *(double *)&this->__pad_85[3] = 6.283185307179586 / (15.0 / *(float *)&this->__pad_C[40]) /*0x54d224*/
                                  + *(double *)&this->__pad_85[3];
  }
  else
  {
    *(_DWORD *)&this->__pad_85[3] = 0; /*0x54d22e*/
    this->JumpjetLocomotion_field_0x8C = 0; /*0x54d234*/
  }
  Math::SinCos(*(double *)&this->__pad_85[3]); /*0x54d248*/
  v14 = *(double *)&v9 * (double)*(int *)&this->__pad_C[44] + (double)*(int *)&this->__pad_78[8]; /*0x54d253*/
  v17 = Math::RoundToInt(v14); /*0x54d259*/
  LOWORD(v16) = HIWORD(v17); /*0x54d259*/
  LOWORD(v15) = v17; /*0x54d259*/
  v18 = *(_DWORD *)this->__pad_C; /*0x54d25e*/
  LODWORD(v60) = v15; /*0x54d261*/
  v19 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v18 + 464))(v18, v16); /*0x54d270*/
  v20 = *(_DWORD *)this->__pad_C + 156; /*0x54d272*/
  v59 = v19; /*0x54d278*/
  v62 = *(double *)v20; /*0x54d27e*/
  v63 = *(_DWORD *)(v20 + 8); /*0x54d291*/
  GroundHeight = Cell::GetGroundHeight(&v62); /*0x54d29f*/
  v22 = *(_DWORD *)this->__pad_C + 156; /*0x54d2a4*/
  v62 = *(double *)v22; /*0x54d2ab*/
  v63 = *(_DWORD *)(v22 + 8); /*0x54d2c3*/
  if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v62)->flags[0] & 0x100) != 0 ) /*0x54d2d5*/
  {
    v23 = *(_DWORD *)this->__pad_C + 156; /*0x54d2da*/
    v62 = *(double *)v23; /*0x54d2e2*/
    v24 = *(_DWORD *)(v23 + 8); /*0x54d2f5*/
    LODWORD(v61) = GroundHeight + 4 * dword_ABC5E8; /*0x54d2f8*/
    v63 = v24; /*0x54d2fc*/
    v14 = (double)v24; /*0x54d300*/
    if ( (double)SLODWORD(v61) - *(float *)&this->__pad_C[28] <= v14 ) /*0x54d312*/
      GroundHeight += dword_ABC5DC; /*0x54d314*/
  }
  v25 = *(_DWORD *)&this->__pad_48[8]; /*0x54d31a*/
  if ( v25 == 4 /*0x54d339*/
    || !v25
    || v56
    && !*(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)this->__pad_C + 132))(*(_DWORD *)this->__pad_C) + 3434) )
  {
    v26 = v19 - GroundHeight; /*0x54d352*/
  }
  else
  {
    v26 = v19 - JumpjetLocomotionClass::GetFloorZSetContext((JumpjetLocomotionClass *)this); /*0x54d34c*/
  }
  LODWORD(v61) = v26; /*0x54d358*/
  v57 = 0; /*0x54d35e*/
  if ( v26 < SLODWORD(v60) ) /*0x54d363*/
  {
    v27 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)this->__pad_C + 456))(*(_DWORD *)this->__pad_C); /*0x54d377*/
    v28 = *(_DWORD *)this->__pad_C + 156; /*0x54d379*/
    v62 = *(double *)v28; /*0x54d381*/
    v63 = *(_DWORD *)(v28 + 8); /*0x54d394*/
    if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v62)->flags[0] & 0x100) != 0 ) /*0x54d3ab*/
    {
      v29 = *(_DWORD *)this->__pad_C; /*0x54d3ad*/
      if ( !*(_BYTE *)(v29 + 140) ) /*0x54d3b0*/
      {
        v30 = (int *)(v29 + 156); /*0x54d3ba*/
        v64 = *v30; /*0x54d3c3*/
        v65 = v30[1]; /*0x54d3ca*/
        v31 = v30[2]; /*0x54d3ce*/
        v62 = *(double *)v30; /*0x54d3d3*/
        v63 = v30[2]; /*0x54d3eb*/
        if ( v31 >= dword_ABC5DC + Cell::GetGroundHeight(&v62) ) /*0x54d3ff*/
          v27 -= dword_ABC5DC; /*0x54d401*/
      }
    }
    if ( !v27 ) /*0x54d405*/
    {
      v32 = *(_DWORD *)this->__pad_C; /*0x54d407*/
      v62 = *(double *)(v32 + 156); /*0x54d416*/
      v63 = *(_DWORD *)(v32 + 164); /*0x54d424*/
      (*(void (__thiscall **)(int, double *))(*(_DWORD *)v32 + 244))(v32, &v62); /*0x54d42f*/
      *(_BYTE *)(*(_DWORD *)this->__pad_C + 140) = 0; /*0x54d438*/
    }
    v14 = (double)SLODWORD(v61) + *(float *)&this->__pad_C[24]; /*0x54d443*/
    if ( (double)SLODWORD(v60) >= v14 ) /*0x54d451*/
    {
      v14 = (double)v59 + *(float *)&this->__pad_C[24]; /*0x54d469*/
      LOWORD(v33) = Math::RoundToInt(v14); /*0x54d46c*/
      v59 = v33; /*0x54d471*/
    }
    else
    {
      v59 += LODWORD(v60) - v26; /*0x54d45f*/
    }
LABEL_49:
    v57 = 1; /*0x54d4bb*/
    goto LABEL_50; /*0x54d4bb*/
  }
  if ( v26 > SLODWORD(v60) )
  {
    v14 = (double)SLODWORD(v61) - *(float *)&this->__pad_C[24]; /*0x54d47d*/
    if ( (double)SLODWORD(v60) <= v14 ) /*0x54d48b*/
    {
      v14 = (double)v59 - *(float *)&this->__pad_C[24]; /*0x54d49b*/
      LOWORD(v35) = Math::RoundToInt(v14); /*0x54d49e*/
      v59 = v35; /*0x54d4a3*/
      v34 = v35; /*0x54d4a7*/
    }
    else
    {
      v34 = LODWORD(v60) - v26 + v19; /*0x54d48f*/
      v59 = v34; /*0x54d491*/
    }
    if ( v34 <= GroundHeight ) /*0x54d4ab*/
      v59 = GroundHeight; /*0x54d4ad*/
    v26 = v26 <= 0 ? 0 : v26;
    goto LABEL_49; /*0x54d4b9*/
  }
LABEL_50:
  v36 = (int)this->JumpjetLocomotion_field_0x40 / 256; /*0x54d4c0*/
  v37 = (int)this->JumpjetLocomotion_field_0x44 / 256; /*0x54d4e9*/
  v38 = (_WORD *)(*(int (__thiscall **)(_DWORD, double *))(**(_DWORD **)this->__pad_C + 440))( /*0x54d4ec*/
                   *(_DWORD *)this->__pad_C,
                   &v61);
  if ( *v38 != (_WORD)v36 || v38[1] != (_WORD)v37 ) /*0x54d4fb*/
  {
    v39 = LODWORD(v60); /*0x54d4fd*/
    if ( v26 < SLODWORD(v60) / 2 ) /*0x54d50a*/
    {
      *(_DWORD *)&this->__pad_5C[20] = 0; /*0x54d50e*/
      this->JumpjetLocomotion_field_0x74 = 0; /*0x54d511*/
    }
    if ( v26 < v39 / 4 ) /*0x54d525*/
    {
      *(_DWORD *)&this->__pad_5C[20] = 0; /*0x54d527*/
      this->JumpjetLocomotion_field_0x74 = 0; /*0x54d52a*/
    }
  }
  if ( v57 ) /*0x54d537*/
  {
    ObjectClass::SetAnim(*(ObjectClass **)this->__pad_C, v59); /*0x54d541*/
    if ( v55 ) /*0x54d54c*/
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)this->__pad_C + 292))(*(_DWORD *)this->__pad_C, 0); /*0x54d554*/
  }
  v40 = (int *)(*(_DWORD *)this->__pad_C + 156); /*0x54d55d*/
  v64 = *v40; /*0x54d567*/
  v65 = v40[1]; /*0x54d56e*/
  v41 = v40[2]; /*0x54d572*/
  LOWORD(v42) = Math::RoundToInt(v14); /*0x54d575*/
  LODWORD(v60) = v42; /*0x54d57a*/
  v61 = (double)(*(__int16 *)ProgressTimer::GetValue((ProgressTimer *)&this->__pad_48[12], &v59) - 0x3FFF) /*0x54d5a2*/
      * -0.00009587672516830327;
  v43 = HIDWORD(v61); /*0x54d5aa*/
  v44 = LODWORD(v61); /*0x54d5ae*/
  v60 = (double)SLODWORD(v60); /*0x54d5b4*/
  v62 = (double)v65; /*0x54d5bc*/
  Math::SinCos(v61); /*0x54d5c0*/
  LOWORD(v45) = Math::RoundToInt(v14); /*0x54d5cd*/
  LODWORD(v61) = v45; /*0x54d5d4*/
  Math::ArcTan2(COERCE_DOUBLE(__PAIR64__(v43, v44))); /*0x54d5d8*/
  LOWORD(v46) = Math::RoundToInt(v14 * v60 + (double)v64); /*0x54d5e8*/
  v47 = *(_DWORD *)this->__pad_C; /*0x54d5f1*/
  v66[1] = LODWORD(v61); /*0x54d5f4*/
  v66[0] = v46; /*0x54d5f8*/
  v66[2] = v41; /*0x54d5fc*/
  (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v47 + 436))(v47, v66); /*0x54d607*/
  v48 = *(_BYTE **)this->__pad_C; /*0x54d60d*/
  if ( !v48[1709] )
  {
    if ( v48
      && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v48 + 44))(v48) == 15
      && ((v49 = *(_DWORD *)this->__pad_C) != 0
        ? (v50 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v49 + 44))(*(_DWORD *)this->__pad_C) == 15 ? v49 : 0)
        : (v50 = 0),
          *(_BYTE *)(*(_DWORD *)(v50 + 1728) + 3787)
       && *(_DWORD *)&this->__pad_48[8] == 2
       && (v51 = *(_DWORD *)this->__pad_C, *(_DWORD *)(v51 + 692))) )
    {
      v53 = ObjectClass::CalcTargetFacing((ObjectClass *)v51, (int *)&v61, *(_DWORD *)(v51 + 692)); /*0x54d675*/
      FacingClass::Set_SyncLog(&this->__pad_48[12], v53); /*0x54d679*/
    }
    else
    {
      Value = ProgressTimer::GetValue((ProgressTimer *)&this->__pad_48[12], &v61); /*0x54d68b*/
      FacingClass::Set_SyncLog((char *)(*(_DWORD *)this->__pad_C + 904), Value); /*0x54d692*/
    }
  }
  if ( v55 ) /*0x54d69d*/
    return (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)this->__pad_C + 292))(*(_DWORD *)this->__pad_C, 1); /*0x54d6a6*/
  result = *(_DWORD *)this->__pad_C; /*0x54d6b4*/
  *(_BYTE *)(result + 116) = v58; /*0x54d6bd*/
  return result; /*0x54d6ac*/
}



// ==== 0x0054D6D0  JumpjetLocomotionClass::ProcessLanding  this=JumpjetLocomotionClass  sig=csp ====
int *__thiscall JumpjetLocomotionClass::ProcessLanding(JumpjetLocomotionClass *this, int *a2, _DWORD *a3)
{
  FootClass *LinkedTo; // ecx
  CellClass *v4; // eax
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

  LinkedTo = this->?; /*0x54d6d0*/
  if ( LinkedTo && (*((int (__thiscall **)(FootClass *))LinkedTo->TechnoClass + 11))(LinkedTo) == 1 ) /*0x54d6e7*/
  {
    v4 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], a3); /*0x54d6f7*/
    v5 = (int *)(*(int (__thiscall **)(CellClass *, int *))(v4->mapCoords[0] + 72))(v4, v15); /*0x54d705*/
    v6 = dword_ABC5A8; /*0x54d70a*/
    v12 = *v5; /*0x54d712*/
    v7 = v5[1]; /*0x54d718*/
    v13 = v7; /*0x54d71b*/
    v8 = v5[2]; /*0x54d71f*/
    GroundHeight = v8; /*0x54d722*/
    if ( v12 != dword_ABC5A8 || v7 != dword_ABC5AC || v8 != dword_ABC5B0 ) /*0x54d736*/
    {
      GroundHeight = Cell::GetGroundHeight(&v12); /*0x54d74b*/
      if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v12)->flags[0] & 0x100) != 0 ) /*0x54d767*/
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
      if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v12)->flags[0] & 0x100) != 0 ) /*0x54d7ee*/
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
int __thiscall JumpjetLocomotionClass::GetFloorZSetContext(JumpjetLocomotionClass *this)
{
  int *location; // eax
  CellClass *v3; // eax
  int ClosestOccupiableCell; // edi
  unsigned int v5; // ecx
  int v6; // eax
  int v7; // ecx
  CellClass *v8; // eax
  int v9; // esi
  int v11; // [esp+8h] [ebp-10h] BYREF
  int v12; // [esp+Ch] [ebp-Ch] BYREF
  int v13; // [esp+10h] [ebp-8h]
  int v14; // [esp+14h] [ebp-4h]

  location = this->?->?; /*0x54d82a*/
  v12 = *location; /*0x54d831*/
  v13 = location[1]; /*0x54d83d*/
  v14 = location[2]; /*0x54d849*/
  v3 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v12); /*0x54d84d*/
  ClosestOccupiableCell = JumpjetLocomotionClass::FindClosestOccupiableCell((JumpjetLocomotionClass *)v3); /*0x54d863*/
  if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v12)->flags[0] & 0x100) != 0 ) /*0x54d873*/
    ClosestOccupiableCell += dword_ABC5DC; /*0x54d875*/
  if ( *(double *)&this->CurrentHeight <= 0.0 ) /*0x54d889*/
    return ClosestOccupiableCell; /*0x54d926*/
  v5 = ((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)&this->__pad_50[4], &v11) >> 12) + 1) >> 1) & 7; /*0x54d8ac*/
  v6 = v12 + g_DDrawSurfaceManager.scenario[2 * v5 + 102]; /*0x54d8bd*/
  v7 = g_DDrawSurfaceManager.scenario[2 * v5 + 103]; /*0x54d8bf*/
  v12 = v6; /*0x54d8c2*/
  v13 += v7; /*0x54d8d4*/
  v8 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v12); /*0x54d8de*/
  v9 = JumpjetLocomotionClass::FindClosestOccupiableCell((JumpjetLocomotionClass *)v8); /*0x54d8ea*/
  if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v12)->flags[0] & 0x100) != 0 ) /*0x54d904*/
    ClosestOccupiableCell += dword_ABC5DC; /*0x54d906*/
  if ( v9 <= ClosestOccupiableCell ) /*0x54d90e*/
    return (v9 + ClosestOccupiableCell) / 2; /*0x54d920*/
  else
    return v9; /*0x54d910*/
}



// ==== 0x0054D930  JumpjetLocomotionClass::DispatchVirtualCall_4  this=JumpjetLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::DispatchVirtualCall_4(JumpjetLocomotionClass *this, int a2)
{
  int v2; // eax
  _DWORD *v3; // eax
  int v4; // edx
  _DWORD v6[3]; // [esp+8h] [ebp-18h] BYREF
  _BYTE v7[12]; // [esp+14h] [ebp-Ch] BYREF

  LOBYTE(v2) = a2; /*0x54d930*/
  if ( !a2 ) /*0x54d93a*/
  {
    v3 = (_DWORD *)(*(int (__stdcall **)(JumpjetLocomotionClass *, _BYTE *))(this->LocomotionClass[0] + 24))(this, v7); /*0x54d949*/
    v6[0] = *v3; /*0x54d954*/
    v4 = v3[1]; /*0x54d958*/
    v6[1] = v4; /*0x54d95b*/
    v2 = v3[2]; /*0x54d95f*/
    v6[2] = v2; /*0x54d964*/
    if ( v6[0] != dword_ABC5A8 || v4 != dword_ABC5AC || v2 != dword_ABC5B0 ) /*0x54d979*/
    {
      if ( !*(_DWORD *)&this->IsMoving || (LOBYTE(v2) = this->__pad_89[3], (_BYTE)v2) ) /*0x54d98a*/
      {
        LOBYTE(v2) = (*((int (__thiscall **)(FootClass *, _DWORD *))this->?->TechnoClass + 61))(this->?, v6); /*0x54d996*/
        this->__pad_89[3] = 0; /*0x54d99c*/
      }
    }
  }
  return v2; /*0x54d9a3*/
}



// ==== 0x0054D9B0  JumpjetLocomotionClass::GetConditionedCoordinate  this=JumpjetLocomotionClass  sig=csp ====
_DWORD *__stdcall JumpjetLocomotionClass::GetConditionedCoordinate(JumpjetLocomotionClass *this, _DWORD *a2)
{
  int v2; // edx
  int v3; // esi
  int v5; // edx
  int v6; // eax

  if ( *(_DWORD *)&this->IsMoving ) /*0x54d9b6*/
  {
    v5 = this->DestinationCoords[0]; /*0x54d9e7*/
    v6 = this->DestinationCoords[1]; /*0x54d9ea*/
    *a2 = *(_DWORD *)&this->__pad_39[3]; /*0x54d9ef*/
    a2[1] = v5; /*0x54d9f1*/
    a2[2] = v6; /*0x54d9f4*/
    return a2; /*0x54d9f7*/
  }
  else
  {
    v2 = this->?->?[1]; /*0x54d9c7*/
    v3 = this->?->?[2]; /*0x54d9ca*/
    *a2 = this->?->?[0]; /*0x54d9d3*/
    a2[1] = v2; /*0x54d9d5*/
    a2[2] = v3; /*0x54d9d8*/
    return a2; /*0x54d9cd*/
  }
}



// ==== 0x0054DA00  JumpjetLocomotionClass::StubReturnZero_9  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::StubReturnZero_9(JumpjetLocomotionClass *this, int a2)
{
  if ( !a2 ) /*0x54da06*/
    return -2147467261; /*0x54da08*/
  if ( *(_DWORD *)&this->__pad_74[8] ) /*0x54da14*/
    return -2147467259; /*0x54da3b*/
  *(_DWORD *)&this->__pad_74[8] = a2; /*0x54da22*/
  (*(void (__stdcall **)(int))(*(_DWORD *)a2 + 4))(a2); /*0x54da28*/
  return 0; /*0x54da0d*/
}



// ==== 0x0054DA50  JumpjetLocomotionClass::StubReturnZero_10  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::StubReturnZero_10(JumpjetLocomotionClass *this, _DWORD *a2)
{
  int v3; // eax
  _DWORD *v4; // ecx
  int v5; // eax

  if ( !a2 ) /*0x54da5b*/
    return -2147467261; /*0x54da5f*/
  v3 = *((_DWORD *)this - 3); /*0x54da6c*/
  if ( v3 ) /*0x54da71*/
  {
    if ( *(_BYTE *)(v3 + 1709) || *(_BYTE *)(v3 + 1710) ) /*0x54da7b*/
    {
      *(_BYTE *)(v3 + 1709) = 0; /*0x54da83*/
      *(_BYTE *)(*((_DWORD *)this - 3) + 1710) = 0; /*0x54da8c*/
      v4 = (_DWORD *)*((_DWORD *)this - 3); /*0x54da92*/
      if ( !*(_BYTE *)(v4[135] + 492) && *(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*v4 + 132))(v4) + 1516) ) /*0x54daab*/
        (*(void (__thiscall **)(_DWORD, int, _DWORD))(**((_DWORD **)this - 3) + 488))(*((_DWORD *)this - 3), 10, 0); /*0x54dabb*/
    }
    *(_DWORD *)(*((_DWORD *)this - 3) + 1064) = 0; /*0x54dac4*/
    *(_DWORD *)(*((_DWORD *)this - 3) + 1068) = 0; /*0x54dacd*/
  }
  v5 = *(_DWORD *)&this->__pad_74[8]; /*0x54dad3*/
  if ( !v5 ) /*0x54dad8*/
    return 1; /*0x54dae9*/
  *a2 = v5; /*0x54dada*/
  *(_DWORD *)&this->__pad_74[8] = 0; /*0x54dadc*/
  return 0; /*0x54da5d*/
}



// ==== 0x0054DB00  JumpjetLocomotionClass::StubReturnTrue_2  this=JumpjetLocomotionClass  sig=csp ====
bool __stdcall JumpjetLocomotionClass::StubReturnTrue_2(JumpjetLocomotionClass *this)
{
  int v1; // esi
  bool result; // al

  result = 0; /*0x54db3e*/
  if ( !(*(unsigned __int8 (__stdcall **)(char *))(*((_DWORD *)this - 5) + 16))((char *)this - 20) ) /*0x54db0c*/
  {
    if ( *(_DWORD *)&this->__pad_74[8] ) /*0x54db13*/
    {
      if ( !this->__pad_74[5] ) /*0x54db1a*/
      {
        v1 = *((_DWORD *)this - 3); /*0x54db21*/
        if ( !*(_BYTE *)(v1 + 1709) || *(_BYTE *)(v1 + 1710) ) /*0x54db2e*/
          return 1; /*0x54db11*/
      }
    }
  }
  return result; /*0x54db3a*/
}



// ==== 0x0054DB50  JumpjetLocomotionClass::LoadLocomotionFromStream_1  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::LoadLocomotionFromStream_1(JumpjetLocomotionClass *this, _DWORD *pad_0)
{
  _DWORD *v2; // ebp
  char *v4; // eax
  int v5; // eax
  int v6; // esi
  int v7; // esi
  JumpjetLocomotionClass *v8; // eax
  JumpjetLocomotionClass *v9; // edi

  v2 = pad_0; /*0x54db51*/
  if ( !pad_0 ) /*0x54db58*/
    return -2147467261; /*0x54db61*/
  v4 = &this->__pad_74[8]; /*0x54db6b*/
  if ( *(_DWORD *)&this->__pad_74[8] ) /*0x54db68*/
  {
    this = 0; /*0x54db74*/
    v5 = StreamClass::Set2((StreamClass *)&this, v4); /*0x54db85*/
    if ( v5 < 0 && v5 != -2147467262 ) /*0x54db93*/
      WinAPI::Wrapper(v5); /*0x54db96*/
    if ( !this ) /*0x54dba1*/
      return -2147467259; /*0x54dbaa*/
    v6 = (*(int (__stdcall **)(JumpjetLocomotionClass *, _DWORD *))(this->LocomotionClass[0] + 12))(this, v2); /*0x54dbb4*/
    if ( this ) /*0x54dbbc*/
    {
      (*(void (__stdcall **)(JumpjetLocomotionClass *))(this->LocomotionClass[0] + 8))(this); /*0x54dbc5*/
      return v6; /*0x54dbcc*/
    }
  }
  else
  {
    pad_0 = 0; /*0x54dbd2*/
    if ( this == (JumpjetLocomotionClass *)24 ) /*0x54dbdc*/
      return -2147467259; /*0x54dbdc*/
    v7 = (**((int (__stdcall ***)(char *, void *, JumpjetLocomotionClass **))this - 6))( /*0x54dbed*/
           (char *)this - 24,
           &unk_818858,
           &this);
    if ( v7 >= 0 ) /*0x54dbf1*/
    {
      v9 = this; /*0x54dc05*/
      ComPtr::Release_Alt((ComPtr *)&pad_0); /*0x54dc0d*/
      v8 = v9; /*0x54dc12*/
      pad_0 = v9->LocomotionClass; /*0x54dc15*/
    }
    else
    {
      ComPtr::Release_Alt((ComPtr *)&pad_0); /*0x54dbf7*/
      v8 = 0; /*0x54dbfc*/
      pad_0 = 0; /*0x54dbfe*/
    }
    if ( v7 < 0 && v7 != -2147467262 ) /*0x54dc23*/
      WinAPI::Wrapper(v7); /*0x54dc26*/
    if ( !v8 ) /*0x54dc31*/
      return -2147467259; /*0x54dc3a*/
    v6 = (*(int (__stdcall **)(JumpjetLocomotionClass *, _DWORD *))(v8->LocomotionClass[0] + 12))(v8, v2); /*0x54dc44*/
    if ( pad_0 ) /*0x54dc4c*/
      (*(void (__stdcall **)(_DWORD *))(*pad_0 + 8))(pad_0); /*0x54dc51*/
  }
  return v6; /*0x54db5a*/
}



// ==== 0x0054DC60  JumpjetLocomotionClass::QueryInterface  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::QueryInterface(JumpjetLocomotionClass *this, const void *a2, int *a3)
{
  int result; // eax
  int *p_TurnRate; // eax

  result = LocomotionClass::QueryInterface((LocomotionClass *)this, a2, a3); /*0x54dc72*/
  if ( result == -2147467262 ) /*0x54dc7c*/
  {
    if ( !memcmp(a2, &IID_IPiggyback, 0x10u) ) /*0x54dc8b*/
    {
      if ( this ) /*0x54dc92*/
        p_TurnRate = &this->TurnRate; /*0x54dc94*/
      else
        p_TurnRate = 0; /*0x54dc99*/
      *a3 = (int)p_TurnRate; /*0x54dc9b*/
    }
    if ( *a3 ) /*0x54dc9e*/
    {
      (*(void (__stdcall **)(JumpjetLocomotionClass *))(this->LocomotionClass[0] + 4))(this); /*0x54dcb2*/
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
float *__stdcall JumpjetLocomotionClass::ComputeMovementTransform(JumpjetLocomotionClass *this, float *a2, _DWORD *a3)
{
  double v3; // st4
  double v4; // st5
  double v5; // st6
  FootClass *v6; // ecx
  long double v7; // st7
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // edi
  int v12; // eax
  int v13; // eax
  FootClass *Owner; // ecx
  float *Transform; // eax
  float *v16; // eax
  float *v17; // esi
  float *v19; // esi
  float v20; // [esp+4h] [ebp-144h]
  float v21; // [esp+4h] [ebp-144h]
  float v22; // [esp+4h] [ebp-144h]
  float v23; // [esp+14h] [ebp-134h]
  int v24; // [esp+14h] [ebp-134h]
  float v25; // [esp+18h] [ebp-130h]
  int v26; // [esp+18h] [ebp-130h]
  float v27; // [esp+1Ch] [ebp-12Ch]
  int v28; // [esp+1Ch] [ebp-12Ch]
  float v29; // [esp+20h] [ebp-128h]
  float v30; // [esp+24h] [ebp-124h]
  Matrix3x4 v31; // [esp+28h] [ebp-120h] BYREF
  Matrix3x4 v32; // [esp+58h] [ebp-F0h] BYREF
  Transform v33[12]; // [esp+88h] [ebp-C0h] BYREF
  float v34[12]; // [esp+B8h] [ebp-90h] BYREF
  float v35[12]; // [esp+E8h] [ebp-60h] BYREF
  float v36[12]; // [esp+118h] [ebp-30h] BYREF

  if ( *(_BYTE *)((*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 33))(this->?) + 3362) /*0x54dd13*/
    && ((v6 = this->?, fabs(*(float *)&v6->?) >= 0.005) || fabs(*(float *)&v6->?) >= 0.005) )
  {
    if ( a3 ) /*0x54dd23*/
      *a3 = -1; /*0x54dd25*/
    Matrix3x4::Identity(&v32); /*0x54dd2f*/
    Matrix3x4::Identity(&v31); /*0x54dd38*/
    v7 = *(double *)((*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 33))(this->?) + 864); /*0x54dd4b*/
    v25 = v7; /*0x54dd53*/
    v23 = *(double *)((*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 33))(this->?) + 872); /*0x54dd69*/
    Math::ArcTan2(*(float *)&this->?->?); /*0x54dd76*/
    v29 = v3; /*0x54dd7e*/
    Math::SinCos(*(float *)&this->?->?); /*0x54dd8b*/
    v27 = v4; /*0x54dd93*/
    Math::ArcTan2(*(float *)&this->?->?); /*0x54dda0*/
    v30 = v5; /*0x54dda8*/
    Math::SinCos(*(float *)&this->?->?); /*0x54ddb5*/
    LOWORD(v8) = Math::RoundToInt(fabs(v7) * v25 + fabs(v27) * v23); /*0x54ddcf*/
    v28 = v8; /*0x54dddc*/
    LOWORD(v9) = Math::RoundToInt(v29 * v23); /*0x54dde0*/
    LOWORD(v10) = Math::RoundToInt(v23 - (double)v9); /*0x54ddf1*/
    v11 = v10; /*0x54ddfe*/
    v24 = v10; /*0x54de00*/
    LOWORD(v12) = Math::RoundToInt(v30 * v25); /*0x54de04*/
    LOWORD(v13) = Math::RoundToInt(v25 - (double)v12); /*0x54de15*/
    Owner = this->?; /*0x54de1a*/
    v26 = v13; /*0x54de1f*/
    if ( *(float *)&Owner->? < 0.0 ) /*0x54de34*/
      v24 = -v11; /*0x54de38*/
    if ( *(float *)&Owner->? > 0.0 ) /*0x54de4d*/
      v26 = -v13; /*0x54de51*/
    v20 = (float)v28; /*0x54de5e*/
    Matrix3x3::ApplyCol1(v32.m_Data, v20); /*0x54de61*/
    v21 = (float)v24; /*0x54de6f*/
    Matrix3x4::Translate(v31.m_Data, v21); /*0x54de72*/
    v22 = (float)v26; /*0x54de80*/
    Matrix3x3::ApplyCol0(v31.m_Data, v22); /*0x54de83*/
    Matrix3x3::RotateX(v31.m_Data, *(float *)&this->?->?); /*0x54de96*/
    Matrix3D::RotateZ(v31.m_Data, *(float *)&this->?->?); /*0x54dea9*/
    Transform = Turret::GetTransform((LocomotionClass *)this, v35, a3); /*0x54deb8*/
    Transform::Copy(v33, Transform); /*0x54dec5*/
    v16 = MultiplyMatrix3x4(v36, (float *)v32.m_Data, (float *)&v33[0].Transform_field_00); /*0x54dee2*/
    v17 = MultiplyMatrix3x4(v34, v16, (float *)v31.m_Data); /*0x54def5*/
    qmemcpy(a2, v17, 0x30u); /*0x54df06*/
    return a2; /*0x54defc*/
  }
  else
  {
    v19 = Turret::GetTransform((LocomotionClass *)this, v34, a3); /*0x54df29*/
    qmemcpy(a2, v19, 0x30u); /*0x54df39*/
    return a2; /*0x54df30*/
  }
}



// ==== 0x0054DF50  JumpjetLocomotionClass::AddRef  this=JumpjetLocomotionClass  sig=csp ====
LONG __stdcall JumpjetLocomotionClass::AddRef(JumpjetLocomotionClass *this)
{
  return COM::AddRef((LocomotionClass *)this); /*0x54df5a*/
}



// ==== 0x0054DF60  JumpjetLocomotionClass::Release  this=JumpjetLocomotionClass  sig=csp ====
LONG __stdcall JumpjetLocomotionClass::Release(JumpjetLocomotionClass *this)
{
  return COM::ReleaseRef((LocomotionClass *)this); /*0x54df6a*/
}



// ==== 0x0054DF70  JumpjetLocomotionClass::ShortFunc_54DF70  this=JumpjetLocomotionClass  sig=csp ====
BOOL __stdcall JumpjetLocomotionClass::sub_54DF70(int a1)
{
  return *(_DWORD *)(a1 + 124) != 0; /*0x54df7e*/
}



// ==== 0x0054DF90  JumpjetLocomotionClass::CheckAttachStatus  this=JumpjetLocomotionClass  sig=csp ====
int JumpjetLocomotionClass::CheckAttachStatus(JumpjetLocomotionClass *this)
{
  return 152; /*0x54df95*/
}



// ==== 0x0054DFA0  JumpjetLocomotionClass::ProcessAttach  this=JumpjetLocomotionClass  sig=csp ====
_DWORD *__thiscall JumpjetLocomotionClass::ProcessAttach(JumpjetLocomotionClass *this, char a2)
{
  ILocomotion *Piggybackee; // eax

  this->LocomotionClass[0] = (int)&JumpjetLocomotionClass::`vftable'; /*0x54dfa3*/
  this->LocomotionClass[1] = (int)&JumpjetLocomotionClass::`vftable'; /*0x54dfa9*/
  this->TurnRate = (int)&JumpjetLocomotionClass::`vftable'; /*0x54dfb0*/
  Piggybackee = this->Piggybackee; /*0x54dfb7*/
  if ( Piggybackee ) /*0x54dfbf*/
    (*(void (__stdcall **)(ILocomotion *))(*(_DWORD *)Piggybackee + 8))(Piggybackee); /*0x54dfc4*/
  LocomotionClass::Construct((LocomotionClass *)this); /*0x54dfc9*/
  if ( (a2 & 1) != 0 ) /*0x54dfd3*/
    __3_YAXPAX_Z(this); /*0x54dfd6*/
  return this->LocomotionClass; /*0x54dfe0*/
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
  unk_ABC638 = Math::Sqrt(v0 + v0); /*0x54e06e*/
}



// ==== 0x0054E080  sub_54E080  this=-  sig=ida-proto ====
void sub_54E080()
{
  unk_ABC688 = unk_ABC638 / 60.0; /*0x54e08c*/
}



// ==== 0x0054E0A0  sub_54E0A0  this=-  sig=ida-proto ====
void sub_54E0A0()
{
  unk_ABC670 = 1.0 / unk_ABC688; /*0x54e0ac*/
}



// ==== 0x0054E0C0  sub_54E0C0  this=-  sig=ida-proto ====
void sub_54E0C0()
{
  unk_ABC668 = 0.0174532925199433 * 45.0; /*0x54e0cc*/
}



// ==== 0x0054E0E0  sub_54E0E0  this=-  sig=ida-proto ====
void sub_54E0E0()
{
  unk_ABC640 = 0.0174532925199433 * 60.0; /*0x54e0ec*/
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

  v0 = Math::Sin(dbl_ABC5F0 - unk_ABC640); /*0x54e132*/
  result = Math::RoundToInt(v0 * unk_ABC638 * 0.5); /*0x54e146*/
  unk_ABC690 = result; /*0x54e14b*/
  return result; /*0x54e150*/
}



// ==== 0x0054E160  sub_54E160  this=-  sig=ida-proto ====
void sub_54E160()
{
  unk_ABC648 = Math::ArcTan((double)unk_ABC690 * 0.00390625); /*0x54e177*/
}



// ==== 0x0054E190  sub_54E190  this=-  sig=ida-proto ====
void sub_54E190()
{
  unk_ABC660 = Math::ArcTan((double)(2 * unk_ABC690) / unk_ABC638); /*0x54e1b2*/
}



// ==== 0x0054E1C0  sub_54E1C0  this=-  sig=ida-proto ====
__int64 sub_54E1C0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * unk_ABC690) + 0.5); /*0x54e1db*/
  unk_ABC684 = result; /*0x54e1e0*/
  return result; /*0x54e1e6*/
}



// ==== 0x0054E1F0  sub_54E1F0  this=-  sig=ida-proto ====
int sub_54E1F0()
{
  unk_ABC630 = 0; /*0x54e1f2*/
  unk_ABC632 = 0; /*0x54e1f8*/
  return 0; /*0x54e1fe*/
}



// ==== 0x0054E200  sub_54E200  this=-  sig=ida-proto ====
int sub_54E200()
{
  unk_ABC650 = 0; /*0x54e202*/
  unk_ABC654 = 0; /*0x54e207*/
  unk_ABC658 = 0; /*0x54e20c*/
  return 0; /*0x54e211*/
}



// ==== 0x0054E220  sub_54E220  this=-  sig=ida-proto ====
int sub_54E220()
{
  unk_ABC680 = 0; /*0x54e225*/
  unk_ABC678 = 128; /*0x54e22f*/
  unk_ABC67C = 128; /*0x54e234*/
  return 128; /*0x54e239*/
}



// ==== 0x0054E240  sub_54E240  this=-  sig=ida-proto ====
int sub_54E240()
{
  unk_ABC620 = 0; /*0x54e242*/
  unk_ABC624 = 0; /*0x54e247*/
  unk_ABC628 = 0; /*0x54e24c*/
  unk_ABC62C = 0; /*0x54e251*/
  return 0; /*0x54e256*/
}



// ==== 0x0054E260  ObjectClass::method_54E260  this=ObjectClass  sig=csp ====
int sub_54E260(ObjectClass *this)
{
  int v2; // [esp+4h] [ebp-8h]

  g_MissionQueueFrame.nextScenario[0] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x54e26d*/
  g_MissionQueueFrame.nextScenario[2] = 0; /*0x54e276*/
  sub_54EBF0((VectorClass *)&g_MissionQueueFrame.nextScenario[3], 0, 0); /*0x54e280*/
  g_MissionQueueFrame.nextScenario[3] = (int)&DynamicVectorClass<KamikazeControl *>::`vftable'; /*0x54e298*/
  g_MissionQueueFrame.nextScenario[8] = 10; /*0x54e2a2*/
  g_MissionQueueFrame.nextScenario[7] = 0; /*0x54e2ac*/
  g_MissionQueueFrame.nextScenario[0] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x54e2b6*/
  g_MissionQueueFrame.nextScenario[1] = v2; /*0x54e2bb*/
  g_MissionQueueFrame.nextScenario[2] = 100; /*0x54e2c1*/
  return atexit(loc_54E2D0); /*0x54e2cf*/
}



// ==== 0x0054E360  ObjectClass::method_54E360  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_54E360(ObjectClass *this)
{
  void *v2; // [esp+8h] [ebp-8h]

  this->AbstractClass = *(void **)&stru_A8EB00.?[416]; /*0x54e370*/
  this->? = 0; /*0x54e375*/
  this->? = 0; /*0x54e378*/
  this->? = 0; /*0x54e37b*/
  LOBYTE(this->?) = 1; /*0x54e37e*/
  BYTE1(this->?) = 0; /*0x54e382*/
  this->? = &DynamicVectorClass<KamikazeControl *>::`vftable'; /*0x54e385*/
  this->? = (void *)10; /*0x54e38c*/
  this->? = 0; /*0x54e393*/
  this->AbstractClass = *(void **)&stru_A8EB00.?[416]; /*0x54e39e*/
  this->? = v2; /*0x54e3a4*/
  this->? = (void *)100; /*0x54e3a7*/
  return &this->AbstractClass; /*0x54e3aa*/
}



// ==== 0x0054E3B0  UnitClass::GetExitCell  this=UnitClass  sig=csp ====
int __thiscall UnitClass_GetExitCell(int this, _DWORD *a2, _DWORD *a3)
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
  v6 = __2_YAPAXI_Z(8u); /*0x54e3e3*/
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
    v8[1] = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a3); /*0x54e475*/
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



// ==== 0x0054E4D0  ScenarioClass::UpdateScriptActions  this=ScenarioClass  sig=csp ====
int __thiscall ScenarioClass::UpdateScriptActions(ScenarioClass *this)
{
  int v2; // edx
  int result; // eax
  int v4; // edx
  int v5; // ebp
  _DWORD *v6; // eax
  int v7; // ecx
  int v8; // esi
  unsigned int v9; // edi
  Cell *v10; // eax
  void *NeighbourContent; // eax
  _DWORD v12[4]; // [esp+Ch] [ebp-10h] BYREF

  v2 = this->nextScenario[0]; /*0x54e4d8*/
  result = this->nextScenario[2]; /*0x54e4da*/
  if ( this->nextScenario[0] == -1 ) /*0x54e4e6*/
  {
LABEL_4:
    if ( result ) /*0x54e4f4*/
      return result; /*0x54e4f4*/
    goto LABEL_5; /*0x54e4f4*/
  }
  if ( *(_DWORD *)&stru_A8EB00.?[416] - v2 < result ) /*0x54e4ee*/
  {
    result -= *(_DWORD *)&stru_A8EB00.?[416] - v2; /*0x54e4f0*/
    goto LABEL_4; /*0x54e4f0*/
  }
LABEL_5:
  v4 = v12[2]; /*0x54e4fa*/
  v5 = 0; /*0x54e505*/
  this->nextScenario[0] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x54e507*/
  this->nextScenario[1] = v4; /*0x54e509*/
  this->nextScenario[2] = 30; /*0x54e50c*/
  result = this->nextScenario[7]; /*0x54e50f*/
  if ( result > 0 ) /*0x54e514*/
  {
    do /*0x54e581*/
    {
      v6 = *(_DWORD **)(this->nextScenario[4] + 4 * v5); /*0x54e51a*/
      v7 = v6[1]; /*0x54e51d*/
      v8 = *v6; /*0x54e520*/
      *(_DWORD *)(*v6 + 764) = 1; /*0x54e524*/
      if ( v7 ) /*0x54e52e*/
      {
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v8 + 968))(v8, v7); /*0x54e567*/
      }
      else
      {
        v9 = ((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)(v8 + 904), v12) >> 12) + 1) >> 1) & 7; /*0x54e54c*/
        v10 = (Cell *)(*(int (__thiscall **)(int))(*(_DWORD *)v8 + 444))(v8); /*0x54e54f*/
        NeighbourContent = Cell::GetNeighbourContent(v10, v9); /*0x54e558*/
        (*(void (__thiscall **)(int, void *))(*(_DWORD *)v8 + 968))(v8, NeighbourContent); /*0x54e560*/
      }
      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v8 + 488))(v8, 1, 0); /*0x54e575*/
      result = this->nextScenario[7]; /*0x54e57b*/
      ++v5; /*0x54e57e*/
    }
    while ( v5 < result ); /*0x54e581*/
  }
  return result; /*0x54e584*/
}



// ==== 0x0054E590  AbstractClass::processStateTransition  this=AbstractClass  sig=csp ====
void __thiscall AbstractClass::processStateTransition(AbstractClass *this, int a2)
{
  int v3; // esi
  int uniqueId; // ebx
  int i; // edx
  int referenceCount; // eax
  int v7; // ecx
  int v8; // eax
  _DWORD *v9; // eax
  void *v10; // ebx
  _DWORD *v11; // eax
  int v12; // ecx
  __int16 v13[2]; // [esp+Ch] [ebp-10h] BYREF
  char v14[12]; // [esp+10h] [ebp-Ch] BYREF
  int v15; // [esp+20h] [ebp+4h]

  v3 = this->referenceCount - 1; /*0x54e59b*/
  if ( v3 >= 0 ) /*0x54e59c*/
  {
    uniqueId = this->uniqueId; /*0x54e5a2*/
    for ( i = uniqueId + 4 * v3; a2 != **(_DWORD **)i; i -= 4 ) /*0x54e5a9*/
    {
      if ( a2 == *(_DWORD *)(*(_DWORD *)i + 4) ) /*0x54e5b5*/
      {
        v9 = (_DWORD *)(*(int (__stdcall **)(char *))(*(_DWORD *)a2 + 72))(v14); /*0x54e611*/
        LOWORD(v15) = *v9 / 256; /*0x54e624*/
        HIWORD(v15) = v9[1] / 256; /*0x54e63d*/
        *(_DWORD *)v13 = v15; /*0x54e64b*/
        v10 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v13); /*0x54e657*/
        v11 = *(_DWORD **)(this->uniqueId + 4 * v3); /*0x54e65a*/
        (*(void (__thiscall **)(_DWORD, void *))(*(_DWORD *)*v11 + 968))(*v11, v10); /*0x54e661*/
        v12 = **(_DWORD **)(this->uniqueId + 4 * v3); /*0x54e671*/
        (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v12 + 488))(v12, 1, 0); /*0x54e675*/
        *(_DWORD *)(*(_DWORD *)(this->uniqueId + 4 * v3) + 4) = v10; /*0x54e681*/
        return; /*0x54e681*/
      }
      if ( --v3 < 0 ) /*0x54e5bd*/
        return; /*0x54e5bd*/
    }
    __3_YAXPAX_Z(*(void **)(uniqueId + 4 * v3)); /*0x54e5cc*/
    referenceCount = this->referenceCount; /*0x54e5d1*/
    if ( v3 < referenceCount ) /*0x54e5d9*/
    {
      v7 = referenceCount - 1; /*0x54e5df*/
      v8 = v3; /*0x54e5e2*/
      for ( this->referenceCount = v7; /*0x54e5e9*/
            v8 < this->referenceCount;
            *(_DWORD *)(this->uniqueId + 4 * v8 - 4) = *(_DWORD *)(this->uniqueId + 4 * v8) )
      {
        ++v8; /*0x54e5f2*/
      }
    }
  }
}



// ==== 0x0054E690  ObjectClass::method_54E690  this=ObjectClass  sig=csp ====
void __thiscall sub_54E690(ObjectClass *this)
{
  int i; // esi
  void (__thiscall **ptr_C)(void **); // edx
  void **p_vtable3; // esi
  void **v5; // ecx
  int abstractFlags; // edi
  void *v7; // eax

  for ( i = this->? - 1; i >= 0; --i ) /*0x54e699*/
    __3_YAXPAX_Z(*(void **)(this->? + 4 * i)); /*0x54e6a2*/
  ptr_C = (void (__thiscall **)(void **))this->?; /*0x54e6ad*/
  p_vtable3 = &this->?; /*0x54e6b0*/
  v5 = &this->?; /*0x54e6b3*/
  abstractFlags = this->?; /*0x54e6b5*/
  ptr_C[3](v5); /*0x54e6b8*/
  (*((void (__thiscall **)(void **, int, _DWORD))*p_vtable3 + 2))(p_vtable3, abstractFlags, 0); /*0x54e6c3*/
  v7 = p_vtable3[1]; /*0x54e6c6*/
  *p_vtable3 = &VectorClass<KamikazeControl *>::`vftable'; /*0x54e6c9*/
  if ( v7 && *((_BYTE *)p_vtable3 + 13) ) /*0x54e6d3*/
  {
    __3_YAXPAX_Z(v7); /*0x54e6d9*/
    p_vtable3[1] = 0; /*0x54e6e1*/
  }
  *((_BYTE *)p_vtable3 + 13) = 0; /*0x54e6e4*/
  p_vtable3[2] = 0; /*0x54e6e7*/
}



// ==== 0x0054E6F0  LoadGame::CleanupArray  this=LoadGame  sig=csp ====
wchar_t *__thiscall LoadGame::CleanupArray(LoadGame *this)
{
  int i; // esi
  int LoadGame_field_0x14; // ebx
  wchar_t *result; // eax
  int v5; // [esp+10h] [ebp-8h]

  for ( i = this->LoadGame_field_0x1C - 1; i >= 0; --i ) /*0x54e6fc*/
    __3_YAXPAX_Z(*(void **)(this->LoadGame_field_0x10 + 4 * i)); /*0x54e705*/
  LoadGame_field_0x14 = this->LoadGame_field_0x14; /*0x54e713*/
  (*(void (__thiscall **)(int *))(this->LoadGame_field_0x0C + 12))(&this->LoadGame_field_0x0C); /*0x54e71b*/
  (*(void (__thiscall **)(int *, int, _DWORD))(this->LoadGame_field_0x0C + 8))( /*0x54e725*/
    &this->LoadGame_field_0x0C,
    LoadGame_field_0x14,
    0);
  result = *(wchar_t **)&stru_A8EB00.?[416]; /*0x54e728*/
  *(_DWORD *)this->__pad_0 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x54e736*/
  this->LoadGame_field_0x04 = v5; /*0x54e738*/
  this->LoadGame_field_0x08 = 1; /*0x54e73b*/
  return result; /*0x54e73e*/
}



// ==== 0x0054E750  SaveGame::WriteDataArray  this=SaveGame  sig=csp ====
int __thiscall SaveGame::WriteDataArray(SaveGame *this, int *a2)
{
  int v3; // ecx
  int result; // eax
  int i; // edi
  int v6; // [esp+20h] [ebp-4h] BYREF

  v3 = *a2; /*0x54e75c*/
  v6 = *(_DWORD *)&this->__pad_0[28]; /*0x54e769*/
  result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(v3 + 16))(a2, &v6, 4, 0); /*0x54e76d*/
  if ( result >= 0 ) /*0x54e772*/
  {
    for ( i = 0; i < v6; ++i ) /*0x54e77c*/
    {
      result = (*(int (__stdcall **)(int *, _DWORD, int, _DWORD))(*a2 + 16))( /*0x54e78c*/
                 a2,
                 *(_DWORD *)(*(_DWORD *)&this->__pad_0[16] + 4 * i),
                 8,
                 0);
      if ( result < 0 ) /*0x54e791*/
        break; /*0x54e791*/
    }
  }
  return result; /*0x54e79c*/
}



// ==== 0x0054E7B0  LoadGame::LoadPointArray  this=LoadGame  sig=csp ====
int __thiscall LoadGame::LoadPointArray(LoadGame *this, int a2)
{
  int v3; // ebx
  int *v4; // edi
  int LoadGame_field_0x14; // eax
  int *p_LoadGame_field_0x0C; // esi
  int LoadGame_field_0x20; // ecx
  int v8; // eax
  int v9; // edx
  int v11; // [esp+28h] [ebp-8h] BYREF
  LoadGame *v12; // [esp+2Ch] [ebp-4h]
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
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v4); /*0x54e811*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v4 + 1); /*0x54e81f*/
      LoadGame_field_0x14 = v12->LoadGame_field_0x14; /*0x54e828*/
      p_LoadGame_field_0x0C = &v12->LoadGame_field_0x0C; /*0x54e82b*/
      if ( v12->LoadGame_field_0x1C >= LoadGame_field_0x14 ) /*0x54e833*/
      {
        if ( !BYTE1(v12->LoadGame_field_0x18) && LoadGame_field_0x14 ) /*0x54e83e*/
          continue; /*0x54e83e*/
        LoadGame_field_0x20 = v12->LoadGame_field_0x20; /*0x54e840*/
        if ( LoadGame_field_0x20 <= 0 /*0x54e850*/
          || !(*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(*p_LoadGame_field_0x0C + 8))(
                &v12->LoadGame_field_0x0C,
                LoadGame_field_0x14 + LoadGame_field_0x20,
                0) )
        {
          continue; /*0x54e850*/
        }
      }
      v8 = p_LoadGame_field_0x0C[4]; /*0x54e857*/
      v9 = p_LoadGame_field_0x0C[1]; /*0x54e85a*/
      p_LoadGame_field_0x0C[4] = v8 + 1; /*0x54e860*/
      *(_DWORD *)(v9 + 4 * v8) = v4; /*0x54e863*/
      ++v13; /*0x54e871*/
    }
  }
  return v3; /*0x54e87b*/
}



// ==== 0x0054E890  _DynamicVectorClass_PAUKamikazeControl::ClearBuffer  this=DynamicVector  sig=csp ====
void __thiscall JumpjetLocomotionClass_26::ClearBuffer(_DynamicVectorClass_PAUKamikazeControl *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x54e896*/
  this->m_10 = 0; /*0x54e899*/
  if ( v2 && BYTE1(this->m_C) ) /*0x54e8a0*/
  {
    __3_YAXPAX_Z(v2); /*0x54e8a6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x54e8ae*/
  }
  BYTE1(this->m_C) = 0; /*0x54e8b1*/
  this->m_8 = 0; /*0x54e8b4*/
}



// ==== 0x0054E8C0  _DynamicVectorClass_PAUKamikazeControl::PointerToIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall JumpjetLocomotionClass_26::PointerToIndex(_DynamicVectorClass_PAUKamikazeControl *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x54e8c0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x54e8d5*/
  else
    return 0; /*0x54e8c7*/
}



// ==== 0x0054E8E0  _VectorClass_PAUKamikazeControl::Seek  this=VectorClass  sig=csp ====
int __thiscall JumpjetLocomotionClass_26::Seek(_VectorClass_PAUKamikazeControl *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x54e8ea*/
}



// ==== 0x0054E8F0  _VectorClass_PAUKamikazeControl::AddRef  this=VectorClass  sig=csp ====
char __thiscall JumpjetLocomotionClass_26::AddRef(_VectorClass_PAUKamikazeControl *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x54e8f2*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x54e8fd*/
  {
    v3 = 0; /*0x54e8ff*/
    if ( m_8 <= 0 ) /*0x54e903*/
      return 1; /*0x54e923*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x54e905*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x54e90b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x54e914*/
    {
      ++v3; /*0x54e916*/
      ++v4; /*0x54e917*/
      if ( v3 >= m_8 ) /*0x54e91c*/
        return 1; /*0x54e91c*/
    }
  }
  return 0; /*0x54e91e*/
}



// ==== 0x0054E930  _VectorClass_PAUKamikazeControl::Release  this=VectorClass  sig=csp ====
char __thiscall JumpjetLocomotionClass_26::Release(_VectorClass_PAUKamikazeControl *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x54e93c*/
  {
    LOBYTE(this->m_C) = 0; /*0x54e946*/
    if ( a3 ) /*0x54e94c*/
      v4 = a3; /*0x54e962*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x54e95e*/
    LOBYTE(this->m_C) = 1; /*0x54e966*/
    if ( v4 ) /*0x54e96a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x54e975*/
      {
        m_8 = this->m_8; /*0x54e97c*/
        if ( a2 < m_8 ) /*0x54e981*/
          m_8 = a2; /*0x54e983*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x54e989*/
          ++i; /*0x54e98e*/
        if ( BYTE1(this->m_C) ) /*0x54e99b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x54e9a6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x54e9ae*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x54e9b7*/
      this->m_8 = a2; /*0x54e9bf*/
      BYTE1(this->m_C) = a3 == 0; /*0x54e9c2*/
      return 1; /*0x54e9c8*/
    }
    else
    {
      return 0; /*0x54e96f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAUKamikazeControl *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x54e9d2*/
    return 1; /*0x54e9d8*/
  }
}



// ==== 0x0054E9E0  _VectorClass_PAUKamikazeControl::ddtor  this=VectorClass  sig=csp ====
void __thiscall JumpjetLocomotionClass_26::ddtor(_VectorClass_PAUKamikazeControl *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x54e9ed*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x54e9f3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x54e9fb*/
  }
  BYTE1(this->m_C) = 0; /*0x54e9fe*/
  this->m_8 = 0; /*0x54ea01*/
}



// ==== 0x0054EA10  _VectorClass_PAUKamikazeControl::Read  this=VectorClass  sig=csp ====
int __thiscall JumpjetLocomotionClass_26::Read(_VectorClass_PAUKamikazeControl *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x54ea10*/
    return 0; /*0x54ea18*/
  m_8 = this->m_8; /*0x54ea1e*/
  result = 0; /*0x54ea21*/
  if ( m_8 <= 0 ) /*0x54ea25*/
    return -1; /*0x54ea3c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x54ea2b*/
  {
    if ( ++result >= m_8 ) /*0x54ea3a*/
      return -1; /*0x54ea3a*/
  }
  return result; /*0x54ea1a*/
}



// ==== 0x0054EA50  _VectorClass_PAUKamikazeControl::Write  this=VectorClass  sig=csp ====
unsigned int __thiscall JumpjetLocomotionClass_26::Write(_VectorClass_PAUKamikazeControl *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x54ea50*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x54ea65*/
  else
    return 0; /*0x54ea57*/
}



// ==== 0x0054EA70  _DynamicVectorClass_PAUKamikazeControl::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall JumpjetLocomotionClass_26::SetCapacity(
        _DynamicVectorClass_PAUKamikazeControl *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x54ea7c*/
  {
    LOBYTE(this->m_C) = 0; /*0x54ea82*/
    if ( a3 ) /*0x54ea88*/
      v4 = a3; /*0x54ea9e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x54ea9a*/
    LOBYTE(this->m_C) = 1; /*0x54eaa2*/
    if ( !v4 ) /*0x54eaa6*/
      return 0; /*0x54eb1a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x54eaa8*/
    {
      m_8 = this->m_8; /*0x54eaaf*/
      if ( a2 < m_8 ) /*0x54eab4*/
        m_8 = a2; /*0x54eab6*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x54eabc*/
        ++i; /*0x54eac1*/
      if ( BYTE1(this->m_C) ) /*0x54eace*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x54ead9*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x54eae1*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x54eaea*/
    this->m_8 = a2; /*0x54eaf2*/
    BYTE1(this->m_C) = a3 == 0; /*0x54eaf5*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAUKamikazeControl *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x54eafe*/
  }
  v7 = this->m_8; /*0x54eb01*/
  if ( v7 < this->m_10 ) /*0x54eb09*/
    this->m_10 = v7; /*0x54eb0b*/
  return 1; /*0x54eb0e*/
}



// ==== 0x0054EB20  _DynamicVectorClass_PAUKamikazeControl::FindItem  this=DynamicVector  sig=csp ====
int __thiscall JumpjetLocomotionClass_26::FindItem(_DynamicVectorClass_PAUKamikazeControl *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x54eb20*/
  result = 0; /*0x54eb23*/
  if ( m_10 <= 0 ) /*0x54eb28*/
    return -1; /*0x54eb3f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x54eb2e*/
  {
    if ( ++result >= m_10 ) /*0x54eb3d*/
      return -1; /*0x54eb3d*/
  }
  return result; /*0x54eb42*/
}



// ==== 0x0054EB50  _VectorClass_PAUKamikazeControl::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall JumpjetLocomotionClass_26::QueryInterface(_VectorClass_PAUKamikazeControl *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x54eb53*/
  *(_DWORD *)this->__pad_0 = &VectorClass<KamikazeControl *>::`vftable'; /*0x54eb56*/
  if ( v3 && BYTE1(this->m_C) ) /*0x54eb60*/
  {
    __3_YAXPAX_Z(v3); /*0x54eb68*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x54eb70*/
  }
  BYTE1(this->m_C) = 0; /*0x54eb7b*/
  this->m_8 = 0; /*0x54eb81*/
  if ( (a2 & 1) != 0 ) /*0x54eb88*/
    __3_YAXPAX_Z(this); /*0x54eb8b*/
  return this->__pad_0; /*0x54eb95*/
}



// ==== 0x0054EBA0  _DynamicVectorClass_PAUKamikazeControl::Constructor_VectorClass_KamikazeControl___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall JumpjetLocomotionClass_26::Constructor_VectorClass_KamikazeControl___(
        _DynamicVectorClass_PAUKamikazeControl *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x54eba3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<KamikazeControl *>::`vftable'; /*0x54eba6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x54ebb0*/
  {
    __3_YAXPAX_Z(v3); /*0x54ebb8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x54ebc0*/
  }
  BYTE1(this->m_C) = 0; /*0x54ebcb*/
  this->m_8 = 0; /*0x54ebd1*/
  if ( (a2 & 1) != 0 ) /*0x54ebd8*/
    __3_YAXPAX_Z(this); /*0x54ebdb*/
  return this->__pad_0; /*0x54ebe5*/
}



// ==== 0x0054EBF0  VectorClass::sub_54EBF0  this=VectorClass  sig=csp ====
_DWORD *__thiscall sub_54EBF0(VectorClass *this, int a2, int a3)
{
  this->Items = 0; /*0x54ebfb*/
  this->Capacity = a2; /*0x54ebfe*/
  this->IsInitialized = 1; /*0x54ec01*/
  this->IsAllocated = 0; /*0x54ec05*/
  this->ptr_0 = &VectorClass<KamikazeControl *>::`vftable'; /*0x54ec08*/
  if ( a2 ) /*0x54ec0e*/
  {
    if ( a3 ) /*0x54ec16*/
    {
      this->Items = (void *)a3; /*0x54ec18*/
      return &this->ptr_0; /*0x54ec1e*/
    }
    this->Items = (void *)__2_YAPAXI_Z(4 * a2); /*0x54ec2d*/
    this->IsAllocated = 1; /*0x54ec30*/
  }
  return &this->ptr_0; /*0x54ec1d*/
}



// ==== 0x0054EC40  sub_54EC40  this=-  sig=ida-proto ====
int sub_54EC40()
{
  unk_ABC6A0 = 0; /*0x54ec42*/
  unk_ABC6A4 = 0; /*0x54ec47*/
  unk_ABC6A8 = 0; /*0x54ec4c*/
  unk_ABC6AC = 0; /*0x54ec51*/
  return 0; /*0x54ec56*/
}



// ==== 0x0054EC60  sub_54EC60  this=-  sig=ida-proto ====
void sub_54EC60()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x54ec6c*/
  unk_ABC6B8 = Math::Sqrt(v0 + v0); /*0x54ec7e*/
}



// ==== 0x0054EC90  sub_54EC90  this=-  sig=ida-proto ====
void sub_54EC90()
{
  dbl_ABC708 = unk_ABC6B8 / 60.0; /*0x54ec9c*/
}



// ==== 0x0054ECB0  sub_54ECB0  this=-  sig=ida-proto ====
void sub_54ECB0()
{
  unk_ABC6F0 = 1.0 / dbl_ABC708; /*0x54ecbc*/
}



// ==== 0x0054ECD0  sub_54ECD0  this=-  sig=ida-proto ====
void sub_54ECD0()
{
  unk_ABC6E8 = 0.0174532925199433 * 45.0; /*0x54ecdc*/
}



// ==== 0x0054ECF0  sub_54ECF0  this=-  sig=ida-proto ====
void sub_54ECF0()
{
  unk_ABC6C0 = 0.0174532925199433 * 60.0; /*0x54ecfc*/
}



// ==== 0x0054ED10  sub_54ED10  this=-  sig=ida-proto ====
void sub_54ED10()
{
  unk_ABC698 = 0.0174532925199433 * 90.0; /*0x54ed1c*/
}



// ==== 0x0054ED30  sub_54ED30  this=-  sig=ida-proto ====
__int64 sub_54ED30()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(unk_ABC698 - unk_ABC6C0); /*0x54ed42*/
  result = Math::RoundToInt(v0 * unk_ABC6B8 * 0.5); /*0x54ed56*/
  dword_ABC710 = result; /*0x54ed5b*/
  return result; /*0x54ed60*/
}



// ==== 0x0054ED70  sub_54ED70  this=-  sig=ida-proto ====
void sub_54ED70()
{
  unk_ABC6C8 = Math::ArcTan((double)dword_ABC710 * 0.00390625); /*0x54ed87*/
}



// ==== 0x0054EDA0  sub_54EDA0  this=-  sig=ida-proto ====
void sub_54EDA0()
{
  unk_ABC6E0 = Math::ArcTan((double)(2 * dword_ABC710) / unk_ABC6B8); /*0x54edc2*/
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
  unk_ABC6B0 = 0; /*0x54ee02*/
  unk_ABC6B2 = 0; /*0x54ee08*/
  return 0; /*0x54ee0e*/
}



// ==== 0x0054EE10  sub_54EE10  this=-  sig=ida-proto ====
int sub_54EE10()
{
  unk_ABC6D0 = 0; /*0x54ee12*/
  unk_ABC6D4 = 0; /*0x54ee17*/
  unk_ABC6D8 = 0; /*0x54ee1c*/
  return 0; /*0x54ee21*/
}



// ==== 0x0054EE30  sub_54EE30  this=-  sig=ida-proto ====
int sub_54EE30()
{
  dword_ABC700 = 0; /*0x54ee35*/
  unk_ABC6F8 = 128; /*0x54ee3f*/
  dword_ABC6FC = 128; /*0x54ee44*/
  return 128; /*0x54ee49*/
}



// ==== 0x0054EE50  nullsub_157  this=-  sig=ida-proto ====
void nullsub_157()
{
  ; /*0x54ee50*/
}



// ==== 0x0054EE60  NetworkSession::ResetState  this=NetworkSession  sig=csp ====
_DWORD *__thiscall NetworkSession::ResetState(NetworkSession *this)
{
  *(_DWORD *)this->__pad_0 = 0; /*0x54ee6a*/
  this->NetworkSession_field_0x04 = 0; /*0x54ee6c*/
  *((_DWORD *)this + 3) = 0; /*0x54ee6f*/
  this->q004 = 0; /*0x54ee72*/
  *((_DWORD *)this + 197) = 0; /*0x54ee78*/
  *((_DWORD *)this + 198) = 0; /*0x54ee7e*/
  memset((char *)this + 20, 0, 0x100u); /*0x54ee84*/
  return this->__pad_0; /*0x54ee88*/
}



// ==== 0x0054F000  EventQueue::Process  this=EventQueue  sig=csp ====
__int16 __thiscall EventQueue::Process(EventQueue *this)
{
  int v2; // eax

  if ( (this->q318 + 1) % 256 != this->q314 ) /*0x54f01e*/
    MessageLoop(); /*0x54f020*/
  v2 = this->q314; /*0x54f025*/
  if ( v2 == this->q318 ) /*0x54f033*/
    return 0; /*0x54f035*/
  else
    return *((_WORD *)this + v2 + 138); /*0x54f03a*/
}



// ==== 0x0054F050  EventQueue::Read  this=EventQueue  sig=csp ====
__int16 __thiscall EventQueue::Read(EventQueue *this)
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
    if ( (this->q318 + 1) % 256 != this->q314 ) /*0x54f06f*/
      MessageLoop(); /*0x54f071*/
    v2 = this->q314; /*0x54f076*/
  }
  while ( v2 == this->q318 || !*((_WORD *)this + v2 + 138) ); /*0x54f086*/
  do /*0x54f0b3*/
  {
    if ( !(unsigned __int8)EventQueue::CheckPosition(this) ) /*0x54f093*/
      MessageLoop(); /*0x54f09c*/
  }
  while ( this->q314 == this->q318 || !EventQueue::Check(this) ); /*0x54f0b3*/
  v3 = this->q314; /*0x54f0bd*/
  v4 = this->q318; /*0x54f0c3*/
  result = 0; /*0x54f0c9*/
  if ( v3 != v4 ) /*0x54f0cd*/
  {
    result = *((_WORD *)this + v3 + 138); /*0x54f0cf*/
    this->q314 = (v3 + 1) % 256; /*0x54f0e8*/
  }
  if ( (unsigned __int8)result == 1 || (unsigned __int8)result == 4 || (unsigned __int8)result == 2 ) /*0x54f106*/
  {
    v6 = this->q314; /*0x54f108*/
    v7 = 0; /*0x54f10e*/
    if ( v6 != v4 ) /*0x54f112*/
    {
      v7 = *((_WORD *)this + v6 + 138); /*0x54f114*/
      this->q314 = (v6 + 1) % 256; /*0x54f12d*/
    }
    v8 = this->q314; /*0x54f134*/
    v9 = 0; /*0x54f140*/
    *(_DWORD *)this = v7; /*0x54f144*/
    if ( v8 != v4 ) /*0x54f146*/
    {
      v9 = *((_WORD *)this + v8 + 138); /*0x54f148*/
      this->q314 = (v8 + 1) % 256; /*0x54f161*/
    }
    this->u32_C = v7; /*0x54f16d*/
    this->u32_10 = v9; /*0x54f171*/
    this->u32_10 = v9; /*0x54f174*/
  }
  else if ( (unsigned __int8)result == 10 ) /*0x54f17e*/
  {
    v10 = this->q314; /*0x54f180*/
    v11 = 0; /*0x54f186*/
    if ( v10 != v4 ) /*0x54f18a*/
    {
      v11 = *((_WORD *)this + v10 + 138); /*0x54f18c*/
      this->q314 = (v10 + 1) % 256; /*0x54f1a5*/
    }
    this->u32_10 = v11; /*0x54f1ab*/
  }
  return result; /*0x54f177*/
}



// ==== 0x0054F1C0  EventBuffer::Enqueue  this=EventBuffer  sig=csp ====
int __thiscall EventBuffer::Enqueue(EventBuffer *this, __int16 a2)
{
  int v2; // edx
  int result; // eax

  v2 = *((_DWORD *)this + 198); /*0x54f1c0*/
  result = (v2 + 1) % 256; /*0x54f1d7*/
  if ( result == *((_DWORD *)this + 197) ) /*0x54f1de*/
  {
    LOBYTE(result) = 0; /*0x54f1f9*/
  }
  else
  {
    *((_WORD *)this + v2 + 138) = a2; /*0x54f1e5*/
    *((_DWORD *)this + 198) = result; /*0x54f1ed*/
    LOBYTE(result) = 1; /*0x54f1f3*/
  }
  return result; /*0x54f1f5*/
}



// ==== 0x0054F200  EventClass::Enqueue  this=EventClass  sig=csp ====
int __thiscall EventClass::Enqueue(EventClass *this, unsigned __int16 a2, char a3)
{
  int result; // eax
  __int16 v5; // si
  int v6; // ecx

  result = ChronoScreen::IsActive(); /*0x54f205*/
  if ( (_BYTE)result ) /*0x54f20c*/
    goto LABEL_19; /*0x54f20c*/
  v5 = a2; /*0x54f217*/
  if ( stru_A8EB00.?[440] ) /*0x54f21d*/
  {
    if ( a2 != 27 ) /*0x54f223*/
      goto LABEL_19; /*0x54f223*/
  }
  Memory_Helper(a2, a3); /*0x54f237*/
  if ( (unsigned __int8)a2 != 1 && (unsigned __int8)a2 != 4 && (unsigned __int8)a2 != 2 && (unsigned __int8)a2 != 10 ) /*0x54f259*/
  {
    if ( (((unsigned __int16)EventClass::GetKeyStateSafe((EventClass *)0x10) >> 8) & 0x80u) != 0 ) /*0x54f268*/
      v5 = a2 | 0x100; /*0x54f26a*/
    if ( (((unsigned __int16)EventClass::GetKeyStateSafe((EventClass *)0x11) >> 8) & 0x80u) != 0 ) /*0x54f27d*/
      v5 |= 0x200u; /*0x54f27f*/
    result = EventClass::GetKeyStateSafe((EventClass *)0x12); /*0x54f28a*/
    if ( (result & 0x8000) != 0 ) /*0x54f292*/
    {
      if ( v5 == 9 ) /*0x54f298*/
      {
LABEL_19:
        LOBYTE(result) = 1; /*0x54f2d7*/
        return result; /*0x54f2dc*/
      }
      v5 |= 0x400u; /*0x54f29a*/
    }
  }
  if ( a3 ) /*0x54f2a2*/
    v5 |= 0x800u; /*0x54f2a4*/
  v6 = *(_DWORD *)&this->__pad_58[704]; /*0x54f2aa*/
  result = (v6 + 1) % 256; /*0x54f2c0*/
  if ( result != *(_DWORD *)&this->__pad_58[700] ) /*0x54f2c7*/
  {
    *(_WORD *)&this->__pad_58[2 * v6 + 188] = v5; /*0x54f2c9*/
    *(_DWORD *)&this->__pad_58[704] = result; /*0x54f2d1*/
    goto LABEL_19; /*0x54f2d1*/
  }
  LOBYTE(result) = 0; /*0x54f2e1*/
  return result; /*0x54f2d7*/
}



// ==== 0x0054F2F0  InputManager::EnqueueInputEvent  this=InputManager  sig=csp ====
char __thiscall InputManager::EnqueueInputEvent(
        InputManager *this,
        unsigned __int16 a2,
        __int16 a3,
        __int16 a4,
        char a5)
{
  __int64 v7; // rax
  int v8; // ecx
  int v9; // eax
  int v10; // ecx
  int v11; // eax

  if ( stru_A8EB00.?[440] ) /*0x54f2fa*/
    return 1; /*0x54f2fc*/
  v7 = *((_DWORD *)this + 198) - *((_DWORD *)this + 197); /*0x54f315*/
  if ( (int)(256 - ((HIDWORD(v7) ^ v7) - HIDWORD(v7))) < 3 /*0x54f343*/
    || (unsigned __int8)a2 != 1 && (unsigned __int8)a2 != 4 && (unsigned __int8)a2 != 2 )
  {
    return 0; /*0x54f3bc*/
  }
  EventClass::Enqueue((EventClass *)this, a2, a5); /*0x54f34d*/
  v8 = *((_DWORD *)this + 198); /*0x54f352*/
  v9 = (v8 + 1) % 256; /*0x54f368*/
  if ( v9 != *((_DWORD *)this + 197) ) /*0x54f36f*/
  {
    *((_WORD *)this + v8 + 138) = a3; /*0x54f376*/
    *((_DWORD *)this + 198) = v9; /*0x54f37e*/
  }
  v10 = *((_DWORD *)this + 198); /*0x54f384*/
  v11 = (v10 + 1) % 256; /*0x54f39a*/
  if ( v11 != *((_DWORD *)this + 197) ) /*0x54f3a1*/
  {
    *((_WORD *)this + v10 + 138) = a4; /*0x54f3a8*/
    *((_DWORD *)this + 198) = v11; /*0x54f3b0*/
  }
  return 1; /*0x54f2fe*/
}



// ==== 0x0054F450  Keyboard::MapKey  this=NetworkSession  sig=csp ====
int __thiscall Keyboard::MapKey(int *this, unsigned __int16 a2)
{
  int result; // eax
  __int16 v5; // di
  UINT v6; // eax
  int v7; // eax
  WORD Char[6]; // [esp+8h] [ebp-Ch] BYREF
  unsigned __int16 v9; // [esp+18h] [ebp+4h]

  if ( (a2 & 0x800) != 0 ) /*0x54f461*/
  {
    LOBYTE(result) = 0; /*0x54f464*/
  }
  else
  {
    result = (unsigned __int8)a2; /*0x54f46f*/
    if ( (unsigned __int8)a2 == 36 ) /*0x54f478*/
    {
      LOBYTE(result) = 8; /*0x54f47b*/
    }
    else if ( (unsigned __int8)a2 == 35 ) /*0x54f488*/
    {
      LOBYTE(result) = 92; /*0x54f48b*/
    }
    else
    {
      v5 = a2 & 0x100; /*0x54f49a*/
      if ( (a2 & 0x100) != 0 ) /*0x54f4a3*/
        *((_BYTE *)this + 36) = 0x80; /*0x54f4a5*/
      v9 = a2 & 0x200; /*0x54f4b2*/
      if ( (a2 & 0x200) != 0 ) /*0x54f4b6*/
        *((_BYTE *)this + 37) = 0x80; /*0x54f4b8*/
      if ( (a2 & 0x400) != 0 ) /*0x54f4c6*/
        *((_BYTE *)this + 38) = 0x80; /*0x54f4c8*/
      v6 = MapVirtualKeyA(a2, 0); /*0x54f4d4*/
      v7 = ToAscii(a2, v6, (const BYTE *)this + 20, Char, 0); /*0x54f4e7*/
      if ( v5 ) /*0x54f4f0*/
        *((_BYTE *)this + 36) = 0; /*0x54f4f2*/
      if ( v9 ) /*0x54f4fc*/
        *((_BYTE *)this + 37) = 0; /*0x54f4fe*/
      if ( (a2 & 0x400) != 0 ) /*0x54f507*/
        *((_BYTE *)this + 38) = 0; /*0x54f509*/
      LOBYTE(v7) = v7 != 1; /*0x54f514*/
      return *(_DWORD *)Char & (v7 - 1); /*0x54f519*/
    }
  }
  return result; /*0x54f463*/
}



// ==== 0x0054F530  ObjectClass::Event_Process  this=ObjectClass  sig=csp ====
char __thiscall Event_Process(ObjectClass *this, __int16 a2)
{
  char result; // al

  if ( (a2 & 0x800) != 0 ) /*0x54f53a*/
    return 0; /*0x54f57f*/
  result = a2; /*0x54f53c*/
  switch ( (char)a2 ) /*0x54f559*/
  {
    case 8: /*0x54f559*/
    case 13: /*0x54f559*/
    case 27: /*0x54f559*/
      return result;
    case 10: /*0x54f559*/
      result = (char)this->?; /*0x54f56c*/
      if ( result == 13 ) /*0x54f571*/
        result = 0; /*0x54f573*/
      LOWORD(this->?) = 0; /*0x54f575*/
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



// ==== 0x0054F5C0  Mouse::IsButtonDown  this=NetworkSession  sig=csp ====
int __stdcall Mouse::IsButtonDown(unsigned __int8 a1)
{
  unsigned __int8 v1; // si

  v1 = a1; /*0x54f5c5*/
  if ( (a1 == 1 || a1 == 2) && GetSystemMetrics(23) == 1 ) /*0x54f5e2*/
    v1 = 2 - (a1 != 1); /*0x54f5eb*/
  return Mouse::GetKeyState(v1) != 0; /*0x54f600*/
}



// ==== 0x0054F650  EventQueue::Check  this=EventQueue  sig=csp ====
__int16 __thiscall EventQueue::Check(EventQueue *this)
{
  int v1; // eax

  v1 = this->q314; /*0x54f650*/
  if ( v1 == this->q318 ) /*0x54f65e*/
    return 0; /*0x54f669*/
  else
    return *((_WORD *)this + v1 + 138); /*0x54f660*/
}



// ==== 0x0054F670  InputManager::PushInputEvent  this=InputManager  sig=csp ====
char __thiscall InputManager::PushInputEvent(InputManager *this, __int16 a2)
{
  int v2; // edx
  int v3; // eax

  v2 = *((_DWORD *)this + 198); /*0x54f670*/
  v3 = (v2 + 1) % 256; /*0x54f687*/
  if ( v3 == *((_DWORD *)this + 197) ) /*0x54f68e*/
    return 0; /*0x54f6a9*/
  *((_WORD *)this + v2 + 138) = a2; /*0x54f695*/
  *((_DWORD *)this + 198) = v3; /*0x54f69d*/
  return 1; /*0x54f6a5*/
}



// ==== 0x0054F6B0  EventQueue::CheckPosition  this=EventQueue  sig=csp ====
int __thiscall EventQueue::CheckPosition(EventQueue *this)
{
  int result; // eax

  result = (this->q318 + 1) % 256; /*0x54f6c4*/
  LOBYTE(result) = result == this->q314; /*0x54f6cb*/
  return result; /*0x54f6ce*/
}



// ==== 0x0054F6D0  ObjectClass::method_54F6D0  this=ObjectClass  sig=csp ====
bool __thiscall sub_54F6D0(TechnoClass *this)
{
  return this->railgunParticles == this->unk1Particles; /*0x54f6e1*/
}



// ==== 0x0054F720  Timer::PumpMessages  this=NetworkSession  sig=csp ====
int __thiscall Timer::PumpMessages(Timer *this)
{
  int v2; // eax
  int result; // eax

  if ( (*((_DWORD *)this + 198) + 1) % 256 != *((_DWORD *)this + 197) ) /*0x54f73e*/
    MessageLoop(); /*0x54f740*/
  v2 = *((_DWORD *)this + 198); /*0x54f745*/
  *((_DWORD *)this + 197) = v2; /*0x54f74b*/
  if ( (v2 + 1) % 256 == v2 ) /*0x54f766*/
  {
    result = *((_DWORD *)this + 198); /*0x54f77b*/
    *((_DWORD *)this + 197) = result; /*0x54f781*/
  }
  else
  {
    result = (int)MessageLoop(); /*0x54f768*/
    *((_DWORD *)this + 197) = *((_DWORD *)this + 198); /*0x54f773*/
  }
  return result; /*0x54f779*/
}



// ==== 0x0054F790  InputManager::WndProc  this=InputManager  sig=csp ====
int __thiscall InputManager::WndProc(InputManager *this, HWND hWnd, UINT Msg, WPARAM wParam, unsigned int lParam)
{
  __int16 x; // di
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
  __int16 v18[2]; // [esp+14h] [ebp-Ch] BYREF
  struct tagPOINT Point; // [esp+18h] [ebp-8h] BYREF

  Point.y = HIWORD(lParam); /*0x54f7a6*/
  Point.x = (unsigned __int16)lParam; /*0x54f7b6*/
  ClientToScreen(hWnd, &Point); /*0x54f7ba*/
  x = Point.x; /*0x54f7c6*/
  y = Point.y; /*0x54f7ca*/
  *(_DWORD *)v18 = Point.x; /*0x54f7ce*/
  *(_DWORD *)v17 = Point.y; /*0x54f7d4*/
  if ( stru_887598.lineTrailer ) /*0x54f7d8*/
  {
    (*(void (__thiscall **)(void *, __int16 *, __int16 *))(*(_DWORD *)stru_887598.lineTrailer + 68))( /*0x54f7e6*/
      stru_887598.lineTrailer,
      v18,
      v17);
    x = v18[0]; /*0x54f7e9*/
    y = v17[0]; /*0x54f7ed*/
  }
  if ( Msg > 0x201 ) /*0x54f7fe*/
  {
    switch ( Msg ) /*0x54f916*/
    {
      case 0x202u: /*0x54f916*/
        if ( stru_A8EB00.?[440] ) /*0x54f924*/
          goto LABEL_45; /*0x54f924*/
        v10 = *((_DWORD *)this + 198) - *((_DWORD *)this + 197); /*0x54f938*/
        if ( (int)(256 - ((HIDWORD(v10) ^ v10) - HIDWORD(v10))) < 3 ) /*0x54f947*/
          goto LABEL_45; /*0x54f947*/
        EventClass::Enqueue((EventClass *)this, 1u, 1); /*0x54f94f*/
        goto LABEL_17; /*0x54f94f*/
      case 0x203u: /*0x54f916*/
        if ( stru_A8EB00.?[440] ) /*0x54f958*/
          goto LABEL_45; /*0x54f958*/
        v11 = *((_DWORD *)this + 198) - *((_DWORD *)this + 197); /*0x54f971*/
        if ( (int)(256 - ((HIDWORD(v11) ^ v11) - HIDWORD(v11))) >= 3 ) /*0x54f97b*/
        {
          EventClass::Enqueue((EventClass *)this, 1u, 0); /*0x54f983*/
          if ( !(unsigned __int8)EventQueue::CheckPosition((EventQueue *)this) ) /*0x54f98a*/
            InputManager::PushInputEvent(this, x); /*0x54f996*/
          EventBuffer::Enqueue((EventBuffer *)this, y); /*0x54f99e*/
          x = v18[0]; /*0x54f9a3*/
          y = v17[0]; /*0x54f9a7*/
        }
        if ( stru_A8EB00.?[440] ) /*0x54f9b2*/
          goto LABEL_45; /*0x54f9b2*/
        v12 = *((_DWORD *)this + 198) - *((_DWORD *)this + 197); /*0x54f9c6*/
        if ( (int)(256 - ((HIDWORD(v12) ^ v12) - HIDWORD(v12))) < 3 ) /*0x54f9d5*/
          goto LABEL_45; /*0x54f9d5*/
        EventClass::Enqueue((EventClass *)this, 1u, 1); /*0x54f9e1*/
        if ( !(unsigned __int8)EventQueue::CheckPosition((EventQueue *)this) ) /*0x54f9e8*/
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
        InputManager::EnqueueInputEvent(this, 2u, v18[0], v17[0], 1); /*0x54fb13*/
        goto LABEL_45; /*0x54fb13*/
      case 0x207u: /*0x54f916*/
        if ( !stru_A8EB00.?[440] ) /*0x54fa0d*/
        {
          v13 = *((_DWORD *)this + 198) - *((_DWORD *)this + 197); /*0x54fa26*/
          if ( (int)(256 - ((HIDWORD(v13) ^ v13) - HIDWORD(v13))) >= 3 ) /*0x54fa30*/
          {
            EventClass::Enqueue((EventClass *)this, 4u, 0); /*0x54fa3c*/
            EventBuffer::Enqueue((EventBuffer *)this, x); /*0x54fa44*/
            EventBuffer::Enqueue((EventBuffer *)this, y); /*0x54fa4c*/
          }
        }
        goto LABEL_45; /*0x54fa51*/
      case 0x208u: /*0x54f916*/
        goto LABEL_39;
      case 0x209u: /*0x54f916*/
        if ( stru_A8EB00.?[440] ) /*0x54fa5d*/
          goto LABEL_45; /*0x54fa5d*/
        v14 = *((_DWORD *)this + 198) - *((_DWORD *)this + 197); /*0x54fa76*/
        if ( (int)(256 - ((HIDWORD(v14) ^ v14) - HIDWORD(v14))) >= 3 ) /*0x54fa80*/
        {
          EventClass::Enqueue((EventClass *)this, 4u, 0); /*0x54fa88*/
          EventBuffer::Enqueue((EventBuffer *)this, x); /*0x54fa90*/
          EventBuffer::Enqueue((EventBuffer *)this, y); /*0x54fa98*/
          x = v18[0]; /*0x54fa9d*/
          y = v17[0]; /*0x54faa1*/
        }
LABEL_39:
        if ( !stru_A8EB00.?[440] ) /*0x54faac*/
        {
          v15 = *((_DWORD *)this + 198) - *((_DWORD *)this + 197); /*0x54fabc*/
          if ( (int)(256 - ((HIDWORD(v15) ^ v15) - HIDWORD(v15))) >= 3 ) /*0x54facb*/
          {
            EventClass::Enqueue((EventClass *)this, 4u, 1); /*0x54fad3*/
            EventBuffer::Enqueue((EventBuffer *)this, x); /*0x54fadb*/
            EventBuffer::Enqueue((EventBuffer *)this, y); /*0x54fae3*/
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
        if ( wParam != 145 && (lParam & 0x40000000) == 0 ) /*0x54f838*/
          EventClass::Enqueue((EventClass *)this, wParam, 0); /*0x54f843*/
        goto LABEL_45; /*0x54f848*/
      case 0x101u: /*0x54f81d*/
      case 0x105u: /*0x54f81d*/
        EventClass::Enqueue((EventClass *)this, wParam, 1); /*0x54f852*/
        goto LABEL_45; /*0x54f857*/
      case 0x102u: /*0x54f81d*/
        if ( stru_A8BB1C.__pad_87[214] ) /*0x54f863*/
        {
          if ( !stru_A8EB00.?[440] ) /*0x54f870*/
          {
            v8 = *((_DWORD *)this + 198) - *((_DWORD *)this + 197); /*0x54f889*/
            if ( (int)(256 - ((HIDWORD(v8) ^ v8) - HIDWORD(v8))) >= 2 ) /*0x54f893*/
            {
              EventClass::Enqueue((EventClass *)this, 0xAu, 0); /*0x54f89f*/
              EventBuffer::Enqueue((EventBuffer *)this, (unsigned __int8)wParam); /*0x54f8af*/
            }
          }
        }
        goto LABEL_45; /*0x54f8b4*/
      default:
        return 0;
    }
  }
  if ( !stru_A8EB00.?[440] ) /*0x54f8c0*/
  {
    v9 = *((_DWORD *)this + 198) - *((_DWORD *)this + 197); /*0x54f8d9*/
    if ( (int)(256 - ((HIDWORD(v9) ^ v9) - HIDWORD(v9))) >= 3 ) /*0x54f8e3*/
    {
      EventClass::Enqueue((EventClass *)this, 1u, 0); /*0x54f8ef*/
LABEL_17:
      if ( !(unsigned __int8)EventQueue::CheckPosition((EventQueue *)this) ) /*0x54f8f6*/
LABEL_31:
        InputManager::PushInputEvent(this, x); /*0x54f9f1*/
LABEL_32:
      EventBuffer::Enqueue((EventBuffer *)this, y); /*0x54f9f9*/
    }
  }
LABEL_45:
  DefWindowProcA(hWnd, Msg, wParam, lParam); /*0x54fb18*/
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
  dword_ABC878 = (int)&DynamicVectorClass<LaserDrawClass *>::`vftable'; /*0x54fddd*/
  dword_ABC88C = 10; /*0x54fde7*/
  dword_ABC888 = 0; /*0x54fdf1*/
  return atexit(sub_54FE00); /*0x54fdfc*/
}



// ==== 0x0054FE00  sub_54FE00  this=-  sig=ida-proto ====
void __cdecl sub_54FE00()
{
  if ( (byte_ABC718 & 1) == 0 ) /*0x54fe0a*/
  {
    dword_ABC878 = (int)&VectorClass<LaserDrawClass *>::`vftable'; /*0x54fe0e*/
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
char *__thiscall TimerClass_Constructor(
        char *this,
        int a2,
        int a3,
        int a4,
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
  _DWORD *v18; // ecx
  wchar_t *v19; // ecx
  int v20; // eax

  *(_DWORD *)this = 0; /*0x54fe6a*/
  this->ptr_8 = 0; /*0x54fe6c*/
  this->ptr_C = dword_A8ED84; /*0x54fe75*/
  v18 = this + 36; /*0x54fe78*/
  this->ptr_8 = 0; /*0x54fe7b*/
  *v18 = a2; /*0x54fe83*/
  this->abstractFlags = 0; /*0x54fe89*/
  this->nextArrayIndex = 1; /*0x54fe8c*/
  v18[1] = a3; /*0x54fe8f*/
  this->referenceCount = 1; /*0x54fe96*/
  this->NeedsSaveOrLink = 0; /*0x54fe99*/
  v18[2] = a4; /*0x54fe9c*/
  this->q084 = 0; /*0x54fea6*/
  this->ptr_10 = a5; /*0x54fea9*/
  this->q034 = a6; /*0x54feaf*/
  this->TargetStrengthCoefficient = a7; /*0x54feb6*/
  this->zero_3C = a8; /*0x54febd*/
  this->TargetDistanceCoefficient = a9; /*0x54fec4*/
  this->ChargerBarrels = 0; /*0x54fecb*/
  this->q042 = 0; /*0x54fece*/
  this->q10C = 0; /*0x54fed1*/
  this->q044 = 0; /*0x54fed4*/
  this->q114 = 0; /*0x54fed7*/
  this->q046 = 0; /*0x54feda*/
  this->q11C = 0; /*0x54fedd*/
  this->u32_48 = 0; /*0x54fee0*/
  this->q049 = 0; /*0x54fee3*/
  this->u32_4C = a13; /*0x54fee6*/
  this->q144 = 0; /*0x54feed*/
  this->SlowdownDistance = a14; /*0x54fef0*/
  this->q148 = a15; /*0x54fef7*/
  this->q015 = a16; /*0x54fefe*/
  this->u32_58 = a17; /*0x54ff05*/
  *(_DWORD *)this = 0; /*0x54ff08*/
  v19 = dword_A8ED84; /*0x54ff0a*/
  this->abstractFlags = 1; /*0x54ff10*/
  this->ptr_C = v19; /*0x54ff13*/
  this->ptr_10 = a3; /*0x54ff1a*/
  this->ptr_8 = 1; /*0x54ff21*/
  *(_WORD *)(this + 65) = a10; /*0x54ff29*/
  this->q10C = BYTE2(a10); /*0x54ff32*/
  this->q088 = a11; /*0x54ff39*/
  this->q046 = BYTE2(a11); /*0x54ff42*/
  *(_WORD *)(this + 71) = a12; /*0x54ff49*/
  this->q049 = BYTE2(a12); /*0x54ff4d*/
  if ( dword_ABC888 < dword_ABC880 /*0x54ff85*/
    || (byte_ABC885 || !dword_ABC880)
    && dword_ABC88C > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_ABC878 + 8))(
         &dword_ABC878,
         dword_ABC880 + dword_ABC88C,
         0) )
  {
    v20 = dword_ABC888++; /*0x54ff92*/
    *((_DWORD *)dword_ABC87C + v20) = this; /*0x54ffa1*/
  }
  return this; /*0x54ffa6*/
}



// ==== 0x00540030  IPXGlobalConnClass::Disconnect  this=IPXGlobalConnClass  sig=csp ====
_DWORD *__thiscall IPXGlobalConnClass::Disconnect(IPXGlobalConnClass *this, int a2)
{
  Terrain *IPXGlobalConnClass_field_0x04; // ecx
  _DWORD *result; // eax

  IPXGlobalConnClass_field_0x04 = (Terrain *)this->IPXGlobalConnClass_field_0x04; /*0x540030*/
  result = (_DWORD *)a2; /*0x540033*/
  if ( a2 < (int)IPXGlobalConnClass_field_0x04->Terrain_field_0x38 ) /*0x54003a*/
  {
    result = (_DWORD *)Terrain::GetTileType(IPXGlobalConnClass_field_0x04, a2); /*0x54003d*/
    *result |= 2u; /*0x540042*/
  }
  return result; /*0x540045*/
}



// ==== 0x00540050  IPXGlobalConnClass::GetAddress  this=IPXGlobalConnClass  sig=csp ====
int __thiscall IPXGlobalConnClass::GetAddress(
        IPXGlobalConnClass *this,
        int a2,
        int a3,
        _BYTE *a4,
        int a5,
        int a6,
        int a7)
{
  int v9; // edx
  char *v10; // [esp-Ch] [ebp-14h]
  int v11; // [esp-8h] [ebp-10h]
  int v12; // [esp-4h] [ebp-Ch]

  if ( Network::IsBroadcastAddr((Network *)a4) ) /*0x54005a*/
    return Network_Get(a2, a3); /*0x54006b*/
  if ( *(_DWORD *)&dword_A8B238 == 3 && *((_DWORD *)this + 49) && *(_DWORD *)a4 == *(_DWORD *)((char *)this + 186) ) /*0x540098*/
  {
    v9 = *(_DWORD *)this->__pad_0; /*0x54009e*/
    v12 = 0; /*0x5400a0*/
    v11 = a6; /*0x5400a8*/
    v10 = (char *)this + 190; /*0x5400a9*/
  }
  else
  {
    v9 = *(_DWORD *)this->__pad_0; /*0x5400b4*/
    v12 = a7; /*0x5400b6*/
    v11 = a6; /*0x5400b7*/
    v10 = 0; /*0x5400b8*/
  }
  return (*(int (__thiscall **)(IPXGlobalConnClass *, int, int, _BYTE *, char *, int, int))(v9 + 40))( /*0x540070*/
           this,
           a2,
           a3,
           a4,
           v10,
           v11,
           v12);
}



// ==== 0x005400D0  IPXGlobalConnClass::CheckStatus  this=IPXGlobalConnClass  sig=csp ====
int __thiscall IPXGlobalConnClass::CheckStatus(IPXGlobalConnClass *this)
{
  int v2; // esi
  Terrain *IPXGlobalConnClass_field_0x04; // ecx

  v2 = 0; /*0x5400d4*/
  IPXGlobalConnClass_field_0x04 = (Terrain *)this->IPXGlobalConnClass_field_0x04; /*0x5400d6*/
  if ( (int)IPXGlobalConnClass_field_0x04->Terrain_field_0x38 > 0 ) /*0x5400de*/
  {
    do /*0x540104*/
    {
      if ( (*(_BYTE *)Terrain::GetTileType(IPXGlobalConnClass_field_0x04, v2) & 2) != 0 ) /*0x5400e9*/
        PacketQueue::ReleaseEntry((PacketQueue *)this->IPXGlobalConnClass_field_0x04, 0, 0, v2--, 0, 0); /*0x5400f7*/
      IPXGlobalConnClass_field_0x04 = (Terrain *)this->IPXGlobalConnClass_field_0x04; /*0x5400fd*/
      ++v2; /*0x540100*/
    }
    while ( v2 < (int)IPXGlobalConnClass_field_0x04->Terrain_field_0x38 ); /*0x540104*/
  }
  return 1; /*0x540106*/
}



// ==== 0x00540110  IPXGlobalConnClass::ReceivePacket  this=IPXGlobalConnClass  sig=csp ====
void __thiscall IPXGlobalConnClass::ReceivePacket(IPXGlobalConnClass *this, int a2)
{
  IPXGlobalConnClass *v2; // esi
  Terrain *IPXGlobalConnClass_field_0x04; // ecx
  int i; // ebp
  int TileType; // edi
  int v6; // eax
  int v7; // ebx
  int Ticks; // edx
  int v9; // eax
  int v10; // ecx
  _DWORD *v11; // edx

  v2 = this; /*0x540113*/
  Debug::Log(); /*0x540132*/
  IPXGlobalConnClass_field_0x04 = (Terrain *)v2->IPXGlobalConnClass_field_0x04; /*0x540137*/
  for ( i = 0; i < (int)IPXGlobalConnClass_field_0x04->Terrain_field_0x38; ++i ) /*0x540144*/
  {
    TileType = Terrain::GetTileType(IPXGlobalConnClass_field_0x04, i); /*0x540158*/
    Debug::Log(); /*0x54015a*/
    if ( TileType ) /*0x540164*/
    {
      Debug::Log(); /*0x540170*/
      v6 = *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x540175*/
      v7 = *(_DWORD *)&stru_88732C.__pad_6[14]; /*0x540186*/
      if ( *(_DWORD *)&stru_88732C.__pad_6[6] != -1 ) /*0x540188*/
      {
        Ticks = Timer::GetTicks(); /*0x54019a*/
        v6 = *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x54019c*/
        v7 += Ticks - *(_DWORD *)&stru_88732C.__pad_6[6]; /*0x5401a3*/
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
        v10 = *((_DWORD *)this + 53); /*0x5401ff*/
        if ( v10 > 0 ) /*0x540207*/
        {
          v11 = (_DWORD *)this->q034; /*0x54020f*/
          while ( *v11 != *(_DWORD *)(*(_DWORD *)(TileType + 12) + 4) ) /*0x540213*/
          {
            ++v9; /*0x540215*/
            ++v11; /*0x540216*/
            if ( v9 >= v10 ) /*0x54021b*/
              goto LABEL_14; /*0x54021b*/
          }
          *(_DWORD *)(this->q034 + 4 * v9) = -1; /*0x54021f*/
        }
LABEL_14:
        PacketQueue::ReleaseEntry((PacketQueue *)this->IPXGlobalConnClass_field_0x04, 0, 0, i--, 0, 0); /*0x540226*/
      }
      v2 = this; /*0x540277*/
    }
    IPXGlobalConnClass_field_0x04 = (Terrain *)v2->IPXGlobalConnClass_field_0x04; /*0x54027b*/
  }
  Debug::Log(); /*0x540296*/
}



// ==== 0x005402B0  ObjectClass::Network_Init_5402B0  this=ObjectClass  sig=csp ====
int __thiscall Network_Init_5402B0(ObjectClass *this, int a2)
{
  int result; // eax

  result = dword_AA05A4; /*0x5402b0*/
  if ( dword_AA05A4 ) /*0x5402b7*/
    this->q031 = 0; /*0x5402b9*/
  return result; /*0x5402c3*/
}



// ==== 0x005402D0  IPXGlobalConnClass::Send  this=IPXGlobalConnClass  sig=csp ====
int __thiscall IPXGlobalConnClass::Send(IPXGlobalConnClass *this)
{
  int v2; // ebx
  int v3; // esi
  int IPXGlobalConnClass_field_0x04; // ecx
  int v5; // eax
  PacketQueue *v6; // ecx
  int v8; // [esp+Ch] [ebp-414h] BYREF
  int v9; // [esp+10h] [ebp-410h] BYREF
  Waypoint v10; // [esp+14h] [ebp-40Ch] BYREF

  v2 = 0; /*0x5402db*/
  v3 = 0; /*0x5402dd*/
  IPXGlobalConnClass_field_0x04 = this->IPXGlobalConnClass_field_0x04; /*0x5402df*/
  if ( *(int *)(IPXGlobalConnClass_field_0x04 + 40) > 0 ) /*0x5402e7*/
  {
    do /*0x540332*/
    {
      v5 = *(_DWORD *)Terrain::GetTileIndex((Terrain *)IPXGlobalConnClass_field_0x04, v3); /*0x5402ef*/
      if ( (v5 & 4) != 0 && (v5 & 2) == 0 ) /*0x5402f7*/
      {
        Waypoint::InitInvalid(&v10); /*0x5402fd*/
        v6 = (PacketQueue *)this->IPXGlobalConnClass_field_0x04; /*0x54030e*/
        v8 = 12; /*0x54031c*/
        PacketQueue::ExtractEntry(v6, &v10.__pad_0[12], &v9, v3--, &v10, &v8, 0); /*0x540324*/
        ++v2; /*0x54032a*/
      }
      IPXGlobalConnClass_field_0x04 = this->IPXGlobalConnClass_field_0x04; /*0x54032b*/
      ++v3; /*0x54032e*/
    }
    while ( v3 < *(_DWORD *)(IPXGlobalConnClass_field_0x04 + 40) ); /*0x540332*/
  }
  return v2; /*0x540334*/
}



// ==== 0x00540340  IPXGlobalConnClass::SendPacket  this=IPXGlobalConnClass  sig=csp ====
int __thiscall IPXGlobalConnClass::SendPacket(IPXGlobalConnClass *this, int a2, __int16 a3)
{
  int IPXGlobalConnClass_field_0x04; // ecx
  int v5; // ebp
  int v6; // esi
  int TileIndex; // eax
  int v8; // edi
  PacketQueue *v9; // ecx
  int v11; // [esp+Ch] [ebp-414h] BYREF
  int v12; // [esp+10h] [ebp-410h] BYREF
  Waypoint v13; // [esp+14h] [ebp-40Ch] BYREF

  IPXGlobalConnClass_field_0x04 = this->IPXGlobalConnClass_field_0x04; /*0x54034b*/
  v5 = 0; /*0x54034e*/
  v6 = 0; /*0x540350*/
  if ( *(int *)(IPXGlobalConnClass_field_0x04 + 40) <= 0 ) /*0x540357*/
    return 0; /*0x5403de*/
  do /*0x5403cd*/
  {
    TileIndex = Terrain::GetTileIndex((Terrain *)IPXGlobalConnClass_field_0x04, v6); /*0x54035f*/
    v8 = TileIndex; /*0x540364*/
    if ( (*(_BYTE *)TileIndex & 2) == 0 /*0x540392*/
      && *(_DWORD *)(TileIndex + 24)
      && (unsigned __int8)NetworkID::Compare(*(bool **)(TileIndex + 28), a2)
      && *(_WORD *)(v8 + 32) == a3 )
    {
      Waypoint::InitInvalid(&v13); /*0x540398*/
      v9 = (PacketQueue *)this->IPXGlobalConnClass_field_0x04; /*0x5403b3*/
      v11 = 12; /*0x5403b7*/
      PacketQueue::ExtractEntry(v9, &v13.__pad_0[12], &v12, v6--, &v13, &v11, 0); /*0x5403bf*/
      ++v5; /*0x5403c5*/
    }
    IPXGlobalConnClass_field_0x04 = this->IPXGlobalConnClass_field_0x04; /*0x5403c6*/
    ++v6; /*0x5403c9*/
  }
  while ( v6 < *(_DWORD *)(IPXGlobalConnClass_field_0x04 + 40) ); /*0x5403cd*/
  return v5; /*0x5403d2*/
}



// ==== 0x005403F0  IPXGlobalConnClass::SetAddress  this=IPXGlobalConnClass  sig=csp ====
int __thiscall IPXGlobalConnClass::SetAddress(
        IPXGlobalConnClass *this,
        int a2,
        int a3,
        int *a4,
        int *a5,
        int a6,
        int a7)
{
  IPXGlobalConnClass *v7; // ebp
  int v8; // esi
  int v9; // ebp
  int v10; // edi
  char LinkedIndex; // al
  int v12; // edi
  int v13; // edx
  int v15; // [esp+Ch] [ebp-28h] BYREF
  IPXGlobalConnClass *v16; // [esp+10h] [ebp-24h]
  int v17[2]; // [esp+14h] [ebp-20h] BYREF
  NetworkID v18; // [esp+1Ch] [ebp-18h] BYREF
  int v19; // [esp+24h] [ebp-10h]
  NetworkID v20; // [esp+28h] [ebp-Ch] BYREF
  int v21; // [esp+30h] [ebp-4h]

  v7 = this; /*0x5403f4*/
  v16 = this; /*0x5403fc*/
  Waypoint::InitInvalid((Waypoint *)&v18); /*0x540400*/
  *(_DWORD *)v18.__pad_0 = *a4; /*0x540413*/
  v18.NetworkID_field_0x04 = a4[1]; /*0x54041a*/
  v19 = a4[2]; /*0x540421*/
  if ( a5 ) /*0x540425*/
  {
    Network::CopyAddress((Network *)a4, &v15, (int)v17); /*0x540431*/
    v15 = *a5; /*0x540442*/
    NetworkID::Assign(&v18, &v15, (int)v17, 0); /*0x54044c*/
  }
  if ( *(_DWORD *)&dword_A8B238 == 4 && !(_BYTE)a6 && byte_A8DBA0 && LOBYTE(v7[3].IPXGlobalConnClass_field_0x20) ) /*0x540477*/
  {
    v8 = a2; /*0x540485*/
    if ( !*(_BYTE *)(a2 + 3) ) /*0x540489*/
    {
      v20 = v18; /*0x5404a0*/
      v21 = v19; /*0x5404b6*/
      Network::CopyAddress((Network *)&v20, &v15, (int)v17); /*0x5404ba*/
      NetworkID::Assign(&v20, &v15, (int)v17, a7); /*0x5404d2*/
      v9 = -1; /*0x5404dc*/
      v10 = 0; /*0x5404df*/
      if ( dword_A8DA84 > 0 ) /*0x5404e3*/
      {
        while ( !(unsigned __int8)GUID::Compare((char *)(dword_A8DA78[v10] + 40), (int)&v20) ) /*0x5404fd*/
        {
          if ( ++v10 >= dword_A8DA84 ) /*0x540507*/
            goto LABEL_13; /*0x540507*/
        }
        v9 = *(_DWORD *)(dword_A8DA78[v10] + 111); /*0x540514*/
      }
LABEL_13:
      LinkedIndex = Factory::GetLinkedIndex((Factory *)&stru_B052C0.__pad_0[16], v9); /*0x540517*/
      if ( !LinkedIndex ) /*0x540524*/
        LinkedIndex = 1; /*0x540526*/
      v7 = v16; /*0x540528*/
      *(_BYTE *)(a2 + 3) = LinkedIndex; /*0x54052c*/
    }
    v18 = qword_A8DBA4; /*0x540540*/
    v12 = *(_DWORD *)&dword_841F3C; /*0x54054a*/
    v19 = dword_A8DBAC; /*0x540554*/
    if ( (unsigned __int8)GUID::Compare(qword_A8DBB0.__pad_0, *dword_A8DA78 + 40) /*0x54057b*/
      && (unsigned __int8)NetworkID::Compare((bool *)v18.__pad_0, *dword_A8DA78 + 40) )
    {
      v13 = a2 + 8; /*0x540584*/
      *(_WORD *)(a2 + 12) = 0; /*0x540587*/
      *(_DWORD *)(a2 + 8) = 0; /*0x54058d*/
    }
    else
    {
      v12 = *(_DWORD *)&dword_A8DBBC; /*0x54059b*/
      *(_WORD *)(a2 + 12) = dword_841F3C; /*0x5405a4*/
      *(_DWORD *)(a2 + 8) = 0; /*0x5405a8*/
    }
  }
  else
  {
    v8 = a2; /*0x5405b0*/
    v12 = a7; /*0x5405b4*/
    v13 = a2 + 8; /*0x5405b8*/
    *(_WORD *)(a2 + 12) = 0; /*0x5405bb*/
    *(_DWORD *)(a2 + 8) = 0; /*0x5405c1*/
  }
  if ( *(_DWORD *)&stru_887598.isAliveFlag ) /*0x5405cf*/
  {
    LOBYTE(v13) = LOBYTE(v7[3].IPXGlobalConnClass_field_0x20) == 0; /*0x5405da*/
    (*(void (__thiscall **)(_DWORD, int, int, NetworkID *, int, int, int, int))(**(_DWORD **)&stru_887598.isAliveFlag /*0x5405f2*/
                                                                              + 12))(
      *(_DWORD *)&stru_887598.isAliveFlag,
      v8,
      a3,
      &v18,
      12,
      a6,
      v13,
      v12);
  }
  return 1; /*0x5405f5*/
}



// ==== 0x00540610  IPXGlobalConnClass::Release  this=IPXGlobalConnClass  sig=csp ====
int __thiscall IPXGlobalConnClass::Release(IPXGlobalConnClass *this, const void *a2, signed int a3, int a4, char a5)
{
  return ConnectionClass::sendAck((int)this, a2, a3, a4, a5); /*0x540629*/
}



// ==== 0x00540630  IPXGlobalConnClass::ddtor  this=IPXGlobalConnClass  sig=csp ====
int __thiscall IPXGlobalConnClass::ddtor(IPXGlobalConnClass *this, int a2, int a3)
{
  return ConnectionClass::receivePacket((ConnectionClass *)this, a2, a3); /*0x54063f*/
}



// ==== 0x00540650  IPXGlobalConnClass::Connect  this=IPXGlobalConnClass  sig=csp ====
int __thiscall IPXGlobalConnClass::Connect(IPXGlobalConnClass *this, void *a2, signed int *a3)
{
  return ConnectionClass::processTileUpdate((ConnectionClass *)this, a2, a3); /*0x54065f*/
}



// ==== 0x00540670  IPXGlobalConnClass::QueryInterface  this=IPXGlobalConnClass  sig=csp ====
_DWORD *__thiscall IPXGlobalConnClass::QueryInterface(IPXGlobalConnClass *this, char a2)
{
  void *v3; // eax

  v3 = (void *)this->q034; /*0x540673*/
  *(_DWORD *)this->__pad_0 = &IPXGlobalConnClass::`vftable'; /*0x540679*/
  if ( v3 ) /*0x540681*/
  {
    __3_YAXPAX_Z(v3); /*0x540684*/
    this->q034 = 0; /*0x54068c*/
  }
  if ( *((_DWORD *)this + 51) ) /*0x540696*/
  {
    __3_YAXPAX_Z(*((void **)this + 51)); /*0x5406a1*/
    *((_DWORD *)this + 51) = 0; /*0x5406a9*/
  }
  *(_DWORD *)this->__pad_0 = &IPXConnClass::`vftable'; /*0x5406b5*/
  ConnectionClass::dtor((ConnectionClass *)this); /*0x5406bb*/
  if ( (a2 & 1) != 0 ) /*0x5406c5*/
    __3_YAXPAX_Z(this); /*0x5406c8*/
  return this->__pad_0; /*0x5406d2*/
}



// ==== 0x005406E0  sub_5406E0  this=-  sig=ida-proto ====
void sub_5406E0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x5406ec*/
  dbl_AA0650 = Math::Sqrt(v0 + v0); /*0x5406fe*/
}



// ==== 0x00540710  sub_540710  this=-  sig=ida-proto ====
void sub_540710()
{
  dbl_AA06A0 = dbl_AA0650 / 60.0; /*0x54071c*/
}



// ==== 0x00540730  sub_540730  this=-  sig=ida-proto ====
void sub_540730()
{
  dbl_AA0688 = 1.0 / dbl_AA06A0; /*0x54073c*/
}



// ==== 0x00540750  sub_540750  this=-  sig=ida-proto ====
void sub_540750()
{
  dbl_AA0680 = 0.0174532925199433 * 45.0; /*0x54075c*/
}



// ==== 0x00540770  sub_540770  this=-  sig=ida-proto ====
void sub_540770()
{
  dbl_AA0658 = 0.0174532925199433 * 60.0; /*0x54077c*/
}



// ==== 0x00540790  sub_540790  this=-  sig=ida-proto ====
void sub_540790()
{
  dbl_AA0630 = 0.0174532925199433 * 90.0; /*0x54079c*/
}



// ==== 0x005407B0  sub_5407B0  this=-  sig=ida-proto ====
__int64 sub_5407B0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_AA0630 - dbl_AA0658); /*0x5407c2*/
  result = Math::RoundToInt(v0 * dbl_AA0650 * 0.5); /*0x5407d6*/
  dword_AA06A8 = result; /*0x5407db*/
  return result; /*0x5407e0*/
}



// ==== 0x005407F0  sub_5407F0  this=-  sig=ida-proto ====
void sub_5407F0()
{
  dbl_AA0660 = Math::ArcTan((double)dword_AA06A8 * 0.00390625); /*0x540807*/
}



// ==== 0x00540820  sub_540820  this=-  sig=ida-proto ====
void sub_540820()
{
  dbl_AA0678 = Math::ArcTan((double)(2 * dword_AA06A8) / dbl_AA0650); /*0x540842*/
}



// ==== 0x00540850  sub_540850  this=-  sig=ida-proto ====
__int64 sub_540850()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_AA06A8) + 0.5); /*0x54086b*/
  dword_AA069C = result; /*0x540870*/
  return result; /*0x540876*/
}



// ==== 0x00540880  sub_540880  this=-  sig=ida-proto ====
int sub_540880()
{
  word_AA0648 = 0; /*0x540882*/
  word_AA064A = 0; /*0x540888*/
  return 0; /*0x54088e*/
}



// ==== 0x00540890  sub_540890  this=-  sig=ida-proto ====
int sub_540890()
{
  dword_AA0668 = 0; /*0x540892*/
  dword_AA066C = 0; /*0x540897*/
  dword_AA0670 = 0; /*0x54089c*/
  return 0; /*0x5408a1*/
}



// ==== 0x005408B0  sub_5408B0  this=-  sig=ida-proto ====
int sub_5408B0()
{
  dword_AA0698 = 0; /*0x5408b5*/
  dword_AA0690 = 128; /*0x5408bf*/
  dword_AA0694 = 128; /*0x5408c4*/
  return 128; /*0x5408c9*/
}



// ==== 0x005408D0  sub_5408D0  this=-  sig=ida-proto ====
int sub_5408D0()
{
  dword_AA0638 = 0; /*0x5408d2*/
  dword_AA063C = 0; /*0x5408d7*/
  dword_AA0640 = 0; /*0x5408dc*/
  dword_AA0644 = 0; /*0x5408e1*/
  return 0; /*0x5408e6*/
}



// ==== 0x005408F0  IPXManagerClass::method_5408F0  this=IPXManagerClass  sig=csp ====
char *__thiscall sub_5408F0(char *this, int a2, int a3, int a4, int a5, __int16 a6, __int16 a7)
{
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  __int16 v10; // cx

  *(_DWORD *)this = &IPXManagerClass::`vftable'; /*0x5408f7*/
  if ( dword_887628 ) /*0x540905*/
  {
    (**(void (__thiscall ***)(int, int))dword_887628)(dword_887628, 1); /*0x54090b*/
    dword_887628 = 0; /*0x54090d*/
  }
  v8 = __2_YAPAXI_Z(0x3F310u); /*0x540918*/
  if ( v8 ) /*0x540922*/
    v9 = IPXInterfaceClass::Construct(v8); /*0x540926*/
  else
    v9 = 0; /*0x54092d*/
  dword_887628 = (int)v9; /*0x540931*/
  if ( WinsockInterface::Init(v9) ) /*0x540936*/
    this->Initialized = 1; /*0x54093f*/
  else
    this->Initialized = 0; /*0x540945*/
  if ( dword_887628 ) /*0x540950*/
    (**(void (__thiscall ***)(int, int))dword_887628)(dword_887628, 1); /*0x540956*/
  dword_887628 = 0; /*0x540960*/
  *((_DWORD *)this + 2) = a2; /*0x540966*/
  *((_DWORD *)this + 3) = a4; /*0x540969*/
  this->tail_6 = a2; /*0x540970*/
  this->Active = a5; /*0x54097c*/
  *((_DWORD *)this + 7) = a5; /*0x54097f*/
  this->Initialized = a7; /*0x540982*/
  LOBYTE(v10) = HIBYTE(a6); /*0x54098d*/
  HIBYTE(v10) = a6; /*0x540992*/
  *((_WORD *)this + 17) = v10; /*0x540996*/
  this->Active = 0; /*0x54099f*/
  this->Initialized = a3; /*0x5409a2*/
  *((_DWORD *)this + 9) = 0; /*0x5409a5*/
  *((_DWORD *)this + 17) = 0; /*0x5409a8*/
  *((_DWORD *)this + 21) = 0; /*0x5409ab*/
  memset(this + 40, 0, 0x1Cu); /*0x5409ae*/
  *((_DWORD *)this + 18) = 0; /*0x5409b3*/
  *((_DWORD *)this + 42) = -1; /*0x5409b6*/
  *((_DWORD *)this + 23) = -1; /*0x5409bc*/
  *((_DWORD *)this + 19) = 0; /*0x5409bf*/
  this->Active = 0; /*0x5409c2*/
  *((_DWORD *)this + 40) = 0; /*0x5409c5*/
  *((_DWORD *)this + 41) = 0; /*0x5409cb*/
  *((_DWORD *)this + 22) = 2; /*0x5409d1*/
  this->tail_6 = 60; /*0x5409d8*/
  return this; /*0x5409e1*/
}



// ==== 0x005409F0  IPXManagerClass::processPacket  this=IPXManagerClass  sig=csp ====
int __thiscall IPXManagerClass::processPacket(char *this)
{
  char v2; // al
  void (__thiscall ***v3)(_DWORD, int); // ecx
  void (__thiscall ***v4)(_DWORD, int); // ecx
  void (__thiscall ***v5)(_DWORD, int); // ecx
  int result; // eax
  int v7; // ebp
  char *v8; // edi
  ObjectClass *v9; // [esp+0h] [ebp-Ch]

  v2 = this->Active; /*0x5409f7*/
  *(_DWORD *)this = &IPXManagerClass::`vftable'; /*0x5409fa*/
  if ( v2 ) /*0x540a02*/
  {
    Network_Helper(v9); /*0x540a04*/
    this->Active = 0; /*0x540a09*/
  }
  v3 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 18); /*0x540a0c*/
  if ( v3 ) /*0x540a11*/
  {
    (**v3)(v3, 1); /*0x540a17*/
    *((_DWORD *)this + 18) = 0; /*0x540a19*/
  }
  v4 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 19); /*0x540a1c*/
  if ( v4 ) /*0x540a21*/
  {
    (**v4)(v4, 1); /*0x540a27*/
    *((_DWORD *)this + 19) = 0; /*0x540a29*/
  }
  v5 = (void (__thiscall ***)(_DWORD, int))this->Active; /*0x540a2c*/
  if ( v5 ) /*0x540a31*/
  {
    (**v5)(v5, 1); /*0x540a37*/
    this->Active = 0; /*0x540a39*/
  }
  result = *((_DWORD *)this + 17); /*0x540a3c*/
  v7 = 0; /*0x540a3f*/
  if ( result <= 0 ) /*0x540a43*/
  {
    *((_DWORD *)this + 17) = 0; /*0x540a70*/
    *(_DWORD *)this = &ConnManClass::`vftable'; /*0x540a73*/
  }
  else
  {
    v8 = this + 40; /*0x540a46*/
    do /*0x540a60*/
    {
      if ( *(_DWORD *)v8 ) /*0x540a49*/
        (***(void (__thiscall ****)(_DWORD, int))v8)(*(_DWORD *)v8, 1); /*0x540a53*/
      *(_DWORD *)v8 = 0; /*0x540a55*/
      result = *((_DWORD *)this + 17); /*0x540a57*/
      ++v7; /*0x540a5a*/
      v8 += 4; /*0x540a5b*/
    }
    while ( v7 < result ); /*0x540a60*/
    *((_DWORD *)this + 17) = 0; /*0x540a62*/
    *(_DWORD *)this = &ConnManClass::`vftable'; /*0x540a65*/
  }
  return result; /*0x540a6c*/
}



// ==== 0x00540A80  ObjectClass::Network_Init  this=ObjectClass  sig=csp ====
int __thiscall Network_Init(ObjectClass *this)
{
  int result; // eax
  void (__thiscall ***v3)(_DWORD, int); // ecx
  void (__thiscall ***v4)(_DWORD, int); // ecx
  void (__thiscall ***v5)(_DWORD, int); // ecx
  int v6; // ebp
  int *p_owningHouseIndex; // edi
  IPXGlobalConnClass *v8; // eax
  int *inited; // eax
  IPXGlobalConnClass *v10; // eax
  int *v11; // eax
  ObjectClass *v12; // [esp+0h] [ebp-8h]

  Debug::Log(); /*0x540a89*/
  if ( *(_DWORD *)&stru_887598.isAliveFlag ) /*0x540a9b*/
  {
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_887598.isAliveFlag + 20))(*(_DWORD *)&stru_887598.isAliveFlag); /*0x540a9f*/
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&stru_887598.isAliveFlag + 24))(*(_DWORD *)&stru_887598.isAliveFlag); /*0x540aaa*/
  }
  if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x540ab4*/
  {
    LOBYTE(this->?) = 1; /*0x540acf*/
  }
  else
  {
    if ( !LOBYTE(this->?) ) /*0x540ab6*/
      return 0; /*0x540abf*/
    if ( BYTE1(this->?) ) /*0x540ac0*/
    {
      Network_Helper(v12); /*0x540ac5*/
      BYTE1(this->?) = 0; /*0x540aca*/
    }
  }
  v3 = (void (__thiscall ***)(_DWORD, int))this->ambientSoundController[3]; /*0x540ad3*/
  if ( v3 ) /*0x540ad8*/
  {
    (**v3)(v3, 1); /*0x540ade*/
    this->ambientSoundController[3] = 0; /*0x540ae0*/
  }
  v4 = (void (__thiscall ***)(_DWORD, int))this->ambientSoundController[4]; /*0x540ae3*/
  if ( v4 ) /*0x540ae8*/
  {
    (**v4)(v4, 1); /*0x540aee*/
    this->ambientSoundController[4] = 0; /*0x540af0*/
  }
  v5 = (void (__thiscall ***)(_DWORD, int))this->customSound_controller[0]; /*0x540af3*/
  if ( v5 ) /*0x540af8*/
  {
    (**v5)(v5, 1); /*0x540afe*/
    this->customSound_controller[0] = 0; /*0x540b00*/
  }
  v6 = 0; /*0x540b07*/
  if ( this->ambientSoundController[2] > 0 ) /*0x540b0b*/
  {
    p_owningHouseIndex = &this->owningHouseIndex; /*0x540b0e*/
    do /*0x540b28*/
    {
      if ( *p_owningHouseIndex ) /*0x540b11*/
        (**(void (__thiscall ***)(int, int))*p_owningHouseIndex)(*p_owningHouseIndex, 1); /*0x540b1b*/
      *p_owningHouseIndex = 0; /*0x540b1d*/
      ++v6; /*0x540b22*/
      ++p_owningHouseIndex; /*0x540b23*/
    }
    while ( v6 < this->ambientSoundController[2] ); /*0x540b28*/
  }
  this->ambientSoundController[2] = 0; /*0x540b30*/
  v8 = (IPXGlobalConnClass *)__2_YAPAXI_Z(0xDCu); /*0x540b33*/
  if ( v8 ) /*0x540b3e*/
    inited = Network_Init_53FA90(v8, (int)this->?, 2 * (int)this->?, (int)this->?, (__int16)this->?, 4662); /*0x540b58*/
  else
    inited = 0; /*0x540b5f*/
  this->ambientSoundController[3] = (int)inited; /*0x540b63*/
  if ( !inited ) /*0x540b66*/
    return 0; /*0x540b69*/
  (*(void (__thiscall **)(int *))(*inited + 4))(inited); /*0x540b71*/
  *(_DWORD *)(this->ambientSoundController[3] + 40) = this->customSound_controller[2]; /*0x540b7f*/
  *(_DWORD *)(this->ambientSoundController[3] + 44) = this->customSound_controller[3]; /*0x540b88*/
  *(_DWORD *)(this->ambientSoundController[3] + 48) = this->customSound_controller[4]; /*0x540b91*/
  v10 = (IPXGlobalConnClass *)__2_YAPAXI_Z(0xDCu); /*0x540b94*/
  if ( v10 ) /*0x540b9e*/
    v11 = Network_Init_53FA90(v10, this->?, 2 * this->?, this->?, (__int16)this->?, 52719); /*0x540bb8*/
  else
    v11 = 0; /*0x540bbf*/
  this->ambientSoundController[4] = (int)v11; /*0x540bc3*/
  if ( !v11 ) /*0x540bc6*/
    return 0; /*0x540bc9*/
  (*(void (__thiscall **)(int *))(*v11 + 4))(v11); /*0x540bd1*/
  *(_DWORD *)(this->ambientSoundController[4] + 40) = this->customSound_controller[2]; /*0x540bda*/
  *(_DWORD *)(this->ambientSoundController[4] + 44) = this->customSound_controller[3]; /*0x540be3*/
  *(_DWORD *)(this->ambientSoundController[4] + 48) = this->customSound_controller[4]; /*0x540bec*/
  Network_Init_53F4F0( /*0x540c13*/
    HIWORD(this->?),
    this->occupant,
    this->visibilityFlags,
    this->lastLayer,
    *(_DWORD *)&this->needsRedraw,
    *(_DWORD *)&this->isInLogic,
    *(_DWORD *)&this->isOnMap);
  if ( !*(_DWORD *)&stru_887598.isAliveFlag ) /*0x540c1e*/
    return 0; /*0x540c21*/
  if ( *(_DWORD *)&dword_A8B238 == 4 || (result = Network_Init_53F540(v12)) != 0 ) /*0x540c35*/
  {
    BYTE1(this->?) = 1; /*0x540c3a*/
    return 1; /*0x540c3f*/
  }
  return result; /*0x540abb*/
}



// ==== 0x00540C50  ObjectClass::method_540C50  this=ObjectClass  sig=csp ====
int __thiscall sub_540C50(ObjectClass *this)
{
  return LOBYTE(this->?); /*0x540c55*/
}



// ==== 0x00540C60  IPXManagerClass::SetConnectionParams  this=IPXManagerClass  sig=csp ====
int __thiscall Network::SetConnectionParams(IPXManagerClass *this, int a2, int a3, int a4, char a5)
{
  int v6; // ecx
  IPXManagerClass *v7; // eax
  int Socket; // edx
  int result; // eax

  *((_DWORD *)this + 22) = a2; /*0x540c75*/
  *((_DWORD *)this + 23) = a3; /*0x540c78*/
  this->tail_6 = a4; /*0x540c7b*/
  Debug::Log(); /*0x540c7e*/
  Debug::Log(); /*0x540c8e*/
  if ( a5 ) /*0x540c9c*/
    (*(void (__thiscall **)(IPXManagerClass *, _DWORD, _DWORD, _DWORD))(this->Socket + 56))( /*0x540cae*/
      this,
      *((_DWORD *)this + 22),
      *((_DWORD *)this + 23),
      this->tail_6);
  v6 = 0; /*0x540cb4*/
  if ( *((int *)this + 17) > 0 ) /*0x540cb8*/
  {
    v7 = this + 5; /*0x540cbb*/
    do /*0x540ce1*/
    {
      Socket = v7->Socket; /*0x540cbe*/
      ++v6; /*0x540cc3*/
      v7 = (IPXManagerClass *)((char *)v7 + 4); /*0x540cc4*/
      *(_DWORD *)(Socket + 40) = *((_DWORD *)this + 22); /*0x540cc7*/
      *(_DWORD *)(*(_DWORD *)&v7[-1].Initialized + 44) = *((_DWORD *)this + 23); /*0x540cd0*/
      *(_DWORD *)(*(_DWORD *)&v7[-1].Initialized + 48) = this->tail_6; /*0x540cd9*/
    }
    while ( v6 < *((_DWORD *)this + 17) ); /*0x540ce1*/
  }
  result = this->Active; /*0x540ce4*/
  if ( result ) /*0x540ce9*/
  {
    *(_DWORD *)(result + 40) = *((_DWORD *)this + 22); /*0x540cee*/
    result = *((_DWORD *)this + 23); /*0x540cf4*/
    *(_DWORD *)(this->Active + 44) = result; /*0x540cf7*/
    *(_DWORD *)(this->Active + 48) = this->tail_6; /*0x540d00*/
  }
  return result; /*0x540d03*/
}



// ==== 0x00540D10  IPXManagerClass::SetCameraPosition  this=IPXManagerClass  sig=csp ====
int __thiscall TacticalClass::SetCameraPosition(IPXManagerClass *this, int a2, int a3, int a4)
{
  int result; // eax

  result = *((_DWORD *)this + 18); /*0x540d10*/
  if ( result ) /*0x540d15*/
  {
    *(_DWORD *)(result + 40) = a2; /*0x540d1b*/
    *(_DWORD *)(*((_DWORD *)this + 18) + 44) = a3; /*0x540d25*/
    result = *((_DWORD *)this + 18); /*0x540d28*/
    *(_DWORD *)(result + 48) = a4; /*0x540d2f*/
  }
  return result; /*0x540d32*/
}



// ==== 0x00540D40  IPXManagerClass::createConnection  this=IPXManagerClass  sig=csp ====
_DWORD *__thiscall IPXManagerClass::createConnection(IPXManagerClass *this)
{
  _DWORD *result; // eax

  result = (_DWORD *)*((_DWORD *)this + 18); /*0x540d40*/
  if ( result ) /*0x540d45*/
  {
    *((_DWORD *)this + 25) = result[10]; /*0x540d4a*/
    *((_DWORD *)this + 26) = result[11]; /*0x540d50*/
    result = (_DWORD *)result[12]; /*0x540d53*/
    *((_DWORD *)this + 27) = result; /*0x540d56*/
  }
  return result; /*0x540d59*/
}



// ==== 0x00540D60  IPXManagerClass::destroyConnection  this=IPXManagerClass  sig=csp ====
int __thiscall IPXManagerClass::destroyConnection(IPXManagerClass *this)
{
  int result; // eax

  result = *((_DWORD *)this + 18); /*0x540d60*/
  if ( result ) /*0x540d65*/
  {
    *(_DWORD *)(result + 40) = *((_DWORD *)this + 25); /*0x540d6a*/
    *(_DWORD *)(*((_DWORD *)this + 18) + 44) = *((_DWORD *)this + 26); /*0x540d73*/
    result = *((_DWORD *)this + 18); /*0x540d76*/
    *(_DWORD *)(result + 48) = *((_DWORD *)this + 27); /*0x540d7c*/
  }
  return result; /*0x540d7f*/
}



// ==== 0x00540D80  IPXManagerClass::sendPacket  this=IPXManagerClass  sig=csp ====
int __thiscall IPXManagerClass::sendPacket(IPXManagerClass *this, int a2, int a3, int a4)
{
  int v4; // eax
  int result; // eax

  v4 = *((_DWORD *)this + 19); /*0x540d80*/
  if ( v4 ) /*0x540d93*/
  {
    *(_DWORD *)(v4 + 40) = a2; /*0x540d95*/
    *(_DWORD *)(*((_DWORD *)this + 19) + 44) = a3; /*0x540d9b*/
    *(_DWORD *)(*((_DWORD *)this + 19) + 48) = a4; /*0x540da1*/
  }
  result = this->Active; /*0x540da4*/
  if ( result ) /*0x540da9*/
  {
    *(_DWORD *)(result + 40) = a2; /*0x540dab*/
    result = this->Active; /*0x540dae*/
    *(_DWORD *)(result + 44) = a3; /*0x540db1*/
    *(_DWORD *)(this->Active + 48) = a4; /*0x540db7*/
  }
  return result; /*0x540dba*/
}



// ==== 0x00540DC0  SessionClass::initLAN  this=SessionClass  sig=csp ====
int __thiscall sub_540DC0(int this, int a2, wchar_t *Source, _DWORD *a4)
{
  void *v6; // eax
  void *v7; // eax
  int v8; // ecx

  if ( !*(_BYTE *)(this + 4) ) /*0x540dc3*/
    return 0; /*0x540dca*/
  if ( *(_DWORD *)(this + 68) == 7 ) /*0x540dd4*/
    return 0; /*0x540dd6*/
  v6 = __2_YAPAXI_Z(0xB8u); /*0x540de1*/
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
int __thiscall SessionClass::initInternet(SessionClass *this)
{
  int result; // eax
  IPXConnClass *v3; // ebp
  _DWORD *v4; // ebx
  int v5; // edi
  char *v6; // eax

  if ( !LOBYTE(this->MPGameMode[0]) ) /*0x540e73*/
    return 0; /*0x540e7a*/
  v3 = (IPXConnClass *)__2_YAPAXI_Z(0xB8u); /*0x540e89*/
  if ( v3 ) /*0x540e90*/
  {
    v4 = dword_A8DA78; /*0x540e93*/
    v5 = this->unknown_14[0]; /*0x540e9a*/
    v6 = CharToWideString(aMulticast); /*0x540ea4*/
    result = (int)IPXConnClass::constructor( /*0x540ebf*/
                    v3,
                    v5,
                    v5,
                    this->unknown_10[0],
                    this->Config[2],
                    (_DWORD *)(*v4 + 40),
                    -1,
                    (wchar_t *)v6,
                    0);
  }
  else
  {
    result = 0; /*0x540ec8*/
  }
  *(_DWORD *)this->__pad_50 = result; /*0x540ecc*/
  if ( result ) /*0x540ed0*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)result + 4))(result); /*0x540ed8*/
    *(_DWORD *)(*(_DWORD *)this->__pad_50 + 40) = *(_DWORD *)&this->__pad_50[8]; /*0x540ee1*/
    *(_DWORD *)(*(_DWORD *)this->__pad_50 + 44) = *(_DWORD *)&this->__pad_50[12]; /*0x540eea*/
    *(_DWORD *)(*(_DWORD *)this->__pad_50 + 48) = *(_DWORD *)&this->__pad_50[16]; /*0x540ef8*/
    return 1; /*0x540ef3*/
  }
  return result; /*0x540e7c*/
}



// ==== 0x00540F00  Network::sendData  this=Network  sig=csp ====
int __thiscall sub_540F00(int this, int a2)
{
  int v3; // ecx
  int v4; // esi
  int i; // eax
  void (__thiscall ***v7)(_DWORD, int); // ecx
  int v8; // ecx
  _DWORD *v9; // eax
  int v10; // ecx
  int v11; // edx

  if ( !*(_BYTE *)(this + 4) ) /*0x540f05*/
    return 0; /*0x540f05*/
  v3 = *(_DWORD *)(this + 68); /*0x540f0c*/
  if ( !v3 ) /*0x540f11*/
    return 0; /*0x540f11*/
  v4 = 0; /*0x540f13*/
  if ( v3 <= 0 ) /*0x540f17*/
    return 0; /*0x540f2f*/
  for ( i = this + 40; *(_DWORD *)(*(_DWORD *)i + 100) != a2; i += 4 ) /*0x540f1d*/
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
  v11 = *(_DWORD *)(this + 68) - 1; /*0x540f6c*/
  *(_DWORD *)(this + 68) = v11; /*0x540f6f*/
  if ( v10 >= v11 ) /*0x540f74*/
    *(_DWORD *)(this + 84) = 0; /*0x540f76*/
  return 1; /*0x540f2f*/
}



// ==== 0x00540F90  IPXManagerClass::GetSendCount  this=IPXManagerClass  sig=csp ====
int __thiscall Network::GetSendCount(IPXManagerClass *this)
{
  return *((_DWORD *)this + 17); /*0x540f93*/
}



// ==== 0x00540FA0  IPXManagerClass::GetConnectionSpeed  this=IPXManagerClass  sig=csp ====
int __thiscall Network::GetConnectionSpeed(IPXManagerClass *this, int a2)
{
  if ( a2 < 0 || a2 >= *((_DWORD *)this + 17) ) /*0x540fab*/
    return -1; /*0x540fb7*/
  else
    return *(_DWORD *)(*((_DWORD *)this + a2 + 10) + 100); /*0x540fb1*/
}



// ==== 0x00540FC0  Network::GetClass  this=Network  sig=csp ====
int __thiscall Network::GetClass(Network *this, int a2)
{
  void *Network_field_0x44; // esi
  int v3; // eax
  int *i; // edx

  Network_field_0x44 = this->Network_field_0x44; /*0x540fc2*/
  v3 = 0; /*0x540fc5*/
  if ( (int)Network_field_0x44 <= 0 ) /*0x540fca*/
    return 0; /*0x540fe2*/
  for ( i = this->Network_field_0x28; *(_DWORD *)(*i + 100) != a2; ++i ) /*0x540fd0*/
  {
    if ( ++v3 >= (int)Network_field_0x44 ) /*0x540fe0*/
      return 0; /*0x540fe0*/
  }
  return this->Network_field_0x28[v3] + 104; /*0x540fe2*/
}



// ==== 0x00541000  Network::FindPlayerByID  this=Network  sig=csp ====
int __thiscall Network::FindPlayerByID(Network *this, int a2)
{
  void *Network_field_0x44; // esi
  int v3; // eax
  int *i; // edx

  Network_field_0x44 = this->Network_field_0x44; /*0x541002*/
  v3 = 0; /*0x541005*/
  if ( (int)Network_field_0x44 <= 0 ) /*0x54100a*/
    return 0; /*0x541022*/
  for ( i = this->Network_field_0x28; *(_DWORD *)(*i + 100) != a2; ++i ) /*0x541010*/
  {
    if ( ++v3 >= (int)Network_field_0x44 ) /*0x541020*/
      return 0; /*0x541020*/
  }
  return this->Network_field_0x28[v3] + 76; /*0x541022*/
}



// ==== 0x00541040  IPXManagerClass::send  this=IPXManagerClass  sig=csp ====
int __thiscall IPXManagerClass::send(IPXManagerClass *this, int a2)
{
  int v2; // edx
  int result; // eax
  IPXManagerClass *i; // ecx

  v2 = *((_DWORD *)this + 17); /*0x541040*/
  result = 0; /*0x541043*/
  if ( v2 <= 0 ) /*0x541049*/
    return -1; /*0x541061*/
  for ( i = this + 5; *(_DWORD *)(i->Socket + 100) != a2; i = (IPXManagerClass *)((char *)i + 4) ) /*0x54104f*/
  {
    if ( ++result >= v2 ) /*0x54105f*/
      return -1; /*0x54105f*/
  }
  return result; /*0x541064*/
}



// ==== 0x00541070  IPXManagerClass::receivePacket  this=IPXManagerClass  sig=csp ====
int __thiscall IPXManagerClass::receivePacket(IPXManagerClass *this, int a2)
{
  int v2; // edx
  int result; // eax
  IPXManagerClass *v4; // esi

  v2 = *((_DWORD *)this + 17); /*0x541070*/
  result = 0; /*0x541074*/
  if ( v2 <= 0 ) /*0x54107d*/
  {
LABEL_5:
    if ( a2 == this->Active ) /*0x541091*/
    {
      return -4; /*0x541095*/
    }
    else if ( a2 == *((_DWORD *)this + 19) ) /*0x5410a0*/
    {
      return -3; /*0x5410a4*/
    }
    else
    {
      return (a2 != *((_DWORD *)this + 18)) - 2; /*0x5410b6*/
    }
  }
  else
  {
    v4 = this + 5; /*0x54107f*/
    while ( v4->Socket != a2 ) /*0x541084*/
    {
      ++result; /*0x541086*/
      v4 = (IPXManagerClass *)((char *)v4 + 4); /*0x541087*/
      if ( result >= v2 ) /*0x54108c*/
        goto LABEL_5; /*0x54108c*/
    }
  }
  return result; /*0x541093*/
}



// ==== 0x005410F0  Network::SendMessage  this=Network  sig=csp ====
int __thiscall Network::SendMessage(int *this, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v8; // edi
  int v9; // edi

  if ( !this->q004 || !this->q014 ) /*0x5410fa*/
    return 0; /*0x541169*/
  v8 = a4; /*0x541107*/
  if ( a4 && (!a5 || Network::IsBroadcastAddr((_BYTE *)a5)) ) /*0x541115*/
    v8 = 0; /*0x54111e*/
  v9 = (*(int (__thiscall **)(_DWORD, int, int, int, int, int, int))(*(_DWORD *)this->q048 + 44))( /*0x54113e*/
         this->q048,
         a2,
         a3,
         a5,
         v8,
         a6,
         a7);
  if ( !v9 ) /*0x541142*/
  {
    ++this->u32_28; /*0x54114b*/
    Debug::Log(); /*0x541159*/
  }
  return v9; /*0x541165*/
}



// ==== 0x00541170  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_541170(ObjectClass *this, int a2, int a3, int a4, int a5)
{
  int v5; // ebx
  int v7; // eax
  _DWORD *i; // edx
  _DWORD *v10; // ecx
  char ptr_4; // al
  int v12; // edi
  int v13; // edi
  int v14; // [esp+0h] [ebp-1Ch] BYREF
  _DWORD v15[3]; // [esp+10h] [ebp-Ch] BYREF

  HIWORD(v5) = HIWORD(a5); /*0x541174*/
  if ( dword_A8DA84 && *(_DWORD *)(*dword_A8DA78 + 111) == a5 ) /*0x541192*/
    return 0; /*0x541192*/
  v7 = 1; /*0x541194*/
  if ( dword_A8DA84 <= 1 ) /*0x54119b*/
    return 0; /*0x54119b*/
  for ( i = dword_A8DA78 + 1; *(_DWORD *)(*i + 111) != a5; ++i ) /*0x54119d*/
  {
    if ( ++v7 >= dword_A8DA84 ) /*0x5411ad*/
      return 0; /*0x5411ad*/
  }
  LOWORD(v5) = *(&dword_A8E2B2 + v7); /*0x5411be*/
  v10 = (_DWORD *)(dword_A8DA78[v7] + 40); /*0x5411c6*/
  ptr_4 = (char)this->?; /*0x5411c9*/
  v12 = a4; /*0x5411cc*/
  v15[0] = *v10; /*0x5411d2*/
  v15[1] = v10[1]; /*0x5411d9*/
  v15[2] = v10[2]; /*0x5411e2*/
  if ( !ptr_4 || !BYTE1(this->?) ) /*0x5411e8*/
    return 0; /*0x5411af*/
  if ( a4 && (&v14 == (int *)-16 || Network::IsBroadcastAddr((Network *)v15)) ) /*0x5411ff*/
    v12 = 0; /*0x541208*/
  v13 = (*(int (__thiscall **)(int, int, int, _DWORD *, int, int, _DWORD))(*(_DWORD *)this->ambientSoundController[3] /*0x541225*/
                                                                         + 44))(
          this->ambientSoundController[3],
          a2,
          a3,
          v15,
          v12,
          v5,
          0);
  if ( !v13 ) /*0x541229*/
  {
    ++this->location[1]; /*0x541232*/
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

  if ( dword_A8DA84 && !_wcsicmp(*(const wchar_t **)dword_A8DA78, String2) ) /*0x54127e*/
    return 0; /*0x54127e*/
  v6 = 1; /*0x54128f*/
  if ( dword_A8DA84 <= 1 ) /*0x541296*/
    return 0; /*0x541296*/
  while ( _wcsicmp(*(const wchar_t **)(dword_A8DA78 + 4 * v6), String2) ) /*0x5412ad*/
  {
    if ( ++v6 >= dword_A8DA84 ) /*0x5412b7*/
      return 0; /*0x5412b7*/
  }
  v8 = a4; /*0x5412ca*/
  v9 = *(_DWORD **)(dword_A8DA78 + 4 * v6); /*0x5412ce*/
  LOWORD(v6) = *((_WORD *)&dword_A8E2B2 + v6); /*0x5412d1*/
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
int __thiscall Network::Send(Network *this, int a2, int a3, int a4, int a5)
{
  if ( LOBYTE(this->Network_field_0x4) && BYTE1(this->Network_field_0x4) ) /*0x541377*/
    return (*(int (__thiscall **)(int, int, int, int, int))(*(_DWORD *)this->Network_field_0x48 + 52))( /*0x541397*/
             this->Network_field_0x48,
             a2,
             a3,
             a4,
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
int __thiscall Network::SendPacket(int *this, int a2, int a3, unsigned __int8 a4)
{
  int v5; // ecx
  int v6; // edi

  if ( !this->q004 ) /*0x541413*/
    return 0; /*0x541413*/
  if ( !this->q014 ) /*0x54141a*/
    return 0; /*0x54141a*/
  v5 = this->q04C; /*0x541421*/
  if ( !v5 ) /*0x541426*/
    return 0; /*0x541475*/
  v6 = (*(int (__stdcall **)(int, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v5 + 44))(a2, a3, v5 + 76, a4, 0, 0); /*0x54144b*/
  if ( !v6 ) /*0x54144f*/
  {
    ++this->u32_28; /*0x541458*/
    Debug::Log(); /*0x541466*/
  }
  return v6; /*0x541471*/
}



// ==== 0x00541480  Network::SendPacketThunk2  this=Network  sig=csp ====
int __thiscall Network::SendPacketThunk2(Network *this, int a2, int a3, int a4, int a5)
{
  if ( LOBYTE(this->Network_field_0x4) && BYTE1(this->Network_field_0x4) ) /*0x541487*/
    return (*(int (__thiscall **)(void *, int, int, int, int))(*(_DWORD *)this->Network_field_0x4C + 52))( /*0x5414a7*/
             this->Network_field_0x4C,
             a2,
             a3,
             a4,
             a5);
  else
    return 0; /*0x5414ad*/
}



// ==== 0x005414C0  IPXManagerClass::release  this=IPXManagerClass  sig=csp ====
int __thiscall IPXManagerClass::release(IPXManagerClass *this, int a2, int a3, int a4, int a5)
{
  int v6; // ecx
  _DWORD *v7; // ecx
  int v9; // eax
  IPXManagerClass *v10; // edx
  int v11; // edi
  IPXManagerClass *v12; // ebx
  int v13; // eax
  _DWORD *v14; // ecx

  if ( !this->Initialized ) /*0x5414c6*/
    return 0; /*0x5414c6*/
  if ( !this->Active ) /*0x5414d1*/
    return 0; /*0x5414d1*/
  v6 = *((_DWORD *)this + 17); /*0x5414dc*/
  if ( !v6 ) /*0x5414e1*/
    return 0; /*0x5414e1*/
  if ( a5 != -1 ) /*0x5414ee*/
  {
    v13 = (*(int (__thiscall **)(IPXManagerClass *, int))(this->Socket + 24))(this, a5); /*0x54159b*/
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
  if ( *(_DWORD *)&dword_A8B238 == 4 && byte_A8DBA0 ) /*0x541504*/
  {
    v7 = (_DWORD *)this->Active; /*0x541506*/
    if ( *(_DWORD *)(v7[1] + 40) < *(_DWORD *)(v7[1] + 4) ) /*0x541514*/
      return (*(int (__thiscall **)(_DWORD *, int, int, int, int))(*v7 + 8))(v7, a2, a3, a4, 255); /*0x541537*/
    goto LABEL_20; /*0x541514*/
  }
  v9 = 0; /*0x54153a*/
  if ( v6 > 0 ) /*0x54153e*/
  {
    v10 = this + 5; /*0x541540*/
    while ( *(_DWORD *)(*(_DWORD *)(v10->Socket + 4) + 40) != *(_DWORD *)(*(_DWORD *)(v10->Socket + 4) + 4) ) /*0x541550*/
    {
      ++v9; /*0x541556*/
      v10 = (IPXManagerClass *)((char *)v10 + 4); /*0x541557*/
      if ( v9 >= v6 ) /*0x54155c*/
        goto LABEL_13; /*0x54155c*/
    }
LABEL_20:
    ++*((_DWORD *)this + 40); /*0x5415d6*/
    return 0; /*0x5415df*/
  }
LABEL_13:
  v11 = 0; /*0x54155e*/
  if ( v6 > 0 ) /*0x541562*/
  {
    v12 = this + 5; /*0x541568*/
    do /*0x541588*/
    {
      (*(void (__thiscall **)(int, int, int, int, _DWORD))(*(_DWORD *)v12->Socket + 8))(v12->Socket, a2, a3, a4, 0); /*0x54157c*/
      ++v11; /*0x541582*/
      v12 = (IPXManagerClass *)((char *)v12 + 4); /*0x541583*/
    }
    while ( v11 < *((_DWORD *)this + 17) ); /*0x541588*/
  }
  return 1; /*0x541533*/
}



// ==== 0x005415F0  IPXManagerClass::ddtor  this=IPXManagerClass  sig=csp ====
int __thiscall IPXManagerClass::ddtor(IPXManagerClass *this, int a2, int a3, _DWORD *a4)
{
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  int v9; // edx
  int v10; // edi
  int v11; // edx
  int v13; // [esp+10h] [ebp-4h]

  if ( !this->Initialized ) /*0x5415f7*/
    return 0; /*0x5415f7*/
  if ( !this->Active ) /*0x5415fe*/
    return 0; /*0x5415fe*/
  v5 = *((_DWORD *)this + 17); /*0x541605*/
  if ( !v5 ) /*0x54160c*/
    return 0; /*0x54160c*/
  if ( *((_DWORD *)this + 21) >= v5 ) /*0x541611*/
    *((_DWORD *)this + 21) = 0; /*0x541613*/
  v13 = 0; /*0x541618*/
  if ( v5 <= 0 ) /*0x54161c*/
    return 0; /*0x541661*/
  while ( 1 ) /*0x54162b*/
  {
    v6 = *((_DWORD *)this + *((_DWORD *)this + 21) + 10); /*0x54162b*/
    v7 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v6 + 16))(v6, a2, a3); /*0x541631*/
    v8 = *((_DWORD *)this + 21); /*0x541634*/
    v9 = *((_DWORD *)this + v8++ + 10); /*0x541637*/
    v10 = *(_DWORD *)(v9 + 100); /*0x54163c*/
    v11 = *((_DWORD *)this + 17); /*0x54163f*/
    *((_DWORD *)this + 21) = v8; /*0x541644*/
    if ( v8 >= v11 ) /*0x541647*/
      *((_DWORD *)this + 21) = 0; /*0x541649*/
    if ( v7 ) /*0x541652*/
      break; /*0x541652*/
    if ( ++v13 >= v11 ) /*0x54165f*/
      return 0; /*0x54165f*/
  }
  *a4 = v10; /*0x54166f*/
  return 1; /*0x541661*/
}



// ==== 0x00541680  Network_Recv  this=IPXManagerClass  sig=csp ====
char __stdcall sub_541680(int a1, int a2, int a3, int a4, __int16 a5)
{
  int v5; // edx
  int *v7; // ebx
  __int16 v8; // di
  int v9; // [esp+0h] [ebp-1Ch] BYREF
  int v10; // [esp+8h] [ebp-14h] BYREF
  unsigned __int16 v11[6]; // [esp+10h] [ebp-Ch] BYREF

  if ( (byte_AA0674 & 1) == 0 ) /*0x54168a*/
  {
    byte_AA0674 |= 1u; /*0x541696*/
    dword_AA06B0 = htonl(0x7F000001u); /*0x5416a1*/
  }
  if ( dword_A8B238[0] != 4 || !byte_A8DBA0 || !unk_B052EC ) /*0x5416ca*/
    return 0; /*0x5416ca*/
  if ( *(unsigned __int16 *)(a1 + 12) == *(_DWORD *)&dword_841F3C ) /*0x5416e8*/
  {
    *(_WORD *)(a1 + 12) = a5; /*0x5416f2*/
    *(_DWORD *)(a1 + 8) = *(_DWORD *)(a4 + 4); /*0x541701*/
    Network::FormatAddress((unsigned __int16 *)a4, 0); /*0x541704*/
    Debug::Log(); /*0x54170f*/
    LOWORD(v5) = dword_841F3C; /*0x541714*/
    (*(void (__thiscall **)(int, int, int, void *, int, _DWORD, int, int))(*(_DWORD *)dword_887628 + 12))( /*0x54173c*/
      dword_887628,
      a2,
      a3,
      &unk_AA06AC,
      12,
      0,
      1,
      v5);
    return 1; /*0x541746*/
  }
  if ( !*(_WORD *)(a1 + 12) ) /*0x5416da*/
    return 0; /*0x54174c*/
  Network::CopyAddress_Small((char *)(*(_DWORD *)dword_A8DA78 + 40), (int)&v9); /*0x54175e*/
  v7 = (int *)(a1 + 8); /*0x541766*/
  if ( v9 == *(_DWORD *)(a1 + 8) && (_WORD)dword_A8E2B2 == *(_WORD *)(a1 + 12) ) /*0x54177e*/
  {
    Debug::Log(); /*0x541785*/
    return 0; /*0x541794*/
  }
  if ( !*v7 ) /*0x54179a*/
    return 0; /*0x54179a*/
  v8 = *(_WORD *)(a1 + 12); /*0x54179d*/
  Waypoint::InitInvalid(v11); /*0x5417a5*/
  v10 = *v7; /*0x5417b5*/
  Struct::Copy6Bytes((char *)v11, (int)&v10); /*0x5417b9*/
  Network::SetPort(v11, v8); /*0x5417c3*/
  *(_WORD *)(a1 + 12) = 0; /*0x5417c8*/
  *v7 = 0; /*0x5417d4*/
  Network::FormatAddress(v11, 0); /*0x5417da*/
  Debug::Log(); /*0x5417e5*/
  (*(void (__thiscall **)(int, int, int, unsigned __int16 *, int, _DWORD, int, __int16))(*(_DWORD *)dword_887628 + 12))( /*0x54180b*/
    dword_887628,
    a2,
    a3,
    v11,
    12,
    0,
    1,
    v8);
  return 1; /*0x541743*/
}



// ==== 0x00541820  IPXManagerClass::ReceiveLoop  this=IPXManagerClass  sig=csp ====
int __thiscall Network::ReceiveLoop(IPXManagerClass *this)
{
  void *Network_field_0xC; // ebx
  void *v3; // edx
  int v4; // ecx
  int v5; // edi
  bool v6; // zf
  unsigned __int16 *v7; // ebp
  int v8; // ecx
  const char *v9; // eax
  int v10; // edi
  char *v11; // eax
  __int16 v12; // ax
  __int16 v13; // bp
  int v14; // edx
  int *v15; // ecx
  int *v16; // eax
  int PlayerName; // eax
  int v18; // ebp
  IPXManagerClass *v19; // ebx
  char *v20; // eax
  int *v21; // ecx
  int v22; // ecx
  int *v23; // edx
  _WORD *v24; // ecx
  char v25; // cl
  int v26; // ebp
  IPXManagerClass *v27; // edi
  char LinkedIndex; // al
  int v29; // eax
  int v30; // edi
  _DWORD *v31; // ecx
  int i; // edi
  int *v33; // ecx
  int *v34; // eax
  int *v35; // eax
  int *v36; // ecx
  int v37; // ecx
  int v38; // ebp
  int v39; // ecx
  int v40; // ecx
  IPXManagerClass *v41; // edi
  int result; // eax
  __int16 v43; // [esp+20h] [ebp-4CCh]
  int v44; // [esp+20h] [ebp-4CCh]
  Network *v45; // [esp+24h] [ebp-4C8h]
  __int16 v46[2]; // [esp+34h] [ebp-4B8h] BYREF
  Network v47[2]; // [esp+38h] [ebp-4B4h] BYREF

  v47[0].Network_field_0x10 = (void *)1; /*0x541830*/
  Waypoint::InitInvalid((Waypoint *)v47); /*0x541838*/
  if ( *(_DWORD *)&stru_887598.isAliveFlag ) /*0x541844*/
  {
    while ( 1 ) /*0x541864*/
    {
      *(_DWORD *)v47[0].__pad_14 = 1024; /*0x541864*/
      *(_DWORD *)&v47[0].__pad_14[4] = 128; /*0x54186c*/
      *(_DWORD *)v46 = 0; /*0x541874*/
      Network_field_0xC = (void *)(*(int (__thiscall **)(_DWORD, char *, char *, char *, char *, __int16 *))(**(_DWORD **)&stru_887598.isAliveFlag + 8))( /*0x541889*/
                                    *(_DWORD *)&stru_887598.isAliveFlag,
                                    &v47[0].__pad_87[45],
                                    v47[0].__pad_14,
                                    v47[0].__pad_34,
                                    &v47[0].__pad_14[4],
                                    v46);
      v47[0].Network_field_0xC = Network_field_0xC; /*0x54188d*/
      if ( !Network_field_0xC ) /*0x541891*/
        goto LABEL_92; /*0x541891*/
      v3 = *(void **)&v47[0].__pad_34[4]; /*0x54189b*/
      v47[0].Network_field_0x0 = *(_DWORD *)v47[0].__pad_34; /*0x5418a6*/
      v4 = *((_DWORD *)this + 18); /*0x5418aa*/
      *((_DWORD *)this + 35) = &v47[0].__pad_87[45]; /*0x5418ad*/
      v47[0].Network_field_0x4 = v3; /*0x5418b7*/
      v47[0].Network_field_0x8 = *(void **)&v47[0].__pad_34[8]; /*0x5418bb*/
      if ( *(_WORD *)&v47[0].__pad_87[45] == *(_WORD *)(v4 + 36) ) /*0x5418cb*/
      {
        if ( Network_Recv( /*0x5418ee*/
               (int)&v47[0].__pad_87[45],
               (int)&v47[0].__pad_87[45],
               (int)Network_field_0xC,
               (int)v47[0].__pad_34,
               v46[0]) )
        {
          goto LABEL_87; /*0x5418f5*/
        }
        if ( (*(int (__thiscall **)(_DWORD, char *, void *, Network *, _DWORD))(**((_DWORD **)this + 18) + 48))( /*0x541913*/
               *((_DWORD *)this + 18),
               &v47[0].__pad_87[45],
               Network_field_0xC,
               v47,
               *(_DWORD *)v46) )
        {
          if ( *(_DWORD *)&dword_A8B238 == 4 && byte_A8E2C8 ) /*0x541932*/
          {
            v5 = 0; /*0x54193d*/
            v6 = dword_A8DA84 == 0; /*0x54193f*/
            if ( dword_A8DA84 <= 0 ) /*0x541941*/
            {
LABEL_14:
              if ( !v6 ) /*0x541980*/
              {
                Debug::Log(); /*0x54198b*/
                if ( (unsigned int)Network_field_0xC >= 0x10 /*0x5419ad*/
                  && v47[0].__pad_87[47] != 2
                  && (unsigned int)Network_field_0xC >= 0x3F )
                {
                  v8 = *(_DWORD *)(*((_DWORD *)this + 35) + 16); /*0x5419bc*/
                  if ( v8 == 39 || v8 == 41 || v8 == 13 ) /*0x5419cb*/
                  {
                    v9 = (const char *)(*((_DWORD *)this + 35) + 20); /*0x5419d3*/
                    *(_DWORD *)&v47[0].__pad_14[8] = 0; /*0x5419d6*/
                    *(_DWORD *)&v47[0].__pad_14[12] = 0; /*0x5419dc*/
                    *(_DWORD *)&v47[0].Network_field_0x22[2] = 0; /*0x5419e4*/
                    v47[0].Network_field_0x28[0] = 0; /*0x5419e9*/
                    *(_DWORD *)v47[0].__pad_2C = 0; /*0x5419ee*/
                    LOWORD(v47[0].Network_field_0x30[0]) = 0; /*0x5419f2*/
                    strncpy(&v47[0].__pad_14[8], v9, 0x14u); /*0x5419f7*/
                    v10 = 0; /*0x541a04*/
                    if ( dword_A8DA84 > 0 ) /*0x541a08*/
                    {
                      while ( 1 ) /*0x541a1b*/
                      {
                        v11 = ToWideStringChar((char *)dword_A8DA78[v10]); /*0x541a1b*/
                        if ( !_strcmpi(v11, &v47[0].__pad_14[8]) ) /*0x541a21*/
                          break; /*0x541a21*/
                        if ( ++v10 >= dword_A8DA84 ) /*0x541a35*/
                          goto LABEL_87; /*0x541a35*/
                      }
                      if ( !(unsigned __int8)NetworkID::Compare((bool *)(dword_A8DA78[v10] + 40), (int)v47) /*0x541a67*/
                        || *(_WORD *)(dword_A8DA78[v10] + 40) != v46[0] )
                      {
                        Debug::Log(); /*0x541a7d*/
                        v12 = v46[0]; /*0x541a82*/
                        v13 = *(&dword_A8E2B2 + v10); /*0x541a86*/
                        *(&dword_A8E2B2 + v10) = v46[0]; /*0x541a91*/
                        Network::reconnect( /*0x541aab*/
                          (Network *)&stru_B052C0.__pad_0[16],
                          *(_DWORD *)(dword_A8DA78[v10] + 111),
                          v12);
                        (*(void (__thiscall **)(_DWORD, Network *, __int16))(**((_DWORD **)this + 18) + 64))( /*0x541abb*/
                          *((_DWORD *)this + 18),
                          v47,
                          v13);
                        v14 = dword_A8DA78[v10]; /*0x541ac7*/
                        LOWORD(v14) = *(_WORD *)(v14 + 40); /*0x541acc*/
                        (*(void (__thiscall **)(_DWORD, Network *, int))(**((_DWORD **)this + 18) + 64))( /*0x541ad6*/
                          *((_DWORD *)this + 18),
                          v47,
                          v14);
                        v15 = (int *)(dword_A8DA78[v10] + 40); /*0x541ae5*/
                        *v15 = v47[0].Network_field_0x0; /*0x541ae8*/
                        v15[1] = (int)v47[0].Network_field_0x4; /*0x541aee*/
                        v15[2] = (int)v47[0].Network_field_0x8; /*0x541af5*/
                        Network::SetPort((Network *)(dword_A8DA78[v10] + 40), v46[0]); /*0x541b09*/
                        NetworkManager::SetPlayerAddress( /*0x541b24*/
                          (NetworkManager *)&stru_B052C0.__pad_0[16],
                          *(_DWORD *)(dword_A8DA78[v10] + 111),
                          (_DWORD *)(dword_A8DA78[v10] + 40));
                        v16 = (int *)(dword_A8DA90[GameClass::FindPlayerName(v10)] + 40); /*0x541b3f*/
                        *v16 = v47[0].Network_field_0x0; /*0x541b42*/
                        v16[1] = (int)v47[0].Network_field_0x4; /*0x541b48*/
                        v16[2] = (int)v47[0].Network_field_0x8; /*0x541b4f*/
                        v43 = v46[0]; /*0x541b56*/
                        PlayerName = GameClass::FindPlayerName(v10); /*0x541b5d*/
                        Network::SetPort((Network *)(dword_A8DA90[PlayerName] + 40), v43); /*0x541b6c*/
                        v18 = 0; /*0x541b74*/
                        if ( *((int *)this + 17) > 0 ) /*0x541b78*/
                        {
                          v19 = this + 5; /*0x541b7a*/
                          while ( 1 ) /*0x541b87*/
                          {
                            v20 = ToWideStringChar((char *)(v19->Socket + 104)); /*0x541b87*/
                            if ( !_strcmpi(v20, &v47[0].__pad_14[8]) ) /*0x541b8d*/
                              break; /*0x541b8d*/
                            ++v18; /*0x541b9c*/
                            v19 = (IPXManagerClass *)((char *)v19 + 4); /*0x541b9d*/
                            if ( v18 >= *((_DWORD *)this + 17) ) /*0x541ba2*/
                              goto LABEL_33; /*0x541ba2*/
                          }
                          v21 = (int *)(*((_DWORD *)this + v18 + 10) + 76); /*0x541bae*/
                          *v21 = v47[0].Network_field_0x0; /*0x541bb1*/
                          v21[1] = (int)v47[0].Network_field_0x4; /*0x541bb7*/
                          v21[2] = (int)v47[0].Network_field_0x8; /*0x541bbe*/
                          Network::SetPort((Network *)(*((_DWORD *)this + v18 + 10) + 76), v46[0]); /*0x541bcd*/
                          Network::FormatAddress((Network *)(*((_DWORD *)this + v18 + 10) + 76), 0); /*0x541bdb*/
                          Debug::Log(); /*0x541be7*/
LABEL_33:
                          Network_field_0xC = v47[0].Network_field_0xC; /*0x541bef*/
                        }
                        if ( !BYTE2(stru_A8D600.Network_field_0xC) ) /*0x541bfa*/
                        {
                          if ( *((_DWORD *)this + 17) ) /*0x541c00*/
                          {
                            v22 = dword_A8DA78[v10]; /*0x541c16*/
                            if ( stru_A80220.? > *(_DWORD *)(v22 + 111) ) /*0x541c1c*/
                            {
                              if ( SessionClass::IsValidHouse( /*0x541c36*/
                                     (int)&dword_A8B238,
                                     *((#375 **)stru_A80220.? + *(_DWORD *)(v22 + 111))) )
                              {
                                Network::FormatAddress(v47, 0); /*0x541c49*/
                                Network::FormatAddress((Network *)(this->Active + 76), 0); /*0x541c57*/
                                Debug::Log(); /*0x541c69*/
                                v23 = (int *)(this->Active + 76); /*0x541c75*/
                                *v23 = v47[0].Network_field_0x0; /*0x541c7b*/
                                v23[1] = (int)v47[0].Network_field_0x4; /*0x541c81*/
                                v23[2] = (int)v47[0].Network_field_0x8; /*0x541c88*/
                                Network::SetPort((Network *)(this->Active + 76), v46[0]); /*0x541c96*/
                                stru_A8BB1C.Network_field_0x0 = v47[0].Network_field_0x0; /*0x541ca7*/
                                stru_A8BB1C.Network_field_0x8 = v47[0].Network_field_0x8; /*0x541cb1*/
                                stru_A8BB1C.Network_field_0x4 = v47[0].Network_field_0x4; /*0x541cbd*/
                                Network::SetPort(&stru_A8BB1C, v46[0]); /*0x541cc2*/
                                qword_A8DBA4 = *(NetworkID *)&v47[0].Network_field_0x0; /*0x541cd3*/
                                dword_A8DBAC = v47[0].Network_field_0x8; /*0x541ce8*/
                                Network::SetPort((Network *)&qword_A8DBA4, v46[0]); /*0x541cee*/
                                dword_A8DBBC = v46[0]; /*0x541cf8*/
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
              v7 = &dword_A8E2B2; /*0x541943*/
              while ( !(unsigned __int8)NetworkID::Compare((bool *)(dword_A8DA78[v5] + 40), (int)v47) || *v7 != v46[0] ) /*0x54196b*/
              {
                ++v5; /*0x541976*/
                ++v7; /*0x541977*/
                if ( v5 >= dword_A8DA84 ) /*0x54197c*/
                {
                  v6 = dword_A8DA84 == 0; /*0x54197e*/
                  goto LABEL_14; /*0x54197e*/
                }
              }
            }
          }
          goto LABEL_87; /*0x54196b*/
        }
        ++*((_DWORD *)this + 41); /*0x54216c*/
        goto LABEL_91; /*0x542178*/
      }
      v24 = (_WORD *)*((_DWORD *)this + 19); /*0x541d04*/
      if ( *(_WORD *)&v47[0].__pad_87[45] == v24[18] ) /*0x541d0b*/
      {
        if ( !byte_A8DBA0 /*0x541d2c*/
          || (*(int (__thiscall **)(_WORD *, char *, void *, Network *, _DWORD))(*(_DWORD *)v24 + 48))(
               v24,
               &v47[0].__pad_87[45],
               Network_field_0xC,
               v47,
               0) )
        {
          goto LABEL_87; /*0x541d31*/
        }
        ++*((_DWORD *)this + 41); /*0x542183*/
LABEL_91:
        Debug::Log(); /*0x54218f*/
        goto LABEL_92; /*0x54218f*/
      }
      if ( *(_WORD *)&v47[0].__pad_87[45] != this->Initialized /*0x541d63*/
        || Network_Recv(
             (int)&v47[0].__pad_87[45],
             (int)&v47[0].__pad_87[45],
             (int)Network_field_0xC,
             (int)v47[0].__pad_34,
             v46[0]) )
      {
        goto LABEL_87; /*0x541d6a*/
      }
      v25 = v47[0].__pad_87[47]; /*0x541d75*/
      if ( byte_A8DBA0 && v47[0].__pad_87[48] == -1 ) /*0x541d87*/
      {
        if ( v47[0].__pad_87[47] == 2 ) /*0x541d90*/
        {
          (*(void (__thiscall **)(_DWORD, char *, void *))(**((_DWORD **)this + 20) + 12))( /*0x541da0*/
            this->Active,
            &v47[0].__pad_87[45],
            Network_field_0xC);
        }
        else if ( *((int *)this + 17) > 0 ) /*0x541dad*/
        {
          Network::FormatAddress(v47, 0); /*0x541e46*/
          Debug::Log(); /*0x541e59*/
          if ( !(*(int (__thiscall **)(_DWORD, char *, void *))(**((_DWORD **)this + 10) + 12))( /*0x541e6f*/
                  *((_DWORD *)this + 10),
                  &v47[0].__pad_87[45],
                  Network_field_0xC) )
          {
            Network_field_0xC = 0; /*0x541e80*/
            ++*((_DWORD *)this + 41); /*0x541e85*/
            goto LABEL_74; /*0x541e91*/
          }
        }
        goto LABEL_75; /*0x541da3*/
      }
      v26 = 0; /*0x541e99*/
      if ( *((int *)this + 17) <= 0 ) /*0x541e9d*/
      {
LABEL_60:
        if ( *(_DWORD *)&dword_A8B238 == 4 /*0x541f4a*/
          && !dword_A8E7AC
          && *(int *)&stru_A8EB00.?[416] > 8
          && !byte_A8DBA0
          && (unsigned int)Network_field_0xC > 0xF
          && v25 == 1
          && v47[0].__pad_87[59] == 25 )
        {
          v29 = 1; /*0x541f56*/
          v30 = v47[0].__pad_87[61]; /*0x541f5b*/
          if ( dword_A8DA84 > 1 ) /*0x541f65*/
          {
            v31 = dword_A8DA78 + 1; /*0x541f71*/
            while ( *(_DWORD *)(*v31 + 111) != v47[0].__pad_87[61] ) /*0x541f79*/
            {
              ++v29; /*0x541f7f*/
              ++v31; /*0x541f80*/
              if ( v29 >= dword_A8DA84 ) /*0x541f85*/
                goto LABEL_86; /*0x541f85*/
            }
            v35 = (int *)(dword_A8DA78[v29] + 40); /*0x542113*/
            v44 = v47[0].__pad_87[61]; /*0x542116*/
            *v35 = v47[0].Network_field_0x0; /*0x542117*/
            v35[1] = (int)v47[0].Network_field_0x4; /*0x54211d*/
            v35[2] = (int)v47[0].Network_field_0x8; /*0x542124*/
            if ( (*(int (__thiscall **)(IPXManagerClass *, int))(this->Socket + 24))(this, v44) != -1 ) /*0x542131*/
            {
              v36 = (int *)(*((_DWORD *)this /*0x542143*/
                            + (*(int (__thiscall **)(IPXManagerClass *, int))(this->Socket + 24))(this, v30)
                            + 10)
                          + 76);
              *v36 = v47[0].Network_field_0x0; /*0x542146*/
              v36[1] = (int)v47[0].Network_field_0x4; /*0x54214c*/
              v36[2] = (int)v47[0].Network_field_0x8; /*0x542153*/
            }
LABEL_86:
            Network_field_0xC = v47[0].Network_field_0xC; /*0x542156*/
          }
        }
        goto LABEL_87; /*0x542156*/
      }
      v27 = this + 5; /*0x541e9f*/
      while ( byte_A8DBA0 ) /*0x541ea9*/
      {
        LinkedIndex = Factory::GetLinkedIndex((Factory *)&stru_B052C0.__pad_0[16], *(_DWORD *)(v27->Socket + 100)); /*0x541eb6*/
        v25 = v47[0].__pad_87[47]; /*0x541ebb*/
        if ( LinkedIndex == v47[0].__pad_87[48] ) /*0x541ec4*/
          goto LABEL_72; /*0x541ec4*/
        if ( !byte_A8DBA0 ) /*0x541ed1*/
          break; /*0x541ed1*/
LABEL_59:
        ++v26; /*0x541ef1*/
        v27 = (IPXManagerClass *)((char *)v27 + 4); /*0x541ef5*/
        if ( v26 >= *((_DWORD *)this + 17) ) /*0x541efa*/
          goto LABEL_60; /*0x541efa*/
      }
      if ( !(unsigned __int8)GUID::Compare((char *)(v27->Socket + 76), (int)v47) ) /*0x541edd*/
        break; /*0x541edd*/
LABEL_72:
      if ( !(*(int (__thiscall **)(_DWORD, char *, void *))(**((_DWORD **)this + v26 + 10) + 12))( /*0x541f9b*/
              *((_DWORD *)this + v26 + 10),
              &v47[0].__pad_87[45],
              Network_field_0xC) )
      {
        Network_field_0xC = 0; /*0x541fa8*/
        ++*((_DWORD *)this + 41); /*0x541fad*/
LABEL_74:
        Debug::Log(); /*0x541fb9*/
      }
LABEL_75:
      if ( *(_DWORD *)&dword_A8B238 == 4 ) /*0x541fc8*/
      {
        if ( byte_A8DBA0 ) /*0x541fd5*/
        {
          if ( Network::processPacket((char *)v47, this->Active + 76) ) /*0x541fe6*/
          {
            for ( i = 1; i < dword_A8DA84; ++i ) /*0x541fff*/
            {
              if ( (unsigned __int8)NetworkID::Compare((bool *)(dword_A8DA78[i] + 40), this->Active + 76) /*0x54203e*/
                && SessionClass::IsValidHouse(
                     (int)&dword_A8B238,
                     *((#375 **)stru_A80220.? + *(_DWORD *)(dword_A8DA78[i] + 111))) )
              {
                Network::FormatAddress(v47, 0); /*0x542051*/
                Network::FormatAddress((Network *)(this->Active + 76), 0); /*0x54205f*/
                Debug::Log(); /*0x542071*/
                v33 = (int *)(dword_A8DA78[i] + 40); /*0x542085*/
                *v33 = v47[0].Network_field_0x0; /*0x542088*/
                v33[1] = (int)v47[0].Network_field_0x4; /*0x54208e*/
                v33[2] = (int)v47[0].Network_field_0x8; /*0x542095*/
                v34 = (int *)(this->Active + 76); /*0x54209f*/
                *v34 = v47[0].Network_field_0x0; /*0x5420a2*/
                v34[1] = (int)v47[0].Network_field_0x4; /*0x5420a8*/
                v34[2] = (int)v47[0].Network_field_0x8; /*0x5420af*/
                stru_A8BB1C.Network_field_0x0 = v47[0].Network_field_0x0; /*0x5420be*/
                qword_A8DBA4 = *(NetworkID *)&v47[0].Network_field_0x0; /*0x5420c3*/
                stru_A8BB1C.Network_field_0x4 = v47[0].Network_field_0x4; /*0x5420cd*/
                stru_A8BB1C.Network_field_0x8 = v47[0].Network_field_0x8; /*0x5420d3*/
                dword_A8DBAC = v47[0].Network_field_0x8; /*0x5420df*/
                NetworkManager::SetPlayerAddress( /*0x5420f6*/
                  (NetworkManager *)&stru_B052C0.__pad_0[16],
                  *(_DWORD *)(dword_A8DA78[i] + 111),
                  v47);
              }
            }
          }
        }
      }
LABEL_87:
      if ( !Network_field_0xC ) /*0x54215c*/
        goto LABEL_92; /*0x54215c*/
    }
    v25 = v47[0].__pad_87[47]; /*0x541eea*/
    goto LABEL_59; /*0x541eea*/
  }
LABEL_92:
  v37 = *((_DWORD *)this + 18); /*0x542197*/
  v38 = 0; /*0x54219a*/
  if ( v37 && *(_DWORD *)&stru_887598.isAliveFlag && !(*(int (__thiscall **)(int))(*(_DWORD *)v37 + 20))(v37) ) /*0x5421aa*/
  {
    (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 18) + 24))(*((_DWORD *)this + 18)); /*0x5421b6*/
    v47[0].Network_field_0x10 = 0; /*0x5421b9*/
  }
  if ( byte_A8DBA0 ) /*0x5421c4*/
  {
    v39 = *((_DWORD *)this + 19); /*0x5421c6*/
    if ( v39 ) /*0x5421cb*/
    {
      if ( !(*(int (__thiscall **)(int))(*(_DWORD *)v39 + 20))(v39) ) /*0x5421cf*/
      {
        (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 19) + 24))(*((_DWORD *)this + 19)); /*0x5421db*/
        v47[0].Network_field_0x10 = 0; /*0x5421de*/
      }
      if ( !byte_A8E2D0 ) /*0x5421e9*/
        Network::ProcessAddressChange(v45); /*0x5421f0*/
    }
    if ( byte_A8DBA0 ) /*0x5421fc*/
    {
      v40 = this->Active; /*0x5421fe*/
      if ( v40 ) /*0x542203*/
      {
        if ( !(*(int (__thiscall **)(int))(*(_DWORD *)v40 + 20))(v40) ) /*0x542207*/
        {
          Debug::Log(); /*0x542213*/
          v47[0].Network_field_0x10 = 0; /*0x54221b*/
        }
      }
    }
  }
  if ( *(_DWORD *)&stru_887598.isAliveFlag && *((int *)this + 17) > 0 ) /*0x54222a*/
  {
    v41 = this + 5; /*0x54222c*/
    do /*0x542260*/
    {
      if ( !(*(int (__thiscall **)(int))(*(_DWORD *)v41->Socket + 20))(v41->Socket) ) /*0x542233*/
      {
        v47[0].Network_field_0x10 = 0; /*0x54223a*/
        *((_DWORD *)this + 42) = *(_DWORD *)(v41->Socket + 100); /*0x542249*/
        Debug::Log(); /*0x54224f*/
      }
      ++v38; /*0x54225a*/
      v41 = (IPXManagerClass *)((char *)v41 + 4); /*0x54225b*/
    }
    while ( v38 < *((_DWORD *)this + 17) ); /*0x542260*/
  }
  result = (int)v47[0].Network_field_0x10; /*0x542262*/
  if ( v47[0].Network_field_0x10 ) /*0x542268*/
    *((_DWORD *)this + 42) = -1; /*0x54226a*/
  return result; /*0x542274*/
}



// ==== 0x00542280  EventClass::deserializeEvent  this=EventClass  sig=csp ====
int __thiscall EventClass::deserializeEvent(EventClass *this, int a2, _DWORD *a3)
{
  int result; // eax
  _DWORD *v5; // edx

  result = (*(int (__thiscall **)(EventClass *, int))(this->EventClass_field_0x0 + 24))(this, a2); /*0x54228c*/
  if ( result != -1 && result < (int)this->EventClass_field_0x44 ) /*0x542297*/
  {
    v5 = (_DWORD *)(*((_DWORD *)&this->EventClass_field_0x28 + result) + 76); /*0x5422a1*/
    *v5 = *a3; /*0x5422a6*/
    v5[1] = a3[1]; /*0x5422ab*/
    result = a3[2]; /*0x5422ae*/
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
int __thiscall Network::GetQueueCount(IPXManagerClass *this)
{
  if ( this->Initialized && this->Active ) /*0x5422d7*/
    return *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 18) + 4) + 40); /*0x5422e4*/
  else
    return 0; /*0x5422e8*/
}



// ==== 0x005422F0  IPXManagerClass::GetSpeed  this=IPXManagerClass  sig=csp ====
int __thiscall Connection::GetSpeed(IPXManagerClass *this)
{
  if ( this->Initialized && this->Active ) /*0x5422f7*/
    return *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 18) + 4) + 56); /*0x542304*/
  else
    return 0; /*0x542308*/
}



// ==== 0x00542310  IPXManagerClass::GetUpgradeValue  this=IPXManagerClass  sig=csp ====
int __thiscall HouseClass::GetUpgradeValue(IPXManagerClass *this)
{
  int v1; // ecx

  if ( this->Initialized && this->Active && (v1 = *((_DWORD *)this + 19)) != 0 ) /*0x542323*/
    return *(_DWORD *)(*(_DWORD *)(v1 + 4) + 40); /*0x542328*/
  else
    return 0; /*0x54232c*/
}



// ==== 0x00542330  IPXManagerClass::GetConnectionCount  this=IPXManagerClass  sig=csp ====
int __thiscall IPXManagerClass::GetConnectionCount(IPXManagerClass *this)
{
  int v1; // ecx

  if ( this->Initialized && this->Active && (v1 = *((_DWORD *)this + 19)) != 0 ) /*0x542343*/
    return *(_DWORD *)(*(_DWORD *)(v1 + 4) + 56); /*0x542348*/
  else
    return 0; /*0x54234c*/
}



// ==== 0x00542350  IPXManagerClass::GetAddress  this=IPXManagerClass  sig=csp ====
int __thiscall IPXManagerClass::GetAddress(IPXManagerClass *this, int a2)
{
  int v3; // ecx
  int v4; // eax
  int result; // eax
  IPXManagerClass *v6; // edx
  int v7; // esi

  if ( !this->Initialized ) /*0x542353*/
    return 0; /*0x542353*/
  if ( !this->Active ) /*0x54235a*/
    return 0; /*0x54235a*/
  v3 = *((_DWORD *)this + 17); /*0x542361*/
  if ( !v3 ) /*0x542366*/
    return 0; /*0x5423af*/
  if ( a2 != -1 ) /*0x54236f*/
  {
    v4 = (*(int (__thiscall **)(IPXManagerClass *, int))(this->Socket + 24))(this, a2); /*0x542376*/
    if ( v4 != -1 ) /*0x54237c*/
      return *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + v4 + 10) + 4) + 40); /*0x542389*/
    return 0; /*0x54237c*/
  }
  result = 0; /*0x54238c*/
  if ( v3 > 0 ) /*0x542390*/
  {
    v6 = this + 5; /*0x542392*/
    v7 = *((_DWORD *)this + 17); /*0x542395*/
    do /*0x5423a9*/
    {
      if ( *(_DWORD *)(*(_DWORD *)(v6->Socket + 4) + 40) > result ) /*0x5423a1*/
        result = *(_DWORD *)(*(_DWORD *)(v6->Socket + 4) + 40); /*0x5423a3*/
      v6 = (IPXManagerClass *)((char *)v6 + 4); /*0x5423a5*/
      --v7; /*0x5423a8*/
    }
    while ( v7 ); /*0x5423a9*/
  }
  return result; /*0x542382*/
}



// ==== 0x005423C0  IPXManagerClass::SetAddress  this=IPXManagerClass  sig=csp ====
int __thiscall IPXManagerClass::SetAddress(IPXManagerClass *this, int a2)
{
  int v3; // ecx
  int v4; // eax
  int result; // eax
  IPXManagerClass *v6; // edx
  int v7; // esi

  if ( !this->Initialized ) /*0x5423c3*/
    return 0; /*0x5423c3*/
  if ( !this->Active ) /*0x5423ca*/
    return 0; /*0x5423ca*/
  v3 = *((_DWORD *)this + 17); /*0x5423d1*/
  if ( !v3 ) /*0x5423d6*/
    return 0; /*0x54241f*/
  if ( a2 != -1 ) /*0x5423df*/
  {
    v4 = (*(int (__thiscall **)(IPXManagerClass *, int))(this->Socket + 24))(this, a2); /*0x5423e6*/
    if ( v4 != -1 ) /*0x5423ec*/
      return *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + v4 + 10) + 4) + 56); /*0x5423f9*/
    return 0; /*0x5423ec*/
  }
  result = 0; /*0x5423fc*/
  if ( v3 > 0 ) /*0x542400*/
  {
    v6 = this + 5; /*0x542402*/
    v7 = *((_DWORD *)this + 17); /*0x542405*/
    do /*0x542419*/
    {
      if ( *(_DWORD *)(*(_DWORD *)(v6->Socket + 4) + 56) > result ) /*0x542411*/
        result = *(_DWORD *)(*(_DWORD *)(v6->Socket + 4) + 56); /*0x542413*/
      v6 = (IPXManagerClass *)((char *)v6 + 4); /*0x542415*/
      --v7; /*0x542418*/
    }
    while ( v7 ); /*0x542419*/
  }
  return result; /*0x5423f2*/
}



// ==== 0x00542430  Network::GetField  this=Network  sig=csp ====
int __thiscall Network::GetField(Network *this, __int16 a2)
{
  int result; // eax
  __int16 v3; // dx

  LOWORD(result) = a2; /*0x542430*/
  LOBYTE(v3) = HIBYTE(a2); /*0x542437*/
  HIBYTE(v3) = a2; /*0x542439*/
  *(_WORD *)this->Network_field_0x22 = v3; /*0x54243b*/
  return result; /*0x54243f*/
}



// ==== 0x00542450  IPXManagerClass::GetQueueSize  this=IPXManagerClass  sig=csp ====
unsigned int __thiscall IPXManagerClass::GetQueueSize(IPXManagerClass *this)
{
  unsigned int v2; // ebp
  int v3; // edi
  IPXManagerClass *v4; // ebx
  unsigned int BridgeIndex; // eax
  int v6; // esi
  unsigned int result; // eax

  v2 = 0; /*0x542455*/
  v3 = 0; /*0x542457*/
  if ( *((int *)this + 17) > 0 ) /*0x54245e*/
  {
    v4 = this + 5; /*0x542461*/
    do /*0x54247d*/
    {
      BridgeIndex = CellClass::GetBridgeIndex(*(CellClass **)(v4->Socket + 4)); /*0x542469*/
      if ( BridgeIndex > v2 ) /*0x542470*/
        v2 = BridgeIndex; /*0x542472*/
      ++v3; /*0x542477*/
      v4 = (IPXManagerClass *)((char *)v4 + 4); /*0x542478*/
    }
    while ( v3 < *((_DWORD *)this + 17) ); /*0x54247d*/
  }
  v6 = this->Active; /*0x542480*/
  if ( !v6 ) /*0x542485*/
    return v2; /*0x542485*/
  result = CellClass::GetBridgeIndex(*(CellClass **)(v6 + 4)); /*0x54248a*/
  if ( result <= v2 ) /*0x542491*/
    return v2; /*0x542493*/
  return result; /*0x542495*/
}



// ==== 0x005424A0  IPXManagerClass::CheckStatus  this=IPXManagerClass  sig=csp ====
int __thiscall IPXManagerClass::CheckStatus(IPXManagerClass *this, int a2)
{
  return CellClass::GetBridgeIndex(*(CellClass **)(*((_DWORD *)this + a2 + 10) + 4)); /*0x5424b0*/
}



// ==== 0x005424C0  Network::GetLobbyStatus  this=Network  sig=csp ====
int __thiscall Network::GetLobbyStatus(Network *this)
{
  int Network_field_0x48; // eax

  Network_field_0x48 = this->Network_field_0x48; /*0x5424c0*/
  if ( Network_field_0x48 ) /*0x5424c5*/
    return CellClass::GetBridgeIndex(*(CellClass **)(Network_field_0x48 + 4)); /*0x5424ca*/
  else
    return 0; /*0x5424cf*/
}



// ==== 0x00542500  Network::updateLatency  this=Network  sig=csp ====
int __thiscall Network::updateLatency(Network *this)
{
  CellClass **Network_field_0x50; // eax

  Network_field_0x50 = (CellClass **)this->Network_field_0x50; /*0x542500*/
  if ( Network_field_0x50 ) /*0x542505*/
    return CellClass::GetBridgeIndex(Network_field_0x50[1]); /*0x54250a*/
  else
    return 0; /*0x54250f*/
}



// ==== 0x00542520  IPXManagerClass::ProcessQueue  this=IPXManagerClass  sig=csp ====
int __thiscall IPXManagerClass::ProcessQueue(IPXManagerClass *this)
{
  int v2; // ebx
  int result; // eax
  IPXManagerClass *v4; // edi
  int *v5; // esi
  Object *v6; // ecx
  int *v7; // eax
  int v8; // ecx
  int v9; // eax
  unsigned int v10; // kr00_4
  signed int v11; // eax

  v2 = 0; /*0x542524*/
  result = *((_DWORD *)this + 17); /*0x542526*/
  if ( result > 0 ) /*0x54252b*/
  {
    v4 = this + 5; /*0x542533*/
    v5 = (int *)&unk_A8B5B4; /*0x542536*/
    do /*0x54260c*/
    {
      v6 = (Object *)*((_DWORD *)stru_A80220.? + *(_DWORD *)(v4->Socket + 100)); /*0x542546*/
      if ( v6 && v6 != dword_A83D4C ) /*0x542557*/
      {
        if ( !*((_BYTE *)v5 - 64) ) /*0x54255d*/
        {
          CopyWideToChar((_BYTE *)v5 - 64, (char *)(v4->Socket + 104), -1); /*0x54256c*/
          v7 = (int *)(v4->Socket + 76); /*0x542576*/
          v5[7] = *v7; /*0x54257b*/
          v5[8] = v7[1]; /*0x542580*/
          v5[9] = v7[2]; /*0x542586*/
        }
        v8 = 1000 * IPXManagerClass::init(*(IPXManagerClass **)(v4->Socket + 4)); /*0x5425a1*/
        v9 = *v5; /*0x5425b2*/
        if ( *v5 <= v8 / 60 ) /*0x5425b6*/
          v9 = v8 / 60; /*0x5425b8*/
        *v5 = v9; /*0x5425ba*/
        v10 = 1000 * CellClass::GetBridgeIndex(*(CellClass **)(v4->Socket + 4)); /*0x5425c6*/
        v11 = v5[4]; /*0x5425d9*/
        if ( (int)(v10 / 0x3C) > v11 ) /*0x5425e1*/
          v11 = v10 / 0x3C; /*0x5425e3*/
        v5[4] = v11; /*0x5425e5*/
        v5[1] = *(_DWORD *)(v4->Socket + 8); /*0x5425ed*/
        v5[2] = *(_DWORD *)(v4->Socket + 12); /*0x5425f5*/
        v5[3] = *(_DWORD *)(v4->Socket + 16); /*0x5425fd*/
      }
      result = *((_DWORD *)this + 17); /*0x542600*/
      ++v2; /*0x542603*/
      v4 = (IPXManagerClass *)((char *)v4 + 4); /*0x542604*/
      v5 += 26; /*0x542607*/
    }
    while ( v2 < result ); /*0x54260c*/
  }
  return result; /*0x542614*/
}



// ==== 0x00542620  ScoreBoard::Render  this=ScoreBoard  sig=csp ====
int __thiscall ScoreBoard_Render(char *this)
{
  char *v1; // edi
  int v2; // esi
  int v3; // eax
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
  _DWORD *v15; // ebx
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
  const wchar_t *v28; // ecx
  bool v29; // cc
  _DWORD *v30; // eax
  _DWORD *v31; // eax
  _DWORD *v32; // eax
  _DWORD *v33; // eax
  _DWORD *v34; // eax
  int v35; // [esp+14h] [ebp-53Ch]
  int v36; // [esp+14h] [ebp-53Ch]
  int v37; // [esp+14h] [ebp-53Ch]
  int v38; // [esp+18h] [ebp-538h]
  int v39; // [esp+18h] [ebp-538h]
  int v40; // [esp+18h] [ebp-538h]
  int v41; // [esp+18h] [ebp-538h]
  int v42; // [esp+18h] [ebp-538h]
  int v43; // [esp+18h] [ebp-538h]
  int v44; // [esp+18h] [ebp-538h]
  int v45; // [esp+18h] [ebp-538h]
  int v46; // [esp+18h] [ebp-538h]
  int v47; // [esp+1Ch] [ebp-534h]
  int v48; // [esp+1Ch] [ebp-534h]
  int v49; // [esp+1Ch] [ebp-534h]
  int v50; // [esp+1Ch] [ebp-534h]
  int v51; // [esp+1Ch] [ebp-534h]
  int v52; // [esp+1Ch] [ebp-534h]
  int v53; // [esp+1Ch] [ebp-534h]
  int v54; // [esp+1Ch] [ebp-534h]
  int v55; // [esp+20h] [ebp-530h]
  int v56; // [esp+20h] [ebp-530h]
  int v57; // [esp+20h] [ebp-530h]
  int v58; // [esp+20h] [ebp-530h]
  int v59; // [esp+20h] [ebp-530h]
  int v60; // [esp+20h] [ebp-530h]
  int v61; // [esp+20h] [ebp-530h]
  int v62; // [esp+20h] [ebp-530h]
  int v63; // [esp+20h] [ebp-530h]
  int v64; // [esp+24h] [ebp-52Ch]
  int v65; // [esp+24h] [ebp-52Ch]
  int v66; // [esp+24h] [ebp-52Ch]
  int v67; // [esp+24h] [ebp-52Ch]
  int v68; // [esp+24h] [ebp-52Ch]
  int v69; // [esp+24h] [ebp-52Ch]
  int v70; // [esp+24h] [ebp-52Ch]
  int v71; // [esp+24h] [ebp-52Ch]
  int v72; // [esp+24h] [ebp-52Ch]
  int v73; // [esp+24h] [ebp-52Ch]
  int v74; // [esp+28h] [ebp-528h]
  int v75; // [esp+28h] [ebp-528h]
  int v76; // [esp+28h] [ebp-528h]
  int v77; // [esp+28h] [ebp-528h]
  int v78; // [esp+28h] [ebp-528h]
  int v79; // [esp+28h] [ebp-528h]
  int v80; // [esp+28h] [ebp-528h]
  int v81; // [esp+2Ch] [ebp-524h]
  int v82; // [esp+2Ch] [ebp-524h]
  int v83; // [esp+2Ch] [ebp-524h]
  int v84; // [esp+2Ch] [ebp-524h]
  int v85; // [esp+30h] [ebp-520h]
  int v86; // [esp+30h] [ebp-520h]
  int v87; // [esp+34h] [ebp-51Ch] BYREF
  int v88; // [esp+38h] [ebp-518h] BYREF
  int v89; // [esp+3Ch] [ebp-514h] BYREF
  int v90; // [esp+40h] [ebp-510h] BYREF
  int *v91; // [esp+44h] [ebp-50Ch] BYREF
  int v92; // [esp+48h] [ebp-508h]
  int v93; // [esp+4Ch] [ebp-504h]
  int v94; // [esp+50h] [ebp-500h]
  char *v95; // [esp+54h] [ebp-4FCh]
  const wchar_t *v96; // [esp+58h] [ebp-4F8h]
  int v97; // [esp+5Ch] [ebp-4F4h]
  _DWORD v98[3]; // [esp+68h] [ebp-4E8h] BYREF
  _DWORD v99[2]; // [esp+74h] [ebp-4DCh] BYREF
  _DWORD v100[2]; // [esp+7Ch] [ebp-4D4h] BYREF
  int v101; // [esp+84h] [ebp-4CCh] BYREF
  int v102; // [esp+88h] [ebp-4C8h] BYREF
  _DWORD v103[2]; // [esp+8Ch] [ebp-4C4h] BYREF
  _DWORD v104[3]; // [esp+94h] [ebp-4BCh] BYREF
  int v105; // [esp+A0h] [ebp-4B0h] BYREF
  int v106; // [esp+A4h] [ebp-4ACh]
  int v107; // [esp+B0h] [ebp-4A0h] BYREF
  char v108[4]; // [esp+B4h] [ebp-49Ch] BYREF
  _DWORD v109[5]; // [esp+B8h] [ebp-498h] BYREF
  int v110; // [esp+CCh] [ebp-484h] BYREF
  int v111[3]; // [esp+D4h] [ebp-47Ch] BYREF
  int v112; // [esp+E0h] [ebp-470h] BYREF
  int v113[2]; // [esp+E4h] [ebp-46Ch] BYREF
  int v114[3]; // [esp+ECh] [ebp-464h] BYREF
  int v115[2]; // [esp+F8h] [ebp-458h] BYREF
  int v116[6]; // [esp+100h] [ebp-450h] BYREF
  int v117; // [esp+118h] [ebp-438h] BYREF
  char v118[4]; // [esp+120h] [ebp-430h] BYREF
  char v119[24]; // [esp+124h] [ebp-42Ch] BYREF
  char v120[20]; // [esp+13Ch] [ebp-414h] BYREF
  char v121[8]; // [esp+150h] [ebp-400h] BYREF
  char v122[16]; // [esp+158h] [ebp-3F8h] BYREF
  char v123[12]; // [esp+168h] [ebp-3E8h] BYREF
  char v124[12]; // [esp+174h] [ebp-3DCh] BYREF
  char v125[16]; // [esp+180h] [ebp-3D0h] BYREF
  char v126[20]; // [esp+190h] [ebp-3C0h] BYREF
  char v127[24]; // [esp+1A4h] [ebp-3ACh] BYREF
  char v128[4]; // [esp+1BCh] [ebp-394h] BYREF
  wchar_t Buffer; // [esp+1C0h] [ebp-390h] BYREF
  wchar_t v130; // [esp+1C4h] [ebp-38Ch] BYREF
  wchar_t v131; // [esp+1C8h] [ebp-388h] BYREF
  wchar_t v132; // [esp+1CCh] [ebp-384h] BYREF
  wchar_t v133; // [esp+1D0h] [ebp-380h] BYREF
  wchar_t v134[246]; // [esp+1D4h] [ebp-37Ch] BYREF
  wchar_t v135[10]; // [esp+3C0h] [ebp-190h] BYREF
  char v136[380]; // [esp+3D4h] [ebp-17Ch] BYREF

  v1 = this; /*0x54262a*/
  v2 = DSurface_Composite; /*0x54262c*/
  v95 = this; /*0x542632*/
  swprintf(&Buffer, (const size_t)&off_8288A0, (const wchar_t *const)(1000 * *((_DWORD *)this + 22) / 0x3Cu)); /*0x54265d*/
  v87 = 0; /*0x542674*/
  v88 = 402; /*0x542678*/
  v3 = FindBuildingAnimByName(aGrey, 1); /*0x542680*/
  v4 = (_DWORD *)(*(int (__thiscall **)(int, int *, int *, int))(*(_DWORD *)v2 + 120))(v2, &v107, &v87, v3); /*0x542697*/
  TextRenderer::DrawText((int *)&v91, (size_t)&v131, v2, v4, 0, 25, v64, v74); /*0x5426a9*/
  swprintf(&v131, (const size_t)&off_82887C, (const wchar_t *const)(1000 * *((_DWORD *)v1 + 24) / 0x3Cu)); /*0x5426d5*/
  v89 = 0; /*0x5426e7*/
  v90 = 412; /*0x5426ee*/
  v5 = FindBuildingAnimByName(aGrey, 1); /*0x5426f6*/
  v6 = (_DWORD *)(*(int (__thiscall **)(int, _DWORD *, int *, int, _DWORD, int))(*(_DWORD *)v2 + 120))( /*0x54270d*/
                   v2,
                   v109,
                   &v89,
                   v5,
                   0,
                   25);
  TextRenderer::DrawText(&v90, (size_t)&v130, v2, v6, v38, v47, v55, v65); /*0x54271f*/
  swprintf(&v130, (const size_t)&off_82885C, dword_A8DB9C); /*0x542737*/
  v88 = 0; /*0x542749*/
  v89 = 422; /*0x542750*/
  v7 = FindBuildingAnimByName(aGrey, 1); /*0x542758*/
  v8 = (_DWORD *)(*(int (__thiscall **)(int, char *, int *, int, _DWORD, int))(*(_DWORD *)v2 + 120))( /*0x54276f*/
                   v2,
                   v108,
                   &v88,
                   v7,
                   0,
                   25);
  TextRenderer::DrawText(&v89, (size_t)&Buffer, v2, v8, v35, v39, v48, v56); /*0x542781*/
  if ( (int)(Timer::GetTicks() - dword_AC6648) / 60 ) /*0x5427ad*/
  {
    v9 = Timer::GetTicks() - dword_AC6648; /*0x5427c6*/
    swprintf(&Buffer, (const size_t)aFspsD, (const wchar_t *const)(dword_B0487C / (v9 / 60))); /*0x5427f3*/
    v87 = 0; /*0x542805*/
    v88 = 432; /*0x54280c*/
    v40 = FindBuildingAnimByName(aGrey, 1); /*0x54281b*/
    v10 = (_DWORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v2 + 120))(v2, &v107); /*0x54282b*/
    TextRenderer::DrawText(&v89, (size_t)&Buffer, v2, v10, (int)&v87, v40, 0, 25); /*0x54283d*/
    if ( ((unsigned __int8)dword_A8ED84 & 0x7F) == 0x7F ) /*0x54284f*/
    {
      dword_AC6648 = Timer::GetTicks(); /*0x54285e*/
      dword_AC664C = v90; /*0x542863*/
      dword_B0487C = 0; /*0x542869*/
    }
  }
  if ( dword_A8B238[0] == 4 && byte_A8DBA0 ) /*0x542883*/
  {
    if ( dword_A8EA10 ) /*0x542890*/
      BridgeIndex = CellClass::GetBridgeIndex(*(_DWORD **)(dword_A8EA10 + 4)); /*0x542895*/
    else
      BridgeIndex = 0; /*0x54289c*/
    swprintf(&Buffer, (const size_t)&off_828830, (const wchar_t *const)(1000 * BridgeIndex / 0x3Cu)); /*0x5428c2*/
    v87 = 0; /*0x5428d4*/
    v88 = 442; /*0x5428db*/
    v41 = FindBuildingAnimByName(aGrey, 1); /*0x5428ea*/
    v12 = (_DWORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v2 + 120))(v2, &v107); /*0x5428fa*/
    TextRenderer::DrawText(&v89, (size_t)&Buffer, v2, v12, (int)&v87, v41, 0, 25); /*0x54290c*/
  }
  result = *((_DWORD *)v1 + 17); /*0x542914*/
  v94 = 0; /*0x542917*/
  if ( result > 0 )
  {
    v91 = &dword_AC5210; /*0x542928*/
    v14 = 100; /*0x542932*/
    v15 = v1 + 40; /*0x542937*/
    v87 = (char *)&dword_A8DB54 - v1; /*0x54293a*/
    do
    {
      v16 = *(_DWORD *)&dword_A8022C->AbstractClass[4 * *(_DWORD *)(*v15 + 100)]; /*0x542949*/
      if ( v16 && (#375 *)v16 != dword_A83D4C )
      {
        v17 = *(_DWORD *)(v16 + 90196); /*0x542960*/
        swprintf(v135, (const size_t)&off_8240B4, (const wchar_t *const)(*v15 + 104)); /*0x542977*/
        v105 = v14; /*0x542985*/
        v106 = 302; /*0x542989*/
        v18 = (_DWORD *)(*(int (__thiscall **)(int, char *, int *, _DWORD, _DWORD, int, int))(*(_DWORD *)v2 + 120))( /*0x5429b0*/
                          v2,
                          v125,
                          &v105,
                          *((_DWORD *)dword_B054D4 + v17),
                          0,
                          25,
                          v66);
        TextRenderer::DrawText(v113, (size_t)v136, v2, v18, v75, v81, v85, v87); /*0x5429c5*/
        v19 = CellClass::GetBridgeIndex(*(_DWORD **)(*v15 + 4)); /*0x5429d2*/
        swprintf(v134, (const size_t)&off_828814, (const wchar_t *const)(1000 * v19 / 60)); /*0x542a04*/
        v99[0] = v14; /*0x542a11*/
        v99[1] = 311; /*0x542a15*/
        v20 = *((_DWORD *)dword_B054D4 + v17); /*0x542a1d*/
        v21 = *(_DWORD *)v2; /*0x542a20*/
        v87 = 25; /*0x542a22*/
        v22 = (_DWORD *)(*(int (__thiscall **)(int, char *, _DWORD *, int, _DWORD))(v21 + 120))(v2, v119, v99, v20, 0); /*0x542a36*/
        TextRenderer::DrawText(&v117, (size_t)&v133, v2, v22, v67, v76, v82, v86); /*0x542a4b*/
        v23 = IPXManagerClass::init(*(_DWORD *)(*v15 + 4)); /*0x542a58*/
        swprintf(&v133, (const size_t)&off_8287F8, (const wchar_t *const)(1000 * v23 / 60)); /*0x542a8a*/
        v109[0] = v14; /*0x542a98*/
        v109[1] = 319; /*0x542a9f*/
        v85 = 25; /*0x542aaf*/
        v24 = (_DWORD *)(*(int (__thiscall **)(int, char *, _DWORD *, _DWORD, _DWORD))(*(_DWORD *)v2 + 120))( /*0x542ac6*/
                          v2,
                          v121,
                          v109,
                          *((_DWORD *)dword_B054D4 + v17),
                          0);
        TextRenderer::DrawText(&v110, (size_t)&v132, v2, v24, v57, v68, v77, v83); /*0x542adb*/
        swprintf(&v132, (const size_t)&off_8287DC, *(const wchar_t *const *)(*v15 + 8)); /*0x542af3*/
        v101 = v14; /*0x542b00*/
        v102 = 327; /*0x542b04*/
        v25 = (_DWORD *)(*(int (__thiscall **)(int, char *, int *, _DWORD, _DWORD, int))(*(_DWORD *)v2 + 120))( /*0x542b25*/
                          v2,
                          v128,
                          &v101,
                          *((_DWORD *)dword_B054D4 + v17),
                          0,
                          25);
        TextRenderer::DrawText(v115, (size_t)&v131, v2, v25, v49, v58, v69, v78); /*0x542b3a*/
        swprintf(&v131, (const size_t)&off_8287C0, *(int *)(*v15 + 12) < 0 ? 0 : *(const wchar_t *const *)(*v15 + 12));
        v105 = v14; /*0x542b6a*/
        v106 = 335; /*0x542b6e*/
        v26 = (_DWORD *)(*(int (__thiscall **)(int, char *, int *, _DWORD, _DWORD, int))(*(_DWORD *)v2 + 120))( /*0x542b92*/
                          v2,
                          v123,
                          &v105,
                          *((_DWORD *)dword_B054D4 + v17),
                          0,
                          25);
        TextRenderer::DrawText(v113, (size_t)&v130, v2, v26, v42, v50, v59, v70); /*0x542ba7*/
        swprintf(&v130, (const size_t)&off_8287A4, *(const wchar_t *const *)(*v15 + 16)); /*0x542bbf*/
        v103[0] = v14; /*0x542bcc*/
        v103[1] = 343; /*0x542bd0*/
        v27 = (_DWORD *)(*(int (__thiscall **)(int, char *, _DWORD *, _DWORD, _DWORD, int))(*(_DWORD *)v2 + 120))( /*0x542bf1*/
                          v2,
                          v127,
                          v103,
                          *((_DWORD *)dword_B054D4 + v17),
                          0,
                          25);
        TextRenderer::DrawText(v116, (size_t)&Buffer, v2, v27, v36, v43, v51, v60); /*0x542c06*/
        v28 = 0; /*0x542c10*/
        v96 = 0; /*0x542c17*/
        v93 = 0; /*0x542c1b*/
        if ( dword_A8DA84 > 0 ) /*0x542c1f*/
        {
          v97 = *(_DWORD *)(*v15 + 100); /*0x542c2c*/
          v92 = dword_A8DA78; /*0x542c30*/
          while ( v97 != *(_DWORD *)(*(_DWORD *)v92 + 111) ) /*0x542c41*/
          {
            v29 = ++v93 < dword_A8DA84; /*0x542c4f*/
            v92 += 4; /*0x542c55*/
            if ( !v29 ) /*0x542c59*/
            {
              swprintf(&Buffer, (const size_t)&off_828788, v96); /*0x542c5f*/
              goto LABEL_21; /*0x542c5f*/
            }
          }
          v28 = *(const wchar_t **)(*(_DWORD *)(dword_A8DA78 + 4 * v93) + 115); /*0x542c6d*/
        }
        swprintf(&Buffer, (const size_t)&off_828788, v28); /*0x542c7e*/
LABEL_21:
        v98[0] = v14; /*0x542c83*/
        v98[1] = 351; /*0x542c90*/
        v30 = (_DWORD *)(*(int (__thiscall **)(int, char *, _DWORD *, _DWORD, _DWORD))(*(_DWORD *)v2 + 120))( /*0x542cb1*/
                          v2,
                          v118,
                          v98,
                          *((_DWORD *)dword_B054D4 + v17),
                          0);
        TextRenderer::DrawText(v111, (size_t)&v132, v2, v30, 25, v71, v79, v84); /*0x542cc6*/
        swprintf(&v132, (const size_t)&off_82876C, (const wchar_t *const)-*(_DWORD *)((char *)v15 + v90)); /*0x542ce2*/
        v100[0] = v14; /*0x542cef*/
        v100[1] = 359; /*0x542cf3*/
        v81 = 25; /*0x542d00*/
        v31 = (_DWORD *)(*(int (__thiscall **)(int, char *, _DWORD *, _DWORD, _DWORD))(*(_DWORD *)v2 + 120))( /*0x542d14*/
                          v2,
                          v120,
                          v100,
                          *((_DWORD *)dword_B054D4 + v17),
                          0);
        TextRenderer::DrawText(&v112, (size_t)&v131, v2, v31, v52, v61, v72, v80); /*0x542d29*/
        swprintf( /*0x542d48*/
          &v131,
          (const size_t)&off_828748,
          *(const wchar_t *const *)(*(_DWORD *)(*v15 + 4) + 40),
          *(_DWORD *)(*(_DWORD *)(*v15 + 4) + 56));
        v102 = v14; /*0x542d56*/
        v103[0] = 367; /*0x542d5a*/
        v75 = 25; /*0x542d67*/
        v32 = (_DWORD *)(*(int (__thiscall **)(int, char *, int *, _DWORD, _DWORD))(*(_DWORD *)v2 + 120))( /*0x542d7b*/
                          v2,
                          v122,
                          &v102,
                          *((_DWORD *)dword_B054D4 + v17),
                          0);
        TextRenderer::DrawText(v114, (size_t)&v130, v2, v32, v44, v53, v62, v73); /*0x542d90*/
        swprintf(&v130, (const size_t)&off_828724, *(const wchar_t *const *)(*v15 + 20), *(_DWORD *)(*v15 + 24)); /*0x542dac*/
        v104[0] = v14; /*0x542dba*/
        v104[1] = 375; /*0x542dbe*/
        v66 = 25; /*0x542dc9*/
        v33 = (_DWORD *)(*(int (__thiscall **)(int, char *, _DWORD *, _DWORD, _DWORD))(*(_DWORD *)v2 + 120))( /*0x542ddf*/
                          v2,
                          v124,
                          v104,
                          *((_DWORD *)dword_B054D4 + v17),
                          0);
        TextRenderer::DrawText(v115, (size_t)&Buffer, v2, v33, v37, v45, v54, v63); /*0x542df4*/
        if ( dword_A8B238[0] == 4 ) /*0x542e04*/
        {
          if ( byte_A8DBA0 ) /*0x542e11*/
          {
            swprintf(&Buffer, (const size_t)&off_828708, (const wchar_t *const)(1000 * *v91 / 0x3Cu)); /*0x542e3d*/
            v89 = v14; /*0x542e4a*/
            v90 = 383; /*0x542e4e*/
            v46 = *((_DWORD *)dword_B054D4 + v17); /*0x542e5f*/
            v34 = (_DWORD *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)v2 + 120))(v2, v126); /*0x542e6f*/
            TextRenderer::DrawText(&v107, (size_t)&Buffer, v2, v34, (int)&v89, v46, 0, 25); /*0x542e84*/
          }
        }
        v1 = v95; /*0x542e8c*/
      }
      result = v94 + 1; /*0x542e9b*/
      v14 += 100; /*0x542e9c*/
      ++v15; /*0x542e9f*/
      v29 = ++v94 < *((_DWORD *)v1 + 17); /*0x542ea5*/
      ++v91; /*0x542eab*/
    }
    while ( v29 );
  }
  return result; /*0x542eb5*/
}



// ==== 0x00542EC0  IPXManagerClass::Flush  this=IPXManagerClass  sig=csp ====
int __thiscall IPXManagerClass::Flush(IPXManagerClass *this, char a2)
{
  int v3; // edi
  IPXManagerClass *v4; // ebx
  int v5; // eax
  int result; // eax
  int v7; // esi

  v3 = 0; /*0x542ec4*/
  if ( *((int *)this + 17) > 0 ) /*0x542ecb*/
  {
    v4 = this + 5; /*0x542ed3*/
    do /*0x542eea*/
    {
      Rect::SetRedraw(*(Rect **)(v4->Socket + 4), a2); /*0x542edc*/
      ++v3; /*0x542ee4*/
      v4 = (IPXManagerClass *)((char *)v4 + 4); /*0x542ee5*/
    }
    while ( v3 < *((_DWORD *)this + 17) ); /*0x542eea*/
  }
  v5 = *((_DWORD *)this + 18); /*0x542eee*/
  if ( v5 ) /*0x542ef3*/
    Rect::SetRedraw(*(Rect **)(v5 + 4), 1); /*0x542efa*/
  result = *((_DWORD *)this + 19); /*0x542eff*/
  if ( result ) /*0x542f04*/
    result = Rect::SetRedraw(*(Rect **)(result + 4), 1); /*0x542f0b*/
  v7 = this->Active; /*0x542f10*/
  if ( v7 ) /*0x542f15*/
    return Rect::SetRedraw(*(Rect **)(v7 + 4), 1); /*0x542f1c*/
  return result; /*0x542f21*/
}



// ==== 0x00542F30  ObjectClass::method_542F30  this=ObjectClass  sig=csp ====
int __thiscall sub_542F30(ObjectClass *this)
{
  unsigned int v1; // ebx
  int result; // eax
  int v3; // ebp
  int *i; // edi
  int v5; // esi
  int v6; // ecx
  int TileIndex; // eax
  int v8; // [esp+8h] [ebp-8h]

  v1 = -1; /*0x542f38*/
  result = 0; /*0x542f3b*/
  v3 = 0; /*0x542f3d*/
  v8 = 0; /*0x542f45*/
  if ( this->ambientSoundController[2] > 0 ) /*0x542f49*/
  {
    for ( i = &this->owningHouseIndex; ; ++i ) /*0x542f4d*/
    {
      v5 = 0; /*0x542f52*/
      v6 = *(_DWORD *)(*i + 4); /*0x542f54*/
      if ( *(int *)(v6 + 40) <= 0 ) /*0x542f5c*/
        goto LABEL_12; /*0x542f5c*/
      while ( 1 ) /*0x542f5f*/
      {
        TileIndex = Terrain::GetTileIndex((Terrain *)v6, v5); /*0x542f5f*/
        if ( TileIndex ) /*0x542f66*/
          break; /*0x542f66*/
LABEL_8:
        ++v5; /*0x542f79*/
        v6 = *(_DWORD *)(*i + 4); /*0x542f7c*/
        if ( v5 >= *(_DWORD *)(v6 + 40) ) /*0x542f82*/
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
      if ( ++v3 >= this->ambientSoundController[2] ) /*0x542fa3*/
        return v8; /*0x542fa5*/
    }
    TileIndex = 0; /*0x542f77*/
    goto LABEL_8; /*0x542f77*/
  }
  return result; /*0x542fab*/
}



// ==== 0x00542FC0  ObjectClass::Network_Init_542FC0  this=ObjectClass  sig=csp ====
int __thiscall Network_Init_542FC0(ObjectClass *this, int a2)
{
  ObjectClass *v2; // ecx
  int result; // eax

  v2 = (ObjectClass *)this->ambientSoundController[3]; /*0x542fc0*/
  if ( v2 ) /*0x542fc5*/
    return Network_Init_5402B0(v2, a2); /*0x542fcc*/
  return result; /*0x542fd1*/
}



// ==== 0x00542FE0  IPXManagerClass::Init  this=IPXManagerClass  sig=csp ====
int __thiscall IPXManagerClass::Init(IPXManagerClass *this, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int result; // eax

  if ( a2 == -1 ) /*0x542fe7*/
    return EventClass::SetData(*(EventClass **)(*((_DWORD *)this + 18) + 4), a3, a4, a5, a6, a7); /*0x543008*/
  result = *((_DWORD *)this + a2 + 10); /*0x543010*/
  if ( result ) /*0x543016*/
    return EventClass::SetData(*(EventClass **)(result + 4), a3, a4, a5, a6, a7); /*0x543034*/
  return result; /*0x54300d*/
}



// ==== 0x00543040  IPXManagerClass::StubReturnFalse  this=IPXManagerClass  sig=csp ====
void __stdcall IPXManagerClass::StubReturnFalse(IPXManagerClass *this, int a2)
{
  ; /*0x543040*/
}



// ==== 0x00543050  Network::SetPlayerCoords  this=Network  sig=csp ====
_DWORD *__thiscall Network::SetPlayerCoords(Network *this, _DWORD *a2)
{
  _DWORD *result; // eax

  result = this->Network_field_0x4C; /*0x543050*/
  if ( result ) /*0x543055*/
  {
    result += 19; /*0x54305b*/
    *result = *a2; /*0x543060*/
    result[1] = a2[1]; /*0x543065*/
    result[2] = a2[2]; /*0x54306b*/
  }
  return result; /*0x54306e*/
}



// ==== 0x00543080  Network::Disconnect  this=Network  sig=csp ====
int __thiscall Network::Disconnect(Network *this)
{
  int result; // eax

  result = this->Network_field_0x48; /*0x543080*/
  if ( result ) /*0x543085*/
    *(_BYTE *)(result + 200) = 0; /*0x543087*/
  return result; /*0x54308e*/
}



// ==== 0x00543090  Connection::Close  this=Connection  sig=csp ====
int __thiscall Connection::Close(Connection *this)
{
  int result; // eax

  result = (int)this->Connection_field_0x48; /*0x543090*/
  if ( result ) /*0x543095*/
    *(_BYTE *)(result + 200) = 1; /*0x543097*/
  return result; /*0x54309e*/
}



// ==== 0x005430C0  ObjectClass::StartGameWOL_Start  this=ObjectClass  sig=csp ====
int __thiscall StartGameWOL_Start(ObjectClass *this, int a2)
{
  int v2; // ecx
  int result; // eax

  v2 = this->ambientSoundController[3]; /*0x5430c0*/
  if ( v2 ) /*0x5430c5*/
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)v2 + 68))(v2, a2); /*0x5430ce*/
  return result; /*0x5430d1*/
}



// ==== 0x005430E0  IPXManagerClass::QueryInterface  this=IPXManagerClass  sig=csp ====
char *__thiscall IPXManagerClass::QueryInterface(IPXManagerClass *this, char a2)
{
  IPXManagerClass::processPacket((char *)this); /*0x5430e3*/
  if ( (a2 & 1) != 0 ) /*0x5430ed*/
    __3_YAXPAX_Z(this); /*0x5430f0*/
  return (char *)this; /*0x5430fa*/
}



// ==== 0x00543100  ConnManClass::getPlayerName  this=ConnManClass  sig=csp ====
_DWORD *__thiscall IPXManagerClass::getPlayerName(ConnManClass *this, char a2)
{
  this->m_0 = (int)&ConnManClass::`vftable'; /*0x543109*/
  if ( (a2 & 1) != 0 ) /*0x54310f*/
    __3_YAXPAX_Z(this); /*0x543112*/
  return &this->m_0; /*0x54311c*/
}



// ==== 0x00543120  sub_543120  this=-  sig=ida-proto ====
void sub_543120()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x54312c*/
  dbl_AA06D8 = Math::Sqrt(v0 + v0); /*0x54313e*/
}



// ==== 0x00543150  sub_543150  this=-  sig=ida-proto ====
void sub_543150()
{
  dbl_AA0728 = dbl_AA06D8 / 60.0; /*0x54315c*/
}



// ==== 0x00543170  sub_543170  this=-  sig=ida-proto ====
void sub_543170()
{
  dbl_AA0710 = 1.0 / dbl_AA0728; /*0x54317c*/
}



// ==== 0x00543190  sub_543190  this=-  sig=ida-proto ====
void sub_543190()
{
  dbl_AA0708 = 0.0174532925199433 * 45.0; /*0x54319c*/
}



// ==== 0x005431B0  sub_5431B0  this=-  sig=ida-proto ====
void sub_5431B0()
{
  dbl_AA06E0 = 0.0174532925199433 * 60.0; /*0x5431bc*/
}



// ==== 0x005431D0  sub_5431D0  this=-  sig=ida-proto ====
void sub_5431D0()
{
  dbl_AA06B8 = 0.0174532925199433 * 90.0; /*0x5431dc*/
}



// ==== 0x005431F0  sub_5431F0  this=-  sig=ida-proto ====
__int64 sub_5431F0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_AA06B8 - dbl_AA06E0); /*0x543202*/
  result = Math::RoundToInt(v0 * dbl_AA06D8 * 0.5); /*0x543216*/
  dword_AA0730 = result; /*0x54321b*/
  return result; /*0x543220*/
}



// ==== 0x00543230  sub_543230  this=-  sig=ida-proto ====
void sub_543230()
{
  dbl_AA06E8 = Math::ArcTan((double)dword_AA0730 * 0.00390625); /*0x543247*/
}



// ==== 0x00543260  sub_543260  this=-  sig=ida-proto ====
void sub_543260()
{
  dbl_AA0700 = Math::ArcTan((double)(2 * dword_AA0730) / dbl_AA06D8); /*0x543282*/
}



// ==== 0x00543290  sub_543290  this=-  sig=ida-proto ====
__int64 sub_543290()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_AA0730) + 0.5); /*0x5432ab*/
  dword_AA0724 = result; /*0x5432b0*/
  return result; /*0x5432b6*/
}



// ==== 0x005432C0  sub_5432C0  this=-  sig=ida-proto ====
int sub_5432C0()
{
  word_AA06D0 = 0; /*0x5432c2*/
  word_AA06D2 = 0; /*0x5432c8*/
  return 0; /*0x5432ce*/
}



// ==== 0x005432D0  sub_5432D0  this=-  sig=ida-proto ====
int sub_5432D0()
{
  dword_AA06F0 = 0; /*0x5432d2*/
  dword_AA06F4 = 0; /*0x5432d7*/
  dword_AA06F8 = 0; /*0x5432dc*/
  return 0; /*0x5432e1*/
}



// ==== 0x005432F0  sub_5432F0  this=-  sig=ida-proto ====
int sub_5432F0()
{
  dword_AA0720 = 0; /*0x5432f5*/
  dword_AA0718 = 128; /*0x5432ff*/
  dword_AA071C = 128; /*0x543304*/
  return 128; /*0x543309*/
}



// ==== 0x00543310  sub_543310  this=-  sig=ida-proto ====
int sub_543310()
{
  dword_AA06C0 = 0; /*0x543312*/
  dword_AA06C4 = 0; /*0x543317*/
  dword_AA06C8 = 0; /*0x54331c*/
  dword_AA06CC = 0; /*0x543321*/
  return 0; /*0x543326*/
}



// ==== 0x00543330  AbstractClass::ModifyCellTiles  this=IsometricTileClass  sig=csp ====
char __thiscall AbstractClass::ModifyCellTiles(AbstractClass *this, int a2)
{
  AbstractClass *v2; // edi
  int v3; // esi
  int referenceCount; // eax
  int v5; // ecx
  int v6; // ebp
  _WORD *v7; // eax
  unsigned __int8 *v8; // esi
  int v9; // eax
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
  CellClass *NeighbourContent; // eax
  CellClass *v22; // eax
  CellClass *v23; // eax
  CellClass *v24; // eax
  int v25; // eax
  int v27; // [esp+Ch] [ebp-40h]
  char *v28; // [esp+10h] [ebp-3Ch]
  int v30; // [esp+18h] [ebp-34h]
  int v31; // [esp+1Ch] [ebp-30h]
  __int16 v32[2]; // [esp+20h] [ebp-2Ch] BYREF
  int v33; // [esp+24h] [ebp-28h]
  int v34; // [esp+28h] [ebp-24h]
  int v35; // [esp+2Ch] [ebp-20h]
  int v36; // [esp+30h] [ebp-1Ch] BYREF
  int v37; // [esp+38h] [ebp-14h]
  int v38; // [esp+3Ch] [ebp-10h]
  _BYTE v39[12]; // [esp+40h] [ebp-Ch] BYREF

  v2 = this; /*0x543335*/
  v30 = (*(int (__thiscall **)(AbstractClass *))(this->ptr_0 + 108))(this); /*0x543342*/
  if ( !v30 ) /*0x543346*/
    return 0; /*0x543346*/
  v3 = a2; /*0x54334c*/
  if ( !(unsigned __int8)ObjectClass::UpdateProductionDisplay((TechnoClass *)v2) ) /*0x543353*/
    return 0; /*0x543741*/
  referenceCount = v2[4].referenceCount; /*0x543360*/
  v27 = 0; /*0x543366*/
  if ( *(int *)(referenceCount + 744) > 0 ) /*0x543376*/
  {
    while ( 1 ) /*0x54337e*/
    {
      v5 = *(_DWORD *)(referenceCount + 740); /*0x54337e*/
      v6 = 0; /*0x543384*/
      v34 = 0; /*0x543388*/
      if ( v5 <= 0 ) /*0x54338c*/
        goto LABEL_45; /*0x54338c*/
      do /*0x5436f2*/
      {
        v7 = (_WORD *)(*(int (__thiscall **)(AbstractClass *, int *))(v2->ptr_0 + 440))(v2, &v36); /*0x54339b*/
        LOWORD(v31) = *v7 + v6; /*0x5433b0*/
        HIWORD(v31) = v27 + v7[1]; /*0x5433b9*/
        *(_DWORD *)v32 = v31; /*0x5433c8*/
        if ( !(unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&dword_87F7E8, v32) ) /*0x5433cc*/
          goto LABEL_44; /*0x5433cc*/
        v8 = (unsigned __int8 *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v32); /*0x5433e8*/
        v9 = v2[4].referenceCount; /*0x5433ea*/
        v10 = v6 + v27 * *(_DWORD *)(v9 + 740); /*0x5433ff*/
        if ( !*(_DWORD *)(v30 + 4 * v10 + 16) ) /*0x543401*/
          goto LABEL_44; /*0x543407*/
        if ( !a2 ) /*0x543413*/
        {
          if ( *((_DWORD *)v8 + 14) == *(_DWORD *)(v9 + 660) && v8[282] == v10 ) /*0x543430*/
          {
            *((_DWORD *)v8 + 14) = 0xFFFF; /*0x54343a*/
            v8[282] = 0; /*0x543441*/
            v8[283] -= *(_BYTE *)(*(_DWORD *)(v30 + 4 * v10 + 16) + 40); /*0x543457*/
          }
          goto LABEL_43; /*0x54345d*/
        }
        if ( a2 != 1 && a2 != 3 ) /*0x54346a*/
          goto LABEL_43; /*0x54346a*/
        v11 = *(_DWORD *)(v9 + 660); /*0x543470*/
        if ( v11 == dword_AA10B0 ) /*0x54347e*/
        {
          *((_DWORD *)v8 + 14) = 0xFFFF; /*0x543480*/
        }
        else
        {
          *((_DWORD *)v8 + 14) = v11; /*0x54348c*/
          v8[282] = v10; /*0x54348f*/
          v8[284] = HouseClass::GetCameoTypeIndex((HouseClass *)v2[4].referenceCount, v10); /*0x5434a1*/
          if ( *((_DWORD *)v8 + 14) == g_TerrainTypeTable2 + 5 ) /*0x5434b5*/
          {
            switch ( v8[282] ) /*0x5434cc*/
            {
              case 0u: /*0x5434cc*/
              case 3u: /*0x5434cc*/
              case 6u: /*0x5434cc*/
              case 9u: /*0x5434cc*/
                v12 = g_CellTileLookup; /*0x5434d3*/
                v8[282] = 0; /*0x5434d8*/
                *((_DWORD *)v8 + 14) = v12 + 1; /*0x5434e0*/
                break; /*0x5434e0*/
              default:
                break;
            }
          }
          if ( *((_DWORD *)v8 + 14) == dword_AA1098 + 5 ) /*0x5434f1*/
          {
            switch ( v8[282] ) /*0x543508*/
            {
              case 0u: /*0x543508*/
              case 3u: /*0x543508*/
              case 6u: /*0x543508*/
              case 9u: /*0x543508*/
                v13 = dword_AA109C; /*0x54350f*/
                v8[282] = 0; /*0x543514*/
                *((_DWORD *)v8 + 14) = v13 + 1; /*0x54351c*/
                break; /*0x54351c*/
              default:
                break;
            }
          }
          if ( *((_DWORD *)v8 + 14) == g_TerrainTypeTable2 + 8 && v8[282] <= 3u ) /*0x543536*/
          {
            v14 = g_CellTileLookup; /*0x543538*/
            v8[282] = 0; /*0x54353e*/
            *((_DWORD *)v8 + 14) = v14; /*0x543545*/
          }
          if ( *((_DWORD *)v8 + 14) != dword_AA1098 + 8 || v8[282] > 3u ) /*0x54355e*/
            goto LABEL_28; /*0x54355e*/
          *((_DWORD *)v8 + 14) = dword_AA109C; /*0x543566*/
        }
        v8[282] = 0; /*0x543569*/
LABEL_28:
        v15 = *((_DWORD *)v8 + 17); /*0x543570*/
        *((_DWORD *)v8 + 18) = -1; /*0x543573*/
        v8[287] = 0; /*0x54357d*/
        if ( v15 < 27 ) /*0x543584*/
          goto LABEL_42; /*0x543584*/
        if ( v15 >= 38 ) /*0x54358d*/
          goto LABEL_42; /*0x54358d*/
        v16 = *(_DWORD *)v8; /*0x543599*/
        *((_DWORD *)v8 + 80) &= ~0x20000u; /*0x5435a2*/
        v17 = (_DWORD *)(*(int (__thiscall **)(unsigned __int8 *, _BYTE *))(v16 + 72))(v8, v39); /*0x5435ad*/
        v18 = *v17 + 384; /*0x5435bb*/
        v37 = v17[1] + 384; /*0x5435c1*/
        v38 = v17[2]; /*0x5435cd*/
        v33 = 0; /*0x5435d3*/
        if ( dword_A8E9B8 <= 0 ) /*0x5435db*/
          goto LABEL_42; /*0x5435db*/
        v35 = *(_DWORD *)(*(&dword_A83D84->ptr_0 + *((_DWORD *)v8 + 17)) + 668); /*0x5435f8*/
        v28 = (char *)dword_A8E9AC; /*0x5435fc*/
        while ( 1 ) /*0x543608*/
        {
          v19 = *(_DWORD **)v28; /*0x543608*/
          if ( *(_DWORD *)(*(_DWORD *)v28 + 200) == v35 ) /*0x543610*/
            break; /*0x543610*/
LABEL_37:
          v20 = ++v33 < dword_A8E9B8; /*0x543637*/
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
        *((_DWORD *)v8 + 17) = -1; /*0x543666*/
        v8[286] = 0; /*0x543671*/
        v8[283] += *(_BYTE *)(*(_DWORD *)(v30 + 4 * v10 + 16) + 40); /*0x543689*/
        CellClass::DetermineTileType((CellClass *)v8); /*0x54368f*/
        NeighbourContent = (CellClass *)Cell::GetNeighbourContent((Cell *)v8, 0); /*0x543698*/
        CellClass::DetermineTileType(NeighbourContent); /*0x54369f*/
        v22 = (CellClass *)Cell::GetNeighbourContent((Cell *)v8, 2u); /*0x5436a8*/
        CellClass::DetermineTileType(v22); /*0x5436af*/
        v23 = (CellClass *)Cell::GetNeighbourContent((Cell *)v8, 4u); /*0x5436b8*/
        CellClass::DetermineTileType(v23); /*0x5436bf*/
        v24 = (CellClass *)Cell::GetNeighbourContent((Cell *)v8, 6u); /*0x5436c8*/
        CellClass::DetermineTileType(v24); /*0x5436cf*/
        v6 = v34; /*0x5436d4*/
LABEL_43:
        House::AnnounceUpgrade((int)v8, -1); /*0x5436d8*/
LABEL_44:
        v25 = v2[4].referenceCount; /*0x5436e1*/
        v34 = ++v6; /*0x5436e8*/
      }
      while ( v6 < *(_DWORD *)(v25 + 740) ); /*0x5436f2*/
LABEL_45:
      referenceCount = v2[4].referenceCount; /*0x5436f8*/
      if ( ++v27 >= *(_DWORD *)(referenceCount + 744) ) /*0x54370f*/
      {
        v3 = a2; /*0x543715*/
        break; /*0x543715*/
      }
    }
  }
  if ( v3 == 1 || v3 == 3 ) /*0x543723*/
  {
    LOBYTE(v2[3].ptr_8) = 0; /*0x543727*/
    if ( v2 ) /*0x54372b*/
      (*(void (__thiscall **)(AbstractClass *, int))(v2->ptr_0 + 32))(v2, 1); /*0x543733*/
  }
  return 1; /*0x543736*/
}



// ==== 0x00543780  IsometricTileClass::IsometricTileClass  this=IsometricTileClass  sig=csp ====
IsometricTileClass *__thiscall IsometricTileClass::IsometricTileClass(IsometricTileClass *this, int a2, _WORD *a3)
{
  int v4; // eax

  ObjectClass::ctor((ObjectClass *)this); /*0x543786*/
  *(this + 43) = *(IsometricTileClass *)(*(_DWORD *)&stru_A8EB00.?[328] + 4 * a2); /*0x54379c*/
  *this = (IsometricTileClass)&IsometricTileClass::`vftable'; /*0x5437a2*/
  *((_DWORD *)this + 1) = &IsometricTileClass::`vftable'; /*0x5437a8*/
  *((_DWORD *)this + 2) = &IsometricTileClass::`vftable'; /*0x5437af*/
  *((_DWORD *)this + 3) = &IsometricTileClass::`vftable'; /*0x5437b6*/
  if ( *a3 != word_AA06D0 || a3[1] != word_AA06D2 ) /*0x5437d4*/
  {
    *((_BYTE *)this + 129) = 0; /*0x543805*/
    ObjectClass::SetPosition((IUnknown *)this); /*0x54380c*/
    (*(void (__thiscall **)(IsometricTileClass *, int))(*(_DWORD *)this + 292))(this, 1); /*0x543818*/
  }
  if ( *(int *)&stru_87F5F0.__pad_58[280] < *(int *)&stru_87F5F0.__pad_58[272] /*0x543855*/
    || (stru_87F5F0.__pad_58[277] || !*(_DWORD *)&stru_87F5F0.__pad_58[272])
    && *(int *)&stru_87F5F0.__pad_58[284] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_87F5F0.__pad_58[264] + 8))(
         &stru_87F5F0.__pad_58[264],
         *(_DWORD *)&stru_87F5F0.__pad_58[272] + *(_DWORD *)&stru_87F5F0.__pad_58[284],
         0) )
  {
    v4 = (*(_DWORD *)&stru_87F5F0.__pad_58[280])++; /*0x543862*/
    *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[268] + 4 * v4) = this; /*0x543871*/
  }
  return this; /*0x543876*/
}



// ==== 0x00543990  AbstractClass::COMStub_5  this=IsometricTileClass  sig=csp ====
int __thiscall AbstractClass::COMStub_5(AbstractClass *this, _DWORD *a2, int a3)
{
  int Register; // edi

  Register = BuildingClass::SaveLoad_Register((ObjectClass *)this); /*0x5439a1*/
  if ( Register >= 0 ) /*0x5439a5*/
  {
    if ( a2 ) /*0x5439a9*/
    {
      ObjectClass::Init((ObjectClass *)a2, (int)&a3); /*0x5439b2*/
      *a2 = &IsometricTileClass::`vftable'; /*0x5439b7*/
      a2[1] = &IsometricTileClass::`vftable'; /*0x5439bd*/
      a2[2] = &IsometricTileClass::`vftable'; /*0x5439c4*/
      a2[3] = &IsometricTileClass::`vftable'; /*0x5439cb*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a2 + 43); /*0x5439de*/
  }
  return Register; /*0x5439e5*/
}



// ==== 0x005439F0  AbstractClass::COMStub_6  this=IsometricTileClass  sig=csp ====
int __stdcall AbstractClass::COMStub_6(AbstractClass *this, int *a2, int a3)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((int *)this, a2, a3); /*0x5439ff*/
  if ( result >= 0 ) /*0x543a06*/
    return 0; /*0x543a08*/
  return result; /*0x543a0a*/
}



// ==== 0x00543A10  AbstractClass::COMStub_54  this=IsometricTileClass  sig=csp ====
int __thiscall AbstractClass::COMStub_54(AbstractClass *this, int a2, int a3)
{
  void (__thiscall **ptr_0)(AbstractClass *, int); // eax

  ptr_0 = (void (__thiscall **)(AbstractClass *, int))this->ptr_0; /*0x543a17*/
  *((_BYTE *)this + 129) = 0; /*0x543a1c*/
  ptr_0[109](this, a2); /*0x543a23*/
  return (*((int (__thiscall **)(AbstractClass *, int))this->ptr_0 + 73))(this, 1); /*0x543a35*/
}



// ==== 0x00543A40  AbstractClass::COMStub_53  this=IsometricTileClass  sig=csp ====
char __thiscall AbstractClass::COMStub_53(AbstractClass *this)
{
  if ( !byte_A8E9A0 || *((_BYTE *)this + 129) ) /*0x543a4c*/
    return 0; /*0x543a88*/
  (*((void (__thiscall **)(AbstractClass *))this->ptr_0 + 84))(this); /*0x543a58*/
  (*((void (__thiscall **)(AbstractClass *, int))this->ptr_0 + 55))(this, 1); /*0x543a64*/
  (*((void (__thiscall **)(AbstractClass *, _DWORD))this->ptr_0 + 73))(this, 0); /*0x543a70*/
  *((_BYTE *)this + 129) = 1; /*0x543a76*/
  *((_BYTE *)this + 128) = 0; /*0x543a7d*/
  return 1; /*0x543a86*/
}



// ==== 0x00543A90  AbstractClass::COMStub_Ret176_12  this=IsometricTileClass  sig=csp ====
int AbstractClass::COMStub_Ret176_12(AbstractClass *this)
{
  return 176; /*0x543a95*/
}



// ==== 0x00543AA0  AbstractClass::COMStub_Ret17_11  this=IsometricTileClass  sig=csp ====
int AbstractClass::COMStub_Ret17_11(AbstractClass *this)
{
  return 17; /*0x543aa5*/
}



// ==== 0x00543AB0  IsometricTileClass::nullsub_0  this=IsometricTileClass  sig=csp ====
int __stdcall nullsub_0(IsometricTileClass *this, _DWORD *a2)
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
int __thiscall nullsub_0_0(IsometricTileClass *this)
{
  return *((_DWORD *)this + 43); /*0x543af6*/
}



// ==== 0x00543B00  IsometricTileClass::nullsub_154  this=IsometricTileClass  sig=csp ====
void __stdcall nullsub_154(IsometricTileClass *this, int a2)
{
  ; /*0x543b00*/
}



// ==== 0x00543B10  AbstractClass::CreateInstance  this=IsometricTileClass  sig=csp ====
void **__thiscall AbstractClass::CreateInstance(AbstractClass *this, char a2)
{
  int v3; // eax
  int v4; // eax
  AbstractClass *v6; // [esp+Ch] [ebp-4h] BYREF

  this->ptr_0 = &IsometricTileClass::`vftable'; /*0x543b16*/
  this->ptr_4 = &IsometricTileClass::`vftable'; /*0x543b1c*/
  this->ptr_8 = &IsometricTileClass::`vftable'; /*0x543b23*/
  this->ptr_C = &IsometricTileClass::`vftable'; /*0x543b2a*/
  AbstractClass::AnnounceExpiredPointer(&this->ptr_0, 1); /*0x543b31*/
  if ( byte_A8E9A0 && !*((_BYTE *)this + 129) ) /*0x543b3f*/
  {
    (*((void (__thiscall **)(AbstractClass *))this->ptr_0 + 84))(this); /*0x543b4d*/
    (*((void (__thiscall **)(AbstractClass *, int))this->ptr_0 + 55))(this, 1); /*0x543b59*/
    (*((void (__thiscall **)(AbstractClass *, _DWORD))this->ptr_0 + 73))(this, 0); /*0x543b65*/
    *((_BYTE *)this + 129) = 1; /*0x543b6b*/
    *((_BYTE *)this + 128) = 0; /*0x543b72*/
  }
  *((_DWORD *)this + 43) = 0; /*0x543b7d*/
  v6 = this; /*0x543b93*/
  v3 = (*(int (__thiscall **)(char *, AbstractClass **))(*(_DWORD *)&stru_87F5F0.__pad_58[264] + 16))( /*0x543b97*/
         &stru_87F5F0.__pad_58[264],
         &v6);
  if ( v3 != -1 && v3 < *(int *)&stru_87F5F0.__pad_58[280] ) /*0x543ba7*/
  {
    --*(_DWORD *)&stru_87F5F0.__pad_58[280]; /*0x543bac*/
    for ( ; /*0x543bb2*/
          v3 < *(int *)&stru_87F5F0.__pad_58[280];
          *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[268] + 4 * v3 - 4) = *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[268]
                                                                                      + 4 * v3) )
    {
      ++v3; /*0x543bba*/
    }
  }
  v6 = this; /*0x543bdc*/
  v4 = (*(int (__thiscall **)(int *, AbstractClass **))(g_BuildingLoadQueue_Array.LightVisibility + 16))( /*0x543be0*/
         &g_BuildingLoadQueue_Array.LightVisibility,
         &v6);
  if ( v4 != -1 && v4 < g_BuildingLoadQueue_Array.LightBlueTint ) /*0x543bf0*/
  {
    --g_BuildingLoadQueue_Array.LightBlueTint; /*0x543bf5*/
    for ( ; /*0x543bfb*/
          v4 < g_BuildingLoadQueue_Array.LightBlueTint;
          *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v4 - 4) = *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity
                                                                                         + 4 * v4) )
    {
      ++v4; /*0x543c03*/
    }
  }
  ObjectClass::Dtor((ObjectClass *)this); /*0x543c17*/
  if ( (a2 & 1) != 0 ) /*0x543c21*/
    __3_YAXPAX_Z(this); /*0x543c24*/
  return &this->ptr_0; /*0x543c2e*/
}



// ==== 0x00543C40  sub_543C40  this=-  sig=ida-proto ====
int sub_543C40()
{
  dword_AA1040 = 0; /*0x543c42*/
  dword_AA1044 = 0; /*0x543c47*/
  dword_AA1048 = 0; /*0x543c4c*/
  dword_AA104C = 0; /*0x543c51*/
  return 0; /*0x543c56*/
}



// ==== 0x00543C60  sub_543C60  this=-  sig=ida-proto ====
void sub_543C60()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x543c6c*/
  dbl_AA1070 = Math::Sqrt(v0 + v0); /*0x543c7e*/
}



// ==== 0x00543C90  sub_543C90  this=-  sig=ida-proto ====
void sub_543C90()
{
  dbl_ABC2C0 = dbl_AA1070 / 60.0; /*0x543c9c*/
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
  dbl_AA1128 = 0.0174532925199433 * 60.0; /*0x543cfc*/
}



// ==== 0x00543D10  sub_543D10  this=-  sig=ida-proto ====
void sub_543D10()
{
  dbl_AA0E30 = 0.0174532925199433 * 90.0; /*0x543d1c*/
}



// ==== 0x00543D30  sub_543D30  this=-  sig=ida-proto ====
__int64 sub_543D30()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(dbl_AA0E30 - dbl_AA1128); /*0x543d42*/
  result = Math::RoundToInt(v0 * dbl_AA1070 * 0.5); /*0x543d56*/
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
  dbl_ABB118 = Math::ArcTan((double)(2 * dword_ABC550) / dbl_AA1070); /*0x543dc2*/
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
  dword_AA105C[0] = 0; /*0x543e02*/
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

  result = &unk_ABBED2; /*0x543e50*/
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
  dword_AA107C = 0; /*0x543e77*/
  dword_AA1080 = 0; /*0x543e7c*/
  byte_AA1084 = 1; /*0x543e81*/
  byte_AA1085 = 0; /*0x543e88*/
  dword_AA1078 = (int)&DynamicVectorClass<IsometricTileTypeClass::TileInsertType *>::`vftable'; /*0x543e8d*/
  dword_AA108C = 10; /*0x543e97*/
  dword_AA1088 = 0; /*0x543ea1*/
  return atexit(sub_543EB0); /*0x543eac*/
}



// ==== 0x00543EB0  sub_543EB0  this=-  sig=ida-proto ====
void __cdecl sub_543EB0()
{
  if ( (byte_AA0E2C & 1) == 0 ) /*0x543eba*/
  {
    dword_AA1078 = (int)&VectorClass<IsometricTileTypeClass::TileInsertType *>::`vftable'; /*0x543ebe*/
    byte_AA0E2C |= 1u; /*0x543ed1*/
    if ( dword_AA107C ) /*0x543ed7*/
    {
      if ( byte_AA1085 ) /*0x543ee1*/
      {
        __3_YAXPAX_Z(dword_AA107C); /*0x543ee4*/
        dword_AA107C = 0; /*0x543eec*/
      }
    }
    byte_AA1085 = 0; /*0x543ef6*/
    dword_AA1080 = 0; /*0x543efd*/
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



// ==== 0x005447C0  TerrainTypeClass::Construct  this=TerrainTypeClass  sig=csp ====
_DWORD *__thiscall TerrainTypeClass::Construct(
        TerrainTypeClass *this,
        int a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        char *Source,
        char a6)
{
  int v7; // eax
  int v8; // eax
  char Destination[48]; // [esp+10h] [ebp-34h] BYREF
  char v11; // [esp+40h] [ebp-4h]

  ObjectTypeClass::ConstructFull((int *)this, Source); /*0x5447ce*/
  this->ArrayIndex = a2; /*0x5447d9*/
  this->Foundation = 0xFFFF; /*0x5447e4*/
  *(_DWORD *)this->RadarColor = 0xFFFF; /*0x5447ea*/
  this->AnimationRate = 0; /*0x5447f0*/
  this->TemperateOccupationBits = 0; /*0x5447f8*/
  this->SnowOccupationBits = 0; /*0x5447fe*/
  this->WaterBound = 1; /*0x544804*/
  this->SpawnsTiberium = 0; /*0x54480b*/
  LODWORD(this->AnimationProbability) = &DynamicVectorClass<unsigned short *>::`vftable'; /*0x544811*/
  this->FoundationData = (CellStruct *)10; /*0x54481b*/
  *(_DWORD *)&this->IsVeinhole = 0; /*0x544825*/
  *((_DWORD *)this + 179) = 0; /*0x544830*/
  this->MainVoxel = -1; /*0x544836*/
  *((_DWORD *)this + 177) = -1; /*0x54483c*/
  *((_DWORD *)this + 178) = -1; /*0x544842*/
  this->TurretVoxel = 0; /*0x544848*/
  *((_DWORD *)this + 181) = -1; /*0x544852*/
  *((_DWORD *)this + 175) = 0; /*0x544868*/
  *((_DWORD *)this + 182) = 0; /*0x54486e*/
  *((_DWORD *)this + 183) = a3; /*0x544874*/
  this->BarrelVoxel = 0; /*0x54487a*/
  *((_BYTE *)this + 737) = 0; /*0x544880*/
  *((_BYTE *)this + 738) = 1; /*0x544886*/
  *((_BYTE *)this + 739) = 0; /*0x54488d*/
  this->q0B9 = 0; /*0x544893*/
  *((_DWORD *)this + 186) = 0; /*0x544899*/
  *((_DWORD *)this + 187) = a4; /*0x54489f*/
  this->ChargerTurrets = 1; /*0x5448a5*/
  *((_BYTE *)this + 756) = 0; /*0x5448af*/
  *((_BYTE *)this + 773) = 1; /*0x5448b5*/
  *((_BYTE *)this + 774) = 0; /*0x5448bc*/
  *((_DWORD *)this + 194) = 0; /*0x5448c2*/
  this->ObjectTypeClass = &IsometricTileTypeClass::`vftable'; /*0x5448c8*/
  this->? = &IsometricTileTypeClass::`vftable'; /*0x5448cf*/
  this->? = &IsometricTileTypeClass::`vftable'; /*0x5448d6*/
  this->? = &IsometricTileTypeClass::`vftable'; /*0x5448dd*/
  if ( g_BuildingLoadQueue_Array.LightBlueTint < g_BuildingLoadQueue_Array.LightRedTint /*0x544917*/
    || (BYTE1(g_BuildingLoadQueue_Array.LightGreenTint) || !g_BuildingLoadQueue_Array.LightRedTint)
    && g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0] > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.LightVisibility + 8))(
         &g_BuildingLoadQueue_Array.LightVisibility,
         g_BuildingLoadQueue_Array.LightRedTint + g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0],
         0) )
  {
    v7 = g_BuildingLoadQueue_Array.LightBlueTint++; /*0x544924*/
    *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v7) = this; /*0x544933*/
  }
  if ( !a6 /*0x544970*/
    && (*(int *)&stru_A8EB00.?[340] < *(int *)&stru_A8EB00.?[332]
     || (stru_A8EB00.?[337] || !*(_DWORD *)&stru_A8EB00.?[332])
     && *(int *)&stru_A8EB00.?[344] > 0
     && (*(unsigned __int8 (__thiscall **)(_BYTE *, int, _DWORD))(*(_DWORD *)&stru_A8EB00.?[324] + 8))(
          &stru_A8EB00.?[324],
          *(_DWORD *)&stru_A8EB00.?[332] + *(_DWORD *)&stru_A8EB00.?[344],
          0)) )
  {
    v8 = (*(_DWORD *)&stru_A8EB00.?[340])++; /*0x54497d*/
    *(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[328] + 4 * v8) = this; /*0x54498c*/
  }
  if ( Source ) /*0x544991*/
  {
    strncpy(Destination, Source, 0x30u); /*0x5449a1*/
    v11 = 0; /*0x5449a9*/
  }
  else
  {
    Destination[0] = 0; /*0x544993*/
  }
  if ( Destination != this->? ) /*0x5449b6*/
  {
    qmemcpy(this->?, Destination, 0x30u); /*0x5449c1*/
    this->?[48] = v11; /*0x5449c3*/
  }
  *((_BYTE *)this + 757) = 0; /*0x5449c5*/
  this->? = 1; /*0x5449cb*/
  this->? = 0; /*0x5449d2*/
  this->? = 0; /*0x5449d8*/
  this->? = 1; /*0x5449de*/
  this->? = 1; /*0x5449e5*/
  this->? = 0; /*0x5449ec*/
  return &this->ObjectTypeClass; /*0x5449c4*/
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
  v3 = (*(int (__thiscall **)(int *, int *))(dword_A8ED28 + 16))(&dword_A8ED28, &v11); /*0x544ac4*/
  if ( v3 != -1 && v3 < dword_A8ED38 && v3 < --dword_A8ED38 ) /*0x544adf*/
  {
    do /*0x544af7*/
    {
      ++v3; /*0x544ae7*/
      *((_DWORD *)dword_A8ED2C + v3 - 1) = *((_DWORD *)dword_A8ED2C + v3); /*0x544aeb*/
    }
    while ( v3 < dword_A8ED38 ); /*0x544af7*/
  }
  v11 = this; /*0x544b09*/
  v4 = (*(int (__thiscall **)(int *, int *))(dword_B0F670 + 16))(&dword_B0F670, &v11); /*0x544b0d*/
  if ( v4 != -1 && v4 < dword_B0F680 && v4 < --dword_B0F680 ) /*0x544b28*/
  {
    do /*0x544b40*/
    {
      ++v4; /*0x544b30*/
      *((_DWORD *)dword_B0F674 + v4 - 1) = *((_DWORD *)dword_B0F674 + v4); /*0x544b34*/
    }
    while ( v4 < dword_B0F680 ); /*0x544b40*/
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
int __thiscall House::LookupObject(House *this, int a2)
{
  _DWORD *v2; // eax
  int v3; // ecx

  v2 = (_DWORD *)(*(int (__thiscall **)(House *))(*(_DWORD *)this->__pad_0 + 156))(this); /*0x544be2*/
  if ( v2 && (v3 = v2[a2 % (*v2 * v2[1]) + 4]) != 0 ) /*0x544c03*/
    return dword_8288E4[*(char *)(v3 + 41)]; /*0x544c09*/
  else
    return 0; /*0x544c13*/
}



// ==== 0x00544C20  House::LoadMapFileData  this=House  sig=csp ====
bool __thiscall House::LoadMapFileData(House *this, int a2, char a3)
{
  _DWORD *v4; // eax

  if ( a3 && !*(_DWORD *)&this->__pad_7C[40] && this->__pad_2B0[68] ) /*0x544c35*/
    MapClass::LoadFileData((MapClass *)this); /*0x544c3f*/
  v4 = (_DWORD *)(*(int (__thiscall **)(House *))(*(_DWORD *)this->__pad_0 + 156))(this); /*0x544c48*/
  return v4 && a2 < *v4 * v4[1] && v4[a2 + 4]; /*0x544c50*/
}



// ==== 0x00544C80  CellClass::EnsureFileLoaded  this=CellClass  sig=csp ====
BOOL __thiscall CellClass::EnsureFileLoaded(CellClass *this)
{
  if ( !this->sensorsOfHouses[10] && *((_BYTE *)this + 756) ) /*0x544c8d*/
    MapClass::LoadFileData((MapClass *)this); /*0x544c97*/
  return this->sensorsOfHouses[10] != 0; /*0x544ca9*/
}



// ==== 0x00544CB0  IsometricTileTypeClass::LoadTileFileData  this=MapClass  sig=csp ====
int __thiscall IsometricTileTypeClass::LoadTileFileData(Class_7ECCDC *this)
{
  int result; // eax

  result = this->q0A4; /*0x544cb3*/
  if ( !result ) /*0x544cbb*/
  {
    if ( this->u32_2F4 ) /*0x544cbd*/
    {
      MapClass::LoadFileData((MapClass *)this); /*0x544cc9*/
      return this->q0A4; /*0x544cce*/
    }
  }
  return result; /*0x544cd4*/
}



// ==== 0x00544CE0  ObjectClass::Entity_Read  this=ObjectClass  sig=csp ====
int __thiscall Entity_Read(ObjectClass *this)
{
  int v2; // esi

  if ( !this ) /*0x544ce6*/
    return 0xFFFF; /*0x544ce6*/
  v2 = 0; /*0x544ced*/
  if ( *(int *)&stru_A8EB00.?[340] <= 0 ) /*0x544cf1*/
    return 0xFFFF; /*0x544d16*/
  while ( _strcmpi((char *)(*(_DWORD *)(*(_DWORD *)&stru_A8EB00.?[328] + 4 * v2) + 36), (char *)this) ) /*0x544d0a*/
  {
    if ( ++v2 >= *(int *)&stru_A8EB00.?[340] ) /*0x544d14*/
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
_DWORD *__thiscall Map_Get(TechnoClass *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *result; // eax

  v2 = this->diskLaserTimer[1]; /*0x544e05*/
  v3 = a2; /*0x544e0c*/
  if ( a2 > v2 - 1 ) /*0x544e13*/
    v3 = a2 % v2; /*0x544e16*/
  for ( result = &this->ptr_0; v3; --v3 ) /*0x544e1e*/
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
    if ( dword_AA1088 > 0 ) /*0x544e49*/
    {
      v3 = dword_AA107C; /*0x544e4b*/
      do /*0x544e62*/
      {
        v4 = (_DWORD *)*v3; /*0x544e51*/
        if ( *(_DWORD *)*v3 > a1 ) /*0x544e55*/
          break; /*0x544e55*/
        ++v3; /*0x544e5a*/
        result += v4[1]; /*0x544e5d*/
        ++v2; /*0x544e5f*/
      }
      while ( v2 < dword_AA1088 ); /*0x544e62*/
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

  if ( !g_DSurface_Primary ) /*0x544e86*/
    return 0; /*0x544e8b*/
  if ( a1 == 1000 && a2 == 1000 && a3 == 1000 && dword_87F6A8 ) /*0x544ead*/
    return *(_DWORD *)dword_87F69C; /*0x544eb7*/
  QuantizeColorRGB(&a3); /*0x544ecd*/
  v4 = 1; /*0x544ee4*/
  if ( dword_87F6A8 <= 1 ) /*0x544eeb*/
  {
LABEL_14:
    v6 = 53; /*0x544f1c*/
    if ( a3 + a2 + a1 < 2000 ) /*0x544f2b*/
      v6 = 27; /*0x544f2d*/
    if ( __2_YAPAXI_Z(0x1B4u) ) /*0x544f37*/
      v7 = LightConvertClass::Constructor( /*0x544f79*/
             &unk_ABBED0,
             &FileSystem_TEMPERAT_PAL,
             g_DSurface_Primary,
             a1,
             a2,
             a3,
             dword_87F6A8 != 0,
             0,
             v6);
    else
      v7 = 0; /*0x544f7d*/
    if ( dword_87F6A8 < dword_87F6A0 /*0x544fb6*/
      || (byte_87F6A5 || !dword_87F6A0)
      && dword_87F6AC > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_87F698 + 8))(
           &dword_87F698,
           dword_87F6A0 + dword_87F6AC,
           0) )
    {
      v8 = dword_87F6A8++; /*0x544fc3*/
      *((_DWORD *)dword_87F69C + v8) = v7; /*0x544fd2*/
    }
    return v7; /*0x544fd5*/
  }
  else
  {
    v5 = (char *)dword_87F69C + 4; /*0x544ef3*/
    while ( 1 ) /*0x544ef6*/
    {
      result = *(_DWORD *)v5; /*0x544ef6*/
      if ( *(_DWORD *)(*(_DWORD *)v5 + 408) == a1 && *(_DWORD *)(result + 412) == a2 && *(_DWORD *)(result + 416) == a3 ) /*0x544f0e*/
        break; /*0x544f0e*/
      ++v4; /*0x544f14*/
      v5 += 4; /*0x544f15*/
      if ( v4 >= dword_87F6A8 ) /*0x544f1a*/
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

  v0 = dword_87F6A8; /*0x545000*/
  if ( dword_87F6A8 > 0 ) /*0x545009*/
  {
    v1 = dword_87F69C; /*0x54500b*/
    do /*0x545054*/
    {
      if ( *v1 ) /*0x545011*/
      {
        (**(void (__thiscall ***)(_DWORD, int))*v1)(*v1, 1); /*0x54501b*/
        v1 = dword_87F69C; /*0x54501d*/
        v0 = dword_87F6A8; /*0x545023*/
      }
      if ( v0 <= 0 ) /*0x54502b*/
        break; /*0x54502b*/
      v2 = 0; /*0x54502e*/
      dword_87F6A8 = v0 - 1; /*0x545032*/
      if ( v0 - 1 <= 0 ) /*0x545038*/
        break; /*0x545038*/
      do /*0x545050*/
      {
        v1[v2] = v1[v2 + 1]; /*0x54503e*/
        v0 = dword_87F6A8; /*0x545041*/
        v1 = dword_87F69C; /*0x545047*/
        ++v2; /*0x54504d*/
      }
      while ( v2 < dword_87F6A8 ); /*0x545050*/
    }
    while ( dword_87F6A8 > 0 ); /*0x545054*/
  }
  v3 = __2_YAPAXI_Z(0x1B4u); /*0x54505b*/
  if ( v3 ) /*0x545065*/
    v4 = LightConvertClass::Constructor( /*0x545094*/
           (int)v3,
           (int)&unk_ABBED0,
           (int)&FileSystem_TEMPERAT_PAL,
           g_DSurface_Primary,
           1000,
           1000,
           1000,
           0,
           0,
           53);
  else
    v4 = 0; /*0x545098*/
  if ( dword_87F6A8 < dword_87F6A0 /*0x5450d0*/
    || (byte_87F6A5 || !dword_87F6A0)
    && dword_87F6AC > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_87F698 + 8))(
         &dword_87F698,
         dword_87F6A0 + dword_87F6AC,
         0) )
  {
    v5 = dword_87F6A8++; /*0x5450dd*/
    *((_DWORD *)dword_87F69C + v5) = v4; /*0x5450ec*/
  }
  dword_ABDC84 = 0; /*0x54510c*/
  TacticalClass::SetView((int)unk_ABDC50, 0, 0x10000, 0, 1000, 1000, 1000); /*0x545116*/
  LayerClass::CellIteratorReset(&dword_87F7E8); /*0x545120*/
  for ( result = LayerClass::CellIteratorNext(&dword_87F7E8); result; result = LayerClass::CellIteratorNext(&dword_87F7E8) ) /*0x545132*/
    *(_DWORD *)(result + 52) = 0; /*0x545139*/
  return result; /*0x545131*/
}



// ==== 0x00545150  LoadTerrainTypeClassTheatre  this=-  sig=ida-proto ====
char *__fastcall TerrainTypeClass_LoadTheatre(int a1, char a2)
{
  int v3; // ebp
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
  _BYTE *v18; // eax
  int v19; // ecx
  int v20; // edi
  int v21; // ebx
  int v22; // eax
  int v23; // ecx
  signed int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // ebx
  _DWORD *v28; // eax
  int v29; // edx
  int v30; // eax
  int v31; // eax
  char v32; // al
  int v33; // ecx
  int v34; // eax
  int v35; // ebx
  int v36; // edx
  int v37; // ecx
  int v38; // ecx
  int v39; // edx
  int v40; // edx
  int v41; // eax
  int v42; // esi
  unsigned __int8 *v43; // ebx
  int v44; // edx
  int v45; // ecx
  int v46; // edx
  unsigned int *v47; // ecx
  unsigned int v48; // eax
  _DWORD *v49;... [37464 chars total]



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
    LayerClass::CellIteratorReset(&dword_87F7E8); /*0x546dd3*/
    for ( i = LayerClass::CellIteratorNext(&dword_87F7E8); i; i = LayerClass::CellIteratorNext(&dword_87F7E8) ) /*0x546de6*/
    {
      v4 = *(_DWORD *)(i + 56); /*0x546dec*/
      inited = 0; /*0x546def*/
      if ( v4 == 0xFFFF || v4 >= dword_A8ED38 ) /*0x546dff*/
      {
        v6 = (_DWORD *)*((_DWORD *)dword_A8ED2C + dword_AA10B0); /*0x546e6f*/
        inited = CellClass::InitRandomOffsets(i, dword_AA10B0, v6[188]); /*0x546e7c*/
      }
      else
      {
        v6 = (_DWORD *)*((_DWORD *)dword_A8ED2C + v4); /*0x546e07*/
        if ( (int)v6[188] > 1 ) /*0x546e11*/
        {
          LOBYTE(inited) = *(_BYTE *)(i + 282); /*0x546e13*/
          v7 = inited; /*0x546e1d*/
          v8 = (_DWORD *)(*(int (__thiscall **)(_DWORD))(*v6 + 156))(*((_DWORD *)dword_A8ED2C + v4)); /*0x546e1f*/
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
  if ( dword_A8ED38 > 0 ) /*0x546ef2*/
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
      v17 = *((_DWORD *)dword_A8ED2C + v15); /*0x546f47*/
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
      if ( v15 >= dword_A8ED38 ) /*0x546ff2*/
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
int __thiscall MapClass::LoadFileData(MapClass *this)
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
  CCFileClass v12; // [esp+Ch] [ebp-6Ch] BYREF
  int v13[3]; // [esp+64h] [ebp-14h] BYREF
  int v14; // [esp+70h] [ebp-8h]

  CCFileClass::Construct(&v12, &this->__pad_298[93]); /*0x547033*/
  Size = CCFileClass::GetSize(&v12); /*0x547041*/
  if ( *(_DWORD *)&this->__pad_5C[72] ) /*0x547043*/
    __3_YAXPAX_Z(*(void **)&this->__pad_5C[72]); /*0x54704e*/
  v3 = (void *)__2_YAPAXI_Z(Size); /*0x547057*/
  *(_DWORD *)&this->__pad_5C[72] = v3; /*0x547063*/
  CCFileClass::Read(&v12, v3, Size); /*0x54706b*/
  v4 = *(unsigned __int8 **)&this->__pad_5C[72]; /*0x547070*/
  this->__pad_5C[76] = 1; /*0x547078*/
  v5 = 0; /*0x54707f*/
  *(_DWORD *)&this->__pad_298[76] = *v4; /*0x547083*/
  v6 = v4[4]; /*0x547091*/
  v7 = v6 * *(_DWORD *)&this->__pad_298[76]; /*0x547094*/
  *(_DWORD *)&this->__pad_298[80] = v6; /*0x547099*/
  if ( v7 > 0 ) /*0x54709f*/
  {
    v8 = (unsigned int *)(v4 + 16); /*0x5470a1*/
    do /*0x5470cb*/
    {
      v9 = *v8; /*0x5470a4*/
      if ( *v8 ) /*0x5470a4*/
      {
        v10 = *(_DWORD *)&this->__pad_5C[72]; /*0x5470aa*/
        if ( v9 < v10 ) /*0x5470b2*/
          *v8 = v10 + v9; /*0x5470b6*/
      }
      ++v5; /*0x5470be*/
      ++v8; /*0x5470c6*/
    }
    while ( v5 < *(_DWORD *)&this->__pad_298[80] * *(_DWORD *)&this->__pad_298[76] ); /*0x5470cb*/
  }
  TerrainClass::InitTheatre((TerrainClass *)this); /*0x5470cf*/
  *(_DWORD *)v12.CDFileClass = &CCFileClass::`vftable'; /*0x5470d8*/
  v14 = 0; /*0x5470e0*/
  Vector::Clear((int)v13); /*0x5470e8*/
  *(_DWORD *)v12.CDFileClass = &off_7E1668; /*0x5470f1*/
  BufferIOFileClass::Dtor((BufferIOFileClass *)&v12); /*0x5470f9*/
  return Size; /*0x5470fe*/
}



// ==== 0x00547110  ResetAllTechnoField776  this=-  sig=ida-proto ====
int ResetAllTechnoField776()
{
  int result; // eax
  int i; // ecx
  int j; // eax

  result = dword_A8ED38; /*0x547110*/
  for ( i = 0; i < dword_A8ED38; ++i ) /*0x54711b*/
  {
    for ( j = *((_DWORD *)dword_A8ED2C + i); j; j = *(_DWORD *)(j + 700) ) /*0x547127*/
      *(_DWORD *)(j + 776) = 0; /*0x547129*/
    result = dword_A8ED38; /*0x547139*/
  }
  return result; /*0x547143*/
}



// ==== 0x00547150  TechnoClass::GetTileAnimationData  this=TechnoClass  sig=csp ====
char __thiscall TechnoClass::GetTileAnimationData(TechnoClass *this, int a2, _DWORD *a3, _DWORD *a4)
{
  _DWORD *v4; // eax
  int v5; // edx
  int v6; // ecx

  v4 = (_DWORD *)(*((int (__thiscall **)(TechnoClass *))this->RadioClass + 39))(this); /*0x547152*/
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
int __thiscall HouseClass::GetCameoTypeIndex(HouseClass *this, int a2)
{
  _DWORD *v2; // eax
  int v3; // ecx

  v2 = (_DWORD *)(*((int (__thiscall **)(HouseClass *))this->AbstractClass + 39))(this); /*0x5471b2*/
  if ( v2 && (v3 = v2[a2 % (*v2 * v2[1]) + 4]) != 0 ) /*0x5471d3*/
    return *(char *)(v3 + 42); /*0x5471d5*/
  else
    return 0; /*0x5471dc*/
}



// ==== 0x005471F0  CellClass::GetTerrainFlag  this=CellClass  sig=csp ====
int __thiscall CellClass::GetTerrainFlag(CellClass *this, int a2)
{
  int result; // eax
  int v3; // ecx
  int v4; // esi
  int v5; // ecx

  result = (*(int (__thiscall **)(CellClass *))(this->mapCoords[0] + 156))(this); /*0x5471f2*/
  v3 = result; /*0x5471f8*/
  if ( result ) /*0x5471fc*/
  {
    v4 = *(_DWORD *)result * *(_DWORD *)(result + 4); /*0x547202*/
    result = a2 / v4; /*0x54720a*/
    v5 = *(_DWORD *)(v3 + 4 * (a2 % v4) + 16); /*0x54720d*/
    if ( v5 ) /*0x547213*/
      return (*(_DWORD *)(v5 + 36) >> 2) & 1; /*0x54721b*/
  }
  LOBYTE(result) = 0; /*0x547221*/
  return result; /*0x54721e*/
}



// ==== 0x00547230  TacticalClass::DrawCellOverlay  this=TacticalClass  sig=csp ====
void __thiscall sub_547230(int this, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  int v10; // edx
  int v11; // esi
  int v12; // eax
  int v13; // esi
  int v14; // edx
  int v15; // ecx
  int *v16; // ecx
  unsigned int v17; // eax
  int v18; // eax

  v10 = *(_DWORD *)(this + 660); /*0x547230*/
  v11 = g_TerrainTypeTable2; /*0x547237*/
  if ( (v10 < g_TerrainTypeTable2 || v10 >= g_TerrainTypeTable2 + 10) /*0x547260*/
    && ((v11 = dword_AA1098, v10 < dword_AA1098) || v10 >= dword_AA1098 + 10)
    || v10 - v11 == -1 )
  {
    if ( *(_BYTE *)(this + 737) ) /*0x547294*/
    {
      v16 = dword_AA102C; /*0x5472a2*/
      do /*0x5472c9*/
      {
        v17 = v10 - *v16; /*0x5472ab*/
        if ( v17 < 0x28 ) /*0x5472ad*/
          break; /*0x5472ad*/
        if ( v16 == &dword_AA103C ) /*0x5472ba*/
          return; /*0x5472ba*/
        ++v16; /*0x5472c0*/
      }
      while ( (int)v16 < (int)&dword_AA1040 ); /*0x5472c9*/
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
    v12 = 4 * (v10 - v11); /*0x547266*/
    if ( a2 == dword_ABC214[v12] ) /*0x54726f*/
    {
      v13 = dword_ABC210[v12]; /*0x547275*/
      if ( v13 ) /*0x54727d*/
      {
        v14 = dword_ABC21C[v12]; /*0x547289*/
        v15 = dword_ABC218[v12] + 30; /*0x54728f*/
LABEL_17:
        a4 = DSurface_ViewBounds + v15 + a4 - a6; /*0x5472f7*/
        a5 = dword_886FA4 + v14 + 15 + a5 - a7; /*0x54732c*/
        DrawToSurfaceSHP( /*0x547362*/
          a3,
          *(_DWORD *)dword_87F69C,
          (int)lpBuffer,
          v13 - 1,
          &a4,
          &a6,
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
    dword_ABAD34 = dword_AA105C[0]; /*0x547447*/
    dword_ABAD38 = dword_AA105C[0]; /*0x54744c*/
    dword_ABAD3C = dword_AA105C[0]; /*0x547451*/
    dword_ABAD40 = dword_AA105C[0]; /*0x547456*/
    dword_ABAD44 = dword_AA105C[0]; /*0x54745b*/
    dword_ABAD4C = dword_AA105C[0]; /*0x547460*/
    dword_ABAD50 = dword_AA105C[0]; /*0x547465*/
    dword_ABAD54 = dword_AA105C[0]; /*0x54746a*/
    dword_ABAD58 = dword_AA105C[0]; /*0x54746f*/
    dword_ABAD5C = dword_AA105C[0]; /*0x547474*/
    dword_ABAD64 = dword_AA105C[0]; /*0x547479*/
    dword_ABAD68 = dword_AA105C[0]; /*0x54747e*/
    dword_ABAD6C = dword_AA105C[0]; /*0x547483*/
    dword_ABAD70 = dword_AA105C[0]; /*0x547488*/
    dword_ABAD74 = dword_AA105C[0]; /*0x54748d*/
    dword_ABAD7C = dword_AA105C[0]; /*0x547492*/
    dword_ABAD80 = dword_AA105C[0]; /*0x547497*/
    dword_ABAD84 = dword_AA105C[0]; /*0x54749c*/
    dword_ABAD88 = dword_AA105C[0]; /*0x5474a1*/
    dword_ABAD8C = dword_AA105C[0]; /*0x5474a6*/
    dword_ABAD94 = dword_AA105C[0]; /*0x5474ab*/
    dword_ABAD98 = dword_AA105C[0]; /*0x5474b0*/
    dword_ABAD9C = dword_AA105C[0]; /*0x5474b5*/
    dword_ABADA0 = dword_AA105C[0]; /*0x5474ba*/
    dword_ABADA4 = dword_AA105C[0]; /*0x5474bf*/
    dword_ABADAC = dword_AA105C[0]; /*0x5474c4*/
    dword_ABADB0 = dword_AA105C[0]; /*0x5474c9*/
    dword_ABADB4 = dword_AA105C[0]; /*0x5474ce*/
    dword_ABADB8 = dword_AA105C[0]; /*0x5474d3*/
    dword_ABADBC = dword_AA105C[0]; /*0x5474d8*/
    dword_ABADC4 = dword_AA105C[0]; /*0x5474dd*/
    dword_ABADC8 = dword_AA105C[0]; /*0x5474e2*/
    dword_ABADCC = dword_AA105C[0]; /*0x5474e7*/
    dword_ABADD0 = dword_AA105C[0]; /*0x5474ec*/
    dword_ABADD4 = dword_AA105C[0]; /*0x5474f1*/
    dword_ABADDC = dword_AA105C[0]; /*0x5474f6*/
    dword_ABADE0 = dword_AA105C[0]; /*0x5474fb*/
    dword_ABADE4 = dword_AA105C[0]; /*0x547500*/
    dword_ABADE8 = dword_AA105C[0]; /*0x547505*/
    dword_ABADEC = dword_AA105C[0]; /*0x54750a*/
    dword_ABADF0 = 2147450879; /*0x54750f*/
    dword_ABADF4 = dword_AA105C[0]; /*0x547515*/
    dword_ABADF8 = dword_AA105C[0]; /*0x54751a*/
    dword_ABAE08 = 2147450879; /*0x547532*/
    dword_ABAE20 = 2147450879; /*0x547546*/
    dword_ABAE38 = 2147450879; /*0x54755a*/
    dword_ABAE50 = 2147450879; /*0x54756e*/
    dword_ABAE68 = 2147450879; /*0x547582*/
    dword_ABAE80 = 2147450879; /*0x547596*/
    dword_ABAE98 = 2147450879; /*0x5475aa*/
    dword_ABAEB0 = 2147450879; /*0x5475be*/
    dword_ABADFC = dword_AA105C[0]; /*0x5475cd*/
    dword_ABAE00 = dword_AA105C[0]; /*0x5475d2*/
    dword_ABAE04 = dword_AA105C[0]; /*0x5475d7*/
    dword_ABAE0C = dword_AA105C[0]; /*0x5475dc*/
    dword_ABAE10 = dword_AA105C[0]; /*0x5475e1*/
    dword_ABAE14 = dword_AA105C[0]; /*0x5475e6*/
    dword_ABAE18 = dword_AA105C[0]; /*0x5475eb*/
    dword_ABAE1C = dword_AA105C[0]; /*0x5475f0*/
    dword_ABAE24 = dword_AA105C[0]; /*0x5475f5*/
    dword_ABAE28 = dword_AA105C[0]; /*0x5475fa*/
    dword_ABAE2C = dword_AA105C[0]; /*0x5475ff*/
    dword_ABAE30 = dword_AA105C[0]; /*0x547604*/
    dword_ABAE34 = dword_AA105C[0]; /*0x547609*/
    dword_ABAE3C = dword_AA105C[0]; /*0x54760e*/
    dword_ABAE40 = dword_AA105C[0]; /*0x547613*/
    dword_ABAE44 = dword_AA105C[0]; /*0x547618*/
    dword_ABAE48 = dword_AA105C[0]; /*0x54761d*/
    dword_ABAE4C = dword_AA105C[0]; /*0x547622*/
    dword_ABAE54 = dword_AA105C[0]; /*0x547627*/
    dword_ABAE58 = dword_AA105C[0]; /*0x54762c*/
    dword_ABAE5C = dword_AA105C[0]; /*0x547631*/
    dword_ABAE60 = dword_AA105C[0]; /*0x547636*/
    dword_ABAE64 = dword_AA105C[0]; /*0x54763b*/
    dword_ABAE6C = dword_AA105C[0]; /*0x547640*/
    dword_ABAE70 = dword_AA105C[0]; /*0x547645*/
    dword_ABAE74 = dword_AA105C[0]; /*0x54764a*/
    dword_ABAE78 = dword_AA105C[0]; /*0x54764f*/
    dword_ABAE7C = dword_AA105C[0]; /*0x547654*/
    dword_ABAE84 = dword_AA105C[0]; /*0x547659*/
    dword_ABAE88 = dword_AA105C[0]; /*0x54765e*/
    dword_ABAE8C = dword_AA105C[0]; /*0x547663*/
    dword_ABAE90 = dword_AA105C[0]; /*0x547668*/
    dword_ABAE94 = dword_AA105C[0]; /*0x54766d*/
    dword_ABAE9C = dword_AA105C[0]; /*0x547672*/
    dword_ABAEA0 = dword_AA105C[0]; /*0x547677*/
    dword_ABAEA4 = dword_AA105C[0]; /*0x54767c*/
    dword_ABAEA8 = dword_AA105C[0]; /*0x547681*/
    dword_ABAEAC = dword_AA105C[0]; /*0x547686*/
    dword_ABAEB4 = dword_AA105C[0]; /*0x54768b*/
    dword_ABAEB8 = dword_AA105C[0]; /*0x547690*/
    dword_ABAEBC = dword_AA105C[0]; /*0x547695*/
    dword_ABAEC0 = dword_AA105C[0]; /*0x54769a*/
    dword_ABAEC4 = dword_AA105C[0]; /*0x54769f*/
    dword_ABAEC8 = 2147450879; /*0x5476a4*/
    dword_ABAECC = dword_AA105C[0]; /*0x5476aa*/
    dword_ABAED0 = dword_AA105C[0]; /*0x5476af*/
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
    dword_ABAED4 = dword_AA105C[0]; /*0x5477d3*/
    dword_ABAED8 = dword_AA105C[0]; /*0x5477d8*/
    dword_ABAEDC = dword_AA105C[0]; /*0x5477dd*/
    dword_ABAEE4 = dword_AA105C[0]; /*0x5477e2*/
    dword_ABAEE8 = dword_AA105C[0]; /*0x5477e7*/
    dword_ABAEEC = dword_AA105C[0]; /*0x5477ec*/
    dword_ABAEF0 = dword_AA105C[0]; /*0x5477f1*/
    dword_ABAEF4 = dword_AA105C[0]; /*0x5477f6*/
    dword_ABAEFC = dword_AA105C[0]; /*0x5477fb*/
    dword_ABAF00 = dword_AA105C[0]; /*0x547800*/
    dword_ABAF04 = dword_AA105C[0]; /*0x547805*/
    dword_ABAF08 = dword_AA105C[0]; /*0x54780a*/
    dword_ABAF0C = dword_AA105C[0]; /*0x54780f*/
    dword_ABAF20 = dword_AA105C[0]; /*0x547814*/
    dword_ABAF24 = dword_AA105C[0]; /*0x547819*/
    dword_ABAF38 = dword_AA105C[0]; /*0x54781e*/
    dword_ABAF3C = dword_AA105C[0]; /*0x547823*/
    dword_ABAF4C = dword_AA105C[0]; /*0x547828*/
    dword_ABAF50 = dword_AA105C[0]; /*0x54782d*/
    dword_ABAF54 = dword_AA105C[0]; /*0x547832*/
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
    dword_ABAF64 = dword_AA105C[0]; /*0x5479a1*/
    dword_ABAF68 = dword_AA105C[0]; /*0x5479a6*/
    dword_ABAF6C = dword_AA105C[0]; /*0x5479ab*/
    dword_ABAF7C = dword_AA105C[0]; /*0x5479b0*/
    dword_ABAF80 = dword_AA105C[0]; /*0x5479b5*/
    dword_ABAF84 = dword_AA105C[0]; /*0x5479ba*/
    dword_ABAF90 = dword_AA105C[0]; /*0x5479bf*/
    dword_ABAF94 = dword_AA105C[0]; /*0x5479c4*/
    dword_ABAF98 = dword_AA105C[0]; /*0x5479c9*/
    dword_ABAF9C = dword_AA105C[0]; /*0x5479ce*/
    dword_ABAFB4 = dword_AA105C[0]; /*0x5479d3*/
    dword_ABAFCC = dword_AA105C[0]; /*0x5479d8*/
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
    dword_ABAFE0 = dword_AA105C[0]; /*0x547afd*/
    dword_ABAFE4 = dword_AA105C[0]; /*0x547b02*/
    dword_ABAFEC = -196608; /*0x547b07*/
    dword_ABAFF8 = dword_AA105C[0]; /*0x547b0d*/
    dword_ABAFFC = dword_AA105C[0]; /*0x547b12*/
    dword_ABB008 = dword_AA105C[0]; /*0x547b17*/
    dword_ABB00C = dword_AA105C[0]; /*0x547b1c*/
    dword_ABB010 = dword_AA105C[0]; /*0x547b21*/
    dword_ABB014 = dword_AA105C[0]; /*0x547b26*/
    dword_ABB020 = dword_AA105C[0]; /*0x547b2b*/
    dword_ABB024 = dword_AA105C[0]; /*0x547b30*/
    dword_ABB028 = dword_AA105C[0]; /*0x547b35*/
    dword_ABB02C = dword_AA105C[0]; /*0x547b3a*/
    dword_ABB030 = 2147450879; /*0x547b3f*/
    dword_ABB038 = dword_AA105C[0]; /*0x547b45*/
    dword_ABB03C = dword_AA105C[0]; /*0x547b4a*/
    dword_ABB040 = dword_AA105C[0]; /*0x547b4f*/
    dword_ABB044 = dword_AA105C[0]; /*0x547b54*/
    dword_ABB04C = dword_AA105C[0]; /*0x547b59*/
    dword_ABB050 = dword_AA105C[0]; /*0x547b5e*/
    dword_ABB054 = dword_AA105C[0]; /*0x547b63*/
    dword_ABB058 = dword_AA105C[0]; /*0x547b68*/
    dword_ABB05C = dword_AA105C[0]; /*0x547b6d*/
    dword_ABB060 = 2147450879; /*0x547b72*/
    dword_ABB078 = 2147450879; /*0x547b86*/
    dword_ABB090 = 2147450879; /*0x547b9a*/
    dword_ABB0A8 = 2147450879; /*0x547bae*/
    dword_ABB0C0 = 2147450879; /*0x547bc2*/
    dword_ABB064 = dword_AA105C[0]; /*0x547bd6*/
    dword_ABB068 = dword_AA105C[0]; /*0x547bdb*/
    dword_ABB06C = dword_AA105C[0]; /*0x547be0*/
    dword_ABB070 = dword_AA105C[0]; /*0x547be5*/
    dword_ABB074 = dword_AA105C[0]; /*0x547bea*/
    dword_ABB07C = dword_AA105C[0]; /*0x547bef*/
    dword_ABB080 = dword_AA105C[0]; /*0x547bf4*/
    dword_ABB084 = dword_AA105C[0]; /*0x547bf9*/
    dword_ABB088 = dword_AA105C[0]; /*0x547bfe*/
    dword_ABB08C = dword_AA105C[0]; /*0x547c03*/
    dword_ABB094 = dword_AA105C[0]; /*0x547c08*/
    dword_ABB098 = dword_AA105C[0]; /*0x547c0d*/
    dword_ABB09C = dword_AA105C[0]; /*0x547c12*/
    dword_ABB0A0 = dword_AA105C[0]; /*0x547c17*/
    dword_ABB0A4 = dword_AA105C[0]; /*0x547c1c*/
    dword_ABB0AC = dword_AA105C[0]; /*0x547c21*/
    dword_ABB0B0 = dword_AA105C[0]; /*0x547c26*/
    dword_ABB0B4 = dword_AA105C[0]; /*0x547c2b*/
    dword_ABB0B8 = dword_AA105C[0]; /*0x547c30*/
    dword_ABB0BC = dword_AA105C[0]; /*0x547c35*/
    dword_ABB0C4 = dword_AA105C[0]; /*0x547c3a*/
    dword_ABB0C8 = dword_AA105C[0]; /*0x547c3f*/
    dword_ABB0CC = dword_AA105C[0]; /*0x547c44*/
    dword_ABB0D0 = dword_AA105C[0]; /*0x547c49*/
    dword_ABB0D4 = dword_AA105C[0]; /*0x547c4e*/
    dword_ABB0DC = dword_AA105C[0]; /*0x547c53*/
    dword_ABB0E0 = dword_AA105C[0]; /*0x547c58*/
    dword_ABB0E4 = dword_AA105C[0]; /*0x547c5d*/
    dword_ABB0E8 = dword_AA105C[0]; /*0x547c62*/
    dword_ABB0EC = dword_AA105C[0]; /*0x547c67*/
    dword_ABB0D8 = 2147450879; /*0x547c7f*/
    dword_ABB0F0 = 2147450879; /*0x547c85*/
    atexit(nullsub_20); /*0x547c8a*/
    a1 = v5; /*0x547c8f*/
  }
  v1 = *(_DWORD *)(a1 + 660); /*0x547c98*/
  v2 = dword_AA102C; /*0x547c9e*/
  while ( 1 ) /*0x547ca7*/
  {
    v3 = v1 - *v2; /*0x547ca7*/
    if ( v3 < 0x28 ) /*0x547ca9*/
      break; /*0x547ca9*/
    if ( (int)++v2 >= (int)&dword_AA1040 ) /*0x547cb9*/
      return 0; /*0x547cb9*/
  }
  return 24 * v3 + 11250996; /*0x547cbb*/
}



// ==== 0x00547CE0  nullsub_20  this=-  sig=ida-proto ====
void __cdecl nullsub_20()
{
  ; /*0x547ce0*/
}



// ==== 0x00547CF0  TerrainClass::GenerateTexture  this=TerrainClass  sig=csp ====
void __thiscall TerrainClass::GenerateTexture(
        TerrainClass *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        char a13,
        int a14,
        char a15,
        char a16,
        char a17,
        int a18)
{
  TerrainClass *v18; // esi
  int v20; // ebp
  int v21; // ecx
  int v22; // edx
  TerrainClass *referenceCount; // ecx
  int v24; // esi
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
  int v48; // ebx
  int v49; // ecx
  int v50; // eax
  int v51;... [63802 chars total]



// ==== 0x00549830  ObjectClass::method  this=ObjectClass  sig=csp ====
char __thiscall sub_549830(ObjectClass *this, int a2, void **a3, int a4, int a5)
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
  char *v16; // eax
  char *v17; // ebp
  char *v19; // edx
  int v20; // ecx
  char v21; // bl
  char v22; // bl
  char *v23; // eax
  char *v24; // edx
  int v25; // ebx
  int v26; // esi
  int v27; // [esp+1Ch] [ebp+4h]
  char *v28; // [esp+1Ch] [ebp+4h]
  int v29; // [esp+28h] [ebp+10h]

  memset(*a3, 0, a5 * a4); /*0x549859*/
  v6 = (_DWORD *)(*((int (__thiscall **)(ObjectClass *))this->AbstractClass + 39))(this); /*0x549866*/
  v7 = v6; /*0x54986c*/
  if ( v6 ) /*0x549870*/
  {
    v27 = a2 % (*v6 * v6[1]); /*0x549883*/
    v8 = v6[v27 + 4]; /*0x549887*/
    if ( !v8 ) /*0x54988d*/
      return 0; /*0x54988d*/
    v9 = (_DWORD *)(*((int (__thiscall **)(ObjectClass *))this->AbstractClass + 39))(this); /*0x549897*/
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
    v16 = (char *)*a3; /*0x5498f3*/
    v17 = (char *)*a3 + a5 * a4; /*0x5498f5*/
    if ( (*(_BYTE *)(v8 + 36) & 1) != 0 ) /*0x5498fa*/
    {
      v16 += a4 * (*(_DWORD *)(v8 + 4) - *(_DWORD *)(v8 + 24)); /*0x549907*/
      if ( v16 >= v17 ) /*0x54990b*/
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
        if ( v16 >= v17 ) /*0x549972*/
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
        if ( ++v16 >= v17 ) /*0x54995b*/
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
      if ( v23 >= v17 ) /*0x549999*/
        return 0; /*0x5499a4*/
      v24 = (char *)(v8 + *(_DWORD *)(v8 + 8)); /*0x5499ad*/
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
          if ( v23 >= v17 ) /*0x5499e1*/
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
          if ( v23 >= v17 ) /*0x5499ca*/
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
bool __thiscall IsometricTileTypeClass::GetTerrainType(IsometricTileTypeClass *this, _WORD *a2, int a3)
{
  IsometricTileClass *v4; // eax

  v4 = (IsometricTileClass *)__2_YAPAXI_Z(0xB0u); /*0x549aa8*/
  return v4 && IsometricTileClass::IsometricTileClass(v4, *((_DWORD *)this + 165), a2); /*0x549acd*/
}



// ==== 0x00549AE0  IsometricTileTypeClass::GetHeight  this=IsometricTileTypeClass  sig=csp ====
IsometricTileClass *__thiscall IsometricTileTypeClass::GetHeight(IsometricTileTypeClass *this, int a2)
{
  IsometricTileClass *v3; // eax

  if ( !*((_DWORD *)this + 41) && *((_BYTE *)this + 756) ) /*0x549aed*/
    MapClass::LoadFileData((MapClass *)this); /*0x549af7*/
  v3 = (IsometricTileClass *)__2_YAPAXI_Z(0xB0u); /*0x549b01*/
  if ( v3 ) /*0x549b0b*/
    return IsometricTileClass::IsometricTileClass(v3, *((_DWORD *)this + 165), dword_AA105C); /*0x549b1b*/
  else
    return 0; /*0x549b24*/
}



// ==== 0x00549B30  sub_549B30  this=-  sig=ida-proto ====
int sub_549B30()
{
  lpBuffer = 0; /*0x549b32*/
  dword_AA1060 = 0; /*0x549b37*/
  dword_AA1064 = 0; /*0x549b3c*/
  dword_AA1068 = 0; /*0x549b41*/
  dword_AA106C = 0; /*0x549b46*/
  return 0; /*0x549b4b*/
}



// ==== 0x00549B50  IsometricTileTypeClass::g_var_4f9ac2  this=IsometricTileTypeClass  sig=csp ====
_DWORD *__stdcall IsometricTileTypeClass::g_var_4f9ac2(IsometricTileTypeClass *this, _DWORD *a2)
{
  *(_DWORD *)this->__pad_0 = *a2; /*0x549b5d*/
  this->IsometricTileTypeClass_field_0x04 = a2[1]; /*0x549b62*/
  this->IsometricTileTypeClass_field_0x08 = a2[2]; /*0x549b69*/
  return this->__pad_0; /*0x549b65*/
}



// ==== 0x00549B70  IsometricTileTypeClass::ProcessPower  this=IsometricTileTypeClass  sig=csp ====
int __thiscall IsometricTileTypeClass::ProcessPower(IsometricTileTypeClass *this, int *a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // edx
  int v6; // eax

  AbstractTypeClass::ProcessPower((AbstractTypeClass *)this, a2); /*0x549b79*/
  Power::TimerProcess(*((_DWORD *)this + 165)); /*0x549b87*/
  Power::TimerProcess(*((_DWORD *)this + 166)); /*0x549b95*/
  Power::TimerProcess(*((_DWORD *)this + 167)); /*0x549ba3*/
  Power::TimerProcess(*((_DWORD *)this + 168)); /*0x549bb1*/
  Power::TimerProcess(*((_DWORD *)this + 173)); /*0x549bbf*/
  v3 = *((_DWORD *)this + 175); /*0x549bc4*/
  if ( v3 ) /*0x549bcc*/
  {
    v4 = (*(int (__stdcall **)(int))(*(_DWORD *)(v3 + 4) + 16))(v3 + 4); /*0x549bd5*/
    Power::TimerProcess(v4); /*0x549bdb*/
  }
  Power::TimerProcess(this->q02C); /*0x549be9*/
  Power::TimerProcess(*((_DWORD *)this + 177)); /*0x549bf7*/
  Power::TimerProcess(*((_DWORD *)this + 181)); /*0x549c05*/
  Power::TimerProcess(*((_DWORD *)this + 182)); /*0x549c13*/
  Power::TimerProcess(*((_DWORD *)this + 183)); /*0x549c21*/
  LOBYTE(v5) = *((_BYTE *)this + 736); /*0x549c26*/
  v6 = Power::FlagProcess((Power *)a2, v5); /*0x549c2f*/
  LOBYTE(v6) = *((_BYTE *)this + 737); /*0x549c34*/
  Power::FlagProcess((Power *)a2, v6); /*0x549c3d*/
  Power::TimerProcess(*((_DWORD *)this + 185)); /*0x549c4b*/
  Power::TimerProcess(*((_DWORD *)this + 186)); /*0x549c59*/
  Power::TimerProcess(*((_DWORD *)this + 187)); /*0x549c67*/
  return Power::TimerProcess(*((_DWORD *)this + 188)); /*0x549c7a*/
}



// ==== 0x00549C80  IsometricTileTypeClass::LoadTypeData  this=IsometricTileTypeClass  sig=csp ====
int __stdcall IsometricTileTypeClass::LoadTypeData(IsometricTileTypeClass *this, int a2)
{
  int i; // esi
  void (__thiscall ***v3)(_DWORD, int); // ecx
  int result; // eax
  int j; // eax

  for ( i = 0; i < *(int *)&stru_87F5F0.__pad_58[96]; *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[84] + 4 * i - 4) = 0 ) /*0x549c8a*/
  {
    v3 = *(void (__thiscall ****)(_DWORD, int))(*(_DWORD *)&stru_87F5F0.__pad_58[84] + 4 * i); /*0x549c91*/
    if ( v3 ) /*0x549c96*/
      (**v3)(v3, 1); /*0x549c9c*/
    ++i; /*0x549ca3*/
  }
  result = ObjectTypeClass::LoadCleanup((ObjectTypeClass *)this, a2); /*0x549cbf*/
  if ( result >= 0 ) /*0x549cc6*/
  {
    if ( this ) /*0x549cce*/
    {
      ObjectTypeClass::Construct((ObjectTypeClass *)this, (int)&a2); /*0x549cd8*/
      IsometricTileTypeClass::Constructor_0((IsometricTileTypeClass *)((char *)this + 676), 0, 0); /*0x549ce9*/
      *((_DWORD *)this + 169) = &DynamicVectorClass<unsigned short *>::`vftable'; /*0x549cee*/
      *((_DWORD *)this + 174) = 10; /*0x549cf4*/
      *((_DWORD *)this + 173) = 0; /*0x549cfb*/
      *(_DWORD *)this->__pad_0 = &IsometricTileTypeClass::`vftable'; /*0x549d02*/
      this->IsometricTileTypeClass_field_0x04 = (int)&IsometricTileTypeClass::`vftable'; /*0x549d08*/
      this->IsometricTileTypeClass_field_0x08 = (int)&IsometricTileTypeClass::`vftable'; /*0x549d0f*/
      this->IsometricTileTypeClass_field_0x0C = (int)&IsometricTileTypeClass::`vftable'; /*0x549d16*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)this + 175); /*0x549d2a*/
    for ( j = 0; j < *(int *)&stru_87F5F0.__pad_58[96]; *(_DWORD *)(*(_DWORD *)&stru_87F5F0.__pad_58[84] + 4 * j - 4) = 0 ) /*0x549d39*/
      ++j; /*0x549d41*/
    TerrainClass::InitTheatre((TerrainClass *)this); /*0x549d56*/
    return 0; /*0x549d5b*/
  }
  return result; /*0x549d5d*/
}



// ==== 0x00549D70  IsometricTileTypeClass::SaveToINI  this=IsometricTileTypeClass  sig=csp ====
int __stdcall IsometricTileTypeClass::SaveToINI(IsometricTileTypeClass *this, int a2, int a3)
{
  int result; // eax

  result = AbstractClass::SaveLoad_PrefixWrapper((AbstractClass *)this, a2, a3); /*0x549d7f*/
  if ( result >= 0 ) /*0x549d86*/
    return 0; /*0x549d88*/
  return result; /*0x549d8a*/
}



// ==== 0x00549D90  IsometricTileTypeClass::GetClassIdentifier  this=IsometricTileTypeClass  sig=csp ====
int __stdcall IsometricTileTypeClass::GetClassIdentifier(IsometricTileTypeClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x549d96*/
    return -2147467261; /*0x549d98*/
  *a2 = 1525862010; /*0x549da6*/
  a2[1] = 298976820; /*0x549dae*/
  a2[2] = 1610654892; /*0x549db7*/
  a2[3] = unk_7E95FC; /*0x549dc0*/
  return 0; /*0x549d9d*/
}



// ==== 0x00549DD0  IsometricTileTypeClass::GetTileIndex  this=IsometricTileTypeClass  sig=csp ====
int __thiscall IsometricTileTypeClass::GetTileIndex(IsometricTileTypeClass *this, int a2, int a3)
{
  int result; // eax

  if ( *((_DWORD *)this + 175) == a2 ) /*0x549ddc*/
    *((_DWORD *)this + 175) = 0; /*0x549dde*/
  result = *((_DWORD *)this + 178); /*0x549de8*/
  if ( result != -1 && *(_DWORD *)(FootClass_Array.?[3] + 4 * result) == a2 ) /*0x549e02*/
    *((_DWORD *)this + 178) = -1; /*0x549e04*/
  return result; /*0x549e0e*/
}



// ==== 0x00549E50  ObjectClass::Map_Get_549E50  this=ObjectClass  sig=csp ====
int __thiscall sub_549E50(int this, int a2, int a3)
{
  if ( !*(_DWORD *)(this + 164) && *(_BYTE *)(this + 756) ) /*0x549e5d*/
    MapClass::LoadFileData(this); /*0x549e67*/
  return *(_DWORD *)(*(_DWORD *)(this + 680) + 4 * a2) + 4 * a3; /*0x549e7a*/
}



// ==== 0x00549E90  TerrainClass::InitTheatre  this=TerrainClass  sig=csp ====
int __thiscall TerrainClass::InitTheatre(TerrainClass *this)
{
  int v2; // esi
  int v3; // eax
  _DWORD *v4; // ebx
  int v5; // edx
  char *v6; // edi
  int v7; // eax
  int result; // eax
  _DWORD *v9; // esi
  int v10; // eax
  _BYTE *v11; // esi
  _WORD *v12; // ebp
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // edx
  unsigned __int8 v17; // al
  unsigned __int8 v18; // dl
  unsigned __int8 v19; // cl
  unsigned __int8 v20; // dl
  float v21; // ebx
  _WORD *v22; // esi
  float v23; // ebp
  _BYTE *v24; // eax
  int v25; // edx
  int v26; // eax
  int v27; // edx
  _BYTE *v28; // eax
  unsigned __int8 v29; // dl
  int v30; // ecx
  int v31; // eax
  int v32; // eax
  int v33; // edx
  bool v34; // cc
  Color v35; // [esp+Ch] [ebp-2Ch] BYREF
  Color v36; // [esp+10h] [ebp-28h] BYREF
  __int16 v37; // [esp+14h] [ebp-24h]
  unsigned __int8 v38[4]; // [esp+18h] [ebp-20h] BYREF
  unsigned __int8 v39[4]; // [esp+1Ch] [ebp-1Ch] BYREF
  float v40; // [esp+20h] [ebp-18h]
  int v41; // [esp+24h] [ebp-14h]
  _DWORD *v42; // [esp+28h] [ebp-10h]
  Color v43; // [esp+2Ch] [ebp-Ch] BYREF
  Color v44; // [esp+30h] [ebp-8h] BYREF
  _DWORD *v45; // [esp+34h] [ebp-4h]

  v2 = 0; /*0x549e98*/
  v3 = *((_DWORD *)this + 173); /*0x549e9a*/
  v4 = (_DWORD *)this->?[2]; /*0x549ea0*/
  v45 = v4; /*0x549ea8*/
  if ( v3 > 0 ) /*0x549eac*/
  {
    do /*0x549ecd*/
    {
      if ( *(_DWORD *)(this->q0AA + 4 * v2) ) /*0x549eb4*/
        __3_YAXPAX_Z(*(void **)(this->q0AA + 4 * v2)); /*0x549ebc*/
      ++v2; /*0x549eca*/
    }
    while ( v2 < *((_DWORD *)this + 173) ); /*0x549ecd*/
  }
  v5 = *((_DWORD *)this + 169); /*0x549ecf*/
  v6 = (char *)this + 676; /*0x549ed5*/
  (*(void (__thiscall **)(char *))(v5 + 12))(v6); /*0x549edd*/
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
        v11 = (_BYTE *)*v9; /*0x549f11*/
        v12 = (_WORD *)v10; /*0x549f13*/
        v13 = *((_DWORD *)v6 + 2); /*0x549f15*/
        if ( *((_DWORD *)v6 + 4) < v13 /*0x549f3a*/
          || (v6[13] || !v13)
          && (v14 = *((_DWORD *)v6 + 5), v14 > 0)
          && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)v6 + 8))(v6, v13 + v14, 0) )
        {
          v15 = *((_DWORD *)v6 + 4); /*0x549f41*/
          v16 = *((_DWORD *)v6 + 1); /*0x549f44*/
          *((_DWORD *)v6 + 4) = v15 + 1; /*0x549f4a*/
          *(_DWORD *)(v16 + 4 * v15) = v12; /*0x549f4d*/
        }
        v17 = v11[45]; /*0x549f50*/
        v18 = v11[43]; /*0x549f56*/
        v38[1] = v11[44]; /*0x549f59*/
        v38[0] = v18; /*0x549f5d*/
        v38[2] = v17; /*0x549f61*/
        v19 = v11[47]; /*0x549f68*/
        v20 = v11[46]; /*0x549f6b*/
        v39[2] = v11[48]; /*0x549f6e*/
        v39[1] = v19; /*0x549f77*/
        v39[0] = v20; /*0x549f85*/
        Color::ScaleRGB(&v43, v38, 1.4); /*0x549f89*/
        Color::ScaleRGB(&v44, v39, 1.4); /*0x549f9e*/
        v21 = 0.0; /*0x549fa3*/
        v22 = v12; /*0x549fa5*/
        v40 = 0.0; /*0x549fa7*/
        do /*0x54a09f*/
        {
          v40 = (double)SLODWORD(v40) * 0.08333333333333333; /*0x549fbd*/
          v23 = v40; /*0x549fc1*/
          v24 = Color::Lerp2(&v35, (int)v38, (int)&v43, v40); /*0x549fcc*/
          BYTE1(v25) = 0; /*0x549fd4*/
          v37 = *(_WORD *)v24; /*0x549fd7*/
          LOBYTE(v25) = v24[2] >> g_BitMask_Red; /*0x549fee*/
          LOWORD(v24) = (unsigned __int8)(HIBYTE(v37) >> g_BitMask_Blue); /*0x54a004*/
          v26 = (_DWORD)v24 << g_BitMask_Green; /*0x54a008*/
          v27 = v26 | (v25 << g_BitShift_Blue); /*0x54a010*/
          LOWORD(v26) = (unsigned __int8)((unsigned __int8)v37 >> g_BitShift_Green_0); /*0x54a01e*/
          *v22 = (v26 << g_BitShift_Red) | v27; /*0x54a02f*/
          v28 = Color::Lerp2(&v36, (int)v39, (int)&v44, v23); /*0x54a037*/
          v37 = *(_WORD *)v28; /*0x54a042*/
          v22 += 2; /*0x54a050*/
          v29 = v28[2] >> g_BitMask_Red; /*0x54a05b*/
          LOWORD(v28) = (unsigned __int8)(HIBYTE(v37) >> g_BitMask_Blue); /*0x54a071*/
          ++LODWORD(v21); /*0x54a093*/
          *(v22 - 1) = ((unsigned __int8)((unsigned __int8)v37 >> g_BitShift_Green_0) << g_BitShift_Red) /*0x54a094*/
                     | ((_DWORD)v28 << g_BitMask_Green)
                     | (v29 << g_BitShift_Blue);
          v40 = v21; /*0x54a09b*/
        }
        while ( SLODWORD(v21) <= 12 ); /*0x54a09f*/
        v4 = v45; /*0x54a0a5*/
        v9 = v42; /*0x54a0a9*/
      }
      else
      {
        v30 = *((_DWORD *)v6 + 2); /*0x54a0af*/
        if ( *((_DWORD *)v6 + 4) < v30 /*0x54a0d4*/
          || (v6[13] || !v30)
          && (v31 = *((_DWORD *)v6 + 5), v31 > 0)
          && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)v6 + 8))(v6, v30 + v31, 0) )
        {
          v32 = *((_DWORD *)v6 + 4); /*0x54a0db*/
          v33 = *((_DWORD *)v6 + 1); /*0x54a0de*/
          *((_DWORD *)v6 + 4) = v32 + 1; /*0x54a0e4*/
          *(_DWORD *)(v33 + 4 * v32) = 0; /*0x54a0e7*/
        }
      }
      result = v41 + 1; /*0x54a0f8*/
      ++v9; /*0x54a0f9*/
      v34 = ++v41 < *v4 * v4[1]; /*0x54a0fc*/
      v42 = v9; /*0x54a102*/
    }
    while ( v34 ); /*0x54a106*/
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
int IsometricTileTypeClass::GetTypeIdentifier(IsometricTileTypeClass *this)
{
  return 18; /*0x54a145*/
}



// ==== 0x0054A150  IsometricTileTypeClass::GetObjectSize  this=IsometricTileTypeClass  sig=csp ====
int IsometricTileTypeClass::GetObjectSize(IsometricTileTypeClass *this)
{
  return 780; /*0x54a155*/
}



// ==== 0x0054A160  IsometricTileTypeClass::GetAuxField  this=IsometricTileTypeClass  sig=csp ====
int __thiscall IsometricTileTypeClass::GetAuxField(IsometricTileTypeClass *this)
{
  return *((_DWORD *)this + 165); /*0x54a166*/
}



// ==== 0x0054A170  IsometricTileTypeClass::ddtor  this=IsometricTileTypeClass  sig=csp ====
void *__thiscall IsometricTileTypeClass::ddtor(IsometricTileTypeClass *this, char a2)
{
  IsometricTileTypeClass::CleanupMembers((int)this); /*0x54a173*/
  if ( (a2 & 1) != 0 ) /*0x54a17d*/
    __3_YAXPAX_Z(this); /*0x54a180*/
  return this; /*0x54a18a*/
}



// ==== 0x0054A190  _DynamicVectorClass_PAG::ClearBuffer  this=DynamicVector  sig=csp ====
void __thiscall IsometricTileTypeClass::ClearBuffer(_DynamicVectorClass_PAG *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x54a196*/
  this->m_10 = 0; /*0x54a199*/
  if ( v2 && BYTE1(this->m_C) ) /*0x54a1a0*/
  {
    __3_YAXPAX_Z(v2); /*0x54a1a6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x54a1ae*/
  }
  BYTE1(this->m_C) = 0; /*0x54a1b1*/
  this->m_8 = 0; /*0x54a1b4*/
}



// ==== 0x0054A1C0  _DynamicVectorClass_PAG::PointerToIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall IsometricTileTypeClass::PointerToIndex(_DynamicVectorClass_PAG *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x54a1c0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x54a1d5*/
  else
    return 0; /*0x54a1c7*/
}



// ==== 0x0054A1E0  _VectorClass_PAG::Count  this=VectorClass  sig=csp ====
int __thiscall VectorClass_PAG::Count(_VectorClass_PAG *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x54a1ea*/
}



// ==== 0x0054A1F0  _DynamicVectorClass_PAUTileInsertType_IsometricTileTypeClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_TileInsertType_uint_sometricTileTypeClass::Destroy(
        _DynamicVectorClass_PAUTileInsertType_IsometricTileTypeClass *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x54a1f6*/
  this->m_10 = 0; /*0x54a1f9*/
  if ( v2 && BYTE1(this->m_C) ) /*0x54a200*/
  {
    __3_YAXPAX_Z(v2); /*0x54a206*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x54a20e*/
  }
  BYTE1(this->m_C) = 0; /*0x54a211*/
  this->m_8 = 0; /*0x54a214*/
}



// ==== 0x0054A220  _DynamicVectorClass_PAUTileInsertType_IsometricTileTypeClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_TileInsertType_uint_sometricTileTypeClass::GetItemIndex(
        _DynamicVectorClass_PAUTileInsertType_IsometricTileTypeClass *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x54a220*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x54a235*/
  else
    return 0; /*0x54a227*/
}



// ==== 0x0054A240  _VectorClass_PAUTileInsertType_IsometricTileTypeClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_TileInsertType_uint_sometricTileTypeClass::Get(
        _VectorClass_PAUTileInsertType_IsometricTileTypeClass *this,
        int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x54a24a*/
}



// ==== 0x0054A250  _VectorClass_PAG::Get  this=VectorClass  sig=csp ====
char __thiscall VectorClass_PAG::Get(_VectorClass_PAG *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x54a252*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x54a25d*/
  {
    v3 = 0; /*0x54a25f*/
    if ( m_8 <= 0 ) /*0x54a263*/
      return 1; /*0x54a283*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x54a265*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x54a26b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x54a274*/
    {
      ++v3; /*0x54a276*/
      ++v4; /*0x54a277*/
      if ( v3 >= m_8 ) /*0x54a27c*/
        return 1; /*0x54a27c*/
    }
  }
  return 0; /*0x54a27e*/
}



// ==== 0x0054A290  _VectorClass_PAG::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_PAG::Release(_VectorClass_PAG *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x54a29c*/
  {
    LOBYTE(this->m_C) = 0; /*0x54a2a6*/
    if ( a3 ) /*0x54a2ac*/
      v4 = a3; /*0x54a2c2*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x54a2be*/
    LOBYTE(this->m_C) = 1; /*0x54a2c6*/
    if ( v4 ) /*0x54a2ca*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x54a2d5*/
      {
        m_8 = this->m_8; /*0x54a2dc*/
        if ( a2 < m_8 ) /*0x54a2e1*/
          m_8 = a2; /*0x54a2e3*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x54a2e9*/
          ++i; /*0x54a2ee*/
        if ( BYTE1(this->m_C) ) /*0x54a2fb*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x54a306*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x54a30e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x54a317*/
      this->m_8 = a2; /*0x54a31f*/
      BYTE1(this->m_C) = a3 == 0; /*0x54a322*/
      return 1; /*0x54a328*/
    }
    else
    {
      return 0; /*0x54a2cf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAG *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x54a332*/
    return 1; /*0x54a338*/
  }
}



// ==== 0x0054A340  _VectorClass_PAG::Set  this=VectorClass  sig=csp ====
void __thiscall VectorClass_PAG::Set(_VectorClass_PAG *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x54a34d*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x54a353*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x54a35b*/
  }
  BYTE1(this->m_C) = 0; /*0x54a35e*/
  this->m_8 = 0; /*0x54a361*/
}



// ==== 0x0054A370  _VectorClass_PAG::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_PAG::GetSize(_VectorClass_PAG *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x54a370*/
    return 0; /*0x54a378*/
  m_8 = this->m_8; /*0x54a37e*/
  result = 0; /*0x54a381*/
  if ( m_8 <= 0 ) /*0x54a385*/
    return -1; /*0x54a39c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x54a38b*/
  {
    if ( ++result >= m_8 ) /*0x54a39a*/
      return -1; /*0x54a39a*/
  }
  return result; /*0x54a37a*/
}



// ==== 0x0054A3B0  _VectorClass_PAG::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_PAG::GetCapacity(_VectorClass_PAG *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x54a3b0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x54a3c5*/
  else
    return 0; /*0x54a3b7*/
}



// ==== 0x0054A3D0  _DynamicVectorClass_PAG::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall IsometricTileTypeClass::SetCapacity(_DynamicVectorClass_PAG *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x54a3dc*/
  {
    LOBYTE(this->m_C) = 0; /*0x54a3e2*/
    if ( a3 ) /*0x54a3e8*/
      v4 = a3; /*0x54a3fe*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x54a3fa*/
    LOBYTE(this->m_C) = 1; /*0x54a402*/
    if ( !v4 ) /*0x54a406*/
      return 0; /*0x54a47a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x54a408*/
    {
      m_8 = this->m_8; /*0x54a40f*/
      if ( a2 < m_8 ) /*0x54a414*/
        m_8 = a2; /*0x54a416*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x54a41c*/
        ++i; /*0x54a421*/
      if ( BYTE1(this->m_C) ) /*0x54a42e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x54a439*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x54a441*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x54a44a*/
    this->m_8 = a2; /*0x54a452*/
    BYTE1(this->m_C) = a3 == 0; /*0x54a455*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAG *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x54a45e*/
  }
  v7 = this->m_8; /*0x54a461*/
  if ( v7 < this->m_10 ) /*0x54a469*/
    this->m_10 = v7; /*0x54a46b*/
  return 1; /*0x54a46e*/
}



// ==== 0x0054A480  _DynamicVectorClass_PAG::FindItem  this=DynamicVector  sig=csp ====
int __thiscall IsometricTileTypeClass::FindItem(_DynamicVectorClass_PAG *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x54a480*/
  result = 0; /*0x54a483*/
  if ( m_10 <= 0 ) /*0x54a488*/
    return -1; /*0x54a49f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x54a48e*/
  {
    if ( ++result >= m_10 ) /*0x54a49d*/
      return -1; /*0x54a49d*/
  }
  return result; /*0x54a4a2*/
}



// ==== 0x0054A4B0  _VectorClass_PAUTileInsertType_IsometricTileTypeClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_TileInsertType_uint_sometricTileTypeClass::Add(
        _VectorClass_PAUTileInsertType_IsometricTileTypeClass *this,
        int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x54a4b2*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x54a4bd*/
  {
    v3 = 0; /*0x54a4bf*/
    if ( m_8 <= 0 ) /*0x54a4c3*/
      return 1; /*0x54a4e3*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x54a4c5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x54a4cb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x54a4d4*/
    {
      ++v3; /*0x54a4d6*/
      ++v4; /*0x54a4d7*/
      if ( v3 >= m_8 ) /*0x54a4dc*/
        return 1; /*0x54a4dc*/
    }
  }
  return 0; /*0x54a4de*/
}



// ==== 0x0054A4F0  _VectorClass_PAUTileInsertType_IsometricTileTypeClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_TileInsertType_uint_sometricTileTypeClass::Release(
        _VectorClass_PAUTileInsertType_IsometricTileTypeClass *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x54a4fc*/
  {
    LOBYTE(this->m_C) = 0; /*0x54a506*/
    if ( a3 ) /*0x54a50c*/
      v4 = a3; /*0x54a522*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x54a51e*/
    LOBYTE(this->m_C) = 1; /*0x54a526*/
    if ( v4 ) /*0x54a52a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x54a535*/
      {
        m_8 = this->m_8; /*0x54a53c*/
        if ( a2 < m_8 ) /*0x54a541*/
          m_8 = a2; /*0x54a543*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x54a549*/
          ++i; /*0x54a54e*/
        if ( BYTE1(this->m_C) ) /*0x54a55b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x54a566*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x54a56e*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x54a577*/
      this->m_8 = a2; /*0x54a57f*/
      BYTE1(this->m_C) = a3 == 0; /*0x54a582*/
      return 1; /*0x54a588*/
    }
    else
    {
      return 0; /*0x54a52f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAUTileInsertType_IsometricTileTypeClass *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x54a592*/
    return 1; /*0x54a598*/
  }
}



// ==== 0x0054A5A0  _VectorClass_PAUTileInsertType_IsometricTileTypeClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_TileInsertType_uint_sometricTileTypeClass::Remove(
        _VectorClass_PAUTileInsertType_IsometricTileTypeClass *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x54a5ad*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x54a5b3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x54a5bb*/
  }
  BYTE1(this->m_C) = 0; /*0x54a5be*/
  this->m_8 = 0; /*0x54a5c1*/
}



// ==== 0x0054A5D0  _VectorClass_PAUTileInsertType_IsometricTileTypeClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_TileInsertType_uint_sometricTileTypeClass::GetSize(
        _VectorClass_PAUTileInsertType_IsometricTileTypeClass *this,
        _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x54a5d0*/
    return 0; /*0x54a5d8*/
  m_8 = this->m_8; /*0x54a5de*/
  result = 0; /*0x54a5e1*/
  if ( m_8 <= 0 ) /*0x54a5e5*/
    return -1; /*0x54a5fc*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x54a5eb*/
  {
    if ( ++result >= m_8 ) /*0x54a5fa*/
      return -1; /*0x54a5fa*/
  }
  return result; /*0x54a5da*/
}



// ==== 0x0054A610  _VectorClass_PAUTileInsertType_IsometricTileTypeClass::LoadTypeData  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_TileInsertType_uint_sometricTileTypeClass::LoadTypeData(
        _VectorClass_PAUTileInsertType_IsometricTileTypeClass *this,
        int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x54a610*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x54a625*/
  else
    return 0; /*0x54a617*/
}



// ==== 0x0054A630  _DynamicVectorClass_PAUTileInsertType_IsometricTileTypeClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_TileInsertType_uint_sometricTileTypeClass::SetCapacity(
        _DynamicVectorClass_PAUTileInsertType_IsometricTileTypeClass *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x54a63c*/
  {
    LOBYTE(this->m_C) = 0; /*0x54a642*/
    if ( a3 ) /*0x54a648*/
      v4 = a3; /*0x54a65e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x54a65a*/
    LOBYTE(this->m_C) = 1; /*0x54a662*/
    if ( !v4 ) /*0x54a666*/
      return 0; /*0x54a6da*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x54a668*/
    {
      m_8 = this->m_8; /*0x54a66f*/
      if ( a2 < m_8 ) /*0x54a674*/
        m_8 = a2; /*0x54a676*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x54a67c*/
        ++i; /*0x54a681*/
      if ( BYTE1(this->m_C) ) /*0x54a68e*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x54a699*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x54a6a1*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x54a6aa*/
    this->m_8 = a2; /*0x54a6b2*/
    BYTE1(this->m_C) = a3 == 0; /*0x54a6b5*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAUTileInsertType_IsometricTileTypeClass *))(*(_DWORD *)this->__pad_0 /*0x54a6be*/
                                                                                           + 12))(this);
  }
  v7 = this->m_8; /*0x54a6c1*/
  if ( v7 < this->m_10 ) /*0x54a6c9*/
    this->m_10 = v7; /*0x54a6cb*/
  return 1; /*0x54a6ce*/
}



// ==== 0x0054A6E0  _DynamicVectorClass_PAUTileInsertType_IsometricTileTypeClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_TileInsertType_uint_sometricTileTypeClass::FindItemIndex(
        _DynamicVectorClass_PAUTileInsertType_IsometricTileTypeClass *this,
        _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x54a6e0*/
  result = 0; /*0x54a6e3*/
  if ( m_10 <= 0 ) /*0x54a6e8*/
    return -1; /*0x54a6ff*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x54a6ee*/
  {
    if ( ++result >= m_10 ) /*0x54a6fd*/
      return -1; /*0x54a6fd*/
  }
  return result; /*0x54a702*/
}



// ==== 0x0054A710  _VectorClass_PAG::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_PAG::QueryInterface(_VectorClass_PAG *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x54a713*/
  *(_DWORD *)this->__pad_0 = &VectorClass<unsigned short *>::`vftable'; /*0x54a716*/
  if ( v3 && BYTE1(this->m_C) ) /*0x54a720*/
  {
    __3_YAXPAX_Z(v3); /*0x54a728*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x54a730*/
  }
  BYTE1(this->m_C) = 0; /*0x54a73b*/
  this->m_8 = 0; /*0x54a741*/
  if ( (a2 & 1) != 0 ) /*0x54a748*/
    __3_YAXPAX_Z(this); /*0x54a74b*/
  return this->__pad_0; /*0x54a755*/
}



// ==== 0x0054A760  _DynamicVectorClass_PAG::Constructor  this=DynamicVector  sig=csp ====
_DWORD *__thiscall IsometricTileTypeClass::Constructor(_DynamicVectorClass_PAG *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x54a763*/
  *(_DWORD *)this->__pad_0 = &VectorClass<unsigned short *>::`vftable'; /*0x54a766*/
  if ( v3 && BYTE1(this->m_C) ) /*0x54a770*/
  {
    __3_YAXPAX_Z(v3); /*0x54a778*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x54a780*/
  }
  BYTE1(this->m_C) = 0; /*0x54a78b*/
  this->m_8 = 0; /*0x54a791*/
  if ( (a2 & 1) != 0 ) /*0x54a798*/
    __3_YAXPAX_Z(this); /*0x54a79b*/
  return this->__pad_0; /*0x54a7a5*/
}



// ==== 0x0054A7B0  _VectorClass_PAUTileInsertType_IsometricTileTypeClass::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_TileInsertType_uint_sometricTileTypeClass::QueryInterface(
        _VectorClass_PAUTileInsertType_IsometricTileTypeClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x54a7b3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<IsometricTileTypeClass::TileInsertType *>::`vftable'; /*0x54a7b6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x54a7c0*/
  {
    __3_YAXPAX_Z(v3); /*0x54a7c8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x54a7d0*/
  }
  BYTE1(this->m_C) = 0; /*0x54a7db*/
  this->m_8 = 0; /*0x54a7e1*/
  if ( (a2 & 1) != 0 ) /*0x54a7e8*/
    __3_YAXPAX_Z(this); /*0x54a7eb*/
  return this->__pad_0; /*0x54a7f5*/
}



// ==== 0x0054A800  _DynamicVectorClass_PAUTileInsertType_IsometricTileTypeClass::Constructor  this=DynamicVector  sig=csp ====
_DWORD *__thiscall VectorClass_ptr_TileInsertType_uint_sometricTileTypeClass::Constructor(
        _DynamicVectorClass_PAUTileInsertType_IsometricTileTypeClass *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x54a803*/
  *(_DWORD *)this->__pad_0 = &VectorClass<IsometricTileTypeClass::TileInsertType *>::`vftable'; /*0x54a806*/
  if ( v3 && BYTE1(this->m_C) ) /*0x54a810*/
  {
    __3_YAXPAX_Z(v3); /*0x54a818*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x54a820*/
  }
  BYTE1(this->m_C) = 0; /*0x54a82b*/
  this->m_8 = 0; /*0x54a831*/
  if ( (a2 & 1) != 0 ) /*0x54a838*/
    __3_YAXPAX_Z(this); /*0x54a83b*/
  return this->__pad_0; /*0x54a845*/
}



// ==== 0x0054A850  IsometricTileTypeClass::Constructor_0  this=VectorClass  sig=csp ====
_DWORD *__thiscall IsometricTileTypeClass::Constructor_0(IsometricTileTypeClass *this, int a2, int a3)
{
  this->IsometricTileTypeClass_field_0x04 = 0; /*0x54a85b*/
  this->IsometricTileTypeClass_field_0x08 = a2; /*0x54a85e*/
  LOBYTE(this->IsometricTileTypeClass_field_0x0C) = 1; /*0x54a861*/
  BYTE1(this->IsometricTileTypeClass_field_0x0C) = 0; /*0x54a865*/
  *(_DWORD *)this->__pad_0 = &VectorClass<unsigned short *>::`vftable'; /*0x54a868*/
  if ( a2 ) /*0x54a86e*/
  {
    if ( a3 ) /*0x54a876*/
    {
      this->IsometricTileTypeClass_field_0x04 = a3; /*0x54a878*/
      return this->__pad_0; /*0x54a87e*/
    }
    this->IsometricTileTypeClass_field_0x04 = __2_YAPAXI_Z(4 * a2); /*0x54a88d*/
    BYTE1(this->IsometricTileTypeClass_field_0x0C) = 1; /*0x54a890*/
  }
  return this->__pad_0; /*0x54a87d*/
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
int __thiscall sub_54A990(ObjectClass *this)
{
  ObjectClass *v1; // edi
  int v2; // ebp
  char v3; // al
  int i; // esi

  v1 = this; /*0x54a994*/
  v2 = 0; /*0x54a996*/
  if ( !LOBYTE(this->AbstractClass) ) /*0x54a998*/
  {
    do /*0x54a9a4*/
    {
      v3 = BYTE1(v1->AbstractClass); /*0x54a99d*/
      ++v2; /*0x54a9a0*/
      v1 = (ObjectClass *)((char *)v1 + 1); /*0x54a9a1*/
    }
    while ( !v3 ); /*0x54a9a4*/
  }
  for ( i = 0; i < 8; ++i ) /*0x54a9a6*/
  {
    if ( ((unsigned __int8)(1 << (i % 8)) & *((_BYTE *)&v1->AbstractClass + i / 8)) != 0 ) /*0x54a9c9*/
      break; /*0x54a9c9*/
  }
  return i + 8 * v2; /*0x54a9d4*/
}



// ==== 0x0054A9E0  ObjectClass::method_54A9E0  this=ObjectClass  sig=csp ====
int __thiscall sub_54A9E0(ObjectClass *this)
{
  ObjectClass *v1; // edi
  int v2; // ebp
  char v3; // al
  int i; // esi

  v1 = this; /*0x54a9e4*/
  v2 = 0; /*0x54a9e6*/
  if ( LOBYTE(this->AbstractClass) == 0xFF ) /*0x54a9eb*/
  {
    do /*0x54a9f4*/
    {
      v3 = BYTE1(v1->AbstractClass); /*0x54a9ed*/
      ++v2; /*0x54a9f0*/
      v1 = (ObjectClass *)((char *)v1 + 1); /*0x54a9f1*/
    }
    while ( v3 == -1 ); /*0x54a9f4*/
  }
  for ( i = 0; i < 8; ++i ) /*0x54a9f6*/
  {
    if ( ((unsigned __int8)(1 << (i % 8)) & *((_BYTE *)&v1->AbstractClass + i / 8)) == 0 ) /*0x54aa19*/
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
int __thiscall LocomotionClass::Update(JumpjetLocomotionClass *this)
{
  int v2; // ecx
  int v4; // [esp+Ch] [ebp-4h] BYREF

  LocomotionClass::Init((LocomotionClass *)this); /*0x54ac46*/
  this->DestinationCoords[0] = dword_ABC5A8; /*0x54ac59*/
  this->DestinationCoords[1] = dword_ABC5AC; /*0x54ac61*/
  v2 = dword_ABC5B0; /*0x54ac64*/
  this->IsMoving = 0; /*0x54ac6a*/
  *(_DWORD *)this->__pad_50 = 0; /*0x54ac6d*/
  this->DestinationCoords[2] = v2; /*0x54ac70*/
  FrameSnapshot::InitMax( /*0x54ac82*/
    (FrameSnapshot *)&this->__pad_50[4],
    *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 1036));
  this->CurrentHeight = 0; /*0x54ac87*/
  *(_DWORD *)&this->__pad_74[4] = 0; /*0x54ac8a*/
  *(_DWORD *)&this->DestinationReached = 0; /*0x54ac8d*/
  *(_DWORD *)this->__pad_74 = 0; /*0x54ac93*/
  *(_DWORD *)&this->__pad_74[8] = 0; /*0x54ac96*/
  *(_DWORD *)&this->__pad_74[12] = 0; /*0x54ac99*/
  *(_DWORD *)&this->__pad_89[3] = 0; /*0x54ac9f*/
  this->__pad_89[7] = 0; /*0x54aca5*/
  this->unknown_91 = 0; /*0x54acab*/
  this->Piggybackee = 0; /*0x54acb5*/
  this->LocomotionClass[0] = (int)&JumpjetLocomotionClass::`vftable'; /*0x54acc3*/
  this->LocomotionClass[1] = (int)&JumpjetLocomotionClass::`vftable'; /*0x54acc9*/
  this->TurnRate = (int)&JumpjetLocomotionClass::`vftable'; /*0x54acd0*/
  LOWORD(v4) = 0x4000; /*0x54acd7*/
  FacingClass::Update(&this->__pad_50[4], &v4); /*0x54acdc*/
  LOWORD(v4) = 0x4000; /*0x54ace8*/
  FacingClass::Set_SyncLog(&this->__pad_50[4], &v4); /*0x54aced*/
  return (int)this->LocomotionClass; /*0x54acf4*/
}



// ==== 0x0054AD30  JumpjetLocomotionClass::InitMovementParams  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::InitMovementParams(JumpjetLocomotionClass *this, int a2)
{
  int v2; // ebx
  JumpjetLocomotionClass *v3; // ebp
  int v4; // eax
  FrameSnapshot v6[3]; // [esp+10h] [ebp-18h] BYREF

  v2 = a2; /*0x54ad34*/
  v3 = this; /*0x54ad39*/
  v3->TurnRate = *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)a2 + 132))(a2) + 3440); /*0x54ad4f*/
  v3->Speed = *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)v2 + 132))(v2) + 3444); /*0x54ad64*/
  v3->Climb = *(float *)((*(int (__thiscall **)(int))(*(_DWORD *)v2 + 132))(v2) + 3448); /*0x54ad77*/
  v3->Crash = *(float *)((*(int (__thiscall **)(int))(*(_DWORD *)v2 + 132))(v2) + 3452); /*0x54ad8a*/
  v4 = *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)v2 + 132))(v2) + 3456); /*0x54ad9b*/
  if ( v4 <= 2 * dword_ABC5E8 ) /*0x54ada5*/
    v4 = 2 * dword_ABC5E8; /*0x54ada7*/
  v3->Height = v4; /*0x54ada9*/
  v3->Accel = *(float *)((*(int (__thiscall **)(int))(*(_DWORD *)v2 + 132))(v2) + 3460); /*0x54adbe*/
  v3->Wobbles = *(float *)((*(int (__thiscall **)(int))(*(_DWORD *)v2 + 132))(v2) + 3464); /*0x54add1*/
  v3->Deviation = *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)v2 + 132))(v2) + 3472); /*0x54ade4*/
  v3->NoWobbles = *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v2 + 132))(v2) + 3468); /*0x54adf5*/
  FrameSnapshot::InitMax(v6, v3->TurnRate); /*0x54ae00*/
  qmemcpy(v3->__pad_50, v6, 0x18u); /*0x54ae13*/
  LOWORD(this) = 0x4000; /*0x54ae21*/
  FacingClass::Update(v3->__pad_50, &this); /*0x54ae26*/
  LOWORD(this) = 0x4000; /*0x54ae33*/
  FacingClass::Set_SyncLog(v3->__pad_50, &this); /*0x54ae38*/
  return StreamClass::ResetPosition((LocomotionClass *)v3, v2); /*0x54ae44*/
}



// ==== 0x0054AE50  JumpjetLocomotionClass::SmallStub_54AE50  this=JumpjetLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::SmallStub_54AE50(JumpjetLocomotionClass *this)
{
  return this->DestinationCoords[2]; /*0x54ae57*/
}



// ==== 0x0054AE60  JumpjetLocomotionClass::GetMovementCoordinate_0  this=JumpjetLocomotionClass  sig=csp ====
_DWORD *__stdcall JumpjetLocomotionClass::GetMovementCoordinate_0(JumpjetLocomotionClass *this, _DWORD *a2)
{
  _DWORD *result; // eax
  int v3; // edx
  int v4; // esi
  _DWORD *v5; // edi

  if ( (*(unsigned __int8 (__stdcall **)(JumpjetLocomotionClass *))(this->LocomotionClass[0] + 16))(this) ) /*0x54ae69*/
  {
    result = a2; /*0x54ae70*/
    v3 = this->DestinationCoords[0]; /*0x54ae77*/
    v4 = this->DestinationCoords[1]; /*0x54ae7a*/
    v5 = a2; /*0x54ae7d*/
    *a2 = *(_DWORD *)&this->__pad_39[3]; /*0x54ae7f*/
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
char __stdcall JumpjetLocomotionClass::DispatchLocomotion(JumpjetLocomotionClass *this)
{
  double v1; // st7
  int v3; // eax
  int v4; // ecx
  int v5; // eax
  FootClass *Owner; // ecx
  int v7; // eax
  int *v8; // eax
  int v9; // edi
  FootClass *v10; // ecx
  int v11; // ebx
  int (__thiscall **ptr_0)(FootClass *, int *); // edx
  _DWORD *v13; // eax
  void *v14; // eax
  int *v15; // edx
  int v16; // eax
  int v17; // ecx
  int v18; // edx
  FootClass *v19; // eax
  int *location; // eax
  int *v21; // edx
  FootClass *v22; // eax
  int *v23; // eax
  int v24; // eax
  ObjectClass *v26; // [esp+28h] [ebp-24h]
  __int16 v27[2]; // [esp+2Ch] [ebp-20h] BYREF
  int v28; // [esp+30h] [ebp-1Ch]
  int v29; // [esp+34h] [ebp-18h] BYREF
  int v30; // [esp+38h] [ebp-14h]
  int v31; // [esp+3Ch] [ebp-10h]
  _BYTE v32[12]; // [esp+40h] [ebp-Ch] BYREF
  JumpjetLocomotionClass *thisa; // [esp+50h] [ebp+4h]

  v3 = (*(int (__stdcall **)(JumpjetLocomotionClass *))(this->LocomotionClass[0] + 116))(this); /*0x54aecb*/
  v4 = this->LocomotionClass[0]; /*0x54aece*/
  v28 = v3; /*0x54aed1*/
  if ( (*(unsigned __int8 (__stdcall **)(JumpjetLocomotionClass *))(v4 + 16))(this) /*0x54aedf*/
    || (*(unsigned __int8 (__stdcall **)(JumpjetLocomotionClass *))(this->LocomotionClass[0] + 128))(this) )
  {
    JumpjetLocomotion::UpdateFacing((JumpjetLocomotion *)((char *)this - 4)); /*0x54aef0*/
    if ( !this->?->? ) /*0x54af00*/
      return 0; /*0x54af00*/
    if ( HouseClass::IonSensitivesShouldBeOffline() ) /*0x54af0c*/
    {
      v5 = *(_DWORD *)&this->IsMoving; /*0x54af15*/
      if ( v5 ) /*0x54af1a*/
      {
        if ( v5 != 5 ) /*0x54af1f*/
          (*((void (__thiscall **)(FootClass *, _DWORD))this->?->TechnoClass + 247))(this->?, 0); /*0x54af28*/
      }
    }
    Owner = this->?; /*0x54af2e*/
    if ( Owner->? ) /*0x54af33*/
    {
      v7 = *(_DWORD *)&this->IsMoving; /*0x54af41*/
      if ( v7 != 5 && v7 != 6 && (*((int (__thiscall **)(FootClass *))Owner->TechnoClass + 114))(Owner) > 0 ) /*0x54af60*/
      {
        v8 = (int *)(*((int (__thiscall **)(FootClass *, int *))this->?->TechnoClass + 18))(this->?, &v29); /*0x54af71*/
        v9 = *v8; /*0x54af74*/
        v10 = this->?; /*0x54af76*/
        v11 = v8[1]; /*0x54af79*/
        ptr_0 = (int (__thiscall **)(FootClass *, int *))v10->TechnoClass; /*0x54af7c*/
        v31 = v8[2]; /*0x54af81*/
        v13 = (_DWORD *)ptr_0[18](v10, &v29); /*0x54af8a*/
        LOWORD(thisa) = *v13 / 256; /*0x54af9d*/
        HIWORD(thisa) = v13[1] / 256; /*0x54afb5*/
        *(_DWORD *)v27 = thisa; /*0x54afbe*/
        v14 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v27); /*0x54afc8*/
        v15 = (int *)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)v14 + 72))(v14, v32); /*0x54afdc*/
        v16 = *v15; /*0x54afde*/
        v17 = v15[1]; /*0x54afe8*/
        v18 = v15[2]; /*0x54afeb*/
        if ( !this->?->isAttackedByLocomotor || v9 == v16 && v11 == v17 ) /*0x54aff6*/
        {
          *(_DWORD *)&this->__pad_74[8] = -5; /*0x54b006*/
          *(_DWORD *)&this->IsMoving = 5; /*0x54b00d*/
          if ( (*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 11))(this->?) == 15 ) /*0x54b01f*/
            (*((void (__thiscall **)(FootClass *, int, _DWORD, _DWORD))this->?->TechnoClass + 342))(this->?, 34, 0, 0); /*0x54b02c*/
        }
        else
        {
          *(_DWORD *)&this->__pad_39[3] = v16; /*0x54affb*/
          this->DestinationCoords[0] = v17; /*0x54affe*/
          this->DestinationCoords[1] = v18; /*0x54b001*/
        }
      }
    }
    switch ( *(_DWORD *)&this->IsMoving ) /*0x54b03c*/
    {
      case 0: /*0x54b03c*/
        HouseClass::Set((HouseClass *)((char *)this - 4)); /*0x54b046*/
        break; /*0x54b04b*/
      case 1: /*0x54b03c*/
        UpdateFootMovement(v26, v1); /*0x54b050*/
        break; /*0x54b055*/
      case 2: /*0x54b03c*/
        UpdateFootMoveToState(v26, v1); /*0x54b05a*/
        break; /*0x54b05f*/
      case 3: /*0x54b03c*/
        MovementClass::CalcSpeed((MovementClass *)v26, v1); /*0x54b064*/
        break; /*0x54b069*/
      case 4: /*0x54b03c*/
        BuildingPlacement::ProcessBuildingPlacementAction((BuildingPlacement *)((char *)this - 4)); /*0x54b06e*/
        break; /*0x54b073*/
      case 5: /*0x54b03c*/
        JumpjetLocomotion::Land((JumpjetLocomotion *)((char *)this - 4)); /*0x54b078*/
        break; /*0x54b078*/
      default:
        break;
    }
    v19 = this->?; /*0x54b07d*/
    if ( v19->? ) /*0x54b080*/
    {
      if ( (Object *)v19->? != dword_A83D4C ) /*0x54b09c*/
      {
        location = v19->?; /*0x54b09e*/
        v29 = *location; /*0x54b0a5*/
        v30 = location[1]; /*0x54b0ac*/
        v31 = location[2]; /*0x54b0bd*/
        if ( (unsigned __int8)Cell::IsPassable(&v29) /*0x54b0fe*/
          || ((int)dword_A8B230->ptr_0 & 0x1000) != 0
          && (v21 = this->?->?, v29 = *v21, v30 = v21[1], v31 = v21[2], (unsigned __int8)Game::Stub3((int)&v29)) )
        {
          (*((void (__thiscall **)(FootClass *))this->?->TechnoClass + 84))(this->?); /*0x54b10c*/
        }
      }
    }
    v22 = this->?; /*0x54b112*/
    if ( !v22->? && (Object *)v22->? != dword_A83D4C ) /*0x54b12d*/
    {
      v23 = v22->?; /*0x54b12f*/
      v29 = *v23; /*0x54b136*/
      v30 = v23[1]; /*0x54b13d*/
      v31 = v23[2]; /*0x54b14e*/
      if ( !(unsigned __int8)Cell::IsPassable(&v29) ) /*0x54b152*/
        (*((void (__thiscall **)(FootClass *, Object *))this->?->TechnoClass + 102))(this->?, dword_A83D4C); /*0x54b166*/
    }
  }
  if ( this->?->? ) /*0x54b16f*/
  {
    v24 = (*(int (__stdcall **)(JumpjetLocomotionClass *))(this->LocomotionClass[0] + 116))(this); /*0x54b17c*/
    if ( v24 != v28 ) /*0x54b183*/
      Targeting::Readd(&this->?->TechnoClass); /*0x54b18e*/
  }
  return 0; /*0x54b195*/
}



// ==== 0x0054B1C0  JumpjetLocomotionClass::SmoothObjectPlacement  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::SmoothObjectPlacement(JumpjetLocomotionClass *this, int a2, int a3, int a4)
{
  JumpjetLocomotionClass *v4; // esi
  int v5; // edi
  int v6; // ebp
  int result; // eax
  JumpjetLocomotionClass **v8; // eax
  unsigned int v9; // edx
  int *v10; // eax
  int v11; // edi
  int v12; // ebx
  int v13; // ebp
  FootClass *Owner; // ecx
  FootClass *v15; // ecx
  int v16; // [esp+10h] [ebp-10h] BYREF
  int v17[3]; // [esp+14h] [ebp-Ch] BYREF

  v4 = this; /*0x54b1cc*/
  if ( (*(_DWORD *)&this->__pad_39[3] != dword_ABC5A8 /*0x54b1fe*/
     || this->DestinationCoords[0] != dword_ABC5AC
     || this->DestinationCoords[1] != dword_ABC5B0)
    && *(_DWORD *)&this->IsMoving
    && this->__pad_89[3] )
  {
    (*((void (__thiscall **)(FootClass *, char *))this->?->TechnoClass + 61))(this->?, &this->__pad_39[3]); /*0x54b20e*/
    v4->__pad_89[3] = 0; /*0x54b214*/
  }
  v5 = a2; /*0x54b21e*/
  v6 = a3; /*0x54b222*/
  result = a4; /*0x54b22b*/
  *(_DWORD *)&v4->__pad_39[3] = a2; /*0x54b22f*/
  v4->DestinationCoords[0] = v6; /*0x54b231*/
  v4->DestinationCoords[1] = result; /*0x54b234*/
  if ( v5 == dword_ABC5A8 && v6 == dword_ABC5AC && result == dword_ABC5B0 ) /*0x54b24f*/
  {
    LOBYTE(v4->DestinationCoords[2]) = 0; /*0x54b4c1*/
  }
  else
  {
    if ( (*((int (__thiscall **)(FootClass *))v4->?->TechnoClass + 11))(v4->?) != 1 || *((_BYTE *)v4->?[1].? + 3434) ) /*0x54b26b*/
    {
      v17[2] = a4; /*0x54b2e4*/
      LOWORD(this) = v5 / 256; /*0x54b2fd*/
      a2 = 0; /*0x54b30b*/
      HIWORD(this) = v6 / 256; /*0x54b31a*/
      v17[0] = v5; /*0x54b33d*/
      v17[1] = v6; /*0x54b341*/
      v9 = (unsigned int)Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v17)->flags[0] >> 8; /*0x54b358*/
      LOBYTE(v9) = v9 & 1; /*0x54b35b*/
      v8 = (JumpjetLocomotionClass **)LayerClass::Pathfinding_Find( /*0x54b36f*/
                                        &stru_87F5F0.__pad_58[416],
                                        v9,
                                        &v16,
                                        (__int16 *)&this,
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
      LOWORD(this) = v5 / 256; /*0x54b28c*/
      a2 = 0; /*0x54b29a*/
      HIWORD(this) = v6 / 256; /*0x54b2a9*/
      v8 = (JumpjetLocomotionClass **)LayerClass::Pathfinding_Find( /*0x54b2d9*/
                                        &stru_87F5F0.__pad_58[416],
                                        (int)&v16,
                                        &v16,
                                        (__int16 *)&this,
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
    this = *v8; /*0x54b37d*/
    a2 = ((__int16)this << 8) + 128; /*0x54b393*/
    a3 = (SHIWORD(this) << 8) + 128; /*0x54b3a4*/
    a4 = 0; /*0x54b3a8*/
    v10 = JumpjetLocomotionClass::ProcessLanding((JumpjetLocomotionClass *)((char *)v4 - 4), v17, &a2); /*0x54b3b0*/
    v11 = *v10; /*0x54b3b5*/
    v12 = v10[1]; /*0x54b3b7*/
    v13 = v10[2]; /*0x54b3ba*/
    result = dword_ABC5A8; /*0x54b3bd*/
    if ( v11 != dword_ABC5A8 || v12 != dword_ABC5AC || v13 != dword_ABC5B0 ) /*0x54b3d4*/
    {
      if ( (*((int (__thiscall **)(FootClass *))v4->?->TechnoClass + 11))(v4->?) != 1 /*0x54b413*/
        || !*(_BYTE *)((*((int (__thiscall **)(FootClass *))v4->?->TechnoClass + 33))(v4->?) + 3434)
        && (Owner = v4->?, Owner->? != 7)
        && (*((int (__thiscall **)(FootClass *))Owner->TechnoClass + 97))(Owner) != 7 )
      {
        *(_DWORD *)&v4->__pad_39[3] = v11; /*0x54b418*/
        v4->DestinationCoords[0] = v12; /*0x54b41b*/
        v4->DestinationCoords[1] = v13; /*0x54b41e*/
      }
      v15 = v4->?; /*0x54b421*/
      if ( v15->? != 7 && (*((int (__thiscall **)(FootClass *))v15->TechnoClass + 97))(v15) != 7 ) /*0x54b438*/
        v4->?->movementDestination = (AbstractClass *)Coord::To_Cell( /*0x54b44b*/
                                                        (Coord *)&stru_87F5F0.__pad_58[416],
                                                        &v4->__pad_39[3]);
      LOBYTE(v4->DestinationCoords[2]) = 1; /*0x54b451*/
      result = *(_DWORD *)&v4->IsMoving; /*0x54b455*/
      if ( result == 4 ) /*0x54b45b*/
      {
        *(_DWORD *)&v4->IsMoving = 1; /*0x54b45d*/
        *(_DWORD *)&v4->__pad_74[8] = v4->Height; /*0x54b467*/
        v4->?->? = 0; /*0x54b46d*/
        result = (*((int (__thiscall **)(FootClass *))v4->?->TechnoClass + 97))(v4->?); /*0x54b479*/
        if ( result == 16 ) /*0x54b482*/
        {
          (*((void (__thiscall **)(FootClass *, int, int))v4->?->TechnoClass + 122))(v4->?, 5, 1); /*0x54b48d*/
          v4->?->? = 1; /*0x54b496*/
          result = (*((int (__thiscall **)(FootClass *))v4->?->TechnoClass + 128))(v4->?); /*0x54b4a2*/
          if ( (_BYTE)result ) /*0x54b4aa*/
            return (*((int (__thiscall **)(FootClass *))v4->?->TechnoClass + 123))(v4->?); /*0x54b4b1*/
        }
      }
    }
  }
  return result; /*0x54b4b7*/
}



// ==== 0x0054B4D0  JumpjetLocomotionClass::MoveToDestination  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::MoveToDestination(JumpjetLocomotionClass *this)
{
  int result; // eax
  JumpjetLocomotionClass *v2; // edi
  char *v3; // ebp
  FootClass *Owner; // esi
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  int *v9; // ecx
  int v10; // [esp-2Ch] [ebp-50h]
  __int16 v11[2]; // [esp+Ch] [ebp-18h] BYREF
  JumpjetLocomotionClass *v12; // [esp+10h] [ebp-14h] BYREF
  int v13; // [esp+14h] [ebp-10h] BYREF
  int v14; // [esp+18h] [ebp-Ch] BYREF
  int v15; // [esp+1Ch] [ebp-8h]
  int GroundHeight; // [esp+20h] [ebp-4h]

  result = dword_A8E7AC; /*0x54b4d0*/
  if ( !dword_A8E7AC ) /*0x54b4dd*/
  {
    v2 = this; /*0x54b4e3*/
    result = LOBYTE(this->DestinationCoords[2]); /*0x54b4e7*/
    if ( (_BYTE)result ) /*0x54b4ec*/
    {
      v3 = &this->__pad_39[3]; /*0x54b4fb*/
      if ( (*(_DWORD *)&this->__pad_39[3] != dword_ABC5A8 /*0x54b521*/
         || this->DestinationCoords[0] != dword_ABC5AC
         || this->DestinationCoords[1] != dword_ABC5B0)
        && *(_DWORD *)&this->IsMoving
        && this->__pad_89[3] )
      {
        (*((void (__thiscall **)(FootClass *, char *))this->?->TechnoClass + 61))(this->?, &this->__pad_39[3]); /*0x54b531*/
        v2->__pad_89[3] = 0; /*0x54b537*/
      }
      Owner = v2->?; /*0x54b541*/
      v5 = Owner->?[0]; /*0x54b54f*/
      v6 = Owner->?[1]; /*0x54b551*/
      GroundHeight = Owner->?[2]; /*0x54b557*/
      LOWORD(this) = v5 / 256; /*0x54b567*/
      HIWORD(this) = v6 / 256; /*0x54b57e*/
      v12 = this; /*0x54b587*/
      this = 0; /*0x54b59b*/
      v10 = *(_DWORD *)((*((int (__thiscall **)(FootClass *))Owner->TechnoClass + 33))(Owner) + 1460); /*0x54b5be*/
      v7 = (*((int (__thiscall **)(FootClass *))Owner->TechnoClass + 33))(Owner); /*0x54b5c3*/
      v8 = *LayerClass::Pathfinding_Find( /*0x54b5e4*/
              &stru_87F5F0.__pad_58[416],
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
              (__int16 *)&this,
              0,
              0);
      *(_DWORD *)v11 = v8; /*0x54b5ed*/
      if ( v8 == dword_ABC588 ) /*0x54b5f6*/
      {
        v9 = (int *)v2->?; /*0x54b68f*/
        result = (int)(v9 + 27); /*0x54b695*/
        if ( v9[27] > 0 ) /*0x54b69a*/
        {
          (*(void (__stdcall **)(int *, _DWORD, _DWORD, _DWORD, int, int, _DWORD))(*v9 + 364))( /*0x54b6b6*/
            v9 + 27,
            0,
            *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4008),
            0,
            1,
            1,
            0);
          result = dword_ABC5A8; /*0x54b6bc*/
          *(_DWORD *)v3 = dword_ABC5A8; /*0x54b6c1*/
          v2->DestinationCoords[0] = dword_ABC5AC; /*0x54b6ca*/
          v2->DestinationCoords[1] = dword_ABC5B0; /*0x54b6d3*/
        }
      }
      else
      {
        v14 = ((__int16)v8 << 8) + 128; /*0x54b61e*/
        v15 = (SHIWORD(v8) << 8) + 128; /*0x54b626*/
        GroundHeight = 0; /*0x54b630*/
        GroundHeight = Cell::GetGroundHeight(&v14); /*0x54b643*/
        if ( (*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v11) + 80) & 0x100) != 0 ) /*0x54b655*/
          GroundHeight += dword_ABC5DC; /*0x54b663*/
        return (*(int (__stdcall **)(JumpjetLocomotionClass *, int, int, int))(v2->LocomotionClass[0] + 68))( /*0x54b683*/
                 v2,
                 v14,
                 v15,
                 GroundHeight);
      }
    }
  }
  return result; /*0x54b686*/
}



// ==== 0x0054B6E0  JumpjetLocomotionClass::SynchronizeFacingDirection_0  this=JumpjetLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::SynchronizeFacingDirection_0(JumpjetLocomotionClass *this, int a2)
{
  return FacingClass::Set_SyncLog((char *)this->?->?, &a2); /*0x54b6ff*/
}



// ==== 0x0054B710  JumpjetLocomotionClass::GetClassIdentifier  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::GetClassIdentifier(JumpjetLocomotionClass *this, _DWORD *a2)
{
  if ( !a2 ) /*0x54b716*/
    return -2147467261; /*0x54b718*/
  *(IID *)a2 = g_CLSID_JumpjetLocomotion; /*0x54b726*/
  a2[3] = unk_7E9ACC; /*0x54b740*/
  return 0; /*0x54b71d*/
}



// ==== 0x0054B750  JumpjetLocomotionClass::InitClass  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::InitClass(JumpjetLocomotionClass *this, int *pStm)
{
  int *v2; // edi
  int v3; // ebx
  ILocomotion *Piggybackee; // eax
  LPVOID *p_Piggybackee; // esi

  v2 = pStm; /*0x54b757*/
  v3 = SwizzleManager::SaveLoad(this->LocomotionClass, pStm); /*0x54b762*/
  if ( v3 < 0 ) /*0x54b766*/
    return v3; /*0x54b766*/
  if ( this ) /*0x54b76a*/
  {
    this->Piggybackee = 0; /*0x54b76c*/
    this->LocomotionClass[0] = (int)&JumpjetLocomotionClass::`vftable'; /*0x54b776*/
    this->LocomotionClass[1] = (int)&JumpjetLocomotionClass::`vftable'; /*0x54b77c*/
    this->TurnRate = (int)&JumpjetLocomotionClass::`vftable'; /*0x54b783*/
  }
  (*(void (__stdcall **)(int *, int **, int, _DWORD))(*v2 + 12))(v2, &pStm, 1, 0); /*0x54b796*/
  if ( !(_BYTE)pStm ) /*0x54b79f*/
    return v3; /*0x54b7d1*/
  Piggybackee = this->Piggybackee; /*0x54b7a1*/
  p_Piggybackee = (LPVOID *)&this->Piggybackee; /*0x54b7a7*/
  if ( Piggybackee ) /*0x54b7af*/
    (*(void (__stdcall **)(ILocomotion *))(*(_DWORD *)Piggybackee + 8))(Piggybackee); /*0x54b7b4*/
  *p_Piggybackee = 0; /*0x54b7be*/
  return OleLoadFromStream((LPSTREAM)v2, &IID_ILocomotion, p_Piggybackee); /*0x54b7ca*/
}



// ==== 0x0054B7E0  JumpjetLocomotionClass::LoadFromStream  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::LoadFromStream(JumpjetLocomotionClass *this, int *pPStm, int a3)
{
  IStream *v3; // esi
  JumpjetLocomotionClass *v4; // edi
  int IPersistStream; // ebx
  int v6; // ecx
  ILocomotion *Piggybackee; // eax
  int v8; // edi
  JumpjetLocomotionClass *v9; // ebx
  HRESULT v10; // esi
  int v12; // edx

  v3 = (IStream *)pPStm; /*0x54b7e6*/
  v4 = this; /*0x54b7eb*/
  IPersistStream = LoadIPersistStream((LocomotionClass *)this, pPStm, a3); /*0x54b7f7*/
  if ( IPersistStream < 0 ) /*0x54b7fb*/
    return IPersistStream; /*0x54b7fb*/
  if ( !v4->Piggybackee ) /*0x54b809*/
  {
    v12 = *(_DWORD *)v3->__pad_0; /*0x54b8a9*/
    LOBYTE(a3) = 0; /*0x54b8b5*/
    (*(void (__stdcall **)(IStream *, int *, int, _DWORD))(v12 + 16))(v3, &a3, 1, 0); /*0x54b8ba*/
    return IPersistStream; /*0x54b8be*/
  }
  v6 = *(_DWORD *)v3->__pad_0; /*0x54b80f*/
  LOBYTE(a3) = 1; /*0x54b81b*/
  (*(void (__stdcall **)(IStream *, int *, int, _DWORD))(v6 + 16))(v3, &a3, 1, 0); /*0x54b820*/
  Piggybackee = v4->Piggybackee; /*0x54b823*/
  pPStm = 0; /*0x54b829*/
  if ( Piggybackee ) /*0x54b833*/
  {
    v8 = (**(int (__stdcall ***)(ILocomotion *, void *, JumpjetLocomotionClass **))Piggybackee)( /*0x54b844*/
           Piggybackee,
           &unk_820270,
           &this);
    if ( v8 >= 0 ) /*0x54b848*/
    {
      v9 = this; /*0x54b861*/
      if ( pPStm ) /*0x54b867*/
        (*(void (__stdcall **)(int *))(*pPStm + 8))(pPStm); /*0x54b86c*/
      pPStm = (int *)v9; /*0x54b86f*/
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
int __stdcall JumpjetLocomotionClass::ConvertCoordToCell_0(JumpjetLocomotionClass *this)
{
  int v1; // edi
  FootClass *Owner; // eax
  int *location; // eax
  _DWORD v5[3]; // [esp+8h] [ebp-Ch] BYREF

  v1 = (*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 114))(this->?); /*0x54b8e4*/
  Owner = this->?; /*0x54b8e6*/
  if ( !Owner->? ) /*0x54b8e9*/
  {
    location = Owner->?; /*0x54b8f3*/
    v5[0] = *location; /*0x54b8fa*/
    v5[1] = location[1]; /*0x54b906*/
    v5[2] = location[2]; /*0x54b912*/
    if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v5)->flags[0] & 0x100) != 0 /*0x54b932*/
      && v1 >= dword_ABC5DC
      && !this->?->? )
    {
      v1 -= dword_ABC5DC; /*0x54b93c*/
    }
  }
  if ( !(*((unsigned __int8 (__thiscall **)(FootClass *))this->?->TechnoClass + 21))(this->?) ) /*0x54b943*/
    return 2; /*0x54b94b*/
  if ( v1 ) /*0x54b959*/
    return (v1 >= this->Height) + 3; /*0x54b973*/
  return 2; /*0x54b94a*/
}



// ==== 0x0054B980  HouseClass::Set  this=HouseClass  sig=csp ====
char __thiscall HouseClass::Set(HouseClass *this)
{
  _DWORD *v2; // eax
  _DWORD *Value; // eax
  int v4; // ecx
  int v6; // [esp+Ch] [ebp-4h] BYREF

  LOBYTE(v2) = (*((int (__stdcall **)(void **))this->? + 4))(&this->?); /*0x54b98b*/
  if ( (_BYTE)v2 ) /*0x54b990*/
  {
    (*(void (__thiscall **)(void *, _DWORD, int))(*(_DWORD *)this->? + 1348))(this->?, 0, 1072693248); /*0x54b9a4*/
    Value = ProgressTimer::GetValue((ProgressTimer *)((char *)this->? + 904), &v6); /*0x54b9b8*/
    FacingClass::Set_SyncLog((char *)&this->repairStationsCount, Value); /*0x54b9c1*/
    v4 = this->relatedTags[0]; /*0x54b9c6*/
    this->absorbersCapacity = 0; /*0x54b9cc*/
    this->bunkersCount = 0; /*0x54b9cf*/
    this->bunkers[0] = 0; /*0x54b9d2*/
    this->bunkersCapacity = 0; /*0x54b9d5*/
    this->occupiables[0] = v4; /*0x54b9d8*/
    LOBYTE(v2) = HouseClass::IonSensitivesShouldBeOffline(); /*0x54b9e4*/
    if ( !(_BYTE)v2 ) /*0x54b9ec*/
    {
      v2 = (_DWORD *)(*(int (__thiscall **)(void *, int *))(*(_DWORD *)this->? + 756))(this->?, &v6); /*0x54b9f8*/
      if ( *v2 == dword_ABC588 ) /*0x54ba08*/
        LOBYTE(v2) = GadgetGrid::InsertItem((GadgetGrid *)&g_CellClassManager, (int)this->?); /*0x54ba20*/
      this->unitRepairStations[0] = 1; /*0x54ba25*/
    }
  }
  return (char)v2; /*0x54ba2c*/
}



// ==== 0x0054BA30  ObjectClass::UpdateFootMovement  this=ObjectClass  sig=csp ====
double __usercall UpdateFootMovement@<st0>(ObjectClass *this, double result@<st0>)
{
  int v2; // ecx
  int v4; // edi
  int v5; // eax
  int *v6; // eax
  int v7; // eax
  int v8; // ecx
  unsigned int v9; // edi
  Cell *v10; // eax
  int v11; // ebx
  void *NeighbourContent; // eax
  _BYTE *v13; // ecx
  CellClass *v14; // eax
  _BYTE *v15; // ecx
  char v16; // bl
  int v17; // eax
  int *v18; // ecx
  int v20; // edx
  int Member; // eax
  int v22; // edi
  _BYTE *v23; // eax
  int v24; // eax
  _BYTE *v25; // ecx
  char v26; // bl
  int v27; // eax
  double v28; // [esp+4h] [ebp-34h]
  double v29; // [esp+Ch] [ebp-2Ch]
  int v30; // [esp+14h] [ebp-24h]
  __int16 v31[2]; // [esp+20h] [ebp-18h] BYREF
  int v32; // [esp+24h] [ebp-14h] BYREF
  int v33; // [esp+28h] [ebp-10h] BYREF
  int v34; // [esp+2Ch] [ebp-Ch] BYREF
  int v35; // [esp+30h] [ebp-8h]
  int v36; // [esp+34h] [ebp-4h]

  _ESI = v2; /*0x54ba35*/
  v4 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v2 + 12) + 456))(*(_DWORD *)(v2 + 12)); /*0x54ba43*/
  v5 = *(_DWORD *)(_ESI + 12); /*0x54ba45*/
  if ( !*(_BYTE *)(v5 + 140) ) /*0x54ba48*/
  {
    v6 = (int *)(v5 + 156); /*0x54ba52*/
    v34 = *v6; /*0x54ba59*/
    v35 = v6[1]; /*0x54ba65*/
    v36 = v6[2]; /*0x54ba71*/
    if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v34)->flags[0] & 0x100) != 0 && v4 >= dword_ABC5DC ) /*0x54ba8c*/
      v4 -= dword_ABC5DC; /*0x54ba8e*/
  }
  v7 = *(_DWORD *)(*(int (__thiscall **)(_DWORD, int *))(**(_DWORD **)(_ESI + 12) + 440))(*(_DWORD *)(_ESI + 12), &v33); /*0x54baa0*/
  v8 = *(_DWORD *)(_ESI + 12); /*0x54baa2*/
  *(_DWORD *)v31 = v7; /*0x54baa5*/
  if ( (_WORD)v7 != *(_WORD *)(v8 + 1376) || v31[1] != *(_WORD *)(v8 + 1378) ) /*0x54babe*/
    Coord::ToGridIndex((char *)&g_CellClassManager, v8, *(_DWORD *)(v8 + 1376), v7); /*0x54bace*/
  if ( v4 < *(_DWORD *)(_ESI + 128) ) /*0x54bade*/
  {
    if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(_ESI + 12) + 44))(*(_DWORD *)(_ESI + 12)) == 1 /*0x54bba2*/
      && *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(_ESI + 12) + 132))(*(_DWORD *)(_ESI + 12)) + 3434) )
    {
      v17 = *(_DWORD *)(_ESI + 128) / 2; /*0x54bbb5*/
    }
    else
    {
      v17 = *(_DWORD *)(_ESI + 128) / 4; /*0x54bbc5*/
    }
    if ( v4 > v17 ) /*0x54bbca*/
    {
      __asm { fild dword ptr [esi+20h] } /*0x54bbd0*/
      v18 = (int *)(*(_DWORD *)(_ESI + 12) + 156); /*0x54bbd6*/
      __asm { fstp qword ptr [esi+78h] } /*0x54bbdc*/
      *(double *)(_ESI + 120) = _RT1; /*0x54bbdc*/
      v34 = *v18; /*0x54bbe1*/
      v20 = v18[1]; /*0x54bbe5*/
      v35 = v20; /*0x54bbe8*/
      v36 = v18[2]; /*0x54bbef*/
      v33 = *(_DWORD *)(_ESI + 64); /*0x54bbf8*/
      if ( v34 == v33 && v20 == *(_DWORD *)(_ESI + 68) ) /*0x54bc01*/
        LOWORD(v32) = 0; /*0x54bc03*/
      __asm { fild [esp+24h+var_10] } /*0x54bc0a*/
      __asm
      {
        fisub [esp+34h+var_C]
        fstp [esp+34h+var_30+4]; double
        fild [esp+34h+var_8]
        fisub dword ptr [esi+44h]
        fstp [esp+34h+var_38+4]; double
      }
      Math::CalcAngle(v28, v29); /*0x54bc26*/
      __asm { fsub ds:dbl_7E2820 } /*0x54bc2b*/
      __asm { fmul ds:dbl_7E2818 }
      LOWORD(v33) = Math::RoundToInt(result); /*0x54bc3f*/
      v32 = v33; /*0x54bc50*/
      FacingClass::Update((char *)(_ESI + 84), &v32); /*0x54bc54*/
      Member = Team::GetMember(*(Team **)(_ESI + 12), 0); /*0x54bc5e*/
      v22 = Member; /*0x54bc63*/
      if ( Member ) /*0x54bc67*/
      {
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)Member + 44))(Member) == 6 ) /*0x54bc73*/
        {
          v23 = *(_BYTE **)(v22 + 1312); /*0x54bc75*/
          if ( v23[5821] || v23[5860] || v23[5861] || v23[5862] ) /*0x54bc99*/
            (**(void (__thiscall ***)(int, int, _DWORD))(*(_DWORD *)(_ESI + 12) + 8))( /*0x54bcb3*/
              *(_DWORD *)(_ESI + 12) + 8,
              4475,
              0);
        }
      }
      if ( *(_DWORD *)v31 == __PAIR32__(*(_DWORD *)(_ESI + 68) / 256, *(_DWORD *)(_ESI + 64) / 256) /*0x54bcee*/
        && !*(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(_ESI + 12) + 132))(*(_DWORD *)(_ESI + 12)) + 3434) )
      {
        v24 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(_ESI + 12) + 456))(*(_DWORD *)(_ESI + 12)); /*0x54bcfd*/
        v25 = *(_BYTE **)(_ESI + 12); /*0x54bd03*/
        *(_DWORD *)(_ESI + 128) = v24; /*0x54bd06*/
        v26 = v25[116]; /*0x54bd10*/
        (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)v25 + 292))(v25, 0); /*0x54bd13*/
        v27 = *(_DWORD *)(_ESI + 12); /*0x54bd19*/
        *(_DWORD *)(_ESI + 80) = 3; /*0x54bd1c*/
        *(_BYTE *)(v27 + 116) = v26; /*0x54bd23*/
      }
    }
  }
  else if ( (unsigned __int8)ObjectClass::HasLinkedObject(*(_DWORD *)(_ESI + 12)) ) /*0x54baea*/
  {
    v9 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 7); /*0x54bb08*/
    v10 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v31); /*0x54bb14*/
    v11 = **(_DWORD **)(_ESI + 12); /*0x54bb1f*/
    NeighbourContent = Cell::GetNeighbourContent(v10, v9); /*0x54bb23*/
    (*(void (__thiscall **)(_DWORD, void *, int))(v11 + 1152))(*(_DWORD *)(_ESI + 12), NeighbourContent, 1); /*0x54bb2c*/
    v13 = *(_BYTE **)(_ESI + 12); /*0x54bb32*/
    LOBYTE(v11) = v13[116]; /*0x54bb39*/
    (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)v13 + 292))(v13, 0); /*0x54bb3c*/
    *(_BYTE *)(*(_DWORD *)(_ESI + 12) + 116) = v11; /*0x54bb46*/
    *(_DWORD *)(_ESI + 80) = 3; /*0x54bb49*/
  }
  else
  {
    v14 = (CellClass *)(*(int (__stdcall **)(_DWORD))(**(_DWORD **)(_ESI + 12) + 444))(*(_DWORD *)(_ESI + 12)); /*0x54bb5c*/
    CellClass::AttachObject(v14, v30); /*0x54bb64*/
    v15 = *(_BYTE **)(_ESI + 12); /*0x54bb69*/
    v16 = v15[116]; /*0x54bb70*/
    (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)v15 + 292))(v15, 0); /*0x54bb73*/
    *(_BYTE *)(*(_DWORD *)(_ESI + 12) + 116) = v16; /*0x54bb7d*/
    *(_DWORD *)(_ESI + 80) = 2; /*0x54bb80*/
  }
  return result; /*0x54bb45*/
}



// ==== 0x0054BD30  ObjectClass::UpdateFootMoveToState  this=ObjectClass  sig=csp ====
double __usercall UpdateFootMoveToState@<st0>(ObjectClass *this, double result@<st0>)
{
  int v2; // ecx
  int v3; // esi
  int *v4; // ecx
  int v5; // edx
  _DWORD *v6; // edi
  int *v7; // eax
  int v8; // ebx
  _BYTE *v9; // ecx
  char v10; // bl
  _DWORD *v11; // ecx
  _BYTE *v12; // ecx
  char v13; // bl
  _DWORD *v14; // ecx
  CellClass *v15; // eax
  _DWORD *v16; // ecx
  int v17; // edx
  int v18; // edi
  int v19; // eax
  int v20; // eax
  bool v21; // zf
  int v22; // edi
  CellClass *v23; // eax
  CellClass *v24; // eax
  _BYTE *v25; // ecx
  char v26; // bl
  int v27; // [esp+14h] [ebp-2Ch]
  int v28; // [esp+20h] [ebp-20h] BYREF
  int v29; // [esp+24h] [ebp-1Ch]
  int v30; // [esp+28h] [ebp-18h]
  int v31; // [esp+2Ch] [ebp-14h]
  int v32; // [esp+30h] [ebp-10h]
  int v33; // [esp+38h] [ebp-8h]
  int v34; // [esp+3Ch] [ebp-4h]

  v3 = v2; /*0x54bd35*/
  if ( (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)(v2 + 4) + 16))(v2 + 4) ) /*0x54bd3f*/
  {
    v4 = (int *)(v3 + 64); /*0x54bd4a*/
    v5 = *(_DWORD *)(v3 + 64); /*0x54bd50*/
    v33 = *(_DWORD *)(v3 + 68); /*0x54bd55*/
    v6 = *(_DWORD **)(v3 + 12); /*0x54bd59*/
    v34 = *(_DWORD *)(v3 + 72); /*0x54bd5f*/
    v7 = v6 + 39; /*0x54bd63*/
    v30 = v6[39]; /*0x54bd6e*/
    v8 = v6[40]; /*0x54bd72*/
    v32 = v6[41]; /*0x54bd78*/
    if ( v5 == v30 && v33 == v8 ) /*0x54bd8d*/
    {
      if ( v6[173] ) /*0x54bd93*/
        return result; /*0x54bd9b*/
      if ( v6 /*0x54bdd0*/
        && (*(int (__thiscall **)(_DWORD *))(*v6 + 44))(v6) == 1
        && *(_BYTE *)(v6[433] + 3603)
        && !*(_BYTE *)(*(_DWORD *)(v3 + 12) + 1709) )
      {
        if ( *(_BYTE *)((*(int (__usercall **)@<eax>(_DWORD *@<ecx>, double@<st0>))(*v6 + 132))(v6, result) + 1709) ) /*0x54bde8*/
        {
          if ( !*((_BYTE *)v6 + 308) ) /*0x54bdf2*/
          {
            v9 = *(_BYTE **)(v3 + 12); /*0x54bdfc*/
            if ( !v9[1709] ) /*0x54bdff*/
            {
              *(_DWORD *)(v3 + 128) = *(_DWORD *)(v3 + 44); /*0x54be0e*/
              v10 = v9[116]; /*0x54be16*/
              (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)v9 + 292))(v9, 0); /*0x54be19*/
              *(_BYTE *)(*(_DWORD *)(v3 + 12) + 116) = v10; /*0x54be22*/
              v11 = *(_DWORD **)(v3 + 12); /*0x54be25*/
              *(_DWORD *)(v3 + 80) = 2; /*0x54be28*/
              BuildingClass::GetType_Thunk(v11); /*0x54be2f*/
              return result; /*0x54be3a*/
            }
          }
        }
        v28 = *(_DWORD *)(v3 + 12); /*0x54be40*/
        if ( *(_DWORD *)((*(int (**)(void))(*(_DWORD *)v28 + 444))() + 224) != v28 ) /*0x54be52*/
          goto LABEL_19; /*0x54be52*/
      }
      else
      {
        if ( *(_BYTE *)((*(int (__usercall **)@<eax>(_DWORD@<ecx>, double@<st0>))(**(_DWORD **)(v3 + 12) + 132))( /*0x54be6d*/
                          *(_DWORD *)(v3 + 12),
                          result)
                      + 3434) )
        {
          v12 = *(_BYTE **)(v3 + 12); /*0x54be77*/
          v13 = v12[116]; /*0x54be7e*/
          (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)v12 + 292))(v12, 0); /*0x54be81*/
          *(_BYTE *)(*(_DWORD *)(v3 + 12) + 116) = v13; /*0x54be8a*/
          v14 = *(_DWORD **)(v3 + 12); /*0x54be8d*/
          *(_DWORD *)(v3 + 80) = 2; /*0x54be90*/
          BuildingClass::GetType_Thunk(v14); /*0x54be97*/
          return result; /*0x54bea2*/
        }
        v28 = *(_DWORD *)(v3 + 12); /*0x54bea8*/
        if ( *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)v28 + 444))(v28) + 224) != v28 ) /*0x54bebc*/
          goto LABEL_19; /*0x54bebc*/
      }
      v15 = (CellClass *)(*(int (__thiscall **)(int))(*(_DWORD *)v28 + 444))(v28); /*0x54bec4*/
      CellClass::AttachObject(v15, 0); /*0x54becc*/
LABEL_19:
      v16 = *(_DWORD **)(v3 + 12); /*0x54bed1*/
      *(_DWORD *)(v3 + 80) = 4; /*0x54bed4*/
      BuildingClass::GetType_Thunk(v16); /*0x54bedb*/
      return result; /*0x54bee6*/
    }
    v17 = *v7; /*0x54bee7*/
    v18 = v6[40]; /*0x54bee9*/
    v19 = v7[2]; /*0x54beec*/
    v30 = v17; /*0x54beef*/
    v32 = v19; /*0x54bef3*/
    v20 = *v4; /*0x54bef7*/
    v21 = v17 == *v4; /*0x54bef9*/
    v31 = v18; /*0x54befb*/
    v29 = v20; /*0x54beff*/
    if ( v21 && v18 == *(_DWORD *)(v3 + 68) ) /*0x54bf08*/
      LOWORD(v28) = 0; /*0x54bf0a*/
    Math::CalcAngle((double)v31 - (double)*(int *)(v3 + 68), (double)v29 - (double)v30); /*0x54bf2d*/
    result = (result - 1.570796326794897) * -10430.06004058427; /*0x54bf3b*/
    LOWORD(v29) = Math::RoundToInt(result); /*0x54bf46*/
    v28 = v29; /*0x54bf53*/
    FacingClass::Update((char *)(v3 + 84), &v28); /*0x54bf5b*/
    if ( !*(_DWORD *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v3 + 12) + 444))(*(_DWORD *)(v3 + 12)) + 224) ) /*0x54bf6b*/
    {
      v22 = *(_DWORD *)(v3 + 12); /*0x54bf75*/
      if ( *((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)(v22 + 1376)) + 56) == v22 ) /*0x54bf91*/
      {
        v23 = (CellClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (__int16 *)(v22 + 1376)); /*0x54bfa1*/
        CellClass::AttachObject(v23, 0); /*0x54bfa8*/
      }
    }
    v24 = (CellClass *)(*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(v3 + 12) + 444))(*(_DWORD *)(v3 + 12), 0); /*0x54bfb4*/
    CellClass::AttachObject(v24, v27); /*0x54bfbc*/
    v25 = *(_BYTE **)(v3 + 12); /*0x54bfc1*/
    v26 = v25[116]; /*0x54bfc8*/
    (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)v25 + 292))(v25, 0); /*0x54bfcb*/
    *(_BYTE *)(*(_DWORD *)(v3 + 12) + 116) = v26; /*0x54bfd4*/
    *(_DWORD *)(v3 + 80) = 3; /*0x54bfd7*/
  }
  return result; /*0x54be34*/
}



// ==== 0x0054BFF0  MovementClass::CalcSpeed  this=MovementClass  sig=csp ====
int __usercall MovementClass::CalcSpeed@<eax>(MovementClass *this, double a2@<st0>)
{
  int v2; // ecx
  int v3; // esi
  _DWORD *v4; // ecx
  int v5; // eax
  int v6; // ecx
  double v7; // st7
  unsigned int v8; // ebp
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // edi
  int v13; // ebx
  _DWORD *v14; // edi
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  char v18; // bl
  int v19; // eax
  TechnoClass *v20; // eax
  unsigned int v21; // ebx
  Cell *v22; // eax
  int v23; // ebp
  void *v24; // eax
  CellClass *v25; // eax
  _BYTE *v26; // ecx
  char v27; // bl
  _DWORD *v28; // ecx
  _DWORD *v29; // ecx
  unsigned int v30; // ebx
  Cell *v31; // eax
  int v32; // ebp
  void *NeighbourContent; // eax
  CellClass *v34; // eax
  _BYTE *v35; // ecx
  char v36; // bl
  int v37; // edi
  int v38; // edx
  int v39; // edx
  double v40; // st7
  int v41; // ecx
  int v42; // eax
  double v43; // st7
  double v44; // st7
  CellClass *v45; // eax
  int result; // eax
  int v47; // [esp+14h] [ebp-38h]
  char v48; // [esp+2Bh] [ebp-21h]
  int v49; // [esp+2Ch] [ebp-20h]
  _DWORD *v50; // [esp+2Ch] [ebp-20h]
  __int16 v51[2]; // [esp+30h] [ebp-1Ch] BYREF
  _WORD v52[2]; // [esp+34h] [ebp-18h] BYREF
  _DWORD v53[2]; // [esp+38h] [ebp-14h] BYREF
  int v54; // [esp+40h] [ebp-Ch] BYREF
  int v55; // [esp+44h] [ebp-8h]
  int v56; // [esp+48h] [ebp-4h]

  v3 = v2; /*0x54bffc*/
  v4 = *(_DWORD **)(v2 + 12); /*0x54bfff*/
  v54 = v4[39]; /*0x54c00e*/
  v55 = v4[40]; /*0x54c015*/
  v56 = v4[41]; /*0x54c01c*/
  v5 = *(_DWORD *)(*(int (__thiscall **)(_DWORD *, _DWORD *))(*v4 + 440))(v4, v53); /*0x54c02d*/
  v6 = *(_DWORD *)(v3 + 12); /*0x54c02f*/
  *(_DWORD *)v51 = v5; /*0x54c032*/
  if ( (_WORD)v5 != *(_WORD *)(v6 + 1376) || v51[1] != *(_WORD *)(v6 + 1378) ) /*0x54c04b*/
    Coord::ToGridIndex((char *)&g_CellClassManager, v6, *(_DWORD *)(v6 + 1376), v5); /*0x54c05b*/
  v49 = *(_DWORD *)(v3 + 64); /*0x54c069*/
  if ( v54 == v49 && v55 == *(_DWORD *)(v3 + 68) ) /*0x54c078*/
    v52[0] = 0; /*0x54c07a*/
  Math::CalcAngle((double)v55 - (double)*(int *)(v3 + 68), (double)v49 - (double)v54); /*0x54c09d*/
  v7 = (a2 - 1.570796326794897) * -10430.06004058427; /*0x54c0ab*/
  v52[0] = Math::RoundToInt(v7); /*0x54c0b6*/
  FacingClass::Update((char *)(v3 + 84), v52); /*0x54c0cd*/
  v8 = *MovementClass::CompareAbsCoords((MovementClass *)(v3 + 84), v53); /*0x54c0e1*/
  v9 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v3 + 12) + 132))(*(_DWORD *)(v3 + 12)); /*0x54c0e5*/
  v10 = *(_DWORD *)(v3 + 68); /*0x54c0f5*/
  v48 = *(_BYTE *)(v9 + 3434); /*0x54c0f8*/
  v53[0] = v54 - *(_DWORD *)(v3 + 64); /*0x54c10a*/
  v53[1] = v55 - v10; /*0x54c10e*/
  Math::Sqrt((double)v53[0] * (double)v53[0] + (double)(v55 - v10) * (double)(v55 - v10)); /*0x54c12b*/
  LOWORD(v11) = Math::RoundToInt(v7); /*0x54c133*/
  v12 = *(_DWORD *)(v3 + 12); /*0x54c138*/
  v13 = v11; /*0x54c13f*/
  if ( v12 )
  {
    v50 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v12 + 44))(*(_DWORD *)(v3 + 12)) == 1 ? (_DWORD *)v12 : 0;
    v14 = v50; /*0x54c161*/
  }
  else
  {
    v14 = 0; /*0x54c143*/
    v50 = 0; /*0x54c145*/
  }
  if ( v13 >= 20 ) /*0x54c166*/
  {
    v53[0] = *(_DWORD *)(v3 + 32); /*0x54c387*/
    v37 = v53[0]; /*0x54c382*/
    if ( v13 >= v53[0] ) /*0x54c38b*/
    {
      if ( v13 >= 2 * v53[0] ) /*0x54c3ca*/
      {
        if ( v13 >= 50 * v53[0] / *(_DWORD *)(v3 + 28) ) /*0x54c462*/
        {
          v44 = (double)v53[0]; /*0x54c4e9*/
          *(_DWORD *)(v3 + 128) = *(_DWORD *)(v3 + 44); /*0x54c4f0*/
          *(double *)(v3 + 120) = v44; /*0x54c4f6*/
        }
        else
        {
          v41 = *(_DWORD *)(v3 + 12); /*0x54c46a*/
          v53[0] /= 2; /*0x54c472*/
          *(double *)(v3 + 120) = (double)(v37 / 2); /*0x54c47a*/
          if ( !*(_DWORD *)(v41 + 692) ) /*0x54c47d*/
          {
            LOWORD(v42) = Math::RoundToInt((double)*(int *)(v3 + 44) * 0.75); /*0x54c490*/
            *(_DWORD *)(v3 + 128) = v42; /*0x54c495*/
          }
          if ( (unsigned __int8)(((v8 >> 7) + 1) >> 1) > 5 * *(_DWORD *)(v3 + 28) ) /*0x54c4af*/
          {
            v53[0] = v37 / 5; /*0x54c4c1*/
            v43 = (double)(v37 / 5); /*0x54c4c5*/
            *(double *)(v3 + 120) = v43; /*0x54c4c9*/
            if ( v43 < 1.0 ) /*0x54c4d7*/
            {
              *(_DWORD *)(v3 + 120) = 0; /*0x54c4d9*/
              *(_DWORD *)(v3 + 124) = 1072693248; /*0x54c4e0*/
            }
          }
        }
      }
      else
      {
        v39 = *(_DWORD *)(v3 + 12); /*0x54c3d8*/
        v53[0] /= 4; /*0x54c3de*/
        *(double *)(v3 + 120) = (double)(v37 / 4); /*0x54c3e6*/
        if ( !*(_DWORD *)(v39 + 692) ) /*0x54c3e9*/
          *(_DWORD *)(v3 + 128) = *(_DWORD *)(v3 + 44) / 2; /*0x54c3f9*/
        if ( (unsigned __int8)(((v8 >> 7) + 1) >> 1) > *(int *)(v3 + 28) ) /*0x54c410*/
        {
          v53[0] = v37 / 10; /*0x54c427*/
          v40 = (double)(v37 / 10); /*0x54c42b*/
          *(double *)(v3 + 120) = v40; /*0x54c42f*/
          if ( v40 < 1.0 ) /*0x54c43d*/
          {
            *(_DWORD *)(v3 + 120) = 0; /*0x54c443*/
            *(_DWORD *)(v3 + 124) = 1072693248; /*0x54c446*/
          }
        }
      }
    }
    else
    {
      v38 = *(_DWORD *)(v3 + 12); /*0x54c395*/
      v53[0] /= 8; /*0x54c39b*/
      *(double *)(v3 + 120) = (double)(v37 / 8); /*0x54c3a3*/
      if ( !*(_DWORD *)(v38 + 692) ) /*0x54c3a6*/
        *(_DWORD *)(v3 + 128) = *(_DWORD *)(v3 + 44) / 2; /*0x54c3ba*/
    }
    v14 = v50; /*0x54c4f9*/
  }
  else
  {
    v15 = *(_DWORD *)(v3 + 64); /*0x54c16c*/
    *(_DWORD *)(v3 + 112) = 0; /*0x54c16f*/
    *(_DWORD *)(v3 + 120) = 0; /*0x54c172*/
    *(_DWORD *)(v3 + 116) = 0; /*0x54c175*/
    *(_DWORD *)(v3 + 124) = 0; /*0x54c178*/
    v16 = *(_DWORD *)(v3 + 68); /*0x54c17b*/
    v54 = v15; /*0x54c17e*/
    v17 = *(_DWORD *)(v3 + 12); /*0x54c182*/
    v55 = v16; /*0x54c185*/
    v18 = *(_BYTE *)(v17 + 116); /*0x54c189*/
    *(_BYTE *)(v17 + 116) = 0; /*0x54c18c*/
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(v3 + 12) + 436))(*(_DWORD *)(v3 + 12), &v54); /*0x54c19a*/
    *(_BYTE *)(*(_DWORD *)(v3 + 12) + 116) = v18; /*0x54c1a3*/
    v19 = *(_DWORD *)(v3 + 12); /*0x54c1a6*/
    if ( *(_BYTE *)(v19 + 1709) ) /*0x54c1a9*/
    {
      *(_DWORD *)(v3 + 128) = 0; /*0x54c1b3*/
      v20 = *(TechnoClass **)(v19 + 688); /*0x54c1bd*/
      if ( v20 ) /*0x54c1c5*/
        TechnoClass::EjectPassengers(v20, 1); /*0x54c1cb*/
      *(_DWORD *)(v3 + 80) = 4; /*0x54c1d0*/
    }
    else if ( *(_DWORD *)(v19 + 692) || v48 ) /*0x54c1f0*/
    {
      if ( (unsigned __int8)ObjectClass::HasLinkedObject(*(_DWORD *)(v3 + 12)) ) /*0x54c300*/
      {
        v30 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 7); /*0x54c328*/
        v31 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v51); /*0x54c32a*/
        v32 = **(_DWORD **)(v3 + 12); /*0x54c335*/
        NeighbourContent = Cell::GetNeighbourContent(v31, v30); /*0x54c339*/
        (*(void (__thiscall **)(_DWORD, void *, int))(v32 + 1152))(*(_DWORD *)(v3 + 12), NeighbourContent, 1); /*0x54c342*/
      }
      else
      {
        v34 = (CellClass *)(*(int (__stdcall **)(_DWORD))(**(_DWORD **)(v3 + 12) + 444))(*(_DWORD *)(v3 + 12)); /*0x54c353*/
        CellClass::AttachObject(v34, v47); /*0x54c35b*/
        v35 = *(_BYTE **)(v3 + 12); /*0x54c360*/
        v36 = v35[116]; /*0x54c367*/
        (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)v35 + 292))(v35, 0); /*0x54c36a*/
        *(_BYTE *)(*(_DWORD *)(v3 + 12) + 116) = v36; /*0x54c373*/
        *(_DWORD *)(v3 + 80) = 2; /*0x54c376*/
      }
    }
    else if ( v14 /*0x54c22d*/
           && *(_BYTE *)(v14[433] + 3603)
           && *(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*v14 + 132))(v14) + 1709)
           && !*(_BYTE *)(*(_DWORD *)(v3 + 12) + 1709) )
    {
      if ( (unsigned __int8)ObjectClass::HasLinkedObject(*(_DWORD *)(v3 + 12)) ) /*0x54c241*/
      {
        v21 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 7); /*0x54c269*/
        v22 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v51); /*0x54c26b*/
        v23 = **(_DWORD **)(v3 + 12); /*0x54c276*/
        v24 = Cell::GetNeighbourContent(v22, v21); /*0x54c27a*/
        (*(void (__thiscall **)(_DWORD, void *, int))(v23 + 1152))(*(_DWORD *)(v3 + 12), v24, 1); /*0x54c283*/
        BuildingClass::GetType_Thunk(*(_DWORD **)(v3 + 12)); /*0x54c28c*/
      }
      else
      {
        v25 = (CellClass *)(*(int (__stdcall **)(_DWORD))(**(_DWORD **)(v3 + 12) + 444))(*(_DWORD *)(v3 + 12)); /*0x54c29c*/
        CellClass::AttachObject(v25, v47); /*0x54c2a4*/
        v26 = *(_BYTE **)(v3 + 12); /*0x54c2ac*/
        *(_DWORD *)(v3 + 128) = *(_DWORD *)(v3 + 44); /*0x54c2af*/
        v27 = v26[116]; /*0x54c2b9*/
        (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)v26 + 292))(v26, 0); /*0x54c2bc*/
        *(_BYTE *)(*(_DWORD *)(v3 + 12) + 116) = v27; /*0x54c2c5*/
        v28 = *(_DWORD **)(v3 + 12); /*0x54c2c8*/
        *(_DWORD *)(v3 + 80) = 2; /*0x54c2cb*/
        BuildingClass::GetType_Thunk(v28); /*0x54c2d2*/
      }
    }
    else
    {
      v29 = *(_DWORD **)(v3 + 12); /*0x54c2dc*/
      *(_DWORD *)(v3 + 128) = 0; /*0x54c2df*/
      *(_DWORD *)(v3 + 80) = 4; /*0x54c2e9*/
      BuildingClass::GetType_Thunk(v29); /*0x54c2f0*/
    }
  }
  v45 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], (_DWORD *)(v3 + 64)); /*0x54c506*/
  if ( v48 /*0x54c531*/
    || (result = v45->landType, result == 2)
    || result == 6
    || v14 && (result = (*(int (__thiscall **)(_DWORD *))(*v14 + 132))(v14), *(_BYTE *)(result + 1709)) )
  {
    result = *(_DWORD *)(v3 + 44); /*0x54c53b*/
    *(_DWORD *)(v3 + 128) = result; /*0x54c53e*/
  }
  return result; /*0x54c544*/
}



// ==== 0x0054C550  BuildingPlacement::ProcessBuildingPlacementAction  this=BuildingPlacement  sig=csp ====
char __thiscall BuildingPlacement::ProcessBuildingPlacementAction(BuildingPlacement *this)
{
  BuildingPlacement *v2; // ebp
  CellClass *v3; // eax
  int BuildingPlacement_field_0x0C; // ecx
  BuildingPlacement *v5; // edi
  int landType; // eax
  unsigned int v7; // edi
  Cell *v8; // eax
  int v9; // ebx
  void *NeighbourContent; // eax
  _BYTE *v11; // ecx
  CellClass *v12; // eax
  CellClass *v13; // eax
  _BYTE *v14; // ecx
  char v15; // bl
  int v16; // edx
  unsigned int v17; // ebx
  _DWORD *v18; // ecx
  int v19; // ecx
  _DWORD *v20; // edi
  int v21; // ebx
  _DWORD *Value; // eax
  __int16 v23; // cx
  __int16 v24; // dx
  int v25; // ecx
  int v26; // edi
  int *v27; // eax
  _BYTE *v28; // ecx
  int *v29; // eax
  int v30; // edi
  int *v31; // edx
  int v32; // ecx
  _BYTE *v33; // ecx
  _BYTE *v34; // ecx
  int v35; // eax
  int v36; // edi
  CellClass *v37; // eax
  int v38; // ecx
  CrateClass *v39; // eax
  int v40; // ecx
  int v41; // edi
  int v42; // eax
  int v44; // [esp+44h] [ebp-28h]
  int v45; // [esp+48h] [ebp-24h]
  char v46; // [esp+5Bh] [ebp-11h]
  int v47; // [esp+5Ch] [ebp-10h] BYREF
  int v48; // [esp+60h] [ebp-Ch] BYREF
  int v49; // [esp+64h] [ebp-8h]
  int v50; // [esp+68h] [ebp-4h]

  v2 = (BuildingPlacement *)((char *)this + 64); /*0x54c55e*/
  v3 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], (_DWORD *)this + 16); /*0x54c562*/
  BuildingPlacement_field_0x0C = this->BuildingPlacement_field_0x0C; /*0x54c567*/
  v5 = (BuildingPlacement *)v3; /*0x54c56a*/
  if ( !*(_BYTE *)(BuildingPlacement_field_0x0C + 1709) ) /*0x54c56c*/
  {
    landType = v3->landType; /*0x54c57a*/
    if ( (landType == 2 || landType == 6) /*0x54c5a6*/
      && *(_DWORD *)(BuildingPlacement_field_0x0C + 180) != 7
      && (*(int (__thiscall **)(int))(*(_DWORD *)BuildingPlacement_field_0x0C + 388))(BuildingPlacement_field_0x0C) != 7 )
    {
      if ( (unsigned __int8)ObjectClass::HasLinkedObject(this->BuildingPlacement_field_0x0C) ) /*0x54c5b5*/
      {
        v7 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 7); /*0x54c5d6*/
        v8 = (Cell *)(*(int (__thiscall **)(int))(*(_DWORD *)this->BuildingPlacement_field_0x0C + 444))(this->BuildingPlacement_field_0x0C); /*0x54c5da*/
        v9 = *(_DWORD *)this->BuildingPlacement_field_0x0C; /*0x54c5e6*/
        NeighbourContent = Cell::GetNeighbourContent(v8, v7); /*0x54c5ea*/
        (*(void (__thiscall **)(int, void *, int))(v9 + 1152))(this->BuildingPlacement_field_0x0C, NeighbourContent, 1); /*0x54c5f3*/
        v11 = (_BYTE *)this->BuildingPlacement_field_0x0C; /*0x54c5f9*/
        LOBYTE(v9) = v11[116]; /*0x54c600*/
        (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)v11 + 292))(v11, 0); /*0x54c603*/
        v12 = (CellClass *)this->BuildingPlacement_field_0x0C; /*0x54c609*/
        LOBYTE(v12->unknown74) = v9; /*0x54c60d*/
        this->q014 = 3; /*0x54c610*/
      }
      else
      {
        v13 = (CellClass *)(*(int (__stdcall **)(int))(*(_DWORD *)this->BuildingPlacement_field_0x0C + 444))(this->BuildingPlacement_field_0x0C); /*0x54c624*/
        CellClass::AttachObject(v13, v45); /*0x54c62c*/
        v14 = (_BYTE *)this->BuildingPlacement_field_0x0C; /*0x54c631*/
        v15 = v14[116]; /*0x54c638*/
        LOBYTE(v12) = (*(int (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)v14 + 292))(v14, 0); /*0x54c63b*/
        *(_BYTE *)(this->BuildingPlacement_field_0x0C + 116) = v15; /*0x54c645*/
        v16 = *((_DWORD *)this + 11); /*0x54c648*/
        this->q014 = 2; /*0x54c64b*/
        this->u32_20 = v16; /*0x54c652*/
      }
      return (char)v12; /*0x54c61d*/
    }
    v47 = (*(int (__thiscall **)(int, BuildingPlacement *, int, int, _DWORD, int))(*(_DWORD *)this->BuildingPlacement_field_0x0C /*0x54c675*/
                                                                                 + 428))(
            this->BuildingPlacement_field_0x0C,
            v5,
            -1,
            -1,
            0,
            1);
    v17 = Input::OffsetToDirection((Input *)this + 16); /*0x54c684*/
    if ( BuildingPlacement::IsPlacementFlagSet(v5, v17, BYTE1(v5[8].BuildingPlacement_field_0x20) & 1) /*0x54c699*/
      || (v46 = 0, *((_BYTE *)this + 144)) )
    {
      v46 = 1; /*0x54c6a8*/
    }
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)this->BuildingPlacement_field_0x0C + 44))(this->BuildingPlacement_field_0x0C) == 1 /*0x54c6bc*/
      && !v17 )
    {
      v46 = 1; /*0x54c6be*/
    }
    v18 = (_DWORD *)this->BuildingPlacement_field_0x0C; /*0x54c6c2*/
    if ( v18[45] != 7 && (*(int (__thiscall **)(_DWORD *))(*v18 + 388))(v18) != 7 ) /*0x54c6d9*/
    {
      if ( !v46 /*0x54c70c*/
        || (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], (_DWORD *)this + 16)->flags[0] & 0x100) == 0
        && (v47 > 2 || v47 == 2 && !*((_BYTE *)this + 144)) )
      {
        LOBYTE(v12) = (*(char (__stdcall **)(int *))(this->BuildingPlacement_field_0x04 + 72))(&this->BuildingPlacement_field_0x04); /*0x54ca43*/
        return (char)v12; /*0x54ca4d*/
      }
      if ( !*((_BYTE *)this + 144) ) /*0x54c71a*/
      {
        v19 = this->BuildingPlacement_field_0x0C; /*0x54c724*/
        *((_BYTE *)this + 144) = 1; /*0x54c727*/
        (*(void (__thiscall **)(int, char *))(*(_DWORD *)v19 + 240))(v19, (char *)this + 64); /*0x54c731*/
      }
    }
  }
  v20 = (_DWORD *)this->BuildingPlacement_field_0x0C; /*0x54c737*/
  if ( v20 ) /*0x54c73c*/
  {
    if ( (*(int (__thiscall **)(int))(*v20 + 44))(this->BuildingPlacement_field_0x0C) == 1 ) /*0x54c748*/
    {
      if ( *(_BYTE *)(v20[433] + 3603) ) /*0x54c750*/
      {
        if ( !*(_BYTE *)(this->BuildingPlacement_field_0x0C + 1709) ) /*0x54c75d*/
        {
          v21 = *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 72); /*0x54c776*/
          Value = ProgressTimer::GetValue((ProgressTimer *)((char *)this + 84), &v47); /*0x54c77a*/
          LOBYTE(v23) = 0; /*0x54c77f*/
          HIBYTE(v23) = v21; /*0x54c781*/
          if ( *(_WORD *)Value != v23 ) /*0x54c786*/
          {
            LOBYTE(v24) = 0; /*0x54c78d*/
            HIBYTE(v24) = *(_BYTE *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 72); /*0x54c793*/
            LOWORD(v47) = v24; /*0x54c799*/
            FacingClass::Update((char *)this + 84, &v47); /*0x54c79e*/
          }
        }
      }
    }
  }
  v25 = this->BuildingPlacement_field_0x0C; /*0x54c7a3*/
  this->u32_20 = 0; /*0x54c7a6*/
  v26 = (*(int (__thiscall **)(int))(*(_DWORD *)v25 + 456))(v25); /*0x54c7b8*/
  v12 = (CellClass *)this->BuildingPlacement_field_0x0C; /*0x54c7ba*/
  if ( !LOBYTE(v12->sensorsOfHouses[4]) ) /*0x54c7bd*/
  {
    v27 = &v12->sensorsOfHouses[8]; /*0x54c7c7*/
    v48 = *v27; /*0x54c7ce*/
    v49 = v27[1]; /*0x54c7da*/
    v50 = v27[2]; /*0x54c7e6*/
    v12 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v48); /*0x54c7ea*/
    if ( (v12->flags[0] & 0x100) != 0 ) /*0x54c7f8*/
    {
      LOBYTE(v12) = dword_ABC5DC; /*0x54c7fa*/
      if ( v26 >= dword_ABC5DC ) /*0x54c801*/
        v26 -= dword_ABC5DC; /*0x54c803*/
    }
  }
  if ( !v26 )
  {
    (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)this->BuildingPlacement_field_0x0C + 1348))( /*0x54c814*/
      this->BuildingPlacement_field_0x0C,
      0,
      0);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this->BuildingPlacement_field_0x0C + 292))( /*0x54c820*/
      this->BuildingPlacement_field_0x0C,
      0);
    v28 = (_BYTE *)this->BuildingPlacement_field_0x0C; /*0x54c826*/
    if ( !v28[1709] ) /*0x54c829*/
      (*(void (__thiscall **)(_BYTE *, char *))(*(_DWORD *)v28 + 436))(v28, (char *)this + 64); /*0x54c836*/
    v29 = (int *)(this->BuildingPlacement_field_0x0C + 156); /*0x54c83f*/
    v48 = *v29; /*0x54c848*/
    v49 = v29[1]; /*0x54c84f*/
    v30 = v29[2]; /*0x54c853*/
    v48 = *v29; /*0x54c858*/
    v49 = v29[1]; /*0x54c863*/
    v50 = v29[2]; /*0x54c870*/
    if ( v30 > Cell::GetGroundHeight(&v48) ) /*0x54c87b*/
    {
      v31 = (int *)(this->BuildingPlacement_field_0x0C + 156); /*0x54c880*/
      v48 = *v31; /*0x54c888*/
      v49 = v31[1]; /*0x54c894*/
      v50 = v31[2]; /*0x54c8a0*/
      if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v48)->flags[0] & 0x100) != 0 ) /*0x54c8b2*/
        *(_BYTE *)(this->BuildingPlacement_field_0x0C + 140) = 1; /*0x54c8b7*/
    }
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this->BuildingPlacement_field_0x0C + 292))( /*0x54c8c5*/
      this->BuildingPlacement_field_0x0C,
      1);
    *(_DWORD *)v2->__pad_0 = dword_ABC5A8; /*0x54c8d2*/
    *((_DWORD *)this + 17) = dword_ABC5AC; /*0x54c8db*/
    v32 = this->BuildingPlacement_field_0x0C; /*0x54c8e4*/
    *((_DWORD *)this + 18) = dword_ABC5B0; /*0x54c8e7*/
    *((_BYTE *)this + 76) = 0; /*0x54c8ea*/
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v32 + 396))(v32, 2); /*0x54c8f0*/
    (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)this->BuildingPlacement_field_0x0C + 1152))( /*0x54c8ff*/
      this->BuildingPlacement_field_0x0C,
      0,
      1);
    v33 = (_BYTE *)this->BuildingPlacement_field_0x0C; /*0x54c905*/
    LOBYTE(v12) = v33[144]; /*0x54c908*/
    if ( (_BYTE)v12 )
    {
      LOBYTE(v12) = v33[129]; /*0x54c916*/
      if ( !(_BYTE)v12 )
      {
        LOBYTE(v12) = v33[141]; /*0x54c924*/
        if ( !(_BYTE)v12 )
        {
          (*(void (__thiscall **)(_BYTE *, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v33 + 1164))(v33, 0, 0, 0, 0); /*0x54c93c*/
          v34 = (_BYTE *)this->BuildingPlacement_field_0x0C; /*0x54c942*/
          if ( v34[144] ) /*0x54c945*/
            (*(void (__thiscall **)(_BYTE *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v34 + 1160))( /*0x54c95b*/
              v34,
              0,
              0,
              0,
              0,
              0);
          v35 = this->BuildingPlacement_field_0x0C; /*0x54c961*/
          if ( *(_BYTE *)(v35 + 144) ) /*0x54c964*/
          {
            v48 = *(_DWORD *)(v35 + 156); /*0x54c978*/
            v49 = *(_DWORD *)(v35 + 160); /*0x54c97f*/
            v50 = *(_DWORD *)(v35 + 164); /*0x54c986*/
            MapClass::RevealArea2( /*0x54c9a2*/
              (MapClass *)&stru_87F5F0.__pad_58[416],
              &v48,
              *(_DWORD *)(v35 + 608) - 3,
              *(_DWORD *)(v35 + 608) + 3,
              0);
          }
          v47 = this->BuildingPlacement_field_0x0C; /*0x54c9ac*/
          v36 = v47; /*0x54c9aa*/
          if ( *(_DWORD *)((*(int (**)(void))(*(_DWORD *)v47 + 444))() + 224) == v36 ) /*0x54c9be*/
          {
            v37 = (CellClass *)(*(int (__thiscall **)(int))(*(_DWORD *)v36 + 444))(v36); /*0x54c9c6*/
            CellClass::AttachObject(v37, 0); /*0x54c9ce*/
          }
          GadgetGrid::RemoveItem((GadgetGrid *)&g_CellClassManager, this->BuildingPlacement_field_0x0C); /*0x54c9dc*/
          v38 = this->BuildingPlacement_field_0x0C; /*0x54c9e1*/
          this->q014 = 0; /*0x54c9e4*/
          v44 = v38; /*0x54c9eb*/
          v39 = (CrateClass *)(*(int (__thiscall **)(int))(*(_DWORD *)v38 + 444))(v38); /*0x54c9ee*/
          CrateClass::ProcessPickup(v39, v44); /*0x54c9f6*/
          v12 = (CellClass *)this->BuildingPlacement_field_0x0C; /*0x54c9fb*/
          v12[5].__pad_28[30] = 1; /*0x54c9fe*/
          *(_BYTE *)(this->BuildingPlacement_field_0x0C + 1063) = 0; /*0x54ca08*/
          *(_BYTE *)(this->BuildingPlacement_field_0x0C + 1061) = 0; /*0x54ca12*/
          v40 = this->BuildingPlacement_field_0x0C; /*0x54ca19*/
          *((_BYTE *)this + 144) = 0; /*0x54ca1e*/
          if ( v40 )
          {
            v12 = (CellClass *)(*(int (__thiscall **)(int))(*(_DWORD *)v40 + 44))(v40); /*0x54ca29*/
            if ( v12 == (CellClass *)1 )
            {
              v41 = this->BuildingPlacement_field_0x0C; /*0x54ca31*/
              if ( v41 )
                v42 = (*(int (__thiscall **)(int))(*(_DWORD *)v41 + 44))(this->BuildingPlacement_field_0x0C) == 1
                    ? v41
                    : 0;
              else
                v42 = 0; /*0x54ca38*/
              v12 = (CellClass *)(*(int (__thiscall **)(int))(*(_DWORD *)v42 + 132))(v42); /*0x54ca62*/
              if ( v12[5].__pad_28[29] ) /*0x54ca68*/
              {
                v12 = (CellClass *)this->BuildingPlacement_field_0x0C; /*0x54ca72*/
                LOBYTE(v12->gapsCoveringThisCell) = 0; /*0x54ca75*/
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
char __thiscall JumpjetLocomotion::Land(JumpjetLocomotion *this)
{
  int v2; // ecx
  int v3; // ebp
  char v4; // al
  double v5; // st7
  double v6; // st7
  int v7; // eax
  double v8; // st7
  int v9; // eax
  int v10; // esi
  _BYTE *v11; // ecx
  _DWORD *v12; // eax
  _DWORD *v13; // esi
  _DWORD *v14; // ebp
  int *v15; // eax
  int v16; // edx
  int v17; // eax
  int v18; // eax
  int v19; // ecx
  int v20; // edx
  int v21; // eax
  int v22; // ecx
  int *v23; // ecx
  CellClass *v24; // esi
  int landType; // eax
  bool v26; // bl
  int v27; // eax
  int v28; // ecx
  int v29; // ebp
  int v30; // eax
  TechnoClass *v31; // ecx
  int v32; // ecx
  _DWORD *v33; // ecx
  int v34; // eax
  int v35; // esi
  CellClass *v36; // eax
  int v37; // ecx
  int v38; // ecx
  int v39; // eax
  int v40; // eax
  int v41; // esi
  CellClass *v42; // eax
  int v43; // ecx
  char v45; // [esp+32h] [ebp-24h]
  char v46; // [esp+33h] [ebp-23h]
  char v47; // [esp+34h] [ebp-22h]
  char v48; // [esp+35h] [ebp-21h]
  __int16 v49[2]; // [esp+36h] [ebp-20h] BYREF
  __int16 v50[2]; // [esp+3Ah] [ebp-1Ch] BYREF
  int v51; // [esp+3Eh] [ebp-18h] BYREF
  int v52; // [esp+42h] [ebp-14h]
  int v53; // [esp+46h] [ebp-10h]
  int v54; // [esp+4Ah] [ebp-Ch] BYREF
  int v55; // [esp+4Eh] [ebp-8h]
  int v56; // [esp+52h] [ebp-4h]

  v2 = *(_DWORD *)this->__pad_C; /*0x54ca99*/
  v51 = *(_DWORD *)(v2 + 156); /*0x54caa6*/
  v52 = *(_DWORD *)(v2 + 160); /*0x54caad*/
  v53 = *(_DWORD *)(v2 + 164); /*0x54cab4*/
  v3 = *(_DWORD *)(v2 + 164); /*0x54caba*/
  v54 = *(_DWORD *)(v2 + 156); /*0x54cabd*/
  v4 = *(_BYTE *)(v2 + 1709); /*0x54cac4*/
  v55 = *(_DWORD *)(v2 + 160); /*0x54cacc*/
  if ( v4 ) /*0x54cad0*/
  {
    v5 = (double)v53; /*0x54cad2*/
    *(_DWORD *)&this->__pad_5C[20] = 0; /*0x54cad8*/
    *(_DWORD *)this->__pad_78 = 0; /*0x54cadb*/
    v6 = v5 - *(float *)&this->__pad_C[28]; /*0x54cade*/
    this->JumpjetLocomotion_field_0x74 = 0; /*0x54cae1*/
    *(_DWORD *)&this->__pad_78[4] = 0; /*0x54cae4*/
    LOWORD(v7) = Math::RoundToInt(v6); /*0x54cae7*/
    v8 = *(float *)&this->__pad_C[28] + 1.0; /*0x54caef*/
    v53 = v7; /*0x54caf5*/
    *(float *)&this->__pad_C[28] = v8; /*0x54caf9*/
  }
  else
  {
    LOWORD(v9) = Math::RoundToInt((double)v53 - *(float *)&this->__pad_C[28]); /*0x54cb05*/
    v53 = v9; /*0x54cb0a*/
    v49[0] = *(_WORD *)ProgressTimer::GetValue((ProgressTimer *)&this->__pad_48[12], v50) + 11520; /*0x54cb2a*/
    FacingClass::Update(&this->__pad_48[12], v49); /*0x54cb39*/
  }
  v10 = dword_ABC5DC + Cell::GetGroundHeight(&v51); /*0x54cb5e*/
  if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v51)->flags[0] & 0x100) == 0 /*0x54cb7f*/
    || v3 < v10
    || (v45 = 1, v53 >= v10) )
  {
    v45 = 0; /*0x54cb81*/
  }
  v49[0] = v51 / 256; /*0x54cba0*/
  v49[1] = v52 / 256; /*0x54cbb5*/
  if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&stru_87F5F0.__pad_58[416], v49) ) /*0x54cbc2*/
  {
    RemoveTarget(*(_DWORD *)this->__pad_C); /*0x54cbd4*/
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)this->__pad_C + 292))(*(_DWORD *)this->__pad_C, 0); /*0x54cbe1*/
    (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)this->__pad_C + 436))(*(_DWORD *)this->__pad_C, &v51); /*0x54cbf1*/
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)this->__pad_C + 292))(*(_DWORD *)this->__pad_C, 1); /*0x54cbfe*/
    Targeting::Readd(*(_DWORD **)this->__pad_C); /*0x54cc0d*/
  }
  v46 = 0; /*0x54cc19*/
  if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)this->__pad_C + 456))(*(_DWORD *)this->__pad_C) > 0 && !v45 ) /*0x54cc30*/
    goto LABEL_74; /*0x54cc30*/
  v11 = *(_BYTE **)this->__pad_C; /*0x54cc36*/
  if ( !v11[1063] ) /*0x54cc39*/
    goto LABEL_74; /*0x54cc41*/
  v47 = 0; /*0x54cc4e*/
  v12 = (_DWORD *)(*(int (__thiscall **)(_BYTE *, int *))(*(_DWORD *)v11 + 72))(v11, &v54); /*0x54cc53*/
  v49[0] = *v12 / 256; /*0x54cc66*/
  v49[1] = v12[1] / 256; /*0x54cc7f*/
  *(_DWORD *)v50 = *(_DWORD *)v49; /*0x54cc8d*/
  v13 = (_DWORD *)*((_DWORD *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v50) + 57); /*0x54cc96*/
  if ( v13 == *(_DWORD **)this->__pad_C ) /*0x54cca1*/
    v13 = (_DWORD *)v13[12]; /*0x54cca3*/
  if ( v13 ) /*0x54cca8*/
  {
    if ( (*(int (__thiscall **)(_DWORD *))(*v13 + 44))(v13) == 1 /*0x54ccc8*/
      || (*(int (__thiscall **)(_DWORD *))(*v13 + 44))(v13) == 6 )
    {
      goto LABEL_64; /*0x54ccc8*/
    }
    if ( (*(int (__thiscall **)(_DWORD *))(*v13 + 44))(v13) == 15 ) /*0x54ccd8*/
    {
      do /*0x54cd78*/
      {
        v14 = (_DWORD *)v13[12]; /*0x54cce1*/
        v15 = (int *)(*(_DWORD *)this->__pad_C + 156); /*0x54cce4*/
        v54 = *v15; /*0x54ccf0*/
        v55 = v15[1]; /*0x54ccf9*/
        v16 = *v13; /*0x54ccfd*/
        v56 = v15[2]; /*0x54cd02*/
        v17 = (*(int (__thiscall **)(_DWORD *))(v16 + 136))(v13); /*0x54cd06*/
        StartAudioControllerAt(*(_DWORD *)(v17 + 496), &v54, 0); /*0x54cd14*/
        v18 = *(_DWORD *)this->__pad_C; /*0x54cd19*/
        v19 = *(_DWORD *)(v18 + 1064); /*0x54cd1e*/
        if ( v19 ) /*0x54cd26*/
        {
          (*(void (__thiscall **)(_DWORD *, int))(*v13 + 224))(v13, v19); /*0x54cd2d*/
        }
        else
        {
          v20 = *v13; /*0x54cd3b*/
          if ( *(_DWORD *)(v18 + 1068) ) /*0x54cd35*/
            (*(void (__thiscall **)(_DWORD *, _DWORD))(v20 + 228))(v13, *(_DWORD *)(v18 + 1068)); /*0x54cd44*/
          else
            (*(void (__thiscall **)(_DWORD *, _DWORD))(v20 + 224))(v13, *(_DWORD *)this->__pad_C); /*0x54cd4f*/
        }
        (*(void (__thiscall **)(_DWORD *, _DWORD))(*v13 + 292))(v13, 0); /*0x54cd5a*/
        (*(void (__thiscall **)(_DWORD *))(*v13 + 212))(v13); /*0x54cd64*/
        (*(void (__thiscall **)(_DWORD *))(*v13 + 248))(v13); /*0x54cd6e*/
        v13 = v14; /*0x54cd76*/
      }
      while ( v14 ); /*0x54cd78*/
    }
    else
    {
      v21 = *(_DWORD *)this->__pad_C; /*0x54cd80*/
      v22 = *(_DWORD *)(v21 + 1064); /*0x54cd83*/
      if ( v22 ) /*0x54cd8b*/
      {
        (*(void (__thiscall **)(_DWORD *, _DWORD *, _DWORD, _DWORD, int, int, _DWORD, _DWORD))(*v13 + 364))( /*0x54cd94*/
          v13,
          v13 + 27,
          0,
          *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4012),
          v22,
          1,
          0,
          0);
      }
      else if ( *(_DWORD *)(v21 + 1068) ) /*0x54cd96*/
      {
        (*(void (__thiscall **)(_DWORD *, _DWORD *, _DWORD, _DWORD, int, int, _DWORD, _DWORD))(*v13 + 364))( /*0x54cda3*/
          v13,
          v13 + 27,
          0,
          *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4012),
          v21,
          1,
          0,
          *(_DWORD *)(v21 + 1068));
      }
      else
      {
        (*(void (__thiscall **)(_DWORD *, _DWORD *, _DWORD, _DWORD, int, int, _DWORD, _DWORD))(*v13 + 364))( /*0x54cdbd*/
          v13,
          v13 + 27,
          0,
          *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.__pad_FC[324] + 4012),
          v21,
          1,
          0,
          0);
      }
    }
  }
  v47 = 1; /*0x54cdc6*/
  v23 = (int *)(*(_DWORD *)this->__pad_C + 156); /*0x54cdcb*/
  v54 = *v23; /*0x54cdd3*/
  v55 = v23[1]; /*0x54cddf*/
  v56 = v23[2]; /*0x54cde6*/
  v24 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v54); /*0x54cdf4*/
  landType = v24->landType; /*0x54cdf6*/
  if ( landType != 2 || (v48 = 1, v45) ) /*0x54ce0c*/
    v48 = 0; /*0x54ce0e*/
  v26 = landType == 6 && !v45; /*0x54ce24*/
  v27 = (*(int (__thiscall **)(_DWORD, CellClass *, int, int, _DWORD, int))(**(_DWORD **)this->__pad_C + 428))( /*0x54ce34*/
          *(_DWORD *)this->__pad_C,
          v24,
          -1,
          -1,
          0,
          1);
  v28 = *(_DWORD *)this->__pad_C; /*0x54ce3a*/
  v29 = v27; /*0x54ce3d*/
  if ( v28 /*0x54ce5c*/
    && (*(int (__thiscall **)(int))(*(_DWORD *)v28 + 44))(v28) == 2
    && !(unsigned __int8)Cell::IsBuildable((bool *)v24, 2, 1, 1, -1, 0, -1, 1) )
  {
    v29 = 7; /*0x54ce65*/
  }
  if ( *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)this->__pad_C + 132))(*(_DWORD *)this->__pad_C) + 3476) /*0x54ce9a*/
    && !(unsigned __int8)Cell::IsBuildable((bool *)v24, 2, 1, 1, -1, 0, -1, 1)
    || v29 )
  {
    if ( v48 && !v26 ) /*0x54ceae*/
    {
      *(_BYTE *)(*(_DWORD *)this->__pad_C + 973) = 1; /*0x54ceb7*/
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)this->__pad_C + 928))(*(_DWORD *)this->__pad_C); /*0x54cec3*/
      v30 = *(_DWORD *)this->__pad_C; /*0x54cec9*/
      v31 = *(TechnoClass **)(v30 + 728); /*0x54cecc*/
      if ( v31 ) /*0x54ced4*/
      {
        TechnoClass::MutateAll(v31, *(_DWORD *)(v30 + 1064), 0); /*0x54cedf*/
        v32 = *(_DWORD *)(*(_DWORD *)this->__pad_C + 728); /*0x54cee7*/
        if ( v32 ) /*0x54ceef*/
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v32 + 32))(v32, 1); /*0x54cef5*/
        *(_DWORD *)(*(_DWORD *)this->__pad_C + 728) = 0; /*0x54cefb*/
      }
      v33 = *(_DWORD **)this->__pad_C; /*0x54cf05*/
      if ( v33[266] ) /*0x54cf08*/
      {
        (*(void (__thiscall **)(_DWORD *, _DWORD))(*v33 + 224))(v33, v33[266]); /*0x54cf15*/
      }
      else if ( v33[267] ) /*0x54cf20*/
      {
        (*(void (__thiscall **)(_DWORD *, _DWORD))(*v33 + 228))(v33, v33[267]); /*0x54cf31*/
      }
      goto LABEL_65; /*0x54cf1b*/
    }
  }
  else
  {
    v34 = *(_DWORD *)this->__pad_C; /*0x54cf3c*/
    if ( *(_DWORD *)(v34 + 1400) /*0x54cf75*/
      || *(_DWORD *)(v34 + 1404) != 1075052544 && (*(_DWORD *)(v34 + 1400) || *(_DWORD *)(v34 + 1404) != 1075576832)
      || v48 && !v26 )
    {
      v35 = *(_DWORD *)this->__pad_C; /*0x54cf77*/
      if ( *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)v35 + 444))(v35) + 224) == v35 ) /*0x54cf8a*/
      {
        v36 = (CellClass *)(*(int (__thiscall **)(int))(*(_DWORD *)v35 + 444))(v35); /*0x54cf92*/
        CellClass::AttachObject(v36, 0); /*0x54cf9a*/
      }
      v37 = *(_DWORD *)this->__pad_C; /*0x54cf9f*/
      *(_DWORD *)&this->__pad_48[8] = 4; /*0x54cfa2*/
      (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v37 + 1152))(v37, 0, 1); /*0x54cfaf*/
      goto LABEL_65; /*0x54cfb5*/
    }
  }
LABEL_64:
  v46 = 1; /*0x54cfb7*/
LABEL_65:
  v38 = *(_DWORD *)this->__pad_C; /*0x54cfbc*/
  if ( v38 && (*(int (__thiscall **)(int))(*(_DWORD *)v38 + 456))(v38) > 0 ) /*0x54cfcf*/
  {
    if ( !v45 ) /*0x54cfd7*/
    {
      v39 = *(_DWORD *)this->__pad_C; /*0x54cfd9*/
      if ( !*(_BYTE *)(v39 + 1709) || v46 ) /*0x54cfec*/
      {
        *(_DWORD *)(v39 + 1064) = 0; /*0x54cfee*/
        *(_DWORD *)(*(_DWORD *)this->__pad_C + 1068) = 0; /*0x54cff7*/
      }
      goto LABEL_74; /*0x54cffd*/
    }
  }
  else if ( !v45 ) /*0x54d005*/
  {
    goto LABEL_74; /*0x54d005*/
  }
  if ( v47 ) /*0x54d00d*/
    *(_BYTE *)(*(_DWORD *)this->__pad_C + 140) = 1; /*0x54d012*/
LABEL_74:
  if ( ((*(int (__thiscall **)(_DWORD))(**(_DWORD **)this->__pad_C + 456))(*(_DWORD *)this->__pad_C) <= 0 /*0x54d043*/
     || (LOBYTE(v40) = v45) != 0)
    && (!*(_BYTE *)(*(_DWORD *)this->__pad_C + 1709) || (LOBYTE(v40) = v46) != 0) )
  {
    v41 = *(_DWORD *)this->__pad_C; /*0x54d045*/
    if ( *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)v41 + 444))(v41) + 224) == v41 ) /*0x54d058*/
    {
      v42 = (CellClass *)(*(int (__thiscall **)(int))(*(_DWORD *)v41 + 444))(v41); /*0x54d05f*/
      CellClass::AttachObject(v42, 0); /*0x54d067*/
    }
    GadgetGrid::RemoveItem((GadgetGrid *)&g_CellClassManager, *(_DWORD *)this->__pad_C); /*0x54d075*/
    v43 = *(_DWORD *)this->__pad_C; /*0x54d07a*/
    *(_DWORD *)this->__pad_78 = 0; /*0x54d07d*/
    *(_DWORD *)&this->__pad_48[8] = 6; /*0x54d083*/
    *(_DWORD *)&this->__pad_78[4] = 0; /*0x54d08a*/
    (**(void (__thiscall ***)(int, int, _DWORD))(v43 + 8))(v43 + 8, 4476, 0); /*0x54d095*/
    v40 = *(_DWORD *)this->__pad_C; /*0x54d097*/
    if ( v40 ) /*0x54d09c*/
    {
      *(_DWORD *)(v40 + 1064) = 0; /*0x54d09e*/
      v40 = *(_DWORD *)this->__pad_C; /*0x54d0a4*/
      *(_DWORD *)(v40 + 1068) = 0; /*0x54d0a7*/
    }
  }
  return v40; /*0x54d0ad*/
}



// ==== 0x0054D0C0  nullsub_156  this=-  sig=ida-proto ====
void nullsub_156()
{
  ; /*0x54d0c0*/
}



// ==== 0x0054D0D0  JumpjetLocomotionClass::CheckCompositeState  this=JumpjetLocomotionClass  sig=csp ====
bool __stdcall JumpjetLocomotionClass::CheckCompositeState(JumpjetLocomotionClass *this)
{
  int v1; // eax

  v1 = *(_DWORD *)&this->IsMoving; /*0x54d0d4*/
  return v1 && v1 != 2; /*0x54d0e2*/
}



// ==== 0x0054D0F0  JumpjetLocomotion::UpdateFacing  this=JumpjetLocomotion  sig=csp ====
int __thiscall JumpjetLocomotion::UpdateFacing(JumpjetLocomotion *this)
{
  int v2; // eax
  _BYTE *v3; // ecx
  double v4; // st7
  double v5; // st7
  unsigned __int8 v7; // c0
  unsigned __int8 v8; // c3
  unsigned __int64 v9; // st7
  int v10; // edi
  int v11; // ebp
  _WORD *v12; // eax
  int v13; // eax
  double v14; // st7
  int v15; // eax
  int v16; // edx
  int v17; // kr10_4
  int v18; // ecx
  int v19; // ebp
  int v20; // ecx
  int GroundHeight; // ebx
  int v22; // eax
  int v23; // edx
  int v24; // edx
  int v25; // eax
  int v26; // edi
  int v27; // ebp
  int v28; // ecx
  int v29; // eax
  int *v30; // eax
  int v31; // ebx
  int v32; // ecx
  int v33; // eax
  int v34; // ebp
  int v35; // eax
  int v36; // ebp
  int v37; // ebx
  _WORD *v38; // eax
  int v39; // ecx
  int *v40; // eax
  int v41; // edi
  int v42; // eax
  unsigned int v43; // ebp
  unsigned int v44; // ebx
  int v45; // eax
  int v46; // eax
  int v47; // ecx
  _BYTE *v48; // ecx
  int v49; // edi
  int v50; // eax
  int v51; // ecx
  int result; // eax
  int *v53; // [esp+4h] [ebp-54h]
  _DWORD *Value; // [esp+4h] [ebp-54h]
  char v55; // [esp+19h] [ebp-3Fh]
  char v56; // [esp+1Ah] [ebp-3Eh]
  char v57; // [esp+1Ah] [ebp-3Eh]
  char v58; // [esp+1Bh] [ebp-3Dh]
  int v59; // [esp+1Ch] [ebp-3Ch] BYREF
  double v60; // [esp+20h] [ebp-38h]
  double v61; // [esp+28h] [ebp-30h] BYREF
  double v62; // [esp+30h] [ebp-28h] BYREF
  int v63; // [esp+38h] [ebp-20h]
  int v64; // [esp+40h] [ebp-18h]
  int v65; // [esp+44h] [ebp-14h]
  _DWORD v66[3]; // [esp+4Ch] [ebp-Ch] BYREF

  v2 = *(_DWORD *)&this->__pad_48[8]; /*0x54d0ff*/
  if ( v2 == 2 || (v55 = 1, v2 == 3) ) /*0x54d10f*/
    v55 = 0; /*0x54d111*/
  v3 = *(_BYTE **)this->__pad_C; /*0x54d116*/
  v58 = v3[116]; /*0x54d11c*/
  if ( v55 ) /*0x54d126*/
    (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)v3 + 292))(v3, 0); /*0x54d12c*/
  else
    v3[116] = 0; /*0x54d134*/
  if ( *(double *)this->__pad_78 > *(double *)&this->__pad_5C[20] ) /*0x54d143*/
  {
    v4 = *(float *)&this->__pad_C[36] + *(double *)&this->__pad_5C[20]; /*0x54d148*/
    *(double *)&this->__pad_5C[20] = v4; /*0x54d14b*/
    v61 = (double)*(int *)&this->__pad_C[20]; /*0x54d151*/
    if ( v4 >= v61 ) /*0x54d15e*/
      v4 = v61; /*0x54d162*/
    *(double *)&this->__pad_5C[20] = v4; /*0x54d166*/
  }
  if ( *(double *)this->__pad_78 < *(double *)&this->__pad_5C[20] ) /*0x54d174*/
  {
    v5 = *(double *)&this->__pad_5C[20] - *(float *)&this->__pad_C[36] * 1.5; /*0x54d17f*/
    *(double *)&this->__pad_5C[20] = v5; /*0x54d188*/
    if ( v7 | v8 ) /*0x54d18d*/
      v5 = 0.0; /*0x54d194*/
    *(double *)&this->__pad_5C[20] = v5; /*0x54d19a*/
  }
  *(double *)&v9 = *(double *)&this->__pad_5C[20] / (double)*(int *)&this->__pad_C[20]; /*0x54d1a6*/
  (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)this->__pad_C + 1348))( /*0x54d1ae*/
    *(_DWORD *)this->__pad_C,
    v9,
    HIDWORD(v9));
  v10 = (int)this->JumpjetLocomotion_field_0x40 / 256; /*0x54d1da*/
  v11 = (int)this->JumpjetLocomotion_field_0x44 / 256; /*0x54d1dd*/
  v12 = (_WORD *)(*(int (__thiscall **)(_DWORD, double *))(**(_DWORD **)this->__pad_C + 440))( /*0x54d1e0*/
                   *(_DWORD *)this->__pad_C,
                   &v61);
  if ( *v12 != (_WORD)v10 || (v56 = 1, v12[1] != (_WORD)v11) ) /*0x54d1f4*/
    v56 = 0; /*0x54d1f6*/
  v13 = *(_DWORD *)&this->__pad_48[8]; /*0x54d1fb*/
  if ( (v13 == 2 || v13 == 3) && !this->__pad_C[48] ) /*0x54d208*/
  {
    *(double *)&this->__pad_85[3] = 6.283185307179586 / (15.0 / *(float *)&this->__pad_C[40]) /*0x54d224*/
                                  + *(double *)&this->__pad_85[3];
  }
  else
  {
    *(_DWORD *)&this->__pad_85[3] = 0; /*0x54d22e*/
    this->JumpjetLocomotion_field_0x8C = 0; /*0x54d234*/
  }
  Math::SinCos(*(double *)&this->__pad_85[3]); /*0x54d248*/
  v14 = *(double *)&v9 * (double)*(int *)&this->__pad_C[44] + (double)*(int *)&this->__pad_78[8]; /*0x54d253*/
  v17 = Math::RoundToInt(v14); /*0x54d259*/
  LOWORD(v16) = HIWORD(v17); /*0x54d259*/
  LOWORD(v15) = v17; /*0x54d259*/
  v18 = *(_DWORD *)this->__pad_C; /*0x54d25e*/
  LODWORD(v60) = v15; /*0x54d261*/
  v19 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v18 + 464))(v18, v16); /*0x54d270*/
  v20 = *(_DWORD *)this->__pad_C + 156; /*0x54d272*/
  v59 = v19; /*0x54d278*/
  v62 = *(double *)v20; /*0x54d27e*/
  v63 = *(_DWORD *)(v20 + 8); /*0x54d291*/
  GroundHeight = Cell::GetGroundHeight(&v62); /*0x54d29f*/
  v22 = *(_DWORD *)this->__pad_C + 156; /*0x54d2a4*/
  v62 = *(double *)v22; /*0x54d2ab*/
  v63 = *(_DWORD *)(v22 + 8); /*0x54d2c3*/
  if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v62)->flags[0] & 0x100) != 0 ) /*0x54d2d5*/
  {
    v23 = *(_DWORD *)this->__pad_C + 156; /*0x54d2da*/
    v62 = *(double *)v23; /*0x54d2e2*/
    v24 = *(_DWORD *)(v23 + 8); /*0x54d2f5*/
    LODWORD(v61) = GroundHeight + 4 * dword_ABC5E8; /*0x54d2f8*/
    v63 = v24; /*0x54d2fc*/
    v14 = (double)v24; /*0x54d300*/
    if ( (double)SLODWORD(v61) - *(float *)&this->__pad_C[28] <= v14 ) /*0x54d312*/
      GroundHeight += dword_ABC5DC; /*0x54d314*/
  }
  v25 = *(_DWORD *)&this->__pad_48[8]; /*0x54d31a*/
  if ( v25 == 4 /*0x54d339*/
    || !v25
    || v56
    && !*(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)this->__pad_C + 132))(*(_DWORD *)this->__pad_C) + 3434) )
  {
    v26 = v19 - GroundHeight; /*0x54d352*/
  }
  else
  {
    v26 = v19 - JumpjetLocomotionClass::GetFloorZSetContext((JumpjetLocomotionClass *)this); /*0x54d34c*/
  }
  LODWORD(v61) = v26; /*0x54d358*/
  v57 = 0; /*0x54d35e*/
  if ( v26 < SLODWORD(v60) ) /*0x54d363*/
  {
    v27 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)this->__pad_C + 456))(*(_DWORD *)this->__pad_C); /*0x54d377*/
    v28 = *(_DWORD *)this->__pad_C + 156; /*0x54d379*/
    v62 = *(double *)v28; /*0x54d381*/
    v63 = *(_DWORD *)(v28 + 8); /*0x54d394*/
    if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v62)->flags[0] & 0x100) != 0 ) /*0x54d3ab*/
    {
      v29 = *(_DWORD *)this->__pad_C; /*0x54d3ad*/
      if ( !*(_BYTE *)(v29 + 140) ) /*0x54d3b0*/
      {
        v30 = (int *)(v29 + 156); /*0x54d3ba*/
        v64 = *v30; /*0x54d3c3*/
        v65 = v30[1]; /*0x54d3ca*/
        v31 = v30[2]; /*0x54d3ce*/
        v62 = *(double *)v30; /*0x54d3d3*/
        v63 = v30[2]; /*0x54d3eb*/
        if ( v31 >= dword_ABC5DC + Cell::GetGroundHeight(&v62) ) /*0x54d3ff*/
          v27 -= dword_ABC5DC; /*0x54d401*/
      }
    }
    if ( !v27 ) /*0x54d405*/
    {
      v32 = *(_DWORD *)this->__pad_C; /*0x54d407*/
      v62 = *(double *)(v32 + 156); /*0x54d416*/
      v63 = *(_DWORD *)(v32 + 164); /*0x54d424*/
      (*(void (__thiscall **)(int, double *))(*(_DWORD *)v32 + 244))(v32, &v62); /*0x54d42f*/
      *(_BYTE *)(*(_DWORD *)this->__pad_C + 140) = 0; /*0x54d438*/
    }
    v14 = (double)SLODWORD(v61) + *(float *)&this->__pad_C[24]; /*0x54d443*/
    if ( (double)SLODWORD(v60) >= v14 ) /*0x54d451*/
    {
      v14 = (double)v59 + *(float *)&this->__pad_C[24]; /*0x54d469*/
      LOWORD(v33) = Math::RoundToInt(v14); /*0x54d46c*/
      v59 = v33; /*0x54d471*/
    }
    else
    {
      v59 += LODWORD(v60) - v26; /*0x54d45f*/
    }
LABEL_49:
    v57 = 1; /*0x54d4bb*/
    goto LABEL_50; /*0x54d4bb*/
  }
  if ( v26 > SLODWORD(v60) )
  {
    v14 = (double)SLODWORD(v61) - *(float *)&this->__pad_C[24]; /*0x54d47d*/
    if ( (double)SLODWORD(v60) <= v14 ) /*0x54d48b*/
    {
      v14 = (double)v59 - *(float *)&this->__pad_C[24]; /*0x54d49b*/
      LOWORD(v35) = Math::RoundToInt(v14); /*0x54d49e*/
      v59 = v35; /*0x54d4a3*/
      v34 = v35; /*0x54d4a7*/
    }
    else
    {
      v34 = LODWORD(v60) - v26 + v19; /*0x54d48f*/
      v59 = v34; /*0x54d491*/
    }
    if ( v34 <= GroundHeight ) /*0x54d4ab*/
      v59 = GroundHeight; /*0x54d4ad*/
    v26 = v26 <= 0 ? 0 : v26;
    goto LABEL_49; /*0x54d4b9*/
  }
LABEL_50:
  v36 = (int)this->JumpjetLocomotion_field_0x40 / 256; /*0x54d4c0*/
  v37 = (int)this->JumpjetLocomotion_field_0x44 / 256; /*0x54d4e9*/
  v38 = (_WORD *)(*(int (__thiscall **)(_DWORD, double *))(**(_DWORD **)this->__pad_C + 440))( /*0x54d4ec*/
                   *(_DWORD *)this->__pad_C,
                   &v61);
  if ( *v38 != (_WORD)v36 || v38[1] != (_WORD)v37 ) /*0x54d4fb*/
  {
    v39 = LODWORD(v60); /*0x54d4fd*/
    if ( v26 < SLODWORD(v60) / 2 ) /*0x54d50a*/
    {
      *(_DWORD *)&this->__pad_5C[20] = 0; /*0x54d50e*/
      this->JumpjetLocomotion_field_0x74 = 0; /*0x54d511*/
    }
    if ( v26 < v39 / 4 ) /*0x54d525*/
    {
      *(_DWORD *)&this->__pad_5C[20] = 0; /*0x54d527*/
      this->JumpjetLocomotion_field_0x74 = 0; /*0x54d52a*/
    }
  }
  if ( v57 ) /*0x54d537*/
  {
    ObjectClass::SetAnim(*(ObjectClass **)this->__pad_C, v59); /*0x54d541*/
    if ( v55 ) /*0x54d54c*/
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)this->__pad_C + 292))(*(_DWORD *)this->__pad_C, 0); /*0x54d554*/
  }
  v40 = (int *)(*(_DWORD *)this->__pad_C + 156); /*0x54d55d*/
  v64 = *v40; /*0x54d567*/
  v65 = v40[1]; /*0x54d56e*/
  v41 = v40[2]; /*0x54d572*/
  LOWORD(v42) = Math::RoundToInt(v14); /*0x54d575*/
  LODWORD(v60) = v42; /*0x54d57a*/
  v61 = (double)(*(__int16 *)ProgressTimer::GetValue((ProgressTimer *)&this->__pad_48[12], &v59) - 0x3FFF) /*0x54d5a2*/
      * -0.00009587672516830327;
  v43 = HIDWORD(v61); /*0x54d5aa*/
  v44 = LODWORD(v61); /*0x54d5ae*/
  v60 = (double)SLODWORD(v60); /*0x54d5b4*/
  v62 = (double)v65; /*0x54d5bc*/
  Math::SinCos(v61); /*0x54d5c0*/
  LOWORD(v45) = Math::RoundToInt(v14); /*0x54d5cd*/
  LODWORD(v61) = v45; /*0x54d5d4*/
  Math::ArcTan2(COERCE_DOUBLE(__PAIR64__(v43, v44))); /*0x54d5d8*/
  LOWORD(v46) = Math::RoundToInt(v14 * v60 + (double)v64); /*0x54d5e8*/
  v47 = *(_DWORD *)this->__pad_C; /*0x54d5f1*/
  v66[1] = LODWORD(v61); /*0x54d5f4*/
  v66[0] = v46; /*0x54d5f8*/
  v66[2] = v41; /*0x54d5fc*/
  (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v47 + 436))(v47, v66); /*0x54d607*/
  v48 = *(_BYTE **)this->__pad_C; /*0x54d60d*/
  if ( !v48[1709] )
  {
    if ( v48
      && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v48 + 44))(v48) == 15
      && ((v49 = *(_DWORD *)this->__pad_C) != 0
        ? (v50 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v49 + 44))(*(_DWORD *)this->__pad_C) == 15 ? v49 : 0)
        : (v50 = 0),
          *(_BYTE *)(*(_DWORD *)(v50 + 1728) + 3787)
       && *(_DWORD *)&this->__pad_48[8] == 2
       && (v51 = *(_DWORD *)this->__pad_C, *(_DWORD *)(v51 + 692))) )
    {
      v53 = ObjectClass::CalcTargetFacing((ObjectClass *)v51, (int *)&v61, *(_DWORD *)(v51 + 692)); /*0x54d675*/
      FacingClass::Set_SyncLog(&this->__pad_48[12], v53); /*0x54d679*/
    }
    else
    {
      Value = ProgressTimer::GetValue((ProgressTimer *)&this->__pad_48[12], &v61); /*0x54d68b*/
      FacingClass::Set_SyncLog((char *)(*(_DWORD *)this->__pad_C + 904), Value); /*0x54d692*/
    }
  }
  if ( v55 ) /*0x54d69d*/
    return (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)this->__pad_C + 292))(*(_DWORD *)this->__pad_C, 1); /*0x54d6a6*/
  result = *(_DWORD *)this->__pad_C; /*0x54d6b4*/
  *(_BYTE *)(result + 116) = v58; /*0x54d6bd*/
  return result; /*0x54d6ac*/
}



// ==== 0x0054D6D0  JumpjetLocomotionClass::ProcessLanding  this=JumpjetLocomotionClass  sig=csp ====
int *__thiscall JumpjetLocomotionClass::ProcessLanding(JumpjetLocomotionClass *this, int *a2, _DWORD *a3)
{
  FootClass *LinkedTo; // ecx
  CellClass *v4; // eax
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

  LinkedTo = this->?; /*0x54d6d0*/
  if ( LinkedTo && (*((int (__thiscall **)(FootClass *))LinkedTo->TechnoClass + 11))(LinkedTo) == 1 ) /*0x54d6e7*/
  {
    v4 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], a3); /*0x54d6f7*/
    v5 = (int *)(*(int (__thiscall **)(CellClass *, int *))(v4->mapCoords[0] + 72))(v4, v15); /*0x54d705*/
    v6 = dword_ABC5A8; /*0x54d70a*/
    v12 = *v5; /*0x54d712*/
    v7 = v5[1]; /*0x54d718*/
    v13 = v7; /*0x54d71b*/
    v8 = v5[2]; /*0x54d71f*/
    GroundHeight = v8; /*0x54d722*/
    if ( v12 != dword_ABC5A8 || v7 != dword_ABC5AC || v8 != dword_ABC5B0 ) /*0x54d736*/
    {
      GroundHeight = Cell::GetGroundHeight(&v12); /*0x54d74b*/
      if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v12)->flags[0] & 0x100) != 0 ) /*0x54d767*/
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
      if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v12)->flags[0] & 0x100) != 0 ) /*0x54d7ee*/
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
int __thiscall JumpjetLocomotionClass::GetFloorZSetContext(JumpjetLocomotionClass *this)
{
  int *location; // eax
  CellClass *v3; // eax
  int ClosestOccupiableCell; // edi
  unsigned int v5; // ecx
  int v6; // eax
  int v7; // ecx
  CellClass *v8; // eax
  int v9; // esi
  int v11; // [esp+8h] [ebp-10h] BYREF
  int v12; // [esp+Ch] [ebp-Ch] BYREF
  int v13; // [esp+10h] [ebp-8h]
  int v14; // [esp+14h] [ebp-4h]

  location = this->?->?; /*0x54d82a*/
  v12 = *location; /*0x54d831*/
  v13 = location[1]; /*0x54d83d*/
  v14 = location[2]; /*0x54d849*/
  v3 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v12); /*0x54d84d*/
  ClosestOccupiableCell = JumpjetLocomotionClass::FindClosestOccupiableCell((JumpjetLocomotionClass *)v3); /*0x54d863*/
  if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v12)->flags[0] & 0x100) != 0 ) /*0x54d873*/
    ClosestOccupiableCell += dword_ABC5DC; /*0x54d875*/
  if ( *(double *)&this->CurrentHeight <= 0.0 ) /*0x54d889*/
    return ClosestOccupiableCell; /*0x54d926*/
  v5 = ((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)&this->__pad_50[4], &v11) >> 12) + 1) >> 1) & 7; /*0x54d8ac*/
  v6 = v12 + g_DDrawSurfaceManager.scenario[2 * v5 + 102]; /*0x54d8bd*/
  v7 = g_DDrawSurfaceManager.scenario[2 * v5 + 103]; /*0x54d8bf*/
  v12 = v6; /*0x54d8c2*/
  v13 += v7; /*0x54d8d4*/
  v8 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v12); /*0x54d8de*/
  v9 = JumpjetLocomotionClass::FindClosestOccupiableCell((JumpjetLocomotionClass *)v8); /*0x54d8ea*/
  if ( (Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v12)->flags[0] & 0x100) != 0 ) /*0x54d904*/
    ClosestOccupiableCell += dword_ABC5DC; /*0x54d906*/
  if ( v9 <= ClosestOccupiableCell ) /*0x54d90e*/
    return (v9 + ClosestOccupiableCell) / 2; /*0x54d920*/
  else
    return v9; /*0x54d910*/
}



// ==== 0x0054D930  JumpjetLocomotionClass::DispatchVirtualCall_4  this=JumpjetLocomotionClass  sig=csp ====
char __stdcall JumpjetLocomotionClass::DispatchVirtualCall_4(JumpjetLocomotionClass *this, int a2)
{
  int v2; // eax
  _DWORD *v3; // eax
  int v4; // edx
  _DWORD v6[3]; // [esp+8h] [ebp-18h] BYREF
  _BYTE v7[12]; // [esp+14h] [ebp-Ch] BYREF

  LOBYTE(v2) = a2; /*0x54d930*/
  if ( !a2 ) /*0x54d93a*/
  {
    v3 = (_DWORD *)(*(int (__stdcall **)(JumpjetLocomotionClass *, _BYTE *))(this->LocomotionClass[0] + 24))(this, v7); /*0x54d949*/
    v6[0] = *v3; /*0x54d954*/
    v4 = v3[1]; /*0x54d958*/
    v6[1] = v4; /*0x54d95b*/
    v2 = v3[2]; /*0x54d95f*/
    v6[2] = v2; /*0x54d964*/
    if ( v6[0] != dword_ABC5A8 || v4 != dword_ABC5AC || v2 != dword_ABC5B0 ) /*0x54d979*/
    {
      if ( !*(_DWORD *)&this->IsMoving || (LOBYTE(v2) = this->__pad_89[3], (_BYTE)v2) ) /*0x54d98a*/
      {
        LOBYTE(v2) = (*((int (__thiscall **)(FootClass *, _DWORD *))this->?->TechnoClass + 61))(this->?, v6); /*0x54d996*/
        this->__pad_89[3] = 0; /*0x54d99c*/
      }
    }
  }
  return v2; /*0x54d9a3*/
}



// ==== 0x0054D9B0  JumpjetLocomotionClass::GetConditionedCoordinate  this=JumpjetLocomotionClass  sig=csp ====
_DWORD *__stdcall JumpjetLocomotionClass::GetConditionedCoordinate(JumpjetLocomotionClass *this, _DWORD *a2)
{
  int v2; // edx
  int v3; // esi
  int v5; // edx
  int v6; // eax

  if ( *(_DWORD *)&this->IsMoving ) /*0x54d9b6*/
  {
    v5 = this->DestinationCoords[0]; /*0x54d9e7*/
    v6 = this->DestinationCoords[1]; /*0x54d9ea*/
    *a2 = *(_DWORD *)&this->__pad_39[3]; /*0x54d9ef*/
    a2[1] = v5; /*0x54d9f1*/
    a2[2] = v6; /*0x54d9f4*/
    return a2; /*0x54d9f7*/
  }
  else
  {
    v2 = this->?->?[1]; /*0x54d9c7*/
    v3 = this->?->?[2]; /*0x54d9ca*/
    *a2 = this->?->?[0]; /*0x54d9d3*/
    a2[1] = v2; /*0x54d9d5*/
    a2[2] = v3; /*0x54d9d8*/
    return a2; /*0x54d9cd*/
  }
}



// ==== 0x0054DA00  JumpjetLocomotionClass::StubReturnZero_9  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::StubReturnZero_9(JumpjetLocomotionClass *this, int a2)
{
  if ( !a2 ) /*0x54da06*/
    return -2147467261; /*0x54da08*/
  if ( *(_DWORD *)&this->__pad_74[8] ) /*0x54da14*/
    return -2147467259; /*0x54da3b*/
  *(_DWORD *)&this->__pad_74[8] = a2; /*0x54da22*/
  (*(void (__stdcall **)(int))(*(_DWORD *)a2 + 4))(a2); /*0x54da28*/
  return 0; /*0x54da0d*/
}



// ==== 0x0054DA50  JumpjetLocomotionClass::StubReturnZero_10  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::StubReturnZero_10(JumpjetLocomotionClass *this, _DWORD *a2)
{
  int v3; // eax
  _DWORD *v4; // ecx
  int v5; // eax

  if ( !a2 ) /*0x54da5b*/
    return -2147467261; /*0x54da5f*/
  v3 = *((_DWORD *)this - 3); /*0x54da6c*/
  if ( v3 ) /*0x54da71*/
  {
    if ( *(_BYTE *)(v3 + 1709) || *(_BYTE *)(v3 + 1710) ) /*0x54da7b*/
    {
      *(_BYTE *)(v3 + 1709) = 0; /*0x54da83*/
      *(_BYTE *)(*((_DWORD *)this - 3) + 1710) = 0; /*0x54da8c*/
      v4 = (_DWORD *)*((_DWORD *)this - 3); /*0x54da92*/
      if ( !*(_BYTE *)(v4[135] + 492) && *(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*v4 + 132))(v4) + 1516) ) /*0x54daab*/
        (*(void (__thiscall **)(_DWORD, int, _DWORD))(**((_DWORD **)this - 3) + 488))(*((_DWORD *)this - 3), 10, 0); /*0x54dabb*/
    }
    *(_DWORD *)(*((_DWORD *)this - 3) + 1064) = 0; /*0x54dac4*/
    *(_DWORD *)(*((_DWORD *)this - 3) + 1068) = 0; /*0x54dacd*/
  }
  v5 = *(_DWORD *)&this->__pad_74[8]; /*0x54dad3*/
  if ( !v5 ) /*0x54dad8*/
    return 1; /*0x54dae9*/
  *a2 = v5; /*0x54dada*/
  *(_DWORD *)&this->__pad_74[8] = 0; /*0x54dadc*/
  return 0; /*0x54da5d*/
}



// ==== 0x0054DB00  JumpjetLocomotionClass::StubReturnTrue_2  this=JumpjetLocomotionClass  sig=csp ====
bool __stdcall JumpjetLocomotionClass::StubReturnTrue_2(JumpjetLocomotionClass *this)
{
  int v1; // esi
  bool result; // al

  result = 0; /*0x54db3e*/
  if ( !(*(unsigned __int8 (__stdcall **)(char *))(*((_DWORD *)this - 5) + 16))((char *)this - 20) ) /*0x54db0c*/
  {
    if ( *(_DWORD *)&this->__pad_74[8] ) /*0x54db13*/
    {
      if ( !this->__pad_74[5] ) /*0x54db1a*/
      {
        v1 = *((_DWORD *)this - 3); /*0x54db21*/
        if ( !*(_BYTE *)(v1 + 1709) || *(_BYTE *)(v1 + 1710) ) /*0x54db2e*/
          return 1; /*0x54db11*/
      }
    }
  }
  return result; /*0x54db3a*/
}



// ==== 0x0054DB50  JumpjetLocomotionClass::LoadLocomotionFromStream_1  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::LoadLocomotionFromStream_1(JumpjetLocomotionClass *this, _DWORD *pad_0)
{
  _DWORD *v2; // ebp
  char *v4; // eax
  int v5; // eax
  int v6; // esi
  int v7; // esi
  JumpjetLocomotionClass *v8; // eax
  JumpjetLocomotionClass *v9; // edi

  v2 = pad_0; /*0x54db51*/
  if ( !pad_0 ) /*0x54db58*/
    return -2147467261; /*0x54db61*/
  v4 = &this->__pad_74[8]; /*0x54db6b*/
  if ( *(_DWORD *)&this->__pad_74[8] ) /*0x54db68*/
  {
    this = 0; /*0x54db74*/
    v5 = StreamClass::Set2((StreamClass *)&this, v4); /*0x54db85*/
    if ( v5 < 0 && v5 != -2147467262 ) /*0x54db93*/
      WinAPI::Wrapper(v5); /*0x54db96*/
    if ( !this ) /*0x54dba1*/
      return -2147467259; /*0x54dbaa*/
    v6 = (*(int (__stdcall **)(JumpjetLocomotionClass *, _DWORD *))(this->LocomotionClass[0] + 12))(this, v2); /*0x54dbb4*/
    if ( this ) /*0x54dbbc*/
    {
      (*(void (__stdcall **)(JumpjetLocomotionClass *))(this->LocomotionClass[0] + 8))(this); /*0x54dbc5*/
      return v6; /*0x54dbcc*/
    }
  }
  else
  {
    pad_0 = 0; /*0x54dbd2*/
    if ( this == (JumpjetLocomotionClass *)24 ) /*0x54dbdc*/
      return -2147467259; /*0x54dbdc*/
    v7 = (**((int (__stdcall ***)(char *, void *, JumpjetLocomotionClass **))this - 6))( /*0x54dbed*/
           (char *)this - 24,
           &unk_818858,
           &this);
    if ( v7 >= 0 ) /*0x54dbf1*/
    {
      v9 = this; /*0x54dc05*/
      ComPtr::Release_Alt((ComPtr *)&pad_0); /*0x54dc0d*/
      v8 = v9; /*0x54dc12*/
      pad_0 = v9->LocomotionClass; /*0x54dc15*/
    }
    else
    {
      ComPtr::Release_Alt((ComPtr *)&pad_0); /*0x54dbf7*/
      v8 = 0; /*0x54dbfc*/
      pad_0 = 0; /*0x54dbfe*/
    }
    if ( v7 < 0 && v7 != -2147467262 ) /*0x54dc23*/
      WinAPI::Wrapper(v7); /*0x54dc26*/
    if ( !v8 ) /*0x54dc31*/
      return -2147467259; /*0x54dc3a*/
    v6 = (*(int (__stdcall **)(JumpjetLocomotionClass *, _DWORD *))(v8->LocomotionClass[0] + 12))(v8, v2); /*0x54dc44*/
    if ( pad_0 ) /*0x54dc4c*/
      (*(void (__stdcall **)(_DWORD *))(*pad_0 + 8))(pad_0); /*0x54dc51*/
  }
  return v6; /*0x54db5a*/
}



// ==== 0x0054DC60  JumpjetLocomotionClass::QueryInterface  this=JumpjetLocomotionClass  sig=csp ====
int __stdcall JumpjetLocomotionClass::QueryInterface(JumpjetLocomotionClass *this, const void *a2, int *a3)
{
  int result; // eax
  int *p_TurnRate; // eax

  result = LocomotionClass::QueryInterface((LocomotionClass *)this, a2, a3); /*0x54dc72*/
  if ( result == -2147467262 ) /*0x54dc7c*/
  {
    if ( !memcmp(a2, &IID_IPiggyback, 0x10u) ) /*0x54dc8b*/
    {
      if ( this ) /*0x54dc92*/
        p_TurnRate = &this->TurnRate; /*0x54dc94*/
      else
        p_TurnRate = 0; /*0x54dc99*/
      *a3 = (int)p_TurnRate; /*0x54dc9b*/
    }
    if ( *a3 ) /*0x54dc9e*/
    {
      (*(void (__stdcall **)(JumpjetLocomotionClass *))(this->LocomotionClass[0] + 4))(this); /*0x54dcb2*/
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
float *__stdcall JumpjetLocomotionClass::ComputeMovementTransform(JumpjetLocomotionClass *this, float *a2, _DWORD *a3)
{
  double v3; // st4
  double v4; // st5
  double v5; // st6
  FootClass *v6; // ecx
  long double v7; // st7
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // edi
  int v12; // eax
  int v13; // eax
  FootClass *Owner; // ecx
  float *Transform; // eax
  float *v16; // eax
  float *v17; // esi
  float *v19; // esi
  float v20; // [esp+4h] [ebp-144h]
  float v21; // [esp+4h] [ebp-144h]
  float v22; // [esp+4h] [ebp-144h]
  float v23; // [esp+14h] [ebp-134h]
  int v24; // [esp+14h] [ebp-134h]
  float v25; // [esp+18h] [ebp-130h]
  int v26; // [esp+18h] [ebp-130h]
  float v27; // [esp+1Ch] [ebp-12Ch]
  int v28; // [esp+1Ch] [ebp-12Ch]
  float v29; // [esp+20h] [ebp-128h]
  float v30; // [esp+24h] [ebp-124h]
  Matrix3x4 v31; // [esp+28h] [ebp-120h] BYREF
  Matrix3x4 v32; // [esp+58h] [ebp-F0h] BYREF
  Transform v33[12]; // [esp+88h] [ebp-C0h] BYREF
  float v34[12]; // [esp+B8h] [ebp-90h] BYREF
  float v35[12]; // [esp+E8h] [ebp-60h] BYREF
  float v36[12]; // [esp+118h] [ebp-30h] BYREF

  if ( *(_BYTE *)((*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 33))(this->?) + 3362) /*0x54dd13*/
    && ((v6 = this->?, fabs(*(float *)&v6->?) >= 0.005) || fabs(*(float *)&v6->?) >= 0.005) )
  {
    if ( a3 ) /*0x54dd23*/
      *a3 = -1; /*0x54dd25*/
    Matrix3x4::Identity(&v32); /*0x54dd2f*/
    Matrix3x4::Identity(&v31); /*0x54dd38*/
    v7 = *(double *)((*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 33))(this->?) + 864); /*0x54dd4b*/
    v25 = v7; /*0x54dd53*/
    v23 = *(double *)((*((int (__thiscall **)(FootClass *))this->?->TechnoClass + 33))(this->?) + 872); /*0x54dd69*/
    Math::ArcTan2(*(float *)&this->?->?); /*0x54dd76*/
    v29 = v3; /*0x54dd7e*/
    Math::SinCos(*(float *)&this->?->?); /*0x54dd8b*/
    v27 = v4; /*0x54dd93*/
    Math::ArcTan2(*(float *)&this->?->?); /*0x54dda0*/
    v30 = v5; /*0x54dda8*/
    Math::SinCos(*(float *)&this->?->?); /*0x54ddb5*/
    LOWORD(v8) = Math::RoundToInt(fabs(v7) * v25 + fabs(v27) * v23); /*0x54ddcf*/
    v28 = v8; /*0x54dddc*/
    LOWORD(v9) = Math::RoundToInt(v29 * v23); /*0x54dde0*/
    LOWORD(v10) = Math::RoundToInt(v23 - (double)v9); /*0x54ddf1*/
    v11 = v10; /*0x54ddfe*/
    v24 = v10; /*0x54de00*/
    LOWORD(v12) = Math::RoundToInt(v30 * v25); /*0x54de04*/
    LOWORD(v13) = Math::RoundToInt(v25 - (double)v12); /*0x54de15*/
    Owner = this->?; /*0x54de1a*/
    v26 = v13; /*0x54de1f*/
    if ( *(float *)&Owner->? < 0.0 ) /*0x54de34*/
      v24 = -v11; /*0x54de38*/
    if ( *(float *)&Owner->? > 0.0 ) /*0x54de4d*/
      v26 = -v13; /*0x54de51*/
    v20 = (float)v28; /*0x54de5e*/
    Matrix3x3::ApplyCol1(v32.m_Data, v20); /*0x54de61*/
    v21 = (float)v24; /*0x54de6f*/
    Matrix3x4::Translate(v31.m_Data, v21); /*0x54de72*/
    v22 = (float)v26; /*0x54de80*/
    Matrix3x3::ApplyCol0(v31.m_Data, v22); /*0x54de83*/
    Matrix3x3::RotateX(v31.m_Data, *(float *)&this->?->?); /*0x54de96*/
    Matrix3D::RotateZ(v31.m_Data, *(float *)&this->?->?); /*0x54dea9*/
    Transform = Turret::GetTransform((LocomotionClass *)this, v35, a3); /*0x54deb8*/
    Transform::Copy(v33, Transform); /*0x54dec5*/
    v16 = MultiplyMatrix3x4(v36, (float *)v32.m_Data, (float *)&v33[0].Transform_field_00); /*0x54dee2*/
    v17 = MultiplyMatrix3x4(v34, v16, (float *)v31.m_Data); /*0x54def5*/
    qmemcpy(a2, v17, 0x30u); /*0x54df06*/
    return a2; /*0x54defc*/
  }
  else
  {
    v19 = Turret::GetTransform((LocomotionClass *)this, v34, a3); /*0x54df29*/
    qmemcpy(a2, v19, 0x30u); /*0x54df39*/
    return a2; /*0x54df30*/
  }
}



// ==== 0x0054DF50  JumpjetLocomotionClass::AddRef  this=JumpjetLocomotionClass  sig=csp ====
LONG __stdcall JumpjetLocomotionClass::AddRef(JumpjetLocomotionClass *this)
{
  return COM::AddRef((LocomotionClass *)this); /*0x54df5a*/
}



// ==== 0x0054DF60  JumpjetLocomotionClass::Release  this=JumpjetLocomotionClass  sig=csp ====
LONG __stdcall JumpjetLocomotionClass::Release(JumpjetLocomotionClass *this)
{
  return COM::ReleaseRef((LocomotionClass *)this); /*0x54df6a*/
}



// ==== 0x0054DF70  JumpjetLocomotionClass::ShortFunc_54DF70  this=JumpjetLocomotionClass  sig=csp ====
BOOL __stdcall JumpjetLocomotionClass::sub_54DF70(int a1)
{
  return *(_DWORD *)(a1 + 124) != 0; /*0x54df7e*/
}



// ==== 0x0054DF90  JumpjetLocomotionClass::CheckAttachStatus  this=JumpjetLocomotionClass  sig=csp ====
int JumpjetLocomotionClass::CheckAttachStatus(JumpjetLocomotionClass *this)
{
  return 152; /*0x54df95*/
}



// ==== 0x0054DFA0  JumpjetLocomotionClass::ProcessAttach  this=JumpjetLocomotionClass  sig=csp ====
_DWORD *__thiscall JumpjetLocomotionClass::ProcessAttach(JumpjetLocomotionClass *this, char a2)
{
  ILocomotion *Piggybackee; // eax

  this->LocomotionClass[0] = (int)&JumpjetLocomotionClass::`vftable'; /*0x54dfa3*/
  this->LocomotionClass[1] = (int)&JumpjetLocomotionClass::`vftable'; /*0x54dfa9*/
  this->TurnRate = (int)&JumpjetLocomotionClass::`vftable'; /*0x54dfb0*/
  Piggybackee = this->Piggybackee; /*0x54dfb7*/
  if ( Piggybackee ) /*0x54dfbf*/
    (*(void (__stdcall **)(ILocomotion *))(*(_DWORD *)Piggybackee + 8))(Piggybackee); /*0x54dfc4*/
  LocomotionClass::Construct((LocomotionClass *)this); /*0x54dfc9*/
  if ( (a2 & 1) != 0 ) /*0x54dfd3*/
    __3_YAXPAX_Z(this); /*0x54dfd6*/
  return this->LocomotionClass; /*0x54dfe0*/
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
  unk_ABC638 = Math::Sqrt(v0 + v0); /*0x54e06e*/
}



// ==== 0x0054E080  sub_54E080  this=-  sig=ida-proto ====
void sub_54E080()
{
  unk_ABC688 = unk_ABC638 / 60.0; /*0x54e08c*/
}



// ==== 0x0054E0A0  sub_54E0A0  this=-  sig=ida-proto ====
void sub_54E0A0()
{
  unk_ABC670 = 1.0 / unk_ABC688; /*0x54e0ac*/
}



// ==== 0x0054E0C0  sub_54E0C0  this=-  sig=ida-proto ====
void sub_54E0C0()
{
  unk_ABC668 = 0.0174532925199433 * 45.0; /*0x54e0cc*/
}



// ==== 0x0054E0E0  sub_54E0E0  this=-  sig=ida-proto ====
void sub_54E0E0()
{
  unk_ABC640 = 0.0174532925199433 * 60.0; /*0x54e0ec*/
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

  v0 = Math::Sin(dbl_ABC5F0 - unk_ABC640); /*0x54e132*/
  result = Math::RoundToInt(v0 * unk_ABC638 * 0.5); /*0x54e146*/
  unk_ABC690 = result; /*0x54e14b*/
  return result; /*0x54e150*/
}



// ==== 0x0054E160  sub_54E160  this=-  sig=ida-proto ====
void sub_54E160()
{
  unk_ABC648 = Math::ArcTan((double)unk_ABC690 * 0.00390625); /*0x54e177*/
}



// ==== 0x0054E190  sub_54E190  this=-  sig=ida-proto ====
void sub_54E190()
{
  unk_ABC660 = Math::ArcTan((double)(2 * unk_ABC690) / unk_ABC638); /*0x54e1b2*/
}



// ==== 0x0054E1C0  sub_54E1C0  this=-  sig=ida-proto ====
__int64 sub_54E1C0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * unk_ABC690) + 0.5); /*0x54e1db*/
  unk_ABC684 = result; /*0x54e1e0*/
  return result; /*0x54e1e6*/
}



// ==== 0x0054E1F0  sub_54E1F0  this=-  sig=ida-proto ====
int sub_54E1F0()
{
  unk_ABC630 = 0; /*0x54e1f2*/
  unk_ABC632 = 0; /*0x54e1f8*/
  return 0; /*0x54e1fe*/
}



// ==== 0x0054E200  sub_54E200  this=-  sig=ida-proto ====
int sub_54E200()
{
  unk_ABC650 = 0; /*0x54e202*/
  unk_ABC654 = 0; /*0x54e207*/
  unk_ABC658 = 0; /*0x54e20c*/
  return 0; /*0x54e211*/
}



// ==== 0x0054E220  sub_54E220  this=-  sig=ida-proto ====
int sub_54E220()
{
  unk_ABC680 = 0; /*0x54e225*/
  unk_ABC678 = 128; /*0x54e22f*/
  unk_ABC67C = 128; /*0x54e234*/
  return 128; /*0x54e239*/
}



// ==== 0x0054E240  sub_54E240  this=-  sig=ida-proto ====
int sub_54E240()
{
  unk_ABC620 = 0; /*0x54e242*/
  unk_ABC624 = 0; /*0x54e247*/
  unk_ABC628 = 0; /*0x54e24c*/
  unk_ABC62C = 0; /*0x54e251*/
  return 0; /*0x54e256*/
}



// ==== 0x0054E260  ObjectClass::method_54E260  this=ObjectClass  sig=csp ====
int sub_54E260(ObjectClass *this)
{
  int v2; // [esp+4h] [ebp-8h]

  g_MissionQueueFrame.nextScenario[0] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x54e26d*/
  g_MissionQueueFrame.nextScenario[2] = 0; /*0x54e276*/
  sub_54EBF0((VectorClass *)&g_MissionQueueFrame.nextScenario[3], 0, 0); /*0x54e280*/
  g_MissionQueueFrame.nextScenario[3] = (int)&DynamicVectorClass<KamikazeControl *>::`vftable'; /*0x54e298*/
  g_MissionQueueFrame.nextScenario[8] = 10; /*0x54e2a2*/
  g_MissionQueueFrame.nextScenario[7] = 0; /*0x54e2ac*/
  g_MissionQueueFrame.nextScenario[0] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x54e2b6*/
  g_MissionQueueFrame.nextScenario[1] = v2; /*0x54e2bb*/
  g_MissionQueueFrame.nextScenario[2] = 100; /*0x54e2c1*/
  return atexit(loc_54E2D0); /*0x54e2cf*/
}



// ==== 0x0054E360  ObjectClass::method_54E360  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_54E360(ObjectClass *this)
{
  void *v2; // [esp+8h] [ebp-8h]

  this->AbstractClass = *(void **)&stru_A8EB00.?[416]; /*0x54e370*/
  this->? = 0; /*0x54e375*/
  this->? = 0; /*0x54e378*/
  this->? = 0; /*0x54e37b*/
  LOBYTE(this->?) = 1; /*0x54e37e*/
  BYTE1(this->?) = 0; /*0x54e382*/
  this->? = &DynamicVectorClass<KamikazeControl *>::`vftable'; /*0x54e385*/
  this->? = (void *)10; /*0x54e38c*/
  this->? = 0; /*0x54e393*/
  this->AbstractClass = *(void **)&stru_A8EB00.?[416]; /*0x54e39e*/
  this->? = v2; /*0x54e3a4*/
  this->? = (void *)100; /*0x54e3a7*/
  return &this->AbstractClass; /*0x54e3aa*/
}



// ==== 0x0054E3B0  UnitClass::GetExitCell  this=UnitClass  sig=csp ====
int __thiscall UnitClass_GetExitCell(int this, _DWORD *a2, _DWORD *a3)
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
  v6 = __2_YAPAXI_Z(8u); /*0x54e3e3*/
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
    v8[1] = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&a3); /*0x54e475*/
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



// ==== 0x0054E4D0  ScenarioClass::UpdateScriptActions  this=ScenarioClass  sig=csp ====
int __thiscall ScenarioClass::UpdateScriptActions(ScenarioClass *this)
{
  int v2; // edx
  int result; // eax
  int v4; // edx
  int v5; // ebp
  _DWORD *v6; // eax
  int v7; // ecx
  int v8; // esi
  unsigned int v9; // edi
  Cell *v10; // eax
  void *NeighbourContent; // eax
  _DWORD v12[4]; // [esp+Ch] [ebp-10h] BYREF

  v2 = this->nextScenario[0]; /*0x54e4d8*/
  result = this->nextScenario[2]; /*0x54e4da*/
  if ( this->nextScenario[0] == -1 ) /*0x54e4e6*/
  {
LABEL_4:
    if ( result ) /*0x54e4f4*/
      return result; /*0x54e4f4*/
    goto LABEL_5; /*0x54e4f4*/
  }
  if ( *(_DWORD *)&stru_A8EB00.?[416] - v2 < result ) /*0x54e4ee*/
  {
    result -= *(_DWORD *)&stru_A8EB00.?[416] - v2; /*0x54e4f0*/
    goto LABEL_4; /*0x54e4f0*/
  }
LABEL_5:
  v4 = v12[2]; /*0x54e4fa*/
  v5 = 0; /*0x54e505*/
  this->nextScenario[0] = *(_DWORD *)&stru_A8EB00.?[416]; /*0x54e507*/
  this->nextScenario[1] = v4; /*0x54e509*/
  this->nextScenario[2] = 30; /*0x54e50c*/
  result = this->nextScenario[7]; /*0x54e50f*/
  if ( result > 0 ) /*0x54e514*/
  {
    do /*0x54e581*/
    {
      v6 = *(_DWORD **)(this->nextScenario[4] + 4 * v5); /*0x54e51a*/
      v7 = v6[1]; /*0x54e51d*/
      v8 = *v6; /*0x54e520*/
      *(_DWORD *)(*v6 + 764) = 1; /*0x54e524*/
      if ( v7 ) /*0x54e52e*/
      {
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v8 + 968))(v8, v7); /*0x54e567*/
      }
      else
      {
        v9 = ((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)(v8 + 904), v12) >> 12) + 1) >> 1) & 7; /*0x54e54c*/
        v10 = (Cell *)(*(int (__thiscall **)(int))(*(_DWORD *)v8 + 444))(v8); /*0x54e54f*/
        NeighbourContent = Cell::GetNeighbourContent(v10, v9); /*0x54e558*/
        (*(void (__thiscall **)(int, void *))(*(_DWORD *)v8 + 968))(v8, NeighbourContent); /*0x54e560*/
      }
      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v8 + 488))(v8, 1, 0); /*0x54e575*/
      result = this->nextScenario[7]; /*0x54e57b*/
      ++v5; /*0x54e57e*/
    }
    while ( v5 < result ); /*0x54e581*/
  }
  return result; /*0x54e584*/
}



// ==== 0x0054E590  AbstractClass::processStateTransition  this=AbstractClass  sig=csp ====
void __thiscall AbstractClass::processStateTransition(AbstractClass *this, int a2)
{
  int v3; // esi
  int uniqueId; // ebx
  int i; // edx
  int referenceCount; // eax
  int v7; // ecx
  int v8; // eax
  _DWORD *v9; // eax
  void *v10; // ebx
  _DWORD *v11; // eax
  int v12; // ecx
  __int16 v13[2]; // [esp+Ch] [ebp-10h] BYREF
  char v14[12]; // [esp+10h] [ebp-Ch] BYREF
  int v15; // [esp+20h] [ebp+4h]

  v3 = this->referenceCount - 1; /*0x54e59b*/
  if ( v3 >= 0 ) /*0x54e59c*/
  {
    uniqueId = this->uniqueId; /*0x54e5a2*/
    for ( i = uniqueId + 4 * v3; a2 != **(_DWORD **)i; i -= 4 ) /*0x54e5a9*/
    {
      if ( a2 == *(_DWORD *)(*(_DWORD *)i + 4) ) /*0x54e5b5*/
      {
        v9 = (_DWORD *)(*(int (__stdcall **)(char *))(*(_DWORD *)a2 + 72))(v14); /*0x54e611*/
        LOWORD(v15) = *v9 / 256; /*0x54e624*/
        HIWORD(v15) = v9[1] / 256; /*0x54e63d*/
        *(_DWORD *)v13 = v15; /*0x54e64b*/
        v10 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v13); /*0x54e657*/
        v11 = *(_DWORD **)(this->uniqueId + 4 * v3); /*0x54e65a*/
        (*(void (__thiscall **)(_DWORD, void *))(*(_DWORD *)*v11 + 968))(*v11, v10); /*0x54e661*/
        v12 = **(_DWORD **)(this->uniqueId + 4 * v3); /*0x54e671*/
        (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v12 + 488))(v12, 1, 0); /*0x54e675*/
        *(_DWORD *)(*(_DWORD *)(this->uniqueId + 4 * v3) + 4) = v10; /*0x54e681*/
        return; /*0x54e681*/
      }
      if ( --v3 < 0 ) /*0x54e5bd*/
        return; /*0x54e5bd*/
    }
    __3_YAXPAX_Z(*(void **)(uniqueId + 4 * v3)); /*0x54e5cc*/
    referenceCount = this->referenceCount; /*0x54e5d1*/
    if ( v3 < referenceCount ) /*0x54e5d9*/
    {
      v7 = referenceCount - 1; /*0x54e5df*/
      v8 = v3; /*0x54e5e2*/
      for ( this->referenceCount = v7; /*0x54e5e9*/
            v8 < this->referenceCount;
            *(_DWORD *)(this->uniqueId + 4 * v8 - 4) = *(_DWORD *)(this->uniqueId + 4 * v8) )
      {
        ++v8; /*0x54e5f2*/
      }
    }
  }
}



// ==== 0x0054E690  ObjectClass::method_54E690  this=ObjectClass  sig=csp ====
void __thiscall sub_54E690(ObjectClass *this)
{
  int i; // esi
  void (__thiscall **ptr_C)(void **); // edx
  void **p_vtable3; // esi
  void **v5; // ecx
  int abstractFlags; // edi
  void *v7; // eax

  for ( i = this->? - 1; i >= 0; --i ) /*0x54e699*/
    __3_YAXPAX_Z(*(void **)(this->? + 4 * i)); /*0x54e6a2*/
  ptr_C = (void (__thiscall **)(void **))this->?; /*0x54e6ad*/
  p_vtable3 = &this->?; /*0x54e6b0*/
  v5 = &this->?; /*0x54e6b3*/
  abstractFlags = this->?; /*0x54e6b5*/
  ptr_C[3](v5); /*0x54e6b8*/
  (*((void (__thiscall **)(void **, int, _DWORD))*p_vtable3 + 2))(p_vtable3, abstractFlags, 0); /*0x54e6c3*/
  v7 = p_vtable3[1]; /*0x54e6c6*/
  *p_vtable3 = &VectorClass<KamikazeControl *>::`vftable'; /*0x54e6c9*/
  if ( v7 && *((_BYTE *)p_vtable3 + 13) ) /*0x54e6d3*/
  {
    __3_YAXPAX_Z(v7); /*0x54e6d9*/
    p_vtable3[1] = 0; /*0x54e6e1*/
  }
  *((_BYTE *)p_vtable3 + 13) = 0; /*0x54e6e4*/
  p_vtable3[2] = 0; /*0x54e6e7*/
}



// ==== 0x0054E6F0  LoadGame::CleanupArray  this=LoadGame  sig=csp ====
wchar_t *__thiscall LoadGame::CleanupArray(LoadGame *this)
{
  int i; // esi
  int LoadGame_field_0x14; // ebx
  wchar_t *result; // eax
  int v5; // [esp+10h] [ebp-8h]

  for ( i = this->LoadGame_field_0x1C - 1; i >= 0; --i ) /*0x54e6fc*/
    __3_YAXPAX_Z(*(void **)(this->LoadGame_field_0x10 + 4 * i)); /*0x54e705*/
  LoadGame_field_0x14 = this->LoadGame_field_0x14; /*0x54e713*/
  (*(void (__thiscall **)(int *))(this->LoadGame_field_0x0C + 12))(&this->LoadGame_field_0x0C); /*0x54e71b*/
  (*(void (__thiscall **)(int *, int, _DWORD))(this->LoadGame_field_0x0C + 8))( /*0x54e725*/
    &this->LoadGame_field_0x0C,
    LoadGame_field_0x14,
    0);
  result = *(wchar_t **)&stru_A8EB00.?[416]; /*0x54e728*/
  *(_DWORD *)this->__pad_0 = *(_DWORD *)&stru_A8EB00.?[416]; /*0x54e736*/
  this->LoadGame_field_0x04 = v5; /*0x54e738*/
  this->LoadGame_field_0x08 = 1; /*0x54e73b*/
  return result; /*0x54e73e*/
}



// ==== 0x0054E750  SaveGame::WriteDataArray  this=SaveGame  sig=csp ====
int __thiscall SaveGame::WriteDataArray(SaveGame *this, int *a2)
{
  int v3; // ecx
  int result; // eax
  int i; // edi
  int v6; // [esp+20h] [ebp-4h] BYREF

  v3 = *a2; /*0x54e75c*/
  v6 = *(_DWORD *)&this->__pad_0[28]; /*0x54e769*/
  result = (*(int (__stdcall **)(int *, int *, int, _DWORD))(v3 + 16))(a2, &v6, 4, 0); /*0x54e76d*/
  if ( result >= 0 ) /*0x54e772*/
  {
    for ( i = 0; i < v6; ++i ) /*0x54e77c*/
    {
      result = (*(int (__stdcall **)(int *, _DWORD, int, _DWORD))(*a2 + 16))( /*0x54e78c*/
                 a2,
                 *(_DWORD *)(*(_DWORD *)&this->__pad_0[16] + 4 * i),
                 8,
                 0);
      if ( result < 0 ) /*0x54e791*/
        break; /*0x54e791*/
    }
  }
  return result; /*0x54e79c*/
}



// ==== 0x0054E7B0  LoadGame::LoadPointArray  this=LoadGame  sig=csp ====
int __thiscall LoadGame::LoadPointArray(LoadGame *this, int a2)
{
  int v3; // ebx
  int *v4; // edi
  int LoadGame_field_0x14; // eax
  int *p_LoadGame_field_0x0C; // esi
  int LoadGame_field_0x20; // ecx
  int v8; // eax
  int v9; // edx
  int v11; // [esp+28h] [ebp-8h] BYREF
  LoadGame *v12; // [esp+2Ch] [ebp-4h]
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
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v4); /*0x54e811*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v4 + 1); /*0x54e81f*/
      LoadGame_field_0x14 = v12->LoadGame_field_0x14; /*0x54e828*/
      p_LoadGame_field_0x0C = &v12->LoadGame_field_0x0C; /*0x54e82b*/
      if ( v12->LoadGame_field_0x1C >= LoadGame_field_0x14 ) /*0x54e833*/
      {
        if ( !BYTE1(v12->LoadGame_field_0x18) && LoadGame_field_0x14 ) /*0x54e83e*/
          continue; /*0x54e83e*/
        LoadGame_field_0x20 = v12->LoadGame_field_0x20; /*0x54e840*/
        if ( LoadGame_field_0x20 <= 0 /*0x54e850*/
          || !(*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(*p_LoadGame_field_0x0C + 8))(
                &v12->LoadGame_field_0x0C,
                LoadGame_field_0x14 + LoadGame_field_0x20,
                0) )
        {
          continue; /*0x54e850*/
        }
      }
      v8 = p_LoadGame_field_0x0C[4]; /*0x54e857*/
      v9 = p_LoadGame_field_0x0C[1]; /*0x54e85a*/
      p_LoadGame_field_0x0C[4] = v8 + 1; /*0x54e860*/
      *(_DWORD *)(v9 + 4 * v8) = v4; /*0x54e863*/
      ++v13; /*0x54e871*/
    }
  }
  return v3; /*0x54e87b*/
}



// ==== 0x0054E890  _DynamicVectorClass_PAUKamikazeControl::ClearBuffer  this=DynamicVector  sig=csp ====
void __thiscall JumpjetLocomotionClass_26::ClearBuffer(_DynamicVectorClass_PAUKamikazeControl *this)
{
  void *v2; // eax

  v2 = *(void **)&this->m_1[3]; /*0x54e896*/
  this->m_10 = 0; /*0x54e899*/
  if ( v2 && BYTE1(this->m_C) ) /*0x54e8a0*/
  {
    __3_YAXPAX_Z(v2); /*0x54e8a6*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x54e8ae*/
  }
  BYTE1(this->m_C) = 0; /*0x54e8b1*/
  this->m_8 = 0; /*0x54e8b4*/
}



// ==== 0x0054E8C0  _DynamicVectorClass_PAUKamikazeControl::PointerToIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall JumpjetLocomotionClass_26::PointerToIndex(_DynamicVectorClass_PAUKamikazeControl *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x54e8c0*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x54e8d5*/
  else
    return 0; /*0x54e8c7*/
}



// ==== 0x0054E8E0  _VectorClass_PAUKamikazeControl::Seek  this=VectorClass  sig=csp ====
int __thiscall JumpjetLocomotionClass_26::Seek(_VectorClass_PAUKamikazeControl *this, int a2)
{
  return *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * a2); /*0x54e8ea*/
}



// ==== 0x0054E8F0  _VectorClass_PAUKamikazeControl::AddRef  this=VectorClass  sig=csp ====
char __thiscall JumpjetLocomotionClass_26::AddRef(_VectorClass_PAUKamikazeControl *this, int a2)
{
  int m_8; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x54e8f2*/
  if ( m_8 == *(_DWORD *)(a2 + 8) ) /*0x54e8fd*/
  {
    v3 = 0; /*0x54e8ff*/
    if ( m_8 <= 0 ) /*0x54e903*/
      return 1; /*0x54e923*/
    v4 = *(_DWORD **)&this->m_1[3]; /*0x54e905*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x54e90b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x54e914*/
    {
      ++v3; /*0x54e916*/
      ++v4; /*0x54e917*/
      if ( v3 >= m_8 ) /*0x54e91c*/
        return 1; /*0x54e91c*/
    }
  }
  return 0; /*0x54e91e*/
}



// ==== 0x0054E930  _VectorClass_PAUKamikazeControl::Release  this=VectorClass  sig=csp ====
char __thiscall JumpjetLocomotionClass_26::Release(_VectorClass_PAUKamikazeControl *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x54e93c*/
  {
    LOBYTE(this->m_C) = 0; /*0x54e946*/
    if ( a3 ) /*0x54e94c*/
      v4 = a3; /*0x54e962*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x54e95e*/
    LOBYTE(this->m_C) = 1; /*0x54e966*/
    if ( v4 ) /*0x54e96a*/
    {
      if ( *(_DWORD *)&this->m_1[3] ) /*0x54e975*/
      {
        m_8 = this->m_8; /*0x54e97c*/
        if ( a2 < m_8 ) /*0x54e981*/
          m_8 = a2; /*0x54e983*/
        for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x54e989*/
          ++i; /*0x54e98e*/
        if ( BYTE1(this->m_C) ) /*0x54e99b*/
        {
          __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x54e9a6*/
          *(_DWORD *)&this->m_1[3] = 0; /*0x54e9ae*/
        }
      }
      *(_DWORD *)&this->m_1[3] = v4; /*0x54e9b7*/
      this->m_8 = a2; /*0x54e9bf*/
      BYTE1(this->m_C) = a3 == 0; /*0x54e9c2*/
      return 1; /*0x54e9c8*/
    }
    else
    {
      return 0; /*0x54e96f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAUKamikazeControl *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x54e9d2*/
    return 1; /*0x54e9d8*/
  }
}



// ==== 0x0054E9E0  _VectorClass_PAUKamikazeControl::ddtor  this=VectorClass  sig=csp ====
void __thiscall JumpjetLocomotionClass_26::ddtor(_VectorClass_PAUKamikazeControl *this)
{
  if ( *(_DWORD *)&this->m_1[3] && BYTE1(this->m_C) ) /*0x54e9ed*/
  {
    __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x54e9f3*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x54e9fb*/
  }
  BYTE1(this->m_C) = 0; /*0x54e9fe*/
  this->m_8 = 0; /*0x54ea01*/
}



// ==== 0x0054EA10  _VectorClass_PAUKamikazeControl::Read  this=VectorClass  sig=csp ====
int __thiscall JumpjetLocomotionClass_26::Read(_VectorClass_PAUKamikazeControl *this, _DWORD *a2)
{
  int result; // eax
  int m_8; // edx
  _DWORD *i; // ecx

  if ( !LOBYTE(this->m_C) ) /*0x54ea10*/
    return 0; /*0x54ea18*/
  m_8 = this->m_8; /*0x54ea1e*/
  result = 0; /*0x54ea21*/
  if ( m_8 <= 0 ) /*0x54ea25*/
    return -1; /*0x54ea3c*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x54ea2b*/
  {
    if ( ++result >= m_8 ) /*0x54ea3a*/
      return -1; /*0x54ea3a*/
  }
  return result; /*0x54ea1a*/
}



// ==== 0x0054EA50  _VectorClass_PAUKamikazeControl::Write  this=VectorClass  sig=csp ====
unsigned int __thiscall JumpjetLocomotionClass_26::Write(_VectorClass_PAUKamikazeControl *this, int a2)
{
  if ( LOBYTE(this->m_C) ) /*0x54ea50*/
    return (unsigned int)(a2 - *(_DWORD *)&this->m_1[3]) >> 2; /*0x54ea65*/
  else
    return 0; /*0x54ea57*/
}



// ==== 0x0054EA70  _DynamicVectorClass_PAUKamikazeControl::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall JumpjetLocomotionClass_26::SetCapacity(
        _DynamicVectorClass_PAUKamikazeControl *this,
        int a2,
        _DWORD *a3)
{
  _DWORD *v4; // edi
  int m_8; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x54ea7c*/
  {
    LOBYTE(this->m_C) = 0; /*0x54ea82*/
    if ( a3 ) /*0x54ea88*/
      v4 = a3; /*0x54ea9e*/
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2); /*0x54ea9a*/
    LOBYTE(this->m_C) = 1; /*0x54eaa2*/
    if ( !v4 ) /*0x54eaa6*/
      return 0; /*0x54eb1a*/
    if ( *(_DWORD *)&this->m_1[3] ) /*0x54eaa8*/
    {
      m_8 = this->m_8; /*0x54eaaf*/
      if ( a2 < m_8 ) /*0x54eab4*/
        m_8 = a2; /*0x54eab6*/
      for ( i = 0; i < m_8; v4[i - 1] = *(_DWORD *)(*(_DWORD *)&this->m_1[3] + 4 * i - 4) ) /*0x54eabc*/
        ++i; /*0x54eac1*/
      if ( BYTE1(this->m_C) ) /*0x54eace*/
      {
        __3_YAXPAX_Z(*(void **)&this->m_1[3]); /*0x54ead9*/
        *(_DWORD *)&this->m_1[3] = 0; /*0x54eae1*/
      }
    }
    *(_DWORD *)&this->m_1[3] = v4; /*0x54eaea*/
    this->m_8 = a2; /*0x54eaf2*/
    BYTE1(this->m_C) = a3 == 0; /*0x54eaf5*/
  }
  else
  {
    (*(void (__thiscall **)(_DynamicVectorClass_PAUKamikazeControl *))(*(_DWORD *)this->__pad_0 + 12))(this); /*0x54eafe*/
  }
  v7 = this->m_8; /*0x54eb01*/
  if ( v7 < this->m_10 ) /*0x54eb09*/
    this->m_10 = v7; /*0x54eb0b*/
  return 1; /*0x54eb0e*/
}



// ==== 0x0054EB20  _DynamicVectorClass_PAUKamikazeControl::FindItem  this=DynamicVector  sig=csp ====
int __thiscall JumpjetLocomotionClass_26::FindItem(_DynamicVectorClass_PAUKamikazeControl *this, _DWORD *a2)
{
  int m_10; // edx
  int result; // eax
  _DWORD *i; // ecx

  m_10 = this->m_10; /*0x54eb20*/
  result = 0; /*0x54eb23*/
  if ( m_10 <= 0 ) /*0x54eb28*/
    return -1; /*0x54eb3f*/
  for ( i = *(_DWORD **)&this->m_1[3]; *i != *a2; ++i ) /*0x54eb2e*/
  {
    if ( ++result >= m_10 ) /*0x54eb3d*/
      return -1; /*0x54eb3d*/
  }
  return result; /*0x54eb42*/
}



// ==== 0x0054EB50  _VectorClass_PAUKamikazeControl::QueryInterface  this=VectorClass  sig=csp ====
_DWORD *__thiscall JumpjetLocomotionClass_26::QueryInterface(_VectorClass_PAUKamikazeControl *this, char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x54eb53*/
  *(_DWORD *)this->__pad_0 = &VectorClass<KamikazeControl *>::`vftable'; /*0x54eb56*/
  if ( v3 && BYTE1(this->m_C) ) /*0x54eb60*/
  {
    __3_YAXPAX_Z(v3); /*0x54eb68*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x54eb70*/
  }
  BYTE1(this->m_C) = 0; /*0x54eb7b*/
  this->m_8 = 0; /*0x54eb81*/
  if ( (a2 & 1) != 0 ) /*0x54eb88*/
    __3_YAXPAX_Z(this); /*0x54eb8b*/
  return this->__pad_0; /*0x54eb95*/
}



// ==== 0x0054EBA0  _DynamicVectorClass_PAUKamikazeControl::Constructor_VectorClass_KamikazeControl___  this=DynamicVector  sig=csp ====
_DWORD *__thiscall JumpjetLocomotionClass_26::Constructor_VectorClass_KamikazeControl___(
        _DynamicVectorClass_PAUKamikazeControl *this,
        char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x54eba3*/
  *(_DWORD *)this->__pad_0 = &VectorClass<KamikazeControl *>::`vftable'; /*0x54eba6*/
  if ( v3 && BYTE1(this->m_C) ) /*0x54ebb0*/
  {
    __3_YAXPAX_Z(v3); /*0x54ebb8*/
    *(_DWORD *)&this->m_1[3] = 0; /*0x54ebc0*/
  }
  BYTE1(this->m_C) = 0; /*0x54ebcb*/
  this->m_8 = 0; /*0x54ebd1*/
  if ( (a2 & 1) != 0 ) /*0x54ebd8*/
    __3_YAXPAX_Z(this); /*0x54ebdb*/
  return this->__pad_0; /*0x54ebe5*/
}



// ==== 0x0054EBF0  VectorClass::sub_54EBF0  this=VectorClass  sig=csp ====
_DWORD *__thiscall sub_54EBF0(VectorClass *this, int a2, int a3)
{
  this->Items = 0; /*0x54ebfb*/
  this->Capacity = a2; /*0x54ebfe*/
  this->IsInitialized = 1; /*0x54ec01*/
  this->IsAllocated = 0; /*0x54ec05*/
  this->ptr_0 = &VectorClass<KamikazeControl *>::`vftable'; /*0x54ec08*/
  if ( a2 ) /*0x54ec0e*/
  {
    if ( a3 ) /*0x54ec16*/
    {
      this->Items = (void *)a3; /*0x54ec18*/
      return &this->ptr_0; /*0x54ec1e*/
    }
    this->Items = (void *)__2_YAPAXI_Z(4 * a2); /*0x54ec2d*/
    this->IsAllocated = 1; /*0x54ec30*/
  }
  return &this->ptr_0; /*0x54ec1d*/
}



// ==== 0x0054EC40  sub_54EC40  this=-  sig=ida-proto ====
int sub_54EC40()
{
  unk_ABC6A0 = 0; /*0x54ec42*/
  unk_ABC6A4 = 0; /*0x54ec47*/
  unk_ABC6A8 = 0; /*0x54ec4c*/
  unk_ABC6AC = 0; /*0x54ec51*/
  return 0; /*0x54ec56*/
}



// ==== 0x0054EC60  sub_54EC60  this=-  sig=ida-proto ====
void sub_54EC60()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x54ec6c*/
  unk_ABC6B8 = Math::Sqrt(v0 + v0); /*0x54ec7e*/
}



// ==== 0x0054EC90  sub_54EC90  this=-  sig=ida-proto ====
void sub_54EC90()
{
  dbl_ABC708 = unk_ABC6B8 / 60.0; /*0x54ec9c*/
}



// ==== 0x0054ECB0  sub_54ECB0  this=-  sig=ida-proto ====
void sub_54ECB0()
{
  unk_ABC6F0 = 1.0 / dbl_ABC708; /*0x54ecbc*/
}



// ==== 0x0054ECD0  sub_54ECD0  this=-  sig=ida-proto ====
void sub_54ECD0()
{
  unk_ABC6E8 = 0.0174532925199433 * 45.0; /*0x54ecdc*/
}



// ==== 0x0054ECF0  sub_54ECF0  this=-  sig=ida-proto ====
void sub_54ECF0()
{
  unk_ABC6C0 = 0.0174532925199433 * 60.0; /*0x54ecfc*/
}



// ==== 0x0054ED10  sub_54ED10  this=-  sig=ida-proto ====
void sub_54ED10()
{
  unk_ABC698 = 0.0174532925199433 * 90.0; /*0x54ed1c*/
}



// ==== 0x0054ED30  sub_54ED30  this=-  sig=ida-proto ====
__int64 sub_54ED30()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(unk_ABC698 - unk_ABC6C0); /*0x54ed42*/
  result = Math::RoundToInt(v0 * unk_ABC6B8 * 0.5); /*0x54ed56*/
  dword_ABC710 = result; /*0x54ed5b*/
  return result; /*0x54ed60*/
}



// ==== 0x0054ED70  sub_54ED70  this=-  sig=ida-proto ====
void sub_54ED70()
{
  unk_ABC6C8 = Math::ArcTan((double)dword_ABC710 * 0.00390625); /*0x54ed87*/
}



// ==== 0x0054EDA0  sub_54EDA0  this=-  sig=ida-proto ====
void sub_54EDA0()
{
  unk_ABC6E0 = Math::ArcTan((double)(2 * dword_ABC710) / unk_ABC6B8); /*0x54edc2*/
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
  unk_ABC6B0 = 0; /*0x54ee02*/
  unk_ABC6B2 = 0; /*0x54ee08*/
  return 0; /*0x54ee0e*/
}



// ==== 0x0054EE10  sub_54EE10  this=-  sig=ida-proto ====
int sub_54EE10()
{
  unk_ABC6D0 = 0; /*0x54ee12*/
  unk_ABC6D4 = 0; /*0x54ee17*/
  unk_ABC6D8 = 0; /*0x54ee1c*/
  return 0; /*0x54ee21*/
}



// ==== 0x0054EE30  sub_54EE30  this=-  sig=ida-proto ====
int sub_54EE30()
{
  dword_ABC700 = 0; /*0x54ee35*/
  unk_ABC6F8 = 128; /*0x54ee3f*/
  dword_ABC6FC = 128; /*0x54ee44*/
  return 128; /*0x54ee49*/
}



// ==== 0x0054EE50  nullsub_157  this=-  sig=ida-proto ====
void nullsub_157()
{
  ; /*0x54ee50*/
}



// ==== 0x0054EE60  NetworkSession::ResetState  this=NetworkSession  sig=csp ====
_DWORD *__thiscall NetworkSession::ResetState(NetworkSession *this)
{
  *(_DWORD *)this->__pad_0 = 0; /*0x54ee6a*/
  this->NetworkSession_field_0x04 = 0; /*0x54ee6c*/
  *((_DWORD *)this + 3) = 0; /*0x54ee6f*/
  this->q004 = 0; /*0x54ee72*/
  *((_DWORD *)this + 197) = 0; /*0x54ee78*/
  *((_DWORD *)this + 198) = 0; /*0x54ee7e*/
  memset((char *)this + 20, 0, 0x100u); /*0x54ee84*/
  return this->__pad_0; /*0x54ee88*/
}



// ==== 0x0054F000  EventQueue::Process  this=EventQueue  sig=csp ====
__int16 __thiscall EventQueue::Process(EventQueue *this)
{
  int v2; // eax

  if ( (this->q318 + 1) % 256 != this->q314 ) /*0x54f01e*/
    MessageLoop(); /*0x54f020*/
  v2 = this->q314; /*0x54f025*/
  if ( v2 == this->q318 ) /*0x54f033*/
    return 0; /*0x54f035*/
  else
    return *((_WORD *)this + v2 + 138); /*0x54f03a*/
}



// ==== 0x0054F050  EventQueue::Read  this=EventQueue  sig=csp ====
__int16 __thiscall EventQueue::Read(EventQueue *this)
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
    if ( (this->q318 + 1) % 256 != this->q314 ) /*0x54f06f*/
      MessageLoop(); /*0x54f071*/
    v2 = this->q314; /*0x54f076*/
  }
  while ( v2 == this->q318 || !*((_WORD *)this + v2 + 138) ); /*0x54f086*/
  do /*0x54f0b3*/
  {
    if ( !(unsigned __int8)EventQueue::CheckPosition(this) ) /*0x54f093*/
      MessageLoop(); /*0x54f09c*/
  }
  while ( this->q314 == this->q318 || !EventQueue::Check(this) ); /*0x54f0b3*/
  v3 = this->q314; /*0x54f0bd*/
  v4 = this->q318; /*0x54f0c3*/
  result = 0; /*0x54f0c9*/
  if ( v3 != v4 ) /*0x54f0cd*/
  {
    result = *((_WORD *)this + v3 + 138); /*0x54f0cf*/
    this->q314 = (v3 + 1) % 256; /*0x54f0e8*/
  }
  if ( (unsigned __int8)result == 1 || (unsigned __int8)result == 4 || (unsigned __int8)result == 2 ) /*0x54f106*/
  {
    v6 = this->q314; /*0x54f108*/
    v7 = 0; /*0x54f10e*/
    if ( v6 != v4 ) /*0x54f112*/
    {
      v7 = *((_WORD *)this + v6 + 138); /*0x54f114*/
      this->q314 = (v6 + 1) % 256; /*0x54f12d*/
    }
    v8 = this->q314; /*0x54f134*/
    v9 = 0; /*0x54f140*/
    *(_DWORD *)this = v7; /*0x54f144*/
    if ( v8 != v4 ) /*0x54f146*/
    {
      v9 = *((_WORD *)this + v8 + 138); /*0x54f148*/
      this->q314 = (v8 + 1) % 256; /*0x54f161*/
    }
    this->u32_C = v7; /*0x54f16d*/
    this->u32_10 = v9; /*0x54f171*/
    this->u32_10 = v9; /*0x54f174*/
  }
  else if ( (unsigned __int8)result == 10 ) /*0x54f17e*/
  {
    v10 = this->q314; /*0x54f180*/
    v11 = 0; /*0x54f186*/
    if ( v10 != v4 ) /*0x54f18a*/
    {
      v11 = *((_WORD *)this + v10 + 138); /*0x54f18c*/
      this->q314 = (v10 + 1) % 256; /*0x54f1a5*/
    }
    this->u32_10 = v11; /*0x54f1ab*/
  }
  return result; /*0x54f177*/
}



// ==== 0x0054F1C0  EventBuffer::Enqueue  this=EventBuffer  sig=csp ====
int __thiscall EventBuffer::Enqueue(EventBuffer *this, __int16 a2)
{
  int v2; // edx
  int result; // eax

  v2 = *((_DWORD *)this + 198); /*0x54f1c0*/
  result = (v2 + 1) % 256; /*0x54f1d7*/
  if ( result == *((_DWORD *)this + 197) ) /*0x54f1de*/
  {
    LOBYTE(result) = 0; /*0x54f1f9*/
  }
  else
  {
    *((_WORD *)this + v2 + 138) = a2; /*0x54f1e5*/
    *((_DWORD *)this + 198) = result; /*0x54f1ed*/
    LOBYTE(result) = 1; /*0x54f1f3*/
  }
  return result; /*0x54f1f5*/
}



// ==== 0x0054F200  EventClass::Enqueue  this=EventClass  sig=csp ====
int __thiscall EventClass::Enqueue(EventClass *this, unsigned __int16 a2, char a3)
{
  int result; // eax
  __int16 v5; // si
  int v6; // ecx

  result = ChronoScreen::IsActive(); /*0x54f205*/
  if ( (_BYTE)result ) /*0x54f20c*/
    goto LABEL_19; /*0x54f20c*/
  v5 = a2; /*0x54f217*/
  if ( stru_A8EB00.?[440] ) /*0x54f21d*/
  {
    if ( a2 != 27 ) /*0x54f223*/
      goto LABEL_19; /*0x54f223*/
  }
  Memory_Helper(a2, a3); /*0x54f237*/
  if ( (unsigned __int8)a2 != 1 && (unsigned __int8)a2 != 4 && (unsigned __int8)a2 != 2 && (unsigned __int8)a2 != 10 ) /*0x54f259*/
  {
    if ( (((unsigned __int16)EventClass::GetKeyStateSafe((EventClass *)0x10) >> 8) & 0x80u) != 0 ) /*0x54f268*/
      v5 = a2 | 0x100; /*0x54f26a*/
    if ( (((unsigned __int16)EventClass::GetKeyStateSafe((EventClass *)0x11) >> 8) & 0x80u) != 0 ) /*0x54f27d*/
      v5 |= 0x200u; /*0x54f27f*/
    result = EventClass::GetKeyStateSafe((EventClass *)0x12); /*0x54f28a*/
    if ( (result & 0x8000) != 0 ) /*0x54f292*/
    {
      if ( v5 == 9 ) /*0x54f298*/
      {
LABEL_19:
        LOBYTE(result) = 1; /*0x54f2d7*/
        return result; /*0x54f2dc*/
      }
      v5 |= 0x400u; /*0x54f29a*/
    }
  }
  if ( a3 ) /*0x54f2a2*/
    v5 |= 0x800u; /*0x54f2a4*/
  v6 = *(_DWORD *)&this->__pad_58[704]; /*0x54f2aa*/
  result = (v6 + 1) % 256; /*0x54f2c0*/
  if ( result != *(_DWORD *)&this->__pad_58[700] ) /*0x54f2c7*/
  {
    *(_WORD *)&this->__pad_58[2 * v6 + 188] = v5; /*0x54f2c9*/
    *(_DWORD *)&this->__pad_58[704] = result; /*0x54f2d1*/
    goto LABEL_19; /*0x54f2d1*/
  }
  LOBYTE(result) = 0; /*0x54f2e1*/
  return result; /*0x54f2d7*/
}



// ==== 0x0054F2F0  InputManager::EnqueueInputEvent  this=InputManager  sig=csp ====
char __thiscall InputManager::EnqueueInputEvent(
        InputManager *this,
        unsigned __int16 a2,
        __int16 a3,
        __int16 a4,
        char a5)
{
  __int64 v7; // rax
  int v8; // ecx
  int v9; // eax
  int v10; // ecx
  int v11; // eax

  if ( stru_A8EB00.?[440] ) /*0x54f2fa*/
    return 1; /*0x54f2fc*/
  v7 = *((_DWORD *)this + 198) - *((_DWORD *)this + 197); /*0x54f315*/
  if ( (int)(256 - ((HIDWORD(v7) ^ v7) - HIDWORD(v7))) < 3 /*0x54f343*/
    || (unsigned __int8)a2 != 1 && (unsigned __int8)a2 != 4 && (unsigned __int8)a2 != 2 )
  {
    return 0; /*0x54f3bc*/
  }
  EventClass::Enqueue((EventClass *)this, a2, a5); /*0x54f34d*/
  v8 = *((_DWORD *)this + 198); /*0x54f352*/
  v9 = (v8 + 1) % 256; /*0x54f368*/
  if ( v9 != *((_DWORD *)this + 197) ) /*0x54f36f*/
  {
    *((_WORD *)this + v8 + 138) = a3; /*0x54f376*/
    *((_DWORD *)this + 198) = v9; /*0x54f37e*/
  }
  v10 = *((_DWORD *)this + 198); /*0x54f384*/
  v11 = (v10 + 1) % 256; /*0x54f39a*/
  if ( v11 != *((_DWORD *)this + 197) ) /*0x54f3a1*/
  {
    *((_WORD *)this + v10 + 138) = a4; /*0x54f3a8*/
    *((_DWORD *)this + 198) = v11; /*0x54f3b0*/
  }
  return 1; /*0x54f2fe*/
}



// ==== 0x0054F450  Keyboard::MapKey  this=NetworkSession  sig=csp ====
int __thiscall Keyboard::MapKey(int *this, unsigned __int16 a2)
{
  int result; // eax
  __int16 v5; // di
  UINT v6; // eax
  int v7; // eax
  WORD Char[6]; // [esp+8h] [ebp-Ch] BYREF
  unsigned __int16 v9; // [esp+18h] [ebp+4h]

  if ( (a2 & 0x800) != 0 ) /*0x54f461*/
  {
    LOBYTE(result) = 0; /*0x54f464*/
  }
  else
  {
    result = (unsigned __int8)a2; /*0x54f46f*/
    if ( (unsigned __int8)a2 == 36 ) /*0x54f478*/
    {
      LOBYTE(result) = 8; /*0x54f47b*/
    }
    else if ( (unsigned __int8)a2 == 35 ) /*0x54f488*/
    {
      LOBYTE(result) = 92; /*0x54f48b*/
    }
    else
    {
      v5 = a2 & 0x100; /*0x54f49a*/
      if ( (a2 & 0x100) != 0 ) /*0x54f4a3*/
        *((_BYTE *)this + 36) = 0x80; /*0x54f4a5*/
      v9 = a2 & 0x200; /*0x54f4b2*/
      if ( (a2 & 0x200) != 0 ) /*0x54f4b6*/
        *((_BYTE *)this + 37) = 0x80; /*0x54f4b8*/
      if ( (a2 & 0x400) != 0 ) /*0x54f4c6*/
        *((_BYTE *)this + 38) = 0x80; /*0x54f4c8*/
      v6 = MapVirtualKeyA(a2, 0); /*0x54f4d4*/
      v7 = ToAscii(a2, v6, (const BYTE *)this + 20, Char, 0); /*0x54f4e7*/
      if ( v5 ) /*0x54f4f0*/
        *((_BYTE *)this + 36) = 0; /*0x54f4f2*/
      if ( v9 ) /*0x54f4fc*/
        *((_BYTE *)this + 37) = 0; /*0x54f4fe*/
      if ( (a2 & 0x400) != 0 ) /*0x54f507*/
        *((_BYTE *)this + 38) = 0; /*0x54f509*/
      LOBYTE(v7) = v7 != 1; /*0x54f514*/
      return *(_DWORD *)Char & (v7 - 1); /*0x54f519*/
    }
  }
  return result; /*0x54f463*/
}



// ==== 0x0054F530  ObjectClass::Event_Process  this=ObjectClass  sig=csp ====
char __thiscall Event_Process(ObjectClass *this, __int16 a2)
{
  char result; // al

  if ( (a2 & 0x800) != 0 ) /*0x54f53a*/
    return 0; /*0x54f57f*/
  result = a2; /*0x54f53c*/
  switch ( (char)a2 ) /*0x54f559*/
  {
    case 8: /*0x54f559*/
    case 13: /*0x54f559*/
    case 27: /*0x54f559*/
      return result;
    case 10: /*0x54f559*/
      result = (char)this->?; /*0x54f56c*/
      if ( result == 13 ) /*0x54f571*/
        result = 0; /*0x54f573*/
      LOWORD(this->?) = 0; /*0x54f575*/
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



// ==== 0x0054F5C0  Mouse::IsButtonDown  this=NetworkSession  sig=csp ====
int __stdcall Mouse::IsButtonDown(unsigned __int8 a1)
{
  unsigned __int8 v1; // si

  v1 = a1; /*0x54f5c5*/
  if ( (a1 == 1 || a1 == 2) && GetSystemMetrics(23) == 1 ) /*0x54f5e2*/
    v1 = 2 - (a1 != 1); /*0x54f5eb*/
  return Mouse::GetKeyState(v1) != 0; /*0x54f600*/
}



// ==== 0x0054F650  EventQueue::Check  this=EventQueue  sig=csp ====
__int16 __thiscall EventQueue::Check(EventQueue *this)
{
  int v1; // eax

  v1 = this->q314; /*0x54f650*/
  if ( v1 == this->q318 ) /*0x54f65e*/
    return 0; /*0x54f669*/
  else
    return *((_WORD *)this + v1 + 138); /*0x54f660*/
}



// ==== 0x0054F670  InputManager::PushInputEvent  this=InputManager  sig=csp ====
char __thiscall InputManager::PushInputEvent(InputManager *this, __int16 a2)
{
  int v2; // edx
  int v3; // eax

  v2 = *((_DWORD *)this + 198); /*0x54f670*/
  v3 = (v2 + 1) % 256; /*0x54f687*/
  if ( v3 == *((_DWORD *)this + 197) ) /*0x54f68e*/
    return 0; /*0x54f6a9*/
  *((_WORD *)this + v2 + 138) = a2; /*0x54f695*/
  *((_DWORD *)this + 198) = v3; /*0x54f69d*/
  return 1; /*0x54f6a5*/
}



// ==== 0x0054F6B0  EventQueue::CheckPosition  this=EventQueue  sig=csp ====
int __thiscall EventQueue::CheckPosition(EventQueue *this)
{
  int result; // eax

  result = (this->q318 + 1) % 256; /*0x54f6c4*/
  LOBYTE(result) = result == this->q314; /*0x54f6cb*/
  return result; /*0x54f6ce*/
}



// ==== 0x0054F6D0  ObjectClass::method_54F6D0  this=ObjectClass  sig=csp ====
bool __thiscall sub_54F6D0(TechnoClass *this)
{
  return this->railgunParticles == this->unk1Particles; /*0x54f6e1*/
}



// ==== 0x0054F720  Timer::PumpMessages  this=NetworkSession  sig=csp ====
int __thiscall Timer::PumpMessages(Timer *this)
{
  int v2; // eax
  int result; // eax

  if ( (*((_DWORD *)this + 198) + 1) % 256 != *((_DWORD *)this + 197) ) /*0x54f73e*/
    MessageLoop(); /*0x54f740*/
  v2 = *((_DWORD *)this + 198); /*0x54f745*/
  *((_DWORD *)this + 197) = v2; /*0x54f74b*/
  if ( (v2 + 1) % 256 == v2 ) /*0x54f766*/
  {
    result = *((_DWORD *)this + 198); /*0x54f77b*/
    *((_DWORD *)this + 197) = result; /*0x54f781*/
  }
  else
  {
    result = (int)MessageLoop(); /*0x54f768*/
    *((_DWORD *)this + 197) = *((_DWORD *)this + 198); /*0x54f773*/
  }
  return result; /*0x54f779*/
}



// ==== 0x0054F790  InputManager::WndProc  this=InputManager  sig=csp ====
int __thiscall InputManager::WndProc(InputManager *this, HWND hWnd, UINT Msg, WPARAM wParam, unsigned int lParam)
{
  __int16 x; // di
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
  __int16 v18[2]; // [esp+14h] [ebp-Ch] BYREF
  struct tagPOINT Point; // [esp+18h] [ebp-8h] BYREF

  Point.y = HIWORD(lParam); /*0x54f7a6*/
  Point.x = (unsigned __int16)lParam; /*0x54f7b6*/
  ClientToScreen(hWnd, &Point); /*0x54f7ba*/
  x = Point.x; /*0x54f7c6*/
  y = Point.y; /*0x54f7ca*/
  *(_DWORD *)v18 = Point.x; /*0x54f7ce*/
  *(_DWORD *)v17 = Point.y; /*0x54f7d4*/
  if ( stru_887598.lineTrailer ) /*0x54f7d8*/
  {
    (*(void (__thiscall **)(void *, __int16 *, __int16 *))(*(_DWORD *)stru_887598.lineTrailer + 68))( /*0x54f7e6*/
      stru_887598.lineTrailer,
      v18,
      v17);
    x = v18[0]; /*0x54f7e9*/
    y = v17[0]; /*0x54f7ed*/
  }
  if ( Msg > 0x201 ) /*0x54f7fe*/
  {
    switch ( Msg ) /*0x54f916*/
    {
      case 0x202u: /*0x54f916*/
        if ( stru_A8EB00.?[440] ) /*0x54f924*/
          goto LABEL_45; /*0x54f924*/
        v10 = *((_DWORD *)this + 198) - *((_DWORD *)this + 197); /*0x54f938*/
        if ( (int)(256 - ((HIDWORD(v10) ^ v10) - HIDWORD(v10))) < 3 ) /*0x54f947*/
          goto LABEL_45; /*0x54f947*/
        EventClass::Enqueue((EventClass *)this, 1u, 1); /*0x54f94f*/
        goto LABEL_17; /*0x54f94f*/
      case 0x203u: /*0x54f916*/
        if ( stru_A8EB00.?[440] ) /*0x54f958*/
          goto LABEL_45; /*0x54f958*/
        v11 = *((_DWORD *)this + 198) - *((_DWORD *)this + 197); /*0x54f971*/
        if ( (int)(256 - ((HIDWORD(v11) ^ v11) - HIDWORD(v11))) >= 3 ) /*0x54f97b*/
        {
          EventClass::Enqueue((EventClass *)this, 1u, 0); /*0x54f983*/
          if ( !(unsigned __int8)EventQueue::CheckPosition((EventQueue *)this) ) /*0x54f98a*/
            InputManager::PushInputEvent(this, x); /*0x54f996*/
          EventBuffer::Enqueue((EventBuffer *)this, y); /*0x54f99e*/
          x = v18[0]; /*0x54f9a3*/
          y = v17[0]; /*0x54f9a7*/
        }
        if ( stru_A8EB00.?[440] ) /*0x54f9b2*/
          goto LABEL_45; /*0x54f9b2*/
        v12 = *((_DWORD *)this + 198) - *((_DWORD *)this + 197); /*0x54f9c6*/
        if ( (int)(256 - ((HIDWORD(v12) ^ v12) - HIDWORD(v12))) < 3 ) /*0x54f9d5*/
          goto LABEL_45; /*0x54f9d5*/
        EventClass::Enqueue((EventClass *)this, 1u, 1); /*0x54f9e1*/
        if ( !(unsigned __int8)EventQueue::CheckPosition((EventQueue *)this) ) /*0x54f9e8*/
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
        InputManager::EnqueueInputEvent(this, 2u, v18[0], v17[0], 1); /*0x54fb13*/
        goto LABEL_45; /*0x54fb13*/
      case 0x207u: /*0x54f916*/
        if ( !stru_A8EB00.?[440] ) /*0x54fa0d*/
        {
          v13 = *((_DWORD *)this + 198) - *((_DWORD *)this + 197); /*0x54fa26*/
          if ( (int)(256 - ((HIDWORD(v13) ^ v13) - HIDWORD(v13))) >= 3 ) /*0x54fa30*/
          {
            EventClass::Enqueue((EventClass *)this, 4u, 0); /*0x54fa3c*/
            EventBuffer::Enqueue((EventBuffer *)this, x); /*0x54fa44*/
            EventBuffer::Enqueue((EventBuffer *)this, y); /*0x54fa4c*/
          }
        }
        goto LABEL_45; /*0x54fa51*/
      case 0x208u: /*0x54f916*/
        goto LABEL_39;
      case 0x209u: /*0x54f916*/
        if ( stru_A8EB00.?[440] ) /*0x54fa5d*/
          goto LABEL_45; /*0x54fa5d*/
        v14 = *((_DWORD *)this + 198) - *((_DWORD *)this + 197); /*0x54fa76*/
        if ( (int)(256 - ((HIDWORD(v14) ^ v14) - HIDWORD(v14))) >= 3 ) /*0x54fa80*/
        {
          EventClass::Enqueue((EventClass *)this, 4u, 0); /*0x54fa88*/
          EventBuffer::Enqueue((EventBuffer *)this, x); /*0x54fa90*/
          EventBuffer::Enqueue((EventBuffer *)this, y); /*0x54fa98*/
          x = v18[0]; /*0x54fa9d*/
          y = v17[0]; /*0x54faa1*/
        }
LABEL_39:
        if ( !stru_A8EB00.?[440] ) /*0x54faac*/
        {
          v15 = *((_DWORD *)this + 198) - *((_DWORD *)this + 197); /*0x54fabc*/
          if ( (int)(256 - ((HIDWORD(v15) ^ v15) - HIDWORD(v15))) >= 3 ) /*0x54facb*/
          {
            EventClass::Enqueue((EventClass *)this, 4u, 1); /*0x54fad3*/
            EventBuffer::Enqueue((EventBuffer *)this, x); /*0x54fadb*/
            EventBuffer::Enqueue((EventBuffer *)this, y); /*0x54fae3*/
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
        if ( wParam != 145 && (lParam & 0x40000000) == 0 ) /*0x54f838*/
          EventClass::Enqueue((EventClass *)this, wParam, 0); /*0x54f843*/
        goto LABEL_45; /*0x54f848*/
      case 0x101u: /*0x54f81d*/
      case 0x105u: /*0x54f81d*/
        EventClass::Enqueue((EventClass *)this, wParam, 1); /*0x54f852*/
        goto LABEL_45; /*0x54f857*/
      case 0x102u: /*0x54f81d*/
        if ( stru_A8BB1C.__pad_87[214] ) /*0x54f863*/
        {
          if ( !stru_A8EB00.?[440] ) /*0x54f870*/
          {
            v8 = *((_DWORD *)this + 198) - *((_DWORD *)this + 197); /*0x54f889*/
            if ( (int)(256 - ((HIDWORD(v8) ^ v8) - HIDWORD(v8))) >= 2 ) /*0x54f893*/
            {
              EventClass::Enqueue((EventClass *)this, 0xAu, 0); /*0x54f89f*/
              EventBuffer::Enqueue((EventBuffer *)this, (unsigned __int8)wParam); /*0x54f8af*/
            }
          }
        }
        goto LABEL_45; /*0x54f8b4*/
      default:
        return 0;
    }
  }
  if ( !stru_A8EB00.?[440] ) /*0x54f8c0*/
  {
    v9 = *((_DWORD *)this + 198) - *((_DWORD *)this + 197); /*0x54f8d9*/
    if ( (int)(256 - ((HIDWORD(v9) ^ v9) - HIDWORD(v9))) >= 3 ) /*0x54f8e3*/
    {
      EventClass::Enqueue((EventClass *)this, 1u, 0); /*0x54f8ef*/
LABEL_17:
      if ( !(unsigned __int8)EventQueue::CheckPosition((EventQueue *)this) ) /*0x54f8f6*/
LABEL_31:
        InputManager::PushInputEvent(this, x); /*0x54f9f1*/
LABEL_32:
      EventBuffer::Enqueue((EventBuffer *)this, y); /*0x54f9f9*/
    }
  }
LABEL_45:
  DefWindowProcA(hWnd, Msg, wParam, lParam); /*0x54fb18*/
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
  dword_ABC878 = (int)&DynamicVectorClass<LaserDrawClass *>::`vftable'; /*0x54fddd*/
  dword_ABC88C = 10; /*0x54fde7*/
  dword_ABC888 = 0; /*0x54fdf1*/
  return atexit(sub_54FE00); /*0x54fdfc*/
}



// ==== 0x0054FE00  sub_54FE00  this=-  sig=ida-proto ====
void __cdecl sub_54FE00()
{
  if ( (byte_ABC718 & 1) == 0 ) /*0x54fe0a*/
  {
    dword_ABC878 = (int)&VectorClass<LaserDrawClass *>::`vftable'; /*0x54fe0e*/
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
char *__thiscall TimerClass_Constructor(
        char *this,
        int a2,
        int a3,
        int a4,
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
  _DWORD *v18; // ecx
  wchar_t *v19; // ecx
  int v20; // eax

  *(_DWORD *)this = 0; /*0x54fe6a*/
  this->ptr_8 = 0; /*0x54fe6c*/
  this->ptr_C = dword_A8ED84; /*0x54fe75*/
  v18 = this + 36; /*0x54fe78*/
  this->ptr_8 = 0; /*0x54fe7b*/
  *v18 = a2; /*0x54fe83*/
  this->abstractFlags = 0; /*0x54fe89*/
  this->nextArrayIndex = 1; /*0x54fe8c*/
  v18[1] = a3; /*0x54fe8f*/
  this->referenceCount = 1; /*0x54fe96*/
  this->NeedsSaveOrLink = 0; /*0x54fe99*/
  v18[2] = a4; /*0x54fe9c*/
  this->q084 = 0; /*0x54fea6*/
  this->ptr_10 = a5; /*0x54fea9*/
  this->q034 = a6; /*0x54feaf*/
  this->TargetStrengthCoefficient = a7; /*0x54feb6*/
  this->zero_3C = a8; /*0x54febd*/
  this->TargetDistanceCoefficient = a9; /*0x54fec4*/
  this->ChargerBarrels = 0; /*0x54fecb*/
  this->q042 = 0; /*0x54fece*/
  this->q10C = 0; /*0x54fed1*/
  this->q044 = 0; /*0x54fed4*/
  this->q114 = 0; /*0x54fed7*/
  this->q046 = 0; /*0x54feda*/
  this->q11C = 0; /*0x54fedd*/
  this->u32_48 = 0; /*0x54fee0*/
  this->q049 = 0; /*0x54fee3*/
  this->u32_4C = a13; /*0x54fee6*/
  this->q144 = 0; /*0x54feed*/
  this->SlowdownDistance = a14; /*0x54fef0*/
  this->q148 = a15; /*0x54fef7*/
  this->q015 = a16; /*0x54fefe*/
  this->u32_58 = a17; /*0x54ff05*/
  *(_DWORD *)this = 0; /*0x54ff08*/
  v19 = dword_A8ED84; /*0x54ff0a*/
  this->abstractFlags = 1; /*0x54ff10*/
  this->ptr_C = v19; /*0x54ff13*/
  this->ptr_10 = a3; /*0x54ff1a*/
  this->ptr_8 = 1; /*0x54ff21*/
  *(_WORD *)(this + 65) = a10; /*0x54ff29*/
  this->q10C = BYTE2(a10); /*0x54ff32*/
  this->q088 = a11; /*0x54ff39*/
  this->q046 = BYTE2(a11); /*0x54ff42*/
  *(_WORD *)(this + 71) = a12; /*0x54ff49*/
  this->q049 = BYTE2(a12); /*0x54ff4d*/
  if ( dword_ABC888 < dword_ABC880 /*0x54ff85*/
    || (byte_ABC885 || !dword_ABC880)
    && dword_ABC88C > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_ABC878 + 8))(
         &dword_ABC878,
         dword_ABC880 + dword_ABC88C,
         0) )
  {
    v20 = dword_ABC888++; /*0x54ff92*/
    *((_DWORD *)dword_ABC87C + v20) = this; /*0x54ffa1*/
  }
  return this; /*0x54ffa6*/
}


