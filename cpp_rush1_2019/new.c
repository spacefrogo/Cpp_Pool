/*
** EPITECH PROJECT, 2020
** new
** File description:
** new
*/

#include "new.h"

Object  *new(const Class *class, ...)
{
    Object *obj = (Class *)class;
    va_list ap;

    if (class == NULL)
        raise("Tried to create new class(NULL)");
    va_start(ap, class);
    obj = va_new(class, &ap);
    va_end(ap);
    return obj;
}

Object  *va_new(const Class *class, va_list *ap)
{
    size_t size = class->__size__;
    Class *class2 = malloc(size);

    if (class == NULL)
        raise("Tried to create new class(NULL)");
    memcpy(class2, class, size);
    if (class2->__ctor__)
        class2->__ctor__(class2, ap);
    return class2;
}

void	delete(Object *ptr)
{
    Class *str = NULL;

    if (ptr == NULL)
        raise("Tried to delete(NULL)");
    str = (Class *)ptr;
    if (str->__dtor__)
        str->__dtor__(str);
    free(str);
    str = NULL;
    ptr = (Object *)str;
}
