// GENERATED step-6 backfill: completed bodies re-anchored to CSP canon
// member names (tools/csp_export/backfill_completed.py, mechanical).
// Reference substrate for RA2MCP step-6 rework; not compiled.

// ==== BACKFILL 0x00401000  AudioMixer::Init  cls=AudioMixer  sig=csp  renamed_refs=0  residual=- ====
int AudioMixer::Init()
{

  SetupSampleAudioMixer((int *)(&this->AudioMixer_field_00),(gamemd::ObjectClass *)(0x4000)); /*0x40100a*/
  SetupSampleAudioMixer((int *)this + 10,(gamemd::ObjectClass *)(100)); /*0x401019*/
  SetupSampleAudioMixer((int *)this + 20,(gamemd::ObjectClass *)(0x2000)); /*0x401028*/
  SetRateMixerSample((unsigned int *)this + 10, 10, 0x3E8u, 0); /*0x40103b*/
  SetRateMixerSample((unsigned int *)(this), 0x4000, 0x3E8u, 0); /*0x40104e*/
  SetRateMixerSample((unsigned int *)this + 20, 0x4000, 0x3E8u, 0); /*0x401061*/
  return EndBufferMixer((gamemd::VolumeStruct *)(&this->AudioMixer_field_00), 0x4000); /*0x40106d*/

}

// ==== BACKFILL 0x00401080  Audio::InitChannels  cls=Audio  sig=csp  renamed_refs=0  residual=- ====
int InitChannels()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00401080.json)
}

// ==== BACKFILL 0x004010C0  EndFrameAudioMixer  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int AudioMixer_EndFrame(int * a1, unsigned int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004010C0.json)
}

// ==== BACKFILL 0x00401170  ObjectClass::ClearFlags2  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::ClearFlags2() {
    *(unsigned int *)(char *)this = *(unsigned int *)(char *)this & ~2u; /*0x401179 vfptr+0 真值*/
    *(unsigned int *)((char *)this + 80) &= ~2u; /*0x401180 +0x50 真值*/
    *(unsigned int *)((char *)this + 40) &= ~2u; /*0x401188 +0x28 真值*/
    return -3; /*0x40118b*/
}

// ==== BACKFILL 0x004015C0  sub_4015C0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
unsigned int sub_4015C0(int a1, const void * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4015C0)
}

// ==== BACKFILL 0x004018C0  sub_4018C0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_4018C0(int a1, int a2, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004018C0.json)
}

// ==== BACKFILL 0x00401940  ObjectClass::GetMember06  cls=RawFileClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::GetMember06()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x401940)
}

// ==== BACKFILL 0x00401980  CCFileClass::Destru_vt08  cls=CCFileClass  sig=csp  renamed_refs=0  residual=- ====
int CCFileClass::Destru_vt08(int a2, int a3) {
  (*(void (**)(CCFileClass *, int))(*(unsigned int *)this + 8))(this, a2); /*0x40198c*/
  return (*(int (**)(CCFileClass *, int))(*(unsigned int *)this + 28))(this, a3); /*0x40199b*/
}

// ==== BACKFILL 0x004019A0  CCFileClass::Destru_vt00  cls=CCFileClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * CCFileClass::Destru_vt00(char a2) {
  /* X11: vtable install elided (implicit via CCFileClass virtuals 0x4019a6) */
  *((unsigned int *)this + 25) = 0; /*0x4019ac*/
  ((Vector *)((unsigned char *)this + 88))->Clear(); /*0x4019b3*/
  /* X11: vtable install elided (implicit via off_7E1668 virtuals 0x4019ba) */
  ((BufferIOFileClass *)this)->Dtor(); /*0x4019c0*/
  if ( (a2 & 1) != 0 ) /*0x4019ca*/
    RA2_OPDEL(this); /*0x4019cd*/
  return (unsigned int *)this; /*0x4019d7*/
}

// ==== BACKFILL 0x00401B00  sub_401B00  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void ObjectClass::sub_401B00(int * Block)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00401B00.json)
}

// ==== BACKFILL 0x00401F80  ?EnterCriticalRegionHelper_ContextBase_details_Concurrency__UAEHXZ  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int _EnterCriticalRegionHelper_ContextBase_details_Concurrency__UAEHXZ()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00401F80.json)
}

// ==== BACKFILL 0x00401FC0  sub_401FC0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::sub_401FC0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00401FC0.json)
}

// ==== BACKFILL 0x00402040  AudioController::Constructor  cls=AudioController  sig=csp  renamed_refs=0  residual=- ====
int * AudioController::Constructor()
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00402040.json)
}

// ==== BACKFILL 0x004022C0  AudioController::AdvanceQueue  cls=AudioController  sig=csp  renamed_refs=0  residual=- ====
int AudioController::AdvanceQueue()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004022C0.json)
}

// ==== BACKFILL 0x00402330  AudioController::UpdatePlayback  cls=AudioController  sig=csp  renamed_refs=0  residual=- ====
int AudioController::UpdatePlayback()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00402330.json)
}

// ==== BACKFILL 0x004023F0  AudioController::CleanupStream  cls=AudioController  sig=csp  renamed_refs=0  residual=- ====
int AudioController::CleanupStream()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004023F0.json)
}

// ==== BACKFILL 0x00402440  sub_402440  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void * ObjectClass::sub_402440(int a1, int a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00402440.json)
}

// ==== BACKFILL 0x00402550  AudioStream::Destructor  cls=AudioStream  sig=csp  renamed_refs=0  residual=- ====
void MouseClass::Destructor(unsigned int * Block)
{
    (void)Block;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00402550.json)
}

// ==== BACKFILL 0x004026C0  sub_4026C0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_4026C0()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004026C0.json)
}

// ==== BACKFILL 0x00402790  BindChannelAudioStream  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void AudioStream_BindChannel(unsigned int * a1, unsigned int * a2)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00402790.json)
}

// ==== BACKFILL 0x00402800  AudioStream::CheckFormatChanged  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int MouseClass::CheckFormatChanged(int a1, const void * a2)
{
    (void)a1; (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00402800.json)
}

// ==== BACKFILL 0x00402850  sub_402850  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_402850()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00402850.json)
}

// ==== BACKFILL 0x004028B0  AudioStream::InitListAndCounters  cls=AudioStream  sig=csp  renamed_refs=0  residual=- ====
int MouseClass::InitListAndCounters(void *a1_1)
{
    (void)a1_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004028B0.json)
}

// ==== BACKFILL 0x00402940  sub_402940  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_402940()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00402940.json)
}

// ==== BACKFILL 0x00402EF0  sub_402EF0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void sub_402EF0(int * Block)
{
    (void)Block;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00402EF0.json)
}

// ==== BACKFILL 0x00403490  ?GetSchedulerProxy_SchedulerBase_details_Concurrency__QBEPAUISchedulerProxy_3_XZ  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
struct Concurrency::ISchedulerProxy * E4Recv_403490::_GetSchedulerProxy_SchedulerBase_details_Concurrency__QBEPAUISchedulerProxy_3_XZ()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x403490)
}

// ==== BACKFILL 0x004034A0  ?GetIScheduler_SchedulerBase_details_Concurrency__QAEPAUIScheduler_3_XZ  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
struct Concurrency::IScheduler * E4Recv_4034A0::_GetIScheduler_SchedulerBase_details_Concurrency__QAEPAUIScheduler_3_XZ()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4034A0)
}

// ==== BACKFILL 0x00403530  AudioQueue::PreallocateChannels  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int AudioQueue::PreallocateChannels(unsigned int * a1, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x403530)
}

// ==== BACKFILL 0x004035B0  sub_4035B0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_4035B0(int a1, int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004035B0.json)
}

// ==== BACKFILL 0x004035D0  AudioQueue::IteratorNext  cls=AudioQueue  sig=csp  renamed_refs=0  residual=- ====
int * AudioQueue::IteratorNext()
{

  AudioQueue *v2; // ecx

  v2 = *(AudioQueue **)this->__pad_0; /*0x4035d3*/
  if ( v2 ) /*0x4035d7*/
    *(unsigned int *)this->__pad_0 = ((AudioQueue *)(v2))->GetNextAlt(); /*0x4035de*/
  return *(int **)this->__pad_0; /*0x4035e2*/

}

// ==== BACKFILL 0x004039C0  sub_4039C0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_4039C0(int a1, char * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004039C0.json)
}

// ==== BACKFILL 0x00404DD0  Audio::FlushChannel  cls=Audio  sig=csp  renamed_refs=0  residual=- ====
int FlushChannel(unsigned int ** Block)
{
    (void)Block; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00404DD0.json)
}

// ==== BACKFILL 0x00405130  sub_405130  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_405130()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00405130.json)
}

// ==== BACKFILL 0x00405140  sub_405140  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
double sub_405140()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00405140.json)
}

// ==== BACKFILL 0x00405160  sub_405160  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_405160()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00405160.json)
}

// ==== BACKFILL 0x00405170  VocClass::GetSampleName  cls=VocClass  sig=csp  renamed_refs=0  residual=- ====
void* VocClass::GetSampleName() {
  char *result; // eax
  result = aNoEvents; /*0x405177*/
  if ( g_AudioConfigState ) /*0x40517c*/
    return &this->Name; /*0x40517e*/
  return result; /*0x405181*/
}

// ==== BACKFILL 0x004052E0  sub_4052E0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_4052E0()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004052E0.json)
}

// ==== BACKFILL 0x004053E0  sub_4053E0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_4053E0()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004053E0.json)
}

// ==== BACKFILL 0x00405430  sub_405430  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_405430()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00405430.json)
}

// ==== BACKFILL 0x00405490  sub_405490  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::sub_405490()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x405490)
}

// ==== BACKFILL 0x004059F0  sub_4059F0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_4059F0()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004059F0.json)
}

// ==== BACKFILL 0x00405A00  sub_405A00  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_405A00()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00405A00.json)
}

// ==== BACKFILL 0x00405BE0  AudioController::Init  cls=AudioController  sig=csp  renamed_refs=0  residual=- ====
int AudioController::Init()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00405BE0.json)
}

// ==== BACKFILL 0x004060F0  SetAudioSource  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void SetAudioSource(AudioMixer * aP0, unsigned int * a1, int a3)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004060F0.json)
}

// ==== BACKFILL 0x00406170  VocClass::Check  cls=VocClass  sig=csp  renamed_refs=0  residual=- ====
int VocClass::Check() {
  if ( g_AudioConfigState && this->SamplesOK == (int)&dword_87E294 ) /*0x406180*/
    return this->Header.Magic; /*0x406182*/
  else
    return 0; /*0x406186*/
}

// ==== BACKFILL 0x004061D0  AudioMixer::PlayBuffer  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int AudioMixer::PlayBuffer(unsigned int * a1, unsigned int a2)
{

  int v2; // eax
  unsigned int *v4; // esi

  v2 = a2; /*0x4061d6*/
  if ( a1[7] == 3 ) /*0x4061d8*/
  {
    if ( a2 > 0x4000 ) /*0x4061e0*/
      v2 = 0x4000; /*0x4061e2*/
    return RequestBufferMixer((gamemd::VolumeStruct *)(a1 + 46), (unsigned int)(v2 * HIWORD(*(unsigned int *)(a1[9] + 28))) >> 14); /*0x406204*/
  }
  else
  {
    if ( a2 > 0x4000 ) /*0x40620f*/
      v2 = 0x4000; /*0x406211*/
    v4 = a1 + 46; /*0x40621f*/
    EndBufferMixer((gamemd::VolumeStruct *)(a1 + 46), (unsigned int)(v2 * HIWORD(*(unsigned int *)(a1[9] + 28))) >> 14); /*0x406236*/
    return ((AudioMixer*)v4)->PlaySample(); /*0x40623e*/
  }

}

// ==== BACKFILL 0x004062C0  sub_4062C0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_4062C0(unsigned int a2, int a3)
{
    (void)a2; (void)a3; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004062C0.json)
}

// ==== BACKFILL 0x00406310  sub_406310  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_406310::sub_406310()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x406310)
}

// ==== BACKFILL 0x004064A0  AbstractTypeClass::AddSampleVocClass  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int AbstractTypeClass::AddSampleVocClass()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004064A0.json)
}

// ==== BACKFILL 0x00406570  AbstractTypeClass::sub_406570  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int AbstractTypeClass::sub_406570()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00406570.json)
}

// ==== BACKFILL 0x004065F0  ObjectClass::sub_4065F0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int AbstractTypeClass::sub_4065F0(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004065F0.json)
}

// ==== BACKFILL 0x00406600  AbstractTypeClass::sub_406600  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int AbstractTypeClass::sub_406600()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00406600.json)
}

// ==== BACKFILL 0x00406610  AbstractTypeClass::sub_406610  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int AbstractTypeClass::sub_406610()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00406610.json)
}

// ==== BACKFILL 0x00406670  sub_406670  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int * sub_406670(void * a1, int a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x406670)
}

// ==== BACKFILL 0x004067D0  sub_4067D0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
bool sub_4067D0(char * a1, unsigned int * a2)
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004067D0.json)
}

// ==== BACKFILL 0x00406820  sub_406820  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
bool sub_406820(unsigned int * a1, char * a2)
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00406820.json)
}

// ==== BACKFILL 0x004068E0  Debug::Log  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int Debug::Log()
{

  int result; // eax

  return result; /*0x4068e0*/

}

// ==== BACKFILL 0x004068F0  Array::ForEach  cls=Array  sig=csp  renamed_refs=0  residual=- ====
int Array::ForEach(int a1, int a2, int a3, int (* a4)(int))
{

  int result; // eax
  int v6; // edi

  result = a3 - 1; /*0x4068f4*/
  if ( a3 - 1 >= 0 ) /*0x4068f5*/
  {
    v6 = a3; /*0x406907*/
    do /*0x406911*/
    {
      result = (int)(a4((int)a1));
      a1 = (int)((int *)((char *)a1 + a2)); /*0x40690e*/
      --v6; /*0x406910*/
    }
    while ( v6 ); /*0x406911*/
  }
  return result; /*0x406917*/

}

// ==== BACKFILL 0x00406D40  Audio::Shutdown  cls=Audio  sig=csp  renamed_refs=0  residual=- ====
void Shutdown(void *a1_1)
{
    (void)a1_1;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00406D40.json)
}

// ==== BACKFILL 0x00406F00  sub_406F00  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_406F00()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00406F00.json)
}

// ==== BACKFILL 0x00407000  Audio::IsSoundEnabled  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
BOOL Audio::IsSoundEnabled()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x407000)
}

// ==== BACKFILL 0x00407010  Audio::GetEnabled  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void * GetEnabled()
{
     return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00407010.json)
}

// ==== BACKFILL 0x00407060  sub_407060  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_407060::sub_407060()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x407060)
}

// ==== BACKFILL 0x00407070  Audio::GetFlag  cls=Audio  sig=csp  renamed_refs=0  residual=- ====
int GetFlag()
{
     return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00407070.json)
}

// ==== BACKFILL 0x00407100  SetupSampleAudioMixer  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int SetupSampleAudioMixer(int * a0, ObjectClass * aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00407100.json)
}

// ==== BACKFILL 0x00407150  EndBufferMixer  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int EndBufferMixer(VolumeStruct* volume, int scaledVolume)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00407150.json)
}

// ==== BACKFILL 0x00407160  sub_407160  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int ObjectClass::sub_407160()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00407160.json)
}

// ==== BACKFILL 0x00407170  RequestBufferMixer  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int RequestBufferMixer(VolumeStruct* volume, int rate)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00407170.json)
}

// ==== BACKFILL 0x004071A0  SetRateMixerSample  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int SetRateMixerSample(unsigned int * a0, int a2, unsigned int a3, ObjectClass * aP3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004071A0.json)
}

// ==== BACKFILL 0x004072B0  sub_4072B0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_4072B0::sub_4072B0()
{

  return (unsigned int)((unsigned int *)this)[0] >> 16; /*0x4072b6*/

}

// ==== BACKFILL 0x004073B0  SaveGame::CountLinkedList  cls=SaveGame  sig=csp  renamed_refs=0  residual=- ====
int SaveGame::CountLinkedList(void *a1_1)
{

  SaveGame *v1; // edx
  int result; // eax

  v1 = *(SaveGame **)this->__pad_0; /*0x4073b0*/
  for ( result = 0; v1 != this; ++result ) /*0x4073b6*/
    v1 = *(SaveGame **)v1->__pad_0; /*0x4073b8*/
  return result; /*0x4073bf*/

}

// ==== BACKFILL 0x004073C0  AudioQueue::GetNext  cls=AudioQueue  sig=csp  renamed_refs=0  residual=- ====
int AudioQueue::GetNext()
{

  int result; // eax

  if ( !this ) /*0x4073c2*/
    return 0; /*0x4073c2*/
  result = *(unsigned int *)this->__pad_0; /*0x4073c4*/
  if ( *(unsigned int *)this->__pad_0 ) /*0x4073c4*/
  {
    if ( result == *(unsigned int *)(result + 8) ) /*0x4073cd*/
      return 0; /*0x4073cf*/
  }
  return result; /*0x4073d1*/

}

// ==== BACKFILL 0x004073E0  AudioQueue::GetNextAlt  cls=AudioQueue  sig=csp  renamed_refs=0  residual=- ====
int AudioQueue::GetNextAlt()
{

  int result; // eax

  if ( !this ) /*0x4073e2*/
    return 0; /*0x4073e2*/
  result = *(unsigned int *)this->__pad_0; /*0x4073e4*/
  if ( *(unsigned int *)this->__pad_0 ) /*0x4073e4*/
  {
    if ( result == *(unsigned int *)(result + 8) ) /*0x4073ed*/
      return 0; /*0x4073ef*/
  }
  return result; /*0x4073f1*/

}

// ==== BACKFILL 0x00407420  InsertAfterDListNode  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int DListNode_InsertAfter(int a1, unsigned int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00407420.json)
}

// ==== BACKFILL 0x00407440  InsertBeforeLinkedList  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int LinkedList_InsertBefore(int * a1, int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00407440.json)
}

// ==== BACKFILL 0x00407450  LinkedList_flat::Init  cls=LinkedList  sig=csp  renamed_refs=0  residual=- ====
int LinkedList_flat::Init(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{

  int result; // eax

  *(unsigned int *)(&this->Tail)[0] = *(unsigned int *)this->__pad_0; /*0x407455*/
  result = *(unsigned int *)this->__pad_0; /*0x407457*/
  *(unsigned int *)(*(unsigned int *)this->__pad_0 + 4) = (&this->Tail)[0]; /*0x40745c*/
  *(unsigned int *)this->__pad_0 = (unsigned int)(this); /*0x40745f*/
  (&this->Tail)[0] = (int)this; /*0x407461*/
  return result; /*0x407464*/

}

// ==== BACKFILL 0x00407510  VtableStub::Push_407510  cls=VtableStub  sig=csp  renamed_refs=0  residual=- ====
void VtableStub::Push_407510(void * Block)
{
}

// ==== BACKFILL 0x00407520  LinkedList_flat::Next  cls=LinkedList  sig=csp  renamed_refs=0  residual=- ====
int * LinkedList_flat::Next()
{

  int *result; // eax
  int v2; // edx

  result = *(int **)this->__pad_0; /*0x407520*/
  if ( *(unsigned int *)this->__pad_0 ) /*0x407520*/
  {
    v2 = *result; /*0x407527*/
    *(unsigned int *)this->__pad_0 = v2; /*0x40752c*/
    result += 2; /*0x407529*/
  }
  return result; /*0x407526*/

}

// ==== BACKFILL 0x00407530  PushFrontLinkedListAlt  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int LinkedList_PushFront_Alt(unsigned int * a1, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00407530.json)
}

// ==== BACKFILL 0x00407680  StartAddress  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
DWORD StartAddress(unsigned int * lpThreadParameter)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00407680.json)
}

// ==== BACKFILL 0x00407860  AudioStream::Constructor  cls=AudioStream  sig=csp  renamed_refs=0  residual=- ====
char * MouseClass::Constructor(uint64_t)
{
    (void)uint64_t; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00407860.json)
}

// ==== BACKFILL 0x00407F80  sub_407F80  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_407F80()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00407F80.json)
}

// ==== BACKFILL 0x00408000  AudioMixer::ProcessAudioFrame  cls=AudioMixer  sig=csp  renamed_refs=0  residual=u32_80 ====
void AudioMixer::ProcessAudioFrame() {
  int v2; // eax
  int AudioMixer_field_0C; // eax

  if ( this->u32_80 ) /*0x408003*/
  {
    v2 = this->u32_80 - 1; /*0x408013*/
    this->u32_80 = v2; /*0x408016*/
    if ( v2 < 0 ) /*0x40801c*/
      this->u32_80 = 0; /*0x40801e*/
    if ( !this->u32_80 && this->AudioMixer_field_14 ) /*0x408032*/
    {
      EnterCriticalSection((LPCRITICAL_SECTION)((unsigned char *)&stru_87E790 + 0x68)); /*0x40803e (0x5C+12)*/
      AudioMixer_field_0C = this->AudioMixer_field_0C; /*0x408044*/
      if ( (AudioMixer_field_0C & 2) != 0 ) /*0x408049*/
      {
        (AudioMixer_field_0C) = ((AudioMixer_field_0C) & ~0xFF) | ((AudioMixer_field_0C & 0xFC | 1) & 0xFF); /*0x40804d*/
        this->AudioMixer_field_0C = AudioMixer_field_0C; /*0x40804f*/
      }
      ((AudioChannel*)(AudioChannel *)this->AudioMixer_field_14)->ActivatePlay(); /*0x408055*/
      LeaveCriticalSection((LPCRITICAL_SECTION)((unsigned char *)&stru_87E790 + 0x68)); /*0x40805f (0x5C+12)*/
    }
  }
}

// ==== BACKFILL 0x00408080  SetAudioFileName  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char * SetAudioFileName(int a1, const char * a2)
{
  char *result; // eax

  result = strncpy((char *)(a1 + 164), a2, 0x50u); /*0x40808d*/
  *(unsigned char *)(a1 + 243) = 0; /*0x408095*/
  return result; /*0x40809c*/
}

// ==== BACKFILL 0x004080A0  sub_4080A0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
char * E4Recv_4080A0::sub_4080A0()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4080A0)
}

// ==== BACKFILL 0x004080B0  sub_4080B0  cls=UnitTypeClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_4080B0::sub_4080B0()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4080B0)
}

// ==== BACKFILL 0x00408410  sub_408410  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_408410()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00408410.json)
}

// ==== BACKFILL 0x00408460  sub_408460  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * ObjectClass::sub_408460(size_t Size)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00408460.json)
}

// ==== BACKFILL 0x00408500  sub_408500  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_408500(int a1, unsigned int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00408500.json)
}

// ==== BACKFILL 0x00408520  AudioController::GetOffset  cls=AudioController  sig=csp  renamed_refs=0  residual=- ====
int AudioController::GetOffset() {
    return ((gamemd::Queue *)&this->AudioController_field_08)->GetNext();
}

// ==== BACKFILL 0x00408530  nullsub_2  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void nullsub_2()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00408530.json)
}

// ==== BACKFILL 0x004085A0  Struct::ZeroInit32  cls=Struct  sig=csp  renamed_refs=0  residual=- ====
int Struct::ZeroInit32()
{

  memset(this, 0, 0x20u); /*0x4085aa*/
  return 0; /*0x4085ac*/

}

// ==== BACKFILL 0x004085B0  sub_4085B0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_4085B0()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004085B0.json)
}

// ==== BACKFILL 0x004085E0  sub_4085E0  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
void sub_4085E0(unsigned int * a1, int a2, int a3)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004085E0.json)
}

// ==== BACKFILL 0x00408A70  AudioMixer::SetupChannels  cls=AudioMixer  sig=csp  renamed_refs=0  residual=- ====
int AudioMixer::SetupChannels() {
  AudioMixer *AudioMixer_field_04; // edi
  int v2; // ebx
  AudioMixer *v3; // eax
  int *p_AudioMixer_field_0C; // edx
  int v5; // esi
  AudioMixer *v6; // esi
  int v7; // edx
  AudioMixer *v8; // eax
  int result; // eax

  AudioMixer_field_04 = (AudioMixer *)this->AudioMixer_field_04; /*0x408a7c*/
  if ( AudioMixer_field_04 == (AudioMixer *)&this->AudioMixer_field_04 ) /*0x408a81*/
  {
    AudioMixer_field_04 = 0; /*0x408a85*/
  }
  else
  {
    v2 = 0; /*0x408a89*/
    if ( AudioMixer_field_04 ) /*0x408a8d*/
    {
      v3 = (AudioMixer *)this->AudioMixer_field_04; /*0x408a8f*/
      do /*0x408ab2*/
      {
        p_AudioMixer_field_0C = (int *)(&v3[1].AudioMixer_field_0C); /*0x408a91*/
        v5 = 2; /*0x408a94*/
        do /*0x408aa8*/
        {
          *(p_AudioMixer_field_0C - 1) = v3[1].AudioMixer_field_00; /*0x408a9c*/
          *p_AudioMixer_field_0C = v3[1].AudioMixer_field_04; /*0x408aa2*/
          p_AudioMixer_field_0C += 2; /*0x408aa4*/
          --v5; /*0x408aa7*/
        }
        while ( v5 ); /*0x408aa8*/
        v3[2].AudioMixer_field_04 = v2; /*0x408aaa*/
        v3 = (AudioMixer *)v3->AudioMixer_field_00; /*0x408aad*/
        ++v2; /*0x408aaf*/
      }
      while ( v3 != (AudioMixer *)&this->AudioMixer_field_04 ); /*0x408ab2*/
    }
  }
  v6 = (AudioMixer *)((char *)this + 76); /*0x408aba*/
  v7 = 2; /*0x408abd*/
  v8 = (AudioMixer *)((char *)this + 76); /*0x408ac2*/
  do /*0x408afe*/
  {
    v8[-1].AudioMixer_field_0C = (int)AudioMixer_field_04; /*0x408ac4*/
    v8->AudioMixer_field_00 = -1001; /*0x408ac7*/
    v8->AudioMixer_field_04 = v8->AudioMixer_field_00; /*0x408acf*/
    v8[-1].AudioMixer_field_14 = 0; /*0x408ad4*/
    v8[-1].AudioMixer_field_10 = 0; /*0x408ad7*/
    v8[-2].AudioMixer_field_08 = (int)AudioMixer_field_04; /*0x408ada*/
    if ( AudioMixer_field_04 ) /*0x408add*/
      v8[-2].AudioMixer_field_00 = *(&AudioMixer_field_04[1].AudioMixer_field_08 + 2 * v8[-2].AudioMixer_field_10); /*0x408ae6*/
    else
      v8[-2].AudioMixer_field_00 = 0; /*0x408aeb*/
    v8[-2].AudioMixer_field_04 = 0; /*0x408aee*/
    v8[-2].AudioMixer_field_0C &= ~1u; /*0x408af7*/
    v8 = (AudioMixer *)((char *)v8 + 64); /*0x408afa*/
    --v7; /*0x408afd*/
  }
  while ( v7 ); /*0x408afe*/
  result = v6->AudioMixer_field_00 + this->AudioMixer_field_14; /*0x408b05*/
  v6->AudioMixer_field_00 = result; /*0x408b07*/
  return result; /*0x408b09*/
}

// ==== BACKFILL 0x00408B10  sub_408B10  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
char sub_408B10(unsigned int * a1, int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00408B10.json)
}

// ==== BACKFILL 0x00408B40  sub_408B40  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_408B40(unsigned int * a1, int a2, int a3, size_t Size)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00408B40.json)
}

// ==== BACKFILL 0x00408D30  sub_408D30  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_408D30::sub_408D30()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x408D30)
}

// ==== BACKFILL 0x00408D40  sub_408D40  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_408D40::sub_408D40()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x408D40)
}

// ==== BACKFILL 0x00408EC0  sub_408EC0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_408EC0::sub_408EC0()
{

  return ((unsigned int *)this)[0]; /*0x408ec3*/

}

// ==== BACKFILL 0x00408ED0  sub_408ED0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_408ED0::sub_408ED0()
{

  return ((unsigned int *)this)[0]; /*0x408ed3*/

}

// ==== BACKFILL 0x00408EE0  BufferedAudioStreamRead  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int BufferedAudioStreamRead(AudioStream * a1, AudioStream * a2, signed int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00408EE0.json)
}

// ==== BACKFILL 0x004090F0  sub_4090F0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_4090F0::sub_4090F0()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4090F0)
}

// ==== BACKFILL 0x00409330  sub_409330  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int E4Recv_409330::sub_409330()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x409330)
}

// ==== BACKFILL 0x00409360  sub_409360  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int sub_409360()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00409360.json)
}

// ==== BACKFILL 0x004093B0  Audio::Callback  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
int Callback()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004093B0.json)
}

// ==== BACKFILL 0x00409470  sub_409470  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_409470()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00409470.json)
}

// ==== BACKFILL 0x0040A2D0  sub_40A2D0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
int sub_40A2D0()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040A2D0.json)
}

// ==== BACKFILL 0x0040A7A0  Audio::GetDirectSound  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
LPDIRECTSOUND GetDirectSound()
{
     return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x0040A7A0.json)
}

// ==== BACKFILL 0x0040ACD0  MoveCoordByDirection  cls=unknown  sig=csp  renamed_refs=0  residual=- ====
short Coord_MoveByDirection(unsigned char a1, int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040ACD0.json)
}

// ==== BACKFILL 0x0040AFD0  Array::ForEachReverse  cls=Array  sig=csp  renamed_refs=0  residual=- ====
int Array::ForEachReverse(ObjectClass * aP0, int a2, int a3, int (* a4)(int))
{

  char *v4; // esi
  int result; // eax
  int v6; // edi

  v4 = (char *)aP0 + a3 * a2; /*0x40afe3*/
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

// ==== BACKFILL 0x0040B010  sub_40B010  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void ** ObjectClass::sub_40B010(void ** Block, char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040B010.json)
}

// ==== BACKFILL 0x0040B180  VectorClass::Release  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
char VectorClass_flat::Release(int a2, char * a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040B180.json)
}

// ==== BACKFILL 0x0040B270  VectorClass::Cleanup5  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
void VectorClass_flat::Cleanup5()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040B270.json)
}

// ==== BACKFILL 0x0040B2A0  VectorClass::GetSize  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
int  VectorClass_flat::GetSize(unsigned int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040B2A0.json)
}

// ==== BACKFILL 0x0040B2E0  VectorClass::GetCapacity  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int VectorClass_flat::GetCapacity(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040B2E0.json)
}

// ==== BACKFILL 0x0040B300  VectorClass::QueryInterface  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
VectorClass_flat *  VectorClass_flat::QueryInterface(unsigned int * Block, char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040B300.json)
}

// ==== BACKFILL 0x0040BD00  EventClass::resetEvent  cls=EventClass  sig=csp  renamed_refs=0  residual=- ====
unsigned int * EventClass::resetEvent(int aP1, int aP2)
{

  this->EventClass_field_0x4 = 0; /*0x40bd0b*/
  this->q008 = (void *)aP1; /*0x40bd0e*/
  (this->EventClass_field_0xC) = ((this->EventClass_field_0xC) & ~0xFF) | ((1) & 0xFF); /*0x40bd11*/
  (this->EventClass_field_0xC) = ((this->EventClass_field_0xC) & ~(0xFF << 8)) | (((0) & 0xFF) << 8); /*0x40bd15*/
  this->EventClass_field_0x0 = (int)&vt_VectorClass; /*0x40bd18*/
  if ( aP1 ) /*0x40bd1e*/
  {
    if ( aP2 ) /*0x40bd26*/
    {
      this->EventClass_field_0x4 = (unsigned int)((void *)aP2); /*0x40bd28*/
      return &this->EventClass_field_0x0; /*0x40bd2e*/
    }
    this->EventClass_field_0x4 = (unsigned int)((void *)__2_YAPAXI_Z(4 * aP1)); /*0x40bd3d*/
    (this->EventClass_field_0xC) = ((this->EventClass_field_0xC) & ~(0xFF << 8)) | (((1) & 0xFF) << 8); /*0x40bd40*/
  }
  return &this->EventClass_field_0x0; /*0x40bd2d*/

}

// ==== BACKFILL 0x0040CC00  VectorClass_ptr_IsometricTileClass::GetItem  cls=LogicClass  sig=csp  renamed_refs=0  residual=- ====
int VectorClass_flat::GetItem()
{
     return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x0040CC00.json)
}

// ==== BACKFILL 0x0040CC10  GenericVector::StubReturnFalse  cls=LogicClass  sig=csp  renamed_refs=0  residual=- ====
void GenericVector::StubReturnFalse()
{
}

// ==== BACKFILL 0x0040CC20  VectorClass_ptr_IsometricTileClass::Constructor_VectorClass_ObjectClass___  cls=LogicClass  sig=csp  renamed_refs=0  residual=- ====
LogicClass * VectorClass_flat::Constructor_VectorClass_ObjectClass___(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040CC20.json)
}

// ==== BACKFILL 0x0040CC70  VectorClass_ptr_IsometricTileClass::TryFreeAndClear  cls=DynamicVector  sig=csp  renamed_refs=0  residual=- ====
void VectorClass_flat::TryFreeAndClear()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040CC70.json)
}

// ==== BACKFILL 0x0040CCA0  VectorClass_ptr_IsometricTileClass::GetPtrOffset  cls=DynamicVector  sig=csp  renamed_refs=0  residual=- ====
unsigned int VectorClass_flat::GetPtrOffset(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040CCA0.json)
}

// ==== BACKFILL 0x0040CCC0  VectorClass::GetAt  cls=VectorClass  sig=csp  renamed_refs=0  residual=- ====
int VectorClass_flat::GetAt(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x40CCC0)
}

// ==== BACKFILL 0x0040CF00  VectorClass_ptr_IsometricTileClass::FindValue  cls=DynamicVector  sig=csp  renamed_refs=0  residual=- ====
int VectorClass_flat::FindValue(unsigned int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040CF00.json)
}

// ==== BACKFILL 0x0040D250  DisplayClass::vt_entry_AC  cls=DisplayClass  sig=csp  renamed_refs=0  residual=- ====
void DisplayClass::vt_entry_AC() {
    ; /*0x40d250*/
}

// ==== BACKFILL 0x0040D300  nullsub_57  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
void ObjectClass::nullsub_57()
{

  ; /*0x40d300*/

}

// ==== BACKFILL 0x0040DCB0  AbstractType::FindName  cls=AbstractType  sig=csp  renamed_refs=0  residual=- ====
char * AbstractType::FindName()
{

  int v1; // edx
  AbstractType **v2; // eax

  v1 = 0; /*0x40dcb0*/
  v2 = (AbstractType **)dword_816EE4; /*0x40dcb2*/
  while ( *v2 != this ) /*0x40dcb9*/
  {
    v2 += 2; /*0x40dcbb*/
    ++v1; /*0x40dcbe*/
    if ( (int)v2 >= (int)&off_817134 ) /*0x40dcc4*/
      return (char *)&dword_817130; /*0x40dccb*/
  }
  return (char *)((&off_816EE0)[2 * v1]);

}

// ==== BACKFILL 0x0040E320  GenericNode::Constructor  cls=GenericNode  sig=csp  renamed_refs=0  residual=- ====
void* GenericNode::Constructor() {
  this->Previous = 0; /*0x40e324*/
  *(unsigned int *)&this->__pad_0 = (unsigned int)(void *)&vt_GenericNode; /*0x40e32a*/
  return this; /*0x40e330*/
}

// ==== BACKFILL 0x0040E340  LinkedList_flat::Prepend  cls=LinkedList  sig=csp  renamed_refs=0  residual=- ====
int LinkedList_flat::Prepend(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x40E340)
}

// ==== BACKFILL 0x0040E390  GenericNode::sub_40E390  cls=GenericNode  sig=csp  renamed_refs=0  residual=- ====
GenericNode * GenericNode::sub_40E390(GenericNode ** Block, char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040E390.json)
}

// ==== BACKFILL 0x0040E4A0  sub_40E4A0  cls=ObjectClass  sig=csp  renamed_refs=0  residual=- ====
ObjectClass *  ObjectClass::sub_40E4A0(void ** Block, char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0040E4A0.json)
}
