#include "Room.h"

Room::Room(string name)
{
	this->name = name;
}

void Room::Display()
{
	cout << "room : " << name << endl;
}
