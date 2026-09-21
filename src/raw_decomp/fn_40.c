// GENERATED raw decompilation, this-relative refs rewritten to this->Member
// by tools/csp_export/rewrite_member_refs.py (mechanical, CSP member table).
// REFERENCE ONLY - not compiled. Width-matched rewrites; unmatched kept raw.

// ==== 0x00401000  AudioMixer::Init  this=ObjectClass  sig=csp ====
int __thiscall AudioMixer::Init(int *this)
{
  SetupSampleAudioMixer(this, (ObjectClass *)0x4000); /*0x40100a*/
  SetupSampleAudioMixer(this + 10, (ObjectClass *)0x64); /*0x401019*/
  SetupSampleAudioMixer(this + 20, (ObjectClass *)0x2000); /*0x401028*/
  SetRateMixerSample(this + 10, 10, 0x3E8u, 0); /*0x40103b*/
  SetRateMixerSample(this, 0x4000, 0x3E8u, 0); /*0x40104e*/
  SetRateMixerSample(this + 20, 0x4000, 0x3E8u, 0); /*0x401061*/
  return EndBufferMixer(this, 0x4000); /*0x40106d*/
}


// ==== 0x00401080  Audio::InitChannels  this=Audio  sig=csp ====
int __thiscall Audio_InitChannels(char *this)
{
  ((void (*)(void))AudioMixer::PlaySample)(); /*0x401083*/
  AudioMixer::PlaySample(this + 40); /*0x40108b*/
  return AudioMixer::PlaySample(this + 80); /*0x401093*/
}


// ==== 0x004010A0  AudioChannel::IsActive  this=Audio  sig=csp ====
BOOL __thiscall AudioChannel_IsActive(_BYTE *this)
{
  return (*this & 2) != 0 || (*(this + 40) & 2) != 0 || (this->Audio_field_0x14 & 2) != 0; /*0x4010b4*/
}


// ==== 0x004010C0  EndFrameAudioMixer  this=AudioController  sig=csp ====
int __fastcall AudioMixer_EndFrame(int *a1, _DWORD *a2)
{
  int v4; // edx

  EndBufferMixer(a1, (unsigned int)(HIWORD(a2[1]) * HIWORD(a1[1])) >> 14); /*0x4010d9*/
  AudioMixer::PlaySample(a1); /*0x4010e0*/
  EndBufferMixer(a1 + 10, (int)(HIWORD(a2[11]) * HIWORD(a1[11])) / 100); /*0x40110a*/
  AudioMixer::PlaySample(a1 + 10); /*0x401111*/
  if ( HIWORD(a2[21]) != 0x2000 ) /*0x401122*/
  {
    v4 = HIWORD(a1[21]) + HIWORD(a2[21]) - 0x2000; /*0x40112a*/
    if ( v4 < 0 ) /*0x40112c*/
    {
      EndBufferMixer(a1 + 20, 0); /*0x401133*/
      return AudioMixer::PlaySample(a1 + 20); /*0x401143*/
    }
    if ( (unsigned int)v4 > 0x4000 ) /*0x40114a*/
      v4 = 0x4000; /*0x40114c*/
    EndBufferMixer(a1 + 20, v4); /*0x401154*/
  }
  return AudioMixer::PlaySample(a1 + 20); /*0x401140*/
}


// ==== 0x00401170  ObjectClass::ClearFlags2  this=Audio  sig=csp ====
int __thiscall ObjectClass::ClearFlags2(_DWORD *this)
{
  *this &= ~2u; /*0x401179*/
  this->Audio_field_0x14 &= ~2u; /*0x401180*/
  *(this + 10) &= ~2u; /*0x401188*/
  return -3; /*0x40118b*/
}


// ==== 0x00401190  sub_401190  this=-  sig=ida-proto ====
int __fastcall sub_401190(int a1, int a2)
{
  int v2; // edx

  v2 = (unsigned __int64)(1374389535LL * a2 * HIWORD(*(_DWORD *)(a1 + 44))) >> 32; /*0x40119e*/
  return ((unsigned int)v2 >> 31) + (v2 >> 5); /*0x4011ac*/
}


// ==== 0x004011B0  sub_4011B0  this=-  sig=ida-proto ====
int __fastcall sub_4011B0(_DWORD *a1, int a2)
{
  return *a1 + 36 * a2; /*0x4011b8*/
}


// ==== 0x004011C0  LoadAudioFile  this=-  sig=csp ====
char *__fastcall LoadAudioFile(const char *a1, const char *a2)
{
  char *v3; // ebp
  char *v4; // eax
  char *v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // eax
  void *v8; // edi
  int v9; // eax
  int v10; // edi
  int v11; // esi
  HANDLE FirstFileA; // esi
  void (__thiscall ***v14)(_DWORD, int); // ecx
  void (__thiscall ***v15)(_DWORD, int); // ecx
  _DWORD Buffer[2]; // [esp+14h] [ebp-2BCh] BYREF
  int v18; // [esp+1Ch] [ebp-2B4h]
  int v19[22]; // [esp+20h] [ebp-2B0h] BYREF
  _BYTE v20[12]; // [esp+78h] [ebp-258h] BYREF
  int v21; // [esp+84h] [ebp-24Ch]
  char Str[260]; // [esp+8Ch] [ebp-244h] BYREF
  struct _WIN32_FIND_DATAA FindFileData; // [esp+190h] [ebp-140h] BYREF

  v3 = (char *)__2_YAPAXI_Z(0x124u); /*0x4011da*/
  memset(v3, 0, 0x124u); /*0x4011e5*/
  strcpy(Str, a1); /*0x401204*/
  v4 = strrchr(Str, 46); /*0x401215*/
  if ( v4 ) /*0x401221*/
    *v4 = 0; /*0x401223*/
  strcat(Str, aIdx); /*0x40124d*/
  CCFileClass::Construct(v19, Str); /*0x401262*/
  if ( !CCFileClass::Open(v19, 0) ) /*0x40126c*/
    goto LABEL_30; /*0x40126c*/
  v5 = strrchr(Str, 46); /*0x401283*/
  if ( v5 ) /*0x40128d*/
    *v5 = 0; /*0x40128f*/
  strcat(Str, aBag); /*0x4012bc*/
  v6 = __2_YAPAXI_Z(0x6Cu); /*0x4012c5*/
  v7 = v6 ? CCFileClass::Construct(v6, Str) : 0;
  *((_DWORD *)v3 + 67) = v7; /*0x4012e4*/
  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD))(*v7 + 20))(v7, 0) ) /*0x4012ef*/
    goto LABEL_30; /*0x4012ef*/
  FileClass::Load(v19, 1); /*0x401300*/
  (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)v3 + 67) + 28))(*((_DWORD *)v3 + 67), 1); /*0x40130f*/
  if ( CCFileClass::Read(v19, Buffer, 12) != 12 ) /*0x401325*/
    goto LABEL_30; /*0x401325*/
  *((_DWORD *)v3 + 1) = v18; /*0x40132f*/
  if ( v18 <= 0 ) /*0x401338*/
    goto LABEL_17; /*0x401338*/
  v8 = __2_YAPAXI_Z(36 * v18); /*0x401346*/
  v9 = *((_DWORD *)v3 + 1); /*0x401348*/
  *(_DWORD *)v3 = v8; /*0x40134b*/
  memset(v8, 0, 4 * ((unsigned int)(36 * v9) >> 2)); /*0x40135e*/
  if ( Buffer[1] != 1 ) /*0x40136c*/
  {
    if ( CCFileClass::Read(v19, *(void **)v3, 36 * *((_DWORD *)v3 + 1)) == 36 * *((_DWORD *)v3 + 1) ) /*0x401500*/
      goto LABEL_17; /*0x401500*/
LABEL_30:
    if ( v3 ) /*0x401508*/
    {
      v14 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)v3 + 67); /*0x40150a*/
      if ( v14 ) /*0x401512*/
        (**v14)(v14, 1); /*0x401518*/
      v15 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)v3 + 68); /*0x40151a*/
      if ( v15 ) /*0x401522*/
        (**v15)(v15, 1); /*0x401528*/
      if ( *(_DWORD *)v3 ) /*0x40152a*/
        __3_YAXPAX_Z(*(void **)v3); /*0x401532*/
      __3_YAXPAX_Z(v3); /*0x40153b*/
    }
    v19[0] = (int)&vt_CCFileClass; /*0x401547*/
    v21 = 0; /*0x40154f*/
    Vector::Clear((int)v20); /*0x401556*/
    v19[0] = (int)&off_7E1668; /*0x40155f*/
    BufferIOFileClass::Dtor(v19); /*0x401567*/
    return 0; /*0x40156c*/
  }
  v10 = 0; /*0x401375*/
  if ( *((int *)v3 + 1) > 0 ) /*0x401379*/
  {
    v11 = 0; /*0x40137b*/
    while ( CCFileClass::Read(v19, (void *)(*(_DWORD *)v3 + v11), 32) == 32 ) /*0x401393*/
    {
      ++v10; /*0x40139c*/
      *(_DWORD *)(v11 + *(_DWORD *)v3 + 32) = 0; /*0x40139d*/
      v11 += 36; /*0x4013a4*/
      if ( v10 >= *((_DWORD *)v3 + 1) ) /*0x4013a9*/
        goto LABEL_17; /*0x4013a9*/
    }
    goto LABEL_30; /*0x401393*/
  }
LABEL_17:
  qsort(*(void **)v3, *((_DWORD *)v3 + 1), 0x24u, _strcmpi); /*0x4013ab*/
  *((_DWORD *)v3 + 69) = 0; /*0x4013c8*/
  if ( a2 ) /*0x4013ce*/
  {
    strcpy(v3 + 8, a2); /*0x4013ed*/
    if ( v3[strlen(v3 + 8) + 8] == 92 ) /*0x401407*/
      v3[strlen(v3 + 8) + 8] = 0; /*0x401415*/
    FirstFileA = FindFirstFileA(v3 + 8, &FindFileData); /*0x401428*/
    if ( FirstFileA != (HANDLE)-1 ) /*0x40142d*/
    {
      if ( (FindFileData.dwFileAttributes & 0x10) != 0 ) /*0x401437*/
      {
LABEL_24:
        *((_DWORD *)v3 + 69) = 1; /*0x401458*/
      }
      else
      {
        while ( FindNextFileA(FirstFileA, &FindFileData) ) /*0x40144c*/
        {
          if ( (FindFileData.dwFileAttributes & 0x10) != 0 ) /*0x401456*/
            goto LABEL_24; /*0x401456*/
        }
      }
      FindClose(FirstFileA); /*0x401463*/
    }
    if ( v3[strlen(v3 + 8) + 8] != 92 ) /*0x40147a*/
      strcat(v3 + 8, asc_815E74); /*0x40149d*/
  }
  v19[0] = (int)&vt_CCFileClass; /*0x4014ac*/
  v21 = 0; /*0x4014b4*/
  Vector::Clear((int)v20); /*0x4014bb*/
  v19[0] = (int)&off_7E1668; /*0x4014c4*/
  BufferIOFileClass::Dtor(v19); /*0x4014cc*/
  return v3; /*0x4014d3*/
}


// ==== 0x00401580  ObjectClass::method  this=ObjectClass  sig=csp ====
void __thiscall sub_401580(void **Block)
{
  void (__thiscall ***v2)(_DWORD, int); // ecx
  void (__thiscall ***v3)(_DWORD, int); // ecx

  v2 = (void (__thiscall ***)(_DWORD, int))*(Block + 67); /*0x401583*/
  if ( v2 ) /*0x40158b*/
    (**v2)(v2, 1); /*0x401591*/
  v3 = (void (__thiscall ***)(_DWORD, int))*(Block + 68); /*0x401593*/
  if ( v3 ) /*0x40159b*/
    (**v3)(v3, 1); /*0x4015a1*/
  if ( *Block ) /*0x4015a3*/
    __3_YAXPAX_Z(*Block); /*0x4015aa*/
  __3_YAXPAX_Z(Block); /*0x4015b3*/
}


// ==== 0x004015C0  sub_4015C0  this=-  sig=csp ====
unsigned int __fastcall sub_4015C0(int a1, const void *a2)
{
  void *v3; // eax

  v3 = bsearch(a2, *(const void **)a1, *(ObjectClass **)(a1 + 4), 0x24u, _strcmpi); /*0x4015d2*/
  if ( v3 ) /*0x4015de*/
    return ((unsigned int)v3 - *(_DWORD *)a1) / 0x24; /*0x4015ee*/
  else
    return -1; /*0x4015f2*/
}


// ==== 0x00401640  AudioIndex::GetSampleInformation  this=AudioIndex  sig=csp ====
_DWORD *__fastcall AudioIndex::GetSampleInformation(_DWORD *a1, int a2, _DWORD *a3)
{
  _DWORD *v3; // ecx
  _DWORD *result; // eax

  v3 = (_DWORD *)(*a1 + 36 * a2); /*0x401645*/
  result = a3; /*0x401648*/
  *a3 = 4; /*0x40164c*/
  a3[2] = v3[6]; /*0x401655*/
  a3[3] = ((v3[7] & 1) != 0) + 1; /*0x401665*/
  a3[6] = v3[8]; /*0x40166b*/
  if ( (v3[7] & 8) != 0 ) /*0x401674*/
  {
    a3[1] = 1; /*0x401676*/
    a3[4] = 2; /*0x40167d*/
  }
  else
  {
    a3[1] = 0; /*0x401687*/
    a3[4] = ((v3[7] & 4) != 0) + 1; /*0x40169b*/
  }
  return result; /*0x401684*/
}


// ==== 0x004016F0  IDXContainer::LoadSample  this=IDXContainer  sig=ida-proto ====
int __fastcall IDXContainer::LoadSample(int a1, int a2)
{
  int v3; // ebp
  void (__thiscall ***v4)(_DWORD, int); // ecx
  int v5; // ecx
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  int v8; // eax
  int v9; // ecx
  void (__thiscall ***v11)(_DWORD, int); // ecx
  int v12; // [esp+14h] [ebp-12Ch]
  size_t v13; // [esp+18h] [ebp-128h] BYREF
  _DWORD v14[8]; // [esp+1Ch] [ebp-124h] BYREF
  char v15[260]; // [esp+3Ch] [ebp-104h] BYREF

  v12 = 1; /*0x401702*/
  v3 = *(_DWORD *)a1 + 36 * a2; /*0x40170a*/
  v4 = *(void (__thiscall ****)(_DWORD, int))(a1 + 272); /*0x40170d*/
  *(_DWORD *)(a1 + 280) = 0; /*0x401715*/
  if ( v4 ) /*0x40171b*/
  {
    (**v4)(v4, 1); /*0x401721*/
    *(_DWORD *)(a1 + 272) = 0; /*0x401723*/
  }
  v5 = *(_DWORD *)(a1 + 268); /*0x401729*/
  *(_DWORD *)(a1 + 280) = v5; /*0x401730*/
  *(_DWORD *)(a1 + 284) = *(_DWORD *)(v3 + 20); /*0x401739*/
  if ( (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v5 + 40))(v5, *(_DWORD *)(v3 + 16), 0) != *(_DWORD *)(v3 + 16) ) /*0x40174b*/
    v12 = 0; /*0x40174d*/
  if ( !*(_DWORD *)(v3 + 20) ) /*0x401751*/
    v12 = 0; /*0x401756*/
  if ( !*(_DWORD *)(a1 + 276) ) /*0x401760*/
    return v12; /*0x401760*/
  strcpy(v15, (const char *)(a1 + 8)); /*0x401786*/
  strcat(v15, (const char *)v3); /*0x4017af*/
  strcat(v15, aWav); /*0x4017db*/
  v6 = __2_YAPAXI_Z(0x24u); /*0x4017e4*/
  if ( v6 ) /*0x4017ef*/
    v7 = RawFileClass::Construct(v6, (int)v15); /*0x4017fd*/
  else
    v7 = 0; /*0x401801*/
  *(_DWORD *)(a1 + 272) = v7; /*0x401803*/
  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD))(*v7 + 20))(v7, 0) /*0x401837*/
    || !(*(int (__thiscall **)(_DWORD *, int))(*v7 + 28))(v7, 1)
    || (Struct::ZeroInit32(v14), !ParseWaveFileHeader((int)v7, v14, &v13)) )
  {
    v11 = *(void (__thiscall ****)(_DWORD, int))(a1 + 272); /*0x401891*/
    if ( v11 ) /*0x401899*/
    {
      (**v11)(v11, 1); /*0x40189f*/
      *(_DWORD *)(a1 + 272) = 0; /*0x4018a1*/
    }
    return v12; /*0x4018ab*/
  }
  *(_DWORD *)(v3 + 28) = 2; /*0x401845*/
  if ( v14[4] == 2 ) /*0x40184e*/
    *(_DWORD *)(v3 + 28) = 6; /*0x401850*/
  if ( v14[3] == 2 ) /*0x40185b*/
  {
    v8 = *(_DWORD *)(v3 + 28); /*0x40185d*/
    LOBYTE(v8) = v8 | 1; /*0x401860*/
    *(_DWORD *)(v3 + 28) = v8; /*0x401862*/
  }
  *(_DWORD *)(v3 + 24) = v14[2]; /*0x40186a*/
  v9 = *(_DWORD *)(a1 + 272); /*0x401871*/
  *(_DWORD *)(a1 + 284) = v13; /*0x401877*/
  *(_DWORD *)(a1 + 280) = v9; /*0x40187d*/
  return 1; /*0x401869*/
}


// ==== 0x004018C0  sub_4018C0  this=-  sig=csp ====
int __fastcall sub_4018C0(int a1, int a2, int a3)
{
  int v4; // ecx
  int result; // eax
  int v6; // eax

  v4 = *(_DWORD *)(a1 + 280); /*0x4018c3*/
  if ( !v4 ) /*0x4018cb*/
    return 0; /*0x4018cd*/
  v6 = a3; /*0x4018d3*/
  if ( a3 > *(_DWORD *)(a1 + 284) ) /*0x4018e0*/
    v6 = *(_DWORD *)(a1 + 284); /*0x4018e2*/
  if ( v6 <= 0 || (result = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v4 + 36))(v4, a2, v6), result < 0) ) /*0x4018f1*/
    result = 0; /*0x4018f3*/
  *(_DWORD *)(a1 + 284) -= result; /*0x4018fe*/
  return result; /*0x4018cf*/
}


// ==== 0x00401910  AudioStream::ReleaseSubsystem  this=AudioStream  sig=csp ====
int __thiscall sub_401910(_DWORD *this)
{
  int (__thiscall ***v2)(_DWORD, int); // ecx
  int result; // eax

  v2 = (int (__thiscall ***)(_DWORD, int))this->AudioStream_field_0x44; /*0x401913*/
  *(this + 70) = 0; /*0x401919*/
  if ( v2 ) /*0x401925*/
  {
    result = (**v2)(v2, 1); /*0x40192b*/
    this->AudioStream_field_0x44 = 0; /*0x40192d*/
  }
  return result; /*0x401937*/
}


// ==== 0x00401940  RawFileClass::GetMember06  this=RawFileClass  sig=csp ====
int __thiscall Accessor_401940(_DWORD *this)
{
  return this->FileNameAllocated; /*0x401943*/
}


// ==== 0x00401950    this=CDFileClass  sig=? ====
_DWORD *__thiscall FileClass::loc_401950(_DWORD *Block, char a2)
{
  *Block = &off_7E1668; /*0x401953*/
  BufferIOFileClass::Dtor(Block); /*0x401959*/
  if ( (a2 & 1) != 0 ) /*0x401963*/
    __3_YAXPAX_Z(Block); /*0x401966*/
  return Block; /*0x401970*/
}


// ==== 0x00401980  CCFileClass::Destru_vt08  this=CCFileClass  sig=csp ====
int __thiscall CCFileClass::Destru_vt08(void *this, int a2, int a3)
{
  (*(void (__thiscall **)(void *, int))(this->FileSize)(this, a2); /*0x40198c*/
  return (*(int (__thiscall **)(void *, int))(this->BufferDirty)(this, a3); /*0x40199b*/
}


// ==== 0x004019A0  CCFileClass::Destru_vt00  this=CCFileClass  sig=csp ====
CCFileClass *__thiscall CCFileClass::Destru_vt00(_DWORD *Block, char a2)
{
  *Block = &vt_CCFileClass; /*0x4019a6*/
  *(Block + 25) = 0; /*0x4019ac*/
  Vector::Clear((int)(Block + 22)); /*0x4019b3*/
  *Block = &off_7E1668; /*0x4019ba*/
  BufferIOFileClass::Dtor(Block); /*0x4019c0*/
  if ( (a2 & 1) != 0 ) /*0x4019ca*/
    __3_YAXPAX_Z(Block); /*0x4019cd*/
  return (CCFileClass *)Block; /*0x4019d7*/
}


// ==== 0x004019E0  sub_4019E0  this=-  sig=ida-proto ====
int *__fastcall sub_4019E0(int a1, int a2, int a3, int a4)
{
  int *v6; // ebx
  int i; // edi
  _DWORD **j; // esi
  void *v9; // ecx
  void *v10; // ecx

  v6 = (int *)__2_YAPAXI_Z(0xE8u); /*0x4019f2*/
  memset(v6, 0, 0xE8u); /*0x4019fd*/
  *v6 = a1; /*0x401a03*/
  v6[6] = a4; /*0x401a05*/
  v6[1] = (int)AllocLinkedListMemory(a2 / (a4 + 28), a4 + 28); /*0x401a25*/
  v6[2] = (int)AllocLinkedListMemory(a3, 100); /*0x401a30*/
  DListNode::Init(v6 + 3); /*0x401a35*/
  if ( v6[1] && v6[2] ) /*0x401a41*/
    return v6; /*0x401aec*/
  for ( i = Queue::GetNext(v6 + 3); i; i = Queue::GetNext(v6 + 3) ) /*0x401a57*/
  {
    if ( *(_DWORD *)(i + 4) != i ) /*0x401a5c*/
      LinkedList::Init((_DWORD **)i); /*0x401a60*/
    for ( j = (_DWORD **)Queue::GetNext((int *)(i + 36)); j; j = (_DWORD **)Queue::GetNext((int *)(i + 36)) ) /*0x401a73*/
    {
      LinkedList::Init(j); /*0x401a77*/
      AudioNode::Release(j); /*0x401a7e*/
      PushFrontLinkedListAlt(*(_DWORD **)(*(_DWORD *)(i + 60) + 4), (int)j); /*0x401a8b*/
    }
    nullsub_2(i + 28); /*0x401aa0*/
    PushFrontLinkedListAlt(*(_DWORD **)(*(_DWORD *)(i + 60) + 8), i); /*0x401aad*/
  }
  v9 = (void *)v6[1]; /*0x401ac0*/
  if ( v9 ) /*0x401ac5*/
    VtableStub::Push_407510(v9); /*0x401ac7*/
  v10 = (void *)v6[2]; /*0x401acc*/
  if ( v10 ) /*0x401ad1*/
    VtableStub::Push_407510(v10); /*0x401ad3*/
  __3_YAXPAX_Z(v6); /*0x401ad9*/
  return 0; /*0x401ae3*/
}


// ==== 0x00401B00  ObjectClass::method_401B00  this=ObjectClass  sig=csp ====
void __thiscall sub_401B00(int *Block)
{
  int *v1; // esi
  int *v2; // ebp
  ObjectClass *Next; // edi
  ObjectClass *i; // esi
  void *v5; // ecx
  void *v6; // ecx

  v1 = Block; /*0x401b03*/
  v2 = Block + 3; /*0x401b0a*/
  Next = (ObjectClass *)Queue::GetNext(Block + 3); /*0x401b14*/
  if ( Next ) /*0x401b18*/
  {
    do /*0x401b7f*/
    {
      if ( *(ObjectClass **)&Next->__pad_0[4] != Next ) /*0x401b1e*/
        LinkedList::Init(Next); /*0x401b22*/
      for ( i = (ObjectClass *)Queue::GetNext(&Next->objectTypeFlags); /*0x401b35*/
            i;
            i = (ObjectClass *)Queue::GetNext(&Next->objectTypeFlags) )
      {
        LinkedList::Init(i); /*0x401b39*/
        AudioNode::Release(i); /*0x401b40*/
        PushFrontLinkedListAlt(*(_DWORD **)(Next->ambientSoundController[0] + 4), (int)i); /*0x401b4d*/
      }
      nullsub_2(); /*0x401b62*/
      PushFrontLinkedListAlt(*(_DWORD **)(Next->ambientSoundController[0] + 8), (int)Next); /*0x401b6f*/
      Next = (ObjectClass *)Queue::GetNext(v2); /*0x401b7b*/
    }
    while ( Next ); /*0x401b7f*/
    v1 = Block; /*0x401b81*/
  }
  v5 = (void *)v1[1]; /*0x401b86*/
  if ( v5 ) /*0x401b8b*/
    VtableStub::Push_407510(v5); /*0x401b8d*/
  v6 = (void *)v1[2]; /*0x401b92*/
  if ( v6 ) /*0x401b97*/
    VtableStub::Push_407510(v6); /*0x401b99*/
  __3_YAXPAX_Z(v1); /*0x401b9f*/
}


// ==== 0x00401C00  LoadSampleAudioMixer  this=-  sig=csp ====
int *__fastcall AudioMixer_LoadSample(_DWORD *a1, int a2)
{
  _DWORD *v2; // ebx
  _DWORD *v3; // esi
  _DWORD *v4; // edi
  int *v5; // ebp
  int v6; // edi
  _DWORD **i; // esi
  int v9; // eax
  int *v10; // esi
  int v11; // esi
  _DWORD **j; // edi
  int v13; // eax
  _DWORD **k; // esi
  int v16; // [esp+14h] [ebp-8h]
  int v18; // [esp+18h] [ebp-4h]

  v2 = a1; /*0x401c05*/
  v3 = (_DWORD *)a1[3]; /*0x401c0d*/
  v4 = a1 + 3; /*0x401c10*/
  if ( v3 != a1 + 3 ) /*0x401c19*/
  {
    while ( v3[5] != a2 || !v3[6] ) /*0x401c25*/
    {
      v3 = (_DWORD *)*v3; /*0x401c27*/
      if ( v3 == v4 ) /*0x401c2b*/
        goto LABEL_5; /*0x401c2b*/
    }
    if ( v3 ) /*0x401c77*/
    {
      LinkedList::Init((_DWORD **)v3); /*0x401c7b*/
      InsertBeforeLinkedList(v4, v3); /*0x401c84*/
      return v3; /*0x401c92*/
    }
  }
LABEL_5:
  if ( IDXContainer::LoadSample(*a1) ) /*0x401c2f*/
  {
    v5 = LinkedList::Next((int **)v2[2]); /*0x401c44*/
    if ( !v5 ) /*0x401c48*/
    {
      v6 = AudioList::GetNextEntry(v4); /*0x401c55*/
      if ( v6 ) /*0x401c59*/
      {
        while ( *(_DWORD *)(v6 + 12) ) /*0x401c64*/
        {
          v6 = AudioList::GetNextEntry(v6); /*0x401c6d*/
          if ( !v6 ) /*0x401c71*/
            goto LABEL_18; /*0x401c71*/
        }
        if ( *(_DWORD *)(v6 + 4) != v6 ) /*0x401c96*/
          LinkedList::Init((_DWORD **)v6); /*0x401c9a*/
        for ( i = (_DWORD **)Queue::GetNext((int *)(v6 + 36)); i; i = (_DWORD **)Queue::GetNext((int *)(v6 + 36)) ) /*0x401cad*/
        {
          LinkedList::Init(i); /*0x401cb1*/
          AudioNode::Release(i); /*0x401cb8*/
          PushFrontLinkedListAlt(*(_DWORD **)(*(_DWORD *)(v6 + 60) + 4), (int)i); /*0x401cc5*/
        }
        nullsub_2(v6 + 28); /*0x401cda*/
        PushFrontLinkedListAlt(*(_DWORD **)(*(_DWORD *)(v6 + 60) + 8), v6); /*0x401ce7*/
      }
LABEL_18:
      v5 = LinkedList::Next((int **)v2[2]); /*0x401cf4*/
      if ( !v5 ) /*0x401cf8*/
      {
        AudioStream::ReleaseSubsystem(*v2); /*0x401cfc*/
        return 0; /*0x401d0a*/
      }
    }
    v5[5] = a2; /*0x401d11*/
    v5[15] = (int)v2; /*0x401d14*/
    DListNode::InitEmpty(v5); /*0x401d17*/
    v5[3] = 0; /*0x401d1c*/
    AudioStream::InitNodeFields(v5 + 7); /*0x401d26*/
    Struct::ZeroInit32(v5 + 16); /*0x401d30*/
    v5[12] = (int)(v5 + 16); /*0x401d35*/
    v9 = *(_DWORD *)(*v2 + 284); /*0x401d3a*/
    v18 = v9; /*0x401d42*/
    if ( !v9 ) /*0x401d46*/
    {
LABEL_37:
      AudioIndex::GetSampleInformation(v5 + 16); /*0x401e4f*/
      InsertBeforeLinkedList(v2 + 3, v5); /*0x401e62*/
      v5[6] = 1; /*0x401e67*/
      AudioStream::ReleaseSubsystem(*v2); /*0x401e70*/
      return v5; /*0x401e7e*/
    }
    while ( 1 ) /*0x401d57*/
    {
      v16 = v2[6]; /*0x401d57*/
      if ( v16 > v9 ) /*0x401d5b*/
        v16 = v9; /*0x401d5d*/
      v10 = LinkedList::Next((int **)v2[1]); /*0x401d69*/
      if ( !v10 ) /*0x401d6d*/
        break; /*0x401d6d*/
LABEL_35:
      sub_4085E0(v16); /*0x401e12*/
      sub_408500(v5 + 7, v10); /*0x401e28*/
      v13 = sub_4018C0(v16); /*0x401e36*/
      if ( v13 != v16 ) /*0x401e3d*/
        goto LABEL_38; /*0x401e3d*/
      v18 -= v13; /*0x401e45*/
      if ( !v18 ) /*0x401e49*/
        goto LABEL_37; /*0x401e49*/
      v9 = v18; /*0x401d4e*/
    }
    while ( 1 ) /*0x401d7b*/
    {
      v11 = AudioList::GetNextEntry(v2 + 3); /*0x401d7b*/
      if ( !v11 ) /*0x401d7f*/
        break; /*0x401d7f*/
      while ( *(_DWORD *)(v11 + 12) ) /*0x401d8a*/
      {
        v11 = AudioList::GetNextEntry(v11); /*0x401d93*/
        if ( !v11 ) /*0x401d97*/
          goto LABEL_38; /*0x401d97*/
      }
      if ( *(_DWORD *)(v11 + 4) != v11 ) /*0x401da2*/
        LinkedList::Init((_DWORD **)v11); /*0x401da6*/
      for ( j = (_DWORD **)Queue::GetNext((int *)(v11 + 36)); j; j = (_DWORD **)Queue::GetNext((int *)(v11 + 36)) ) /*0x401db9*/
      {
        LinkedList::Init(j); /*0x401dbd*/
        AudioNode::Release(j); /*0x401dc4*/
        PushFrontLinkedListAlt(*(_DWORD **)(*(_DWORD *)(v11 + 60) + 4), (int)j); /*0x401dd1*/
      }
      nullsub_2(v11 + 28); /*0x401de6*/
      PushFrontLinkedListAlt(*(_DWORD **)(*(_DWORD *)(v11 + 60) + 8), v11); /*0x401df3*/
      v2 = a1; /*0x401e04*/
      v10 = LinkedList::Next((int **)a1[1]); /*0x401e08*/
      if ( v10 ) /*0x401e0c*/
        goto LABEL_35; /*0x401e0c*/
    }
LABEL_38:
    if ( (int *)v5[1] != v5 ) /*0x401e82*/
      LinkedList::Init((_DWORD **)v5); /*0x401e86*/
    for ( k = (_DWORD **)Queue::GetNext(v5 + 9); k; k = (_DWORD **)Queue::GetNext(v5 + 9) ) /*0x401e99*/
    {
      LinkedList::Init(k); /*0x401e9d*/
      AudioNode::Release(k); /*0x401ea4*/
      PushFrontLinkedListAlt(*(_DWORD **)(v5[15] + 4), (int)k); /*0x401eb1*/
    }
    nullsub_2(v5 + 7); /*0x401ec6*/
    PushFrontLinkedListAlt(*(_DWORD **)(v5[15] + 8), (int)v5); /*0x401ed3*/
  }
  return 0; /*0x401c8b*/
}


// ==== 0x00401F80  ObjectClass::?EnterCriticalRegionHelper_ContextBase_details_Concurrency__UAEHXZ  this=ObjectClass  sig=csp ====
int __thiscall _EnterCriticalRegionHelper_ContextBase_details_Concurrency__UAEHXZ(
        Concurrency::details::ContextBase *this)
{
  int result; // eax

  result = this->vtable4 + 1; /*0x401f83*/
  this->vtable4 = result; /*0x401f84*/
  return result; /*0x401f87*/
}


// ==== 0x00401F90  RefCount::Decrement  this=RefCount  sig=csp ====
int __thiscall RefCount_Decrement(_DWORD *this)
{
  int result; // eax

  result = this->q00C - 1; /*0x401f93*/
  this->q00C = result; /*0x401f96*/
  if ( result < 0 ) /*0x401f99*/
    this->q00C = 0; /*0x401f9b*/
  return result; /*0x401fa2*/
}


// ==== 0x00401FB0  ObjectClass::method_401FB0  this=ObjectClass  sig=csp ====
int __thiscall sub_401FB0(_DWORD *this)
{
  return this->vtable4; /*0x401fb3*/
}


// ==== 0x00401FC0  ObjectClass::method_401FC0  this=ObjectClass  sig=csp ====
int __thiscall sub_401FC0(int this)
{
  _DWORD **i; // esi

  if ( *(_DWORD *)(this + 4) != this ) /*0x401fc8*/
    LinkedList::Init((_DWORD **)this); /*0x401fca*/
  for ( i = (_DWORD **)Queue::GetNext((int *)(this + 36)); i; i = (_DWORD **)Queue::GetNext((int *)(this + 36)) ) /*0x401fdd*/
  {
    LinkedList::Init(i); /*0x401fe1*/
    AudioNode::Release(i); /*0x401fe8*/
    PushFrontLinkedListAlt(*(_DWORD **)(*(_DWORD *)(this + 60) + 4), (int)i); /*0x401ff5*/
  }
  nullsub_2(this + 28); /*0x40200a*/
  return PushFrontLinkedListAlt(*(_DWORD **)(*(_DWORD *)(this + 60) + 8), this); /*0x402014*/
}


// ==== 0x00402020  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_402020(_DWORD *this)
{
  return this->abstractFlags; /*0x402023*/
}


// ==== 0x00402040  AudioController::Constructor  this=AudioController  sig=csp ====
int *__thiscall sub_402040(_DWORD *this)
{
  int *v2; // ebx

  v2 = (int *)__2_YAPAXI_Z(0x1C0u); /*0x402055*/
  memset(v2, 0, 0x1C0u); /*0x402060*/
  DListNode::InitEmpty(v2); /*0x402067*/
  v2[42] = 0; /*0x40206e*/
  v2[41] = 0; /*0x402074*/
  AudioMixer::Init(v2 + 54); /*0x402080*/
  v2[87] = (int)AudioController::AdvanceQueue; /*0x402085*/
  v2[88] = (int)AudioController::UpdatePlayback; /*0x40208f*/
  v2[89] = (int)AudioController::CleanupStream; /*0x402099*/
  v2[44] = 0; /*0x4020a3*/
  v2[45] = 0; /*0x4020a9*/
  v2[46] = 0; /*0x4020af*/
  v2[47] = 0; /*0x4020b5*/
  v2[48] = 0; /*0x4020bb*/
  v2[3] = 1; /*0x4020c1*/
  v2[42] = 0; /*0x4020c8*/
  v2[41] = 0; /*0x4020ce*/
  v2[40] = 0; /*0x4020d4*/
  v2[37] = MEMORY[0x87DE30]; /*0x4020e2*/
  v2[36] = 0; /*0x4020e8*/
  v2[38] = 0; /*0x4020ee*/
  v2[39] = 0; /*0x4020f4*/
  AudioMixer::Init(v2 + 4); /*0x4020fa*/
  v2[90] = 0; /*0x402103*/
  v2[43] = (int)this; /*0x402109*/
  v2[53] = this->q1D0; /*0x402115*/
  qmemcpy(v2 + 95, this + 17, 0x20u); /*0x402129*/
  v2[103] = 0; /*0x40212b*/
  v2[104] = 0; /*0x402131*/
  if ( !(*(int (__thiscall **)(int *))(this->q1D0 + 4))(v2) ) /*0x40213f*/
    return v2; /*0x402168*/
  if ( v2 ) /*0x402148*/
  {
    (*(void (__thiscall **)(int *))(v2[53] + 8))(v2); /*0x402152*/
    __3_YAXPAX_Z(v2); /*0x402156*/
  }
  return 0; /*0x40215e*/
}


// ==== 0x00402220  ObjectClass::Cleanup  this=ObjectClass  sig=csp ====
int __thiscall sub_402220(int *this)
{
  int v2; // ebp
  int *v3; // edi
  _DWORD *v4; // edx
  _DWORD *v5; // edx
  _DWORD *v6; // edx
  _DWORD *v7; // edx
  int result; // eax
  _DWORD *v9; // edx

  v2 = this->q0AC; /*0x402226*/
  v3 = this + 54; /*0x40222c*/
  AudioMixer::Init(this + 54); /*0x402234*/
  EndFrameAudioMixer(v3, this + 4); /*0x402240*/
  ObjectClass::ClearFlags2(this + 4); /*0x402247*/
  v4 = (_DWORD *)this->objectTypeFlags; /*0x40224c*/
  if ( v4 ) /*0x402254*/
  {
    EndFrameAudioMixer(v3, v4); /*0x402258*/
    ObjectClass::ClearFlags2((_DWORD *)this->objectTypeFlags); /*0x402263*/
  }
  v5 = (_DWORD *)this->q025; /*0x402268*/
  if ( v5 ) /*0x402270*/
    EndFrameAudioMixer(v3, v5); /*0x402274*/
  v6 = (_DWORD *)this->q026; /*0x402279*/
  if ( v6 ) /*0x402281*/
    EndFrameAudioMixer(v3, v6); /*0x402285*/
  v7 = (_DWORD *)this->q027; /*0x40228a*/
  if ( v7 ) /*0x402292*/
    EndFrameAudioMixer(v3, v7); /*0x402296*/
  result = EndFrameAudioMixer(v3, (_DWORD *)(v2 + 104)); /*0x4022a0*/
  v9 = *(_DWORD **)(v2 + 232); /*0x4022a5*/
  if ( v9 ) /*0x4022ad*/
    return EndFrameAudioMixer(v3, v9); /*0x4022b1*/
  return result; /*0x4022b6*/
}


// ==== 0x004022C0  AudioController::AdvanceQueue  this=AudioController  sig=csp ====
int __thiscall sub_4022C0(_DWORD *this)
{
  int (*v2)(void); // eax
  int result; // eax
  int *v4; // ecx
  int Next; // eax
  int v6; // eax

  v2 = (int (*)(void))this->q0B0; /*0x4022c6*/
  if ( v2 ) /*0x4022ce*/
  {
    result = v2(); /*0x4022d0*/
    if ( result ) /*0x4022d4*/
    {
      this->q174 = 0; /*0x4022d6*/
      this->q178 = 0; /*0x4022dc*/
      this->q170 = 0; /*0x4022e2*/
      return result; /*0x4022ea*/
    }
  }
  else
  {
    v4 = (int *)this->q16C; /*0x4022eb*/
    if ( v4 ) /*0x4022f3*/
    {
      Next = Queue::GetNext(v4); /*0x4022f5*/
      this->q16C = Next; /*0x4022fc*/
      if ( Next ) /*0x402302*/
      {
        this->q170 = *(_DWORD *)(Next + 12); /*0x402308*/
        v6 = *(_DWORD *)(Next + 16); /*0x40230e*/
        this->q174 = v6; /*0x402311*/
        this->q178 = v6; /*0x402317*/
        return 0; /*0x402320*/
      }
    }
    this->q174 = 0; /*0x402321*/
  }
  return 0; /*0x4022e8*/
}


// ==== 0x00402330  AudioController::UpdatePlayback  this=AudioController  sig=csp ====
int __thiscall AudioController::UpdatePlayback(int this)
{
  _DWORD *v2; // edi
  int v3; // eax
  int v4; // eax
  _DWORD *v5; // eax
  int v6; // eax
  void (__thiscall *v7)(int); // eax

  if ( *(_DWORD *)(this + 168) ) /*0x402334*/
  {
    if ( *(_DWORD *)(this + 168) != -1 ) /*0x402347*/
      --*(_DWORD *)(this + 168); /*0x402350*/
    v2 = *(_DWORD **)(this + 360); /*0x402356*/
    if ( v2 ) /*0x40235e*/
    {
      v3 = AudioController::GetOffset(*(int **)(this + 360)); /*0x402362*/
      *(_DWORD *)(this + 364) = v3; /*0x402369*/
      if ( v3 ) /*0x40236f*/
      {
        *(_DWORD *)(this + 368) = *(_DWORD *)(v3 + 12); /*0x402374*/
        v4 = *(_DWORD *)(v3 + 16); /*0x40237a*/
        *(_DWORD *)(this + 372) = v4; /*0x40237d*/
        *(_DWORD *)(this + 376) = v4; /*0x402383*/
        *v2 = 0; /*0x402389*/
      }
      else
      {
        v5 = *(_DWORD **)(this + 360); /*0x402391*/
        *(_DWORD *)(this + 368) = *v5; /*0x402399*/
        v6 = v5[1]; /*0x40239f*/
        *(_DWORD *)(this + 372) = v6; /*0x4023a2*/
        *(_DWORD *)(this + 376) = v6; /*0x4023a8*/
      }
    }
  }
  else
  {
    *(_DWORD *)(this + 360) = 0; /*0x4023b0*/
  }
  v7 = *(void (__thiscall **)(int))(this + 180); /*0x4023ba*/
  if ( v7 ) /*0x4023c2*/
    v7(this); /*0x4023c6*/
  if ( *(_DWORD *)(this + 360) ) /*0x4023c8*/
    (*(void (__thiscall **)(int))(*(_DWORD *)(this + 212) + 36))(this); /*0x4023da*/
  return 0; /*0x4023dd*/
}


// ==== 0x004023F0  AudioController::CleanupStream  this=AudioController  sig=csp ====
int __thiscall sub_4023F0(int *this)
{
  int v2; // eax
  int (__thiscall *v3)(int *); // eax

  this->q168 = 0; /*0x4023f3*/
  v2 = this->q0A4; /*0x4023fd*/
  LOBYTE(v2) = v2 & 0xFA; /*0x402403*/
  this->q0A4 = v2; /*0x402405*/
  this->q0A8 = 0; /*0x40240b*/
  AudioMixer::Init(this + 4); /*0x402418*/
  v3 = (int (__thiscall *)(int *))this->q0B8; /*0x40241d*/
  if ( v3 ) /*0x402425*/
    return v3(this); /*0x40242a*/
  else
    return 0; /*0x40242c*/
}


// ==== 0x00402430  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_402430(_DWORD *this)
{
  return this->q0A4 & 8; /*0x402439*/
}


// ==== 0x00402440  ObjectClass::method  this=ObjectClass  sig=csp ====
int (__thiscall *__fastcall sub_402440(int a1, int a2))(int)
{
  int v3; // eax
  int (__thiscall *result)(int); // eax

  v3 = *(_DWORD *)(a1 + 212); /*0x402443*/
  *(_DWORD *)(a1 + 12) = a2; /*0x402449*/
  (*(void (**)(void))(v3 + 40))(); /*0x40244c*/
  if ( (*(_BYTE *)(a1 + 164) & 5) != 0 ) /*0x402456*/
    (*(void (__thiscall **)(int))(*(_DWORD *)(a1 + 212) + 16))(a1); /*0x402460*/
  (*(void (__thiscall **)(int))(*(_DWORD *)(a1 + 212) + 44))(a1); /*0x40246b*/
  result = *(int (__thiscall **)(int))(a1 + 188); /*0x40246e*/
  if ( result ) /*0x402476*/
    result = (int (__thiscall *)(int))result(a1); /*0x40247a*/
  *(_DWORD *)(a1 + 360) = 0; /*0x40247c*/
  *(_DWORD *)(a1 + 164) |= 8u; /*0x40248f*/
  return result; /*0x402495*/
}


// ==== 0x004024A0  AudioSample::ResetState  this=AudioSample  sig=csp ====
int __thiscall sub_4024A0(_DWORD *this)
{
  int v2; // eax
  int v3; // ecx
  int result; // eax

  if ( (*(_BYTE *)(this + 41) & 8) != 0 ) /*0x4024aa*/
  {
    v2 = *(this + 41); /*0x4024b1*/
    LOBYTE(v2) = v2 & 0xF7; /*0x4024b7*/
    *(this + 41) = v2; /*0x4024b9*/
    *(this + 87) = AudioController::AdvanceQueue; /*0x4024c1*/
    *(this + 88) = AudioController::UpdatePlayback; /*0x4024cb*/
    *(this + 89) = AudioController::CleanupStream; /*0x4024d5*/
    this->q02C = 0; /*0x4024df*/
    *(this + 45) = 0; /*0x4024e5*/
    *(this + 46) = 0; /*0x4024eb*/
    *(this + 47) = 0; /*0x4024f1*/
    this->AudioSample_field_0x0C = 0; /*0x4024f7*/
    this->AudioSample_field_0x0C = 1; /*0x4024fd*/
    *(this + 42) = 0; /*0x402504*/
    *(this + 41) = 0; /*0x40250a*/
    this->q028 = 0; /*0x402510*/
    v3 = MEMORY[0x87DE30]; /*0x402516*/
    *(this + 36) = 0; /*0x40251c*/
    *(this + 37) = v3; /*0x402522*/
    *(this + 38) = 0; /*0x40252b*/
    *(this + 39) = 0; /*0x402531*/
    result = AudioMixer::Init(this + 4); /*0x402537*/
    *(this + 90) = 0; /*0x40253c*/
  }
  return result; /*0x402543*/
}


// ==== 0x00402550  AudioStream::Destructor  this=AudioStream  sig=csp ====
void __thiscall AudioStream::Destructor(_DWORD *Block)
{
  void (__thiscall *v2)(_DWORD *); // eax

  (*(void (**)(void))(*(Block + 53) + 40))(); /*0x402559*/
  if ( (*(_BYTE *)(Block + 41) & 5) != 0 ) /*0x402563*/
    (*(void (__thiscall **)(_DWORD *))(*(Block + 53) + 16))(Block); /*0x40256d*/
  (*(void (__thiscall **)(_DWORD *))(*(Block + 53) + 44))(Block); /*0x402578*/
  v2 = (void (__thiscall *)(_DWORD *))*(Block + 47); /*0x40257b*/
  if ( v2 ) /*0x402583*/
    v2(Block); /*0x402587*/
  *(Block + 90) = 0; /*0x40258b*/
  AudioStream::InitListAndCounters((int)Block); /*0x402595*/
  (*(void (__thiscall **)(_DWORD *))(*(Block + 53) + 8))(Block); /*0x4025a2*/
  __3_YAXPAX_Z(Block); /*0x4025a6*/
}


// ==== 0x004025B0  Voice::Stop  this=Voice  sig=csp ====
int (__thiscall *__thiscall Voice_Stop(int this))(int)
{
  int (__thiscall *result)(int); // eax

  (*(void (**)(void))(*(_DWORD *)(this + 212) + 40))(); /*0x4025b9*/
  if ( (*(_BYTE *)(this + 164) & 5) != 0 ) /*0x4025c3*/
    (*(void (__thiscall **)(int))(*(_DWORD *)(this + 212) + 16))(this); /*0x4025cd*/
  (*(void (__thiscall **)(int))(*(_DWORD *)(this + 212) + 44))(this); /*0x4025d8*/
  result = *(int (__thiscall **)(int))(this + 188); /*0x4025db*/
  if ( result ) /*0x4025e3*/
    result = (int (__thiscall *)(int))result(this); /*0x4025e7*/
  *(_DWORD *)(this + 360) = 0; /*0x4025e9*/
  return result; /*0x4025f3*/
}


// ==== 0x00402600  AudioChannel::DeactivatePlay  this=AudioChannel  sig=csp ====
int __thiscall AudioChannel::DeactivatePlay(_DWORD *this)
{
  int v2; // eax

  (*(void (**)(void))(*(this + 53) + 40))(); /*0x402609*/
  if ( (*(_BYTE *)(this + 41) & 1) != 0 ) /*0x402613*/
  {
    *(this + 41) &= ~1u; /*0x40261e*/
    (*(void (__thiscall **)(_DWORD *))(*(this + 53) + 20))(this); /*0x40262c*/
    v2 = *(this + 41); /*0x40262f*/
    LOBYTE(v2) = v2 | 4; /*0x402635*/
    *(this + 41) = v2; /*0x402637*/
  }
  return (*(int (__thiscall **)(_DWORD *))(*(this + 53) + 44))(this);
}


// ==== 0x00402650  AudioChannel::ActivatePlay  this=AudioChannel  sig=csp ====
int __thiscall AudioChannel::ActivatePlay(_DWORD *this)
{
  int v2; // eax

  (*(void (**)(void))(*(this + 53) + 40))(); /*0x402659*/
  if ( (*(_BYTE *)(this + 41) & 4) != 0 ) /*0x402663*/
  {
    (*(void (__thiscall **)(_DWORD *))(*(this + 53) + 24))(this); /*0x40266d*/
    v2 = *(this + 41); /*0x402670*/
    LOBYTE(v2) = v2 & 0xFB; /*0x402676*/
    *(this + 41) = v2; /*0x402678*/
    *(this + 41) |= 1u; /*0x402687*/
  }
  return (*(int (__thiscall **)(_DWORD *))(*(this + 53) + 44))(this);
}


// ==== 0x004026A0  AudioFile::GetCallback  this=AudioFile  sig=csp ====
int __thiscall Accessor_4026a0(_DWORD *this)
{
  return (*(int (**)(void))(this->q0D4 + 40))();
}


// ==== 0x004026B0  AudioStream::Stop  this=AudioStream  sig=csp ====
int __thiscall AudioStream_Stop(_DWORD *this)
{
  return (*(int (**)(void))(this->AudioStream_field_0xD4 + 44))();
}


// ==== 0x004026C0  ObjectClass::method_4026C0  this=Voice  sig=csp ====
int __thiscall sub_4026C0(_DWORD *this)
{
  (*(void (**)(void))(*(this + 53) + 40))(); /*0x4026c9*/
  *(this + 41) |= 0x10u; /*0x4026d5*/
  return (*(int (__thiscall **)(_DWORD *))(*(this + 53) + 44))(this);
}


// ==== 0x004026F0  AudioStream::ReleaseChannel  this=AudioStream  sig=csp ====
int __thiscall AudioStream_ReleaseChannel(_DWORD *this)
{
  (*(void (**)(void))(this->AudioStream_field_0xD4 + 40))(); /*0x4026f9*/
  *(this + 41) &= ~0x10u; /*0x402705*/
  return (*(int (__thiscall **)(_DWORD *))(this->AudioStream_field_0xD4 + 44))(this);
}


// ==== 0x00402720  Audio::GetChannelStatus  this=Audio  sig=csp ====
int __thiscall sub_402720(int this)
{
  int v3; // edi
  int v4; // eax

  if ( (*(_BYTE *)(this + 164) & 5) != 0 ) /*0x40272a*/
    return -2146500608; /*0x40272c*/
  if ( !*(_DWORD *)(this + 360) ) /*0x402733*/
    return -2147024896; /*0x40273d*/
  Audio::InitChannels((char *)(this + 16)); /*0x402748*/
  ObjectClass::Cleanup((int *)this); /*0x40274f*/
  (*(void (__thiscall **)(int))(*(_DWORD *)(this + 212) + 40))(this); /*0x40275c*/
  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)(this + 212) + 12))(this); /*0x40276a*/
  if ( !v3 ) /*0x40276e*/
  {
    v4 = *(_DWORD *)(this + 164); /*0x402770*/
    LOBYTE(v4) = v4 | 1; /*0x402776*/
    *(_DWORD *)(this + 164) = v4; /*0x402778*/
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)(this + 212) + 44))(this); /*0x402786*/
  return v3; /*0x402731*/
}


// ==== 0x00402790  BindChannelAudioStream  this=ObjectClass  sig=csp ====
void __fastcall AudioStream_BindChannel(_DWORD *a1, _DWORD *a2)
{
  int v4; // eax
  int v5; // eax
  _DWORD *v6; // eax
  int v7; // eax

  a1[90] = a2; /*0x402798*/
  if ( a2 ) /*0x40279e*/
  {
    v4 = AudioController::GetOffset(a2); /*0x4027a2*/
    a1[91] = v4; /*0x4027a9*/
    if ( v4 ) /*0x4027af*/
    {
      a1[92] = *(_DWORD *)(v4 + 12); /*0x4027b4*/
      v5 = *(_DWORD *)(v4 + 16); /*0x4027ba*/
      a1[93] = v5; /*0x4027bd*/
      a1[94] = v5; /*0x4027c3*/
      *a2 = 0; /*0x4027c9*/
    }
    else
    {
      v6 = (_DWORD *)a1[90]; /*0x4027d2*/
      a1[92] = *v6; /*0x4027da*/
      v7 = v6[1]; /*0x4027e0*/
      a1[93] = v7; /*0x4027e3*/
      a1[94] = v7; /*0x4027e9*/
    }
  }
}


// ==== 0x00402800  AudioStream::CheckFormatChanged  this=AudioStream  sig=csp ====
int __fastcall sub_402800(int a1, const void *a2)
{
  void *v3; // ebx
  int result; // eax

  v3 = (void *)(a1 + 380); /*0x402805*/
  if ( !memcmp(a2, (const void *)(a1 + 380), 0x20u) ) /*0x402817*/
  {
    *(_DWORD *)(a1 + 412) = 0; /*0x40281b*/
    return 0; /*0x402822*/
  }
  else
  {
    *(_DWORD *)(a1 + 412) = 1; /*0x402831*/
    result = *(_DWORD *)(a1 + 412); /*0x40283b*/
    qmemcpy(v3, a2, 0x20u); /*0x402841*/
  }
  return result; /*0x402821*/
}


// ==== 0x00402850  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_402850(_DWORD *this)
{
  this->vtable3 = 0; /*0x402852*/
  this->vtable2 = 0; /*0x402855*/
  return 0; /*0x402858*/
}


// ==== 0x004028B0  AudioStream::InitListAndCounters  this=AudioStream  sig=csp ====
int __thiscall sub_4028B0(int this)
{
  int v2; // esi
  int result; // eax

  v2 = *(_DWORD *)(this + 172); /*0x4028b4*/
  LinkedList::Init((_DWORD **)this); /*0x4028ba*/
  --*(_DWORD *)(v2 + 240); /*0x4028c6*/
  ++*(_DWORD *)(v2 + 260); /*0x4028d3*/
  LinkedList::Init((_DWORD **)this); /*0x4028db*/
  result = *(_DWORD *)(v2 + 260) - 1; /*0x4028e6*/
  *(_DWORD *)(v2 + 260) = result; /*0x4028e9*/
  if ( result < 0 ) /*0x4028ef*/
    *(_DWORD *)(v2 + 260) = 0; /*0x4028f1*/
  return result; /*0x4028fb*/
}


// ==== 0x00402940  ObjectClass::method  this=ObjectClass  sig=csp ====
int sub_402940()
{
  DListNode::Init(off_815E98); /*0x402946*/
  DListNode::Init((_DWORD *)off_815E98 + 3); /*0x402953*/
  *((_DWORD *)off_815E98 + 6) = 0; /*0x40295e*/
  MEMORY[0x87DE30] = (int)off_815E98 + 32; /*0x40296e*/
  AudioMixer::Init((int *)off_815E98 + 8); /*0x402974*/
  MEMORY[0x87DE2C] = 1; /*0x402979*/
  return 0; /*0x402985*/
}


// ==== 0x00402990  ObjectClass::method  this=ObjectClass  sig=csp ====
void sub_402990()
{
  int *Next; // edi
  int *i; // esi
  int v2; // eax
  int *v3; // ebx
  int *v4; // edi
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int *v8; // edi
  int *j; // esi
  int NextAlt; // [esp+4h] [ebp-10h]
  int *v11; // [esp+Ch] [ebp-8h] BYREF

  if ( MEMORY[0x87DE2C] ) /*0x40299d*/
  {
    ++*((_DWORD *)off_815E98 + 6); /*0x4029af*/
    Next = (int *)AudioQueue::GetNext((int *)off_815E98 + 3); /*0x4029c0*/
    for ( i = Next; Next; i = Next ) /*0x4029ca*/
    {
      NextAlt = AudioQueue::GetNextAlt(Next); /*0x4029d7*/
      Next = (int *)NextAlt; /*0x4029db*/
      ++*((_DWORD *)off_815E98 + 6); /*0x4029e6*/
      LinkedList::Init((_DWORD **)i); /*0x4029eb*/
      v2 = *((_DWORD *)off_815E98 + 6) - 1; /*0x4029f9*/
      *((_DWORD *)off_815E98 + 6) = v2; /*0x4029fc*/
      if ( v2 < 0 ) /*0x4029ff*/
        *((_DWORD *)off_815E98 + 6) = 0; /*0x402a07*/
      v11 = (int *)AudioQueue::GetNext(i + 62); /*0x402a17*/
      v3 = v11; /*0x402a1b*/
      if ( v11 ) /*0x402a1d*/
      {
        do /*0x402a35*/
        {
          v4 = AudioQueue::IteratorNext(&v11); /*0x402a2a*/
          AudioStream::Destructor(v3); /*0x402a2c*/
          v3 = v4; /*0x402a33*/
        }
        while ( v4 ); /*0x402a35*/
        Next = (int *)NextAlt; /*0x402a37*/
      }
      (*(void (__thiscall **)(int *))(*(_DWORD *)(i[6] + 12) + 32))(i); /*0x402a43*/
      *(_DWORD *)(i[6] + 4 * i[7] + 28) = 0; /*0x402a4c*/
      v5 = i[6]; /*0x402a50*/
      v6 = *(_DWORD *)(v5 + 16) - 1; /*0x402a56*/
      *(_DWORD *)(v5 + 16) = v6; /*0x402a59*/
      if ( v6 < 0 ) /*0x402a5c*/
        *(_DWORD *)(i[6] + 16) = 0; /*0x402a61*/
      __3_YAXPAX_Z(i); /*0x402a65*/
    }
    v7 = *((_DWORD *)off_815E98 + 6) - 1; /*0x402a80*/
    *((_DWORD *)off_815E98 + 6) = v7; /*0x402a83*/
    if ( v7 < 0 ) /*0x402a86*/
      *((_DWORD *)off_815E98 + 6) = 0; /*0x402a8d*/
    v8 = (int *)AudioQueue::GetNext((int *)off_815E98); /*0x402a9b*/
    for ( j = v8; v8; j = v8 ) /*0x402aa1*/
    {
      v8 = (int *)AudioQueue::GetNextAlt(v8); /*0x402ab1*/
      LinkedList::Init((_DWORD **)j); /*0x402ab5*/
      (*(void (__thiscall **)(int *))(j[3] + 24))(j); /*0x402abf*/
      *(_DWORD *)(j[3] + 12) &= ~1u; /*0x402ac6*/
      __3_YAXPAX_Z(j); /*0x402ac9*/
      MEMORY[0x87DE28] = 0; /*0x402ad3*/
    }
    MEMORY[0x87DE2C] = 0; /*0x402adf*/
  }
}


// ==== 0x00402AF0  AudioQueue::CreateNode  this=AudioQueue  sig=csp ====
_DWORD *__thiscall sub_402AF0(int this)
{
  _DWORD *v2; // esi

  v2 = __2_YAPAXI_Z(0x60u); /*0x402afc*/
  memset(v2, 0, 0x60u); /*0x402b07*/
  DListNode::InitEmpty(v2); /*0x402b0e*/
  v2[4] = 0; /*0x402b13*/
  v2[3] = this; /*0x402b1c*/
  if ( (*(int (__thiscall **)(_DWORD *))(this + 20))(v2) ) /*0x402b1f*/
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
  *(_DWORD *)(this + 12) |= 1u; /*0x402b5e*/
  InsertAfterDListNode((int)off_815E98, v2); /*0x402b67*/
  if ( (*(_BYTE *)(this + 8) & 2) != 0 ) /*0x402b70*/
    MEMORY[0x87DE28] = 1; /*0x402b72*/
  return v2; /*0x402b44*/
}


// ==== 0x00402C70  CreateAudioChannel  this=-  sig=csp ====
int *__fastcall CreateAudioChannel(int a1, const void *a2)
{
  int v2; // edi
  int *NextAudioQueue; // eax
  int *v4; // esi
  int v5; // ecx
  int *v7; // edi
  int *v8; // ebx
  int v9; // eax
  int v10; // [esp+10h] [ebp-10h]
  int v11; // [esp+14h] [ebp-Ch]
  int v12; // [esp+18h] [ebp-8h]

  v11 = a1; /*0x402c80*/
  if ( a1 == -1 ) /*0x402c84*/
  {
    v11 = 0; /*0x402c86*/
    a1 = 0; /*0x402c8a*/
  }
  v2 = a1; /*0x402c8c*/
  NextAudioQueue = (int *)AudioQueue::GetNext((int *)off_815E98); /*0x402c98*/
  v4 = NextAudioQueue; /*0x402c9f*/
  if ( !NextAudioQueue ) /*0x402ca1*/
    return 0; /*0x402ca1*/
  while ( 1 ) /*0x402ca7*/
  {
    v5 = NextAudioQueue[6]; /*0x402ca7*/
    if ( v2 < v5 ) /*0x402cac*/
      break; /*0x402cac*/
    v2 -= v5; /*0x402cae*/
    NextAudioQueue = (int *)AudioQueue::GetNextAlt(NextAudioQueue); /*0x402cb6*/
    v4 = NextAudioQueue; /*0x402cbd*/
    if ( !NextAudioQueue ) /*0x402cbf*/
      return 0; /*0x402cce*/
  }
  v10 = v2; /*0x402cd1*/
  if ( !v4 ) /*0x402cd5*/
    return 0; /*0x402cd5*/
  v7 = (int *)v4[v2 + 7]; /*0x402cdb*/
  if ( !v7 ) /*0x402ce1*/
  {
    v12 = v4[3]; /*0x402cef*/
    v8 = (int *)__2_YAPAXI_Z(0x1E8u); /*0x402cf8*/
    memset(v8, 0, 0x1E8u); /*0x402d03*/
    DListNode::InitEmpty(v8); /*0x402d0a*/
    v8[6] = (int)v4; /*0x402d13*/
    v8[7] = v10; /*0x402d16*/
    v8[4] = 0; /*0x402d19*/
    ++v4[4]; /*0x402d20*/
    v4[v10 + 7] = (int)v8; /*0x402d27*/
    v8[116] = *(_DWORD *)(v12 + 36); /*0x402d34*/
    DListNode::Init(v8 + 62); /*0x402d3a*/
    AudioMixer::Init(v8 + 26); /*0x402d42*/
    v8[65] = 0; /*0x402d47*/
    v8[67] = (int)ProcessAudioMixerFrame; /*0x402d4d*/
    v8[68] = 0; /*0x402d57*/
    v8[69] = 0; /*0x402d5d*/
    v8[70] = 0; /*0x402d63*/
    v8[71] = 0; /*0x402d69*/
    v8[72] = 0; /*0x402d6f*/
    v8[73] = 0; /*0x402d75*/
    v8[74] = 0; /*0x402d7b*/
    v8[75] = 0; /*0x402d81*/
    v8[78] = 0; /*0x402d87*/
    v8[79] = 0; /*0x402d8d*/
    v8[86] = 0; /*0x402d93*/
    v8[88] = 0; /*0x402d99*/
    v8[84] = 5000; /*0x402d9f*/
    v8[85] = 0; /*0x402da9*/
    v8[80] = 0; /*0x402daf*/
    v8[81] = 0; /*0x402db5*/
    v8[82] = 0; /*0x402dbb*/
    v8[83] = 0; /*0x402dc1*/
    v8[89] = 0; /*0x402dc7*/
    v8[87] = 0; /*0x402dcd*/
    v8[68] = 33; /*0x402dd8*/
    v8[69] = 0; /*0x402dde*/
    v8[70] = 33; /*0x402de4*/
    v8[71] = 0; /*0x402dea*/
    *((_QWORD *)v8 + 38) = 10LL * *((_QWORD *)v8 + 34); /*0x402e06*/
    v8[70] = 165; /*0x402e17*/
    v8[71] = 0; /*0x402e1d*/
    v8[76] = 165; /*0x402e23*/
    v8[77] = 0; /*0x402e29*/
    AudioStream::Reset(v8 + 92); /*0x402e37*/
    CoordBounds::Constructor(v8 + 92, 33, 0); /*0x402e40*/
    Struct::ZeroInit32(v8 + 17); /*0x402e4a*/
    Struct::ZeroInit32(v8 + 9); /*0x402e52*/
    if ( a2 ) /*0x402e5d*/
      qmemcpy(v8 + 17, a2, 0x20u); /*0x402e64*/
    if ( (*(int (__thiscall **)(int *))(v12 + 28))(v8) ) /*0x402e6c*/
    {
      if ( v8 ) /*0x402e75*/
      {
        sub_402EF0(v8); /*0x402e79*/
        return 0; /*0x402e87*/
      }
      return 0; /*0x402e75*/
    }
    v7 = v8; /*0x402e8a*/
    if ( !v8 ) /*0x402e8c*/
      return 0; /*0x402e97*/
    v8[59] = v11; /*0x402e9c*/
    ++*((_DWORD *)off_815E98 + 6); /*0x402eab*/
    InsertAfterDListNode((int)off_815E98 + 12, v8); /*0x402eb8*/
    v9 = *((_DWORD *)off_815E98 + 6) - 1; /*0x402ec6*/
    *((_DWORD *)off_815E98 + 6) = v9; /*0x402ec9*/
    if ( v9 < 0 ) /*0x402ecc*/
      *((_DWORD *)off_815E98 + 6) = 0; /*0x402ed4*/
  }
  ++v7[4]; /*0x402edb*/
  return v7; /*0x402cc5*/
}


// ==== 0x00402EF0  ObjectClass::method_402EF0  this=ObjectClass  sig=csp ====
void __thiscall sub_402EF0(int *Block)
{
  int *Next; // esi
  int *i; // ebx
  int v4; // eax
  int v5; // ecx

  Next = (int *)AudioQueue::GetNext(Block + 62); /*0x402f00*/
  for ( i = Next; Next; i = Next ) /*0x402f06*/
  {
    Next = (int *)AudioQueue::GetNextAlt(Next); /*0x402f11*/
    AudioStream::Destructor(i); /*0x402f13*/
  }
  (*(void (__thiscall **)(int *))(*(_DWORD *)(*(Block + 6) + 12) + 32))(Block); /*0x402f26*/
  *(_DWORD *)(*(Block + 6) + 4 * *(Block + 7) + 28) = 0; /*0x402f2f*/
  v4 = *(Block + 6); /*0x402f37*/
  v5 = *(_DWORD *)(v4 + 16) - 1; /*0x402f3d*/
  *(_DWORD *)(v4 + 16) = v5; /*0x402f40*/
  if ( v5 < 0 ) /*0x402f43*/
    *(_DWORD *)(*(Block + 6) + 16) = 0; /*0x402f48*/
  __3_YAXPAX_Z(Block); /*0x402f50*/
}


// ==== 0x00402F60  ObjectClass::ProcessAudioMixerFrame  this=ObjectClass  sig=csp ====
int __thiscall ProcessAudioMixerFrame(int this)
{
  __int64 v3; // rax
  unsigned __int64 v4; // kr00_8
  _DWORD *v5; // ebx
  char *v6; // ecx
  _BYTE *v7; // ecx
  int *v8; // edi
  int *v9; // ebx
  _BYTE *v10; // ecx
  _BYTE *v11; // ecx
  _BYTE *v12; // ecx
  _BYTE *v13; // ecx
  _DWORD *v14; // esi
  BOOL active; // [esp+10h] [ebp-Ch]

  if ( *(_DWORD *)(this + 260) ) /*0x402f69*/
    return -2146304000; /*0x402f76*/
  LODWORD(v3) = Audio::Callback(); /*0x402f80*/
  if ( (unsigned __int64)(v3 - *(_QWORD *)(this + 312)) >= *(_QWORD *)(this + 272) ) /*0x402fb1*/
  {
    v4 = v3 - *(_QWORD *)(this + 312); /*0x402fc5*/
    *(_QWORD *)(this + 288) = v4; /*0x402fcb*/
    ++*(_DWORD *)(this + 344); /*0x402fde*/
    if ( *(_QWORD *)(this + 296) > *(_QWORD *)(this + 304) ) /*0x403008*/
    {
      *(_DWORD *)(this + 296) = 0; /*0x40300c*/
      *(_DWORD *)(this + 300) = 0; /*0x403012*/
    }
    if ( v4 > *(_QWORD *)(this + 296) ) /*0x40302c*/
      *(_QWORD *)(this + 296) = v4; /*0x40302e*/
    if ( v4 > *(_QWORD *)(this + 280) ) /*0x40304e*/
      ++*(_DWORD *)(this + 348); /*0x403057*/
    if ( v4 > *(_QWORD *)(this + 320) ) /*0x403071*/
      *(_QWORD *)(this + 320) = v4; /*0x403073*/
    *(_QWORD *)(this + 312) = v3; /*0x40307f*/
    v5 = (_DWORD *)(this + 104); /*0x40308b*/
    Audio::InitChannels((char *)(this + 104)); /*0x403094*/
    v6 = *(char **)(this + 232); /*0x403099*/
    if ( v6 ) /*0x4030a1*/
      Audio::InitChannels(v6); /*0x4030a3*/
    v7 = *(_BYTE **)(this + 232); /*0x4030a8*/
    if ( !v7 || !(active = AudioChannel::IsActive(v7)) ) /*0x4030bd*/
      active = AudioChannel::IsActive((_BYTE *)(this + 104)); /*0x4030c6*/
    v8 = *(int **)(this + 248); /*0x4030ca*/
    if ( v8 != (int *)(this + 248) ) /*0x4030d8*/
    {
      do /*0x40317d*/
      {
        v9 = (int *)*v8; /*0x4030de*/
        if ( (v8[41] & 1) != 0 && v8[90] ) /*0x4030ee*/
        {
          if ( (Audio::InitChannels((char *)v8 + 16), active) /*0x403158*/
            || AudioChannel::IsActive((_BYTE *)v8 + 16)
            || (v10 = (_BYTE *)v8[37]) != 0 && AudioChannel::IsActive(v10)
            || (v11 = (_BYTE *)v8[38]) != 0 && AudioChannel::IsActive(v11)
            || (v12 = (_BYTE *)v8[39]) != 0 && AudioChannel::IsActive(v12)
            || (v13 = (_BYTE *)v8[36]) != 0 && AudioChannel::IsActive(v13) )
          {
            ObjectClass::Cleanup(v8); /*0x403163*/
            (*(void (__thiscall **)(int *))(v8[53] + 32))(v8); /*0x403170*/
          }
        }
        v8 = v9; /*0x403179*/
      }
      while ( v9 != (int *)(this + 248) ); /*0x40317d*/
      v5 = (_DWORD *)(this + 104); /*0x403183*/
    }
    v14 = *(_DWORD **)(this + 232); /*0x403187*/
    if ( v14 ) /*0x40318f*/
      ObjectClass::ClearFlags2(v14); /*0x403193*/
    ObjectClass::ClearFlags2(v5); /*0x40319a*/
  }
  return 0; /*0x402f73*/
}


// ==== 0x00403210  ObjectClass::method  this=ObjectClass  sig=csp ====
void *sub_403210()
{
  int *Next; // eax
  int *v1; // esi
  int v2; // eax
  int *v3; // edi
  int *i; // ebx
  int v5; // eax
  int v6; // ecx
  void *result; // eax
  int NextAlt; // [esp+8h] [ebp-8h]

  ++*((_DWORD *)off_815E98 + 6); /*0x40321e*/
  Next = (int *)AudioQueue::GetNext((int *)off_815E98 + 3); /*0x40322a*/
  v1 = Next; /*0x403237*/
  if ( Next ) /*0x403239*/
  {
    while ( 1 ) /*0x403252*/
    {
      NextAlt = AudioQueue::GetNextAlt(Next); /*0x403252*/
      ++*((_DWORD *)off_815E98 + 6); /*0x40325f*/
      LinkedList::Init((_DWORD **)v1); /*0x403264*/
      v2 = *((_DWORD *)off_815E98 + 6) - 1; /*0x403272*/
      *((_DWORD *)off_815E98 + 6) = v2; /*0x403275*/
      if ( v2 < 0 ) /*0x403278*/
        *((_DWORD *)off_815E98 + 6) = 0; /*0x403280*/
      v3 = (int *)AudioQueue::GetNext(v1 + 62); /*0x40328e*/
      for ( i = v3; v3; i = v3 ) /*0x403294*/
      {
        v3 = (int *)AudioQueue::GetNextAlt(v3); /*0x40329f*/
        AudioStream::Destructor(i); /*0x4032a1*/
      }
      (*(void (__thiscall **)(int *))(*(_DWORD *)(v1[6] + 12) + 32))(v1); /*0x4032b4*/
      *(_DWORD *)(v1[6] + 4 * v1[7] + 28) = 0; /*0x4032bd*/
      v5 = v1[6]; /*0x4032c1*/
      v6 = *(_DWORD *)(v5 + 16) - 1; /*0x4032c7*/
      *(_DWORD *)(v5 + 16) = v6; /*0x4032ca*/
      if ( v6 < 0 ) /*0x4032cd*/
        *(_DWORD *)(v1[6] + 16) = 0; /*0x4032d2*/
      __3_YAXPAX_Z(v1); /*0x4032d6*/
      v1 = (int *)NextAlt; /*0x4032db*/
      if ( !NextAlt ) /*0x4032e4*/
        break; /*0x4032e4*/
      Next = (int *)NextAlt; /*0x403243*/
    }
  }
  result = (void *)(*((_DWORD *)off_815E98 + 6) - 1); /*0x4032f5*/
  *((_DWORD *)off_815E98 + 6) = result; /*0x4032f8*/
  if ( (int)result < 0 ) /*0x4032fb*/
  {
    result = off_815E98; /*0x4032fd*/
    *((_DWORD *)off_815E98 + 6) = 0; /*0x403302*/
  }
  return result; /*0x403305*/
}


// ==== 0x004033C0  AudioStream::DestroyAll  this=ObjectClass  sig=csp ====
void __thiscall AudioStream::DestroyAll(void *Block)
{
  int v2; // eax
  int *Next; // edi
  int *i; // ebx
  int v5; // eax
  int v6; // ecx

  ++*((_DWORD *)off_815E98 + 6); /*0x4033cc*/
  LinkedList::Init((_DWORD **)Block); /*0x4033d1*/
  v2 = *((_DWORD *)off_815E98 + 6) - 1; /*0x4033df*/
  *((_DWORD *)off_815E98 + 6) = v2; /*0x4033e2*/
  if ( v2 < 0 ) /*0x4033e5*/
    *((_DWORD *)off_815E98 + 6) = 0; /*0x4033ed*/
  Next = (int *)AudioQueue::GetNext((int *)Block + 62); /*0x403401*/
  for ( i = Next; Next; i = Next ) /*0x403407*/
  {
    Next = (int *)AudioQueue::GetNextAlt(Next); /*0x403412*/
    AudioStream::Destructor(i); /*0x403414*/
  }
  (*(void (__thiscall **)(void *))(*(_DWORD *)(*((_DWORD *)Block + 6) + 12) + 32))(Block); /*0x403427*/
  *(_DWORD *)(*((_DWORD *)Block + 6) + 4 * *((_DWORD *)Block + 7) + 28) = 0; /*0x403430*/
  v5 = *((_DWORD *)Block + 6); /*0x403438*/
  v6 = *(_DWORD *)(v5 + 16) - 1; /*0x40343e*/
  *(_DWORD *)(v5 + 16) = v6; /*0x403440*/
  if ( v6 < 0 ) /*0x403446*/
    *(_DWORD *)(*((_DWORD *)Block + 6) + 16) = 0; /*0x40344b*/
  __3_YAXPAX_Z(Block); /*0x403453*/
}


// ==== 0x00403460  sub_403460  this=-  sig=ida-proto ====
int sub_403460()
{
  return -2147221504; /*0x403465*/
}


// ==== 0x00403470  sub_403470  this=-  sig=ida-proto ====
int __fastcall sub_403470(int a1, int a2)
{
  return EndBufferMixer((int *)(a1 + 104), a2);
}


// ==== 0x00403480  sub_403480  this=-  sig=ida-proto ====
int __fastcall sub_403480(int a1, int a2)
{
  return RequestBufferMixer((unsigned int *)(a1 + 104), a2);
}


// ==== 0x00403490  ObjectClass::?GetSchedulerProxy_SchedulerBase_details_Concurrency__QBEPAUISchedulerProxy_3_XZ  this=ObjectClass  sig=csp ====
struct Concurrency::ISchedulerProxy *__thiscall _GetSchedulerProxy_SchedulerBase_details_Concurrency__QBEPAUISchedulerProxy_3_XZ(
        Concurrency::details::SchedulerBase *this)
{
  return (struct Concurrency::ISchedulerProxy *)this->q03D; /*0x403496*/
}


// ==== 0x004034A0  ObjectClass::?GetIScheduler_SchedulerBase_details_Concurrency__QAEPAUIScheduler_3_XZ  this=ObjectClass  sig=csp ====
struct Concurrency::IScheduler *__thiscall _GetIScheduler_SchedulerBase_details_Concurrency__QAEPAUIScheduler_3_XZ(
        Concurrency::details::SchedulerBase *this)
{
  return (struct Concurrency::IScheduler *)this->ambientSoundController; /*0x4034a6*/
}


// ==== 0x00403530  AudioQueue::PreallocateChannels  this=AudioQueue  sig=csp ====
int __fastcall sub_403530(_DWORD *a1, int a2)
{
  int v4; // edi
  int *v5; // eax
  int v6; // eax

  v4 = 0; /*0x403537*/
  do /*0x40359e*/
  {
    if ( a1[60] >= a1[61] ) /*0x403547*/
      break; /*0x403547*/
    v5 = AudioController::Constructor(a1); /*0x40354b*/
    if ( !v5 ) /*0x403552*/
      break; /*0x403552*/
    v5[43] = (int)a1; /*0x403554*/
    ++a1[60]; /*0x403561*/
    ++a1[65]; /*0x40356e*/
    InsertAfterDListNode((int)(a1 + 62), v5); /*0x40357c*/
    v6 = a1[65] - 1; /*0x403587*/
    a1[65] = v6; /*0x40358a*/
    if ( v6 < 0 ) /*0x403590*/
      a1[65] = 0; /*0x403592*/
    ++v4; /*0x40359c*/
    --a2; /*0x40359d*/
  }
  while ( a2 ); /*0x40359e*/
  return v4; /*0x4035a2*/
}


// ==== 0x004035B0  sub_4035B0  this=ObjectClass  sig=csp ====
int __fastcall sub_4035B0(int a1, int *a2)
{
  int result; // eax

  result = AudioQueue::GetNext((int *)(a1 + 248)); /*0x4035b9*/
  *a2 = result; /*0x4035be*/
  return result; /*0x4035c0*/
}


// ==== 0x004035D0  AudioQueue::IteratorNext  this=AudioQueue  sig=csp ====
int *__thiscall sub_4035D0(int **this)
{
  int *v2; // ecx

  v2 = *this; /*0x4035d3*/
  if ( v2 ) /*0x4035d7*/
    *this = (int *)AudioQueue::GetNextAlt(v2); /*0x4035de*/
  return *this; /*0x4035e2*/
}


// ==== 0x004035F0  AudioQueue::FindBestChannel  this=AudioQueue  sig=csp ====
int __fastcall sub_4035F0(int a1, int a2)
{
  int v2; // ebx
  int v3; // edi
  int v4; // ebp
  unsigned int v5; // esi
  int result; // eax
  int v7; // ecx
  unsigned int v8; // edx
  int v9; // [esp+10h] [ebp-Ch]
  int v10; // [esp+14h] [ebp-8h]
  int v11; // [esp+18h] [ebp-4h]

  v2 = a2; /*0x4035f4*/
  v10 = a2; /*0x4035fc*/
  if ( a2 == -1 ) /*0x403600*/
  {
    v2 = 1; /*0x403602*/
    v10 = 1; /*0x403607*/
  }
  v3 = 127; /*0x40360b*/
  v4 = 0; /*0x403610*/
  v9 = 127; /*0x403618*/
  v11 = 0; /*0x40361c*/
  v5 = -1; /*0x403620*/
  result = AudioQueue::GetNext((int *)(a1 + 248)); /*0x403623*/
  if ( result ) /*0x40362a*/
  {
    while ( 1 ) /*0x403632*/
    {
      if ( *(_DWORD *)(result + 12) == v2 ) /*0x403635*/
      {
        if ( (*(_BYTE *)(result + 164) & 0x15) == 0 ) /*0x40363e*/
          return result; /*0x40363e*/
        v7 = *(_DWORD *)(result + 160); /*0x403647*/
        if ( (*(_BYTE *)(result + 164) & 1) != 0 ) /*0x40364d*/
        {
          if ( v7 >= v3 ) /*0x403651*/
          {
            if ( v7 == v3 ) /*0x40365f*/
            {
              v8 = *(_DWORD *)(result + 220); /*0x403661*/
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


// ==== 0x004036C0  sub_4036C0  this=-  sig=ida-proto ====
int __fastcall sub_4036C0(int a1, int a2)
{
  int v3; // eax
  int v4; // esi

  v3 = AudioQueue::FindBestChannel(a1, 1); /*0x4036c9*/
  v4 = v3; /*0x4036ce*/
  if ( v3 ) /*0x4036d2*/
    sub_402440(v3, a2); /*0x4036d8*/
  return v4; /*0x4036df*/
}


// ==== 0x004036F0  sub_4036F0  this=-  sig=ida-proto ====
int __fastcall sub_4036F0(int a1, int a2)
{
  int *Next; // esi
  int *i; // edi

  Next = (int *)AudioQueue::GetNext((int *)(a1 + 248)); /*0x403700*/
  for ( i = Next; Next; i = Next ) /*0x403706*/
  {
    Next = (int *)AudioQueue::GetNextAlt(Next); /*0x403712*/
    if ( a2 == -1 || i[3] == a2 ) /*0x403719*/
      AudioStream::Destructor(i); /*0x40371d*/
  }
  return 0; /*0x403728*/
}


// ==== 0x00403730  AudioQueue::StopAllVoices  this=AudioQueue  sig=csp ====
int (__thiscall *__fastcall AudioQueue::StopAllVoices(int a1, int a2))(int)
{
  int (__thiscall *result)(int); // eax
  int *v4; // esi
  int v5; // edi

  result = (int (__thiscall *)(int))AudioQueue::GetNext((int *)(a1 + 248)); /*0x40373b*/
  v4 = (int *)result; /*0x403740*/
  v5 = (int)result; /*0x403744*/
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


// ==== 0x00403770  AudioQueue::DeactivateAllMatching  this=AudioQueue  sig=ida-proto ====
int __fastcall sub_403770(int a1, int a2)
{
  int result; // eax
  int i; // esi

  result = AudioQueue::GetNext((int *)(a1 + 248)); /*0x40377a*/
  for ( i = result; result; i = result ) /*0x403783*/
  {
    if ( (*(_BYTE *)(i + 164) & 1) != 0 && (a2 == -1 || *(_DWORD *)(i + 12) == a2) ) /*0x403796*/
      result = AudioChannel::DeactivatePlay((_DWORD *)i); /*0x40379a*/
    if ( !i ) /*0x4037a1*/
      break; /*0x4037a1*/
    result = AudioQueue::GetNextAlt((int *)i); /*0x4037a5*/
  }
  return result; /*0x4037b0*/
}


// ==== 0x00403810  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_403810(int (**this)(void))
{
  return (this->q10C)();
}


// ==== 0x00403820  AudioStream::Reset  this=AudioStream  sig=csp ====
int __thiscall AudioStream::Reset(_DWORD *this)
{
  *this = 0; /*0x403822*/
  this->AudioStream_field_0x4 = 0; /*0x403824*/
  this->AudioStream_field_0x8 = 0; /*0x403827*/
  this->AudioStream_field_0xC = 0; /*0x40382a*/
  this->AudioStream_field_0x10 = 0; /*0x40382d*/
  this->AudioStream_field_0x14 = 0; /*0x403830*/
  this->AudioStream_field_0x18 = 0; /*0x403833*/
  this->AudioStream_field_0x1C = 0; /*0x403836*/
  this->AudioStream_field_0x28 = 0; /*0x403839*/
  this->AudioStream_field_0x2C = 0; /*0x40383c*/
  this->AudioStream_field_0x48 = 0; /*0x40383f*/
  this->AudioStream_field_0x50 = 0; /*0x403842*/
  this->AudioStream_field_0x40 = 5000; /*0x403845*/
  this->AudioStream_field_0x44 = 0; /*0x40384c*/
  this->AudioStream_field_0x30 = 0; /*0x40384f*/
  this->AudioStream_field_0x34 = 0; /*0x403852*/
  this->AudioStream_field_0x38 = 0; /*0x403855*/
  this->AudioStream_field_0x3C = 0; /*0x403858*/
  this->AudioStream_field_0x54 = 0; /*0x40385b*/
  this->AudioStream_field_0x4C = 0; /*0x40385e*/
  return 0; /*0x403861*/
}


// ==== 0x00403870  CoordBounds::Constructor  this=CoordBounds  sig=csp ====
__int64 __thiscall CoordBounds_Constructor(_DWORD *this, int a2, int a3)
{
  __int64 result; // rax

  *this = a2; /*0x403877*/
  *(this + 1) = a3; /*0x40387d*/
  *(this + 2) = a2; /*0x403880*/
  *(this + 3) = a3; /*0x403883*/
  result = 10LL * *(_QWORD *)this; /*0x403891*/
  *((_QWORD *)this + 4) = result; /*0x403896*/
  return result; /*0x40389c*/
}


// ==== 0x004038A0  AudioStream::ResetChannel  this=AudioStream  sig=csp ====
int __thiscall AudioStream::ResetChannel(_DWORD *this, int a2, int a3)
{
  this->AudioStream_field_0x8 = a2; /*0x4038a4*/
  this->AudioStream_field_0xC = a3; /*0x4038ab*/
  return a2; /*0x4038ae*/
}


// ==== 0x004038C0  AudioStream::ResetChannel2  this=AudioStream  sig=csp ====
int __thiscall AudioStream::ResetChannel2(_DWORD *this, int a2, int a3)
{
  this->AudioStream_field_0x20 = a2; /*0x4038c4*/
  this->AudioStream_field_0x24 = a3; /*0x4038cb*/
  return a2; /*0x4038ce*/
}


// ==== 0x004038E0  ObjectClass::method_4038E0  this=ObjectClass  sig=csp ====
BOOL __thiscall sub_4038E0(_QWORD *this, __int64 a2)
{
  return (unsigned __int64)(a2 - this->abstractFlags) >= *this; /*0x403903*/
}


// ==== 0x00403920  AudioThread::UpdateStats  this=AudioThread  sig=csp ====
int __thiscall AudioThread_UpdateStats(int this, __int64 a2)
{
  int result; // eax
  unsigned __int64 v3; // kr00_8

  v3 = a2 - *(_QWORD *)(this + 40); /*0x403930*/
  result = HIDWORD(v3); /*0x403930*/
  *(_QWORD *)(this + 16) = v3; /*0x403938*/
  ++*(_DWORD *)(this + 72); /*0x403942*/
  if ( *(_QWORD *)(this + 24) > *(_QWORD *)(this + 32) ) /*0x403957*/
  {
    *(_DWORD *)(this + 24) = 0; /*0x40395b*/
    *(_DWORD *)(this + 28) = 0; /*0x40395e*/
  }
  if ( v3 > *(_QWORD *)(this + 24) ) /*0x40396f*/
    *(_QWORD *)(this + 24) = v3; /*0x403971*/
  if ( v3 > *(_QWORD *)(this + 8) ) /*0x403985*/
    ++*(_DWORD *)(this + 76); /*0x40398b*/
  if ( v3 > *(_QWORD *)(this + 48) ) /*0x40399c*/
    *(_QWORD *)(this + 48) = v3; /*0x40399e*/
  *(_QWORD *)(this + 40) = a2; /*0x4039a4*/
  return result; /*0x4039ae*/
}


// ==== 0x004039C0  sub_4039C0  this=-  sig=csp ====
int __fastcall sub_4039C0(int a1, char *a2)
{
  unsigned int v3; // edx
  int v4; // ebx
  unsigned int v5; // ecx
  int v6; // ecx

  v4 = Audio::Callback(); /*0x4039d0*/
  if ( *(_DWORD *)(a1 + 72) != *(_DWORD *)(a1 + 80) ) /*0x4039da*/
  {
    v5 = *(_DWORD *)(a1 + 84) + 1; /*0x4039e1*/
    *(_DWORD *)(a1 + 84) = v5; /*0x4039e2*/
    if ( v5 >= strlen(off_815E9C) ) /*0x4039f7*/
      *(_DWORD *)(a1 + 84) = 0; /*0x4039f9*/
    *(_DWORD *)(a1 + 80) = *(_DWORD *)(a1 + 72); /*0x4039ff*/
  }
  if ( *(_QWORD *)(a1 + 56) + *(_QWORD *)(a1 + 64) < __PAIR64__(v3, v4) ) /*0x403a1a*/
  {
    v6 = *(_DWORD *)(a1 + 4); /*0x403a1e*/
    *(_DWORD *)(a1 + 48) = *(_DWORD *)a1; /*0x403a21*/
    *(_DWORD *)(a1 + 52) = v6; /*0x403a24*/
    *(_DWORD *)(a1 + 56) = v4; /*0x403a27*/
    *(_DWORD *)(a1 + 60) = v3; /*0x403a2a*/
  }
  return sprintf( /*0x403a6b*/
           a2,
           stru_815EA8,
           *(_DWORD *)a1,
           *(_DWORD *)(a1 + 16),
           *(_DWORD *)(a1 + 48),
           *(_DWORD *)(a1 + 24),
           *(_DWORD *)(a1 + 76),
           off_815E9C[*(_DWORD *)(a1 + 84)]);
}


// ==== 0x00403A80  ObjectClass::DumpAudioDeviceDebug  this=ObjectClass  sig=csp ====
int __fastcall DumpAudioDeviceDebug(_DWORD *a1, void (__thiscall *a2)(char *), int a3)
{
  void (__thiscall *v4)(char *); // edi
  int *Next; // esi
  INIClass *v6; // ebp
  INIClass *v8; // [esp+0h] [ebp-2CCh]
  char Buffer[200]; // [esp+10h] [ebp-2BCh] BYREF
  INIClass aP2; // [esp+D8h] [ebp-1F4h] BYREF
  char v12[200]; // [esp+13Ch] [ebp-190h]
  char v13[200]; // [esp+204h] [ebp-C8h] BYREF

  v4 = a2; /*0x403a8b*/
  a2(&stru_815F54.isInLogic); /*0x403a96*/
  sprintf(Buffer, (ObjectClass *)&stru_815F54.onBridge, **(INIClass ***)(a1[6] + 12)); /*0x403ab2*/
  v4(Buffer); /*0x403abe*/
  sub_4039C0((int)(a1 + 92), aP2.__pad_0); /*0x403acd*/
  sprintf(Buffer, (ObjectClass *)&stru_815F54.needsRedraw, &aP2); /*0x403ae4*/
  v4(Buffer); /*0x403af0*/
  sub_4039C0((int)(a1 + 68), aP2.__pad_0); /*0x403aff*/
  sprintf(Buffer, (ObjectClass *)&stru_815F54.isOnMap, &aP2); /*0x403b16*/
  v4(Buffer); /*0x403b22*/
  sprintf(Buffer, (ObjectClass *)&stru_815F54.customSound_controller[1], (INIClass *)a1[118]); /*0x403b43*/
  v4(Buffer); /*0x403b4f*/
  if ( a3 ) /*0x403b5a*/
    sprintf(Buffer, (ObjectClass *)&stru_815F54.owningHouseIndex, v8); /*0x403b66*/
  else
    sprintf(Buffer, &stru_815F54, v8); /*0x403b72*/
  v4(Buffer); /*0x403b7e*/
  Next = (int *)AudioQueue::GetNext(a1 + 62); /*0x403b8b*/
  v6 = 0; /*0x403b8d*/
  if ( Next ) /*0x403b91*/
  {
    do /*0x403cc0*/
    {
      v12[0] = 0; /*0x403bdc*/
      sprintf(v13, (ObjectClass *)&stru_815EA8.health, (INIClass *)(Next[97] / 1000)); /*0x403c61*/
      sprintf(Buffer, (ObjectClass *)&stru_815EA8.ambientSoundController[4], v6); /*0x403ca0*/
      a2(Buffer); /*0x403cac*/
      v6 = (INIClass *)((char *)v6 + 1); /*0x403cb0*/
      Next = (int *)AudioQueue::GetNextAlt(Next); /*0x403cbc*/
    }
    while ( Next ); /*0x403cc0*/
    v4 = a2; /*0x403cc6*/
  }
  return ((int (__thiscall *)(int *))v4)(&stru_815EA8.objectTypeFlags); /*0x403cd2*/
}


// ==== 0x00403CE0  sub_403CE0  this=-  sig=ida-proto ====
void sub_403CE0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x403cec*/
  MEMORY[0x87E1A0] = Math::Sqrt(v0 + v0); /*0x403cfe*/
}


// ==== 0x00403D10  sub_403D10  this=-  sig=ida-proto ====
void sub_403D10()
{
  MEMORY[0x87E280] = MEMORY[0x87E1A0] / 60.0; /*0x403d1c*/
}


// ==== 0x00403D30  sub_403D30  this=-  sig=ida-proto ====
void sub_403D30()
{
  MEMORY[0x87E268] = 1.0 / MEMORY[0x87E280]; /*0x403d3c*/
}


// ==== 0x00403D50  sub_403D50  this=-  sig=ida-proto ====
void sub_403D50()
{
  MEMORY[0x87E260] = 0.0174532925199433 * 45.0; /*0x403d5c*/
}


// ==== 0x00403D70  sub_403D70  this=-  sig=ida-proto ====
void sub_403D70()
{
  MEMORY[0x87E1A8] = 0.0174532925199433 * 60.0; /*0x403d7c*/
}


// ==== 0x00403D90  sub_403D90  this=-  sig=ida-proto ====
void sub_403D90()
{
  MEMORY[0x87E190] = 0.0174532925199433 * 90.0; /*0x403d9c*/
}


// ==== 0x00403DB0  sub_403DB0  this=-  sig=ida-proto ====
__int64 sub_403DB0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x87E190] - MEMORY[0x87E1A8]); /*0x403dc2*/
  result = Math::RoundToInt(v0 * MEMORY[0x87E1A0] * 0.5); /*0x403dd6*/
  MEMORY[0x87E288] = result; /*0x403ddb*/
  return result; /*0x403de0*/
}


// ==== 0x00403DF0  sub_403DF0  this=-  sig=ida-proto ====
void sub_403DF0()
{
  MEMORY[0x87E1B0] = Math::ArcTan((double)MEMORY[0x87E288] * 0.00390625); /*0x403e07*/
}


// ==== 0x00403E20  sub_403E20  this=-  sig=ida-proto ====
void sub_403E20()
{
  MEMORY[0x87E248] = Math::ArcTan((double)(2 * MEMORY[0x87E288]) / MEMORY[0x87E1A0]); /*0x403e42*/
}


// ==== 0x00403E50  sub_403E50  this=-  sig=ida-proto ====
__int64 sub_403E50()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x87E288]) + 0.5); /*0x403e6b*/
  MEMORY[0x87E27C] = result; /*0x403e70*/
  return result; /*0x403e76*/
}


// ==== 0x00403E80  sub_403E80  this=-  sig=ida-proto ====
int sub_403E80()
{
  MEMORY[0x87E198] = 0; /*0x403e82*/
  MEMORY[0x87E19A] = 0; /*0x403e88*/
  return 0; /*0x403e8e*/
}


// ==== 0x00403E90  sub_403E90  this=-  sig=ida-proto ====
int sub_403E90()
{
  MEMORY[0x87E238] = 0; /*0x403e92*/
  MEMORY[0x87E23C] = 0; /*0x403e97*/
  MEMORY[0x87E240] = 0; /*0x403e9c*/
  return 0; /*0x403ea1*/
}


// ==== 0x00403EB0  sub_403EB0  this=-  sig=ida-proto ====
int sub_403EB0()
{
  MEMORY[0x87E278] = 0; /*0x403eb5*/
  MEMORY[0x87E270] = 128; /*0x403ebf*/
  MEMORY[0x87E274] = 128; /*0x403ec4*/
  return 128; /*0x403ec9*/
}


// ==== 0x00403ED0  sub_403ED0  this=-  sig=ida-proto ====
int __fastcall sub_403ED0(int a1, int a2)
{
  int v4; // ecx

  DListNode::Init(&MEMORY[0x87E180]); /*0x403edb*/
  DListNode::Init(MEMORY[0x87E250]); /*0x403ee5*/
  MEMORY[0x87E294] = a2; /*0x403eef*/
  MEMORY[0x87E29C] = a1; /*0x403ef5*/
  AudioMixer::Init(MEMORY[0x87E1B8]); /*0x403efb*/
  v4 = MEMORY[0x87E294]; /*0x403f00*/
  MEMORY[0x87E290] = 0; /*0x403f0f*/
  MEMORY[0x87E28C] = 0; /*0x403f15*/
  MEMORY[0x87E2A0] = 1; /*0x403f1b*/
  dword_816108 = 1; /*0x403f21*/
  if ( MEMORY[0x87E294] ) /*0x403f27*/
  {
    MEMORY[0x87E298] = sub_4019E0(MEMORY[0x87E294], 0x100000, 200, 0x2000); /*0x403f47*/
    MEMORY[0x87E2A8] = AllocLinkedListMemory(300, 640); /*0x403f51*/
    Debug::Log(); /*0x403f60*/
    v4 = MEMORY[0x87E294]; /*0x403f65*/
  }
  if ( !MEMORY[0x87E298] || !v4 || !MEMORY[0x87E29C] || !MEMORY[0x87E2A8] ) /*0x403f88*/
    return 0; /*0x403f96*/
  MEMORY[0x87E2A4] = 1; /*0x403f8a*/
  return 1; /*0x403f92*/
}


// ==== 0x00403FA0  sub_403FA0  this=-  sig=ida-proto ====
void sub_403FA0()
{
  int v0; // ebp
  void **v1; // esi
  void **v2; // ebx
  _DWORD **v3; // edi
  void *v4; // eax
  void **v5; // edi
  _DWORD **i; // esi

  v0 = 0; /*0x403fa6*/
  if ( MEMORY[0x87E2A0] ) /*0x403fac*/
  {
    v1 = (void **)MEMORY[0x87E180]; /*0x403fb2*/
    if ( MEMORY[0x87E180] != &MEMORY[0x87E180] ) /*0x403fbe*/
    {
      do /*0x40405f*/
      {
        v2 = (void **)*v1; /*0x403fc5*/
        if ( ((_BYTE)v1[6] & 1) == 0 ) /*0x403fcc*/
        {
          Voice::DetachChannel((int)v1); /*0x403fd0*/
          if ( (int)v1[42] > 0 ) /*0x403fdb*/
          {
            v3 = (_DWORD **)(v1 + 10); /*0x403fdd*/
            do /*0x403ff9*/
            {
              RefCount::Decrement(*v3); /*0x403fe2*/
              *v3 = 0; /*0x403fe7*/
              ++v0; /*0x403ff3*/
              ++v3; /*0x403ff4*/
            }
            while ( v0 < (int)v1[42] ); /*0x403ff9*/
            v0 = 0; /*0x403ffb*/
          }
          v1[42] = 0; /*0x403ffd*/
          v1[7] = (void *)4; /*0x404003*/
          v1[78] = 0; /*0x40400a*/
          v1[158] = 0; /*0x404010*/
          v4 = v1[6]; /*0x404016*/
          LOBYTE(v4) = (unsigned __int8)v4 | 1; /*0x404019*/
          v1[6] = v4; /*0x40401b*/
        }
        LinkedList::Init((_DWORD **)v1); /*0x404020*/
        v1[78] = 0; /*0x404025*/
        if ( *((char *)v1 + 24) >= 0 ) /*0x404030*/
          PushFrontLinkedListAlt(MEMORY[0x87E2A8], (int)v1); /*0x404045*/
        else
          __3_YAXPAX_Z(v1); /*0x404033*/
        v1 = v2; /*0x404050*/
        --MEMORY[0x87E28C]; /*0x404059*/
      }
      while ( v2 != &MEMORY[0x87E180] ); /*0x40405f*/
      v1 = (void **)MEMORY[0x87E180]; /*0x404065*/
    }
    if ( MEMORY[0x87E2A0] && v1 != &MEMORY[0x87E180] ) /*0x40407a*/
    {
      do /*0x4040c3*/
      {
        v5 = (void **)*v1; /*0x40407c*/
        if ( ((_BYTE)v1[6] & 1) != 0 ) /*0x404083*/
        {
          LinkedList::Init((_DWORD **)v1); /*0x404087*/
          v1[78] = 0; /*0x40408c*/
          if ( *((char *)v1 + 24) >= 0 ) /*0x40409b*/
            PushFrontLinkedListAlt(MEMORY[0x87E2A8], (int)v1); /*0x4040b0*/
          else
            __3_YAXPAX_Z(v1); /*0x40409e*/
          --MEMORY[0x87E28C]; /*0x4040b5*/
        }
        v1 = v5; /*0x4040c1*/
      }
      while ( v5 != &MEMORY[0x87E180] ); /*0x4040c3*/
    }
  }
  for ( i = (_DWORD **)AudioQueue::GetNext(MEMORY[0x87E250]); i; i = (_DWORD **)AudioQueue::GetNext(MEMORY[0x87E250]) ) /*0x4040d5*/
  {
    LinkedList::Init(i); /*0x4040d9*/
    __3_YAXPAX_Z(i); /*0x4040df*/
  }
  if ( MEMORY[0x87E298] ) /*0x4040ff*/
  {
    sub_401B00((int *)MEMORY[0x87E298]); /*0x404101*/
    MEMORY[0x87E298] = 0; /*0x404106*/
  }
  if ( MEMORY[0x87E2A8] ) /*0x404114*/
  {
    VtableStub::Push_407510(MEMORY[0x87E2A8]); /*0x404116*/
    MEMORY[0x87E2A8] = 0; /*0x40411b*/
  }
  MEMORY[0x87E2A4] = 0; /*0x404122*/
  MEMORY[0x87E2A0] = 0; /*0x404128*/
}


// ==== 0x00404140  Voice::DetachChannel  this=Voice  sig=csp ====
int __thiscall Voice_DetachChannel(int this)
{
  int v2; // ecx
  int result; // eax

  v2 = *(_DWORD *)(this + 176); /*0x404146*/
  if ( v2 && this == *(_DWORD *)(v2 + 192) ) /*0x404156*/
  {
    if ( (*(_BYTE *)(this + 24) & 2) != 0 ) /*0x40415c*/
      Voice::Stop(v2); /*0x40415e*/
    AudioStream::ReleaseChannel(*(_DWORD *)(this + 176)); /*0x404169*/
    *(_DWORD *)(*(_DWORD *)(this + 176) + 192) = 0; /*0x404174*/
    *(_DWORD *)(*(_DWORD *)(this + 176) + 188) = 0; /*0x404180*/
    *(_DWORD *)(*(_DWORD *)(this + 176) + 180) = 0; /*0x40418c*/
    *(_DWORD *)(*(_DWORD *)(this + 176) + 184) = 0; /*0x404198*/
    *(_DWORD *)(*(_DWORD *)(this + 176) + 144) = 0; /*0x4041a4*/
    *(_DWORD *)(*(_DWORD *)(this + 176) + 152) = 0; /*0x4041b0*/
    result = *(_DWORD *)(this + 176); /*0x4041b6*/
    *(_DWORD *)(result + 156) = 0; /*0x4041bc*/
    *(_DWORD *)(this + 176) = 0; /*0x4041c2*/
  }
  return result; /*0x4041c8*/
}


// ==== 0x004041D0  ObjectClass::ProcessAudioFrame  this=ObjectClass  sig=csp ====
int Audio_Process()
{
  int result; // eax
  void **v1; // esi
  void **v2; // ebp
  _DWORD *v3; // eax
  _DWORD *v4; // edi
  unsigned int v5; // ebx
  _DWORD *i; // esi
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // esi
  _DWORD *v11; // esi
  int v12; // eax
  char *v13; // edi
  int v14; // ebp
  int v15; // ebx
  void ***v16; // eax
  int v17; // ebx
  _DWORD *v18; // edi
  void *v19; // eax
  _DWORD *v20; // ecx
  int v21; // edi
  int v22; // ebx
  int v23; // eax
  unsigned int v24; // esi
  int v25; // eax
  _DWORD *v26; // edi
  _DWORD *v27; // edi
  _DWORD *v28; // edx
  unsigned int v29; // ecx
  unsigned int v30; // edx
  void **v31; // esi
  int v32; // eax
  int v33; // eax
  int v34; // ebx
  void **v35; // edi
  void **v36; // ebp
  int v37; // eax
  int v38; // eax
  void **v39; // [esp+0h] [ebp-8h]
  void **v40; // [esp+0h] [ebp-8h]
  int v41; // [esp+4h] [ebp-4h]
  int v42; // [esp+4h] [ebp-4h]

  result = MEMORY[0x87E2A0]; /*0x4041d0*/
  if ( !MEMORY[0x87E2A0] ) /*0x4041da*/
    return result; /*0x4041da*/
  result = MEMORY[0x87E2B4]; /*0x4041e0*/
  if ( MEMORY[0x87E2B4] ) /*0x4041e7*/
    return result; /*0x4041e7*/
  v1 = (void **)MEMORY[0x87E180]; /*0x4041f6*/
  MEMORY[0x87E2B4] = 1; /*0x404204*/
  ++MEMORY[0x87E2AC]; /*0x40420e*/
  v2 = (void **)MEMORY[0x87E180]; /*0x404214*/
  if ( MEMORY[0x87E180] != &MEMORY[0x87E180] ) /*0x404216*/
  {
    do /*0x404349*/
    {
      v3 = v2[9]; /*0x40421c*/
      if ( v3[38] != MEMORY[0x87E2AC] ) /*0x40422b*/
      {
        DListNode::Init(v3 + 35); /*0x404233*/
        *((_DWORD *)v2[9] + 17) = 0; /*0x40423b*/
        *((_DWORD *)v2[9] + 38) = MEMORY[0x87E2AC]; /*0x40424b*/
      }
      Audio::InitChannels(v2 + 46); /*0x404257*/
      if ( v2[7] != (void *)4 ) /*0x404262*/
      {
        v4 = v2[9]; /*0x404268*/
        v5 = (unsigned int)v2[47] >> 16; /*0x404271*/
        for ( i = (_DWORD *)v4[35]; i != v4 + 35; i = (_DWORD *)*i ) /*0x404282*/
        {
          v7 = HIWORD(i[44]) - v5; /*0x4042a3*/
          if ( v7 < 0 ) /*0x4042a5*/
            v7 = v5 - HIWORD(i[44]); /*0x4042a7*/
          if ( v7 >= (int)((unsigned int)((3435973837u * (unsigned __int64)HIWORD(v4[7])) >> 32) >> 3) ) /*0x4042ad*/
          {
            if ( HIWORD(i[44]) < v5 ) /*0x4042c6*/
              break; /*0x4042c6*/
          }
          else
          {
            v8 = i[4]; /*0x4042b3*/
            if ( (v4[4] & 0x10) != 0 ) /*0x4042b6*/
            {
              if ( v8 ) /*0x4042ba*/
                break; /*0x4042ba*/
            }
            else if ( !v8 ) /*0x4042c0*/
            {
              break; /*0x4042c0*/
            }
          }
        }
        DListNode::InitEmpty(v2 + 3); /*0x4042d4*/
        InsertAfterDListNode(i, v2 + 3); /*0x4042e2*/
        v9 = v4[18]; /*0x4042ea*/
        v10 = v4[17] + 1; /*0x4042ed*/
        v4[17] = v10; /*0x4042f0*/
        if ( v9 && v10 > v9 ) /*0x4042f9*/
        {
          v11 = (_DWORD *)(v4[36] - 12); /*0x404301*/
          LinkedList::Init(v4[36]); /*0x404307*/
          if ( (v11[6] & 1) == 0 ) /*0x404310*/
          {
            Voice::DetachChannel(v11); /*0x404314*/
            Audio::ReleaseChannelRefs(v11); /*0x40431b*/
            v11[7] = 4; /*0x404320*/
            v11[78] = 0; /*0x404329*/
            v11[158] = 0; /*0x40432f*/
            v12 = v11[6]; /*0x404335*/
            LOBYTE(v12) = v12 | 1; /*0x404338*/
            v11[6] = v12; /*0x40433a*/
          }
          --v4[17]; /*0x40433d*/
        }
      }
      v2 = (void **)*v2; /*0x404340*/
    }
    while ( v2 != &MEMORY[0x87E180] ); /*0x404349*/
    v1 = (void **)MEMORY[0x87E180]; /*0x40434f*/
    if ( MEMORY[0x87E180] != &MEMORY[0x87E180] ) /*0x40435b*/
    {
      do /*0x40436f*/
      {
        UpdateVoicePlayback(v1); /*0x404362*/
        v1 = (void **)*v1; /*0x404367*/
      }
      while ( v1 != &MEMORY[0x87E180] ); /*0x40436f*/
      v1 = (void **)MEMORY[0x87E180]; /*0x404371*/
    }
  }
  v41 = 0; /*0x404377*/
  v13 = (char *)&MEMORY[0x87DE38]; /*0x40437f*/
  v14 = 7; /*0x404384*/
  do /*0x40439c*/
  {
    v15 = 10; /*0x404389*/
    do /*0x404399*/
    {
      DListNode::Init(v13); /*0x404390*/
      v13 += 12; /*0x404395*/
      --v15; /*0x404398*/
    }
    while ( v15 ); /*0x404399*/
    --v14; /*0x40439b*/
  }
  while ( v14 ); /*0x40439c*/
  ++MEMORY[0x87E2B0]; /*0x4043ab*/
  if ( v1 == &MEMORY[0x87E180] ) /*0x4043b1*/
  {
LABEL_58:
    v30 = 0x4000; /*0x40457b*/
    goto LABEL_59; /*0x40457b*/
  }
  do /*0x40455f*/
  {
    v16 = (void ***)v1[44]; /*0x4043b7*/
    v39 = (void **)*v1; /*0x4043c1*/
    if ( !v16 || v1 != v16[48] ) /*0x4043cd*/
    {
      if ( ((_BYTE)v1[6] & 1) != 0 ) /*0x4043d3*/
        goto LABEL_40; /*0x4043d3*/
      Voice::DetachChannel(v1); /*0x4043d7*/
      v17 = 0; /*0x4043e4*/
      if ( (int)v1[42] > 0 ) /*0x4043e8*/
      {
        v18 = v1 + 10; /*0x4043ea*/
        do /*0x404402*/
        {
          RefCount::Decrement(*v18); /*0x4043ef*/
          *v18 = 0; /*0x4043f4*/
          ++v17; /*0x4043fc*/
          ++v18; /*0x4043fd*/
        }
        while ( v17 < (int)v1[42] ); /*0x404402*/
      }
      v1[42] = 0; /*0x404404*/
      v1[7] = (void *)4; /*0x40440a*/
      v1[78] = 0; /*0x404411*/
      v1[158] = 0; /*0x404417*/
      v19 = v1[6]; /*0x40441d*/
      LOBYTE(v19) = (unsigned __int8)v19 | 1; /*0x404420*/
      v1[6] = v19; /*0x404422*/
    }
    if ( ((_BYTE)v1[6] & 1) != 0 ) /*0x404429*/
    {
LABEL_40:
      LinkedList::Init(v1); /*0x40442b*/
      v1[78] = 0; /*0x404432*/
      if ( *((char *)v1 + 24) >= 0 ) /*0x404441*/
        PushFrontLinkedListAlt(MEMORY[0x87E2A8], v1); /*0x404464*/
      else
        __3_YAXPAX_Z(v1); /*0x404444*/
      --MEMORY[0x87E28C]; /*0x404452*/
      goto LABEL_55; /*0x404457*/
    }
    if ( !v1[86] ) /*0x404474*/
      v41 += (unsigned int)(20 * HIWORD(*((_DWORD *)v1[9] + 7))) >> 14; /*0x404496*/
    v20 = v1[9]; /*0x40449a*/
    v21 = (int)v1[85] + v20[16]; /*0x4044ac*/
    v22 = 120 * v21 + 8904248; /*0x4044ca*/
    v23 = MEMORY[0x87E2B0]; /*0x4044d1*/
    v24 = (unsigned int)(((1075052865 * (unsigned __int64)((unsigned int)v1[47] >> 16)) >> 32) /*0x4044d6*/
                       + ((unsigned int)(((unsigned int)v1[47] >> 16)
                                       - ((1075052865 * (unsigned __int64)((unsigned int)v1[47] >> 16)) >> 32)) >> 1)) >> 10;
    if ( v20[39] != MEMORY[0x87E2B0] ) /*0x4044db*/
    {
      v20[40] = v21; /*0x404529*/
      v26 = v20 + 41; /*0x40452f*/
      v20[39] = v23; /*0x404535*/
      v20[44] = v24; /*0x40453b*/
      DListNode::InitEmpty(v20 + 41); /*0x404543*/
LABEL_53:
      v28 = v26; /*0x404548*/
      v29 = v22 + 12 * v24; /*0x40454d*/
LABEL_54:
      InsertAfterDListNode(v29, v28); /*0x404550*/
      goto LABEL_55; /*0x404550*/
    }
    v25 = v20[40]; /*0x4044dd*/
    if ( v21 > v25 ) /*0x4044e5*/
    {
      v20[40] = v21; /*0x4044e7*/
      v26 = v20 + 41; /*0x4044ed*/
      v20[44] = v24; /*0x4044f3*/
      LinkedList::Init(v20 + 41); /*0x4044fb*/
      goto LABEL_53; /*0x404500*/
    }
    if ( v21 == v25 && v24 > v20[44] ) /*0x40450a*/
    {
      v27 = v20 + 41; /*0x40450c*/
      v20[44] = v24; /*0x404512*/
      LinkedList::Init(v20 + 41); /*0x40451a*/
      v28 = v27; /*0x404522*/
      v29 = v22 + 12 * v24; /*0x404524*/
      goto LABEL_54; /*0x404527*/
    }
LABEL_55:
    v1 = v39; /*0x404555*/
  }
  while ( v39 != &MEMORY[0x87E180] ); /*0x40455f*/
  if ( v41 <= 100 ) /*0x40456c*/
    goto LABEL_58; /*0x40456c*/
  v30 = 0x190000u / v41; /*0x404577*/
LABEL_59:
  RequestBufferMixer(&MEMORY[0x87E1B8], v30); /*0x404580*/
  result = Audio::InitChannels(&MEMORY[0x87E1B8]); /*0x40458f*/
  v31 = (void **)MEMORY[0x87E180]; /*0x404594*/
  if ( MEMORY[0x87E180] == &MEMORY[0x87E180] ) /*0x4045a0*/
  {
    MEMORY[0x87E2B4] = 0; /*0x4046e6*/
  }
  else
  {
    do /*0x4046d0*/
    {
      v40 = (void **)*v31; /*0x4045aa*/
      result = (int)v31[7]; /*0x4045ae*/
      if ( result == 1 ) /*0x4045b4*/
      {
        result = (int)v31[86]; /*0x4045ba*/
        if ( !result ) /*0x4045c2*/
        {
          PrefetchAudioSamples(v31); /*0x4045ca*/
          v32 = AudioStream::SetupPlayback(v31); /*0x4045d1*/
          v31[82] = (void *)v32; /*0x4045d8*/
          if ( !v32 ) /*0x4045de*/
          {
            do /*0x40466b*/
            {
              v42 = 0; /*0x4045ed*/
              v33 = PollNextAudioQueue((char *)v31[85] + *((_DWORD *)v31[9] + 16)); /*0x4045fa*/
              v34 = v33; /*0x4045ff*/
              if ( !v33 ) /*0x404603*/
                break; /*0x404603*/
              LinkedList::Init(v33 + 164); /*0x40460b*/
              v35 = (void **)MEMORY[0x87E180]; /*0x404610*/
              if ( MEMORY[0x87E180] == &MEMORY[0x87E180] ) /*0x40461c*/
                break; /*0x40461c*/
              do /*0x404645*/
              {
                v36 = (void **)*v35; /*0x404621*/
                if ( v35[9] == (void *)v34 ) /*0x404625*/
                {
                  VocClass::Release(v35); /*0x404629*/
                  Audio::FlushChannel(v35); /*0x404630*/
                  v42 = 1; /*0x404635*/
                }
                v35 = v36; /*0x404643*/
              }
              while ( v36 != &MEMORY[0x87E180] ); /*0x404645*/
              if ( !v42 ) /*0x40464d*/
                break; /*0x40464d*/
              v40 = (void **)*v31; /*0x404651*/
              PrefetchAudioSamples(v31); /*0x404657*/
              v37 = AudioStream::SetupPlayback(v31); /*0x40465e*/
              v31[82] = (void *)v37; /*0x404665*/
            }
            while ( !v37 ); /*0x40466b*/
          }
          v38 = AudioStream::SetupPlayback(v31); /*0x404673*/
          v31[82] = (void *)v38; /*0x40467a*/
          if ( !v38 || (result = Audio::UpdatePlaybackPosition(v31)) == 0 ) /*0x40468d*/
          {
            if ( ((_BYTE)v31[6] & 1) == 0 ) /*0x404693*/
            {
              Voice::DetachChannel(v31); /*0x404697*/
              Audio::ReleaseChannelRefs(v31); /*0x40469e*/
              v31[7] = (void *)4; /*0x4046a3*/
              v31[78] = 0; /*0x4046aa*/
              v31[158] = 0; /*0x4046b0*/
              v31[6] = (void *)((unsigned int)v31[6] | 1); /*0x4046bc*/
            }
            result = Audio::FlushChannel(v31); /*0x4046c1*/
          }
        }
      }
      v31 = v40; /*0x4046c6*/
    }
    while ( v40 != &MEMORY[0x87E180] ); /*0x4046d0*/
    MEMORY[0x87E2B4] = 0; /*0x4046d6*/
  }
  return result; /*0x4046e0*/
}


// ==== 0x00404700  AudioStream::SetupPlayback  this=AudioStream  sig=csp ====
int __thiscall AudioStream_SetupPlayback(int this)
{
  int v1; // edx
  int v2; // eax
  int v3; // esi
  int v4; // edi
  int *v6; // edx

  v1 = *(_DWORD *)(this + 168); /*0x404700*/
  v2 = 0; /*0x404707*/
  v3 = 0; /*0x404709*/
  *(_DWORD *)(this + 480) = v1; /*0x40470e*/
  if ( !v1 || (*(_BYTE *)(this + 24) & 0x20) != 0 ) /*0x40471a*/
    return 0; /*0x40471a*/
  v4 = *(_DWORD *)(this + 36); /*0x40471c*/
  if ( *(_DWORD *)(v4 + 88) >= 0x21u ) /*0x404727*/
    return *(_DWORD *)(this + 40) + 28; /*0x404727*/
  if ( (*(_BYTE *)(v4 + 16) & 0x20) != 0 ) /*0x40472d*/
  {
    v3 = 1; /*0x404730*/
    *(_DWORD *)(this + 480) = v1 - 1; /*0x404735*/
    *(_DWORD *)(this + 172) = 0; /*0x40473b*/
  }
  else
  {
    *(_DWORD *)(this + 172) = -1; /*0x404743*/
  }
  if ( (*(_BYTE *)(v4 + 16) & 0x40) != 0 ) /*0x404751*/
    --*(_DWORD *)(this + 480); /*0x404753*/
  if ( *(int *)(this + 480) <= 0 ) /*0x404761*/
  {
    *(_DWORD *)(v4 + 12) = 0; /*0x404763*/
    return 0; /*0x40476a*/
  }
  v6 = (int *)(this + 352); /*0x40476b*/
  do /*0x404780*/
  {
    *v6 = v3; /*0x404771*/
    ++v2; /*0x404779*/
    ++v6; /*0x40477a*/
    ++v3; /*0x40477d*/
  }
  while ( v2 < *(_DWORD *)(this + 480) ); /*0x404780*/
  if ( (*(_BYTE *)(this + 24) & 8) == 0 && (*(_BYTE *)(*(_DWORD *)(this + 36) + 16) & 0x20) != 0 ) /*0x40478f*/
    return *(_DWORD *)(this + 40) + 28; /*0x402030*/
  else
    return AudioStream::SelectRandom(); /*0x404793*/
}


// ==== 0x004047B0  AudioStream::SelectRandom  this=Voice  sig=csp ====
int __thiscall AudioStream_SelectRandom(int this)
{
  _DWORD *v2; // ecx
  int v3; // edx
  int v4; // eax
  int v5; // eax
  int v6; // edi
  int v7; // ecx
  _DWORD *v8; // eax
  int v9; // ecx
  int v10; // ecx
  int v12; // eax

  v2 = *(_DWORD **)(this + 36); /*0x4047b3*/
  v3 = v2[4]; /*0x4047b9*/
  if ( v2[22] >= 0x21u && (*(_BYTE *)(this + 24) & 0x20) == 0 ) /*0x4047c5*/
    return 0; /*0x4047c5*/
  v4 = *(_DWORD *)(this + 480); /*0x4047cb*/
  if ( v4 && (*(_BYTE *)(this + 24) & 0x20) == 0 ) /*0x4047d9*/
  {
    if ( (v3 & 2) != 0 ) /*0x4047de*/
    {
      v5 = Random::Range(MEMORY[0x886B88], 0, v4 - 1); /*0x4047ea*/
      v6 = *(_DWORD *)(this + 480) - 1; /*0x404803*/
      *(_DWORD *)(this + 172) = *(_DWORD *)(this + 4 * v5 + 352); /*0x404804*/
      v7 = v5; /*0x40480c*/
      if ( v5 < v6 ) /*0x40480f*/
      {
        v8 = (_DWORD *)(this + 4 * v5 + 352); /*0x404811*/
        do /*0x404825*/
        {
          ++v7; /*0x404816*/
          *v8 = v8[1]; /*0x404817*/
          ++v8; /*0x40481f*/
        }
        while ( v7 < *(_DWORD *)(this + 480) - 1 ); /*0x404825*/
      }
    }
    else
    {
      ++*(_DWORD *)(this + 172); /*0x404829*/
    }
    --*(_DWORD *)(this + 480); /*0x404836*/
    v9 = *(_DWORD *)(this + 4 * *(_DWORD *)(this + 172) + 40); /*0x404842*/
    return v9 + 28; /*0x404847*/
  }
  if ( (v3 & 1) != 0 && (*(_BYTE *)(this + 24) & 0x20) == 0 ) /*0x404855*/
  {
    v10 = v2[19]; /*0x404857*/
    if ( !v10 || *(_DWORD *)(this + 484) < v10 - 1 ) /*0x404867*/
    {
      ++*(_DWORD *)(this + 484); /*0x404872*/
      return AudioStream::SetupPlayback(this); /*0x404879*/
    }
  }
  if ( (v3 & 0x40) == 0 ) /*0x404881*/
    return 0; /*0x404881*/
  if ( (*(_BYTE *)(this + 24) & 0x10) != 0 ) /*0x404887*/
    return 0; /*0x404887*/
  v12 = *(_DWORD *)(this + 168); /*0x404889*/
  if ( v12 < 1 ) /*0x404892*/
    return 0; /*0x4048aa*/
  *(_DWORD *)(this + 24) |= 0x10u; /*0x40489a*/
  v9 = *(_DWORD *)(this + 4 * v12 + 36); /*0x40489d*/
  return v9 + 28; /*0x404878*/
}


// ==== 0x004048B0  ObjectClass::PrefetchAudioSamples  this=ObjectClass  sig=csp ====
int __thiscall PrefetchAudioSamples(_DWORD *this)
{
  int result; // eax
  _DWORD *v3; // edi
  int v4; // ebp
  _DWORD **v5; // ebx
  int v6; // eax
  int v7; // eax
  Concurrency::details::ContextBase *v8; // ecx
  int v9; // ebx
  int v10; // ebp
  Concurrency::details::ContextBase *v11; // ecx
  int v12; // eax
  Concurrency::details::ContextBase *v13; // ecx
  int v14; // ecx
  int v15; // edx
  Concurrency::details::ContextBase *v16; // ecx
  int v17; // eax
  int v18; // ebx
  Concurrency::details::ContextBase *v19; // ecx
  Concurrency::details::ContextBase *v20; // ecx

  result = this->lineTrailer; /*0x4048b6*/
  v3 = (_DWORD *)this->objectTypeFlags; /*0x4048bc*/
  if ( result ) /*0x4048c1*/
  {
    if ( v3[22] < 0x21u ) /*0x4048c7*/
      return result; /*0x4048c7*/
    v4 = 0; /*0x4048cd*/
    if ( result > 0 ) /*0x4048d1*/
    {
      v5 = (_DWORD **)(this + 10); /*0x4048d3*/
      do /*0x4048ef*/
      {
        RefCount::Decrement(*v5); /*0x4048d8*/
        *v5 = 0; /*0x4048dd*/
        ++v4; /*0x4048e9*/
        ++v5; /*0x4048ea*/
      }
      while ( v4 < this->lineTrailer ); /*0x4048ef*/
    }
    this->lineTrailer = 0; /*0x4048f1*/
  }
  if ( v3[22] < 0x21u ) /*0x4048ff*/
  {
    v6 = v3[78]; /*0x404905*/
    if ( v6 ) /*0x40490d*/
    {
      v7 = Random::Range(MEMORY[0x886B88], 0, v6 - 1); /*0x404918*/
      *(this + this->lineTrailer + 10) = LoadSampleAudioMixer(MEMORY[0x87E298], *(_DWORD *)(this->objectTypeFlags + 4 * v7 + 180)); /*0x404938*/
      v8 = (Concurrency::details::ContextBase *)*(this + this->lineTrailer + 10); /*0x404942*/
      if ( v8 ) /*0x404948*/
      {
        _EnterCriticalRegionHelper_ContextBase_details_Concurrency__UAEHXZ(v8); /*0x40494a*/
        ++this->lineTrailer; /*0x40494f*/
      }
    }
    result = v3[4]; /*0x404955*/
    if ( (result & 4) != 0 ) /*0x40495a*/
    {
      v9 = v3[78]; /*0x404968*/
      if ( v9 < v3[77] - v3[79] ) /*0x404972*/
      {
        v10 = 4 * v9 + 180; /*0x404978*/
        do /*0x4049c7*/
        {
          *(this + this->lineTrailer + 10) = LoadSampleAudioMixer(MEMORY[0x87E298], *(_DWORD *)(this->objectTypeFlags + v10)); /*0x404996*/
          v11 = (Concurrency::details::ContextBase *)*(this + this->lineTrailer + 10); /*0x4049a0*/
          if ( v11 ) /*0x4049a6*/
          {
            _EnterCriticalRegionHelper_ContextBase_details_Concurrency__UAEHXZ(v11); /*0x4049a8*/
            ++this->lineTrailer; /*0x4049ad*/
          }
          ++v9; /*0x4049bf*/
          result = v3[77] - v3[79]; /*0x4049c0*/
          v10 += 4; /*0x4049c2*/
        }
        while ( v9 < result ); /*0x4049c7*/
      }
      goto LABEL_23; /*0x4049c7*/
    }
    if ( (result & 2) != 0 ) /*0x4049d0*/
    {
      v12 = Random::Range(MEMORY[0x886B88], v3[78], v3[77] - v3[79] - 1); /*0x4049ee*/
      *(this + this->lineTrailer + 10) = LoadSampleAudioMixer(MEMORY[0x87E298], *(_DWORD *)(this->objectTypeFlags + 4 * v12 + 180)); /*0x404a0e*/
      result = this->lineTrailer; /*0x404a12*/
      v13 = (Concurrency::details::ContextBase *)*(this + result + 10); /*0x404a18*/
      if ( v13 ) /*0x404a1e*/
        goto LABEL_22; /*0x404a1e*/
    }
    else
    {
      *(this + this->lineTrailer + 10) = LoadSampleAudioMixer(MEMORY[0x87E298], *(_DWORD *)(this->objectTypeFlags + 4 * v3[78] + 180)); /*0x404a43*/
      result = this->lineTrailer; /*0x404a47*/
      v13 = (Concurrency::details::ContextBase *)*(this + result + 10); /*0x404a4d*/
      if ( v13 ) /*0x404a53*/
      {
LABEL_22:
        result = _EnterCriticalRegionHelper_ContextBase_details_Concurrency__UAEHXZ(v13); /*0x404a55*/
        ++this->lineTrailer; /*0x404a5a*/
      }
    }
LABEL_23:
    v14 = v3[79]; /*0x404a60*/
    if ( !v14 ) /*0x404a68*/
      return result; /*0x404a68*/
    v15 = *(_DWORD *)(this->objectTypeFlags + 4 * Random::Range(MEMORY[0x886B88], v3[77] - v14, v3[77] - 1) + 180); /*0x404a88*/
    goto LABEL_25; /*0x404a88*/
  }
  v17 = v3[79]; /*0x404acd*/
  v18 = -1; /*0x404ad3*/
  if ( v17 && (v3[4] & 0x40) != 0 ) /*0x404ade*/
    v18 = Random::Range(MEMORY[0x886B88], v3[77] - v17, v3[77] - 1); /*0x404af7*/
  result = sub_404BB0(this); /*0x404afb*/
  if ( result < 0 ) /*0x404b02*/
  {
    if ( v18 != -1 && (*(_BYTE *)(this + 6) & 0x10) == 0 ) /*0x404b59*/
    {
      *(this + this->lineTrailer + 10) = LoadSampleAudioMixer(MEMORY[0x87E298], *(_DWORD *)(this->objectTypeFlags + 4 * v18 + 180)); /*0x404b76*/
      result = this->lineTrailer; /*0x404b7a*/
      v20 = (Concurrency::details::ContextBase *)*(this + result + 10); /*0x404b80*/
      if ( v20 ) /*0x404b86*/
      {
        result = _EnterCriticalRegionHelper_ContextBase_details_Concurrency__UAEHXZ(v20); /*0x404b88*/
        ++this->lineTrailer; /*0x404b8d*/
      }
      this->nextArrayIndex |= 0x10u; /*0x404b99*/
    }
  }
  else
  {
    *(this + this->lineTrailer + 10) = LoadSampleAudioMixer(MEMORY[0x87E298], *(_DWORD *)(this->objectTypeFlags + 4 * result + 180)); /*0x404b1f*/
    result = this->lineTrailer; /*0x404b23*/
    v19 = (Concurrency::details::ContextBase *)*(this + result + 10); /*0x404b29*/
    if ( v19 ) /*0x404b2f*/
    {
      result = _EnterCriticalRegionHelper_ContextBase_details_Concurrency__UAEHXZ(v19); /*0x404b31*/
      ++this->lineTrailer; /*0x404b36*/
    }
    if ( v18 != -1 ) /*0x404b3f*/
    {
      v15 = *(_DWORD *)(this->objectTypeFlags + 4 * v18 + 180); /*0x404b44*/
LABEL_25:
      *(this + this->lineTrailer + 10) = LoadSampleAudioMixer(MEMORY[0x87E298], v15); /*0x404a8f*/
      result = this->lineTrailer; /*0x404aa4*/
      v16 = (Concurrency::details::ContextBase *)*(this + result + 10); /*0x404aaa*/
      if ( v16 ) /*0x404ab0*/
      {
        _EnterCriticalRegionHelper_ContextBase_details_Concurrency__UAEHXZ(v16); /*0x404ab6*/
        result = this->lineTrailer + 1; /*0x404ac1*/
        this->lineTrailer = result; /*0x404ac3*/
      }
    }
  }
  return result; /*0x404ac2*/
}


// ==== 0x00404BB0  ObjectClass::method_404BB0  this=ObjectClass  sig=csp ====
int __thiscall sub_404BB0(int this)
{
  _DWORD *v2; // edi
  int v3; // eax
  char v4; // bl
  int v5; // ebp
  int v6; // eax
  int v7; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int *v12; // ecx
  int v13; // eax
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // edi
  int v18; // ecx
  _DWORD *v19; // eax
  int v20; // eax
  int v21; // edi

  v2 = *(_DWORD **)(this + 36); /*0x404bb6*/
  v3 = v2[4]; /*0x404bc5*/
  v4 = v3; /*0x404bca*/
  if ( *(_DWORD *)(this + 616) == *(_DWORD *)(this + 624) ) /*0x404bcc*/
  {
    v5 = 0; /*0x404bd2*/
    v6 = v3 & 1; /*0x404bd4*/
    if ( !v6 && *(_DWORD *)(this + 620) == 1 ) /*0x404be0*/
      return -1; /*0x404be0*/
    if ( v6 ) /*0x404be4*/
    {
      v7 = v2[19]; /*0x404be6*/
      if ( v7 ) /*0x404beb*/
      {
        if ( *(_DWORD *)(this + 620) >= v7 ) /*0x404bf3*/
          return -1; /*0x404bfc*/
      }
    }
    v9 = v2[78]; /*0x404bfd*/
    if ( v9 && (*(_BYTE *)(this + 24) & 8) == 0 ) /*0x404c0b*/
    {
      *(_DWORD *)(this + 488) = Random::Range(MEMORY[0x886B88], 0, v9 - 1); /*0x404c1b*/
      v5 = 1; /*0x404c21*/
    }
    v10 = v2[4]; /*0x404c26*/
    if ( (v10 & 4) != 0 ) /*0x404c2b*/
    {
      v11 = v2[78]; /*0x404c39*/
      if ( v11 < v2[77] - v2[79] ) /*0x404c43*/
      {
        v12 = (int *)(this + 4 * v5 + 488); /*0x404c45*/
        do /*0x404c61*/
        {
          *v12 = v11; /*0x404c4c*/
          ++v5; /*0x404c5a*/
          ++v12; /*0x404c5b*/
          ++v11; /*0x404c5e*/
        }
        while ( v11 < v2[77] - v2[79] ); /*0x404c61*/
      }
    }
    else
    {
      if ( (v10 & 2) != 0 ) /*0x404c67*/
      {
        if ( *(_DWORD *)(this + 620) ) /*0x404c69*/
        {
          v13 = *(_DWORD *)(this + 628); /*0x404c9c*/
        }
        else
        {
          v13 = Random::Range(MEMORY[0x886B88], v2[78], v2[77] - v2[79] - 1); /*0x404c8f*/
          *(_DWORD *)(this + 628) = v13; /*0x404c94*/
        }
      }
      else
      {
        v13 = v2[78]; /*0x404ca4*/
      }
      *(_DWORD *)(this + 4 * v5++ + 488) = v13; /*0x404caa*/
    }
    v14 = *(_DWORD *)(this + 620); /*0x404cb2*/
    *(_DWORD *)(this + 616) = v5; /*0x404cb8*/
    *(_DWORD *)(this + 624) = 0; /*0x404cbf*/
    *(_DWORD *)(this + 620) = v14 + 1; /*0x404cc9*/
  }
  if ( (v4 & 2) == 0 ) /*0x404cd2*/
    goto LABEL_34; /*0x404cd2*/
  if ( !v2[78] ) /*0x404ce0*/
  {
LABEL_29:
    v15 = 0; /*0x404d03*/
    goto LABEL_30; /*0x404d03*/
  }
  if ( (*(_BYTE *)(this + 24) & 8) == 0 && *(int *)(this + 624) <= 0 ) /*0x404cf0*/
  {
LABEL_34:
    v20 = *(_DWORD *)(this + 624); /*0x404d5d*/
    v21 = *(_DWORD *)(this + 4 * v20 + 488); /*0x404d63*/
    *(_DWORD *)(this + 624) = v20 + 1; /*0x404d6b*/
    return v21; /*0x404d71*/
  }
  if ( (*(_BYTE *)(this + 24) & 8) != 0 ) /*0x404cfa*/
    goto LABEL_29; /*0x404cfa*/
  v15 = 1; /*0x404cfc*/
LABEL_30:
  v16 = Random::Range(MEMORY[0x886B88], v15, *(_DWORD *)(this + 616) - 1); /*0x404d05*/
  v17 = *(_DWORD *)(this + 4 * v16 + 488); /*0x404d1e*/
  v18 = v16; /*0x404d2f*/
  if ( v16 < *(_DWORD *)(this + 616) - 1 ) /*0x404d31*/
  {
    v19 = (_DWORD *)(this + 4 * v16 + 488); /*0x404d33*/
    do /*0x404d47*/
    {
      ++v18; /*0x404d38*/
      *v19 = v19[1]; /*0x404d39*/
      ++v19; /*0x404d41*/
    }
    while ( v18 < *(_DWORD *)(this + 616) - 1 ); /*0x404d47*/
  }
  --*(_DWORD *)(this + 616); /*0x404d50*/
  return v17; /*0x404bf5*/
}


// ==== 0x00404D80  Audio::ReleaseChannelRefs  this=Voice  sig=csp ====
int __thiscall Audio::ReleaseChannelRefs(_DWORD *this)
{
  int v2; // ebx
  int result; // eax
  _DWORD **v4; // esi

  v2 = 0; /*0x404d84*/
  result = *(this + 42); /*0x404d86*/
  if ( result <= 0 ) /*0x404d8e*/
  {
    *(this + 42) = 0; /*0x404dbd*/
  }
  else
  {
    v4 = (_DWORD **)(this + 10); /*0x404d91*/
    do /*0x404dad*/
    {
      RefCount::Decrement(*v4); /*0x404d96*/
      *v4 = 0; /*0x404d9b*/
      result = *(this + 42); /*0x404da1*/
      ++v2; /*0x404da7*/
      ++v4; /*0x404da8*/
    }
    while ( v2 < result ); /*0x404dad*/
    *(this + 42) = 0; /*0x404daf*/
  }
  return result; /*0x404dba*/
}


// ==== 0x00404DD0  Audio::FlushChannel  this=ObjectClass  sig=csp ====
int __thiscall Audio::FlushChannel(_DWORD **Block)
{
  LinkedList::Init(Block); /*0x404dd3*/
  *(Block + 78) = 0; /*0x404dd8*/
  if ( *((char *)Block + 24) >= 0 ) /*0x404de7*/
    PushFrontLinkedListAlt(MEMORY[0x87E2A8], (int)Block); /*0x404e07*/
  else
    __3_YAXPAX_Z(Block); /*0x404dea*/
  return --MEMORY[0x87E28C]; /*0x404dfd*/
}


// ==== 0x00404E20  PollNextAudioQueue  this=-  sig=ida-proto ====
int __fastcall sub_404E20(int a1)
{
  int v1; // ebp
  int *v2; // ebx
  int v3; // edi
  int *v4; // esi
  int Next; // eax

  v1 = 0; /*0x404e23*/
  v2 = (int *)&MEMORY[0x87DE38]; /*0x404e2d*/
  if ( a1 > 0 ) /*0x404e32*/
  {
    while ( 2 ) /*0x404e34*/
    {
      v3 = 0; /*0x404e34*/
      v4 = v2; /*0x404e36*/
      do /*0x404e4a*/
      {
        Next = AudioQueue::GetNext(v4); /*0x404e3a*/
        if ( Next ) /*0x404e41*/
          return Next - 164; /*0x404e63*/
        ++v3; /*0x404e43*/
        v4 += 3; /*0x404e44*/
      }
      while ( v3 < 10 ); /*0x404e4a*/
      ++v1; /*0x404e50*/
      v2 += 30; /*0x404e51*/
      if ( v1 < a1 ) /*0x404e56*/
        continue; /*0x404e56*/
      break;
    }
  }
  return 0; /*0x404e58*/
}


// ==== 0x00404E70  AudioStream::CleanupChannels  this=AudioStream  sig=csp ====
void AudioStream_CleanupChannels()
{
  void **v0; // esi
  void **v1; // edi
  int v2; // ecx
  int v3; // ebp
  _DWORD **v4; // edi
  void **v5; // [esp+8h] [ebp-4h]

  if ( MEMORY[0x87E2A0] ) /*0x404e7c*/
  {
    v0 = (void **)MEMORY[0x87E180]; /*0x404e82*/
    if ( MEMORY[0x87E180] != &MEMORY[0x87E180] ) /*0x404e8e*/
    {
      do /*0x404fb6*/
      {
        v1 = (void **)*v0; /*0x404e96*/
        v5 = (void **)*v0; /*0x404e98*/
        if ( ((_BYTE)v0[6] & 1) == 0 ) /*0x404ea1*/
        {
          v2 = (int)v0[44]; /*0x404ea7*/
          if ( v2 && v0 == *(void ***)(v2 + 192) ) /*0x404eb7*/
          {
            if ( ((_BYTE)v0[6] & 2) != 0 ) /*0x404ebd*/
              Voice::Stop(v2); /*0x404ebf*/
            AudioStream::ReleaseChannel(v0[44]); /*0x404eca*/
            *((_DWORD *)v0[44] + 48) = 0; /*0x404ed5*/
            *((_DWORD *)v0[44] + 47) = 0; /*0x404ee1*/
            *((_DWORD *)v0[44] + 45) = 0; /*0x404eed*/
            *((_DWORD *)v0[44] + 46) = 0; /*0x404ef9*/
            *((_DWORD *)v0[44] + 36) = 0; /*0x404f05*/
            *((_DWORD *)v0[44] + 38) = 0; /*0x404f11*/
            *((_DWORD *)v0[44] + 39) = 0; /*0x404f1d*/
            v0[44] = 0; /*0x404f23*/
          }
          v3 = 0; /*0x404f2f*/
          if ( (int)v0[42] > 0 ) /*0x404f33*/
          {
            v4 = (_DWORD **)(v0 + 10); /*0x404f35*/
            do /*0x404f4d*/
            {
              RefCount::Decrement(*v4); /*0x404f3a*/
              *v4 = 0; /*0x404f3f*/
              ++v3; /*0x404f47*/
              ++v4; /*0x404f48*/
            }
            while ( v3 < (int)v0[42] ); /*0x404f4d*/
            v1 = v5; /*0x404f4f*/
          }
          v0[42] = 0; /*0x404f53*/
          v0[7] = (void *)4; /*0x404f59*/
          v0[78] = 0; /*0x404f60*/
          v0[158] = 0; /*0x404f66*/
          v0[6] = (void *)((unsigned int)v0[6] | 1); /*0x404f72*/
        }
        LinkedList::Init((_DWORD **)v0); /*0x404f77*/
        v0[78] = 0; /*0x404f7c*/
        if ( *((char *)v0 + 24) >= 0 ) /*0x404f87*/
          PushFrontLinkedListAlt(MEMORY[0x87E2A8], (int)v0); /*0x404f9c*/
        else
          __3_YAXPAX_Z(v0); /*0x404f8a*/
        v0 = v1; /*0x404fa7*/
        --MEMORY[0x87E28C]; /*0x404fb0*/
      }
      while ( v1 != &MEMORY[0x87E180] ); /*0x404fb6*/
    }
  }
}


// ==== 0x00404FD0  AudioStream::UpdateTimers  this=AudioStream  sig=ida-proto ====
int sub_404FD0()
{
  __int64 v0; // rax
  void **v1; // esi

  LODWORD(v0) = MEMORY[0x87E2A0]; /*0x404fd0*/
  if ( MEMORY[0x87E2A0] ) /*0x404fd8*/
  {
    v1 = (void **)MEMORY[0x87E180]; /*0x404fda*/
    if ( MEMORY[0x87E180] != &MEMORY[0x87E180] ) /*0x404fe6*/
    {
      do /*0x405031*/
      {
        LODWORD(v0) = v1[86]; /*0x404fe9*/
        if ( !(_DWORD)v0 ) /*0x404ff1*/
        {
          LODWORD(v0) = v1[7]; /*0x404ff3*/
          if ( (_DWORD)v0 == 2 ) /*0x404ff9*/
          {
            LODWORD(v0) = Audio::Callback(); /*0x404ffb*/
            *((_QWORD *)v1 + 40) -= v0; /*0x405010*/
          }
        }
        v1[86] = (char *)v1[86] + 1; /*0x405023*/
        v1 = (void **)*v1; /*0x405029*/
      }
      while ( v1 != &MEMORY[0x87E180] ); /*0x405031*/
    }
  }
  return v0; /*0x405034*/
}


// ==== 0x00405040  AudioStream::UpdateCountdowners  this=AudioStream  sig=ida-proto ====
int sub_405040()
{
  __int64 v0; // rax
  void **v1; // esi
  int v2; // eax
  __int64 v3; // rax

  LODWORD(v0) = MEMORY[0x87E2A0]; /*0x405040*/
  if ( MEMORY[0x87E2A0] ) /*0x405048*/
  {
    v1 = (void **)MEMORY[0x87E180]; /*0x40504a*/
    if ( MEMORY[0x87E180] != &MEMORY[0x87E180] ) /*0x405056*/
    {
      do /*0x4050b9*/
      {
        LODWORD(v0) = v1[86]; /*0x405059*/
        if ( (_DWORD)v0 ) /*0x405061*/
        {
          v2 = (int)v1[86] - 1; /*0x405069*/
          v1[86] = (void *)v2; /*0x40506c*/
          if ( v2 < 0 ) /*0x405072*/
            v1[86] = 0; /*0x405074*/
          LODWORD(v0) = v1[86]; /*0x40507e*/
          if ( !(_DWORD)v0 ) /*0x405086*/
          {
            LODWORD(v0) = v1[7]; /*0x405088*/
            if ( (_DWORD)v0 == 2 ) /*0x40508e*/
            {
              LODWORD(v3) = Audio::Callback(); /*0x405090*/
              v0 = *((_QWORD *)v1 + 40) + v3; /*0x4050a3*/
              *((_QWORD *)v1 + 40) = v0; /*0x4050a5*/
            }
          }
        }
        v1 = (void **)*v1; /*0x4050b1*/
      }
      while ( v1 != &MEMORY[0x87E180] ); /*0x4050b9*/
    }
  }
  return v0; /*0x4050bc*/
}


// ==== 0x00405130  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_405130(_DWORD *this)
{
  if ( MEMORY[0x87E2A0] ) /*0x405137*/
    return this->customSound_controller; /*0x40513c*/
  else
    return 0; /*0x405139*/
}


// ==== 0x00405140  ObjectClass::method  this=ObjectClass  sig=csp ====
double __thiscall sub_405140(float *this)
{
  if ( MEMORY[0x87E2A0] ) /*0x405147*/
    return this->q054; /*0x405150*/
  else
    return 0.0; /*0x405149*/
}


// ==== 0x00405160  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_405160(_DWORD *this)
{
  if ( MEMORY[0x87E2A0] ) /*0x405167*/
    return this->abstractFlags; /*0x40516c*/
  else
    return 0; /*0x405169*/
}


// ==== 0x00405170  VocClass::GetSampleName  this=VocClass  sig=csp ====
char *__thiscall VocClass_GetSampleName(char *this)
{
  char *result; // eax

  result = aNoEvents; /*0x405177*/
  if ( MEMORY[0x87E2A0] ) /*0x40517c*/
    return this + 108; /*0x40517e*/
  return result; /*0x405181*/
}


// ==== 0x00405190  AudioPool::ProcessQueue  this=AudioMixer  sig=csp ====
int *__thiscall AudioPool_ProcessQueue(_DWORD *this)
{
  _DWORD *v1; // ebx
  int *v2; // esi
  void **v3; // esi
  void **v4; // edi
  int v5; // eax

  v1 = this; /*0x40519a*/
  if ( !dword_816108 || !MEMORY[0x87E2A4] || !this->AudioMixer_field_0C ) /*0x4051b6*/
    return 0; /*0x4051b6*/
  v2 = LinkedList::Next((int **)MEMORY[0x87E2A8]); /*0x4051ca*/
  if ( !v2 ) /*0x4051ce*/
  {
    if ( MEMORY[0x87E2A0] ) /*0x4051d6*/
    {
      v3 = (void **)MEMORY[0x87E180]; /*0x4051d8*/
      if ( MEMORY[0x87E180] != &MEMORY[0x87E180] ) /*0x4051e4*/
      {
        do /*0x40522b*/
        {
          v4 = (void **)*v3; /*0x4051e8*/
          if ( ((_BYTE)v3[6] & 1) != 0 ) /*0x4051ef*/
          {
            LinkedList::Init((_DWORD **)v3); /*0x4051f3*/
            v3[78] = 0; /*0x4051f8*/
            if ( ((_BYTE)v3[6] & 0x80) != 0 ) /*0x405203*/
              __3_YAXPAX_Z(v3); /*0x405206*/
            else
              PushFrontLinkedListAlt(MEMORY[0x87E2A8], (int)v3); /*0x405218*/
            --MEMORY[0x87E28C]; /*0x40521d*/
          }
          v3 = v4; /*0x405229*/
        }
        while ( v4 != &MEMORY[0x87E180] ); /*0x40522b*/
        v1 = this; /*0x40522d*/
      }
    }
    v2 = LinkedList::Next((int **)MEMORY[0x87E2A8]); /*0x40523c*/
    if ( !v2 ) /*0x405240*/
      return 0; /*0x4052ce*/
  }
  v5 = ++MEMORY[0x87E28C]; /*0x405251*/
  if ( MEMORY[0x87E28C] > MEMORY[0x87E290] ) /*0x405259*/
    MEMORY[0x87E290] = v5; /*0x40525b*/
  memset(v2, 0, 0x280u); /*0x405269*/
  v2[9] = (int)v1; /*0x40526d*/
  DListNode::InitEmpty(v2); /*0x405270*/
  v2[7] = 0; /*0x405275*/
  v2[85] = 0; /*0x40527e*/
  v2[154] = 0; /*0x405284*/
  v2[120] = 0; /*0x40528a*/
  v2[42] = 0; /*0x405290*/
  AudioMixer::Init(v2 + 46); /*0x405296*/
  v2[86] = 0; /*0x40529b*/
  InsertAfterDListNode((int)&MEMORY[0x87E180], v2); /*0x4052a8*/
  v2[78] = dword_81610C++; /*0x4052b2*/
  return v2; /*0x4052be*/
}


// ==== 0x004052E0  ObjectClass::method_4052E0  this=ObjectClass  sig=csp ====
int __thiscall sub_4052E0(_DWORD *this)
{
  int result; // eax

  result = this->nextArrayIndex; /*0x4052e0*/
  LOBYTE(result) = result | 8; /*0x4052e3*/
  this->nextArrayIndex = result; /*0x4052e5*/
  return result; /*0x4052e8*/
}


// ==== 0x004052F0  VocClass::Release  this=VocClass  sig=csp ====
int __thiscall VocClass_Cleanup(int this)
{
  int v2; // ecx
  int result; // eax
  int v4; // ebx
  _DWORD **v5; // edi

  if ( (*(_BYTE *)(this + 24) & 1) == 0 ) /*0x4052f7*/
  {
    v2 = *(_DWORD *)(this + 176); /*0x4052fd*/
    if ( v2 && this == *(_DWORD *)(v2 + 192) ) /*0x405311*/
    {
      if ( (*(_BYTE *)(this + 24) & 2) != 0 ) /*0x405317*/
        Voice::Stop(v2); /*0x405319*/
      AudioStream::ReleaseChannel(*(_DWORD **)(this + 176)); /*0x405324*/
      *(_DWORD *)(*(_DWORD *)(this + 176) + 192) = 0; /*0x40532f*/
      *(_DWORD *)(*(_DWORD *)(this + 176) + 188) = 0; /*0x40533b*/
      *(_DWORD *)(*(_DWORD *)(this + 176) + 180) = 0; /*0x405347*/
      *(_DWORD *)(*(_DWORD *)(this + 176) + 184) = 0; /*0x405353*/
      *(_DWORD *)(*(_DWORD *)(this + 176) + 144) = 0; /*0x40535f*/
      *(_DWORD *)(*(_DWORD *)(this + 176) + 152) = 0; /*0x40536b*/
      *(_DWORD *)(*(_DWORD *)(this + 176) + 156) = 0; /*0x405377*/
      *(_DWORD *)(this + 176) = 0; /*0x40537d*/
    }
    result = *(_DWORD *)(this + 168); /*0x405383*/
    v4 = 0; /*0x405389*/
    if ( result > 0 ) /*0x40538d*/
    {
      v5 = (_DWORD **)(this + 40); /*0x405390*/
      do /*0x4053a8*/
      {
        RefCount::Decrement(*v5); /*0x405395*/
        *v5 = 0; /*0x40539a*/
        result = *(_DWORD *)(this + 168); /*0x40539c*/
        ++v4; /*0x4053a2*/
        ++v5; /*0x4053a3*/
      }
      while ( v4 < result ); /*0x4053a8*/
    }
    *(_DWORD *)(this + 168) = 0; /*0x4053ab*/
    *(_DWORD *)(this + 28) = 4; /*0x4053b1*/
    *(_DWORD *)(this + 312) = 0; /*0x4053b8*/
    *(_DWORD *)(this + 632) = 0; /*0x4053be*/
    *(_DWORD *)(this + 24) |= 1u; /*0x4053ca*/
  }
  return result; /*0x4053cf*/
}


// ==== 0x004053E0  ObjectClass::method_4053E0  this=ObjectClass  sig=csp ====
int __thiscall sub_4053E0(int this)
{
  __int64 v2; // rax

  LODWORD(v2) = *(_DWORD *)(this + 344); /*0x4053e3*/
  if ( !(_DWORD)v2 ) /*0x4053eb*/
  {
    LODWORD(v2) = *(_DWORD *)(this + 28); /*0x4053ed*/
    if ( (_DWORD)v2 == 2 ) /*0x4053f3*/
    {
      LODWORD(v2) = Audio::Callback(); /*0x4053f6*/
      *(_QWORD *)(this + 320) -= v2; /*0x40540b*/
    }
  }
  ++*(_DWORD *)(this + 344); /*0x40541f*/
  return v2; /*0x405425*/
}


// ==== 0x00405430  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_405430(int this)
{
  __int64 v2; // rax
  int v3; // eax
  __int64 v4; // rax

  LODWORD(v2) = *(_DWORD *)(this + 344); /*0x405433*/
  if ( (_DWORD)v2 ) /*0x40543b*/
  {
    v3 = *(_DWORD *)(this + 344) - 1; /*0x405443*/
    *(_DWORD *)(this + 344) = v3; /*0x405446*/
    if ( v3 < 0 ) /*0x40544c*/
      *(_DWORD *)(this + 344) = 0; /*0x40544e*/
    LODWORD(v2) = *(_DWORD *)(this + 344); /*0x405458*/
    if ( !(_DWORD)v2 ) /*0x405460*/
    {
      LODWORD(v2) = *(_DWORD *)(this + 28); /*0x405462*/
      if ( (_DWORD)v2 == 2 ) /*0x405468*/
      {
        LODWORD(v4) = Audio::Callback(); /*0x40546b*/
        v2 = *(_QWORD *)(this + 320) + v4; /*0x40547e*/
        *(_QWORD *)(this + 320) = v2; /*0x405480*/
      }
    }
  }
  return v2; /*0x40548d*/
}


// ==== 0x00405490  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_405490(_DWORD *this)
{
  return this->q158; /*0x405496*/
}


// ==== 0x004054A0  Audio::UpdatePlaybackPosition  this=Voice  sig=csp ====
int __thiscall sub_4054A0(int *this)
{
  _DWORD *v2; // ecx
  _DWORD *v4; // edi
  int v5; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // eax

  v2 = (_DWORD *)*(this + 44); /*0x4054a4*/
  if ( this != (int *)v2[48] ) /*0x4054b0*/
    return 0; /*0x4054b3*/
  AudioFile::GetCallback(v2); /*0x4054b7*/
  v4 = (_DWORD *)*(this + 82); /*0x4054bc*/
  v5 = *(this + 6); /*0x4054c2*/
  LOBYTE(v5) = v5 | 8; /*0x4054c5*/
  *(this + 6) = v5; /*0x4054c7*/
  BindChannelAudioStream((_DWORD *)*(this + 44), v4); /*0x4054d2*/
  EndBufferMixer((int *)(*(this + 44) + 56), *(this + 83)); /*0x4054e6*/
  v6 = *(this + 84); /*0x4054eb*/
  v7 = 0x4000; /*0x4054f1*/
  if ( v6 > 0 ) /*0x4054f8*/
    v7 = 0x4000 - (v6 << 14) / 0x64u; /*0x40550e*/
  EndBufferMixer((int *)(*(this + 44) + 16), v7); /*0x405519*/
  *(this + 7) = 3; /*0x40551e*/
  *(this + 6) |= 2u; /*0x40552b*/
  *(this + 82) = 0; /*0x40552e*/
  if ( Audio::GetChannelStatus(*(this + 44)) ) /*0x40553e*/
  {
    *(this + 7) = 1; /*0x405547*/
    *(this + 82) = (int)v4; /*0x40554e*/
    v8 = *(this + 6); /*0x405554*/
    LOBYTE(v8) = v8 & 0xFD; /*0x405557*/
    *(this + 6) = v8; /*0x405559*/
    AudioStream::Stop((_DWORD *)*(this + 44)); /*0x405562*/
    return 0; /*0x405567*/
  }
  else
  {
    AudioStream::Stop((_DWORD *)*(this + 44)); /*0x405572*/
    return 1; /*0x405577*/
  }
}


// ==== 0x004055C0  ObjectClass::UpdateVoicePlayback  this=ObjectClass  sig=csp ====
int __thiscall VoiceClass_Update(int this)
{
  unsigned __int64 v2; // rax
  _DWORD *v3; // edi
  int v4; // ecx
  int v5; // eax
  int v6; // ecx
  bool v7; // zf
  int v8; // eax
  __int64 v9; // kr00_8
  __int64 v10; // rax
  int v11; // ecx
  int v12; // ebp
  _DWORD **v13; // edi
  _DWORD *v14; // ebx
  int v15; // ebp
  _DWORD **v16; // edi
  int v17; // eax
  int v18; // ebp
  _DWORD **v19; // edi

  if ( !dword_816108 ) /*0x4055cf*/
    *(_DWORD *)(this + 28) = 4; /*0x4055d1*/
  LODWORD(v2) = *(_DWORD *)(this + 28); /*0x4055d8*/
  while ( 2 ) /*0x4055e4*/
  {
    switch ( (int)v2 ) /*0x4055e4*/
    {
      case 0: /*0x4055e4*/
        v3 = *(_DWORD **)(this + 36); /*0x405639*/
        if ( v3[77] /*0x405671*/
          && v3[3]
          && (v4 = *(_DWORD *)(this + 340),
              *(_DWORD *)(this + 484) = 0,
              LODWORD(v2) = sub_405B50(v3[16] + v4, 0),
              (*(_DWORD *)(this + 176) = v2) != 0) )
        {
          *(_DWORD *)(this + 332) = Random::Range(MEMORY[0x886B88], v3[24], v3[25]) + 100; /*0x405691*/
          v5 = Random::Range(MEMORY[0x886B88], 0, v3[26]); /*0x40569c*/
          v6 = *(_DWORD *)(this + 176); /*0x4056a1*/
          *(_DWORD *)(this + 336) = v5; /*0x4056a7*/
          sub_4026C0(v6); /*0x4056ad*/
          *(_DWORD *)(*(_DWORD *)(this + 176) + 192) = this; /*0x4056bd*/
          *(_DWORD *)(*(_DWORD *)(this + 176) + 180) = sub_405AC0; /*0x4056c9*/
          *(_DWORD *)(*(_DWORD *)(this + 176) + 184) = sub_405A00; /*0x4056d9*/
          *(_DWORD *)(*(_DWORD *)(this + 176) + 188) = sub_4059F0; /*0x4056e9*/
          *(_DWORD *)(this + 28) = 1; /*0x4056f3*/
          *(_DWORD *)(*(_DWORD *)(this + 176) + 144) = this + 184; /*0x405702*/
          *(_DWORD *)(*(_DWORD *)(this + 176) + 152) = &MEMORY[0x87E1B8]; /*0x40570e*/
          *(_DWORD *)(*(_DWORD *)(this + 176) + 156) = MEMORY[0x87E758]; /*0x405723*/
          LODWORD(v2) = v3[4]; /*0x405729*/
          if ( (v2 & 0x88) != 0 ) /*0x40572e*/
          {
            v7 = (v2 & 0x80u) == 0LL; /*0x405734*/
            v8 = 33; /*0x405736*/
            if ( v7 ) /*0x40573b*/
              v8 = v3[22]; /*0x40573d*/
            LODWORD(v2) = Random::Range(MEMORY[0x886B88], v8, v3[23]); /*0x40574a*/
            if ( (int)v2 >= 33 ) /*0x405752*/
            {
              v9 = (int)v2; /*0x40575b*/
              *(_DWORD *)(this + 32) = 1; /*0x40575d*/
              LODWORD(v2) = *(_DWORD *)(this + 344); /*0x405760*/
              if ( (_DWORD)v2 ) /*0x405768*/
              {
                *(_QWORD *)(this + 320) = v9; /*0x40576a*/
              }
              else
              {
                LODWORD(v10) = Audio::Callback(); /*0x405782*/
                v2 = v9 + v10; /*0x405789*/
                *(_QWORD *)(this + 320) = v2; /*0x40578b*/
              }
              *(_DWORD *)(this + 28) = 2; /*0x405776*/
            }
          }
        }
        else if ( (*(_BYTE *)(this + 24) & 1) == 0 ) /*0x4057a7*/
        {
          Voice::DetachChannel(this); /*0x4057af*/
          LODWORD(v2) = Audio::ReleaseChannelRefs(this); /*0x4057b6*/
          *(_DWORD *)(this + 28) = 4; /*0x4057bb*/
          *(_DWORD *)(this + 312) = 0; /*0x4057c2*/
          *(_DWORD *)(this + 632) = 0; /*0x4057c8*/
          *(_DWORD *)(this + 24) |= 1u; /*0x4057d4*/
        }
        break; /*0x405781*/
      case 2: /*0x4055e4*/
        if ( (*(_BYTE *)(this + 24) & 0x40) != 0 ) /*0x4055ef*/
          goto LABEL_41; /*0x4055ef*/
        LODWORD(v2) = *(_DWORD *)(this + 344); /*0x4055f5*/
        if ( !(_DWORD)v2 ) /*0x4055fd*/
        {
          LODWORD(v2) = Audio::Callback(); /*0x405603*/
          if ( v2 > *(_QWORD *)(this + 320) ) /*0x405620*/
          {
            *(_DWORD *)(this + 28) = *(_DWORD *)(this + 32); /*0x405629*/
            LODWORD(v2) = *(_DWORD *)(this + 28); /*0x40562c*/
            if ( (unsigned int)v2 <= 4 ) /*0x405632*/
              continue; /*0x405632*/
          }
        }
        break; /*0x405632*/
      case 3: /*0x4055e4*/
        LODWORD(v2) = *(_DWORD *)(this + 36); /*0x4057dc*/
        if ( (*(_BYTE *)(v2 + 16) & 1) != 0 && !*(_DWORD *)(v2 + 76) && (*(_BYTE *)(this + 24) & 0x20) == 0 ) /*0x4057f6*/
        {
          LODWORD(v2) = *(_DWORD *)(this + 632); /*0x4057fc*/
          if ( !(_DWORD)v2 ) /*0x405804*/
            goto LABEL_35; /*0x405804*/
          if ( MEMORY[0x87E2A0] && *(int **)(v2 + 12) == &MEMORY[0x87E294] ) /*0x405815*/
          {
            v11 = *(_DWORD *)v2; /*0x405817*/
            if ( *(_DWORD *)v2 /*0x405832*/
              && (*(_DWORD *)(v2 + 8) != *(_DWORD *)(v11 + 36) || *(_DWORD *)(v2 + 4) != *(_DWORD *)(v11 + 312)) )
            {
              v11 = 0; /*0x405834*/
              *(_DWORD *)v2 = 0; /*0x405836*/
            }
          }
          else
          {
            v11 = 0; /*0x40583a*/
          }
          if ( v11 != this ) /*0x40583e*/
          {
LABEL_35:
            if ( (*(_BYTE *)(this + 24) & 1) == 0 ) /*0x405844*/
            {
              Voice::DetachChannel(this); /*0x405848*/
              v12 = 0; /*0x405853*/
              if ( *(int *)(this + 168) > 0 ) /*0x405857*/
              {
                v13 = (_DWORD **)(this + 40); /*0x405859*/
                do /*0x405871*/
                {
                  RefCount::Decrement(*v13); /*0x40585e*/
                  *v13 = 0; /*0x405863*/
                  ++v12; /*0x40586b*/
                  ++v13; /*0x40586c*/
                }
                while ( v12 < *(_DWORD *)(this + 168) ); /*0x405871*/
              }
              *(_DWORD *)(this + 168) = 0; /*0x405873*/
              *(_DWORD *)(this + 28) = 4; /*0x405879*/
              *(_DWORD *)(this + 312) = 0; /*0x405880*/
              *(_DWORD *)(this + 632) = 0; /*0x405886*/
              LODWORD(v2) = *(_DWORD *)(this + 24); /*0x40588c*/
              LOBYTE(v2) = v2 | 1; /*0x40588f*/
              *(_DWORD *)(this + 24) = v2; /*0x405891*/
            }
          }
        }
        if ( (*(_BYTE *)(this + 24) & 0x40) != 0 ) /*0x405898*/
        {
LABEL_41:
          v14 = *(_DWORD **)(this + 176); /*0x40589e*/
          v15 = 0; /*0x4058a4*/
          if ( v14 ) /*0x4058a8*/
          {
            AudioFile::GetCallback(*(_DWORD **)(this + 176)); /*0x4058b0*/
            *(_DWORD *)(this + 24) &= ~0x40u; /*0x4058bb*/
            Voice::Stop(*(_DWORD *)(this + 176)); /*0x4058c4*/
            if ( (*(_BYTE *)(*(_DWORD *)(this + 36) + 16) & 0x40) != 0 && (*(_BYTE *)(this + 24) & 0x10) == 0 ) /*0x4058da*/
            {
              *(_DWORD *)(this + 28) = 1; /*0x4058dc*/
              *(_DWORD *)(this + 328) = AudioStream::SelectRandom(this); /*0x4058ea*/
              if ( !*(_DWORD *)(this + 344) && !Audio::UpdatePlaybackPosition(this) && (*(_BYTE *)(this + 24) & 1) == 0 ) /*0x405909*/
              {
                Voice::DetachChannel(this); /*0x40590d*/
                if ( *(int *)(this + 168) > 0 ) /*0x405918*/
                {
                  v16 = (_DWORD **)(this + 40); /*0x40591a*/
                  do /*0x405936*/
                  {
                    RefCount::Decrement(*v16); /*0x40591f*/
                    *v16 = 0; /*0x405924*/
                    ++v15; /*0x405930*/
                    ++v16; /*0x405931*/
                  }
                  while ( v15 < *(_DWORD *)(this + 168) ); /*0x405936*/
                }
                *(_DWORD *)(this + 168) = 0; /*0x40593a*/
                *(_DWORD *)(this + 28) = 4; /*0x405940*/
                *(_DWORD *)(this + 312) = 0; /*0x405947*/
                *(_DWORD *)(this + 632) = 0; /*0x40594d*/
                v17 = *(_DWORD *)(this + 24); /*0x405953*/
                LOBYTE(v17) = v17 | 1; /*0x405956*/
                *(_DWORD *)(this + 24) = v17; /*0x405958*/
              }
            }
            LODWORD(v2) = AudioStream::Stop(v14); /*0x405961*/
          }
          else
          {
            *(_DWORD *)(this + 24) &= ~0x40u; /*0x40596c*/
          }
        }
        break; /*0x405961*/
      case 4: /*0x4055e4*/
        if ( (*(_BYTE *)(this + 24) & 1) == 0 ) /*0x405978*/
        {
          Voice::DetachChannel(this); /*0x40597c*/
          LODWORD(v2) = *(_DWORD *)(this + 168); /*0x405981*/
          v18 = 0; /*0x405987*/
          if ( (int)v2 > 0 ) /*0x40598b*/
          {
            v19 = (_DWORD **)(this + 40); /*0x40598d*/
            do /*0x4059a5*/
            {
              RefCount::Decrement(*v19); /*0x405992*/
              *v19 = 0; /*0x405997*/
              LODWORD(v2) = *(_DWORD *)(this + 168); /*0x405999*/
              ++v18; /*0x40599f*/
              ++v19; /*0x4059a0*/
            }
            while ( v18 < (int)v2 ); /*0x4059a5*/
          }
          *(_DWORD *)(this + 168) = 0; /*0x4059a7*/
          *(_DWORD *)(this + 28) = 4; /*0x4059ad*/
          *(_DWORD *)(this + 312) = 0; /*0x4059b4*/
          *(_DWORD *)(this + 632) = 0; /*0x4059ba*/
          *(_DWORD *)(this + 24) |= 1u; /*0x4059c6*/
        }
        break; /*0x4059c6*/
      default:
        return v2;
    }
    return v2; /*0x405634*/
  }
}


// ==== 0x004059F0  ObjectClass::method_4059F0  this=ObjectClass  sig=csp ====
int __thiscall sub_4059F0(_DWORD *this)
{
  *(_DWORD *)(this->q0C0 + 28) = 4; /*0x4059f6*/
  return 0; /*0x4059ff*/
}


// ==== 0x00405A00  ObjectClass::method_405A00  this=ObjectClass  sig=csp ====
int __thiscall sub_405A00(_DWORD *this)
{
  _DWORD *v1; // esi
  int v2; // eax
  int v3; // eax
  unsigned int v5; // edi
  __int64 v6; // rax

  v1 = (_DWORD *)this->q0C0; /*0x405a01*/
  v2 = v1[6]; /*0x405a07*/
  LOBYTE(v2) = v2 & 0xFD; /*0x405a0a*/
  v1[6] = v2; /*0x405a0c*/
  v3 = 4; /*0x405a0f*/
  if ( v1[7] == 4 ) /*0x405a19*/
    return 0; /*0x405a1b*/
  if ( v1[82] || v1[154] || v1[79] ) /*0x405a34*/
    v3 = 1; /*0x405a46*/
  else
    v1[79] = 0; /*0x405a3e*/
  if ( v1[79] ) /*0x405a4b*/
  {
    v5 = v1[79]; /*0x405a56*/
    v1[8] = v3; /*0x405a5c*/
    if ( v1[86] ) /*0x405a5f*/
    {
      v1[80] = v5; /*0x405a69*/
      v1[81] = 0; /*0x405a6f*/
    }
    else
    {
      LODWORD(v6) = Audio::Callback(); /*0x405a88*/
      *((_QWORD *)v1 + 40) = v5 + v6; /*0x405a91*/
    }
    v1[7] = 2; /*0x405a75*/
    v1[79] = 0; /*0x405a7c*/
    return 0; /*0x405a84*/
  }
  else
  {
    v1[7] = v3; /*0x405ab0*/
    return 0; /*0x405ab4*/
  }
}


// ==== 0x00405AC0  ObjectClass::method_405AC0  this=ObjectClass  sig=csp ====
int __thiscall sub_405AC0(_DWORD *this)
{
  _DWORD *v2; // esi
  _DWORD *v3; // ebx
  int v5; // eax
  unsigned int v6; // eax

  v2 = (_DWORD *)this->q0C0; /*0x405ac5*/
  v3 = (_DWORD *)AudioStream::SelectRandom((int)v2); /*0x405ad2*/
  if ( *(_DWORD *)(v2[9] + 92) < 0x21u ) /*0x405adb*/
    goto LABEL_2; /*0x405adb*/
  BindChannelAudioStream(this, 0); /*0x405af0*/
  v5 = v2[9]; /*0x405af5*/
  if ( (*(_BYTE *)(v5 + 16) & 0x88) == 0 || v3 || v2[154] ) /*0x405b02*/
  {
    v6 = Random::Range(MEMORY[0x886B88], *(_DWORD *)(v5 + 88), *(_DWORD *)(v5 + 92)); /*0x405b19*/
    if ( v6 < 0x21 ) /*0x405b21*/
    {
LABEL_2:
      BindChannelAudioStream(this, v3); /*0x405add*/
      return 0; /*0x405aeb*/
    }
    v2[79] = v6; /*0x405b32*/
    v2[82] = v3; /*0x405b38*/
  }
  return 0; /*0x405ae8*/
}


// ==== 0x00405B50  sub_405B50  this=-  sig=ida-proto ====
_DWORD *__fastcall sub_405B50(int a1, char a2)
{
  _DWORD *v3; // esi
  int v5; // eax

  v3 = 0; /*0x405b5b*/
  if ( MEMORY[0x87E29C] ) /*0x405b61*/
  {
    v5 = AudioQueue::FindBestChannel(MEMORY[0x87E29C], 1); /*0x405b68*/
    v3 = (_DWORD *)v5; /*0x405b6d*/
    if ( v5 ) /*0x405b71*/
    {
      if ( (*(_BYTE *)(v5 + 164) & 0x15) != 0 && *(_DWORD *)(v5 + 160) > a1 ) /*0x405b82*/
        return 0; /*0x405b89*/
      Voice::Stop(v5); /*0x405b8c*/
      v3[37] = MEMORY[0x87E748]; /*0x405b96*/
      v3[39] = MEMORY[0x87E758]; /*0x405ba5*/
      v3[40] = a1; /*0x405bab*/
      if ( (a2 & 1) != 0 ) /*0x405bb1*/
      {
        v3[42] = -1; /*0x405bb3*/
        return v3; /*0x405bc2*/
      }
      v3[42] = 0; /*0x405bc3*/
    }
  }
  return v3; /*0x405b84*/
}


// ==== 0x00405BE0  AudioController::Init  this=AudioController  sig=csp ====
int __thiscall sub_405BE0(_DWORD *this)
{
  this->AudioController_field_0C = &MEMORY[0x87E294]; /*0x405be2*/
  *this = 0; /*0x405be9*/
  this->AudioController_field_04 = 0; /*0x405beb*/
  this->AudioController_field_08 = 0; /*0x405bee*/
  return 0; /*0x405bf1*/
}


// ==== 0x00405C00  AudioFileClass::Release  this=AudioController  sig=csp ====
_DWORD *__thiscall AudioFileClass_Release(_DWORD *this)
{
  _DWORD *result; // eax
  int v2; // esi
  int v3; // ecx
  int v4; // ebx
  _DWORD *v5; // edi

  result = this; /*0x405c01*/
  if ( MEMORY[0x87E2A0] ) /*0x405c13*/
  {
    if ( (int *)this->AudioController_field_0C == &MEMORY[0x87E294] ) /*0x405c20*/
    {
      v2 = *this; /*0x405c26*/
      if ( *this ) /*0x405c26*/
      {
        if ( this->AudioController_field_08 == *(_DWORD *)(v2 + 36) /*0x405c53*/
          && this->AudioController_field_04 == *(_DWORD *)(v2 + 312)
          && (*(_BYTE *)(v2 + 24) & 1) == 0 )
        {
          v3 = *(_DWORD *)(v2 + 176); /*0x405c59*/
          if ( v3 && v2 == *(_DWORD *)(v3 + 192) ) /*0x405c69*/
          {
            if ( (*(_BYTE *)(v2 + 24) & 2) != 0 ) /*0x405c6f*/
              Voice::Stop(v3); /*0x405c71*/
            AudioStream::ReleaseChannel(*(_DWORD *)(v2 + 176)); /*0x405c7c*/
            *(_DWORD *)(*(_DWORD *)(v2 + 176) + 192) = 0; /*0x405c87*/
            *(_DWORD *)(*(_DWORD *)(v2 + 176) + 188) = 0; /*0x405c93*/
            *(_DWORD *)(*(_DWORD *)(v2 + 176) + 180) = 0; /*0x405c9f*/
            *(_DWORD *)(*(_DWORD *)(v2 + 176) + 184) = 0; /*0x405cab*/
            *(_DWORD *)(*(_DWORD *)(v2 + 176) + 144) = 0; /*0x405cb7*/
            *(_DWORD *)(*(_DWORD *)(v2 + 176) + 152) = 0; /*0x405cc3*/
            *(_DWORD *)(*(_DWORD *)(v2 + 176) + 156) = 0; /*0x405ccf*/
            result = this; /*0x405cd5*/
            *(_DWORD *)(v2 + 176) = 0; /*0x405cd9*/
          }
          v4 = 0; /*0x405ce6*/
          if ( *(int *)(v2 + 168) > 0 ) /*0x405cea*/
          {
            v5 = (_DWORD *)(v2 + 40); /*0x405ced*/
            do /*0x405d05*/
            {
              RefCount::Decrement(*v5); /*0x405cf2*/
              *v5 = 0; /*0x405cf7*/
              ++v4; /*0x405cff*/
              ++v5; /*0x405d00*/
            }
            while ( v4 < *(_DWORD *)(v2 + 168) ); /*0x405d05*/
            result = this; /*0x405d07*/
          }
          *(_DWORD *)(v2 + 168) = 0; /*0x405d0c*/
          *(_DWORD *)(v2 + 28) = 4; /*0x405d12*/
          *(_DWORD *)(v2 + 312) = 0; /*0x405d19*/
          *(_DWORD *)(v2 + 632) = 0; /*0x405d1f*/
          *(_DWORD *)(v2 + 24) |= 1u; /*0x405d2b*/
        }
        *result = 0; /*0x405d2f*/
      }
    }
  }
  result[2] = 0; /*0x405d31*/
  result[3] = 0; /*0x405d34*/
  return result; /*0x405d37*/
}


// ==== 0x00405D40  AudioController::Stop  this=AudioController  sig=csp ====
_DWORD *__thiscall AudioController_Stop(_DWORD *this)
{
  _DWORD *result; // eax
  int v2; // esi
  int v3; // ecx
  int v4; // ebx
  _DWORD *v5; // edi

  result = this; /*0x405d41*/
  if ( MEMORY[0x87E2A0] ) /*0x405d53*/
  {
    if ( (int *)this->AudioController_field_0C == &MEMORY[0x87E294] ) /*0x405d60*/
    {
      v2 = *this; /*0x405d66*/
      if ( *this ) /*0x405d66*/
      {
        if ( this->AudioController_field_08 == *(_DWORD *)(v2 + 36) /*0x405d93*/
          && this->AudioController_field_04 == *(_DWORD *)(v2 + 312)
          && (*(_BYTE *)(v2 + 24) & 1) == 0 )
        {
          v3 = *(_DWORD *)(v2 + 176); /*0x405d99*/
          if ( v3 && v2 == *(_DWORD *)(v3 + 192) ) /*0x405da9*/
          {
            if ( (*(_BYTE *)(v2 + 24) & 2) != 0 ) /*0x405daf*/
              Voice::Stop(); /*0x405db1*/
            AudioStream::ReleaseChannel(*(_DWORD *)(v2 + 176)); /*0x405dbc*/
            *(_DWORD *)(*(_DWORD *)(v2 + 176) + 192) = 0; /*0x405dc7*/
            *(_DWORD *)(*(_DWORD *)(v2 + 176) + 188) = 0; /*0x405dd3*/
            *(_DWORD *)(*(_DWORD *)(v2 + 176) + 180) = 0; /*0x405ddf*/
            *(_DWORD *)(*(_DWORD *)(v2 + 176) + 184) = 0; /*0x405deb*/
            *(_DWORD *)(*(_DWORD *)(v2 + 176) + 144) = 0; /*0x405df7*/
            *(_DWORD *)(*(_DWORD *)(v2 + 176) + 152) = 0; /*0x405e03*/
            *(_DWORD *)(*(_DWORD *)(v2 + 176) + 156) = 0; /*0x405e0f*/
            result = this; /*0x405e15*/
            *(_DWORD *)(v2 + 176) = 0; /*0x405e19*/
          }
          v4 = 0; /*0x405e26*/
          if ( *(int *)(v2 + 168) > 0 ) /*0x405e2a*/
          {
            v5 = (_DWORD *)(v2 + 40); /*0x405e2d*/
            do /*0x405e45*/
            {
              RefCount::Decrement(*v5); /*0x405e32*/
              *v5 = 0; /*0x405e37*/
              ++v4; /*0x405e3f*/
              ++v5; /*0x405e40*/
            }
            while ( v4 < *(_DWORD *)(v2 + 168) ); /*0x405e45*/
            result = this; /*0x405e47*/
          }
          *(_DWORD *)(v2 + 168) = 0; /*0x405e4c*/
          *(_DWORD *)(v2 + 28) = 4; /*0x405e52*/
          *(_DWORD *)(v2 + 312) = 0; /*0x405e59*/
          *(_DWORD *)(v2 + 632) = 0; /*0x405e5f*/
          *(_DWORD *)(v2 + 24) |= 1u; /*0x405e6b*/
        }
        *result = 0; /*0x405e6f*/
      }
    }
  }
  result[2] = 0; /*0x405e71*/
  return result; /*0x405e74*/
}


// ==== 0x00405E80  ObjectClass::method_405E80  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_405E80(_DWORD *this)
{
  _DWORD *result; // eax
  int v2; // esi
  int v3; // ecx
  int v4; // ecx
  int v5; // ebp
  _DWORD **v6; // edi

  result = this; /*0x405e81*/
  if ( MEMORY[0x87E2A0] ) /*0x405e94*/
  {
    if ( (int *)this->vtable4 == &MEMORY[0x87E294] ) /*0x405ea1*/
    {
      v2 = *this; /*0x405ea7*/
      if ( *this ) /*0x405ea7*/
      {
        v3 = *(_DWORD *)(v2 + 36); /*0x405eb1*/
        if ( result[2] != v3 || result[1] != *(_DWORD *)(v2 + 312) ) /*0x405eca*/
        {
LABEL_19:
          *result = 0; /*0x405fc1*/
          goto LABEL_20; /*0x405fc1*/
        }
        if ( (*(_BYTE *)(v3 + 16) & 1) != 0 && !*(_DWORD *)(v3 + 76) ) /*0x405eda*/
        {
          if ( (*(_BYTE *)(v2 + 24) & 1) == 0 ) /*0x405ee7*/
          {
            v4 = *(_DWORD *)(v2 + 176); /*0x405eed*/
            if ( v4 && v2 == *(_DWORD *)(v4 + 192) ) /*0x405efd*/
            {
              if ( (*(_BYTE *)(v2 + 24) & 2) != 0 ) /*0x405f03*/
                Voice::Stop(v4); /*0x405f05*/
              AudioStream::ReleaseChannel(*(_DWORD **)(v2 + 176)); /*0x405f10*/
              *(_DWORD *)(*(_DWORD *)(v2 + 176) + 192) = 0; /*0x405f1b*/
              *(_DWORD *)(*(_DWORD *)(v2 + 176) + 188) = 0; /*0x405f27*/
              *(_DWORD *)(*(_DWORD *)(v2 + 176) + 180) = 0; /*0x405f33*/
              *(_DWORD *)(*(_DWORD *)(v2 + 176) + 184) = 0; /*0x405f3f*/
              *(_DWORD *)(*(_DWORD *)(v2 + 176) + 144) = 0; /*0x405f4b*/
              *(_DWORD *)(*(_DWORD *)(v2 + 176) + 152) = 0; /*0x405f57*/
              *(_DWORD *)(*(_DWORD *)(v2 + 176) + 156) = 0; /*0x405f63*/
              result = this; /*0x405f69*/
              *(_DWORD *)(v2 + 176) = 0; /*0x405f6d*/
            }
            v5 = 0; /*0x405f7a*/
            if ( *(int *)(v2 + 168) > 0 ) /*0x405f7e*/
            {
              v6 = (_DWORD **)(v2 + 40); /*0x405f80*/
              do /*0x405f98*/
              {
                RefCount::Decrement(*v6); /*0x405f85*/
                *v6 = 0; /*0x405f8a*/
                ++v5; /*0x405f92*/
                ++v6; /*0x405f93*/
              }
              while ( v5 < *(_DWORD *)(v2 + 168) ); /*0x405f98*/
              result = this; /*0x405f9a*/
            }
            *(_DWORD *)(v2 + 168) = 0; /*0x405f9e*/
            *(_DWORD *)(v2 + 28) = 4; /*0x405fa4*/
            *(_DWORD *)(v2 + 312) = 0; /*0x405fab*/
            *(_DWORD *)(v2 + 632) = 0; /*0x405fb1*/
            *(_DWORD *)(v2 + 24) |= 1u; /*0x405fbd*/
          }
          goto LABEL_19; /*0x405fbd*/
        }
      }
    }
  }
LABEL_20:
  result[2] = 0; /*0x405fc3*/
  return result; /*0x405fc3*/
}


// ==== 0x00405FD0  AudioFile::Stop  this=AudioController  sig=csp ====
int __thiscall AudioFile_Stop(_DWORD *this)
{
  int result; // eax
  _DWORD *v3; // esi
  int v4; // eax

  result = MEMORY[0x87E2A0]; /*0x405fd0*/
  if ( MEMORY[0x87E2A0] ) /*0x405fde*/
  {
    if ( (int *)this->AudioController_field_0C == &MEMORY[0x87E294] ) /*0x405fe7*/
    {
      v3 = (_DWORD *)*this; /*0x405fe9*/
      if ( *this ) /*0x405fe9*/
      {
        result = this->AudioController_field_08; /*0x405fef*/
        if ( result == v3[9] ) /*0x405ff7*/
        {
          result = v3[78]; /*0x405ffc*/
          if ( this->AudioController_field_04 == result && (v3[6] & 0x20) == 0 ) /*0x40600a*/
          {
            v4 = v3[44]; /*0x40600c*/
            if ( v4 && v3 == *(_DWORD **)(v4 + 192) ) /*0x40601c*/
            {
              AudioFile::GetCallback(v3[44]); /*0x406020*/
              v3[6] |= 0x60u; /*0x40602b*/
              result = AudioStream::Stop(v3[44]); /*0x406034*/
              *this = 0; /*0x406039*/
              this->AudioController_field_08 = 0; /*0x40603b*/
              return result; /*0x406041*/
            }
            result = v3[6]; /*0x406042*/
            LOBYTE(result) = result | 0x60; /*0x406045*/
            v3[6] = result; /*0x406047*/
          }
        }
        *this = 0; /*0x40604a*/
      }
    }
  }
  this->AudioController_field_08 = 0; /*0x40604c*/
  return result; /*0x40603e*/
}


// ==== 0x00406060  Mixer::ReleaseChannel  this=AudioController  sig=csp ====
int __thiscall Mixer_ReleaseChannel(int **this)
{
  int result; // eax
  int *v3; // edi
  int v4; // eax

  result = MEMORY[0x87E2A0]; /*0x406060*/
  if ( !MEMORY[0x87E2A0] ) /*0x40606e*/
    goto LABEL_14; /*0x40606e*/
  if ( this->AudioController_field_0C != &MEMORY[0x87E294] ) /*0x406077*/
    goto LABEL_14; /*0x406077*/
  v3 = *this; /*0x406079*/
  if ( !*this ) /*0x406079*/
    goto LABEL_14; /*0x40607d*/
  result = v3[9]; /*0x40607f*/
  if ( this->AudioController_field_08 == (int *)result && this->AudioController_field_04 == (int *)v3[78] ) /*0x406094*/
  {
    if ( (*(_BYTE *)(result + 16) & 1) == 0 || *(_DWORD *)(result + 76) ) /*0x40609c*/
      goto LABEL_14; /*0x40609f*/
    if ( (v3[6] & 0x20) == 0 ) /*0x4060a5*/
    {
      v4 = v3[44]; /*0x4060a7*/
      if ( v4 && v3 == *(int **)(v4 + 192) ) /*0x4060b7*/
      {
        AudioFile::GetCallback(v3[44]); /*0x4060bb*/
        v3[6] |= 0x60u; /*0x4060c6*/
        result = AudioStream::Stop(v3[44]); /*0x4060cf*/
        *this = 0; /*0x4060d4*/
        this->AudioController_field_08 = 0; /*0x4060d6*/
        return result; /*0x4060dc*/
      }
      result = v3[6]; /*0x4060dd*/
      LOBYTE(result) = result | 0x60; /*0x4060e0*/
      v3[6] = result; /*0x4060e2*/
    }
  }
  *this = 0; /*0x4060e5*/
LABEL_14:
  this->AudioController_field_08 = 0; /*0x4060e7*/
  return result; /*0x4060d9*/
}


// ==== 0x004060F0  SetAudioSource  this=AudioController  sig=csp ====
void __fastcall SetAudioSource(AudioMixer *aP0, _DWORD *a1, int a3)
{
  if ( (char *)aP0->AudioMixer_field_0C == &stru_87C374.__pad_14B0[2672] ) /*0x4060f7*/
  {
    aP0->AudioMixer_field_00 = (int)a1; /*0x4060fd*/
    aP0->AudioMixer_field_08 = a3; /*0x406101*/
    if ( a1 ) /*0x406104*/
    {
      aP0->AudioMixer_field_04 = a1[78]; /*0x40610d*/
      if ( !a3 ) /*0x406113*/
        aP0->AudioMixer_field_08 = a1[9]; /*0x406118*/
      a1[158] = aP0; /*0x40611b*/
    }
  }
}


// ==== 0x00406130  AudioSource::Get  this=AudioController  sig=csp ====
int *__thiscall AudioSource_Get(int **this)
{
  int *result; // eax

  if ( !MEMORY[0x87E2A0] || this->AudioController_field_0C != &MEMORY[0x87E294] ) /*0x406140*/
    return 0; /*0x406166*/
  result = *this; /*0x406142*/
  if ( *this && (this->AudioController_field_08 != (int *)result[9] || this->AudioController_field_04 != (int *)result[78]) ) /*0x40615e*/
  {
    result = 0; /*0x406160*/
    *this = 0; /*0x406162*/
  }
  return result; /*0x406165*/
}


// ==== 0x00406170  VocClass::Check  this=VocClass  sig=csp ====
int __thiscall sub_406170(int this)
{
  if ( MEMORY[0x87E2A0] && *(int **)(this + 12) == &MEMORY[0x87E294] ) /*0x406180*/
    return *(_DWORD *)(this + 8); /*0x406182*/
  else
    return 0; /*0x406186*/
}


// ==== 0x004061D0  AudioMixer::PlayBuffer  this=AudioMixer  sig=csp ====
int __fastcall AudioMixer::PlayBuffer(_DWORD *a1, unsigned int a2)
{
  int v2; // eax
  _DWORD *v4; // esi

  v2 = a2; /*0x4061d6*/
  if ( a1[7] == 3 ) /*0x4061d8*/
  {
    if ( a2 > 0x4000 ) /*0x4061e0*/
      v2 = 0x4000; /*0x4061e2*/
    return RequestBufferMixer(a1 + 46, (unsigned int)(v2 * HIWORD(*(_DWORD *)(a1[9] + 28))) >> 14); /*0x406204*/
  }
  else
  {
    if ( a2 > 0x4000 ) /*0x40620f*/
      v2 = 0x4000; /*0x406211*/
    v4 = a1 + 46; /*0x40621f*/
    EndBufferMixer(a1 + 46, (unsigned int)(v2 * HIWORD(*(_DWORD *)(a1[9] + 28))) >> 14); /*0x406236*/
    return AudioMixer::PlaySample(v4); /*0x40623e*/
  }
}


// ==== 0x00406270  AudioMixer::RequestOrEndBuffer  this=AudioMixer  sig=ida-proto ====
int __fastcall AudioMixer::RequestOrEndBuffer(int a1, unsigned int a2)
{
  if ( *(_DWORD *)(a1 + 28) == 3 ) /*0x406276*/
  {
    if ( a2 > 0x4000 ) /*0x40627e*/
      a2 = 0x4000; /*0x406280*/
    return RequestBufferMixer((unsigned int *)(a1 + 264), a2); /*0x406293*/
  }
  else
  {
    if ( a2 > 0x4000 ) /*0x40629e*/
      a2 = 0x4000; /*0x4062a0*/
    return EndBufferMixer((int *)(a1 + 264), a2); /*0x4062b3*/
  }
}


// ==== 0x004062C0  ObjectClass::method_4062C0  this=ObjectClass  sig=csp ====
int __thiscall sub_4062C0(_DWORD *this, unsigned int a2, int a3)
{
  SetRateMixerSample(this + 46, 0x4000, a2, a3); /*0x4062da*/
  SetRateMixerSample(this + 56, 0x4000, a2, a3); /*0x4062ec*/
  return SetRateMixerSample(this + 66, 0x4000, a2, a3); /*0x406303*/
}


// ==== 0x00406310  ObjectClass::method  this=VocClass  sig=csp ====
int __thiscall sub_406310(_DWORD *this)
{
  return this->VocClass_field_90; /*0x406313*/
}


// ==== 0x004063B0  Audio::ProcessMixerOutput  this=CampaignClass  sig=csp ====
ObjectClass *__thiscall Audio::ProcessMixerOutput(char *Source)
{
  int *Next; // esi
  ObjectClass *v4; // esi

  if ( !*(_DWORD *)&stru_87C374.__pad_14B0[2684] ) /*0x4063bb*/
    return 0; /*0x4063be*/
  Next = (int *)AudioQueue::GetNext((int *)&stru_87C374.__pad_14B0[2604]); /*0x4063cc*/
  if ( Next ) /*0x4063d0*/
  {
    while ( _strcmpi(Source, Next + 27) ) /*0x4063e1*/
    {
      Next = (int *)AudioQueue::GetNextAlt(Next); /*0x4063ee*/
      if ( !Next ) /*0x4063f2*/
        goto LABEL_6; /*0x4063f2*/
    }
    if ( Next ) /*0x406487*/
      return (ObjectClass *)Next; /*0x40648d*/
  }
LABEL_6:
  v4 = (ObjectClass *)__2_YAPAXI_Z(0x148u); /*0x4063f4*/
  memset(v4, 0, 0x148u); /*0x40640a*/
  memset(v4, 0, 0x148u); /*0x406413*/
  DListNode::InitEmpty(v4); /*0x40641a*/
  *(_DWORD *)&v4->__pad_0[12] = 1; /*0x406427*/
  v4->uniqueId = 0; /*0x40642e*/
  v4->abstractFlags = 32; /*0x406435*/
  v4->ambientSoundController[3] = 3; /*0x40643c*/
  v4->ambientSoundController[1] = 2; /*0x406443*/
  v4->customSound_controller[0] = 10; /*0x40644a*/
  v4->customSound_controller[1] = 1045220557; /*0x406451*/
  SetupSampleAudioMixer(&v4->nextArrayIndex, (ObjectClass *)0x4000); /*0x406458*/
  strncpy((char *)&v4->health, Source, (IUnknown *)0x1F); /*0x406464*/
  HIBYTE(v4->parachute) = 0; /*0x406473*/
  InsertAfterDListNode((int)&stru_87C374.__pad_14B0[2604], v4); /*0x40647a*/
  return v4; /*0x4063bd*/
}


// ==== 0x004064A0  AddSampleVocClass  this=AbstractTypeClass  sig=csp ====
int __thiscall AddSampleVocClass(AbstractTypeClass *this)
{
  _BYTE *v1; // edx
  _BYTE *v3; // esi
  unsigned int v5; // eax

  v3 = v1; /*0x4064a4*/
  if ( this->q134 == 32 ) /*0x4064ad*/
    return 0; /*0x4064b3*/
  if ( MEMORY[0x87E2A0] && MEMORY[0x87E294] ) /*0x4064c5*/
  {
    while ( *v3 == 36 || *v3 == 35 ) /*0x4064cf*/
      ++v3; /*0x4064d1*/
    v5 = sub_4015C0(MEMORY[0x87E294], v3); /*0x4064d6*/
    if ( v5 != -1 ) /*0x4064de*/
    {
      *((_DWORD *)this + (this->q134)++ + 45) = v5; /*0x4064e6*/
      return 1; /*0x406501*/
    }
    Debug::Log(); /*0x406508*/
    *(_DWORD *)&this->__pad_0[12] = 0; /*0x406510*/
  }
  return 1; /*0x4064af*/
}


// ==== 0x00406520  AbstractTypeClass::sub_406520  this=AbstractTypeClass  sig=ida-proto ====
void __thiscall sub_406520(AbstractTypeClass *this)
{
  int v1; // edx

  this->q138 = v1; /*0x406520*/
}


// ==== 0x00406530  AbstractTypeClass::sub_406530  this=AbstractTypeClass  sig=ida-proto ====
void __thiscall sub_406530(AbstractTypeClass *this)
{
  int v1; // edx

  this->q13C = v1; /*0x406530*/
}


// ==== 0x00406540  AbstractTypeClass::sub_406540  this=AbstractTypeClass  sig=ida-proto ====
void __thiscall sub_406540(AbstractTypeClass *this)
{
  int v1; // edx

  *(_DWORD *)&this->UINameLabel[3] = v1; /*0x406540*/
}


// ==== 0x00406550  AbstractTypeClass::sub_406550  this=AbstractTypeClass  sig=ida-proto ====
int __thiscall sub_406550(AbstractTypeClass *this)
{
  int v1; // edx
  int *p_nextArrayIndex; // esi

  p_nextArrayIndex = &this->nextArrayIndex; /*0x406551*/
  EndBufferMixer(&this->nextArrayIndex, v1); /*0x406556*/
  return AudioMixer::PlaySample(p_nextArrayIndex); /*0x40655d*/
}


// ==== 0x00406570  sub_406570  this=AbstractTypeClass  sig=csp ====
int __thiscall sub_406570(AbstractTypeClass *this)
{
  int v1; // edx
  int result; // eax

  this->uniqueId = v1; /*0x406573*/
  result = 1; /*0x406576*/
  if ( (v1 & 0x20) != 0 ) /*0x40657b*/
  {
    if ( !this->q138 ) /*0x40657e*/
      this->q138 = 1; /*0x406589*/
  }
  else
  {
    this->q138 = 0; /*0x406591*/
  }
  if ( (v1 & 0x40) != 0 ) /*0x40659e*/
  {
    if ( !this->q13C ) /*0x4065a0*/
      this->q13C = 1; /*0x4065aa*/
  }
  else
  {
    this->q13C = 0; /*0x4065b1*/
  }
  return result; /*0x4065b0*/
}


// ==== 0x004065C0  AbstractTypeClass::sub_4065C0  this=AbstractTypeClass  sig=ida-proto ====
void __thiscall sub_4065C0(AbstractTypeClass *this)
{
  int v1; // edx

  this->abstractFlags = v1; /*0x4065c0*/
}


// ==== 0x004065D0  AbstractTypeClass::sub_4065D0  this=AbstractTypeClass  sig=ida-proto ====
void __thiscall sub_4065D0(AbstractTypeClass *this)
{
  int v1; // edx

  *(_DWORD *)&this->UINameLabel[11] = v1; /*0x4065d0*/
}


// ==== 0x004065E0  AbstractTypeClass::sub_4065E0  this=AbstractTypeClass  sig=ida-proto ====
void __thiscall sub_4065E0(AbstractTypeClass *this)
{
  int v1; // edx

  *(_DWORD *)&this->UINameLabel[19] = v1; /*0x4065e0*/
}


// ==== 0x004065F0  ObjectClass::method_4065F0  this=AbstractTypeClass  sig=csp ====
int __thiscall sub_4065F0(AbstractTypeClass *this, int a2)
{
  *(_DWORD *)&this->UINameLabel[23] = a2; /*0x4065f4*/
  return a2; /*0x4065f7*/
}


// ==== 0x00406600  sub_406600  this=AbstractTypeClass  sig=csp ====
int __thiscall sub_406600(AbstractTypeClass *this)
{
  int v1; // edx
  int v3; // [esp+4h] [ebp+4h]

  *(_DWORD *)&this->UINameLabel[27] = v1; /*0x406604*/
  *(_DWORD *)&this->UINameLabel[31] = v3; /*0x406607*/
  return v3; /*0x40660a*/
}


// ==== 0x00406610  sub_406610  this=AbstractTypeClass  sig=csp ====
int __thiscall sub_406610(AbstractTypeClass *this)
{
  void *v1; // edx
  int v3; // [esp+4h] [ebp+4h]

  this->UIName = v1; /*0x406614*/
  *(_DWORD *)this->Name = v3; /*0x406617*/
  return v3; /*0x40661a*/
}


// ==== 0x00406620  AbstractTypeClass::sub_406620  this=AbstractTypeClass  sig=ida-proto ====
int __thiscall sub_406620(AbstractTypeClass *this)
{
  int v1; // edx
  int result; // eax

  if ( v1 <= 100 ) /*0x406623*/
  {
    if ( v1 >= 0 ) /*0x406630*/
    {
      *(_DWORD *)&this->Name[4] = v1; /*0x406638*/
    }
    else
    {
      *(_DWORD *)&this->Name[4] = 0; /*0x406634*/
      return 0; /*0x406632*/
    }
  }
  else
  {
    *(_DWORD *)&this->Name[4] = 100; /*0x40662a*/
    return 100; /*0x406625*/
  }
  return result; /*0x40662d*/
}


// ==== 0x00406640  AbstractTypeClass::sub_406640  this=AbstractTypeClass  sig=ida-proto ====
void __thiscall sub_406640(AbstractTypeClass *this)
{
  int v1; // edx

  *(_DWORD *)&this->UINameLabel[15] = v1; /*0x406640*/
}


// ==== 0x00406650  AudioMixer::SetVolume  this=AudioMixer  sig=csp ====
int __thiscall AudioMixer::SetVolume(int this)
{
  int result; // eax

  result = 1; /*0x406653*/
  if ( (*(_BYTE *)(this + 16) & 1) == 0 || *(_DWORD *)(this + 76) ) /*0x40665c*/
    return 0; /*0x406663*/
  return result; /*0x406665*/
}


// ==== 0x00406670  sub_406670  this=char*  sig=csp ====
int *__fastcall sub_406670(void *a1, int a2)
{
  int *result; // eax
  int *v5; // esi
  int *v6; // edi
  __int64 v7; // rax

  result = *(int **)&stru_87C374.__pad_14B0[2684]; /*0x406670*/
  if ( *(_DWORD *)&stru_87C374.__pad_14B0[2684] ) /*0x40667e*/
  {
    result = (int *)AudioQueue::GetNext((int *)&stru_87C374.__pad_14B0[2604]); /*0x406689*/
    v5 = result; /*0x40668e*/
    if ( result ) /*0x406692*/
    {
      while ( 1 ) /*0x40669d*/
      {
        result = (int *)_strcmpi(a1, v5 + 27); /*0x40669d*/
        if ( !result ) /*0x4066a7*/
          break; /*0x4066a7*/
        result = (int *)AudioQueue::GetNextAlt(v5); /*0x4066ab*/
        v5 = result; /*0x4066b0*/
        if ( !result ) /*0x4066b4*/
          return result; /*0x4066b4*/
      }
      if ( v5 ) /*0x4066bc*/
      {
        result = AudioPool::ProcessQueue(v5); /*0x4066c0*/
        v6 = result; /*0x4066c5*/
        if ( result ) /*0x4066c9*/
        {
          v7 = ((__int64)a2 << 14) / 256; /*0x4066e5*/
          if ( (unsigned int)v7 > 0x4000 ) /*0x4066ef*/
            LODWORD(v7) = 0x4000; /*0x4066f1*/
          EndBufferMixer(v6 + 46, (unsigned int)(v7 * HIWORD(*(_DWORD *)(v6[9] + 28))) >> 14); /*0x406715*/
          return (int *)AudioMixer::PlaySample(v6 + 46); /*0x40671c*/
        }
      }
    }
  }
  return result; /*0x4066b6*/
}


// ==== 0x00406730  sub_406730  this=-  sig=ida-proto ====
void sub_406730()
{
  dword_816108 = 0; /*0x406730*/
}


// ==== 0x00406740  ___setargv  this=-  sig=ida-proto ====
void __setargv()
{
  dword_816108 = 1; /*0x406740*/
}


// ==== 0x00406750  sub_406750  this=-  sig=ida-proto ====
int sub_406750()
{
  return dword_816108; /*0x406755*/
}


// ==== 0x00406760  ObjectClass::method  this=ObjectClass  sig=csp ====
void *__thiscall sub_406760(void (__thiscall *this)(char *))
{
  void *result; // eax
  char Buffer[200]; // [esp+4h] [ebp-C8h] BYREF

  result = MEMORY[0x87E298]; /*0x406760*/
  if ( MEMORY[0x87E298] ) /*0x406770*/
  {
    sprintf(Buffer, MEMORY[0x81624C], MEMORY[0x87E28C], MEMORY[0x87E290]); /*0x406789*/
    this(Buffer); /*0x406795*/
    sprintf(Buffer, stru_81622C, MEMORY[0xB1D3A8], MEMORY[0xB1D3AC]); /*0x4067ae*/
    return (void *)((int (__thiscall *)(char *))this)(Buffer); /*0x4067ba*/
  }
  return result; /*0x4067bc*/
}


// ==== 0x004067D0  sub_4067D0  this=-  sig=csp ====
BOOL __fastcall sub_4067D0(char *a1, _DWORD *a2)
{
  const void **v4; // esi
  const void *v5; // eax

  v4 = (const void **)dword_816018; /*0x4067de*/
  if ( dword_816018[0] ) /*0x4067e3*/
  {
    do /*0x4067fd*/
    {
      if ( !_strcmpi(a1, *v4) ) /*0x4067e9*/
        break; /*0x4067f3*/
      v5 = v4[2]; /*0x4067f5*/
      v4 += 2; /*0x4067f8*/
    }
    while ( v5 ); /*0x4067fd*/
  }
  if ( a2 ) /*0x406801*/
    *a2 = v4[1]; /*0x406806*/
  return *v4 != 0; /*0x40680e*/
}


// ==== 0x00406820  sub_406820  this=-  sig=csp ====
BOOL __fastcall sub_406820(_DWORD *a1, char *a2)
{
  const void **v4; // esi
  _UNKNOWN **v5; // eax

  v4 = (const void **)&off_8160C0; /*0x40682e*/
  if ( off_8160C0 ) /*0x406833*/
  {
    do /*0x40684d*/
    {
      if ( !_strcmpi(a2, *v4) ) /*0x406839*/
        break; /*0x406843*/
      v5 = (_UNKNOWN **)v4[2]; /*0x406845*/
      v4 += 2; /*0x406848*/
    }
    while ( v5 ); /*0x40684d*/
  }
  if ( a1 ) /*0x406851*/
    *a1 |= (unsigned int)v4[1]; /*0x40685a*/
  return *v4 != 0; /*0x406862*/
}


// ==== 0x00406870  Audio::ApplyFormatFlags  this=Audio  sig=csp ====
BOOL __fastcall Audio::ApplyFormatFlags(int *a1, char *a2)
{
  const void **v4; // esi
  const void *v5; // eax
  const void *v6; // eax
  int v7; // eax

  v4 = (const void **)dword_816048; /*0x40687e*/
  if ( dword_816048[0] ) /*0x406883*/
  {
    do /*0x40689d*/
    {
      if ( !_strcmpi(a2, *v4) ) /*0x406889*/
        break; /*0x406893*/
      v5 = v4[2]; /*0x406895*/
      v4 += 2; /*0x406898*/
    }
    while ( v5 ); /*0x40689d*/
  }
  if ( a1 ) /*0x4068a1*/
  {
    v6 = v4[1]; /*0x4068a3*/
    if ( ((unsigned __int8)v6 & 0x60) != 0 ) /*0x4068a8*/
    {
      v7 = *a1; /*0x4068aa*/
      LOBYTE(v7) = *a1 & 0x9F; /*0x4068ac*/
    }
    else
    {
      if ( (BYTE1(v6) & 0xC) == 0 ) /*0x4068b3*/
      {
LABEL_10:
        *a1 |= (unsigned int)v4[1]; /*0x4068bc*/
        return *v4 != 0; /*0x4068c3*/
      }
      v7 = *a1; /*0x4068b5*/
      BYTE1(v7) = BYTE1(*a1) & 0xF3; /*0x4068b7*/
    }
    *a1 = v7; /*0x4068ba*/
    goto LABEL_10; /*0x4068ba*/
  }
  return *v4 != 0; /*0x4068cb*/
}


// ==== 0x004068E0  Debug::Log  this=WinModemClass  sig=csp ====
void Debug_Log()
{
  ; /*0x4068e0*/
}


// ==== 0x004068F0  Array::ForEach  this=IUnknown  sig=csp ====
int __stdcall Array_ForEach(int a1, int a2, int a3, int (__thiscall *a4)(int))
{
  int result; // eax
  int v6; // edi

  result = a3 - 1; /*0x4068f4*/
  if ( a3 - 1 >= 0 ) /*0x4068f5*/
  {
    v6 = a3; /*0x406907*/
    do /*0x406911*/
    {
      result = a4(a1); /*0x40690c*/
      a1 += a2; /*0x40690e*/
      --v6; /*0x406910*/
    }
    while ( v6 ); /*0x406911*/
  }
  return result; /*0x406917*/
}


// ==== 0x00406920  sub_406920  this=-  sig=ida-proto ====
void sub_406920()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x40692c*/
  MEMORY[0x87E448] = Math::Sqrt(v0 + v0); /*0x40693e*/
}


// ==== 0x00406950  sub_406950  this=-  sig=ida-proto ====
void sub_406950()
{
  MEMORY[0x87E698] = MEMORY[0x87E448] / 60.0; /*0x40695c*/
}


// ==== 0x00406970  sub_406970  this=-  sig=ida-proto ====
void sub_406970()
{
  MEMORY[0x87E680] = 1.0 / MEMORY[0x87E698]; /*0x40697c*/
}


// ==== 0x00406990  sub_406990  this=-  sig=ida-proto ====
void sub_406990()
{
  MEMORY[0x87E678] = 0.0174532925199433 * 45.0; /*0x40699c*/
}


// ==== 0x004069B0  sub_4069B0  this=-  sig=ida-proto ====
void sub_4069B0()
{
  MEMORY[0x87E4D0] = 0.0174532925199433 * 60.0; /*0x4069bc*/
}


// ==== 0x004069D0  sub_4069D0  this=-  sig=ida-proto ====
void sub_4069D0()
{
  MEMORY[0x87E2B8] = 0.0174532925199433 * 90.0; /*0x4069dc*/
}


// ==== 0x004069F0  sub_4069F0  this=-  sig=ida-proto ====
__int64 sub_4069F0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x87E2B8] - MEMORY[0x87E4D0]); /*0x406a02*/
  result = Math::RoundToInt(v0 * MEMORY[0x87E448] * 0.5); /*0x406a16*/
  MEMORY[0x87E720] = result; /*0x406a1b*/
  return result; /*0x406a20*/
}


// ==== 0x00406A30  sub_406A30  this=-  sig=ida-proto ====
void sub_406A30()
{
  MEMORY[0x87E4D8] = Math::ArcTan((double)MEMORY[0x87E720] * 0.00390625); /*0x406a47*/
}


// ==== 0x00406A60  sub_406A60  this=-  sig=ida-proto ====
void sub_406A60()
{
  MEMORY[0x87E570] = Math::ArcTan((double)(2 * MEMORY[0x87E720]) / MEMORY[0x87E448]); /*0x406a82*/
}


// ==== 0x00406A90  sub_406A90  this=-  sig=ida-proto ====
__int64 sub_406A90()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x87E720]) + 0.5); /*0x406aab*/
  MEMORY[0x87E694] = result; /*0x406ab0*/
  return result; /*0x406ab6*/
}


// ==== 0x00406AC0  sub_406AC0  this=-  sig=ida-proto ====
int sub_406AC0()
{
  MEMORY[0x87E440] = 0; /*0x406ac2*/
  MEMORY[0x87E442] = 0; /*0x406ac8*/
  return 0; /*0x406ace*/
}


// ==== 0x00406AD0  sub_406AD0  this=-  sig=ida-proto ====
int sub_406AD0()
{
  MEMORY[0x87E560] = 0; /*0x406ad2*/
  MEMORY[0x87E564] = 0; /*0x406ad7*/
  MEMORY[0x87E568] = 0; /*0x406adc*/
  return 0; /*0x406ae1*/
}


// ==== 0x00406AF0  sub_406AF0  this=-  sig=ida-proto ====
int sub_406AF0()
{
  MEMORY[0x87E690] = 0; /*0x406af5*/
  MEMORY[0x87E688] = 128; /*0x406aff*/
  MEMORY[0x87E68C] = 128; /*0x406b04*/
  return 128; /*0x406b09*/
}


// ==== 0x00406B10  ObjectClass::InitializeAudioSubsystem  this=ObjectClass  sig=csp ====
int __thiscall InitializeAudioSubsystem(void *this)
{
  int *AudioChannel; // eax
  _DWORD *v3; // eax
  char v4; // bl
  _DWORD *v5; // eax
  _DWORD *v6; // eax
  _DWORD v8[8]; // [esp+8h] [ebp-8Ch] BYREF
  _DWORD v9[22]; // [esp+28h] [ebp-6Ch] BYREF
  _BYTE v10[12]; // [esp+80h] [ebp-14h] BYREF
  int v11; // [esp+8Ch] [ebp-8h]

  sub_409360(); /*0x406b1a*/
  AudioMixer::Init(MEMORY[0x87E2C0]); /*0x406b24*/
  MEMORY[0x87E73C] = MEMORY[0x87E2C0]; /*0x406b2e*/
  AudioMixer::Init(MEMORY[0x87E4E0]); /*0x406b38*/
  MEMORY[0x87E744] = MEMORY[0x87E4E0]; /*0x406b42*/
  AudioMixer::Init(MEMORY[0x87E578]); /*0x406b4c*/
  MEMORY[0x87E740] = MEMORY[0x87E578]; /*0x406b56*/
  AudioMixer::Init(MEMORY[0x87E450]); /*0x406b60*/
  MEMORY[0x87E748] = MEMORY[0x87E450]; /*0x406b6a*/
  AudioMixer::Init(MEMORY[0x87E340]); /*0x406b74*/
  MEMORY[0x87E74C] = MEMORY[0x87E340]; /*0x406b7e*/
  AudioMixer::Init(MEMORY[0x87E6A0]); /*0x406b88*/
  MEMORY[0x87E754] = MEMORY[0x87E6A0]; /*0x406b92*/
  AudioMixer::Init(MEMORY[0x87E5F8]); /*0x406b9c*/
  MEMORY[0x87E750] = MEMORY[0x87E5F8]; /*0x406ba6*/
  AudioMixer::Init(MEMORY[0x87E3C0]); /*0x406bb0*/
  MEMORY[0x87E758] = MEMORY[0x87E3C0]; /*0x406bb7*/
  if ( this ) /*0x406bc3*/
  {
    sub_402940(); /*0x406bc9*/
    AudioQueue::CreateNode((int)off_816514); /*0x406bd4*/
    Struct::ZeroInit32(v8); /*0x406bdd*/
    v8[2] = 22050; /*0x406beb*/
    v8[1] = 0; /*0x406bf3*/
    v8[3] = 2; /*0x406bf7*/
    v8[4] = 2; /*0x406bfb*/
    v8[0] = 4; /*0x406bff*/
    sub_4085B0(v8); /*0x406c07*/
    AudioChannel = CreateAudioChannel(-1, v8); /*0x406c13*/
    MEMORY[0x87E728] = AudioChannel; /*0x406c1a*/
    if ( !AudioChannel || AudioQueue::PreallocateChannels(AudioChannel, 16) != 16 ) /*0x406c34*/
    {
LABEL_11:
      this = 0; /*0x406cf6*/
      goto LABEL_12; /*0x406cf6*/
    }
    MEMORY[0x87E73C] = (char *)MEMORY[0x87E728] + 104; /*0x406c4c*/
    v3 = CCFileClass::Construct(v9, aAudiomdMix); /*0x406c51*/
    v4 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v3 + 20))(v3, 0); /*0x406c65*/
    v9[0] = &CCFileClass::`vftable'; /*0x406c67*/
    v11 = 0; /*0x406c6f*/
    Vector::Clear((int)v10); /*0x406c76*/
    v9[0] = &off_7E1668; /*0x406c7f*/
    BufferIOFileClass::Dtor(v9); /*0x406c87*/
    if ( v4 ) /*0x406c91*/
    {
      v5 = (_DWORD *)__2_YAPAXI_Z(40); /*0x406c93*/
      if ( v5 ) /*0x406c9d*/
      {
        MEMORY[0x87E734] = MixFileClass::FromFile(v5, aAudiomdMix, (int)MEMORY[0x886980]); /*0x406cb0*/
        goto LABEL_10; /*0x406cb5*/
      }
    }
    else
    {
      v6 = (_DWORD *)__2_YAPAXI_Z(40); /*0x406cb7*/
      if ( v6 ) /*0x406cc1*/
      {
        MEMORY[0x87E734] = MixFileClass::FromFile(v6, aAudioMix, (int)MEMORY[0x886980]); /*0x406cd4*/
        goto LABEL_10; /*0x406cd9*/
      }
    }
    MEMORY[0x87E734] = 0; /*0x406cdb*/
LABEL_10:
    MEMORY[0x87E724] = LoadAudioFile(aAudio, 0); /*0x406ce1*/
    if ( MEMORY[0x87E724] ) /*0x406cf4*/
      goto LABEL_12; /*0x406cf4*/
    goto LABEL_11; /*0x406cf4*/
  }
LABEL_12:
  sub_407550(); /*0x406cf8*/
  if ( !sub_403ED0((int)MEMORY[0x87E728], (int)MEMORY[0x87E724]) ) /*0x406d09*/
    this = 0; /*0x406d12*/
  Audio_Init_752290(); /*0x406d14*/
  Audio_Init_752AD0(); /*0x406d19*/
  MEMORY[0x87E72C] = this; /*0x406d1e*/
  return 1; /*0x406d29*/
}


// ==== 0x00406D40  Audio::Shutdown  this=Audio  sig=csp ====
void sub_406D40()
{
  if ( MEMORY[0x87E728] ) /*0x406d4b*/
    AudioQueue::StopAllVoices((int)MEMORY[0x87E728], 1); /*0x406d52*/
  AudioStream::CleanupChannels(); /*0x406d57*/
  AudioQueue::HaltVoices(); /*0x406d5c*/
  Audio_Cleanup(); /*0x406d61*/
  Audio_Cleanup_752B40(); /*0x406d66*/
  sub_403FA0(); /*0x406d6b*/
  sub_407780(); /*0x406d70*/
  if ( MEMORY[0x87E724] ) /*0x406d7d*/
  {
    sub_401580((void **)MEMORY[0x87E724]); /*0x406d7f*/
    MEMORY[0x87E724] = 0; /*0x406d84*/
  }
  if ( MEMORY[0x87E734] ) /*0x406d92*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x87E734])(MEMORY[0x87E734], 1); /*0x406d98*/
    MEMORY[0x87E734] = 0; /*0x406d9a*/
  }
  if ( MEMORY[0x87E738] ) /*0x406da8*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0x87E738])(MEMORY[0x87E738], 1); /*0x406dae*/
    MEMORY[0x87E738] = 0; /*0x406db0*/
  }
  if ( MEMORY[0x87E728] ) /*0x406dbe*/
  {
    AudioStream::DestroyAll(MEMORY[0x87E728]); /*0x406dc0*/
    MEMORY[0x87E728] = 0; /*0x406dc5*/
  }
  sub_402990(); /*0x406dcc*/
}


// ==== 0x00406DE0  sub_406DE0  this=-  sig=ida-proto ====
BOOL sub_406DE0()
{
  int *AudioChannel; // eax
  _DWORD v2[8]; // [esp+0h] [ebp-20h] BYREF

  AudioQueue::CreateNode((int)off_816514); /*0x406de9*/
  Struct::ZeroInit32(v2); /*0x406df2*/
  v2[2] = 22050; /*0x406e00*/
  v2[1] = 0; /*0x406e08*/
  v2[3] = 2; /*0x406e10*/
  v2[4] = 2; /*0x406e14*/
  v2[0] = 4; /*0x406e18*/
  sub_4085B0(v2); /*0x406e20*/
  AudioChannel = CreateAudioChannel(-1, v2); /*0x406e2c*/
  MEMORY[0x87E728] = AudioChannel; /*0x406e33*/
  return AudioChannel && AudioQueue::PreallocateChannels(AudioChannel, 16) == 16; /*0x406e50*/
}


// ==== 0x00406E80  AudioMixer::Shutdown  this=AudioMixer  sig=ida-proto ====
int AudioMixer_Shutdown()
{
  if ( MEMORY[0x87E728] ) /*0x406e88*/
    AudioQueue::StopAllVoices(MEMORY[0x87E728], 1); /*0x406e8f*/
  return AudioStream::CleanupChannels();
}


// ==== 0x00406EA0  sub_406EA0  this=-  sig=ida-proto ====
int sub_406EA0()
{
  if ( MEMORY[0x87E728] ) /*0x406ea8*/
    AudioQueue::DeactivateAllMatching((int)MEMORY[0x87E728], 1); /*0x406eaf*/
  AudioStream::UpdateTimers(); /*0x406eb4*/
  return sub_751040();
}


// ==== 0x00406EC0  sub_406EC0  this=-  sig=ida-proto ====
int sub_406EC0()
{
  int i; // esi
  int result; // eax

  sub_751080(); /*0x406ec0*/
  result = AudioStream::UpdateCountdowners(); /*0x406ec5*/
  if ( MEMORY[0x87E728] ) /*0x406ed2*/
  {
    result = AudioQueue::GetNext((int *)MEMORY[0x87E728] + 62); /*0x4037ca*/
    for ( i = result; result; i = result ) /*0x4037d3*/
    {
      if ( (*(_BYTE *)(i + 164) & 4) != 0 && *(_DWORD *)(i + 12) == 1 ) /*0x4037e6*/
        result = AudioChannel::ActivatePlay((_DWORD *)i); /*0x4037ea*/
      if ( !i ) /*0x4037f1*/
        break; /*0x4037f1*/
      result = AudioQueue::GetNextAlt((int *)i); /*0x4037f5*/
    }
  }
  return result; /*0x406ede*/
}


// ==== 0x00406EE0  sub_406EE0  this=-  sig=ida-proto ====
int sub_406EE0()
{
  if ( MEMORY[0x87E728] ) /*0x406ee8*/
    AudioQueue::StopAllVoices((int)MEMORY[0x87E728], 1); /*0x406eef*/
  AudioStream::CleanupChannels(); /*0x406ef4*/
  return AudioQueue::HaltVoices();
}


// ==== 0x00406F00  sub_406F00  this=-  sig=csp ====
int sub_406F00()
{
  int result; // eax

  if ( !ChronoScreen::IsActive() ) /*0x406f00*/
  {
    if ( MEMORY[0x87E728] ) /*0x406f11*/
      AudioQueue::DeactivateAllMatching((int)MEMORY[0x87E728], 1); /*0x406f18*/
    AudioStream::UpdateTimers(); /*0x406f1d*/
    sub_751040(); /*0x406f22*/
  }
  result = AudioFrame::CounterInc(); /*0x406f27*/
  if ( MEMORY[0xB1D4D8] ) /*0x753508*/
    return AudioFrame::ProcessAudioFrame((int)MEMORY[0xB1D4D8]); /*0x75350a*/
  return result; /*0x75350f*/
}


// ==== 0x00406F40  sub_406F40  this=-  sig=ida-proto ====
int sub_406F40()
{
  int i; // esi
  int result; // eax

  ____F_m_badAllocExceptionPtr___ExceptionPtr__0V__shared_ptr___ExceptionPtr___tr1_std__A__YAXXZ_1(); /*0x406f40*/
  AudioMixer::Pump(); /*0x406f45*/
  sub_751080(); /*0x406f4a*/
  result = AudioStream::UpdateCountdowners(); /*0x406f4f*/
  if ( MEMORY[0x87E728] ) /*0x406f5c*/
  {
    result = AudioQueue::GetNext((int *)MEMORY[0x87E728] + 62); /*0x4037ca*/
    for ( i = result; result; i = result ) /*0x4037d3*/
    {
      if ( (*(_BYTE *)(i + 164) & 4) != 0 && *(_DWORD *)(i + 12) == 1 ) /*0x4037e6*/
        result = AudioChannel::ActivatePlay((_DWORD *)i); /*0x4037ea*/
      if ( !i ) /*0x4037f1*/
        break; /*0x4037f1*/
      result = AudioQueue::GetNextAlt((int *)i); /*0x4037f5*/
    }
  }
  return result; /*0x406f68*/
}


// ==== 0x00406F70  UpdateAudioVideo  this=-  sig=csp ====
void *AudioVideo_Update()
{
  void *result; // eax
  __int64 v1; // kr00_8

  result = (void *)unk_87E75C; /*0x406f70*/
  if ( !unk_87E75C ) /*0x406f7a*/
  {
    result = MEMORY[0x87E728]; /*0x406f7c*/
    if ( MEMORY[0x87E728] ) /*0x406f83*/
    {
      unk_87E75C = 1; /*0x406f87*/
      v1 = Audio::Callback(); /*0x406f9e*/
      result = (void *)(v1 - unk_87E760); /*0x406fa6*/
      if ( (unsigned __int64)(v1 - unk_87E760) > 0x21 ) /*0x406fb5*/
      {
        ProcessAudioFrame(); /*0x406fb7*/
        UpdateVocClass(); /*0x406fbc*/
        UpdateThemes(); /*0x406fc1*/
        Movie::Update(&MEMORY[0xA83D10]); /*0x406fcb*/
        result = (void *)Audio_Update(); /*0x406fd0*/
        unk_87E760 = v1; /*0x406fd5*/
      }
      unk_87E75C = 0; /*0x406fe2*/
    }
  }
  return result; /*0x406fed*/
}


// ==== 0x00407000  Audio::IsSoundEnabled  this=Audio  sig=csp ====
BOOL Audio::IsSoundEnabled()
{
  return MEMORY[0x87E728] != 0; /*0x40700d*/
}


// ==== 0x00407010  Audio::GetEnabled  this=Audio  sig=csp ====
void *Audio_GetEnabled()
{
  return MEMORY[0x87E728]; /*0x407015*/
}


// ==== 0x00407020  sub_407020  this=-  sig=ida-proto ====
int sub_407020()
{
  int result; // eax

  result = MEMORY[0x87E730]; /*0x407020*/
  if ( !MEMORY[0x87E730] ) /*0x407027*/
    result = sub_40A940(); /*0x407029*/
  ++MEMORY[0x87E730]; /*0x40702e*/
  return result; /*0x407034*/
}


// ==== 0x00407040  sub_407040  this=-  sig=ida-proto ====
int __fastcall sub_407040(int a1)
{
  int result; // eax
  int v2; // [esp+Ch] [ebp-4h] BYREF

  result = MEMORY[0x87E730]; /*0x407040*/
  if ( MEMORY[0x87E730] ) /*0x407047*/
  {
    result = MEMORY[0x87E730] - 1; /*0x407049*/
    MEMORY[0x87E730] = result; /*0x40704a*/
    if ( !result ) /*0x40704f*/
    {
      v2 = a1; /*0x40a950*/
      result = MEMORY[0x87E8A0]; /*0x40a951*/
      if ( MEMORY[0x87E8A0] ) /*0x40a958*/
      {
        result = (*(int (__stdcall **)(int, int *))(*(_DWORD *)MEMORY[0x87E8A0] + 36))(MEMORY[0x87E8A0], &v2); /*0x40a962*/
        if ( (v2 & 2) != 0 ) /*0x40a96a*/
          result = (*(int (__stdcall **)(int))(*(_DWORD *)MEMORY[0x87E8A0] + 80))(MEMORY[0x87E8A0]); /*0x40a974*/
        if ( (v2 & 1) == 0 ) /*0x40a97c*/
          return (*(int (__stdcall **)(int, _DWORD, _DWORD, int))(*(_DWORD *)MEMORY[0x87E8A0] + 48))( /*0x40a98c*/
                   MEMORY[0x87E8A0],
                   0,
                   0,
                   1);
      }
    }
  }
  return result; /*0x407056*/
}


// ==== 0x00407060  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_407060(unsigned int *this)
{
  return RequestBufferMixer(this, 0x4000);
}


// ==== 0x00407070  Audio::GetFlag  this=Audio  sig=csp ====
int __thiscall Audio::GetFlag(unsigned int *this)
{
  return RequestBufferMixer(this, 0);
}


// ==== 0x00407080  j_Mixer_RequestBuffer  this=-  sig=ida-proto ====
// attributes: thunk
int __fastcall j_Mixer_RequestBuffer(unsigned int *a1, int a2)
{
  return RequestBufferMixer(a1, a2);
}


// ==== 0x004070B0  Audio::WaitForCallback  this=Audio  sig=csp ====
int __thiscall Audio::WaitForCallback(int this)
{
  int v2; // ebx
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // kr00_8

  v2 = Audio::Callback(); /*0x4070bd*/
  LODWORD(v3) = *(_DWORD *)(this + 4); /*0x4070c9*/
  v4 = *(_QWORD *)(this + 16) + __PAIR64__(HIDWORD(v3), v2); /*0x4070cc*/
  if ( (_DWORD)v3 != *(_DWORD *)(this + 8) ) /*0x4070d0*/
  {
    do /*0x4070ee*/
    {
      LODWORD(v3) = Audio::Callback(); /*0x4070d2*/
      if ( v3 >= v4 ) /*0x4070df*/
        break; /*0x4070df*/
      Event::Dispatch(); /*0x4070e1*/
      LODWORD(v3) = *(_DWORD *)(this + 8); /*0x4070e9*/
    }
    while ( *(_DWORD *)(this + 4) != (_DWORD)v3 ); /*0x4070ee*/
  }
  return v3; /*0x4070f0*/
}


// ==== 0x00407100  SetupSampleAudioMixer  this=ObjectClass  sig=csp ====
int __fastcall SetupSampleAudioMixer(int *a0, ObjectClass *aP1)
{
  int v4; // eax
  int v5; // ecx
  int v6; // edx

  *a0 = 0; /*0x407106*/
  v4 = Audio::Callback(); /*0x40710c*/
  v5 = *a0; /*0x407111*/
  a0[6] = v4; /*0x407113*/
  a0[4] = 1000; /*0x407119*/
  *a0 = v5 | 1; /*0x407123*/
  a0[2] = (_DWORD)aP1 << 16; /*0x407125*/
  a0[7] = v6; /*0x407128*/
  a0[3] = 1073741; /*0x40712b*/
  a0[5] = 0; /*0x407132*/
  return AudioMixer::PlaySample(a0); /*0x40713b*/
}


// ==== 0x00407150  EndBufferMixer  this=Audio  sig=csp ====
int __fastcall Mixer_EndBuffer(int *a1, int a2)
{
  int result; // eax

  result = *a1; /*0x407150*/
  LOBYTE(result) = *a1 | 1; /*0x407152*/
  *a1 = result; /*0x407157*/
  a1[2] = a2 << 16; /*0x407159*/
  return result; /*0x40715c*/
}


// ==== 0x00407160  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_407160(int *this)
{
  int result; // eax

  result = *this; /*0x407160*/
  LOBYTE(result) = *this | 1; /*0x407162*/
  *this = result; /*0x407164*/
  return result; /*0x407166*/
}


// ==== 0x00407170  RequestBufferMixer  this=Audio  sig=csp ====
int __fastcall Mixer_RequestBuffer(unsigned int *a1, int a2)
{
  unsigned int v4; // edx
  int result; // eax
  unsigned int v6; // ecx
  unsigned int v7; // edx

  v4 = *a1; /*0x407176*/
  result = a1[2]; /*0x407178*/
  v6 = a1[1]; /*0x40717b*/
  *a1 = v4 & 0xFFFFFFFE; /*0x407183*/
  if ( result == v6 ) /*0x407185*/
  {
    result = Audio::Callback(); /*0x407187*/
    a1[6] = result; /*0x40718c*/
    a1[7] = v7; /*0x40718f*/
  }
  a1[2] = a2 << 16; /*0x407195*/
  return result; /*0x407198*/
}


// ==== 0x004071A0  SetRateMixerSample  this=ObjectClass  sig=csp ====
int __fastcall SetRateMixerSample(_DWORD *a0, int a2, unsigned int a3, ObjectClass *aP3)
{
  a0[4] = a3; /*0x4071ae*/
  a0[3] = (a2 << 16) / a3; /*0x4071b2*/
  a0[5] = aP3; /*0x4071b9*/
  return (int)aP3->__pad_0; /*0x4071b1*/
}


// ==== 0x004071C0  AudioMixer::PlaySample  this=Audio  sig=csp ====
int __thiscall AudioMixer_PlaySample(_DWORD *this)
{
  int v2; // eax
  int v3; // ecx
  int v4; // ebx
  int v5; // eax
  int v7; // eax
  unsigned int v8; // edi
  unsigned int v9; // ebp
  int v10; // ecx
  unsigned int v11; // eax
  int v12; // ecx
  unsigned int v13; // edi
  unsigned __int64 v14; // kr00_8
  unsigned int v15; // edx
  int v16; // eax
  int v17; // eax
  int v18; // ecx
  int v19; // eax
  int v20; // ecx

  v2 = *(this + 2); /*0x4071c7*/
  v3 = this->__pad_010; /*0x4071ca*/
  v4 = v2 - v3; /*0x4071cf*/
  if ( v2 == v3 ) /*0x4071d1*/
    return 0; /*0x40729e*/
  if ( (*(_BYTE *)this & 1) != 0 ) /*0x4071da*/
  {
    this->__pad_010 = v2; /*0x4071dc*/
    v5 = *this; /*0x4071df*/
    LOBYTE(v5) = *this | 2; /*0x4071e1*/
    *this = v5; /*0x4071e3*/
    return 1; /*0x4071e6*/
  }
  else
  {
    v7 = Audio::Callback(); /*0x4071f2*/
    v8 = this->__pad_018; /*0x4071f7*/
    v9 = *(this + 7); /*0x4071fa*/
    v10 = v7; /*0x4071fd*/
    this->__pad_018 = v7; /*0x4071ff*/
    v11 = this->Audio_field_0x14; /*0x407202*/
    *(this + 7) = v15; /*0x407209*/
    v14 = __PAIR64__(v15, v10) - __PAIR64__(v9, v8); /*0x407205*/
    v13 = (__PAIR64__(v15, v10) - __PAIR64__(v9, v8)) >> 32; /*0x407205*/
    v12 = v14; /*0x407205*/
    if ( __PAIR64__(v13, v14) > __PAIR64__(v11, this->__pad_010) ) /*0x40721b*/
      v12 = this->__pad_010; /*0x40721d*/
    v16 = v12 * this->Audio_field_0xC; /*0x407226*/
    if ( v4 >= 0 ) /*0x40722b*/
    {
      if ( v16 <= v4 ) /*0x407269*/
      {
        v20 = v16 + this->__pad_010; /*0x407287*/
        v19 = *this; /*0x407289*/
        LOBYTE(v19) = *this | 2; /*0x40728b*/
        this->__pad_010 = v20; /*0x40728d*/
      }
      else
      {
        this->__pad_010 += v4; /*0x407270*/
        v19 = *this; /*0x407273*/
        LOBYTE(v19) = *this | 2; /*0x407275*/
      }
      *this = v19; /*0x407277*/
      return 1; /*0x40727a*/
    }
    else
    {
      if ( v16 <= -v4 ) /*0x407233*/
      {
        v18 = this->__pad_010 - v16; /*0x407251*/
        v17 = *this; /*0x407253*/
        LOBYTE(v17) = *this | 2; /*0x407255*/
        this->__pad_010 = v18; /*0x407257*/
      }
      else
      {
        this->__pad_010 += v4; /*0x40723a*/
        v17 = *this; /*0x40723d*/
        LOBYTE(v17) = *this | 2; /*0x40723f*/
      }
      *this = v17; /*0x407241*/
      return 1; /*0x407244*/
    }
  }
}


// ==== 0x004072B0  ObjectClass::method_4072B0  this=Audio  sig=csp ====
int __thiscall sub_4072B0(_DWORD *this)
{
  return HIWORD(*(this + 2)); /*0x4072b6*/
}


// ==== 0x004072C0  DListNode::Init  this=ObjectClass  sig=csp ====
void __thiscall DListNode_Init(_DWORD *this)
{
  *this = this; /*0x4072c0*/
  this->vtable2 = this; /*0x4072c2*/
  this->vtable3 = this; /*0x4072c5*/
}


// ==== 0x004072D0  DListNode::InitEmpty  this=AbstractClass  sig=csp ====
void __thiscall DListNode_InitEmpty(_DWORD *this)
{
  *this = this; /*0x4072d0*/
  this->vtable2 = this; /*0x4072d2*/
  this->vtable3 = 0; /*0x4072d5*/
}


// ==== 0x004072E0  sub_4072E0  this=-  sig=ida-proto ====
int __fastcall sub_4072E0(_DWORD *a1, _DWORD *a2)
{
  int result; // eax
  _DWORD *v3; // esi
  _DWORD *v4; // ebx
  int v5; // ecx
  int v6; // esi

  result = 0; /*0x4072e6*/
  v3 = a1; /*0x4072e8*/
  while ( 1 ) /*0x4072ea*/
  {
    v3 = (_DWORD *)*v3; /*0x4072ea*/
    if ( !v3 ) /*0x4072ee*/
      break; /*0x4072ee*/
    v4 = (_DWORD *)v3[2]; /*0x4072f0*/
    if ( v3 == v4 ) /*0x4072f5*/
      break; /*0x4072f5*/
    if ( a2[2] <= (int)v4 ) /*0x4072fd*/
    {
      v5 = v3[1]; /*0x407302*/
      *a2 = v3; /*0x407305*/
      a2[1] = v5; /*0x407307*/
      v3[1] = a2; /*0x40730a*/
      *(_DWORD *)a2[1] = a2; /*0x407313*/
      return result; /*0x407315*/
    }
    ++result; /*0x4072ff*/
  }
  v6 = a1[1]; /*0x407316*/
  *a2 = a1; /*0x407319*/
  a2[1] = v6; /*0x40731b*/
  a1[1] = a2; /*0x40731e*/
  *(_DWORD *)a2[1] = a2; /*0x407327*/
  return result; /*0x407310*/
}


// ==== 0x004073B0  SaveGame::CountLinkedList  this=ObjectClass  sig=csp ====
int __thiscall sub_4073B0(_DWORD *this)
{
  _DWORD *v1; // edx
  int result; // eax

  v1 = (_DWORD *)*this; /*0x4073b0*/
  for ( result = 0; v1 != this; ++result ) /*0x4073b6*/
    v1 = (_DWORD *)*v1; /*0x4073b8*/
  return result; /*0x4073bf*/
}


// ==== 0x004073C0  AudioQueue::GetNext  this=ObjectClass  sig=csp ====
int __thiscall AudioQueue_GetNext(int *this)
{
  int result; // eax

  if ( !this ) /*0x4073c2*/
    return 0; /*0x4073c2*/
  result = *this; /*0x4073c4*/
  if ( *this ) /*0x4073c4*/
  {
    if ( result == *(_DWORD *)(result + 8) ) /*0x4073cd*/
      return 0; /*0x4073cf*/
  }
  return result; /*0x4073d1*/
}


// ==== 0x004073E0  AudioQueue::GetNextAlt  this=CampaignClass  sig=csp ====
int __thiscall AudioQueue_GetNext_Alt(int *this)
{
  int result; // eax

  if ( !this ) /*0x4073e2*/
    return 0; /*0x4073e2*/
  result = *this; /*0x4073e4*/
  if ( *this ) /*0x4073e4*/
  {
    if ( result == *(_DWORD *)(result + 8) ) /*0x4073ed*/
      return 0; /*0x4073ef*/
  }
  return result; /*0x4073f1*/
}


// ==== 0x00407420  InsertAfterDListNode  this=ObjectClass  sig=csp ====
int __fastcall DListNode_InsertAfter(int a1, _DWORD *a2)
{
  int result; // eax

  result = *(_DWORD *)(a1 + 4); /*0x407420*/
  *a2 = a1; /*0x407423*/
  a2[1] = result; /*0x407425*/
  *(_DWORD *)(a1 + 4) = a2; /*0x407428*/
  *(_DWORD *)a2[1] = a2; /*0x40742e*/
  return result; /*0x407430*/
}


// ==== 0x00407440  InsertBeforeLinkedList  this=ObjectClass  sig=csp ====
int __fastcall LinkedList_InsertBefore(int *a1, int *a2)
{
  int result; // eax

  a2[1] = (int)a1; /*0x407440*/
  result = *a1; /*0x407443*/
  *a2 = *a1; /*0x407445*/
  *a1 = (int)a2; /*0x407447*/
  *(_DWORD *)(*a2 + 4) = a2; /*0x40744b*/
  return result; /*0x40744e*/
}


// ==== 0x00407450  LinkedList::Init  this=ObjectClass  sig=csp ====
int __thiscall LinkedList_Init(_DWORD **this)
{
  int result; // eax

  *this->vtable2 = *this; /*0x407455*/
  result = (int)*this; /*0x407457*/
  (*this)[1] = this->vtable2; /*0x40745c*/
  *this = this; /*0x40745f*/
  this->vtable2 = this; /*0x407461*/
  return result; /*0x407464*/
}


// ==== 0x00407470  Queue::GetNext  this=ObjectClass  sig=csp ====
int __thiscall Queue_GetNext(int *this)
{
  int result; // eax

  result = *this; /*0x407470*/
  if ( *this ) /*0x407470*/
  {
    if ( result == *(_DWORD *)(result + 8) ) /*0x407479*/
      return 0; /*0x40747b*/
  }
  return result; /*0x40747d*/
}


// ==== 0x00407480  AudioList::GetNextEntry  this=AudioList  sig=csp ====
int __thiscall AudioList_GetNextEntry(_DWORD *this)
{
  return *(_DWORD *)(this->q004 + 8) != this->q004 ? this->q004 : 0;
}


// ==== 0x004074D0  AllocLinkedListMemory  this=-  sig=ida-proto ====
_DWORD *__fastcall Memory_AllocLinkedList(int a1, int a2)
{
  int v2; // edi
  _DWORD *result; // eax
  _DWORD *v5; // ecx
  int v6; // esi

  v2 = a2 + 8; /*0x4074d2*/
  result = __2_YAPAXI_Z(a1 * (a2 + 8) + 8); /*0x4074e0*/
  if ( result ) /*0x4074ea*/
  {
    v5 = result + 2; /*0x4074ef*/
    *result = result + 2; /*0x4074f4*/
    if ( a1 != 1 ) /*0x4074f6*/
    {
      v6 = a1 - 1; /*0x4074f8*/
      do /*0x407502*/
      {
        --v6; /*0x4074fd*/
        *v5 = (char *)v5 + v2; /*0x4074fe*/
        v5 = (_DWORD *)((char *)v5 + v2); /*0x407500*/
      }
      while ( v6 ); /*0x407502*/
    }
    *v5 = 0; /*0x407504*/
  }
  return result; /*0x40750a*/
}


// ==== 0x00407510  VtableStub::Push  this=ObjectClass  sig=csp ====
void __thiscall VtableStub::Push_407510(void *Block)
{
  __3_YAXPAX_Z(Block); /*0x407511*/
}


// ==== 0x00407520  LinkedList::Next  this=ObjectClass  sig=csp ====
int *__thiscall LinkedList_Next(int **this)
{
  int *result; // eax
  int *v2; // edx

  result = *this; /*0x407520*/
  if ( *this ) /*0x407520*/
  {
    v2 = (int *)*result; /*0x407527*/
    *this = v2; /*0x40752c*/
    result += 2; /*0x407529*/
  }
  return result; /*0x407526*/
}


// ==== 0x00407530  PushFrontLinkedListAlt  this=ObjectClass  sig=csp ====
int __fastcall LinkedList_PushFront_Alt(_DWORD *a1, int a2)
{
  *(_DWORD *)(a2 - 8) = *a1; /*0x407535*/
  *a1 = a2 - 8; /*0x407537*/
  return a2 - 8; /*0x407539*/
}


// ==== 0x00407550  sub_407550  this=-  sig=ida-proto ====
int sub_407550()
{
  HANDLE Thread; // eax
  DWORD LastError; // eax
  CHAR Buffer[1024]; // [esp+4h] [ebp-400h] BYREF

  DListNode::Init(MEMORY[0x87E810]); /*0x40755c*/
  InitializeCriticalSection(&MEMORY[0x87E7F8]); /*0x407566*/
  MEMORY[0x87E770] = 0; /*0x40756e*/
  MEMORY[0x87E778] = 0; /*0x407574*/
  MEMORY[0x87E788] = 0; /*0x40757a*/
  MEMORY[0x87E780] = 1000; /*0x407580*/
  MEMORY[0x87E774] = 0; /*0x407590*/
  AudioStream::Reset(MEMORY[0x87E790]); /*0x40759b*/
  CoordBounds::Constructor(MEMORY[0x87E790], MEMORY[0x87E780], SHIDWORD(MEMORY[0x87E780])); /*0x4075b2*/
  AudioStream::ResetChannel(MEMORY[0x87E790], 4 * MEMORY[0x87E780], (unsigned __int64)MEMORY[0x87E780] >> 30); /*0x4075d3*/
  AudioStream::ResetChannel2(MEMORY[0x87E790], 4 * MEMORY[0x87E780], (unsigned __int64)MEMORY[0x87E780] >> 30); /*0x4075f5*/
  Thread = CreateThread(0, 0x1000u, (LPTHREAD_START_ROUTINE)StartAddress, &MEMORY[0x87E770], 0, &MEMORY[0x87E7F4]); /*0x407610*/
  MEMORY[0x87E7F0] = Thread; /*0x407618*/
  if ( !Thread ) /*0x40761d*/
    return 0; /*0x40761f*/
  if ( !SetThreadPriority(Thread, 2) ) /*0x40762c*/
  {
    LastError = GetLastError(); /*0x407642*/
    FormatMessageA(0x1000u, 0, LastError, 0, Buffer, 0x400u, 0); /*0x40764f*/
    Debug::Log(); /*0x40765f*/
  }
  MEMORY[0x87E820] = 1; /*0x40766d*/
  MEMORY[0x87E81C] = 1; /*0x407672*/
  return 1; /*0x407621*/
}


// ==== 0x00407680  StartAddress  this=-  sig=csp ====
DWORD __stdcall StartAddress(_DWORD *lpThreadParameter)
{
  _DWORD *v1; // edi
  __int64 v2; // rax
  int i; // esi
  int v4; // eax
  int v5; // eax
  int v6; // ecx
  int v7; // eax

  v1 = lpThreadParameter; /*0x407682*/
  lpThreadParameter[6] = 1; /*0x40768b*/
  v1[2] = 0; /*0x407690*/
  if ( *v1 ) /*0x407693*/
  {
    v1[2] = 1; /*0x407774*/
    return 0; /*0x407778*/
  }
  else
  {
    do /*0x40775e*/
    {
      LODWORD(v2) = Audio::Callback(); /*0x4076a5*/
      AudioThread::UpdateStats((int)(v1 + 8), v2); /*0x4076af*/
      EnterCriticalSection(&MEMORY[0x87E7F8]); /*0x4076b9*/
      for ( i = AudioQueue::GetNext(MEMORY[0x87E810]); i; i = AudioQueue::GetNextAlt((int *)i) ) /*0x4076c9*/
      {
        if ( (*(_BYTE *)(i + 12) & 4) != 0 ) /*0x4076cf*/
        {
          EnterCriticalSection(&MEMORY[0x87E7F8]); /*0x4076d6*/
          v4 = *(_DWORD *)(i + 156); /*0x4076d8*/
          byte_B04BEC = 1; /*0x4076e2*/
          v5 = sub_408F80(*(int **)(i + 52), *(int **)(i + 124), v4, (char *)&lpThreadParameter); /*0x4076f1*/
          byte_B04BEC = 0; /*0x4076f6*/
          v6 = *(_DWORD *)(i + 156) - (_DWORD)lpThreadParameter; /*0x407706*/
          *(_DWORD *)(i + 156) = v6; /*0x40770a*/
          if ( v6 <= 0 || v5 == 2 || !v5 ) /*0x407719*/
          {
            v7 = *(_DWORD *)(i + 12); /*0x40771b*/
            LOBYTE(v7) = v7 & 0xFB; /*0x40771e*/
            *(_DWORD *)(i + 12) = v7; /*0x407720*/
          }
          LeaveCriticalSection(&MEMORY[0x87E7F8]); /*0x407728*/
        }
      }
      LeaveCriticalSection(&MEMORY[0x87E7F8]); /*0x407740*/
      Sleep(v1[4]); /*0x40774d*/
      ++v1[1]; /*0x407757*/
    }
    while ( !*v1 ); /*0x40775e*/
    v1[2] = 1; /*0x407764*/
    return 0; /*0x40776e*/
  }
}


// ==== 0x00407780  sub_407780  this=-  sig=ida-proto ====
void sub_407780()
{
  int *i; // esi

  if ( MEMORY[0x87E81C] ) /*0x407787*/
  {
    if ( MEMORY[0x87E820] ) /*0x407795*/
    {
      MEMORY[0x87E770] = 1; /*0x407797*/
      while ( !MEMORY[0x87E778] ) /*0x4077a8*/
        Sleep(0); /*0x4077b2*/
      WaitForSingleObject(MEMORY[0x87E7F0], 0x1388u); /*0x4077c8*/
      CloseHandle(MEMORY[0x87E7F0]); /*0x4077d5*/
      MEMORY[0x87E820] = 0; /*0x4077db*/
    }
    for ( i = (int *)AudioQueue::GetNext(MEMORY[0x87E810]); i; i = (int *)AudioQueue::GetNext(MEMORY[0x87E810]) ) /*0x4077f3*/
    {
      if ( !i[34] ) /*0x407803*/
      {
        if ( i[5] ) /*0x40780d*/
        {
          EnterCriticalSection(&MEMORY[0x87E7F8]); /*0x407819*/
          Voice::Stop(i[5]); /*0x40781e*/
          LeaveCriticalSection(&MEMORY[0x87E7F8]); /*0x407828*/
        }
      }
      AudioSample::Destructor(i); /*0x40782c*/
    }
    DeleteCriticalSection(&MEMORY[0x87E7F8]); /*0x407848*/
    MEMORY[0x87E81C] = 0; /*0x40784e*/
  }
}


// ==== 0x00407860  AudioStream::Constructor  this=AudioStream  sig=csp ====
char *__thiscall AudioStream_Constructor(void *this, unsigned __int64 a2)
{
  int v3; // esi
  char *v4; // ebx
  int v5; // eax
  int v6; // eax
  int v7; // eax

  if ( !this ) /*0x40786b*/
    return 0; /*0x40786e*/
  v3 = HIDWORD(a2); /*0x407876*/
  if ( a2 < 0x1B58 ) /*0x40788a*/
  {
    LODWORD(a2) = 7000; /*0x407896*/
    v3 = 0; /*0x40789a*/
  }
  v4 = (char *)__2_YAPAXI_Z(0xF8u); /*0x4078a6*/
  memset(v4, 0, 0xF8u); /*0x4078b1*/
  DListNode::InitEmpty(v4); /*0x4078b8*/
  *((_DWORD *)v4 + 4) = this; /*0x4078c6*/
  v5 = sub_4036C0(); /*0x4078c9*/
  *((_DWORD *)v4 + 5) = v5; /*0x4078ce*/
  *(_DWORD *)(v5 + 148) = 0; /*0x4078d1*/
  *(_DWORD *)(*((_DWORD *)v4 + 5) + 144) = 0; /*0x4078da*/
  *(_DWORD *)(*((_DWORD *)v4 + 5) + 152) = 0; /*0x4078e7*/
  *(_DWORD *)(*((_DWORD *)v4 + 5) + 156) = 0; /*0x4078f3*/
  *((_DWORD *)v4 + 6) = a2; /*0x4078f9*/
  *((_DWORD *)v4 + 7) = v3; /*0x4078fc*/
  AudioStream::InitNodeFields(v4 + 60); /*0x4078ff*/
  Struct::ZeroInit32(v4 + 92); /*0x407907*/
  *((_DWORD *)v4 + 32) = 0; /*0x40790c*/
  *((_DWORD *)v4 + 34) = 0; /*0x407912*/
  strcpy(v4 + 164, MEMORY[0x8162C8]); /*0x407937*/
  v6 = *((_DWORD *)v4 + 5); /*0x407940*/
  if ( v6 /*0x407980*/
    && (*(_DWORD *)(v6 + 192) = v4,
        *(_DWORD *)(*((_DWORD *)v4 + 5) + 176) = AudioStream::ReadStreamAndSyncPosition,
        *(_DWORD *)(*((_DWORD *)v4 + 5) + 184) = AudioStream::SetPlaybackCallback,
        *(_DWORD *)(*((_DWORD *)v4 + 5) + 188) = AudioStream::ProcessCallback,
        v7 = sub_4087F0(),
        (*((_DWORD *)v4 + 12) = v7) != 0) )
  {
    EnterCriticalSection(&MEMORY[0x87E7F8]); /*0x407996*/
    InsertBeforeLinkedList(MEMORY[0x87E810], v4); /*0x4079a3*/
    LeaveCriticalSection(&MEMORY[0x87E7F8]); /*0x4079ad*/
    return v4; /*0x4079b3*/
  }
  else
  {
    AudioSample::Destructor(v4); /*0x407984*/
    return 0; /*0x407989*/
  }
}


// ==== 0x004079C0  AudioStream::ReadStreamAndSyncPosition  this=AudioStream  sig=csp ====
int __thiscall sub_4079C0(_DWORD *this)
{
  int v2; // esi
  int v3; // eax
  int v4; // ecx
  int v5; // eax

  v2 = this->AudioStream_field_0xC0; /*0x4079c4*/
  ReadAudioStream(*(int **)(v2 + 56), *(_DWORD *)(v2 + 144)); /*0x4079d3*/
  AudioStream::ReadStreamAndReturn(*(int **)(v2 + 56)); /*0x4079db*/
  v3 = *(_DWORD *)(v2 + 160); /*0x4079e3*/
  v4 = *(_DWORD *)(*(_DWORD *)(v2 + 56) + 8); /*0x4079e9*/
  if ( v3 <= v4 ) /*0x4079ee*/
    *(_DWORD *)(v2 + 144) = v3; /*0x4079f8*/
  else
    *(_DWORD *)(v2 + 144) = v4; /*0x4079f0*/
  v5 = *(_DWORD *)(v2 + 144); /*0x4079fe*/
  *(this + 93) = v5; /*0x407a04*/
  *(this + 94) = v5; /*0x407a0a*/
  this->__pad_05C = *(_DWORD *)(*(_DWORD *)(v2 + 56) + 4); /*0x407a16*/
  return 0; /*0x407a1c*/
}


// ==== 0x00407A30  AudioStream::SetPlaybackCallback  this=AudioStream  sig=csp ====
int __thiscall sub_407A30(_DWORD *this)
{
  int v1; // esi
  int v2; // edx
  int v3; // eax

  v1 = this->AudioStream_field_0xC0; /*0x407a31*/
  if ( (*(_BYTE *)(v1 + 12) & 3) != 0 ) /*0x407a3b*/
  {
    *(_DWORD *)(v1 + 32) = Audio::Callback(); /*0x407a42*/
    *(_DWORD *)(v1 + 36) = v2; /*0x407a45*/
  }
  v3 = *(_DWORD *)(v1 + 12); /*0x407a48*/
  LOBYTE(v3) = v3 & 0xF8; /*0x407a4b*/
  *(_DWORD *)(v1 + 12) = v3; /*0x407a4d*/
  *(_DWORD *)(v1 + 128) = 0; /*0x407a50*/
  return 0; /*0x407a5c*/
}


// ==== 0x00407A60  AudioStream::ProcessCallback  this=AudioStream  sig=csp ====
int __thiscall sub_407A60(_DWORD *this)
{
  int v1; // esi
  int v2; // edx
  int v3; // eax

  v1 = this->AudioStream_field_0xC0; /*0x407a61*/
  if ( (*(_BYTE *)(v1 + 12) & 3) != 0 ) /*0x407a6b*/
  {
    *(_DWORD *)(v1 + 32) = Audio::Callback(); /*0x407a72*/
    *(_DWORD *)(v1 + 36) = v2; /*0x407a75*/
  }
  v3 = *(_DWORD *)(v1 + 12); /*0x407a78*/
  LOBYTE(v3) = v3 & 0xF8; /*0x407a7b*/
  *(_DWORD *)(v1 + 12) = v3; /*0x407a7d*/
  *(_DWORD *)(v1 + 128) = 0; /*0x407a80*/
  return 0; /*0x407a8c*/
}


// ==== 0x00407A90  AudioSample::Destructor  this=AudioSample  sig=csp ====
void __thiscall AudioSample::Destructor(void *Block)
{
  _DWORD *v2; // ecx
  _DWORD *v3; // ecx
  _DWORD *v4; // ecx
  _DWORD *v5; // ecx
  void (__thiscall ***v6)(_DWORD, int); // ecx

  if ( *((void **)Block + 1) != Block ) /*0x407aa4*/
  {
    EnterCriticalSection(&MEMORY[0x87E7F8]); /*0x407aab*/
    LinkedList::Init((_DWORD **)Block); /*0x407aaf*/
    LeaveCriticalSection(&MEMORY[0x87E7F8]); /*0x407ab9*/
  }
  if ( !*((_DWORD *)Block + 34) && *((_DWORD *)Block + 5) ) /*0x407ac5*/
  {
    EnterCriticalSection(&MEMORY[0x87E7F8]); /*0x407ad1*/
    Voice::Stop(*((_DWORD *)Block + 5)); /*0x407ad6*/
    LeaveCriticalSection(&MEMORY[0x87E7F8]); /*0x407ae0*/
  }
  v2 = (_DWORD *)*((_DWORD *)Block + 13); /*0x407ae2*/
  if ( v2 ) /*0x407ae7*/
  {
    Count::DecrementRefCountsAudio(v2); /*0x407ae9*/
    *((_DWORD *)Block + 13) = 0; /*0x407aee*/
  }
  v3 = (_DWORD *)*((_DWORD *)Block + 14); /*0x407af5*/
  if ( v3 ) /*0x407afa*/
  {
    Count::DecrementRefCountsAudio(v3); /*0x407afc*/
    *((_DWORD *)Block + 14) = 0; /*0x407b01*/
  }
  v4 = (_DWORD *)*((_DWORD *)Block + 12); /*0x407b08*/
  if ( v4 ) /*0x407b0d*/
    AudioSample::InitLinkedList(v4); /*0x407b0f*/
  v5 = (_DWORD *)*((_DWORD *)Block + 5); /*0x407b14*/
  if ( v5 ) /*0x407b19*/
    AudioSample::ResetState(v5); /*0x407b1b*/
  v6 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)Block + 31); /*0x407b20*/
  if ( v6 ) /*0x407b25*/
    (**v6)(v6, 1); /*0x407b2b*/
  __3_YAXPAX_Z(Block); /*0x407b2e*/
}


// ==== 0x00407B40  AudioQueue::IsEmpty  this=AudioQueue  sig=ida-proto ====
int __fastcall AudioQueue::IsEmpty(int a1, int a2)
{
  int result; // eax

  result = *(_DWORD *)(a1 + 20); /*0x407b40*/
  *(_DWORD *)(result + 148) = a2; /*0x407b43*/
  return result; /*0x407b49*/
}


// ==== 0x00407B50  AudioQueue::IsNotEmpty  this=AudioQueue  sig=ida-proto ====
int __fastcall AudioQueue::IsNotEmpty(int a1, int a2)
{
  int result; // eax

  result = *(_DWORD *)(a1 + 20); /*0x407b50*/
  *(_DWORD *)(result + 156) = a2; /*0x407b53*/
  return result; /*0x407b59*/
}


// ==== 0x00407B60  ThreadAudioMixerMain  this=-  sig=csp ====
int __fastcall ThreadAudioMixerMain(_DWORD *a1, RawFileClass *a2, int a3)
{
  void (__thiscall ***v5)(_DWORD, int); // ecx
  _DWORD *v6; // eax
  _DWORD *v7; // eax
  void (__thiscall ***v8)(_DWORD, int); // ecx
  _DWORD *v9; // eax
  _DWORD *v10; // eax
  int v11; // ecx
  int v12; // ecx
  int v13; // eax
  _DWORD *v14; // ecx
  _DWORD *v15; // ecx
  _DWORD *v16; // edi
  int v17; // ebp
  int *v18; // eax
  int v19; // eax
  _DWORD *v20; // ecx
  int v21; // eax
  int v22; // ecx
  unsigned __int64 v23; // kr00_8
  int v24; // eax
  int v25; // eax
  int v26; // ecx
  int v27; // eax
  int v28; // edx
  int v29; // eax
  int v30; // edx
  int v31; // ecx
  int v32; // eax
  int *v33; // ecx
  int v34; // ecx
  int v35; // eax
  _DWORD *v36; // ecx
  _DWORD *v37; // ecx
  _DWORD *v38; // ecx
  _DWORD *v39; // ecx
  int v41; // eax
  int v42; // edx
  void (__thiscall ***v43)(_DWORD, int); // ecx

  if ( a1[34] ) /*0x407b6a*/
    return 0; /*0x407ef8*/
  if ( a1[5] ) /*0x407b78*/
  {
    EnterCriticalSection(&MEMORY[0x87E7F8]); /*0x407b82*/
    Voice::Stop(a1[5]); /*0x407b8b*/
    LeaveCriticalSection(&MEMORY[0x87E7F8]); /*0x407b95*/
  }
  v5 = (void (__thiscall ***)(_DWORD, int))a1[31]; /*0x407b9b*/
  if ( v5 ) /*0x407ba0*/
  {
    (**v5)(v5, 1); /*0x407ba6*/
    a1[31] = 0; /*0x407ba8*/
  }
  if ( !a3 )
  {
    v6 = (_DWORD *)__2_YAPAXI_Z(0x24u); /*0x407bb3*/
    v7 = v6 ? RawFileClass::Construct(v6, a2) : 0;
    a1[31] = v7; /*0x407bcd*/
    if ( v7 ) /*0x407bd0*/
    {
      if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD))(*v7 + 20))(v7, 0) ) /*0x407bd7*/
      {
        v8 = (void (__thiscall ***)(_DWORD, int))a1[31]; /*0x407bde*/
        if ( v8 ) /*0x407be3*/
          (**v8)(v8, 1); /*0x407be9*/
        a1[31] = 0; /*0x407beb*/
      }
    }
  }
  if ( !a1[31] ) /*0x407bee*/
  {
    v9 = (_DWORD *)__2_YAPAXI_Z(0x6Cu); /*0x407bf5*/
    if ( v9 ) /*0x407bff*/
      v10 = CCFileClass::Construct(v9, a2->__pad_0); /*0x407c04*/
    else
      v10 = 0; /*0x407c0b*/
    a1[31] = v10; /*0x407c0d*/
  }
  v11 = a1[31]; /*0x407c10*/
  if ( !v11 ) /*0x407c15*/
    goto LABEL_51; /*0x407c15*/
  if ( !(*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v11 + 20))(v11, 0) /*0x407c30*/
    || !(*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)a1[31] + 28))(a1[31], 1) )
  {
    v43 = (void (__thiscall ***)(_DWORD, int))a1[31]; /*0x407f23*/
    if ( v43 ) /*0x407f28*/
      (**v43)(v43, 1); /*0x407f2e*/
    a1[31] = 0; /*0x407f30*/
    goto LABEL_51; /*0x407f33*/
  }
  *(_BYTE *)(a1[31] + 4) = 1; /*0x407c48*/
  if ( !ParseWaveFileHeader(a1[31], a1 + 23, a1 + 37) ) /*0x407c51*/
    goto LABEL_51; /*0x407c51*/
  v12 = a1[31]; /*0x407c60*/
  a1[39] = a1[37]; /*0x407c63*/
  v13 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v12 + 40))(v12, 0, 1); /*0x407c6e*/
  v14 = (_DWORD *)a1[13]; /*0x407c71*/
  a1[38] = v13; /*0x407c74*/
  if ( v14 ) /*0x407c7c*/
  {
    Count::DecrementRefCountsAudio(v14); /*0x407c7e*/
    a1[13] = 0; /*0x407c83*/
  }
  v15 = (_DWORD *)a1[14]; /*0x407c86*/
  if ( v15 ) /*0x407c8b*/
  {
    Count::DecrementRefCountsAudio(v15); /*0x407c8d*/
    a1[14] = 0; /*0x407c92*/
  }
  v16 = (_DWORD *)a1[12]; /*0x407c9b*/
  v17 = Audio::CalcRate(a1 + 23, a1[6], a1[7]); /*0x407caa*/
  a1[40] = Audio::CalcRate(a1 + 23, 2 * *(_DWORD *)(a1[5] + 424), *(_QWORD *)(a1[5] + 424) >> 31); /*0x407cce*/
  if ( AudioStream::GetChannel(v16) != v17 ) /*0x407cdb*/
  {
    sub_408970(v16); /*0x407cdf*/
    v18 = sub_408D80(v17, 0); /*0x407ce8*/
    if ( v18 ) /*0x407cef*/
      sub_408B10(v16, v18); /*0x407cf5*/
  }
  if ( AudioStream::GetChannel(v16) != v17 ) /*0x407d03*/
    goto LABEL_51; /*0x407d03*/
  AudioMixer::SetupChannels((int *)a1[12]); /*0x407d0c*/
  v19 = AcquireAudioStreamBuffer((_DWORD *)a1[12], 0); /*0x407d16*/
  v20 = (_DWORD *)a1[12]; /*0x407d1b*/
  a1[13] = v19; /*0x407d23*/
  v21 = AcquireAudioStreamBuffer(v20, 1); /*0x407d26*/
  v22 = a1[13]; /*0x407d2b*/
  a1[14] = v21; /*0x407d2e*/
  if ( !v22 || !v21 ) /*0x407d3b*/
    goto LABEL_51; /*0x407d3b*/
  v23 = 2LL * *(_QWORD *)(a1[5] + 432); /*0x407d5d*/
  if ( v23 <= 4 * MEMORY[0x87E780] ) /*0x407d7e*/
    v23 = 4 * MEMORY[0x87E780]; /*0x407d98*/
  if ( v23 <= 0xFA0 ) /*0x407da6*/
    v23 = 4000; /*0x407dad*/
  EnterCriticalSection(&MEMORY[0x87E7F8]); /*0x407db4*/
  if ( v23 ) /*0x407dbe*/
  {
    v24 = Audio::CalcRate(a1 + 23, v23, SHIDWORD(v23)); /*0x407dc4*/
    if ( v24 > a1[39] ) /*0x407dd1*/
      v24 = a1[39]; /*0x407dd3*/
  }
  else
  {
    v24 = a1[39]; /*0x407dd7*/
  }
  byte_B04BEC = 1; /*0x407de1*/
  v25 = sub_408F80((int *)a1[13], (int *)a1[31], v24, (char *)&a3); /*0x407df0*/
  byte_B04BEC = 0; /*0x407df5*/
  v26 = a1[39] - a3; /*0x407e08*/
  a1[39] = v26; /*0x407e0a*/
  if ( v26 <= 0 || v25 == 2 || !v25 ) /*0x407e1b*/
  {
    v27 = a1[3]; /*0x407e1d*/
    LOBYTE(v27) = v27 & 0xFB; /*0x407e20*/
    a1[3] = v27; /*0x407e22*/
  }
  LeaveCriticalSection(&MEMORY[0x87E7F8]); /*0x407e2a*/
  if ( !a3 ) /*0x407e36*/
  {
LABEL_51:
    v38 = (_DWORD *)a1[13]; /*0x407ed4*/
    if ( v38 ) /*0x407ed9*/
    {
      Count::DecrementRefCountsAudio(v38); /*0x407edb*/
      a1[13] = 0; /*0x407ee0*/
    }
    v39 = (_DWORD *)a1[14]; /*0x407ee3*/
    if ( v39 ) /*0x407ee8*/
    {
      Count::DecrementRefCountsAudio(v39); /*0x407eea*/
      a1[14] = 0; /*0x407eef*/
    }
    return 0; /*0x407eef*/
  }
  AudioStream::ReadStreamAndReturn((int *)a1[14]); /*0x407e3f*/
  v28 = a1[5]; /*0x407e47*/
  a1[15] = *(_DWORD *)(a1[14] + 4); /*0x407e50*/
  v29 = Audio::CalcRate(a1 + 23, *(_DWORD *)(v28 + 424), *(_DWORD *)(v28 + 428)); /*0x407e62*/
  v30 = a1[14]; /*0x407e67*/
  a1[16] = v29; /*0x407e6a*/
  v31 = *(_DWORD *)(v30 + 8); /*0x407e6d*/
  if ( v29 > v31 ) /*0x407e72*/
    a1[16] = v31; /*0x407e74*/
  v32 = a1[16]; /*0x407e7a*/
  v33 = (int *)(a1[5] + 16); /*0x407e82*/
  a1[20] = a1 + 23; /*0x407e85*/
  a1[36] = v32; /*0x407e88*/
  EndBufferMixer(v33, 0x4000); /*0x407e8e*/
  BindChannelAudioStream((_DWORD *)a1[5], a1 + 15); /*0x407e98*/
  v34 = a1[5]; /*0x407ea0*/
  a1[3] |= 1u; /*0x407ea6*/
  if ( Audio::GetChannelStatus(v34) ) /*0x407ea9*/
  {
    v35 = a1[3]; /*0x407eb2*/
    v36 = (_DWORD *)a1[13]; /*0x407eb5*/
    LOBYTE(v35) = v35 & 0xFE; /*0x407eb8*/
    a1[3] = v35; /*0x407eba*/
    Count::DecrementRefCountsAudio(v36); /*0x407ebd*/
    v37 = (_DWORD *)a1[14]; /*0x407ec2*/
    a1[13] = 0; /*0x407ec7*/
    Count::DecrementRefCountsAudio(v37); /*0x407eca*/
    a1[14] = 0; /*0x407ecf*/
    goto LABEL_51; /*0x407ecf*/
  }
  a1[10] = Audio::Callback(); /*0x407f00*/
  v41 = a1[3]; /*0x407f03*/
  a1[11] = v42; /*0x407f06*/
  LOBYTE(v41) = v41 | 4; /*0x407f0c*/
  a1[8] = a1[10]; /*0x407f0e*/
  a1[9] = v42; /*0x407f11*/
  a1[3] = v41; /*0x407f14*/
  return 1; /*0x407ef2*/
}


// ==== 0x00407F40  Audio::Release  this=Audio  sig=csp ====
void __thiscall Audio_Release(_DWORD *this)
{
  if ( !*(this + 34) ) /*0x407f43*/
  {
    if ( this->Audio_field_0x14 ) /*0x407f4d*/
    {
      EnterCriticalSection(&MEMORY[0x87E7F8]); /*0x407f59*/
      Voice::Stop(this->Audio_field_0x14); /*0x407f62*/
      LeaveCriticalSection(&MEMORY[0x87E7F8]); /*0x407f6c*/
    }
  }
}


// ==== 0x00407F80  ObjectClass::method_407F80  this=ObjectClass  sig=csp ====
int __thiscall sub_407F80(_DWORD *this)
{
  int result; // eax

  result = this->parachute + 1; /*0x407f86*/
  this->parachute = result; /*0x407f87*/
  return result; /*0x407f8d*/
}


// ==== 0x00407FB0  AudioFrame::ProcessAudioFrame  this=AudioFrame  sig=csp ====
int __thiscall sub_407FB0(int this)
{
  int v2; // eax
  int result; // eax

  if ( !*(_DWORD *)(this + 128) && *(_DWORD *)(this + 20) ) /*0x407fbd*/
  {
    EnterCriticalSection(&MEMORY[0x87E7F8]); /*0x407fc9*/
    AudioChannel::DeactivatePlay(*(_DWORD **)(this + 20)); /*0x407fd2*/
    v2 = *(_DWORD *)(this + 12); /*0x407fd7*/
    if ( (v2 & 1) != 0 ) /*0x407fdc*/
    {
      LOBYTE(v2) = v2 & 0xFC | 2; /*0x407fe0*/
      *(_DWORD *)(this + 12) = v2; /*0x407fe2*/
    }
    LeaveCriticalSection(&MEMORY[0x87E7F8]); /*0x407fea*/
  }
  result = *(_DWORD *)(this + 128) + 1; /*0x407ff6*/
  *(_DWORD *)(this + 128) = result; /*0x407ff7*/
  return result; /*0x407ffd*/
}


// ==== 0x00408000  AudioMixer::ProcessAudioFrame  this=AudioMixer  sig=csp ====
void __thiscall sub_408000(int this)
{
  int v2; // eax
  int v3; // eax

  if ( *(_DWORD *)(this + 128) ) /*0x408003*/
  {
    v2 = *(_DWORD *)(this + 128) - 1; /*0x408013*/
    *(_DWORD *)(this + 128) = v2; /*0x408016*/
    if ( v2 < 0 ) /*0x40801c*/
      *(_DWORD *)(this + 128) = 0; /*0x40801e*/
    if ( !*(_DWORD *)(this + 128) && *(_DWORD *)(this + 20) ) /*0x408032*/
    {
      EnterCriticalSection(&MEMORY[0x87E7F8]); /*0x40803e*/
      v3 = *(_DWORD *)(this + 12); /*0x408044*/
      if ( (v3 & 2) != 0 ) /*0x408049*/
      {
        LOBYTE(v3) = v3 & 0xFC | 1; /*0x40804d*/
        *(_DWORD *)(this + 12) = v3; /*0x40804f*/
      }
      AudioChannel::ActivatePlay(*(_DWORD **)(this + 20)); /*0x408055*/
      LeaveCriticalSection(&MEMORY[0x87E7F8]); /*0x40805f*/
    }
  }
}


// ==== 0x00408070  Audio::IsSoundPlaying  this=Audio  sig=csp ====
int __thiscall Audio_IsSoundPlaying(_DWORD *this)
{
  return this->Audio_field_0xC & 1; /*0x408076*/
}


// ==== 0x00408080  SetAudioFileName  this=-  sig=csp ====
char *__fastcall SetAudioFileName(int a1, const char *a2)
{
  char *result; // eax

  result = strncpy((char *)(a1 + 164), a2, (IUnknown *)0x50); /*0x40808d*/
  *(_BYTE *)(a1 + 243) = 0; /*0x408095*/
  return result; /*0x40809c*/
}


// ==== 0x004080A0  ObjectClass::method_4080A0  this=ObjectClass  sig=csp ====
char *__thiscall sub_4080A0(char *this)
{
  return this + 164; /*0x4080a6*/
}


// ==== 0x004080B0  UnitTypeClass::method_4080B0  this=UnitTypeClass  sig=csp ====
int __thiscall sub_4080B0(_DWORD *this)
{
  return RequestBufferMixer((unsigned int *)(this->abstractFlags + 16), 0x4000);
}


// ==== 0x004080C0  ThemeClass::RequestBuffer  this=ThemeClass  sig=csp ====
int __thiscall ThemeClass_RequestBuffer(_DWORD *this)
{
  return RequestBufferMixer((unsigned int *)(this->q014 + 16), 0);
}


// ==== 0x004080D0  AudioSample::IsBuffering  this=AudioSample  sig=csp ====
BOOL __thiscall AudioSample_IsBuffering(int this)
{
  return (*(_BYTE *)(this + 12) & 1) != 0 /*0x4080e8*/
      && *(_DWORD *)(*(_DWORD *)(this + 20) + 20) != *(_DWORD *)(*(_DWORD *)(this + 20) + 24);
}


// ==== 0x004080F0  ThemeManager::ProcessCallback  this=ThemeManager  sig=csp ====
char __thiscall sub_4080F0(int this)
{
  int v2; // ebp
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // kr00_8

  v2 = Audio::Callback(); /*0x4080fa*/
  LODWORD(v3) = *(_DWORD *)(this + 20); /*0x4080fc*/
  v4 = *(_QWORD *)(v3 + 32) + __PAIR64__(HIDWORD(v3), v2); /*0x408104*/
  while ( (*(_BYTE *)(this + 12) & 1) != 0 ) /*0x408107*/
  {
    LODWORD(v3) = *(_DWORD *)(this + 20); /*0x40810d*/
    if ( *(_DWORD *)(v3 + 20) == *(_DWORD *)(v3 + 24) ) /*0x408118*/
      break; /*0x408118*/
    LODWORD(v3) = Audio::Callback(); /*0x40811a*/
    if ( v3 >= v4 ) /*0x408127*/
      break; /*0x408127*/
    LOBYTE(v3) = Event::Dispatch(); /*0x408129*/
  }
  return v3; /*0x408130*/
}


// ==== 0x00408140  ThemeClass::GetValue  this=ThemeClass  sig=csp ====
__int64 __thiscall sub_408140(_QWORD *this)
{
  return this->ThemeClass_field_04; /*0x408146*/
}


// ==== 0x004081A0  AudioQueue::HaltVoices  this=AudioQueue  sig=ida-proto ====
int sub_4081A0()
{
  int result; // eax
  int *i; // esi

  result = MEMORY[0x87E81C]; /*0x4081a0*/
  if ( MEMORY[0x87E81C] ) /*0x4081a8*/
  {
    result = AudioQueue::GetNext(MEMORY[0x87E810]); /*0x4081af*/
    for ( i = (int *)result; result; i = (int *)result ) /*0x4081b8*/
    {
      if ( !i[34] ) /*0x4081c8*/
      {
        if ( i[5] ) /*0x4081d2*/
        {
          EnterCriticalSection(&MEMORY[0x87E7F8]); /*0x4081de*/
          Voice::Stop(i[5]); /*0x4081e3*/
          LeaveCriticalSection(&MEMORY[0x87E7F8]); /*0x4081ed*/
        }
      }
      result = AudioQueue::GetNextAlt(i); /*0x4081f1*/
    }
  }
  return result; /*0x4081fe*/
}


// ==== 0x00408200  AudioQueue::IncrementPriority  this=AudioQueue  sig=ida-proto ====
int *AudioQueue_IncrementPriority()
{
  int *result; // eax

  result = (int *)MEMORY[0x87E81C]; /*0x408200*/
  if ( MEMORY[0x87E81C] ) /*0x408207*/
  {
    for ( result = (int *)AudioQueue::GetNext(MEMORY[0x87E810]); result; result = (int *)AudioQueue::GetNextAlt(result) ) /*0x408215*/
      ++result[34]; /*0x40821e*/
  }
  return result; /*0x40822f*/
}


// ==== 0x00408230  AudioTimer::DecrementAll  this=AudioTimer  sig=ida-proto ====
int *AudioTimer_DecrementAll()
{
  int *result; // eax
  int v1; // ecx

  result = (int *)MEMORY[0x87E81C]; /*0x408230*/
  if ( MEMORY[0x87E81C] ) /*0x408237*/
  {
    for ( result = (int *)AudioQueue::GetNext(MEMORY[0x87E810]); result; result = (int *)AudioQueue::GetNextAlt(result) ) /*0x408245*/
    {
      v1 = result[34] - 1; /*0x40824d*/
      result[34] = v1; /*0x408250*/
      if ( v1 < 0 ) /*0x408256*/
        result[34] = 0; /*0x408258*/
    }
  }
  return result; /*0x40826d*/
}


// ==== 0x00408270  AudioQueue::ReleaseBuffers  this=AudioQueue  sig=ida-proto ====
int AudioQueue_ReleaseBuffers()
{
  int result; // eax
  int *i; // esi
  int v2; // eax

  result = MEMORY[0x87E81C]; /*0x408270*/
  if ( MEMORY[0x87E81C] ) /*0x408278*/
  {
    result = AudioQueue::GetNext(MEMORY[0x87E810]); /*0x40827f*/
    for ( i = (int *)result; result; i = (int *)result ) /*0x408288*/
    {
      if ( !i[32] && i[5] ) /*0x4082a2*/
      {
        EnterCriticalSection(&MEMORY[0x87E7F8]); /*0x4082ae*/
        AudioChannel::DeactivatePlay(i[5]); /*0x4082b3*/
        v2 = i[3]; /*0x4082b8*/
        if ( (v2 & 1) != 0 ) /*0x4082bd*/
        {
          LOBYTE(v2) = v2 & 0xFC | 2; /*0x4082c1*/
          i[3] = v2; /*0x4082c3*/
        }
        LeaveCriticalSection(&MEMORY[0x87E7F8]); /*0x4082cb*/
      }
      ++i[32]; /*0x4082d4*/
      result = AudioQueue::GetNextAlt(i); /*0x4082dc*/
    }
  }
  return result; /*0x4082e9*/
}


// ==== 0x004082F0  ProcessAudioTimer  this=-  sig=ida-proto ====
int AudioTimer_Process()
{
  int result; // eax
  int *i; // esi
  int v2; // eax
  int v3; // eax

  result = MEMORY[0x87E81C]; /*0x4082f0*/
  if ( MEMORY[0x87E81C] ) /*0x4082f8*/
  {
    result = AudioQueue::GetNext(MEMORY[0x87E810]); /*0x408303*/
    for ( i = (int *)result; result; i = (int *)result ) /*0x40830c*/
    {
      if ( i[32] ) /*0x40831c*/
      {
        v2 = i[32] - 1; /*0x40832c*/
        i[32] = v2; /*0x40832f*/
        if ( v2 < 0 ) /*0x408335*/
          i[32] = 0; /*0x408337*/
        if ( !i[32] && i[5] ) /*0x40834b*/
        {
          EnterCriticalSection(&MEMORY[0x87E7F8]); /*0x408357*/
          v3 = i[3]; /*0x408359*/
          if ( (v3 & 2) != 0 ) /*0x40835e*/
          {
            LOBYTE(v3) = v3 & 0xFC | 1; /*0x408362*/
            i[3] = v3; /*0x408364*/
          }
          AudioChannel::ActivatePlay(i[5]); /*0x40836a*/
          LeaveCriticalSection(&MEMORY[0x87E7F8]); /*0x408374*/
        }
      }
      result = AudioQueue::GetNextAlt(i); /*0x408378*/
    }
  }
  return result; /*0x408385*/
}


// ==== 0x00408390  sub_408390  this=-  sig=ida-proto ====
int sub_408390()
{
  int result; // eax
  int *i; // esi

  result = MEMORY[0x87E81C]; /*0x408390*/
  if ( MEMORY[0x87E81C] ) /*0x408398*/
  {
    result = AudioQueue::GetNext(MEMORY[0x87E810]); /*0x40839f*/
    for ( i = (int *)result; result; i = (int *)result ) /*0x4083a8*/
    {
      RequestBufferMixer((unsigned int *)(i[5] + 16), 0); /*0x4083b2*/
      result = AudioQueue::GetNextAlt(i); /*0x4083b9*/
    }
  }
  return result; /*0x4083c4*/
}


// ==== 0x004083D0  Mixer::RequestAllBuffers  this=Mixer  sig=ida-proto ====
int Mixer_RequestAllBuffers()
{
  int result; // eax
  int *i; // esi

  result = MEMORY[0x87E81C]; /*0x4083d0*/
  if ( MEMORY[0x87E81C] ) /*0x4083d8*/
  {
    result = AudioQueue::GetNext(MEMORY[0x87E810]); /*0x4083df*/
    for ( i = (int *)result; result; i = (int *)result ) /*0x4083e8*/
    {
      RequestBufferMixer((unsigned int *)(i[5] + 16), 0x4000); /*0x4083f5*/
      result = AudioQueue::GetNextAlt(i); /*0x4083fc*/
    }
  }
  return result; /*0x408407*/
}


// ==== 0x00408410  ObjectClass::method  this=ObjectClass  sig=csp ====
int sub_408410()
{
  int Next; // eax

  if ( !MEMORY[0x87E81C] ) /*0x408418*/
    return 1; /*0x408418*/
  Next = AudioQueue::GetNext(MEMORY[0x87E810]); /*0x40841f*/
  if ( !Next ) /*0x408426*/
    return 1; /*0x40844c*/
  while ( (*(_BYTE *)(Next + 12) & 1) == 0 /*0x408439*/
       || *(_DWORD *)(*(_DWORD *)(Next + 20) + 20) == *(_DWORD *)(*(_DWORD *)(Next + 20) + 24) )
  {
    Next = AudioQueue::GetNextAlt((int *)Next); /*0x40843d*/
    if ( !Next ) /*0x408444*/
      return 1; /*0x408444*/
  }
  return 0; /*0x40844a*/
}


// ==== 0x00408460  ObjectClass::method  this=ObjectClass  sig=csp ====
_DWORD *__thiscall sub_408460(size_t Size)
{
  _DWORD *v2; // esi
  void *v3; // eax

  v2 = __2_YAPAXI_Z(0x20u); /*0x40846c*/
  memset(v2, 0, 0x20u); /*0x408477*/
  *v2 = 0; /*0x408481*/
  v2[1] = 0; /*0x408483*/
  v2[5] = 0; /*0x408486*/
  v2[6] = 0; /*0x408489*/
  DListNode::Init(v2 + 2); /*0x40848c*/
  v2[1] = Size; /*0x408491*/
  v3 = __2_YAPAXI_Z(Size); /*0x408495*/
  *v2 = v3; /*0x40849f*/
  if ( v3 ) /*0x4084a1*/
    return v2; /*0x4084b6*/
  if ( v2 ) /*0x4084a5*/
    __3_YAXPAX_Z(v2); /*0x4084a8*/
  return 0; /*0x4084b0*/
}


// ==== 0x004084E0  AudioStream::InitNodeFields  this=AudioStream  sig=csp ====
void __thiscall sub_4084E0(_DWORD *this)
{
  *this = 0; /*0x4084e2*/
  this->AudioStream_field_0x4 = 0; /*0x4084e4*/
  this->AudioStream_field_0x14 = 0; /*0x4084e7*/
  this->AudioStream_field_0x18 = 0; /*0x4084ea*/
  DListNode::Init(this + 2); /*0x4084f0*/
}


// ==== 0x00408500  sub_408500  this=-  sig=csp ====
int __fastcall sub_408500(int a1, _DWORD *a2)
{
  int result; // eax

  InsertAfterDListNode(a1 + 8, a2); /*0x408509*/
  result = a2[4]; /*0x40850e*/
  *(_DWORD *)(a1 + 4) += result; /*0x408516*/
  a2[5] = a1; /*0x408519*/
  return result; /*0x40851c*/
}


// ==== 0x00408520  AudioController::GetOffset  this=AudioController  sig=csp ====
int __thiscall sub_408520(int *this)
{
  return Queue::GetNext(this + 2);
}


// ==== 0x00408530  ObjectClass::nullsub_2  this=ObjectClass  sig=csp ====
void nullsub_2()
{
  ; /*0x408530*/
}


// ==== 0x00408540  Audio::CalcRate  this=Audio  sig=csp ====
int __thiscall Audio_CalcRate(_DWORD *this, int a2, int a3)
{
  return a2 * this->Audio_field_0x14 / 1000; /*0x40855b*/
}


// ==== 0x00408560  sub_408560  this=-  sig=ida-proto ====
unsigned __int64 __fastcall sub_408560(int a1, int a2)
{
  int v2; // esi

  v2 = *(_DWORD *)(a1 + 20); /*0x408561*/
  if ( v2 ) /*0x408568*/
    return 1000LL * a2 / (unsigned __int64)v2; /*0x408585*/
  else
    return 0; /*0x40858d*/
}


// ==== 0x004085A0  Struct::ZeroInit32  this=Struct  sig=csp ====
int __thiscall Struct_ZeroInit32(void *this)
{
  memset(this, 0, 0x20u); /*0x4085aa*/
  return 0; /*0x4085ac*/
}


// ==== 0x004085B0  ObjectClass::method_4085B0  this=ObjectClass  sig=csp ====
int __thiscall sub_4085B0(_DWORD *this)
{
  int v1; // edx
  int result; // eax

  v1 = this->vtable2; /*0x4085b3*/
  result = this->vtable3 * this->vtable4 * this->uniqueId; /*0x4085ba*/
  this->abstractFlags = result; /*0x4085c1*/
  if ( v1 == 1 || v1 == 2 ) /*0x4085c9*/
  {
    result >>= 2; /*0x4085cb*/
    this->abstractFlags = result; /*0x4085ce*/
  }
  return result; /*0x4085d1*/
}


// ==== 0x004085E0  sub_4085E0  this=-  sig=csp ====
void __fastcall sub_4085E0(_DWORD *a1, int a2, int a3)
{
  a1[4] = a3; /*0x4085e7*/
  a1[3] = a2; /*0x4085ea*/
  DListNode::InitEmpty(a1); /*0x4085ed*/
  a1[5] = 0; /*0x4085f2*/
}


// ==== 0x00408600  AudioNode::Release  this=ObjectClass  sig=csp ====
void __thiscall AudioNode_Release(_DWORD *this)
{
  this->abstractFlags = 0; /*0x408600*/
}


// ==== 0x00408610  ParseWaveFileHeader  this=-  sig=csp ====
int __fastcall sub_408610(int a1, _DWORD *a2, size_t *a3)
{
  unsigned __int16 *v3; // esi
  int v4; // edi
  int v7; // eax
  unsigned __int16 v8; // dx
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  int v14; // [esp+1Ch] [ebp-14h] BYREF
  size_t Size; // [esp+20h] [ebp-10h]
  _DWORD v16[3]; // [esp+24h] [ebp-Ch] BYREF

  v3 = 0; /*0x40861b*/
  v4 = 0; /*0x40861d*/
  if ( a3 ) /*0x408629*/
    *a3 = 0; /*0x40862b*/
  if ( a1 ) /*0x40862f*/
  {
    (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a1 + 40))(a1, 0, 0); /*0x40863e*/
    if ( (*(int (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)a1 + 36))(a1, v16, 12) == 12 /*0x40867a*/
      && v16[0] == 1179011410
      && v16[2] == 1163280727
      && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 24))(a1) )
    {
      while ( (*(int (__thiscall **)(int, int *, int))(*(_DWORD *)a1 + 36))(a1, &v14, 8) == 8 ) /*0x408697*/
      {
        if ( v14 == 544501094 ) /*0x4086a6*/
        {
          if ( Size >= 0x12 ) /*0x4086cb*/
          {
            v3 = (unsigned __int16 *)malloc(Size); /*0x4086f8*/
            memset(v3, 0, Size); /*0x408706*/
            v4 = 0; /*0x40870f*/
          }
          else
          {
            v3 = (unsigned __int16 *)malloc(0x12u); /*0x4086d4*/
            *(_DWORD *)v3 = 0; /*0x4086dd*/
            *((_DWORD *)v3 + 1) = 0; /*0x4086df*/
            *((_DWORD *)v3 + 2) = 0; /*0x4086e2*/
            *((_DWORD *)v3 + 3) = 0; /*0x4086e5*/
            v3[8] = 0; /*0x4086e8*/
          }
          (*(void (__thiscall **)(int, unsigned __int16 *, size_t))(*(_DWORD *)a1 + 36))(a1, v3, Size); /*0x40871e*/
          v3[8] = Size; /*0x408726*/
        }
        else
        {
          if ( v14 == 1635017060 ) /*0x4086ad*/
          {
            *a3 = Size; /*0x408749*/
            if ( !v3 ) /*0x40874b*/
              return v4; /*0x40874b*/
            if ( *v3 == 17 ) /*0x408758*/
            {
              v7 = v3[6]; /*0x40875c*/
              a2[1] = 1; /*0x408760*/
              a2[6] = v7; /*0x408767*/
              a2[4] = 2; /*0x40876a*/
            }
            else
            {
              if ( *v3 != 1 ) /*0x408777*/
                break; /*0x408777*/
              a2[1] = 0; /*0x40877b*/
              a2[4] = v3[7] >> 3; /*0x408789*/
            }
            v8 = v3[1]; /*0x40878e*/
            a2[3] = v8; /*0x408792*/
            a2[5] = *((_DWORD *)v3 + 2); /*0x408798*/
            v9 = v8 * a2[4]; /*0x40879e*/
            v10 = *((_DWORD *)v3 + 1); /*0x4087a1*/
            *a2 = 4; /*0x4087a4*/
            v11 = v10 * v9; /*0x4087aa*/
            a2[2] = v10; /*0x4087ad*/
            v12 = a2[1]; /*0x4087b0*/
            a2[5] = v11; /*0x4087b6*/
            if ( v12 == 1 || v12 == 2 ) /*0x4087be*/
              a2[5] = v11 >> 2; /*0x4087c3*/
            v4 = 1; /*0x4087ce*/
            break; /*0x4087ce*/
          }
          (*(void (__thiscall **)(int, size_t, int))(*(_DWORD *)a1 + 40))(a1, Size, 1); /*0x4086bf*/
        }
        if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 24))(a1) ) /*0x40872f*/
          break; /*0x408734*/
      }
      if ( v3 ) /*0x4087d4*/
        free(v3); /*0x4087d7*/
    }
  }
  return v4; /*0x4087e1*/
}


// ==== 0x004087F0  sub_4087F0  this=-  sig=ida-proto ====
_DWORD *sub_4087F0()
{
  _DWORD *v0; // esi
  int v1; // ecx
  _DWORD *v2; // eax

  v0 = __2_YAPAXI_Z(0xA4u); /*0x4087fc*/
  memset(v0, 0, 0xA4u); /*0x408807*/
  DListNode::Init(v0 + 1); /*0x40880f*/
  v0[38] = 0; /*0x408816*/
  v1 = 0; /*0x40881c*/
  v2 = v0 + 15; /*0x40881e*/
  do /*0x408836*/
  {
    *(v2 - 9) = v0; /*0x408821*/
    *(v2 - 2) = 0; /*0x408824*/
    *(v2 - 4) = v1; /*0x408827*/
    *v2 = 0; /*0x40882a*/
    *(v2 - 3) = 0; /*0x40882c*/
    ++v1; /*0x40882f*/
    v2 += 16; /*0x408830*/
  }
  while ( v1 < 2 ); /*0x408836*/
  return v0; /*0x40883a*/
}


// ==== 0x00408840  AudioSample::InitLinkedList  this=ObjectClass  sig=csp ====
void __thiscall sub_408840(_DWORD *this)
{
  _DWORD *v1; // ebx
  _DWORD *v2; // esi
  _DWORD *v3; // edi
  _DWORD *v4; // eax
  int v5; // edx
  _DWORD *v6; // ebp
  int v7; // esi
  _DWORD *v8; // eax
  _DWORD *v9; // ecx
  int v10; // edx
  _DWORD *v11; // ebx
  int v12; // edi
  _DWORD *v13; // esi

  v1 = this; /*0x408843*/
  v2 = (_DWORD *)this->vtable2; /*0x40884b*/
  v3 = this + 1; /*0x40884e*/
  if ( v2 != this + 1 ) /*0x408853*/
  {
    do /*0x4088a0*/
    {
      LinkedList::Init((_DWORD **)v2); /*0x40885c*/
      v4 = (_DWORD *)v2[12]; /*0x408861*/
      v2[12] = 0; /*0x408864*/
      v5 = v4[5]; /*0x40886d*/
      --*v4; /*0x408871*/
      v4[5] = v5 - v2[7]; /*0x408878*/
      v4[4] &= ~2u; /*0x408880*/
      if ( v2[4] ) /*0x408883*/
        __3_YAXPAX_Z((void *)v2[4]); /*0x40888b*/
      __3_YAXPAX_Z(v2); /*0x408894*/
      v2 = (_DWORD *)*v3; /*0x408899*/
    }
    while ( (_DWORD *)*v3 != v3 ); /*0x4088a0*/
  }
  v6 = (_DWORD *)*v3; /*0x4088a2*/
  if ( (_DWORD *)*v3 == v3 ) /*0x4088a6*/
  {
    v6 = 0; /*0x4088a8*/
  }
  else if ( v6 ) /*0x4088ae*/
  {
    v7 = 0; /*0x4088b0*/
    v8 = (_DWORD *)*v3; /*0x4088b2*/
    do /*0x4088d5*/
    {
      v9 = v8 + 9; /*0x4088b4*/
      v10 = 2; /*0x4088b7*/
      do /*0x4088cb*/
      {
        *(v9 - 1) = v8[6]; /*0x4088bf*/
        *v9 = v8[7]; /*0x4088c5*/
        v9 += 2; /*0x4088c7*/
        --v10; /*0x4088ca*/
      }
      while ( v10 ); /*0x4088cb*/
      v8[13] = v7; /*0x4088cd*/
      v8 = (_DWORD *)*v8; /*0x4088d0*/
      ++v7; /*0x4088d2*/
    }
    while ( v8 != v3 ); /*0x4088d5*/
    v1 = this; /*0x4088d7*/
  }
  v11 = v1 + 19; /*0x4088db*/
  v12 = 2; /*0x4088de*/
  v13 = v11; /*0x4088e3*/
  do /*0x408906*/
  {
    *(v13 - 3) = v6; /*0x4088e5*/
    *v13 = -1001; /*0x4088e8*/
    v13[1] = *v13; /*0x4088f0*/
    *(v13 - 1) = 0; /*0x4088f6*/
    AudioSample::SetField(v13 - 13); /*0x4088fd*/
    v13 += 16; /*0x408902*/
    --v12; /*0x408905*/
  }
  while ( v12 ); /*0x408906*/
  *v11 += this->abstractFlags; /*0x408913*/
  __3_YAXPAX_Z(this); /*0x408916*/
}


// ==== 0x00408930  AudioSample::SetField  this=AudioSample  sig=csp ====
int __thiscall sub_408930(_DWORD *this)
{
  int result; // eax

  result = this->q028; /*0x408930*/
  this->q02C = 0; /*0x408937*/
  this->AudioSample_field_0x0C = result; /*0x40893a*/
  if ( result ) /*0x40893d*/
  {
    result = *(_DWORD *)(result + 8 * this->q014 + 32); /*0x408943*/
    this->AudioSample_field_0x04 = result; /*0x408948*/
  }
  else
  {
    this->AudioSample_field_0x04 = 0; /*0x408958*/
  }
  this->AudioSample_field_0x08 = 0; /*0x40894b*/
  this->AudioSample_field_0x10 &= ~1u; /*0x408954*/
  return result; /*0x408957*/
}


// ==== 0x00408970  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_408970(_DWORD *this)
{
  _DWORD *v1; // edx
  int v2; // ebx
  _DWORD *v3; // esi
  _DWORD *v4; // edi
  _DWORD *v5; // eax
  int v6; // edx
  _DWORD *v7; // esi
  _DWORD *v8; // eax
  _DWORD *v9; // ecx
  int v10; // edx
  int *v11; // edi
  int v12; // ecx
  _DWORD *v13; // eax
  int result; // eax

  v1 = this; /*0x408973*/
  v2 = 0; /*0x408977*/
  v3 = (_DWORD *)this->vtable2; /*0x408979*/
  v4 = this + 1; /*0x40897c*/
  if ( v3 != this + 1 ) /*0x408985*/
  {
    do /*0x4089ce*/
    {
      LinkedList::Init((_DWORD **)v3); /*0x40898e*/
      v5 = (_DWORD *)v3[12]; /*0x408993*/
      v3[12] = 0; /*0x408996*/
      v6 = v5[5]; /*0x40899b*/
      --*v5; /*0x40899f*/
      v5[5] = v6 - v3[7]; /*0x4089a6*/
      v5[4] &= ~2u; /*0x4089ae*/
      if ( v3[4] ) /*0x4089b1*/
        __3_YAXPAX_Z((void *)v3[4]); /*0x4089b9*/
      __3_YAXPAX_Z(v3); /*0x4089c2*/
      v3 = (_DWORD *)*v4; /*0x4089c7*/
    }
    while ( (_DWORD *)*v4 != v4 ); /*0x4089ce*/
    v1 = this; /*0x4089d0*/
  }
  v7 = (_DWORD *)*v4; /*0x4089d4*/
  if ( (_DWORD *)*v4 == v4 ) /*0x4089d8*/
  {
    v7 = 0; /*0x4089da*/
  }
  else if ( v7 ) /*0x4089e0*/
  {
    v8 = (_DWORD *)*v4; /*0x4089e2*/
    do /*0x408a05*/
    {
      v9 = v8 + 9; /*0x4089e4*/
      v10 = 2; /*0x4089e7*/
      do /*0x4089fb*/
      {
        *(v9 - 1) = v8[6]; /*0x4089ef*/
        *v9 = v8[7]; /*0x4089f5*/
        v9 += 2; /*0x4089f7*/
        --v10; /*0x4089fa*/
      }
      while ( v10 ); /*0x4089fb*/
      v8[13] = v2; /*0x4089fd*/
      v8 = (_DWORD *)*v8; /*0x408a00*/
      ++v2; /*0x408a02*/
    }
    while ( v8 != v4 ); /*0x408a05*/
    v1 = this; /*0x408a07*/
  }
  v11 = v1 + 19; /*0x408a0d*/
  v12 = 2; /*0x408a10*/
  v13 = v1 + 19; /*0x408a15*/
  do /*0x408a51*/
  {
    *(v13 - 3) = v7; /*0x408a17*/
    *v13 = -1001; /*0x408a1a*/
    v13[1] = *v13; /*0x408a22*/
    *(v13 - 1) = 0; /*0x408a27*/
    *(v13 - 2) = 0; /*0x408a2a*/
    *(v13 - 10) = v7; /*0x408a2d*/
    if ( v7 ) /*0x408a30*/
      *(v13 - 12) = v7[2 * *(v13 - 8) + 8]; /*0x408a39*/
    else
      *(v13 - 12) = 0; /*0x408a3e*/
    *(v13 - 11) = 0; /*0x408a41*/
    *(v13 - 9) &= ~1u; /*0x408a4a*/
    v13 += 16; /*0x408a4d*/
    --v12; /*0x408a50*/
  }
  while ( v12 ); /*0x408a51*/
  result = *v11; /*0x408a53*/
  *v11 += v1[5]; /*0x408a5a*/
  return result; /*0x408a5c*/
}


// ==== 0x00408A70  AudioMixer::SetupChannels  this=AudioMixer  sig=csp ====
int __thiscall sub_408A70(int *this)
{
  int *v1; // edi
  int v2; // ebx
  int *v3; // eax
  _DWORD *v4; // edx
  int v5; // esi
  int *v6; // esi
  int v7; // edx
  _DWORD *v8; // eax
  int result; // eax

  v1 = (int *)this->AudioMixer_field_04; /*0x408a7c*/
  if ( v1 == this + 1 ) /*0x408a81*/
  {
    v1 = 0; /*0x408a85*/
  }
  else
  {
    v2 = 0; /*0x408a89*/
    if ( v1 ) /*0x408a8d*/
    {
      v3 = (int *)this->AudioMixer_field_04; /*0x408a8f*/
      do /*0x408ab2*/
      {
        v4 = v3 + 9; /*0x408a91*/
        v5 = 2; /*0x408a94*/
        do /*0x408aa8*/
        {
          *(v4 - 1) = v3[6]; /*0x408a9c*/
          *v4 = v3[7]; /*0x408aa2*/
          v4 += 2; /*0x408aa4*/
          --v5; /*0x408aa7*/
        }
        while ( v5 ); /*0x408aa8*/
        v3[13] = v2; /*0x408aaa*/
        v3 = (int *)*v3; /*0x408aad*/
        ++v2; /*0x408aaf*/
      }
      while ( v3 != this + 1 ); /*0x408ab2*/
    }
  }
  v6 = this + 19; /*0x408aba*/
  v7 = 2; /*0x408abd*/
  v8 = this + 19; /*0x408ac2*/
  do /*0x408afe*/
  {
    *(v8 - 3) = v1; /*0x408ac4*/
    *v8 = -1001; /*0x408ac7*/
    v8[1] = *v8; /*0x408acf*/
    *(v8 - 1) = 0; /*0x408ad4*/
    *(v8 - 2) = 0; /*0x408ad7*/
    *(v8 - 10) = v1; /*0x408ada*/
    if ( v1 ) /*0x408add*/
      *(v8 - 12) = v1[2 * *(v8 - 8) + 8]; /*0x408ae6*/
    else
      *(v8 - 12) = 0; /*0x408aeb*/
    *(v8 - 11) = 0; /*0x408aee*/
    *(v8 - 9) &= ~1u; /*0x408af7*/
    v8 += 16; /*0x408afa*/
    --v7; /*0x408afd*/
  }
  while ( v7 ); /*0x408afe*/
  result = *v6 + this->AudioMixer_field_14; /*0x408b05*/
  *v6 = result; /*0x408b07*/
  return result; /*0x408b09*/
}


// ==== 0x00408B10  sub_408B10  this=-  sig=csp ====
char __fastcall sub_408B10(_DWORD *a1, int *a2)
{
  int v4; // ecx
  int v5; // eax

  InsertBeforeLinkedList(a1 + 1, a2); /*0x408b19*/
  v4 = a1[5]; /*0x408b20*/
  ++*a1; /*0x408b24*/
  a1[5] = a2[7] + v4; /*0x408b2b*/
  a2[12] = (int)a1; /*0x408b2e*/
  v5 = a1[4]; /*0x408b31*/
  LOBYTE(v5) = v5 & 0xFD; /*0x408b35*/
  a1[4] = v5; /*0x408b37*/
  return v5; /*0x408b34*/
}


// ==== 0x00408B40  sub_408B40  this=-  sig=csp ====
int __fastcall sub_408B40(_DWORD *a1, int a2, int a3, size_t Size)
{
  int result; // eax
  _DWORD *v7; // esi
  void *v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // [esp+10h] [ebp-Ch]
  int v12; // [esp+14h] [ebp-8h]
  int v13; // [esp+18h] [ebp-4h]
  size_t Sizea; // [esp+24h] [ebp+8h]

  result = 0; /*0x408b46*/
  v11 = 0; /*0x408b50*/
  v12 = a2 - 1; /*0x408b54*/
  if ( a2 ) /*0x408b58*/
  {
    v13 = 1 << Size; /*0x408b6f*/
    Sizea = a3 + (1 << Size); /*0x408b75*/
    while ( 1 ) /*0x408b80*/
    {
      v7 = __2_YAPAXI_Z(0x3Cu); /*0x408b80*/
      memset(v7, 0, 0x3Cu); /*0x408b8b*/
      DListNode::InitEmpty(v7); /*0x408b92*/
      v8 = __2_YAPAXI_Z(Sizea); /*0x408b9c*/
      v7[4] = v8; /*0x408ba4*/
      if ( !v8 ) /*0x408ba9*/
        break; /*0x408ba9*/
      v7[5] = Size; /*0x408baf*/
      v7[7] = a3; /*0x408bc1*/
      v7[6] = (-1 << Size) & ((unsigned int)v8 + v13 - 1); /*0x408bc8*/
      if ( v7 ) /*0x408bcb*/
      {
        InsertBeforeLinkedList(a1 + 1, v7); /*0x408bd2*/
        v9 = a1[5]; /*0x408bd9*/
        ++*a1; /*0x408bdd*/
        a1[5] = v7[7] + v9; /*0x408be4*/
        v10 = v12; /*0x408be7*/
        v7[12] = a1; /*0x408beb*/
        a1[4] &= ~2u; /*0x408bfc*/
        ++v11; /*0x408c01*/
        --v12; /*0x408c05*/
        if ( v10 ) /*0x408c09*/
          continue; /*0x408c09*/
      }
      return v11; /*0x408c09*/
    }
    if ( v7 ) /*0x408c12*/
      __3_YAXPAX_Z(v7); /*0x408c15*/
    return v11; /*0x408c1d*/
  }
  return result; /*0x408c21*/
}


// ==== 0x00408C30  AcquireAudioStreamBuffer  this=-  sig=csp ====
int __fastcall AudioStream_AcquireBuffer(_DWORD *a1, int a2)
{
  int result; // eax
  int v3; // ebp
  _DWORD *v4; // ebx
  _DWORD *v5; // edx
  _DWORD *v6; // esi
  int v7; // edi
  int v8; // esi
  _DWORD *v9; // edx

  result = (int)&a1[16 * a2 + 6]; /*0x408c3b*/
  v3 = 0; /*0x408c3f*/
  if ( a1[16 * a2 + 13] ) /*0x408c45*/
  {
    Debug::Log(); /*0x408c63*/
    return 0; /*0x408c6b*/
  }
  else
  {
    if ( !a1[38] ) /*0x408c72*/
    {
      v4 = (_DWORD *)a1[1]; /*0x408c86*/
      if ( v4 == a1 + 1 ) /*0x408c8a*/
      {
        v4 = 0; /*0x408c8c*/
      }
      else if ( v4 ) /*0x408c92*/
      {
        v5 = (_DWORD *)a1[1]; /*0x408c94*/
        do /*0x408cb7*/
        {
          v6 = v5 + 9; /*0x408c96*/
          v7 = 2; /*0x408c99*/
          do /*0x408cad*/
          {
            *(v6 - 1) = v5[6]; /*0x408ca1*/
            *v6 = v5[7]; /*0x408ca7*/
            v6 += 2; /*0x408ca9*/
            --v7; /*0x408cac*/
          }
          while ( v7 ); /*0x408cad*/
          v5[13] = v3; /*0x408caf*/
          v5 = (_DWORD *)*v5; /*0x408cb2*/
          ++v3; /*0x408cb4*/
        }
        while ( v5 != a1 + 1 ); /*0x408cb7*/
      }
      v8 = 2; /*0x408cc2*/
      v9 = a1 + 19; /*0x408cc7*/
      do /*0x408d03*/
      {
        *(v9 - 3) = v4; /*0x408cc9*/
        *v9 = -1001; /*0x408ccc*/
        v9[1] = *v9; /*0x408cd4*/
        *(v9 - 1) = 0; /*0x408cd9*/
        *(v9 - 2) = 0; /*0x408cdc*/
        *(v9 - 10) = v4; /*0x408cdf*/
        if ( v4 ) /*0x408ce2*/
          *(v9 - 12) = v4[2 * *(v9 - 8) + 8]; /*0x408ceb*/
        else
          *(v9 - 12) = 0; /*0x408cf0*/
        *(v9 - 11) = 0; /*0x408cf3*/
        *(v9 - 9) &= ~1u; /*0x408cfc*/
        v9 += 16; /*0x408cff*/
        --v8; /*0x408d02*/
      }
      while ( v8 ); /*0x408d03*/
      a1[19] += a1[5]; /*0x408d0c*/
    }
    ++*(_DWORD *)(result + 28); /*0x408d19*/
    ++a1[38]; /*0x408d23*/
  }
  return result; /*0x408c6d*/
}


// ==== 0x00408D30  ObjectClass::method_408D30  this=ObjectClass  sig=csp ====
int __thiscall sub_408D30(_DWORD *this)
{
  return this->onBridge - this->isAliveFlag; /*0x408d3e*/
}


// ==== 0x00408D40  ObjectClass::method_408D40  this=ObjectClass  sig=csp ====
int __thiscall sub_408D40(_DWORD *this)
{
  return this->q04C - this->customSound_controller; /*0x408d48*/
}


// ==== 0x00408D50  AudioStream::GetChannel  this=AudioStream  sig=csp ====
int __thiscall Accessor_408d50(_DWORD *this)
{
  return this->AudioStream_field_0x14; /*0x408d53*/
}


// ==== 0x00408D80  sub_408D80  this=-  sig=ida-proto ====
_DWORD *__fastcall sub_408D80(int a1, int a2)
{
  _DWORD *v4; // esi
  void *v5; // eax

  v4 = __2_YAPAXI_Z(0x3Cu); /*0x408d8f*/
  memset(v4, 0, 0x3Cu); /*0x408d9a*/
  DListNode::InitEmpty(v4); /*0x408da1*/
  v5 = __2_YAPAXI_Z((1 << a2) + a1); /*0x408db3*/
  v4[4] = v5; /*0x408dbb*/
  if ( v5 ) /*0x408dc0*/
  {
    v4[5] = a2; /*0x408ddf*/
    v4[7] = a1; /*0x408de4*/
    v4[6] = (-1 << a2) & ((unsigned int)v5 + (1 << a2) - 1); /*0x408dec*/
    return v4; /*0x408dea*/
  }
  else
  {
    if ( v4 ) /*0x408dc4*/
      __3_YAXPAX_Z(v4); /*0x408dc7*/
    return 0; /*0x408dd2*/
  }
}


// ==== 0x00408E70  Count::DecrementRefCountsAudio  this=AbstractClass  sig=csp ====
int __thiscall Audio_DecrementRefCounts(_DWORD *this)
{
  int v1; // eax
  int result; // eax
  int v3; // edx

  v1 = this->referenceCount - 1; /*0x408e73*/
  this->referenceCount = v1; /*0x408e76*/
  if ( v1 < 0 ) /*0x408e79*/
    this->referenceCount = 0; /*0x408e7b*/
  result = *this; /*0x408e82*/
  v3 = *(_DWORD *)(*this + 152) - 1; /*0x408e8a*/
  *(_DWORD *)(*this + 152) = v3; /*0x408e8d*/
  if ( v3 < 0 ) /*0x408e93*/
  {
    result = *this; /*0x408e95*/
    *(_DWORD *)(*this + 152) = 0; /*0x408e97*/
  }
  return result; /*0x408ea1*/
}


// ==== 0x00408EB0  sub_408EB0  this=-  sig=ida-proto ====
int __fastcall sub_408EB0(int a1, int a2)
{
  *(_DWORD *)(a1 + 24) = a2; /*0x408eb0*/
  return 0; /*0x408eb5*/
}


// ==== 0x00408EC0  ObjectClass::method_408EC0  this=ObjectClass  sig=csp ====
int __thiscall sub_408EC0(_DWORD *this)
{
  return this->nextArrayIndex; /*0x408ec3*/
}


// ==== 0x00408ED0  ObjectClass::method_408ED0  this=ObjectClass  sig=csp ====
int __thiscall sub_408ED0(_DWORD *this)
{
  return this->abstractFlags; /*0x408ed3*/
}


// ==== 0x00408EE0  BufferedAudioStreamRead  this=-  sig=csp ====
int __fastcall BufferedAudioStreamRead(AudioStream *a1, AudioStream *a2, signed int a3)
{
  AudioStream *v3; // edi
  int v5; // ebx
  AudioStream *v6; // esi
  bool v7; // zf
  int v9; // [esp+10h] [ebp-8h]
  AudioStream *v10; // [esp+14h] [ebp-4h]

  v3 = a2; /*0x408ee7*/
  v9 = 0; /*0x408eed*/
  v10 = a2; /*0x408ef5*/
  ReadAudioStream(a1, 0); /*0x408ef9*/
  while ( 1 ) /*0x408f04*/
  {
    v5 = (int)a1->field_8; /*0x408f04*/
    if ( v5 > a3 ) /*0x408f0d*/
      v5 = a3; /*0x408f0f*/
    if ( !v5 ) /*0x408f13*/
      break; /*0x408f13*/
    if ( a1->field_14 ) /*0x408f15*/
    {
      v6 = (AudioStream *)a1->field_4; /*0x408f1e*/
    }
    else
    {
      v6 = v3; /*0x408f2e*/
      v3 = (AudioStream *)a1->field_4; /*0x408f30*/
    }
    qmemcpy(v3, v6, v5); /*0x408f26*/
    ReadAudioStream(a1, v5); /*0x408f43*/
    v7 = a3 == v5; /*0x408f5a*/
    v10 = (AudioStream *)((char *)v10 + v5); /*0x408f5c*/
    a3 -= v5; /*0x408f60*/
    v9 += v5; /*0x408f64*/
    if ( v7 ) /*0x408f68*/
      break; /*0x408f68*/
    v3 = v10; /*0x408f00*/
  }
  return v9; /*0x408f6e*/
}


// ==== 0x00408F80  sub_408F80  this=AbstractClass  sig=csp ====
int __fastcall sub_408F80(AudioStream *a1, int *a2, int a3, char *a4)
{
  int v7; // eax
  int v8; // edx
  int v9; // esi
  bool v10; // zf
  int v12; // [esp-8h] [ebp-1Ch]
  char v13; // [esp+10h] [ebp-4h] BYREF

  ReadAudioStream(a1, 0); /*0x408f8b*/
  if ( !a4 ) /*0x408f96*/
    a4 = &v13; /*0x408f9c*/
  *(_DWORD *)a4 = 0; /*0x408fa8*/
  do /*0x408fae*/
  {
    v7 = (int)a1->field_8; /*0x408fae*/
    if ( v7 > a3 ) /*0x408fb3*/
      v7 = a3; /*0x408fb5*/
    if ( !v7 ) /*0x408fb9*/
      break; /*0x408fb9*/
    v8 = *a2; /*0x408fbe*/
    v12 = (int)a1->field_4; /*0x408fc6*/
    if ( a1->field_14 ) /*0x408fbb*/
    {
      v9 = (*(int (__thiscall **)(int *, int, int))(v8 + 48))(a2, v12, v7); /*0x408fce*/
      v10 = v9 == 0; /*0x408fd0*/
      if ( v9 < 0 ) /*0x408fd2*/
        goto LABEL_11; /*0x408fd2*/
    }
    else
    {
      v9 = (*(int (__thiscall **)(int *, int, int))(v8 + 36))(a2, v12, v7); /*0x408fd9*/
      v10 = v9 == 0; /*0x408fdb*/
      if ( v9 < 0 ) /*0x408fdd*/
      {
LABEL_11:
        a1->field_24 = (void *)-2147221504; /*0x408fdf*/
        v10 = v9 == 0; /*0x408fe6*/
      }
    }
    if ( v10 ) /*0x408fe8*/
      return 2; /*0x409014*/
    if ( v9 == -1 ) /*0x408fed*/
      return 0; /*0x40901e*/
    ReadAudioStream(a1, v9); /*0x408ff3*/
    a3 -= v9; /*0x408ffc*/
    *(_DWORD *)a4 += v9; /*0x409004*/
  }
  while ( a3 ); /*0x408fae*/
  return 1; /*0x40900a*/
}


// ==== 0x00409030  WriteAudioStreamToFile  this=-  sig=csp ====
int __fastcall WriteAudioStreamToFile(MouseClass *aP0, FILE *a1, signed int arg0, char *a3)
{
  void *v7; // eax
  signed int v8; // esi
  bool v9; // zf
  char v11; // [esp+10h] [ebp-4h] BYREF

  ReadAudioStream((AudioStream *)aP0, 0); /*0x40903b*/
  if ( !a3 ) /*0x409046*/
    a3 = &v11; /*0x40904c*/
  *(_DWORD *)a3 = 0; /*0x409058*/
  do /*0x40905e*/
  {
    v7 = aP0->field_8; /*0x40905e*/
    if ( (int)v7 > arg0 ) /*0x409063*/
      v7 = (void *)arg0; /*0x409065*/
    if ( !v7 ) /*0x409069*/
      break; /*0x409069*/
    if ( aP0->field_14 ) /*0x40906b*/
    {
      v8 = Audio_Write_7C95D3(aP0->field_4, 1u, (size_t)v7, a1); /*0x40907f*/
      v9 = v8 == 0; /*0x409084*/
      if ( v8 < 0 ) /*0x409086*/
        goto LABEL_11; /*0x409086*/
    }
    else
    {
      v8 = Audio_Write(aP0->field_4, 1u, (size_t)v7, a1); /*0x409093*/
      v9 = v8 == 0; /*0x409098*/
      if ( v8 < 0 ) /*0x40909a*/
      {
LABEL_11:
        *(_DWORD *)&aP0->__pad_18[12] = -2147221504; /*0x40909c*/
        v9 = v8 == 0; /*0x4090a3*/
      }
    }
    if ( v9 ) /*0x4090a5*/
      return 2; /*0x4090d1*/
    if ( v8 == -1 ) /*0x4090aa*/
      return 0; /*0x4090db*/
    ReadAudioStream((AudioStream *)aP0, v8); /*0x4090b0*/
    arg0 -= v8; /*0x4090b9*/
    *(_DWORD *)a3 += v8; /*0x4090c1*/
  }
  while ( arg0 ); /*0x40905e*/
  return 1; /*0x4090c7*/
}


// ==== 0x004090F0  ObjectClass::method_4090F0  this=ObjectClass  sig=csp ====
int __thiscall sub_4090F0(_DWORD *this)
{
  return this->objectTypeFlags; /*0x4090f3*/
}


// ==== 0x00409100  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_409100(int *this)
{
  int v1; // esi
  int v3; // eax
  int v4; // eax
  _DWORD *v5; // eax
  int v6; // ebx
  int v7; // edx
  int v8; // edi
  _DWORD *v9; // edx
  int v10; // edx
  _DWORD *v11; // edx

  v1 = this->fallRate; /*0x409101*/
  if ( !v1 ) /*0x409106*/
    return 0; /*0x409108*/
  v3 = this->abstractFlags + 1; /*0x40910f*/
  if ( this->abstractFlags == 1 ) /*0x409113*/
    v3 = 0; /*0x409115*/
  v4 = (v3 << 6) + *this + 24; /*0x40911e*/
  this->attachedBomb += v1; /*0x409127*/
  *(_DWORD *)(v4 + 52) += v1; /*0x40912f*/
  v5 = (_DWORD *)this->owningHouseIndex; /*0x409132*/
  v6 = v1; /*0x409135*/
  while ( 1 ) /*0x409137*/
  {
    v7 = this->abstractFlags; /*0x409137*/
    v8 = v5[2 * v7 + 9]; /*0x40913a*/
    v9 = &v5[2 * v7 + 8]; /*0x40913e*/
    if ( v8 > v1 ) /*0x409144*/
      break; /*0x409144*/
    v1 -= v8; /*0x409146*/
    *v9 = v5[6]; /*0x40914b*/
    v9[1] = v5[7]; /*0x409150*/
    v10 = v5[12]; /*0x409153*/
    v5 = (_DWORD *)*v5; /*0x409156*/
    v11 = (_DWORD *)(v10 + 4); /*0x409158*/
    if ( v5 == v11 ) /*0x40915d*/
    {
      v5 = (_DWORD *)*v5; /*0x40915f*/
      if ( v5 == v11 ) /*0x409163*/
        v5 = 0; /*0x409165*/
    }
    if ( !v1 ) /*0x409169*/
      goto LABEL_13; /*0x409169*/
  }
  *v9 += v1; /*0x409171*/
  v9[1] -= v1; /*0x409178*/
LABEL_13:
  this->owningHouseIndex = (int)v5; /*0x40917b*/
  this->fallRate = 0; /*0x409180*/
  this->vtable4 = (int)v5; /*0x409187*/
  if ( v5 ) /*0x40918a*/
    this->vtable2 = v5[2 * this->abstractFlags + 8]; /*0x409193*/
  else
    this->vtable2 = 0; /*0x409198*/
  this->vtable3 = 0; /*0x40919f*/
  this->vtable2 &= ~1u; /*0x4091ac*/
  ReadAudioStream(this, 0); /*0x4091b1*/
  return v6; /*0x40910a*/
}


// ==== 0x004091C0  ReadAudioStream  this=AudioStream  sig=csp ====
int __fastcall ReadAudioStream(AudioStream *aP0, int a2)
{
  int v2; // eax
  void *v3; // ebp
  int v5; // ebx
  _DWORD *v6; // esi
  void *v7; // eax
  void *v8; // edi
  int v9; // eax
  _DWORD *v10; // esi
  _DWORD *v11; // eax
  _DWORD *v12; // eax
  void *v13; // eax
  char *v14; // eax
  int v15; // edx
  char *v16; // edi
  char *v17; // esi
  unsigned int v18; // eax
  unsigned int v19; // esi
  int v20; // [esp+Ch] [ebp-4h]

  v20 = 0; /*0x4091c6*/
  v2 = (char *)aP0->field_34 - (char *)aP0->field_38 - (unsigned int)aP0->field_2C; /*0x4091d2*/
  v3 = (void *)v2; /*0x4091d5*/
  if ( v2 ) /*0x4091d7*/
  {
    if ( v2 < a2 ) /*0x4091e5*/
      a2 = (char *)aP0->field_34 - (char *)aP0->field_38 - (unsigned int)aP0->field_2C; /*0x4091e7*/
    v5 = 8 * (int)aP0->field_14 + 32; /*0x4091ed*/
    while ( 1 ) /*0x4091f4*/
    {
      v6 = aP0->field_C; /*0x4091f4*/
      if ( ((int)aP0->field_10 & 1) != 0 /*0x40920e*/
        || (v7 = (void *)(*(_DWORD *)((char *)v6 + v5) + *(_DWORD *)((char *)v6 + v5 + 4) - (unsigned int)aP0->field_4),
            (int)v7 >= (int)v3) )
      {
        aP0->field_8 = v3; /*0x409215*/
      }
      else
      {
        aP0->field_8 = v7; /*0x409210*/
      }
      v8 = (void *)a2; /*0x40921a*/
      if ( !a2 ) /*0x40921c*/
        break; /*0x40921c*/
      if ( a2 < (int)aP0->field_8 ) /*0x409223*/
      {
        v14 = (char *)aP0->field_4 + a2; /*0x40925a*/
      }
      else
      {
        v8 = aP0->field_8; /*0x409225*/
        v9 = v6[12]; /*0x409227*/
        v10 = (_DWORD *)*v6; /*0x40922a*/
        v11 = (_DWORD *)(v9 + 4); /*0x40922c*/
        if ( v10 == v11 ) /*0x409231*/
        {
          v10 = (_DWORD *)*v10; /*0x409233*/
          if ( v10 == v11 ) /*0x409237*/
            v10 = 0; /*0x409239*/
        }
        v12 = aP0->field_28; /*0x40923b*/
        aP0->field_C = v10; /*0x40923e*/
        if ( v10 == v12 ) /*0x409243*/
        {
          v13 = aP0->field_10; /*0x409245*/
          LOBYTE(v13) = (unsigned __int8)v13 | 1; /*0x409248*/
          aP0->field_10 = v13; /*0x40924a*/
          v14 = (char *)v10[6]; /*0x40924d*/
        }
        else
        {
          v14 = *(char **)((char *)v10 + v5); /*0x409252*/
        }
      }
      a2 -= (int)v8; /*0x409260*/
      aP0->field_4 = v14; /*0x409264*/
      v20 += (int)v8; /*0x409267*/
      v3 = (void *)((_BYTE *)v3 - (_BYTE *)v8); /*0x40926b*/
    }
    v15 = *(_DWORD *)aP0->__pad_0; /*0x409279*/
    v16 = (char *)aP0->field_2C + v20; /*0x40927b*/
    v17 = (char *)aP0->field_30 + v20; /*0x40927d*/
    aP0->field_2C = v16; /*0x40927f*/
    aP0->field_30 = v17; /*0x409282*/
    v18 = (unsigned int)v17; /*0x409285*/
    v19 = *(_DWORD *)(v15 + 20); /*0x409287*/
    if ( v18 >= v19 ) /*0x40928c*/
      aP0->field_30 = (void *)(v18 % v19); /*0x409292*/
    if ( v16 && !aP0->field_18 ) /*0x409299*/
      sub_409100((int *)aP0->__pad_0); /*0x4092a0*/
    return v20; /*0x4092a5*/
  }
  else
  {
    aP0->field_8 = 0; /*0x4091d9*/
    return 0; /*0x4091de*/
  }
}


// ==== 0x00409310  AudioStream::ReadStreamAndReturn  this=AbstractClass  sig=csp ====
int __thiscall sub_409310(int *this)
{
  ReadAudioStream(this, 0); /*0x409315*/
  return this->vtable3; /*0x40931d*/
}


// ==== 0x00409320  Audio::GetSampleSize  this=Audio  sig=csp ====
int __thiscall Audio_GetSampleSize(_DWORD *this)
{
  return this->Audio_field_0x34 - this->Audio_field_0x38; /*0x409328*/
}


// ==== 0x00409330  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_409330(_DWORD *this)
{
  return this->nextObject; /*0x409333*/
}


// ==== 0x00409360  sub_409360  this=-  sig=csp ====
int sub_409360()
{
  LONGLONG v0; // rax
  LARGE_INTEGER Frequency; // [esp+0h] [ebp-8h] BYREF

  LODWORD(v0) = QueryPerformanceFrequency(&Frequency); /*0x409368*/
  if ( (_DWORD)v0 ) /*0x409370*/
  {
    v0 = Frequency.QuadPart / 1000; /*0x409383*/
    MEMORY[0x87E828] = Frequency.QuadPart / 1000; /*0x409388*/
    MEMORY[0x87E848] = (int (*)(void))sub_4093C0; /*0x409393*/
  }
  else
  {
    MEMORY[0x87E848] = (int (*)(void))sub_4093F0; /*0x4093a1*/
  }
  return v0; /*0x40939d*/
}


// ==== 0x004093B0  Audio::Callback  this=Audio  sig=csp ====
int Audio_Callback()
{
  if ( unk_87E848 ) /*0x4093b7*/
    return unk_87E848(); /*0x4093b9*/
  else
    return 0; /*0x4093bb*/
}


// ==== 0x004093C0  sub_4093C0  this=-  sig=ida-proto ====
LONGLONG sub_4093C0()
{
  LARGE_INTEGER PerformanceCount; // [esp+0h] [ebp-8h] BYREF

  QueryPerformanceCounter(&PerformanceCount); /*0x4093c8*/
  return PerformanceCount.QuadPart / MEMORY[0x87E828]; /*0x4093eb*/
}


// ==== 0x004093F0  ObjectClass::method_4093F0  this=ObjectClass  sig=csp ====
__int64 sub_4093F0()
{
  int v0; // esi
  int v1; // edi
  DWORD v2; // ebx
  DWORD Time; // eax

  v0 = ++MEMORY[0x87E84C]; /*0x4093ff*/
  v1 = HIDWORD(qword_816320); /*0x409411*/
  v2 = qword_816320; /*0x409413*/
  while ( 1 ) /*0x409433*/
  {
    Time = timeGetTime(); /*0x409433*/
    if ( Time < v2 ) /*0x409437*/
      ++v1; /*0x409439*/
    HIDWORD(qword_816320) = v1; /*0x409440*/
    LODWORD(qword_816320) = Time; /*0x409448*/
    if ( v0 == MEMORY[0x87E84C] ) /*0x409451*/
      break; /*0x409451*/
    v0 = MEMORY[0x87E84C]; /*0x409453*/
  }
  return qword_816320; /*0x409466*/
}


// ==== 0x00409470  ObjectClass::method  this=ObjectClass  sig=csp ====
int __thiscall sub_409470(_DWORD *this)
{
  HANDLE Thread; // eax
  DWORD LastError; // eax
  CHAR Buffer[1024]; // [esp+Ch] [ebp-400h] BYREF

  InitializeCriticalSection(&MEMORY[0x87E880]); /*0x40947f*/
  if ( DirectSoundCreate(0, &MEMORY[0x87E89C], 0) ) /*0x40948e*/
    return -2147221504; /*0x4094a4*/
  MEMORY[0x87E89C]->lpVtbl->SetCooperativeLevel(MEMORY[0x87E89C], g_hWnd, 2); /*0x4094b6*/
  this->nextArrayIndex = 1; /*0x4094b9*/
  if ( MEMORY[0x87E898] ) /*0x4094c7*/
  {
    ++MEMORY[0x87E878]; /*0x409595*/
  }
  else
  {
    MEMORY[0x87E878] = 0; /*0x4094cd*/
    MEMORY[0x87E850] = 0; /*0x4094d3*/
    MEMORY[0x87E858] = 0; /*0x4094d9*/
    MEMORY[0x87E868] = 0; /*0x4094df*/
    MEMORY[0x87E860] = 33; /*0x4094e5*/
    MEMORY[0x87E864] = 0; /*0x4094ef*/
    MEMORY[0x87E854] = 0; /*0x4094f5*/
    Thread = CreateThread( /*0x409511*/
               0,
               0x1000u,
               (LPTHREAD_START_ROUTINE)AudioStreamThreadProc,
               &MEMORY[0x87E850],
               0,
               &MEMORY[0x87E874]);
    MEMORY[0x87E86C] = (int)Thread; /*0x409519*/
    if ( !Thread ) /*0x40951e*/
      return -2147221504; /*0x40952d*/
    ++MEMORY[0x87E878]; /*0x409535*/
    MEMORY[0x87E898] = 1; /*0x40953e*/
    if ( !SetThreadPriority(Thread, 15) ) /*0x409548*/
    {
      LastError = GetLastError(); /*0x40955e*/
      FormatMessageA(0x1000u, 0, LastError, 0, Buffer, 0x400u, 0); /*0x40956b*/
      Debug::Log(); /*0x40957b*/
      return 0; /*0x40958d*/
    }
  }
  return 0; /*0x409497*/
}


// ==== 0x004095B0  AudioStreamThreadProc  this=-  sig=csp ====
DWORD __stdcall AudioStreamThreadProc(_DWORD *lpThreadParameter)
{
  _DWORD *v1; // esi
  ObjectClass *v2; // edi
  __int64 v3; // rax
  unsigned int v4; // ebx
  unsigned int v5; // ebp
  int *i; // esi
  int v7; // eax
  int v8; // edx
  int v9; // esi
  int v10; // ecx
  bool v11; // cc
  unsigned int v12; // eax
  int v13; // edi
  int v14; // eax
  int v15; // ecx
  bool v16; // zf
  int v17; // eax
  void (__thiscall *v18)(int *); // eax
  _BYTE v20[4]; // [esp+10h] [ebp-14h] BYREF
  unsigned int v21; // [esp+14h] [ebp-10h] BYREF
  ObjectClass *v22; // [esp+18h] [ebp-Ch]
  int *v23[2]; // [esp+1Ch] [ebp-8h] BYREF

  v1 = lpThreadParameter; /*0x4095b5*/
  lpThreadParameter[6] = 1; /*0x4095be*/
  lpThreadParameter[2] = 0; /*0x4095c1*/
  if ( !*lpThreadParameter ) /*0x4095c8*/
  {
    while ( 1 ) /*0x4095d8*/
    {
      v22 = (ObjectClass *)v1[8]; /*0x4095d8*/
      v2 = v22; /*0x4095d3*/
      if ( v22 ) /*0x4095dc*/
      {
        if ( v22[1].customSound_controller[2] ) /*0x4095e2*/
        {
          Sleep(5u); /*0x409866*/
          goto LABEL_30; /*0x409866*/
        }
        EnterCriticalSection(&MEMORY[0x87E880]); /*0x4095f5*/
        LODWORD(v3) = Audio::Callback(); /*0x4095fb*/
        v4 = HIDWORD(v3); /*0x409600*/
        v5 = v3; /*0x409602*/
        AudioThread::UpdateStats((int)&v2[2].nextArrayIndex, v3); /*0x40960c*/
        for ( i = (int *)sub_4035B0((int)v2, (int *)v23); i; i = AudioQueue::IteratorNext(v23) ) /*0x409620*/
        {
          if ( (i[41] & 1) != 0 ) /*0x40962d*/
          {
            v7 = *(_DWORD *)(i[86] + 100); /*0x409639*/
            if ( v7 && !(*(int (__stdcall **)(int, _BYTE *))(*(_DWORD *)v7 + 36))(v7, v20) && (v20[0] & 1) != 0 ) /*0x409660*/
            {
              *(_QWORD *)(i[86] + 24) = __PAIR64__(v4, v5) - *(_QWORD *)(i[86] + 16); /*0x40967a*/
              v8 = i[86]; /*0x409680*/
              *(_DWORD *)(v8 + 16) = v5; /*0x409686*/
              *(_DWORD *)(v8 + 20) = v4; /*0x409689*/
              v9 = i[86]; /*0x40968c*/
              (*(void (__stdcall **)(_DWORD, unsigned int *, int))(**(_DWORD **)(v9 + 100) + 16))( /*0x4096a1*/
                *(_DWORD *)(v9 + 100),
                &v21,
                v9 + 52);
              v10 = v21 / *(_DWORD *)(v9 + 108) - *(_DWORD *)(v9 + 12); /*0x4096b2*/
              if ( v10 ) /*0x4096b4*/
              {
                v11 = v10 < 0; /*0x4096b6*/
                if ( v10 < 0 ) /*0x4096b8*/
                {
                  v10 = v21 / *(_DWORD *)(v9 + 108) - *(_DWORD *)(v9 + 12) + 4; /*0x4096c2*/
                  v11 = v10 <= 0; /*0x4096c4*/
                }
                if ( !v11 ) /*0x4096c6*/
                {
                  v12 = *(_DWORD *)(v9 + 12) + v10; /*0x4096cb*/
                  *(_DWORD *)(v9 + 12) = v12; /*0x4096d1*/
                  if ( v12 >= 4 ) /*0x4096d4*/
                    *(_DWORD *)(v9 + 12) &= 3u; /*0x4096dc*/
                  *(_DWORD *)(v9 + 212) += v10; /*0x4096e7*/
                  v13 = *(_DWORD *)(v9 + 108) * v10; /*0x4096f1*/
                  v14 = ProcessAudioStream((int *)v9, v13); /*0x4096f7*/
                  if ( *(_DWORD *)(v9 + 64) > v13 ) /*0x4096ff*/
                    *(_DWORD *)(v9 + 64) = v13; /*0x409701*/
                  v15 = *(_DWORD *)(v9 + 8) - v13; /*0x409707*/
                  v16 = *(_DWORD *)(v9 + 8) == v13; /*0x409709*/
                  *(_DWORD *)(v9 + 8) = v15; /*0x40970b*/
                  if ( v15 < 0 || v16 || !v14 ) /*0x409712*/
                    (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v9 + 100) + 72))(*(_DWORD *)(v9 + 100)); /*0x40971a*/
                }
              }
              ++*(_DWORD *)(v9 + 208); /*0x409724*/
              v2 = v22; /*0x40972a*/
            }
            else
            {
              v17 = *(_DWORD *)(i[86] + 100); /*0x409736*/
              if ( v17 ) /*0x40973b*/
                (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v17 + 72))(*(_DWORD *)(i[86] + 100)); /*0x409740*/
              v18 = (void (__thiscall *)(int *))i[89]; /*0x409743*/
              if ( v18 ) /*0x40974b*/
                v18(i); /*0x40974f*/
            }
          }
        }
        if ( v2 ) /*0x409766*/
        {
          Audio::InitChannels((char *)MEMORY[0x87E744]); /*0x409772*/
          Audio::InitChannels((char *)MEMORY[0x87E748]); /*0x40977d*/
          Audio::InitChannels((char *)MEMORY[0x87E740]); /*0x409788*/
          Audio::InitChannels((char *)MEMORY[0x87E73C]); /*0x409793*/
          Audio::InitChannels((char *)MEMORY[0x87E754]); /*0x40979e*/
          Audio::InitChannels((char *)MEMORY[0x87E758]); /*0x4097a9*/
          Audio::InitChannels((char *)MEMORY[0x87E750]); /*0x4097b4*/
          Audio::InitChannels((char *)MEMORY[0x87E74C]); /*0x4097bf*/
          sub_403810((int (**)(void))v2); /*0x4097c6*/
          ObjectClass::ClearFlags2((_DWORD *)MEMORY[0x87E748]); /*0x4097d1*/
          ObjectClass::ClearFlags2((_DWORD *)MEMORY[0x87E744]); /*0x4097dc*/
          ObjectClass::ClearFlags2((_DWORD *)MEMORY[0x87E740]); /*0x4097e7*/
          ObjectClass::ClearFlags2((_DWORD *)MEMORY[0x87E73C]); /*0x4097f2*/
          ObjectClass::ClearFlags2((_DWORD *)MEMORY[0x87E754]); /*0x4097fd*/
          ObjectClass::ClearFlags2((_DWORD *)MEMORY[0x87E758]); /*0x409808*/
          ObjectClass::ClearFlags2((_DWORD *)MEMORY[0x87E750]); /*0x409813*/
          ObjectClass::ClearFlags2((_DWORD *)MEMORY[0x87E74C]); /*0x40981e*/
        }
        LeaveCriticalSection(&MEMORY[0x87E880]); /*0x409828*/
        v1 = lpThreadParameter; /*0x409833*/
      }
      Sleep(v1[4]); /*0x40983e*/
LABEL_30:
      ++v1[1]; /*0x409844*/
      if ( *v1 ) /*0x40984b*/
      {
        v1[2] = 1; /*0x409855*/
        return 0; /*0x409861*/
      }
    }
  }
  lpThreadParameter[2] = 1; /*0x409868*/
  return 0; /*0x40985a*/
}


// ==== 0x00409880  ProcessAudioStream  this=-  sig=csp ====
int __fastcall ProcessAudioStream(int *a1, int a2)
{
  int v3; // ebp
  int v4; // ebx
  int v5; // edx
  int v6; // eax
  int v8; // ebp
  char *v9; // ebx
  int v10; // eax
  bool v11; // cc
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  char v16; // dl
  unsigned int v17; // ecx
  unsigned int v18; // eax
  int v19; // eax
  int v20; // eax
  unsigned int v22; // [esp+84h] [ebp-2Ch] BYREF
  int v23; // [esp+88h] [ebp-28h] BYREF
  int v24; // [esp+8Ch] [ebp-24h] BYREF
  int v25; // [esp+90h] [ebp-20h] BYREF
  int v26; // [esp+94h] [ebp-1Ch] BYREF
  char *v27; // [esp+98h] [ebp-18h] BYREF
  int v28; // [esp+9Ch] [ebp-14h]
  int v29; // [esp+A0h] [ebp-10h]
  int v30; // [esp+A4h] [ebp-Ch]
  int v31; // [esp+A8h] [ebp-8h]
  unsigned int v32; // [esp+ACh] [ebp-4h] BYREF

  v30 = a2; /*0x409889*/
  v27 = 0; /*0x409891*/
  v25 = 0; /*0x409895*/
  v26 = 0; /*0x409899*/
  v24 = 0; /*0x40989d*/
  v28 = 0; /*0x4098a1*/
  v31 = 0; /*0x4098a5*/
  if ( a2 <= 0 ) /*0x4098a9*/
  {
LABEL_45:
    v31 = 1; /*0x409c03*/
  }
  else
  {
    while ( 1 ) /*0x4098af*/
    {
      if ( a1[14] <= 0 ) /*0x4098b4*/
      {
        a1[12] = 0; /*0x4098b6*/
        a1[14] = a1[26]; /*0x4098bc*/
      }
      v29 = 0; /*0x4098bf*/
      v23 = a2; /*0x4098c3*/
      if ( a2 > (unsigned int)a1[14] ) /*0x4098cc*/
        v23 = a1[14]; /*0x4098d1*/
      if ( v28 ) /*0x4098d9*/
      {
        (*(void (__stdcall **)(int, char *, int, int, int))(*(_DWORD *)a1[25] + 76))(a1[25], v27, v26, v25, v24); /*0x4098f5*/
        v28 = 0; /*0x4098f8*/
      }
      v3 = a1[12]; /*0x4098fc*/
      v4 = 3; /*0x409918*/
      if ( (*(int (__stdcall **)(int, int, int, char **, int *, int *, int *, _DWORD))(*(_DWORD *)a1[25] + 44))( /*0x409925*/
             a1[25],
             v3,
             v23,
             &v27,
             &v26,
             &v25,
             &v24,
             0) )
      {
        break; /*0x409925*/
      }
LABEL_12:
      v28 = 1; /*0x409a0b*/
      if ( v25 || (v8 = v23, v26 != v23) || v24 ) /*0x409a35*/
      {
        Debug::Log(); /*0x409bf9*/
        goto LABEL_47; /*0x409c01*/
      }
      v9 = v27; /*0x409a3b*/
      if ( v23 ) /*0x409a41*/
      {
        do /*0x409bb4*/
        {
          v22 = v8; /*0x409a47*/
          v10 = a1[11]; /*0x409a4b*/
          v11 = v10 <= 0; /*0x409a4e*/
          if ( !v10 ) /*0x409a50*/
          {
            a1[11] = -1; /*0x409a56*/
            if ( !a1[51] ) /*0x409a5d*/
            {
              (*(void (**)(void))(*a1 + 348))(); /*0x409a69*/
              a1[51] = 1; /*0x409a6f*/
            }
            if ( !*(_DWORD *)(*a1 + 372) && !a1[42] ) /*0x409a83*/
            {
              (*(void (**)(void))(*a1 + 352))(); /*0x409a8b*/
              if ( *(_DWORD *)(*a1 + 372) ) /*0x409a93*/
                AudioBuffer::InitializePlayback(a1); /*0x409a9d*/
            }
            v12 = *a1; /*0x409aa2*/
            if ( *(_DWORD *)(*a1 + 372) ) /*0x409aa4*/
            {
              a1[51] = 0; /*0x409aac*/
              a1[10] = *(_DWORD *)(v12 + 368); /*0x409ab8*/
              a1[8] = *(_DWORD *)(v12 + 368); /*0x409ac1*/
              v13 = *(_DWORD *)(v12 + 372); /*0x409ac4*/
              a1[9] = v13; /*0x409aca*/
              a1[11] = v13; /*0x409acd*/
            }
            v14 = a1[11]; /*0x409ad0*/
            v11 = v14 <= 0; /*0x409ad3*/
            if ( !v14 ) /*0x409ad5*/
            {
              a1[11] = -1; /*0x409ad7*/
              v11 = a1[11] <= 0; /*0x409ae1*/
            }
          }
          if ( !v11 || a1[42] ) /*0x409ae5*/
          {
            v23 = a1[11]; /*0x409b30*/
            if ( v23 > 0 ) /*0x409b34*/
            {
              if ( !((int (__fastcall *)(int *, char *, unsigned int *, int, int *))a1[28])(a1, v9, &v22, a1[10], &v23) ) /*0x409b6a*/
                goto LABEL_47; /*0x409b6a*/
              v19 = v23; /*0x409b70*/
            }
            else
            {
              if ( !((int (__fastcall *)(int *, char *, unsigned int *, _DWORD, _DWORD))a1[28])(a1, v9, &v22, 0, 0) ) /*0x409b46*/
                goto LABEL_47; /*0x409b46*/
              v19 = 0; /*0x409b4c*/
              a1[11] = 0; /*0x409b4e*/
            }
            a1[10] += v19; /*0x409b79*/
            a1[11] -= v19; /*0x409b81*/
            v18 = v22; /*0x409b87*/
            a1[2] += v22; /*0x409b8d*/
          }
          else
          {
            if ( *(_DWORD *)(*a1 + 396) == 2 ) /*0x409afc*/
              v15 = 0; /*0x409afe*/
            else
              v15 = -2139062144; /*0x409b02*/
            v16 = v22; /*0x409b07*/
            v17 = v22 >> 2; /*0x409b0b*/
            memset32(v9, v15, v22 >> 2); /*0x409b0e*/
            memset(&v9[4 * v17], v15, v16 & 3); /*0x409b15*/
            v18 = v22; /*0x409b1a*/
            a1[15] -= v22; /*0x409b20*/
            v8 = v23; /*0x409b23*/
          }
          v9 += v18; /*0x409b90*/
          a1[12] += v18; /*0x409b97*/
          a1[14] -= v18; /*0x409b9f*/
          v8 -= v18; /*0x409ba6*/
          v23 = v8; /*0x409bac*/
          v29 += v18; /*0x409bb0*/
        }
        while ( v8 ); /*0x409bb4*/
      }
      v20 = v30 - v29; /*0x409bc2*/
      v30 -= v29; /*0x409bc6*/
      if ( v30 <= 0 ) /*0x409bca*/
        goto LABEL_45; /*0x409bca*/
      a2 = v20; /*0x409bcc*/
    }
    while ( !(*(int (__stdcall **)(int))(*(_DWORD *)a1[25] + 80))(a1[25]) ) /*0x409934*/
    {
      a1[11] = 0; /*0x409945*/
      a1[2] = 0; /*0x409948*/
      a1[15] = 4 * a1[27]; /*0x409951*/
      (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)a1[25] + 52))(a1[25], 0); /*0x40995b*/
      (*(void (__stdcall **)(int, unsigned int *, int *))(*(_DWORD *)a1[25] + 16))(a1[25], &v32, a1 + 13); /*0x40996d*/
      a1[3] = v32 / a1[27]; /*0x409979*/
      a1[4] = Audio::Callback(); /*0x409981*/
      a1[5] = v5; /*0x409984*/
      v6 = a1[25]; /*0x40998a*/
      a1[16] = a1[26]; /*0x409991*/
      (*(void (__stdcall **)(int, int *, int *))(*(_DWORD *)v6 + 16))(v6, a1 + 12, a1 + 13); /*0x409998*/
      a1[14] = a1[26] - a1[12]; /*0x4099a2*/
      a1[52] = 0; /*0x4099a7*/
      a1[54] = a1[3]; /*0x4099b0*/
      a1[53] = 0; /*0x4099b6*/
      a1[55] = a1[12]; /*0x4099be*/
      Debug::Log(); /*0x4099c9*/
      if ( !v4-- ) /*0x4099d1*/
        break; /*0x4099d6*/
      if ( !(*(int (__stdcall **)(int, int, int, char **, int *, int *, int *, _DWORD))(*(_DWORD *)a1[25] + 44))( /*0x4099fe*/
              a1[25],
              v3,
              v23,
              &v27,
              &v26,
              &v25,
              &v24,
              0) )
        goto LABEL_12; /*0x409a03*/
    }
    Debug::Log(); /*0x409bd8*/
  }
  if ( v28 ) /*0x409c0f*/
LABEL_47:
    (*(void (__stdcall **)(int, char *, int, int, int))(*(_DWORD *)a1[25] + 76))(a1[25], v27, v26, v25, v24); /*0x409c11*/
  return v31; /*0x409c32*/
}


// ==== 0x00409C40  AudioBuffer::InitializePlayback  this=AudioBuffer  sig=csp ====
_DWORD *__thiscall sub_409C40(int *this)
{
  int v2; // ecx
  _DWORD *result; // eax
  _DWORD *v4; // eax
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  void *v8; // eax

  v2 = *this; /*0x409c46*/
  result = *(_DWORD **)(v2 + 360); /*0x409c48*/
  if ( result ) /*0x409c50*/
  {
    v4 = (_DWORD *)result[5]; /*0x409c56*/
    if ( !v4 ) /*0x409c5b*/
      v4 = (_DWORD *)(*(_DWORD *)(v2 + 172) + 68); /*0x409c63*/
    *(this + 38) = 0; /*0x409c66*/
    *(this + 33) = 0; /*0x409c6c*/
    *(this + 32) = 0; /*0x409c72*/
    *(this + 29) = 3; /*0x409c78*/
    *(this + 35) = 0; /*0x409c7f*/
    *(this + 40) = 0; /*0x409c85*/
    v5 = v4[3]; /*0x409c8b*/
    *(this + 42) = 0; /*0x409c8e*/
    *(this + 41) = v5; /*0x409c94*/
    v6 = v4[1]; /*0x409c9a*/
    if ( v6 ) /*0x409c9f*/
    {
      v7 = v6 - 1; /*0x409ca1*/
      if ( v7 ) /*0x409ca2*/
      {
        if ( v7 == 1 ) /*0x409ca5*/
          *(this + 28) = (int)AudioController::LoadThemeBank; /*0x409ca7*/
      }
      else
      {
        *(this + 28) = (int)AudioController::LoadThemeBank; /*0x409cb0*/
        this->__pad_0B0 = (int)ProcessAudioChannelMovement; /*0x409cb7*/
        *(this + 35) = v4[6]; /*0x409cc4*/
        this->q0AC = v4[6]; /*0x409ccd*/
        *(this + 40) = 4 * v4[6] + 128; /*0x409cdd*/
      }
    }
    else
    {
      *(this + 28) = (int)sub_409D90; /*0x409ce5*/
    }
    if ( *(this + 34) < *(this + 35) ) /*0x409cfa*/
    {
      if ( *(this + 31) ) /*0x409cfc*/
        free((void *)*(this + 31)); /*0x409d04*/
      v8 = malloc(*(this + 35)); /*0x409d13*/
      *(this + 31) = (int)v8; /*0x409d1d*/
      if ( v8 ) /*0x409d20*/
        *(this + 34) = *(this + 35); /*0x409d30*/
      else
        *(this + 34) = 0; /*0x409d22*/
    }
    result = (_DWORD *)*(this + 40); /*0x409d3c*/
    if ( *(this + 39) < (int)result ) /*0x409d44*/
    {
      if ( *(this + 36) ) /*0x409d46*/
        free((void *)*(this + 36)); /*0x409d51*/
      result = malloc(*(this + 40)); /*0x409d60*/
      *(this + 36) = (int)result; /*0x409d6a*/
      if ( result ) /*0x409d70*/
      {
        result = (_DWORD *)*(this + 40); /*0x409d7b*/
        *(this + 39) = (int)result; /*0x409d81*/
      }
      else
      {
        *(this + 39) = 0; /*0x409d72*/
      }
    }
  }
  return result; /*0x409d78*/
}


// ==== 0x00409D90  sub_409D90  this=-  sig=ida-proto ====
int __fastcall sub_409D90(int a1, void *a2, unsigned int *a3, const void *a4, unsigned int *a5)
{
  unsigned int v5; // eax

  v5 = *a3; /*0x409d9a*/
  if ( (int)*a3 > (int)*a5 ) /*0x409da1*/
    v5 = *a5; /*0x409da3*/
  if ( v5 ) /*0x409da7*/
  {
    qmemcpy(a2, a4, v5); /*0x409db8*/
    *a3 = v5; /*0x409dc1*/
    *a5 = v5; /*0x409dc4*/
  }
  return 1; /*0x409dc8*/
}


// ==== 0x00409DE0  AudioController::LoadThemeBank  this=AudioController  sig=ida-proto ====
int __fastcall sub_409DE0(int a1, char *a2, signed int *a3, char *a4, signed int *a5)
{
  signed int v7; // edx
  unsigned int v8; // eax
  const void *v9; // esi
  int v10; // eax
  signed int v11; // edx
  int v12; // ecx
  unsigned int v13; // eax
  int v14; // eax
  int v15; // eax
  signed int v17; // [esp+10h] [ebp-14h]
  signed int v18; // [esp+14h] [ebp-10h]
  signed int v20; // [esp+1Ch] [ebp-8h]
  signed int v21; // [esp+20h] [ebp-4h]

  v17 = 0; /*0x409df7*/
  v18 = 0; /*0x409dfb*/
  v20 = 0; /*0x409dff*/
  v21 = 0; /*0x409e03*/
  if ( !*(_DWORD *)(a1 + 144) || !*(_DWORD *)(a1 + 124) ) /*0x409e0d*/
    return 0; /*0x409fd0*/
  if ( a5 ) /*0x409e1c*/
    v17 = *a5; /*0x409e20*/
  if ( a3 ) /*0x409e2a*/
    v18 = *a3; /*0x409e2e*/
  while ( 2 ) /*0x409e3e*/
  {
    switch ( *(_DWORD *)(a1 + 116) ) /*0x409e3e*/
    {
      case 0: /*0x409e3e*/
        v7 = *(_DWORD *)(a1 + 132); /*0x409e45*/
        if ( v7 && a4 ) /*0x409e51*/
        {
          v8 = *(_DWORD *)(a1 + 132); /*0x409e57*/
          if ( v7 > v17 ) /*0x409e5b*/
            v8 = v17; /*0x409e5d*/
          if ( !v8 ) /*0x409e61*/
            goto LABEL_25; /*0x409e61*/
          v9 = a4; /*0x409e78*/
          a4 += v8; /*0x409e7a*/
          qmemcpy((void *)(*(_DWORD *)(a1 + 124) + *(_DWORD *)(a1 + 128) - v7), v9, v8); /*0x409e7f*/
          v20 += v8; /*0x409e9c*/
          v17 -= v8; /*0x409ea0*/
          *(_DWORD *)(a1 + 132) -= v8; /*0x409ea4*/
          *(_DWORD *)(a1 + 168) = 1; /*0x409eaa*/
        }
        else
        {
          v10 = *(_DWORD *)(a1 + 120); /*0x409ebb*/
          *(_DWORD *)(a1 + 132) = 0; /*0x409ebe*/
          *(_DWORD *)(a1 + 116) = v10; /*0x409ec4*/
        }
        continue; /*0x409eb6*/
      case 1: /*0x409e3e*/
        v11 = *(_DWORD *)(a1 + 152); /*0x409ecc*/
        if ( !v11 ) /*0x409ed4*/
        {
          v12 = *(_DWORD *)(a1 + 120); /*0x409ed6*/
          *(_DWORD *)(a1 + 168) = 0; /*0x409ed9*/
          *(_DWORD *)(a1 + 116) = v12; /*0x409edf*/
          continue; /*0x409ee2*/
        }
        v13 = *(_DWORD *)(a1 + 152); /*0x409eeb*/
        if ( v11 > v18 ) /*0x409eef*/
          v13 = v18; /*0x409ef1*/
        if ( v13 ) /*0x409ef5*/
        {
          qmemcpy(a2, (const void *)(*(_DWORD *)(a1 + 144) + *(_DWORD *)(a1 + 148) - v11), v13); /*0x409f16*/
          v21 += v13; /*0x409f39*/
          a2 += v13; /*0x409f3d*/
          v18 -= v13; /*0x409f41*/
          *(_DWORD *)(a1 + 152) -= v13; /*0x409f45*/
          continue; /*0x409f4d*/
        }
LABEL_25:
        if ( a5 ) /*0x409fa8*/
          *a5 = v20; /*0x409fae*/
        if ( a3 ) /*0x409fb6*/
          *a3 = v21; /*0x409fbc*/
        return 1;
      case 2: /*0x409e3e*/
        if ( !(*(int (__thiscall **)(int))(a1 + 176))(a1) ) /*0x409f5c*/
          return 0; /*0x409f5c*/
        v14 = *(_DWORD *)(a1 + 148); /*0x409f5e*/
        *(_DWORD *)(a1 + 116) = 1; /*0x409f64*/
        *(_DWORD *)(a1 + 152) = v14; /*0x409f6b*/
        *(_DWORD *)(a1 + 120) = 3; /*0x409f71*/
        continue; /*0x409f78*/
      case 3: /*0x409e3e*/
        if ( !a4 ) /*0x409f7f*/
          goto LABEL_25; /*0x409f7f*/
        v15 = *(_DWORD *)(a1 + 172); /*0x409f81*/
        *(_DWORD *)(a1 + 116) = 0; /*0x409f87*/
        *(_DWORD *)(a1 + 128) = v15; /*0x409f8a*/
        *(_DWORD *)(a1 + 132) = v15; /*0x409f90*/
        *(_DWORD *)(a1 + 120) = 2; /*0x409f96*/
        continue; /*0x409f9d*/
      default:
        continue;
    }
  }
}


// ==== 0x0040A090  ObjectClass::method_40A090  this=ObjectClass  sig=csp ====
int __thiscall sub_40A090(int this)
{
  _DWORD *v2; // edi
  __int16 v3; // cx
  int v4; // edx
  int v6; // [esp+10h] [ebp-88h] BYREF
  int v7; // [esp+14h] [ebp-84h]
  int v8; // [esp+18h] [ebp-80h]
  int v9; // [esp+1Ch] [ebp-7Ch]
  int v10; // [esp+20h] [ebp-78h]
  _DWORD v11[5]; // [esp+24h] [ebp-74h] BYREF
  _DWORD v12[24]; // [esp+38h] [ebp-60h] BYREF

  v2 = (_DWORD *)(this + 368); /*0x40a09d*/
  *(_DWORD *)(this + 244) = 100; /*0x40a0a8*/
  CoordBounds::Constructor((_DWORD *)(this + 368), 33, 0); /*0x40a0b2*/
  AudioStream::ResetChannel(v2, 1056, 0); /*0x40a0bf*/
  AudioStream::ResetChannel2(v2, 3168, 0); /*0x40a0cc*/
  MEMORY[0x87E870] = this; /*0x40a0d3*/
  v3 = *(_WORD *)(this + 84); /*0x40a0d9*/
  v6 = 0; /*0x40a0dd*/
  v7 = 0; /*0x40a0e1*/
  v8 = 0; /*0x40a0e7*/
  v4 = *(_DWORD *)(this + 76); /*0x40a0eb*/
  v9 = 0; /*0x40a0ee*/
  v7 = v4; /*0x40a0f2*/
  LOWORD(v10) = 0; /*0x40a0f6*/
  HIWORD(v6) = *(_WORD *)(this + 80); /*0x40a102*/
  LOWORD(v9) = HIWORD(v6) * v3; /*0x40a107*/
  LOWORD(v6) = 1; /*0x40a116*/
  v8 = v4 * (unsigned __int16)(HIWORD(v6) * v3); /*0x40a122*/
  LOWORD(v10) = 0; /*0x40a133*/
  v11[0] = 20; /*0x40a13c*/
  v11[1] = 1; /*0x40a148*/
  HIWORD(v9) = 8 * v3; /*0x40a15b*/
  memset(&v11[2], 0, 12); /*0x40a160*/
  if ( MEMORY[0x87E89C]->lpVtbl->CreateSoundBuffer( /*0x40a16d*/
         MEMORY[0x87E89C],
         (LPCDSBUFFERDESC)v11,
         (LPDIRECTSOUNDBUFFER *)&MEMORY[0x87E8A0],
         0) )
  {
    MEMORY[0x87E8A0] = 0; /*0x40a175*/
    return -2147221504; /*0x40a17c*/
  }
  else
  {
    if ( (*(int (__stdcall **)(int, int *))(*(_DWORD *)MEMORY[0x87E8A0] + 56))(MEMORY[0x87E8A0], &v6) ) /*0x40a196*/
      Debug::Log(); /*0x40a1a2*/
    memset(&v12[1], 0, 0x5Cu); /*0x40a1b9*/
    v12[0] = 96; /*0x40a1c0*/
    MEMORY[0x87E89C]->lpVtbl->GetCaps(MEMORY[0x87E89C], (LPDSCAPS)v12); /*0x40a1cc*/
    (*(void (__stdcall **)(int, _DWORD, _DWORD, int))(*(_DWORD *)MEMORY[0x87E8A0] + 48))(MEMORY[0x87E8A0], 0, 0, 1); /*0x40a1db*/
    *(_DWORD *)(this + 472) = 4; /*0x40a1de*/
    *(_DWORD *)(this + 476) = 8; /*0x40a1e8*/
    *(_DWORD *)(this + 480) = 0; /*0x40a1f2*/
    return 0; /*0x40a1fa*/
  }
}


// ==== 0x0040A2D0  ObjectClass::method_40A2D0  this=ObjectClass  sig=csp ====
int __thiscall sub_40A2D0(_DWORD *this)
{
  int v2; // esi
  int v3; // eax

  v2 = this->q158; /*0x40a2d5*/
  if ( v2 ) /*0x40a2df*/
  {
    if ( *(_DWORD *)(v2 + 124) ) /*0x40a2e1*/
    {
      free(*(void **)(v2 + 124)); /*0x40a2e9*/
      *(_DWORD *)(v2 + 124) = 0; /*0x40a2f1*/
      *(_DWORD *)(v2 + 136) = 0; /*0x40a2f4*/
    }
    if ( *(_DWORD *)(v2 + 144) ) /*0x40a2fa*/
    {
      free(*(void **)(v2 + 144)); /*0x40a305*/
      *(_DWORD *)(v2 + 144) = 0; /*0x40a30d*/
      *(_DWORD *)(v2 + 156) = 0; /*0x40a313*/
    }
    v3 = *(_DWORD *)(v2 + 100); /*0x40a319*/
    if ( v3 ) /*0x40a31e*/
    {
      (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v3 + 8))(*(_DWORD *)(v2 + 100)); /*0x40a323*/
      *(_DWORD *)(v2 + 100) = 0; /*0x40a326*/
    }
    __3_YAXPAX_Z((void *)v2); /*0x40a32a*/
    this->q158 = 0; /*0x40a332*/
  }
  return 0; /*0x40a338*/
}


// ==== 0x0040A340  Buffer::CreateDirectSound  this=Buffer  sig=csp ====
int __thiscall CreateDirectSoundBuffer(int **this)
{
  int *v1; // ebx
  _DWORD *v2; // esi
  _DWORD *v3; // ebp
  int v4; // edx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  __int16 v9; // cx
  unsigned __int16 v10; // di
  int v11; // eax
  int v12; // edx
  unsigned int v13; // [esp+1Ch] [ebp-30h] BYREF
  int **v14; // [esp+20h] [ebp-2Ch]
  _WORD v15[2]; // [esp+24h] [ebp-28h] BYREF
  int v16; // [esp+28h] [ebp-24h]
  int v17; // [esp+2Ch] [ebp-20h]
  unsigned __int16 v18; // [esp+30h] [ebp-1Ch]
  __int16 v19; // [esp+32h] [ebp-1Ah]
  int v20; // [esp+34h] [ebp-18h]
  _DWORD v21[2]; // [esp+38h] [ebp-14h] BYREF
  int v22; // [esp+40h] [ebp-Ch]
  int v23; // [esp+44h] [ebp-8h]
  _WORD *v24; // [esp+48h] [ebp-4h]

  v1 = this->q158; /*0x40a34a*/
  v2 = (_DWORD *)(this->q168)[5]; /*0x40a352*/
  v14 = this; /*0x40a35a*/
  if ( !v2 ) /*0x40a35e*/
    v2 = this->q0AC + 17; /*0x40a366*/
  AudioStream::CheckFormatChanged(*v1, v2); /*0x40a36d*/
  v3 = v1 + 25; /*0x40a375*/
  if ( v1[25] ) /*0x40a372*/
  {
    if ( v1[20] == v2[3] && v1[19] == v2[2] && v1[21] == v2[4] ) /*0x40a3a4*/
    {
      *(_DWORD *)(*v1 + 416) = 0; /*0x40a3ac*/
      goto LABEL_8; /*0x40a3ac*/
    }
    *(_DWORD *)(*v1 + 416) = 1; /*0x40a48c*/
  }
  if ( *v3 ) /*0x40a496*/
  {
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*v3 + 8))(*v3); /*0x40a4a0*/
    *v3 = 0; /*0x40a4a3*/
  }
  v9 = *((_WORD *)v2 + 8); /*0x40a4a6*/
  v10 = *((_WORD *)v2 + 6) * v9; /*0x40a4b2*/
  v15[1] = *((_WORD *)v2 + 6); /*0x40a4b9*/
  v16 = 0; /*0x40a4be*/
  v15[0] = 1; /*0x40a4c2*/
  v17 = 0; /*0x40a4c9*/
  v19 = 0; /*0x40a4cd*/
  v18 = v10; /*0x40a4d1*/
  LOWORD(v20) = 0; /*0x40a4da*/
  v11 = v2[2] * v10; /*0x40a4e7*/
  v16 = v2[2]; /*0x40a4ea*/
  v19 = 8 * v9; /*0x40a4f7*/
  v17 = v11; /*0x40a508*/
  qmemcpy(v1 + 17, v2, 0x20u); /*0x40a50c*/
  v22 = 0; /*0x40a50e*/
  v23 = 0; /*0x40a515*/
  v24 = 0; /*0x40a51e*/
  LOWORD(v20) = 0; /*0x40a527*/
  v21[0] = 20; /*0x40a52e*/
  v21[1] = 232; /*0x40a53d*/
  v1[27] = ((int)(8 * (3 * v11 / 0x64u) + 1023) / 1024) << 10; /*0x40a55a*/
  Debug::Log(); /*0x40a55d*/
  v12 = v1[27]; /*0x40a562*/
  v24 = v15; /*0x40a56c*/
  v22 = 4 * v12; /*0x40a578*/
  if ( MEMORY[0x87E89C]->lpVtbl->CreateSoundBuffer( /*0x40a587*/
         MEMORY[0x87E89C],
         (LPCDSBUFFERDESC)v21,
         (LPDIRECTSOUNDBUFFER *)(v1 + 25),
         0) )
  {
    *v3 = 0; /*0x40a593*/
    Debug::Log(); /*0x40a59a*/
    return -2147221504; /*0x40a5ae*/
  }
  v1[26] = v22; /*0x40a5b9*/
  Debug::Log(); /*0x40a5bc*/
LABEL_8:
  v1[11] = 0; /*0x40a3b2*/
  v1[2] = 0; /*0x40a3b5*/
  v1[15] = 4 * v1[27]; /*0x40a3be*/
  (*(void (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)*v3 + 52))(*v3, 0); /*0x40a3c8*/
  (*(void (__stdcall **)(_DWORD, unsigned int *, int *))(*(_DWORD *)*v3 + 16))(*v3, &v13, v1 + 13); /*0x40a3da*/
  v1[3] = v13 / v1[27]; /*0x40a3e6*/
  v1[4] = Audio::Callback(); /*0x40a3ee*/
  v1[5] = v4; /*0x40a3f1*/
  v5 = *v3; /*0x40a3f7*/
  v1[16] = v1[26]; /*0x40a3fd*/
  (*(void (__stdcall **)(int, int *, int *))(*(_DWORD *)v5 + 16))(v5, v1 + 12, v1 + 13); /*0x40a405*/
  v1[14] = v1[26] - v1[12]; /*0x40a40f*/
  v1[52] = 0; /*0x40a414*/
  v1[54] = v1[3]; /*0x40a41d*/
  v1[53] = 0; /*0x40a423*/
  v1[55] = v1[12]; /*0x40a42b*/
  AudioBuffer::InitializePlayback(v1); /*0x40a433*/
  v1[51] = 0; /*0x40a438*/
  v6 = *v1; /*0x40a43e*/
  v1[10] = *(_DWORD *)(*v1 + 368); /*0x40a446*/
  v1[8] = *(_DWORD *)(v6 + 368); /*0x40a44f*/
  v7 = *(_DWORD *)(v6 + 372); /*0x40a452*/
  v1[9] = v7; /*0x40a458*/
  v1[11] = v7; /*0x40a45b*/
  if ( ProcessAudioStream(v1, v1[26]) ) /*0x40a463*/
  {
    Buffer::UpdateVolumeSettings(v14); /*0x40a5cf*/
    if ( !(*(int (__stdcall **)(_DWORD, _DWORD, _DWORD, int))(*(_DWORD *)*v3 + 48))(*v3, 0, 0, 1) ) /*0x40a5df*/
      return 0; /*0x40a603*/
  }
  Debug::Log(); /*0x40a475*/
  return -2147221504; /*0x40a482*/
}


// ==== 0x0040A6D0  Buffer::UpdateVolumeSettings  this=Buffer  sig=csp ====
int __thiscall sub_40A6D0(_DWORD *this)
{
  _DWORD **v2; // edi
  signed int v3; // eax
  int v4; // eax

  v2 = (_DWORD **)this->q158; /*0x40a6da*/
  (*(void (__stdcall **)(_DWORD *, int))(*v2[25] + 60))( /*0x40a6fd*/
    v2[25],
    dword_816380[(unsigned int)(100 * HIWORD(*(this + 55))) >> 14]);
  v3 = ((unsigned int)(200 * HIWORD(*(this + 75))) >> 14) - 100; /*0x40a715*/
  if ( v3 >= 0 ) /*0x40a718*/
    (*(void (__stdcall **)(_DWORD *, int))(*v2[25] + 64))(v2[25], -dword_816510[-v3]); /*0x40a743*/
  else
    (*(void (__stdcall **)(_DWORD *, int))(*v2[25] + 64))(v2[25], dword_816510[v3]); /*0x40a728*/
  v4 = sub_401190((int)(this + 54), (*v2)[97]); /*0x40a755*/
  (*(void (__stdcall **)(_DWORD *, int))(*v2[25] + 68))(v2[25], v4); /*0x40a761*/
  return 0; /*0x40a766*/
}


// ==== 0x0040A770  sub_40A770  this=-  sig=ida-proto ====
int sub_40A770()
{
  return -2147221504; /*0x40a775*/
}


// ==== 0x0040A7A0  Audio::GetDirectSound  this=Audio  sig=csp ====
LPDIRECTSOUND Audio_GetDirectSound()
{
  return MEMORY[0x87E89C]; /*0x40a7a5*/
}


// ==== 0x0040A7B0  sub_40A7B0  this=-  sig=ida-proto ====
int sub_40A7B0()
{
  return MEMORY[0x87E8A0]; /*0x40a7b5*/
}


// ==== 0x0040A7C0  CreateDirectSoundBuffer  this=-  sig=ida-proto ====
int __fastcall DirectSound_CreateBuffer(int a1, int a2, __int16 a3)
{
  int result; // eax
  _WORD v4[2]; // [esp+8h] [ebp-14h] BYREF
  int v5; // [esp+Ch] [ebp-10h]
  int v6; // [esp+10h] [ebp-Ch]
  unsigned __int16 v7; // [esp+14h] [ebp-8h]
  __int16 v8; // [esp+16h] [ebp-6h]
  __int16 v9; // [esp+18h] [ebp-4h]

  if ( MEMORY[0x87E8A0] ) /*0x40a7cf*/
  {
    v4[0] = 1; /*0x40a7d8*/
    v4[1] = a3; /*0x40a7e3*/
    v5 = a1; /*0x40a7ea*/
    v7 = a3 * (a2 / 8); /*0x40a7f4*/
    v8 = a2; /*0x40a802*/
    v6 = a1 * v7; /*0x40a80a*/
    v9 = 0; /*0x40a80e*/
    (*(void (__stdcall **)(int))(*(_DWORD *)MEMORY[0x87E8A0] + 72))(MEMORY[0x87E8A0]); /*0x40a818*/
    (*(void (__stdcall **)(int, _WORD *))(*(_DWORD *)MEMORY[0x87E8A0] + 56))(MEMORY[0x87E8A0], v4); /*0x40a828*/
    return (*(int (__stdcall **)(int, _DWORD, _DWORD, int))(*(_DWORD *)MEMORY[0x87E8A0] + 48))( /*0x40a839*/
             MEMORY[0x87E8A0],
             0,
             0,
             1);
  }
  return result; /*0x40a83d*/
}


// ==== 0x0040A850  ObjectClass::method_40A850  this=ObjectClass  sig=csp ====
int sub_40A850()
{
  _WORD *Enabled; // esi
  int result; // eax
  __int16 v2; // ax
  int v3; // ecx
  __int16 v4; // si
  _WORD v5[2]; // [esp+4h] [ebp-14h] BYREF
  int v6; // [esp+8h] [ebp-10h]
  int v7; // [esp+Ch] [ebp-Ch]
  __int16 v8; // [esp+10h] [ebp-8h]
  __int16 v9; // [esp+12h] [ebp-6h]
  __int16 v10; // [esp+14h] [ebp-4h]

  Enabled = Audio::GetEnabled(); /*0x40a859*/
  result = MEMORY[0x87E8A0]; /*0x40a85b*/
  if ( MEMORY[0x87E8A0] ) /*0x40a862*/
  {
    if ( Enabled ) /*0x40a86a*/
    {
      (*(void (__stdcall **)(int))(*(_DWORD *)MEMORY[0x87E8A0] + 72))(MEMORY[0x87E8A0]); /*0x40a873*/
      v2 = Enabled[40]; /*0x40a878*/
      v3 = *((_DWORD *)Enabled + 19); /*0x40a87c*/
      v4 = Enabled[42]; /*0x40a87f*/
      v5[1] = v2; /*0x40a887*/
      v6 = v3; /*0x40a890*/
      v5[0] = 1; /*0x40a898*/
      v8 = v2 * v4; /*0x40a8ad*/
      v10 = 0; /*0x40a8bb*/
      v7 = v3 * (unsigned __int16)(v2 * v4); /*0x40a8cc*/
      v9 = 8 * v4; /*0x40a8d5*/
      (*(void (__stdcall **)(int, _WORD *))(*(_DWORD *)MEMORY[0x87E8A0] + 56))(MEMORY[0x87E8A0], v5); /*0x40a8e2*/
      return (*(int (__stdcall **)(int, _DWORD, _DWORD, int))(*(_DWORD *)MEMORY[0x87E8A0] + 48))( /*0x40a8f3*/
               MEMORY[0x87E8A0],
               0,
               0,
               1);
    }
  }
  return result; /*0x40a8f6*/
}


// ==== 0x0040A900  sub_40A900  this=-  sig=ida-proto ====
int __fastcall sub_40A900(int a1)
{
  int v1; // eax

  v1 = 100 * a1 / 256; /*0x40a912*/
  if ( v1 > 100 ) /*0x40a918*/
    return dword_816510; /*0x40a91f*/
  if ( v1 < 0 ) /*0x40a929*/
    v1 = 0; /*0x40a92b*/
  return dword_816380[v1]; /*0x40a926*/
}


// ==== 0x0040A940  ObjectClass::method_40A940  this=ObjectClass  sig=csp ====
int sub_40A940()
{
  int result; // eax

  result = MEMORY[0x87E8A0]; /*0x40a940*/
  if ( MEMORY[0x87E8A0] ) /*0x40a947*/
    return (*(int (__stdcall **)(int))(*(_DWORD *)MEMORY[0x87E8A0] + 72))(MEMORY[0x87E8A0]); /*0x40a94c*/
  return result; /*0x40a94f*/
}


// ==== 0x0040AA70  ObjectClass::ProcessAudioChannelMovement  this=ObjectClass  sig=csp ====
BOOL __thiscall ProcessAudioChannelMovement(int *this)
{
  int v2; // edi
  int v3; // eax
  int v4; // ecx
  char *v5; // ebp
  int *v7; // eax
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // eax
  __int16 *v12; // edi
  unsigned __int8 v13; // bl
  char v14; // cl
  __int16 *v15; // edi
  bool v16; // zf
  __int16 *v17; // edi
  unsigned __int8 v18; // bl
  char v19; // cl
  __int16 *v20; // edi
  bool v21; // cc
  int v22; // [esp+10h] [ebp-10h]
  unsigned int v23; // [esp+10h] [ebp-10h]
  unsigned int v24; // [esp+14h] [ebp-Ch]
  int *v25; // [esp+14h] [ebp-Ch]
  _WORD *v26; // [esp+18h] [ebp-8h]
  int v27; // [esp+18h] [ebp-8h]
  int v28; // [esp+18h] [ebp-8h]
  int v29; // [esp+1Ch] [ebp-4h]

  v2 = 0; /*0x40aa79*/
  v26 = (_WORD *)this->objectTypeFlags; /*0x40aa8d*/
  v3 = this->q029; /*0x40aa91*/
  v4 = this->NeedsSaveOrLink - this->pad21; /*0x40aa97*/
  v5 = (char *)this->visibilityFlags; /*0x40aa99*/
  v22 = v4; /*0x40aa9c*/
  this->q025 = 0; /*0x40aaa7*/
  if ( v4 < 4 * v3 ) /*0x40aaaf*/
    return 0; /*0x40aaba*/
  if ( v3 <= 0 ) /*0x40aabd*/
  {
LABEL_11:
    v11 = this->q029; /*0x40ab37*/
    if ( v11 == 1 ) /*0x40ab40*/
    {
      if ( v4 > 0 ) /*0x40ab48*/
      {
        v24 = (unsigned int)(v4 + 3) >> 2; /*0x40ab54*/
        v23 = v4 - 4 * v24; /*0x40ab5d*/
        do /*0x40abca*/
        {
          v12 = (__int16 *)(this->objectTypeFlags + this->q025); /*0x40ab6d*/
          v27 = 4; /*0x40ab6f*/
          do /*0x40abb0*/
          {
            v13 = *v5; /*0x40ab77*/
            v14 = *v5++; /*0x40ab80*/
            *v12 = MoveCoordByDirection(v14 & 0xF, this + 45); /*0x40ab8d*/
            v15 = v12 + 1; /*0x40ab96*/
            *v15 = MoveCoordByDirection(v13 >> 4, this + 45); /*0x40aba1*/
            v12 = v15 + 1; /*0x40aba8*/
            --v27; /*0x40abac*/
          }
          while ( v27 ); /*0x40abb0*/
          v16 = v24 == 1; /*0x40abbf*/
          this->q025 += 16; /*0x40abc0*/
          --v24; /*0x40abc6*/
        }
        while ( !v16 ); /*0x40abca*/
        return v23 == 0; /*0x40abde*/
      }
    }
    else
    {
      for ( ; v4 > 0; v22 = v4 ) /*0x40abef*/
      {
        v28 = 0; /*0x40abf7*/
        if ( v11 > 0 ) /*0x40abff*/
        {
          v25 = this + 45; /*0x40ac0b*/
          do /*0x40ac8b*/
          {
            v29 = 4; /*0x40ac19*/
            v17 = (__int16 *)(this->objectTypeFlags + this->q025 + 2 * v28); /*0x40ac2a*/
            do /*0x40ac6d*/
            {
              v18 = *v5; /*0x40ac2c*/
              v19 = *v5++; /*0x40ac33*/
              *v17 = MoveCoordByDirection(v19 & 0xF, v25); /*0x40ac42*/
              v20 = &v17[this->q029]; /*0x40ac4b*/
              *v20 = MoveCoordByDirection(v18 >> 4, v25); /*0x40ac58*/
              v16 = v29-- == 1; /*0x40ac65*/
              v17 = &v20[this->q029]; /*0x40ac6a*/
            }
            while ( !v16 ); /*0x40ac6d*/
            v21 = ++v28 < this->q029; /*0x40ac81*/
            v25 += 2; /*0x40ac87*/
          }
          while ( v21 ); /*0x40ac8b*/
          v4 = v22; /*0x40ac8d*/
        }
        v11 = this->q029; /*0x40ac91*/
        v4 -= 4 * v11; /*0x40acab*/
        this->q025 += 16 * v11; /*0x40acad*/
      }
    }
    return v4 == 0; /*0x40acc6*/
  }
  v7 = this + 45; /*0x40aabf*/
  while ( 1 ) /*0x40aad2*/
  {
    v8 = (unsigned __int8)*v5 + ((unsigned __int8)v5[1] << 8); /*0x40aad2*/
    *v7 = v8; /*0x40aad7*/
    if ( (v8 & 0x8000) != 0 ) /*0x40aad9*/
      *v7 = v8 - 0x10000; /*0x40aae1*/
    v9 = (unsigned __int8)v5[2]; /*0x40aae5*/
    v7[1] = v9; /*0x40aaeb*/
    if ( v9 > 88 || v5[3] ) /*0x40aaf4*/
      return 0; /*0x40aab1*/
    v5 += 4; /*0x40ab06*/
    v4 -= 4; /*0x40ab09*/
    *v26++ = *(_WORD *)v7; /*0x40ab0c*/
    v10 = this->q029; /*0x40ab1f*/
    ++v2; /*0x40ab25*/
    v7 += 2; /*0x40ab26*/
    this->q025 += 2; /*0x40ab2b*/
    if ( v2 >= v10 ) /*0x40ab31*/
    {
      v22 = v4; /*0x40ab33*/
      goto LABEL_11; /*0x40ab33*/
    }
  }
}


// ==== 0x0040ACD0  MoveCoordByDirection  this=-  sig=csp ====
__int16 __fastcall Coord_MoveByDirection(unsigned __int8 a1, int *a2)
{
  int v2; // esi
  int v3; // eax
  int v4; // edi
  int v5; // eax
  int v6; // ecx
  bool v7; // sf
  int v8; // eax

  v2 = dword_816558[a2[1]]; /*0x40acd5*/
  v3 = v2 >> 3; /*0x40acde*/
  if ( (a1 & 1) != 0 ) /*0x40ace4*/
    v3 += v2 >> 2; /*0x40aceb*/
  if ( (a1 & 2) != 0 ) /*0x40acf0*/
    v3 += v2 >> 1; /*0x40acf6*/
  if ( (a1 & 4) != 0 ) /*0x40acfb*/
    v3 += v2; /*0x40acfd*/
  if ( (a1 & 8) != 0 ) /*0x40ad02*/
    v3 = -v3; /*0x40ad04*/
  v4 = v3 + *a2; /*0x40ad08*/
  *a2 = v4; /*0x40ad0c*/
  if ( v4 <= 0x7FFF ) /*0x40ad15*/
  {
    if ( v4 < -32768 ) /*0x40ad24*/
      *a2 = -32768; /*0x40ad26*/
  }
  else
  {
    *a2 = 0x7FFF; /*0x40ad17*/
  }
  v5 = a2[1]; /*0x40ad2c*/
  v6 = dword_816518[a1]; /*0x40ad35*/
  v7 = v6 + v5 < 0; /*0x40ad3c*/
  v8 = v6 + v5; /*0x40ad3c*/
  a2[1] = v8; /*0x40ad3e*/
  if ( v7 ) /*0x40ad41*/
  {
    a2[1] = 0; /*0x40ad43*/
    return *(_WORD *)a2; /*0x40ad4a*/
  }
  else
  {
    if ( v8 > 88 ) /*0x40ad51*/
      a2[1] = 88; /*0x40ad53*/
    return *(_WORD *)a2; /*0x40ad5a*/
  }
}


// ==== 0x0040AD60  sub_40AD60  this=-  sig=ida-proto ====
int sub_40AD60()
{
  __0Iostream_init_QAE_XZ_0((Iostream_init *)&MEMORY[0x87E8A8]); /*0x40ad65*/
  return atexit(unknown_libname_1); /*0x40ad75*/
}


// ==== 0x0040AD80  unknown_libname_1  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_1()
{
  nullsub_53(); /*0x40ad85*/
}


// ==== 0x0040AD90  sub_40AD90  this=-  sig=ida-proto ====
void sub_40AD90()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x40ad9c*/
  MEMORY[0x87F550] = Math::Sqrt(v0 + v0); /*0x40adae*/
}


// ==== 0x0040ADC0  sub_40ADC0  this=-  sig=ida-proto ====
void sub_40ADC0()
{
  MEMORY[0x87F5A0] = MEMORY[0x87F550] / 60.0; /*0x40adcc*/
}


// ==== 0x0040ADE0  sub_40ADE0  this=-  sig=ida-proto ====
void sub_40ADE0()
{
  MEMORY[0x87F588] = 1.0 / MEMORY[0x87F5A0]; /*0x40adec*/
}


// ==== 0x0040AE00  sub_40AE00  this=-  sig=ida-proto ====
void sub_40AE00()
{
  MEMORY[0x87F580] = 0.0174532925199433 * 45.0; /*0x40ae0c*/
}


// ==== 0x0040AE20  sub_40AE20  this=-  sig=ida-proto ====
void sub_40AE20()
{
  MEMORY[0x87F558] = 0.0174532925199433 * 60.0; /*0x40ae2c*/
}


// ==== 0x0040AE40  sub_40AE40  this=-  sig=ida-proto ====
void sub_40AE40()
{
  MEMORY[0x87E8B0] = 0.0174532925199433 * 90.0; /*0x40ae4c*/
}


// ==== 0x0040AE60  sub_40AE60  this=-  sig=ida-proto ====
__int64 sub_40AE60()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x87E8B0] - MEMORY[0x87F558]); /*0x40ae72*/
  result = Math::RoundToInt(v0 * MEMORY[0x87F550] * 0.5); /*0x40ae86*/
  MEMORY[0x87F5A8] = result; /*0x40ae8b*/
  return result; /*0x40ae90*/
}


// ==== 0x0040AEA0  sub_40AEA0  this=-  sig=ida-proto ====
void sub_40AEA0()
{
  MEMORY[0x87F560] = Math::ArcTan((double)MEMORY[0x87F5A8] * 0.00390625); /*0x40aeb7*/
}


// ==== 0x0040AED0  sub_40AED0  this=-  sig=ida-proto ====
void sub_40AED0()
{
  MEMORY[0x87F578] = Math::ArcTan((double)(2 * MEMORY[0x87F5A8]) / MEMORY[0x87F550]); /*0x40aef2*/
}


// ==== 0x0040AF00  sub_40AF00  this=-  sig=ida-proto ====
__int64 sub_40AF00()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x87F5A8]) + 0.5); /*0x40af1b*/
  MEMORY[0x87F59C] = result; /*0x40af20*/
  return result; /*0x40af26*/
}


// ==== 0x0040AF30  sub_40AF30  this=-  sig=ida-proto ====
int sub_40AF30()
{
  MEMORY[0x87F548] = 0; /*0x40af32*/
  MEMORY[0x87F54A] = 0; /*0x40af38*/
  return 0; /*0x40af3e*/
}


// ==== 0x0040AF40  sub_40AF40  this=-  sig=ida-proto ====
int sub_40AF40()
{
  MEMORY[0x87F568] = 0; /*0x40af42*/
  MEMORY[0x87F56C] = 0; /*0x40af47*/
  MEMORY[0x87F570] = 0; /*0x40af4c*/
  return 0; /*0x40af51*/
}


// ==== 0x0040AF60  sub_40AF60  this=-  sig=ida-proto ====
int sub_40AF60()
{
  MEMORY[0x87F598] = 0; /*0x40af65*/
  MEMORY[0x87F590] = 128; /*0x40af6f*/
  MEMORY[0x87F594] = 128; /*0x40af74*/
  return 128; /*0x40af79*/
}


// ==== 0x0040AF80  sub_40AF80  this=-  sig=ida-proto ====
int sub_40AF80()
{
  MEMORY[0x87F538] = 0; /*0x40af82*/
  MEMORY[0x87F53C] = 0; /*0x40af87*/
  MEMORY[0x87F540] = 0; /*0x40af8c*/
  MEMORY[0x87F544] = 0; /*0x40af91*/
  return 0; /*0x40af96*/
}


// ==== 0x0040AFA0  sub_40AFA0  this=-  sig=ida-proto ====
int sub_40AFA0()
{
  Tactical::ConstructTacticalSurface(MEMORY[0x87E8B8]); /*0x40afa5*/
  return atexit(unknown_libname_2); /*0x40afb5*/
}


// ==== 0x0040AFC0  unknown_libname_2  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_2()
{
  sub_42A900((int)MEMORY[0x87E8B8]); /*0x40afc5*/
}


// ==== 0x0040AFD0  Array::ForEachReverse  this=Array  sig=csp ====
int __stdcall Array::ForEachReverse(ObjectClass *aP0, int a2, int a3, int (__thiscall *a4)(int))
{
  char *v4; // esi
  int result; // eax
  int v6; // edi

  v4 = &aP0->__pad_0[a3 * a2]; /*0x40afe3*/
  result = a3 - 1; /*0x40afe5*/
  if ( a3 - 1 >= 0 ) /*0x40afe6*/
  {
    v6 = a3; /*0x40afee*/
    do /*0x40aff8*/
    {
      v4 -= a2; /*0x40aff1*/
      result = a4((int)v4); /*0x40aff5*/
      --v6; /*0x40aff7*/
    }
    while ( v6 ); /*0x40aff8*/
  }
  return result; /*0x40affc*/
}


// ==== 0x0040B010  ObjectClass::method_40B010  this=ObjectClass  sig=csp ====
void **__thiscall sub_40B010(void **Block, char a2)
{
  int v3; // eax
  void **v4; // ebp
  void **v5; // esi
  int v6; // eax
  SessionClass *v7; // edi

  if ( (a2 & 2) != 0 ) /*0x40b01b*/
  {
    v3 = (int)*(Block - 1); /*0x40b01d*/
    v4 = Block - 1; /*0x40b021*/
    v5 = Block + v3; /*0x40b024*/
    v6 = v3 - 1; /*0x40b027*/
    if ( v6 >= 0 ) /*0x40b028*/
    {
      v7 = (SessionClass *)(v6 + 1); /*0x40b02b*/
      do /*0x40b039*/
      {
        DeleteAndZero((int)--v5); /*0x40b033*/
        v7 = (SessionClass *)((char *)v7 - 1); /*0x40b038*/
      }
      while ( v7 ); /*0x40b039*/
    }
    if ( (a2 & 1) != 0 ) /*0x40b03f*/
      __3_YAXPAX_Z(v4); /*0x40b042*/
    return v4; /*0x40b04a*/
  }
  else
  {
    DeleteAndZero((int)Block); /*0x40b054*/
    if ( (a2 & 1) != 0 ) /*0x40b05c*/
      __3_YAXPAX_Z(Block); /*0x40b05f*/
    return Block; /*0x40b067*/
  }
}


// ==== 0x0040B070  SubzoneConnectionVector::Destruct  this=SubzoneConnectionVector  sig=csp ====
char *__thiscall SubzoneConnectionVector::Destruct(_DWORD *Block, char a2)
{
  int v3; // eax
  _DWORD *v4; // ebp
  int v5; // ecx
  int v6; // eax
  _DWORD *v7; // esi
  int v8; // edi
  void *v9; // eax
  void *v11; // eax

  if ( (a2 & 2) != 0 ) /*0x40b07a*/
  {
    v3 = *(Block - 1); /*0x40b07c*/
    v4 = Block - 1; /*0x40b080*/
    v5 = 9 * v3; /*0x40b083*/
    v6 = v3 - 1; /*0x40b086*/
    v7 = Block + v5; /*0x40b087*/
    if ( v6 >= 0 ) /*0x40b08a*/
    {
      v8 = v6 + 1; /*0x40b08d*/
      do /*0x40b0ba*/
      {
        v9 = (void *)*(v7 - 8); /*0x40b092*/
        v7 -= 9; /*0x40b095*/
        *v7 = &vt_VectorClass_SubzoneConnectionStruct; /*0x40b09a*/
        if ( v9 && *((_BYTE *)v7 + 13) ) /*0x40b0a2*/
        {
          __3_YAXPAX_Z(v9); /*0x40b0a8*/
          v7[1] = 0; /*0x40b0b0*/
        }
        --v8; /*0x40b0b3*/
        *((_BYTE *)v7 + 13) = 0; /*0x40b0b4*/
        v7[2] = 0; /*0x40b0b7*/
      }
      while ( v8 ); /*0x40b0ba*/
    }
    if ( (a2 & 1) != 0 ) /*0x40b0c2*/
      __3_YAXPAX_Z(v4); /*0x40b0c5*/
    return (char *)v4; /*0x40b0cd*/
  }
  else
  {
    v11 = (void *)*(Block + 1); /*0x40b0d5*/
    *Block = &vt_VectorClass_SubzoneConnectionStruct; /*0x40b0dc*/
    if ( v11 && *((_BYTE *)Block + 13) ) /*0x40b0e4*/
    {
      __3_YAXPAX_Z(v11); /*0x40b0ea*/
      *(Block + 1) = 0; /*0x40b0f2*/
    }
    *((_BYTE *)Block + 13) = 0; /*0x40b0f9*/
    *(Block + 2) = 0; /*0x40b0fe*/
    if ( (a2 & 1) != 0 ) /*0x40b101*/
      __3_YAXPAX_Z(Block); /*0x40b104*/
    return (char *)Block; /*0x40b10c*/
  }
}


// ==== 0x0040B120  _VectorClass_USubzoneConnectionStruct::Clear  this=VectorClass  sig=csp ====
int __thiscall VectorClass::_vt06(_DWORD *this, int a2, int a3)
{
  int v3; // eax
  int v4; // edx
  int v5; // ecx

  v3 = this->Items; /*0x40b120*/
  v4 = *(_DWORD *)(v3 + 8 * a3); /*0x40b127*/
  v5 = v3 + 8 * a3; /*0x40b12a*/
  *(_DWORD *)a2 = v4; /*0x40b131*/
  *(_BYTE *)(a2 + 4) = *(_BYTE *)(v5 + 4); /*0x40b136*/
  return a2; /*0x40b139*/
}


// ==== 0x0040B140  _VectorClass_USubzoneConnectionStruct::AddRef  this=VectorClass  sig=csp ====
char __thiscall VectorClass::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x40b142*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x40b14d*/
  {
    v3 = 0; /*0x40b14f*/
    if ( v2 <= 0 ) /*0x40b153*/
      return 1; /*0x40b173*/
    v4 = (_DWORD *)this->Items; /*0x40b155*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x40b15b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x40b164*/
    {
      ++v3; /*0x40b166*/
      v4 += 2; /*0x40b167*/
      if ( v3 >= v2 ) /*0x40b16c*/
        return 1; /*0x40b16c*/
    }
  }
  return 0; /*0x40b16e*/
}


// ==== 0x0040B180  ?$VectorClass@USubzoneConnectionStruct@@::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass::_vt02(void *this, int a2, char *a3)
{
  int v3; // ebp
  char *v5; // esi
  char *v6; // eax
  char *v7; // ecx
  int v8; // edx
  char *v9; // eax
  int v10; // ecx
  int v12; // edx
  int v13; // ecx
  int v14; // eax
  _DWORD *v15; // ebx

  v3 = a2; /*0x40b182*/
  if ( a2 ) /*0x40b18e*/
  {
    v5 = a3; /*0x40b194*/
    this->IsInitialized = 0; /*0x40b198*/
    if ( a3 ) /*0x40b19d*/
    {
      v9 = a3; /*0x40b1d3*/
      if ( a2 - 1 >= 0 ) /*0x40b1d7*/
      {
        v10 = a2; /*0x40b1d9*/
        do /*0x40b1e3*/
        {
          *(_DWORD *)v9 = 0; /*0x40b1da*/
          v9[4] = 0; /*0x40b1dc*/
          v9 += 8; /*0x40b1df*/
          --v10; /*0x40b1e2*/
        }
        while ( v10 ); /*0x40b1e3*/
      }
    }
    else
    {
      v6 = (char *)__2_YAPAXI_Z(8 * a2); /*0x40b1a7*/
      if ( v6 ) /*0x40b1b1*/
      {
        v7 = v6; /*0x40b1b6*/
        if ( a2 - 1 >= 0 ) /*0x40b1ba*/
        {
          v8 = a2; /*0x40b1bc*/
          do /*0x40b1c6*/
          {
            *(_DWORD *)v7 = 0; /*0x40b1bd*/
            v7[4] = 0; /*0x40b1bf*/
            v7 += 8; /*0x40b1c2*/
            --v8; /*0x40b1c5*/
          }
          while ( v8 ); /*0x40b1c6*/
        }
        v5 = v6; /*0x40b1c8*/
      }
      else
      {
        v5 = 0; /*0x40b1cc*/
      }
    }
    this->IsInitialized = 1; /*0x40b1e7*/
    if ( v5 ) /*0x40b1eb*/
    {
      if ( this->Items ) /*0x40b1f6*/
      {
        v12 = this->Capacity; /*0x40b1fb*/
        if ( a2 < v12 ) /*0x40b200*/
          v12 = a2; /*0x40b202*/
        v13 = 0; /*0x40b204*/
        if ( v12 > 0 ) /*0x40b208*/
        {
          do /*0x40b227*/
          {
            v14 = 8 * v13; /*0x40b20d*/
            v15 = (_DWORD *)(this->Items + 8 * v13++); /*0x40b216*/
            *(_DWORD *)&v5[v14] = *v15; /*0x40b21d*/
            *(_DWORD *)&v5[v14 + 4] = v15[1]; /*0x40b223*/
          }
          while ( v13 < v12 ); /*0x40b227*/
          v3 = a2; /*0x40b229*/
        }
        if ( this->IsAllocated ) /*0x40b22f*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x40b238*/
          this->Items = 0; /*0x40b240*/
        }
      }
      this->Items = v5; /*0x40b24b*/
      this->Capacity = v3; /*0x40b251*/
      this->IsAllocated = a3 == 0; /*0x40b254*/
      return 1; /*0x40b25a*/
    }
    else
    {
      return 0; /*0x40b1f0*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x40b264*/
    return 1; /*0x40b26a*/
  }
}


// ==== 0x0040B270  ?$VectorClass@USubzoneConnectionStruct@@::Cleanup5  this=VectorClass  sig=csp ====
void __thiscall VectorClass_Cleanup5(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x40b27d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x40b283*/
    *(_DWORD *)(this + 4) = 0; /*0x40b28b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x40b28e*/
  *(_DWORD *)(this + 8) = 0; /*0x40b291*/
}


// ==== 0x0040B2A0  ?$VectorClass@USubzoneConnectionStruct@@::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x40b2a0*/
    return 0; /*0x40b2a8*/
  v3 = *(_DWORD *)(this + 8); /*0x40b2ae*/
  result = 0; /*0x40b2b1*/
  if ( v3 <= 0 ) /*0x40b2b5*/
    return -1; /*0x40b2cc*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; i += 2 ) /*0x40b2bb*/
  {
    if ( ++result >= v3 ) /*0x40b2ca*/
      return -1; /*0x40b2ca*/
  }
  return result; /*0x40b2aa*/
}


// ==== 0x0040B2E0  ?$VectorClass@USubzoneConnectionStruct@@::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x40b2e0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 3; /*0x40b2f5*/
  else
    return 0; /*0x40b2e7*/
}


// ==== 0x0040B300  ?$VectorClass@USubzoneConnectionStruct@@::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x40b303*/
  *Block = &vt_VectorClass_SubzoneConnectionStruct; /*0x40b306*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x40b310*/
  {
    __3_YAXPAX_Z(v3); /*0x40b318*/
    *(Block + 1) = 0; /*0x40b320*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x40b32b*/
  *(Block + 2) = 0; /*0x40b331*/
  if ( (a2 & 1) != 0 ) /*0x40b338*/
    __3_YAXPAX_Z(Block); /*0x40b33b*/
  return (VectorClass *)Block; /*0x40b345*/
}


// ==== 0x0040B350  sub_40B350  this=-  sig=ida-proto ====
void sub_40B350()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x40b35c*/
  MEMORY[0x87F5C0] = Math::Sqrt(v0 + v0); /*0x40b36e*/
}


// ==== 0x0040B380  sub_40B380  this=-  sig=ida-proto ====
void sub_40B380()
{
  MEMORY[0x87F648] = MEMORY[0x87F5C0] / 60.0; /*0x40b38c*/
}


// ==== 0x0040B3A0  sub_40B3A0  this=-  sig=ida-proto ====
void sub_40B3A0()
{
  MEMORY[0x87F630] = 1.0 / MEMORY[0x87F648]; /*0x40b3ac*/
}


// ==== 0x0040B3C0  sub_40B3C0  this=-  sig=ida-proto ====
void sub_40B3C0()
{
  MEMORY[0x87F628] = 0.0174532925199433 * 45.0; /*0x40b3cc*/
}


// ==== 0x0040B3E0  sub_40B3E0  this=-  sig=ida-proto ====
void sub_40B3E0()
{
  MEMORY[0x87F5C8] = 0.0174532925199433 * 60.0; /*0x40b3ec*/
}


// ==== 0x0040B400  sub_40B400  this=-  sig=ida-proto ====
void sub_40B400()
{
  MEMORY[0x87F5B0] = 0.0174532925199433 * 90.0; /*0x40b40c*/
}


// ==== 0x0040B420  sub_40B420  this=-  sig=ida-proto ====
__int64 sub_40B420()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x87F5B0] - MEMORY[0x87F5C8]); /*0x40b432*/
  result = Math::RoundToInt(v0 * MEMORY[0x87F5C0] * 0.5); /*0x40b446*/
  MEMORY[0x87F650] = result; /*0x40b44b*/
  return result; /*0x40b450*/
}


// ==== 0x0040B460  sub_40B460  this=-  sig=ida-proto ====
void sub_40B460()
{
  MEMORY[0x87F5D0] = Math::ArcTan((double)MEMORY[0x87F650] * 0.00390625); /*0x40b477*/
}


// ==== 0x0040B490  sub_40B490  this=-  sig=ida-proto ====
void sub_40B490()
{
  MEMORY[0x87F620] = Math::ArcTan((double)(2 * MEMORY[0x87F650]) / MEMORY[0x87F5C0]); /*0x40b4b2*/
}


// ==== 0x0040B4C0  sub_40B4C0  this=-  sig=ida-proto ====
__int64 sub_40B4C0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x87F650]) + 0.5); /*0x40b4db*/
  MEMORY[0x87F644] = result; /*0x40b4e0*/
  return result; /*0x40b4e6*/
}


// ==== 0x0040B4F0  sub_40B4F0  this=-  sig=ida-proto ====
int sub_40B4F0()
{
  MEMORY[0x87F5B8] = 0; /*0x40b4f2*/
  MEMORY[0x87F5BA] = 0; /*0x40b4f8*/
  return 0; /*0x40b4fe*/
}


// ==== 0x0040B500  sub_40B500  this=-  sig=ida-proto ====
int sub_40B500()
{
  MEMORY[0x87F610] = 0; /*0x40b502*/
  MEMORY[0x87F614] = 0; /*0x40b507*/
  MEMORY[0x87F618] = 0; /*0x40b50c*/
  return 0; /*0x40b511*/
}


// ==== 0x0040B520  sub_40B520  this=-  sig=ida-proto ====
int sub_40B520()
{
  MEMORY[0x87F640] = 0; /*0x40b525*/
  MEMORY[0x87F638] = 128; /*0x40b52f*/
  MEMORY[0x87F63C] = 128; /*0x40b534*/
  return 128; /*0x40b539*/
}


// ==== 0x0040B540  sub_40B540  this=-  sig=ida-proto ====
int sub_40B540()
{
  MEMORY[0x87F5DC] = 0; /*0x40b54a*/
  MEMORY[0x87F5E0] = 0; /*0x40b550*/
  MEMORY[0x87F5E4] = 1; /*0x40b556*/
  MEMORY[0x87F5E5] = 0; /*0x40b55d*/
  MEMORY[0x87F5D8] = (int)&vt_DynamicVectorClass_BombClass; /*0x40b563*/
  MEMORY[0x87F5EC] = 10; /*0x40b56d*/
  MEMORY[0x87F5E8] = 0; /*0x40b577*/
  EventClass::resetEvent(&MEMORY[0x87F5F0], 0, 0); /*0x40b57d*/
  MEMORY[0x87F5F0] = (int)&vt_DynamicVectorClass_TechnoClass; /*0x40b587*/
  MEMORY[0x87F604] = 10; /*0x40b591*/
  MEMORY[0x87F600] = 0; /*0x40b59b*/
  MEMORY[0x87F608] = 100; /*0x40b5a1*/
  return atexit(sub_40B5C0); /*0x40b5b3*/
}


// ==== 0x0040B5C0  sub_40B5C0  this=-  sig=ida-proto ====
void __cdecl sub_40B5C0()
{
  Stream::FlushAndReset(&MEMORY[0x87F5D8]); /*0x40b5c6*/
  MEMORY[0x87F5F0] = (int)&vt_VectorClass_TechnoClass; /*0x40b5d4*/
  if ( MEMORY[0x87F5F4] && MEMORY[0x87F5FD] ) /*0x40b5e6*/
  {
    __3_YAXPAX_Z(MEMORY[0x87F5F4]); /*0x40b5e9*/
    MEMORY[0x87F5F4] = 0; /*0x40b5f1*/
  }
  MEMORY[0x87F5FD] = 0; /*0x40b5fc*/
  MEMORY[0x87F5F8] = 0; /*0x40b604*/
  MEMORY[0x87F5D8] = (int)&vt_VectorClass_BombClass; /*0x40b60a*/
  if ( MEMORY[0x87F5DC] && MEMORY[0x87F5E5] ) /*0x40b61c*/
  {
    __3_YAXPAX_Z(MEMORY[0x87F5DC]); /*0x40b61f*/
    MEMORY[0x87F5DC] = 0; /*0x40b627*/
  }
  MEMORY[0x87F5E5] = 0; /*0x40b62d*/
  MEMORY[0x87F5E0] = 0; /*0x40b633*/
}


// ==== 0x0040B640  _DynamicVectorClass_PAVBombClass::ClearBuffer  this=DynamicVector  sig=csp ====
void __thiscall MoveFeedback::sub_40B640(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x40b646*/
  *(_DWORD *)(this + 16) = 0; /*0x40b649*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x40b650*/
  {
    __3_YAXPAX_Z(v2); /*0x40b656*/
    *(_DWORD *)(this + 4) = 0; /*0x40b65e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x40b661*/
  *(_DWORD *)(this + 8) = 0; /*0x40b664*/
}


// ==== 0x0040B670  _DynamicVectorClass_PAVBombClass::PointerToIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall MoveFeedback::sub_40B670(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x40b670*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x40b685*/
  else
    return 0; /*0x40b677*/
}


// ==== 0x0040B690  _VectorClass_PAVBombClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_BombClass::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x40b69a*/
}


// ==== 0x0040B6A0  _DynamicVectorClass_PAVTechnoClass::initEvent  this=DynamicVector  sig=csp ====
void __thiscall MoveFeedback::_vt03(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x40b6a6*/
  *(_DWORD *)(this + 16) = 0; /*0x40b6a9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x40b6b0*/
  {
    __3_YAXPAX_Z(v2); /*0x40b6b6*/
    *(_DWORD *)(this + 4) = 0; /*0x40b6be*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x40b6c1*/
  *(_DWORD *)(this + 8) = 0; /*0x40b6c4*/
}


// ==== 0x0040B6D0  _DynamicVectorClass_PAVTechnoClass::Update  this=DynamicVector  sig=csp ====
unsigned int __thiscall MoveFeedback::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x40b6d0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x40b6e5*/
  else
    return 0; /*0x40b6d7*/
}


// ==== 0x0040B6F0  _VectorClass_PAVTechnoClass::Show  this=VectorClass  sig=csp ====
int __thiscall MoveFeedback::_vt06(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x40b6fa*/
}


// ==== 0x0040B700  _VectorClass_PAVBombClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_BombClass::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x40b702*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x40b70d*/
  {
    v3 = 0; /*0x40b70f*/
    if ( v2 <= 0 ) /*0x40b713*/
      return 1; /*0x40b733*/
    v4 = (_DWORD *)this->Items; /*0x40b715*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x40b71b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x40b724*/
    {
      ++v3; /*0x40b726*/
      ++v4; /*0x40b727*/
      if ( v3 >= v2 ) /*0x40b72c*/
        return 1; /*0x40b72c*/
    }
  }
  return 0; /*0x40b72e*/
}


// ==== 0x0040B740  _VectorClass_PAVBombClass::processEvent  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_BombClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x40b74c*/
  {
    this->IsInitialized = 0; /*0x40b756*/
    if ( a3 ) /*0x40b75c*/
      v4 = a3; /*0x40b772*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x40b76e*/
    this->IsInitialized = 1; /*0x40b776*/
    if ( v4 ) /*0x40b77a*/
    {
      if ( this->Items ) /*0x40b785*/
      {
        v6 = this->Capacity; /*0x40b78c*/
        if ( a2 < v6 ) /*0x40b791*/
          v6 = a2; /*0x40b793*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x40b799*/
          ++i; /*0x40b79e*/
        if ( this->IsAllocated ) /*0x40b7ab*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x40b7b6*/
          this->Items = 0; /*0x40b7be*/
        }
      }
      this->Items = v4; /*0x40b7c7*/
      this->Capacity = a2; /*0x40b7cf*/
      this->IsAllocated = a3 == 0; /*0x40b7d2*/
      return 1; /*0x40b7d8*/
    }
    else
    {
      return 0; /*0x40b77f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x40b7e2*/
    return 1; /*0x40b7e8*/
  }
}


// ==== 0x0040B7F0  _VectorClass_PAVBombClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_BombClass::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x40b7fd*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x40b803*/
    *(_DWORD *)(this + 4) = 0; /*0x40b80b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x40b80e*/
  *(_DWORD *)(this + 8) = 0; /*0x40b811*/
}


// ==== 0x0040B820  _VectorClass_PAVBombClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_BombClass::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x40b820*/
    return 0; /*0x40b828*/
  v3 = *(_DWORD *)(this + 8); /*0x40b82e*/
  result = 0; /*0x40b831*/
  if ( v3 <= 0 ) /*0x40b835*/
    return -1; /*0x40b84c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x40b83b*/
  {
    if ( ++result >= v3 ) /*0x40b84a*/
      return -1; /*0x40b84a*/
  }
  return result; /*0x40b82a*/
}


// ==== 0x0040B860  _VectorClass_PAVBombClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_BombClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x40b860*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x40b875*/
  else
    return 0; /*0x40b867*/
}


// ==== 0x0040B880  _DynamicVectorClass_PAVBombClass::validateEvent  this=DynamicVector  sig=csp ====
char __thiscall MoveFeedback::sub_40B880(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x40b88c*/
  {
    this->IsInitialized = 0; /*0x40b892*/
    if ( a3 ) /*0x40b898*/
      v4 = a3; /*0x40b8ae*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x40b8aa*/
    this->IsInitialized = 1; /*0x40b8b2*/
    if ( !v4 ) /*0x40b8b6*/
      return 0; /*0x40b92a*/
    if ( this->Items ) /*0x40b8b8*/
    {
      v5 = this->DynamicVector_field_0x8; /*0x40b8bf*/
      if ( a2 < v5 ) /*0x40b8c4*/
        v5 = a2; /*0x40b8c6*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x40b8cc*/
        ++i; /*0x40b8d1*/
      if ( this->IsAllocated ) /*0x40b8de*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x40b8e9*/
        this->Items = 0; /*0x40b8f1*/
      }
    }
    this->Items = v4; /*0x40b8fa*/
    this->DynamicVector_field_0x8 = a2; /*0x40b902*/
    this->IsAllocated = a3 == 0; /*0x40b905*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x40b90e*/
  }
  v7 = this->DynamicVector_field_0x8; /*0x40b911*/
  if ( v7 < this->Items ) /*0x40b919*/
    this->Items = v7; /*0x40b91b*/
  return 1; /*0x40b91e*/
}


// ==== 0x0040B930  _DynamicVectorClass_PAVBombClass::FindItem  this=DynamicVector  sig=csp ====
int __thiscall MoveFeedback::sub_40B930(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x40b930*/
  result = 0; /*0x40b933*/
  if ( v2 <= 0 ) /*0x40b938*/
    return -1; /*0x40b94f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x40b93e*/
  {
    if ( ++result >= v2 ) /*0x40b94d*/
      return -1; /*0x40b94d*/
  }
  return result; /*0x40b952*/
}


// ==== 0x0040B960  _VectorClass_PAVTechnoClass::AddRef  this=VectorClass  sig=csp ====
char __thiscall MoveFeedback::_vt01(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x40b962*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x40b96d*/
  {
    v3 = 0; /*0x40b96f*/
    if ( v2 <= 0 ) /*0x40b973*/
      return 1; /*0x40b993*/
    v4 = (_DWORD *)this->Items; /*0x40b975*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x40b97b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x40b984*/
    {
      ++v3; /*0x40b986*/
      ++v4; /*0x40b987*/
      if ( v3 >= v2 ) /*0x40b98c*/
        return 1; /*0x40b98c*/
    }
  }
  return 0; /*0x40b98e*/
}


// ==== 0x0040B9A0  _VectorClass_PAVTechnoClass::dispatchEvent  this=VectorClass  sig=csp ====
char __thiscall VectorClass_Techno::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x40b9ac*/
  {
    this->IsInitialized = 0; /*0x40b9b6*/
    if ( a3 ) /*0x40b9bc*/
      v4 = a3; /*0x40b9d2*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x40b9ce*/
    this->IsInitialized = 1; /*0x40b9d6*/
    if ( v4 ) /*0x40b9da*/
    {
      if ( this->Items ) /*0x40b9e5*/
      {
        v6 = this->Capacity; /*0x40b9ec*/
        if ( a2 < v6 ) /*0x40b9f1*/
          v6 = a2; /*0x40b9f3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x40b9f9*/
          ++i; /*0x40b9fe*/
        if ( this->IsAllocated ) /*0x40ba0b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x40ba16*/
          this->Items = 0; /*0x40ba1e*/
        }
      }
      this->Items = v4; /*0x40ba27*/
      this->Capacity = a2; /*0x40ba2f*/
      this->IsAllocated = a3 == 0; /*0x40ba32*/
      return 1; /*0x40ba38*/
    }
    else
    {
      return 0; /*0x40b9df*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x40ba42*/
    return 1; /*0x40ba48*/
  }
}


// ==== 0x0040BA50  _VectorClass_PAVTechnoClass::ddtor  this=VectorClass  sig=csp ====
void __thiscall VectorClass_Techno::_vt03(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x40ba5d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x40ba63*/
    *(_DWORD *)(this + 4) = 0; /*0x40ba6b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x40ba6e*/
  *(_DWORD *)(this + 8) = 0; /*0x40ba71*/
}


// ==== 0x0040BA80  _VectorClass_PAVTechnoClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_Techno::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x40ba80*/
    return 0; /*0x40ba88*/
  v3 = *(_DWORD *)(this + 8); /*0x40ba8e*/
  result = 0; /*0x40ba91*/
  if ( v3 <= 0 ) /*0x40ba95*/
    return -1; /*0x40baac*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x40ba9b*/
  {
    if ( ++result >= v3 ) /*0x40baaa*/
      return -1; /*0x40baaa*/
  }
  return result; /*0x40ba8a*/
}


// ==== 0x0040BAC0  _VectorClass_PAVTechnoClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_Techno::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x40bac0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x40bad5*/
  else
    return 0; /*0x40bac7*/
}


// ==== 0x0040BAE0  _DynamicVectorClass_PAVTechnoClass::checkCondition  this=DynamicVector  sig=csp ====
char __thiscall MoveFeedback::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x40baec*/
  {
    this->IsInitialized = 0; /*0x40baf2*/
    if ( a3 ) /*0x40baf8*/
      v4 = a3; /*0x40bb0e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x40bb0a*/
    this->IsInitialized = 1; /*0x40bb12*/
    if ( !v4 ) /*0x40bb16*/
      return 0; /*0x40bb8a*/
    if ( this->Items ) /*0x40bb18*/
    {
      v5 = this->DynamicVector_field_0x8; /*0x40bb1f*/
      if ( a2 < v5 ) /*0x40bb24*/
        v5 = a2; /*0x40bb26*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x40bb2c*/
        ++i; /*0x40bb31*/
      if ( this->IsAllocated ) /*0x40bb3e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x40bb49*/
        this->Items = 0; /*0x40bb51*/
      }
    }
    this->Items = v4; /*0x40bb5a*/
    this->DynamicVector_field_0x8 = a2; /*0x40bb62*/
    this->IsAllocated = a3 == 0; /*0x40bb65*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x40bb6e*/
  }
  v7 = this->DynamicVector_field_0x8; /*0x40bb71*/
  if ( v7 < this->Items ) /*0x40bb79*/
    this->Items = v7; /*0x40bb7b*/
  return 1; /*0x40bb7e*/
}


// ==== 0x0040BB90  _DynamicVectorClass_PAVTechnoClass::Draw  this=DynamicVector  sig=csp ====
int __thiscall MoveFeedback::_vt04(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x40bb90*/
  result = 0; /*0x40bb93*/
  if ( v2 <= 0 ) /*0x40bb98*/
    return -1; /*0x40bbaf*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x40bb9e*/
  {
    if ( ++result >= v2 ) /*0x40bbad*/
      return -1; /*0x40bbad*/
  }
  return result; /*0x40bbb2*/
}


// ==== 0x0040BBC0  _VectorClass_PAVBombClass::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_ptr_BombClass::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x40bbc3*/
  *Block = &vt_VectorClass_BombClass; /*0x40bbc6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x40bbd0*/
  {
    __3_YAXPAX_Z(v3); /*0x40bbd8*/
    *(Block + 1) = 0; /*0x40bbe0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x40bbeb*/
  *(Block + 2) = 0; /*0x40bbf1*/
  if ( (a2 & 1) != 0 ) /*0x40bbf8*/
    __3_YAXPAX_Z(Block); /*0x40bbfb*/
  return (VectorClass *)Block; /*0x40bc05*/
}


// ==== 0x0040BC10  _DynamicVectorClass_PAVBombClass::executeAction  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall EventClass::executeAction(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x40bc13*/
  *Block = &vt_VectorClass_BombClass; /*0x40bc16*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x40bc20*/
  {
    __3_YAXPAX_Z(v3); /*0x40bc28*/
    *(Block + 1) = 0; /*0x40bc30*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x40bc3b*/
  *(Block + 2) = 0; /*0x40bc41*/
  if ( (a2 & 1) != 0 ) /*0x40bc48*/
    __3_YAXPAX_Z(Block); /*0x40bc4b*/
  return (DynamicVector *)Block; /*0x40bc55*/
}


// ==== 0x0040BC60  _VectorClass_PAVTechnoClass::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_BombClass::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x40bc63*/
  *Block = &vt_VectorClass_TechnoClass; /*0x40bc66*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x40bc70*/
  {
    __3_YAXPAX_Z(v3); /*0x40bc78*/
    *(Block + 1) = 0; /*0x40bc80*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x40bc8b*/
  *(Block + 2) = 0; /*0x40bc91*/
  if ( (a2 & 1) != 0 ) /*0x40bc98*/
    __3_YAXPAX_Z(Block); /*0x40bc9b*/
  return (VectorClass *)Block; /*0x40bca5*/
}


// ==== 0x0040BCB0  _DynamicVectorClass_PAVTechnoClass::QueryInterface  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall MoveFeedback::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x40bcb3*/
  *Block = &vt_VectorClass_TechnoClass; /*0x40bcb6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x40bcc0*/
  {
    __3_YAXPAX_Z(v3); /*0x40bcc8*/
    *(Block + 1) = 0; /*0x40bcd0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x40bcdb*/
  *(Block + 2) = 0; /*0x40bce1*/
  if ( (a2 & 1) != 0 ) /*0x40bce8*/
    __3_YAXPAX_Z(Block); /*0x40bceb*/
  return (DynamicVector *)Block; /*0x40bcf5*/
}


// ==== 0x0040BD00  EventClass::resetEvent  this=VectorClass  sig=csp ====
_DWORD *__thiscall EventClass::resetEvent(_DWORD *this, BuildingClass *aP1, BuildingClass *aP2)
{
  this->Items = 0; /*0x40bd0b*/
  this->Capacity = aP1; /*0x40bd0e*/
  this->q030 = 1; /*0x40bd11*/
  this->__pad_034 = 0; /*0x40bd15*/
  *this = &vt_VectorClass_TechnoClass; /*0x40bd18*/
  if ( aP1 ) /*0x40bd1e*/
  {
    if ( aP2 ) /*0x40bd26*/
    {
      this->Items = aP2; /*0x40bd28*/
      return this; /*0x40bd2e*/
    }
    this->Items = __2_YAPAXI_Z(4 * (_DWORD)aP1); /*0x40bd3d*/
    this->__pad_034 = 1; /*0x40bd40*/
  }
  return this; /*0x40bd2d*/
}


// ==== 0x0040BD50  sub_40BD50  this=-  sig=ida-proto ====
int sub_40BD50()
{
  MEMORY[0x87F670] = 0; /*0x40bd52*/
  MEMORY[0x87F674] = 0; /*0x40bd57*/
  MEMORY[0x87F678] = 0; /*0x40bd5c*/
  MEMORY[0x87F67C] = 0; /*0x40bd61*/
  return 0; /*0x40bd66*/
}


// ==== 0x0040BD70  sub_40BD70  this=-  sig=ida-proto ====
int sub_40BD70()
{
  MEMORY[0x87F680] = 0; /*0x40bd77*/
  MEMORY[0x87F684] = 0; /*0x40bd7c*/
  MEMORY[0x87F688] = 0; /*0x40bd81*/
  MEMORY[0x87F68C] = 0; /*0x40bd86*/
  MEMORY[0x87F690] = 0; /*0x40bd8b*/
  return atexit(sub_40BDA0); /*0x40bd96*/
}


// ==== 0x0040BDA0  sub_40BDA0  this=-  sig=ida-proto ====
void __cdecl sub_40BDA0()
{
  __3_YAXPAX_Z(MEMORY[0x87F680]); /*0x40bda6*/
  MEMORY[0x87F680] = 0; /*0x40bdb0*/
  MEMORY[0x87F684] = 0; /*0x40bdb5*/
  MEMORY[0x87F688] = 0; /*0x40bdba*/
  MEMORY[0x87F68C] = 0; /*0x40bdbf*/
  MEMORY[0x87F690] = 0; /*0x40bdc4*/
}


// ==== 0x0040BDD0  sub_40BDD0  this=-  sig=ida-proto ====
int sub_40BDD0()
{
  MEMORY[0x87F65C] = 0; /*0x40bdd7*/
  MEMORY[0x87F660] = 0; /*0x40bddc*/
  MEMORY[0x87F664] = 1; /*0x40bde1*/
  MEMORY[0x87F665] = 0; /*0x40bde8*/
  MEMORY[0x87F658] = (int)&vt_DynamicVectorClass_CommandClass_const; /*0x40bded*/
  MEMORY[0x87F66C] = 10; /*0x40bdf7*/
  MEMORY[0x87F668] = 0; /*0x40be01*/
  return atexit(EventClass::finalizeEvent); /*0x40be0c*/
}


// ==== 0x0040BE10  EventClass::finalizeEvent  this=EventClass  sig=ida-proto ====
void __cdecl sub_40BE10()
{
  MEMORY[0x87F658] = (int)&vt_VectorClass_CommandClass_const; /*0x40be18*/
  if ( MEMORY[0x87F65C] && MEMORY[0x87F665] ) /*0x40be2c*/
  {
    __3_YAXPAX_Z(MEMORY[0x87F65C]); /*0x40be2f*/
    MEMORY[0x87F65C] = 0; /*0x40be37*/
  }
  MEMORY[0x87F665] = 0; /*0x40be3d*/
  MEMORY[0x87F660] = 0; /*0x40be43*/
}


// ==== 0x0040BE50  _DynamicVectorClass_PBVCommandClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall MoveFeedback::sub_40BE50(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x40be56*/
  *(_DWORD *)(this + 16) = 0; /*0x40be59*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x40be60*/
  {
    __3_YAXPAX_Z(v2); /*0x40be66*/
    *(_DWORD *)(this + 4) = 0; /*0x40be6e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x40be71*/
  *(_DWORD *)(this + 8) = 0; /*0x40be74*/
}


// ==== 0x0040BE80  _DynamicVectorClass_PBVCommandClass::GetIndex2  this=DynamicVector  sig=csp ====
unsigned int __thiscall MoveFeedback::sub_40BE80(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x40be80*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x40be95*/
  else
    return 0; /*0x40be87*/
}


// ==== 0x0040BEA0  _VectorClass_PBVCommandClass::Capacity  this=VectorClass  sig=csp ====
int __thiscall VectorClass_cptr_CommandClass::Capacity(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x40beaa*/
}


// ==== 0x0040BEB0  _VectorClass_PBVCommandClass::GetAt  this=VectorClass  sig=csp ====
char __thiscall VectorClass_cptr_CommandClass::GetAt(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x40beb2*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x40bebd*/
  {
    v3 = 0; /*0x40bebf*/
    if ( v2 <= 0 ) /*0x40bec3*/
      return 1; /*0x40bee3*/
    v4 = (_DWORD *)this->Items; /*0x40bec5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x40becb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x40bed4*/
    {
      ++v3; /*0x40bed6*/
      ++v4; /*0x40bed7*/
      if ( v3 >= v2 ) /*0x40bedc*/
        return 1; /*0x40bedc*/
    }
  }
  return 0; /*0x40bede*/
}


// ==== 0x0040BEF0  _VectorClass_PBVCommandClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_cptr_CommandClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x40befc*/
  {
    this->IsInitialized = 0; /*0x40bf06*/
    if ( a3 ) /*0x40bf0c*/
      v4 = a3; /*0x40bf22*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x40bf1e*/
    this->IsInitialized = 1; /*0x40bf26*/
    if ( v4 ) /*0x40bf2a*/
    {
      if ( this->Items ) /*0x40bf35*/
      {
        v6 = this->Capacity; /*0x40bf3c*/
        if ( a2 < v6 ) /*0x40bf41*/
          v6 = a2; /*0x40bf43*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x40bf49*/
          ++i; /*0x40bf4e*/
        if ( this->IsAllocated ) /*0x40bf5b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x40bf66*/
          this->Items = 0; /*0x40bf6e*/
        }
      }
      this->Items = v4; /*0x40bf77*/
      this->Capacity = a2; /*0x40bf7f*/
      this->IsAllocated = a3 == 0; /*0x40bf82*/
      return 1; /*0x40bf88*/
    }
    else
    {
      return 0; /*0x40bf2f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x40bf92*/
    return 1; /*0x40bf98*/
  }
}


// ==== 0x0040BFA0  _VectorClass_PBVCommandClass::SetAt  this=VectorClass  sig=csp ====
void __thiscall VectorClass_cptr_CommandClass::SetAt(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x40bfad*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x40bfb3*/
    *(_DWORD *)(this + 4) = 0; /*0x40bfbb*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x40bfbe*/
  *(_DWORD *)(this + 8) = 0; /*0x40bfc1*/
}


// ==== 0x0040BFD0  _VectorClass_PBVCommandClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_cptr_CommandClass::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x40bfd0*/
    return 0; /*0x40bfd8*/
  v3 = *(_DWORD *)(this + 8); /*0x40bfde*/
  result = 0; /*0x40bfe1*/
  if ( v3 <= 0 ) /*0x40bfe5*/
    return -1; /*0x40bffc*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x40bfeb*/
  {
    if ( ++result >= v3 ) /*0x40bffa*/
      return -1; /*0x40bffa*/
  }
  return result; /*0x40bfda*/
}


// ==== 0x0040C010  _VectorClass_PBVCommandClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_cptr_CommandClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x40c010*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x40c025*/
  else
    return 0; /*0x40c017*/
}


// ==== 0x0040C030  _DynamicVectorClass_PBVCommandClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall MoveFeedback::sub_40C030(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x40c03c*/
  {
    this->IsInitialized = 0; /*0x40c042*/
    if ( a3 ) /*0x40c048*/
      v4 = a3; /*0x40c05e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x40c05a*/
    this->IsInitialized = 1; /*0x40c062*/
    if ( !v4 ) /*0x40c066*/
      return 0; /*0x40c0da*/
    if ( this->Items ) /*0x40c068*/
    {
      v5 = this->DynamicVector_field_0x8; /*0x40c06f*/
      if ( a2 < v5 ) /*0x40c074*/
        v5 = a2; /*0x40c076*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x40c07c*/
        ++i; /*0x40c081*/
      if ( this->IsAllocated ) /*0x40c08e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x40c099*/
        this->Items = 0; /*0x40c0a1*/
      }
    }
    this->Items = v4; /*0x40c0aa*/
    this->DynamicVector_field_0x8 = a2; /*0x40c0b2*/
    this->IsAllocated = a3 == 0; /*0x40c0b5*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x40c0be*/
  }
  v7 = this->DynamicVector_field_0x8; /*0x40c0c1*/
  if ( v7 < this->Items ) /*0x40c0c9*/
    this->Items = v7; /*0x40c0cb*/
  return 1; /*0x40c0ce*/
}


// ==== 0x0040C0E0  _DynamicVectorClass_PBVCommandClass::FindMoveItem  this=DynamicVector  sig=csp ====
int __thiscall MoveFeedback::sub_40C0E0(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x40c0e0*/
  result = 0; /*0x40c0e3*/
  if ( v2 <= 0 ) /*0x40c0e8*/
    return -1; /*0x40c0ff*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x40c0ee*/
  {
    if ( ++result >= v2 ) /*0x40c0fd*/
      return -1; /*0x40c0fd*/
  }
  return result; /*0x40c102*/
}


// ==== 0x0040C110  _VectorClass_PBVCommandClass::queueEvent  this=VectorClass  sig=csp ====
VectorClass *__thiscall EventClass::queueEvent(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x40c113*/
  *Block = &vt_VectorClass_CommandClass_const; /*0x40c116*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x40c120*/
  {
    __3_YAXPAX_Z(v3); /*0x40c128*/
    *(Block + 1) = 0; /*0x40c130*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x40c13b*/
  *(Block + 2) = 0; /*0x40c141*/
  if ( (a2 & 1) != 0 ) /*0x40c148*/
    __3_YAXPAX_Z(Block); /*0x40c14b*/
  return (VectorClass *)Block; /*0x40c155*/
}


// ==== 0x0040C160  _DynamicVectorClass_PBVCommandClass::Constructor  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall MoveFeedback::Constructor(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x40c163*/
  *Block = &vt_VectorClass_CommandClass_const; /*0x40c166*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x40c170*/
  {
    __3_YAXPAX_Z(v3); /*0x40c178*/
    *(Block + 1) = 0; /*0x40c180*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x40c18b*/
  *(Block + 2) = 0; /*0x40c191*/
  if ( (a2 & 1) != 0 ) /*0x40c198*/
    __3_YAXPAX_Z(Block); /*0x40c19b*/
  return (DynamicVector *)Block; /*0x40c1a5*/
}


// ==== 0x0040C1B0  sub_40C1B0  this=-  sig=ida-proto ====
int sub_40C1B0()
{
  MEMORY[0x87F69C] = 0; /*0x40c1b7*/
  MEMORY[0x87F6A0] = 0; /*0x40c1bc*/
  MEMORY[0x87F6A4] = 1; /*0x40c1c1*/
  MEMORY[0x87F6A5] = 0; /*0x40c1c8*/
  MEMORY[0x87F698] = (int)&vt_DynamicVectorClass_LightConvertClass; /*0x40c1cd*/
  MEMORY[0x87F6AC] = 10; /*0x40c1d7*/
  MEMORY[0x87F6A8] = 0; /*0x40c1e1*/
  return atexit(sub_40C1F0); /*0x40c1ec*/
}


// ==== 0x0040C1F0  sub_40C1F0  this=-  sig=ida-proto ====
void __cdecl sub_40C1F0()
{
  MEMORY[0x87F698] = (int)&vt_VectorClass_LightConvertClass; /*0x40c1f8*/
  if ( MEMORY[0x87F69C] && MEMORY[0x87F6A5] ) /*0x40c20c*/
  {
    __3_YAXPAX_Z(MEMORY[0x87F69C]); /*0x40c20f*/
    MEMORY[0x87F69C] = 0; /*0x40c217*/
  }
  MEMORY[0x87F6A5] = 0; /*0x40c21d*/
  MEMORY[0x87F6A0] = 0; /*0x40c223*/
}


// ==== 0x0040C230  _DynamicVectorClass_PAVLightConvertClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_LightConvertClass::sub_40C230(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x40c236*/
  *(_DWORD *)(this + 16) = 0; /*0x40c239*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x40c240*/
  {
    __3_YAXPAX_Z(v2); /*0x40c246*/
    *(_DWORD *)(this + 4) = 0; /*0x40c24e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x40c251*/
  *(_DWORD *)(this + 8) = 0; /*0x40c254*/
}


// ==== 0x0040C260  _DynamicVectorClass_PAVLightConvertClass::dequeueEvent  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_LightConvertClass::sub_40C260(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x40c260*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x40c275*/
  else
    return 0; /*0x40c267*/
}


// ==== 0x0040C280  _VectorClass_PAVLightConvertClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_LightConvertClass::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x40c28a*/
}


// ==== 0x0040C290  _VectorClass_PAVLightConvertClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_LightConvertClass::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x40c292*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x40c29d*/
  {
    v3 = 0; /*0x40c29f*/
    if ( v2 <= 0 ) /*0x40c2a3*/
      return 1; /*0x40c2c3*/
    v4 = (_DWORD *)this->Items; /*0x40c2a5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x40c2ab*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x40c2b4*/
    {
      ++v3; /*0x40c2b6*/
      ++v4; /*0x40c2b7*/
      if ( v3 >= v2 ) /*0x40c2bc*/
        return 1; /*0x40c2bc*/
    }
  }
  return 0; /*0x40c2be*/
}


// ==== 0x0040C2D0  _VectorClass_PAVLightConvertClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_LightConvertClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x40c2dc*/
  {
    this->IsInitialized = 0; /*0x40c2e6*/
    if ( a3 ) /*0x40c2ec*/
      v4 = a3; /*0x40c302*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x40c2fe*/
    this->IsInitialized = 1; /*0x40c306*/
    if ( v4 ) /*0x40c30a*/
    {
      if ( this->Items ) /*0x40c315*/
      {
        v6 = this->Capacity; /*0x40c31c*/
        if ( a2 < v6 ) /*0x40c321*/
          v6 = a2; /*0x40c323*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x40c329*/
          ++i; /*0x40c32e*/
        if ( this->IsAllocated ) /*0x40c33b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x40c346*/
          this->Items = 0; /*0x40c34e*/
        }
      }
      this->Items = v4; /*0x40c357*/
      this->Capacity = a2; /*0x40c35f*/
      this->IsAllocated = a3 == 0; /*0x40c362*/
      return 1; /*0x40c368*/
    }
    else
    {
      return 0; /*0x40c30f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x40c372*/
    return 1; /*0x40c378*/
  }
}


// ==== 0x0040C380  _VectorClass_PAVLightConvertClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_LightConvertClass::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x40c38d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x40c393*/
    *(_DWORD *)(this + 4) = 0; /*0x40c39b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x40c39e*/
  *(_DWORD *)(this + 8) = 0; /*0x40c3a1*/
}


// ==== 0x0040C3B0  _VectorClass_PAVLightConvertClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_LightConvertClass::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x40c3b0*/
    return 0; /*0x40c3b8*/
  v3 = *(_DWORD *)(this + 8); /*0x40c3be*/
  result = 0; /*0x40c3c1*/
  if ( v3 <= 0 ) /*0x40c3c5*/
    return -1; /*0x40c3dc*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x40c3cb*/
  {
    if ( ++result >= v3 ) /*0x40c3da*/
      return -1; /*0x40c3da*/
  }
  return result; /*0x40c3ba*/
}


// ==== 0x0040C3F0  _VectorClass_PAVLightConvertClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_LightConvertClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x40c3f0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x40c405*/
  else
    return 0; /*0x40c3f7*/
}


// ==== 0x0040C410  _DynamicVectorClass_PAVLightConvertClass::clearEvents  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_LightConvertClass::sub_40C410(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x40c41c*/
  {
    this->IsInitialized = 0; /*0x40c422*/
    if ( a3 ) /*0x40c428*/
      v4 = a3; /*0x40c43e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x40c43a*/
    this->IsInitialized = 1; /*0x40c442*/
    if ( !v4 ) /*0x40c446*/
      return 0; /*0x40c4ba*/
    if ( this->Items ) /*0x40c448*/
    {
      v5 = this->DynamicVector_field_0x8; /*0x40c44f*/
      if ( a2 < v5 ) /*0x40c454*/
        v5 = a2; /*0x40c456*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x40c45c*/
        ++i; /*0x40c461*/
      if ( this->IsAllocated ) /*0x40c46e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x40c479*/
        this->Items = 0; /*0x40c481*/
      }
    }
    this->Items = v4; /*0x40c48a*/
    this->DynamicVector_field_0x8 = a2; /*0x40c492*/
    this->IsAllocated = a3 == 0; /*0x40c495*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x40c49e*/
  }
  v7 = this->DynamicVector_field_0x8; /*0x40c4a1*/
  if ( v7 < this->Items ) /*0x40c4a9*/
    this->Items = v7; /*0x40c4ab*/
  return 1; /*0x40c4ae*/
}


// ==== 0x0040C4C0  _DynamicVectorClass_PAVLightConvertClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_LightConvertClass::sub_40C4C0(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x40c4c0*/
  result = 0; /*0x40c4c3*/
  if ( v2 <= 0 ) /*0x40c4c8*/
    return -1; /*0x40c4df*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x40c4ce*/
  {
    if ( ++result >= v2 ) /*0x40c4dd*/
      return -1; /*0x40c4dd*/
  }
  return result; /*0x40c4e2*/
}


// ==== 0x0040C4F0  _VectorClass_PAVLightConvertClass::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_ptr_LightConvertClass::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x40c4f3*/
  *Block = &vt_VectorClass_LightConvertClass; /*0x40c4f6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x40c500*/
  {
    __3_YAXPAX_Z(v3); /*0x40c508*/
    *(Block + 1) = 0; /*0x40c510*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x40c51b*/
  *(Block + 2) = 0; /*0x40c521*/
  if ( (a2 & 1) != 0 ) /*0x40c528*/
    __3_YAXPAX_Z(Block); /*0x40c52b*/
  return (VectorClass *)Block; /*0x40c535*/
}


// ==== 0x0040C540  _DynamicVectorClass_PAVLightConvertClass::Constructor_VectorClass_LightConvertClass___  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall VectorClass_ptr_LightConvertClass::Constructor_VectorClass_LightConvertClass___(
        _DWORD *Block,
        char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x40c543*/
  *Block = &vt_VectorClass_LightConvertClass; /*0x40c546*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x40c550*/
  {
    __3_YAXPAX_Z(v3); /*0x40c558*/
    *(Block + 1) = 0; /*0x40c560*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x40c56b*/
  *(Block + 2) = 0; /*0x40c571*/
  if ( (a2 & 1) != 0 ) /*0x40c578*/
    __3_YAXPAX_Z(Block); /*0x40c57b*/
  return (DynamicVector *)Block; /*0x40c585*/
}


// ==== 0x0040C590  EventClass::getEventCount  this=EventClass  sig=ida-proto ====
void sub_40C590()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x40c59c*/
  MEMORY[0x87F6F8] = Math::Sqrt(v0 + v0); /*0x40c5ae*/
}


// ==== 0x0040C5C0  sub_40C5C0  this=-  sig=ida-proto ====
void sub_40C5C0()
{
  MEMORY[0x87F748] = MEMORY[0x87F6F8] / 60.0; /*0x40c5cc*/
}


// ==== 0x0040C5E0  sub_40C5E0  this=-  sig=ida-proto ====
void sub_40C5E0()
{
  MEMORY[0x87F730] = 1.0 / MEMORY[0x87F748]; /*0x40c5ec*/
}


// ==== 0x0040C600  sub_40C600  this=-  sig=ida-proto ====
void sub_40C600()
{
  MEMORY[0x87F728] = 0.0174532925199433 * 45.0; /*0x40c60c*/
}


// ==== 0x0040C620  sub_40C620  this=-  sig=ida-proto ====
void sub_40C620()
{
  MEMORY[0x87F700] = 0.0174532925199433 * 60.0; /*0x40c62c*/
}


// ==== 0x0040C640  sub_40C640  this=-  sig=ida-proto ====
void sub_40C640()
{
  MEMORY[0x87F6D8] = 0.0174532925199433 * 90.0; /*0x40c64c*/
}


// ==== 0x0040C660  sub_40C660  this=-  sig=ida-proto ====
__int64 sub_40C660()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x87F6D8] - MEMORY[0x87F700]); /*0x40c672*/
  result = Math::RoundToInt(v0 * MEMORY[0x87F6F8] * 0.5); /*0x40c686*/
  MEMORY[0x87F768] = result; /*0x40c68b*/
  return result; /*0x40c690*/
}


// ==== 0x0040C6A0  sub_40C6A0  this=-  sig=ida-proto ====
void sub_40C6A0()
{
  MEMORY[0x87F708] = Math::ArcTan((double)MEMORY[0x87F768] * 0.00390625); /*0x40c6b7*/
}


// ==== 0x0040C6D0  sub_40C6D0  this=-  sig=ida-proto ====
void sub_40C6D0()
{
  MEMORY[0x87F720] = Math::ArcTan((double)(2 * MEMORY[0x87F768]) / MEMORY[0x87F6F8]); /*0x40c6f2*/
}


// ==== 0x0040C700  sub_40C700  this=-  sig=ida-proto ====
__int64 sub_40C700()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x87F768]) + 0.5); /*0x40c71b*/
  MEMORY[0x87F744] = result; /*0x40c720*/
  return result; /*0x40c726*/
}


// ==== 0x0040C730  sub_40C730  this=-  sig=ida-proto ====
int sub_40C730()
{
  MEMORY[0x87F6F0] = 0; /*0x40c732*/
  MEMORY[0x87F6F2] = 0; /*0x40c738*/
  return 0; /*0x40c73e*/
}


// ==== 0x0040C740  sub_40C740  this=-  sig=ida-proto ====
int sub_40C740()
{
  MEMORY[0x87F710] = 0; /*0x40c742*/
  MEMORY[0x87F714] = 0; /*0x40c747*/
  MEMORY[0x87F718] = 0; /*0x40c74c*/
  return 0; /*0x40c751*/
}


// ==== 0x0040C760  sub_40C760  this=-  sig=ida-proto ====
int sub_40C760()
{
  MEMORY[0x87F740] = 0; /*0x40c765*/
  MEMORY[0x87F738] = 128; /*0x40c76f*/
  MEMORY[0x87F73C] = 128; /*0x40c774*/
  return 128; /*0x40c779*/
}


// ==== 0x0040C780  sub_40C780  this=-  sig=ida-proto ====
int sub_40C780()
{
  MEMORY[0x87F6E0] = 0; /*0x40c782*/
  MEMORY[0x87F6E4] = 0; /*0x40c787*/
  MEMORY[0x87F6E8] = 0; /*0x40c78c*/
  MEMORY[0x87F6EC] = 0; /*0x40c791*/
  return 0; /*0x40c796*/
}


// ==== 0x0040C7A0  sub_40C7A0  this=-  sig=ida-proto ====
int sub_40C7A0()
{
  MEMORY[0x87F754] = 0; /*0x40c7a7*/
  MEMORY[0x87F758] = 0; /*0x40c7ac*/
  MEMORY[0x87F75C] = 1; /*0x40c7b1*/
  MEMORY[0x87F75D] = 0; /*0x40c7b8*/
  MEMORY[0x87F750] = (int)&vt_DynamicVectorClass_IsometricTileClass; /*0x40c7bd*/
  MEMORY[0x87F764] = 10; /*0x40c7c7*/
  MEMORY[0x87F760] = 0; /*0x40c7d1*/
  return atexit(sub_40C7E0); /*0x40c7dc*/
}


// ==== 0x0040C7E0  sub_40C7E0  this=-  sig=ida-proto ====
void __cdecl sub_40C7E0()
{
  MEMORY[0x87F750] = (int)&vt_VectorClass_IsometricTileClass; /*0x40c7e8*/
  if ( MEMORY[0x87F754] && MEMORY[0x87F75D] ) /*0x40c7fc*/
  {
    __3_YAXPAX_Z(MEMORY[0x87F754]); /*0x40c7ff*/
    MEMORY[0x87F754] = 0; /*0x40c807*/
  }
  MEMORY[0x87F75D] = 0; /*0x40c80d*/
  MEMORY[0x87F758] = 0; /*0x40c813*/
}


// ==== 0x0040C820  _DynamicVectorClass_PAVIsometricTileClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_IsometricTileClass::sub_40C820(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x40c826*/
  *(_DWORD *)(this + 16) = 0; /*0x40c829*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x40c830*/
  {
    __3_YAXPAX_Z(v2); /*0x40c836*/
    *(_DWORD *)(this + 4) = 0; /*0x40c83e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x40c841*/
  *(_DWORD *)(this + 8) = 0; /*0x40c844*/
}


// ==== 0x0040C850  _DynamicVectorClass_PAVIsometricTileClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_IsometricTileClass::sub_40C850(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x40c850*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x40c865*/
  else
    return 0; /*0x40c857*/
}


// ==== 0x0040C870  _VectorClass_PAVIsometricTileClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_IsometricTileClass::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x40c87a*/
}


// ==== 0x0040C880  _VectorClass_PAVIsometricTileClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_IsometricTileClass::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x40c882*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x40c88d*/
  {
    v3 = 0; /*0x40c88f*/
    if ( v2 <= 0 ) /*0x40c893*/
      return 1; /*0x40c8b3*/
    v4 = (_DWORD *)this->Items; /*0x40c895*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x40c89b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x40c8a4*/
    {
      ++v3; /*0x40c8a6*/
      ++v4; /*0x40c8a7*/
      if ( v3 >= v2 ) /*0x40c8ac*/
        return 1; /*0x40c8ac*/
    }
  }
  return 0; /*0x40c8ae*/
}


// ==== 0x0040C8C0  _VectorClass_PAVIsometricTileClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_IsometricTileClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x40c8cc*/
  {
    this->IsInitialized = 0; /*0x40c8d6*/
    if ( a3 ) /*0x40c8dc*/
      v4 = a3; /*0x40c8f2*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x40c8ee*/
    this->IsInitialized = 1; /*0x40c8f6*/
    if ( v4 ) /*0x40c8fa*/
    {
      if ( this->Items ) /*0x40c905*/
      {
        v6 = this->Capacity; /*0x40c90c*/
        if ( a2 < v6 ) /*0x40c911*/
          v6 = a2; /*0x40c913*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x40c919*/
          ++i; /*0x40c91e*/
        if ( this->IsAllocated ) /*0x40c92b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x40c936*/
          this->Items = 0; /*0x40c93e*/
        }
      }
      this->Items = v4; /*0x40c947*/
      this->Capacity = a2; /*0x40c94f*/
      this->IsAllocated = a3 == 0; /*0x40c952*/
      return 1; /*0x40c958*/
    }
    else
    {
      return 0; /*0x40c8ff*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x40c962*/
    return 1; /*0x40c968*/
  }
}


// ==== 0x0040C970  _VectorClass_PAVIsometricTileClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_IsometricTileClass::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x40c97d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x40c983*/
    *(_DWORD *)(this + 4) = 0; /*0x40c98b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x40c98e*/
  *(_DWORD *)(this + 8) = 0; /*0x40c991*/
}


// ==== 0x0040C9A0  _VectorClass_PAVIsometricTileClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_IsometricTileClass::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x40c9a0*/
    return 0; /*0x40c9a8*/
  v3 = *(_DWORD *)(this + 8); /*0x40c9ae*/
  result = 0; /*0x40c9b1*/
  if ( v3 <= 0 ) /*0x40c9b5*/
    return -1; /*0x40c9cc*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x40c9bb*/
  {
    if ( ++result >= v3 ) /*0x40c9ca*/
      return -1; /*0x40c9ca*/
  }
  return result; /*0x40c9aa*/
}


// ==== 0x0040C9E0  _VectorClass_PAVIsometricTileClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_IsometricTileClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x40c9e0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x40c9f5*/
  else
    return 0; /*0x40c9e7*/
}


// ==== 0x0040CA00  _DynamicVectorClass_PAVIsometricTileClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_IsometricTileClass::sub_40CA00(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x40ca0c*/
  {
    this->IsInitialized = 0; /*0x40ca12*/
    if ( a3 ) /*0x40ca18*/
      v4 = a3; /*0x40ca2e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x40ca2a*/
    this->IsInitialized = 1; /*0x40ca32*/
    if ( !v4 ) /*0x40ca36*/
      return 0; /*0x40caaa*/
    if ( this->Items ) /*0x40ca38*/
    {
      v5 = this->DynamicVector_field_0x8; /*0x40ca3f*/
      if ( a2 < v5 ) /*0x40ca44*/
        v5 = a2; /*0x40ca46*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x40ca4c*/
        ++i; /*0x40ca51*/
      if ( this->IsAllocated ) /*0x40ca5e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x40ca69*/
        this->Items = 0; /*0x40ca71*/
      }
    }
    this->Items = v4; /*0x40ca7a*/
    this->DynamicVector_field_0x8 = a2; /*0x40ca82*/
    this->IsAllocated = a3 == 0; /*0x40ca85*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x40ca8e*/
  }
  v7 = this->DynamicVector_field_0x8; /*0x40ca91*/
  if ( v7 < this->Items ) /*0x40ca99*/
    this->Items = v7; /*0x40ca9b*/
  return 1; /*0x40ca9e*/
}


// ==== 0x0040CAB0  _DynamicVectorClass_PAVIsometricTileClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_IsometricTileClass::sub_40CAB0(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x40cab0*/
  result = 0; /*0x40cab3*/
  if ( v2 <= 0 ) /*0x40cab8*/
    return -1; /*0x40cacf*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x40cabe*/
  {
    if ( ++result >= v2 ) /*0x40cacd*/
      return -1; /*0x40cacd*/
  }
  return result; /*0x40cad2*/
}


// ==== 0x0040CAE0  _VectorClass_PAVIsometricTileClass::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_ptr_IsometricTileClass::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x40cae3*/
  *Block = &vt_VectorClass_IsometricTileClass; /*0x40cae6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x40caf0*/
  {
    __3_YAXPAX_Z(v3); /*0x40caf8*/
    *(Block + 1) = 0; /*0x40cb00*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x40cb0b*/
  *(Block + 2) = 0; /*0x40cb11*/
  if ( (a2 & 1) != 0 ) /*0x40cb18*/
    __3_YAXPAX_Z(Block); /*0x40cb1b*/
  return (VectorClass *)Block; /*0x40cb25*/
}


// ==== 0x0040CB30  _DynamicVectorClass_PAVIsometricTileClass::Constructor_VectorClass_IsometricTileClass___  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall VectorClass_ptr_IsometricTileClass::Constructor_VectorClass_IsometricTileClass___(
        _DWORD *Block,
        char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x40cb33*/
  *Block = &vt_VectorClass_IsometricTileClass; /*0x40cb36*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x40cb40*/
  {
    __3_YAXPAX_Z(v3); /*0x40cb48*/
    *(Block + 1) = 0; /*0x40cb50*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x40cb5b*/
  *(Block + 2) = 0; /*0x40cb61*/
  if ( (a2 & 1) != 0 ) /*0x40cb68*/
    __3_YAXPAX_Z(Block); /*0x40cb6b*/
  return (DynamicVector *)Block; /*0x40cb75*/
}


// ==== 0x0040CB80  sub_40CB80  this=-  sig=ida-proto ====
int sub_40CB80()
{
  MEMORY[0x87F77C] = 0; /*0x40cb87*/
  MEMORY[0x87F780] = 0; /*0x40cb8c*/
  MEMORY[0x87F784] = 1; /*0x40cb91*/
  MEMORY[0x87F785] = 0; /*0x40cb98*/
  MEMORY[0x87F78C] = 10; /*0x40cb9d*/
  MEMORY[0x87F788] = 0; /*0x40cba7*/
  MEMORY[0x87F778] = (int)&vt_LogicClass; /*0x40cbac*/
  return atexit(sub_40CBC0); /*0x40cbbc*/
}


// ==== 0x0040CBC0  sub_40CBC0  this=-  sig=ida-proto ====
void __cdecl sub_40CBC0()
{
  MEMORY[0x87F778] = (int)&vt_VectorClass_ObjectClass; /*0x40cbc8*/
  if ( MEMORY[0x87F77C] && MEMORY[0x87F785] ) /*0x40cbdc*/
  {
    __3_YAXPAX_Z(MEMORY[0x87F77C]); /*0x40cbdf*/
    MEMORY[0x87F77C] = 0; /*0x40cbe7*/
  }
  MEMORY[0x87F785] = 0; /*0x40cbed*/
  MEMORY[0x87F780] = 0; /*0x40cbf3*/
}


// ==== 0x0040CC00  LogicClass::GetItem  this=LogicClass  sig=csp ====
int __thiscall VectorClass_ptr_IsometricTileClass::sub_40CC00(void *this)
{
  return (*(int (__thiscall **)(void *))(this->IsInitialized)(this);
}


// ==== 0x0040CC10  LogicClass::StubReturnFalse  this=LogicClass  sig=csp ====
void GenericVector::StubReturnFalse()
{
  ; /*0x40cc10*/
}


// ==== 0x0040CC20  LogicClass::Constructor_VectorClass_ObjectClass___  this=LogicClass  sig=csp ====
LogicClass *__thiscall VectorClass_ptr_IsometricTileClass::Constructor_VectorClass_ObjectClass___(
        _DWORD *Block,
        char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x40cc23*/
  *Block = &vt_VectorClass_ObjectClass; /*0x40cc26*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x40cc30*/
  {
    __3_YAXPAX_Z(v3); /*0x40cc38*/
    *(Block + 1) = 0; /*0x40cc40*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x40cc4b*/
  *(Block + 2) = 0; /*0x40cc51*/
  if ( (a2 & 1) != 0 ) /*0x40cc58*/
    __3_YAXPAX_Z(Block); /*0x40cc5b*/
  return (LogicClass *)Block; /*0x40cc65*/
}


// ==== 0x0040CC70  ?$DynamicVectorClass@PAVObjectClass@@::TryFreeAndClear  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_IsometricTileClass::sub_40CC70(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x40cc76*/
  *(_DWORD *)(this + 16) = 0; /*0x40cc79*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x40cc80*/
  {
    __3_YAXPAX_Z(v2); /*0x40cc86*/
    *(_DWORD *)(this + 4) = 0; /*0x40cc8e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x40cc91*/
  *(_DWORD *)(this + 8) = 0; /*0x40cc94*/
}


// ==== 0x0040CCA0  ?$DynamicVectorClass@PAVObjectClass@@::GetPtrOffset  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_IsometricTileClass::sub_40CCA0(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x40cca0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x40ccb5*/
  else
    return 0; /*0x40cca7*/
}


// ==== 0x0040CCC0  ?$VectorClass@PAVObjectClass@@::GetAt  this=VectorClass  sig=csp ====
int __thiscall VectorClass_GetAt(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x40ccca*/
}


// ==== 0x0040CCD0  ?$VectorClass@PAVObjectClass@@::CompareEqual  this=VectorClass  sig=csp ====
char __thiscall Buffer_CompareEqual(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x40ccd2*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x40ccdd*/
  {
    v3 = 0; /*0x40ccdf*/
    if ( v2 <= 0 ) /*0x40cce3*/
      return 1; /*0x40cd03*/
    v4 = (_DWORD *)this->Items; /*0x40cce5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x40cceb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x40ccf4*/
    {
      ++v3; /*0x40ccf6*/
      ++v4; /*0x40ccf7*/
      if ( v3 >= v2 ) /*0x40ccfc*/
        return 1; /*0x40ccfc*/
    }
  }
  return 0; /*0x40ccfe*/
}


// ==== 0x0040CD10  _VectorClass_PAVObjectClass::Release  this=VectorClass  sig=csp ====
char __thiscall ObjectVector::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x40cd1c*/
  {
    this->IsInitialized = 0; /*0x40cd26*/
    if ( a3 ) /*0x40cd2c*/
      v4 = a3; /*0x40cd42*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x40cd3e*/
    this->IsInitialized = 1; /*0x40cd46*/
    if ( v4 ) /*0x40cd4a*/
    {
      if ( this->Items ) /*0x40cd55*/
      {
        v6 = this->Capacity; /*0x40cd5c*/
        if ( a2 < v6 ) /*0x40cd61*/
          v6 = a2; /*0x40cd63*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x40cd69*/
          ++i; /*0x40cd6e*/
        if ( this->IsAllocated ) /*0x40cd7b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x40cd86*/
          this->Items = 0; /*0x40cd8e*/
        }
      }
      this->Items = v4; /*0x40cd97*/
      this->Capacity = a2; /*0x40cd9f*/
      this->IsAllocated = a3 == 0; /*0x40cda2*/
      return 1; /*0x40cda8*/
    }
    else
    {
      return 0; /*0x40cd4f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x40cdb2*/
    return 1; /*0x40cdb8*/
  }
}


// ==== 0x0040CDC0  _VectorClass_PAVObjectClass::ddtor  this=VectorClass  sig=csp ====
void __thiscall ObjectVector::_vt03(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x40cdcd*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x40cdd3*/
    *(_DWORD *)(this + 4) = 0; /*0x40cddb*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x40cdde*/
  *(_DWORD *)(this + 8) = 0; /*0x40cde1*/
}


// ==== 0x0040CDF0  _VectorClass_PAVObjectClass::Add  this=VectorClass  sig=csp ====
int __thiscall ObjectVector::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x40cdf0*/
    return 0; /*0x40cdf8*/
  v3 = *(_DWORD *)(this + 8); /*0x40cdfe*/
  result = 0; /*0x40ce01*/
  if ( v3 <= 0 ) /*0x40ce05*/
    return -1; /*0x40ce1c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x40ce0b*/
  {
    if ( ++result >= v3 ) /*0x40ce1a*/
      return -1; /*0x40ce1a*/
  }
  return result; /*0x40cdfa*/
}


// ==== 0x0040CE30  _VectorClass_PAVObjectClass::Remove  this=VectorClass  sig=csp ====
unsigned int __thiscall ObjectVector::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x40ce30*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x40ce45*/
  else
    return 0; /*0x40ce37*/
}


// ==== 0x0040CE50  ?$DynamicVectorClass@PAVObjectClass@@::Resize  this=DynamicVector  sig=csp ====
char __thiscall GenericVector_Resize(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x40ce5c*/
  {
    this->IsInitialized = 0; /*0x40ce62*/
    if ( a3 ) /*0x40ce68*/
      v4 = a3; /*0x40ce7e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x40ce7a*/
    this->IsInitialized = 1; /*0x40ce82*/
    if ( !v4 ) /*0x40ce86*/
      return 0; /*0x40cefa*/
    if ( this->Items ) /*0x40ce88*/
    {
      v5 = this->DynamicVector_field_0x8; /*0x40ce8f*/
      if ( a2 < v5 ) /*0x40ce94*/
        v5 = a2; /*0x40ce96*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x40ce9c*/
        ++i; /*0x40cea1*/
      if ( this->IsAllocated ) /*0x40ceae*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x40ceb9*/
        this->Items = 0; /*0x40cec1*/
      }
    }
    this->Items = v4; /*0x40ceca*/
    this->DynamicVector_field_0x8 = a2; /*0x40ced2*/
    this->IsAllocated = a3 == 0; /*0x40ced5*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x40cede*/
  }
  v7 = this->DynamicVector_field_0x8; /*0x40cee1*/
  if ( v7 < this->Items ) /*0x40cee9*/
    this->Items = v7; /*0x40ceeb*/
  return 1; /*0x40ceee*/
}


// ==== 0x0040CF00  ?$DynamicVectorClass@PAVObjectClass@@::FindValue  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_IsometricTileClass::sub_40CF00(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x40cf00*/
  result = 0; /*0x40cf03*/
  if ( v2 <= 0 ) /*0x40cf08*/
    return -1; /*0x40cf1f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x40cf0e*/
  {
    if ( ++result >= v2 ) /*0x40cf1d*/
      return -1; /*0x40cf1d*/
  }
  return result; /*0x40cf22*/
}


// ==== 0x0040CF30  _VectorClass_PAVObjectClass::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall ObjectVector::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x40cf33*/
  *Block = &vt_VectorClass_ObjectClass; /*0x40cf36*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x40cf40*/
  {
    __3_YAXPAX_Z(v3); /*0x40cf48*/
    *(Block + 1) = 0; /*0x40cf50*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x40cf5b*/
  *(Block + 2) = 0; /*0x40cf61*/
  if ( (a2 & 1) != 0 ) /*0x40cf68*/
    __3_YAXPAX_Z(Block); /*0x40cf6b*/
  return (VectorClass *)Block; /*0x40cf75*/
}


// ==== 0x0040CF80  sub_40CF80  this=-  sig=ida-proto ====
int sub_40CF80()
{
  MEMORY[0x87F798] = 0; /*0x40cf82*/
  MEMORY[0x87F79C] = 0; /*0x40cf87*/
  MEMORY[0x87F7A0] = 0; /*0x40cf8c*/
  MEMORY[0x87F7A4] = 0; /*0x40cf91*/
  return 0; /*0x40cf96*/
}


// ==== 0x0040CFA0  sub_40CFA0  this=-  sig=ida-proto ====
void sub_40CFA0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x40cfac*/
  MEMORY[0x87F7B0] = Math::Sqrt(v0 + v0); /*0x40cfbe*/
}


// ==== 0x0040CFD0  sub_40CFD0  this=-  sig=ida-proto ====
void sub_40CFD0()
{
  MEMORY[0x884D78] = MEMORY[0x87F7B0] / 60.0; /*0x40cfdc*/
}


// ==== 0x0040CFF0  sub_40CFF0  this=-  sig=ida-proto ====
void sub_40CFF0()
{
  MEMORY[0x884D60] = 1.0 / MEMORY[0x884D78]; /*0x40cffc*/
}


// ==== 0x0040D010  sub_40D010  this=-  sig=ida-proto ====
void sub_40D010()
{
  MEMORY[0x884D58] = 0.0174532925199433 * 45.0; /*0x40d01c*/
}


// ==== 0x0040D030  sub_40D030  this=-  sig=ida-proto ====
void sub_40D030()
{
  MEMORY[0x87F7C0] = 0.0174532925199433 * 60.0; /*0x40d03c*/
}


// ==== 0x0040D050  sub_40D050  this=-  sig=ida-proto ====
void sub_40D050()
{
  MEMORY[0x87F790] = 0.0174532925199433 * 90.0; /*0x40d05c*/
}


// ==== 0x0040D070  sub_40D070  this=-  sig=ida-proto ====
__int64 sub_40D070()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x87F790] - MEMORY[0x87F7C0]); /*0x40d082*/
  result = Math::RoundToInt(v0 * MEMORY[0x87F7B0] * 0.5); /*0x40d096*/
  MEMORY[0x884D80] = result; /*0x40d09b*/
  return result; /*0x40d0a0*/
}


// ==== 0x0040D0B0  sub_40D0B0  this=-  sig=ida-proto ====
void sub_40D0B0()
{
  MEMORY[0x87F7C8] = Math::ArcTan((double)MEMORY[0x884D80] * 0.00390625); /*0x40d0c7*/
}


// ==== 0x0040D0E0  sub_40D0E0  this=-  sig=ida-proto ====
void sub_40D0E0()
{
  MEMORY[0x87F7E0] = Math::ArcTan((double)(2 * MEMORY[0x884D80]) / MEMORY[0x87F7B0]); /*0x40d102*/
}


// ==== 0x0040D110  sub_40D110  this=-  sig=ida-proto ====
__int64 sub_40D110()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x884D80]) + 0.5); /*0x40d12b*/
  MEMORY[0x884D74] = result; /*0x40d130*/
  return result; /*0x40d136*/
}


// ==== 0x0040D140  sub_40D140  this=-  sig=ida-proto ====
int sub_40D140()
{
  MEMORY[0x87F7A8] = 0; /*0x40d142*/
  MEMORY[0x87F7AA] = 0; /*0x40d148*/
  return 0; /*0x40d14e*/
}


// ==== 0x0040D150  sub_40D150  this=-  sig=ida-proto ====
int sub_40D150()
{
  MEMORY[0x87F7D0] = 0; /*0x40d152*/
  MEMORY[0x87F7D4] = 0; /*0x40d157*/
  MEMORY[0x87F7D8] = 0; /*0x40d15c*/
  return 0; /*0x40d161*/
}


// ==== 0x0040D170  sub_40D170  this=-  sig=ida-proto ====
int sub_40D170()
{
  MEMORY[0x884D70] = 0; /*0x40d175*/
  MEMORY[0x884D68] = 128; /*0x40d17f*/
  MEMORY[0x884D6C] = 128; /*0x40d184*/
  return 128; /*0x40d189*/
}


// ==== 0x0040D190  sub_40D190  this=-  sig=ida-proto ====
int sub_40D190()
{
  sub_5BDA40(&MEMORY[0x87F7E8]); /*0x40d195*/
  return atexit(SmallFunc_40D1B0); /*0x40d1a5*/
}


// ==== 0x0040D1B0  SmallFunc_40D1B0  this=-  sig=ida-proto ====
void __cdecl sub_40D1B0()
{
  int *v0; // esi
  int v1; // edi

  MEMORY[0x87F7E8].field_0 = (struct IUnknownVtbl *)&MouseClass::`vftable'; /*0x40d1b2*/
  MEMORY[0x884D00] = (int)&vt_MouseClass; /*0x40d1bc*/
  v0 = &MEMORY[0x884B84]; /*0x40d1c6*/
  v1 = 4; /*0x40d1cb*/
  do /*0x40d1f0*/
  {
    v0 -= 997; /*0x40d1d0*/
    Array::ForEachReverse((int)(v0 + 20), 52, 75, (int (__thiscall *)(int))nullsub_56); /*0x40d1e3*/
    nullsub_57(v0); /*0x40d1ea*/
    --v1; /*0x40d1ef*/
  }
  while ( v1 ); /*0x40d1f0*/
  RadarClass::Destruct(&MEMORY[0x87F7E8]); /*0x40d1f7*/
}


// ==== 0x0040D200  sub_40D200  this=-  sig=ida-proto ====
int sub_40D200()
{
  MEMORY[0x87F7B8] = 0; /*0x40d205*/
  return atexit(sub_40D220); /*0x40d215*/
}


// ==== 0x0040D220  sub_40D220  this=-  sig=ida-proto ====
void __cdecl sub_40D220()
{
  if ( MEMORY[0x87F7B8] ) /*0x40d227*/
    (*(void (__stdcall **)(int))(*(_DWORD *)MEMORY[0x87F7B8] + 8))(MEMORY[0x87F7B8]); /*0x40d22c*/
}


// ==== 0x0040D230  GScreenClass::AddRef  this=GScreenClass  sig=csp ====
int __stdcall COMObject_Stub_ReturnTrueA(int a1)
{
  return 1; /*0x40d235*/
}


// ==== 0x0040D240  GScreenClass::Release  this=GScreenClass  sig=csp ====
int __stdcall COMObject_Stub_ReturnTrueB(int a1)
{
  return 1; /*0x40d245*/
}


// ==== 0x0040D250  DisplayClass::vt_entry_AC  this=DisplayClass  sig=csp ====
void __stdcall DisplayClass::vt_entry_AC(int a1)
{
  ; /*0x40d250*/
}


// ==== 0x0040D260  nullsub_56  this=-  sig=ida-proto ====
void __thiscall nullsub_56(void *this)
{
  ; /*0x40d260*/
}


// ==== 0x0040D270  SidebarClass::initButtons2  this=ScrollClass  sig=csp ====
// attributes: thunk
char __thiscall SidebarClass::InitButtons_0(void *this)
{
  return SidebarClass::InitButtons(this);
}


// ==== 0x0040D280  MouseClass::ProcessInput  this=MouseClass  sig=csp ====
int __thiscall MouseClass::_vt40(_DWORD *this)
{
  return this->q5564; /*0x40d286*/
}


// ==== 0x0040D290  MouseClass::InitMouse  this=MouseClass  sig=csp ====
MouseClass *__thiscall MouseClass::InitMouse(char *Block, char a2)
{
  char *v3; // esi
  int v4; // edi

  *(_DWORD *)Block = &MouseClass::`vftable'; /*0x40d295*/
  *((_DWORD *)Block + 5446) = &vt_MouseClass; /*0x40d29b*/
  v3 = Block + 21404; /*0x40d2a5*/
  v4 = 4; /*0x40d2ab*/
  do /*0x40d2d0*/
  {
    v3 -= 3988; /*0x40d2b0*/
    Array::ForEachReverse((int)(v3 + 80), 52, 75, (int (__thiscall *)(int))nullsub_56); /*0x40d2c3*/
    nullsub_57(); /*0x40d2ca*/
    --v4; /*0x40d2cf*/
  }
  while ( v4 ); /*0x40d2d0*/
  RadarClass::Destruct(Block); /*0x40d2d4*/
  if ( (a2 & 1) != 0 ) /*0x40d2de*/
    __3_YAXPAX_Z(Block); /*0x40d2e1*/
  return (MouseClass *)Block; /*0x40d2e9*/
}


// ==== 0x0040D300  ObjectClass::nullsub_57  this=ObjectClass  sig=csp ====
void nullsub_57()
{
  ; /*0x40d300*/
}


// ==== 0x0040D310  sub_40D310  this=-  sig=ida-proto ====
int sub_40D310()
{
  sub_5B1D90(&MEMORY[0x884D88]); /*0x40d315*/
  return atexit(unknown_libname_3); /*0x40d325*/
}


// ==== 0x0040D330  unknown_libname_3  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_3()
{
  if ( *(_DWORD *)&MEMORY[0x87F8E4].__pad_125C[16968] || *(_DWORD *)&MEMORY[0x87F8E4].__pad_125C[16972] != 1072693248 ) /*0x5b1e2c*/
    timeEndPeriod(1u); /*0x5b1e30*/
}


// ==== 0x0040D340  sub_40D340  this=-  sig=ida-proto ====
int sub_40D340()
{
  MEMORY[0x884D94] = 0; /*0x40d347*/
  MEMORY[0x884D98] = 0; /*0x40d34c*/
  MEMORY[0x884D9C] = 1; /*0x40d351*/
  MEMORY[0x884D9D] = 0; /*0x40d358*/
  MEMORY[0x884D90] = (int)&vt_DynamicVectorClass_MixFileClass; /*0x40d35d*/
  MEMORY[0x884DA4] = 10; /*0x40d367*/
  MEMORY[0x884DA0] = 0; /*0x40d371*/
  return atexit(sub_40D380); /*0x40d37c*/
}


// ==== 0x0040D380  sub_40D380  this=-  sig=ida-proto ====
void __cdecl sub_40D380()
{
  MEMORY[0x884D90] = (int)&vt_VectorClass_MixFileClass; /*0x40d388*/
  if ( MEMORY[0x884D94] && MEMORY[0x884D9D] ) /*0x40d39c*/
  {
    __3_YAXPAX_Z(MEMORY[0x884D94]); /*0x40d39f*/
    MEMORY[0x884D94] = 0; /*0x40d3a7*/
  }
  MEMORY[0x884D9D] = 0; /*0x40d3ad*/
  MEMORY[0x884D98] = 0; /*0x40d3b3*/
}


// ==== 0x0040D3C0  sub_40D3C0  this=-  sig=ida-proto ====
int sub_40D3C0()
{
  MEMORY[0x884DC4] = 0; /*0x40d3c7*/
  MEMORY[0x884DC8] = 0; /*0x40d3cc*/
  MEMORY[0x884DCC] = 1; /*0x40d3d1*/
  MEMORY[0x884DCD] = 0; /*0x40d3d8*/
  MEMORY[0x884DC0] = (int)&vt_DynamicVectorClass_MixFileClass; /*0x40d3dd*/
  MEMORY[0x884DD4] = 10; /*0x40d3e7*/
  MEMORY[0x884DD0] = 0; /*0x40d3f1*/
  return atexit(sub_40D400); /*0x40d3fc*/
}


// ==== 0x0040D400  sub_40D400  this=-  sig=ida-proto ====
void __cdecl sub_40D400()
{
  MEMORY[0x884DC0] = (int)&vt_VectorClass_MixFileClass; /*0x40d408*/
  if ( MEMORY[0x884DC4] && MEMORY[0x884DCD] ) /*0x40d41c*/
  {
    __3_YAXPAX_Z(MEMORY[0x884DC4]); /*0x40d41f*/
    MEMORY[0x884DC4] = 0; /*0x40d427*/
  }
  MEMORY[0x884DCD] = 0; /*0x40d42d*/
  MEMORY[0x884DC8] = 0; /*0x40d433*/
}


// ==== 0x0040D440  sub_40D440  this=-  sig=ida-proto ====
int sub_40D440()
{
  MEMORY[0x884DAC] = 0; /*0x40d447*/
  MEMORY[0x884DB0] = 0; /*0x40d44c*/
  MEMORY[0x884DB4] = 1; /*0x40d451*/
  MEMORY[0x884DB5] = 0; /*0x40d458*/
  MEMORY[0x884DA8] = (int)&vt_DynamicVectorClass_MixFileClass; /*0x40d45d*/
  MEMORY[0x884DBC] = 10; /*0x40d467*/
  MEMORY[0x884DB8] = 0; /*0x40d471*/
  return atexit(sub_40D480); /*0x40d47c*/
}


// ==== 0x0040D480  sub_40D480  this=-  sig=ida-proto ====
void __cdecl sub_40D480()
{
  MEMORY[0x884DA8] = (int)&vt_VectorClass_MixFileClass; /*0x40d488*/
  if ( MEMORY[0x884DAC] && MEMORY[0x884DB5] ) /*0x40d49c*/
  {
    __3_YAXPAX_Z(MEMORY[0x884DAC]); /*0x40d49f*/
    MEMORY[0x884DAC] = 0; /*0x40d4a7*/
  }
  MEMORY[0x884DB5] = 0; /*0x40d4ad*/
  MEMORY[0x884DB0] = 0; /*0x40d4b3*/
}


// ==== 0x0040D4C0  sub_40D4C0  this=-  sig=ida-proto ====
int sub_40D4C0()
{
  MEMORY[0x884DE4] = 0; /*0x40d4c7*/
  MEMORY[0x884DE8] = 0; /*0x40d4cc*/
  MEMORY[0x884DEC] = 1; /*0x40d4d1*/
  MEMORY[0x884DED] = 0; /*0x40d4d8*/
  MEMORY[0x884DE0] = (int)&vt_DynamicVectorClass_MixFileClass; /*0x40d4dd*/
  MEMORY[0x884DF4] = 10; /*0x40d4e7*/
  MEMORY[0x884DF0] = 0; /*0x40d4f1*/
  return atexit(sub_40D500); /*0x40d4fc*/
}


// ==== 0x0040D500  sub_40D500  this=-  sig=ida-proto ====
void __cdecl sub_40D500()
{
  MEMORY[0x884DE0] = (int)&vt_VectorClass_MixFileClass; /*0x40d508*/
  if ( MEMORY[0x884DE4] && MEMORY[0x884DED] ) /*0x40d51c*/
  {
    __3_YAXPAX_Z(MEMORY[0x884DE4]); /*0x40d51f*/
    MEMORY[0x884DE4] = 0; /*0x40d527*/
  }
  MEMORY[0x884DED] = 0; /*0x40d52d*/
  MEMORY[0x884DE8] = 0; /*0x40d533*/
}


// ==== 0x0040D540  _DynamicVectorClass_PAVMixFileClass::initCursor  this=DynamicVector  sig=csp ====
void __thiscall MouseClass::sub_40D540(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x40d546*/
  *(_DWORD *)(this + 16) = 0; /*0x40d549*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x40d550*/
  {
    __3_YAXPAX_Z(v2); /*0x40d556*/
    *(_DWORD *)(this + 4) = 0; /*0x40d55e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x40d561*/
  *(_DWORD *)(this + 8) = 0; /*0x40d564*/
}


// ==== 0x0040D570  _DynamicVectorClass_PAVMixFileClass::updateCursorState  this=DynamicVector  sig=csp ====
unsigned int __thiscall MouseClass::sub_40D570(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x40d570*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x40d585*/
  else
    return 0; /*0x40d577*/
}


// ==== 0x0040D590  _VectorClass_PAVMixFileClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_MixFileClass::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x40d59a*/
}


// ==== 0x0040D5A0  _VectorClass_PAVMixFileClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_MixFileClass::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x40d5a2*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x40d5ad*/
  {
    v3 = 0; /*0x40d5af*/
    if ( v2 <= 0 ) /*0x40d5b3*/
      return 1; /*0x40d5d3*/
    v4 = (_DWORD *)this->Items; /*0x40d5b5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x40d5bb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x40d5c4*/
    {
      ++v3; /*0x40d5c6*/
      ++v4; /*0x40d5c7*/
      if ( v3 >= v2 ) /*0x40d5cc*/
        return 1; /*0x40d5cc*/
    }
  }
  return 0; /*0x40d5ce*/
}


// ==== 0x0040D5E0  _VectorClass_PAVMixFileClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_MixFileClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x40d5ec*/
  {
    this->IsInitialized = 0; /*0x40d5f6*/
    if ( a3 ) /*0x40d5fc*/
      v4 = a3; /*0x40d612*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x40d60e*/
    this->IsInitialized = 1; /*0x40d616*/
    if ( v4 ) /*0x40d61a*/
    {
      if ( this->Items ) /*0x40d625*/
      {
        v6 = this->Capacity; /*0x40d62c*/
        if ( a2 < v6 ) /*0x40d631*/
          v6 = a2; /*0x40d633*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x40d639*/
          ++i; /*0x40d63e*/
        if ( this->IsAllocated ) /*0x40d64b*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x40d656*/
          this->Items = 0; /*0x40d65e*/
        }
      }
      this->Items = v4; /*0x40d667*/
      this->Capacity = a2; /*0x40d66f*/
      this->IsAllocated = a3 == 0; /*0x40d672*/
      return 1; /*0x40d678*/
    }
    else
    {
      return 0; /*0x40d61f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x40d682*/
    return 1; /*0x40d688*/
  }
}


// ==== 0x0040D690  _VectorClass_PAVMixFileClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_MixFileClass::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x40d69d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x40d6a3*/
    *(_DWORD *)(this + 4) = 0; /*0x40d6ab*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x40d6ae*/
  *(_DWORD *)(this + 8) = 0; /*0x40d6b1*/
}


// ==== 0x0040D6C0  _VectorClass_PAVMixFileClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_MixFileClass::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x40d6c0*/
    return 0; /*0x40d6c8*/
  v3 = *(_DWORD *)(this + 8); /*0x40d6ce*/
  result = 0; /*0x40d6d1*/
  if ( v3 <= 0 ) /*0x40d6d5*/
    return -1; /*0x40d6ec*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x40d6db*/
  {
    if ( ++result >= v3 ) /*0x40d6ea*/
      return -1; /*0x40d6ea*/
  }
  return result; /*0x40d6ca*/
}


// ==== 0x0040D700  _VectorClass_PAVMixFileClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_MixFileClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x40d700*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x40d715*/
  else
    return 0; /*0x40d707*/
}


// ==== 0x0040D720  _DynamicVectorClass_PAVMixFileClass::selectCursor  this=DynamicVector  sig=csp ====
char __thiscall MouseClass::sub_40D720(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x40d72c*/
  {
    this->IsInitialized = 0; /*0x40d732*/
    if ( a3 ) /*0x40d738*/
      v4 = a3; /*0x40d74e*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x40d74a*/
    this->IsInitialized = 1; /*0x40d752*/
    if ( !v4 ) /*0x40d756*/
      return 0; /*0x40d7ca*/
    if ( this->Items ) /*0x40d758*/
    {
      v5 = this->DynamicVector_field_0x8; /*0x40d75f*/
      if ( a2 < v5 ) /*0x40d764*/
        v5 = a2; /*0x40d766*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x40d76c*/
        ++i; /*0x40d771*/
      if ( this->IsAllocated ) /*0x40d77e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x40d789*/
        this->Items = 0; /*0x40d791*/
      }
    }
    this->Items = v4; /*0x40d79a*/
    this->DynamicVector_field_0x8 = a2; /*0x40d7a2*/
    this->IsAllocated = a3 == 0; /*0x40d7a5*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x40d7ae*/
  }
  v7 = this->DynamicVector_field_0x8; /*0x40d7b1*/
  if ( v7 < this->Items ) /*0x40d7b9*/
    this->Items = v7; /*0x40d7bb*/
  return 1; /*0x40d7be*/
}


// ==== 0x0040D7D0  _DynamicVectorClass_PAVMixFileClass::getCursorFrame  this=DynamicVector  sig=csp ====
int __thiscall MouseClass::sub_40D7D0(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x40d7d0*/
  result = 0; /*0x40d7d3*/
  if ( v2 <= 0 ) /*0x40d7d8*/
    return -1; /*0x40d7ef*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x40d7de*/
  {
    if ( ++result >= v2 ) /*0x40d7ed*/
      return -1; /*0x40d7ed*/
  }
  return result; /*0x40d7f2*/
}


// ==== 0x0040D800  _VectorClass_PAVMixFileClass::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_ptr_MixFileClass::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x40d803*/
  *Block = &vt_VectorClass_MixFileClass; /*0x40d806*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x40d810*/
  {
    __3_YAXPAX_Z(v3); /*0x40d818*/
    *(Block + 1) = 0; /*0x40d820*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x40d82b*/
  *(Block + 2) = 0; /*0x40d831*/
  if ( (a2 & 1) != 0 ) /*0x40d838*/
    __3_YAXPAX_Z(Block); /*0x40d83b*/
  return (VectorClass *)Block; /*0x40d845*/
}


// ==== 0x0040D850  _DynamicVectorClass_PAVMixFileClass::applyCursorSettings  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall MouseClass::applyCursorSettings(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x40d853*/
  *Block = &vt_VectorClass_MixFileClass; /*0x40d856*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x40d860*/
  {
    __3_YAXPAX_Z(v3); /*0x40d868*/
    *(Block + 1) = 0; /*0x40d870*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x40d87b*/
  *(Block + 2) = 0; /*0x40d881*/
  if ( (a2 & 1) != 0 ) /*0x40d888*/
    __3_YAXPAX_Z(Block); /*0x40d88b*/
  return (DynamicVector *)Block; /*0x40d895*/
}


// ==== 0x0040D8A0  sub_40D8A0  this=-  sig=ida-proto ====
_BYTE *sub_40D8A0()
{
  _BYTE *result; // eax
  int v1; // ecx

  result = &MEMORY[0x886082]; /*0x40d8a0*/
  v1 = 256; /*0x40d8a5*/
  do /*0x40d8b8*/
  {
    *(result - 2) = 0; /*0x40d8ac*/
    *(result - 1) = 0; /*0x40d8af*/
    *result = 0; /*0x40d8b2*/
    result += 3; /*0x40d8b4*/
    --v1; /*0x40d8b7*/
  }
  while ( v1 ); /*0x40d8b8*/
  return result; /*0x40d8ba*/
}


// ==== 0x0040D8C0  sub_40D8C0  this=-  sig=ida-proto ====
char *sub_40D8C0()
{
  char *result; // eax
  int v1; // ecx

  result = MEMORY[0x885782]; /*0x40d8c0*/
  v1 = 256; /*0x40d8c5*/
  do /*0x40d8d8*/
  {
    *(result - 2) = 0; /*0x40d8cc*/
    *(result - 1) = 0; /*0x40d8cf*/
    *result = 0; /*0x40d8d2*/
    result += 3; /*0x40d8d4*/
    --v1; /*0x40d8d7*/
  }
  while ( v1 ); /*0x40d8d8*/
  return result; /*0x40d8da*/
}


// ==== 0x0040D8E0  sub_40D8E0  this=-  sig=ida-proto ====
char *sub_40D8E0()
{
  char *result; // eax
  int v1; // ecx

  result = MEMORY[0x886382]; /*0x40d8e0*/
  v1 = 256; /*0x40d8e5*/
  do /*0x40d8f8*/
  {
    *(result - 2) = 0; /*0x40d8ec*/
    *(result - 1) = 0; /*0x40d8ef*/
    *result = 0; /*0x40d8f2*/
    result += 3; /*0x40d8f4*/
    --v1; /*0x40d8f7*/
  }
  while ( v1 ); /*0x40d8f8*/
  return result; /*0x40d8fa*/
}


// ==== 0x0040D900  sub_40D900  this=-  sig=ida-proto ====
char *__fastcall sub_40D900(int a1)
{
  _BYTE v2[4]; // [esp+0h] [ebp-4h] BYREF

  v2[3] = HIBYTE(a1); /*0x40d900*/
  v2[0] = 0; /*0x40d908*/
  v2[1] = 0; /*0x40d90c*/
  v2[2] = 0; /*0x40d910*/
  return sub_626020((char *)&MEMORY[0x884E80], (int)v2); /*0x40d91f*/
}


// ==== 0x0040D920  sub_40D920  this=-  sig=ida-proto ====
char *__fastcall sub_40D920(int a1)
{
  _BYTE v2[4]; // [esp+0h] [ebp-4h] BYREF

  v2[3] = HIBYTE(a1); /*0x40d920*/
  v2[0] = -1; /*0x40d928*/
  v2[1] = -1; /*0x40d92c*/
  v2[2] = -1; /*0x40d930*/
  return sub_626020((char *)&MEMORY[0x885D80], (int)v2); /*0x40d93f*/
}


// ==== 0x0040D940  sub_40D940  this=-  sig=ida-proto ====
_BYTE *sub_40D940()
{
  _BYTE *result; // eax
  int v1; // ecx

  result = &MEMORY[0x885A82]; /*0x40d940*/
  v1 = 256; /*0x40d945*/
  do /*0x40d958*/
  {
    *(result - 2) = 0; /*0x40d94c*/
    *(result - 1) = 0; /*0x40d94f*/
    *result = 0; /*0x40d952*/
    result += 3; /*0x40d954*/
    --v1; /*0x40d957*/
  }
  while ( v1 ); /*0x40d958*/
  return result; /*0x40d95a*/
}


// ==== 0x0040D960  sub_40D960  this=-  sig=ida-proto ====
_BYTE *sub_40D960()
{
  _BYTE *result; // eax
  int v1; // ecx

  result = &MEMORY[0x885482]; /*0x40d960*/
  v1 = 256; /*0x40d965*/
  do /*0x40d978*/
  {
    *(result - 2) = 0; /*0x40d96c*/
    *(result - 1) = 0; /*0x40d96f*/
    *result = 0; /*0x40d972*/
    result += 3; /*0x40d974*/
    --v1; /*0x40d977*/
  }
  while ( v1 ); /*0x40d978*/
  return result; /*0x40d97a*/
}


// ==== 0x0040D980  sub_40D980  this=-  sig=ida-proto ====
_BYTE *sub_40D980()
{
  _BYTE *result; // eax
  int v1; // ecx

  result = &MEMORY[0x886682]; /*0x40d980*/
  v1 = 256; /*0x40d985*/
  do /*0x40d998*/
  {
    *(result - 2) = 0; /*0x40d98c*/
    *(result - 1) = 0; /*0x40d98f*/
    *result = 0; /*0x40d992*/
    result += 3; /*0x40d994*/
    --v1; /*0x40d997*/
  }
  while ( v1 ); /*0x40d998*/
  return result; /*0x40d99a*/
}


// ==== 0x0040D9A0  sub_40D9A0  this=-  sig=ida-proto ====
char *sub_40D9A0()
{
  char *result; // eax
  int v1; // ecx

  result = MEMORY[0x885182]; /*0x40d9a0*/
  v1 = 256; /*0x40d9a5*/
  do /*0x40d9b8*/
  {
    *(result - 2) = 0; /*0x40d9ac*/
    *(result - 1) = 0; /*0x40d9af*/
    *result = 0; /*0x40d9b2*/
    result += 3; /*0x40d9b4*/
    --v1; /*0x40d9b7*/
  }
  while ( v1 ); /*0x40d9b8*/
  return result; /*0x40d9ba*/
}


// ==== 0x0040D9C0  sub_40D9C0  this=-  sig=ida-proto ====
int sub_40D9C0()
{
  int result; // eax

  InitArrayWithValue(MEMORY[0x886980], 0, 64); /*0x40d9c9*/
  result = InitArrayWithValue(MEMORY[0x886A80], 0, 64); /*0x40d9d7*/
  MEMORY[0x886B80] = 0; /*0x40d9dc*/
  return result; /*0x40d9e6*/
}


// ==== 0x0040D9F0  unknown_libname_4  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
_DWORD *unknown_libname_4()
{
  return SeedInitRNG(&MEMORY[0x87F8E4].__pad_5568[7484], 0); /*0x40d9fc*/
}


// ==== 0x0040DA00  sub_40DA00  this=-  sig=ida-proto ====
int sub_40DA00()
{
  MEMORY[0x886F80] = 0; /*0x40da02*/
  MEMORY[0x886F84] = 0; /*0x40da07*/
  MEMORY[0x886F88] = 0; /*0x40da0c*/
  MEMORY[0x886F8C] = 0; /*0x40da11*/
  return 0; /*0x40da16*/
}


// ==== 0x0040DA20  sub_40DA20  this=-  sig=ida-proto ====
int sub_40DA20()
{
  MEMORY[0x886FA8] = 640; /*0x40da22*/
  MEMORY[0x886FA0] = 0; /*0x40da2c*/
  MEMORY[0x886FA4] = 0; /*0x40da31*/
  MEMORY[0x886FAC] = 400; /*0x40da36*/
  return 0; /*0x40da40*/
}


// ==== 0x0040DA50  sub_40DA50  this=-  sig=ida-proto ====
int sub_40DA50()
{
  MEMORY[0x886FB8] = 640; /*0x40da52*/
  MEMORY[0x886FB0] = 0; /*0x40da5c*/
  MEMORY[0x886FB4] = 0; /*0x40da61*/
  MEMORY[0x886FBC] = 400; /*0x40da66*/
  return 0; /*0x40da70*/
}


// ==== 0x0040DA80  sub_40DA80  this=-  sig=ida-proto ====
int sub_40DA80()
{
  MEMORY[0x886F90] = 0; /*0x40da82*/
  MEMORY[0x886F94] = 0; /*0x40da87*/
  MEMORY[0x886F98] = 0; /*0x40da8c*/
  MEMORY[0x886F9C] = 0; /*0x40da91*/
  return 0; /*0x40da96*/
}


// ==== 0x0040DAA0  sub_40DAA0  this=-  sig=ida-proto ====
void sub_40DAA0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x40daac*/
  MEMORY[0x886FE0] = Math::Sqrt(v0 + v0); /*0x40dabe*/
}


// ==== 0x0040DAD0  sub_40DAD0  this=-  sig=ida-proto ====
void sub_40DAD0()
{
  MEMORY[0x887030] = MEMORY[0x886FE0] / 60.0; /*0x40dadc*/
}


// ==== 0x0040DAF0  sub_40DAF0  this=-  sig=ida-proto ====
void sub_40DAF0()
{
  MEMORY[0x887018] = 1.0 / MEMORY[0x887030]; /*0x40dafc*/
}


// ==== 0x0040DB10  sub_40DB10  this=-  sig=ida-proto ====
void sub_40DB10()
{
  MEMORY[0x887010] = 0.0174532925199433 * 45.0; /*0x40db1c*/
}


// ==== 0x0040DB30  sub_40DB30  this=-  sig=ida-proto ====
void sub_40DB30()
{
  MEMORY[0x886FE8] = 0.0174532925199433 * 60.0; /*0x40db3c*/
}


// ==== 0x0040DB50  sub_40DB50  this=-  sig=ida-proto ====
void sub_40DB50()
{
  MEMORY[0x886FC0] = 0.0174532925199433 * 90.0; /*0x40db5c*/
}


// ==== 0x0040DB70  sub_40DB70  this=-  sig=ida-proto ====
__int64 sub_40DB70()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x886FC0] - MEMORY[0x886FE8]); /*0x40db82*/
  result = Math::RoundToInt(v0 * MEMORY[0x886FE0] * 0.5); /*0x40db96*/
  MEMORY[0x887038] = result; /*0x40db9b*/
  return result; /*0x40dba0*/
}


// ==== 0x0040DBB0  sub_40DBB0  this=-  sig=ida-proto ====
void sub_40DBB0()
{
  MEMORY[0x886FF0] = Math::ArcTan((double)MEMORY[0x887038] * 0.00390625); /*0x40dbc7*/
}


// ==== 0x0040DBE0  sub_40DBE0  this=-  sig=ida-proto ====
void sub_40DBE0()
{
  MEMORY[0x887008] = Math::ArcTan((double)(2 * MEMORY[0x887038]) / MEMORY[0x886FE0]); /*0x40dc02*/
}


// ==== 0x0040DC10  sub_40DC10  this=-  sig=ida-proto ====
__int64 sub_40DC10()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x887038]) + 0.5); /*0x40dc2b*/
  MEMORY[0x88702C] = result; /*0x40dc30*/
  return result; /*0x40dc36*/
}


// ==== 0x0040DC40  sub_40DC40  this=-  sig=ida-proto ====
int sub_40DC40()
{
  MEMORY[0x886FD8] = 0; /*0x40dc42*/
  MEMORY[0x886FDA] = 0; /*0x40dc48*/
  return 0; /*0x40dc4e*/
}


// ==== 0x0040DC50  sub_40DC50  this=-  sig=ida-proto ====
int sub_40DC50()
{
  MEMORY[0x886FF8] = 0; /*0x40dc52*/
  MEMORY[0x886FFC] = 0; /*0x40dc57*/
  MEMORY[0x887000] = 0; /*0x40dc5c*/
  return 0; /*0x40dc61*/
}


// ==== 0x0040DC70  sub_40DC70  this=-  sig=ida-proto ====
int sub_40DC70()
{
  MEMORY[0x887028] = 0; /*0x40dc75*/
  MEMORY[0x887020] = 128; /*0x40dc7f*/
  MEMORY[0x887024] = 128; /*0x40dc84*/
  return 128; /*0x40dc89*/
}


// ==== 0x0040DC90  sub_40DC90  this=-  sig=ida-proto ====
int sub_40DC90()
{
  MEMORY[0x886FC8] = 0; /*0x40dc92*/
  MEMORY[0x886FCC] = 0; /*0x40dc97*/
  MEMORY[0x886FD0] = 0; /*0x40dc9c*/
  MEMORY[0x886FD4] = 0; /*0x40dca1*/
  return 0; /*0x40dca6*/
}


// ==== 0x0040DCB0  AbstractType::FindName  this=CellStruct  sig=csp ====
char *__thiscall AbstractType_FindName(void *this)
{
  int v1; // edx
  int *v2; // eax

  v1 = 0; /*0x40dcb0*/
  v2 = &dword_816EE4; /*0x40dcb2*/
  while ( (void *)*v2 != this ) /*0x40dcb9*/
  {
    v2 += 2; /*0x40dcbb*/
    ++v1; /*0x40dcbe*/
    if ( (int)v2 >= (int)&off_817134 ) /*0x40dcc4*/
      return (char *)&dword_817130; /*0x40dccb*/
  }
  return (&off_816EE0)[2 * v1]; /*0x40dccb*/
}


// ==== 0x0040DCE0  StringTable::Lookup  this=ObjectClass  sig=csp ====
int __thiscall StringTable::Lookup(void *this)
{
  ObjectClass *v2; // edi
  const void **v3; // esi

  v2 = 0; /*0x40dce5*/
  v3 = (const void **)&off_816EE0; /*0x40dce7*/
  while ( _strcmpi(*v3, this) ) /*0x40dcfa*/
  {
    v3 += 2; /*0x40dcfc*/
    v2 = (ObjectClass *)((char *)v2 + 1); /*0x40dcff*/
    if ( (int)v3 >= (int)&dword_817130 ) /*0x40dd06*/
      return 0; /*0x40dd0d*/
  }
  return dword_816EE4[2 * (_DWORD)v2]; /*0x40dd08*/
}


// ==== 0x0040DD20  AbstractClass::IsTechno  this=IUnknown  sig=csp ====
void *__thiscall AbstractClass_IsTechno(void *this)
{
  void *result; // eax

  if ( !this ) /*0x40dd25*/
    return 0; /*0x40dd45*/
  switch ( (*(int (__thiscall **)(void *))(this->q02C)(this) ) /*0x40dd3a*/
  {
    case 1: /*0x40dd3a*/
    case 2: /*0x40dd3a*/
    case 6: /*0x40dd3a*/
    case 15: /*0x40dd3a*/
      result = this; /*0x40dd41*/
      break; /*0x40dd44*/
    default:
      return 0;
  }
  return result; /*0x40dd43*/
}


// ==== 0x0040DD70  AbstractClass::IsTechnoType  this=ObjectClass  sig=csp ====
void *__thiscall AbstractClass_IsTechnoType(void *this)
{
  void *result; // eax

  if ( !this ) /*0x40dd75*/
    return 0; /*0x40dd95*/
  switch ( (*(int (__thiscall **)(void *))(this->fallRate)(this) ) /*0x40dd8a*/
  {
    case 1: /*0x40dd8a*/
    case 2: /*0x40dd8a*/
    case 6: /*0x40dd8a*/
    case 15: /*0x40dd8a*/
      result = this; /*0x40dd91*/
      break; /*0x40dd94*/
    default:
      return 0;
  }
  return result; /*0x40dd93*/
}


// ==== 0x0040DDC0  sub_40DDC0  this=-  sig=ida-proto ====
void sub_40DDC0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x40ddcc*/
  MEMORY[0x887050] = Math::Sqrt(v0 + v0); /*0x40ddde*/
}


// ==== 0x0040DDF0  sub_40DDF0  this=-  sig=ida-proto ====
void sub_40DDF0()
{
  MEMORY[0x887268] = MEMORY[0x887050] / 60.0; /*0x40ddfc*/
}


// ==== 0x0040DE10  sub_40DE10  this=-  sig=ida-proto ====
void sub_40DE10()
{
  MEMORY[0x8871F0] = 1.0 / MEMORY[0x887268]; /*0x40de1c*/
}


// ==== 0x0040DE30  sub_40DE30  this=-  sig=ida-proto ====
void sub_40DE30()
{
  MEMORY[0x8871E8] = 0.0174532925199433 * 45.0; /*0x40de3c*/
}


// ==== 0x0040DE50  sub_40DE50  this=-  sig=ida-proto ====
void sub_40DE50()
{
  MEMORY[0x8870B0] = 0.0174532925199433 * 60.0; /*0x40de5c*/
}


// ==== 0x0040DE70  sub_40DE70  this=-  sig=ida-proto ====
void sub_40DE70()
{
  MEMORY[0x887040] = 0.0174532925199433 * 90.0; /*0x40de7c*/
}


// ==== 0x0040DE90  sub_40DE90  this=-  sig=ida-proto ====
__int64 sub_40DE90()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x887040] - MEMORY[0x8870B0]); /*0x40dea2*/
  result = Math::RoundToInt(v0 * MEMORY[0x887050] * 0.5); /*0x40deb6*/
  MEMORY[0x887270] = result; /*0x40debb*/
  return result; /*0x40dec0*/
}


// ==== 0x0040DED0  sub_40DED0  this=-  sig=ida-proto ====
void sub_40DED0()
{
  MEMORY[0x8870B8] = Math::ArcTan((double)MEMORY[0x887270] * 0.00390625); /*0x40dee7*/
}


// ==== 0x0040DF00  sub_40DF00  this=-  sig=ida-proto ====
void sub_40DF00()
{
  MEMORY[0x8871D8] = Math::ArcTan((double)(2 * MEMORY[0x887270]) / MEMORY[0x887050]); /*0x40df22*/
}


// ==== 0x0040DF30  sub_40DF30  this=-  sig=ida-proto ====
__int64 sub_40DF30()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x887270]) + 0.5); /*0x40df4b*/
  MEMORY[0x887260] = result; /*0x40df50*/
  return result; /*0x40df56*/
}


// ==== 0x0040DF60  sub_40DF60  this=-  sig=ida-proto ====
int sub_40DF60()
{
  MEMORY[0x88704C] = 0; /*0x40df62*/
  MEMORY[0x88704E] = 0; /*0x40df68*/
  return 0; /*0x40df6e*/
}


// ==== 0x0040DF70  sub_40DF70  this=-  sig=ida-proto ====
int sub_40DF70()
{
  MEMORY[0x887118] = 0; /*0x40df72*/
  MEMORY[0x88711C] = 0; /*0x40df77*/
  MEMORY[0x887120] = 0; /*0x40df7c*/
  return 0; /*0x40df81*/
}


// ==== 0x0040DF90  sub_40DF90  this=-  sig=ida-proto ====
int sub_40DF90()
{
  MEMORY[0x887200] = 0; /*0x40df95*/
  MEMORY[0x8871F8] = 128; /*0x40df9f*/
  MEMORY[0x8871FC] = 128; /*0x40dfa4*/
  return 128; /*0x40dfa9*/
}


// ==== 0x0040DFB0  sub_40DFB0  this=-  sig=ida-proto ====
int sub_40DFB0()
{
  MEMORY[0x887184] = 0; /*0x40dfb8*/
  MEMORY[0x887188] = 0; /*0x40dfbe*/
  MEMORY[0x887194] = 0; /*0x40dfc4*/
  MEMORY[0x887198] = 0; /*0x40dfca*/
  MEMORY[0x887190] = (int)&vt_GenericNode; /*0x40dfd0*/
  GenericNode::Constructor(MEMORY[0x88719C]); /*0x40dfda*/
  MEMORY[0x88718C] = (int)&vt_GenericList; /*0x40dfe9*/
  LinkedList::Prepend(&MEMORY[0x887190], (int)MEMORY[0x88719C]); /*0x40dff3*/
  MEMORY[0x88718C] = (int)&vt_List_INIClass_INISection; /*0x40dffd*/
  MEMORY[0x8871A8] = 0; /*0x40e007*/
  MEMORY[0x8871AC] = 0; /*0x40e00d*/
  MEMORY[0x8871B0] = 0; /*0x40e013*/
  MEMORY[0x8871B4] = 0; /*0x40e019*/
  MEMORY[0x8871B8] = 0; /*0x40e01f*/
  MEMORY[0x8871BC] = 0; /*0x40e025*/
  MEMORY[0x8871C0] = 0; /*0x40e02b*/
  MEMORY[0x887180] = (int)&CCINIClass_Vtable; /*0x40e031*/
  return atexit(unknown_libname_5); /*0x40e043*/
}


// ==== 0x0040E050  unknown_libname_5  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_5()
{
  HashTable::DestroyHashTableINIClass((void **)&MEMORY[0x887180]); /*0x40e055*/
}


// ==== 0x0040E060  sub_40E060  this=-  sig=ida-proto ====
int sub_40E060()
{
  MEMORY[0x88720C] = 0; /*0x40e068*/
  MEMORY[0x887210] = 0; /*0x40e06e*/
  MEMORY[0x88721C] = 0; /*0x40e074*/
  MEMORY[0x887220] = 0; /*0x40e07a*/
  MEMORY[0x887218] = (int)&vt_GenericNode; /*0x40e080*/
  GenericNode::Constructor(MEMORY[0x887224]); /*0x40e08a*/
  MEMORY[0x887214] = (int)&vt_GenericList; /*0x40e099*/
  LinkedList::Prepend(&MEMORY[0x887218], (int)MEMORY[0x887224]); /*0x40e0a3*/
  MEMORY[0x887214] = (int)&vt_List_INIClass_INISection; /*0x40e0ad*/
  MEMORY[0x887230] = 0; /*0x40e0b7*/
  MEMORY[0x887234] = 0; /*0x40e0bd*/
  MEMORY[0x887238] = 0; /*0x40e0c3*/
  MEMORY[0x88723C] = 0; /*0x40e0c9*/
  MEMORY[0x887240] = 0; /*0x40e0cf*/
  MEMORY[0x887244] = 0; /*0x40e0d5*/
  MEMORY[0x887248] = 0; /*0x40e0db*/
  MEMORY[0x887208] = (int)&CCINIClass_Vtable; /*0x40e0e1*/
  return atexit(unknown_libname_6); /*0x40e0f3*/
}


// ==== 0x0040E100  unknown_libname_6  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_6()
{
  HashTable::DestroyHashTableINIClass((void **)&MEMORY[0x887208]); /*0x40e105*/
}


// ==== 0x0040E110  sub_40E110  this=-  sig=ida-proto ====
int sub_40E110()
{
  MEMORY[0x88712C] = 0; /*0x40e118*/
  MEMORY[0x887130] = 0; /*0x40e11e*/
  MEMORY[0x88713C] = 0; /*0x40e124*/
  MEMORY[0x887140] = 0; /*0x40e12a*/
  MEMORY[0x887138] = (int)&vt_GenericNode; /*0x40e130*/
  GenericNode::Constructor(MEMORY[0x887144]); /*0x40e13a*/
  MEMORY[0x887134] = (int)&vt_GenericList; /*0x40e149*/
  LinkedList::Prepend(&MEMORY[0x887138], (int)MEMORY[0x887144]); /*0x40e153*/
  MEMORY[0x887134] = (int)&vt_List_INIClass_INISection; /*0x40e15d*/
  MEMORY[0x887150] = 0; /*0x40e167*/
  MEMORY[0x887154] = 0; /*0x40e16d*/
  MEMORY[0x887158] = 0; /*0x40e173*/
  MEMORY[0x88715C] = 0; /*0x40e179*/
  MEMORY[0x887160] = 0; /*0x40e17f*/
  MEMORY[0x887164] = 0; /*0x40e185*/
  MEMORY[0x887168] = 0; /*0x40e18b*/
  MEMORY[0x887128] = (int)&CCINIClass_Vtable; /*0x40e191*/
  return atexit(unknown_libname_7); /*0x40e1a3*/
}


// ==== 0x0040E1B0  unknown_libname_7  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_7()
{
  HashTable::DestroyHashTableINIClass((void **)&MEMORY[0x887128]); /*0x40e1b5*/
}


// ==== 0x0040E1C0  sub_40E1C0  this=-  sig=ida-proto ====
int sub_40E1C0()
{
  MEMORY[0x88705C] = 0; /*0x40e1c8*/
  MEMORY[0x887060] = 0; /*0x40e1ce*/
  MEMORY[0x88706C] = 0; /*0x40e1d4*/
  MEMORY[0x887070] = 0; /*0x40e1da*/
  MEMORY[0x887068] = (int)&vt_GenericNode; /*0x40e1e0*/
  GenericNode::Constructor(MEMORY[0x887074]); /*0x40e1ea*/
  MEMORY[0x887064] = (int)&vt_GenericList; /*0x40e1f9*/
  LinkedList::Prepend(&MEMORY[0x887068], (int)MEMORY[0x887074]); /*0x40e203*/
  MEMORY[0x887064] = (int)&vt_List_INIClass_INISection; /*0x40e20d*/
  MEMORY[0x887080] = 0; /*0x40e217*/
  MEMORY[0x887084] = 0; /*0x40e21d*/
  MEMORY[0x887088] = 0; /*0x40e223*/
  MEMORY[0x88708C] = 0; /*0x40e229*/
  MEMORY[0x887090] = 0; /*0x40e22f*/
  MEMORY[0x887094] = 0; /*0x40e235*/
  MEMORY[0x887098] = 0; /*0x40e23b*/
  MEMORY[0x887058] = (int)&CCINIClass_Vtable; /*0x40e241*/
  return atexit(unknown_libname_8); /*0x40e253*/
}


// ==== 0x0040E260  unknown_libname_8  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_8()
{
  HashTable::DestroyHashTableINIClass((void **)&MEMORY[0x887058]); /*0x40e265*/
}


// ==== 0x0040E270  sub_40E270  this=-  sig=ida-proto ====
int sub_40E270()
{
  MEMORY[0x8870C4] = 0; /*0x40e278*/
  MEMORY[0x8870C8] = 0; /*0x40e27e*/
  MEMORY[0x8870D4] = 0; /*0x40e284*/
  MEMORY[0x8870D8] = 0; /*0x40e28a*/
  MEMORY[0x8870D0] = (int)&vt_GenericNode; /*0x40e290*/
  GenericNode::Constructor(MEMORY[0x8870DC]); /*0x40e29a*/
  MEMORY[0x8870CC] = (int)&vt_GenericList; /*0x40e2a9*/
  LinkedList::Prepend(&MEMORY[0x8870D0], (int)MEMORY[0x8870DC]); /*0x40e2b3*/
  MEMORY[0x8870CC] = (int)&vt_List_INIClass_INISection; /*0x40e2bd*/
  MEMORY[0x8870E8] = 0; /*0x40e2c7*/
  MEMORY[0x8870EC] = 0; /*0x40e2cd*/
  MEMORY[0x8870F0] = 0; /*0x40e2d3*/
  MEMORY[0x8870F4] = 0; /*0x40e2d9*/
  MEMORY[0x8870F8] = 0; /*0x40e2df*/
  MEMORY[0x8870FC] = 0; /*0x40e2e5*/
  MEMORY[0x887100] = 0; /*0x40e2eb*/
  MEMORY[0x8870C0] = (int)&CCINIClass_Vtable; /*0x40e2f1*/
  return atexit(unknown_libname_9); /*0x40e303*/
}


// ==== 0x0040E310  unknown_libname_9  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_9()
{
  HashTable::DestroyHashTableINIClass((void **)&MEMORY[0x8870C0]); /*0x40e315*/
}


// ==== 0x0040E320  GenericNode::Constructor  this=GenericNode  sig=csp ====
ObjectClass *__thiscall GenericNode::Constructor(_DWORD *this)
{
  this->Previous = 0; /*0x40e324*/
  this->q008 = 0; /*0x40e327*/
  *this = &vt_GenericNode; /*0x40e32a*/
  return (ObjectClass *)this; /*0x40e330*/
}


// ==== 0x0040E340  LinkedList::Prepend  this=GenericNode  sig=csp ====
int __thiscall LinkedList_Prepend(_DWORD *this, int a2)
{
  int result; // eax
  int v3; // esi
  int v4; // edx
  int v5; // edx
  int v6; // edx

  result = a2; /*0x40e340*/
  if ( a2 ) /*0x40e347*/
  {
    v3 = *(_DWORD *)(a2 + 4); /*0x40e349*/
    if ( v3 ) /*0x40e34e*/
    {
      v4 = *(_DWORD *)(a2 + 8); /*0x40e350*/
      if ( v4 ) /*0x40e355*/
      {
        *(_DWORD *)(v4 + 4) = v3; /*0x40e357*/
        *(_DWORD *)(*(_DWORD *)(a2 + 4) + 8) = *(_DWORD *)(a2 + 8); /*0x40e360*/
        *(_DWORD *)(a2 + 8) = 0; /*0x40e363*/
        *(_DWORD *)(a2 + 4) = 0; /*0x40e36a*/
      }
    }
  }
  v5 = this->Previous; /*0x40e371*/
  *(_DWORD *)(a2 + 8) = this; /*0x40e374*/
  *(_DWORD *)(a2 + 4) = v5; /*0x40e377*/
  v6 = this->Previous; /*0x40e37a*/
  if ( v6 ) /*0x40e380*/
    *(_DWORD *)(v6 + 8) = a2; /*0x40e382*/
  this->Previous = a2; /*0x40e385*/
  return result; /*0x40e37f*/
}


// ==== 0x0040E390  GenericNode::method_40E390  this=GenericNode  sig=csp ====
GenericNode *__thiscall sub_40E390(GenericNode **Block, char a2)
{
  GenericNode *v3; // ecx
  GenericNode *v4; // eax

  *Block = (GenericNode *)&vt_GenericNode; /*0x40e397*/
  if ( Block ) /*0x40e39d*/
  {
    v3 = *(Block + 1); /*0x40e39f*/
    if ( v3 ) /*0x40e3a4*/
    {
      v4 = *(Block + 2); /*0x40e3a6*/
      if ( v4 ) /*0x40e3ab*/
      {
        v4->Previous = v3; /*0x40e3ad*/
        *(_DWORD *)(*(Block + 1))[1].__pad_0 = *(Block + 2); /*0x40e3b6*/
        *(Block + 2) = 0; /*0x40e3b9*/
        *(Block + 1) = 0; /*0x40e3bc*/
      }
    }
  }
  if ( (a2 & 1) != 0 ) /*0x40e3c4*/
    __3_YAXPAX_Z(Block); /*0x40e3c7*/
  return (GenericNode *)Block; /*0x40e3d1*/
}


// ==== 0x0040E3E0  GenericList::method_40E3E0  this=GenericList  sig=csp ====
GenericList *__thiscall sub_40E3E0(_DWORD *Block, char a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // edx
  int v6; // edx
  int v7; // ecx
  int v8; // edx
  int v9; // ecx

  *Block = &vt_GenericList; /*0x40e3e6*/
  while ( 1 ) /*0x40e3ec*/
  {
    v3 = *(Block + 2); /*0x40e3ec*/
    if ( !v3 ) /*0x40e3f1*/
      break; /*0x40e3f1*/
    if ( !*(_DWORD *)(v3 + 4) ) /*0x40e3f3*/
      break; /*0x40e3f3*/
    v4 = *(_DWORD *)(v3 + 8); /*0x40e3f8*/
    if ( !v4 ) /*0x40e3fd*/
      break; /*0x40e3fd*/
    v5 = *(_DWORD *)(v3 + 4); /*0x40e403*/
    if ( v5 ) /*0x40e408*/
    {
      *(_DWORD *)(v4 + 4) = v5; /*0x40e40e*/
      *(_DWORD *)(*(_DWORD *)(v3 + 4) + 8) = *(_DWORD *)(v3 + 8); /*0x40e417*/
      *(_DWORD *)(v3 + 8) = 0; /*0x40e41a*/
      *(_DWORD *)(v3 + 4) = 0; /*0x40e41d*/
    }
  }
  *(Block + 4) = &vt_GenericNode; /*0x40e427*/
  if ( Block != (_DWORD *)-16 ) /*0x40e42d*/
  {
    v6 = *(Block + 5); /*0x40e42f*/
    if ( v6 ) /*0x40e434*/
    {
      v7 = *(Block + 6); /*0x40e436*/
      if ( v7 ) /*0x40e43b*/
      {
        *(_DWORD *)(v7 + 4) = v6; /*0x40e43d*/
        *(_DWORD *)(*(Block + 5) + 8) = *(Block + 6); /*0x40e446*/
        *(Block + 6) = 0; /*0x40e449*/
        *(Block + 5) = 0; /*0x40e44c*/
      }
    }
  }
  *(Block + 1) = &vt_GenericNode; /*0x40e454*/
  if ( Block != (_DWORD *)-4 ) /*0x40e45a*/
  {
    v8 = *(Block + 2); /*0x40e45c*/
    if ( v8 ) /*0x40e461*/
    {
      v9 = *(Block + 3); /*0x40e463*/
      if ( v9 ) /*0x40e468*/
      {
        *(_DWORD *)(v9 + 4) = v8; /*0x40e46a*/
        *(_DWORD *)(*(Block + 2) + 8) = *(Block + 3); /*0x40e473*/
        *(Block + 3) = 0; /*0x40e476*/
        *(Block + 2) = 0; /*0x40e479*/
      }
    }
  }
  if ( (a2 & 1) != 0 ) /*0x40e481*/
    __3_YAXPAX_Z(Block); /*0x40e484*/
  return (GenericList *)Block; /*0x40e48e*/
}


// ==== 0x0040E4A0  ObjectClass::method_40E4A0  this=ObjectClass  sig=csp ====
ObjectClass *__thiscall sub_40E4A0(void **Block, char a2)
{
  HashTable::DestroyHashTableINIClass(Block); /*0x40e4a3*/
  if ( (a2 & 1) != 0 ) /*0x40e4ad*/
    __3_YAXPAX_Z(Block); /*0x40e4b0*/
  return (ObjectClass *)Block; /*0x40e4ba*/
}


// ==== 0x0040E4C0  GenericList::method_40E4C0  this=GenericList  sig=csp ====
GenericList *__thiscall sub_40E4C0(_DWORD *Block, char a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // edx
  int v6; // edx
  int v7; // ecx
  int v8; // edx
  int v9; // ecx

  *Block = &vt_GenericList; /*0x40e4c6*/
  while ( 1 ) /*0x40e4cc*/
  {
    v3 = *(Block + 2); /*0x40e4cc*/
    if ( !v3 ) /*0x40e4d1*/
      break; /*0x40e4d1*/
    if ( !*(_DWORD *)(v3 + 4) ) /*0x40e4d3*/
      break; /*0x40e4d3*/
    v4 = *(_DWORD *)(v3 + 8); /*0x40e4d8*/
    if ( !v4 ) /*0x40e4dd*/
      break; /*0x40e4dd*/
    v5 = *(_DWORD *)(v3 + 4); /*0x40e4e3*/
    if ( v5 ) /*0x40e4e8*/
    {
      *(_DWORD *)(v4 + 4) = v5; /*0x40e4ee*/
      *(_DWORD *)(*(_DWORD *)(v3 + 4) + 8) = *(_DWORD *)(v3 + 8); /*0x40e4f7*/
      *(_DWORD *)(v3 + 8) = 0; /*0x40e4fa*/
      *(_DWORD *)(v3 + 4) = 0; /*0x40e4fd*/
    }
  }
  *(Block + 4) = &vt_GenericNode; /*0x40e507*/
  if ( Block != (_DWORD *)-16 ) /*0x40e50d*/
  {
    v6 = *(Block + 5); /*0x40e50f*/
    if ( v6 ) /*0x40e514*/
    {
      v7 = *(Block + 6); /*0x40e516*/
      if ( v7 ) /*0x40e51b*/
      {
        *(_DWORD *)(v7 + 4) = v6; /*0x40e51d*/
        *(_DWORD *)(*(Block + 5) + 8) = *(Block + 6); /*0x40e526*/
        *(Block + 6) = 0; /*0x40e529*/
        *(Block + 5) = 0; /*0x40e52c*/
      }
    }
  }
  *(Block + 1) = &vt_GenericNode; /*0x40e534*/
  if ( Block != (_DWORD *)-4 ) /*0x40e53a*/
  {
    v8 = *(Block + 2); /*0x40e53c*/
    if ( v8 ) /*0x40e541*/
    {
      v9 = *(Block + 3); /*0x40e543*/
      if ( v9 ) /*0x40e548*/
      {
        *(_DWORD *)(v9 + 4) = v8; /*0x40e54a*/
        *(_DWORD *)(*(Block + 2) + 8) = *(Block + 3); /*0x40e553*/
        *(Block + 3) = 0; /*0x40e556*/
        *(Block + 2) = 0; /*0x40e559*/
      }
    }
  }
  if ( (a2 & 1) != 0 ) /*0x40e561*/
    __3_YAXPAX_Z(Block); /*0x40e564*/
  return (GenericList *)Block; /*0x40e56e*/
}


// ==== 0x0040E580  sub_40E580  this=-  sig=ida-proto ====
void sub_40E580()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x40e58c*/
  MEMORY[0x887288] = Math::Sqrt(v0 + v0); /*0x40e59e*/
}


// ==== 0x0040E5B0  sub_40E5B0  this=-  sig=ida-proto ====
void sub_40E5B0()
{
  MEMORY[0x8872F0] = MEMORY[0x887288] / 60.0; /*0x40e5bc*/
}


// ==== 0x0040E5D0  sub_40E5D0  this=-  sig=ida-proto ====
void sub_40E5D0()
{
  MEMORY[0x8872D8] = 1.0 / MEMORY[0x8872F0]; /*0x40e5dc*/
}


// ==== 0x0040E5F0  sub_40E5F0  this=-  sig=ida-proto ====
void sub_40E5F0()
{
  MEMORY[0x8872D0] = 0.0174532925199433 * 45.0; /*0x40e5fc*/
}


// ==== 0x0040E610  sub_40E610  this=-  sig=ida-proto ====
void sub_40E610()
{
  MEMORY[0x887290] = 0.0174532925199433 * 60.0; /*0x40e61c*/
}


// ==== 0x0040E630  sub_40E630  this=-  sig=ida-proto ====
void sub_40E630()
{
  MEMORY[0x887278] = 0.0174532925199433 * 90.0; /*0x40e63c*/
}


// ==== 0x0040E650  sub_40E650  this=-  sig=ida-proto ====
__int64 sub_40E650()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x887278] - MEMORY[0x887290]); /*0x40e662*/
  result = Math::RoundToInt(v0 * MEMORY[0x887288] * 0.5); /*0x40e676*/
  MEMORY[0x8872F8] = result; /*0x40e67b*/
  return result; /*0x40e680*/
}


// ==== 0x0040E690  sub_40E690  this=-  sig=ida-proto ====
void sub_40E690()
{
  MEMORY[0x887298] = Math::ArcTan((double)MEMORY[0x8872F8] * 0.00390625); /*0x40e6a7*/
}


// ==== 0x0040E6C0  sub_40E6C0  this=-  sig=ida-proto ====
void sub_40E6C0()
{
  MEMORY[0x8872C8] = Math::ArcTan((double)(2 * MEMORY[0x8872F8]) / MEMORY[0x887288]); /*0x40e6e2*/
}


// ==== 0x0040E6F0  sub_40E6F0  this=-  sig=ida-proto ====
__int64 sub_40E6F0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x8872F8]) + 0.5); /*0x40e70b*/
  MEMORY[0x8872EC] = result; /*0x40e710*/
  return result; /*0x40e716*/
}


// ==== 0x0040E720  sub_40E720  this=-  sig=ida-proto ====
int sub_40E720()
{
  MEMORY[0x887280] = 0; /*0x40e722*/
  MEMORY[0x887282] = 0; /*0x40e728*/
  return 0; /*0x40e72e*/
}


// ==== 0x0040E730  sub_40E730  this=-  sig=ida-proto ====
int sub_40E730()
{
  MEMORY[0x8872A0] = 0; /*0x40e732*/
  MEMORY[0x8872A4] = 0; /*0x40e737*/
  MEMORY[0x8872A8] = 0; /*0x40e73c*/
  return 0; /*0x40e741*/
}


// ==== 0x0040E750  sub_40E750  this=-  sig=ida-proto ====
int sub_40E750()
{
  MEMORY[0x8872E8] = 0; /*0x40e755*/
  MEMORY[0x8872E0] = 128; /*0x40e75f*/
  MEMORY[0x8872E4] = 128; /*0x40e764*/
  return 128; /*0x40e769*/
}


// ==== 0x0040E770  sub_40E770  this=-  sig=ida-proto ====
int sub_40E770()
{
  MEMORY[0x8872B4] = 0; /*0x40e777*/
  MEMORY[0x8872B8] = 0; /*0x40e77c*/
  MEMORY[0x8872BC] = 1; /*0x40e781*/
  MEMORY[0x8872BD] = 0; /*0x40e788*/
  MEMORY[0x8872B0] = (int)&vt_DynamicVectorClass_ScriptClass; /*0x40e78d*/
  MEMORY[0x8872C4] = 10; /*0x40e797*/
  MEMORY[0x8872C0] = 0; /*0x40e7a1*/
  return atexit(sub_40E7B0); /*0x40e7ac*/
}


// ==== 0x0040E7B0  sub_40E7B0  this=-  sig=ida-proto ====
void __cdecl sub_40E7B0()
{
  MEMORY[0x8872B0] = (int)&vt_VectorClass_ScriptClass; /*0x40e7b8*/
  if ( MEMORY[0x8872B4] && MEMORY[0x8872BD] ) /*0x40e7cc*/
  {
    __3_YAXPAX_Z(MEMORY[0x8872B4]); /*0x40e7cf*/
    MEMORY[0x8872B4] = 0; /*0x40e7d7*/
  }
  MEMORY[0x8872BD] = 0; /*0x40e7dd*/
  MEMORY[0x8872B8] = 0; /*0x40e7e3*/
}


// ==== 0x0040E7F0  _DynamicVectorClass_PAVScriptClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_ScriptClass::sub_40E7F0(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x40e7f6*/
  *(_DWORD *)(this + 16) = 0; /*0x40e7f9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x40e800*/
  {
    __3_YAXPAX_Z(v2); /*0x40e806*/
    *(_DWORD *)(this + 4) = 0; /*0x40e80e*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x40e811*/
  *(_DWORD *)(this + 8) = 0; /*0x40e814*/
}


// ==== 0x0040E820  _DynamicVectorClass_PAVScriptClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_ScriptClass::sub_40E820(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x40e820*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x40e835*/
  else
    return 0; /*0x40e827*/
}


// ==== 0x0040E840  _VectorClass_PAVScriptClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_ScriptClass::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x40e84a*/
}


// ==== 0x0040E850  _VectorClass_PAVScriptClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_ScriptClass::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x40e852*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x40e85d*/
  {
    v3 = 0; /*0x40e85f*/
    if ( v2 <= 0 ) /*0x40e863*/
      return 1; /*0x40e883*/
    v4 = (_DWORD *)this->Items; /*0x40e865*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x40e86b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x40e874*/
    {
      ++v3; /*0x40e876*/
      ++v4; /*0x40e877*/
      if ( v3 >= v2 ) /*0x40e87c*/
        return 1; /*0x40e87c*/
    }
  }
  return 0; /*0x40e87e*/
}


// ==== 0x0040E890  _VectorClass_PAVScriptClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_ScriptClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x40e89c*/
  {
    this->IsInitialized = 0; /*0x40e8a6*/
    if ( a3 ) /*0x40e8ac*/
      v4 = a3; /*0x40e8c2*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x40e8be*/
    this->IsInitialized = 1; /*0x40e8c6*/
    if ( v4 ) /*0x40e8ca*/
    {
      if ( this->Items ) /*0x40e8d5*/
      {
        v6 = this->Capacity; /*0x40e8dc*/
        if ( a2 < v6 ) /*0x40e8e1*/
          v6 = a2; /*0x40e8e3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x40e8e9*/
          ++i; /*0x40e8ee*/
        if ( this->IsAllocated ) /*0x40e8fb*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x40e906*/
          this->Items = 0; /*0x40e90e*/
        }
      }
      this->Items = v4; /*0x40e917*/
      this->Capacity = a2; /*0x40e91f*/
      this->IsAllocated = a3 == 0; /*0x40e922*/
      return 1; /*0x40e928*/
    }
    else
    {
      return 0; /*0x40e8cf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x40e932*/
    return 1; /*0x40e938*/
  }
}


// ==== 0x0040E940  _VectorClass_PAVScriptClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_ScriptClass::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x40e94d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x40e953*/
    *(_DWORD *)(this + 4) = 0; /*0x40e95b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x40e95e*/
  *(_DWORD *)(this + 8) = 0; /*0x40e961*/
}


// ==== 0x0040E970  _VectorClass_PAVScriptClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_ScriptClass::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x40e970*/
    return 0; /*0x40e978*/
  v3 = *(_DWORD *)(this + 8); /*0x40e97e*/
  result = 0; /*0x40e981*/
  if ( v3 <= 0 ) /*0x40e985*/
    return -1; /*0x40e99c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x40e98b*/
  {
    if ( ++result >= v3 ) /*0x40e99a*/
      return -1; /*0x40e99a*/
  }
  return result; /*0x40e97a*/
}


// ==== 0x0040E9B0  _VectorClass_PAVScriptClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_ScriptClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x40e9b0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x40e9c5*/
  else
    return 0; /*0x40e9b7*/
}


// ==== 0x0040E9D0  _DynamicVectorClass_PAVScriptClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_ScriptClass::sub_40E9D0(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x40e9dc*/
  {
    this->IsInitialized = 0; /*0x40e9e2*/
    if ( a3 ) /*0x40e9e8*/
      v4 = a3; /*0x40e9fe*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x40e9fa*/
    this->IsInitialized = 1; /*0x40ea02*/
    if ( !v4 ) /*0x40ea06*/
      return 0; /*0x40ea7a*/
    if ( this->Items ) /*0x40ea08*/
    {
      v5 = this->DynamicVector_field_0x8; /*0x40ea0f*/
      if ( a2 < v5 ) /*0x40ea14*/
        v5 = a2; /*0x40ea16*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x40ea1c*/
        ++i; /*0x40ea21*/
      if ( this->IsAllocated ) /*0x40ea2e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x40ea39*/
        this->Items = 0; /*0x40ea41*/
      }
    }
    this->Items = v4; /*0x40ea4a*/
    this->DynamicVector_field_0x8 = a2; /*0x40ea52*/
    this->IsAllocated = a3 == 0; /*0x40ea55*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x40ea5e*/
  }
  v7 = this->DynamicVector_field_0x8; /*0x40ea61*/
  if ( v7 < this->Items ) /*0x40ea69*/
    this->Items = v7; /*0x40ea6b*/
  return 1; /*0x40ea6e*/
}


// ==== 0x0040EA80  _DynamicVectorClass_PAVScriptClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_ScriptClass::sub_40EA80(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x40ea80*/
  result = 0; /*0x40ea83*/
  if ( v2 <= 0 ) /*0x40ea88*/
    return -1; /*0x40ea9f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x40ea8e*/
  {
    if ( ++result >= v2 ) /*0x40ea9d*/
      return -1; /*0x40ea9d*/
  }
  return result; /*0x40eaa2*/
}


// ==== 0x0040EAB0  _VectorClass_PAVScriptClass::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_ptr_ScriptClass::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x40eab3*/
  *Block = &vt_VectorClass_ScriptClass; /*0x40eab6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x40eac0*/
  {
    __3_YAXPAX_Z(v3); /*0x40eac8*/
    *(Block + 1) = 0; /*0x40ead0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x40eadb*/
  *(Block + 2) = 0; /*0x40eae1*/
  if ( (a2 & 1) != 0 ) /*0x40eae8*/
    __3_YAXPAX_Z(Block); /*0x40eaeb*/
  return (VectorClass *)Block; /*0x40eaf5*/
}


// ==== 0x0040EB00  _DynamicVectorClass_PAVScriptClass::Constructor_VectorClass_ScriptClass___  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall VectorClass_ptr_ScriptClass::Constructor_VectorClass_ScriptClass___(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x40eb03*/
  *Block = &vt_VectorClass_ScriptClass; /*0x40eb06*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x40eb10*/
  {
    __3_YAXPAX_Z(v3); /*0x40eb18*/
    *(Block + 1) = 0; /*0x40eb20*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x40eb2b*/
  *(Block + 2) = 0; /*0x40eb31*/
  if ( (a2 & 1) != 0 ) /*0x40eb38*/
    __3_YAXPAX_Z(Block); /*0x40eb3b*/
  return (DynamicVector *)Block; /*0x40eb45*/
}


// ==== 0x0040EB50  sub_40EB50  this=-  sig=ida-proto ====
int sub_40EB50()
{
  MEMORY[0x887348] = Timer::GetTicks(); /*0x40eb5f*/
  MEMORY[0x887350] = 0; /*0x40eb64*/
  return atexit(nullsub_59); /*0x40eb74*/
}


// ==== 0x0040EB80  nullsub_59  this=-  sig=ida-proto ====
void __cdecl nullsub_59()
{
  ; /*0x40eb80*/
}


// ==== 0x0040EB90  sub_40EB90  this=-  sig=ida-proto ====
int sub_40EB90()
{
  MEMORY[0x887328] = timeGetTime(); /*0x40eb9f*/
  Timer::EnableHighPrecision(&MEMORY[0x88732C]); /*0x40eba4*/
  MEMORY[0x887330] = 0; /*0x40ebae*/
  return atexit(unknown_libname_10); /*0x40ebbe*/
}


// ==== 0x0040EBC0  unknown_libname_10  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_10()
{
  Timer::DisableHighPrecision(); /*0x40ebc5*/
}


// ==== 0x0040EBD0  sub_40EBD0  this=-  sig=ida-proto ====
int sub_40EBD0()
{
  MEMORY[0x887338] = Timer::GetTicks(); /*0x40ebdf*/
  MEMORY[0x887340] = 0; /*0x40ebe4*/
  return atexit(nullsub_60); /*0x40ebf4*/
}


// ==== 0x0040EC00  nullsub_60  this=-  sig=ida-proto ====
void __cdecl nullsub_60()
{
  ; /*0x40ec00*/
}


// ==== 0x0040EC10  sub_40EC10  this=-  sig=ida-proto ====
int sub_40EC10()
{
  MEMORY[0x887358] = 0; /*0x40ec12*/
  MEMORY[0x88735C] = 0; /*0x40ec17*/
  MEMORY[0x887360] = 0; /*0x40ec1c*/
  MEMORY[0x887364] = 0; /*0x40ec21*/
  return 0; /*0x40ec26*/
}


// ==== 0x0040EC30  sub_40EC30  this=-  sig=ida-proto ====
void sub_40EC30()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x40ec3c*/
  MEMORY[0x8873A8] = Math::Sqrt(v0 + v0); /*0x40ec4e*/
}


// ==== 0x0040EC60  sub_40EC60  this=-  sig=ida-proto ====
void sub_40EC60()
{
  MEMORY[0x8873F8] = MEMORY[0x8873A8] / 60.0; /*0x40ec6c*/
}


// ==== 0x0040EC80  sub_40EC80  this=-  sig=ida-proto ====
void sub_40EC80()
{
  MEMORY[0x8873E0] = 1.0 / MEMORY[0x8873F8]; /*0x40ec8c*/
}


// ==== 0x0040ECA0  sub_40ECA0  this=-  sig=ida-proto ====
void sub_40ECA0()
{
  MEMORY[0x8873D8] = 0.0174532925199433 * 45.0; /*0x40ecac*/
}


// ==== 0x0040ECC0  sub_40ECC0  this=-  sig=ida-proto ====
void sub_40ECC0()
{
  MEMORY[0x8873B0] = 0.0174532925199433 * 60.0; /*0x40eccc*/
}


// ==== 0x0040ECE0  sub_40ECE0  this=-  sig=ida-proto ====
void sub_40ECE0()
{
  MEMORY[0x887370] = 0.0174532925199433 * 90.0; /*0x40ecec*/
}


// ==== 0x0040ED00  sub_40ED00  this=-  sig=ida-proto ====
__int64 sub_40ED00()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x887370] - MEMORY[0x8873B0]); /*0x40ed12*/
  result = Math::RoundToInt(v0 * MEMORY[0x8873A8] * 0.5); /*0x40ed26*/
  MEMORY[0x887400] = result; /*0x40ed2b*/
  return result; /*0x40ed30*/
}


// ==== 0x0040ED40  sub_40ED40  this=-  sig=ida-proto ====
void sub_40ED40()
{
  MEMORY[0x8873B8] = Math::ArcTan((double)MEMORY[0x887400] * 0.00390625); /*0x40ed57*/
}


// ==== 0x0040ED70  sub_40ED70  this=-  sig=ida-proto ====
void sub_40ED70()
{
  MEMORY[0x8873D0] = Math::ArcTan((double)(2 * MEMORY[0x887400]) / MEMORY[0x8873A8]); /*0x40ed92*/
}


// ==== 0x0040EDA0  sub_40EDA0  this=-  sig=ida-proto ====
__int64 sub_40EDA0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x887400]) + 0.5); /*0x40edbb*/
  MEMORY[0x8873F4] = result; /*0x40edc0*/
  return result; /*0x40edc6*/
}


// ==== 0x0040EDD0  sub_40EDD0  this=-  sig=ida-proto ====
int sub_40EDD0()
{
  MEMORY[0x8873A0] = 0; /*0x40edd2*/
  MEMORY[0x8873A2] = 0; /*0x40edd8*/
  return 0; /*0x40edde*/
}


// ==== 0x0040EDE0  sub_40EDE0  this=-  sig=ida-proto ====
int sub_40EDE0()
{
  MEMORY[0x8873C0] = 0; /*0x40ede2*/
  MEMORY[0x8873C4] = 0; /*0x40ede7*/
  MEMORY[0x8873C8] = 0; /*0x40edec*/
  return 0; /*0x40edf1*/
}


// ==== 0x0040EE00  sub_40EE00  this=-  sig=ida-proto ====
int sub_40EE00()
{
  MEMORY[0x8873F0] = 0; /*0x40ee05*/
  MEMORY[0x8873E8] = 128; /*0x40ee0f*/
  MEMORY[0x8873EC] = 128; /*0x40ee14*/
  return 128; /*0x40ee19*/
}


// ==== 0x0040EE20  sub_40EE20  this=-  sig=ida-proto ====
int sub_40EE20()
{
  MEMORY[0x887378] = 0; /*0x40ee22*/
  MEMORY[0x88737C] = 0; /*0x40ee27*/
  MEMORY[0x887380] = 0; /*0x40ee2c*/
  MEMORY[0x887384] = 0; /*0x40ee31*/
  return 0; /*0x40ee36*/
}


// ==== 0x0040EE40  sub_40EE40  this=-  sig=ida-proto ====
int sub_40EE40()
{
  MEMORY[0x88738C] = 0; /*0x40ee47*/
  MEMORY[0x887390] = 0; /*0x40ee4c*/
  MEMORY[0x887394] = 1; /*0x40ee51*/
  MEMORY[0x887395] = 0; /*0x40ee58*/
  MEMORY[0x887388] = (int)&vt_DynamicVectorClass_VoxelAnimClass; /*0x40ee5d*/
  MEMORY[0x88739C] = 10; /*0x40ee67*/
  MEMORY[0x887398] = 0; /*0x40ee71*/
  return atexit(sub_40EE80); /*0x40ee7c*/
}


// ==== 0x0040EE80  sub_40EE80  this=-  sig=ida-proto ====
void __cdecl sub_40EE80()
{
  MEMORY[0x887388] = (int)&vt_VectorClass_VoxelAnimClass; /*0x40ee88*/
  if ( MEMORY[0x88738C] && MEMORY[0x887395] ) /*0x40ee9c*/
  {
    __3_YAXPAX_Z(MEMORY[0x88738C]); /*0x40ee9f*/
    MEMORY[0x88738C] = 0; /*0x40eea7*/
  }
  MEMORY[0x887395] = 0; /*0x40eead*/
  MEMORY[0x887390] = 0; /*0x40eeb3*/
}


// ==== 0x0040EEC0  _DynamicVectorClass_PAVVoxelAnimClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_VoxelAnimClass::sub_40EEC0(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x40eec6*/
  *(_DWORD *)(this + 16) = 0; /*0x40eec9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x40eed0*/
  {
    __3_YAXPAX_Z(v2); /*0x40eed6*/
    *(_DWORD *)(this + 4) = 0; /*0x40eede*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x40eee1*/
  *(_DWORD *)(this + 8) = 0; /*0x40eee4*/
}


// ==== 0x0040EEF0  _DynamicVectorClass_PAVVoxelAnimClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_VoxelAnimClass::sub_40EEF0(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x40eef0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x40ef05*/
  else
    return 0; /*0x40eef7*/
}


// ==== 0x0040EF10  _VectorClass_PAVVoxelAnimClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_VoxelAnimClass::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x40ef1a*/
}


// ==== 0x0040EF20  _VectorClass_PAVVoxelAnimClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_VoxelAnimClass::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x40ef22*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x40ef2d*/
  {
    v3 = 0; /*0x40ef2f*/
    if ( v2 <= 0 ) /*0x40ef33*/
      return 1; /*0x40ef53*/
    v4 = (_DWORD *)this->Items; /*0x40ef35*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x40ef3b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x40ef44*/
    {
      ++v3; /*0x40ef46*/
      ++v4; /*0x40ef47*/
      if ( v3 >= v2 ) /*0x40ef4c*/
        return 1; /*0x40ef4c*/
    }
  }
  return 0; /*0x40ef4e*/
}


// ==== 0x0040EF60  _VectorClass_PAVVoxelAnimClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_VoxelAnimClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x40ef6c*/
  {
    this->IsInitialized = 0; /*0x40ef76*/
    if ( a3 ) /*0x40ef7c*/
      v4 = a3; /*0x40ef92*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x40ef8e*/
    this->IsInitialized = 1; /*0x40ef96*/
    if ( v4 ) /*0x40ef9a*/
    {
      if ( this->Items ) /*0x40efa5*/
      {
        v6 = this->Capacity; /*0x40efac*/
        if ( a2 < v6 ) /*0x40efb1*/
          v6 = a2; /*0x40efb3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x40efb9*/
          ++i; /*0x40efbe*/
        if ( this->IsAllocated ) /*0x40efcb*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x40efd6*/
          this->Items = 0; /*0x40efde*/
        }
      }
      this->Items = v4; /*0x40efe7*/
      this->Capacity = a2; /*0x40efef*/
      this->IsAllocated = a3 == 0; /*0x40eff2*/
      return 1; /*0x40eff8*/
    }
    else
    {
      return 0; /*0x40ef9f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x40f002*/
    return 1; /*0x40f008*/
  }
}


// ==== 0x0040F010  _VectorClass_PAVVoxelAnimClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_VoxelAnimClass::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x40f01d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x40f023*/
    *(_DWORD *)(this + 4) = 0; /*0x40f02b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x40f02e*/
  *(_DWORD *)(this + 8) = 0; /*0x40f031*/
}


// ==== 0x0040F040  _VectorClass_PAVVoxelAnimClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_VoxelAnimClass::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x40f040*/
    return 0; /*0x40f048*/
  v3 = *(_DWORD *)(this + 8); /*0x40f04e*/
  result = 0; /*0x40f051*/
  if ( v3 <= 0 ) /*0x40f055*/
    return -1; /*0x40f06c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x40f05b*/
  {
    if ( ++result >= v3 ) /*0x40f06a*/
      return -1; /*0x40f06a*/
  }
  return result; /*0x40f04a*/
}


// ==== 0x0040F080  _VectorClass_PAVVoxelAnimClass::GetCapacity  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_VoxelAnimClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x40f080*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x40f095*/
  else
    return 0; /*0x40f087*/
}


// ==== 0x0040F0A0  _DynamicVectorClass_PAVVoxelAnimClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_VoxelAnimClass::sub_40F0A0(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x40f0ac*/
  {
    this->IsInitialized = 0; /*0x40f0b2*/
    if ( a3 ) /*0x40f0b8*/
      v4 = a3; /*0x40f0ce*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x40f0ca*/
    this->IsInitialized = 1; /*0x40f0d2*/
    if ( !v4 ) /*0x40f0d6*/
      return 0; /*0x40f14a*/
    if ( this->Items ) /*0x40f0d8*/
    {
      v5 = this->DynamicVector_field_0x8; /*0x40f0df*/
      if ( a2 < v5 ) /*0x40f0e4*/
        v5 = a2; /*0x40f0e6*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x40f0ec*/
        ++i; /*0x40f0f1*/
      if ( this->IsAllocated ) /*0x40f0fe*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x40f109*/
        this->Items = 0; /*0x40f111*/
      }
    }
    this->Items = v4; /*0x40f11a*/
    this->DynamicVector_field_0x8 = a2; /*0x40f122*/
    this->IsAllocated = a3 == 0; /*0x40f125*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x40f12e*/
  }
  v7 = this->DynamicVector_field_0x8; /*0x40f131*/
  if ( v7 < this->Items ) /*0x40f139*/
    this->Items = v7; /*0x40f13b*/
  return 1; /*0x40f13e*/
}


// ==== 0x0040F150  _DynamicVectorClass_PAVVoxelAnimClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_VoxelAnimClass::sub_40F150(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x40f150*/
  result = 0; /*0x40f153*/
  if ( v2 <= 0 ) /*0x40f158*/
    return -1; /*0x40f16f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x40f15e*/
  {
    if ( ++result >= v2 ) /*0x40f16d*/
      return -1; /*0x40f16d*/
  }
  return result; /*0x40f172*/
}


// ==== 0x0040F180  _VectorClass_PAVVoxelAnimClass::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_ptr_VoxelAnimClass::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x40f183*/
  *Block = &vt_VectorClass_VoxelAnimClass; /*0x40f186*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x40f190*/
  {
    __3_YAXPAX_Z(v3); /*0x40f198*/
    *(Block + 1) = 0; /*0x40f1a0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x40f1ab*/
  *(Block + 2) = 0; /*0x40f1b1*/
  if ( (a2 & 1) != 0 ) /*0x40f1b8*/
    __3_YAXPAX_Z(Block); /*0x40f1bb*/
  return (VectorClass *)Block; /*0x40f1c5*/
}


// ==== 0x0040F1D0  _DynamicVectorClass_PAVVoxelAnimClass::Constructor_VectorClass_VoxelAnimClass___  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall VectorClass_ptr_VoxelAnimClass::Constructor_VectorClass_VoxelAnimClass___(
        _DWORD *Block,
        char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x40f1d3*/
  *Block = &vt_VectorClass_VoxelAnimClass; /*0x40f1d6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x40f1e0*/
  {
    __3_YAXPAX_Z(v3); /*0x40f1e8*/
    *(Block + 1) = 0; /*0x40f1f0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x40f1fb*/
  *(Block + 2) = 0; /*0x40f201*/
  if ( (a2 & 1) != 0 ) /*0x40f208*/
    __3_YAXPAX_Z(Block); /*0x40f20b*/
  return (DynamicVector *)Block; /*0x40f215*/
}


// ==== 0x0040F220  sub_40F220  this=-  sig=ida-proto ====
int sub_40F220()
{
  MEMORY[0x887408] = 0; /*0x40f222*/
  MEMORY[0x88740C] = 0; /*0x40f227*/
  MEMORY[0x887410] = 0; /*0x40f22c*/
  MEMORY[0x887414] = 0; /*0x40f231*/
  return 0; /*0x40f236*/
}


// ==== 0x0040F240  nullsub_61  this=-  sig=ida-proto ====
void nullsub_61()
{
  ; /*0x40f240*/
}


// ==== 0x0040F250  nullsub_62  this=-  sig=ida-proto ====
void nullsub_62()
{
  ; /*0x40f250*/
}


// ==== 0x0040F260  nullsub_63  this=-  sig=ida-proto ====
void nullsub_63()
{
  ; /*0x40f260*/
}


// ==== 0x0040F270  sub_40F270  this=-  sig=ida-proto ====
int sub_40F270()
{
  sub_6C89B0(&MEMORY[0x887460], 0x3D0900u); /*0x40f27a*/
  return atexit(unknown_libname_11); /*0x40f28a*/
}


// ==== 0x0040F290  unknown_libname_11  this=-  sig=ida-proto ====
// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_11()
{
  if ( *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9752] ) /*0x6c89d0*/
    __3_YAXPAX_Z(*(void **)&MEMORY[0x87F8E4].__pad_5568[9752]); /*0x6c89d8*/
}


// ==== 0x0040F2A0  sub_40F2A0  this=-  sig=ida-proto ====
void sub_40F2A0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x40f2ac*/
  MEMORY[0x887490] = Math::Sqrt(v0 + v0); /*0x40f2be*/
}


// ==== 0x0040F2D0  sub_40F2D0  this=-  sig=ida-proto ====
void sub_40F2D0()
{
  MEMORY[0x8874F8] = MEMORY[0x887490] / 60.0; /*0x40f2dc*/
}


// ==== 0x0040F2F0  sub_40F2F0  this=-  sig=ida-proto ====
void sub_40F2F0()
{
  MEMORY[0x8874E0] = 1.0 / MEMORY[0x8874F8]; /*0x40f2fc*/
}


// ==== 0x0040F310  sub_40F310  this=-  sig=ida-proto ====
void sub_40F310()
{
  MEMORY[0x8874D8] = 0.0174532925199433 * 45.0; /*0x40f31c*/
}


// ==== 0x0040F330  sub_40F330  this=-  sig=ida-proto ====
void sub_40F330()
{
  MEMORY[0x887498] = 0.0174532925199433 * 60.0; /*0x40f33c*/
}


// ==== 0x0040F350  sub_40F350  this=-  sig=ida-proto ====
void sub_40F350()
{
  MEMORY[0x887480] = 0.0174532925199433 * 90.0; /*0x40f35c*/
}


// ==== 0x0040F370  sub_40F370  this=-  sig=ida-proto ====
__int64 sub_40F370()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x887480] - MEMORY[0x887498]); /*0x40f382*/
  result = Math::RoundToInt(v0 * MEMORY[0x887490] * 0.5); /*0x40f396*/
  MEMORY[0x887500] = result; /*0x40f39b*/
  return result; /*0x40f3a0*/
}


// ==== 0x0040F3B0  sub_40F3B0  this=-  sig=ida-proto ====
void sub_40F3B0()
{
  MEMORY[0x8874A0] = Math::ArcTan((double)MEMORY[0x887500] * 0.00390625); /*0x40f3c7*/
}


// ==== 0x0040F3E0  sub_40F3E0  this=-  sig=ida-proto ====
void sub_40F3E0()
{
  MEMORY[0x8874B8] = Math::ArcTan((double)(2 * MEMORY[0x887500]) / MEMORY[0x887490]); /*0x40f402*/
}


// ==== 0x0040F410  sub_40F410  this=-  sig=ida-proto ====
__int64 sub_40F410()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x887500]) + 0.5); /*0x40f42b*/
  MEMORY[0x8874F4] = result; /*0x40f430*/
  return result; /*0x40f436*/
}


// ==== 0x0040F440  sub_40F440  this=-  sig=ida-proto ====
int sub_40F440()
{
  MEMORY[0x887488] = 0; /*0x40f442*/
  MEMORY[0x88748A] = 0; /*0x40f448*/
  return 0; /*0x40f44e*/
}


// ==== 0x0040F450  sub_40F450  this=-  sig=ida-proto ====
int sub_40F450()
{
  MEMORY[0x8874A8] = 0; /*0x40f452*/
  MEMORY[0x8874AC] = 0; /*0x40f457*/
  MEMORY[0x8874B0] = 0; /*0x40f45c*/
  return 0; /*0x40f461*/
}


// ==== 0x0040F470  sub_40F470  this=-  sig=ida-proto ====
int sub_40F470()
{
  MEMORY[0x8874F0] = 0; /*0x40f475*/
  MEMORY[0x8874E8] = 128; /*0x40f47f*/
  MEMORY[0x8874EC] = 128; /*0x40f484*/
  return 128; /*0x40f489*/
}


// ==== 0x0040F490  sub_40F490  this=-  sig=ida-proto ====
int sub_40F490()
{
  MEMORY[0x8874C4] = 0; /*0x40f497*/
  MEMORY[0x8874C8] = 0; /*0x40f49c*/
  MEMORY[0x8874CC] = 1; /*0x40f4a1*/
  MEMORY[0x8874CD] = 0; /*0x40f4a8*/
  MEMORY[0x8874C0] = (WarheadTypeClass *)&vt_DynamicVectorClass_WarheadTypeClass; /*0x40f4ad*/
  MEMORY[0x8874D4] = 10; /*0x40f4b7*/
  MEMORY[0x8874D0] = 0; /*0x40f4c1*/
  return atexit(sub_40F4D0); /*0x40f4cc*/
}


// ==== 0x0040F4D0  sub_40F4D0  this=-  sig=ida-proto ====
void __cdecl sub_40F4D0()
{
  MEMORY[0x8874C0] = (WarheadTypeClass *)&vt_VectorClass_WarheadTypeClass; /*0x40f4d8*/
  if ( MEMORY[0x8874C4] && MEMORY[0x8874CD] ) /*0x40f4ec*/
  {
    __3_YAXPAX_Z(MEMORY[0x8874C4]); /*0x40f4ef*/
    MEMORY[0x8874C4] = 0; /*0x40f4f7*/
  }
  MEMORY[0x8874CD] = 0; /*0x40f4fd*/
  MEMORY[0x8874C8] = 0; /*0x40f503*/
}


// ==== 0x0040F5E0  _DynamicVectorClass_PAVWarheadTypeClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_WarheadTypeClass::sub_40F5E0(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x40f5e6*/
  *(_DWORD *)(this + 16) = 0; /*0x40f5e9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x40f5f0*/
  {
    __3_YAXPAX_Z(v2); /*0x40f5f6*/
    *(_DWORD *)(this + 4) = 0; /*0x40f5fe*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x40f601*/
  *(_DWORD *)(this + 8) = 0; /*0x40f604*/
}


// ==== 0x0040F610  _DynamicVectorClass_PAVWarheadTypeClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_WarheadTypeClass::sub_40F610(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x40f610*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x40f625*/
  else
    return 0; /*0x40f617*/
}


// ==== 0x0040F630  _VectorClass_PAVWarheadTypeClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_WarheadTypeClass::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x40f63a*/
}


// ==== 0x0040F640  _VectorClass_PAVWarheadTypeClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_WarheadTypeClass::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x40f642*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x40f64d*/
  {
    v3 = 0; /*0x40f64f*/
    if ( v2 <= 0 ) /*0x40f653*/
      return 1; /*0x40f673*/
    v4 = (_DWORD *)this->Items; /*0x40f655*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x40f65b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x40f664*/
    {
      ++v3; /*0x40f666*/
      ++v4; /*0x40f667*/
      if ( v3 >= v2 ) /*0x40f66c*/
        return 1; /*0x40f66c*/
    }
  }
  return 0; /*0x40f66e*/
}


// ==== 0x0040F680  _VectorClass_PAVWarheadTypeClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_WarheadTypeClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x40f68c*/
  {
    this->IsInitialized = 0; /*0x40f696*/
    if ( a3 ) /*0x40f69c*/
      v4 = a3; /*0x40f6b2*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x40f6ae*/
    this->IsInitialized = 1; /*0x40f6b6*/
    if ( v4 ) /*0x40f6ba*/
    {
      if ( this->Items ) /*0x40f6c5*/
      {
        v6 = this->Capacity; /*0x40f6cc*/
        if ( a2 < v6 ) /*0x40f6d1*/
          v6 = a2; /*0x40f6d3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x40f6d9*/
          ++i; /*0x40f6de*/
        if ( this->IsAllocated ) /*0x40f6eb*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x40f6f6*/
          this->Items = 0; /*0x40f6fe*/
        }
      }
      this->Items = v4; /*0x40f707*/
      this->Capacity = a2; /*0x40f70f*/
      this->IsAllocated = a3 == 0; /*0x40f712*/
      return 1; /*0x40f718*/
    }
    else
    {
      return 0; /*0x40f6bf*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x40f722*/
    return 1; /*0x40f728*/
  }
}


// ==== 0x0040F730  _VectorClass_PAVWarheadTypeClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_WarheadTypeClass::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x40f73d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x40f743*/
    *(_DWORD *)(this + 4) = 0; /*0x40f74b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x40f74e*/
  *(_DWORD *)(this + 8) = 0; /*0x40f751*/
}


// ==== 0x0040F760  _VectorClass_PAVWarheadTypeClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_WarheadTypeClass::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x40f760*/
    return 0; /*0x40f768*/
  v3 = *(_DWORD *)(this + 8); /*0x40f76e*/
  result = 0; /*0x40f771*/
  if ( v3 <= 0 ) /*0x40f775*/
    return -1; /*0x40f78c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x40f77b*/
  {
    if ( ++result >= v3 ) /*0x40f78a*/
      return -1; /*0x40f78a*/
  }
  return result; /*0x40f76a*/
}


// ==== 0x0040F7A0  _VectorClass_PAVWarheadTypeClass::LoadTypeData  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_WarheadTypeClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x40f7a0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x40f7b5*/
  else
    return 0; /*0x40f7a7*/
}


// ==== 0x0040F7C0  _DynamicVectorClass_PAVWarheadTypeClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_WarheadTypeClass::sub_40F7C0(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x40f7cc*/
  {
    this->IsInitialized = 0; /*0x40f7d2*/
    if ( a3 ) /*0x40f7d8*/
      v4 = a3; /*0x40f7ee*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x40f7ea*/
    this->IsInitialized = 1; /*0x40f7f2*/
    if ( !v4 ) /*0x40f7f6*/
      return 0; /*0x40f86a*/
    if ( this->Items ) /*0x40f7f8*/
    {
      v5 = this->DynamicVector_field_0x8; /*0x40f7ff*/
      if ( a2 < v5 ) /*0x40f804*/
        v5 = a2; /*0x40f806*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x40f80c*/
        ++i; /*0x40f811*/
      if ( this->IsAllocated ) /*0x40f81e*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x40f829*/
        this->Items = 0; /*0x40f831*/
      }
    }
    this->Items = v4; /*0x40f83a*/
    this->DynamicVector_field_0x8 = a2; /*0x40f842*/
    this->IsAllocated = a3 == 0; /*0x40f845*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x40f84e*/
  }
  v7 = this->DynamicVector_field_0x8; /*0x40f851*/
  if ( v7 < this->Items ) /*0x40f859*/
    this->Items = v7; /*0x40f85b*/
  return 1; /*0x40f85e*/
}


// ==== 0x0040F870  _DynamicVectorClass_PAVWarheadTypeClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_WarheadTypeClass::sub_40F870(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x40f870*/
  result = 0; /*0x40f873*/
  if ( v2 <= 0 ) /*0x40f878*/
    return -1; /*0x40f88f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x40f87e*/
  {
    if ( ++result >= v2 ) /*0x40f88d*/
      return -1; /*0x40f88d*/
  }
  return result; /*0x40f892*/
}


// ==== 0x0040F8A0  _VectorClass_PAVWarheadTypeClass::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_ptr_WarheadTypeClass::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x40f8a3*/
  *Block = &vt_VectorClass_WarheadTypeClass; /*0x40f8a6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x40f8b0*/
  {
    __3_YAXPAX_Z(v3); /*0x40f8b8*/
    *(Block + 1) = 0; /*0x40f8c0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x40f8cb*/
  *(Block + 2) = 0; /*0x40f8d1*/
  if ( (a2 & 1) != 0 ) /*0x40f8d8*/
    __3_YAXPAX_Z(Block); /*0x40f8db*/
  return (VectorClass *)Block; /*0x40f8e5*/
}


// ==== 0x0040F8F0  _DynamicVectorClass_PAVWarheadTypeClass::Constructor_VectorClass_WarheadTypeClass___  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall VectorClass_ptr_WarheadTypeClass::Constructor_VectorClass_WarheadTypeClass___(
        _DWORD *Block,
        char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x40f8f3*/
  *Block = &vt_VectorClass_WarheadTypeClass; /*0x40f8f6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x40f900*/
  {
    __3_YAXPAX_Z(v3); /*0x40f908*/
    *(Block + 1) = 0; /*0x40f910*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x40f91b*/
  *(Block + 2) = 0; /*0x40f921*/
  if ( (a2 & 1) != 0 ) /*0x40f928*/
    __3_YAXPAX_Z(Block); /*0x40f92b*/
  return (DynamicVector *)Block; /*0x40f935*/
}


// ==== 0x0040F940  sub_40F940  this=-  sig=ida-proto ====
void sub_40F940()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x40f94c*/
  MEMORY[0x887518] = Math::Sqrt(v0 + v0); /*0x40f95e*/
}


// ==== 0x0040F970  sub_40F970  this=-  sig=ida-proto ====
void sub_40F970()
{
  MEMORY[0x887588] = MEMORY[0x887518] / 60.0; /*0x40f97c*/
}


// ==== 0x0040F990  sub_40F990  this=-  sig=ida-proto ====
void sub_40F990()
{
  MEMORY[0x887550] = 1.0 / MEMORY[0x887588]; /*0x40f99c*/
}


// ==== 0x0040F9B0  sub_40F9B0  this=-  sig=ida-proto ====
void sub_40F9B0()
{
  MEMORY[0x887548] = 0.0174532925199433 * 45.0; /*0x40f9bc*/
}


// ==== 0x0040F9D0  sub_40F9D0  this=-  sig=ida-proto ====
void sub_40F9D0()
{
  MEMORY[0x887520] = 0.0174532925199433 * 60.0; /*0x40f9dc*/
}


// ==== 0x0040F9F0  sub_40F9F0  this=-  sig=ida-proto ====
void sub_40F9F0()
{
  MEMORY[0x887508] = 0.0174532925199433 * 90.0; /*0x40f9fc*/
}


// ==== 0x0040FA10  sub_40FA10  this=-  sig=ida-proto ====
__int64 sub_40FA10()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0x887508] - MEMORY[0x887520]); /*0x40fa22*/
  result = Math::RoundToInt(v0 * MEMORY[0x887518] * 0.5); /*0x40fa36*/
  MEMORY[0x887590] = result; /*0x40fa3b*/
  return result; /*0x40fa40*/
}


// ==== 0x0040FA50  sub_40FA50  this=-  sig=ida-proto ====
void sub_40FA50()
{
  MEMORY[0x887528] = Math::ArcTan((double)MEMORY[0x887590] * 0.00390625); /*0x40fa67*/
}


// ==== 0x0040FA80  sub_40FA80  this=-  sig=ida-proto ====
void sub_40FA80()
{
  MEMORY[0x887540] = Math::ArcTan((double)(2 * MEMORY[0x887590]) / MEMORY[0x887518]); /*0x40faa2*/
}


// ==== 0x0040FAB0  sub_40FAB0  this=-  sig=ida-proto ====
__int64 sub_40FAB0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0x887590]) + 0.5); /*0x40facb*/
  MEMORY[0x887580] = result; /*0x40fad0*/
  return result; /*0x40fad6*/
}


// ==== 0x0040FAE0  sub_40FAE0  this=-  sig=ida-proto ====
int sub_40FAE0()
{
  MEMORY[0x887510] = 0; /*0x40fae2*/
  MEMORY[0x887512] = 0; /*0x40fae8*/
  return 0; /*0x40faee*/
}


// ==== 0x0040FAF0  sub_40FAF0  this=-  sig=ida-proto ====
int sub_40FAF0()
{
  MEMORY[0x887530] = 0; /*0x40faf2*/
  MEMORY[0x887534] = 0; /*0x40faf7*/
  MEMORY[0x887538] = 0; /*0x40fafc*/
  return 0; /*0x40fb01*/
}


// ==== 0x0040FB10  sub_40FB10  this=-  sig=ida-proto ====
int sub_40FB10()
{
  MEMORY[0x887560] = 0; /*0x40fb15*/
  MEMORY[0x887558] = 128; /*0x40fb1f*/
  MEMORY[0x88755C] = 128; /*0x40fb24*/
  return 128; /*0x40fb29*/
}


// ==== 0x0040FB30  sub_40FB30  this=-  sig=ida-proto ====
int sub_40FB30()
{
  MEMORY[0x88756C] = 0; /*0x40fb37*/
  MEMORY[0x887570] = 0; /*0x40fb3c*/
  MEMORY[0x887574] = 1; /*0x40fb41*/
  MEMORY[0x887575] = 0; /*0x40fb48*/
  MEMORY[0x887568] = (WeaponTypeClass *)&vt_DynamicVectorClass_WeaponTypeClass; /*0x40fb4d*/
  MEMORY[0x88757C] = 10; /*0x40fb57*/
  MEMORY[0x887578] = 0; /*0x40fb61*/
  return atexit(sub_40FB70); /*0x40fb6c*/
}


// ==== 0x0040FB70  sub_40FB70  this=-  sig=ida-proto ====
void __cdecl sub_40FB70()
{
  MEMORY[0x887568] = (WeaponTypeClass *)&vt_VectorClass_WeaponTypeClass; /*0x40fb78*/
  if ( MEMORY[0x88756C] && MEMORY[0x887575] ) /*0x40fb8c*/
  {
    __3_YAXPAX_Z(MEMORY[0x88756C]); /*0x40fb8f*/
    MEMORY[0x88756C] = 0; /*0x40fb97*/
  }
  MEMORY[0x887575] = 0; /*0x40fb9d*/
  MEMORY[0x887570] = 0; /*0x40fba3*/
}


// ==== 0x0040FBB0  _DynamicVectorClass_PAVWeaponTypeClass::Destroy  this=DynamicVector  sig=csp ====
void __thiscall VectorClass_ptr_WeaponTypeClass::sub_40FBB0(int this)
{
  void *v2; // eax

  v2 = *(void **)(this + 4); /*0x40fbb6*/
  *(_DWORD *)(this + 16) = 0; /*0x40fbb9*/
  if ( v2 && *(_BYTE *)(this + 13) ) /*0x40fbc0*/
  {
    __3_YAXPAX_Z(v2); /*0x40fbc6*/
    *(_DWORD *)(this + 4) = 0; /*0x40fbce*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x40fbd1*/
  *(_DWORD *)(this + 8) = 0; /*0x40fbd4*/
}


// ==== 0x0040FBE0  _DynamicVectorClass_PAVWeaponTypeClass::GetItemIndex  this=DynamicVector  sig=csp ====
unsigned int __thiscall VectorClass_ptr_WeaponTypeClass::sub_40FBE0(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x40fbe0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x40fbf5*/
  else
    return 0; /*0x40fbe7*/
}


// ==== 0x0040FC00  _VectorClass_PAVWeaponTypeClass::Get  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_WeaponTypeClass::Get(_DWORD *this, int a2)
{
  return *(_DWORD *)(this->Items + 4 * a2); /*0x40fc0a*/
}


// ==== 0x0040FC10  _VectorClass_PAVWeaponTypeClass::Add  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_WeaponTypeClass::Add(int *this, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x40fc12*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x40fc1d*/
  {
    v3 = 0; /*0x40fc1f*/
    if ( v2 <= 0 ) /*0x40fc23*/
      return 1; /*0x40fc43*/
    v4 = (_DWORD *)this->Items; /*0x40fc25*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x40fc2b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x40fc34*/
    {
      ++v3; /*0x40fc36*/
      ++v4; /*0x40fc37*/
      if ( v3 >= v2 ) /*0x40fc3c*/
        return 1; /*0x40fc3c*/
    }
  }
  return 0; /*0x40fc3e*/
}


// ==== 0x0040FC50  _VectorClass_PAVWeaponTypeClass::Release  this=VectorClass  sig=csp ====
char __thiscall VectorClass_ptr_WeaponTypeClass::_vt02(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x40fc5c*/
  {
    this->IsInitialized = 0; /*0x40fc66*/
    if ( a3 ) /*0x40fc6c*/
      v4 = a3; /*0x40fc82*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x40fc7e*/
    this->IsInitialized = 1; /*0x40fc86*/
    if ( v4 ) /*0x40fc8a*/
    {
      if ( this->Items ) /*0x40fc95*/
      {
        v6 = this->Capacity; /*0x40fc9c*/
        if ( a2 < v6 ) /*0x40fca1*/
          v6 = a2; /*0x40fca3*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x40fca9*/
          ++i; /*0x40fcae*/
        if ( this->IsAllocated ) /*0x40fcbb*/
        {
          __3_YAXPAX_Z(*((void **)this + 1)); /*0x40fcc6*/
          this->Items = 0; /*0x40fcce*/
        }
      }
      this->Items = v4; /*0x40fcd7*/
      this->Capacity = a2; /*0x40fcdf*/
      this->IsAllocated = a3 == 0; /*0x40fce2*/
      return 1; /*0x40fce8*/
    }
    else
    {
      return 0; /*0x40fc8f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x40fcf2*/
    return 1; /*0x40fcf8*/
  }
}


// ==== 0x0040FD00  _VectorClass_PAVWeaponTypeClass::Remove  this=VectorClass  sig=csp ====
void __thiscall VectorClass_ptr_WeaponTypeClass::Remove(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) ) /*0x40fd0d*/
  {
    __3_YAXPAX_Z(*(void **)(this + 4)); /*0x40fd13*/
    *(_DWORD *)(this + 4) = 0; /*0x40fd1b*/
  }
  *(_BYTE *)(this + 13) = 0; /*0x40fd1e*/
  *(_DWORD *)(this + 8) = 0; /*0x40fd21*/
}


// ==== 0x0040FD30  _VectorClass_PAVWeaponTypeClass::GetSize  this=VectorClass  sig=csp ====
int __thiscall VectorClass_ptr_WeaponTypeClass::_vt04(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) ) /*0x40fd30*/
    return 0; /*0x40fd38*/
  v3 = *(_DWORD *)(this + 8); /*0x40fd3e*/
  result = 0; /*0x40fd41*/
  if ( v3 <= 0 ) /*0x40fd45*/
    return -1; /*0x40fd5c*/
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i ) /*0x40fd4b*/
  {
    if ( ++result >= v3 ) /*0x40fd5a*/
      return -1; /*0x40fd5a*/
  }
  return result; /*0x40fd3a*/
}


// ==== 0x0040FD70  _VectorClass_PAVWeaponTypeClass::LoadTypeData  this=VectorClass  sig=csp ====
unsigned int __thiscall VectorClass_ptr_WeaponTypeClass::_vt05(int this, int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x40fd70*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x40fd85*/
  else
    return 0; /*0x40fd77*/
}


// ==== 0x0040FD90  _DynamicVectorClass_PAVWeaponTypeClass::SetCapacity  this=DynamicVector  sig=csp ====
char __thiscall VectorClass_ptr_WeaponTypeClass::sub_40FD90(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x40fd9c*/
  {
    this->IsInitialized = 0; /*0x40fda2*/
    if ( a3 ) /*0x40fda8*/
      v4 = a3; /*0x40fdbe*/
    else
      v4 = __2_YAPAXI_Z(4 * a2); /*0x40fdba*/
    this->IsInitialized = 1; /*0x40fdc2*/
    if ( !v4 ) /*0x40fdc6*/
      return 0; /*0x40fe3a*/
    if ( this->Items ) /*0x40fdc8*/
    {
      v5 = this->DynamicVector_field_0x8; /*0x40fdcf*/
      if ( a2 < v5 ) /*0x40fdd4*/
        v5 = a2; /*0x40fdd6*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x40fddc*/
        ++i; /*0x40fde1*/
      if ( this->IsAllocated ) /*0x40fdee*/
      {
        __3_YAXPAX_Z(*((void **)this + 1)); /*0x40fdf9*/
        this->Items = 0; /*0x40fe01*/
      }
    }
    this->Items = v4; /*0x40fe0a*/
    this->DynamicVector_field_0x8 = a2; /*0x40fe12*/
    this->IsAllocated = a3 == 0; /*0x40fe15*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(this->IsInitialized)(this); /*0x40fe1e*/
  }
  v7 = this->DynamicVector_field_0x8; /*0x40fe21*/
  if ( v7 < this->Items ) /*0x40fe29*/
    this->Items = v7; /*0x40fe2b*/
  return 1; /*0x40fe2e*/
}


// ==== 0x0040FE40  _DynamicVectorClass_PAVWeaponTypeClass::FindItemIndex  this=DynamicVector  sig=csp ====
int __thiscall VectorClass_ptr_WeaponTypeClass::sub_40FE40(int *this, _DWORD *a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->Items; /*0x40fe40*/
  result = 0; /*0x40fe43*/
  if ( v2 <= 0 ) /*0x40fe48*/
    return -1; /*0x40fe5f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x40fe4e*/
  {
    if ( ++result >= v2 ) /*0x40fe5d*/
      return -1; /*0x40fe5d*/
  }
  return result; /*0x40fe62*/
}


// ==== 0x0040FE70  _VectorClass_PAVWeaponTypeClass::QueryInterface  this=VectorClass  sig=csp ====
VectorClass *__thiscall VectorClass_ptr_WeaponTypeClass::QueryInterface(_DWORD *Block, char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x40fe73*/
  *Block = &vt_VectorClass_WeaponTypeClass; /*0x40fe76*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x40fe80*/
  {
    __3_YAXPAX_Z(v3); /*0x40fe88*/
    *(Block + 1) = 0; /*0x40fe90*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x40fe9b*/
  *(Block + 2) = 0; /*0x40fea1*/
  if ( (a2 & 1) != 0 ) /*0x40fea8*/
    __3_YAXPAX_Z(Block); /*0x40feab*/
  return (VectorClass *)Block; /*0x40feb5*/
}


// ==== 0x0040FEC0  _DynamicVectorClass_PAVWeaponTypeClass::Constructor_VectorClass_WeaponTypeClass___  this=DynamicVector  sig=csp ====
DynamicVector *__thiscall VectorClass_ptr_WeaponTypeClass::Constructor_VectorClass_WeaponTypeClass___(
        _DWORD *Block,
        char a2)
{
  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x40fec3*/
  *Block = &vt_VectorClass_WeaponTypeClass; /*0x40fec6*/
  if ( v3 && *((_BYTE *)Block + 13) ) /*0x40fed0*/
  {
    __3_YAXPAX_Z(v3); /*0x40fed8*/
    *(Block + 1) = 0; /*0x40fee0*/
  }
  *((_BYTE *)Block + 13) = 0; /*0x40feeb*/
  *(Block + 2) = 0; /*0x40fef1*/
  if ( (a2 & 1) != 0 ) /*0x40fef8*/
    __3_YAXPAX_Z(Block); /*0x40fefb*/
  return (DynamicVector *)Block; /*0x40ff05*/
}


// ==== 0x0040FF10  sub_40FF10  this=-  sig=ida-proto ====
int sub_40FF10()
{
  sub_776EB0(&MEMORY[0x887598]); /*0x40ff15*/
  return atexit(nullsub_64); /*0x40ff25*/
}


// ==== 0x0040FF30  nullsub_64  this=-  sig=ida-proto ====
void __cdecl nullsub_64()
{
  ; /*0x40ff30*/
}


// ==== 0x0040FF40  sub_40FF40  this=-  sig=ida-proto ====
int sub_40FF40()
{
  MEMORY[0x887630] = 0; /*0x40ff42*/
  MEMORY[0x887634] = 0; /*0x40ff47*/
  MEMORY[0x887638] = 0; /*0x40ff4c*/
  MEMORY[0x88763C] = 0; /*0x40ff51*/
  return 0; /*0x40ff56*/
}


// ==== 0x0040FF60  sub_40FF60  this=-  sig=ida-proto ====
void sub_40FF60()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x40ff6c*/
  MEMORY[0x887668] = Math::Sqrt(v0 + v0); /*0x40ff7e*/
}


// ==== 0x0040FF90  sub_40FF90  this=-  sig=ida-proto ====
void sub_40FF90()
{
  MEMORY[0x8876B8] = MEMORY[0x887668] / 60.0; /*0x40ff9c*/
}


// ==== 0x0040FFB0  sub_40FFB0  this=-  sig=ida-proto ====
void sub_40FFB0()
{
  MEMORY[0x8876A0] = 1.0 / MEMORY[0x8876B8]; /*0x40ffbc*/
}


// ==== 0x0040FFD0  sub_40FFD0  this=-  sig=ida-proto ====
void sub_40FFD0()
{
  MEMORY[0x887698] = 0.0174532925199433 * 45.0; /*0x40ffdc*/
}


// ==== 0x0040FFFF  Math::InitDegToRad  this=Math  sig=ida-proto ====
int __usercall Math_InitDegToRad@<eax>(char a1@<cf>, char a2@<zf>)
{
  int result; // eax

  if ( a1 | a2 ) /*0x40ffff*/
    return sub_40FF90(); /*0x40ff8f*/
  MEMORY[0x887648] = 0.0174532925199433 * 90.0; /*0x41001c*/
  return result; /*0x410022*/
}

