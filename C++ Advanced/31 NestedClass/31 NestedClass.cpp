#include <iostream>
#include "Student.h"

using namespace std;

int main()
{
    Student student(1,"ratana",28);
    student.SetAddress("90", "145", "phnom penh");
    student.Display();
}