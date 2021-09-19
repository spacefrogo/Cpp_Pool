/*
** EPITECH PROJECT, 2020
** sdfgh
** File description:
** dfgh
*/

#ifndef BOX_H_
#define BOX_H_

#include "Wrap.hpp"

class Box : public Wrap
{
public:
    Box();
    virtual ~Box() {};
    virtual void closeMe() = 0;
    virtual bool wrapMeThat(Object *);
};

#endif /* BOX_H_ */
