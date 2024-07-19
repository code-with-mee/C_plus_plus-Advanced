#include <iostream>
#include "Box.h"

using namespace  std;

int main()
{
    //compound assignment operators
    Box box{ 10 };
    Box box2{ 20 };
    //box += box2;
    box -= box2;
    cout << box.GetSize() << endl;
    cin.get();
}