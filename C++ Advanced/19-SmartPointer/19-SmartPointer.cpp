#include <iostream>
#include <memory>

using namespace std;

int main()
{
    //smart pointer(unique,shared)
    unique_ptr<int> x(new int);
    *x = 10;
    //cout << *x << endl;

    unique_ptr<int> y = make_unique<int>();
    *y = 100;
    //cout << *y << endl;

    auto number = make_unique<int>();
    auto numbers = make_unique<int[]>(10);

    numbers[0] = 100;
    cout << numbers[0] << endl;

    cin.get();
}