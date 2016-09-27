#include "gtest/gtest.h"
#include "Employee.h"

using namespace testing;
TEST(EmployeeTest, should_return_empid_when_get_it_from_record){
	Employee emp(111, "Bob", "abc street", 10000);

	ASSERT_EQ(111, emp.getEmpid());
}

TEST(EmployeeTest, should_return_name_when_get_it_from_record_by_empid){
	Employee emp(111, "Bob", "abc street", 10000);

	ASSERT_EQ("Bob", emp.getName(111));
}

TEST(EmployeeTest, should_return_address_when_get_it_from_record_by_empid){
	Employee emp(111, "Bob", "abc street", 10000);

	ASSERT_EQ("abc street", emp.getAddress(111));
}

TEST(EmployeeTest, should_return_salary_when_get_it_from_record_by_empid){
	Employee emp(111, "Bob", "abc street", 10000);

	ASSERT_EQ(10000, emp.getSalary(111));
}

TEST(EmployeeTest, should_return_modified_name_when_set_it_in_record){
	Employee emp(111, "Bob", "abc street", 10000);

	emp.setName("John");
	ASSERT_EQ("John", emp.getName(111));
}

TEST(EmployeeTest, should_return_modified_address_when_set_it_in_record){
	Employee emp(111, "Bob", "abc street", 10000);

	emp.setAddress("def street");
	ASSERT_EQ("def street", emp.getAddress(111));
}

TEST(EmployeeTest, should_return_modified_salary_when_set_it_in_record){
	Employee emp(111, "Bob", "abc street", 10000);

	emp.setSalary(12000);
	ASSERT_EQ(12000, emp.getSalary(111));
}


