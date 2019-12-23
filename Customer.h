#pragma once

#include "ICustomer.h"
#include <string>
#include <iostream>
#include <sstream>

class Customer : public ICustomer
{
public:
	std::string	customerName;
	std::string phoneNumber;
	std::string moneySpent;
	std::string nameOfProductBought;
	std::string serialNumberOfProductBought;

public:
	Customer();
	Customer(std::string customerName1, std::string phoneNumber1, std::string moneySpent1, std::string nameOfProductBought1, std::string serialNumberOfProductBought1);
	void OutputInformation();
	void InputInformation();
	
	friend std::istream& operator >> (std::istream& in, Customer& obj);
	friend std::ostream& operator << (std::ostream& out, const Customer& obj);


};

