#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *back;

    Node(int data1, Node *next1, Node *back1)
    {
        data = data1;
        next = next1;
        back = back1;
    }

    Node(int data1)
    {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

int main()
{
    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);

    first->next = second;
    second->back = first;
    second->next = third;
    third->back = second;

    Node *temp = first;
    cout << "Forward Traversal: ";
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << "\n";

    temp = third;
    cout << "Backward Traversal: ";
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->back;
    }

    cout << "\n";

    return 0;
}
