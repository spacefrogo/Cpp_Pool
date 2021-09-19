//
// EPITECH PROJECT, 2020
// Epitech 2020
// File description:
// banana cpp file
//

#include "Banana.hpp"

Banana::Banana() : Fruit(0)
{
    const char *banana = "banana";
    
    this->_vitamins = 5;
    this->_name = banana;
}

int Banana::getVitamins() const
{
    return (this->_vitamins);
}
