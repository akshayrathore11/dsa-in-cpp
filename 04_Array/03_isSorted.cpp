#include <bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n)
{

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
            return false;
    }

    return true;
}

int main()
{

    int arr[] = {1, 2, 8, 4, 5}, n = 5;

    puts(isSorted(arr, n) ? "True" : "False");
    cout << (isSorted(arr, n) ? "True" : "False");

    cout << endl;
    return 0;
}