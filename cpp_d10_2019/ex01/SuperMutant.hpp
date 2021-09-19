//
// EPITECH PROJECT, 2020
// EPITECH 2020
// File description:
// Mutant hpp file
//

#ifndef SUPERMUTANT_H_
#define SUPERMUTANT_H_

#include "AEnemy.hpp"
#include <iostream>
#include <string>

class SuperMutant : public AEnemy
{
public:
    SuperMutant();
    ~SuperMutant();
    void takeDamage(int);
};

#endif /* !SUPERMUTANT_H__ */
