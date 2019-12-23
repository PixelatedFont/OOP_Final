#pragma once

#include "Product.h"
#include <iostream>
#include <string>

class Computer : public Product
{
private:
	std::string cpu;
	
public:
	Computer();
	Computer(std::string cpu1, std::string nameOfProduct1, std::string serialNumber1, std::string type1, std::string price1);
	void OutputProductInformation();
	void InputProductInformation();

	friend std::istream& operator >> (std::istream& in, Computer& obj);
	friend std::ostream& operator << (std::ostream& out, const Computer& obj);
};

