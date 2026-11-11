#include "exp_cls.h"
#include <stdio.h>
extern A g_a1; extern A g_a2; extern B g_b; extern C g_c;
int main()
{
    printf("a1=%p a2=%p b=%p c=%p\n",(void*)&g_a1,(void*)&g_a2,(void*)&g_b,(void*)&g_c);
    printf("vptr=%p %p %p %p\n",*(void**)&g_a1,*(void**)&g_a2,*(void**)&g_b,*(void**)&g_c);
    return 0;
}
