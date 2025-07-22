#include <iostream>
using namespace std;

void reverse(int arr[], int start, int end) {
  while (start < end) {
    swap(arr[start], arr[end]);
    start++;
    end--;
  }
}

void rotateLeft(int arr[], int n, int k) {
  k = k % n; 
  reverse(arr, 0, k - 1);
  reverse(arr, k, n - 1);
  reverse(arr, 0, n - 1);
}

void rotateRight(int arr[], int n, int k) {
  k = k % n; 
  reverse(arr, 0, n - 1);
  reverse(arr, 0, k - 1);
  reverse(arr, k, n - 1);
}

void printArray(int arr[], int n) {
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
  cout << endl;
}

int main() {
  int arr1[] = {1, 2, 3, 4, 5, 6, 7};
  int n = 7;
  int k = 2;

  rotateLeft(arr1, n, k);
  cout << "Left Rotated by " << k << ": ";
  printArray(arr1, n);

  int arr2[] = {1, 2, 3, 4, 5, 6, 7};

 
  rotateRight(arr2, n, k);
  cout << "Right Rotated by " << k << ": ";
  printArray(arr2, n);

  return 0;
}
