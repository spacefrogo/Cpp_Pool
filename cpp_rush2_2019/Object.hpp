/*
** EPITECH PROJECT, 2020
** sdfgh
** File description:
** dfgh
*/

#ifndef OBJECT_HPP_
#define OBJECT_HPP_

#include <iostream>
#include <string>

class Object
{
public:
    Object(const std::string &name);
    virtual ~Object();
    virtual void isTaken() = 0;
protected:
    std::string _name;
};

#endif /* OBJECT_HPP_ */
