#ifndef EMPLOYEEDATABASE_H_
#define EMPLOYEEDATABASE_H_

#include "Employee.h"
#include <string>
#include <map>

using namespace std;

class EmployeeDatabase {
public:
	EmployeeDatabase();
	virtual ~EmployeeDatabase();

	void addEmployee(int empid, Employee* employee);
	Employee* getEmployee(int empid);
	void remove(int empid);
	void clear();

	map<int, Employee*> employees;
};

#endif /* EMPLOYEEDATABASE_H_ */
