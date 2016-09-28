#include "gtest/gtest.h"
#include "EmployeeDatabase.h"

using namespace testing;

TEST(EmployeeDatabaseTest, should_get_employee_record_when_add_it) {
	Employee emp(111, "Bob", "abc street", 12000);
	EmployeeDatabase empData;
	empData.addEmployee(111, &emp);

	ASSERT_EQ(111, empData.getEmployee(111)->getEmpid());
	ASSERT_EQ("Bob", empData.getEmployee(111)->getName(111));
	ASSERT_EQ("abc street", empData.getEmployee(111)->getAddress(111));
	ASSERT_EQ(12000, empData.getEmployee(111)->getSalary(111));
}

TEST(EmployeeDatabaseTest, should_not_get_employee_record_when_remove_it) {
	Employee emp(111, "Bob", "abc street", 12000);
	EmployeeDatabase empData;
	empData.addEmployee(111, &emp);

	empData.remove(111);
	ASSERT_EQ(NULL, empData.getEmployee(111));
}

TEST(EmployeeDatabaseTest, should_be_empty_when_record_be_cleared) {
	Employee emp(111, "Bob", "abc street", 12000);
	EmployeeDatabase empData;
	empData.addEmployee(111, &emp);

	empData.clear();
	ASSERT_EQ(NULL, empData.getEmployee(111));
}
