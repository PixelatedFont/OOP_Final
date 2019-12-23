#pragma once

#include "Product.h"
#include <iostream>
#include <string>

class Keyboard : public Product
{
private:
	std::string color;
	
public:
	Keyboard();
	Keyboard(std::string color1, std::string nameOfProduct1, std::string serialNumber1, std::string type1, std::string price1);
	void OutputProductInformation();
	void InputProductInformation();

	friend std::istream& operator >> (std::istream& in, Keyboard& obj);
	friend std::ostream& operator << (std::ostream& out, const Keyboard& obj);

};

