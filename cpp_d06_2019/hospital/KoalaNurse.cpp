//
// EPITECH PROJECT, 2020
// EPITECH 2020
// File description:
// koala nurse .cpp
//

#include "KoalaNurse.hpp"

KoalaNurse::KoalaNurse(int val)
{
    this->done = false;
    this->id = val;
}

KoalaNurse::~KoalaNurse()
{   
    std::cout << "Nurse " << this->id << ": Finally some rest!" << std::endl;
}

void	KoalaNurse::timeCheck()
{
    if (done == false) {
        std::cout << "Nurse " << this->id << ": Time to get to work!"
		  << std::endl;
        done = true;
    } else {
        std::cout << "Nurse " << this->id << ": Time to go home to my eucalyptus forest!"
		  << std::endl;
        done = false;
    }
}

void	KoalaNurse::giveDrug(std::string droga, SickKoala *koala)
{
    koala->takeDrug(droga);
}

std::string KoalaNurse::readReport(std::string filename)
{
    std::string droga = "";
    std::string koala;
    std::ifstream file(filename.c_str(), std::ios::in);
    
    if (filename.substr(filename.find_last_of(".") + 1) == "report") {
        koala = filename.substr(0, filename.find("."));
        if (!(!file.is_open()))
            getline(file, droga);
        if (droga != "")
            std::cout << "Nurse " << this->id << ": Kreog! Mr." << koala
		      << " needs a " << droga <<  "!" << std::endl;
    }
    return (droga);
}
