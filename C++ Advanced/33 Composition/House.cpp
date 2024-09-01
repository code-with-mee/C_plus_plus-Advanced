#include "House.h"

House::House(string name)
{
	this->name = name;
}

void House::AddRoom(string roomName)
{
	this->rooms.push_back(make_unique<Room>(roomName));
}

void House::Display()
{
	for (auto& room : rooms)
	{
		room->Display();
	}
}
