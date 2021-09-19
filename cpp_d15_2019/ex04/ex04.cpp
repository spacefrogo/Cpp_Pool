//
// EPITECH PROJECT, 2020
// EPITECH 2020
// File description:
// ex04 cpp file
//

#include "ex04.hpp"
#include <string>

template<typename T>
bool	Tester<T>::equal(const T &x, const T &y)
{
    return (x == y);
}

template<typename T>
bool	equal(const T &x, const T &y)
{
    return (x == y);
}

template bool equal<int>(const int &x, const int &y);
template bool equal<float>(const float &x, const float &y);
template bool Tester<int>::equal(const int &x, const int &y);
template bool Tester<float>::equal(const float &x, const float &y);
template bool Tester<double>::equal(const double &x, const double &y);
template bool Tester<std::string>::equal(const std::string &x, const std::string &y);
template bool equal<double>(const double &x, const double &y);
template bool equal<std::string>(const std::string &x, const std::string &y);
