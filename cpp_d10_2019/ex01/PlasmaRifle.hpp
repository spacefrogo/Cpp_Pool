//
// EPITECH PROJECT, 2020
// EPITECH 2020
// File description:
// Plasma header hpp
//

#ifndef PLASMARIFLE_H_
#define PLASMARIFLE_H_

#include "AWeapon.hpp"
#include <iostream>
#include <string>

class PlasmaRifle : public AWeapon
{
public:
    PlasmaRifle();
    virtual ~PlasmaRifle() {};
    virtual void attack() const;
};

#endif /* PLASMARIFLE_H_ */
