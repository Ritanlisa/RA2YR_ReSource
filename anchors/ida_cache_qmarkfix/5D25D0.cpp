char __thiscall sub_5D25D0(ObjectClass *this, char *Source, int a3)
{
  Audio *v4; // eax
  char **v5; // edi
  int attachedBomb; // ecx
  int v7; // eax
  int v8; // eax
  int attachedTag; // edx

  if ( !Source || !a3 )
    return 0;
  v4 = (Audio *)__2_YAPAXI_Z(0xCu);
  v5 = v4 ? Audio::SetSoundFileName(v4, Source, a3) : 0;
  attachedBomb = this->attachedBomb;
  if ( this->ambientSoundController[1] >= attachedBomb )
  {
    if ( !BYTE1(this->ambientSoundController[0]) && attachedBomb )
      return 0;
    v7 = this->ambientSoundController[2];
    if ( v7 <= 0
      || !(*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(this->nextObject + 8))(
            &this->nextObject,
            attachedBomb + v7,
            0) )
    {
      return 0;
    }
  }
  v8 = this->ambientSoundController[1];
  attachedTag = this->attachedTag;
  this->ambientSoundController[1] = v8 + 1;
  *(_DWORD *)(attachedTag + 4 * v8) = v5;
  return 1;
}
