#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	fstream file;
	file.open("data.txt", ios::in | ios::out|ios::app);
	
	string content = "hello world";
	
	if (file.is_open())
	{
		file << content << endl;
		file.close();
	}

	file.open("data.txt", ios::in | ios::out | ios::app);
	if (file.is_open())
	{
		string readContent;
		while (!file.eof())
		{
			getline(file, readContent);
			cout << readContent;
		}
		file.close();
	}
}
