#pragma once
#include <iostream>
#include "Node.h"

using namespace std;

class DoublyLinkedList
{
private:
	Node* head;
public:
	DoublyLinkedList();
	DoublyLinkedList(Node* head);
	void InsertAtBeginning(int data);
	void InsertAtEnd(int data);
	void InsertAtPosition(int data, int position);
	void DeleteAtBeginning();
	void DeleteAtEnd();
	void DeleteAtPosition(int position);
	void PrintListForward();
	void PrintListReverse();
};

