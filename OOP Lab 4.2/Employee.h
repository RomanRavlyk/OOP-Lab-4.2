#pragma once

class Employee {

public:
	virtual ~Employee() {};

	virtual double CalculateSallary() const = 0;
}; 
