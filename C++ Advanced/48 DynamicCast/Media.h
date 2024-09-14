#pragma once
#include <iostream>

using namespace std;

class Media
{
public:
	virtual ~Media() = default;
	virtual void Play()
	{
		cout << "Play" << endl;
	}
};

