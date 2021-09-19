/*
** EPITECH PROJECT, 2020
** EPITECH 2020
** File description:
** menger
*/

#include "include/my.h"

int	check_if_string(char *str)
{
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] < '0' || str[i] > '9')
            return (1);
    }
    return (0);
}

void	menger(int s, int le, int x, int y)
{
    s = s / 3;
    printf("%03d %03d %03d\n", s, x + s, y + s);

    if ((le > 1) && (s / 3) > 0) {
        le = le - 1;
        menger(s, le, x, y);
        menger(s, le, x, y + s);
        menger(s, le, x, y + 2 * s);
        menger(s, le, x + s, y);
        menger(s, le, x + s, y + 2 * s);
        menger(s, le, x + 2 * s, y);
        menger(s, le, x + 2 * s, y + s);
        menger(s, le, x + 2 * s, y + 2 * s);
    }
}

int	main(int ac, char **av)
{
    if (ac != 3)
        exit(84);
    if (check_if_string(av[1]) == 1 || check_if_string(av[2]) == 1)
        return (84);

    int s = atoi(av[1]);
    int le = atoi(av[2]);
    if (s > 0 && le > 0 && (s % 3 == 0) && (le <= (s / 3)))
        menger(s, le, 0, 0);
    return (0);
}
