#include <iostream>
using namespace std;

void bubble_sort_recursive(int arr[], int n, int pass = 1) {
  
    if (n == 1) return;

    cout << "Pass " << pass << ":\n";
    bool swapped = false;

   
    for (int i = 0; i < n - 1; i++) {
        cout << "  Comparing arr[" << i << "] = " << arr[i]
             << " and arr[" << i + 1 << "] = " << arr[i + 1] << "\n";

        if (arr[i] > arr[i + 1]) {
            cout << "  --> Swapping " << arr[i] << " and " << arr[i + 1] << "\n";
            swap(arr[i], arr[i + 1]);
            swapped = true;
        }
    }

  
    cout << "  Array after pass " << pass << ": ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << "\n\n";

    if (!swapped) {
        cout << "  No swaps in this pass. Array is sorted!\n";
        return;
    }

    bubble_sort_recursive(arr, n - 1, pass + 1);
}

int main() {
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Before Bubble Sort:\n";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << "\n\n";

    bubble_sort_recursive(arr, n);

    cout << "\nAfter Bubble Sort:\n";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << "\n";

    return 0;
}
