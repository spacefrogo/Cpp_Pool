//
// EPITECH PROJECT, 2020
// EPITECH 2020
// File description:
// koala header
//

#ifndef SICKKOALA_H_
#define SICKKOALA_H_

#include <string>
#include <iostream>
#include <cstring>

class SickKoala {
    
private:
    std::string name;
    
public:
    SickKoala(std::string);
    ~SickKoala();
    void poke();
    bool takeDrug(std::string);
    void overDrive(std::string);
    std::string getName();
};

#endif /* !SICKKOALA_H_ */
