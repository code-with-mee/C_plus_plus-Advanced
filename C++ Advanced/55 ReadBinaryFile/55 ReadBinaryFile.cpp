#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream file("data.dat", ios::binary);
    if (file.is_open())
    {
        string course;
        while (file.read(reinterpret_cast<char*>(&course), sizeof(course)))
        {
            cout << course << endl;
        }
        file.close();
    }
}
