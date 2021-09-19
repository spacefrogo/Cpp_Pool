//
// EPITECH PROJECT, 2020
// EPITECH 2020
// File description:
// error hpp file
//

#ifndef ERRORS_HPP_
#define ERRORS_HPP_

#include <string>
#include <iostream>

class NasaError : public std::exception
{
public:
    NasaError(std::string const &message,
	      std::string const &component = "Unknown");
    virtual ~NasaError() throw() {};
    const char *what() const noexcept;
    std::string const &getComponent() const;
private:
    std::string _message;
    std::string _comp;
};

class MissionCriticalError : public NasaError
{
public:
    MissionCriticalError(std::string const &message,
			 std::string const &component = "Unknown");
    virtual ~MissionCriticalError() throw() {};
};

class LifeCriticalError : public NasaError
{
public:
    LifeCriticalError(std::string const &message,
		      std::string const &component = "Unknown");
    virtual ~LifeCriticalError() throw () {};
};

class UserError : public NasaError
{
public:
    UserError(std::string const &message,
	      std::string const &component = "Unknown");
    virtual ~UserError() throw() {};
};

class CommunicationError : public NasaError
{
public:
    CommunicationError(std::string const &message);
    virtual ~CommunicationError() throw() {};
};

#endif /* ERROR */
