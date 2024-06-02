#include "ATarget.hpp"

ATarget::ATarget(){}
ATarget::ATarget(std::string type):type(type){}
ATarget::ATarget(ATarget const &obj)
{
    this->type = obj.type;
}

ATarget &ATarget::operator=(ATarget const &obj)
{
    this->type = obj.type;
    return (*this);
}

std::string const &ATarget::getType()const
{
    return (this->type);
}

void ATarget::getHitBySpell(ASpell const &obj)const
{
    std::cout << this->type << " has been " << obj.getEffects()<< std::endl;
}

ATarget::~ATarget(){}