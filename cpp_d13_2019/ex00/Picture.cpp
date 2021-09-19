//
// EPITECH PROJECT, 2020
// EPITECH 2020
// File description:
// cpp file picture
//

#include "Picture.hpp"

Picture::Picture() : data("")
{
    
}

Picture::Picture(const std::string &name)
{
    getPictureFromFile(name);
}

bool Picture::getPictureFromFile(const std::string &name)
{
    std::ifstream stream(name.data());
    std::stringstream buff;

    if(!(stream.is_open()))
    {
	this->data = "ERROR";
	return false;
    }
    buff << stream.rdbuf();
    this->data = buff.str();
    return true;
}
