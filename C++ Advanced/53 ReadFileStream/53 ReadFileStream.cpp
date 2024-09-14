#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream file;
    file.open("file.txt");
    if (file.is_open())
    {
        string content;
        //file >> content;
        while (!file.eof())
        {
            getline(file, content);
            cout << content << endl;
        }
        
        file.close();
    }
}