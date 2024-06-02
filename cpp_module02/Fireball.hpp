#ifndef FIREBALL_HPP
#define FIREBALL_HPP
#include <iostream>
#include <string>
#include "ASpell.hpp"
class ASpell;
class Fireball:public ASpell
{
    public:
        Fireball();
        ASpell *clone()const;
        ~Fireball();

};

#endif
