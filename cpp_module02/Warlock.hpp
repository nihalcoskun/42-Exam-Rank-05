#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <string.h>
#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"

#include <map>

class Warlock
{
    private:
        std::string name;
        std::string title;
        SpellBook spellBook;
        std::map<std::string,ASpell*> spells;

        Warlock();
        Warlock(const Warlock &other);
        Warlock &operator = (const Warlock &other);

    public:
        ~Warlock();
        Warlock(const std::string& wName, const std::string& wTitle);
        
        const std::string& getName() const;
        const std::string& getTitle() const;

        void setTitle(const std::string& wTitle);
        void introduce() const;

        void learnSpell(ASpell* spell);
        void forgetSpell(const std::string& spell);
        void launchSpell(std::string spell, const ATarget& target);
};

#endif