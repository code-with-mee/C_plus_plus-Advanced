#include <iostream>
#include "Point.h"

using namespace std;

int main()
{
    //operator overloading
    Point first{5,5};
    Point second{5,6};

    if (first != second)
    {
        cout << "not equal" << endl;
    }

    cin.get();
}
