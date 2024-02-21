#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <string.h>
#include <iostream>
#include "ASpell.hpp"
class ASpell;

class ATarget
{
    protected:
        std::string type;

    public:
        ATarget();
        virtual ~ATarget();
        ATarget(const ATarget &other);
        ATarget& operator= (const ATarget &other);

        ATarget(const std::string& type);

        const std::string& getType() const;

        virtual ATarget* clone() const = 0;
        void getHitBySpell(const ASpell &spell) const;
};

#endif