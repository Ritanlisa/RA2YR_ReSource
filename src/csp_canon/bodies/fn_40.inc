// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x00401000  AudioMixer::Init  cls=AudioMixer  sig=csp  renamed_refs=0  residual=- ====
int AudioMixer::Init()
{
{
    SetupSampleAudioMixer(this, (ObjectClass *)0x4000);
    SetupSampleAudioMixer(this + 10, (ObjectClass *)0x64);
    SetupSampleAudioMixer(this + 20, (ObjectClass *)0x2000);
    SetRateMixerSample(this + 10, 10, 0x3E8u, 0);
    SetRateMixerSample(this, 0x4000, 0x3E8u, 0);
    SetRateMixerSample(this + 20, 0x4000, 0x3E8u, 0);
    return EndBufferMixer(this, 0x4000);
}
}

// ==== BACKFILL 0x00401080  Audio::InitChannels  cls=Audio  sig=csp  renamed_refs=0  residual=- ====
int Audio::InitChannels()
{
{
    ((void (*)(void))AudioMixer::PlaySample)();
    AudioMixer::PlaySample(this + 40);
    return AudioMixer::PlaySample(this + 80);
}
}

// ==== BACKFILL 0x004010C0  EndFrameAudioMixer  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int AudioMixer_EndFrame(int * a1, unsigned int * a2)
{
{
    int v4;
    EndBufferMixer(a1, (unsigned int)((a2[1] >> 16) * (((unsigned int)a1[1]) >> 16)) >> 14);
    AudioMixer::PlaySample(a1);
    EndBufferMixer(a1 + 10, (int)((a2[11] >> 16) * (((unsigned int)a1[11]) >> 16)) / 100);
    AudioMixer::PlaySample(a1 + 10);
    if ( (a2[21] >> 16) != 0x2000 )
    {
        v4 = (int)(((unsigned int)a1[21]) >> 16) + (int)(a2[21] >> 16) - 0x2000;
        if ( v4 < 0 )
        {
            EndBufferMixer(a1 + 20, 0);
            return AudioMixer::PlaySample(a1 + 20);
        }
        if ( (unsigned int)v4 > 0x4000 )
            v4 = 0x4000;
        EndBufferMixer(a1 + 20, v4);
    }
    return AudioMixer::PlaySample(a1 + 20);
}
}

// ==== BACKFILL 0x00401170  ObjectClass::ClearFlags2  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int ObjectClass::ClearFlags2() {
{
    *(void**)this &= ~2u;
    this->customSound_controller &= ~2u;
    this->owningHouseIndex &= ~2u;
    return -3;
}
} } }

// ==== BACKFILL 0x004015C0  sub_4015C0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned int sub_4015C0(int a1, const void * a2)
{
{
    void *v3;
    v3 = bsearch(a2, *(const void **)(a1), *(const void **)(a1 + 4), 0x24u, (int (*)(const void *, const void *))_strcmpi);
    if ( v3 )
        return ((unsigned int)v3 - *(unsigned int *)(a1)) / 0x24;
    else
        return -1;
}
}

// ==== BACKFILL 0x004018C0  sub_4018C0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_4018C0(int a1, int a2, int a3)
{
{
    int v4;
    int result;
    int v6;
    v4 = *(int *)(a1 + 280);
    if ( !v4 )
        return 0;
    v6 = a3;
    if ( a3 > *(int *)(a1 + 284) )
        v6 = *(int *)(a1 + 284);
    if ( v6 <= 0 || (result = ((int (__thiscall **)(int, int, int)) *(int **)v4)[9](v4, a2, v6), result < 0) )
        result = 0;
    *(int *)(a1 + 284) -= result;
    return result;
}
}

// ==== BACKFILL 0x00401940  ObjectClass::GetMember06  cls=RawFileClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::GetMember06()
{
{
    return this->nextArrayIndex;
}
}

// ==== BACKFILL 0x00401980  CCFileClass::Destru_vt08  cls=CCFileClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int CCFileClass::Destru_vt08(int a1, int a2) {
    this->SetFileName((const char*)a1);
    return (int)this->Open((FileAccessMode)a2);

/* ASM:
push    esi
mov     esi, ecx
mov     ecx, [esp+4+arg_0]
mov     eax, [esi]
push    ecx
mov     ecx, esi
call    dword ptr [eax+8]
mov     eax, [esp+4+arg_4]
mov     edx, [esi]
push    eax
mov     ecx, esi
call    dword ptr [edx+1Ch]
pop     esi
retn    8
*/
} }

// ==== BACKFILL 0x004019A0  CCFileClass::Destru_vt00  cls=CCFileClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void* CCFileClass::Destru_vt00(int a2) {
{
    *(void**)this = &vt_CCFileClass;
    *(this + 25) = 0;
    Vector::Clear((int)(this + 22));
    *(void**)this = &DataGlobal_7E1668;
    BufferIOFileClass::Dtor(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (CCFileClass *)this;
}
} }

// ==== BACKFILL 0x00401B00  sub_401B00  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void sub_401B00(int * Block)
{
{
    int *v1;
    int *v2;
    ObjectClass *Next;
    ObjectClass *i;
    void *v5;
    void *v6;
    v1 = Block;
    v2 = Block + 3;
    Next = (ObjectClass *)Queue::GetNext(Block + 3);
    if ( Next )
    {
        do
        {
            if ( *(ObjectClass **)&Next->__pad_0[4] != Next )
                LinkedList::Init(Next);
            for ( i = (ObjectClass *)Queue::GetNext(&Next->objectTypeFlags);
                  i;
                  i = (ObjectClass *)Queue::GetNext(&Next->objectTypeFlags) )
            {
                LinkedList::Init(i);
                AudioNode::Release(i);
                PushFrontLinkedListAlt(*(_DWORD **)(Next->ambientSoundController[0] + 4), (int)i);
            }
            nullsub_2();
            PushFrontLinkedListAlt(*(_DWORD **)(Next->ambientSoundController[0] + 8), (int)Next);
            Next = (ObjectClass *)Queue::GetNext(v2);
        }
        while ( Next );
        v1 = Block;
    }
    v5 = (void *)v1[1];
    if ( v5 )
        VtableStub::Push_407510(v5);
    v6 = (void *)v1[2];
    if ( v6 )
        VtableStub::Push_407510(v6);
    __3_YAXPAX_Z(v1);
}
}

// ==== BACKFILL 0x00401F80  ?EnterCriticalRegionHelper_ContextBase_details_Concurrency__UAEHXZ  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_401F80::_EnterCriticalRegionHelper_ContextBase_details_Concurrency__UAEHXZ()
{
{
    int result;
    result = this->M12 + 1;
    this->M12 = result;
    return result;
}
}

// ==== BACKFILL 0x00401FC0  sub_401FC0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_401FC0(int * Block)
{
{
    int **i;
    if ( ((int **)Block)[28] != (int **)Block )
        LinkedList::Init((int **)Block);
    for ( i = (int **)Queue::GetNext((int *)Block + 9); i; i = (int **)Queue::GetNext((int *)Block + 9) )
    {
        LinkedList::Init(i);
        AudioNode::Release(i);
        PushFrontLinkedListAlt(*(int **)(((int *)Block)[36] + 4), (int)i);
    }
    nullsub_2((int *)Block + 7);
    return PushFrontLinkedListAlt(*(int **)(((int *)Block)[36] + 8), (int)Block);
}
}

// ==== BACKFILL 0x00402040  AudioController::Constructor  cls=AudioController  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { void* AudioController::Constructor() {
{
      int *v2;

      v2 = (int *)__2_YAPAXI_Z(0x1C0u);
      memset(v2, 0, 0x1C0u);
      DListNode::InitEmpty(v2);
      v2[42] = 0;
      v2[41] = 0;
      AudioMixer::Init(v2 + 54);
      v2[87] = (int)AudioController::AdvanceQueue;
      v2[88] = (int)AudioController::UpdatePlayback;
      v2[89] = (int)AudioController::CleanupStream;
      v2[44] = 0;
      v2[45] = 0;
      v2[46] = 0;
      v2[47] = 0;
      v2[48] = 0;
      v2[3] = 1;
      v2[42] = 0;
      v2[41] = 0;
      v2[40] = 0;
      v2[37] = DataGlobal_87DE30;
      v2[36] = 0;
      v2[38] = 0;
      v2[39] = 0;
      AudioMixer::Init(v2 + 4);
      v2[90] = 0;
      v2[43] = (int)this;
      v2[53] = this->q1D0;
      qmemcpy(v2 + 95, this + 17, 0x20u);
      v2[103] = 0;
      v2[104] = 0;
      if ( !(*(int (__thiscall **)(int *))(this->q1D0 + 4))(v2) )
        return v2;
      if ( v2 )
      {
        (*(void (__thiscall **)(int *))(v2[53] + 8))(v2);
        __3_YAXPAX_Z(v2);
      }
      return 0;
}
} } }

// ==== BACKFILL 0x00402220  ObjectClass::Cleanup  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int ObjectClass::Cleanup() {
{
    int v2;
    int *v3;
    int *v4;
    int *v5;
    int *v6;
    int *v7;
    int result;
    int *v9;
    v2 = this->Type;
    v3 = this + 54;
    AudioMixer::Init(this + 54);
    EndFrameAudioMixer(v3, this + 4);
    ObjectClass::ClearFlags2(this + 4);
    v4 = (int *)this->isAliveFlag;
    if ( v4 )
  {
    EndFrameAudioMixer(v3, v4);
    ObjectClass::ClearFlags2((int *)this->isAliveFlag);
  }
    v5 = (int *)this->lastLayer;
    if ( v5 )
    EndFrameAudioMixer(v3, v5);
    v6 = (int *)this->isInLogic;
    if ( v6 )
    EndFrameAudioMixer(v3, v6);
    v7 = (int *)this->location;
    if ( v7 )
    EndFrameAudioMixer(v3, v7);
    result = EndFrameAudioMixer(v3, (int *)(v2 + 104));
    v9 = *(int **)(v2 + 232);
    if ( v9 )
    return EndFrameAudioMixer(v3, v9);
    return result;
}
} } }

// ==== BACKFILL 0x004022C0  AudioController::AdvanceQueue  cls=AudioController  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int AudioController::AdvanceQueue() {
{
      int (*v2)(void); // eax
      int result;
      int *v4;
      int Next;
      int v6;

      v2 = (int (*)(void))this->q0B0;
      if ( v2 )
      {
        result = v2();
        if ( result )
        {
          this->q174 = 0;
          this->q178 = 0;
          this->q170 = 0;
          return result;
        }
      }
      else
      {
        v4 = (int *)this->q16C;
        if ( v4 )
        {
          Next = Queue::GetNext(v4);
          this->q16C = Next;
          if ( Next )
          {
            this->q170 = *(_DWORD *)(Next + 12);
            v6 = *(_DWORD *)(Next + 16);
            this->q174 = v6;
            this->q178 = v6;
            return 0;
          }
        }
        this->q174 = 0;
      }
      return 0;
}
} } }

// ==== BACKFILL 0x00402330  AudioController::UpdatePlayback  cls=AudioController  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int AudioController::UpdatePlayback() {
{
      _DWORD *v2;
      int v3;
      int v4;
      _DWORD *v5;
      int v6;
      void (__thiscall *v7)(int); // eax

      if ( this->q0A8 )
      {
        if ( this->q0A8 != -1 )
          --this->q0A8;
        v2 = *(_DWORD **)(this + 360);
        if ( v2 )
        {
          v3 = AudioController::GetOffset(*(int **)(this + 360));
          this->q16C = v3;
          if ( v3 )
          {
            this->q170 = *(_DWORD *)(v3 + 12);
            v4 = *(_DWORD *)(v3 + 16);
            this->q174 = v4;
            this->q178 = v4;
            *v2 = 0;
          }
          else
          {
            v5 = *(_DWORD **)(this + 360);
            this->q170 = *v5;
            v6 = v5[1];
            this->q174 = v6;
            this->q178 = v6;
          }
        }
      }
      else
      {
        this->q168 = 0;
      }
      v7 = *(void (__thiscall **)(int))(this + 180);
      if ( v7 )
        v7(this);
      if ( this->q168 )
        (*(void (__thiscall **)(int))(this->q0D4 + 36))(this);
      return 0;
}
} } }

// ==== BACKFILL 0x004023F0  AudioController::CleanupStream  cls=AudioController  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int AudioController::CleanupStream() {
{
      int v2;
      int (__thiscall *v3)(int *); // eax

      this->q168 = 0;
      v2 = this->q0A4;
      LOBYTE(v2) = v2 & 0xFA;
      this->q0A4 = v2;
      this->q0A8 = 0;
      AudioMixer::Init(this + 4);
      v3 = (int (__thiscall *)(int *))this->q0B8;
      if ( v3 )
        return v3(this);
      else
        return 0;
}
} } }

// ==== BACKFILL 0x00402440  sub_402440  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void * sub_402440(int a1, int a2)
{
{
    int v3;
    void *result;
    v3 = *(int *)(a1 + 212);
    *(int *)(a1 + 12) = a2;
    (*(void (**)(void))(v3 + 40))();
    if ( (*(char *)(a1 + 164) & 5) != 0 )
        (*(void (**)(int))(*(int *)(a1 + 212) + 16))(a1);
    (*(void (**)(int))(*(int *)(a1 + 212) + 44))(a1);
    result = *(void **)(a1 + 188);
    if ( result )
        result = (void *)((int (*)(int))result)(a1);
    *(int *)(a1 + 360) = 0;
    *(int *)(a1 + 164) |= 8u;
    return result;
}
}

// ==== BACKFILL 0x00402550  AudioStream::Destructor  cls=AudioStream  sig=csp  renamed_refs=0  residual=- ====
void AudioStream::Destructor()
{
{
    void (__thiscall *v2)(int *);
    (*(void (**)(void))(*(this + 53) + 40))();
    if ( (*(char *)(this + 41) & 5) != 0 )
    (*(void (__thiscall **)(int *))(*(this + 53) + 16))(this);
    (*(void (__thiscall **)(int *))(*(this + 53) + 44))(this);
    v2 = (void (__thiscall *)(int *))*(this + 47);
    if ( v2 )
    v2(this);
    *(this + 90) = 0;
    AudioStream::InitListAndCounters((int)this);
    (*(void (__thiscall **)(int *))(*(this + 53) + 8))(this);
    __3_YAXPAX_Z(this);
}
}

// ==== BACKFILL 0x004026C0  sub_4026C0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_4026C0::sub_4026C0()
{
{
    (*(void (**)(void))(this->M212 + 40))();
    this->M164 |= 0x10u;
    return (*(int (__thiscall **)(int *))(this->M212 + 44))(this);
}
}

// ==== BACKFILL 0x00402790  BindChannelAudioStream  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void AudioStream_BindChannel(unsigned int * a1, unsigned int * a2)
{
{
    int v4;
    int v5;
    int *v6;
    int v7;
    *((int*)(a1) + 90) = a2;
    if ( a2 )
  {
    v4 = AudioController::GetOffset(a2);
    *((int*)(a1) + 91) = v4;
    if ( v4 )
    {
    *((int*)(a1) + 92) = *(int *)(v4 + 12);
    v5 = *(int *)(v4 + 16);
    *((int*)(a1) + 93) = v5;
    *((int*)(a1) + 94) = v5;
    *a2 = 0;
    }
    else
    {
    v6 = (int *)*((int*)(a1) + 90);
    *((int*)(a1) + 92) = *v6;
    v7 = v6[1];
    *((int*)(a1) + 93) = v7;
    *((int*)(a1) + 94) = v7;
    }
  }
}
}

// ==== BACKFILL 0x00402800  AudioStream::CheckFormatChanged  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int AudioStream::CheckFormatChanged(int a1, const void * a2)
{
{
    void *v3;
    int result;
    v3 = (void *)(a1 + 380);
    if ( !memcmp(a2, (const void *)(a1 + 380), 0x20u) )
  {
    *(int *)(a1 + 412) = 0;
    return 0;
  }
    else
  {
    *(int *)(a1 + 412) = 1;
    result = *(int *)(a1 + 412);
    qmemcpy(v3, a2, 0x20u);
  }
    return result;
}
}

// ==== BACKFILL 0x00402850  sub_402850  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_402850::sub_402850()
{
{
    this->M8 = 0;
    this->M4 = 0;
    return 0;
}
}

// ==== BACKFILL 0x004028B0  AudioStream::InitListAndCounters  cls=AudioStream  sig=csp  renamed_refs=0  residual=- ====
int AudioStream::InitListAndCounters()
{
{
    int v2;
    int result;
    v2 = this->AudioStream_field_0xAC;
    LinkedList::Init((int **)this);
    --*(int *)(v2 + 240);
    ++*(int *)(v2 + 260);
    LinkedList::Init((int **)this);
    result = *(int *)(v2 + 260) - 1;
    *(int *)(v2 + 260) = result;
    if ( result < 0 )
    *(int *)(v2 + 260) = 0;
    return result;
}
}

// ==== BACKFILL 0x00402940  sub_402940  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_402940()
{
{
    DListNode::Init(DataGlobal_815E98);
    DListNode::Init((int *)(DataGlobal_815E98) + 3);
    *((int *)(DataGlobal_815E98) + 6) = 0;
    DataGlobal_87DE30 = (int)DataGlobal_815E98 + 32;
    AudioMixer::Init((int *)(DataGlobal_815E98) + 8);
    DataGlobal_87DE2C = 1;
    return 0;
}
}

// ==== BACKFILL 0x00402EF0  sub_402EF0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void E4Recv_402EF0::sub_402EF0()
{
{
    int *Next;
    int *i;
    int v4;
    int v5;
    Next = (int *)AudioQueue::GetNext(this + 62);
    for ( i = Next; Next; i = Next )
  {
    Next = (int *)AudioQueue::GetNextAlt(Next);
    AudioStream::Destructor(i);
  }
    (*(void (__thiscall **)(int *))(*(int *)(*(this + 6) + 12) + 32))(this);
    *(int *)(*(this + 6) + 4 * *(this + 7) + 28) = 0;
    v4 = *(this + 6);
    v5 = *(int *)(v4 + 16) - 1;
    *(int *)(v4 + 16) = v5;
    if ( v5 < 0 )
    *(int *)(*(this + 6) + 16) = 0;
    __3_YAXPAX_Z(this);
}
}

// ==== BACKFILL 0x00403490  ?GetSchedulerProxy_SchedulerBase_details_Concurrency__QBEPAUISchedulerProxy_3_XZ  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
struct Concurrency::ISchedulerProxy * E4Recv_403490::_GetSchedulerProxy_SchedulerBase_details_Concurrency__QBEPAUISchedulerProxy_3_XZ()
{
{
    return (struct Concurrency::ISchedulerProxy *)this->M244;
}
}

// ==== BACKFILL 0x004034A0  ?GetIScheduler_SchedulerBase_details_Concurrency__QAEPAUIScheduler_3_XZ  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
struct Concurrency::IScheduler * E4Recv_4034A0::_GetIScheduler_SchedulerBase_details_Concurrency__QAEPAUIScheduler_3_XZ()
{
{
    return (struct Concurrency::IScheduler *)this->M240;
}
}

// ==== BACKFILL 0x00403530  AudioQueue::PreallocateChannels  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
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

// ==== BACKFILL 0x004035B0  sub_4035B0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_4035B0(int a1, int * a2)
{
{
    int result;
    result = AudioQueue::GetNext((int *)(a1 + 248));
    *a2 = result;
    return result;
}
}

// ==== BACKFILL 0x004035D0  AudioQueue::IteratorNext  cls=AudioQueue  sig=csp  renamed_refs=0  residual=- ====
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

// ==== BACKFILL 0x004039C0  sub_4039C0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_4039C0(int a1, char * a2)
{
{
    unsigned int v3;
    int v4;
    unsigned int v5;
    int v6;
    v4 = Audio::Callback();
    if ( *(int *)(a1 + 72) != *(int *)(a1 + 80) )
  {
    v5 = *(int *)(a1 + 84) + 1;
    *(int *)(a1 + 84) = v5;
    if ( v5 >= strlen(DataGlobal_815E9C) )
    *(int *)(a1 + 84) = 0;
    *(int *)(a1 + 80) = *(int *)(a1 + 72);
  }
    if ( *(__int64 *)(a1 + 56) + *(__int64 *)(a1 + 64) < __PAIR64__(v3, v4) )
  {
    v6 = *(int *)(a1 + 4);
    *(int *)(a1 + 48) = *(int *)a1;
    *(int *)(a1 + 52) = v6;
    *(int *)(a1 + 56) = v4;
    *(int *)(a1 + 60) = v3;
  }
    return sprintf( a2, DataGlobal_815EA8, *(int *)a1, *(int *)(a1 + 16), *(int *)(a1 + 48), *(int *)(a1 + 24), *(int *)(a1 + 76), DataGlobal_815E9C[*(int *)(a1 + 84)]);
}
}

// ==== BACKFILL 0x00404DD0  Audio::FlushChannel  cls=Audio  sig=csp  renamed_refs=0  residual=- ====
int Audio::FlushChannel()
{
{
    LinkedList::Init(this);
    *(this + 78) = 0;
    if ( *((char *)(this) + 24) >= 0 )
    PushFrontLinkedListAlt(DataGlobal_87E2A8, (int)this);
    else
    __3_YAXPAX_Z(this);
    return --DataGlobal_87E28C;
}
}

// ==== BACKFILL 0x00405130  sub_405130  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_405130::sub_405130()
{
{
    if ( g_AudioConfigState )
    return this->M80;
    else
    return 0;
}
}

// ==== BACKFILL 0x00405140  sub_405140  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
double E4Recv_405140::sub_405140()
{
{
    if ( g_AudioConfigState )
    return this->M84;
    else
    return 0.0;
}
}

// ==== BACKFILL 0x00405160  sub_405160  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_405160::sub_405160()
{
{
    if ( g_AudioConfigState )
    return this->M20;
    else
    return 0;
}
}

// ==== BACKFILL 0x00405170  VocClass::GetSampleName  cls=VocClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { void* VocClass::GetSampleName() {
{
    char *result;
    result = DataGlobal_816204;
    if ( g_AudioConfigState )
    return this + 108;
    return result;
}
} }

// ==== BACKFILL 0x004052E0  sub_4052E0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_4052E0::sub_4052E0()
{
{
    int result;
    result = this->M24;
    LOBYTE(result) = result | 8;
    this->M24 = result;
    return result;
}
}

// ==== BACKFILL 0x004053E0  sub_4053E0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_4053E0::sub_4053E0()
{
{
    __int64 v2;
    LODWORD(v2) = this->M344;
    if ( !(int)v2 )
  {
    LODWORD(v2) = this->M28;
    if ( (int)v2 == 2 )
    {
    LODWORD(v2) = Audio::Callback();
    *(__int64 *)(this + 320) -= v2;
    }
  }
    ++this->M344;
    return v2;
}
}

// ==== BACKFILL 0x00405430  sub_405430  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_405430::sub_405430()
{
{
    __int64 v2;
    int v3;
    __int64 v4;
    LODWORD(v2) = this->M344;
    if ( (int)v2 )
  {
    v3 = this->M344 - 1;
    this->M344 = v3;
    if ( v3 < 0 )
    this->M344 = 0;
    LODWORD(v2) = this->M344;
    if ( !(int)v2 )
    {
    LODWORD(v2) = this->M28;
    if ( (int)v2 == 2 )
      {
    LODWORD(v4) = Audio::Callback();
    v2 = *(__int64 *)(this + 320) + v4;
    *(__int64 *)(this + 320) = v2;
      }
    }
  }
    return v2;
}
}

// ==== BACKFILL 0x00405490  sub_405490  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_405490()
{
int sub_405490(unsigned int * this_)
{
return this_[86];
}
}

// ==== BACKFILL 0x004059F0  sub_4059F0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_4059F0::sub_4059F0()
{
{
    *(int *)(this->M192 + 28) = 4;
    return 0;
}
}

// ==== BACKFILL 0x00405A00  sub_405A00  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_405A00::sub_405A00()
{
{
    int *v1;
    int v2;
    int v3;
    unsigned int v5;
    __int64 v6;
    v1 = (int *)this->M192;
    v2 = v1[6];
    LOBYTE(v2) = v2 & 0xFD;
    v1[6] = v2;
    v3 = 4;
    if ( v1[7] == 4 )
    return 0;
    if ( v1[82] || v1[154] || v1[79] )
    v3 = 1;
    else
    v1[79] = 0;
    if ( v1[79] )
  {
    v5 = v1[79];
    v1[8] = v3;
    if ( v1[86] )
    {
    v1[80] = v5;
    v1[81] = 0;
    }
    else
    {
    LODWORD(v6) = Audio::Callback();
    *((__int64 *)(v1) + 40) = v5 + v6;
    }
    v1[7] = 2;
    v1[79] = 0;
    return 0;
  }
    else
  {
    v1[7] = v3;
    return 0;
  }
}
}

// ==== BACKFILL 0x00405BE0  AudioController::Init  cls=AudioController  sig=csp  renamed_refs=3  residual=- ====
namespace ra2 { namespace game { int AudioController::Init() {
{
      this->AudioController_field_0C = &DataGlobal_87E294;
      *this = 0;
      this->AudioController_field_04 = 0;
      this->AudioController_field_08 = 0;
      return 0;
}
} } }

// ==== BACKFILL 0x004060F0  SetAudioSource  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void SetAudioSource(AudioMixer * aP0, unsigned int * a1, int a3)
{
{
    if ( (char *)aP0->AudioMixer_field_0C == &DataGlobal_87C374.__pad_14B0[2672] )
  {
    aP0->AudioMixer_field_00 = (int)a1;
    aP0->AudioMixer_field_08 = a3;
    if ( a1 )
    {
    aP0->AudioMixer_field_04 = *((int*)(a1) + 78);
    if ( !a3 )
    aP0->AudioMixer_field_08 = *((int*)(a1) + 9);
    *((int*)(a1) + 158) = aP0;
    }
  }
}
}

// ==== BACKFILL 0x00406170  VocClass::Check  cls=VocClass  sig=csp  renamed_refs=0  residual=- ====
namespace gamemd { int VocClass::Check() {
{
      if ( g_AudioConfigState && *(int **)(this + 12) == &DataGlobal_87E294 )
        return this->q008;
      else
        return 0;
}
} }

// ==== BACKFILL 0x004061D0  AudioMixer::PlayBuffer  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int AudioMixer::PlayBuffer(unsigned int * a1, unsigned int a2)
{
{
    int v2;
    int *v4;
    v2 = a2;
    if ( *((int*)(a1) + 7) == 3 )
  {
    if ( a2 > 0x4000 )
    v2 = 0x4000;
    return RequestBufferMixer(a1 + 46, (unsigned int)(v2 * HIWORD(*(int *)(*((int*)(a1) + 9) + 28))) >> 14);
  }
    else
  {
    if ( a2 > 0x4000 )
    v2 = 0x4000;
    v4 = a1 + 46;
    EndBufferMixer(a1 + 46, (unsigned int)(v2 * HIWORD(*(int *)(*((int*)(a1) + 9) + 28))) >> 14);
    return AudioMixer::PlaySample(v4);
  }
}
}

// ==== BACKFILL 0x004062C0  sub_4062C0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_4062C0::sub_4062C0(unsigned int a2, int a3)
{
{
    SetRateMixerSample(this + 46, 0x4000, a2, a3);
    SetRateMixerSample(this + 56, 0x4000, a2, a3);
    return SetRateMixerSample(this + 66, 0x4000, a2, a3);
}
}

// ==== BACKFILL 0x00406310  sub_406310  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_406310::sub_406310()
{
{
    return this->M36;
}
}

// ==== BACKFILL 0x004064A0  AbstractTypeClass::AddSampleVocClass  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int AbstractTypeClass::AddSampleVocClass()
{
{
    char *v1;
    char *v3;
    unsigned int v5;
    v3 = v1;
    if ( this->CellRangefinding == 32 )
    return 0;
    if ( g_AudioConfigState && DataGlobal_87E294 )
  {
    while ( *v3 == 36 || *v3 == 35 )
    ++v3;
    v5 = sub_4015C0(DataGlobal_87E294, v3);
    if ( v5 != -1 )
    {
    *((int *)(this) + (this->CellRangefinding)++ + 45) = v5;
    return 1;
    }
    Debug::Log();
    *(int *)&this->__pad_0[12] = 0;
  }
    return 1;
}
}

// ==== BACKFILL 0x00406570  AbstractTypeClass::sub_406570  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int AbstractTypeClass::sub_406570()
{
{
    int v1;
    int result;
    this->uniqueId = v1;
    result = 1;
    if ( (v1 & 0x20) != 0 )
  {
    if ( !this->TerrainFire )
    this->TerrainFire = 1;
  }
    else
  {
    this->TerrainFire = 0;
  }
    if ( (v1 & 0x40) != 0 )
  {
    if ( !this->DisguiseFakeBlinkTime )
    this->DisguiseFakeBlinkTime = 1;
  }
    else
  {
    this->DisguiseFakeBlinkTime = 0;
  }
    return result;
}
}

// ==== BACKFILL 0x004065F0  AbstractTypeClass::sub_4065F0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractTypeClass::sub_4065F0(int a2)
{
{
    *(int *)&this->UINameLabel[23] = a2;
    return a2;
}
}

// ==== BACKFILL 0x00406600  AbstractTypeClass::sub_406600  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int AbstractTypeClass::sub_406600()
{
{
    int v1;
    int v3;
    *(int *)&this->UINameLabel[27] = v1;
    *(int *)&this->UINameLabel[31] = v3;
    return v3;
}
}

// ==== BACKFILL 0x00406610  AbstractTypeClass::sub_406610  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int AbstractTypeClass::sub_406610()
{
{
    void *v1;
    int v3;
    this->UIName = v1;
    *(int *)this->Name = v3;
    return v3;
}
}

// ==== BACKFILL 0x00406670  sub_406670  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int * sub_406670(void * a1, int a2)
{
{
    int *result;
    int *v5;
    int *v6;
    __int64 v7;
    result = *(int **)&DataGlobal_87C374.__pad_14B0[2684];
    if ( *(int *)&DataGlobal_87C374.__pad_14B0[2684] )
  {
    result = (int *)AudioQueue::GetNext((int *)&DataGlobal_87C374.__pad_14B0[2604]);
    v5 = result;
    if ( result )
    {
    while ( 1 )
      {
    result = (int *)_strcmpi(a1, v5 + 27);
    if ( !result )
    break;
    result = (int *)AudioQueue::GetNextAlt(v5);
    v5 = result;
    if ( !result )
    return result;
      }
    if ( v5 )
      {
    result = AudioPool::ProcessQueue(v5);
    v6 = result;
    if ( result )
        {
    v7 = ((__int64)a2 << 14) / 256;
    if ( (unsigned int)v7 > 0x4000 )
    LODWORD(v7) = 0x4000;
    EndBufferMixer(v6 + 46, (unsigned int)(v7 * HIWORD(*(int *)(v6[9] + 28))) >> 14);
    return (int *)AudioMixer::PlaySample(v6 + 46);
        }
      }
    }
  }
    return result;
}
}

// ==== BACKFILL 0x004067D0  sub_4067D0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL sub_4067D0(char * a1, unsigned int * a2)
{
{
    const void **v4;
    const void *v5;
    v4 = (const void **)DataGlobal_816018;
    if ( DataGlobal_816018[0] )
  {
    do
    {
    if ( !_strcmpi(a1, *v4) )
    break;
    v5 = v4[2];
    v4 += 2;
    }
    while ( v5 );
  }
    if ( a2 )
    *a2 = v4[1];
    return *v4 != 0;
}
}

// ==== BACKFILL 0x00406820  sub_406820  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL sub_406820(unsigned int * a1, char * a2)
{
{
    const void **v4;
    _UNKNOWN **v5;
    v4 = (const void **)&DataGlobal_8160C0;
    if ( DataGlobal_8160C0 )
  {
    do
    {
    if ( !_strcmpi(a2, *v4) )
    break;
    v5 = (_UNKNOWN **)v4[2];
    v4 += 2;
    }
    while ( v5 );
  }
    if ( a1 )
    *a1 |= (unsigned int)v4[1];
    return *v4 != 0;
}
}

// ==== BACKFILL 0x004068E0  Debug::Log  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void Debug::Log()
{
  ;
}

// ==== BACKFILL 0x004068F0  Array::ForEach  cls=Array  sig=csp  renamed_refs=0  residual=- ====
int Array::ForEach(AbstractClass * aP0, int a2, IUnknown * aP2, int (__thiscall *a4)(int) a4)
{
{
    int result;
    IUnknown *v6;
    result = (int)&aP2[-1].__tail_1602E[1];
    if ( (int)&aP2[-1].__tail_1602E[1] >= 0 )
  {
    v6 = aP2;
    do
    {
    result = a4((int)aP0);
    aP0 = (AbstractClass *)((char *)(aP0) + a2);
    v6 = (IUnknown *)((char *)v6 - 1);
    }
    while ( v6 );
  }
    return result;
}
}

// ==== BACKFILL 0x00406D40  Audio::Shutdown  cls=Audio  sig=csp  renamed_refs=0  residual=- ====
void Audio::Shutdown()
{
{
    if ( DataGlobal_87E728 )
    AudioQueue::StopAllVoices((int)DataGlobal_87E728, 1);
    AudioStream::CleanupChannels();
    AudioQueue::HaltVoices();
    Audio_Cleanup();
    Audio_Cleanup_752B40();
    sub_403FA0();
    sub_407780();
    if ( g_AudioFileData )
  {
    sub_401580((void **)g_AudioFileData);
    g_AudioFileData = 0;
  }
    if ( g_MixFile_AUDIO )
  {
    (**(void (__thiscall ***)(int, int))g_MixFile_AUDIO)(g_MixFile_AUDIO, 1);
    g_MixFile_AUDIO = 0;
  }
    if ( g_MixFile_THEME )
  {
    (**(void (__thiscall ***)(int, int))g_MixFile_THEME)(g_MixFile_THEME, 1);
    g_MixFile_THEME = 0;
  }
    if ( DataGlobal_87E728 )
  {
    AudioStream::DestroyAll(DataGlobal_87E728);
    DataGlobal_87E728 = 0;
  }
    sub_402990();
}
}

// ==== BACKFILL 0x00406F00  sub_406F00  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_406F00()
{
{
    int result;
    if ( !ChronoScreen::IsActive() )
  {
    if ( DataGlobal_87E728 )
    AudioQueue::DeactivateAllMatching((int)DataGlobal_87E728, 1);
    AudioStream::UpdateTimers();
    sub_751040();
  }
    result = AudioFrame::CounterInc();
    if ( DataGlobal_B1D4D8 )
    return AudioFrame::ProcessAudioFrame((int)DataGlobal_B1D4D8);
    return result;
}
}

// ==== BACKFILL 0x00407000  Audio::IsSoundEnabled  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL Audio::IsSoundEnabled()
{
{
    return DataGlobal_87E728 != 0;
}
}

// ==== BACKFILL 0x00407010  Audio::GetEnabled  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void * Audio::GetEnabled()
{
{
    return DataGlobal_87E728;
}
}

// ==== BACKFILL 0x00407060  sub_407060  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_407060::sub_407060()
{
{
    return RequestBufferMixer(this, 0x4000);
}
}

// ==== BACKFILL 0x00407070  Audio::GetFlag  cls=Audio  sig=csp  renamed_refs=0  residual=- ====
int Audio::GetFlag()
{
{
    return RequestBufferMixer(this, 0);
}
}

// ==== BACKFILL 0x00407100  SetupSampleAudioMixer  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int SetupSampleAudioMixer(int * a0, ObjectClass * aP1)
{
{
    int v4;
    int v5;
    int v6;
    *a0 = 0;
    v4 = Audio::Callback();
    v5 = *a0;
    *((int*)(a0) + 6) = v4;
    *((int*)(a0) + 4) = 1000;
    *a0 = v5 | 1;
    *((int*)(a0) + 2) = (int)aP1 << 16;
    *((int*)(a0) + 7) = v6;
    *((int*)(a0) + 3) = 1073741;
    *((int*)(a0) + 5) = 0;
    return AudioMixer::PlaySample(a0);
}
}

// ==== BACKFILL 0x00407150  EndBufferMixer  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int EndBufferMixer(VolumeStruct* volume, int scaledVolume)
{
int result = volume->Volume | 1;
volume->Volume = result;
volume->ScaledVolume = scaledVolume << 16;
return result;
}

// ==== BACKFILL 0x00407160  sub_407160  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_407160(VolumeStruct* volume)
{
int result = volume->Volume | 1;
volume->Volume = result;
return result;
}

// ==== BACKFILL 0x00407170  RequestBufferMixer  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int RequestBufferMixer(VolumeStruct* volume, int rate)
{
int result = volume->ScaledVolume;
unsigned int flags = volume->Volume;
int audioState = volume->AudioState;
volume->Volume = flags & 0xFFFFFFFE;
if ( result == audioState )
{
    unsigned long long now = Audio::Callback();
    volume->hBuffer = (uint32_t)now;
    volume->MaxVolume = (int)((now >> 32) & 0xFFFFFFFF);
    result = (int)now;
}
volume->ScaledVolume = rate << 16;
return result;
}

// ==== BACKFILL 0x004071A0  SetRateMixerSample  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int SetRateMixerSample(unsigned int * a0, int a2, unsigned int a3, ObjectClass * aP3)
{
{
    *((int*)(a0) + 4) = a3;
    *((int*)(a0) + 3) = (a2 << 16) / a3;
    *((int*)(a0) + 5) = aP3;
    return (int)aP3->__pad_0;
}
}

// ==== BACKFILL 0x004072B0  sub_4072B0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_4072B0::sub_4072B0()
{
{
    return HIWORD(this->M8);
}
}

// ==== BACKFILL 0x004073B0  SaveGame::CountLinkedList  cls=SaveGame  sig=csp  renamed_refs=0  residual=- ====
int SaveGame::CountLinkedList()
{
{
    int *v1;
    int result;
    v1 = (int *)*(void**)this;
    for ( result = 0; v1 != this; ++result )
    v1 = (int *)*v1;
    return result;
}
}

// ==== BACKFILL 0x004073C0  AudioQueue::GetNext  cls=AudioQueue  sig=csp  renamed_refs=0  residual=- ====
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

// ==== BACKFILL 0x004073E0  AudioQueue::GetNextAlt  cls=AudioQueue  sig=csp  renamed_refs=0  residual=- ====
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

// ==== BACKFILL 0x00407420  InsertAfterDListNode  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int DListNode_InsertAfter(int a1, unsigned int * a2)
{
{
    int result;
    result = *(int *)(a1 + 4);
    *a2 = a1;
    *((int*)(a2) + 1) = result;
    *(int *)(a1 + 4) = a2;
    *(int *)*((int*)(a2) + 1) = a2;
    return result;
}
}

// ==== BACKFILL 0x00407440  InsertBeforeLinkedList  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int LinkedList_InsertBefore(int * a1, int * a2)
{
{
    int result;
    *((int*)(a2) + 1) = (int)a1;
    result = *a1;
    *a2 = *a1;
    *a1 = (int)a2;
    *(int *)(*a2 + 4) = a2;
    return result;
}
}

// ==== BACKFILL 0x00407450  LinkedList::Init  cls=LinkedList  sig=csp  renamed_refs=0  residual=- ====
int LinkedList::Init()
{
{
    int result;
    *(void**)this->Tail = *(void**)this;
    result = (int)*(void**)this;
    (*(void**)this)[1] = this->Tail;
    *(void**)this = this;
    this->Tail = this;
    return result;
}
}

// ==== BACKFILL 0x00407520  LinkedList::Next  cls=LinkedList  sig=csp  renamed_refs=0  residual=- ====
int * LinkedList::Next()
{
{
    int *result;
    int *v2;
    result = *(void**)this;
    if ( *(void**)this )
  {
    v2 = (int *)*result;
    *(void**)this = v2;
    result += 2;
  }
    return result;
}
}

// ==== BACKFILL 0x00407530  PushFrontLinkedListAlt  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int LinkedList_PushFront_Alt(unsigned int * a1, int a2)
{
{
    *(int *)(a2 - 8) = *a1;
    *a1 = a2 - 8;
    return a2 - 8;
}
}

// ==== BACKFILL 0x00407680  StartAddress  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
DWORD StartAddress(unsigned int * lpThreadParameter)
{
{
    int *v1;
    __int64 v2;
    int i;
    int v4;
    int v5;
    int v6;
    int v7;
    v1 = lpThreadParameter;
    lpThreadParameter[6] = 1;
    v1[2] = 0;
    if ( *v1 )
  {
    v1[2] = 1;
    return 0;
  }
    else
  {
    do
    {
    LODWORD(v2) = Audio::Callback();
    AudioThread::UpdateStats((int)(v1 + 8), v2);
    EnterCriticalSection(&CriticalSection);
    for ( i = AudioQueue::GetNext(DataGlobal_87E810); i; i = AudioQueue::GetNextAlt((int *)i) )
      {
    if ( (*(char *)(i + 12) & 4) != 0 )
        {
    EnterCriticalSection(&CriticalSection);
    v4 = *(int *)(i + 156);
    DataGlobal_B04BEC = 1;
    v5 = sub_408F80(*(int **)(i + 52), *(int **)(i + 124), v4, (char *)&lpThreadParameter);
    DataGlobal_B04BEC = 0;
    v6 = *(int *)(i + 156) - (int)lpThreadParameter;
    *(int *)(i + 156) = v6;
    if ( v6 <= 0 || v5 == 2 || !v5 )
          {
    v7 = *(int *)(i + 12);
    LOBYTE(v7) = v7 & 0xFB;
    *(int *)(i + 12) = v7;
          }
    LeaveCriticalSection(&CriticalSection);
        }
      }
    LeaveCriticalSection(&CriticalSection);
    Sleep(v1[4]);
    ++v1[1];
    }
    while ( !*v1 );
    v1[2] = 1;
    return 0;
  }
}
}

// ==== BACKFILL 0x00407860  AudioStream::Constructor  cls=AudioStream  sig=csp  renamed_refs=0  residual=- ====
char * AudioStream::Constructor(unsigned long long a2)
{
{
    int v3;
    char *v4;
    int v5;
    int v6;
    int v7;
    if ( !this )
    return 0;
    v3 = HIDWORD(a2);
    if ( a2 < 0x1B58 )
  {
    LODWORD(a2) = 7000;
    v3 = 0;
  }
    v4 = (char *)__2_YAPAXI_Z(0xF8u);
    memset(v4, 0, 0xF8u);
    DListNode::InitEmpty(v4);
    *((int *)(v4) + 4) = this;
    v5 = sub_4036C0();
    *((int *)(v4) + 5) = v5;
    *(int *)(v5 + 148) = 0;
    *(int *)(*((int *)(v4) + 5) + 144) = 0;
    *(int *)(*((int *)(v4) + 5) + 152) = 0;
    *(int *)(*((int *)(v4) + 5) + 156) = 0;
    *((int *)(v4) + 6) = a2;
    *((int *)(v4) + 7) = v3;
    AudioStream::InitNodeFields(v4 + 60);
    Struct::ZeroInit32(v4 + 92);
    *((int *)(v4) + 32) = 0;
    *((int *)(v4) + 34) = 0;
    strcpy(v4 + 164, DataGlobal_8162C8);
    v6 = *((int *)(v4) + 5);
    if ( v6 && (*(int *)(v6 + 192) = v4, *(int *)(*((int *)(v4) + 5) + 176) = AudioStream::ReadStreamAndSyncPosition, *(int *)(*((int *)(v4) + 5) + 184) = AudioStream::SetPlaybackCallback, *(int *)(*((int *)(v4) + 5) + 188) = AudioStream::ProcessCallback, v7 = sub_4087F0(), (*((int *)(v4) + 12) = v7) != 0) )
  {
    EnterCriticalSection(&CriticalSection);
    InsertBeforeLinkedList(DataGlobal_87E810, v4);
    LeaveCriticalSection(&CriticalSection);
    return v4;
  }
    else
  {
    AudioSample::Destructor(v4);
    return 0;
  }
}
}

// ==== BACKFILL 0x00407F80  sub_407F80  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_407F80::sub_407F80()
{
{
    int result;
    result = this->M136 + 1;
    this->M136 = result;
    return result;
}
}

// ==== BACKFILL 0x00408000  AudioMixer::ProcessAudioFrame  cls=AudioMixer  sig=csp  renamed_refs=3  residual=- ====
namespace gamemd { void AudioMixer::ProcessAudioFrame() {
{
      int v2;
      int v3;

      if ( this->q080 )
      {
        v2 = this->q080 - 1;
        this->q080 = v2;
        if ( v2 < 0 )
          this->q080 = 0;
        if ( !this->q080 && this->AudioMixer_field_14 )
        {
          EnterCriticalSection(&CriticalSection);
          v3 = this->AudioMixer_field_0C;
          if ( (v3 & 2) != 0 )
          {
            LOBYTE(v3) = v3 & 0xFC | 1;
            this->AudioMixer_field_0C = v3;
          }
          AudioChannel::ActivatePlay(*(_DWORD **)(this + 20));
          LeaveCriticalSection(&CriticalSection);
        }
      }
}
} }

// ==== BACKFILL 0x00408080  SetAudioFileName  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char * SetAudioFileName(int a1, const char * a2)
{
{
    char *result;
    result = strncpy((char *)(a1 + 164), a2, (IUnknown *)0x50);
    *(char *)(a1 + 243) = 0;
    return result;
}
}

// ==== BACKFILL 0x004080A0  sub_4080A0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char * E4Recv_4080A0::sub_4080A0()
{
{
    return this + 164;
}
}

// ==== BACKFILL 0x004080B0  sub_4080B0  cls=UnitTypeClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_4080B0::sub_4080B0()
{
{
    return RequestBufferMixer((unsigned int *)(this->M20 + 16), 0x4000);
}
}

// ==== BACKFILL 0x00408410  sub_408410  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_408410()
{
{
    int Next;
    if ( !DataGlobal_87E81C )
    return 1;
    Next = AudioQueue::GetNext(DataGlobal_87E810);
    if ( !Next )
    return 1;
    while ( (*(char *)(Next + 12) & 1) == 0 || *(int *)(*(int *)(Next + 20) + 20) == *(int *)(*(int *)(Next + 20) + 24) )
  {
    Next = AudioQueue::GetNextAlt((int *)Next);
    if ( !Next )
    return 1;
  }
    return 0;
}
}

// ==== BACKFILL 0x00408460  sub_408460  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * sub_408460(size_t Size)
{
{
    int *v2;
    void *v3;
    v2 = __2_YAPAXI_Z(0x20u);
    memset(v2, 0, 0x20u);
    *v2 = 0;
    v2[1] = 0;
    v2[5] = 0;
    v2[6] = 0;
    DListNode::Init(v2 + 2);
    v2[1] = Size;
    v3 = __2_YAPAXI_Z(Size);
    *v2 = v3;
    if ( v3 )
    return v2;
    if ( v2 )
    __3_YAXPAX_Z(v2);
    return 0;
}
}

// ==== BACKFILL 0x00408500  sub_408500  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_408500(int a1, unsigned int * a2)
{
{
    int result;
    InsertAfterDListNode(a1 + 8, a2);
    result = *((int*)(a2) + 4);
    *(int *)(a1 + 4) += result;
    *((int*)(a2) + 5) = a1;
    return result;
}
}

// ==== BACKFILL 0x00408520  AudioController::GetOffset  cls=AudioController  sig=csp  renamed_refs=0  residual=- ====
namespace ra2 { namespace game { int AudioController::GetOffset() {
{
    return Queue::GetNext(this + 2);
}
} } }

// ==== BACKFILL 0x00408530  nullsub_2  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void nullsub_2()
{
  ;
}

// ==== BACKFILL 0x004085A0  Struct::ZeroInit32  cls=Struct  sig=csp  renamed_refs=0  residual=- ====
int Struct::ZeroInit32()
{
{
    memset(this, 0, 0x20u);
    return 0;
}
}

// ==== BACKFILL 0x004085B0  sub_4085B0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_4085B0::sub_4085B0()
{
{
    int v1;
    int result;
    v1 = this->M4;
    result = this->M8 *(void**)this->M12 *(void**)this->M16;
    this->M20 = result;
    if ( v1 == 1 || v1 == 2 )
  {
    result >>= 2;
    this->M20 = result;
  }
    return result;
}
}

// ==== BACKFILL 0x004085E0  sub_4085E0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void sub_4085E0(unsigned int * a1, int a2, int a3)
{
{
    *((int*)(a1) + 4) = a3;
    *((int*)(a1) + 3) = a2;
    DListNode::InitEmpty(a1);
    *((int*)(a1) + 5) = 0;
}
}

// ==== BACKFILL 0x00408A70  AudioMixer::SetupChannels  cls=AudioMixer  sig=csp  renamed_refs=3  residual=- ====
namespace gamemd { int AudioMixer::SetupChannels() {
{
      int *v1;
      int v2;
      int *v3;
      _DWORD *v4;
      int v5;
      int *v6;
      int v7;
      _DWORD *v8;
      int result;

      v1 = (int *)this->AudioMixer_field_04;
      if ( v1 == this + 1 )
      {
        v1 = 0;
      }
      else
      {
        v2 = 0;
        if ( v1 )
        {
          v3 = (int *)this->AudioMixer_field_04;
          do
          {
            v4 = v3 + 9;
            v5 = 2;
            do
            {
              *(v4 - 1) = v3[6];
              *v4 = v3[7];
              v4 += 2;
              --v5;
            }
            while ( v5 );
            v3[13] = v2;
            v3 = (int *)*v3;
            ++v2;
          }
          while ( v3 != this + 1 );
        }
      }
      v6 = this + 19;
      v7 = 2;
      v8 = this + 19;
      do
      {
        *(v8 - 3) = v1;
        *v8 = -1001;
        v8[1] = *v8;
        *(v8 - 1) = 0;
        *(v8 - 2) = 0;
        *(v8 - 10) = v1;
        if ( v1 )
          *(v8 - 12) = v1[2 * *(v8 - 8) + 8];
        else
          *(v8 - 12) = 0;
        *(v8 - 11) = 0;
        *(v8 - 9) &= ~1u;
        v8 += 16;
        --v7;
      }
      while ( v7 );
      result = *v6 + this->AudioMixer_field_14;
      *v6 = result;
      return result;
}
} }

// ==== BACKFILL 0x00408B10  sub_408B10  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char sub_408B10(unsigned int * a1, int * a2)
{
{
    int v4;
    int v5;
    InsertBeforeLinkedList(a1 + 1, a2);
    v4 = *((int*)(a1) + 5);
    ++*a1;
    *((int*)(a1) + 5) = *((int*)(a2) + 7) + v4;
    *((int*)(a2) + 12) = (int)a1;
    v5 = *((int*)(a1) + 4);
    LOBYTE(v5) = v5 & 0xFD;
    *((int*)(a1) + 4) = v5;
    return v5;
}
}

// ==== BACKFILL 0x00408B40  sub_408B40  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_408B40(unsigned int * a1, int a2, int a3, size_t Size)
{
{
    int result;
    int *v7;
    void *v8;
    int v9;
    int v10;
    int v11;
    int v12;
    int v13;
    size_t Sizea;
    result = 0;
    v11 = 0;
    v12 = a2 - 1;
    if ( a2 )
  {
    v13 = 1 << Size;
    Sizea = a3 + (1 << Size);
    while ( 1 )
    {
    v7 = __2_YAPAXI_Z(0x3Cu);
    memset(v7, 0, 0x3Cu);
    DListNode::InitEmpty(v7);
    v8 = __2_YAPAXI_Z(Sizea);
    v7[4] = v8;
    if ( !v8 )
    break;
    v7[5] = Size;
    v7[7] = a3;
    v7[6] = (-1 << Size) & ((unsigned int)v8 + v13 - 1);
    if ( v7 )
      {
    InsertBeforeLinkedList(a1 + 1, v7);
    v9 = *((int*)(a1) + 5);
    ++*a1;
    *((int*)(a1) + 5) = v7[7] + v9;
    v10 = v12;
    v7[12] = a1;
    *((int*)(a1) + 4) &= ~2u;
    ++v11;
    --v12;
    if ( v10 )
    continue;
      }
    return v11;
    }
    if ( v7 )
    __3_YAXPAX_Z(v7);
    return v11;
  }
    return result;
}
}

// ==== BACKFILL 0x00408D30  sub_408D30  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_408D30::sub_408D30()
{
{
    return this->M140 - this->M144;
}
}

// ==== BACKFILL 0x00408D40  sub_408D40  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_408D40::sub_408D40()
{
{
    return this->M76 - this->M80;
}
}

// ==== BACKFILL 0x00408EC0  sub_408EC0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_408EC0::sub_408EC0()
{
{
    return this->M24;
}
}

// ==== BACKFILL 0x00408ED0  sub_408ED0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_408ED0::sub_408ED0()
{
{
    return this->M20;
}
}

// ==== BACKFILL 0x00408EE0  BufferedAudioStreamRead  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int BufferedAudioStreamRead(AudioStream * a1, AudioStream * a2, signed int a3)
{
{
    AudioStream *v3;
    int v5;
    AudioStream *v6;
    bool v7;
    int v9;
    AudioStream *v10;
    v3 = a2;
    v9 = 0;
    v10 = a2;
    ReadAudioStream(a1, 0);
    while ( 1 )
  {
    v5 = (int)a1->field_8;
    if ( v5 > a3 )
    v5 = a3;
    if ( !v5 )
    break;
    if ( a1->field_14 )
    {
    v6 = (AudioStream *)a1->field_4;
    }
    else
    {
    v6 = v3;
    v3 = (AudioStream *)a1->field_4;
    }
    qmemcpy(v3, v6, v5);
    ReadAudioStream(a1, v5);
    v7 = a3 == v5;
    v10 = (AudioStream *)((char *)(v10) + v5);
    a3 -= v5;
    v9 += v5;
    if ( v7 )
    break;
    v3 = v10;
  }
    return v9;
}
}

// ==== BACKFILL 0x004090F0  sub_4090F0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_4090F0::sub_4090F0()
{
{
    return this->M36;
}
}

// ==== BACKFILL 0x00409330  sub_409330  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_409330::sub_409330()
{
{
    return this->M48;
}
}

// ==== BACKFILL 0x00409360  sub_409360  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_409360()
{
{
    LONGLONG v0;
    LARGE_INTEGER Frequency;
    LODWORD(v0) = QueryPerformanceFrequency(&Frequency);
    if ( (int)v0 )
  {
    v0 = Frequency.QuadPart / 1000;
    DataGlobal_87E828 = Frequency.QuadPart / 1000;
    DataGlobal_87E848 = (int (*)(void))sub_4093C0;
  }
    else
  {
    DataGlobal_87E848 = (int (*)(void))sub_4093F0;
  }
    return v0;
}
}

// ==== BACKFILL 0x004093B0  Audio::Callback  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int Audio::Callback()
{
{
    if ( DataGlobal_87E848 )
    return DataGlobal_87E848();
    else
    return 0;
}
}

// ==== BACKFILL 0x00409470  sub_409470  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_409470::sub_409470()
{
{
    HANDLE Thread;
    DWORD LastError;
    CHAR Buffer[1024];
    InitializeCriticalSection(&DataGlobal_87E880);
    if ( DirectSoundCreate(0, &DataGlobal_87E89C, 0) )
    return -2147221504;
    DataGlobal_87E89C->lpVtbl->SetCooperativeLevel(DataGlobal_87E89C, g_hWnd, 2);
    this->M24 = 1;
    if ( DataGlobal_87E898 )
  {
    ++DataGlobal_87E878;
  }
    else
  {
    DataGlobal_87E878 = 0;
    DataGlobal_87E850 = 0;
    DataGlobal_87E858 = 0;
    DataGlobal_87E868 = 0;
    DataGlobal_87E860 = 33;
    DataGlobal_87E864 = 0;
    DataGlobal_87E854 = 0;
    Thread = CreateThread( 0, 0x1000u, (LPTHREAD_START_ROUTINE)AudioStreamThreadProc, &DataGlobal_87E850, 0, &DataGlobal_87E874);
    DataGlobal_87E86C = (int)Thread;
    if ( !Thread )
    return -2147221504;
    ++DataGlobal_87E878;
    DataGlobal_87E898 = 1;
    if ( !SetThreadPriority(Thread, 15) )
    {
    LastError = GetLastError();
    FormatMessageA(0x1000u, 0, LastError, 0, Buffer, 0x400u, 0);
    Debug::Log();
    return 0;
    }
  }
    return 0;
}
}

// ==== BACKFILL 0x0040A2D0  sub_40A2D0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_40A2D0::sub_40A2D0()
{
{
    int v2;
    int v3;
    v2 = this->M344;
    if ( v2 )
  {
    if ( *(int *)(v2 + 124) )
    {
    free(*(void **)(v2 + 124));
    *(int *)(v2 + 124) = 0;
    *(int *)(v2 + 136) = 0;
    }
    if ( *(int *)(v2 + 144) )
    {
    free(*(void **)(v2 + 144));
    *(int *)(v2 + 144) = 0;
    *(int *)(v2 + 156) = 0;
    }
    v3 = *(int *)(v2 + 100);
    if ( v3 )
    {
    (*(void (__stdcall **)(int))(*(int *)(v3) + 8))(*(int *)(v2 + 100));
    *(int *)(v2 + 100) = 0;
    }
    __3_YAXPAX_Z((void *)v2);
    this->M344 = 0;
  }
    return 0;
}
}

// ==== BACKFILL 0x0040A7A0  Audio::GetDirectSound  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
LPDIRECTSOUND Audio::GetDirectSound()
{
{
    return DataGlobal_87E89C;
}
}

// ==== BACKFILL 0x0040ACD0  MoveCoordByDirection  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
short Coord_MoveByDirection(unsigned char a1, int * a2)
{
{
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    bool v7;
    int v8;
    v2 = DataGlobal_816558[*((int*)(a2) + 1)];
    v3 = v2 >> 3;
    if ( (a1 & 1) != 0 )
    v3 += v2 >> 2;
    if ( (a1 & 2) != 0 )
    v3 += v2 >> 1;
    if ( (a1 & 4) != 0 )
    v3 += v2;
    if ( (a1 & 8) != 0 )
    v3 = -v3;
    v4 = v3 + *a2;
    *a2 = v4;
    if ( v4 <= 0x7FFF )
  {
    if ( v4 < -32768 )
    *a2 = -32768;
  }
    else
  {
    *a2 = 0x7FFF;
  }
    v5 = *((int*)(a2) + 1);
    v6 = DataGlobal_816518[a1];
    v7 = v6 + v5 < 0;
    v8 = v6 + v5;
    *((int*)(a2) + 1) = v8;
    if ( v7 )
  {
    *((int*)(a2) + 1) = 0;
    return *(short *)a2;
  }
    else
  {
    if ( v8 > 88 )
    *((int*)(a2) + 1) = 88;
    return *(short *)a2;
  }
}
}

// ==== BACKFILL 0x0040AFD0  Array::ForEachReverse  cls=Array  sig=csp  renamed_refs=0  residual=- ====
int Array::ForEachReverse(ObjectClass * aP0, int a2, int a3, int (__thiscall *a4)(int) a4)
{
{
    char *v4;
    int result;
    int v6;
    v4 = &aP0->__pad_0[a3 * a2];
    result = a3 - 1;
    if ( a3 - 1 >= 0 )
  {
    v6 = a3;
    do
    {
    v4 -= a2;
    result = a4((int)v4);
    --v6;
    }
    while ( v6 );
  }
    return result;
}
}

// ==== BACKFILL 0x0040B010  sub_40B010  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void ** sub_40B010(void ** Block, char a2)
{
{
    int v3;
    void **v4;
    void **v5;
    int v6;
    SessionClass *v7;
    if ( (a2 & 2) != 0 )
  {
    v3 = (int)*(Block - 1);
    v4 = Block - 1;
    v5 = Block + v3;
    v6 = v3 - 1;
    if ( v6 >= 0 )
    {
    v7 = (SessionClass *)(v6 + 1);
    do
      {
    DeleteAndZero((int)--v5);
    v7 = (SessionClass *)((char *)v7 - 1);
      }
    while ( v7 );
    }
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(v4);
    return v4;
  }
    else
  {
    DeleteAndZero((int)Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return Block;
  }
}
}

// ==== BACKFILL 0x0040B180  VectorClass::Release  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
char VectorClass::Release(int a2, char * a3)
{
int newCapacity = a2;
if ( a2 )
{
    char* buffer = a3;
    this->IsInitialized = 0;
    if ( a3 )
    {
        char* zeroPtr = a3;
        if ( a2 - 1 >= 0 )
        {
            int count = a2;
            do
            {
                *(unsigned int *)zeroPtr = 0;
                zeroPtr[4] = 0;
                zeroPtr += 8;
                --count;
            }
            while ( count );
        }
    }
    else
    {
        char* newMem = (char *)operator new(8 * a2);
        if ( newMem )
        {
            char* zeroPtr2 = newMem;
            if ( a2 - 1 >= 0 )
            {
                int count2 = a2;
                do
                {
                    *(unsigned int *)zeroPtr2 = 0;
                    zeroPtr2[4] = 0;
                    zeroPtr2 += 8;
                    --count2;
                }
                while ( count2 );
            }
            buffer = newMem;
        }
        else
        {
            buffer = 0;
        }
    }
    this->IsInitialized = 1;
    if ( buffer )
    {
        if ( this->Items )
        {
            int copyCount = this->Capacity;
            if ( a2 < copyCount )
                copyCount = a2;
            int i = 0;
            if ( copyCount > 0 )
            {
                do
                {
                    unsigned int* src = (unsigned int *)&this->Items[i];
                    *(unsigned int *)&buffer[8 * i] = src[0];
                    *(unsigned int *)&buffer[8 * i + 4] = src[1];
                    ++i;
                }
                while ( i < copyCount );
                newCapacity = a2;
            }
            if ( this->IsAllocated )
            {
                operator delete(this->Items);
                this->Items = 0;
            }
        }
        this->Items = (decltype(this->Items))buffer;
        this->Capacity = newCapacity;
        this->IsAllocated = (a3 == 0);
        return 1;
    }
    else
    {
        return 0;
    }
}
else
{
    this->Clear();
    return 1;
}
}

// ==== BACKFILL 0x0040B270  VectorClass::Cleanup5  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
void VectorClass::Cleanup5()
{
if ( this->Items && this->IsAllocated )
{
    operator delete(this->Items);
    this->Items = 0;
}
this->IsAllocated = 0;
this->Capacity = 0;
}

// ==== BACKFILL 0x0040B2A0  VectorClass::GetSize  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
int VectorClass::GetSize(unsigned int * a2)
{
if ( !this->IsInitialized )
    return 0;
unsigned int* i = (unsigned int *)this->Items;
int capacity = this->Capacity;
int result = 0;
if ( capacity <= 0 )
    return -1;
while ( *i != *a2 )
{
    ++result;
    i += 2;
    if ( result >= capacity )
        return -1;
}
return result;
}

// ==== BACKFILL 0x0040B2E0  VectorClass::GetCapacity  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int VectorClass::GetCapacity(int a2)
{
if ( this->IsInitialized )
    return (unsigned int)((char *)a2 - (char *)this->Items) >> 3;
else
    return 0;
}

// ==== BACKFILL 0x0040B300  VectorClass::QueryInterface  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
VectorClass * VectorClass::QueryInterface(unsigned int * Block, char a2)
{
    void* v3 = (void*)*(Block + 1);
    *Block = (unsigned int)vt_VectorClass_SubzoneConnectionStruct;
    char* blockBytes = (char*)Block;
    if ( v3 && blockBytes[13] )
    {
        __3_YAXPAX_Z(v3);
        *(Block + 1) = 0;
    }
    blockBytes[13] = 0;
    *(Block + 2) = 0;
    if ( (a2 & 1) != 0 )
        __3_YAXPAX_Z(Block);
    return (VectorClass *)Block;
}

// ==== BACKFILL 0x0040BD00  EventClass::resetEvent  cls=EventClass  sig=csp  renamed_refs=5  residual=- ====
unsigned int * EventClass::resetEvent(BuildingClass * aP1, BuildingClass * aP2)
{
{
    this->q004 = 0;
    this->q008 = aP1;
    this->q00C = 1;
    this->IsAllocated = 0;
    *(void**)this = &vt_VectorClass_TechnoClass;
    if ( aP1 )
  {
    if ( aP2 )
    {
    this->q004 = aP2;
    return this;
    }
    this->q004 = __2_YAPAXI_Z(4 * (int)aP1);
    this->IsAllocated = 1;
  }
    return this;
}
}

// ==== BACKFILL 0x0040CC00  VectorClass_ptr_IsometricTileClass::GetItem  cls=LogicClass  sig=csp  renamed_refs=0  residual=- ====
int VectorClass_ptr_IsometricTileClass::GetItem()
{
{
    return this->Destroy();
}
}

// ==== BACKFILL 0x0040CC10  GenericVector::StubReturnFalse  cls=LogicClass  sig=csp  renamed_refs=0  residual=- ====
void GenericVector::StubReturnFalse()
{
}

// ==== BACKFILL 0x0040CC20  VectorClass_ptr_IsometricTileClass::Constructor_VectorClass_ObjectClass___  cls=LogicClass  sig=csp  renamed_refs=0  residual=- ====
LogicClass * VectorClass_ptr_IsometricTileClass::Constructor_VectorClass_ObjectClass___(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_ObjectClass;
    if ( v3 && *(int *)(this + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    *(int *)(this + 13) = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (LogicClass *)this;
}
}

// ==== BACKFILL 0x0040CC70  VectorClass_ptr_IsometricTileClass::TryFreeAndClear  cls=DynamicVector  sig=csp  renamed_refs=2  residual=- ====
void VectorClass_ptr_IsometricTileClass::TryFreeAndClear()
{
{
    void *v2;
    v2 = this->Items;
    this->q010 = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->Items = (void*)(0);
  }
    this->IsAllocated = 0;
    this->q008 = 0;
}
}

// ==== BACKFILL 0x0040CCA0  VectorClass_ptr_IsometricTileClass::GetPtrOffset  cls=DynamicVector  sig=csp  renamed_refs=0  residual=- ====
unsigned int VectorClass_ptr_IsometricTileClass::GetPtrOffset(int a2)
{
{
    if ( this->IsInitialized )
    return (unsigned int)(a2 - this->Items) >> 2;
    else
    return 0;
}
}

// ==== BACKFILL 0x0040CCC0  VectorClass::GetAt  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
int VectorClass::GetAt(int a2)
{
return this->Items[a2];
}

// ==== BACKFILL 0x0040CF00  VectorClass_ptr_IsometricTileClass::FindValue  cls=DynamicVector  sig=csp  renamed_refs=1  residual=- ====
int VectorClass_ptr_IsometricTileClass::FindValue(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->q010;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int*)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
}

// ==== BACKFILL 0x0040D250  DisplayClass::vt_entry_AC  cls=DisplayClass  sig=csp  renamed_refs=0  residual=- ====
void DisplayClass::vt_entry_AC(uint32_t unk) {}

// ==== BACKFILL 0x0040D300  nullsub_57  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void nullsub_57()
{
  ;
}

// ==== BACKFILL 0x0040E320  GenericNode::Constructor  cls=GenericNode  sig=csp  renamed_refs=1  residual=- ====
namespace gamemd { void* GenericNode::Constructor() {
{
      this->Previous = 0;
      this->q008 = 0;
      *this = &vt_GenericNode;
      return (ObjectClass *)this;
}
} }

// ==== BACKFILL 0x0040E340  LinkedList::Prepend  cls=LinkedList  sig=csp  renamed_refs=0  residual=- ====
int LinkedList::Prepend(int a2)
{
{
    int result;
    int v3;
    int v4;
    int v5;
    int v6;
    result = a2;
    if ( a2 )
  {
    v3 = *(int *)(a2 + 4);
    if ( v3 )
    {
    v4 = *(int *)(a2 + 8);
    if ( v4 )
      {
    *(int *)(v4 + 4) = v3;
    *(int *)(*(int *)(a2 + 4) + 8) = *(int *)(a2 + 8);
    *(int *)(a2 + 8) = 0;
    *(int *)(a2 + 4) = 0;
      }
    }
  }
    v5 = this->Tail;
    *(int *)(a2 + 8) = this;
    *(int *)(a2 + 4) = v5;
    v6 = this->Tail;
    if ( v6 )
    *(int *)(v6 + 8) = a2;
    this->Tail = a2;
    return result;
}
}

// ==== BACKFILL 0x0040E390  GenericNode::sub_40E390  cls=GenericNode  sig=csp  renamed_refs=0  residual=- ====
GenericNode * GenericNode::sub_40E390(char a2)
{
{
    GenericNode *v3;
    GenericNode *v4;
    *(void**)this = (GenericNode *)&vt_GenericNode;
    if ( this )
  {
    v3 = *(this + 1);
    if ( v3 )
    {
    v4 = *(this + 2);
    if ( v4 )
      {
    v4->Previous = v3;
    *(int *)(*(this + 1))[1].__pad_0 = *(this + 2);
    *(this + 2) = 0;
    *(this + 1) = 0;
      }
    }
  }
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (GenericNode *)this;
}
}

// ==== BACKFILL 0x0040E4A0  sub_40E4A0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
ObjectClass * sub_40E4A0(void ** Block, char a2)
{
{
    HashTable::DestroyHashTableINIClass(Block);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(Block);
    return (ObjectClass *)Block;
}
}
