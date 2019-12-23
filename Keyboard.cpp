#include "Keyboard.h"

Keyboard::Keyboard()
{
	Keyboard::nameOfProduct = "";
	Keyboard::serialNumber = "";
	Keyboard::type = "";
	Keyboard::price = "";
	Keyboard::color = "";
}

Keyboard::Keyboard(std::string color1, std::string nameOfProduct1, std::string serialNumber1, std::string type1, std::string price1)
	:Product{nameOfProduct1, serialNumber1, type1, price1}, color{color1}
{
}

void Keyboard::OutputProductInformation()
{
	using std::cout;

	Product::OutputProductInformation();
	cout << "Color: " << Keyboard::color;
}

void Keyboard::InputProductInformation()
{
	using std::cout;
	using std::cin;

	Product::InputProductInformation();
	cout << "Color: ";
	cin >> Keyboard::color;
}

std::istream& operator>>(std::istream& in, Keyboard& obj)
{
	in >> obj.nameOfProduct;
	in >> obj.serialNumber;
	in >> obj.type;
	in >> obj.price;
	in >> obj.color;

	return in;
}

std::ostream& operator<<(std::ostream& out, const Keyboard& obj)
{
	out << "\n" << obj.nameOfProduct << " " << obj.serialNumber << " " << obj.type << " " << obj.price << " " << obj.color;
	return out;
}
