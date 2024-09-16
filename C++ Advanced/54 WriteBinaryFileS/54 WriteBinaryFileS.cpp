#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string courses[] = { "c++","c#","java","python" };
    ofstream file("data.dat", ios::binary);
    if (file.is_open())
    {
        /*for (auto c : courses)
        {
            file << c << endl;
        }*/
        file.write(
            reinterpret_cast<char*>(&courses),
            sizeof(courses)
        );
        file.close();
    }
}
