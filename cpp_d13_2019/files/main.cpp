//
// EPITECH PROJECT, 2020
// PEuas
// File description:
// saddas
//


#include "Buzz.hpp"
#include "Woody.hpp"
#include <iostream>

int	main()
{
    Buzz	b1("L'ECLAIR");
    Buzz	b2("THE DARK KNIGHT", "buzz.txt");
    Woody	w1("LE COWBOY");
    Woody	w2("L'ALIEN", "alien.txt");
    
  std::cout << b1.getType() << std::endl;
  std::cout << b2.getType() << std::endl;
  std::cout << w1.getType() << std::endl;
  std::cout << w2.getType() << std::endl << std::endl;
  
  std::cout << "1: " << b1.getName() << std::endl << b1.getAscii() << std::endl;
  std::cout << "2: " << b2.getName() << std::endl << b2.getAscii() << std::endl;
  std::cout << "3: " << w1.getName() << std::endl << w1.getAscii() << std::endl;
  std::cout << "4: " << w2.getName() << std::endl << w2.getAscii() << std::endl;
  return 0;
}
