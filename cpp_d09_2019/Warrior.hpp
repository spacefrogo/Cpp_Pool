//
// EPITECH PROJECT, 2020
// EPITECH 2020
// File description:
// warrior header
//

#ifndef WARRIOR_H_
#define WARRIOR_H_

#include "Character.hpp"

class Warrior : public Character
{
protected:
    std::string weaponName;
public:
    Warrior(const std::string&, int);
    ~Warrior();
    int CloseAttack();
    int RangeAttack();
};

#endif /* WARRIOR_H_ */
