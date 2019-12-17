#include "Telephonist.h"
#include <string>

Telephonist::Telephonist() 
{

}

Telephonist::Telephonist(double allowance1, std::string name1, std::string id1, double birthYear1, double numberOfWorkDay1, double baseSalary1, double salary1)
	:Employee{ name1, id1, birthYear1, numberOfWorkDay1, baseSalary1, salary1 }, allowance{allowance1}
{
	//Uniform initialization
}

void Telephonist::InputInformationOfEmployee() 
{
	using std::cout;
	using std::cin;

	Employee::InputInformationOfEmployee();
	cout << "Type the Allowance: ";
	cin >> Telephonist::allowance;
}

double Telephonist::FindSalary()
{
	return Employee::FindSalary() + Telephonist::allowance * 50;
}

void Telephonist::OutputInformationOfEmployee()
{
	using std::cout;

	Employee::OutputInformationOfEmployee();
	cout << "The Allowance: " << Telephonist::allowance << "\n";
	Telephonist::salary = Telephonist::FindSalary();
	cout << "The salary of the Telephonist is: " << Telephonist::salary << "\n";
}

