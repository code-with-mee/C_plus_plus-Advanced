#include <iostream>

using  namespace std;

void Increase(int* amount)
{
    *amount = *amount + 100;
}

int main()
{
    //pointe with method
    int amount = 100;
    Increase(&amount);
    cout << amount << endl;
    cin.get();
}