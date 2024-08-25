#include <iostream>
#include "LinkedList.h"

using namespace std;

int main()
{
    LinkedList linkedList;

    //insert element to linked list
    linkedList.InsertNode(1000);
    linkedList.InsertNode(2000);
    linkedList.InsertNode(3000);

    //delete node by count
    linkedList.DeleteNode(3);

    linkedList.PrintList();
}
