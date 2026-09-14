// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x407450
int LinkedList::Init()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall LinkedList_Init(_DWORD **this)
{
  int result; // eax

  **(this + 1) = *this; /*0x407455*/
  result = (int)*this; /*0x407457*/
  (*this)[1] = *(this + 1); /*0x40745c*/
  *this = this; /*0x40745f*/
  *(this + 1) = this; /*0x407461*/
  return result; /*0x407464*/
}
}

// 0x4791F0
char LinkedList::LoadScenarioMixFiles(INIClass * aP0, int aP2, int a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char LinkedList::LoadScenarioMixFiles(INIClass *aP0, int aP2, int a3, int a4)
{
  CD *v4; // ecx
  CD *v5; // esi
  IUnknown *v6; // eax
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  INIClass *v10; // edi
  _DWORD *v11; // eax
  _DWORD *v12; // eax
  _DWORD *v13; // eax
  _DWORD *v14; // eax
  CCFileClass *v15; // eax
  char v16; // bl
  _DWORD *v17; // eax
  _DWORD *v18; // eax
  CCFileClass *v19; // eax
  char v20; // bl
  _DWORD *v21; // eax
  MixFileClass Buffer; // [esp+24h] [ebp-ACh] BYREF
  void **v23; // [esp+64h] [ebp-6Ch] BYREF
  _DWORD v24[21]; // [esp+68h] [ebp-68h] BYREF
  _BYTE v25[4]; // [esp+BCh] [ebp-14h] BYREF
  _BYTE v26[8]; // [esp+C0h] [ebp-10h] BYREF
  int v27; // [esp+C8h] [ebp-8h]
  int v28; // [esp+CCh] [ebp-4h]

  v5 = v4; /*0x479201*/
  Debug::Log(); /*0x479208*/
  if ( *(_DWORD *)&v5[1] == -1 ) /*0x479216*/
  {
    v6 = dword_A83D14; /*0x479218*/
    if ( dword_A83D14 == (IUnknown *)-1 ) /*0x479220*/
      v6 = dword_A83D18; /*0x479222*/
    v5[1] = (CD)v6; /*0x479227*/
  }
  Theme::Stop(&g_BuildingTypeClass_Count, 0); /*0x479232*/
  if ( *(_DWORD *)&stru_87C374.__pad_579C[13084] ) /*0x47923e*/
  {
    Debug::Log(); /*0x479249*/
    if ( *(_DWORD *)&stru_87C374.__pad_579C[13084] ) /*0x479259*/
      (***(void (__thiscall ****)(_DWORD, int))&stru_87C374.__pad_579C[13084])( /*0x47925f*/
        *(_DWORD *)&stru_87C374.__pad_579C[13084],
        1);
    *(_DWORD *)&stru_87C374.__pad_579C[13084] = 0; /*0x479261*/
  }
  if ( *(_DWORD *)&stru_87C374.__pad_14B0[3860] ) /*0x47926e*/
  {
    Debug::Log(); /*0x479279*/
    if ( *(_DWORD *)&stru_87C374.__pad_14B0[3860] ) /*0x479289*/
      (***(void (__thiscall ****)(_DWORD, int))&stru_87C374.__pad_14B0[3860])( /*0x47928f*/
        *(_DWORD *)&stru_87C374.__pad_14B0[3860],
        1);
    *(_DWORD *)&stru_87C374.__pad_14B0[3860] = 0; /*0x479291*/
  }
  if ( *(_DWORD *)&stru_87C374.__pad_579C[13004] ) /*0x47929e*/
  {
    Debug::Log(); /*0x4792a9*/
    if ( *(_DWORD *)&stru_87C374.__pad_579C[13004] ) /*0x4792b9*/
      (***(void (__thiscall ****)(_DWORD, int))&stru_87C374.__pad_579C[13004])( /*0x4792bf*/
        *(_DWORD *)&stru_87C374.__pad_579C[13004],
        1);
    *(_DWORD *)&stru_87C374.__pad_579C[13004] = 0; /*0x4792c1*/
  }
  if ( *(_DWORD *)&stru_87C374.__pad_579C[13000] ) /*0x4792ce*/
  {
    Debug::Log(); /*0x4792d9*/
    if ( *(_DWORD *)&stru_87C374.__pad_579C[13000] ) /*0x4792e9*/
      (***(void (__thiscall ****)(_DWORD, int))&stru_87C374.__pad_579C[13000])( /*0x4792ef*/
        *(_DWORD *)&stru_87C374.__pad_579C[13000],
        1);
    *(_DWORD *)&stru_87C374.__pad_579C[13000] = 0; /*0x4792f1*/
  }
  if ( *(_DWORD *)&stru_87C374.__pad_579C[13140] ) /*0x4792fe*/
  {
    Debug::Log(); /*0x479309*/
    if ( *(_DWORD *)&stru_87C374.__pad_579C[13140] ) /*0x479319*/
      (***(void (__thiscall ****)(_DWORD, int))&stru_87C374.__pad_579C[13140])( /*0x47931f*/
        *(_DWORD *)&stru_87C374.__pad_579C[13140],
        1);
    *(_DWORD *)&stru_87C374.__pad_579C[13140] = 0; /*0x479321*/
  }
  if ( *(_DWORD *)&stru_87C374.__pad_579C[13136] ) /*0x47932e*/
  {
    Debug::Log(); /*0x479339*/
    if ( *(_DWORD *)&stru_87C374.__pad_579C[13136] ) /*0x479349*/
      (***(void (__thiscall ****)(_DWORD, int))&stru_87C374.__pad_579C[13136])( /*0x47934f*/
        *(_DWORD *)&stru_87C374.__pad_579C[13136],
        1);
    *(_DWORD *)&stru_87C374.__pad_579C[13136] = 0; /*0x479351*/
  }
  if ( *(_DWORD *)&stru_87C374.__pad_579C[13092] ) /*0x47935e*/
  {
    Debug::Log(); /*0x479369*/
    if ( *(_DWORD *)&stru_87C374.__pad_579C[13092] ) /*0x479379*/
      (***(void (__thiscall ****)(_DWORD, int))&stru_87C374.__pad_579C[13092])( /*0x47937f*/
        *(_DWORD *)&stru_87C374.__pad_579C[13092],
        1);
    *(_DWORD *)&stru_87C374.__pad_579C[13092] = 0; /*0x479381*/
  }
  if ( !Map_Load_751C30() ) /*0x479387*/
    return 1; /*0x47939b*/
  v8 = (_DWORD *)__2_YAPAXI_Z(0x28u); /*0x4793a0*/
  if ( v8 ) /*0x4793aa*/
    v9 = MixFileClass::FromFile( /*0x4793b8*/
           v8,
           (MixFileClass *)stru_81C2C4.customSound_controller,
           (int)&stru_87C374.__pad_579C[20080]);
  else
    v9 = 0; /*0x4793bf*/
  *(_DWORD *)&stru_87C374.__pad_579C[13092] = v9; /*0x4793c1*/
  Debug::Log(); /*0x4793cf*/
  v10 = (INIClass *)&aP0->__pad_0[1]; /*0x4793d4*/
  sprintf(Buffer.__pad_0, (ObjectClass *)&stru_81C2C4.owningHouseIndex, (INIClass *)&aP0->__pad_0[1]); /*0x4793e7*/
  Debug::Log(); /*0x4793f6*/
  v11 = (_DWORD *)__2_YAPAXI_Z(0x28u); /*0x4793fd*/
  if ( v11 ) /*0x479407*/
    *(_DWORD *)&stru_87C374.__pad_579C[13136] = MixFileClass::FromFile( /*0x47941a*/
                                                  v11,
                                                  &Buffer,
                                                  (int)&stru_87C374.__pad_579C[20080]);
  else
    *(_DWORD *)&stru_87C374.__pad_579C[13136] = 0; /*0x479421*/
  sprintf(Buffer.__pad_0, &stru_81C2C4, v10); /*0x479432*/
  Debug::Log(); /*0x479441*/
  v12 = (_DWORD *)__2_YAPAXI_Z(0x28u); /*0x479448*/
  if ( !v12 ) /*0x479452*/
  {
    *(_DWORD *)&stru_87C374.__pad_579C[13140] = 0; /*0x479489*/
LABEL_61:
    Debug::Log(); /*0x479664*/
    return 0; /*0x47967c*/
  }
  *(_DWORD *)&stru_87C374.__pad_579C[13140] = MixFileClass::FromFile(v12, &Buffer, (int)&stru_87C374.__pad_579C[20080]); /*0x479467*/
  if ( !*(_DWORD *)&stru_87C374.__pad_579C[13140] ) /*0x47946c*/
    goto LABEL_61; /*0x47946c*/
  Debug::Log(); /*0x479496*/
  v13 = (_DWORD *)__2_YAPAXI_Z(0x28u); /*0x47949d*/
  if ( v13 ) /*0x4794a7*/
    *(_DWORD *)&stru_87C374.__pad_579C[13000] = MixFileClass::FromFile( /*0x4794ba*/
                                                  v13,
                                                  (MixFileClass *)&stru_81C200.hasParachute,
                                                  (int)&stru_87C374.__pad_579C[20080]);
  else
    *(_DWORD *)&stru_87C374.__pad_579C[13000] = 0; /*0x4794c1*/
  Debug::Log(); /*0x4794cc*/
  v14 = (_DWORD *)__2_YAPAXI_Z(0x28u); /*0x4794d3*/
  if ( !v14 ) /*0x4794dd*/
  {
    *(_DWORD *)&stru_87C374.__pad_579C[13004] = 0; /*0x479514*/
    goto LABEL_61; /*0x47951a*/
  }
  *(_DWORD *)&stru_87C374.__pad_579C[13004] = MixFileClass::FromFile( /*0x4794f2*/
                                                v14,
                                                (MixFileClass *)&stru_81C200.customSound_controller[2],
                                                (int)&stru_87C374.__pad_579C[20080]);
  if ( !*(_DWORD *)&stru_87C374.__pad_579C[13004] ) /*0x4794f7*/
    goto LABEL_61; /*0x4794f7*/
  v15 = CCFileClass::Construct(&v23, (char *)&stru_81C200.ambientSoundController[4]); /*0x479526*/
  v16 = (*(int (__thiscall **)(CCFileClass *, _DWORD))(*(_DWORD *)v15->__pad_0 + 20))(v15, 0); /*0x47953f*/
  v24[0] = &vt_CCFileClass; /*0x479541*/
  v28 = 0; /*0x479545*/
  Vector::Clear((int)v26); /*0x47954c*/
  v24[0] = &off_7E1668; /*0x47955a*/
  BufferIOFileClass::Dtor(v24); /*0x47955e*/
  if ( v16 ) /*0x47956a*/
  {
    Debug::Log(); /*0x47956c*/
    v17 = (_DWORD *)__2_YAPAXI_Z(0x28u); /*0x479573*/
    if ( v17 ) /*0x47957d*/
    {
      *(_DWORD *)&stru_87C374.__pad_14B0[3860] = MixFileClass::FromFile( /*0x479590*/
                                                   v17,
                                                   (MixFileClass *)&stru_81C200.ambientSoundController[4],
                                                   (int)&stru_87C374.__pad_579C[20080]);
      goto LABEL_58; /*0x479595*/
    }
  }
  else
  {
    Debug::Log(); /*0x479597*/
    v18 = (_DWORD *)__2_YAPAXI_Z(0x28u); /*0x47959e*/
    if ( v18 ) /*0x4795a8*/
    {
      *(_DWORD *)&stru_87C374.__pad_14B0[3860] = MixFileClass::FromFile( /*0x4795bb*/
                                                   v18,
                                                   (MixFileClass *)&stru_81C200.NeedsSaveOrLink,
                                                   (int)&stru_87C374.__pad_579C[20080]);
      goto LABEL_58; /*0x4795c0*/
    }
  }
  *(_DWORD *)&stru_87C374.__pad_14B0[3860] = 0; /*0x4795c2*/
LABEL_58:
  Audio::LoadWAVFiles(&g_BuildingTypeClass_Count); /*0x4795c8*/
  sprintf((char *const)&Buffer.Previous, (ObjectClass *)&stru_81C200.uniqueId, (INIClass *)aP2); /*0x4795e4*/
  v19 = CCFileClass::Construct(v24, (char *)&Buffer.Previous); /*0x4795f5*/
  v20 = (*(int (__thiscall **)(CCFileClass *, _DWORD))(*(_DWORD *)v19->__pad_0 + 20))(v19, 0); /*0x479609*/
  v23 = &vt_CCFileClass; /*0x47960b*/
  v27 = 0; /*0x47960f*/
  Vector::Clear((int)v25); /*0x479616*/
  v23 = (void **)&off_7E1668; /*0x47961f*/
  BufferIOFileClass::Dtor(&v23); /*0x479623*/
  if ( v20 ) /*0x47962b*/
  {
    Debug::Log(); /*0x479637*/
    v21 = (_DWORD *)__2_YAPAXI_Z(0x28u); /*0x47963e*/
    if ( v21 ) /*0x479648*/
      goto LABEL_60; /*0x479648*/
LABEL_63:
    *(_DWORD *)&stru_87C374.__pad_579C[13084] = 0; /*0x4796bf*/
    goto LABEL_61; /*0x4796c5*/
  }
  sprintf(Buffer.__pad_0, &stru_81C200, v10); /*0x479691*/
  Debug::Log(); /*0x4796a0*/
  v21 = (_DWORD *)__2_YAPAXI_Z(0x28u); /*0x4796a7*/
  if ( !v21 ) /*0x4796b1*/
    goto LABEL_63; /*0x4796b1*/
LABEL_60:
  *(_DWORD *)&stru_87C374.__pad_579C[13084] = MixFileClass::FromFile(v21, &Buffer, (int)&stru_87C374.__pad_579C[20080]); /*0x47964a*/
  if ( !*(_DWORD *)&stru_87C374.__pad_579C[13084] ) /*0x479662*/
    goto LABEL_61; /*0x479662*/
  return Map_Load_751C30(); /*0x479390*/
}
}

// 0x556600
void * LinkedList::MoveNode(void * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void *__thiscall LinkedList_MoveNode(void *this, void *a2)
{
  if ( a2 != this ) /*0x55660a*/
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 36))(this); /*0x55660e*/
    (*(void (__thiscall **)(void *, void *))(*(_DWORD *)this + 12))(this, a2); /*0x556616*/
  }
  return this; /*0x55661b*/
}
}

// 0x556640
unsigned int * LinkedList::FindPrev()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall LinkedList_FindPrev(_DWORD *this)
{
  _DWORD *v1; // edx
  _DWORD *result; // eax

  v1 = this + 2; /*0x556643*/
  if ( !*(this + 2) ) /*0x556640*/
    return this; /*0x55665d*/
  do /*0x556651*/
  {
    result = (_DWORD *)*v1; /*0x55664b*/
    if ( (_DWORD *)*v1 == this ) /*0x55664f*/
      break; /*0x55664f*/
    v1 = result + 2; /*0x556654*/
  }
  while ( result[2] ); /*0x556651*/
  return result; /*0x55665b*/
}
}

// 0x556670
unsigned int * LinkedList::FindNext()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall LinkedList_FindNext(_DWORD *this)
{
  _DWORD *v1; // edx
  _DWORD *result; // eax

  v1 = this + 1; /*0x556673*/
  if ( !*(this + 1) ) /*0x556670*/
    return this; /*0x55668d*/
  do /*0x556681*/
  {
    result = (_DWORD *)*v1; /*0x55667b*/
    if ( (_DWORD *)*v1 == this ) /*0x55667f*/
      break; /*0x55667f*/
    v1 = result + 1; /*0x556684*/
  }
  while ( result[1] ); /*0x556681*/
  return result; /*0x55668b*/
}
}

// 0x5566A0
int LinkedList::InsertAfter(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall LinkedList_InsertAfter(_DWORD *this, int a2)
{
  int v3; // eax

  (*(void (__thiscall **)(_DWORD *))(*this + 36))(this); /*0x5566a5*/
  v3 = *(_DWORD *)(a2 + 4); /*0x5566ac*/
  *(_DWORD *)(a2 + 4) = this; /*0x5566af*/
  *(this + 2) = a2; /*0x5566b4*/
  *(this + 1) = v3; /*0x5566b7*/
  if ( v3 ) /*0x5566ba*/
    *(_DWORD *)(v3 + 8) = this; /*0x5566bc*/
  return (*(int (__thiscall **)(_DWORD *))(*this + 24))(this); /*0x5566c6*/
}
}

// 0x5566D0
unsigned int * LinkedList::Attach(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall LinkedList_Attach(_DWORD *this, int a2)
{
  int v3; // eax

  (*(void (__thiscall **)(_DWORD *))(*this + 36))(this); /*0x5566d5*/
  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 24))(a2); /*0x5566de*/
  *(_DWORD *)(v3 + 8) = this; /*0x5566e1*/
  *(this + 1) = v3; /*0x5566e4*/
  *(this + 2) = 0; /*0x5566e7*/
  return this; /*0x5566f0*/
}
}

// 0x556700
int LinkedList::Append(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall LinkedList_Append(_DWORD *this, int a2)
{
  int v3; // eax
  int v4; // eax

  (*(void (__thiscall **)(_DWORD *))(*this + 36))(this); /*0x556705*/
  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 28))(a2); /*0x55670e*/
  *(_DWORD *)(v3 + 4) = this; /*0x556711*/
  *(this + 2) = v3; /*0x556714*/
  v4 = *this; /*0x556717*/
  *(this + 1) = 0; /*0x55671b*/
  return (*(int (__thiscall **)(_DWORD *))(v4 + 24))(this); /*0x556725*/
}
}

// 0x556730
int LinkedList::RemoveNode()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall LinkedList_RemoveNode(_DWORD *this)
{
  int v2; // edi
  int v3; // eax
  int v4; // edx
  int v5; // edx

  v2 = (*(int (__thiscall **)(_DWORD *))(*this + 24))(this); /*0x55673e*/
  v3 = (*(int (__thiscall **)(_DWORD *))(*this + 28))(this); /*0x556740*/
  v4 = *(this + 2); /*0x556743*/
  if ( v4 ) /*0x55674a*/
    *(_DWORD *)(v4 + 4) = *(this + 1); /*0x55674f*/
  v5 = *(this + 1); /*0x556752*/
  if ( v5 ) /*0x556757*/
    *(_DWORD *)(v5 + 8) = *(this + 2); /*0x55675c*/
  *(this + 2) = 0; /*0x556761*/
  *(this + 1) = 0; /*0x556764*/
  if ( (_DWORD *)v2 != this ) /*0x556767*/
    return v2; /*0x55677e*/
  if ( (_DWORD *)v3 == this ) /*0x55676b*/
    return 0; /*0x55676f*/
  return (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 24))(v3); /*0x55676d*/
}
}

// 0x623460
void LinkedList::Remove(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall LinkedList_Remove(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // eax
  _DWORD *v3; // edx

  v2 = (_DWORD *)*(this + 13); /*0x623460*/
  v3 = 0; /*0x623463*/
  if ( v2 ) /*0x623468*/
  {
    while ( a2 != v2 ) /*0x623470*/
    {
      v3 = v2; /*0x623472*/
      v2 = (_DWORD *)*v2; /*0x623474*/
      if ( !v2 ) /*0x623478*/
        return; /*0x623478*/
    }
    if ( v3 ) /*0x623484*/
      *v3 = *v2; /*0x623489*/
    else
      *(this + 13) = *v2; /*0x62349a*/
    __3_YAXPAX_Z(v2); /*0x62348b*/
  }
}
}

// 0x632D10
void LinkedList::RelinkNode(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall LinkedList_RelinkNode(_DWORD *this, int a2)
{
  int v3; // ecx
  int v4; // eax

  if ( *(this + 6) != a2 ) /*0x632d1b*/
  {
    if ( a2 ) /*0x632d1f*/
    {
      v3 = *(_DWORD *)(a2 + 8); /*0x632d21*/
      if ( v3 ) /*0x632d26*/
      {
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v3 + 12))(v3, 0); /*0x632d2c*/
        *(_DWORD *)(a2 + 8) = 0; /*0x632d2f*/
      }
    }
    v4 = *(this + 6); /*0x632d36*/
    if ( v4 ) /*0x632d3b*/
      *(_DWORD *)(v4 + 8) = 0; /*0x632d3d*/
    *(this + 6) = a2; /*0x632d46*/
    if ( a2 ) /*0x632d49*/
      *(_DWORD *)(a2 + 8) = this + 5; /*0x632d4e*/
    *(this + 7) = this; /*0x632d54*/
    *(this + 1) = this + 5; /*0x632d57*/
  }
}
}

// 0x6E5380
char LinkedList::Contains(IUnknown * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall LinkedList::Contains(_DWORD *this, IUnknown *aP1)
{
  int v2; // eax

  v2 = *(this + 10); /*0x6e5380*/
  if ( !v2 ) /*0x6e5385*/
    return 0; /*0x6e5396*/
  while ( (IUnknown *)v2 != aP1 ) /*0x6e538d*/
  {
    v2 = *(_DWORD *)(v2 + 40); /*0x6e538f*/
    if ( !v2 ) /*0x6e5394*/
      return 0; /*0x6e5394*/
  }
  return 1; /*0x6e5398*/
}
}

// 0x407520
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

// 0x40E340
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

// 0x473430
int LinkedList::Pop()
{
{
    int result;
    result = this->Tail;
    if ( result )
  {
    this->Tail = *(int *)(result + 48);
    *(int *)(result + 48) = 0;
    --*(void**)this;
  }
    return result;
}
}

// 0x625AE0
int LinkedList::PushFront(IUnknown * aP1)
{
{
    aP1->field_C = this->Tail;
    this->Tail = aP1;
    return (int)aP1;
}
}
