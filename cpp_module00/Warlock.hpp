#ifndef WARLOCK_HPP
#define WARLOCK_HPP
#include <iostream>
#include <string>

class Warlock
{
    private:
        std::string name;
        std::string title;
        Warlock();
        Warlock(Warlock const &obj);
        Warlock &operator=(Warlock const &obj);
    public:
        ~Warlock();
        Warlock(std::string name, std::string title);
        std::string const &getName()const;
        std::string const &getTitle()const;
        void setTitle(std::string const &str);
        void introduce() const;

};

#endif