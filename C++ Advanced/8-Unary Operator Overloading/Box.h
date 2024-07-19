#pragma once
class Box
{
public :
	Box(int size);
	Box& operator ++(); // prefix
	Box operator ++(int); //posfix
	int GetSize();
private : 
	int size;
};

