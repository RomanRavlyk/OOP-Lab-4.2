#pragma once
#include "Employee.h"

class Sal_emp : public Employee {
private:
	int experience;
public:
	Sal_emp(int exp): experience(exp) {}
	virtual double CalculateSallary() const override;
};
