#include <iostream>
#include "Box.h"

using namespace std;

int main()
{
    //arithmetic operator overloading
    Box box{ 20 };
    Box box2{ 10 };
    Box box3 = box + box2;
    Box box4 = box - box2;
    Box box5 = box * box2;
    Box box6 = box / box2;
    cout << box3.GetSize() << endl;
    cout << box4.GetSize() << endl;
    cout << box5.GetSize() << endl;
    cout << box6.GetSize() << endl;
    cin.get();
}
