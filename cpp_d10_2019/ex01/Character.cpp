//
// EPITECH PROJECT, 2020
// EPITECH 2020
// File description:
// character cpp file
//

#include "Character.hpp"

Character::Character(std::string _name)
{
    this->ap = 40;
    this->name = _name;
}

void	Character::recoverAP()
{
    this->ap = this->ap + 10;
    if (this->ap > 40)
        ap = 40;
}

void	Character::equip(AWeapon *weapon)
{
    this->weapon = weapon;
}

bool	Character::action(int val)
{
    if (this->ap >= val) {
        this->ap = this->ap - val;
        return (true);
    }
    return (false);
}


std::string const &Character::getName() const
{
    return (this->name);
}

AWeapon	*Character::getWeapon() const
{
    return (this->weapon);
}

int	Character::getAp() const
{
    return (this->ap);
}


std::ostream	&operator<<(std::ostream &os, Character const &perso)
{
    os << perso.getName() << " has " << perso.getAp() << " AP and ";
    if (perso.getWeapon())
        os << "wields a " << perso.getWeapon()->getName();
    else
        os <<  "is unarmed";
    os << std::endl;
    return (os);
}

void	Character::attack(AEnemy *enemy)
{
    if (!enemy || !this->weapon)
        return;
    if (this->action(this->weapon->getAPCost())) {
        std::cout << name << " attacks " << enemy->getType()
		  <<  " with a "
		  << weapon->getName() << std::endl;
        this->weapon->attack();
        enemy->takeDamage(this->weapon->getDamage());
        if (enemy->getHP() <= 0)
            delete enemy;
    }
}
