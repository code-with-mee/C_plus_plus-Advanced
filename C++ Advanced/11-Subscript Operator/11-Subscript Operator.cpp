#include <iostream>
#include "Array.h"

using namespace std;

int main()
{
    //subscript operator
    Array arrays{ 10 };
    arrays[0] = 100;
    arrays[1] = 500;
    cout << arrays[0];
    cout << arrays[1];
    cin.get();
}