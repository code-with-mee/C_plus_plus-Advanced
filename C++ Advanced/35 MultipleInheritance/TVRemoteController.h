#pragma once
#include <iostream>
#include "Volume.h"
#include "Channel.h"

using namespace std;

class TVRemoteController:public Volume,public Channel
{
public:
	TVRemoteController() = default;
	void TurnOn();
	void TurnOff();
};

