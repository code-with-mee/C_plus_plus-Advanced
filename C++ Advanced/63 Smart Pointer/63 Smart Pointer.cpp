#include <iostream>
#include <memory>
#include "Person.h"

using namespace std;

int main()
{
    //auto_ptr
    auto_ptr<Person> personautoPtr(new Person(1,"auto_person"));
    personautoPtr->Display();

    auto_ptr<Person> personautoPtr2 = personautoPtr;
    personautoPtr2->Display();

    if (personautoPtr.get() == nullptr)
    {
        cout << "personPtr is null" << endl;
    }

    //unique_ptr
    //personuniquePtr ownership of that memory
    unique_ptr<Person> personuniquePtr(new Person(1, "unique_person"));
    personuniquePtr->Display();

    //transfer ownership to new object
    unique_ptr<Person> personuniquePtr2 = move(personuniquePtr);
    personuniquePtr2->Display();

    if (personuniquePtr == nullptr)
    {
        cout << "personUniquePtr is null" << endl;
    }

    //shared_ptr
    shared_ptr<Person> personSharedPtr(new Person(1, "shared_person"));
    personSharedPtr->Display();

    //transfer ownership to new object
    shared_ptr<Person> personSharedPtr2 = personSharedPtr;
    personSharedPtr2->Display();

    cout << "shared count : " << personSharedPtr.use_count() << endl;
}