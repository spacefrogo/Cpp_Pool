//
// EPITECH PROJECT, 2020
// EPITECH 2020
// File description:
// Koala
//

#ifndef KOALANURSE_H_
#define KOALANURSE_H_

#include "SickKoala.hpp"
#include <string>
#include <iostream>
#include <fstream>

class KoalaNurse {
    
private:
    int id;
    bool done;
    
public:
    KoalaNurse(int);
    ~KoalaNurse();
    void giveDrug(std::string, SickKoala *);
    void timeCheck();
    std::string readReport(std::string);
};

#endif /* !KOALANURSE_H_ */
