//
// EPITECH PROJECT, 2020
// EPITECH 2020
// File description:
// find hpp file
//

#ifndef FIND_H_
#define FIND_H_

#include <algorithm>
#include <iostream>
#include <string>
#include <list>
#include <vector>

template<typename Obj>
typename Obj::iterator	do_find(Obj & ob, int nb)
{
    return (std::find(ob.begin(), ob.end(), nb));
}

#endif /* FIND_H_ */
