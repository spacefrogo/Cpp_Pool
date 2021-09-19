//
// EPITECH PROJECT, 2020
// EPITECH 2020
// File description:
// EPITECH 2020
//

#ifndef FRUIT_H_
#define FRUIT_H_

#include <string>
#include <iostream>

class Fruit
{
    
public:
    virtual ~Fruit() {};
    std::string const & getName() const;
    int getVitamins() const;
    Fruit(int vitamins);
    
protected:
    int _vitamins;
    std::string _name;
};

#endif /* !FRUIT_H_ */
