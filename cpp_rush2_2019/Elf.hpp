//
// EPITECH PROJECT, 2020
// EPITECH 2020
// File description:
// elf header file
//

#ifndef ELF_H_
#define ELF_H_

#include "IElf.hpp"
#include <string>
#include <iostream>

class Elf : public IElf
{
public:
    Elf(std::string const& name = "Dobby");
    ~Elf();
    
    bool StartWork();
    std::string const& getName() const;
    
private:
    bool CheckIfBoxAvailable() const;
    bool CheckIfPaperAvailable() const;
    bool CheckIfToyAvailable() const;
    bool CheckIfGiftAvailable() const;
    bool TableHasPlace() const;
    void EnumTable() const;
    Object *TakeFirstToy();
    Object *TakeFirstBox();
    Object *TakeFirstPaper();
    void MakeAGift();
    bool TakeAWrap();
private:
    std::string const _gender;
    std::string const _name;
    ITable *_table;
    IConveyorBelt *_cb;
    Object *_gift;
};

#endif /* ELF_H_ */
