/*
** EPITECH PROJECT, 2020
** EPITECH 2020
** File description:
** ex02
*/

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

void	tab_to_2dtab(const int *tab, int length, int width, int ***res)
{
    *res = malloc(sizeof(int *) * length + 1);

    for (int i = 0; i <= length; i++) {
        (*res)[i] = malloc(sizeof(int) * width + 1);
        for (int j = 0; j <= width; j++)
            (*res)[i][j] = tab[i * width + j];
    }
}
