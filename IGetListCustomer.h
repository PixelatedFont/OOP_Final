#pragma once

class IGetListCustomer
{
public:
	virtual void InputListofCustomer() = 0;
	virtual void OutputListOfCustomer() = 0;
	virtual void AddListOfCustomer() = 0;
	virtual void DisplayListOfCustomer() = 0;
};