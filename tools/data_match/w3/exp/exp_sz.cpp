class S { public: int i; S(); virtual ~S(); virtual int f(); };
class L { public: int a[20]; L(); virtual ~L(); virtual int f(); };
class M { public: int a[6]; M(); virtual ~M(); virtual int f(); };
S g_s;
L g_l;
M g_m;
S::S():i(1){} S::~S(){} int S::f(){return i;}
L::L(){a[0]=2;} L::~L(){} int L::f(){return a[0];}
M::M(){a[0]=3;} M::~M(){} int M::f(){return a[0];}
#include <stdio.h>
int main(){ printf("sizeof S=%d L=%d M=%d\n",(int)sizeof(S),(int)sizeof(L),(int)sizeof(M)); return 0; }
