#pragma once
#include "IProduct.h"
#include <iostream>
#include <string>

class Product : public IProduct
{
protected:
	std::string nameOfProduct;
	std::string serialNumber;
	std::string type;
	std::string price;

public:
	Product();
	Product(std::string nameOfProduct1, std::string serialNumber1, std::string type1, std::string price1);
	virtual void OutputProductInformation();

};

