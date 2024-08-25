#include "DoublyLinkedList.h"

void DoublyLinkedList::InsertAtBeginning(int data)
{
    Node* newNode = new Node(data);

    if (head == nullptr) {
        head = newNode;
        return;
    }

    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void DoublyLinkedList::InsertAtEnd(int data)
{
    Node* newNode = new Node(data);

    if (head == nullptr) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->prev = temp;
}

void DoublyLinkedList::InsertAtPosition(int data, int position)
{
    if (position < 1) {
        cout << "Position should be >= 1." << endl;
        return;
    }

    if (position == 1) {
        InsertAtBeginning(data);
        return;
    }

    Node* newNode = new Node(data);
    Node* temp = head;

    for (int i = 1; temp != nullptr && i < position - 1;
        i++) {
        temp = temp->next;
    }

    if (temp == nullptr) {
        cout << "Position greater than the number of nodes."
            << endl;
        return;
    }

    newNode->next = temp->next;
    newNode->prev = temp;
    if (temp->next != nullptr) {
        temp->next->prev = newNode;
    }
    temp->next = newNode;
}

void DoublyLinkedList::DeleteAtBeginning()
{
    if (head == nullptr) {
        cout << "The list is already empty." << endl;
        return;
    }

    Node* temp = head;
    head = head->next;
    if (head != nullptr) {
        head->prev = nullptr;
    }
    delete temp;
}

void DoublyLinkedList::DeleteAtEnd()
{
    if (head == nullptr) {
        cout << "The list is already empty." << endl;
        return;
    }

    Node* temp = head;
    if (temp->next == nullptr) {
        head = nullptr;
        delete temp;
        return;
    }

    while (temp->next != nullptr) {
        temp = temp->next;
    }

    temp->prev->next = nullptr;
    delete temp;
}

void DoublyLinkedList::DeleteAtPosition(int position)
{
    if (head == nullptr) {
        cout << "The list is already empty." << endl;
        return;
    }

    if (position == 1) {
        DeleteAtBeginning();
        return;
    }

    Node* temp = head;
    for (int i = 1; temp != nullptr && i < position; i++) {
        temp = temp->next;
    }

    if (temp == nullptr) {
        cout << "Position is greater than the number of "
            "nodes."
            << endl;
        return;
    }

    if (temp->next != nullptr) {
        temp->next->prev = temp->prev;
    }
    if (temp->prev != nullptr) {
        temp->prev->next = temp->next;
    }
    delete temp;
}

void DoublyLinkedList::PrintListForward()
{
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << endl;
        temp = temp->next;
    }
    cout << endl;
}

void DoublyLinkedList::PrintListReverse()
{
    Node* temp = head;
    if (temp == nullptr) {
        cout << "The list is empty." << endl;
        return;
    }

    while (temp->next != nullptr) {
        temp = temp->next;
    }

    cout << "Reverse List: ";
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->prev;
    }
    cout << endl;
}

DoublyLinkedList::DoublyLinkedList()
{
    this->head = nullptr;
}

DoublyLinkedList::DoublyLinkedList(Node* head)
{
    this->head = head;
}
