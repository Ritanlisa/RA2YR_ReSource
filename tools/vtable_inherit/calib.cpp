// ABI calibration: prove MSVC x86 vtable layout rules the pilot generator
// relies on. Compiled standalone (32-bit cl), slots read from the .obj.
struct Base {
    virtual ~Base();            // expect slot0 = deleting dtor
    virtual int GetMember06();  // slot1
    virtual int Close();        // slot2
};

struct Derived : Base {
    int Close() override;       // overrides slot2 in place
    virtual int Extra();        // appended slot3
};

// definitions (never called)
Base::~Base() {}
int Base::GetMember06() { return 6; }
int Base::Close() { return 1; }
int Derived::Close() { return 2; }
int Derived::Extra() { return 3; }

void force() {                                  // force vtable emission
    Base* b = new Derived;
    (void)b;
}
