#pragma once
class Box
{
public :
	explicit Box(int size);
	bool operator < (const Box& box);
	bool operator > (const Box& box);
	bool operator <= (const Box& box);
	bool operator >= (const Box& box);
private:
	int size;
};

