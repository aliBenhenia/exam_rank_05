#ifndef TARGETGENERATOR_HPP
#define TARGETGENERATOR_HPP
#include <iostream>
#include <string>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"

class ATarget;
class ASpell;
class SpellBook;

class TargetGenerator
{
    private:
        std::map<std::string, ATarget *>data;
        TargetGenerator(TargetGenerator const &obj);
        TargetGenerator &operator=(TargetGenerator const &obj);
        SpellBook spell_book;
    public:
        TargetGenerator();
        ~TargetGenerator();
        void learnTargetType(ATarget*);
        void forgetTargetType(std::string const &name);
        ATarget* createTarget(std::string const &name);

};

#endif