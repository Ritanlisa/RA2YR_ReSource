#include "exp_cls.h"
#include <stdio.h>
extern A g_a1; extern A g_a2; extern A g_a3;
extern A g_a4; extern A g_a5; extern A g_a6;
int main()
{
    printf("a1=%p a2=%p a3=%p a4=%p a5=%p a6=%p\n",
        (void*)&g_a1,(void*)&g_a2,(void*)&g_a3,(void*)&g_a4,(void*)&g_a5,(void*)&g_a6);
    printf("vptr=%p i=%08x\n", *(void**)&g_a1, g_a1.a_i);
    return 0;
}
