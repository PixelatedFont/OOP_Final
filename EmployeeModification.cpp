#include "EmployeeModification.h"

EmployeeModification::EmployeeModification() 
{
	EmployeeModification::listOfEmployee;
	EmployeeModification::internalList;
}

EmployeeModification::EmployeeModification(std::vector<std::shared_ptr<Employee>> employeeList, std::vector<std::shared_ptr<Employee>> internalList1)
	:listOfEmployee{employeeList}, internalList{internalList1}
{
	//Uniform Initialization
}

void EmployeeModification::InputListOfEmployee()
{
	using std::cout;
	using std::cin;

	int numOfRetailer{ 0 };
	cout << "Enter number of Retailers: ";
	cin >> numOfRetailer;
	for (int i = 0; i < numOfRetailer; i++) {
		std::shared_ptr<Retailer> newRetailer(new Retailer);
		listOfEmployee.push_back(newRetailer);
	}

	int numOfTelephonist{ 0 };
	cout << "Enter number of Telephonist: ";
	cin >> numOfTelephonist;
	for (int i = 0; i < numOfTelephonist; i++)
	{
		std::shared_ptr<Telephonist> newTelephonist(new Telephonist);
		listOfEmployee.push_back(newTelephonist);
	}

	int numOfGuard{ 0 };
	cout << "Enter number of Guard: ";
	cin >> numOfGuard;
	for (int i = 0; i < numOfGuard; i++)
	{
		std::shared_ptr<Guard> newGuard(new Guard);
		listOfEmployee.push_back(newGuard);
	}

	for (unsigned int i = 0; i < listOfEmployee.size(); i++)
	{
		listOfEmployee[i]->InputInformationOfEmployee();
	}

	for (unsigned int i = 0; i < listOfEmployee.size(); i++)
	{
		listOfEmployee[i]->OutputInformationOfEmployee();
	}
}

std::shared_ptr<Employee> EmployeeModification::FindEmployeeWithMaxSalary()
{
	std::shared_ptr<Employee> max = listOfEmployee.at(0);
	for (unsigned int i = 0; i < listOfEmployee.size(); i++)
	{
		if (max->FindSalary() < listOfEmployee.at(i).get()->FindSalary())
		{
			max = listOfEmployee.at(i);
		}
	}
	return max;

}

void EmployeeModification::ShowEmployeeWithMaxSalary()
{
	using std::cout;

	cout << "Employee with highest salary is: \n";
	FindEmployeeWithMaxSalary()->OutputInformationOfEmployee();
}

void EmployeeModification::FindTotalSalary()
{
	using std::cout;

	double sum{ 0 };
	for (unsigned int i = 0; i < listOfEmployee.size(); i++)
	{
		sum += listOfEmployee.at(i).get()->FindSalary();
	}
	cout << "Sum of all employee in store: " << sum << "\n";

}
void EmployeeModification::Remove()
{
	using std::cout;
	using std::cin;
	
	std::string temp;
	cout << "Type the employee id need to be deleted: ";
	cin >> temp;
	for (auto it = listOfEmployee.begin(); it != listOfEmployee.end(); ++it)
	{
		if (temp == (*it)->id)
		{
			cout << "Proceed to remove the employee with ID " << temp << "\n";
			listOfEmployee.erase(it);
			break;
		}
	}
	cout << "List after Removing: \n";
	std::sort(listOfEmployee.begin(), listOfEmployee.end(), [](const std::shared_ptr<Employee>& a, const std::shared_ptr<Employee>& b) {

		return a->FindSalary() > b->FindSalary(); 
		});
	for (unsigned int i = 0; i < listOfEmployee.size(); i++)
	{
		listOfEmployee[i]->OutputInformationOfEmployee();
	}
}



void EmployeeModification::SortDescending()
{
	using std::cout;
	cout << "List sorting: \n";
	std::sort(listOfEmployee.begin(), listOfEmployee.end(), [](const std::shared_ptr<Employee>& a, const std::shared_ptr<Employee>& b) {

		return a->FindSalary() > b->FindSalary();
		});
	for (unsigned int i = 0; i < listOfEmployee.size(); i++)
	{
		listOfEmployee[i]->OutputInformationOfEmployee();
	}
}





