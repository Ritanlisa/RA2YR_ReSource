// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_779690_e4.hpp"

// 0x779690
namespace gamemd {
void * E4Recv_779690::LoadAccountInfoWOL_Load(ReferenceCounted * aP1, ObjectClass * aP2, ReferenceCounted * aP3, ReferenceCounted * aP4, int a6, ObjectClass * aP6, ReferenceCounted * aP7, ReferenceCounted * aP8, ReferenceCounted * aP9, ReferenceCounted * aP10, ReferenceCounted * aP11, ReferenceCounted * aP12, ReferenceCounted * aP13, ReferenceCounted * aP14)
{
{
    this->M4 = 0;
    this->M8 = 0;
    *(int *)this = &vt_ReferenceCounted;
    String::AssignFromPtr((char **)(this) + 3, (const char **)aP1);
    this->M16 = aP2;
    this->M24 = aP4;
    this->M20 = (char)aP3;
    this->M28 = a6;
    this->M36 = aP7;
    this->M32 = aP6;
    this->M40 = aP8;
    this->M48 = aP10;
    this->M44 = aP9;
    this->M52 = aP11;
    this->M56 = (char)aP12;
    WideString::AssignFromPtr((wchar_t **)(this) + 15, (const wchar_t **)aP14);
    WideString::AssignFromPtr((wchar_t **)(this) + 16, (const wchar_t **)aP13);
    *(void**)this = vt_PlayerProfile;
    return this;
}
}
} // namespace gamemd
