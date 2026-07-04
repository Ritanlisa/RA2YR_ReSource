#include "networkshare.hpp"

int __fastcall NetworkShare::GetField(int a1)
{
    int result; // eax
    result = Game_PlayerInfoArray;
    g_NetworkPlayerCount = a1;
    *(&g_NetworkPlayerName + a1) = *(uint32_t *)Game_PlayerInfoArray;
    return result;
}

