class P { public: double d; P(); virtual ~P(); virtual int f(); };
class Q { public: int a[4]; Q(); virtual ~Q(); virtual int f(); };
Q g_q;
P g_p;
P::P():d(1.0){} P::~P(){} int P::f(){return (int)d;}
Q::Q(){a[0]=3;} Q::~Q(){} int Q::f(){return a[0];}
#include <stdio.h>
int main(){ printf("sizeof P=%d Q=%d\n",(int)sizeof(P),(int)sizeof(Q)); return 0; }
