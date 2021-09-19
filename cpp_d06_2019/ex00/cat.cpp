//
// EPITECH PROJECT, 2020
// EPITECH
// File description:
// 2020
//

#include <string>
#include <iostream>
#include <fstream>
#include <string>

void	check_if(char **av, int i)
{
    std::cerr << "my_cat: " << av[i] << ": No such file or directory"
              << std::endl;
}
    
void	check_reading(char c, int i, char **av)
{    
    std::ifstream file(av[i]);
    if (!(file.is_open()))
	check_if(av, i);
    else {
        while (file.good()) {
            std::cout << c;
            c = file.get();
        }
        file.close();
    }
}

int	main(int ac, char **av)
{
    char c;

    if (ac >= 2) {
        for (int i = 1; i < ac; i++) {
            check_reading(c, i, av);
        }
    } else
        std::cerr << "my_cat: Usage: ./my_cat file [...]";
    return (0);
}
