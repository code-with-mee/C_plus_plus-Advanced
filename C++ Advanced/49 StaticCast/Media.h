#pragma once
#include <iostream>

using namespace std;

class Media
{
public:
	string name = "hello";
	Media(string name)
	{
		this->name = name;
	}
	virtual ~Media() = default;
	virtual void Play()
	{
		cout << "Play" << endl;
	}
};

