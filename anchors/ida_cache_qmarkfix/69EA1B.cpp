int __thiscall sub_69E9F0(ObjectClass *this, int a2, int a3)
{
  int v4; // ebx

  if ( !a2 || a3 < 1 )
    return 0;
  v4 = Delegate::Invoke((Straw *)this, a2, a3);
  if ( !LOBYTE(this->vfptr3) )
    SHA1::Process((SHA1 *)&this->uniqueId, a2, v4);
  return v4;
}
