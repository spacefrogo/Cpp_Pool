//
// EPITECH PROJECT, 2020
// EPITECH 2020
// File description:
// Warpsystem
//

#ifndef WARPSYSTEM_H_
#define WARPSYSTEM_H_

namespace	WarpSystem
{
    class QuantumReactor
    {
	bool _stability = true;
	
    public:
	QuantumReactor();
	~QuantumReactor();
	bool isStable();
	void setStability(bool);
    };
    
    class Core
    {
	QuantumReactor *_coreReactor;
	
    public:
	Core(QuantumReactor *reactor);
	~Core();
	QuantumReactor* checkReactor();
    };
}

#endif /* !WARPSYSTEM_H_ */
