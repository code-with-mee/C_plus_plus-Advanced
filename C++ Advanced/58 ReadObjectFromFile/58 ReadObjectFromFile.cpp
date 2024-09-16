#include <iostream>
#include <fstream>
#include "Person.h"

using namespace std;

int main()
{
    Person person;

    ifstream file;
    file.open("person.txt", ios::out);
    if (file.is_open())
    {
        file.read((char*)&person, sizeof(person));
        file.close();

        person.Display();
    }
}