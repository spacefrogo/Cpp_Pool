/*
** EPITECH PROJECT, 2020
** sdfgh
** File description:
** dfg
*/

#ifndef TEDDY_HPP_
#define TEDDY_HPP_

#include "Toy.hpp"
#include <iostream>
#include <string>

class	Teddy : public Toy
{
public:
    virtual ~Teddy();
    Teddy(const std::string &title);
    virtual void isTaken();
};

#endif /* TEDDY_HPP_ */
