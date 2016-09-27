#include "gtest/gtest.h"
#include "EmployeeDatabase.h"

using namespace testing;

TEST(EmployeeDatabaseTest, should_get_employee_record_after_it) {
	Employee emp(111, "Bob", "abc street", 12000);
	EmployeeDatabase empData;
	empData.addEmployee(111, &emp);

	ASSERT_EQ(111, empData.getEmployee(111)->getEmpid());
	ASSERT_EQ("Bob", empData.getEmployee(111)->getName(111));
	ASSERT_EQ("abc street", empData.getEmployee(111)->getAddress(111));
	ASSERT_EQ(12000, empData.getEmployee(111)->getSalary(111));
}
