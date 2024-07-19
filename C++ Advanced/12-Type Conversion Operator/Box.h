#pragma once
class Box
{
public:
	Box(int size);
	operator int();
private:
	int size;
};

