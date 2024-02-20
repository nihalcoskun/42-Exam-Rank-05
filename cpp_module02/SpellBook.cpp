#include "SpellBook.hpp"

SpellBook::SpellBook()
{}

SpellBook::~SpellBook()
{
    for(std::map<std::string,ASpell*>::iterator it = spells.begin(); it != spells.end(); it++)
        delete it->second;
    spells.clear();
}

void SpellBook::learnSpell(ASpell* spell)
{
    if(spell)
        spells.insert(make_pair(spell->getName(), spell->clone()));
}

void SpellBook::forgetSpell(const std::string& spell)
{
    std::map<std::string,ASpell*>::iterator it = spells.find(spell);
    if(it != spells.end()){
        delete it->second;
        spells.erase(spell);
    }
}

ASpell* SpellBook::createSpell(const std::string& spell)
{
    std::map<std::string,ASpell*>::iterator it = spells.find(spell);
    return it != spells.end() ? it->second : NULL;
}
