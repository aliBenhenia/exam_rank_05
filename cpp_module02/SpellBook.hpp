#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP
#include <iostream>
#include <string>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"

class ATarget;
class ASpell;

class SpellBook
{
    private:
        std::string name;
        std::string title;
        std::map<std::string, ASpell *>data;
        SpellBook(SpellBook const &obj);
        SpellBook &operator=(SpellBook const &obj);
    public:
        SpellBook();
        void learnSpell(ASpell* obj);
        void forgetSpell(std::string const &name);
        ASpell* createSpell(std::string const & name);
        ~SpellBook();
};

#endif