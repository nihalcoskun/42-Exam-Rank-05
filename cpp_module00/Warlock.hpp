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
        Warlock(const Warlock &other);
        Warlock& operator= (const Warlock &other);

    public:
        ~Warlock();
        Warlock(const std::string& wName, const std::string& wTitle);

        const std::string& getName() const;
        const std::string& getTitle() const;

        void setTitle(const std::string& wTitle);
        void introduce() const;

};

#endif