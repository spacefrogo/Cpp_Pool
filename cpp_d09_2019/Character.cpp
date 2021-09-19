//
// EPITECH PROJECT, 2020
// EPITECH 2020
// File description:
// main character
//

#include "Character.hpp"
#include "Warrior.hpp"

Character::~Character()
{
    
}

Character::Character(const std::string& name, int lvl) : name(name)
{
    const char *create = " Created";
    this->Range = CLOSE;
    this->lvl = lvl;
    this->Pv = 100;
    this->Energy = 100;
    this->Intelligence = 5;
    this->Spirit = 5;
    this->Agility = 5;
    this->Strength = 5;
    this->Stamina = 5;
    std::cout << this->name << create << std::endl;
}

const	std::string &Character::getName() const
{
    return (this->name);
}


int	Character::getPv() const
{
    return (this->Pv);
}

int	Character::getPower() const
{
    return (this->Energy);
}

int	Character::getLvl() const
{
    return (this->lvl);
}

int	Character::RangeAttack()
{
    const char *launche = " tosses a stone";
    const char *oop = " out of power";
    int ten = 10;
    int five = 5;
    int result = five + this->Strength;
    
    if (this->Energy >= ten)
    {
	this->Energy = this->Energy - ten;
	std::cout << this->name << launche << std::endl;
	return (result);
    } else {
	std::cout << this->name << oop << std::endl;
	return (0);
    }
}

void	Character::TakeDamage(int _damage)
{
    this->Pv = this->Pv - _damage;
    const char *ooc = " out of combat";
    const char *take = " takes ";
    const char *damage = " damage";
    
    if (this->Pv <= 0)
    {
	this->Energy = 0;
	std::cout << this->name << ooc << std::endl;
    } else {
	std::cout << this->name << take << _damage << damage << std::endl;
    }
}

int	Character::CloseAttack()
{
    const char *strike = " strikes with a wooden stick";
    const char *oop = " out of power";
    int ten = 10;
    int result = ten + this->Strength;
    
    if (this->Energy >= ten)
    {
	this->Energy = this->Energy - ten;
	std::cout << this->name << strike << std::endl;
	return (result);
    } else {
      std::cout << this->name << oop << std::endl;
      return (0);
  }
}

void	Character::RestorePower()
{
    this->Energy = 100;
    const char *eat = " eats";
    
    std::cout << this->name << eat << std::endl;
}

void	Character::Heal()
{
    this->Pv = this->Pv + 50;
    const char *potion = " takes a potion";
    
    if (this->Pv > 100)
    {
	this->Pv = 100;
    }
    std::cout << this->name << potion << std::endl;
}
