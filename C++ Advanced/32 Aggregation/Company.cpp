#include "Company.h"

void Company::AddDepartment(shared_ptr<Department> department)
{
	this->departments.push_back(department);
}

void Company::Display()
{
	for (auto& dept : departments)
	{
		dept->Display();
	}
}
