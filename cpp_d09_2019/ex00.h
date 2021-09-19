/*
** EPITECH PROJECT, 2020
** EPITECH 2020
** File description:
** ex00 in c
*/

#ifndef EX00_H_
#define EX00_H_

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef	struct	s_cthulhu
{
    int m_power;
    char *m_name;
}	cthulhu_t;

typedef	struct	s_koala
{
    cthulhu_t m_parent;
    char m_is_a_legend;
}	koala_t;

cthulhu_t	*new_cthulhu();
void	print_power(cthulhu_t*);
void	attack(cthulhu_t*);
void	sleeping(cthulhu_t*);
koala_t	*new_koala(char*, char);
void	eat(koala_t*);

#endif /* EX00_H_ */
