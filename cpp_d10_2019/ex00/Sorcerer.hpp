//
// EPITECH PROJECT, 2020
// EPITECH 2020
// File description:
// sorcerer header
//

#ifndef SORCERER_H_
#define SORCERER_H_

#include "Victim.hpp"
#include "Peon.hpp"
#include <string>
#include <iostream>

class Sorcerer
{
public:
    Sorcerer(std::string, std::string);
    virtual ~Sorcerer();
    std::string getName() const;
    std::string getTitle() const;
    virtual void polymorph(Victim const &) const;
protected:
    std::string name;
    std::string title;
    virtual void speak(std::string);
};

std::ostream & operator<<(std::ostream &os, Sorcerer &sorcerer);

#endif /* SORCERER_H_ */
