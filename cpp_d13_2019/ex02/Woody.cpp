//
// EPITECH PROJECT, 2020
// Epitech 2020
// File description:
// woody cpp file
//

#include "Woody.hpp"

Woody::Woody(std::string const &name, std::string const &filename) : Toy(WOODY, name, filename)
{
    
}

Woody::Woody(const Woody & woody) : Toy(woody)
{
    
}
