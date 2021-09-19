/*
** EPITECH PROJECT, 2020
** dfghj
** File description:
** dfghj
*/

#include "Wrap.hpp"
#include "LittlePony.hpp"
#include "Teddy.hpp"
#include "Object.hpp"
#include "Toy.hpp"
#include "Box.hpp"
#include "GiftPaper.hpp"

Object	**MyUnitTests()
{
    Object **toy = new Object*[3];

    toy[0] = new Teddy("cuddles");
    toy[1] = new LittlePony("little pony");
    toy[2] = nullptr;
    return (toy);
}

Object *MyUnitTests(Object **toy)
{
    if (!toy || !toy[0] || !toy[1] || !toy[2]) {
	return nullptr;
    }
    dynamic_cast<Box *>(toy[1])->wrapMeThat(toy[0]);
    dynamic_cast<GiftPaper *>(toy[2])->wrapMeThat(toy[1]);
    return (toy[2]);
}
