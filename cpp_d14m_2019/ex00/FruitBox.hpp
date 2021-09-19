//
// EPITECH PROJECT, 2020
// EPITECH 2020
// File description:
// fruitbox hpp file
//

#ifndef FRUITBOX_H_
#define FRUITBOX_H_

#include "Fruit.hpp"
#include "FruitNode.hpp"
#include <iostream>

class FruitBox
{
    
protected:
    int size;
    int count;
    FruitNode *header;
    
public:
    FruitBox(int);
    virtual ~FruitBox() {};
    int nbFruits() const;
    FruitNode *head() const;
    bool putFruit(Fruit*);
    Fruit *pickFruit();
};

#endif /* !FRUITBOX_H_ */
