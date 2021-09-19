//
// EPITECH PROJECT, 2020
// EPITECH 2020
// File description:
// main warrior
//

#include "Warrior.hpp"

Warrior::Warrior(const std::string& name, int lvl) : Character(name, lvl)
{
    this->Strength = 12;
    this->weaponName = "hammer";
    this->Stamina = 12;
    this->Intelligence = 6;
    this->Spirit = 5;
    this->Agility = 7;
    std::cout << "I'm " << this->name
	      << " KKKKKKKKKKRRRRRRRRRRRRRREEEEEEEEOOOOOOORRRRGGGGGGG"
	      << std::endl;
}

Warrior::~Warrior()
{
    
};

int	Warrior::CloseAttack()
{
    const char *toos = " strikes with his ";
    const char *oop = " out of power";
    int result = 20 + this->Strength;

    if (this->Energy >= 30)
    {
	this->Energy = this->Energy - 30;
	std::cout << this->name << toos << this->weaponName << std::endl;
	return (result);
    } else {
	std::cout << this->name << oop << std::endl;
	return (0);
    }
}

int	Warrior::RangeAttack()
{
    const char *inter = " intercepts";
    const char *oop = " out of power";
    int result = 5 + this->Strength;

    if (this->Energy >= 10)
    {
	this->Energy = this->Energy - 10;
	std::cout << this->name << inter << std::endl;
	this->Range = Character::CLOSE;
	return (result);
    } else {
	std::cout << this->name << oop << std::endl;
	return (0);
    }
}
