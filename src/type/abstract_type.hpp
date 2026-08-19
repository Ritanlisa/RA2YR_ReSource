#pragma once

#include "object/abstract.hpp"
#include "core/enums.hpp"
#include "core/vector.hpp"

namespace gamemd
{

class CCINIClass;

class AbstractTypeClass : public ra2::game::AbstractClass
{
public:
    static constexpr AbstractType AbsID = AbstractType::Abstract;

    static DynamicVectorClass<AbstractTypeClass*>* Array;

    // design: static function, no direct binary match in IDA
    static AbstractTypeClass* Find(const char* pID);
    // unmatched: no callgraph reference and no git history record
    static AbstractTypeClass* FindOrCreate(const char* pID);
    // design: static function, no direct binary match in IDA
    static int FindIndex(const char* pID);

    virtual ~AbstractTypeClass() = default;  // 0x4109C0 (as Dtor)

    // design: inline accessor, inlined at all call sites
    virtual void LoadTheaterSpecificArt(TheaterType th_type) {}
    virtual bool LoadFromINI(CCINIClass* pINI) { return false; }  // 0x410A60
    virtual bool SaveToINI(CCINIClass* pINI) { return false; }  // 0x410B90 (as WriteINI)

    // design: inline accessor, inlined at all call sites
    const char* get_ID() const { return this->ID; }

    AbstractTypeClass() = default;  // needed for derived class default ctors
    AbstractTypeClass(const char* pID) noexcept;  // 0x410800 (as Constructor)

    struct noinit_t {};

protected:
    // unmatched: no callgraph reference and no git history record
    AbstractTypeClass(noinit_t) noexcept {}

public:
    char ID[0x18];
    uint8_t zero_3C;
    char UINameLabel[0x20];
    const wchar_t* UIName;
    char Name[0x31];
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    int NameEquals();  // 0x410a40 -- AbstractTypeClass::NameEquals
    int ProcessPower(int a1);  // 0x410be0 -- AbstractTypeClass::ProcessPower
    void* ddtor(int a1);  // 0x410c30 -- AbstractTypeClass::ddtor
    void* FindName();  // 0x40dcb0 -- AbstractType::FindName
    // === SYMBOL-ANCHOR (END) ===
};

} // namespace gamemd
