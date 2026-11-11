#ifndef EXP_CLS_H
#define EXP_CLS_H

class A {
public:
    int  a_i;
    int  a_j;
    A();
    virtual ~A();
    virtual int fa();
};

class B {
public:
    int  b_i;
    double b_d;
    B();
    virtual ~B();
    virtual int fb();
};

class C {
public:
    char  c_s[16];
    int   c_i;
    C();
    virtual ~C();
    virtual int fc();
};

#endif
