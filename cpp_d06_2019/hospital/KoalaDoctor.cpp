//
// EPITECH PROJECT, 2020
// EPITECH 2020
// File description:
// Koala doctor again
//

#include "KoalaDoctor.hpp"

KoalaDoctor::KoalaDoctor(std::string name)
{
    this->name = name;
    this->check = false;
    std::cout << "Dr." << this->name << ": I'm Dr." << name
	      << "! How do you kreog?" << std::endl;
}

KoalaDoctor::~KoalaDoctor()
{
    this->name = "";
}

void KoalaDoctor::diagnose(SickKoala *koala)
{
    const std::string drogat[] = { "Mars", "Buronzand", "Viagra",
				   "Extasy", "Eucalyptus leaf"};
    std::string report = koala->getName() + ".report";
    std::ofstream file(report.c_str(), std::ios::out);

    std::cout << "Dr." << this->name << ": So what's goerking you Mr."
	      << koala->getName() << "?" << std::endl;
    koala->poke();
    if (file.is_open())
        file << drogat[rand() % 5];
}

void KoalaDoctor::timeCheck()
{
    if (this->check == false) {
        std::cout << "Dr." << this->name << ": Time to get to work!"
		  << std::endl;
        this->check = true;
    } else {
        std::cout << "Dr." << this->name << ": Time to go home to my eucalyptus forest!"
		  << std::endl;
        this->check = false;
    }
}
