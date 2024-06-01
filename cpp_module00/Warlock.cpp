#include "Warlock.hpp"

Warlock :: Warlock(){}

Warlock :: Warlock(Warlock const &obj)
{
    *this = obj;
}

Warlock :: Warlock(std::string name, std::string title)
{
    this->name = name;
    this->title = title;
    std::cout << this->name <<": This looks like another boring day." << std::endl;
}

Warlock &Warlock::operator=(Warlock const &obj)
{
    this->name = obj.name;
    this->title = obj.title;
    return (*this);
}
void Warlock ::introduce() const
{
    std::cout << this->name << ": I am " << this->name << ", "<< this->title << "!" << std::endl;
}
void Warlock ::setTitle(std::string const &str) 
{
    this->title = str;
}
std::string const &Warlock::getName()const
{
    return (this->name);
}
std::string const &Warlock::getTitle()const
{
    return (this->title);
}

Warlock :: ~Warlock()
{
    std::cout << this->name <<": My job here is done!" << std::endl;
}