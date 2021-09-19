/*
** EPITECH PROJECT, 2020
** asdfg
** File description:
** sdfg
*/

#include "LittlePony.hpp"
#include <iostream>
#include <string>

LittlePony::LittlePony(std::string const &name) : Toy(name)
{
}

LittlePony::~LittlePony()
{
}

void	LittlePony::isTaken()
{
    std::cout << "yo man" << std::endl;
}
