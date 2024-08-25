#include <iostream>
#include "Word.h"
#include <vector>

using namespace std;

int main()
{
    vector< Word<string, string>> Words;
    Word<string, string> word("hello", "greeting");

    Words.push_back(Word<string, string>("hi", "welcome"));
    Words.push_back(Word<string, string>("hi2", "welcome2"));
    Words.push_back(Word<string, string>("hi3", "welcome3"));

    cout << Words[0].GetKey() << endl;
    cout << Words[0].GetValue() << endl;
}
