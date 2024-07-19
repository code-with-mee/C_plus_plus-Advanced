#pragma once
class Array
{
public:
	Array(size_t size);
	~Array();
	int& operator [] (size_t index);
private:
	int* values;
	size_t size;
};

