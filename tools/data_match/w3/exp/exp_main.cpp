#include "exp_cls.h"
#include <stdio.h>

struct Pod {
    int  x;
    char s[16];
    double d;
};
Pod g_pod = { 0x12345678, "hello", 3.5 };
int g_int = 0x0BADF00D;

extern A g_a1;
extern A g_a2;
extern B g_b;
extern C g_c;

int main()
{
    printf("g_a1=%p g_a2=%p g_b=%p g_c=%p g_pod=%p g_int=%p\n",
           (void*)&g_a1, (void*)&g_a2, (void*)&g_b, (void*)&g_c,
           (void*)&g_pod, (void*)&g_int);
    printf("runtime vptr: a1=%p a2=%p b=%p c=%p\n",
           *(void**)&g_a1, *(void**)&g_a2, *(void**)&g_b, *(void**)&g_c);
    printf("runtime members: a1.i=%08x a1.j=%08x b.i=%08x b.d=%f c.i=%08x\n",
           g_a1.a_i, g_a1.a_j, g_b.b_i, g_b.b_d, g_c.c_i);
    printf("pod: x=%08x s=%s d=%f int=%08x\n", g_pod.x, g_pod.s, g_pod.d, g_int);
    return 0;
}
