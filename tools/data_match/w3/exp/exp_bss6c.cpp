class X1 { public: int i; X1(); virtual ~X1(); virtual int f(); };
class X2 { public: int i; X2(); virtual ~X2(); virtual int f(); };
class X3 { public: int i; X3(); virtual ~X3(); virtual int f(); };
class X4 { public: int i; X4(); virtual ~X4(); virtual int f(); };
class X5 { public: int i; X5(); virtual ~X5(); virtual int f(); };
class X6 { public: int i; X6(); virtual ~X6(); virtual int f(); };

X1 g_x1;
X2 g_x2;
X3 g_x3;
X4 g_x4;
X5 g_x5;
X6 g_x6;

X1::X1():i(1){} X1::~X1(){} int X1::f(){return i;}
X2::X2():i(2){} X2::~X2(){} int X2::f(){return i;}
X3::X3():i(3){} X3::~X3(){} int X3::f(){return i;}
X4::X4():i(4){} X4::~X4(){} int X4::f(){return i;}
X5::X5():i(5){} X5::~X5(){} int X5::f(){return i;}
X6::X6():i(6){} X6::~X6(){} int X6::f(){return i;}


int main() { return g_x1.i+g_x2.i+g_x3.i+g_x4.i+g_x5.i+g_x6.i; }

