// MI ABI calibration: multiple bases each with virtuals, overrides on
// non-primary bases (adjustor thunks), appended virtuals.
struct IUnknown {
    virtual long QueryInterface(const void* a, void** b);
    virtual unsigned long AddRef();
    virtual unsigned long Release();
};

struct IPersist : public IUnknown {
    virtual long GetClassID(void* p);
};

struct IPersistStream : public IPersist {
    virtual long IsDirty();
    virtual long Load(void* p);
};

struct IRTTITypeInfo : public IUnknown {          // secondary base
    virtual void* GetTypeInfo();
};

struct INoticeSink {                               // 1-slot base
    virtual void Notify();
};

struct AbstractClass : public IPersistStream,
                       public IRTTITypeInfo,
                       public INoticeSink {
    // override on secondary base (adjustor thunk expected)
    unsigned long AddRef();
    // own virtuals appended to primary
    virtual int Own1();
};

struct LightSourceClass : public AbstractClass {
    void Notify();                                 // override on 3rd base
    int Own1();                                    // override primary
    virtual int Own2();                            // appended
};

long IUnknown::QueryInterface(const void*, void**) { return 0; }
unsigned long IUnknown::AddRef() { return 1; }
unsigned long IUnknown::Release() { return 1; }
long IPersist::GetClassID(void*) { return 0; }
long IPersistStream::IsDirty() { return 0; }
long IPersistStream::Load(void*) { return 0; }
void* IRTTITypeInfo::GetTypeInfo() { return 0; }
void INoticeSink::Notify() {}
unsigned long AbstractClass::AddRef() { return 2; }
int AbstractClass::Own1() { return 1; }
void LightSourceClass::Notify() {}
int LightSourceClass::Own1() { return 2; }
int LightSourceClass::Own2() { return 3; }

void force() { LightSourceClass x; (void)x; }
