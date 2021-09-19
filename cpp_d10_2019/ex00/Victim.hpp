//
// EPITECH PROJECT, 2020
// EPITECH 2020
// File description:
// victim header
//

#ifndef VICTIM_H_
#define VICTIM_H_

#include <string>
#include <iostream>

class Victim
{
public:
    Victim(std::string name);
    virtual ~Victim();
    virtual std::string getName() const;
    virtual void getPolymorphed() const;
protected:
    std::string name;
};

std::ostream & operator<<(std::ostream &os, Victim &victim);

#endif /* VICTIM_H_ */
