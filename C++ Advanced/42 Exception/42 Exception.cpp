#include <iostream>
#include "Math.h"

using namespace std;

int main()
{
	try
	{
		Math math;
		double x, y;
		cout << "first number : ";
		cin >> x;
		cout << "second number : ";
		cin >> y;
		double result = math.Divide(x, y);
		cout << "result : " << result;
	}
	catch (runtime_error& e)
	{
		cout << e.what() << endl;
	}
}