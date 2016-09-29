#ifndef ADDEMPLOYEETRANSACTION_H_
#define ADDEMPLOYEETRANSACTION_H_

#include "Transaction.h"
#include <string>

using namespace std;

class AddEmployeeTransaction: public Transaction {
public:
	AddEmployeeTransaction(int empid, const string &name, const string &address,
			double salary);
	virtual ~AddEmployeeTransaction();

	void exec();

private:
	int empid;
	string name;
	string address;
	double salary;
};

#endif /* ADDEMPLOYEETRANSACTION_H_ */
