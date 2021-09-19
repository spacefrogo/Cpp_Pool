//
// EPITECH PROJECT, 2020
// EPITECH 2020
// File description:
// sorcerer cpp file
//

#include "Sorcerer.hpp"
#include "Victim.hpp"

Sorcerer::Sorcerer(std::string _name, std::string title)
{
    this->title = title;
    this->name = _name;
    speak("is born!");
}

Sorcerer::~Sorcerer()
{
    this->speak("is dead. Consequences will never be the same!");
}

std::string Sorcerer::getTitle() const
{
    return (this->title);
}

std::string Sorcerer::getName() const
{
    return (this->name);
}

void	Sorcerer::speak(std::string txt)
{
    std::cout << this->name << ", " << title
	      << ", " << txt << std::endl;
}

void	Sorcerer::polymorph(Victim const &victim) const
{
    victim.getPolymorphed();
}

std::ostream & operator<<(std::ostream &os, Sorcerer &sorcerer)
{
    return os << "I am " << sorcerer.getName() << ", "
	      << sorcerer.getTitle()
	      << ", and I like ponies!" << std::endl;
}
