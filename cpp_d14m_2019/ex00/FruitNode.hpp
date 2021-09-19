//
// EPITECH PROJECT, 2020
// EPITECH 2020
// File description:
// fruitnode header for linked
//

#ifndef FRUITNODE_H_
#define FRUITNODE_H_

#include "Fruit.hpp"
#include "Banana.hpp"
#include "Lemon.hpp"

class FruitNode
{    
public:
    Fruit *content;
    FruitNode *next;
};

#endif /* !FRUITNODE_H_ */
