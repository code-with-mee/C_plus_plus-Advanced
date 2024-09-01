#pragma once
#include <iostream>
#include "Shape.h"

using namespace std;

class Rectangle : public Shape
{
private:
	int width;
	int height;
public:
	Rectangle() = default;
	Rectangle(int width, int height);
	void Draw();
	void Area();
};

