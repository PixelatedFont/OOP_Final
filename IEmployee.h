#pragma once
class IEmployee
{
public:
	virtual void InputInformationOfEmployee() = 0;
	virtual double FindSalary() = 0;
	virtual void OutputInformationOfEmployee() = 0;
};

