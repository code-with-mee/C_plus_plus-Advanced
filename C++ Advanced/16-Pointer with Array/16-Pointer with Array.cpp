#include <iostream>

using namespace  std;

void Update(int numbers[])
{
    numbers[0] = 100;
}

int main()
{
    //pointer with array
    int numbers[] = { 10,20,30 };
    int* ptr = numbers;
    //cout << *ptr << endl;
    //cout << &ptr[2] << endl;

    Update(numbers);

    cout << numbers[0];
    cin.get();
}