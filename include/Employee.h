#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

#include <string>

using namespace std;

class Employee {
public:
	Employee(int empid, const string &name, const string &address, double salary);
	virtual ~Employee();

	int getEmpid();
	string getName(int empid);
	string getAddress(int empid) ;
	double getSalary(int empid) ;
	void setName(const string &name);
	void setAddress(const string &address) ;
	void setSalary(double salary) ;

private:
	int empid;
	string name;
	string address;
	double salary;
};

#endif /* EMPLOYEE_H_ */
