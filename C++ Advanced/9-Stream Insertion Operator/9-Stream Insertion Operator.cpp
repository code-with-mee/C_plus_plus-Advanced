#include <iostream>
#include "Box.h"

using namespace std;

int main()
{
    //stream insertion operator
    Box box{ 30 };
    cout << box << endl;
    cin.get();
}