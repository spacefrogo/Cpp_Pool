//
// EPITECH PROJECT, 2020
// EPITECH 2020
// File description:
// Warpsystem g++
//

#include "WarpSystem.hpp"

WarpSystem::QuantumReactor::QuantumReactor()
{
    
}

WarpSystem::QuantumReactor::~QuantumReactor()
{
    
}

WarpSystem::Core::~Core()
{
    
}

WarpSystem::Core::Core(QuantumReactor *_reactor)
{
    this->_coreReactor = _reactor;
}

WarpSystem::QuantumReactor *WarpSystem::Core::checkReactor()
{
    return (this->_coreReactor);
}

void    WarpSystem::QuantumReactor::setStability(bool _stability)
{
    this->_stability = _stability;
}

bool	WarpSystem::QuantumReactor::isStable()
{
    return (this->_stability);
}
