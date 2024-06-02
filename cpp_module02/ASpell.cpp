#include "ASpell.hpp"

ASpell::ASpell(){}

ASpell::ASpell(ASpell const &obj)
{
    *this = obj;
}

ASpell::ASpell(std::string name, std::string effects)
{
    this->name = name;
    this->effects = effects;
}

ASpell &ASpell::operator=(ASpell const &obj)
{
    this->name = obj.name;
    this->effects = obj.effects;
    return (*this);
}


std::string ASpell::getName()const
{
    return (this->name);
}

std::string ASpell::getEffects()const
{
    return (this->effects);
}
void ASpell::launch(const ATarget &obj)const
{
    obj.getHitBySpell(*this);
}

ASpell::~ASpell(){}

