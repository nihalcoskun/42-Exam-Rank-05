#include "Warlock.hpp"

Warlock::Warlock(const std::string wName,const std::string wTitle):
name(wName), title(wTitle)
{
    std::cout << this->name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
    std::cout << this->name << ": My job here is done!" << std::endl;
}

const std::string& Warlock::getName() const
{
    return this->name;
}

const std::string& Warlock::getTitle() const
{
    return this->title;
}

void Warlock::setTitle(const std::string wTitle)
{
     this->title = wTitle;
}

void Warlock::introduce() const
{
    std::cout << this->name << ": I am " << this->name << ", " << this->title << "!" << std::endl;

}

void    Warlock::learnSpell(ASpell *spell) {
    for (size_t i = 0; i < this->spells.size(); i++)
        if (this->spells[i]->getName() == spell->getName())
            return ;
    spells.push_back(spell->clone());
}

void    Warlock::forgetSpell(const std::string sName) {
    for (std::vector<ASpell *>::iterator it = spells.begin(); it != spells.end(); it++)
        if ((*it)->getName() == sName)
        {
            delete *it;
            this->spells.erase(it);
            return ;
        }
}

void    Warlock::launchSpell(const std::string sName, const ATarget target) {
    for (size_t i = 0; i < this->spells.size(); i++)
        if (this->spells[i]->getName() == sName)
            return this->spells[i]->launch(target);
}