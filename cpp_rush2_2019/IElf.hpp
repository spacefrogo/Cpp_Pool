//
// EPITECH PROJECT, 2020
// EPITECH 2020
// File description:
// IELF hpp file
//

#ifndef IELF_H_
#define IELF_H_

#include <string>

class IElf
{
protected:
    virtual ~IElf() {}
    virtual bool CheckIfBoxAvailable() const = 0;
    virtual bool CheckIfPaperAvailable() const = 0;
    virtual bool CheckIfToyAvailable() const = 0;
    virtual bool TakeAWrap() = 0;
    virtual bool CheckIfGiftAvailable() const = 0;
    virtual bool TableHasPlace() const = 0;
    virtual void EnumTable() const;
    virtual Object *TakeFirstToy();
    virtual Object *TakeFirstBox();
    virtual Object *TakeFirstPaper();
    virtual void MakeAGift();
public:
    virtual bool StartWork() = false;
    virtual std::string const& getName() const;
};

#endif /* IELF_H_ */
