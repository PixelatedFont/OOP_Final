#pragma once
#include "Employee.h"
class Guard : public Employee
{
private:
	double bonus;

public:
	Guard();
	Guard(double bonus1, std::string name1, std::string id1, double birthYear1, double numberOfWorkDay, double baseSalary1, double salary);
	void InputInformationOfEmployee();
	double FindSalary();
	void OutputInformationOfEmployee();
};

