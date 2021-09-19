//
// EPITECH PROJECT, 2020
// EPITECH 2020
// File description:
// ex02 hpp file
//

#ifndef EX02_H_
#define EX02_H_

#include <iostream>
#include <string>
#include <cstring>

//template find minimum
template<typename T>
const T &min(const T &x, const T &y)
{
    std::cout << "template min" << std::endl;
    if (x <= y)
	return(x);
    return (y);
}

//find minimum normal way
int	min(int x, int y)
{
    std::cout << "non-template min" << std::endl;
    if (x <= y)
	return(x);
    return(y);
}


//template find minimum in an array
template<typename T>
const T &templateMin(const T *array, int size) {
    T &minimum = const_cast<T&>(array[0]);
    for (int i = 1; i < size; i++)
	minimum = min<T>(minimum, array[i]);
    return (minimum);
}

//not a template with minimum
int nonTemplateMin(int *array, int size)
{
    int minimum = array[0];
    for (int i = 1; i < size; i++)
	minimum = min(minimum, array[i]);
    return (minimum);
}

#endif /* EX02_H_ */
