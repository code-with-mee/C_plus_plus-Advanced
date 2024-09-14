#include <iostream>

using namespace std;

int ChangeConstValue(int* number)
{
    *number = *number + 500;
    return *number;
}


int main()
{
    int number = 100;
    const int* numberPtr = &number;

    int* numberPtr2 = const_cast<int*>(numberPtr);
    ChangeConstValue(numberPtr2);
    cout << "number : " << number << endl;
}