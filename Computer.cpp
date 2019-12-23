#include "Computer.h"

Computer::Computer()
{
	Computer::nameOfProduct = "";
	Computer::serialNumber = "";
	Computer::type = "";
	Computer::price = "";
	Computer::cpu = "";
}

Computer::Computer(std::string cpu1, std::string nameOfProduct1, std::string serialNumber1, std::string type1, std::string price1)
	:Product{ nameOfProduct1, serialNumber1, type1, price1 }, cpu{ cpu1 }
{
}

void Computer::OutputProductInformation()
{
	using std::cout;

	Product::OutputProductInformation();
	cout << "CPU: " << Computer::cpu << "\n";
}

void Computer::InputProductInformation()
{
	using std::cout;
	using std::cin;

	Product::InputProductInformation();
	cout << "CPU: ";
	cin >> Computer::cpu;
}

std::istream& operator>>(std::istream& in, Computer& obj)
{
	in >> obj.nameOfProduct;
	in >> obj.serialNumber;
	in >> obj.type;
	in >> obj.price;
	in >> obj.cpu;

	return in;
}

std::ostream& operator<<(std::ostream& out, const Computer& obj)
{
	out << "\n" << obj.nameOfProduct << " " << obj.serialNumber << " " << obj.type << " " << obj.price << " " << obj.cpu;
	return out;
}
