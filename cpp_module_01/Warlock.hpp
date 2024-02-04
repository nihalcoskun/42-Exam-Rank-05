#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <string.h>
#include <iostream>
#include <vector>
#include "ASpell.hpp"

class Warlock
{
    private:
        std::string name;
        std::string title;
        std::vector <ASpell *> spells;

        Warlock();
        Warlock(const Warlock &);
        Warlock& operator= (const Warlock &);

    public:
        Warlock(const std::string wName, const std::string wTitle);
        ~Warlock();

        const std::string& getName() const;
        const std::string& getTitle() const;

        void    setTitle(const std::string wTitle);
        void    introduce() const;

        void    learnSpell(ASpell *);
        void    forgetSpell(const std::string sName);
        void    launchSpell(const std::string sName, const ATarget target);
};

#endif