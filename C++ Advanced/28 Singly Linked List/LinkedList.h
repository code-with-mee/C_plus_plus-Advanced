#pragma once
#include <iostream>
#include "Node.h"

using namespace std;

class LinkedList
{
private:
	Node* head;
public:
    LinkedList();
    void InsertNode(int data);
    void DeleteNode(int nodeOffset);
    void PrintList();
};

