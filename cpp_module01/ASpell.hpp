#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <string.h>
#include <iostream>

#include "ATarget.hpp"
class ATarget;

class ASpell
{
    protected:
        std::string name;
        std::string effects;

    public:
        ASpell();
        virtual ~ASpell();
        ASpell(const ASpell &other);
        ASpell& operator= (const ASpell &other);

        ASpell(const std::string& name, const std::string& effects);

        const std::string& getName() const;
        const std::string& getEffects() const;

        virtual ASpell* clone() const = 0;
        void launch(const ATarget &target);
        
};

#endif