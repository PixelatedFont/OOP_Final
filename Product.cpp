#include "Product.h"

Product::Product()
{
	Product::nameOfProduct = "";
	Product::serialNumber = "";
	Product::type = "";
	Product::price = "";
}
Product::Product(std::string nameOfProduct1, std::string serialNumber1, std::string type1, std::string price1)
	:nameOfProduct{nameOfProduct1}, serialNumber{serialNumber1}, type{type1}, price{price1}
{

}

void Product::OutputProductInformation()
{
	using std::cout;

	cout << "Name of this product: " << Product::nameOfProduct << "\n";
	cout << "Serial number: " << Product::serialNumber << "\n";
	cout << "Type: " << Product::type << "\n";
	cout << "Price: " << Product::price << "\n";
}

void Product::InputProductInformation()
{
	using std::cout;
	using std::cin;

	cout << "Name of this Product: ";
	cin >> Product::nameOfProduct;
	cout << "Serial number: ";
	cin >> Product::serialNumber;
	cout << "Type: ";
	cin >> Product::type;
	cout << "Price: ";
	cin >> Product::price;

}
