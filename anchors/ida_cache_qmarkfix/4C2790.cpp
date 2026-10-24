int __thiscall sub_4C2790(ObjectClass *this)
{
  int result; // eax
  int v3[2]; // [esp+8h] [ebp-10h] BYREF
  int v4[2]; // [esp+10h] [ebp-8h] BYREF

  if ( this->owningHouseIndex )
  {
    Coord::To_Screen((Coord *)g_TacticalClass_Instance, this, v4);
    Coord::To_Screen((Coord *)g_TacticalClass_Instance, &this->vfptr3, v3);
    if ( (unsigned __int8)ClipLine(v4, v3, (int *)&DSurface_ViewBounds.X) )
      Lightning::Draw(
        (Lightning *)this,
        this->vfptr,
        this->vfptr1,
        this->vfptr2,
        this->vfptr3,
        this->uniqueId,
        this->abstractFlags,
        LOBYTE(this->fallRate) != 0 ? 5 : 10);
    ++this->referenceCount;
  }
  result = this->owningHouseIndex >> 1;
  this->owningHouseIndex = result;
  return result;
}
