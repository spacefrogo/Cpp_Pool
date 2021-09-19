/*
** EPITECH PROJECT, 2020
** EPITECH
** File description:
** string.c
*/

#include "string.h"

int	size(const string_t *this)
{
    int i;

    if (this == NULL || this->str == NULL)
        return (-1);
    i = strlen(this->str);
    return (i);
}

char    at(const string_t *this, size_t pos)
{
    unsigned int size;

    if (this->str == NULL || this == NULL)
        return (-1);
    size = strlen(this->str) - 1;
    if (pos <= size)
        return (this->str[pos]);
    else
        return (-1);
}

void	clear(string_t *this)
{
    memset(this->str, 0, 0);
}
