//
// EPITECH PROJECT, 2020
// dsajads
// File description:
// sa
//

#define _PROGRAM_NAME "whoami"
#include <stdlib.h>
#include <pwd.h>
#include <stdio.h>

int main(void) 
{
  printf(getenv("USER"));
}
