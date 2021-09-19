//
// EPITECH PROJECT, 2020
// EPITECH 2020
// File description:
// Character hpp file
//

#ifndef CHARACTER_H_
#define CHARACTER_H_

#include "AEnemy.hpp"
#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "RadScorpion.hpp"
#include "PowerFist.hpp"
#include <iostream>
#include <string>

class Character
{
public:
    Character(std::string);
    ~Character() {};
    bool action(int);
    void recoverAP();
    void attack(AEnemy *);
    void equip(AWeapon *);
    int getAp() const;
    std::string const &getName() const;
    AWeapon *getWeapon() const;
protected:
    std::string name;
    AWeapon *weapon;
    int ap;
};
std::ostream	&operator<<(std::ostream &os, Character const &perso);


#endif /* CHARACTER_H_ */
