#include <iostream>
#include "Box.h"

using namespace std;

int main()
{
    //operator overloading comparison
    Box box{10};
    Box box2{ 20 };

    if (box >= box2)
    {
        cout << "greater or equal";
    }
    cin.get();
}
