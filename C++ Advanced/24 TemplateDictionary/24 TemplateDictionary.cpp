#include <iostream>
#include "Dictionary.h"

int main()
{
    Dictionary<int, int> numbers;
    numbers.Add(1, 1);
    numbers.Add(2, 2);
    numbers.Add(3, 3);
    numbers.Add(4, 4);
    numbers.Add(5, 5);

    cout << numbers.GetValue(4) << endl;
}
