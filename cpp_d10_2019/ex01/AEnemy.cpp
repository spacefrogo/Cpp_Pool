//
// EPITECH PROJECT, 2020
// EPITECH 2020
// File description:
// Enemey cpp file
//

#include "AEnemy.hpp"

AEnemy::AEnemy(int _hp, std::string const & _type)
{
    this->hp = _hp;
    this->type = _type;
}

int	AEnemy::getHP() const
{
    return (this->hp);
}

void	AEnemy::takeDamage(int dmg)
{
    if (dmg > 0)
        hp = hp - dmg;
}

std::string	const & AEnemy::getType() const
{
    return (this->type);
}
