#pragma once
class Box
{
public:
	Box(int size);
	Box& operator += (const Box& box);
	Box& operator -= (const Box& box);
	int GetSize();
private:
	int size;
};

