//
// EPITECH PROJECT, 2020
// EPITECH 2020
// File description:
// toy hpp file
//

#ifndef TOY_H_
#define TOY_H_

#include "Picture.hpp"
#include <string>
#include <iostream>
#include <memory>

class Toy
{
    
public:
    enum ToyType
    {
	BASIC_TOY,
	ALIEN,
	BUZZ,
	WOODY
    };
    
    Toy();
    Toy(ToyType type, std::string const & name, std::string const & ascii);
    Toy(Toy const & toy);
    virtual ~Toy() {};
    std::string const & getName() const;
    std::string const & getAscii() const;
    int getType() const;
    void setName(std::string const & name);
    bool setAscii(std::string const & ascii);
    Toy &operator =(Toy const &toy);
virtual    void speak(std::string const &);
    
protected:
    ToyType type;
    std::string name;
    Picture picture;
};

#endif /* TOY_H_ */
