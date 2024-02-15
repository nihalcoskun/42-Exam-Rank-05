#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <string.h>
#include <iostream>

class Warlock
{
    private:
        std::string name;
        std::string title;

        Warlock();
        Warlock(const Warlock &);
        Warlock& operator= (const Warlock &);

    public:
        Warlock(const std::string wName, const std::string wTitle);
        ~Warlock();

        const std::string& getName() const;
        const std::string& getTitle() const;

        void setTitle(const std::string wTitle);
        void introduce() const;
};

#endif