#include <iostream>
#include "Hour emp.h"

double Hourly_employed::CalculateSallary() const {
	return 10.0 * 8 * experience;
}