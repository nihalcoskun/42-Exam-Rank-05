#include "SpellBook.hpp"

SpellBook::SpellBook()
{}

SpellBook::~SpellBook()
{
    for(std::map<std::string,ASpell*>::iterator it = spells.begin(); it != spells.end(); it++)
    {
        delete it->second;
    }
    spells.clear();
}

void SpellBook::learnSpell(ASpell* spell)
{
    if(spell)
    {
        spells.insert(make_pair(spell->getName(), spell->clone()));
    }
}

void SpellBook::forgetSpell(std::string const &spellName)
{
    std::map<std::string,ASpell*>::iterator it = spells.find(spellName);
    if( it != spells.end())
    {
        delete it->second;
        spells.erase(spellName);
    }
}

ASpell* SpellBook::createSpell(std::string const &spellName)
{
    std::map<std::string,ASpell*>::iterator it = spells.find(spellName);
    return it != spells.end() ? it->second : NULL;
}