#include <iostream>

using namespace std;

int main()
{
    //pointer arithmetic
    int numbers[] = {100,200,300};
    int* ptr = numbers;
    //ptr++;
    //ptr--;

    cout << *(ptr + 1) << endl;
    cout << ptr[1] << endl;
    cout << numbers[1] << endl;

    cin.get();
}