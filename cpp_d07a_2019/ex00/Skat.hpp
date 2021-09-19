//
// EPITECH PROJECT, 2020
// EPITECH 2020
// File description:
// Skat ex00 header
//

#ifndef SKAT_H_
#define SKAT_H_

#include <iostream>
#include <string> 

class	Skat
{

public:
    Skat(std::string const& name, int stimPaks);
    Skat();
    ~Skat();
    int&	stimPaks();
    const std::string&	name();
    void	shareStimPaks(int number, int& stock);
    void	addStimPaks(unsigned int number);
    void	useStimPaks();
    void	status();

private:
    std::string	_name;
    int	_nbrStimPacks;
};

#endif /* !BORG_H_ */
