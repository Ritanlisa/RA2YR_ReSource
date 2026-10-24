char __thiscall sub_5CE0C0(ObjectClass *this, int a2, _DWORD *a3)
{
  int nextArrayIndex; // edi
  int v5; // eax
  int fallRate; // edi
  int v7; // eax
  int vfptr1; // ebx
  int v10; // ebp
  int i; // edi
  int v12; // edx
  int v13; // ecx
  int v14; // eax
  unsigned int v15; // ecx
  size_t NeedsSaveOrLink; // [esp+Ch] [ebp-20h]
  size_t v17; // [esp+Ch] [ebp-20h]
  int v18; // [esp+24h] [ebp-8h]
  int v19; // [esp+30h] [ebp+4h]

  nextArrayIndex = this->nextArrayIndex;
  if ( this->uniqueId != -1 )
  {
    v5 = Timer::GetTicks() - this->uniqueId;
    if ( v5 >= nextArrayIndex )
      goto LABEL_5;
    nextArrayIndex -= v5;
  }
  if ( nextArrayIndex )
  {
LABEL_24:
    *a3 = 0;
    a3[1] = 0;
    a3[2] = 0;
    a3[3] = 0;
    return 0;
  }
LABEL_5:
  if ( LOBYTE(this->vfptr3) != 1 )
    goto LABEL_24;
  fallRate = this->fallRate;
  this->uniqueId = Timer::GetTicks();
  this->abstractFlags = v18;
  this->nextArrayIndex = fallRate;
  if ( this->NeedsSaveOrLink >= (unsigned int)WideString::Length((WideString *)&this->referenceCount) )
  {
    LOWORD(v7) = Math::RoundToInt(*(float *)&stru_A8E960.random[36] * 64.0);
    sub_406670(aBleep1, v7);
    return 1;
  }
  if ( LOBYTE(this->nextObject) == 1 && this->customSound_controller[3] > 0 && this->customSound_controller[4] > 0 )
    (*(void (__thiscall **)(int, int *, DSurface *, int *, _DWORD, int))(*(_DWORD *)a2 + 8))(
      a2,
      &this->customSound_controller[1],
      DSurface_Alternate,
      &this->customSound_controller[1],
      0,
      1);
  vfptr1 = this->vfptr1;
  if ( BYTE1(this->ambientSoundController[3]) )
    vfptr1 += this->ambientSoundController[4];
  NeedsSaveOrLink = this->NeedsSaveOrLink;
  v10 = NeedsSaveOrLink + 1;
  for ( i = WideString::GetChar((WideString *)&this->referenceCount, NeedsSaveOrLink);
        (_WORD)i != 10;
        i = WideString::GetChar((WideString *)&this->referenceCount, v17) )
  {
    if ( !(_WORD)i )
      break;
    (*(void (__thiscall **)(int, int, int, int, int, int, _DWORD))(*(_DWORD *)this->attachedTag + 16))(
      this->attachedTag,
      a2,
      i,
      vfptr1,
      this->customSound_controller[0],
      this->occupant,
      0);
    vfptr1 += (*(int (__thiscall **)(int, int))(*(_DWORD *)this->attachedTag + 4))(this->attachedTag, i);
    v17 = v10++;
  }
  v12 = this->ambientSoundController[1];
  v13 = *(_DWORD *)(this->attachedTag + 8);
  v19 = this->customSound_controller[0];
  *a3 = this->attachedBomb;
  a3[1] = v19;
  a3[2] = v12;
  a3[3] = v13;
  if ( this->occupant == 2 )
  {
    this->customSound_controller[1] = 0;
    this->customSound_controller[2] = 0;
    this->customSound_controller[3] = 0;
    this->customSound_controller[4] = 0;
    this->NeedsSaveOrLink = v10;
    if ( (_WORD)i == 10 )
    {
      LOWORD(v14) = Math::RoundToInt(*(float *)&stru_A8E960.random[36] * 64.0);
      sub_406670(aBleep1, v14);
      this->customSound_controller[0] += *(_DWORD *)(this->attachedTag + 8);
    }
  }
  else
  {
    this->customSound_controller[1] = *a3;
    this->customSound_controller[2] = a3[1];
    this->customSound_controller[3] = a3[2];
    this->customSound_controller[4] = a3[3];
  }
  if ( LOBYTE(this->nextObject) == 1 )
  {
    v15 = this->occupant + 1;
    this->occupant = v15;
    if ( v15 > 2 )
    {
      this->occupant = 0;
      return 0;
    }
  }
  return 0;
}
