#pragma once
#include <iostream>
using namespace std;

template<typename T>
class Box
{
private:
	T value;
public:
	Box() = default;
	Box(T value);
	void SetValue(T value);
	T GetValue();
};

template<typename T>
Box<T>::Box(T value)
{
	this->value = value;
}

template<typename T>
void Box<T>::SetValue(T value)
{
	this->value = value;
}

template<typename T>
T Box<T>::GetValue()
{
	return this->value;
}