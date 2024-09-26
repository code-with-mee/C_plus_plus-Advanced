#pragma once
#include <iostream>
#include <fstream>
#include <vector>

#include "json.hpp"

using json = nlohmann::json;
using namespace std;

class FileManager
{
public:
	void Save(json contentsJson)
	{
		ofstream file("bank-system.json");
		if (file.is_open())
		{
			file << contentsJson.dump();
			file.close();
		}
	}

	json Load()
	{
		json jsonContents;
		ifstream file("bank-system.json");
		if (file.is_open())
		{
			file >> jsonContents;
			file.close();
		}
		return jsonContents;
	}
};

