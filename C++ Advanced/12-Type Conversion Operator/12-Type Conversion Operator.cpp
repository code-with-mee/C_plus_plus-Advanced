#include <iostream>
#include "Box.h"

using namespace std;

int main()
{
    //type convertion operator.
    Box box{ 100 };
    int x = box;
    cout << x;
    cin.get();
}