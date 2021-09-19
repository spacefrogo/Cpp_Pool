/*
** EPITECH PROJECT, 2020
** vertex
** File description:
** vertex
*/

#include <stdio.h>
#include "vertex.h"
#include "new.h"

typedef	struct
{
    Class	base;
    int	x;
    int	y;
    int	z;
    char	*str;
}	VertexClass;

static	void	Vertex_ctor(VertexClass *this, va_list *args)
{
    this->x = va_arg(*args, int);
    this->y = va_arg(*args, int);
    this->z = va_arg(*args, int);
    this->str = NULL;
}

static	void	Vertex_dtor(VertexClass *this)
{
    if (this->str != NULL)
        free(this->str);
}

static	char	*Vertex_string(Object *this)
{
    VertexClass *vertex = (VertexClass *)this;
    char	*ptr = NULL;
    int	length = 0;

    length = snprintf(ptr, 0, "<Vertex (%d, %d, %d)>", \
    vertex->x, vertex->y, vertex->z);
    ptr = malloc(sizeof(char) * (length + 1));
    if (ptr == NULL)
        raise("Couldn't malloc!");
    snprintf(ptr, length + 1, "<Vertex (%d, %d, %d)>", \
    vertex->x, vertex->y, vertex->z);
    vertex->str = ptr;
    return (vertex->str);
}

static	Object	*Vertex_addition(const Object *this, const Object *other)
{
    VertexClass	*v1 = (VertexClass *)this;
    VertexClass	*v2 = (VertexClass *)other;
    VertexClass	*v3 = new(Vertex);
    int	length = 0;
    char	*ptr = NULL;

    v3->x = v1->x + v2->x;
    v3->y = v1->y + v2->y;
    v3->z = v1->z + v2->z;
    length = snprintf(ptr, 0, \
    "<Vertex (%d, %d, %d)> + <Vertex (%d, %d, %d)> = <Vertex (%d, %d, %d)>", \
    v1->x, v1->y, v1->z, v2->x, v2->y, v2->z, \
    v1->x + v2->x, v1->y + v2->y, v1->z + v2->z);
    if ((ptr = malloc(sizeof(char) * (length + 1))) == NULL)
        raise("Couldn't malloc!");
    snprintf(ptr, length + 1, \
    "<Vertex (%d, %d, %d)> + <Vertex (%d, %d, %d)> = <Vertex (%d, %d, %d)>", \
    v1->x, v1->y, v1->z, v2->x, v2->y, v2->z, v3->x, v3->y, v3->z);
    v3->str = ptr;
    return (Object *)v3;
}

static	Object	*Vertex_subtraction(const Object *this, const Object *other)
{
    VertexClass	*v1 = (VertexClass *)this;
    VertexClass	*v2 = (VertexClass *)other;
    VertexClass	*v3 = new(Vertex);
    int	length = 0;
    char	*ptr = NULL;

    v3->x = v1->x - v2->x;
    v3->y = v1->y - v2->y;
    v3->z = v1->z - v2->z;
    length = snprintf(ptr, 0, \
    "<Vertex (%d, %d, %d)> + <Vertex (%d, %d, %d)> = <Vertex (%d, %d, %d)>", \
    v1->x, v1->y, v1->z, v2->x, v2->y, v2->z, \
    v1->x - v2->x, v1->y - v2->y, v1->z - v2->z);
    if ((ptr = malloc(sizeof(char) * (length + 1))) == NULL)
        raise("Couldn't malloc!");
    snprintf(ptr, length + 1, \
    "<Vertex (%d, %d, %d)> + <Vertex (%d, %d, %d)> = <Vertex (%d, %d, %d)>", \
    v1->x, v1->y, v1->z, v2->x, v2->y, v2->z, v3->x, v3->y, v3->z);
    v3->str = ptr;
    return (Object *)v3;
}

static	const	VertexClass	_description = {
    {
        .__size__ = sizeof(VertexClass),
        .__name__ = "Vertex",
        .__ctor__ = (ctor_t)&Vertex_ctor,
        .__dtor__ = (dtor_t)&Vertex_dtor,
        .__str__ = (to_string_t)&Vertex_string,
        .__add__ = (binary_operator_t)&Vertex_addition,
        .__sub__ = (binary_operator_t)&Vertex_subtraction,
        .__mul__ = NULL,
        .__div__ = NULL,
        .__eq__ = NULL,
        .__gt__ = NULL,
        .__lt__ = NULL
    },
    .x = 0,
    .y = 0,
    .z = 0,
    NULL
};

const	Class	*Vertex = (const Class *)&_description;
