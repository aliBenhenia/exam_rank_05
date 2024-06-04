#ifndef POLYMORPH_HPP
#define POLYMORPH_HPP
#include <iostream>
#include <string>
#include "ASpell.hpp"
class ASpell;
class Polymorph:public ASpell
{
    public:
        Polymorph();
        ASpell *clone()const;
        ~Polymorph();
};

#endif
