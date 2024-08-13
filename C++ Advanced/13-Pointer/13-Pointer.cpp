#include <iostream>

using namespace std;

int main()
{
    //pointer
    int num = 10;
    
    //declare pointer variable
    
    // &variable -> address sign
    // datatype* -> declare pointer
    // *variable -> indirect get value from pointer

    int* ptr = &num;

    cout << &num << endl;
    cout << ptr << endl;
    cout << *ptr << endl;
    cin.get();
}
