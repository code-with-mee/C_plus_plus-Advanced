#pragma once
#include <iostream>
#include <vector>
#include "Department.h"

using namespace std;

class Company
{
private:
	vector<shared_ptr<Department>> departments;
public:
	void AddDepartment(shared_ptr<Department> department);
	void Display();
};

