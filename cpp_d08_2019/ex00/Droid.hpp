//
// EPITECH PROJECT, 2020
// EPITECH 2020
// File description:
// droid header
//

#ifndef DROID_H_
#define DROID_H_

#include <stdlib.h>
#include <fstream>
#include <string>
#include <algorithm>
#include <iostream>

class Droid
{
    std::string _id;
    size_t _energy;
    const size_t _attack = 25;
    const size_t _toughness = 15;
    std::string *_status;

public:
    Droid(std::string id = "");
    Droid(Droid const&);
    ~Droid();
    std::string getId() const;
    size_t getEnergy() const;
    size_t getAttack() const;
    size_t getToughness() const;
    std::string *getStatus() const;
    void speak(std::string);
    void speak_silent(std::string);
    void setId(std::string);
    void setEnergy(size_t);
    void setStatus(std::string*);
    Droid &operator=(Droid const&);
    Droid &operator<<(size_t &);
    bool operator==(Droid const &) const;
    bool operator!=(Droid const &) const;
};

std::ostream &operator<<(std::ostream &s, const Droid &droid);

#endif /* DROID_H_ */
