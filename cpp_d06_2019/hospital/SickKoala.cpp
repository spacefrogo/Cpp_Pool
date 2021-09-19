//
// EPITECH PROJECT, 2020
// EPITECH 2020
// File description:
// Koala
//

#include "SickKoala.hpp"

SickKoala::SickKoala(std::string name)
{
    this->name = name;
}

SickKoala::~SickKoala()
{
    std::cout << "Mr." << this->name << ": Kreooogg!! I'm cuuuured!" << std::endl;
}

void	SickKoala::poke()
{
    std::cout << "Mr." << this->name << ": Gooeeeeerrk!!" << std::endl;
}

std::string	SickKoala::getName()
{
    return (this->name);
}

void	SickKoala::overDrive(std::string data)
{
    const char *find = "Kreog!";
    const char *replace = "1337!";

    for (; data.find(find) != std::string::npos;)
	data.replace(data.find(find), strlen(find), replace);
    std::cout << "Mr." << this->name << ": " << data
	      << std::endl;
}

bool	SickKoala::takeDrug(std::string drug)
{
    if (strcmp(drug.c_str(), "Buronzand") == 0) {
	std::cout << "Mr." << this->name <<  ": And you'll sleep right away!"
		  << std::endl;
	return true;
    } else if (strcmp(drug.c_str(), "Mars") == 0) {
	std::cout << "Mr." << this->name << ": Mars, and it kreogs!"
		  << std::endl;
	return true;
    }
    std::cout << "Mr." << this->name << ": Goerkreog!"
	      << std::endl;
    return false;
}
