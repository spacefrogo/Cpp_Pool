/*
** EPITECH PROJECT, 2020
** EPITECH
** File description:
** header
*/

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>

typedef void (*t_func)(const char *str);

typedef struct	s_action_func {
    action_t action;
    t_func func;
}	t_action_func;

int	my_swap(int *a, int *b);
void print_normal(char *str);
void print_reverse(char *str);
void print_upper(char *str);
void print_42(char *str);
void do_action(t_action action, const char *str);
char* my_revstr(char *str);
char *my_strupcase(char *str);
int get_array_size(char *str);

