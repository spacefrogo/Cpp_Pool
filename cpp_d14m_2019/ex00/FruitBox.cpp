//
// EPITECH PROJECT, 2020
// EPITECH 2020
// File description:
// fruitbox cpp file
//

#include "FruitBox.hpp"

FruitBox::FruitBox(int size)
{
    this->size = size;
    this->count = 0;
    this->header = nullptr;
}

bool	FruitBox::putFruit(Fruit *fruit)
{
    FruitNode *current;
    FruitNode *elem;
    int i = 1;

    if (this->size <= 0 || fruit == nullptr)
      return (false);
    if ((header == nullptr)) {
        header = new FruitNode;
        header->content = fruit;
        header->next = nullptr;
        this->count = this->count + 1;
        return (true);
    }
    current = header;
    while (current->next != nullptr) {
	if ((current->content == fruit) || (i >= size))
            return (false);
	i++;
        current = current->next;
    }
    if (i >= size)
        return (false);
    if (current->content == fruit)
        return (false);
    elem = new FruitNode;
    elem->content = fruit;
    elem->next = nullptr;
    current->next = elem;
    count = count + 1;
    return (true);
}

int	FruitBox::nbFruits() const
{
    return (this->count);
}

FruitNode	*FruitBox::head() const
{
    return (this->header);
}

Fruit	*FruitBox::pickFruit()
{
    FruitNode *current;
    Fruit *f;
    
    if (this->header == nullptr)
        return (nullptr);
    f = this->header->content;
    current = header;
    header = header->next;
    delete (current);
    count = count - 1;
    return (f);
}
