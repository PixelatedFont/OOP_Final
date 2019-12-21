#pragma once

#include "ICustomer.h"
#include <string>
#include <iostream>

class Customer : public ICustomer
{
protected:
	std::string	customerName;
	std::string phoneNumber;
	std::string moneySpent;
	std::string nameOfProductBought;
	std::string serialNumberOfProductBought;

public:
	Customer();
	Customer(std::string customerName1, std::string phoneNumber1, std::string moneySpent1, std::string nameOfProductBought1, std::string serialNumberOfProductBought1);
	void OutputInformation();

};

