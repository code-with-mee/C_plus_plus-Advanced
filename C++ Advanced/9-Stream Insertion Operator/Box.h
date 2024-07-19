#pragma once
#include <ostream>

using  namespace std;

class Box
{
public:
	Box(int size);
	void SetSize(int size);
	int GetSize();
private:
	int size;
};

ostream& operator << (ostream& stream, Box& box);

