#include "GetListProduct.h"

GetListProduct::GetListProduct()
{
	GetListProduct::listOfMouse;
	GetListProduct::listOfKeyboard;
	GetListProduct::listOfComputer;
}

GetListProduct::GetListProduct(std::vector<Mouse> listOfMouse1, std::vector<Keyboard> listOfKeyboard1, std::vector<Computer> listOfComputer1)
	:listOfMouse{ listOfMouse1 }, listOfKeyboard{listOfKeyboard1}, listOfComputer{listOfComputer1}
{
}


//
//Mouse
//

void GetListProduct::InputListofMouse()
{
	std::ifstream in("C:\\Temp2\\Mouse.txt");
	if (!in.is_open())
	{
		exit(1);
	}
	else
	{
		while (!in.eof())
		{
			Mouse newMouse;
			in >> newMouse;
			
			listOfMouse.push_back(newMouse);
		}
		in.close();
	}
}

void GetListProduct::OutputListOfMouse()
{
	std::ofstream out("C:\\Temp2\\Mouse.txt");
	if (!out.is_open())
	{
		exit(1);
	}
	else
	{
		for (unsigned int i = 0; i < listOfMouse.size(); i++)
		{
			out << listOfMouse[i] ;
		}
		out.close();
	}
}

void GetListProduct::AddListOfMouse()
{
	Mouse newMouse;
	newMouse.InputProductInformation();
	listOfMouse.push_back(newMouse);
}

void GetListProduct::DisplayListOfMouse()
{
	for (unsigned int i = 0; i < listOfMouse.size(); i++)
	{
		listOfMouse[i].OutputProductInformation();
	}
}

//
//Keyboard
//
void GetListProduct::InputListofKeyboard()
{
	std::ifstream in("C:\\Temp2\\Keyboard.txt");
	if (!in.is_open())
	{
		exit(1);
	}
	else
	{
		while (!in.eof())
		{
			Keyboard newKeyboard;
			in >> newKeyboard;

			listOfKeyboard.push_back(newKeyboard);
		}
		in.close();
	}
}

void GetListProduct::OutputListOfKeyboard()
{
	std::ofstream out("C:\\Temp2\\Keyboard.txt");
	if (!out.is_open())
	{
		exit(1);
	}
	else
	{
		for (unsigned int i = 0; i < listOfKeyboard.size(); i++)
		{
			out << listOfKeyboard[i];
		}
		out.close();
	}
}

void GetListProduct::AddListOfKeyboard()
{
	Keyboard newKeyboard;
	newKeyboard.InputProductInformation();
	listOfKeyboard.push_back(newKeyboard);
}

void GetListProduct::DisplayListOfKeyboard()
{
	for (unsigned int i = 0; i < listOfKeyboard.size(); i++)
	{
		listOfKeyboard[i].OutputProductInformation();
	}
}

//
//Computer
//

void GetListProduct::InputListofComputer()
{
	std::ifstream in("C:\\Temp2\\Computer.txt");
	if (!in.is_open())
	{
		exit(1);
	}
	else
	{
		while (!in.eof())
		{
			Computer newComputer;
			in >> newComputer;

			listOfComputer.push_back(newComputer);
		}
		in.close();
	}
}

void GetListProduct::OutputListOfComputer()
{
	std::ofstream out("C:\\Temp2\\Computer.txt");
	if (!out.is_open())
	{
		exit(1);
	}
	else
	{
		for (unsigned int i = 0; i < listOfComputer.size(); i++)
		{
			out << listOfComputer[i];
		}
		out.close();
	}
}

void GetListProduct::AddListOfComputer()
{
	Computer newComputer;
	newComputer.InputProductInformation();
	listOfComputer.push_back(newComputer);
}

void GetListProduct::DisplayListOfComputer()
{
	for (unsigned int i = 0; i < listOfComputer.size(); i++)
	{
		listOfComputer[i].OutputProductInformation();
	}
}
