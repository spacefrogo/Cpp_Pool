//
// EPITECH PROJECT, 2020
// EPITECH 2020
// File description:
// character header
//

#ifndef CHARACTER_H_
#define CHARACTER_H_

#include <fstream>
#include <string>
#include <algorithm>
#include <iostream>

class Character
{
protected:
    const std::string name;
    int lvl;
    int Pv;
    int	Stamina;
    int	Intelligence;
    int	Spirit;
    int	Agility;
    int	Energy;
    int	Strength;
    
public:
    Character(const std::string&, int);
    ~Character();
    const std::string &getName() const;
    int CloseAttack();
    int RangeAttack();
    void Heal();
    void RestorePower();
    void TakeDamage(int _damage);
    int getLvl() const;
    int getPv() const;
    int getPower() const;
    
    typedef enum AttackRange
    {
	CLOSE,
	RANGE
    } AttackRange;
    
    AttackRange Range;
};

#endif /* CHARACTER_H_ */
