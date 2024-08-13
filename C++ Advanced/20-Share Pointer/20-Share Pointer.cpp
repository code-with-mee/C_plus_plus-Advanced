#include <iostream>
#include <memory>

using namespace std;

int main()
{
    //shared pointer
    shared_ptr<int> x = make_shared<int>();
    *x = 100;
    shared_ptr<int> y(x);

    cout << *y << endl;
    //cout << *x << endl;
    cin.get();
}