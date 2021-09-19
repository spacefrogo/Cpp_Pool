/*
** EPITECH PROJECT, 2020
** sdfg
** File description:
** sdfg
*/

#include "Box.hpp"

Box::Box() : Wrap("Box")
{
}

bool	Box::wrapMeThat(Object *obj)
{
    bool result = false;

    if (this->isOpen == true) {
        result = Wrap::wrapMeThat(obj);
    } else
        result = false;
    return (result);
}

void	Box::closeMe()
{
    this->isOpen = false;
}
