//
// EPITECH PROJECT, 2020
// EPITECH 2020
// File description:
// doctor here
//

#ifndef KOALADOCTOR_H_
#define KOALADOCTOR_H_

#include "SickKoala.hpp"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <fstream>

class KoalaDoctor {
    
private:
    std::string name;
    bool check;

public:
    KoalaDoctor(std::string name);
    ~KoalaDoctor();
    void diagnose(SickKoala *koala);
    void timeCheck();
};

#endif /* !KOALADOCTOR_H_ */
