#pragma once

class IProduct 
{
public:
	virtual void OutputProductInformation() = 0;
	virtual void InputProductInformation() = 0;
};