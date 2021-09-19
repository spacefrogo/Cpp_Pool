//
// EPITECH PROJECT, 2020
// EPITECH 2020
// File description:
// Plasma cpp file
//

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{
    
}

void	PlasmaRifle::attack() const
{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
