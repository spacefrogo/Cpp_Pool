/*
** EPITECH PROJECT, 2020
** rush2
** File description:
** toy
*/

#ifndef TOY_HPP_
#define TOY_HPP_

#include "Object.hpp"
#include <iostream>
#include <string>

class	Toy : public Object
{
public:
    virtual ~Toy();
    Toy(const std::string &name);
    virtual void isTaken();
};

#endif /* TOY_HPP_ */
