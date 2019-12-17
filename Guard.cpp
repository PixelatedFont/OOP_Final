#include "Guard.h"
#include <string>
Guard::Guard()
{

}

Guard::Guard(double bonus1, std::string name1, std::string id1, double birthYear1, double numberOfWorkDay1, double baseSalary1, double salary1)
	:Employee(name1, id1, birthYear1, numberOfWorkDay1, baseSalary1, salary1), bonus{ bonus1 }
{
	//Uniform Initialization
}

void Guard::InputInformationOfEmployee()
{
	using std::cout;
	using std::cin;

	Employee::InputInformationOfEmployee();
	cout << "Type the Bonus: ";
	cin >> Guard::bonus;
}

double Guard::FindSalary() 
{
	return Employee::FindSalary() + Guard::bonus * 200;
}

void Guard::OutputInformationOfEmployee()
{
	using std::cout;

	Employee::OutputInformationOfEmployee();
	cout << "Bonus: " << Guard::bonus << "\n";
	Guard::salary = Guard::FindSalary();
	cout << "The salary of the Guard is: " << Guard::salary << "\n";
}