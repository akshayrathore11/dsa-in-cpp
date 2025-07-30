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

void print(node *head)
{
    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

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

node *deleteHead(node *head)
{
    if (head == nullptr)
        return nullptr;        // Empty list
    if (head->next == nullptr) // Only one node
    {
        delete head;
        return nullptr;
    }

    node *newHead = head->next; // Move head forward
    newHead->back = nullptr;
    delete head;

    return newHead;
}

node *deleteTail(node *head)
{
    if (head == nullptr)
        return nullptr;        // Empty list
    if (head->next == nullptr) // Only one node
    {
        delete head;
        return nullptr;
    }

    node *tail = head;
    while (tail->next != nullptr)
    {
        tail = tail->next;
    }

    node *prev = tail->back;
    prev->next = nullptr;
    delete tail;

    return head;
}

int main()
{
    vector<int> arr = {12, 5, 8, 7, 2, 4};
    node *head = convert_arr_to_dll(arr);

    cout << "Original DLL: ";
    print(head);
    cout << endl;

    head = deleteHead(head);
    cout << "After deleting head: ";
    print(head);
    cout << endl;

    head = deleteTail(head);
    cout << "After deleting tail: ";
    print(head);
    cout << endl;

    return 0;
}
