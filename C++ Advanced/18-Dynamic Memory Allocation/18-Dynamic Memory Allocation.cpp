#include <iostream>

using namespace std;

int main()
{
    //dynamic memory allocation
    int numbers[100]; //stack
    int* numbers2 = new int[100];//heap (free store)
    delete[] numbers2;

    int x = 10;
    int* y = new int;
    delete y;
    cin.get();
}