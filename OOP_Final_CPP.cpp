// OOP_Final_CPP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "EmployeeModification.h"
#include "GetListCustomer.h"
#include "GetListProduct.h"
#include <iostream>
#include <string>
#include <regex>
#include <stdlib.h>
int main()
{
	using std::cout;
	using std::cin;
	std::string temp{};
	int choice{};

	cout << "-----------------------------------------" << "\n";
	cout << "--------COMPUTER STORE MANAGEMENT--------" << "\n";
	cout << "--------------made with admin rights only" << "\n";
	cout << "1. Input and output information of employee and make adjustment on list employee." << "\n";
	cout << "2. Interact with the list of Product from a file." << "\n";
	cout << "3. Interact with the list of Customer from a file." << "\n";
	cout << "4. Exit the program." << "\n";
	cout << "----------Please make a choice-----------" << "\n";
	cout << "-----------------------------------------" << "\n";
	cout << "\n";


	std::regex GlobalChoice("[1-4]");
	
	std::smatch m;
	
	while (!std::regex_search(temp, m, GlobalChoice))
	{
		cout << "Your choice: ";
		cin >> temp;
	}

	choice = std::stoi(temp);
	switch (choice) 
	{
		case 1: 
		{
			cout << "You have chosen option 1." << "\n";
			EmployeeModification emp;
			emp.InputListOfEmployee();
			cout << "Please choose another option to perform adjustment in employee information.\n";
			cout << "1. Add another employee into list.\n";
			cout << "2. Find employee with greatest salary.\n";
			cout << "3. Find total salary of all employee.\n";
			cout << "4. Remove any employee.\n";
			cout << "5. Sort the employee in descending order base on their salary.\n";
			cout << "6. Find the information of the employee by his name.\n";
			cout << "7. Define the rank of the employee.\n";
			cout << "8. Exit.\n";
			cin >> temp;
			choice = std::stoi(temp);
			std::regex EmployeeChoice("[1-8]");

			while (!std::regex_search(temp, m, EmployeeChoice))
			{
				cout << "Your choice: ";
				cin >> temp;
			}
			switch (choice)
			{
				case 1:
				{
					system("CLS");
					cout << "You have choose to add another employee into list.\n";
					emp.Add();
					cout << "Shutting Down \n";
					exit(0);
				}
				case 2:
				{
					system("CLS");
					cout << "You have choose to find the employee with highest salary.\n";
					emp.ShowEmployeeWithMaxSalary();
					cout << "Shutting Down \n";
					exit(0);
				}
				case 3:
				{
					system("CLS");
					cout << "You have choose to find the total salary of all employee.\n";
					emp.FindTotalSalary();
					cout << "Shutting Down \n";
					exit(0);
				}
				case 4: 
				{
					system("CLS");
					cout << "You have choose to remove any employee.\n";
					emp.Remove();
					cout << "Shutting Down \n";
					exit(0);
				}
				case 5:
				{
					system("CLS");
					cout << "You have choose to sort the employee in descending order.\n";
					emp.SortDescending();
					cout << "Shutting Down \n";
					exit(0);
				}
				case 6:
				{
					system("CLS");
					cout << "You have choose to find the employee information by this name.\n";
					emp.FindByName();
					cout << "Shutting Down \n";
					exit(0);
				}
				case 7:
				{
					system("CLS");
					cout << "You have choose to define the rank of each employee.\n";
					emp.DefineTheRank();
					cout << "Shutting Down \n";
					exit(0);
				}
				case 8:
				{
					system("CLS");
					cout << "Shutting Down \n";
					exit(0);
				}
				
			}
		}

		case 2: 
		{
			cout << "You have chosen option 2." << "\n";
			GetListProduct getList;
			cout << "Please choose list you want to interact with.\n";
			cout << "1. List of Computer.\n";
			cout << "2. List of Keyboard.\n";
			cout << "3. List of Mouse.\n";
			cin >> temp;
			choice = std::stoi(temp);
			std::regex ProductChoice("[1-3]");

			while (!std::regex_search(temp, m, ProductChoice))
			{
				cout << "Your choice: ";
				cin >> temp;
			}
			switch (choice)
			{
				case 1:
				{
					getList.InputListofComputer();
					cout << "List Loaded.\n";
					cout << "Would you like to add another product to this list ? Y/N: ";
					cin >> temp;
					while (temp != "Y" && temp != "y" && temp != "N" && temp != "n")
					{
						cout << "Would you like to add another product to this list ? Y/N: ";
						cin >> temp;
					}

					if (temp == "Y" || temp == "y") 
					{ 
						system("CLS");
						getList.AddListOfComputer(); 
						cout << "Displaying list of Computer: \n";
						getList.DisplayListOfComputer();
					}
					if (temp == "N" || temp == "n") 
					{
						system("CLS");
						cout << "Displaying list of Computer: \n";
						getList.DisplayListOfComputer();
					}

					cout << "Save file ? Y/N: ";
					cin >> temp;
					while (temp != "Y" && temp != "y" && temp != "N" && temp != "n")
					{
						cout << "Save file ? Y/N: ";
						cin >> temp;
					}

					if (temp == "Y" || temp == "y")
					{
						system("CLS");
						getList.OutputListOfComputer();
						cout << "File Saved.\n";
						cout << "Shutting Down \n";
						exit(0);
					}
					if (temp == "N" || temp == "n")
					{
						cout << "Shutting Down \n";
						exit(0);
					}

				}

				case 2:
				{
					getList.InputListofKeyboard();
					cout << "List Loaded.\n";
					cout << "Would you like to add another product to this list ? Y/N: ";
					cin >> temp;
					while (temp != "Y" && temp != "y" && temp != "N" && temp != "n")
					{
						cout << "Would you like to add another product to this list ? Y/N: ";
						cin >> temp;
					}

					if (temp == "Y" || temp == "y")
					{
						system("CLS");
						getList.AddListOfKeyboard();
						cout << "Displaying list of Keyboard: \n";
						getList.DisplayListOfKeyboard();
					}
					if (temp == "N" || temp == "n")
					{
						system("CLS");
						cout << "Displaying list of Keyboard: \n";
						getList.DisplayListOfKeyboard();
					}

					cout << "Save file ? Y/N: ";
					cin >> temp;
					while (temp != "Y" && temp != "y" && temp != "N" && temp != "n")
					{
						cout << "Save file ? Y/N: ";
						cin >> temp;
					}

					if (temp == "Y" || temp == "y")
					{
						system("CLS");
						getList.OutputListOfKeyboard();
						cout << "File Saved.\n";
						cout << "Shutting Down \n";
						exit(0);
					}
					if (temp == "N" || temp == "n")
					{
						system("CLS");
						cout << "Shutting Down \n";
						exit(0);
					}

				}

				case 3:
				{
					getList.InputListofMouse();
					cout << "List Loaded.\n";
					cout << "Would you like to add another product to this list ? Y/N: ";
					cin >> temp;
					while (temp != "Y" && temp != "y" && temp != "N" && temp != "n")
					{
						cout << "Would you like to add another product to this list ? Y/N: ";
						cin >> temp;
					}

					if (temp == "Y" || temp == "y")
					{
						system("CLS");
						getList.AddListOfMouse();
						cout << "Displaying list of Mouse: \n";
						getList.DisplayListOfMouse();
					}
					if (temp == "N" || temp == "n")
					{
						system("CLS");
						cout << "Displaying list of Mouse: \n";
						getList.DisplayListOfMouse();
					}

					cout << "Save file ? Y/N: ";
					cin >> temp;
					while (temp != "Y" && temp != "y" && temp != "N" && temp != "n")
					{
						cout << "Save file ? Y/N: ";
						cin >> temp;
					}

					if (temp == "Y" || temp == "y")
					{
						system("CLS");
						getList.OutputListOfMouse();
						cout << "File Saved.\n";
						cout << "Shutting Down \n";
						exit(0);
					}
					if (temp == "N" || temp == "n")
					{
						system("CLS");
						cout << "Shutting Down \n";
						exit(0);
					}

				}
			}

		}

		case 3: 
		{
			cout << "You have chosen option 3." << "\n";
			GetListCustomer getList;
			cout << "List Loaded.\n";
			cout << "Would you like to add another customer to this list ? Y/N: ";
			cin >> temp;
			while (temp != "Y" && temp != "y" && temp != "N" && temp != "n")
			{
				cout << "Would you like to add another customer to this list ? Y/N: ";
				cin >> temp;
			}

			if (temp == "Y" || temp == "y")
			{
				system("CLS");
				getList.AddListOfCustomer();
				cout << "Displaying list of customer: \n";
				getList.DisplayListOfCustomer();
			}
			if (temp == "N" || temp == "n")
			{
				system("CLS");
				cout << "Displaying list of customer: \n";
				getList.DisplayListOfCustomer();
			}

			cout << "Save file ? Y/N: ";
			cin >> temp;
			while (temp != "Y" && temp != "y" && temp != "N" && temp != "n")
			{
				cout << "Save file ? Y/N: ";
				cin >> temp;
			}

			if (temp == "Y" || temp == "y")
			{
				system("CLS");
				getList.OutputListOfCustomer();
				cout << "File Saved.\n";
				cout << "Shutting Down \n";
				exit(0);
			}
			if (temp == "N" || temp == "n")
			{
				system("CLS");
				cout << "Shutting Down \n";
				exit(0);
			}
		}

		case 4:
		{
			cout << "Shutting Down \n";
			exit(0);
		}
	}

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
