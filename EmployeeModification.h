#pragma once

#include "Retailer.h"
#include "Guard.h"
#include "Telephonist.h"
#include <vector>
#include <algorithm>
#include <functional>

class EmployeeModification
{
private:
	std::vector<std::shared_ptr<Employee>> listOfEmployee;
	std::vector<std::shared_ptr<Employee>> internalList;

public:
	EmployeeModification();
	EmployeeModification(std::vector<std::shared_ptr<Employee>> employeeList, std::vector<std::shared_ptr<Employee>> internalList1);
	void InputListOfEmployee();
	//void OutputListOfEmployee();
	std::shared_ptr<Employee> FindEmployeeWithMaxSalary();
	void ShowEmployeeWithMaxSalary();
	void FindTotalSalary();
	void Remove();
	void Add();
	void SortDescending();
	void FindByName();
	void DefineTheRank();


};

