/*
** EPITECH PROJECT, 2020
** sdfghj
** File description:
** dfgh
*/

#ifndef LITTLEPONY_HPP_
#define LITTLEPONY_HPP_

#include "Toy.hpp"
#include <iostream>
#include <string>

class	LittlePony : public Toy
{
public:
    virtual ~LittlePony();
    LittlePony(const std::string &title);
    virtual void isTaken();
};

#endif /* LITTLEPONY_HPP_ */
