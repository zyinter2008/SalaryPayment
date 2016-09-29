#include "EmployeeDatabase.h"

EmployeeDatabase employeeDatabase;

void EmployeeDatabase::addEmployee(int empid, Employee* employee) {
	employees[empid] = employee;
}
Employee* EmployeeDatabase::getEmployee(int empid) {
	return employees[empid];
}

void EmployeeDatabase::remove(int empid) {
	employees.erase(empid);
}

void EmployeeDatabase::clear() {
	employees.clear();
}
