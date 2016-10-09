#ifndef EMPLOYEEDATABASE_H_
#define EMPLOYEEDATABASE_H_

#include "Employee.h"
#include <string>
#include <map>

using namespace std;

class EmployeeDatabase {
public:
	void addEmployee(int empid, Employee* employee);
	Employee* getEmployee(int empid);
	void remove(int empid);
	void clear();

private:
	map<int, Employee*> employees;
};

#endif /* EMPLOYEEDATABASE_H_ */
