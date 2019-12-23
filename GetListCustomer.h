#pragma once

#include "IGetListCustomer.h"
#include "Customer.h"
#include <vector>
#include <iostream>
#include <fstream>
#include <istream>
#include <string>


class GetListCustomer : public IGetListCustomer
{
private:
	std::vector<Customer> listOfCustomer;
public:
	GetListCustomer();
	GetListCustomer(std::vector<Customer> listOfCustomer1);
	void InputListofCustomer();
	void AddListOfCustomer();
	void OutputListOfCustomer();
	void DisplayListOfCustomer();
};


