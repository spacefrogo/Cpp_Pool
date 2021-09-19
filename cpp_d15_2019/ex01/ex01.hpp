//
// EPITECH PROJECT, 2020
// EPITECH 2020
// File description:
// ex01 hpp file
//

#ifndef EX01_H_
#define EX01_H_

#include <cstring>
#include <string>

// class toto
// {
// public :
//     toto()= default ;
//     toto &operator=( const toto &) = delete;
//     toto ( const toto &) = delete;
//     bool operator==(const toto&) const { return true ; }
//     bool operator>(const toto&) const { return false ; }
//     bool operator<(const toto&) const { return false ; }
// };

template<typename T>
int compare(const T & x, const T & y)
{
    if (x > y)
	return 1;
    if (x == y)
	return 0;
    return -1;
}

template<>
int compare<const char *>(const char * const &x, const char * const &y)
{
    int result = strcmp(x, y);
    
    if (result < 0)
	return -1;
    else if (result > 0)
	return 1;
    return 0;
}

#endif /* EX01_H_ */
