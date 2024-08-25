#include <iostream>
#include "Box.h"

using namespace std;

int main()
{
    Box<string> box("hello");
    cout << " box: " << box.GetValue() << endl;
}