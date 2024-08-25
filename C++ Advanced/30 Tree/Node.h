#pragma once
#include <iostream>
#include <queue>

using namespace std;

class Node
{
public:
	int value;
	Node* left;
	Node* right;
	Node(int value);

	Node* Insert(Node* root, int value);
	void InOrder(Node* root);
	Node* DeleteNode(Node* root, int value);
};

