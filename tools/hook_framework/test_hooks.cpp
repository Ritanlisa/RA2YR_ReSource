// test_hooks.cpp — Minimal test hooks for shadow execution framework validation.
#include <windows.h>
#include <cmath>
#include "Syringe.h"
#include "tls_storage.h"
#include "shadow_txn.h"

extern "C" void PostProcStub();

static volatile int g_test_counter = 0;

// ============================================================
// Test Hook: Direction8 (0x565B40) — deterministic direction calculation
// ============================================================

static uint8_t RE_Direction8(int x, int y)
{
    if (x == 0 && y == 0) return 0;
    double angle = atan2((double)y, (double)x);
    if (angle < 0) angle += 6.283185307;
    uint8_t dir = (uint8_t)((angle + 0.392699081) / 0.785398163);
    if (dir >= 8) dir = 0;
    return dir;
}

DEFINE_HOOK(565B40, Direction8_shadow, 6)
{
    auto* slot = shadow::GetSlot();

    int x = R->Stack<int>(4);
    int y = R->Stack<int>(8);

    shadow::ShadowTransaction txn;
    txn.Begin();
    g_test_counter++;
    int re_result = (int)RE_Direction8(x, y);
    txn.End();

    slot->re_result_eax = (uint32_t)re_result;
    slot->re_result_edx = 0;
    slot->original_ret_addr = R->Stack<DWORD>(0);
    R->Stack(0, (DWORD)&PostProcStub);

    return 0;
}

// ============================================================
// Test Hook: IsCloseEnough (0x4A0820) — distance check
// ============================================================

static bool RE_IsCloseEnough(int x1, int y1, int z1, int x2, int y2, int z2, int threshold)
{
    int dx = x1 - x2;
    int dy = y1 - y2;
    int dz = z1 - z2;
    return (dx*dx + dy*dy + dz*dz) <= threshold*threshold;
}

DEFINE_HOOK(4A0820, IsCloseEnough_shadow, 5)
{
    auto* slot = shadow::GetSlot();

    int x1 = R->Stack<int>(4);
    int y1 = R->Stack<int>(8);
    int z1 = R->Stack<int>(12);
    int x2 = R->Stack<int>(16);
    int y2 = R->Stack<int>(20);
    int z2 = R->Stack<int>(24);
    int threshold = R->Stack<int>(28);

    shadow::ShadowTransaction txn;
    txn.Begin();
    bool re_result = RE_IsCloseEnough(x1, y1, z1, x2, y2, z2, threshold);
    txn.End();

    slot->re_result_eax = (uint32_t)(re_result ? 1 : 0);
    slot->re_result_edx = 0;
    slot->original_ret_addr = R->Stack<DWORD>(0);
    R->Stack(0, (DWORD)&PostProcStub);

    return 0;
}
