#pragma once
#include <istream>

using namespace std;

class Box
{
public:
	Box(int size);
	void SetSize(int size);
	int GetSize();
private:
	int size;
};

istream& operator >> (istream& stream, Box& box);
