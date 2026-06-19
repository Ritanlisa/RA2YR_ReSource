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

    static AbstractTypeClass* Find(const char* pID); // IDA: NOT_FOUND
    static AbstractTypeClass* FindOrAllocate(const char* pID); // IDA: UNMATCHED — no_callgraph_match, no_git_history
    static int FindIndex(const char* pID); // IDA: NOT_FOUND

    virtual ~AbstractTypeClass() = default;  // 0x4109C0 (as Dtor)

    virtual void LoadTheaterSpecificArt(TheaterType th_type) {} // IDA: NOT_FOUND
    virtual bool LoadFromINI(CCINIClass* pINI) { return false; }  // IDA: 0x410A60
    virtual bool SaveToINI(CCINIClass* pINI) { return false; }  // IDA: 0x410B90 (as WriteINI)

    const char* get_ID() const { return this->ID; } // IDA: NOT_FOUND

    AbstractTypeClass() = default;  // needed for derived class default ctors
    AbstractTypeClass(const char* pID) noexcept;  // 0x410800 (as Constructor)

    struct noinit_t {};

protected:
    AbstractTypeClass(noinit_t) noexcept {} // IDA: UNMATCHED — no_callgraph_match, no_git_history

public:
    char ID[0x18];
    uint8_t zero_3C;
    char UINameLabel[0x20];
    const wchar_t* UIName;
    char Name[0x31];
};

} // namespace gamemd
