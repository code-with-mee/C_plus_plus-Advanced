#pragma once
#include <iostream>

using namespace std;

class Channel
{
public:
	int channel =50;
	Channel() = default;
	Channel(int channel);
	void ChannelUp();
	void ChannelDown();
};

