#pragma once
#include <iostream>

using namespace std;

class Room
{
private:
	string name;
public:
	Room() = default;
	Room(string name);
	void Display();
};

