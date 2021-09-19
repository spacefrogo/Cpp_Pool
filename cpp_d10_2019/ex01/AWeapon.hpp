//
// EPITECH PROJECT, 2020
// EPITECH 2020
// File description:
// weapon header
//

#ifndef AWEAPON_H_
#define AWEAPON_H_

#include <string>
#include <iostream>

class AWeapon
{
public:
    AWeapon(std::string const &, int, int);
    virtual ~AWeapon() {};
    std::string const &getName() const;
    int getAPCost() const;
    virtual void attack() const = 0;
    int getDamage() const;
protected:
    int apCost;
    std::string name;
    int damage;
};


#endif /* AWEAPON_H_ */
