#include "gtest/gtest.h"
#include "AddEmployeeTransaction.h"
#include "EmployeeDatabase.h"

using namespace testing;

extern EmployeeDatabase employeeDatabase;

TEST(AddEmployeeTransactionTest, should_add_employee_to_database_when_exec_transaction) {
	AddEmployeeTransaction trans(101, "Bob", "abc street", 20000);
	trans.exec();

	ASSERT_EQ(101, employeeDatabase.getEmployee(101)->getEmpid());
	ASSERT_EQ("Bob", employeeDatabase.getEmployee(101)->getName(101));
	ASSERT_EQ("abc street", employeeDatabase.getEmployee(101)->getAddress(101));
	ASSERT_EQ(20000, employeeDatabase.getEmployee(101)->getSalary(101));
}
