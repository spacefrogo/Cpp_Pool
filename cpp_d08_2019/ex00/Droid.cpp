//
// EPITECH PROJECT, 2020
// EPITECH 2020
// File description:
// droid main file
//

#include "Droid.hpp"

size_t	Droid::getEnergy() const
{
    return (this->_energy);
}

std::string	Droid::getId() const
{
    return (this->_id);
}

size_t	Droid::getToughness() const
{
    return (this->_toughness);
}

size_t	Droid::getAttack() const
{
    return (this->_attack);
}

std::string	*Droid::getStatus() const
{
    return (this->_status);
}

void	Droid::setId(std::string id)
{
    this->_id = id;
}

void	Droid::setStatus(std::string *status)
{
    this->_status = status;
}

void	Droid::setEnergy(size_t energy)
{
    this->_energy = energy;
}

void	Droid::speak_silent(std::string message)
{
    std::cout << "Droid '" << this->_id << "' " << message << std::endl;
}

void	Droid::speak(std::string message)
{
    std::cout << "Droid '" << this->_id << "' " << message << std::endl;
}

Droid::Droid(std::string id)
{
    this->_id = id;
    this->_energy = 50;
    
    this->_status = new std::string("Standing by");
    this->speak_silent("Activated");
}

Droid::Droid(Droid const & droid)
{
    this->_energy = droid._energy;
    this->_id = droid._id;

    if (droid._status)
        this->_status = new std::string(*droid._status);
    else
        this->_status = new std::string("Standing by");
    speak("Activated, Memory Dumped");
}

Droid::~Droid()
{
    if (this->_status)
        delete this->_status;
    this->speak_silent("Destroyed");
}

Droid	&Droid::operator<<(size_t &r)
{
    size_t value;

    if (this->_energy >= 100)
    {
	this->_energy = 100;
	return (*this);
    }
    if (this->_energy + r >= 100)
	value = 100 - this->_energy;
    else
	value = r;
    this->_energy = this->_energy + value;
    r = r - value;
    return (*this);
}

Droid	&Droid::operator=(Droid const &droid)
{
    this->_energy = droid._energy;
    this->_id = droid._id;
    delete this->_status;
    this->_status = new std::string(*droid._status);
    return (*this);
}

std::ostream	&operator<<(std::ostream &s, const Droid &droid)
{
    if (droid.getEnergy() > 100)
    {
        return(s << "Droid '" << droid.getId() << "', "
	       << *droid.getStatus() << ", 100");
    } else {
        return(s << "Droid '" << droid.getId() << "', "
	       << *droid.getStatus() << ", " << droid.getEnergy());
    }
}

bool	Droid::operator==(Droid const &droid) const
{
    return this->_attack == droid._attack && this->_toughness == droid._toughness &&
	this->_id == droid._id && *this->_status == *droid._status &&
	this->_energy == droid._energy;
}

bool	Droid::operator!=(Droid const &droid) const
{
    return !((*this == droid));
}
