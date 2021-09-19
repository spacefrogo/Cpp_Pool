/*
** EPITECH PROJECT, 2019
** my
** File description:
** header file
*/

#ifndef _MY_H_
#define _MY_H_

#include <math.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct	string_s string_t;

struct	string_s
{
    void (*clear)(string_t *this);
    int	(*compare_s)(const string_t *this, const string_t *str);
    char (*at)(const string_t *this, size_t pos);
    int	(*compare_c)(const string_t *this, const char *str);
    void (*append_c)(string_t *this, const char *ap);
    int (*size)(const string_t *this);
    void (*append_s)(string_t *this, const string_t *ap);
    char *str;
    void (*assign_s)(string_t *this, const string_t *str);
    void (*assign_c)(string_t *this, const char *s);
};

int	compare_s(const string_t *this, const string_t *str);
int	compare_c(const string_t *this, const char *str);
int	size(const string_t *this);
void	clear(string_t *this);
char	at(const string_t *this, size_t pos);
void	append_c(string_t *this, const char *ap);
void	append_s(string_t *this, const string_t *ap);
void	assign_s(string_t *this, const string_t *str);
void	assign_c(string_t *this, const char *s);
void	string_init(string_t *this, const char *s);
void	string_destroy(string_t *this);

#endif /* _MY_H_ */
