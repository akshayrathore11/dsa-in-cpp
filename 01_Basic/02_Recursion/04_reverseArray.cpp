#include <bits/stdc++.h>
using namespace std;

void singlePointer(int i, int arr[], int size)
{

    if (i >= size / 2)
        return;

    swap(arr[i], arr[size - i - 1]);
    singlePointer(i + 1, arr, size);
}

int main()
{

    cout << "Enter Array Size : ";
    int size;
    cin >> size;

    int arr[size];

    cout << "Enter " << size << " Array Elem : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    singlePointer(0, arr, size);

    cout << "Reversed Array : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}