//
// EPITECH PROJECT, 2020
// EPITECH 2020
// File description:
// borg header
//

#ifndef BORG_H_
#define BORG_H_

#include "WarpSystem.hpp"
#include "Destination.hpp"

namespace	Borg
{
    class Ship
    {
	int _side;
	short _maxWarp;
	WarpSystem::Core *_core;
	Destination _home;
	Destination _location;
	
    public:
	Ship();
	~Ship();
	
	void setupCore(WarpSystem::Core *core);
	void checkCore();
	bool move(int warp, Destination d);
	bool move(Destination d);
	bool move(int warp);
	bool move();
    };
}

#endif /* !BORG_H_ */
