#include "AddEmployeeTransaction.h"
#include "EmployeeDatabase.h"

extern EmployeeDatabase employeeDatabase;

AddEmployeeTransaction::AddEmployeeTransaction(int empid, const string &name,
		const string &address, double salary) :
		empid(empid), name(name), address(address), salary(salary) {
}

AddEmployeeTransaction::~AddEmployeeTransaction() {
}

void AddEmployeeTransaction::exec() {
	Employee *emp = new Employee(empid, name, address, salary);
	employeeDatabase.addEmployee(empid, emp);

	delete emp;
}
