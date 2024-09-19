#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include "Student.h"

#include "json.hpp"

using json = nlohmann::json;
using namespace std;

class FileManager
{
public:
	void WriteData()
	{
		vector<Student> students;
		students.push_back(Student(1, "chenda", 19));
		students.push_back(Student(2, "raksa", 33));
		students.push_back(Student(3, "bothtra", 23));
		students.push_back(Student(4, "nimol", 35));
		students.push_back(Student(5, "channita", 18));

		json content = json::array();
		for (auto& student : students)
		{
			content.push_back(student.ToJson());
		}
		
		ofstream file("content.json");
		if (file.is_open())
		{
			file << content.dump();
			file.close();
		}
	}
	void ReadData()
	{
		json jStudents;
		vector<Student> students;
		ifstream file("content.json");
		if (file.is_open())
		{
			file >> jStudents;
			file.close();
		}

		for (auto s : jStudents)
		{
			Student student;
			student.id = s["id"];
			student.name = s["name"];
			student.age = s["age"];
			students.push_back(student);
		}

		for (auto& student : students)
		{
			student.Display();
		}
	}
};

