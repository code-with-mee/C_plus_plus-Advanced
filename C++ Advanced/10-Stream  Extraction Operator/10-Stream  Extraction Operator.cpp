#include <iostream>
#include <conio.h>
#include "Box.h"

using namespace std;

int main()
{
    //stream extraction operator
    Box box{ 0 };
    cout << "enter box : ";
    cin >> box;
    cout << box.GetSize() << endl;
    _getch();
}
