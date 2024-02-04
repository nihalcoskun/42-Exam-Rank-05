#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <string.h>
#include <iostream>

class ATarget;

class ASpell
{
    protected:
         std::string name;
         std::string effects;

    public:
         ASpell();
         virtual ~ASpell();
         ASpell(const std::string aName, const std::string aEffects);
         ASpell(const ASpell &);
         ASpell& operator= (const ASpell&);

         const std::string& getName() const;
         const std::string& getEffects() const;
         
         virtual ASpell* clone() const = 0;
         void   launch(const ATarget &) const;
};

#endif