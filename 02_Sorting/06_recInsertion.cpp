#include <bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[], int i, int n) {
  
    if (i == n) return;

    cout << "Recursion call for index: " << i << "\n";

    int j = i;
    while (j > 0 && arr[j - 1] > arr[j]) {
        cout << "Swapping arr[" << j - 1 << "] = " << arr[j - 1]
             << " and arr[" << j << "] = " << arr[j] << "\n";
        swap(arr[j - 1], arr[j]);
        j--;
    }

    cout << "Array after inserting index " << i << ": ";
    for (int k = 0; k < n; k++) {
        cout << arr[k] << " ";
    }
    cout << "\n\n";

    insertion_sort(arr, i + 1, n);
}

int main()
{
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Before Using insertion Sort: \n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << "\n\n";

    insertion_sort(arr, 0, n);

    cout << "After Using insertion sort:\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << "\n";

    return 0;
}
