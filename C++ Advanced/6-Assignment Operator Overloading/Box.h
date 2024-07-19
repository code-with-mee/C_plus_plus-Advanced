#pragma once
class Box
{
public:
	explicit Box(int size);
	Box& operator = (const Box& box) = delete;
	Box(const Box& box) = delete;
private:
	int  size;
};

