#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(){}
TargetGenerator::TargetGenerator(TargetGenerator const &obj)
{
    *this = obj;
}

TargetGenerator &TargetGenerator::operator=(TargetGenerator const &obj)
{
    this->data  = obj.data;
    return (*this);
}
TargetGenerator::~TargetGenerator()
{
    std::map<std::string,ATarget*>::iterator it;

    it = data.begin();
    while (it != data.end())
    {
        delete it->second;
        it++;
    }
    data.clear();
}


void TargetGenerator::learnTargetType(ATarget* obj)
{
    if (obj)
        this->data[obj->getType()] = obj->clone();
}
void TargetGenerator::forgetTargetType(std::string const &name)
{
     std::map<std::string, ATarget *>::iterator it;

     it = data.find(name);
     if (it != data.end()) //exist
     {
        delete it->second;
        data.erase(it);
     }
}

ATarget* TargetGenerator::createTarget(std::string const & name)
{
     ATarget *var = NULL;
     std::map<std::string, ATarget *>::iterator it;

     it = data.find(name);
     if (it != data.end()) //exist
        var = data[name];
    return var;
}










