#pragma once
#include <iostream>

using namespace std;

class Point
{
private:
	int x;
	int y;
public:
	Point() = default;
	Point(int x, int y);
	void Display();
};

