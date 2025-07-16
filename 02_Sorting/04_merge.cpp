#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int start, int mid, int end)
{
    vector<int> tempArr;

    int left = start;
    int right = mid + 1;

    while (left <= mid && right <= end)
    {
        if (arr[left] <= arr[right])
        {
            tempArr.push_back(arr[left]);
            left++;
        }
        else
        {
            tempArr.push_back(arr[right]);
            right++;
        }
    }

    while (left <= mid)
    {
        tempArr.push_back(arr[left]);
        
        left++;
    }

    while (right <= end)
    {
        tempArr.push_back(arr[right]);
        right++;
    }

    for (int i = start; i <= end; i++)
    {
        arr[i] = tempArr[i - start];
    }
}

void mergeSort(vector<int> &arr, int start, int end)
{
    if (start >= end)
        return;

    int mid = (start + end) / 2;

    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);

    merge(arr, start, mid, end);
}

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    mergeSort(arr, 0, n - 1);

    cout << "\nAfter Merge Sort: ";
    for (int x : arr)
    {
        cout << x << " ";
    }

    cout << endl;
    return 0;
}
