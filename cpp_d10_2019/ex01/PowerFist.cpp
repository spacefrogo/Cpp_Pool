//
// EPITECH PROJECT, 2020
// EPITECH 2020
// File description:
// powerfist cpp file
//

#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{
    
}

void	PowerFist::attack() const
{
    std::cout << "* pschhh... SBAM! *" << std::endl;
}
