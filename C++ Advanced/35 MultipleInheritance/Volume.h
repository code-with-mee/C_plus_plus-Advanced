#pragma once
#include <iostream>

using namespace std;

class Volume
{
public:
	int volume =50;
	Volume() = default;
	Volume(int volume);
	void VolumeUp();
	void VolumeDown();
};

