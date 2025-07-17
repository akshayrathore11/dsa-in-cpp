#include <iostream>
#include <list>
using namespace std;
int main()
{
    // Creating different lists using various constructors
    list<int> l1; // Empty list
    list<int> l2(5, 100); // List with 5 elements, each initialized to 100
    list<int> l3(l2.begin(), l2.end()); // List initialized with elements from another list
    list<int> l4(l3); // Copy constructor
    list<int> l5 = {1, 2, 3, 4, 5}; // List initialized using initializer list

    // Adding elements to the list
    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);
    l1.push_front(5);
    l1.push_front(2);

    // Displaying elements of the list
    for (auto i : l1)
        cout << " " << i;
    cout << endl;

    // Removing elements from the list
    l1.pop_back();
    l1.pop_front();

    // Displaying elements of the list after removal
    for (auto i : l1)
        cout << " " << i;
    cout << endl;

    // Inserting elements at specific positions
    l1.insert(l1.begin(), 1);
    l1.insert(l1.end(), 10);

    // Displaying elements of the list after insertion
    for (auto i : l1)
        cout << " " << i;
    cout << endl;

    // Displaying size, emptiness, front and back elements of the list
    cout << "Size : " << l1.size() << endl;
    cout << "Is Empty : " << l1.empty() << endl;
    cout << "Front Access : " << l1.front() << endl;
    cout << "Back Access : " << l1.back() << endl;

    // Reversing the list
    l1.reverse();
    for (auto i : l1)
        cout << " " << i;
    cout << endl;

    // Sorting the list
    l1.sort();
    for (auto i : l1)
        cout << " " << i;
    cout << endl;

    // Displaying elements before removing specific value
    cout << "Before removing" << endl;
    list<int>::iterator it0 = l1.begin();
    while (it0 != l1.end())
    {
        cout << *it0++ << " ";
    }
    cout << endl;

    // Remove all elements with value 10 from the list
    l1.remove(10);

    // Displaying elements after removing specific value
    cout << "After removing" << endl;
    list<int>::iterator it1 = l1.begin();
    while (it1 != l1.end())
    {
        cout << *it1++ << " ";
    }
    cout << endl;

    // Accessing elements at specific positions
    auto start = l1.begin();
    advance(start, 2);
    cout << "Element at 3rd position: " << *start << endl;

    auto end = l1.end();
    advance(end, -2);
    cout << "Element at 2nd last position: " << *end << endl;

    // Erasing elements in a range
    l1.erase(start, end);

    // Demonstrating swap operation between two lists
    list<int> first;
    list<int> second;

    // Add elements to the first list
    first.push_back(10);
    first.push_back(20);
    first.push_back(30);

    // Print the first list before swapping
    puts("Before Swap");
    for (auto i : first)
    {
        cout << i << " ";
    }
    cout << endl;

    // Add elements to the second list
    second.push_back(11);
    second.push_back(22);
    second.push_back(33);

    // Swap the contents of the first and second lists
    first.swap(second);

    // Print the first list after swapping
    puts("After Swap");
    for (auto i : first)
    {
        cout << i << " ";
    }
    cout << endl;

    // Clearing the list
    first.clear();

    // Print the size of the first list after clearing
    puts("After Clear");
    cout << first.size();
    return 0;
}