//
// EPITECH PROJECT, 2020
// EPITECH 2020
// File description:
// Enemy hpp file
//

#ifndef AENEMY_H_
#define AENEMY_H_

#include <string>

class AEnemy {
public:
    AEnemy(int, std::string const & type);
    virtual ~AEnemy() {};
    std::string const & getType() const;
    int getHP() const;
    virtual void takeDamage(int);
protected:
    int hp;
    std::string type;
};

#endif /* AENEMY_H_ */
