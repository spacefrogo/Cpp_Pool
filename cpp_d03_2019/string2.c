/*
** EPITECH PROJECT, 2020
** EPITECH 2020
** File description:
** string.c
*/

#include "string.h"

void	append_c(string_t *this, const char *ap)
{
    char *temporary;
    char *string;

    if (this == NULL || this->str == NULL || ap == NULL)
        return;
    temporary = malloc(sizeof(char) * (strlen(ap) + strlen(this->str) + 1));
    string = strdup(this->str);
    temporary[0] = '\0';
    if (string == NULL || temporary == NULL)
        return;
    if (!(this->str == NULL)) {
        temporary = strcat(temporary, string);
        temporary = strcat(temporary, ap);
    }
    string_destroy(this);
    this->str = temporary;
}

void	append_s(string_t *this, const string_t *ap)
{
    append_c(this, ap->str);
}

int	compare_s(const string_t *this, const string_t *str)
{
    return (compare_c(this, str->str));
}

int	compare_c(const string_t *this, const char *str)
{
    if (this == NULL || this->str == NULL || str == NULL)
        return (-1);
    return (strcmp(this->str, str));
}
