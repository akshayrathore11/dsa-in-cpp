#include <bits/stdc++.h>
using namespace std;


void swap(int &x, int &y)
{
    if (&x != &y) {  
        x = x + y;
        y = x - y;
        x = x - y;
    }
}

void insertionSort(int arr[], int &size)
{
    for (int i = 1; i < size; i++) 
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            swap(arr[j - 1], arr[j]);
            j--;
        }
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

    insertionSort(arr, size);

    cout << "\nAfter Insertion Sort: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    
    cout << endl;
    return 0;
}
