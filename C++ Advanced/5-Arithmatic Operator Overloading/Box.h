#pragma once
class Box
{
public:
	explicit Box(int size);
	Box operator +(const Box& box);
	Box operator -(const Box& box);
	Box operator *(const Box& box);
	Box operator /(const Box& box);

	int GetSize();
private:
	int size;
};

