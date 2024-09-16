#include <iostream>

using namespace std;

void ModifyNonConst(int* ptr) {
    *ptr = 99;
}

void PrintValue(const int* ptr) {
    ModifyNonConst(const_cast<int*>(ptr));

    cout << "modify value : " << *ptr << endl;
}


int main()
{
    int value = 55;
    const int* constPtr = &value;

    cout << "Original value: " << *constPtr << endl;
    PrintValue(constPtr);
    cout << "Final value: " << value << endl;
}