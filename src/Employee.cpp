#include "Employee.h"

Employee::Employee(int empid, const string &name, const string &address,
		double salary) :
		empid(empid), name(name), address(address), salary(salary) {
}

Employee::~Employee() {
}

int Employee::getEmpid() {
	return empid;
}

string Employee::getName(int empid) {
	return name;
}

string Employee::getAddress(int empid) {
	return address;
}

double Employee::getSalary(int empid) {
	return salary;
}

void Employee::setName(const string &name) {
	this->name = name;
}

void Employee::setAddress(const string &address) {
	this->address = address;
}

void Employee::setSalary(double salary) {
	this->salary = salary;
}

