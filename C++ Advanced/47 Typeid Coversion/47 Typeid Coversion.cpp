#include <iostream>
#include "Animal.h"
#include "Cat.h"
#include "Dog.h"

using namespace std;

void CheckType(Animal* animal)
{
    cout << typeid(*animal).name() << endl;
}

int main()
{
    Dog* dog = new Dog("my-dog");
    Cat* cat = new Cat("my-cat");
    Animal* cat2 = new Cat("my-cat2");

    CheckType(dog);
    CheckType(cat);
    CheckType(cat2);
}
