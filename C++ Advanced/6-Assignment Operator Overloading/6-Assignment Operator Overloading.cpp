#include <iostream>
#include "Box.h"
using namespace std;

int main()
{
    //assignment operator overloading
    Box box{ 10 };
    Box box2{20};
    box = box2;
    cin.get();
}