#include <iostream>
#include "Sal emp.h"

double Sal_emp::CalculateSallary() const {
	return 3000.0 + (experience * 100);
}