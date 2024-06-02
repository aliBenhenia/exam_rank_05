#ifndef ASPELL_HPP
#define ASPELL_HPP
#include <iostream>
#include <string>
#include "ATarget.hpp"

class ATarget;

class ASpell{
    protected:
        std::string name;
        std::string effects;
    public:
        ASpell();
        ASpell(std::string name, std::string effects);
        ASpell(ASpell const &obj);
        ASpell &operator=(ASpell const &obj);
        std::string getName()const;
        std::string getEffects()const;
        virtual ASpell *clone()const=0;
        void launch(const ATarget  &obj)const;

        virtual ~ASpell();
};
#endif