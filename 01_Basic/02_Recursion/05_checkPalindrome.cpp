#include <bits/stdc++.h>
using namespace std;

 bool checkPalindrome(int i, string &s)
{
    if (i >= s.size() / 2)
        return true;
    if (s[i] != s[s.size() - i - 1])
       return false;

    return checkPalindrome(i + 1, s);
}

int main()
{
    puts("Enter String");
    string s;
    cin >> s;

    cout<<checkPalindrome(0, s);

    cout << endl;
    return 0;
}