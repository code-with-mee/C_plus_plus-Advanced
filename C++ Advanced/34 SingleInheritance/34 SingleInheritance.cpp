#include <iostream>
#include "Animal.h"
#include "Dog.h"

using namespace std;

int main()
{
    Animal animal("cat");
    animal.Eat();

    Dog dog("dog");
    dog.Eat();
    dog.Bark();
}
