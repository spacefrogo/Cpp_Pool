//
// EPITECH PROJECT, 2020
// EPITECH 2020
// File description:
// borg main file
//

#include "Borg.hpp"
#include "Federation.hpp"

Borg::Ship::~Ship()
{
    
}

Borg::Ship::Ship()
{
    this->_side = 300;
    this->_maxWarp = 9;
    
    std::cout << "We are the Borgs. Lower your shields and surrender yourselves unconditionally."
	      << std::endl;
    std::cout << "Your biological characteristics and technologies will be assimilated."
	      << std::endl;
    std::cout << "Resistance is futile."
	      << std::endl;
}

void	Borg::Ship::setupCore(WarpSystem::Core *core)
{
    this->_core = core;
}

void	Borg::Ship::checkCore()
{
    if (this->_core->checkReactor()->isStable() == false)
	std::cout << "Critical failure imminent." << std::endl;
    else
	std::cout << "Everything is in order." << std::endl;
}

bool	Borg::Ship::move(int warp, Destination d)
{
    if (warp <= (int)this->_maxWarp && this->_core->checkReactor()->isStable()
	&& !(d == this->_location))
    {
	this->_location = d;
	return (true);
    }
    return (false);
}

bool	Borg::Ship::move(int warp)
{
    if (this->_core->checkReactor()->isStable()
	&& warp <= (int)this->_maxWarp)
    {
	this->_location = this->_home;
	return (true);
    }
    return (false);
}

bool	Borg::Ship::move(Destination d)
{
    if (this->_core->checkReactor()->isStable()
	&& !(this->_location == d))
    {
	this->_location = d;
	return (true);
    }
    return (false);
}

bool	Borg::Ship::move()
{
    if (this->_core->checkReactor()->isStable())
    {
	this->_location = this->_home;
	return (true);
    }
    return (false);
}
