#include <iostream>
#include "Box.h"

using namespace std;

int main()
{
    //unary operator overloading
    int x = 10;
    int y = ++x;
    Box box{ 10 };
    Box box2 = ++box;
    cout << box.GetSize() << endl;
    cout << box2.GetSize() << endl;
    cin.get();
}
