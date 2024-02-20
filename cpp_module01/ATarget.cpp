#include "ATarget.hpp"

ATarget::~ATarget()
{}

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