//
// EPITECH PROJECT, 2020
// EPITECH 2020
// File description:
// peon cpp file
//

#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name)
{
    std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
    std::cout << "Bleuark..." << std::endl;
}

void	Peon::getPolymorphed() const
{
    std::cout << this->name << " has been turned into a pink pony!" << std::endl;
}
