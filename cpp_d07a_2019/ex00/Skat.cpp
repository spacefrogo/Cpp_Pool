//
// EPITECH PROJECT, 2020
// EPITECH 2020
// File description:
// main skat ex00
//

#include "Skat.hpp"

Skat::Skat(std::string const& name, int stimPaks)
{
    _nbrStimPacks = stimPaks;
    _name = name;
}

Skat::~Skat()
{
    
}

Skat::Skat() : _name("bob"), _nbrStimPacks(15)
{
    
}

int	&Skat::stimPaks()
{
    return (_nbrStimPacks);
}

const	std::string &Skat::name()
{
    return (_name);
}

void	Skat::shareStimPaks(int number, int &stock)
{
    if (_nbrStimPacks < number)
	std::cout << "Don't be greedy" << std::endl;
    else {
	stock = stock + number;
	_nbrStimPacks = _nbrStimPacks - number;
	std::cout << "Keep the change." << std::endl;
    }
}

void	Skat::addStimPaks(unsigned int number)
{
    if (number == 0)
	std::cout << "Hey boya, did you forget something?" << std::endl;
    else
	_nbrStimPacks = _nbrStimPacks + number;
}

void	Skat::useStimPaks()
{
    if (_nbrStimPacks > 0)
    {
	std::cout << "Time to kick some ass and chew bubble gum." << std::endl;
	_nbrStimPacks--;
    } else
	std::cout << "Mediiiiiic" << std::endl;
}

void	Skat::status()
{
    std::cout << "Soldier " << _name << " reporting " << _nbrStimPacks
	      << " stimpaks remaining sir!"
	      << std::endl;
}
