#include "Fwoosh.hpp"

Fwoosh::Fwoosh() :
ASpell("Fwoosh", "fwoosh")
{}

Fwoosh::~Fwoosh() 
{}

Fwoosh* Fwoosh::clone() const
{
    return (new Fwoosh(*this));
}