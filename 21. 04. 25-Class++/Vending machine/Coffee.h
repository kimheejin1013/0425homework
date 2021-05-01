#pragma once
#include "BaseItem.h"

class Coffee : public BaseItem
{
public:
	Coffee() : BaseItem() {}
	Coffee(std::string name, int price);
	Coffee();



};

