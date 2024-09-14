#include <iostream>
#include "Vector2.h"
#include "Vector3.h"

using namespace std;

int main()
{
	Vector2 vector2;
	vector2.x = 10;
	vector2.y = 20;

	Vector3 vecter3;
	vecter3.x = 100;
	vecter3.y = 200;
	vecter3.z = 300;

	Vector3* vector3Ptr = reinterpret_cast<Vector3*>(&vector2);
	cout << vector3Ptr->x << " | "
		<< vector3Ptr->y << " | "
		<< vector3Ptr->z << endl;

	Vector2* vector2Ptr = reinterpret_cast<Vector2*>(&vecter3);
	cout << vector2Ptr->x << " | "
		<< vector2Ptr->y << endl;
}