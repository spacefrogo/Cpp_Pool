//
// EPITECH PROJECT, 2020
// EPITECH 2020
// File description:
// banana hpp file
//

#ifndef BANANA_H_
#define BANANA_H_

#include "Fruit.hpp"
#include <string>

class Banana : public Fruit
{
public:
    Banana();
    int getVitamins() const;
};

#endif /* !BANANA_H_ */
