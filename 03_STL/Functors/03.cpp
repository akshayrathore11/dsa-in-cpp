#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class comparator
{
public:
    bool operator()(int a, int b)
    {
        return a > b;
    }
};

int main()
{
    vector<int> arr = {20, 10, 15};

    sort(arr.begin(), arr.end(), comparator());

    for (int a : arr)
    {
        cout << a << " ";
    }
    cout << endl;

    return 0;
}