#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> numbers;

    //add element at end
    numbers.push_front(200);
    numbers.push_back(300);
    numbers.push_back(400);
    numbers.push_back(500);

    //insert element at front
    numbers.push_front(100);

    //access element front
    int front = numbers.front();
    cout <<"front : " << front << endl;

    //access element back
    int back = numbers.back();
    cout <<"back : " << back << endl;

    //insert element at index 3
    auto lst = numbers.begin();
    advance(lst, 3); //move iterator to index
    numbers.insert(lst, 10000);


    //iterator loop
    for (auto e : numbers)
        cout << e << endl;

    //delete first element
    numbers.pop_front();

    //delete last element
    numbers.pop_back();

    //remove element by index
    numbers.remove(0);
    cout << numbers.front() << endl;

    //clear all element
    numbers.clear();
    cout << numbers.size() << endl;
}