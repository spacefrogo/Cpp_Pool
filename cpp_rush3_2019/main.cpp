/*
** EPITECH PROJECT, 2020
** asdf
** File description:
** sdfg
*/

#include <iostream>
#include <string>
#include <cstring>
#include "SaveValues.hpp"

int	main(int ac, char **av)
{
    (void)av;
    if (ac != 2)
    {
        std::cerr << "Usage:" << std::endl;
        std::cerr << "\t./MyGKrellm -option" << std::endl;
        std::cerr << "Option:" << std::endl << "\ttext: for text mode." << std::endl << "\tgraphic: for graphical mode." << std::endl;
    } else {
        if (strcmp(av[1], "-text") == 0) {
            SaveValues s;
            s.my_text_mode();
        } else if (strcmp(av[1], "-graphic") == 0) {
            std::cout << "Graphical Mode." << std::endl;
        } else {
            std::cerr << "Usage:" << std::endl;
            std::cerr << "\t./MyGKrellm -option" << std::endl;
            std::cerr << "Option:" << std::endl << "\ttext: for text mode." << std::endl << "\tgraphic: for graphical mode." << std::endl;
        }
    }
}
