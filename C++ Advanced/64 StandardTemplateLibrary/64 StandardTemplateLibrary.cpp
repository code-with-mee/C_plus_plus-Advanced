#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    //STL Components
    /*
        1 container
        2 iterator
        3 algorithm
        4 functor
    */

    //container
    vector<int> numbers = { 1,2,3,4,9,5 };
    for (auto it = numbers.begin(); it != numbers.end(); ++it)
    {
        cout << *it << " ";
    }

    cout <<endl << "=============" << endl;

    //itorator
    vector<int>::iterator vectorItorator = numbers.begin();
    while (vectorItorator != numbers.end())
    {
        cout << *vectorItorator << " ";
        ++vectorItorator;
    }

    cout << endl << "=============" << endl;

    //algorithm
    sort(numbers.begin(), numbers.end());
    for (int num : numbers)
    {
        cout << num << " ";
    }

    cout << endl << "=============" << endl;

    //functor
    sort(numbers.begin(), numbers.end(),greater<int>());
    for (int num : numbers)
    {
        cout << num << " ";
    }
}