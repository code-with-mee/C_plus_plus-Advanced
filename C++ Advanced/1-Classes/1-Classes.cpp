#include <iostream>
#include "Person.h"

using namespace std;

int main()
{ 
    //constant object
    const Person person;
    cout << person.GetId() << endl;
    person.Show();
    cin.get();
}
