#ifndef FWOOSH_HPP
#define FWOOSH_HPP
#include <iostream>
#include <string>
#include "ASpell.hpp"
class ASpell;
class Fwoosh:public ASpell
{
    public:
        Fwoosh();
        ASpell *clone()const;
        ~Fwoosh();

};


#endif