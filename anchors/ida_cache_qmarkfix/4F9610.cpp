int __thiscall HouseClass::GiveTiberium_Storage(HouseClass *this, float a2, int a3)
{
  int v4; // eax
  int result; // eax

  LOWORD(v4) = Math::RoundToInt(a2 * 5.0 + (double)this->siloMoney);
  this->siloMoney = v4;
  LOWORD(result) = Math::RoundToInt(
                     (double)*(int *)(*(&dword_B0F4EC->vfptr + a3) + 184)
                   * *(float *)(this->relatedTagsCapacity + 328)
                   * a2
                   + (double)this->balance);
  this->balance = result;
  return result;
}
