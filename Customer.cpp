#include "Customer.h"

Customer::Customer() 
{
	Customer::customerName = "";
	Customer::phoneNumber = "";
	Customer::moneySpent = "";
	Customer::nameOfProductBought = "";
	Customer::serialNumberOfProductBought = "";
}

Customer::Customer(std::string customerName1, std::string phoneNumber1, std::string moneySpent1, std::string nameOfProductBought1, std::string serialNumberOfProductBought1)
	:customerName{ customerName1 }, phoneNumber{ phoneNumber1 }, moneySpent{ moneySpent1 }, nameOfProductBought{ nameOfProductBought1 }, serialNumberOfProductBought{serialNumberOfProductBought1}
{

}

void Customer::OutputInformation() 
{
	using std::cout;
	cout << "Customer name: " << Customer::customerName << "\n";
	cout << "Phone number: " << Customer::phoneNumber << "\n";
	cout << "Money spent: " << Customer::moneySpent << "\n";
	cout << "Name of product bought: " << Customer::nameOfProductBought << "\n";
	cout << "Serial Number of product bought: " << Customer::serialNumberOfProductBought << "\n";
}
