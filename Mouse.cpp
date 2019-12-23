#include "Mouse.h"

Mouse::Mouse()
{
	Mouse::nameOfProduct = "";
	Mouse::serialNumber = "";
	Mouse::type = "";
	Mouse::price = "";
	Mouse::quality = "";
}

Mouse::Mouse(std::string quality1, std::string nameOfProduct1, std::string serialNumber1, std::string type1, std::string price1)
	:Product{nameOfProduct1, serialNumber1, type1, price1}, quality{quality1}
{
}

void Mouse::OutputProductInformation()
{
	using std::cout;

	Product::OutputProductInformation();
	cout << "Quality: " << Mouse::quality << "\n";
}

void Mouse::InputProductInformation()
{
	using std::cout;
	using std::cin;

	Product::InputProductInformation();
	cout << "Quality: ";
	cin >> Mouse::quality;
}

std::istream& operator>>(std::istream& in, Mouse& obj)
{
	in >> obj.nameOfProduct;
	in >> obj.serialNumber;
	in >> obj.type;
	in >> obj.price;
	in >> obj.quality;

	return in;
}

std::ostream& operator<<(std::ostream& out, const Mouse& obj)
{
	out << "\n" << obj.nameOfProduct << " " << obj.serialNumber << " " << obj.type << " " << obj.price << " " << obj.quality;

	return out;
}
