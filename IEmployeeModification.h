#pragma once
class IEmployeeModification 
{
public:
	virtual void InputListOfEmployee() = 0;
	virtual void ShowEmployeeWithMaxSalary() = 0;
	virtual void FindTotalSalary() = 0;
	virtual void Remove() = 0;
	virtual void Add() = 0;
	virtual void SortDescending() = 0;
	virtual void FindByName() = 0;
	virtual void DefineTheRank() = 0;
};