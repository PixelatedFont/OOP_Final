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

void Customer::InputInformation()
{
	using std::cout;
	using std::cin;

	cout << "Input Customer name: ";
	cin >> Customer::customerName;
	cout << "Input Phone number: ";
	cin >> Customer::phoneNumber;
	cout << "Input Money spent: ";
	cin >> Customer::moneySpent;
	cout << "Input Name of product bought: ";
	cin >> Customer::nameOfProductBought;
	cout << "Input Product serial number: ";
	cin >> Customer::serialNumberOfProductBought;
}

std::istream& operator>>(std::istream& in, Customer& obj)
{	
	in >> obj.customerName;
	in >> obj.phoneNumber;
	in >> obj.moneySpent;
	in >> obj.nameOfProductBought;
	in >> obj.serialNumberOfProductBought;

	return in;	
}

std::ostream& operator<<(std::ostream& out, const Customer& obj)
{
	out << "\n" << obj.customerName << " " << obj.phoneNumber << " " << obj.moneySpent << " " << obj.nameOfProductBought << " " << obj.serialNumberOfProductBought;
	
	return out;
}
