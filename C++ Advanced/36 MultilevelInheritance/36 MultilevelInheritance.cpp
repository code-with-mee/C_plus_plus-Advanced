#include <iostream>
#include "Employee.h"
#include "Manager.h"
#include "Director.h"

using namespace std;

int main()
{
    Employee emp(1, "ratana");
    emp.Display();
    cout << "===========" << endl;
    Manager manager(1, "vanda", 10);
    manager.Display();
    cout << "===========" << endl;
    Director director(1, "meta", 300, 5);
    director.Display();
}