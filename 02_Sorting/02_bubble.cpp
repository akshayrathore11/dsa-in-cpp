#include <bits/stdc++.h>
using namespace std;

void swap(int &x, int &y)
{
    if (&x != &y)
    {
        x = x ^ y;
        y = x ^ y;
        x = x ^ y;
    }
}

void bubbleSort(int arr[], int &size)
{
    int flag;
    for (int i = size - 1; i >= 0; i--)
    {
        flag = 0;
        for (int j = 0; j <= i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                ++flag;
            }
        }
        if (flag == 0)
            break;
    }
}

int main()
{
    int size;
    cout << "Enter size: ";
    cin >> size;

    int arr[size];

    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "\nBefore Bubble Sort: ";
    for (auto x : arr)
        cout << x << " ";

    bubbleSort(arr, size);

    cout << "\nAfter Bubble Sort: ";
    for (auto x : arr)
        cout << x << " ";

    cout << endl;
    return 0;
}
