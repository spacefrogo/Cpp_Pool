/*
** EPITECH PROJECT, 2018
** cpp_rush1
** File description:
** Exercice 02
*/

#include <stdio.h>
#include "point.h"
#include "new.h"

typedef struct
{
    Class   base;
    int     x;
    int	    y;
    int	    z;
    char	*str;
}   PointClass;

static void Point_ctor(PointClass *this, va_list *args)
{
    this->x = va_arg(*args, int);
    this->y = va_arg(*args, int);
    this->str = NULL;
}

static void Point_dtor(PointClass *this)
{
    if (this->str != NULL)
        free(this->str);
}

static	char	*Point_string(PointClass *this)
{
    char	*ptr = NULL;
    int	length = 0;

    length = snprintf(NULL, 0, "<Point (%d, %d)>", this->x, this->y);
    ptr = malloc(sizeof(char) * (length));
    if (ptr == NULL)
        raise("Couldn't malloc!");
    snprintf(ptr, length + 1, "<Point (%d, %d)>", this->x, this->y);
    this->str = ptr;
    return (this->str);
}

static  Object  *Point_addition(const Object *this, const Object *other)
{
    PointClass *v1 = (PointClass *)this;
    PointClass *v2 = (PointClass *)other;
    PointClass *v3 = new(Point);
    int length = 0;
    char        *ptr = NULL;

    v3->x = v1->x + v2->x;
    v3->y = v1->y + v2->y;
    length = snprintf(ptr, 0, "<Point (%d, %d)> + <Point (%d, %d)> = <Vertex (%d, %d)>",
    v1->x, v1->y, v2->x, v2->y, v1->x + v2->x, v1->y + v2->y);
    if ((ptr = malloc(sizeof(char) * (length + 1))) == NULL)
        raise("Couldn't malloc!");
    snprintf(ptr, length + 1, "<Point (%d, %d)> + <Point (%d, %d)> = <Point (%d, %d)>", \
             v1->x, v1->y, v2->x, v2->y, v3->x, v3->y);
    v3->str = ptr;
    return (Object *)v3;
}

static  Object  *Point_subtraction(const Object *this, const Object *other)
{
    PointClass *v1 = (PointClass *)this;
    PointClass *v2 = (PointClass *)other;
    PointClass *v3 = new(Point);
    int length = 0;
    char        *ptr = NULL;

    v3->x = v1->x - v2->x;
    v3->y = v1->y - v2->y;
    length = snprintf(ptr, 0, "<Point (%d, %d)> + <Point (%d, %d)> = <Point (%d, %d)>", \
    v1->x, v1->y, v2->x, v2->y, v1->x - v2->x, v1->y - v2->y);
    if ((ptr = malloc(sizeof(char) * (length + 1))) == NULL)
        raise("Couldn't malloc!");
    snprintf(ptr, length + 1, "<Point (%d, %d)> + <Point (%d, %d)> = <Point (%d, %d)>", \
    v1->x, v1->y, v2->x, v2->y, v3->x, v3->y);
    v3->str = ptr;
    return (Object *)v3;
}


static const PointClass _description = {
    {
        .__size__ = sizeof(PointClass),
        .__name__ = "Point",
        .__ctor__ = (ctor_t)&Point_ctor,
        .__dtor__ = (dtor_t)&Point_dtor,
        .__str__ = (to_string_t)&Point_string,
        .__add__ = (binary_operator_t)&Point_addition,
        .__sub__ = (binary_operator_t)&Point_subtraction,
        .__mul__ = NULL,
        .__div__ = NULL,
        .__eq__ = NULL,
        .__gt__ = NULL,
        .__lt__ = NULL
    },
    .x = 0,
    .y = 0,
    .str = NULL
};

const Class   *Point = (const Class *)&_description;
