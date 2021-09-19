//
// EPITECH PROJECT, 2020
// EPITECH 2020
// File description:
// wrapp cpp
//

#include "Wrap.hpp"

Wrap::Wrap(const std::string &name) : Object(name)
{
    this->isOpen = true;
    this->_obj = NULL;
}

bool	Wrap::wrapMeThat(Object *obj)
{
    if (!obj || !this->_obj) {
	this->_obj = obj;
	std::cout << "tuuuut tuuut tuut" << std::endl;
	this->isOpen = false;
	return (true);
    }
    return (false);
}

void	Wrap::openMe()
{
    this->isOpen = true;
}

void	Wrap::isTaken()
{
    std::cout << "whistles while working" << std::endl;
}

Object	*Wrap::getObj()
{
    if (this->isOpen == true) {
	std::cout << "whistles while working" << std::endl;
	return (this->_obj);
    }
    return (nullptr);
}
