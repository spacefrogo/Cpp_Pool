//
// EPITECH PROJECT, 2020
// EPITECH 2020
// File description:
// victim cpp file
//

#include "Victim.hpp"

Victim::Victim(std::string name) : name(name)
{
    std::cout << "Some random victim called " << name
	      << " just popped!"  << std::endl;
}

Victim::~Victim()
{
    std::cout << "Victim " << name
	      << " just died for no apparent reason!" << std::endl;
}

void Victim::getPolymorphed() const
{
    std::cout << name
	      << " has been turned into a cute little sheep!" << std::endl;
}

std::string Victim::getName() const
{
    return (name);
}

std::ostream & operator<<(std::ostream & os, Victim & victim)
{
    return os << "I'm " << victim.getName()
	      << " and I like otters!" << std::endl;
}
