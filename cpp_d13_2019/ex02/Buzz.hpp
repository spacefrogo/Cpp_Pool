//
// EPITECH PROJECT, 2020
// EPITECH 2020
// File description:
// buzz hpp file
//

#ifndef BUZZ_H_
#define BUZZ_H_

#include "Toy.hpp"

class Buzz : public Toy
{
public:
    Buzz(std::string const &name, std::string const &filename = "buzz.txt");
    Buzz(Buzz const &);
    ~Buzz() {};
};

#endif /* BUZZ_H_ */
