//
// EPITECH PROJECT, 2020
// EPITECH 2020
// File description:
// peon header
//

#ifndef PEON_H_
#define PEON_H_

#include "Victim.hpp"

class Peon : public Victim
{
    
public:
    Peon(std::string);
    virtual ~Peon();
    void getPolymorphed() const;
};

#endif /* PEON_H_ */
