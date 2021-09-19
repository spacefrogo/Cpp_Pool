//
// EPITECH PROJECT, 2020
// EPITECH 2020
// File description:
// Powerfist head
//

#ifndef POWERFIST_H_
#define POWERFIST_H_

#include "AWeapon.hpp"
#include <string>
#include <iostream>

class PowerFist : public AWeapon
{
public:
    PowerFist();
    virtual ~PowerFist() {};
    virtual void attack() const;
};

#endif /* POWERFIST_H_ */
