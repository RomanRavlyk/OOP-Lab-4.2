#pragma once
#include "Employee.h"

class Hourly_employed : public Employee {
private:
	int experience;
public:
	Hourly_employed(int exp) : experience(exp) {}

	virtual double CalculateSallary() const override;
};