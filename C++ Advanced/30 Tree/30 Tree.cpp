// 30 Tree.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include "Node.h"
#include <vector>

using namespace std;

int main()
{
    Node* root = new Node(2);
    root->left = new Node(3);
    root->right = new Node(4);
    root->left->left = new Node(5);
    root->left->right = new Node(6);

    root->DeleteNode(root, 6);
    root->DeleteNode(root, 3);
    root->InOrder(root);

    vector<string> names;
    names.push_back("hello");

    names.pop_back();

    cout << names.size() << endl;
}