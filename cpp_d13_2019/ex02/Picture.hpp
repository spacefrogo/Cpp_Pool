//
// EPITECH PROJECT, 2020
// EPITECH 2020
// File description:
// picture hpp file
//

#ifndef PICTURE_H_
#define PICTURE_H_

#include <string>
#include <sstream>
#include <fstream>

class Picture
{
public:
    Picture();
    Picture(const std::string &file);
    virtual ~Picture() {};
    std::string data;
    Picture &operator=(Picture const &);
    bool getPictureFromFile(const std::string &file);
};

#endif /* PICTURE_H_ */
