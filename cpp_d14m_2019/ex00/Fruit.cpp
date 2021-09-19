//
// EPITECH PROJECT, 2020
// EPITECH 2020
// File description:
// fruit cpp file
//

#include "Fruit.hpp"

Fruit::Fruit(int vitamins)
{
    this->_vitamins = vitamins;
}

std::string const &Fruit::getName() const
{
    return (this->_name);
}

int	Fruit::getVitamins() const
{
    return (this->_vitamins);
}

