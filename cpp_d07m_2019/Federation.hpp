//
// EPITECH PROJECT, 2020
// EPITECH 2020
// File description:
// Federation header
//

#ifndef FEDERATION_H_
#define FEDERATION_H_

#include <stdlib.h>
#include <fstream>
#include <iostream>
#include <cstring>
#include <string>
#include "WarpSystem.hpp"
#include "Destination.hpp"

namespace	Federation
{
    namespace	Starfleet
    {
	class	Captain
	{
	    std::string _name;
	    int _age;
	    
	public:
	    Captain(std::string _name);
	    ~Captain();
	    std::string getName();
	    int	getAge();
	    void setAge(int age);
	};

	class	Ship
	{
	    int _length;
	    int _width;
	    std::string _name;
	    short _maxWarp;
	    WarpSystem::Core *_core;
	    Captain *_captain;
	    Destination _location;
	    Destination _home;

	public:
	    Ship(int length, int width, std::string _name, short _maxWarp);
	    ~Ship();
	    void setupCore(WarpSystem::Core *core);
	    void checkCore();
	    void promote(Federation::Starfleet::Captain *captain);
	    bool move(int warp, Destination d);
	    bool move(int warp);
	    bool move(Destination d);
	    bool move();
	};
	
	class	Ensign
	{
	    std::string _name;
	    
	public:
	    Ensign(std::string name);
	    ~Ensign();
	};
    }
    
    class       Ship
    {
	int _length;
	int _width;
	std::string _name;
        short _maxWarp = 1;
	WarpSystem::Core *_core;
	int warp;
	Destination _location;
	Destination _home;
	
    public:
	Ship(int length, int width, std::string name);
	~Ship();
	void setupCore(WarpSystem::Core *core);
	void checkCore();
	bool move(int warp, Destination d);
	bool move(int warp);
	bool move(Destination d);
	bool move();
    };
}

#endif /* !FEDERATION_H_ */
