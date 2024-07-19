#pragma once
class Point
{
public:
	bool operator ==(const Point& point);
	bool operator !=(const Point& point);
	explicit Point(int x, int  y);
private:
	int x;
	int y;
};

