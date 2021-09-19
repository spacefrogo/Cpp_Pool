/*
** EPITECH PROJECT, 2020
** sdfgh
** File description:
** dfgh
*/

#include "Teddy.hpp"
#include <iostream>
#include <string>

Teddy::Teddy(const std::string &name) : Toy(name)
{
}

Teddy::~Teddy()
{
}

void	Teddy::isTaken()
{
    std::cout << "gra hu" << std::endl;
}
