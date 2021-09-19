//
// EPITECH PROJECT, 2020
// EPITECH 2020
// File description:
// mutant cpp file
//

#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : AEnemy(170, "Super Mutant")
{
    std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant()
{
    std::cout << "Aaargh..." << std::endl;
}

void	SuperMutant::takeDamage(int dmg)
{
    AEnemy::takeDamage(dmg - 3);
}
