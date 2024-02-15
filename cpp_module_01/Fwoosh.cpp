#include "Fwoosh.hpp"

Fwoosh::Fwoosh()
{}

Fwoosh::~Fwoosh()
{}

Fwoosh* Fwoosh::clone() const
{
    return (new Fwoosh(*this));
}