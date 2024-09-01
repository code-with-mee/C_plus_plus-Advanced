#pragma once
#include <iostream>
#include <vector>
#include "Room.h"

using namespace std;

class House
{
private:
	string name;
	vector<unique_ptr<Room>> rooms;
public:
	House() = default;
	House(string name);
	void AddRoom(string roomName);
	void Display();
};

