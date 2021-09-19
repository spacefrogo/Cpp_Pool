//
// EPITECH PROJECT, 2020
// EPITECH 2020
// File description:
// convert
//

#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <algorithm>
#include <cstring>

void   	do_calculation(float temp, float res, float res1)
{
    char data[1000];

    std::cin >> temp >> data;
    if (strncmp(data, "Celsius", 7) == 0) {
	res = 9.0 / 5.0 * temp + 32;
	std::cout.precision(3);
	std::cout << std::setw(16) << std::fixed << res <<
	    std::setw(16) << "Fahrenheit" << std::endl;
    } 
    if (strncmp(data, "Fahrenheit", 10) == 0) {	    
	res1 = 5.0 / 9.0 * (temp - 32);
	std::cout.precision(3);
	std::cout << std::setw(16) << std::fixed << res1
		  << std::setw(16) << "Celsius" << std::endl;
    }
}

int	main(void)
{
    float temp = 0;
    float res = 0;
    float res1 = 0;

    do_calculation(temp, res, res1);
    return 0;
}
