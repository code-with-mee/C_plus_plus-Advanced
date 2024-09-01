#include <iostream>
#include "Circle.h"
#include "Rectangle.h"

using namespace std;

int main()
{
    Circle circle(100);
    circle.Draw();
    circle.Area();

    Rectangle rectangle(10, 20);
    rectangle.Draw();
    rectangle.Area();
}