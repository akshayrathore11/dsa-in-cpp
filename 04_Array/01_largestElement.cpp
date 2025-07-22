#include <bits/stdc++.h>
using namespace std;

void findLargestElement(int arr[], int n)
{

    int maxElem = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (maxElem < arr[i])
        {
            maxElem = arr[i];
        }
    }
    cout << "Maximum Element is: " << maxElem;
}

int main()
{

    cout << "Enter Array Size: ";
    int size;
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    findLargestElement(arr, size);
    cout << endl;
    return 0;
}