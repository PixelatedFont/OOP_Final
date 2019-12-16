#pragma once
#include "Employee.h"
class Retailer: public Employee
{
private:
	double commission;
public:
	Retailer();
	Retailer(double comission1, std::string name1, std::string id1, std::string rank1, double birthYear1, double numberOfWorkDay1, double baseSalary1, double salary1);
	void InputInformationOfEmployee();
	double FindSalary();
	void OutputinformationofEmployee();
};

