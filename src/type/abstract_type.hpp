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

    static AbstractTypeClass* Find(const char* pID);
    static AbstractTypeClass* FindOrAllocate(const char* pID);
    static int FindIndex(const char* pID);

    virtual ~AbstractTypeClass() = default;

    virtual void LoadTheaterSpecificArt(TheaterType th_type) {}
    virtual bool LoadFromINI(CCINIClass* pINI) { return false; }
    virtual bool SaveToINI(CCINIClass* pINI) { return false; }

    const char* get_ID() const { return this->ID; }

    AbstractTypeClass(const char* pID) noexcept;

    struct noinit_t {};

protected:
    AbstractTypeClass(noinit_t) noexcept {}

public:
    char ID[0x18];
    uint8_t zero_3C;
    char UINameLabel[0x20];
    const wchar_t* UIName;
    char Name[0x31];
};

} // namespace gamemd
