#include "ASpell.hpp"

ASpell::ASpell()
{}

ASpell::~ASpell()
{}

ASpell::ASpell(const std::string aName, const std::string aEffects) :
name(aName), effects(aEffects)
{}

ASpell::ASpell(const ASpell &x) : 
name(x.name), effects(x.effects)
{}

ASpell& ASpell::operator= (const ASpell&x)
{
    this->name = x.getName();
    this->effects = x.getEffects();
    return (*this);
}

const std::string& ASpell::getName() const
{
    return this->name;
}

const std::string& ASpell::getEffects() const
{
    return this->effects;
}

void ASpell::launch(const ATarget &target) const
{
    target.getHitBySpell(*this)
}
