int __thiscall DropListClass::vt_method_4B4F20(DropListClass *this, int a2)
{
  (*(void (__thiscall **)(int *, int))(this->DropListClass_field_0x50 + 12))(&this->DropListClass_field_0x50, a2);
  return LinkedList::InsertAfter((LinkClass *)this, a2);
}
