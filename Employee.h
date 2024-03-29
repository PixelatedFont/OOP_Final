#include "IEmployee.h"
#include <iostream>
#include <string>
#pragma once
class Employee: public IEmployee
{
protected:
	std::string name;
	std::string id;
	std::string rank;
	double birthYear;
	double numberOfWorkDay;
	double baseSalary;
	double salary;

public:
	Employee();
	Employee(std::string name1, std::string id1, double birthYear1, double numberOfWorkDay1, double baseSalary1, double salary1);
	//Constructor
	virtual void InputInformationOfEmployee();
	virtual double FindSalary();
	virtual void OutputInformationOfEmployee();
	friend class EmployeeModification;
};

