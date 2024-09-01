#pragma once
#include <iostream>
#include "Shape.h"

using namespace std;

class Circle : public Shape
{
private:
	int radius;
public:
	Circle() = default;
	Circle(int radius);
	void Draw();
	void Area();
};

