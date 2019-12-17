#include "Retailer.h"
Retailer::Retailer() 
{
	//For empty object.
	//Remember to add some default value here.
}
Retailer::Retailer(double commission1, std::string name1, std::string id1, double birthYear1, double numberOfWorkDay1, double baseSalary1, double salary1)
	:Employee{name1, id1, birthYear1, numberOfWorkDay1, baseSalary1, salary1}, commission{commission1}
{
	//Uniform Initialization
}

void Retailer::InputInformationOfEmployee() 
{
	using std::cout;
	using std::cin;

	Employee::InputInformationOfEmployee();
	cout << "Type the Commission: ";
	cin >> Retailer::commission;
}

double Retailer::FindSalary()
{
	return Employee::FindSalary() + Retailer::commission * 100;
}

void Retailer::OutputInformationOfEmployee()
{
	using std::cout;

	Employee::OutputInformationOfEmployee();
	cout << "The Commission: " << commission << "\n";
	Retailer::salary = Retailer::FindSalary();
	cout << "Salary of Retailer is: " << Retailer::salary << "\n";
}
