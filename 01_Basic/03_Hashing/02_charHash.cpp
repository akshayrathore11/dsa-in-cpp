#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cout << "Enter a string (any characters): ";
    cin >> s;

    // Precomputation for all 256 ASCII characters
    int hash[256] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[(int)s[i]]++;
    }
 
    int q;
    cout << "Enter number of queries: ";
    cin >> q;

    cout << "Enter " << q << " characters (any valid ASCII character):\n";
    while (q--)
    {
        char c;
        cin >> c;

        // Fetching frequency
        cout << "Frequency of '" << c << "' is: " << hash[(int)c] << endl;
    }

    return 0;
}
