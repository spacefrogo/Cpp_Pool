//
// EPITECH PROJECT, 2020
// EPITECH 2020
// File description:
// wrap header
//

#ifndef WRAP_H_
#define WRAP_H_

#include "Object.hpp"

class Wrap : public Object
{
protected:
    Object *_obj;
    bool isOpen;
public:
    Wrap(const std::string &);
    virtual ~Wrap() {};
    virtual void openMe();
    virtual void closeMe() = 0;
    virtual bool wrapMeThat(Object *);
    virtual void isTaken();
    Object *getObj();
};

#endif /* WRAP_H_ */
