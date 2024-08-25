#include "Node.h"

Node::Node(int value)
{
	this->value = value;
	this->left = nullptr;
	this->right = nullptr;
}

Node* Node::Insert(Node* root, int value)
{
    if (root == nullptr) {
        root = new Node(value);
        return root;
    }
    // Create a queue for level order traversal
    queue<Node*> q;
    q.push(root);

    // Do level order traversal until we find an empty place
    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();

        // If left child is empty, insert the new node here
        if (temp->left == nullptr) {
            temp->left = new Node(value);
            break;
        }
        else {
            q.push(temp->left);
        }
        // If right child is empty, insert the new node here
        if (temp->right == nullptr) {
            temp->right = new Node(value);
            break;
        }
        else {
            q.push(temp->right);
        }
    }
    return root;
}

void Node::InOrder(Node* root)
{
    if (root == nullptr) return;
    InOrder(root->left);
    cout << root->value <<endl;
    InOrder(root->right);
}

Node* Node::DeleteNode(Node* root, int value)
{
    if (root == nullptr) return nullptr;
    // Use a queue to perform BFS
    queue<Node*> q;
    q.push(root);
    Node* target = nullptr;

    // Find the target node
    while (!q.empty()) {
        Node* curr = q.front();
        q.pop();

        // Check for current node is the target node to delete
        if (curr->value == value) {
            target = curr;
            break;
        }
        // Add children to the queue
        if (curr->left) q.push(curr->left);
        if (curr->right) q.push(curr->right);
    }
    // If target node is not found, return the original tree
    if (target == nullptr) return root;

    // Find the deepest rightmost node and its parent
    pair<Node*, Node*> last = { nullptr, nullptr };
    queue<pair<Node*, Node*>> q1;
    q1.push({ root, nullptr });

    while (!q1.empty()) {
        auto curr = q1.front();
        q1.pop();

        // Update the last
        last = curr;

        if (curr.first->left)
            q1.push({ curr.first->left, curr.first });
        if (curr.first->right)
            q1.push({ curr.first->right, curr.first });
    }

    Node* lastNode = last.first;
    Node* lastParent = last.second;

    // Replace target's value with the last node's value
    target->value = lastNode->value;

    // Remove the last node
    if (lastParent) {
        if (lastParent->left == lastNode)lastParent->left = nullptr;
        else lastParent->right = nullptr;
        delete lastNode;
    }
    else {
        // If the last node was the root
        delete lastNode;
        return nullptr;
    }
    return root;
}
