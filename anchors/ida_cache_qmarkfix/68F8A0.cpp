int __thiscall sub_68F8A0(ObjectClass *this)
{
  int v2; // eax
  unsigned int v3; // kr04_4
  int v4; // esi
  int vfptr3; // ebx
  int v6; // eax
  int occupant; // ecx
  int *p_referenceCount; // edi
  int nextObject; // eax
  int fallRate; // eax
  int NeedsSaveOrLink; // edx
  int v12; // eax
  int result; // eax
  int v14; // edx
  int v15; // [esp+10h] [ebp-18h] BYREF
  char Buffer[20]; // [esp+14h] [ebp-14h] BYREF

  v2 = (*(int (__stdcall **)(int))(*(_DWORD *)(*(int *)((char *)&stru_A83CD9.estimatedHealth + 3) + 36) + 24))(*(int *)((char *)&stru_A83CD9.estimatedHealth + 3) + 36);
  sprintf(Buffer, "%d", v2);
  v3 = strlen(Buffer) + 1;
  v4 = __2_YAPAXI_Z(0x2Cu);
  if ( v4 )
  {
    vfptr3 = this->vfptr3;
    v6 = this->vfptr1 + 214;
    *(_DWORD *)(v4 + 4) = 590 - 12 * (v3 - 1) + this->vfptr;
    *(_DWORD *)(v4 + 8) = v6;
    *(_DWORD *)(v4 + 12) = Timer::GetTicks();
    *(_DWORD *)(v4 + 20) = 0;
    *(_DWORD *)(v4 + 40) = vfptr3;
    *(_DWORD *)(v4 + 24) = Buffer;
    *(_DWORD *)(v4 + 28) = 0;
    *(_DWORD *)(v4 + 32) = 0;
    *(_BYTE *)(v4 + 36) = 0;
    *(_DWORD *)v4 = &ScorePrintClass::`vftable';
  }
  else
  {
    v4 = 0;
  }
  occupant = this->occupant;
  p_referenceCount = &this->referenceCount;
  if ( this->fallRate < occupant
    || (BYTE1(this->owningHouseIndex) || !occupant)
    && (nextObject = this->nextObject, nextObject > 0)
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(*p_referenceCount + 8))(
         &this->referenceCount,
         occupant + nextObject,
         0) )
  {
    fallRate = this->fallRate;
    NeedsSaveOrLink = this->NeedsSaveOrLink;
    this->fallRate = fallRate + 1;
    *(_DWORD *)(NeedsSaveOrLink + 4 * fallRate) = v4;
  }
  v12 = *p_referenceCount;
  v15 = v4;
  for ( result = (*(int (__thiscall **)(int *, int *))(v12 + 16))(&this->referenceCount, &v15);
        result != -1;
        result = (*(int (__thiscall **)(int *, int *))(v14 + 16))(&this->referenceCount, &v15) )
  {
    Screen::TransitionLoop((Screen *)this, 1);
    v14 = *p_referenceCount;
    v15 = v4;
  }
  return result;
}
