//
// EPITECH PROJECT, 2020
// EPITECH 2020
// File description:
// toy cpp file
//

#include "Toy.hpp"

Toy::Toy() : type(BASIC_TOY), name("toy")
{
    
}

Toy::Toy(Toy const & toy) : type(toy.type), name(toy.name), picture(toy.picture)
{
    
}

Toy::Toy(ToyType type, std::string const & name, std::string const & ascii) : type(type), name(name), picture(ascii)
{
    
}

void	Toy::setName(std::string const & name)
{
    this->name = name;
}

int	Toy::getType() const
{
    return (this->type);
}

std::string	const & Toy::getName() const
{
    return (this->name);
}

std::string	const & Toy::getAscii() const
{
    return (this->picture.data);
}

Toy	&Toy::operator=(Toy const &toy)
{
    this->type = toy.type;
    this->name = toy.name;
    this->picture = toy.picture;
    
    return (*this);
}

void	Toy::speak(std::string const &message)
{
    std::cout << this->getName() << " \"" << message << "\"" << std::endl;
}

bool	Toy::setAscii(std::string const &ascii)
{
    if (this->picture.getPictureFromFile(ascii))
        return (true);
    return (false);
}

Toy	&Toy::operator<<(std::string const &ascii)
{
    this->picture.data = ascii;
    return (*this);
}

std::ostream	&operator<<(std::ostream &os, Toy const &toy)
{
    return (os << toy.getName() << std::endl << toy.getAscii() << std::endl);
}
