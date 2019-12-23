#pragma once
#include "IGetListProduct.h"
#include "Mouse.h"
#include "Keyboard.h"
#include "Computer.h"
#include <vector>
#include <iostream>
#include <fstream>
#include <istream>
#include <string>
class GetListProduct : public IGetListProduct
{
private:
	std::vector<Mouse> listOfMouse;
	std::vector<Keyboard> listOfKeyboard;
	std::vector<Computer> listOfComputer;
public:
	GetListProduct();
	GetListProduct(std::vector<Mouse> listOfMouse1, std::vector<Keyboard> listOfKeyboard1, std::vector<Computer> listOfComputer1);
	void InputListofMouse();
	void OutputListOfMouse();
	void AddListOfMouse();
	void DisplayListOfMouse();

	void InputListofKeyboard();
	void OutputListOfKeyboard();
	void AddListOfKeyboard();
	void DisplayListOfKeyboard();

	void InputListofComputer();
	void OutputListOfComputer();
	void AddListOfComputer();
	void DisplayListOfComputer();
};

