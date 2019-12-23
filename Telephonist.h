#pragma once
#include "Employee.h"
#include <string>
class Telephonist: public Employee
{
private:
	double allowance;

public:
	Telephonist();
	Telephonist(double allowance, std::string name1, std::string id1, double birthyear1, double numberOfWorkDay1, double baseSalary1, double salary1);
	void InputInformationOfEmployee();
	double FindSalary();
	void OutputInformationOfEmployee();

};

