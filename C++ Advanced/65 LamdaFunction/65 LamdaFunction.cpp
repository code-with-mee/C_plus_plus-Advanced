#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    //lamda no return type
    auto greeting = []() {cout << "hello" << endl; };
    greeting();

    //lamda with parameter
    auto add = [](int x, int y) {return x + y; };
    cout << "add : " << add(10, 20) << endl;

    //lamda with return type
    auto div = [](int x, float y) -> float {return x / y; };
    cout << "divide : " << div(10, 20) << endl;

    //lamda capturing value
    int number = 100;
    auto message = [number]() {cout << "number is " << number << endl; };
    message();

    //lamda capturing reference
    auto messageRef = [&number]() {cout << "number is " << number << endl; };
    messageRef();

    //lamda generic
    auto genericSum = [](auto x, auto y) {return x + y; };
    cout << "sum : " << genericSum(100, 200) << endl;
    cout << "sum : " << genericSum(10.5, 90.7) << endl;

    //lamda with vector
    vector<int> numbers = { 1,2,3,4,5 };
    sort(numbers.begin(), numbers.end(), [](int x, int y) {return x > y; });
    for (int num : numbers)
    {
        cout << num << " ";
    }

    cout << endl<< "============" << endl;

    auto sumVector = [](vector<int>& nums) -> int
        {
            int total = 0;
            for (auto num : nums)
            {
                total += num;
            }
            return total;
        };
    cout << "sum vector : " << sumVector(numbers) << endl;
}