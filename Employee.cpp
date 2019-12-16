#include "Employee.h"
#include <iostream>
#include <string>

class Employee
{
private:
	std::string name;
	std::string id;
	std::string rank;
	double birthYear;
	double numberOfWorkDay;
	double baseSalary;
	double salary;

public:
	void setName(std::string value) { name = value; }
	std::string getName() { return name; }

	void setID(std::string value) { id = value; }
	std::string getID() { return id; }

	void setRank(std::string value) { rank = value; }
	std::string getRank() { return rank; }

	void setBirthYear(double value) { birthYear = value; }
	double getBirthYear() { return birthYear; }

	void setWorkDay(double value) { numberOfWorkDay = value; }
	double getWorkDay() { return numberOfWorkDay; }

	void setBaseSalary(double value) { baseSalary = value; }
	double getBaseSalary() { return baseSalary; }

	void setSalary(double value) { salary = value; }
	double getSalary() { return salary; }

	Employee() 
	{
		name = {};
		id = {};
		rank = {};
		birthYear = {0};
		numberOfWorkDay = {0};
		baseSalary = {0};
		salary = {0};
	}

	Employee(std::string name1, std::string id1, std::string rank1, double birthYear1, double numberOfWorkDay1, double baseSalary1, double salary1)
	{
		name = name1;
		id = id1;
		rank = rank1;
		birthYear = birthYear1;
		numberOfWorkDay = numberOfWorkDay1;
		baseSalary = baseSalary1;
		salary = salary1;
	}


};