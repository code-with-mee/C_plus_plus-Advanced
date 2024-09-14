#pragma once
#include "Audio.h"
class Mp3 : public Audio
{
public:
	void PlayMp3()
	{
		cout << "Play Mp3" << endl;
	}

	void Display()
	{
		cout << name << endl;
	}
};

