#include "facingclass.hpp"

char  FacingClass::Set_SyncLog(char *this, uint32_t *a2)
{
    int *v3; // ebx
    int v4; // eax
    int v5; // edx
    int v6; // ebx
    __int16 v7; // cx
    int v8; // ecx
    uint32_t *v9; // esi
    char result; // al
    int v11; // [esp+8h] [ebp-10h]
    int v12; // [esp+10h] [ebp-8h]
    if ( *((__int16 *)this + 10) > 0 )
    v3 = (int *)(this + 8);
    if ( Locomotor::GetSpeed((int *)this + 2) )
    v4 = abs16(*(_WORD *)this - *((_WORD *)this + 2)) / *((__int16 *)this + 10);
    v11 = *(uint32_t *)this;
    if ( (__int16)v4 <= 0 )
    LABEL_9:
    LOWORD(v8) = v11;
    goto LABEL_12;
    v5 = *((uint32_t *)this + 4);
    v6 = *v3;
    if ( v6 != -1 )
    if ( (int)CurrentFrame - v6 >= v5 )
    v7 = 0;
    goto LABEL_8;
    LOWORD(v5) = v5 - ((_WORD)CurrentFrame - v6);
    v7 = v5;
    LABEL_8:
    LOWORD(v11) = v11 - v7 * ((__int16)(*(_WORD *)this - *((_WORD *)this + 2)) / (__int16)v4);
    goto LABEL_9;
    v8 = *(uint32_t *)this;
    LABEL_12:
    if ( (_WORD)v8 == *(_WORD *)a2 )
    v9 = this + 8;
    result = 0;
    *v9 = CurrentFrame;
    v9[1] = v12;
    else
    *(uint32_t *)this = *a2;
    *((uint32_t *)this + 1) = *a2;
    v9 = this + 8;
    *v9 = CurrentFrame;
    v9[1] = v12;
    result = 1;
    v9[2] = 0;
    return result;
}

