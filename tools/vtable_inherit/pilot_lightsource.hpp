// GENERATED MI vtable pilot (binary truth, thunk-proven)
#pragma once

struct IUnknown {
    virtual void* u00_410260();
    virtual void* u01_410300();
    virtual void* u02_410310();
};
struct IPersistStream : IUnknown {};

struct IRTTITypeInfo : IUnknown {
    virtual void* r03_410210();
    virtual void* r04_410220();
    virtual void* r05_410230();
};

struct INoticeSink {
    virtual void* k00_4C9150();
};
struct INoticeSource {
    virtual void* c00_4C9150();
};

class AbstractClass : public IPersistStream,
                            public IRTTITypeInfo,
                            public INoticeSink,
                            public INoticeSource {
public:
    void* u00_410260() override;
    void* u01_410300() override;
    void* u02_410310() override;
    void* k00_4C9150() override;
    void* c00_4C9150() override;
    virtual ~AbstractClass();
    virtual void* a04_410450();
    virtual void* a05_4C9150();
    virtual void* a06_4C9150();
    virtual void* a07_4103E0();
    virtual void* a08_4105A0();
    virtual void* a09_410470();
    virtual void* a10_410480();
    virtual void* a11_4C9150();
    virtual void* a12_4C9150();
    virtual void* a13_410410();
    virtual void* a14_410490();
    virtual void* a15_4104A0();
    virtual void* a16_4104B0();
    virtual void* a17_410440();
    virtual void* a18_4104C0();
    virtual void* a19_4104F0();
    virtual void* a20_410520();
    virtual void* a21_410530();
    virtual void* a22_410540();
    virtual void* a23_410570();
};

// LightSourceClass main-table overrides: [3, 5, 6, 8, 11, 12, 13]
class LightSourceClass : public AbstractClass {
public:
    ~LightSourceClass();
    void* a05_4C9150() override;
    void* a06_4C9150() override;
    void* a08_4105A0() override;
    void* a11_4C9150() override;
    void* a12_4C9150() override;
    void* a13_410410() override;
};
