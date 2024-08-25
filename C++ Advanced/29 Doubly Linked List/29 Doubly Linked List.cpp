#include <iostream>
#include "Node.h"
#include "DoublyLinkedList.h"

using namespace std;

int main()
{
    DoublyLinkedList linkedList;
    //insert element
    linkedList.InsertAtEnd(100);
    linkedList.InsertAtEnd(200);
    linkedList.InsertAtEnd(300);

    linkedList.InsertAtBeginning(50);
    linkedList.InsertAtPosition(10, 1);

    linkedList.PrintListForward();

}