#include "EmployeeDatabase.h"

EmployeeDatabase::EmployeeDatabase() {
}

EmployeeDatabase::~EmployeeDatabase() {
}

void EmployeeDatabase::addEmployee(int empid, Employee* employee){
	employees[empid] = employee;
}
Employee* EmployeeDatabase::getEmployee(int empid){
	return employees[empid];
}
