#include <iostream>
#include <fstream>
#include "Person.h"

using namespace std;

int main()
{
    Person person("ratana");

    ofstream file;
    file.open("person.txt", ios::out);
    if (file.is_open())
    {
        file.write((char*)&person, sizeof(person));
        file.close();
    }
}
