#include <iostream>
#include "List.h"
#include "Point.h"
int main()
{
    List<Point*> points;
    points.Add(new Point(10, 20));
    points.Add(new Point(20, 20));
    points.Add(new Point(30, 20));
    points.Add(new Point(40, 20));

    points.Get(3)->Display();
}
