/*
** EPITECH PROJECT, 2020
** EPITECH 2020
** File description:
** string.c
*/

#include "string.h"

void	string_init(string_t *this, const char *s)
{
    this->at = &at;
    this->append_c = &append_c;
    this->append_s = &append_s;
    this->compare_c = &compare_c;
    this->str = strdup(s);
    this->clear = &clear;
    this->compare_s = &compare_s;
    this->assign_s = &assign_s;
    this->size = &size;
    this->assign_c = &assign_c;
}

void	string_destroy(string_t *this)
{
    if (!(this) || !(this->str))
        return;
    free(this->str);
}

void	assign_s(string_t *this, const string_t *str)
{
    if (!(this) || !(str) || !(this->str))
        return;
    string_destroy(this);
    this->str = strdup(str->str);
}

void	assign_c(string_t *this, const char *s)
{
    if (!(this) || !(s) || !(this->str))
        return;
    string_destroy(this);
    this->str = strdup(s);
}
