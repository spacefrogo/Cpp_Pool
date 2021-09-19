/*
** EPITECH PROJECT, 2020
** EPITECH 2020
** File description:
** ex00
*/

#include <stdio.h>

void	add_mul_4param(int first, int second, int *sum, int *product)
{
    *sum = first + second;
    *product = first * second;
}

void	add_mul_2param(int *first, int *second)
{
    int sum2;

    sum2 = *first + *second;
    *second = *first * *second;
    *first = sum2;
}
