#include "GetListCustomer.h"

GetListCustomer::GetListCustomer()
{
	GetListCustomer::listOfCustomer;
}

GetListCustomer::GetListCustomer(std::vector<Customer> listOfCustomer1)
	:listOfCustomer{listOfCustomer1}
{
}

void GetListCustomer::InputListofCustomer()
{	
	std::ifstream in("C:\\Temp2\\Customer.txt");
	if (!in.is_open())
	{
		exit(1);
	}
	else 
	{
		while (!in.eof())
		{
			Customer newCustomer;
			in >> newCustomer;
			listOfCustomer.push_back(newCustomer);
		}
		in.close();
	}
}

void GetListCustomer::AddListOfCustomer()
{
	Customer newCustomer;
	newCustomer.InputInformation();
	listOfCustomer.push_back(newCustomer);
}


void GetListCustomer::OutputListOfCustomer()
{
	std::ofstream out("C:\\Temp2\\Customer.txt");
	if (!out.is_open())
	{
		exit(1);
	}
	else
	{
		for (unsigned int i = 0; i < listOfCustomer.size(); i++)
		{
			out << listOfCustomer[i];
		}
		out.close();
	}
}

void GetListCustomer::DisplayListOfCustomer()
{
	for (unsigned int i = 0; i < listOfCustomer.size(); i++)
	{
		listOfCustomer[i].OutputInformation();
	}
}

