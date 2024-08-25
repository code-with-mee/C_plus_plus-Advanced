#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<string> languages;
    //add elements to stack
    languages.push("c++ programming");
    languages.push("java programming");
    languages.push("c# programming");
    languages.push("python programming");
    languages.push("typescript programming");

    //remove element from stack
    languages.pop();

    //top element in stack
    string language = languages.top();
    cout << language << endl;
    cout << "languges size : " << languages.size() << endl;
}
