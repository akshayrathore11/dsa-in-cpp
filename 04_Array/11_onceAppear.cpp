#include <bits/stdc++.h>
using namespace std;

int getSingleElement(vector<int> &arr)
{

    int n = arr.size();
    int xorr = 0;

    for (int i = 0; i < n; i++)
    {
        xorr = xorr ^ arr[i];
    }
   
    return xorr;
}

int main()
{

    vector<int> arr = {4,4, 1, 2, 1, 2};
    int ans = getSingleElement(arr);
    cout << "The single element is: " << ans << endl;

    cout << endl;
    return 0;
}