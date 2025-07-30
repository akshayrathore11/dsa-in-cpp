#include <bits/stdc++.h>
using namespace std;

class node
{

public:
    int data;
    node *next;
    node *back;

    node(int data1, node *next1, node *back1)
    {

        data = data1;
        next = next1;
        back = back1;
    }

    node(int data1)
    {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

node *convert_arr_to_dll(vector<int> &arr)
{

    node *head = new node(arr[0]);
    node *prev = head;

    for (int i = 1; i < arr.size(); i++)
    {
        node *temp = new node(arr[i], nullptr, prev);

        prev->next = temp;
        prev = temp;
    }

    return head;
}

void print(node *head)
{
    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

node *insertAtTail(node *head, int k)
{
    node *newNode = new node(k);

    if (head == nullptr)
    {
        return newNode;
    }

    node *tail = head;
    while (tail->next != nullptr)
    {
        tail = tail->next;
    }

    tail->next = newNode;
    newNode->back = tail;

    return head;
}

int main()
{

    vector<int> arr = {12, 5, 8, 7, 2, 4};
    node *head = convert_arr_to_dll(arr);

    cout << "Doubly Linked List Initially: " << endl;
    print(head);

    cout << endl
         << "Doubly Linked List After Inserting at the tail with value 10: " << endl;
    head = insertAtTail(head, 10);
    print(head);

    cout << endl;
    return 0;
}