//
// EPITECH PROJECT, 2020
// EPITECH 2020
// File description:
// ex00 hpp file
//

#ifndef EX00_H_
#define EX00_H_


template<typename T>
const T & min(const T & x, const T & y) {
    if (x < y) {
	return x;
    }
    return y;
}

template<typename T>
const T & max(const T & x, const T & y) {
    if (x > y) {
	return x;
    }
    return y;
}

template<typename T>
T add(const T & x, const T & y) {
    return x + y;
}

template<typename T>
void	swap(T& x, T& y) {
    T c = x;
    x = y;
    y = c;
}

#endif /* EX00_H_ */
