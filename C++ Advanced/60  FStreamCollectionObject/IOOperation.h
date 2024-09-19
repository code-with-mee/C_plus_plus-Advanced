#pragma once
#include <fstream>
#include <vector>
#include "Student.h"

using namespace std;

class IOOperation
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

        ofstream write("student.txt");
        if (write.is_open())
        {
            for (auto& student : students)
            {
                write << student.id << " "
                    << student.name << " "
                    << student.age << endl;
            }
            write.close();
        }
	}
    void ReadData()
    {
        vector<Student> students;
        ifstream read("student.txt");
        if (read.is_open())
        {
            int id;
            string name;
            int age;
            while (read >> id >> name >> age)
            {
                students.push_back(Student(id, name, age));
            }
            read.close();
        }

        for (auto& student : students)
        {
            student.Display();
        }
    }
};

