#include <iostream>
#include <vector>
using namespace std;

/*
This program demonstrates various functionalities of the C++ STL vector container.
It includes different ways to initialize vectors, and operations such as inserting,
accessing, and removing elements. It also shows how to check the size and capacity
of a vector, and how to use iterators to traverse through the vector. Additionally,
it demonstrates the use of methods like shrink_to_fit, clear, resize, insert, erase,
emplace, and emplace_back. Finally, it shows how to swap the contents of two vectors.
*/

int main()
{
    // Different ways to initialize vectors
    vector<int> v1;                       // Empty Vector
    vector<int> v2(5);                    // Vector of size 5 with default value 0
    vector<int> v3(5, 10);                // Vector of size 5 with default value 10
    vector<int> v4(v3);                   // Copy of vector v3
    vector<int> v5 = {1, 2, 3, 4, 5};     // Vector with elements 1,2,3,4,5
    vector<int> v6(v5.begin(), v5.end()); // Vector with elements from v5.begin() to v5.end()

    // Demonstrating vector capacity and size
    vector<int> num;
    num.reserve(10); // Reserve space for 10 elements
    cout << "Initial Size: " << num.size() << endl;
    cout << "Initial Capacity: " << num.capacity() << endl;

    // Adding elements to the vector
    num.push_back(10);
    num.push_back(11);
    num.push_back(12);
    num.push_back(13);

    cout << "After Insertion Size: " << num.size() << endl;
    cout << "After Insertion Capacity: " << num.capacity() << endl;

    // Shrink vector capacity to fit its size
    num.shrink_to_fit();
    cout << "After Shrink Size: " << num.size() << endl;
    cout << "After Shrink Capacity: " << num.capacity() << endl;

    // Remove the last element
    num.pop_back();
    cout << "After Pop Size: " << num.size() << endl;
    cout << "After Pop Capacity: " << num.capacity() << endl;

    // Accessing elements
    cout << "First Element : " << num.front() << endl;
    cout << "Last Element : " << num.back() << endl;
    cout << "Element at 2nd index : " << num.at(2) << endl;
    cout << "Element at 2nd index : " << num[2] << endl;

    // Check if vector is empty
    cout << "Is Vector Empty : " << num.empty() << endl;

    // Clear the vector
    num.clear();
    cout << "After Clear Size: " << num.size() << endl;
    cout << "After Clear Capacity: " << num.capacity() << endl;

    // Adding elements again
    num.push_back(10);
    num.push_back(11);
    num.push_back(12);
    num.push_back(13);
    num.push_back(14);

    cout << "Vector Size : " << num.size() << endl;
    cout << "Vector Capacity: " << num.capacity() << endl;

    // Iterating over the vector using index
    for (int i = 0; i < num.size(); i++)
    {
        cout << num[i] << " ";
    }

    // Resize the vector
    num.resize(10);
    cout << "After Resize Size: " << num.size() << endl;
    cout << "After Resize Capacity: " << num.capacity() << endl;

    // Iterating over the vector using iterator
    cout << endl;
    for (auto it = num.begin(); it != num.end(); it++)
    {
        cout << *it << " ";
    }

    // Insert an element at a specific position
    num.insert(num.begin() + 2, 20);
    cout << "\nElement at index 2 after insert: " << num[2] << endl;

    // Erase an element at a specific position
    num.erase(num.begin() + 2);
    cout << "Element at index 2 after erase: " << num[2] << endl;

    // Emplace an element at a specific position
    num.emplace(num.begin() + 2, 30);
    cout << "Element at index 2 after emplace: " << num[2] << endl;

    // Emplace an element at the end
    num.emplace_back(40);
    cout << "Last Element after emplace_back: " << num.back() << endl;

    // Create two vectors named first and second
    vector<int> first;
    vector<int> second;

    // Add elements to the first vector
    first.push_back(10);
    first.push_back(20);
    first.push_back(30);

    // Use an iterator to traverse and print elements of the first vector
    vector<int>::iterator it = first.begin();
    while (it != first.end())
    {
        cout << *it << " ";
        it++;
    }
    cout << endl;

    // Add elements to the second vector
    second.push_back(11);
    second.push_back(21);
    second.push_back(31);

    // Use a range-based for loop to print elements of the first vector
    for (auto i : first)
    {
        cout << i << " ";
    }
    cout << endl;

    // Swap the contents of the first and second vectors
    first.swap(second);

    // Print elements of the first vector after swapping
    for (auto i : first)
    {
        cout << i << " ";
    }

    return 0;
}