#include "Channel.h"

Channel::Channel(int channel)
{
	this->channel = channel;
}

void Channel::ChannelUp()
{
	channel++;
	if (channel > 100)
		channel = 0;
	cout << "channel up : " << channel << endl;
}

void Channel::ChannelDown()
{
	channel--;
	if (channel < 0)
		channel = 100;
	cout << "channel down : " << channel << endl;
}
