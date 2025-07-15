#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cout << "Enter the size of the array: ";
    cin >> N;

    vector<int> arr(N);
    vector<int> hash(1e6 + 1, 0); 

    cout << "Enter " << N << " elements of the array: ";
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
        hash[arr[i]]++; // Frequency count
    }

    int Q;
    cout << "Enter number of queries: ";
    cin >> Q;

    cout << "Enter each number to find its frequency:\n";
    while (Q--)
    {
        int x;
        cin >> x;
        cout << "Frequency of " << x << " is: " << hash[x] << endl;
    }

    return 0;
}
