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

bool	Toy::setAscii(std::string const & ascii)
{
    if (this->picture.getPictureFromFile(ascii))
        return (true);
    return (false);
}
