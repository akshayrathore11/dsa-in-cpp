#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Precomputation using map
    map<int, int> mpp;
    for (int i = 0; i < n; i++) {
        mpp[arr[i]]++;
    }

    int q;
    cout << "Enter number of queries: ";
    cin >> q;

    cout << "Enter " << q << " numbers to find their frequency:\n";
    while (q--) {
        int num;
        cin >> num;
        cout << "Frequency of " << num << " is: " << mpp[num] << endl;
    }

    return 0;
}
