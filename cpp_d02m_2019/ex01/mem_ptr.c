/*
** EPITECH PROJECT, 2020
** EPITECH
** File description:
** ex02
*/

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "mem_ptr.h"

int	my_strlen(char *str)
{
    int k = 0;

    if (str == NULL)
        exit(84);
    while (str[k] != '\0')
        k++;
    return k;
}

void	add_str(char *str1, char *str2, char **res)
{
    *res = malloc(my_strlen(str1) + my_strlen(str2) + 1);

    if (!(*res)) {
        free(res);
        return;
    }
    if (strcpy(*res, str1) == NULL) {
        free(res);
        return;
    }
    if (strcat(*res, str2) == NULL) {
        free(res);
        return;
    }
}

void	add_str_struct(str_op_t *str_op)
{
    add_str(str_op->str1, str_op->str2, &str_op->res);
}
