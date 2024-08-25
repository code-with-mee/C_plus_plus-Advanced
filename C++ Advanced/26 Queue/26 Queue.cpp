#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<string> languages;

    //add element to queue
    languages.push("c++ programming");
    languages.push("java programming");
    languages.push("c# programming");
    languages.push("python programming");
    languages.push("typescript programming");

    //first element of queue
    string front = languages.front();
    cout << front << endl;

    //last element of queue
    string back = languages.back();
    cout << back << endl;

    //remove first element
    languages.pop();
    cout << languages.front() << endl;

    //swap 2 queues
    queue<string> languages2;
    languages2.push("javascript");
    languages.swap(languages2);

    cout << languages2.front() << endl;
    cout << languages.front() << endl;
}
