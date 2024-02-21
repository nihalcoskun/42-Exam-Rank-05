#include "Warlock.hpp"

Warlock::~Warlock()
{
    std::cout << this->name << ": My job here is done!" << std::endl;
    for(std::map<std::string,ASpell*>::iterator it = spells.begin() ; it != spells.end() ; it++ )
    {
        delete it->second;
    }
    spells.clear();
}

Warlock::Warlock(const std::string& wName, const std::string& wTitle):
name(wName), title(wTitle)
{
    std::cout << this->name << ": This looks like another boring day." << std::endl;
}

const std::string& Warlock::getName() const
{
    return this->name;
}

const std::string& Warlock::getTitle() const
{
    return this->title;
}

void Warlock::setTitle(const std::string& wTitle)
{
    this->title = wTitle;
}

 void Warlock::introduce() const
 {
    std::cout << this->name << ": I am " << this->name << ", " << this->title << "!" << std::endl;
 }

 void Warlock::learnSpell(ASpell* spell)
 {
    if(spell)
        spells.insert(make_pair(spell->getName(), spell->clone()));
 }

 void Warlock::forgetSpell(std::string spellName)
 {
    std::map<std::string,ASpell*>::iterator it = spells.find(spellName);
    if(it != spells.end())
    {
        delete it->second;
        spells.erase(spellName);
    }
 }

 void Warlock::launchSpell(std::string spellName, const ATarget &target)
 {
    std::map<std::string,ASpell*>::iterator it = spells.find(spellName);
    if( it != spells.end())
    {
        it->second->launch(target);
    }
 }