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
        ATarget(const std::string aType);
        ATarget(const ATarget &);
        ATarget& operator= (const ATarget &);

        const std::string& getType() const;

        virtual ATarget* clone() const = 0;

        void getHitBySpell(const ASpell &) const;

};

#endif