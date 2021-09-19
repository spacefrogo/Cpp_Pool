//
// EPITECH PROJECT, 2020
// EPITECH 2020
// File description:
// Woody hpp file
//

#ifndef WOODY_H_
#define WOODY_H_

#include <string>
#include <iostream>
#include "Toy.hpp"

class Woody : public Toy
{
public:
    Woody(std::string const &name, std::string const &filename = "woody.txt");
    virtual ~Woody() {};
    virtual void speak(std::string const &);
    Woody(Woody const &);
};

#endif /* WOODY_H_ */
