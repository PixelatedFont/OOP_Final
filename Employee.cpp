

#include "Employee.h"
#include <iostream>
#include <string>

//Constructor Implementation
Employee::Employee() 
{

}
Employee::Employee(std::string name1, std::string id1, std::string rank1, double birthYear1, double numberOfWorkDay1, double baseSalary1, double salary1)
	:name{name1}, id{id1}, rank{rank1}, birthYear{birthYear1},numberOfWorkDay{numberOfWorkDay1}, baseSalary{baseSalary1},salary{salary1}
{

}

void Employee::InputInformationOfEmployee()
{
	using std::cout;
	using std::cin;

	cout << "Type the name of the employee: ";
	cin >> Employee::name;
	cout << "Type the ID: ";
	cin >> Employee::id;
	cout << "Type number of work days: ";
	cin >> Employee::numberOfWorkDay;
	cout << "Type the birth year: ";
	cin >> Employee::birthYear;
	cout << "Type the base salary: ";
	cin >> Employee::baseSalary;
}

double Employee::FindSalary() { return baseSalary; }

void Employee::OutputinformationofEmployee() 
{
	using std::cout;
	
	cout << "Name of Employee: " << Employee::name << "\n";
	cout << "ID: " << id << "\n";
	cout << "Number of Work days: " << Employee::numberOfWorkDay << "\n";
	cout << "Birth Year: " << Employee::birthYear << "\n";
	cout << "Base Salary: " << Employee::baseSalary << "\n";
}

