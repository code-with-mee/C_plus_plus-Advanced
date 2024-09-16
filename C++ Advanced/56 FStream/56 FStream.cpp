#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	fstream file;
	file.open("data.txt", ios::in | ios::out|ios::app);
	
	string content = "hello world";
	
	if (file.is_open())
	{
		file.write(
			reinterpret_cast<char*>(&content),
			sizeof(content));
		file.close();
	}
}
