#ifndef ATARGET_HPP
#define ATARGET_HPP
#include <iostream>
#include <string>
#include "ASpell.hpp"
#include "ATarget.hpp"

class ASpell;
class ATarget
{
    public:
        ATarget();
        ATarget(std::string type);
        ATarget(ATarget const &obj);
        ATarget &operator=(ATarget const &obj);
        virtual ~ATarget();
        std::string const & getType()const;
        virtual ATarget *clone()const=0;
        void getHitBySpell(ASpell const &obj)const;
    private :
        std::string type;
};

#endif