#include "Hour Emp.h"
#include "Sal Emp.h"
#include <iostream>
using namespace std;

int main() {
    const int numEmployees = 2;
    Employee* employees[numEmployees];

    employees[0] = new Hourly_employed(5);
    employees[1] = new Sal_emp(10);

    for (int i = 0; i < numEmployees; ++i) {
        if (dynamic_cast<Hourly_employed*>(employees[i]) != nullptr) {
            cout << "Hourly Employed ";
        }
        else if (dynamic_cast<Sal_emp*>(employees[i]) != nullptr) {
            cout << "Salary Emloyed ";
        }

        cout << "Salary: $" << employees[i]->CalculateSallary() << endl;
    }

    for (int i = 0; i < numEmployees; ++i) {
        delete employees[i];
    }

    return 0;
}