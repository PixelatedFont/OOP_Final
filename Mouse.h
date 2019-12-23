#pragma once
#include "Product.h"
#include <iostream>
#include <string>
#include <iostream>
#include <sstream>

class Mouse : public Product
{
private:
	std::string quality;

public:
	Mouse();
	Mouse(std::string quality1, std::string nameOfProduct1, std::string serialNumber1, std::string type1, std::string price1);
	void OutputProductInformation();
	void InputProductInformation();


	friend std::istream& operator >> (std::istream& in, Mouse& obj);
	friend std::ostream& operator << (std::ostream& out, const Mouse& obj);

};

