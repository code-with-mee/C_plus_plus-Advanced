#include <iostream>

using namespace std;

int main()
{
    //pointer constant

    const int x = 50;
    const int* ptr = &x;

    int y = 50;
    int* ptr2 = &y;
    *ptr2 = 100;

    ptr = &y;

    cout << *ptr2 << endl;
    cout << *ptr << endl;

    int z = 100;
    int* const ptr3 = &y;
    //ptr3 = &z;

    int** ptr4 = &ptr2;
    cout << **ptr4 << endl;




    /*
    int* - pointer to int
    int const * - pointer to const int
    int * const - const pointer to int
    int const * const - const pointer to const int
    
    const int * == int const *
    const int * const == int const * const

    int ** - pointer to pointer to int
    int ** const - a const pointer to a pointer to an int
    int * const * - a pointer to a const pointer to an int
    int const ** - a pointer to a pointer to a const int
    int * const * const - a const pointer to a const pointer to an int
    


    */
    cin.get();
}
