#include "audioqueue.hpp"

// 0x00403730
int ( *__fastcall AudioQueue::StopAllVoices(int a1, int a2))(int)
{
    int (__thiscall *result)(int); // eax
    int *v4; // esi
    int v5; // edi
    result = (int (__thiscall *)(int))AudioQueue::GetNext((int *)(a1 + 248));
    v4 = (int *)result;
    v5 = (int)result;
    if ( result )
    do
    result = (int (__thiscall *)(int))AudioQueue::GetNextAlt(v4);
    v4 = (int *)result;
    if ( a2 == -1 || *(uint32_t *)(v5 + 12) == a2 )
    result = Voice::Stop(v5);
    v5 = (int)v4;
    while ( v4 );
    return result;
}

// 0x00407B40
int __fastcall AudioQueue::IsEmpty(int a1, int a2)
{
    int result; // eax
    result = *(uint32_t *)(a1 + 20);
    *(uint32_t *)(result + 148) = a2;
    return result;
}

// 0x00407B50
int __fastcall AudioQueue::IsNotEmpty(int a1, int a2)
{
    int result; // eax
    result = *(uint32_t *)(a1 + 20);
    *(uint32_t *)(result + 156) = a2;
    return result;
}

int * AudioQueue::FindByData(void *this)
{
    int *result; // eax
    int *v3; // esi
    result = (int *)AudioQueue::GetNext(&dword_B1D3F0);
    if ( result )
    while ( (void *)result[3] != this )
    result = (int *)AudioQueue::GetNextAlt(result);
    if ( !result )
    goto LABEL_4;
    else
    LABEL_4:
    result = (int *)dword_B1D4B8;
    if ( !dword_B1D4B8 || *((void **)dword_B1D4B8 + 3) != this )
    v3 = (int *)&unk_B1D474;
    while ( 1 )
    result = (int *)AudioQueue::GetNext(v3);
    if ( result )
    break;
    LABEL_10:
    v3 -= 3;
    if ( (int)v3 < (int)byte_B1D450 )
    result = (int *)AudioQueue::GetNext(&dword_B1D3C8);
    if ( !result )
    return 0;
    while ( (void *)result[3] != this )
    result = (int *)AudioQueue::GetNextAlt(result);
    if ( !result )
    return 0;
    return result;
    while ( (void *)result[3] != this )
    result = (int *)AudioQueue::GetNextAlt(result);
    if ( !result )
    goto LABEL_10;
    return result;
}

