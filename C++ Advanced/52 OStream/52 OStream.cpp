#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream file;
    file.open("file.txt");
    if (file.is_open())
    {
        file << "hello world!" << endl;
        file << "welcome to class" << endl;
        file.close();
    }
}