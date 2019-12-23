#pragma once
class IGetListProduct
{
	virtual void InputListofMouse() = 0;
	virtual void OutputListOfMouse() = 0;
	virtual void AddListOfMouse() = 0;
	virtual void DisplayListOfMouse() = 0;

	virtual void InputListofKeyboard() = 0;
	virtual void OutputListOfKeyboard() = 0;
	virtual void AddListOfKeyboard() = 0;
	virtual void DisplayListOfKeyboard() = 0;

	virtual void InputListofComputer() = 0;
	virtual void OutputListOfComputer() = 0;
	virtual void AddListOfComputer() = 0;
	virtual void DisplayListOfComputer() = 0;
};