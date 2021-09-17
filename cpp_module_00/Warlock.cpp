#include "Warlock.hpp"


Warlock::Warlock(std::string name, std::string title): _name(name), _title(title)
{
	std::cout << _name << ": This looks like another boring day." <<std::endl;
}


Warlock::Warlock(const Warlock &warlock): _name(warlock.getName()), _title(warlock.getTitle())
{}

std::string Warlock::getName() const
{
	return _name;
}

std::string Warlock::getTitle() const
{
	return _title;
}
void Warlock::setTitle(const std::string &str)
{
	_title = str;
}

Warlock::~Warlock()
{
	std::cout << _name << ": My job here is done!" << std::endl;
}

void Warlock::introduce() const
{
	std::cout << _name << ": I am "<< _name << ", " << _title << " !" << std::endl;
}

