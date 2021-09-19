//
// EPITECH PROJECT, 2020
// EPITECH 2020
// File description:
// weapon file cpp
//

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & _name, int _cost, int _dmg)
{
    this->apCost = _cost;
    this->name = _name;
    this->damage = _dmg;
}

std::string	const	&AWeapon::getName() const
{
    return (this->name);
}

int	AWeapon::getDamage() const
{
    return (this->damage);
}

int	AWeapon::getAPCost() const
{
    return (this->apCost);
}
