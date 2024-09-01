#include <iostream>
#include "House.h"

using namespace std;

int main()
{
	House house;
	house.AddRoom("Living Room");
	house.AddRoom("Bed Room");

	house.Display();

}
