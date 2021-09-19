//
// EPITECH PROJECT, 2020
// Epitech
// File description:
// federation 2020
//

#include "Federation.hpp"
#include "Borg.hpp"

Federation::Starfleet::Ship::~Ship()
{
    
}

Federation::Ship::~Ship()
{
    
}

Federation::Starfleet::Captain::~Captain()
{
    
}

Federation::Starfleet::Ensign::~Ensign()
{
    
}


void	Federation::Starfleet::Captain::setAge(int age)
{
    this->_age = age;
}


int	Federation::Starfleet::Captain::getAge()
{
    return this->_age;
}

std::string	Federation::Starfleet::Captain::getName()
{
    return this->_name;
}

Federation::Starfleet::Ship::Ship(int _length, int _width, std::string _name, short _maxWarp)
{
    this->_length = _length;
    this->_width = _width;
    this->_name = _name;
    this->_maxWarp = _maxWarp;

    std::cout << "The ship USS " << _name << " has been finished." << std::endl;
    std::cout << "It is " << _length << " m in length and " << _width << " m in width."<< std::endl;
    std::cout << "It can go to Warp " << _maxWarp << "!" << std::endl;
}

Federation::Ship::Ship(int _length, int _width, std::string _name)
{
  this->_length = _length;
  this->_width = _width;
  this->_name = _name;
  
  std::cout << "The independent ship " << _name << " just finished its construction." << std::endl;
  std::cout << "It is " << _length << " m in length and " << _width << " m in width." << std::endl;
}

void	Federation::Ship::setupCore(WarpSystem::Core *core)
{
    this->_core = core;
    std::cout << this->_name << ": The core is set." << std::endl;
}

void	Federation::Starfleet::Ship::setupCore(WarpSystem::Core *core)
{
    this->_core = core;
    std::cout << "USS " << this->_name << ": The core is set." << std::endl;
}

void	Federation::Starfleet::Ship::checkCore()
{
    if (this->_core->checkReactor()->isStable() == false)
	std::cout << "USS " << this->_name
		  << ": The core is unstable at the time." << std::endl;
    else
	std::cout << "USS " <<  this->_name
		  << ": The core is stable at the time." << std::endl;
}

void	Federation::Ship::checkCore()
{
    if (this->_core->checkReactor()->isStable() == false)
	std::cout << this->_name
		  << ": The core is unstable at the time." << std::endl;
    else
	std::cout << this->_name
		  << ": The core is stable at the time." << std::endl;
}

Federation::Starfleet::Captain::Captain(std::string name)
{
    this->_name = name;
    this->_age = 0;
}

Federation::Starfleet::Ensign::Ensign(std::string name)
{
    this->_name = name;
    std::cout << "Ensign " << this->_name << ", awaiting orders." << std::endl;
}

void	Federation::Starfleet::Ship::promote(Federation::Starfleet::Captain *captain)
{
    this->_captain = captain;
    std::cout << captain->getName() << ": I'm glad to be the captain of the USS "
	      << this->_name << "." << std::endl;
}

bool    Federation::Starfleet::Ship::move(int warp, Destination d)
{
    if (warp <= (int)this->_maxWarp && this->_core->checkReactor()->isStable()
        && !(d == this->_location))
    {
        this->_location = d;
        return (true);
    }
    return (false);
}

bool    Federation::Starfleet::Ship::move(int warp)
{
    if (this->_core->checkReactor()->isStable()
	&& warp <= (int)this->_maxWarp)
    {
        this->_location = this->_home;
        return (true);
    }
    return (false);
}

bool    Federation::Starfleet::Ship::move(Destination d)
{
    if (this->_core->checkReactor()->isStable()
        && !(this->_location == d))
    {
     	this->_location = d;
        return (true);
    }
    return (false);
}

bool    Federation::Starfleet::Ship::move()
{
    if (this->_core->checkReactor()->isStable())
    {
        this->_location = this->_home;
        return (true);
    }
    return (false);
}

bool    Federation::Ship::move(int warp, Destination d)
{
    if (warp <= (int)this->_maxWarp && this->_core->checkReactor()->isStable()
        && !(d == this->_location))
    {
        this->_location = d;
        return (true);
    }
    return (false);
}

bool    Federation::Ship::move(int warp)
{
    if (this->_core->checkReactor()->isStable()
	&& warp <= (int)this->_maxWarp)
    {
        this->_location = this->_home;
        return (true);
    }
    return (false);
}

bool    Federation::Ship::move(Destination d)
{
    if (this->_core->checkReactor()->isStable()
        && !(this->_location == d))
    {
     	this->_location = d;
        return (true);
    }
    return (false);
}

bool    Federation::Ship::move()
{
    if (this->_core->checkReactor()->isStable())
    {
        this->_location = this->_home;
        return (true);
    }
    return (false);
}
