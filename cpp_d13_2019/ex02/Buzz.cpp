//
// EPITECH PROJECT, 2020
// EPITECH 2020
// File description:
// cpp file
//

#include "Buzz.hpp"

Buzz::Buzz(std::string const &name, std::string const &filename) : Toy(BUZZ, name, filename)
{
    
}

Buzz::Buzz(Buzz const &buzz) : Toy(buzz)
{
    
}
