#include <bits/stdc++.h>
using namespace std;

void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

void selectionSort(int arr[], int &size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int minIdx = i;

        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minIdx])
                minIdx = j;
        }
        if (i != minIdx)
            swap(arr[i], arr[minIdx]);
    }
}

int main()
{
    int size;
    cout << "Enter array size: ";
    cin >> size;

    int arr[size];
    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; i++)
    {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "\nBefore Sorting: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    selectionSort(arr, size);

    cout << "\nAfter Selection Sort: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}
