#include "SpellBook.hpp"

SpellBook::SpellBook(){}
SpellBook::SpellBook(SpellBook const &obj)
{
    *this = obj;
}

SpellBook &SpellBook::operator=(SpellBook const &obj)
{
    this->name = obj.name;
    this->title = obj.title;
    this->data  = obj.data;
    return (*this);
}
SpellBook::~SpellBook()
{
    std::map<std::string,ASpell*>::iterator it;

    it = data.begin();
    while (it != data.end())
    {
        delete it->second;
        it++;
    }
    data.clear();
}


void SpellBook::learnSpell(ASpell* obj)
{
    if (obj)
        this->data[obj->getName()] = obj->clone();
}
void SpellBook::forgetSpell(std::string const &name)
{
     std::map<std::string, ASpell *>::iterator it;

     it = data.find(name);
     if (it != data.end())
     {
        delete it->second;
        data.erase(it);
     }
}

ASpell* SpellBook::createSpell(std::string const & name)
{
     ASpell *var = NULL;
     if (data.find(name) != data.end())
        var = data[name];
    return var;
}










