#include "ATarget.hpp"

ATarget::ATarget()
{}

ATarget::~ATarget()
{}

ATarget::ATarget(const ATarget &other):
type(other.type)
{}

ATarget& ATarget::operator= (const ATarget &other)
{
    this->type = other.getType();
    return (*this);
}

ATarget::ATarget(const std::string& type):
type(type)
{}

const std::string& ATarget::getType() const
{
    return this->type;
}

void ATarget::getHitBySpell(const ASpell &spell) const
{
    std::cout << this->type << " has been " << spell.getEffects() << "!" << std::endl;
}