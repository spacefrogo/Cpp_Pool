//
// EPITECH PROJECT, 2020
// EPITECH 2020
// File description:
// ex03 hpp file
//

#ifndef EX03_H_
#define EX03_H_

#include <iostream>
#include <string>

template<typename T>
void print(const T &x)
{
    std::cout << x << std::endl;
}

template<typename T>
void foreach(const T *array, void (func)(const T &), int size)
{
    for (int i = 0; i < size; i++)
	(*func)(array[i]);
}


#endif /* EX03_H_ */
