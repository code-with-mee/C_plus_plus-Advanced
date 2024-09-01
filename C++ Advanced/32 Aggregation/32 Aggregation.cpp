#include <iostream>
#include "Company.h"

using namespace std;

int main()
{
	//aggregation
	auto deptSale = make_shared<Department>("department sale");
	auto deptMarketing = make_shared<Department>("department marketing");

	Company company;
	company.AddDepartment(deptSale);
	company.AddDepartment(deptMarketing);

	company.Display();
	cout << "==================" << endl;
	deptSale->Display();
	deptMarketing->Display();
}