#ifndef WARLOCK_HPP
#define WARLOCK_HPP
#include <iostream>
#include <string>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"

class ATarget;
class ASpell;
class SpellBook;

class Warlock
{
    private:
        std::string name;
        std::string title;
        std::map<std::string, ASpell *>data;
        Warlock();
        Warlock(Warlock const &obj);
        Warlock &operator=(Warlock const &obj);
        SpellBook spell_book;
    public:
        void learnSpell(ASpell *obj);
        void forgetSpell(std::string name_);
        void launchSpell(std::string name_, const ATarget &obj);
        ~Warlock();
        Warlock(std::string name, std::string title);
        std::string const &getName()const;
        std::string const &getTitle()const;
        void setTitle(std::string const &str);
        void introduce() const;

};

#endif